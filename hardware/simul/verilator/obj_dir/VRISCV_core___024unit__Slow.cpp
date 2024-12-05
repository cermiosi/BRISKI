// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRISCV_core.h for the primary calling header

#include "verilated.h"

#include "VRISCV_core__Syms.h"
#include "VRISCV_core___024unit.h"

void VRISCV_core___024unit___ctor_var_reset(VRISCV_core___024unit* vlSelf);

VRISCV_core___024unit::VRISCV_core___024unit(VRISCV_core__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRISCV_core___024unit___ctor_var_reset(this);
}

void VRISCV_core___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRISCV_core___024unit::~VRISCV_core___024unit() {
}
