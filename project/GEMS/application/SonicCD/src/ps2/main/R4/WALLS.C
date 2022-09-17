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
typedef unsigned char type_2[8];
typedef unsigned char type_3[8][9];
typedef unsigned char type_4[2];
typedef unsigned char type_5[22];
typedef _anon0* type_6[5];
typedef int type_7[8];
typedef _anon1 type_8[128];

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

_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0* pat_walls[5];
unsigned char patno_tbl[8][9];
int data_tbl[8];
_anon1 actwk[128];

void walls(_anon1* pActwk);
void main_init(_anon1* pActwk);
void main_move(_anon1* pActwk);
void opt_check(_anon1* pActwk);

// 
// Start address: 0x101da50
void walls(_anon1* pActwk)
{
	// Line 168, Address: 0x101da50, Func Offset: 0
	// Line 169, Address: 0x101da5c, Func Offset: 0xc
	// Line 171, Address: 0x101da78, Func Offset: 0x28
	// Line 172, Address: 0x101da84, Func Offset: 0x34
	// Line 173, Address: 0x101da8c, Func Offset: 0x3c
	// Line 174, Address: 0x101da9c, Func Offset: 0x4c
	// Line 177, Address: 0x101daa8, Func Offset: 0x58
	// Line 179, Address: 0x101dab4, Func Offset: 0x64
	// Func End, Address: 0x101dac4, Func Offset: 0x74
}

// 
// Start address: 0x101dad0
void main_init(_anon1* pActwk)
{
	unsigned char* pOptwk;
	unsigned char* pPatno;
	unsigned char patnowk;
	int i;
	int j;
	_anon1* pNewact;
	// Line 185, Address: 0x101dad0, Func Offset: 0
	// Line 190, Address: 0x101daf0, Func Offset: 0x20
	// Line 191, Address: 0x101db00, Func Offset: 0x30
	// Line 192, Address: 0x101db10, Func Offset: 0x40
	// Line 193, Address: 0x101db20, Func Offset: 0x50
	// Line 194, Address: 0x101db2c, Func Offset: 0x5c
	// Line 195, Address: 0x101db38, Func Offset: 0x68
	// Line 196, Address: 0x101db44, Func Offset: 0x74
	// Line 197, Address: 0x101db50, Func Offset: 0x80
	// Line 198, Address: 0x101db5c, Func Offset: 0x8c
	// Line 199, Address: 0x101db6c, Func Offset: 0x9c
	// Line 200, Address: 0x101db78, Func Offset: 0xa8
	// Line 201, Address: 0x101dbb0, Func Offset: 0xe0
	// Line 202, Address: 0x101dbbc, Func Offset: 0xec
	// Line 204, Address: 0x101dbc8, Func Offset: 0xf8
	// Line 205, Address: 0x101dbd0, Func Offset: 0x100
	// Line 207, Address: 0x101dbf4, Func Offset: 0x124
	// Line 209, Address: 0x101dc00, Func Offset: 0x130
	// Line 211, Address: 0x101dc0c, Func Offset: 0x13c
	// Line 212, Address: 0x101dc24, Func Offset: 0x154
	// Line 213, Address: 0x101dc30, Func Offset: 0x160
	// Line 217, Address: 0x101dc38, Func Offset: 0x168
	// Line 218, Address: 0x101dc70, Func Offset: 0x1a0
	// Line 219, Address: 0x101dc88, Func Offset: 0x1b8
	// Line 221, Address: 0x101dcc4, Func Offset: 0x1f4
	// Line 222, Address: 0x101dcd8, Func Offset: 0x208
	// Line 223, Address: 0x101dcfc, Func Offset: 0x22c
	// Line 224, Address: 0x101dd04, Func Offset: 0x234
	// Line 226, Address: 0x101dd44, Func Offset: 0x274
	// Line 227, Address: 0x101dd4c, Func Offset: 0x27c
	// Line 230, Address: 0x101dd8c, Func Offset: 0x2bc
	// Line 231, Address: 0x101ddc4, Func Offset: 0x2f4
	// Line 232, Address: 0x101ddd4, Func Offset: 0x304
	// Line 233, Address: 0x101dde4, Func Offset: 0x314
	// Line 234, Address: 0x101ddf4, Func Offset: 0x324
	// Line 235, Address: 0x101de04, Func Offset: 0x334
	// Line 236, Address: 0x101de14, Func Offset: 0x344
	// Line 237, Address: 0x101de24, Func Offset: 0x354
	// Line 238, Address: 0x101de30, Func Offset: 0x360
	// Line 240, Address: 0x101de3c, Func Offset: 0x36c
	// Line 241, Address: 0x101de48, Func Offset: 0x378
	// Func End, Address: 0x101de6c, Func Offset: 0x39c
}

// 
// Start address: 0x101de70
void main_move(_anon1* pActwk)
{
	unsigned char* pOptwk;
	int i;
	int spdwk;
	_anon1* pChildact;
	// Line 247, Address: 0x101de70, Func Offset: 0
	// Line 253, Address: 0x101de8c, Func Offset: 0x1c
	// Line 254, Address: 0x101de94, Func Offset: 0x24
	// Line 256, Address: 0x101de9c, Func Offset: 0x2c
	// Line 258, Address: 0x101dea8, Func Offset: 0x38
	// Line 259, Address: 0x101ded0, Func Offset: 0x60
	// Line 260, Address: 0x101dedc, Func Offset: 0x6c
	// Line 262, Address: 0x101def0, Func Offset: 0x80
	// Line 263, Address: 0x101df18, Func Offset: 0xa8
	// Line 264, Address: 0x101df24, Func Offset: 0xb4
	// Line 265, Address: 0x101df34, Func Offset: 0xc4
	// Line 267, Address: 0x101df40, Func Offset: 0xd0
	// Line 268, Address: 0x101df68, Func Offset: 0xf8
	// Line 270, Address: 0x101dfb4, Func Offset: 0x144
	// Line 272, Address: 0x101dffc, Func Offset: 0x18c
	// Line 273, Address: 0x101e00c, Func Offset: 0x19c
	// Line 277, Address: 0x101e01c, Func Offset: 0x1ac
	// Line 278, Address: 0x101e030, Func Offset: 0x1c0
	// Func End, Address: 0x101e050, Func Offset: 0x1e0
}

// 
// Start address: 0x101e050
void opt_check(_anon1* pActwk)
{
	// Line 284, Address: 0x101e050, Func Offset: 0
	// Line 285, Address: 0x101e05c, Func Offset: 0xc
	// Line 286, Address: 0x101e098, Func Offset: 0x48
	// Line 287, Address: 0x101e0a4, Func Offset: 0x54
	// Line 288, Address: 0x101e0ac, Func Offset: 0x5c
	// Line 289, Address: 0x101e0c0, Func Offset: 0x70
	// Line 291, Address: 0x101e0cc, Func Offset: 0x7c
	// Func End, Address: 0x101e0dc, Func Offset: 0x8c
}

