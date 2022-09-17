typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned char type_0[14];
typedef unsigned char type_1[12];
typedef tagPALETTEENTRY type_2[16];
typedef unsigned char type_3[12];
typedef tagPALETTEENTRY type_4[16];
typedef unsigned char type_5[10];
typedef tagPALETTEENTRY type_6[48];
typedef tagPALETTEENTRY type_7[40];
typedef unsigned char type_8[8];
typedef tagPALETTEENTRY type_9[48];
typedef unsigned char type_10[8];
typedef tagPALETTEENTRY type_11[64];
typedef unsigned char type_12[8];
typedef unsigned char type_13[7];
typedef tagPALETTEENTRY type_14[2];
typedef unsigned char type_15[7];
typedef tagPALETTEENTRY type_16[5];
typedef tagPALETTEENTRY type_17[4];
typedef tagPALETTEENTRY type_18[2];
typedef tagPALETTEENTRY type_19[2];
typedef tagPALETTEENTRY type_20[4];
typedef tagPALETTEENTRY type_21[2];
typedef _anon0 type_22[12];
typedef tagPALETTEENTRY type_23[2];
typedef tagPALETTEENTRY type_24[16];
typedef tagPALETTEENTRY type_25[2];
typedef tagPALETTEENTRY type_26[16];
typedef tagPALETTEENTRY type_27[3];
typedef tagPALETTEENTRY type_28[48];
typedef tagPALETTEENTRY type_29[3];
typedef tagPALETTEENTRY type_30[16];
typedef tagPALETTEENTRY type_31[3];
typedef tagPALETTEENTRY type_32[64];
typedef unsigned char type_33[6];
typedef unsigned char type_34[18];
typedef unsigned char type_35[18];
typedef unsigned char type_36[38];
typedef unsigned char type_37[6];

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

unsigned char col8a0cnt[8];
tagPALETTEENTRY col8a0col[3];
unsigned char col8a1cnt[8];
tagPALETTEENTRY col8a1col[3];
unsigned char col8a2cnt[8];
tagPALETTEENTRY col8a2col[3];
unsigned char col8a3cnt[10];
tagPALETTEENTRY col8a3col[2];
unsigned char col8a4cnt[12];
tagPALETTEENTRY col8a4col[2];
unsigned char col8a5cnt[12];
tagPALETTEENTRY col8a5col[2];
unsigned char col8a6cnt[14];
tagPALETTEENTRY col8a6col[4];
unsigned char col8a7cnt[6];
tagPALETTEENTRY col8a7col[2];
unsigned char col8a8cnt[38];
tagPALETTEENTRY col8a8col[2];
unsigned char col8a9cnt[18];
tagPALETTEENTRY col8a9col[4];
unsigned char col8aacnt[18];
tagPALETTEENTRY col8aacol[5];
unsigned char col8abcnt[6];
tagPALETTEENTRY col8abcol[2];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone82dcolor[48];
tagPALETTEENTRY zone83dcolor[48];
tagPALETTEENTRY boss8col_0[16];
tagPALETTEENTRY boss8col_00[16];
tagPALETTEENTRY boss8col_1[16];
tagPALETTEENTRY emie8col[16];
_anon0 colortbl[12];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
_anon1 stageno;
tagPALETTEENTRY boss8_col1[40];
tagPALETTEENTRY* lpcolorwk;
unsigned char bossstart;
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
void colchg8d();
void colchg_boss8(unsigned char* a3, unsigned char* a4);
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl);
void fadein0();
int fadein0_new();
void fadein1();
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
void fadein_boss8();
void fadein1_boss8(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc);
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
// Start address: 0x102a000
void clchgctr()
{
	// Line 206, Address: 0x102a000, Func Offset: 0
	// Line 207, Address: 0x102a008, Func Offset: 0x8
	// Line 208, Address: 0x102a010, Func Offset: 0x10
	// Func End, Address: 0x102a020, Func Offset: 0x20
}

