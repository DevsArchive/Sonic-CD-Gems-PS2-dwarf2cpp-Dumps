typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[56];
typedef tagPALETTEENTRY type_2[64];
typedef tagPALETTEENTRY type_3[4];
typedef unsigned char type_4[14];
typedef unsigned char type_5[8];
typedef unsigned char type_6[7];
typedef unsigned char type_7[8];
typedef unsigned char type_8[7];
typedef unsigned char type_9[8];
typedef tagPALETTEENTRY type_10[88];
typedef tagPALETTEENTRY type_11[48];
typedef tagPALETTEENTRY type_12[16];
typedef tagPALETTEENTRY type_13[64];
typedef tagPALETTEENTRY type_14[4];
typedef tagPALETTEENTRY type_15[3];
typedef tagPALETTEENTRY type_16[3];
typedef tagPALETTEENTRY type_17[3];
typedef _anon0 type_18[7];

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

unsigned char col6a0cnt[8];
tagPALETTEENTRY col6a0col[3];
unsigned char col6a1cnt[8];
tagPALETTEENTRY col6a1col[3];
unsigned char col6a2cnt[8];
tagPALETTEENTRY col6a2col[3];
unsigned char col6a3cnt[14];
tagPALETTEENTRY col6a3col[4];
tagPALETTEENTRY col6a3col_stop[4];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[56];
tagPALETTEENTRY zone82colora[48];
tagPALETTEENTRY boss6col[16];
tagPALETTEENTRY boss6_col4[88];
_anon0 colortbl[7];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
unsigned char bossflag;
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
void colchg6a();
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
void fin_boss6(unsigned char* pChgTime, unsigned char* pChgCnt);
void fout_boss6(unsigned char* pChgTime, unsigned char* pChgCnt);
void fset_boss6(char d0, unsigned char* pChgCnt);
void flashin_boss6();

// 
// Start address: 0x102c4b0
void clchgctr()
{
	// Line 139, Address: 0x102c4b0, Func Offset: 0
	// Line 140, Address: 0x102c4b8, Func Offset: 0x8
	// Line 141, Address: 0x102c4c0, Func Offset: 0x10
	// Func End, Address: 0x102c4d0, Func Offset: 0x20
}

// 
// Start address: 0x102c4d0
void colchg6a()
{
	// Line 143, Address: 0x102c4d0, Func Offset: 0
	// Line 144, Address: 0x102c4d8, Func Offset: 0x8
	// Line 145, Address: 0x102c500, Func Offset: 0x30
	// Line 146, Address: 0x102c528, Func Offset: 0x58
	// Line 147, Address: 0x102c550, Func Offset: 0x80
	// Line 148, Address: 0x102c568, Func Offset: 0x98
	// Line 150, Address: 0x102c598, Func Offset: 0xc8
	// Line 151, Address: 0x102c5c0, Func Offset: 0xf0
	// Func End, Address: 0x102c5d0, Func Offset: 0x100
}

// 
// Start address: 0x102c5d0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 161, Address: 0x102c5d0, Func Offset: 0
	// Line 164, Address: 0x102c5e8, Func Offset: 0x18
	// Line 165, Address: 0x102c5fc, Func Offset: 0x2c
	// Line 167, Address: 0x102c61c, Func Offset: 0x4c
	// Line 168, Address: 0x102c640, Func Offset: 0x70
	// Line 169, Address: 0x102c654, Func Offset: 0x84
	// Line 171, Address: 0x102c680, Func Offset: 0xb0
	// Line 174, Address: 0x102c688, Func Offset: 0xb8
	// Line 175, Address: 0x102c6a4, Func Offset: 0xd4
	// Line 176, Address: 0x102c6b4, Func Offset: 0xe4
	// Line 183, Address: 0x102c6ec, Func Offset: 0x11c
	// Func End, Address: 0x102c6fc, Func Offset: 0x12c
}

// 
// Start address: 0x102c700
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 186, Address: 0x102c700, Func Offset: 0
	// Line 190, Address: 0x102c70c, Func Offset: 0xc
	// Line 192, Address: 0x102c740, Func Offset: 0x40
	// Line 193, Address: 0x102c74c, Func Offset: 0x4c
	// Line 194, Address: 0x102c750, Func Offset: 0x50
	// Line 195, Address: 0x102c754, Func Offset: 0x54
	// Line 196, Address: 0x102c758, Func Offset: 0x58
	// Line 197, Address: 0x102c760, Func Offset: 0x60
	// Line 198, Address: 0x102c764, Func Offset: 0x64
	// Line 199, Address: 0x102c780, Func Offset: 0x80
	// Line 200, Address: 0x102c788, Func Offset: 0x88
	// Line 202, Address: 0x102c798, Func Offset: 0x98
	// Func End, Address: 0x102c7ac, Func Offset: 0xac
}

