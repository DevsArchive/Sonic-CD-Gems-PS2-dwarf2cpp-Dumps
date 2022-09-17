typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_1)(_anon0*);
typedef void(*type_4)(_anon0*);
typedef void(*type_6)(_anon0*);
typedef void(*type_9)(_anon0*);
typedef void(*type_11)(_anon0*);
typedef void(*type_15)(_anon0*);
typedef void(*type_23)(_anon0*);
typedef void(*type_26)(_anon0*);
typedef void(*type_33)(_anon0*);
typedef void(*type_36)(_anon0*);

typedef _anon9 type_0[20];
typedef void(*type_2)(_anon0*)[2];
typedef _anon9 type_3[0];
typedef void(*type_5)(_anon0*)[2];
typedef _anon2 type_7[7];
typedef void(*type_8)(_anon0*)[12];
typedef void(*type_10)(_anon0*)[2];
typedef void(*type_12)(_anon0*)[2];
typedef _anon2 type_13[7];
typedef _anon1* type_14[1];
typedef void(*type_16)(_anon0*)[2];
typedef _anon1* type_17[1];
typedef _anon1* type_18[1];
typedef _anon1* type_19[2];
typedef unsigned char type_20[2];
typedef _anon1* type_21[1];
typedef unsigned char type_22[22];
typedef void(*type_24)(_anon0*)[2];
typedef _anon3 type_25[6];
typedef _anon2 type_27[7];
typedef void(*type_28)(_anon0*)[2];
typedef _anon0 type_29[128];
typedef _anon1* type_30[1];
typedef _anon1* type_31[1];
typedef _anon1* type_32[1];
typedef void(*type_34)(_anon0*)[2];
typedef _anon1* type_35[2];
typedef void(*type_37)(_anon0*)[2];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon4 xposi;
	_anon4 yposi;
	_anon7 xspeed;
	_anon7 yspeed;
	_anon7 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon7 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon7 direc;
	_anon7 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
	};
};

struct _anon2
{
	unsigned char kakudo;
	char xofst;
};

struct _anon3
{
	char xofs;
	char yofs;
	short yspd;
};

