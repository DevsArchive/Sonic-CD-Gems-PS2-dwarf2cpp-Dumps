typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(_anon1*);
typedef void(*type_11)(_anon1*);
typedef void(*type_13)(_anon1*);
typedef void(*type_16)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[48];
typedef _anon0* type_3[1];
typedef void(*type_5)(_anon1*)[3];
typedef _anon0* type_6[18];
typedef unsigned char type_7[16];
typedef unsigned char type_8[16];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef void(*type_12)(_anon1*)[2];
typedef void(*type_14)(_anon1*)[2];
typedef _anon1 type_15[128];
typedef void(*type_17)(_anon1*)[2];
typedef _anon0* type_18[7];
typedef unsigned char type_19[16];
typedef _anon0* type_20[2];
typedef unsigned char type_21[16];

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

_anon0 dai00;
_anon0* togedair8pat[1];
_anon1 actwk[128];
_anon0 har00;
_anon0 har01;
_anon0* harir8pat[2];
unsigned char plpower_m;
unsigned char plpower_a;
unsigned char anar8pchgl[16];
unsigned char anar8pchgr[16];
unsigned char gater8pchgl[16];
unsigned char gater8pchgr[16];
_anon0 anal0;
_anon0 anal1;
_anon0 anal2;
_anon0 anal3;
_anon0 anal4;
_anon0 anal5;
_anon0 anal6;
_anon0 anal7;
_anon0 anar0;
_anon0 anar1;
_anon0 anar2;
_anon0 anar3;
_anon0 anar4;
_anon0 anar5;
_anon0 anar6;
_anon0 anar7;
_anon0 ana00;
_anon0 ana01;
_anon0* anar8pat[18];
unsigned char futagor8_pchg[48];
_anon0 fut00;
_anon0 fut01;
_anon0 fut02;
_anon0 fut03;
_anon0 fut04;
_anon0 fut05;
_anon0 fut06;
_anon0* futagor8pat[7];

void togedair8(_anon1* trapwk);
void dair8_init(_anon1* trapwk);
void dair8_move(_anon1* trapwk);
void harir8(_anon1* trapwk);
void harir8_init(_anon1* trapwk);
void harir8_move(_anon1* trapwk);
void anar8(_anon1* trapwk);
void anar8_ridechk(_anon1* trapwk);
void anar8_rideclr(_anon1* trapwk);
void anar8_init(_anon1* trapwk);
void anar8_move1(_anon1* trapwk);
void anar8_move2(_anon1* trapwk);
void futagor8(_anon1* trapwk);
void futagor8_ridechk(_anon1* trapwk);
void futagor8_init(_anon1* trapwk);
void futagor8_move1(_anon1* trapwk);

// 
// Start address: 0x101c4d0
void togedair8(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 56, Address: 0x101c4d0, Func Offset: 0
	// Line 57, Address: 0x101c4dc, Func Offset: 0xc
	// Line 59, Address: 0x101c4f8, Func Offset: 0x28
	// Line 60, Address: 0x101c524, Func Offset: 0x54
	// Line 61, Address: 0x101c560, Func Offset: 0x90
	// Line 62, Address: 0x101c56c, Func Offset: 0x9c
	// Line 63, Address: 0x101c580, Func Offset: 0xb0
	// Func End, Address: 0x101c590, Func Offset: 0xc0
}

