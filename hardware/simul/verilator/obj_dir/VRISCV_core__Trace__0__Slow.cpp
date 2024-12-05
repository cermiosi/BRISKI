// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRISCV_core__Syms.h"


VL_ATTR_COLD void VRISCV_core___024root__trace_init_sub__TOP__0(VRISCV_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBus(c+214,"i_ROM_instruction", false,-1, 31,0);
    tracep->declBus(c+215,"o_ROM_addr", false,-1, 9,0);
    tracep->declBus(c+216,"o_dmem_addr", false,-1, 13,0);
    tracep->declBus(c+217,"o_dmem_write_data", false,-1, 31,0);
    tracep->declBus(c+218,"o_dmem_write_enable", false,-1, 3,0);
    tracep->declBus(c+219,"i_dmem_read_data", false,-1, 31,0);
    tracep->declBus(c+220,"regfile_wr_addr", false,-1, 4,0);
    tracep->declBus(c+221,"regfile_wr_data", false,-1, 31,0);
    tracep->declBit(c+222,"regfile_wr_en", false,-1);
    tracep->declBus(c+223,"thread_index_wb", false,-1, 3,0);
    tracep->declBus(c+224,"thread_index_wrmem", false,-1, 3,0);
    tracep->pushNamePrefix("RISCV_core ");
    tracep->declBus(c+226,"IDcluster", false,-1, 31,0);
    tracep->declBus(c+226,"IDrow", false,-1, 31,0);
    tracep->declBus(c+226,"IDminirow", false,-1, 31,0);
    tracep->declBus(c+226,"IDposx", false,-1, 31,0);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBus(c+214,"i_ROM_instruction", false,-1, 31,0);
    tracep->declBus(c+215,"o_ROM_addr", false,-1, 9,0);
    tracep->declBus(c+216,"o_dmem_addr", false,-1, 13,0);
    tracep->declBus(c+217,"o_dmem_write_data", false,-1, 31,0);
    tracep->declBus(c+218,"o_dmem_write_enable", false,-1, 3,0);
    tracep->declBus(c+219,"i_dmem_read_data", false,-1, 31,0);
    tracep->declBus(c+220,"regfile_wr_addr", false,-1, 4,0);
    tracep->declBus(c+221,"regfile_wr_data", false,-1, 31,0);
    tracep->declBit(c+222,"regfile_wr_en", false,-1);
    tracep->declBus(c+223,"thread_index_wb", false,-1, 3,0);
    tracep->declBus(c+224,"thread_index_wrmem", false,-1, 3,0);
    for (int i = 0; i < 9; ++i) {
        tracep->declBus(c+3+i*1,"thread_index_stage", true,(i+1), 3,0);
    }
    tracep->declBus(c+12,"thread_index_counter", false,-1, 3,0);
    tracep->declBit(c+13,"start", false,-1);
    tracep->declBit(c+14,"start_reg", false,-1);
    tracep->declBit(c+15,"PCsel_reg", false,-1);
    tracep->declBus(c+16,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"pcreg", false,-1, 31,0);
    tracep->declBus(c+225,"instruction", false,-1, 31,0);
    tracep->declBus(c+18,"instruction_reg", false,-1, 31,0);
    tracep->declBus(c+19,"rs1", false,-1, 4,0);
    tracep->declBus(c+20,"rs2", false,-1, 4,0);
    tracep->declBus(c+21,"regfile_write_addr", false,-1, 4,0);
    tracep->declBus(c+22,"opcode", false,-1, 6,0);
    tracep->declBus(c+23,"funct3", false,-1, 2,0);
    tracep->declBus(c+24,"funct7", false,-1, 6,0);
    tracep->declBus(c+25,"immSel", false,-1, 2,0);
    tracep->declBit(c+26,"brmuxsel", false,-1);
    tracep->declBit(c+27,"br_signed", false,-1);
    tracep->declBit(c+28,"is_branch", false,-1);
    tracep->declBit(c+29,"is_jump", false,-1);
    tracep->declBit(c+30,"aluop1sel", false,-1);
    tracep->declBit(c+31,"aluop2sel", false,-1);
    tracep->declBus(c+32,"ALUctrl", false,-1, 1,0);
    tracep->declBit(c+33,"MemWr", false,-1);
    tracep->declBit(c+34,"regfile_write_enable", false,-1);
    tracep->declBit(c+35,"load", false,-1);
    tracep->declBus(c+36,"WBSel", false,-1, 1,0);
    tracep->declBit(c+37,"load_reserved_op", false,-1);
    tracep->declBit(c+38,"store_cond_op", false,-1);
    tracep->declBit(c+39,"is_slt_op", false,-1);
    tracep->declBus(c+40,"regfile_write_addr_reg", false,-1, 4,0);
    tracep->declBit(c+41,"regfile_write_enable_reg", false,-1);
    tracep->declBit(c+42,"regfile_write_enable_post", false,-1);
    tracep->declBus(c+43,"rs1_reg", false,-1, 4,0);
    tracep->declBus(c+44,"rs2_reg", false,-1, 4,0);
    tracep->declBus(c+45,"imm_out", false,-1, 31,0);
    tracep->declBus(c+46,"ALUOp", false,-1, 3,0);
    tracep->declBus(c+47,"imm_reg", false,-1, 31,0);
    tracep->declBus(c+48,"rd1", false,-1, 31,0);
    tracep->declBus(c+49,"rd2", false,-1, 31,0);
    tracep->declBit(c+50,"is_jump_reg", false,-1);
    tracep->declBit(c+51,"PCsel", false,-1);
    tracep->declBus(c+52,"rd1_pipe", false,-1, 31,0);
    tracep->declBus(c+53,"rd2_pipe", false,-1, 31,0);
    tracep->declBus(c+52,"rd1_reg", false,-1, 31,0);
    tracep->declBus(c+53,"rd2_reg", false,-1, 31,0);
    tracep->declBit(c+54,"is_slt_op_reg", false,-1);
    tracep->declBit(c+55,"br_signed_reg", false,-1);
    tracep->declBit(c+56,"is_branch_reg", false,-1);
    tracep->declBus(c+57,"funct3_reg", false,-1, 2,0);
    tracep->declBus(c+58,"rd2_or_imm", false,-1, 31,0);
    tracep->declBit(c+59,"slt", false,-1);
    tracep->declBit(c+60,"is_branch_valid", false,-1);
    tracep->declBit(c+61,"aluop1sel_reg", false,-1);
    tracep->declBus(c+62,"imm_reg_f1", false,-1, 31,0);
    tracep->declBus(c+63,"aluop1", false,-1, 31,0);
    tracep->declBit(c+64,"aluop2sel_reg", false,-1);
    tracep->declBus(c+65,"imm_reg_f2", false,-1, 31,0);
    tracep->declBus(c+66,"aluop2", false,-1, 31,0);
    tracep->declBit(c+67,"brmuxsel_reg", false,-1);
    tracep->declBus(c+68,"ALUOp_reg", false,-1, 3,0);
    tracep->declBus(c+69,"pcplusfour", false,-1, 31,0);
    tracep->declBus(c+70,"pcreg_pipe", false,-1, 31,0);
    tracep->declBus(c+71,"alu_result_reg", false,-1, 31,0);
    tracep->declBit(c+72,"MemWr_pipe", false,-1);
    tracep->declBit(c+73,"store_cond_op_pipe", false,-1);
    tracep->declBit(c+74,"store_op", false,-1);
    tracep->declBit(c+75,"load_reserved_op_pipe", false,-1);
    tracep->declBus(c+76,"pcplusfour_reg", false,-1, 31,0);
    tracep->declBit(c+77,"sc_success", false,-1);
    tracep->declBit(c+78,"dmem_write_enable_pre", false,-1);
    tracep->declBit(c+79,"set_store", false,-1);
    tracep->declBit(c+80,"store_cond_op_pipe2", false,-1);
    tracep->declBit(c+81,"slt_and_not_sc_succ", false,-1);
    tracep->declBit(c+82,"slt_reg", false,-1);
    tracep->declBus(c+83,"rd2_reg2", false,-1, 31,0);
    tracep->declBus(c+84,"alu_result_reg_mem", false,-1, 31,0);
    tracep->declBus(c+85,"funct3_reg2", false,-1, 2,0);
    tracep->declBus(c+86,"rd2_reg2_post", false,-1, 31,0);
    tracep->declBus(c+87,"dmem_write_enable_post", false,-1, 3,0);
    tracep->declBus(c+88,"alu_result_reg_mem2", false,-1, 31,0);
    tracep->declBus(c+89,"funct3_reg3", false,-1, 2,0);
    tracep->declBus(c+90,"alu_result_reg_wb", false,-1, 31,0);
    tracep->declBit(c+91,"load_pipe", false,-1);
    tracep->declBus(c+92,"dmem_dout_pre", false,-1, 31,0);
    tracep->declBus(c+93,"dmem_dout_post", false,-1, 31,0);
    tracep->declBit(c+94,"pipe_slt_and_not_sc_succ", false,-1);
    tracep->declBus(c+95,"WBSel_pipe", false,-1, 1,0);
    tracep->declBus(c+96,"pcplusfour_pipe", false,-1, 31,0);
    tracep->declBus(c+97,"regfile_write_data", false,-1, 31,0);
    tracep->declBit(c+222,"regfile_we_pipe", false,-1);
    tracep->declBus(c+220,"regfile_wa_pipe", false,-1, 4,0);
    tracep->pushNamePrefix("ALUOp_reg_inst ");
    tracep->declBus(c+227,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+46,"i_signal", false,-1, 3,0);
    tracep->declBus(c+68,"o_pipelined_signal", false,-1, 3,0);
    tracep->declBus(c+98,"pipeline_stages", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_inst ");
    tracep->declBus(c+227,"ALUOP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+63,"i_op1", false,-1, 31,0);
    tracep->declBus(c+66,"i_op2", false,-1, 31,0);
    tracep->declBus(c+68,"i_aluop", false,-1, 3,0);
    tracep->declBus(c+71,"o_result", false,-1, 31,0);
    tracep->declBus(c+99,"o_result_add", false,-1, 31,0);
    tracep->declBus(c+100,"o_result_sub", false,-1, 31,0);
    tracep->declBus(c+101,"o_result_sll", false,-1, 31,0);
    tracep->declBus(c+102,"o_result_xor", false,-1, 31,0);
    tracep->declBus(c+103,"o_result_srl_sra", false,-1, 31,0);
    tracep->declBus(c+104,"o_result_or", false,-1, 31,0);
    tracep->declBus(c+105,"o_result_and", false,-1, 31,0);
    tracep->declBus(c+106,"o_result_pass", false,-1, 31,0);
    tracep->declBus(c+230,"result_srl_sra", false,-1, 31,0);
    tracep->declBus(c+107,"shamt", false,-1, 4,0);
    tracep->declBus(c+108,"temp", false,-1, 31,0);
    tracep->declBus(c+231,"mask", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Adder32_inst ");
    tracep->declBus(c+70,"i_op1", false,-1, 31,0);
    tracep->declBus(c+232,"i_op2", false,-1, 31,0);
    tracep->declBus(c+69,"o_sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Mem_pipe_inst ");
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+72,"i_signal", false,-1);
    tracep->declBit(c+78,"o_pipelined_signal", false,-1);
    tracep->declBus(c+78,"pipeline_stages", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCSel_reg_inst ");
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+51,"i_signal", false,-1);
    tracep->declBit(c+15,"o_pipelined_signal", false,-1);
    tracep->declBus(c+15,"pipeline_stages", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WBSel_pipe_inst ");
    tracep->declBus(c+228,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+234,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+36,"i_signal", false,-1, 1,0);
    tracep->declBus(c+95,"o_pipelined_signal", false,-1, 1,0);
    tracep->declBus(c+109,"pipeline_stages", false,-1, 13,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+110,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("alu_control_inst ");
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+32,"i_ALUctrl", false,-1, 1,0);
    tracep->declBus(c+23,"i_funct3", false,-1, 2,0);
    tracep->declBus(c+24,"i_funct7", false,-1, 6,0);
    tracep->declBus(c+46,"o_ALUOp", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_result_reg_mem2_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+84,"i_signal", false,-1, 31,0);
    tracep->declBus(c+88,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+88,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_result_reg_mem_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+71,"i_signal", false,-1, 31,0);
    tracep->declBus(c+84,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+84,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_result_reg_wb_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+88,"i_signal", false,-1, 31,0);
    tracep->declBus(c+90,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+90,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("aluop1sel_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+30,"i_signal", false,-1);
    tracep->declBit(c+61,"o_pipelined_signal", false,-1);
    tracep->declBus(c+111,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("without_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2 ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+112,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("aluop2sel_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+31,"i_signal", false,-1);
    tracep->declBit(c+64,"o_pipelined_signal", false,-1);
    tracep->declBus(c+113,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("without_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2 ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+114,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("br_signed_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+27,"i_signal", false,-1);
    tracep->declBit(c+55,"o_pipelined_signal", false,-1);
    tracep->declBus(c+115,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("without_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2 ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+116,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("branch_logic_inst ");
    tracep->declBit(c+54,"i_slt_op", false,-1);
    tracep->declBit(c+55,"i_br_signed", false,-1);
    tracep->declBit(c+56,"i_is_branch", false,-1);
    tracep->declBus(c+57,"i_funct3", false,-1, 2,0);
    tracep->declBus(c+52,"i_rd1", false,-1, 31,0);
    tracep->declBus(c+58,"i_rd2", false,-1, 31,0);
    tracep->declBit(c+59,"o_slt", false,-1);
    tracep->declBit(c+60,"o_is_branch_valid", false,-1);
    tracep->declBit(c+117,"bit_ext1", false,-1);
    tracep->declBit(c+118,"bit_ext2", false,-1);
    tracep->declBit(c+119,"br_eq", false,-1);
    tracep->declBit(c+120,"br_lt", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("brmuxsel_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+26,"i_signal", false,-1);
    tracep->declBit(c+67,"o_pipelined_signal", false,-1);
    tracep->declBus(c+121,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+122,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("control_unit_inst ");
    tracep->declBus(c+22,"i_opcode", false,-1, 6,0);
    tracep->declBus(c+23,"i_funct3", false,-1, 2,0);
    tracep->declBus(c+24,"i_funct7", false,-1, 6,0);
    tracep->declBus(c+25,"o_immSel", false,-1, 2,0);
    tracep->declBit(c+26,"o_brmuxsel", false,-1);
    tracep->declBit(c+27,"o_br_signed", false,-1);
    tracep->declBit(c+28,"o_is_branch", false,-1);
    tracep->declBit(c+29,"o_is_jump", false,-1);
    tracep->declBit(c+30,"o_aluop1sel", false,-1);
    tracep->declBit(c+31,"o_aluop2sel", false,-1);
    tracep->declBus(c+32,"o_ALUctrl", false,-1, 1,0);
    tracep->declBit(c+33,"o_MemWr", false,-1);
    tracep->declBit(c+34,"o_regWE", false,-1);
    tracep->declBit(c+35,"o_load", false,-1);
    tracep->declBus(c+36,"o_WBSel", false,-1, 1,0);
    tracep->declBit(c+39,"o_slt_op", false,-1);
    tracep->declBit(c+37,"o_res_station_valid", false,-1);
    tracep->declBit(c+38,"o_store_cond", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("funct3_reg2_inst ");
    tracep->declBus(c+235,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+57,"i_signal", false,-1, 2,0);
    tracep->declBus(c+85,"o_pipelined_signal", false,-1, 2,0);
    tracep->declBus(c+123,"pipeline_stages", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("funct3_reg_inst ");
    tracep->declBus(c+235,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+23,"i_signal", false,-1, 2,0);
    tracep->declBus(c+57,"o_pipelined_signal", false,-1, 2,0);
    tracep->declBus(c+124,"pipeline_stages", false,-1, 8,0);
    tracep->pushNamePrefix("without_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2 ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+125,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("funt3_reg3_inst ");
    tracep->declBus(c+235,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+85,"i_signal", false,-1, 2,0);
    tracep->declBus(c+89,"o_pipelined_signal", false,-1, 2,0);
    tracep->declBus(c+126,"pipeline_stages", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_reg_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+45,"i_signal", false,-1, 31,0);
    tracep->declBus(c+47,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+47,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_reg_inst1 ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+47,"i_signal", false,-1, 31,0);
    tracep->declBus(c+62,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+62,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_reg_inst2 ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+47,"i_signal", false,-1, 31,0);
    tracep->declBus(c+65,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+65,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("immsel_signext_inst ");
    tracep->declBus(c+236,"ID", false,-1, 10,0);
    tracep->declBus(c+237,"NUM_THREADS", false,-1, 31,0);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+127,"i_instruction", false,-1, 31,7);
    tracep->declBus(c+25,"i_imm_sel", false,-1, 2,0);
    tracep->declBus(c+128,"i_thread_index", false,-1, 3,0);
    tracep->declBus(c+45,"o_imm_out", false,-1, 31,0);
    tracep->declBus(c+129,"imm_U", false,-1, 31,0);
    tracep->declBus(c+130,"imm_I", false,-1, 11,0);
    tracep->declBus(c+131,"imm_S", false,-1, 11,0);
    tracep->declBus(c+132,"imm_B", false,-1, 12,0);
    tracep->declBus(c+133,"imm_J", false,-1, 20,0);
    tracep->declBus(c+134,"imm_I_ext", false,-1, 31,0);
    tracep->declBus(c+135,"imm_S_ext", false,-1, 31,0);
    tracep->declBus(c+136,"imm_B_ext", false,-1, 31,0);
    tracep->declBus(c+137,"imm_J_ext", false,-1, 31,0);
    tracep->declBus(c+128,"mhartid", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instr_reg_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+225,"i_signal", false,-1, 31,0);
    tracep->declBus(c+18,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+18,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instruction_decoder_inst ");
    tracep->declBus(c+18,"i_instruction", false,-1, 31,0);
    tracep->declBus(c+22,"o_opcode", false,-1, 6,0);
    tracep->declBus(c+23,"o_funct3", false,-1, 2,0);
    tracep->declBus(c+24,"o_funct7", false,-1, 6,0);
    tracep->declBus(c+19,"o_rs1", false,-1, 4,0);
    tracep->declBus(c+20,"o_rs2", false,-1, 4,0);
    tracep->declBus(c+21,"o_wa", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("is_branch_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+28,"i_signal", false,-1);
    tracep->declBit(c+56,"o_pipelined_signal", false,-1);
    tracep->declBus(c+138,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+139,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("is_jump_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+29,"i_signal", false,-1);
    tracep->declBit(c+50,"o_pipelined_signal", false,-1);
    tracep->declBus(c+140,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+141,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("is_slt_op_reg_inst ");
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+39,"i_signal", false,-1);
    tracep->declBit(c+54,"o_pipelined_signal", false,-1);
    tracep->declBus(c+142,"pipeline_stages", false,-1, 2,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+143,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("load_pipe_inst ");
    tracep->declBus(c+234,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+35,"i_signal", false,-1);
    tracep->declBit(c+91,"o_pipelined_signal", false,-1);
    tracep->declBus(c+144,"pipeline_stages", false,-1, 6,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+145,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("load_unit_inst ");
    tracep->declBit(c+91,"i_load", false,-1);
    tracep->declBus(c+146,"i_addr", false,-1, 1,0);
    tracep->declBus(c+89,"i_funct3", false,-1, 2,0);
    tracep->declBus(c+92,"i_dmem_pre", false,-1, 31,0);
    tracep->declBus(c+93,"o_dmem_post", false,-1, 31,0);
    tracep->declBus(c+147,"dmem_byte", false,-1, 7,0);
    tracep->declBus(c+148,"dmem_half", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lr_pipe_inst ");
    tracep->declBus(c+227,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+37,"i_signal", false,-1);
    tracep->declBit(c+75,"o_pipelined_signal", false,-1);
    tracep->declBus(c+149,"pipeline_stages", false,-1, 3,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+150,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("mux2to1_PCmux_inst ");
    tracep->declBus(c+229,"MUX_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+15,"i_sel", false,-1);
    tracep->declBus(c+76,"i_in0", false,-1, 31,0);
    tracep->declBus(c+71,"i_in1", false,-1, 31,0);
    tracep->declBus(c+16,"o_muxout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2to1_aluop1_inst ");
    tracep->declBus(c+229,"MUX_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+61,"i_sel", false,-1);
    tracep->declBus(c+52,"i_in0", false,-1, 31,0);
    tracep->declBus(c+70,"i_in1", false,-1, 31,0);
    tracep->declBus(c+63,"o_muxout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2to1_aluop2_inst ");
    tracep->declBus(c+229,"MUX_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+64,"i_sel", false,-1);
    tracep->declBus(c+53,"i_in0", false,-1, 31,0);
    tracep->declBus(c+62,"i_in1", false,-1, 31,0);
    tracep->declBus(c+66,"o_muxout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux2to1_br_inputs_inst ");
    tracep->declBus(c+229,"MUX_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+67,"i_sel", false,-1);
    tracep->declBus(c+53,"i_in0", false,-1, 31,0);
    tracep->declBus(c+65,"i_in1", false,-1, 31,0);
    tracep->declBus(c+58,"o_muxout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux4to1_WB_inst ");
    tracep->declBus(c+229,"MUX_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"i_sel", false,-1, 1,0);
    tracep->declBus(c+93,"i_in0", false,-1, 31,0);
    tracep->declBus(c+90,"i_in1", false,-1, 31,0);
    tracep->declBus(c+96,"i_in2", false,-1, 31,0);
    tracep->declBus(c+151,"i_in3", false,-1, 31,0);
    tracep->declBus(c+97,"o_muxout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcplusfour_pipe_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+235,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+76,"i_signal", false,-1, 31,0);
    tracep->declBus(c+96,"o_pipelined_signal", false,-1, 31,0);
    tracep->declArray(c+152,"pipeline_stages", false,-1, 95,0);
    tracep->pushNamePrefix("without_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2 ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+155,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("pcplusfour_reg_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+69,"i_signal", false,-1, 31,0);
    tracep->declBus(c+76,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+76,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcreg_pipe_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+238,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+17,"i_signal", false,-1, 31,0);
    tracep->declBus(c+70,"o_pipelined_signal", false,-1, 31,0);
    tracep->declArray(c+156,"pipeline_stages", false,-1, 159,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+161,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("pipe_slt_and_not_sc_succ_inst ");
    tracep->declBus(c+228,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+81,"i_signal", false,-1);
    tracep->declBit(c+94,"o_pipelined_signal", false,-1);
    tracep->declBus(c+162,"pipeline_stages", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pre_mem_pipe_inst ");
    tracep->declBus(c+227,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+33,"i_signal", false,-1);
    tracep->declBit(c+72,"o_pipelined_signal", false,-1);
    tracep->declBus(c+163,"pipeline_stages", false,-1, 3,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+164,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("rd1_pipe_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+48,"i_signal", false,-1, 31,0);
    tracep->declBus(c+52,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+52,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd2_reg2_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+228,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+53,"i_signal", false,-1, 31,0);
    tracep->declBus(c+83,"o_pipelined_signal", false,-1, 31,0);
    tracep->declQuad(c+165,"pipeline_stages", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rd2_reg_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+49,"i_signal", false,-1, 31,0);
    tracep->declBus(c+53,"o_pipelined_signal", false,-1, 31,0);
    tracep->declBus(c+53,"pipeline_stages", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reg_program_counter_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+239,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+12,"i_thread_index_counter", false,-1, 3,0);
    tracep->declBus(c+224,"i_thread_index_execute", false,-1, 3,0);
    tracep->declBus(c+16,"i_pc_in", false,-1, 31,0);
    tracep->declBus(c+17,"o_pcreg_out", false,-1, 31,0);
    tracep->declBus(c+167,"counter", false,-1, 3,0);
    tracep->declBit(c+168,"we", false,-1);
    tracep->declBus(c+169,"pcaddrin", false,-1, 3,0);
    tracep->declBus(c+170,"pcdatain", false,-1, 11,0);
    tracep->declBus(c+171,"pcdataout", false,-1, 11,0);
    tracep->pushNamePrefix("PC_MEM_INST ");
    tracep->declBus(c+239,"SIZE", false,-1, 31,0);
    tracep->declBus(c+227,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+241,"INIT_VAL", false,-1, 11,0);
    tracep->declArray(c+242,"RAM_STYLE_ATTR", false,-1, 87,0);
    tracep->declBit(c+212,"clka", false,-1);
    tracep->declBit(c+245,"ena", false,-1);
    tracep->declBit(c+168,"wea", false,-1);
    tracep->declBus(c+169,"addra", false,-1, 3,0);
    tracep->declBus(c+170,"dia", false,-1, 11,0);
    tracep->declBus(c+12,"addrb", false,-1, 3,0);
    tracep->declBus(c+171,"dob", false,-1, 11,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+172+i*1,"MEM", true,(i+0), 11,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile_wa_pipe_inst ");
    tracep->declBus(c+238,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+246,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+40,"i_signal", false,-1, 4,0);
    tracep->declBus(c+220,"o_pipelined_signal", false,-1, 4,0);
    tracep->declBus(c+188,"pipeline_stages", false,-1, 29,0);
    tracep->pushNamePrefix("without_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2 ");
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+189,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("regfile_wa_pipe_reg_inst ");
    tracep->declBus(c+238,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+21,"i_signal", false,-1, 4,0);
    tracep->declBus(c+40,"o_pipelined_signal", false,-1, 4,0);
    tracep->declBus(c+40,"pipeline_stages", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_we_pipe_inst ");
    tracep->declBus(c+246,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+42,"i_signal", false,-1);
    tracep->declBit(c+222,"o_pipelined_signal", false,-1);
    tracep->declBus(c+190,"pipeline_stages", false,-1, 5,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+191,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("regfile_we_pipe_reg_inst ");
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+34,"i_signal", false,-1);
    tracep->declBit(c+41,"o_pipelined_signal", false,-1);
    tracep->declBus(c+41,"pipeline_stages", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register_file_vec_inst ");
    tracep->declBus(c+229,"DWIDTH", false,-1, 31,0);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+223,"i_thread_index_writeback", false,-1, 3,0);
    tracep->declBus(c+192,"i_thread_index_decode", false,-1, 3,0);
    tracep->declBus(c+43,"i_read_addr1", false,-1, 4,0);
    tracep->declBus(c+44,"i_read_addr2", false,-1, 4,0);
    tracep->declBus(c+220,"i_write_addr", false,-1, 4,0);
    tracep->declBus(c+97,"i_write_data", false,-1, 31,0);
    tracep->declBit(c+222,"i_wr_en", false,-1);
    tracep->declBus(c+48,"o_read_data1", false,-1, 31,0);
    tracep->declBus(c+49,"o_read_data2", false,-1, 31,0);
    tracep->pushNamePrefix("regfile_bot_inst ");
    tracep->declBus(c+247,"SIZE", false,-1, 31,0);
    tracep->declBus(c+248,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+229,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+249,"RAM_STYLE_ATTR", false,-1, 39,0);
    tracep->declBit(c+212,"clka", false,-1);
    tracep->declBit(c+245,"ena", false,-1);
    tracep->declBit(c+222,"wea", false,-1);
    tracep->declBus(c+193,"addra", false,-1, 8,0);
    tracep->declBus(c+97,"dia", false,-1, 31,0);
    tracep->declBit(c+212,"clkb", false,-1);
    tracep->declBit(c+245,"enb", false,-1);
    tracep->declBus(c+194,"addrb", false,-1, 8,0);
    tracep->declBus(c+49,"dob", false,-1, 31,0);
    tracep->declBus(c+1,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_top_inst ");
    tracep->declBus(c+247,"SIZE", false,-1, 31,0);
    tracep->declBus(c+248,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+229,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+249,"RAM_STYLE_ATTR", false,-1, 39,0);
    tracep->declBit(c+212,"clka", false,-1);
    tracep->declBit(c+245,"ena", false,-1);
    tracep->declBit(c+222,"wea", false,-1);
    tracep->declBus(c+193,"addra", false,-1, 8,0);
    tracep->declBus(c+97,"dia", false,-1, 31,0);
    tracep->declBit(c+212,"clkb", false,-1);
    tracep->declBit(c+245,"enb", false,-1);
    tracep->declBus(c+195,"addrb", false,-1, 8,0);
    tracep->declBus(c+48,"dob", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("reservation_set_inst ");
    tracep->declBus(c+237,"NUM_THREADS", false,-1, 31,0);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBus(c+196,"i_addr", false,-1, 11,0);
    tracep->declBit(c+74,"i_store_op", false,-1);
    tracep->declBit(c+73,"i_store_cond_op", false,-1);
    tracep->declBit(c+75,"i_load_reserved_op", false,-1);
    tracep->declBus(c+224,"i_mhartid", false,-1, 3,0);
    tracep->declBit(c+77,"o_sc_success", false,-1);
    tracep->declBus(c+197,"reserved_address", false,-1, 11,0);
    tracep->declBus(c+198,"reserving_hart", false,-1, 3,0);
    tracep->declBit(c+199,"reserved_valid", false,-1);
    tracep->declBit(c+200,"address_match", false,-1);
    tracep->declBit(c+201,"hart_match", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs1_reg_inst ");
    tracep->declBus(c+238,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+19,"i_signal", false,-1, 4,0);
    tracep->declBus(c+43,"o_pipelined_signal", false,-1, 4,0);
    tracep->declBus(c+43,"pipeline_stages", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rs2_reg_inst ");
    tracep->declBus(c+238,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBus(c+20,"i_signal", false,-1, 4,0);
    tracep->declBus(c+44,"o_pipelined_signal", false,-1, 4,0);
    tracep->declBus(c+44,"pipeline_stages", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sc_pipe2_inst ");
    tracep->declBus(c+233,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+73,"i_signal", false,-1);
    tracep->declBit(c+80,"o_pipelined_signal", false,-1);
    tracep->declBus(c+80,"pipeline_stages", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sc_pipe_inst ");
    tracep->declBus(c+227,"N", false,-1, 31,0);
    tracep->declBus(c+233,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+38,"i_signal", false,-1);
    tracep->declBit(c+73,"o_pipelined_signal", false,-1);
    tracep->declBus(c+202,"pipeline_stages", false,-1, 3,0);
    tracep->pushNamePrefix("with_reset ");
    tracep->pushNamePrefix("n_is_greater_than_2_reset ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+203,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("slt_reg_inst ");
    tracep->declBus(c+228,"N", false,-1, 31,0);
    tracep->declBus(c+226,"WithReset", false,-1, 31,0);
    tracep->declBit(c+213,"reset", false,-1);
    tracep->declBit(c+212,"clk", false,-1);
    tracep->declBit(c+59,"i_signal", false,-1);
    tracep->declBit(c+82,"o_pipelined_signal", false,-1);
    tracep->declBus(c+204,"pipeline_stages", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("store_unit_inst ");
    tracep->declBit(c+79,"i_store", false,-1);
    tracep->declBus(c+85,"i_funct3", false,-1, 2,0);
    tracep->declBus(c+83,"i_data", false,-1, 31,0);
    tracep->declBus(c+205,"i_addr", false,-1, 1,0);
    tracep->declBus(c+86,"o_data", false,-1, 31,0);
    tracep->declBus(c+87,"o_we", false,-1, 3,0);
    tracep->declBus(c+206,"sb_we", false,-1, 3,0);
    tracep->declBus(c+207,"sh_we", false,-1, 3,0);
    tracep->declBus(c+208,"sb_d", false,-1, 4,0);
    tracep->declBus(c+209,"sh_d", false,-1, 4,0);
    tracep->declBus(c+210,"shift_sh", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+211,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VRISCV_core___024root__trace_init_sub__TOP__riscv_pkg__0(VRISCV_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_init_sub__TOP__riscv_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+251,"array_len", false,-1, 31,0);
    tracep->declBus(c+252,"DWIDTH", false,-1, 31,0);
    tracep->declBus(c+252,"IWIDTH", false,-1, 31,0);
    tracep->declBus(c+253,"NUM_THREADS", false,-1, 31,0);
    tracep->declBus(c+252,"REGFILE_SIZE", false,-1, 31,0);
    tracep->declBus(c+241,"STARTUP_ADDR", false,-1, 11,0);
    tracep->declBus(c+254,"MEMORY_SIZE", false,-1, 31,0);
    tracep->declBus(c+255,"ALUOP_WIDTH", false,-1, 31,0);
    tracep->declBus(c+256,"ADD_OP", false,-1, 3,0);
    tracep->declBus(c+257,"SUB_OP", false,-1, 3,0);
    tracep->declBus(c+258,"OR_OP", false,-1, 3,0);
    tracep->declBus(c+259,"AND_OP", false,-1, 3,0);
    tracep->declBus(c+260,"XOR_OP", false,-1, 3,0);
    tracep->declBus(c+261,"PASS_OP", false,-1, 3,0);
    tracep->declBus(c+262,"SLT_OP", false,-1, 3,0);
    tracep->declBus(c+263,"SLTU_OP", false,-1, 3,0);
    tracep->declBus(c+264,"SLL_OP", false,-1, 3,0);
    tracep->declBus(c+265,"SRL_OP", false,-1, 3,0);
    tracep->declBus(c+266,"SRA_OP", false,-1, 3,0);
    tracep->declBus(c+254,"SIZE", false,-1, 31,0);
    tracep->declBus(c+267,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+268,"COL_WIDTH", false,-1, 31,0);
    tracep->declBus(c+255,"NB_COL", false,-1, 31,0);
    tracep->declBus(c+269,"RF_USE_BRAM", false,-1, 31,0);
    tracep->declBus(c+270,"RF_SIZE", false,-1, 31,0);
}

VL_ATTR_COLD void VRISCV_core___024root__trace_init_top(VRISCV_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_init_top\n"); );
    // Body
    VRISCV_core___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("riscv_pkg ");
    VRISCV_core___024root__trace_init_sub__TOP__riscv_pkg__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VRISCV_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCV_core___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRISCV_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRISCV_core___024root__trace_register(VRISCV_core___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VRISCV_core___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VRISCV_core___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VRISCV_core___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRISCV_core___024root__trace_full_sub_0(VRISCV_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRISCV_core___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_full_top_0\n"); );
    // Init
    VRISCV_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_core___024root*>(voidSelf);
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRISCV_core___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRISCV_core___024root__trace_full_sub_0(VRISCV_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRISCV_core___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hc1e2acf9__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_bot_inst__DOT__j),32);
    bufp->fullIData(oldp+2,(vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT__regfile_top_inst__DOT__j),32);
    bufp->fullCData(oldp+3,(vlSelf->RISCV_core__DOT__thread_index_stage[0]),4);
    bufp->fullCData(oldp+4,(vlSelf->RISCV_core__DOT__thread_index_stage[1]),4);
    bufp->fullCData(oldp+5,(vlSelf->RISCV_core__DOT__thread_index_stage[2]),4);
    bufp->fullCData(oldp+6,(vlSelf->RISCV_core__DOT__thread_index_stage[3]),4);
    bufp->fullCData(oldp+7,(vlSelf->RISCV_core__DOT__thread_index_stage[4]),4);
    bufp->fullCData(oldp+8,(vlSelf->RISCV_core__DOT__thread_index_stage[5]),4);
    bufp->fullCData(oldp+9,(vlSelf->RISCV_core__DOT__thread_index_stage[6]),4);
    bufp->fullCData(oldp+10,(vlSelf->RISCV_core__DOT__thread_index_stage[7]),4);
    bufp->fullCData(oldp+11,(vlSelf->RISCV_core__DOT__thread_index_stage[8]),4);
    bufp->fullCData(oldp+12,(vlSelf->RISCV_core__DOT__thread_index_counter),4);
    bufp->fullBit(oldp+13,(vlSelf->RISCV_core__DOT__start));
    bufp->fullBit(oldp+14,(vlSelf->RISCV_core__DOT__start_reg));
    bufp->fullBit(oldp+15,(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages));
    bufp->fullIData(oldp+16,(((IData)(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages)
                               ? ((IData)(vlSelf->RISCV_core__DOT__PCSel_reg_inst__DOT__pipeline_stages)
                                   ? vlSelf->RISCV_core__DOT__alu_result_reg
                                   : 0U) : vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages)),32);
    bufp->fullIData(oldp+17,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout),32);
    bufp->fullIData(oldp+18,(vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages),32);
    bufp->fullCData(oldp+19,((0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                       >> 7U))),5);
    bufp->fullCData(oldp+22,((0x7fU & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)),7);
    bufp->fullCData(oldp+23,((7U & (vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+24,((vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+25,(vlSelf->RISCV_core__DOT__immSel),3);
    bufp->fullBit(oldp+26,(vlSelf->RISCV_core__DOT__brmuxsel));
    bufp->fullBit(oldp+27,(vlSelf->RISCV_core__DOT__br_signed));
    bufp->fullBit(oldp+28,(vlSelf->RISCV_core__DOT__is_branch));
    bufp->fullBit(oldp+29,(vlSelf->RISCV_core__DOT__is_jump));
    bufp->fullBit(oldp+30,(vlSelf->RISCV_core__DOT__aluop1sel));
    bufp->fullBit(oldp+31,(vlSelf->RISCV_core__DOT__aluop2sel));
    bufp->fullCData(oldp+32,(vlSelf->RISCV_core__DOT__ALUctrl),2);
    bufp->fullBit(oldp+33,(vlSelf->RISCV_core__DOT__MemWr));
    bufp->fullBit(oldp+34,(vlSelf->RISCV_core__DOT__regfile_write_enable));
    bufp->fullBit(oldp+35,(vlSelf->RISCV_core__DOT__load));
    bufp->fullCData(oldp+36,(vlSelf->RISCV_core__DOT__WBSel),2);
    bufp->fullBit(oldp+37,(vlSelf->RISCV_core__DOT__load_reserved_op));
    bufp->fullBit(oldp+38,(vlSelf->RISCV_core__DOT__store_cond_op));
    bufp->fullBit(oldp+39,(vlSelf->RISCV_core__DOT__is_slt_op));
    bufp->fullCData(oldp+40,(vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages),5);
    bufp->fullBit(oldp+41,(vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->RISCV_core__DOT__regfile_we_pipe_reg_inst__DOT__pipeline_stages) 
                            & (0U != (IData)(vlSelf->RISCV_core__DOT__regfile_wa_pipe_reg_inst__DOT__pipeline_stages)))));
    bufp->fullCData(oldp+43,(vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages),5);
    bufp->fullCData(oldp+44,(vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages),5);
    bufp->fullIData(oldp+45,(vlSelf->RISCV_core__DOT__imm_out),32);
    bufp->fullCData(oldp+46,(vlSelf->RISCV_core__DOT__ALUOp),4);
    bufp->fullIData(oldp+47,(vlSelf->RISCV_core__DOT__imm_reg_inst__DOT__pipeline_stages),32);
    bufp->fullIData(oldp+48,(vlSelf->RISCV_core__DOT__rd1),32);
    bufp->fullIData(oldp+49,(vlSelf->RISCV_core__DOT__rd2),32);
    bufp->fullBit(oldp+50,((1U & ((IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullBit(oldp+51,(((IData)(vlSelf->RISCV_core__DOT__is_branch_valid) 
                            | ((IData)(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages) 
                               >> 2U))));
    bufp->fullIData(oldp+52,(vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages),32);
    bufp->fullIData(oldp+53,(vlSelf->RISCV_core__DOT__rd2_reg_inst__DOT__pipeline_stages),32);
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullBit(oldp+55,((1U & ((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullBit(oldp+56,((1U & ((IData)(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullCData(oldp+57,((7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages) 
                                    >> 6U))),3);
    bufp->fullIData(oldp+58,(vlSelf->RISCV_core__DOT__rd2_or_imm),32);
    bufp->fullBit(oldp+59,((1U & ((~ ((IData)(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages) 
                                      >> 2U)) | (IData)(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt)))));
    bufp->fullBit(oldp+60,(vlSelf->RISCV_core__DOT__is_branch_valid));
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullIData(oldp+62,(vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages),32);
    bufp->fullIData(oldp+63,(vlSelf->RISCV_core__DOT__aluop1),32);
    bufp->fullBit(oldp+64,((1U & ((IData)(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullIData(oldp+65,(vlSelf->RISCV_core__DOT__imm_reg_inst1__DOT__pipeline_stages),32);
    bufp->fullIData(oldp+66,(vlSelf->RISCV_core__DOT__aluop2),32);
    bufp->fullBit(oldp+67,((1U & ((IData)(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages) 
                                  >> 2U))));
    bufp->fullCData(oldp+68,((0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                      >> 4U))),4);
    bufp->fullIData(oldp+69,(((IData)(4U) + vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U])),32);
    bufp->fullIData(oldp+70,(vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages[4U]),32);
    bufp->fullIData(oldp+71,(vlSelf->RISCV_core__DOT__alu_result_reg),32);
    bufp->fullBit(oldp+72,((1U & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                                  >> 3U))));
    bufp->fullBit(oldp+73,((1U & ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                                  >> 3U))));
    bufp->fullBit(oldp+74,((IData)(((~ ((IData)(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages) 
                                        >> 3U)) & ((IData)(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages) 
                                                   >> 3U)))));
    bufp->fullBit(oldp+75,((1U & ((IData)(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages) 
                                  >> 3U))));
    bufp->fullIData(oldp+76,(vlSelf->RISCV_core__DOT__pcplusfour_reg_inst__DOT__pipeline_stages),32);
    bufp->fullBit(oldp+77,(vlSelf->RISCV_core__DOT__sc_success));
    bufp->fullBit(oldp+78,(vlSelf->RISCV_core__DOT__Mem_pipe_inst__DOT__pipeline_stages));
    bufp->fullBit(oldp+79,(vlSelf->RISCV_core__DOT__set_store));
    bufp->fullBit(oldp+80,(vlSelf->RISCV_core__DOT__sc_pipe2_inst__DOT__pipeline_stages));
    bufp->fullBit(oldp+81,(((~ (IData)(vlSelf->RISCV_core__DOT__sc_success)) 
                            & ((IData)(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages) 
                               >> 1U))));
    bufp->fullBit(oldp+82,((1U & ((IData)(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages) 
                                  >> 1U))));
    bufp->fullIData(oldp+83,((IData)((vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+84,(vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages),32);
    bufp->fullCData(oldp+85,((7U & ((IData)(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages) 
                                    >> 3U))),3);
    bufp->fullIData(oldp+86,(vlSelf->RISCV_core__DOT__rd2_reg2_post),32);
    bufp->fullCData(oldp+87,(vlSelf->RISCV_core__DOT__dmem_write_enable_post),4);
    bufp->fullIData(oldp+88,(vlSelf->RISCV_core__DOT__alu_result_reg_mem2_inst__DOT__pipeline_stages),32);
    bufp->fullCData(oldp+89,((7U & ((IData)(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages) 
                                    >> 3U))),3);
    bufp->fullIData(oldp+90,(vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages),32);
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages) 
                                  >> 6U))));
    bufp->fullIData(oldp+92,(vlSelf->RISCV_core__DOT__dmem_dout_pre),32);
    bufp->fullIData(oldp+93,(vlSelf->RISCV_core__DOT__dmem_dout_post),32);
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages) 
                                  >> 1U))));
    bufp->fullCData(oldp+95,((3U & ((IData)(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages) 
                                    >> 0xcU))),2);
    bufp->fullIData(oldp+96,(vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages[2U]),32);
    bufp->fullIData(oldp+97,(vlSelf->RISCV_core__DOT__regfile_write_data),32);
    bufp->fullCData(oldp+98,(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages),8);
    bufp->fullIData(oldp+99,(((0U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                              >> 4U)))
                               ? (vlSelf->RISCV_core__DOT__aluop1 
                                  + vlSelf->RISCV_core__DOT__aluop2)
                               : 0U)),32);
    bufp->fullIData(oldp+100,(((1U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                               >> 4U)))
                                ? (vlSelf->RISCV_core__DOT__aluop1 
                                   - vlSelf->RISCV_core__DOT__aluop2)
                                : 0U)),32);
    bufp->fullIData(oldp+101,(((2U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                               >> 4U)))
                                ? (vlSelf->RISCV_core__DOT__aluop1 
                                   << (0x1fU & vlSelf->RISCV_core__DOT__aluop2))
                                : 0U)),32);
    bufp->fullIData(oldp+102,(((5U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                               >> 4U)))
                                ? (vlSelf->RISCV_core__DOT__aluop1 
                                   ^ vlSelf->RISCV_core__DOT__aluop2)
                                : 0U)),32);
    bufp->fullIData(oldp+103,((((6U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                >> 4U))) 
                                | (7U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                  >> 4U))))
                                ? (vlSelf->RISCV_core__DOT__aluop1 
                                   >> (0x1fU & vlSelf->RISCV_core__DOT__aluop2))
                                : 0U)),32);
    bufp->fullIData(oldp+104,(((8U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                               >> 4U)))
                                ? (vlSelf->RISCV_core__DOT__aluop1 
                                   | vlSelf->RISCV_core__DOT__aluop2)
                                : 0U)),32);
    bufp->fullIData(oldp+105,(((9U == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                               >> 4U)))
                                ? (vlSelf->RISCV_core__DOT__aluop1 
                                   & vlSelf->RISCV_core__DOT__aluop2)
                                : 0U)),32);
    bufp->fullIData(oldp+106,(((0xaU == (0xfU & ((IData)(vlSelf->RISCV_core__DOT__ALUOp_reg_inst__DOT__pipeline_stages) 
                                                 >> 4U)))
                                ? vlSelf->RISCV_core__DOT__aluop2
                                : 0U)),32);
    bufp->fullCData(oldp+107,((0x1fU & vlSelf->RISCV_core__DOT__aluop2)),5);
    bufp->fullIData(oldp+108,((vlSelf->RISCV_core__DOT__aluop1 
                               >> (0x1fU & vlSelf->RISCV_core__DOT__aluop2))),32);
    bufp->fullSData(oldp+109,(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__pipeline_stages),14);
    bufp->fullIData(oldp+110,(vlSelf->RISCV_core__DOT__WBSel_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+111,(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+112,(vlSelf->RISCV_core__DOT__aluop1sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+113,(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+114,(vlSelf->RISCV_core__DOT__aluop2sel_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+115,(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+116,(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+117,((IData)((((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                      >> 2U) & (vlSelf->RISCV_core__DOT__rd1_pipe_inst__DOT__pipeline_stages 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+118,((IData)((((IData)(vlSelf->RISCV_core__DOT__br_signed_reg_inst__DOT__pipeline_stages) 
                                      >> 2U) & (vlSelf->RISCV_core__DOT__rd2_or_imm 
                                                >> 0x1fU)))));
    bufp->fullBit(oldp+119,(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_eq));
    bufp->fullBit(oldp+120,(vlSelf->RISCV_core__DOT__branch_logic_inst__DOT__br_lt));
    bufp->fullCData(oldp+121,(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+122,(vlSelf->RISCV_core__DOT__brmuxsel_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+123,(vlSelf->RISCV_core__DOT__funct3_reg2_inst__DOT__pipeline_stages),6);
    bufp->fullSData(oldp+124,(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__pipeline_stages),9);
    bufp->fullIData(oldp+125,(vlSelf->RISCV_core__DOT__funct3_reg_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+126,(vlSelf->RISCV_core__DOT__funt3_reg3_inst__DOT__pipeline_stages),6);
    bufp->fullIData(oldp+127,((vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages 
                               >> 7U)),25);
    bufp->fullCData(oldp+128,(vlSelf->RISCV_core__DOT__thread_index_stage
                              [1U]),4);
    bufp->fullIData(oldp+129,((0xfffff000U & vlSelf->RISCV_core__DOT__instr_reg_inst__DOT__pipeline_stages)),32);
    bufp->fullSData(oldp+130,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I),12);
    bufp->fullSData(oldp+131,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S),12);
    bufp->fullSData(oldp+132,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B),13);
    bufp->fullIData(oldp+133,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J),21);
    bufp->fullIData(oldp+134,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_I_ext),32);
    bufp->fullIData(oldp+135,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_S_ext),32);
    bufp->fullIData(oldp+136,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_B_ext),32);
    bufp->fullIData(oldp+137,(vlSelf->RISCV_core__DOT__immsel_signext_inst__DOT__imm_J_ext),32);
    bufp->fullCData(oldp+138,(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+139,(vlSelf->RISCV_core__DOT__is_branch_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+140,(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+141,(vlSelf->RISCV_core__DOT__is_jump_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+142,(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__pipeline_stages),3);
    bufp->fullIData(oldp+143,(vlSelf->RISCV_core__DOT__is_slt_op_reg_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+144,(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__pipeline_stages),7);
    bufp->fullIData(oldp+145,(vlSelf->RISCV_core__DOT__load_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+146,((3U & vlSelf->RISCV_core__DOT__alu_result_reg_wb_inst__DOT__pipeline_stages)),2);
    bufp->fullCData(oldp+147,(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_byte),8);
    bufp->fullSData(oldp+148,(vlSelf->RISCV_core__DOT__load_unit_inst__DOT__dmem_half),16);
    bufp->fullCData(oldp+149,(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__pipeline_stages),4);
    bufp->fullIData(oldp+150,(vlSelf->RISCV_core__DOT__lr_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+151,((0x80000000U & ((IData)(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages) 
                                              << 0x1eU))),32);
    bufp->fullWData(oldp+152,(vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__pipeline_stages),96);
    bufp->fullIData(oldp+155,(vlSelf->RISCV_core__DOT__pcplusfour_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullWData(oldp+156,(vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__pipeline_stages),160);
    bufp->fullIData(oldp+161,(vlSelf->RISCV_core__DOT__pcreg_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+162,(vlSelf->RISCV_core__DOT__pipe_slt_and_not_sc_succ_inst__DOT__pipeline_stages),2);
    bufp->fullCData(oldp+163,(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__pipeline_stages),4);
    bufp->fullIData(oldp+164,(vlSelf->RISCV_core__DOT__pre_mem_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullQData(oldp+165,(vlSelf->RISCV_core__DOT__rd2_reg2_inst__DOT__pipeline_stages),64);
    bufp->fullCData(oldp+167,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__counter),4);
    bufp->fullBit(oldp+168,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__we));
    bufp->fullCData(oldp+169,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcaddrin),4);
    bufp->fullSData(oldp+170,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdatain),12);
    bufp->fullSData(oldp+171,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__pcdataout),12);
    bufp->fullSData(oldp+172,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[0]),12);
    bufp->fullSData(oldp+173,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[1]),12);
    bufp->fullSData(oldp+174,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[2]),12);
    bufp->fullSData(oldp+175,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[3]),12);
    bufp->fullSData(oldp+176,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[4]),12);
    bufp->fullSData(oldp+177,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[5]),12);
    bufp->fullSData(oldp+178,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[6]),12);
    bufp->fullSData(oldp+179,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[7]),12);
    bufp->fullSData(oldp+180,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[8]),12);
    bufp->fullSData(oldp+181,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[9]),12);
    bufp->fullSData(oldp+182,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[10]),12);
    bufp->fullSData(oldp+183,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[11]),12);
    bufp->fullSData(oldp+184,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[12]),12);
    bufp->fullSData(oldp+185,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[13]),12);
    bufp->fullSData(oldp+186,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[14]),12);
    bufp->fullSData(oldp+187,(vlSelf->RISCV_core__DOT__reg_program_counter_inst__DOT__PC_MEM_INST__DOT__MEM[15]),12);
    bufp->fullIData(oldp+188,(vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__pipeline_stages),30);
    bufp->fullIData(oldp+189,(vlSelf->RISCV_core__DOT__regfile_wa_pipe_inst__DOT__without_reset__DOT__n_is_greater_than_2__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+190,(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__pipeline_stages),6);
    bufp->fullIData(oldp+191,(vlSelf->RISCV_core__DOT__regfile_we_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+192,(vlSelf->RISCV_core__DOT__thread_index_stage
                              [2U]),4);
    bufp->fullSData(oldp+193,(vlSelf->RISCV_core__DOT__register_file_vec_inst__DOT____Vcellinp__regfile_bot_inst__addra),9);
    bufp->fullSData(oldp+194,(((vlSelf->RISCV_core__DOT__thread_index_stage
                                [2U] << 5U) | (IData)(vlSelf->RISCV_core__DOT__rs2_reg_inst__DOT__pipeline_stages))),9);
    bufp->fullSData(oldp+195,(((vlSelf->RISCV_core__DOT__thread_index_stage
                                [2U] << 5U) | (IData)(vlSelf->RISCV_core__DOT__rs1_reg_inst__DOT__pipeline_stages))),9);
    bufp->fullSData(oldp+196,((0xfffU & (vlSelf->RISCV_core__DOT__alu_result_reg 
                                         >> 2U))),12);
    bufp->fullSData(oldp+197,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_address),12);
    bufp->fullCData(oldp+198,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserving_hart),4);
    bufp->fullBit(oldp+199,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__reserved_valid));
    bufp->fullBit(oldp+200,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__address_match));
    bufp->fullBit(oldp+201,(vlSelf->RISCV_core__DOT__reservation_set_inst__DOT__hart_match));
    bufp->fullCData(oldp+202,(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__pipeline_stages),4);
    bufp->fullIData(oldp+203,(vlSelf->RISCV_core__DOT__sc_pipe_inst__DOT__with_reset__DOT__n_is_greater_than_2_reset__DOT__unnamedblk2__DOT__i),32);
    bufp->fullCData(oldp+204,(vlSelf->RISCV_core__DOT__slt_reg_inst__DOT__pipeline_stages),2);
    bufp->fullCData(oldp+205,((3U & vlSelf->RISCV_core__DOT__alu_result_reg_mem_inst__DOT__pipeline_stages)),2);
    bufp->fullCData(oldp+206,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_we),4);
    bufp->fullCData(oldp+207,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_we),4);
    bufp->fullCData(oldp+208,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sb_d),5);
    bufp->fullCData(oldp+209,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__sh_d),5);
    bufp->fullCData(oldp+210,(vlSelf->RISCV_core__DOT__store_unit_inst__DOT__shift_sh),2);
    bufp->fullIData(oldp+211,(vlSelf->RISCV_core__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+212,(vlSelf->clk));
    bufp->fullBit(oldp+213,(vlSelf->reset));
    bufp->fullIData(oldp+214,(vlSelf->i_ROM_instruction),32);
    bufp->fullSData(oldp+215,(vlSelf->o_ROM_addr),10);
    bufp->fullSData(oldp+216,(vlSelf->o_dmem_addr),14);
    bufp->fullIData(oldp+217,(vlSelf->o_dmem_write_data),32);
    bufp->fullCData(oldp+218,(vlSelf->o_dmem_write_enable),4);
    bufp->fullIData(oldp+219,(vlSelf->i_dmem_read_data),32);
    bufp->fullCData(oldp+220,(vlSelf->regfile_wr_addr),5);
    bufp->fullIData(oldp+221,(vlSelf->regfile_wr_data),32);
    bufp->fullBit(oldp+222,(vlSelf->regfile_wr_en));
    bufp->fullCData(oldp+223,(vlSelf->thread_index_wb),4);
    bufp->fullCData(oldp+224,(vlSelf->thread_index_wrmem),4);
    bufp->fullIData(oldp+225,(((IData)(vlSelf->RISCV_core__DOT__start_reg)
                                ? vlSelf->i_ROM_instruction
                                : 0U)),32);
    bufp->fullIData(oldp+226,(0U),32);
    bufp->fullIData(oldp+227,(4U),32);
    bufp->fullIData(oldp+228,(2U),32);
    bufp->fullIData(oldp+229,(0x20U),32);
    bufp->fullIData(oldp+230,(vlSelf->RISCV_core__DOT__ALU_inst__DOT__result_srl_sra),32);
    bufp->fullIData(oldp+231,(vlSelf->RISCV_core__DOT__ALU_inst__DOT__mask),32);
    bufp->fullIData(oldp+232,(4U),32);
    bufp->fullIData(oldp+233,(1U),32);
    bufp->fullIData(oldp+234,(7U),32);
    bufp->fullIData(oldp+235,(3U),32);
    bufp->fullSData(oldp+236,(0U),11);
    bufp->fullIData(oldp+237,(0x10U),32);
    bufp->fullIData(oldp+238,(5U),32);
    bufp->fullIData(oldp+239,(0x10U),32);
    bufp->fullIData(oldp+240,(0xcU),32);
    bufp->fullSData(oldp+241,(0U),12);
    __Vtemp_hc1e2acf9__0[0U] = 0x75746564U;
    __Vtemp_hc1e2acf9__0[1U] = 0x74726962U;
    __Vtemp_hc1e2acf9__0[2U] = 0x646973U;
    bufp->fullWData(oldp+242,(__Vtemp_hc1e2acf9__0),88);
    bufp->fullBit(oldp+245,(1U));
    bufp->fullIData(oldp+246,(6U),32);
    bufp->fullIData(oldp+247,(0x200U),32);
    bufp->fullIData(oldp+248,(9U),32);
    bufp->fullQData(oldp+249,(0x626c6f636bULL),40);
    bufp->fullIData(oldp+251,(0x2dU),32);
    bufp->fullIData(oldp+252,(0x20U),32);
    bufp->fullIData(oldp+253,(0x10U),32);
    bufp->fullIData(oldp+254,(0x400U),32);
    bufp->fullIData(oldp+255,(4U),32);
    bufp->fullCData(oldp+256,(0U),4);
    bufp->fullCData(oldp+257,(1U),4);
    bufp->fullCData(oldp+258,(8U),4);
    bufp->fullCData(oldp+259,(9U),4);
    bufp->fullCData(oldp+260,(5U),4);
    bufp->fullCData(oldp+261,(0xaU),4);
    bufp->fullCData(oldp+262,(3U),4);
    bufp->fullCData(oldp+263,(4U),4);
    bufp->fullCData(oldp+264,(2U),4);
    bufp->fullCData(oldp+265,(6U),4);
    bufp->fullCData(oldp+266,(7U),4);
    bufp->fullIData(oldp+267,(0xaU),32);
    bufp->fullIData(oldp+268,(8U),32);
    bufp->fullIData(oldp+269,(0U),32);
    bufp->fullIData(oldp+270,(0x200U),32);
}
