typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_13)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef _anon0* type_2[4];
typedef _anon0* type_3[4];
typedef char type_4[4];
typedef char type_5[4];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef _anon1 type_8[128];
typedef _anon0* type_9[2];
typedef char* type_10[2];
typedef char* type_11[1];
typedef char type_12[4];
typedef void(*type_14)(_anon1*)[10];

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
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0 pat07;
_anon0 pat08;
_anon0 pat09;
_anon0* pat_hachi6_e[4];
_anon0* pat_hachi6_b[2];
_anon0* pat_tama[4];
char pchg00[4];
char pchg01[4];
char* pchg[2];
char pchg_tama0[4];
char* pchg_tama[1];
_anon1 actwk[128];

void hachi6(_anon1* actionwk);
void act_init(_anon1* actionwk);
void act_move(_anon1* actionwk);
void act_move1(_anon1* actionwk);
short act_check(_anon1* actionwk, _anon1* pw);
void act_rev(_anon1* actionwk);
void act_rev1(_anon1* actionwk);
void act_rev2(_anon1* actionwk);
void act_shot(_anon1* actionwk);
void act_shot1(_anon1* actionwk);
void act_shot2(_anon1* actionwk);
void act_shot3(_anon1* actionwk);
void tama(_anon1* actionwk);
void tam_move(_anon1* actionwk);
void tam_move1(_anon1* actionwk);
void tam_move2(_anon1* actionwk);
void tam_move3(_anon1* actionwk);

// 
// Start address: 0x101bfe0
void hachi6(_anon1* actionwk)
{
	void(*act_tbl)(_anon1*)[10];
	// Line 104, Address: 0x101bfe0, Func Offset: 0
	// Line 105, Address: 0x101bfec, Func Offset: 0xc
	// Line 119, Address: 0x101c020, Func Offset: 0x40
	// Line 121, Address: 0x101c038, Func Offset: 0x58
	// Line 122, Address: 0x101c044, Func Offset: 0x64
	// Line 124, Address: 0x101c04c, Func Offset: 0x6c
	// Line 125, Address: 0x101c06c, Func Offset: 0x8c
	// Line 126, Address: 0x101c0a8, Func Offset: 0xc8
	// Line 127, Address: 0x101c0bc, Func Offset: 0xdc
	// Line 128, Address: 0x101c0c8, Func Offset: 0xe8
	// Line 129, Address: 0x101c0d4, Func Offset: 0xf4
	// Func End, Address: 0x101c0e4, Func Offset: 0x104
}

// 
// Start address: 0x101c0f0
void act_init(_anon1* actionwk)
{
	// Line 131, Address: 0x101c0f0, Func Offset: 0
	// Line 132, Address: 0x101c0fc, Func Offset: 0xc
	// Line 133, Address: 0x101c10c, Func Offset: 0x1c
	// Line 134, Address: 0x101c11c, Func Offset: 0x2c
	// Line 135, Address: 0x101c128, Func Offset: 0x38
	// Line 136, Address: 0x101c134, Func Offset: 0x44
	// Line 137, Address: 0x101c140, Func Offset: 0x50
	// Line 138, Address: 0x101c14c, Func Offset: 0x5c
	// Line 139, Address: 0x101c158, Func Offset: 0x68
	// Line 140, Address: 0x101c164, Func Offset: 0x74
	// Line 142, Address: 0x101c170, Func Offset: 0x80
	// Line 144, Address: 0x101c188, Func Offset: 0x98
	// Line 145, Address: 0x101c198, Func Offset: 0xa8
	// Line 146, Address: 0x101c1a4, Func Offset: 0xb4
	// Line 149, Address: 0x101c1ac, Func Offset: 0xbc
	// Line 150, Address: 0x101c1bc, Func Offset: 0xcc
	// Line 153, Address: 0x101c1c8, Func Offset: 0xd8
	// Line 154, Address: 0x101c1d4, Func Offset: 0xe4
	// Func End, Address: 0x101c1e4, Func Offset: 0xf4
}

