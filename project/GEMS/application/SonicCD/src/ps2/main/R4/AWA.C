typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_15)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[18];
typedef unsigned char* type_3[7];
typedef unsigned char type_4[5];
typedef unsigned char type_5[7];
typedef unsigned char type_6[5];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon0* type_9[0];
typedef unsigned char type_10[0];
typedef unsigned char type_11[5];
typedef unsigned char type_12[2];
typedef unsigned char type_13[6];
typedef _anon1 type_14[128];
typedef void(*type_16)(_anon1*)[6];

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

unsigned char awachg0[5];
unsigned char awachg1[6];
unsigned char awachg2[7];
unsigned char awachg4[2];
unsigned char awachg5[5];
unsigned char awachg6[5];
unsigned char* awachg[7];
_anon0* awapat[0];
_anon1 actwk[128];
unsigned char awasintbl[0];
short waterposi;
_anon2 scra_h_posit;

void awa(_anon1* pActwk);
void awainit(_anon1* pActwk);
void awamove(_anon1* pActwk);
void awamove2(_anon1* pActwk);
void awamove3(_anon1* pActwk);
void awamove4(_anon1* pActwk);
void awamaster(_anon1* pActwk);
void awafoutchk(_anon1* pActwk);
int awacoli(_anon1* pActwk);

// 
// Start address: 0x101cf70
void awa(_anon1* pActwk)
{
	void(*awa_move_tbl)(_anon1*)[6];
	// Line 104, Address: 0x101cf70, Func Offset: 0
	// Line 105, Address: 0x101cf7c, Func Offset: 0xc
	// Line 114, Address: 0x101cfb0, Func Offset: 0x40
	// Line 115, Address: 0x101cfec, Func Offset: 0x7c
	// Func End, Address: 0x101cffc, Func Offset: 0x8c
}

// 
// Start address: 0x101d000
void awainit(_anon1* pActwk)
{
	// Line 124, Address: 0x101d000, Func Offset: 0
	// Line 125, Address: 0x101d00c, Func Offset: 0xc
	// Line 126, Address: 0x101d01c, Func Offset: 0x1c
	// Line 127, Address: 0x101d02c, Func Offset: 0x2c
	// Line 128, Address: 0x101d038, Func Offset: 0x38
	// Line 129, Address: 0x101d044, Func Offset: 0x44
	// Line 130, Address: 0x101d050, Func Offset: 0x50
	// Line 131, Address: 0x101d05c, Func Offset: 0x5c
	// Line 133, Address: 0x101d078, Func Offset: 0x78
	// Line 134, Address: 0x101d088, Func Offset: 0x88
	// Line 135, Address: 0x101d0a8, Func Offset: 0xa8
	// Line 136, Address: 0x101d0c8, Func Offset: 0xc8
	// Line 137, Address: 0x101d0d4, Func Offset: 0xd4
	// Line 138, Address: 0x101d0e0, Func Offset: 0xe0
	// Line 142, Address: 0x101d0e8, Func Offset: 0xe8
	// Line 143, Address: 0x101d0f8, Func Offset: 0xf8
	// Line 144, Address: 0x101d108, Func Offset: 0x108
	// Line 145, Address: 0x101d114, Func Offset: 0x114
	// Line 146, Address: 0x101d130, Func Offset: 0x130
	// Line 148, Address: 0x101d13c, Func Offset: 0x13c
	// Func End, Address: 0x101d14c, Func Offset: 0x14c
}

// 
// Start address: 0x101d150
void awamove(_anon1* pActwk)
{
	// Line 157, Address: 0x101d150, Func Offset: 0
	// Line 158, Address: 0x101d15c, Func Offset: 0xc
	// Line 159, Address: 0x101d170, Func Offset: 0x20
	// Line 161, Address: 0x101d194, Func Offset: 0x44
	// Line 162, Address: 0x101d1a0, Func Offset: 0x50
	// Func End, Address: 0x101d1b0, Func Offset: 0x60
}

