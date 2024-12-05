// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_CORE__SYMS_H_
#define VERILATED_VRISCV_CORE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRISCV_core.h"

// INCLUDE MODULE CLASSES
#include "VRISCV_core___024root.h"
#include "VRISCV_core___024unit.h"

// SYMS CLASS (contains all model state)
class VRISCV_core__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRISCV_core* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRISCV_core___024root          TOP;

    // CONSTRUCTORS
    VRISCV_core__Syms(VerilatedContext* contextp, const char* namep, VRISCV_core* modelp);
    ~VRISCV_core__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