// 
// Start address: 0x101c1f0
void act_move(_anon1* actionwk)
{
	// Line 156, Address: 0x101c1f0, Func Offset: 0
	// Line 157, Address: 0x101c1f8, Func Offset: 0x8
	// Line 158, Address: 0x101c208, Func Offset: 0x18
	// Line 159, Address: 0x101c220, Func Offset: 0x30
	// Line 161, Address: 0x101c234, Func Offset: 0x44
	// Line 162, Address: 0x101c240, Func Offset: 0x50
	// Func End, Address: 0x101c24c, Func Offset: 0x5c
}

// 
// Start address: 0x101c250
void act_move1(_anon1* actionwk)
{
	// Line 164, Address: 0x101c250, Func Offset: 0
	// Line 165, Address: 0x101c25c, Func Offset: 0xc
	// Line 166, Address: 0x101c274, Func Offset: 0x24
	// Line 168, Address: 0x101c28c, Func Offset: 0x3c
	// Line 170, Address: 0x101c2a4, Func Offset: 0x54
	// Line 171, Address: 0x101c2b4, Func Offset: 0x64
	// Line 175, Address: 0x101c2bc, Func Offset: 0x6c
	// Line 177, Address: 0x101c2d8, Func Offset: 0x88
	// Line 178, Address: 0x101c2e4, Func Offset: 0x94
	// Line 183, Address: 0x101c2ec, Func Offset: 0x9c
	// Line 184, Address: 0x101c314, Func Offset: 0xc4
	// Line 186, Address: 0x101c320, Func Offset: 0xd0
	// Func End, Address: 0x101c330, Func Offset: 0xe0
}

// 
// Start address: 0x101c330
short act_check(_anon1* actionwk, _anon1* pw)
{
	char d1;
	char d2;
	short d0w;
	// Line 188, Address: 0x101c330, Func Offset: 0
	// Line 193, Address: 0x101c348, Func Offset: 0x18
	// Line 194, Address: 0x101c358, Func Offset: 0x28
	// Line 195, Address: 0x101c36c, Func Offset: 0x3c
	// Line 196, Address: 0x101c3a0, Func Offset: 0x70
	// Line 197, Address: 0x101c3f0, Func Offset: 0xc0
	// Line 200, Address: 0x101c3f4, Func Offset: 0xc4
	// Line 201, Address: 0x101c404, Func Offset: 0xd4
	// Line 202, Address: 0x101c418, Func Offset: 0xe8
	// Line 203, Address: 0x101c44c, Func Offset: 0x11c
	// Line 204, Address: 0x101c478, Func Offset: 0x148
	// Line 205, Address: 0x101c47c, Func Offset: 0x14c
	// Line 206, Address: 0x101c488, Func Offset: 0x158
	// Line 208, Address: 0x101c498, Func Offset: 0x168
	// Line 209, Address: 0x101c4ac, Func Offset: 0x17c
	// Line 210, Address: 0x101c4d0, Func Offset: 0x1a0
	// Line 211, Address: 0x101c4e0, Func Offset: 0x1b0
	// Line 213, Address: 0x101c4f0, Func Offset: 0x1c0
	// Line 214, Address: 0x101c4f4, Func Offset: 0x1c4
	// Func End, Address: 0x101c50c, Func Offset: 0x1dc
}

// 
// Start address: 0x101c510
void act_rev(_anon1* actionwk)
{
	// Line 216, Address: 0x101c510, Func Offset: 0
	// Line 217, Address: 0x101c518, Func Offset: 0x8
	// Line 218, Address: 0x101c528, Func Offset: 0x18
	// Line 219, Address: 0x101c534, Func Offset: 0x24
	// Func End, Address: 0x101c540, Func Offset: 0x30
}

// 
// Start address: 0x101c540
void act_rev1(_anon1* actionwk)
{
	// Line 221, Address: 0x101c540, Func Offset: 0
	// Line 222, Address: 0x101c548, Func Offset: 0x8
	// Line 223, Address: 0x101c570, Func Offset: 0x30
	// Line 224, Address: 0x101c580, Func Offset: 0x40
	// Line 225, Address: 0x101c58c, Func Offset: 0x4c
	// Line 226, Address: 0x101c5a0, Func Offset: 0x60
	// Line 227, Address: 0x101c5c4, Func Offset: 0x84
	// Line 228, Address: 0x101c5d4, Func Offset: 0x94
	// Line 229, Address: 0x101c5e4, Func Offset: 0xa4
	// Func End, Address: 0x101c5f0, Func Offset: 0xb0
}