// 
// Start address: 0x101d1b0
void awamove2(_anon1* pActwk)
{
	// Line 171, Address: 0x101d1b0, Func Offset: 0
	// Line 172, Address: 0x101d1bc, Func Offset: 0xc
	// Line 175, Address: 0x101d1e8, Func Offset: 0x38
	// Line 176, Address: 0x101d1f4, Func Offset: 0x44
	// Line 177, Address: 0x101d204, Func Offset: 0x54
	// Line 178, Address: 0x101d210, Func Offset: 0x60
	// Line 182, Address: 0x101d218, Func Offset: 0x68
	// Line 184, Address: 0x101d280, Func Offset: 0xd0
	// Line 185, Address: 0x101d290, Func Offset: 0xe0
	// Line 186, Address: 0x101d2a4, Func Offset: 0xf4
	// Line 187, Address: 0x101d2ac, Func Offset: 0xfc
	// Line 189, Address: 0x101d2b8, Func Offset: 0x108
	// Line 190, Address: 0x101d2c0, Func Offset: 0x110
	// Line 191, Address: 0x101d2c8, Func Offset: 0x118
	// Line 192, Address: 0x101d2d0, Func Offset: 0x120
	// Line 193, Address: 0x101d2dc, Func Offset: 0x12c
	// Line 194, Address: 0x101d2e8, Func Offset: 0x138
	// Line 195, Address: 0x101d2f0, Func Offset: 0x140
	// Line 196, Address: 0x101d304, Func Offset: 0x154
	// Line 198, Address: 0x101d318, Func Offset: 0x168
	// Line 199, Address: 0x101d330, Func Offset: 0x180
	// Line 200, Address: 0x101d344, Func Offset: 0x194
	// Line 201, Address: 0x101d350, Func Offset: 0x1a0
	// Line 202, Address: 0x101d35c, Func Offset: 0x1ac
	// Line 204, Address: 0x101d370, Func Offset: 0x1c0
	// Line 205, Address: 0x101d37c, Func Offset: 0x1cc
	// Line 206, Address: 0x101d38c, Func Offset: 0x1dc
	// Line 207, Address: 0x101d398, Func Offset: 0x1e8
	// Line 211, Address: 0x101d3a0, Func Offset: 0x1f0
	// Line 212, Address: 0x101d3ac, Func Offset: 0x1fc
	// Line 214, Address: 0x101d3d8, Func Offset: 0x228
	// Line 215, Address: 0x101d3e4, Func Offset: 0x234
	// Func End, Address: 0x101d3f4, Func Offset: 0x244
}

// 
// Start address: 0x101d400
void awamove3(_anon1* pActwk)
{
	// Line 224, Address: 0x101d400, Func Offset: 0
	// Line 225, Address: 0x101d40c, Func Offset: 0xc
	// Line 227, Address: 0x101d420, Func Offset: 0x20
	// Line 228, Address: 0x101d44c, Func Offset: 0x4c
	// Line 229, Address: 0x101d458, Func Offset: 0x58
	// Func End, Address: 0x101d468, Func Offset: 0x68
}

// 
// Start address: 0x101d470
void awamove4(_anon1* pActwk)
{
	// Line 238, Address: 0x101d470, Func Offset: 0
	// Line 239, Address: 0x101d47c, Func Offset: 0xc
	// Line 240, Address: 0x101d488, Func Offset: 0x18
	// Func End, Address: 0x101d498, Func Offset: 0x28
}

