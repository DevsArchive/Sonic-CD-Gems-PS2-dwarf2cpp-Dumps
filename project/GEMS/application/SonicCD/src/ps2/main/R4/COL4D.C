typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[16];
typedef unsigned char type_1[8];
typedef tagPALETTEENTRY type_2[16];
typedef unsigned char type_3[8];
typedef tagPALETTEENTRY type_4[64];
typedef unsigned char type_5[7];
typedef unsigned char type_6[7];
typedef _anon0 type_7[6];
typedef tagPALETTEENTRY type_8[3];
typedef tagPALETTEENTRY type_9[48];
typedef unsigned char type_10[8];
typedef tagPALETTEENTRY type_11[64];

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
tagPALETTEENTRY zone4colora[48];
tagPALETTEENTRY boss4color[16];
_anon0 colortbl[6];
unsigned char col4d0cnt[8];
unsigned char col4d1cnt[8];
unsigned char col4d2cnt[8];
tagPALETTEENTRY col4d0col[3];
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
// Start address: 0x10262f0
void clchgctr()
{
	// Line 124, Address: 0x10262f0, Func Offset: 0
	// Line 125, Address: 0x10262f8, Func Offset: 0x8
	// Line 127, Address: 0x1026308, Func Offset: 0x18
	// Line 128, Address: 0x1026330, Func Offset: 0x40
	// Line 129, Address: 0x1026358, Func Offset: 0x68
	// Line 131, Address: 0x1026380, Func Offset: 0x90
	// Func End, Address: 0x1026390, Func Offset: 0xa0
}

// 
// Start address: 0x1026390
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 139, Address: 0x1026390, Func Offset: 0
	// Line 142, Address: 0x10263a8, Func Offset: 0x18
	// Line 143, Address: 0x10263bc, Func Offset: 0x2c
	// Line 144, Address: 0x10263dc, Func Offset: 0x4c
	// Line 145, Address: 0x1026400, Func Offset: 0x70
	// Line 146, Address: 0x1026414, Func Offset: 0x84
	// Line 147, Address: 0x1026440, Func Offset: 0xb0
	// Line 150, Address: 0x1026448, Func Offset: 0xb8
	// Line 151, Address: 0x1026464, Func Offset: 0xd4
	// Line 152, Address: 0x1026474, Func Offset: 0xe4
	// Line 159, Address: 0x10264ac, Func Offset: 0x11c
	// Func End, Address: 0x10264bc, Func Offset: 0x12c
}

// 
// Start address: 0x10264c0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 162, Address: 0x10264c0, Func Offset: 0
	// Line 166, Address: 0x10264cc, Func Offset: 0xc
	// Line 168, Address: 0x1026500, Func Offset: 0x40
	// Line 169, Address: 0x102650c, Func Offset: 0x4c
	// Line 170, Address: 0x1026510, Func Offset: 0x50
	// Line 171, Address: 0x1026514, Func Offset: 0x54
	// Line 172, Address: 0x1026518, Func Offset: 0x58
	// Line 173, Address: 0x1026520, Func Offset: 0x60
	// Line 174, Address: 0x1026524, Func Offset: 0x64
	// Line 175, Address: 0x1026540, Func Offset: 0x80
	// Line 176, Address: 0x1026548, Func Offset: 0x88
	// Line 178, Address: 0x1026558, Func Offset: 0x98
	// Func End, Address: 0x102656c, Func Offset: 0xac
}

// 
// Start address: 0x1026570
int fadein0_new()
{
	// Line 182, Address: 0x1026570, Func Offset: 0
	// Line 184, Address: 0x1026578, Func Offset: 0x8
	// Line 186, Address: 0x1026584, Func Offset: 0x14
	// Line 189, Address: 0x102658c, Func Offset: 0x1c
	// Line 190, Address: 0x10265ac, Func Offset: 0x3c
	// Line 191, Address: 0x10265b4, Func Offset: 0x44
	// Line 193, Address: 0x10265c0, Func Offset: 0x50
	// Line 194, Address: 0x10265c4, Func Offset: 0x54
	// Func End, Address: 0x10265d4, Func Offset: 0x64
}

