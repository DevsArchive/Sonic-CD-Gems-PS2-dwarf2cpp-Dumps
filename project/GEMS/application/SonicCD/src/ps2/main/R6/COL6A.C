typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[3];
typedef tagPALETTEENTRY type_1[3];
typedef tagPALETTEENTRY type_2[48];
typedef tagPALETTEENTRY type_3[3];
typedef unsigned char type_4[7];
typedef unsigned char type_5[7];
typedef tagPALETTEENTRY type_6[48];
typedef tagPALETTEENTRY type_7[16];
typedef tagPALETTEENTRY type_8[64];
typedef unsigned char type_9[184];
typedef unsigned char type_10[8];
typedef unsigned char type_11[8];
typedef unsigned char type_12[8];
typedef _anon0 type_13[6];
typedef tagPALETTEENTRY type_14[48];
typedef tagPALETTEENTRY type_15[64];
typedef tagPALETTEENTRY type_16[4];

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

tagPALETTEENTRY zone3colora[48];
unsigned char col6a0cnt[8];
tagPALETTEENTRY col6a0col[3];
unsigned char col6a1cnt[8];
tagPALETTEENTRY col6a1col[3];
unsigned char col6a2cnt[8];
tagPALETTEENTRY col6a2col[3];
unsigned char col6a3cnt[184];
tagPALETTEENTRY col6a3col[4];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone82colora[48];
_anon0 colortbl[6];
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

// 
// Start address: 0x1029f10
void clchgctr()
{
	// Line 139, Address: 0x1029f10, Func Offset: 0
	// Line 140, Address: 0x1029f18, Func Offset: 0x8
	// Line 141, Address: 0x1029f20, Func Offset: 0x10
	// Func End, Address: 0x1029f30, Func Offset: 0x20
}

// 
// Start address: 0x1029f30
void colchg6a()
{
	// Line 143, Address: 0x1029f30, Func Offset: 0
	// Line 144, Address: 0x1029f38, Func Offset: 0x8
	// Line 145, Address: 0x1029f60, Func Offset: 0x30
	// Line 146, Address: 0x1029f88, Func Offset: 0x58
	// Line 147, Address: 0x1029fb0, Func Offset: 0x80
	// Line 149, Address: 0x1029fd8, Func Offset: 0xa8
	// Func End, Address: 0x1029fe8, Func Offset: 0xb8
}

// 
// Start address: 0x1029ff0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 159, Address: 0x1029ff0, Func Offset: 0
	// Line 162, Address: 0x102a008, Func Offset: 0x18
	// Line 163, Address: 0x102a01c, Func Offset: 0x2c
	// Line 165, Address: 0x102a03c, Func Offset: 0x4c
	// Line 166, Address: 0x102a060, Func Offset: 0x70
	// Line 167, Address: 0x102a074, Func Offset: 0x84
	// Line 169, Address: 0x102a0a0, Func Offset: 0xb0
	// Line 172, Address: 0x102a0a8, Func Offset: 0xb8
	// Line 173, Address: 0x102a0c4, Func Offset: 0xd4
	// Line 174, Address: 0x102a0d4, Func Offset: 0xe4
	// Line 181, Address: 0x102a10c, Func Offset: 0x11c
	// Func End, Address: 0x102a11c, Func Offset: 0x12c
}

// 
// Start address: 0x102a120
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 184, Address: 0x102a120, Func Offset: 0
	// Line 188, Address: 0x102a12c, Func Offset: 0xc
	// Line 190, Address: 0x102a160, Func Offset: 0x40
	// Line 191, Address: 0x102a16c, Func Offset: 0x4c
	// Line 192, Address: 0x102a170, Func Offset: 0x50
	// Line 193, Address: 0x102a174, Func Offset: 0x54
	// Line 194, Address: 0x102a178, Func Offset: 0x58
	// Line 195, Address: 0x102a180, Func Offset: 0x60
	// Line 196, Address: 0x102a184, Func Offset: 0x64
	// Line 197, Address: 0x102a1a0, Func Offset: 0x80
	// Line 198, Address: 0x102a1a8, Func Offset: 0x88
	// Line 200, Address: 0x102a1b8, Func Offset: 0x98
	// Func End, Address: 0x102a1cc, Func Offset: 0xac
}

