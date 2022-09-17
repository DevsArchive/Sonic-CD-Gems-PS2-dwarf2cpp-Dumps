typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;

typedef void(*type_7)(char*);
typedef void(*type_10)(char*, char*);

typedef unsigned char type_0[112];
typedef unsigned char type_1[112];
typedef unsigned char type_2[144];
typedef unsigned char type_3[96];
typedef unsigned char* type_4[8];
typedef unsigned char type_5[3];
typedef unsigned char type_6[48];
typedef unsigned char type_8[144];
typedef _anon7 type_9[20];
typedef unsigned char type_11[96];
typedef _anon7 type_12[0];
typedef _anon6 type_13[48];
typedef unsigned char type_14[128];
typedef unsigned char type_15[112];
typedef unsigned short type_16[16384];
typedef _anon8* type_17[64];
typedef char type_18[80];

struct _anon0
{
	unsigned char cnt;
	char timer;
	_anon8* spr[64];
};

union _anon1
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon2
{
	short l;
	short h;
};

struct _anon3
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon4
{
	unsigned short w;
	_anon5 b;
};

struct _anon5
{
	unsigned char l;
	unsigned char h;
};

struct _anon6
{
	unsigned char actno;
	unsigned char cgno;
	unsigned char actflg;
	unsigned char exeno;
	unsigned short sprcolor;
	_anon0** pattbl;
	unsigned char pattblno;
	unsigned char patno;
	char pctime;
	char pctime_b;
	unsigned char scno_ce;
	unsigned char scno_ul;
	unsigned char scno_ur;
	unsigned char scno_dr;
	unsigned char scno_dl;
	unsigned char scno_sdir;
	short spdcnt;
	short spdcnt_shock;
	short spdcnt_max;
	_anon1 x_posi;
	_anon1 y_posi;
	_anon1 z_posi;
	_anon1 sx_posi;
	_anon1 sy_posi;
	_anon1 x_speed;
	_anon1 y_speed;
	_anon1 z_speed;
	_anon1 sx_speed;
	_anon1 sy_speed;
	unsigned char colliflg;
	unsigned char dummy[3];
	unsigned char actfree[48];
};

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon8
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

unsigned short sm_cnt;
_anon6 actwk[48];
unsigned char* colliadr;
unsigned short sm_adr0[16384];
void(*sOutputDebugString)(char*);
void(*sPrintf)(char*, char*);
unsigned char* colliadr_tbl[8];
unsigned char stagenm;
unsigned char ctbl00[96];
unsigned char ctbl10[112];
unsigned char ctbl20[144];
unsigned char ctbl30[128];
unsigned char ctbl40[112];
unsigned char ctbl50[96];
unsigned char ctbl60[112];
unsigned char ctbl70[144];

void ufovspl(_anon6* pActwk);
void plcolli(_anon6* pActwk);
short blcolli(_anon6* pActwk);
void stpnmget(short iXposi, short iYposi, short* ipD1, short* ipD2);
void colli_init();

// 
// Start address: 0x1000ef0
void ufovspl(_anon6* pActwk)
{
	_anon6* pPlaywk;
	short iD0;
	short iD1;
	short iD2;
	// Line 40, Address: 0x1000ef0, Func Offset: 0
	// Line 44, Address: 0x1000f08, Func Offset: 0x18
	// Line 45, Address: 0x1000f10, Func Offset: 0x20
	// Line 46, Address: 0x1000f20, Func Offset: 0x30
	// Line 48, Address: 0x1000f30, Func Offset: 0x40
	// Line 49, Address: 0x1000f54, Func Offset: 0x64
	// Line 50, Address: 0x1000f70, Func Offset: 0x80
	// Line 51, Address: 0x1000f90, Func Offset: 0xa0
	// Line 53, Address: 0x1000fac, Func Offset: 0xbc
	// Line 56, Address: 0x1000fcc, Func Offset: 0xdc
	// Line 57, Address: 0x1000ff0, Func Offset: 0x100
	// Line 58, Address: 0x100100c, Func Offset: 0x11c
	// Line 59, Address: 0x100102c, Func Offset: 0x13c
	// Line 61, Address: 0x1001048, Func Offset: 0x158
	// Line 64, Address: 0x1001068, Func Offset: 0x178
	// Line 66, Address: 0x1001080, Func Offset: 0x190
	// Line 68, Address: 0x1001098, Func Offset: 0x1a8
	// Line 69, Address: 0x10010a4, Func Offset: 0x1b4
	// Line 70, Address: 0x10010b0, Func Offset: 0x1c0
	// Func End, Address: 0x10010cc, Func Offset: 0x1dc
}

