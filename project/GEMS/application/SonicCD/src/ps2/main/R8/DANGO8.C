typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);

typedef _anon7 type_0[20];
typedef unsigned char type_1[3];
typedef void(*type_3)(_anon0*)[15];
typedef unsigned char type_4[5];
typedef _anon7 type_5[0];
typedef unsigned char type_6[4];
typedef _anon1* type_7[6];
typedef unsigned char* type_8[6];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef unsigned char type_11[4];
typedef unsigned char type_12[5];
typedef unsigned char type_13[5];
typedef unsigned char type_14[8];
typedef unsigned char type_15[4];
typedef unsigned char type_16[3];
typedef _anon0 type_17[128];
typedef _anon1* type_18[6];
typedef unsigned char type_19[5];
typedef unsigned char* type_20[6];
typedef unsigned char type_21[14];
typedef unsigned char type_22[4];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
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

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
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
_anon1 spr_dango_e_00;
_anon1 spr_dango_e_01;
_anon1 spr_dango_e_02;
_anon1 spr_dango_e_03;
_anon1 spr_dango_e_04;
_anon1 spr_dango_e_05;
_anon1* pat_dango_e[6];
_anon1 spr_dango_b_00;
_anon1 spr_dango_b_01;
_anon1 spr_dango_b_02;
_anon1 spr_dango_b_03;
_anon1 spr_dango_b_04;
_anon1 spr_dango_b_05;
_anon1* pat_dango_b[6];
_anon0 actwk[128];

void dango(_anon0* pActwk);
void a_init(_anon0* pActwk);
void a_fall(_anon0* pActwk);
void a_walk(_anon0* pActwk);
void a_walk1(_anon0* pActwk);
void a_patchg(_anon0* pActwk);
void a_walk_stop(_anon0* pActwk);
void a_to_roll(_anon0* pActwk);
void a_roll_stop(_anon0* pActwk);
void a_roll(_anon0* pActwk);
void a_roll1(_anon0* pActwk);
void a_to_walk(_anon0* pActwk);
void a_to_walk1(_anon0* pActwk);
void a_speedset(int new_speed, int old_speed, _anon0* pActwk);
short a_move(_anon0* pActwk);

// 
// Start address: 0x1025690
void dango(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[15];
	// Line 273, Address: 0x1025690, Func Offset: 0
	// Line 274, Address: 0x102569c, Func Offset: 0xc
	// Line 293, Address: 0x10256c8, Func Offset: 0x38
	// Line 294, Address: 0x10256dc, Func Offset: 0x4c
	// Line 295, Address: 0x1025718, Func Offset: 0x88
	// Line 296, Address: 0x1025724, Func Offset: 0x94
	// Line 297, Address: 0x1025730, Func Offset: 0xa0
	// Func End, Address: 0x1025740, Func Offset: 0xb0
}

// 
// Start address: 0x1025740
void a_init(_anon0* pActwk)
{
	// Line 301, Address: 0x1025740, Func Offset: 0
	// Line 302, Address: 0x1025748, Func Offset: 0x8
	// Line 303, Address: 0x1025758, Func Offset: 0x18
	// Line 304, Address: 0x1025764, Func Offset: 0x24
	// Line 305, Address: 0x1025770, Func Offset: 0x30
	// Line 306, Address: 0x102577c, Func Offset: 0x3c
	// Line 307, Address: 0x1025788, Func Offset: 0x48
	// Line 308, Address: 0x1025794, Func Offset: 0x54
	// Line 309, Address: 0x10257a0, Func Offset: 0x60
	// Line 310, Address: 0x10257ac, Func Offset: 0x6c
	// Line 312, Address: 0x10257bc, Func Offset: 0x7c
	// Line 313, Address: 0x10257cc, Func Offset: 0x8c
	// Line 314, Address: 0x10257d8, Func Offset: 0x98
	// Line 317, Address: 0x10257e0, Func Offset: 0xa0
	// Line 318, Address: 0x10257f0, Func Offset: 0xb0
	// Line 320, Address: 0x1025800, Func Offset: 0xc0
	// Func End, Address: 0x102580c, Func Offset: 0xcc
}

