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
typedef char* type_3[1];
typedef _anon1* type_4[4];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef _anon1* type_7[2];
typedef char* type_8[1];
typedef char type_9[6];
typedef _anon0 type_10[128];
typedef _anon1* type_11[4];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
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

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
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

char pchg0[6];
char pchg_bomb0[4];
char* pchg[1];
char* pchg_bomb[1];
_anon1 pat00;
_anon1 pat01;
_anon1 pat02;
_anon1 pat03;
_anon1 pat04;
_anon1 pat05;
_anon1 pat06;
_anon1 pat07;
_anon1 pat08;
_anon1 pat09;
_anon1* pat_semi_e[4];
_anon1* pat_semi_b[4];
_anon1* pat_bomb[2];
_anon0 actwk[128];

void semi(_anon0* actionwk);
void act_init(_anon0* actionwk);
void act_wait(_anon0* actionwk);
void act_wait1(_anon0* actionwk);
short act_check(_anon0* actionwk, _anon0* pw);
void act_movea(_anon0* actionwk);
void act_movea1(_anon0* actionwk);
void act_moveb(_anon0* actionwk);
void act_moveb1(_anon0* actionwk);
void bomb(_anon0* actionwk);
void bomb_init(_anon0* actionwk);
void bomb_fall(_anon0* actionwk);
void bomb_wait(_anon0* actionwk);
void bomb_blink(_anon0* actionwk);
void bomb_die(_anon0* actionwk);

// 
// Start address: 0x101e650
void semi(_anon0* actionwk)
{
	// Line 87, Address: 0x101e650, Func Offset: 0
	// Line 88, Address: 0x101e65c, Func Offset: 0xc
	// Line 90, Address: 0x101e674, Func Offset: 0x24
	// Line 91, Address: 0x101e680, Func Offset: 0x30
	// Line 93, Address: 0x101e688, Func Offset: 0x38
	// Line 94, Address: 0x101e6a8, Func Offset: 0x58
	// Line 97, Address: 0x101e70c, Func Offset: 0xbc
	// Line 99, Address: 0x101e718, Func Offset: 0xc8
	// Line 100, Address: 0x101e724, Func Offset: 0xd4
	// Line 102, Address: 0x101e72c, Func Offset: 0xdc
	// Line 103, Address: 0x101e738, Func Offset: 0xe8
	// Line 105, Address: 0x101e740, Func Offset: 0xf0
	// Line 107, Address: 0x101e74c, Func Offset: 0xfc
	// Line 108, Address: 0x101e758, Func Offset: 0x108
	// Line 110, Address: 0x101e760, Func Offset: 0x110
	// Line 112, Address: 0x101e76c, Func Offset: 0x11c
	// Line 115, Address: 0x101e778, Func Offset: 0x128
	// Line 116, Address: 0x101e784, Func Offset: 0x134
	// Line 117, Address: 0x101e790, Func Offset: 0x140
	// Func End, Address: 0x101e7a0, Func Offset: 0x150
}

// 
// Start address: 0x101e7a0
void act_init(_anon0* actionwk)
{
	// Line 119, Address: 0x101e7a0, Func Offset: 0
	// Line 120, Address: 0x101e7a8, Func Offset: 0x8
	// Line 121, Address: 0x101e7b8, Func Offset: 0x18
	// Line 122, Address: 0x101e7c8, Func Offset: 0x28
	// Line 123, Address: 0x101e7d4, Func Offset: 0x34
	// Line 125, Address: 0x101e7e0, Func Offset: 0x40
	// Line 126, Address: 0x101e7ec, Func Offset: 0x4c
	// Line 127, Address: 0x101e7f8, Func Offset: 0x58
	// Line 128, Address: 0x101e804, Func Offset: 0x64
	// Line 131, Address: 0x101e810, Func Offset: 0x70
	// Line 132, Address: 0x101e820, Func Offset: 0x80
	// Line 133, Address: 0x101e838, Func Offset: 0x98
	// Line 135, Address: 0x101e850, Func Offset: 0xb0
	// Line 136, Address: 0x101e860, Func Offset: 0xc0
	// Func End, Address: 0x101e86c, Func Offset: 0xcc
}

// 
// Start address: 0x101e870
void act_wait(_anon0* actionwk)
{
	// Line 138, Address: 0x101e870, Func Offset: 0
	// Line 139, Address: 0x101e878, Func Offset: 0x8
	// Line 140, Address: 0x101e8a0, Func Offset: 0x30
	// Line 141, Address: 0x101e8b0, Func Offset: 0x40
	// Func End, Address: 0x101e8bc, Func Offset: 0x4c
}

// 
// Start address: 0x101e8c0
void act_wait1(_anon0* actionwk)
{
	// Line 143, Address: 0x101e8c0, Func Offset: 0
	// Line 144, Address: 0x101e8cc, Func Offset: 0xc
	// Line 145, Address: 0x101e8e8, Func Offset: 0x28
	// Line 146, Address: 0x101e8f8, Func Offset: 0x38
	// Func End, Address: 0x101e908, Func Offset: 0x48
}

