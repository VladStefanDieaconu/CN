`timescale 1ns / 1ps

module test_ripple_carry_adder;

        // Inputs
        reg [7:0] A;
        reg [7:0] B;
        reg Cin;

        // Outputs
        wire [7:0] S;
        wire Cout;

        // Instantiate the Unit Under Test (UUT)
        ripple_carry_adder #(
                .DATA_WIDTH(8)
        ) uut (
                .S(S),
                .Cout(Cout),
                .A(A),
                .B(B),
                .Cin(Cin)
        );

        initial begin
                // Initialize Inputs
                A = 0;
                B = 0;
                Cin = 0;

                // Wait 100 ns for global reset to finish
                #100;

                // Add stimulus here
                A = 15; B = 20;
                #100 A = 7; B = 44;
                #100 A = 130; B = 17;
                #100 A = 174; B = 100;
                #100 A = 95; B = 200;
        end
endmodule
