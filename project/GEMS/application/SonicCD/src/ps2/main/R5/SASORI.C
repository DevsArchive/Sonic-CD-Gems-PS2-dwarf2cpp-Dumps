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
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[11];
typedef _anon1* type_4[2];
typedef _anon1* type_5[2];
typedef unsigned char* type_6[1];
typedef unsigned char* type_7[1];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];
typedef _anon0 type_10[128];
typedef _anon1* type_11[2];
typedef _anon1* type_12[2];
typedef unsigned char type_13[4];
typedef unsigned char type_14[4];

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

_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1 pat03;
_anon1 pat04;
_anon1 pat05;
_anon1 pat06;
_anon1 pat07;
_anon1* pat_sasori_e[2];
_anon1* pat_sasori_b[2];
_anon1* pat_tail[2];
_anon1* pat_tama[2];
unsigned char pchg00[4];
unsigned char* pchg[1];
unsigned char pchg_tama00[4];
unsigned char* pchg_tama[1];
_anon0 actwk[128];

void sasori(_anon0* pActwk);
void body_init(_anon0* pActwk);
void init_sub(_anon0* pActwk0, _anon0* pActwk1);
void body_fall(_anon0* pActwk);
void body_move(_anon0* pActwk);
void body_waita(_anon0* pActwk);
void body_waita1(_anon0* pActwk);
void body_waitb(_anon0* pActwk);
void body_waitb1(_anon0* pActwk);
void body_waitc(_anon0* pActwk);
void body_waitc1(_anon0* pActwk);
void body_waitd(_anon0* pActwk);
void body_waitd1(_anon0* pActwk);

// 
// Start address: 0x1025840
void sasori(_anon0* pActwk)
{
	_anon0* pMainwk;
	void(*tbl)(_anon0*)[11];
	// Line 171, Address: 0x1025840, Func Offset: 0
	// Line 174, Address: 0x1025850, Func Offset: 0x10
	// Line 189, Address: 0x102587c, Func Offset: 0x3c
	// Line 191, Address: 0x1025894, Func Offset: 0x54
	// Line 192, Address: 0x10258a8, Func Offset: 0x68
	// Line 193, Address: 0x10258e4, Func Offset: 0xa4
	// Line 194, Address: 0x10258f8, Func Offset: 0xb8
	// Line 195, Address: 0x1025904, Func Offset: 0xc4
	// Line 196, Address: 0x1025918, Func Offset: 0xd8
	// Line 199, Address: 0x1025920, Func Offset: 0xe0
	// Line 200, Address: 0x1025948, Func Offset: 0x108
	// Line 202, Address: 0x102595c, Func Offset: 0x11c
	// Line 203, Address: 0x1025968, Func Offset: 0x128
	// Line 205, Address: 0x1025970, Func Offset: 0x130
	// Line 207, Address: 0x102598c, Func Offset: 0x14c
	// Line 208, Address: 0x1025998, Func Offset: 0x158
	// Line 211, Address: 0x10259a0, Func Offset: 0x160
	// Line 212, Address: 0x10259b8, Func Offset: 0x178
	// Line 213, Address: 0x10259cc, Func Offset: 0x18c
	// Line 214, Address: 0x10259d8, Func Offset: 0x198
	// Line 217, Address: 0x10259e4, Func Offset: 0x1a4
	// Func End, Address: 0x10259f8, Func Offset: 0x1b8
}

// 
// Start address: 0x1025a00
void body_init(_anon0* pActwk)
{
	// Line 222, Address: 0x1025a00, Func Offset: 0
	// Line 223, Address: 0x1025a08, Func Offset: 0x8
	// Line 224, Address: 0x1025a18, Func Offset: 0x18
	// Line 225, Address: 0x1025a24, Func Offset: 0x24
	// Line 226, Address: 0x1025a30, Func Offset: 0x30
	// Line 227, Address: 0x1025a3c, Func Offset: 0x3c
	// Line 228, Address: 0x1025a48, Func Offset: 0x48
	// Line 229, Address: 0x1025a54, Func Offset: 0x54
	// Line 230, Address: 0x1025a64, Func Offset: 0x64
	// Line 231, Address: 0x1025a74, Func Offset: 0x74
	// Line 232, Address: 0x1025a80, Func Offset: 0x80
	// Line 233, Address: 0x1025a8c, Func Offset: 0x8c
	// Line 235, Address: 0x1025a9c, Func Offset: 0x9c
	// Line 236, Address: 0x1025aac, Func Offset: 0xac
	// Line 237, Address: 0x1025ab8, Func Offset: 0xb8
	// Line 240, Address: 0x1025ac4, Func Offset: 0xc4
	// Line 241, Address: 0x1025ad4, Func Offset: 0xd4
	// Line 242, Address: 0x1025ae0, Func Offset: 0xe0
	// Func End, Address: 0x1025aec, Func Offset: 0xec
}