// 
// Start address: 0x101e910
short act_check(_anon0* actionwk, _anon0* pw)
{
	short d0w;
	// Line 148, Address: 0x101e910, Func Offset: 0
	// Line 151, Address: 0x101e920, Func Offset: 0x10
	// Line 152, Address: 0x101e930, Func Offset: 0x20
	// Line 153, Address: 0x101e944, Func Offset: 0x34
	// Line 154, Address: 0x101e978, Func Offset: 0x68
	// Line 156, Address: 0x101e9ac, Func Offset: 0x9c
	// Line 157, Address: 0x101e9bc, Func Offset: 0xac
	// Line 158, Address: 0x101e9d0, Func Offset: 0xc0
	// Line 159, Address: 0x101ea04, Func Offset: 0xf4
	// Line 161, Address: 0x101ea08, Func Offset: 0xf8
	// Func End, Address: 0x101ea18, Func Offset: 0x108
}

// 
// Start address: 0x101ea20
void act_movea(_anon0* actionwk)
{
	int d0;
	int d1;
	short d2;
	// Line 163, Address: 0x101ea20, Func Offset: 0
	// Line 167, Address: 0x101ea34, Func Offset: 0x14
	// Line 168, Address: 0x101ea44, Func Offset: 0x24
	// Line 169, Address: 0x101ea48, Func Offset: 0x28
	// Line 170, Address: 0x101ea4c, Func Offset: 0x2c
	// Line 171, Address: 0x101ea58, Func Offset: 0x38
	// Line 173, Address: 0x101ea70, Func Offset: 0x50
	// Line 174, Address: 0x101ea74, Func Offset: 0x54
	// Line 175, Address: 0x101ea78, Func Offset: 0x58
	// Line 178, Address: 0x101ea84, Func Offset: 0x64
	// Line 180, Address: 0x101ea9c, Func Offset: 0x7c
	// Line 182, Address: 0x101eaa0, Func Offset: 0x80
	// Line 183, Address: 0x101eaac, Func Offset: 0x8c
	// Line 184, Address: 0x101eab8, Func Offset: 0x98
	// Line 185, Address: 0x101eac0, Func Offset: 0xa0
	// Func End, Address: 0x101ead8, Func Offset: 0xb8
}

// 
// Start address: 0x101eae0
void act_movea1(_anon0* actionwk)
{
	// Line 187, Address: 0x101eae0, Func Offset: 0
	// Line 188, Address: 0x101eaec, Func Offset: 0xc
	// Line 190, Address: 0x101eb24, Func Offset: 0x44
	// Line 191, Address: 0x101eb40, Func Offset: 0x60
	// Line 192, Address: 0x101eb5c, Func Offset: 0x7c
	// Line 193, Address: 0x101eb70, Func Offset: 0x90
	// Func End, Address: 0x101eb80, Func Offset: 0xa0
}

// 
// Start address: 0x101eb80
void act_moveb(_anon0* actionwk)
{
	int d0;
	// Line 195, Address: 0x101eb80, Func Offset: 0
	// Line 198, Address: 0x101eb8c, Func Offset: 0xc
	// Line 199, Address: 0x101eb9c, Func Offset: 0x1c
	// Line 200, Address: 0x101eba4, Func Offset: 0x24
	// Line 201, Address: 0x101eba8, Func Offset: 0x28
	// Line 202, Address: 0x101ebc0, Func Offset: 0x40
	// Line 204, Address: 0x101ebc4, Func Offset: 0x44
	// Line 206, Address: 0x101ebdc, Func Offset: 0x5c
	// Line 208, Address: 0x101ebe0, Func Offset: 0x60
	// Line 209, Address: 0x101ebec, Func Offset: 0x6c
	// Func End, Address: 0x101ebfc, Func Offset: 0x7c
}

// 
// Start address: 0x101ec00
void act_moveb1(_anon0* actionwk)
{
	_anon0* a1;
	// Line 211, Address: 0x101ec00, Func Offset: 0
	// Line 214, Address: 0x101ec0c, Func Offset: 0xc
	// Line 216, Address: 0x101ec24, Func Offset: 0x24
	// Line 217, Address: 0x101ec34, Func Offset: 0x34
	// Line 219, Address: 0x101ec4c, Func Offset: 0x4c
	// Line 221, Address: 0x101ec70, Func Offset: 0x70
	// Line 223, Address: 0x101ec84, Func Offset: 0x84
	// Line 224, Address: 0x101ec94, Func Offset: 0x94
	// Line 225, Address: 0x101eca4, Func Offset: 0xa4
	// Line 226, Address: 0x101ecb4, Func Offset: 0xb4
	// Line 227, Address: 0x101ecc4, Func Offset: 0xc4
	// Line 228, Address: 0x101ecd0, Func Offset: 0xd0
	// Line 229, Address: 0x101ece0, Func Offset: 0xe0
	// Line 230, Address: 0x101ecf0, Func Offset: 0xf0
	// Line 234, Address: 0x101ed00, Func Offset: 0x100
	// Line 237, Address: 0x101ed10, Func Offset: 0x110
	// Line 238, Address: 0x101ed2c, Func Offset: 0x12c
	// Line 239, Address: 0x101ed40, Func Offset: 0x140
	// Func End, Address: 0x101ed50, Func Offset: 0x150
}