// 
// Start address: 0x101c590
void dair8_init(_anon1* trapwk)
{
	_anon1* new_actwk;
	// Line 67, Address: 0x101c590, Func Offset: 0
	// Line 70, Address: 0x101c59c, Func Offset: 0xc
	// Line 71, Address: 0x101c5ac, Func Offset: 0x1c
	// Line 73, Address: 0x101c5bc, Func Offset: 0x2c
	// Line 74, Address: 0x101c5c8, Func Offset: 0x38
	// Line 75, Address: 0x101c5d8, Func Offset: 0x48
	// Line 76, Address: 0x101c5e8, Func Offset: 0x58
	// Line 77, Address: 0x101c5f8, Func Offset: 0x68
	// Line 78, Address: 0x101c610, Func Offset: 0x80
	// Line 80, Address: 0x101c638, Func Offset: 0xa8
	// Line 81, Address: 0x101c654, Func Offset: 0xc4
	// Line 82, Address: 0x101c660, Func Offset: 0xd0
	// Line 83, Address: 0x101c670, Func Offset: 0xe0
	// Line 84, Address: 0x101c680, Func Offset: 0xf0
	// Line 85, Address: 0x101c68c, Func Offset: 0xfc
	// Line 86, Address: 0x101c6c0, Func Offset: 0x130
	// Line 87, Address: 0x101c6d0, Func Offset: 0x140
	// Line 88, Address: 0x101c6dc, Func Offset: 0x14c
	// Line 89, Address: 0x101c6e4, Func Offset: 0x154
	// Line 90, Address: 0x101c6f0, Func Offset: 0x160
	// Line 91, Address: 0x101c6fc, Func Offset: 0x16c
	// Line 92, Address: 0x101c70c, Func Offset: 0x17c
	// Line 93, Address: 0x101c71c, Func Offset: 0x18c
	// Line 94, Address: 0x101c728, Func Offset: 0x198
	// Line 95, Address: 0x101c75c, Func Offset: 0x1cc
	// Line 97, Address: 0x101c768, Func Offset: 0x1d8
	// Func End, Address: 0x101c778, Func Offset: 0x1e8
}

// 
// Start address: 0x101c780
void dair8_move(_anon1* trapwk)
{
	short cal_position;
	// Line 101, Address: 0x101c780, Func Offset: 0
	// Line 104, Address: 0x101c790, Func Offset: 0x10
	// Line 106, Address: 0x101c7a8, Func Offset: 0x28
	// Line 107, Address: 0x101c7f4, Func Offset: 0x74
	// Line 108, Address: 0x101c810, Func Offset: 0x90
	// Line 111, Address: 0x101c824, Func Offset: 0xa4
	// Line 112, Address: 0x101c838, Func Offset: 0xb8
	// Func End, Address: 0x101c84c, Func Offset: 0xcc
}

// 
// Start address: 0x101c850
void harir8(_anon1* trapwk)
{
	unsigned short master;
	void(*tbl)(_anon1*)[2];
	// Line 120, Address: 0x101c850, Func Offset: 0
	// Line 122, Address: 0x101c860, Func Offset: 0x10
	// Line 124, Address: 0x101c87c, Func Offset: 0x2c
	// Line 125, Address: 0x101c8b8, Func Offset: 0x68
	// Line 126, Address: 0x101c8c4, Func Offset: 0x74
	// Line 128, Address: 0x101c8dc, Func Offset: 0x8c
	// Line 129, Address: 0x101c91c, Func Offset: 0xcc
	// Line 131, Address: 0x101c978, Func Offset: 0x128
	// Line 135, Address: 0x101c9d4, Func Offset: 0x184
	// Line 136, Address: 0x101c9e8, Func Offset: 0x198
	// Func End, Address: 0x101c9fc, Func Offset: 0x1ac
}

// 
// Start address: 0x101ca00
void harir8_init(_anon1* trapwk)
{
	// Line 140, Address: 0x101ca00, Func Offset: 0
	// Line 141, Address: 0x101ca0c, Func Offset: 0xc
	// Line 142, Address: 0x101ca1c, Func Offset: 0x1c
	// Line 144, Address: 0x101ca2c, Func Offset: 0x2c
	// Line 145, Address: 0x101ca38, Func Offset: 0x38
	// Line 146, Address: 0x101ca48, Func Offset: 0x48
	// Line 147, Address: 0x101ca58, Func Offset: 0x58
	// Line 149, Address: 0x101ca68, Func Offset: 0x68
	// Line 150, Address: 0x101ca74, Func Offset: 0x74
	// Line 151, Address: 0x101ca80, Func Offset: 0x80
	// Line 152, Address: 0x101ca9c, Func Offset: 0x9c
	// Line 153, Address: 0x101caa8, Func Offset: 0xa8
	// Line 154, Address: 0x101cab4, Func Offset: 0xb4
	// Line 156, Address: 0x101cac0, Func Offset: 0xc0
	// Line 157, Address: 0x101cacc, Func Offset: 0xcc
	// Func End, Address: 0x101cadc, Func Offset: 0xdc
}

