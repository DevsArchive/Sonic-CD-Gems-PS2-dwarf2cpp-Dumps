typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;

typedef void(*type_5)(_anon2*);

typedef _anon8 type_0[20];
typedef _anon8 type_1[0];
typedef _anon1 type_2[4];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef void(*type_6)(_anon2*)[2];
typedef _anon2 type_7[128];
typedef _anon0* type_8[1];

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
	unsigned char a;
	char b;
	short c;
};

struct _anon2
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

_anon0 pat0;
_anon0* baneiwapat[1];
_anon2 actwk[128];

void baneiwa(_anon2* pActwk);
void baneiwa_init(_anon2* pActwk);
void baneiwa_move(_anon2* pActwk);

// 
// Start address: 0x1029c90
void baneiwa(_anon2* pActwk)
{
	_anon2* pRideAct;
	void(*tbl)(_anon2*)[2];
	// Line 57, Address: 0x1029c90, Func Offset: 0
	// Line 59, Address: 0x1029ca0, Func Offset: 0x10
	// Line 65, Address: 0x1029cbc, Func Offset: 0x2c
	// Line 66, Address: 0x1029cf8, Func Offset: 0x68
	// Line 67, Address: 0x1029d04, Func Offset: 0x74
	// Line 69, Address: 0x1029d14, Func Offset: 0x84
	// Line 70, Address: 0x1029d3c, Func Offset: 0xac
	// Line 72, Address: 0x1029d50, Func Offset: 0xc0
	// Line 74, Address: 0x1029d5c, Func Offset: 0xcc
	// Line 77, Address: 0x1029d64, Func Offset: 0xd4
	// Line 79, Address: 0x1029d70, Func Offset: 0xe0
	// Func End, Address: 0x1029d84, Func Offset: 0xf4
}

// 
// Start address: 0x1029d90
void baneiwa_init(_anon2* pActwk)
{
	_anon2* pNewActwk;
	// Line 84, Address: 0x1029d90, Func Offset: 0
	// Line 87, Address: 0x1029d9c, Func Offset: 0xc
	// Line 88, Address: 0x1029dac, Func Offset: 0x1c
	// Line 89, Address: 0x1029dbc, Func Offset: 0x2c
	// Line 90, Address: 0x1029dc8, Func Offset: 0x38
	// Line 91, Address: 0x1029dd4, Func Offset: 0x44
	// Line 92, Address: 0x1029de4, Func Offset: 0x54
	// Line 93, Address: 0x1029df0, Func Offset: 0x60
	// Line 95, Address: 0x1029dfc, Func Offset: 0x6c
	// Line 97, Address: 0x1029e10, Func Offset: 0x80
	// Line 99, Address: 0x1029e24, Func Offset: 0x94
	// Line 100, Address: 0x1029e30, Func Offset: 0xa0
	// Line 101, Address: 0x1029e54, Func Offset: 0xc4
	// Line 102, Address: 0x1029e64, Func Offset: 0xd4
	// Line 104, Address: 0x1029e70, Func Offset: 0xe0
	// Line 107, Address: 0x1029eac, Func Offset: 0x11c
	// Func End, Address: 0x1029ebc, Func Offset: 0x12c
}

// 
// Start address: 0x1029ec0
void baneiwa_move(_anon2* pActwk)
{
	short d0;
	short d1;
	unsigned char index;
	_anon1 baneiwa_mvtbl[4];
	// Line 112, Address: 0x1029ec0, Func Offset: 0
	// Line 123, Address: 0x1029ed8, Func Offset: 0x18
	// Line 135, Address: 0x1029f0c, Func Offset: 0x4c
	// Line 138, Address: 0x1029f24, Func Offset: 0x64
	// Line 140, Address: 0x1029f38, Func Offset: 0x78
	// Line 142, Address: 0x1029f48, Func Offset: 0x88
	// Line 143, Address: 0x1029f6c, Func Offset: 0xac
	// Line 144, Address: 0x1029f84, Func Offset: 0xc4
	// Line 145, Address: 0x1029f94, Func Offset: 0xd4
	// Line 149, Address: 0x1029fa4, Func Offset: 0xe4
	// Line 150, Address: 0x1029fb4, Func Offset: 0xf4
	// Line 154, Address: 0x1029fcc, Func Offset: 0x10c
	// Line 155, Address: 0x1029fd4, Func Offset: 0x114
	// Line 158, Address: 0x1029fdc, Func Offset: 0x11c
	// Line 159, Address: 0x1029fe8, Func Offset: 0x128
	// Line 160, Address: 0x102a000, Func Offset: 0x140
	// Line 161, Address: 0x102a020, Func Offset: 0x160
	// Line 162, Address: 0x102a038, Func Offset: 0x178
	// Line 164, Address: 0x102a048, Func Offset: 0x188
	// Line 165, Address: 0x102a054, Func Offset: 0x194
	// Line 167, Address: 0x102a060, Func Offset: 0x1a0
	// Line 168, Address: 0x102a068, Func Offset: 0x1a8
	// Line 170, Address: 0x102a070, Func Offset: 0x1b0
	// Line 173, Address: 0x102a088, Func Offset: 0x1c8
	// Line 175, Address: 0x102a09c, Func Offset: 0x1dc
	// Func End, Address: 0x102a0b8, Func Offset: 0x1f8
}