// 
// Start address: 0x102c7b0
int fadein0_new()
{
	// Line 206, Address: 0x102c7b0, Func Offset: 0
	// Line 208, Address: 0x102c7b8, Func Offset: 0x8
	// Line 210, Address: 0x102c7c4, Func Offset: 0x14
	// Line 213, Address: 0x102c7cc, Func Offset: 0x1c
	// Line 214, Address: 0x102c7ec, Func Offset: 0x3c
	// Line 215, Address: 0x102c7f4, Func Offset: 0x44
	// Line 217, Address: 0x102c800, Func Offset: 0x50
	// Line 218, Address: 0x102c804, Func Offset: 0x54
	// Func End, Address: 0x102c814, Func Offset: 0x64
}

// 
// Start address: 0x102c820
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 222, Address: 0x102c820, Func Offset: 0
	// Line 226, Address: 0x102c834, Func Offset: 0x14
	// Line 227, Address: 0x102c868, Func Offset: 0x48
	// Line 229, Address: 0x102c89c, Func Offset: 0x7c
	// Line 230, Address: 0x102c8a8, Func Offset: 0x88
	// Line 231, Address: 0x102c8b8, Func Offset: 0x98
	// Line 232, Address: 0x102c8bc, Func Offset: 0x9c
	// Line 233, Address: 0x102c8c0, Func Offset: 0xa0
	// Line 234, Address: 0x102c8dc, Func Offset: 0xbc
	// Line 236, Address: 0x102c8f8, Func Offset: 0xd8
	// Line 237, Address: 0x102c92c, Func Offset: 0x10c
	// Line 239, Address: 0x102c960, Func Offset: 0x140
	// Line 240, Address: 0x102c96c, Func Offset: 0x14c
	// Line 241, Address: 0x102c97c, Func Offset: 0x15c
	// Line 242, Address: 0x102c980, Func Offset: 0x160
	// Line 243, Address: 0x102c984, Func Offset: 0x164
	// Line 247, Address: 0x102c9a0, Func Offset: 0x180
	// Func End, Address: 0x102c9bc, Func Offset: 0x19c
}

// 
// Start address: 0x102c9c0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 251, Address: 0x102c9c0, Func Offset: 0
	// Line 252, Address: 0x102c9cc, Func Offset: 0xc
	// Line 255, Address: 0x102ca2c, Func Offset: 0x6c
	// Line 256, Address: 0x102ca50, Func Offset: 0x90
	// Line 257, Address: 0x102ca60, Func Offset: 0xa0
	// Line 258, Address: 0x102ca68, Func Offset: 0xa8
	// Line 259, Address: 0x102ca8c, Func Offset: 0xcc
	// Line 260, Address: 0x102ca9c, Func Offset: 0xdc
	// Line 261, Address: 0x102caa4, Func Offset: 0xe4
	// Line 262, Address: 0x102cac8, Func Offset: 0x108
	// Line 266, Address: 0x102cadc, Func Offset: 0x11c
	// Func End, Address: 0x102cae8, Func Offset: 0x128
}

// 
// Start address: 0x102caf0
void fadeout()
{
	// Line 270, Address: 0x102caf0, Func Offset: 0
	// Line 271, Address: 0x102caf8, Func Offset: 0x8
	// Line 273, Address: 0x102cb04, Func Offset: 0x14
	// Line 274, Address: 0x102cb0c, Func Offset: 0x1c
	// Line 276, Address: 0x102cb1c, Func Offset: 0x2c
	// Func End, Address: 0x102cb24, Func Offset: 0x34
}