// 
// Start address: 0x101cae0
void harir8_move(_anon1* trapwk)
{
	short cal_position;
	// Line 161, Address: 0x101cae0, Func Offset: 0
	// Line 164, Address: 0x101caf0, Func Offset: 0x10
	// Line 166, Address: 0x101cb04, Func Offset: 0x24
	// Line 167, Address: 0x101cb50, Func Offset: 0x70
	// Line 168, Address: 0x101cb6c, Func Offset: 0x8c
	// Line 170, Address: 0x101cb80, Func Offset: 0xa0
	// Line 171, Address: 0x101cba4, Func Offset: 0xc4
	// Line 172, Address: 0x101cbbc, Func Offset: 0xdc
	// Line 174, Address: 0x101cbe4, Func Offset: 0x104
	// Line 175, Address: 0x101cbfc, Func Offset: 0x11c
	// Line 176, Address: 0x101cc14, Func Offset: 0x134
	// Line 177, Address: 0x101cc3c, Func Offset: 0x15c
	// Line 178, Address: 0x101cc50, Func Offset: 0x170
	// Line 182, Address: 0x101cc58, Func Offset: 0x178
	// Line 184, Address: 0x101cc70, Func Offset: 0x190
	// Line 185, Address: 0x101ccbc, Func Offset: 0x1dc
	// Line 186, Address: 0x101ccd8, Func Offset: 0x1f8
	// Line 189, Address: 0x101ccec, Func Offset: 0x20c
	// Line 190, Address: 0x101cd00, Func Offset: 0x220
	// Func End, Address: 0x101cd14, Func Offset: 0x234
}

// 
// Start address: 0x101cd20
void anar8(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 288, Address: 0x101cd20, Func Offset: 0
	// Line 289, Address: 0x101cd2c, Func Offset: 0xc
	// Line 291, Address: 0x101cd50, Func Offset: 0x30
	// Line 292, Address: 0x101cd8c, Func Offset: 0x6c
	// Line 293, Address: 0x101cd98, Func Offset: 0x78
	// Line 294, Address: 0x101cdac, Func Offset: 0x8c
	// Func End, Address: 0x101cdbc, Func Offset: 0x9c
}

// 
// Start address: 0x101cdc0
void anar8_ridechk(_anon1* trapwk)
{
	// Line 297, Address: 0x101cdc0, Func Offset: 0
	// Line 298, Address: 0x101cdcc, Func Offset: 0xc
	// Line 299, Address: 0x101cde0, Func Offset: 0x20
	// Func End, Address: 0x101cdf0, Func Offset: 0x30
}

// 
// Start address: 0x101cdf0
void anar8_rideclr(_anon1* trapwk)
{
	// Line 302, Address: 0x101cdf0, Func Offset: 0
	// Line 303, Address: 0x101cdfc, Func Offset: 0xc
	// Line 304, Address: 0x101ce10, Func Offset: 0x20
	// Func End, Address: 0x101ce20, Func Offset: 0x30
}

