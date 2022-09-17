typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;

typedef void(*type_6)(_anon1*);

typedef _anon0* type_0[5];
typedef _anon8 type_1[20];
typedef _anon8 type_2[0];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
typedef void(*type_7)(_anon1*)[3];
typedef _anon2 type_8[4];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon8 spra[20];
		_anon8 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	short dx;
	short dy;
	int sx;
	int sy;
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

struct _anon8
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
_anon0* pat_iwa5[5];
_anon1 actwk[128];

void iwa5(_anon1* pActwk);
void m_init(_anon1* pActwk);
void m_wait(_anon1* pActwk);
void m_fall(_anon1* pActwk);

// 
// Start address: 0x1020a20
void iwa5(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 85, Address: 0x1020a20, Func Offset: 0
	// Line 86, Address: 0x1020a2c, Func Offset: 0xc
	// Line 93, Address: 0x1020a50, Func Offset: 0x30
	// Line 95, Address: 0x1020a6c, Func Offset: 0x4c
	// Line 96, Address: 0x1020a84, Func Offset: 0x64
	// Line 97, Address: 0x1020aa0, Func Offset: 0x80
	// Line 98, Address: 0x1020abc, Func Offset: 0x9c
	// Line 100, Address: 0x1020ac8, Func Offset: 0xa8
	// Line 101, Address: 0x1020af8, Func Offset: 0xd8
	// Line 102, Address: 0x1020b04, Func Offset: 0xe4
	// Line 105, Address: 0x1020b0c, Func Offset: 0xec
	// Line 106, Address: 0x1020b48, Func Offset: 0x128
	// Line 107, Address: 0x1020b54, Func Offset: 0x134
	// Line 109, Address: 0x1020b60, Func Offset: 0x140
	// Func End, Address: 0x1020b70, Func Offset: 0x150
}

// 
// Start address: 0x1020b70
void m_init(_anon1* pActwk)
{
	// Line 114, Address: 0x1020b70, Func Offset: 0
	// Line 115, Address: 0x1020b7c, Func Offset: 0xc
	// Line 116, Address: 0x1020b8c, Func Offset: 0x1c
	// Line 117, Address: 0x1020b9c, Func Offset: 0x2c
	// Line 118, Address: 0x1020ba4, Func Offset: 0x34
	// Line 119, Address: 0x1020bb0, Func Offset: 0x40
	// Line 120, Address: 0x1020bbc, Func Offset: 0x4c
	// Line 121, Address: 0x1020bc8, Func Offset: 0x58
	// Line 122, Address: 0x1020bd4, Func Offset: 0x64
	// Line 123, Address: 0x1020be0, Func Offset: 0x70
	// Line 125, Address: 0x1020bf0, Func Offset: 0x80
	// Line 126, Address: 0x1020bfc, Func Offset: 0x8c
	// Func End, Address: 0x1020c0c, Func Offset: 0x9c
}

// 
// Start address: 0x1020c10
void m_wait(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	short d0;
	short carry_flag;
	// Line 131, Address: 0x1020c10, Func Offset: 0
	// Line 136, Address: 0x1020c28, Func Offset: 0x18
	// Line 137, Address: 0x1020c30, Func Offset: 0x20
	// Line 140, Address: 0x1020c40, Func Offset: 0x30
	// Line 141, Address: 0x1020c4c, Func Offset: 0x3c
	// Line 142, Address: 0x1020c60, Func Offset: 0x50
	// Line 143, Address: 0x1020c6c, Func Offset: 0x5c
	// Line 145, Address: 0x1020c80, Func Offset: 0x70
	// Line 146, Address: 0x1020c8c, Func Offset: 0x7c
	// Line 147, Address: 0x1020c98, Func Offset: 0x88
	// Line 148, Address: 0x1020cac, Func Offset: 0x9c
	// Line 149, Address: 0x1020cb8, Func Offset: 0xa8
	// Line 151, Address: 0x1020ccc, Func Offset: 0xbc
	// Line 152, Address: 0x1020cd8, Func Offset: 0xc8
	// Line 155, Address: 0x1020ce0, Func Offset: 0xd0
	// Line 157, Address: 0x1020ce4, Func Offset: 0xd4
	// Line 160, Address: 0x1020cec, Func Offset: 0xdc
	// Line 162, Address: 0x1020cf0, Func Offset: 0xe0
	// Line 164, Address: 0x1020cf8, Func Offset: 0xe8
	// Line 165, Address: 0x1020d08, Func Offset: 0xf8
	// Line 168, Address: 0x1020d14, Func Offset: 0x104
	// Line 169, Address: 0x1020d24, Func Offset: 0x114
	// Func End, Address: 0x1020d40, Func Offset: 0x130
}

