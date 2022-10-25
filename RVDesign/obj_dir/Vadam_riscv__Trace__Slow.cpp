// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadam_riscv__Syms.h"


//======================

void Vadam_riscv::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&Vadam_riscv::traceInit, &Vadam_riscv::traceFull, &Vadam_riscv::traceChg, this);
}
void Vadam_riscv::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vadam_riscv* t=(Vadam_riscv*)userthis;
    Vadam_riscv__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vadam_riscv::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vadam_riscv* t=(Vadam_riscv*)userthis;
    Vadam_riscv__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void Vadam_riscv::traceInitThis(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vadam_riscv::traceFullThis(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vadam_riscv::traceInitThis__1(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+123,"clk",-1);
	vcdp->declBit  (c+124,"rst",-1);
	vcdp->declBit  (c+123,"adam_riscv clk",-1);
	vcdp->declBit  (c+124,"adam_riscv rst",-1);
	vcdp->declBit  (c+1,"adam_riscv br_ctrl",-1);
	vcdp->declBus  (c+2,"adam_riscv br_addr",-1,31,0);
	vcdp->declBit  (c+3,"adam_riscv stall",-1);
	vcdp->declBus  (c+45,"adam_riscv if_pc",-1,31,0);
	vcdp->declBus  (c+4,"adam_riscv if_inst",-1,31,0);
	vcdp->declBit  (c+1,"adam_riscv flush",-1);
	vcdp->declBus  (c+46,"adam_riscv id_inst",-1,31,0);
	vcdp->declBus  (c+47,"adam_riscv id_pc",-1,31,0);
	vcdp->declBit  (c+48,"adam_riscv w_regs_en",-1);
	vcdp->declBus  (c+49,"adam_riscv w_regs_addr",-1,4,0);
	vcdp->declBus  (c+5,"adam_riscv w_regs_data",-1,31,0);
	vcdp->declBus  (c+6,"adam_riscv id_regs_data1",-1,31,0);
	vcdp->declBus  (c+7,"adam_riscv id_regs_data2",-1,31,0);
	vcdp->declBus  (c+8,"adam_riscv id_imm",-1,31,0);
	vcdp->declBus  (c+50,"adam_riscv id_func3_code",-1,2,0);
	vcdp->declBit  (c+51,"adam_riscv id_func7_code",-1);
	vcdp->declBus  (c+52,"adam_riscv id_rd",-1,4,0);
	vcdp->declBit  (c+9,"adam_riscv id_br",-1);
	vcdp->declBit  (c+10,"adam_riscv id_mem_read",-1);
	vcdp->declBit  (c+11,"adam_riscv id_mem2reg",-1);
	vcdp->declBus  (c+12,"adam_riscv id_alu_op",-1,2,0);
	vcdp->declBit  (c+13,"adam_riscv id_mem_write",-1);
	vcdp->declBus  (c+14,"adam_riscv id_alu_src1",-1,1,0);
	vcdp->declBus  (c+15,"adam_riscv id_alu_src2",-1,1,0);
	vcdp->declBit  (c+16,"adam_riscv id_br_addr_mode",-1);
	vcdp->declBit  (c+17,"adam_riscv id_regs_write",-1);
	vcdp->declBus  (c+53,"adam_riscv id_rs1",-1,4,0);
	vcdp->declBus  (c+54,"adam_riscv id_rs2",-1,4,0);
	vcdp->declBus  (c+55,"adam_riscv ex_rs1",-1,4,0);
	vcdp->declBus  (c+56,"adam_riscv ex_rs2",-1,4,0);
	vcdp->declBus  (c+57,"adam_riscv ex_pc",-1,31,0);
	vcdp->declBus  (c+58,"adam_riscv ex_regs_data1",-1,31,0);
	vcdp->declBus  (c+59,"adam_riscv ex_regs_data2",-1,31,0);
	vcdp->declBus  (c+60,"adam_riscv ex_imm",-1,31,0);
	vcdp->declBus  (c+61,"adam_riscv ex_func3_code",-1,2,0);
	vcdp->declBit  (c+62,"adam_riscv ex_func7_code",-1);
	vcdp->declBus  (c+63,"adam_riscv ex_rd",-1,4,0);
	vcdp->declBit  (c+64,"adam_riscv ex_br",-1);
	vcdp->declBit  (c+65,"adam_riscv ex_mem_read",-1);
	vcdp->declBit  (c+66,"adam_riscv ex_mem2reg",-1);
	vcdp->declBus  (c+67,"adam_riscv ex_alu_op",-1,2,0);
	vcdp->declBit  (c+68,"adam_riscv ex_mem_write",-1);
	vcdp->declBus  (c+69,"adam_riscv ex_alu_src1",-1,1,0);
	vcdp->declBus  (c+70,"adam_riscv ex_alu_src2",-1,1,0);
	vcdp->declBit  (c+71,"adam_riscv ex_br_addr_mode",-1);
	vcdp->declBit  (c+72,"adam_riscv ex_regs_write",-1);
	vcdp->declBus  (c+18,"adam_riscv ex_alu_o",-1,31,0);
	vcdp->declBus  (c+19,"adam_riscv forwardA",-1,1,0);
	vcdp->declBus  (c+20,"adam_riscv forwardB",-1,1,0);
	vcdp->declBus  (c+73,"adam_riscv me_rs2",-1,4,0);
	vcdp->declBus  (c+74,"adam_riscv me_regs_data2",-1,31,0);
	vcdp->declBus  (c+75,"adam_riscv me_alu_o",-1,31,0);
	vcdp->declBus  (c+76,"adam_riscv me_rd",-1,4,0);
	vcdp->declBit  (c+77,"adam_riscv me_mem_read",-1);
	vcdp->declBit  (c+78,"adam_riscv me_mem2reg",-1);
	vcdp->declBit  (c+79,"adam_riscv me_mem_write",-1);
	vcdp->declBit  (c+80,"adam_riscv me_regs_write",-1);
	vcdp->declBus  (c+21,"adam_riscv me_mem_data",-1,31,0);
	vcdp->declBus  (c+81,"adam_riscv me_func3_code",-1,2,0);
	vcdp->declBit  (c+22,"adam_riscv forward_data",-1);
	vcdp->declBus  (c+82,"adam_riscv wb_mem_data",-1,31,0);
	vcdp->declBus  (c+83,"adam_riscv wb_alu_o",-1,31,0);
	vcdp->declBit  (c+84,"adam_riscv wb_mem2reg",-1);
	vcdp->declBit  (c+123,"adam_riscv u_stage_if clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_stage_if rst",-1);
	vcdp->declBit  (c+3,"adam_riscv u_stage_if pc_stall",-1);
	vcdp->declBus  (c+2,"adam_riscv u_stage_if br_addr",-1,31,0);
	vcdp->declBit  (c+1,"adam_riscv u_stage_if br_ctrl",-1);
	vcdp->declBus  (c+4,"adam_riscv u_stage_if if_inst",-1,31,0);
	vcdp->declBus  (c+45,"adam_riscv u_stage_if if_pc",-1,31,0);
	vcdp->declBit  (c+123,"adam_riscv u_stage_if u_pc clk",-1);
	vcdp->declBit  (c+1,"adam_riscv u_stage_if u_pc br_ctrl",-1);
	vcdp->declBus  (c+2,"adam_riscv u_stage_if u_pc br_addr",-1,31,0);
	vcdp->declBit  (c+124,"adam_riscv u_stage_if u_pc rst",-1);
	vcdp->declBus  (c+45,"adam_riscv u_stage_if u_pc pc_o",-1,31,0);
	vcdp->declBit  (c+3,"adam_riscv u_stage_if u_pc pc_stall",-1);
	vcdp->declBus  (c+85,"adam_riscv u_stage_if u_pc pc_next",-1,31,0);
	vcdp->declBus  (c+125,"adam_riscv u_stage_if inst_memory IROM_SPACE",-1,31,0);
	vcdp->declBus  (c+45,"adam_riscv u_stage_if inst_memory inst_addr",-1,31,0);
	vcdp->declBus  (c+4,"adam_riscv u_stage_if inst_memory inst_o",-1,31,0);
	// Tracing: adam_riscv u_stage_if inst_memory inst // Ignored: Wide memory > --trace-max-array ents at obj_dir/../AdamRiscv/inst_memory.v:8
	vcdp->declBit  (c+123,"adam_riscv u_reg_if_id clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_reg_if_id rst",-1);
	vcdp->declBus  (c+45,"adam_riscv u_reg_if_id if_pc",-1,31,0);
	vcdp->declBus  (c+4,"adam_riscv u_reg_if_id if_inst",-1,31,0);
	vcdp->declBus  (c+46,"adam_riscv u_reg_if_id id_inst",-1,31,0);
	vcdp->declBus  (c+47,"adam_riscv u_reg_if_id id_pc",-1,31,0);
	vcdp->declBit  (c+1,"adam_riscv u_reg_if_id if_id_flush",-1);
	vcdp->declBit  (c+3,"adam_riscv u_reg_if_id if_id_stall",-1);
	vcdp->declBit  (c+123,"adam_riscv u_stage_id clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_stage_id rst",-1);
	vcdp->declBus  (c+46,"adam_riscv u_stage_id id_inst",-1,31,0);
	vcdp->declBit  (c+48,"adam_riscv u_stage_id w_regs_en",-1);
	vcdp->declBus  (c+49,"adam_riscv u_stage_id w_regs_addr",-1,4,0);
	vcdp->declBus  (c+5,"adam_riscv u_stage_id w_regs_data",-1,31,0);
	vcdp->declBit  (c+3,"adam_riscv u_stage_id ctrl_stall",-1);
	vcdp->declBus  (c+6,"adam_riscv u_stage_id id_regs_data1",-1,31,0);
	vcdp->declBus  (c+7,"adam_riscv u_stage_id id_regs_data2",-1,31,0);
	vcdp->declBus  (c+8,"adam_riscv u_stage_id id_imm",-1,31,0);
	vcdp->declBus  (c+50,"adam_riscv u_stage_id id_func3_code",-1,2,0);
	vcdp->declBit  (c+51,"adam_riscv u_stage_id id_func7_code",-1);
	vcdp->declBus  (c+52,"adam_riscv u_stage_id id_rd",-1,4,0);
	vcdp->declBit  (c+9,"adam_riscv u_stage_id id_br",-1);
	vcdp->declBit  (c+10,"adam_riscv u_stage_id id_mem_read",-1);
	vcdp->declBit  (c+11,"adam_riscv u_stage_id id_mem2reg",-1);
	vcdp->declBus  (c+12,"adam_riscv u_stage_id id_alu_op",-1,2,0);
	vcdp->declBit  (c+13,"adam_riscv u_stage_id id_mem_write",-1);
	vcdp->declBus  (c+14,"adam_riscv u_stage_id id_alu_src1",-1,1,0);
	vcdp->declBus  (c+15,"adam_riscv u_stage_id id_alu_src2",-1,1,0);
	vcdp->declBit  (c+16,"adam_riscv u_stage_id id_br_addr_mode",-1);
	vcdp->declBit  (c+17,"adam_riscv u_stage_id id_regs_write",-1);
	vcdp->declBus  (c+53,"adam_riscv u_stage_id id_rs1",-1,4,0);
	vcdp->declBus  (c+54,"adam_riscv u_stage_id id_rs2",-1,4,0);
	vcdp->declBit  (c+23,"adam_riscv u_stage_id br",-1);
	vcdp->declBit  (c+86,"adam_riscv u_stage_id mem_read",-1);
	vcdp->declBit  (c+24,"adam_riscv u_stage_id mem2reg",-1);
	vcdp->declBus  (c+25,"adam_riscv u_stage_id alu_op",-1,2,0);
	vcdp->declBit  (c+87,"adam_riscv u_stage_id mem_write",-1);
	vcdp->declBus  (c+26,"adam_riscv u_stage_id alu_src1",-1,1,0);
	vcdp->declBus  (c+27,"adam_riscv u_stage_id alu_src2",-1,1,0);
	vcdp->declBit  (c+88,"adam_riscv u_stage_id br_addr_mode",-1);
	vcdp->declBit  (c+28,"adam_riscv u_stage_id regs_write",-1);
	vcdp->declBit  (c+123,"adam_riscv u_stage_id u_regs clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_stage_id u_regs rst",-1);
	vcdp->declBus  (c+53,"adam_riscv u_stage_id u_regs r_regs_addr1",-1,4,0);
	vcdp->declBus  (c+54,"adam_riscv u_stage_id u_regs r_regs_addr2",-1,4,0);
	vcdp->declBus  (c+49,"adam_riscv u_stage_id u_regs w_regs_addr",-1,4,0);
	vcdp->declBus  (c+5,"adam_riscv u_stage_id u_regs w_regs_data",-1,31,0);
	vcdp->declBit  (c+48,"adam_riscv u_stage_id u_regs w_regs_en",-1);
	vcdp->declBus  (c+6,"adam_riscv u_stage_id u_regs r_regs_o1",-1,31,0);
	vcdp->declBus  (c+7,"adam_riscv u_stage_id u_regs r_regs_o2",-1,31,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declBus  (c+89+i*1,"adam_riscv u_stage_id u_regs regs_file",(i+0),31,0);}}
	vcdp->declBit  (c+29,"adam_riscv u_stage_id u_regs wb_hazard_a",-1);
	vcdp->declBit  (c+30,"adam_riscv u_stage_id u_regs wb_hazard_b",-1);
	vcdp->declBus  (c+121,"adam_riscv u_stage_id u_ctrl inst_op",-1,6,0);
	vcdp->declBit  (c+23,"adam_riscv u_stage_id u_ctrl br",-1);
	vcdp->declBit  (c+86,"adam_riscv u_stage_id u_ctrl mem_read",-1);
	vcdp->declBit  (c+24,"adam_riscv u_stage_id u_ctrl mem2reg",-1);
	vcdp->declBus  (c+25,"adam_riscv u_stage_id u_ctrl alu_op",-1,2,0);
	vcdp->declBit  (c+87,"adam_riscv u_stage_id u_ctrl mem_write",-1);
	vcdp->declBus  (c+26,"adam_riscv u_stage_id u_ctrl alu_src1",-1,1,0);
	vcdp->declBus  (c+27,"adam_riscv u_stage_id u_ctrl alu_src2",-1,1,0);
	vcdp->declBit  (c+88,"adam_riscv u_stage_id u_ctrl br_addr_mode",-1);
	vcdp->declBit  (c+28,"adam_riscv u_stage_id u_ctrl regs_write",-1);
	vcdp->declBus  (c+46,"adam_riscv u_stage_id u_imm_gen inst",-1,31,0);
	vcdp->declBus  (c+8,"adam_riscv u_stage_id u_imm_gen imm_o",-1,31,0);
	vcdp->declBit  (c+123,"adam_riscv u_reg_id_ex clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_reg_id_ex rst",-1);
	vcdp->declBus  (c+47,"adam_riscv u_reg_id_ex id_pc",-1,31,0);
	vcdp->declBus  (c+6,"adam_riscv u_reg_id_ex id_regs_data1",-1,31,0);
	vcdp->declBus  (c+7,"adam_riscv u_reg_id_ex id_regs_data2",-1,31,0);
	vcdp->declBus  (c+8,"adam_riscv u_reg_id_ex id_imm",-1,31,0);
	vcdp->declBus  (c+50,"adam_riscv u_reg_id_ex id_func3_code",-1,2,0);
	vcdp->declBit  (c+51,"adam_riscv u_reg_id_ex id_func7_code",-1);
	vcdp->declBus  (c+52,"adam_riscv u_reg_id_ex id_rd",-1,4,0);
	vcdp->declBit  (c+9,"adam_riscv u_reg_id_ex id_br",-1);
	vcdp->declBit  (c+10,"adam_riscv u_reg_id_ex id_mem_read",-1);
	vcdp->declBit  (c+11,"adam_riscv u_reg_id_ex id_mem2reg",-1);
	vcdp->declBus  (c+12,"adam_riscv u_reg_id_ex id_alu_op",-1,2,0);
	vcdp->declBit  (c+13,"adam_riscv u_reg_id_ex id_mem_write",-1);
	vcdp->declBus  (c+14,"adam_riscv u_reg_id_ex id_alu_src1",-1,1,0);
	vcdp->declBus  (c+15,"adam_riscv u_reg_id_ex id_alu_src2",-1,1,0);
	vcdp->declBit  (c+16,"adam_riscv u_reg_id_ex id_br_addr_mode",-1);
	vcdp->declBit  (c+17,"adam_riscv u_reg_id_ex id_regs_write",-1);
	vcdp->declBit  (c+1,"adam_riscv u_reg_id_ex id_ex_flush",-1);
	vcdp->declBus  (c+53,"adam_riscv u_reg_id_ex id_rs1",-1,4,0);
	vcdp->declBus  (c+54,"adam_riscv u_reg_id_ex id_rs2",-1,4,0);
	vcdp->declBus  (c+55,"adam_riscv u_reg_id_ex ex_rs1",-1,4,0);
	vcdp->declBus  (c+56,"adam_riscv u_reg_id_ex ex_rs2",-1,4,0);
	vcdp->declBus  (c+57,"adam_riscv u_reg_id_ex ex_pc",-1,31,0);
	vcdp->declBus  (c+58,"adam_riscv u_reg_id_ex ex_regs_data1",-1,31,0);
	vcdp->declBus  (c+59,"adam_riscv u_reg_id_ex ex_regs_data2",-1,31,0);
	vcdp->declBus  (c+60,"adam_riscv u_reg_id_ex ex_imm",-1,31,0);
	vcdp->declBus  (c+61,"adam_riscv u_reg_id_ex ex_func3_code",-1,2,0);
	vcdp->declBit  (c+62,"adam_riscv u_reg_id_ex ex_func7_code",-1);
	vcdp->declBus  (c+63,"adam_riscv u_reg_id_ex ex_rd",-1,4,0);
	vcdp->declBit  (c+64,"adam_riscv u_reg_id_ex ex_br",-1);
	vcdp->declBit  (c+65,"adam_riscv u_reg_id_ex ex_mem_read",-1);
	vcdp->declBit  (c+66,"adam_riscv u_reg_id_ex ex_mem2reg",-1);
	vcdp->declBus  (c+67,"adam_riscv u_reg_id_ex ex_alu_op",-1,2,0);
	vcdp->declBit  (c+68,"adam_riscv u_reg_id_ex ex_mem_write",-1);
	vcdp->declBus  (c+69,"adam_riscv u_reg_id_ex ex_alu_src1",-1,1,0);
	vcdp->declBus  (c+70,"adam_riscv u_reg_id_ex ex_alu_src2",-1,1,0);
	vcdp->declBit  (c+71,"adam_riscv u_reg_id_ex ex_br_addr_mode",-1);
	vcdp->declBit  (c+72,"adam_riscv u_reg_id_ex ex_regs_write",-1);
	vcdp->declBus  (c+57,"adam_riscv u_stage_ex ex_pc",-1,31,0);
	vcdp->declBus  (c+58,"adam_riscv u_stage_ex ex_regs_data1",-1,31,0);
	vcdp->declBus  (c+59,"adam_riscv u_stage_ex ex_regs_data2",-1,31,0);
	vcdp->declBus  (c+60,"adam_riscv u_stage_ex ex_imm",-1,31,0);
	vcdp->declBus  (c+61,"adam_riscv u_stage_ex ex_func3_code",-1,2,0);
	vcdp->declBit  (c+62,"adam_riscv u_stage_ex ex_func7_code",-1);
	vcdp->declBus  (c+67,"adam_riscv u_stage_ex ex_alu_op",-1,2,0);
	vcdp->declBus  (c+69,"adam_riscv u_stage_ex ex_alu_src1",-1,1,0);
	vcdp->declBus  (c+70,"adam_riscv u_stage_ex ex_alu_src2",-1,1,0);
	vcdp->declBit  (c+71,"adam_riscv u_stage_ex ex_br_addr_mode",-1);
	vcdp->declBit  (c+64,"adam_riscv u_stage_ex ex_br",-1);
	vcdp->declBus  (c+19,"adam_riscv u_stage_ex forwardA",-1,1,0);
	vcdp->declBus  (c+20,"adam_riscv u_stage_ex forwardB",-1,1,0);
	vcdp->declBus  (c+75,"adam_riscv u_stage_ex me_alu_o",-1,31,0);
	vcdp->declBus  (c+5,"adam_riscv u_stage_ex w_regs_data",-1,31,0);
	vcdp->declBus  (c+18,"adam_riscv u_stage_ex ex_alu_o",-1,31,0);
	vcdp->declBus  (c+2,"adam_riscv u_stage_ex br_pc",-1,31,0);
	vcdp->declBit  (c+1,"adam_riscv u_stage_ex br_ctrl",-1);
	vcdp->declBus  (c+31,"adam_riscv u_stage_ex alu_ctrl",-1,3,0);
	vcdp->declBus  (c+32,"adam_riscv u_stage_ex op_A",-1,31,0);
	vcdp->declBus  (c+33,"adam_riscv u_stage_ex op_A_pre",-1,31,0);
	vcdp->declBus  (c+34,"adam_riscv u_stage_ex op_B",-1,31,0);
	vcdp->declBus  (c+35,"adam_riscv u_stage_ex op_B_pre",-1,31,0);
	vcdp->declBit  (c+36,"adam_riscv u_stage_ex br_mark",-1);
	vcdp->declBus  (c+37,"adam_riscv u_stage_ex br_addr_op_A",-1,31,0);
	vcdp->declBus  (c+67,"adam_riscv u_stage_ex u_alu_control alu_op",-1,2,0);
	vcdp->declBus  (c+61,"adam_riscv u_stage_ex u_alu_control func3_code",-1,2,0);
	vcdp->declBit  (c+62,"adam_riscv u_stage_ex u_alu_control func7_code",-1);
	vcdp->declBus  (c+31,"adam_riscv u_stage_ex u_alu_control alu_ctrl_r",-1,3,0);
	vcdp->declBus  (c+31,"adam_riscv u_stage_ex u_alu alu_ctrl",-1,3,0);
	vcdp->declBus  (c+32,"adam_riscv u_stage_ex u_alu op_A",-1,31,0);
	vcdp->declBus  (c+34,"adam_riscv u_stage_ex u_alu op_B",-1,31,0);
	vcdp->declBus  (c+18,"adam_riscv u_stage_ex u_alu alu_o",-1,31,0);
	vcdp->declBit  (c+36,"adam_riscv u_stage_ex u_alu br_mark",-1);
	vcdp->declBit  (c+123,"adam_riscv u_reg_ex_mem clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_reg_ex_mem rst",-1);
	vcdp->declBus  (c+59,"adam_riscv u_reg_ex_mem ex_regs_data2",-1,31,0);
	vcdp->declBus  (c+18,"adam_riscv u_reg_ex_mem ex_alu_o",-1,31,0);
	vcdp->declBus  (c+63,"adam_riscv u_reg_ex_mem ex_rd",-1,4,0);
	vcdp->declBit  (c+65,"adam_riscv u_reg_ex_mem ex_mem_read",-1);
	vcdp->declBit  (c+66,"adam_riscv u_reg_ex_mem ex_mem2reg",-1);
	vcdp->declBit  (c+68,"adam_riscv u_reg_ex_mem ex_mem_write",-1);
	vcdp->declBit  (c+72,"adam_riscv u_reg_ex_mem ex_regs_write",-1);
	vcdp->declBus  (c+61,"adam_riscv u_reg_ex_mem ex_func3_code",-1,2,0);
	vcdp->declBus  (c+56,"adam_riscv u_reg_ex_mem ex_rs2",-1,4,0);
	vcdp->declBus  (c+73,"adam_riscv u_reg_ex_mem me_rs2",-1,4,0);
	vcdp->declBus  (c+74,"adam_riscv u_reg_ex_mem me_regs_data2",-1,31,0);
	vcdp->declBus  (c+75,"adam_riscv u_reg_ex_mem me_alu_o",-1,31,0);
	vcdp->declBus  (c+76,"adam_riscv u_reg_ex_mem me_rd",-1,4,0);
	vcdp->declBit  (c+77,"adam_riscv u_reg_ex_mem me_mem_read",-1);
	vcdp->declBit  (c+78,"adam_riscv u_reg_ex_mem me_mem2reg",-1);
	vcdp->declBit  (c+79,"adam_riscv u_reg_ex_mem me_mem_write",-1);
	vcdp->declBit  (c+80,"adam_riscv u_reg_ex_mem me_regs_write",-1);
	vcdp->declBus  (c+81,"adam_riscv u_reg_ex_mem me_func3_code",-1,2,0);
	vcdp->declBit  (c+123,"adam_riscv u_stage_mem clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_stage_mem rst",-1);
	vcdp->declBus  (c+74,"adam_riscv u_stage_mem me_regs_data2",-1,31,0);
	vcdp->declBus  (c+75,"adam_riscv u_stage_mem me_alu_o",-1,31,0);
	vcdp->declBit  (c+77,"adam_riscv u_stage_mem me_mem_read",-1);
	vcdp->declBit  (c+79,"adam_riscv u_stage_mem me_mem_write",-1);
	vcdp->declBus  (c+81,"adam_riscv u_stage_mem me_func3_code",-1,2,0);
	vcdp->declBit  (c+22,"adam_riscv u_stage_mem forward_data",-1);
	vcdp->declBus  (c+5,"adam_riscv u_stage_mem w_regs_data",-1,31,0);
	vcdp->declBus  (c+21,"adam_riscv u_stage_mem me_mem_data",-1,31,0);
	vcdp->declBus  (c+38,"adam_riscv u_stage_mem w_data_mem",-1,31,0);
	vcdp->declBus  (c+39,"adam_riscv u_stage_mem r_data_mem",-1,31,0);
	vcdp->declBus  (c+125,"adam_riscv u_stage_mem u_data_memory DROM_SPACE",-1,31,0);
	vcdp->declBit  (c+123,"adam_riscv u_stage_mem u_data_memory clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_stage_mem u_data_memory rst",-1);
	vcdp->declBus  (c+75,"adam_riscv u_stage_mem u_data_memory data_addr",-1,31,0);
	vcdp->declBus  (c+38,"adam_riscv u_stage_mem u_data_memory w_data_mem",-1,31,0);
	vcdp->declBit  (c+77,"adam_riscv u_stage_mem u_data_memory r_en_mem",-1);
	vcdp->declBit  (c+79,"adam_riscv u_stage_mem u_data_memory w_en_mem",-1);
	vcdp->declBus  (c+122,"adam_riscv u_stage_mem u_data_memory byte_sel",-1,1,0);
	vcdp->declBus  (c+39,"adam_riscv u_stage_mem u_data_memory r_data_mem",-1,31,0);
	// Tracing: adam_riscv u_stage_mem u_data_memory data // Ignored: Wide memory > --trace-max-array ents at obj_dir/../AdamRiscv/data_memory.v:14
	vcdp->declBit  (c+123,"adam_riscv u_reg_mem_wb clk",-1);
	vcdp->declBit  (c+124,"adam_riscv u_reg_mem_wb rst",-1);
	vcdp->declBus  (c+21,"adam_riscv u_reg_mem_wb me_mem_data",-1,31,0);
	vcdp->declBus  (c+75,"adam_riscv u_reg_mem_wb me_alu_o",-1,31,0);
	vcdp->declBus  (c+76,"adam_riscv u_reg_mem_wb me_rd",-1,4,0);
	vcdp->declBit  (c+78,"adam_riscv u_reg_mem_wb me_mem2reg",-1);
	vcdp->declBit  (c+80,"adam_riscv u_reg_mem_wb me_regs_write",-1);
	vcdp->declBus  (c+82,"adam_riscv u_reg_mem_wb wb_mem_data",-1,31,0);
	vcdp->declBus  (c+83,"adam_riscv u_reg_mem_wb wb_alu_o",-1,31,0);
	vcdp->declBus  (c+49,"adam_riscv u_reg_mem_wb wb_rd",-1,4,0);
	vcdp->declBit  (c+84,"adam_riscv u_reg_mem_wb wb_mem2reg",-1);
	vcdp->declBit  (c+48,"adam_riscv u_reg_mem_wb wb_regs_write",-1);
	vcdp->declBus  (c+82,"adam_riscv u_stage_wb wb_mem_data",-1,31,0);
	vcdp->declBus  (c+83,"adam_riscv u_stage_wb wb_alu_o",-1,31,0);
	vcdp->declBit  (c+84,"adam_riscv u_stage_wb wb_mem2reg",-1);
	vcdp->declBus  (c+5,"adam_riscv u_stage_wb w_regs_data",-1,31,0);
	vcdp->declBus  (c+55,"adam_riscv u_forwarding ex_rs1",-1,4,0);
	vcdp->declBus  (c+56,"adam_riscv u_forwarding ex_rs2",-1,4,0);
	vcdp->declBus  (c+76,"adam_riscv u_forwarding me_rd",-1,4,0);
	vcdp->declBus  (c+49,"adam_riscv u_forwarding wb_rd",-1,4,0);
	vcdp->declBus  (c+73,"adam_riscv u_forwarding me_rs2",-1,4,0);
	vcdp->declBit  (c+79,"adam_riscv u_forwarding me_mem_write",-1);
	vcdp->declBit  (c+80,"adam_riscv u_forwarding me_regs_write",-1);
	vcdp->declBit  (c+48,"adam_riscv u_forwarding wb_regs_write",-1);
	vcdp->declBus  (c+19,"adam_riscv u_forwarding forwardA",-1,1,0);
	vcdp->declBus  (c+20,"adam_riscv u_forwarding forwardB",-1,1,0);
	vcdp->declBit  (c+22,"adam_riscv u_forwarding forward_data",-1);
	vcdp->declBit  (c+40,"adam_riscv u_forwarding ex_hazard_a",-1);
	vcdp->declBit  (c+41,"adam_riscv u_forwarding ex_hazard_b",-1);
	vcdp->declBit  (c+42,"adam_riscv u_forwarding mem_hazard_a",-1);
	vcdp->declBit  (c+43,"adam_riscv u_forwarding mem_hazard_b",-1);
	vcdp->declBit  (c+44,"adam_riscv u_forwarding hazard_data_w",-1);
	vcdp->declBit  (c+65,"adam_riscv u_hazard_detection ex_mem_read",-1);
	vcdp->declBus  (c+53,"adam_riscv u_hazard_detection id_rs1",-1,4,0);
	vcdp->declBus  (c+54,"adam_riscv u_hazard_detection id_rs2",-1,4,0);
	vcdp->declBus  (c+63,"adam_riscv u_hazard_detection ex_rd",-1,4,0);
	vcdp->declBit  (c+1,"adam_riscv u_hazard_detection br_ctrl",-1);
	vcdp->declBit  (c+3,"adam_riscv u_hazard_detection load_stall",-1);
	vcdp->declBit  (c+1,"adam_riscv u_hazard_detection flush",-1);
    }
}

