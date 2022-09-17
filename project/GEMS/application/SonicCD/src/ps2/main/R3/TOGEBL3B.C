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
typedef _anon1* type_2[1];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
typedef _anon0 type_5[128];
typedef _anon1* type_6[1];

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

_anon1 spat_chg0;
_anon1 spat_chg1;
_anon1* pat_chg[1];
_anon1* togeball_pat[1];
_anon0 actwk[128];

void togeball(_anon0* actionwk);
void togeball_main(_anon0* actionwk);
void act_init(_anon0* actionwk);
void act_move(_anon0* actionwk);
void togeball_opt(_anon0* actionwk);
void act_init2(_anon0* actionwk);
void act_move2(_anon0* actionwk);

// 
// Start address: 0x102bcc0
void togeball(_anon0* actionwk)
{
	// Line 51, Address: 0x102bcc0, Func Offset: 0
	// Line 52, Address: 0x102bccc, Func Offset: 0xc
	// Line 53, Address: 0x102bce4, Func Offset: 0x24
	// Line 55, Address: 0x102bcf8, Func Offset: 0x38
	// Line 56, Address: 0x102bd04, Func Offset: 0x44
	// Func End, Address: 0x102bd14, Func Offset: 0x54
}

// 
// Start address: 0x102bd20
void togeball_main(_anon0* actionwk)
{
	// Line 58, Address: 0x102bd20, Func Offset: 0
	// Line 59, Address: 0x102bd2c, Func Offset: 0xc
	// Line 62, Address: 0x102bd54, Func Offset: 0x34
	// Line 63, Address: 0x102bd60, Func Offset: 0x40
	// Line 65, Address: 0x102bd68, Func Offset: 0x48
	// Line 68, Address: 0x102bd74, Func Offset: 0x54
	// Line 69, Address: 0x102bd80, Func Offset: 0x60
	// Line 70, Address: 0x102bd8c, Func Offset: 0x6c
	// Func End, Address: 0x102bd9c, Func Offset: 0x7c
}

// 
// Start address: 0x102bda0
void act_init(_anon0* actionwk)
{
	_anon0* a1;
	// Line 72, Address: 0x102bda0, Func Offset: 0
	// Line 75, Address: 0x102bdac, Func Offset: 0xc
	// Line 76, Address: 0x102bdbc, Func Offset: 0x1c
	// Line 77, Address: 0x102bdcc, Func Offset: 0x2c
	// Line 78, Address: 0x102bdd8, Func Offset: 0x38
	// Line 79, Address: 0x102bde4, Func Offset: 0x44
	// Line 80, Address: 0x102bdf0, Func Offset: 0x50
	// Line 81, Address: 0x102be00, Func Offset: 0x60
	// Line 82, Address: 0x102be0c, Func Offset: 0x6c
	// Line 83, Address: 0x102be18, Func Offset: 0x78
	// Line 84, Address: 0x102be30, Func Offset: 0x90
	// Line 87, Address: 0x102be54, Func Offset: 0xb4
	// Line 89, Address: 0x102be6c, Func Offset: 0xcc
	// Line 90, Address: 0x102be78, Func Offset: 0xd8
	// Line 92, Address: 0x102be80, Func Offset: 0xe0
	// Line 93, Address: 0x102beb4, Func Offset: 0x114
	// Line 94, Address: 0x102bee8, Func Offset: 0x148
	// Line 95, Address: 0x102bef8, Func Offset: 0x158
	// Line 96, Address: 0x102bf04, Func Offset: 0x164
	// Line 97, Address: 0x102bf10, Func Offset: 0x170
	// Line 99, Address: 0x102bf1c, Func Offset: 0x17c
	// Line 101, Address: 0x102bf34, Func Offset: 0x194
	// Line 102, Address: 0x102bf40, Func Offset: 0x1a0
	// Line 104, Address: 0x102bf48, Func Offset: 0x1a8
	// Line 105, Address: 0x102bf7c, Func Offset: 0x1dc
	// Line 106, Address: 0x102bfb0, Func Offset: 0x210
	// Line 107, Address: 0x102bfc0, Func Offset: 0x220
	// Line 108, Address: 0x102bfcc, Func Offset: 0x22c
	// Line 109, Address: 0x102bfd8, Func Offset: 0x238
	// Line 111, Address: 0x102bfe4, Func Offset: 0x244
	// Func End, Address: 0x102bff4, Func Offset: 0x254
}

