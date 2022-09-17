typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned char type_0[18];
typedef unsigned char type_1[8];
typedef unsigned char type_2[8];
typedef unsigned char type_3[8];
typedef _anon0 type_4[6];
typedef tagPALETTEENTRY type_5[48];
typedef unsigned char type_6[7];
typedef tagPALETTEENTRY type_7[64];
typedef unsigned char type_8[7];
typedef tagPALETTEENTRY type_9[2];
typedef tagPALETTEENTRY type_10[2];
typedef tagPALETTEENTRY type_11[2];
typedef tagPALETTEENTRY type_12[3];
typedef tagPALETTEENTRY type_13[3];
typedef tagPALETTEENTRY type_14[3];
typedef tagPALETTEENTRY type_15[3];
typedef tagPALETTEENTRY type_16[48];
typedef tagPALETTEENTRY type_17[16];
typedef tagPALETTEENTRY type_18[64];
typedef unsigned char type_19[14];
typedef unsigned char type_20[16];
typedef unsigned char type_21[6];

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
unsigned char col8a3cnt[18];
tagPALETTEENTRY col8a3col[3];
unsigned char col8a4cnt[6];
tagPALETTEENTRY col8a4col[2];
unsigned char col8a5cnt[16];
tagPALETTEENTRY col8a5col[2];
unsigned char col8a6cnt[14];
tagPALETTEENTRY col8a6col[2];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone8colorb[48];
_anon0 colortbl[6];
unsigned char clchgcnt[7];
unsigned char clchgtim[7];
_anon1 stageno;
tagPALETTEENTRY* lpcolorwk;
int* lpFadeFlag;
int FadeCount;
unsigned char colorcnt;
unsigned char startcolor;
unsigned char int_flg;
tagPALETTEENTRY* lpcolorwk4;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
void colchg8b();
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
// Start address: 0x10298e0
void clchgctr()
{
	// Line 138, Address: 0x10298e0, Func Offset: 0
	// Line 139, Address: 0x10298e8, Func Offset: 0x8
	// Line 140, Address: 0x10298f0, Func Offset: 0x10
	// Func End, Address: 0x1029900, Func Offset: 0x20
}

// 
// Start address: 0x1029900
void colchg8b()
{
	// Line 142, Address: 0x1029900, Func Offset: 0
	// Line 143, Address: 0x1029908, Func Offset: 0x8
	// Line 144, Address: 0x1029930, Func Offset: 0x30
	// Line 145, Address: 0x1029958, Func Offset: 0x58
	// Line 146, Address: 0x1029980, Func Offset: 0x80
	// Line 148, Address: 0x102999c, Func Offset: 0x9c
	// Line 149, Address: 0x10299c4, Func Offset: 0xc4
	// Line 150, Address: 0x10299ec, Func Offset: 0xec
	// Line 153, Address: 0x10299f4, Func Offset: 0xf4
	// Line 154, Address: 0x1029a1c, Func Offset: 0x11c
	// Line 157, Address: 0x1029a44, Func Offset: 0x144
	// Func End, Address: 0x1029a54, Func Offset: 0x154
}

// 
// Start address: 0x1029a60
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 166, Address: 0x1029a60, Func Offset: 0
	// Line 169, Address: 0x1029a78, Func Offset: 0x18
	// Line 170, Address: 0x1029a8c, Func Offset: 0x2c
	// Line 172, Address: 0x1029aac, Func Offset: 0x4c
	// Line 173, Address: 0x1029ad0, Func Offset: 0x70
	// Line 174, Address: 0x1029ae4, Func Offset: 0x84
	// Line 176, Address: 0x1029b10, Func Offset: 0xb0
	// Line 179, Address: 0x1029b18, Func Offset: 0xb8
	// Line 180, Address: 0x1029b34, Func Offset: 0xd4
	// Line 181, Address: 0x1029b44, Func Offset: 0xe4
	// Line 188, Address: 0x1029b7c, Func Offset: 0x11c
	// Func End, Address: 0x1029b8c, Func Offset: 0x12c
}

