typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef short type_0[18];
typedef short type_1[23];
typedef short type_2[13];
typedef _anon1* type_3[1];
typedef short type_4[18];
typedef short type_5[23];
typedef _anon1* type_6[1];
typedef _anon1* type_7[1];
typedef short type_8[23];
typedef short type_9[18];
typedef unsigned char type_10[81];
typedef short type_11[18];
typedef short type_12[18];
typedef short type_13[23];
typedef short type_14[23];
typedef short type_15[23];
typedef short type_16[23];
typedef short type_17[23];
typedef short type_18[18];
typedef short type_19[18];
typedef short type_20[18];
typedef unsigned char type_21[3];
typedef unsigned char type_22[48];
typedef short type_23[43];
typedef short type_24[23];
typedef short type_25[18];
typedef short type_26[23];
typedef short type_27[18];
typedef _anon1* type_28[10];
typedef short type_29[23];
typedef short type_30[28];
typedef short type_31[18];
typedef short type_32[23];
typedef short* type_33[6];
typedef short type_34[13];
typedef short type_35[18];
typedef short type_36[23];
typedef short type_37[13];
typedef short type_38[53];
typedef _anon6 type_39[20];
typedef short type_40[23];
typedef _anon1* type_41[10];
typedef short type_42[18];
typedef _anon6 type_43[0];
typedef _anon0 type_44[48];
typedef short type_45[23];
typedef short type_46[18];
typedef short type_47[18];
typedef short type_48[23];
typedef _anon1* type_49[10];
typedef _anon5* type_50[8];
typedef short type_51[18];
typedef short type_52[33];
typedef _anon1* type_53[10];
typedef short type_54[18];
typedef short type_55[13];
typedef short type_56[13];
typedef short type_57[23];
typedef _anon7* type_58[64];
typedef short type_59[18];
typedef short type_60[23];
typedef _anon1* type_61[1];
typedef short type_62[18];
typedef short type_63[23];
typedef short type_64[13];
typedef _anon1* type_65[5];
typedef short type_66[13];

struct _anon0
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon1** pattbl;
	unsigned char pattblno;
	unsigned char patno;
	char pctime;
	char pctime_b;
	unsigned char scno_ce;
	unsigned char scno_ul;
	unsigned char scno_ur;
	unsigned char scno_dr;
	unsigned char scno_dl;
	unsigned char scno_sdir;
	short spdcnt;
	short spdcnt_shock;
	short spdcnt_max;
	_anon2 x_posi;
	_anon2 y_posi;
	_anon2 z_posi;
	_anon2 sx_posi;
	_anon2 sy_posi;
	_anon2 x_speed;
	_anon2 y_speed;
	_anon2 z_speed;
	_anon2 sx_speed;
	_anon2 sy_speed;
	unsigned char colliflg;
	unsigned char dummy[3];
	unsigned char actfree[48];
};

struct _anon1
{
	unsigned char cnt;
	char timer;
	_anon7* spr[64];
};

union _anon2
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon3
{
	short l;
	short h;
};

struct _anon4
{
	char b4;
	char b3;
	char b2;
	char b1;
};

struct _anon5
{
	char no;
	short* mv_tbl[6];
};

struct _anon6
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon7
{
	unsigned char cnt;
	union
	{
		_anon6 spra[20];
		_anon6 spr[0];
	};
};

_anon7 seexp00;
_anon7 seexp01;
_anon7 seexp02;
_anon7 seexp03;
_anon7 seexp04;
_anon7 stitle00;
_anon7 spress00;
_anon7 sobi00;
_anon7 sitem00;
_anon7 sitem01;
_anon7 sitem02;
_anon7 sitem03;
_anon7 sitem04;
_anon7 sitem05;
_anon7 sitem06;
_anon7 sitem07;
_anon7 skage00;
_anon7 skage01;
_anon7 skage02;
_anon7 skage03;
_anon7 skage04;
_anon7 skage05;
_anon7 skage06;
_anon7 skage07;
_anon7 skage08;
_anon7 skage09;
_anon7 Tufo00;
_anon7 Tufo01;
_anon7 Tufo02;
_anon7 Tufo03;
_anon7 Tufo04;
_anon7 Tufo05;
_anon7 Tufo06;
_anon7 Tufo07;
_anon7 Tufo08;
_anon7 Tufo09;
_anon7 sufo00;
_anon7 sufo01;
_anon7 sufo02;
_anon7 sufo03;
_anon7 sufo04;
_anon7 sufo05;
_anon7 sufo06;
_anon7 sufo07;
_anon7 sufo08;
_anon7 sufo09;
_anon7 sufo10;
_anon7 sufo11;
_anon7 sufo12;
_anon7 sufo13;
_anon7 sufo14;
_anon7 sufo15;
_anon7 sufo16;
_anon7 sufo17;
_anon7 sufo18;
_anon7 sufo19;
_anon1 mpeexpTBL0;
_anon1* mpeexp[1];
_anon1 mpitemTBL0;
_anon1 mpitemTBL1;
_anon1 mpitemTBL2;
_anon1 mpitemTBL3;
_anon1 mpitemTBL4;
_anon1* mpitem[5];
_anon1 mptlogoTBL0;
_anon1* mptlogo[1];
_anon1 mptobiTBL0;
_anon1* mptobi[1];
_anon1 mppressTBL0;
_anon1* mppress[1];
_anon1 mpkageTBL0;
_anon1 mpkageTBL1;
_anon1 mpkageTBL2;
_anon1 mpkageTBL3;
_anon1 mpkageTBL4;
_anon1 mpkageTBL5;
_anon1 mpkageTBL6;
_anon1 mpkageTBL7;
_anon1 mpkageTBL8;
_anon1 mpkageTBL9;
_anon1 mpufoxTBL0;
_anon1 mpufoxTBL1;
_anon1 mpufoxTBL2;
_anon1 mpufoxTBL3;
_anon1 mpufoxTBL4;
_anon1 mpufoxTBL5;
_anon1 mpufoxTBL6;
_anon1 mpufoxTBL7;
_anon1 mpufoxTBL8;
_anon1 mpufoxTBL9;
_anon1 tpufoxTBL0;
_anon1 tpufoxTBL1;
_anon1 tpufoxTBL2;
_anon1 tpufoxTBL3;
_anon1 tpufoxTBL4;
_anon1 tpufoxTBL5;
_anon1 tpufoxTBL6;
_anon1 tpufoxTBL7;
_anon1 tpufoxTBL8;
_anon1 tpufoxTBL9;
_anon1* tpufox[10];
_anon1 mpufoyTBL0;
_anon1 mpufoyTBL1;
_anon1 mpufoyTBL2;
_anon1 mpufoyTBL3;
_anon1 mpufoyTBL4;
_anon1 mpufoyTBL5;
_anon1 mpufoyTBL6;
_anon1 mpufoyTBL7;
_anon1 mpufoyTBL8;
_anon1 mpufoyTBL9;
short mvtbl0_0[13];
short mvtbl0_1[18];
short mvtbl0_2[18];
short mvtbl0_3[13];
short mvtbl0_4[23];
short mvtbl0_5[18];
short mvtbl1_0[23];
short mvtbl1_1[18];
short mvtbl1_2[23];
short mvtbl1_3[13];
short mvtbl1_4[18];
short mvtbl1_5[18];
short mvtbl2_0[23];
short mvtbl2_1[18];
short mvtbl2_2[23];
short mvtbl2_3[18];
short mvtbl2_4[23];
short mvtbl2_5[23];
short mvtbl3_0[18];
short mvtbl3_1[23];
short mvtbl3_2[23];
short mvtbl3_3[13];
short mvtbl3_4[18];
short mvtbl3_5[18];
short mvtbl4_0[23];
short mvtbl4_1[23];
short mvtbl4_2[13];
short mvtbl4_3[28];
short mvtbl4_4[23];
short mvtbl4_5[18];
short mvtbl5_0[23];
short mvtbl5_1[18];
short mvtbl5_2[23];
short mvtbl5_3[18];
short mvtbl5_4[13];
short mvtbl5_5[18];
short mvtbl6_0[33];
short mvtbl6_1[23];
short mvtbl6_2[23];
short mvtbl6_3[23];
short mvtbl6_4[18];
short mvtbl6_5[18];
short mvtbl7_0[18];
short mvtbl7_1[18];
short mvtbl7_2[53];
short mvtbl7_3[23];
short mvtbl7_4[23];
short mvtbl7_5[13];
_anon5 mvtbl0;
_anon5 mvtbl1;
_anon5 mvtbl2;
_anon5 mvtbl3;
_anon5 mvtbl4;
_anon5 mvtbl5;
_anon5 mvtbl6;
_anon5 mvtbl7;
unsigned char pmflag;
_anon0 actwk[48];
_anon2 spe_time;
unsigned char time_stop;
_anon1* mpufoy[10];
_anon1* mpufox[10];
short rufo_getnm;
unsigned char ufoleft;
_anon5* mvtbl_tbl[8];
short tufo_tbl[43];
unsigned char stagenm;
_anon1* mpkage[10];
unsigned char game_start;

