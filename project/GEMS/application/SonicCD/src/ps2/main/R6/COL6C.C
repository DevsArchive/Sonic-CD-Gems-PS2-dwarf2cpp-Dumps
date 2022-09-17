typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[48];
typedef tagPALETTEENTRY type_2[64];
typedef tagPALETTEENTRY type_3[4];
typedef unsigned char type_4[14];
typedef unsigned char type_5[8];
typedef unsigned char type_6[7];
typedef unsigned char type_7[8];
typedef unsigned char type_8[7];
typedef unsigned char type_9[8];
typedef tagPALETTEENTRY type_10[80];
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
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone82colora[48];
tagPALETTEENTRY boss6col[16];
tagPALETTEENTRY boss6_col4[80];
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
// Start address: 0x10273b0
void clchgctr()
{
	// Line 138, Address: 0x10273b0, Func Offset: 0
	// Line 139, Address: 0x10273b8, Func Offset: 0x8
	// Line 140, Address: 0x10273c0, Func Offset: 0x10
	// Func End, Address: 0x10273d0, Func Offset: 0x20
}

// 
// Start address: 0x10273d0
void colchg6a()
{
	// Line 142, Address: 0x10273d0, Func Offset: 0
	// Line 143, Address: 0x10273d8, Func Offset: 0x8
	// Line 144, Address: 0x1027400, Func Offset: 0x30
	// Line 145, Address: 0x1027428, Func Offset: 0x58
	// Line 146, Address: 0x1027450, Func Offset: 0x80
	// Line 147, Address: 0x1027468, Func Offset: 0x98
	// Line 149, Address: 0x1027498, Func Offset: 0xc8
	// Line 150, Address: 0x10274c0, Func Offset: 0xf0
	// Func End, Address: 0x10274d0, Func Offset: 0x100
}

// 
// Start address: 0x10274d0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 160, Address: 0x10274d0, Func Offset: 0
	// Line 163, Address: 0x10274e8, Func Offset: 0x18
	// Line 164, Address: 0x10274fc, Func Offset: 0x2c
	// Line 166, Address: 0x102751c, Func Offset: 0x4c
	// Line 167, Address: 0x1027540, Func Offset: 0x70
	// Line 168, Address: 0x1027554, Func Offset: 0x84
	// Line 170, Address: 0x1027580, Func Offset: 0xb0
	// Line 173, Address: 0x1027588, Func Offset: 0xb8
	// Line 174, Address: 0x10275a4, Func Offset: 0xd4
	// Line 175, Address: 0x10275b4, Func Offset: 0xe4
	// Line 182, Address: 0x10275ec, Func Offset: 0x11c
	// Func End, Address: 0x10275fc, Func Offset: 0x12c
}

// 
// Start address: 0x1027600
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 185, Address: 0x1027600, Func Offset: 0
	// Line 189, Address: 0x102760c, Func Offset: 0xc
	// Line 191, Address: 0x1027640, Func Offset: 0x40
	// Line 192, Address: 0x102764c, Func Offset: 0x4c
	// Line 193, Address: 0x1027650, Func Offset: 0x50
	// Line 194, Address: 0x1027654, Func Offset: 0x54
	// Line 195, Address: 0x1027658, Func Offset: 0x58
	// Line 196, Address: 0x1027660, Func Offset: 0x60
	// Line 197, Address: 0x1027664, Func Offset: 0x64
	// Line 198, Address: 0x1027680, Func Offset: 0x80
	// Line 199, Address: 0x1027688, Func Offset: 0x88
	// Line 201, Address: 0x1027698, Func Offset: 0x98
	// Func End, Address: 0x10276ac, Func Offset: 0xac
}

// 
// Start address: 0x10276b0
int fadein0_new()
{
	// Line 205, Address: 0x10276b0, Func Offset: 0
	// Line 207, Address: 0x10276b8, Func Offset: 0x8
	// Line 209, Address: 0x10276c4, Func Offset: 0x14
	// Line 212, Address: 0x10276cc, Func Offset: 0x1c
	// Line 213, Address: 0x10276ec, Func Offset: 0x3c
	// Line 214, Address: 0x10276f4, Func Offset: 0x44
	// Line 216, Address: 0x1027700, Func Offset: 0x50
	// Line 217, Address: 0x1027704, Func Offset: 0x54
	// Func End, Address: 0x1027714, Func Offset: 0x64
}

