typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_1)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_2[0];
typedef _anon0* type_3[2];
typedef unsigned char* type_4[2];
typedef unsigned char type_5[4];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef _anon0* type_8[4];
typedef _anon1 type_9[128];
typedef unsigned char type_10[4];
typedef _anon0* type_11[1];
typedef void(*type_12)(_anon1*)[3];

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

_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0* pat_denden_e[4];
_anon0* pat_denden_b[2];
_anon0* pat_none[1];
unsigned char p00[4];
unsigned char p01[4];
unsigned char* pchg[2];
_anon1 actwk[128];

void denden(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_fall(_anon1* pActwk);
void m_move(_anon1* pActwk);
short m_check(_anon1* pActwk);
void sub(_anon1* pActwk);

// 
// Start address: 0x1021650
void denden(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 139, Address: 0x1021650, Func Offset: 0
	// Line 140, Address: 0x102165c, Func Offset: 0xc
	// Line 147, Address: 0x1021680, Func Offset: 0x30
	// Line 149, Address: 0x102169c, Func Offset: 0x4c
	// Line 150, Address: 0x10216a8, Func Offset: 0x58
	// Line 153, Address: 0x10216b0, Func Offset: 0x60
	// Line 154, Address: 0x10216c4, Func Offset: 0x74
	// Line 155, Address: 0x1021700, Func Offset: 0xb0
	// Line 156, Address: 0x102170c, Func Offset: 0xbc
	// Line 158, Address: 0x1021720, Func Offset: 0xd0
	// Func End, Address: 0x1021730, Func Offset: 0xe0
}

// 
// Start address: 0x1021730
void m_init(_anon1* pActwk)
{
	// Line 163, Address: 0x1021730, Func Offset: 0
	// Line 164, Address: 0x102173c, Func Offset: 0xc
	// Line 165, Address: 0x102174c, Func Offset: 0x1c
	// Line 166, Address: 0x102175c, Func Offset: 0x2c
	// Line 167, Address: 0x1021768, Func Offset: 0x38
	// Line 168, Address: 0x1021774, Func Offset: 0x44
	// Line 169, Address: 0x1021780, Func Offset: 0x50
	// Line 170, Address: 0x102178c, Func Offset: 0x5c
	// Line 171, Address: 0x1021798, Func Offset: 0x68
	// Line 172, Address: 0x10217a4, Func Offset: 0x74
	// Line 173, Address: 0x10217b0, Func Offset: 0x80
	// Line 175, Address: 0x10217c0, Func Offset: 0x90
	// Line 176, Address: 0x10217e8, Func Offset: 0xb8
	// Line 178, Address: 0x10217f8, Func Offset: 0xc8
	// Line 179, Address: 0x1021804, Func Offset: 0xd4
	// Func End, Address: 0x1021814, Func Offset: 0xe4
}

// 
// Start address: 0x1021820
void m_fall(_anon1* pActwk)
{
	short d1;
	// Line 184, Address: 0x1021820, Func Offset: 0
	// Line 187, Address: 0x1021830, Func Offset: 0x10
	// Line 188, Address: 0x1021844, Func Offset: 0x24
	// Line 189, Address: 0x1021858, Func Offset: 0x38
	// Line 191, Address: 0x1021868, Func Offset: 0x48
	// Line 192, Address: 0x1021878, Func Offset: 0x58
	// Line 194, Address: 0x1021888, Func Offset: 0x68
	// Func End, Address: 0x102189c, Func Offset: 0x7c
}

// 
// Start address: 0x10218a0
void m_move(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	_anon1* pNewActwk;
	short d0;
	short d1;
	// Line 199, Address: 0x10218a0, Func Offset: 0
	// Line 204, Address: 0x10218b8, Func Offset: 0x18
	// Line 205, Address: 0x10218d0, Func Offset: 0x30
	// Line 206, Address: 0x10218e0, Func Offset: 0x40
	// Line 207, Address: 0x10218f4, Func Offset: 0x54
	// Line 209, Address: 0x1021904, Func Offset: 0x64
	// Line 211, Address: 0x1021910, Func Offset: 0x70
	// Line 212, Address: 0x1021924, Func Offset: 0x84
	// Line 213, Address: 0x1021938, Func Offset: 0x98
	// Line 214, Address: 0x1021940, Func Offset: 0xa0
	// Line 215, Address: 0x102194c, Func Offset: 0xac
	// Line 216, Address: 0x1021960, Func Offset: 0xc0
	// Line 218, Address: 0x1021970, Func Offset: 0xd0
	// Line 219, Address: 0x1021980, Func Offset: 0xe0
	// Line 220, Address: 0x1021988, Func Offset: 0xe8
	// Line 221, Address: 0x10219a4, Func Offset: 0x104
	// Line 222, Address: 0x10219b0, Func Offset: 0x110
	// Line 223, Address: 0x10219c0, Func Offset: 0x120
	// Line 224, Address: 0x10219d4, Func Offset: 0x134
	// Line 225, Address: 0x10219e4, Func Offset: 0x144
	// Line 226, Address: 0x10219f0, Func Offset: 0x150
	// Line 227, Address: 0x1021a00, Func Offset: 0x160
	// Line 228, Address: 0x1021a10, Func Offset: 0x170
	// Line 229, Address: 0x1021a20, Func Offset: 0x180
	// Line 230, Address: 0x1021a30, Func Offset: 0x190
	// Line 231, Address: 0x1021a40, Func Offset: 0x1a0
	// Line 232, Address: 0x1021a50, Func Offset: 0x1b0
	// Line 233, Address: 0x1021a5c, Func Offset: 0x1bc
	// Line 234, Address: 0x1021a98, Func Offset: 0x1f8
	// Line 235, Address: 0x1021ad4, Func Offset: 0x234
	// Line 237, Address: 0x1021aec, Func Offset: 0x24c
	// Line 239, Address: 0x1021af8, Func Offset: 0x258
	// Line 241, Address: 0x1021b00, Func Offset: 0x260
	// Line 242, Address: 0x1021b08, Func Offset: 0x268
	// Line 243, Address: 0x1021b20, Func Offset: 0x280
	// Line 244, Address: 0x1021b50, Func Offset: 0x2b0
	// Line 246, Address: 0x1021b58, Func Offset: 0x2b8
	// Line 247, Address: 0x1021b6c, Func Offset: 0x2cc
	// Line 249, Address: 0x1021b74, Func Offset: 0x2d4
	// Line 250, Address: 0x1021b84, Func Offset: 0x2e4
	// Line 251, Address: 0x1021b94, Func Offset: 0x2f4
	// Line 253, Address: 0x1021ba4, Func Offset: 0x304
	// Func End, Address: 0x1021bc0, Func Offset: 0x320
}

// 
// Start address: 0x1021bc0
short m_check(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	short carry_flag;
	// Line 256, Address: 0x1021bc0, Func Offset: 0
	// Line 261, Address: 0x1021bd4, Func Offset: 0x14
	// Line 262, Address: 0x1021bdc, Func Offset: 0x1c
	// Line 263, Address: 0x1021be8, Func Offset: 0x28
	// Line 264, Address: 0x1021bfc, Func Offset: 0x3c
	// Line 265, Address: 0x1021c08, Func Offset: 0x48
	// Line 267, Address: 0x1021c1c, Func Offset: 0x5c
	// Line 268, Address: 0x1021c28, Func Offset: 0x68
	// Line 269, Address: 0x1021c34, Func Offset: 0x74
	// Line 270, Address: 0x1021c48, Func Offset: 0x88
	// Line 271, Address: 0x1021c54, Func Offset: 0x94
	// Line 273, Address: 0x1021c68, Func Offset: 0xa8
	// Line 274, Address: 0x1021c74, Func Offset: 0xb4
	// Line 277, Address: 0x1021c7c, Func Offset: 0xbc
	// Line 279, Address: 0x1021c80, Func Offset: 0xc0
	// Line 282, Address: 0x1021c88, Func Offset: 0xc8
	// Line 284, Address: 0x1021c8c, Func Offset: 0xcc
	// Line 285, Address: 0x1021c90, Func Offset: 0xd0
	// Func End, Address: 0x1021ca8, Func Offset: 0xe8
}

// 
// Start address: 0x1021cb0
void sub(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 290, Address: 0x1021cb0, Func Offset: 0
	// Line 293, Address: 0x1021cc0, Func Offset: 0x10
	// Line 294, Address: 0x1021ce8, Func Offset: 0x38
	// Line 296, Address: 0x1021cfc, Func Offset: 0x4c
	// Line 297, Address: 0x1021d08, Func Offset: 0x58
	// Line 299, Address: 0x1021d10, Func Offset: 0x60
	// Line 301, Address: 0x1021d34, Func Offset: 0x84
	// Line 302, Address: 0x1021d40, Func Offset: 0x90
	// Line 304, Address: 0x1021d48, Func Offset: 0x98
	// Line 305, Address: 0x1021d54, Func Offset: 0xa4
	// Line 306, Address: 0x1021d60, Func Offset: 0xb0
	// Line 307, Address: 0x1021d70, Func Offset: 0xc0
	// Line 308, Address: 0x1021d7c, Func Offset: 0xcc
	// Func End, Address: 0x1021d90, Func Offset: 0xe0
}

