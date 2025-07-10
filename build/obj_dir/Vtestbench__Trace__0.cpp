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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_13;
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
        bufp->chgQData(oldp+6,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                                                & (vlSelfRef.testbench__DOT__multiplier 
                                                                   >> 0x1fU))))))) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplier)))),34);
        bufp->chgBit(oldp+8,(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                              & (vlSelfRef.testbench__DOT__multiplier 
                                 >> 0x1fU))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [5U])))) {
        bufp->chgQData(oldp+9,(vlSelfRef.testbench__DOT__t0__DOT__mula),34);
        bufp->chgBit(oldp+11,(vlSelfRef.testbench__DOT__t0__DOT__signed_a));
        bufp->chgQData(oldp+12,((0x3ffffffffULL & (~ vlSelfRef.testbench__DOT__t0__DOT__mula))),34);
        bufp->chgQData(oldp+14,((0x3ffffffffULL & (~ 
                                                   VL_SHIFTL_QQI(34,34,32, vlSelfRef.testbench__DOT__t0__DOT__mula, 1U)))),34);
        bufp->chgQData(oldp+16,((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.testbench__DOT__t0__DOT__mula, 1U))),34);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgWData(oldp+18,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__adds),68);
        __Vtemp_1[0U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U] 
                         ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U]);
        __Vtemp_1[1U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[1U] 
                         ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U]);
        __Vtemp_1[2U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[2U] 
                         ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
        bufp->chgWData(oldp+21,(__Vtemp_1),68);
        bufp->chgBit(oldp+24,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout));
        bufp->chgWData(oldp+25,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__g),68);
        bufp->chgWData(oldp+28,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p),68);
        __Vtemp_2[0U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U];
        __Vtemp_2[1U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U];
        __Vtemp_2[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                          << 4U) | vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
        bufp->chgWData(oldp+31,(__Vtemp_2),69);
        bufp->chgWData(oldp+34,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[0]),68);
        bufp->chgWData(oldp+37,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[1]),68);
        bufp->chgWData(oldp+40,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[2]),68);
        bufp->chgWData(oldp+43,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[3]),68);
        bufp->chgWData(oldp+46,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[4]),68);
        bufp->chgWData(oldp+49,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[5]),68);
        bufp->chgWData(oldp+52,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[6]),68);
        bufp->chgWData(oldp+55,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[7]),68);
        bufp->chgWData(oldp+58,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[0]),68);
        bufp->chgWData(oldp+61,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[1]),68);
        bufp->chgWData(oldp+64,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[2]),68);
        bufp->chgWData(oldp+67,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[3]),68);
        bufp->chgWData(oldp+70,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[4]),68);
        bufp->chgWData(oldp+73,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[5]),68);
        bufp->chgWData(oldp+76,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[6]),68);
        bufp->chgWData(oldp+79,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[7]),68);
        bufp->chgWData(oldp+82,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber3),68);
        bufp->chgWData(oldp+85,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber4),68);
        bufp->chgWData(oldp+88,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber3),68);
        bufp->chgWData(oldp+91,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber4),68);
        bufp->chgWData(oldp+94,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber3),68);
        bufp->chgWData(oldp+97,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber4),68);
        bufp->chgWData(oldp+100,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p4____pinNumber3),68);
        bufp->chgWData(oldp+103,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p4____pinNumber4),68);
        __Vtemp_3[0U] = (IData)((((QData)((IData)((
                                                   ((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_66) 
                                                        << 0x1fU) 
                                                       | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_67) 
                                                          << 0x1eU)) 
                                                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_68) 
                                                          << 0x1dU) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
                                                            << 0x1cU))) 
                                                     | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_70) 
                                                          << 0x1bU) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_71) 
                                                            << 0x1aU)) 
                                                        | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_72) 
                                                            << 0x19U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_73) 
                                                              << 0x18U)))) 
                                                    | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_74) 
                                                          << 0x17U) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_75) 
                                                            << 0x16U)) 
                                                        | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_76) 
                                                            << 0x15U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_77) 
                                                              << 0x14U))) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_78) 
                                                            << 0x13U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_79) 
                                                              << 0x12U)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_80) 
                                                              << 0x11U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_81) 
                                                                << 0x10U))))) 
                                                   | ((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_82) 
                                                          << 0xfU) 
                                                         | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_83) 
                                                            << 0xeU)) 
                                                        | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_84) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_85) 
                                                              << 0xcU))) 
                                                       | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_86) 
                                                            << 0xbU) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_87) 
                                                              << 0xaU)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_88) 
                                                              << 9U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_89) 
                                                                << 8U)))) 
                                                      | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_90) 
                                                            << 7U) 
                                                           | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_91) 
                                                              << 6U)) 
                                                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_92) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_93) 
                                                                << 4U))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_6) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_4) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_2) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_0)))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_169))));
        __Vtemp_3[1U] = (IData)(((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_66) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_67) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_68) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_69) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_70) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_71) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_72) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_73) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_74) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_75) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_76) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_77) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_78) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_79) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_80) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_81) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_82) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_83) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_84) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_85) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_86) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_87) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_88) 
                                                               << 9U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_89) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_90) 
                                                             << 7U) 
                                                            | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_91) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_92) 
                                                               << 5U) 
                                                              | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_93) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_6) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_4) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_2) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_0)))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_169))) 
                                 >> 0x20U));
        __Vtemp_3[2U] = ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_62) 
                           << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_63) 
                                     << 2U)) | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_64) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_65)));
        bufp->chgWData(oldp+106,(__Vtemp_3),68);
        __Vtemp_4[0U] = (IData)((((QData)((IData)((
                                                   ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35) 
                                                        << 0x1fU) 
                                                       | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_34) 
                                                          << 0x1eU)) 
                                                      | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33) 
                                                          << 0x1dU) 
                                                         | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_32) 
                                                            << 0x1cU))) 
                                                     | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_31) 
                                                          << 0x1bU) 
                                                         | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_30) 
                                                            << 0x1aU)) 
                                                        | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_29) 
                                                            << 0x19U) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_28) 
                                                              << 0x18U)))) 
                                                    | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_27) 
                                                          << 0x17U) 
                                                         | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_26) 
                                                            << 0x16U)) 
                                                        | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_25) 
                                                            << 0x15U) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_24) 
                                                              << 0x14U))) 
                                                       | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_23) 
                                                            << 0x13U) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_22) 
                                                              << 0x12U)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_21) 
                                                              << 0x11U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_20) 
                                                                << 0x10U))))) 
                                                   | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_19) 
                                                          << 0xfU) 
                                                         | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_18) 
                                                            << 0xeU)) 
                                                        | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_17) 
                                                            << 0xdU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_16) 
                                                              << 0xcU))) 
                                                       | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_15) 
                                                            << 0xbU) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_14) 
                                                              << 0xaU)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_13) 
                                                              << 9U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_12) 
                                                                << 8U)))) 
                                                      | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_11) 
                                                            << 7U) 
                                                           | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_10) 
                                                              << 6U)) 
                                                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_9) 
                                                              << 5U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_8) 
                                                                << 4U))) 
                                                         | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_7) 
                                                              << 3U) 
                                                             | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_5) 
                                                                << 2U)) 
                                                            | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_3) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_1)))))))) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_175))));
        __Vtemp_4[1U] = (IData)(((((QData)((IData)(
                                                   (((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35) 
                                                         << 0x1fU) 
                                                        | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_34) 
                                                           << 0x1eU)) 
                                                       | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33) 
                                                           << 0x1dU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_32) 
                                                             << 0x1cU))) 
                                                      | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_31) 
                                                           << 0x1bU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_30) 
                                                             << 0x1aU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_29) 
                                                             << 0x19U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_28) 
                                                               << 0x18U)))) 
                                                     | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_27) 
                                                           << 0x17U) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_26) 
                                                             << 0x16U)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_25) 
                                                             << 0x15U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_24) 
                                                               << 0x14U))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_23) 
                                                             << 0x13U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_22) 
                                                               << 0x12U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_21) 
                                                               << 0x11U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_20) 
                                                                 << 0x10U))))) 
                                                    | ((((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_19) 
                                                           << 0xfU) 
                                                          | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_18) 
                                                             << 0xeU)) 
                                                         | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_17) 
                                                             << 0xdU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_16) 
                                                               << 0xcU))) 
                                                        | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_15) 
                                                             << 0xbU) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_14) 
                                                               << 0xaU)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_13) 
                                                               << 9U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_12) 
                                                                 << 8U)))) 
                                                       | (((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_11) 
                                                             << 7U) 
                                                            | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_10) 
                                                               << 6U)) 
                                                           | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_9) 
                                                               << 5U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_8) 
                                                                 << 4U))) 
                                                          | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_7) 
                                                               << 3U) 
                                                              | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_5) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_3) 
                                                                 << 1U) 
                                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_1)))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_175))) 
                                 >> 0x20U));
        __Vtemp_4[2U] = ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_39) 
                           << 3U) | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_38) 
                                     << 2U)) | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_37) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_36)));
        bufp->chgWData(oldp+109,(__Vtemp_4),68);
        __Vtemp_7[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
        __Vtemp_7[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                                 >> 0x20U));
        __Vtemp_7[2U] = ((0xfffffffcU & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_126) 
                                          << 3U) | 
                                         ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_127) 
                                          << 2U))) 
                         | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_128) 
                             << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_129)));
        bufp->chgWData(oldp+112,(__Vtemp_7),68);
        __Vtemp_10[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_176);
        __Vtemp_10[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_176 
                                  >> 0x20U));
        __Vtemp_10[2U] = ((0xfffffffcU & (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_3) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_2) 
                                           << 2U))) 
                          | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                              << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0)));
        bufp->chgWData(oldp+115,(__Vtemp_10),68);
        __Vtemp_13[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
        __Vtemp_13[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                                  >> 0x20U));
        __Vtemp_13[2U] = ((0xfffffffcU & (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_162) 
                                           << 2U))) 
                          | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_163) 
                              << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_164)));
        bufp->chgWData(oldp+118,(__Vtemp_13),68);
        __Vtemp_16[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_176);
        __Vtemp_16[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_176 
                                  >> 0x20U));
        __Vtemp_16[2U] = ((0xfffffffcU & ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_3) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_12)) 
                                           << 3U) | 
                                          (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_2) 
                                            & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_13)) 
                                           << 2U))) 
                          | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                               & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5)) 
                              << 1U) | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0) 
                                        & vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U])));
        bufp->chgWData(oldp+121,(__Vtemp_16),68);
        bufp->chgQData(oldp+124,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__p_high),34);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+126,((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
        bufp->chgBit(oldp+127,(vlSelfRef.testbench__DOT__t0__DOT__ovalid));
        bufp->chgIData(oldp+128,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U]),32);
        bufp->chgIData(oldp+129,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]),32);
        bufp->chgCData(oldp+130,(vlSelfRef.testbench__DOT__t0__DOT__current_state),2);
        bufp->chgBit(oldp+131,(((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                                & (1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)))));
        bufp->chgBit(oldp+132,((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
        bufp->chgQData(oldp+133,((0x3ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[2U])) 
                                    << 0x1eU) | ((QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                                 >> 2U)))),34);
        bufp->chgQData(oldp+135,((0x3ffffffffULL & 
                                  (((QData)((IData)(
                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]))))),34);
        bufp->chgWData(oldp+137,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P),68);
        bufp->chgQData(oldp+140,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__B),35);
        bufp->chgCData(oldp+142,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter),6);
        bufp->chgBit(oldp+143,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__cin));
        bufp->chgBit(oldp+144,(((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seln) 
                                | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seldn))));
        bufp->chgCData(oldp+145,((7U & (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__B))),3);
        bufp->chgBit(oldp+146,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seln));
        bufp->chgBit(oldp+147,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__selp));
        bufp->chgBit(oldp+148,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seldn));
        bufp->chgBit(oldp+149,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seldp));
    }
    bufp->chgBit(oldp+150,(vlSelfRef.testbench__DOT__clk));
    bufp->chgCData(oldp+151,(((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
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
