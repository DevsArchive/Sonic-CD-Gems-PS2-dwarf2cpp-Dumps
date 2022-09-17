typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[4];
typedef tagPALETTEENTRY type_1[48];
typedef tagPALETTEENTRY type_2[64];
typedef unsigned char type_3[7];
typedef unsigned char type_4[7];
typedef char type_5[6];
typedef tagPALETTEENTRY type_6[4];
typedef _anon0 type_7[6];
typedef tagPALETTEENTRY type_8[64];
typedef char type_9[6];
typedef tagPALETTEENTRY type_10[4];
typedef char type_11[6];

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
tagPALETTEENTRY gamecolor[64];
tagPALETTEENTRY zone82colora[48];
_anon0 colortbl[6];
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
_anon1 stageno;
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
// Start address: 0x101cbb0
void clchgctr()
{
	unsigned char* pChgTime;
	unsigned char* pChgCnt;
	char col6a0cnt[6];
	tagPALETTEENTRY col6a0col[4];
	char col6a1cnt[6];
	tagPALETTEENTRY col6a1col[4];
	char col6a2cnt[6];
	tagPALETTEENTRY col6a2col[4];
	// Line 154, Address: 0x101cbb0, Func Offset: 0
	// Line 156, Address: 0x101cbb8, Func Offset: 0x8
	// Line 160, Address: 0x101cbec, Func Offset: 0x3c
	// Line 164, Address: 0x101cc20, Func Offset: 0x70
	// Line 168, Address: 0x101cc54, Func Offset: 0xa4
	// Line 172, Address: 0x101cc88, Func Offset: 0xd8
	// Line 176, Address: 0x101ccbc, Func Offset: 0x10c
	// Line 181, Address: 0x101ccf0, Func Offset: 0x140
	// Line 182, Address: 0x101ccfc, Func Offset: 0x14c
	// Line 184, Address: 0x101cd08, Func Offset: 0x158
	// Line 185, Address: 0x101cd20, Func Offset: 0x170
	// Line 186, Address: 0x101cd38, Func Offset: 0x188
	// Line 187, Address: 0x101cd50, Func Offset: 0x1a0
	// Func End, Address: 0x101cd60, Func Offset: 0x1b0
}

// 
// Start address: 0x101cd60
void clchg_sub0(unsigned char** ppChgTim, unsigned char** ppChgCnt, char* pCnttbl, tagPALETTEENTRY* pPlttbl)
{
	short idx;
	short cnt;
	short timwk;
	tagPALETTEENTRY* pPalet;
	// Line 191, Address: 0x101cd60, Func Offset: 0
	// Line 195, Address: 0x101cd84, Func Offset: 0x24
	// Line 196, Address: 0x101cdb4, Func Offset: 0x54
	// Line 197, Address: 0x101cdd4, Func Offset: 0x74
	// Line 199, Address: 0x101cdf4, Func Offset: 0x94
	// Line 200, Address: 0x101ce0c, Func Offset: 0xac
	// Line 201, Address: 0x101ce24, Func Offset: 0xc4
	// Line 202, Address: 0x101ce54, Func Offset: 0xf4
	// Line 204, Address: 0x101ce58, Func Offset: 0xf8
	// Line 206, Address: 0x101ce68, Func Offset: 0x108
	// Line 207, Address: 0x101ce74, Func Offset: 0x114
	// Line 208, Address: 0x101ce94, Func Offset: 0x134
	// Line 209, Address: 0x101ceb8, Func Offset: 0x158
	// Line 210, Address: 0x101ceec, Func Offset: 0x18c
	// Line 211, Address: 0x101cef8, Func Offset: 0x198
	// Line 215, Address: 0x101cf44, Func Offset: 0x1e4
	// Line 216, Address: 0x101cf58, Func Offset: 0x1f8
	// Line 217, Address: 0x101cf6c, Func Offset: 0x20c
	// Func End, Address: 0x101cf88, Func Offset: 0x228
}

