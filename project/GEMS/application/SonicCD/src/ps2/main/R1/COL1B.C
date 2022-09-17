typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned char type_0[8];
typedef tagPALETTEENTRY type_1[48];
typedef unsigned char type_2[8];
typedef tagPALETTEENTRY type_3[16];
typedef unsigned char type_4[8];
typedef tagPALETTEENTRY type_5[64];
typedef tagPALETTEENTRY type_6[4];
typedef tagPALETTEENTRY type_7[4][12];
typedef unsigned char type_8[7];
typedef unsigned char type_9[7];
typedef tagPALETTEENTRY type_10[3];
typedef tagPALETTEENTRY type_11[3];
typedef tagPALETTEENTRY type_12[3];
typedef tagPALETTEENTRY type_13[3];
typedef _anon0 type_14[6];
typedef tagPALETTEENTRY type_15[3];
typedef tagPALETTEENTRY type_16[48];
typedef tagPALETTEENTRY type_17[3];
typedef tagPALETTEENTRY type_18[64];
typedef tagPALETTEENTRY type_19[12];
typedef unsigned char type_20[8];
typedef unsigned char type_21[8];
typedef unsigned char type_22[8];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon0
{
	tagPALETTEENTRY* PeSrc;
	short offset;
	short cnt;
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

tagPALETTEENTRY clst1_1a0[4][12];
tagPALETTEENTRY clst1_1a1[12];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone1colorb0[48];
tagPALETTEENTRY zone1colorb[48];
_anon0 colortbl[6];
unsigned char col1a0cnt[8];
tagPALETTEENTRY col1a0col[3];
unsigned char col1a1cnt[8];
tagPALETTEENTRY col1a1col[3];
unsigned char col1a2cnt[8];
tagPALETTEENTRY col1a2col[3];
unsigned char col1a3cnt[8];
tagPALETTEENTRY col1a3col[3];
unsigned char col1a4cnt[8];
tagPALETTEENTRY col1a4col[3];
unsigned char col1a5cnt[8];
tagPALETTEENTRY col1a5col[3];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
tagPALETTEENTRY* lpcolorwk;
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
void colchg11b();
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
// Start address: 0x1024d50
void clchgctr()
{
	// Line 147, Address: 0x1024d50, Func Offset: 0
	// Line 149, Address: 0x1024d58, Func Offset: 0x8
	// Line 151, Address: 0x1024d60, Func Offset: 0x10
	// Func End, Address: 0x1024d70, Func Offset: 0x20
}

// 
// Start address: 0x1024d70
void colchg11b()
{
	// Line 157, Address: 0x1024d70, Func Offset: 0
	// Line 158, Address: 0x1024d78, Func Offset: 0x8
	// Line 159, Address: 0x1024da0, Func Offset: 0x30
	// Line 160, Address: 0x1024dc8, Func Offset: 0x58
	// Line 161, Address: 0x1024df0, Func Offset: 0x80
	// Line 162, Address: 0x1024e18, Func Offset: 0xa8
	// Line 163, Address: 0x1024e40, Func Offset: 0xd0
	// Line 165, Address: 0x1024e68, Func Offset: 0xf8
	// Func End, Address: 0x1024e78, Func Offset: 0x108
}

// 
// Start address: 0x1024e80
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 175, Address: 0x1024e80, Func Offset: 0
	// Line 178, Address: 0x1024e98, Func Offset: 0x18
	// Line 179, Address: 0x1024eac, Func Offset: 0x2c
	// Line 181, Address: 0x1024ecc, Func Offset: 0x4c
	// Line 182, Address: 0x1024ef0, Func Offset: 0x70
	// Line 183, Address: 0x1024f04, Func Offset: 0x84
	// Line 185, Address: 0x1024f30, Func Offset: 0xb0
	// Line 188, Address: 0x1024f38, Func Offset: 0xb8
	// Line 189, Address: 0x1024f54, Func Offset: 0xd4
	// Line 190, Address: 0x1024f64, Func Offset: 0xe4
	// Line 192, Address: 0x1024f9c, Func Offset: 0x11c
	// Func End, Address: 0x1024fac, Func Offset: 0x12c
}

