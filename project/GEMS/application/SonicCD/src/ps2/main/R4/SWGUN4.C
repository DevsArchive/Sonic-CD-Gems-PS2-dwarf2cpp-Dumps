typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_4)(_anon1*);
typedef void(*type_8)(_anon1*);
typedef void(*type_19)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[4];
typedef void(*type_5)(_anon1*)[3];
typedef _anon0* type_6[1];
typedef unsigned char type_7[6];
typedef void(*type_9)(_anon1*)[5];
typedef short type_10[12];
typedef _anon0* type_11[3];
typedef unsigned char type_12[2];
typedef unsigned char type_13[22];
typedef char type_14[22];
typedef _anon0* type_15[9];
typedef unsigned char type_16[42];
typedef unsigned char* type_17[1];
typedef _anon1 type_18[128];
typedef void(*type_20)(_anon1*)[2];

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
_anon0* swgun4pat[3];
_anon1 actwk[128];
_anon2 pltime;
_anon0 ringsp0;
_anon0 ringsp1;
_anon0 ringsp2;
_anon0 ringsp3;
_anon0 ringsp4;
_anon0 ringsp5;
_anon0 ringsp6;
_anon0 ringsp7;
_anon0 ringsp8;
_anon0* ringpat[9];
unsigned char pchg0[6];
unsigned char* ringchg[1];
short scralim_down;
_anon0 pat00;
_anon0* tensu4pat[1];

void swgun4(_anon1* pActwk);
void swgun4_init(_anon1* pActwk);
void swgun4_move(_anon1* pActwk);
void swgun4_move1(_anon1* pActwk);
void switch_move(_anon1* pActwk);
void hariset(_anon1* pActwk);
void awaset(_anon1* pActwk);
void ring4set(_anon1* pActwk);
void bp1000(_anon1* pActwk);
void ring4(_anon1* pActwk);
void ring4_init(_anon1* pActwk);
void ring4_move(_anon1* pActwk);
void ring4_get(_anon1* pActwk);
void ring4_die(_anon1* pActwk);
void ring4_erase(_anon1* pActwk);
void tensu4(_anon1* pActwk);
void tensu4_init(_anon1* pActwk);
void tensu4_move(_anon1* pActwk);

// 
// Start address: 0x102a8c0
void swgun4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[3];
	// Line 86, Address: 0x102a8c0, Func Offset: 0
	// Line 87, Address: 0x102a8cc, Func Offset: 0xc
	// Line 94, Address: 0x102a8f0, Func Offset: 0x30
	// Line 95, Address: 0x102a92c, Func Offset: 0x6c
	// Line 96, Address: 0x102a938, Func Offset: 0x78
	// Line 97, Address: 0x102a94c, Func Offset: 0x8c
	// Func End, Address: 0x102a95c, Func Offset: 0x9c
}

// 
// Start address: 0x102a960
void swgun4_init(_anon1* pActwk)
{
	_anon1* pNewActwk;
	short* a2;
	short i;
	unsigned char d1;
	short tbl[12];
	// Line 102, Address: 0x102a960, Func Offset: 0
	// Line 107, Address: 0x102a978, Func Offset: 0x18
	// Line 117, Address: 0x102a9ac, Func Offset: 0x4c
	// Line 118, Address: 0x102a9bc, Func Offset: 0x5c
	// Line 119, Address: 0x102a9cc, Func Offset: 0x6c
	// Line 120, Address: 0x102a9d8, Func Offset: 0x78
	// Line 121, Address: 0x102a9e4, Func Offset: 0x84
	// Line 122, Address: 0x102a9f4, Func Offset: 0x94
	// Line 123, Address: 0x102aa00, Func Offset: 0xa0
	// Line 125, Address: 0x102aa0c, Func Offset: 0xac
	// Line 127, Address: 0x102aa20, Func Offset: 0xc0
	// Line 128, Address: 0x102aa30, Func Offset: 0xd0
	// Line 129, Address: 0x102aa40, Func Offset: 0xe0
	// Line 131, Address: 0x102aa7c, Func Offset: 0x11c
	// Line 132, Address: 0x102aa84, Func Offset: 0x124
	// Line 134, Address: 0x102aa90, Func Offset: 0x130
	// Line 136, Address: 0x102aaa4, Func Offset: 0x144
	// Line 138, Address: 0x102aab0, Func Offset: 0x150
	// Line 140, Address: 0x102aac0, Func Offset: 0x160
	// Line 141, Address: 0x102aafc, Func Offset: 0x19c
	// Line 142, Address: 0x102ab04, Func Offset: 0x1a4
	// Line 143, Address: 0x102ab18, Func Offset: 0x1b8
	// Line 144, Address: 0x102ab50, Func Offset: 0x1f0
	// Line 145, Address: 0x102ab88, Func Offset: 0x228
	// Line 147, Address: 0x102ab98, Func Offset: 0x238
	// Line 148, Address: 0x102aba0, Func Offset: 0x240
	// Line 150, Address: 0x102abc0, Func Offset: 0x260
	// Func End, Address: 0x102abdc, Func Offset: 0x27c
}

