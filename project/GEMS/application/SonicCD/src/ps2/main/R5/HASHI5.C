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
typedef _anon7 type_1[0];
typedef unsigned char type_2[272];
typedef void(*type_4)(_anon1*)[3];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef short type_7[8];
typedef _anon0* type_8[3];
typedef unsigned char type_9[256];
typedef _anon1 type_10[128];

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

_anon0 hashi5_pat0;
_anon0 hashi5_pat1;
_anon0 hashi5_pat2;
_anon0* hashi5pat[3];
unsigned char hashitbl[272];
unsigned char hashitbl2[256];
_anon1 actwk[128];
_anon5 editmode;

void hashi5(_anon1* pActwk);
void hashi5_init(_anon1* pActwk);
void hashi5_move(_anon1* pActwk);
void hashi5_move2(_anon1* pActwk);
void hashi5_posiget1p(_anon1* pActwk);
void hashi5_rideplayset1p(_anon1* pActwk);
void hashi5_posiset(_anon1* pActwk);
int hashi5_ridechk1p(_anon1* pActwk);

// 
// Start address: 0x1021d90
void hashi5(_anon1* pActwk)
{
	void(*hashi5_tbl)(_anon1*)[3];
	// Line 127, Address: 0x1021d90, Func Offset: 0
	// Line 128, Address: 0x1021d9c, Func Offset: 0xc
	// Line 134, Address: 0x1021dc0, Func Offset: 0x30
	// Line 135, Address: 0x1021dfc, Func Offset: 0x6c
	// Line 136, Address: 0x1021e08, Func Offset: 0x78
	// Func End, Address: 0x1021e18, Func Offset: 0x88
}

// 
// Start address: 0x1021e20
void hashi5_init(_anon1* pActwk)
{
	_anon1* pNewactwk;
	int i;
	short xofsettbl[8];
	// Line 145, Address: 0x1021e20, Func Offset: 0
	// Line 150, Address: 0x1021e30, Func Offset: 0x10
	// Line 152, Address: 0x1021e64, Func Offset: 0x44
	// Line 153, Address: 0x1021e74, Func Offset: 0x54
	// Line 154, Address: 0x1021e84, Func Offset: 0x64
	// Line 155, Address: 0x1021e90, Func Offset: 0x70
	// Line 156, Address: 0x1021e9c, Func Offset: 0x7c
	// Line 157, Address: 0x1021eac, Func Offset: 0x8c
	// Line 158, Address: 0x1021ebc, Func Offset: 0x9c
	// Line 159, Address: 0x1021ecc, Func Offset: 0xac
	// Line 160, Address: 0x1021ed8, Func Offset: 0xb8
	// Line 161, Address: 0x1021ee4, Func Offset: 0xc4
	// Line 163, Address: 0x1021ef0, Func Offset: 0xd0
	// Line 165, Address: 0x1021efc, Func Offset: 0xdc
	// Line 166, Address: 0x1021f10, Func Offset: 0xf0
	// Line 167, Address: 0x1021f50, Func Offset: 0x130
	// Line 168, Address: 0x1021f5c, Func Offset: 0x13c
	// Line 169, Address: 0x1021f68, Func Offset: 0x148
	// Line 170, Address: 0x1021f78, Func Offset: 0x158
	// Line 171, Address: 0x1021f88, Func Offset: 0x168
	// Line 172, Address: 0x1021f98, Func Offset: 0x178
	// Line 173, Address: 0x1021fa8, Func Offset: 0x188
	// Line 174, Address: 0x1021fb4, Func Offset: 0x194
	// Line 175, Address: 0x1021fc0, Func Offset: 0x1a0
	// Line 176, Address: 0x1021fd0, Func Offset: 0x1b0
	// Line 177, Address: 0x1021fdc, Func Offset: 0x1bc
	// Line 178, Address: 0x1021fe8, Func Offset: 0x1c8
	// Line 179, Address: 0x1022020, Func Offset: 0x200
	// Line 181, Address: 0x102202c, Func Offset: 0x20c
	// Line 182, Address: 0x1022040, Func Offset: 0x220
	// Line 185, Address: 0x1022080, Func Offset: 0x260
	// Line 186, Address: 0x1022090, Func Offset: 0x270
	// Func End, Address: 0x10220a4, Func Offset: 0x284
}

