	// verilator_coverage annotation
	module reg_ex_mem(
 020001	    input  wire clk,
%000001	    input  wire rst,
 006467	    input  wire[31:0] ex_regs_data2,
 031403	    input  wire[31:0] ex_alu_o,
 001202	    input  wire[4:0]  ex_rd,
 000390	    input  wire       ex_mem_read,
 000391	    input  wire       ex_mem2reg,
 000262	    input  wire       ex_mem_write,
 006642	    input  wire       ex_regs_write,
 000530	    input  wire[2:0]  ex_func3_code, 
	
	    //forwarding
 001059	    input wire[4:0]   ex_rs2,
 001062	    output reg[4:0]   me_rs2,
	
 006474	    output reg[31:0]  me_regs_data2,
 031421	    output reg[31:0]  me_alu_o,
 001202	    output reg[4:0]   me_rd,
 000391	    output reg        me_mem_read,
 000391	    output reg        me_mem2reg,
 000263	    output reg        me_mem_write,
 006641	    output reg        me_regs_write,
 000527	    output reg[2:0]   me_func3_code
	);
	
	always @(posedge clk) begin
 000100	    if (!rst)begin
	        me_regs_data2  <= 0;         
	        me_alu_o       <= 0;     
	        me_rd          <= 0; 
	        me_mem_read    <= 0;     
	        me_mem2reg     <= 0;     
	        me_mem_write   <= 0;         
	        me_regs_write  <= 0;  
	        me_rs2         <= 0;   
	        me_func3_code  <= 0;    
	    end 
 009900	    else begin  
	        me_regs_data2  <= ex_regs_data2;         
	        me_alu_o       <= ex_alu_o;     
	        me_rd          <= ex_rd; 
	        me_mem_read    <= ex_mem_read;     
	        me_mem2reg     <= ex_mem2reg;     
	        me_mem_write   <= ex_mem_write;         
	        me_regs_write  <= ex_regs_write;
	        me_rs2         <= ex_rs2;    
	        me_func3_code  <= ex_func3_code; 
	    end
	
	    $display("me_alu_o: %h",me_alu_o);
	
	end
	
	endmodule