// 
// Start address: 0x102abe0
void swgun4_move(_anon1* pActwk)
{
	_anon1* a1;
	short d0;
	// Line 155, Address: 0x102abe0, Func Offset: 0
	// Line 159, Address: 0x102abf4, Func Offset: 0x14
	// Line 161, Address: 0x102ac00, Func Offset: 0x20
	// Line 162, Address: 0x102ac28, Func Offset: 0x48
	// Line 163, Address: 0x102ac34, Func Offset: 0x54
	// Line 167, Address: 0x102ac44, Func Offset: 0x64
	// Line 169, Address: 0x102ac58, Func Offset: 0x78
	// Line 170, Address: 0x102ac64, Func Offset: 0x84
	// Line 173, Address: 0x102ac70, Func Offset: 0x90
	// Line 175, Address: 0x102ac98, Func Offset: 0xb8
	// Line 176, Address: 0x102aca8, Func Offset: 0xc8
	// Line 178, Address: 0x102acb0, Func Offset: 0xd0
	// Line 180, Address: 0x102acc0, Func Offset: 0xe0
	// Line 181, Address: 0x102acd0, Func Offset: 0xf0
	// Line 182, Address: 0x102ace4, Func Offset: 0x104
	// Line 183, Address: 0x102acf8, Func Offset: 0x118
	// Line 184, Address: 0x102ad04, Func Offset: 0x124
	// Func End, Address: 0x102ad1c, Func Offset: 0x13c
}

// 
// Start address: 0x102ad20
void swgun4_move1(_anon1* pActwk)
{
	_anon1* a1;
	void(*tbl)(_anon1*)[4];
	// Line 189, Address: 0x102ad20, Func Offset: 0
	// Line 191, Address: 0x102ad30, Func Offset: 0x10
	// Line 199, Address: 0x102ad5c, Func Offset: 0x3c
	// Line 200, Address: 0x102ad84, Func Offset: 0x64
	// Line 201, Address: 0x102ada4, Func Offset: 0x84
	// Func End, Address: 0x102adb8, Func Offset: 0x98
}

