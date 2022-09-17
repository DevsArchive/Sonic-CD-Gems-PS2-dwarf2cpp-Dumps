typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_6)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[3];
typedef _anon1* type_4[2];
typedef unsigned char type_5[4];
typedef void(*type_7)(_anon0*)[5];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];
typedef _anon1* type_10[2];
typedef _anon1* type_11[1];
typedef unsigned char* type_12[1];
typedef _anon0 type_13[128];

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

unsigned char pchg0[4];
unsigned char* pchg[1];
_anon1 spr_tagame_b_00;
_anon1 spr_tagame_b_01;
_anon1 spr_tagame_e_00;
_anon1 spr_tagame_e_01;
_anon1 spr_tagame_99;
_anon1* pat_tagameb_b[2];
_anon1* pat_tagameb_e[2];
_anon1* pat[1];
_anon0 actwk[128];

void tagameb(_anon0* pActwk);
void tagameb0(_anon0* pActwk);
void a_init(_anon0* pActwk);
void make_toge(_anon0* pActwk);
void a_init_sub(short subact, _anon0* pActwk);
void a_move(_anon0* pActwk);
int a_check(_anon0* pActwk);
void a_stop(_anon0* pActwk);
void a_stop1(_anon0* pActwk);
void a_dash(_anon0* pActwk);
void tagameb1(_anon0* pActwk);
void b_init(_anon0* pActwk);
void b_follow(_anon0* pActwk);
void b_move(_anon0* pActwk);

// 
// Start address: 0x101f2d0
void tagameb(_anon0* pActwk)
{
	// Line 174, Address: 0x101f2d0, Func Offset: 0
	// Line 175, Address: 0x101f2dc, Func Offset: 0xc
	// Line 176, Address: 0x101f2f4, Func Offset: 0x24
	// Line 178, Address: 0x101f308, Func Offset: 0x38
	// Line 179, Address: 0x101f314, Func Offset: 0x44
	// Func End, Address: 0x101f324, Func Offset: 0x54
}

// 
// Start address: 0x101f330
void tagameb0(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[5];
	// Line 184, Address: 0x101f330, Func Offset: 0
	// Line 194, Address: 0x101f33c, Func Offset: 0xc
	// Line 195, Address: 0x101f350, Func Offset: 0x20
	// Line 196, Address: 0x101f394, Func Offset: 0x64
	// Line 197, Address: 0x101f3a0, Func Offset: 0x70
	// Line 198, Address: 0x101f3ac, Func Offset: 0x7c
	// Func End, Address: 0x101f3bc, Func Offset: 0x8c
}

// 
// Start address: 0x101f3c0
void a_init(_anon0* pActwk)
{
	// Line 202, Address: 0x101f3c0, Func Offset: 0
	// Line 203, Address: 0x101f3cc, Func Offset: 0xc
	// Line 204, Address: 0x101f3dc, Func Offset: 0x1c
	// Line 205, Address: 0x101f3ec, Func Offset: 0x2c
	// Line 206, Address: 0x101f3f8, Func Offset: 0x38
	// Line 207, Address: 0x101f404, Func Offset: 0x44
	// Line 208, Address: 0x101f410, Func Offset: 0x50
	// Line 209, Address: 0x101f41c, Func Offset: 0x5c
	// Line 210, Address: 0x101f428, Func Offset: 0x68
	// Line 211, Address: 0x101f434, Func Offset: 0x74
	// Line 213, Address: 0x101f444, Func Offset: 0x84
	// Line 215, Address: 0x101f454, Func Offset: 0x94
	// Line 216, Address: 0x101f464, Func Offset: 0xa4
	// Line 217, Address: 0x101f470, Func Offset: 0xb0
	// Line 218, Address: 0x101f47c, Func Offset: 0xbc
	// Line 221, Address: 0x101f484, Func Offset: 0xc4
	// Line 222, Address: 0x101f494, Func Offset: 0xd4
	// Line 223, Address: 0x101f4a0, Func Offset: 0xe0
	// Line 224, Address: 0x101f4ac, Func Offset: 0xec
	// Line 226, Address: 0x101f4b4, Func Offset: 0xf4
	// Line 227, Address: 0x101f4c0, Func Offset: 0x100
	// Func End, Address: 0x101f4d0, Func Offset: 0x110
}

