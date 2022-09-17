typedef struct _anon0;
typedef struct tagPALETTEENTRY;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[64];
typedef tagPALETTEENTRY type_2[4];
typedef tagPALETTEENTRY type_3[4][3];
typedef unsigned char type_4[7];
typedef unsigned char type_5[7];
typedef _anon0 type_6[6];
typedef tagPALETTEENTRY type_7[48];
typedef tagPALETTEENTRY type_8[64];
typedef tagPALETTEENTRY type_9[4];
typedef tagPALETTEENTRY type_10[4][3];
typedef tagPALETTEENTRY type_11[16];

struct _anon0
{
	tagPALETTEENTRY* PeSrc;
	short offset;
	short cnt;
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

union _anon1
{
	short w;
	_anon2 b;
};

struct _anon2
{
	char l;
	char h;
};

tagPALETTEENTRY clst1_1c0[4][3];
tagPALETTEENTRY clst1_1c1[4][3];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone1colorc[48];
tagPALETTEENTRY zone1colboss1[16];
_anon0 colortbl[6];
unsigned char clchgcnt[7];
tagPALETTEENTRY* lpcolorwk;
unsigned char clchgtim[7];
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
_anon1 stageno;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl);
void fadein0();
int fadein0_new();
void fadein1();
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
void fadeout();
int fadeout_new();
void fadeout1();
void fadeout2(tagPALETTEENTRY* lpPeDest);
void flashin();
int flashin_new();
void flashin1();
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
void flashout();
int flashout_new();
void flashout1();
void flashout2(tagPALETTEENTRY* lpPeDest);
void colorset(int ColorNo);
void colorset2(int ColorNo);
void colorset3(int ColorNo);
void colorset00(int ColorNo, int WorkOffs);
int FadeProc();

// 
// Start address: 0x1021080
void clchgctr()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 94, Address: 0x1021080, Func Offset: 0
	// Line 98, Address: 0x1021090, Func Offset: 0x10
	// Line 99, Address: 0x10210a4, Func Offset: 0x24
	// Line 100, Address: 0x10210bc, Func Offset: 0x3c
	// Line 101, Address: 0x10210c8, Func Offset: 0x48
	// Line 102, Address: 0x10210e0, Func Offset: 0x60
	// Line 103, Address: 0x10210e8, Func Offset: 0x68
	// Line 105, Address: 0x10210f0, Func Offset: 0x70
	// Line 108, Address: 0x1021104, Func Offset: 0x84
	// Line 109, Address: 0x1021110, Func Offset: 0x90
	// Line 110, Address: 0x102112c, Func Offset: 0xac
	// Line 111, Address: 0x1021138, Func Offset: 0xb8
	// Line 112, Address: 0x1021168, Func Offset: 0xe8
	// Line 114, Address: 0x1021178, Func Offset: 0xf8
	// Line 115, Address: 0x102118c, Func Offset: 0x10c
	// Line 116, Address: 0x10211a4, Func Offset: 0x124
	// Line 117, Address: 0x10211b0, Func Offset: 0x130
	// Line 118, Address: 0x10211c8, Func Offset: 0x148
	// Line 119, Address: 0x10211d0, Func Offset: 0x150
	// Line 121, Address: 0x10211d8, Func Offset: 0x158
	// Line 124, Address: 0x10211ec, Func Offset: 0x16c
	// Line 125, Address: 0x10211f8, Func Offset: 0x178
	// Line 126, Address: 0x1021214, Func Offset: 0x194
	// Line 127, Address: 0x1021220, Func Offset: 0x1a0
	// Line 128, Address: 0x1021250, Func Offset: 0x1d0
	// Line 129, Address: 0x1021260, Func Offset: 0x1e0
	// Func End, Address: 0x1021278, Func Offset: 0x1f8
}

// 
// Start address: 0x1021280
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 142, Address: 0x1021280, Func Offset: 0
	// Line 145, Address: 0x1021298, Func Offset: 0x18
	// Line 146, Address: 0x10212ac, Func Offset: 0x2c
	// Line 148, Address: 0x10212cc, Func Offset: 0x4c
	// Line 149, Address: 0x10212f0, Func Offset: 0x70
	// Line 150, Address: 0x1021304, Func Offset: 0x84
	// Line 152, Address: 0x1021330, Func Offset: 0xb0
	// Line 155, Address: 0x1021338, Func Offset: 0xb8
	// Line 156, Address: 0x1021354, Func Offset: 0xd4
	// Line 157, Address: 0x1021364, Func Offset: 0xe4
	// Line 159, Address: 0x102139c, Func Offset: 0x11c
	// Func End, Address: 0x10213ac, Func Offset: 0x12c
}

