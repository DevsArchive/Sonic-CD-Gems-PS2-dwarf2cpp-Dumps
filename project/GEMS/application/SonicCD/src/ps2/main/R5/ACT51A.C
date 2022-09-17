typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef void(*type_5)(_anon1*)[60];

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

void(*act_tbl)(_anon1*)[60];

void debugact(_anon1* pActwk);
void noact(_anon1* pActwk);

// 
// Start address: 0x1016860
void debugact(_anon1* pActwk)
{
	// Line 148, Address: 0x1016860, Func Offset: 0
	// Line 149, Address: 0x101686c, Func Offset: 0xc
	// Line 150, Address: 0x1016890, Func Offset: 0x30
	// Line 151, Address: 0x1016898, Func Offset: 0x38
	// Line 152, Address: 0x10168bc, Func Offset: 0x5c
	// Line 154, Address: 0x10168c4, Func Offset: 0x64
	// Line 155, Address: 0x10168d0, Func Offset: 0x70
	// Func End, Address: 0x10168e0, Func Offset: 0x80
}

// 
// Start address: 0x10168e0
void noact(_anon1* pActwk)
{
	// Line 160, Address: 0x10168e0, Func Offset: 0
	// Line 161, Address: 0x10168ec, Func Offset: 0xc
	// Line 162, Address: 0x10168f8, Func Offset: 0x18
	// Func End, Address: 0x1016908, Func Offset: 0x28
}

