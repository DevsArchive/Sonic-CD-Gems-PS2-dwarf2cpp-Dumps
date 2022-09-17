typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon0 type_4[128];

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

_anon0 actwk[128];
unsigned char chibi_flag;
_anon5 editmode;
_anon5 stageno;

short ride_on_clr(_anon0* pActwk, _anon0* pPlayerwk);
short ride_on_set(_anon0* pActwk, _anon0* pPlayerwk);
short hitchk_u(_anon0* pActwk, _anon0* pPlayerwk);
short ridechk(_anon0* pActwk, _anon0* pPlayerwk);
short ride_on_chk(_anon0* pActwk, _anon0* pPlayerwk);
short hitchk(_anon0* pActwk, _anon0* pPlayerwk);
short hit_v(_anon0* pActwk, _anon0* pPlayerwk, short iHitXs, short iHitHs);
short hit_x(_anon0* pActwk, _anon0* pPlayerwk, short iHitXs, short iD5);
short push_set(_anon0* pActwk, _anon0* pPlayerwk);
short push_clr(_anon0* pActwk, _anon0* pPlayerwk);
short hit_y(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs);
short hit_yu(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs);
short hit_yu1(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs);
short hit_yu0(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs);
short hit_e(_anon0* pActwk, _anon0* pPlayerwk);
void side_coli(_anon0* pActwk, _anon0* pPlayerwk);
void hit_set(_anon0* pActwk, _anon0* pPlayerwk);
void hit_clr(_anon0* pActwk, _anon0* pPlayerwk);

// 
// Start address: 0x1019540
short ride_on_clr(_anon0* pActwk, _anon0* pPlayerwk)
{
	unsigned short wActwkNo;
	unsigned char byPlwk;
	// Line 66, Address: 0x1019540, Func Offset: 0
	// Line 70, Address: 0x1019558, Func Offset: 0x18
	// Line 71, Address: 0x1019570, Func Offset: 0x30
	// Line 72, Address: 0x101957c, Func Offset: 0x3c
	// Line 73, Address: 0x1019594, Func Offset: 0x54
	// Line 75, Address: 0x10195a0, Func Offset: 0x60
	// Line 77, Address: 0x10195b0, Func Offset: 0x70
	// Line 78, Address: 0x10195ec, Func Offset: 0xac
	// Line 80, Address: 0x10195f8, Func Offset: 0xb8
	// Line 81, Address: 0x101960c, Func Offset: 0xcc
	// Line 83, Address: 0x1019618, Func Offset: 0xd8
	// Line 84, Address: 0x1019620, Func Offset: 0xe0
	// Line 85, Address: 0x1019630, Func Offset: 0xf0
	// Line 86, Address: 0x1019640, Func Offset: 0x100
	// Line 87, Address: 0x1019650, Func Offset: 0x110
	// Line 88, Address: 0x101965c, Func Offset: 0x11c
	// Line 89, Address: 0x101966c, Func Offset: 0x12c
	// Line 90, Address: 0x1019688, Func Offset: 0x148
	// Line 92, Address: 0x1019690, Func Offset: 0x150
	// Line 93, Address: 0x1019698, Func Offset: 0x158
	// Line 94, Address: 0x10196a0, Func Offset: 0x160
	// Line 95, Address: 0x10196bc, Func Offset: 0x17c
	// Line 96, Address: 0x10196cc, Func Offset: 0x18c
	// Line 97, Address: 0x10196d0, Func Offset: 0x190
	// Func End, Address: 0x10196e8, Func Offset: 0x1a8
}

