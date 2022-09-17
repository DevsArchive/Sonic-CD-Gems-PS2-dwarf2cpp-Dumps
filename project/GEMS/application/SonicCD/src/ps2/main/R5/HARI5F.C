typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[3];
typedef _anon0* type_4[1];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1 type_7[128];

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

_anon0 hari5f_pat0;
_anon0* pat_hari5f[1];
unsigned char generate_flag;
unsigned char time_flag;
_anon1 actwk[128];

void hari5f(_anon1* pActwk);
void f_init(_anon1* pActwk);
void f_wait(_anon1* pActwk);
void f_fall(_anon1* pActwk);

// 
// Start address: 0x1023be0
void hari5f(_anon1* pActwk)
{
	void(*hari5f_move_tbl)(_anon1*)[3];
	// Line 66, Address: 0x1023be0, Func Offset: 0
	// Line 67, Address: 0x1023bec, Func Offset: 0xc
	// Line 73, Address: 0x1023c10, Func Offset: 0x30
	// Line 74, Address: 0x1023c4c, Func Offset: 0x6c
	// Line 75, Address: 0x1023c58, Func Offset: 0x78
	// Line 76, Address: 0x1023c64, Func Offset: 0x84
	// Func End, Address: 0x1023c74, Func Offset: 0x94
}

// 
// Start address: 0x1023c80
void f_init(_anon1* pActwk)
{
	// Line 84, Address: 0x1023c80, Func Offset: 0
	// Line 85, Address: 0x1023c8c, Func Offset: 0xc
	// Line 86, Address: 0x1023c9c, Func Offset: 0x1c
	// Line 87, Address: 0x1023cac, Func Offset: 0x2c
	// Line 88, Address: 0x1023cb8, Func Offset: 0x38
	// Line 89, Address: 0x1023cc4, Func Offset: 0x44
	// Line 90, Address: 0x1023cd0, Func Offset: 0x50
	// Line 91, Address: 0x1023cdc, Func Offset: 0x5c
	// Line 92, Address: 0x1023cec, Func Offset: 0x6c
	// Line 94, Address: 0x1023cf8, Func Offset: 0x78
	// Line 95, Address: 0x1023d0c, Func Offset: 0x8c
	// Line 96, Address: 0x1023d20, Func Offset: 0xa0
	// Line 97, Address: 0x1023d38, Func Offset: 0xb8
	// Line 98, Address: 0x1023d4c, Func Offset: 0xcc
	// Line 99, Address: 0x1023d5c, Func Offset: 0xdc
	// Line 101, Address: 0x1023d70, Func Offset: 0xf0
	// Line 103, Address: 0x1023d7c, Func Offset: 0xfc
	// Line 104, Address: 0x1023d88, Func Offset: 0x108
	// Func End, Address: 0x1023d98, Func Offset: 0x118
}

// 
// Start address: 0x1023da0
void f_wait(_anon1* pActwk)
{
	// Line 113, Address: 0x1023da0, Func Offset: 0
	// Line 114, Address: 0x1023da8, Func Offset: 0x8
	// Line 115, Address: 0x1023de4, Func Offset: 0x44
	// Line 116, Address: 0x1023e20, Func Offset: 0x80
	// Line 117, Address: 0x1023e30, Func Offset: 0x90
	// Line 120, Address: 0x1023e3c, Func Offset: 0x9c
	// Func End, Address: 0x1023e48, Func Offset: 0xa8
}

// 
// Start address: 0x1023e50
void f_fall(_anon1* pActwk)
{
	unsigned char bD0;
	short wD1;
	// Line 129, Address: 0x1023e50, Func Offset: 0
	// Line 133, Address: 0x1023e64, Func Offset: 0x14
	// Line 134, Address: 0x1023e7c, Func Offset: 0x2c
	// Line 135, Address: 0x1023ea8, Func Offset: 0x58
	// Line 136, Address: 0x1023eb4, Func Offset: 0x64
	// Line 141, Address: 0x1023ebc, Func Offset: 0x6c
	// Line 143, Address: 0x1023f04, Func Offset: 0xb4
	// Line 144, Address: 0x1023f14, Func Offset: 0xc4
	// Line 145, Address: 0x1023f18, Func Offset: 0xc8
	// Line 146, Address: 0x1023f30, Func Offset: 0xe0
	// Line 147, Address: 0x1023f3c, Func Offset: 0xec
	// Line 153, Address: 0x1023f44, Func Offset: 0xf4
	// Line 154, Address: 0x1023f4c, Func Offset: 0xfc
	// Line 156, Address: 0x1023f54, Func Offset: 0x104
	// Line 157, Address: 0x1023f70, Func Offset: 0x120
	// Line 158, Address: 0x1023f88, Func Offset: 0x138
	// Func End, Address: 0x1023fa0, Func Offset: 0x150
}

