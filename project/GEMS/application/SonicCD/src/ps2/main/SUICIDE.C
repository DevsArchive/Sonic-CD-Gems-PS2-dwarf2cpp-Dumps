typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;


typedef _anon0 type_0[20];
typedef _anon0 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

unsigned char time_flag;
unsigned char generate_flag;
unsigned char projector_flag;

short enemy_suicide(_anon2* pActwk);
short friend_suicide(_anon2* pActwk);

// 
// Start address: 0x1013ea0
short enemy_suicide(_anon2* pActwk)
{
	short xposi;
	short yposi;
	// Line 35, Address: 0x1013ea0, Func Offset: 0
	// Line 38, Address: 0x1013eb4, Func Offset: 0x14
	// Line 39, Address: 0x1013ec8, Func Offset: 0x28
	// Line 40, Address: 0x1013ed4, Func Offset: 0x34
	// Line 42, Address: 0x1013eec, Func Offset: 0x4c
	// Line 43, Address: 0x1013f04, Func Offset: 0x64
	// Line 45, Address: 0x1013f10, Func Offset: 0x70
	// Line 46, Address: 0x1013f20, Func Offset: 0x80
	// Line 47, Address: 0x1013f30, Func Offset: 0x90
	// Line 48, Address: 0x1013f3c, Func Offset: 0x9c
	// Line 49, Address: 0x1013f44, Func Offset: 0xa4
	// Line 50, Address: 0x1013f4c, Func Offset: 0xac
	// Line 51, Address: 0x1013f58, Func Offset: 0xb8
	// Line 52, Address: 0x1013f78, Func Offset: 0xd8
	// Line 53, Address: 0x1013f7c, Func Offset: 0xdc
	// Func End, Address: 0x1013f94, Func Offset: 0xf4
}

// 
// Start address: 0x1013fa0
short friend_suicide(_anon2* pActwk)
{
	// Line 66, Address: 0x1013fa0, Func Offset: 0
	// Line 67, Address: 0x1013fac, Func Offset: 0xc
	// Line 68, Address: 0x1013fc4, Func Offset: 0x24
	// Line 69, Address: 0x1013fd0, Func Offset: 0x30
	// Line 71, Address: 0x1013fe8, Func Offset: 0x48
	// Line 72, Address: 0x1013ff8, Func Offset: 0x58
	// Line 73, Address: 0x1014004, Func Offset: 0x64
	// Line 74, Address: 0x1014010, Func Offset: 0x70
	// Line 76, Address: 0x101401c, Func Offset: 0x7c
	// Line 77, Address: 0x101402c, Func Offset: 0x8c
	// Line 78, Address: 0x1014038, Func Offset: 0x98
	// Line 79, Address: 0x1014044, Func Offset: 0xa4
	// Line 80, Address: 0x1014048, Func Offset: 0xa8
	// Func End, Address: 0x1014058, Func Offset: 0xb8
}

