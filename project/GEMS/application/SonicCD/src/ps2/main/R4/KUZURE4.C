typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_8)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[3];
typedef _anon0* type_4[9];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];
typedef void(*type_9)(_anon1*)[4];

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

_anon0 pat_kuzure_00;
_anon0 pat_kuzure_01;
_anon0 pat_kuzure_02;
_anon0 pat_kuzure_03;
_anon0 pat_kuzure_04;
_anon0 pat_kuzure_05;
_anon0 pat_kuzure_06;
_anon0 pat_kuzure_07;
_anon0 pat_kuzure_08;
_anon0* pat_kuzure_a[9];
void(*kuzure4_act_tbl)(_anon1*)[4];
_anon1 actwk[128];
void(*parts_act_tbl)(_anon1*)[3];

void kuzure4(_anon1* pActwk);
void main_ini(_anon1* pActwk);
void main_check(_anon1* pActwk);
void main_wait(_anon1* pActwk);
void main_break(_anon1* pActwk);
void parts(_anon1* pActwk);
void parts_ini(_anon1* pActwk);
void parts_wait(_anon1* pActwk);
void parts_fall(_anon1* pActwk);

// 
// Start address: 0x102a0c0
void kuzure4(_anon1* pActwk)
{
	// Line 141, Address: 0x102a0c0, Func Offset: 0
	// Line 142, Address: 0x102a0cc, Func Offset: 0xc
	// Line 143, Address: 0x102a0dc, Func Offset: 0x1c
	// Line 144, Address: 0x102a0e8, Func Offset: 0x28
	// Line 145, Address: 0x102a0f0, Func Offset: 0x30
	// Line 147, Address: 0x102a134, Func Offset: 0x74
	// Func End, Address: 0x102a144, Func Offset: 0x84
}

// 
// Start address: 0x102a150
void main_ini(_anon1* pActwk)
{
	// Line 153, Address: 0x102a150, Func Offset: 0
	// Line 154, Address: 0x102a15c, Func Offset: 0xc
	// Line 155, Address: 0x102a16c, Func Offset: 0x1c
	// Line 156, Address: 0x102a178, Func Offset: 0x28
	// Line 157, Address: 0x102a184, Func Offset: 0x34
	// Line 158, Address: 0x102a194, Func Offset: 0x44
	// Line 159, Address: 0x102a1a0, Func Offset: 0x50
	// Line 161, Address: 0x102a1ac, Func Offset: 0x5c
	// Line 162, Address: 0x102a1cc, Func Offset: 0x7c
	// Line 163, Address: 0x102a1f8, Func Offset: 0xa8
	// Line 164, Address: 0x102a204, Func Offset: 0xb4
	// Func End, Address: 0x102a214, Func Offset: 0xc4
}

// 
// Start address: 0x102a220
void main_check(_anon1* pActwk)
{
	// Line 170, Address: 0x102a220, Func Offset: 0
	// Line 171, Address: 0x102a22c, Func Offset: 0xc
	// Line 172, Address: 0x102a248, Func Offset: 0x28
	// Line 173, Address: 0x102a258, Func Offset: 0x38
	// Line 174, Address: 0x102a260, Func Offset: 0x40
	// Line 176, Address: 0x102a26c, Func Offset: 0x4c
	// Line 177, Address: 0x102a284, Func Offset: 0x64
	// Line 178, Address: 0x102a290, Func Offset: 0x70
	// Line 179, Address: 0x102a298, Func Offset: 0x78
	// Line 182, Address: 0x102a2a4, Func Offset: 0x84
	// Line 186, Address: 0x102a2b0, Func Offset: 0x90
	// Line 187, Address: 0x102a2bc, Func Offset: 0x9c
	// Line 188, Address: 0x102a2c8, Func Offset: 0xa8
	// Func End, Address: 0x102a2d8, Func Offset: 0xb8
}

// 
// Start address: 0x102a2e0
void main_wait(_anon1* pActwk)
{
	// Line 194, Address: 0x102a2e0, Func Offset: 0
	// Line 195, Address: 0x102a2ec, Func Offset: 0xc
	// Line 197, Address: 0x102a300, Func Offset: 0x20
	// Line 198, Address: 0x102a328, Func Offset: 0x48
	// Line 201, Address: 0x102a338, Func Offset: 0x58
	// Line 202, Address: 0x102a344, Func Offset: 0x64
	// Func End, Address: 0x102a354, Func Offset: 0x74
}