// 
// Start address: 0x101c5f0
void act_rev2(_anon1* actionwk)
{
	// Line 231, Address: 0x101c5f0, Func Offset: 0
	// Line 232, Address: 0x101c5f8, Func Offset: 0x8
	// Line 233, Address: 0x101c620, Func Offset: 0x30
	// Line 234, Address: 0x101c62c, Func Offset: 0x3c
	// Func End, Address: 0x101c638, Func Offset: 0x48
}

// 
// Start address: 0x101c640
void act_shot(_anon1* actionwk)
{
	// Line 236, Address: 0x101c640, Func Offset: 0
	// Line 237, Address: 0x101c64c, Func Offset: 0xc
	// Line 238, Address: 0x101c65c, Func Offset: 0x1c
	// Line 239, Address: 0x101c668, Func Offset: 0x28
	// Line 240, Address: 0x101c674, Func Offset: 0x34
	// Func End, Address: 0x101c684, Func Offset: 0x44
}

// 
// Start address: 0x101c690
void act_shot1(_anon1* actionwk)
{
	// Line 242, Address: 0x101c690, Func Offset: 0
	// Line 243, Address: 0x101c698, Func Offset: 0x8
	// Line 244, Address: 0x101c6c0, Func Offset: 0x30
	// Line 245, Address: 0x101c6d0, Func Offset: 0x40
	// Line 246, Address: 0x101c6dc, Func Offset: 0x4c
	// Line 247, Address: 0x101c6e8, Func Offset: 0x58
	// Line 249, Address: 0x101c6f4, Func Offset: 0x64
	// Line 250, Address: 0x101c700, Func Offset: 0x70
	// Line 251, Address: 0x101c70c, Func Offset: 0x7c
	// Line 252, Address: 0x101c718, Func Offset: 0x88
	// Line 253, Address: 0x101c730, Func Offset: 0xa0
	// Line 254, Address: 0x101c740, Func Offset: 0xb0
	// Func End, Address: 0x101c74c, Func Offset: 0xbc
}

// 
// Start address: 0x101c750
void act_shot2(_anon1* actionwk)
{
	_anon1* a1;
	// Line 256, Address: 0x101c750, Func Offset: 0
	// Line 259, Address: 0x101c75c, Func Offset: 0xc
	// Line 260, Address: 0x101c784, Func Offset: 0x34
	// Line 261, Address: 0x101c794, Func Offset: 0x44
	// Line 262, Address: 0x101c7a0, Func Offset: 0x50
	// Line 263, Address: 0x101c7b4, Func Offset: 0x64
	// Line 264, Address: 0x101c7c4, Func Offset: 0x74
	// Line 265, Address: 0x101c7d0, Func Offset: 0x80
	// Line 266, Address: 0x101c7e0, Func Offset: 0x90
	// Line 267, Address: 0x101c7f0, Func Offset: 0xa0
	// Line 268, Address: 0x101c800, Func Offset: 0xb0
	// Line 270, Address: 0x101c80c, Func Offset: 0xbc
	// Line 271, Address: 0x101c818, Func Offset: 0xc8
	// Line 272, Address: 0x101c824, Func Offset: 0xd4
	// Line 273, Address: 0x101c830, Func Offset: 0xe0
	// Line 274, Address: 0x101c83c, Func Offset: 0xec
	// Line 275, Address: 0x101c860, Func Offset: 0x110
	// Line 277, Address: 0x101c86c, Func Offset: 0x11c
	// Line 278, Address: 0x101c87c, Func Offset: 0x12c
	// Line 280, Address: 0x101c894, Func Offset: 0x144
	// Line 281, Address: 0x101c8a4, Func Offset: 0x154
	// Line 282, Address: 0x101c8b0, Func Offset: 0x160
	// Line 285, Address: 0x101c8b8, Func Offset: 0x168
	// Line 286, Address: 0x101c8c8, Func Offset: 0x178
	// Line 288, Address: 0x101c8d4, Func Offset: 0x184
	// Line 289, Address: 0x101c900, Func Offset: 0x1b0
	// Func End, Address: 0x101c910, Func Offset: 0x1c0
}