void bara_ring(_anon0* actionwk);
void b_ring00(_anon0* actionwk);
void b_ring01(_anon0* actionwk);
void item_ring(_anon0* actionwk);
void i_ring00(_anon0* actionwk);
void i_ring01(_anon0* actionwk);
void timeufo(_anon0* actionwk);
void tufo00(_anon0* actionwk);
void tufo01(_anon0* actionwk);
void tufo02(_anon0* actionwk);
void ufo0(_anon0* actionwk);
void ufo00(_anon0* actionwk);
void ufo01(_anon0* actionwk);
void ufo02(_anon0* actionwk);
void mvtblset(_anon0* actionwk);
void ufo_frout_chk(_anon0* actionwk);
void ptset_ufo(_anon0* actionwk);
void ufo_initial();
void u_init(short cnt, _anon0* a2);
void tufo_initial();
void plkage(_anon0* actionwk);
void plkage00(_anon0* actionwk);
void plkage01(_anon0* actionwk);
void kage(_anon0* actionwk);
void kage00(_anon0* actionwk);
void kage01(_anon0* actionwk);
void press(_anon0* actionwk);
void press00(_anon0* actionwk);
void press01(_anon0* actionwk);
void title_logo(_anon0* actionwk);
void tlogo00(_anon0* actionwk);
void tlogo01(_anon0* actionwk);
void tlogo02(_anon0* actionwk);
void tlogo03(_anon0* actionwk);
void title_obi(_anon0* actionwk);
void tobi00(_anon0* actionwk);
void tobi01(_anon0* actionwk);
void tobi02(_anon0* actionwk);
void tobi03(_anon0* actionwk);
void tobi04(_anon0* actionwk);
int exp_set(_anon0** a1);
void explosion(_anon0* actionwk);
void eexp00(_anon0* actionwk);
void eexp01(_anon0* actionwk);

// 
// Start address: 0x1001500
void bara_ring(_anon0* actionwk)
{
	// Line 66, Address: 0x1001500, Func Offset: 0
	// Line 67, Address: 0x100150c, Func Offset: 0xc
	// Line 70, Address: 0x1001534, Func Offset: 0x34
	// Line 71, Address: 0x1001540, Func Offset: 0x40
	// Line 73, Address: 0x1001548, Func Offset: 0x48
	// Line 76, Address: 0x1001554, Func Offset: 0x54
	// Line 77, Address: 0x1001560, Func Offset: 0x60
	// Func End, Address: 0x1001570, Func Offset: 0x70
}

// 
// Start address: 0x1001570
void b_ring00(_anon0* actionwk)
{
	int d0;
	int d1;
	// Line 79, Address: 0x1001570, Func Offset: 0
	// Line 82, Address: 0x1001584, Func Offset: 0x14
	// Line 83, Address: 0x1001590, Func Offset: 0x20
	// Line 84, Address: 0x10015a0, Func Offset: 0x30
	// Line 85, Address: 0x10015ac, Func Offset: 0x3c
	// Line 86, Address: 0x10015c0, Func Offset: 0x50
	// Line 87, Address: 0x10015d0, Func Offset: 0x60
	// Line 88, Address: 0x10015e0, Func Offset: 0x70
	// Line 89, Address: 0x10015f0, Func Offset: 0x80
	// Line 90, Address: 0x10015fc, Func Offset: 0x8c
	// Line 91, Address: 0x100160c, Func Offset: 0x9c
	// Line 92, Address: 0x1001618, Func Offset: 0xa8
	// Line 94, Address: 0x1001634, Func Offset: 0xc4
	// Line 95, Address: 0x1001648, Func Offset: 0xd8
	// Line 96, Address: 0x1001650, Func Offset: 0xe0
	// Line 97, Address: 0x1001654, Func Offset: 0xe4
	// Line 100, Address: 0x100166c, Func Offset: 0xfc
	// Func End, Address: 0x1001684, Func Offset: 0x114
}

