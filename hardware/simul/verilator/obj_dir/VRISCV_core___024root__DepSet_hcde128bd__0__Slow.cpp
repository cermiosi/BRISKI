// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_core.h for the primary calling header

#include "verilated.h"

#include "VRISCV_core___024root.h"

VL_ATTR_COLD void VRISCV_core___024root___eval_static__TOP(VRISCV_core___024root* vlSelf);

VL_ATTR_COLD void VRISCV_core___024root___eval_static(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_static\n"); );
    // Body
    VRISCV_core___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VRISCV_core___024root___eval_static__TOP(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[1U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[2U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[3U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[4U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[5U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[6U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[7U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[8U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[9U] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0xaU] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0xbU] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0xcU] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0xdU] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0xeU] = 0U;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0xfU] = 0U;
}

VL_ATTR_COLD void VRISCV_core___024root___eval_initial__TOP(VRISCV_core___024root* vlSelf);

VL_ATTR_COLD void VRISCV_core___024root___eval_initial(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_initial\n"); );
    // Body
    VRISCV_core___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void VRISCV_core___024root___eval_initial__TOP(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j = 0U;
    while (VL_GTS_III(32, 0x200U, vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j)) {
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM[(0x1ffU 
                                                                                & vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j)] = 0U;
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j 
            = ((IData)(1U) + vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j);
    }
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j = 0U;
    while (VL_GTS_III(32, 0x200U, vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j)) {
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM[(0x1ffU 
                                                                                & vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j)] = 0U;
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j 
            = ((IData)(1U) + vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j);
    }
}

VL_ATTR_COLD void VRISCV_core___024root___eval_final(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_final\n"); );
}

VL_ATTR_COLD void VRISCV_core___024root___eval_triggers__stl(VRISCV_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___dump_triggers__stl(VRISCV_core___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___eval_stl(VRISCV_core___024root* vlSelf);

VL_ATTR_COLD void VRISCV_core___024root___eval_settle(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VRISCV_core___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VRISCV_core___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../../rtl/RISCV_core.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VRISCV_core___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___dump_triggers__stl(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 256> VRISCV_core__ConstPool__TABLE_h498e4548_0;

VL_ATTR_COLD void VRISCV_core___024root___stl_sequent__TOP__0(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->RISCV_core__DOT__immSel = 0U;
    vlSelf->RISCV_core__DOT__is_slt_op = 0U;
    vlSelf->RISCV_core__DOT__WBSel = 0U;
    vlSelf->RISCV_core__DOT__load = 0U;
    vlSelf->RISCV_core__DOT__regfile_write_enable = 0U;
    vlSelf->RISCV_core__DOT__MemWr = 0U;
    vlSelf->RISCV_core__DOT__ALUctrl = 0U;
    vlSelf->RISCV_core__DOT__aluop2sel = 0U;
    vlSelf->RISCV_core__DOT__aluop1sel = 0U;
    vlSelf->RISCV_core__DOT__is_jump = 0U;
    vlSelf->RISCV_core__DOT__is_branch = 0U;
    vlSelf->RISCV_core__DOT__br_signed = 0U;
    if ((0x40U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
        if ((0x20U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
            if ((0x10U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__immSel = 5U;
                                vlSelf->RISCV_core__DOT__WBSel = 1U;
                                vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                                vlSelf->RISCV_core__DOT__ALUctrl = 3U;
                                vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            vlSelf->RISCV_core__DOT__immSel = 4U;
                            vlSelf->RISCV_core__DOT__WBSel = 2U;
                            vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                            vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                        }
                    }
                }
            } else if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__immSel = 1U;
                        vlSelf->RISCV_core__DOT__WBSel = 2U;
                        vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                        vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                    }
                }
            } else if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    vlSelf->RISCV_core__DOT__immSel = 3U;
                    vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                }
            }
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 4U)))) {
                if ((8U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__aluop1sel = 1U;
                                vlSelf->RISCV_core__DOT__is_jump = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__aluop1sel = 1U;
                            }
                        }
                    }
                    if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__is_jump = 1U;
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__is_branch = 1U;
                                vlSelf->RISCV_core__DOT__br_signed 
                                    = ((4U == (7U & 
                                               (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                >> 0xcU))) 
                                       | (5U == (7U 
                                                 & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                    >> 0xcU))));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
        if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                      >> 4U)))) {
            if ((8U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((2U == (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                              >> 0x1bU)))) {
                                vlSelf->RISCV_core__DOT__immSel = 6U;
                                vlSelf->RISCV_core__DOT__aluop1sel = 0U;
                            } else if ((3U == (3U & 
                                               (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                >> 0x1bU)))) {
                                vlSelf->RISCV_core__DOT__immSel = 6U;
                                vlSelf->RISCV_core__DOT__aluop1sel = 0U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                 >> 2U)))) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__immSel = 2U;
                    }
                }
            }
        }
        if ((0x10U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 3U)))) {
                if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            vlSelf->RISCV_core__DOT__WBSel = 1U;
                            vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                            vlSelf->RISCV_core__DOT__ALUctrl = 3U;
                            vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                        }
                    }
                } else if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__WBSel = 1U;
                        if ((2U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 0xcU)))) {
                            vlSelf->RISCV_core__DOT__WBSel = 3U;
                        } else if ((3U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                 >> 0xcU)))) {
                            vlSelf->RISCV_core__DOT__WBSel = 3U;
                        }
                        vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                        vlSelf->RISCV_core__DOT__ALUctrl 
                            = ((IData)((0x40000000U 
                                        == (0xfe007000U 
                                            & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)))
                                ? 1U : 2U);
                    }
                }
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 2U)))) {
                    if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((2U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                              >> 0xcU)))) {
                                vlSelf->RISCV_core__DOT__br_signed = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((8U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
            if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((2U != (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 0x1bU)))) {
                            if ((3U == (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                              >> 0x1bU)))) {
                                vlSelf->RISCV_core__DOT__WBSel = 3U;
                            }
                        }
                        if ((2U == (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 0x1bU)))) {
                            vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                            vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                        } else if ((3U == (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                 >> 0x1bU)))) {
                            vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                            vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                             >> 2U)))) {
            if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                }
            }
        }
    } else if ((0x10U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
        if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 2U)))) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__immSel = 1U;
                        vlSelf->RISCV_core__DOT__ALUctrl = 2U;
                        if ((2U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                          >> 0xcU)))) {
                            vlSelf->RISCV_core__DOT__br_signed = 1U;
                        }
                    }
                }
            }
            if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__WBSel = 1U;
                        vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                        vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                        vlSelf->RISCV_core__DOT__aluop1sel = 1U;
                    }
                }
            } else if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    vlSelf->RISCV_core__DOT__WBSel = 1U;
                    if ((2U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                      >> 0xcU)))) {
                        vlSelf->RISCV_core__DOT__WBSel = 3U;
                    } else if ((3U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                             >> 0xcU)))) {
                        vlSelf->RISCV_core__DOT__WBSel = 3U;
                    }
                    vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                    vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                }
            }
        }
    } else {
        if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 2U)))) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__immSel = 1U;
                        vlSelf->RISCV_core__DOT__aluop2sel = 1U;
                    }
                }
            }
        }
        if ((8U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 2U)))) {
                if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        vlSelf->RISCV_core__DOT__WBSel = 1U;
                        vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                        vlSelf->RISCV_core__DOT__ALUctrl = 4U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                             >> 2U)))) {
            if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                }
            }
        }
    }
    vlSelf->RISCV_core__DOT__brmuxsel = 0U;
    vlSelf->RISCV_core__DOT__load_reserved_op = 0U;
    vlSelf->RISCV_core__DOT__store_cond_op = 0U;
    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                  >> 6U)))) {
        if ((0x20U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
            if ((0x10U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                if ((2U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                  >> 0xcU)))) {
                                    vlSelf->RISCV_core__DOT__is_slt_op = 1U;
                                } else if ((3U == (7U 
                                                   & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                      >> 0xcU)))) {
                                    vlSelf->RISCV_core__DOT__is_slt_op = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 4U)))) {
                if ((8U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    if ((4U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                if ((2U == (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                  >> 0x1bU)))) {
                                    vlSelf->RISCV_core__DOT__load = 1U;
                                    vlSelf->RISCV_core__DOT__load_reserved_op = 1U;
                                } else if ((3U == (3U 
                                                   & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                      >> 0x1bU)))) {
                                    vlSelf->RISCV_core__DOT__load_reserved_op = 0U;
                                }
                                if ((2U != (3U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                  >> 0x1bU)))) {
                                    if ((3U == (3U 
                                                & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                   >> 0x1bU)))) {
                                        vlSelf->RISCV_core__DOT__store_cond_op = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__MemWr = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            if ((0x10U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                if ((2U == (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                  >> 0xcU)))) {
                                    vlSelf->RISCV_core__DOT__is_slt_op = 1U;
                                } else if ((3U == (7U 
                                                   & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                      >> 0xcU)))) {
                                    vlSelf->RISCV_core__DOT__is_slt_op = 1U;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__load = 1U;
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                      >> 5U)))) {
            if ((0x10U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                  >> 2U)))) {
                        if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                            if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                                vlSelf->RISCV_core__DOT__brmuxsel = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->o_dmem_addr = (0x3fffU & (vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
                                      >> 2U));
    vlSelf->thread_index_wb = vlSelf->RISCV_core__DOT__thread_index_stage
        [8U];
    vlSelf->thread_index_wrmem = vlSelf->RISCV_core__DOT__thread_index_stage
        [5U];
    vlSelf->regfile_wr_en = (1U & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages) 
                                   >> 5U));
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match 
        = (vlSelf->RISCV_core__DOT__thread_index_stage
           [5U] == (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart));
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match 
        = ((0xfffU & (vlSelf->RISCV_core__DOT__alu_result_reg 
                      >> 2U)) == (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I 
        = (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
           >> 0x14U);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I_ext 
        = VL_EXTENDS_II(32,12, (IData)(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S 
        = ((0xfe0U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                      >> 0x14U)) | (0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                             >> 7U)));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S_ext 
        = VL_EXTENDS_II(32,12, (IData)(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B 
        = ((0x1000U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                       >> 0x13U)) | ((0x800U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                            >> 7U)))));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B_ext 
        = VL_EXTENDS_II(32,13, (IData)(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J 
        = ((0x100000U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                         >> 0xbU)) | ((0xff000U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages) 
                                      | ((0x800U & 
                                          (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                               >> 0x14U)))));
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J_ext 
        = VL_EXTENDS_II(32,21, vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J);
    vlSelf->RISCV_core__DOT__aluop1 = ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages))
                                        ? ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages))
                                            ? vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U]
                                            : 0U) : vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__aluop2 = ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages))
                                        ? ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages))
                                            ? vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages
                                            : 0U) : vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout 
        = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM
        [vlSelf->RISCV_core__DOT__thread_index_counter];
    vlSelf->regfile_wr_addr = (0x1fU & (vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
                                        >> 0x19U));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d 
        = (0x18U & (vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
                    << 3U));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d 
        = (0x10U & (vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
                    << 3U));
    vlSelf->RISCV_core__DOT__set_store = (((~ (IData)(vlSelf->RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages)) 
                                           & (IData)(vlSelf->RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages)) 
                                          | (IData)(vlSelf->RISCV_core__DOT__sc_success));
    if ((2U & vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages)) {
        vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte 
            = (0xffU & ((1U & vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages)
                         ? (vlSelf->RISCV_core__DOT__dmem_dout_pre 
                            >> 0x18U) : (vlSelf->RISCV_core__DOT__dmem_dout_pre 
                                         >> 0x10U)));
        vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half 
            = (0xffffU & ((2U & vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages)
                           ? (vlSelf->RISCV_core__DOT__dmem_dout_pre 
                              >> 0x10U) : vlSelf->RISCV_core__DOT__dmem_dout_pre));
    } else {
        vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte 
            = (0xffU & ((1U & vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages)
                         ? (vlSelf->RISCV_core__DOT__dmem_dout_pre 
                            >> 8U) : vlSelf->RISCV_core__DOT__dmem_dout_pre));
        vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half 
            = (0xffffU & vlSelf->RISCV_core__DOT__dmem_dout_pre);
    }
    vlSelf->RISCV_core__DOT__rd2_or_imm = ((4U & (IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages))
                                            ? ((4U 
                                                & (IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages))
                                                ? vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages
                                                : 0U)
                                            : vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages);
    vlSelf->o_ROM_addr = (0x3ffU & ((IData)(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout) 
                                    >> 2U));
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra 
        = ((vlSelf->RISCV_core__DOT__thread_index_stage
            [8U] << 5U) | (IData)(vlSelf->regfile_wr_addr));
    vlSelf->RISCV_core__DOT__rd2_reg2_post = ((0U == 
                                               (7U 
                                                & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                                   >> 3U)))
                                               ? ((IData)(
                                                          (vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                                           >> 0x20U)) 
                                                  << (IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d))
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                                       >> 3U)))
                                                   ? 
                                                  ((IData)(
                                                           (vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                                            >> 0x20U)) 
                                                   << (IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d))
                                                   : (IData)(
                                                             (vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                                              >> 0x20U))));
    vlSelf->o_dmem_write_data = vlSelf->RISCV_core__DOT__rd2_reg2_post;
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we 
        = vlSelf->RISCV_core__DOT__set_store;
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we 
        = (((IData)(vlSelf->RISCV_core__DOT__set_store) 
            << 1U) | (IData)(vlSelf->RISCV_core__DOT__set_store));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh 
        = (2U & vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__dmem_write_enable_post 
        = (0xfU & ((0U == (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                 >> 3U))) ? ((IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we) 
                                             << (3U 
                                                 & vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages))
                    : ((1U == (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                     >> 3U))) ? ((IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we) 
                                                 << (IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh))
                        : ((2U == (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                         >> 3U))) ? 
                           (- (IData)((IData)(vlSelf->RISCV_core__DOT__set_store)))
                            : 0U))));
    vlSelf->RISCV_core__DOT__dmem_dout_post = vlSelf->RISCV_core__DOT__dmem_dout_pre;
    if ((0x40U & (IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages))) {
        vlSelf->RISCV_core__DOT__dmem_dout_post = (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                                                        >> 3U)))
                                                    ? 
                                                   ((0x100U 
                                                     & (((~ 
                                                          ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                                                           >> 5U)) 
                                                         << 8U) 
                                                        & ((IData)(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte) 
                                                           << 1U))) 
                                                    | (IData)(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                                                         >> 3U)))
                                                     ? 
                                                    ((0x10000U 
                                                      & (((~ 
                                                           ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                                                            >> 5U)) 
                                                          << 0x10U) 
                                                         & ((IData)(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half) 
                                                            << 1U))) 
                                                     | (IData)(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half))
                                                     : vlSelf->RISCV_core__DOT__dmem_dout_pre));
    }
    vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq 
        = (vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages 
           == vlSelf->RISCV_core__DOT__rd2_or_imm);
    vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt 
        = VL_LTS_IQQ(33, (((QData)((IData)((((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                             >> 2U) 
                                            & (vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages 
                                               >> 0x1fU)))) 
                           << 0x20U) | (QData)((IData)(vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages))), 
                     (((QData)((IData)((((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                         >> 2U) & (vlSelf->RISCV_core__DOT__rd2_or_imm 
                                                   >> 0x1fU)))) 
                       << 0x20U) | (QData)((IData)(vlSelf->RISCV_core__DOT__rd2_or_imm))));
    vlSelf->o_dmem_write_enable = vlSelf->RISCV_core__DOT__dmem_write_enable_post;
    vlSelf->RISCV_core__DOT__regfile_write_data = (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages))
                                                    ? 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages))
                                                     ? 
                                                    (0x80000000U 
                                                     & ((IData)(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages) 
                                                        << 0x1eU))
                                                     : 
                                                    vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U])
                                                    : 
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages))
                                                     ? vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages
                                                     : vlSelf->RISCV_core__DOT__dmem_dout_post));
    __Vtableidx1 = (((IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq) 
                     << 7U) | ((0x40U & ((~ (IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq)) 
                                         << 6U)) | 
                               (((IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt) 
                                 << 5U) | ((0x10U & 
                                            ((~ (IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt)) 
                                             << 4U)) 
                                           | ((0xeU 
                                               & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages) 
                                                  >> 5U)) 
                                              | (1U 
                                                 & ((IData)(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages) 
                                                    >> 2U)))))));
    vlSelf->RISCV_core__DOT__is_branch_valid = VRISCV_core__ConstPool__TABLE_h498e4548_0
        [__Vtableidx1];
    vlSelf->regfile_wr_data = vlSelf->RISCV_core__DOT__regfile_write_data;
}

