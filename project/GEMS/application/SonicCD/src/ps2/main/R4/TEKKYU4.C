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
typedef void(*type_3)(_anon1*)[2];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon0* type_6[1];
typedef _anon1 type_7[128];

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

_anon0 tekkyu4_pat0;
_anon0* pat_tekkyu4[1];
_anon1 actwk[128];

void tekkyu4(_anon1* pActwk);
void tekkyu4init(_anon1* pActwk);
void act_init_sub(_anon1* pActwk, _anon1* pNewactwk);
void tekkyu4move(_anon1* pActwk);

// 
// Start address: 0x1024f00
void tekkyu4(_anon1* pActwk)
{
	_anon1* pMainactwk;
	void(*tekkyu4_acttbl)(_anon1*)[2];
	// Line 74, Address: 0x1024f00, Func Offset: 0
	// Line 77, Address: 0x1024f10, Func Offset: 0x10
	// Line 83, Address: 0x1024f2c, Func Offset: 0x2c
	// Line 84, Address: 0x1024f3c, Func Offset: 0x3c
	// Line 85, Address: 0x1024f64, Func Offset: 0x64
	// Line 86, Address: 0x1024f78, Func Offset: 0x78
	// Line 87, Address: 0x1024f84, Func Offset: 0x84
	// Line 91, Address: 0x1024f8c, Func Offset: 0x8c
	// Line 99, Address: 0x1024fc8, Func Offset: 0xc8
	// Func End, Address: 0x1024fdc, Func Offset: 0xdc
}

// 
// Start address: 0x1024fe0
void tekkyu4init(_anon1* pActwk)
{
	_anon1* pNewactwk1;
	_anon1* pNewactwk2;
	_anon1* pNewactwk3;
	short wD0;
	// Line 108, Address: 0x1024fe0, Func Offset: 0
	// Line 112, Address: 0x1024ff0, Func Offset: 0x10
	// Line 114, Address: 0x1025000, Func Offset: 0x20
	// Line 115, Address: 0x1025014, Func Offset: 0x34
	// Line 116, Address: 0x1025020, Func Offset: 0x40
	// Line 119, Address: 0x1025028, Func Offset: 0x48
	// Line 120, Address: 0x1025038, Func Offset: 0x58
	// Line 121, Address: 0x1025044, Func Offset: 0x64
	// Line 123, Address: 0x102507c, Func Offset: 0x9c
	// Line 124, Address: 0x1025090, Func Offset: 0xb0
	// Line 125, Address: 0x102509c, Func Offset: 0xbc
	// Line 128, Address: 0x10250a4, Func Offset: 0xc4
	// Line 129, Address: 0x10250b4, Func Offset: 0xd4
	// Line 130, Address: 0x10250c0, Func Offset: 0xe0
	// Line 132, Address: 0x10250f8, Func Offset: 0x118
	// Line 133, Address: 0x102510c, Func Offset: 0x12c
	// Line 134, Address: 0x1025118, Func Offset: 0x138
	// Line 137, Address: 0x1025120, Func Offset: 0x140
	// Line 138, Address: 0x1025130, Func Offset: 0x150
	// Line 139, Address: 0x102513c, Func Offset: 0x15c
	// Line 141, Address: 0x1025174, Func Offset: 0x194
	// Line 143, Address: 0x1025180, Func Offset: 0x1a0
	// Line 145, Address: 0x10251a8, Func Offset: 0x1c8
	// Line 146, Address: 0x10251c0, Func Offset: 0x1e0
	// Line 147, Address: 0x10251dc, Func Offset: 0x1fc
	// Line 149, Address: 0x10251fc, Func Offset: 0x21c
	// Line 150, Address: 0x1025208, Func Offset: 0x228
	// Line 152, Address: 0x1025234, Func Offset: 0x254
	// Line 154, Address: 0x1025274, Func Offset: 0x294
	// Line 156, Address: 0x1025290, Func Offset: 0x2b0
	// Line 157, Address: 0x102529c, Func Offset: 0x2bc
	// Line 158, Address: 0x10252a8, Func Offset: 0x2c8
	// Line 159, Address: 0x10252b4, Func Offset: 0x2d4
	// Line 161, Address: 0x10252c0, Func Offset: 0x2e0
	// Line 162, Address: 0x10252d0, Func Offset: 0x2f0
	// Line 163, Address: 0x10252e0, Func Offset: 0x300
	// Line 164, Address: 0x10252f0, Func Offset: 0x310
	// Line 165, Address: 0x1025300, Func Offset: 0x320
	// Func End, Address: 0x1025314, Func Offset: 0x334
}

// 
// Start address: 0x1025320
void act_init_sub(_anon1* pActwk, _anon1* pNewactwk)
{
	// Line 168, Address: 0x1025320, Func Offset: 0
	// Line 169, Address: 0x102532c, Func Offset: 0xc
	// Line 170, Address: 0x102533c, Func Offset: 0x1c
	// Line 171, Address: 0x1025348, Func Offset: 0x28
	// Line 172, Address: 0x1025354, Func Offset: 0x34
	// Line 173, Address: 0x1025360, Func Offset: 0x40
	// Line 174, Address: 0x102536c, Func Offset: 0x4c
	// Line 175, Address: 0x1025378, Func Offset: 0x58
	// Line 176, Address: 0x1025388, Func Offset: 0x68
	// Line 177, Address: 0x1025394, Func Offset: 0x74
	// Line 178, Address: 0x10253a4, Func Offset: 0x84
	// Line 179, Address: 0x10253b4, Func Offset: 0x94
	// Line 180, Address: 0x10253c4, Func Offset: 0xa4
	// Line 181, Address: 0x10253d4, Func Offset: 0xb4
	// Func End, Address: 0x10253e0, Func Offset: 0xc0
}

// 
// Start address: 0x10253e0
void tekkyu4move(_anon1* pActwk)
{
	unsigned short wD0;
	unsigned short wD1;
	// Line 190, Address: 0x10253e0, Func Offset: 0
	// Line 193, Address: 0x10253ec, Func Offset: 0xc
	// Line 196, Address: 0x1025404, Func Offset: 0x24
	// Line 202, Address: 0x102542c, Func Offset: 0x4c
	// Line 203, Address: 0x1025458, Func Offset: 0x78
	// Line 208, Address: 0x1025484, Func Offset: 0xa4
	// Line 209, Address: 0x10254bc, Func Offset: 0xdc
	// Line 211, Address: 0x10254f4, Func Offset: 0x114
	// Line 213, Address: 0x1025500, Func Offset: 0x120
	// Line 215, Address: 0x102551c, Func Offset: 0x13c
	// Func End, Address: 0x102552c, Func Offset: 0x14c
}

