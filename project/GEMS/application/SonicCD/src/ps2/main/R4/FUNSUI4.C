typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[6];
typedef void(*type_4)(_anon1*)[3];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef unsigned char* type_7[2];
typedef short type_8[32];
typedef unsigned char type_9[7];
typedef _anon0* type_10[9];
typedef _anon1 type_11[128];

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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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

unsigned char pchg0[7];
unsigned char pchg1[6];
unsigned char* funsui4pchg[2];
_anon0 pat0;
_anon0 pat1;
_anon0 pat2;
_anon0 pat3;
_anon0 pat4;
_anon0 pat5;
_anon0 pat6;
_anon0 pat7;
_anon0 pat8;
_anon0* funsui4pat[9];
tagPALETTEENTRY* lpcolorwk;
_anon1 actwk[128];
short waterposi;

void funsui4(_anon1* pActwk);
void funsui4_init(_anon1* pActwk);
void funsui4_move(_anon1* pActwk);
void sibuki_set(_anon1* pActwk);
void sibuki(_anon1* pActwk);
void sibuki_init(_anon1* pActwk);
void sibuki_move(_anon1* pActwk);

// 
// Start address: 0x10263c0
void funsui4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 143, Address: 0x10263c0, Func Offset: 0
	// Line 144, Address: 0x10263cc, Func Offset: 0xc
	// Line 151, Address: 0x10263f0, Func Offset: 0x30
	// Line 153, Address: 0x102640c, Func Offset: 0x4c
	// Line 154, Address: 0x1026418, Func Offset: 0x58
	// Line 157, Address: 0x1026420, Func Offset: 0x60
	// Line 158, Address: 0x102645c, Func Offset: 0x9c
	// Line 159, Address: 0x1026468, Func Offset: 0xa8
	// Line 161, Address: 0x1026474, Func Offset: 0xb4
	// Func End, Address: 0x1026484, Func Offset: 0xc4
}

// 
// Start address: 0x1026490
void funsui4_init(_anon1* pActwk)
{
	// Line 166, Address: 0x1026490, Func Offset: 0
	// Line 167, Address: 0x102649c, Func Offset: 0xc
	// Line 168, Address: 0x10264ac, Func Offset: 0x1c
	// Line 169, Address: 0x10264bc, Func Offset: 0x2c
	// Line 170, Address: 0x10264cc, Func Offset: 0x3c
	// Line 172, Address: 0x10264dc, Func Offset: 0x4c
	// Line 173, Address: 0x10264ec, Func Offset: 0x5c
	// Line 174, Address: 0x10264fc, Func Offset: 0x6c
	// Line 175, Address: 0x102650c, Func Offset: 0x7c
	// Line 177, Address: 0x102651c, Func Offset: 0x8c
	// Line 178, Address: 0x102652c, Func Offset: 0x9c
	// Line 179, Address: 0x102653c, Func Offset: 0xac
	// Line 180, Address: 0x102654c, Func Offset: 0xbc
	// Line 182, Address: 0x102655c, Func Offset: 0xcc
	// Line 183, Address: 0x102656c, Func Offset: 0xdc
	// Line 184, Address: 0x102657c, Func Offset: 0xec
	// Line 185, Address: 0x1026588, Func Offset: 0xf8
	// Line 186, Address: 0x1026594, Func Offset: 0x104
	// Line 187, Address: 0x10265a4, Func Offset: 0x114
	// Line 188, Address: 0x10265b0, Func Offset: 0x120
	// Line 190, Address: 0x10265bc, Func Offset: 0x12c
	// Line 191, Address: 0x10265c8, Func Offset: 0x138
	// Func End, Address: 0x10265d8, Func Offset: 0x148
}

// 
// Start address: 0x10265e0
void funsui4_move(_anon1* pActwk)
{
	// Line 196, Address: 0x10265e0, Func Offset: 0
	// Line 197, Address: 0x10265ec, Func Offset: 0xc
	// Line 198, Address: 0x10265f8, Func Offset: 0x18
	// Line 199, Address: 0x102660c, Func Offset: 0x2c
	// Line 200, Address: 0x1026630, Func Offset: 0x50
	// Line 201, Address: 0x1026644, Func Offset: 0x64
	// Func End, Address: 0x1026654, Func Offset: 0x74
}

