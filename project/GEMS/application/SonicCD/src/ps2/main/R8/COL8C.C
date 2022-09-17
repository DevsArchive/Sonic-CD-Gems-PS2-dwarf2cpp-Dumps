typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[48];
typedef tagPALETTEENTRY type_1[16];
typedef tagPALETTEENTRY type_2[64];
typedef unsigned char type_3[13];
typedef unsigned char type_4[8];
typedef unsigned char type_5[8];
typedef unsigned char type_6[8];
typedef unsigned char type_7[7];
typedef unsigned char type_8[7];
typedef _anon0 type_9[12];
typedef tagPALETTEENTRY type_10[16];
typedef tagPALETTEENTRY type_11[48];
typedef tagPALETTEENTRY type_12[48];
typedef tagPALETTEENTRY type_13[64];
typedef tagPALETTEENTRY type_14[3];
typedef tagPALETTEENTRY type_15[3];
typedef tagPALETTEENTRY type_16[3];
typedef tagPALETTEENTRY type_17[3];
typedef tagPALETTEENTRY type_18[40];
typedef tagPALETTEENTRY type_19[16];
typedef tagPALETTEENTRY type_20[16];

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
unsigned char col8a3cnt[13];
tagPALETTEENTRY col8a3col[3];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone83ccolor[48];
tagPALETTEENTRY zone82ccolor[48];
tagPALETTEENTRY boss8col_0[16];
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
void colchg8c();
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
// Start address: 0x101c410
void clchgctr()
{
	// Line 144, Address: 0x101c410, Func Offset: 0
	// Line 145, Address: 0x101c418, Func Offset: 0x8
	// Line 146, Address: 0x101c420, Func Offset: 0x10
	// Func End, Address: 0x101c430, Func Offset: 0x20
}

// 
// Start address: 0x101c430
void colchg8c()
{
	// Line 148, Address: 0x101c430, Func Offset: 0
	// Line 149, Address: 0x101c438, Func Offset: 0x8
	// Line 150, Address: 0x101c460, Func Offset: 0x30
	// Line 151, Address: 0x101c488, Func Offset: 0x58
	// Line 152, Address: 0x101c4b0, Func Offset: 0x80
	// Line 154, Address: 0x101c4c8, Func Offset: 0x98
	// Line 156, Address: 0x101c4f0, Func Offset: 0xc0
	// Func End, Address: 0x101c500, Func Offset: 0xd0
}

// 
// Start address: 0x101c500
void colchg_boss8(unsigned char* a3, unsigned char* a4)
{
	tagPALETTEENTRY* lpPe;
	char d0;
	// Line 178, Address: 0x101c500, Func Offset: 0
	// Line 182, Address: 0x101c514, Func Offset: 0x14
	// Line 183, Address: 0x101c528, Func Offset: 0x28
	// Line 184, Address: 0x101c550, Func Offset: 0x50
	// Line 185, Address: 0x101c558, Func Offset: 0x58
	// Line 186, Address: 0x101c578, Func Offset: 0x78
	// Line 188, Address: 0x101c590, Func Offset: 0x90
	// Line 189, Address: 0x101c598, Func Offset: 0x98
	// Line 190, Address: 0x101c5a4, Func Offset: 0xa4
	// Line 191, Address: 0x101c5e4, Func Offset: 0xe4
	// Line 192, Address: 0x101c628, Func Offset: 0x128
	// Line 193, Address: 0x101c66c, Func Offset: 0x16c
	// Line 195, Address: 0x101c6b0, Func Offset: 0x1b0
	// Func End, Address: 0x101c6c4, Func Offset: 0x1c4
}

// 
// Start address: 0x101c6d0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 204, Address: 0x101c6d0, Func Offset: 0
	// Line 207, Address: 0x101c6e8, Func Offset: 0x18
	// Line 208, Address: 0x101c6fc, Func Offset: 0x2c
	// Line 210, Address: 0x101c71c, Func Offset: 0x4c
	// Line 211, Address: 0x101c740, Func Offset: 0x70
	// Line 212, Address: 0x101c754, Func Offset: 0x84
	// Line 214, Address: 0x101c780, Func Offset: 0xb0
	// Line 217, Address: 0x101c788, Func Offset: 0xb8
	// Line 218, Address: 0x101c7a4, Func Offset: 0xd4
	// Line 219, Address: 0x101c7b4, Func Offset: 0xe4
	// Line 226, Address: 0x101c7ec, Func Offset: 0x11c
	// Func End, Address: 0x101c7fc, Func Offset: 0x12c
}

