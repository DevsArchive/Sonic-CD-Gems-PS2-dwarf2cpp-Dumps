typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[7];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef void(*type_6)(_anon1*)[2];
typedef _anon1 type_7[128];
typedef _anon0* type_8[1];

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

_anon0 chb00;
_anon0* chibipat[1];
_anon1 actwk[128];
_anon5 stageno;

void chibi_coli(_anon1* smallwk);
void chibi_init(_anon1* smallwk);
void chibi_move(_anon1* smallwk);
void playsp();
unsigned char playsp_chk(short block_no);

// 
// Start address: 0x1026080
void chibi_coli(_anon1* smallwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 19, Address: 0x1026080, Func Offset: 0
	// Line 20, Address: 0x102608c, Func Offset: 0xc
	// Line 22, Address: 0x10260a8, Func Offset: 0x28
	// Line 23, Address: 0x10260e4, Func Offset: 0x64
	// Line 24, Address: 0x10260f0, Func Offset: 0x70
	// Line 25, Address: 0x10260fc, Func Offset: 0x7c
	// Func End, Address: 0x102610c, Func Offset: 0x8c
}

// 
// Start address: 0x1026110
void chibi_init(_anon1* smallwk)
{
	// Line 29, Address: 0x1026110, Func Offset: 0
	// Line 30, Address: 0x102611c, Func Offset: 0xc
	// Line 31, Address: 0x102612c, Func Offset: 0x1c
	// Line 32, Address: 0x102613c, Func Offset: 0x2c
	// Line 33, Address: 0x102614c, Func Offset: 0x3c
	// Line 34, Address: 0x1026170, Func Offset: 0x60
	// Line 35, Address: 0x102617c, Func Offset: 0x6c
	// Func End, Address: 0x102618c, Func Offset: 0x7c
}

// 
// Start address: 0x1026190
void chibi_move(_anon1* smallwk)
{
	// Line 38, Address: 0x1026190, Func Offset: 0
	// Line 39, Address: 0x102619c, Func Offset: 0xc
	// Line 40, Address: 0x10261b0, Func Offset: 0x20
	// Func End, Address: 0x10261c0, Func Offset: 0x30
}

// 
// Start address: 0x10261c0
void playsp()
{
	short block_no;
	short block_tmp;
	short x_add;
	// Line 44, Address: 0x10261c0, Func Offset: 0
	// Line 47, Address: 0x10261d4, Func Offset: 0x14
	// Line 49, Address: 0x10261f0, Func Offset: 0x30
	// Line 52, Address: 0x102626c, Func Offset: 0xac
	// Line 53, Address: 0x1026288, Func Offset: 0xc8
	// Line 54, Address: 0x102629c, Func Offset: 0xdc
	// Line 57, Address: 0x1026318, Func Offset: 0x158
	// Line 58, Address: 0x1026334, Func Offset: 0x174
	// Line 60, Address: 0x102634c, Func Offset: 0x18c
	// Line 61, Address: 0x1026374, Func Offset: 0x1b4
	// Line 62, Address: 0x1026380, Func Offset: 0x1c0
	// Line 63, Address: 0x10263b0, Func Offset: 0x1f0
	// Line 64, Address: 0x10263c4, Func Offset: 0x204
	// Func End, Address: 0x10263e0, Func Offset: 0x220
}

// 
// Start address: 0x10263e0
unsigned char playsp_chk(short block_no)
{
	short i;
	short belt[7];
	// Line 67, Address: 0x10263e0, Func Offset: 0
	// Line 68, Address: 0x10263ec, Func Offset: 0xc
	// Line 69, Address: 0x10263f0, Func Offset: 0x10
	// Line 71, Address: 0x102641c, Func Offset: 0x3c
	// Line 72, Address: 0x1026480, Func Offset: 0xa0
	// Line 75, Address: 0x1026484, Func Offset: 0xa4
	// Func End, Address: 0x1026494, Func Offset: 0xb4
}

