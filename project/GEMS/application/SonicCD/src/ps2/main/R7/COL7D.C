typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[6];
typedef char type_1[8];
typedef tagPALETTEENTRY type_2[6];
typedef tagPALETTEENTRY type_3[16];
typedef tagPALETTEENTRY type_4[64];
typedef tagPALETTEENTRY type_5[6];
typedef unsigned char type_6[7];
typedef char type_7[6];
typedef unsigned char type_8[7];
typedef tagPALETTEENTRY type_9[4];
typedef char type_10[14];
typedef char type_11[18];
typedef tagPALETTEENTRY type_12[4];
typedef _anon0 type_13[7];
typedef tagPALETTEENTRY type_14[48];
typedef tagPALETTEENTRY type_15[8];
typedef char type_16[8];
typedef tagPALETTEENTRY type_17[64];
typedef char type_18[18];
typedef tagPALETTEENTRY type_19[6];
typedef tagPALETTEENTRY type_20[8];
typedef char type_21[8];
typedef char type_22[18];

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

tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY bosscolor[6];
_anon0 colortbl[7];
_anon1 stageno;
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk;
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
void clchg_sub0(unsigned char** ppChgTim, unsigned char** ppChgCnt, char* pCnttbl, tagPALETTEENTRY* pPlttbl);
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
void colorset4(int ColorNo);
void colorset00(int ColorNo, int WorkOffs);
int FadeProc();

// 
// Start address: 0x1023c70
void clchgctr()
{
	unsigned char* pChgTime;
	unsigned char* pChgCnt;
	char col6a0cnt[14];
	tagPALETTEENTRY col6a0col[4];
	char col6a1cnt[8];
	tagPALETTEENTRY col6a1col[6];
	char col6a2cnt[8];
	tagPALETTEENTRY col6a2col[6];
	char col6a3cnt[8];
	tagPALETTEENTRY col6a3col[6];
	char col6a4cnt[6];
	tagPALETTEENTRY col6a4col[4];
	char col6a5cnt[18];
	tagPALETTEENTRY col6a5col[8];
	char col6a6cnt[18];
	tagPALETTEENTRY col6a6col[8];
	char col6a6cnt1[18];
	// Line 161, Address: 0x1023c70, Func Offset: 0
	// Line 163, Address: 0x1023c78, Func Offset: 0x8
	// Line 167, Address: 0x1023cac, Func Offset: 0x3c
	// Line 172, Address: 0x1023ce0, Func Offset: 0x70
	// Line 176, Address: 0x1023d14, Func Offset: 0xa4
	// Line 180, Address: 0x1023d48, Func Offset: 0xd8
	// Line 184, Address: 0x1023d7c, Func Offset: 0x10c
	// Line 188, Address: 0x1023db0, Func Offset: 0x140
	// Line 192, Address: 0x1023de4, Func Offset: 0x174
	// Line 196, Address: 0x1023e18, Func Offset: 0x1a8
	// Line 200, Address: 0x1023e4c, Func Offset: 0x1dc
	// Line 204, Address: 0x1023e80, Func Offset: 0x210
	// Line 208, Address: 0x1023eb4, Func Offset: 0x244
	// Line 212, Address: 0x1023ee8, Func Offset: 0x278
	// Line 216, Address: 0x1023f1c, Func Offset: 0x2ac
	// Line 220, Address: 0x1023f50, Func Offset: 0x2e0
	// Line 225, Address: 0x1023f84, Func Offset: 0x314
	// Line 226, Address: 0x1023f90, Func Offset: 0x320
	// Line 228, Address: 0x1023f9c, Func Offset: 0x32c
	// Line 229, Address: 0x1023fb4, Func Offset: 0x344
	// Line 230, Address: 0x1023fcc, Func Offset: 0x35c
	// Line 231, Address: 0x1023fe4, Func Offset: 0x374
	// Line 232, Address: 0x1023ffc, Func Offset: 0x38c
	// Line 234, Address: 0x1024014, Func Offset: 0x3a4
	// Line 236, Address: 0x1024024, Func Offset: 0x3b4
	// Line 237, Address: 0x102403c, Func Offset: 0x3cc
	// Line 238, Address: 0x1024044, Func Offset: 0x3d4
	// Line 240, Address: 0x102405c, Func Offset: 0x3ec
	// Func End, Address: 0x102406c, Func Offset: 0x3fc
}

