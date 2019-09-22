`timescale 1ns / 1ps
module ex3(
    output  reg [7:0]   out,
    input button,
    input reset,
    input clk
    );

    localparam STATE_INITIAL = 0;
    localparam STATE_T00 = 1;
    localparam STATE_T01 = 2;

    reg button_pressed;
    wire button_debounced;

    debouncer db(button_debounced, clk, reset, button);

    reg [31:0]  red;
    reg [31:0]  green;
    reg [1:0]   currentState;
    reg [1:0]   nextState;
	 
	 initial begin
		red = 0;
		green = 0;
		currentState = STATE_INITIAL;
		button_pressed = 0;
	 end

    always @(posedge clk) begin
        case (currentState)
            STATE_INITIAL: begin
                out = 8'b00000000;
                nextState = STATE_T00;
            end

            STATE_T00: begin
                out = 8'b11110000;
                if (button_debounced) begin
                    if (!button_pressed) begin
                        button_pressed <= 1;
                        red <= 0;
                    end
                end

                if (button_pressed) begin
							out = 8'b11110001;
                    red <= red + 1;
                    if (red > 400000000) begin
                        red <= 0;
                        nextState = STATE_T01;
                    end
                end
            end

            STATE_T01: begin
                out = 8'b00001111;
                button_pressed <= 0;
                
                green <= green + 1;
                if (green > 400000000) begin
                    green <= 0;
                    nextState = STATE_T00;
                end
            end
            
        endcase
        currentState = nextState;
    end
endmodule
