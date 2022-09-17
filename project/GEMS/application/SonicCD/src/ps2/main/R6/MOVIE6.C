typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[6];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef unsigned char type_5[58];
typedef void(*type_7)(_anon1*)[5];
typedef _anon1 type_8[128];
typedef char type_9[37];
typedef unsigned char* type_10[2];
typedef unsigned char type_11[6];

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

unsigned char pchg00[6];
unsigned char pchg01[58];
unsigned char* pchg[2];
_anon0 mov00;
_anon0 pat00;
_anon0 mov01;
_anon0 mov02;
_anon0 mov03;
_anon0 mov04;
_anon0* pat_movie[6];
char tbl0[37];
_anon1 actwk[128];
unsigned char projector_flag;

void movie(_anon1* moviewk);
void die(_anon1* moviewk);
void m_init(_anon1* moviewk);
void m_wait(_anon1* moviewk);
void m_die(_anon1* moviewk);
void m_baku(_anon1* moviewk);
void m1wait(_anon1* moviewk);
void sub(_anon1* moviewk);
void s_init(_anon1* moviewk);
void s_move(_anon1* moviewk);

// 
// Start address: 0x101bfe0
void movie(_anon1* moviewk)
{
	void(*act_tbl)(_anon1*)[5];
	// Line 55, Address: 0x101bfe0, Func Offset: 0
	// Line 56, Address: 0x101bfec, Func Offset: 0xc
	// Line 58, Address: 0x101c018, Func Offset: 0x38
	// Line 60, Address: 0x101c044, Func Offset: 0x64
	// Line 61, Address: 0x101c080, Func Offset: 0xa0
	// Line 62, Address: 0x101c08c, Func Offset: 0xac
	// Line 63, Address: 0x101c0a4, Func Offset: 0xc4
	// Line 64, Address: 0x101c0b0, Func Offset: 0xd0
	// Line 65, Address: 0x101c0d0, Func Offset: 0xf0
	// Func End, Address: 0x101c0e0, Func Offset: 0x100
}

// 
// Start address: 0x101c0e0
void die(_anon1* moviewk)
{
	// Line 69, Address: 0x101c0e0, Func Offset: 0
	// Line 70, Address: 0x101c0ec, Func Offset: 0xc
	// Line 71, Address: 0x101c0f8, Func Offset: 0x18
	// Func End, Address: 0x101c108, Func Offset: 0x28
}

// 
// Start address: 0x101c110
void m_init(_anon1* moviewk)
{
	_anon1* new_actwk;
	// Line 74, Address: 0x101c110, Func Offset: 0
	// Line 77, Address: 0x101c11c, Func Offset: 0xc
	// Line 78, Address: 0x101c144, Func Offset: 0x34
	// Line 80, Address: 0x101c150, Func Offset: 0x40
	// Line 81, Address: 0x101c160, Func Offset: 0x50
	// Line 82, Address: 0x101c170, Func Offset: 0x60
	// Line 83, Address: 0x101c17c, Func Offset: 0x6c
	// Line 84, Address: 0x101c1a0, Func Offset: 0x90
	// Line 86, Address: 0x101c1ac, Func Offset: 0x9c
	// Line 87, Address: 0x101c1bc, Func Offset: 0xac
	// Line 89, Address: 0x101c1cc, Func Offset: 0xbc
	// Line 90, Address: 0x101c1f4, Func Offset: 0xe4
	// Line 91, Address: 0x101c204, Func Offset: 0xf4
	// Line 92, Address: 0x101c228, Func Offset: 0x118
	// Line 93, Address: 0x101c24c, Func Offset: 0x13c
	// Line 94, Address: 0x101c258, Func Offset: 0x148
	// Line 96, Address: 0x101c28c, Func Offset: 0x17c
	// Line 97, Address: 0x101c2b4, Func Offset: 0x1a4
	// Line 98, Address: 0x101c2c4, Func Offset: 0x1b4
	// Line 99, Address: 0x101c2e8, Func Offset: 0x1d8
	// Line 100, Address: 0x101c30c, Func Offset: 0x1fc
	// Line 101, Address: 0x101c318, Func Offset: 0x208
	// Line 103, Address: 0x101c34c, Func Offset: 0x23c
	// Line 104, Address: 0x101c374, Func Offset: 0x264
	// Line 105, Address: 0x101c380, Func Offset: 0x270
	// Line 106, Address: 0x101c3a4, Func Offset: 0x294
	// Line 107, Address: 0x101c3c8, Func Offset: 0x2b8
	// Line 108, Address: 0x101c3d4, Func Offset: 0x2c4
	// Line 110, Address: 0x101c408, Func Offset: 0x2f8
	// Line 111, Address: 0x101c430, Func Offset: 0x320
	// Line 112, Address: 0x101c43c, Func Offset: 0x32c
	// Line 113, Address: 0x101c460, Func Offset: 0x350
	// Line 114, Address: 0x101c484, Func Offset: 0x374
	// Line 115, Address: 0x101c490, Func Offset: 0x380
	// Line 116, Address: 0x101c4c4, Func Offset: 0x3b4
	// Func End, Address: 0x101c4d4, Func Offset: 0x3c4
}