// 
// Start address: 0x1001690
void b_ring01(_anon0* actionwk)
{
	// Line 102, Address: 0x1001690, Func Offset: 0
	// Line 103, Address: 0x1001698, Func Offset: 0x8
	// Line 105, Address: 0x10016c8, Func Offset: 0x38
	// Line 106, Address: 0x10016e0, Func Offset: 0x50
	// Line 107, Address: 0x10016f8, Func Offset: 0x68
	// Line 109, Address: 0x1001714, Func Offset: 0x84
	// Line 110, Address: 0x1001728, Func Offset: 0x98
	// Line 113, Address: 0x1001730, Func Offset: 0xa0
	// Line 114, Address: 0x100173c, Func Offset: 0xac
	// Line 116, Address: 0x1001750, Func Offset: 0xc0
	// Func End, Address: 0x100175c, Func Offset: 0xcc
}

// 
// Start address: 0x1001760
void item_ring(_anon0* actionwk)
{
	// Line 118, Address: 0x1001760, Func Offset: 0
	// Line 119, Address: 0x100176c, Func Offset: 0xc
	// Line 122, Address: 0x1001794, Func Offset: 0x34
	// Line 123, Address: 0x10017a0, Func Offset: 0x40
	// Line 125, Address: 0x10017a8, Func Offset: 0x48
	// Line 128, Address: 0x10017b4, Func Offset: 0x54
	// Line 129, Address: 0x10017c0, Func Offset: 0x60
	// Func End, Address: 0x10017d0, Func Offset: 0x70
}

// 
// Start address: 0x10017d0
void i_ring00(_anon0* actionwk)
{
	// Line 131, Address: 0x10017d0, Func Offset: 0
	// Line 132, Address: 0x10017dc, Func Offset: 0xc
	// Line 133, Address: 0x10017e8, Func Offset: 0x18
	// Line 134, Address: 0x10017f8, Func Offset: 0x28
	// Line 135, Address: 0x1001808, Func Offset: 0x38
	// Line 136, Address: 0x100181c, Func Offset: 0x4c
	// Line 137, Address: 0x100182c, Func Offset: 0x5c
	// Line 138, Address: 0x1001838, Func Offset: 0x68
	// Line 139, Address: 0x1001844, Func Offset: 0x74
	// Line 140, Address: 0x1001850, Func Offset: 0x80
	// Func End, Address: 0x1001860, Func Offset: 0x90
}

// 
// Start address: 0x1001860
void i_ring01(_anon0* actionwk)
{
	// Line 142, Address: 0x1001860, Func Offset: 0
	// Line 143, Address: 0x1001868, Func Offset: 0x8
	// Line 145, Address: 0x1001898, Func Offset: 0x38
	// Line 146, Address: 0x10018b0, Func Offset: 0x50
	// Line 147, Address: 0x10018c4, Func Offset: 0x64
	// Func End, Address: 0x10018d0, Func Offset: 0x70
}

// 
// Start address: 0x10018d0
void timeufo(_anon0* actionwk)
{
	// Line 149, Address: 0x10018d0, Func Offset: 0
	// Line 150, Address: 0x10018dc, Func Offset: 0xc
	// Line 153, Address: 0x1001910, Func Offset: 0x40
	// Line 155, Address: 0x100191c, Func Offset: 0x4c
	// Line 156, Address: 0x1001928, Func Offset: 0x58
	// Line 158, Address: 0x1001930, Func Offset: 0x60
	// Line 161, Address: 0x100193c, Func Offset: 0x6c
	// Line 162, Address: 0x100194c, Func Offset: 0x7c
	// Line 163, Address: 0x100195c, Func Offset: 0x8c
	// Line 165, Address: 0x100196c, Func Offset: 0x9c
	// Line 166, Address: 0x100197c, Func Offset: 0xac
	// Line 168, Address: 0x100198c, Func Offset: 0xbc
	// Func End, Address: 0x100199c, Func Offset: 0xcc
}

// 
// Start address: 0x10019a0
void tufo00(_anon0* actionwk)
{
	// Line 170, Address: 0x10019a0, Func Offset: 0
	// Line 171, Address: 0x10019ac, Func Offset: 0xc
	// Line 172, Address: 0x10019b8, Func Offset: 0x18
	// Line 174, Address: 0x10019c4, Func Offset: 0x24
	// Line 175, Address: 0x10019d4, Func Offset: 0x34
	// Line 176, Address: 0x10019e4, Func Offset: 0x44
	// Line 177, Address: 0x10019f4, Func Offset: 0x54
	// Line 178, Address: 0x1001a04, Func Offset: 0x64
	// Line 179, Address: 0x1001a10, Func Offset: 0x70
	// Line 180, Address: 0x1001a1c, Func Offset: 0x7c
	// Func End, Address: 0x1001a2c, Func Offset: 0x8c
}

// 
// Start address: 0x1001a30
void tufo01(_anon0* actionwk)
{
	unsigned short* mcnt;
	_anon0* a1;
	unsigned char d0;
	// Line 182, Address: 0x1001a30, Func Offset: 0
	// Line 187, Address: 0x1001a48, Func Offset: 0x18
	// Line 189, Address: 0x1001a50, Func Offset: 0x20
	// Line 190, Address: 0x1001a68, Func Offset: 0x38
	// Line 191, Address: 0x1001a80, Func Offset: 0x50
	// Line 193, Address: 0x1001a9c, Func Offset: 0x6c
	// Line 196, Address: 0x1001aa8, Func Offset: 0x78
	// Line 197, Address: 0x1001ab4, Func Offset: 0x84
	// Line 198, Address: 0x1001ac0, Func Offset: 0x90
	// Line 199, Address: 0x1001acc, Func Offset: 0x9c
	// Line 200, Address: 0x1001adc, Func Offset: 0xac
	// Line 201, Address: 0x1001aec, Func Offset: 0xbc
	// Line 202, Address: 0x1001af8, Func Offset: 0xc8
	// Line 203, Address: 0x1001b1c, Func Offset: 0xec
	// Line 204, Address: 0x1001b28, Func Offset: 0xf8
	// Line 205, Address: 0x1001b34, Func Offset: 0x104
	// Line 206, Address: 0x1001b48, Func Offset: 0x118
	// Line 207, Address: 0x1001b50, Func Offset: 0x120
	// Line 208, Address: 0x1001b60, Func Offset: 0x130
	// Line 209, Address: 0x1001b74, Func Offset: 0x144
	// Line 210, Address: 0x1001b7c, Func Offset: 0x14c
	// Line 211, Address: 0x1001b84, Func Offset: 0x154
	// Line 212, Address: 0x1001b8c, Func Offset: 0x15c
	// Line 213, Address: 0x1001b98, Func Offset: 0x168
	// Line 214, Address: 0x1001ba4, Func Offset: 0x174
	// Func End, Address: 0x1001bc0, Func Offset: 0x190
}

