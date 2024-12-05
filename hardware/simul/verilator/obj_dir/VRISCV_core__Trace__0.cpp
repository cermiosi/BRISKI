// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV_core__Syms.h"


void VRISCV_core___024root__trace_chg_sub_0(VRISCV_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRISCV_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_chg_top_0\n"); );
    // Init
    VRISCV_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_core___024root*>(voidSelf);
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRISCV_core___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VRISCV_core___024root__trace_chg_sub_0(VRISCV_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j),32);
        bufp->chgIData(oldp+1,(vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+2,(vlSelf->RISCV_core__DOT__thread_index_stage[0]),4);
        bufp->chgCData(oldp+3,(vlSelf->RISCV_core__DOT__thread_index_stage[1]),4);
        bufp->chgCData(oldp+4,(vlSelf->RISCV_core__DOT__thread_index_stage[2]),4);
        bufp->chgCData(oldp+5,(vlSelf->RISCV_core__DOT__thread_index_stage[3]),4);
        bufp->chgCData(oldp+6,(vlSelf->RISCV_core__DOT__thread_index_stage[4]),4);
        bufp->chgCData(oldp+7,(vlSelf->RISCV_core__DOT__thread_index_stage[5]),4);
        bufp->chgCData(oldp+8,(vlSelf->RISCV_core__DOT__thread_index_stage[6]),4);
        bufp->chgCData(oldp+9,(vlSelf->RISCV_core__DOT__thread_index_stage[7]),4);
        bufp->chgCData(oldp+10,(vlSelf->RISCV_core__DOT__thread_index_stage[8]),4);
        bufp->chgCData(oldp+11,(vlSelf->RISCV_core__DOT__thread_index_counter),4);
        bufp->chgBit(oldp+12,(vlSelf->RISCV_core__DOT__start));
        bufp->chgBit(oldp+13,(vlSelf->RISCV_core__DOT__start_reg));
        bufp->chgBit(oldp+14,(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages));
        bufp->chgIData(oldp+15,(((IData)(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages)
                                  ? ((IData)(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages)
                                      ? vlSelf->RISCV_core__DOT__alu_result_reg
                                      : 0U) : vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages)),32);
        bufp->chgIData(oldp+16,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout),32);
        bufp->chgIData(oldp+17,(vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages),32);
        bufp->chgCData(oldp+18,((0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+19,((0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+20,((0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 7U))),5);
        bufp->chgCData(oldp+21,((0x7fU & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)),7);
        bufp->chgCData(oldp+22,((7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+23,((vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+24,(vlSelf->RISCV_core__DOT__immSel),3);
        bufp->chgBit(oldp+25,(vlSelf->RISCV_core__DOT__brmuxsel));
        bufp->chgBit(oldp+26,(vlSelf->RISCV_core__DOT__br_signed));
        bufp->chgBit(oldp+27,(vlSelf->RISCV_core__DOT__is_branch));
        bufp->chgBit(oldp+28,(vlSelf->RISCV_core__DOT__is_jump));
        bufp->chgBit(oldp+29,(vlSelf->RISCV_core__DOT__aluop1sel));
        bufp->chgBit(oldp+30,(vlSelf->RISCV_core__DOT__aluop2sel));
        bufp->chgCData(oldp+31,(vlSelf->RISCV_core__DOT__ALUctrl),3);
        bufp->chgBit(oldp+32,(vlSelf->RISCV_core__DOT__MemWr));
        bufp->chgBit(oldp+33,(vlSelf->RISCV_core__DOT__regfile_write_enable));
        bufp->chgBit(oldp+34,(vlSelf->RISCV_core__DOT__load));
        bufp->chgCData(oldp+35,(vlSelf->RISCV_core__DOT__WBSel),2);
        bufp->chgBit(oldp+36,(vlSelf->RISCV_core__DOT__load_reserved_op));
        bufp->chgBit(oldp+37,(vlSelf->RISCV_core__DOT__store_cond_op));
        bufp->chgBit(oldp+38,(vlSelf->RISCV_core__DOT__is_slt_op));
        bufp->chgCData(oldp+39,(vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages),5);
        bufp->chgBit(oldp+40,(vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages) 
                               & (0U != (IData)(vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages)))));
        bufp->chgCData(oldp+42,(vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages),5);
        bufp->chgCData(oldp+43,(vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages),5);
        bufp->chgIData(oldp+44,(vlSelf->RISCV_core__DOT__imm_out),32);
        bufp->chgCData(oldp+45,(vlSelf->RISCV_core__DOT__ALUOp),4);
        bufp->chgIData(oldp+46,(vlSelf->RISCV_core__DOT__imm_reg_inst__DOT__pipeline_stages),32);
        bufp->chgIData(oldp+47,(vlSelf->RISCV_core__DOT__rd1),32);
        bufp->chgIData(oldp+48,(vlSelf->RISCV_core__DOT__rd2),32);
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgBit(oldp+50,(((IData)(vlSelf->RISCV_core__DOT__is_branch_valid) 
                               | ((IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
        bufp->chgIData(oldp+51,(vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages),32);
        bufp->chgIData(oldp+52,(vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages),32);
        bufp->chgBit(oldp+53,((1U & ((IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgBit(oldp+54,((1U & ((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgBit(oldp+55,((1U & ((IData)(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgCData(oldp+56,((7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages) 
                                       >> 6U))),3);
        bufp->chgIData(oldp+57,(vlSelf->RISCV_core__DOT__rd2_or_imm),32);
        bufp->chgBit(oldp+58,((1U & ((~ ((IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages) 
                                         >> 2U)) | (IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt)))));
        bufp->chgBit(oldp+59,(vlSelf->RISCV_core__DOT__is_branch_valid));
        bufp->chgBit(oldp+60,((1U & ((IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgIData(oldp+61,(vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages),32);
        bufp->chgIData(oldp+62,(vlSelf->RISCV_core__DOT__aluop1),32);
        bufp->chgBit(oldp+63,((1U & ((IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgIData(oldp+64,(vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages),32);
        bufp->chgIData(oldp+65,(vlSelf->RISCV_core__DOT__aluop2),32);
        bufp->chgBit(oldp+66,((1U & ((IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages) 
                                     >> 2U))));
        bufp->chgCData(oldp+67,((0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                         >> 4U))),4);
        bufp->chgIData(oldp+68,(((IData)(4U) + vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U])),32);
        bufp->chgIData(oldp+69,(vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U]),32);
        bufp->chgIData(oldp+70,(vlSelf->RISCV_core__DOT__alu_result_reg),32);
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                                     >> 3U))));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                                     >> 3U))));
        bufp->chgBit(oldp+73,((IData)(((~ ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                                           >> 3U)) 
                                       & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                                          >> 3U)))));
        bufp->chgBit(oldp+74,((1U & ((IData)(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages) 
                                     >> 3U))));
        bufp->chgIData(oldp+75,(vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages),32);
        bufp->chgBit(oldp+76,(vlSelf->RISCV_core__DOT__sc_success));
        bufp->chgBit(oldp+77,(vlSelf->RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages));
        bufp->chgBit(oldp+78,(vlSelf->RISCV_core__DOT__set_store));
        bufp->chgBit(oldp+79,(vlSelf->RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages));
        bufp->chgBit(oldp+80,(((~ (IData)(vlSelf->RISCV_core__DOT__sc_success)) 
                               & ((IData)(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages) 
                                  >> 1U))));
        bufp->chgBit(oldp+81,((1U & ((IData)(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages) 
                                     >> 1U))));
        bufp->chgIData(oldp+82,((IData)((vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+83,(vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages),32);
        bufp->chgCData(oldp+84,((7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                       >> 3U))),3);
        bufp->chgIData(oldp+85,(vlSelf->RISCV_core__DOT__rd2_reg2_post),32);
        bufp->chgCData(oldp+86,(vlSelf->RISCV_core__DOT__dmem_write_enable_post),4);
        bufp->chgIData(oldp+87,(vlSelf->RISCV_core__DOT__alu_result_reg_mem2_inst__DOT__pipeline_stages),32);
        bufp->chgCData(oldp+88,((7U & ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                                       >> 3U))),3);
        bufp->chgIData(oldp+89,(vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages),32);
        bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                                     >> 6U))));
        bufp->chgIData(oldp+91,(vlSelf->RISCV_core__DOT__dmem_dout_pre),32);
        bufp->chgIData(oldp+92,(vlSelf->RISCV_core__DOT__dmem_dout_post),32);
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages) 
                                     >> 1U))));
        bufp->chgCData(oldp+94,((3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                                       >> 0xcU))),2);
        bufp->chgIData(oldp+95,(vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U]),32);
        bufp->chgIData(oldp+96,(vlSelf->RISCV_core__DOT__regfile_write_data),32);
        bufp->chgCData(oldp+97,(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages),8);
        bufp->chgIData(oldp+98,(((0U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                 >> 4U)))
                                  ? (vlSelf->RISCV_core__DOT__aluop1 
                                     + vlSelf->RISCV_core__DOT__aluop2)
                                  : 0U)),32);
        bufp->chgIData(oldp+99,(((1U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                 >> 4U)))
                                  ? (vlSelf->RISCV_core__DOT__aluop1 
                                     - vlSelf->RISCV_core__DOT__aluop2)
                                  : 0U)),32);
        bufp->chgIData(oldp+100,(((2U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                  >> 4U)))
                                   ? (vlSelf->RISCV_core__DOT__aluop1 
                                      << (0x1fU & vlSelf->RISCV_core__DOT__aluop2))
                                   : 0U)),32);
        bufp->chgIData(oldp+101,(((5U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                  >> 4U)))
                                   ? (vlSelf->RISCV_core__DOT__aluop1 
                                      ^ vlSelf->RISCV_core__DOT__aluop2)
                                   : 0U)),32);
        bufp->chgIData(oldp+102,((((6U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                   >> 4U))) 
                                   | (7U == (0xfU & 
                                             ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                              >> 4U))))
                                   ? (vlSelf->RISCV_core__DOT__aluop1 
                                      >> (0x1fU & vlSelf->RISCV_core__DOT__aluop2))
                                   : 0U)),32);
        bufp->chgIData(oldp+103,(((8U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                  >> 4U)))
                                   ? (vlSelf->RISCV_core__DOT__aluop1 
                                      | vlSelf->RISCV_core__DOT__aluop2)
                                   : 0U)),32);
        bufp->chgIData(oldp+104,(((9U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                  >> 4U)))
                                   ? (vlSelf->RISCV_core__DOT__aluop1 
                                      & vlSelf->RISCV_core__DOT__aluop2)
                                   : 0U)),32);
        bufp->chgIData(oldp+105,(((0xaU == (0xfU & 
                                            ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                             >> 4U)))
                                   ? vlSelf->RISCV_core__DOT__aluop2
                                   : 0U)),32);
        bufp->chgIData(oldp+106,(((0xbU == (0xfU & 
                                            ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                             >> 4U)))
                                   ? (((0x61U > vlSelf->RISCV_core__DOT__aluop1) 
                                       | (0x7aU < vlSelf->RISCV_core__DOT__aluop1))
                                       ? vlSelf->RISCV_core__DOT__aluop1
                                       : (vlSelf->RISCV_core__DOT__aluop1 
                                          - (IData)(0x20U)))
                                   : 0U)),32);
        bufp->chgCData(oldp+107,((0x1fU & vlSelf->RISCV_core__DOT__aluop2)),5);
        bufp->chgIData(oldp+108,((vlSelf->RISCV_core__DOT__aluop1 
                                  >> (0x1fU & vlSelf->RISCV_core__DOT__aluop2))),32);
        bufp->chgSData(oldp+109,(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages),14);
        bufp->chgIData(oldp+110,(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+111,(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+112,(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+113,(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+114,(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+115,(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+116,(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+117,((IData)((((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                         >> 2U) & (vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+118,((IData)((((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                         >> 2U) & (vlSelf->RISCV_core__DOT__rd2_or_imm 
                                                   >> 0x1fU)))));
        bufp->chgBit(oldp+119,(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq));
        bufp->chgBit(oldp+120,(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt));
        bufp->chgCData(oldp+121,(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+122,(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+123,(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages),6);
        bufp->chgSData(oldp+124,(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages),9);
        bufp->chgIData(oldp+125,(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+126,(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages),6);
        bufp->chgIData(oldp+127,((vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 7U)),25);
        bufp->chgCData(oldp+128,(vlSelf->RISCV_core__DOT__thread_index_stage
                                 [1U]),4);
        bufp->chgIData(oldp+129,((0xfffff000U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)),32);
        bufp->chgSData(oldp+130,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I),12);
        bufp->chgSData(oldp+131,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S),12);
        bufp->chgSData(oldp+132,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B),13);
        bufp->chgIData(oldp+133,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J),21);
        bufp->chgIData(oldp+134,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I_ext),32);
        bufp->chgIData(oldp+135,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S_ext),32);
        bufp->chgIData(oldp+136,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B_ext),32);
        bufp->chgIData(oldp+137,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J_ext),32);
        bufp->chgCData(oldp+138,(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+139,(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+140,(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+141,(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+142,(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages),3);
        bufp->chgIData(oldp+143,(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+144,(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages),7);
        bufp->chgIData(oldp+145,(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+146,((3U & vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages)),2);
        bufp->chgCData(oldp+147,(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte),8);
        bufp->chgSData(oldp+148,(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half),16);
        bufp->chgCData(oldp+149,(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages),4);
        bufp->chgIData(oldp+150,(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+151,((0x80000000U & ((IData)(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages) 
                                                 << 0x1eU))),32);
        bufp->chgWData(oldp+152,(vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages),96);
        bufp->chgIData(oldp+155,(vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgWData(oldp+156,(vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages),160);
        bufp->chgIData(oldp+161,(vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+162,(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages),2);
        bufp->chgCData(oldp+163,(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages),4);
        bufp->chgIData(oldp+164,(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgQData(oldp+165,(vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages),64);
        bufp->chgCData(oldp+167,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter),4);
        bufp->chgBit(oldp+168,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we));
        bufp->chgCData(oldp+169,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin),4);
        bufp->chgSData(oldp+170,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain),12);
        bufp->chgSData(oldp+171,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout),12);
        bufp->chgSData(oldp+172,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0]),12);
        bufp->chgSData(oldp+173,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[1]),12);
        bufp->chgSData(oldp+174,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[2]),12);
        bufp->chgSData(oldp+175,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[3]),12);
        bufp->chgSData(oldp+176,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[4]),12);
        bufp->chgSData(oldp+177,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[5]),12);
        bufp->chgSData(oldp+178,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[6]),12);
        bufp->chgSData(oldp+179,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[7]),12);
        bufp->chgSData(oldp+180,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[8]),12);
        bufp->chgSData(oldp+181,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[9]),12);
        bufp->chgSData(oldp+182,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[10]),12);
        bufp->chgSData(oldp+183,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[11]),12);
        bufp->chgSData(oldp+184,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[12]),12);
        bufp->chgSData(oldp+185,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[13]),12);
        bufp->chgSData(oldp+186,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[14]),12);
        bufp->chgSData(oldp+187,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[15]),12);
        bufp->chgIData(oldp+188,(vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages),30);
        bufp->chgIData(oldp+189,(vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
        bufp->chgCData(oldp+190,(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages),6);
        bufp->chgIData(oldp+191,(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+192,(vlSelf->RISCV_core__DOT__thread_index_stage
                                 [2U]),4);
        bufp->chgSData(oldp+193,(vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra),9);
        bufp->chgSData(oldp+194,(((vlSelf->RISCV_core__DOT__thread_index_stage
                                   [2U] << 5U) | (IData)(vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages))),9);
        bufp->chgSData(oldp+195,(((vlSelf->RISCV_core__DOT__thread_index_stage
                                   [2U] << 5U) | (IData)(vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages))),9);
        bufp->chgSData(oldp+196,((0xfffU & (vlSelf->RISCV_core__DOT__alu_result_reg 
                                            >> 2U))),12);
        bufp->chgSData(oldp+197,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address),12);
        bufp->chgCData(oldp+198,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart),4);
        bufp->chgBit(oldp+199,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid));
        bufp->chgBit(oldp+200,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match));
        bufp->chgBit(oldp+201,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match));
        bufp->chgCData(oldp+202,(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages),4);
        bufp->chgIData(oldp+203,(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
        bufp->chgCData(oldp+204,(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages),2);
        bufp->chgCData(oldp+205,((3U & vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages)),2);
        bufp->chgCData(oldp+206,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we),4);
        bufp->chgCData(oldp+207,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we),4);
        bufp->chgCData(oldp+208,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d),5);
        bufp->chgCData(oldp+209,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d),5);
        bufp->chgCData(oldp+210,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh),2);
        bufp->chgIData(oldp+211,(vlSelf->RISCV_core__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+212,(vlSelf->clk));
    bufp->chgBit(oldp+213,(vlSelf->reset));
    bufp->chgIData(oldp+214,(vlSelf->i_ROM_instruction),32);
    bufp->chgSData(oldp+215,(vlSelf->o_ROM_addr),10);
    bufp->chgSData(oldp+216,(vlSelf->o_dmem_addr),14);
    bufp->chgIData(oldp+217,(vlSelf->o_dmem_write_data),32);
    bufp->chgCData(oldp+218,(vlSelf->o_dmem_write_enable),4);
    bufp->chgIData(oldp+219,(vlSelf->i_dmem_read_data),32);
    bufp->chgCData(oldp+220,(vlSelf->regfile_wr_addr),5);
    bufp->chgIData(oldp+221,(vlSelf->regfile_wr_data),32);
    bufp->chgBit(oldp+222,(vlSelf->regfile_wr_en));
    bufp->chgCData(oldp+223,(vlSelf->thread_index_wb),4);
    bufp->chgCData(oldp+224,(vlSelf->thread_index_wrmem),4);
    bufp->chgIData(oldp+225,(((IData)(vlSelf->RISCV_core__DOT__start_reg)
                               ? vlSelf->i_ROM_instruction
                               : 0U)),32);
}

void VRISCV_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_cleanup\n"); );
    // Init
    VRISCV_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_core___024root*>(voidSelf);
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