// 
// Start address: 0x102cb30
int fadeout_new()
{
	// Line 280, Address: 0x102cb30, Func Offset: 0
	// Line 282, Address: 0x102cb38, Func Offset: 0x8
	// Line 284, Address: 0x102cb44, Func Offset: 0x14
	// Line 287, Address: 0x102cb4c, Func Offset: 0x1c
	// Line 288, Address: 0x102cb6c, Func Offset: 0x3c
	// Line 289, Address: 0x102cb74, Func Offset: 0x44
	// Line 291, Address: 0x102cb80, Func Offset: 0x50
	// Line 292, Address: 0x102cb84, Func Offset: 0x54
	// Func End, Address: 0x102cb94, Func Offset: 0x64
}

// 
// Start address: 0x102cba0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 295, Address: 0x102cba0, Func Offset: 0
	// Line 299, Address: 0x102cbb0, Func Offset: 0x10
	// Line 301, Address: 0x102cbe4, Func Offset: 0x44
	// Line 302, Address: 0x102cbf0, Func Offset: 0x50
	// Line 303, Address: 0x102cbfc, Func Offset: 0x5c
	// Line 304, Address: 0x102cc00, Func Offset: 0x60
	// Line 305, Address: 0x102cc1c, Func Offset: 0x7c
	// Line 307, Address: 0x102cc50, Func Offset: 0xb0
	// Line 308, Address: 0x102cc5c, Func Offset: 0xbc
	// Line 309, Address: 0x102cc68, Func Offset: 0xc8
	// Line 310, Address: 0x102cc6c, Func Offset: 0xcc
	// Line 313, Address: 0x102cc88, Func Offset: 0xe8
	// Func End, Address: 0x102cca0, Func Offset: 0x100
}

// 
// Start address: 0x102cca0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 316, Address: 0x102cca0, Func Offset: 0
	// Line 317, Address: 0x102cca8, Func Offset: 0x8
	// Line 318, Address: 0x102ccb8, Func Offset: 0x18
	// Line 319, Address: 0x102cccc, Func Offset: 0x2c
	// Line 320, Address: 0x102ccd4, Func Offset: 0x34
	// Line 321, Address: 0x102cce4, Func Offset: 0x44
	// Line 322, Address: 0x102ccf4, Func Offset: 0x54
	// Line 323, Address: 0x102ccfc, Func Offset: 0x5c
	// Line 324, Address: 0x102cd0c, Func Offset: 0x6c
	// Line 327, Address: 0x102cd1c, Func Offset: 0x7c
	// Func End, Address: 0x102cd28, Func Offset: 0x88
}

// 
// Start address: 0x102cd30
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 332, Address: 0x102cd30, Func Offset: 0
	// Line 336, Address: 0x102cd3c, Func Offset: 0xc
	// Line 337, Address: 0x102cd44, Func Offset: 0x14
	// Line 339, Address: 0x102cd50, Func Offset: 0x20
	// Line 341, Address: 0x102cd84, Func Offset: 0x54
	// Line 342, Address: 0x102cd90, Func Offset: 0x60
	// Line 343, Address: 0x102cd98, Func Offset: 0x68
	// Line 344, Address: 0x102cda0, Func Offset: 0x70
	// Line 345, Address: 0x102cda8, Func Offset: 0x78
	// Line 346, Address: 0x102cdb0, Func Offset: 0x80
	// Line 347, Address: 0x102cdb4, Func Offset: 0x84
	// Line 348, Address: 0x102cdd0, Func Offset: 0xa0
	// Line 349, Address: 0x102cdd8, Func Offset: 0xa8
	// Line 351, Address: 0x102cde8, Func Offset: 0xb8
	// Func End, Address: 0x102cdfc, Func Offset: 0xcc
}

// 
// Start address: 0x102ce00
int flashin_new()
{
	tagPALETTEENTRY* lpPe;
	// Line 353, Address: 0x102ce00, Func Offset: 0
	// Line 356, Address: 0x102ce0c, Func Offset: 0xc
	// Line 358, Address: 0x102ce18, Func Offset: 0x18
	// Line 360, Address: 0x102ce24, Func Offset: 0x24
	// Line 362, Address: 0x102ce2c, Func Offset: 0x2c
	// Line 363, Address: 0x102ce34, Func Offset: 0x34
	// Line 364, Address: 0x102ce3c, Func Offset: 0x3c
	// Line 365, Address: 0x102ce44, Func Offset: 0x44
	// Line 367, Address: 0x102ce4c, Func Offset: 0x4c
	// Line 368, Address: 0x102ce6c, Func Offset: 0x6c
	// Line 369, Address: 0x102ce74, Func Offset: 0x74
	// Line 371, Address: 0x102ce80, Func Offset: 0x80
	// Line 372, Address: 0x102ce84, Func Offset: 0x84
	// Func End, Address: 0x102ce98, Func Offset: 0x98
}

