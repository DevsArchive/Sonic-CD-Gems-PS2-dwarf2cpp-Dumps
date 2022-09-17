typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned char type_0[26];
typedef unsigned char type_1[8];
typedef unsigned char type_2[8];
typedef unsigned char type_3[8];
typedef _anon0 type_4[6];
typedef tagPALETTEENTRY type_5[48];
typedef tagPALETTEENTRY type_6[64];
typedef tagPALETTEENTRY type_7[3];
typedef unsigned char type_8[7];
typedef tagPALETTEENTRY type_9[5];
typedef unsigned char type_10[7];
typedef tagPALETTEENTRY type_11[5];
typedef tagPALETTEENTRY type_12[2];
typedef tagPALETTEENTRY type_13[2];
typedef tagPALETTEENTRY type_14[2];
typedef tagPALETTEENTRY type_15[3];
typedef tagPALETTEENTRY type_16[3];
typedef tagPALETTEENTRY type_17[3];
typedef tagPALETTEENTRY type_18[48];
typedef tagPALETTEENTRY type_19[16];
typedef tagPALETTEENTRY type_20[64];
typedef unsigned char type_21[8];
typedef unsigned char type_22[20];
typedef unsigned char type_23[20];
typedef unsigned char type_24[26];
typedef unsigned char type_25[26];

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
unsigned char col8a3cnt[26];
tagPALETTEENTRY col8a3col[2];
unsigned char col8a4cnt[26];
tagPALETTEENTRY col8a4col[2];
unsigned char col8a5cnt[26];
tagPALETTEENTRY col8a5col[2];
unsigned char col8a6cnt[20];
tagPALETTEENTRY col8a6col[5];
unsigned char col8a7cnt[20];
tagPALETTEENTRY col8a7col[5];
unsigned char col8a8cnt[8];
tagPALETTEENTRY col8a8col[3];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone8colora[48];
tagPALETTEENTRY zone82colora[48];
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
void colchg8a();
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
// Start address: 0x101acd0
void clchgctr()
{
	// Line 153, Address: 0x101acd0, Func Offset: 0
	// Line 154, Address: 0x101acd8, Func Offset: 0x8
	// Line 155, Address: 0x101ace0, Func Offset: 0x10
	// Func End, Address: 0x101acf0, Func Offset: 0x20
}

// 
// Start address: 0x101acf0
void colchg8a()
{
	// Line 157, Address: 0x101acf0, Func Offset: 0
	// Line 158, Address: 0x101acf8, Func Offset: 0x8
	// Line 159, Address: 0x101ad20, Func Offset: 0x30
	// Line 160, Address: 0x101ad48, Func Offset: 0x58
	// Line 161, Address: 0x101ad70, Func Offset: 0x80
	// Line 163, Address: 0x101ad8c, Func Offset: 0x9c
	// Line 164, Address: 0x101adb4, Func Offset: 0xc4
	// Line 165, Address: 0x101addc, Func Offset: 0xec
	// Line 166, Address: 0x101ae04, Func Offset: 0x114
	// Line 169, Address: 0x101ae0c, Func Offset: 0x11c
	// Line 170, Address: 0x101ae34, Func Offset: 0x144
	// Line 171, Address: 0x101ae5c, Func Offset: 0x16c
	// Line 174, Address: 0x101ae84, Func Offset: 0x194
	// Func End, Address: 0x101ae94, Func Offset: 0x1a4
}

// 
// Start address: 0x101aea0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 183, Address: 0x101aea0, Func Offset: 0
	// Line 186, Address: 0x101aeb8, Func Offset: 0x18
	// Line 187, Address: 0x101aecc, Func Offset: 0x2c
	// Line 189, Address: 0x101aeec, Func Offset: 0x4c
	// Line 190, Address: 0x101af10, Func Offset: 0x70
	// Line 191, Address: 0x101af24, Func Offset: 0x84
	// Line 193, Address: 0x101af50, Func Offset: 0xb0
	// Line 196, Address: 0x101af58, Func Offset: 0xb8
	// Line 197, Address: 0x101af74, Func Offset: 0xd4
	// Line 198, Address: 0x101af84, Func Offset: 0xe4
	// Line 205, Address: 0x101afbc, Func Offset: 0x11c
	// Func End, Address: 0x101afcc, Func Offset: 0x12c
}

