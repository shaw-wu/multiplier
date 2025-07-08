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
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"invalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"multiplicand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("t0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"inready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"invalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_signed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"outvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"result_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"result_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"ovalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+7,0,"mulb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+9,0,"signed_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"signed_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+153,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+135,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+149,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+136,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"arst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+154,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+148,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"asyn_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"syn_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+11,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+7,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+132,0,"outvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+138,0,"result_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+140,0,"result_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+155,0,"DDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"LOGDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+156,0,"COUNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"MAX_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+13,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+16,0,"nS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+19,0,"dS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+22,0,"ndS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+142,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declQuad(c+145,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+147,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declArray(c+25,0,"adds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+28,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+158,0,"clog2__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+142,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+25,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+159,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+28,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBit(c+31,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+32,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+35,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+38,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declBus(c+160,0,"STAGE_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("G", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+41+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 65,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("P", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+65+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 65,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+161,0,"clog2__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("p1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+32,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+35,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+89,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+92,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("p2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+163,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+89,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+92,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+95,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+98,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("p3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+95,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+98,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+101,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+104,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("p4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+165,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+101,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+104,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+107,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+110,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("p5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+107,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+110,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+113,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+116,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("p6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+156,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+113,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+116,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+119,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+122,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->pushPrefix("p7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+119,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+122,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+125,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+128,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->popPrefix();
    tracep->popPrefix();
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
    bufp->fullIData(oldp+150,(0x20U),32);
    bufp->fullCData(oldp+151,(0U),2);
    bufp->fullCData(oldp+152,(1U),2);
    bufp->fullCData(oldp+153,(2U),2);
    bufp->fullIData(oldp+154,(0x21U),32);
    bufp->fullIData(oldp+155,(0x42U),32);
    bufp->fullIData(oldp+156,(6U),32);
    bufp->fullIData(oldp+157,(0x22U),32);
    bufp->fullIData(oldp+158,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__clog2__Vstatic__i),32);
    bufp->fullBit(oldp+159,(0U));
    bufp->fullIData(oldp+160,(7U),32);
    bufp->fullIData(oldp+161,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__clog2__Vstatic__k),32);
    bufp->fullIData(oldp+162,(1U),32);
    bufp->fullIData(oldp+163,(2U),32);
    bufp->fullIData(oldp+164,(3U),32);
    bufp->fullIData(oldp+165,(4U),32);
    bufp->fullIData(oldp+166,(5U),32);
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
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_28;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_32;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.testbench__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.testbench__DOT__invalid));
    bufp->fullBit(oldp+3,(vlSelfRef.testbench__DOT__flush));
    bufp->fullCData(oldp+4,(vlSelfRef.testbench__DOT__mul_signed),2);
    bufp->fullIData(oldp+5,(vlSelfRef.testbench__DOT__multiplicand),32);
    bufp->fullIData(oldp+6,(vlSelfRef.testbench__DOT__multiplier),32);
    bufp->fullQData(oldp+7,((((QData)((IData)(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                               & (vlSelfRef.testbench__DOT__multiplier 
                                                  >> 0x1fU)))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplier)))),33);
    bufp->fullBit(oldp+9,((IData)((((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                    >> 1U) & (vlSelfRef.testbench__DOT__multiplicand 
                                              >> 0x1fU)))));
    bufp->fullBit(oldp+10,(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                            & (vlSelfRef.testbench__DOT__multiplier 
                               >> 0x1fU))));
    bufp->fullQData(oldp+11,(vlSelfRef.testbench__DOT__t0__DOT__mula),33);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = ((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                     << 1U);
    __Vtemp_1[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                      >> 0x1fU) | ((IData)((vlSelfRef.testbench__DOT__t0__DOT__mula 
                                            >> 0x20U)) 
                                   << 1U));
    bufp->fullWData(oldp+13,(__Vtemp_1),66);
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
    bufp->fullWData(oldp+16,(__Vtemp_7),66);
    __Vtemp_9[0U] = 0U;
    __Vtemp_9[1U] = ((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                     << 1U);
    __Vtemp_9[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                      >> 0x1fU) | ((IData)((vlSelfRef.testbench__DOT__t0__DOT__mula 
                                            >> 0x20U)) 
                                   << 1U));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_10, __Vtemp_9, 1U);
    __Vtemp_11[0U] = __Vtemp_10[0U];
    __Vtemp_11[1U] = __Vtemp_10[1U];
    __Vtemp_11[2U] = (3U & __Vtemp_10[2U]);
    bufp->fullWData(oldp+19,(__Vtemp_11),66);
    __Vtemp_13[0U] = 1U;
    __Vtemp_13[1U] = 0U;
    __Vtemp_13[2U] = 0U;
    __Vtemp_14[0U] = 0U;
    __Vtemp_14[1U] = ((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                      << 1U);
    __Vtemp_14[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__mula) 
                       >> 0x1fU) | ((IData)((vlSelfRef.testbench__DOT__t0__DOT__mula 
                                             >> 0x20U)) 
                                    << 1U));
    VL_SHIFTL_WWI(66,66,32, __Vtemp_15, __Vtemp_14, 1U);
    __Vtemp_16[0U] = (~ __Vtemp_15[0U]);
    __Vtemp_16[1U] = (~ __Vtemp_15[1U]);
    __Vtemp_16[2U] = (~ __Vtemp_15[2U]);
    VL_ADD_W(3, __Vtemp_17, __Vtemp_13, __Vtemp_16);
    __Vtemp_18[0U] = __Vtemp_17[0U];
    __Vtemp_18[1U] = __Vtemp_17[1U];
    __Vtemp_18[2U] = (3U & __Vtemp_17[2U]);
    bufp->fullWData(oldp+22,(__Vtemp_18),66);
    bufp->fullWData(oldp+25,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__adds),66);
    __Vtemp_19[0U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U] 
                      ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U]);
    __Vtemp_19[1U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[1U] 
                      ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U]);
    __Vtemp_19[2U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[2U] 
                      ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
    bufp->fullWData(oldp+28,(__Vtemp_19),66);
    bufp->fullBit(oldp+31,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout));
    bufp->fullWData(oldp+32,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__g),66);
    bufp->fullWData(oldp+35,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p),66);
    __Vtemp_20[0U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U];
    __Vtemp_20[1U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U];
    __Vtemp_20[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                       << 2U) | vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
    bufp->fullWData(oldp+38,(__Vtemp_20),67);
    bufp->fullWData(oldp+41,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[0]),66);
    bufp->fullWData(oldp+44,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[1]),66);
    bufp->fullWData(oldp+47,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[2]),66);
    bufp->fullWData(oldp+50,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[3]),66);
    bufp->fullWData(oldp+53,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[4]),66);
    bufp->fullWData(oldp+56,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[5]),66);
    bufp->fullWData(oldp+59,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[6]),66);
    bufp->fullWData(oldp+62,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[7]),66);
    bufp->fullWData(oldp+65,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[0]),66);
    bufp->fullWData(oldp+68,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[1]),66);
    bufp->fullWData(oldp+71,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[2]),66);
    bufp->fullWData(oldp+74,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[3]),66);
    bufp->fullWData(oldp+77,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[4]),66);
    bufp->fullWData(oldp+80,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[5]),66);
    bufp->fullWData(oldp+83,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[6]),66);
    bufp->fullWData(oldp+86,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[7]),66);
    bufp->fullWData(oldp+89,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber3),66);
    bufp->fullWData(oldp+92,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber4),66);
    bufp->fullWData(oldp+95,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber3),66);
    bufp->fullWData(oldp+98,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber4),66);
    bufp->fullWData(oldp+101,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber3),66);
    bufp->fullWData(oldp+104,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber4),66);
    __Vtemp_21[0U] = (IData)((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
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
    __Vtemp_21[1U] = (IData)(((((QData)((IData)((((
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_30) 
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
    __Vtemp_21[2U] = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_28) 
                       << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_29));
    bufp->fullWData(oldp+107,(__Vtemp_21),66);
    __Vtemp_22[0U] = (IData)((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_81) 
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
    __Vtemp_22[1U] = (IData)(((((QData)((IData)((((
                                                   ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_81) 
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
    __Vtemp_22[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_83) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_82));
    bufp->fullWData(oldp+110,(__Vtemp_22),66);
    __Vtemp_23[0U] = (IData)((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_62) 
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
    __Vtemp_23[1U] = (IData)(((((QData)((IData)((((
                                                   ((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_62) 
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
    __Vtemp_23[2U] = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_60) 
                       << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_61));
    bufp->fullWData(oldp+113,(__Vtemp_23),66);
    __Vtemp_24[0U] = (IData)((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33) 
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
    __Vtemp_24[1U] = (IData)(((((QData)((IData)((((
                                                   ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33) 
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
    __Vtemp_24[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_34));
    bufp->fullWData(oldp+116,(__Vtemp_24),66);
    __Vtemp_26[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_164);
    __Vtemp_26[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_164 
                              >> 0x20U));
    __Vtemp_26[2U] = (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_124) 
                       << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_125));
    bufp->fullWData(oldp+119,(__Vtemp_26),66);
    __Vtemp_28[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
    __Vtemp_28[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                              >> 0x20U));
    __Vtemp_28[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                       << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0));
    bufp->fullWData(oldp+122,(__Vtemp_28),66);
    __Vtemp_30[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_164);
    __Vtemp_30[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_164 
                              >> 0x20U));
    __Vtemp_30[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                       << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_158));
    bufp->fullWData(oldp+125,(__Vtemp_30),66);
    __Vtemp_32[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
    __Vtemp_32[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                              >> 0x20U));
    __Vtemp_32[2U] = ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                        & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                       << 1U) | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0) 
                                 & vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U]));
    bufp->fullWData(oldp+128,(__Vtemp_32),66);
    bufp->fullBit(oldp+131,((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
    bufp->fullBit(oldp+132,(vlSelfRef.testbench__DOT__t0__DOT__ovalid));
    bufp->fullIData(oldp+133,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]),32);
    bufp->fullCData(oldp+135,(vlSelfRef.testbench__DOT__t0__DOT__current_state),2);
    bufp->fullBit(oldp+136,(((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                             & (1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)))));
    bufp->fullBit(oldp+137,((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
    bufp->fullQData(oldp+138,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[2U])) 
                                                  << 0x1fU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                                    >> 1U)))),33);
    bufp->fullQData(oldp+140,((0x1ffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]))))),33);
    bufp->fullWData(oldp+142,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P),66);
    bufp->fullQData(oldp+145,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__B),35);
    bufp->fullCData(oldp+147,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter),6);
    bufp->fullBit(oldp+148,(vlSelfRef.testbench__DOT__clk));
    bufp->fullCData(oldp+149,(((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
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
