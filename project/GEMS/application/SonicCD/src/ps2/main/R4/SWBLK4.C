typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_9)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[2];
typedef _anon0* type_4[3];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon0* type_7[2];
typedef _anon1 type_8[128];
typedef void(*type_10)(_anon1*)[2];

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

_anon0 switchr4_pat0;
_anon0 switchr4_pat1;
_anon0* switchr4pat[2];
void(*switchr4_jmp_tbl)(_anon1*)[2];
_anon1 actwk[128];
_anon0 swblkr4_pat0;
_anon0 swblkr4_pat1;
_anon0 swblkr4_pat2;
_anon0* swblkr4pat[3];
void(*swblkr4_jmp_tbl)(_anon1*)[2];
_anon2 scra_h_posit;

void switchr4(_anon1* pActwk);
void switchr4_init(_anon1* pActwk);
void switchr4_move(_anon1* pActwk);
unsigned int switchr4_colichk(_anon1* pActwk, _anon1* pPlayerwk);
void swblkr4(_anon1* pActwk);
void swblkr4_init(_anon1* pActwk);
void swblkr4_move(_anon1* pActwk);

// 
// Start address: 0x1016f30
void switchr4(_anon1* pActwk)
{
	_anon1* pRideact;
	short actidx;
	// Line 109, Address: 0x1016f30, Func Offset: 0
	// Line 113, Address: 0x1016f44, Func Offset: 0x14
	// Line 114, Address: 0x1016f88, Func Offset: 0x58
	// Line 115, Address: 0x1016f9c, Func Offset: 0x6c
	// Line 116, Address: 0x1016fbc, Func Offset: 0x8c
	// Line 117, Address: 0x1016fdc, Func Offset: 0xac
	// Line 119, Address: 0x101701c, Func Offset: 0xec
	// Line 124, Address: 0x101705c, Func Offset: 0x12c
	// Line 125, Address: 0x1017068, Func Offset: 0x138
	// Line 126, Address: 0x101707c, Func Offset: 0x14c
	// Func End, Address: 0x1017094, Func Offset: 0x164
}

// 
// Start address: 0x10170a0
void switchr4_init(_anon1* pActwk)
{
	// Line 133, Address: 0x10170a0, Func Offset: 0
	// Line 134, Address: 0x10170ac, Func Offset: 0xc
	// Line 135, Address: 0x10170bc, Func Offset: 0x1c
	// Line 136, Address: 0x10170cc, Func Offset: 0x2c
	// Line 137, Address: 0x10170d8, Func Offset: 0x38
	// Line 138, Address: 0x10170e4, Func Offset: 0x44
	// Line 140, Address: 0x10170f4, Func Offset: 0x54
	// Line 141, Address: 0x1017104, Func Offset: 0x64
	// Line 145, Address: 0x1017114, Func Offset: 0x74
	// Line 146, Address: 0x1017120, Func Offset: 0x80
	// Line 148, Address: 0x101712c, Func Offset: 0x8c
	// Line 149, Address: 0x1017138, Func Offset: 0x98
	// Func End, Address: 0x1017148, Func Offset: 0xa8
}

// 
// Start address: 0x1017150
void switchr4_move(_anon1* pActwk)
{
	// Line 155, Address: 0x1017150, Func Offset: 0
	// Line 156, Address: 0x101715c, Func Offset: 0xc
	// Line 158, Address: 0x1017178, Func Offset: 0x28
	// Line 159, Address: 0x1017188, Func Offset: 0x38
	// Line 160, Address: 0x1017190, Func Offset: 0x40
	// Line 164, Address: 0x10171a4, Func Offset: 0x54
	// Line 165, Address: 0x10171b4, Func Offset: 0x64
	// Line 166, Address: 0x10171c0, Func Offset: 0x70
	// Line 167, Address: 0x10171c8, Func Offset: 0x78
	// Line 169, Address: 0x10171d0, Func Offset: 0x80
	// Func End, Address: 0x10171e0, Func Offset: 0x90
}

// 
// Start address: 0x10171e0
unsigned int switchr4_colichk(_anon1* pActwk, _anon1* pPlayerwk)
{
	short szwk;
	short poswk;
	// Line 187, Address: 0x10171e0, Func Offset: 0
	// Line 191, Address: 0x10171f4, Func Offset: 0x14
	// Line 192, Address: 0x1017228, Func Offset: 0x48
	// Line 193, Address: 0x1017268, Func Offset: 0x88
	// Line 194, Address: 0x1017298, Func Offset: 0xb8
	// Line 198, Address: 0x10172a4, Func Offset: 0xc4
	// Line 199, Address: 0x10172e8, Func Offset: 0x108
	// Line 200, Address: 0x1017318, Func Offset: 0x138
	// Line 201, Address: 0x101733c, Func Offset: 0x15c
	// Line 204, Address: 0x1017348, Func Offset: 0x168
	// Line 205, Address: 0x101734c, Func Offset: 0x16c
	// Func End, Address: 0x1017360, Func Offset: 0x180
}

