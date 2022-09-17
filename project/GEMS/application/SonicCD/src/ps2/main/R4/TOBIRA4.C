typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon0*);
typedef void(*type_4)(_anon0*);
typedef void(*type_12)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon0*)[5];
typedef void(*type_5)(_anon0*)[4];
typedef unsigned char type_6[20];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef _anon1* type_9[3];
typedef _anon0 type_10[128];
typedef unsigned char type_11[32];
typedef void(*type_13)(_anon0*)[5];

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

_anon1 pat0;
_anon1 pat1;
_anon1 pat2;
_anon1* tobira4pat[3];
_anon0 actwk[128];
unsigned char switchflag[32];

void tobira4(_anon0* pActwk);
void tobira4_init(_anon0* pActwk);
void tobira4_move(_anon0* pActwk);
void cl_type1(_anon0* pActwk);
void cl_type2(_anon0* pActwk);
void tobira4_chek(_anon0* pActwk);
void tobira4_clse(_anon0* pActwk);
void type1(_anon0* pActwk);
void type2(_anon0* pActwk);
void type3(_anon0* pActwk);
void type4(_anon0* pActwk);
void tobira4_cnt(_anon0* pActwk);
void tobira4_sub(_anon0* pActwk);

// 
// Start address: 0x101cf50
void tobira4(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[4];
	// Line 71, Address: 0x101cf50, Func Offset: 0
	// Line 72, Address: 0x101cf5c, Func Offset: 0xc
	// Line 80, Address: 0x101cf88, Func Offset: 0x38
	// Line 81, Address: 0x101cfc4, Func Offset: 0x74
	// Line 82, Address: 0x101cfd0, Func Offset: 0x80
	// Line 83, Address: 0x101cfdc, Func Offset: 0x8c
	// Func End, Address: 0x101cfec, Func Offset: 0x9c
}

// 
// Start address: 0x101cff0
void tobira4_init(_anon0* pActwk)
{
	unsigned char d0;
	unsigned char d1;
	unsigned char tbl[20];
	// Line 88, Address: 0x101cff0, Func Offset: 0
	// Line 90, Address: 0x101d000, Func Offset: 0x10
	// Line 99, Address: 0x101d034, Func Offset: 0x44
	// Line 100, Address: 0x101d044, Func Offset: 0x54
	// Line 101, Address: 0x101d054, Func Offset: 0x64
	// Line 102, Address: 0x101d060, Func Offset: 0x70
	// Line 103, Address: 0x101d06c, Func Offset: 0x7c
	// Line 104, Address: 0x101d07c, Func Offset: 0x8c
	// Line 105, Address: 0x101d08c, Func Offset: 0x9c
	// Line 107, Address: 0x101d09c, Func Offset: 0xac
	// Line 108, Address: 0x101d0ac, Func Offset: 0xbc
	// Line 109, Address: 0x101d0b4, Func Offset: 0xc4
	// Line 110, Address: 0x101d0bc, Func Offset: 0xcc
	// Line 111, Address: 0x101d0c4, Func Offset: 0xd4
	// Line 112, Address: 0x101d0cc, Func Offset: 0xdc
	// Line 113, Address: 0x101d0d4, Func Offset: 0xe4
	// Line 114, Address: 0x101d0dc, Func Offset: 0xec
	// Line 115, Address: 0x101d0f0, Func Offset: 0x100
	// Line 116, Address: 0x101d108, Func Offset: 0x118
	// Line 117, Address: 0x101d120, Func Offset: 0x130
	// Line 118, Address: 0x101d138, Func Offset: 0x148
	// Func End, Address: 0x101d14c, Func Offset: 0x15c
}

// 
// Start address: 0x101d150
void tobira4_move(_anon0* pActwk)
{
	unsigned char d0;
	// Line 123, Address: 0x101d150, Func Offset: 0
	// Line 126, Address: 0x101d160, Func Offset: 0x10
	// Line 127, Address: 0x101d16c, Func Offset: 0x1c
	// Line 129, Address: 0x101d190, Func Offset: 0x40
	// Line 130, Address: 0x101d19c, Func Offset: 0x4c
	// Line 133, Address: 0x101d1a4, Func Offset: 0x54
	// Line 136, Address: 0x101d1ac, Func Offset: 0x5c
	// Line 138, Address: 0x101d1c4, Func Offset: 0x74
	// Line 140, Address: 0x101d1d4, Func Offset: 0x84
	// Line 143, Address: 0x101d1dc, Func Offset: 0x8c
	// Line 144, Address: 0x101d1ec, Func Offset: 0x9c
	// Line 145, Address: 0x101d1fc, Func Offset: 0xac
	// Line 146, Address: 0x101d208, Func Offset: 0xb8
	// Line 148, Address: 0x101d21c, Func Offset: 0xcc
	// Line 150, Address: 0x101d234, Func Offset: 0xe4
	// Line 152, Address: 0x101d254, Func Offset: 0x104
	// Line 155, Address: 0x101d264, Func Offset: 0x114
	// Func End, Address: 0x101d278, Func Offset: 0x128
}