// 
// Start address: 0x10265e0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 197, Address: 0x10265e0, Func Offset: 0
	// Line 201, Address: 0x10265f4, Func Offset: 0x14
	// Line 202, Address: 0x1026628, Func Offset: 0x48
	// Line 204, Address: 0x102665c, Func Offset: 0x7c
	// Line 205, Address: 0x1026668, Func Offset: 0x88
	// Line 206, Address: 0x1026678, Func Offset: 0x98
	// Line 207, Address: 0x102667c, Func Offset: 0x9c
	// Line 208, Address: 0x1026680, Func Offset: 0xa0
	// Line 209, Address: 0x102669c, Func Offset: 0xbc
	// Line 211, Address: 0x10266b8, Func Offset: 0xd8
	// Line 212, Address: 0x10266ec, Func Offset: 0x10c
	// Line 214, Address: 0x1026720, Func Offset: 0x140
	// Line 215, Address: 0x102672c, Func Offset: 0x14c
	// Line 216, Address: 0x102673c, Func Offset: 0x15c
	// Line 217, Address: 0x1026740, Func Offset: 0x160
	// Line 218, Address: 0x1026744, Func Offset: 0x164
	// Line 222, Address: 0x1026760, Func Offset: 0x180
	// Func End, Address: 0x102677c, Func Offset: 0x19c
}

// 
// Start address: 0x1026780
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 227, Address: 0x1026780, Func Offset: 0
	// Line 228, Address: 0x102678c, Func Offset: 0xc
	// Line 231, Address: 0x10267ec, Func Offset: 0x6c
	// Line 232, Address: 0x1026810, Func Offset: 0x90
	// Line 233, Address: 0x1026820, Func Offset: 0xa0
	// Line 234, Address: 0x1026828, Func Offset: 0xa8
	// Line 235, Address: 0x102684c, Func Offset: 0xcc
	// Line 236, Address: 0x102685c, Func Offset: 0xdc
	// Line 237, Address: 0x1026864, Func Offset: 0xe4
	// Line 238, Address: 0x1026888, Func Offset: 0x108
	// Line 242, Address: 0x102689c, Func Offset: 0x11c
	// Func End, Address: 0x10268a8, Func Offset: 0x128
}

// 
// Start address: 0x10268b0
void fadeout()
{
	// Line 246, Address: 0x10268b0, Func Offset: 0
	// Line 247, Address: 0x10268b8, Func Offset: 0x8
	// Line 249, Address: 0x10268c4, Func Offset: 0x14
	// Line 250, Address: 0x10268cc, Func Offset: 0x1c
	// Line 252, Address: 0x10268dc, Func Offset: 0x2c
	// Func End, Address: 0x10268e4, Func Offset: 0x34
}

// 
// Start address: 0x10268f0
int fadeout_new()
{
	// Line 256, Address: 0x10268f0, Func Offset: 0
	// Line 258, Address: 0x10268f8, Func Offset: 0x8
	// Line 260, Address: 0x1026904, Func Offset: 0x14
	// Line 263, Address: 0x102690c, Func Offset: 0x1c
	// Line 264, Address: 0x102692c, Func Offset: 0x3c
	// Line 265, Address: 0x1026934, Func Offset: 0x44
	// Line 267, Address: 0x1026940, Func Offset: 0x50
	// Line 268, Address: 0x1026944, Func Offset: 0x54
	// Func End, Address: 0x1026954, Func Offset: 0x64
}

