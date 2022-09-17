typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);

typedef _anon7 type_0[20];
typedef unsigned char type_1[58];
typedef _anon7 type_2[0];
typedef void(*type_4)(_anon1*)[5];
typedef unsigned char type_5[2];
typedef char type_6[37];
typedef unsigned char type_7[22];
typedef unsigned char* type_8[2];
typedef unsigned char type_9[6];
typedef _anon1 type_10[128];
typedef _anon0* type_11[6];

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
_anon5 stageno;
unsigned char projector_flag;

void movie1(_anon1* pActwk);
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
// Start address: 0x1029530
void movie1(_anon1* pActwk)
{
	void(*tbl_m)(_anon1*)[5];
	// Line 152, Address: 0x1029530, Func Offset: 0
	// Line 153, Address: 0x102953c, Func Offset: 0xc
	// Line 162, Address: 0x1029568, Func Offset: 0x38
	// Line 163, Address: 0x1029578, Func Offset: 0x48
	// Line 166, Address: 0x102958c, Func Offset: 0x5c
	// Line 167, Address: 0x10295c8, Func Offset: 0x98
	// Line 168, Address: 0x10295d4, Func Offset: 0xa4
	// Line 170, Address: 0x10295ec, Func Offset: 0xbc
	// Line 171, Address: 0x1029600, Func Offset: 0xd0
	// Line 174, Address: 0x102960c, Func Offset: 0xdc
	// Func End, Address: 0x102961c, Func Offset: 0xec
}

// 
// Start address: 0x1029620
void die(_anon1* pActwk)
{
	// Line 179, Address: 0x1029620, Func Offset: 0
	// Line 180, Address: 0x102962c, Func Offset: 0xc
	// Line 181, Address: 0x1029638, Func Offset: 0x18
	// Func End, Address: 0x1029648, Func Offset: 0x28
}

// 
// Start address: 0x1029650
void mm_init(_anon1* pActwk)
{
	_anon1* subactwk;
	// Line 186, Address: 0x1029650, Func Offset: 0
	// Line 189, Address: 0x102965c, Func Offset: 0xc
	// Line 191, Address: 0x102966c, Func Offset: 0x1c
	// Line 192, Address: 0x1029678, Func Offset: 0x28
	// Line 194, Address: 0x1029680, Func Offset: 0x30
	// Line 196, Address: 0x102968c, Func Offset: 0x3c
	// Line 197, Address: 0x102969c, Func Offset: 0x4c
	// Line 198, Address: 0x10296ac, Func Offset: 0x5c
	// Line 199, Address: 0x10296b8, Func Offset: 0x68
	// Line 200, Address: 0x10296c4, Func Offset: 0x74
	// Line 201, Address: 0x10296d0, Func Offset: 0x80
	// Line 202, Address: 0x10296dc, Func Offset: 0x8c
	// Line 204, Address: 0x10296e8, Func Offset: 0x98
	// Line 205, Address: 0x102970c, Func Offset: 0xbc
	// Line 207, Address: 0x1029718, Func Offset: 0xc8
	// Line 208, Address: 0x1029728, Func Offset: 0xd8
	// Line 210, Address: 0x1029738, Func Offset: 0xe8
	// Line 212, Address: 0x102974c, Func Offset: 0xfc
	// Line 213, Address: 0x1029758, Func Offset: 0x108
	// Line 215, Address: 0x1029760, Func Offset: 0x110
	// Line 216, Address: 0x1029770, Func Offset: 0x120
	// Line 217, Address: 0x1029794, Func Offset: 0x144
	// Line 218, Address: 0x10297b8, Func Offset: 0x168
	// Line 219, Address: 0x10297c4, Func Offset: 0x174
	// Line 221, Address: 0x1029804, Func Offset: 0x1b4
	// Line 223, Address: 0x1029818, Func Offset: 0x1c8
	// Line 224, Address: 0x1029824, Func Offset: 0x1d4
	// Line 226, Address: 0x102982c, Func Offset: 0x1dc
	// Line 227, Address: 0x102983c, Func Offset: 0x1ec
	// Line 228, Address: 0x1029860, Func Offset: 0x210
	// Line 229, Address: 0x1029884, Func Offset: 0x234
	// Line 230, Address: 0x1029890, Func Offset: 0x240
	// Line 232, Address: 0x10298d0, Func Offset: 0x280
	// Line 234, Address: 0x10298e4, Func Offset: 0x294
	// Line 235, Address: 0x10298f0, Func Offset: 0x2a0
	// Line 237, Address: 0x10298f8, Func Offset: 0x2a8
	// Line 238, Address: 0x1029904, Func Offset: 0x2b4
	// Line 239, Address: 0x1029928, Func Offset: 0x2d8
	// Line 240, Address: 0x102994c, Func Offset: 0x2fc
	// Line 241, Address: 0x1029958, Func Offset: 0x308
	// Line 243, Address: 0x1029998, Func Offset: 0x348
	// Line 245, Address: 0x10299ac, Func Offset: 0x35c
	// Line 246, Address: 0x10299b8, Func Offset: 0x368
	// Line 248, Address: 0x10299c0, Func Offset: 0x370
	// Line 249, Address: 0x10299cc, Func Offset: 0x37c
	// Line 250, Address: 0x10299f0, Func Offset: 0x3a0
	// Line 251, Address: 0x1029a14, Func Offset: 0x3c4
	// Line 252, Address: 0x1029a20, Func Offset: 0x3d0
	// Line 253, Address: 0x1029a60, Func Offset: 0x410
	// Func End, Address: 0x1029a70, Func Offset: 0x420
}

