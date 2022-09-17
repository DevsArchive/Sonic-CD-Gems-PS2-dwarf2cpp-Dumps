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
typedef void(*type_3)(_anon1*)[7];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon0* type_6[2];
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

_anon0 pat00;
_anon0 pat01;
_anon0* pat_harid4[2];
void(*hari4_act_tbl)(_anon1*)[7];
_anon1 actwk[128];
short waterposi_m;

void harid4(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_wait(_anon1* pActwk);
void act_slide(_anon1* pActwk);
void act_slide1(_anon1* pActwk);
void act_down(_anon1* pActwk);
void act_down1(_anon1* pActwk);
void act_stop(_anon1* pActwk);

// 
// Start address: 0x101cf50
void harid4(_anon1* pActwk)
{
	// Line 119, Address: 0x101cf50, Func Offset: 0
	// Line 120, Address: 0x101cf5c, Func Offset: 0xc
	// Line 122, Address: 0x101cf78, Func Offset: 0x28
	// Line 123, Address: 0x101cfb4, Func Offset: 0x64
	// Line 126, Address: 0x101cfc0, Func Offset: 0x70
	// Line 127, Address: 0x101cfcc, Func Offset: 0x7c
	// Line 129, Address: 0x101cfd4, Func Offset: 0x84
	// Line 131, Address: 0x101d000, Func Offset: 0xb0
	// Line 132, Address: 0x101d044, Func Offset: 0xf4
	// Line 136, Address: 0x101d058, Func Offset: 0x108
	// Line 137, Address: 0x101d064, Func Offset: 0x114
	// Line 139, Address: 0x101d070, Func Offset: 0x120
	// Func End, Address: 0x101d080, Func Offset: 0x130
}

// 
// Start address: 0x101d080
void act_init(_anon1* pActwk)
{
	int xacwk;
	_anon1* pNewact;
	// Line 145, Address: 0x101d080, Func Offset: 0
	// Line 149, Address: 0x101d090, Func Offset: 0x10
	// Line 150, Address: 0x101d0a0, Func Offset: 0x20
	// Line 151, Address: 0x101d0b0, Func Offset: 0x30
	// Line 152, Address: 0x101d0bc, Func Offset: 0x3c
	// Line 153, Address: 0x101d0c8, Func Offset: 0x48
	// Line 154, Address: 0x101d0d4, Func Offset: 0x54
	// Line 155, Address: 0x101d0e0, Func Offset: 0x60
	// Line 156, Address: 0x101d0ec, Func Offset: 0x6c
	// Line 158, Address: 0x101d0fc, Func Offset: 0x7c
	// Line 159, Address: 0x101d128, Func Offset: 0xa8
	// Line 160, Address: 0x101d12c, Func Offset: 0xac
	// Line 161, Address: 0x101d134, Func Offset: 0xb4
	// Line 163, Address: 0x101d138, Func Offset: 0xb8
	// Line 165, Address: 0x101d140, Func Offset: 0xc0
	// Line 166, Address: 0x101d158, Func Offset: 0xd8
	// Line 167, Address: 0x101d168, Func Offset: 0xe8
	// Line 168, Address: 0x101d174, Func Offset: 0xf4
	// Line 169, Address: 0x101d184, Func Offset: 0x104
	// Line 170, Address: 0x101d1a8, Func Offset: 0x128
	// Line 171, Address: 0x101d1e0, Func Offset: 0x160
	// Line 172, Address: 0x101d218, Func Offset: 0x198
	// Line 173, Address: 0x101d224, Func Offset: 0x1a4
	// Line 174, Address: 0x101d234, Func Offset: 0x1b4
	// Line 175, Address: 0x101d244, Func Offset: 0x1c4
	// Line 176, Address: 0x101d250, Func Offset: 0x1d0
	// Line 177, Address: 0x101d25c, Func Offset: 0x1dc
	// Line 178, Address: 0x101d268, Func Offset: 0x1e8
	// Line 179, Address: 0x101d274, Func Offset: 0x1f4
	// Line 180, Address: 0x101d284, Func Offset: 0x204
	// Line 184, Address: 0x101d290, Func Offset: 0x210
	// Func End, Address: 0x101d2a4, Func Offset: 0x224
}

// 
// Start address: 0x101d2b0
void act_wait(_anon1* pActwk)
{
	short wk;
	// Line 190, Address: 0x101d2b0, Func Offset: 0
	// Line 193, Address: 0x101d2bc, Func Offset: 0xc
	// Line 194, Address: 0x101d2f0, Func Offset: 0x40
	// Line 195, Address: 0x101d2fc, Func Offset: 0x4c
	// Line 199, Address: 0x101d310, Func Offset: 0x60
	// Line 200, Address: 0x101d344, Func Offset: 0x94
	// Line 201, Address: 0x101d350, Func Offset: 0xa0
	// Line 206, Address: 0x101d364, Func Offset: 0xb4
	// Line 207, Address: 0x101d374, Func Offset: 0xc4
	// Line 208, Address: 0x101d380, Func Offset: 0xd0
	// Line 209, Address: 0x101d38c, Func Offset: 0xdc
	// Func End, Address: 0x101d39c, Func Offset: 0xec
}

// 
// Start address: 0x101d3a0
void act_slide(_anon1* pActwk)
{
	int spdwk;
	// Line 215, Address: 0x101d3a0, Func Offset: 0
	// Line 218, Address: 0x101d3ac, Func Offset: 0xc
	// Line 219, Address: 0x101d3b8, Func Offset: 0x18
	// Line 220, Address: 0x101d3c8, Func Offset: 0x28
	// Line 221, Address: 0x101d3fc, Func Offset: 0x5c
	// Line 223, Address: 0x101d414, Func Offset: 0x74
	// Line 224, Address: 0x101d43c, Func Offset: 0x9c
	// Line 225, Address: 0x101d44c, Func Offset: 0xac
	// Line 226, Address: 0x101d458, Func Offset: 0xb8
	// Line 228, Address: 0x101d464, Func Offset: 0xc4
	// Func End, Address: 0x101d474, Func Offset: 0xd4
}

// 
// Start address: 0x101d480
void act_slide1(_anon1* pActwk)
{
	// Line 234, Address: 0x101d480, Func Offset: 0
	// Line 235, Address: 0x101d488, Func Offset: 0x8
	// Line 236, Address: 0x101d4b0, Func Offset: 0x30
	// Line 238, Address: 0x101d4c0, Func Offset: 0x40
	// Func End, Address: 0x101d4cc, Func Offset: 0x4c
}

// 
// Start address: 0x101d4d0
void act_down(_anon1* pActwk)
{
	int spdwk;
	short ret;
	// Line 244, Address: 0x101d4d0, Func Offset: 0
	// Line 248, Address: 0x101d4e4, Func Offset: 0x14
	// Line 249, Address: 0x101d4f0, Func Offset: 0x20
	// Line 250, Address: 0x101d500, Func Offset: 0x30
	// Line 251, Address: 0x101d534, Func Offset: 0x64
	// Line 253, Address: 0x101d554, Func Offset: 0x84
	// Line 254, Address: 0x101d580, Func Offset: 0xb0
	// Line 255, Address: 0x101d590, Func Offset: 0xc0
	// Line 256, Address: 0x101d5a0, Func Offset: 0xd0
	// Line 257, Address: 0x101d5a8, Func Offset: 0xd8
	// Line 259, Address: 0x101d5b8, Func Offset: 0xe8
	// Line 261, Address: 0x101d5e8, Func Offset: 0x118
	// Func End, Address: 0x101d600, Func Offset: 0x130
}

// 
// Start address: 0x101d600
void act_down1(_anon1* pActwk)
{
	int spdwk;
	// Line 267, Address: 0x101d600, Func Offset: 0
	// Line 270, Address: 0x101d60c, Func Offset: 0xc
	// Line 271, Address: 0x101d618, Func Offset: 0x18
	// Line 273, Address: 0x101d628, Func Offset: 0x28
	// Line 274, Address: 0x101d648, Func Offset: 0x48
	// Line 276, Address: 0x101d658, Func Offset: 0x58
	// Func End, Address: 0x101d668, Func Offset: 0x68
}

// 
// Start address: 0x101d670
void act_stop(_anon1* pActwk)
{
	// Line 282, Address: 0x101d670, Func Offset: 0
	// Line 284, Address: 0x101d678, Func Offset: 0x8
	// Line 285, Address: 0x101d680, Func Offset: 0x10
	// Func End, Address: 0x101d68c, Func Offset: 0x1c
}