// 
// Start address: 0x102a020
void colchg8d()
{
	// Line 210, Address: 0x102a020, Func Offset: 0
	// Line 211, Address: 0x102a028, Func Offset: 0x8
	// Line 212, Address: 0x102a050, Func Offset: 0x30
	// Line 213, Address: 0x102a078, Func Offset: 0x58
	// Line 214, Address: 0x102a0a0, Func Offset: 0x80
	// Line 216, Address: 0x102a0b8, Func Offset: 0x98
	// Line 217, Address: 0x102a0e0, Func Offset: 0xc0
	// Line 218, Address: 0x102a108, Func Offset: 0xe8
	// Line 219, Address: 0x102a130, Func Offset: 0x110
	// Line 222, Address: 0x102a138, Func Offset: 0x118
	// Line 224, Address: 0x102a158, Func Offset: 0x138
	// Line 225, Address: 0x102a180, Func Offset: 0x160
	// Line 226, Address: 0x102a1a8, Func Offset: 0x188
	// Line 227, Address: 0x102a1d0, Func Offset: 0x1b0
	// Line 230, Address: 0x102a1d8, Func Offset: 0x1b8
	// Line 231, Address: 0x102a200, Func Offset: 0x1e0
	// Line 232, Address: 0x102a228, Func Offset: 0x208
	// Line 234, Address: 0x102a250, Func Offset: 0x230
	// Func End, Address: 0x102a260, Func Offset: 0x240
}

// 
// Start address: 0x102a260
void colchg_boss8(unsigned char* a3, unsigned char* a4)
{
	tagPALETTEENTRY* lpPe;
	char d0;
	// Line 256, Address: 0x102a260, Func Offset: 0
	// Line 260, Address: 0x102a274, Func Offset: 0x14
	// Line 261, Address: 0x102a288, Func Offset: 0x28
	// Line 262, Address: 0x102a2b0, Func Offset: 0x50
	// Line 263, Address: 0x102a2b8, Func Offset: 0x58
	// Line 264, Address: 0x102a2d8, Func Offset: 0x78
	// Line 266, Address: 0x102a2f0, Func Offset: 0x90
	// Line 267, Address: 0x102a2f8, Func Offset: 0x98
	// Line 268, Address: 0x102a304, Func Offset: 0xa4
	// Line 269, Address: 0x102a344, Func Offset: 0xe4
	// Line 270, Address: 0x102a388, Func Offset: 0x128
	// Line 271, Address: 0x102a3cc, Func Offset: 0x16c
	// Line 273, Address: 0x102a410, Func Offset: 0x1b0
	// Func End, Address: 0x102a424, Func Offset: 0x1c4
}

// 
// Start address: 0x102a430
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 282, Address: 0x102a430, Func Offset: 0
	// Line 285, Address: 0x102a448, Func Offset: 0x18
	// Line 286, Address: 0x102a45c, Func Offset: 0x2c
	// Line 288, Address: 0x102a47c, Func Offset: 0x4c
	// Line 289, Address: 0x102a4a0, Func Offset: 0x70
	// Line 290, Address: 0x102a4b4, Func Offset: 0x84
	// Line 292, Address: 0x102a4e0, Func Offset: 0xb0
	// Line 295, Address: 0x102a4e8, Func Offset: 0xb8
	// Line 296, Address: 0x102a504, Func Offset: 0xd4
	// Line 297, Address: 0x102a514, Func Offset: 0xe4
	// Line 304, Address: 0x102a54c, Func Offset: 0x11c
	// Func End, Address: 0x102a55c, Func Offset: 0x12c
}

// 
// Start address: 0x102a560
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 306, Address: 0x102a560, Func Offset: 0
	// Line 310, Address: 0x102a56c, Func Offset: 0xc
	// Line 312, Address: 0x102a5a0, Func Offset: 0x40
	// Line 313, Address: 0x102a5ac, Func Offset: 0x4c
	// Line 314, Address: 0x102a5b0, Func Offset: 0x50
	// Line 315, Address: 0x102a5b4, Func Offset: 0x54
	// Line 316, Address: 0x102a5b8, Func Offset: 0x58
	// Line 317, Address: 0x102a5c0, Func Offset: 0x60
	// Line 318, Address: 0x102a5c4, Func Offset: 0x64
	// Line 319, Address: 0x102a5e0, Func Offset: 0x80
	// Line 320, Address: 0x102a5e8, Func Offset: 0x88
	// Line 322, Address: 0x102a5f8, Func Offset: 0x98
	// Func End, Address: 0x102a60c, Func Offset: 0xac
}

