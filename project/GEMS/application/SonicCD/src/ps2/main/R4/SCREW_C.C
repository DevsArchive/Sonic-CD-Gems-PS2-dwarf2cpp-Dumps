typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[2];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
typedef _anon0* type_6[2];
typedef unsigned char type_7[32];

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

_anon0 pat_screw00;
_anon0 pat_screw01;
_anon0 pat_screw02;
_anon0 pat_screw03;
_anon0* pat_screw0[2];
_anon0* pat_screw1[2];
unsigned char switchflag[32];
_anon1 actwk[128];

void screw(_anon1* pActwk);

// 
// Start address: 0x102b2b0
void screw(_anon1* pActwk)
{
	_anon1* pCallactwk;
	// Line 81, Address: 0x102b2b0, Func Offset: 0
	// Line 84, Address: 0x102b2c0, Func Offset: 0x10
	// Line 86, Address: 0x102b2d0, Func Offset: 0x20
	// Line 87, Address: 0x102b2f8, Func Offset: 0x48
	// Line 88, Address: 0x102b304, Func Offset: 0x54
	// Line 89, Address: 0x102b314, Func Offset: 0x64
	// Line 90, Address: 0x102b324, Func Offset: 0x74
	// Line 91, Address: 0x102b330, Func Offset: 0x80
	// Line 93, Address: 0x102b33c, Func Offset: 0x8c
	// Line 94, Address: 0x102b358, Func Offset: 0xa8
	// Line 95, Address: 0x102b368, Func Offset: 0xb8
	// Line 96, Address: 0x102b384, Func Offset: 0xd4
	// Line 97, Address: 0x102b390, Func Offset: 0xe0
	// Line 98, Address: 0x102b39c, Func Offset: 0xec
	// Line 99, Address: 0x102b3ac, Func Offset: 0xfc
	// Line 100, Address: 0x102b3b4, Func Offset: 0x104
	// Line 101, Address: 0x102b3c0, Func Offset: 0x110
	// Line 102, Address: 0x102b3cc, Func Offset: 0x11c
	// Line 104, Address: 0x102b3dc, Func Offset: 0x12c
	// Line 105, Address: 0x102b3f8, Func Offset: 0x148
	// Line 106, Address: 0x102b408, Func Offset: 0x158
	// Line 110, Address: 0x102b418, Func Offset: 0x168
	// Line 112, Address: 0x102b440, Func Offset: 0x190
	// Line 113, Address: 0x102b45c, Func Offset: 0x1ac
	// Line 114, Address: 0x102b478, Func Offset: 0x1c8
	// Line 115, Address: 0x102b488, Func Offset: 0x1d8
	// Line 116, Address: 0x102b4b0, Func Offset: 0x200
	// Line 117, Address: 0x102b4bc, Func Offset: 0x20c
	// Line 122, Address: 0x102b4cc, Func Offset: 0x21c
	// Line 123, Address: 0x102b4d8, Func Offset: 0x228
	// Line 126, Address: 0x102b4e0, Func Offset: 0x230
	// Line 127, Address: 0x102b4ec, Func Offset: 0x23c
	// Func End, Address: 0x102b500, Func Offset: 0x250
}