// 
// Start address: 0x1024fb0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 195, Address: 0x1024fb0, Func Offset: 0
	// Line 199, Address: 0x1024fbc, Func Offset: 0xc
	// Line 201, Address: 0x1024ff0, Func Offset: 0x40
	// Line 202, Address: 0x1024ffc, Func Offset: 0x4c
	// Line 203, Address: 0x1025000, Func Offset: 0x50
	// Line 204, Address: 0x1025004, Func Offset: 0x54
	// Line 205, Address: 0x1025008, Func Offset: 0x58
	// Line 206, Address: 0x1025010, Func Offset: 0x60
	// Line 207, Address: 0x1025014, Func Offset: 0x64
	// Line 208, Address: 0x1025030, Func Offset: 0x80
	// Line 209, Address: 0x1025038, Func Offset: 0x88
	// Line 211, Address: 0x1025048, Func Offset: 0x98
	// Func End, Address: 0x102505c, Func Offset: 0xac
}

// 
// Start address: 0x1025060
int fadein0_new()
{
	// Line 215, Address: 0x1025060, Func Offset: 0
	// Line 217, Address: 0x1025068, Func Offset: 0x8
	// Line 219, Address: 0x1025074, Func Offset: 0x14
	// Line 222, Address: 0x102507c, Func Offset: 0x1c
	// Line 223, Address: 0x102509c, Func Offset: 0x3c
	// Line 224, Address: 0x10250a4, Func Offset: 0x44
	// Line 226, Address: 0x10250b0, Func Offset: 0x50
	// Line 227, Address: 0x10250b4, Func Offset: 0x54
	// Func End, Address: 0x10250c4, Func Offset: 0x64
}

// 
// Start address: 0x10250d0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 231, Address: 0x10250d0, Func Offset: 0
	// Line 235, Address: 0x10250e4, Func Offset: 0x14
	// Line 236, Address: 0x1025118, Func Offset: 0x48
	// Line 238, Address: 0x102514c, Func Offset: 0x7c
	// Line 239, Address: 0x1025158, Func Offset: 0x88
	// Line 240, Address: 0x1025168, Func Offset: 0x98
	// Line 241, Address: 0x102516c, Func Offset: 0x9c
	// Line 242, Address: 0x1025170, Func Offset: 0xa0
	// Line 243, Address: 0x102518c, Func Offset: 0xbc
	// Line 245, Address: 0x10251a8, Func Offset: 0xd8
	// Line 246, Address: 0x10251dc, Func Offset: 0x10c
	// Line 248, Address: 0x1025210, Func Offset: 0x140
	// Line 249, Address: 0x102521c, Func Offset: 0x14c
	// Line 250, Address: 0x102522c, Func Offset: 0x15c
	// Line 251, Address: 0x1025230, Func Offset: 0x160
	// Line 252, Address: 0x1025234, Func Offset: 0x164
	// Line 256, Address: 0x1025250, Func Offset: 0x180
	// Func End, Address: 0x102526c, Func Offset: 0x19c
}

// 
// Start address: 0x1025270
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 260, Address: 0x1025270, Func Offset: 0
	// Line 261, Address: 0x102527c, Func Offset: 0xc
	// Line 264, Address: 0x10252dc, Func Offset: 0x6c
	// Line 265, Address: 0x1025300, Func Offset: 0x90
	// Line 266, Address: 0x1025310, Func Offset: 0xa0
	// Line 267, Address: 0x1025318, Func Offset: 0xa8
	// Line 268, Address: 0x102533c, Func Offset: 0xcc
	// Line 269, Address: 0x102534c, Func Offset: 0xdc
	// Line 270, Address: 0x1025354, Func Offset: 0xe4
	// Line 271, Address: 0x1025378, Func Offset: 0x108
	// Line 275, Address: 0x102538c, Func Offset: 0x11c
	// Func End, Address: 0x1025398, Func Offset: 0x128
}

// 
// Start address: 0x10253a0
void fadeout()
{
	// Line 279, Address: 0x10253a0, Func Offset: 0
	// Line 280, Address: 0x10253a8, Func Offset: 0x8
	// Line 282, Address: 0x10253b4, Func Offset: 0x14
	// Line 283, Address: 0x10253bc, Func Offset: 0x1c
	// Line 285, Address: 0x10253cc, Func Offset: 0x2c
	// Func End, Address: 0x10253d4, Func Offset: 0x34
}

