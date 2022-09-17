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
typedef _anon1 type_5[128];

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

_anon0 light_pat0;
_anon0* light_pat[1];
_anon1 actwk[128];

void light(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_die(_anon1* actionwk);

// 
// Start address: 0x102f540
void light(_anon1* actionwk)
{
	_anon1* a1;
	// Line 23, Address: 0x102f540, Func Offset: 0
	// Line 26, Address: 0x102f550, Func Offset: 0x10
	// Line 29, Address: 0x102f584, Func Offset: 0x44
	// Line 32, Address: 0x102f590, Func Offset: 0x50
	// Line 34, Address: 0x102f598, Func Offset: 0x58
	// Line 38, Address: 0x102f5a4, Func Offset: 0x64
	// Line 39, Address: 0x102f5c8, Func Offset: 0x88
	// Line 41, Address: 0x102f5dc, Func Offset: 0x9c
	// Line 42, Address: 0x102f5e8, Func Offset: 0xa8
	// Line 44, Address: 0x102f5f0, Func Offset: 0xb0
	// Line 46, Address: 0x102f5fc, Func Offset: 0xbc
	// Func End, Address: 0x102f610, Func Offset: 0xd0
}

// 
// Start address: 0x102f610
void act_init(_anon1* actionwk)
{
	// Line 48, Address: 0x102f610, Func Offset: 0
	// Line 49, Address: 0x102f618, Func Offset: 0x8
	// Line 50, Address: 0x102f628, Func Offset: 0x18
	// Line 51, Address: 0x102f638, Func Offset: 0x28
	// Line 52, Address: 0x102f644, Func Offset: 0x34
	// Line 53, Address: 0x102f650, Func Offset: 0x40
	// Line 54, Address: 0x102f65c, Func Offset: 0x4c
	// Line 55, Address: 0x102f668, Func Offset: 0x58
	// Line 56, Address: 0x102f678, Func Offset: 0x68
	// Func End, Address: 0x102f684, Func Offset: 0x74
}

// 
// Start address: 0x102f690
void act_die(_anon1* actionwk)
{
	// Line 58, Address: 0x102f690, Func Offset: 0
	// Line 59, Address: 0x102f69c, Func Offset: 0xc
	// Line 60, Address: 0x102f6a8, Func Offset: 0x18
	// Func End, Address: 0x102f6b8, Func Offset: 0x28
}