// 
// Start address: 0x102cea0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 374, Address: 0x102cea0, Func Offset: 0
	// Line 378, Address: 0x102ceb4, Func Offset: 0x14
	// Line 379, Address: 0x102cee8, Func Offset: 0x48
	// Line 381, Address: 0x102cf1c, Func Offset: 0x7c
	// Line 382, Address: 0x102cf28, Func Offset: 0x88
	// Line 383, Address: 0x102cf38, Func Offset: 0x98
	// Line 384, Address: 0x102cf3c, Func Offset: 0x9c
	// Line 385, Address: 0x102cf40, Func Offset: 0xa0
	// Line 386, Address: 0x102cf5c, Func Offset: 0xbc
	// Line 388, Address: 0x102cf78, Func Offset: 0xd8
	// Line 389, Address: 0x102cfac, Func Offset: 0x10c
	// Line 391, Address: 0x102cfe0, Func Offset: 0x140
	// Line 392, Address: 0x102cfec, Func Offset: 0x14c
	// Line 393, Address: 0x102cffc, Func Offset: 0x15c
	// Line 394, Address: 0x102d000, Func Offset: 0x160
	// Line 395, Address: 0x102d004, Func Offset: 0x164
	// Line 399, Address: 0x102d020, Func Offset: 0x180
	// Func End, Address: 0x102d03c, Func Offset: 0x19c
}

// 
// Start address: 0x102d040
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 403, Address: 0x102d040, Func Offset: 0
	// Line 404, Address: 0x102d04c, Func Offset: 0xc
	// Line 407, Address: 0x102d0ac, Func Offset: 0x6c
	// Line 408, Address: 0x102d0d0, Func Offset: 0x90
	// Line 409, Address: 0x102d0e0, Func Offset: 0xa0
	// Line 410, Address: 0x102d0e8, Func Offset: 0xa8
	// Line 411, Address: 0x102d10c, Func Offset: 0xcc
	// Line 412, Address: 0x102d11c, Func Offset: 0xdc
	// Line 413, Address: 0x102d124, Func Offset: 0xe4
	// Line 414, Address: 0x102d148, Func Offset: 0x108
	// Line 418, Address: 0x102d15c, Func Offset: 0x11c
	// Func End, Address: 0x102d168, Func Offset: 0x128
}

// 
// Start address: 0x102d170
void flashout()
{
	// Line 422, Address: 0x102d170, Func Offset: 0
	// Line 423, Address: 0x102d178, Func Offset: 0x8
	// Line 425, Address: 0x102d184, Func Offset: 0x14
	// Line 426, Address: 0x102d18c, Func Offset: 0x1c
	// Line 428, Address: 0x102d19c, Func Offset: 0x2c
	// Func End, Address: 0x102d1a4, Func Offset: 0x34
}

// 
// Start address: 0x102d1b0
int flashout_new()
{
	// Line 430, Address: 0x102d1b0, Func Offset: 0
	// Line 432, Address: 0x102d1b8, Func Offset: 0x8
	// Line 434, Address: 0x102d1c4, Func Offset: 0x14
	// Line 437, Address: 0x102d1cc, Func Offset: 0x1c
	// Line 438, Address: 0x102d1ec, Func Offset: 0x3c
	// Line 439, Address: 0x102d1f4, Func Offset: 0x44
	// Line 441, Address: 0x102d200, Func Offset: 0x50
	// Line 442, Address: 0x102d204, Func Offset: 0x54
	// Func End, Address: 0x102d214, Func Offset: 0x64
}

// 
// Start address: 0x102d220
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 445, Address: 0x102d220, Func Offset: 0
	// Line 449, Address: 0x102d230, Func Offset: 0x10
	// Line 451, Address: 0x102d264, Func Offset: 0x44
	// Line 452, Address: 0x102d270, Func Offset: 0x50
	// Line 453, Address: 0x102d27c, Func Offset: 0x5c
	// Line 454, Address: 0x102d280, Func Offset: 0x60
	// Line 455, Address: 0x102d29c, Func Offset: 0x7c
	// Line 457, Address: 0x102d2d0, Func Offset: 0xb0
	// Line 458, Address: 0x102d2dc, Func Offset: 0xbc
	// Line 459, Address: 0x102d2e8, Func Offset: 0xc8
	// Line 460, Address: 0x102d2ec, Func Offset: 0xcc
	// Line 463, Address: 0x102d308, Func Offset: 0xe8
	// Func End, Address: 0x102d320, Func Offset: 0x100
}

