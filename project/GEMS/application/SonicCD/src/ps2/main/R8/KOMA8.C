typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon0*);

typedef _anon7 type_0[20];
typedef unsigned char* type_1[1];
typedef _anon7 type_2[0];
typedef void(*type_4)(_anon0*)[3];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1* type_7[2];
typedef unsigned char type_8[4];
typedef _anon0 type_9[128];

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

unsigned char komachg0[4];
unsigned char* komachg[1];
_anon1 kom00;
_anon1 kom01;
_anon1* koma8pat[2];
_anon0 actwk[128];

void koma8(_anon0* komawk);
void koma_init(_anon0* komawk);
void koma_move(_anon0* komawk);
void koma_move2(_anon0* komawk);

// 
// Start address: 0x1025b30
void koma8(_anon0* komawk)
{
	void(*tbl)(_anon0*)[3];
	// Line 43, Address: 0x1025b30, Func Offset: 0
	// Line 44, Address: 0x1025b3c, Func Offset: 0xc
	// Line 45, Address: 0x1025b60, Func Offset: 0x30
	// Line 46, Address: 0x1025b9c, Func Offset: 0x6c
	// Line 47, Address: 0x1025bb0, Func Offset: 0x80
	// Func End, Address: 0x1025bc0, Func Offset: 0x90
}

// 
// Start address: 0x1025bc0
void koma_init(_anon0* komawk)
{
	_anon0* sprwk;
	// Line 51, Address: 0x1025bc0, Func Offset: 0
	// Line 54, Address: 0x1025bcc, Func Offset: 0xc
	// Line 55, Address: 0x1025bdc, Func Offset: 0x1c
	// Line 56, Address: 0x1025bec, Func Offset: 0x2c
	// Line 57, Address: 0x1025bf8, Func Offset: 0x38
	// Line 58, Address: 0x1025c08, Func Offset: 0x48
	// Line 59, Address: 0x1025c14, Func Offset: 0x54
	// Line 60, Address: 0x1025c20, Func Offset: 0x60
	// Line 61, Address: 0x1025c30, Func Offset: 0x70
	// Line 62, Address: 0x1025c3c, Func Offset: 0x7c
	// Line 63, Address: 0x1025c44, Func Offset: 0x84
	// Line 64, Address: 0x1025c70, Func Offset: 0xb0
	// Line 65, Address: 0x1025c7c, Func Offset: 0xbc
	// Line 66, Address: 0x1025c8c, Func Offset: 0xcc
	// Line 67, Address: 0x1025cb0, Func Offset: 0xf0
	// Line 68, Address: 0x1025cbc, Func Offset: 0xfc
	// Line 69, Address: 0x1025cf0, Func Offset: 0x130
	// Line 71, Address: 0x1025d14, Func Offset: 0x154
	// Line 72, Address: 0x1025d20, Func Offset: 0x160
	// Line 73, Address: 0x1025d44, Func Offset: 0x184
	// Line 74, Address: 0x1025d50, Func Offset: 0x190
	// Func End, Address: 0x1025d60, Func Offset: 0x1a0
}

// 
// Start address: 0x1025d60
void koma_move(_anon0* komawk)
{
	short colli_data;
	// Line 77, Address: 0x1025d60, Func Offset: 0
	// Line 80, Address: 0x1025d70, Func Offset: 0x10
	// Line 81, Address: 0x1025d9c, Func Offset: 0x3c
	// Line 82, Address: 0x1025dac, Func Offset: 0x4c
	// Line 83, Address: 0x1025dbc, Func Offset: 0x5c
	// Line 84, Address: 0x1025dcc, Func Offset: 0x6c
	// Line 85, Address: 0x1025dd4, Func Offset: 0x74
	// Line 87, Address: 0x1025de4, Func Offset: 0x84
	// Func End, Address: 0x1025df8, Func Offset: 0x98
}

// 
// Start address: 0x1025e00
void koma_move2(_anon0* komawk)
{
	short colli_data;
	short pos_data;
	// Line 90, Address: 0x1025e00, Func Offset: 0
	// Line 93, Address: 0x1025e14, Func Offset: 0x14
	// Line 94, Address: 0x1025e4c, Func Offset: 0x4c
	// Line 95, Address: 0x1025e64, Func Offset: 0x64
	// Line 97, Address: 0x1025e78, Func Offset: 0x78
	// Line 98, Address: 0x1025ec4, Func Offset: 0xc4
	// Line 99, Address: 0x1025ee0, Func Offset: 0xe0
	// Line 101, Address: 0x1025f04, Func Offset: 0x104
	// Line 102, Address: 0x1025f34, Func Offset: 0x134
	// Line 103, Address: 0x1025f48, Func Offset: 0x148
	// Line 104, Address: 0x1025f58, Func Offset: 0x158
	// Line 106, Address: 0x1025f60, Func Offset: 0x160
	// Line 108, Address: 0x1025f84, Func Offset: 0x184
	// Line 109, Address: 0x1025f90, Func Offset: 0x190
	// Line 110, Address: 0x1025fa4, Func Offset: 0x1a4
	// Line 111, Address: 0x1025fb0, Func Offset: 0x1b0
	// Func End, Address: 0x1025fc8, Func Offset: 0x1c8
}

