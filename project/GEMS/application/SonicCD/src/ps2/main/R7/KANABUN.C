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
typedef char type_2[4];
typedef unsigned char type_3[66];
typedef unsigned char type_4[66];
typedef _anon0* type_5[8];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef _anon0* type_8[8];
typedef unsigned char* type_9[1];
typedef unsigned char* type_10[1];

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

_anon0 pat_e00;
_anon0 pat_e01;
_anon0 pat_e02;
_anon0 pat_e03;
_anon0 pat_e04;
_anon0 pat_e05;
_anon0 pat_e06;
_anon0 pat_e07;
_anon0* pat_kanabun_e[8];
_anon0 pat_b00;
_anon0 pat_b01;
_anon0 pat_b02;
_anon0 pat_b03;
_anon0 pat_b04;
_anon0 pat_b05;
_anon0 pat_b06;
_anon0 pat_b07;
_anon0* pat_kanabun_b[8];
unsigned char pchg_e00[66];
unsigned char* pchg_e[1];
unsigned char pchg_b00[66];
unsigned char* pchg_b[1];
char tbl0[4];

void kanabun(_anon1* pActwk);

// 
// Start address: 0x1022260
void kanabun(_anon1* pActwk)
{
	_anon2 poswk;
	int spdwk;
	short sinwk;
	short coswk;
	// Line 194, Address: 0x1022260, Func Offset: 0
	// Line 199, Address: 0x1022270, Func Offset: 0x10
	// Line 203, Address: 0x1022284, Func Offset: 0x24
	// Line 205, Address: 0x1022294, Func Offset: 0x34
	// Line 206, Address: 0x10222a4, Func Offset: 0x44
	// Line 207, Address: 0x10222b4, Func Offset: 0x54
	// Line 208, Address: 0x10222c0, Func Offset: 0x60
	// Line 209, Address: 0x10222cc, Func Offset: 0x6c
	// Line 210, Address: 0x10222d8, Func Offset: 0x78
	// Line 211, Address: 0x10222e4, Func Offset: 0x84
	// Line 212, Address: 0x10222f0, Func Offset: 0x90
	// Line 213, Address: 0x1022300, Func Offset: 0xa0
	// Line 214, Address: 0x1022310, Func Offset: 0xb0
	// Line 216, Address: 0x102231c, Func Offset: 0xbc
	// Line 217, Address: 0x102232c, Func Offset: 0xcc
	// Line 218, Address: 0x102233c, Func Offset: 0xdc
	// Line 219, Address: 0x1022350, Func Offset: 0xf0
	// Line 220, Address: 0x102235c, Func Offset: 0xfc
	// Line 221, Address: 0x1022368, Func Offset: 0x108
	// Line 222, Address: 0x1022370, Func Offset: 0x110
	// Line 223, Address: 0x1022380, Func Offset: 0x120
	// Line 224, Address: 0x1022394, Func Offset: 0x134
	// Line 225, Address: 0x10223a0, Func Offset: 0x140
	// Line 230, Address: 0x10223ac, Func Offset: 0x14c
	// Line 231, Address: 0x10223c4, Func Offset: 0x164
	// Line 233, Address: 0x10223e8, Func Offset: 0x188
	// Line 234, Address: 0x1022414, Func Offset: 0x1b4
	// Line 238, Address: 0x1022420, Func Offset: 0x1c0
	// Line 239, Address: 0x1022438, Func Offset: 0x1d8
	// Line 240, Address: 0x1022448, Func Offset: 0x1e8
	// Line 241, Address: 0x1022454, Func Offset: 0x1f4
	// Line 242, Address: 0x1022464, Func Offset: 0x204
	// Line 243, Address: 0x1022474, Func Offset: 0x214
	// Line 244, Address: 0x102247c, Func Offset: 0x21c
	// Line 248, Address: 0x1022488, Func Offset: 0x228
	// Line 249, Address: 0x1022490, Func Offset: 0x230
	// Line 251, Address: 0x10224c0, Func Offset: 0x260
	// Line 252, Address: 0x10224cc, Func Offset: 0x26c
	// Line 253, Address: 0x10224e8, Func Offset: 0x288
	// Line 254, Address: 0x1022500, Func Offset: 0x2a0
	// Line 255, Address: 0x1022508, Func Offset: 0x2a8
	// Line 256, Address: 0x102252c, Func Offset: 0x2cc
	// Line 257, Address: 0x1022538, Func Offset: 0x2d8
	// Line 258, Address: 0x1022550, Func Offset: 0x2f0
	// Line 260, Address: 0x102255c, Func Offset: 0x2fc
	// Line 261, Address: 0x1022574, Func Offset: 0x314
	// Line 262, Address: 0x102259c, Func Offset: 0x33c
	// Line 263, Address: 0x10225a8, Func Offset: 0x348
	// Line 264, Address: 0x10225bc, Func Offset: 0x35c
	// Func End, Address: 0x10225d0, Func Offset: 0x370
}

