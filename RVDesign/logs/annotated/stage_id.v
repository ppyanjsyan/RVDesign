	// verilator_coverage annotation
	module stage_id(
 020001	    input wire         clk,
%000001	    input wire         rst,
 114954	    input wire[31:0]   id_inst,
 006640	    input wire         w_regs_en,
 001200	    input wire[4:0]    w_regs_addr,
 033555	    input wire[31:0]   w_regs_data,
 000391	    input wire         ctrl_stall,
 110209	    output  wire[31:0] id_regs_data1,
 102251	    output  wire[31:0] id_regs_data2,
 008225	    output  wire[31:0] id_imm,
 000532	    output  wire[2:0]  id_func3_code, 
 006257	    output  wire       id_func7_code,
 013174	    output  wire[4:0]  id_rd,
 006122	    output  wire       id_br,
 000391	    output  wire       id_mem_read,
 000391	    output  wire       id_mem2reg,
 012901	    output  wire[2:0]  id_alu_op,
 000264	    output  wire       id_mem_write,
 006120	    output  wire[1:0]  id_alu_src1,
 006514	    output  wire[1:0]  id_alu_src2,
 000390	    output  wire       id_br_addr_mode,
 006769	    output  wire       id_regs_write,
	    //forwarding
 013158	    output  wire[4:0]  id_rs1,
 019019	    output  wire[4:0]  id_rs2
	
	);
	
 006121	wire        br          ;
 000390	wire        mem_read    ;
 000390	wire        mem2reg     ;
 012902	wire[2:0]   alu_op      ;
 000264	wire        mem_write   ;
 006120	wire[1:0]   alu_src1    ;
 006385	wire[1:0]   alu_src2    ;
%000000	wire        br_addr_mode;
 006513	wire        regs_write  ;
	
	
	regs u_regs(
	    .clk          (clk              ),
	    .rst          (rst              ),
	    .r_regs_addr1 (id_inst[19:15]   ),
	    .r_regs_addr2 (id_inst[24:20]   ),
	    .w_regs_addr  (w_regs_addr      ),
	    .w_regs_data  (w_regs_data      ),
	    .w_regs_en    (w_regs_en        ),
	    .r_regs_o1    (id_regs_data1    ),
	    .r_regs_o2    (id_regs_data2    )
	);
	
	ctrl u_ctrl(
	    .inst_op        (id_inst[6:0] ),
	    .br             (br           ),
	    .mem_read       (mem_read     ),
	    .mem2reg        (mem2reg      ),
	    .alu_op         (alu_op       ),
	    .mem_write      (mem_write    ),
	    .alu_src1       (alu_src1     ),
	    .alu_src2       (alu_src2     ),
	    .br_addr_mode   (br_addr_mode ),
	    .regs_write     (regs_write   )
	);
	
	imm_gen u_imm_gen(
	    .inst  (id_inst  ),
	    .imm_o (id_imm   )
	);
	
	assign id_rd         = id_inst[11:7];
	assign id_func3_code = id_inst[14:12];
	assign id_func7_code = id_inst[30];
	
	assign id_rs1 = id_inst[19:15];
	assign id_rs2 = id_inst[24:20];
	
	//stall
	assign id_br           = (ctrl_stall == 1) ? 0 : br             ;
	assign id_mem_read     = (ctrl_stall == 1) ? 0 : mem_read       ;       
	assign id_mem2reg      = (ctrl_stall == 1) ? 0 : mem2reg        ;      
	assign id_alu_op       = (ctrl_stall == 1) ? 0 : alu_op         ;     
	assign id_mem_write    = (ctrl_stall == 1) ? 0 : mem_write      ;            
	assign id_alu_src1     = (ctrl_stall == 1) ? 0 : alu_src1       ;
	assign id_alu_src2     = (ctrl_stall == 1) ? 0 : alu_src2       ; 
	assign id_br_addr_mode = (ctrl_stall == 1) ? 0 : br_addr_mode   ;       
	assign id_regs_write   = (ctrl_stall == 1) ? 0 : regs_write     ;             
	
	
	
	endmodule
