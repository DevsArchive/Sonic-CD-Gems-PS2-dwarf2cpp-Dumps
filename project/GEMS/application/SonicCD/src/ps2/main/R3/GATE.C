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
typedef char type_2[10];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon0* type_5[8];
typedef char* type_6[1];
typedef _anon1 type_7[128];

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
_anon0 pat07;
_anon0* gate_pat[8];
char pchg0[10];
char* pchg[1];
_anon1 actwk[128];

void gate(_anon1* actionwk);
void act_init6(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_init10(_anon1* actionwk);
void act_open(_anon1* actionwk);
void act_move(_anon1* actionwk);

// 
// Start address: 0x102e550
void gate(_anon1* actionwk)
{
	// Line 44, Address: 0x102e550, Func Offset: 0
	// Line 45, Address: 0x102e55c, Func Offset: 0xc
	// Line 47, Address: 0x102e574, Func Offset: 0x24
	// Line 50, Address: 0x102e580, Func Offset: 0x30
	// Line 53, Address: 0x102e5c0, Func Offset: 0x70
	// Line 54, Address: 0x102e5cc, Func Offset: 0x7c
	// Line 56, Address: 0x102e5d4, Func Offset: 0x84
	// Line 58, Address: 0x102e5e0, Func Offset: 0x90
	// Line 59, Address: 0x102e5ec, Func Offset: 0x9c
	// Line 61, Address: 0x102e5f4, Func Offset: 0xa4
	// Line 64, Address: 0x102e600, Func Offset: 0xb0
	// Func End, Address: 0x102e610, Func Offset: 0xc0
}

// 
// Start address: 0x102e610
void act_init6(_anon1* actionwk)
{
	// Line 66, Address: 0x102e610, Func Offset: 0
	// Line 67, Address: 0x102e61c, Func Offset: 0xc
	// Line 68, Address: 0x102e628, Func Offset: 0x18
	// Line 69, Address: 0x102e630, Func Offset: 0x20
	// Line 70, Address: 0x102e63c, Func Offset: 0x2c
	// Func End, Address: 0x102e64c, Func Offset: 0x3c
}

// 
// Start address: 0x102e650
void act_init(_anon1* actionwk)
{
	// Line 72, Address: 0x102e650, Func Offset: 0
	// Line 73, Address: 0x102e65c, Func Offset: 0xc
	// Line 74, Address: 0x102e668, Func Offset: 0x18
	// Line 75, Address: 0x102e674, Func Offset: 0x24
	// Func End, Address: 0x102e684, Func Offset: 0x34
}

// 
// Start address: 0x102e690
void act_init10(_anon1* actionwk)
{
	// Line 77, Address: 0x102e690, Func Offset: 0
	// Line 78, Address: 0x102e69c, Func Offset: 0xc
	// Line 79, Address: 0x102e6ac, Func Offset: 0x1c
	// Line 80, Address: 0x102e6bc, Func Offset: 0x2c
	// Line 81, Address: 0x102e6c8, Func Offset: 0x38
	// Line 82, Address: 0x102e6d4, Func Offset: 0x44
	// Line 83, Address: 0x102e6e4, Func Offset: 0x54
	// Line 84, Address: 0x102e6f0, Func Offset: 0x60
	// Line 85, Address: 0x102e6fc, Func Offset: 0x6c
	// Line 86, Address: 0x102e708, Func Offset: 0x78
	// Func End, Address: 0x102e718, Func Offset: 0x88
}

// 
// Start address: 0x102e720
void act_open(_anon1* actionwk)
{
	// Line 88, Address: 0x102e720, Func Offset: 0
	// Line 89, Address: 0x102e72c, Func Offset: 0xc
	// Line 90, Address: 0x102e740, Func Offset: 0x20
	// Line 92, Address: 0x102e760, Func Offset: 0x40
	// Line 94, Address: 0x102e770, Func Offset: 0x50
	// Func End, Address: 0x102e780, Func Offset: 0x60
}

// 
// Start address: 0x102e780
void act_move(_anon1* actionwk)
{
	// Line 96, Address: 0x102e780, Func Offset: 0
	// Line 97, Address: 0x102e78c, Func Offset: 0xc
	// Line 98, Address: 0x102e7ac, Func Offset: 0x2c
	// Line 99, Address: 0x102e7c0, Func Offset: 0x40
	// Line 100, Address: 0x102e7cc, Func Offset: 0x4c
	// Func End, Address: 0x102e7dc, Func Offset: 0x5c
}