// 
// Start address: 0x1024070
void clchg_sub0(unsigned char** ppChgTim, unsigned char** ppChgCnt, char* pCnttbl, tagPALETTEENTRY* pPlttbl)
{
	short idx;
	short cnt;
	short timwk;
	tagPALETTEENTRY* pPalet;
	// Line 244, Address: 0x1024070, Func Offset: 0
	// Line 248, Address: 0x1024094, Func Offset: 0x24
	// Line 249, Address: 0x10240c4, Func Offset: 0x54
	// Line 250, Address: 0x10240e4, Func Offset: 0x74
	// Line 252, Address: 0x1024104, Func Offset: 0x94
	// Line 253, Address: 0x102411c, Func Offset: 0xac
	// Line 254, Address: 0x1024134, Func Offset: 0xc4
	// Line 255, Address: 0x1024164, Func Offset: 0xf4
	// Line 257, Address: 0x1024168, Func Offset: 0xf8
	// Line 259, Address: 0x1024178, Func Offset: 0x108
	// Line 260, Address: 0x1024184, Func Offset: 0x114
	// Line 261, Address: 0x10241a4, Func Offset: 0x134
	// Line 262, Address: 0x10241c8, Func Offset: 0x158
	// Line 263, Address: 0x10241fc, Func Offset: 0x18c
	// Line 264, Address: 0x1024208, Func Offset: 0x198
	// Line 268, Address: 0x1024254, Func Offset: 0x1e4
	// Line 269, Address: 0x1024268, Func Offset: 0x1f8
	// Line 270, Address: 0x102427c, Func Offset: 0x20c
	// Func End, Address: 0x1024298, Func Offset: 0x228
}

// 
// Start address: 0x10242a0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 278, Address: 0x10242a0, Func Offset: 0
	// Line 282, Address: 0x10242ac, Func Offset: 0xc
	// Line 284, Address: 0x10242e0, Func Offset: 0x40
	// Line 285, Address: 0x10242ec, Func Offset: 0x4c
	// Line 286, Address: 0x10242f0, Func Offset: 0x50
	// Line 287, Address: 0x10242f4, Func Offset: 0x54
	// Line 288, Address: 0x10242f8, Func Offset: 0x58
	// Line 289, Address: 0x1024300, Func Offset: 0x60
	// Line 290, Address: 0x1024304, Func Offset: 0x64
	// Line 291, Address: 0x1024320, Func Offset: 0x80
	// Line 292, Address: 0x1024328, Func Offset: 0x88
	// Line 294, Address: 0x1024338, Func Offset: 0x98
	// Func End, Address: 0x102434c, Func Offset: 0xac
}

// 
// Start address: 0x1024350
int fadein0_new()
{
	// Line 298, Address: 0x1024350, Func Offset: 0
	// Line 300, Address: 0x1024358, Func Offset: 0x8
	// Line 302, Address: 0x1024364, Func Offset: 0x14
	// Line 305, Address: 0x102436c, Func Offset: 0x1c
	// Line 306, Address: 0x102438c, Func Offset: 0x3c
	// Line 307, Address: 0x1024394, Func Offset: 0x44
	// Line 309, Address: 0x10243a0, Func Offset: 0x50
	// Line 310, Address: 0x10243a4, Func Offset: 0x54
	// Func End, Address: 0x10243b4, Func Offset: 0x64
}

