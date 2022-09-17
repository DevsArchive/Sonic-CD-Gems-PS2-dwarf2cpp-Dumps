typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_10)(_anon0*);
typedef void(*type_12)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[2];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef unsigned char type_6[50];
typedef _anon1* type_7[6];
typedef _anon0 type_8[128];
typedef unsigned char type_9[50];
typedef void(*type_11)(_anon0*)[3];
typedef void(*type_13)(_anon0*)[25];
typedef unsigned char type_14[25];

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
_anon1* dair5pat[6];
_anon5 stageno;
_anon0 actwk[128];
_anon2 scra_v_posit;
unsigned char colrevflag;
unsigned char time_flag;

void dair5(_anon0* pActwk);
void dair5_init(_anon0* pActwk);
void dair5_move(_anon0* pActwk);
void type01(_anon0* pActwk);
void type02(_anon0* pActwk);
void type03(_anon0* pActwk);
void type04(_anon0* pActwk);
void type05(_anon0* pActwk);
void type06(_anon0* pActwk);
void type06_00(_anon0* pActwk);
void type06_01(_anon0* pActwk);
void type06_02();
void dodai_sub(_anon0* pActwk, unsigned char d4);
void dai5sub(_anon0* pActwk);
void banesetsub(_anon0* pActwk, char d2);
void belttask(_anon0* pActwk);

// 
// Start address: 0x101e690
void dair5(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 120, Address: 0x101e690, Func Offset: 0
	// Line 121, Address: 0x101e69c, Func Offset: 0xc
	// Line 127, Address: 0x101e6b8, Func Offset: 0x28
	// Line 128, Address: 0x101e6f4, Func Offset: 0x64
	// Line 129, Address: 0x101e700, Func Offset: 0x70
	// Line 130, Address: 0x101e714, Func Offset: 0x84
	// Func End, Address: 0x101e724, Func Offset: 0x94
}

// 
// Start address: 0x101e730
void dair5_init(_anon0* pActwk)
{
	unsigned char* a2;
	short d0;
	unsigned char bd0;
	unsigned char bd1;
	unsigned char ini_tbl[50];
	unsigned char belt_flag[50];
	unsigned char bane_flag[25];
	// Line 135, Address: 0x101e730, Func Offset: 0
	// Line 140, Address: 0x101e74c, Func Offset: 0x1c
	// Line 171, Address: 0x101e780, Func Offset: 0x50
	// Line 182, Address: 0x101e7b4, Func Offset: 0x84
	// Line 189, Address: 0x101e7e0, Func Offset: 0xb0
	// Line 190, Address: 0x101e7f0, Func Offset: 0xc0
	// Line 191, Address: 0x101e800, Func Offset: 0xd0
	// Line 193, Address: 0x101e80c, Func Offset: 0xdc
	// Line 194, Address: 0x101e818, Func Offset: 0xe8
	// Line 196, Address: 0x101e834, Func Offset: 0x104
	// Line 198, Address: 0x101e840, Func Offset: 0x110
	// Line 200, Address: 0x101e848, Func Offset: 0x118
	// Line 201, Address: 0x101e858, Func Offset: 0x128
	// Line 202, Address: 0x101e868, Func Offset: 0x138
	// Line 203, Address: 0x101e878, Func Offset: 0x148
	// Line 204, Address: 0x101e884, Func Offset: 0x154
	// Line 205, Address: 0x101e888, Func Offset: 0x158
	// Line 207, Address: 0x101e88c, Func Offset: 0x15c
	// Line 208, Address: 0x101e898, Func Offset: 0x168
	// Line 209, Address: 0x101e8a0, Func Offset: 0x170
	// Line 210, Address: 0x101e8a4, Func Offset: 0x174
	// Line 211, Address: 0x101e8b8, Func Offset: 0x188
	// Line 212, Address: 0x101e8c4, Func Offset: 0x194
	// Line 213, Address: 0x101e8d8, Func Offset: 0x1a8
	// Line 215, Address: 0x101e8ec, Func Offset: 0x1bc
	// Line 216, Address: 0x101e8f8, Func Offset: 0x1c8
	// Line 218, Address: 0x101e904, Func Offset: 0x1d4
	// Line 219, Address: 0x101e910, Func Offset: 0x1e0
	// Line 220, Address: 0x101e918, Func Offset: 0x1e8
	// Line 228, Address: 0x101e950, Func Offset: 0x220
	// Line 229, Address: 0x101e960, Func Offset: 0x230
	// Line 233, Address: 0x101e968, Func Offset: 0x238
	// Line 234, Address: 0x101e978, Func Offset: 0x248
	// Line 235, Address: 0x101e988, Func Offset: 0x258
	// Line 239, Address: 0x101e990, Func Offset: 0x260
	// Line 240, Address: 0x101e9a0, Func Offset: 0x270
	// Line 241, Address: 0x101e9b0, Func Offset: 0x280
	// Line 249, Address: 0x101e9c0, Func Offset: 0x290
	// Line 250, Address: 0x101e9cc, Func Offset: 0x29c
	// Func End, Address: 0x101e9ec, Func Offset: 0x2bc
}