// 
// Start address: 0x1026960
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 271, Address: 0x1026960, Func Offset: 0
	// Line 275, Address: 0x1026970, Func Offset: 0x10
	// Line 277, Address: 0x10269a4, Func Offset: 0x44
	// Line 278, Address: 0x10269b0, Func Offset: 0x50
	// Line 279, Address: 0x10269bc, Func Offset: 0x5c
	// Line 280, Address: 0x10269c0, Func Offset: 0x60
	// Line 281, Address: 0x10269dc, Func Offset: 0x7c
	// Line 283, Address: 0x1026a10, Func Offset: 0xb0
	// Line 284, Address: 0x1026a1c, Func Offset: 0xbc
	// Line 285, Address: 0x1026a28, Func Offset: 0xc8
	// Line 286, Address: 0x1026a2c, Func Offset: 0xcc
	// Line 289, Address: 0x1026a48, Func Offset: 0xe8
	// Func End, Address: 0x1026a60, Func Offset: 0x100
}

// 
// Start address: 0x1026a60
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 293, Address: 0x1026a60, Func Offset: 0
	// Line 294, Address: 0x1026a68, Func Offset: 0x8
	// Line 295, Address: 0x1026a78, Func Offset: 0x18
	// Line 296, Address: 0x1026a8c, Func Offset: 0x2c
	// Line 297, Address: 0x1026a94, Func Offset: 0x34
	// Line 298, Address: 0x1026aa4, Func Offset: 0x44
	// Line 299, Address: 0x1026ab4, Func Offset: 0x54
	// Line 300, Address: 0x1026abc, Func Offset: 0x5c
	// Line 301, Address: 0x1026acc, Func Offset: 0x6c
	// Line 304, Address: 0x1026adc, Func Offset: 0x7c
	// Func End, Address: 0x1026ae8, Func Offset: 0x88
}

// 
// Start address: 0x1026af0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 307, Address: 0x1026af0, Func Offset: 0
	// Line 311, Address: 0x1026afc, Func Offset: 0xc
	// Line 312, Address: 0x1026b04, Func Offset: 0x14
	// Line 314, Address: 0x1026b10, Func Offset: 0x20
	// Line 316, Address: 0x1026b44, Func Offset: 0x54
	// Line 317, Address: 0x1026b50, Func Offset: 0x60
	// Line 318, Address: 0x1026b58, Func Offset: 0x68
	// Line 319, Address: 0x1026b60, Func Offset: 0x70
	// Line 320, Address: 0x1026b68, Func Offset: 0x78
	// Line 321, Address: 0x1026b70, Func Offset: 0x80
	// Line 322, Address: 0x1026b74, Func Offset: 0x84
	// Line 323, Address: 0x1026b90, Func Offset: 0xa0
	// Line 324, Address: 0x1026b98, Func Offset: 0xa8
	// Line 326, Address: 0x1026ba8, Func Offset: 0xb8
	// Func End, Address: 0x1026bbc, Func Offset: 0xcc
}

// 
// Start address: 0x1026bc0
int flashin_new()
{
	// Line 329, Address: 0x1026bc0, Func Offset: 0
	// Line 331, Address: 0x1026bc8, Func Offset: 0x8
	// Line 333, Address: 0x1026bd4, Func Offset: 0x14
	// Line 336, Address: 0x1026bdc, Func Offset: 0x1c
	// Line 337, Address: 0x1026bfc, Func Offset: 0x3c
	// Line 338, Address: 0x1026c04, Func Offset: 0x44
	// Line 340, Address: 0x1026c10, Func Offset: 0x50
	// Line 341, Address: 0x1026c14, Func Offset: 0x54
	// Func End, Address: 0x1026c24, Func Offset: 0x64
}

