typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[2];
typedef char type_3[4];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef void(*type_7)(_anon1*)[2];

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

char shibukichg0[4];
unsigned char* shibukichg;
_anon0 shibuki0;
_anon0 shibuki1;
_anon0* shibukipat[2];
void(*taki_move_tbl)(_anon1*)[2];

void taki(_anon1* pActwk);
void taki_init(_anon1* pActwk);
void taki_move(_anon1* pActwk);
void jisin_set(_anon1* pActwk);
void jisin(_anon1* pActwk);

// 
// Start address: 0x101d6e0
void taki(_anon1* pActwk)
{
	// Line 101, Address: 0x101d6e0, Func Offset: 0
	// Line 102, Address: 0x101d6ec, Func Offset: 0xc
	// Line 103, Address: 0x101d730, Func Offset: 0x50
	// Line 104, Address: 0x101d744, Func Offset: 0x64
	// Line 105, Address: 0x101d750, Func Offset: 0x70
	// Func End, Address: 0x101d760, Func Offset: 0x80
}

// 
// Start address: 0x101d760
void taki_init(_anon1* pActwk)
{
	// Line 111, Address: 0x101d760, Func Offset: 0
	// Line 112, Address: 0x101d768, Func Offset: 0x8
	// Line 113, Address: 0x101d778, Func Offset: 0x18
	// Line 114, Address: 0x101d788, Func Offset: 0x28
	// Line 115, Address: 0x101d794, Func Offset: 0x34
	// Line 116, Address: 0x101d7a0, Func Offset: 0x40
	// Line 117, Address: 0x101d7ac, Func Offset: 0x4c
	// Line 118, Address: 0x101d7b8, Func Offset: 0x58
	// Line 120, Address: 0x101d7cc, Func Offset: 0x6c
	// Line 122, Address: 0x101d7f0, Func Offset: 0x90
	// Func End, Address: 0x101d7fc, Func Offset: 0x9c
}

// 
// Start address: 0x101d800
void taki_move(_anon1* pActwk)
{
	unsigned short blkno;
	short i;
	short xoffs;
	// Line 128, Address: 0x101d800, Func Offset: 0
	// Line 132, Address: 0x101d818, Func Offset: 0x18
	// Line 134, Address: 0x101d848, Func Offset: 0x48
	// Line 135, Address: 0x101d854, Func Offset: 0x54
	// Line 138, Address: 0x101d85c, Func Offset: 0x5c
	// Line 139, Address: 0x101d86c, Func Offset: 0x6c
	// Line 140, Address: 0x101d874, Func Offset: 0x74
	// Line 142, Address: 0x101d898, Func Offset: 0x98
	// Line 146, Address: 0x101d8b4, Func Offset: 0xb4
	// Line 147, Address: 0x101d8c0, Func Offset: 0xc0
	// Line 148, Address: 0x101d8dc, Func Offset: 0xdc
	// Line 149, Address: 0x101d908, Func Offset: 0x108
	// Func End, Address: 0x101d924, Func Offset: 0x124
}

// 
// Start address: 0x101d930
void jisin_set(_anon1* pActwk)
{
	// Line 163, Address: 0x101d930, Func Offset: 0
	// Line 164, Address: 0x101d938, Func Offset: 0x8
	// Line 166, Address: 0x101d940, Func Offset: 0x10
	// Func End, Address: 0x101d94c, Func Offset: 0x1c
}

// 
// Start address: 0x101d950
void jisin(_anon1* pActwk)
{
	// Line 180, Address: 0x101d950, Func Offset: 0
	// Line 181, Address: 0x101d958, Func Offset: 0x8
	// Line 183, Address: 0x101d960, Func Offset: 0x10
	// Func End, Address: 0x101d96c, Func Offset: 0x1c
}