// 
// Start address: 0x10243c0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 314, Address: 0x10243c0, Func Offset: 0
	// Line 318, Address: 0x10243d4, Func Offset: 0x14
	// Line 319, Address: 0x1024408, Func Offset: 0x48
	// Line 321, Address: 0x102443c, Func Offset: 0x7c
	// Line 322, Address: 0x1024448, Func Offset: 0x88
	// Line 323, Address: 0x1024458, Func Offset: 0x98
	// Line 324, Address: 0x102445c, Func Offset: 0x9c
	// Line 325, Address: 0x1024460, Func Offset: 0xa0
	// Line 326, Address: 0x102447c, Func Offset: 0xbc
	// Line 328, Address: 0x1024498, Func Offset: 0xd8
	// Line 329, Address: 0x10244cc, Func Offset: 0x10c
	// Line 331, Address: 0x1024500, Func Offset: 0x140
	// Line 332, Address: 0x102450c, Func Offset: 0x14c
	// Line 333, Address: 0x102451c, Func Offset: 0x15c
	// Line 334, Address: 0x1024520, Func Offset: 0x160
	// Line 335, Address: 0x1024524, Func Offset: 0x164
	// Line 339, Address: 0x1024540, Func Offset: 0x180
	// Func End, Address: 0x102455c, Func Offset: 0x19c
}

// 
// Start address: 0x1024560
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 343, Address: 0x1024560, Func Offset: 0
	// Line 344, Address: 0x102456c, Func Offset: 0xc
	// Line 347, Address: 0x10245cc, Func Offset: 0x6c
	// Line 348, Address: 0x10245f0, Func Offset: 0x90
	// Line 349, Address: 0x1024600, Func Offset: 0xa0
	// Line 350, Address: 0x1024608, Func Offset: 0xa8
	// Line 351, Address: 0x102462c, Func Offset: 0xcc
	// Line 352, Address: 0x102463c, Func Offset: 0xdc
	// Line 353, Address: 0x1024644, Func Offset: 0xe4
	// Line 354, Address: 0x1024668, Func Offset: 0x108
	// Line 358, Address: 0x102467c, Func Offset: 0x11c
	// Func End, Address: 0x1024688, Func Offset: 0x128
}

// 
// Start address: 0x1024690
void fadeout()
{
	// Line 362, Address: 0x1024690, Func Offset: 0
	// Line 363, Address: 0x1024698, Func Offset: 0x8
	// Line 365, Address: 0x10246a4, Func Offset: 0x14
	// Line 366, Address: 0x10246ac, Func Offset: 0x1c
	// Line 368, Address: 0x10246bc, Func Offset: 0x2c
	// Func End, Address: 0x10246c4, Func Offset: 0x34
}

// 
// Start address: 0x10246d0
int fadeout_new()
{
	// Line 372, Address: 0x10246d0, Func Offset: 0
	// Line 374, Address: 0x10246d8, Func Offset: 0x8
	// Line 376, Address: 0x10246e4, Func Offset: 0x14
	// Line 379, Address: 0x10246ec, Func Offset: 0x1c
	// Line 380, Address: 0x102470c, Func Offset: 0x3c
	// Line 381, Address: 0x1024714, Func Offset: 0x44
	// Line 383, Address: 0x1024720, Func Offset: 0x50
	// Line 384, Address: 0x1024724, Func Offset: 0x54
	// Func End, Address: 0x1024734, Func Offset: 0x64
}

// 
// Start address: 0x1024740
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 387, Address: 0x1024740, Func Offset: 0
	// Line 391, Address: 0x1024750, Func Offset: 0x10
	// Line 393, Address: 0x1024784, Func Offset: 0x44
	// Line 394, Address: 0x1024790, Func Offset: 0x50
	// Line 395, Address: 0x102479c, Func Offset: 0x5c
	// Line 396, Address: 0x10247a0, Func Offset: 0x60
	// Line 397, Address: 0x10247bc, Func Offset: 0x7c
	// Line 399, Address: 0x10247f0, Func Offset: 0xb0
	// Line 400, Address: 0x10247fc, Func Offset: 0xbc
	// Line 401, Address: 0x1024808, Func Offset: 0xc8
	// Line 402, Address: 0x102480c, Func Offset: 0xcc
	// Line 405, Address: 0x1024828, Func Offset: 0xe8
	// Func End, Address: 0x1024840, Func Offset: 0x100
}