// 
// Start address: 0x1001bc0
void tufo02(_anon0* actionwk)
{
	unsigned short* tim;
	unsigned short d0;
	_anon0* a1;
	// Line 216, Address: 0x1001bc0, Func Offset: 0
	// Line 220, Address: 0x1001bd4, Func Offset: 0x14
	// Line 222, Address: 0x1001bdc, Func Offset: 0x1c
	// Line 223, Address: 0x1001bec, Func Offset: 0x2c
	// Line 225, Address: 0x1001c10, Func Offset: 0x50
	// Line 226, Address: 0x1001c20, Func Offset: 0x60
	// Line 227, Address: 0x1001c30, Func Offset: 0x70
	// Line 229, Address: 0x1001c5c, Func Offset: 0x9c
	// Line 231, Address: 0x1001c74, Func Offset: 0xb4
	// Line 232, Address: 0x1001c88, Func Offset: 0xc8
	// Line 233, Address: 0x1001c94, Func Offset: 0xd4
	// Line 234, Address: 0x1001cb8, Func Offset: 0xf8
	// Line 235, Address: 0x1001cc8, Func Offset: 0x108
	// Line 236, Address: 0x1001cdc, Func Offset: 0x11c
	// Line 238, Address: 0x1001cfc, Func Offset: 0x13c
	// Line 240, Address: 0x1001d1c, Func Offset: 0x15c
	// Func End, Address: 0x1001d34, Func Offset: 0x174
}

// 
// Start address: 0x1001d40
void ufo0(_anon0* actionwk)
{
	// Line 242, Address: 0x1001d40, Func Offset: 0
	// Line 244, Address: 0x1001d4c, Func Offset: 0xc
	// Line 248, Address: 0x1001d80, Func Offset: 0x40
	// Line 251, Address: 0x1001d8c, Func Offset: 0x4c
	// Line 252, Address: 0x1001d98, Func Offset: 0x58
	// Line 255, Address: 0x1001da0, Func Offset: 0x60
	// Line 258, Address: 0x1001dac, Func Offset: 0x6c
	// Line 259, Address: 0x1001dbc, Func Offset: 0x7c
	// Line 260, Address: 0x1001dcc, Func Offset: 0x8c
	// Line 262, Address: 0x1001ddc, Func Offset: 0x9c
	// Line 263, Address: 0x1001dec, Func Offset: 0xac
	// Line 266, Address: 0x1001dfc, Func Offset: 0xbc
	// Func End, Address: 0x1001e0c, Func Offset: 0xcc
}

// 
// Start address: 0x1001e10
void ufo00(_anon0* actionwk)
{
	// Line 268, Address: 0x1001e10, Func Offset: 0
	// Line 269, Address: 0x1001e1c, Func Offset: 0xc
	// Line 271, Address: 0x1001e28, Func Offset: 0x18
	// Line 273, Address: 0x1001e34, Func Offset: 0x24
	// Line 274, Address: 0x1001e44, Func Offset: 0x34
	// Line 276, Address: 0x1001e68, Func Offset: 0x58
	// Line 277, Address: 0x1001e78, Func Offset: 0x68
	// Line 278, Address: 0x1001e88, Func Offset: 0x78
	// Line 279, Address: 0x1001e90, Func Offset: 0x80
	// Line 281, Address: 0x1001ea4, Func Offset: 0x94
	// Line 282, Address: 0x1001eb0, Func Offset: 0xa0
	// Line 283, Address: 0x1001ec0, Func Offset: 0xb0
	// Func End, Address: 0x1001ed0, Func Offset: 0xc0
}

// 
// Start address: 0x1001ed0
void ufo01(_anon0* actionwk)
{
	unsigned short* mcnt;
	_anon0* a1;
	// Line 285, Address: 0x1001ed0, Func Offset: 0
	// Line 289, Address: 0x1001ee4, Func Offset: 0x14
	// Line 290, Address: 0x1001eec, Func Offset: 0x1c
	// Line 291, Address: 0x1001f04, Func Offset: 0x34
	// Line 292, Address: 0x1001f1c, Func Offset: 0x4c
	// Line 294, Address: 0x1001f38, Func Offset: 0x68
	// Line 297, Address: 0x1001f44, Func Offset: 0x74
	// Line 298, Address: 0x1001f50, Func Offset: 0x80
	// Line 299, Address: 0x1001f5c, Func Offset: 0x8c
	// Line 300, Address: 0x1001f68, Func Offset: 0x98
	// Line 301, Address: 0x1001f78, Func Offset: 0xa8
	// Line 303, Address: 0x1001f9c, Func Offset: 0xcc
	// Line 304, Address: 0x1001fa4, Func Offset: 0xd4
	// Line 305, Address: 0x1001fb0, Func Offset: 0xe0
	// Line 306, Address: 0x1001fd4, Func Offset: 0x104
	// Line 307, Address: 0x1001fe0, Func Offset: 0x110
	// Line 308, Address: 0x1001fec, Func Offset: 0x11c
	// Line 309, Address: 0x1002004, Func Offset: 0x134
	// Line 311, Address: 0x1002014, Func Offset: 0x144
	// Line 312, Address: 0x100201c, Func Offset: 0x14c
	// Line 313, Address: 0x1002024, Func Offset: 0x154
	// Line 314, Address: 0x1002030, Func Offset: 0x160
	// Line 315, Address: 0x100203c, Func Offset: 0x16c
	// Line 317, Address: 0x1002048, Func Offset: 0x178
	// Line 322, Address: 0x1002088, Func Offset: 0x1b8
	// Line 323, Address: 0x100209c, Func Offset: 0x1cc
	// Line 324, Address: 0x10020bc, Func Offset: 0x1ec
	// Line 326, Address: 0x10020c4, Func Offset: 0x1f4
	// Line 327, Address: 0x10020d0, Func Offset: 0x200
	// Line 330, Address: 0x10020dc, Func Offset: 0x20c
	// Func End, Address: 0x10020f4, Func Offset: 0x224
}

