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
typedef _anon0* type_2[7];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
typedef unsigned char type_6[14];

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
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0* pat_wall1[7];
unsigned char tbl0[14];
_anon1 actwk[128];

void wall1(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_move(_anon1* pActwk);

// 
// Start address: 0x101e0e0
void wall1(_anon1* pActwk)
{
	// Line 105, Address: 0x101e0e0, Func Offset: 0
	// Line 106, Address: 0x101e0ec, Func Offset: 0xc
	// Line 107, Address: 0x101e0fc, Func Offset: 0x1c
	// Line 108, Address: 0x101e108, Func Offset: 0x28
	// Line 109, Address: 0x101e110, Func Offset: 0x30
	// Line 111, Address: 0x101e11c, Func Offset: 0x3c
	// Func End, Address: 0x101e12c, Func Offset: 0x4c
}

// 
// Start address: 0x101e130
void act_init(_anon1* pActwk)
{
	// Line 117, Address: 0x101e130, Func Offset: 0
	// Line 118, Address: 0x101e13c, Func Offset: 0xc
	// Line 119, Address: 0x101e14c, Func Offset: 0x1c
	// Line 120, Address: 0x101e15c, Func Offset: 0x2c
	// Line 121, Address: 0x101e168, Func Offset: 0x38
	// Line 122, Address: 0x101e174, Func Offset: 0x44
	// Line 123, Address: 0x101e184, Func Offset: 0x54
	// Line 124, Address: 0x101e194, Func Offset: 0x64
	// Line 125, Address: 0x101e1c8, Func Offset: 0x98
	// Line 127, Address: 0x101e1f8, Func Offset: 0xc8
	// Line 128, Address: 0x101e204, Func Offset: 0xd4
	// Func End, Address: 0x101e214, Func Offset: 0xe4
}

// 
// Start address: 0x101e220
void act_move(_anon1* pActwk)
{
	// Line 134, Address: 0x101e220, Func Offset: 0
	// Line 135, Address: 0x101e22c, Func Offset: 0xc
	// Line 136, Address: 0x101e240, Func Offset: 0x20
	// Line 137, Address: 0x101e24c, Func Offset: 0x2c
	// Line 138, Address: 0x101e258, Func Offset: 0x38
	// Func End, Address: 0x101e268, Func Offset: 0x48
}