// 
// Start address: 0x101c910
void act_shot3(_anon1* actionwk)
{
	// Line 291, Address: 0x101c910, Func Offset: 0
	// Line 292, Address: 0x101c918, Func Offset: 0x8
	// Line 293, Address: 0x101c940, Func Offset: 0x30
	// Line 294, Address: 0x101c94c, Func Offset: 0x3c
	// Line 295, Address: 0x101c958, Func Offset: 0x48
	// Line 296, Address: 0x101c960, Func Offset: 0x50
	// Line 298, Address: 0x101c96c, Func Offset: 0x5c
	// Line 299, Address: 0x101c978, Func Offset: 0x68
	// Line 300, Address: 0x101c984, Func Offset: 0x74
	// Line 301, Address: 0x101c990, Func Offset: 0x80
	// Line 302, Address: 0x101c9a0, Func Offset: 0x90
	// Func End, Address: 0x101c9ac, Func Offset: 0x9c
}

// 
// Start address: 0x101c9b0
void tama(_anon1* actionwk)
{
	// Line 307, Address: 0x101c9b0, Func Offset: 0
	// Line 308, Address: 0x101c9bc, Func Offset: 0xc
	// Line 311, Address: 0x101c9fc, Func Offset: 0x4c
	// Line 313, Address: 0x101ca08, Func Offset: 0x58
	// Line 314, Address: 0x101ca14, Func Offset: 0x64
	// Line 316, Address: 0x101ca1c, Func Offset: 0x6c
	// Line 317, Address: 0x101ca28, Func Offset: 0x78
	// Line 319, Address: 0x101ca30, Func Offset: 0x80
	// Line 322, Address: 0x101ca3c, Func Offset: 0x8c
	// Line 323, Address: 0x101ca48, Func Offset: 0x98
	// Line 324, Address: 0x101ca54, Func Offset: 0xa4
	// Func End, Address: 0x101ca64, Func Offset: 0xb4
}

// 
// Start address: 0x101ca70
void tam_move(_anon1* actionwk)
{
	// Line 326, Address: 0x101ca70, Func Offset: 0
	// Line 327, Address: 0x101ca78, Func Offset: 0x8
	// Line 328, Address: 0x101ca88, Func Offset: 0x18
	// Line 329, Address: 0x101ca94, Func Offset: 0x24
	// Func End, Address: 0x101caa0, Func Offset: 0x30
}

// 
// Start address: 0x101caa0
void tam_move1(_anon1* actionwk)
{
	// Line 331, Address: 0x101caa0, Func Offset: 0
	// Line 332, Address: 0x101caa8, Func Offset: 0x8
	// Line 333, Address: 0x101cad0, Func Offset: 0x30
	// Line 334, Address: 0x101cae0, Func Offset: 0x40
	// Line 335, Address: 0x101caec, Func Offset: 0x4c
	// Line 336, Address: 0x101caf8, Func Offset: 0x58
	// Func End, Address: 0x101cb04, Func Offset: 0x64
}

// 
// Start address: 0x101cb10
void tam_move2(_anon1* actionwk)
{
	// Line 338, Address: 0x101cb10, Func Offset: 0
	// Line 339, Address: 0x101cb18, Func Offset: 0x8
	// Line 340, Address: 0x101cb30, Func Offset: 0x20
	// Line 341, Address: 0x101cb48, Func Offset: 0x38
	// Line 342, Address: 0x101cb70, Func Offset: 0x60
	// Line 343, Address: 0x101cb80, Func Offset: 0x70
	// Func End, Address: 0x101cb8c, Func Offset: 0x7c
}

// 
// Start address: 0x101cb90
void tam_move3(_anon1* actionwk)
{
	// Line 345, Address: 0x101cb90, Func Offset: 0
	// Line 346, Address: 0x101cb9c, Func Offset: 0xc
	// Line 348, Address: 0x101cbbc, Func Offset: 0x2c
	// Line 349, Address: 0x101cbc8, Func Offset: 0x38
	// Line 351, Address: 0x101cbd0, Func Offset: 0x40
	// Line 352, Address: 0x101cbe8, Func Offset: 0x58
	// Line 353, Address: 0x101cc00, Func Offset: 0x70
	// Line 354, Address: 0x101cc14, Func Offset: 0x84
	// Func End, Address: 0x101cc24, Func Offset: 0x94
}

