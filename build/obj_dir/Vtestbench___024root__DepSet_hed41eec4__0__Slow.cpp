// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelfRef.testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__testbench__DOT__rst__0 
        = vlSelfRef.testbench__DOT__rst;
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/shaw/CA_project/multiplier/vsrc/testbench.v", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.testbench__DOT__t0__DOT__signed_a = (IData)(
                                                          (((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                                            >> 1U) 
                                                           & (vlSelfRef.testbench__DOT__multiplicand 
                                                              >> 0x1fU)));
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__init_mulb 
        = (((QData)((IData)(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                             & (vlSelfRef.testbench__DOT__multiplier 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.testbench__DOT__multiplier)));
    vlSelfRef.testbench__DOT__t0__DOT__en = ((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)));
    vlSelfRef.testbench__DOT__t0__DOT__next_state = 
        ((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
          ? ((IData)(vlSelfRef.testbench__DOT__invalid)
              ? 1U : 0U) : ((1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
                             ? ((IData)(vlSelfRef.testbench__DOT__flush)
                                 ? 2U : ((IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)
                                          ? 0U : 1U))
                             : 0U));
    __Vtemp_2[0U] = 1U;
    __Vtemp_2[1U] = 0U;
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U]);
    __Vtemp_3[1U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U]);
    __Vtemp_3[2U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U]);
    VL_ADD_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    if ((1U & (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb))) {
        if (((0x21U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter)) 
             & (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__sign_b))) {
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[0U] 
                = __Vtemp_4[0U];
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[1U] 
                = __Vtemp_4[1U];
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[2U] 
                = (3U & __Vtemp_4[2U]);
        } else {
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[0U] 
                = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U];
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[1U] 
                = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U];
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[2U] 
                = (3U & vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U]);
        }
    } else {
        vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[0U] = 0U;
        vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[1U] = 0U;
        vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[2U] = 0U;
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge testbench.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge testbench.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__invalid = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__mul_signed = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__multiplicand = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__multiplier = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__t0__DOT__ovalid = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__t0__DOT__signed_a = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__t0__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__t0__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__t0__DOT__en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->testbench__DOT__t0__DOT__m0__DOT__mula);
    vlSelf->testbench__DOT__t0__DOT__m0__DOT__mulb = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->testbench__DOT__t0__DOT__m0__DOT__mulresult);
    vlSelf->testbench__DOT__t0__DOT__m0__DOT__counter = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__t0__DOT__m0__DOT__sign_b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__t0__DOT__m0__DOT__init_mulb = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->testbench__DOT__t0__DOT__m0__DOT__add_mula);
    vlSelf->testbench__DOT__t0__DOT__m0__DOT__clog2__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