union _anon4
{
	int l;
	_anon5 w;
	_anon6 b;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon7
{
	short w;
	_anon8 b;
};

struct _anon8
{
	char l;
	char h;
};

struct _anon9
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
_anon1* udblk4pat1[1];
_anon1* udblk4pat3[1];
_anon1* udblk4pat4[1];
_anon1* udblk4pat5[1];
_anon1* udblk4pat7[1];
_anon1* udblk4pat8[1];
_anon1* udblk4pat6[2];
_anon1* udblk4pat9[2];
_anon1* udblk4patA[1];
_anon0 actwk[128];

void udblk4(_anon0* pActwk);
void sin_move(_anon0* pActwk, short d2, short d3);
void udblk4_type1(_anon0* pActwk);
void type1_init(_anon0* pActwk);
void type1_move(_anon0* pActwk);
void udblk4_type2();
void udblk4_type3(_anon0* pActwk);
void type3_init(_anon0* pActwk);
void type3_move(_anon0* pActwk);
void udblk4_type4(_anon0* pActwk);
void type4_coset(_anon0* pActwk, _anon0* pNewActwk, unsigned char d0, short d1);
void type4_init(_anon0* pActwk);
void type4_move(_anon0* pActwk);
void udblk4_type5(_anon0* pActwk);
void type5_coset(_anon0* pActwk, _anon0* pNewActwk, unsigned char d0, short d1, unsigned char d2, short d3);
void type5_init(_anon0* pActwk);
void type5_move(_anon0* pActwk);
void udblk4_type6(_anon0* pActwk);
void type6_init(_anon0* pActwk);
void type6_move(_anon0* pActwk);
void udblk4_type7(_anon0* pActwk);
void type7_coset(_anon0* pActwk, _anon0* pNewActwk, unsigned char d0, short d1, unsigned char d2);
void type7_init(_anon0* pActwk);
void type7_move(_anon0* pActwk);
void udblk4_type8(_anon0* pActwk);
void type8_init(_anon0* pActwk);
void type8_move(_anon0* pActwk);
void udblk4_type9(_anon0* pActwk);
void type9_init(_anon0* pActwk);
void type9_move(_anon0* pActwk);
void udblk4_typeA(_anon0* pActwk);
void typeA_init(_anon0* pActwk);
void typeA_move(_anon0* pActwk);
void udblk4_typeB(_anon0* pActwk);
void typeB_init(_anon0* pActwk);
void typeB_move(_anon0* pActwk);

// 
// Start address: 0x102c9f0
void udblk4(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[12];
	// Line 161, Address: 0x102c9f0, Func Offset: 0
	// Line 162, Address: 0x102c9fc, Func Offset: 0xc
	// Line 178, Address: 0x102ca30, Func Offset: 0x40
	// Line 179, Address: 0x102ca58, Func Offset: 0x68
	// Func End, Address: 0x102ca68, Func Offset: 0x78
}

// 
// Start address: 0x102ca70
void sin_move(_anon0* pActwk, short d2, short d3)
{
	_anon4 ld0;
	int stk;
	short d0;
	short d1;
	// Line 184, Address: 0x102ca70, Func Offset: 0
	// Line 189, Address: 0x102ca88, Func Offset: 0x18
	// Line 191, Address: 0x102caa0, Func Offset: 0x30
	// Line 193, Address: 0x102cab4, Func Offset: 0x44
	// Line 194, Address: 0x102cabc, Func Offset: 0x4c
	// Line 195, Address: 0x102cad4, Func Offset: 0x64
	// Line 196, Address: 0x102cadc, Func Offset: 0x6c
	// Line 197, Address: 0x102caec, Func Offset: 0x7c
	// Line 198, Address: 0x102cafc, Func Offset: 0x8c
	// Line 199, Address: 0x102cb0c, Func Offset: 0x9c
	// Line 201, Address: 0x102cb18, Func Offset: 0xa8
	// Line 202, Address: 0x102cb28, Func Offset: 0xb8
	// Line 203, Address: 0x102cb3c, Func Offset: 0xcc
	// Line 204, Address: 0x102cb48, Func Offset: 0xd8
	// Line 205, Address: 0x102cb50, Func Offset: 0xe0
	// Line 206, Address: 0x102cb54, Func Offset: 0xe4
	// Line 207, Address: 0x102cb60, Func Offset: 0xf0
	// Line 208, Address: 0x102cb6c, Func Offset: 0xfc
	// Line 210, Address: 0x102cb78, Func Offset: 0x108
	// Line 212, Address: 0x102cb90, Func Offset: 0x120
	// Line 214, Address: 0x102cba4, Func Offset: 0x134
	// Func End, Address: 0x102cbb8, Func Offset: 0x148
}

// 
// Start address: 0x102cbc0
void udblk4_type1(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 219, Address: 0x102cbc0, Func Offset: 0
	// Line 220, Address: 0x102cbcc, Func Offset: 0xc
	// Line 226, Address: 0x102cbe8, Func Offset: 0x28
	// Line 227, Address: 0x102cc24, Func Offset: 0x64
	// Line 228, Address: 0x102cc30, Func Offset: 0x70
	// Line 229, Address: 0x102cc44, Func Offset: 0x84
	// Func End, Address: 0x102cc54, Func Offset: 0x94
}

// 
// Start address: 0x102cc60
void type1_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short i;
	unsigned char d0;
	unsigned char d1;
	_anon2 tbl[7];
	// Line 234, Address: 0x102cc60, Func Offset: 0
	// Line 238, Address: 0x102cc78, Func Offset: 0x18
	// Line 249, Address: 0x102ccac, Func Offset: 0x4c
	// Line 250, Address: 0x102ccbc, Func Offset: 0x5c
	// Line 251, Address: 0x102cccc, Func Offset: 0x6c
	// Line 252, Address: 0x102ccd8, Func Offset: 0x78
	// Line 253, Address: 0x102cce4, Func Offset: 0x84
	// Line 254, Address: 0x102ccf4, Func Offset: 0x94
	// Line 255, Address: 0x102cd18, Func Offset: 0xb8
	// Line 256, Address: 0x102cd24, Func Offset: 0xc4
	// Line 258, Address: 0x102cd30, Func Offset: 0xd0
	// Line 260, Address: 0x102cd44, Func Offset: 0xe4
	// Line 261, Address: 0x102cd54, Func Offset: 0xf4
	// Line 262, Address: 0x102cd5c, Func Offset: 0xfc
	// Line 264, Address: 0x102cd68, Func Offset: 0x108
	// Line 266, Address: 0x102cd7c, Func Offset: 0x11c
	// Line 267, Address: 0x102cd88, Func Offset: 0x128
	// Line 268, Address: 0x102cd94, Func Offset: 0x134
	// Line 269, Address: 0x102cda4, Func Offset: 0x144
	// Line 270, Address: 0x102cdb4, Func Offset: 0x154
	// Line 271, Address: 0x102cdc4, Func Offset: 0x164
	// Line 273, Address: 0x102cdcc, Func Offset: 0x16c
	// Line 274, Address: 0x102cdd4, Func Offset: 0x174
	// Line 276, Address: 0x102cdf4, Func Offset: 0x194
	// Line 277, Address: 0x102ce00, Func Offset: 0x1a0
	// Line 278, Address: 0x102ce18, Func Offset: 0x1b8
	// Line 279, Address: 0x102ce40, Func Offset: 0x1e0
	// Line 280, Address: 0x102ce4c, Func Offset: 0x1ec
	// Func End, Address: 0x102ce68, Func Offset: 0x208
}

// 
// Start address: 0x102ce70
void type1_move(_anon0* pActwk)
{
	// Line 285, Address: 0x102ce70, Func Offset: 0
	// Line 286, Address: 0x102ce7c, Func Offset: 0xc
	// Line 287, Address: 0x102ce90, Func Offset: 0x20
	// Func End, Address: 0x102cea0, Func Offset: 0x30
}

// 
// Start address: 0x102cea0
void udblk4_type2()
{
	// Line 292, Address: 0x102cea0, Func Offset: 0
	// Line 294, Address: 0x102cea4, Func Offset: 0x4
	// Func End, Address: 0x102ceb0, Func Offset: 0x10
}

// 
// Start address: 0x102ceb0
void udblk4_type3(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 299, Address: 0x102ceb0, Func Offset: 0
	// Line 300, Address: 0x102cebc, Func Offset: 0xc
	// Line 306, Address: 0x102ced8, Func Offset: 0x28
	// Line 307, Address: 0x102cf14, Func Offset: 0x64
	// Line 308, Address: 0x102cf20, Func Offset: 0x70
	// Line 309, Address: 0x102cf34, Func Offset: 0x84
	// Func End, Address: 0x102cf44, Func Offset: 0x94
}

