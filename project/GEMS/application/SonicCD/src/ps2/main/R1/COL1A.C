typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[3];
typedef tagPALETTEENTRY type_1[48];
typedef tagPALETTEENTRY type_2[3];
typedef tagPALETTEENTRY type_3[16];
typedef tagPALETTEENTRY type_4[64];
typedef tagPALETTEENTRY type_5[4];
typedef tagPALETTEENTRY type_6[4][3];
typedef unsigned char type_7[7];
typedef unsigned char type_8[7];
typedef unsigned char type_9[8];
typedef unsigned char type_10[8];
typedef unsigned char type_11[8];
typedef unsigned char type_12[8];
typedef tagPALETTEENTRY type_13[48];
typedef unsigned char type_14[8];
typedef tagPALETTEENTRY type_15[48];
typedef unsigned char type_16[8];
typedef tagPALETTEENTRY type_17[64];
typedef tagPALETTEENTRY type_18[12];
typedef tagPALETTEENTRY type_19[3];
typedef tagPALETTEENTRY type_20[3];
typedef tagPALETTEENTRY type_21[3];
typedef tagPALETTEENTRY type_22[3];
typedef _anon0 type_23[6];

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

tagPALETTEENTRY clst1_1a0[4][3];
tagPALETTEENTRY clst1_1a1[12];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone1colora0[48];
tagPALETTEENTRY zone1colora1[48];
tagPALETTEENTRY zone1colora[48];
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
void colchg11a();
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
// Start address: 0x101fab0
void clchgctr()
{
	// Line 175, Address: 0x101fab0, Func Offset: 0
	// Line 179, Address: 0x101fab8, Func Offset: 0x8
	// Line 198, Address: 0x101fac0, Func Offset: 0x10
	// Func End, Address: 0x101fad0, Func Offset: 0x20
}

// 
// Start address: 0x101fad0
void colchg11a()
{
	// Line 204, Address: 0x101fad0, Func Offset: 0
	// Line 205, Address: 0x101fad8, Func Offset: 0x8
	// Line 206, Address: 0x101fb00, Func Offset: 0x30
	// Line 207, Address: 0x101fb28, Func Offset: 0x58
	// Line 208, Address: 0x101fb50, Func Offset: 0x80
	// Line 209, Address: 0x101fb78, Func Offset: 0xa8
	// Line 210, Address: 0x101fba0, Func Offset: 0xd0
	// Line 212, Address: 0x101fbc8, Func Offset: 0xf8
	// Func End, Address: 0x101fbd8, Func Offset: 0x108
}

// 
// Start address: 0x101fbe0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 222, Address: 0x101fbe0, Func Offset: 0
	// Line 225, Address: 0x101fbf8, Func Offset: 0x18
	// Line 226, Address: 0x101fc0c, Func Offset: 0x2c
	// Line 227, Address: 0x101fc2c, Func Offset: 0x4c
	// Line 228, Address: 0x101fc50, Func Offset: 0x70
	// Line 229, Address: 0x101fc64, Func Offset: 0x84
	// Line 230, Address: 0x101fc90, Func Offset: 0xb0
	// Line 233, Address: 0x101fc98, Func Offset: 0xb8
	// Line 234, Address: 0x101fcb4, Func Offset: 0xd4
	// Line 235, Address: 0x101fcc4, Func Offset: 0xe4
	// Line 242, Address: 0x101fcfc, Func Offset: 0x11c
	// Func End, Address: 0x101fd0c, Func Offset: 0x12c
}

// 
// Start address: 0x101fd10
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 245, Address: 0x101fd10, Func Offset: 0
	// Line 249, Address: 0x101fd1c, Func Offset: 0xc
	// Line 251, Address: 0x101fd50, Func Offset: 0x40
	// Line 252, Address: 0x101fd5c, Func Offset: 0x4c
	// Line 253, Address: 0x101fd60, Func Offset: 0x50
	// Line 254, Address: 0x101fd64, Func Offset: 0x54
	// Line 255, Address: 0x101fd68, Func Offset: 0x58
	// Line 256, Address: 0x101fd70, Func Offset: 0x60
	// Line 257, Address: 0x101fd74, Func Offset: 0x64
	// Line 258, Address: 0x101fd90, Func Offset: 0x80
	// Line 259, Address: 0x101fd98, Func Offset: 0x88
	// Line 261, Address: 0x101fda8, Func Offset: 0x98
	// Func End, Address: 0x101fdbc, Func Offset: 0xac
}

