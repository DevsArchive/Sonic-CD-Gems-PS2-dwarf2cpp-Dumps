typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_10)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef char type_2[37];
typedef unsigned char* type_3[2];
typedef unsigned char type_4[6];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon0* type_7[6];
typedef _anon1 type_8[128];
typedef unsigned char type_9[58];
typedef void(*type_11)(_anon1*)[5];

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
// Start address: 0x102e7e0
void movie(_anon1* moviewk)
{
	void(*act_tbl)(_anon1*)[5];
	// Line 55, Address: 0x102e7e0, Func Offset: 0
	// Line 56, Address: 0x102e7ec, Func Offset: 0xc
	// Line 58, Address: 0x102e818, Func Offset: 0x38
	// Line 60, Address: 0x102e844, Func Offset: 0x64
	// Line 61, Address: 0x102e880, Func Offset: 0xa0
	// Line 62, Address: 0x102e88c, Func Offset: 0xac
	// Line 63, Address: 0x102e8a4, Func Offset: 0xc4
	// Line 64, Address: 0x102e8b0, Func Offset: 0xd0
	// Line 65, Address: 0x102e8d0, Func Offset: 0xf0
	// Func End, Address: 0x102e8e0, Func Offset: 0x100
}

// 
// Start address: 0x102e8e0
void die(_anon1* moviewk)
{
	// Line 69, Address: 0x102e8e0, Func Offset: 0
	// Line 70, Address: 0x102e8ec, Func Offset: 0xc
	// Line 71, Address: 0x102e8f8, Func Offset: 0x18
	// Func End, Address: 0x102e908, Func Offset: 0x28
}

// 
// Start address: 0x102e910
void m_init(_anon1* moviewk)
{
	_anon1* new_actwk;
	// Line 74, Address: 0x102e910, Func Offset: 0
	// Line 77, Address: 0x102e91c, Func Offset: 0xc
	// Line 78, Address: 0x102e944, Func Offset: 0x34
	// Line 80, Address: 0x102e950, Func Offset: 0x40
	// Line 81, Address: 0x102e960, Func Offset: 0x50
	// Line 82, Address: 0x102e970, Func Offset: 0x60
	// Line 83, Address: 0x102e97c, Func Offset: 0x6c
	// Line 84, Address: 0x102e9a0, Func Offset: 0x90
	// Line 86, Address: 0x102e9ac, Func Offset: 0x9c
	// Line 87, Address: 0x102e9bc, Func Offset: 0xac
	// Line 89, Address: 0x102e9cc, Func Offset: 0xbc
	// Line 90, Address: 0x102e9f4, Func Offset: 0xe4
	// Line 91, Address: 0x102ea04, Func Offset: 0xf4
	// Line 92, Address: 0x102ea28, Func Offset: 0x118
	// Line 93, Address: 0x102ea4c, Func Offset: 0x13c
	// Line 94, Address: 0x102ea58, Func Offset: 0x148
	// Line 96, Address: 0x102ea8c, Func Offset: 0x17c
	// Line 97, Address: 0x102eab4, Func Offset: 0x1a4
	// Line 98, Address: 0x102eac4, Func Offset: 0x1b4
	// Line 99, Address: 0x102eae8, Func Offset: 0x1d8
	// Line 100, Address: 0x102eb0c, Func Offset: 0x1fc
	// Line 101, Address: 0x102eb18, Func Offset: 0x208
	// Line 103, Address: 0x102eb4c, Func Offset: 0x23c
	// Line 104, Address: 0x102eb74, Func Offset: 0x264
	// Line 105, Address: 0x102eb80, Func Offset: 0x270
	// Line 106, Address: 0x102eba4, Func Offset: 0x294
	// Line 107, Address: 0x102ebc8, Func Offset: 0x2b8
	// Line 108, Address: 0x102ebd4, Func Offset: 0x2c4
	// Line 110, Address: 0x102ec08, Func Offset: 0x2f8
	// Line 111, Address: 0x102ec30, Func Offset: 0x320
	// Line 112, Address: 0x102ec3c, Func Offset: 0x32c
	// Line 113, Address: 0x102ec60, Func Offset: 0x350
	// Line 114, Address: 0x102ec80, Func Offset: 0x370
	// Line 115, Address: 0x102ec8c, Func Offset: 0x37c
	// Line 116, Address: 0x102ecc0, Func Offset: 0x3b0
	// Func End, Address: 0x102ecd0, Func Offset: 0x3c0
}

// 
// Start address: 0x102ecd0
void m_wait(_anon1* moviewk)
{
	// Line 120, Address: 0x102ecd0, Func Offset: 0
	// Line 121, Address: 0x102ecdc, Func Offset: 0xc
	// Line 122, Address: 0x102ecf0, Func Offset: 0x20
	// Line 123, Address: 0x102ed04, Func Offset: 0x34
	// Line 125, Address: 0x102ed14, Func Offset: 0x44
	// Line 126, Address: 0x102ed28, Func Offset: 0x58
	// Func End, Address: 0x102ed38, Func Offset: 0x68
}