// 
// Start address: 0x102a610
int fadein0_new()
{
	// Line 326, Address: 0x102a610, Func Offset: 0
	// Line 328, Address: 0x102a618, Func Offset: 0x8
	// Line 330, Address: 0x102a624, Func Offset: 0x14
	// Line 333, Address: 0x102a62c, Func Offset: 0x1c
	// Line 334, Address: 0x102a64c, Func Offset: 0x3c
	// Line 335, Address: 0x102a654, Func Offset: 0x44
	// Line 337, Address: 0x102a660, Func Offset: 0x50
	// Line 338, Address: 0x102a664, Func Offset: 0x54
	// Func End, Address: 0x102a674, Func Offset: 0x64
}

// 
// Start address: 0x102a680
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 342, Address: 0x102a680, Func Offset: 0
	// Line 346, Address: 0x102a694, Func Offset: 0x14
	// Line 347, Address: 0x102a6c8, Func Offset: 0x48
	// Line 349, Address: 0x102a6fc, Func Offset: 0x7c
	// Line 350, Address: 0x102a708, Func Offset: 0x88
	// Line 351, Address: 0x102a718, Func Offset: 0x98
	// Line 352, Address: 0x102a71c, Func Offset: 0x9c
	// Line 353, Address: 0x102a720, Func Offset: 0xa0
	// Line 354, Address: 0x102a73c, Func Offset: 0xbc
	// Line 356, Address: 0x102a758, Func Offset: 0xd8
	// Line 357, Address: 0x102a78c, Func Offset: 0x10c
	// Line 359, Address: 0x102a7c0, Func Offset: 0x140
	// Line 360, Address: 0x102a7cc, Func Offset: 0x14c
	// Line 361, Address: 0x102a7dc, Func Offset: 0x15c
	// Line 362, Address: 0x102a7e0, Func Offset: 0x160
	// Line 363, Address: 0x102a7e4, Func Offset: 0x164
	// Line 367, Address: 0x102a800, Func Offset: 0x180
	// Func End, Address: 0x102a81c, Func Offset: 0x19c
}

// 
// Start address: 0x102a820
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 371, Address: 0x102a820, Func Offset: 0
	// Line 372, Address: 0x102a82c, Func Offset: 0xc
	// Line 375, Address: 0x102a88c, Func Offset: 0x6c
	// Line 376, Address: 0x102a8b0, Func Offset: 0x90
	// Line 377, Address: 0x102a8c0, Func Offset: 0xa0
	// Line 378, Address: 0x102a8c8, Func Offset: 0xa8
	// Line 379, Address: 0x102a8ec, Func Offset: 0xcc
	// Line 380, Address: 0x102a8fc, Func Offset: 0xdc
	// Line 381, Address: 0x102a904, Func Offset: 0xe4
	// Line 382, Address: 0x102a928, Func Offset: 0x108
	// Line 386, Address: 0x102a93c, Func Offset: 0x11c
	// Func End, Address: 0x102a948, Func Offset: 0x128
}

// 
// Start address: 0x102a950
void fadein_boss8()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	// Line 392, Address: 0x102a950, Func Offset: 0
	// Line 395, Address: 0x102a960, Func Offset: 0x10
	// Line 396, Address: 0x102a96c, Func Offset: 0x1c
	// Line 397, Address: 0x102a978, Func Offset: 0x28
	// Line 398, Address: 0x102a984, Func Offset: 0x34
	// Line 400, Address: 0x102a994, Func Offset: 0x44
	// Line 401, Address: 0x102a9a0, Func Offset: 0x50
	// Line 402, Address: 0x102a9ac, Func Offset: 0x5c
	// Line 403, Address: 0x102a9bc, Func Offset: 0x6c
	// Func End, Address: 0x102a9d4, Func Offset: 0x84
}

// 
// Start address: 0x102a9e0
void fadein1_boss8(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	short i;
	// Line 405, Address: 0x102a9e0, Func Offset: 0
	// Line 408, Address: 0x102a9f4, Func Offset: 0x14
	// Line 409, Address: 0x102aa00, Func Offset: 0x20
	// Line 410, Address: 0x102aa10, Func Offset: 0x30
	// Line 411, Address: 0x102aa1c, Func Offset: 0x3c
	// Line 412, Address: 0x102aa28, Func Offset: 0x48
	// Line 413, Address: 0x102aa48, Func Offset: 0x68
	// Func End, Address: 0x102aa5c, Func Offset: 0x7c
}

