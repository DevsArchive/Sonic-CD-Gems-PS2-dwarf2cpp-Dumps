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
typedef _anon0* type_2[2];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon1 type_5[128];
typedef void(*type_7)(_anon1*)[3];

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

_anon0 pat0;
_anon0 pat1;
_anon0* gaitou73_pat[2];
void(*gaitou_act_tbl)(_anon1*)[3];
_anon1 actwk[128];
_anon2 scra_v_posit;
_anon2 scra_h_posit;

void gaitou73(_anon1* pActwk);
void gaitou73_ini(_anon1* pActwk);
void gaitou73_01(_anon1* pActwk);
short get_x();
void gaitou73_02(_anon1* pActwk);

// 
// Start address: 0x1021f60
void gaitou73(_anon1* pActwk)
{
	// Line 94, Address: 0x1021f60, Func Offset: 0
	// Line 95, Address: 0x1021f6c, Func Offset: 0xc
	// Line 96, Address: 0x1021fb0, Func Offset: 0x50
	// Line 97, Address: 0x1021fbc, Func Offset: 0x5c
	// Func End, Address: 0x1021fcc, Func Offset: 0x6c
}

// 
// Start address: 0x1021fd0
void gaitou73_ini(_anon1* pActwk)
{
	_anon1* pNewact;
	// Line 103, Address: 0x1021fd0, Func Offset: 0
	// Line 106, Address: 0x1021fdc, Func Offset: 0xc
	// Line 107, Address: 0x1021fe8, Func Offset: 0x18
	// Line 108, Address: 0x1021ff0, Func Offset: 0x20
	// Line 109, Address: 0x1021ffc, Func Offset: 0x2c
	// Line 111, Address: 0x102200c, Func Offset: 0x3c
	// Line 112, Address: 0x102201c, Func Offset: 0x4c
	// Line 113, Address: 0x1022034, Func Offset: 0x64
	// Line 114, Address: 0x1022040, Func Offset: 0x70
	// Line 115, Address: 0x102204c, Func Offset: 0x7c
	// Line 116, Address: 0x1022084, Func Offset: 0xb4
	// Line 120, Address: 0x10220bc, Func Offset: 0xec
	// Line 121, Address: 0x10220c8, Func Offset: 0xf8
	// Line 122, Address: 0x10220d4, Func Offset: 0x104
	// Line 123, Address: 0x10220e0, Func Offset: 0x110
	// Line 125, Address: 0x10220e8, Func Offset: 0x118
	// Line 126, Address: 0x10220f4, Func Offset: 0x124
	// Line 127, Address: 0x1022100, Func Offset: 0x130
	// Line 128, Address: 0x102210c, Func Offset: 0x13c
	// Line 130, Address: 0x1022118, Func Offset: 0x148
	// Func End, Address: 0x1022128, Func Offset: 0x158
}

// 
// Start address: 0x1022130
void gaitou73_01(_anon1* pActwk)
{
	// Line 136, Address: 0x1022130, Func Offset: 0
	// Line 137, Address: 0x102213c, Func Offset: 0xc
	// Line 138, Address: 0x1022150, Func Offset: 0x20
	// Line 141, Address: 0x1022194, Func Offset: 0x64
	// Line 143, Address: 0x10221c4, Func Offset: 0x94
	// Line 144, Address: 0x10221d4, Func Offset: 0xa4
	// Line 145, Address: 0x10221e4, Func Offset: 0xb4
	// Line 146, Address: 0x10221ec, Func Offset: 0xbc
	// Line 147, Address: 0x10221f8, Func Offset: 0xc8
	// Line 148, Address: 0x1022204, Func Offset: 0xd4
	// Line 150, Address: 0x102220c, Func Offset: 0xdc
	// Line 151, Address: 0x102221c, Func Offset: 0xec
	// Line 152, Address: 0x102222c, Func Offset: 0xfc
	// Line 154, Address: 0x102223c, Func Offset: 0x10c
	// Line 155, Address: 0x1022248, Func Offset: 0x118
	// Line 156, Address: 0x1022254, Func Offset: 0x124
	// Line 158, Address: 0x1022260, Func Offset: 0x130
	// Func End, Address: 0x1022270, Func Offset: 0x140
}

// 
// Start address: 0x1022270
short get_x()
{
	short wk1;
	short wk2;
	// Line 161, Address: 0x1022270, Func Offset: 0
	// Line 164, Address: 0x102227c, Func Offset: 0xc
	// Line 165, Address: 0x10222b4, Func Offset: 0x44
	// Line 167, Address: 0x10222e0, Func Offset: 0x70
	// Line 168, Address: 0x10222f4, Func Offset: 0x84
	// Line 171, Address: 0x10222f8, Func Offset: 0x88
	// Line 172, Address: 0x1022324, Func Offset: 0xb4
	// Line 174, Address: 0x1022358, Func Offset: 0xe8
	// Line 175, Address: 0x1022374, Func Offset: 0x104
	// Func End, Address: 0x1022388, Func Offset: 0x118
}

// 
// Start address: 0x1022390
void gaitou73_02(_anon1* pActwk)
{
	_anon1* pBptr;
	// Line 181, Address: 0x1022390, Func Offset: 0
	// Line 184, Address: 0x102239c, Func Offset: 0xc
	// Line 185, Address: 0x10223c4, Func Offset: 0x34
	// Line 186, Address: 0x10223d0, Func Offset: 0x40
	// Line 187, Address: 0x10223dc, Func Offset: 0x4c
	// Line 188, Address: 0x10223ec, Func Offset: 0x5c
	// Func End, Address: 0x10223fc, Func Offset: 0x6c
}