// 
// Start address: 0x1026c30
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 344, Address: 0x1026c30, Func Offset: 0
	// Line 348, Address: 0x1026c44, Func Offset: 0x14
	// Line 349, Address: 0x1026c78, Func Offset: 0x48
	// Line 351, Address: 0x1026cac, Func Offset: 0x7c
	// Line 352, Address: 0x1026cb8, Func Offset: 0x88
	// Line 353, Address: 0x1026cc8, Func Offset: 0x98
	// Line 354, Address: 0x1026ccc, Func Offset: 0x9c
	// Line 355, Address: 0x1026cd0, Func Offset: 0xa0
	// Line 356, Address: 0x1026cec, Func Offset: 0xbc
	// Line 358, Address: 0x1026d08, Func Offset: 0xd8
	// Line 359, Address: 0x1026d3c, Func Offset: 0x10c
	// Line 361, Address: 0x1026d70, Func Offset: 0x140
	// Line 362, Address: 0x1026d7c, Func Offset: 0x14c
	// Line 363, Address: 0x1026d8c, Func Offset: 0x15c
	// Line 364, Address: 0x1026d90, Func Offset: 0x160
	// Line 365, Address: 0x1026d94, Func Offset: 0x164
	// Line 369, Address: 0x1026db0, Func Offset: 0x180
	// Func End, Address: 0x1026dcc, Func Offset: 0x19c
}

// 
// Start address: 0x1026dd0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 373, Address: 0x1026dd0, Func Offset: 0
	// Line 374, Address: 0x1026ddc, Func Offset: 0xc
	// Line 377, Address: 0x1026e3c, Func Offset: 0x6c
	// Line 378, Address: 0x1026e60, Func Offset: 0x90
	// Line 379, Address: 0x1026e70, Func Offset: 0xa0
	// Line 380, Address: 0x1026e78, Func Offset: 0xa8
	// Line 381, Address: 0x1026e9c, Func Offset: 0xcc
	// Line 382, Address: 0x1026eac, Func Offset: 0xdc
	// Line 383, Address: 0x1026eb4, Func Offset: 0xe4
	// Line 384, Address: 0x1026ed8, Func Offset: 0x108
	// Line 388, Address: 0x1026eec, Func Offset: 0x11c
	// Func End, Address: 0x1026ef8, Func Offset: 0x128
}

// 
// Start address: 0x1026f00
void flashout()
{
	// Line 392, Address: 0x1026f00, Func Offset: 0
	// Line 393, Address: 0x1026f08, Func Offset: 0x8
	// Line 395, Address: 0x1026f14, Func Offset: 0x14
	// Line 396, Address: 0x1026f1c, Func Offset: 0x1c
	// Line 398, Address: 0x1026f2c, Func Offset: 0x2c
	// Func End, Address: 0x1026f34, Func Offset: 0x34
}

// 
// Start address: 0x1026f40
int flashout_new()
{
	// Line 401, Address: 0x1026f40, Func Offset: 0
	// Line 403, Address: 0x1026f48, Func Offset: 0x8
	// Line 405, Address: 0x1026f54, Func Offset: 0x14
	// Line 408, Address: 0x1026f5c, Func Offset: 0x1c
	// Line 409, Address: 0x1026f7c, Func Offset: 0x3c
	// Line 410, Address: 0x1026f84, Func Offset: 0x44
	// Line 412, Address: 0x1026f90, Func Offset: 0x50
	// Line 413, Address: 0x1026f94, Func Offset: 0x54
	// Func End, Address: 0x1026fa4, Func Offset: 0x64
}

// 
// Start address: 0x1026fb0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 416, Address: 0x1026fb0, Func Offset: 0
	// Line 420, Address: 0x1026fc0, Func Offset: 0x10
	// Line 422, Address: 0x1026ff4, Func Offset: 0x44
	// Line 423, Address: 0x1027000, Func Offset: 0x50
	// Line 424, Address: 0x102700c, Func Offset: 0x5c
	// Line 425, Address: 0x1027010, Func Offset: 0x60
	// Line 426, Address: 0x102702c, Func Offset: 0x7c
	// Line 428, Address: 0x1027060, Func Offset: 0xb0
	// Line 429, Address: 0x102706c, Func Offset: 0xbc
	// Line 430, Address: 0x1027078, Func Offset: 0xc8
	// Line 431, Address: 0x102707c, Func Offset: 0xcc
	// Line 434, Address: 0x1027098, Func Offset: 0xe8
	// Func End, Address: 0x10270b0, Func Offset: 0x100
}

