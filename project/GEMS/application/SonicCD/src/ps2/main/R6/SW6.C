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
typedef _anon0* type_5[2];
typedef unsigned char type_6[32];

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

_anon0* pat_sw6[2];
_anon1 actwk[128];
unsigned char switchflag[32];
_anon0 pat0_sw6;
_anon0 pat1_sw6;

void sw6(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_move(_anon1* pActwk);

// 
// Start address: 0x1016de0
void sw6(_anon1* pActwk)
{
	// Line 70, Address: 0x1016de0, Func Offset: 0
	// Line 71, Address: 0x1016dec, Func Offset: 0xc
	// Line 72, Address: 0x1016e00, Func Offset: 0x20
	// Line 74, Address: 0x1016e14, Func Offset: 0x34
	// Line 75, Address: 0x1016e20, Func Offset: 0x40
	// Func End, Address: 0x1016e30, Func Offset: 0x50
}

// 
// Start address: 0x1016e30
void act_init(_anon1* pActwk)
{
	// Line 87, Address: 0x1016e30, Func Offset: 0
	// Line 88, Address: 0x1016e3c, Func Offset: 0xc
	// Line 89, Address: 0x1016e4c, Func Offset: 0x1c
	// Line 90, Address: 0x1016e5c, Func Offset: 0x2c
	// Line 91, Address: 0x1016e68, Func Offset: 0x38
	// Line 92, Address: 0x1016e74, Func Offset: 0x44
	// Line 93, Address: 0x1016e80, Func Offset: 0x50
	// Line 94, Address: 0x1016e8c, Func Offset: 0x5c
	// Line 96, Address: 0x1016e9c, Func Offset: 0x6c
	// Line 97, Address: 0x1016ea8, Func Offset: 0x78
	// Line 99, Address: 0x1016eb8, Func Offset: 0x88
	// Line 100, Address: 0x1016ec0, Func Offset: 0x90
	// Line 101, Address: 0x1016ecc, Func Offset: 0x9c
	// Func End, Address: 0x1016edc, Func Offset: 0xac
}

// 
// Start address: 0x1016ee0
void act_move(_anon1* pActwk)
{
	unsigned char addr_off;
	// Line 113, Address: 0x1016ee0, Func Offset: 0
	// Line 116, Address: 0x1016ef0, Func Offset: 0x10
	// Line 117, Address: 0x1016efc, Func Offset: 0x1c
	// Line 120, Address: 0x1016f0c, Func Offset: 0x2c
	// Line 123, Address: 0x1016f30, Func Offset: 0x50
	// Line 124, Address: 0x1016f3c, Func Offset: 0x5c
	// Line 125, Address: 0x1016f58, Func Offset: 0x78
	// Line 126, Address: 0x1016f74, Func Offset: 0x94
	// Line 130, Address: 0x1016f7c, Func Offset: 0x9c
	// Line 131, Address: 0x1016f84, Func Offset: 0xa4
	// Line 135, Address: 0x1016fa0, Func Offset: 0xc0
	// Line 137, Address: 0x1016fb8, Func Offset: 0xd8
	// Line 138, Address: 0x1016fd8, Func Offset: 0xf8
	// Line 140, Address: 0x1016fe4, Func Offset: 0x104
	// Line 141, Address: 0x1017018, Func Offset: 0x138
	// Line 142, Address: 0x101702c, Func Offset: 0x14c
	// Line 143, Address: 0x101703c, Func Offset: 0x15c
	// Line 144, Address: 0x101704c, Func Offset: 0x16c
	// Line 147, Address: 0x101705c, Func Offset: 0x17c
	// Line 149, Address: 0x1017074, Func Offset: 0x194
	// Line 150, Address: 0x1017088, Func Offset: 0x1a8
	// Line 151, Address: 0x1017098, Func Offset: 0x1b8
	// Line 152, Address: 0x10170a8, Func Offset: 0x1c8
	// Line 154, Address: 0x10170b8, Func Offset: 0x1d8
	// Line 155, Address: 0x10170c4, Func Offset: 0x1e4
	// Line 156, Address: 0x10170d0, Func Offset: 0x1f0
	// Func End, Address: 0x10170e4, Func Offset: 0x204
}