// 
// Start address: 0x102adc0
void switch_move(_anon1* pActwk)
{
	_anon1* pPlayerwk;
	_anon1* pActwk_m;
	unsigned short d0;
	unsigned short d1;
	short r;
	unsigned char tbl[42];
	// Line 206, Address: 0x102adc0, Func Offset: 0
	// Line 211, Address: 0x102ade0, Func Offset: 0x20
	// Line 222, Address: 0x102ae14, Func Offset: 0x54
	// Line 224, Address: 0x102ae24, Func Offset: 0x64
	// Line 225, Address: 0x102ae2c, Func Offset: 0x6c
	// Line 226, Address: 0x102ae44, Func Offset: 0x84
	// Line 228, Address: 0x102ae4c, Func Offset: 0x8c
	// Line 229, Address: 0x102ae58, Func Offset: 0x98
	// Line 232, Address: 0x102ae60, Func Offset: 0xa0
	// Line 233, Address: 0x102ae68, Func Offset: 0xa8
	// Line 235, Address: 0x102ae70, Func Offset: 0xb0
	// Line 236, Address: 0x102ae84, Func Offset: 0xc4
	// Line 237, Address: 0x102ae94, Func Offset: 0xd4
	// Line 238, Address: 0x102aebc, Func Offset: 0xfc
	// Line 241, Address: 0x102aef4, Func Offset: 0x134
	// Line 242, Address: 0x102af04, Func Offset: 0x144
	// Line 243, Address: 0x102af14, Func Offset: 0x154
	// Line 244, Address: 0x102af28, Func Offset: 0x168
	// Line 245, Address: 0x102af30, Func Offset: 0x170
	// Line 246, Address: 0x102af4c, Func Offset: 0x18c
	// Line 247, Address: 0x102af54, Func Offset: 0x194
	// Line 248, Address: 0x102af5c, Func Offset: 0x19c
	// Line 250, Address: 0x102af70, Func Offset: 0x1b0
	// Line 254, Address: 0x102af7c, Func Offset: 0x1bc
	// Line 256, Address: 0x102afa8, Func Offset: 0x1e8
	// Line 257, Address: 0x102afb4, Func Offset: 0x1f4
	// Line 258, Address: 0x102afc4, Func Offset: 0x204
	// Line 259, Address: 0x102afd0, Func Offset: 0x210
	// Line 262, Address: 0x102afe0, Func Offset: 0x220
	// Line 264, Address: 0x102b00c, Func Offset: 0x24c
	// Line 265, Address: 0x102b018, Func Offset: 0x258
	// Line 266, Address: 0x102b028, Func Offset: 0x268
	// Line 267, Address: 0x102b030, Func Offset: 0x270
	// Line 269, Address: 0x102b040, Func Offset: 0x280
	// Func End, Address: 0x102b064, Func Offset: 0x2a4
}

// 
// Start address: 0x102b070
void hariset(_anon1* pActwk)
{
	_anon1* pMaster;
	_anon1* pSlave;
	_anon1* pNewActwk;
	// Line 274, Address: 0x102b070, Func Offset: 0
	// Line 279, Address: 0x102b084, Func Offset: 0x14
	// Line 281, Address: 0x102b094, Func Offset: 0x24
	// Line 282, Address: 0x102b0a0, Func Offset: 0x30
	// Line 284, Address: 0x102b0a8, Func Offset: 0x38
	// Line 285, Address: 0x102b0d0, Func Offset: 0x60
	// Line 286, Address: 0x102b0f4, Func Offset: 0x84
	// Line 288, Address: 0x102b100, Func Offset: 0x90
	// Line 290, Address: 0x102b118, Func Offset: 0xa8
	// Line 292, Address: 0x102b12c, Func Offset: 0xbc
	// Line 293, Address: 0x102b138, Func Offset: 0xc8
	// Line 295, Address: 0x102b148, Func Offset: 0xd8
	// Line 296, Address: 0x102b158, Func Offset: 0xe8
	// Line 300, Address: 0x102b168, Func Offset: 0xf8
	// Line 301, Address: 0x102b178, Func Offset: 0x108
	// Func End, Address: 0x102b190, Func Offset: 0x120
}

