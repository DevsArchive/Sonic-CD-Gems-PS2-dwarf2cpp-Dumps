typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[15];
typedef short type_3[15];
typedef short type_4[15];
typedef char type_5[3];
typedef char type_6[3];
typedef _anon1* type_7[2];
typedef unsigned char type_8[2];
typedef unsigned char type_9[22];
typedef short type_10[9];
typedef short type_11[9];
typedef short type_12[9];
typedef _anon0 type_13[128];

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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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

_anon1 beem6pat0;
_anon1 nullpat;
_anon1* beem6pat[2];
unsigned char time_flag;
_anon2 scra_v_posit;
_anon5 stageno;
unsigned char generate_flag;
unsigned char st6clrchg;
_anon0 actwk[128];
tagPALETTEENTRY* lpcolorwk;
tagPALETTEENTRY* lpcolorwk2;
short clrtblA[15];
short clrtblA2[9];
short clrtblB[15];
short clrtblB2[9];
short clrtblD[15];
short clrtblD2[9];

void beem6(_anon0* actionwk);
void beem6_init(_anon0* actionwk);
void beem6_wait(_anon0* actionwk);
void cntdwn(_anon0* actionwk);
void beem6_move(_anon0* actionwk);
void beem6_posiset(_anon0* actionwk);
void beem6_actsch();
void clrset0();
void clrset0_2();
void clrset1(_anon0* actionwk, char d0);
void maeclrset(_anon0* actionwk, char d0);

// 
// Start address: 0x10187a0
void beem6(_anon0* actionwk)
{
	// Line 50, Address: 0x10187a0, Func Offset: 0
	// Line 51, Address: 0x10187ac, Func Offset: 0xc
	// Line 54, Address: 0x10187e0, Func Offset: 0x40
	// Line 56, Address: 0x10187ec, Func Offset: 0x4c
	// Line 57, Address: 0x10187f8, Func Offset: 0x58
	// Line 59, Address: 0x1018800, Func Offset: 0x60
	// Line 62, Address: 0x101880c, Func Offset: 0x6c
	// Line 63, Address: 0x1018818, Func Offset: 0x78
	// Line 64, Address: 0x1018824, Func Offset: 0x84
	// Func End, Address: 0x1018834, Func Offset: 0x94
}

// 
// Start address: 0x1018840
void beem6_init(_anon0* actionwk)
{
	// Line 67, Address: 0x1018840, Func Offset: 0
	// Line 68, Address: 0x101884c, Func Offset: 0xc
	// Line 69, Address: 0x101885c, Func Offset: 0x1c
	// Line 70, Address: 0x101886c, Func Offset: 0x2c
	// Line 71, Address: 0x1018878, Func Offset: 0x38
	// Line 72, Address: 0x1018884, Func Offset: 0x44
	// Line 73, Address: 0x1018894, Func Offset: 0x54
	// Line 74, Address: 0x10188a0, Func Offset: 0x60
	// Line 75, Address: 0x10188ac, Func Offset: 0x6c
	// Line 76, Address: 0x10188bc, Func Offset: 0x7c
	// Line 78, Address: 0x10188c4, Func Offset: 0x84
	// Line 79, Address: 0x10188cc, Func Offset: 0x8c
	// Func End, Address: 0x10188dc, Func Offset: 0x9c
}

// 
// Start address: 0x10188e0
void beem6_wait(_anon0* actionwk)
{
	short d0;
	// Line 81, Address: 0x10188e0, Func Offset: 0
	// Line 84, Address: 0x10188f0, Func Offset: 0x10
	// Line 85, Address: 0x1018908, Func Offset: 0x28
	// Line 86, Address: 0x1018914, Func Offset: 0x34
	// Line 88, Address: 0x101892c, Func Offset: 0x4c
	// Line 89, Address: 0x1018938, Func Offset: 0x58
	// Line 91, Address: 0x1018940, Func Offset: 0x60
	// Line 92, Address: 0x1018948, Func Offset: 0x68
	// Line 94, Address: 0x1018960, Func Offset: 0x80
	// Line 97, Address: 0x1018970, Func Offset: 0x90
	// Line 99, Address: 0x101898c, Func Offset: 0xac
	// Line 102, Address: 0x10189a8, Func Offset: 0xc8
	// Line 103, Address: 0x10189b4, Func Offset: 0xd4
	// Line 105, Address: 0x10189c8, Func Offset: 0xe8
	// Line 106, Address: 0x10189d4, Func Offset: 0xf4
	// Line 109, Address: 0x10189f8, Func Offset: 0x118
	// Line 110, Address: 0x1018a00, Func Offset: 0x120
	// Func End, Address: 0x1018a14, Func Offset: 0x134
}