// 
// Start address: 0x1027720
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 221, Address: 0x1027720, Func Offset: 0
	// Line 225, Address: 0x1027734, Func Offset: 0x14
	// Line 226, Address: 0x1027768, Func Offset: 0x48
	// Line 228, Address: 0x102779c, Func Offset: 0x7c
	// Line 229, Address: 0x10277a8, Func Offset: 0x88
	// Line 230, Address: 0x10277b8, Func Offset: 0x98
	// Line 231, Address: 0x10277bc, Func Offset: 0x9c
	// Line 232, Address: 0x10277c0, Func Offset: 0xa0
	// Line 233, Address: 0x10277dc, Func Offset: 0xbc
	// Line 235, Address: 0x10277f8, Func Offset: 0xd8
	// Line 236, Address: 0x102782c, Func Offset: 0x10c
	// Line 238, Address: 0x1027860, Func Offset: 0x140
	// Line 239, Address: 0x102786c, Func Offset: 0x14c
	// Line 240, Address: 0x102787c, Func Offset: 0x15c
	// Line 241, Address: 0x1027880, Func Offset: 0x160
	// Line 242, Address: 0x1027884, Func Offset: 0x164
	// Line 246, Address: 0x10278a0, Func Offset: 0x180
	// Func End, Address: 0x10278bc, Func Offset: 0x19c
}

// 
// Start address: 0x10278c0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 250, Address: 0x10278c0, Func Offset: 0
	// Line 251, Address: 0x10278cc, Func Offset: 0xc
	// Line 254, Address: 0x102792c, Func Offset: 0x6c
	// Line 255, Address: 0x1027950, Func Offset: 0x90
	// Line 256, Address: 0x1027960, Func Offset: 0xa0
	// Line 257, Address: 0x1027968, Func Offset: 0xa8
	// Line 258, Address: 0x102798c, Func Offset: 0xcc
	// Line 259, Address: 0x102799c, Func Offset: 0xdc
	// Line 260, Address: 0x10279a4, Func Offset: 0xe4
	// Line 261, Address: 0x10279c8, Func Offset: 0x108
	// Line 265, Address: 0x10279dc, Func Offset: 0x11c
	// Func End, Address: 0x10279e8, Func Offset: 0x128
}

// 
// Start address: 0x10279f0
void fadeout()
{
	// Line 269, Address: 0x10279f0, Func Offset: 0
	// Line 270, Address: 0x10279f8, Func Offset: 0x8
	// Line 272, Address: 0x1027a04, Func Offset: 0x14
	// Line 273, Address: 0x1027a0c, Func Offset: 0x1c
	// Line 275, Address: 0x1027a1c, Func Offset: 0x2c
	// Func End, Address: 0x1027a24, Func Offset: 0x34
}

// 
// Start address: 0x1027a30
int fadeout_new()
{
	// Line 279, Address: 0x1027a30, Func Offset: 0
	// Line 281, Address: 0x1027a38, Func Offset: 0x8
	// Line 283, Address: 0x1027a44, Func Offset: 0x14
	// Line 286, Address: 0x1027a4c, Func Offset: 0x1c
	// Line 287, Address: 0x1027a6c, Func Offset: 0x3c
	// Line 288, Address: 0x1027a74, Func Offset: 0x44
	// Line 290, Address: 0x1027a80, Func Offset: 0x50
	// Line 291, Address: 0x1027a84, Func Offset: 0x54
	// Func End, Address: 0x1027a94, Func Offset: 0x64
}

