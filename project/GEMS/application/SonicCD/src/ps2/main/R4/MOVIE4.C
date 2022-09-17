typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[5];
typedef char type_4[37];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef unsigned char* type_7[2];
typedef unsigned char type_8[6];
typedef _anon1 type_9[128];
typedef _anon0* type_10[6];
typedef unsigned char type_11[58];

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

unsigned char movie1_pchg00[6];
unsigned char movie1_pchg01[58];
unsigned char* movie1_pchg[2];
_anon0 spr_movie1;
_anon0 spr_movie2;
_anon0 spr_movie3;
_anon0 spr_movie4;
_anon0 spr_movie5;
_anon0 spr_movie0;
_anon0* pat_movie[6];
char tbl0[37];
_anon1 actwk[128];
unsigned char projector_flag;

void movie4(_anon1* pActwk);
void die(_anon1* pActwk);
void mm_init(_anon1* pActwk);
void mm_wait(_anon1* pActwk);
void mm_die(_anon1* pActwk);
void m_baku(_anon1* pActwk);
void mm1wait(_anon1* pActwk);
void sub(_anon1* pActwk);
void s_init(_anon1* pActwk);
void s_move(_anon1* pActwk);

// 
// Start address: 0x1022340
void movie4(_anon1* pActwk)
{
	void(*tbl_m)(_anon1*)[5];
	// Line 160, Address: 0x1022340, Func Offset: 0
	// Line 161, Address: 0x102234c, Func Offset: 0xc
	// Line 170, Address: 0x1022378, Func Offset: 0x38
	// Line 171, Address: 0x1022388, Func Offset: 0x48
	// Line 174, Address: 0x102239c, Func Offset: 0x5c
	// Line 175, Address: 0x10223d8, Func Offset: 0x98
	// Line 176, Address: 0x10223e4, Func Offset: 0xa4
	// Line 177, Address: 0x10223fc, Func Offset: 0xbc
	// Line 179, Address: 0x1022408, Func Offset: 0xc8
	// Func End, Address: 0x1022418, Func Offset: 0xd8
}

// 
// Start address: 0x1022420
void die(_anon1* pActwk)
{
	// Line 184, Address: 0x1022420, Func Offset: 0
	// Line 185, Address: 0x102242c, Func Offset: 0xc
	// Line 186, Address: 0x1022438, Func Offset: 0x18
	// Func End, Address: 0x1022448, Func Offset: 0x28
}

// 
// Start address: 0x1022450
void mm_init(_anon1* pActwk)
{
	_anon1* subactwk;
	// Line 191, Address: 0x1022450, Func Offset: 0
	// Line 194, Address: 0x102245c, Func Offset: 0xc
	// Line 196, Address: 0x102246c, Func Offset: 0x1c
	// Line 197, Address: 0x1022478, Func Offset: 0x28
	// Line 201, Address: 0x1022480, Func Offset: 0x30
	// Line 202, Address: 0x1022490, Func Offset: 0x40
	// Line 203, Address: 0x10224a0, Func Offset: 0x50
	// Line 204, Address: 0x10224ac, Func Offset: 0x5c
	// Line 205, Address: 0x10224b8, Func Offset: 0x68
	// Line 206, Address: 0x10224c4, Func Offset: 0x74
	// Line 207, Address: 0x10224d0, Func Offset: 0x80
	// Line 208, Address: 0x10224dc, Func Offset: 0x8c
	// Line 209, Address: 0x10224e8, Func Offset: 0x98
	// Line 210, Address: 0x10224f8, Func Offset: 0xa8
	// Line 212, Address: 0x1022508, Func Offset: 0xb8
	// Line 214, Address: 0x102251c, Func Offset: 0xcc
	// Line 215, Address: 0x1022528, Func Offset: 0xd8
	// Line 217, Address: 0x1022530, Func Offset: 0xe0
	// Line 218, Address: 0x1022540, Func Offset: 0xf0
	// Line 219, Address: 0x1022564, Func Offset: 0x114
	// Line 220, Address: 0x1022588, Func Offset: 0x138
	// Line 221, Address: 0x1022594, Func Offset: 0x144
	// Line 223, Address: 0x10225d4, Func Offset: 0x184
	// Line 225, Address: 0x10225e8, Func Offset: 0x198
	// Line 226, Address: 0x10225f4, Func Offset: 0x1a4
	// Line 228, Address: 0x10225fc, Func Offset: 0x1ac
	// Line 229, Address: 0x102260c, Func Offset: 0x1bc
	// Line 230, Address: 0x1022630, Func Offset: 0x1e0
	// Line 231, Address: 0x1022654, Func Offset: 0x204
	// Line 232, Address: 0x1022660, Func Offset: 0x210
	// Line 234, Address: 0x10226a0, Func Offset: 0x250
	// Line 236, Address: 0x10226b4, Func Offset: 0x264
	// Line 237, Address: 0x10226c0, Func Offset: 0x270
	// Line 239, Address: 0x10226c8, Func Offset: 0x278
	// Line 240, Address: 0x10226d4, Func Offset: 0x284
	// Line 241, Address: 0x10226f8, Func Offset: 0x2a8
	// Line 242, Address: 0x102271c, Func Offset: 0x2cc
	// Line 243, Address: 0x1022728, Func Offset: 0x2d8
	// Line 245, Address: 0x1022768, Func Offset: 0x318
	// Line 247, Address: 0x102277c, Func Offset: 0x32c
	// Line 248, Address: 0x1022788, Func Offset: 0x338
	// Line 250, Address: 0x1022790, Func Offset: 0x340
	// Line 251, Address: 0x102279c, Func Offset: 0x34c
	// Line 252, Address: 0x10227c0, Func Offset: 0x370
	// Line 253, Address: 0x10227e4, Func Offset: 0x394
	// Line 254, Address: 0x10227f0, Func Offset: 0x3a0
	// Line 255, Address: 0x1022830, Func Offset: 0x3e0
	// Func End, Address: 0x1022840, Func Offset: 0x3f0
}

