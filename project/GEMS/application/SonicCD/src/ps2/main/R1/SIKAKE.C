typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_8)(_anon1*);
typedef void(*type_12)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef char type_2[32];
typedef unsigned char* type_3[5];
typedef unsigned char type_4[3];
typedef unsigned char type_5[9];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef void(*type_9)(_anon1*)[2];
typedef _anon0* type_10[6];
typedef _anon0* type_11[1];
typedef void(*type_13)(_anon1*)[7];
typedef unsigned char type_14[3];
typedef _anon1 type_15[128];
typedef unsigned char type_16[9];
typedef unsigned char type_17[16];

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

unsigned char tobita1chg0[16];
unsigned char tobita1chg1[9];
unsigned char tobita1chg2[9];
unsigned char tobitastop1[3];
unsigned char tobitastop2[3];
unsigned char* tobita1chg[5];
_anon0 tobita_a;
_anon0 tobita_b;
_anon0 tobita_c;
_anon0 tobita_r_a;
_anon0 tobita_r_b;
_anon0 tobita_r_c;
_anon0* tobita1_pat[6];
_anon0 pat0;
_anon0* hari12pat[1];
_anon5 editmode;
_anon1 actwk[128];
unsigned char plpower_m;
unsigned char plpower_a;

short colli_pl_sikake_d(_anon1* pActwk, _anon1* pPlayerwk, short collinum);
short colli_pl_sikake(_anon1* pActwk, _anon1* pPlayerwk, short collnum);
void tobita1(_anon1* pActwk);
void tobita_init(_anon1* pActwk);
void tobita_stop_r(_anon1* pActwk);
void tobita_stop_l(_anon1* pActwk);
void tobita_ride_r(_anon1* pActwk);
void tobita_ride_l(_anon1* pActwk);
void tobita_yure_r(_anon1* pActwk);
void tobita_yure_l(_anon1* pActwk);
void hariyama(_anon1* pActwk);
void hari_init(_anon1* pActwk);
void hari_normal(_anon1* pActwk);

// 
// Start address: 0x101e0d0
short colli_pl_sikake_d(_anon1* pActwk, _anon1* pPlayerwk, short collinum)
{
	// Line 154, Address: 0x101e0d0, Func Offset: 0
	// Line 155, Address: 0x101e0e4, Func Offset: 0x14
	// Line 157, Address: 0x101e0fc, Func Offset: 0x2c
	// Line 159, Address: 0x101e114, Func Offset: 0x44
	// Line 161, Address: 0x101e12c, Func Offset: 0x5c
	// Line 165, Address: 0x101e148, Func Offset: 0x78
	// Line 166, Address: 0x101e158, Func Offset: 0x88
	// Line 167, Address: 0x101e15c, Func Offset: 0x8c
	// Func End, Address: 0x101e16c, Func Offset: 0x9c
}

