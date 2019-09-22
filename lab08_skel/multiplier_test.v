`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:08:48 04/15/2019
// Design Name:   multiplier
// Module Name:   /home/student/Desktop/lab08_skel/multiplier_test.v
// Project Name:  lab08
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module multiplier_test;

	// Inputs
	reg [3:0] M;
	reg [3:0] R;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	multiplier uut (
		.out(out), 
		.M(M), 
		.R(R)
	);

	initial begin
		// Initialize Inputs
		M = 0;
		R = 0;

		// Wait 100 ns for global reset to finish
		#100;
	
        
		// Add stimulus here
		M = 0110;
		#100
		R = 0011;
	end
      
endmodule