// 
// Start address: 0x1025af0
void init_sub(_anon0* pActwk0, _anon0* pActwk1)
{
	// Line 247, Address: 0x1025af0, Func Offset: 0
	// Line 248, Address: 0x1025afc, Func Offset: 0xc
	// Line 249, Address: 0x1025b0c, Func Offset: 0x1c
	// Line 250, Address: 0x1025b1c, Func Offset: 0x2c
	// Line 251, Address: 0x1025b2c, Func Offset: 0x3c
	// Line 252, Address: 0x1025b3c, Func Offset: 0x4c
	// Line 254, Address: 0x1025b78, Func Offset: 0x88
	// Line 255, Address: 0x1025b88, Func Offset: 0x98
	// Line 256, Address: 0x1025b94, Func Offset: 0xa4
	// Func End, Address: 0x1025ba0, Func Offset: 0xb0
}

// 
// Start address: 0x1025ba0
void body_fall(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short d1;
	// Line 261, Address: 0x1025ba0, Func Offset: 0
	// Line 265, Address: 0x1025bb0, Func Offset: 0x10
	// Line 266, Address: 0x1025bc0, Func Offset: 0x20
	// Line 267, Address: 0x1025bd4, Func Offset: 0x34
	// Line 269, Address: 0x1025be4, Func Offset: 0x44
	// Line 270, Address: 0x1025bf4, Func Offset: 0x54
	// Line 271, Address: 0x1025c04, Func Offset: 0x64
	// Line 273, Address: 0x1025c1c, Func Offset: 0x7c
	// Line 274, Address: 0x1025c28, Func Offset: 0x88
	// Line 276, Address: 0x1025c30, Func Offset: 0x90
	// Line 277, Address: 0x1025c6c, Func Offset: 0xcc
	// Line 278, Address: 0x1025c78, Func Offset: 0xd8
	// Line 279, Address: 0x1025c84, Func Offset: 0xe4
	// Line 280, Address: 0x1025c90, Func Offset: 0xf0
	// Line 281, Address: 0x1025c9c, Func Offset: 0xfc
	// Line 282, Address: 0x1025cac, Func Offset: 0x10c
	// Line 283, Address: 0x1025cbc, Func Offset: 0x11c
	// Line 284, Address: 0x1025ccc, Func Offset: 0x12c
	// Line 286, Address: 0x1025cdc, Func Offset: 0x13c
	// Func End, Address: 0x1025cf0, Func Offset: 0x150
}

