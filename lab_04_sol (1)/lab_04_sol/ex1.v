`timescale 1ns / 1ps
module ex1(
    output  reg   out,
    input reset,
    input clk
    );

    localparam STATE_INITIAL = 0;
    localparam STATE_T00 = 1;

    reg [31:0]  count;
    reg         currentState;
    reg         nextState;

    always @(posedge clk) begin
        if (reset == 1) begin
            count <= 0;
            currentState <= STATE_INITIAL;
        end else begin
            count <= count + 1;

            // TODO: Tranzitia de la currentState la nextState.
            if (count == 50000000) begin
                count <= 0;
                currentState <= nextState;
            end
        end
    end

    always @(*) begin
        case (currentState)
            // TODO: Iesire in fiecare stare si care pregatirea starii urmatoare.
            STATE_INITIAL: begin
                out = 0;
                nextState = STATE_T00;
            end

            STATE_T00: begin
                out = 1;
                nextState = STATE_INITIAL;
            end

        endcase
    end
endmodule