// 
// Start address: 0x1029a70
void mm_wait(_anon1* pActwk)
{
	// Line 257, Address: 0x1029a70, Func Offset: 0
	// Line 258, Address: 0x1029a7c, Func Offset: 0xc
	// Line 260, Address: 0x1029a8c, Func Offset: 0x1c
	// Line 261, Address: 0x1029a94, Func Offset: 0x24
	// Line 262, Address: 0x1029a9c, Func Offset: 0x2c
	// Line 264, Address: 0x1029aac, Func Offset: 0x3c
	// Line 265, Address: 0x1029ac0, Func Offset: 0x50
	// Func End, Address: 0x1029ad0, Func Offset: 0x60
}

// 
// Start address: 0x1029ad0
void mm_die(_anon1* pActwk)
{
	// Line 269, Address: 0x1029ad0, Func Offset: 0
	// Line 270, Address: 0x1029adc, Func Offset: 0xc
	// Line 271, Address: 0x1029aec, Func Offset: 0x1c
	// Line 272, Address: 0x1029af8, Func Offset: 0x28
	// Line 273, Address: 0x1029b04, Func Offset: 0x34
	// Line 274, Address: 0x1029b10, Func Offset: 0x40
	// Line 275, Address: 0x1029b40, Func Offset: 0x70
	// Func End, Address: 0x1029b50, Func Offset: 0x80
}

// 
// Start address: 0x1029b50
void m_baku(_anon1* pActwk)
{
	char* temp;
	unsigned char timeb;
	char xx;
	char yy;
	_anon1* subactwk;
	// Line 279, Address: 0x1029b50, Func Offset: 0
	// Line 285, Address: 0x1029b6c, Func Offset: 0x1c
	// Line 286, Address: 0x1029b74, Func Offset: 0x24
	// Line 288, Address: 0x1029b88, Func Offset: 0x38
	// Line 289, Address: 0x1029b98, Func Offset: 0x48
	// Line 290, Address: 0x1029bb0, Func Offset: 0x60
	// Line 292, Address: 0x1029bc8, Func Offset: 0x78
	// Line 293, Address: 0x1029bcc, Func Offset: 0x7c
	// Line 294, Address: 0x1029bd8, Func Offset: 0x88
	// Line 295, Address: 0x1029bdc, Func Offset: 0x8c
	// Line 296, Address: 0x1029be8, Func Offset: 0x98
	// Line 297, Address: 0x1029bec, Func Offset: 0x9c
	// Line 298, Address: 0x1029bf4, Func Offset: 0xa4
	// Line 300, Address: 0x1029c08, Func Offset: 0xb8
	// Line 301, Address: 0x1029c14, Func Offset: 0xc4
	// Line 302, Address: 0x1029c20, Func Offset: 0xd0
	// Line 303, Address: 0x1029c30, Func Offset: 0xe0
	// Line 304, Address: 0x1029c40, Func Offset: 0xf0
	// Line 305, Address: 0x1029c60, Func Offset: 0x110
	// Line 306, Address: 0x1029c80, Func Offset: 0x130
	// Line 309, Address: 0x1029c8c, Func Offset: 0x13c
	// Line 312, Address: 0x1029c94, Func Offset: 0x144
	// Line 313, Address: 0x1029ca4, Func Offset: 0x154
	// Line 315, Address: 0x1029cb0, Func Offset: 0x160
	// Func End, Address: 0x1029cd0, Func Offset: 0x180
}

