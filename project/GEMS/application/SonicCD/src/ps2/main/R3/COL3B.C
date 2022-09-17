typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef _anon0 type_0[5];
typedef tagPALETTEENTRY type_1[16];
typedef tagPALETTEENTRY type_2[64];
typedef tagPALETTEENTRY type_3[48];
typedef tagPALETTEENTRY type_4[64];

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
tagPALETTEENTRY zone3colorb[48];
_anon0 colortbl[5];
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
// Start address: 0x1025bb0
void clchgctr()
{
	// Line 83, Address: 0x1025bb0, Func Offset: 0
	// Func End, Address: 0x1025bb8, Func Offset: 0x8
}

// 
// Start address: 0x1025bc0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 92, Address: 0x1025bc0, Func Offset: 0
	// Line 95, Address: 0x1025bd8, Func Offset: 0x18
	// Line 96, Address: 0x1025bec, Func Offset: 0x2c
	// Line 98, Address: 0x1025c0c, Func Offset: 0x4c
	// Line 99, Address: 0x1025c30, Func Offset: 0x70
	// Line 100, Address: 0x1025c44, Func Offset: 0x84
	// Line 102, Address: 0x1025c70, Func Offset: 0xb0
	// Line 105, Address: 0x1025c78, Func Offset: 0xb8
	// Line 106, Address: 0x1025c94, Func Offset: 0xd4
	// Line 108, Address: 0x1025ca4, Func Offset: 0xe4
	// Line 115, Address: 0x1025cdc, Func Offset: 0x11c
	// Func End, Address: 0x1025cec, Func Offset: 0x12c
}

// 
// Start address: 0x1025cf0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 118, Address: 0x1025cf0, Func Offset: 0
	// Line 122, Address: 0x1025cfc, Func Offset: 0xc
	// Line 124, Address: 0x1025d30, Func Offset: 0x40
	// Line 125, Address: 0x1025d3c, Func Offset: 0x4c
	// Line 126, Address: 0x1025d40, Func Offset: 0x50
	// Line 127, Address: 0x1025d44, Func Offset: 0x54
	// Line 128, Address: 0x1025d48, Func Offset: 0x58
	// Line 129, Address: 0x1025d50, Func Offset: 0x60
	// Line 130, Address: 0x1025d54, Func Offset: 0x64
	// Line 131, Address: 0x1025d70, Func Offset: 0x80
	// Line 132, Address: 0x1025d78, Func Offset: 0x88
	// Line 134, Address: 0x1025d88, Func Offset: 0x98
	// Func End, Address: 0x1025d9c, Func Offset: 0xac
}

// 
// Start address: 0x1025da0
int fadein0_new()
{
	// Line 138, Address: 0x1025da0, Func Offset: 0
	// Line 140, Address: 0x1025da8, Func Offset: 0x8
	// Line 142, Address: 0x1025db4, Func Offset: 0x14
	// Line 145, Address: 0x1025dbc, Func Offset: 0x1c
	// Line 146, Address: 0x1025ddc, Func Offset: 0x3c
	// Line 147, Address: 0x1025de4, Func Offset: 0x44
	// Line 149, Address: 0x1025df0, Func Offset: 0x50
	// Line 150, Address: 0x1025df4, Func Offset: 0x54
	// Func End, Address: 0x1025e04, Func Offset: 0x64
}

// 
// Start address: 0x1025e10
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 154, Address: 0x1025e10, Func Offset: 0
	// Line 158, Address: 0x1025e24, Func Offset: 0x14
	// Line 159, Address: 0x1025e58, Func Offset: 0x48
	// Line 161, Address: 0x1025e8c, Func Offset: 0x7c
	// Line 162, Address: 0x1025e98, Func Offset: 0x88
	// Line 163, Address: 0x1025ea8, Func Offset: 0x98
	// Line 164, Address: 0x1025eac, Func Offset: 0x9c
	// Line 165, Address: 0x1025eb0, Func Offset: 0xa0
	// Line 166, Address: 0x1025ecc, Func Offset: 0xbc
	// Line 168, Address: 0x1025ee8, Func Offset: 0xd8
	// Line 169, Address: 0x1025f1c, Func Offset: 0x10c
	// Line 171, Address: 0x1025f50, Func Offset: 0x140
	// Line 172, Address: 0x1025f5c, Func Offset: 0x14c
	// Line 173, Address: 0x1025f6c, Func Offset: 0x15c
	// Line 174, Address: 0x1025f70, Func Offset: 0x160
	// Line 175, Address: 0x1025f74, Func Offset: 0x164
	// Line 179, Address: 0x1025f90, Func Offset: 0x180
	// Func End, Address: 0x1025fac, Func Offset: 0x19c
}

