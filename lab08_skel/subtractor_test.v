`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:50:57 04/15/2019
// Design Name:   subtractor
// Module Name:   /home/student/Desktop/lab08_skel/subtractor_test.v
// Project Name:  lab08
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: subtractor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module subtractor_test;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;

	// Outputs
	wire [7:0] D;

	// Instantiate the Unit Under Test (UUT)
	subtractor uut (
		.D(D), 
		.A(A), 
		.B(B)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		A = 5;
		#100
		B = 2;
        
		// Add stimulus here

	end
      
endmodule