// 
// Start address: 0x1029cd0
void mm1wait(_anon1* pActwk)
{
	// Line 319, Address: 0x1029cd0, Func Offset: 0
	// Line 320, Address: 0x1029cdc, Func Offset: 0xc
	// Line 321, Address: 0x1029cec, Func Offset: 0x1c
	// Line 323, Address: 0x1029cfc, Func Offset: 0x2c
	// Line 324, Address: 0x1029d08, Func Offset: 0x38
	// Line 326, Address: 0x1029d14, Func Offset: 0x44
	// Func End, Address: 0x1029d24, Func Offset: 0x54
}

// 
// Start address: 0x1029d30
void sub(_anon1* pActwk)
{
	short subact;
	// Line 330, Address: 0x1029d30, Func Offset: 0
	// Line 333, Address: 0x1029d40, Func Offset: 0x10
	// Line 334, Address: 0x1029d50, Func Offset: 0x20
	// Line 336, Address: 0x1029d84, Func Offset: 0x54
	// Line 337, Address: 0x1029d90, Func Offset: 0x60
	// Line 339, Address: 0x1029d98, Func Offset: 0x68
	// Line 341, Address: 0x1029dc4, Func Offset: 0x94
	// Line 342, Address: 0x1029dd0, Func Offset: 0xa0
	// Line 344, Address: 0x1029dd8, Func Offset: 0xa8
	// Line 346, Address: 0x1029de8, Func Offset: 0xb8
	// Line 347, Address: 0x1029df4, Func Offset: 0xc4
	// Line 349, Address: 0x1029dfc, Func Offset: 0xcc
	// Line 350, Address: 0x1029e08, Func Offset: 0xd8
	// Func End, Address: 0x1029e1c, Func Offset: 0xec
}

// 
// Start address: 0x1029e20
void s_init(_anon1* pActwk)
{
	// Line 354, Address: 0x1029e20, Func Offset: 0
	// Line 355, Address: 0x1029e2c, Func Offset: 0xc
	// Line 356, Address: 0x1029e3c, Func Offset: 0x1c
	// Line 357, Address: 0x1029e4c, Func Offset: 0x2c
	// Line 359, Address: 0x1029e58, Func Offset: 0x38
	// Line 360, Address: 0x1029e68, Func Offset: 0x48
	// Line 362, Address: 0x1029e7c, Func Offset: 0x5c
	// Line 364, Address: 0x1029e88, Func Offset: 0x68
	// Line 365, Address: 0x1029e98, Func Offset: 0x78
	// Line 368, Address: 0x1029eb0, Func Offset: 0x90
	// Line 369, Address: 0x1029ebc, Func Offset: 0x9c
	// Line 370, Address: 0x1029ec8, Func Offset: 0xa8
	// Line 371, Address: 0x1029ed4, Func Offset: 0xb4
	// Line 372, Address: 0x1029edc, Func Offset: 0xbc
	// Line 376, Address: 0x1029ee4, Func Offset: 0xc4
	// Line 377, Address: 0x1029ef0, Func Offset: 0xd0
	// Line 378, Address: 0x1029efc, Func Offset: 0xdc
	// Line 379, Address: 0x1029f08, Func Offset: 0xe8
	// Line 381, Address: 0x1029f14, Func Offset: 0xf4
	// Line 382, Address: 0x1029f20, Func Offset: 0x100
	// Func End, Address: 0x1029f30, Func Offset: 0x110
}

// 
// Start address: 0x1029f30
void s_move(_anon1* pActwk)
{
	// Line 386, Address: 0x1029f30, Func Offset: 0
	// Line 388, Address: 0x1029f3c, Func Offset: 0xc
	// Line 389, Address: 0x1029f50, Func Offset: 0x20
	// Line 390, Address: 0x1029f5c, Func Offset: 0x2c
	// Func End, Address: 0x1029f6c, Func Offset: 0x3c
}