// 
// Start address: 0x10220b0
void hashi5_move(_anon1* pActwk)
{
	// Line 195, Address: 0x10220b0, Func Offset: 0
	// Line 196, Address: 0x10220bc, Func Offset: 0xc
	// Line 197, Address: 0x10220c4, Func Offset: 0x14
	// Line 198, Address: 0x10220d8, Func Offset: 0x28
	// Line 200, Address: 0x10220e4, Func Offset: 0x34
	// Line 201, Address: 0x10220f4, Func Offset: 0x44
	// Line 202, Address: 0x102210c, Func Offset: 0x5c
	// Line 204, Address: 0x102211c, Func Offset: 0x6c
	// Line 206, Address: 0x1022128, Func Offset: 0x78
	// Line 207, Address: 0x1022138, Func Offset: 0x88
	// Line 209, Address: 0x1022144, Func Offset: 0x94
	// Line 213, Address: 0x102214c, Func Offset: 0x9c
	// Line 214, Address: 0x102215c, Func Offset: 0xac
	// Line 215, Address: 0x102216c, Func Offset: 0xbc
	// Line 219, Address: 0x1022178, Func Offset: 0xc8
	// Line 220, Address: 0x1022184, Func Offset: 0xd4
	// Func End, Address: 0x1022194, Func Offset: 0xe4
}

// 
// Start address: 0x10221a0
void hashi5_move2(_anon1* pActwk)
{
	// Line 229, Address: 0x10221a0, Func Offset: 0
	// Line 230, Address: 0x10221ac, Func Offset: 0xc
	// Line 231, Address: 0x10221f4, Func Offset: 0x54
	// Line 232, Address: 0x1022234, Func Offset: 0x94
	// Func End, Address: 0x1022244, Func Offset: 0xa4
}

// 
// Start address: 0x1022250
void hashi5_posiget1p(_anon1* pActwk)
{
	unsigned short wD0;
	// Line 241, Address: 0x1022250, Func Offset: 0
	// Line 244, Address: 0x102225c, Func Offset: 0xc
	// Line 245, Address: 0x1022274, Func Offset: 0x24
	// Line 246, Address: 0x10222a4, Func Offset: 0x54
	// Line 247, Address: 0x10222b4, Func Offset: 0x64
	// Line 249, Address: 0x10222c4, Func Offset: 0x74
	// Line 250, Address: 0x10222d8, Func Offset: 0x88
	// Line 255, Address: 0x10222e0, Func Offset: 0x90
	// Line 256, Address: 0x10222e8, Func Offset: 0x98
	// Func End, Address: 0x10222f8, Func Offset: 0xa8
}

// 
// Start address: 0x1022300
void hashi5_rideplayset1p(_anon1* pActwk)
{
	unsigned char bD0;
	// Line 265, Address: 0x1022300, Func Offset: 0
	// Line 268, Address: 0x102230c, Func Offset: 0xc
	// Line 269, Address: 0x1022318, Func Offset: 0x18
	// Line 270, Address: 0x1022384, Func Offset: 0x84
	// Func End, Address: 0x1022394, Func Offset: 0x94
}

