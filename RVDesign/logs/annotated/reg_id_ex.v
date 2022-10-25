	// verilator_coverage annotation
	module reg_id_ex(
 020001	    input  wire clk,
%000001	    input  wire rst,
 025429	    input  wire[31:0] id_pc,
 110209	    input  wire[31:0] id_regs_data1,
 102251	    input  wire[31:0] id_regs_data2,
 008225	    input  wire[31:0] id_imm,
 000532	    input  wire[2:0]  id_func3_code, 
 006257	    input  wire       id_func7_code,
 013174	    input  wire[4:0]  id_rd,
 006122	    input  wire       id_br,
 000391	    input  wire       id_mem_read,
 000391	    input  wire       id_mem2reg,
 012901	    input  wire[2:0]  id_alu_op,
 000264	    input  wire       id_mem_write,
 006120	    input  wire[1:0]  id_alu_src1,
 006514	    input  wire[1:0]  id_alu_src2,
 000390	    input  wire       id_br_addr_mode,
 006769	    input  wire       id_regs_write,
	
 006118	    input  wire       id_ex_flush,
	
	    //forwarding
 013158	    input wire[4:0] id_rs1,
 019019	    input wire[4:0] id_rs2,
 001182	    output reg[4:0] ex_rs1,
 001059	    output reg[4:0] ex_rs2,
	
 019304	    output reg[31:0]  ex_pc,
 002462	    output reg[31:0]  ex_regs_data1,
 006467	    output reg[31:0]  ex_regs_data2,
 008132	    output reg[31:0]  ex_imm,
 000530	    output reg[2:0]   ex_func3_code, 
 000267	    output reg        ex_func7_code,
 001202	    output reg[4:0]   ex_rd,
 006122	    output reg        ex_br,
 000390	    output reg        ex_mem_read,
 000391	    output reg        ex_mem2reg,
 018892	    output reg[2:0]   ex_alu_op,
 000262	    output reg        ex_mem_write,
 005992	    output reg[1:0]   ex_alu_src1,
 006381	    output reg[1:0]   ex_alu_src2,
 006510	    output reg        ex_br_addr_mode,
 006642	    output reg        ex_regs_write
	);
	always @(posedge clk) begin
 003159	    if (!rst || id_ex_flush)begin
	        ex_pc           <= 0;
	        ex_regs_data1   <= 0;
	        ex_regs_data2   <= 0;
	        ex_imm          <= 0;
	        ex_func3_code   <= 0;
	        ex_func7_code   <= 0;
	        ex_rd           <= 0;
	        ex_br           <= 0;
	        ex_mem_read     <= 0;
	        ex_mem2reg      <= 0;
	        ex_alu_op       <= 0;
	        ex_mem_write    <= 0;
	        ex_alu_src1     <= 0;
	        ex_alu_src2     <= 0;
	        ex_br_addr_mode <= 0;
	        ex_regs_write   <= 0;
	
	        ex_rs1          <= 0;
	        ex_rs2          <= 0;
	    end 
 006841	    else begin
	        ex_pc           <= id_pc;
	        ex_regs_data1   <= id_regs_data1;
	        ex_regs_data2   <= id_regs_data2;
	        ex_imm          <= id_imm;
	        ex_func3_code   <= id_func3_code;
	        ex_func7_code   <= id_func7_code;
	        ex_rd           <= id_rd;
	        ex_br           <= id_br;
	        ex_mem_read     <= id_mem_read;
	        ex_mem2reg      <= id_mem2reg;
	        ex_alu_op       <= id_alu_op;
	        ex_mem_write    <= id_mem_write;
	        ex_alu_src1     <= id_alu_src1;
	        ex_alu_src2     <= id_alu_src2;
	        ex_br_addr_mode <= id_br_addr_mode;
	        ex_regs_write   <= id_regs_write;
	
	        ex_rs1          <= id_rs1;
	        ex_rs2          <= id_rs2;
	    end
	    $display("ex_regs_data1: %h",ex_regs_data1 );
	    $display("ex_regs_data2: %h",ex_regs_data2 );
	    $display("ex_imm: %h",ex_imm );
	    $display("ex_alu_op: %h",ex_alu_op );
	end
	endmodule
