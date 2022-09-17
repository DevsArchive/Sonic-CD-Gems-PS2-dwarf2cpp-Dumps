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
typedef void(*type_3)(_anon1*)[5];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon0* type_6[1];
typedef _anon1 type_7[128];

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

_anon0 pat00;
_anon0* pat_ukidai[1];
short watermoveposi;
short waterposi_m;
short waterposi;
_anon1 actwk[128];
unsigned char water_flag;
unsigned char waterspeed;

void ukidai(_anon1* pActwk);
void a_init(_anon1* pActwk);
void a_moving(_anon1* pActwk);
void a_wait(_anon1* pActwk);
void a_move(_anon1* pActwk);
void a_move1(_anon1* pActwk);

// 
// Start address: 0x102d1b0
void ukidai(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[5];
	// Line 55, Address: 0x102d1b0, Func Offset: 0
	// Line 56, Address: 0x102d1bc, Func Offset: 0xc
	// Line 65, Address: 0x102d1e8, Func Offset: 0x38
	// Line 66, Address: 0x102d224, Func Offset: 0x74
	// Line 67, Address: 0x102d230, Func Offset: 0x80
	// Line 68, Address: 0x102d244, Func Offset: 0x94
	// Func End, Address: 0x102d254, Func Offset: 0xa4
}

// 
// Start address: 0x102d260
void a_init(_anon1* pActwk)
{
	// Line 73, Address: 0x102d260, Func Offset: 0
	// Line 74, Address: 0x102d26c, Func Offset: 0xc
	// Line 75, Address: 0x102d27c, Func Offset: 0x1c
	// Line 76, Address: 0x102d28c, Func Offset: 0x2c
	// Line 77, Address: 0x102d298, Func Offset: 0x38
	// Line 78, Address: 0x102d2a4, Func Offset: 0x44
	// Line 79, Address: 0x102d2b0, Func Offset: 0x50
	// Line 80, Address: 0x102d2bc, Func Offset: 0x5c
	// Line 81, Address: 0x102d2c8, Func Offset: 0x68
	// Line 82, Address: 0x102d2d8, Func Offset: 0x78
	// Line 84, Address: 0x102d2e8, Func Offset: 0x88
	// Line 86, Address: 0x102d304, Func Offset: 0xa4
	// Line 88, Address: 0x102d320, Func Offset: 0xc0
	// Line 89, Address: 0x102d32c, Func Offset: 0xcc
	// Line 92, Address: 0x102d334, Func Offset: 0xd4
	// Line 93, Address: 0x102d340, Func Offset: 0xe0
	// Func End, Address: 0x102d350, Func Offset: 0xf0
}

// 
// Start address: 0x102d350
void a_moving(_anon1* pActwk)
{
	short d0;
	// Line 98, Address: 0x102d350, Func Offset: 0
	// Line 101, Address: 0x102d360, Func Offset: 0x10
	// Line 103, Address: 0x102d370, Func Offset: 0x20
	// Line 104, Address: 0x102d380, Func Offset: 0x30
	// Line 106, Address: 0x102d3a0, Func Offset: 0x50
	// Line 108, Address: 0x102d3b4, Func Offset: 0x64
	// Line 109, Address: 0x102d3c0, Func Offset: 0x70
	// Line 110, Address: 0x102d3cc, Func Offset: 0x7c
	// Line 112, Address: 0x102d3d4, Func Offset: 0x84
	// Line 114, Address: 0x102d3e8, Func Offset: 0x98
	// Line 115, Address: 0x102d3f4, Func Offset: 0xa4
	// Line 116, Address: 0x102d400, Func Offset: 0xb0
	// Line 118, Address: 0x102d408, Func Offset: 0xb8
	// Line 120, Address: 0x102d414, Func Offset: 0xc4
	// Func End, Address: 0x102d428, Func Offset: 0xd8
}

// 
// Start address: 0x102d430
void a_wait(_anon1* pActwk)
{
	// Line 125, Address: 0x102d430, Func Offset: 0
	// Line 126, Address: 0x102d43c, Func Offset: 0xc
	// Line 128, Address: 0x102d44c, Func Offset: 0x1c
	// Line 130, Address: 0x102d468, Func Offset: 0x38
	// Line 131, Address: 0x102d478, Func Offset: 0x48
	// Line 132, Address: 0x102d488, Func Offset: 0x58
	// Line 134, Address: 0x102d494, Func Offset: 0x64
	// Func End, Address: 0x102d4a4, Func Offset: 0x74
}

