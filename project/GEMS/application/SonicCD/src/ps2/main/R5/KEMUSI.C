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
typedef void(*type_3)(_anon1*)[5];
typedef _anon0* type_4[4];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
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

_anon0 kemusi_pat0;
_anon0 kemusi_pat1;
_anon0 kemusi_pat2;
_anon0 kemusi_pat3;
_anon0* pat_kemusi[4];
_anon1 actwk[128];

void kemusi(_anon1* pActwk);
void kemusi_init(_anon1* pActwk);
void kemusi_com(_anon1* pActwk, _anon1* pNewactwk);
void kemusi_fall(_anon1* pActwk);
void kemusi_stop(_anon1* pActwk);
void kemusi_move(_anon1* pActwk);
void kemusi_move1(_anon1* pActwk);
void kemusi_move1_rev(_anon1* pActwk);
void kemusi_move1_move(_anon1* pActwk);

// 
// Start address: 0x101ea70
void kemusi(_anon1* pActwk)
{
	_anon1* pActwk1;
	_anon1* pActwk2;
	_anon1* pActwk3;
	void(*kemusi_move_tbl)(_anon1*)[5];
	// Line 95, Address: 0x101ea70, Func Offset: 0
	// Line 98, Address: 0x101ea88, Func Offset: 0x18
	// Line 106, Address: 0x101eab4, Func Offset: 0x44
	// Line 107, Address: 0x101eac4, Func Offset: 0x54
	// Line 110, Address: 0x101ead8, Func Offset: 0x68
	// Line 111, Address: 0x101eae8, Func Offset: 0x78
	// Line 112, Address: 0x101eb10, Func Offset: 0xa0
	// Line 113, Address: 0x101eb38, Func Offset: 0xc8
	// Line 114, Address: 0x101eb60, Func Offset: 0xf0
	// Line 115, Address: 0x101eb9c, Func Offset: 0x12c
	// Line 116, Address: 0x101eba8, Func Offset: 0x138
	// Line 120, Address: 0x101ebb0, Func Offset: 0x140
	// Line 121, Address: 0x101ebec, Func Offset: 0x17c
	// Line 122, Address: 0x101ebf8, Func Offset: 0x188
	// Line 123, Address: 0x101ec08, Func Offset: 0x198
	// Line 125, Address: 0x101ec1c, Func Offset: 0x1ac
	// Func End, Address: 0x101ec38, Func Offset: 0x1c8
}

