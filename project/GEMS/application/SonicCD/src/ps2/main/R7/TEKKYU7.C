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
typedef short type_4[24];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef short type_7[3];
typedef _anon0* type_8[1];

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

_anon0 tekkyu7_pat0;
_anon0* pat_tekkyu7[1];
unsigned char time_flag;

void tekkyu7(_anon1* pActwk);
void tekkyu7_init(_anon1* pActwk);
void tekkyu7_move(_anon1* pActwk);
void tekkyu7_stop(_anon1* pActwk);

// 
// Start address: 0x101fb40
void tekkyu7(_anon1* pActwk)
{
	void(*tekkyu7_acttbl)(_anon1*)[3];
	// Line 71, Address: 0x101fb40, Func Offset: 0
	// Line 72, Address: 0x101fb4c, Func Offset: 0xc
	// Line 78, Address: 0x101fb70, Func Offset: 0x30
	// Line 79, Address: 0x101fbac, Func Offset: 0x6c
	// Line 80, Address: 0x101fbb8, Func Offset: 0x78
	// Line 81, Address: 0x101fbcc, Func Offset: 0x8c
	// Func End, Address: 0x101fbdc, Func Offset: 0x9c
}

// 
// Start address: 0x101fbe0
void tekkyu7_init(_anon1* pActwk)
{
	short tekkyu7_tbl0[24];
	short tekkyu7_tbl1[3];
	// Line 90, Address: 0x101fbe0, Func Offset: 0
	// Line 91, Address: 0x101fbec, Func Offset: 0xc
	// Line 100, Address: 0x101fc20, Func Offset: 0x40
	// Line 106, Address: 0x101fc44, Func Offset: 0x64
	// Line 107, Address: 0x101fc54, Func Offset: 0x74
	// Line 108, Address: 0x101fc64, Func Offset: 0x84
	// Line 109, Address: 0x101fc70, Func Offset: 0x90
	// Line 110, Address: 0x101fc7c, Func Offset: 0x9c
	// Line 111, Address: 0x101fc88, Func Offset: 0xa8
	// Line 112, Address: 0x101fc94, Func Offset: 0xb4
	// Line 113, Address: 0x101fca0, Func Offset: 0xc0
	// Line 114, Address: 0x101fcac, Func Offset: 0xcc
	// Line 115, Address: 0x101fcbc, Func Offset: 0xdc
	// Line 116, Address: 0x101fccc, Func Offset: 0xec
	// Line 118, Address: 0x101fcec, Func Offset: 0x10c
	// Line 119, Address: 0x101fd38, Func Offset: 0x158
	// Line 120, Address: 0x101fd88, Func Offset: 0x1a8
	// Line 121, Address: 0x101fdc8, Func Offset: 0x1e8
	// Line 123, Address: 0x101fe08, Func Offset: 0x228
	// Line 124, Address: 0x101fe14, Func Offset: 0x234
	// Func End, Address: 0x101fe24, Func Offset: 0x244
}

// 
// Start address: 0x101fe30
void tekkyu7_move(_anon1* pActwk)
{
	// Line 133, Address: 0x101fe30, Func Offset: 0
	// Line 134, Address: 0x101fe38, Func Offset: 0x8
	// Line 135, Address: 0x101fe54, Func Offset: 0x24
	// Line 136, Address: 0x101fe70, Func Offset: 0x40
	// Line 137, Address: 0x101fe90, Func Offset: 0x60
	// Line 138, Address: 0x101fea0, Func Offset: 0x70
	// Line 139, Address: 0x101feb0, Func Offset: 0x80
	// Line 140, Address: 0x101fec8, Func Offset: 0x98
	// Line 142, Address: 0x101fee0, Func Offset: 0xb0
	// Func End, Address: 0x101feec, Func Offset: 0xbc
}

// 
// Start address: 0x101fef0
void tekkyu7_stop(_anon1* pActwk)
{
	// Line 151, Address: 0x101fef0, Func Offset: 0
	// Line 152, Address: 0x101fef8, Func Offset: 0x8
	// Line 153, Address: 0x101ff18, Func Offset: 0x28
	// Line 154, Address: 0x101ff28, Func Offset: 0x38
	// Line 156, Address: 0x101ff38, Func Offset: 0x48
	// Func End, Address: 0x101ff44, Func Offset: 0x54
}

