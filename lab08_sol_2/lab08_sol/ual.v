module ual(
        output  [7: 0]  out,
        input   [3: 0]  in0,
        input   [3: 0]  in1,
        input   [4: 0]  sel
    );

    wire    [7: 0]  out_nander;
    wire    [7: 0]  out_xorer;
    wire    [7: 0]  out_adder;
    wire    [7: 0]  out_subtractor;
    wire    [7: 0]  out_multiplier;

    assign out_nander = {3'b0,(~(in0 & in1)) == 4'b0000 ? 1 : 0, ~(in0 & in1)};
    assign out_xorer = {4'b0, (in0 ^ in1) == 4'b0000 ? 1 : 0, in0 ^ in1};
    adder a(out_adder, in0, in1);
    subtractor s(out_subtractor, in0, in1);
    multiplier m(out_multiplier, in0, in1);

    // sel == 0 => NAND
    // sel == 1 => XOR
    // sel == 2 => ADD
    // sel == 3 => SUB
    // sel == 4 => MUL
    assign out =
        (sel == 5'd1)? out_nander :
        (sel == 5'd2)? out_xorer :
        (sel == 5'd4)? out_adder:
        (sel == 5'd8)? out_subtractor :
        (sel == 5'd16)? out_multiplier :
        8'd0;
endmodule