// 
// Start address: 0x101afd0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 208, Address: 0x101afd0, Func Offset: 0
	// Line 212, Address: 0x101afdc, Func Offset: 0xc
	// Line 214, Address: 0x101b010, Func Offset: 0x40
	// Line 215, Address: 0x101b01c, Func Offset: 0x4c
	// Line 216, Address: 0x101b020, Func Offset: 0x50
	// Line 217, Address: 0x101b024, Func Offset: 0x54
	// Line 218, Address: 0x101b028, Func Offset: 0x58
	// Line 219, Address: 0x101b030, Func Offset: 0x60
	// Line 220, Address: 0x101b034, Func Offset: 0x64
	// Line 221, Address: 0x101b050, Func Offset: 0x80
	// Line 222, Address: 0x101b058, Func Offset: 0x88
	// Line 224, Address: 0x101b068, Func Offset: 0x98
	// Func End, Address: 0x101b07c, Func Offset: 0xac
}

// 
// Start address: 0x101b080
int fadein0_new()
{
	// Line 228, Address: 0x101b080, Func Offset: 0
	// Line 230, Address: 0x101b088, Func Offset: 0x8
	// Line 232, Address: 0x101b094, Func Offset: 0x14
	// Line 235, Address: 0x101b09c, Func Offset: 0x1c
	// Line 236, Address: 0x101b0bc, Func Offset: 0x3c
	// Line 237, Address: 0x101b0c4, Func Offset: 0x44
	// Line 239, Address: 0x101b0d0, Func Offset: 0x50
	// Line 240, Address: 0x101b0d4, Func Offset: 0x54
	// Func End, Address: 0x101b0e4, Func Offset: 0x64
}

// 
// Start address: 0x101b0f0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 244, Address: 0x101b0f0, Func Offset: 0
	// Line 248, Address: 0x101b104, Func Offset: 0x14
	// Line 249, Address: 0x101b138, Func Offset: 0x48
	// Line 251, Address: 0x101b16c, Func Offset: 0x7c
	// Line 252, Address: 0x101b178, Func Offset: 0x88
	// Line 253, Address: 0x101b188, Func Offset: 0x98
	// Line 254, Address: 0x101b18c, Func Offset: 0x9c
	// Line 255, Address: 0x101b190, Func Offset: 0xa0
	// Line 256, Address: 0x101b1ac, Func Offset: 0xbc
	// Line 258, Address: 0x101b1c8, Func Offset: 0xd8
	// Line 259, Address: 0x101b1fc, Func Offset: 0x10c
	// Line 261, Address: 0x101b230, Func Offset: 0x140
	// Line 262, Address: 0x101b23c, Func Offset: 0x14c
	// Line 263, Address: 0x101b24c, Func Offset: 0x15c
	// Line 264, Address: 0x101b250, Func Offset: 0x160
	// Line 265, Address: 0x101b254, Func Offset: 0x164
	// Line 269, Address: 0x101b270, Func Offset: 0x180
	// Func End, Address: 0x101b28c, Func Offset: 0x19c
}

// 
// Start address: 0x101b290
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 273, Address: 0x101b290, Func Offset: 0
	// Line 274, Address: 0x101b29c, Func Offset: 0xc
	// Line 277, Address: 0x101b2fc, Func Offset: 0x6c
	// Line 278, Address: 0x101b320, Func Offset: 0x90
	// Line 279, Address: 0x101b330, Func Offset: 0xa0
	// Line 280, Address: 0x101b338, Func Offset: 0xa8
	// Line 281, Address: 0x101b35c, Func Offset: 0xcc
	// Line 282, Address: 0x101b36c, Func Offset: 0xdc
	// Line 283, Address: 0x101b374, Func Offset: 0xe4
	// Line 284, Address: 0x101b398, Func Offset: 0x108
	// Line 288, Address: 0x101b3ac, Func Offset: 0x11c
	// Func End, Address: 0x101b3b8, Func Offset: 0x128
}

// 
// Start address: 0x101b3c0
void fadeout()
{
	// Line 292, Address: 0x101b3c0, Func Offset: 0
	// Line 293, Address: 0x101b3c8, Func Offset: 0x8
	// Line 295, Address: 0x101b3d4, Func Offset: 0x14
	// Line 296, Address: 0x101b3dc, Func Offset: 0x1c
	// Line 298, Address: 0x101b3ec, Func Offset: 0x2c
	// Func End, Address: 0x101b3f4, Func Offset: 0x34
}

