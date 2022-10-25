// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadam_riscv__Syms.h"


//======================

void Vadam_riscv::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vadam_riscv* t=(Vadam_riscv*)userthis;
    Vadam_riscv__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void Vadam_riscv::traceChgThis(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vadam_riscv::traceChgThis__2(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->adam_riscv__DOT__br_ctrl));
	vcdp->chgBus  (c+2,(vlTOPp->adam_riscv__DOT__br_addr),32);
	vcdp->chgBit  (c+3,(vlTOPp->adam_riscv__DOT__stall));
	vcdp->chgBus  (c+4,(vlTOPp->adam_riscv__DOT__if_inst),32);
	vcdp->chgBus  (c+5,(vlTOPp->adam_riscv__DOT__w_regs_data),32);
	vcdp->chgBus  (c+6,(vlTOPp->adam_riscv__DOT__id_regs_data1),32);
	vcdp->chgBus  (c+7,(vlTOPp->adam_riscv__DOT__id_regs_data2),32);
	vcdp->chgBus  (c+8,(vlTOPp->adam_riscv__DOT__id_imm),32);
	vcdp->chgBit  (c+9,(vlTOPp->adam_riscv__DOT__id_br));
	vcdp->chgBit  (c+10,(vlTOPp->adam_riscv__DOT__id_mem_read));
	vcdp->chgBit  (c+11,(vlTOPp->adam_riscv__DOT__id_mem2reg));
	vcdp->chgBus  (c+12,(vlTOPp->adam_riscv__DOT__id_alu_op),3);
	vcdp->chgBit  (c+13,(vlTOPp->adam_riscv__DOT__id_mem_write));
	vcdp->chgBus  (c+14,(vlTOPp->adam_riscv__DOT__id_alu_src1),2);
	vcdp->chgBus  (c+15,(vlTOPp->adam_riscv__DOT__id_alu_src2),2);
	vcdp->chgBit  (c+16,(vlTOPp->adam_riscv__DOT__id_br_addr_mode));
	vcdp->chgBit  (c+17,(vlTOPp->adam_riscv__DOT__id_regs_write));
	vcdp->chgBus  (c+18,(vlTOPp->adam_riscv__DOT__ex_alu_o),32);
	vcdp->chgBus  (c+19,(vlTOPp->adam_riscv__DOT__forwardA),2);
	vcdp->chgBus  (c+20,(vlTOPp->adam_riscv__DOT__forwardB),2);
	vcdp->chgBus  (c+21,(vlTOPp->adam_riscv__DOT__me_mem_data),32);
	vcdp->chgBit  (c+22,((1U & ((IData)(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__hazard_data_w)
				     ? 1U : 0U))));
	vcdp->chgBit  (c+23,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__br));
	vcdp->chgBit  (c+24,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__mem2reg));
	vcdp->chgBus  (c+25,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__alu_op),3);
	vcdp->chgBus  (c+26,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__alu_src1),2);
	vcdp->chgBus  (c+27,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__alu_src2),2);
	vcdp->chgBit  (c+28,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__regs_write));
	vcdp->chgBit  (c+29,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__wb_hazard_a));
	vcdp->chgBit  (c+30,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__wb_hazard_b));
	vcdp->chgBus  (c+31,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__alu_ctrl),4);
	vcdp->chgBus  (c+32,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_A),32);
	vcdp->chgBus  (c+33,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_A_pre),32);
	vcdp->chgBus  (c+34,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_B),32);
	vcdp->chgBus  (c+35,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__op_B_pre),32);
	vcdp->chgBit  (c+36,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__br_mark));
	vcdp->chgBus  (c+37,(vlTOPp->adam_riscv__DOT__u_stage_ex__DOT__br_addr_op_A),32);
	vcdp->chgBus  (c+38,(vlTOPp->adam_riscv__DOT__u_stage_mem__DOT__w_data_mem),32);
	vcdp->chgBus  (c+39,(vlTOPp->adam_riscv__DOT__u_stage_mem__DOT__r_data_mem),32);
	vcdp->chgBit  (c+40,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__ex_hazard_a));
	vcdp->chgBit  (c+41,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__ex_hazard_b));
	vcdp->chgBit  (c+42,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__mem_hazard_a));
	vcdp->chgBit  (c+43,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__mem_hazard_b));
	vcdp->chgBit  (c+44,(vlTOPp->adam_riscv__DOT__u_forwarding__DOT__hazard_data_w));
    }
}