// 
// Start address: 0x102cf50
void type3_init(_anon0* pActwk)
{
	// Line 314, Address: 0x102cf50, Func Offset: 0
	// Line 315, Address: 0x102cf5c, Func Offset: 0xc
	// Line 316, Address: 0x102cf6c, Func Offset: 0x1c
	// Line 317, Address: 0x102cf7c, Func Offset: 0x2c
	// Line 318, Address: 0x102cf88, Func Offset: 0x38
	// Line 319, Address: 0x102cf94, Func Offset: 0x44
	// Line 320, Address: 0x102cfa4, Func Offset: 0x54
	// Line 321, Address: 0x102cfb4, Func Offset: 0x64
	// Line 322, Address: 0x102cfd8, Func Offset: 0x88
	// Line 323, Address: 0x102cfe4, Func Offset: 0x94
	// Line 324, Address: 0x102cff0, Func Offset: 0xa0
	// Line 326, Address: 0x102cffc, Func Offset: 0xac
	// Line 327, Address: 0x102d008, Func Offset: 0xb8
	// Func End, Address: 0x102d018, Func Offset: 0xc8
}

// 
// Start address: 0x102d020
void type3_move(_anon0* pActwk)
{
	// Line 332, Address: 0x102d020, Func Offset: 0
	// Line 333, Address: 0x102d02c, Func Offset: 0xc
	// Line 334, Address: 0x102d040, Func Offset: 0x20
	// Func End, Address: 0x102d050, Func Offset: 0x30
}

// 
// Start address: 0x102d050
void udblk4_type4(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 339, Address: 0x102d050, Func Offset: 0
	// Line 340, Address: 0x102d05c, Func Offset: 0xc
	// Line 346, Address: 0x102d078, Func Offset: 0x28
	// Line 347, Address: 0x102d0b4, Func Offset: 0x64
	// Line 348, Address: 0x102d0c0, Func Offset: 0x70
	// Line 349, Address: 0x102d0d4, Func Offset: 0x84
	// Func End, Address: 0x102d0e4, Func Offset: 0x94
}

// 
// Start address: 0x102d0f0
void type4_coset(_anon0* pActwk, _anon0* pNewActwk, unsigned char d0, short d1)
{
	// Line 354, Address: 0x102d0f0, Func Offset: 0
	// Line 355, Address: 0x102d104, Func Offset: 0x14
	// Line 356, Address: 0x102d110, Func Offset: 0x20
	// Line 357, Address: 0x102d11c, Func Offset: 0x2c
	// Line 358, Address: 0x102d128, Func Offset: 0x38
	// Line 359, Address: 0x102d138, Func Offset: 0x48
	// Line 360, Address: 0x102d168, Func Offset: 0x78
	// Line 361, Address: 0x102d178, Func Offset: 0x88
	// Func End, Address: 0x102d184, Func Offset: 0x94
}

// 
// Start address: 0x102d190
void type4_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 366, Address: 0x102d190, Func Offset: 0
	// Line 369, Address: 0x102d19c, Func Offset: 0xc
	// Line 370, Address: 0x102d1ac, Func Offset: 0x1c
	// Line 371, Address: 0x102d1bc, Func Offset: 0x2c
	// Line 372, Address: 0x102d1c8, Func Offset: 0x38
	// Line 373, Address: 0x102d1d4, Func Offset: 0x44
	// Line 374, Address: 0x102d1e4, Func Offset: 0x54
	// Line 375, Address: 0x102d208, Func Offset: 0x78
	// Line 376, Address: 0x102d214, Func Offset: 0x84
	// Line 377, Address: 0x102d220, Func Offset: 0x90
	// Line 379, Address: 0x102d22c, Func Offset: 0x9c
	// Line 382, Address: 0x102d240, Func Offset: 0xb0
	// Line 384, Address: 0x102d250, Func Offset: 0xc0
	// Line 387, Address: 0x102d264, Func Offset: 0xd4
	// Line 389, Address: 0x102d270, Func Offset: 0xe0
	// Line 390, Address: 0x102d280, Func Offset: 0xf0
	// Line 391, Address: 0x102d290, Func Offset: 0x100
	// Line 393, Address: 0x102d2a0, Func Offset: 0x110
	// Line 394, Address: 0x102d2dc, Func Offset: 0x14c
	// Line 395, Address: 0x102d2e8, Func Offset: 0x158
	// Line 397, Address: 0x102d2f4, Func Offset: 0x164
	// Line 399, Address: 0x102d308, Func Offset: 0x178
	// Line 401, Address: 0x102d31c, Func Offset: 0x18c
	// Line 403, Address: 0x102d334, Func Offset: 0x1a4
	// Line 405, Address: 0x102d348, Func Offset: 0x1b8
	// Line 409, Address: 0x102d360, Func Offset: 0x1d0
	// Line 410, Address: 0x102d36c, Func Offset: 0x1dc
	// Func End, Address: 0x102d37c, Func Offset: 0x1ec
}