// 
// Start address: 0x1025810
void a_fall(_anon0* pActwk)
{
	short wD1;
	// Line 324, Address: 0x1025810, Func Offset: 0
	// Line 327, Address: 0x1025820, Func Offset: 0x10
	// Line 328, Address: 0x1025834, Func Offset: 0x24
	// Line 329, Address: 0x1025848, Func Offset: 0x38
	// Line 331, Address: 0x1025858, Func Offset: 0x48
	// Line 332, Address: 0x1025868, Func Offset: 0x58
	// Line 334, Address: 0x1025878, Func Offset: 0x68
	// Func End, Address: 0x102588c, Func Offset: 0x7c
}

// 
// Start address: 0x1025890
void a_walk(_anon0* pActwk)
{
	// Line 338, Address: 0x1025890, Func Offset: 0
	// Line 339, Address: 0x102589c, Func Offset: 0xc
	// Line 340, Address: 0x10258ac, Func Offset: 0x1c
	// Line 341, Address: 0x10258c0, Func Offset: 0x30
	// Func End, Address: 0x10258d0, Func Offset: 0x40
}

// 
// Start address: 0x10258d0
void a_walk1(_anon0* pActwk)
{
	short wD0;
	short wD1;
	// Line 345, Address: 0x10258d0, Func Offset: 0
	// Line 348, Address: 0x10258e4, Func Offset: 0x14
	// Line 351, Address: 0x10258f8, Func Offset: 0x28
	// Line 354, Address: 0x1025910, Func Offset: 0x40
	// Line 355, Address: 0x1025920, Func Offset: 0x50
	// Line 356, Address: 0x1025930, Func Offset: 0x60
	// Line 358, Address: 0x1025938, Func Offset: 0x68
	// Line 359, Address: 0x102596c, Func Offset: 0x9c
	// Line 360, Address: 0x102597c, Func Offset: 0xac
	// Line 362, Address: 0x1025990, Func Offset: 0xc0
	// Line 363, Address: 0x1025994, Func Offset: 0xc4
	// Line 365, Address: 0x10259b4, Func Offset: 0xe4
	// Line 366, Address: 0x10259ec, Func Offset: 0x11c
	// Line 368, Address: 0x1025a00, Func Offset: 0x130
	// Line 369, Address: 0x1025a18, Func Offset: 0x148
	// Line 371, Address: 0x1025a2c, Func Offset: 0x15c
	// Line 372, Address: 0x1025a30, Func Offset: 0x160
	// Line 373, Address: 0x1025a4c, Func Offset: 0x17c
	// Line 376, Address: 0x1025a5c, Func Offset: 0x18c
	// Line 377, Address: 0x1025a68, Func Offset: 0x198
	// Func End, Address: 0x1025a80, Func Offset: 0x1b0
}

// 
// Start address: 0x1025a80
void a_patchg(_anon0* pActwk)
{
	// Line 381, Address: 0x1025a80, Func Offset: 0
	// Line 382, Address: 0x1025a8c, Func Offset: 0xc
	// Line 383, Address: 0x1025aa0, Func Offset: 0x20
	// Line 385, Address: 0x1025abc, Func Offset: 0x3c
	// Line 386, Address: 0x1025ad0, Func Offset: 0x50
	// Func End, Address: 0x1025ae0, Func Offset: 0x60
}

// 
// Start address: 0x1025ae0
void a_walk_stop(_anon0* pActwk)
{
	// Line 390, Address: 0x1025ae0, Func Offset: 0
	// Line 391, Address: 0x1025ae8, Func Offset: 0x8
	// Line 392, Address: 0x1025af8, Func Offset: 0x18
	// Line 394, Address: 0x1025b08, Func Offset: 0x28
	// Func End, Address: 0x1025b14, Func Offset: 0x34
}