// 
// Start address: 0x101ce20
void anar8_init(_anon1* trapwk)
{
	_anon1* new_actwk;
	// Line 308, Address: 0x101ce20, Func Offset: 0
	// Line 311, Address: 0x101ce2c, Func Offset: 0xc
	// Line 312, Address: 0x101ce3c, Func Offset: 0x1c
	// Line 313, Address: 0x101ce4c, Func Offset: 0x2c
	// Line 315, Address: 0x101ce58, Func Offset: 0x38
	// Line 316, Address: 0x101ce68, Func Offset: 0x48
	// Line 317, Address: 0x101ce74, Func Offset: 0x54
	// Line 318, Address: 0x101ce80, Func Offset: 0x60
	// Line 320, Address: 0x101ce8c, Func Offset: 0x6c
	// Line 322, Address: 0x101ceb4, Func Offset: 0x94
	// Line 323, Address: 0x101cec4, Func Offset: 0xa4
	// Line 324, Address: 0x101ced4, Func Offset: 0xb4
	// Line 325, Address: 0x101cefc, Func Offset: 0xdc
	// Line 326, Address: 0x101cf08, Func Offset: 0xe8
	// Line 327, Address: 0x101cf2c, Func Offset: 0x10c
	// Line 328, Address: 0x101cf3c, Func Offset: 0x11c
	// Line 330, Address: 0x101cf4c, Func Offset: 0x12c
	// Line 331, Address: 0x101cf58, Func Offset: 0x138
	// Line 332, Address: 0x101cf64, Func Offset: 0x144
	// Line 333, Address: 0x101cf70, Func Offset: 0x150
	// Func End, Address: 0x101cf80, Func Offset: 0x160
}

// 
// Start address: 0x101cf80
void anar8_move1(_anon1* trapwk)
{
	short x_adder;
	unsigned char* patchg_data;
	// Line 337, Address: 0x101cf80, Func Offset: 0
	// Line 341, Address: 0x101cf94, Func Offset: 0x14
	// Line 342, Address: 0x101cfa8, Func Offset: 0x28
	// Line 343, Address: 0x101cfb8, Func Offset: 0x38
	// Line 344, Address: 0x101cfc4, Func Offset: 0x44
	// Line 347, Address: 0x101cfcc, Func Offset: 0x4c
	// Line 348, Address: 0x101cfe0, Func Offset: 0x60
	// Line 349, Address: 0x101cfe8, Func Offset: 0x68
	// Line 350, Address: 0x101cff4, Func Offset: 0x74
	// Line 351, Address: 0x101cffc, Func Offset: 0x7c
	// Line 352, Address: 0x101d004, Func Offset: 0x84
	// Line 355, Address: 0x101d010, Func Offset: 0x90
	// Line 357, Address: 0x101d034, Func Offset: 0xb4
	// Line 358, Address: 0x101d054, Func Offset: 0xd4
	// Line 359, Address: 0x101d078, Func Offset: 0xf8
	// Line 360, Address: 0x101d088, Func Offset: 0x108
	// Line 361, Address: 0x101d0ac, Func Offset: 0x12c
	// Line 362, Address: 0x101d0b8, Func Offset: 0x138
	// Line 363, Address: 0x101d0c0, Func Offset: 0x140
	// Line 365, Address: 0x101d0d0, Func Offset: 0x150
	// Line 366, Address: 0x101d0dc, Func Offset: 0x15c
	// Func End, Address: 0x101d0f4, Func Offset: 0x174
}

// 
// Start address: 0x101d100
void anar8_move2(_anon1* trapwk)
{
	short x_adder;
	unsigned char* patchg_data;
	// Line 370, Address: 0x101d100, Func Offset: 0
	// Line 374, Address: 0x101d114, Func Offset: 0x14
	// Line 375, Address: 0x101d128, Func Offset: 0x28
	// Line 376, Address: 0x101d138, Func Offset: 0x38
	// Line 377, Address: 0x101d144, Func Offset: 0x44
	// Line 380, Address: 0x101d14c, Func Offset: 0x4c
	// Line 381, Address: 0x101d160, Func Offset: 0x60
	// Line 382, Address: 0x101d168, Func Offset: 0x68
	// Line 383, Address: 0x101d174, Func Offset: 0x74
	// Line 384, Address: 0x101d17c, Func Offset: 0x7c
	// Line 385, Address: 0x101d184, Func Offset: 0x84
	// Line 388, Address: 0x101d190, Func Offset: 0x90
	// Line 390, Address: 0x101d1b4, Func Offset: 0xb4
	// Line 391, Address: 0x101d1d4, Func Offset: 0xd4
	// Line 392, Address: 0x101d1f8, Func Offset: 0xf8
	// Line 393, Address: 0x101d208, Func Offset: 0x108
	// Line 394, Address: 0x101d22c, Func Offset: 0x12c
	// Line 395, Address: 0x101d238, Func Offset: 0x138
	// Line 396, Address: 0x101d240, Func Offset: 0x140
	// Line 397, Address: 0x101d24c, Func Offset: 0x14c
	// Line 398, Address: 0x101d254, Func Offset: 0x154
	// Line 399, Address: 0x101d264, Func Offset: 0x164
	// Line 400, Address: 0x101d270, Func Offset: 0x170
	// Line 402, Address: 0x101d278, Func Offset: 0x178
	// Line 403, Address: 0x101d284, Func Offset: 0x184
	// Func End, Address: 0x101d29c, Func Offset: 0x19c
}

