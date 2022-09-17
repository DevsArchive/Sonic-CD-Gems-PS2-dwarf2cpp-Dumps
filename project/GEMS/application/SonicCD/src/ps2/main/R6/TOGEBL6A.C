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
typedef _anon0* type_4[1];
typedef _anon1 type_5[128];
typedef _anon0* type_6[1];

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

_anon0 spat_chg0;
_anon0 spat_chg1;
_anon0* pat_chg[1];
_anon0* pat_togeball[1];
_anon1 actwk[128];

void togeball(_anon1* actionwk);
void togeball_main(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_move(_anon1* actionwk);
void togeball_opt(_anon1* actionwk);
void act_init2(_anon1* actionwk);
void act_move2(_anon1* actionwk);

// 
// Start address: 0x102b070
void togeball(_anon1* actionwk)
{
	// Line 54, Address: 0x102b070, Func Offset: 0
	// Line 55, Address: 0x102b07c, Func Offset: 0xc
	// Line 56, Address: 0x102b094, Func Offset: 0x24
	// Line 58, Address: 0x102b0a8, Func Offset: 0x38
	// Line 59, Address: 0x102b0b4, Func Offset: 0x44
	// Func End, Address: 0x102b0c4, Func Offset: 0x54
}

// 
// Start address: 0x102b0d0
void togeball_main(_anon1* actionwk)
{
	// Line 61, Address: 0x102b0d0, Func Offset: 0
	// Line 62, Address: 0x102b0dc, Func Offset: 0xc
	// Line 65, Address: 0x102b104, Func Offset: 0x34
	// Line 66, Address: 0x102b110, Func Offset: 0x40
	// Line 68, Address: 0x102b118, Func Offset: 0x48
	// Line 71, Address: 0x102b124, Func Offset: 0x54
	// Line 72, Address: 0x102b130, Func Offset: 0x60
	// Line 73, Address: 0x102b13c, Func Offset: 0x6c
	// Func End, Address: 0x102b14c, Func Offset: 0x7c
}

// 
// Start address: 0x102b150
void act_init(_anon1* actionwk)
{
	_anon1* a1;
	// Line 75, Address: 0x102b150, Func Offset: 0
	// Line 78, Address: 0x102b15c, Func Offset: 0xc
	// Line 79, Address: 0x102b16c, Func Offset: 0x1c
	// Line 80, Address: 0x102b17c, Func Offset: 0x2c
	// Line 81, Address: 0x102b188, Func Offset: 0x38
	// Line 82, Address: 0x102b194, Func Offset: 0x44
	// Line 83, Address: 0x102b1a0, Func Offset: 0x50
	// Line 84, Address: 0x102b1b0, Func Offset: 0x60
	// Line 85, Address: 0x102b1bc, Func Offset: 0x6c
	// Line 86, Address: 0x102b1c8, Func Offset: 0x78
	// Line 87, Address: 0x102b1e0, Func Offset: 0x90
	// Line 90, Address: 0x102b204, Func Offset: 0xb4
	// Line 92, Address: 0x102b21c, Func Offset: 0xcc
	// Line 93, Address: 0x102b228, Func Offset: 0xd8
	// Line 95, Address: 0x102b230, Func Offset: 0xe0
	// Line 96, Address: 0x102b264, Func Offset: 0x114
	// Line 97, Address: 0x102b298, Func Offset: 0x148
	// Line 98, Address: 0x102b2a8, Func Offset: 0x158
	// Line 99, Address: 0x102b2b4, Func Offset: 0x164
	// Line 100, Address: 0x102b2c0, Func Offset: 0x170
	// Line 102, Address: 0x102b2cc, Func Offset: 0x17c
	// Line 104, Address: 0x102b2e4, Func Offset: 0x194
	// Line 105, Address: 0x102b2f0, Func Offset: 0x1a0
	// Line 107, Address: 0x102b2f8, Func Offset: 0x1a8
	// Line 108, Address: 0x102b32c, Func Offset: 0x1dc
	// Line 109, Address: 0x102b360, Func Offset: 0x210
	// Line 110, Address: 0x102b370, Func Offset: 0x220
	// Line 111, Address: 0x102b37c, Func Offset: 0x22c
	// Line 112, Address: 0x102b388, Func Offset: 0x238
	// Line 114, Address: 0x102b394, Func Offset: 0x244
	// Line 116, Address: 0x102b3ac, Func Offset: 0x25c
	// Line 117, Address: 0x102b3b8, Func Offset: 0x268
	// Line 119, Address: 0x102b3c0, Func Offset: 0x270
	// Line 120, Address: 0x102b3f4, Func Offset: 0x2a4
	// Line 121, Address: 0x102b428, Func Offset: 0x2d8
	// Line 122, Address: 0x102b438, Func Offset: 0x2e8
	// Line 123, Address: 0x102b444, Func Offset: 0x2f4
	// Line 124, Address: 0x102b450, Func Offset: 0x300
	// Line 126, Address: 0x102b45c, Func Offset: 0x30c
	// Line 128, Address: 0x102b474, Func Offset: 0x324
	// Line 129, Address: 0x102b480, Func Offset: 0x330
	// Line 131, Address: 0x102b488, Func Offset: 0x338
	// Line 132, Address: 0x102b4bc, Func Offset: 0x36c
	// Line 133, Address: 0x102b4f0, Func Offset: 0x3a0
	// Line 134, Address: 0x102b500, Func Offset: 0x3b0
	// Line 135, Address: 0x102b50c, Func Offset: 0x3bc
	// Line 136, Address: 0x102b518, Func Offset: 0x3c8
	// Line 138, Address: 0x102b524, Func Offset: 0x3d4
	// Line 140, Address: 0x102b53c, Func Offset: 0x3ec
	// Line 141, Address: 0x102b548, Func Offset: 0x3f8
	// Line 143, Address: 0x102b550, Func Offset: 0x400
	// Line 144, Address: 0x102b584, Func Offset: 0x434
	// Line 145, Address: 0x102b5b8, Func Offset: 0x468
	// Line 146, Address: 0x102b5c8, Func Offset: 0x478
	// Line 147, Address: 0x102b5d4, Func Offset: 0x484
	// Line 148, Address: 0x102b5e0, Func Offset: 0x490
	// Line 150, Address: 0x102b5ec, Func Offset: 0x49c
	// Line 152, Address: 0x102b604, Func Offset: 0x4b4
	// Line 153, Address: 0x102b610, Func Offset: 0x4c0
	// Line 155, Address: 0x102b618, Func Offset: 0x4c8
	// Line 156, Address: 0x102b64c, Func Offset: 0x4fc
	// Line 157, Address: 0x102b680, Func Offset: 0x530
	// Line 158, Address: 0x102b690, Func Offset: 0x540
	// Line 159, Address: 0x102b69c, Func Offset: 0x54c
	// Line 160, Address: 0x102b6a8, Func Offset: 0x558
	// Line 161, Address: 0x102b6b4, Func Offset: 0x564
	// Func End, Address: 0x102b6c4, Func Offset: 0x574
}

// 
// Start address: 0x102b6d0
void act_move(_anon1* actionwk)
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
	_anon1* a1;
	// Line 163, Address: 0x102b6d0, Func Offset: 0
	// Line 169, Address: 0x102b6fc, Func Offset: 0x2c
	// Line 170, Address: 0x102b70c, Func Offset: 0x3c
	// Line 171, Address: 0x102b71c, Func Offset: 0x4c
	// Line 172, Address: 0x102b72c, Func Offset: 0x5c
	// Line 174, Address: 0x102b738, Func Offset: 0x68
	// Line 175, Address: 0x102b74c, Func Offset: 0x7c
	// Line 176, Address: 0x102b754, Func Offset: 0x84
	// Line 177, Address: 0x102b760, Func Offset: 0x90
	// Line 178, Address: 0x102b76c, Func Offset: 0x9c
	// Line 179, Address: 0x102b770, Func Offset: 0xa0
	// Line 180, Address: 0x102b774, Func Offset: 0xa4
	// Line 181, Address: 0x102b778, Func Offset: 0xa8
	// Line 182, Address: 0x102b77c, Func Offset: 0xac
	// Line 183, Address: 0x102b780, Func Offset: 0xb0
	// Line 184, Address: 0x102b784, Func Offset: 0xb4
	// Line 185, Address: 0x102b788, Func Offset: 0xb8
	// Line 186, Address: 0x102b78c, Func Offset: 0xbc
	// Line 187, Address: 0x102b790, Func Offset: 0xc0
	// Line 188, Address: 0x102b794, Func Offset: 0xc4
	// Line 189, Address: 0x102b7b8, Func Offset: 0xe8
	// Line 190, Address: 0x102b7cc, Func Offset: 0xfc
	// Line 191, Address: 0x102b7e0, Func Offset: 0x110
	// Line 192, Address: 0x102b804, Func Offset: 0x134
	// Line 193, Address: 0x102b818, Func Offset: 0x148
	// Line 194, Address: 0x102b82c, Func Offset: 0x15c
	// Line 195, Address: 0x102b850, Func Offset: 0x180
	// Line 196, Address: 0x102b868, Func Offset: 0x198
	// Line 198, Address: 0x102b880, Func Offset: 0x1b0
	// Line 199, Address: 0x102b8a4, Func Offset: 0x1d4
	// Line 200, Address: 0x102b8b8, Func Offset: 0x1e8
	// Line 201, Address: 0x102b8cc, Func Offset: 0x1fc
	// Line 202, Address: 0x102b8f0, Func Offset: 0x220
	// Line 203, Address: 0x102b908, Func Offset: 0x238
	// Line 204, Address: 0x102b920, Func Offset: 0x250
	// Func End, Address: 0x102b950, Func Offset: 0x280
}

