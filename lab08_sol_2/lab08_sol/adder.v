`include "defines.vh"
module adder(
        output  [7: 0]  S,
        input   [3: 0]  A,
        input   [3: 0]  B
    );

    wire [4:0] c;
    assign c[0] = 0;
    assign c[1] = A[0] & B[0] | c[0] & (A[0] | B[0]);
    assign c[2] = A[1] & B[1] | c[1] & (A[1] | B[1]);
    assign c[3] = A[2] & B[2] | c[2] & (A[2] | B[2]);
    assign c[4] = A[3] & B[3] | c[3] & (A[3] | B[3]);

    wire [3:0] dontcare;

    full_adder f0(S[0], dontcare[0], A[0], B[0], c[0]);
    full_adder f1(S[1], dontcare[1], A[1], B[1], c[1]);
    full_adder f2(S[2], dontcare[2], A[2], B[2], c[2]);
    full_adder f3(S[3], dontcare[3], A[3], B[3], c[3]);

    // S[4] == c[4];
    //assign S[7: 4] = {3'b0, c[4]};
	 assign S[`CF] = (c[4] == 1);
	 assign S[`ZF] = (S == 0);
	 assign S[`OF] = (c[4] == 1);

endmodule
