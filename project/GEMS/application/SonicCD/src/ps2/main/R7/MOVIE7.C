typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[58];
typedef void(*type_4)(_anon0*)[5];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef char type_7[37];
typedef unsigned char* type_8[2];
typedef unsigned char type_9[6];
typedef _anon0 type_10[128];
typedef _anon1* type_11[6];

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

unsigned char movie1_pchg00[6];
unsigned char movie1_pchg01[58];
unsigned char* movie1_pchg[2];
_anon1 spr_movie1;
_anon1 spr_movie2;
_anon1 spr_movie3;
_anon1 spr_movie4;
_anon1 spr_movie5;
_anon1 spr_movie0;
_anon1* pat_movie[6];
char tbl0[37];
_anon0 actwk[128];
unsigned char projector_flag;

void movie(_anon0* pActwk);
void die(_anon0* pActwk);
void m_init(_anon0* pActwk);
void m_wait(_anon0* pActwk);
void m_die(_anon0* pActwk);
void m_baku(_anon0* pActwk);
void m1wait(_anon0* pActwk);
void sub(_anon0* pActwk);
void s_init(_anon0* pActwk);
void s_move(_anon0* pActwk);

// 
// Start address: 0x10214c0
void movie(_anon0* pActwk)
{
	void(*tbl_m)(_anon0*)[5];
	// Line 159, Address: 0x10214c0, Func Offset: 0
	// Line 160, Address: 0x10214cc, Func Offset: 0xc
	// Line 169, Address: 0x10214f8, Func Offset: 0x38
	// Line 170, Address: 0x1021508, Func Offset: 0x48
	// Line 173, Address: 0x102151c, Func Offset: 0x5c
	// Line 174, Address: 0x1021558, Func Offset: 0x98
	// Line 175, Address: 0x1021564, Func Offset: 0xa4
	// Line 176, Address: 0x102157c, Func Offset: 0xbc
	// Line 178, Address: 0x1021588, Func Offset: 0xc8
	// Func End, Address: 0x1021598, Func Offset: 0xd8
}

// 
// Start address: 0x10215a0
void die(_anon0* pActwk)
{
	// Line 183, Address: 0x10215a0, Func Offset: 0
	// Line 184, Address: 0x10215ac, Func Offset: 0xc
	// Line 185, Address: 0x10215b8, Func Offset: 0x18
	// Func End, Address: 0x10215c8, Func Offset: 0x28
}

// 
// Start address: 0x10215d0
void m_init(_anon0* pActwk)
{
	_anon0* subactwk;
	// Line 190, Address: 0x10215d0, Func Offset: 0
	// Line 193, Address: 0x10215dc, Func Offset: 0xc
	// Line 195, Address: 0x10215ec, Func Offset: 0x1c
	// Line 196, Address: 0x10215f8, Func Offset: 0x28
	// Line 198, Address: 0x1021600, Func Offset: 0x30
	// Line 200, Address: 0x102160c, Func Offset: 0x3c
	// Line 201, Address: 0x102161c, Func Offset: 0x4c
	// Line 202, Address: 0x102162c, Func Offset: 0x5c
	// Line 203, Address: 0x1021638, Func Offset: 0x68
	// Line 204, Address: 0x1021644, Func Offset: 0x74
	// Line 205, Address: 0x1021650, Func Offset: 0x80
	// Line 206, Address: 0x102165c, Func Offset: 0x8c
	// Line 207, Address: 0x1021668, Func Offset: 0x98
	// Line 208, Address: 0x1021674, Func Offset: 0xa4
	// Line 209, Address: 0x1021684, Func Offset: 0xb4
	// Line 211, Address: 0x1021694, Func Offset: 0xc4
	// Line 213, Address: 0x10216a8, Func Offset: 0xd8
	// Line 214, Address: 0x10216b4, Func Offset: 0xe4
	// Line 216, Address: 0x10216bc, Func Offset: 0xec
	// Line 217, Address: 0x10216cc, Func Offset: 0xfc
	// Line 218, Address: 0x10216f0, Func Offset: 0x120
	// Line 219, Address: 0x1021714, Func Offset: 0x144
	// Line 220, Address: 0x1021720, Func Offset: 0x150
	// Line 222, Address: 0x1021760, Func Offset: 0x190
	// Line 224, Address: 0x1021774, Func Offset: 0x1a4
	// Line 225, Address: 0x1021780, Func Offset: 0x1b0
	// Line 227, Address: 0x1021788, Func Offset: 0x1b8
	// Line 228, Address: 0x1021798, Func Offset: 0x1c8
	// Line 229, Address: 0x10217bc, Func Offset: 0x1ec
	// Line 230, Address: 0x10217e0, Func Offset: 0x210
	// Line 231, Address: 0x10217ec, Func Offset: 0x21c
	// Line 233, Address: 0x102182c, Func Offset: 0x25c
	// Line 235, Address: 0x1021840, Func Offset: 0x270
	// Line 236, Address: 0x102184c, Func Offset: 0x27c
	// Line 238, Address: 0x1021854, Func Offset: 0x284
	// Line 239, Address: 0x1021860, Func Offset: 0x290
	// Line 240, Address: 0x1021884, Func Offset: 0x2b4
	// Line 241, Address: 0x10218a8, Func Offset: 0x2d8
	// Line 242, Address: 0x10218b4, Func Offset: 0x2e4
	// Line 244, Address: 0x10218f4, Func Offset: 0x324
	// Line 246, Address: 0x1021908, Func Offset: 0x338
	// Line 247, Address: 0x1021914, Func Offset: 0x344
	// Line 249, Address: 0x102191c, Func Offset: 0x34c
	// Line 250, Address: 0x1021928, Func Offset: 0x358
	// Line 251, Address: 0x102194c, Func Offset: 0x37c
	// Line 252, Address: 0x102196c, Func Offset: 0x39c
	// Line 253, Address: 0x1021978, Func Offset: 0x3a8
	// Line 254, Address: 0x10219b8, Func Offset: 0x3e8
	// Func End, Address: 0x10219c8, Func Offset: 0x3f8
}