// 
// Start address: 0x1018a20
void cntdwn(_anon0* actionwk)
{
	// Line 112, Address: 0x1018a20, Func Offset: 0
	// Line 113, Address: 0x1018a2c, Func Offset: 0xc
	// Line 114, Address: 0x1018a4c, Func Offset: 0x2c
	// Line 115, Address: 0x1018a5c, Func Offset: 0x3c
	// Line 116, Address: 0x1018a68, Func Offset: 0x48
	// Line 117, Address: 0x1018a74, Func Offset: 0x54
	// Line 119, Address: 0x1018a7c, Func Offset: 0x5c
	// Line 121, Address: 0x1018a94, Func Offset: 0x74
	// Line 122, Address: 0x1018aa0, Func Offset: 0x80
	// Line 124, Address: 0x1018aa8, Func Offset: 0x88
	// Line 125, Address: 0x1018ab4, Func Offset: 0x94
	// Line 126, Address: 0x1018ac0, Func Offset: 0xa0
	// Func End, Address: 0x1018ad0, Func Offset: 0xb0
}

// 
// Start address: 0x1018ad0
void beem6_move(_anon0* actionwk)
{
	// Line 129, Address: 0x1018ad0, Func Offset: 0
	// Line 130, Address: 0x1018adc, Func Offset: 0xc
	// Line 131, Address: 0x1018ae8, Func Offset: 0x18
	// Line 133, Address: 0x1018b00, Func Offset: 0x30
	// Line 134, Address: 0x1018b1c, Func Offset: 0x4c
	// Line 135, Address: 0x1018b3c, Func Offset: 0x6c
	// Line 138, Address: 0x1018b44, Func Offset: 0x74
	// Line 139, Address: 0x1018b60, Func Offset: 0x90
	// Line 140, Address: 0x1018b7c, Func Offset: 0xac
	// Line 141, Address: 0x1018b9c, Func Offset: 0xcc
	// Line 142, Address: 0x1018bac, Func Offset: 0xdc
	// Line 143, Address: 0x1018bb4, Func Offset: 0xe4
	// Line 144, Address: 0x1018bd8, Func Offset: 0x108
	// Line 145, Address: 0x1018be0, Func Offset: 0x110
	// Line 146, Address: 0x1018be8, Func Offset: 0x118
	// Func End, Address: 0x1018bf8, Func Offset: 0x128
}

// 
// Start address: 0x1018c00
void beem6_posiset(_anon0* actionwk)
{
	// Line 149, Address: 0x1018c00, Func Offset: 0
	// Line 150, Address: 0x1018c08, Func Offset: 0x8
	// Line 151, Address: 0x1018c18, Func Offset: 0x18
	// Line 152, Address: 0x1018c28, Func Offset: 0x28
	// Func End, Address: 0x1018c34, Func Offset: 0x34
}

// 
// Start address: 0x1018c40
void beem6_actsch()
{
	_anon0* a1;
	short d0;
	// Line 155, Address: 0x1018c40, Func Offset: 0
	// Line 159, Address: 0x1018c4c, Func Offset: 0xc
	// Line 161, Address: 0x1018c58, Func Offset: 0x18
	// Line 163, Address: 0x1018c64, Func Offset: 0x24
	// Line 164, Address: 0x1018c7c, Func Offset: 0x3c
	// Line 165, Address: 0x1018c8c, Func Offset: 0x4c
	// Line 166, Address: 0x1018cb8, Func Offset: 0x78
	// Line 167, Address: 0x1018ccc, Func Offset: 0x8c
	// Line 168, Address: 0x1018cd8, Func Offset: 0x98
	// Line 169, Address: 0x1018ce4, Func Offset: 0xa4
	// Line 170, Address: 0x1018cf4, Func Offset: 0xb4
	// Line 171, Address: 0x1018d04, Func Offset: 0xc4
	// Func End, Address: 0x1018d18, Func Offset: 0xd8
}