// 
// Start address: 0x101ec40
void kemusi_init(_anon1* pActwk)
{
	_anon1* pNewactwk;
	_anon1* pActwk1;
	_anon1* pActwk2;
	_anon1* pActwk3;
	unsigned char bD2;
	unsigned char bD3;
	unsigned char bD4;
	short wD0;
	short wD1;
	short wD5;
	short wD6;
	short i;
	// Line 134, Address: 0x101ec40, Func Offset: 0
	// Line 141, Address: 0x101ec70, Func Offset: 0x30
	// Line 142, Address: 0x101ec7c, Func Offset: 0x3c
	// Line 143, Address: 0x101ec88, Func Offset: 0x48
	// Line 144, Address: 0x101ec94, Func Offset: 0x54
	// Line 146, Address: 0x101eca0, Func Offset: 0x60
	// Line 147, Address: 0x101eca8, Func Offset: 0x68
	// Line 148, Address: 0x101ecb8, Func Offset: 0x78
	// Line 149, Address: 0x101ecc8, Func Offset: 0x88
	// Line 150, Address: 0x101ecd4, Func Offset: 0x94
	// Line 151, Address: 0x101ece0, Func Offset: 0xa0
	// Line 154, Address: 0x101ece8, Func Offset: 0xa8
	// Line 155, Address: 0x101ecf4, Func Offset: 0xb4
	// Line 158, Address: 0x101ed00, Func Offset: 0xc0
	// Line 159, Address: 0x101ed08, Func Offset: 0xc8
	// Line 161, Address: 0x101ed10, Func Offset: 0xd0
	// Line 162, Address: 0x101ed1c, Func Offset: 0xdc
	// Line 163, Address: 0x101ed28, Func Offset: 0xe8
	// Line 164, Address: 0x101ed38, Func Offset: 0xf8
	// Line 165, Address: 0x101ed48, Func Offset: 0x108
	// Line 166, Address: 0x101ed50, Func Offset: 0x110
	// Line 167, Address: 0x101ed58, Func Offset: 0x118
	// Line 168, Address: 0x101ed60, Func Offset: 0x120
	// Line 171, Address: 0x101ed68, Func Offset: 0x128
	// Line 172, Address: 0x101ed70, Func Offset: 0x130
	// Line 173, Address: 0x101ed78, Func Offset: 0x138
	// Line 176, Address: 0x101ed80, Func Offset: 0x140
	// Line 177, Address: 0x101ed88, Func Offset: 0x148
	// Line 178, Address: 0x101eda0, Func Offset: 0x160
	// Line 179, Address: 0x101edac, Func Offset: 0x16c
	// Line 181, Address: 0x101edb4, Func Offset: 0x174
	// Line 182, Address: 0x101edf8, Func Offset: 0x1b8
	// Line 183, Address: 0x101ee00, Func Offset: 0x1c0
	// Line 184, Address: 0x101ee0c, Func Offset: 0x1cc
	// Line 185, Address: 0x101ee14, Func Offset: 0x1d4
	// Line 186, Address: 0x101ee1c, Func Offset: 0x1dc
	// Line 187, Address: 0x101ee28, Func Offset: 0x1e8
	// Line 188, Address: 0x101ee34, Func Offset: 0x1f4
	// Line 189, Address: 0x101ee44, Func Offset: 0x204
	// Line 190, Address: 0x101ee54, Func Offset: 0x214
	// Line 191, Address: 0x101ee64, Func Offset: 0x224
	// Line 192, Address: 0x101ee74, Func Offset: 0x234
	// Line 193, Address: 0x101ee84, Func Offset: 0x244
	// Line 194, Address: 0x101ee90, Func Offset: 0x250
	// Line 195, Address: 0x101eea0, Func Offset: 0x260
	// Line 196, Address: 0x101eec8, Func Offset: 0x288
	// Line 197, Address: 0x101eef0, Func Offset: 0x2b0
	// Line 198, Address: 0x101ef18, Func Offset: 0x2d8
	// Line 201, Address: 0x101ef40, Func Offset: 0x300
	// Line 202, Address: 0x101ef74, Func Offset: 0x334
	// Line 203, Address: 0x101efa4, Func Offset: 0x364
	// Line 206, Address: 0x101efd4, Func Offset: 0x394
	// Line 207, Address: 0x101f008, Func Offset: 0x3c8
	// Line 208, Address: 0x101f038, Func Offset: 0x3f8
	// Line 211, Address: 0x101f068, Func Offset: 0x428
	// Line 212, Address: 0x101f09c, Func Offset: 0x45c
	// Line 213, Address: 0x101f0cc, Func Offset: 0x48c
	// Line 214, Address: 0x101f0fc, Func Offset: 0x4bc
	// Func End, Address: 0x101f130, Func Offset: 0x4f0
}

// 
// Start address: 0x101f130
void kemusi_com(_anon1* pActwk, _anon1* pNewactwk)
{
	// Line 217, Address: 0x101f130, Func Offset: 0
	// Line 218, Address: 0x101f13c, Func Offset: 0xc
	// Line 219, Address: 0x101f148, Func Offset: 0x18
	// Line 220, Address: 0x101f158, Func Offset: 0x28
	// Line 221, Address: 0x101f164, Func Offset: 0x34
	// Line 222, Address: 0x101f170, Func Offset: 0x40
	// Line 223, Address: 0x101f17c, Func Offset: 0x4c
	// Line 224, Address: 0x101f188, Func Offset: 0x58
	// Line 225, Address: 0x101f198, Func Offset: 0x68
	// Line 226, Address: 0x101f1a8, Func Offset: 0x78
	// Func End, Address: 0x101f1b4, Func Offset: 0x84
}

// 
// Start address: 0x101f1c0
void kemusi_fall(_anon1* pActwk)
{
	short wD1;
	_anon1* pSubactwk;
	// Line 235, Address: 0x101f1c0, Func Offset: 0
	// Line 239, Address: 0x101f1d4, Func Offset: 0x14
	// Line 240, Address: 0x101f1e4, Func Offset: 0x24
	// Line 241, Address: 0x101f210, Func Offset: 0x50
	// Line 242, Address: 0x101f220, Func Offset: 0x60
	// Line 243, Address: 0x101f230, Func Offset: 0x70
	// Line 244, Address: 0x101f234, Func Offset: 0x74
	// Line 245, Address: 0x101f244, Func Offset: 0x84
	// Line 247, Address: 0x101f26c, Func Offset: 0xac
	// Line 250, Address: 0x101f278, Func Offset: 0xb8
	// Func End, Address: 0x101f290, Func Offset: 0xd0
}

