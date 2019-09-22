`include "defines.vh"
module multiplier(
        output  [7: 0]  out,
        input   [3: 0]  M,
        input   [3: 0]  R
    );
    //  Implement Booth's algorithm

    wire [3:0] not_M;
    wire [3:0] neg_M;

    assign not_M = ~M;

    // TODO: "neg_M = not_M + 1" using adder
	 adder ad(neg_M, not_M, 1);
	 
    reg [8:0] P;
    reg [8:0] A;
    reg [8:0] S;

    always @(*) begin
        // TODO: calculate P,A and S
		  A = {M, 5'b0};
		  S = {neg_M, 5'b0};
		  P = {4'b0, R, 1'b0};
        repeat(4) begin
            // Pas 3
				case(P[1:0])
				2'b01: P = P + A;
				2'b10: P = P + S;
				endcase
				
				// Pas 4
				P = $signed(P)>>>1;
				
        end
    end

    // TODO: assign in out the product of M and R
	 assign out = P[8:1];

endmodule
