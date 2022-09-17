typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon0* type_0[1];
typedef _anon7 type_1[20];
typedef _anon7 type_2[0];
typedef unsigned char type_3[7];
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

_anon0 tobidai6pat0;
_anon0* tobidai6pat[1];
unsigned char clchgcnt[7];
unsigned char time_flag;
_anon1 actwk[128];

void tobidai6(_anon1* actionwk);
void tobidai6_ridechk(_anon1* actionwk);
void tobidai6_init(_anon1* actionwk);
void tobidai6_move0(_anon1* actionwk);
void tobidai6_move1(_anon1* actionwk);
void tobidai6_move2(_anon1* actionwk);
void tobidai6_speedset(_anon1* actionwk);
int yuka_chk();
void yuka_ridechk(_anon1* actionwk);
void chk(_anon1* actionwk, _anon1* pw);
void yuka_ride_on(_anon1* actionwk, _anon1* pw);

// 
// Start address: 0x101f140
void tobidai6(_anon1* actionwk)
{
	// Line 59, Address: 0x101f140, Func Offset: 0
	// Line 60, Address: 0x101f14c, Func Offset: 0xc
	// Line 63, Address: 0x101f18c, Func Offset: 0x4c
	// Line 65, Address: 0x101f198, Func Offset: 0x58
	// Line 66, Address: 0x101f1a4, Func Offset: 0x64
	// Line 68, Address: 0x101f1ac, Func Offset: 0x6c
	// Line 69, Address: 0x101f1b8, Func Offset: 0x78
	// Line 71, Address: 0x101f1c0, Func Offset: 0x80
	// Line 74, Address: 0x101f1cc, Func Offset: 0x8c
	// Line 75, Address: 0x101f1d8, Func Offset: 0x98
	// Line 76, Address: 0x101f1e4, Func Offset: 0xa4
	// Func End, Address: 0x101f1f4, Func Offset: 0xb4
}

// 
// Start address: 0x101f200
void tobidai6_ridechk(_anon1* actionwk)
{
	// Line 78, Address: 0x101f200, Func Offset: 0
	// Line 79, Address: 0x101f20c, Func Offset: 0xc
	// Line 80, Address: 0x101f218, Func Offset: 0x18
	// Func End, Address: 0x101f228, Func Offset: 0x28
}

// 
// Start address: 0x101f230
void tobidai6_init(_anon1* actionwk)
{
	// Line 83, Address: 0x101f230, Func Offset: 0
	// Line 84, Address: 0x101f238, Func Offset: 0x8
	// Line 85, Address: 0x101f248, Func Offset: 0x18
	// Line 86, Address: 0x101f258, Func Offset: 0x28
	// Line 87, Address: 0x101f264, Func Offset: 0x34
	// Line 88, Address: 0x101f270, Func Offset: 0x40
	// Line 89, Address: 0x101f280, Func Offset: 0x50
	// Line 90, Address: 0x101f28c, Func Offset: 0x5c
	// Line 91, Address: 0x101f298, Func Offset: 0x68
	// Func End, Address: 0x101f2a4, Func Offset: 0x74
}

// 
// Start address: 0x101f2b0
void tobidai6_move0(_anon1* actionwk)
{
	// Line 93, Address: 0x101f2b0, Func Offset: 0
	// Line 94, Address: 0x101f2bc, Func Offset: 0xc
	// Line 96, Address: 0x101f2cc, Func Offset: 0x1c
	// Line 97, Address: 0x101f2d8, Func Offset: 0x28
	// Line 98, Address: 0x101f2e4, Func Offset: 0x34
	// Line 101, Address: 0x101f2f4, Func Offset: 0x44
	// Line 102, Address: 0x101f300, Func Offset: 0x50
	// Func End, Address: 0x101f310, Func Offset: 0x60
}

// 
// Start address: 0x101f310
void tobidai6_move1(_anon1* actionwk)
{
	short d1;
	// Line 104, Address: 0x101f310, Func Offset: 0
	// Line 107, Address: 0x101f320, Func Offset: 0x10
	// Line 108, Address: 0x101f32c, Func Offset: 0x1c
	// Line 109, Address: 0x101f340, Func Offset: 0x30
	// Line 111, Address: 0x101f358, Func Offset: 0x48
	// Line 112, Address: 0x101f36c, Func Offset: 0x5c
	// Line 114, Address: 0x101f37c, Func Offset: 0x6c
	// Line 116, Address: 0x101f38c, Func Offset: 0x7c
	// Line 117, Address: 0x101f398, Func Offset: 0x88
	// Line 118, Address: 0x101f3a4, Func Offset: 0x94
	// Line 120, Address: 0x101f3bc, Func Offset: 0xac
	// Line 121, Address: 0x101f3c8, Func Offset: 0xb8
	// Line 125, Address: 0x101f3d0, Func Offset: 0xc0
	// Line 126, Address: 0x101f3dc, Func Offset: 0xcc
	// Line 127, Address: 0x101f3e8, Func Offset: 0xd8
	// Line 130, Address: 0x101f3f8, Func Offset: 0xe8
	// Line 131, Address: 0x101f404, Func Offset: 0xf4
	// Func End, Address: 0x101f418, Func Offset: 0x108
}

