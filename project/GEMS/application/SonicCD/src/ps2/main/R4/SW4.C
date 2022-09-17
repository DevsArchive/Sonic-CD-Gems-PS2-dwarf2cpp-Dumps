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
typedef _anon0* type_2[2];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
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

_anon0 pat00;
_anon0 pat01;
_anon0* pat_sw[2];
_anon2 scra_h_posit;
_anon1 actwk[128];
unsigned char switchflag[32];

void sw4(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_move(_anon1* pActwk);
short hosei(_anon1* pActwk, _anon1* pActwk2);

// 
// Start address: 0x1016910
void sw4(_anon1* pActwk)
{
	// Line 58, Address: 0x1016910, Func Offset: 0
	// Line 59, Address: 0x101691c, Func Offset: 0xc
	// Line 60, Address: 0x1016940, Func Offset: 0x30
	// Line 61, Address: 0x101694c, Func Offset: 0x3c
	// Func End, Address: 0x101695c, Func Offset: 0x4c
}

// 
// Start address: 0x1016960
void act_init(_anon1* pActwk)
{
	// Line 66, Address: 0x1016960, Func Offset: 0
	// Line 67, Address: 0x101696c, Func Offset: 0xc
	// Line 68, Address: 0x101697c, Func Offset: 0x1c
	// Line 69, Address: 0x101698c, Func Offset: 0x2c
	// Line 70, Address: 0x1016998, Func Offset: 0x38
	// Line 71, Address: 0x10169a4, Func Offset: 0x44
	// Line 72, Address: 0x10169b0, Func Offset: 0x50
	// Line 73, Address: 0x10169c0, Func Offset: 0x60
	// Line 75, Address: 0x10169cc, Func Offset: 0x6c
	// Line 77, Address: 0x10169ec, Func Offset: 0x8c
	// Line 78, Address: 0x10169f4, Func Offset: 0x94
	// Line 80, Address: 0x10169fc, Func Offset: 0x9c
	// Line 81, Address: 0x1016a08, Func Offset: 0xa8
	// Func End, Address: 0x1016a18, Func Offset: 0xb8
}

// 
// Start address: 0x1016a20
void act_move(_anon1* pActwk)
{
	_anon1* pActwk_a1;
	_anon1* pPlayerwk;
	unsigned char* a4;
	short d0;
	short d1;
	short d3;
	short d4;
	short z;
	// Line 86, Address: 0x1016a20, Func Offset: 0
	// Line 93, Address: 0x1016a4c, Func Offset: 0x2c
	// Line 94, Address: 0x1016a5c, Func Offset: 0x3c
	// Line 96, Address: 0x1016a64, Func Offset: 0x44
	// Line 97, Address: 0x1016a84, Func Offset: 0x64
	// Line 98, Address: 0x1016a94, Func Offset: 0x74
	// Line 99, Address: 0x1016aac, Func Offset: 0x8c
	// Line 100, Address: 0x1016abc, Func Offset: 0x9c
	// Line 101, Address: 0x1016ac4, Func Offset: 0xa4
	// Line 102, Address: 0x1016ad0, Func Offset: 0xb0
	// Line 103, Address: 0x1016adc, Func Offset: 0xbc
	// Line 104, Address: 0x1016ae4, Func Offset: 0xc4
	// Line 105, Address: 0x1016afc, Func Offset: 0xdc
	// Line 106, Address: 0x1016b0c, Func Offset: 0xec
	// Line 108, Address: 0x1016b14, Func Offset: 0xf4
	// Line 109, Address: 0x1016b24, Func Offset: 0x104
	// Line 110, Address: 0x1016b34, Func Offset: 0x114
	// Line 111, Address: 0x1016b44, Func Offset: 0x124
	// Line 112, Address: 0x1016b4c, Func Offset: 0x12c
	// Line 114, Address: 0x1016b64, Func Offset: 0x144
	// Line 115, Address: 0x1016b7c, Func Offset: 0x15c
	// Line 118, Address: 0x1016b84, Func Offset: 0x164
	// Line 120, Address: 0x1016b90, Func Offset: 0x170
	// Line 121, Address: 0x1016bac, Func Offset: 0x18c
	// Line 122, Address: 0x1016bd0, Func Offset: 0x1b0
	// Line 123, Address: 0x1016bd8, Func Offset: 0x1b8
	// Line 125, Address: 0x1016be0, Func Offset: 0x1c0
	// Line 126, Address: 0x1016bec, Func Offset: 0x1cc
	// Line 129, Address: 0x1016bf4, Func Offset: 0x1d4
	// Line 130, Address: 0x1016c04, Func Offset: 0x1e4
	// Line 131, Address: 0x1016c10, Func Offset: 0x1f0
	// Line 134, Address: 0x1016c1c, Func Offset: 0x1fc
	// Line 136, Address: 0x1016c48, Func Offset: 0x228
	// Line 138, Address: 0x1016c60, Func Offset: 0x240
	// Line 140, Address: 0x1016c6c, Func Offset: 0x24c
	// Line 141, Address: 0x1016c78, Func Offset: 0x258
	// Line 142, Address: 0x1016c84, Func Offset: 0x264
	// Line 144, Address: 0x1016c94, Func Offset: 0x274
	// Line 145, Address: 0x1016ca4, Func Offset: 0x284
	// Line 148, Address: 0x1016cac, Func Offset: 0x28c
	// Line 150, Address: 0x1016cbc, Func Offset: 0x29c
	// Line 151, Address: 0x1016cc8, Func Offset: 0x2a8
	// Line 154, Address: 0x1016cd8, Func Offset: 0x2b8
	// Line 156, Address: 0x1016d04, Func Offset: 0x2e4
	// Line 157, Address: 0x1016d10, Func Offset: 0x2f0
	// Line 159, Address: 0x1016d20, Func Offset: 0x300
	// Line 160, Address: 0x1016d30, Func Offset: 0x310
	// Line 163, Address: 0x1016d38, Func Offset: 0x318
	// Line 165, Address: 0x1016d48, Func Offset: 0x328
	// Line 166, Address: 0x1016d50, Func Offset: 0x330
	// Line 168, Address: 0x1016d60, Func Offset: 0x340
	// Line 169, Address: 0x1016d6c, Func Offset: 0x34c
	// Line 170, Address: 0x1016d7c, Func Offset: 0x35c
	// Line 172, Address: 0x1016d8c, Func Offset: 0x36c
	// Line 173, Address: 0x1016d98, Func Offset: 0x378
	// Line 175, Address: 0x1016da0, Func Offset: 0x380
	// Line 176, Address: 0x1016dc0, Func Offset: 0x3a0
	// Line 177, Address: 0x1016dcc, Func Offset: 0x3ac
	// Line 178, Address: 0x1016ddc, Func Offset: 0x3bc
	// Line 179, Address: 0x1016dec, Func Offset: 0x3cc
	// Line 180, Address: 0x1016df8, Func Offset: 0x3d8
	// Line 181, Address: 0x1016e08, Func Offset: 0x3e8
	// Line 182, Address: 0x1016e14, Func Offset: 0x3f4
	// Line 183, Address: 0x1016e34, Func Offset: 0x414
	// Func End, Address: 0x1016e64, Func Offset: 0x444
}

// 
// Start address: 0x1016e70
short hosei(_anon1* pActwk, _anon1* pActwk2)
{
	short d0;
	short d1;
	short z;
	// Line 188, Address: 0x1016e70, Func Offset: 0
	// Line 192, Address: 0x1016e88, Func Offset: 0x18
	// Line 193, Address: 0x1016e98, Func Offset: 0x28
	// Line 194, Address: 0x1016eac, Func Offset: 0x3c
	// Line 195, Address: 0x1016eb8, Func Offset: 0x48
	// Line 196, Address: 0x1016ecc, Func Offset: 0x5c
	// Line 197, Address: 0x1016ed8, Func Offset: 0x68
	// Line 198, Address: 0x1016ee4, Func Offset: 0x74
	// Line 199, Address: 0x1016eec, Func Offset: 0x7c
	// Line 200, Address: 0x1016f00, Func Offset: 0x90
	// Line 201, Address: 0x1016f0c, Func Offset: 0x9c
	// Line 202, Address: 0x1016f10, Func Offset: 0xa0
	// Func End, Address: 0x1016f28, Func Offset: 0xb8
}

