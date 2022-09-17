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
typedef _anon1* type_2[1];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1* type_5[1];
typedef _anon0 type_6[128];

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

_anon1 spat_chg0;
_anon1 spat_chg1;
_anon1* pat_chg[1];
_anon1* togeball_pat[1];
_anon0 actwk[128];

void togeball(_anon0* actionwk);
void togeball_main(_anon0* actionwk);
void act_init(_anon0* actionwk);
void act_move(_anon0* actionwk);
void togeball_opt(_anon0* actionwk);
void act_init2(_anon0* actionwk);
void act_move2(_anon0* actionwk);

// 
// Start address: 0x102b230
void togeball(_anon0* actionwk)
{
	// Line 53, Address: 0x102b230, Func Offset: 0
	// Line 54, Address: 0x102b23c, Func Offset: 0xc
	// Line 55, Address: 0x102b254, Func Offset: 0x24
	// Line 57, Address: 0x102b268, Func Offset: 0x38
	// Line 58, Address: 0x102b274, Func Offset: 0x44
	// Func End, Address: 0x102b284, Func Offset: 0x54
}

// 
// Start address: 0x102b290
void togeball_main(_anon0* actionwk)
{
	// Line 60, Address: 0x102b290, Func Offset: 0
	// Line 61, Address: 0x102b29c, Func Offset: 0xc
	// Line 64, Address: 0x102b2c4, Func Offset: 0x34
	// Line 65, Address: 0x102b2d0, Func Offset: 0x40
	// Line 67, Address: 0x102b2d8, Func Offset: 0x48
	// Line 70, Address: 0x102b2e4, Func Offset: 0x54
	// Line 71, Address: 0x102b2f0, Func Offset: 0x60
	// Line 72, Address: 0x102b2fc, Func Offset: 0x6c
	// Func End, Address: 0x102b30c, Func Offset: 0x7c
}

// 
// Start address: 0x102b310
void act_init(_anon0* actionwk)
{
	_anon0* a1;
	// Line 74, Address: 0x102b310, Func Offset: 0
	// Line 77, Address: 0x102b31c, Func Offset: 0xc
	// Line 78, Address: 0x102b32c, Func Offset: 0x1c
	// Line 79, Address: 0x102b33c, Func Offset: 0x2c
	// Line 80, Address: 0x102b348, Func Offset: 0x38
	// Line 81, Address: 0x102b354, Func Offset: 0x44
	// Line 82, Address: 0x102b360, Func Offset: 0x50
	// Line 83, Address: 0x102b370, Func Offset: 0x60
	// Line 84, Address: 0x102b37c, Func Offset: 0x6c
	// Line 85, Address: 0x102b388, Func Offset: 0x78
	// Line 86, Address: 0x102b3a0, Func Offset: 0x90
	// Line 89, Address: 0x102b3c4, Func Offset: 0xb4
	// Line 91, Address: 0x102b3dc, Func Offset: 0xcc
	// Line 92, Address: 0x102b3e8, Func Offset: 0xd8
	// Line 94, Address: 0x102b3f0, Func Offset: 0xe0
	// Line 95, Address: 0x102b424, Func Offset: 0x114
	// Line 96, Address: 0x102b458, Func Offset: 0x148
	// Line 97, Address: 0x102b468, Func Offset: 0x158
	// Line 98, Address: 0x102b474, Func Offset: 0x164
	// Line 99, Address: 0x102b480, Func Offset: 0x170
	// Line 101, Address: 0x102b48c, Func Offset: 0x17c
	// Line 103, Address: 0x102b4a4, Func Offset: 0x194
	// Line 104, Address: 0x102b4b0, Func Offset: 0x1a0
	// Line 106, Address: 0x102b4b8, Func Offset: 0x1a8
	// Line 107, Address: 0x102b4ec, Func Offset: 0x1dc
	// Line 108, Address: 0x102b520, Func Offset: 0x210
	// Line 109, Address: 0x102b530, Func Offset: 0x220
	// Line 110, Address: 0x102b53c, Func Offset: 0x22c
	// Line 111, Address: 0x102b548, Func Offset: 0x238
	// Line 113, Address: 0x102b554, Func Offset: 0x244
	// Line 115, Address: 0x102b56c, Func Offset: 0x25c
	// Line 116, Address: 0x102b578, Func Offset: 0x268
	// Line 118, Address: 0x102b580, Func Offset: 0x270
	// Line 119, Address: 0x102b5b4, Func Offset: 0x2a4
	// Line 120, Address: 0x102b5e8, Func Offset: 0x2d8
	// Line 121, Address: 0x102b5f8, Func Offset: 0x2e8
	// Line 122, Address: 0x102b604, Func Offset: 0x2f4
	// Line 123, Address: 0x102b610, Func Offset: 0x300
	// Line 125, Address: 0x102b61c, Func Offset: 0x30c
	// Line 127, Address: 0x102b634, Func Offset: 0x324
	// Line 128, Address: 0x102b640, Func Offset: 0x330
	// Line 130, Address: 0x102b648, Func Offset: 0x338
	// Line 131, Address: 0x102b67c, Func Offset: 0x36c
	// Line 132, Address: 0x102b6b0, Func Offset: 0x3a0
	// Line 133, Address: 0x102b6c0, Func Offset: 0x3b0
	// Line 134, Address: 0x102b6cc, Func Offset: 0x3bc
	// Line 135, Address: 0x102b6d8, Func Offset: 0x3c8
	// Line 136, Address: 0x102b6e4, Func Offset: 0x3d4
	// Func End, Address: 0x102b6f4, Func Offset: 0x3e4
}