// 
// Start address: 0x101e170
short colli_pl_sikake(_anon1* pActwk, _anon1* pPlayerwk, short collnum)
{
	short xe;
	short xe_w;
	short xp;
	short xp_w;
	short hp;
	short ye;
	short ye_w;
	short yp;
	short yp_w;
	short vp;
	short right;
	short left;
	short up;
	short down;
	char* pPs_colli;
	char ps_colli_tbl[32];
	// Line 178, Address: 0x101e170, Func Offset: 0
	// Line 192, Address: 0x101e1a4, Func Offset: 0x34
	// Line 207, Address: 0x101e1d8, Func Offset: 0x68
	// Line 208, Address: 0x101e1e4, Func Offset: 0x74
	// Line 209, Address: 0x101e1f0, Func Offset: 0x80
	// Line 211, Address: 0x101e204, Func Offset: 0x94
	// Line 212, Address: 0x101e210, Func Offset: 0xa0
	// Line 213, Address: 0x101e21c, Func Offset: 0xac
	// Line 215, Address: 0x101e238, Func Offset: 0xc8
	// Line 216, Address: 0x101e248, Func Offset: 0xd8
	// Line 217, Address: 0x101e254, Func Offset: 0xe4
	// Line 218, Address: 0x101e260, Func Offset: 0xf0
	// Line 219, Address: 0x101e270, Func Offset: 0x100
	// Line 220, Address: 0x101e280, Func Offset: 0x110
	// Line 223, Address: 0x101e29c, Func Offset: 0x12c
	// Line 224, Address: 0x101e2b0, Func Offset: 0x140
	// Line 225, Address: 0x101e2bc, Func Offset: 0x14c
	// Line 226, Address: 0x101e2c8, Func Offset: 0x158
	// Line 227, Address: 0x101e2d4, Func Offset: 0x164
	// Line 228, Address: 0x101e2e0, Func Offset: 0x170
	// Line 229, Address: 0x101e2f0, Func Offset: 0x180
	// Line 232, Address: 0x101e30c, Func Offset: 0x19c
	// Line 233, Address: 0x101e318, Func Offset: 0x1a8
	// Line 234, Address: 0x101e328, Func Offset: 0x1b8
	// Line 236, Address: 0x101e348, Func Offset: 0x1d8
	// Line 237, Address: 0x101e358, Func Offset: 0x1e8
	// Line 238, Address: 0x101e364, Func Offset: 0x1f4
	// Line 239, Address: 0x101e36c, Func Offset: 0x1fc
	// Line 240, Address: 0x101e37c, Func Offset: 0x20c
	// Line 241, Address: 0x101e388, Func Offset: 0x218
	// Line 244, Address: 0x101e3a4, Func Offset: 0x234
	// Line 245, Address: 0x101e3b8, Func Offset: 0x248
	// Line 246, Address: 0x101e3c4, Func Offset: 0x254
	// Line 247, Address: 0x101e3d0, Func Offset: 0x260
	// Line 248, Address: 0x101e3d8, Func Offset: 0x268
	// Line 249, Address: 0x101e3e4, Func Offset: 0x274
	// Line 250, Address: 0x101e3f0, Func Offset: 0x280
	// Line 254, Address: 0x101e40c, Func Offset: 0x29c
	// Line 255, Address: 0x101e41c, Func Offset: 0x2ac
	// Line 258, Address: 0x101e428, Func Offset: 0x2b8
	// Line 259, Address: 0x101e438, Func Offset: 0x2c8
	// Line 260, Address: 0x101e43c, Func Offset: 0x2cc
	// Func End, Address: 0x101e46c, Func Offset: 0x2fc
}

// 
// Start address: 0x101e470
void tobita1(_anon1* pActwk)
{
	void(*tobita_tbl)(_anon1*)[7];
	// Line 293, Address: 0x101e470, Func Offset: 0
	// Line 294, Address: 0x101e47c, Func Offset: 0xc
	// Line 305, Address: 0x101e4a8, Func Offset: 0x38
	// Line 306, Address: 0x101e4e4, Func Offset: 0x74
	// Line 307, Address: 0x101e4f0, Func Offset: 0x80
	// Func End, Address: 0x101e500, Func Offset: 0x90
}

// 
// Start address: 0x101e500
void tobita_init(_anon1* pActwk)
{
	unsigned char d0;
	unsigned char d1;
	// Line 312, Address: 0x101e500, Func Offset: 0
	// Line 315, Address: 0x101e514, Func Offset: 0x14
	// Line 316, Address: 0x101e524, Func Offset: 0x24
	// Line 317, Address: 0x101e534, Func Offset: 0x34
	// Line 318, Address: 0x101e540, Func Offset: 0x40
	// Line 319, Address: 0x101e54c, Func Offset: 0x4c
	// Line 320, Address: 0x101e558, Func Offset: 0x58
	// Line 322, Address: 0x101e564, Func Offset: 0x64
	// Line 324, Address: 0x101e574, Func Offset: 0x74
	// Line 325, Address: 0x101e57c, Func Offset: 0x7c
	// Line 327, Address: 0x101e584, Func Offset: 0x84
	// Line 328, Address: 0x101e594, Func Offset: 0x94
	// Line 330, Address: 0x101e5ac, Func Offset: 0xac
	// Line 331, Address: 0x101e5b4, Func Offset: 0xb4
	// Line 332, Address: 0x101e5bc, Func Offset: 0xbc
	// Line 333, Address: 0x101e5cc, Func Offset: 0xcc
	// Line 335, Address: 0x101e5dc, Func Offset: 0xdc
	// Line 336, Address: 0x101e5e4, Func Offset: 0xe4
	// Line 337, Address: 0x101e5ec, Func Offset: 0xec
	// Func End, Address: 0x101e604, Func Offset: 0x104
}

