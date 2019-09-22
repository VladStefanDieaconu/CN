`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//
// Design Name:   		ripple_carry_8bit
// Module Name:  		ripple_carry_8bit_test.v
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

module ripple_carry_8bit_test;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg carry_in;

	// Outputs
	wire carry_out;
	wire [7:0] sum;

	// Instantiate the Unit Under Test (UUT)
	ripple_carry_8bit uut (
		.carry_out(carry_out), 
		.sum(sum), 
		.A(A), 
		.B(B), 
		.carry_in(carry_in)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		carry_in = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// TODO 2: Adaugati cazuri relevante pentru testare.
		#100
		A = 8'b01001101;
		#100
		B = 8'b10010101;
		#100
		carry_in = 1;
	end
      
endmodule