// 
// Start address: 0x101d280
void cl_type1(_anon0* pActwk)
{
	_anon0* pPlayerwk;
	short d0;
	// Line 160, Address: 0x101d280, Func Offset: 0
	// Line 164, Address: 0x101d290, Func Offset: 0x10
	// Line 165, Address: 0x101d298, Func Offset: 0x18
	// Line 166, Address: 0x101d2a8, Func Offset: 0x28
	// Line 168, Address: 0x101d2cc, Func Offset: 0x4c
	// Line 169, Address: 0x101d2dc, Func Offset: 0x5c
	// Line 170, Address: 0x101d2ec, Func Offset: 0x6c
	// Line 171, Address: 0x101d310, Func Offset: 0x90
	// Line 172, Address: 0x101d324, Func Offset: 0xa4
	// Line 173, Address: 0x101d330, Func Offset: 0xb0
	// Line 174, Address: 0x101d344, Func Offset: 0xc4
	// Line 177, Address: 0x101d34c, Func Offset: 0xcc
	// Line 178, Address: 0x101d368, Func Offset: 0xe8
	// Line 179, Address: 0x101d378, Func Offset: 0xf8
	// Line 180, Address: 0x101d398, Func Offset: 0x118
	// Line 181, Address: 0x101d3a8, Func Offset: 0x128
	// Line 183, Address: 0x101d3bc, Func Offset: 0x13c
	// Line 184, Address: 0x101d3cc, Func Offset: 0x14c
	// Func End, Address: 0x101d3e0, Func Offset: 0x160
}

// 
// Start address: 0x101d3e0
void cl_type2(_anon0* pActwk)
{
	_anon0* pPlayerwk;
	short d0;
	// Line 189, Address: 0x101d3e0, Func Offset: 0
	// Line 193, Address: 0x101d3f0, Func Offset: 0x10
	// Line 194, Address: 0x101d3f8, Func Offset: 0x18
	// Line 195, Address: 0x101d408, Func Offset: 0x28
	// Line 197, Address: 0x101d42c, Func Offset: 0x4c
	// Line 198, Address: 0x101d43c, Func Offset: 0x5c
	// Line 199, Address: 0x101d44c, Func Offset: 0x6c
	// Line 200, Address: 0x101d470, Func Offset: 0x90
	// Line 201, Address: 0x101d484, Func Offset: 0xa4
	// Line 202, Address: 0x101d490, Func Offset: 0xb0
	// Line 203, Address: 0x101d4a4, Func Offset: 0xc4
	// Line 206, Address: 0x101d4ac, Func Offset: 0xcc
	// Line 207, Address: 0x101d4c8, Func Offset: 0xe8
	// Line 208, Address: 0x101d4d8, Func Offset: 0xf8
	// Line 209, Address: 0x101d4fc, Func Offset: 0x11c
	// Line 210, Address: 0x101d510, Func Offset: 0x130
	// Line 212, Address: 0x101d524, Func Offset: 0x144
	// Line 213, Address: 0x101d534, Func Offset: 0x154
	// Func End, Address: 0x101d548, Func Offset: 0x168
}

// 
// Start address: 0x101d550
void tobira4_chek(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[5];
	// Line 218, Address: 0x101d550, Func Offset: 0
	// Line 219, Address: 0x101d55c, Func Offset: 0xc
	// Line 228, Address: 0x101d588, Func Offset: 0x38
	// Line 229, Address: 0x101d5ac, Func Offset: 0x5c
	// Line 230, Address: 0x101d5c0, Func Offset: 0x70
	// Func End, Address: 0x101d5d0, Func Offset: 0x80
}

