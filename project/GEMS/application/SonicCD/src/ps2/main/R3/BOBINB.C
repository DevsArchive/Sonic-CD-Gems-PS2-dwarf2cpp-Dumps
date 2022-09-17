typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_3)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char* type_2[1];
typedef void(*type_4)(_anon1*)[3];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon0* type_7[2];
typedef unsigned char type_8[7];

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

unsigned char pat00[7];
unsigned char* pchg[1];
_anon0 bbb00;
_anon0 bbb01;
_anon0* pat_bobinbreak[2];

void bobinbreak(_anon1* bobinwk);
void a_init(_anon1* bobinwk);
void a_move(_anon1* bobinwk);
void a_die(_anon1* bobinwk);

// 
// Start address: 0x101b370
void bobinbreak(_anon1* bobinwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 30, Address: 0x101b370, Func Offset: 0
	// Line 31, Address: 0x101b37c, Func Offset: 0xc
	// Line 33, Address: 0x101b3a0, Func Offset: 0x30
	// Line 34, Address: 0x101b3dc, Func Offset: 0x6c
	// Line 35, Address: 0x101b3e8, Func Offset: 0x78
	// Func End, Address: 0x101b3f8, Func Offset: 0x88
}

// 
// Start address: 0x101b400
void a_init(_anon1* bobinwk)
{
	// Line 39, Address: 0x101b400, Func Offset: 0
	// Line 40, Address: 0x101b40c, Func Offset: 0xc
	// Line 41, Address: 0x101b41c, Func Offset: 0x1c
	// Line 42, Address: 0x101b42c, Func Offset: 0x2c
	// Line 43, Address: 0x101b438, Func Offset: 0x38
	// Line 44, Address: 0x101b444, Func Offset: 0x44
	// Line 45, Address: 0x101b450, Func Offset: 0x50
	// Line 47, Address: 0x101b45c, Func Offset: 0x5c
	// Line 49, Address: 0x101b46c, Func Offset: 0x6c
	// Line 50, Address: 0x101b478, Func Offset: 0x78
	// Line 51, Address: 0x101b488, Func Offset: 0x88
	// Func End, Address: 0x101b498, Func Offset: 0x98
}

// 
// Start address: 0x101b4a0
void a_move(_anon1* bobinwk)
{
	// Line 55, Address: 0x101b4a0, Func Offset: 0
	// Line 56, Address: 0x101b4ac, Func Offset: 0xc
	// Line 57, Address: 0x101b4c0, Func Offset: 0x20
	// Func End, Address: 0x101b4d0, Func Offset: 0x30
}

// 
// Start address: 0x101b4d0
void a_die(_anon1* bobinwk)
{
	// Line 61, Address: 0x101b4d0, Func Offset: 0
	// Line 62, Address: 0x101b4dc, Func Offset: 0xc
	// Line 63, Address: 0x101b4e8, Func Offset: 0x18
	// Func End, Address: 0x101b4f8, Func Offset: 0x28
}

