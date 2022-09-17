typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_20)(_anon1*);

typedef _anon7 type_0[20];
typedef unsigned char type_1[4];
typedef _anon7 type_2[0];
typedef _anon0* type_3[6];
typedef unsigned char* type_4[6];
typedef unsigned char type_5[4];
typedef unsigned char type_6[5];
typedef unsigned char type_7[2];
typedef unsigned char type_8[5];
typedef unsigned char type_9[22];
typedef unsigned char type_10[8];
typedef unsigned char type_11[4];
typedef unsigned char type_12[3];
typedef _anon1 type_13[128];
typedef _anon0* type_14[6];
typedef unsigned char type_15[5];
typedef unsigned char* type_16[6];
typedef unsigned char type_17[14];
typedef unsigned char type_18[4];
typedef unsigned char type_19[3];
typedef void(*type_21)(_anon1*)[15];
typedef unsigned char type_22[5];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon2 xposi;
	_anon2 yposi;
	_anon5 xspeed;
	_anon5 yspeed;
	_anon5 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon5 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon5 direc;
	_anon5 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
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

union _anon5
{
	short w;
	_anon6 b;
};

struct _anon6
{
	char l;
	char h;
};

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char pat_chg_e00[4];
unsigned char pat_chg_e01[3];
unsigned char pat_chg_e02[5];
unsigned char pat_chg_e03[8];
unsigned char pat_chg_e04[4];
unsigned char pat_chg_e05[5];
unsigned char* pchg_e[6];
unsigned char pat_chg_b00[4];
unsigned char pat_chg_b01[3];
unsigned char pat_chg_b02[5];
unsigned char pat_chg_b03[14];
unsigned char pat_chg_b04[4];
unsigned char pat_chg_b05[5];
unsigned char* pchg_b[6];
_anon0 spr_dango_e_00;
_anon0 spr_dango_e_01;
_anon0 spr_dango_e_02;
_anon0 spr_dango_e_03;
_anon0 spr_dango_e_04;
_anon0 spr_dango_e_05;
_anon0* pat_dango_e[6];
_anon0 spr_dango_b_00;
_anon0 spr_dango_b_01;
_anon0 spr_dango_b_02;
_anon0 spr_dango_b_03;
_anon0 spr_dango_b_04;
_anon0 spr_dango_b_05;
_anon0* pat_dango_b[6];
unsigned char time_flag;
_anon1 actwk[128];

void dango(_anon1* pActwk);
void a_init(_anon1* pActwk);
void a_fall(_anon1* pActwk);
void a_walk(_anon1* pActwk);
void a_walk1(_anon1* pActwk);
void a_patchg(_anon1* pActwk);
void a_walk_stop(_anon1* pActwk);
void a_to_roll(_anon1* pActwk);
void a_roll_stop(_anon1* pActwk);
void a_roll(_anon1* pActwk);
void a_roll1(_anon1* pActwk);
void a_to_walk(_anon1* pActwk);
void a_to_walk1(_anon1* pActwk);
void a_speedset(int new_speed, int old_speed, _anon1* pActwk);
short a_move(_anon1* pActwk);

// 
// Start address: 0x10225d0
void dango(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[15];
	// Line 270, Address: 0x10225d0, Func Offset: 0
	// Line 271, Address: 0x10225dc, Func Offset: 0xc
	// Line 290, Address: 0x1022608, Func Offset: 0x38
	// Line 291, Address: 0x102261c, Func Offset: 0x4c
	// Line 292, Address: 0x1022658, Func Offset: 0x88
	// Line 293, Address: 0x1022664, Func Offset: 0x94
	// Line 294, Address: 0x1022670, Func Offset: 0xa0
	// Func End, Address: 0x1022680, Func Offset: 0xb0
}

