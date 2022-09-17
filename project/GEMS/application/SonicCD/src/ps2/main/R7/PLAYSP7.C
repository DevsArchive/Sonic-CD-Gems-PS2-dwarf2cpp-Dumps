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
typedef short type_2[7];
typedef short type_3[11];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon1 type_6[128];
typedef short* type_7[4];
typedef short type_8[6];
typedef short type_9[7];

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

short playsp_tbla[7];
short playsp_tblb[11];
short playsp_tblc[6];
short playsp_tbld[7];
short* playsp_tbl[4];
_anon1 actwk[128];
unsigned char generate_flag;
unsigned char time_flag;
_anon5 gametimer;

void playsp();

// 
// Start address: 0x101e000
void playsp()
{
	int i;
	short wD0;
	short wD1;
	short wD2;
	short wD3;
	short* pPlaysptbl;
	_anon1* pNewactwk;
	// Line 40, Address: 0x101e000, Func Offset: 0
	// Line 46, Address: 0x101e020, Func Offset: 0x20
	// Line 48, Address: 0x101e03c, Func Offset: 0x3c
	// Line 49, Address: 0x101e04c, Func Offset: 0x4c
	// Line 51, Address: 0x101e068, Func Offset: 0x68
	// Line 53, Address: 0x101e07c, Func Offset: 0x7c
	// Line 54, Address: 0x101e0a0, Func Offset: 0xa0
	// Line 55, Address: 0x101e0b0, Func Offset: 0xb0
	// Line 56, Address: 0x101e0e4, Func Offset: 0xe4
	// Line 57, Address: 0x101e104, Func Offset: 0x104
	// Line 58, Address: 0x101e118, Func Offset: 0x118
	// Line 60, Address: 0x101e130, Func Offset: 0x130
	// Line 62, Address: 0x101e14c, Func Offset: 0x14c
	// Line 65, Address: 0x101e150, Func Offset: 0x150
	// Line 66, Address: 0x101e16c, Func Offset: 0x16c
	// Line 67, Address: 0x101e17c, Func Offset: 0x17c
	// Line 69, Address: 0x101e194, Func Offset: 0x194
	// Line 71, Address: 0x101e1a8, Func Offset: 0x1a8
	// Line 72, Address: 0x101e1b4, Func Offset: 0x1b4
	// Line 73, Address: 0x101e1c4, Func Offset: 0x1c4
	// Line 74, Address: 0x101e1d4, Func Offset: 0x1d4
	// Line 75, Address: 0x101e1fc, Func Offset: 0x1fc
	// Line 76, Address: 0x101e214, Func Offset: 0x214
	// Line 78, Address: 0x101e224, Func Offset: 0x224
	// Func End, Address: 0x101e24c, Func Offset: 0x24c
}