// 
// Start address: 0x102aa60
void fadeout()
{
	// Line 416, Address: 0x102aa60, Func Offset: 0
	// Line 417, Address: 0x102aa68, Func Offset: 0x8
	// Line 419, Address: 0x102aa74, Func Offset: 0x14
	// Line 420, Address: 0x102aa7c, Func Offset: 0x1c
	// Line 422, Address: 0x102aa8c, Func Offset: 0x2c
	// Func End, Address: 0x102aa94, Func Offset: 0x34
}

// 
// Start address: 0x102aaa0
int fadeout_new()
{
	// Line 426, Address: 0x102aaa0, Func Offset: 0
	// Line 428, Address: 0x102aaa8, Func Offset: 0x8
	// Line 430, Address: 0x102aab4, Func Offset: 0x14
	// Line 433, Address: 0x102aabc, Func Offset: 0x1c
	// Line 434, Address: 0x102aadc, Func Offset: 0x3c
	// Line 435, Address: 0x102aae4, Func Offset: 0x44
	// Line 437, Address: 0x102aaf0, Func Offset: 0x50
	// Line 438, Address: 0x102aaf4, Func Offset: 0x54
	// Func End, Address: 0x102ab04, Func Offset: 0x64
}

// 
// Start address: 0x102ab10
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 441, Address: 0x102ab10, Func Offset: 0
	// Line 445, Address: 0x102ab20, Func Offset: 0x10
	// Line 447, Address: 0x102ab54, Func Offset: 0x44
	// Line 448, Address: 0x102ab60, Func Offset: 0x50
	// Line 449, Address: 0x102ab6c, Func Offset: 0x5c
	// Line 450, Address: 0x102ab70, Func Offset: 0x60
	// Line 451, Address: 0x102ab8c, Func Offset: 0x7c
	// Line 453, Address: 0x102abc0, Func Offset: 0xb0
	// Line 454, Address: 0x102abcc, Func Offset: 0xbc
	// Line 455, Address: 0x102abd8, Func Offset: 0xc8
	// Line 456, Address: 0x102abdc, Func Offset: 0xcc
	// Line 459, Address: 0x102abf8, Func Offset: 0xe8
	// Func End, Address: 0x102ac10, Func Offset: 0x100
}

// 
// Start address: 0x102ac10
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 462, Address: 0x102ac10, Func Offset: 0
	// Line 463, Address: 0x102ac18, Func Offset: 0x8
	// Line 464, Address: 0x102ac28, Func Offset: 0x18
	// Line 465, Address: 0x102ac3c, Func Offset: 0x2c
	// Line 466, Address: 0x102ac44, Func Offset: 0x34
	// Line 467, Address: 0x102ac54, Func Offset: 0x44
	// Line 468, Address: 0x102ac64, Func Offset: 0x54
	// Line 469, Address: 0x102ac6c, Func Offset: 0x5c
	// Line 470, Address: 0x102ac7c, Func Offset: 0x6c
	// Line 473, Address: 0x102ac8c, Func Offset: 0x7c
	// Func End, Address: 0x102ac98, Func Offset: 0x88
}

// 
// Start address: 0x102aca0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 478, Address: 0x102aca0, Func Offset: 0
	// Line 482, Address: 0x102acac, Func Offset: 0xc
	// Line 483, Address: 0x102acb4, Func Offset: 0x14
	// Line 485, Address: 0x102acc0, Func Offset: 0x20
	// Line 487, Address: 0x102acf4, Func Offset: 0x54
	// Line 488, Address: 0x102ad00, Func Offset: 0x60
	// Line 489, Address: 0x102ad08, Func Offset: 0x68
	// Line 490, Address: 0x102ad10, Func Offset: 0x70
	// Line 491, Address: 0x102ad18, Func Offset: 0x78
	// Line 492, Address: 0x102ad20, Func Offset: 0x80
	// Line 493, Address: 0x102ad24, Func Offset: 0x84
	// Line 494, Address: 0x102ad40, Func Offset: 0xa0
	// Line 495, Address: 0x102ad48, Func Offset: 0xa8
	// Line 497, Address: 0x102ad58, Func Offset: 0xb8
	// Func End, Address: 0x102ad6c, Func Offset: 0xcc
}

