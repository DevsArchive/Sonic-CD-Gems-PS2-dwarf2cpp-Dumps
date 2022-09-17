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
typedef _anon0* type_2[3];
typedef char type_3[5];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef char* type_6[2];
typedef char type_7[5];
typedef _anon1 type_8[128];

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

_anon0 patstop1;
_anon0 patstop2;
_anon0 patstop3;
_anon0* stopper_pat[3];
char pchg0[5];
char pchg1[5];
char* pchg[2];
_anon1 actwk[128];

void stopper(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_move(_anon1* actionwk);
void act_open(_anon1* actionwk);
void act_close(_anon1* actionwk);
void act_move1(_anon1* actionwk);

// 
// Start address: 0x102f210
void stopper(_anon1* actionwk)
{
	_anon1* a1;
	// Line 45, Address: 0x102f210, Func Offset: 0
	// Line 48, Address: 0x102f220, Func Offset: 0x10
	// Line 51, Address: 0x102f278, Func Offset: 0x68
	// Line 53, Address: 0x102f284, Func Offset: 0x74
	// Line 54, Address: 0x102f290, Func Offset: 0x80
	// Line 56, Address: 0x102f298, Func Offset: 0x88
	// Line 57, Address: 0x102f2a4, Func Offset: 0x94
	// Line 59, Address: 0x102f2ac, Func Offset: 0x9c
	// Line 60, Address: 0x102f2b8, Func Offset: 0xa8
	// Line 62, Address: 0x102f2c0, Func Offset: 0xb0
	// Line 63, Address: 0x102f2cc, Func Offset: 0xbc
	// Line 65, Address: 0x102f2d4, Func Offset: 0xc4
	// Line 70, Address: 0x102f2e0, Func Offset: 0xd0
	// Line 71, Address: 0x102f304, Func Offset: 0xf4
	// Line 73, Address: 0x102f318, Func Offset: 0x108
	// Line 74, Address: 0x102f324, Func Offset: 0x114
	// Line 76, Address: 0x102f32c, Func Offset: 0x11c
	// Line 78, Address: 0x102f338, Func Offset: 0x128
	// Func End, Address: 0x102f34c, Func Offset: 0x13c
}

// 
// Start address: 0x102f350
void act_init(_anon1* actionwk)
{
	// Line 80, Address: 0x102f350, Func Offset: 0
	// Line 81, Address: 0x102f358, Func Offset: 0x8
	// Line 82, Address: 0x102f368, Func Offset: 0x18
	// Line 83, Address: 0x102f378, Func Offset: 0x28
	// Line 84, Address: 0x102f384, Func Offset: 0x34
	// Line 85, Address: 0x102f390, Func Offset: 0x40
	// Line 86, Address: 0x102f3a0, Func Offset: 0x50
	// Line 87, Address: 0x102f3ac, Func Offset: 0x5c
	// Line 88, Address: 0x102f3b8, Func Offset: 0x68
	// Func End, Address: 0x102f3c4, Func Offset: 0x74
}

// 
// Start address: 0x102f3d0
void act_move(_anon1* actionwk)
{
	_anon1* a1;
	// Line 90, Address: 0x102f3d0, Func Offset: 0
	// Line 93, Address: 0x102f3e0, Func Offset: 0x10
	// Line 94, Address: 0x102f3f8, Func Offset: 0x28
	// Line 95, Address: 0x102f400, Func Offset: 0x30
	// Line 96, Address: 0x102f420, Func Offset: 0x50
	// Line 97, Address: 0x102f42c, Func Offset: 0x5c
	// Line 98, Address: 0x102f438, Func Offset: 0x68
	// Line 99, Address: 0x102f444, Func Offset: 0x74
	// Line 100, Address: 0x102f450, Func Offset: 0x80
	// Line 101, Address: 0x102f454, Func Offset: 0x84
	// Line 102, Address: 0x102f45c, Func Offset: 0x8c
	// Func End, Address: 0x102f470, Func Offset: 0xa0
}

// 
// Start address: 0x102f470
void act_open(_anon1* actionwk)
{
	// Line 104, Address: 0x102f470, Func Offset: 0
	// Line 105, Address: 0x102f47c, Func Offset: 0xc
	// Line 106, Address: 0x102f488, Func Offset: 0x18
	// Line 107, Address: 0x102f498, Func Offset: 0x28
	// Line 108, Address: 0x102f4a4, Func Offset: 0x34
	// Func End, Address: 0x102f4b4, Func Offset: 0x44
}

// 
// Start address: 0x102f4c0
void act_close(_anon1* actionwk)
{
	// Line 110, Address: 0x102f4c0, Func Offset: 0
	// Line 111, Address: 0x102f4cc, Func Offset: 0xc
	// Line 112, Address: 0x102f4d8, Func Offset: 0x18
	// Line 113, Address: 0x102f4e8, Func Offset: 0x28
	// Line 114, Address: 0x102f4f4, Func Offset: 0x34
	// Func End, Address: 0x102f504, Func Offset: 0x44
}

// 
// Start address: 0x102f510
void act_move1(_anon1* actionwk)
{
	// Line 116, Address: 0x102f510, Func Offset: 0
	// Line 117, Address: 0x102f51c, Func Offset: 0xc
	// Line 118, Address: 0x102f530, Func Offset: 0x20
	// Func End, Address: 0x102f540, Func Offset: 0x30
}