// 
// Start address: 0x101fdc0
int fadein0_new()
{
	// Line 265, Address: 0x101fdc0, Func Offset: 0
	// Line 267, Address: 0x101fdc8, Func Offset: 0x8
	// Line 269, Address: 0x101fdd4, Func Offset: 0x14
	// Line 272, Address: 0x101fddc, Func Offset: 0x1c
	// Line 273, Address: 0x101fdfc, Func Offset: 0x3c
	// Line 274, Address: 0x101fe04, Func Offset: 0x44
	// Line 276, Address: 0x101fe10, Func Offset: 0x50
	// Line 277, Address: 0x101fe14, Func Offset: 0x54
	// Func End, Address: 0x101fe24, Func Offset: 0x64
}

// 
// Start address: 0x101fe30
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 281, Address: 0x101fe30, Func Offset: 0
	// Line 285, Address: 0x101fe44, Func Offset: 0x14
	// Line 286, Address: 0x101fe78, Func Offset: 0x48
	// Line 288, Address: 0x101feac, Func Offset: 0x7c
	// Line 289, Address: 0x101feb8, Func Offset: 0x88
	// Line 290, Address: 0x101fec8, Func Offset: 0x98
	// Line 291, Address: 0x101fecc, Func Offset: 0x9c
	// Line 292, Address: 0x101fed0, Func Offset: 0xa0
	// Line 293, Address: 0x101feec, Func Offset: 0xbc
	// Line 295, Address: 0x101ff08, Func Offset: 0xd8
	// Line 296, Address: 0x101ff3c, Func Offset: 0x10c
	// Line 298, Address: 0x101ff70, Func Offset: 0x140
	// Line 299, Address: 0x101ff7c, Func Offset: 0x14c
	// Line 300, Address: 0x101ff8c, Func Offset: 0x15c
	// Line 301, Address: 0x101ff90, Func Offset: 0x160
	// Line 302, Address: 0x101ff94, Func Offset: 0x164
	// Line 306, Address: 0x101ffb0, Func Offset: 0x180
	// Func End, Address: 0x101ffcc, Func Offset: 0x19c
}

// 
// Start address: 0x101ffd0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 310, Address: 0x101ffd0, Func Offset: 0
	// Line 311, Address: 0x101ffdc, Func Offset: 0xc
	// Line 314, Address: 0x102003c, Func Offset: 0x6c
	// Line 315, Address: 0x1020060, Func Offset: 0x90
	// Line 316, Address: 0x1020070, Func Offset: 0xa0
	// Line 317, Address: 0x1020078, Func Offset: 0xa8
	// Line 318, Address: 0x102009c, Func Offset: 0xcc
	// Line 319, Address: 0x10200ac, Func Offset: 0xdc
	// Line 320, Address: 0x10200b4, Func Offset: 0xe4
	// Line 321, Address: 0x10200d8, Func Offset: 0x108
	// Line 325, Address: 0x10200ec, Func Offset: 0x11c
	// Func End, Address: 0x10200f8, Func Offset: 0x128
}

// 
// Start address: 0x1020100
void fadeout()
{
	// Line 329, Address: 0x1020100, Func Offset: 0
	// Line 330, Address: 0x1020108, Func Offset: 0x8
	// Line 332, Address: 0x1020114, Func Offset: 0x14
	// Line 333, Address: 0x102011c, Func Offset: 0x1c
	// Line 335, Address: 0x102012c, Func Offset: 0x2c
	// Func End, Address: 0x1020134, Func Offset: 0x34
}

