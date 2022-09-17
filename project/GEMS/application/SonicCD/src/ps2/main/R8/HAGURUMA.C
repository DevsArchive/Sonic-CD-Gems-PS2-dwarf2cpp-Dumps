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

_anon1 actwk[128];

void haguruma(_anon1* wheelwk);
void hagurumainit(_anon1* wheelwk);
void hagurumamove(_anon1* wheelwk);
void hagurumasub(_anon1* wheelwk);

// 
// Start address: 0x101c660
void haguruma(_anon1* wheelwk)
{
	void(*haguruma_move_tbl)(_anon1*)[2];
	// Line 17, Address: 0x101c660, Func Offset: 0
	// Line 18, Address: 0x101c66c, Func Offset: 0xc
	// Line 19, Address: 0x101c688, Func Offset: 0x28
	// Line 20, Address: 0x101c6c4, Func Offset: 0x64
	// Func End, Address: 0x101c6d4, Func Offset: 0x74
}

// 
// Start address: 0x101c6e0
void hagurumainit(_anon1* wheelwk)
{
	// Line 23, Address: 0x101c6e0, Func Offset: 0
	// Line 24, Address: 0x101c6ec, Func Offset: 0xc
	// Line 25, Address: 0x101c6fc, Func Offset: 0x1c
	// Line 26, Address: 0x101c70c, Func Offset: 0x2c
	// Line 27, Address: 0x101c71c, Func Offset: 0x3c
	// Line 28, Address: 0x101c72c, Func Offset: 0x4c
	// Line 29, Address: 0x101c738, Func Offset: 0x58
	// Line 30, Address: 0x101c744, Func Offset: 0x64
	// Line 31, Address: 0x101c760, Func Offset: 0x80
	// Line 32, Address: 0x101c76c, Func Offset: 0x8c
	// Line 34, Address: 0x101c778, Func Offset: 0x98
	// Line 36, Address: 0x101c7b4, Func Offset: 0xd4
	// Line 37, Address: 0x101c7d8, Func Offset: 0xf8
	// Line 38, Address: 0x101c7e4, Func Offset: 0x104
	// Func End, Address: 0x101c7f4, Func Offset: 0x114
}

// 
// Start address: 0x101c800
void hagurumamove(_anon1* wheelwk)
{
	// Line 41, Address: 0x101c800, Func Offset: 0
	// Line 42, Address: 0x101c80c, Func Offset: 0xc
	// Line 43, Address: 0x101c818, Func Offset: 0x18
	// Line 44, Address: 0x101c824, Func Offset: 0x24
	// Func End, Address: 0x101c834, Func Offset: 0x34
}

// 
// Start address: 0x101c840
void hagurumasub(_anon1* wheelwk)
{
	unsigned short cal_posi;
	// Line 47, Address: 0x101c840, Func Offset: 0
	// Line 50, Address: 0x101c84c, Func Offset: 0xc
	// Line 52, Address: 0x101c890, Func Offset: 0x50
	// Line 53, Address: 0x101c8b8, Func Offset: 0x78
	// Line 55, Address: 0x101c8fc, Func Offset: 0xbc
	// Line 56, Address: 0x101c924, Func Offset: 0xe4
	// Line 58, Address: 0x101c93c, Func Offset: 0xfc
	// Line 59, Address: 0x101c944, Func Offset: 0x104
	// Line 62, Address: 0x101c94c, Func Offset: 0x10c
	// Line 63, Address: 0x101c95c, Func Offset: 0x11c
	// Line 64, Address: 0x101c970, Func Offset: 0x130
	// Line 67, Address: 0x101c978, Func Offset: 0x138
	// Line 68, Address: 0x101c988, Func Offset: 0x148
	// Line 69, Address: 0x101c994, Func Offset: 0x154
	// Line 70, Address: 0x101c9b4, Func Offset: 0x174
	// Line 71, Address: 0x101c9c8, Func Offset: 0x188
	// Line 72, Address: 0x101c9d4, Func Offset: 0x194
	// Line 74, Address: 0x101c9e0, Func Offset: 0x1a0
	// Line 75, Address: 0x101c9f8, Func Offset: 0x1b8
	// Line 76, Address: 0x101ca28, Func Offset: 0x1e8
	// Line 77, Address: 0x101ca50, Func Offset: 0x210
	// Line 79, Address: 0x101ca58, Func Offset: 0x218
	// Line 80, Address: 0x101ca88, Func Offset: 0x248
	// Line 81, Address: 0x101cab0, Func Offset: 0x270
	// Func End, Address: 0x101cac0, Func Offset: 0x280
}

