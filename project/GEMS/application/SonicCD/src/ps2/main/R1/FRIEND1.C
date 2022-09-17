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
typedef _anon0* type_4[6];
typedef unsigned char type_5[58];
typedef unsigned char* type_6[1];
typedef unsigned char type_7[4];
typedef void(*type_9)(_anon1*)[3];
typedef unsigned char type_10[2];
typedef unsigned char type_11[22];
typedef _anon0* type_12[3];
typedef unsigned short type_13[11];
typedef _anon1 type_14[128];
typedef unsigned char* type_15[2];
typedef unsigned char type_16[30];

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

unsigned char pchg00[4];
unsigned char pchg01[30];
unsigned char pchg10[58];
unsigned char* pchg0[2];
unsigned char* pchg1[1];
_anon0 spr_flicky1;
_anon0 spr_flicky2;
_anon0 spr_ricky1;
_anon0 spr_ricky2;
_anon0 spr_ricky3;
_anon0 spr_ricky4;
_anon0 spr_friend0;
_anon0 spr_ricky5;
_anon0* pat_friend0[3];
_anon0* pat_friend1[6];
unsigned short tbl0sproffset[11];
unsigned char time_flag;
_anon5 stageno;
_anon1 actwk[128];

void t_roll(int cos_shift, int sin_shift, _anon1* pActwk);
void rev_h(_anon1* pActwk);
void set_sproffset(_anon1* pActwk);
void friend(_anon1* pActwk);
void t_init(_anon1* pActwk);
void t_move(_anon1* pActwk);
void t_movie(_anon1* pActwk);
void p_init(_anon1* pActwk);
void p_move(_anon1* pActwk);
void p_movie(_anon1* pActwk);

// 
// Start address: 0x1031900
void t_roll(int cos_shift, int sin_shift, _anon1* pActwk)
{
	unsigned short sin;
	unsigned short cos;
	// Line 206, Address: 0x1031900, Func Offset: 0
	// Line 209, Address: 0x1031914, Func Offset: 0x14
	// Line 210, Address: 0x103192c, Func Offset: 0x2c
	// Line 211, Address: 0x1031950, Func Offset: 0x50
	// Line 212, Address: 0x1031974, Func Offset: 0x74
	// Line 213, Address: 0x1031988, Func Offset: 0x88
	// Line 214, Address: 0x103199c, Func Offset: 0x9c
	// Line 215, Address: 0x10319a8, Func Offset: 0xa8
	// Line 216, Address: 0x10319b4, Func Offset: 0xb4
	// Func End, Address: 0x10319c4, Func Offset: 0xc4
}

// 
// Start address: 0x10319d0
void rev_h(_anon1* pActwk)
{
	// Line 219, Address: 0x10319d0, Func Offset: 0
	// Line 220, Address: 0x10319d8, Func Offset: 0x8
	// Line 221, Address: 0x10319e8, Func Offset: 0x18
	// Line 222, Address: 0x10319f8, Func Offset: 0x28
	// Func End, Address: 0x1031a04, Func Offset: 0x34
}

// 
// Start address: 0x1031a10
void set_sproffset(_anon1* pActwk)
{
	int temp;
	// Line 225, Address: 0x1031a10, Func Offset: 0
	// Line 228, Address: 0x1031a1c, Func Offset: 0xc
	// Line 229, Address: 0x1031a2c, Func Offset: 0x1c
	// Line 230, Address: 0x1031a30, Func Offset: 0x20
	// Line 231, Address: 0x1031a40, Func Offset: 0x30
	// Line 232, Address: 0x1031a44, Func Offset: 0x34
	// Line 233, Address: 0x1031a60, Func Offset: 0x50
	// Func End, Address: 0x1031a70, Func Offset: 0x60
}