// 
// Start address: 0x101e9f0
void dair5_move(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[25];
	// Line 255, Address: 0x101e9f0, Func Offset: 0
	// Line 256, Address: 0x101e9fc, Func Offset: 0xc
	// Line 287, Address: 0x101ea28, Func Offset: 0x38
	// Line 288, Address: 0x101ea54, Func Offset: 0x64
	// Line 289, Address: 0x101ea60, Func Offset: 0x70
	// Line 290, Address: 0x101ea6c, Func Offset: 0x7c
	// Line 291, Address: 0x101ea80, Func Offset: 0x90
	// Func End, Address: 0x101ea90, Func Offset: 0xa0
}

// 
// Start address: 0x101ea90
void type01(_anon0* pActwk)
{
	// Line 297, Address: 0x101ea90, Func Offset: 0
	// Line 298, Address: 0x101ea98, Func Offset: 0x8
	// Line 299, Address: 0x101eaa8, Func Offset: 0x18
	// Func End, Address: 0x101eab4, Func Offset: 0x24
}

// 
// Start address: 0x101eac0
void type02(_anon0* pActwk)
{
	short d0;
	// Line 304, Address: 0x101eac0, Func Offset: 0
	// Line 307, Address: 0x101ead0, Func Offset: 0x10
	// Line 308, Address: 0x101eae0, Func Offset: 0x20
	// Line 309, Address: 0x101eaec, Func Offset: 0x2c
	// Line 311, Address: 0x101eafc, Func Offset: 0x3c
	// Line 312, Address: 0x101eb0c, Func Offset: 0x4c
	// Line 314, Address: 0x101eb28, Func Offset: 0x68
	// Line 316, Address: 0x101eb34, Func Offset: 0x74
	// Line 317, Address: 0x101eb3c, Func Offset: 0x7c
	// Line 318, Address: 0x101eb58, Func Offset: 0x98
	// Func End, Address: 0x101eb6c, Func Offset: 0xac
}

// 
// Start address: 0x101eb70
void type03(_anon0* pActwk)
{
	int ld0;
	short d0;
	// Line 323, Address: 0x101eb70, Func Offset: 0
	// Line 327, Address: 0x101eb84, Func Offset: 0x14
	// Line 328, Address: 0x101eb90, Func Offset: 0x20
	// Line 329, Address: 0x101eba0, Func Offset: 0x30
	// Line 330, Address: 0x101ebb0, Func Offset: 0x40
	// Line 332, Address: 0x101ebcc, Func Offset: 0x5c
	// Line 334, Address: 0x101ebd8, Func Offset: 0x68
	// Line 335, Address: 0x101ebe0, Func Offset: 0x70
	// Line 336, Address: 0x101ebe4, Func Offset: 0x74
	// Line 337, Address: 0x101ebf4, Func Offset: 0x84
	// Func End, Address: 0x101ec0c, Func Offset: 0x9c
}