// 
// Start address: 0x101d5d0
void tobira4_clse(_anon0* pActwk)
{
	// Line 235, Address: 0x101d5d0, Func Offset: 0
	// Line 236, Address: 0x101d5dc, Func Offset: 0xc
	// Line 237, Address: 0x101d5e8, Func Offset: 0x18
	// Line 238, Address: 0x101d5f4, Func Offset: 0x24
	// Line 240, Address: 0x101d608, Func Offset: 0x38
	// Line 242, Address: 0x101d614, Func Offset: 0x44
	// Line 243, Address: 0x101d628, Func Offset: 0x58
	// Func End, Address: 0x101d638, Func Offset: 0x68
}

// 
// Start address: 0x101d640
void type1(_anon0* pActwk)
{
	short d0;
	// Line 248, Address: 0x101d640, Func Offset: 0
	// Line 251, Address: 0x101d650, Func Offset: 0x10
	// Line 252, Address: 0x101d65c, Func Offset: 0x1c
	// Line 253, Address: 0x101d678, Func Offset: 0x38
	// Line 254, Address: 0x101d684, Func Offset: 0x44
	// Line 255, Address: 0x101d698, Func Offset: 0x58
	// Line 256, Address: 0x101d6a0, Func Offset: 0x60
	// Func End, Address: 0x101d6b4, Func Offset: 0x74
}

// 
// Start address: 0x101d6c0
void type2(_anon0* pActwk)
{
	short d0;
	// Line 261, Address: 0x101d6c0, Func Offset: 0
	// Line 264, Address: 0x101d6d0, Func Offset: 0x10
	// Line 265, Address: 0x101d6dc, Func Offset: 0x1c
	// Line 266, Address: 0x101d6f8, Func Offset: 0x38
	// Line 267, Address: 0x101d70c, Func Offset: 0x4c
	// Line 268, Address: 0x101d714, Func Offset: 0x54
	// Func End, Address: 0x101d728, Func Offset: 0x68
}

// 
// Start address: 0x101d730
void type3(_anon0* pActwk)
{
	short d0;
	// Line 273, Address: 0x101d730, Func Offset: 0
	// Line 276, Address: 0x101d740, Func Offset: 0x10
	// Line 277, Address: 0x101d74c, Func Offset: 0x1c
	// Line 278, Address: 0x101d768, Func Offset: 0x38
	// Line 279, Address: 0x101d774, Func Offset: 0x44
	// Line 280, Address: 0x101d788, Func Offset: 0x58
	// Line 281, Address: 0x101d790, Func Offset: 0x60
	// Func End, Address: 0x101d7a4, Func Offset: 0x74
}

// 
// Start address: 0x101d7b0
void type4(_anon0* pActwk)
{
	short d0;
	// Line 286, Address: 0x101d7b0, Func Offset: 0
	// Line 289, Address: 0x101d7c0, Func Offset: 0x10
	// Line 290, Address: 0x101d7cc, Func Offset: 0x1c
	// Line 291, Address: 0x101d7e8, Func Offset: 0x38
	// Line 292, Address: 0x101d7fc, Func Offset: 0x4c
	// Line 293, Address: 0x101d804, Func Offset: 0x54
	// Func End, Address: 0x101d818, Func Offset: 0x68
}

// 
// Start address: 0x101d820
void tobira4_cnt(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[5];
	// Line 298, Address: 0x101d820, Func Offset: 0
	// Line 299, Address: 0x101d82c, Func Offset: 0xc
	// Line 308, Address: 0x101d858, Func Offset: 0x38
	// Line 309, Address: 0x101d87c, Func Offset: 0x5c
	// Func End, Address: 0x101d88c, Func Offset: 0x6c
}

// 
// Start address: 0x101d890
void tobira4_sub(_anon0* pActwk)
{
	// Line 314, Address: 0x101d890, Func Offset: 0
	// Line 315, Address: 0x101d898, Func Offset: 0x8
	// Line 317, Address: 0x101d8a8, Func Offset: 0x18
	// Line 319, Address: 0x101d8c0, Func Offset: 0x30
	// Line 320, Address: 0x101d8d0, Func Offset: 0x40
	// Line 322, Address: 0x101d8d8, Func Offset: 0x48
	// Line 323, Address: 0x101d8e0, Func Offset: 0x50
	// Line 326, Address: 0x101d8e8, Func Offset: 0x58
	// Line 327, Address: 0x101d8f8, Func Offset: 0x68
	// Line 331, Address: 0x101d91c, Func Offset: 0x8c
	// Line 333, Address: 0x101d92c, Func Offset: 0x9c
	// Func End, Address: 0x101d938, Func Offset: 0xa8
}