// 
// Start address: 0x1027aa0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 294, Address: 0x1027aa0, Func Offset: 0
	// Line 298, Address: 0x1027ab0, Func Offset: 0x10
	// Line 300, Address: 0x1027ae4, Func Offset: 0x44
	// Line 301, Address: 0x1027af0, Func Offset: 0x50
	// Line 302, Address: 0x1027afc, Func Offset: 0x5c
	// Line 303, Address: 0x1027b00, Func Offset: 0x60
	// Line 304, Address: 0x1027b1c, Func Offset: 0x7c
	// Line 306, Address: 0x1027b50, Func Offset: 0xb0
	// Line 307, Address: 0x1027b5c, Func Offset: 0xbc
	// Line 308, Address: 0x1027b68, Func Offset: 0xc8
	// Line 309, Address: 0x1027b6c, Func Offset: 0xcc
	// Line 312, Address: 0x1027b88, Func Offset: 0xe8
	// Func End, Address: 0x1027ba0, Func Offset: 0x100
}

// 
// Start address: 0x1027ba0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 315, Address: 0x1027ba0, Func Offset: 0
	// Line 316, Address: 0x1027ba8, Func Offset: 0x8
	// Line 317, Address: 0x1027bb8, Func Offset: 0x18
	// Line 318, Address: 0x1027bcc, Func Offset: 0x2c
	// Line 319, Address: 0x1027bd4, Func Offset: 0x34
	// Line 320, Address: 0x1027be4, Func Offset: 0x44
	// Line 321, Address: 0x1027bf4, Func Offset: 0x54
	// Line 322, Address: 0x1027bfc, Func Offset: 0x5c
	// Line 323, Address: 0x1027c0c, Func Offset: 0x6c
	// Line 326, Address: 0x1027c1c, Func Offset: 0x7c
	// Func End, Address: 0x1027c28, Func Offset: 0x88
}

// 
// Start address: 0x1027c30
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 331, Address: 0x1027c30, Func Offset: 0
	// Line 335, Address: 0x1027c3c, Func Offset: 0xc
	// Line 336, Address: 0x1027c44, Func Offset: 0x14
	// Line 338, Address: 0x1027c50, Func Offset: 0x20
	// Line 340, Address: 0x1027c84, Func Offset: 0x54
	// Line 341, Address: 0x1027c90, Func Offset: 0x60
	// Line 342, Address: 0x1027c98, Func Offset: 0x68
	// Line 343, Address: 0x1027ca0, Func Offset: 0x70
	// Line 344, Address: 0x1027ca8, Func Offset: 0x78
	// Line 345, Address: 0x1027cb0, Func Offset: 0x80
	// Line 346, Address: 0x1027cb4, Func Offset: 0x84
	// Line 347, Address: 0x1027cd0, Func Offset: 0xa0
	// Line 348, Address: 0x1027cd8, Func Offset: 0xa8
	// Line 350, Address: 0x1027ce8, Func Offset: 0xb8
	// Func End, Address: 0x1027cfc, Func Offset: 0xcc
}

// 
// Start address: 0x1027d00
int flashin_new()
{
	tagPALETTEENTRY* lpPe;
	// Line 352, Address: 0x1027d00, Func Offset: 0
	// Line 355, Address: 0x1027d0c, Func Offset: 0xc
	// Line 357, Address: 0x1027d18, Func Offset: 0x18
	// Line 359, Address: 0x1027d24, Func Offset: 0x24
	// Line 361, Address: 0x1027d2c, Func Offset: 0x2c
	// Line 362, Address: 0x1027d34, Func Offset: 0x34
	// Line 363, Address: 0x1027d3c, Func Offset: 0x3c
	// Line 364, Address: 0x1027d44, Func Offset: 0x44
	// Line 366, Address: 0x1027d4c, Func Offset: 0x4c
	// Line 367, Address: 0x1027d6c, Func Offset: 0x6c
	// Line 368, Address: 0x1027d74, Func Offset: 0x74
	// Line 370, Address: 0x1027d80, Func Offset: 0x80
	// Line 371, Address: 0x1027d84, Func Offset: 0x84
	// Func End, Address: 0x1027d98, Func Offset: 0x98
}

