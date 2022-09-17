typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)();

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)()[3];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon1 type_6[128];

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

unsigned char limmoveflag;
short scralim_down;
_anon1 actwk[128];
_anon2 scra_v_posit;
short scralim_n_down;
_anon5 stageno;
_anon2 scra_h_posit;
unsigned char bossflag;
short scralim_n_left;
short scralim_left;
short scralim_right;

void scrchk();
void zone4chk();
void zone41chk();
void zone42chk();
void zone43chk();
int bossclr_scr(short XPosi, short DownLim);
int bossclr_scrset(short DownLim);

// 
// Start address: 0x101c090
void scrchk()
{
	short wD1;
	_anon2 temp1;
	_anon2 temp2;
	// Line 26, Address: 0x101c090, Func Offset: 0
	// Line 30, Address: 0x101c09c, Func Offset: 0xc
	// Line 31, Address: 0x101c0a4, Func Offset: 0x14
	// Line 32, Address: 0x101c0b0, Func Offset: 0x20
	// Line 34, Address: 0x101c0d8, Func Offset: 0x48
	// Line 36, Address: 0x101c104, Func Offset: 0x74
	// Line 37, Address: 0x101c110, Func Offset: 0x80
	// Line 39, Address: 0x101c13c, Func Offset: 0xac
	// Line 40, Address: 0x101c14c, Func Offset: 0xbc
	// Line 42, Address: 0x101c164, Func Offset: 0xd4
	// Line 43, Address: 0x101c178, Func Offset: 0xe8
	// Line 44, Address: 0x101c184, Func Offset: 0xf4
	// Line 48, Address: 0x101c18c, Func Offset: 0xfc
	// Line 49, Address: 0x101c1ac, Func Offset: 0x11c
	// Line 50, Address: 0x101c1b8, Func Offset: 0x128
	// Line 52, Address: 0x101c1cc, Func Offset: 0x13c
	// Line 53, Address: 0x101c1e4, Func Offset: 0x154
	// Line 55, Address: 0x101c1f0, Func Offset: 0x160
	// Line 56, Address: 0x101c1f8, Func Offset: 0x168
	// Line 58, Address: 0x101c204, Func Offset: 0x174
	// Func End, Address: 0x101c218, Func Offset: 0x188
}

// 
// Start address: 0x101c220
void zone4chk()
{
	void(*tbl)()[3];
	// Line 62, Address: 0x101c220, Func Offset: 0
	// Line 63, Address: 0x101c228, Func Offset: 0x8
	// Line 70, Address: 0x101c24c, Func Offset: 0x2c
	// Line 71, Address: 0x101c270, Func Offset: 0x50
	// Func End, Address: 0x101c280, Func Offset: 0x60
}

// 
// Start address: 0x101c280
void zone41chk()
{
	// Line 76, Address: 0x101c280, Func Offset: 0
	// Line 77, Address: 0x101c28c, Func Offset: 0xc
	// Func End, Address: 0x101c294, Func Offset: 0x14
}

// 
// Start address: 0x101c2a0
void zone42chk()
{
	_anon2 temp;
	// Line 80, Address: 0x101c2a0, Func Offset: 0
	// Line 83, Address: 0x101c2a4, Func Offset: 0x4
	// Line 85, Address: 0x101c2c0, Func Offset: 0x20
	// Line 87, Address: 0x101c2d8, Func Offset: 0x38
	// Line 88, Address: 0x101c2e4, Func Offset: 0x44
	// Line 89, Address: 0x101c2f0, Func Offset: 0x50
	// Line 90, Address: 0x101c2f4, Func Offset: 0x54
	// Line 91, Address: 0x101c300, Func Offset: 0x60
	// Line 95, Address: 0x101c310, Func Offset: 0x70
	// Line 96, Address: 0x101c31c, Func Offset: 0x7c
	// Line 97, Address: 0x101c328, Func Offset: 0x88
	// Func End, Address: 0x101c334, Func Offset: 0x94
}

// 
// Start address: 0x101c340
void zone43chk()
{
	// Line 100, Address: 0x101c340, Func Offset: 0
	// Line 101, Address: 0x101c348, Func Offset: 0x8
	// Line 103, Address: 0x101c360, Func Offset: 0x20
	// Line 106, Address: 0x101c370, Func Offset: 0x30
	// Line 107, Address: 0x101c37c, Func Offset: 0x3c
	// Line 110, Address: 0x101c388, Func Offset: 0x48
	// Func End, Address: 0x101c398, Func Offset: 0x58
}

// 
// Start address: 0x101c3a0
int bossclr_scr(short XPosi, short DownLim)
{
	int ret;
	// Line 113, Address: 0x101c3a0, Func Offset: 0
	// Line 114, Address: 0x101c3b4, Func Offset: 0x14
	// Line 116, Address: 0x101c3b8, Func Offset: 0x18
	// Line 117, Address: 0x101c3e0, Func Offset: 0x40
	// Line 118, Address: 0x101c3f0, Func Offset: 0x50
	// Line 119, Address: 0x101c3f4, Func Offset: 0x54
	// Func End, Address: 0x101c408, Func Offset: 0x68
}

// 
// Start address: 0x101c410
int bossclr_scrset(short DownLim)
{
	short temp;
	// Line 122, Address: 0x101c410, Func Offset: 0
	// Line 125, Address: 0x101c41c, Func Offset: 0xc
	// Line 126, Address: 0x101c428, Func Offset: 0x18
	// Line 127, Address: 0x101c43c, Func Offset: 0x2c
	// Line 128, Address: 0x101c450, Func Offset: 0x40
	// Line 130, Address: 0x101c45c, Func Offset: 0x4c
	// Line 131, Address: 0x101c474, Func Offset: 0x64
	// Line 133, Address: 0x101c484, Func Offset: 0x74
	// Line 134, Address: 0x101c4a8, Func Offset: 0x98
	// Line 136, Address: 0x101c4cc, Func Offset: 0xbc
	// Line 137, Address: 0x101c4f0, Func Offset: 0xe0
	// Line 139, Address: 0x101c500, Func Offset: 0xf0
	// Line 140, Address: 0x101c508, Func Offset: 0xf8
	// Line 142, Address: 0x101c510, Func Offset: 0x100
	// Line 143, Address: 0x101c514, Func Offset: 0x104
	// Func End, Address: 0x101c524, Func Offset: 0x114
}

