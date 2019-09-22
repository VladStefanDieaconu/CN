`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//
// Design Name:   		full_adder
// Module Name:  		full_adder_test.v
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

module full_adder_test;

	// Inputs
	reg bit_A;
	reg bit_B;
	reg carry_in;

	// Outputs
	wire sum;
	wire carry_out;

	// Instantiate the Unit Under Test (UUT)
	full_adder uut (
		.sum(sum), 
		.carry_out(carry_out), 
		.bit_A(bit_A), 
		.bit_B(bit_B), 
		.carry_in(carry_in)
	);

	initial begin
		// Initialize Inputs
		bit_A = 0;
		bit_B = 0;
		carry_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
      
		// TODO 1.6: Adugai cazuri relevante pentru testare.
		#100
		bit_A = 1;
		#100
		bit_B = 1;
		#100
		carry_in = 1;
	end
      
endmodule