// 
// Start address: 0x1025cf0
void body_move(_anon0* pActwk)
{
	_anon0* pTailwk;
	_anon0* pPlayerwk;
	short d0;
	short d1;
	short carry_flag;
	unsigned char bd0;
	unsigned char bd1;
	// Line 291, Address: 0x1025cf0, Func Offset: 0
	// Line 298, Address: 0x1025d18, Func Offset: 0x28
	// Line 299, Address: 0x1025d30, Func Offset: 0x40
	// Line 300, Address: 0x1025d40, Func Offset: 0x50
	// Line 301, Address: 0x1025d54, Func Offset: 0x64
	// Line 303, Address: 0x1025d64, Func Offset: 0x74
	// Line 305, Address: 0x1025d70, Func Offset: 0x80
	// Line 306, Address: 0x1025d84, Func Offset: 0x94
	// Line 307, Address: 0x1025d98, Func Offset: 0xa8
	// Line 308, Address: 0x1025da0, Func Offset: 0xb0
	// Line 309, Address: 0x1025dac, Func Offset: 0xbc
	// Line 310, Address: 0x1025dc0, Func Offset: 0xd0
	// Line 311, Address: 0x1025dcc, Func Offset: 0xdc
	// Line 312, Address: 0x1025ddc, Func Offset: 0xec
	// Line 313, Address: 0x1025e04, Func Offset: 0x114
	// Line 314, Address: 0x1025e10, Func Offset: 0x120
	// Line 315, Address: 0x1025e1c, Func Offset: 0x12c
	// Line 316, Address: 0x1025e30, Func Offset: 0x140
	// Line 317, Address: 0x1025e3c, Func Offset: 0x14c
	// Line 319, Address: 0x1025e44, Func Offset: 0x154
	// Line 320, Address: 0x1025e50, Func Offset: 0x160
	// Line 321, Address: 0x1025e64, Func Offset: 0x174
	// Line 322, Address: 0x1025e70, Func Offset: 0x180
	// Line 324, Address: 0x1025e84, Func Offset: 0x194
	// Line 325, Address: 0x1025e88, Func Offset: 0x198
	// Line 326, Address: 0x1025e94, Func Offset: 0x1a4
	// Line 329, Address: 0x1025e9c, Func Offset: 0x1ac
	// Line 330, Address: 0x1025ea8, Func Offset: 0x1b8
	// Line 331, Address: 0x1025eb4, Func Offset: 0x1c4
	// Line 332, Address: 0x1025ec8, Func Offset: 0x1d8
	// Line 333, Address: 0x1025ed0, Func Offset: 0x1e0
	// Line 334, Address: 0x1025edc, Func Offset: 0x1ec
	// Line 336, Address: 0x1025ef0, Func Offset: 0x200
	// Line 337, Address: 0x1025ef4, Func Offset: 0x204
	// Line 340, Address: 0x1025efc, Func Offset: 0x20c
	// Line 344, Address: 0x1025f08, Func Offset: 0x218
	// Line 346, Address: 0x1025f10, Func Offset: 0x220
	// Line 347, Address: 0x1025f20, Func Offset: 0x230
	// Line 348, Address: 0x1025f40, Func Offset: 0x250
	// Line 349, Address: 0x1025f44, Func Offset: 0x254
	// Line 350, Address: 0x1025f6c, Func Offset: 0x27c
	// Line 351, Address: 0x1025f70, Func Offset: 0x280
	// Line 352, Address: 0x1025f78, Func Offset: 0x288
	// Line 354, Address: 0x1025f80, Func Offset: 0x290
	// Line 356, Address: 0x1025f88, Func Offset: 0x298
	// Line 357, Address: 0x1025fa0, Func Offset: 0x2b0
	// Line 358, Address: 0x1025fb0, Func Offset: 0x2c0
	// Line 359, Address: 0x1025fc0, Func Offset: 0x2d0
	// Line 360, Address: 0x1025fe8, Func Offset: 0x2f8
	// Line 361, Address: 0x1025ff8, Func Offset: 0x308
	// Line 362, Address: 0x1026004, Func Offset: 0x314
	// Line 363, Address: 0x1026014, Func Offset: 0x324
	// Line 364, Address: 0x1026020, Func Offset: 0x330
	// Func End, Address: 0x102604c, Func Offset: 0x35c
}

// 
// Start address: 0x1026050
void body_waita(_anon0* pActwk)
{
	_anon0* pTailwk;
	// Line 369, Address: 0x1026050, Func Offset: 0
	// Line 372, Address: 0x1026060, Func Offset: 0x10
	// Line 373, Address: 0x1026070, Func Offset: 0x20
	// Line 374, Address: 0x102607c, Func Offset: 0x2c
	// Line 375, Address: 0x10260a4, Func Offset: 0x54
	// Line 376, Address: 0x10260b0, Func Offset: 0x60
	// Line 377, Address: 0x10260bc, Func Offset: 0x6c
	// Line 378, Address: 0x10260d0, Func Offset: 0x80
	// Line 380, Address: 0x10260dc, Func Offset: 0x8c
	// Line 381, Address: 0x10260e8, Func Offset: 0x98
	// Func End, Address: 0x10260fc, Func Offset: 0xac
}

// 
// Start address: 0x1026100
void body_waita1(_anon0* pActwk)
{
	_anon0* pTailwk;
	short d0;
	// Line 386, Address: 0x1026100, Func Offset: 0
	// Line 390, Address: 0x1026110, Func Offset: 0x10
	// Line 391, Address: 0x1026120, Func Offset: 0x20
	// Line 393, Address: 0x1026138, Func Offset: 0x38
	// Line 394, Address: 0x1026148, Func Offset: 0x48
	// Line 395, Address: 0x1026170, Func Offset: 0x70
	// Line 396, Address: 0x102617c, Func Offset: 0x7c
	// Line 397, Address: 0x1026188, Func Offset: 0x88
	// Line 399, Address: 0x10261a0, Func Offset: 0xa0
	// Line 401, Address: 0x10261ac, Func Offset: 0xac
	// Line 403, Address: 0x10261b8, Func Offset: 0xb8
	// Func End, Address: 0x10261cc, Func Offset: 0xcc
}

// 
// Start address: 0x10261d0
void body_waitb(_anon0* pActwk)
{
	// Line 408, Address: 0x10261d0, Func Offset: 0
	// Line 409, Address: 0x10261dc, Func Offset: 0xc
	// Line 410, Address: 0x10261ec, Func Offset: 0x1c
	// Line 412, Address: 0x10261f8, Func Offset: 0x28
	// Line 413, Address: 0x1026204, Func Offset: 0x34
	// Func End, Address: 0x1026214, Func Offset: 0x44
}