// 
// Start address: 0x10196f0
short ride_on_set(_anon0* pActwk, _anon0* pPlayerwk)
{
	unsigned char byCCR;
	unsigned short wActwkNo;
	_anon0* pRideAct;
	// Line 112, Address: 0x10196f0, Func Offset: 0
	// Line 117, Address: 0x101970c, Func Offset: 0x1c
	// Line 119, Address: 0x1019724, Func Offset: 0x34
	// Line 120, Address: 0x1019734, Func Offset: 0x44
	// Line 123, Address: 0x1019740, Func Offset: 0x50
	// Line 124, Address: 0x1019748, Func Offset: 0x58
	// Line 126, Address: 0x1019750, Func Offset: 0x60
	// Line 127, Address: 0x1019774, Func Offset: 0x84
	// Line 128, Address: 0x101977c, Func Offset: 0x8c
	// Line 129, Address: 0x101978c, Func Offset: 0x9c
	// Line 131, Address: 0x1019798, Func Offset: 0xa8
	// Line 133, Address: 0x10197b4, Func Offset: 0xc4
	// Line 134, Address: 0x10197c4, Func Offset: 0xd4
	// Line 139, Address: 0x10197dc, Func Offset: 0xec
	// Line 140, Address: 0x10197ec, Func Offset: 0xfc
	// Line 141, Address: 0x1019810, Func Offset: 0x120
	// Line 142, Address: 0x1019818, Func Offset: 0x128
	// Line 143, Address: 0x1019828, Func Offset: 0x138
	// Line 145, Address: 0x1019838, Func Offset: 0x148
	// Line 147, Address: 0x101984c, Func Offset: 0x15c
	// Line 148, Address: 0x1019858, Func Offset: 0x168
	// Line 149, Address: 0x1019864, Func Offset: 0x174
	// Line 150, Address: 0x1019874, Func Offset: 0x184
	// Line 154, Address: 0x101987c, Func Offset: 0x18c
	// Line 155, Address: 0x1019888, Func Offset: 0x198
	// Line 156, Address: 0x1019894, Func Offset: 0x1a4
	// Line 159, Address: 0x10198a4, Func Offset: 0x1b4
	// Line 164, Address: 0x10198ac, Func Offset: 0x1bc
	// Line 165, Address: 0x10198d0, Func Offset: 0x1e0
	// Line 166, Address: 0x10198d8, Func Offset: 0x1e8
	// Line 167, Address: 0x10198e8, Func Offset: 0x1f8
	// Line 169, Address: 0x10198f8, Func Offset: 0x208
	// Line 170, Address: 0x1019908, Func Offset: 0x218
	// Line 171, Address: 0x1019944, Func Offset: 0x254
	// Line 172, Address: 0x1019950, Func Offset: 0x260
	// Line 173, Address: 0x101996c, Func Offset: 0x27c
	// Line 176, Address: 0x1019978, Func Offset: 0x288
	// Line 177, Address: 0x10199ac, Func Offset: 0x2bc
	// Line 178, Address: 0x10199b4, Func Offset: 0x2c4
	// Line 180, Address: 0x10199bc, Func Offset: 0x2cc
	// Line 181, Address: 0x10199ec, Func Offset: 0x2fc
	// Line 183, Address: 0x10199fc, Func Offset: 0x30c
	// Line 184, Address: 0x1019a0c, Func Offset: 0x31c
	// Line 185, Address: 0x1019a10, Func Offset: 0x320
	// Func End, Address: 0x1019a2c, Func Offset: 0x33c
}

// 
// Start address: 0x1019a30
short hitchk_u(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 201, Address: 0x1019a30, Func Offset: 0
	// Line 202, Address: 0x1019a40, Func Offset: 0x10
	// Line 203, Address: 0x1019a4c, Func Offset: 0x1c
	// Line 204, Address: 0x1019a5c, Func Offset: 0x2c
	// Func End, Address: 0x1019a6c, Func Offset: 0x3c
}

// 
// Start address: 0x1019a70
short ridechk(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 220, Address: 0x1019a70, Func Offset: 0
	// Line 221, Address: 0x1019a80, Func Offset: 0x10
	// Line 222, Address: 0x1019a8c, Func Offset: 0x1c
	// Line 223, Address: 0x1019a9c, Func Offset: 0x2c
	// Func End, Address: 0x1019aac, Func Offset: 0x3c
}

// 
// Start address: 0x1019ab0
short ride_on_chk(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 237, Address: 0x1019ab0, Func Offset: 0
	// Line 238, Address: 0x1019ac0, Func Offset: 0x10
	// Line 239, Address: 0x1019ad0, Func Offset: 0x20
	// Func End, Address: 0x1019ae0, Func Offset: 0x30
}

