module ripple_carry_subtractor #(
        parameter DATA_WIDTH = 8
    )(
        output  [DATA_WIDTH - 1: 0] D,
        output                      Cout,
        input   [DATA_WIDTH - 1: 0] A,
        input   [DATA_WIDTH - 1: 0] B,
        input                       Cin
    );

    wire    [DATA_WIDTH - 1: 0] notB;
    assign notB = ~B;

    wire    [DATA_WIDTH - 1: 0] negB;
    ripple_carry_adder #(
        .DATA_WIDTH(DATA_WIDTH)
    ) rca0 (
        .S(negB),
        .A(1),
        .B(notB),
        .Cin(0)
    );

    ripple_carry_adder #(
        .DATA_WIDTH(DATA_WIDTH)
    ) rca1 (
        .S(D),
        .Cout(Cout),
        .A(A),
        .B(negB),
        .Cin(Cin)
    );
endmodule