// 
// Start address: 0x10213b0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 162, Address: 0x10213b0, Func Offset: 0
	// Line 166, Address: 0x10213bc, Func Offset: 0xc
	// Line 168, Address: 0x10213f0, Func Offset: 0x40
	// Line 169, Address: 0x10213fc, Func Offset: 0x4c
	// Line 170, Address: 0x1021400, Func Offset: 0x50
	// Line 171, Address: 0x1021404, Func Offset: 0x54
	// Line 172, Address: 0x1021408, Func Offset: 0x58
	// Line 173, Address: 0x1021410, Func Offset: 0x60
	// Line 174, Address: 0x1021414, Func Offset: 0x64
	// Line 175, Address: 0x1021430, Func Offset: 0x80
	// Line 176, Address: 0x1021438, Func Offset: 0x88
	// Line 178, Address: 0x1021448, Func Offset: 0x98
	// Func End, Address: 0x102145c, Func Offset: 0xac
}

// 
// Start address: 0x1021460
int fadein0_new()
{
	// Line 182, Address: 0x1021460, Func Offset: 0
	// Line 184, Address: 0x1021468, Func Offset: 0x8
	// Line 186, Address: 0x1021474, Func Offset: 0x14
	// Line 189, Address: 0x102147c, Func Offset: 0x1c
	// Line 190, Address: 0x102149c, Func Offset: 0x3c
	// Line 191, Address: 0x10214a4, Func Offset: 0x44
	// Line 193, Address: 0x10214b0, Func Offset: 0x50
	// Line 194, Address: 0x10214b4, Func Offset: 0x54
	// Func End, Address: 0x10214c4, Func Offset: 0x64
}

// 
// Start address: 0x10214d0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 198, Address: 0x10214d0, Func Offset: 0
	// Line 202, Address: 0x10214e4, Func Offset: 0x14
	// Line 203, Address: 0x1021518, Func Offset: 0x48
	// Line 205, Address: 0x102154c, Func Offset: 0x7c
	// Line 206, Address: 0x1021558, Func Offset: 0x88
	// Line 207, Address: 0x1021568, Func Offset: 0x98
	// Line 208, Address: 0x102156c, Func Offset: 0x9c
	// Line 209, Address: 0x1021570, Func Offset: 0xa0
	// Line 210, Address: 0x102158c, Func Offset: 0xbc
	// Line 212, Address: 0x10215a8, Func Offset: 0xd8
	// Line 213, Address: 0x10215dc, Func Offset: 0x10c
	// Line 215, Address: 0x1021610, Func Offset: 0x140
	// Line 216, Address: 0x102161c, Func Offset: 0x14c
	// Line 217, Address: 0x102162c, Func Offset: 0x15c
	// Line 218, Address: 0x1021630, Func Offset: 0x160
	// Line 219, Address: 0x1021634, Func Offset: 0x164
	// Line 223, Address: 0x1021650, Func Offset: 0x180
	// Func End, Address: 0x102166c, Func Offset: 0x19c
}

// 
// Start address: 0x1021670
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 227, Address: 0x1021670, Func Offset: 0
	// Line 228, Address: 0x102167c, Func Offset: 0xc
	// Line 231, Address: 0x10216dc, Func Offset: 0x6c
	// Line 232, Address: 0x1021700, Func Offset: 0x90
	// Line 233, Address: 0x1021710, Func Offset: 0xa0
	// Line 234, Address: 0x1021718, Func Offset: 0xa8
	// Line 235, Address: 0x102173c, Func Offset: 0xcc
	// Line 236, Address: 0x102174c, Func Offset: 0xdc
	// Line 237, Address: 0x1021754, Func Offset: 0xe4
	// Line 238, Address: 0x1021778, Func Offset: 0x108
	// Line 242, Address: 0x102178c, Func Offset: 0x11c
	// Func End, Address: 0x1021798, Func Offset: 0x128
}