// 
// Start address: 0x101c4e0
void m_wait(_anon1* moviewk)
{
	// Line 120, Address: 0x101c4e0, Func Offset: 0
	// Line 121, Address: 0x101c4ec, Func Offset: 0xc
	// Line 122, Address: 0x101c500, Func Offset: 0x20
	// Line 123, Address: 0x101c514, Func Offset: 0x34
	// Line 125, Address: 0x101c524, Func Offset: 0x44
	// Line 126, Address: 0x101c538, Func Offset: 0x58
	// Func End, Address: 0x101c548, Func Offset: 0x68
}

// 
// Start address: 0x101c550
void m_die(_anon1* moviewk)
{
	// Line 130, Address: 0x101c550, Func Offset: 0
	// Line 131, Address: 0x101c55c, Func Offset: 0xc
	// Line 132, Address: 0x101c56c, Func Offset: 0x1c
	// Line 133, Address: 0x101c578, Func Offset: 0x28
	// Line 134, Address: 0x101c584, Func Offset: 0x34
	// Line 136, Address: 0x101c590, Func Offset: 0x40
	// Line 137, Address: 0x101c5c8, Func Offset: 0x78
	// Line 138, Address: 0x101c5d4, Func Offset: 0x84
	// Func End, Address: 0x101c5e4, Func Offset: 0x94
}

// 
// Start address: 0x101c5f0
void m_baku(_anon1* moviewk)
{
	char* data_tbl;
	char time_limit;
	char x_add;
	char y_add;
	_anon1* new_actwk;
	// Line 142, Address: 0x101c5f0, Func Offset: 0
	// Line 146, Address: 0x101c60c, Func Offset: 0x1c
	// Line 147, Address: 0x101c614, Func Offset: 0x24
	// Line 148, Address: 0x101c630, Func Offset: 0x40
	// Line 149, Address: 0x101c640, Func Offset: 0x50
	// Line 150, Address: 0x101c64c, Func Offset: 0x5c
	// Line 153, Address: 0x101c654, Func Offset: 0x64
	// Line 155, Address: 0x101c67c, Func Offset: 0x8c
	// Line 156, Address: 0x101c694, Func Offset: 0xa4
	// Line 158, Address: 0x101c6a0, Func Offset: 0xb0
	// Line 159, Address: 0x101c6b4, Func Offset: 0xc4
	// Line 160, Address: 0x101c6c0, Func Offset: 0xd0
	// Line 161, Address: 0x101c6cc, Func Offset: 0xdc
	// Line 162, Address: 0x101c700, Func Offset: 0x110
	// Line 163, Address: 0x101c734, Func Offset: 0x144
	// Line 164, Address: 0x101c740, Func Offset: 0x150
	// Func End, Address: 0x101c760, Func Offset: 0x170
}

// 
// Start address: 0x101c760
void m1wait(_anon1* moviewk)
{
	// Line 168, Address: 0x101c760, Func Offset: 0
	// Line 169, Address: 0x101c76c, Func Offset: 0xc
	// Line 170, Address: 0x101c794, Func Offset: 0x34
	// Line 171, Address: 0x101c7a0, Func Offset: 0x40
	// Line 173, Address: 0x101c7ac, Func Offset: 0x4c
	// Func End, Address: 0x101c7bc, Func Offset: 0x5c
}

// 
// Start address: 0x101c7c0
void sub(_anon1* moviewk)
{
	_anon1* parent;
	// Line 177, Address: 0x101c7c0, Func Offset: 0
	// Line 180, Address: 0x101c7d0, Func Offset: 0x10
	// Line 181, Address: 0x101c7f4, Func Offset: 0x34
	// Line 182, Address: 0x101c81c, Func Offset: 0x5c
	// Line 184, Address: 0x101c840, Func Offset: 0x80
	// Line 185, Address: 0x101c868, Func Offset: 0xa8
	// Line 186, Address: 0x101c874, Func Offset: 0xb4
	// Func End, Address: 0x101c888, Func Offset: 0xc8
}

// 
// Start address: 0x101c890
void s_init(_anon1* moviewk)
{
	// Line 190, Address: 0x101c890, Func Offset: 0
	// Line 191, Address: 0x101c898, Func Offset: 0x8
	// Line 192, Address: 0x101c8a8, Func Offset: 0x18
	// Line 193, Address: 0x101c8b8, Func Offset: 0x28
	// Line 195, Address: 0x101c8c4, Func Offset: 0x34
	// Line 196, Address: 0x101c8d4, Func Offset: 0x44
	// Line 197, Address: 0x101c8ec, Func Offset: 0x5c
	// Line 198, Address: 0x101c904, Func Offset: 0x74
	// Line 199, Address: 0x101c910, Func Offset: 0x80
	// Line 200, Address: 0x101c918, Func Offset: 0x88
	// Line 201, Address: 0x101c920, Func Offset: 0x90
	// Line 202, Address: 0x101c938, Func Offset: 0xa8
	// Line 203, Address: 0x101c944, Func Offset: 0xb4
	// Line 205, Address: 0x101c950, Func Offset: 0xc0
	// Func End, Address: 0x101c95c, Func Offset: 0xcc
}

// 
// Start address: 0x101c960
void s_move(_anon1* moviewk)
{
	// Line 209, Address: 0x101c960, Func Offset: 0
	// Line 210, Address: 0x101c96c, Func Offset: 0xc
	// Line 211, Address: 0x101c980, Func Offset: 0x20
	// Line 212, Address: 0x101c98c, Func Offset: 0x2c
	// Func End, Address: 0x101c99c, Func Offset: 0x3c
}

