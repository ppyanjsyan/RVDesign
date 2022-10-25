	// verilator_coverage annotation
	`include "../AdamRiscv/define.vh"
	
	
	module forwarding(
 000066	    input wire[4:0]   ex_rs1,
 000065	    input wire[4:0]   ex_rs2,
 000086	    input wire[4:0]   me_rd,
 000084	    input wire[4:0]   wb_rd,
 000068	    input wire[4:0]   me_rs2,
 000015	    input wire        me_mem_write,
 006599	    input wire        me_regs_write,
 006599	    input wire        wb_regs_write,
	    //forwarding for alu_operatant
 000039	    output wire[1:0]  forwardA,
 000021	    output wire[1:0]  forwardB,
	    //forwarding for data_memory write_data
 000012	    output wire       forward_data
	);
	
	// alu_operatant forwarding
 000016	wire ex_hazard_a;
 000017	wire ex_hazard_b;
 000023	wire mem_hazard_a;
%000005	wire mem_hazard_b;
	//data_memory write_data forwarding for store
 000012	wire hazard_data_w;
	
	assign ex_hazard_a   = me_regs_write && (me_rd != 0) && (me_rd == ex_rs1); //me_rd != 0 : don't forward the result when rd is x0
	assign ex_hazard_b   = me_regs_write && (me_rd != 0) && (me_rd == ex_rs2);
	assign mem_hazard_a  = wb_regs_write && (wb_rd != 0) && (wb_rd == ex_rs1); 
	assign mem_hazard_b  = wb_regs_write && (wb_rd != 0) && (wb_rd == ex_rs2);
	assign hazard_data_w = wb_regs_write && (wb_rd != 0) && (wb_rd == me_rs2) && me_mem_write; //for store
	
	assign forwardA     = ex_hazard_a ? `EX_MEM_A : mem_hazard_a ? `MEM_WB_A : `ID_EX_A;
	assign forwardB     = ex_hazard_b ? `EX_MEM_B : mem_hazard_b ? `MEM_WB_B : `ID_EX_B;
	assign forward_data = hazard_data_w ? 1 : 0;
	
	always @(*) begin
 000019	    if (|forwardA)
	        $display("forwardA! ex_hazard: %b, mem_hazard: %b",ex_hazard_a,mem_hazard_a);
%000007	    else if (|forwardB)
	        $display("forwardB! ex_hazard: %b, mem_hazard: %b",ex_hazard_b,mem_hazard_b);
%000006	    else if (forward_data)
	        $display("forward4store! hazard_data: %b",hazard_data_w);
	end
	
	endmodule
	
