module adder_subtractor(
    output  [3:0]   R,
    input   [3:0]   A,
    input   [3:0]   B,
    input           button
    );

    wire    [3:0]   S;
    ripple_carry_adder #(
        .DATA_WIDTH(4)
    ) rca (
        .S(S),
        .A(A),
        .B(B),
        .Cin(0)
    );

    wire    [3:0]   D;
    ripple_carry_subtractor #(
        .DATA_WIDTH(4)
    ) rcs (
        .D(D),
        .A(A),
        .B(B),
        .Cin(0)
    );

    assign R = (button) ? D : S;
endmodule