// 
// Start address: 0x1029b90
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 191, Address: 0x1029b90, Func Offset: 0
	// Line 195, Address: 0x1029b9c, Func Offset: 0xc
	// Line 197, Address: 0x1029bd0, Func Offset: 0x40
	// Line 198, Address: 0x1029bdc, Func Offset: 0x4c
	// Line 199, Address: 0x1029be0, Func Offset: 0x50
	// Line 200, Address: 0x1029be4, Func Offset: 0x54
	// Line 201, Address: 0x1029be8, Func Offset: 0x58
	// Line 202, Address: 0x1029bf0, Func Offset: 0x60
	// Line 203, Address: 0x1029bf4, Func Offset: 0x64
	// Line 204, Address: 0x1029c10, Func Offset: 0x80
	// Line 205, Address: 0x1029c18, Func Offset: 0x88
	// Line 207, Address: 0x1029c28, Func Offset: 0x98
	// Func End, Address: 0x1029c3c, Func Offset: 0xac
}

// 
// Start address: 0x1029c40
int fadein0_new()
{
	// Line 211, Address: 0x1029c40, Func Offset: 0
	// Line 213, Address: 0x1029c48, Func Offset: 0x8
	// Line 215, Address: 0x1029c54, Func Offset: 0x14
	// Line 218, Address: 0x1029c5c, Func Offset: 0x1c
	// Line 219, Address: 0x1029c7c, Func Offset: 0x3c
	// Line 220, Address: 0x1029c84, Func Offset: 0x44
	// Line 222, Address: 0x1029c90, Func Offset: 0x50
	// Line 223, Address: 0x1029c94, Func Offset: 0x54
	// Func End, Address: 0x1029ca4, Func Offset: 0x64
}

// 
// Start address: 0x1029cb0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 227, Address: 0x1029cb0, Func Offset: 0
	// Line 231, Address: 0x1029cc4, Func Offset: 0x14
	// Line 232, Address: 0x1029cf8, Func Offset: 0x48
	// Line 234, Address: 0x1029d2c, Func Offset: 0x7c
	// Line 235, Address: 0x1029d38, Func Offset: 0x88
	// Line 236, Address: 0x1029d48, Func Offset: 0x98
	// Line 237, Address: 0x1029d4c, Func Offset: 0x9c
	// Line 238, Address: 0x1029d50, Func Offset: 0xa0
	// Line 239, Address: 0x1029d6c, Func Offset: 0xbc
	// Line 241, Address: 0x1029d88, Func Offset: 0xd8
	// Line 242, Address: 0x1029dbc, Func Offset: 0x10c
	// Line 244, Address: 0x1029df0, Func Offset: 0x140
	// Line 245, Address: 0x1029dfc, Func Offset: 0x14c
	// Line 246, Address: 0x1029e0c, Func Offset: 0x15c
	// Line 247, Address: 0x1029e10, Func Offset: 0x160
	// Line 248, Address: 0x1029e14, Func Offset: 0x164
	// Line 252, Address: 0x1029e30, Func Offset: 0x180
	// Func End, Address: 0x1029e4c, Func Offset: 0x19c
}

// 
// Start address: 0x1029e50
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 256, Address: 0x1029e50, Func Offset: 0
	// Line 257, Address: 0x1029e5c, Func Offset: 0xc
	// Line 260, Address: 0x1029ebc, Func Offset: 0x6c
	// Line 261, Address: 0x1029ee0, Func Offset: 0x90
	// Line 262, Address: 0x1029ef0, Func Offset: 0xa0
	// Line 263, Address: 0x1029ef8, Func Offset: 0xa8
	// Line 264, Address: 0x1029f1c, Func Offset: 0xcc
	// Line 265, Address: 0x1029f2c, Func Offset: 0xdc
	// Line 266, Address: 0x1029f34, Func Offset: 0xe4
	// Line 267, Address: 0x1029f58, Func Offset: 0x108
	// Line 271, Address: 0x1029f6c, Func Offset: 0x11c
	// Func End, Address: 0x1029f78, Func Offset: 0x128
}

// 
// Start address: 0x1029f80
void fadeout()
{
	// Line 275, Address: 0x1029f80, Func Offset: 0
	// Line 276, Address: 0x1029f88, Func Offset: 0x8
	// Line 278, Address: 0x1029f94, Func Offset: 0x14
	// Line 279, Address: 0x1029f9c, Func Offset: 0x1c
	// Line 281, Address: 0x1029fac, Func Offset: 0x2c
	// Func End, Address: 0x1029fb4, Func Offset: 0x34
}