// 
// Start address: 0x1002100
void ufo02(_anon0* actionwk)
{
	unsigned short* tim;
	unsigned short d0;
	_anon0* a1;
	// Line 332, Address: 0x1002100, Func Offset: 0
	// Line 336, Address: 0x1002114, Func Offset: 0x14
	// Line 338, Address: 0x100211c, Func Offset: 0x1c
	// Line 339, Address: 0x100212c, Func Offset: 0x2c
	// Line 341, Address: 0x1002150, Func Offset: 0x50
	// Line 342, Address: 0x1002160, Func Offset: 0x60
	// Line 343, Address: 0x1002170, Func Offset: 0x70
	// Line 345, Address: 0x100219c, Func Offset: 0x9c
	// Line 347, Address: 0x10021b4, Func Offset: 0xb4
	// Line 348, Address: 0x10021c8, Func Offset: 0xc8
	// Line 349, Address: 0x10021d4, Func Offset: 0xd4
	// Line 350, Address: 0x10021f8, Func Offset: 0xf8
	// Line 351, Address: 0x1002208, Func Offset: 0x108
	// Line 352, Address: 0x100221c, Func Offset: 0x11c
	// Line 354, Address: 0x100223c, Func Offset: 0x13c
	// Line 355, Address: 0x100225c, Func Offset: 0x15c
	// Func End, Address: 0x1002274, Func Offset: 0x174
}

// 
// Start address: 0x1002280
void mvtblset(_anon0* actionwk)
{
	short* a1;
	short d0;
	short d1;
	short d2;
	short d3;
	short mcnt;
	int d2l;
	int d3l;
	// Line 357, Address: 0x1002280, Func Offset: 0
	// Line 364, Address: 0x10022a8, Func Offset: 0x28
	// Line 366, Address: 0x10022b0, Func Offset: 0x30
	// Line 367, Address: 0x10022cc, Func Offset: 0x4c
	// Line 369, Address: 0x10022dc, Func Offset: 0x5c
	// Line 371, Address: 0x10022ec, Func Offset: 0x6c
	// Line 373, Address: 0x10022f4, Func Offset: 0x74
	// Line 374, Address: 0x1002308, Func Offset: 0x88
	// Line 375, Address: 0x100231c, Func Offset: 0x9c
	// Line 376, Address: 0x1002324, Func Offset: 0xa4
	// Line 377, Address: 0x100232c, Func Offset: 0xac
	// Line 378, Address: 0x1002340, Func Offset: 0xc0
	// Line 379, Address: 0x1002354, Func Offset: 0xd4
	// Line 380, Address: 0x1002360, Func Offset: 0xe0
	// Line 381, Address: 0x100236c, Func Offset: 0xec
	// Line 382, Address: 0x1002374, Func Offset: 0xf4
	// Line 383, Address: 0x100237c, Func Offset: 0xfc
	// Line 384, Address: 0x1002380, Func Offset: 0x100
	// Line 385, Address: 0x1002384, Func Offset: 0x104
	// Line 386, Address: 0x10023a0, Func Offset: 0x120
	// Line 387, Address: 0x10023bc, Func Offset: 0x13c
	// Line 388, Address: 0x10023c0, Func Offset: 0x140
	// Line 389, Address: 0x10023c4, Func Offset: 0x144
	// Line 390, Address: 0x10023cc, Func Offset: 0x14c
	// Line 391, Address: 0x10023d4, Func Offset: 0x154
	// Line 392, Address: 0x10023dc, Func Offset: 0x15c
	// Func End, Address: 0x1002408, Func Offset: 0x188
}

// 
// Start address: 0x1002410
void ufo_frout_chk(_anon0* actionwk)
{
	short d0;
	// Line 397, Address: 0x1002410, Func Offset: 0
	// Line 400, Address: 0x100241c, Func Offset: 0xc
	// Line 401, Address: 0x100242c, Func Offset: 0x1c
	// Line 402, Address: 0x100243c, Func Offset: 0x2c
	// Line 404, Address: 0x1002450, Func Offset: 0x40
	// Line 405, Address: 0x1002460, Func Offset: 0x50
	// Line 407, Address: 0x1002468, Func Offset: 0x58
	// Line 408, Address: 0x1002478, Func Offset: 0x68
	// Line 410, Address: 0x100248c, Func Offset: 0x7c
	// Line 411, Address: 0x100249c, Func Offset: 0x8c
	// Line 413, Address: 0x10024a4, Func Offset: 0x94
	// Line 415, Address: 0x10024b8, Func Offset: 0xa8
	// Line 416, Address: 0x10024c8, Func Offset: 0xb8
	// Func End, Address: 0x10024d8, Func Offset: 0xc8
}

// 
// Start address: 0x10024e0
void ptset_ufo(_anon0* actionwk)
{
	unsigned char tbl[81];
	_anon0* a6;
	unsigned short d0;
	unsigned short d1;
	unsigned short d3;
	unsigned short d4;
	unsigned short d5;
	unsigned short d6;
	int d0l;
	unsigned char d1b;
	unsigned char d2b;
	// Line 418, Address: 0x10024e0, Func Offset: 0
	// Line 419, Address: 0x100250c, Func Offset: 0x2c
	// Line 432, Address: 0x1002538, Func Offset: 0x58
	// Line 434, Address: 0x1002540, Func Offset: 0x60
	// Line 435, Address: 0x1002548, Func Offset: 0x68
	// Line 436, Address: 0x1002550, Func Offset: 0x70
	// Line 437, Address: 0x100255c, Func Offset: 0x7c
	// Line 438, Address: 0x1002568, Func Offset: 0x88
	// Line 439, Address: 0x1002598, Func Offset: 0xb8
	// Line 440, Address: 0x10025a0, Func Offset: 0xc0
	// Line 441, Address: 0x10025a8, Func Offset: 0xc8
	// Line 442, Address: 0x10025b4, Func Offset: 0xd4
	// Line 443, Address: 0x10025c0, Func Offset: 0xe0
	// Line 444, Address: 0x10025f4, Func Offset: 0x114
	// Line 447, Address: 0x1002604, Func Offset: 0x124
	// Line 448, Address: 0x1002614, Func Offset: 0x134
	// Line 449, Address: 0x1002618, Func Offset: 0x138
	// Line 451, Address: 0x1002628, Func Offset: 0x148
	// Line 452, Address: 0x1002648, Func Offset: 0x168
	// Line 453, Address: 0x1002658, Func Offset: 0x178
	// Line 464, Address: 0x100266c, Func Offset: 0x18c
	// Func End, Address: 0x100269c, Func Offset: 0x1bc
}

