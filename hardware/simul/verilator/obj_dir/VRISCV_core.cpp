// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRISCV_core.h"
#include "VRISCV_core__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRISCV_core::VRISCV_core(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRISCV_core__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , o_dmem_write_enable{vlSymsp->TOP.o_dmem_write_enable}
    , regfile_wr_addr{vlSymsp->TOP.regfile_wr_addr}
    , regfile_wr_en{vlSymsp->TOP.regfile_wr_en}
    , thread_index_wb{vlSymsp->TOP.thread_index_wb}
    , thread_index_wrmem{vlSymsp->TOP.thread_index_wrmem}
    , o_ROM_addr{vlSymsp->TOP.o_ROM_addr}
    , o_dmem_addr{vlSymsp->TOP.o_dmem_addr}
    , i_ROM_instruction{vlSymsp->TOP.i_ROM_instruction}
    , o_dmem_write_data{vlSymsp->TOP.o_dmem_write_data}
    , i_dmem_read_data{vlSymsp->TOP.i_dmem_read_data}
    , regfile_wr_data{vlSymsp->TOP.regfile_wr_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRISCV_core::VRISCV_core(const char* _vcname__)
    : VRISCV_core(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRISCV_core::~VRISCV_core() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRISCV_core___024root___eval_debug_assertions(VRISCV_core___024root* vlSelf);
#endif  // VL_DEBUG
void VRISCV_core___024root___eval_static(VRISCV_core___024root* vlSelf);
void VRISCV_core___024root___eval_initial(VRISCV_core___024root* vlSelf);
void VRISCV_core___024root___eval_settle(VRISCV_core___024root* vlSelf);
void VRISCV_core___024root___eval(VRISCV_core___024root* vlSelf);

void VRISCV_core::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRISCV_core::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRISCV_core___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRISCV_core___024root___eval_static(&(vlSymsp->TOP));
        VRISCV_core___024root___eval_initial(&(vlSymsp->TOP));
        VRISCV_core___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRISCV_core___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRISCV_core::eventsPending() { return false; }

uint64_t VRISCV_core::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRISCV_core::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRISCV_core___024root___eval_final(VRISCV_core___024root* vlSelf);

VL_ATTR_COLD void VRISCV_core::final() {
    VRISCV_core___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRISCV_core::hierName() const { return vlSymsp->name(); }
const char* VRISCV_core::modelName() const { return "VRISCV_core"; }
unsigned VRISCV_core::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRISCV_core::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRISCV_core___024root__trace_init_top(VRISCV_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRISCV_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRISCV_core___024root*>(voidSelf);
    VRISCV_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRISCV_core___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRISCV_core___024root__trace_register(VRISCV_core___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRISCV_core::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRISCV_core::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRISCV_core___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
