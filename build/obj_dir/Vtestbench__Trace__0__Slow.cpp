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
    tracep->declBit(c+151,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"invalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"multiplicand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"multiplier",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("t0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"inready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"invalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"mul_signed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+5,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"outvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"result_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"result_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+128,0,"ovalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"mula",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+7,0,"mulb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+12,0,"signed_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"signed_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+154,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+156,0,"FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+131,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+152,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+132,0,"en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"arst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"mul_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("m0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+157,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+151,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"asyn_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"syn_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+10,0,"multiplicand",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+7,0,"multiplier",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+128,0,"outvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"result_hi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+136,0,"result_lo",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+158,0,"DDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"LOGDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"COUNT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+157,0,"MAX_COUNT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+138,0,"P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declQuad(c+141,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+143,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+144,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"cout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+19,0,"adds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+22,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+160,0,"clog2__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+138,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+19,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+161,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+22,0,"sum",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+25,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+26,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+29,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+32,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 68,0);
    tracep->declBus(c+162,0,"STAGE_NUM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("G", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+35+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 67,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("P", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+59+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 67,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+163,0,"clog2__Vstatic__k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("p1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+26,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+29,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+83,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+86,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->pushPrefix("p2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+165,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+83,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+86,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+89,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+92,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->pushPrefix("p3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+89,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+92,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+95,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+98,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->pushPrefix("p4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+95,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+98,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+101,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+104,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->pushPrefix("p5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+101,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+104,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+107,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+110,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->pushPrefix("p6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+159,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+107,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+110,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+113,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+116,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->pushPrefix("p7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+113,0,"Gin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+116,0,"Pin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+119,0,"Gout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declArray(c+122,0,"Pout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+157,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"DDATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+10,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+146,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+19,0,"p",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBit(c+145,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+13,0,"xn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+10,0,"xp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+15,0,"xdn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+17,0,"xdp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+147,0,"seln",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"selp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"seldn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"seldp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+125,0,"p_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
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
    bufp->fullIData(oldp+153,(0x20U),32);
    bufp->fullCData(oldp+154,(0U),2);
    bufp->fullCData(oldp+155,(1U),2);
    bufp->fullCData(oldp+156,(2U),2);
    bufp->fullIData(oldp+157,(0x22U),32);
    bufp->fullIData(oldp+158,(0x44U),32);
    bufp->fullIData(oldp+159,(6U),32);
    bufp->fullIData(oldp+160,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__clog2__Vstatic__i),32);
    bufp->fullBit(oldp+161,(0U));
    bufp->fullIData(oldp+162,(7U),32);
    bufp->fullIData(oldp+163,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__clog2__Vstatic__k),32);
    bufp->fullIData(oldp+164,(1U),32);
    bufp->fullIData(oldp+165,(2U),32);
    bufp->fullIData(oldp+166,(3U),32);
    bufp->fullIData(oldp+167,(4U),32);
    bufp->fullIData(oldp+168,(5U),32);
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
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_16;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.testbench__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.testbench__DOT__invalid));
    bufp->fullBit(oldp+3,(vlSelfRef.testbench__DOT__flush));
    bufp->fullCData(oldp+4,(vlSelfRef.testbench__DOT__mul_signed),2);
    bufp->fullIData(oldp+5,(vlSelfRef.testbench__DOT__multiplicand),32);
    bufp->fullIData(oldp+6,(vlSelfRef.testbench__DOT__multiplier),32);
    bufp->fullQData(oldp+7,((((QData)((IData)((3U & 
                                               (- (IData)(
                                                          ((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                                                           & (vlSelfRef.testbench__DOT__multiplier 
                                                              >> 0x1fU))))))) 
                              << 0x20U) | (QData)((IData)(vlSelfRef.testbench__DOT__multiplier)))),34);
    bufp->fullBit(oldp+9,(((IData)(vlSelfRef.testbench__DOT__mul_signed) 
                           & (vlSelfRef.testbench__DOT__multiplier 
                              >> 0x1fU))));
    bufp->fullQData(oldp+10,(vlSelfRef.testbench__DOT__t0__DOT__mula),34);
    bufp->fullBit(oldp+12,(vlSelfRef.testbench__DOT__t0__DOT__signed_a));
    bufp->fullQData(oldp+13,((0x3ffffffffULL & (~ vlSelfRef.testbench__DOT__t0__DOT__mula))),34);
    bufp->fullQData(oldp+15,((0x3ffffffffULL & (~ VL_SHIFTL_QQI(34,34,32, vlSelfRef.testbench__DOT__t0__DOT__mula, 1U)))),34);
    bufp->fullQData(oldp+17,((0x3ffffffffULL & VL_SHIFTL_QQI(34,34,32, vlSelfRef.testbench__DOT__t0__DOT__mula, 1U))),34);
    bufp->fullWData(oldp+19,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__adds),68);
    __Vtemp_1[0U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U] 
                     ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U]);
    __Vtemp_1[1U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[1U] 
                     ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U]);
    __Vtemp_1[2U] = (vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[2U] 
                     ^ vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
    bufp->fullWData(oldp+22,(__Vtemp_1),68);
    bufp->fullBit(oldp+25,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout));
    bufp->fullWData(oldp+26,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__g),68);
    bufp->fullWData(oldp+29,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p),68);
    __Vtemp_2[0U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[0U];
    __Vtemp_2[1U] = vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[1U];
    __Vtemp_2[2U] = (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                      << 4U) | vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0[2U]);
    bufp->fullWData(oldp+32,(__Vtemp_2),69);
    bufp->fullWData(oldp+35,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[0]),68);
    bufp->fullWData(oldp+38,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[1]),68);
    bufp->fullWData(oldp+41,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[2]),68);
    bufp->fullWData(oldp+44,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[3]),68);
    bufp->fullWData(oldp+47,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[4]),68);
    bufp->fullWData(oldp+50,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[5]),68);
    bufp->fullWData(oldp+53,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[6]),68);
    bufp->fullWData(oldp+56,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G[7]),68);
    bufp->fullWData(oldp+59,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[0]),68);
    bufp->fullWData(oldp+62,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[1]),68);
    bufp->fullWData(oldp+65,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[2]),68);
    bufp->fullWData(oldp+68,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[3]),68);
    bufp->fullWData(oldp+71,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[4]),68);
    bufp->fullWData(oldp+74,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[5]),68);
    bufp->fullWData(oldp+77,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[6]),68);
    bufp->fullWData(oldp+80,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P[7]),68);
    bufp->fullWData(oldp+83,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber3),68);
    bufp->fullWData(oldp+86,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber4),68);
    bufp->fullWData(oldp+89,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber3),68);
    bufp->fullWData(oldp+92,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber4),68);
    bufp->fullWData(oldp+95,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber3),68);
    bufp->fullWData(oldp+98,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber4),68);
    bufp->fullWData(oldp+101,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p4____pinNumber3),68);
    bufp->fullWData(oldp+104,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p4____pinNumber4),68);
    __Vtemp_3[0U] = (IData)((((QData)((IData)((((((
                                                   ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_66) 
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
    __Vtemp_3[1U] = (IData)(((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_66) 
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
    bufp->fullWData(oldp+107,(__Vtemp_3),68);
    __Vtemp_4[0U] = (IData)((((QData)((IData)((((((
                                                   ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35) 
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
    __Vtemp_4[1U] = (IData)(((((QData)((IData)(((((
                                                   (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35) 
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
    bufp->fullWData(oldp+110,(__Vtemp_4),68);
    __Vtemp_7[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
    __Vtemp_7[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                             >> 0x20U));
    __Vtemp_7[2U] = ((0xfffffffcU & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_126) 
                                      << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_127) 
                                                << 2U))) 
                     | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_128) 
                         << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_129)));
    bufp->fullWData(oldp+113,(__Vtemp_7),68);
    __Vtemp_10[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_176);
    __Vtemp_10[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_176 
                              >> 0x20U));
    __Vtemp_10[2U] = ((0xfffffffcU & (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_3) 
                                       << 3U) | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_2) 
                                                 << 2U))) 
                      | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                          << 1U) | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0)));
    bufp->fullWData(oldp+116,(__Vtemp_10),68);
    __Vtemp_13[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_170);
    __Vtemp_13[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_170 
                              >> 0x20U));
    __Vtemp_13[2U] = ((0xfffffffcU & (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout) 
                                       << 3U) | ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_162) 
                                                 << 2U))) 
                      | (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_163) 
                          << 1U) | (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_164)));
    bufp->fullWData(oldp+119,(__Vtemp_13),68);
    __Vtemp_16[0U] = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_176);
    __Vtemp_16[1U] = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_176 
                              >> 0x20U));
    __Vtemp_16[2U] = ((0xfffffffcU & ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_3) 
                                        & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_12)) 
                                       << 3U) | (((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_2) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_13)) 
                                                 << 2U))) 
                      | ((((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1) 
                           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_5)) 
                          << 1U) | ((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0) 
                                    & vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p[0U])));
    bufp->fullWData(oldp+122,(__Vtemp_16),68);
    bufp->fullQData(oldp+125,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__p_high),34);
    bufp->fullBit(oldp+127,((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
    bufp->fullBit(oldp+128,(vlSelfRef.testbench__DOT__t0__DOT__ovalid));
    bufp->fullIData(oldp+129,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U]),32);
    bufp->fullIData(oldp+130,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]),32);
    bufp->fullCData(oldp+131,(vlSelfRef.testbench__DOT__t0__DOT__current_state),2);
    bufp->fullBit(oldp+132,(((~ (IData)(vlSelfRef.testbench__DOT__t0__DOT__ovalid)) 
                             & (1U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state)))));
    bufp->fullBit(oldp+133,((2U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))));
    bufp->fullQData(oldp+134,((0x3ffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[2U])) 
                                                  << 0x1eU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                                    >> 2U)))),34);
    bufp->fullQData(oldp+136,((0x3ffffffffULL & (((QData)((IData)(
                                                                  vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P[0U]))))),34);
    bufp->fullWData(oldp+138,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__P),68);
    bufp->fullQData(oldp+141,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__B),35);
    bufp->fullCData(oldp+143,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__counter),6);
    bufp->fullBit(oldp+144,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__cin));
    bufp->fullBit(oldp+145,(((IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seln) 
                             | (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seldn))));
    bufp->fullCData(oldp+146,((7U & (IData)(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__B))),3);
    bufp->fullBit(oldp+147,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seln));
    bufp->fullBit(oldp+148,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__selp));
    bufp->fullBit(oldp+149,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seldn));
    bufp->fullBit(oldp+150,(vlSelfRef.testbench__DOT__t0__DOT__m0__DOT__gp__DOT__seldp));
    bufp->fullBit(oldp+151,(vlSelfRef.testbench__DOT__clk));
    bufp->fullCData(oldp+152,(((0U == (IData)(vlSelfRef.testbench__DOT__t0__DOT__current_state))
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
