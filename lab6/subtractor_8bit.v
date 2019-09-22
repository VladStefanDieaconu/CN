`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//  
// Module Name:  		subtractor_8bit
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

module subtractor_8bit(
		output carry_out,
		output [7:0] result,
		input  [7:0] A,
		input  [7:0] B,
		input carry_in
    );

	// TODO 3: Implementai un scztor pe 8 bii folosind sumatorul ripple-carry implementat
	// Conventie: result = A - B
	// Hint: Complement fata de 2
ripple_carry_8bit rc (carry_out, result, A, ~B + 1, carry_in);
endmodule