// 
// Start address: 0x1027da0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 373, Address: 0x1027da0, Func Offset: 0
	// Line 377, Address: 0x1027db4, Func Offset: 0x14
	// Line 378, Address: 0x1027de8, Func Offset: 0x48
	// Line 380, Address: 0x1027e1c, Func Offset: 0x7c
	// Line 381, Address: 0x1027e28, Func Offset: 0x88
	// Line 382, Address: 0x1027e38, Func Offset: 0x98
	// Line 383, Address: 0x1027e3c, Func Offset: 0x9c
	// Line 384, Address: 0x1027e40, Func Offset: 0xa0
	// Line 385, Address: 0x1027e5c, Func Offset: 0xbc
	// Line 387, Address: 0x1027e78, Func Offset: 0xd8
	// Line 388, Address: 0x1027eac, Func Offset: 0x10c
	// Line 390, Address: 0x1027ee0, Func Offset: 0x140
	// Line 391, Address: 0x1027eec, Func Offset: 0x14c
	// Line 392, Address: 0x1027efc, Func Offset: 0x15c
	// Line 393, Address: 0x1027f00, Func Offset: 0x160
	// Line 394, Address: 0x1027f04, Func Offset: 0x164
	// Line 398, Address: 0x1027f20, Func Offset: 0x180
	// Func End, Address: 0x1027f3c, Func Offset: 0x19c
}

// 
// Start address: 0x1027f40
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 402, Address: 0x1027f40, Func Offset: 0
	// Line 403, Address: 0x1027f4c, Func Offset: 0xc
	// Line 406, Address: 0x1027fac, Func Offset: 0x6c
	// Line 407, Address: 0x1027fd0, Func Offset: 0x90
	// Line 408, Address: 0x1027fe0, Func Offset: 0xa0
	// Line 409, Address: 0x1027fe8, Func Offset: 0xa8
	// Line 410, Address: 0x102800c, Func Offset: 0xcc
	// Line 411, Address: 0x102801c, Func Offset: 0xdc
	// Line 412, Address: 0x1028024, Func Offset: 0xe4
	// Line 413, Address: 0x1028048, Func Offset: 0x108
	// Line 417, Address: 0x102805c, Func Offset: 0x11c
	// Func End, Address: 0x1028068, Func Offset: 0x128
}

// 
// Start address: 0x1028070
void flashout()
{
	// Line 421, Address: 0x1028070, Func Offset: 0
	// Line 422, Address: 0x1028078, Func Offset: 0x8
	// Line 424, Address: 0x1028084, Func Offset: 0x14
	// Line 425, Address: 0x102808c, Func Offset: 0x1c
	// Line 427, Address: 0x102809c, Func Offset: 0x2c
	// Func End, Address: 0x10280a4, Func Offset: 0x34
}

// 
// Start address: 0x10280b0
int flashout_new()
{
	// Line 429, Address: 0x10280b0, Func Offset: 0
	// Line 431, Address: 0x10280b8, Func Offset: 0x8
	// Line 433, Address: 0x10280c4, Func Offset: 0x14
	// Line 436, Address: 0x10280cc, Func Offset: 0x1c
	// Line 437, Address: 0x10280ec, Func Offset: 0x3c
	// Line 438, Address: 0x10280f4, Func Offset: 0x44
	// Line 440, Address: 0x1028100, Func Offset: 0x50
	// Line 441, Address: 0x1028104, Func Offset: 0x54
	// Func End, Address: 0x1028114, Func Offset: 0x64
}

// 
// Start address: 0x1028120
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 444, Address: 0x1028120, Func Offset: 0
	// Line 448, Address: 0x1028130, Func Offset: 0x10
	// Line 450, Address: 0x1028164, Func Offset: 0x44
	// Line 451, Address: 0x1028170, Func Offset: 0x50
	// Line 452, Address: 0x102817c, Func Offset: 0x5c
	// Line 453, Address: 0x1028180, Func Offset: 0x60
	// Line 454, Address: 0x102819c, Func Offset: 0x7c
	// Line 456, Address: 0x10281d0, Func Offset: 0xb0
	// Line 457, Address: 0x10281dc, Func Offset: 0xbc
	// Line 458, Address: 0x10281e8, Func Offset: 0xc8
	// Line 459, Address: 0x10281ec, Func Offset: 0xcc
	// Line 462, Address: 0x1028208, Func Offset: 0xe8
	// Func End, Address: 0x1028220, Func Offset: 0x100
}