// 
// Start address: 0x10253e0
int fadeout_new()
{
	// Line 289, Address: 0x10253e0, Func Offset: 0
	// Line 291, Address: 0x10253e8, Func Offset: 0x8
	// Line 293, Address: 0x10253f4, Func Offset: 0x14
	// Line 296, Address: 0x10253fc, Func Offset: 0x1c
	// Line 297, Address: 0x102541c, Func Offset: 0x3c
	// Line 298, Address: 0x1025424, Func Offset: 0x44
	// Line 300, Address: 0x1025430, Func Offset: 0x50
	// Line 301, Address: 0x1025434, Func Offset: 0x54
	// Func End, Address: 0x1025444, Func Offset: 0x64
}

// 
// Start address: 0x1025450
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 304, Address: 0x1025450, Func Offset: 0
	// Line 308, Address: 0x1025460, Func Offset: 0x10
	// Line 310, Address: 0x1025494, Func Offset: 0x44
	// Line 311, Address: 0x10254a0, Func Offset: 0x50
	// Line 312, Address: 0x10254ac, Func Offset: 0x5c
	// Line 313, Address: 0x10254b0, Func Offset: 0x60
	// Line 314, Address: 0x10254cc, Func Offset: 0x7c
	// Line 316, Address: 0x1025500, Func Offset: 0xb0
	// Line 317, Address: 0x102550c, Func Offset: 0xbc
	// Line 318, Address: 0x1025518, Func Offset: 0xc8
	// Line 319, Address: 0x102551c, Func Offset: 0xcc
	// Line 322, Address: 0x1025538, Func Offset: 0xe8
	// Func End, Address: 0x1025550, Func Offset: 0x100
}

// 
// Start address: 0x1025550
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 325, Address: 0x1025550, Func Offset: 0
	// Line 326, Address: 0x1025558, Func Offset: 0x8
	// Line 327, Address: 0x1025568, Func Offset: 0x18
	// Line 328, Address: 0x102557c, Func Offset: 0x2c
	// Line 329, Address: 0x1025584, Func Offset: 0x34
	// Line 330, Address: 0x1025594, Func Offset: 0x44
	// Line 331, Address: 0x10255a4, Func Offset: 0x54
	// Line 332, Address: 0x10255ac, Func Offset: 0x5c
	// Line 333, Address: 0x10255bc, Func Offset: 0x6c
	// Line 336, Address: 0x10255cc, Func Offset: 0x7c
	// Func End, Address: 0x10255d8, Func Offset: 0x88
}

// 
// Start address: 0x10255e0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 341, Address: 0x10255e0, Func Offset: 0
	// Line 345, Address: 0x10255ec, Func Offset: 0xc
	// Line 346, Address: 0x10255f4, Func Offset: 0x14
	// Line 348, Address: 0x1025600, Func Offset: 0x20
	// Line 350, Address: 0x1025634, Func Offset: 0x54
	// Line 351, Address: 0x1025640, Func Offset: 0x60
	// Line 352, Address: 0x1025648, Func Offset: 0x68
	// Line 353, Address: 0x1025650, Func Offset: 0x70
	// Line 354, Address: 0x1025658, Func Offset: 0x78
	// Line 355, Address: 0x1025660, Func Offset: 0x80
	// Line 356, Address: 0x1025664, Func Offset: 0x84
	// Line 357, Address: 0x1025680, Func Offset: 0xa0
	// Line 358, Address: 0x1025688, Func Offset: 0xa8
	// Line 360, Address: 0x1025698, Func Offset: 0xb8
	// Func End, Address: 0x10256ac, Func Offset: 0xcc
}

// 
// Start address: 0x10256b0
int flashin_new()
{
	// Line 362, Address: 0x10256b0, Func Offset: 0
	// Line 364, Address: 0x10256b8, Func Offset: 0x8
	// Line 366, Address: 0x10256c4, Func Offset: 0x14
	// Line 369, Address: 0x10256cc, Func Offset: 0x1c
	// Line 370, Address: 0x10256ec, Func Offset: 0x3c
	// Line 371, Address: 0x10256f4, Func Offset: 0x44
	// Line 373, Address: 0x1025700, Func Offset: 0x50
	// Line 374, Address: 0x1025704, Func Offset: 0x54
	// Func End, Address: 0x1025714, Func Offset: 0x64
}

