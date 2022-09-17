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
typedef _anon0* type_2[1];
typedef unsigned char type_3[2];
typedef unsigned char type_4[22];
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
// Start address: 0x10273b0
void togeball(_anon1* actionwk)
{
	// Line 55, Address: 0x10273b0, Func Offset: 0
	// Line 56, Address: 0x10273bc, Func Offset: 0xc
	// Line 57, Address: 0x10273d4, Func Offset: 0x24
	// Line 59, Address: 0x10273e8, Func Offset: 0x38
	// Line 60, Address: 0x10273f4, Func Offset: 0x44
	// Func End, Address: 0x1027404, Func Offset: 0x54
}

// 
// Start address: 0x1027410
void togeball_main(_anon1* actionwk)
{
	// Line 62, Address: 0x1027410, Func Offset: 0
	// Line 63, Address: 0x102741c, Func Offset: 0xc
	// Line 66, Address: 0x1027444, Func Offset: 0x34
	// Line 67, Address: 0x1027450, Func Offset: 0x40
	// Line 69, Address: 0x1027458, Func Offset: 0x48
	// Line 72, Address: 0x1027464, Func Offset: 0x54
	// Line 73, Address: 0x1027470, Func Offset: 0x60
	// Line 74, Address: 0x102747c, Func Offset: 0x6c
	// Func End, Address: 0x102748c, Func Offset: 0x7c
}

// 
// Start address: 0x1027490
void act_init(_anon1* actionwk)
{
	_anon1* a1;
	// Line 76, Address: 0x1027490, Func Offset: 0
	// Line 79, Address: 0x102749c, Func Offset: 0xc
	// Line 80, Address: 0x10274ac, Func Offset: 0x1c
	// Line 81, Address: 0x10274bc, Func Offset: 0x2c
	// Line 82, Address: 0x10274c8, Func Offset: 0x38
	// Line 83, Address: 0x10274d4, Func Offset: 0x44
	// Line 84, Address: 0x10274e0, Func Offset: 0x50
	// Line 85, Address: 0x10274f0, Func Offset: 0x60
	// Line 86, Address: 0x10274fc, Func Offset: 0x6c
	// Line 87, Address: 0x1027508, Func Offset: 0x78
	// Line 88, Address: 0x1027520, Func Offset: 0x90
	// Line 91, Address: 0x1027544, Func Offset: 0xb4
	// Line 93, Address: 0x102755c, Func Offset: 0xcc
	// Line 94, Address: 0x1027568, Func Offset: 0xd8
	// Line 96, Address: 0x1027570, Func Offset: 0xe0
	// Line 97, Address: 0x10275a4, Func Offset: 0x114
	// Line 98, Address: 0x10275d8, Func Offset: 0x148
	// Line 99, Address: 0x10275e8, Func Offset: 0x158
	// Line 100, Address: 0x10275f4, Func Offset: 0x164
	// Line 101, Address: 0x1027600, Func Offset: 0x170
	// Line 103, Address: 0x102760c, Func Offset: 0x17c
	// Line 105, Address: 0x1027624, Func Offset: 0x194
	// Line 106, Address: 0x1027630, Func Offset: 0x1a0
	// Line 108, Address: 0x1027638, Func Offset: 0x1a8
	// Line 109, Address: 0x102766c, Func Offset: 0x1dc
	// Line 110, Address: 0x10276a0, Func Offset: 0x210
	// Line 111, Address: 0x10276b0, Func Offset: 0x220
	// Line 112, Address: 0x10276bc, Func Offset: 0x22c
	// Line 113, Address: 0x10276c8, Func Offset: 0x238
	// Line 115, Address: 0x10276d4, Func Offset: 0x244
	// Line 117, Address: 0x10276ec, Func Offset: 0x25c
	// Line 118, Address: 0x10276f8, Func Offset: 0x268
	// Line 120, Address: 0x1027700, Func Offset: 0x270
	// Line 121, Address: 0x1027734, Func Offset: 0x2a4
	// Line 122, Address: 0x1027768, Func Offset: 0x2d8
	// Line 123, Address: 0x1027778, Func Offset: 0x2e8
	// Line 124, Address: 0x1027784, Func Offset: 0x2f4
	// Line 125, Address: 0x1027790, Func Offset: 0x300
	// Line 127, Address: 0x102779c, Func Offset: 0x30c
	// Line 129, Address: 0x10277b4, Func Offset: 0x324
	// Line 130, Address: 0x10277c0, Func Offset: 0x330
	// Line 132, Address: 0x10277c8, Func Offset: 0x338
	// Line 133, Address: 0x10277fc, Func Offset: 0x36c
	// Line 134, Address: 0x1027830, Func Offset: 0x3a0
	// Line 135, Address: 0x1027840, Func Offset: 0x3b0
	// Line 136, Address: 0x102784c, Func Offset: 0x3bc
	// Line 137, Address: 0x1027858, Func Offset: 0x3c8
	// Line 139, Address: 0x1027864, Func Offset: 0x3d4
	// Line 141, Address: 0x102787c, Func Offset: 0x3ec
	// Line 142, Address: 0x1027888, Func Offset: 0x3f8
	// Line 144, Address: 0x1027890, Func Offset: 0x400
	// Line 145, Address: 0x10278c4, Func Offset: 0x434
	// Line 146, Address: 0x10278f8, Func Offset: 0x468
	// Line 147, Address: 0x1027908, Func Offset: 0x478
	// Line 148, Address: 0x1027914, Func Offset: 0x484
	// Line 149, Address: 0x1027920, Func Offset: 0x490
	// Line 151, Address: 0x102792c, Func Offset: 0x49c
	// Line 153, Address: 0x1027944, Func Offset: 0x4b4
	// Line 154, Address: 0x1027950, Func Offset: 0x4c0
	// Line 156, Address: 0x1027958, Func Offset: 0x4c8
	// Line 157, Address: 0x102798c, Func Offset: 0x4fc
	// Line 158, Address: 0x10279c0, Func Offset: 0x530
	// Line 159, Address: 0x10279d0, Func Offset: 0x540
	// Line 160, Address: 0x10279dc, Func Offset: 0x54c
	// Line 161, Address: 0x10279e8, Func Offset: 0x558
	// Line 162, Address: 0x10279f4, Func Offset: 0x564
	// Func End, Address: 0x1027a04, Func Offset: 0x574
}