// 
// Start address: 0x102ed40
void m_die(_anon1* moviewk)
{
	// Line 130, Address: 0x102ed40, Func Offset: 0
	// Line 131, Address: 0x102ed4c, Func Offset: 0xc
	// Line 132, Address: 0x102ed5c, Func Offset: 0x1c
	// Line 133, Address: 0x102ed68, Func Offset: 0x28
	// Line 134, Address: 0x102ed74, Func Offset: 0x34
	// Line 136, Address: 0x102ed80, Func Offset: 0x40
	// Line 137, Address: 0x102edb8, Func Offset: 0x78
	// Line 138, Address: 0x102edc4, Func Offset: 0x84
	// Func End, Address: 0x102edd4, Func Offset: 0x94
}

// 
// Start address: 0x102ede0
void m_baku(_anon1* moviewk)
{
	char* data_tbl;
	char time_limit;
	char x_add;
	char y_add;
	_anon1* new_actwk;
	// Line 142, Address: 0x102ede0, Func Offset: 0
	// Line 146, Address: 0x102edfc, Func Offset: 0x1c
	// Line 147, Address: 0x102ee04, Func Offset: 0x24
	// Line 148, Address: 0x102ee20, Func Offset: 0x40
	// Line 149, Address: 0x102ee30, Func Offset: 0x50
	// Line 150, Address: 0x102ee3c, Func Offset: 0x5c
	// Line 153, Address: 0x102ee44, Func Offset: 0x64
	// Line 155, Address: 0x102ee6c, Func Offset: 0x8c
	// Line 156, Address: 0x102ee84, Func Offset: 0xa4
	// Line 158, Address: 0x102ee90, Func Offset: 0xb0
	// Line 159, Address: 0x102eea4, Func Offset: 0xc4
	// Line 160, Address: 0x102eeb0, Func Offset: 0xd0
	// Line 161, Address: 0x102eebc, Func Offset: 0xdc
	// Line 162, Address: 0x102eef0, Func Offset: 0x110
	// Line 163, Address: 0x102ef24, Func Offset: 0x144
	// Line 164, Address: 0x102ef30, Func Offset: 0x150
	// Func End, Address: 0x102ef50, Func Offset: 0x170
}

// 
// Start address: 0x102ef50
void m1wait(_anon1* moviewk)
{
	// Line 168, Address: 0x102ef50, Func Offset: 0
	// Line 169, Address: 0x102ef5c, Func Offset: 0xc
	// Line 170, Address: 0x102ef84, Func Offset: 0x34
	// Line 171, Address: 0x102ef90, Func Offset: 0x40
	// Line 173, Address: 0x102ef9c, Func Offset: 0x4c
	// Func End, Address: 0x102efac, Func Offset: 0x5c
}

// 
// Start address: 0x102efb0
void sub(_anon1* moviewk)
{
	_anon1* parent;
	// Line 177, Address: 0x102efb0, Func Offset: 0
	// Line 180, Address: 0x102efc0, Func Offset: 0x10
	// Line 181, Address: 0x102efe4, Func Offset: 0x34
	// Line 182, Address: 0x102f00c, Func Offset: 0x5c
	// Line 184, Address: 0x102f030, Func Offset: 0x80
	// Line 185, Address: 0x102f058, Func Offset: 0xa8
	// Line 186, Address: 0x102f064, Func Offset: 0xb4
	// Func End, Address: 0x102f078, Func Offset: 0xc8
}

// 
// Start address: 0x102f080
void s_init(_anon1* moviewk)
{
	// Line 190, Address: 0x102f080, Func Offset: 0
	// Line 191, Address: 0x102f088, Func Offset: 0x8
	// Line 192, Address: 0x102f098, Func Offset: 0x18
	// Line 193, Address: 0x102f0a8, Func Offset: 0x28
	// Line 195, Address: 0x102f0b4, Func Offset: 0x34
	// Line 196, Address: 0x102f0c4, Func Offset: 0x44
	// Line 197, Address: 0x102f0dc, Func Offset: 0x5c
	// Line 198, Address: 0x102f0f4, Func Offset: 0x74
	// Line 199, Address: 0x102f100, Func Offset: 0x80
	// Line 200, Address: 0x102f108, Func Offset: 0x88
	// Line 201, Address: 0x102f110, Func Offset: 0x90
	// Line 202, Address: 0x102f128, Func Offset: 0xa8
	// Line 203, Address: 0x102f134, Func Offset: 0xb4
	// Line 205, Address: 0x102f140, Func Offset: 0xc0
	// Func End, Address: 0x102f14c, Func Offset: 0xcc
}

// 
// Start address: 0x102f150
void s_move(_anon1* moviewk)
{
	// Line 209, Address: 0x102f150, Func Offset: 0
	// Line 210, Address: 0x102f15c, Func Offset: 0xc
	// Line 211, Address: 0x102f170, Func Offset: 0x20
	// Line 212, Address: 0x102f17c, Func Offset: 0x2c
	// Func End, Address: 0x102f18c, Func Offset: 0x3c
}