// 
// Start address: 0x1020140
int fadeout_new()
{
	// Line 339, Address: 0x1020140, Func Offset: 0
	// Line 341, Address: 0x1020148, Func Offset: 0x8
	// Line 343, Address: 0x1020154, Func Offset: 0x14
	// Line 346, Address: 0x102015c, Func Offset: 0x1c
	// Line 347, Address: 0x102017c, Func Offset: 0x3c
	// Line 348, Address: 0x1020184, Func Offset: 0x44
	// Line 350, Address: 0x1020190, Func Offset: 0x50
	// Line 351, Address: 0x1020194, Func Offset: 0x54
	// Func End, Address: 0x10201a4, Func Offset: 0x64
}

// 
// Start address: 0x10201b0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 354, Address: 0x10201b0, Func Offset: 0
	// Line 358, Address: 0x10201c0, Func Offset: 0x10
	// Line 360, Address: 0x10201f4, Func Offset: 0x44
	// Line 361, Address: 0x1020200, Func Offset: 0x50
	// Line 362, Address: 0x102020c, Func Offset: 0x5c
	// Line 363, Address: 0x1020210, Func Offset: 0x60
	// Line 364, Address: 0x102022c, Func Offset: 0x7c
	// Line 366, Address: 0x1020260, Func Offset: 0xb0
	// Line 367, Address: 0x102026c, Func Offset: 0xbc
	// Line 368, Address: 0x1020278, Func Offset: 0xc8
	// Line 369, Address: 0x102027c, Func Offset: 0xcc
	// Line 372, Address: 0x1020298, Func Offset: 0xe8
	// Func End, Address: 0x10202b0, Func Offset: 0x100
}

// 
// Start address: 0x10202b0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 375, Address: 0x10202b0, Func Offset: 0
	// Line 376, Address: 0x10202b8, Func Offset: 0x8
	// Line 377, Address: 0x10202c8, Func Offset: 0x18
	// Line 378, Address: 0x10202dc, Func Offset: 0x2c
	// Line 379, Address: 0x10202e4, Func Offset: 0x34
	// Line 380, Address: 0x10202f4, Func Offset: 0x44
	// Line 381, Address: 0x1020304, Func Offset: 0x54
	// Line 382, Address: 0x102030c, Func Offset: 0x5c
	// Line 383, Address: 0x102031c, Func Offset: 0x6c
	// Line 386, Address: 0x102032c, Func Offset: 0x7c
	// Func End, Address: 0x1020338, Func Offset: 0x88
}

// 
// Start address: 0x1020340
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 391, Address: 0x1020340, Func Offset: 0
	// Line 395, Address: 0x102034c, Func Offset: 0xc
	// Line 396, Address: 0x1020354, Func Offset: 0x14
	// Line 398, Address: 0x1020360, Func Offset: 0x20
	// Line 400, Address: 0x1020394, Func Offset: 0x54
	// Line 401, Address: 0x10203a0, Func Offset: 0x60
	// Line 402, Address: 0x10203a8, Func Offset: 0x68
	// Line 403, Address: 0x10203b0, Func Offset: 0x70
	// Line 404, Address: 0x10203b8, Func Offset: 0x78
	// Line 405, Address: 0x10203c0, Func Offset: 0x80
	// Line 406, Address: 0x10203c4, Func Offset: 0x84
	// Line 407, Address: 0x10203e0, Func Offset: 0xa0
	// Line 408, Address: 0x10203e8, Func Offset: 0xa8
	// Line 410, Address: 0x10203f8, Func Offset: 0xb8
	// Func End, Address: 0x102040c, Func Offset: 0xcc
}

// 
// Start address: 0x1020410
int flashin_new()
{
	// Line 412, Address: 0x1020410, Func Offset: 0
	// Line 414, Address: 0x1020418, Func Offset: 0x8
	// Line 416, Address: 0x1020424, Func Offset: 0x14
	// Line 419, Address: 0x102042c, Func Offset: 0x1c
	// Line 420, Address: 0x102044c, Func Offset: 0x3c
	// Line 421, Address: 0x1020454, Func Offset: 0x44
	// Line 423, Address: 0x1020460, Func Offset: 0x50
	// Line 424, Address: 0x1020464, Func Offset: 0x54
	// Func End, Address: 0x1020474, Func Offset: 0x64
}