// 
// Start address: 0x101b400
int fadeout_new()
{
	// Line 302, Address: 0x101b400, Func Offset: 0
	// Line 304, Address: 0x101b408, Func Offset: 0x8
	// Line 306, Address: 0x101b414, Func Offset: 0x14
	// Line 309, Address: 0x101b41c, Func Offset: 0x1c
	// Line 310, Address: 0x101b43c, Func Offset: 0x3c
	// Line 311, Address: 0x101b444, Func Offset: 0x44
	// Line 313, Address: 0x101b450, Func Offset: 0x50
	// Line 314, Address: 0x101b454, Func Offset: 0x54
	// Func End, Address: 0x101b464, Func Offset: 0x64
}

// 
// Start address: 0x101b470
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 317, Address: 0x101b470, Func Offset: 0
	// Line 321, Address: 0x101b480, Func Offset: 0x10
	// Line 323, Address: 0x101b4b4, Func Offset: 0x44
	// Line 324, Address: 0x101b4c0, Func Offset: 0x50
	// Line 325, Address: 0x101b4cc, Func Offset: 0x5c
	// Line 326, Address: 0x101b4d0, Func Offset: 0x60
	// Line 327, Address: 0x101b4ec, Func Offset: 0x7c
	// Line 329, Address: 0x101b520, Func Offset: 0xb0
	// Line 330, Address: 0x101b52c, Func Offset: 0xbc
	// Line 331, Address: 0x101b538, Func Offset: 0xc8
	// Line 332, Address: 0x101b53c, Func Offset: 0xcc
	// Line 335, Address: 0x101b558, Func Offset: 0xe8
	// Func End, Address: 0x101b570, Func Offset: 0x100
}

// 
// Start address: 0x101b570
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 338, Address: 0x101b570, Func Offset: 0
	// Line 339, Address: 0x101b578, Func Offset: 0x8
	// Line 340, Address: 0x101b588, Func Offset: 0x18
	// Line 341, Address: 0x101b59c, Func Offset: 0x2c
	// Line 342, Address: 0x101b5a4, Func Offset: 0x34
	// Line 343, Address: 0x101b5b4, Func Offset: 0x44
	// Line 344, Address: 0x101b5c4, Func Offset: 0x54
	// Line 345, Address: 0x101b5cc, Func Offset: 0x5c
	// Line 346, Address: 0x101b5dc, Func Offset: 0x6c
	// Line 349, Address: 0x101b5ec, Func Offset: 0x7c
	// Func End, Address: 0x101b5f8, Func Offset: 0x88
}

// 
// Start address: 0x101b600
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 354, Address: 0x101b600, Func Offset: 0
	// Line 358, Address: 0x101b60c, Func Offset: 0xc
	// Line 359, Address: 0x101b614, Func Offset: 0x14
	// Line 361, Address: 0x101b620, Func Offset: 0x20
	// Line 363, Address: 0x101b654, Func Offset: 0x54
	// Line 364, Address: 0x101b660, Func Offset: 0x60
	// Line 365, Address: 0x101b668, Func Offset: 0x68
	// Line 366, Address: 0x101b670, Func Offset: 0x70
	// Line 367, Address: 0x101b678, Func Offset: 0x78
	// Line 368, Address: 0x101b680, Func Offset: 0x80
	// Line 369, Address: 0x101b684, Func Offset: 0x84
	// Line 370, Address: 0x101b6a0, Func Offset: 0xa0
	// Line 371, Address: 0x101b6a8, Func Offset: 0xa8
	// Line 373, Address: 0x101b6b8, Func Offset: 0xb8
	// Func End, Address: 0x101b6cc, Func Offset: 0xcc
}

// 
// Start address: 0x101b6d0
int flashin_new()
{
	// Line 375, Address: 0x101b6d0, Func Offset: 0
	// Line 377, Address: 0x101b6d8, Func Offset: 0x8
	// Line 379, Address: 0x101b6e4, Func Offset: 0x14
	// Line 382, Address: 0x101b6ec, Func Offset: 0x1c
	// Line 383, Address: 0x101b70c, Func Offset: 0x3c
	// Line 384, Address: 0x101b714, Func Offset: 0x44
	// Line 386, Address: 0x101b720, Func Offset: 0x50
	// Line 387, Address: 0x101b724, Func Offset: 0x54
	// Func End, Address: 0x101b734, Func Offset: 0x64
}