// 
// Start address: 0x101d4a0
void awamaster(_anon1* pActwk)
{
	unsigned char awatbl[18];
	_anon1* pNewactwk;
	unsigned char bD0;
	short wD1;
	// Line 249, Address: 0x101d4a0, Func Offset: 0
	// Line 250, Address: 0x101d4b4, Func Offset: 0x14
	// Line 262, Address: 0x101d4e8, Func Offset: 0x48
	// Line 263, Address: 0x101d4f8, Func Offset: 0x58
	// Line 264, Address: 0x101d524, Func Offset: 0x84
	// Line 265, Address: 0x101d530, Func Offset: 0x90
	// Line 267, Address: 0x101d538, Func Offset: 0x98
	// Line 268, Address: 0x101d550, Func Offset: 0xb0
	// Line 269, Address: 0x101d55c, Func Offset: 0xbc
	// Line 271, Address: 0x101d564, Func Offset: 0xc4
	// Line 273, Address: 0x101d58c, Func Offset: 0xec
	// Line 276, Address: 0x101d598, Func Offset: 0xf8
	// Line 277, Address: 0x101d5b0, Func Offset: 0x110
	// Line 278, Address: 0x101d5c4, Func Offset: 0x124
	// Line 280, Address: 0x101d5d4, Func Offset: 0x134
	// Line 281, Address: 0x101d5dc, Func Offset: 0x13c
	// Line 283, Address: 0x101d5e8, Func Offset: 0x148
	// Line 284, Address: 0x101d5f4, Func Offset: 0x154
	// Line 285, Address: 0x101d618, Func Offset: 0x178
	// Line 286, Address: 0x101d628, Func Offset: 0x188
	// Line 289, Address: 0x101d638, Func Offset: 0x198
	// Line 291, Address: 0x101d640, Func Offset: 0x1a0
	// Line 295, Address: 0x101d668, Func Offset: 0x1c8
	// Line 297, Address: 0x101d684, Func Offset: 0x1e4
	// Line 298, Address: 0x101d69c, Func Offset: 0x1fc
	// Line 299, Address: 0x101d6b0, Func Offset: 0x210
	// Line 300, Address: 0x101d6bc, Func Offset: 0x21c
	// Line 301, Address: 0x101d700, Func Offset: 0x260
	// Line 302, Address: 0x101d710, Func Offset: 0x270
	// Line 304, Address: 0x101d73c, Func Offset: 0x29c
	// Line 305, Address: 0x101d754, Func Offset: 0x2b4
	// Line 306, Address: 0x101d768, Func Offset: 0x2c8
	// Line 308, Address: 0x101d780, Func Offset: 0x2e0
	// Line 309, Address: 0x101d790, Func Offset: 0x2f0
	// Line 312, Address: 0x101d79c, Func Offset: 0x2fc
	// Line 313, Address: 0x101d7ac, Func Offset: 0x30c
	// Line 314, Address: 0x101d7c4, Func Offset: 0x324
	// Line 315, Address: 0x101d7d4, Func Offset: 0x334
	// Line 324, Address: 0x101d7e0, Func Offset: 0x340
	// Line 325, Address: 0x101d804, Func Offset: 0x364
	// Line 326, Address: 0x101d82c, Func Offset: 0x38c
	// Line 330, Address: 0x101d834, Func Offset: 0x394
	// Line 331, Address: 0x101d848, Func Offset: 0x3a8
	// Line 332, Address: 0x101d854, Func Offset: 0x3b4
	// Func End, Address: 0x101d86c, Func Offset: 0x3cc
}

// 
// Start address: 0x101d870
void awafoutchk(_anon1* pActwk)
{
	// Line 337, Address: 0x101d870, Func Offset: 0
	// Line 338, Address: 0x101d87c, Func Offset: 0xc
	// Line 339, Address: 0x101d894, Func Offset: 0x24
	// Line 340, Address: 0x101d8d0, Func Offset: 0x60
	// Line 341, Address: 0x101d8dc, Func Offset: 0x6c
	// Line 345, Address: 0x101d8e4, Func Offset: 0x74
	// Line 346, Address: 0x101d924, Func Offset: 0xb4
	// Line 347, Address: 0x101d934, Func Offset: 0xc4
	// Func End, Address: 0x101d944, Func Offset: 0xd4
}

// 
// Start address: 0x101d950
int awacoli(_anon1* pActwk)
{
	// Line 357, Address: 0x101d950, Func Offset: 0
	// Line 358, Address: 0x101d958, Func Offset: 0x8
	// Line 359, Address: 0x101d970, Func Offset: 0x20
	// Line 360, Address: 0x101d9a0, Func Offset: 0x50
	// Line 361, Address: 0x101d9d0, Func Offset: 0x80
	// Line 362, Address: 0x101d9fc, Func Offset: 0xac
	// Line 367, Address: 0x101da38, Func Offset: 0xe8
	// Line 368, Address: 0x101da3c, Func Offset: 0xec
	// Func End, Address: 0x101da48, Func Offset: 0xf8
}

