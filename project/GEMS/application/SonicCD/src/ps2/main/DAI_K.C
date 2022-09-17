typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_2)(_anon1*);

typedef _anon9 type_0[20];
typedef _anon9 type_1[0];
typedef unsigned char type_3[2];
typedef void(*type_4)(_anon1*)[2];
typedef char type_5[5];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];
typedef _anon0* type_8[3];
typedef unsigned char type_9[16];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
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

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon0 k_daipat0;
_anon0 k_daipat1;
_anon0 k_daipat2;
_anon0* k_daipat[3];
char k_daichg0[5];
char* k_daichg;
void(*dai_k_move_tbl)(_anon1*)[2];
short time_stop;
_anon1 actwk[128];
_anon7 swdata;
_anon7 swdata1;
unsigned char chibi_flag;

void dai_k(_anon1* pActwk);
void dai_k_init(_anon1* pActwk);
void dai_k_move(_anon1* pActwk);
void k_move(_anon1* pActwk, _anon1* pSonicwk);
void jumpchk_d(_anon1* pActwk, _anon1* pSonicwk);

// 
// Start address: 0x1002090
void dai_k(_anon1* pActwk)
{
	// Line 127, Address: 0x1002090, Func Offset: 0
	// Line 128, Address: 0x100209c, Func Offset: 0xc
	// Line 130, Address: 0x10020e0, Func Offset: 0x50
	// Line 131, Address: 0x10020f0, Func Offset: 0x60
	// Line 134, Address: 0x1002104, Func Offset: 0x74
	// Line 135, Address: 0x1002110, Func Offset: 0x80
	// Line 136, Address: 0x100211c, Func Offset: 0x8c
	// Func End, Address: 0x100212c, Func Offset: 0x9c
}

// 
// Start address: 0x1002130
void dai_k_init(_anon1* pActwk)
{
	// Line 143, Address: 0x1002130, Func Offset: 0
	// Line 144, Address: 0x100213c, Func Offset: 0xc
	// Line 145, Address: 0x100214c, Func Offset: 0x1c
	// Line 146, Address: 0x1002158, Func Offset: 0x28
	// Line 147, Address: 0x1002164, Func Offset: 0x34
	// Line 152, Address: 0x1002174, Func Offset: 0x44
	// Line 153, Address: 0x1002180, Func Offset: 0x50
	// Line 154, Address: 0x100218c, Func Offset: 0x5c
	// Line 155, Address: 0x1002198, Func Offset: 0x68
	// Func End, Address: 0x10021a8, Func Offset: 0x78
}

// 
// Start address: 0x10021b0
void dai_k_move(_anon1* pActwk)
{
	short lenwk;
	short sinwk;
	short coswk;
	unsigned char pattbl[16];
	// Line 161, Address: 0x10021b0, Func Offset: 0
	// Line 165, Address: 0x10021c0, Func Offset: 0x10
	// Line 169, Address: 0x10021d8, Func Offset: 0x28
	// Line 173, Address: 0x10021f4, Func Offset: 0x44
	// Line 174, Address: 0x100220c, Func Offset: 0x5c
	// Line 175, Address: 0x1002220, Func Offset: 0x70
	// Line 176, Address: 0x100222c, Func Offset: 0x7c
	// Line 178, Address: 0x1002260, Func Offset: 0xb0
	// Line 179, Address: 0x1002270, Func Offset: 0xc0
	// Line 180, Address: 0x1002278, Func Offset: 0xc8
	// Line 181, Address: 0x1002280, Func Offset: 0xd0
	// Line 182, Address: 0x100228c, Func Offset: 0xdc
	// Line 185, Address: 0x10022a8, Func Offset: 0xf8
	// Line 189, Address: 0x10022b4, Func Offset: 0x104
	// Line 194, Address: 0x10022cc, Func Offset: 0x11c
	// Line 195, Address: 0x10022e0, Func Offset: 0x130
	// Line 196, Address: 0x10022f8, Func Offset: 0x148
	// Line 200, Address: 0x100233c, Func Offset: 0x18c
	// Line 202, Address: 0x1002364, Func Offset: 0x1b4
	// Line 203, Address: 0x100237c, Func Offset: 0x1cc
	// Line 206, Address: 0x1002390, Func Offset: 0x1e0
	// Line 207, Address: 0x10023a8, Func Offset: 0x1f8
	// Line 208, Address: 0x10023bc, Func Offset: 0x20c
	// Line 209, Address: 0x10023d0, Func Offset: 0x220
	// Func End, Address: 0x10023e4, Func Offset: 0x234
}