// 
// Start address: 0x10026a0
void ufo_initial()
{
	_anon5* a1;
	_anon0* a2;
	char d7;
	short cnt;
	// Line 480, Address: 0x10026a0, Func Offset: 0
	// Line 487, Address: 0x10026b8, Func Offset: 0x18
	// Line 488, Address: 0x10026c0, Func Offset: 0x20
	// Line 489, Address: 0x10026e0, Func Offset: 0x40
	// Line 490, Address: 0x100270c, Func Offset: 0x6c
	// Line 492, Address: 0x1002714, Func Offset: 0x74
	// Line 493, Address: 0x1002718, Func Offset: 0x78
	// Line 496, Address: 0x1002720, Func Offset: 0x80
	// Line 497, Address: 0x1002740, Func Offset: 0xa0
	// Line 498, Address: 0x100274c, Func Offset: 0xac
	// Line 499, Address: 0x1002754, Func Offset: 0xb4
	// Func End, Address: 0x1002774, Func Offset: 0xd4
}

// 
// Start address: 0x1002780
void u_init(short cnt, _anon0* a2)
{
	_anon0* a4;
	unsigned short dummy;
	short* a1tbl;
	// Line 501, Address: 0x1002780, Func Offset: 0
	// Line 506, Address: 0x1002798, Func Offset: 0x18
	// Line 508, Address: 0x10027d0, Func Offset: 0x50
	// Line 509, Address: 0x1002800, Func Offset: 0x80
	// Line 510, Address: 0x1002820, Func Offset: 0xa0
	// Line 511, Address: 0x100282c, Func Offset: 0xac
	// Line 512, Address: 0x1002844, Func Offset: 0xc4
	// Line 513, Address: 0x100285c, Func Offset: 0xdc
	// Line 514, Address: 0x1002860, Func Offset: 0xe0
	// Line 515, Address: 0x1002868, Func Offset: 0xe8
	// Line 516, Address: 0x1002870, Func Offset: 0xf0
	// Line 517, Address: 0x1002884, Func Offset: 0x104
	// Line 518, Address: 0x100288c, Func Offset: 0x10c
	// Line 519, Address: 0x10028bc, Func Offset: 0x13c
	// Func End, Address: 0x10028d4, Func Offset: 0x154
}

// 
// Start address: 0x10028e0
void tufo_initial()
{
	_anon0* a2;
	_anon0* a4;
	short* a3;
	short dummy;
	// Line 521, Address: 0x10028e0, Func Offset: 0
	// Line 525, Address: 0x10028f4, Func Offset: 0x14
	// Line 526, Address: 0x1002908, Func Offset: 0x28
	// Line 527, Address: 0x1002910, Func Offset: 0x30
	// Line 528, Address: 0x1002918, Func Offset: 0x38
	// Line 529, Address: 0x1002924, Func Offset: 0x44
	// Line 530, Address: 0x100295c, Func Offset: 0x7c
	// Line 532, Address: 0x1002980, Func Offset: 0xa0
	// Line 534, Address: 0x1002988, Func Offset: 0xa8
	// Line 535, Address: 0x1002998, Func Offset: 0xb8
	// Line 536, Address: 0x10029a8, Func Offset: 0xc8
	// Line 537, Address: 0x10029ac, Func Offset: 0xcc
	// Line 538, Address: 0x10029b0, Func Offset: 0xd0
	// Line 539, Address: 0x10029b4, Func Offset: 0xd4
	// Line 540, Address: 0x10029c8, Func Offset: 0xe8
	// Line 541, Address: 0x10029d0, Func Offset: 0xf0
	// Line 542, Address: 0x10029fc, Func Offset: 0x11c
	// Func End, Address: 0x1002a18, Func Offset: 0x138
}

// 
// Start address: 0x1002a20
void plkage(_anon0* actionwk)
{
	// Line 544, Address: 0x1002a20, Func Offset: 0
	// Line 545, Address: 0x1002a2c, Func Offset: 0xc
	// Line 548, Address: 0x1002a54, Func Offset: 0x34
	// Line 550, Address: 0x1002a60, Func Offset: 0x40
	// Line 553, Address: 0x1002a6c, Func Offset: 0x4c
	// Line 554, Address: 0x1002a78, Func Offset: 0x58
	// Func End, Address: 0x1002a88, Func Offset: 0x68
}

// 
// Start address: 0x1002a90
void plkage00(_anon0* actionwk)
{
	// Line 556, Address: 0x1002a90, Func Offset: 0
	// Line 557, Address: 0x1002a9c, Func Offset: 0xc
	// Line 558, Address: 0x1002aa8, Func Offset: 0x18
	// Line 559, Address: 0x1002ab8, Func Offset: 0x28
	// Line 560, Address: 0x1002ac4, Func Offset: 0x34
	// Line 561, Address: 0x1002ad8, Func Offset: 0x48
	// Line 562, Address: 0x1002ae8, Func Offset: 0x58
	// Func End, Address: 0x1002af8, Func Offset: 0x68
}

// 
// Start address: 0x1002b00
void plkage01(_anon0* actionwk)
{
	_anon0* a1;
	// Line 564, Address: 0x1002b00, Func Offset: 0
	// Line 567, Address: 0x1002b10, Func Offset: 0x10
	// Line 568, Address: 0x1002b18, Func Offset: 0x18
	// Line 569, Address: 0x1002b24, Func Offset: 0x24
	// Line 570, Address: 0x1002b30, Func Offset: 0x30
	// Line 571, Address: 0x1002b40, Func Offset: 0x40
	// Line 572, Address: 0x1002b4c, Func Offset: 0x4c
	// Func End, Address: 0x1002b60, Func Offset: 0x60
}

// 
// Start address: 0x1002b60
void kage(_anon0* actionwk)
{
	// Line 574, Address: 0x1002b60, Func Offset: 0
	// Line 575, Address: 0x1002b6c, Func Offset: 0xc
	// Line 578, Address: 0x1002b94, Func Offset: 0x34
	// Line 580, Address: 0x1002ba0, Func Offset: 0x40
	// Line 583, Address: 0x1002bac, Func Offset: 0x4c
	// Line 584, Address: 0x1002bb8, Func Offset: 0x58
	// Line 585, Address: 0x1002bc4, Func Offset: 0x64
	// Func End, Address: 0x1002bd4, Func Offset: 0x74
}

// 
// Start address: 0x1002be0
void kage00(_anon0* actionwk)
{
	// Line 587, Address: 0x1002be0, Func Offset: 0
	// Line 588, Address: 0x1002bec, Func Offset: 0xc
	// Line 589, Address: 0x1002bf8, Func Offset: 0x18
	// Line 590, Address: 0x1002c08, Func Offset: 0x28
	// Line 591, Address: 0x1002c10, Func Offset: 0x30
	// Line 592, Address: 0x1002c24, Func Offset: 0x44
	// Line 593, Address: 0x1002c34, Func Offset: 0x54
	// Func End, Address: 0x1002c44, Func Offset: 0x64
}