// 
// Start address: 0x1026660
void sibuki_set(_anon1* pActwk)
{
	_anon1* pNewActwk;
	short* a2;
	unsigned char d0;
	short tbl[32];
	// Line 206, Address: 0x1026660, Func Offset: 0
	// Line 211, Address: 0x1026674, Func Offset: 0x14
	// Line 224, Address: 0x10266a8, Func Offset: 0x48
	// Line 226, Address: 0x10266c8, Func Offset: 0x68
	// Line 227, Address: 0x10266d8, Func Offset: 0x78
	// Line 229, Address: 0x10266e0, Func Offset: 0x80
	// Line 231, Address: 0x10266f0, Func Offset: 0x90
	// Line 233, Address: 0x1026704, Func Offset: 0xa4
	// Line 234, Address: 0x1026714, Func Offset: 0xb4
	// Line 235, Address: 0x1026720, Func Offset: 0xc0
	// Line 236, Address: 0x102672c, Func Offset: 0xcc
	// Line 237, Address: 0x1026744, Func Offset: 0xe4
	// Line 238, Address: 0x102674c, Func Offset: 0xec
	// Line 239, Address: 0x1026754, Func Offset: 0xf4
	// Line 240, Address: 0x102677c, Func Offset: 0x11c
	// Line 241, Address: 0x10267b4, Func Offset: 0x154
	// Line 242, Address: 0x10267ec, Func Offset: 0x18c
	// Line 243, Address: 0x1026800, Func Offset: 0x1a0
	// Line 245, Address: 0x1026814, Func Offset: 0x1b4
	// Line 247, Address: 0x1026824, Func Offset: 0x1c4
	// Func End, Address: 0x102683c, Func Offset: 0x1dc
}

// 
// Start address: 0x1026840
void sibuki(_anon1* pActwk)
{
	// Line 252, Address: 0x1026840, Func Offset: 0
	// Line 253, Address: 0x102684c, Func Offset: 0xc
	// Line 254, Address: 0x1026870, Func Offset: 0x30
	// Line 255, Address: 0x102687c, Func Offset: 0x3c
	// Func End, Address: 0x102688c, Func Offset: 0x4c
}

// 
// Start address: 0x1026890
void sibuki_init(_anon1* pActwk)
{
	// Line 260, Address: 0x1026890, Func Offset: 0
	// Line 261, Address: 0x102689c, Func Offset: 0xc
	// Line 262, Address: 0x10268ac, Func Offset: 0x1c
	// Line 263, Address: 0x10268bc, Func Offset: 0x2c
	// Line 264, Address: 0x10268c8, Func Offset: 0x38
	// Line 265, Address: 0x10268d4, Func Offset: 0x44
	// Line 266, Address: 0x10268e4, Func Offset: 0x54
	// Line 267, Address: 0x10268f0, Func Offset: 0x60
	// Line 268, Address: 0x10268fc, Func Offset: 0x6c
	// Line 270, Address: 0x1026908, Func Offset: 0x78
	// Line 271, Address: 0x1026914, Func Offset: 0x84
	// Func End, Address: 0x1026924, Func Offset: 0x94
}

// 
// Start address: 0x1026930
void sibuki_move(_anon1* pActwk)
{
	int d0;
	// Line 276, Address: 0x1026930, Func Offset: 0
	// Line 279, Address: 0x1026940, Func Offset: 0x10
	// Line 281, Address: 0x1026960, Func Offset: 0x30
	// Line 282, Address: 0x1026970, Func Offset: 0x40
	// Line 283, Address: 0x102697c, Func Offset: 0x4c
	// Line 285, Address: 0x1026984, Func Offset: 0x54
	// Line 287, Address: 0x1026994, Func Offset: 0x64
	// Line 288, Address: 0x10269a4, Func Offset: 0x74
	// Line 289, Address: 0x10269a8, Func Offset: 0x78
	// Line 290, Address: 0x10269b8, Func Offset: 0x88
	// Line 291, Address: 0x10269c8, Func Offset: 0x98
	// Line 292, Address: 0x10269cc, Func Offset: 0x9c
	// Line 293, Address: 0x10269dc, Func Offset: 0xac
	// Line 294, Address: 0x10269ec, Func Offset: 0xbc
	// Line 295, Address: 0x1026a00, Func Offset: 0xd0
	// Line 296, Address: 0x1026a0c, Func Offset: 0xdc
	// Line 297, Address: 0x1026a18, Func Offset: 0xe8
	// Func End, Address: 0x1026a2c, Func Offset: 0xfc
}