// 
// Start address: 0x101ec10
void type04(_anon0* pActwk)
{
	short d0;
	// Line 342, Address: 0x101ec10, Func Offset: 0
	// Line 345, Address: 0x101ec20, Func Offset: 0x10
	// Line 346, Address: 0x101ec30, Func Offset: 0x20
	// Line 347, Address: 0x101ec3c, Func Offset: 0x2c
	// Line 349, Address: 0x101ec4c, Func Offset: 0x3c
	// Line 350, Address: 0x101ec5c, Func Offset: 0x4c
	// Line 352, Address: 0x101ec78, Func Offset: 0x68
	// Line 354, Address: 0x101ec84, Func Offset: 0x74
	// Line 355, Address: 0x101ec8c, Func Offset: 0x7c
	// Line 356, Address: 0x101eca8, Func Offset: 0x98
	// Func End, Address: 0x101ecbc, Func Offset: 0xac
}

// 
// Start address: 0x101ecc0
void type05(_anon0* pActwk)
{
	int ld0;
	short d0;
	// Line 361, Address: 0x101ecc0, Func Offset: 0
	// Line 365, Address: 0x101ecd4, Func Offset: 0x14
	// Line 367, Address: 0x101ece8, Func Offset: 0x28
	// Line 368, Address: 0x101ecf8, Func Offset: 0x38
	// Line 370, Address: 0x101ed10, Func Offset: 0x50
	// Line 371, Address: 0x101ed1c, Func Offset: 0x5c
	// Line 373, Address: 0x101ed28, Func Offset: 0x68
	// Line 376, Address: 0x101ed30, Func Offset: 0x70
	// Line 378, Address: 0x101ed40, Func Offset: 0x80
	// Line 379, Address: 0x101ed50, Func Offset: 0x90
	// Line 380, Address: 0x101ed60, Func Offset: 0xa0
	// Line 382, Address: 0x101ed70, Func Offset: 0xb0
	// Line 383, Address: 0x101ed7c, Func Offset: 0xbc
	// Line 385, Address: 0x101ed98, Func Offset: 0xd8
	// Line 386, Address: 0x101eda4, Func Offset: 0xe4
	// Line 388, Address: 0x101edc0, Func Offset: 0x100
	// Line 391, Address: 0x101edcc, Func Offset: 0x10c
	// Line 392, Address: 0x101eddc, Func Offset: 0x11c
	// Line 394, Address: 0x101edf0, Func Offset: 0x130
	// Line 396, Address: 0x101ee00, Func Offset: 0x140
	// Line 397, Address: 0x101ee10, Func Offset: 0x150
	// Line 398, Address: 0x101ee14, Func Offset: 0x154
	// Line 399, Address: 0x101ee24, Func Offset: 0x164
	// Line 400, Address: 0x101ee34, Func Offset: 0x174
	// Line 401, Address: 0x101ee40, Func Offset: 0x180
	// Line 403, Address: 0x101ee64, Func Offset: 0x1a4
	// Line 404, Address: 0x101ee78, Func Offset: 0x1b8
	// Line 407, Address: 0x101ee84, Func Offset: 0x1c4
	// Func End, Address: 0x101ee9c, Func Offset: 0x1dc
}

// 
// Start address: 0x101eea0
void type06(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[3];
	// Line 412, Address: 0x101eea0, Func Offset: 0
	// Line 413, Address: 0x101eeac, Func Offset: 0xc
	// Line 420, Address: 0x101eed0, Func Offset: 0x30
	// Line 421, Address: 0x101ef0c, Func Offset: 0x6c
	// Func End, Address: 0x101ef1c, Func Offset: 0x7c
}

