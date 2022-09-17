typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_4)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef void(*type_5)(_anon1*)[2];
typedef _anon1 type_6[128];
typedef _anon0* type_7[3];

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
_anon0 pat2;
_anon0* brunko4pat[3];
_anon2 scra_h_posit;
_anon1 actwk[128];

void brunko4(_anon1* pActwk);
void brunko4_ridechk(_anon1* pActwk);
void brunko_init(_anon1* pActwk);
void brunko_move(_anon1* pActwk);
void brunko4_posiset(_anon1* pActwk);

// 
// Start address: 0x1022080
void brunko4(_anon1* pActwk)
{
	short wD0;
	short wD1;
	void(*tbl)(_anon1*)[2];
	// Line 98, Address: 0x1022080, Func Offset: 0
	// Line 106, Address: 0x1022094, Func Offset: 0x14
	// Line 107, Address: 0x10220d8, Func Offset: 0x58
	// Line 110, Address: 0x10220e4, Func Offset: 0x64
	// Line 111, Address: 0x102210c, Func Offset: 0x8c
	// Line 112, Address: 0x1022138, Func Offset: 0xb8
	// Line 113, Address: 0x1022144, Func Offset: 0xc4
	// Line 114, Address: 0x1022158, Func Offset: 0xd8
	// Line 115, Address: 0x1022164, Func Offset: 0xe4
	// Func End, Address: 0x102217c, Func Offset: 0xfc
}

// 
// Start address: 0x1022180
void brunko4_ridechk(_anon1* pActwk)
{
	// Line 119, Address: 0x1022180, Func Offset: 0
	// Line 120, Address: 0x102218c, Func Offset: 0xc
	// Line 123, Address: 0x10221a8, Func Offset: 0x28
	// Line 125, Address: 0x10221fc, Func Offset: 0x7c
	// Func End, Address: 0x102220c, Func Offset: 0x8c
}

// 
// Start address: 0x1022210
void brunko_init(_anon1* pActwk)
{
	_anon1* subActwk;
	unsigned char id;
	int i;
	// Line 130, Address: 0x1022210, Func Offset: 0
	// Line 135, Address: 0x1022224, Func Offset: 0x14
	// Line 136, Address: 0x1022234, Func Offset: 0x24
	// Line 137, Address: 0x1022244, Func Offset: 0x34
	// Line 138, Address: 0x1022250, Func Offset: 0x40
	// Line 139, Address: 0x1022260, Func Offset: 0x50
	// Line 140, Address: 0x102226c, Func Offset: 0x5c
	// Line 141, Address: 0x1022284, Func Offset: 0x74
	// Line 143, Address: 0x1022294, Func Offset: 0x84
	// Line 144, Address: 0x10222a0, Func Offset: 0x90
	// Line 145, Address: 0x10222ac, Func Offset: 0x9c
	// Line 147, Address: 0x10222b8, Func Offset: 0xa8
	// Line 149, Address: 0x10222d0, Func Offset: 0xc0
	// Line 151, Address: 0x10222e8, Func Offset: 0xd8
	// Line 152, Address: 0x10222f4, Func Offset: 0xe4
	// Line 153, Address: 0x1022334, Func Offset: 0x124
	// Line 154, Address: 0x1022340, Func Offset: 0x130
	// Line 155, Address: 0x102234c, Func Offset: 0x13c
	// Line 159, Address: 0x1022374, Func Offset: 0x164
	// Line 161, Address: 0x1022384, Func Offset: 0x174
	// Line 162, Address: 0x1022394, Func Offset: 0x184
	// Line 164, Address: 0x10223a4, Func Offset: 0x194
	// Line 165, Address: 0x10223ac, Func Offset: 0x19c
	// Line 167, Address: 0x10223b8, Func Offset: 0x1a8
	// Line 169, Address: 0x10223cc, Func Offset: 0x1bc
	// Line 170, Address: 0x10223d8, Func Offset: 0x1c8
	// Line 171, Address: 0x10223e8, Func Offset: 0x1d8
	// Line 172, Address: 0x10223f8, Func Offset: 0x1e8
	// Line 173, Address: 0x1022408, Func Offset: 0x1f8
	// Line 174, Address: 0x1022410, Func Offset: 0x200
	// Line 175, Address: 0x102241c, Func Offset: 0x20c
	// Line 176, Address: 0x102242c, Func Offset: 0x21c
	// Line 179, Address: 0x1022438, Func Offset: 0x228
	// Line 180, Address: 0x1022440, Func Offset: 0x230
	// Line 182, Address: 0x1022450, Func Offset: 0x240
	// Line 183, Address: 0x102245c, Func Offset: 0x24c
	// Func End, Address: 0x1022474, Func Offset: 0x264
}

