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
typedef void(*type_3)(_anon1*)[3];
typedef unsigned char type_4[4];
typedef unsigned char type_5[4];
typedef unsigned char type_6[5];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon0* type_9[0];
typedef _anon1 type_10[128];
typedef unsigned char* type_11[6];
typedef unsigned char type_12[6];
typedef unsigned char type_13[4];
typedef unsigned char type_14[4];

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

void(*seesaw6_tbl)(_anon1*)[3];
_anon1 actwk[128];
_anon0* pat_seesaw6[0];
unsigned char* seesaw_pchg[6];
unsigned char seesaw_pat_00[4];
unsigned char seesaw_pat_01[5];
unsigned char seesaw_pat_02[4];
unsigned char seesaw_pat_03[4];
unsigned char seesaw_pat_04[6];
unsigned char seesaw_pat_05[4];
_anon0 seesawPat00;
_anon0 seesawPat01;
_anon0 seesawPat02;
_anon0 seesawPat03;
_anon0 seesawPat04;
_anon0 seesawPat05;
_anon0 seesawPat06;
_anon0 seesawPat07;
_anon0 seesawPat08;
_anon0 seesawPat09;

void seesaw6(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_ini_s(_anon1* pActwk, _anon1* pActfree);
void m_move(_anon1* pActwk);
void m_stay(_anon1* pActwk);
void m_fall(_anon1* pActwk);
void m_up(_anon1* pActwk);
void slave(_anon1* pActwk);

// 
// Start address: 0x101fed0
void seesaw6(_anon1* pActwk)
{
	// Line 64, Address: 0x101fed0, Func Offset: 0
	// Line 65, Address: 0x101fedc, Func Offset: 0xc
	// Line 67, Address: 0x101fef4, Func Offset: 0x24
	// Line 68, Address: 0x101ff00, Func Offset: 0x30
	// Line 72, Address: 0x101ff08, Func Offset: 0x38
	// Line 73, Address: 0x101ff4c, Func Offset: 0x7c
	// Line 74, Address: 0x101ff58, Func Offset: 0x88
	// Line 76, Address: 0x101ff64, Func Offset: 0x94
	// Func End, Address: 0x101ff74, Func Offset: 0xa4
}

// 
// Start address: 0x101ff80
void m_init(_anon1* pActwk)
{
	_anon1* pActfree;
	// Line 88, Address: 0x101ff80, Func Offset: 0
	// Line 91, Address: 0x101ff8c, Func Offset: 0xc
	// Line 92, Address: 0x101ff9c, Func Offset: 0x1c
	// Line 93, Address: 0x101ffac, Func Offset: 0x2c
	// Line 94, Address: 0x101ffb8, Func Offset: 0x38
	// Line 95, Address: 0x101ffc4, Func Offset: 0x44
	// Line 96, Address: 0x101ffd0, Func Offset: 0x50
	// Line 97, Address: 0x101ffdc, Func Offset: 0x5c
	// Line 98, Address: 0x101ffe8, Func Offset: 0x68
	// Line 100, Address: 0x101fff8, Func Offset: 0x78
	// Line 102, Address: 0x102000c, Func Offset: 0x8c
	// Line 103, Address: 0x1020018, Func Offset: 0x98
	// Line 105, Address: 0x1020020, Func Offset: 0xa0
	// Line 107, Address: 0x1020030, Func Offset: 0xb0
	// Line 108, Address: 0x1020064, Func Offset: 0xe4
	// Line 109, Address: 0x1020074, Func Offset: 0xf4
	// Line 110, Address: 0x1020084, Func Offset: 0x104
	// Line 112, Address: 0x1020098, Func Offset: 0x118
	// Line 113, Address: 0x10200a4, Func Offset: 0x124
	// Line 115, Address: 0x10200ac, Func Offset: 0x12c
	// Line 117, Address: 0x10200bc, Func Offset: 0x13c
	// Line 118, Address: 0x10200f0, Func Offset: 0x170
	// Line 119, Address: 0x1020100, Func Offset: 0x180
	// Line 120, Address: 0x1020110, Func Offset: 0x190
	// Line 121, Address: 0x1020120, Func Offset: 0x1a0
	// Line 122, Address: 0x1020130, Func Offset: 0x1b0
	// Func End, Address: 0x1020140, Func Offset: 0x1c0
}

// 
// Start address: 0x1020140
void m_ini_s(_anon1* pActwk, _anon1* pActfree)
{
	// Line 134, Address: 0x1020140, Func Offset: 0
	// Line 135, Address: 0x102014c, Func Offset: 0xc
	// Line 136, Address: 0x102015c, Func Offset: 0x1c
	// Line 137, Address: 0x102016c, Func Offset: 0x2c
	// Line 138, Address: 0x102017c, Func Offset: 0x3c
	// Line 139, Address: 0x102018c, Func Offset: 0x4c
	// Line 140, Address: 0x102019c, Func Offset: 0x5c
	// Line 141, Address: 0x10201ac, Func Offset: 0x6c
	// Line 142, Address: 0x10201bc, Func Offset: 0x7c
	// Line 143, Address: 0x10201c8, Func Offset: 0x88
	// Line 144, Address: 0x10201d4, Func Offset: 0x94
	// Line 145, Address: 0x10201e0, Func Offset: 0xa0
	// Line 146, Address: 0x10201ec, Func Offset: 0xac
	// Line 148, Address: 0x10201f8, Func Offset: 0xb8
	// Line 149, Address: 0x102022c, Func Offset: 0xec
	// Line 150, Address: 0x1020238, Func Offset: 0xf8
	// Func End, Address: 0x1020244, Func Offset: 0x104
}

// 
// Start address: 0x1020250
void m_move(_anon1* pActwk)
{
	unsigned short wActwkNo;
	// Line 162, Address: 0x1020250, Func Offset: 0
	// Line 165, Address: 0x1020260, Func Offset: 0x10
	// Line 166, Address: 0x1020278, Func Offset: 0x28
	// Line 168, Address: 0x102028c, Func Offset: 0x3c
	// Line 170, Address: 0x1020298, Func Offset: 0x48
	// Line 171, Address: 0x10202a4, Func Offset: 0x54
	// Line 172, Address: 0x10202d0, Func Offset: 0x80
	// Line 174, Address: 0x10202f4, Func Offset: 0xa4
	// Line 175, Address: 0x1020300, Func Offset: 0xb0
	// Line 176, Address: 0x102033c, Func Offset: 0xec
	// Line 178, Address: 0x1020368, Func Offset: 0x118
	// Line 179, Address: 0x1020388, Func Offset: 0x138
	// Line 181, Address: 0x10203ac, Func Offset: 0x15c
	// Line 183, Address: 0x10203d8, Func Offset: 0x188
	// Line 184, Address: 0x10203ec, Func Offset: 0x19c
	// Line 187, Address: 0x10203f4, Func Offset: 0x1a4
	// Line 188, Address: 0x1020400, Func Offset: 0x1b0
	// Line 189, Address: 0x102040c, Func Offset: 0x1bc
	// Line 191, Address: 0x1020418, Func Offset: 0x1c8
	// Func End, Address: 0x102042c, Func Offset: 0x1dc
}

// 
// Start address: 0x1020430
void m_stay(_anon1* pActwk)
{
	short iwk;
	// Line 207, Address: 0x1020430, Func Offset: 0
	// Line 210, Address: 0x102043c, Func Offset: 0xc
	// Line 211, Address: 0x102044c, Func Offset: 0x1c
	// Line 214, Address: 0x1020464, Func Offset: 0x34
	// Line 215, Address: 0x1020474, Func Offset: 0x44
	// Line 217, Address: 0x102048c, Func Offset: 0x5c
	// Line 218, Address: 0x1020498, Func Offset: 0x68
	// Line 221, Address: 0x10204a0, Func Offset: 0x70
	// Line 224, Address: 0x10204bc, Func Offset: 0x8c
	// Line 226, Address: 0x10204cc, Func Offset: 0x9c
	// Func End, Address: 0x10204dc, Func Offset: 0xac
}

// 
// Start address: 0x10204e0
void m_fall(_anon1* pActwk)
{
	_anon1* pActSu;
	_anon1* pActSd;
	unsigned short wYspd;
	short iD0;
	short iD1;
	// Line 238, Address: 0x10204e0, Func Offset: 0
	// Line 244, Address: 0x1020500, Func Offset: 0x20
	// Line 245, Address: 0x1020524, Func Offset: 0x44
	// Line 247, Address: 0x1020548, Func Offset: 0x68
	// Line 248, Address: 0x102055c, Func Offset: 0x7c
	// Line 249, Address: 0x1020574, Func Offset: 0x94
	// Line 250, Address: 0x1020588, Func Offset: 0xa8
	// Line 253, Address: 0x102059c, Func Offset: 0xbc
	// Line 254, Address: 0x10205ac, Func Offset: 0xcc
	// Line 255, Address: 0x10205d4, Func Offset: 0xf4
	// Line 257, Address: 0x10205f0, Func Offset: 0x110
	// Line 258, Address: 0x1020604, Func Offset: 0x124
	// Line 259, Address: 0x102061c, Func Offset: 0x13c
	// Line 263, Address: 0x102062c, Func Offset: 0x14c
	// Line 264, Address: 0x102063c, Func Offset: 0x15c
	// Line 265, Address: 0x1020648, Func Offset: 0x168
	// Line 266, Address: 0x1020654, Func Offset: 0x174
	// Line 267, Address: 0x102065c, Func Offset: 0x17c
	// Func End, Address: 0x1020680, Func Offset: 0x1a0
}

// 
// Start address: 0x1020680
void m_up(_anon1* pActwk)
{
	_anon1* pActSd;
	_anon1* pActSu;
	unsigned short wwk_u;
	unsigned short wwk_d;
	// Line 279, Address: 0x1020680, Func Offset: 0
	// Line 282, Address: 0x102069c, Func Offset: 0x1c
	// Line 283, Address: 0x10206c0, Func Offset: 0x40
	// Line 284, Address: 0x10206cc, Func Offset: 0x4c
	// Line 285, Address: 0x10206dc, Func Offset: 0x5c
	// Line 286, Address: 0x10206ec, Func Offset: 0x6c
	// Line 290, Address: 0x1020704, Func Offset: 0x84
	// Line 291, Address: 0x1020710, Func Offset: 0x90
	// Line 292, Address: 0x1020718, Func Offset: 0x98
	// Line 293, Address: 0x1020724, Func Offset: 0xa4
	// Line 294, Address: 0x1020730, Func Offset: 0xb0
	// Line 295, Address: 0x102073c, Func Offset: 0xbc
	// Line 296, Address: 0x1020744, Func Offset: 0xc4
	// Line 297, Address: 0x102074c, Func Offset: 0xcc
	// Line 298, Address: 0x1020778, Func Offset: 0xf8
	// Line 299, Address: 0x1020784, Func Offset: 0x104
	// Line 302, Address: 0x1020790, Func Offset: 0x110
	// Line 303, Address: 0x102079c, Func Offset: 0x11c
	// Line 304, Address: 0x10207c0, Func Offset: 0x140
	// Line 305, Address: 0x10207cc, Func Offset: 0x14c
	// Func End, Address: 0x10207ec, Func Offset: 0x16c
}

// 
// Start address: 0x10207f0
void slave(_anon1* pActwk)
{
	_anon1* pActwk2;
	// Line 317, Address: 0x10207f0, Func Offset: 0
	// Line 320, Address: 0x1020800, Func Offset: 0x10
	// Line 321, Address: 0x1020824, Func Offset: 0x34
	// Line 322, Address: 0x1020838, Func Offset: 0x48
	// Line 323, Address: 0x1020844, Func Offset: 0x54
	// Func End, Address: 0x1020858, Func Offset: 0x68
}