// 
// Start address: 0x1017360
void swblkr4(_anon1* pActwk)
{
	short actidx;
	short xwk;
	short hwk;
	_anon1* pRideact;
	// Line 246, Address: 0x1017360, Func Offset: 0
	// Line 250, Address: 0x101737c, Func Offset: 0x1c
	// Line 251, Address: 0x10173c0, Func Offset: 0x60
	// Line 253, Address: 0x10173d4, Func Offset: 0x74
	// Line 254, Address: 0x10173e4, Func Offset: 0x84
	// Line 255, Address: 0x1017404, Func Offset: 0xa4
	// Line 256, Address: 0x1017424, Func Offset: 0xc4
	// Line 258, Address: 0x1017438, Func Offset: 0xd8
	// Line 259, Address: 0x1017444, Func Offset: 0xe4
	// Line 262, Address: 0x101744c, Func Offset: 0xec
	// Line 263, Address: 0x101746c, Func Offset: 0x10c
	// Line 268, Address: 0x101748c, Func Offset: 0x12c
	// Line 270, Address: 0x1017498, Func Offset: 0x138
	// Line 271, Address: 0x10174c0, Func Offset: 0x160
	// Line 272, Address: 0x10174ec, Func Offset: 0x18c
	// Line 273, Address: 0x1017514, Func Offset: 0x1b4
	// Line 275, Address: 0x1017520, Func Offset: 0x1c0
	// Func End, Address: 0x1017540, Func Offset: 0x1e0
}

// 
// Start address: 0x1017540
void swblkr4_init(_anon1* pActwk)
{
	_anon1* pNewact;
	// Line 281, Address: 0x1017540, Func Offset: 0
	// Line 284, Address: 0x101754c, Func Offset: 0xc
	// Line 285, Address: 0x101755c, Func Offset: 0x1c
	// Line 286, Address: 0x101756c, Func Offset: 0x2c
	// Line 287, Address: 0x1017578, Func Offset: 0x38
	// Line 288, Address: 0x1017584, Func Offset: 0x44
	// Line 290, Address: 0x1017594, Func Offset: 0x54
	// Line 291, Address: 0x10175a4, Func Offset: 0x64
	// Line 292, Address: 0x10175b4, Func Offset: 0x74
	// Line 293, Address: 0x10175c4, Func Offset: 0x84
	// Line 294, Address: 0x10175d4, Func Offset: 0x94
	// Line 295, Address: 0x10175e0, Func Offset: 0xa0
	// Line 296, Address: 0x10175ec, Func Offset: 0xac
	// Line 298, Address: 0x10175f8, Func Offset: 0xb8
	// Line 299, Address: 0x1017610, Func Offset: 0xd0
	// Line 300, Address: 0x101761c, Func Offset: 0xdc
	// Line 305, Address: 0x1017624, Func Offset: 0xe4
	// Line 306, Address: 0x1017634, Func Offset: 0xf4
	// Line 308, Address: 0x1017644, Func Offset: 0x104
	// Line 310, Address: 0x1017654, Func Offset: 0x114
	// Line 311, Address: 0x1017660, Func Offset: 0x120
	// Line 312, Address: 0x101766c, Func Offset: 0x12c
	// Line 313, Address: 0x1017678, Func Offset: 0x138
	// Line 314, Address: 0x101769c, Func Offset: 0x15c
	// Line 315, Address: 0x10176c0, Func Offset: 0x180
	// Line 316, Address: 0x10176f8, Func Offset: 0x1b8
	// Line 317, Address: 0x1017730, Func Offset: 0x1f0
	// Line 319, Address: 0x101773c, Func Offset: 0x1fc
	// Line 320, Address: 0x1017754, Func Offset: 0x214
	// Line 321, Address: 0x1017760, Func Offset: 0x220
	// Line 326, Address: 0x1017768, Func Offset: 0x228
	// Line 327, Address: 0x1017774, Func Offset: 0x234
	// Line 328, Address: 0x10177ac, Func Offset: 0x26c
	// Line 329, Address: 0x10177e4, Func Offset: 0x2a4
	// Line 330, Address: 0x10177f0, Func Offset: 0x2b0
	// Line 332, Address: 0x1017800, Func Offset: 0x2c0
	// Line 337, Address: 0x1017810, Func Offset: 0x2d0
	// Line 338, Address: 0x101781c, Func Offset: 0x2dc
	// Func End, Address: 0x101782c, Func Offset: 0x2ec
}

// 
// Start address: 0x1017830
void swblkr4_move(_anon1* pActwk)
{
	int ysv;
	_anon1* pRideact;
	// Line 344, Address: 0x1017830, Func Offset: 0
	// Line 348, Address: 0x1017844, Func Offset: 0x14
	// Line 353, Address: 0x1017854, Func Offset: 0x24
	// Line 355, Address: 0x101785c, Func Offset: 0x2c
	// Line 357, Address: 0x1017874, Func Offset: 0x44
	// Line 358, Address: 0x1017884, Func Offset: 0x54
	// Line 359, Address: 0x10178a0, Func Offset: 0x70
	// Line 361, Address: 0x10178a8, Func Offset: 0x78
	// Line 362, Address: 0x10178b0, Func Offset: 0x80
	// Line 363, Address: 0x10178cc, Func Offset: 0x9c
	// Line 368, Address: 0x10178d4, Func Offset: 0xa4
	// Line 369, Address: 0x10178dc, Func Offset: 0xac
	// Line 370, Address: 0x1017900, Func Offset: 0xd0
	// Line 376, Address: 0x1017928, Func Offset: 0xf8
	// Line 377, Address: 0x101793c, Func Offset: 0x10c
	// Line 381, Address: 0x1017948, Func Offset: 0x118
	// Line 387, Address: 0x1017970, Func Offset: 0x140
	// Line 391, Address: 0x1017984, Func Offset: 0x154
	// Line 394, Address: 0x101799c, Func Offset: 0x16c
	// Line 395, Address: 0x10179c8, Func Offset: 0x198
	// Line 397, Address: 0x10179d4, Func Offset: 0x1a4
	// Line 399, Address: 0x10179dc, Func Offset: 0x1ac
	// Line 400, Address: 0x1017a08, Func Offset: 0x1d8
	// Line 403, Address: 0x1017a14, Func Offset: 0x1e4
	// Func End, Address: 0x1017a2c, Func Offset: 0x1fc
}