// 
// Start address: 0x101ed50
void bomb(_anon0* actionwk)
{
	// Line 245, Address: 0x101ed50, Func Offset: 0
	// Line 246, Address: 0x101ed5c, Func Offset: 0xc
	// Line 249, Address: 0x101eda8, Func Offset: 0x58
	// Line 251, Address: 0x101edb4, Func Offset: 0x64
	// Line 252, Address: 0x101edc0, Func Offset: 0x70
	// Line 254, Address: 0x101edc8, Func Offset: 0x78
	// Line 255, Address: 0x101edd4, Func Offset: 0x84
	// Line 257, Address: 0x101eddc, Func Offset: 0x8c
	// Line 258, Address: 0x101ede8, Func Offset: 0x98
	// Line 260, Address: 0x101edf0, Func Offset: 0xa0
	// Line 263, Address: 0x101edfc, Func Offset: 0xac
	// Line 264, Address: 0x101ee08, Func Offset: 0xb8
	// Line 265, Address: 0x101ee14, Func Offset: 0xc4
	// Func End, Address: 0x101ee24, Func Offset: 0xd4
}

// 
// Start address: 0x101ee30
void bomb_init(_anon0* actionwk)
{
	// Line 267, Address: 0x101ee30, Func Offset: 0
	// Line 268, Address: 0x101ee38, Func Offset: 0x8
	// Line 269, Address: 0x101ee48, Func Offset: 0x18
	// Line 271, Address: 0x101ee54, Func Offset: 0x24
	// Line 272, Address: 0x101ee60, Func Offset: 0x30
	// Line 273, Address: 0x101ee6c, Func Offset: 0x3c
	// Line 274, Address: 0x101ee78, Func Offset: 0x48
	// Line 275, Address: 0x101ee84, Func Offset: 0x54
	// Line 276, Address: 0x101ee94, Func Offset: 0x64
	// Line 277, Address: 0x101eea4, Func Offset: 0x74
	// Func End, Address: 0x101eeb0, Func Offset: 0x80
}

// 
// Start address: 0x101eeb0
void bomb_fall(_anon0* actionwk)
{
	short d1;
	// Line 279, Address: 0x101eeb0, Func Offset: 0
	// Line 282, Address: 0x101eec0, Func Offset: 0x10
	// Line 283, Address: 0x101eedc, Func Offset: 0x2c
	// Line 284, Address: 0x101eef4, Func Offset: 0x44
	// Line 285, Address: 0x101ef08, Func Offset: 0x58
	// Line 287, Address: 0x101ef18, Func Offset: 0x68
	// Line 288, Address: 0x101ef28, Func Offset: 0x78
	// Line 289, Address: 0x101ef38, Func Offset: 0x88
	// Line 291, Address: 0x101ef44, Func Offset: 0x94
	// Func End, Address: 0x101ef58, Func Offset: 0xa8
}

// 
// Start address: 0x101ef60
void bomb_wait(_anon0* actionwk)
{
	short t;
	// Line 293, Address: 0x101ef60, Func Offset: 0
	// Line 296, Address: 0x101ef6c, Func Offset: 0xc
	// Line 297, Address: 0x101ef7c, Func Offset: 0x1c
	// Line 298, Address: 0x101ef8c, Func Offset: 0x2c
	// Line 300, Address: 0x101ef9c, Func Offset: 0x3c
	// Line 301, Address: 0x101efac, Func Offset: 0x4c
	// Line 303, Address: 0x101efb8, Func Offset: 0x58
	// Func End, Address: 0x101efc8, Func Offset: 0x68
}

// 
// Start address: 0x101efd0
void bomb_blink(_anon0* actionwk)
{
	short t;
	// Line 305, Address: 0x101efd0, Func Offset: 0
	// Line 308, Address: 0x101efe0, Func Offset: 0x10
	// Line 309, Address: 0x101eff0, Func Offset: 0x20
	// Line 310, Address: 0x101f000, Func Offset: 0x30
	// Line 312, Address: 0x101f010, Func Offset: 0x40
	// Line 315, Address: 0x101f020, Func Offset: 0x50
	// Line 316, Address: 0x101f034, Func Offset: 0x64
	// Func End, Address: 0x101f048, Func Offset: 0x78
}

// 
// Start address: 0x101f050
void bomb_die(_anon0* actionwk)
{
	// Line 318, Address: 0x101f050, Func Offset: 0
	// Line 319, Address: 0x101f05c, Func Offset: 0xc
	// Line 320, Address: 0x101f068, Func Offset: 0x18
	// Line 321, Address: 0x101f070, Func Offset: 0x20
	// Line 322, Address: 0x101f07c, Func Offset: 0x2c
	// Line 323, Address: 0x101f09c, Func Offset: 0x4c
	// Line 324, Address: 0x101f0a8, Func Offset: 0x58
	// Func End, Address: 0x101f0b8, Func Offset: 0x68
}