// 
// Start address: 0x1019ae0
short hitchk(_anon0* pActwk, _anon0* pPlayerwk)
{
	short iD0;
	short iD1;
	short iD2;
	unsigned char byPlflg;
	// Line 243, Address: 0x1019ae0, Func Offset: 0
	// Line 247, Address: 0x1019b00, Func Offset: 0x20
	// Line 248, Address: 0x1019b1c, Func Offset: 0x3c
	// Line 249, Address: 0x1019b34, Func Offset: 0x54
	// Line 250, Address: 0x1019b40, Func Offset: 0x60
	// Line 251, Address: 0x1019b50, Func Offset: 0x70
	// Line 252, Address: 0x1019b68, Func Offset: 0x88
	// Line 253, Address: 0x1019b80, Func Offset: 0xa0
	// Line 254, Address: 0x1019b98, Func Offset: 0xb8
	// Line 255, Address: 0x1019bac, Func Offset: 0xcc
	// Line 256, Address: 0x1019bc4, Func Offset: 0xe4
	// Line 257, Address: 0x1019bdc, Func Offset: 0xfc
	// Line 258, Address: 0x1019bf4, Func Offset: 0x114
	// Line 259, Address: 0x1019c0c, Func Offset: 0x12c
	// Line 261, Address: 0x1019c24, Func Offset: 0x144
	// Line 262, Address: 0x1019c4c, Func Offset: 0x16c
	// Line 263, Address: 0x1019c80, Func Offset: 0x1a0
	// Line 264, Address: 0x1019c8c, Func Offset: 0x1ac
	// Line 265, Address: 0x1019c9c, Func Offset: 0x1bc
	// Line 267, Address: 0x1019cb4, Func Offset: 0x1d4
	// Line 268, Address: 0x1019cbc, Func Offset: 0x1dc
	// Line 269, Address: 0x1019cc8, Func Offset: 0x1e8
	// Line 270, Address: 0x1019ce4, Func Offset: 0x204
	// Line 272, Address: 0x1019cfc, Func Offset: 0x21c
	// Line 274, Address: 0x1019d18, Func Offset: 0x238
	// Line 275, Address: 0x1019d30, Func Offset: 0x250
	// Line 277, Address: 0x1019d50, Func Offset: 0x270
	// Line 280, Address: 0x1019d68, Func Offset: 0x288
	// Line 281, Address: 0x1019d80, Func Offset: 0x2a0
	// Line 282, Address: 0x1019da0, Func Offset: 0x2c0
	// Line 283, Address: 0x1019db8, Func Offset: 0x2d8
	// Line 284, Address: 0x1019dd8, Func Offset: 0x2f8
	// Line 285, Address: 0x1019df0, Func Offset: 0x310
	// Line 287, Address: 0x1019e08, Func Offset: 0x328
	// Line 288, Address: 0x1019e20, Func Offset: 0x340
	// Func End, Address: 0x1019e40, Func Offset: 0x360
}

// 
// Start address: 0x1019e40
short hit_v(_anon0* pActwk, _anon0* pPlayerwk, short iHitXs, short iHitHs)
{
	short iHitYs;
	short iHitVs;
	short iD4;
	short iD5;
	short iwk;
	// Line 305, Address: 0x1019e40, Func Offset: 0
	// Line 311, Address: 0x1019e6c, Func Offset: 0x2c
	// Line 312, Address: 0x1019e9c, Func Offset: 0x5c
	// Line 314, Address: 0x1019eb0, Func Offset: 0x70
	// Line 317, Address: 0x1019ebc, Func Offset: 0x7c
	// Line 325, Address: 0x1019f04, Func Offset: 0xc4
	// Line 326, Address: 0x1019f38, Func Offset: 0xf8
	// Line 327, Address: 0x1019f44, Func Offset: 0x104
	// Line 328, Address: 0x1019f54, Func Offset: 0x114
	// Line 329, Address: 0x1019f6c, Func Offset: 0x12c
	// Line 330, Address: 0x1019f90, Func Offset: 0x150
	// Line 331, Address: 0x1019fac, Func Offset: 0x16c
	// Line 333, Address: 0x1019fc4, Func Offset: 0x184
	// Line 334, Address: 0x1019fd0, Func Offset: 0x190
	// Line 336, Address: 0x1019ff4, Func Offset: 0x1b4
	// Line 337, Address: 0x101a004, Func Offset: 0x1c4
	// Line 338, Address: 0x101a014, Func Offset: 0x1d4
	// Line 342, Address: 0x101a034, Func Offset: 0x1f4
	// Line 343, Address: 0x101a03c, Func Offset: 0x1fc
	// Line 345, Address: 0x101a058, Func Offset: 0x218
	// Line 346, Address: 0x101a064, Func Offset: 0x224
	// Line 347, Address: 0x101a070, Func Offset: 0x230
	// Line 350, Address: 0x101a08c, Func Offset: 0x24c
	// Line 351, Address: 0x101a0a8, Func Offset: 0x268
	// Line 353, Address: 0x101a0c4, Func Offset: 0x284
	// Line 354, Address: 0x101a0dc, Func Offset: 0x29c
	// Func End, Address: 0x101a100, Func Offset: 0x2c0
}