void Vadam_riscv::traceFullThis__1(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->adam_riscv__DOT__br_ctrl));
	vcdp->fullBus  (c+2,(vlTOPp->adam_riscv__DOT__br_addr),32);
	vcdp->fullBit  (c+3,(vlTOPp->adam_riscv__DOT__stall));
	vcdp->fullBus  (c+4,(vlTOPp->adam_riscv__DOT__if_inst),32);
	vcdp->fullBus  (c+5,(vlTOPp->adam_riscv__DOT__w_regs_data),32);
	vcdp->fullBus  (c+6,(vlTOPp->adam_riscv__DOT__id_regs_data1),32);
	vcdp->fullBus  (c+7,(vlTOPp->adam_riscv__DOT__id_regs_data2),32);
	vcdp->fullBus  (c+8,(vlTOPp->adam_riscv__DOT__id_imm),32);
	vcdp->fullBit  (c+9,(vlTOPp->adam_riscv__DOT__id_br));
	vcdp->fullBit  (c+10,(vlTOPp->adam_riscv__DOT__id_mem_read));
	vcdp->fullBit  (c+11,(vlTOPp->adam_riscv__DOT__id_mem2reg));
	vcdp->fullBus  (c+12,(vlTOPp->adam_riscv__DOT__id_alu_op),3);
	vcdp->fullBit  (c+13,(vlTOPp->adam_riscv__DOT__id_mem_write));
	vcdp->fullBus  (c+14,(vlTOPp->adam_riscv__DOT__id_alu_src1),2);
	vcdp->fullBus  (c+15,(vlTOPp->adam_riscv__DOT__id_alu_src2),2);
	vcdp->fullBit  (c+16,(vlTOPp->adam_riscv__DOT__id_br_addr_mode));
	vcdp->fullBit  (c+17,(vlTOPp->adam_riscv__DOT__id_regs_write));
	vcdp->fullBus  (c+18,(vlTOPp->adam_riscv__DOT__ex_alu_o),32);
	vcdp->fullBus  (c+19,(vlTOPp->adam_riscv__DOT__forwardA),2);
	vcdp->fullBus  (c+20,(vlTOPp->adam_riscv__DOT__forwardB),2);
	vcdp->fullBus  (c+21,(vlTOPp->adam_riscv__DOT__me_mem_data),32);
	vcdp->fullBit  (c+22,((1U & ((IData)(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__hazard_data_w)
				      ? 1U : 0U))));
	vcdp->fullBit  (c+23,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__br));
	vcdp->fullBit  (c+24,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__mem2reg));
	vcdp->fullBus  (c+25,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__alu_op),3);
	vcdp->fullBus  (c+26,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__alu_src1),2);
	vcdp->fullBus  (c+27,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__alu_src2),2);
	vcdp->fullBit  (c+28,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__regs_write));
	vcdp->fullBit  (c+29,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__wb_hazard_a));
	vcdp->fullBit  (c+30,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__wb_hazard_b));
	vcdp->fullBus  (c+31,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__alu_ctrl),4);
	vcdp->fullBus  (c+32,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_A),32);
	vcdp->fullBus  (c+33,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_A_pre),32);
	vcdp->fullBus  (c+34,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_B),32);
	vcdp->fullBus  (c+35,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_B_pre),32);
	vcdp->fullBit  (c+36,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__br_mark));
	vcdp->fullBus  (c+37,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__br_addr_op_A),32);
	vcdp->fullBus  (c+38,(vlTOPp->adam_riscv__DOT__u_stage_mem__DOT__w_data_mem),32);
	vcdp->fullBus  (c+39,(vlTOPp->adam_riscv__DOT__u_stage_mem__DOT__r_data_mem),32);
	vcdp->fullBit  (c+40,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__ex_hazard_a));
	vcdp->fullBit  (c+41,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__ex_hazard_b));
	vcdp->fullBit  (c+42,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__mem_hazard_a));
	vcdp->fullBit  (c+43,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__mem_hazard_b));
	vcdp->fullBit  (c+44,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__hazard_data_w));
	vcdp->fullBus  (c+45,(vlTOPp->adam_riscv__DOT__if_pc),32);
	vcdp->fullBus  (c+46,(vlTOPp->adam_riscv__DOT__id_inst),32);
	vcdp->fullBus  (c+47,(vlTOPp->adam_riscv__DOT__id_pc),32);
	vcdp->fullBit  (c+48,(vlTOPp->adam_riscv__DOT__w_regs_en));
	vcdp->fullBus  (c+49,(vlTOPp->adam_riscv__DOT__w_regs_addr),5);
	vcdp->fullBus  (c+50,((7U & (vlTOPp->adam_riscv__DOT__id_inst 
				     >> 0xcU))),3);
	vcdp->fullBit  (c+51,((1U & (vlTOPp->adam_riscv__DOT__id_inst 
				     >> 0x1eU))));
	vcdp->fullBus  (c+52,((0x1fU & (vlTOPp->adam_riscv__DOT__id_inst 
					>> 7U))),5);
	vcdp->fullBus  (c+53,((0x1fU & (vlTOPp->adam_riscv__DOT__id_inst 
					>> 0xfU))),5);
	vcdp->fullBus  (c+54,((0x1fU & (vlTOPp->adam_riscv__DOT__id_inst 
					>> 0x14U))),5);
	vcdp->fullBus  (c+55,(vlTOPp->adam_riscv__DOT__ex_rs1),5);
	vcdp->fullBus  (c+56,(vlTOPp->adam_riscv__DOT__ex_rs2),5);
	vcdp->fullBus  (c+57,(vlTOPp->adam_riscv__DOT__ex_pc),32);
	vcdp->fullBus  (c+58,(vlTOPp->adam_riscv__DOT__ex_regs_data1),32);
	vcdp->fullBus  (c+59,(vlTOPp->adam_riscv__DOT__ex_regs_data2),32);
	vcdp->fullBus  (c+60,(vlTOPp->adam_riscv__DOT__ex_imm),32);
	vcdp->fullBus  (c+61,(vlTOPp->adam_riscv__DOT__ex_func3_code),3);
	vcdp->fullBit  (c+62,(vlTOPp->adam_riscv__DOT__ex_func7_code));
	vcdp->fullBus  (c+63,(vlTOPp->adam_riscv__DOT__ex_rd),5);
	vcdp->fullBit  (c+64,(vlTOPp->adam_riscv__DOT__ex_br));
	vcdp->fullBit  (c+65,(vlTOPp->adam_riscv__DOT__ex_mem_read));
	vcdp->fullBit  (c+66,(vlTOPp->adam_riscv__DOT__ex_mem2reg));
	vcdp->fullBus  (c+67,(vlTOPp->adam_riscv__DOT__ex_alu_op),3);
	vcdp->fullBit  (c+68,(vlTOPp->adam_riscv__DOT__ex_mem_write));
	vcdp->fullBus  (c+69,(vlTOPp->adam_riscv__DOT__ex_alu_src1),2);
	vcdp->fullBus  (c+70,(vlTOPp->adam_riscv__DOT__ex_alu_src2),2);
	vcdp->fullBit  (c+71,(vlTOPp->adam_riscv__DOT__ex_br_addr_mode));
	vcdp->fullBit  (c+72,(vlTOPp->adam_riscv__DOT__ex_regs_write));
	vcdp->fullBus  (c+73,(vlTOPp->adam_riscv__DOT__me_rs2),5);
	vcdp->fullBus  (c+74,(vlTOPp->adam_riscv__DOT__me_regs_data2),32);
	vcdp->fullBus  (c+75,(vlTOPp->adam_riscv__DOT__me_alu_o),32);
	vcdp->fullBus  (c+76,(vlTOPp->adam_riscv__DOT__me_rd),5);
	vcdp->fullBit  (c+77,(vlTOPp->adam_riscv__DOT__me_mem_read));
	vcdp->fullBit  (c+78,(vlTOPp->adam_riscv__DOT__me_mem2reg));
	vcdp->fullBit  (c+79,(vlTOPp->adam_riscv__DOT__me_mem_write));
	vcdp->fullBit  (c+80,(vlTOPp->adam_riscv__DOT__me_regs_write));
	vcdp->fullBus  (c+81,(vlTOPp->adam_riscv__DOT__me_func3_code),3);
	vcdp->fullBus  (c+82,(vlTOPp->adam_riscv__DOT__wb_mem_data),32);
	vcdp->fullBus  (c+83,(vlTOPp->adam_riscv__DOT__wb_alu_o),32);
	vcdp->fullBit  (c+84,(vlTOPp->adam_riscv__DOT__wb_mem2reg));
	vcdp->fullBus  (c+85,(vlTOPp->adam_riscv__DOT__u_stage_if__DOT__u_pc__DOT__pc_next),32);
	vcdp->fullBit  (c+86,((1U & ((3U == (0x7fU 
					     & vlTOPp->adam_riscv__DOT__id_inst))
				      ? 1U : 0U))));
	vcdp->fullBit  (c+87,((1U & ((0x23U == (0x7fU 
						& vlTOPp->adam_riscv__DOT__id_inst))
				      ? 1U : 0U))));
	vcdp->fullBit  (c+88,((0x67U != (0x7fU & vlTOPp->adam_riscv__DOT__id_inst))));
	vcdp->fullBus  (c+89,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[0]),32);
	vcdp->fullBus  (c+90,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[1]),32);
	vcdp->fullBus  (c+91,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[2]),32);
	vcdp->fullBus  (c+92,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[3]),32);
	vcdp->fullBus  (c+93,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[4]),32);
	vcdp->fullBus  (c+94,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[5]),32);
	vcdp->fullBus  (c+95,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[6]),32);
	vcdp->fullBus  (c+96,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[7]),32);
	vcdp->fullBus  (c+97,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[8]),32);
	vcdp->fullBus  (c+98,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[9]),32);
	vcdp->fullBus  (c+99,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[10]),32);
	vcdp->fullBus  (c+100,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[11]),32);
	vcdp->fullBus  (c+101,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[12]),32);
	vcdp->fullBus  (c+102,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[13]),32);
	vcdp->fullBus  (c+103,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[14]),32);
	vcdp->fullBus  (c+104,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[15]),32);
	vcdp->fullBus  (c+105,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[16]),32);
	vcdp->fullBus  (c+106,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[17]),32);
	vcdp->fullBus  (c+107,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[18]),32);
	vcdp->fullBus  (c+108,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[19]),32);
	vcdp->fullBus  (c+109,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[20]),32);
	vcdp->fullBus  (c+110,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[21]),32);
	vcdp->fullBus  (c+111,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[22]),32);
	vcdp->fullBus  (c+112,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[23]),32);
	vcdp->fullBus  (c+113,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[24]),32);
	vcdp->fullBus  (c+114,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[25]),32);
	vcdp->fullBus  (c+115,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[26]),32);
	vcdp->fullBus  (c+116,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[27]),32);
	vcdp->fullBus  (c+117,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[28]),32);
	vcdp->fullBus  (c+118,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[29]),32);
	vcdp->fullBus  (c+119,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[30]),32);
	vcdp->fullBus  (c+120,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[31]),32);
	vcdp->fullBus  (c+121,((0x7fU & vlTOPp->adam_riscv__DOT__id_inst)),7);
	vcdp->fullBus  (c+122,((3U & (IData)(vlTOPp->adam_riscv__DOT__me_func3_code))),2);
	vcdp->fullBit  (c+123,(vlTOPp->clk));
	vcdp->fullBit  (c+124,(vlTOPp->rst));
	vcdp->fullBus  (c+125,(0x400U),32);
    }
}
