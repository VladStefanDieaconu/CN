// CN1 -  schelet lab02
// procedural
module xor_procedural(
	output reg out,
	input in1,
	input in2
	);

	always @(*) begin
		out = (!in1 && in2) || (in1 && !in2);
	end

endmodule