// 
// Start address: 0x102a1d0
int fadein0_new()
{
	// Line 204, Address: 0x102a1d0, Func Offset: 0
	// Line 206, Address: 0x102a1d8, Func Offset: 0x8
	// Line 208, Address: 0x102a1e4, Func Offset: 0x14
	// Line 211, Address: 0x102a1ec, Func Offset: 0x1c
	// Line 212, Address: 0x102a20c, Func Offset: 0x3c
	// Line 213, Address: 0x102a214, Func Offset: 0x44
	// Line 215, Address: 0x102a220, Func Offset: 0x50
	// Line 216, Address: 0x102a224, Func Offset: 0x54
	// Func End, Address: 0x102a234, Func Offset: 0x64
}

// 
// Start address: 0x102a240
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 220, Address: 0x102a240, Func Offset: 0
	// Line 224, Address: 0x102a254, Func Offset: 0x14
	// Line 225, Address: 0x102a288, Func Offset: 0x48
	// Line 227, Address: 0x102a2bc, Func Offset: 0x7c
	// Line 228, Address: 0x102a2c8, Func Offset: 0x88
	// Line 229, Address: 0x102a2d8, Func Offset: 0x98
	// Line 230, Address: 0x102a2dc, Func Offset: 0x9c
	// Line 231, Address: 0x102a2e0, Func Offset: 0xa0
	// Line 232, Address: 0x102a2fc, Func Offset: 0xbc
	// Line 234, Address: 0x102a318, Func Offset: 0xd8
	// Line 235, Address: 0x102a34c, Func Offset: 0x10c
	// Line 237, Address: 0x102a380, Func Offset: 0x140
	// Line 238, Address: 0x102a38c, Func Offset: 0x14c
	// Line 239, Address: 0x102a39c, Func Offset: 0x15c
	// Line 240, Address: 0x102a3a0, Func Offset: 0x160
	// Line 241, Address: 0x102a3a4, Func Offset: 0x164
	// Line 245, Address: 0x102a3c0, Func Offset: 0x180
	// Func End, Address: 0x102a3dc, Func Offset: 0x19c
}

// 
// Start address: 0x102a3e0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 249, Address: 0x102a3e0, Func Offset: 0
	// Line 250, Address: 0x102a3ec, Func Offset: 0xc
	// Line 253, Address: 0x102a44c, Func Offset: 0x6c
	// Line 254, Address: 0x102a470, Func Offset: 0x90
	// Line 255, Address: 0x102a480, Func Offset: 0xa0
	// Line 256, Address: 0x102a488, Func Offset: 0xa8
	// Line 257, Address: 0x102a4ac, Func Offset: 0xcc
	// Line 258, Address: 0x102a4bc, Func Offset: 0xdc
	// Line 259, Address: 0x102a4c4, Func Offset: 0xe4
	// Line 260, Address: 0x102a4e8, Func Offset: 0x108
	// Line 264, Address: 0x102a4fc, Func Offset: 0x11c
	// Func End, Address: 0x102a508, Func Offset: 0x128
}

// 
// Start address: 0x102a510
void fadeout()
{
	// Line 268, Address: 0x102a510, Func Offset: 0
	// Line 269, Address: 0x102a518, Func Offset: 0x8
	// Line 271, Address: 0x102a524, Func Offset: 0x14
	// Line 272, Address: 0x102a52c, Func Offset: 0x1c
	// Line 274, Address: 0x102a53c, Func Offset: 0x2c
	// Func End, Address: 0x102a544, Func Offset: 0x34
}

// 
// Start address: 0x102a550
int fadeout_new()
{
	// Line 278, Address: 0x102a550, Func Offset: 0
	// Line 280, Address: 0x102a558, Func Offset: 0x8
	// Line 282, Address: 0x102a564, Func Offset: 0x14
	// Line 285, Address: 0x102a56c, Func Offset: 0x1c
	// Line 286, Address: 0x102a58c, Func Offset: 0x3c
	// Line 287, Address: 0x102a594, Func Offset: 0x44
	// Line 289, Address: 0x102a5a0, Func Offset: 0x50
	// Line 290, Address: 0x102a5a4, Func Offset: 0x54
	// Func End, Address: 0x102a5b4, Func Offset: 0x64
}