// 
// Start address: 0x1026220
void body_waitb1(_anon0* pActwk)
{
	_anon0* pNewActwk;
	int d1;
	short d0;
	// Line 418, Address: 0x1026220, Func Offset: 0
	// Line 423, Address: 0x1026234, Func Offset: 0x14
	// Line 424, Address: 0x1026244, Func Offset: 0x24
	// Line 426, Address: 0x102625c, Func Offset: 0x3c
	// Line 427, Address: 0x102626c, Func Offset: 0x4c
	// Line 429, Address: 0x1026284, Func Offset: 0x64
	// Line 431, Address: 0x1026298, Func Offset: 0x78
	// Line 432, Address: 0x10262a4, Func Offset: 0x84
	// Line 433, Address: 0x10262b0, Func Offset: 0x90
	// Line 434, Address: 0x10262bc, Func Offset: 0x9c
	// Line 435, Address: 0x10262c8, Func Offset: 0xa8
	// Line 436, Address: 0x10262d4, Func Offset: 0xb4
	// Line 437, Address: 0x10262e4, Func Offset: 0xc4
	// Line 438, Address: 0x10262f4, Func Offset: 0xd4
	// Line 439, Address: 0x1026304, Func Offset: 0xe4
	// Line 440, Address: 0x1026310, Func Offset: 0xf0
	// Line 441, Address: 0x1026314, Func Offset: 0xf4
	// Line 443, Address: 0x102632c, Func Offset: 0x10c
	// Line 444, Address: 0x1026338, Func Offset: 0x118
	// Line 446, Address: 0x102633c, Func Offset: 0x11c
	// Line 447, Address: 0x102634c, Func Offset: 0x12c
	// Line 448, Address: 0x1026354, Func Offset: 0x134
	// Line 450, Address: 0x102636c, Func Offset: 0x14c
	// Line 455, Address: 0x1026378, Func Offset: 0x158
	// Func End, Address: 0x1026390, Func Offset: 0x170
}

// 
// Start address: 0x1026390
void body_waitc(_anon0* pActwk)
{
	// Line 460, Address: 0x1026390, Func Offset: 0
	// Line 461, Address: 0x102639c, Func Offset: 0xc
	// Line 462, Address: 0x10263ac, Func Offset: 0x1c
	// Line 464, Address: 0x10263b8, Func Offset: 0x28
	// Line 465, Address: 0x10263c4, Func Offset: 0x34
	// Func End, Address: 0x10263d4, Func Offset: 0x44
}

// 
// Start address: 0x10263e0
void body_waitc1(_anon0* pActwk)
{
	_anon0* pTailwk;
	short d0;
	// Line 470, Address: 0x10263e0, Func Offset: 0
	// Line 474, Address: 0x10263f0, Func Offset: 0x10
	// Line 475, Address: 0x1026400, Func Offset: 0x20
	// Line 477, Address: 0x1026418, Func Offset: 0x38
	// Line 478, Address: 0x1026428, Func Offset: 0x48
	// Line 479, Address: 0x1026450, Func Offset: 0x70
	// Line 480, Address: 0x102645c, Func Offset: 0x7c
	// Line 481, Address: 0x1026468, Func Offset: 0x88
	// Line 483, Address: 0x1026480, Func Offset: 0xa0
	// Line 485, Address: 0x102648c, Func Offset: 0xac
	// Line 487, Address: 0x1026498, Func Offset: 0xb8
	// Func End, Address: 0x10264ac, Func Offset: 0xcc
}

// 
// Start address: 0x10264b0
void body_waitd(_anon0* pActwk)
{
	// Line 492, Address: 0x10264b0, Func Offset: 0
	// Line 493, Address: 0x10264bc, Func Offset: 0xc
	// Line 494, Address: 0x10264cc, Func Offset: 0x1c
	// Line 496, Address: 0x10264d8, Func Offset: 0x28
	// Line 497, Address: 0x10264e4, Func Offset: 0x34
	// Func End, Address: 0x10264f4, Func Offset: 0x44
}

// 
// Start address: 0x1026500
void body_waitd1(_anon0* pActwk)
{
	// Line 502, Address: 0x1026500, Func Offset: 0
	// Line 503, Address: 0x1026508, Func Offset: 0x8
	// Line 504, Address: 0x1026518, Func Offset: 0x18
	// Line 506, Address: 0x1026530, Func Offset: 0x30
	// Line 508, Address: 0x102653c, Func Offset: 0x3c
	// Func End, Address: 0x1026548, Func Offset: 0x48
}