// 
// Start address: 0x1020480
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 426, Address: 0x1020480, Func Offset: 0
	// Line 430, Address: 0x1020494, Func Offset: 0x14
	// Line 431, Address: 0x10204c8, Func Offset: 0x48
	// Line 433, Address: 0x10204fc, Func Offset: 0x7c
	// Line 434, Address: 0x1020508, Func Offset: 0x88
	// Line 435, Address: 0x1020518, Func Offset: 0x98
	// Line 436, Address: 0x102051c, Func Offset: 0x9c
	// Line 437, Address: 0x1020520, Func Offset: 0xa0
	// Line 438, Address: 0x102053c, Func Offset: 0xbc
	// Line 440, Address: 0x1020558, Func Offset: 0xd8
	// Line 441, Address: 0x102058c, Func Offset: 0x10c
	// Line 443, Address: 0x10205c0, Func Offset: 0x140
	// Line 444, Address: 0x10205cc, Func Offset: 0x14c
	// Line 445, Address: 0x10205dc, Func Offset: 0x15c
	// Line 446, Address: 0x10205e0, Func Offset: 0x160
	// Line 447, Address: 0x10205e4, Func Offset: 0x164
	// Line 451, Address: 0x1020600, Func Offset: 0x180
	// Func End, Address: 0x102061c, Func Offset: 0x19c
}

// 
// Start address: 0x1020620
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 455, Address: 0x1020620, Func Offset: 0
	// Line 456, Address: 0x102062c, Func Offset: 0xc
	// Line 459, Address: 0x102068c, Func Offset: 0x6c
	// Line 460, Address: 0x10206b0, Func Offset: 0x90
	// Line 461, Address: 0x10206c0, Func Offset: 0xa0
	// Line 462, Address: 0x10206c8, Func Offset: 0xa8
	// Line 463, Address: 0x10206ec, Func Offset: 0xcc
	// Line 464, Address: 0x10206fc, Func Offset: 0xdc
	// Line 465, Address: 0x1020704, Func Offset: 0xe4
	// Line 466, Address: 0x1020728, Func Offset: 0x108
	// Line 470, Address: 0x102073c, Func Offset: 0x11c
	// Func End, Address: 0x1020748, Func Offset: 0x128
}

// 
// Start address: 0x1020750
void flashout()
{
	// Line 474, Address: 0x1020750, Func Offset: 0
	// Line 475, Address: 0x1020758, Func Offset: 0x8
	// Line 477, Address: 0x1020764, Func Offset: 0x14
	// Line 478, Address: 0x102076c, Func Offset: 0x1c
	// Line 480, Address: 0x102077c, Func Offset: 0x2c
	// Func End, Address: 0x1020784, Func Offset: 0x34
}

// 
// Start address: 0x1020790
int flashout_new()
{
	// Line 482, Address: 0x1020790, Func Offset: 0
	// Line 484, Address: 0x1020798, Func Offset: 0x8
	// Line 486, Address: 0x10207a4, Func Offset: 0x14
	// Line 489, Address: 0x10207ac, Func Offset: 0x1c
	// Line 490, Address: 0x10207cc, Func Offset: 0x3c
	// Line 491, Address: 0x10207d4, Func Offset: 0x44
	// Line 493, Address: 0x10207e0, Func Offset: 0x50
	// Line 494, Address: 0x10207e4, Func Offset: 0x54
	// Func End, Address: 0x10207f4, Func Offset: 0x64
}

// 
// Start address: 0x1020800
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 497, Address: 0x1020800, Func Offset: 0
	// Line 501, Address: 0x1020810, Func Offset: 0x10
	// Line 503, Address: 0x1020844, Func Offset: 0x44
	// Line 504, Address: 0x1020850, Func Offset: 0x50
	// Line 505, Address: 0x102085c, Func Offset: 0x5c
	// Line 506, Address: 0x1020860, Func Offset: 0x60
	// Line 507, Address: 0x102087c, Func Offset: 0x7c
	// Line 509, Address: 0x10208b0, Func Offset: 0xb0
	// Line 510, Address: 0x10208bc, Func Offset: 0xbc
	// Line 511, Address: 0x10208c8, Func Offset: 0xc8
	// Line 512, Address: 0x10208cc, Func Offset: 0xcc
	// Line 515, Address: 0x10208e8, Func Offset: 0xe8
	// Func End, Address: 0x1020900, Func Offset: 0x100
}

