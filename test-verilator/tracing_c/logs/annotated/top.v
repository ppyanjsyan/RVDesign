	// verilator_coverage annotation
	// DESCRIPTION: Verilator: Verilog example module
	//
	// This file ONLY is placed into the Public Domain, for any use,
	// without warranty, 2003 by Wilson Snyder.
	// ======================================================================
	
	// This is intended to be a complex example of several features, please also
	// see the simpler examples/hello_world_c.
	
	module top
	  (
	   // Declare some signals so we can see how I/O works
%000009	   input         clk,
 000042	   input         fastclk,
%000003	   input         reset_l,
	
%000002	   output [1:0]  out_small,
 000155	   output [39:0] out_quad,
%000081	   output [69:0] out_wide,
%000002	   input [1:0]   in_small,
 000174	   input [39:0]  in_quad,
%000035	   input [69:0]  in_wide
	   );
	
	   // Connect up the outputs, using some trivial logic
	   wire [1:0]    out_small = ~reset_l ? '0 : (in_small + 2'b1);
	   wire [39:0]   out_quad  = ~reset_l ? '0 : (in_quad + 40'b1);
	   wire [69:0]   out_wide  = ~reset_l ? '0 : (in_wide + 70'b1);
	
	   // And an example sub module. The submodule will print stuff.
	   sub sub (/*AUTOINST*/
	            // Inputs
	            .clk                        (clk),
	            .fastclk                    (fastclk),
	            .reset_l                    (reset_l));
	
	   // Print some stuff as an example
	   initial begin
	      $display("[%0t] Model running...\n", $time);
	   end
	
	endmodule
	