// 
// Start address: 0x1025fb0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 183, Address: 0x1025fb0, Func Offset: 0
	// Line 184, Address: 0x1025fbc, Func Offset: 0xc
	// Line 187, Address: 0x102601c, Func Offset: 0x6c
	// Line 188, Address: 0x1026040, Func Offset: 0x90
	// Line 189, Address: 0x1026050, Func Offset: 0xa0
	// Line 190, Address: 0x1026058, Func Offset: 0xa8
	// Line 191, Address: 0x102607c, Func Offset: 0xcc
	// Line 192, Address: 0x102608c, Func Offset: 0xdc
	// Line 193, Address: 0x1026094, Func Offset: 0xe4
	// Line 194, Address: 0x10260b8, Func Offset: 0x108
	// Line 198, Address: 0x10260cc, Func Offset: 0x11c
	// Func End, Address: 0x10260d8, Func Offset: 0x128
}

// 
// Start address: 0x10260e0
void fadeout()
{
	// Line 202, Address: 0x10260e0, Func Offset: 0
	// Line 203, Address: 0x10260e8, Func Offset: 0x8
	// Line 205, Address: 0x10260f4, Func Offset: 0x14
	// Line 206, Address: 0x10260fc, Func Offset: 0x1c
	// Line 208, Address: 0x102610c, Func Offset: 0x2c
	// Func End, Address: 0x1026114, Func Offset: 0x34
}

// 
// Start address: 0x1026120
int fadeout_new()
{
	// Line 212, Address: 0x1026120, Func Offset: 0
	// Line 214, Address: 0x1026128, Func Offset: 0x8
	// Line 216, Address: 0x1026134, Func Offset: 0x14
	// Line 219, Address: 0x102613c, Func Offset: 0x1c
	// Line 220, Address: 0x102615c, Func Offset: 0x3c
	// Line 221, Address: 0x1026164, Func Offset: 0x44
	// Line 223, Address: 0x1026170, Func Offset: 0x50
	// Line 224, Address: 0x1026174, Func Offset: 0x54
	// Func End, Address: 0x1026184, Func Offset: 0x64
}

// 
// Start address: 0x1026190
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 227, Address: 0x1026190, Func Offset: 0
	// Line 231, Address: 0x10261a0, Func Offset: 0x10
	// Line 233, Address: 0x10261d4, Func Offset: 0x44
	// Line 234, Address: 0x10261e0, Func Offset: 0x50
	// Line 235, Address: 0x10261ec, Func Offset: 0x5c
	// Line 236, Address: 0x10261f0, Func Offset: 0x60
	// Line 237, Address: 0x102620c, Func Offset: 0x7c
	// Line 239, Address: 0x1026240, Func Offset: 0xb0
	// Line 240, Address: 0x102624c, Func Offset: 0xbc
	// Line 241, Address: 0x1026258, Func Offset: 0xc8
	// Line 242, Address: 0x102625c, Func Offset: 0xcc
	// Line 245, Address: 0x1026278, Func Offset: 0xe8
	// Func End, Address: 0x1026290, Func Offset: 0x100
}

// 
// Start address: 0x1026290
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 248, Address: 0x1026290, Func Offset: 0
	// Line 249, Address: 0x1026298, Func Offset: 0x8
	// Line 250, Address: 0x10262a8, Func Offset: 0x18
	// Line 251, Address: 0x10262bc, Func Offset: 0x2c
	// Line 252, Address: 0x10262c4, Func Offset: 0x34
	// Line 253, Address: 0x10262d4, Func Offset: 0x44
	// Line 254, Address: 0x10262e4, Func Offset: 0x54
	// Line 255, Address: 0x10262ec, Func Offset: 0x5c
	// Line 256, Address: 0x10262fc, Func Offset: 0x6c
	// Line 259, Address: 0x102630c, Func Offset: 0x7c
	// Func End, Address: 0x1026318, Func Offset: 0x88
}

// 
// Start address: 0x1026320
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 264, Address: 0x1026320, Func Offset: 0
	// Line 268, Address: 0x102632c, Func Offset: 0xc
	// Line 269, Address: 0x1026334, Func Offset: 0x14
	// Line 271, Address: 0x1026340, Func Offset: 0x20
	// Line 273, Address: 0x1026374, Func Offset: 0x54
	// Line 274, Address: 0x1026380, Func Offset: 0x60
	// Line 275, Address: 0x1026388, Func Offset: 0x68
	// Line 276, Address: 0x1026390, Func Offset: 0x70
	// Line 277, Address: 0x1026398, Func Offset: 0x78
	// Line 278, Address: 0x10263a0, Func Offset: 0x80
	// Line 279, Address: 0x10263a4, Func Offset: 0x84
	// Line 280, Address: 0x10263c0, Func Offset: 0xa0
	// Line 281, Address: 0x10263c8, Func Offset: 0xa8
	// Line 283, Address: 0x10263d8, Func Offset: 0xb8
	// Func End, Address: 0x10263ec, Func Offset: 0xcc
}