// 
// Start address: 0x1002c50
void kage01(_anon0* actionwk)
{
	_anon0* a1;
	// Line 595, Address: 0x1002c50, Func Offset: 0
	// Line 598, Address: 0x1002c60, Func Offset: 0x10
	// Line 599, Address: 0x1002c84, Func Offset: 0x34
	// Line 600, Address: 0x1002c90, Func Offset: 0x40
	// Line 601, Address: 0x1002c9c, Func Offset: 0x4c
	// Line 602, Address: 0x1002ca8, Func Offset: 0x58
	// Line 604, Address: 0x1002cc0, Func Offset: 0x70
	// Line 607, Address: 0x1002ccc, Func Offset: 0x7c
	// Line 608, Address: 0x1002cdc, Func Offset: 0x8c
	// Line 609, Address: 0x1002ce8, Func Offset: 0x98
	// Line 610, Address: 0x1002cf4, Func Offset: 0xa4
	// Func End, Address: 0x1002d08, Func Offset: 0xb8
}

// 
// Start address: 0x1002d10
void press(_anon0* actionwk)
{
	// Line 612, Address: 0x1002d10, Func Offset: 0
	// Line 613, Address: 0x1002d1c, Func Offset: 0xc
	// Line 616, Address: 0x1002d44, Func Offset: 0x34
	// Line 618, Address: 0x1002d50, Func Offset: 0x40
	// Line 621, Address: 0x1002d5c, Func Offset: 0x4c
	// Line 622, Address: 0x1002d68, Func Offset: 0x58
	// Func End, Address: 0x1002d78, Func Offset: 0x68
}

// 
// Start address: 0x1002d80
void press00(_anon0* actionwk)
{
	// Line 624, Address: 0x1002d80, Func Offset: 0
	// Line 625, Address: 0x1002d8c, Func Offset: 0xc
	// Line 626, Address: 0x1002d98, Func Offset: 0x18
	// Line 627, Address: 0x1002da8, Func Offset: 0x28
	// Line 628, Address: 0x1002db4, Func Offset: 0x34
	// Line 629, Address: 0x1002dc0, Func Offset: 0x40
	// Line 630, Address: 0x1002dd0, Func Offset: 0x50
	// Line 631, Address: 0x1002de0, Func Offset: 0x60
	// Func End, Address: 0x1002df0, Func Offset: 0x70
}

// 
// Start address: 0x1002df0
void press01(_anon0* actionwk)
{
	// Line 633, Address: 0x1002df0, Func Offset: 0
	// Line 634, Address: 0x1002df8, Func Offset: 0x8
	// Line 635, Address: 0x1002e08, Func Offset: 0x18
	// Line 636, Address: 0x1002e18, Func Offset: 0x28
	// Line 637, Address: 0x1002e30, Func Offset: 0x40
	// Line 638, Address: 0x1002e40, Func Offset: 0x50
	// Func End, Address: 0x1002e4c, Func Offset: 0x5c
}

// 
// Start address: 0x1002e50
void title_logo(_anon0* actionwk)
{
	// Line 640, Address: 0x1002e50, Func Offset: 0
	// Line 641, Address: 0x1002e5c, Func Offset: 0xc
	// Line 644, Address: 0x1002e9c, Func Offset: 0x4c
	// Line 645, Address: 0x1002ea8, Func Offset: 0x58
	// Line 647, Address: 0x1002eb0, Func Offset: 0x60
	// Line 648, Address: 0x1002ebc, Func Offset: 0x6c
	// Line 650, Address: 0x1002ec4, Func Offset: 0x74
	// Line 651, Address: 0x1002ed0, Func Offset: 0x80
	// Line 653, Address: 0x1002ed8, Func Offset: 0x88
	// Line 656, Address: 0x1002ee4, Func Offset: 0x94
	// Line 657, Address: 0x1002ef0, Func Offset: 0xa0
	// Func End, Address: 0x1002f00, Func Offset: 0xb0
}

// 
// Start address: 0x1002f00
void tlogo00(_anon0* actionwk)
{
	// Line 659, Address: 0x1002f00, Func Offset: 0
	// Line 660, Address: 0x1002f0c, Func Offset: 0xc
	// Line 661, Address: 0x1002f18, Func Offset: 0x18
	// Line 662, Address: 0x1002f28, Func Offset: 0x28
	// Line 663, Address: 0x1002f34, Func Offset: 0x34
	// Line 664, Address: 0x1002f40, Func Offset: 0x40
	// Line 665, Address: 0x1002f50, Func Offset: 0x50
	// Line 666, Address: 0x1002f60, Func Offset: 0x60
	// Func End, Address: 0x1002f70, Func Offset: 0x70
}

// 
// Start address: 0x1002f70
void tlogo01(_anon0* actionwk)
{
	// Line 668, Address: 0x1002f70, Func Offset: 0
	// Line 669, Address: 0x1002f78, Func Offset: 0x8
	// Line 670, Address: 0x1002f88, Func Offset: 0x18
	// Line 671, Address: 0x1002fa4, Func Offset: 0x34
	// Line 672, Address: 0x1002fb0, Func Offset: 0x40
	// Line 673, Address: 0x1002fbc, Func Offset: 0x4c
	// Line 674, Address: 0x1002fcc, Func Offset: 0x5c
	// Func End, Address: 0x1002fd8, Func Offset: 0x68
}

// 
// Start address: 0x1002fe0
void tlogo02(_anon0* actionwk)
{
	// Line 676, Address: 0x1002fe0, Func Offset: 0
	// Line 677, Address: 0x1002fe8, Func Offset: 0x8
	// Line 678, Address: 0x1003004, Func Offset: 0x24
	// Line 679, Address: 0x1003014, Func Offset: 0x34
	// Func End, Address: 0x1003020, Func Offset: 0x40
}

// 
// Start address: 0x1003020
void tlogo03(_anon0* actionwk)
{
	// Line 681, Address: 0x1003020, Func Offset: 0
	// Line 682, Address: 0x1003028, Func Offset: 0x8
	// Line 683, Address: 0x1003038, Func Offset: 0x18
	// Line 684, Address: 0x1003054, Func Offset: 0x34
	// Line 685, Address: 0x1003064, Func Offset: 0x44
	// Func End, Address: 0x1003070, Func Offset: 0x50
}

