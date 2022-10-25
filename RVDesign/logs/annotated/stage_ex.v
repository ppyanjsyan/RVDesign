	// verilator_coverage annotation
	`include "../AdamRiscv/define.vh"
	
	module stage_ex(
 019801	    input  wire[31:0]  ex_pc,  //pc_now
 000106	    input  wire[31:0]  ex_regs_data1,
 000373	    input  wire[31:0]  ex_regs_data2,
 000576	    input  wire[31:0]  ex_imm,
 000034	    input  wire[2:0]   ex_func3_code, 
 000019	    input  wire        ex_func7_code,
 019760	    input  wire[2:0]   ex_alu_op,
 006571	    input  wire[1:0]   ex_alu_src1,
 006588	    input  wire[1:0]   ex_alu_src2,
 006592	    input  wire        ex_br_addr_mode,
 006577	    input  wire        ex_br,
	    //forwarding
 000039	    input  wire[1:0]   forwardA,
 000021	    input  wire[1:0]   forwardB,
 026721	    input  wire[31:0]  me_alu_o,
 026857	    input  wire[31:0]  w_regs_data,
	
 026707	    output wire[31:0]  ex_alu_o,
 020080	    output wire[31:0]  br_pc, //branch address
 006573	    output wire        br_ctrl
	);
	
 026325	wire [3:0]  alu_ctrl;
 020015	wire [31:0] op_A;
 000337	wire [31:0] op_A_pre;
 007221	wire [31:0] op_B;
 000389	wire [31:0] op_B_pre;
 000013	wire        br_mark;
 019874	wire [31:0] br_addr_op_A; 
	
	alu_control u_alu_control(
	    .alu_op     (ex_alu_op     ),
	    .func3_code (ex_func3_code ),
	    .func7_code (ex_func7_code ),
	    .alu_ctrl_r (alu_ctrl      )
	);
	
	
	alu u_alu(
	    .alu_ctrl (alu_ctrl      ),
	    .op_A     (op_A          ),
	    .op_B     (op_B          ),
	    .alu_o    (ex_alu_o      ),
	    .br_mark  (br_mark       )
	);
	
	assign br_addr_op_A = (ex_br_addr_mode == `J_REG) ? ex_regs_data1 : ex_pc;
	assign br_pc        = br_addr_op_A + ex_imm;
	assign op_B         = (ex_alu_src2 == `PC_PLUS4)? 32'd4 : (ex_alu_src2 == `IMM)? ex_imm : op_B_pre;
	assign op_A         = (ex_alu_src1 == `NULL)? 32'd0 : (ex_alu_src1 == `PC)? ex_pc : op_A_pre;
	assign op_B_pre     = (forwardB == `EX_MEM_B)? me_alu_o : (forwardB == `MEM_WB_B)? w_regs_data : ex_regs_data2;
	assign op_A_pre     = (forwardA == `EX_MEM_A)? me_alu_o : (forwardA == `MEM_WB_A)? w_regs_data : ex_regs_data1;
	assign br_ctrl      = br_mark && ex_br;
	
	always @(*) begin
 000019	    if (|forwardA)
	        $display("forwardA! OP_A: %h",op_A);
%000007	    else if (|forwardB)
	        $display("forwardB! OP_B: %h",op_B);
	end
	
	endmodule
	