// 
// Start address: 0x102b190
void awaset(_anon1* pActwk)
{
	_anon1* pMaster;
	_anon1* pSlave;
	_anon1* pNewActwk;
	// Line 306, Address: 0x102b190, Func Offset: 0
	// Line 311, Address: 0x102b1a4, Func Offset: 0x14
	// Line 312, Address: 0x102b1cc, Func Offset: 0x3c
	// Line 313, Address: 0x102b1f0, Func Offset: 0x60
	// Line 315, Address: 0x102b1fc, Func Offset: 0x6c
	// Line 317, Address: 0x102b224, Func Offset: 0x94
	// Line 319, Address: 0x102b230, Func Offset: 0xa0
	// Line 320, Address: 0x102b240, Func Offset: 0xb0
	// Line 322, Address: 0x102b248, Func Offset: 0xb8
	// Line 324, Address: 0x102b270, Func Offset: 0xe0
	// Line 325, Address: 0x102b280, Func Offset: 0xf0
	// Line 327, Address: 0x102b288, Func Offset: 0xf8
	// Line 328, Address: 0x102b298, Func Offset: 0x108
	// Line 330, Address: 0x102b2ac, Func Offset: 0x11c
	// Line 331, Address: 0x102b2b8, Func Offset: 0x128
	// Line 332, Address: 0x102b2c8, Func Offset: 0x138
	// Line 333, Address: 0x102b2d8, Func Offset: 0x148
	// Line 335, Address: 0x102b2e4, Func Offset: 0x154
	// Line 336, Address: 0x102b2f4, Func Offset: 0x164
	// Line 338, Address: 0x102b30c, Func Offset: 0x17c
	// Line 340, Address: 0x102b318, Func Offset: 0x188
	// Func End, Address: 0x102b330, Func Offset: 0x1a0
}

// 
// Start address: 0x102b330
void ring4set(_anon1* pActwk)
{
	_anon1* pMaster;
	_anon1* pNewActwk;
	short d0;
	char tbl[22];
	// Line 345, Address: 0x102b330, Func Offset: 0
	// Line 349, Address: 0x102b344, Func Offset: 0x14
	// Line 357, Address: 0x102b378, Func Offset: 0x48
	// Line 358, Address: 0x102b3a0, Func Offset: 0x70
	// Line 360, Address: 0x102b3ac, Func Offset: 0x7c
	// Line 361, Address: 0x102b3b8, Func Offset: 0x88
	// Line 363, Address: 0x102b3c0, Func Offset: 0x90
	// Line 365, Address: 0x102b3e0, Func Offset: 0xb0
	// Line 366, Address: 0x102b3f0, Func Offset: 0xc0
	// Line 368, Address: 0x102b3f8, Func Offset: 0xc8
	// Line 369, Address: 0x102b408, Func Offset: 0xd8
	// Line 371, Address: 0x102b420, Func Offset: 0xf0
	// Line 372, Address: 0x102b42c, Func Offset: 0xfc
	// Line 375, Address: 0x102b434, Func Offset: 0x104
	// Line 377, Address: 0x102b448, Func Offset: 0x118
	// Line 378, Address: 0x102b454, Func Offset: 0x124
	// Line 379, Address: 0x102b464, Func Offset: 0x134
	// Line 380, Address: 0x102b470, Func Offset: 0x140
	// Line 381, Address: 0x102b478, Func Offset: 0x148
	// Line 382, Address: 0x102b49c, Func Offset: 0x16c
	// Line 383, Address: 0x102b4b0, Func Offset: 0x180
	// Line 385, Address: 0x102b4b8, Func Offset: 0x188
	// Line 386, Address: 0x102b4c8, Func Offset: 0x198
	// Func End, Address: 0x102b4e0, Func Offset: 0x1b0
}

// 
// Start address: 0x102b4e0
void bp1000(_anon1* pActwk)
{
	_anon1* pMaster;
	_anon1* pSlave;
	_anon1* pNewActwk;
	// Line 391, Address: 0x102b4e0, Func Offset: 0
	// Line 396, Address: 0x102b4f4, Func Offset: 0x14
	// Line 398, Address: 0x102b504, Func Offset: 0x24
	// Line 399, Address: 0x102b510, Func Offset: 0x30
	// Line 401, Address: 0x102b518, Func Offset: 0x38
	// Line 402, Address: 0x102b540, Func Offset: 0x60
	// Line 403, Address: 0x102b564, Func Offset: 0x84
	// Line 405, Address: 0x102b56c, Func Offset: 0x8c
	// Line 406, Address: 0x102b578, Func Offset: 0x98
	// Line 408, Address: 0x102b58c, Func Offset: 0xac
	// Line 409, Address: 0x102b598, Func Offset: 0xb8
	// Line 410, Address: 0x102b5a8, Func Offset: 0xc8
	// Line 413, Address: 0x102b5b8, Func Offset: 0xd8
	// Line 414, Address: 0x102b5c8, Func Offset: 0xe8
	// Func End, Address: 0x102b5e0, Func Offset: 0x100
}

