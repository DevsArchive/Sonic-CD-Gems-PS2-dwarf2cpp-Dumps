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
typedef _anon0* type_2[1];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
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

_anon0 bmp00;
_anon0* banpa_pat[1];
_anon1 actwk[128];

void banpa(_anon1* bumperwk);
void act_init(_anon1* bumperwk);
void act_move(_anon1* bumperwk);

// 
// Start address: 0x101a590
void banpa(_anon1* bumperwk)
{
	void(*act_tbl)(_anon1*)[2];
	// Line 30, Address: 0x101a590, Func Offset: 0
	// Line 31, Address: 0x101a59c, Func Offset: 0xc
	// Line 33, Address: 0x101a5b8, Func Offset: 0x28
	// Line 34, Address: 0x101a5f4, Func Offset: 0x64
	// Line 35, Address: 0x101a600, Func Offset: 0x70
	// Line 36, Address: 0x101a614, Func Offset: 0x84
	// Func End, Address: 0x101a624, Func Offset: 0x94
}

// 
// Start address: 0x101a630
void act_init(_anon1* bumperwk)
{
	// Line 40, Address: 0x101a630, Func Offset: 0
	// Line 41, Address: 0x101a638, Func Offset: 0x8
	// Line 43, Address: 0x101a648, Func Offset: 0x18
	// Line 44, Address: 0x101a658, Func Offset: 0x28
	// Line 46, Address: 0x101a668, Func Offset: 0x38
	// Line 47, Address: 0x101a674, Func Offset: 0x44
	// Line 48, Address: 0x101a680, Func Offset: 0x50
	// Line 49, Address: 0x101a68c, Func Offset: 0x5c
	// Line 50, Address: 0x101a698, Func Offset: 0x68
	// Line 52, Address: 0x101a6a4, Func Offset: 0x74
	// Line 53, Address: 0x101a6b0, Func Offset: 0x80
	// Line 54, Address: 0x101a6bc, Func Offset: 0x8c
	// Line 55, Address: 0x101a6d8, Func Offset: 0xa8
	// Line 56, Address: 0x101a6e4, Func Offset: 0xb4
	// Line 58, Address: 0x101a6f0, Func Offset: 0xc0
	// Line 59, Address: 0x101a70c, Func Offset: 0xdc
	// Line 61, Address: 0x101a724, Func Offset: 0xf4
	// Line 62, Address: 0x101a734, Func Offset: 0x104
	// Func End, Address: 0x101a740, Func Offset: 0x110
}

// 
// Start address: 0x101a740
void act_move(_anon1* bumperwk)
{
	// Line 66, Address: 0x101a740, Func Offset: 0
	// Line 67, Address: 0x101a74c, Func Offset: 0xc
	// Line 68, Address: 0x101a760, Func Offset: 0x20
	// Line 70, Address: 0x101a78c, Func Offset: 0x4c
	// Line 73, Address: 0x101a794, Func Offset: 0x54
	// Line 74, Address: 0x101a7d0, Func Offset: 0x90
	// Line 75, Address: 0x101a7d8, Func Offset: 0x98
	// Line 79, Address: 0x101a7e0, Func Offset: 0xa0
	// Line 80, Address: 0x101a81c, Func Offset: 0xdc
	// Line 81, Address: 0x101a848, Func Offset: 0x108
	// Line 83, Address: 0x101a85c, Func Offset: 0x11c
	// Line 84, Address: 0x101a868, Func Offset: 0x128
	// Line 87, Address: 0x101a870, Func Offset: 0x130
	// Line 88, Address: 0x101a8b0, Func Offset: 0x170
	// Line 89, Address: 0x101a8bc, Func Offset: 0x17c
	// Line 90, Address: 0x101a8fc, Func Offset: 0x1bc
	// Line 93, Address: 0x101a908, Func Offset: 0x1c8
	// Line 94, Address: 0x101a91c, Func Offset: 0x1dc
	// Line 97, Address: 0x101a930, Func Offset: 0x1f0
	// Line 98, Address: 0x101a948, Func Offset: 0x208
	// Line 100, Address: 0x101a96c, Func Offset: 0x22c
	// Line 102, Address: 0x101a988, Func Offset: 0x248
	// Line 103, Address: 0x101a9a8, Func Offset: 0x268
	// Line 105, Address: 0x101a9b8, Func Offset: 0x278
	// Line 107, Address: 0x101a9d0, Func Offset: 0x290
	// Func End, Address: 0x101a9e0, Func Offset: 0x2a0
}

