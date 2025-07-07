// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"invalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"multiplicand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("t0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+45,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"inready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"invalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_signed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"outvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"result_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"result_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+9,0,"ovalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+36,0,"mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+38,0,"mulb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+40,0,"signed_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"signed_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+47,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+41,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+13,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"arst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+49,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+35,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"asyn_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"syn_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+36,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+38,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+9,0,"outvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"result_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+17,0,"result_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+50,0,"DDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"LOGDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"COUNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"MAX_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+19,0,"mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declQuad(c+22,0,"mulb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+24,0,"mulresult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+27,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+28,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+42,0,"init_mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declQuad(c+38,0,"init_mulb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+29,0,"add_mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+32,0,"neg_mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+52,0,"clog2__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+45,(0x20U),32);
    bufp->fullCData(oldp+46,(0U),2);
    bufp->fullCData(oldp+47,(1U),2);
    bufp->fullCData(oldp+48,(2U),2);
    bufp->fullIData(oldp+49,(0x21U),32);
    bufp->fullIData(oldp+50,(0x42U),32);
    bufp->fullIData(oldp+51,(6U),32);
    bufp->fullIData(oldp+52,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__clog2__Vstatic__i),32);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelfRef.testbench__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.testbench__DOT__invalid));
    bufp->fullBit(oldp+3,(vlSelfRef.testbench__DOT__flush));
    bufp->fullCData(oldp+4,(vlSelfRef.testbench__DOT__mul_signed),2);
    bufp->fullIData(oldp+5,(vlSelfRef.testbench__DOT__multiplicand),32);
    bufp->fullIData(oldp+6,(vlSelfRef.testbench__DOT__multiplier),32);
    bufp->fullBit(oldp+7,(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                           & (vlSelfRef.testbench__DOT__multiplier 
                              >> 0x1fU))));
    bufp->fullBit(oldp+8,((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
    bufp->fullBit(oldp+9,(vlSelfRef.testbench__DOT__t0__DOT__ovalid));
    bufp->fullIData(oldp+10,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[0U]),32);
    bufp->fullCData(oldp+12,(vlSelfRef.testbench__DOT__t0__DOT__current_state),2);
    bufp->fullBit(oldp+13,(((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                            & (1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)))));
    bufp->fullBit(oldp+14,((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
    bufp->fullQData(oldp+15,((0x1ffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[2U])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U])) 
                                                   >> 1U)))),33);
    bufp->fullQData(oldp+17,((0x1ffffffffULL & (((QData)((IData)(
                                                                 vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult[0U]))))),33);
    bufp->fullWData(oldp+19,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mula),66);
    bufp->fullQData(oldp+22,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulb),33);
    bufp->fullWData(oldp+24,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__mulresult),66);
    bufp->fullCData(oldp+27,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter),6);
    bufp->fullBit(oldp+28,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__sign_b));
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
    bufp->fullWData(oldp+29,(__Vtemp_10),66);
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
    bufp->fullWData(oldp+32,(__Vtemp_15),66);
    bufp->fullBit(oldp+35,(vlSelfRef.testbench__DOT__clk));
    bufp->fullQData(oldp+36,((((QData)((IData)(vlSelfRef.testbench__DOT__t0__DOT__signed_a)) 
                               << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplicand)))),33);
    bufp->fullQData(oldp+38,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__init_mulb),33);
    bufp->fullBit(oldp+40,(vlSelfRef.testbench__DOT__t0__DOT__signed_a));
    bufp->fullCData(oldp+41,(((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
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
    bufp->fullWData(oldp+42,(__Vtemp_16),66);
}