// 
// Start address: 0x102a5c0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 293, Address: 0x102a5c0, Func Offset: 0
	// Line 297, Address: 0x102a5d0, Func Offset: 0x10
	// Line 299, Address: 0x102a604, Func Offset: 0x44
	// Line 300, Address: 0x102a610, Func Offset: 0x50
	// Line 301, Address: 0x102a61c, Func Offset: 0x5c
	// Line 302, Address: 0x102a620, Func Offset: 0x60
	// Line 303, Address: 0x102a63c, Func Offset: 0x7c
	// Line 305, Address: 0x102a670, Func Offset: 0xb0
	// Line 306, Address: 0x102a67c, Func Offset: 0xbc
	// Line 307, Address: 0x102a688, Func Offset: 0xc8
	// Line 308, Address: 0x102a68c, Func Offset: 0xcc
	// Line 311, Address: 0x102a6a8, Func Offset: 0xe8
	// Func End, Address: 0x102a6c0, Func Offset: 0x100
}

// 
// Start address: 0x102a6c0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 314, Address: 0x102a6c0, Func Offset: 0
	// Line 315, Address: 0x102a6c8, Func Offset: 0x8
	// Line 316, Address: 0x102a6d8, Func Offset: 0x18
	// Line 317, Address: 0x102a6ec, Func Offset: 0x2c
	// Line 318, Address: 0x102a6f4, Func Offset: 0x34
	// Line 319, Address: 0x102a704, Func Offset: 0x44
	// Line 320, Address: 0x102a714, Func Offset: 0x54
	// Line 321, Address: 0x102a71c, Func Offset: 0x5c
	// Line 322, Address: 0x102a72c, Func Offset: 0x6c
	// Line 325, Address: 0x102a73c, Func Offset: 0x7c
	// Func End, Address: 0x102a748, Func Offset: 0x88
}

// 
// Start address: 0x102a750
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 330, Address: 0x102a750, Func Offset: 0
	// Line 334, Address: 0x102a75c, Func Offset: 0xc
	// Line 335, Address: 0x102a764, Func Offset: 0x14
	// Line 337, Address: 0x102a770, Func Offset: 0x20
	// Line 339, Address: 0x102a7a4, Func Offset: 0x54
	// Line 340, Address: 0x102a7b0, Func Offset: 0x60
	// Line 341, Address: 0x102a7b8, Func Offset: 0x68
	// Line 342, Address: 0x102a7c0, Func Offset: 0x70
	// Line 343, Address: 0x102a7c8, Func Offset: 0x78
	// Line 344, Address: 0x102a7d0, Func Offset: 0x80
	// Line 345, Address: 0x102a7d4, Func Offset: 0x84
	// Line 346, Address: 0x102a7f0, Func Offset: 0xa0
	// Line 347, Address: 0x102a7f8, Func Offset: 0xa8
	// Line 349, Address: 0x102a808, Func Offset: 0xb8
	// Func End, Address: 0x102a81c, Func Offset: 0xcc
}

// 
// Start address: 0x102a820
int flashin_new()
{
	// Line 351, Address: 0x102a820, Func Offset: 0
	// Line 353, Address: 0x102a828, Func Offset: 0x8
	// Line 355, Address: 0x102a834, Func Offset: 0x14
	// Line 358, Address: 0x102a83c, Func Offset: 0x1c
	// Line 359, Address: 0x102a85c, Func Offset: 0x3c
	// Line 360, Address: 0x102a864, Func Offset: 0x44
	// Line 362, Address: 0x102a870, Func Offset: 0x50
	// Line 363, Address: 0x102a874, Func Offset: 0x54
	// Func End, Address: 0x102a884, Func Offset: 0x64
}

