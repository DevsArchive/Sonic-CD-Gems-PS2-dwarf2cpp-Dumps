typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_8)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[2];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
typedef unsigned char type_6[766];
typedef short type_7[9];
typedef void(*type_9)(_anon1*)[3];

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

_anon0 escal4_pat0;
_anon0 escal4_pat1;
_anon0* escal4pat[2];
unsigned char flagwork[766];
unsigned char time_flag;
_anon2 scra_h_posit;
_anon1 actwk[128];

void escal4(_anon1* pActwk);
short escal4_ridechk(_anon1* pActwk);
void escal4_init(_anon1* pActwk);
void escal4_wait(_anon1* pActwk);
void escal4_moveup(_anon1* pActwk);

// 
// Start address: 0x1021c90
void escal4(_anon1* pActwk)
{
	void(*escal4_acttbl)(_anon1*)[3];
	// Line 72, Address: 0x1021c90, Func Offset: 0
	// Line 73, Address: 0x1021c9c, Func Offset: 0xc
	// Line 79, Address: 0x1021cc0, Func Offset: 0x30
	// Line 80, Address: 0x1021cfc, Func Offset: 0x6c
	// Line 82, Address: 0x1021d08, Func Offset: 0x78
	// Line 86, Address: 0x1021d44, Func Offset: 0xb4
	// Line 88, Address: 0x1021d90, Func Offset: 0x100
	// Line 89, Address: 0x1021d9c, Func Offset: 0x10c
	// Func End, Address: 0x1021dac, Func Offset: 0x11c
}

// 
// Start address: 0x1021db0
short escal4_ridechk(_anon1* pActwk)
{
	// Line 99, Address: 0x1021db0, Func Offset: 0
	// Line 100, Address: 0x1021dbc, Func Offset: 0xc
	// Line 101, Address: 0x1021dd0, Func Offset: 0x20
	// Func End, Address: 0x1021de0, Func Offset: 0x30
}

// 
// Start address: 0x1021de0
void escal4_init(_anon1* pActwk)
{
	// Line 110, Address: 0x1021de0, Func Offset: 0
	// Line 111, Address: 0x1021de8, Func Offset: 0x8
	// Line 112, Address: 0x1021df8, Func Offset: 0x18
	// Line 113, Address: 0x1021e08, Func Offset: 0x28
	// Line 114, Address: 0x1021e14, Func Offset: 0x34
	// Line 115, Address: 0x1021e20, Func Offset: 0x40
	// Line 116, Address: 0x1021e30, Func Offset: 0x50
	// Line 117, Address: 0x1021e3c, Func Offset: 0x5c
	// Line 118, Address: 0x1021e48, Func Offset: 0x68
	// Func End, Address: 0x1021e54, Func Offset: 0x74
}

// 
// Start address: 0x1021e60
void escal4_wait(_anon1* pActwk)
{
	short escal4_tbl[9];
	// Line 127, Address: 0x1021e60, Func Offset: 0
	// Line 128, Address: 0x1021e6c, Func Offset: 0xc
	// Line 135, Address: 0x1021e98, Func Offset: 0x38
	// Line 136, Address: 0x1021eb0, Func Offset: 0x50
	// Line 137, Address: 0x1021ec4, Func Offset: 0x64
	// Line 138, Address: 0x1021ed4, Func Offset: 0x74
	// Line 139, Address: 0x1021f1c, Func Offset: 0xbc
	// Line 140, Address: 0x1021f68, Func Offset: 0x108
	// Line 143, Address: 0x1021fb4, Func Offset: 0x154
	// Func End, Address: 0x1021fc4, Func Offset: 0x164
}

// 
// Start address: 0x1021fd0
void escal4_moveup(_anon1* pActwk)
{
	// Line 152, Address: 0x1021fd0, Func Offset: 0
	// Line 153, Address: 0x1021fdc, Func Offset: 0xc
	// Line 155, Address: 0x1021fe8, Func Offset: 0x18
	// Line 156, Address: 0x1021ff8, Func Offset: 0x28
	// Line 157, Address: 0x102201c, Func Offset: 0x4c
	// Line 159, Address: 0x1022040, Func Offset: 0x70
	// Line 160, Address: 0x1022060, Func Offset: 0x90
	// Line 161, Address: 0x1022068, Func Offset: 0x98
	// Line 165, Address: 0x1022070, Func Offset: 0xa0
	// Func End, Address: 0x1022080, Func Offset: 0xb0
}