// 
// Start address: 0x10217a0
void fadeout()
{
	// Line 246, Address: 0x10217a0, Func Offset: 0
	// Line 247, Address: 0x10217a8, Func Offset: 0x8
	// Line 249, Address: 0x10217b4, Func Offset: 0x14
	// Line 250, Address: 0x10217bc, Func Offset: 0x1c
	// Line 252, Address: 0x10217cc, Func Offset: 0x2c
	// Func End, Address: 0x10217d4, Func Offset: 0x34
}

// 
// Start address: 0x10217e0
int fadeout_new()
{
	// Line 256, Address: 0x10217e0, Func Offset: 0
	// Line 258, Address: 0x10217e8, Func Offset: 0x8
	// Line 260, Address: 0x10217f4, Func Offset: 0x14
	// Line 263, Address: 0x10217fc, Func Offset: 0x1c
	// Line 264, Address: 0x102181c, Func Offset: 0x3c
	// Line 265, Address: 0x1021824, Func Offset: 0x44
	// Line 267, Address: 0x1021830, Func Offset: 0x50
	// Line 268, Address: 0x1021834, Func Offset: 0x54
	// Func End, Address: 0x1021844, Func Offset: 0x64
}

// 
// Start address: 0x1021850
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 271, Address: 0x1021850, Func Offset: 0
	// Line 275, Address: 0x1021860, Func Offset: 0x10
	// Line 277, Address: 0x1021894, Func Offset: 0x44
	// Line 278, Address: 0x10218a0, Func Offset: 0x50
	// Line 279, Address: 0x10218ac, Func Offset: 0x5c
	// Line 280, Address: 0x10218b0, Func Offset: 0x60
	// Line 281, Address: 0x10218cc, Func Offset: 0x7c
	// Line 283, Address: 0x1021900, Func Offset: 0xb0
	// Line 284, Address: 0x102190c, Func Offset: 0xbc
	// Line 285, Address: 0x1021918, Func Offset: 0xc8
	// Line 286, Address: 0x102191c, Func Offset: 0xcc
	// Line 289, Address: 0x1021938, Func Offset: 0xe8
	// Func End, Address: 0x1021950, Func Offset: 0x100
}

// 
// Start address: 0x1021950
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 292, Address: 0x1021950, Func Offset: 0
	// Line 293, Address: 0x1021958, Func Offset: 0x8
	// Line 294, Address: 0x1021968, Func Offset: 0x18
	// Line 295, Address: 0x102197c, Func Offset: 0x2c
	// Line 296, Address: 0x1021984, Func Offset: 0x34
	// Line 297, Address: 0x1021994, Func Offset: 0x44
	// Line 298, Address: 0x10219a4, Func Offset: 0x54
	// Line 299, Address: 0x10219ac, Func Offset: 0x5c
	// Line 300, Address: 0x10219bc, Func Offset: 0x6c
	// Line 303, Address: 0x10219cc, Func Offset: 0x7c
	// Func End, Address: 0x10219d8, Func Offset: 0x88
}

// 
// Start address: 0x10219e0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 308, Address: 0x10219e0, Func Offset: 0
	// Line 312, Address: 0x10219ec, Func Offset: 0xc
	// Line 313, Address: 0x10219f4, Func Offset: 0x14
	// Line 315, Address: 0x1021a00, Func Offset: 0x20
	// Line 317, Address: 0x1021a34, Func Offset: 0x54
	// Line 318, Address: 0x1021a40, Func Offset: 0x60
	// Line 319, Address: 0x1021a48, Func Offset: 0x68
	// Line 320, Address: 0x1021a50, Func Offset: 0x70
	// Line 321, Address: 0x1021a58, Func Offset: 0x78
	// Line 322, Address: 0x1021a60, Func Offset: 0x80
	// Line 323, Address: 0x1021a64, Func Offset: 0x84
	// Line 324, Address: 0x1021a80, Func Offset: 0xa0
	// Line 325, Address: 0x1021a88, Func Offset: 0xa8
	// Line 327, Address: 0x1021a98, Func Offset: 0xb8
	// Func End, Address: 0x1021aac, Func Offset: 0xcc
}

