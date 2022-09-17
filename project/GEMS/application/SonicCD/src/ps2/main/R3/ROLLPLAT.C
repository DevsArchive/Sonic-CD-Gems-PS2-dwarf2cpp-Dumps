typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_9)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[4];
typedef unsigned char type_3[6];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef unsigned char* type_6[2];
typedef _anon1 type_7[128];
typedef unsigned char type_8[6];
typedef void(*type_10)(_anon1*)[2];
typedef short type_11[3];

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
unsigned char pchg01[6];
unsigned char* pchg[2];
_anon0 kpat00;
_anon0 kpat01;
_anon0 kpat02;
_anon0 kpat03;
_anon0* kaitenban_pat[4];
_anon1 actwk[128];

void kaitenban(_anon1* banwk);
void act_init(_anon1* banwk);
void act_move(_anon1* banwk);
void act_check(_anon1* banwk);

// 
// Start address: 0x102f6c0
void kaitenban(_anon1* banwk)
{
	void(*act_tbl)(_anon1*)[2];
	// Line 27, Address: 0x102f6c0, Func Offset: 0
	// Line 28, Address: 0x102f6cc, Func Offset: 0xc
	// Line 30, Address: 0x102f6e8, Func Offset: 0x28
	// Line 31, Address: 0x102f724, Func Offset: 0x64
	// Line 32, Address: 0x102f730, Func Offset: 0x70
	// Line 33, Address: 0x102f73c, Func Offset: 0x7c
	// Func End, Address: 0x102f74c, Func Offset: 0x8c
}

// 
// Start address: 0x102f750
void act_init(_anon1* banwk)
{
	_anon1* new_actwk;
	// Line 37, Address: 0x102f750, Func Offset: 0
	// Line 40, Address: 0x102f75c, Func Offset: 0xc
	// Line 41, Address: 0x102f76c, Func Offset: 0x1c
	// Line 42, Address: 0x102f77c, Func Offset: 0x2c
	// Line 43, Address: 0x102f788, Func Offset: 0x38
	// Line 44, Address: 0x102f794, Func Offset: 0x44
	// Line 46, Address: 0x102f7a0, Func Offset: 0x50
	// Line 47, Address: 0x102f7b0, Func Offset: 0x60
	// Line 48, Address: 0x102f7bc, Func Offset: 0x6c
	// Line 49, Address: 0x102f7d8, Func Offset: 0x88
	// Line 50, Address: 0x102f7e4, Func Offset: 0x94
	// Line 52, Address: 0x102f7fc, Func Offset: 0xac
	// Line 53, Address: 0x102f810, Func Offset: 0xc0
	// Line 54, Address: 0x102f844, Func Offset: 0xf4
	// Line 55, Address: 0x102f878, Func Offset: 0x128
	// Line 56, Address: 0x102f888, Func Offset: 0x138
	// Line 57, Address: 0x102f894, Func Offset: 0x144
	// Line 58, Address: 0x102f8a0, Func Offset: 0x150
	// Line 60, Address: 0x102f8ac, Func Offset: 0x15c
	// Line 61, Address: 0x102f8b8, Func Offset: 0x168
	// Func End, Address: 0x102f8c8, Func Offset: 0x178
}

// 
// Start address: 0x102f8d0
void act_move(_anon1* banwk)
{
	// Line 65, Address: 0x102f8d0, Func Offset: 0
	// Line 66, Address: 0x102f8dc, Func Offset: 0xc
	// Line 68, Address: 0x102f8e8, Func Offset: 0x18
	// Line 69, Address: 0x102f900, Func Offset: 0x30
	// Line 70, Address: 0x102f910, Func Offset: 0x40
	// Line 72, Address: 0x102f924, Func Offset: 0x54
	// Func End, Address: 0x102f934, Func Offset: 0x64
}

// 
// Start address: 0x102f940
void act_check(_anon1* banwk)
{
	short tbl[3];
	short cal_d0;
	_anon1* new_actwk;
	// Line 75, Address: 0x102f940, Func Offset: 0
	// Line 76, Address: 0x102f950, Func Offset: 0x10
	// Line 80, Address: 0x102f974, Func Offset: 0x34
	// Line 81, Address: 0x102f9b0, Func Offset: 0x70
	// Line 82, Address: 0x102f9c0, Func Offset: 0x80
	// Line 83, Address: 0x102f9fc, Func Offset: 0xbc
	// Line 84, Address: 0x102fa0c, Func Offset: 0xcc
	// Line 85, Address: 0x102fa20, Func Offset: 0xe0
	// Line 86, Address: 0x102fa2c, Func Offset: 0xec
	// Line 87, Address: 0x102fa58, Func Offset: 0x118
	// Line 89, Address: 0x102fa64, Func Offset: 0x124
	// Line 90, Address: 0x102fa74, Func Offset: 0x134
	// Line 91, Address: 0x102fa80, Func Offset: 0x140
	// Line 94, Address: 0x102fa90, Func Offset: 0x150
	// Line 95, Address: 0x102faac, Func Offset: 0x16c
	// Line 96, Address: 0x102fabc, Func Offset: 0x17c
	// Line 98, Address: 0x102facc, Func Offset: 0x18c
	// Line 100, Address: 0x102fadc, Func Offset: 0x19c
	// Line 101, Address: 0x102faf0, Func Offset: 0x1b0
	// Line 102, Address: 0x102fb24, Func Offset: 0x1e4
	// Line 103, Address: 0x102fb58, Func Offset: 0x218
	// Line 104, Address: 0x102fb68, Func Offset: 0x228
	// Line 105, Address: 0x102fb74, Func Offset: 0x234
	// Line 108, Address: 0x102fbb0, Func Offset: 0x270
	// Line 109, Address: 0x102fbcc, Func Offset: 0x28c
	// Line 110, Address: 0x102fbf8, Func Offset: 0x2b8
	// Line 113, Address: 0x102fc00, Func Offset: 0x2c0
	// Line 114, Address: 0x102fc0c, Func Offset: 0x2cc
	// Line 115, Address: 0x102fc38, Func Offset: 0x2f8
	// Line 116, Address: 0x102fc64, Func Offset: 0x324
	// Line 117, Address: 0x102fc90, Func Offset: 0x350
	// Line 118, Address: 0x102fcbc, Func Offset: 0x37c
	// Func End, Address: 0x102fcd0, Func Offset: 0x390
}