// 
// Start address: 0x10023f0
void k_move(_anon1* pActwk, _anon1* pSonicwk)
{
	// Line 223, Address: 0x10023f0, Func Offset: 0
	// Line 224, Address: 0x10023fc, Func Offset: 0xc
	// Line 227, Address: 0x1002428, Func Offset: 0x38
	// Line 228, Address: 0x1002440, Func Offset: 0x50
	// Line 229, Address: 0x1002450, Func Offset: 0x60
	// Line 230, Address: 0x1002470, Func Offset: 0x80
	// Line 231, Address: 0x1002480, Func Offset: 0x90
	// Line 234, Address: 0x1002490, Func Offset: 0xa0
	// Line 237, Address: 0x1002498, Func Offset: 0xa8
	// Line 238, Address: 0x10024b0, Func Offset: 0xc0
	// Line 239, Address: 0x10024c0, Func Offset: 0xd0
	// Line 240, Address: 0x10024e0, Func Offset: 0xf0
	// Line 241, Address: 0x10024f0, Func Offset: 0x100
	// Line 245, Address: 0x1002500, Func Offset: 0x110
	// Func End, Address: 0x100250c, Func Offset: 0x11c
}

// 
// Start address: 0x1002510
void jumpchk_d(_anon1* pActwk, _anon1* pSonicwk)
{
	short jumpwk;
	short sinwk;
	short coswk;
	// Line 259, Address: 0x1002510, Func Offset: 0
	// Line 262, Address: 0x1002524, Func Offset: 0x14
	// Line 267, Address: 0x100253c, Func Offset: 0x2c
	// Line 268, Address: 0x1002544, Func Offset: 0x34
	// Line 269, Address: 0x100255c, Func Offset: 0x4c
	// Line 270, Address: 0x1002568, Func Offset: 0x58
	// Line 271, Address: 0x1002570, Func Offset: 0x60
	// Line 274, Address: 0x100257c, Func Offset: 0x6c
	// Line 275, Address: 0x10025a4, Func Offset: 0x94
	// Line 276, Address: 0x10025d8, Func Offset: 0xc8
	// Line 278, Address: 0x100260c, Func Offset: 0xfc
	// Line 279, Address: 0x100261c, Func Offset: 0x10c
	// Line 280, Address: 0x100262c, Func Offset: 0x11c
	// Line 281, Address: 0x1002638, Func Offset: 0x128
	// Line 283, Address: 0x1002640, Func Offset: 0x130
	// Line 314, Address: 0x100264c, Func Offset: 0x13c
	// Line 315, Address: 0x1002664, Func Offset: 0x154
	// Line 316, Address: 0x1002674, Func Offset: 0x164
	// Line 317, Address: 0x1002680, Func Offset: 0x170
	// Line 318, Address: 0x100268c, Func Offset: 0x17c
	// Line 319, Address: 0x1002694, Func Offset: 0x184
	// Line 320, Address: 0x10026a0, Func Offset: 0x190
	// Line 323, Address: 0x10026ac, Func Offset: 0x19c
	// Line 324, Address: 0x10026bc, Func Offset: 0x1ac
	// Line 325, Address: 0x10026c4, Func Offset: 0x1b4
	// Line 326, Address: 0x10026d4, Func Offset: 0x1c4
	// Line 327, Address: 0x10026e0, Func Offset: 0x1d0
	// Line 328, Address: 0x10026ec, Func Offset: 0x1dc
	// Line 329, Address: 0x10026f4, Func Offset: 0x1e4
	// Line 330, Address: 0x1002700, Func Offset: 0x1f0
	// Line 333, Address: 0x100270c, Func Offset: 0x1fc
	// Line 334, Address: 0x100271c, Func Offset: 0x20c
	// Line 338, Address: 0x1002728, Func Offset: 0x218
	// Func End, Address: 0x100273c, Func Offset: 0x22c
}