// 
// Start address: 0x102d380
void type4_move(_anon0* pActwk)
{
	short stk;
	short d0;
	short d1;
	// Line 415, Address: 0x102d380, Func Offset: 0
	// Line 419, Address: 0x102d390, Func Offset: 0x10
	// Line 420, Address: 0x102d3a0, Func Offset: 0x20
	// Line 421, Address: 0x102d3b8, Func Offset: 0x38
	// Line 422, Address: 0x102d3c8, Func Offset: 0x48
	// Line 423, Address: 0x102d3d4, Func Offset: 0x54
	// Line 424, Address: 0x102d3e8, Func Offset: 0x68
	// Line 425, Address: 0x102d3f4, Func Offset: 0x74
	// Line 426, Address: 0x102d404, Func Offset: 0x84
	// Line 427, Address: 0x102d408, Func Offset: 0x88
	// Line 428, Address: 0x102d418, Func Offset: 0x98
	// Line 429, Address: 0x102d424, Func Offset: 0xa4
	// Line 430, Address: 0x102d430, Func Offset: 0xb0
	// Line 431, Address: 0x102d43c, Func Offset: 0xbc
	// Line 433, Address: 0x102d448, Func Offset: 0xc8
	// Line 435, Address: 0x102d474, Func Offset: 0xf4
	// Line 436, Address: 0x102d488, Func Offset: 0x108
	// Func End, Address: 0x102d49c, Func Offset: 0x11c
}

// 
// Start address: 0x102d4a0
void udblk4_type5(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 441, Address: 0x102d4a0, Func Offset: 0
	// Line 442, Address: 0x102d4ac, Func Offset: 0xc
	// Line 448, Address: 0x102d4c8, Func Offset: 0x28
	// Line 449, Address: 0x102d504, Func Offset: 0x64
	// Line 450, Address: 0x102d510, Func Offset: 0x70
	// Line 451, Address: 0x102d524, Func Offset: 0x84
	// Func End, Address: 0x102d534, Func Offset: 0x94
}

// 
// Start address: 0x102d540
void type5_coset(_anon0* pActwk, _anon0* pNewActwk, unsigned char d0, short d1, unsigned char d2, short d3)
{
	// Line 456, Address: 0x102d540, Func Offset: 0
	// Line 457, Address: 0x102d55c, Func Offset: 0x1c
	// Line 458, Address: 0x102d568, Func Offset: 0x28
	// Line 459, Address: 0x102d574, Func Offset: 0x34
	// Line 460, Address: 0x102d580, Func Offset: 0x40
	// Line 462, Address: 0x102d58c, Func Offset: 0x4c
	// Line 464, Address: 0x102d5bc, Func Offset: 0x7c
	// Line 465, Address: 0x102d5ec, Func Offset: 0xac
	// Line 466, Address: 0x102d5fc, Func Offset: 0xbc
	// Func End, Address: 0x102d608, Func Offset: 0xc8
}

// 
// Start address: 0x102d610
void type5_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 471, Address: 0x102d610, Func Offset: 0
	// Line 474, Address: 0x102d61c, Func Offset: 0xc
	// Line 475, Address: 0x102d62c, Func Offset: 0x1c
	// Line 476, Address: 0x102d63c, Func Offset: 0x2c
	// Line 477, Address: 0x102d648, Func Offset: 0x38
	// Line 478, Address: 0x102d654, Func Offset: 0x44
	// Line 479, Address: 0x102d664, Func Offset: 0x54
	// Line 480, Address: 0x102d688, Func Offset: 0x78
	// Line 481, Address: 0x102d694, Func Offset: 0x84
	// Line 483, Address: 0x102d6a0, Func Offset: 0x90
	// Line 486, Address: 0x102d6b4, Func Offset: 0xa4
	// Line 487, Address: 0x102d6c4, Func Offset: 0xb4
	// Line 488, Address: 0x102d6cc, Func Offset: 0xbc
	// Line 490, Address: 0x102d6e0, Func Offset: 0xd0
	// Line 492, Address: 0x102d700, Func Offset: 0xf0
	// Line 494, Address: 0x102d714, Func Offset: 0x104
	// Line 496, Address: 0x102d734, Func Offset: 0x124
	// Line 498, Address: 0x102d748, Func Offset: 0x138
	// Line 502, Address: 0x102d768, Func Offset: 0x158
	// Line 503, Address: 0x102d774, Func Offset: 0x164
	// Func End, Address: 0x102d784, Func Offset: 0x174
}

// 
// Start address: 0x102d790
void type5_move(_anon0* pActwk)
{
	// Line 508, Address: 0x102d790, Func Offset: 0
	// Line 509, Address: 0x102d79c, Func Offset: 0xc
	// Line 510, Address: 0x102d7b0, Func Offset: 0x20
	// Func End, Address: 0x102d7c0, Func Offset: 0x30
}

// 
// Start address: 0x102d7c0
void udblk4_type6(_anon0* pActwk)
{
	// Line 515, Address: 0x102d7c0, Func Offset: 0
	// Line 516, Address: 0x102d7cc, Func Offset: 0xc
	// Line 517, Address: 0x102d7f0, Func Offset: 0x30
	// Line 518, Address: 0x102d7fc, Func Offset: 0x3c
	// Func End, Address: 0x102d80c, Func Offset: 0x4c
}

