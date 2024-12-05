// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISCV_core.h for the primary calling header

#ifndef VERILATED_VRISCV_CORE___024ROOT_H_
#define VERILATED_VRISCV_CORE___024ROOT_H_  // guard

#include "verilated.h"

class VRISCV_core__Syms;

class VRISCV_core___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(o_dmem_write_enable,3,0);
        VL_OUT8(regfile_wr_addr,4,0);
        VL_OUT8(regfile_wr_en,0,0);
        VL_OUT8(thread_index_wb,3,0);
        VL_OUT8(thread_index_wrmem,3,0);
        CData/*3:0*/ RISCV_core__DOT__thread_index_counter;
        CData/*0:0*/ RISCV_core__DOT__start;
        CData/*0:0*/ RISCV_core__DOT__start_reg;
        CData/*2:0*/ RISCV_core__DOT__immSel;
        CData/*0:0*/ RISCV_core__DOT__brmuxsel;
        CData/*0:0*/ RISCV_core__DOT__br_signed;
        CData/*0:0*/ RISCV_core__DOT__is_branch;
        CData/*0:0*/ RISCV_core__DOT__is_jump;
        CData/*0:0*/ RISCV_core__DOT__aluop1sel;
        CData/*0:0*/ RISCV_core__DOT__aluop2sel;
        CData/*2:0*/ RISCV_core__DOT__ALUctrl;
        CData/*0:0*/ RISCV_core__DOT__MemWr;
        CData/*0:0*/ RISCV_core__DOT__regfile_write_enable;
        CData/*0:0*/ RISCV_core__DOT__load;
        CData/*1:0*/ RISCV_core__DOT__WBSel;
        CData/*0:0*/ RISCV_core__DOT__load_reserved_op;
        CData/*0:0*/ RISCV_core__DOT__store_cond_op;
        CData/*0:0*/ RISCV_core__DOT__is_slt_op;
        CData/*3:0*/ RISCV_core__DOT__ALUOp;
        CData/*0:0*/ RISCV_core__DOT__is_branch_valid;
        CData/*0:0*/ RISCV_core__DOT__sc_success;
        CData/*0:0*/ RISCV_core__DOT__set_store;
        CData/*3:0*/ RISCV_core__DOT__dmem_write_enable_post;
        CData/*3:0*/ RISCV_core__DOT__reg_program_counter_inst__DOT__counter;
        CData/*0:0*/ RISCV_core__DOT__reg_program_counter_inst__DOT__we;
        CData/*3:0*/ RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin;
        CData/*0:0*/ RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages;
        CData/*4:0*/ RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages;
        CData/*4:0*/ RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages;
        CData/*4:0*/ RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages;
        CData/*2:0*/ RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages;
        SData/*8:0*/ RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages;
        CData/*0:0*/ RISCV_core__DOT__branch_logic_inst__DOT__br_eq;
        CData/*0:0*/ RISCV_core__DOT__branch_logic_inst__DOT__br_lt;
        CData/*7:0*/ RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages;
        CData/*0:0*/ RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages;
        CData/*3:0*/ RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages;
        CData/*3:0*/ RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages;
        CData/*3:0*/ RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart;
        CData/*0:0*/ RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid;
        CData/*0:0*/ RISCV_core__DOT__reservation_set_inst__DOT__address_match;
        CData/*0:0*/ RISCV_core__DOT__reservation_set_inst__DOT__hart_match;
        CData/*1:0*/ RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages;
        CData/*3:0*/ RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages;
        CData/*0:0*/ RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages;
        CData/*0:0*/ RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages;
        CData/*5:0*/ RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages;
        CData/*3:0*/ RISCV_core__DOT__store_unit_inst__DOT__sb_we;
        CData/*3:0*/ RISCV_core__DOT__store_unit_inst__DOT__sh_we;
        CData/*4:0*/ RISCV_core__DOT__store_unit_inst__DOT__sb_d;
        CData/*4:0*/ RISCV_core__DOT__store_unit_inst__DOT__sh_d;
    };
    struct {
        CData/*1:0*/ RISCV_core__DOT__store_unit_inst__DOT__shift_sh;
        CData/*6:0*/ RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages;
        CData/*5:0*/ RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages;
        CData/*5:0*/ RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages;
        IData/*29:0*/ RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages;
        SData/*13:0*/ RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages;
        CData/*1:0*/ RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages;
        CData/*7:0*/ RISCV_core__DOT__load_unit_inst__DOT__dmem_byte;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(o_ROM_addr,9,0);
        VL_OUT16(o_dmem_addr,13,0);
        SData/*11:0*/ RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain;
        SData/*11:0*/ RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout;
        SData/*11:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_I;
        SData/*11:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_S;
        SData/*12:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_B;
        SData/*8:0*/ RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra;
        SData/*11:0*/ RISCV_core__DOT__reservation_set_inst__DOT__reserved_address;
        SData/*15:0*/ RISCV_core__DOT__load_unit_inst__DOT__dmem_half;
        VL_IN(i_ROM_instruction,31,0);
        VL_OUT(o_dmem_write_data,31,0);
        VL_IN(i_dmem_read_data,31,0);
        VL_OUT(regfile_wr_data,31,0);
        IData/*31:0*/ RISCV_core__DOT__imm_out;
        IData/*31:0*/ RISCV_core__DOT__rd1;
        IData/*31:0*/ RISCV_core__DOT__rd2;
        IData/*31:0*/ RISCV_core__DOT__rd2_or_imm;
        IData/*31:0*/ RISCV_core__DOT__aluop1;
        IData/*31:0*/ RISCV_core__DOT__aluop2;
        IData/*31:0*/ RISCV_core__DOT__alu_result_reg;
        IData/*31:0*/ RISCV_core__DOT__rd2_reg2_post;
        IData/*31:0*/ RISCV_core__DOT__dmem_dout_pre;
        IData/*31:0*/ RISCV_core__DOT__dmem_dout_post;
        IData/*31:0*/ RISCV_core__DOT__regfile_write_data;
        IData/*31:0*/ RISCV_core__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages;
        IData/*20:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_J;
        IData/*31:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_I_ext;
        IData/*31:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_S_ext;
        IData/*31:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_B_ext;
        IData/*31:0*/ RISCV_core__DOT__immsel_signext_inst__DOT__imm_J_ext;
        IData/*31:0*/ RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j;
        IData/*31:0*/ RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j;
        IData/*31:0*/ RISCV_core__DOT__imm_reg_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages;
        VlWide<5>/*159:0*/ RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__pcreg_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__aluop1sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__aluop2sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__brmuxsel_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__is_slt_op_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__is_jump_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__br_signed_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__is_branch_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__funct3_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__ALU_inst__DOT__result_srl_sra;
        IData/*31:0*/ RISCV_core__DOT__ALU_inst__DOT__mask;
        IData/*31:0*/ RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__sc_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__lr_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__pre_mem_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
    };
    struct {
        IData/*31:0*/ RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages;
        QData/*63:0*/ RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__alu_result_reg_mem2_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__load_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__regfile_we_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__regfile_wa_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ RISCV_core__DOT__WBSel_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i;
        VlWide<3>/*95:0*/ RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages;
        IData/*31:0*/ RISCV_core__DOT__pcplusfour_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*3:0*/, 9> RISCV_core__DOT__thread_index_stage;
        VlUnpacked<SData/*11:0*/, 16> RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM;
        VlUnpacked<IData/*31:0*/, 512> RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__MEM;
        VlUnpacked<IData/*31:0*/, 512> RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__MEM;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRISCV_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISCV_core___024root(VRISCV_core__Syms* symsp, const char* v__name);
    ~VRISCV_core___024root();
    VL_UNCOPYABLE(VRISCV_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
