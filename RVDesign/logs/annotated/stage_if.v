	// verilator_coverage annotation
	module stage_if(
 020001	    input  wire          clk,
%000001	    input  wire          rst,
 000391	    input  wire          pc_stall,
 022831	    input  wire[31:0]    br_addr,
 006118	    input  wire          br_ctrl,
 133428	    output wire[31:0]    if_inst,
 019313	    output wire[31:0]    if_pc
	);
	
	pc u_pc(
	    .clk      (clk      ),
	    .br_ctrl  (br_ctrl  ),
	    .br_addr  (br_addr  ),
	    .rst      (rst      ),
	    .pc_o     (if_pc    ),
	    .pc_stall (pc_stall )
	);
	
	inst_memory #(
	    .IROM_SPACE (1024 )
	)inst_memory(
	    .inst_addr (if_pc     ),
	    .inst_o    (if_inst      )
	);
	
	
	endmodule
	
