// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ testbench__DOT__clk;
    CData/*0:0*/ testbench__DOT__rst;
    CData/*0:0*/ testbench__DOT__invalid;
    CData/*0:0*/ testbench__DOT__flush;
    CData/*1:0*/ testbench__DOT__mul_signed;
    CData/*0:0*/ testbench__DOT__t0__DOT__ovalid;
    CData/*0:0*/ testbench__DOT__t0__DOT__signed_a;
    CData/*1:0*/ testbench__DOT__t0__DOT__current_state;
    CData/*1:0*/ testbench__DOT__t0__DOT__next_state;
    CData/*0:0*/ testbench__DOT__t0__DOT__en;
    CData/*5:0*/ testbench__DOT__t0__DOT__m0__DOT__counter;
    CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__sign_b;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ testbench__DOT__multiplicand;
    IData/*31:0*/ testbench__DOT__multiplier;
    VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__mula;
    VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__mulresult;
    VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__add_mula;
    IData/*31:0*/ testbench__DOT__t0__DOT__m0__DOT__clog2__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ testbench__DOT__t0__DOT__m0__DOT__mulb;
    QData/*32:0*/ testbench__DOT__t0__DOT__m0__DOT__init_mulb;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