// 
// Start address: 0x1027a10
void act_move(_anon1* actionwk)
{
	short d0;
	short ano;
	unsigned short sin;
	unsigned short cos;
	int d0l;
	int d1l;
	int d2l;
	int d3l;
	int d4l;
	int d5l;
	_anon1* adr1;
	// Line 164, Address: 0x1027a10, Func Offset: 0
	// Line 170, Address: 0x1027a40, Func Offset: 0x30
	// Line 171, Address: 0x1027a50, Func Offset: 0x40
	// Line 172, Address: 0x1027a60, Func Offset: 0x50
	// Line 173, Address: 0x1027a70, Func Offset: 0x60
	// Line 175, Address: 0x1027a7c, Func Offset: 0x6c
	// Line 176, Address: 0x1027a90, Func Offset: 0x80
	// Line 177, Address: 0x1027a98, Func Offset: 0x88
	// Line 178, Address: 0x1027aa4, Func Offset: 0x94
	// Line 179, Address: 0x1027ab0, Func Offset: 0xa0
	// Line 180, Address: 0x1027ab4, Func Offset: 0xa4
	// Line 181, Address: 0x1027ab8, Func Offset: 0xa8
	// Line 182, Address: 0x1027abc, Func Offset: 0xac
	// Line 183, Address: 0x1027ac0, Func Offset: 0xb0
	// Line 184, Address: 0x1027ac4, Func Offset: 0xb4
	// Line 185, Address: 0x1027ac8, Func Offset: 0xb8
	// Line 186, Address: 0x1027acc, Func Offset: 0xbc
	// Line 187, Address: 0x1027ad0, Func Offset: 0xc0
	// Line 188, Address: 0x1027ad4, Func Offset: 0xc4
	// Line 189, Address: 0x1027ad8, Func Offset: 0xc8
	// Line 190, Address: 0x1027aec, Func Offset: 0xdc
	// Line 191, Address: 0x1027b20, Func Offset: 0x110
	// Line 193, Address: 0x1027b54, Func Offset: 0x144
	// Line 194, Address: 0x1027b78, Func Offset: 0x168
	// Line 195, Address: 0x1027b8c, Func Offset: 0x17c
	// Line 196, Address: 0x1027ba0, Func Offset: 0x190
	// Line 197, Address: 0x1027bc4, Func Offset: 0x1b4
	// Line 198, Address: 0x1027bd8, Func Offset: 0x1c8
	// Line 199, Address: 0x1027bec, Func Offset: 0x1dc
	// Line 200, Address: 0x1027c10, Func Offset: 0x200
	// Line 201, Address: 0x1027c28, Func Offset: 0x218
	// Line 203, Address: 0x1027c40, Func Offset: 0x230
	// Line 204, Address: 0x1027c64, Func Offset: 0x254
	// Line 205, Address: 0x1027c78, Func Offset: 0x268
	// Line 206, Address: 0x1027c8c, Func Offset: 0x27c
	// Line 207, Address: 0x1027cb0, Func Offset: 0x2a0
	// Line 208, Address: 0x1027cc8, Func Offset: 0x2b8
	// Line 209, Address: 0x1027ce0, Func Offset: 0x2d0
	// Line 210, Address: 0x1027d04, Func Offset: 0x2f4
	// Line 211, Address: 0x1027d1c, Func Offset: 0x30c
	// Line 213, Address: 0x1027d34, Func Offset: 0x324
	// Func End, Address: 0x1027d68, Func Offset: 0x358
}