// 
// Start address: 0x1025b20
void a_to_roll(_anon0* pActwk)
{
	// Line 398, Address: 0x1025b20, Func Offset: 0
	// Line 399, Address: 0x1025b28, Func Offset: 0x8
	// Line 400, Address: 0x1025b38, Func Offset: 0x18
	// Line 401, Address: 0x1025b48, Func Offset: 0x28
	// Line 402, Address: 0x1025b58, Func Offset: 0x38
	// Line 404, Address: 0x1025b64, Func Offset: 0x44
	// Func End, Address: 0x1025b70, Func Offset: 0x50
}

// 
// Start address: 0x1025b70
void a_roll_stop(_anon0* pActwk)
{
	// Line 408, Address: 0x1025b70, Func Offset: 0
	// Line 409, Address: 0x1025b78, Func Offset: 0x8
	// Line 410, Address: 0x1025b88, Func Offset: 0x18
	// Line 411, Address: 0x1025b98, Func Offset: 0x28
	// Line 412, Address: 0x1025ba8, Func Offset: 0x38
	// Line 413, Address: 0x1025bb4, Func Offset: 0x44
	// Line 414, Address: 0x1025bc0, Func Offset: 0x50
	// Line 416, Address: 0x1025bcc, Func Offset: 0x5c
	// Func End, Address: 0x1025bd8, Func Offset: 0x68
}

// 
// Start address: 0x1025be0
void a_roll(_anon0* pActwk)
{
	// Line 420, Address: 0x1025be0, Func Offset: 0
	// Line 421, Address: 0x1025bec, Func Offset: 0xc
	// Line 422, Address: 0x1025bfc, Func Offset: 0x1c
	// Line 423, Address: 0x1025c0c, Func Offset: 0x2c
	// Line 424, Address: 0x1025c20, Func Offset: 0x40
	// Func End, Address: 0x1025c30, Func Offset: 0x50
}

// 
// Start address: 0x1025c30
void a_roll1(_anon0* pActwk)
{
	short wD0;
	short wD1;
	short wD2;
	short sin;
	short cos;
	int lD0;
	int lD1;
	// Line 428, Address: 0x1025c30, Func Offset: 0
	// Line 432, Address: 0x1025c50, Func Offset: 0x20
	// Line 434, Address: 0x1025c60, Func Offset: 0x30
	// Line 436, Address: 0x1025c74, Func Offset: 0x44
	// Line 437, Address: 0x1025c88, Func Offset: 0x58
	// Line 439, Address: 0x1025ca4, Func Offset: 0x74
	// Line 440, Address: 0x1025cb8, Func Offset: 0x88
	// Line 444, Address: 0x1025cc0, Func Offset: 0x90
	// Line 446, Address: 0x1025cd0, Func Offset: 0xa0
	// Line 450, Address: 0x1025cd8, Func Offset: 0xa8
	// Line 451, Address: 0x1025d0c, Func Offset: 0xdc
	// Line 452, Address: 0x1025d40, Func Offset: 0x110
	// Line 453, Address: 0x1025d58, Func Offset: 0x128
	// Line 454, Address: 0x1025d78, Func Offset: 0x148
	// Line 455, Address: 0x1025d90, Func Offset: 0x160
	// Line 456, Address: 0x1025d94, Func Offset: 0x164
	// Line 457, Address: 0x1025db0, Func Offset: 0x180
	// Line 458, Address: 0x1025dc8, Func Offset: 0x198
	// Line 459, Address: 0x1025dcc, Func Offset: 0x19c
	// Line 460, Address: 0x1025de8, Func Offset: 0x1b8
	// Line 461, Address: 0x1025dfc, Func Offset: 0x1cc
	// Line 462, Address: 0x1025e10, Func Offset: 0x1e0
	// Line 463, Address: 0x1025e24, Func Offset: 0x1f4
	// Line 465, Address: 0x1025e2c, Func Offset: 0x1fc
	// Line 466, Address: 0x1025e34, Func Offset: 0x204
	// Line 467, Address: 0x1025e38, Func Offset: 0x208
	// Line 468, Address: 0x1025e3c, Func Offset: 0x20c
	// Line 469, Address: 0x1025e40, Func Offset: 0x210
	// Line 470, Address: 0x1025e4c, Func Offset: 0x21c
	// Line 471, Address: 0x1025e58, Func Offset: 0x228
	// Line 473, Address: 0x1025e64, Func Offset: 0x234
	// Func End, Address: 0x1025e88, Func Offset: 0x258
}