// 
// Start address: 0x1022480
void brunko_move(_anon1* pActwk)
{
	_anon2 xposi_bak;
	_anon2 yposi_bak;
	int xposi_f;
	int yposi_f;
	int i;
	// Line 187, Address: 0x1022480, Func Offset: 0
	// Line 192, Address: 0x1022498, Func Offset: 0x18
	// Line 193, Address: 0x10224a4, Func Offset: 0x24
	// Line 194, Address: 0x10224b0, Func Offset: 0x30
	// Line 195, Address: 0x10224bc, Func Offset: 0x3c
	// Line 197, Address: 0x10224d4, Func Offset: 0x54
	// Line 198, Address: 0x10224e8, Func Offset: 0x68
	// Line 199, Address: 0x10224fc, Func Offset: 0x7c
	// Line 200, Address: 0x1022508, Func Offset: 0x88
	// Line 201, Address: 0x1022514, Func Offset: 0x94
	// Line 202, Address: 0x1022520, Func Offset: 0xa0
	// Line 203, Address: 0x1022540, Func Offset: 0xc0
	// Line 204, Address: 0x102254c, Func Offset: 0xcc
	// Line 205, Address: 0x102256c, Func Offset: 0xec
	// Line 206, Address: 0x1022578, Func Offset: 0xf8
	// Line 207, Address: 0x1022584, Func Offset: 0x104
	// Line 209, Address: 0x1022590, Func Offset: 0x110
	// Func End, Address: 0x10225ac, Func Offset: 0x12c
}

// 
// Start address: 0x10225b0
void brunko4_posiset(_anon1* pActwk)
{
	_anon5 temp;
	unsigned short sin;
	unsigned short cos;
	unsigned short sinf;
	unsigned short cosf;
	unsigned short wD3;
	unsigned short wD4;
	unsigned char bD0;
	int i;
	// Line 213, Address: 0x10225b0, Func Offset: 0
	// Line 219, Address: 0x10225d4, Func Offset: 0x24
	// Line 220, Address: 0x10225e0, Func Offset: 0x30
	// Line 221, Address: 0x10225ec, Func Offset: 0x3c
	// Line 222, Address: 0x1022608, Func Offset: 0x58
	// Line 224, Address: 0x102261c, Func Offset: 0x6c
	// Line 225, Address: 0x1022628, Func Offset: 0x78
	// Line 226, Address: 0x1022634, Func Offset: 0x84
	// Line 230, Address: 0x1022640, Func Offset: 0x90
	// Line 231, Address: 0x1022658, Func Offset: 0xa8
	// Line 232, Address: 0x1022664, Func Offset: 0xb4
	// Line 233, Address: 0x1022670, Func Offset: 0xc0
	// Line 237, Address: 0x1022678, Func Offset: 0xc8
	// Line 238, Address: 0x1022684, Func Offset: 0xd4
	// Line 239, Address: 0x1022690, Func Offset: 0xe0
	// Line 242, Address: 0x10226a8, Func Offset: 0xf8
	// Line 243, Address: 0x10226b8, Func Offset: 0x108
	// Line 244, Address: 0x10226c8, Func Offset: 0x118
	// Line 245, Address: 0x10226d4, Func Offset: 0x124
	// Line 246, Address: 0x10226f8, Func Offset: 0x148
	// Line 247, Address: 0x1022704, Func Offset: 0x154
	// Line 248, Address: 0x1022728, Func Offset: 0x178
	// Line 249, Address: 0x1022738, Func Offset: 0x188
	// Line 250, Address: 0x1022748, Func Offset: 0x198
	// Line 251, Address: 0x1022750, Func Offset: 0x1a0
	// Line 252, Address: 0x1022758, Func Offset: 0x1a8
	// Func End, Address: 0x1022780, Func Offset: 0x1d0
}