// 
// Start address: 0x1024840
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 408, Address: 0x1024840, Func Offset: 0
	// Line 409, Address: 0x1024848, Func Offset: 0x8
	// Line 410, Address: 0x1024858, Func Offset: 0x18
	// Line 411, Address: 0x102486c, Func Offset: 0x2c
	// Line 412, Address: 0x1024874, Func Offset: 0x34
	// Line 413, Address: 0x1024884, Func Offset: 0x44
	// Line 414, Address: 0x1024894, Func Offset: 0x54
	// Line 415, Address: 0x102489c, Func Offset: 0x5c
	// Line 416, Address: 0x10248ac, Func Offset: 0x6c
	// Line 419, Address: 0x10248bc, Func Offset: 0x7c
	// Func End, Address: 0x10248c8, Func Offset: 0x88
}

// 
// Start address: 0x10248d0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 424, Address: 0x10248d0, Func Offset: 0
	// Line 428, Address: 0x10248dc, Func Offset: 0xc
	// Line 429, Address: 0x10248e4, Func Offset: 0x14
	// Line 431, Address: 0x10248f0, Func Offset: 0x20
	// Line 433, Address: 0x1024924, Func Offset: 0x54
	// Line 434, Address: 0x1024930, Func Offset: 0x60
	// Line 435, Address: 0x1024938, Func Offset: 0x68
	// Line 436, Address: 0x1024940, Func Offset: 0x70
	// Line 437, Address: 0x1024948, Func Offset: 0x78
	// Line 438, Address: 0x1024950, Func Offset: 0x80
	// Line 439, Address: 0x1024954, Func Offset: 0x84
	// Line 440, Address: 0x1024970, Func Offset: 0xa0
	// Line 441, Address: 0x1024978, Func Offset: 0xa8
	// Line 443, Address: 0x1024988, Func Offset: 0xb8
	// Func End, Address: 0x102499c, Func Offset: 0xcc
}

// 
// Start address: 0x10249a0
int flashin_new()
{
	// Line 445, Address: 0x10249a0, Func Offset: 0
	// Line 447, Address: 0x10249a8, Func Offset: 0x8
	// Line 449, Address: 0x10249b4, Func Offset: 0x14
	// Line 452, Address: 0x10249bc, Func Offset: 0x1c
	// Line 453, Address: 0x10249dc, Func Offset: 0x3c
	// Line 454, Address: 0x10249e4, Func Offset: 0x44
	// Line 456, Address: 0x10249f0, Func Offset: 0x50
	// Line 457, Address: 0x10249f4, Func Offset: 0x54
	// Func End, Address: 0x1024a04, Func Offset: 0x64
}

// 
// Start address: 0x1024a10
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 459, Address: 0x1024a10, Func Offset: 0
	// Line 463, Address: 0x1024a24, Func Offset: 0x14
	// Line 464, Address: 0x1024a58, Func Offset: 0x48
	// Line 466, Address: 0x1024a8c, Func Offset: 0x7c
	// Line 467, Address: 0x1024a98, Func Offset: 0x88
	// Line 468, Address: 0x1024aa8, Func Offset: 0x98
	// Line 469, Address: 0x1024aac, Func Offset: 0x9c
	// Line 470, Address: 0x1024ab0, Func Offset: 0xa0
	// Line 471, Address: 0x1024acc, Func Offset: 0xbc
	// Line 473, Address: 0x1024ae8, Func Offset: 0xd8
	// Line 474, Address: 0x1024b1c, Func Offset: 0x10c
	// Line 476, Address: 0x1024b50, Func Offset: 0x140
	// Line 477, Address: 0x1024b5c, Func Offset: 0x14c
	// Line 478, Address: 0x1024b6c, Func Offset: 0x15c
	// Line 479, Address: 0x1024b70, Func Offset: 0x160
	// Line 480, Address: 0x1024b74, Func Offset: 0x164
	// Line 484, Address: 0x1024b90, Func Offset: 0x180
	// Func End, Address: 0x1024bac, Func Offset: 0x19c
}