// 
// Start address: 0x1028220
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 465, Address: 0x1028220, Func Offset: 0
	// Line 466, Address: 0x1028228, Func Offset: 0x8
	// Line 467, Address: 0x1028240, Func Offset: 0x20
	// Line 468, Address: 0x1028254, Func Offset: 0x34
	// Line 469, Address: 0x102825c, Func Offset: 0x3c
	// Line 470, Address: 0x1028274, Func Offset: 0x54
	// Line 471, Address: 0x1028284, Func Offset: 0x64
	// Line 472, Address: 0x102828c, Func Offset: 0x6c
	// Line 473, Address: 0x10282a4, Func Offset: 0x84
	// Line 477, Address: 0x10282b4, Func Offset: 0x94
	// Func End, Address: 0x10282c0, Func Offset: 0xa0
}

// 
// Start address: 0x10282c0
void colorset(int ColorNo)
{
	// Line 480, Address: 0x10282c0, Func Offset: 0
	// Line 481, Address: 0x10282cc, Func Offset: 0xc
	// Line 482, Address: 0x10282dc, Func Offset: 0x1c
	// Func End, Address: 0x10282ec, Func Offset: 0x2c
}

// 
// Start address: 0x10282f0
void colorset2(int ColorNo)
{
	// Line 484, Address: 0x10282f0, Func Offset: 0
	// Line 485, Address: 0x10282fc, Func Offset: 0xc
	// Line 486, Address: 0x102830c, Func Offset: 0x1c
	// Func End, Address: 0x102831c, Func Offset: 0x2c
}

// 
// Start address: 0x1028320
void colorset3(int ColorNo)
{
	// Line 488, Address: 0x1028320, Func Offset: 0
	// Line 489, Address: 0x102832c, Func Offset: 0xc
	// Line 490, Address: 0x102833c, Func Offset: 0x1c
	// Func End, Address: 0x102834c, Func Offset: 0x2c
}

// 
// Start address: 0x1028350
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 496, Address: 0x1028350, Func Offset: 0
	// Line 501, Address: 0x1028370, Func Offset: 0x20
	// Line 503, Address: 0x10283d8, Func Offset: 0x88
	// Line 505, Address: 0x10283e8, Func Offset: 0x98
	// Line 507, Address: 0x10283f8, Func Offset: 0xa8
	// Line 509, Address: 0x1028408, Func Offset: 0xb8
	// Line 512, Address: 0x1028410, Func Offset: 0xc0
	// Line 513, Address: 0x1028428, Func Offset: 0xd8
	// Line 514, Address: 0x1028450, Func Offset: 0x100
	// Line 515, Address: 0x1028470, Func Offset: 0x120
	// Line 516, Address: 0x102847c, Func Offset: 0x12c
	// Line 517, Address: 0x10284ac, Func Offset: 0x15c
	// Line 519, Address: 0x10284bc, Func Offset: 0x16c
	// Func End, Address: 0x10284dc, Func Offset: 0x18c
}

// 
// Start address: 0x10284e0
int FadeProc()
{
	// Line 524, Address: 0x10284e0, Func Offset: 0
	// Line 525, Address: 0x10284e8, Func Offset: 0x8
	// Line 527, Address: 0x102852c, Func Offset: 0x4c
	// Line 529, Address: 0x102853c, Func Offset: 0x5c
	// Line 531, Address: 0x102854c, Func Offset: 0x6c
	// Line 533, Address: 0x102855c, Func Offset: 0x7c
	// Line 535, Address: 0x102856c, Func Offset: 0x8c
	// Line 537, Address: 0x1028570, Func Offset: 0x90
	// Func End, Address: 0x1028580, Func Offset: 0xa0
}

