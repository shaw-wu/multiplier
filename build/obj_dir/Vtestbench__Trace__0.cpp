// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtestbench___024root__trace_chg_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_chg_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.testbench__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.testbench__DOT__invalid));
        bufp->chgBit(oldp+2,(vlSelfRef.testbench__DOT__flush));
        bufp->chgCData(oldp+3,(vlSelfRef.testbench__DOT__mul_signed),2);
        bufp->chgIData(oldp+4,(vlSelfRef.testbench__DOT__multiplicand),32);
        bufp->chgIData(oldp+5,(vlSelfRef.testbench__DOT__multiplier),32);
        bufp->chgBit(oldp+6,(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                              & (vlSelfRef.testbench__DOT__multiplier 
                                 >> 0x1fU))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+7,((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
        bufp->chgBit(oldp+8,(vlSelfRef.testbench__DOT__t0__DOT__ovalid));
        bufp->chgIData(oldp+9,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[0U]),32);
        bufp->chgCData(oldp+11,(vlSelfRef.testbench__DOT__t0__DOT__current_state),2);
        bufp->chgBit(oldp+12,(((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                               & (1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)))));
        bufp->chgBit(oldp+13,((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
        bufp->chgQData(oldp+14,((0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[2U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U])) 
                                                      >> 1U)))),33);
        bufp->chgQData(oldp+16,((0x1ffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[0U]))))),33);
        bufp->chgWData(oldp+18,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula),66);
        bufp->chgQData(oldp+21,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb),33);
        bufp->chgWData(oldp+23,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult),66);
        bufp->chgCData(oldp+26,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter),6);
        bufp->chgBit(oldp+27,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__sign_b));
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
                __Vtemp_10[0U] = __Vtemp_4[0U];
                __Vtemp_10[1U] = __Vtemp_4[1U];
                __Vtemp_10[2U] = (3U & __Vtemp_4[2U]);
            } else {
                __Vtemp_10[0U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U];
                __Vtemp_10[1U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U];
                __Vtemp_10[2U] = (3U & vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U]);
            }
        } else {
            __Vtemp_10[0U] = 0U;
            __Vtemp_10[1U] = 0U;
            __Vtemp_10[2U] = 0U;
        }
        bufp->chgWData(oldp+28,(__Vtemp_10),66);
        __Vtemp_12[0U] = 1U;
        __Vtemp_12[1U] = 0U;
        __Vtemp_12[2U] = 0U;
        __Vtemp_13[0U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[0U]);
        __Vtemp_13[1U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[1U]);
        __Vtemp_13[2U] = (~ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula[2U]);
        VL_ADD_W(3, __Vtemp_14, __Vtemp_12, __Vtemp_13);
        __Vtemp_15[0U] = __Vtemp_14[0U];
        __Vtemp_15[1U] = __Vtemp_14[1U];
        __Vtemp_15[2U] = (3U & __Vtemp_14[2U]);
        bufp->chgWData(oldp+31,(__Vtemp_15),66);
    }
    bufp->chgBit(oldp+34,(vlSelfRef.testbench__DOT__clk));
    bufp->chgQData(oldp+35,((((QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplicand)))),33);
    bufp->chgQData(oldp+37,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__init_mulb),33);
    bufp->chgBit(oldp+39,(vlSelfRef.testbench__DOT__t0__DOT__signed_a));
    bufp->chgCData(oldp+40,(((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
                              ? ((IData)(vlSelfRef.testbench__DOT__invalid)
                                  ? 1U : 0U) : ((1U 
                                                 == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
                                                 ? 
                                                ((IData)(vlSelfRef.testbench__DOT__flush)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)
                                                   ? 0U
                                                   : 1U))
                                                 : 0U))),2);
    __Vtemp_16[0U] = (IData)((((QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplicand))));
    __Vtemp_16[1U] = (((IData)((0x1ffffffffULL & (- (QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a))))) 
                       << 1U) | (IData)(((((QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelfRef.testbench__DOT__multiplicand))) 
                                         >> 0x20U)));
    __Vtemp_16[2U] = (((IData)((0x1ffffffffULL & (- (QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a))))) 
                       >> 0x1fU) | ((IData)(((0x1ffffffffULL 
                                              & (- (QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)))) 
                                             >> 0x20U)) 
                                    << 1U));
    bufp->chgWData(oldp+41,(__Vtemp_16),66);
}

void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_cleanup\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