// 
// Start address: 0x1022840
void mm_wait(_anon1* pActwk)
{
	// Line 259, Address: 0x1022840, Func Offset: 0
	// Line 260, Address: 0x102284c, Func Offset: 0xc
	// Line 262, Address: 0x102285c, Func Offset: 0x1c
	// Line 263, Address: 0x1022864, Func Offset: 0x24
	// Line 264, Address: 0x102286c, Func Offset: 0x2c
	// Line 266, Address: 0x102287c, Func Offset: 0x3c
	// Line 267, Address: 0x1022890, Func Offset: 0x50
	// Func End, Address: 0x10228a0, Func Offset: 0x60
}

// 
// Start address: 0x10228a0
void mm_die(_anon1* pActwk)
{
	// Line 271, Address: 0x10228a0, Func Offset: 0
	// Line 272, Address: 0x10228ac, Func Offset: 0xc
	// Line 273, Address: 0x10228bc, Func Offset: 0x1c
	// Line 274, Address: 0x10228c8, Func Offset: 0x28
	// Line 276, Address: 0x10228d4, Func Offset: 0x34
	// Line 277, Address: 0x1022904, Func Offset: 0x64
	// Func End, Address: 0x1022914, Func Offset: 0x74
}

// 
// Start address: 0x1022920
void m_baku(_anon1* pActwk)
{
	char* temp;
	unsigned char timeb;
	char xx;
	char yy;
	_anon1* subactwk;
	// Line 281, Address: 0x1022920, Func Offset: 0
	// Line 287, Address: 0x102293c, Func Offset: 0x1c
	// Line 288, Address: 0x1022944, Func Offset: 0x24
	// Line 290, Address: 0x1022958, Func Offset: 0x38
	// Line 291, Address: 0x1022968, Func Offset: 0x48
	// Line 292, Address: 0x1022980, Func Offset: 0x60
	// Line 294, Address: 0x1022998, Func Offset: 0x78
	// Line 295, Address: 0x102299c, Func Offset: 0x7c
	// Line 296, Address: 0x10229a8, Func Offset: 0x88
	// Line 297, Address: 0x10229ac, Func Offset: 0x8c
	// Line 298, Address: 0x10229b8, Func Offset: 0x98
	// Line 299, Address: 0x10229bc, Func Offset: 0x9c
	// Line 300, Address: 0x10229c4, Func Offset: 0xa4
	// Line 302, Address: 0x10229d8, Func Offset: 0xb8
	// Line 303, Address: 0x10229e4, Func Offset: 0xc4
	// Line 304, Address: 0x10229f0, Func Offset: 0xd0
	// Line 305, Address: 0x1022a00, Func Offset: 0xe0
	// Line 306, Address: 0x1022a10, Func Offset: 0xf0
	// Line 307, Address: 0x1022a30, Func Offset: 0x110
	// Line 308, Address: 0x1022a50, Func Offset: 0x130
	// Line 311, Address: 0x1022a5c, Func Offset: 0x13c
	// Line 314, Address: 0x1022a64, Func Offset: 0x144
	// Line 315, Address: 0x1022a74, Func Offset: 0x154
	// Line 317, Address: 0x1022a80, Func Offset: 0x160
	// Func End, Address: 0x1022aa0, Func Offset: 0x180
}