// 
// Start address: 0x1031a70
void friend(_anon1* pActwk)
{
	void(*tbl_f)(_anon1*)[3];
	void(*tbl_r)(_anon1*)[3];
	// Line 237, Address: 0x1031a70, Func Offset: 0
	// Line 238, Address: 0x1031a7c, Func Offset: 0xc
	// Line 244, Address: 0x1031aa0, Func Offset: 0x30
	// Line 251, Address: 0x1031ac4, Func Offset: 0x54
	// Line 252, Address: 0x1031ad8, Func Offset: 0x68
	// Line 253, Address: 0x1031af4, Func Offset: 0x84
	// Line 255, Address: 0x1031b38, Func Offset: 0xc8
	// Line 256, Address: 0x1031b74, Func Offset: 0x104
	// Func End, Address: 0x1031b84, Func Offset: 0x114
}

// 
// Start address: 0x1031b90
void t_init(_anon1* pActwk)
{
	// Line 261, Address: 0x1031b90, Func Offset: 0
	// Line 262, Address: 0x1031b9c, Func Offset: 0xc
	// Line 263, Address: 0x1031bac, Func Offset: 0x1c
	// Line 264, Address: 0x1031bb8, Func Offset: 0x28
	// Line 265, Address: 0x1031bc4, Func Offset: 0x34
	// Line 266, Address: 0x1031bd0, Func Offset: 0x40
	// Line 267, Address: 0x1031bdc, Func Offset: 0x4c
	// Line 268, Address: 0x1031be8, Func Offset: 0x58
	// Line 269, Address: 0x1031bf8, Func Offset: 0x68
	// Line 270, Address: 0x1031c08, Func Offset: 0x78
	// Line 271, Address: 0x1031c18, Func Offset: 0x88
	// Line 272, Address: 0x1031c24, Func Offset: 0x94
	// Line 274, Address: 0x1031c30, Func Offset: 0xa0
	// Line 276, Address: 0x1031c48, Func Offset: 0xb8
	// Line 277, Address: 0x1031c54, Func Offset: 0xc4
	// Line 278, Address: 0x1031c64, Func Offset: 0xd4
	// Line 279, Address: 0x1031c70, Func Offset: 0xe0
	// Line 280, Address: 0x1031c7c, Func Offset: 0xec
	// Line 283, Address: 0x1031c84, Func Offset: 0xf4
	// Line 284, Address: 0x1031c94, Func Offset: 0x104
	// Line 285, Address: 0x1031ca0, Func Offset: 0x110
	// Line 287, Address: 0x1031cac, Func Offset: 0x11c
	// Func End, Address: 0x1031cbc, Func Offset: 0x12c
}

// 
// Start address: 0x1031cc0
void t_move(_anon1* pActwk)
{
	unsigned char temp;
	// Line 291, Address: 0x1031cc0, Func Offset: 0
	// Line 294, Address: 0x1031cd0, Func Offset: 0x10
	// Line 295, Address: 0x1031ce4, Func Offset: 0x24
	// Line 296, Address: 0x1031d08, Func Offset: 0x48
	// Line 297, Address: 0x1031d24, Func Offset: 0x64
	// Line 298, Address: 0x1031d30, Func Offset: 0x70
	// Line 299, Address: 0x1031d50, Func Offset: 0x90
	// Line 301, Address: 0x1031d5c, Func Offset: 0x9c
	// Line 302, Address: 0x1031d64, Func Offset: 0xa4
	// Line 303, Address: 0x1031d78, Func Offset: 0xb8
	// Line 304, Address: 0x1031d84, Func Offset: 0xc4
	// Line 305, Address: 0x1031d98, Func Offset: 0xd8
	// Func End, Address: 0x1031dac, Func Offset: 0xec
}

// 
// Start address: 0x1031db0
void t_movie(_anon1* pActwk)
{
	_anon1* tempact;
	// Line 309, Address: 0x1031db0, Func Offset: 0
	// Line 312, Address: 0x1031dc0, Func Offset: 0x10
	// Line 313, Address: 0x1031de8, Func Offset: 0x38
	// Line 315, Address: 0x1031dfc, Func Offset: 0x4c
	// Line 316, Address: 0x1031e08, Func Offset: 0x58
	// Line 318, Address: 0x1031e10, Func Offset: 0x60
	// Line 320, Address: 0x1031e1c, Func Offset: 0x6c
	// Line 321, Address: 0x1031e28, Func Offset: 0x78
	// Line 324, Address: 0x1031e30, Func Offset: 0x80
	// Line 326, Address: 0x1031e44, Func Offset: 0x94
	// Line 327, Address: 0x1031e54, Func Offset: 0xa4
	// Line 328, Address: 0x1031e6c, Func Offset: 0xbc
	// Line 331, Address: 0x1031e80, Func Offset: 0xd0
	// Line 332, Address: 0x1031e94, Func Offset: 0xe4
	// Line 334, Address: 0x1031ea0, Func Offset: 0xf0
	// Func End, Address: 0x1031eb4, Func Offset: 0x104
}

