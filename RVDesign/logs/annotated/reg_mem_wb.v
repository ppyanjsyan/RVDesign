	// verilator_coverage annotation
	module reg_mem_wb(
 020001	    input  wire clk,
%000001	    input  wire rst,
 001647	    input  wire[31:0] me_mem_data,
 031421	    input  wire[31:0] me_alu_o,
 001202	    input  wire[4:0]  me_rd,
 000391	    input  wire       me_mem2reg,
 006641	    input  wire       me_regs_write,
 001665	    output reg[31:0]  wb_mem_data,
 031410	    output reg[31:0]  wb_alu_o,
 001200	    output reg[4:0]   wb_rd,
 000391	    output reg        wb_mem2reg,
 006640	    output reg        wb_regs_write
	);
	
	always @(posedge clk) begin
 000100	    if (!rst)begin
	        wb_mem_data    <= 0;     
	        wb_alu_o       <= 0;     
	        wb_rd          <= 0; 
	        wb_mem2reg     <= 0;     
	        wb_regs_write  <= 0;              
	    end 
 009900	    else begin
	        wb_mem_data    <= me_mem_data;     
	        wb_alu_o       <= me_alu_o;     
	        wb_rd          <= me_rd; 
	        wb_mem2reg     <= me_mem2reg;     
	        wb_regs_write  <= me_regs_write;   
	    end
	    $display("wb_mem_data  : %h",wb_mem_data);
	    $display("wb_alu_o     : %h",wb_alu_o);
	    $display("wb_mem2reg   : %h",wb_mem2reg);
	    $display("wb_regs_write: %h",wb_regs_write);
	end
	
	endmodule