// 
// Start address: 0x101c800
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 228, Address: 0x101c800, Func Offset: 0
	// Line 232, Address: 0x101c80c, Func Offset: 0xc
	// Line 234, Address: 0x101c840, Func Offset: 0x40
	// Line 235, Address: 0x101c84c, Func Offset: 0x4c
	// Line 236, Address: 0x101c850, Func Offset: 0x50
	// Line 237, Address: 0x101c854, Func Offset: 0x54
	// Line 238, Address: 0x101c858, Func Offset: 0x58
	// Line 239, Address: 0x101c860, Func Offset: 0x60
	// Line 240, Address: 0x101c864, Func Offset: 0x64
	// Line 241, Address: 0x101c880, Func Offset: 0x80
	// Line 242, Address: 0x101c888, Func Offset: 0x88
	// Line 244, Address: 0x101c898, Func Offset: 0x98
	// Func End, Address: 0x101c8ac, Func Offset: 0xac
}

// 
// Start address: 0x101c8b0
int fadein0_new()
{
	// Line 248, Address: 0x101c8b0, Func Offset: 0
	// Line 250, Address: 0x101c8b8, Func Offset: 0x8
	// Line 252, Address: 0x101c8c4, Func Offset: 0x14
	// Line 255, Address: 0x101c8cc, Func Offset: 0x1c
	// Line 256, Address: 0x101c8ec, Func Offset: 0x3c
	// Line 257, Address: 0x101c8f4, Func Offset: 0x44
	// Line 259, Address: 0x101c900, Func Offset: 0x50
	// Line 260, Address: 0x101c904, Func Offset: 0x54
	// Func End, Address: 0x101c914, Func Offset: 0x64
}

// 
// Start address: 0x101c920
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 264, Address: 0x101c920, Func Offset: 0
	// Line 268, Address: 0x101c934, Func Offset: 0x14
	// Line 269, Address: 0x101c968, Func Offset: 0x48
	// Line 271, Address: 0x101c99c, Func Offset: 0x7c
	// Line 272, Address: 0x101c9a8, Func Offset: 0x88
	// Line 273, Address: 0x101c9b8, Func Offset: 0x98
	// Line 274, Address: 0x101c9bc, Func Offset: 0x9c
	// Line 275, Address: 0x101c9c0, Func Offset: 0xa0
	// Line 276, Address: 0x101c9dc, Func Offset: 0xbc
	// Line 278, Address: 0x101c9f8, Func Offset: 0xd8
	// Line 279, Address: 0x101ca2c, Func Offset: 0x10c
	// Line 281, Address: 0x101ca60, Func Offset: 0x140
	// Line 282, Address: 0x101ca6c, Func Offset: 0x14c
	// Line 283, Address: 0x101ca7c, Func Offset: 0x15c
	// Line 284, Address: 0x101ca80, Func Offset: 0x160
	// Line 285, Address: 0x101ca84, Func Offset: 0x164
	// Line 289, Address: 0x101caa0, Func Offset: 0x180
	// Func End, Address: 0x101cabc, Func Offset: 0x19c
}

// 
// Start address: 0x101cac0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 293, Address: 0x101cac0, Func Offset: 0
	// Line 294, Address: 0x101cacc, Func Offset: 0xc
	// Line 297, Address: 0x101cb2c, Func Offset: 0x6c
	// Line 298, Address: 0x101cb50, Func Offset: 0x90
	// Line 299, Address: 0x101cb60, Func Offset: 0xa0
	// Line 300, Address: 0x101cb68, Func Offset: 0xa8
	// Line 301, Address: 0x101cb8c, Func Offset: 0xcc
	// Line 302, Address: 0x101cb9c, Func Offset: 0xdc
	// Line 303, Address: 0x101cba4, Func Offset: 0xe4
	// Line 304, Address: 0x101cbc8, Func Offset: 0x108
	// Line 308, Address: 0x101cbdc, Func Offset: 0x11c
	// Func End, Address: 0x101cbe8, Func Offset: 0x128
}

// 
// Start address: 0x101cbf0
void fadein_boss8()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	// Line 314, Address: 0x101cbf0, Func Offset: 0
	// Line 317, Address: 0x101cc00, Func Offset: 0x10
	// Line 318, Address: 0x101cc0c, Func Offset: 0x1c
	// Line 319, Address: 0x101cc18, Func Offset: 0x28
	// Line 320, Address: 0x101cc24, Func Offset: 0x34
	// Line 321, Address: 0x101cc34, Func Offset: 0x44
	// Func End, Address: 0x101cc4c, Func Offset: 0x5c
}

