module ual(
        output  wire [7: 0]  out,
        input   [3: 0]  in0,
        input   [3: 0]  in1,
        input   [4: 0]  sel
    );

    wire    [7: 0]  out_nander;
    wire    [7: 0]  out_xorer;
    wire    [7: 0]  out_adder;
    wire    [7: 0]  out_subtractor;
    wire    [7: 0]  out_multiplier;

    //assign out_nander = // TODO use operators: and, not to implement NAND
    //assign out_xorer = // TODO use XOR operator
	 assign out_nander = ~(in0 & in1);
	 assign out_xorer = (in0 ^ in1);
    // TODO use adder and put the result in out_adder
    // TODO use subtractor and put the result in out_subtractor
    // TODO use multiplier and put the result in out_multiplier
	adder ad(out_adder, in0, in1);
	subtractor sb(out_subtractor, in0, in1);
	multiplier mult(out_multiplier, in0, in1);
	
    // sel == 1 => NAND
    // sel == 2 => XOR
    // sel == 4 => ADD
    // sel == 8 => SUB
    // sel == 16 => MUL
	 
	// TODO: use "?:"
	
	assign out = (sel[0] == 1? out_nander: sel[1] == 1? out_xorer: sel[2] == 1? out_adder: sel[3] == 1? out_subtractor: out_multiplier);
	

endmodule