// 
// Start address: 0x10223a0
void hashi5_posiset(_anon1* pActwk)
{
	_anon1* pSubactwk;
	unsigned short Sin;
	unsigned short Cos;
	_anon2 lD0;
	short wD2;
	unsigned char bD5;
	unsigned char* pA2;
	unsigned char* pA3;
	// Line 279, Address: 0x10223a0, Func Offset: 0
	// Line 288, Address: 0x10223c0, Func Offset: 0x20
	// Line 290, Address: 0x10223dc, Func Offset: 0x3c
	// Line 291, Address: 0x10223f4, Func Offset: 0x54
	// Line 292, Address: 0x1022414, Func Offset: 0x74
	// Line 293, Address: 0x1022434, Func Offset: 0x94
	// Line 295, Address: 0x102243c, Func Offset: 0x9c
	// Line 296, Address: 0x1022444, Func Offset: 0xa4
	// Line 297, Address: 0x102246c, Func Offset: 0xcc
	// Line 298, Address: 0x1022470, Func Offset: 0xd0
	// Line 299, Address: 0x1022480, Func Offset: 0xe0
	// Line 300, Address: 0x10224a8, Func Offset: 0x108
	// Line 301, Address: 0x10224d0, Func Offset: 0x130
	// Line 303, Address: 0x10224ec, Func Offset: 0x14c
	// Line 304, Address: 0x10224f0, Func Offset: 0x150
	// Line 305, Address: 0x10224fc, Func Offset: 0x15c
	// Line 306, Address: 0x102251c, Func Offset: 0x17c
	// Line 307, Address: 0x1022530, Func Offset: 0x190
	// Line 308, Address: 0x102253c, Func Offset: 0x19c
	// Line 309, Address: 0x1022548, Func Offset: 0x1a8
	// Line 310, Address: 0x102256c, Func Offset: 0x1cc
	// Line 312, Address: 0x1022590, Func Offset: 0x1f0
	// Line 313, Address: 0x1022598, Func Offset: 0x1f8
	// Line 314, Address: 0x10225c0, Func Offset: 0x220
	// Line 315, Address: 0x10225c4, Func Offset: 0x224
	// Line 316, Address: 0x10225e4, Func Offset: 0x244
	// Line 317, Address: 0x102260c, Func Offset: 0x26c
	// Line 318, Address: 0x1022634, Func Offset: 0x294
	// Line 320, Address: 0x1022650, Func Offset: 0x2b0
	// Func End, Address: 0x1022674, Func Offset: 0x2d4
}

// 
// Start address: 0x1022680
int hashi5_ridechk1p(_anon1* pActwk)
{
	short wD0;
	short wD1;
	short wD2;
	// Line 330, Address: 0x1022680, Func Offset: 0
	// Line 334, Address: 0x1022698, Func Offset: 0x18
	// Line 335, Address: 0x10226b0, Func Offset: 0x30
	// Line 336, Address: 0x10226c0, Func Offset: 0x40
	// Line 337, Address: 0x10226cc, Func Offset: 0x4c
	// Line 339, Address: 0x10226d8, Func Offset: 0x58
	// Line 340, Address: 0x10226f0, Func Offset: 0x70
	// Line 341, Address: 0x1022730, Func Offset: 0xb0
	// Line 342, Address: 0x1022740, Func Offset: 0xc0
	// Line 344, Address: 0x102275c, Func Offset: 0xdc
	// Line 346, Address: 0x1022780, Func Offset: 0x100
	// Line 347, Address: 0x1022790, Func Offset: 0x110
	// Line 348, Address: 0x10227c4, Func Offset: 0x144
	// Line 349, Address: 0x10227e0, Func Offset: 0x160
	// Line 350, Address: 0x10227ec, Func Offset: 0x16c
	// Line 351, Address: 0x1022804, Func Offset: 0x184
	// Line 352, Address: 0x102281c, Func Offset: 0x19c
	// Line 354, Address: 0x1022844, Func Offset: 0x1c4
	// Line 355, Address: 0x1022858, Func Offset: 0x1d8
	// Line 365, Address: 0x1022864, Func Offset: 0x1e4
	// Line 366, Address: 0x10228a0, Func Offset: 0x220
	// Line 367, Address: 0x10228a8, Func Offset: 0x228
	// Line 370, Address: 0x10228bc, Func Offset: 0x23c
	// Line 371, Address: 0x10228c0, Func Offset: 0x240
	// Func End, Address: 0x10228dc, Func Offset: 0x25c
}