// 
// Start address: 0x101b740
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 389, Address: 0x101b740, Func Offset: 0
	// Line 393, Address: 0x101b754, Func Offset: 0x14
	// Line 394, Address: 0x101b788, Func Offset: 0x48
	// Line 396, Address: 0x101b7bc, Func Offset: 0x7c
	// Line 397, Address: 0x101b7c8, Func Offset: 0x88
	// Line 398, Address: 0x101b7d8, Func Offset: 0x98
	// Line 399, Address: 0x101b7dc, Func Offset: 0x9c
	// Line 400, Address: 0x101b7e0, Func Offset: 0xa0
	// Line 401, Address: 0x101b7fc, Func Offset: 0xbc
	// Line 403, Address: 0x101b818, Func Offset: 0xd8
	// Line 404, Address: 0x101b84c, Func Offset: 0x10c
	// Line 406, Address: 0x101b880, Func Offset: 0x140
	// Line 407, Address: 0x101b88c, Func Offset: 0x14c
	// Line 408, Address: 0x101b89c, Func Offset: 0x15c
	// Line 409, Address: 0x101b8a0, Func Offset: 0x160
	// Line 410, Address: 0x101b8a4, Func Offset: 0x164
	// Line 414, Address: 0x101b8c0, Func Offset: 0x180
	// Func End, Address: 0x101b8dc, Func Offset: 0x19c
}

// 
// Start address: 0x101b8e0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 418, Address: 0x101b8e0, Func Offset: 0
	// Line 419, Address: 0x101b8ec, Func Offset: 0xc
	// Line 422, Address: 0x101b94c, Func Offset: 0x6c
	// Line 423, Address: 0x101b970, Func Offset: 0x90
	// Line 424, Address: 0x101b980, Func Offset: 0xa0
	// Line 425, Address: 0x101b988, Func Offset: 0xa8
	// Line 426, Address: 0x101b9ac, Func Offset: 0xcc
	// Line 427, Address: 0x101b9bc, Func Offset: 0xdc
	// Line 428, Address: 0x101b9c4, Func Offset: 0xe4
	// Line 429, Address: 0x101b9e8, Func Offset: 0x108
	// Line 433, Address: 0x101b9fc, Func Offset: 0x11c
	// Func End, Address: 0x101ba08, Func Offset: 0x128
}

// 
// Start address: 0x101ba10
void flashout()
{
	// Line 437, Address: 0x101ba10, Func Offset: 0
	// Line 438, Address: 0x101ba18, Func Offset: 0x8
	// Line 440, Address: 0x101ba24, Func Offset: 0x14
	// Line 441, Address: 0x101ba2c, Func Offset: 0x1c
	// Line 443, Address: 0x101ba3c, Func Offset: 0x2c
	// Func End, Address: 0x101ba44, Func Offset: 0x34
}

// 
// Start address: 0x101ba50
int flashout_new()
{
	// Line 445, Address: 0x101ba50, Func Offset: 0
	// Line 447, Address: 0x101ba58, Func Offset: 0x8
	// Line 449, Address: 0x101ba64, Func Offset: 0x14
	// Line 452, Address: 0x101ba6c, Func Offset: 0x1c
	// Line 453, Address: 0x101ba8c, Func Offset: 0x3c
	// Line 454, Address: 0x101ba94, Func Offset: 0x44
	// Line 456, Address: 0x101baa0, Func Offset: 0x50
	// Line 457, Address: 0x101baa4, Func Offset: 0x54
	// Func End, Address: 0x101bab4, Func Offset: 0x64
}