// 
// Start address: 0x1022680
void a_init(_anon1* pActwk)
{
	// Line 298, Address: 0x1022680, Func Offset: 0
	// Line 299, Address: 0x1022688, Func Offset: 0x8
	// Line 300, Address: 0x1022698, Func Offset: 0x18
	// Line 301, Address: 0x10226a4, Func Offset: 0x24
	// Line 302, Address: 0x10226b0, Func Offset: 0x30
	// Line 303, Address: 0x10226bc, Func Offset: 0x3c
	// Line 304, Address: 0x10226c8, Func Offset: 0x48
	// Line 305, Address: 0x10226d4, Func Offset: 0x54
	// Line 306, Address: 0x10226e0, Func Offset: 0x60
	// Line 307, Address: 0x10226f0, Func Offset: 0x70
	// Line 309, Address: 0x1022704, Func Offset: 0x84
	// Line 310, Address: 0x1022710, Func Offset: 0x90
	// Line 312, Address: 0x1022720, Func Offset: 0xa0
	// Line 313, Address: 0x1022730, Func Offset: 0xb0
	// Line 314, Address: 0x102273c, Func Offset: 0xbc
	// Line 317, Address: 0x1022744, Func Offset: 0xc4
	// Line 318, Address: 0x1022754, Func Offset: 0xd4
	// Line 320, Address: 0x1022764, Func Offset: 0xe4
	// Func End, Address: 0x1022770, Func Offset: 0xf0
}

// 
// Start address: 0x1022770
void a_fall(_anon1* pActwk)
{
	short wD1;
	// Line 324, Address: 0x1022770, Func Offset: 0
	// Line 327, Address: 0x1022780, Func Offset: 0x10
	// Line 328, Address: 0x1022794, Func Offset: 0x24
	// Line 329, Address: 0x10227a8, Func Offset: 0x38
	// Line 331, Address: 0x10227b8, Func Offset: 0x48
	// Line 332, Address: 0x10227c8, Func Offset: 0x58
	// Line 334, Address: 0x10227d8, Func Offset: 0x68
	// Func End, Address: 0x10227ec, Func Offset: 0x7c
}

// 
// Start address: 0x10227f0
void a_walk(_anon1* pActwk)
{
	// Line 338, Address: 0x10227f0, Func Offset: 0
	// Line 339, Address: 0x10227fc, Func Offset: 0xc
	// Line 340, Address: 0x102280c, Func Offset: 0x1c
	// Line 341, Address: 0x1022820, Func Offset: 0x30
	// Func End, Address: 0x1022830, Func Offset: 0x40
}

// 
// Start address: 0x1022830
void a_walk1(_anon1* pActwk)
{
	short wD0;
	short wD1;
	// Line 345, Address: 0x1022830, Func Offset: 0
	// Line 348, Address: 0x1022844, Func Offset: 0x14
	// Line 351, Address: 0x1022858, Func Offset: 0x28
	// Line 354, Address: 0x1022870, Func Offset: 0x40
	// Line 355, Address: 0x1022880, Func Offset: 0x50
	// Line 356, Address: 0x1022890, Func Offset: 0x60
	// Line 358, Address: 0x1022898, Func Offset: 0x68
	// Line 359, Address: 0x10228cc, Func Offset: 0x9c
	// Line 360, Address: 0x10228dc, Func Offset: 0xac
	// Line 362, Address: 0x10228f0, Func Offset: 0xc0
	// Line 363, Address: 0x10228f4, Func Offset: 0xc4
	// Line 365, Address: 0x1022914, Func Offset: 0xe4
	// Line 366, Address: 0x102294c, Func Offset: 0x11c
	// Line 368, Address: 0x1022960, Func Offset: 0x130
	// Line 369, Address: 0x1022978, Func Offset: 0x148
	// Line 371, Address: 0x102298c, Func Offset: 0x15c
	// Line 372, Address: 0x1022990, Func Offset: 0x160
	// Line 373, Address: 0x10229ac, Func Offset: 0x17c
	// Line 376, Address: 0x10229bc, Func Offset: 0x18c
	// Line 377, Address: 0x10229c8, Func Offset: 0x198
	// Func End, Address: 0x10229e0, Func Offset: 0x1b0
}

// 
// Start address: 0x10229e0
void a_patchg(_anon1* pActwk)
{
	// Line 381, Address: 0x10229e0, Func Offset: 0
	// Line 382, Address: 0x10229ec, Func Offset: 0xc
	// Line 383, Address: 0x1022a00, Func Offset: 0x20
	// Line 385, Address: 0x1022a1c, Func Offset: 0x3c
	// Line 386, Address: 0x1022a30, Func Offset: 0x50
	// Func End, Address: 0x1022a40, Func Offset: 0x60
}

