`include "defines.vh"
module subtractor(
        output  [7: 0]  D,
        input   [3: 0]  A,
        input   [3: 0]  B
    );

    wire [3:0] not_B;
    wire [3:0] neg_B;

    assign not_B = ~B;

    // neg_B = not_B + 1;
    adder complement_b(neg_B, not_B, 1);

    // D = A - B;
    adder dif(D[3:0], A, neg_B);

    // Sign-extension: 1101 --> 1111 1101
    //assign D[7: 4] = {4{D[3]}};
	 assign D[`ZF] = (D == 0);
	 assign D[`SF] = (D[3] == 1);

endmodule