// 
// Start address: 0x101cf90
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 225, Address: 0x101cf90, Func Offset: 0
	// Line 229, Address: 0x101cf9c, Func Offset: 0xc
	// Line 231, Address: 0x101cfd0, Func Offset: 0x40
	// Line 232, Address: 0x101cfdc, Func Offset: 0x4c
	// Line 233, Address: 0x101cfe0, Func Offset: 0x50
	// Line 234, Address: 0x101cfe4, Func Offset: 0x54
	// Line 235, Address: 0x101cfe8, Func Offset: 0x58
	// Line 236, Address: 0x101cff0, Func Offset: 0x60
	// Line 237, Address: 0x101cff4, Func Offset: 0x64
	// Line 238, Address: 0x101d010, Func Offset: 0x80
	// Line 239, Address: 0x101d018, Func Offset: 0x88
	// Line 241, Address: 0x101d028, Func Offset: 0x98
	// Func End, Address: 0x101d03c, Func Offset: 0xac
}

// 
// Start address: 0x101d040
int fadein0_new()
{
	// Line 245, Address: 0x101d040, Func Offset: 0
	// Line 247, Address: 0x101d048, Func Offset: 0x8
	// Line 249, Address: 0x101d054, Func Offset: 0x14
	// Line 252, Address: 0x101d05c, Func Offset: 0x1c
	// Line 253, Address: 0x101d07c, Func Offset: 0x3c
	// Line 254, Address: 0x101d084, Func Offset: 0x44
	// Line 256, Address: 0x101d090, Func Offset: 0x50
	// Line 257, Address: 0x101d094, Func Offset: 0x54
	// Func End, Address: 0x101d0a4, Func Offset: 0x64
}

// 
// Start address: 0x101d0b0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 261, Address: 0x101d0b0, Func Offset: 0
	// Line 265, Address: 0x101d0c4, Func Offset: 0x14
	// Line 266, Address: 0x101d0f8, Func Offset: 0x48
	// Line 268, Address: 0x101d12c, Func Offset: 0x7c
	// Line 269, Address: 0x101d138, Func Offset: 0x88
	// Line 270, Address: 0x101d148, Func Offset: 0x98
	// Line 271, Address: 0x101d14c, Func Offset: 0x9c
	// Line 272, Address: 0x101d150, Func Offset: 0xa0
	// Line 273, Address: 0x101d16c, Func Offset: 0xbc
	// Line 275, Address: 0x101d188, Func Offset: 0xd8
	// Line 276, Address: 0x101d1bc, Func Offset: 0x10c
	// Line 278, Address: 0x101d1f0, Func Offset: 0x140
	// Line 279, Address: 0x101d1fc, Func Offset: 0x14c
	// Line 280, Address: 0x101d20c, Func Offset: 0x15c
	// Line 281, Address: 0x101d210, Func Offset: 0x160
	// Line 282, Address: 0x101d214, Func Offset: 0x164
	// Line 286, Address: 0x101d230, Func Offset: 0x180
	// Func End, Address: 0x101d24c, Func Offset: 0x19c
}

// 
// Start address: 0x101d250
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 290, Address: 0x101d250, Func Offset: 0
	// Line 291, Address: 0x101d25c, Func Offset: 0xc
	// Line 294, Address: 0x101d2bc, Func Offset: 0x6c
	// Line 295, Address: 0x101d2e0, Func Offset: 0x90
	// Line 296, Address: 0x101d2f0, Func Offset: 0xa0
	// Line 297, Address: 0x101d2f8, Func Offset: 0xa8
	// Line 298, Address: 0x101d31c, Func Offset: 0xcc
	// Line 299, Address: 0x101d32c, Func Offset: 0xdc
	// Line 300, Address: 0x101d334, Func Offset: 0xe4
	// Line 301, Address: 0x101d358, Func Offset: 0x108
	// Line 305, Address: 0x101d36c, Func Offset: 0x11c
	// Func End, Address: 0x101d378, Func Offset: 0x128
}

// 
// Start address: 0x101d380
void fadeout()
{
	// Line 309, Address: 0x101d380, Func Offset: 0
	// Line 310, Address: 0x101d388, Func Offset: 0x8
	// Line 312, Address: 0x101d394, Func Offset: 0x14
	// Line 313, Address: 0x101d39c, Func Offset: 0x1c
	// Line 315, Address: 0x101d3ac, Func Offset: 0x2c
	// Func End, Address: 0x101d3b4, Func Offset: 0x34
}

