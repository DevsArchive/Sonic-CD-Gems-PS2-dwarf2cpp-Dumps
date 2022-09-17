typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef unsigned char type_1[7];
typedef _anon7 type_2[0];
typedef _anon0* type_3[5];
typedef _anon0* type_4[5];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef unsigned char* type_7[1];
typedef unsigned char type_8[32];

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

unsigned char pchg_00[7];
unsigned char* pchg[1];
_anon0 screw0_pat00;
_anon0 screw0_pat01;
_anon0 screw0_pat02;
_anon0 screw0_pat03;
_anon0 screw0_pat04;
_anon0* pat_screw0[5];
_anon0 screw1_pat00;
_anon0 screw1_pat01;
_anon0 screw1_pat02;
_anon0 screw1_pat03;
_anon0 screw1_pat04;
_anon0* pat_screw1[5];
unsigned char switchflag[32];

void screw(_anon1* pActwk);

// 
// Start address: 0x101e270
void screw(_anon1* pActwk)
{
	// Line 124, Address: 0x101e270, Func Offset: 0
	// Line 125, Address: 0x101e27c, Func Offset: 0xc
	// Line 127, Address: 0x101e28c, Func Offset: 0x1c
	// Line 128, Address: 0x101e29c, Func Offset: 0x2c
	// Line 129, Address: 0x101e2ac, Func Offset: 0x3c
	// Line 130, Address: 0x101e2b8, Func Offset: 0x48
	// Line 132, Address: 0x101e2c4, Func Offset: 0x54
	// Line 133, Address: 0x101e2e0, Func Offset: 0x70
	// Line 137, Address: 0x101e2ec, Func Offset: 0x7c
	// Line 138, Address: 0x101e308, Func Offset: 0x98
	// Line 139, Address: 0x101e318, Func Offset: 0xa8
	// Line 140, Address: 0x101e324, Func Offset: 0xb4
	// Line 141, Address: 0x101e330, Func Offset: 0xc0
	// Line 142, Address: 0x101e338, Func Offset: 0xc8
	// Line 143, Address: 0x101e348, Func Offset: 0xd8
	// Line 144, Address: 0x101e354, Func Offset: 0xe4
	// Line 147, Address: 0x101e360, Func Offset: 0xf0
	// Line 148, Address: 0x101e37c, Func Offset: 0x10c
	// Line 149, Address: 0x101e38c, Func Offset: 0x11c
	// Line 154, Address: 0x101e39c, Func Offset: 0x12c
	// Line 156, Address: 0x101e3f0, Func Offset: 0x180
	// Line 157, Address: 0x101e3fc, Func Offset: 0x18c
	// Line 161, Address: 0x101e418, Func Offset: 0x1a8
	// Line 162, Address: 0x101e428, Func Offset: 0x1b8
	// Line 163, Address: 0x101e430, Func Offset: 0x1c0
	// Line 165, Address: 0x101e438, Func Offset: 0x1c8
	// Line 167, Address: 0x101e44c, Func Offset: 0x1dc
	// Line 168, Address: 0x101e458, Func Offset: 0x1e8
	// Line 169, Address: 0x101e464, Func Offset: 0x1f4
	// Func End, Address: 0x101e474, Func Offset: 0x204
}

