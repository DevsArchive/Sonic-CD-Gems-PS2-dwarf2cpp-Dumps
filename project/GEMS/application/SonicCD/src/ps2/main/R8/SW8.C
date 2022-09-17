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
typedef unsigned char type_6[32];

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

_anon0 sw00;
_anon0 sw01;
_anon0* pat_sw[2];
_anon1 actwk[128];
unsigned char switchflag[32];

void sw(_anon1* swwk);
void act_init(_anon1* swwk);
void act_move(_anon1* swwk);

// 
// Start address: 0x1025820
void sw(_anon1* swwk)
{
	// Line 39, Address: 0x1025820, Func Offset: 0
	// Line 40, Address: 0x102582c, Func Offset: 0xc
	// Line 41, Address: 0x1025854, Func Offset: 0x34
	// Line 42, Address: 0x1025860, Func Offset: 0x40
	// Func End, Address: 0x1025870, Func Offset: 0x50
}

// 
// Start address: 0x1025870
void act_init(_anon1* swwk)
{
	// Line 46, Address: 0x1025870, Func Offset: 0
	// Line 47, Address: 0x1025878, Func Offset: 0x8
	// Line 48, Address: 0x1025888, Func Offset: 0x18
	// Line 49, Address: 0x1025898, Func Offset: 0x28
	// Line 50, Address: 0x10258a4, Func Offset: 0x34
	// Line 52, Address: 0x10258bc, Func Offset: 0x4c
	// Line 53, Address: 0x10258cc, Func Offset: 0x5c
	// Line 55, Address: 0x10258d8, Func Offset: 0x68
	// Line 56, Address: 0x10258f0, Func Offset: 0x80
	// Func End, Address: 0x10258fc, Func Offset: 0x8c
}

// 
// Start address: 0x1025900
void act_move(_anon1* swwk)
{
	short switch_adr;
	// Line 61, Address: 0x1025900, Func Offset: 0
	// Line 64, Address: 0x1025910, Func Offset: 0x10
	// Line 65, Address: 0x1025920, Func Offset: 0x20
	// Line 66, Address: 0x1025930, Func Offset: 0x30
	// Line 67, Address: 0x1025978, Func Offset: 0x78
	// Line 68, Address: 0x1025984, Func Offset: 0x84
	// Line 69, Address: 0x10259a4, Func Offset: 0xa4
	// Line 70, Address: 0x10259ac, Func Offset: 0xac
	// Line 71, Address: 0x10259b4, Func Offset: 0xb4
	// Line 75, Address: 0x10259d4, Func Offset: 0xd4
	// Line 77, Address: 0x1025a00, Func Offset: 0x100
	// Line 79, Address: 0x1025a2c, Func Offset: 0x12c
	// Line 80, Address: 0x1025a4c, Func Offset: 0x14c
	// Line 81, Address: 0x1025a60, Func Offset: 0x160
	// Line 82, Address: 0x1025a70, Func Offset: 0x170
	// Line 83, Address: 0x1025a80, Func Offset: 0x180
	// Line 86, Address: 0x1025a90, Func Offset: 0x190
	// Line 88, Address: 0x1025abc, Func Offset: 0x1bc
	// Line 89, Address: 0x1025ad0, Func Offset: 0x1d0
	// Line 90, Address: 0x1025ae0, Func Offset: 0x1e0
	// Line 91, Address: 0x1025af0, Func Offset: 0x1f0
	// Line 94, Address: 0x1025b00, Func Offset: 0x200
	// Line 95, Address: 0x1025b0c, Func Offset: 0x20c
	// Line 96, Address: 0x1025b18, Func Offset: 0x218
	// Func End, Address: 0x1025b2c, Func Offset: 0x22c
}

