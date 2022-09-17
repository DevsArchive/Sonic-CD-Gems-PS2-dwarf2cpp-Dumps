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
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef _anon0* type_4[0];
typedef _anon1 type_5[128];
typedef unsigned char type_6[12];

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

unsigned char wall7_tbl0[12];
_anon1 actwk[128];
_anon0* pat_wall7[0];
unsigned char bossflag;

void wall73(_anon1* pActwk);
short move_blk(_anon1* pActwk);

// 
// Start address: 0x1022400
void wall73(_anon1* pActwk)
{
	// Line 66, Address: 0x1022400, Func Offset: 0
	// Line 67, Address: 0x102240c, Func Offset: 0xc
	// Line 69, Address: 0x102241c, Func Offset: 0x1c
	// Line 70, Address: 0x102242c, Func Offset: 0x2c
	// Line 71, Address: 0x102243c, Func Offset: 0x3c
	// Line 72, Address: 0x1022448, Func Offset: 0x48
	// Line 73, Address: 0x1022454, Func Offset: 0x54
	// Line 74, Address: 0x1022464, Func Offset: 0x64
	// Line 76, Address: 0x1022474, Func Offset: 0x74
	// Line 77, Address: 0x10224a0, Func Offset: 0xa0
	// Line 78, Address: 0x10224cc, Func Offset: 0xcc
	// Line 81, Address: 0x10224fc, Func Offset: 0xfc
	// Line 82, Address: 0x102250c, Func Offset: 0x10c
	// Line 84, Address: 0x1022520, Func Offset: 0x120
	// Line 85, Address: 0x102253c, Func Offset: 0x13c
	// Line 86, Address: 0x1022544, Func Offset: 0x144
	// Line 87, Address: 0x1022550, Func Offset: 0x150
	// Line 88, Address: 0x102255c, Func Offset: 0x15c
	// Func End, Address: 0x102256c, Func Offset: 0x16c
}

// 
// Start address: 0x1022570
short move_blk(_anon1* pActwk)
{
	short wD0;
	short wD1;
	char bD0;
	// Line 97, Address: 0x1022570, Func Offset: 0
	// Line 101, Address: 0x1022588, Func Offset: 0x18
	// Line 102, Address: 0x10225a0, Func Offset: 0x30
	// Line 103, Address: 0x10225ac, Func Offset: 0x3c
	// Line 105, Address: 0x10225bc, Func Offset: 0x4c
	// Line 106, Address: 0x10225c8, Func Offset: 0x58
	// Line 107, Address: 0x10225d4, Func Offset: 0x64
	// Line 108, Address: 0x10225f0, Func Offset: 0x80
	// Line 109, Address: 0x10225fc, Func Offset: 0x8c
	// Line 112, Address: 0x1022608, Func Offset: 0x98
	// Line 113, Address: 0x1022610, Func Offset: 0xa0
	// Line 116, Address: 0x102263c, Func Offset: 0xcc
	// Line 118, Address: 0x1022660, Func Offset: 0xf0
	// Line 119, Address: 0x1022688, Func Offset: 0x118
	// Line 121, Address: 0x1022694, Func Offset: 0x124
	// Line 124, Address: 0x102269c, Func Offset: 0x12c
	// Line 125, Address: 0x10226c4, Func Offset: 0x154
	// Line 127, Address: 0x10226cc, Func Offset: 0x15c
	// Line 128, Address: 0x10226e0, Func Offset: 0x170
	// Line 130, Address: 0x10226fc, Func Offset: 0x18c
	// Line 131, Address: 0x1022704, Func Offset: 0x194
	// Line 135, Address: 0x1022710, Func Offset: 0x1a0
	// Line 136, Address: 0x102271c, Func Offset: 0x1ac
	// Line 141, Address: 0x1022728, Func Offset: 0x1b8
	// Line 142, Address: 0x102273c, Func Offset: 0x1cc
	// Line 143, Address: 0x102274c, Func Offset: 0x1dc
	// Line 144, Address: 0x1022768, Func Offset: 0x1f8
	// Line 145, Address: 0x1022774, Func Offset: 0x204
	// Line 147, Address: 0x1022790, Func Offset: 0x220
	// Line 148, Address: 0x10227b4, Func Offset: 0x244
	// Line 150, Address: 0x10227c0, Func Offset: 0x250
	// Line 151, Address: 0x10227d0, Func Offset: 0x260
	// Line 154, Address: 0x10227d8, Func Offset: 0x268
	// Line 155, Address: 0x10227fc, Func Offset: 0x28c
	// Line 157, Address: 0x1022804, Func Offset: 0x294
	// Line 160, Address: 0x1022814, Func Offset: 0x2a4
	// Line 161, Address: 0x102283c, Func Offset: 0x2cc
	// Line 162, Address: 0x1022864, Func Offset: 0x2f4
	// Line 164, Address: 0x1022890, Func Offset: 0x320
	// Line 166, Address: 0x1022894, Func Offset: 0x324
	// Func End, Address: 0x10228b0, Func Offset: 0x340
}