// 
// Start address: 0x1028580
void fin_boss6(unsigned char* pChgTime, unsigned char* pChgCnt)
{
	char d0;
	// Line 549, Address: 0x1028580, Func Offset: 0
	// Line 552, Address: 0x1028594, Func Offset: 0x14
	// Line 554, Address: 0x10285bc, Func Offset: 0x3c
	// Line 555, Address: 0x10285c4, Func Offset: 0x44
	// Line 556, Address: 0x10285d4, Func Offset: 0x54
	// Line 557, Address: 0x10285e0, Func Offset: 0x60
	// Line 558, Address: 0x10285f4, Func Offset: 0x74
	// Line 559, Address: 0x1028604, Func Offset: 0x84
	// Func End, Address: 0x1028618, Func Offset: 0x98
}

// 
// Start address: 0x1028620
void fout_boss6(unsigned char* pChgTime, unsigned char* pChgCnt)
{
	unsigned char d0;
	// Line 561, Address: 0x1028620, Func Offset: 0
	// Line 564, Address: 0x1028634, Func Offset: 0x14
	// Line 566, Address: 0x102865c, Func Offset: 0x3c
	// Line 567, Address: 0x1028664, Func Offset: 0x44
	// Line 568, Address: 0x1028670, Func Offset: 0x50
	// Line 569, Address: 0x1028678, Func Offset: 0x58
	// Line 570, Address: 0x1028690, Func Offset: 0x70
	// Line 571, Address: 0x10286a4, Func Offset: 0x84
	// Func End, Address: 0x10286b8, Func Offset: 0x98
}

// 
// Start address: 0x10286c0
void fset_boss6(char d0, unsigned char* pChgCnt)
{
	tagPALETTEENTRY* lpPe;
	// Line 573, Address: 0x10286c0, Func Offset: 0
	// Line 576, Address: 0x10286d0, Func Offset: 0x10
	// Line 577, Address: 0x10286dc, Func Offset: 0x1c
	// Line 578, Address: 0x10286e8, Func Offset: 0x28
	// Line 579, Address: 0x1028734, Func Offset: 0x74
	// Line 580, Address: 0x1028740, Func Offset: 0x80
	// Line 581, Address: 0x102878c, Func Offset: 0xcc
	// Line 582, Address: 0x10287d8, Func Offset: 0x118
	// Line 583, Address: 0x1028824, Func Offset: 0x164
	// Line 584, Address: 0x1028870, Func Offset: 0x1b0
	// Line 585, Address: 0x10288bc, Func Offset: 0x1fc
	// Line 586, Address: 0x1028908, Func Offset: 0x248
	// Line 587, Address: 0x1028954, Func Offset: 0x294
	// Line 588, Address: 0x10289a0, Func Offset: 0x2e0
	// Line 589, Address: 0x10289ec, Func Offset: 0x32c
	// Func End, Address: 0x10289fc, Func Offset: 0x33c
}

// 
// Start address: 0x1028a00
void flashin_boss6()
{
	short d0;
	tagPALETTEENTRY* lpPe;
	// Line 594, Address: 0x1028a00, Func Offset: 0
	// Line 598, Address: 0x1028a0c, Func Offset: 0xc
	// Line 599, Address: 0x1028a14, Func Offset: 0x14
	// Line 600, Address: 0x1028a20, Func Offset: 0x20
	// Line 601, Address: 0x1028a40, Func Offset: 0x40
	// Line 603, Address: 0x1028a4c, Func Offset: 0x4c
	// Line 604, Address: 0x1028a54, Func Offset: 0x54
	// Line 605, Address: 0x1028a5c, Func Offset: 0x5c
	// Line 606, Address: 0x1028a64, Func Offset: 0x64
	// Line 607, Address: 0x1028a6c, Func Offset: 0x6c
	// Line 608, Address: 0x1028a70, Func Offset: 0x70
	// Line 610, Address: 0x1028a9c, Func Offset: 0x9c
	// Line 611, Address: 0x1028aa4, Func Offset: 0xa4
	// Line 612, Address: 0x1028ab4, Func Offset: 0xb4
	// Func End, Address: 0x1028ac8, Func Offset: 0xc8
}