// 
// Start address: 0x1003070
void title_obi(_anon0* actionwk)
{
	// Line 687, Address: 0x1003070, Func Offset: 0
	// Line 688, Address: 0x100307c, Func Offset: 0xc
	// Line 691, Address: 0x10030c8, Func Offset: 0x58
	// Line 693, Address: 0x10030d4, Func Offset: 0x64
	// Line 694, Address: 0x10030e0, Func Offset: 0x70
	// Line 696, Address: 0x10030e8, Func Offset: 0x78
	// Line 697, Address: 0x10030f4, Func Offset: 0x84
	// Line 699, Address: 0x10030fc, Func Offset: 0x8c
	// Line 700, Address: 0x1003108, Func Offset: 0x98
	// Line 702, Address: 0x1003110, Func Offset: 0xa0
	// Line 705, Address: 0x100311c, Func Offset: 0xac
	// Line 706, Address: 0x1003128, Func Offset: 0xb8
	// Func End, Address: 0x1003138, Func Offset: 0xc8
}

// 
// Start address: 0x1003140
void tobi00(_anon0* actionwk)
{
	// Line 708, Address: 0x1003140, Func Offset: 0
	// Line 709, Address: 0x100314c, Func Offset: 0xc
	// Line 710, Address: 0x1003158, Func Offset: 0x18
	// Line 711, Address: 0x1003168, Func Offset: 0x28
	// Line 712, Address: 0x1003174, Func Offset: 0x34
	// Line 713, Address: 0x1003180, Func Offset: 0x40
	// Line 714, Address: 0x1003190, Func Offset: 0x50
	// Line 715, Address: 0x10031a0, Func Offset: 0x60
	// Func End, Address: 0x10031b0, Func Offset: 0x70
}

// 
// Start address: 0x10031b0
void tobi01(_anon0* actionwk)
{
	// Line 717, Address: 0x10031b0, Func Offset: 0
	// Line 718, Address: 0x10031b8, Func Offset: 0x8
	// Line 719, Address: 0x10031c8, Func Offset: 0x18
	// Line 720, Address: 0x10031e4, Func Offset: 0x34
	// Line 721, Address: 0x10031f0, Func Offset: 0x40
	// Line 722, Address: 0x10031fc, Func Offset: 0x4c
	// Line 723, Address: 0x100320c, Func Offset: 0x5c
	// Func End, Address: 0x1003218, Func Offset: 0x68
}

// 
// Start address: 0x1003220
void tobi02(_anon0* actionwk)
{
	// Line 725, Address: 0x1003220, Func Offset: 0
	// Line 726, Address: 0x1003228, Func Offset: 0x8
	// Line 728, Address: 0x1003258, Func Offset: 0x38
	// Line 729, Address: 0x1003270, Func Offset: 0x50
	// Line 730, Address: 0x100327c, Func Offset: 0x5c
	// Func End, Address: 0x1003288, Func Offset: 0x68
}

// 
// Start address: 0x1003290
void tobi03(_anon0* actionwk)
{
	// Line 732, Address: 0x1003290, Func Offset: 0
	// Line 733, Address: 0x1003298, Func Offset: 0x8
	// Line 734, Address: 0x10032a8, Func Offset: 0x18
	// Line 735, Address: 0x10032c0, Func Offset: 0x30
	// Line 736, Address: 0x10032cc, Func Offset: 0x3c
	// Line 737, Address: 0x10032dc, Func Offset: 0x4c
	// Line 738, Address: 0x10032ec, Func Offset: 0x5c
	// Line 739, Address: 0x10032f8, Func Offset: 0x68
	// Func End, Address: 0x1003304, Func Offset: 0x74
}

// 
// Start address: 0x1003310
void tobi04(_anon0* actionwk)
{
	// Line 741, Address: 0x1003310, Func Offset: 0
	// Line 742, Address: 0x1003318, Func Offset: 0x8
	// Line 743, Address: 0x1003334, Func Offset: 0x24
	// Line 744, Address: 0x1003344, Func Offset: 0x34
	// Line 745, Address: 0x100334c, Func Offset: 0x3c
	// Func End, Address: 0x1003358, Func Offset: 0x48
}

// 
// Start address: 0x1003360
int exp_set(_anon0** a1)
{
	short d7;
	_anon0* pActwk;
	// Line 747, Address: 0x1003360, Func Offset: 0
	// Line 751, Address: 0x1003370, Func Offset: 0x10
	// Line 752, Address: 0x1003378, Func Offset: 0x18
	// Line 753, Address: 0x1003384, Func Offset: 0x24
	// Line 755, Address: 0x100338c, Func Offset: 0x2c
	// Line 757, Address: 0x100339c, Func Offset: 0x3c
	// Line 758, Address: 0x10033a4, Func Offset: 0x44
	// Line 760, Address: 0x10033b0, Func Offset: 0x50
	// Line 761, Address: 0x10033b4, Func Offset: 0x54
	// Line 762, Address: 0x10033c0, Func Offset: 0x60
	// Line 763, Address: 0x10033c8, Func Offset: 0x68
	// Line 764, Address: 0x10033cc, Func Offset: 0x6c
	// Func End, Address: 0x10033e0, Func Offset: 0x80
}

// 
// Start address: 0x10033e0
void explosion(_anon0* actionwk)
{
	// Line 766, Address: 0x10033e0, Func Offset: 0
	// Line 767, Address: 0x10033ec, Func Offset: 0xc
	// Line 770, Address: 0x1003414, Func Offset: 0x34
	// Line 772, Address: 0x1003420, Func Offset: 0x40
	// Line 775, Address: 0x100342c, Func Offset: 0x4c
	// Line 776, Address: 0x1003438, Func Offset: 0x58
	// Func End, Address: 0x1003448, Func Offset: 0x68
}

// 
// Start address: 0x1003450
void eexp00(_anon0* actionwk)
{
	// Line 778, Address: 0x1003450, Func Offset: 0
	// Line 779, Address: 0x100345c, Func Offset: 0xc
	// Line 780, Address: 0x1003468, Func Offset: 0x18
	// Line 781, Address: 0x1003478, Func Offset: 0x28
	// Line 782, Address: 0x1003488, Func Offset: 0x38
	// Line 783, Address: 0x1003494, Func Offset: 0x44
	// Line 784, Address: 0x10034a4, Func Offset: 0x54
	// Line 785, Address: 0x10034b0, Func Offset: 0x60
	// Func End, Address: 0x10034c0, Func Offset: 0x70
}

// 
// Start address: 0x10034c0
void eexp01(_anon0* actionwk)
{
	// Line 787, Address: 0x10034c0, Func Offset: 0
	// Line 788, Address: 0x10034c8, Func Offset: 0x8
	// Line 789, Address: 0x10034e4, Func Offset: 0x24
	// Line 790, Address: 0x10034f4, Func Offset: 0x34
	// Func End, Address: 0x1003500, Func Offset: 0x40
}