// 
// Start address: 0x1021ab0
int flashin_new()
{
	// Line 329, Address: 0x1021ab0, Func Offset: 0
	// Line 331, Address: 0x1021ab8, Func Offset: 0x8
	// Line 333, Address: 0x1021ac4, Func Offset: 0x14
	// Line 336, Address: 0x1021acc, Func Offset: 0x1c
	// Line 337, Address: 0x1021aec, Func Offset: 0x3c
	// Line 338, Address: 0x1021af4, Func Offset: 0x44
	// Line 340, Address: 0x1021b00, Func Offset: 0x50
	// Line 341, Address: 0x1021b04, Func Offset: 0x54
	// Func End, Address: 0x1021b14, Func Offset: 0x64
}

// 
// Start address: 0x1021b20
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 343, Address: 0x1021b20, Func Offset: 0
	// Line 347, Address: 0x1021b34, Func Offset: 0x14
	// Line 348, Address: 0x1021b68, Func Offset: 0x48
	// Line 350, Address: 0x1021b9c, Func Offset: 0x7c
	// Line 351, Address: 0x1021ba8, Func Offset: 0x88
	// Line 352, Address: 0x1021bb8, Func Offset: 0x98
	// Line 353, Address: 0x1021bbc, Func Offset: 0x9c
	// Line 354, Address: 0x1021bc0, Func Offset: 0xa0
	// Line 355, Address: 0x1021bdc, Func Offset: 0xbc
	// Line 357, Address: 0x1021bf8, Func Offset: 0xd8
	// Line 358, Address: 0x1021c2c, Func Offset: 0x10c
	// Line 360, Address: 0x1021c60, Func Offset: 0x140
	// Line 361, Address: 0x1021c6c, Func Offset: 0x14c
	// Line 362, Address: 0x1021c7c, Func Offset: 0x15c
	// Line 363, Address: 0x1021c80, Func Offset: 0x160
	// Line 364, Address: 0x1021c84, Func Offset: 0x164
	// Line 368, Address: 0x1021ca0, Func Offset: 0x180
	// Func End, Address: 0x1021cbc, Func Offset: 0x19c
}

// 
// Start address: 0x1021cc0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 372, Address: 0x1021cc0, Func Offset: 0
	// Line 373, Address: 0x1021ccc, Func Offset: 0xc
	// Line 376, Address: 0x1021d2c, Func Offset: 0x6c
	// Line 377, Address: 0x1021d50, Func Offset: 0x90
	// Line 378, Address: 0x1021d60, Func Offset: 0xa0
	// Line 379, Address: 0x1021d68, Func Offset: 0xa8
	// Line 380, Address: 0x1021d8c, Func Offset: 0xcc
	// Line 381, Address: 0x1021d9c, Func Offset: 0xdc
	// Line 382, Address: 0x1021da4, Func Offset: 0xe4
	// Line 383, Address: 0x1021dc8, Func Offset: 0x108
	// Line 387, Address: 0x1021ddc, Func Offset: 0x11c
	// Func End, Address: 0x1021de8, Func Offset: 0x128
}

// 
// Start address: 0x1021df0
void flashout()
{
	// Line 391, Address: 0x1021df0, Func Offset: 0
	// Line 392, Address: 0x1021df8, Func Offset: 0x8
	// Line 394, Address: 0x1021e04, Func Offset: 0x14
	// Line 395, Address: 0x1021e0c, Func Offset: 0x1c
	// Line 397, Address: 0x1021e1c, Func Offset: 0x2c
	// Func End, Address: 0x1021e24, Func Offset: 0x34
}

// 
// Start address: 0x1021e30
int flashout_new()
{
	// Line 399, Address: 0x1021e30, Func Offset: 0
	// Line 401, Address: 0x1021e38, Func Offset: 0x8
	// Line 403, Address: 0x1021e44, Func Offset: 0x14
	// Line 406, Address: 0x1021e4c, Func Offset: 0x1c
	// Line 407, Address: 0x1021e6c, Func Offset: 0x3c
	// Line 408, Address: 0x1021e74, Func Offset: 0x44
	// Line 410, Address: 0x1021e80, Func Offset: 0x50
	// Line 411, Address: 0x1021e84, Func Offset: 0x54
	// Func End, Address: 0x1021e94, Func Offset: 0x64
}

