`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:26:53 04/01/2019
// Design Name:   half_adder_procedural
// Module Name:   /home/student/Downloads/lab06_skel/h_adder_procedural_test.v
// Project Name:  lab06_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_adder_procedural
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module h_adder_procedural_test;

	// Inputs
	reg bit_A;
	reg bit_B;

	// Outputs
	wire sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	half_adder_procedural uut (
		.sum(sum), 
		.carry(carry), 
		.bit_A(bit_A), 
		.bit_B(bit_B)
	);

	initial begin
		// Initialize Inputs
		bit_A = 0;
		bit_B = 0;

		// Wait 100 ns for global reset to finish
		#100;
       
		#100 
		bit_A = 1;
		#100
		bit_B = 1;
		// Add stimulus here

	end
      
endmodule

