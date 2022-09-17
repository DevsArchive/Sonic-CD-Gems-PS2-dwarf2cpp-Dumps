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
typedef void(*type_3)(_anon1*)[2];
typedef _anon0* type_4[2];
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

_anon0 harir4_pat0;
_anon0 harir4_pat1;
_anon0* harir4pat[2];
_anon1 actwk[128];
unsigned char plpower_m;
unsigned char plpower_a;

void harir4(_anon1* pActwk);
void harir4_ridechk(_anon1* pActwk);
void harir4_init(_anon1* pActwk);
void harir4_move(_anon1* pActwk);
void harir4_sub(_anon1* pActwk);

// 
// Start address: 0x101d940
void harir4(_anon1* pActwk)
{
	_anon1* pRideactwk;
	void(*harir4_acttbl)(_anon1*)[2];
	// Line 76, Address: 0x101d940, Func Offset: 0
	// Line 79, Address: 0x101d950, Func Offset: 0x10
	// Line 84, Address: 0x101d96c, Func Offset: 0x2c
	// Line 85, Address: 0x101d9a8, Func Offset: 0x68
	// Line 88, Address: 0x101d9b4, Func Offset: 0x74
	// Line 89, Address: 0x101d9c4, Func Offset: 0x84
	// Line 90, Address: 0x101d9ec, Func Offset: 0xac
	// Line 91, Address: 0x101d9f8, Func Offset: 0xb8
	// Line 92, Address: 0x101da04, Func Offset: 0xc4
	// Line 95, Address: 0x101da0c, Func Offset: 0xcc
	// Line 96, Address: 0x101da40, Func Offset: 0x100
	// Line 99, Address: 0x101da74, Func Offset: 0x134
	// Line 100, Address: 0x101da88, Func Offset: 0x148
	// Func End, Address: 0x101da9c, Func Offset: 0x15c
}

// 
// Start address: 0x101daa0
void harir4_ridechk(_anon1* pActwk)
{
	// Line 109, Address: 0x101daa0, Func Offset: 0
	// Line 110, Address: 0x101daac, Func Offset: 0xc
	// Line 111, Address: 0x101dabc, Func Offset: 0x1c
	// Line 112, Address: 0x101dad0, Func Offset: 0x30
	// Line 116, Address: 0x101dad8, Func Offset: 0x38
	// Line 117, Address: 0x101daf4, Func Offset: 0x54
	// Line 118, Address: 0x101db0c, Func Offset: 0x6c
	// Line 119, Address: 0x101db1c, Func Offset: 0x7c
	// Line 120, Address: 0x101db2c, Func Offset: 0x8c
	// Line 121, Address: 0x101db44, Func Offset: 0xa4
	// Line 122, Address: 0x101db54, Func Offset: 0xb4
	// Line 123, Address: 0x101db7c, Func Offset: 0xdc
	// Line 132, Address: 0x101db90, Func Offset: 0xf0
	// Func End, Address: 0x101dba0, Func Offset: 0x100
}

// 
// Start address: 0x101dba0
void harir4_init(_anon1* pActwk)
{
	// Line 141, Address: 0x101dba0, Func Offset: 0
	// Line 142, Address: 0x101dbac, Func Offset: 0xc
	// Line 143, Address: 0x101dbbc, Func Offset: 0x1c
	// Line 144, Address: 0x101dbcc, Func Offset: 0x2c
	// Line 145, Address: 0x101dbd8, Func Offset: 0x38
	// Line 146, Address: 0x101dbe4, Func Offset: 0x44
	// Line 147, Address: 0x101dbf4, Func Offset: 0x54
	// Line 148, Address: 0x101dc04, Func Offset: 0x64
	// Line 150, Address: 0x101dc14, Func Offset: 0x74
	// Line 151, Address: 0x101dc24, Func Offset: 0x84
	// Line 152, Address: 0x101dc30, Func Offset: 0x90
	// Line 153, Address: 0x101dc3c, Func Offset: 0x9c
	// Line 154, Address: 0x101dc4c, Func Offset: 0xac
	// Line 155, Address: 0x101dc58, Func Offset: 0xb8
	// Line 158, Address: 0x101dc64, Func Offset: 0xc4
	// Line 159, Address: 0x101dc70, Func Offset: 0xd0
	// Func End, Address: 0x101dc80, Func Offset: 0xe0
}

// 
// Start address: 0x101dc80
void harir4_move(_anon1* pActwk)
{
	// Line 168, Address: 0x101dc80, Func Offset: 0
	// Line 169, Address: 0x101dc8c, Func Offset: 0xc
	// Line 170, Address: 0x101dca8, Func Offset: 0x28
	// Line 171, Address: 0x101dcb4, Func Offset: 0x34
	// Line 174, Address: 0x101dce4, Func Offset: 0x64
	// Line 175, Address: 0x101dcf0, Func Offset: 0x70
	// Func End, Address: 0x101dd00, Func Offset: 0x80
}

// 
// Start address: 0x101dd00
void harir4_sub(_anon1* pActwk)
{
	// Line 184, Address: 0x101dd00, Func Offset: 0
	// Line 185, Address: 0x101dd0c, Func Offset: 0xc
	// Line 186, Address: 0x101dd1c, Func Offset: 0x1c
	// Line 187, Address: 0x101dd38, Func Offset: 0x38
	// Line 190, Address: 0x101dd5c, Func Offset: 0x5c
	// Line 193, Address: 0x101dd6c, Func Offset: 0x6c
	// Line 194, Address: 0x101dd84, Func Offset: 0x84
	// Line 195, Address: 0x101dd8c, Func Offset: 0x8c
	// Line 196, Address: 0x101dd94, Func Offset: 0x94
	// Line 197, Address: 0x101dda0, Func Offset: 0xa0
	// Line 198, Address: 0x101dda8, Func Offset: 0xa8
	// Line 199, Address: 0x101ddb8, Func Offset: 0xb8
	// Line 201, Address: 0x101ddc0, Func Offset: 0xc0
	// Line 202, Address: 0x101ddf0, Func Offset: 0xf0
	// Line 203, Address: 0x101ddfc, Func Offset: 0xfc
	// Line 204, Address: 0x101de08, Func Offset: 0x108
	// Line 207, Address: 0x101de14, Func Offset: 0x114
	// Func End, Address: 0x101de24, Func Offset: 0x124
}

