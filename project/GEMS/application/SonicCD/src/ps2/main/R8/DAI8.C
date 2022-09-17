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
typedef _anon0* type_2[8];
typedef char* type_3[2];
typedef char type_4[47];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef short type_7[2];
typedef _anon1 type_8[128];
typedef short type_9[5];
typedef char type_10[152];
typedef short type_11[8];

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

char p00[47];
char p01[152];
char* pchg[2];
_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 patnull;
_anon0* pat_dai8[8];
_anon1 actwk[128];

void dai8(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_init_sub(_anon1* actionwk, _anon1* a6);
void act_wait(_anon1* actionwk);
void act_appear(_anon1* actionwk);
void act_on(_anon1* actionwk);
void act_off(_anon1* actionwk);

// 
// Start address: 0x1024a10
void dai8(_anon1* actionwk)
{
	short ano;
	// Line 90, Address: 0x1024a10, Func Offset: 0
	// Line 93, Address: 0x1024a20, Func Offset: 0x10
	// Line 95, Address: 0x1024a38, Func Offset: 0x28
	// Line 96, Address: 0x1024a48, Func Offset: 0x38
	// Line 98, Address: 0x1024a7c, Func Offset: 0x6c
	// Line 99, Address: 0x1024a88, Func Offset: 0x78
	// Line 101, Address: 0x1024a90, Func Offset: 0x80
	// Line 104, Address: 0x1024ad4, Func Offset: 0xc4
	// Line 105, Address: 0x1024ae0, Func Offset: 0xd0
	// Line 107, Address: 0x1024ae8, Func Offset: 0xd8
	// Line 110, Address: 0x1024b2c, Func Offset: 0x11c
	// Line 111, Address: 0x1024b38, Func Offset: 0x128
	// Line 115, Address: 0x1024b40, Func Offset: 0x130
	// Line 118, Address: 0x1024b8c, Func Offset: 0x17c
	// Line 119, Address: 0x1024b98, Func Offset: 0x188
	// Line 121, Address: 0x1024ba0, Func Offset: 0x190
	// Line 122, Address: 0x1024bac, Func Offset: 0x19c
	// Line 124, Address: 0x1024bb4, Func Offset: 0x1a4
	// Line 125, Address: 0x1024bc0, Func Offset: 0x1b0
	// Line 127, Address: 0x1024bc8, Func Offset: 0x1b8
	// Line 128, Address: 0x1024bd4, Func Offset: 0x1c4
	// Line 130, Address: 0x1024bdc, Func Offset: 0x1cc
	// Line 133, Address: 0x1024be8, Func Offset: 0x1d8
	// Line 134, Address: 0x1024bf4, Func Offset: 0x1e4
	// Line 136, Address: 0x1024c0c, Func Offset: 0x1fc
	// Line 138, Address: 0x1024c20, Func Offset: 0x210
	// Func End, Address: 0x1024c34, Func Offset: 0x224
}

// 
// Start address: 0x1024c40
void act_init(_anon1* actionwk)
{
	short tbl00[2];
	short tbl01[5];
	short tbl02[8];
	_anon1* a1;
	short* a5tbl;
	short i;
	short d6;
	// Line 140, Address: 0x1024c40, Func Offset: 0
	// Line 141, Address: 0x1024c58, Func Offset: 0x18
	// Line 142, Address: 0x1024c74, Func Offset: 0x34
	// Line 143, Address: 0x1024ca0, Func Offset: 0x60
	// Line 147, Address: 0x1024cd4, Func Offset: 0x94
	// Line 150, Address: 0x1024d0c, Func Offset: 0xcc
	// Line 151, Address: 0x1024d10, Func Offset: 0xd0
	// Line 153, Address: 0x1024d18, Func Offset: 0xd8
	// Line 154, Address: 0x1024d1c, Func Offset: 0xdc
	// Line 156, Address: 0x1024d24, Func Offset: 0xe4
	// Line 159, Address: 0x1024d28, Func Offset: 0xe8
	// Line 160, Address: 0x1024d3c, Func Offset: 0xfc
	// Line 162, Address: 0x1024d4c, Func Offset: 0x10c
	// Line 163, Address: 0x1024d60, Func Offset: 0x120
	// Line 165, Address: 0x1024d6c, Func Offset: 0x12c
	// Line 167, Address: 0x1024d80, Func Offset: 0x140
	// Line 168, Address: 0x1024d8c, Func Offset: 0x14c
	// Line 170, Address: 0x1024d94, Func Offset: 0x154
	// Line 171, Address: 0x1024da4, Func Offset: 0x164
	// Line 172, Address: 0x1024de0, Func Offset: 0x1a0
	// Line 173, Address: 0x1024dec, Func Offset: 0x1ac
	// Line 174, Address: 0x1024e00, Func Offset: 0x1c0
	// Line 175, Address: 0x1024e38, Func Offset: 0x1f8
	// Line 176, Address: 0x1024e70, Func Offset: 0x230
	// Line 177, Address: 0x1024e80, Func Offset: 0x240
	// Line 178, Address: 0x1024ea8, Func Offset: 0x268
	// Func End, Address: 0x1024ec4, Func Offset: 0x284
}

// 
// Start address: 0x1024ed0
void act_init_sub(_anon1* actionwk, _anon1* a6)
{
	// Line 180, Address: 0x1024ed0, Func Offset: 0
	// Line 181, Address: 0x1024edc, Func Offset: 0xc
	// Line 182, Address: 0x1024eec, Func Offset: 0x1c
	// Line 183, Address: 0x1024ef8, Func Offset: 0x28
	// Line 184, Address: 0x1024f04, Func Offset: 0x34
	// Line 185, Address: 0x1024f10, Func Offset: 0x40
	// Line 186, Address: 0x1024f1c, Func Offset: 0x4c
	// Line 187, Address: 0x1024f28, Func Offset: 0x58
	// Line 188, Address: 0x1024f38, Func Offset: 0x68
	// Line 189, Address: 0x1024f44, Func Offset: 0x74
	// Line 190, Address: 0x1024f50, Func Offset: 0x80
	// Line 191, Address: 0x1024f60, Func Offset: 0x90
	// Line 192, Address: 0x1024f70, Func Offset: 0xa0
	// Func End, Address: 0x1024f7c, Func Offset: 0xac
}

// 
// Start address: 0x1024f80
void act_wait(_anon1* actionwk)
{
	// Line 194, Address: 0x1024f80, Func Offset: 0
	// Line 195, Address: 0x1024f88, Func Offset: 0x8
	// Line 196, Address: 0x1024fb0, Func Offset: 0x30
	// Line 197, Address: 0x1024fc0, Func Offset: 0x40
	// Func End, Address: 0x1024fcc, Func Offset: 0x4c
}

// 
// Start address: 0x1024fd0
void act_appear(_anon1* actionwk)
{
	// Line 199, Address: 0x1024fd0, Func Offset: 0
	// Line 200, Address: 0x1024fdc, Func Offset: 0xc
	// Line 201, Address: 0x1024ff0, Func Offset: 0x20
	// Line 203, Address: 0x1025004, Func Offset: 0x34
	// Line 204, Address: 0x1025010, Func Offset: 0x40
	// Line 207, Address: 0x1025020, Func Offset: 0x50
	// Func End, Address: 0x1025030, Func Offset: 0x60
}

// 
// Start address: 0x1025030
void act_on(_anon1* actionwk)
{
	// Line 209, Address: 0x1025030, Func Offset: 0
	// Line 210, Address: 0x102503c, Func Offset: 0xc
	// Line 211, Address: 0x1025074, Func Offset: 0x44
	// Line 213, Address: 0x102507c, Func Offset: 0x4c
	// Line 214, Address: 0x10250a4, Func Offset: 0x74
	// Line 215, Address: 0x10250b0, Func Offset: 0x80
	// Line 216, Address: 0x10250c0, Func Offset: 0x90
	// Line 218, Address: 0x10250d4, Func Offset: 0xa4
	// Line 220, Address: 0x10250e8, Func Offset: 0xb8
	// Func End, Address: 0x10250f8, Func Offset: 0xc8
}

// 
// Start address: 0x1025100
void act_off(_anon1* actionwk)
{
	// Line 222, Address: 0x1025100, Func Offset: 0
	// Line 223, Address: 0x102510c, Func Offset: 0xc
	// Line 225, Address: 0x1025120, Func Offset: 0x20
	// Line 227, Address: 0x1025134, Func Offset: 0x34
	// Line 228, Address: 0x1025140, Func Offset: 0x40
	// Line 231, Address: 0x1025150, Func Offset: 0x50
	// Func End, Address: 0x1025160, Func Offset: 0x60
}