// 
// Start address: 0x101f4d0
void make_toge(_anon0* pActwk)
{
	_anon0* subActwk;
	// Line 230, Address: 0x101f4d0, Func Offset: 0
	// Line 233, Address: 0x101f4dc, Func Offset: 0xc
	// Line 235, Address: 0x101f4f0, Func Offset: 0x20
	// Line 236, Address: 0x101f500, Func Offset: 0x30
	// Line 237, Address: 0x101f50c, Func Offset: 0x3c
	// Line 238, Address: 0x101f51c, Func Offset: 0x4c
	// Line 239, Address: 0x101f55c, Func Offset: 0x8c
	// Line 240, Address: 0x101f59c, Func Offset: 0xcc
	// Line 243, Address: 0x101f5a4, Func Offset: 0xd4
	// Line 244, Address: 0x101f5b0, Func Offset: 0xe0
	// Line 246, Address: 0x101f5b8, Func Offset: 0xe8
	// Line 248, Address: 0x101f5cc, Func Offset: 0xfc
	// Line 249, Address: 0x101f5dc, Func Offset: 0x10c
	// Line 250, Address: 0x101f5e8, Func Offset: 0x118
	// Line 251, Address: 0x101f5f8, Func Offset: 0x128
	// Line 252, Address: 0x101f638, Func Offset: 0x168
	// Line 253, Address: 0x101f678, Func Offset: 0x1a8
	// Line 256, Address: 0x101f680, Func Offset: 0x1b0
	// Line 257, Address: 0x101f68c, Func Offset: 0x1bc
	// Line 259, Address: 0x101f694, Func Offset: 0x1c4
	// Line 261, Address: 0x101f6a8, Func Offset: 0x1d8
	// Line 262, Address: 0x101f6b8, Func Offset: 0x1e8
	// Line 263, Address: 0x101f6c4, Func Offset: 0x1f4
	// Line 264, Address: 0x101f6d4, Func Offset: 0x204
	// Line 265, Address: 0x101f714, Func Offset: 0x244
	// Line 266, Address: 0x101f754, Func Offset: 0x284
	// Line 269, Address: 0x101f75c, Func Offset: 0x28c
	// Line 270, Address: 0x101f768, Func Offset: 0x298
	// Line 273, Address: 0x101f770, Func Offset: 0x2a0
	// Line 274, Address: 0x101f784, Func Offset: 0x2b4
	// Line 275, Address: 0x101f7b8, Func Offset: 0x2e8
	// Line 276, Address: 0x101f7ec, Func Offset: 0x31c
	// Line 277, Address: 0x101f800, Func Offset: 0x330
	// Line 278, Address: 0x101f834, Func Offset: 0x364
	// Line 279, Address: 0x101f868, Func Offset: 0x398
	// Line 280, Address: 0x101f87c, Func Offset: 0x3ac
	// Line 281, Address: 0x101f8b0, Func Offset: 0x3e0
	// Line 282, Address: 0x101f8e4, Func Offset: 0x414
	// Func End, Address: 0x101f8f4, Func Offset: 0x424
}

// 
// Start address: 0x101f900
void a_init_sub(short subact, _anon0* pActwk)
{
	// Line 285, Address: 0x101f900, Func Offset: 0
	// Line 286, Address: 0x101f90c, Func Offset: 0xc
	// Line 287, Address: 0x101f93c, Func Offset: 0x3c
	// Line 288, Address: 0x101f96c, Func Offset: 0x6c
	// Line 289, Address: 0x101f99c, Func Offset: 0x9c
	// Line 290, Address: 0x101f9c8, Func Offset: 0xc8
	// Line 291, Address: 0x101f9f4, Func Offset: 0xf4
	// Line 292, Address: 0x101fa20, Func Offset: 0x120
	// Line 293, Address: 0x101fa4c, Func Offset: 0x14c
	// Line 294, Address: 0x101fa78, Func Offset: 0x178
	// Func End, Address: 0x101fa84, Func Offset: 0x184
}