// 
// Start address: 0x102d320
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 466, Address: 0x102d320, Func Offset: 0
	// Line 467, Address: 0x102d328, Func Offset: 0x8
	// Line 468, Address: 0x102d340, Func Offset: 0x20
	// Line 469, Address: 0x102d354, Func Offset: 0x34
	// Line 470, Address: 0x102d35c, Func Offset: 0x3c
	// Line 471, Address: 0x102d374, Func Offset: 0x54
	// Line 472, Address: 0x102d384, Func Offset: 0x64
	// Line 473, Address: 0x102d38c, Func Offset: 0x6c
	// Line 474, Address: 0x102d3a4, Func Offset: 0x84
	// Line 478, Address: 0x102d3b4, Func Offset: 0x94
	// Func End, Address: 0x102d3c0, Func Offset: 0xa0
}

// 
// Start address: 0x102d3c0
void colorset(int ColorNo)
{
	// Line 481, Address: 0x102d3c0, Func Offset: 0
	// Line 482, Address: 0x102d3cc, Func Offset: 0xc
	// Line 483, Address: 0x102d3dc, Func Offset: 0x1c
	// Func End, Address: 0x102d3ec, Func Offset: 0x2c
}

// 
// Start address: 0x102d3f0
void colorset2(int ColorNo)
{
	// Line 485, Address: 0x102d3f0, Func Offset: 0
	// Line 486, Address: 0x102d3fc, Func Offset: 0xc
	// Line 487, Address: 0x102d40c, Func Offset: 0x1c
	// Func End, Address: 0x102d41c, Func Offset: 0x2c
}

// 
// Start address: 0x102d420
void colorset3(int ColorNo)
{
	// Line 489, Address: 0x102d420, Func Offset: 0
	// Line 490, Address: 0x102d42c, Func Offset: 0xc
	// Line 491, Address: 0x102d43c, Func Offset: 0x1c
	// Func End, Address: 0x102d44c, Func Offset: 0x2c
}

// 
// Start address: 0x102d450
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 497, Address: 0x102d450, Func Offset: 0
	// Line 502, Address: 0x102d470, Func Offset: 0x20
	// Line 504, Address: 0x102d4d8, Func Offset: 0x88
	// Line 506, Address: 0x102d4e8, Func Offset: 0x98
	// Line 508, Address: 0x102d4f8, Func Offset: 0xa8
	// Line 510, Address: 0x102d508, Func Offset: 0xb8
	// Line 513, Address: 0x102d510, Func Offset: 0xc0
	// Line 514, Address: 0x102d528, Func Offset: 0xd8
	// Line 515, Address: 0x102d550, Func Offset: 0x100
	// Line 516, Address: 0x102d570, Func Offset: 0x120
	// Line 517, Address: 0x102d57c, Func Offset: 0x12c
	// Line 518, Address: 0x102d5ac, Func Offset: 0x15c
	// Line 520, Address: 0x102d5bc, Func Offset: 0x16c
	// Func End, Address: 0x102d5dc, Func Offset: 0x18c
}

// 
// Start address: 0x102d5e0
int FadeProc()
{
	// Line 525, Address: 0x102d5e0, Func Offset: 0
	// Line 526, Address: 0x102d5e8, Func Offset: 0x8
	// Line 528, Address: 0x102d62c, Func Offset: 0x4c
	// Line 530, Address: 0x102d63c, Func Offset: 0x5c
	// Line 532, Address: 0x102d64c, Func Offset: 0x6c
	// Line 534, Address: 0x102d65c, Func Offset: 0x7c
	// Line 536, Address: 0x102d66c, Func Offset: 0x8c
	// Line 538, Address: 0x102d670, Func Offset: 0x90
	// Func End, Address: 0x102d680, Func Offset: 0xa0
}

