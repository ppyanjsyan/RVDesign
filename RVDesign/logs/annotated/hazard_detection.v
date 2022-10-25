	// verilator_coverage annotation
	module hazard_detection(
%000002	    input  wire      ex_mem_read,
 002953	    input  wire[4:0] id_rs1,
 001800	    input  wire[4:0] id_rs2,
 000038	    input  wire[4:0] ex_rd,
 000588	    input  wire      br_ctrl,
%000003	    output wire      load_stall,
 000588	    output wire      flush
	);
	assign load_stall = ex_mem_read && (ex_rd == id_rs1 || ex_rd == id_rs2);
	assign flush      = br_ctrl;
	
	
	endmodule