// 
// Start address: 0x101d3c0
int fadeout_new()
{
	// Line 319, Address: 0x101d3c0, Func Offset: 0
	// Line 321, Address: 0x101d3c8, Func Offset: 0x8
	// Line 323, Address: 0x101d3d4, Func Offset: 0x14
	// Line 326, Address: 0x101d3dc, Func Offset: 0x1c
	// Line 327, Address: 0x101d3fc, Func Offset: 0x3c
	// Line 328, Address: 0x101d404, Func Offset: 0x44
	// Line 330, Address: 0x101d410, Func Offset: 0x50
	// Line 331, Address: 0x101d414, Func Offset: 0x54
	// Func End, Address: 0x101d424, Func Offset: 0x64
}

// 
// Start address: 0x101d430
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 334, Address: 0x101d430, Func Offset: 0
	// Line 338, Address: 0x101d440, Func Offset: 0x10
	// Line 340, Address: 0x101d474, Func Offset: 0x44
	// Line 341, Address: 0x101d480, Func Offset: 0x50
	// Line 342, Address: 0x101d48c, Func Offset: 0x5c
	// Line 343, Address: 0x101d490, Func Offset: 0x60
	// Line 344, Address: 0x101d4ac, Func Offset: 0x7c
	// Line 346, Address: 0x101d4e0, Func Offset: 0xb0
	// Line 347, Address: 0x101d4ec, Func Offset: 0xbc
	// Line 348, Address: 0x101d4f8, Func Offset: 0xc8
	// Line 349, Address: 0x101d4fc, Func Offset: 0xcc
	// Line 352, Address: 0x101d518, Func Offset: 0xe8
	// Func End, Address: 0x101d530, Func Offset: 0x100
}

// 
// Start address: 0x101d530
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 355, Address: 0x101d530, Func Offset: 0
	// Line 356, Address: 0x101d538, Func Offset: 0x8
	// Line 357, Address: 0x101d548, Func Offset: 0x18
	// Line 358, Address: 0x101d55c, Func Offset: 0x2c
	// Line 359, Address: 0x101d564, Func Offset: 0x34
	// Line 360, Address: 0x101d574, Func Offset: 0x44
	// Line 361, Address: 0x101d584, Func Offset: 0x54
	// Line 362, Address: 0x101d58c, Func Offset: 0x5c
	// Line 363, Address: 0x101d59c, Func Offset: 0x6c
	// Line 366, Address: 0x101d5ac, Func Offset: 0x7c
	// Func End, Address: 0x101d5b8, Func Offset: 0x88
}

// 
// Start address: 0x101d5c0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 371, Address: 0x101d5c0, Func Offset: 0
	// Line 375, Address: 0x101d5cc, Func Offset: 0xc
	// Line 376, Address: 0x101d5d4, Func Offset: 0x14
	// Line 378, Address: 0x101d5e0, Func Offset: 0x20
	// Line 380, Address: 0x101d614, Func Offset: 0x54
	// Line 381, Address: 0x101d620, Func Offset: 0x60
	// Line 382, Address: 0x101d628, Func Offset: 0x68
	// Line 383, Address: 0x101d630, Func Offset: 0x70
	// Line 384, Address: 0x101d638, Func Offset: 0x78
	// Line 385, Address: 0x101d640, Func Offset: 0x80
	// Line 386, Address: 0x101d644, Func Offset: 0x84
	// Line 387, Address: 0x101d660, Func Offset: 0xa0
	// Line 388, Address: 0x101d668, Func Offset: 0xa8
	// Line 390, Address: 0x101d678, Func Offset: 0xb8
	// Func End, Address: 0x101d68c, Func Offset: 0xcc
}

// 
// Start address: 0x101d690
int flashin_new()
{
	// Line 392, Address: 0x101d690, Func Offset: 0
	// Line 394, Address: 0x101d698, Func Offset: 0x8
	// Line 396, Address: 0x101d6a4, Func Offset: 0x14
	// Line 399, Address: 0x101d6ac, Func Offset: 0x1c
	// Line 400, Address: 0x101d6cc, Func Offset: 0x3c
	// Line 401, Address: 0x101d6d4, Func Offset: 0x44
	// Line 403, Address: 0x101d6e0, Func Offset: 0x50
	// Line 404, Address: 0x101d6e4, Func Offset: 0x54
	// Func End, Address: 0x101d6f4, Func Offset: 0x64
}