// 
// Start address: 0x1024bb0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 488, Address: 0x1024bb0, Func Offset: 0
	// Line 489, Address: 0x1024bbc, Func Offset: 0xc
	// Line 492, Address: 0x1024c1c, Func Offset: 0x6c
	// Line 493, Address: 0x1024c40, Func Offset: 0x90
	// Line 494, Address: 0x1024c50, Func Offset: 0xa0
	// Line 495, Address: 0x1024c58, Func Offset: 0xa8
	// Line 496, Address: 0x1024c7c, Func Offset: 0xcc
	// Line 497, Address: 0x1024c8c, Func Offset: 0xdc
	// Line 498, Address: 0x1024c94, Func Offset: 0xe4
	// Line 499, Address: 0x1024cb8, Func Offset: 0x108
	// Line 503, Address: 0x1024ccc, Func Offset: 0x11c
	// Func End, Address: 0x1024cd8, Func Offset: 0x128
}

// 
// Start address: 0x1024ce0
void flashout()
{
	// Line 507, Address: 0x1024ce0, Func Offset: 0
	// Line 508, Address: 0x1024ce8, Func Offset: 0x8
	// Line 510, Address: 0x1024cf4, Func Offset: 0x14
	// Line 511, Address: 0x1024cfc, Func Offset: 0x1c
	// Line 513, Address: 0x1024d0c, Func Offset: 0x2c
	// Func End, Address: 0x1024d14, Func Offset: 0x34
}

// 
// Start address: 0x1024d20
int flashout_new()
{
	// Line 515, Address: 0x1024d20, Func Offset: 0
	// Line 517, Address: 0x1024d28, Func Offset: 0x8
	// Line 519, Address: 0x1024d34, Func Offset: 0x14
	// Line 522, Address: 0x1024d3c, Func Offset: 0x1c
	// Line 523, Address: 0x1024d5c, Func Offset: 0x3c
	// Line 524, Address: 0x1024d64, Func Offset: 0x44
	// Line 526, Address: 0x1024d70, Func Offset: 0x50
	// Line 527, Address: 0x1024d74, Func Offset: 0x54
	// Func End, Address: 0x1024d84, Func Offset: 0x64
}

// 
// Start address: 0x1024d90
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 530, Address: 0x1024d90, Func Offset: 0
	// Line 534, Address: 0x1024da0, Func Offset: 0x10
	// Line 536, Address: 0x1024dd4, Func Offset: 0x44
	// Line 537, Address: 0x1024de0, Func Offset: 0x50
	// Line 538, Address: 0x1024dec, Func Offset: 0x5c
	// Line 539, Address: 0x1024df0, Func Offset: 0x60
	// Line 540, Address: 0x1024e0c, Func Offset: 0x7c
	// Line 542, Address: 0x1024e40, Func Offset: 0xb0
	// Line 543, Address: 0x1024e4c, Func Offset: 0xbc
	// Line 544, Address: 0x1024e58, Func Offset: 0xc8
	// Line 545, Address: 0x1024e5c, Func Offset: 0xcc
	// Line 548, Address: 0x1024e78, Func Offset: 0xe8
	// Func End, Address: 0x1024e90, Func Offset: 0x100
}

