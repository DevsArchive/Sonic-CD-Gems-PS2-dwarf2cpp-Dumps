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
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon1 type_4[128];
typedef _anon0* type_5[1];

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

_anon0 dair6pat0;
_anon0* dair6pat[1];
_anon1 actwk[128];
_anon5 gametimer;

void dair6(_anon1* actionwk);
void dair6_ridechk(_anon1* actionwk);
void dair6_init(_anon1* actionwk);
void dair6_move(_anon1* actionwk);
void mv_up(_anon1* actionwk);
void mv_down(_anon1* actionwk);
void mv_right(_anon1* actionwk);
void mv_left(_anon1* actionwk);
short dair6_sub2(_anon1* actionwk);

// 
// Start address: 0x101a270
void dair6(_anon1* actionwk)
{
	// Line 51, Address: 0x101a270, Func Offset: 0
	// Line 52, Address: 0x101a27c, Func Offset: 0xc
	// Line 55, Address: 0x101a2a4, Func Offset: 0x34
	// Line 57, Address: 0x101a2b0, Func Offset: 0x40
	// Line 60, Address: 0x101a2bc, Func Offset: 0x4c
	// Line 61, Address: 0x101a2c8, Func Offset: 0x58
	// Line 62, Address: 0x101a2dc, Func Offset: 0x6c
	// Func End, Address: 0x101a2ec, Func Offset: 0x7c
}

// 
// Start address: 0x101a2f0
void dair6_ridechk(_anon1* actionwk)
{
	// Line 64, Address: 0x101a2f0, Func Offset: 0
	// Line 65, Address: 0x101a2fc, Func Offset: 0xc
	// Line 66, Address: 0x101a310, Func Offset: 0x20
	// Func End, Address: 0x101a320, Func Offset: 0x30
}

// 
// Start address: 0x101a320
void dair6_init(_anon1* actionwk)
{
	// Line 69, Address: 0x101a320, Func Offset: 0
	// Line 70, Address: 0x101a328, Func Offset: 0x8
	// Line 71, Address: 0x101a338, Func Offset: 0x18
	// Line 72, Address: 0x101a344, Func Offset: 0x24
	// Line 73, Address: 0x101a350, Func Offset: 0x30
	// Line 74, Address: 0x101a360, Func Offset: 0x40
	// Line 75, Address: 0x101a370, Func Offset: 0x50
	// Line 76, Address: 0x101a380, Func Offset: 0x60
	// Line 77, Address: 0x101a38c, Func Offset: 0x6c
	// Line 78, Address: 0x101a398, Func Offset: 0x78
	// Line 79, Address: 0x101a3a8, Func Offset: 0x88
	// Func End, Address: 0x101a3b4, Func Offset: 0x94
}

// 
// Start address: 0x101a3c0
void dair6_move(_anon1* actionwk)
{
	// Line 82, Address: 0x101a3c0, Func Offset: 0
	// Line 83, Address: 0x101a3cc, Func Offset: 0xc
	// Line 86, Address: 0x101a410, Func Offset: 0x50
	// Line 87, Address: 0x101a41c, Func Offset: 0x5c
	// Line 89, Address: 0x101a424, Func Offset: 0x64
	// Line 90, Address: 0x101a430, Func Offset: 0x70
	// Line 92, Address: 0x101a438, Func Offset: 0x78
	// Line 93, Address: 0x101a444, Func Offset: 0x84
	// Line 95, Address: 0x101a44c, Func Offset: 0x8c
	// Line 98, Address: 0x101a458, Func Offset: 0x98
	// Func End, Address: 0x101a468, Func Offset: 0xa8
}

// 
// Start address: 0x101a470
void mv_up(_anon1* actionwk)
{
	short d0;
	// Line 101, Address: 0x101a470, Func Offset: 0
	// Line 104, Address: 0x101a480, Func Offset: 0x10
	// Line 105, Address: 0x101a494, Func Offset: 0x24
	// Line 106, Address: 0x101a4b0, Func Offset: 0x40
	// Line 107, Address: 0x101a4dc, Func Offset: 0x6c
	// Line 108, Address: 0x101a4e8, Func Offset: 0x78
	// Func End, Address: 0x101a4fc, Func Offset: 0x8c
}

// 
// Start address: 0x101a500
void mv_down(_anon1* actionwk)
{
	short d0;
	// Line 111, Address: 0x101a500, Func Offset: 0
	// Line 114, Address: 0x101a510, Func Offset: 0x10
	// Line 115, Address: 0x101a524, Func Offset: 0x24
	// Line 116, Address: 0x101a550, Func Offset: 0x50
	// Line 117, Address: 0x101a55c, Func Offset: 0x5c
	// Func End, Address: 0x101a570, Func Offset: 0x70
}

// 
// Start address: 0x101a570
void mv_right(_anon1* actionwk)
{
	_anon2 wk;
	_anon2 d0l;
	short d0;
	// Line 120, Address: 0x101a570, Func Offset: 0
	// Line 124, Address: 0x101a580, Func Offset: 0x10
	// Line 125, Address: 0x101a58c, Func Offset: 0x1c
	// Line 126, Address: 0x101a5a0, Func Offset: 0x30
	// Line 127, Address: 0x101a5cc, Func Offset: 0x5c
	// Line 128, Address: 0x101a5e0, Func Offset: 0x70
	// Line 129, Address: 0x101a5ec, Func Offset: 0x7c
	// Line 130, Address: 0x101a5f8, Func Offset: 0x88
	// Line 131, Address: 0x101a604, Func Offset: 0x94
	// Func End, Address: 0x101a618, Func Offset: 0xa8
}

// 
// Start address: 0x101a620
void mv_left(_anon1* actionwk)
{
	short d0;
	_anon2 d0l;
	_anon2 wk;
	// Line 134, Address: 0x101a620, Func Offset: 0
	// Line 138, Address: 0x101a630, Func Offset: 0x10
	// Line 139, Address: 0x101a63c, Func Offset: 0x1c
	// Line 140, Address: 0x101a650, Func Offset: 0x30
	// Line 141, Address: 0x101a66c, Func Offset: 0x4c
	// Line 142, Address: 0x101a698, Func Offset: 0x78
	// Line 143, Address: 0x101a6ac, Func Offset: 0x8c
	// Line 144, Address: 0x101a6b8, Func Offset: 0x98
	// Line 145, Address: 0x101a6c4, Func Offset: 0xa4
	// Line 146, Address: 0x101a6d0, Func Offset: 0xb0
	// Func End, Address: 0x101a6e4, Func Offset: 0xc4
}

// 
// Start address: 0x101a6f0
short dair6_sub2(_anon1* actionwk)
{
	short sin;
	short cos;
	// Line 148, Address: 0x101a6f0, Func Offset: 0
	// Line 151, Address: 0x101a6fc, Func Offset: 0xc
	// Line 152, Address: 0x101a724, Func Offset: 0x34
	// Line 153, Address: 0x101a770, Func Offset: 0x80
	// Line 154, Address: 0x101a780, Func Offset: 0x90
	// Line 155, Address: 0x101a784, Func Offset: 0x94
	// Func End, Address: 0x101a794, Func Offset: 0xa4
}