// 
// Start address: 0x101cc50
void fadein1_boss8(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	short i;
	// Line 323, Address: 0x101cc50, Func Offset: 0
	// Line 326, Address: 0x101cc64, Func Offset: 0x14
	// Line 327, Address: 0x101cc70, Func Offset: 0x20
	// Line 328, Address: 0x101cc80, Func Offset: 0x30
	// Line 329, Address: 0x101cc8c, Func Offset: 0x3c
	// Line 330, Address: 0x101cc98, Func Offset: 0x48
	// Line 331, Address: 0x101ccb8, Func Offset: 0x68
	// Func End, Address: 0x101cccc, Func Offset: 0x7c
}

// 
// Start address: 0x101ccd0
void fadeout()
{
	// Line 334, Address: 0x101ccd0, Func Offset: 0
	// Line 335, Address: 0x101ccd8, Func Offset: 0x8
	// Line 337, Address: 0x101cce4, Func Offset: 0x14
	// Line 338, Address: 0x101ccec, Func Offset: 0x1c
	// Line 340, Address: 0x101ccfc, Func Offset: 0x2c
	// Func End, Address: 0x101cd04, Func Offset: 0x34
}

// 
// Start address: 0x101cd10
int fadeout_new()
{
	// Line 344, Address: 0x101cd10, Func Offset: 0
	// Line 346, Address: 0x101cd18, Func Offset: 0x8
	// Line 348, Address: 0x101cd24, Func Offset: 0x14
	// Line 351, Address: 0x101cd2c, Func Offset: 0x1c
	// Line 352, Address: 0x101cd4c, Func Offset: 0x3c
	// Line 353, Address: 0x101cd54, Func Offset: 0x44
	// Line 355, Address: 0x101cd60, Func Offset: 0x50
	// Line 356, Address: 0x101cd64, Func Offset: 0x54
	// Func End, Address: 0x101cd74, Func Offset: 0x64
}

// 
// Start address: 0x101cd80
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 359, Address: 0x101cd80, Func Offset: 0
	// Line 363, Address: 0x101cd90, Func Offset: 0x10
	// Line 365, Address: 0x101cdc4, Func Offset: 0x44
	// Line 366, Address: 0x101cdd0, Func Offset: 0x50
	// Line 367, Address: 0x101cddc, Func Offset: 0x5c
	// Line 368, Address: 0x101cde0, Func Offset: 0x60
	// Line 369, Address: 0x101cdfc, Func Offset: 0x7c
	// Line 371, Address: 0x101ce30, Func Offset: 0xb0
	// Line 372, Address: 0x101ce3c, Func Offset: 0xbc
	// Line 373, Address: 0x101ce48, Func Offset: 0xc8
	// Line 374, Address: 0x101ce4c, Func Offset: 0xcc
	// Line 377, Address: 0x101ce68, Func Offset: 0xe8
	// Func End, Address: 0x101ce80, Func Offset: 0x100
}

// 
// Start address: 0x101ce80
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 380, Address: 0x101ce80, Func Offset: 0
	// Line 381, Address: 0x101ce88, Func Offset: 0x8
	// Line 382, Address: 0x101ce98, Func Offset: 0x18
	// Line 383, Address: 0x101ceac, Func Offset: 0x2c
	// Line 384, Address: 0x101ceb4, Func Offset: 0x34
	// Line 385, Address: 0x101cec4, Func Offset: 0x44
	// Line 386, Address: 0x101ced4, Func Offset: 0x54
	// Line 387, Address: 0x101cedc, Func Offset: 0x5c
	// Line 388, Address: 0x101ceec, Func Offset: 0x6c
	// Line 391, Address: 0x101cefc, Func Offset: 0x7c
	// Func End, Address: 0x101cf08, Func Offset: 0x88
}

// 
// Start address: 0x101cf10
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 396, Address: 0x101cf10, Func Offset: 0
	// Line 400, Address: 0x101cf1c, Func Offset: 0xc
	// Line 401, Address: 0x101cf24, Func Offset: 0x14
	// Line 403, Address: 0x101cf30, Func Offset: 0x20
	// Line 405, Address: 0x101cf64, Func Offset: 0x54
	// Line 406, Address: 0x101cf70, Func Offset: 0x60
	// Line 407, Address: 0x101cf78, Func Offset: 0x68
	// Line 408, Address: 0x101cf80, Func Offset: 0x70
	// Line 409, Address: 0x101cf88, Func Offset: 0x78
	// Line 410, Address: 0x101cf90, Func Offset: 0x80
	// Line 411, Address: 0x101cf94, Func Offset: 0x84
	// Line 412, Address: 0x101cfb0, Func Offset: 0xa0
	// Line 413, Address: 0x101cfb8, Func Offset: 0xa8
	// Line 415, Address: 0x101cfc8, Func Offset: 0xb8
	// Func End, Address: 0x101cfdc, Func Offset: 0xcc
}