// 
// Start address: 0x1020900
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 518, Address: 0x1020900, Func Offset: 0
	// Line 519, Address: 0x1020908, Func Offset: 0x8
	// Line 520, Address: 0x1020920, Func Offset: 0x20
	// Line 521, Address: 0x1020934, Func Offset: 0x34
	// Line 522, Address: 0x102093c, Func Offset: 0x3c
	// Line 523, Address: 0x1020954, Func Offset: 0x54
	// Line 524, Address: 0x1020964, Func Offset: 0x64
	// Line 525, Address: 0x102096c, Func Offset: 0x6c
	// Line 526, Address: 0x1020984, Func Offset: 0x84
	// Line 530, Address: 0x1020994, Func Offset: 0x94
	// Func End, Address: 0x10209a0, Func Offset: 0xa0
}

// 
// Start address: 0x10209a0
void colorset(int ColorNo)
{
	// Line 533, Address: 0x10209a0, Func Offset: 0
	// Line 534, Address: 0x10209ac, Func Offset: 0xc
	// Line 535, Address: 0x10209bc, Func Offset: 0x1c
	// Func End, Address: 0x10209cc, Func Offset: 0x2c
}

// 
// Start address: 0x10209d0
void colorset2(int ColorNo)
{
	// Line 537, Address: 0x10209d0, Func Offset: 0
	// Line 538, Address: 0x10209dc, Func Offset: 0xc
	// Line 539, Address: 0x10209ec, Func Offset: 0x1c
	// Func End, Address: 0x10209fc, Func Offset: 0x2c
}

// 
// Start address: 0x1020a00
void colorset3(int ColorNo)
{
	// Line 541, Address: 0x1020a00, Func Offset: 0
	// Line 542, Address: 0x1020a0c, Func Offset: 0xc
	// Line 543, Address: 0x1020a1c, Func Offset: 0x1c
	// Func End, Address: 0x1020a2c, Func Offset: 0x2c
}

// 
// Start address: 0x1020a30
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 549, Address: 0x1020a30, Func Offset: 0
	// Line 554, Address: 0x1020a50, Func Offset: 0x20
	// Line 556, Address: 0x1020ab8, Func Offset: 0x88
	// Line 558, Address: 0x1020ac8, Func Offset: 0x98
	// Line 560, Address: 0x1020ad8, Func Offset: 0xa8
	// Line 562, Address: 0x1020ae8, Func Offset: 0xb8
	// Line 565, Address: 0x1020af0, Func Offset: 0xc0
	// Line 566, Address: 0x1020b08, Func Offset: 0xd8
	// Line 567, Address: 0x1020b30, Func Offset: 0x100
	// Line 568, Address: 0x1020b50, Func Offset: 0x120
	// Line 569, Address: 0x1020b5c, Func Offset: 0x12c
	// Line 570, Address: 0x1020b8c, Func Offset: 0x15c
	// Line 572, Address: 0x1020b9c, Func Offset: 0x16c
	// Func End, Address: 0x1020bbc, Func Offset: 0x18c
}

// 
// Start address: 0x1020bc0
int FadeProc()
{
	// Line 577, Address: 0x1020bc0, Func Offset: 0
	// Line 578, Address: 0x1020bc8, Func Offset: 0x8
	// Line 580, Address: 0x1020c0c, Func Offset: 0x4c
	// Line 582, Address: 0x1020c1c, Func Offset: 0x5c
	// Line 584, Address: 0x1020c2c, Func Offset: 0x6c
	// Line 586, Address: 0x1020c3c, Func Offset: 0x7c
	// Line 588, Address: 0x1020c4c, Func Offset: 0x8c
	// Line 590, Address: 0x1020c50, Func Offset: 0x90
	// Func End, Address: 0x1020c60, Func Offset: 0xa0
}