// 
// Start address: 0x1022a40
void a_walk_stop(_anon1* pActwk)
{
	// Line 390, Address: 0x1022a40, Func Offset: 0
	// Line 391, Address: 0x1022a48, Func Offset: 0x8
	// Line 392, Address: 0x1022a58, Func Offset: 0x18
	// Line 394, Address: 0x1022a68, Func Offset: 0x28
	// Func End, Address: 0x1022a74, Func Offset: 0x34
}

// 
// Start address: 0x1022a80
void a_to_roll(_anon1* pActwk)
{
	// Line 398, Address: 0x1022a80, Func Offset: 0
	// Line 399, Address: 0x1022a88, Func Offset: 0x8
	// Line 400, Address: 0x1022a98, Func Offset: 0x18
	// Line 401, Address: 0x1022aa8, Func Offset: 0x28
	// Line 402, Address: 0x1022ab8, Func Offset: 0x38
	// Line 404, Address: 0x1022ac4, Func Offset: 0x44
	// Func End, Address: 0x1022ad0, Func Offset: 0x50
}

// 
// Start address: 0x1022ad0
void a_roll_stop(_anon1* pActwk)
{
	// Line 408, Address: 0x1022ad0, Func Offset: 0
	// Line 409, Address: 0x1022ad8, Func Offset: 0x8
	// Line 410, Address: 0x1022ae8, Func Offset: 0x18
	// Line 411, Address: 0x1022af8, Func Offset: 0x28
	// Line 412, Address: 0x1022b08, Func Offset: 0x38
	// Line 413, Address: 0x1022b14, Func Offset: 0x44
	// Line 414, Address: 0x1022b20, Func Offset: 0x50
	// Line 416, Address: 0x1022b2c, Func Offset: 0x5c
	// Func End, Address: 0x1022b38, Func Offset: 0x68
}

// 
// Start address: 0x1022b40
void a_roll(_anon1* pActwk)
{
	// Line 420, Address: 0x1022b40, Func Offset: 0
	// Line 421, Address: 0x1022b4c, Func Offset: 0xc
	// Line 422, Address: 0x1022b5c, Func Offset: 0x1c
	// Line 423, Address: 0x1022b6c, Func Offset: 0x2c
	// Line 424, Address: 0x1022b80, Func Offset: 0x40
	// Func End, Address: 0x1022b90, Func Offset: 0x50
}

// 
// Start address: 0x1022b90
void a_roll1(_anon1* pActwk)
{
	short wD0;
	short wD1;
	short wD2;
	short sin;
	short cos;
	int lD0;
	int lD1;
	// Line 428, Address: 0x1022b90, Func Offset: 0
	// Line 432, Address: 0x1022bb0, Func Offset: 0x20
	// Line 434, Address: 0x1022bc0, Func Offset: 0x30
	// Line 436, Address: 0x1022bd4, Func Offset: 0x44
	// Line 437, Address: 0x1022be8, Func Offset: 0x58
	// Line 439, Address: 0x1022c04, Func Offset: 0x74
	// Line 440, Address: 0x1022c18, Func Offset: 0x88
	// Line 444, Address: 0x1022c20, Func Offset: 0x90
	// Line 446, Address: 0x1022c30, Func Offset: 0xa0
	// Line 450, Address: 0x1022c38, Func Offset: 0xa8
	// Line 451, Address: 0x1022c6c, Func Offset: 0xdc
	// Line 452, Address: 0x1022ca0, Func Offset: 0x110
	// Line 453, Address: 0x1022cb8, Func Offset: 0x128
	// Line 454, Address: 0x1022cd8, Func Offset: 0x148
	// Line 455, Address: 0x1022cf0, Func Offset: 0x160
	// Line 456, Address: 0x1022cf4, Func Offset: 0x164
	// Line 457, Address: 0x1022d10, Func Offset: 0x180
	// Line 458, Address: 0x1022d28, Func Offset: 0x198
	// Line 459, Address: 0x1022d2c, Func Offset: 0x19c
	// Line 460, Address: 0x1022d48, Func Offset: 0x1b8
	// Line 461, Address: 0x1022d5c, Func Offset: 0x1cc
	// Line 462, Address: 0x1022d70, Func Offset: 0x1e0
	// Line 463, Address: 0x1022d84, Func Offset: 0x1f4
	// Line 465, Address: 0x1022d8c, Func Offset: 0x1fc
	// Line 466, Address: 0x1022d94, Func Offset: 0x204
	// Line 467, Address: 0x1022db4, Func Offset: 0x224
	// Line 468, Address: 0x1022dc0, Func Offset: 0x230
	// Line 471, Address: 0x1022dc8, Func Offset: 0x238
	// Line 472, Address: 0x1022dcc, Func Offset: 0x23c
	// Line 473, Address: 0x1022dd8, Func Offset: 0x248
	// Line 474, Address: 0x1022de4, Func Offset: 0x254
	// Line 476, Address: 0x1022df0, Func Offset: 0x260
	// Func End, Address: 0x1022e14, Func Offset: 0x284
}