// 
// Start address: 0x10219d0
void m_wait(_anon0* pActwk)
{
	// Line 258, Address: 0x10219d0, Func Offset: 0
	// Line 259, Address: 0x10219dc, Func Offset: 0xc
	// Line 261, Address: 0x10219ec, Func Offset: 0x1c
	// Line 262, Address: 0x10219f4, Func Offset: 0x24
	// Line 263, Address: 0x10219fc, Func Offset: 0x2c
	// Line 265, Address: 0x1021a0c, Func Offset: 0x3c
	// Line 266, Address: 0x1021a20, Func Offset: 0x50
	// Func End, Address: 0x1021a30, Func Offset: 0x60
}

// 
// Start address: 0x1021a30
void m_die(_anon0* pActwk)
{
	// Line 270, Address: 0x1021a30, Func Offset: 0
	// Line 271, Address: 0x1021a3c, Func Offset: 0xc
	// Line 272, Address: 0x1021a4c, Func Offset: 0x1c
	// Line 273, Address: 0x1021a58, Func Offset: 0x28
	// Line 274, Address: 0x1021a64, Func Offset: 0x34
	// Line 275, Address: 0x1021a70, Func Offset: 0x40
	// Line 276, Address: 0x1021aa0, Func Offset: 0x70
	// Func End, Address: 0x1021ab0, Func Offset: 0x80
}

// 
// Start address: 0x1021ab0
void m_baku(_anon0* pActwk)
{
	char* temp;
	unsigned char timeb;
	char xx;
	char yy;
	_anon0* subactwk;
	// Line 280, Address: 0x1021ab0, Func Offset: 0
	// Line 286, Address: 0x1021acc, Func Offset: 0x1c
	// Line 287, Address: 0x1021ad4, Func Offset: 0x24
	// Line 289, Address: 0x1021ae8, Func Offset: 0x38
	// Line 290, Address: 0x1021af8, Func Offset: 0x48
	// Line 291, Address: 0x1021b10, Func Offset: 0x60
	// Line 293, Address: 0x1021b28, Func Offset: 0x78
	// Line 294, Address: 0x1021b2c, Func Offset: 0x7c
	// Line 295, Address: 0x1021b38, Func Offset: 0x88
	// Line 296, Address: 0x1021b3c, Func Offset: 0x8c
	// Line 297, Address: 0x1021b48, Func Offset: 0x98
	// Line 298, Address: 0x1021b4c, Func Offset: 0x9c
	// Line 299, Address: 0x1021b54, Func Offset: 0xa4
	// Line 301, Address: 0x1021b68, Func Offset: 0xb8
	// Line 302, Address: 0x1021b74, Func Offset: 0xc4
	// Line 303, Address: 0x1021b80, Func Offset: 0xd0
	// Line 304, Address: 0x1021b90, Func Offset: 0xe0
	// Line 305, Address: 0x1021ba0, Func Offset: 0xf0
	// Line 306, Address: 0x1021bc0, Func Offset: 0x110
	// Line 307, Address: 0x1021be0, Func Offset: 0x130
	// Line 310, Address: 0x1021bec, Func Offset: 0x13c
	// Line 313, Address: 0x1021bf4, Func Offset: 0x144
	// Line 314, Address: 0x1021c04, Func Offset: 0x154
	// Line 316, Address: 0x1021c10, Func Offset: 0x160
	// Func End, Address: 0x1021c30, Func Offset: 0x180
}