void Vadam_riscv::traceChgThis__3(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+45,(vlTOPp->adam_riscv__DOT__if_pc),32);
	vcdp->chgBus  (c+46,(vlTOPp->adam_riscv__DOT__id_inst),32);
	vcdp->chgBus  (c+47,(vlTOPp->adam_riscv__DOT__id_pc),32);
	vcdp->chgBit  (c+48,(vlTOPp->adam_riscv__DOT__w_regs_en));
	vcdp->chgBus  (c+49,(vlTOPp->adam_riscv__DOT__w_regs_addr),5);
	vcdp->chgBus  (c+50,((7U & (vlTOPp->adam_riscv__DOT__id_inst 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+51,((1U & (vlTOPp->adam_riscv__DOT__id_inst 
				    >> 0x1eU))));
	vcdp->chgBus  (c+52,((0x1fU & (vlTOPp->adam_riscv__DOT__id_inst 
				       >> 7U))),5);
	vcdp->chgBus  (c+53,((0x1fU & (vlTOPp->adam_riscv__DOT__id_inst 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+54,((0x1fU & (vlTOPp->adam_riscv__DOT__id_inst 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+55,(vlTOPp->adam_riscv__DOT__ex_rs1),5);
	vcdp->chgBus  (c+56,(vlTOPp->adam_riscv__DOT__ex_rs2),5);
	vcdp->chgBus  (c+57,(vlTOPp->adam_riscv__DOT__ex_pc),32);
	vcdp->chgBus  (c+58,(vlTOPp->adam_riscv__DOT__ex_regs_data1),32);
	vcdp->chgBus  (c+59,(vlTOPp->adam_riscv__DOT__ex_regs_data2),32);
	vcdp->chgBus  (c+60,(vlTOPp->adam_riscv__DOT__ex_imm),32);
	vcdp->chgBus  (c+61,(vlTOPp->adam_riscv__DOT__ex_func3_code),3);
	vcdp->chgBit  (c+62,(vlTOPp->adam_riscv__DOT__ex_func7_code));
	vcdp->chgBus  (c+63,(vlTOPp->adam_riscv__DOT__ex_rd),5);
	vcdp->chgBit  (c+64,(vlTOPp->adam_riscv__DOT__ex_br));
	vcdp->chgBit  (c+65,(vlTOPp->adam_riscv__DOT__ex_mem_read));
	vcdp->chgBit  (c+66,(vlTOPp->adam_riscv__DOT__ex_mem2reg));
	vcdp->chgBus  (c+67,(vlTOPp->adam_riscv__DOT__ex_alu_op),3);
	vcdp->chgBit  (c+68,(vlTOPp->adam_riscv__DOT__ex_mem_write));
	vcdp->chgBus  (c+69,(vlTOPp->adam_riscv__DOT__ex_alu_src1),2);
	vcdp->chgBus  (c+70,(vlTOPp->adam_riscv__DOT__ex_alu_src2),2);
	vcdp->chgBit  (c+71,(vlTOPp->adam_riscv__DOT__ex_br_addr_mode));
	vcdp->chgBit  (c+72,(vlTOPp->adam_riscv__DOT__ex_regs_write));
	vcdp->chgBus  (c+73,(vlTOPp->adam_riscv__DOT__me_rs2),5);
	vcdp->chgBus  (c+74,(vlTOPp->adam_riscv__DOT__me_regs_data2),32);
	vcdp->chgBus  (c+75,(vlTOPp->adam_riscv__DOT__me_alu_o),32);
	vcdp->chgBus  (c+76,(vlTOPp->adam_riscv__DOT__me_rd),5);
	vcdp->chgBit  (c+77,(vlTOPp->adam_riscv__DOT__me_mem_read));
	vcdp->chgBit  (c+78,(vlTOPp->adam_riscv__DOT__me_mem2reg));
	vcdp->chgBit  (c+79,(vlTOPp->adam_riscv__DOT__me_mem_write));
	vcdp->chgBit  (c+80,(vlTOPp->adam_riscv__DOT__me_regs_write));
	vcdp->chgBus  (c+81,(vlTOPp->adam_riscv__DOT__me_func3_code),3);
	vcdp->chgBus  (c+82,(vlTOPp->adam_riscv__DOT__wb_mem_data),32);
	vcdp->chgBus  (c+83,(vlTOPp->adam_riscv__DOT__wb_alu_o),32);
	vcdp->chgBit  (c+84,(vlTOPp->adam_riscv__DOT__wb_mem2reg));
	vcdp->chgBus  (c+85,(vlTOPp->adam_riscv__DOT__u_stage_if__DOT__u_pc__DOT__pc_next),32);
	vcdp->chgBit  (c+86,((1U & ((3U == (0x7fU & vlTOPp->adam_riscv__DOT__id_inst))
				     ? 1U : 0U))));
	vcdp->chgBit  (c+87,((1U & ((0x23U == (0x7fU 
					       & vlTOPp->adam_riscv__DOT__id_inst))
				     ? 1U : 0U))));
	vcdp->chgBit  (c+88,((0x67U != (0x7fU & vlTOPp->adam_riscv__DOT__id_inst))));
	vcdp->chgBus  (c+89,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[0]),32);
	vcdp->chgBus  (c+90,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[1]),32);
	vcdp->chgBus  (c+91,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[2]),32);
	vcdp->chgBus  (c+92,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[3]),32);
	vcdp->chgBus  (c+93,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[4]),32);
	vcdp->chgBus  (c+94,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[5]),32);
	vcdp->chgBus  (c+95,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[6]),32);
	vcdp->chgBus  (c+96,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[7]),32);
	vcdp->chgBus  (c+97,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[8]),32);
	vcdp->chgBus  (c+98,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[9]),32);
	vcdp->chgBus  (c+99,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[10]),32);
	vcdp->chgBus  (c+100,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[11]),32);
	vcdp->chgBus  (c+101,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[12]),32);
	vcdp->chgBus  (c+102,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[13]),32);
	vcdp->chgBus  (c+103,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[14]),32);
	vcdp->chgBus  (c+104,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[15]),32);
	vcdp->chgBus  (c+105,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[16]),32);
	vcdp->chgBus  (c+106,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[17]),32);
	vcdp->chgBus  (c+107,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[18]),32);
	vcdp->chgBus  (c+108,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[19]),32);
	vcdp->chgBus  (c+109,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[20]),32);
	vcdp->chgBus  (c+110,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[21]),32);
	vcdp->chgBus  (c+111,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[22]),32);
	vcdp->chgBus  (c+112,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[23]),32);
	vcdp->chgBus  (c+113,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[24]),32);
	vcdp->chgBus  (c+114,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[25]),32);
	vcdp->chgBus  (c+115,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[26]),32);
	vcdp->chgBus  (c+116,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[27]),32);
	vcdp->chgBus  (c+117,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[28]),32);
	vcdp->chgBus  (c+118,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[29]),32);
	vcdp->chgBus  (c+119,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[30]),32);
	vcdp->chgBus  (c+120,(vlTOPp->adam_riscv__DOT__u_stage_id__DOT__u_regs__DOT__regs_file[31]),32);
	vcdp->chgBus  (c+121,((0x7fU & vlTOPp->adam_riscv__DOT__id_inst)),7);
	vcdp->chgBus  (c+122,((3U & (IData)(vlTOPp->adam_riscv__DOT__me_func3_code))),2);
    }
}

void Vadam_riscv::traceChgThis__4(Vadam_riscv__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vadam_riscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+123,(vlTOPp->clk));
	vcdp->chgBit  (c+124,(vlTOPp->rst));
    }
}
