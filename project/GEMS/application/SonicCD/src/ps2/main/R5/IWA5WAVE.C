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
typedef _anon1 type_4[128];
typedef _anon0* type_5[1];

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
_anon0* pat_iwa5wave[1];
_anon1 actwk[128];

void iwa5wave(_anon1* pActwk);
void a_init(_anon1* pActwk);
void a_move(_anon1* pActwk);
void com(_anon1* pActwk);

// 
// Start address: 0x1021060
void iwa5wave(_anon1* pActwk)
{
	// Line 60, Address: 0x1021060, Func Offset: 0
	// Line 61, Address: 0x102106c, Func Offset: 0xc
	// Line 62, Address: 0x1021090, Func Offset: 0x30
	// Line 63, Address: 0x102109c, Func Offset: 0x3c
	// Func End, Address: 0x10210ac, Func Offset: 0x4c
}

// 
// Start address: 0x10210b0
void a_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	_anon2 ld0;
	short d3;
	short d4;
	short d5;
	short d6;
	// Line 68, Address: 0x10210b0, Func Offset: 0
	// Line 73, Address: 0x10210cc, Func Offset: 0x1c
	// Line 74, Address: 0x10210dc, Func Offset: 0x2c
	// Line 75, Address: 0x10210e8, Func Offset: 0x38
	// Line 76, Address: 0x10210ec, Func Offset: 0x3c
	// Line 77, Address: 0x10210fc, Func Offset: 0x4c
	// Line 78, Address: 0x102110c, Func Offset: 0x5c
	// Line 79, Address: 0x102111c, Func Offset: 0x6c
	// Line 81, Address: 0x102112c, Func Offset: 0x7c
	// Line 82, Address: 0x1021138, Func Offset: 0x88
	// Line 83, Address: 0x1021148, Func Offset: 0x98
	// Line 84, Address: 0x1021154, Func Offset: 0xa4
	// Line 85, Address: 0x1021160, Func Offset: 0xb0
	// Line 86, Address: 0x102116c, Func Offset: 0xbc
	// Line 88, Address: 0x102117c, Func Offset: 0xcc
	// Line 90, Address: 0x1021180, Func Offset: 0xd0
	// Line 92, Address: 0x1021188, Func Offset: 0xd8
	// Line 93, Address: 0x1021198, Func Offset: 0xe8
	// Line 94, Address: 0x10211a4, Func Offset: 0xf4
	// Line 95, Address: 0x10211b0, Func Offset: 0x100
	// Line 96, Address: 0x10211bc, Func Offset: 0x10c
	// Line 97, Address: 0x10211c8, Func Offset: 0x118
	// Line 98, Address: 0x10211d4, Func Offset: 0x124
	// Line 99, Address: 0x10211e0, Func Offset: 0x130
	// Line 100, Address: 0x10211f0, Func Offset: 0x140
	// Line 104, Address: 0x1021200, Func Offset: 0x150
	// Line 106, Address: 0x1021214, Func Offset: 0x164
	// Line 108, Address: 0x1021228, Func Offset: 0x178
	// Line 109, Address: 0x1021264, Func Offset: 0x1b4
	// Line 110, Address: 0x1021274, Func Offset: 0x1c4
	// Line 111, Address: 0x102128c, Func Offset: 0x1dc
	// Line 112, Address: 0x10212a4, Func Offset: 0x1f4
	// Line 114, Address: 0x10212b4, Func Offset: 0x204
	// Line 115, Address: 0x10212c4, Func Offset: 0x214
	// Line 116, Address: 0x10212d0, Func Offset: 0x220
	// Line 117, Address: 0x10212dc, Func Offset: 0x22c
	// Line 118, Address: 0x10212e8, Func Offset: 0x238
	// Line 119, Address: 0x10212f4, Func Offset: 0x244
	// Line 120, Address: 0x1021300, Func Offset: 0x250
	// Line 121, Address: 0x102130c, Func Offset: 0x25c
	// Line 122, Address: 0x102131c, Func Offset: 0x26c
	// Line 124, Address: 0x102132c, Func Offset: 0x27c
	// Line 125, Address: 0x1021334, Func Offset: 0x284
	// Line 126, Address: 0x1021340, Func Offset: 0x290
	// Line 127, Address: 0x1021348, Func Offset: 0x298
	// Line 129, Address: 0x1021360, Func Offset: 0x2b0
	// Func End, Address: 0x1021380, Func Offset: 0x2d0
}