// 
// Start address: 0x101e610
void tobita_stop_r(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int d0;
	_anon2 d1;
	short tmp;
	// Line 342, Address: 0x101e610, Func Offset: 0
	// Line 348, Address: 0x101e628, Func Offset: 0x18
	// Line 350, Address: 0x101e630, Func Offset: 0x20
	// Line 352, Address: 0x101e64c, Func Offset: 0x3c
	// Line 353, Address: 0x101e654, Func Offset: 0x44
	// Line 354, Address: 0x101e658, Func Offset: 0x48
	// Line 355, Address: 0x101e660, Func Offset: 0x50
	// Line 356, Address: 0x101e66c, Func Offset: 0x5c
	// Line 357, Address: 0x101e674, Func Offset: 0x64
	// Line 358, Address: 0x101e678, Func Offset: 0x68
	// Line 359, Address: 0x101e680, Func Offset: 0x70
	// Line 360, Address: 0x101e684, Func Offset: 0x74
	// Line 361, Address: 0x101e690, Func Offset: 0x80
	// Line 364, Address: 0x101e69c, Func Offset: 0x8c
	// Line 365, Address: 0x101e6b0, Func Offset: 0xa0
	// Line 366, Address: 0x101e6bc, Func Offset: 0xac
	// Func End, Address: 0x101e6d8, Func Offset: 0xc8
}

// 
// Start address: 0x101e6e0
void tobita_stop_l(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int d0;
	_anon2 d1;
	short tmp;
	// Line 371, Address: 0x101e6e0, Func Offset: 0
	// Line 377, Address: 0x101e6f8, Func Offset: 0x18
	// Line 379, Address: 0x101e700, Func Offset: 0x20
	// Line 381, Address: 0x101e71c, Func Offset: 0x3c
	// Line 382, Address: 0x101e724, Func Offset: 0x44
	// Line 383, Address: 0x101e728, Func Offset: 0x48
	// Line 384, Address: 0x101e730, Func Offset: 0x50
	// Line 385, Address: 0x101e73c, Func Offset: 0x5c
	// Line 386, Address: 0x101e744, Func Offset: 0x64
	// Line 387, Address: 0x101e748, Func Offset: 0x68
	// Line 388, Address: 0x101e750, Func Offset: 0x70
	// Line 389, Address: 0x101e754, Func Offset: 0x74
	// Line 390, Address: 0x101e760, Func Offset: 0x80
	// Line 393, Address: 0x101e76c, Func Offset: 0x8c
	// Line 394, Address: 0x101e780, Func Offset: 0xa0
	// Line 395, Address: 0x101e78c, Func Offset: 0xac
	// Func End, Address: 0x101e7a8, Func Offset: 0xc8
}

// 
// Start address: 0x101e7b0
void tobita_ride_r(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	// Line 400, Address: 0x101e7b0, Func Offset: 0
	// Line 403, Address: 0x101e7c0, Func Offset: 0x10
	// Line 405, Address: 0x101e7c8, Func Offset: 0x18
	// Line 407, Address: 0x101e7ec, Func Offset: 0x3c
	// Line 408, Address: 0x101e7f8, Func Offset: 0x48
	// Line 409, Address: 0x101e818, Func Offset: 0x68
	// Line 412, Address: 0x101e83c, Func Offset: 0x8c
	// Line 413, Address: 0x101e850, Func Offset: 0xa0
	// Line 414, Address: 0x101e85c, Func Offset: 0xac
	// Func End, Address: 0x101e870, Func Offset: 0xc0
}

// 
// Start address: 0x101e870
void tobita_ride_l(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	// Line 419, Address: 0x101e870, Func Offset: 0
	// Line 422, Address: 0x101e880, Func Offset: 0x10
	// Line 424, Address: 0x101e888, Func Offset: 0x18
	// Line 426, Address: 0x101e8ac, Func Offset: 0x3c
	// Line 427, Address: 0x101e8b8, Func Offset: 0x48
	// Line 428, Address: 0x101e8d8, Func Offset: 0x68
	// Line 431, Address: 0x101e8fc, Func Offset: 0x8c
	// Line 432, Address: 0x101e910, Func Offset: 0xa0
	// Line 433, Address: 0x101e91c, Func Offset: 0xac
	// Func End, Address: 0x101e930, Func Offset: 0xc0
}