// 
// Start address: 0x10263f0
int flashin_new()
{
	// Line 285, Address: 0x10263f0, Func Offset: 0
	// Line 287, Address: 0x10263f8, Func Offset: 0x8
	// Line 289, Address: 0x1026404, Func Offset: 0x14
	// Line 292, Address: 0x102640c, Func Offset: 0x1c
	// Line 293, Address: 0x102642c, Func Offset: 0x3c
	// Line 294, Address: 0x1026434, Func Offset: 0x44
	// Line 296, Address: 0x1026440, Func Offset: 0x50
	// Line 297, Address: 0x1026444, Func Offset: 0x54
	// Func End, Address: 0x1026454, Func Offset: 0x64
}

// 
// Start address: 0x1026460
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 299, Address: 0x1026460, Func Offset: 0
	// Line 303, Address: 0x1026474, Func Offset: 0x14
	// Line 304, Address: 0x10264a8, Func Offset: 0x48
	// Line 306, Address: 0x10264dc, Func Offset: 0x7c
	// Line 307, Address: 0x10264e8, Func Offset: 0x88
	// Line 308, Address: 0x10264f8, Func Offset: 0x98
	// Line 309, Address: 0x10264fc, Func Offset: 0x9c
	// Line 310, Address: 0x1026500, Func Offset: 0xa0
	// Line 311, Address: 0x102651c, Func Offset: 0xbc
	// Line 313, Address: 0x1026538, Func Offset: 0xd8
	// Line 314, Address: 0x102656c, Func Offset: 0x10c
	// Line 316, Address: 0x10265a0, Func Offset: 0x140
	// Line 317, Address: 0x10265ac, Func Offset: 0x14c
	// Line 318, Address: 0x10265bc, Func Offset: 0x15c
	// Line 319, Address: 0x10265c0, Func Offset: 0x160
	// Line 320, Address: 0x10265c4, Func Offset: 0x164
	// Line 324, Address: 0x10265e0, Func Offset: 0x180
	// Func End, Address: 0x10265fc, Func Offset: 0x19c
}

// 
// Start address: 0x1026600
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 328, Address: 0x1026600, Func Offset: 0
	// Line 329, Address: 0x102660c, Func Offset: 0xc
	// Line 332, Address: 0x102666c, Func Offset: 0x6c
	// Line 333, Address: 0x1026690, Func Offset: 0x90
	// Line 334, Address: 0x10266a0, Func Offset: 0xa0
	// Line 335, Address: 0x10266a8, Func Offset: 0xa8
	// Line 336, Address: 0x10266cc, Func Offset: 0xcc
	// Line 337, Address: 0x10266dc, Func Offset: 0xdc
	// Line 338, Address: 0x10266e4, Func Offset: 0xe4
	// Line 339, Address: 0x1026708, Func Offset: 0x108
	// Line 343, Address: 0x102671c, Func Offset: 0x11c
	// Func End, Address: 0x1026728, Func Offset: 0x128
}

// 
// Start address: 0x1026730
void flashout()
{
	// Line 347, Address: 0x1026730, Func Offset: 0
	// Line 348, Address: 0x1026738, Func Offset: 0x8
	// Line 350, Address: 0x1026744, Func Offset: 0x14
	// Line 351, Address: 0x102674c, Func Offset: 0x1c
	// Line 353, Address: 0x102675c, Func Offset: 0x2c
	// Func End, Address: 0x1026764, Func Offset: 0x34
}

// 
// Start address: 0x1026770
int flashout_new()
{
	// Line 355, Address: 0x1026770, Func Offset: 0
	// Line 357, Address: 0x1026778, Func Offset: 0x8
	// Line 359, Address: 0x1026784, Func Offset: 0x14
	// Line 362, Address: 0x102678c, Func Offset: 0x1c
	// Line 363, Address: 0x10267ac, Func Offset: 0x3c
	// Line 364, Address: 0x10267b4, Func Offset: 0x44
	// Line 366, Address: 0x10267c0, Func Offset: 0x50
	// Line 367, Address: 0x10267c4, Func Offset: 0x54
	// Func End, Address: 0x10267d4, Func Offset: 0x64
}