// 
// Start address: 0x101ef20
void type06_00(_anon0* pActwk)
{
	// Line 424, Address: 0x101ef20, Func Offset: 0
	// Line 425, Address: 0x101ef2c, Func Offset: 0xc
	// Line 426, Address: 0x101ef3c, Func Offset: 0x1c
	// Line 428, Address: 0x101ef54, Func Offset: 0x34
	// Line 429, Address: 0x101ef64, Func Offset: 0x44
	// Line 430, Address: 0x101ef70, Func Offset: 0x50
	// Line 432, Address: 0x101ef7c, Func Offset: 0x5c
	// Func End, Address: 0x101ef8c, Func Offset: 0x6c
}

// 
// Start address: 0x101ef90
void type06_01(_anon0* pActwk)
{
	int stk;
	short d0;
	short d1;
	// Line 435, Address: 0x101ef90, Func Offset: 0
	// Line 439, Address: 0x101efa8, Func Offset: 0x18
	// Line 441, Address: 0x101efb8, Func Offset: 0x28
	// Line 442, Address: 0x101efc8, Func Offset: 0x38
	// Line 443, Address: 0x101efd8, Func Offset: 0x48
	// Line 444, Address: 0x101efe8, Func Offset: 0x58
	// Line 446, Address: 0x101eff4, Func Offset: 0x64
	// Line 447, Address: 0x101f004, Func Offset: 0x74
	// Line 448, Address: 0x101f010, Func Offset: 0x80
	// Line 450, Address: 0x101f024, Func Offset: 0x94
	// Line 452, Address: 0x101f030, Func Offset: 0xa0
	// Line 453, Address: 0x101f038, Func Offset: 0xa8
	// Line 454, Address: 0x101f044, Func Offset: 0xb4
	// Line 455, Address: 0x101f04c, Func Offset: 0xbc
	// Line 456, Address: 0x101f05c, Func Offset: 0xcc
	// Line 457, Address: 0x101f070, Func Offset: 0xe0
	// Line 458, Address: 0x101f078, Func Offset: 0xe8
	// Line 460, Address: 0x101f088, Func Offset: 0xf8
	// Line 461, Address: 0x101f094, Func Offset: 0x104
	// Line 462, Address: 0x101f09c, Func Offset: 0x10c
	// Line 463, Address: 0x101f0ac, Func Offset: 0x11c
	// Line 464, Address: 0x101f0bc, Func Offset: 0x12c
	// Line 466, Address: 0x101f0cc, Func Offset: 0x13c
	// Func End, Address: 0x101f0e8, Func Offset: 0x158
}

// 
// Start address: 0x101f0f0
void type06_02()
{
	// Line 469, Address: 0x101f0f0, Func Offset: 0
	// Line 471, Address: 0x101f0f4, Func Offset: 0x4
	// Func End, Address: 0x101f100, Func Offset: 0x10
}

// 
// Start address: 0x101f100
void dodai_sub(_anon0* pActwk, unsigned char d4)
{
	short d0;
	short d2;
	// Line 476, Address: 0x101f100, Func Offset: 0
	// Line 479, Address: 0x101f114, Func Offset: 0x14
	// Line 480, Address: 0x101f124, Func Offset: 0x24
	// Line 482, Address: 0x101f138, Func Offset: 0x38
	// Line 483, Address: 0x101f148, Func Offset: 0x48
	// Line 484, Address: 0x101f154, Func Offset: 0x54
	// Line 485, Address: 0x101f15c, Func Offset: 0x5c
	// Line 486, Address: 0x101f16c, Func Offset: 0x6c
	// Line 488, Address: 0x101f18c, Func Offset: 0x8c
	// Line 490, Address: 0x101f198, Func Offset: 0x98
	// Line 493, Address: 0x101f1a0, Func Offset: 0xa0
	// Line 494, Address: 0x101f1b0, Func Offset: 0xb0
	// Line 495, Address: 0x101f1bc, Func Offset: 0xbc
	// Line 496, Address: 0x101f1c4, Func Offset: 0xc4
	// Line 497, Address: 0x101f1d4, Func Offset: 0xd4
	// Line 499, Address: 0x101f1f4, Func Offset: 0xf4
	// Line 502, Address: 0x101f1fc, Func Offset: 0xfc
	// Func End, Address: 0x101f210, Func Offset: 0x110
}