// 
// Start address: 0x1022aa0
void mm1wait(_anon1* pActwk)
{
	// Line 321, Address: 0x1022aa0, Func Offset: 0
	// Line 322, Address: 0x1022aac, Func Offset: 0xc
	// Line 323, Address: 0x1022abc, Func Offset: 0x1c
	// Line 325, Address: 0x1022acc, Func Offset: 0x2c
	// Line 326, Address: 0x1022ad8, Func Offset: 0x38
	// Line 328, Address: 0x1022ae4, Func Offset: 0x44
	// Func End, Address: 0x1022af4, Func Offset: 0x54
}

// 
// Start address: 0x1022b00
void sub(_anon1* pActwk)
{
	short subact;
	// Line 332, Address: 0x1022b00, Func Offset: 0
	// Line 335, Address: 0x1022b10, Func Offset: 0x10
	// Line 336, Address: 0x1022b20, Func Offset: 0x20
	// Line 338, Address: 0x1022b54, Func Offset: 0x54
	// Line 339, Address: 0x1022b60, Func Offset: 0x60
	// Line 341, Address: 0x1022b68, Func Offset: 0x68
	// Line 343, Address: 0x1022b94, Func Offset: 0x94
	// Line 344, Address: 0x1022ba0, Func Offset: 0xa0
	// Line 346, Address: 0x1022ba8, Func Offset: 0xa8
	// Line 348, Address: 0x1022bb8, Func Offset: 0xb8
	// Line 349, Address: 0x1022bc4, Func Offset: 0xc4
	// Line 351, Address: 0x1022bcc, Func Offset: 0xcc
	// Line 352, Address: 0x1022bd8, Func Offset: 0xd8
	// Func End, Address: 0x1022bec, Func Offset: 0xec
}

// 
// Start address: 0x1022bf0
void s_init(_anon1* pActwk)
{
	// Line 356, Address: 0x1022bf0, Func Offset: 0
	// Line 357, Address: 0x1022bfc, Func Offset: 0xc
	// Line 358, Address: 0x1022c0c, Func Offset: 0x1c
	// Line 359, Address: 0x1022c1c, Func Offset: 0x2c
	// Line 360, Address: 0x1022c28, Func Offset: 0x38
	// Line 361, Address: 0x1022c34, Func Offset: 0x44
	// Line 362, Address: 0x1022c44, Func Offset: 0x54
	// Line 365, Address: 0x1022c5c, Func Offset: 0x6c
	// Line 366, Address: 0x1022c68, Func Offset: 0x78
	// Line 367, Address: 0x1022c74, Func Offset: 0x84
	// Line 368, Address: 0x1022c80, Func Offset: 0x90
	// Line 369, Address: 0x1022c88, Func Offset: 0x98
	// Line 373, Address: 0x1022c90, Func Offset: 0xa0
	// Line 374, Address: 0x1022c9c, Func Offset: 0xac
	// Line 375, Address: 0x1022ca8, Func Offset: 0xb8
	// Line 376, Address: 0x1022cb4, Func Offset: 0xc4
	// Line 378, Address: 0x1022cc0, Func Offset: 0xd0
	// Line 379, Address: 0x1022ccc, Func Offset: 0xdc
	// Func End, Address: 0x1022cdc, Func Offset: 0xec
}

// 
// Start address: 0x1022ce0
void s_move(_anon1* pActwk)
{
	// Line 383, Address: 0x1022ce0, Func Offset: 0
	// Line 385, Address: 0x1022cec, Func Offset: 0xc
	// Line 386, Address: 0x1022d00, Func Offset: 0x20
	// Line 387, Address: 0x1022d0c, Func Offset: 0x2c
	// Func End, Address: 0x1022d1c, Func Offset: 0x3c
}