// 
// Start address: 0x102c000
void act_move(_anon0* actionwk)
{
	short d0;
	unsigned short sin;
	unsigned short cos;
	int d0l;
	int d1l;
	int d2l;
	int d3l;
	int d4l;
	int d5l;
	_anon0* a1;
	// Line 113, Address: 0x102c000, Func Offset: 0
	// Line 119, Address: 0x102c02c, Func Offset: 0x2c
	// Line 120, Address: 0x102c03c, Func Offset: 0x3c
	// Line 121, Address: 0x102c04c, Func Offset: 0x4c
	// Line 122, Address: 0x102c05c, Func Offset: 0x5c
	// Line 124, Address: 0x102c068, Func Offset: 0x68
	// Line 125, Address: 0x102c07c, Func Offset: 0x7c
	// Line 126, Address: 0x102c084, Func Offset: 0x84
	// Line 127, Address: 0x102c090, Func Offset: 0x90
	// Line 128, Address: 0x102c09c, Func Offset: 0x9c
	// Line 129, Address: 0x102c0a0, Func Offset: 0xa0
	// Line 130, Address: 0x102c0a4, Func Offset: 0xa4
	// Line 131, Address: 0x102c0a8, Func Offset: 0xa8
	// Line 132, Address: 0x102c0ac, Func Offset: 0xac
	// Line 133, Address: 0x102c0b0, Func Offset: 0xb0
	// Line 134, Address: 0x102c0b4, Func Offset: 0xb4
	// Line 135, Address: 0x102c0b8, Func Offset: 0xb8
	// Line 136, Address: 0x102c0bc, Func Offset: 0xbc
	// Line 137, Address: 0x102c0c0, Func Offset: 0xc0
	// Line 138, Address: 0x102c0c4, Func Offset: 0xc4
	// Line 139, Address: 0x102c0e8, Func Offset: 0xe8
	// Line 140, Address: 0x102c0fc, Func Offset: 0xfc
	// Line 141, Address: 0x102c110, Func Offset: 0x110
	// Line 142, Address: 0x102c134, Func Offset: 0x134
	// Line 143, Address: 0x102c148, Func Offset: 0x148
	// Line 144, Address: 0x102c15c, Func Offset: 0x15c
	// Func End, Address: 0x102c18c, Func Offset: 0x18c
}

// 
// Start address: 0x102c190
void togeball_opt(_anon0* actionwk)
{
	_anon0* a1;
	// Line 146, Address: 0x102c190, Func Offset: 0
	// Line 149, Address: 0x102c1a0, Func Offset: 0x10
	// Line 152, Address: 0x102c1c8, Func Offset: 0x38
	// Line 154, Address: 0x102c1d4, Func Offset: 0x44
	// Line 157, Address: 0x102c1e0, Func Offset: 0x50
	// Line 158, Address: 0x102c204, Func Offset: 0x74
	// Line 160, Address: 0x102c218, Func Offset: 0x88
	// Line 161, Address: 0x102c224, Func Offset: 0x94
	// Line 163, Address: 0x102c22c, Func Offset: 0x9c
	// Line 164, Address: 0x102c238, Func Offset: 0xa8
	// Func End, Address: 0x102c24c, Func Offset: 0xbc
}

// 
// Start address: 0x102c250
void act_init2(_anon0* actionwk)
{
	// Line 166, Address: 0x102c250, Func Offset: 0
	// Line 167, Address: 0x102c258, Func Offset: 0x8
	// Line 168, Address: 0x102c268, Func Offset: 0x18
	// Line 169, Address: 0x102c278, Func Offset: 0x28
	// Line 170, Address: 0x102c284, Func Offset: 0x34
	// Line 171, Address: 0x102c294, Func Offset: 0x44
	// Line 172, Address: 0x102c2a0, Func Offset: 0x50
	// Line 173, Address: 0x102c2ac, Func Offset: 0x5c
	// Func End, Address: 0x102c2b8, Func Offset: 0x68
}

// 
// Start address: 0x102c2c0
void act_move2(_anon0* actionwk)
{
	// Line 175, Address: 0x102c2c0, Func Offset: 0
	// Line 176, Address: 0x102c2c8, Func Offset: 0x8
	// Line 177, Address: 0x102c2d8, Func Offset: 0x18
	// Line 178, Address: 0x102c2e8, Func Offset: 0x28
	// Func End, Address: 0x102c2f4, Func Offset: 0x34
}

