module multiplier(
        output  [7: 0]  out,
        input   [3: 0]  M,
        input   [3: 0]  R
    );

    wire [3:0] not_M;
    wire [3:0] neg_M;

    wire dontcare;

    assign not_M = ~M;

    // neg_M = not_M + 1;
    adder complement_m(neg_M, not_M, 1);

    reg [8:0] P;
    reg [8:0] A;
    reg [8:0] S;

    always @(*) begin
        P = {4'b0, R, 1'b0};
        A = {M, 5'b0};
        S = {neg_M, 5'b0};

        repeat(4) begin
            case(P[1:0])
                2'b01:
                    P = P + A;
                2'b10:
                    P = P + S;
            endcase

            P = $signed(P) >>> 1;
        end
    end

    assign out = P[8:1];

endmodule