// 
// Start address: 0x10010d0
void plcolli(_anon6* pActwk)
{
	short iD1;
	short iD2;
	// Line 86, Address: 0x10010d0, Func Offset: 0
	// Line 89, Address: 0x10010dc, Func Offset: 0xc
	// Line 90, Address: 0x10010fc, Func Offset: 0x2c
	// Line 101, Address: 0x1001120, Func Offset: 0x50
	// Line 102, Address: 0x100112c, Func Offset: 0x5c
	// Line 103, Address: 0x1001138, Func Offset: 0x68
	// Line 105, Address: 0x1001148, Func Offset: 0x78
	// Line 109, Address: 0x1001190, Func Offset: 0xc0
	// Line 111, Address: 0x10011b4, Func Offset: 0xe4
	// Line 115, Address: 0x10011fc, Func Offset: 0x12c
	// Line 117, Address: 0x1001220, Func Offset: 0x150
	// Line 121, Address: 0x1001268, Func Offset: 0x198
	// Line 123, Address: 0x100128c, Func Offset: 0x1bc
	// Line 127, Address: 0x10012d4, Func Offset: 0x204
	// Line 128, Address: 0x10012f8, Func Offset: 0x228
	// Func End, Address: 0x1001308, Func Offset: 0x238
}

// 
// Start address: 0x1001310
short blcolli(_anon6* pActwk)
{
	short iD0;
	short iD1;
	short iD2;
	// Line 142, Address: 0x1001310, Func Offset: 0
	// Line 145, Address: 0x1001320, Func Offset: 0x10
	// Line 146, Address: 0x1001340, Func Offset: 0x30
	// Line 147, Address: 0x1001368, Func Offset: 0x58
	// Line 148, Address: 0x100136c, Func Offset: 0x5c
	// Func End, Address: 0x1001380, Func Offset: 0x70
}

// 
// Start address: 0x1001380
void stpnmget(short iXposi, short iYposi, short* ipD1, short* ipD2)
{
	unsigned short wD2;
	unsigned short wD3;
	_anon4 uwk1;
	_anon4 uwk2;
	char buf[80];
	// Line 165, Address: 0x1001380, Func Offset: 0
	// Line 169, Address: 0x10013a0, Func Offset: 0x20
	// Line 170, Address: 0x10013b8, Func Offset: 0x38
	// Line 172, Address: 0x10013d0, Func Offset: 0x50
	// Line 173, Address: 0x10013e4, Func Offset: 0x64
	// Line 176, Address: 0x10013f4, Func Offset: 0x74
	// Line 177, Address: 0x1001414, Func Offset: 0x94
	// Line 178, Address: 0x1001428, Func Offset: 0xa8
	// Line 180, Address: 0x1001430, Func Offset: 0xb0
	// Line 181, Address: 0x100144c, Func Offset: 0xcc
	// Line 182, Address: 0x1001454, Func Offset: 0xd4
	// Line 183, Address: 0x100145c, Func Offset: 0xdc
	// Line 185, Address: 0x1001468, Func Offset: 0xe8
	// Line 186, Address: 0x1001478, Func Offset: 0xf8
	// Line 187, Address: 0x100148c, Func Offset: 0x10c
	// Line 188, Address: 0x10014b0, Func Offset: 0x130
	// Func End, Address: 0x10014c8, Func Offset: 0x148
}

// 
// Start address: 0x10014d0
void colli_init()
{
	// Line 203, Address: 0x10014d0, Func Offset: 0
	// Line 204, Address: 0x10014f8, Func Offset: 0x28
	// Func End, Address: 0x1001500, Func Offset: 0x30
}