// 
// Start address: 0x102b5e0
void ring4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[5];
	// Line 483, Address: 0x102b5e0, Func Offset: 0
	// Line 484, Address: 0x102b5ec, Func Offset: 0xc
	// Line 493, Address: 0x102b618, Func Offset: 0x38
	// Line 494, Address: 0x102b654, Func Offset: 0x74
	// Func End, Address: 0x102b664, Func Offset: 0x84
}

// 
// Start address: 0x102b670
void ring4_init(_anon1* pActwk)
{
	// Line 499, Address: 0x102b670, Func Offset: 0
	// Line 506, Address: 0x102b67c, Func Offset: 0xc
	// Line 507, Address: 0x102b68c, Func Offset: 0x1c
	// Line 508, Address: 0x102b698, Func Offset: 0x28
	// Line 509, Address: 0x102b6a4, Func Offset: 0x34
	// Line 510, Address: 0x102b6b4, Func Offset: 0x44
	// Line 511, Address: 0x102b6c0, Func Offset: 0x50
	// Line 512, Address: 0x102b6d0, Func Offset: 0x60
	// Line 513, Address: 0x102b6dc, Func Offset: 0x6c
	// Line 514, Address: 0x102b6e8, Func Offset: 0x78
	// Line 515, Address: 0x102b6f4, Func Offset: 0x84
	// Line 516, Address: 0x102b700, Func Offset: 0x90
	// Line 517, Address: 0x102b70c, Func Offset: 0x9c
	// Line 518, Address: 0x102b718, Func Offset: 0xa8
	// Line 520, Address: 0x102b724, Func Offset: 0xb4
	// Line 521, Address: 0x102b730, Func Offset: 0xc0
	// Func End, Address: 0x102b740, Func Offset: 0xd0
}

// 
// Start address: 0x102b740
void ring4_move(_anon1* pActwk)
{
	short d0;
	short d1;
	// Line 526, Address: 0x102b740, Func Offset: 0
	// Line 529, Address: 0x102b754, Func Offset: 0x14
	// Line 530, Address: 0x102b760, Func Offset: 0x20
	// Line 532, Address: 0x102b770, Func Offset: 0x30
	// Line 534, Address: 0x102b780, Func Offset: 0x40
	// Line 535, Address: 0x102b790, Func Offset: 0x50
	// Line 540, Address: 0x102b7a0, Func Offset: 0x60
	// Line 541, Address: 0x102b7b4, Func Offset: 0x74
	// Line 543, Address: 0x102b7c4, Func Offset: 0x84
	// Line 544, Address: 0x102b7d4, Func Offset: 0x94
	// Line 545, Address: 0x102b7e4, Func Offset: 0xa4
	// Line 546, Address: 0x102b7f0, Func Offset: 0xb0
	// Line 547, Address: 0x102b800, Func Offset: 0xc0
	// Line 550, Address: 0x102b810, Func Offset: 0xd0
	// Line 551, Address: 0x102b820, Func Offset: 0xe0
	// Line 552, Address: 0x102b834, Func Offset: 0xf4
	// Line 553, Address: 0x102b83c, Func Offset: 0xfc
	// Line 554, Address: 0x102b848, Func Offset: 0x108
	// Line 555, Address: 0x102b854, Func Offset: 0x114
	// Line 556, Address: 0x102b860, Func Offset: 0x120
	// Line 558, Address: 0x102b870, Func Offset: 0x130
	// Line 559, Address: 0x102b880, Func Offset: 0x140
	// Line 561, Address: 0x102b894, Func Offset: 0x154
	// Line 562, Address: 0x102b8a0, Func Offset: 0x160
	// Line 564, Address: 0x102b8a8, Func Offset: 0x168
	// Line 565, Address: 0x102b8b8, Func Offset: 0x178
	// Line 566, Address: 0x102b8c4, Func Offset: 0x184
	// Line 568, Address: 0x102b8e8, Func Offset: 0x1a8
	// Line 569, Address: 0x102b8f4, Func Offset: 0x1b4
	// Line 571, Address: 0x102b8fc, Func Offset: 0x1bc
	// Line 572, Address: 0x102b908, Func Offset: 0x1c8
	// Func End, Address: 0x102b920, Func Offset: 0x1e0
}