// 
// Start address: 0x10270b0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 438, Address: 0x10270b0, Func Offset: 0
	// Line 439, Address: 0x10270b8, Func Offset: 0x8
	// Line 440, Address: 0x10270d0, Func Offset: 0x20
	// Line 441, Address: 0x10270e4, Func Offset: 0x34
	// Line 442, Address: 0x10270ec, Func Offset: 0x3c
	// Line 443, Address: 0x1027104, Func Offset: 0x54
	// Line 444, Address: 0x1027114, Func Offset: 0x64
	// Line 445, Address: 0x102711c, Func Offset: 0x6c
	// Line 446, Address: 0x1027134, Func Offset: 0x84
	// Line 450, Address: 0x1027144, Func Offset: 0x94
	// Func End, Address: 0x1027150, Func Offset: 0xa0
}

// 
// Start address: 0x1027150
void colorset(int ColorNo)
{
	// Line 453, Address: 0x1027150, Func Offset: 0
	// Line 454, Address: 0x102715c, Func Offset: 0xc
	// Line 455, Address: 0x102716c, Func Offset: 0x1c
	// Func End, Address: 0x102717c, Func Offset: 0x2c
}

// 
// Start address: 0x1027180
void colorset2(int ColorNo)
{
	// Line 457, Address: 0x1027180, Func Offset: 0
	// Line 458, Address: 0x102718c, Func Offset: 0xc
	// Line 459, Address: 0x102719c, Func Offset: 0x1c
	// Func End, Address: 0x10271ac, Func Offset: 0x2c
}

// 
// Start address: 0x10271b0
void colorset3(int ColorNo)
{
	// Line 461, Address: 0x10271b0, Func Offset: 0
	// Line 462, Address: 0x10271bc, Func Offset: 0xc
	// Line 463, Address: 0x10271cc, Func Offset: 0x1c
	// Func End, Address: 0x10271dc, Func Offset: 0x2c
}

// 
// Start address: 0x10271e0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 468, Address: 0x10271e0, Func Offset: 0
	// Line 473, Address: 0x1027200, Func Offset: 0x20
	// Line 475, Address: 0x1027268, Func Offset: 0x88
	// Line 477, Address: 0x1027278, Func Offset: 0x98
	// Line 479, Address: 0x1027288, Func Offset: 0xa8
	// Line 481, Address: 0x1027298, Func Offset: 0xb8
	// Line 484, Address: 0x10272a0, Func Offset: 0xc0
	// Line 485, Address: 0x10272b8, Func Offset: 0xd8
	// Line 486, Address: 0x10272e0, Func Offset: 0x100
	// Line 487, Address: 0x1027300, Func Offset: 0x120
	// Line 488, Address: 0x102730c, Func Offset: 0x12c
	// Line 489, Address: 0x102733c, Func Offset: 0x15c
	// Line 491, Address: 0x102734c, Func Offset: 0x16c
	// Func End, Address: 0x102736c, Func Offset: 0x18c
}

// 
// Start address: 0x1027370
int FadeProc()
{
	// Line 494, Address: 0x1027370, Func Offset: 0
	// Line 495, Address: 0x1027378, Func Offset: 0x8
	// Line 497, Address: 0x10273bc, Func Offset: 0x4c
	// Line 499, Address: 0x10273cc, Func Offset: 0x5c
	// Line 501, Address: 0x10273dc, Func Offset: 0x6c
	// Line 503, Address: 0x10273ec, Func Offset: 0x7c
	// Line 505, Address: 0x10273fc, Func Offset: 0x8c
	// Line 507, Address: 0x1027400, Func Offset: 0x90
	// Func End, Address: 0x1027410, Func Offset: 0xa0
}