// 
// Start address: 0x101cfe0
int flashin_new()
{
	// Line 417, Address: 0x101cfe0, Func Offset: 0
	// Line 419, Address: 0x101cfe8, Func Offset: 0x8
	// Line 421, Address: 0x101cff4, Func Offset: 0x14
	// Line 424, Address: 0x101cffc, Func Offset: 0x1c
	// Line 425, Address: 0x101d01c, Func Offset: 0x3c
	// Line 426, Address: 0x101d024, Func Offset: 0x44
	// Line 428, Address: 0x101d030, Func Offset: 0x50
	// Line 429, Address: 0x101d034, Func Offset: 0x54
	// Func End, Address: 0x101d044, Func Offset: 0x64
}

// 
// Start address: 0x101d050
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 431, Address: 0x101d050, Func Offset: 0
	// Line 435, Address: 0x101d064, Func Offset: 0x14
	// Line 436, Address: 0x101d098, Func Offset: 0x48
	// Line 438, Address: 0x101d0cc, Func Offset: 0x7c
	// Line 439, Address: 0x101d0d8, Func Offset: 0x88
	// Line 440, Address: 0x101d0e8, Func Offset: 0x98
	// Line 441, Address: 0x101d0ec, Func Offset: 0x9c
	// Line 442, Address: 0x101d0f0, Func Offset: 0xa0
	// Line 443, Address: 0x101d10c, Func Offset: 0xbc
	// Line 445, Address: 0x101d128, Func Offset: 0xd8
	// Line 446, Address: 0x101d15c, Func Offset: 0x10c
	// Line 448, Address: 0x101d190, Func Offset: 0x140
	// Line 449, Address: 0x101d19c, Func Offset: 0x14c
	// Line 450, Address: 0x101d1ac, Func Offset: 0x15c
	// Line 451, Address: 0x101d1b0, Func Offset: 0x160
	// Line 452, Address: 0x101d1b4, Func Offset: 0x164
	// Line 456, Address: 0x101d1d0, Func Offset: 0x180
	// Func End, Address: 0x101d1ec, Func Offset: 0x19c
}

// 
// Start address: 0x101d1f0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 460, Address: 0x101d1f0, Func Offset: 0
	// Line 461, Address: 0x101d1fc, Func Offset: 0xc
	// Line 464, Address: 0x101d25c, Func Offset: 0x6c
	// Line 465, Address: 0x101d280, Func Offset: 0x90
	// Line 466, Address: 0x101d290, Func Offset: 0xa0
	// Line 467, Address: 0x101d298, Func Offset: 0xa8
	// Line 468, Address: 0x101d2bc, Func Offset: 0xcc
	// Line 469, Address: 0x101d2cc, Func Offset: 0xdc
	// Line 470, Address: 0x101d2d4, Func Offset: 0xe4
	// Line 471, Address: 0x101d2f8, Func Offset: 0x108
	// Line 475, Address: 0x101d30c, Func Offset: 0x11c
	// Func End, Address: 0x101d318, Func Offset: 0x128
}

// 
// Start address: 0x101d320
void flashout()
{
	// Line 479, Address: 0x101d320, Func Offset: 0
	// Line 480, Address: 0x101d328, Func Offset: 0x8
	// Line 482, Address: 0x101d334, Func Offset: 0x14
	// Line 483, Address: 0x101d33c, Func Offset: 0x1c
	// Line 485, Address: 0x101d34c, Func Offset: 0x2c
	// Func End, Address: 0x101d354, Func Offset: 0x34
}

// 
// Start address: 0x101d360
int flashout_new()
{
	// Line 487, Address: 0x101d360, Func Offset: 0
	// Line 489, Address: 0x101d368, Func Offset: 0x8
	// Line 491, Address: 0x101d374, Func Offset: 0x14
	// Line 494, Address: 0x101d37c, Func Offset: 0x1c
	// Line 495, Address: 0x101d39c, Func Offset: 0x3c
	// Line 496, Address: 0x101d3a4, Func Offset: 0x44
	// Line 498, Address: 0x101d3b0, Func Offset: 0x50
	// Line 499, Address: 0x101d3b4, Func Offset: 0x54
	// Func End, Address: 0x101d3c4, Func Offset: 0x64
}

