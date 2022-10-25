	// verilator_coverage annotation
	module stage_wb(
%000041	    input  wire[31:0]  wb_mem_data,
 000086	    input  wire[31:0]  wb_alu_o,
%000003	    input  wire        wb_mem2reg,
 000101	    output wire[31:0]  w_regs_data
	);
	
	assign w_regs_data = wb_mem2reg ? wb_mem_data : wb_alu_o;
	
	endmodule
	