// 
// Start address: 0x1018d20
void clrset0()
{
	tagPALETTEENTRY* lpPe_a2;
	tagPALETTEENTRY* lpPe_a3;
	tagPALETTEENTRY dummy;
	short d0;
	short d2;
	// Line 174, Address: 0x1018d20, Func Offset: 0
	// Line 179, Address: 0x1018d34, Func Offset: 0x14
	// Line 180, Address: 0x1018d40, Func Offset: 0x20
	// Line 181, Address: 0x1018d4c, Func Offset: 0x2c
	// Line 182, Address: 0x1018d58, Func Offset: 0x38
	// Line 183, Address: 0x1018d6c, Func Offset: 0x4c
	// Line 184, Address: 0x1018d78, Func Offset: 0x58
	// Line 185, Address: 0x1018d84, Func Offset: 0x64
	// Line 186, Address: 0x1018d90, Func Offset: 0x70
	// Line 187, Address: 0x1018da8, Func Offset: 0x88
	// Line 188, Address: 0x1018db4, Func Offset: 0x94
	// Line 189, Address: 0x1018dc0, Func Offset: 0xa0
	// Line 192, Address: 0x1018dd4, Func Offset: 0xb4
	// Line 193, Address: 0x1018de0, Func Offset: 0xc0
	// Line 194, Address: 0x1018df8, Func Offset: 0xd8
	// Line 195, Address: 0x1018e0c, Func Offset: 0xec
	// Line 196, Address: 0x1018e24, Func Offset: 0x104
	// Line 197, Address: 0x1018e2c, Func Offset: 0x10c
	// Line 198, Address: 0x1018e58, Func Offset: 0x138
	// Line 199, Address: 0x1018e84, Func Offset: 0x164
	// Line 201, Address: 0x1018eb0, Func Offset: 0x190
	// Line 202, Address: 0x1018ec8, Func Offset: 0x1a8
	// Line 203, Address: 0x1018edc, Func Offset: 0x1bc
	// Line 204, Address: 0x1018ef4, Func Offset: 0x1d4
	// Line 205, Address: 0x1018efc, Func Offset: 0x1dc
	// Line 206, Address: 0x1018f28, Func Offset: 0x208
	// Func End, Address: 0x1018f44, Func Offset: 0x224
}

// 
// Start address: 0x1018f50
void clrset0_2()
{
	tagPALETTEENTRY* lpPe_a2;
	tagPALETTEENTRY* lpPe_a3;
	tagPALETTEENTRY dummy;
	short d0;
	short d2;
	// Line 208, Address: 0x1018f50, Func Offset: 0
	// Line 213, Address: 0x1018f64, Func Offset: 0x14
	// Line 214, Address: 0x1018f70, Func Offset: 0x20
	// Line 215, Address: 0x1018f7c, Func Offset: 0x2c
	// Line 216, Address: 0x1018f88, Func Offset: 0x38
	// Line 217, Address: 0x1018f9c, Func Offset: 0x4c
	// Line 218, Address: 0x1018fa8, Func Offset: 0x58
	// Line 219, Address: 0x1018fb4, Func Offset: 0x64
	// Line 220, Address: 0x1018fc0, Func Offset: 0x70
	// Line 221, Address: 0x1018fd8, Func Offset: 0x88
	// Line 222, Address: 0x1018fe4, Func Offset: 0x94
	// Line 223, Address: 0x1018ff0, Func Offset: 0xa0
	// Line 226, Address: 0x1019004, Func Offset: 0xb4
	// Line 227, Address: 0x1019010, Func Offset: 0xc0
	// Line 228, Address: 0x1019028, Func Offset: 0xd8
	// Line 229, Address: 0x101903c, Func Offset: 0xec
	// Line 230, Address: 0x1019054, Func Offset: 0x104
	// Line 231, Address: 0x101905c, Func Offset: 0x10c
	// Line 232, Address: 0x1019088, Func Offset: 0x138
	// Line 233, Address: 0x10190b4, Func Offset: 0x164
	// Line 235, Address: 0x10190e0, Func Offset: 0x190
	// Line 236, Address: 0x10190f8, Func Offset: 0x1a8
	// Line 237, Address: 0x101910c, Func Offset: 0x1bc
	// Line 238, Address: 0x1019124, Func Offset: 0x1d4
	// Line 239, Address: 0x101912c, Func Offset: 0x1dc
	// Line 240, Address: 0x1019158, Func Offset: 0x208
	// Func End, Address: 0x1019174, Func Offset: 0x224
}