// 
// Start address: 0x1025720
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 376, Address: 0x1025720, Func Offset: 0
	// Line 380, Address: 0x1025734, Func Offset: 0x14
	// Line 381, Address: 0x1025768, Func Offset: 0x48
	// Line 383, Address: 0x102579c, Func Offset: 0x7c
	// Line 384, Address: 0x10257a8, Func Offset: 0x88
	// Line 385, Address: 0x10257b8, Func Offset: 0x98
	// Line 386, Address: 0x10257bc, Func Offset: 0x9c
	// Line 387, Address: 0x10257c0, Func Offset: 0xa0
	// Line 388, Address: 0x10257dc, Func Offset: 0xbc
	// Line 390, Address: 0x10257f8, Func Offset: 0xd8
	// Line 391, Address: 0x102582c, Func Offset: 0x10c
	// Line 393, Address: 0x1025860, Func Offset: 0x140
	// Line 394, Address: 0x102586c, Func Offset: 0x14c
	// Line 395, Address: 0x102587c, Func Offset: 0x15c
	// Line 396, Address: 0x1025880, Func Offset: 0x160
	// Line 397, Address: 0x1025884, Func Offset: 0x164
	// Line 401, Address: 0x10258a0, Func Offset: 0x180
	// Func End, Address: 0x10258bc, Func Offset: 0x19c
}

// 
// Start address: 0x10258c0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 405, Address: 0x10258c0, Func Offset: 0
	// Line 406, Address: 0x10258cc, Func Offset: 0xc
	// Line 409, Address: 0x102592c, Func Offset: 0x6c
	// Line 410, Address: 0x1025950, Func Offset: 0x90
	// Line 411, Address: 0x1025960, Func Offset: 0xa0
	// Line 412, Address: 0x1025968, Func Offset: 0xa8
	// Line 413, Address: 0x102598c, Func Offset: 0xcc
	// Line 414, Address: 0x102599c, Func Offset: 0xdc
	// Line 415, Address: 0x10259a4, Func Offset: 0xe4
	// Line 416, Address: 0x10259c8, Func Offset: 0x108
	// Line 420, Address: 0x10259dc, Func Offset: 0x11c
	// Func End, Address: 0x10259e8, Func Offset: 0x128
}

// 
// Start address: 0x10259f0
void flashout()
{
	// Line 424, Address: 0x10259f0, Func Offset: 0
	// Line 425, Address: 0x10259f8, Func Offset: 0x8
	// Line 427, Address: 0x1025a04, Func Offset: 0x14
	// Line 428, Address: 0x1025a0c, Func Offset: 0x1c
	// Line 430, Address: 0x1025a1c, Func Offset: 0x2c
	// Func End, Address: 0x1025a24, Func Offset: 0x34
}

// 
// Start address: 0x1025a30
int flashout_new()
{
	// Line 432, Address: 0x1025a30, Func Offset: 0
	// Line 434, Address: 0x1025a38, Func Offset: 0x8
	// Line 436, Address: 0x1025a44, Func Offset: 0x14
	// Line 439, Address: 0x1025a4c, Func Offset: 0x1c
	// Line 440, Address: 0x1025a6c, Func Offset: 0x3c
	// Line 441, Address: 0x1025a74, Func Offset: 0x44
	// Line 443, Address: 0x1025a80, Func Offset: 0x50
	// Line 444, Address: 0x1025a84, Func Offset: 0x54
	// Func End, Address: 0x1025a94, Func Offset: 0x64
}

// 
// Start address: 0x1025aa0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 447, Address: 0x1025aa0, Func Offset: 0
	// Line 451, Address: 0x1025ab0, Func Offset: 0x10
	// Line 453, Address: 0x1025ae4, Func Offset: 0x44
	// Line 454, Address: 0x1025af0, Func Offset: 0x50
	// Line 455, Address: 0x1025afc, Func Offset: 0x5c
	// Line 456, Address: 0x1025b00, Func Offset: 0x60
	// Line 457, Address: 0x1025b1c, Func Offset: 0x7c
	// Line 459, Address: 0x1025b50, Func Offset: 0xb0
	// Line 460, Address: 0x1025b5c, Func Offset: 0xbc
	// Line 461, Address: 0x1025b68, Func Offset: 0xc8
	// Line 462, Address: 0x1025b6c, Func Offset: 0xcc
	// Line 465, Address: 0x1025b88, Func Offset: 0xe8
	// Func End, Address: 0x1025ba0, Func Offset: 0x100
}

