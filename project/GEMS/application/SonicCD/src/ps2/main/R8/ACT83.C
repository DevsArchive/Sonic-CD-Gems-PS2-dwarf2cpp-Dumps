typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon0*);

typedef _anon7 type_1[20];
typedef _anon7 type_2[0];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef void(*type_5)(_anon0*)[67];

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

void(*act_tbl)(_anon0*)[67];

void debugact(_anon0* pActwk);
void noact(_anon0* pActwk);

// 
// Start address: 0x1025fd0
void debugact(_anon0* pActwk)
{
	// Line 161, Address: 0x1025fd0, Func Offset: 0
	// Line 162, Address: 0x1025fdc, Func Offset: 0xc
	// Line 163, Address: 0x1026000, Func Offset: 0x30
	// Line 164, Address: 0x1026008, Func Offset: 0x38
	// Line 165, Address: 0x102602c, Func Offset: 0x5c
	// Line 167, Address: 0x1026034, Func Offset: 0x64
	// Line 168, Address: 0x1026040, Func Offset: 0x70
	// Func End, Address: 0x1026050, Func Offset: 0x80
}

// 
// Start address: 0x1026050
void noact(_anon0* pActwk)
{
	// Line 173, Address: 0x1026050, Func Offset: 0
	// Line 174, Address: 0x102605c, Func Offset: 0xc
	// Line 175, Address: 0x1026068, Func Offset: 0x18
	// Func End, Address: 0x1026078, Func Offset: 0x28
}