// 
// Start address: 0x1019180
void clrset1(_anon0* actionwk, char d0)
{
	char clrsel[3];
	tagPALETTEENTRY* lpPe_a2;
	tagPALETTEENTRY dummy;
	short* a1;
	short col;
	// Line 294, Address: 0x1019180, Func Offset: 0
	// Line 296, Address: 0x1019198, Func Offset: 0x18
	// Line 302, Address: 0x10191bc, Func Offset: 0x3c
	// Line 303, Address: 0x10191e8, Func Offset: 0x68
	// Line 304, Address: 0x1019208, Func Offset: 0x88
	// Line 305, Address: 0x1019210, Func Offset: 0x90
	// Line 307, Address: 0x1019224, Func Offset: 0xa4
	// Line 308, Address: 0x101922c, Func Offset: 0xac
	// Line 309, Address: 0x1019244, Func Offset: 0xc4
	// Line 312, Address: 0x101924c, Func Offset: 0xcc
	// Line 313, Address: 0x101926c, Func Offset: 0xec
	// Line 314, Address: 0x1019284, Func Offset: 0x104
	// Line 315, Address: 0x1019298, Func Offset: 0x118
	// Line 316, Address: 0x10192b0, Func Offset: 0x130
	// Line 317, Address: 0x10192b8, Func Offset: 0x138
	// Line 318, Address: 0x10192e4, Func Offset: 0x164
	// Line 319, Address: 0x1019310, Func Offset: 0x190
	// Line 321, Address: 0x101932c, Func Offset: 0x1ac
	// Line 322, Address: 0x1019338, Func Offset: 0x1b8
	// Line 323, Address: 0x1019340, Func Offset: 0x1c0
	// Line 325, Address: 0x1019354, Func Offset: 0x1d4
	// Line 326, Address: 0x1019360, Func Offset: 0x1e0
	// Line 327, Address: 0x1019368, Func Offset: 0x1e8
	// Line 328, Address: 0x1019380, Func Offset: 0x200
	// Line 331, Address: 0x1019388, Func Offset: 0x208
	// Line 332, Address: 0x10193a8, Func Offset: 0x228
	// Line 333, Address: 0x10193c0, Func Offset: 0x240
	// Line 334, Address: 0x10193d4, Func Offset: 0x254
	// Line 335, Address: 0x10193ec, Func Offset: 0x26c
	// Line 336, Address: 0x10193f4, Func Offset: 0x274
	// Line 337, Address: 0x1019420, Func Offset: 0x2a0
	// Line 338, Address: 0x101944c, Func Offset: 0x2cc
	// Line 339, Address: 0x1019468, Func Offset: 0x2e8
	// Func End, Address: 0x1019480, Func Offset: 0x300
}

// 
// Start address: 0x1019480
void maeclrset(_anon0* actionwk, char d0)
{
	char clrsel[3];
	tagPALETTEENTRY* lpPe_a2;
	tagPALETTEENTRY dummy;
	short col;
	// Line 343, Address: 0x1019480, Func Offset: 0
	// Line 344, Address: 0x1019494, Func Offset: 0x14
	// Line 349, Address: 0x10194b8, Func Offset: 0x38
	// Line 350, Address: 0x10194e8, Func Offset: 0x68
	// Line 352, Address: 0x1019504, Func Offset: 0x84
	// Line 354, Address: 0x1019510, Func Offset: 0x90
	// Line 356, Address: 0x101952c, Func Offset: 0xac
	// Line 357, Address: 0x1019544, Func Offset: 0xc4
	// Line 358, Address: 0x1019558, Func Offset: 0xd8
	// Line 359, Address: 0x1019570, Func Offset: 0xf0
	// Line 360, Address: 0x1019578, Func Offset: 0xf8
	// Line 362, Address: 0x10195a4, Func Offset: 0x124
	// Line 363, Address: 0x10195b4, Func Offset: 0x134
	// Line 364, Address: 0x10195c4, Func Offset: 0x144
	// Func End, Address: 0x10195d8, Func Offset: 0x158
}