// 
// Start address: 0x1025ba0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 468, Address: 0x1025ba0, Func Offset: 0
	// Line 469, Address: 0x1025ba8, Func Offset: 0x8
	// Line 470, Address: 0x1025bc0, Func Offset: 0x20
	// Line 471, Address: 0x1025bd4, Func Offset: 0x34
	// Line 472, Address: 0x1025bdc, Func Offset: 0x3c
	// Line 473, Address: 0x1025bf4, Func Offset: 0x54
	// Line 474, Address: 0x1025c04, Func Offset: 0x64
	// Line 475, Address: 0x1025c0c, Func Offset: 0x6c
	// Line 476, Address: 0x1025c24, Func Offset: 0x84
	// Line 480, Address: 0x1025c34, Func Offset: 0x94
	// Func End, Address: 0x1025c40, Func Offset: 0xa0
}

// 
// Start address: 0x1025c40
void colorset(int ColorNo)
{
	// Line 483, Address: 0x1025c40, Func Offset: 0
	// Line 484, Address: 0x1025c4c, Func Offset: 0xc
	// Line 485, Address: 0x1025c5c, Func Offset: 0x1c
	// Func End, Address: 0x1025c6c, Func Offset: 0x2c
}

// 
// Start address: 0x1025c70
void colorset2(int ColorNo)
{
	// Line 487, Address: 0x1025c70, Func Offset: 0
	// Line 488, Address: 0x1025c7c, Func Offset: 0xc
	// Line 489, Address: 0x1025c8c, Func Offset: 0x1c
	// Func End, Address: 0x1025c9c, Func Offset: 0x2c
}

// 
// Start address: 0x1025ca0
void colorset3(int ColorNo)
{
	// Line 491, Address: 0x1025ca0, Func Offset: 0
	// Line 492, Address: 0x1025cac, Func Offset: 0xc
	// Line 493, Address: 0x1025cbc, Func Offset: 0x1c
	// Func End, Address: 0x1025ccc, Func Offset: 0x2c
}

// 
// Start address: 0x1025cd0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 499, Address: 0x1025cd0, Func Offset: 0
	// Line 504, Address: 0x1025cf0, Func Offset: 0x20
	// Line 506, Address: 0x1025d58, Func Offset: 0x88
	// Line 508, Address: 0x1025d68, Func Offset: 0x98
	// Line 510, Address: 0x1025d78, Func Offset: 0xa8
	// Line 512, Address: 0x1025d88, Func Offset: 0xb8
	// Line 515, Address: 0x1025d90, Func Offset: 0xc0
	// Line 516, Address: 0x1025da8, Func Offset: 0xd8
	// Line 517, Address: 0x1025dd0, Func Offset: 0x100
	// Line 518, Address: 0x1025df0, Func Offset: 0x120
	// Line 519, Address: 0x1025dfc, Func Offset: 0x12c
	// Line 520, Address: 0x1025e2c, Func Offset: 0x15c
	// Line 522, Address: 0x1025e3c, Func Offset: 0x16c
	// Func End, Address: 0x1025e5c, Func Offset: 0x18c
}

// 
// Start address: 0x1025e60
int FadeProc()
{
	// Line 527, Address: 0x1025e60, Func Offset: 0
	// Line 528, Address: 0x1025e68, Func Offset: 0x8
	// Line 530, Address: 0x1025eac, Func Offset: 0x4c
	// Line 532, Address: 0x1025ebc, Func Offset: 0x5c
	// Line 534, Address: 0x1025ecc, Func Offset: 0x6c
	// Line 536, Address: 0x1025edc, Func Offset: 0x7c
	// Line 538, Address: 0x1025eec, Func Offset: 0x8c
	// Line 540, Address: 0x1025ef0, Func Offset: 0x90
	// Func End, Address: 0x1025f00, Func Offset: 0xa0
}