VL_ATTR_COLD void VRISCV_core___024root___eval_stl(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VRISCV_core___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___dump_triggers__act(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___dump_triggers__nba(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRISCV_core___024root___ctor_var_reset(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->i_ROM_instruction = VL_RAND_RESET_I(32);
    vlSelf->o_ROM_addr = VL_RAND_RESET_I(10);
    vlSelf->o_dmem_addr = VL_RAND_RESET_I(14);
    vlSelf->o_dmem_write_data = VL_RAND_RESET_I(32);
    vlSelf->o_dmem_write_enable = VL_RAND_RESET_I(4);
    vlSelf->i_dmem_read_data = VL_RAND_RESET_I(32);
    vlSelf->regfile_wr_addr = VL_RAND_RESET_I(5);
    vlSelf->regfile_wr_data = VL_RAND_RESET_I(32);
    vlSelf->regfile_wr_en = VL_RAND_RESET_I(1);
    vlSelf->thread_index_wb = VL_RAND_RESET_I(4);
    vlSelf->thread_index_wrmem = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->RISCV_core__DOT__thread_index_stage[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->RISCV_core__DOT__thread_index_counter = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__start_reg = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__immSel = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__brmuxsel = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__br_signed = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__aluop1sel = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__aluop2sel = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__ALUctrl = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__MemWr = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__regfile_write_enable = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__WBSel = VL_RAND_RESET_I(2);
    vlSelf->RISCV_core__DOT__load_reserved_op = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__store_cond_op = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__is_slt_op = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__ALUOp = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__rd1 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__rd2 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__rd2_or_imm = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__is_branch_valid = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__aluop1 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__aluop2 = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__alu_result_reg = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__sc_success = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__set_store = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__rd2_reg2_post = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__dmem_write_enable_post = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__dmem_dout_pre = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__dmem_dout_post = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__regfile_write_data = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain = VL_RAND_RESET_I(12);
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout = VL_RAND_RESET_I(12);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I = VL_RAND_RESET_I(12);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S = VL_RAND_RESET_I(12);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B = VL_RAND_RESET_I(13);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J = VL_RAND_RESET_I(21);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I_ext = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S_ext = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B_ext = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J_ext = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(5);
    vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(5);
    vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(5);
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__imm_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(3);
    vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(9);
    vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(8);
    vlSelf->RISCV_core__DOT__ALU_inst__DOT__result_srl_sra = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__ALU_inst__DOT__mask = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address = VL_RAND_RESET_I(12);
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages = VL_RAND_RESET_I(2);
    vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages = VL_RAND_RESET_Q(64);
    vlSelf->RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(1);
    vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages = VL_RAND_RESET_I(6);
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we = VL_RAND_RESET_I(4);
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d = VL_RAND_RESET_I(5);
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d = VL_RAND_RESET_I(5);
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh = VL_RAND_RESET_I(2);
    vlSelf->RISCV_core__DOT__alu_result_reg_mem2_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(7);
    vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages = VL_RAND_RESET_I(6);
    vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages = VL_RAND_RESET_I(32);
    vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(6);
    vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(30);
    vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages = VL_RAND_RESET_I(14);
    vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 0;
    VL_RAND_RESET_W(96, vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages = VL_RAND_RESET_I(2);
    vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte = VL_RAND_RESET_I(8);
    vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
