`timescale 1ns/100ps
module our;
    initial begin 
	    clk = 0;
	    $display("Hello World!!!"); $finish; 
    end
    reg clk;
    always #1 clk = ~clk;
endmodule
