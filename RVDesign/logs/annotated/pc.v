	// verilator_coverage annotation
	module pc(
 020001	    input  wire         clk,
 006118	    input  wire         br_ctrl, //br
 022831	    input  wire[31:0]   br_addr,
%000001	    input  wire         rst,
 019313	    output reg[31:0]    pc_o,
	    //hazard detection
 000391	    input  wire         pc_stall
	    );
	
 019437	reg [31:0] pc_next;
	
	always @(posedge clk) begin
 000100	    if (!rst)begin
	        pc_o    <= 0;
	    end
 003059	    else if (br_ctrl) begin
	        pc_o <= br_addr;
	        $display("-----------------------");
	        $display("PC_o = BR_addr: %h", pc_o);
	    end
 000195	    else if (pc_stall) begin
	        pc_o <= pc_o;
	        $display("-----------------------");
	        $display("PC_o = stall: %h", pc_o);
	    end
 006646	    else begin
	        pc_o <= pc_next;
	        $display("-----------------------");
	        $display("PC_O = PC_next: %h", pc_o);
	    end
	end
	
	always @(posedge clk) begin
 000100	    if (!rst)begin
	        pc_next  <= 4;
	    end
 003059	    else if (br_ctrl) begin
	        pc_next <= br_addr + 4;
	        //$display("PC_next = BR_addr: %h", pc_next);
	    end
 000195	    else if (pc_stall) begin
	        pc_next <= pc_next;
	        // $strobe("PC_next = stall: %h", pc_next);
	    end
 006646	    else begin
	        pc_next <= pc_next + 4;
	    end
	end
	
	endmodule
	