// 
// Start address: 0x101d3d0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 502, Address: 0x101d3d0, Func Offset: 0
	// Line 506, Address: 0x101d3e0, Func Offset: 0x10
	// Line 508, Address: 0x101d414, Func Offset: 0x44
	// Line 509, Address: 0x101d420, Func Offset: 0x50
	// Line 510, Address: 0x101d42c, Func Offset: 0x5c
	// Line 511, Address: 0x101d430, Func Offset: 0x60
	// Line 512, Address: 0x101d44c, Func Offset: 0x7c
	// Line 514, Address: 0x101d480, Func Offset: 0xb0
	// Line 515, Address: 0x101d48c, Func Offset: 0xbc
	// Line 516, Address: 0x101d498, Func Offset: 0xc8
	// Line 517, Address: 0x101d49c, Func Offset: 0xcc
	// Line 520, Address: 0x101d4b8, Func Offset: 0xe8
	// Func End, Address: 0x101d4d0, Func Offset: 0x100
}

// 
// Start address: 0x101d4d0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 523, Address: 0x101d4d0, Func Offset: 0
	// Line 524, Address: 0x101d4d8, Func Offset: 0x8
	// Line 525, Address: 0x101d4f0, Func Offset: 0x20
	// Line 526, Address: 0x101d504, Func Offset: 0x34
	// Line 527, Address: 0x101d50c, Func Offset: 0x3c
	// Line 528, Address: 0x101d524, Func Offset: 0x54
	// Line 529, Address: 0x101d534, Func Offset: 0x64
	// Line 530, Address: 0x101d53c, Func Offset: 0x6c
	// Line 531, Address: 0x101d554, Func Offset: 0x84
	// Line 535, Address: 0x101d564, Func Offset: 0x94
	// Func End, Address: 0x101d570, Func Offset: 0xa0
}

// 
// Start address: 0x101d570
void colorset(int ColorNo)
{
	// Line 537, Address: 0x101d570, Func Offset: 0
	// Line 538, Address: 0x101d57c, Func Offset: 0xc
	// Line 539, Address: 0x101d58c, Func Offset: 0x1c
	// Func End, Address: 0x101d59c, Func Offset: 0x2c
}

// 
// Start address: 0x101d5a0
void colorset2(int ColorNo)
{
	// Line 541, Address: 0x101d5a0, Func Offset: 0
	// Line 542, Address: 0x101d5ac, Func Offset: 0xc
	// Line 543, Address: 0x101d5bc, Func Offset: 0x1c
	// Func End, Address: 0x101d5cc, Func Offset: 0x2c
}

// 
// Start address: 0x101d5d0
void colorset3(int ColorNo)
{
	// Line 545, Address: 0x101d5d0, Func Offset: 0
	// Line 546, Address: 0x101d5dc, Func Offset: 0xc
	// Line 547, Address: 0x101d5ec, Func Offset: 0x1c
	// Func End, Address: 0x101d5fc, Func Offset: 0x2c
}

// 
// Start address: 0x101d600
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 553, Address: 0x101d600, Func Offset: 0
	// Line 558, Address: 0x101d620, Func Offset: 0x20
	// Line 560, Address: 0x101d688, Func Offset: 0x88
	// Line 562, Address: 0x101d698, Func Offset: 0x98
	// Line 564, Address: 0x101d6a8, Func Offset: 0xa8
	// Line 566, Address: 0x101d6b8, Func Offset: 0xb8
	// Line 569, Address: 0x101d6c0, Func Offset: 0xc0
	// Line 570, Address: 0x101d6d8, Func Offset: 0xd8
	// Line 571, Address: 0x101d71c, Func Offset: 0x11c
	// Line 572, Address: 0x101d73c, Func Offset: 0x13c
	// Line 573, Address: 0x101d748, Func Offset: 0x148
	// Line 574, Address: 0x101d778, Func Offset: 0x178
	// Line 576, Address: 0x101d788, Func Offset: 0x188
	// Func End, Address: 0x101d7a8, Func Offset: 0x1a8
}

// 
// Start address: 0x101d7b0
int FadeProc()
{
	// Line 581, Address: 0x101d7b0, Func Offset: 0
	// Line 582, Address: 0x101d7b8, Func Offset: 0x8
	// Line 584, Address: 0x101d7fc, Func Offset: 0x4c
	// Line 586, Address: 0x101d80c, Func Offset: 0x5c
	// Line 588, Address: 0x101d81c, Func Offset: 0x6c
	// Line 590, Address: 0x101d82c, Func Offset: 0x7c
	// Line 592, Address: 0x101d83c, Func Offset: 0x8c
	// Line 594, Address: 0x101d840, Func Offset: 0x90
	// Func End, Address: 0x101d850, Func Offset: 0xa0
}