// 
// Start address: 0x1021ea0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 414, Address: 0x1021ea0, Func Offset: 0
	// Line 418, Address: 0x1021eb0, Func Offset: 0x10
	// Line 420, Address: 0x1021ee4, Func Offset: 0x44
	// Line 421, Address: 0x1021ef0, Func Offset: 0x50
	// Line 422, Address: 0x1021efc, Func Offset: 0x5c
	// Line 423, Address: 0x1021f00, Func Offset: 0x60
	// Line 424, Address: 0x1021f1c, Func Offset: 0x7c
	// Line 426, Address: 0x1021f50, Func Offset: 0xb0
	// Line 427, Address: 0x1021f5c, Func Offset: 0xbc
	// Line 428, Address: 0x1021f68, Func Offset: 0xc8
	// Line 429, Address: 0x1021f6c, Func Offset: 0xcc
	// Line 432, Address: 0x1021f88, Func Offset: 0xe8
	// Func End, Address: 0x1021fa0, Func Offset: 0x100
}

// 
// Start address: 0x1021fa0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 435, Address: 0x1021fa0, Func Offset: 0
	// Line 436, Address: 0x1021fa8, Func Offset: 0x8
	// Line 437, Address: 0x1021fc0, Func Offset: 0x20
	// Line 438, Address: 0x1021fd4, Func Offset: 0x34
	// Line 439, Address: 0x1021fdc, Func Offset: 0x3c
	// Line 440, Address: 0x1021ff4, Func Offset: 0x54
	// Line 441, Address: 0x1022004, Func Offset: 0x64
	// Line 442, Address: 0x102200c, Func Offset: 0x6c
	// Line 443, Address: 0x1022024, Func Offset: 0x84
	// Line 447, Address: 0x1022034, Func Offset: 0x94
	// Func End, Address: 0x1022040, Func Offset: 0xa0
}

// 
// Start address: 0x1022040
void colorset(int ColorNo)
{
	// Line 450, Address: 0x1022040, Func Offset: 0
	// Line 451, Address: 0x102204c, Func Offset: 0xc
	// Line 452, Address: 0x102205c, Func Offset: 0x1c
	// Func End, Address: 0x102206c, Func Offset: 0x2c
}

// 
// Start address: 0x1022070
void colorset2(int ColorNo)
{
	// Line 454, Address: 0x1022070, Func Offset: 0
	// Line 455, Address: 0x102207c, Func Offset: 0xc
	// Line 456, Address: 0x102208c, Func Offset: 0x1c
	// Func End, Address: 0x102209c, Func Offset: 0x2c
}

// 
// Start address: 0x10220a0
void colorset3(int ColorNo)
{
	// Line 458, Address: 0x10220a0, Func Offset: 0
	// Line 459, Address: 0x10220ac, Func Offset: 0xc
	// Line 460, Address: 0x10220bc, Func Offset: 0x1c
	// Func End, Address: 0x10220cc, Func Offset: 0x2c
}

// 
// Start address: 0x10220d0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 466, Address: 0x10220d0, Func Offset: 0
	// Line 471, Address: 0x10220f0, Func Offset: 0x20
	// Line 473, Address: 0x1022158, Func Offset: 0x88
	// Line 475, Address: 0x1022168, Func Offset: 0x98
	// Line 477, Address: 0x1022178, Func Offset: 0xa8
	// Line 479, Address: 0x1022188, Func Offset: 0xb8
	// Line 482, Address: 0x1022190, Func Offset: 0xc0
	// Line 483, Address: 0x10221a8, Func Offset: 0xd8
	// Line 484, Address: 0x10221d0, Func Offset: 0x100
	// Line 485, Address: 0x10221f0, Func Offset: 0x120
	// Line 486, Address: 0x10221fc, Func Offset: 0x12c
	// Line 487, Address: 0x102222c, Func Offset: 0x15c
	// Line 489, Address: 0x102223c, Func Offset: 0x16c
	// Func End, Address: 0x102225c, Func Offset: 0x18c
}

// 
// Start address: 0x1022260
int FadeProc()
{
	// Line 494, Address: 0x1022260, Func Offset: 0
	// Line 495, Address: 0x1022268, Func Offset: 0x8
	// Line 497, Address: 0x10222ac, Func Offset: 0x4c
	// Line 499, Address: 0x10222bc, Func Offset: 0x5c
	// Line 501, Address: 0x10222cc, Func Offset: 0x6c
	// Line 503, Address: 0x10222dc, Func Offset: 0x7c
	// Line 505, Address: 0x10222ec, Func Offset: 0x8c
	// Line 507, Address: 0x10222f0, Func Offset: 0x90
	// Func End, Address: 0x1022300, Func Offset: 0xa0
}