// 
// Start address: 0x1025e90
void a_to_walk(_anon0* pActwk)
{
	// Line 477, Address: 0x1025e90, Func Offset: 0
	// Line 478, Address: 0x1025e98, Func Offset: 0x8
	// Line 479, Address: 0x1025ea8, Func Offset: 0x18
	// Line 480, Address: 0x1025eb8, Func Offset: 0x28
	// Line 481, Address: 0x1025ec8, Func Offset: 0x38
	// Line 482, Address: 0x1025ed4, Func Offset: 0x44
	// Line 484, Address: 0x1025ee0, Func Offset: 0x50
	// Func End, Address: 0x1025eec, Func Offset: 0x5c
}

// 
// Start address: 0x1025ef0
void a_to_walk1(_anon0* pActwk)
{
	// Line 488, Address: 0x1025ef0, Func Offset: 0
	// Line 489, Address: 0x1025ef8, Func Offset: 0x8
	// Line 490, Address: 0x1025f04, Func Offset: 0x14
	// Line 491, Address: 0x1025f0c, Func Offset: 0x1c
	// Line 492, Address: 0x1025f1c, Func Offset: 0x2c
	// Line 493, Address: 0x1025f28, Func Offset: 0x38
	// Func End, Address: 0x1025f34, Func Offset: 0x44
}

// 
// Start address: 0x1025f40
void a_speedset(int new_speed, int old_speed, _anon0* pActwk)
{
	// Line 497, Address: 0x1025f40, Func Offset: 0
	// Line 498, Address: 0x1025f50, Func Offset: 0x10
	// Line 499, Address: 0x1025f60, Func Offset: 0x20
	// Line 501, Address: 0x1025f68, Func Offset: 0x28
	// Line 502, Address: 0x1025f80, Func Offset: 0x40
	// Line 504, Address: 0x1025f8c, Func Offset: 0x4c
	// Line 505, Address: 0x1025f9c, Func Offset: 0x5c
	// Func End, Address: 0x1025fa8, Func Offset: 0x68
}

// 
// Start address: 0x1025fb0
short a_move(_anon0* pActwk)
{
	short temp1;
	short temp2;
	short ret;
	// Line 509, Address: 0x1025fb0, Func Offset: 0
	// Line 513, Address: 0x1025fc8, Func Offset: 0x18
	// Line 514, Address: 0x1025fe4, Func Offset: 0x34
	// Line 515, Address: 0x1026000, Func Offset: 0x50
	// Line 518, Address: 0x1026024, Func Offset: 0x74
	// Line 520, Address: 0x1026058, Func Offset: 0xa8
	// Line 522, Address: 0x1026068, Func Offset: 0xb8
	// Line 523, Address: 0x102607c, Func Offset: 0xcc
	// Line 524, Address: 0x1026098, Func Offset: 0xe8
	// Line 526, Address: 0x10260ac, Func Offset: 0xfc
	// Line 527, Address: 0x10260bc, Func Offset: 0x10c
	// Line 528, Address: 0x10260c8, Func Offset: 0x118
	// Line 532, Address: 0x10260d0, Func Offset: 0x120
	// Line 533, Address: 0x10260ec, Func Offset: 0x13c
	// Line 535, Address: 0x10260f0, Func Offset: 0x140
	// Line 539, Address: 0x10260f8, Func Offset: 0x148
	// Line 540, Address: 0x1026114, Func Offset: 0x164
	// Line 542, Address: 0x1026118, Func Offset: 0x168
	// Line 543, Address: 0x102611c, Func Offset: 0x16c
	// Func End, Address: 0x1026138, Func Offset: 0x188
}