// 
// Start address: 0x102d810
void type6_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short i;
	short d1;
	_anon2 tbl[7];
	// Line 523, Address: 0x102d810, Func Offset: 0
	// Line 526, Address: 0x102d824, Func Offset: 0x14
	// Line 537, Address: 0x102d858, Func Offset: 0x48
	// Line 538, Address: 0x102d868, Func Offset: 0x58
	// Line 539, Address: 0x102d878, Func Offset: 0x68
	// Line 540, Address: 0x102d87c, Func Offset: 0x6c
	// Line 542, Address: 0x102d888, Func Offset: 0x78
	// Line 544, Address: 0x102d89c, Func Offset: 0x8c
	// Line 545, Address: 0x102d8a8, Func Offset: 0x98
	// Line 546, Address: 0x102d8b4, Func Offset: 0xa4
	// Line 547, Address: 0x102d8c4, Func Offset: 0xb4
	// Line 548, Address: 0x102d900, Func Offset: 0xf0
	// Line 549, Address: 0x102d90c, Func Offset: 0xfc
	// Line 550, Address: 0x102d928, Func Offset: 0x118
	// Line 552, Address: 0x102d970, Func Offset: 0x160
	// Line 553, Address: 0x102d97c, Func Offset: 0x16c
	// Line 554, Address: 0x102d99c, Func Offset: 0x18c
	// Line 555, Address: 0x102d9a8, Func Offset: 0x198
	// Func End, Address: 0x102d9c0, Func Offset: 0x1b0
}

// 
// Start address: 0x102d9c0
void type6_move(_anon0* pActwk)
{
	// Line 560, Address: 0x102d9c0, Func Offset: 0
	// Line 561, Address: 0x102d9cc, Func Offset: 0xc
	// Line 562, Address: 0x102d9e0, Func Offset: 0x20
	// Func End, Address: 0x102d9f0, Func Offset: 0x30
}

// 
// Start address: 0x102d9f0
void udblk4_type7(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 567, Address: 0x102d9f0, Func Offset: 0
	// Line 568, Address: 0x102d9fc, Func Offset: 0xc
	// Line 574, Address: 0x102da18, Func Offset: 0x28
	// Line 575, Address: 0x102da54, Func Offset: 0x64
	// Line 576, Address: 0x102da60, Func Offset: 0x70
	// Line 577, Address: 0x102da74, Func Offset: 0x84
	// Func End, Address: 0x102da84, Func Offset: 0x94
}

// 
// Start address: 0x102da90
void type7_coset(_anon0* pActwk, _anon0* pNewActwk, unsigned char d0, short d1, unsigned char d2)
{
	// Line 582, Address: 0x102da90, Func Offset: 0
	// Line 583, Address: 0x102daa8, Func Offset: 0x18
	// Line 584, Address: 0x102dab4, Func Offset: 0x24
	// Line 585, Address: 0x102dac0, Func Offset: 0x30
	// Line 586, Address: 0x102dacc, Func Offset: 0x3c
	// Line 587, Address: 0x102dad8, Func Offset: 0x48
	// Line 589, Address: 0x102dae8, Func Offset: 0x58
	// Line 590, Address: 0x102db18, Func Offset: 0x88
	// Line 591, Address: 0x102db28, Func Offset: 0x98
	// Func End, Address: 0x102db34, Func Offset: 0xa4
}

// 
// Start address: 0x102db40
void type7_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 596, Address: 0x102db40, Func Offset: 0
	// Line 599, Address: 0x102db4c, Func Offset: 0xc
	// Line 600, Address: 0x102db5c, Func Offset: 0x1c
	// Line 601, Address: 0x102db6c, Func Offset: 0x2c
	// Line 602, Address: 0x102db78, Func Offset: 0x38
	// Line 603, Address: 0x102db84, Func Offset: 0x44
	// Line 604, Address: 0x102db94, Func Offset: 0x54
	// Line 605, Address: 0x102dbb8, Func Offset: 0x78
	// Line 606, Address: 0x102dbc4, Func Offset: 0x84
	// Line 608, Address: 0x102dbd0, Func Offset: 0x90
	// Line 611, Address: 0x102dbe4, Func Offset: 0xa4
	// Line 612, Address: 0x102dc08, Func Offset: 0xc8
	// Line 613, Address: 0x102dc14, Func Offset: 0xd4
	// Line 615, Address: 0x102dc28, Func Offset: 0xe8
	// Line 617, Address: 0x102dc44, Func Offset: 0x104
	// Line 619, Address: 0x102dc58, Func Offset: 0x118
	// Line 621, Address: 0x102dc74, Func Offset: 0x134
	// Line 623, Address: 0x102dc88, Func Offset: 0x148
	// Line 627, Address: 0x102dca4, Func Offset: 0x164
	// Line 628, Address: 0x102dcb0, Func Offset: 0x170
	// Func End, Address: 0x102dcc0, Func Offset: 0x180
}

// 
// Start address: 0x102dcc0
void type7_move(_anon0* pActwk)
{
	// Line 633, Address: 0x102dcc0, Func Offset: 0
	// Line 634, Address: 0x102dccc, Func Offset: 0xc
	// Line 635, Address: 0x102dce0, Func Offset: 0x20
	// Func End, Address: 0x102dcf0, Func Offset: 0x30
}

// 
// Start address: 0x102dcf0
void udblk4_type8(_anon0* pActwk)
{
	short d0;
	void(*tbl)(_anon0*)[2];
	// Line 640, Address: 0x102dcf0, Func Offset: 0
	// Line 642, Address: 0x102dd00, Func Offset: 0x10
	// Line 648, Address: 0x102dd1c, Func Offset: 0x2c
	// Line 649, Address: 0x102dd58, Func Offset: 0x68
	// Line 651, Address: 0x102dd64, Func Offset: 0x74
	// Line 652, Address: 0x102dd74, Func Offset: 0x84
	// Line 654, Address: 0x102dd7c, Func Offset: 0x8c
	// Line 656, Address: 0x102ddb0, Func Offset: 0xc0
	// Line 658, Address: 0x102ddbc, Func Offset: 0xcc
	// Line 661, Address: 0x102ddc4, Func Offset: 0xd4
	// Line 663, Address: 0x102ddd8, Func Offset: 0xe8
	// Func End, Address: 0x102ddec, Func Offset: 0xfc
}