// 
// Start address: 0x1021c30
void m1wait(_anon0* pActwk)
{
	// Line 320, Address: 0x1021c30, Func Offset: 0
	// Line 321, Address: 0x1021c3c, Func Offset: 0xc
	// Line 322, Address: 0x1021c4c, Func Offset: 0x1c
	// Line 324, Address: 0x1021c5c, Func Offset: 0x2c
	// Line 325, Address: 0x1021c68, Func Offset: 0x38
	// Line 327, Address: 0x1021c74, Func Offset: 0x44
	// Func End, Address: 0x1021c84, Func Offset: 0x54
}

// 
// Start address: 0x1021c90
void sub(_anon0* pActwk)
{
	short subact;
	// Line 331, Address: 0x1021c90, Func Offset: 0
	// Line 334, Address: 0x1021ca0, Func Offset: 0x10
	// Line 335, Address: 0x1021cb0, Func Offset: 0x20
	// Line 337, Address: 0x1021ce4, Func Offset: 0x54
	// Line 338, Address: 0x1021cf0, Func Offset: 0x60
	// Line 340, Address: 0x1021cf8, Func Offset: 0x68
	// Line 342, Address: 0x1021d24, Func Offset: 0x94
	// Line 343, Address: 0x1021d30, Func Offset: 0xa0
	// Line 345, Address: 0x1021d38, Func Offset: 0xa8
	// Line 347, Address: 0x1021d48, Func Offset: 0xb8
	// Line 348, Address: 0x1021d54, Func Offset: 0xc4
	// Line 350, Address: 0x1021d5c, Func Offset: 0xcc
	// Line 351, Address: 0x1021d68, Func Offset: 0xd8
	// Func End, Address: 0x1021d7c, Func Offset: 0xec
}

// 
// Start address: 0x1021d80
void s_init(_anon0* pActwk)
{
	// Line 355, Address: 0x1021d80, Func Offset: 0
	// Line 356, Address: 0x1021d8c, Func Offset: 0xc
	// Line 357, Address: 0x1021d9c, Func Offset: 0x1c
	// Line 358, Address: 0x1021dac, Func Offset: 0x2c
	// Line 359, Address: 0x1021db8, Func Offset: 0x38
	// Line 360, Address: 0x1021dc4, Func Offset: 0x44
	// Line 361, Address: 0x1021dd4, Func Offset: 0x54
	// Line 364, Address: 0x1021dec, Func Offset: 0x6c
	// Line 365, Address: 0x1021df8, Func Offset: 0x78
	// Line 366, Address: 0x1021e04, Func Offset: 0x84
	// Line 367, Address: 0x1021e10, Func Offset: 0x90
	// Line 368, Address: 0x1021e18, Func Offset: 0x98
	// Line 372, Address: 0x1021e20, Func Offset: 0xa0
	// Line 373, Address: 0x1021e2c, Func Offset: 0xac
	// Line 374, Address: 0x1021e38, Func Offset: 0xb8
	// Line 375, Address: 0x1021e44, Func Offset: 0xc4
	// Line 377, Address: 0x1021e50, Func Offset: 0xd0
	// Line 378, Address: 0x1021e5c, Func Offset: 0xdc
	// Func End, Address: 0x1021e6c, Func Offset: 0xec
}

// 
// Start address: 0x1021e70
void s_move(_anon0* pActwk)
{
	// Line 382, Address: 0x1021e70, Func Offset: 0
	// Line 384, Address: 0x1021e7c, Func Offset: 0xc
	// Line 385, Address: 0x1021e90, Func Offset: 0x20
	// Line 386, Address: 0x1021e9c, Func Offset: 0x2c
	// Func End, Address: 0x1021eac, Func Offset: 0x3c
}

