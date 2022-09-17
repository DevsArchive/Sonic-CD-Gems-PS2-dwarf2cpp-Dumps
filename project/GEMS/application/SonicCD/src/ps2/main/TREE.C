typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_1)(_anon1*, _anon1*);
typedef void(*type_5)(_anon1*, _anon1*);
typedef void(*type_17)(_anon1*, _anon1*);

typedef _anon7 type_0[20];
typedef void(*type_2)(_anon1*, _anon1*)[2];
typedef _anon7 type_3[0];
typedef unsigned char type_4[6];
typedef void(*type_6)(_anon1*, _anon1*)[2];
typedef _anon0* type_7[2];
typedef _anon0* type_8[10];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef unsigned char* type_11[3];
typedef short type_12[4];
typedef unsigned char type_13[6];
typedef unsigned char type_14[12];
typedef short type_15[3];
typedef _anon1 type_16[128];
typedef void(*type_18)(_anon1*, _anon1*)[2];

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

void(*hoshi_tbl)(_anon1*, _anon1*)[2];
_anon1 actwk[128];
_anon0* hoshipat[2];
void(*k0_tbl)(_anon1*, _anon1*)[2];
void(*kasoku_tbl)(_anon1*, _anon1*)[2];
_anon0* kasokupat[10];
unsigned char* kasokuchg[3];
_anon0 hoshipat0;
_anon0 hoshipat1;
unsigned char kasokuchg0[12];
unsigned char kasokuchg1[6];
unsigned char kasokuchg2[6];
_anon0 kasokupat_a;
_anon0 kasokupat_b;
_anon0 kasokupat_c;
_anon0 kasokupat_d;
_anon0 kasokupat_e;
_anon0 kasokupat_f;
_anon0 kasokupat_g;
_anon0 kasokupat_h;
_anon0 kasokupat_i;
_anon0 kasokupat_j;

void hoshi(_anon1* pActwk);
void hoshi_init(_anon1* pActwk, _anon1* pPlaywk);
void hoshi_move(_anon1* pActwk, _anon1* pPlaywk);
void kasoku0(_anon1* pActwk);
void k0_init(_anon1* pActwk, _anon1* pPlaywk);
void k0_move(_anon1* pActwk, _anon1* pPlaywk);
void kasoku(_anon1* pActwk);
void kasoku_init(_anon1* pActwk, _anon1* pPlaywk);
void kasoku_move(_anon1* pActwk, _anon1* pPlaywk);

// 
// Start address: 0x101ae10
void hoshi(_anon1* pActwk)
{
	short iXposi;
	// Line 53, Address: 0x101ae10, Func Offset: 0
	// Line 56, Address: 0x101ae20, Func Offset: 0x10
	// Line 57, Address: 0x101ae6c, Func Offset: 0x5c
	// Line 58, Address: 0x101ae78, Func Offset: 0x68
	// Line 59, Address: 0x101ae88, Func Offset: 0x78
	// Line 60, Address: 0x101ae98, Func Offset: 0x88
	// Func End, Address: 0x101aeac, Func Offset: 0x9c
}