// 
// Start address: 0x102ddf0
void type8_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short i;
	short d0;
	unsigned char d1;
	// Line 668, Address: 0x102ddf0, Func Offset: 0
	// Line 674, Address: 0x102de08, Func Offset: 0x18
	// Line 675, Address: 0x102de18, Func Offset: 0x28
	// Line 676, Address: 0x102de28, Func Offset: 0x38
	// Line 677, Address: 0x102de34, Func Offset: 0x44
	// Line 678, Address: 0x102de40, Func Offset: 0x50
	// Line 679, Address: 0x102de50, Func Offset: 0x60
	// Line 680, Address: 0x102de74, Func Offset: 0x84
	// Line 681, Address: 0x102de80, Func Offset: 0x90
	// Line 682, Address: 0x102de8c, Func Offset: 0x9c
	// Line 684, Address: 0x102dea0, Func Offset: 0xb0
	// Line 687, Address: 0x102deb0, Func Offset: 0xc0
	// Line 689, Address: 0x102dec4, Func Offset: 0xd4
	// Line 691, Address: 0x102ded8, Func Offset: 0xe8
	// Line 692, Address: 0x102dee4, Func Offset: 0xf4
	// Line 693, Address: 0x102def0, Func Offset: 0x100
	// Line 694, Address: 0x102defc, Func Offset: 0x10c
	// Line 695, Address: 0x102df0c, Func Offset: 0x11c
	// Line 696, Address: 0x102df1c, Func Offset: 0x12c
	// Line 697, Address: 0x102df40, Func Offset: 0x150
	// Line 698, Address: 0x102df50, Func Offset: 0x160
	// Line 699, Address: 0x102df60, Func Offset: 0x170
	// Line 701, Address: 0x102df74, Func Offset: 0x184
	// Line 702, Address: 0x102df7c, Func Offset: 0x18c
	// Line 704, Address: 0x102df88, Func Offset: 0x198
	// Line 706, Address: 0x102df9c, Func Offset: 0x1ac
	// Line 707, Address: 0x102dfa8, Func Offset: 0x1b8
	// Line 708, Address: 0x102dfb4, Func Offset: 0x1c4
	// Line 709, Address: 0x102dfbc, Func Offset: 0x1cc
	// Line 710, Address: 0x102dfc8, Func Offset: 0x1d8
	// Line 711, Address: 0x102dfd4, Func Offset: 0x1e4
	// Line 712, Address: 0x102dff0, Func Offset: 0x200
	// Line 713, Address: 0x102e01c, Func Offset: 0x22c
	// Line 714, Address: 0x102e02c, Func Offset: 0x23c
	// Line 716, Address: 0x102e03c, Func Offset: 0x24c
	// Line 717, Address: 0x102e044, Func Offset: 0x254
	// Line 722, Address: 0x102e064, Func Offset: 0x274
	// Line 723, Address: 0x102e070, Func Offset: 0x280
	// Func End, Address: 0x102e08c, Func Offset: 0x29c
}

// 
// Start address: 0x102e090
void type8_move(_anon0* pActwk)
{
	_anon7 tmp;
	short stk;
	short d0;
	short d1;
	// Line 728, Address: 0x102e090, Func Offset: 0
	// Line 733, Address: 0x102e0a0, Func Offset: 0x10
	// Line 734, Address: 0x102e0b0, Func Offset: 0x20
	// Line 735, Address: 0x102e0c8, Func Offset: 0x38
	// Line 737, Address: 0x102e0e8, Func Offset: 0x58
	// Line 738, Address: 0x102e0f4, Func Offset: 0x64
	// Line 739, Address: 0x102e100, Func Offset: 0x70
	// Line 740, Address: 0x102e10c, Func Offset: 0x7c
	// Line 741, Address: 0x102e118, Func Offset: 0x88
	// Line 743, Address: 0x102e124, Func Offset: 0x94
	// Line 744, Address: 0x102e154, Func Offset: 0xc4
	// Line 745, Address: 0x102e160, Func Offset: 0xd0
	// Line 746, Address: 0x102e16c, Func Offset: 0xdc
	// Line 747, Address: 0x102e178, Func Offset: 0xe8
	// Line 748, Address: 0x102e18c, Func Offset: 0xfc
	// Func End, Address: 0x102e1a0, Func Offset: 0x110
}

// 
// Start address: 0x102e1a0
void udblk4_type9(_anon0* pActwk)
{
	short d0;
	void(*tbl)(_anon0*)[2];
	// Line 753, Address: 0x102e1a0, Func Offset: 0
	// Line 755, Address: 0x102e1b0, Func Offset: 0x10
	// Line 761, Address: 0x102e1cc, Func Offset: 0x2c
	// Line 762, Address: 0x102e208, Func Offset: 0x68
	// Line 764, Address: 0x102e214, Func Offset: 0x74
	// Line 765, Address: 0x102e224, Func Offset: 0x84
	// Line 767, Address: 0x102e22c, Func Offset: 0x8c
	// Line 769, Address: 0x102e25c, Func Offset: 0xbc
	// Line 771, Address: 0x102e268, Func Offset: 0xc8
	// Line 774, Address: 0x102e270, Func Offset: 0xd0
	// Line 776, Address: 0x102e284, Func Offset: 0xe4
	// Func End, Address: 0x102e298, Func Offset: 0xf8
}