// 
// Start address: 0x101a100
short hit_x(_anon0* pActwk, _anon0* pPlayerwk, short iHitXs, short iD5)
{
	// Line 373, Address: 0x101a100, Func Offset: 0
	// Line 374, Address: 0x101a118, Func Offset: 0x18
	// Line 375, Address: 0x101a130, Func Offset: 0x30
	// Line 376, Address: 0x101a148, Func Offset: 0x48
	// Line 377, Address: 0x101a160, Func Offset: 0x60
	// Line 378, Address: 0x101a178, Func Offset: 0x78
	// Line 380, Address: 0x101a190, Func Offset: 0x90
	// Line 381, Address: 0x101a1a8, Func Offset: 0xa8
	// Line 382, Address: 0x101a1c0, Func Offset: 0xc0
	// Line 383, Address: 0x101a1d0, Func Offset: 0xd0
	// Line 384, Address: 0x101a1e0, Func Offset: 0xe0
	// Line 385, Address: 0x101a1e8, Func Offset: 0xe8
	// Line 386, Address: 0x101a1fc, Func Offset: 0xfc
	// Line 389, Address: 0x101a210, Func Offset: 0x110
	// Line 390, Address: 0x101a228, Func Offset: 0x128
	// Line 392, Address: 0x101a240, Func Offset: 0x140
	// Line 397, Address: 0x101a258, Func Offset: 0x158
	// Line 398, Address: 0x101a270, Func Offset: 0x170
	// Line 400, Address: 0x101a288, Func Offset: 0x188
	// Line 402, Address: 0x101a298, Func Offset: 0x198
	// Func End, Address: 0x101a2a8, Func Offset: 0x1a8
}

// 
// Start address: 0x101a2b0
short push_set(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 417, Address: 0x101a2b0, Func Offset: 0
	// Line 418, Address: 0x101a2c0, Func Offset: 0x10
	// Line 419, Address: 0x101a2d0, Func Offset: 0x20
	// Line 421, Address: 0x101a2e8, Func Offset: 0x38
	// Line 422, Address: 0x101a2f8, Func Offset: 0x48
	// Line 423, Address: 0x101a308, Func Offset: 0x58
	// Line 426, Address: 0x101a310, Func Offset: 0x60
	// Line 427, Address: 0x101a318, Func Offset: 0x68
	// Line 428, Address: 0x101a31c, Func Offset: 0x6c
	// Func End, Address: 0x101a32c, Func Offset: 0x7c
}

// 
// Start address: 0x101a330
short push_clr(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 444, Address: 0x101a330, Func Offset: 0
	// Line 445, Address: 0x101a340, Func Offset: 0x10
	// Line 446, Address: 0x101a350, Func Offset: 0x20
	// Line 447, Address: 0x101a360, Func Offset: 0x30
	// Line 448, Address: 0x101a370, Func Offset: 0x40
	// Line 449, Address: 0x101a380, Func Offset: 0x50
	// Line 450, Address: 0x101a384, Func Offset: 0x54
	// Func End, Address: 0x101a394, Func Offset: 0x64
}

