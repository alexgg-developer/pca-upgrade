/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Tue Mar  4 13:50:26 EST 2014 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_hc2hc.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -sign 1 -n 15 -dif -name hb_15 -include hb.h */

/*
 * This function contains 184 FP additions, 140 FP multiplications,
 * (or, 72 additions, 28 multiplications, 112 fused multiply/add),
 * 93 stack variables, 6 constants, and 60 memory accesses
 */
#include "hb.h"

static void hb_15(R *cr, R *ci, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     DK(KP866025403, +0.866025403784438646763723170752936183471402627);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 28); m < me; m = m + 1, cr = cr + ms, ci = ci - ms, W = W + 28, MAKE_VOLATILE_STRIDE(30, rs)) {
	       E T3v, T3u, T3r, T3w, T3t;
	       {
		    E T5, T11, T1C, T2U, T2f, T3f, T19, T18, TS, TH, T14, T16, T3g, T3a, Ts;
		    E Tv, T37, T3h, T28, T2h, T1M, T21, T2g, T3n, T2X, T1P, T30, T3m, T1J, T2m;
		    {
			 E T1, TX, T2, T3, TY, TZ;
			 T1 = cr[0];
			 TX = ci[WS(rs, 14)];
			 T2 = cr[WS(rs, 5)];
			 T3 = ci[WS(rs, 4)];
			 TY = ci[WS(rs, 9)];
			 TZ = cr[WS(rs, 10)];
			 {
			      E T1W, T23, T1D, Ta, Tl, T1K, T1Z, T1H, T1G, Tf, TR, T1Y, T26, TI, T1O;
			      E T1N, Tq, TG, T25, Tx, Ty, Tz, TL, T1E;
			      {
				   E Tb, TQ, TN, TO, Te;
				   {
					E T6, Th, Ti, Tj, T9, Tc, Td, Tk;
					{
					     E T7, T8, T2e, T4;
					     T6 = cr[WS(rs, 3)];
					     T2e = T2 - T3;
					     T4 = T2 + T3;
					     {
						  E T1B, T10, T1A, T2d;
						  T1B = TY + TZ;
						  T10 = TY - TZ;
						  T7 = ci[WS(rs, 6)];
						  T5 = T1 + T4;
						  T1A = FNMS(KP500000000, T4, T1);
						  T11 = TX + T10;
						  T2d = FNMS(KP500000000, T10, TX);
						  T1C = FNMS(KP866025403, T1B, T1A);
						  T2U = FMA(KP866025403, T1B, T1A);
						  T2f = FMA(KP866025403, T2e, T2d);
						  T3f = FNMS(KP866025403, T2e, T2d);
						  T8 = ci[WS(rs, 1)];
					     }
					     Th = cr[WS(rs, 6)];
					     Ti = ci[WS(rs, 3)];
					     Tj = cr[WS(rs, 1)];
					     T9 = T7 + T8;
					     T1W = T7 - T8;
					}
					Tb = ci[WS(rs, 2)];
					T23 = Ti - Tj;
					Tk = Ti + Tj;
					T1D = FNMS(KP500000000, T9, T6);
					Ta = T6 + T9;
					Tc = cr[WS(rs, 2)];
					Tl = Th + Tk;
					T1K = FNMS(KP500000000, Tk, Th);
					Td = cr[WS(rs, 7)];
					TQ = cr[WS(rs, 12)];
					TN = ci[WS(rs, 12)];
					TO = ci[WS(rs, 7)];
					Te = Tc + Td;
					T1Z = Tc - Td;
				   }
				   {
					E Tm, TF, TC, TD, Tp, Tn, To, TP, TJ, TK, TE;
					Tm = ci[WS(rs, 5)];
					T1H = TO - TN;
					TP = TN + TO;
					T1G = FNMS(KP500000000, Te, Tb);
					Tf = Tb + Te;
					Tn = ci[0];
					TR = TP - TQ;
					T1Y = FMA(KP500000000, TP, TQ);
					To = cr[WS(rs, 4)];
					TF = cr[WS(rs, 9)];
					TC = ci[WS(rs, 10)];
					TD = cr[WS(rs, 14)];
					Tp = Tn + To;
					T26 = Tn - To;
					TI = ci[WS(rs, 11)];
					T1O = TC + TD;
					TE = TC - TD;
					T1N = FNMS(KP500000000, Tp, Tm);
					Tq = Tm + Tp;
					TJ = cr[WS(rs, 8)];
					TG = TE - TF;
					T25 = FMA(KP500000000, TE, TF);
					TK = cr[WS(rs, 13)];
					Tx = ci[WS(rs, 8)];
					Ty = ci[WS(rs, 13)];
					Tz = cr[WS(rs, 11)];
					TL = TJ + TK;
					T1E = TJ - TK;
				   }
			      }
			      {
				   E Tg, T1L, Tr, T22, T12, T1X, T38, T13, T39, T20;
				   {
					E TA, T1V, TM, TB;
					Tg = Ta + Tf;
					T19 = Ta - Tf;
					T1L = Ty + Tz;
					TA = Ty - Tz;
					T1V = FMA(KP500000000, TL, TI);
					TM = TI - TL;
					T18 = Tl - Tq;
					Tr = Tl + Tq;
					TB = Tx + TA;
					T22 = FNMS(KP500000000, TA, Tx);
					T12 = TM + TR;
					TS = TM - TR;
					T1X = FMA(KP866025403, T1W, T1V);
					T38 = FNMS(KP866025403, T1W, T1V);
					T13 = TB + TG;
					TH = TB - TG;
					T39 = FMA(KP866025403, T1Z, T1Y);
					T20 = FNMS(KP866025403, T1Z, T1Y);
				   }
				   {
					E T35, T24, T27, T36;
					T14 = T12 + T13;
					T16 = T12 - T13;
					T3g = T38 - T39;
					T3a = T38 + T39;
					T35 = FNMS(KP866025403, T23, T22);
					T24 = FMA(KP866025403, T23, T22);
					Ts = Tg + Tr;
					Tv = Tg - Tr;
					T27 = FNMS(KP866025403, T26, T25);
					T36 = FMA(KP866025403, T26, T25);
					T37 = T35 + T36;
					T3h = T35 - T36;
					T28 = T24 + T27;
					T2h = T24 - T27;
					{
					     E T1F, T1I, T2Y, T2Z, T2V, T2W;
					     T2V = FNMS(KP866025403, T1E, T1D);
					     T1F = FMA(KP866025403, T1E, T1D);
					     T1I = FMA(KP866025403, T1H, T1G);
					     T2W = FNMS(KP866025403, T1H, T1G);
					     T2Y = FNMS(KP866025403, T1L, T1K);
					     T1M = FMA(KP866025403, T1L, T1K);
					     T21 = T1X + T20;
					     T2g = T1X - T20;
					     T3n = T2V - T2W;
					     T2X = T2V + T2W;
					     T2Z = FNMS(KP866025403, T1O, T1N);
					     T1P = FMA(KP866025403, T1O, T1N);
					     T30 = T2Y + T2Z;
					     T3m = T2Y - T2Z;
					     T1J = T1F + T1I;
					     T2m = T1F - T1I;
					}
				   }
			      }
			 }
		    }
		    {
			 E T31, T33, T2n, T1Q;
			 cr[0] = T5 + Ts;
			 T31 = T2X + T30;
			 T33 = T2X - T30;
			 T2n = T1M - T1P;
			 T1Q = T1M + T1P;
			 ci[0] = T11 + T14;
			 {
			      E T1T, T1R, T1r, T1o, T1n;
			      {
				   E T1q, T1a, TT, T1l, Tu, T17, T1p, T15;
				   T1q = FMA(KP618033988, T18, T19);
				   T1a = FNMS(KP618033988, T19, T18);
				   T1T = T1J - T1Q;
				   T1R = T1J + T1Q;
				   T15 = FNMS(KP250000000, T14, T11);
				   TT = FNMS(KP618033988, TS, TH);
				   T1l = FMA(KP618033988, TH, TS);
				   Tu = FNMS(KP250000000, Ts, T5);
				   T17 = FNMS(KP559016994, T16, T15);
				   T1p = FMA(KP559016994, T16, T15);
				   {
					E T1h, T1m, T1e, T1x, T1w, T1v, T1g, T1d;
					{
					     E TW, T1b, Tt, T1u, TU, T1k, Tw;
					     TW = W[5];
					     T1k = FMA(KP559016994, Tv, Tu);
					     Tw = FNMS(KP559016994, Tv, Tu);
					     T1b = FMA(KP951056516, T1a, T17);
					     T1h = FNMS(KP951056516, T1a, T17);
					     Tt = W[4];
					     T1m = FNMS(KP951056516, T1l, T1k);
					     T1u = FMA(KP951056516, T1l, T1k);
					     T1e = FMA(KP951056516, TT, Tw);
					     TU = FNMS(KP951056516, TT, Tw);
					     {
						  E T1t, TV, T1c, T1y;
						  T1x = FNMS(KP951056516, T1q, T1p);
						  T1r = FMA(KP951056516, T1q, T1p);
						  T1w = W[17];
						  T1t = W[16];
						  TV = Tt * TU;
						  T1c = TW * TU;
						  T1y = T1w * T1u;
						  T1v = T1t * T1u;
						  cr[WS(rs, 3)] = FNMS(TW, T1b, TV);
						  ci[WS(rs, 3)] = FMA(Tt, T1b, T1c);
						  ci[WS(rs, 9)] = FMA(T1t, T1x, T1y);
					     }
					}
					cr[WS(rs, 9)] = FNMS(T1w, T1x, T1v);
					T1g = W[23];
					T1d = W[22];
					{
					     E T1j, T1s, T1i, T1f;
					     T1o = W[11];
					     T1i = T1g * T1e;
					     T1f = T1d * T1e;
					     T1j = W[10];
					     T1s = T1o * T1m;
					     ci[WS(rs, 12)] = FMA(T1d, T1h, T1i);
					     cr[WS(rs, 12)] = FNMS(T1g, T1h, T1f);
					     T1n = T1j * T1m;
					     ci[WS(rs, 6)] = FMA(T1j, T1r, T1s);
					}
				   }
			      }
			      {
				   E T2v, T2u, T2r, T2w, T2t;
				   {
					E T1S, T2N, T2o, T2E, T2Q, T2P, T2k, T2S, T29, T2z, T2R, T2j, T2O, T2i;
					cr[WS(rs, 6)] = FNMS(T1o, T1r, T1n);
					T1S = FNMS(KP250000000, T1R, T1C);
					T2O = T1C + T1R;
					T2N = W[18];
					T2o = FMA(KP618033988, T2n, T2m);
					T2E = FNMS(KP618033988, T2m, T2n);
					T2Q = W[19];
					T2P = T2N * T2O;
					T2i = T2g + T2h;
					T2k = T2g - T2h;
					T2S = T2Q * T2O;
					T29 = FMA(KP618033988, T28, T21);
					T2z = FNMS(KP618033988, T21, T28);
					T2R = T2f + T2i;
					T2j = FNMS(KP250000000, T2i, T2f);
					{
					     E T2D, T2p, T2I, T2A, T2a, T2s, T2c, T1z, T2l, T1U, T2y;
					     cr[WS(rs, 10)] = FNMS(T2Q, T2R, T2P);
					     T2l = FMA(KP559016994, T2k, T2j);
					     T2D = FNMS(KP559016994, T2k, T2j);
					     T1U = FMA(KP559016994, T1T, T1S);
					     T2y = FNMS(KP559016994, T1T, T1S);
					     ci[WS(rs, 10)] = FMA(T2N, T2R, T2S);
					     T2p = FMA(KP951056516, T2o, T2l);
					     T2v = FNMS(KP951056516, T2o, T2l);
					     T2I = FNMS(KP951056516, T2z, T2y);
					     T2A = FMA(KP951056516, T2z, T2y);
					     T2a = FNMS(KP951056516, T29, T1U);
					     T2s = FMA(KP951056516, T29, T1U);
					     T2c = W[1];
					     T1z = W[0];
					     {
						  E T2F, T2L, T2K, T2J;
						  {
						       E T2H, T2M, T2q, T2b;
						       T2F = FNMS(KP951056516, T2E, T2D);
						       T2L = FMA(KP951056516, T2E, T2D);
						       T2K = W[25];
						       T2q = T2c * T2a;
						       T2b = T1z * T2a;
						       T2H = W[24];
						       T2M = T2K * T2I;
						       ci[WS(rs, 1)] = FMA(T1z, T2p, T2q);
						       cr[WS(rs, 1)] = FNMS(T2c, T2p, T2b);
						       T2J = T2H * T2I;
						       ci[WS(rs, 13)] = FMA(T2H, T2L, T2M);
						  }
						  {
						       E T2C, T2x, T2G, T2B;
						       T2C = W[13];
						       cr[WS(rs, 13)] = FNMS(T2K, T2L, T2J);
						       T2x = W[12];
						       T2G = T2C * T2A;
						       T2u = W[7];
						       T2B = T2x * T2A;
						       T2r = W[6];
						       ci[WS(rs, 7)] = FMA(T2x, T2F, T2G);
						       T2w = T2u * T2s;
						       cr[WS(rs, 7)] = FNMS(T2C, T2F, T2B);
						       T2t = T2r * T2s;
						  }
					     }
					}
				   }
				   {
					E T32, T3N, T3E, T3o, T3Q, T3P, T3k, T3S, T3z, T3b, T3j, T3R, T3O, T3i;
					ci[WS(rs, 4)] = FMA(T2r, T2v, T2w);
					cr[WS(rs, 4)] = FNMS(T2u, T2v, T2t);
					T3O = T2U + T31;
					T32 = FNMS(KP250000000, T31, T2U);
					T3N = W[8];
					T3E = FMA(KP618033988, T3m, T3n);
					T3o = FNMS(KP618033988, T3n, T3m);
					T3Q = W[9];
					T3P = T3N * T3O;
					T3k = T3g - T3h;
					T3i = T3g + T3h;
					T3S = T3Q * T3O;
					T3z = FMA(KP618033988, T37, T3a);
					T3b = FNMS(KP618033988, T3a, T37);
					T3j = FNMS(KP250000000, T3i, T3f);
					T3R = T3f + T3i;
					{
					     E T3D, T3p, T3A, T3I, T3s, T3c, T3e, T2T, T3l, T3y, T34;
					     cr[WS(rs, 5)] = FNMS(T3Q, T3R, T3P);
					     T3D = FMA(KP559016994, T3k, T3j);
					     T3l = FNMS(KP559016994, T3k, T3j);
					     T3y = FMA(KP559016994, T33, T32);
					     T34 = FNMS(KP559016994, T33, T32);
					     ci[WS(rs, 5)] = FMA(T3N, T3R, T3S);
					     T3v = FMA(KP951056516, T3o, T3l);
					     T3p = FNMS(KP951056516, T3o, T3l);
					     T3A = FNMS(KP951056516, T3z, T3y);
					     T3I = FMA(KP951056516, T3z, T3y);
					     T3s = FNMS(KP951056516, T3b, T34);
					     T3c = FMA(KP951056516, T3b, T34);
					     T3e = W[3];
					     T2T = W[2];
					     {
						  E T3L, T3F, T3K, T3J;
						  {
						       E T3H, T3M, T3q, T3d;
						       T3L = FNMS(KP951056516, T3E, T3D);
						       T3F = FMA(KP951056516, T3E, T3D);
						       T3K = W[27];
						       T3q = T3e * T3c;
						       T3d = T2T * T3c;
						       T3H = W[26];
						       T3M = T3K * T3I;
						       ci[WS(rs, 2)] = FMA(T2T, T3p, T3q);
						       cr[WS(rs, 2)] = FNMS(T3e, T3p, T3d);
						       T3J = T3H * T3I;
						       ci[WS(rs, 14)] = FMA(T3H, T3L, T3M);
						  }
						  {
						       E T3C, T3x, T3G, T3B;
						       T3C = W[21];
						       cr[WS(rs, 14)] = FNMS(T3K, T3L, T3J);
						       T3x = W[20];
						       T3G = T3C * T3A;
						       T3u = W[15];
						       T3B = T3x * T3A;
						       T3r = W[14];
						       ci[WS(rs, 11)] = FMA(T3x, T3F, T3G);
						       T3w = T3u * T3s;
						       cr[WS(rs, 11)] = FNMS(T3C, T3F, T3B);
						       T3t = T3r * T3s;
						  }
					     }
					}
				   }
			      }
			 }
		    }
	       }
	       ci[WS(rs, 8)] = FMA(T3r, T3v, T3w);
	       cr[WS(rs, 8)] = FNMS(T3u, T3v, T3t);
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 15},
     {TW_NEXT, 1, 0}
};