// 
// Start address: 0x102e2a0
void type9_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short d1;
	unsigned char d0;
	// Line 781, Address: 0x102e2a0, Func Offset: 0
	// Line 786, Address: 0x102e2b4, Func Offset: 0x14
	// Line 787, Address: 0x102e2c4, Func Offset: 0x24
	// Line 788, Address: 0x102e2d4, Func Offset: 0x34
	// Line 789, Address: 0x102e2e0, Func Offset: 0x40
	// Line 790, Address: 0x102e2ec, Func Offset: 0x4c
	// Line 791, Address: 0x102e2fc, Func Offset: 0x5c
	// Line 792, Address: 0x102e30c, Func Offset: 0x6c
	// Line 793, Address: 0x102e31c, Func Offset: 0x7c
	// Line 794, Address: 0x102e328, Func Offset: 0x88
	// Line 796, Address: 0x102e334, Func Offset: 0x94
	// Line 798, Address: 0x102e348, Func Offset: 0xa8
	// Line 800, Address: 0x102e35c, Func Offset: 0xbc
	// Line 801, Address: 0x102e368, Func Offset: 0xc8
	// Line 802, Address: 0x102e374, Func Offset: 0xd4
	// Line 803, Address: 0x102e380, Func Offset: 0xe0
	// Line 804, Address: 0x102e390, Func Offset: 0xf0
	// Line 805, Address: 0x102e39c, Func Offset: 0xfc
	// Line 806, Address: 0x102e3a8, Func Offset: 0x108
	// Line 808, Address: 0x102e3c0, Func Offset: 0x120
	// Line 809, Address: 0x102e3cc, Func Offset: 0x12c
	// Line 811, Address: 0x102e3d4, Func Offset: 0x134
	// Line 812, Address: 0x102e3dc, Func Offset: 0x13c
	// Line 815, Address: 0x102e408, Func Offset: 0x168
	// Func End, Address: 0x102e420, Func Offset: 0x180
}

// 
// Start address: 0x102e420
void type9_move(_anon0* pActwk)
{
	// Line 820, Address: 0x102e420, Func Offset: 0
	// Line 821, Address: 0x102e42c, Func Offset: 0xc
	// Line 822, Address: 0x102e440, Func Offset: 0x20
	// Func End, Address: 0x102e450, Func Offset: 0x30
}

// 
// Start address: 0x102e450
void udblk4_typeA(_anon0* pActwk)
{
	short d0;
	void(*tbl)(_anon0*)[2];
	// Line 827, Address: 0x102e450, Func Offset: 0
	// Line 829, Address: 0x102e460, Func Offset: 0x10
	// Line 835, Address: 0x102e47c, Func Offset: 0x2c
	// Line 836, Address: 0x102e4b8, Func Offset: 0x68
	// Line 838, Address: 0x102e4c4, Func Offset: 0x74
	// Line 839, Address: 0x102e4d4, Func Offset: 0x84
	// Line 841, Address: 0x102e4dc, Func Offset: 0x8c
	// Line 843, Address: 0x102e50c, Func Offset: 0xbc
	// Line 845, Address: 0x102e518, Func Offset: 0xc8
	// Line 848, Address: 0x102e520, Func Offset: 0xd0
	// Line 850, Address: 0x102e534, Func Offset: 0xe4
	// Func End, Address: 0x102e548, Func Offset: 0xf8
}

// 
// Start address: 0x102e550
void typeA_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	short i;
	unsigned char d1;
	_anon2 tbl[7];
	// Line 855, Address: 0x102e550, Func Offset: 0
	// Line 859, Address: 0x102e564, Func Offset: 0x14
	// Line 870, Address: 0x102e598, Func Offset: 0x48
	// Line 871, Address: 0x102e5a8, Func Offset: 0x58
	// Line 872, Address: 0x102e5b8, Func Offset: 0x68
	// Line 873, Address: 0x102e5c4, Func Offset: 0x74
	// Line 874, Address: 0x102e5d0, Func Offset: 0x80
	// Line 875, Address: 0x102e5e0, Func Offset: 0x90
	// Line 876, Address: 0x102e5f0, Func Offset: 0xa0
	// Line 877, Address: 0x102e5fc, Func Offset: 0xac
	// Line 879, Address: 0x102e608, Func Offset: 0xb8
	// Line 881, Address: 0x102e61c, Func Offset: 0xcc
	// Line 882, Address: 0x102e62c, Func Offset: 0xdc
	// Line 883, Address: 0x102e634, Func Offset: 0xe4
	// Line 885, Address: 0x102e640, Func Offset: 0xf0
	// Line 887, Address: 0x102e654, Func Offset: 0x104
	// Line 888, Address: 0x102e660, Func Offset: 0x110
	// Line 889, Address: 0x102e66c, Func Offset: 0x11c
	// Line 890, Address: 0x102e67c, Func Offset: 0x12c
	// Line 891, Address: 0x102e68c, Func Offset: 0x13c
	// Line 892, Address: 0x102e694, Func Offset: 0x144
	// Line 894, Address: 0x102e6ac, Func Offset: 0x15c
	// Line 896, Address: 0x102e6f0, Func Offset: 0x1a0
	// Line 897, Address: 0x102e6f8, Func Offset: 0x1a8
	// Line 899, Address: 0x102e718, Func Offset: 0x1c8
	// Line 900, Address: 0x102e724, Func Offset: 0x1d4
	// Func End, Address: 0x102e73c, Func Offset: 0x1ec
}

