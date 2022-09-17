typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;

typedef void(*type_5)(void*, unsigned char, int);

typedef _anon0 type_0[20];
typedef _anon0 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef unsigned char type_4[0];
typedef _anon3 type_6[1];
typedef _anon4 type_7[1];
typedef _anon1 type_8[128];
typedef unsigned char type_9[766];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon2** patbase;
	_anon5 xposi;
	_anon5 yposi;
	_anon8 xspeed;
	_anon8 yspeed;
	_anon8 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon8 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon8 direc;
	_anon8 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon3
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
};

struct _anon4
{
	unsigned short x;
	unsigned short y;
	unsigned char a;
	unsigned char b;
};

union _anon5
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct _anon6
{
	short l;
	short h;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon8
{
	short w;
	_anon9 b;
};

struct _anon9
{
	char l;
	char h;
};

void(*sMemSet)(void*, unsigned char, int);
unsigned char flagwork[766];
unsigned char flagworkcnt;
unsigned char flagworkcnt2;
_anon8 actset_rno;
short asetposi;
_anon3* asetadr2;
_anon3* pAsetadr_w;
_anon3* asetadr;
_anon5 scra_h_posit;
_anon4* asetadrz;
_anon4* asetadrz2;
_anon4* pAsetadrz_w;
_anon4 asettblz[1];
_anon3 asettbl[1];
_anon3* pAsetadr_dummy;
unsigned char dummyarea[0];
unsigned char time_flag;
_anon1 actwk[128];
char time_item;

void flagwkclr();
void actsetchk();
void actsetinit();
void actset();
int tm_setchk(unsigned char cnt, unsigned short* pIndex);
int actnoset(unsigned char cnt, unsigned short* pIndex);
int actwkchk(_anon1** ppActwk);
int actwkchk2(_anon1* pActwk, _anon1** ppNewActwk);
int frameout_s(_anon1* pActwk);
int frameout_s00(_anon1* pActwk, short xposi);
int frameout_s0(_anon1* pActwk);

// 
// Start address: 0x1000000
void flagwkclr()
{
	// Line 38, Address: 0x1000000, Func Offset: 0
	// Line 39, Address: 0x1000008, Func Offset: 0x8
	// Line 40, Address: 0x1000020, Func Offset: 0x20
	// Line 41, Address: 0x1000040, Func Offset: 0x40
	// Func End, Address: 0x1000050, Func Offset: 0x50
}

// 
// Start address: 0x1000050
void actsetchk()
{
	// Line 47, Address: 0x1000050, Func Offset: 0
	// Line 48, Address: 0x1000058, Func Offset: 0x8
	// Line 49, Address: 0x1000080, Func Offset: 0x30
	// Line 50, Address: 0x1000088, Func Offset: 0x38
	// Func End, Address: 0x1000098, Func Offset: 0x48
}

// 
// Start address: 0x10000a0
void actsetinit()
{
	short scra_h;
	unsigned char cnt;
	// Line 56, Address: 0x10000a0, Func Offset: 0
	// Line 60, Address: 0x10000b0, Func Offset: 0x10
	// Line 63, Address: 0x10000c4, Func Offset: 0x24
	// Line 64, Address: 0x10000d4, Func Offset: 0x34
	// Line 65, Address: 0x10000f4, Func Offset: 0x54
	// Line 67, Address: 0x1000114, Func Offset: 0x74
	// Line 68, Address: 0x100012c, Func Offset: 0x8c
	// Line 69, Address: 0x1000130, Func Offset: 0x90
	// Line 71, Address: 0x1000140, Func Offset: 0xa0
	// Line 72, Address: 0x1000168, Func Offset: 0xc8
	// Line 73, Address: 0x100016c, Func Offset: 0xcc
	// Line 77, Address: 0x100017c, Func Offset: 0xdc
	// Line 78, Address: 0x10001a0, Func Offset: 0x100
	// Line 80, Address: 0x10001bc, Func Offset: 0x11c
	// Line 81, Address: 0x10001c8, Func Offset: 0x128
	// Line 83, Address: 0x10001dc, Func Offset: 0x13c
	// Line 84, Address: 0x10001f0, Func Offset: 0x150
	// Line 85, Address: 0x10001f8, Func Offset: 0x158
	// Line 87, Address: 0x1000208, Func Offset: 0x168
	// Line 88, Address: 0x1000218, Func Offset: 0x178
	// Line 90, Address: 0x100022c, Func Offset: 0x18c
	// Line 93, Address: 0x1000238, Func Offset: 0x198
	// Line 94, Address: 0x100025c, Func Offset: 0x1bc
	// Line 96, Address: 0x1000278, Func Offset: 0x1d8
	// Line 98, Address: 0x100028c, Func Offset: 0x1ec
	// Line 99, Address: 0x10002a0, Func Offset: 0x200
	// Line 101, Address: 0x10002a8, Func Offset: 0x208
	// Line 102, Address: 0x10002b8, Func Offset: 0x218
	// Line 104, Address: 0x10002c4, Func Offset: 0x224
	// Line 105, Address: 0x10002cc, Func Offset: 0x22c
	// Func End, Address: 0x10002e4, Func Offset: 0x244
}

// 
// Start address: 0x10002f0
void actset()
{
	short scra_h;
	unsigned short index;
	unsigned char cnt;
	// Line 111, Address: 0x10002f0, Func Offset: 0
	// Line 117, Address: 0x1000300, Func Offset: 0x10
	// Line 118, Address: 0x1000304, Func Offset: 0x14
	// Line 119, Address: 0x100032c, Func Offset: 0x3c
	// Line 122, Address: 0x100034c, Func Offset: 0x5c
	// Line 124, Address: 0x1000370, Func Offset: 0x80
	// Line 125, Address: 0x1000378, Func Offset: 0x88
	// Line 126, Address: 0x1000388, Func Offset: 0x98
	// Line 127, Address: 0x1000394, Func Offset: 0xa4
	// Line 148, Address: 0x10003a4, Func Offset: 0xb4
	// Line 149, Address: 0x10003d4, Func Offset: 0xe4
	// Line 150, Address: 0x10003e8, Func Offset: 0xf8
	// Line 152, Address: 0x1000404, Func Offset: 0x114
	// Line 153, Address: 0x1000418, Func Offset: 0x128
	// Line 155, Address: 0x1000424, Func Offset: 0x134
	// Line 162, Address: 0x100043c, Func Offset: 0x14c
	// Line 163, Address: 0x1000450, Func Offset: 0x160
	// Line 164, Address: 0x1000458, Func Offset: 0x168
	// Line 166, Address: 0x1000474, Func Offset: 0x184
	// Line 167, Address: 0x1000488, Func Offset: 0x198
	// Line 169, Address: 0x10004a8, Func Offset: 0x1b8
	// Line 171, Address: 0x10004bc, Func Offset: 0x1cc
	// Line 173, Address: 0x10004cc, Func Offset: 0x1dc
	// Line 174, Address: 0x10004dc, Func Offset: 0x1ec
	// Line 187, Address: 0x10004e8, Func Offset: 0x1f8
	// Line 188, Address: 0x1000518, Func Offset: 0x228
	// Line 190, Address: 0x1000534, Func Offset: 0x244
	// Line 192, Address: 0x1000548, Func Offset: 0x258
	// Line 193, Address: 0x100055c, Func Offset: 0x26c
	// Line 194, Address: 0x1000564, Func Offset: 0x274
	// Line 195, Address: 0x1000574, Func Offset: 0x284
	// Line 199, Address: 0x100057c, Func Offset: 0x28c
	// Line 200, Address: 0x1000584, Func Offset: 0x294
	// Line 201, Address: 0x1000594, Func Offset: 0x2a4
	// Line 214, Address: 0x10005a0, Func Offset: 0x2b0
	// Line 215, Address: 0x10005c4, Func Offset: 0x2d4
	// Line 217, Address: 0x10005e0, Func Offset: 0x2f0
	// Line 218, Address: 0x10005ec, Func Offset: 0x2fc
	// Line 220, Address: 0x1000600, Func Offset: 0x310
	// Line 228, Address: 0x1000618, Func Offset: 0x328
	// Line 230, Address: 0x1000634, Func Offset: 0x344
	// Line 231, Address: 0x1000648, Func Offset: 0x358
	// Line 234, Address: 0x1000668, Func Offset: 0x378
	// Line 236, Address: 0x1000678, Func Offset: 0x388
	// Line 237, Address: 0x1000688, Func Offset: 0x398
	// Line 238, Address: 0x1000694, Func Offset: 0x3a4
	// Line 252, Address: 0x10006a4, Func Offset: 0x3b4
	// Line 253, Address: 0x10006c8, Func Offset: 0x3d8
	// Line 255, Address: 0x10006e4, Func Offset: 0x3f4
	// Line 257, Address: 0x10006f8, Func Offset: 0x408
	// Line 258, Address: 0x100070c, Func Offset: 0x41c
	// Line 260, Address: 0x1000714, Func Offset: 0x424
	// Line 262, Address: 0x1000724, Func Offset: 0x434
	// Func End, Address: 0x100073c, Func Offset: 0x44c
}

// 
// Start address: 0x1000740
int tm_setchk(unsigned char cnt, unsigned short* pIndex)
{
	unsigned short tflag;
	unsigned char time;
	// Line 272, Address: 0x1000740, Func Offset: 0
	// Line 276, Address: 0x1000760, Func Offset: 0x20
	// Line 277, Address: 0x1000778, Func Offset: 0x38
	// Line 278, Address: 0x10007a0, Func Offset: 0x60
	// Line 279, Address: 0x10007b0, Func Offset: 0x70
	// Line 280, Address: 0x10007c4, Func Offset: 0x84
	// Line 282, Address: 0x10007f0, Func Offset: 0xb0
	// Line 283, Address: 0x100081c, Func Offset: 0xdc
	// Line 284, Address: 0x1000848, Func Offset: 0x108
	// Line 287, Address: 0x1000874, Func Offset: 0x134
	// Line 289, Address: 0x1000890, Func Offset: 0x150
	// Func End, Address: 0x10008b0, Func Offset: 0x170
}

// 
// Start address: 0x10008b0
int actnoset(unsigned char cnt, unsigned short* pIndex)
{
	_anon1* pActwk;
	short zflag;
	unsigned char revflg;
	unsigned char an;
	// Line 298, Address: 0x10008b0, Func Offset: 0
	// Line 304, Address: 0x10008d0, Func Offset: 0x20
	// Line 306, Address: 0x10008e8, Func Offset: 0x38
	// Line 308, Address: 0x1000904, Func Offset: 0x54
	// Line 309, Address: 0x1000950, Func Offset: 0xa0
	// Line 310, Address: 0x1000974, Func Offset: 0xc4
	// Line 312, Address: 0x1000984, Func Offset: 0xd4
	// Line 313, Address: 0x1000998, Func Offset: 0xe8
	// Line 319, Address: 0x10009a4, Func Offset: 0xf4
	// Line 320, Address: 0x10009b8, Func Offset: 0x108
	// Line 323, Address: 0x10009c4, Func Offset: 0x114
	// Line 325, Address: 0x10009e4, Func Offset: 0x134
	// Line 326, Address: 0x10009f8, Func Offset: 0x148
	// Line 327, Address: 0x1000a1c, Func Offset: 0x16c
	// Line 328, Address: 0x1000a44, Func Offset: 0x194
	// Line 329, Address: 0x1000a4c, Func Offset: 0x19c
	// Line 330, Address: 0x1000a54, Func Offset: 0x1a4
	// Line 331, Address: 0x1000a64, Func Offset: 0x1b4
	// Line 333, Address: 0x1000a74, Func Offset: 0x1c4
	// Line 334, Address: 0x1000a7c, Func Offset: 0x1cc
	// Line 336, Address: 0x1000a88, Func Offset: 0x1d8
	// Line 361, Address: 0x1000a90, Func Offset: 0x1e0
	// Line 362, Address: 0x1000aa4, Func Offset: 0x1f4
	// Line 363, Address: 0x1000ab8, Func Offset: 0x208
	// Line 371, Address: 0x1000acc, Func Offset: 0x21c
	// Line 372, Address: 0x1000ad0, Func Offset: 0x220
	// Func End, Address: 0x1000af0, Func Offset: 0x240
}

// 
// Start address: 0x1000af0
int actwkchk(_anon1** ppActwk)
{
	short i;
	_anon1* pActwk;
	// Line 380, Address: 0x1000af0, Func Offset: 0
	// Line 384, Address: 0x1000b00, Func Offset: 0x10
	// Line 385, Address: 0x1000b08, Func Offset: 0x18
	// Line 388, Address: 0x1000b14, Func Offset: 0x24
	// Line 390, Address: 0x1000b24, Func Offset: 0x34
	// Line 391, Address: 0x1000b2c, Func Offset: 0x3c
	// Line 393, Address: 0x1000b38, Func Offset: 0x48
	// Line 394, Address: 0x1000b5c, Func Offset: 0x6c
	// Line 395, Address: 0x1000b60, Func Offset: 0x70
	// Func End, Address: 0x1000b74, Func Offset: 0x84
}

// 
// Start address: 0x1000b80
int actwkchk2(_anon1* pActwk, _anon1** ppNewActwk)
{
	_anon1* pNextActwk;
	_anon1* pLastActwk;
	// Line 403, Address: 0x1000b80, Func Offset: 0
	// Line 408, Address: 0x1000b94, Func Offset: 0x14
	// Line 409, Address: 0x1000b9c, Func Offset: 0x1c
	// Line 413, Address: 0x1000ba4, Func Offset: 0x24
	// Line 414, Address: 0x1000bb0, Func Offset: 0x30
	// Line 416, Address: 0x1000bc0, Func Offset: 0x40
	// Line 417, Address: 0x1000bc8, Func Offset: 0x48
	// Line 419, Address: 0x1000bd4, Func Offset: 0x54
	// Line 420, Address: 0x1000bd8, Func Offset: 0x58
	// Line 421, Address: 0x1000be0, Func Offset: 0x60
	// Line 422, Address: 0x1000be4, Func Offset: 0x64
	// Func End, Address: 0x1000bf8, Func Offset: 0x78
}

// 
// Start address: 0x1000c00
int frameout_s(_anon1* pActwk)
{
	// Line 430, Address: 0x1000c00, Func Offset: 0
	// Line 431, Address: 0x1000c0c, Func Offset: 0xc
	// Line 432, Address: 0x1000c20, Func Offset: 0x20
	// Func End, Address: 0x1000c30, Func Offset: 0x30
}

// 
// Start address: 0x1000c30
int frameout_s00(_anon1* pActwk, short xposi)
{
	short scra_h;
	unsigned short index;
	_anon8 tflag;
	short zflag;
	// Line 441, Address: 0x1000c30, Func Offset: 0
	// Line 447, Address: 0x1000c50, Func Offset: 0x20
	// Line 449, Address: 0x1000c68, Func Offset: 0x38
	// Line 453, Address: 0x1000c8c, Func Offset: 0x5c
	// Line 454, Address: 0x1000c9c, Func Offset: 0x6c
	// Line 455, Address: 0x1000cac, Func Offset: 0x7c
	// Line 456, Address: 0x1000cb8, Func Offset: 0x88
	// Line 457, Address: 0x1000cc8, Func Offset: 0x98
	// Line 458, Address: 0x1000cd4, Func Offset: 0xa4
	// Line 460, Address: 0x1000cec, Func Offset: 0xbc
	// Line 464, Address: 0x1000d10, Func Offset: 0xe0
	// Line 465, Address: 0x1000d20, Func Offset: 0xf0
	// Line 467, Address: 0x1000d28, Func Offset: 0xf8
	// Line 468, Address: 0x1000d34, Func Offset: 0x104
	// Line 469, Address: 0x1000d38, Func Offset: 0x108
	// Line 470, Address: 0x1000d44, Func Offset: 0x114
	// Line 471, Address: 0x1000d7c, Func Offset: 0x14c
	// Line 472, Address: 0x1000d8c, Func Offset: 0x15c
	// Line 474, Address: 0x1000d9c, Func Offset: 0x16c
	// Line 475, Address: 0x1000dcc, Func Offset: 0x19c
	// Line 476, Address: 0x1000dec, Func Offset: 0x1bc
	// Line 478, Address: 0x1000e0c, Func Offset: 0x1dc
	// Line 479, Address: 0x1000e1c, Func Offset: 0x1ec
	// Line 481, Address: 0x1000e38, Func Offset: 0x208
	// Line 482, Address: 0x1000e44, Func Offset: 0x214
	// Line 483, Address: 0x1000e48, Func Offset: 0x218
	// Func End, Address: 0x1000e68, Func Offset: 0x238
}

// 
// Start address: 0x1000e70
int frameout_s0(_anon1* pActwk)
{
	unsigned short index;
	_anon8 tflag;
	short zflag;
	// Line 491, Address: 0x1000e70, Func Offset: 0
	// Line 496, Address: 0x1000e88, Func Offset: 0x18
	// Line 497, Address: 0x1000e98, Func Offset: 0x28
	// Line 499, Address: 0x1000ea0, Func Offset: 0x30
	// Line 500, Address: 0x1000eac, Func Offset: 0x3c
	// Line 501, Address: 0x1000eb0, Func Offset: 0x40
	// Line 502, Address: 0x1000ebc, Func Offset: 0x4c
	// Line 503, Address: 0x1000ef4, Func Offset: 0x84
	// Line 504, Address: 0x1000f04, Func Offset: 0x94
	// Line 506, Address: 0x1000f14, Func Offset: 0xa4
	// Line 507, Address: 0x1000f44, Func Offset: 0xd4
	// Line 508, Address: 0x1000f64, Func Offset: 0xf4
	// Line 510, Address: 0x1000f84, Func Offset: 0x114
	// Line 511, Address: 0x1000f94, Func Offset: 0x124
	// Line 513, Address: 0x1000fb0, Func Offset: 0x140
	// Line 514, Address: 0x1000fbc, Func Offset: 0x14c
	// Line 515, Address: 0x1000fc0, Func Offset: 0x150
	// Func End, Address: 0x1000fdc, Func Offset: 0x16c
}