// 
// Start address: 0x1022e20
void a_to_walk(_anon1* pActwk)
{
	// Line 480, Address: 0x1022e20, Func Offset: 0
	// Line 481, Address: 0x1022e28, Func Offset: 0x8
	// Line 482, Address: 0x1022e38, Func Offset: 0x18
	// Line 483, Address: 0x1022e48, Func Offset: 0x28
	// Line 484, Address: 0x1022e58, Func Offset: 0x38
	// Line 485, Address: 0x1022e64, Func Offset: 0x44
	// Line 487, Address: 0x1022e70, Func Offset: 0x50
	// Func End, Address: 0x1022e7c, Func Offset: 0x5c
}

// 
// Start address: 0x1022e80
void a_to_walk1(_anon1* pActwk)
{
	// Line 491, Address: 0x1022e80, Func Offset: 0
	// Line 492, Address: 0x1022e88, Func Offset: 0x8
	// Line 493, Address: 0x1022e94, Func Offset: 0x14
	// Line 494, Address: 0x1022e9c, Func Offset: 0x1c
	// Line 495, Address: 0x1022eac, Func Offset: 0x2c
	// Line 496, Address: 0x1022eb8, Func Offset: 0x38
	// Func End, Address: 0x1022ec4, Func Offset: 0x44
}

// 
// Start address: 0x1022ed0
void a_speedset(int new_speed, int old_speed, _anon1* pActwk)
{
	// Line 500, Address: 0x1022ed0, Func Offset: 0
	// Line 501, Address: 0x1022ee0, Func Offset: 0x10
	// Line 502, Address: 0x1022ef0, Func Offset: 0x20
	// Line 504, Address: 0x1022ef8, Func Offset: 0x28
	// Line 505, Address: 0x1022f10, Func Offset: 0x40
	// Line 507, Address: 0x1022f1c, Func Offset: 0x4c
	// Line 508, Address: 0x1022f2c, Func Offset: 0x5c
	// Func End, Address: 0x1022f38, Func Offset: 0x68
}

// 
// Start address: 0x1022f40
short a_move(_anon1* pActwk)
{
	short temp1;
	short temp2;
	short ret;
	// Line 512, Address: 0x1022f40, Func Offset: 0
	// Line 516, Address: 0x1022f58, Func Offset: 0x18
	// Line 517, Address: 0x1022f74, Func Offset: 0x34
	// Line 518, Address: 0x1022f90, Func Offset: 0x50
	// Line 521, Address: 0x1022fb4, Func Offset: 0x74
	// Line 523, Address: 0x1022fe8, Func Offset: 0xa8
	// Line 525, Address: 0x1022ff8, Func Offset: 0xb8
	// Line 526, Address: 0x102300c, Func Offset: 0xcc
	// Line 527, Address: 0x1023028, Func Offset: 0xe8
	// Line 529, Address: 0x102303c, Func Offset: 0xfc
	// Line 530, Address: 0x102304c, Func Offset: 0x10c
	// Line 531, Address: 0x1023058, Func Offset: 0x118
	// Line 535, Address: 0x1023060, Func Offset: 0x120
	// Line 536, Address: 0x102307c, Func Offset: 0x13c
	// Line 538, Address: 0x1023080, Func Offset: 0x140
	// Line 542, Address: 0x1023088, Func Offset: 0x148
	// Line 543, Address: 0x10230a4, Func Offset: 0x164
	// Line 545, Address: 0x10230a8, Func Offset: 0x168
	// Line 546, Address: 0x10230ac, Func Offset: 0x16c
	// Func End, Address: 0x10230c8, Func Offset: 0x188
}