// 
// Start address: 0x1021380
void a_move(_anon1* pActwk)
{
	_anon1* pMainwk;
	_anon2 ld0;
	_anon2 ld1;
	int d0;
	int d1;
	short sd0;
	short sd1;
	unsigned char kakudo;
	// Line 134, Address: 0x1021380, Func Offset: 0
	// Line 141, Address: 0x102139c, Func Offset: 0x1c
	// Line 142, Address: 0x10213a4, Func Offset: 0x24
	// Line 143, Address: 0x10213a8, Func Offset: 0x28
	// Line 144, Address: 0x10213ac, Func Offset: 0x2c
	// Line 146, Address: 0x10213c4, Func Offset: 0x44
	// Line 147, Address: 0x10213d0, Func Offset: 0x50
	// Line 149, Address: 0x10213d4, Func Offset: 0x54
	// Line 150, Address: 0x10213dc, Func Offset: 0x5c
	// Line 151, Address: 0x10213e0, Func Offset: 0x60
	// Line 152, Address: 0x10213e4, Func Offset: 0x64
	// Line 155, Address: 0x1021400, Func Offset: 0x80
	// Line 156, Address: 0x1021410, Func Offset: 0x90
	// Line 157, Address: 0x102141c, Func Offset: 0x9c
	// Line 158, Address: 0x1021428, Func Offset: 0xa8
	// Line 159, Address: 0x1021444, Func Offset: 0xc4
	// Line 160, Address: 0x1021458, Func Offset: 0xd8
	// Line 161, Address: 0x102145c, Func Offset: 0xdc
	// Line 162, Address: 0x1021464, Func Offset: 0xe4
	// Line 163, Address: 0x1021470, Func Offset: 0xf0
	// Line 164, Address: 0x1021478, Func Offset: 0xf8
	// Line 165, Address: 0x1021484, Func Offset: 0x104
	// Line 166, Address: 0x1021494, Func Offset: 0x114
	// Line 167, Address: 0x10214a4, Func Offset: 0x124
	// Line 168, Address: 0x10214ac, Func Offset: 0x12c
	// Line 169, Address: 0x10214b4, Func Offset: 0x134
	// Line 170, Address: 0x10214bc, Func Offset: 0x13c
	// Line 171, Address: 0x10214d0, Func Offset: 0x150
	// Line 172, Address: 0x10214dc, Func Offset: 0x15c
	// Line 174, Address: 0x10214ec, Func Offset: 0x16c
	// Line 175, Address: 0x1021514, Func Offset: 0x194
	// Line 177, Address: 0x1021528, Func Offset: 0x1a8
	// Line 178, Address: 0x1021534, Func Offset: 0x1b4
	// Line 182, Address: 0x102153c, Func Offset: 0x1bc
	// Line 183, Address: 0x1021548, Func Offset: 0x1c8
	// Line 188, Address: 0x1021550, Func Offset: 0x1d0
	// Line 189, Address: 0x102155c, Func Offset: 0x1dc
	// Line 191, Address: 0x1021570, Func Offset: 0x1f0
	// Func End, Address: 0x1021590, Func Offset: 0x210
}

// 
// Start address: 0x1021590
void com(_anon1* pActwk)
{
	unsigned char d0;
	// Line 193, Address: 0x1021590, Func Offset: 0
	// Line 196, Address: 0x10215a0, Func Offset: 0x10
	// Line 197, Address: 0x10215b0, Func Offset: 0x20
	// Line 198, Address: 0x10215b8, Func Offset: 0x28
	// Line 199, Address: 0x10215c4, Func Offset: 0x34
	// Line 200, Address: 0x10215f0, Func Offset: 0x60
	// Line 201, Address: 0x10215f4, Func Offset: 0x64
	// Line 202, Address: 0x1021604, Func Offset: 0x74
	// Line 203, Address: 0x1021610, Func Offset: 0x80
	// Line 205, Address: 0x1021618, Func Offset: 0x88
	// Line 208, Address: 0x102162c, Func Offset: 0x9c
	// Line 209, Address: 0x1021638, Func Offset: 0xa8
	// Func End, Address: 0x102164c, Func Offset: 0xbc
}