// 
// Start address: 0x102b920
void ring4_get(_anon1* pActwk)
{
	// Line 577, Address: 0x102b920, Func Offset: 0
	// Line 578, Address: 0x102b92c, Func Offset: 0xc
	// Line 579, Address: 0x102b93c, Func Offset: 0x1c
	// Line 580, Address: 0x102b944, Func Offset: 0x24
	// Line 581, Address: 0x102b950, Func Offset: 0x30
	// Line 583, Address: 0x102b958, Func Offset: 0x38
	// Line 584, Address: 0x102b964, Func Offset: 0x44
	// Func End, Address: 0x102b974, Func Offset: 0x54
}

// 
// Start address: 0x102b980
void ring4_die(_anon1* pActwk)
{
	// Line 589, Address: 0x102b980, Func Offset: 0
	// Line 590, Address: 0x102b98c, Func Offset: 0xc
	// Line 591, Address: 0x102b9a0, Func Offset: 0x20
	// Line 592, Address: 0x102b9ac, Func Offset: 0x2c
	// Func End, Address: 0x102b9bc, Func Offset: 0x3c
}

// 
// Start address: 0x102b9c0
void ring4_erase(_anon1* pActwk)
{
	// Line 597, Address: 0x102b9c0, Func Offset: 0
	// Line 598, Address: 0x102b9cc, Func Offset: 0xc
	// Line 599, Address: 0x102b9d8, Func Offset: 0x18
	// Func End, Address: 0x102b9e8, Func Offset: 0x28
}

// 
// Start address: 0x102b9f0
void tensu4(_anon1* pActwk)
{
	void(*tbl)(_anon1*)[2];
	// Line 626, Address: 0x102b9f0, Func Offset: 0
	// Line 627, Address: 0x102b9fc, Func Offset: 0xc
	// Line 633, Address: 0x102ba18, Func Offset: 0x28
	// Line 634, Address: 0x102ba54, Func Offset: 0x64
	// Line 635, Address: 0x102ba60, Func Offset: 0x70
	// Func End, Address: 0x102ba70, Func Offset: 0x80
}

// 
// Start address: 0x102ba70
void tensu4_init(_anon1* pActwk)
{
	// Line 640, Address: 0x102ba70, Func Offset: 0
	// Line 641, Address: 0x102ba7c, Func Offset: 0xc
	// Line 642, Address: 0x102ba8c, Func Offset: 0x1c
	// Line 643, Address: 0x102ba9c, Func Offset: 0x2c
	// Line 644, Address: 0x102baa8, Func Offset: 0x38
	// Line 645, Address: 0x102bab4, Func Offset: 0x44
	// Line 646, Address: 0x102bac0, Func Offset: 0x50
	// Line 647, Address: 0x102bacc, Func Offset: 0x5c
	// Line 649, Address: 0x102bad8, Func Offset: 0x68
	// Line 650, Address: 0x102bae4, Func Offset: 0x74
	// Func End, Address: 0x102baf4, Func Offset: 0x84
}

// 
// Start address: 0x102bb00
void tensu4_move(_anon1* pActwk)
{
	// Line 655, Address: 0x102bb00, Func Offset: 0
	// Line 656, Address: 0x102bb0c, Func Offset: 0xc
	// Line 658, Address: 0x102bb24, Func Offset: 0x24
	// Line 659, Address: 0x102bb30, Func Offset: 0x30
	// Line 662, Address: 0x102bb38, Func Offset: 0x38
	// Line 663, Address: 0x102bb44, Func Offset: 0x44
	// Line 665, Address: 0x102bb54, Func Offset: 0x54
	// Func End, Address: 0x102bb64, Func Offset: 0x64
}

