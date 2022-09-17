typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[12];
typedef int type_3[12];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon0*)[3];
typedef _anon1* type_8[14];
typedef _anon0 type_9[128];
typedef unsigned char type_10[64];

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

_anon1 spr_kowasi00;
_anon1 spr_kowasi01;
_anon1 spr_kowasi02;
_anon1 spr_kowasi03;
_anon1 spr_kowasi04;
_anon1 spr_kowasi05;
_anon1 spr_kowasi06;
_anon1 spr_kowasi07;
_anon1 spr_kowasi08;
_anon1 spr_kowasi09;
_anon1 spr_kowasi0a;
_anon1 spr_kowasi0b;
_anon1 spr_kowasi0c;
_anon1 spr_kowasi0d;
_anon1* pat_kowasi[14];
_anon0 actwk[128];

void kowasi(_anon0* pActwk);
void m_init(_anon0* pActwk);
void m_wait(_anon0* pActwk);
void m_down(_anon0* pActwk);

// 
// Start address: 0x101ece0
void kowasi(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[3];
	// Line 96, Address: 0x101ece0, Func Offset: 0
	// Line 97, Address: 0x101ecec, Func Offset: 0xc
	// Line 104, Address: 0x101ed10, Func Offset: 0x30
	// Line 105, Address: 0x101ed4c, Func Offset: 0x6c
	// Func End, Address: 0x101ed5c, Func Offset: 0x7c
}

// 
// Start address: 0x101ed60
void m_init(_anon0* pActwk)
{
	// Line 113, Address: 0x101ed60, Func Offset: 0
	// Line 114, Address: 0x101ed6c, Func Offset: 0xc
	// Line 115, Address: 0x101ed7c, Func Offset: 0x1c
	// Line 116, Address: 0x101ed8c, Func Offset: 0x2c
	// Line 117, Address: 0x101ed98, Func Offset: 0x38
	// Line 118, Address: 0x101eda4, Func Offset: 0x44
	// Line 119, Address: 0x101edb0, Func Offset: 0x50
	// Line 120, Address: 0x101edbc, Func Offset: 0x5c
	// Line 121, Address: 0x101edc8, Func Offset: 0x68
	// Line 122, Address: 0x101edd4, Func Offset: 0x74
	// Line 123, Address: 0x101ede4, Func Offset: 0x84
	// Line 125, Address: 0x101edf4, Func Offset: 0x94
	// Line 126, Address: 0x101ee00, Func Offset: 0xa0
	// Func End, Address: 0x101ee10, Func Offset: 0xb0
}

// 
// Start address: 0x101ee10
void m_wait(_anon0* pActwk)
{
	_anon0* pActwk_w;
	_anon0* pPlayerwk;
	unsigned char* pTbl0pat;
	short* pTbl0dposi;
	int* pTbl0speed;
	int speedx;
	int i;
	unsigned char tbl0pat[64];
	short tbl0dposi[12];
	int tbl0speed[12];
	// Line 134, Address: 0x101ee10, Func Offset: 0
	// Line 143, Address: 0x101ee34, Func Offset: 0x24
	// Line 157, Address: 0x101ee68, Func Offset: 0x58
	// Line 170, Address: 0x101ee9c, Func Offset: 0x8c
	// Line 181, Address: 0x101eed0, Func Offset: 0xc0
	// Line 182, Address: 0x101eed8, Func Offset: 0xc8
	// Line 184, Address: 0x101eee8, Func Offset: 0xd8
	// Line 185, Address: 0x101eefc, Func Offset: 0xec
	// Line 186, Address: 0x101ef0c, Func Offset: 0xfc
	// Line 187, Address: 0x101ef18, Func Offset: 0x108
	// Line 188, Address: 0x101ef24, Func Offset: 0x114
	// Line 191, Address: 0x101ef2c, Func Offset: 0x11c
	// Line 192, Address: 0x101ef3c, Func Offset: 0x12c
	// Line 193, Address: 0x101ef48, Func Offset: 0x138
	// Line 194, Address: 0x101ef54, Func Offset: 0x144
	// Line 197, Address: 0x101ef5c, Func Offset: 0x14c
	// Line 198, Address: 0x101ef68, Func Offset: 0x158
	// Line 199, Address: 0x101ef70, Func Offset: 0x160
	// Line 200, Address: 0x101ef90, Func Offset: 0x180
	// Line 202, Address: 0x101efac, Func Offset: 0x19c
	// Line 203, Address: 0x101efb4, Func Offset: 0x1a4
	// Line 204, Address: 0x101efb8, Func Offset: 0x1a8
	// Line 205, Address: 0x101efbc, Func Offset: 0x1ac
	// Line 207, Address: 0x101efc8, Func Offset: 0x1b8
	// Line 209, Address: 0x101efd0, Func Offset: 0x1c0
	// Line 210, Address: 0x101efe4, Func Offset: 0x1d4
	// Line 211, Address: 0x101eff4, Func Offset: 0x1e4
	// Line 212, Address: 0x101f004, Func Offset: 0x1f4
	// Line 213, Address: 0x101f014, Func Offset: 0x204
	// Line 214, Address: 0x101f024, Func Offset: 0x214
	// Line 215, Address: 0x101f034, Func Offset: 0x224
	// Line 216, Address: 0x101f044, Func Offset: 0x234
	// Line 217, Address: 0x101f054, Func Offset: 0x244
	// Line 219, Address: 0x101f064, Func Offset: 0x254
	// Line 220, Address: 0x101f070, Func Offset: 0x260
	// Line 221, Address: 0x101f07c, Func Offset: 0x26c
	// Line 222, Address: 0x101f088, Func Offset: 0x278
	// Line 223, Address: 0x101f09c, Func Offset: 0x28c
	// Line 224, Address: 0x101f0b8, Func Offset: 0x2a8
	// Line 225, Address: 0x101f0d4, Func Offset: 0x2c4
	// Line 226, Address: 0x101f0e0, Func Offset: 0x2d0
	// Line 227, Address: 0x101f0f8, Func Offset: 0x2e8
	// Line 228, Address: 0x101f110, Func Offset: 0x300
	// Line 229, Address: 0x101f11c, Func Offset: 0x30c
	// Line 230, Address: 0x101f12c, Func Offset: 0x31c
	// Line 231, Address: 0x101f138, Func Offset: 0x328
	// Func End, Address: 0x101f160, Func Offset: 0x350
}

// 
// Start address: 0x101f160
void m_down(_anon0* pActwk)
{
	_anon0* pPlayerwk;
	short y;
	// Line 238, Address: 0x101f160, Func Offset: 0
	// Line 242, Address: 0x101f174, Func Offset: 0x14
	// Line 243, Address: 0x101f18c, Func Offset: 0x2c
	// Line 244, Address: 0x101f1a8, Func Offset: 0x48
	// Line 245, Address: 0x101f1c4, Func Offset: 0x64
	// Line 246, Address: 0x101f1cc, Func Offset: 0x6c
	// Line 247, Address: 0x101f1d8, Func Offset: 0x78
	// Line 248, Address: 0x101f1ec, Func Offset: 0x8c
	// Line 249, Address: 0x101f214, Func Offset: 0xb4
	// Line 250, Address: 0x101f220, Func Offset: 0xc0
	// Func End, Address: 0x101f238, Func Offset: 0xd8
}