// 
// Start address: 0x101d2a0
void futagor8(_anon1* trapwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 488, Address: 0x101d2a0, Func Offset: 0
	// Line 489, Address: 0x101d2ac, Func Offset: 0xc
	// Line 491, Address: 0x101d2c8, Func Offset: 0x28
	// Line 492, Address: 0x101d304, Func Offset: 0x64
	// Line 493, Address: 0x101d310, Func Offset: 0x70
	// Line 494, Address: 0x101d31c, Func Offset: 0x7c
	// Line 495, Address: 0x101d330, Func Offset: 0x90
	// Func End, Address: 0x101d340, Func Offset: 0xa0
}

// 
// Start address: 0x101d340
void futagor8_ridechk(_anon1* trapwk)
{
	// Line 498, Address: 0x101d340, Func Offset: 0
	// Line 499, Address: 0x101d34c, Func Offset: 0xc
	// Line 500, Address: 0x101d360, Func Offset: 0x20
	// Func End, Address: 0x101d370, Func Offset: 0x30
}

// 
// Start address: 0x101d370
void futagor8_init(_anon1* trapwk)
{
	// Line 504, Address: 0x101d370, Func Offset: 0
	// Line 505, Address: 0x101d37c, Func Offset: 0xc
	// Line 506, Address: 0x101d38c, Func Offset: 0x1c
	// Line 507, Address: 0x101d39c, Func Offset: 0x2c
	// Line 509, Address: 0x101d3a8, Func Offset: 0x38
	// Line 510, Address: 0x101d3b8, Func Offset: 0x48
	// Line 511, Address: 0x101d3c8, Func Offset: 0x58
	// Line 512, Address: 0x101d3d8, Func Offset: 0x68
	// Line 513, Address: 0x101d3e4, Func Offset: 0x74
	// Func End, Address: 0x101d3f4, Func Offset: 0x84
}

// 
// Start address: 0x101d400
void futagor8_move1(_anon1* trapwk)
{
	unsigned char patchg_point;
	// Line 517, Address: 0x101d400, Func Offset: 0
	// Line 520, Address: 0x101d40c, Func Offset: 0xc
	// Line 521, Address: 0x101d420, Func Offset: 0x20
	// Line 522, Address: 0x101d438, Func Offset: 0x38
	// Line 523, Address: 0x101d454, Func Offset: 0x54
	// Line 524, Address: 0x101d474, Func Offset: 0x74
	// Line 525, Address: 0x101d494, Func Offset: 0x94
	// Line 526, Address: 0x101d4b4, Func Offset: 0xb4
	// Line 527, Address: 0x101d4bc, Func Offset: 0xbc
	// Line 528, Address: 0x101d4dc, Func Offset: 0xdc
	// Line 531, Address: 0x101d508, Func Offset: 0x108
	// Line 532, Address: 0x101d52c, Func Offset: 0x12c
	// Line 533, Address: 0x101d538, Func Offset: 0x138
	// Func End, Address: 0x101d548, Func Offset: 0x148
}

