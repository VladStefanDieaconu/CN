module ripple_carry_adder #(
        parameter DATA_WIDTH = 8
    )(
        output  [DATA_WIDTH - 1: 0] S,
        output                      Cout,
        input   [DATA_WIDTH - 1: 0] A,
        input   [DATA_WIDTH - 1: 0] B,
        input                       Cin
    );

    wire    [DATA_WIDTH: 0] C;

    assign C[0] = Cin;
    assign Cout = C[DATA_WIDTH];

    genvar i;
    generate
        for (i = 0; i < DATA_WIDTH; i = i + 1) begin: ADDERS
            full_adder fa(S[i], C[i + 1], A[i], B[i], C[i]);
        end
    endgenerate
endmodule