// 
// Start address: 0x101fa90
void a_move(_anon0* pActwk)
{
	// Line 298, Address: 0x101fa90, Func Offset: 0
	// Line 299, Address: 0x101fa9c, Func Offset: 0xc
	// Line 301, Address: 0x101faac, Func Offset: 0x1c
	// Line 304, Address: 0x101fac0, Func Offset: 0x30
	// Line 305, Address: 0x101fad0, Func Offset: 0x40
	// Line 306, Address: 0x101fadc, Func Offset: 0x4c
	// Line 310, Address: 0x101fae4, Func Offset: 0x54
	// Line 312, Address: 0x101fafc, Func Offset: 0x6c
	// Line 314, Address: 0x101fb0c, Func Offset: 0x7c
	// Line 315, Address: 0x101fb48, Func Offset: 0xb8
	// Line 316, Address: 0x101fb84, Func Offset: 0xf4
	// Line 319, Address: 0x101fbc0, Func Offset: 0x130
	// Line 320, Address: 0x101fbd0, Func Offset: 0x140
	// Line 322, Address: 0x101fbe8, Func Offset: 0x158
	// Line 323, Address: 0x101fbf8, Func Offset: 0x168
	// Line 324, Address: 0x101fc08, Func Offset: 0x178
	// Line 325, Address: 0x101fc18, Func Offset: 0x188
	// Line 327, Address: 0x101fc28, Func Offset: 0x198
	// Line 329, Address: 0x101fc38, Func Offset: 0x1a8
	// Line 330, Address: 0x101fc6c, Func Offset: 0x1dc
	// Line 331, Address: 0x101fca0, Func Offset: 0x210
	// Line 332, Address: 0x101fcd4, Func Offset: 0x244
	// Line 334, Address: 0x101fcec, Func Offset: 0x25c
	// Line 335, Address: 0x101fd20, Func Offset: 0x290
	// Line 336, Address: 0x101fd54, Func Offset: 0x2c4
	// Line 337, Address: 0x101fd88, Func Offset: 0x2f8
	// Line 340, Address: 0x101fd90, Func Offset: 0x300
	// Line 341, Address: 0x101fdc4, Func Offset: 0x334
	// Line 342, Address: 0x101fdf8, Func Offset: 0x368
	// Line 347, Address: 0x101fe2c, Func Offset: 0x39c
	// Line 348, Address: 0x101fe40, Func Offset: 0x3b0
	// Func End, Address: 0x101fe50, Func Offset: 0x3c0
}

// 
// Start address: 0x101fe50
int a_check(_anon0* pActwk)
{
	short wD0;
	int ret;
	// Line 351, Address: 0x101fe50, Func Offset: 0
	// Line 357, Address: 0x101fe60, Func Offset: 0x10
	// Line 359, Address: 0x101fe64, Func Offset: 0x14
	// Line 360, Address: 0x101fe9c, Func Offset: 0x4c
	// Line 362, Address: 0x101feac, Func Offset: 0x5c
	// Line 363, Address: 0x101fee0, Func Offset: 0x90
	// Line 364, Address: 0x101fef8, Func Offset: 0xa8
	// Line 365, Address: 0x101ff04, Func Offset: 0xb4
	// Line 366, Address: 0x101ff10, Func Offset: 0xc0
	// Line 367, Address: 0x101ff20, Func Offset: 0xd0
	// Line 369, Address: 0x101ff24, Func Offset: 0xd4
	// Line 370, Address: 0x101ff28, Func Offset: 0xd8
	// Func End, Address: 0x101ff3c, Func Offset: 0xec
}

// 
// Start address: 0x101ff40
void a_stop(_anon0* pActwk)
{
	short subact;
	// Line 374, Address: 0x101ff40, Func Offset: 0
	// Line 377, Address: 0x101ff50, Func Offset: 0x10
	// Line 378, Address: 0x101ff60, Func Offset: 0x20
	// Line 380, Address: 0x101ff78, Func Offset: 0x38
	// Line 381, Address: 0x101ff8c, Func Offset: 0x4c
	// Line 384, Address: 0x101ff98, Func Offset: 0x58
	// Line 385, Address: 0x101ffa4, Func Offset: 0x64
	// Line 387, Address: 0x101ffb4, Func Offset: 0x74
	// Line 389, Address: 0x101ffc4, Func Offset: 0x84
	// Line 390, Address: 0x101ffd4, Func Offset: 0x94
	// Line 391, Address: 0x1020000, Func Offset: 0xc0
	// Line 392, Address: 0x102002c, Func Offset: 0xec
	// Line 393, Address: 0x1020054, Func Offset: 0x114
	// Line 394, Address: 0x1020080, Func Offset: 0x140
	// Line 395, Address: 0x10200ac, Func Offset: 0x16c
	// Line 396, Address: 0x10200bc, Func Offset: 0x17c
	// Line 397, Address: 0x10200e8, Func Offset: 0x1a8
	// Line 398, Address: 0x1020114, Func Offset: 0x1d4
	// Line 399, Address: 0x102013c, Func Offset: 0x1fc
	// Line 400, Address: 0x1020168, Func Offset: 0x228
	// Line 401, Address: 0x1020194, Func Offset: 0x254
	// Line 402, Address: 0x10201a4, Func Offset: 0x264
	// Line 403, Address: 0x10201d0, Func Offset: 0x290
	// Line 404, Address: 0x10201fc, Func Offset: 0x2bc
	// Line 405, Address: 0x1020224, Func Offset: 0x2e4
	// Line 406, Address: 0x1020250, Func Offset: 0x310
	// Line 409, Address: 0x102027c, Func Offset: 0x33c
	// Func End, Address: 0x1020290, Func Offset: 0x350
}