// 
// Start address: 0x102b950
void togeball_opt(_anon1* actionwk)
{
	_anon1* a1;
	// Line 206, Address: 0x102b950, Func Offset: 0
	// Line 209, Address: 0x102b960, Func Offset: 0x10
	// Line 212, Address: 0x102b988, Func Offset: 0x38
	// Line 214, Address: 0x102b994, Func Offset: 0x44
	// Line 217, Address: 0x102b9a0, Func Offset: 0x50
	// Line 218, Address: 0x102b9c4, Func Offset: 0x74
	// Line 220, Address: 0x102b9d8, Func Offset: 0x88
	// Line 221, Address: 0x102b9e4, Func Offset: 0x94
	// Line 223, Address: 0x102b9ec, Func Offset: 0x9c
	// Line 224, Address: 0x102b9f8, Func Offset: 0xa8
	// Func End, Address: 0x102ba0c, Func Offset: 0xbc
}

// 
// Start address: 0x102ba10
void act_init2(_anon1* actionwk)
{
	// Line 226, Address: 0x102ba10, Func Offset: 0
	// Line 227, Address: 0x102ba18, Func Offset: 0x8
	// Line 228, Address: 0x102ba28, Func Offset: 0x18
	// Line 229, Address: 0x102ba38, Func Offset: 0x28
	// Line 230, Address: 0x102ba44, Func Offset: 0x34
	// Line 231, Address: 0x102ba54, Func Offset: 0x44
	// Line 232, Address: 0x102ba60, Func Offset: 0x50
	// Line 233, Address: 0x102ba6c, Func Offset: 0x5c
	// Func End, Address: 0x102ba78, Func Offset: 0x68
}

// 
// Start address: 0x102ba80
void act_move2(_anon1* actionwk)
{
	// Line 235, Address: 0x102ba80, Func Offset: 0
	// Line 236, Address: 0x102ba88, Func Offset: 0x8
	// Line 237, Address: 0x102ba98, Func Offset: 0x18
	// Line 238, Address: 0x102baa8, Func Offset: 0x28
	// Func End, Address: 0x102bab4, Func Offset: 0x34
}

