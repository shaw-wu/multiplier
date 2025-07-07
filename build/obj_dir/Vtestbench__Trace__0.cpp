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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_21;
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
        bufp->chgQData(oldp+6,((((QData)((IData)(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                                  & (vlSelfRef.testbench__DOT__multiplier 
                                                     >> 0x1fU)))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplier)))),33);
        bufp->chgBit(oldp+8,((IData)((((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                       >> 1U) & (vlSelfRef.testbench__DOT__multiplicand 
                                                 >> 0x1fU)))));
        bufp->chgBit(oldp+9,(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                              & (vlSelfRef.testbench__DOT__multiplier 
                                 >> 0x1fU))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+10,(vlSelfRef.testbench__DOT__t0__DOT__mula),33);
        __Vtemp_1[0U] = 0U;
        __Vtemp_1[1U] = ((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                         << 1U);
        __Vtemp_1[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                          >> 0x1fU) | ((IData)((vlSelfRef.testbench__DOT__t0__DOT__mula 
                                                >> 0x20U)) 
                                       << 1U));
        bufp->chgWData(oldp+12,(__Vtemp_1),66);
        __Vtemp_3[0U] = 1U;
        __Vtemp_3[1U] = 0U;
        __Vtemp_3[2U] = 0U;
        __Vtemp_5[0U] = 0xffffffffU;
        __Vtemp_5[1U] = (~ ((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                            << 1U));
        __Vtemp_5[2U] = (~ (((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                             >> 0x1fU) | ((IData)((vlSelfRef.testbench__DOT__t0__DOT__mula 
                                                   >> 0x20U)) 
                                          << 1U)));
        VL_ADD_W(3, __Vtemp_6, __Vtemp_3, __Vtemp_5);
        __Vtemp_7[0U] = __Vtemp_6[0U];
        __Vtemp_7[1U] = __Vtemp_6[1U];
        __Vtemp_7[2U] = (3U & __Vtemp_6[2U]);
        bufp->chgWData(oldp+15,(__Vtemp_7),66);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgWData(oldp+18,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__adds),66);
        __Vtemp_8[0U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U] 
                         ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U]);
        __Vtemp_8[1U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[1U] 
                         ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U]);
        __Vtemp_8[2U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[2U] 
                         ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
        bufp->chgWData(oldp+21,(__Vtemp_8),66);
        bufp->chgBit(oldp+24,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout));
        bufp->chgWData(oldp+25,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__g),66);
        bufp->chgWData(oldp+28,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p),66);
        __Vtemp_9[0U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U];
        __Vtemp_9[1U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U];
        __Vtemp_9[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                          << 2U) | vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
        bufp->chgWData(oldp+31,(__Vtemp_9),67);
        bufp->chgWData(oldp+34,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[0]),66);
        bufp->chgWData(oldp+37,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[1]),66);
        bufp->chgWData(oldp+40,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[2]),66);
        bufp->chgWData(oldp+43,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[3]),66);
        bufp->chgWData(oldp+46,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[4]),66);
        bufp->chgWData(oldp+49,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[5]),66);
        bufp->chgWData(oldp+52,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[6]),66);
        bufp->chgWData(oldp+55,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[7]),66);
        bufp->chgWData(oldp+58,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[0]),66);
        bufp->chgWData(oldp+61,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[1]),66);
        bufp->chgWData(oldp+64,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[2]),66);
        bufp->chgWData(oldp+67,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[3]),66);
        bufp->chgWData(oldp+70,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[4]),66);
        bufp->chgWData(oldp+73,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[5]),66);
        bufp->chgWData(oldp+76,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[6]),66);
        bufp->chgWData(oldp+79,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[7]),66);
        bufp->chgWData(oldp+82,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber3),66);
        bufp->chgWData(oldp+85,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber4),66);
        bufp->chgWData(oldp+88,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber3),66);
        bufp->chgWData(oldp+91,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber4),66);
        bufp->chgWData(oldp+94,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber3),66);
        bufp->chgWData(oldp+97,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber4),66);
        __Vtemp_10[0U] = (IData)((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_31) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_32) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_33) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_34) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_35) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_36) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_37) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_38) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_39) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_40) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_41) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_42) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_43) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_66) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_64) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_62) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_60) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_58) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_56) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_54) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_52) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_50) 
                                                               << 9U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_48) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_46) 
                                                             << 7U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_44) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_42) 
                                                               << 5U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_40) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_38) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_36) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_34) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_32)))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_30) 
                                                                    << 0x1fU) 
                                                                   | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_28) 
                                                                      << 0x1eU)) 
                                                                  | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_26) 
                                                                      << 0x1dU) 
                                                                     | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_24) 
                                                                        << 0x1cU))) 
                                                                 | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_22) 
                                                                      << 0x1bU) 
                                                                     | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_20) 
                                                                        << 0x1aU)) 
                                                                    | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_18) 
                                                                        << 0x19U) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_16) 
                                                                          << 0x18U)))) 
                                                                | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_14) 
                                                                      << 0x17U) 
                                                                     | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_12) 
                                                                        << 0x16U)) 
                                                                    | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_10) 
                                                                        << 0x15U) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_8) 
                                                                          << 0x14U))) 
                                                                   | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_6) 
                                                                        << 0x13U) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_4) 
                                                                          << 0x12U)) 
                                                                      | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_2) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_0) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_162))))))))));
        __Vtemp_10[1U] = (IData)(((((QData)((IData)(
                                                    (((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
                                                          << 0x1fU) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_31) 
                                                            << 0x1eU)) 
                                                        | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_32) 
                                                            << 0x1dU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_33) 
                                                              << 0x1cU))) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_34) 
                                                            << 0x1bU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_35) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_36) 
                                                              << 0x19U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_37) 
                                                                << 0x18U)))) 
                                                      | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_38) 
                                                            << 0x17U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_39) 
                                                              << 0x16U)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_40) 
                                                              << 0x15U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_41) 
                                                                << 0x14U))) 
                                                         | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_42) 
                                                              << 0x13U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_43) 
                                                                << 0x12U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_66) 
                                                                << 0x11U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_64) 
                                                                  << 0x10U))))) 
                                                     | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_62) 
                                                            << 0xfU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_60) 
                                                              << 0xeU)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_58) 
                                                              << 0xdU) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_56) 
                                                                << 0xcU))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_54) 
                                                              << 0xbU) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_52) 
                                                                << 0xaU)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_50) 
                                                                << 9U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_48) 
                                                                  << 8U)))) 
                                                        | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_46) 
                                                              << 7U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_44) 
                                                                << 6U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_42) 
                                                                << 5U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_40) 
                                                                  << 4U))) 
                                                           | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_38) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_36) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_34) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_32)))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_30) 
                                                                     << 0x1fU) 
                                                                    | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_28) 
                                                                       << 0x1eU)) 
                                                                   | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_26) 
                                                                       << 0x1dU) 
                                                                      | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_24) 
                                                                         << 0x1cU))) 
                                                                  | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_22) 
                                                                       << 0x1bU) 
                                                                      | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_20) 
                                                                         << 0x1aU)) 
                                                                     | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_18) 
                                                                         << 0x19U) 
                                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_16) 
                                                                           << 0x18U)))) 
                                                                 | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_14) 
                                                                       << 0x17U) 
                                                                      | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_12) 
                                                                         << 0x16U)) 
                                                                     | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_10) 
                                                                         << 0x15U) 
                                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_8) 
                                                                           << 0x14U))) 
                                                                    | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_6) 
                                                                         << 0x13U) 
                                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_4) 
                                                                           << 0x12U)) 
                                                                       | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_2) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_0) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_162))))))))) 
                                  >> 0x20U));
        __Vtemp_10[2U] = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_28) 
                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_29));
        bufp->chgWData(oldp+100,(__Vtemp_10),66);
        __Vtemp_11[0U] = (IData)((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_81) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_80) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_79) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_78) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_77) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_76) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_75) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_74) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_73) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_72) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_71) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_70) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_69) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_68) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_67) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_65) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_63) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_61) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_59) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_57) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_55) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_53) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_51) 
                                                               << 9U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_49) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_47) 
                                                             << 7U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_45) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_43) 
                                                               << 5U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_41) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_39) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_37) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_35) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_33)))))))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_31) 
                                                                    << 0x1fU) 
                                                                   | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_29) 
                                                                      << 0x1eU)) 
                                                                  | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_27) 
                                                                      << 0x1dU) 
                                                                     | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_25) 
                                                                        << 0x1cU))) 
                                                                 | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_23) 
                                                                      << 0x1bU) 
                                                                     | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_21) 
                                                                        << 0x1aU)) 
                                                                    | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_19) 
                                                                        << 0x19U) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_17) 
                                                                          << 0x18U)))) 
                                                                | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_15) 
                                                                      << 0x17U) 
                                                                     | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_13) 
                                                                        << 0x16U)) 
                                                                    | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_11) 
                                                                        << 0x15U) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_9) 
                                                                          << 0x14U))) 
                                                                   | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_7) 
                                                                        << 0x13U) 
                                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_5) 
                                                                          << 0x12U)) 
                                                                      | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_3) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_1) 
                                                                             << 0x10U) 
                                                                            | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_168))))))))));
        __Vtemp_11[1U] = (IData)(((((QData)((IData)(
                                                    (((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_81) 
                                                          << 0x1fU) 
                                                         | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_80) 
                                                            << 0x1eU)) 
                                                        | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_79) 
                                                            << 0x1dU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_78) 
                                                              << 0x1cU))) 
                                                       | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_77) 
                                                            << 0x1bU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_76) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_75) 
                                                              << 0x19U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_74) 
                                                                << 0x18U)))) 
                                                      | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_73) 
                                                            << 0x17U) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_72) 
                                                              << 0x16U)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_71) 
                                                              << 0x15U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_70) 
                                                                << 0x14U))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_69) 
                                                              << 0x13U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_68) 
                                                                << 0x12U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_67) 
                                                                << 0x11U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_65) 
                                                                  << 0x10U))))) 
                                                     | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_63) 
                                                            << 0xfU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_61) 
                                                              << 0xeU)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_59) 
                                                              << 0xdU) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_57) 
                                                                << 0xcU))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_55) 
                                                              << 0xbU) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_53) 
                                                                << 0xaU)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_51) 
                                                                << 9U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_49) 
                                                                  << 8U)))) 
                                                        | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_47) 
                                                              << 7U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_45) 
                                                                << 6U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_43) 
                                                                << 5U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_41) 
                                                                  << 4U))) 
                                                           | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_39) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_37) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_35) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_33)))))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_31) 
                                                                     << 0x1fU) 
                                                                    | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_29) 
                                                                       << 0x1eU)) 
                                                                   | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_27) 
                                                                       << 0x1dU) 
                                                                      | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_25) 
                                                                         << 0x1cU))) 
                                                                  | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_23) 
                                                                       << 0x1bU) 
                                                                      | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_21) 
                                                                         << 0x1aU)) 
                                                                     | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_19) 
                                                                         << 0x19U) 
                                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_17) 
                                                                           << 0x18U)))) 
                                                                 | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_15) 
                                                                       << 0x17U) 
                                                                      | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_13) 
                                                                         << 0x16U)) 
                                                                     | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_11) 
                                                                         << 0x15U) 
                                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_9) 
                                                                           << 0x14U))) 
                                                                    | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_7) 
                                                                         << 0x13U) 
                                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_5) 
                                                                           << 0x12U)) 
                                                                       | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_3) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_1) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_168))))))))) 
                                  >> 0x20U));
        __Vtemp_11[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_83) 
                           << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_82));
        bufp->chgWData(oldp+103,(__Vtemp_11),66);
        __Vtemp_12[0U] = (IData)((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_62) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_63) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_64) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_65) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_66) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_67) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_68) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_70) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_71) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_72) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_73) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_74) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_75) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_76) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_77) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_78) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_79) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_80) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_81) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_82) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_83) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_84) 
                                                               << 9U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_85) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_86) 
                                                             << 7U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_87) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_88) 
                                                               << 5U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_89) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_90) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_91) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_2) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_0)))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_163))));
        __Vtemp_12[1U] = (IData)(((((QData)((IData)(
                                                    (((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_62) 
                                                          << 0x1fU) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_63) 
                                                            << 0x1eU)) 
                                                        | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_64) 
                                                            << 0x1dU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_65) 
                                                              << 0x1cU))) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_66) 
                                                            << 0x1bU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_67) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_68) 
                                                              << 0x19U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
                                                                << 0x18U)))) 
                                                      | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_70) 
                                                            << 0x17U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_71) 
                                                              << 0x16U)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_72) 
                                                              << 0x15U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_73) 
                                                                << 0x14U))) 
                                                         | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_74) 
                                                              << 0x13U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_75) 
                                                                << 0x12U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_76) 
                                                                << 0x11U) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_77) 
                                                                  << 0x10U))))) 
                                                     | ((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_78) 
                                                            << 0xfU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_79) 
                                                              << 0xeU)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_80) 
                                                              << 0xdU) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_81) 
                                                                << 0xcU))) 
                                                         | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_82) 
                                                              << 0xbU) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_83) 
                                                                << 0xaU)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_84) 
                                                                << 9U) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_85) 
                                                                  << 8U)))) 
                                                        | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_86) 
                                                              << 7U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_87) 
                                                                << 6U)) 
                                                            | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_88) 
                                                                << 5U) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_89) 
                                                                  << 4U))) 
                                                           | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_90) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_91) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_2) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_0)))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_163))) 
                                  >> 0x20U));
        __Vtemp_12[2U] = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_60) 
                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_61));
        bufp->chgWData(oldp+106,(__Vtemp_12),66);
        __Vtemp_13[0U] = (IData)((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_32) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_31) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_30) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_29) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_28) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_27) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_26) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_25) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_24) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_23) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_22) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_21) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_20) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_19) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_18) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_17) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_16) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_15) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_14) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_13) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_12) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_11) 
                                                               << 9U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_10) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_9) 
                                                             << 7U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_8) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_7) 
                                                               << 5U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_6) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_5) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_4) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_3) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_1)))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_169))));
        __Vtemp_13[1U] = (IData)(((((QData)((IData)(
                                                    (((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33) 
                                                          << 0x1fU) 
                                                         | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_32) 
                                                            << 0x1eU)) 
                                                        | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_31) 
                                                            << 0x1dU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_30) 
                                                              << 0x1cU))) 
                                                       | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_29) 
                                                            << 0x1bU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_28) 
                                                              << 0x1aU)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_27) 
                                                              << 0x19U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_26) 
                                                                << 0x18U)))) 
                                                      | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_25) 
                                                            << 0x17U) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_24) 
                                                              << 0x16U)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_23) 
                                                              << 0x15U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_22) 
                                                                << 0x14U))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_21) 
                                                              << 0x13U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_20) 
                                                                << 0x12U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_19) 
                                                                << 0x11U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_18) 
                                                                  << 0x10U))))) 
                                                     | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_17) 
                                                            << 0xfU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_16) 
                                                              << 0xeU)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_15) 
                                                              << 0xdU) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_14) 
                                                                << 0xcU))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_13) 
                                                              << 0xbU) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_12) 
                                                                << 0xaU)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_11) 
                                                                << 9U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_10) 
                                                                  << 8U)))) 
                                                        | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_9) 
                                                              << 7U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_8) 
                                                                << 6U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_7) 
                                                                << 5U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_6) 
                                                                  << 4U))) 
                                                           | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_5) 
                                                                << 3U) 
                                                               | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_4) 
                                                                  << 2U)) 
                                                              | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_3) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_1)))))))) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_169))) 
                                  >> 0x20U));
        __Vtemp_13[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35) 
                           << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_34));
        bufp->chgWData(oldp+109,(__Vtemp_13),66);
        __Vtemp_15[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_164);
        __Vtemp_15[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_164 
                                  >> 0x20U));
        __Vtemp_15[2U] = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_124) 
                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_125));
        bufp->chgWData(oldp+112,(__Vtemp_15),66);
        __Vtemp_17[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
        __Vtemp_17[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                                  >> 0x20U));
        __Vtemp_17[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                           << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0));
        bufp->chgWData(oldp+115,(__Vtemp_17),66);
        __Vtemp_19[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_164);
        __Vtemp_19[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_164 
                                  >> 0x20U));
        __Vtemp_19[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                           << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_158));
        bufp->chgWData(oldp+118,(__Vtemp_19),66);
        __Vtemp_21[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
        __Vtemp_21[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                                  >> 0x20U));
        __Vtemp_21[2U] = ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                            & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                           << 1U) | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0) 
                                     & vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U]));
        bufp->chgWData(oldp+121,(__Vtemp_21),66);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+124,((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
        bufp->chgBit(oldp+125,(vlSelfRef.testbench__DOT__t0__DOT__ovalid));
        bufp->chgIData(oldp+126,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U]),32);
        bufp->chgIData(oldp+127,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]),32);
        bufp->chgCData(oldp+128,(vlSelfRef.testbench__DOT__t0__DOT__current_state),2);
        bufp->chgBit(oldp+129,(((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                                & (1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)))));
        bufp->chgBit(oldp+130,((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
        bufp->chgQData(oldp+131,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[2U])) 
                                    << 0x1fU) | ((QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                                 >> 1U)))),33);
        bufp->chgQData(oldp+133,((0x1ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]))))),33);
        bufp->chgWData(oldp+135,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P),66);
        bufp->chgQData(oldp+138,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__B),34);
        bufp->chgCData(oldp+140,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter),6);
    }
    bufp->chgBit(oldp+141,(vlSelfRef.testbench__DOT__clk));
    bufp->chgCData(oldp+142,(((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