// 
// Start address: 0x102b700
void act_move(_anon0* actionwk)
{
	short d0;
	unsigned short sin;
	unsigned short cos;
	int d0l;
	int d1l;
	int d2l;
	int d3l;
	int d4l;
	int d5l;
	_anon0* a1;
	// Line 138, Address: 0x102b700, Func Offset: 0
	// Line 144, Address: 0x102b72c, Func Offset: 0x2c
	// Line 145, Address: 0x102b73c, Func Offset: 0x3c
	// Line 146, Address: 0x102b74c, Func Offset: 0x4c
	// Line 147, Address: 0x102b75c, Func Offset: 0x5c
	// Line 149, Address: 0x102b768, Func Offset: 0x68
	// Line 150, Address: 0x102b77c, Func Offset: 0x7c
	// Line 151, Address: 0x102b784, Func Offset: 0x84
	// Line 152, Address: 0x102b790, Func Offset: 0x90
	// Line 153, Address: 0x102b79c, Func Offset: 0x9c
	// Line 154, Address: 0x102b7a0, Func Offset: 0xa0
	// Line 155, Address: 0x102b7a4, Func Offset: 0xa4
	// Line 156, Address: 0x102b7a8, Func Offset: 0xa8
	// Line 157, Address: 0x102b7ac, Func Offset: 0xac
	// Line 158, Address: 0x102b7b0, Func Offset: 0xb0
	// Line 159, Address: 0x102b7b4, Func Offset: 0xb4
	// Line 160, Address: 0x102b7b8, Func Offset: 0xb8
	// Line 161, Address: 0x102b7bc, Func Offset: 0xbc
	// Line 162, Address: 0x102b7c0, Func Offset: 0xc0
	// Line 163, Address: 0x102b7c4, Func Offset: 0xc4
	// Line 164, Address: 0x102b7e8, Func Offset: 0xe8
	// Line 165, Address: 0x102b7fc, Func Offset: 0xfc
	// Line 166, Address: 0x102b810, Func Offset: 0x110
	// Line 167, Address: 0x102b834, Func Offset: 0x134
	// Line 168, Address: 0x102b848, Func Offset: 0x148
	// Line 169, Address: 0x102b85c, Func Offset: 0x15c
	// Line 170, Address: 0x102b880, Func Offset: 0x180
	// Line 171, Address: 0x102b898, Func Offset: 0x198
	// Line 172, Address: 0x102b8b0, Func Offset: 0x1b0
	// Line 173, Address: 0x102b8d4, Func Offset: 0x1d4
	// Line 174, Address: 0x102b8e8, Func Offset: 0x1e8
	// Line 175, Address: 0x102b8fc, Func Offset: 0x1fc
	// Func End, Address: 0x102b92c, Func Offset: 0x22c
}

// 
// Start address: 0x102b930
void togeball_opt(_anon0* actionwk)
{
	_anon0* a1;
	// Line 177, Address: 0x102b930, Func Offset: 0
	// Line 180, Address: 0x102b940, Func Offset: 0x10
	// Line 183, Address: 0x102b968, Func Offset: 0x38
	// Line 185, Address: 0x102b974, Func Offset: 0x44
	// Line 188, Address: 0x102b980, Func Offset: 0x50
	// Line 189, Address: 0x102b9a4, Func Offset: 0x74
	// Line 191, Address: 0x102b9b8, Func Offset: 0x88
	// Line 192, Address: 0x102b9c4, Func Offset: 0x94
	// Line 194, Address: 0x102b9cc, Func Offset: 0x9c
	// Line 195, Address: 0x102b9d8, Func Offset: 0xa8
	// Func End, Address: 0x102b9ec, Func Offset: 0xbc
}

// 
// Start address: 0x102b9f0
void act_init2(_anon0* actionwk)
{
	// Line 197, Address: 0x102b9f0, Func Offset: 0
	// Line 198, Address: 0x102b9f8, Func Offset: 0x8
	// Line 199, Address: 0x102ba08, Func Offset: 0x18
	// Line 200, Address: 0x102ba18, Func Offset: 0x28
	// Line 201, Address: 0x102ba24, Func Offset: 0x34
	// Line 202, Address: 0x102ba34, Func Offset: 0x44
	// Line 203, Address: 0x102ba40, Func Offset: 0x50
	// Line 204, Address: 0x102ba4c, Func Offset: 0x5c
	// Func End, Address: 0x102ba58, Func Offset: 0x68
}

// 
// Start address: 0x102ba60
void act_move2(_anon0* actionwk)
{
	// Line 206, Address: 0x102ba60, Func Offset: 0
	// Line 207, Address: 0x102ba68, Func Offset: 0x8
	// Line 208, Address: 0x102ba78, Func Offset: 0x18
	// Line 209, Address: 0x102ba88, Func Offset: 0x28
	// Func End, Address: 0x102ba94, Func Offset: 0x34
}