// 
// Start address: 0x101e930
void tobita_yure_r(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int zflag;
	short d0;
	char cnt;
	// Line 438, Address: 0x101e930, Func Offset: 0
	// Line 444, Address: 0x101e950, Func Offset: 0x20
	// Line 446, Address: 0x101e95c, Func Offset: 0x2c
	// Line 448, Address: 0x101e964, Func Offset: 0x34
	// Line 450, Address: 0x101e980, Func Offset: 0x50
	// Line 451, Address: 0x101e98c, Func Offset: 0x5c
	// Line 452, Address: 0x101e998, Func Offset: 0x68
	// Line 453, Address: 0x101e9b8, Func Offset: 0x88
	// Line 454, Address: 0x101e9c4, Func Offset: 0x94
	// Line 455, Address: 0x101e9c8, Func Offset: 0x98
	// Line 456, Address: 0x101e9d4, Func Offset: 0xa4
	// Line 457, Address: 0x101e9fc, Func Offset: 0xcc
	// Line 458, Address: 0x101ea08, Func Offset: 0xd8
	// Line 459, Address: 0x101ea14, Func Offset: 0xe4
	// Line 460, Address: 0x101ea20, Func Offset: 0xf0
	// Line 462, Address: 0x101ea24, Func Offset: 0xf4
	// Line 463, Address: 0x101ea2c, Func Offset: 0xfc
	// Line 464, Address: 0x101ea34, Func Offset: 0x104
	// Line 466, Address: 0x101ea48, Func Offset: 0x118
	// Line 467, Address: 0x101ea50, Func Offset: 0x120
	// Line 468, Address: 0x101ea58, Func Offset: 0x128
	// Line 469, Address: 0x101ea64, Func Offset: 0x134
	// Line 470, Address: 0x101ea70, Func Offset: 0x140
	// Line 471, Address: 0x101ea78, Func Offset: 0x148
	// Line 474, Address: 0x101ea80, Func Offset: 0x150
	// Line 478, Address: 0x101ea8c, Func Offset: 0x15c
	// Line 479, Address: 0x101ea9c, Func Offset: 0x16c
	// Line 480, Address: 0x101eaa8, Func Offset: 0x178
	// Line 481, Address: 0x101eab0, Func Offset: 0x180
	// Line 483, Address: 0x101eac0, Func Offset: 0x190
	// Line 484, Address: 0x101eacc, Func Offset: 0x19c
	// Line 485, Address: 0x101ead8, Func Offset: 0x1a8
	// Line 488, Address: 0x101eae4, Func Offset: 0x1b4
	// Line 489, Address: 0x101eaf8, Func Offset: 0x1c8
	// Line 490, Address: 0x101eb04, Func Offset: 0x1d4
	// Func End, Address: 0x101eb28, Func Offset: 0x1f8
}

// 
// Start address: 0x101eb30
void tobita_yure_l(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int zflag;
	short d0;
	char cnt;
	// Line 495, Address: 0x101eb30, Func Offset: 0
	// Line 501, Address: 0x101eb50, Func Offset: 0x20
	// Line 503, Address: 0x101eb5c, Func Offset: 0x2c
	// Line 505, Address: 0x101eb64, Func Offset: 0x34
	// Line 507, Address: 0x101eb80, Func Offset: 0x50
	// Line 508, Address: 0x101eb8c, Func Offset: 0x5c
	// Line 509, Address: 0x101eb98, Func Offset: 0x68
	// Line 510, Address: 0x101ebb8, Func Offset: 0x88
	// Line 511, Address: 0x101ebc4, Func Offset: 0x94
	// Line 512, Address: 0x101ebc8, Func Offset: 0x98
	// Line 513, Address: 0x101ebd4, Func Offset: 0xa4
	// Line 514, Address: 0x101ebfc, Func Offset: 0xcc
	// Line 515, Address: 0x101ec08, Func Offset: 0xd8
	// Line 516, Address: 0x101ec14, Func Offset: 0xe4
	// Line 517, Address: 0x101ec20, Func Offset: 0xf0
	// Line 519, Address: 0x101ec24, Func Offset: 0xf4
	// Line 520, Address: 0x101ec2c, Func Offset: 0xfc
	// Line 521, Address: 0x101ec34, Func Offset: 0x104
	// Line 523, Address: 0x101ec48, Func Offset: 0x118
	// Line 524, Address: 0x101ec50, Func Offset: 0x120
	// Line 525, Address: 0x101ec58, Func Offset: 0x128
	// Line 526, Address: 0x101ec64, Func Offset: 0x134
	// Line 527, Address: 0x101ec70, Func Offset: 0x140
	// Line 528, Address: 0x101ec78, Func Offset: 0x148
	// Line 531, Address: 0x101ec80, Func Offset: 0x150
	// Line 535, Address: 0x101ec8c, Func Offset: 0x15c
	// Line 536, Address: 0x101ec9c, Func Offset: 0x16c
	// Line 537, Address: 0x101eca8, Func Offset: 0x178
	// Line 538, Address: 0x101ecb0, Func Offset: 0x180
	// Line 540, Address: 0x101ecc0, Func Offset: 0x190
	// Line 541, Address: 0x101eccc, Func Offset: 0x19c
	// Line 542, Address: 0x101ecd8, Func Offset: 0x1a8
	// Line 545, Address: 0x101ece4, Func Offset: 0x1b4
	// Line 546, Address: 0x101ecf8, Func Offset: 0x1c8
	// Line 547, Address: 0x101ed04, Func Offset: 0x1d4
	// Func End, Address: 0x101ed28, Func Offset: 0x1f8
}