// 
// Start address: 0x102e740
void typeA_move(_anon0* pActwk)
{
	// Line 905, Address: 0x102e740, Func Offset: 0
	// Line 906, Address: 0x102e74c, Func Offset: 0xc
	// Line 907, Address: 0x102e760, Func Offset: 0x20
	// Func End, Address: 0x102e770, Func Offset: 0x30
}

// 
// Start address: 0x102e770
void udblk4_typeB(_anon0* pActwk)
{
	short d0;
	void(*tbl)(_anon0*)[2];
	// Line 912, Address: 0x102e770, Func Offset: 0
	// Line 914, Address: 0x102e780, Func Offset: 0x10
	// Line 920, Address: 0x102e79c, Func Offset: 0x2c
	// Line 921, Address: 0x102e7d8, Func Offset: 0x68
	// Line 923, Address: 0x102e7e4, Func Offset: 0x74
	// Line 924, Address: 0x102e7f4, Func Offset: 0x84
	// Line 926, Address: 0x102e7fc, Func Offset: 0x8c
	// Line 928, Address: 0x102e82c, Func Offset: 0xbc
	// Line 930, Address: 0x102e838, Func Offset: 0xc8
	// Line 933, Address: 0x102e840, Func Offset: 0xd0
	// Line 935, Address: 0x102e854, Func Offset: 0xe4
	// Func End, Address: 0x102e868, Func Offset: 0xf8
}

// 
// Start address: 0x102e870
void typeB_init(_anon0* pActwk)
{
	_anon0* pNewActwk;
	_anon3* a1;
	short i;
	unsigned char d1;
	_anon3 tbl[6];
	// Line 940, Address: 0x102e870, Func Offset: 0
	// Line 945, Address: 0x102e888, Func Offset: 0x18
	// Line 963, Address: 0x102e8bc, Func Offset: 0x4c
	// Line 964, Address: 0x102e8cc, Func Offset: 0x5c
	// Line 965, Address: 0x102e8dc, Func Offset: 0x6c
	// Line 966, Address: 0x102e8e8, Func Offset: 0x78
	// Line 967, Address: 0x102e8f4, Func Offset: 0x84
	// Line 968, Address: 0x102e904, Func Offset: 0x94
	// Line 969, Address: 0x102e910, Func Offset: 0xa0
	// Line 970, Address: 0x102e91c, Func Offset: 0xac
	// Line 972, Address: 0x102e924, Func Offset: 0xb4
	// Line 974, Address: 0x102e938, Func Offset: 0xc8
	// Line 975, Address: 0x102e948, Func Offset: 0xd8
	// Line 976, Address: 0x102e958, Func Offset: 0xe8
	// Line 977, Address: 0x102e960, Func Offset: 0xf0
	// Line 979, Address: 0x102e96c, Func Offset: 0xfc
	// Line 981, Address: 0x102e980, Func Offset: 0x110
	// Line 982, Address: 0x102e98c, Func Offset: 0x11c
	// Line 983, Address: 0x102e998, Func Offset: 0x128
	// Line 984, Address: 0x102e9a0, Func Offset: 0x130
	// Line 985, Address: 0x102e9b0, Func Offset: 0x140
	// Line 987, Address: 0x102e9c0, Func Offset: 0x150
	// Line 988, Address: 0x102e9c8, Func Offset: 0x158
	// Line 990, Address: 0x102e9e8, Func Offset: 0x178
	// Line 991, Address: 0x102ea00, Func Offset: 0x190
	// Line 992, Address: 0x102ea38, Func Offset: 0x1c8
	// Line 993, Address: 0x102ea70, Func Offset: 0x200
	// Line 994, Address: 0x102ea84, Func Offset: 0x214
	// Func End, Address: 0x102eaa0, Func Offset: 0x230
}

// 
// Start address: 0x102eaa0
void typeB_move(_anon0* pActwk)
{
	short d0;
	// Line 999, Address: 0x102eaa0, Func Offset: 0
	// Line 1002, Address: 0x102eaac, Func Offset: 0xc
	// Line 1005, Address: 0x102ead4, Func Offset: 0x34
	// Line 1007, Address: 0x102eaec, Func Offset: 0x4c
	// Line 1008, Address: 0x102eafc, Func Offset: 0x5c
	// Line 1009, Address: 0x102eb20, Func Offset: 0x80
	// Line 1010, Address: 0x102eb34, Func Offset: 0x94
	// Line 1011, Address: 0x102eb48, Func Offset: 0xa8
	// Line 1012, Address: 0x102eb6c, Func Offset: 0xcc
	// Line 1015, Address: 0x102eb74, Func Offset: 0xd4
	// Line 1016, Address: 0x102eb84, Func Offset: 0xe4
	// Line 1017, Address: 0x102eba8, Func Offset: 0x108
	// Line 1018, Address: 0x102ebbc, Func Offset: 0x11c
	// Line 1019, Address: 0x102ebd0, Func Offset: 0x130
	// Line 1021, Address: 0x102ebf4, Func Offset: 0x154
	// Func End, Address: 0x102ec04, Func Offset: 0x164
}

