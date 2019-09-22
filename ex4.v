`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:27:18 03/26/2019 
// Design Name: 
// Module Name:    ex4 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ex4(
	 output  reg AN0,
    output  reg AN1,
    output  reg AN2,
    output  reg AN3,
    output  reg CA,
    output  reg CB,
    output  reg CC,
    output  reg CD,
    output  reg CE,
    output  reg CF,
    output  reg CG,
    output  reg DP,
    input       button,
    input       reset,
    input       clk
    );
	

    localparam STATE_0 = 0;
    localparam STATE_1 = 1;
    localparam STATE_2 = 2;
    localparam STATE_3 = 3;

	task disp;
	input reg [2:0]cifra;
	input reg [4:0]numar;
	  output  reg AN0,
       AN1,
      AN2,
       AN3,
       CA,
       CB,
       CC,
       CD,
       CE,
       CF,
       CG,
       DP;
	 begin
	 case(cifra) 
	0: begin
		AN0 = 0;
		AN1 = 1;
		AN2 = 1;
		AN3 = 1;
		end
	1: begin
		AN0 = 1;
		AN1 = 0;
		AN2 = 1;
		AN3 = 1;
		end
	2: begin
		AN0 = 1;
		AN1 = 1;
		AN2 = 0;
		AN3 = 1;
		end
	3: begin
		AN0 = 1;
		AN1 = 1;
		AN2 = 1;
		AN3 = 0;
		end
		endcase

	case (numar)
	0: begin
		CA = 0;
		CB = 0;
		CC = 0;
		CD = 0;
		CE = 0;
		CF = 0;
		CG = 1;
		DP = 1;
	end
	1: begin
		CA = 1;
		CB = 0;
		CC = 0;
		CD = 1;
		CE = 1;
		CF = 1;
		CG = 1;
		DP = 1;
	end
		2: begin
		CA = 0;
		CB = 0;
		CC = 1;
		CD = 0;
		CE = 0;
		CF = 1;
		CG = 0;
		DP = 1;
	end

	3: begin
		CA = 0;
		CB = 0;
		CC = 0;
		CD = 0;
		CE = 1;
		CF = 1;
		CG = 0;
		DP = 1;
	end

	4: begin
		CA = 1;
		CB = 0;
		CC = 0;
		CD = 1;
		CE = 1;
		CF = 0;
		CG = 0;
		DP = 1;
	end

	5: begin
		CA = 0;
		CB = 1;
		CC = 0;
		CD = 0;
		CE = 1;
		CF = 0;
		CG = 0;
		DP = 1;
	end

	6: begin
		CA = 0;
		CB = 1;
		CC = 0;
		CD = 0;
		CE = 0;
		CF = 0;
		CG = 0;
		DP = 1;
	end

	7: begin
		CA = 0;
		CB = 0;
		CC = 0;
		CD = 1;
		CE = 1;
		CF = 1;
		CG = 1;
		DP = 1;
	end
		8: begin
		CA = 0;
		CB = 0;
		CC = 0;
		CD = 0;
		CE = 0;
		CF = 0;
		CG = 0;
		DP = 1;
	end
		9: begin
		CA = 0;
		CB = 0;
		CC = 0;
		CD = 0;
		CE = 1;
		CF = 0;
		CG = 0;
		DP = 1;
	end
	endcase
	 end
	 endtask
	 
	 
    reg [1:0]   currentState;
    reg [1:0]   nextState;

    reg [31:0]  delay;
	 reg[31:0] clock;
    reg [15:0]  count;
	 wire deb;
	 reg button_pressed;
	 debouncer(deb,clk,reset,button);

    always @(posedge clk) begin
        if (reset) begin
            currentState <= STATE_0;
            delay <= 0;
            count <= 0;
				clock <= 0;
        end else begin
		  clock <= clock+1;
				if(clock > 10000000) begin
				clock <= 0;
				count <= count + 1;
						if (count > 9998) begin
							count <= 0;
						end
						
				end
				
				delay <= delay + 1;
				if (delay > 100000) begin
					currentState <= nextState;
					delay <= 0;
				end
            // TODO: Intarzierea schimbarii de stare.
        end
    end

    always @(*) begin
        case (currentState)
            // TODO
			STATE_0: begin
			disp(3, ((count/600)% 10), AN0, AN1, AN2,AN3, CA,CB,CC, CD, CE,CF,CG,DP);
			nextState <= STATE_1;
			end
			
			STATE_1: begin
			disp(2, ((count/60)% 10), AN0, AN1, AN2,AN3, CA,CB,CC, CD, CE,CF,CG,DP);
			nextState <= STATE_2;

			end
			
			STATE_2: begin
			disp(1, ((count%60)/ 10), AN0, AN1, AN2,AN3, CA,CB,CC, CD, CE,CF,CG,DP);
			nextState <= STATE_3;

			end
			
			STATE_3: begin
			disp(0, (count% 10), AN0, AN1, AN2,AN3, CA,CB,CC, CD, CE,CF,CG,DP);
			nextState <= STATE_0;

			end
        endcase
    end


endmodule