// 
// Start address: 0x1020d40
void m_fall(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	_anon1* pNewActwk;
	short a6;
	short d0;
	short d1;
	unsigned char d6;
	_anon2 tbl0[4];
	// Line 174, Address: 0x1020d40, Func Offset: 0
	// Line 180, Address: 0x1020d60, Func Offset: 0x20
	// Line 188, Address: 0x1020d94, Func Offset: 0x54
	// Line 191, Address: 0x1020da8, Func Offset: 0x68
	// Line 192, Address: 0x1020dc4, Func Offset: 0x84
	// Line 193, Address: 0x1020ddc, Func Offset: 0x9c
	// Line 196, Address: 0x1020df8, Func Offset: 0xb8
	// Line 197, Address: 0x1020e00, Func Offset: 0xc0
	// Line 198, Address: 0x1020e0c, Func Offset: 0xcc
	// Line 199, Address: 0x1020e20, Func Offset: 0xe0
	// Line 201, Address: 0x1020e34, Func Offset: 0xf4
	// Line 203, Address: 0x1020e40, Func Offset: 0x100
	// Line 206, Address: 0x1020e48, Func Offset: 0x108
	// Line 207, Address: 0x1020e4c, Func Offset: 0x10c
	// Line 210, Address: 0x1020e54, Func Offset: 0x114
	// Line 214, Address: 0x1020e68, Func Offset: 0x128
	// Line 215, Address: 0x1020e74, Func Offset: 0x134
	// Line 216, Address: 0x1020e80, Func Offset: 0x140
	// Line 217, Address: 0x1020e8c, Func Offset: 0x14c
	// Line 218, Address: 0x1020e98, Func Offset: 0x158
	// Line 219, Address: 0x1020ea4, Func Offset: 0x164
	// Line 220, Address: 0x1020eb4, Func Offset: 0x174
	// Line 221, Address: 0x1020ec4, Func Offset: 0x184
	// Line 222, Address: 0x1020ed4, Func Offset: 0x194
	// Line 223, Address: 0x1020ee4, Func Offset: 0x1a4
	// Line 224, Address: 0x1020ef4, Func Offset: 0x1b4
	// Line 225, Address: 0x1020f04, Func Offset: 0x1c4
	// Line 226, Address: 0x1020f28, Func Offset: 0x1e8
	// Line 227, Address: 0x1020f4c, Func Offset: 0x20c
	// Line 228, Address: 0x1020f5c, Func Offset: 0x21c
	// Line 229, Address: 0x1020f6c, Func Offset: 0x22c
	// Line 230, Address: 0x1020f94, Func Offset: 0x254
	// Line 231, Address: 0x1020fbc, Func Offset: 0x27c
	// Line 232, Address: 0x1020fc8, Func Offset: 0x288
	// Line 233, Address: 0x1020fdc, Func Offset: 0x29c
	// Line 235, Address: 0x1020ff0, Func Offset: 0x2b0
	// Line 236, Address: 0x1020ffc, Func Offset: 0x2bc
	// Line 237, Address: 0x1021004, Func Offset: 0x2c4
	// Line 238, Address: 0x1021010, Func Offset: 0x2d0
	// Line 239, Address: 0x1021018, Func Offset: 0x2d8
	// Line 241, Address: 0x1021030, Func Offset: 0x2f0
	// Line 243, Address: 0x102103c, Func Offset: 0x2fc
	// Func End, Address: 0x1021060, Func Offset: 0x320
}