// 
// Start address: 0x101aeb0
void hoshi_init(_anon1* pActwk, _anon1* pPlaywk)
{
	_anon1* pActfree;
	short i;
	short iXwork;
	short iLp;
	short iOffset;
	short tbl0[4];
	short tbl1[3];
	// Line 81, Address: 0x101aeb0, Func Offset: 0
	// Line 84, Address: 0x101aed0, Func Offset: 0x20
	// Line 85, Address: 0x101aefc, Func Offset: 0x4c
	// Line 87, Address: 0x101af20, Func Offset: 0x70
	// Line 88, Address: 0x101af30, Func Offset: 0x80
	// Line 89, Address: 0x101af40, Func Offset: 0x90
	// Line 90, Address: 0x101af50, Func Offset: 0xa0
	// Line 91, Address: 0x101af5c, Func Offset: 0xac
	// Line 92, Address: 0x101af68, Func Offset: 0xb8
	// Line 93, Address: 0x101af74, Func Offset: 0xc4
	// Line 94, Address: 0x101af84, Func Offset: 0xd4
	// Line 95, Address: 0x101af8c, Func Offset: 0xdc
	// Line 96, Address: 0x101afbc, Func Offset: 0x10c
	// Line 97, Address: 0x101afc8, Func Offset: 0x118
	// Line 99, Address: 0x101afdc, Func Offset: 0x12c
	// Line 101, Address: 0x101afe0, Func Offset: 0x130
	// Line 103, Address: 0x101afec, Func Offset: 0x13c
	// Line 104, Address: 0x101affc, Func Offset: 0x14c
	// Line 105, Address: 0x101b008, Func Offset: 0x158
	// Line 106, Address: 0x101b018, Func Offset: 0x168
	// Line 107, Address: 0x101b024, Func Offset: 0x174
	// Line 108, Address: 0x101b02c, Func Offset: 0x17c
	// Line 109, Address: 0x101b03c, Func Offset: 0x18c
	// Line 110, Address: 0x101b044, Func Offset: 0x194
	// Line 111, Address: 0x101b054, Func Offset: 0x1a4
	// Line 112, Address: 0x101b064, Func Offset: 0x1b4
	// Line 113, Address: 0x101b074, Func Offset: 0x1c4
	// Line 114, Address: 0x101b084, Func Offset: 0x1d4
	// Line 115, Address: 0x101b094, Func Offset: 0x1e4
	// Line 116, Address: 0x101b0b8, Func Offset: 0x208
	// Line 117, Address: 0x101b0c8, Func Offset: 0x218
	// Line 119, Address: 0x101b0fc, Func Offset: 0x24c
	// Line 120, Address: 0x101b108, Func Offset: 0x258
	// Line 122, Address: 0x101b10c, Func Offset: 0x25c
	// Line 124, Address: 0x101b118, Func Offset: 0x268
	// Line 125, Address: 0x101b124, Func Offset: 0x274
	// Line 126, Address: 0x101b134, Func Offset: 0x284
	// Line 127, Address: 0x101b140, Func Offset: 0x290
	// Line 128, Address: 0x101b14c, Func Offset: 0x29c
	// Line 129, Address: 0x101b158, Func Offset: 0x2a8
	// Line 130, Address: 0x101b164, Func Offset: 0x2b4
	// Line 131, Address: 0x101b16c, Func Offset: 0x2bc
	// Line 132, Address: 0x101b174, Func Offset: 0x2c4
	// Line 133, Address: 0x101b184, Func Offset: 0x2d4
	// Line 134, Address: 0x101b194, Func Offset: 0x2e4
	// Line 135, Address: 0x101b1a4, Func Offset: 0x2f4
	// Line 136, Address: 0x101b1b0, Func Offset: 0x300
	// Line 137, Address: 0x101b1bc, Func Offset: 0x30c
	// Line 138, Address: 0x101b1cc, Func Offset: 0x31c
	// Line 139, Address: 0x101b1f0, Func Offset: 0x340
	// Line 140, Address: 0x101b224, Func Offset: 0x374
	// Func End, Address: 0x101b244, Func Offset: 0x394
}

// 
// Start address: 0x101b250
void hoshi_move(_anon1* pActwk, _anon1* pPlaywk)
{
	short iXwork;
	// Line 155, Address: 0x101b250, Func Offset: 0
	// Line 156, Address: 0x101b260, Func Offset: 0x10
	// Line 158, Address: 0x101b264, Func Offset: 0x14
	// Line 159, Address: 0x101b27c, Func Offset: 0x2c
	// Line 161, Address: 0x101b294, Func Offset: 0x44
	// Line 162, Address: 0x101b2a4, Func Offset: 0x54
	// Line 163, Address: 0x101b2b0, Func Offset: 0x60
	// Line 164, Address: 0x101b2dc, Func Offset: 0x8c
	// Line 166, Address: 0x101b2fc, Func Offset: 0xac
	// Line 168, Address: 0x101b310, Func Offset: 0xc0
	// Line 169, Address: 0x101b330, Func Offset: 0xe0
	// Line 172, Address: 0x101b33c, Func Offset: 0xec
	// Line 173, Address: 0x101b348, Func Offset: 0xf8
	// Line 174, Address: 0x101b374, Func Offset: 0x124
	// Line 177, Address: 0x101b380, Func Offset: 0x130
	// Line 178, Address: 0x101b39c, Func Offset: 0x14c
	// Line 179, Address: 0x101b3a4, Func Offset: 0x154
	// Func End, Address: 0x101b3b4, Func Offset: 0x164
}