// 
// Start address: 0x10267e0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 370, Address: 0x10267e0, Func Offset: 0
	// Line 374, Address: 0x10267f0, Func Offset: 0x10
	// Line 376, Address: 0x1026824, Func Offset: 0x44
	// Line 377, Address: 0x1026830, Func Offset: 0x50
	// Line 378, Address: 0x102683c, Func Offset: 0x5c
	// Line 379, Address: 0x1026840, Func Offset: 0x60
	// Line 380, Address: 0x102685c, Func Offset: 0x7c
	// Line 382, Address: 0x1026890, Func Offset: 0xb0
	// Line 383, Address: 0x102689c, Func Offset: 0xbc
	// Line 384, Address: 0x10268a8, Func Offset: 0xc8
	// Line 385, Address: 0x10268ac, Func Offset: 0xcc
	// Line 388, Address: 0x10268c8, Func Offset: 0xe8
	// Func End, Address: 0x10268e0, Func Offset: 0x100
}

// 
// Start address: 0x10268e0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 391, Address: 0x10268e0, Func Offset: 0
	// Line 392, Address: 0x10268e8, Func Offset: 0x8
	// Line 393, Address: 0x1026900, Func Offset: 0x20
	// Line 394, Address: 0x1026914, Func Offset: 0x34
	// Line 395, Address: 0x102691c, Func Offset: 0x3c
	// Line 396, Address: 0x1026934, Func Offset: 0x54
	// Line 397, Address: 0x1026944, Func Offset: 0x64
	// Line 398, Address: 0x102694c, Func Offset: 0x6c
	// Line 399, Address: 0x1026964, Func Offset: 0x84
	// Line 403, Address: 0x1026974, Func Offset: 0x94
	// Func End, Address: 0x1026980, Func Offset: 0xa0
}

// 
// Start address: 0x1026980
void colorset(int ColorNo)
{
	// Line 406, Address: 0x1026980, Func Offset: 0
	// Line 407, Address: 0x102698c, Func Offset: 0xc
	// Line 408, Address: 0x102699c, Func Offset: 0x1c
	// Func End, Address: 0x10269ac, Func Offset: 0x2c
}

// 
// Start address: 0x10269b0
void colorset2(int ColorNo)
{
	// Line 410, Address: 0x10269b0, Func Offset: 0
	// Line 411, Address: 0x10269bc, Func Offset: 0xc
	// Line 412, Address: 0x10269cc, Func Offset: 0x1c
	// Func End, Address: 0x10269dc, Func Offset: 0x2c
}

// 
// Start address: 0x10269e0
void colorset3(int ColorNo)
{
	// Line 414, Address: 0x10269e0, Func Offset: 0
	// Line 415, Address: 0x10269ec, Func Offset: 0xc
	// Line 416, Address: 0x10269fc, Func Offset: 0x1c
	// Func End, Address: 0x1026a0c, Func Offset: 0x2c
}

// 
// Start address: 0x1026a10
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 422, Address: 0x1026a10, Func Offset: 0
	// Line 427, Address: 0x1026a30, Func Offset: 0x20
	// Line 429, Address: 0x1026a98, Func Offset: 0x88
	// Line 431, Address: 0x1026aa8, Func Offset: 0x98
	// Line 433, Address: 0x1026ab8, Func Offset: 0xa8
	// Line 435, Address: 0x1026ac8, Func Offset: 0xb8
	// Line 438, Address: 0x1026ad0, Func Offset: 0xc0
	// Line 439, Address: 0x1026ae8, Func Offset: 0xd8
	// Line 440, Address: 0x1026b10, Func Offset: 0x100
	// Line 441, Address: 0x1026b30, Func Offset: 0x120
	// Line 442, Address: 0x1026b3c, Func Offset: 0x12c
	// Line 443, Address: 0x1026b6c, Func Offset: 0x15c
	// Line 445, Address: 0x1026b7c, Func Offset: 0x16c
	// Func End, Address: 0x1026b9c, Func Offset: 0x18c
}

// 
// Start address: 0x1026ba0
int FadeProc()
{
	// Line 450, Address: 0x1026ba0, Func Offset: 0
	// Line 451, Address: 0x1026ba8, Func Offset: 0x8
	// Line 453, Address: 0x1026bec, Func Offset: 0x4c
	// Line 455, Address: 0x1026bfc, Func Offset: 0x5c
	// Line 457, Address: 0x1026c0c, Func Offset: 0x6c
	// Line 459, Address: 0x1026c1c, Func Offset: 0x7c
	// Line 461, Address: 0x1026c2c, Func Offset: 0x8c
	// Line 463, Address: 0x1026c30, Func Offset: 0x90
	// Func End, Address: 0x1026c40, Func Offset: 0xa0
}