// 
// Start address: 0x101ed30
void hariyama(_anon1* pActwk)
{
	void(*hari_tbl)(_anon1*)[2];
	// Line 558, Address: 0x101ed30, Func Offset: 0
	// Line 559, Address: 0x101ed3c, Func Offset: 0xc
	// Line 565, Address: 0x101ed58, Func Offset: 0x28
	// Line 566, Address: 0x101ed94, Func Offset: 0x64
	// Func End, Address: 0x101eda4, Func Offset: 0x74
}

// 
// Start address: 0x101edb0
void hari_init(_anon1* pActwk)
{
	// Line 571, Address: 0x101edb0, Func Offset: 0
	// Line 572, Address: 0x101edbc, Func Offset: 0xc
	// Line 573, Address: 0x101edcc, Func Offset: 0x1c
	// Line 574, Address: 0x101eddc, Func Offset: 0x2c
	// Line 575, Address: 0x101edec, Func Offset: 0x3c
	// Line 576, Address: 0x101edf8, Func Offset: 0x48
	// Line 577, Address: 0x101ee08, Func Offset: 0x58
	// Line 578, Address: 0x101ee14, Func Offset: 0x64
	// Line 580, Address: 0x101ee20, Func Offset: 0x70
	// Line 582, Address: 0x101ee38, Func Offset: 0x88
	// Line 583, Address: 0x101ee44, Func Offset: 0x94
	// Line 585, Address: 0x101ee50, Func Offset: 0xa0
	// Line 586, Address: 0x101ee5c, Func Offset: 0xac
	// Func End, Address: 0x101ee6c, Func Offset: 0xbc
}

// 
// Start address: 0x101ee70
void hari_normal(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short py;
	// Line 591, Address: 0x101ee70, Func Offset: 0
	// Line 595, Address: 0x101ee84, Func Offset: 0x14
	// Line 596, Address: 0x101ee8c, Func Offset: 0x1c
	// Line 597, Address: 0x101ee98, Func Offset: 0x28
	// Line 598, Address: 0x101eeac, Func Offset: 0x3c
	// Line 599, Address: 0x101eec8, Func Offset: 0x58
	// Line 600, Address: 0x101eedc, Func Offset: 0x6c
	// Line 602, Address: 0x101eef4, Func Offset: 0x84
	// Line 603, Address: 0x101ef04, Func Offset: 0x94
	// Line 605, Address: 0x101ef0c, Func Offset: 0x9c
	// Line 606, Address: 0x101ef2c, Func Offset: 0xbc
	// Line 608, Address: 0x101ef44, Func Offset: 0xd4
	// Line 609, Address: 0x101ef54, Func Offset: 0xe4
	// Line 611, Address: 0x101ef64, Func Offset: 0xf4
	// Line 613, Address: 0x101ef78, Func Offset: 0x108
	// Line 615, Address: 0x101ef88, Func Offset: 0x118
	// Line 616, Address: 0x101ef98, Func Offset: 0x128
	// Line 620, Address: 0x101efa8, Func Offset: 0x138
	// Line 621, Address: 0x101efb4, Func Offset: 0x144
	// Line 622, Address: 0x101efc0, Func Offset: 0x150
	// Func End, Address: 0x101efd8, Func Offset: 0x168
}

