// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_core.h for the primary calling header

#include "verilated.h"

#include "VRISCV_core___024root.h"

void VRISCV_core___024root___eval_act(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*3:0*/, 4096> VRISCV_core__ConstPool__TABLE_h4b0bad3a_0;
extern const VlUnpacked<CData/*0:0*/, 256> VRISCV_core__ConstPool__TABLE_h498e4548_0;

VL_INLINE_OPT void VRISCV_core___024root___nba_sequent__TOP__0(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = 0;
    IData/*31:0*/ RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0;
    RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__aluop1sel_reg_inst__DOT____Vlvbound_h3a664a1f__0;
    RISCV_core__DOT__aluop1sel_reg_inst__DOT____Vlvbound_h3a664a1f__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__aluop2sel_reg_inst__DOT____Vlvbound_h3a664a1f__0;
    RISCV_core__DOT__aluop2sel_reg_inst__DOT____Vlvbound_h3a664a1f__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__brmuxsel_reg_inst__DOT____Vlvbound_h6eb47edf__0;
    RISCV_core__DOT__brmuxsel_reg_inst__DOT____Vlvbound_h6eb47edf__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__is_slt_op_reg_inst__DOT____Vlvbound_h6eb47edf__0;
    RISCV_core__DOT__is_slt_op_reg_inst__DOT____Vlvbound_h6eb47edf__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__is_jump_reg_inst__DOT____Vlvbound_h6eb47edf__0;
    RISCV_core__DOT__is_jump_reg_inst__DOT____Vlvbound_h6eb47edf__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__br_signed_reg_inst__DOT____Vlvbound_h3a664a1f__0;
    RISCV_core__DOT__br_signed_reg_inst__DOT____Vlvbound_h3a664a1f__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__is_branch_reg_inst__DOT____Vlvbound_h6eb47edf__0;
    RISCV_core__DOT__is_branch_reg_inst__DOT____Vlvbound_h6eb47edf__0 = 0;
    CData/*2:0*/ RISCV_core__DOT__funct3_reg_inst__DOT____Vlvbound_hec9d57f4__0;
    RISCV_core__DOT__funct3_reg_inst__DOT____Vlvbound_hec9d57f4__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0;
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 = 0;
    CData/*0:0*/ RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0;
    RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0 = 0;
    CData/*4:0*/ RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0;
    RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0 = 0;
    CData/*1:0*/ RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0;
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 = 0;
    IData/*31:0*/ RISCV_core__DOT__pcplusfour_pipe_inst__DOT____Vlvbound_h00510166__0;
    RISCV_core__DOT__pcplusfour_pipe_inst__DOT____Vlvbound_h00510166__0 = 0;
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v0;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v0 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v1;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v1 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v2;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v2 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v3;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v3 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v4;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v4 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v5;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v5 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v6;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v6 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v7;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v7 = 0;
    CData/*3:0*/ __Vdlyvval__RISCV_core__DOT__thread_index_stage__v8;
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v8 = 0;
    CData/*3:0*/ __Vdly__RISCV_core__DOT__thread_index_counter;
    __Vdly__RISCV_core__DOT__thread_index_counter = 0;
    CData/*3:0*/ __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__counter;
    __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__counter = 0;
    CData/*3:0*/ __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin;
    __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin = 0;
    CData/*3:0*/ __Vdlyvdim0__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0;
    __Vdlyvdim0__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 = 0;
    SData/*11:0*/ __Vdlyvval__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0;
    __Vdlyvval__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0;
    __Vdlyvset__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0;
    __Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 = 0;
    IData/*31:0*/ __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0;
    __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0;
    __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 = 0;
    SData/*8:0*/ __Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0;
    __Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 = 0;
    IData/*31:0*/ __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0;
    __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0;
    __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 = 0;
    VlWide<5>/*159:0*/ __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages;
    VL_ZERO_W(160, __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages);
    CData/*2:0*/ __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages = 0;
    CData/*2:0*/ __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages = 0;
    CData/*2:0*/ __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages = 0;
    CData/*2:0*/ __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages = 0;
    CData/*2:0*/ __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages = 0;
    CData/*2:0*/ __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages = 0;
    CData/*2:0*/ __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages = 0;
    SData/*8:0*/ __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages = 0;
    CData/*7:0*/ __Vdly__RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages = 0;
    CData/*3:0*/ __Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages = 0;
    CData/*3:0*/ __Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages = 0;
    CData/*1:0*/ __Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages = 0;
    CData/*3:0*/ __Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages = 0;
    CData/*6:0*/ __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages = 0;
    CData/*5:0*/ __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages = 0;
    IData/*29:0*/ __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages = 0;
    SData/*13:0*/ __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages = 0;
    VlWide<3>/*95:0*/ __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages;
    VL_ZERO_W(96, __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages);
    // Body
    __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages;
    __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 = 0U;
    __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 = 0U;
    __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__counter 
        = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter;
    __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin 
        = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin;
    __Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U] 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[1U] 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[1U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[2U] 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[2U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[3U] 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[3U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U] 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U];
    __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[0U] 
        = vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[0U];
    __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[1U] 
        = vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[1U];
    __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U] 
        = vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U];
    __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__thread_index_counter = vlSelf->RISCV_core__DOT__thread_index_counter;
    __Vdly__RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages;
    __Vdlyvset__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 = 0U;
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 5U;
    vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 4U;
    vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 4U;
    vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 4U;
    vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 7U;
    vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 6U;
    vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i = 7U;
    vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i = 3U;
    __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages)) 
           | (IData)(vlSelf->RISCV_core__DOT__aluop2sel));
    RISCV_core__DOT__aluop2sel_reg_inst__DOT____Vlvbound_h3a664a1f__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__aluop2sel_reg_inst__DOT____Vlvbound_h3a664a1f__0) 
              << 1U));
    RISCV_core__DOT__aluop2sel_reg_inst__DOT____Vlvbound_h3a664a1f__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__aluop2sel_reg_inst__DOT____Vlvbound_h3a664a1f__0) 
              << 2U));
    __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages)) 
           | (IData)(vlSelf->RISCV_core__DOT__aluop1sel));
    RISCV_core__DOT__aluop1sel_reg_inst__DOT____Vlvbound_h3a664a1f__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__aluop1sel_reg_inst__DOT____Vlvbound_h3a664a1f__0) 
              << 1U));
    RISCV_core__DOT__aluop1sel_reg_inst__DOT____Vlvbound_h3a664a1f__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__aluop1sel_reg_inst__DOT____Vlvbound_h3a664a1f__0) 
              << 2U));
    __Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages 
        = ((2U & (IData)(__Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages)) 
           | (1U & ((~ ((IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages) 
                        >> 2U)) | (IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt))));
    __Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages 
        = ((1U & (IData)(__Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages)) 
           | (2U & ((IData)(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages) 
                    << 1U)));
    if (vlSelf->regfile_wr_en) {
        __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 
            = vlSelf->RISCV_core__DOT__regfile_write_data;
        __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 = 1U;
        __Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0 
            = vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra;
        __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 
            = vlSelf->RISCV_core__DOT__regfile_write_data;
        __Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 = 1U;
        __Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0 
            = vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra;
    }
    __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages)) 
           | (IData)(vlSelf->RISCV_core__DOT__br_signed));
    RISCV_core__DOT__br_signed_reg_inst__DOT____Vlvbound_h3a664a1f__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__br_signed_reg_inst__DOT____Vlvbound_h3a664a1f__0) 
              << 1U));
    RISCV_core__DOT__br_signed_reg_inst__DOT____Vlvbound_h3a664a1f__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__br_signed_reg_inst__DOT____Vlvbound_h3a664a1f__0) 
              << 2U));
    __Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages 
        = ((0xcU & (IData)(__Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages)) 
           | ((2U & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                     << 1U)) | ((~ (IData)(vlSelf->reset)) 
                                & (IData)(vlSelf->RISCV_core__DOT__MemWr))));
    __Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages)) 
           | (0xcU & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                      << 1U)));
    __Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages 
        = ((0xcU & (IData)(__Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages)) 
           | ((2U & ((IData)(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages) 
                     << 1U)) | ((~ (IData)(vlSelf->reset)) 
                                & (IData)(vlSelf->RISCV_core__DOT__load_reserved_op))));
    __Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages)) 
           | (0xcU & ((IData)(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages) 
                      << 1U)));
    __Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages 
        = ((0xcU & (IData)(__Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages)) 
           | ((2U & ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                     << 1U)) | ((~ (IData)(vlSelf->reset)) 
                                & (IData)(vlSelf->RISCV_core__DOT__store_cond_op))));
    __Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages)) 
           | (0xcU & ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                      << 1U)));
    __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages)) 
           | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->RISCV_core__DOT__is_jump)));
    RISCV_core__DOT__is_jump_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__is_jump_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 1U));
    RISCV_core__DOT__is_jump_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__is_jump_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 2U));
    __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages)) 
           | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->RISCV_core__DOT__is_slt_op)));
    RISCV_core__DOT__is_slt_op_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__is_slt_op_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 1U));
    RISCV_core__DOT__is_slt_op_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__is_slt_op_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 2U));
    RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U];
    if (vlSelf->reset) {
        __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin)));
        __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U] = 0U;
    } else {
        __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin 
            = (0xfU & (IData)(vlSelf->thread_index_wrmem));
        __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U] 
            = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout;
    }
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[1U] 
        = RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0;
    RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[1U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[2U] 
        = RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0;
    RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[2U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[3U] 
        = RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0;
    RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0 
        = vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[3U];
    __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U] 
        = RISCV_core__DOT__pcreg_pipe_inst__DOT____Vlvbound_h5b9250d2__0;
    __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages)) 
           | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->RISCV_core__DOT__is_branch)));
    RISCV_core__DOT__is_branch_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__is_branch_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 1U));
    RISCV_core__DOT__is_branch_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__is_branch_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 2U));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0x3ffcU & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->RISCV_core__DOT__WBSel)));
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 
        = (3U & (IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0x3ff3U & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0) 
              << 2U));
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 
        = (3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                 >> 2U));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0x3fcfU & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0) 
              << 4U));
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 
        = (3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                 >> 4U));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0x3f3fU & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0) 
              << 6U));
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 
        = (3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                 >> 6U));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0x3cffU & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0) 
              << 8U));
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 
        = (3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                 >> 8U));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0x33ffU & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0) 
              << 0xaU));
    RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0 
        = (3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                 >> 0xaU));
    __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = ((0xfffU & (IData)(__Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__WBSel_pipe_inst__DOT____Vlvbound_hdd331a81__0) 
              << 0xcU));
    vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages 
        = ((0x38U & ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                     << 3U)) | (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                      >> 3U)));
    vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages 
        = ((0x38U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                     << 3U)) | (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages) 
                                      >> 6U)));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x7eU & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->RISCV_core__DOT__load)));
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x7dU & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0) 
              << 1U));
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x7bU & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0) 
              << 2U));
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                 >> 2U));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x77U & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0) 
              << 3U));
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                 >> 3U));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x6fU & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0) 
              << 4U));
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                 >> 4U));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x5fU & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0) 
              << 5U));
    RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                 >> 5U));
    __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = ((0x3fU & (IData)(__Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__load_pipe_inst__DOT____Vlvbound_h165b78e2__0) 
              << 6U));
    __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[0U] 
        = vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages;
    RISCV_core__DOT__pcplusfour_pipe_inst__DOT____Vlvbound_h00510166__0 
        = vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[0U];
    __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[1U] 
        = RISCV_core__DOT__pcplusfour_pipe_inst__DOT____Vlvbound_h00510166__0;
    RISCV_core__DOT__pcplusfour_pipe_inst__DOT____Vlvbound_h00510166__0 
        = vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[1U];
    __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U] 
        = RISCV_core__DOT__pcplusfour_pipe_inst__DOT____Vlvbound_h00510166__0;
    __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages 
        = ((6U & (IData)(__Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages)) 
           | ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->RISCV_core__DOT__brmuxsel)));
    RISCV_core__DOT__brmuxsel_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages 
        = ((5U & (IData)(__Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__brmuxsel_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 1U));
    RISCV_core__DOT__brmuxsel_reg_inst__DOT____Vlvbound_h6eb47edf__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages 
        = ((3U & (IData)(__Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__brmuxsel_reg_inst__DOT____Vlvbound_h6eb47edf__0) 
              << 2U));
    vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages 
        = ((2U & ((IData)(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages) 
                  << 1U)) | ((~ (IData)(vlSelf->RISCV_core__DOT__sc_success)) 
                             & ((IData)(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages) 
                                >> 1U)));
    __Vdly__RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages 
        = ((0xf0U & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                     << 4U)) | (IData)(vlSelf->RISCV_core__DOT__ALUOp));
    __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages 
        = ((0x1f8U & (IData)(__Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages)) 
           | (7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                    >> 0xcU)));
    RISCV_core__DOT__funct3_reg_inst__DOT____Vlvbound_hec9d57f4__0 
        = (7U & (IData)(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages 
        = ((0x1c7U & (IData)(__Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__funct3_reg_inst__DOT____Vlvbound_hec9d57f4__0) 
              << 3U));
    RISCV_core__DOT__funct3_reg_inst__DOT____Vlvbound_hec9d57f4__0 
        = (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages) 
                 >> 3U));
    __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages 
        = ((0x3fU & (IData)(__Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__funct3_reg_inst__DOT____Vlvbound_hec9d57f4__0) 
              << 6U));
    if (vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we) {
        __Vdlyvval__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 
            = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain;
        __Vdlyvset__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 = 1U;
        __Vdlyvdim0__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0 
            = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin;
    }
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = ((0x3fffffe0U & __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages) 
           | (IData)(vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages));
    RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0 
        = (0x1fU & vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages);
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = ((0x3ffffc1fU & __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages) 
           | ((IData)(RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0) 
              << 5U));
    RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0 
        = (0x1fU & (vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
                    >> 5U));
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = ((0x3fff83ffU & __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages) 
           | ((IData)(RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0) 
              << 0xaU));
    RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0 
        = (0x1fU & (vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
                    >> 0xaU));
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = ((0x3ff07fffU & __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages) 
           | ((IData)(RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0) 
              << 0xfU));
    RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0 
        = (0x1fU & (vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
                    >> 0xfU));
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = ((0x3e0fffffU & __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages) 
           | ((IData)(RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0) 
              << 0x14U));
    RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0 
        = (0x1fU & (vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
                    >> 0x14U));
    __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = ((0x1ffffffU & __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages) 
           | ((IData)(RISCV_core__DOT__regfile_wa_pipe_inst__DOT____Vlvbound_h9bd1f084__0) 
              << 0x19U));
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = ((0x3eU & (IData)(__Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages)) 
           | ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages) 
                                            & (0U != (IData)(vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages)))));
    RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0 
        = (1U & (IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages));
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = ((0x3dU & (IData)(__Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0) 
              << 1U));
    RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages) 
                 >> 1U));
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = ((0x3bU & (IData)(__Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0) 
              << 2U));
    RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages) 
                 >> 2U));
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = ((0x37U & (IData)(__Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0) 
              << 3U));
    RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages) 
                 >> 3U));
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = ((0x2fU & (IData)(__Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0) 
              << 4U));
    RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages) 
                 >> 4U));
    __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = ((0x1fU & (IData)(__Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages)) 
           | ((IData)(RISCV_core__DOT__regfile_we_pipe_inst__DOT____Vlvbound_hcda29f63__0) 
              << 5U));
    vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
        = (((QData)((IData)(vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages)) 
            << 0x20U) | (QData)((IData)(vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages)));
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v0 
        = vlSelf->RISCV_core__DOT__thread_index_counter;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [0U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v1 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [1U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v2 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [2U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v3 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [3U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v4 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [4U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v5 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [5U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v6 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [6U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v7 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    RISCV_core__DOT____Vlvbound_hfef8eeb9__0 = vlSelf->RISCV_core__DOT__thread_index_stage
        [7U];
    __Vdlyvval__RISCV_core__DOT__thread_index_stage__v8 
        = RISCV_core__DOT____Vlvbound_hfef8eeb9__0;
    vlSelf->RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                 >> 3U));
    vlSelf->RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages 
        = (1U & ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                 >> 3U));
    if ((8U & (IData)(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages))) {
        if ((1U & (~ (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid)))) {
            vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart 
                = vlSelf->thread_index_wrmem;
        }
        if (vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid) {
            if (vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match) {
                vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address 
                    = (0xfffU & (vlSelf->RISCV_core__DOT__alu_result_reg 
                                 >> 2U));
            }
        } else {
            vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address 
                = (0xfffU & (vlSelf->RISCV_core__DOT__alu_result_reg 
                             >> 2U));
        }
    }
    vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__alu_result_reg_mem2_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__rd1;
    vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__imm_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[0U] 
        = __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[0U];
    vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[1U] 
        = __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[1U];
    vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U] 
        = __Vdly__RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U];
    vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin 
        = __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin;
    if (__Vdlyvset__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0) {
        vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[__Vdlyvdim0__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0] 
            = __Vdlyvval__RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM__v0;
    }
    vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages;
    __Vdly__RISCV_core__DOT__thread_index_counter = 
        ((IData)(vlSelf->reset) ? 0U : (0xfU & ((IData)(vlSelf->RISCV_core__DOT__thread_index_counter) 
                                                + (IData)(vlSelf->RISCV_core__DOT__start_reg))));
    vlSelf->RISCV_core__DOT__thread_index_counter = __Vdly__RISCV_core__DOT__thread_index_counter;
    vlSelf->RISCV_core__DOT__sc_success = ((~ (IData)(vlSelf->reset)) 
                                           & ((((IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid) 
                                                & (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match)) 
                                               & ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                                                  >> 3U)) 
                                              & (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match)));
    if (vlSelf->reset) {
        vlSelf->RISCV_core__DOT__dmem_dout_pre = 0U;
        __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__counter = 0U;
        vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we = 1U;
        vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain = 0U;
        vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid = 0U;
        vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages = 0U;
    } else {
        vlSelf->RISCV_core__DOT__dmem_dout_pre = vlSelf->i_dmem_read_data;
        if ((7U == (IData)(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter))) {
            vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we = 1U;
        } else {
            __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter)));
            vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we = 0U;
        }
        vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain 
            = (0xfffU & ((IData)(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages)
                          ? ((IData)(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages)
                              ? vlSelf->RISCV_core__DOT__alu_result_reg
                              : 0U) : vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages));
        if ((8U & (IData)(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages))) {
            vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid = 1U;
        }
        if ((((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
              >> 3U) & (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match))) {
            vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid = 0U;
        }
        if ((((~ ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                  >> 3U)) & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                             >> 3U)) & (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match))) {
            vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid = 0U;
        }
        vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages 
            = ((IData)(4U) + vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U]);
    }
    __Vtableidx1 = ((0xfe0U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                               >> 0x14U)) | ((0x1cU 
                                              & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                                 >> 0xaU)) 
                                             | (IData)(vlSelf->RISCV_core__DOT__ALUctrl)));
    vlSelf->RISCV_core__DOT__ALUOp = VRISCV_core__ConstPool__TABLE_h4b0bad3a_0
        [__Vtableidx1];
    vlSelf->regfile_wr_addr = (0x1fU & (vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages 
                                        >> 0x19U));
    vlSelf->regfile_wr_en = (1U & ((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages) 
                                   >> 5U));
    vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__regfile_write_enable;
    vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages 
        = (0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                    >> 7U));
    vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__rd2;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout 
        = vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM
        [vlSelf->RISCV_core__DOT__thread_index_counter];
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
    vlSelf->RISCV_core__DOT__alu_result_reg_mem2_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__rd1 = vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM
        [((vlSelf->RISCV_core__DOT__thread_index_stage
           [2U] << 5U) | (IData)(vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages))];
    vlSelf->RISCV_core__DOT__imm_reg_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__imm_out;
    vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter 
        = __Vdly__RISCV_core__DOT__reg_program_counter_inst__DOT__counter;
    vlSelf->o_ROM_addr = (0x3ffU & ((IData)(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout) 
                                    >> 2U));
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
    if (__Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0) {
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM[__Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0] 
            = __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM__v0;
    }
    vlSelf->RISCV_core__DOT__set_store = (((~ (IData)(vlSelf->RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages)) 
                                           & (IData)(vlSelf->RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages)) 
                                          | (IData)(vlSelf->RISCV_core__DOT__sc_success));
    vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->RISCV_core__DOT__is_branch_valid) 
                                               | ((IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages) 
                                                  >> 2U))));
    vlSelf->RISCV_core__DOT__rd2_or_imm = ((4U & (IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages))
                                            ? ((4U 
                                                & (IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages))
                                                ? vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages
                                                : 0U)
                                            : vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__rd2 = vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM
        [((vlSelf->RISCV_core__DOT__thread_index_stage
           [2U] << 5U) | (IData)(vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages))];
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
    vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
        = vlSelf->RISCV_core__DOT__alu_result_reg;
    vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages 
        = (0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                    >> 0xfU));
    vlSelf->RISCV_core__DOT__imm_out = ((4U & (IData)(vlSelf->RISCV_core__DOT__immSel))
                                         ? ((2U & (IData)(vlSelf->RISCV_core__DOT__immSel))
                                             ? 0U : 
                                            ((1U & (IData)(vlSelf->RISCV_core__DOT__immSel))
                                              ? vlSelf->RISCV_core__DOT__thread_index_stage
                                             [1U] : vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J_ext))
                                         : ((2U & (IData)(vlSelf->RISCV_core__DOT__immSel))
                                             ? ((1U 
                                                 & (IData)(vlSelf->RISCV_core__DOT__immSel))
                                                 ? vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B_ext
                                                 : vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S_ext)
                                             : ((1U 
                                                 & (IData)(vlSelf->RISCV_core__DOT__immSel))
                                                 ? vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I_ext
                                                 : 
                                                (0xfffff000U 
                                                 & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages))));
    vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U] 
        = __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[0U];
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[1U] 
        = __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[1U];
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[2U] 
        = __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[2U];
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[3U] 
        = __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[3U];
    vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U] 
        = __Vdly__RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U];
    vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages;
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
    if (__Vdlyvset__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0) {
        vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM[__Vdlyvdim0__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0] 
            = __Vdlyvval__RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM__v0;
    }
    vlSelf->regfile_wr_data = vlSelf->RISCV_core__DOT__regfile_write_data;
    vlSelf->RISCV_core__DOT__thread_index_stage[0U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v0;
    vlSelf->RISCV_core__DOT__thread_index_stage[1U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v1;
    vlSelf->RISCV_core__DOT__thread_index_stage[2U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v2;
    vlSelf->RISCV_core__DOT__thread_index_stage[3U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v3;
    vlSelf->RISCV_core__DOT__thread_index_stage[4U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v4;
    vlSelf->RISCV_core__DOT__thread_index_stage[5U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v5;
    vlSelf->RISCV_core__DOT__thread_index_stage[6U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v6;
    vlSelf->RISCV_core__DOT__thread_index_stage[7U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v7;
    vlSelf->RISCV_core__DOT__thread_index_stage[8U] 
        = __Vdlyvval__RISCV_core__DOT__thread_index_stage__v8;
    __Vtableidx2 = (((IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq) 
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
        [__Vtableidx2];
    vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages 
        = (0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                    >> 0x14U));
    vlSelf->o_dmem_addr = (0x3fffU & (vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
                                      >> 2U));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d 
        = (0x18U & (vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
                    << 3U));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d 
        = (0x10U & (vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages 
                    << 3U));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we 
        = vlSelf->RISCV_core__DOT__set_store;
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we 
        = (((IData)(vlSelf->RISCV_core__DOT__set_store) 
            << 1U) | (IData)(vlSelf->RISCV_core__DOT__set_store));
    vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh 
        = (2U & vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages);
    if ((0U == (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                      >> 3U)))) {
        vlSelf->RISCV_core__DOT__rd2_reg2_post = ((IData)(
                                                          (vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                                           >> 0x20U)) 
                                                  << (IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d));
        vlSelf->RISCV_core__DOT__dmem_write_enable_post 
            = (0xfU & ((IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we) 
                       << (3U & vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages)));
    } else if ((1U == (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                             >> 3U)))) {
        vlSelf->RISCV_core__DOT__rd2_reg2_post = ((IData)(
                                                          (vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                                           >> 0x20U)) 
                                                  << (IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d));
        vlSelf->RISCV_core__DOT__dmem_write_enable_post 
            = (0xfU & ((IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we) 
                       << (IData)(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh)));
    } else {
        vlSelf->RISCV_core__DOT__rd2_reg2_post = (IData)(
                                                         (vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                                          >> 0x20U));
        vlSelf->RISCV_core__DOT__dmem_write_enable_post 
            = (0xfU & ((2U == (7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                     >> 3U))) ? (- (IData)((IData)(vlSelf->RISCV_core__DOT__set_store)))
                        : 0U));
    }
    vlSelf->RISCV_core__DOT__alu_result_reg = (((((
                                                   ((((0U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                           >> 4U)))
                                                       ? 
                                                      (vlSelf->RISCV_core__DOT__aluop1 
                                                       + vlSelf->RISCV_core__DOT__aluop2)
                                                       : 0U) 
                                                     ^ 
                                                     ((1U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                           >> 4U)))
                                                       ? 
                                                      (vlSelf->RISCV_core__DOT__aluop1 
                                                       - vlSelf->RISCV_core__DOT__aluop2)
                                                       : 0U)) 
                                                    ^ 
                                                    ((2U 
                                                      == 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                          >> 4U)))
                                                      ? 
                                                     (vlSelf->RISCV_core__DOT__aluop1 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->RISCV_core__DOT__aluop2))
                                                      : 0U)) 
                                                   ^ 
                                                   ((5U 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                         >> 4U)))
                                                     ? 
                                                    (vlSelf->RISCV_core__DOT__aluop1 
                                                     ^ vlSelf->RISCV_core__DOT__aluop2)
                                                     : 0U)) 
                                                  ^ 
                                                  (((6U 
                                                     == 
                                                     (0xfU 
                                                      & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                         >> 4U))) 
                                                    | (7U 
                                                       == 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                           >> 4U))))
                                                    ? 
                                                   (vlSelf->RISCV_core__DOT__aluop1 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->RISCV_core__DOT__aluop2))
                                                    : 0U)) 
                                                 ^ 
                                                 ((8U 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                       >> 4U)))
                                                   ? 
                                                  (vlSelf->RISCV_core__DOT__aluop1 
                                                   | vlSelf->RISCV_core__DOT__aluop2)
                                                   : 0U)) 
                                                ^ (
                                                   (9U 
                                                    == 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                        >> 4U)))
                                                    ? 
                                                   (vlSelf->RISCV_core__DOT__aluop1 
                                                    & vlSelf->RISCV_core__DOT__aluop2)
                                                    : 0U)) 
                                               ^ ((0xaU 
                                                   == 
                                                   (0xfU 
                                                    & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                       >> 4U)))
                                                   ? vlSelf->RISCV_core__DOT__aluop2
                                                   : 0U));
    vlSelf->thread_index_wb = vlSelf->RISCV_core__DOT__thread_index_stage
        [8U];
    vlSelf->thread_index_wrmem = vlSelf->RISCV_core__DOT__thread_index_stage
        [5U];
    vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra 
        = ((vlSelf->RISCV_core__DOT__thread_index_stage
            [8U] << 5U) | (IData)(vlSelf->regfile_wr_addr));
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match 
        = (vlSelf->RISCV_core__DOT__thread_index_stage
           [5U] == (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart));
    vlSelf->o_dmem_write_data = vlSelf->RISCV_core__DOT__rd2_reg2_post;
    vlSelf->o_dmem_write_enable = vlSelf->RISCV_core__DOT__dmem_write_enable_post;
    vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages 
        = __Vdly__RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages;
    vlSelf->RISCV_core__DOT__aluop1 = ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages))
                                        ? ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages))
                                            ? vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U]
                                            : 0U) : vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__aluop2 = ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages))
                                        ? ((4U & (IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages))
                                            ? vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages
                                            : 0U) : vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages);
    vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
        = ((IData)(vlSelf->RISCV_core__DOT__start_reg)
            ? vlSelf->i_ROM_instruction : 0U);
    vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match 
        = ((0xfffU & (vlSelf->RISCV_core__DOT__alu_result_reg 
                      >> 2U)) == (IData)(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address));
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
    } else if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                      >> 2U)))) {
            if ((2U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                if ((1U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)) {
                    vlSelf->RISCV_core__DOT__immSel = 1U;
                    vlSelf->RISCV_core__DOT__regfile_write_enable = 1U;
                    vlSelf->RISCV_core__DOT__aluop2sel = 1U;
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
    vlSelf->RISCV_core__DOT__start_reg = ((~ (IData)(vlSelf->reset)) 
                                          & (IData)(vlSelf->RISCV_core__DOT__start));
    vlSelf->RISCV_core__DOT__start = (1U & (~ (IData)(vlSelf->reset)));
}

void VRISCV_core___024root___eval_nba(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VRISCV_core___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VRISCV_core___024root___eval_triggers__act(VRISCV_core___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___dump_triggers__act(VRISCV_core___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRISCV_core___024root___dump_triggers__nba(VRISCV_core___024root* vlSelf);
#endif  // VL_DEBUG

void VRISCV_core___024root___eval(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VRISCV_core___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VRISCV_core___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../../rtl/RISCV_core.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VRISCV_core___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VRISCV_core___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../../rtl/RISCV_core.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VRISCV_core___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VRISCV_core___024root___eval_debug_assertions(VRISCV_core___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