static const hc2hc_desc desc = { 15, "hb_15", twinstr, &GENUS, {72, 28, 112, 0} };

void X(codelet_hb_15) (planner *p) {
     X(khc2hc_register) (p, hb_15, &desc);
}
#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_hc2hc.native -compact -variables 4 -pipeline-latency 4 -sign 1 -n 15 -dif -name hb_15 -include hb.h */

/*
 * This function contains 184 FP additions, 112 FP multiplications,
 * (or, 128 additions, 56 multiplications, 56 fused multiply/add),
 * 75 stack variables, 6 constants, and 60 memory accesses
 */
#include "hb.h"

static void hb_15(R *cr, R *ci, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     DK(KP866025403, +0.866025403784438646763723170752936183471402627);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 28); m < me; m = m + 1, cr = cr + ms, ci = ci - ms, W = W + 28, MAKE_VOLATILE_STRIDE(30, rs)) {
	       E T5, T10, T1J, T2C, T2c, T2M, TH, T18, T17, TS, T2Q, T2R, T2S, Tg, Tr;
	       E Ts, T11, T12, T13, T2N, T2O, T2P, T1u, T1x, T1y, T1W, T1Z, T28, T1P, T1S;
	       E T27, T1B, T1E, T1F, T2G, T2H, T2I, T2D, T2E, T2F;
	       {
		    E T1, TW, T4, T2a, TZ, T1I, T1H, T2b;
		    T1 = cr[0];
		    TW = ci[WS(rs, 14)];
		    {
			 E T2, T3, TX, TY;
			 T2 = cr[WS(rs, 5)];
			 T3 = ci[WS(rs, 4)];
			 T4 = T2 + T3;
			 T2a = KP866025403 * (T2 - T3);
			 TX = ci[WS(rs, 9)];
			 TY = cr[WS(rs, 10)];
			 TZ = TX - TY;
			 T1I = KP866025403 * (TX + TY);
		    }
		    T5 = T1 + T4;
		    T10 = TW + TZ;
		    T1H = FNMS(KP500000000, T4, T1);
		    T1J = T1H - T1I;
		    T2C = T1H + T1I;
		    T2b = FNMS(KP500000000, TZ, TW);
		    T2c = T2a + T2b;
		    T2M = T2b - T2a;
	       }
	       {
		    E Ta, T1N, T1s, Tl, T1U, T1z, Tf, T1Q, T1v, TG, T1R, T1w, Tq, T1X, T1C;
		    E TM, T1V, T1A, TB, T1O, T1t, TR, T1Y, T1D;
		    {
			 E T6, T7, T8, T9;
			 T6 = cr[WS(rs, 3)];
			 T7 = ci[WS(rs, 6)];
			 T8 = ci[WS(rs, 1)];
			 T9 = T7 + T8;
			 Ta = T6 + T9;
			 T1N = KP866025403 * (T7 - T8);
			 T1s = FNMS(KP500000000, T9, T6);
		    }
		    {
			 E Th, Ti, Tj, Tk;
			 Th = cr[WS(rs, 6)];
			 Ti = ci[WS(rs, 3)];
			 Tj = cr[WS(rs, 1)];
			 Tk = Ti + Tj;
			 Tl = Th + Tk;
			 T1U = KP866025403 * (Ti - Tj);
			 T1z = FNMS(KP500000000, Tk, Th);
		    }
		    {
			 E Tb, Tc, Td, Te;
			 Tb = ci[WS(rs, 2)];
			 Tc = cr[WS(rs, 2)];
			 Td = cr[WS(rs, 7)];
			 Te = Tc + Td;
			 Tf = Tb + Te;
			 T1Q = KP866025403 * (Tc - Td);
			 T1v = FNMS(KP500000000, Te, Tb);
		    }
		    {
			 E TF, TC, TD, TE;
			 TF = cr[WS(rs, 12)];
			 TC = ci[WS(rs, 12)];
			 TD = ci[WS(rs, 7)];
			 TE = TC + TD;
			 TG = TE - TF;
			 T1R = FMA(KP500000000, TE, TF);
			 T1w = KP866025403 * (TD - TC);
		    }
		    {
			 E Tm, Tn, To, Tp;
			 Tm = ci[WS(rs, 5)];
			 Tn = ci[0];
			 To = cr[WS(rs, 4)];
			 Tp = Tn + To;
			 Tq = Tm + Tp;
			 T1X = KP866025403 * (Tn - To);
			 T1C = FNMS(KP500000000, Tp, Tm);
		    }
		    {
			 E TI, TJ, TK, TL;
			 TI = ci[WS(rs, 8)];
			 TJ = ci[WS(rs, 13)];
			 TK = cr[WS(rs, 11)];
			 TL = TJ - TK;
			 TM = TI + TL;
			 T1V = FNMS(KP500000000, TL, TI);
			 T1A = KP866025403 * (TJ + TK);
		    }
		    {
			 E Tx, Ty, Tz, TA;
			 Tx = ci[WS(rs, 11)];
			 Ty = cr[WS(rs, 8)];
			 Tz = cr[WS(rs, 13)];
			 TA = Ty + Tz;
			 TB = Tx - TA;
			 T1O = FMA(KP500000000, TA, Tx);
			 T1t = KP866025403 * (Ty - Tz);
		    }
		    {
			 E TQ, TN, TO, TP;
			 TQ = cr[WS(rs, 9)];
			 TN = ci[WS(rs, 10)];
			 TO = cr[WS(rs, 14)];
			 TP = TN - TO;
			 TR = TP - TQ;
			 T1Y = FMA(KP500000000, TP, TQ);
			 T1D = KP866025403 * (TN + TO);
		    }
		    TH = TB - TG;
		    T18 = Tl - Tq;
		    T17 = Ta - Tf;
		    TS = TM - TR;
		    T2Q = T1V - T1U;
		    T2R = T1X + T1Y;
		    T2S = T2Q - T2R;
		    Tg = Ta + Tf;
		    Tr = Tl + Tq;
		    Ts = Tg + Tr;
		    T11 = TB + TG;
		    T12 = TM + TR;
		    T13 = T11 + T12;
		    T2N = T1O - T1N;
		    T2O = T1Q + T1R;
		    T2P = T2N - T2O;
		    T1u = T1s + T1t;
		    T1x = T1v + T1w;
		    T1y = T1u + T1x;
		    T1W = T1U + T1V;
		    T1Z = T1X - T1Y;
		    T28 = T1W + T1Z;
		    T1P = T1N + T1O;
		    T1S = T1Q - T1R;
		    T27 = T1P + T1S;
		    T1B = T1z + T1A;
		    T1E = T1C + T1D;
		    T1F = T1B + T1E;
		    T2G = T1z - T1A;
		    T2H = T1C - T1D;
		    T2I = T2G + T2H;
		    T2D = T1s - T1t;
		    T2E = T1v - T1w;
		    T2F = T2D + T2E;
	       }
	       cr[0] = T5 + Ts;
	       ci[0] = T10 + T13;
	       {
		    E TT, T19, T1k, T1h, T16, T1l, Tw, T1g;
		    TT = FNMS(KP951056516, TS, KP587785252 * TH);
		    T19 = FNMS(KP951056516, T18, KP587785252 * T17);
		    T1k = FMA(KP951056516, T17, KP587785252 * T18);
		    T1h = FMA(KP951056516, TH, KP587785252 * TS);
		    {
			 E T14, T15, Tu, Tv;
			 T14 = FNMS(KP250000000, T13, T10);
			 T15 = KP559016994 * (T11 - T12);
			 T16 = T14 - T15;
			 T1l = T15 + T14;
			 Tu = FNMS(KP250000000, Ts, T5);
			 Tv = KP559016994 * (Tg - Tr);
			 Tw = Tu - Tv;
			 T1g = Tv + Tu;
		    }
		    {
			 E TU, T1a, Tt, TV;
			 TU = Tw + TT;
			 T1a = T16 - T19;
			 Tt = W[4];
			 TV = W[5];
			 cr[WS(rs, 3)] = FNMS(TV, T1a, Tt * TU);
			 ci[WS(rs, 3)] = FMA(TV, TU, Tt * T1a);
		    }
		    {
			 E T1o, T1q, T1n, T1p;
			 T1o = T1g + T1h;
			 T1q = T1l - T1k;
			 T1n = W[16];
			 T1p = W[17];
			 cr[WS(rs, 9)] = FNMS(T1p, T1q, T1n * T1o);
			 ci[WS(rs, 9)] = FMA(T1p, T1o, T1n * T1q);
		    }
		    {
			 E T1c, T1e, T1b, T1d;
			 T1c = Tw - TT;
			 T1e = T19 + T16;
			 T1b = W[22];
			 T1d = W[23];
			 cr[WS(rs, 12)] = FNMS(T1d, T1e, T1b * T1c);
			 ci[WS(rs, 12)] = FMA(T1d, T1c, T1b * T1e);
		    }
		    {
			 E T1i, T1m, T1f, T1j;
			 T1i = T1g - T1h;
			 T1m = T1k + T1l;
			 T1f = W[10];
			 T1j = W[11];
			 cr[WS(rs, 6)] = FNMS(T1j, T1m, T1f * T1i);
			 ci[WS(rs, 6)] = FMA(T1j, T1i, T1f * T1m);
		    }
	       }
	       {
		    E T21, T2n, T26, T2q, T1M, T2y, T2m, T2f, T2A, T2r, T2x, T2z;
		    {
			 E T1T, T20, T24, T25;
			 T1T = T1P - T1S;
			 T20 = T1W - T1Z;
			 T21 = FMA(KP951056516, T1T, KP587785252 * T20);
			 T2n = FNMS(KP951056516, T20, KP587785252 * T1T);
			 T24 = T1u - T1x;
			 T25 = T1B - T1E;
			 T26 = FMA(KP951056516, T24, KP587785252 * T25);
			 T2q = FNMS(KP951056516, T25, KP587785252 * T24);
		    }
		    {
			 E T1G, T1K, T1L, T29, T2d, T2e;
			 T1G = KP559016994 * (T1y - T1F);
			 T1K = T1y + T1F;
			 T1L = FNMS(KP250000000, T1K, T1J);
			 T1M = T1G + T1L;
			 T2y = T1J + T1K;
			 T2m = T1L - T1G;
			 T29 = KP559016994 * (T27 - T28);
			 T2d = T27 + T28;
			 T2e = FNMS(KP250000000, T2d, T2c);
			 T2f = T29 + T2e;
			 T2A = T2c + T2d;
			 T2r = T2e - T29;
		    }
		    T2x = W[18];
		    T2z = W[19];
		    cr[WS(rs, 10)] = FNMS(T2z, T2A, T2x * T2y);
		    ci[WS(rs, 10)] = FMA(T2z, T2y, T2x * T2A);
		    {
			 E T2u, T2w, T2t, T2v;
			 T2u = T2m + T2n;
			 T2w = T2r - T2q;
			 T2t = W[24];
			 T2v = W[25];
			 cr[WS(rs, 13)] = FNMS(T2v, T2w, T2t * T2u);
			 ci[WS(rs, 13)] = FMA(T2v, T2u, T2t * T2w);
		    }
		    {
			 E T22, T2g, T1r, T23;
			 T22 = T1M - T21;
			 T2g = T26 + T2f;
			 T1r = W[0];
			 T23 = W[1];
			 cr[WS(rs, 1)] = FNMS(T23, T2g, T1r * T22);
			 ci[WS(rs, 1)] = FMA(T23, T22, T1r * T2g);
		    }
		    {
			 E T2i, T2k, T2h, T2j;
			 T2i = T1M + T21;
			 T2k = T2f - T26;
			 T2h = W[6];
			 T2j = W[7];
			 cr[WS(rs, 4)] = FNMS(T2j, T2k, T2h * T2i);
			 ci[WS(rs, 4)] = FMA(T2j, T2i, T2h * T2k);
		    }
		    {
			 E T2o, T2s, T2l, T2p;
			 T2o = T2m - T2n;
			 T2s = T2q + T2r;
			 T2l = W[12];
			 T2p = W[13];
			 cr[WS(rs, 7)] = FNMS(T2p, T2s, T2l * T2o);
			 ci[WS(rs, 7)] = FMA(T2p, T2o, T2l * T2s);
		    }
	       }
	       {
		    E T31, T3h, T36, T3k, T2K, T3g, T2Y, T2U, T3l, T39, T2B, T2L;
		    {
			 E T2Z, T30, T34, T35;
			 T2Z = T2N + T2O;
			 T30 = T2Q + T2R;
			 T31 = FNMS(KP951056516, T30, KP587785252 * T2Z);
			 T3h = FMA(KP951056516, T2Z, KP587785252 * T30);
			 T34 = T2D - T2E;
			 T35 = T2G - T2H;
			 T36 = FNMS(KP951056516, T35, KP587785252 * T34);
			 T3k = FMA(KP951056516, T34, KP587785252 * T35);
		    }
		    {
			 E T2X, T2J, T2W, T38, T2T, T37;
			 T2X = KP559016994 * (T2F - T2I);
			 T2J = T2F + T2I;
			 T2W = FNMS(KP250000000, T2J, T2C);
			 T2K = T2C + T2J;
			 T3g = T2X + T2W;
			 T2Y = T2W - T2X;
			 T38 = KP559016994 * (T2P - T2S);
			 T2T = T2P + T2S;
			 T37 = FNMS(KP250000000, T2T, T2M);
			 T2U = T2M + T2T;
			 T3l = T38 + T37;
			 T39 = T37 - T38;
		    }
		    T2B = W[8];
		    T2L = W[9];
		    cr[WS(rs, 5)] = FNMS(T2L, T2U, T2B * T2K);
		    ci[WS(rs, 5)] = FMA(T2L, T2K, T2B * T2U);
		    {
			 E T3o, T3q, T3n, T3p;
			 T3o = T3g + T3h;
			 T3q = T3l - T3k;
			 T3n = W[26];
			 T3p = W[27];
			 cr[WS(rs, 14)] = FNMS(T3p, T3q, T3n * T3o);
			 ci[WS(rs, 14)] = FMA(T3n, T3q, T3p * T3o);
		    }
		    {
			 E T32, T3a, T2V, T33;
			 T32 = T2Y - T31;
			 T3a = T36 + T39;
			 T2V = W[2];
			 T33 = W[3];
			 cr[WS(rs, 2)] = FNMS(T33, T3a, T2V * T32);
			 ci[WS(rs, 2)] = FMA(T2V, T3a, T33 * T32);
		    }
		    {
			 E T3c, T3e, T3b, T3d;
			 T3c = T2Y + T31;
			 T3e = T39 - T36;
			 T3b = W[14];
			 T3d = W[15];
			 cr[WS(rs, 8)] = FNMS(T3d, T3e, T3b * T3c);
			 ci[WS(rs, 8)] = FMA(T3b, T3e, T3d * T3c);
		    }
		    {
			 E T3i, T3m, T3f, T3j;
			 T3i = T3g - T3h;
			 T3m = T3k + T3l;
			 T3f = W[20];
			 T3j = W[21];
			 cr[WS(rs, 11)] = FNMS(T3j, T3m, T3f * T3i);
			 ci[WS(rs, 11)] = FMA(T3f, T3m, T3j * T3i);
		    }
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 15},
     {TW_NEXT, 1, 0}
};

static const hc2hc_desc desc = { 15, "hb_15", twinstr, &GENUS, {128, 56, 56, 0} };

void X(codelet_hb_15) (planner *p) {
     X(khc2hc_register) (p, hb_15, &desc);
}
#endif				/* HAVE_FMA */