// 
// Start address: 0x102ad70
int flashin_new()
{
	// Line 499, Address: 0x102ad70, Func Offset: 0
	// Line 501, Address: 0x102ad78, Func Offset: 0x8
	// Line 503, Address: 0x102ad84, Func Offset: 0x14
	// Line 506, Address: 0x102ad8c, Func Offset: 0x1c
	// Line 507, Address: 0x102adac, Func Offset: 0x3c
	// Line 508, Address: 0x102adb4, Func Offset: 0x44
	// Line 510, Address: 0x102adc0, Func Offset: 0x50
	// Line 511, Address: 0x102adc4, Func Offset: 0x54
	// Func End, Address: 0x102add4, Func Offset: 0x64
}

// 
// Start address: 0x102ade0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 513, Address: 0x102ade0, Func Offset: 0
	// Line 517, Address: 0x102adf4, Func Offset: 0x14
	// Line 518, Address: 0x102ae28, Func Offset: 0x48
	// Line 520, Address: 0x102ae5c, Func Offset: 0x7c
	// Line 521, Address: 0x102ae68, Func Offset: 0x88
	// Line 522, Address: 0x102ae78, Func Offset: 0x98
	// Line 523, Address: 0x102ae7c, Func Offset: 0x9c
	// Line 524, Address: 0x102ae80, Func Offset: 0xa0
	// Line 525, Address: 0x102ae9c, Func Offset: 0xbc
	// Line 527, Address: 0x102aeb8, Func Offset: 0xd8
	// Line 528, Address: 0x102aeec, Func Offset: 0x10c
	// Line 530, Address: 0x102af20, Func Offset: 0x140
	// Line 531, Address: 0x102af2c, Func Offset: 0x14c
	// Line 532, Address: 0x102af3c, Func Offset: 0x15c
	// Line 533, Address: 0x102af40, Func Offset: 0x160
	// Line 534, Address: 0x102af44, Func Offset: 0x164
	// Line 538, Address: 0x102af60, Func Offset: 0x180
	// Func End, Address: 0x102af7c, Func Offset: 0x19c
}

// 
// Start address: 0x102af80
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 542, Address: 0x102af80, Func Offset: 0
	// Line 543, Address: 0x102af8c, Func Offset: 0xc
	// Line 546, Address: 0x102afec, Func Offset: 0x6c
	// Line 547, Address: 0x102b010, Func Offset: 0x90
	// Line 548, Address: 0x102b020, Func Offset: 0xa0
	// Line 549, Address: 0x102b028, Func Offset: 0xa8
	// Line 550, Address: 0x102b04c, Func Offset: 0xcc
	// Line 551, Address: 0x102b05c, Func Offset: 0xdc
	// Line 552, Address: 0x102b064, Func Offset: 0xe4
	// Line 553, Address: 0x102b088, Func Offset: 0x108
	// Line 557, Address: 0x102b09c, Func Offset: 0x11c
	// Func End, Address: 0x102b0a8, Func Offset: 0x128
}

// 
// Start address: 0x102b0b0
void flashout()
{
	// Line 561, Address: 0x102b0b0, Func Offset: 0
	// Line 562, Address: 0x102b0b8, Func Offset: 0x8
	// Line 564, Address: 0x102b0c4, Func Offset: 0x14
	// Line 565, Address: 0x102b0cc, Func Offset: 0x1c
	// Line 567, Address: 0x102b0dc, Func Offset: 0x2c
	// Func End, Address: 0x102b0e4, Func Offset: 0x34
}

// 
// Start address: 0x102b0f0
int flashout_new()
{
	// Line 569, Address: 0x102b0f0, Func Offset: 0
	// Line 571, Address: 0x102b0f8, Func Offset: 0x8
	// Line 573, Address: 0x102b104, Func Offset: 0x14
	// Line 576, Address: 0x102b10c, Func Offset: 0x1c
	// Line 577, Address: 0x102b12c, Func Offset: 0x3c
	// Line 578, Address: 0x102b134, Func Offset: 0x44
	// Line 580, Address: 0x102b140, Func Offset: 0x50
	// Line 581, Address: 0x102b144, Func Offset: 0x54
	// Func End, Address: 0x102b154, Func Offset: 0x64
}

