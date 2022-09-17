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
typedef _anon0* type_2[1];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];

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

_anon0 pat0;
_anon0* pat_tekkyu1[1];

void tekkyu1(_anon1* pActwk);

// 
// Start address: 0x102b500
void tekkyu1(_anon1* pActwk)
{
	// Line 40, Address: 0x102b500, Func Offset: 0
	// Line 41, Address: 0x102b50c, Func Offset: 0xc
	// Line 43, Address: 0x102b520, Func Offset: 0x20
	// Line 44, Address: 0x102b530, Func Offset: 0x30
	// Line 45, Address: 0x102b540, Func Offset: 0x40
	// Line 46, Address: 0x102b54c, Func Offset: 0x4c
	// Line 47, Address: 0x102b558, Func Offset: 0x58
	// Line 48, Address: 0x102b564, Func Offset: 0x64
	// Line 49, Address: 0x102b570, Func Offset: 0x70
	// Line 50, Address: 0x102b57c, Func Offset: 0x7c
	// Line 51, Address: 0x102b588, Func Offset: 0x88
	// Line 53, Address: 0x102b598, Func Offset: 0x98
	// Line 54, Address: 0x102b5a4, Func Offset: 0xa4
	// Line 55, Address: 0x102b5b0, Func Offset: 0xb0
	// Func End, Address: 0x102b5c0, Func Offset: 0xc0
}