// 
// Start address: 0x102a360
void main_break(_anon1* pActwk)
{
	unsigned char flagwk;
	short xwk;
	short ywk;
	_anon1* pNewact;
	// Line 208, Address: 0x102a360, Func Offset: 0
	// Line 216, Address: 0x102a378, Func Offset: 0x18
	// Line 217, Address: 0x102a380, Func Offset: 0x20
	// Line 218, Address: 0x102a38c, Func Offset: 0x2c
	// Line 220, Address: 0x102a3bc, Func Offset: 0x5c
	// Line 221, Address: 0x102a3d4, Func Offset: 0x74
	// Line 225, Address: 0x102a3e0, Func Offset: 0x80
	// Line 228, Address: 0x102a3f4, Func Offset: 0x94
	// Line 229, Address: 0x102a404, Func Offset: 0xa4
	// Line 230, Address: 0x102a414, Func Offset: 0xb4
	// Line 231, Address: 0x102a424, Func Offset: 0xc4
	// Line 232, Address: 0x102a434, Func Offset: 0xd4
	// Line 233, Address: 0x102a444, Func Offset: 0xe4
	// Line 236, Address: 0x102a454, Func Offset: 0xf4
	// Line 237, Address: 0x102a45c, Func Offset: 0xfc
	// Line 238, Address: 0x102a46c, Func Offset: 0x10c
	// Line 239, Address: 0x102a47c, Func Offset: 0x11c
	// Line 241, Address: 0x102a488, Func Offset: 0x128
	// Line 244, Address: 0x102a49c, Func Offset: 0x13c
	// Line 245, Address: 0x102a4ac, Func Offset: 0x14c
	// Line 246, Address: 0x102a4bc, Func Offset: 0x15c
	// Line 247, Address: 0x102a4cc, Func Offset: 0x16c
	// Line 248, Address: 0x102a4dc, Func Offset: 0x17c
	// Line 249, Address: 0x102a4ec, Func Offset: 0x18c
	// Line 252, Address: 0x102a4fc, Func Offset: 0x19c
	// Line 253, Address: 0x102a504, Func Offset: 0x1a4
	// Line 254, Address: 0x102a514, Func Offset: 0x1b4
	// Line 259, Address: 0x102a524, Func Offset: 0x1c4
	// Line 260, Address: 0x102a540, Func Offset: 0x1e0
	// Line 264, Address: 0x102a554, Func Offset: 0x1f4
	// Line 265, Address: 0x102a57c, Func Offset: 0x21c
	// Line 266, Address: 0x102a588, Func Offset: 0x228
	// Line 267, Address: 0x102a590, Func Offset: 0x230
	// Line 268, Address: 0x102a5a0, Func Offset: 0x240
	// Line 269, Address: 0x102a5b0, Func Offset: 0x250
	// Line 270, Address: 0x102a5c0, Func Offset: 0x260
	// Line 271, Address: 0x102a5d0, Func Offset: 0x270
	// Line 272, Address: 0x102a5dc, Func Offset: 0x27c
	// Line 273, Address: 0x102a5f4, Func Offset: 0x294
	// Line 274, Address: 0x102a608, Func Offset: 0x2a8
	// Line 276, Address: 0x102a614, Func Offset: 0x2b4
	// Func End, Address: 0x102a630, Func Offset: 0x2d0
}

// 
// Start address: 0x102a630
void parts(_anon1* pActwk)
{
	// Line 301, Address: 0x102a630, Func Offset: 0
	// Line 302, Address: 0x102a63c, Func Offset: 0xc
	// Line 303, Address: 0x102a680, Func Offset: 0x50
	// Func End, Address: 0x102a690, Func Offset: 0x60
}

// 
// Start address: 0x102a690
void parts_ini(_anon1* pActwk)
{
	// Line 309, Address: 0x102a690, Func Offset: 0
	// Line 310, Address: 0x102a69c, Func Offset: 0xc
	// Line 311, Address: 0x102a6ac, Func Offset: 0x1c
	// Line 312, Address: 0x102a6b8, Func Offset: 0x28
	// Line 313, Address: 0x102a6c4, Func Offset: 0x34
	// Line 314, Address: 0x102a6dc, Func Offset: 0x4c
	// Line 315, Address: 0x102a6e8, Func Offset: 0x58
	// Line 316, Address: 0x102a6f4, Func Offset: 0x64
	// Func End, Address: 0x102a704, Func Offset: 0x74
}

// 
// Start address: 0x102a710
void parts_wait(_anon1* pActwk)
{
	// Line 322, Address: 0x102a710, Func Offset: 0
	// Line 323, Address: 0x102a71c, Func Offset: 0xc
	// Line 324, Address: 0x102a744, Func Offset: 0x34
	// Line 328, Address: 0x102a754, Func Offset: 0x44
	// Line 329, Address: 0x102a760, Func Offset: 0x50
	// Func End, Address: 0x102a770, Func Offset: 0x60
}

// 
// Start address: 0x102a770
void parts_fall(_anon1* pActwk)
{
	int spdwk;
	// Line 335, Address: 0x102a770, Func Offset: 0
	// Line 338, Address: 0x102a780, Func Offset: 0x10
	// Line 339, Address: 0x102a798, Func Offset: 0x28
	// Line 340, Address: 0x102a7a4, Func Offset: 0x34
	// Line 341, Address: 0x102a7ac, Func Offset: 0x3c
	// Line 342, Address: 0x102a7c8, Func Offset: 0x58
	// Line 343, Address: 0x102a7e4, Func Offset: 0x74
	// Line 345, Address: 0x102a7e8, Func Offset: 0x78
	// Line 346, Address: 0x102a7f0, Func Offset: 0x80
	// Line 347, Address: 0x102a800, Func Offset: 0x90
	// Line 349, Address: 0x102a80c, Func Offset: 0x9c
	// Func End, Address: 0x102a820, Func Offset: 0xb0
}