// 
// Start address: 0x1027d70
void togeball_opt(_anon1* actionwk)
{
	short ano;
	// Line 215, Address: 0x1027d70, Func Offset: 0
	// Line 218, Address: 0x1027d80, Func Offset: 0x10
	// Line 221, Address: 0x1027da8, Func Offset: 0x38
	// Line 223, Address: 0x1027db4, Func Offset: 0x44
	// Line 226, Address: 0x1027dc0, Func Offset: 0x50
	// Line 227, Address: 0x1027dd4, Func Offset: 0x64
	// Line 229, Address: 0x1027e08, Func Offset: 0x98
	// Line 230, Address: 0x1027e14, Func Offset: 0xa4
	// Line 232, Address: 0x1027e1c, Func Offset: 0xac
	// Line 233, Address: 0x1027e28, Func Offset: 0xb8
	// Func End, Address: 0x1027e3c, Func Offset: 0xcc
}

// 
// Start address: 0x1027e40
void act_init2(_anon1* actionwk)
{
	// Line 235, Address: 0x1027e40, Func Offset: 0
	// Line 236, Address: 0x1027e48, Func Offset: 0x8
	// Line 237, Address: 0x1027e58, Func Offset: 0x18
	// Line 238, Address: 0x1027e68, Func Offset: 0x28
	// Line 239, Address: 0x1027e74, Func Offset: 0x34
	// Line 240, Address: 0x1027e84, Func Offset: 0x44
	// Line 241, Address: 0x1027e90, Func Offset: 0x50
	// Line 242, Address: 0x1027e9c, Func Offset: 0x5c
	// Func End, Address: 0x1027ea8, Func Offset: 0x68
}

// 
// Start address: 0x1027eb0
void act_move2(_anon1* actionwk)
{
	// Line 244, Address: 0x1027eb0, Func Offset: 0
	// Line 245, Address: 0x1027eb8, Func Offset: 0x8
	// Line 246, Address: 0x1027ec8, Func Offset: 0x18
	// Line 247, Address: 0x1027ed8, Func Offset: 0x28
	// Func End, Address: 0x1027ee4, Func Offset: 0x34
}

