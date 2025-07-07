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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT__clk;
        CData/*0:0*/ testbench__DOT__rst;
        CData/*0:0*/ testbench__DOT__invalid;
        CData/*0:0*/ testbench__DOT__flush;
        CData/*1:0*/ testbench__DOT__mul_signed;
        CData/*0:0*/ testbench__DOT__t0__DOT__ovalid;
        CData/*1:0*/ testbench__DOT__t0__DOT__current_state;
        CData/*1:0*/ testbench__DOT__t0__DOT__next_state;
        CData/*0:0*/ testbench__DOT__t0__DOT__en;
        CData/*5:0*/ testbench__DOT__t0__DOT__m0__DOT__counter;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__cout;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_0;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_1;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_2;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_3;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_4;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_5;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_6;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_7;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_8;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_9;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_10;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_11;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_12;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_13;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_14;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_15;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_16;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_17;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_18;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_19;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_20;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_21;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_22;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_23;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_24;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_25;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_26;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_27;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_28;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_29;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_30;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_31;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_32;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_33;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_34;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_35;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_36;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_37;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_38;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_39;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_40;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_41;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_42;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_43;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_44;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_45;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_46;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_47;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_48;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_49;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_50;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_51;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_52;
    };
    struct {
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_53;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_54;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_55;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_56;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_57;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_58;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_59;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_60;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_61;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_62;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_63;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_64;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_65;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_66;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_67;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_68;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_69;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_70;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_71;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_72;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_73;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_74;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_75;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_76;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_77;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_78;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_79;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_80;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_81;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_82;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p5__DOT____VdfgRegularize_ha7d0d37d_0_83;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_0;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_1;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_2;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_3;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_4;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_5;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_6;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_7;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_8;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_9;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_10;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_11;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_12;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_13;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_14;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_15;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_16;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_17;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_18;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_19;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_20;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_21;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_22;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_23;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_24;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_25;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_26;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_27;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_28;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_29;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_30;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_31;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_32;
    };
    struct {
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_33;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_34;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p6__DOT____VdfgRegularize_h0d85168d_0_35;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_0;
        CData/*0:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p7__DOT____VdfgRegularize_h1eb937ed_0_1;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_3;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_28;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_29;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_30;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_31;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_32;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_33;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_34;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_35;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_36;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_37;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_38;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_39;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_40;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_41;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_42;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_43;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_60;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_61;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_62;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_63;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_64;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_65;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_66;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_67;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_68;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_69;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_70;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_71;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_72;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_73;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_74;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_75;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_76;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_77;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_78;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_79;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_80;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_81;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_82;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_83;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_84;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_85;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_86;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_87;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_88;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_89;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_90;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_91;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_124;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_125;
        CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_158;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ __VdfgRegularize_hd87f99a1_0_162;
        SData/*15:0*/ __VdfgRegularize_hd87f99a1_0_168;
        IData/*31:0*/ testbench__DOT__multiplicand;
    };
    struct {
        IData/*31:0*/ testbench__DOT__multiplier;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__P;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__adds;
        IData/*31:0*/ testbench__DOT__t0__DOT__m0__DOT__clog2__Vstatic__i;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__g;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__p;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber4;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p1____pinNumber3;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber4;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p2____pinNumber3;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber4;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____Vcellout__p3____pinNumber3;
        IData/*31:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT__clog2__Vstatic__k;
        VlWide<3>/*65:0*/ testbench__DOT__t0__DOT__m0__DOT__alu__DOT____VdfgRegularize_h428b52b8_0_0;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_163;
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_169;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ testbench__DOT__t0__DOT__mula;
        QData/*33:0*/ testbench__DOT__t0__DOT__m0__DOT__B;
        QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_164;
        QData/*63:0*/ __VdfgRegularize_hd87f99a1_0_170;
        VlUnpacked<VlWide<3>/*65:0*/, 8> testbench__DOT__t0__DOT__m0__DOT__alu__DOT__G;
        VlUnpacked<VlWide<3>/*65:0*/, 8> testbench__DOT__t0__DOT__m0__DOT__alu__DOT__P;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
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