// 
// Start address: 0x1020290
void a_stop1(_anon0* pActwk)
{
	// Line 413, Address: 0x1020290, Func Offset: 0
	// Line 414, Address: 0x1020298, Func Offset: 0x8
	// Line 415, Address: 0x10202a8, Func Offset: 0x18
	// Line 417, Address: 0x10202c0, Func Offset: 0x30
	// Line 419, Address: 0x10202d0, Func Offset: 0x40
	// Line 420, Address: 0x10202e0, Func Offset: 0x50
	// Line 422, Address: 0x10202f4, Func Offset: 0x64
	// Line 424, Address: 0x1020304, Func Offset: 0x74
	// Line 425, Address: 0x102031c, Func Offset: 0x8c
	// Line 428, Address: 0x102032c, Func Offset: 0x9c
	// Func End, Address: 0x1020338, Func Offset: 0xa8
}

// 
// Start address: 0x1020340
void a_dash(_anon0* pActwk)
{
	// Line 432, Address: 0x1020340, Func Offset: 0
	// Line 433, Address: 0x1020348, Func Offset: 0x8
	// Line 434, Address: 0x1020360, Func Offset: 0x20
	// Func End, Address: 0x102036c, Func Offset: 0x2c
}

// 
// Start address: 0x1020370
void tagameb1(_anon0* pActwk)
{
	short subact;
	void(*tbl)(_anon0*)[3];
	// Line 450, Address: 0x1020370, Func Offset: 0
	// Line 459, Address: 0x1020380, Func Offset: 0x10
	// Line 460, Address: 0x1020390, Func Offset: 0x20
	// Line 462, Address: 0x10203c4, Func Offset: 0x54
	// Line 463, Address: 0x10203d0, Func Offset: 0x60
	// Line 465, Address: 0x10203d8, Func Offset: 0x68
	// Line 467, Address: 0x1020414, Func Offset: 0xa4
	// Line 468, Address: 0x1020420, Func Offset: 0xb0
	// Line 470, Address: 0x1020428, Func Offset: 0xb8
	// Line 471, Address: 0x102046c, Func Offset: 0xfc
	// Func End, Address: 0x1020480, Func Offset: 0x110
}

// 
// Start address: 0x1020480
void b_init(_anon0* pActwk)
{
	// Line 475, Address: 0x1020480, Func Offset: 0
	// Line 476, Address: 0x102048c, Func Offset: 0xc
	// Line 477, Address: 0x102049c, Func Offset: 0x1c
	// Line 478, Address: 0x10204ac, Func Offset: 0x2c
	// Line 479, Address: 0x10204b8, Func Offset: 0x38
	// Func End, Address: 0x10204c8, Func Offset: 0x48
}

// 
// Start address: 0x10204d0
void b_follow(_anon0* pActwk)
{
	// Line 483, Address: 0x10204d0, Func Offset: 0
	// Line 484, Address: 0x10204dc, Func Offset: 0xc
	// Line 485, Address: 0x10204e8, Func Offset: 0x18
	// Func End, Address: 0x10204f8, Func Offset: 0x28
}

// 
// Start address: 0x1020500
void b_move(_anon0* pActwk)
{
	// Line 489, Address: 0x1020500, Func Offset: 0
	// Line 490, Address: 0x102050c, Func Offset: 0xc
	// Line 491, Address: 0x1020528, Func Offset: 0x28
	// Line 492, Address: 0x1020544, Func Offset: 0x44
	// Line 493, Address: 0x1020568, Func Offset: 0x68
	// Line 495, Address: 0x102058c, Func Offset: 0x8c
	// Line 497, Address: 0x10205bc, Func Offset: 0xbc
	// Line 498, Address: 0x10205c8, Func Offset: 0xc8
	// Line 500, Address: 0x10205d0, Func Offset: 0xd0
	// Line 501, Address: 0x10205dc, Func Offset: 0xdc
	// Func End, Address: 0x10205ec, Func Offset: 0xec
}