// 
// Start address: 0x102d680
void fin_boss6(unsigned char* pChgTime, unsigned char* pChgCnt)
{
	char d0;
	// Line 550, Address: 0x102d680, Func Offset: 0
	// Line 553, Address: 0x102d694, Func Offset: 0x14
	// Line 555, Address: 0x102d6bc, Func Offset: 0x3c
	// Line 556, Address: 0x102d6c4, Func Offset: 0x44
	// Line 557, Address: 0x102d6d4, Func Offset: 0x54
	// Line 558, Address: 0x102d6e0, Func Offset: 0x60
	// Line 559, Address: 0x102d6f4, Func Offset: 0x74
	// Line 560, Address: 0x102d704, Func Offset: 0x84
	// Func End, Address: 0x102d718, Func Offset: 0x98
}

// 
// Start address: 0x102d720
void fout_boss6(unsigned char* pChgTime, unsigned char* pChgCnt)
{
	unsigned char d0;
	// Line 562, Address: 0x102d720, Func Offset: 0
	// Line 565, Address: 0x102d734, Func Offset: 0x14
	// Line 567, Address: 0x102d75c, Func Offset: 0x3c
	// Line 568, Address: 0x102d764, Func Offset: 0x44
	// Line 569, Address: 0x102d770, Func Offset: 0x50
	// Line 570, Address: 0x102d778, Func Offset: 0x58
	// Line 571, Address: 0x102d790, Func Offset: 0x70
	// Line 572, Address: 0x102d7a4, Func Offset: 0x84
	// Func End, Address: 0x102d7b8, Func Offset: 0x98
}

// 
// Start address: 0x102d7c0
void fset_boss6(char d0, unsigned char* pChgCnt)
{
	tagPALETTEENTRY* lpPe;
	// Line 574, Address: 0x102d7c0, Func Offset: 0
	// Line 577, Address: 0x102d7d0, Func Offset: 0x10
	// Line 578, Address: 0x102d7dc, Func Offset: 0x1c
	// Line 579, Address: 0x102d7e8, Func Offset: 0x28
	// Line 580, Address: 0x102d834, Func Offset: 0x74
	// Line 581, Address: 0x102d840, Func Offset: 0x80
	// Line 582, Address: 0x102d88c, Func Offset: 0xcc
	// Line 583, Address: 0x102d8d8, Func Offset: 0x118
	// Line 584, Address: 0x102d8dc, Func Offset: 0x11c
	// Line 585, Address: 0x102d928, Func Offset: 0x168
	// Line 586, Address: 0x102d974, Func Offset: 0x1b4
	// Line 587, Address: 0x102d978, Func Offset: 0x1b8
	// Line 588, Address: 0x102d97c, Func Offset: 0x1bc
	// Line 589, Address: 0x102d980, Func Offset: 0x1c0
	// Line 590, Address: 0x102d9cc, Func Offset: 0x20c
	// Line 591, Address: 0x102da18, Func Offset: 0x258
	// Line 592, Address: 0x102da64, Func Offset: 0x2a4
	// Line 593, Address: 0x102dab0, Func Offset: 0x2f0
	// Line 594, Address: 0x102dafc, Func Offset: 0x33c
	// Line 595, Address: 0x102db48, Func Offset: 0x388
	// Func End, Address: 0x102db58, Func Offset: 0x398
}

// 
// Start address: 0x102db60
void flashin_boss6()
{
	short d0;
	tagPALETTEENTRY* lpPe;
	// Line 600, Address: 0x102db60, Func Offset: 0
	// Line 604, Address: 0x102db6c, Func Offset: 0xc
	// Line 605, Address: 0x102db74, Func Offset: 0x14
	// Line 606, Address: 0x102db80, Func Offset: 0x20
	// Line 607, Address: 0x102dba0, Func Offset: 0x40
	// Line 609, Address: 0x102dbac, Func Offset: 0x4c
	// Line 610, Address: 0x102dbb4, Func Offset: 0x54
	// Line 611, Address: 0x102dbbc, Func Offset: 0x5c
	// Line 612, Address: 0x102dbc4, Func Offset: 0x64
	// Line 613, Address: 0x102dbcc, Func Offset: 0x6c
	// Line 614, Address: 0x102dbd0, Func Offset: 0x70
	// Line 616, Address: 0x102dbfc, Func Offset: 0x9c
	// Line 617, Address: 0x102dc04, Func Offset: 0xa4
	// Line 618, Address: 0x102dc14, Func Offset: 0xb4
	// Func End, Address: 0x102dc28, Func Offset: 0xc8
}