// 
// Start address: 0x1029fc0
int fadeout_new()
{
	// Line 285, Address: 0x1029fc0, Func Offset: 0
	// Line 287, Address: 0x1029fc8, Func Offset: 0x8
	// Line 289, Address: 0x1029fd4, Func Offset: 0x14
	// Line 292, Address: 0x1029fdc, Func Offset: 0x1c
	// Line 293, Address: 0x1029ffc, Func Offset: 0x3c
	// Line 294, Address: 0x102a004, Func Offset: 0x44
	// Line 296, Address: 0x102a010, Func Offset: 0x50
	// Line 297, Address: 0x102a014, Func Offset: 0x54
	// Func End, Address: 0x102a024, Func Offset: 0x64
}

// 
// Start address: 0x102a030
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 300, Address: 0x102a030, Func Offset: 0
	// Line 304, Address: 0x102a040, Func Offset: 0x10
	// Line 306, Address: 0x102a074, Func Offset: 0x44
	// Line 307, Address: 0x102a080, Func Offset: 0x50
	// Line 308, Address: 0x102a08c, Func Offset: 0x5c
	// Line 309, Address: 0x102a090, Func Offset: 0x60
	// Line 310, Address: 0x102a0ac, Func Offset: 0x7c
	// Line 312, Address: 0x102a0e0, Func Offset: 0xb0
	// Line 313, Address: 0x102a0ec, Func Offset: 0xbc
	// Line 314, Address: 0x102a0f8, Func Offset: 0xc8
	// Line 315, Address: 0x102a0fc, Func Offset: 0xcc
	// Line 318, Address: 0x102a118, Func Offset: 0xe8
	// Func End, Address: 0x102a130, Func Offset: 0x100
}

// 
// Start address: 0x102a130
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 321, Address: 0x102a130, Func Offset: 0
	// Line 322, Address: 0x102a138, Func Offset: 0x8
	// Line 323, Address: 0x102a148, Func Offset: 0x18
	// Line 324, Address: 0x102a15c, Func Offset: 0x2c
	// Line 325, Address: 0x102a164, Func Offset: 0x34
	// Line 326, Address: 0x102a174, Func Offset: 0x44
	// Line 327, Address: 0x102a184, Func Offset: 0x54
	// Line 328, Address: 0x102a18c, Func Offset: 0x5c
	// Line 329, Address: 0x102a19c, Func Offset: 0x6c
	// Line 332, Address: 0x102a1ac, Func Offset: 0x7c
	// Func End, Address: 0x102a1b8, Func Offset: 0x88
}

// 
// Start address: 0x102a1c0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 337, Address: 0x102a1c0, Func Offset: 0
	// Line 341, Address: 0x102a1cc, Func Offset: 0xc
	// Line 342, Address: 0x102a1d4, Func Offset: 0x14
	// Line 344, Address: 0x102a1e0, Func Offset: 0x20
	// Line 346, Address: 0x102a214, Func Offset: 0x54
	// Line 347, Address: 0x102a220, Func Offset: 0x60
	// Line 348, Address: 0x102a228, Func Offset: 0x68
	// Line 349, Address: 0x102a230, Func Offset: 0x70
	// Line 350, Address: 0x102a238, Func Offset: 0x78
	// Line 351, Address: 0x102a240, Func Offset: 0x80
	// Line 352, Address: 0x102a244, Func Offset: 0x84
	// Line 353, Address: 0x102a260, Func Offset: 0xa0
	// Line 354, Address: 0x102a268, Func Offset: 0xa8
	// Line 356, Address: 0x102a278, Func Offset: 0xb8
	// Func End, Address: 0x102a28c, Func Offset: 0xcc
}

// 
// Start address: 0x102a290
int flashin_new()
{
	// Line 358, Address: 0x102a290, Func Offset: 0
	// Line 360, Address: 0x102a298, Func Offset: 0x8
	// Line 362, Address: 0x102a2a4, Func Offset: 0x14
	// Line 365, Address: 0x102a2ac, Func Offset: 0x1c
	// Line 366, Address: 0x102a2cc, Func Offset: 0x3c
	// Line 367, Address: 0x102a2d4, Func Offset: 0x44
	// Line 369, Address: 0x102a2e0, Func Offset: 0x50
	// Line 370, Address: 0x102a2e4, Func Offset: 0x54
	// Func End, Address: 0x102a2f4, Func Offset: 0x64
}