// 
// Start address: 0x101a3a0
short hit_y(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs)
{
	short iSprVchk;
	short iDirCol;
	short iD0;
	short iD1;
	short iD3;
	char cDirec;
	int lXspeed;
	int lYspeed;
	// Line 467, Address: 0x101a3a0, Func Offset: 0
	// Line 474, Address: 0x101a3c4, Func Offset: 0x24
	// Line 475, Address: 0x101a3f4, Func Offset: 0x54
	// Line 477, Address: 0x101a40c, Func Offset: 0x6c
	// Line 478, Address: 0x101a420, Func Offset: 0x80
	// Line 480, Address: 0x101a438, Func Offset: 0x98
	// Line 481, Address: 0x101a44c, Func Offset: 0xac
	// Line 482, Address: 0x101a460, Func Offset: 0xc0
	// Line 486, Address: 0x101a47c, Func Offset: 0xdc
	// Line 487, Address: 0x101a498, Func Offset: 0xf8
	// Line 488, Address: 0x101a4b0, Func Offset: 0x110
	// Line 490, Address: 0x101a4e0, Func Offset: 0x140
	// Line 491, Address: 0x101a4f0, Func Offset: 0x150
	// Line 492, Address: 0x101a500, Func Offset: 0x160
	// Line 493, Address: 0x101a510, Func Offset: 0x170
	// Line 494, Address: 0x101a514, Func Offset: 0x174
	// Line 496, Address: 0x101a524, Func Offset: 0x184
	// Line 497, Address: 0x101a52c, Func Offset: 0x18c
	// Line 498, Address: 0x101a544, Func Offset: 0x1a4
	// Line 499, Address: 0x101a560, Func Offset: 0x1c0
	// Line 503, Address: 0x101a578, Func Offset: 0x1d8
	// Line 504, Address: 0x101a590, Func Offset: 0x1f0
	// Line 506, Address: 0x101a5a0, Func Offset: 0x200
	// Line 507, Address: 0x101a5b8, Func Offset: 0x218
	// Line 508, Address: 0x101a5c4, Func Offset: 0x224
	// Line 514, Address: 0x101a5d4, Func Offset: 0x234
	// Line 515, Address: 0x101a5e8, Func Offset: 0x248
	// Line 517, Address: 0x101a5f8, Func Offset: 0x258
	// Line 519, Address: 0x101a610, Func Offset: 0x270
	// Line 521, Address: 0x101a628, Func Offset: 0x288
	// Line 522, Address: 0x101a648, Func Offset: 0x2a8
	// Line 524, Address: 0x101a658, Func Offset: 0x2b8
	// Line 525, Address: 0x101a668, Func Offset: 0x2c8
	// Line 529, Address: 0x101a680, Func Offset: 0x2e0
	// Line 531, Address: 0x101a698, Func Offset: 0x2f8
	// Line 532, Address: 0x101a6ac, Func Offset: 0x30c
	// Line 534, Address: 0x101a6bc, Func Offset: 0x31c
	// Line 535, Address: 0x101a6c8, Func Offset: 0x328
	// Line 540, Address: 0x101a6e0, Func Offset: 0x340
	// Line 541, Address: 0x101a6f0, Func Offset: 0x350
	// Line 542, Address: 0x101a6f4, Func Offset: 0x354
	// Func End, Address: 0x101a714, Func Offset: 0x374
}

// 
// Start address: 0x101a720
short hit_yu(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs)
{
	// Line 558, Address: 0x101a720, Func Offset: 0
	// Line 559, Address: 0x101a734, Func Offset: 0x14
	// Line 560, Address: 0x101a74c, Func Offset: 0x2c
	// Line 561, Address: 0x101a764, Func Offset: 0x44
	// Line 562, Address: 0x101a77c, Func Offset: 0x5c
	// Line 563, Address: 0x101a794, Func Offset: 0x74
	// Line 564, Address: 0x101a7ac, Func Offset: 0x8c
	// Line 565, Address: 0x101a7c8, Func Offset: 0xa8
	// Line 566, Address: 0x101a7e0, Func Offset: 0xc0
	// Line 567, Address: 0x101a7fc, Func Offset: 0xdc
	// Line 568, Address: 0x101a814, Func Offset: 0xf4
	// Line 570, Address: 0x101a830, Func Offset: 0x110
	// Line 571, Address: 0x101a840, Func Offset: 0x120
	// Func End, Address: 0x101a850, Func Offset: 0x130
}

// 
// Start address: 0x101a850
short hit_yu1(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs)
{
	// Line 587, Address: 0x101a850, Func Offset: 0
	// Line 588, Address: 0x101a864, Func Offset: 0x14
	// Line 589, Address: 0x101a87c, Func Offset: 0x2c
	// Line 590, Address: 0x101a898, Func Offset: 0x48
	// Line 591, Address: 0x101a8b0, Func Offset: 0x60
	// Line 592, Address: 0x101a8cc, Func Offset: 0x7c
	// Line 593, Address: 0x101a8d8, Func Offset: 0x88
	// Line 594, Address: 0x101a8ec, Func Offset: 0x9c
	// Func End, Address: 0x101a8fc, Func Offset: 0xac
}