// 
// Start address: 0x101f290
void kemusi_stop(_anon1* pActwk)
{
	// Line 259, Address: 0x101f290, Func Offset: 0
	// Line 260, Address: 0x101f29c, Func Offset: 0xc
	// Line 261, Address: 0x101f2ac, Func Offset: 0x1c
	// Line 262, Address: 0x101f2c8, Func Offset: 0x38
	// Line 263, Address: 0x101f2d8, Func Offset: 0x48
	// Line 264, Address: 0x101f30c, Func Offset: 0x7c
	// Line 265, Address: 0x101f340, Func Offset: 0xb0
	// Line 266, Address: 0x101f374, Func Offset: 0xe4
	// Line 270, Address: 0x101f380, Func Offset: 0xf0
	// Func End, Address: 0x101f390, Func Offset: 0x100
}

// 
// Start address: 0x101f390
void kemusi_move(_anon1* pActwk)
{
	// Line 279, Address: 0x101f390, Func Offset: 0
	// Line 280, Address: 0x101f39c, Func Offset: 0xc
	// Line 281, Address: 0x101f3ac, Func Offset: 0x1c
	// Line 282, Address: 0x101f3bc, Func Offset: 0x2c
	// Line 283, Address: 0x101f3cc, Func Offset: 0x3c
	// Line 284, Address: 0x101f3dc, Func Offset: 0x4c
	// Line 285, Address: 0x101f3ec, Func Offset: 0x5c
	// Line 287, Address: 0x101f3fc, Func Offset: 0x6c
	// Line 288, Address: 0x101f408, Func Offset: 0x78
	// Func End, Address: 0x101f418, Func Offset: 0x88
}

// 
// Start address: 0x101f420
void kemusi_move1(_anon1* pActwk)
{
	short wD0;
	// Line 297, Address: 0x101f420, Func Offset: 0
	// Line 300, Address: 0x101f430, Func Offset: 0x10
	// Line 301, Address: 0x101f458, Func Offset: 0x38
	// Line 302, Address: 0x101f468, Func Offset: 0x48
	// Line 303, Address: 0x101f474, Func Offset: 0x54
	// Line 304, Address: 0x101f4a8, Func Offset: 0x88
	// Line 305, Address: 0x101f4b8, Func Offset: 0x98
	// Line 306, Address: 0x101f4c4, Func Offset: 0xa4
	// Line 307, Address: 0x101f4d8, Func Offset: 0xb8
	// Line 308, Address: 0x101f4e4, Func Offset: 0xc4
	// Line 310, Address: 0x101f4ec, Func Offset: 0xcc
	// Line 312, Address: 0x101f500, Func Offset: 0xe0
	// Line 313, Address: 0x101f518, Func Offset: 0xf8
	// Line 314, Address: 0x101f524, Func Offset: 0x104
	// Line 316, Address: 0x101f52c, Func Offset: 0x10c
	// Line 319, Address: 0x101f53c, Func Offset: 0x11c
	// Line 320, Address: 0x101f55c, Func Offset: 0x13c
	// Line 322, Address: 0x101f56c, Func Offset: 0x14c
	// Func End, Address: 0x101f580, Func Offset: 0x160
}

// 
// Start address: 0x101f580
void kemusi_move1_rev(_anon1* pActwk)
{
	// Line 325, Address: 0x101f580, Func Offset: 0
	// Line 326, Address: 0x101f58c, Func Offset: 0xc
	// Line 327, Address: 0x101f59c, Func Offset: 0x1c
	// Line 328, Address: 0x101f5ac, Func Offset: 0x2c
	// Line 329, Address: 0x101f5b8, Func Offset: 0x38
	// Line 330, Address: 0x101f5c4, Func Offset: 0x44
	// Func End, Address: 0x101f5d4, Func Offset: 0x54
}

// 
// Start address: 0x101f5e0
void kemusi_move1_move(_anon1* pActwk)
{
	// Line 333, Address: 0x101f5e0, Func Offset: 0
	// Line 334, Address: 0x101f5e8, Func Offset: 0x8
	// Line 335, Address: 0x101f600, Func Offset: 0x20
	// Line 337, Address: 0x101f618, Func Offset: 0x38
	// Line 338, Address: 0x101f628, Func Offset: 0x48
	// Func End, Address: 0x101f634, Func Offset: 0x54
}