// 
// Start address: 0x102a890
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 365, Address: 0x102a890, Func Offset: 0
	// Line 369, Address: 0x102a8a4, Func Offset: 0x14
	// Line 370, Address: 0x102a8d8, Func Offset: 0x48
	// Line 372, Address: 0x102a90c, Func Offset: 0x7c
	// Line 373, Address: 0x102a918, Func Offset: 0x88
	// Line 374, Address: 0x102a928, Func Offset: 0x98
	// Line 375, Address: 0x102a92c, Func Offset: 0x9c
	// Line 376, Address: 0x102a930, Func Offset: 0xa0
	// Line 377, Address: 0x102a94c, Func Offset: 0xbc
	// Line 379, Address: 0x102a968, Func Offset: 0xd8
	// Line 380, Address: 0x102a99c, Func Offset: 0x10c
	// Line 382, Address: 0x102a9d0, Func Offset: 0x140
	// Line 383, Address: 0x102a9dc, Func Offset: 0x14c
	// Line 384, Address: 0x102a9ec, Func Offset: 0x15c
	// Line 385, Address: 0x102a9f0, Func Offset: 0x160
	// Line 386, Address: 0x102a9f4, Func Offset: 0x164
	// Line 390, Address: 0x102aa10, Func Offset: 0x180
	// Func End, Address: 0x102aa2c, Func Offset: 0x19c
}

// 
// Start address: 0x102aa30
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 394, Address: 0x102aa30, Func Offset: 0
	// Line 395, Address: 0x102aa3c, Func Offset: 0xc
	// Line 398, Address: 0x102aa9c, Func Offset: 0x6c
	// Line 399, Address: 0x102aac0, Func Offset: 0x90
	// Line 400, Address: 0x102aad0, Func Offset: 0xa0
	// Line 401, Address: 0x102aad8, Func Offset: 0xa8
	// Line 402, Address: 0x102aafc, Func Offset: 0xcc
	// Line 403, Address: 0x102ab0c, Func Offset: 0xdc
	// Line 404, Address: 0x102ab14, Func Offset: 0xe4
	// Line 405, Address: 0x102ab38, Func Offset: 0x108
	// Line 409, Address: 0x102ab4c, Func Offset: 0x11c
	// Func End, Address: 0x102ab58, Func Offset: 0x128
}

// 
// Start address: 0x102ab60
void flashout()
{
	// Line 413, Address: 0x102ab60, Func Offset: 0
	// Line 414, Address: 0x102ab68, Func Offset: 0x8
	// Line 416, Address: 0x102ab74, Func Offset: 0x14
	// Line 417, Address: 0x102ab7c, Func Offset: 0x1c
	// Line 419, Address: 0x102ab8c, Func Offset: 0x2c
	// Func End, Address: 0x102ab94, Func Offset: 0x34
}

// 
// Start address: 0x102aba0
int flashout_new()
{
	// Line 421, Address: 0x102aba0, Func Offset: 0
	// Line 423, Address: 0x102aba8, Func Offset: 0x8
	// Line 425, Address: 0x102abb4, Func Offset: 0x14
	// Line 428, Address: 0x102abbc, Func Offset: 0x1c
	// Line 429, Address: 0x102abdc, Func Offset: 0x3c
	// Line 430, Address: 0x102abe4, Func Offset: 0x44
	// Line 432, Address: 0x102abf0, Func Offset: 0x50
	// Line 433, Address: 0x102abf4, Func Offset: 0x54
	// Func End, Address: 0x102ac04, Func Offset: 0x64
}

// 
// Start address: 0x102ac10
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 436, Address: 0x102ac10, Func Offset: 0
	// Line 440, Address: 0x102ac20, Func Offset: 0x10
	// Line 442, Address: 0x102ac54, Func Offset: 0x44
	// Line 443, Address: 0x102ac60, Func Offset: 0x50
	// Line 444, Address: 0x102ac6c, Func Offset: 0x5c
	// Line 445, Address: 0x102ac70, Func Offset: 0x60
	// Line 446, Address: 0x102ac8c, Func Offset: 0x7c
	// Line 448, Address: 0x102acc0, Func Offset: 0xb0
	// Line 449, Address: 0x102accc, Func Offset: 0xbc
	// Line 450, Address: 0x102acd8, Func Offset: 0xc8
	// Line 451, Address: 0x102acdc, Func Offset: 0xcc
	// Line 454, Address: 0x102acf8, Func Offset: 0xe8
	// Func End, Address: 0x102ad10, Func Offset: 0x100
}