// 
// Start address: 0x101f420
void tobidai6_move2(_anon1* actionwk)
{
	short d1;
	// Line 133, Address: 0x101f420, Func Offset: 0
	// Line 136, Address: 0x101f430, Func Offset: 0x10
	// Line 137, Address: 0x101f43c, Func Offset: 0x1c
	// Line 139, Address: 0x101f454, Func Offset: 0x34
	// Line 140, Address: 0x101f468, Func Offset: 0x48
	// Line 142, Address: 0x101f478, Func Offset: 0x58
	// Line 143, Address: 0x101f480, Func Offset: 0x60
	// Line 144, Address: 0x101f488, Func Offset: 0x68
	// Line 148, Address: 0x101f498, Func Offset: 0x78
	// Line 149, Address: 0x101f4a4, Func Offset: 0x84
	// Func End, Address: 0x101f4b8, Func Offset: 0x98
}

// 
// Start address: 0x101f4c0
void tobidai6_speedset(_anon1* actionwk)
{
	short d0;
	// Line 151, Address: 0x101f4c0, Func Offset: 0
	// Line 154, Address: 0x101f4cc, Func Offset: 0xc
	// Line 155, Address: 0x101f500, Func Offset: 0x40
	// Line 157, Address: 0x101f510, Func Offset: 0x50
	// Line 160, Address: 0x101f530, Func Offset: 0x70
	// Line 161, Address: 0x101f538, Func Offset: 0x78
	// Line 162, Address: 0x101f554, Func Offset: 0x94
	// Func End, Address: 0x101f564, Func Offset: 0xa4
}

// 
// Start address: 0x101f570
int yuka_chk()
{
	unsigned char d0;
	// Line 166, Address: 0x101f570, Func Offset: 0
	// Line 169, Address: 0x101f578, Func Offset: 0x8
	// Line 171, Address: 0x101f590, Func Offset: 0x20
	// Line 172, Address: 0x101f598, Func Offset: 0x28
	// Line 173, Address: 0x101f5b4, Func Offset: 0x44
	// Line 176, Address: 0x101f5d8, Func Offset: 0x68
	// Line 177, Address: 0x101f5dc, Func Offset: 0x6c
	// Func End, Address: 0x101f5ec, Func Offset: 0x7c
}

// 
// Start address: 0x101f5f0
void yuka_ridechk(_anon1* actionwk)
{
	short d0;
	// Line 180, Address: 0x101f5f0, Func Offset: 0
	// Line 183, Address: 0x101f600, Func Offset: 0x10
	// Line 184, Address: 0x101f610, Func Offset: 0x20
	// Line 185, Address: 0x101f620, Func Offset: 0x30
	// Line 186, Address: 0x101f63c, Func Offset: 0x4c
	// Line 189, Address: 0x101f650, Func Offset: 0x60
	// Line 190, Address: 0x101f668, Func Offset: 0x78
	// Line 192, Address: 0x101f678, Func Offset: 0x88
	// Line 194, Address: 0x101f684, Func Offset: 0x94
	// Line 195, Address: 0x101f69c, Func Offset: 0xac
	// Line 196, Address: 0x101f6b0, Func Offset: 0xc0
	// Line 197, Address: 0x101f6c8, Func Offset: 0xd8
	// Func End, Address: 0x101f6dc, Func Offset: 0xec
}

// 
// Start address: 0x101f6e0
void chk(_anon1* actionwk, _anon1* pw)
{
	// Line 200, Address: 0x101f6e0, Func Offset: 0
	// Line 201, Address: 0x101f6f0, Func Offset: 0x10
	// Line 202, Address: 0x101f700, Func Offset: 0x20
	// Line 204, Address: 0x101f718, Func Offset: 0x38
	// Line 205, Address: 0x101f730, Func Offset: 0x50
	// Line 208, Address: 0x101f738, Func Offset: 0x58
	// Line 210, Address: 0x101f750, Func Offset: 0x70
	// Line 211, Address: 0x101f760, Func Offset: 0x80
	// Line 213, Address: 0x101f768, Func Offset: 0x88
	// Line 214, Address: 0x101f778, Func Offset: 0x98
	// Func End, Address: 0x101f788, Func Offset: 0xa8
}

// 
// Start address: 0x101f790
void yuka_ride_on(_anon1* actionwk, _anon1* pw)
{
	// Line 216, Address: 0x101f790, Func Offset: 0
	// Line 217, Address: 0x101f79c, Func Offset: 0xc
	// Line 219, Address: 0x101f7b4, Func Offset: 0x24
	// Line 220, Address: 0x101f7bc, Func Offset: 0x2c
	// Line 223, Address: 0x101f7c4, Func Offset: 0x34
	// Line 224, Address: 0x101f7d4, Func Offset: 0x44
	// Line 225, Address: 0x101f804, Func Offset: 0x74
	// Line 227, Address: 0x101f81c, Func Offset: 0x8c
	// Line 228, Address: 0x101f824, Func Offset: 0x94
	// Line 232, Address: 0x101f82c, Func Offset: 0x9c
	// Line 234, Address: 0x101f83c, Func Offset: 0xac
	// Func End, Address: 0x101f848, Func Offset: 0xb8
}