// 
// Start address: 0x101a900
short hit_yu0(_anon0* pActwk, _anon0* pPlayerwk, short iHitYs)
{
	// Line 610, Address: 0x101a900, Func Offset: 0
	// Line 611, Address: 0x101a914, Func Offset: 0x14
	// Line 612, Address: 0x101a928, Func Offset: 0x28
	// Line 613, Address: 0x101a930, Func Offset: 0x30
	// Line 614, Address: 0x101a940, Func Offset: 0x40
	// Line 615, Address: 0x101a950, Func Offset: 0x50
	// Line 616, Address: 0x101a958, Func Offset: 0x58
	// Line 617, Address: 0x101a95c, Func Offset: 0x5c
	// Func End, Address: 0x101a96c, Func Offset: 0x6c
}

// 
// Start address: 0x101a970
short hit_e(_anon0* pActwk, _anon0* pPlayerwk)
{
	// Line 632, Address: 0x101a970, Func Offset: 0
	// Line 633, Address: 0x101a980, Func Offset: 0x10
	// Line 634, Address: 0x101a990, Func Offset: 0x20
	// Line 635, Address: 0x101a9a0, Func Offset: 0x30
	// Line 636, Address: 0x101a9a8, Func Offset: 0x38
	// Line 637, Address: 0x101a9ac, Func Offset: 0x3c
	// Func End, Address: 0x101a9bc, Func Offset: 0x4c
}

// 
// Start address: 0x101a9c0
void side_coli(_anon0* pActwk, _anon0* pPlayerwk)
{
	char cDirect;
	short iDirCol;
	// Line 652, Address: 0x101a9c0, Func Offset: 0
	// Line 653, Address: 0x101a9d4, Func Offset: 0x14
	// Line 656, Address: 0x101a9dc, Func Offset: 0x1c
	// Line 658, Address: 0x101a9f4, Func Offset: 0x34
	// Line 660, Address: 0x101aa0c, Func Offset: 0x4c
	// Line 661, Address: 0x101aa24, Func Offset: 0x64
	// Line 663, Address: 0x101aa40, Func Offset: 0x80
	// Line 664, Address: 0x101aa58, Func Offset: 0x98
	// Line 666, Address: 0x101aa68, Func Offset: 0xa8
	// Line 667, Address: 0x101aa74, Func Offset: 0xb4
	// Func End, Address: 0x101aa88, Func Offset: 0xc8
}

// 
// Start address: 0x101aa90
void hit_set(_anon0* pActwk, _anon0* pPlayerwk)
{
	short iHitActno;
	_anon0* pHitAct;
	// Line 682, Address: 0x101aa90, Func Offset: 0
	// Line 686, Address: 0x101aaa8, Func Offset: 0x18
	// Line 688, Address: 0x101aac0, Func Offset: 0x30
	// Line 689, Address: 0x101aac8, Func Offset: 0x38
	// Line 692, Address: 0x101aad0, Func Offset: 0x40
	// Line 693, Address: 0x101aaec, Func Offset: 0x5c
	// Line 695, Address: 0x101aafc, Func Offset: 0x6c
	// Line 696, Address: 0x101ab1c, Func Offset: 0x8c
	// Line 698, Address: 0x101ab28, Func Offset: 0x98
	// Line 701, Address: 0x101ab54, Func Offset: 0xc4
	// Line 706, Address: 0x101aba8, Func Offset: 0x118
	// Line 712, Address: 0x101abc0, Func Offset: 0x130
	// Line 716, Address: 0x101ac08, Func Offset: 0x178
	// Line 717, Address: 0x101ac14, Func Offset: 0x184
	// Line 720, Address: 0x101ac1c, Func Offset: 0x18c
	// Line 721, Address: 0x101ac50, Func Offset: 0x1c0
	// Func End, Address: 0x101ac68, Func Offset: 0x1d8
}

// 
// Start address: 0x101ac70
void hit_clr(_anon0* pActwk, _anon0* pPlayerwk)
{
	unsigned short iHitAct;
	// Line 736, Address: 0x101ac70, Func Offset: 0
	// Line 739, Address: 0x101ac80, Func Offset: 0x10
	// Line 740, Address: 0x101ac90, Func Offset: 0x20
	// Line 742, Address: 0x101acb8, Func Offset: 0x48
	// Line 743, Address: 0x101acc0, Func Offset: 0x50
	// Func End, Address: 0x101acd0, Func Offset: 0x60
}