// 
// Start address: 0x101d700
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 406, Address: 0x101d700, Func Offset: 0
	// Line 410, Address: 0x101d714, Func Offset: 0x14
	// Line 411, Address: 0x101d748, Func Offset: 0x48
	// Line 413, Address: 0x101d77c, Func Offset: 0x7c
	// Line 414, Address: 0x101d788, Func Offset: 0x88
	// Line 415, Address: 0x101d798, Func Offset: 0x98
	// Line 416, Address: 0x101d79c, Func Offset: 0x9c
	// Line 417, Address: 0x101d7a0, Func Offset: 0xa0
	// Line 418, Address: 0x101d7bc, Func Offset: 0xbc
	// Line 420, Address: 0x101d7d8, Func Offset: 0xd8
	// Line 421, Address: 0x101d80c, Func Offset: 0x10c
	// Line 423, Address: 0x101d840, Func Offset: 0x140
	// Line 424, Address: 0x101d84c, Func Offset: 0x14c
	// Line 425, Address: 0x101d85c, Func Offset: 0x15c
	// Line 426, Address: 0x101d860, Func Offset: 0x160
	// Line 427, Address: 0x101d864, Func Offset: 0x164
	// Line 431, Address: 0x101d880, Func Offset: 0x180
	// Func End, Address: 0x101d89c, Func Offset: 0x19c
}

// 
// Start address: 0x101d8a0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 435, Address: 0x101d8a0, Func Offset: 0
	// Line 436, Address: 0x101d8ac, Func Offset: 0xc
	// Line 439, Address: 0x101d90c, Func Offset: 0x6c
	// Line 440, Address: 0x101d930, Func Offset: 0x90
	// Line 441, Address: 0x101d940, Func Offset: 0xa0
	// Line 442, Address: 0x101d948, Func Offset: 0xa8
	// Line 443, Address: 0x101d96c, Func Offset: 0xcc
	// Line 444, Address: 0x101d97c, Func Offset: 0xdc
	// Line 445, Address: 0x101d984, Func Offset: 0xe4
	// Line 446, Address: 0x101d9a8, Func Offset: 0x108
	// Line 450, Address: 0x101d9bc, Func Offset: 0x11c
	// Func End, Address: 0x101d9c8, Func Offset: 0x128
}

// 
// Start address: 0x101d9d0
void flashout()
{
	// Line 454, Address: 0x101d9d0, Func Offset: 0
	// Line 455, Address: 0x101d9d8, Func Offset: 0x8
	// Line 457, Address: 0x101d9e4, Func Offset: 0x14
	// Line 458, Address: 0x101d9ec, Func Offset: 0x1c
	// Line 460, Address: 0x101d9fc, Func Offset: 0x2c
	// Func End, Address: 0x101da04, Func Offset: 0x34
}

// 
// Start address: 0x101da10
int flashout_new()
{
	// Line 462, Address: 0x101da10, Func Offset: 0
	// Line 464, Address: 0x101da18, Func Offset: 0x8
	// Line 466, Address: 0x101da24, Func Offset: 0x14
	// Line 469, Address: 0x101da2c, Func Offset: 0x1c
	// Line 470, Address: 0x101da4c, Func Offset: 0x3c
	// Line 471, Address: 0x101da54, Func Offset: 0x44
	// Line 473, Address: 0x101da60, Func Offset: 0x50
	// Line 474, Address: 0x101da64, Func Offset: 0x54
	// Func End, Address: 0x101da74, Func Offset: 0x64
}

// 
// Start address: 0x101da80
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 477, Address: 0x101da80, Func Offset: 0
	// Line 481, Address: 0x101da90, Func Offset: 0x10
	// Line 483, Address: 0x101dac4, Func Offset: 0x44
	// Line 484, Address: 0x101dad0, Func Offset: 0x50
	// Line 485, Address: 0x101dadc, Func Offset: 0x5c
	// Line 486, Address: 0x101dae0, Func Offset: 0x60
	// Line 487, Address: 0x101dafc, Func Offset: 0x7c
	// Line 489, Address: 0x101db30, Func Offset: 0xb0
	// Line 490, Address: 0x101db3c, Func Offset: 0xbc
	// Line 491, Address: 0x101db48, Func Offset: 0xc8
	// Line 492, Address: 0x101db4c, Func Offset: 0xcc
	// Line 495, Address: 0x101db68, Func Offset: 0xe8
	// Func End, Address: 0x101db80, Func Offset: 0x100
}