// 
// Start address: 0x101bac0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 460, Address: 0x101bac0, Func Offset: 0
	// Line 464, Address: 0x101bad0, Func Offset: 0x10
	// Line 466, Address: 0x101bb04, Func Offset: 0x44
	// Line 467, Address: 0x101bb10, Func Offset: 0x50
	// Line 468, Address: 0x101bb1c, Func Offset: 0x5c
	// Line 469, Address: 0x101bb20, Func Offset: 0x60
	// Line 470, Address: 0x101bb3c, Func Offset: 0x7c
	// Line 472, Address: 0x101bb70, Func Offset: 0xb0
	// Line 473, Address: 0x101bb7c, Func Offset: 0xbc
	// Line 474, Address: 0x101bb88, Func Offset: 0xc8
	// Line 475, Address: 0x101bb8c, Func Offset: 0xcc
	// Line 478, Address: 0x101bba8, Func Offset: 0xe8
	// Func End, Address: 0x101bbc0, Func Offset: 0x100
}

// 
// Start address: 0x101bbc0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 481, Address: 0x101bbc0, Func Offset: 0
	// Line 482, Address: 0x101bbc8, Func Offset: 0x8
	// Line 483, Address: 0x101bbe0, Func Offset: 0x20
	// Line 484, Address: 0x101bbf4, Func Offset: 0x34
	// Line 485, Address: 0x101bbfc, Func Offset: 0x3c
	// Line 486, Address: 0x101bc14, Func Offset: 0x54
	// Line 487, Address: 0x101bc24, Func Offset: 0x64
	// Line 488, Address: 0x101bc2c, Func Offset: 0x6c
	// Line 489, Address: 0x101bc44, Func Offset: 0x84
	// Line 493, Address: 0x101bc54, Func Offset: 0x94
	// Func End, Address: 0x101bc60, Func Offset: 0xa0
}

// 
// Start address: 0x101bc60
void colorset(int ColorNo)
{
	// Line 496, Address: 0x101bc60, Func Offset: 0
	// Line 497, Address: 0x101bc6c, Func Offset: 0xc
	// Line 498, Address: 0x101bc7c, Func Offset: 0x1c
	// Func End, Address: 0x101bc8c, Func Offset: 0x2c
}

// 
// Start address: 0x101bc90
void colorset2(int ColorNo)
{
	// Line 500, Address: 0x101bc90, Func Offset: 0
	// Line 501, Address: 0x101bc9c, Func Offset: 0xc
	// Line 502, Address: 0x101bcac, Func Offset: 0x1c
	// Func End, Address: 0x101bcbc, Func Offset: 0x2c
}

// 
// Start address: 0x101bcc0
void colorset3(int ColorNo)
{
	// Line 504, Address: 0x101bcc0, Func Offset: 0
	// Line 505, Address: 0x101bccc, Func Offset: 0xc
	// Line 506, Address: 0x101bcdc, Func Offset: 0x1c
	// Func End, Address: 0x101bcec, Func Offset: 0x2c
}

// 
// Start address: 0x101bcf0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 512, Address: 0x101bcf0, Func Offset: 0
	// Line 517, Address: 0x101bd10, Func Offset: 0x20
	// Line 519, Address: 0x101bd78, Func Offset: 0x88
	// Line 521, Address: 0x101bd88, Func Offset: 0x98
	// Line 523, Address: 0x101bd98, Func Offset: 0xa8
	// Line 525, Address: 0x101bda8, Func Offset: 0xb8
	// Line 528, Address: 0x101bdb0, Func Offset: 0xc0
	// Line 529, Address: 0x101bdc8, Func Offset: 0xd8
	// Line 530, Address: 0x101bdf0, Func Offset: 0x100
	// Line 531, Address: 0x101be10, Func Offset: 0x120
	// Line 532, Address: 0x101be1c, Func Offset: 0x12c
	// Line 533, Address: 0x101be4c, Func Offset: 0x15c
	// Line 535, Address: 0x101be5c, Func Offset: 0x16c
	// Func End, Address: 0x101be7c, Func Offset: 0x18c
}

// 
// Start address: 0x101be80
int FadeProc()
{
	// Line 540, Address: 0x101be80, Func Offset: 0
	// Line 541, Address: 0x101be88, Func Offset: 0x8
	// Line 543, Address: 0x101becc, Func Offset: 0x4c
	// Line 545, Address: 0x101bedc, Func Offset: 0x5c
	// Line 547, Address: 0x101beec, Func Offset: 0x6c
	// Line 549, Address: 0x101befc, Func Offset: 0x7c
	// Line 551, Address: 0x101bf0c, Func Offset: 0x8c
	// Line 553, Address: 0x101bf10, Func Offset: 0x90
	// Func End, Address: 0x101bf20, Func Offset: 0xa0
}

