// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__clk = 1U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                             nullptr, 
                                             "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                             38);
        vlSelfRef.testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.testbench__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__invalid = 0U;
    vlSelfRef.testbench__DOT__flush = 0U;
    vlSelfRef.testbench__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         46);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         47);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__multiplicand = 0x10U;
    vlSelfRef.testbench__DOT__multiplier = 4U;
    vlSelfRef.testbench__DOT__mul_signed = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         51);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         52);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         53);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x109a0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__multiplicand = 0x80000010U;
    vlSelfRef.testbench__DOT__multiplier = 0x80000004U;
    vlSelfRef.testbench__DOT__mul_signed = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         58);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         59);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         60);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x109a0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         61);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__multiplicand = 0x80000010U;
    vlSelfRef.testbench__DOT__multiplier = 0x80000004U;
    vlSelfRef.testbench__DOT__mul_signed = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         65);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         66);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         67);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x109a0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         68);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__multiplicand = 0x80000010U;
    vlSelfRef.testbench__DOT__multiplier = 0x80000004U;
    vlSelfRef.testbench__DOT__mul_signed = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         72);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         74);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x109a0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         75);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__multiplicand = 0x80000010U;
    vlSelfRef.testbench__DOT__multiplier = 0x80000004U;
    vlSelfRef.testbench__DOT__mul_signed = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__flush = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         80);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__flush = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         81);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__multiplicand = 0x80000010U;
    vlSelfRef.testbench__DOT__multiplier = 0x80000004U;
    vlSelfRef.testbench__DOT__mul_signed = 2U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         85);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/home/shaw/CA_project/multiplier/vsrc/testbench.v", 
                                         86);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.testbench__DOT__invalid = 0U;
    VL_FINISH_MT("/home/shaw/CA_project/multiplier/vsrc/testbench.v", 87, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtestbench___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
    vlSelfRef.testbench__DOT__t0__DOT__next_state = 
        ((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
          ? ((IData)(vlSelfRef.testbench__DOT__invalid)
              ? 1U : 0U) : ((1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
                             ? ((IData)(vlSelfRef.testbench__DOT__flush)
                                 ? 2U : ((IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)
                                          ? 0U : 1U))
                             : 0U));
}

void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf);
void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*65:0*/ __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult;
    VL_ZERO_W(66, __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult);
    CData/*5:0*/ __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter;
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter = 0;
    VlWide<3>/*65:0*/ __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula;
    VL_ZERO_W(66, __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula);
    QData/*32:0*/ __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulb;
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulb = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[0U] 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[0U];
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[1U] 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U];
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[2U] 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[2U];
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter;
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[0U] 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U];
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[1U] 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U];
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[2U] 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U];
    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulb 
        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb;
    if (vlSelfRef.testbench__DOT__rst) {
        __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[0U] = 0U;
        __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[1U] = 0U;
        __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[2U] = 0U;
        __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter = 0U;
        vlSelfRef.testbench__DOT__t0__DOT__ovalid = 0U;
        vlSelfRef.testbench__DOT__t0__DOT__current_state = 0U;
    } else {
        if ((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))) {
            __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[0U] = 0U;
            __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[1U] = 0U;
            __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[2U] = 0U;
            __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter = 0U;
            vlSelfRef.testbench__DOT__t0__DOT__ovalid = 0U;
        } else {
            vlSelfRef.testbench__DOT__t0__DOT__ovalid 
                = (0x21U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter));
            if (vlSelfRef.testbench__DOT__t0__DOT__en) {
                __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter 
                    = ((0x21U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter))
                        ? 0U : (0x3fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter))));
                if ((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter))) {
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[0U] = 0U;
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[1U] = 0U;
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[2U] = 0U;
                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__sign_b 
                        = (1U & (IData)((vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__init_mulb 
                                         >> 0x20U)));
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[0U] 
                        = (IData)((((QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplicand))));
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[1U] 
                        = (((IData)((0x1ffffffffULL 
                                     & (- (QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a))))) 
                            << 1U) | (IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.testbench__DOT__multiplicand))) 
                                              >> 0x20U)));
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[2U] 
                        = (((IData)((0x1ffffffffULL 
                                     & (- (QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a))))) 
                            >> 0x1fU) | ((IData)(((0x1ffffffffULL 
                                                   & (- (QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)))) 
                                                  >> 0x20U)) 
                                         << 1U));
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulb 
                        = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__init_mulb;
                } else {
                    VL_ADD_W(3, __Vtemp_2, vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula, vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult);
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[0U] 
                        = __Vtemp_2[0U];
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[1U] 
                        = __Vtemp_2[1U];
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[2U] 
                        = (3U & __Vtemp_2[2U]);
                    VL_SHIFTL_WWI(66,66,32, __Vtemp_4, vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula, 1U);
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[0U] 
                        = __Vtemp_4[0U];
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[1U] 
                        = __Vtemp_4[1U];
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[2U] 
                        = (3U & __Vtemp_4[2U]);
                    __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulb 
                        = (0x1ffffffffULL & VL_SHIFTR_QQI(33,33,32, vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb, 1U));
                }
            }
        }
        vlSelfRef.testbench__DOT__t0__DOT__current_state 
            = vlSelfRef.testbench__DOT__t0__DOT__next_state;
    }
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[0U] 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[0U];
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U] 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[1U];
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[2U] 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulresult[2U];
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__counter;
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U] 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[0U];
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U] 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[1U];
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U] 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mula[2U];
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb 
        = __Vdly__testbench__DOT__t0__DOT__m0__DOT__mulb;
    __Vtemp_6[0U] = 1U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_7[0U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U]);
    __Vtemp_7[1U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U]);
    __Vtemp_7[2U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U]);
    VL_ADD_W(3, __Vtemp_8, __Vtemp_6, __Vtemp_7);
    if ((1U & (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb))) {
        if (((0x21U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter)) 
             & (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__sign_b))) {
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[0U] 
                = __Vtemp_8[0U];
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[1U] 
                = __Vtemp_8[1U];
            vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__add_mula[2U] 
                = (3U & __Vtemp_8[2U]);
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
    vlSelfRef.testbench__DOT__t0__DOT__en = ((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                                             & (1U 
                                                == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__init_mulb 
        = (((QData)((IData)(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                             & (vlSelfRef.testbench__DOT__multiplier 
                                >> 0x1fU)))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.testbench__DOT__multiplier)));
    vlSelfRef.testbench__DOT__t0__DOT__signed_a = (IData)(
                                                          (((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                                            >> 1U) 
                                                           & (vlSelfRef.testbench__DOT__multiplicand 
                                                              >> 0x1fU)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.testbench__DOT__t0__DOT__next_state = 
        ((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
          ? ((IData)(vlSelfRef.testbench__DOT__invalid)
              ? 1U : 0U) : ((1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
                             ? ((IData)(vlSelfRef.testbench__DOT__flush)
                                 ? 2U : ((IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)
                                          ? 0U : 1U))
                             : 0U));
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/shaw/CA_project/multiplier/vsrc/testbench.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/shaw/CA_project/multiplier/vsrc/testbench.v", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