// 
// Start address: 0x102b160
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 584, Address: 0x102b160, Func Offset: 0
	// Line 588, Address: 0x102b170, Func Offset: 0x10
	// Line 590, Address: 0x102b1a4, Func Offset: 0x44
	// Line 591, Address: 0x102b1b0, Func Offset: 0x50
	// Line 592, Address: 0x102b1bc, Func Offset: 0x5c
	// Line 593, Address: 0x102b1c0, Func Offset: 0x60
	// Line 594, Address: 0x102b1dc, Func Offset: 0x7c
	// Line 596, Address: 0x102b210, Func Offset: 0xb0
	// Line 597, Address: 0x102b21c, Func Offset: 0xbc
	// Line 598, Address: 0x102b228, Func Offset: 0xc8
	// Line 599, Address: 0x102b22c, Func Offset: 0xcc
	// Line 602, Address: 0x102b248, Func Offset: 0xe8
	// Func End, Address: 0x102b260, Func Offset: 0x100
}

// 
// Start address: 0x102b260
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 605, Address: 0x102b260, Func Offset: 0
	// Line 606, Address: 0x102b268, Func Offset: 0x8
	// Line 607, Address: 0x102b280, Func Offset: 0x20
	// Line 608, Address: 0x102b294, Func Offset: 0x34
	// Line 609, Address: 0x102b29c, Func Offset: 0x3c
	// Line 610, Address: 0x102b2b4, Func Offset: 0x54
	// Line 611, Address: 0x102b2c4, Func Offset: 0x64
	// Line 612, Address: 0x102b2cc, Func Offset: 0x6c
	// Line 613, Address: 0x102b2e4, Func Offset: 0x84
	// Line 617, Address: 0x102b2f4, Func Offset: 0x94
	// Func End, Address: 0x102b300, Func Offset: 0xa0
}

// 
// Start address: 0x102b300
void colorset(int ColorNo)
{
	// Line 619, Address: 0x102b300, Func Offset: 0
	// Line 620, Address: 0x102b30c, Func Offset: 0xc
	// Line 621, Address: 0x102b31c, Func Offset: 0x1c
	// Func End, Address: 0x102b32c, Func Offset: 0x2c
}

// 
// Start address: 0x102b330
void colorset2(int ColorNo)
{
	// Line 623, Address: 0x102b330, Func Offset: 0
	// Line 624, Address: 0x102b33c, Func Offset: 0xc
	// Line 625, Address: 0x102b34c, Func Offset: 0x1c
	// Func End, Address: 0x102b35c, Func Offset: 0x2c
}

// 
// Start address: 0x102b360
void colorset3(int ColorNo)
{
	// Line 627, Address: 0x102b360, Func Offset: 0
	// Line 628, Address: 0x102b36c, Func Offset: 0xc
	// Line 629, Address: 0x102b37c, Func Offset: 0x1c
	// Func End, Address: 0x102b38c, Func Offset: 0x2c
}

// 
// Start address: 0x102b390
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 635, Address: 0x102b390, Func Offset: 0
	// Line 640, Address: 0x102b3b0, Func Offset: 0x20
	// Line 642, Address: 0x102b418, Func Offset: 0x88
	// Line 644, Address: 0x102b428, Func Offset: 0x98
	// Line 646, Address: 0x102b438, Func Offset: 0xa8
	// Line 648, Address: 0x102b448, Func Offset: 0xb8
	// Line 651, Address: 0x102b450, Func Offset: 0xc0
	// Line 652, Address: 0x102b468, Func Offset: 0xd8
	// Line 653, Address: 0x102b4ac, Func Offset: 0x11c
	// Line 654, Address: 0x102b4cc, Func Offset: 0x13c
	// Line 655, Address: 0x102b4d8, Func Offset: 0x148
	// Line 656, Address: 0x102b508, Func Offset: 0x178
	// Line 658, Address: 0x102b518, Func Offset: 0x188
	// Func End, Address: 0x102b538, Func Offset: 0x1a8
}

// 
// Start address: 0x102b540
int FadeProc()
{
	// Line 663, Address: 0x102b540, Func Offset: 0
	// Line 664, Address: 0x102b548, Func Offset: 0x8
	// Line 666, Address: 0x102b58c, Func Offset: 0x4c
	// Line 668, Address: 0x102b59c, Func Offset: 0x5c
	// Line 670, Address: 0x102b5ac, Func Offset: 0x6c
	// Line 672, Address: 0x102b5bc, Func Offset: 0x7c
	// Line 674, Address: 0x102b5cc, Func Offset: 0x8c
	// Line 676, Address: 0x102b5d0, Func Offset: 0x90
	// Func End, Address: 0x102b5e0, Func Offset: 0xa0
}

