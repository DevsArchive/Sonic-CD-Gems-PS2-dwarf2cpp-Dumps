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
typedef char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef char* type_6[1];

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

char p00[4];
char* pchg[1];
_anon0 pat00;
_anon0 pat01;
_anon0* pat_jettoge[2];
unsigned char prio_flag;

void jettoge(_anon1* actionwk);
void a_init(_anon1* actionwk);
void a_move(_anon1* actionwk);

// 
// Start address: 0x1024800
void jettoge(_anon1* actionwk)
{
	// Line 34, Address: 0x1024800, Func Offset: 0
	// Line 35, Address: 0x102480c, Func Offset: 0xc
	// Line 38, Address: 0x1024834, Func Offset: 0x34
	// Line 40, Address: 0x1024840, Func Offset: 0x40
	// Line 43, Address: 0x102484c, Func Offset: 0x4c
	// Func End, Address: 0x102485c, Func Offset: 0x5c
}

// 
// Start address: 0x1024860
void a_init(_anon1* actionwk)
{
	// Line 45, Address: 0x1024860, Func Offset: 0
	// Line 46, Address: 0x1024868, Func Offset: 0x8
	// Line 47, Address: 0x1024878, Func Offset: 0x18
	// Line 48, Address: 0x1024888, Func Offset: 0x28
	// Line 49, Address: 0x1024898, Func Offset: 0x38
	// Line 50, Address: 0x10248a4, Func Offset: 0x44
	// Line 51, Address: 0x10248b4, Func Offset: 0x54
	// Line 52, Address: 0x10248c0, Func Offset: 0x60
	// Line 53, Address: 0x10248cc, Func Offset: 0x6c
	// Line 54, Address: 0x10248d8, Func Offset: 0x78
	// Line 55, Address: 0x10248e4, Func Offset: 0x84
	// Line 56, Address: 0x10248f0, Func Offset: 0x90
	// Func End, Address: 0x10248fc, Func Offset: 0x9c
}

// 
// Start address: 0x1024900
void a_move(_anon1* actionwk)
{
	short t;
	// Line 58, Address: 0x1024900, Func Offset: 0
	// Line 61, Address: 0x1024910, Func Offset: 0x10
	// Line 62, Address: 0x1024928, Func Offset: 0x28
	// Line 63, Address: 0x102493c, Func Offset: 0x3c
	// Line 65, Address: 0x1024954, Func Offset: 0x54
	// Line 66, Address: 0x102495c, Func Offset: 0x5c
	// Line 67, Address: 0x1024974, Func Offset: 0x74
	// Line 69, Address: 0x1024984, Func Offset: 0x84
	// Line 70, Address: 0x1024990, Func Offset: 0x90
	// Line 72, Address: 0x10249a4, Func Offset: 0xa4
	// Line 73, Address: 0x10249b4, Func Offset: 0xb4
	// Line 75, Address: 0x10249c4, Func Offset: 0xc4
	// Line 76, Address: 0x10249d8, Func Offset: 0xd8
	// Line 77, Address: 0x10249e4, Func Offset: 0xe4
	// Line 79, Address: 0x10249f8, Func Offset: 0xf8
	// Func End, Address: 0x1024a0c, Func Offset: 0x10c
}