// 
// Start address: 0x101f210
void dai5sub(_anon0* pActwk)
{
	_anon2 ld0;
	short d0;
	short d1;
	// Line 507, Address: 0x101f210, Func Offset: 0
	// Line 511, Address: 0x101f21c, Func Offset: 0xc
	// Line 513, Address: 0x101f234, Func Offset: 0x24
	// Line 515, Address: 0x101f24c, Func Offset: 0x3c
	// Line 519, Address: 0x101f260, Func Offset: 0x50
	// Line 520, Address: 0x101f270, Func Offset: 0x60
	// Line 523, Address: 0x101f278, Func Offset: 0x68
	// Line 527, Address: 0x101f290, Func Offset: 0x80
	// Line 529, Address: 0x101f2a0, Func Offset: 0x90
	// Line 530, Address: 0x101f2b8, Func Offset: 0xa8
	// Line 531, Address: 0x101f2c0, Func Offset: 0xb0
	// Line 532, Address: 0x101f2e0, Func Offset: 0xd0
	// Line 533, Address: 0x101f2e8, Func Offset: 0xd8
	// Line 534, Address: 0x101f2fc, Func Offset: 0xec
	// Line 536, Address: 0x101f308, Func Offset: 0xf8
	// Func End, Address: 0x101f318, Func Offset: 0x108
}

// 
// Start address: 0x101f320
void banesetsub(_anon0* pActwk, char d2)
{
	_anon0* pNewActwk;
	// Line 541, Address: 0x101f320, Func Offset: 0
	// Line 545, Address: 0x101f330, Func Offset: 0x10
	// Line 547, Address: 0x101f348, Func Offset: 0x28
	// Line 548, Address: 0x101f354, Func Offset: 0x34
	// Line 549, Address: 0x101f364, Func Offset: 0x44
	// Line 550, Address: 0x101f374, Func Offset: 0x54
	// Line 551, Address: 0x101f380, Func Offset: 0x60
	// Line 552, Address: 0x101f38c, Func Offset: 0x6c
	// Line 553, Address: 0x101f3c8, Func Offset: 0xa8
	// Line 555, Address: 0x101f3d4, Func Offset: 0xb4
	// Func End, Address: 0x101f3e4, Func Offset: 0xc4
}

// 
// Start address: 0x101f3f0
void belttask(_anon0* pActwk)
{
	_anon0* pPlayerwk;
	int ld0;
	short d0;
	unsigned char bd1;
	// Line 560, Address: 0x101f3f0, Func Offset: 0
	// Line 566, Address: 0x101f408, Func Offset: 0x18
	// Line 567, Address: 0x101f420, Func Offset: 0x30
	// Line 569, Address: 0x101f438, Func Offset: 0x48
	// Line 571, Address: 0x101f440, Func Offset: 0x50
	// Line 573, Address: 0x101f450, Func Offset: 0x60
	// Line 574, Address: 0x101f464, Func Offset: 0x74
	// Line 576, Address: 0x101f47c, Func Offset: 0x8c
	// Line 578, Address: 0x101f4c8, Func Offset: 0xd8
	// Line 579, Address: 0x101f4d4, Func Offset: 0xe4
	// Line 580, Address: 0x101f4d8, Func Offset: 0xe8
	// Line 582, Address: 0x101f4e0, Func Offset: 0xf0
	// Line 583, Address: 0x101f4e4, Func Offset: 0xf4
	// Line 584, Address: 0x101f4ec, Func Offset: 0xfc
	// Line 586, Address: 0x101f4f4, Func Offset: 0x104
	// Line 589, Address: 0x101f4f8, Func Offset: 0x108
	// Line 591, Address: 0x101f508, Func Offset: 0x118
	// Line 593, Address: 0x101f50c, Func Offset: 0x11c
	// Line 594, Address: 0x101f518, Func Offset: 0x128
	// Func End, Address: 0x101f534, Func Offset: 0x144
}