// 
// Start address: 0x101b3c0
void kasoku0(_anon1* pActwk)
{
	// Line 192, Address: 0x101b3c0, Func Offset: 0
	// Line 193, Address: 0x101b3cc, Func Offset: 0xc
	// Line 194, Address: 0x101b418, Func Offset: 0x58
	// Line 195, Address: 0x101b424, Func Offset: 0x64
	// Func End, Address: 0x101b434, Func Offset: 0x74
}

// 
// Start address: 0x101b440
void k0_init(_anon1* pActwk, _anon1* pPlaywk)
{
	// Line 217, Address: 0x101b440, Func Offset: 0
	// Line 218, Address: 0x101b450, Func Offset: 0x10
	// Line 219, Address: 0x101b460, Func Offset: 0x20
	// Line 220, Address: 0x101b470, Func Offset: 0x30
	// Line 221, Address: 0x101b480, Func Offset: 0x40
	// Func End, Address: 0x101b490, Func Offset: 0x50
}

// 
// Start address: 0x101b490
void k0_move(_anon1* pActwk, _anon1* pPlaywk)
{
	short iD0;
	// Line 236, Address: 0x101b490, Func Offset: 0
	// Line 239, Address: 0x101b4a0, Func Offset: 0x10
	// Line 240, Address: 0x101b4bc, Func Offset: 0x2c
	// Line 241, Address: 0x101b4f0, Func Offset: 0x60
	// Line 242, Address: 0x101b4fc, Func Offset: 0x6c
	// Line 244, Address: 0x101b510, Func Offset: 0x80
	// Line 245, Address: 0x101b544, Func Offset: 0xb4
	// Line 246, Address: 0x101b550, Func Offset: 0xc0
	// Line 248, Address: 0x101b564, Func Offset: 0xd4
	// Line 249, Address: 0x101b57c, Func Offset: 0xec
	// Line 251, Address: 0x101b5a8, Func Offset: 0x118
	// Line 252, Address: 0x101b5b8, Func Offset: 0x128
	// Line 253, Address: 0x101b5c0, Func Offset: 0x130
	// Line 254, Address: 0x101b5c8, Func Offset: 0x138
	// Line 255, Address: 0x101b5d4, Func Offset: 0x144
	// Line 256, Address: 0x101b5e0, Func Offset: 0x150
	// Line 257, Address: 0x101b5e8, Func Offset: 0x158
	// Line 258, Address: 0x101b5f4, Func Offset: 0x164
	// Line 259, Address: 0x101b600, Func Offset: 0x170
	// Line 260, Address: 0x101b610, Func Offset: 0x180
	// Line 263, Address: 0x101b620, Func Offset: 0x190
	// Line 264, Address: 0x101b628, Func Offset: 0x198
	// Func End, Address: 0x101b638, Func Offset: 0x1a8
}

// 
// Start address: 0x101b640
void kasoku(_anon1* pActwk)
{
	short iXwork;
	// Line 277, Address: 0x101b640, Func Offset: 0
	// Line 280, Address: 0x101b650, Func Offset: 0x10
	// Line 282, Address: 0x101b668, Func Offset: 0x28
	// Line 283, Address: 0x101b674, Func Offset: 0x34
	// Line 285, Address: 0x101b67c, Func Offset: 0x3c
	// Line 286, Address: 0x101b6c8, Func Offset: 0x88
	// Line 287, Address: 0x101b6d4, Func Offset: 0x94
	// Line 288, Address: 0x101b6e4, Func Offset: 0xa4
	// Line 289, Address: 0x101b6f4, Func Offset: 0xb4
	// Func End, Address: 0x101b708, Func Offset: 0xc8
}

// 
// Start address: 0x101b710
void kasoku_init(_anon1* pActwk, _anon1* pPlaywk)
{
	// Line 310, Address: 0x101b710, Func Offset: 0
	// Line 311, Address: 0x101b720, Func Offset: 0x10
	// Line 312, Address: 0x101b730, Func Offset: 0x20
	// Line 313, Address: 0x101b740, Func Offset: 0x30
	// Line 314, Address: 0x101b74c, Func Offset: 0x3c
	// Line 315, Address: 0x101b75c, Func Offset: 0x4c
	// Line 316, Address: 0x101b768, Func Offset: 0x58
	// Line 317, Address: 0x101b774, Func Offset: 0x64
	// Line 318, Address: 0x101b780, Func Offset: 0x70
	// Line 319, Address: 0x101b790, Func Offset: 0x80
	// Line 321, Address: 0x101b7a8, Func Offset: 0x98
	// Line 322, Address: 0x101b7b8, Func Offset: 0xa8
	// Line 324, Address: 0x101b7c8, Func Offset: 0xb8
	// Line 325, Address: 0x101b7d8, Func Offset: 0xc8
	// Func End, Address: 0x101b7e8, Func Offset: 0xd8
}

