	// verilator_coverage annotation
	module reg_if_id(
 020001	    input wire clk,
%000001	    input wire rst,
 019313	    input wire[31:0] if_pc,
 133428	    input wire[31:0] if_inst,
 114954	    output reg[31:0] id_inst,
 025429	    output reg[31:0] id_pc,
	    //hazard detection
 006118	    input  wire if_id_flush,
 000391	    input  wire if_id_stall
	);
	
	always @(posedge clk) begin
 003159	    if (!rst || if_id_flush)begin
	        id_inst <= 32'b0;
	        id_pc   <= 32'b0;
	        $display("if_id_flush pc: %h",id_pc);
	    end
 000195	    else if (if_id_stall) begin
	        id_inst <= id_inst;
	        id_pc   <= id_pc;   
	        $display("if_id_stall, inst: %h, \npc: %h", id_inst,id_pc );     
	    end
 006646	    else begin
	        id_inst <= if_inst;
	        id_pc   <= if_pc;
	        $display("id_inst: %h",id_inst );        
	    end
	end
	
	endmodule