// 
// Start address: 0x102a300
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 372, Address: 0x102a300, Func Offset: 0
	// Line 376, Address: 0x102a314, Func Offset: 0x14
	// Line 377, Address: 0x102a348, Func Offset: 0x48
	// Line 379, Address: 0x102a37c, Func Offset: 0x7c
	// Line 380, Address: 0x102a388, Func Offset: 0x88
	// Line 381, Address: 0x102a398, Func Offset: 0x98
	// Line 382, Address: 0x102a39c, Func Offset: 0x9c
	// Line 383, Address: 0x102a3a0, Func Offset: 0xa0
	// Line 384, Address: 0x102a3bc, Func Offset: 0xbc
	// Line 386, Address: 0x102a3d8, Func Offset: 0xd8
	// Line 387, Address: 0x102a40c, Func Offset: 0x10c
	// Line 389, Address: 0x102a440, Func Offset: 0x140
	// Line 390, Address: 0x102a44c, Func Offset: 0x14c
	// Line 391, Address: 0x102a45c, Func Offset: 0x15c
	// Line 392, Address: 0x102a460, Func Offset: 0x160
	// Line 393, Address: 0x102a464, Func Offset: 0x164
	// Line 397, Address: 0x102a480, Func Offset: 0x180
	// Func End, Address: 0x102a49c, Func Offset: 0x19c
}

// 
// Start address: 0x102a4a0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 401, Address: 0x102a4a0, Func Offset: 0
	// Line 402, Address: 0x102a4ac, Func Offset: 0xc
	// Line 405, Address: 0x102a50c, Func Offset: 0x6c
	// Line 406, Address: 0x102a530, Func Offset: 0x90
	// Line 407, Address: 0x102a540, Func Offset: 0xa0
	// Line 408, Address: 0x102a548, Func Offset: 0xa8
	// Line 409, Address: 0x102a56c, Func Offset: 0xcc
	// Line 410, Address: 0x102a57c, Func Offset: 0xdc
	// Line 411, Address: 0x102a584, Func Offset: 0xe4
	// Line 412, Address: 0x102a5a8, Func Offset: 0x108
	// Line 416, Address: 0x102a5bc, Func Offset: 0x11c
	// Func End, Address: 0x102a5c8, Func Offset: 0x128
}

// 
// Start address: 0x102a5d0
void flashout()
{
	// Line 420, Address: 0x102a5d0, Func Offset: 0
	// Line 421, Address: 0x102a5d8, Func Offset: 0x8
	// Line 423, Address: 0x102a5e4, Func Offset: 0x14
	// Line 424, Address: 0x102a5ec, Func Offset: 0x1c
	// Line 426, Address: 0x102a5fc, Func Offset: 0x2c
	// Func End, Address: 0x102a604, Func Offset: 0x34
}

// 
// Start address: 0x102a610
int flashout_new()
{
	// Line 428, Address: 0x102a610, Func Offset: 0
	// Line 430, Address: 0x102a618, Func Offset: 0x8
	// Line 432, Address: 0x102a624, Func Offset: 0x14
	// Line 435, Address: 0x102a62c, Func Offset: 0x1c
	// Line 436, Address: 0x102a64c, Func Offset: 0x3c
	// Line 437, Address: 0x102a654, Func Offset: 0x44
	// Line 439, Address: 0x102a660, Func Offset: 0x50
	// Line 440, Address: 0x102a664, Func Offset: 0x54
	// Func End, Address: 0x102a674, Func Offset: 0x64
}

// 
// Start address: 0x102a680
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 443, Address: 0x102a680, Func Offset: 0
	// Line 447, Address: 0x102a690, Func Offset: 0x10
	// Line 449, Address: 0x102a6c4, Func Offset: 0x44
	// Line 450, Address: 0x102a6d0, Func Offset: 0x50
	// Line 451, Address: 0x102a6dc, Func Offset: 0x5c
	// Line 452, Address: 0x102a6e0, Func Offset: 0x60
	// Line 453, Address: 0x102a6fc, Func Offset: 0x7c
	// Line 455, Address: 0x102a730, Func Offset: 0xb0
	// Line 456, Address: 0x102a73c, Func Offset: 0xbc
	// Line 457, Address: 0x102a748, Func Offset: 0xc8
	// Line 458, Address: 0x102a74c, Func Offset: 0xcc
	// Line 461, Address: 0x102a768, Func Offset: 0xe8
	// Func End, Address: 0x102a780, Func Offset: 0x100
}