// 
// Start address: 0x102ad10
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 457, Address: 0x102ad10, Func Offset: 0
	// Line 458, Address: 0x102ad18, Func Offset: 0x8
	// Line 459, Address: 0x102ad30, Func Offset: 0x20
	// Line 460, Address: 0x102ad44, Func Offset: 0x34
	// Line 461, Address: 0x102ad4c, Func Offset: 0x3c
	// Line 462, Address: 0x102ad64, Func Offset: 0x54
	// Line 463, Address: 0x102ad74, Func Offset: 0x64
	// Line 464, Address: 0x102ad7c, Func Offset: 0x6c
	// Line 465, Address: 0x102ad94, Func Offset: 0x84
	// Line 469, Address: 0x102ada4, Func Offset: 0x94
	// Func End, Address: 0x102adb0, Func Offset: 0xa0
}

// 
// Start address: 0x102adb0
void colorset(int ColorNo)
{
	// Line 472, Address: 0x102adb0, Func Offset: 0
	// Line 473, Address: 0x102adbc, Func Offset: 0xc
	// Line 474, Address: 0x102adcc, Func Offset: 0x1c
	// Func End, Address: 0x102addc, Func Offset: 0x2c
}

// 
// Start address: 0x102ade0
void colorset2(int ColorNo)
{
	// Line 476, Address: 0x102ade0, Func Offset: 0
	// Line 477, Address: 0x102adec, Func Offset: 0xc
	// Line 478, Address: 0x102adfc, Func Offset: 0x1c
	// Func End, Address: 0x102ae0c, Func Offset: 0x2c
}

// 
// Start address: 0x102ae10
void colorset3(int ColorNo)
{
	// Line 480, Address: 0x102ae10, Func Offset: 0
	// Line 481, Address: 0x102ae1c, Func Offset: 0xc
	// Line 482, Address: 0x102ae2c, Func Offset: 0x1c
	// Func End, Address: 0x102ae3c, Func Offset: 0x2c
}

// 
// Start address: 0x102ae40
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 488, Address: 0x102ae40, Func Offset: 0
	// Line 493, Address: 0x102ae60, Func Offset: 0x20
	// Line 495, Address: 0x102aec8, Func Offset: 0x88
	// Line 497, Address: 0x102aed8, Func Offset: 0x98
	// Line 499, Address: 0x102aee8, Func Offset: 0xa8
	// Line 501, Address: 0x102aef8, Func Offset: 0xb8
	// Line 504, Address: 0x102af00, Func Offset: 0xc0
	// Line 505, Address: 0x102af18, Func Offset: 0xd8
	// Line 506, Address: 0x102af40, Func Offset: 0x100
	// Line 507, Address: 0x102af60, Func Offset: 0x120
	// Line 508, Address: 0x102af6c, Func Offset: 0x12c
	// Line 509, Address: 0x102af9c, Func Offset: 0x15c
	// Line 511, Address: 0x102afac, Func Offset: 0x16c
	// Func End, Address: 0x102afcc, Func Offset: 0x18c
}

// 
// Start address: 0x102afd0
int FadeProc()
{
	// Line 516, Address: 0x102afd0, Func Offset: 0
	// Line 517, Address: 0x102afd8, Func Offset: 0x8
	// Line 519, Address: 0x102b01c, Func Offset: 0x4c
	// Line 521, Address: 0x102b02c, Func Offset: 0x5c
	// Line 523, Address: 0x102b03c, Func Offset: 0x6c
	// Line 525, Address: 0x102b04c, Func Offset: 0x7c
	// Line 527, Address: 0x102b05c, Func Offset: 0x8c
	// Line 529, Address: 0x102b060, Func Offset: 0x90
	// Func End, Address: 0x102b070, Func Offset: 0xa0
}