// 
// Start address: 0x101db80
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 498, Address: 0x101db80, Func Offset: 0
	// Line 499, Address: 0x101db88, Func Offset: 0x8
	// Line 500, Address: 0x101dba0, Func Offset: 0x20
	// Line 501, Address: 0x101dbb4, Func Offset: 0x34
	// Line 502, Address: 0x101dbbc, Func Offset: 0x3c
	// Line 503, Address: 0x101dbd4, Func Offset: 0x54
	// Line 504, Address: 0x101dbe4, Func Offset: 0x64
	// Line 505, Address: 0x101dbec, Func Offset: 0x6c
	// Line 506, Address: 0x101dc04, Func Offset: 0x84
	// Line 510, Address: 0x101dc14, Func Offset: 0x94
	// Func End, Address: 0x101dc20, Func Offset: 0xa0
}

// 
// Start address: 0x101dc20
void colorset(int ColorNo)
{
	// Line 513, Address: 0x101dc20, Func Offset: 0
	// Line 514, Address: 0x101dc2c, Func Offset: 0xc
	// Line 515, Address: 0x101dc3c, Func Offset: 0x1c
	// Func End, Address: 0x101dc4c, Func Offset: 0x2c
}

// 
// Start address: 0x101dc50
void colorset2(int ColorNo)
{
	// Line 517, Address: 0x101dc50, Func Offset: 0
	// Line 518, Address: 0x101dc5c, Func Offset: 0xc
	// Line 519, Address: 0x101dc6c, Func Offset: 0x1c
	// Func End, Address: 0x101dc7c, Func Offset: 0x2c
}

// 
// Start address: 0x101dc80
void colorset3(int ColorNo)
{
	// Line 521, Address: 0x101dc80, Func Offset: 0
	// Line 522, Address: 0x101dc8c, Func Offset: 0xc
	// Line 523, Address: 0x101dc9c, Func Offset: 0x1c
	// Func End, Address: 0x101dcac, Func Offset: 0x2c
}

// 
// Start address: 0x101dcb0
void colorset4(int ColorNo)
{
	// Line 525, Address: 0x101dcb0, Func Offset: 0
	// Line 526, Address: 0x101dcbc, Func Offset: 0xc
	// Line 527, Address: 0x101dccc, Func Offset: 0x1c
	// Func End, Address: 0x101dcdc, Func Offset: 0x2c
}

// 
// Start address: 0x101dce0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 533, Address: 0x101dce0, Func Offset: 0
	// Line 538, Address: 0x101dd00, Func Offset: 0x20
	// Line 540, Address: 0x101dd68, Func Offset: 0x88
	// Line 542, Address: 0x101dd78, Func Offset: 0x98
	// Line 544, Address: 0x101dd88, Func Offset: 0xa8
	// Line 546, Address: 0x101dd98, Func Offset: 0xb8
	// Line 549, Address: 0x101dda0, Func Offset: 0xc0
	// Line 550, Address: 0x101ddb8, Func Offset: 0xd8
	// Line 551, Address: 0x101dde0, Func Offset: 0x100
	// Line 552, Address: 0x101de00, Func Offset: 0x120
	// Line 553, Address: 0x101de0c, Func Offset: 0x12c
	// Line 554, Address: 0x101de3c, Func Offset: 0x15c
	// Line 556, Address: 0x101de4c, Func Offset: 0x16c
	// Func End, Address: 0x101de6c, Func Offset: 0x18c
}

// 
// Start address: 0x101de70
int FadeProc()
{
	// Line 561, Address: 0x101de70, Func Offset: 0
	// Line 562, Address: 0x101de78, Func Offset: 0x8
	// Line 564, Address: 0x101debc, Func Offset: 0x4c
	// Line 566, Address: 0x101decc, Func Offset: 0x5c
	// Line 568, Address: 0x101dedc, Func Offset: 0x6c
	// Line 570, Address: 0x101deec, Func Offset: 0x7c
	// Line 572, Address: 0x101defc, Func Offset: 0x8c
	// Line 574, Address: 0x101df00, Func Offset: 0x90
	// Func End, Address: 0x101df10, Func Offset: 0xa0
}