// 
// Start address: 0x102a780
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 464, Address: 0x102a780, Func Offset: 0
	// Line 465, Address: 0x102a788, Func Offset: 0x8
	// Line 466, Address: 0x102a7a0, Func Offset: 0x20
	// Line 467, Address: 0x102a7b4, Func Offset: 0x34
	// Line 468, Address: 0x102a7bc, Func Offset: 0x3c
	// Line 469, Address: 0x102a7d4, Func Offset: 0x54
	// Line 470, Address: 0x102a7e4, Func Offset: 0x64
	// Line 471, Address: 0x102a7ec, Func Offset: 0x6c
	// Line 472, Address: 0x102a804, Func Offset: 0x84
	// Line 476, Address: 0x102a814, Func Offset: 0x94
	// Func End, Address: 0x102a820, Func Offset: 0xa0
}

// 
// Start address: 0x102a820
void colorset(int ColorNo)
{
	// Line 479, Address: 0x102a820, Func Offset: 0
	// Line 480, Address: 0x102a82c, Func Offset: 0xc
	// Line 481, Address: 0x102a83c, Func Offset: 0x1c
	// Func End, Address: 0x102a84c, Func Offset: 0x2c
}

// 
// Start address: 0x102a850
void colorset2(int ColorNo)
{
	// Line 483, Address: 0x102a850, Func Offset: 0
	// Line 484, Address: 0x102a85c, Func Offset: 0xc
	// Line 485, Address: 0x102a86c, Func Offset: 0x1c
	// Func End, Address: 0x102a87c, Func Offset: 0x2c
}

// 
// Start address: 0x102a880
void colorset3(int ColorNo)
{
	// Line 487, Address: 0x102a880, Func Offset: 0
	// Line 488, Address: 0x102a88c, Func Offset: 0xc
	// Line 489, Address: 0x102a89c, Func Offset: 0x1c
	// Func End, Address: 0x102a8ac, Func Offset: 0x2c
}

// 
// Start address: 0x102a8b0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 495, Address: 0x102a8b0, Func Offset: 0
	// Line 500, Address: 0x102a8d0, Func Offset: 0x20
	// Line 502, Address: 0x102a938, Func Offset: 0x88
	// Line 504, Address: 0x102a948, Func Offset: 0x98
	// Line 506, Address: 0x102a958, Func Offset: 0xa8
	// Line 508, Address: 0x102a968, Func Offset: 0xb8
	// Line 511, Address: 0x102a970, Func Offset: 0xc0
	// Line 512, Address: 0x102a988, Func Offset: 0xd8
	// Line 513, Address: 0x102a9b0, Func Offset: 0x100
	// Line 514, Address: 0x102a9d0, Func Offset: 0x120
	// Line 515, Address: 0x102a9dc, Func Offset: 0x12c
	// Line 516, Address: 0x102aa0c, Func Offset: 0x15c
	// Line 518, Address: 0x102aa1c, Func Offset: 0x16c
	// Func End, Address: 0x102aa3c, Func Offset: 0x18c
}

// 
// Start address: 0x102aa40
int FadeProc()
{
	// Line 523, Address: 0x102aa40, Func Offset: 0
	// Line 524, Address: 0x102aa48, Func Offset: 0x8
	// Line 526, Address: 0x102aa8c, Func Offset: 0x4c
	// Line 528, Address: 0x102aa9c, Func Offset: 0x5c
	// Line 530, Address: 0x102aaac, Func Offset: 0x6c
	// Line 532, Address: 0x102aabc, Func Offset: 0x7c
	// Line 534, Address: 0x102aacc, Func Offset: 0x8c
	// Line 536, Address: 0x102aad0, Func Offset: 0x90
	// Func End, Address: 0x102aae0, Func Offset: 0xa0
}