// 
// Start address: 0x101b7f0
void kasoku_move(_anon1* pActwk, _anon1* pPlaywk)
{
	short iD0;
	short iD1;
	short iD2;
	int lD0wk;
	// Line 340, Address: 0x101b7f0, Func Offset: 0
	// Line 345, Address: 0x101b810, Func Offset: 0x20
	// Line 347, Address: 0x101b824, Func Offset: 0x34
	// Line 348, Address: 0x101b830, Func Offset: 0x40
	// Line 349, Address: 0x101b848, Func Offset: 0x58
	// Line 351, Address: 0x101b858, Func Offset: 0x68
	// Line 352, Address: 0x101b86c, Func Offset: 0x7c
	// Line 355, Address: 0x101b874, Func Offset: 0x84
	// Line 356, Address: 0x101b87c, Func Offset: 0x8c
	// Line 357, Address: 0x101b880, Func Offset: 0x90
	// Line 360, Address: 0x101b898, Func Offset: 0xa8
	// Line 361, Address: 0x101b8bc, Func Offset: 0xcc
	// Line 362, Address: 0x101b8d4, Func Offset: 0xe4
	// Line 364, Address: 0x101b8f4, Func Offset: 0x104
	// Line 365, Address: 0x101b908, Func Offset: 0x118
	// Line 366, Address: 0x101b928, Func Offset: 0x138
	// Line 368, Address: 0x101b934, Func Offset: 0x144
	// Line 369, Address: 0x101b93c, Func Offset: 0x14c
	// Line 370, Address: 0x101b944, Func Offset: 0x154
	// Line 372, Address: 0x101b958, Func Offset: 0x168
	// Line 373, Address: 0x101b970, Func Offset: 0x180
	// Line 376, Address: 0x101b980, Func Offset: 0x190
	// Line 377, Address: 0x101b98c, Func Offset: 0x19c
	// Line 378, Address: 0x101b9a8, Func Offset: 0x1b8
	// Line 379, Address: 0x101b9b4, Func Offset: 0x1c4
	// Line 381, Address: 0x101b9d8, Func Offset: 0x1e8
	// Line 383, Address: 0x101ba04, Func Offset: 0x214
	// Line 384, Address: 0x101ba18, Func Offset: 0x228
	// Line 389, Address: 0x101ba28, Func Offset: 0x238
	// Line 390, Address: 0x101ba3c, Func Offset: 0x24c
	// Line 391, Address: 0x101ba70, Func Offset: 0x280
	// Line 392, Address: 0x101ba7c, Func Offset: 0x28c
	// Line 393, Address: 0x101ba8c, Func Offset: 0x29c
	// Line 394, Address: 0x101ba98, Func Offset: 0x2a8
	// Line 396, Address: 0x101bab4, Func Offset: 0x2c4
	// Line 397, Address: 0x101bac8, Func Offset: 0x2d8
	// Line 398, Address: 0x101bafc, Func Offset: 0x30c
	// Line 399, Address: 0x101bb08, Func Offset: 0x318
	// Line 400, Address: 0x101bb18, Func Offset: 0x328
	// Line 401, Address: 0x101bb24, Func Offset: 0x334
	// Line 402, Address: 0x101bb40, Func Offset: 0x350
	// Line 404, Address: 0x101bb5c, Func Offset: 0x36c
	// Line 405, Address: 0x101bb70, Func Offset: 0x380
	// Line 407, Address: 0x101bb7c, Func Offset: 0x38c
	// Line 409, Address: 0x101bb94, Func Offset: 0x3a4
	// Line 410, Address: 0x101bba0, Func Offset: 0x3b0
	// Line 413, Address: 0x101bba8, Func Offset: 0x3b8
	// Line 414, Address: 0x101bbb4, Func Offset: 0x3c4
	// Func End, Address: 0x101bbd4, Func Offset: 0x3e4
}

