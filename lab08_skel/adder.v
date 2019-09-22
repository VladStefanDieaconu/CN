`include "defines.vh"
module adder(
        output  [7: 0]  S,
        input   [3: 0]  A,
        input   [3: 0]  B
    );
	
	// TODO: Implement a carry look-ahead adder
	 wire [3 : 0] c;
    wire [3 : 0] g, p;
    
	 
    
    assign g[0] = A[0] & B[0];
    assign p[0] = A[0] | B[0];
    
    assign g[1] = A[1] & B[1];
    assign p[1] = A[1] | B[1];
    
    assign g[2] = A[2] & B[2];
    assign p[2] = A[2] | B[2];
    
    assign g[3] = A[3] & B[3];
    assign p[3] = A[3] | B[3];
    
    
    assign c[0] = g[0] | (p[0] & 0);
    assign c[1] = g[1] | (g[0] & p[1]) | (0 & p[0] & p[1]);
    assign c[2] = g[2] | (g[1] & p[2]) | (g[0] & p[1] & p[2]) | (0 & p[0] & p[1] & p[2]);   
    
    assign S[0] = 0 ^ A[0] ^ B[0];
    assign S[1] = c[0] ^ A[1] ^ B[1];    
    assign S[2] = c[1] ^ A[2] ^ B[2];
    assign S[3] = c[2] ^ A[3] ^ B[3];
   
    

endmodule