// 
// Start address: 0x1031ec0
void p_init(_anon1* pActwk)
{
	// Line 339, Address: 0x1031ec0, Func Offset: 0
	// Line 340, Address: 0x1031ecc, Func Offset: 0xc
	// Line 341, Address: 0x1031edc, Func Offset: 0x1c
	// Line 342, Address: 0x1031ee8, Func Offset: 0x28
	// Line 343, Address: 0x1031ef4, Func Offset: 0x34
	// Line 344, Address: 0x1031f00, Func Offset: 0x40
	// Line 345, Address: 0x1031f0c, Func Offset: 0x4c
	// Line 346, Address: 0x1031f18, Func Offset: 0x58
	// Line 347, Address: 0x1031f28, Func Offset: 0x68
	// Line 348, Address: 0x1031f38, Func Offset: 0x78
	// Line 350, Address: 0x1031f44, Func Offset: 0x84
	// Line 352, Address: 0x1031f5c, Func Offset: 0x9c
	// Line 353, Address: 0x1031f68, Func Offset: 0xa8
	// Line 354, Address: 0x1031f74, Func Offset: 0xb4
	// Line 357, Address: 0x1031f7c, Func Offset: 0xbc
	// Line 358, Address: 0x1031f88, Func Offset: 0xc8
	// Line 360, Address: 0x1031f94, Func Offset: 0xd4
	// Func End, Address: 0x1031fa4, Func Offset: 0xe4
}

// 
// Start address: 0x1031fb0
void p_move(_anon1* pActwk)
{
	short temp;
	// Line 364, Address: 0x1031fb0, Func Offset: 0
	// Line 367, Address: 0x1031fc0, Func Offset: 0x10
	// Line 368, Address: 0x1031fd8, Func Offset: 0x28
	// Line 370, Address: 0x1031ff0, Func Offset: 0x40
	// Line 371, Address: 0x1032008, Func Offset: 0x58
	// Line 373, Address: 0x1032018, Func Offset: 0x68
	// Line 375, Address: 0x1032024, Func Offset: 0x74
	// Line 377, Address: 0x1032050, Func Offset: 0xa0
	// Line 378, Address: 0x1032060, Func Offset: 0xb0
	// Line 379, Address: 0x103206c, Func Offset: 0xbc
	// Line 380, Address: 0x103207c, Func Offset: 0xcc
	// Line 382, Address: 0x1032088, Func Offset: 0xd8
	// Line 383, Address: 0x1032094, Func Offset: 0xe4
	// Line 384, Address: 0x10320a0, Func Offset: 0xf0
	// Func End, Address: 0x10320b4, Func Offset: 0x104
}

// 
// Start address: 0x10320c0
void p_movie(_anon1* pActwk)
{
	_anon1* tempact;
	// Line 388, Address: 0x10320c0, Func Offset: 0
	// Line 391, Address: 0x10320d0, Func Offset: 0x10
	// Line 392, Address: 0x10320f8, Func Offset: 0x38
	// Line 394, Address: 0x103210c, Func Offset: 0x4c
	// Line 395, Address: 0x1032118, Func Offset: 0x58
	// Line 397, Address: 0x1032120, Func Offset: 0x60
	// Line 399, Address: 0x103212c, Func Offset: 0x6c
	// Line 400, Address: 0x1032138, Func Offset: 0x78
	// Line 402, Address: 0x1032140, Func Offset: 0x80
	// Line 403, Address: 0x1032154, Func Offset: 0x94
	// Line 404, Address: 0x1032160, Func Offset: 0xa0
	// Func End, Address: 0x1032174, Func Offset: 0xb4
}

