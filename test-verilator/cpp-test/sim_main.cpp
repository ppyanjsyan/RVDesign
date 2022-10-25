#include "Vour.h"    // Verilog模块会被编译成Vxxx
#include "verilated.h"
int main(int argc, char **argv, char **env){
    Verilated::commandArgs(argc, argv);            // Verilator仿真运行时参数（和编译的参数不一样，详见Verilator手册第6章
    Vour *top = new Vour;
    while (!Verilated::gotFinish()) { top->eval(); }
    delete top;
    exit(0);
}
