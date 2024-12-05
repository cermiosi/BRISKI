// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRISCV_core.h for the primary calling header

#ifndef VERILATED_VRISCV_CORE___024UNIT_H_
#define VERILATED_VRISCV_CORE___024UNIT_H_  // guard

#include "verilated.h"

class VRISCV_core__Syms;

class VRISCV_core___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VRISCV_core__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRISCV_core___024unit(VRISCV_core__Syms* symsp, const char* v__name);
    ~VRISCV_core___024unit();
    VL_UNCOPYABLE(VRISCV_core___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