// 
// Start address: 0x1024e90
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 551, Address: 0x1024e90, Func Offset: 0
	// Line 552, Address: 0x1024e98, Func Offset: 0x8
	// Line 553, Address: 0x1024eb0, Func Offset: 0x20
	// Line 554, Address: 0x1024ec4, Func Offset: 0x34
	// Line 555, Address: 0x1024ecc, Func Offset: 0x3c
	// Line 556, Address: 0x1024ee4, Func Offset: 0x54
	// Line 557, Address: 0x1024ef4, Func Offset: 0x64
	// Line 558, Address: 0x1024efc, Func Offset: 0x6c
	// Line 559, Address: 0x1024f14, Func Offset: 0x84
	// Line 563, Address: 0x1024f24, Func Offset: 0x94
	// Func End, Address: 0x1024f30, Func Offset: 0xa0
}

// 
// Start address: 0x1024f30
void colorset(int ColorNo)
{
	// Line 566, Address: 0x1024f30, Func Offset: 0
	// Line 567, Address: 0x1024f3c, Func Offset: 0xc
	// Line 568, Address: 0x1024f4c, Func Offset: 0x1c
	// Func End, Address: 0x1024f5c, Func Offset: 0x2c
}

// 
// Start address: 0x1024f60
void colorset2(int ColorNo)
{
	// Line 570, Address: 0x1024f60, Func Offset: 0
	// Line 571, Address: 0x1024f6c, Func Offset: 0xc
	// Line 572, Address: 0x1024f7c, Func Offset: 0x1c
	// Func End, Address: 0x1024f8c, Func Offset: 0x2c
}

// 
// Start address: 0x1024f90
void colorset3(int ColorNo)
{
	// Line 574, Address: 0x1024f90, Func Offset: 0
	// Line 575, Address: 0x1024f9c, Func Offset: 0xc
	// Line 576, Address: 0x1024fac, Func Offset: 0x1c
	// Func End, Address: 0x1024fbc, Func Offset: 0x2c
}

// 
// Start address: 0x1024fc0
void colorset4(int ColorNo)
{
	// Line 578, Address: 0x1024fc0, Func Offset: 0
	// Line 579, Address: 0x1024fcc, Func Offset: 0xc
	// Line 580, Address: 0x1024fdc, Func Offset: 0x1c
	// Func End, Address: 0x1024fec, Func Offset: 0x2c
}

// 
// Start address: 0x1024ff0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 586, Address: 0x1024ff0, Func Offset: 0
	// Line 591, Address: 0x1025010, Func Offset: 0x20
	// Line 593, Address: 0x1025078, Func Offset: 0x88
	// Line 595, Address: 0x1025088, Func Offset: 0x98
	// Line 597, Address: 0x1025098, Func Offset: 0xa8
	// Line 599, Address: 0x10250a8, Func Offset: 0xb8
	// Line 602, Address: 0x10250b0, Func Offset: 0xc0
	// Line 603, Address: 0x10250c8, Func Offset: 0xd8
	// Line 604, Address: 0x10250f0, Func Offset: 0x100
	// Line 605, Address: 0x1025110, Func Offset: 0x120
	// Line 606, Address: 0x102511c, Func Offset: 0x12c
	// Line 607, Address: 0x102514c, Func Offset: 0x15c
	// Line 609, Address: 0x102515c, Func Offset: 0x16c
	// Func End, Address: 0x102517c, Func Offset: 0x18c
}

// 
// Start address: 0x1025180
int FadeProc()
{
	// Line 614, Address: 0x1025180, Func Offset: 0
	// Line 615, Address: 0x1025188, Func Offset: 0x8
	// Line 617, Address: 0x10251cc, Func Offset: 0x4c
	// Line 619, Address: 0x10251dc, Func Offset: 0x5c
	// Line 621, Address: 0x10251ec, Func Offset: 0x6c
	// Line 623, Address: 0x10251fc, Func Offset: 0x7c
	// Line 625, Address: 0x102520c, Func Offset: 0x8c
	// Line 627, Address: 0x1025210, Func Offset: 0x90
	// Func End, Address: 0x1025220, Func Offset: 0xa0
}