// 
// Start address: 0x102d4b0
void a_move(_anon1* pActwk)
{
	_anon7 d0;
	// Line 139, Address: 0x102d4b0, Func Offset: 0
	// Line 142, Address: 0x102d4bc, Func Offset: 0xc
	// Line 143, Address: 0x102d4cc, Func Offset: 0x1c
	// Line 144, Address: 0x102d4d8, Func Offset: 0x28
	// Line 145, Address: 0x102d4e4, Func Offset: 0x34
	// Line 147, Address: 0x102d50c, Func Offset: 0x5c
	// Line 148, Address: 0x102d518, Func Offset: 0x68
	// Func End, Address: 0x102d528, Func Offset: 0x78
}

// 
// Start address: 0x102d530
void a_move1(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	int a6;
	short d1;
	short d2;
	short d3;
	short d4;
	short d5;
	short d6;
	// Line 153, Address: 0x102d530, Func Offset: 0
	// Line 161, Address: 0x102d55c, Func Offset: 0x2c
	// Line 163, Address: 0x102d56c, Func Offset: 0x3c
	// Line 164, Address: 0x102d574, Func Offset: 0x44
	// Line 165, Address: 0x102d588, Func Offset: 0x58
	// Line 166, Address: 0x102d598, Func Offset: 0x68
	// Line 167, Address: 0x102d5ac, Func Offset: 0x7c
	// Line 169, Address: 0x102d5bc, Func Offset: 0x8c
	// Line 170, Address: 0x102d5c0, Func Offset: 0x90
	// Line 171, Address: 0x102d5cc, Func Offset: 0x9c
	// Line 172, Address: 0x102d5d0, Func Offset: 0xa0
	// Line 173, Address: 0x102d5ec, Func Offset: 0xbc
	// Line 175, Address: 0x102d5fc, Func Offset: 0xcc
	// Line 176, Address: 0x102d600, Func Offset: 0xd0
	// Line 177, Address: 0x102d60c, Func Offset: 0xdc
	// Line 178, Address: 0x102d618, Func Offset: 0xe8
	// Line 180, Address: 0x102d624, Func Offset: 0xf4
	// Line 181, Address: 0x102d630, Func Offset: 0x100
	// Line 182, Address: 0x102d638, Func Offset: 0x108
	// Line 183, Address: 0x102d640, Func Offset: 0x110
	// Line 184, Address: 0x102d648, Func Offset: 0x118
	// Line 185, Address: 0x102d658, Func Offset: 0x128
	// Line 188, Address: 0x102d668, Func Offset: 0x138
	// Line 189, Address: 0x102d674, Func Offset: 0x144
	// Line 190, Address: 0x102d684, Func Offset: 0x154
	// Line 191, Address: 0x102d698, Func Offset: 0x168
	// Line 193, Address: 0x102d6ac, Func Offset: 0x17c
	// Line 195, Address: 0x102d6b8, Func Offset: 0x188
	// Line 197, Address: 0x102d6c8, Func Offset: 0x198
	// Line 198, Address: 0x102d700, Func Offset: 0x1d0
	// Line 199, Address: 0x102d71c, Func Offset: 0x1ec
	// Line 200, Address: 0x102d72c, Func Offset: 0x1fc
	// Line 202, Address: 0x102d748, Func Offset: 0x218
	// Line 203, Address: 0x102d758, Func Offset: 0x228
	// Line 205, Address: 0x102d760, Func Offset: 0x230
	// Line 206, Address: 0x102d770, Func Offset: 0x240
	// Line 207, Address: 0x102d788, Func Offset: 0x258
	// Line 209, Address: 0x102d790, Func Offset: 0x260
	// Line 211, Address: 0x102d7a8, Func Offset: 0x278
	// Line 213, Address: 0x102d7b4, Func Offset: 0x284
	// Func End, Address: 0x102d7e4, Func Offset: 0x2b4
}

