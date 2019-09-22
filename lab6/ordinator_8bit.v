`timescale 1ns / 1ps
`include "defines.vh"

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//  
// Module Name:  		ordinator_8bit
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////
//
// digit_point - punctul situat dup fiecare cifr
// progress    - registru legat la cele 8 LED-uri ale plcii
// segment	   - configuraia segmentelor pentru o cifr
// digit	   - selecteaz o cifr din afiajul cu 7 segmente
// add_button  - push-button pentru afiarea sumei
// sub_button  - push-button pentru afiarea diferenei
// op_button   - push-button pentru preluarea operanzilor
//
// Studiai fiierul de constrngeri al modulului.
//
//////////////////////////////////////////////////////////////////////////////////

module ordinator_8bit(
		output digit_point,
		output reg [7:0] progress,
		output [0:6] segment,
		output [3:0] digit,
		input  [7:0] operand,
		input add_button,
		input sub_button,
		input op_button,
		input reset,
		input clk
    );
	
	//////////////////////////////////////////////////////////////////////////////
	//
	// TODO 4: Implementai un circuit care s realizeze suma/diferena a dou numere.
	//		Circuitul trebuie s aib urmtorul comportament:
	//			1. Valorile operanzilor vor fi pe 8 bii i vor fi introduse folosind cele 8 switch-uri
	//			2. Fiecare valoare a celor doi operanzi va fi preluat de circuit la apsarea butonului 'op_button'
	//				Obs: Cte o apsare pentru fiecare operand
	//			3. Dup preluarea operanzilor, circuitul va afia mesajul 'APAS' folosind valoarea predefinit
	//		specificat mai jos.
	//			4. La apsarea butonului:
	//				a) 'add_button' - va fi afiat suma numerelor ct timp butonul este apsat
	//					Obs: La eliberarea butonului va aprea din nou mesajul 'APAS'
	//				b) 'sub_button' - va fi afiat diferena numerelor ct timp butonul este apsat
	//					Obs: La eliberarea butonului va aprea din nou mesajul 'APAS'
	//				c) 'reset' - circuitul va fi resetat i va ajunge din nou la pasul (1)
	//	   [BONUS] Folosii cele 8 LED-uri pentru simularea unei bare de progres. Aprindei cte 2 LED-uri la fiecare pas.
	//				Obs: Folosii registrul 'progress' i valorile predefinite n fiierul defines.vh
	//
	//////////////////////////////////////////////////////////////////////////////

	localparam STATE_INITIAL = 0;
	localparam STATE_OP1_READ = 1;
	localparam STATE_OP2_READ = 2;
	localparam STATE_RESULT_SELECT = 3;
		
	reg [1:0] current_state;
	reg [1:0] next_state;
	
	//////////////////////////////////////////////////////////////////////////////
	//
	// Interfa pentru afiajul cu 7 segmente
	//		-> message = {
	//						1bit_aprins/stins,
	//						1bit_negative_sign,
	//						8bit_value_to_display
	//         };
	//		-> `MESSAGE_ERROR, `MESSAGE_DEFAULT - valori predefinite n defines.vh
	//		-> Convenie:
	//			Pentru valoarea '-0' se va afia mesajul 'APAS'.
	//			`PRESS_MESSAGE = valoare predefinit pentru buffer-ul 'message'
	//						   == {aprins, '-', 0}
	//
	//////////////////////////////////////////////////////////////////////////////
	reg [9:0] message;
	
	display_7_segment_driver display(
		.segment(segment),
		.digit_point(digit_point),
		.digit(digit),
		.message(message),
		.reset(reset),
		.clk(clk)
	);
	
	// TODO 4.1: Declarai parametri de care avei nevoie
	//		Obs: Se vor declara pe parcurs ce avei nevoie de ei
	
	wire add_db, sub_db, op_db;
	
	debouncer db0(add_db, clk, reset, add_button);
	debouncer db1(sub_db, clk, reset, sub_button);
	debouncer db2(op_db, clk, reset, op_button);
	
	reg [7:0] carry_out;
	reg [7:0] result;
	wire carry_in;
	reg [7:0] A;
	reg [7:0] B;
	reg [7:0] counter;
	// TODO 4.2: Instaniai sumatorul, scztorul i alte module la nevoie 
	
	ripple_carry_8bit adder(carry_out, result, operand, A, carry_in);
	subtractor_8bit (carry_out, result, operand, B, carry_in);
	
	always @(posedge clk) begin
		// TODO 4.3: Implementai logica de tranziie dup ceas
		//				-> reset
		//				-> schimbarea strii curente a automatului
		if (reset)
				currentState <= STATE_INITIAL
			else begin 
					counter <= counter + 1;
					if (counter > 1000000) 
						currentState <= NextState;
				   end
		
	end
	
	always @(*) begin
		// TODO 4.4: Implementai logica de schimbare a strilor
		
	end
	
	always @(*) begin
		// TODO 4.5: Definii comportamentul ieirilor pentru fiecare stare
		
	end

endmodule
