typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;


typedef tagPALETTEENTRY type_0[64];
typedef _anon1 type_1[7];
typedef tagPALETTEENTRY type_2[48];
typedef tagPALETTEENTRY type_3[16];
typedef tagPALETTEENTRY type_4[64];
typedef unsigned char type_5[7];
typedef unsigned char type_6[7];
typedef tagPALETTEENTRY type_7[16];
typedef tagPALETTEENTRY type_8[48];
typedef tagPALETTEENTRY type_9[64];

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

struct _anon0
{
	unsigned char adr;
	unsigned char tate;
	unsigned char yoko;
	unsigned char time;
	tagPALETTEENTRY colortbl[64];
};

struct _anon1
{
	tagPALETTEENTRY* PeSrc;
	short offset;
	short cnt;
};

union _anon2
{
	short w;
	_anon3 b;
};

struct _anon3
{
	char l;
	char h;
};

tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone5color0[48];
tagPALETTEENTRY zone5color1[48];
tagPALETTEENTRY zone5colboss0[16];
_anon1 colortbl[7];
unsigned char colrevflag;
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
_anon2 stageno;
tagPALETTEENTRY* lpcolorwk2;

void clchgctr();
void colchgsub(unsigned char** ppChgTime, unsigned char** ppChgCnt, _anon0* pColortbl);
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
// Start address: 0x101b940
void clchgctr()
{
	unsigned char* pChgTime;
	unsigned char* pChgCnt;
	_anon0 colchg50;
	_anon0 colchg51;
	// Line 187, Address: 0x101b940, Func Offset: 0
	// Line 189, Address: 0x101b948, Func Offset: 0x8
	// Line 197, Address: 0x101b984, Func Offset: 0x44
	// Line 206, Address: 0x101b9c0, Func Offset: 0x80
	// Line 210, Address: 0x101b9d0, Func Offset: 0x90
	// Line 211, Address: 0x101b9dc, Func Offset: 0x9c
	// Line 214, Address: 0x101b9e8, Func Offset: 0xa8
	// Line 215, Address: 0x101b9f8, Func Offset: 0xb8
	// Line 216, Address: 0x101ba0c, Func Offset: 0xcc
	// Line 217, Address: 0x101ba14, Func Offset: 0xd4
	// Line 220, Address: 0x101ba28, Func Offset: 0xe8
	// Func End, Address: 0x101ba38, Func Offset: 0xf8
}

// 
// Start address: 0x101ba40
void colchgsub(unsigned char** ppChgTime, unsigned char** ppChgCnt, _anon0* pColortbl)
{
	short cnt;
	tagPALETTEENTRY* pPalet;
	tagPALETTEENTRY* pColtbl;
	int i;
	// Line 224, Address: 0x101ba40, Func Offset: 0
	// Line 229, Address: 0x101ba60, Func Offset: 0x20
	// Line 230, Address: 0x101ba94, Func Offset: 0x54
	// Line 231, Address: 0x101baa8, Func Offset: 0x68
	// Line 232, Address: 0x101baf4, Func Offset: 0xb4
	// Line 236, Address: 0x101baf8, Func Offset: 0xb8
	// Line 239, Address: 0x101bb08, Func Offset: 0xc8
	// Line 240, Address: 0x101bb20, Func Offset: 0xe0
	// Line 241, Address: 0x101bb3c, Func Offset: 0xfc
	// Line 243, Address: 0x101bb54, Func Offset: 0x114
	// Line 244, Address: 0x101bb60, Func Offset: 0x120
	// Line 245, Address: 0x101bb90, Func Offset: 0x150
	// Line 249, Address: 0x101bbac, Func Offset: 0x16c
	// Line 250, Address: 0x101bbc0, Func Offset: 0x180
	// Line 251, Address: 0x101bbd4, Func Offset: 0x194
	// Func End, Address: 0x101bbf0, Func Offset: 0x1b0
}

// 
// Start address: 0x101bbf0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 259, Address: 0x101bbf0, Func Offset: 0
	// Line 263, Address: 0x101bbfc, Func Offset: 0xc
	// Line 265, Address: 0x101bc30, Func Offset: 0x40
	// Line 266, Address: 0x101bc3c, Func Offset: 0x4c
	// Line 267, Address: 0x101bc40, Func Offset: 0x50
	// Line 268, Address: 0x101bc44, Func Offset: 0x54
	// Line 269, Address: 0x101bc48, Func Offset: 0x58
	// Line 270, Address: 0x101bc50, Func Offset: 0x60
	// Line 271, Address: 0x101bc54, Func Offset: 0x64
	// Line 272, Address: 0x101bc70, Func Offset: 0x80
	// Line 273, Address: 0x101bc78, Func Offset: 0x88
	// Line 275, Address: 0x101bc88, Func Offset: 0x98
	// Func End, Address: 0x101bc9c, Func Offset: 0xac
}

// 
// Start address: 0x101bca0
int fadein0_new()
{
	// Line 279, Address: 0x101bca0, Func Offset: 0
	// Line 281, Address: 0x101bca8, Func Offset: 0x8
	// Line 283, Address: 0x101bcb4, Func Offset: 0x14
	// Line 286, Address: 0x101bcbc, Func Offset: 0x1c
	// Line 287, Address: 0x101bcdc, Func Offset: 0x3c
	// Line 288, Address: 0x101bce4, Func Offset: 0x44
	// Line 290, Address: 0x101bcf0, Func Offset: 0x50
	// Line 291, Address: 0x101bcf4, Func Offset: 0x54
	// Func End, Address: 0x101bd04, Func Offset: 0x64
}

// 
// Start address: 0x101bd10
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 295, Address: 0x101bd10, Func Offset: 0
	// Line 299, Address: 0x101bd24, Func Offset: 0x14
	// Line 300, Address: 0x101bd58, Func Offset: 0x48
	// Line 302, Address: 0x101bd8c, Func Offset: 0x7c
	// Line 303, Address: 0x101bd98, Func Offset: 0x88
	// Line 304, Address: 0x101bda8, Func Offset: 0x98
	// Line 305, Address: 0x101bdac, Func Offset: 0x9c
	// Line 306, Address: 0x101bdb0, Func Offset: 0xa0
	// Line 307, Address: 0x101bdcc, Func Offset: 0xbc
	// Line 309, Address: 0x101bde8, Func Offset: 0xd8
	// Line 310, Address: 0x101be1c, Func Offset: 0x10c
	// Line 312, Address: 0x101be50, Func Offset: 0x140
	// Line 313, Address: 0x101be5c, Func Offset: 0x14c
	// Line 314, Address: 0x101be6c, Func Offset: 0x15c
	// Line 315, Address: 0x101be70, Func Offset: 0x160
	// Line 316, Address: 0x101be74, Func Offset: 0x164
	// Line 320, Address: 0x101be90, Func Offset: 0x180
	// Func End, Address: 0x101beac, Func Offset: 0x19c
}

// 
// Start address: 0x101beb0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 324, Address: 0x101beb0, Func Offset: 0
	// Line 325, Address: 0x101bebc, Func Offset: 0xc
	// Line 328, Address: 0x101bf1c, Func Offset: 0x6c
	// Line 329, Address: 0x101bf40, Func Offset: 0x90
	// Line 330, Address: 0x101bf50, Func Offset: 0xa0
	// Line 331, Address: 0x101bf58, Func Offset: 0xa8
	// Line 332, Address: 0x101bf7c, Func Offset: 0xcc
	// Line 333, Address: 0x101bf8c, Func Offset: 0xdc
	// Line 334, Address: 0x101bf94, Func Offset: 0xe4
	// Line 335, Address: 0x101bfb8, Func Offset: 0x108
	// Line 339, Address: 0x101bfcc, Func Offset: 0x11c
	// Func End, Address: 0x101bfd8, Func Offset: 0x128
}

// 
// Start address: 0x101bfe0
void fadeout()
{
	// Line 343, Address: 0x101bfe0, Func Offset: 0
	// Line 344, Address: 0x101bfe8, Func Offset: 0x8
	// Line 346, Address: 0x101bff4, Func Offset: 0x14
	// Line 347, Address: 0x101bffc, Func Offset: 0x1c
	// Line 349, Address: 0x101c00c, Func Offset: 0x2c
	// Func End, Address: 0x101c014, Func Offset: 0x34
}

// 
// Start address: 0x101c020
int fadeout_new()
{
	// Line 353, Address: 0x101c020, Func Offset: 0
	// Line 355, Address: 0x101c028, Func Offset: 0x8
	// Line 357, Address: 0x101c034, Func Offset: 0x14
	// Line 360, Address: 0x101c03c, Func Offset: 0x1c
	// Line 361, Address: 0x101c05c, Func Offset: 0x3c
	// Line 362, Address: 0x101c064, Func Offset: 0x44
	// Line 364, Address: 0x101c070, Func Offset: 0x50
	// Line 365, Address: 0x101c074, Func Offset: 0x54
	// Func End, Address: 0x101c084, Func Offset: 0x64
}

// 
// Start address: 0x101c090
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 368, Address: 0x101c090, Func Offset: 0
	// Line 372, Address: 0x101c0a0, Func Offset: 0x10
	// Line 374, Address: 0x101c0d4, Func Offset: 0x44
	// Line 375, Address: 0x101c0e0, Func Offset: 0x50
	// Line 376, Address: 0x101c0ec, Func Offset: 0x5c
	// Line 377, Address: 0x101c0f0, Func Offset: 0x60
	// Line 378, Address: 0x101c10c, Func Offset: 0x7c
	// Line 380, Address: 0x101c140, Func Offset: 0xb0
	// Line 381, Address: 0x101c14c, Func Offset: 0xbc
	// Line 382, Address: 0x101c158, Func Offset: 0xc8
	// Line 383, Address: 0x101c15c, Func Offset: 0xcc
	// Line 386, Address: 0x101c178, Func Offset: 0xe8
	// Func End, Address: 0x101c190, Func Offset: 0x100
}

// 
// Start address: 0x101c190
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 389, Address: 0x101c190, Func Offset: 0
	// Line 390, Address: 0x101c198, Func Offset: 0x8
	// Line 391, Address: 0x101c1a8, Func Offset: 0x18
	// Line 392, Address: 0x101c1bc, Func Offset: 0x2c
	// Line 393, Address: 0x101c1c4, Func Offset: 0x34
	// Line 394, Address: 0x101c1d4, Func Offset: 0x44
	// Line 395, Address: 0x101c1e4, Func Offset: 0x54
	// Line 396, Address: 0x101c1ec, Func Offset: 0x5c
	// Line 397, Address: 0x101c1fc, Func Offset: 0x6c
	// Line 400, Address: 0x101c20c, Func Offset: 0x7c
	// Func End, Address: 0x101c218, Func Offset: 0x88
}

// 
// Start address: 0x101c220
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 405, Address: 0x101c220, Func Offset: 0
	// Line 409, Address: 0x101c22c, Func Offset: 0xc
	// Line 410, Address: 0x101c234, Func Offset: 0x14
	// Line 412, Address: 0x101c240, Func Offset: 0x20
	// Line 414, Address: 0x101c274, Func Offset: 0x54
	// Line 415, Address: 0x101c280, Func Offset: 0x60
	// Line 416, Address: 0x101c288, Func Offset: 0x68
	// Line 417, Address: 0x101c290, Func Offset: 0x70
	// Line 418, Address: 0x101c298, Func Offset: 0x78
	// Line 419, Address: 0x101c2a0, Func Offset: 0x80
	// Line 420, Address: 0x101c2a4, Func Offset: 0x84
	// Line 421, Address: 0x101c2c0, Func Offset: 0xa0
	// Line 422, Address: 0x101c2c8, Func Offset: 0xa8
	// Line 424, Address: 0x101c2d8, Func Offset: 0xb8
	// Func End, Address: 0x101c2ec, Func Offset: 0xcc
}

// 
// Start address: 0x101c2f0
int flashin_new()
{
	// Line 426, Address: 0x101c2f0, Func Offset: 0
	// Line 428, Address: 0x101c2f8, Func Offset: 0x8
	// Line 430, Address: 0x101c304, Func Offset: 0x14
	// Line 433, Address: 0x101c30c, Func Offset: 0x1c
	// Line 434, Address: 0x101c32c, Func Offset: 0x3c
	// Line 435, Address: 0x101c334, Func Offset: 0x44
	// Line 437, Address: 0x101c340, Func Offset: 0x50
	// Line 438, Address: 0x101c344, Func Offset: 0x54
	// Func End, Address: 0x101c354, Func Offset: 0x64
}

// 
// Start address: 0x101c360
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 440, Address: 0x101c360, Func Offset: 0
	// Line 444, Address: 0x101c374, Func Offset: 0x14
	// Line 445, Address: 0x101c3a8, Func Offset: 0x48
	// Line 447, Address: 0x101c3dc, Func Offset: 0x7c
	// Line 448, Address: 0x101c3e8, Func Offset: 0x88
	// Line 449, Address: 0x101c3f8, Func Offset: 0x98
	// Line 450, Address: 0x101c3fc, Func Offset: 0x9c
	// Line 451, Address: 0x101c400, Func Offset: 0xa0
	// Line 452, Address: 0x101c41c, Func Offset: 0xbc
	// Line 454, Address: 0x101c438, Func Offset: 0xd8
	// Line 455, Address: 0x101c46c, Func Offset: 0x10c
	// Line 457, Address: 0x101c4a0, Func Offset: 0x140
	// Line 458, Address: 0x101c4ac, Func Offset: 0x14c
	// Line 459, Address: 0x101c4bc, Func Offset: 0x15c
	// Line 460, Address: 0x101c4c0, Func Offset: 0x160
	// Line 461, Address: 0x101c4c4, Func Offset: 0x164
	// Line 465, Address: 0x101c4e0, Func Offset: 0x180
	// Func End, Address: 0x101c4fc, Func Offset: 0x19c
}

// 
// Start address: 0x101c500
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 469, Address: 0x101c500, Func Offset: 0
	// Line 470, Address: 0x101c50c, Func Offset: 0xc
	// Line 473, Address: 0x101c56c, Func Offset: 0x6c
	// Line 474, Address: 0x101c590, Func Offset: 0x90
	// Line 475, Address: 0x101c5a0, Func Offset: 0xa0
	// Line 476, Address: 0x101c5a8, Func Offset: 0xa8
	// Line 477, Address: 0x101c5cc, Func Offset: 0xcc
	// Line 478, Address: 0x101c5dc, Func Offset: 0xdc
	// Line 479, Address: 0x101c5e4, Func Offset: 0xe4
	// Line 480, Address: 0x101c608, Func Offset: 0x108
	// Line 484, Address: 0x101c61c, Func Offset: 0x11c
	// Func End, Address: 0x101c628, Func Offset: 0x128
}

// 
// Start address: 0x101c630
void flashout()
{
	// Line 488, Address: 0x101c630, Func Offset: 0
	// Line 489, Address: 0x101c638, Func Offset: 0x8
	// Line 491, Address: 0x101c644, Func Offset: 0x14
	// Line 492, Address: 0x101c64c, Func Offset: 0x1c
	// Line 494, Address: 0x101c65c, Func Offset: 0x2c
	// Func End, Address: 0x101c664, Func Offset: 0x34
}

// 
// Start address: 0x101c670
int flashout_new()
{
	// Line 496, Address: 0x101c670, Func Offset: 0
	// Line 498, Address: 0x101c678, Func Offset: 0x8
	// Line 500, Address: 0x101c684, Func Offset: 0x14
	// Line 503, Address: 0x101c68c, Func Offset: 0x1c
	// Line 504, Address: 0x101c6ac, Func Offset: 0x3c
	// Line 505, Address: 0x101c6b4, Func Offset: 0x44
	// Line 507, Address: 0x101c6c0, Func Offset: 0x50
	// Line 508, Address: 0x101c6c4, Func Offset: 0x54
	// Func End, Address: 0x101c6d4, Func Offset: 0x64
}

// 
// Start address: 0x101c6e0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 511, Address: 0x101c6e0, Func Offset: 0
	// Line 515, Address: 0x101c6f0, Func Offset: 0x10
	// Line 517, Address: 0x101c724, Func Offset: 0x44
	// Line 518, Address: 0x101c730, Func Offset: 0x50
	// Line 519, Address: 0x101c73c, Func Offset: 0x5c
	// Line 520, Address: 0x101c740, Func Offset: 0x60
	// Line 521, Address: 0x101c75c, Func Offset: 0x7c
	// Line 523, Address: 0x101c790, Func Offset: 0xb0
	// Line 524, Address: 0x101c79c, Func Offset: 0xbc
	// Line 525, Address: 0x101c7a8, Func Offset: 0xc8
	// Line 526, Address: 0x101c7ac, Func Offset: 0xcc
	// Line 529, Address: 0x101c7c8, Func Offset: 0xe8
	// Func End, Address: 0x101c7e0, Func Offset: 0x100
}

// 
// Start address: 0x101c7e0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 532, Address: 0x101c7e0, Func Offset: 0
	// Line 533, Address: 0x101c7e8, Func Offset: 0x8
	// Line 534, Address: 0x101c800, Func Offset: 0x20
	// Line 535, Address: 0x101c814, Func Offset: 0x34
	// Line 536, Address: 0x101c81c, Func Offset: 0x3c
	// Line 537, Address: 0x101c834, Func Offset: 0x54
	// Line 538, Address: 0x101c844, Func Offset: 0x64
	// Line 539, Address: 0x101c84c, Func Offset: 0x6c
	// Line 540, Address: 0x101c864, Func Offset: 0x84
	// Line 544, Address: 0x101c874, Func Offset: 0x94
	// Func End, Address: 0x101c880, Func Offset: 0xa0
}

// 
// Start address: 0x101c880
void colorset(int ColorNo)
{
	// Line 547, Address: 0x101c880, Func Offset: 0
	// Line 548, Address: 0x101c88c, Func Offset: 0xc
	// Line 549, Address: 0x101c89c, Func Offset: 0x1c
	// Func End, Address: 0x101c8ac, Func Offset: 0x2c
}

// 
// Start address: 0x101c8b0
void colorset2(int ColorNo)
{
	// Line 551, Address: 0x101c8b0, Func Offset: 0
	// Line 552, Address: 0x101c8bc, Func Offset: 0xc
	// Line 553, Address: 0x101c8cc, Func Offset: 0x1c
	// Func End, Address: 0x101c8dc, Func Offset: 0x2c
}

// 
// Start address: 0x101c8e0
void colorset3(int ColorNo)
{
	// Line 555, Address: 0x101c8e0, Func Offset: 0
	// Line 556, Address: 0x101c8ec, Func Offset: 0xc
	// Line 557, Address: 0x101c8fc, Func Offset: 0x1c
	// Func End, Address: 0x101c90c, Func Offset: 0x2c
}

// 
// Start address: 0x101c910
void colorset4(int ColorNo)
{
	// Line 559, Address: 0x101c910, Func Offset: 0
	// Line 560, Address: 0x101c91c, Func Offset: 0xc
	// Line 561, Address: 0x101c92c, Func Offset: 0x1c
	// Func End, Address: 0x101c93c, Func Offset: 0x2c
}

// 
// Start address: 0x101c940
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 567, Address: 0x101c940, Func Offset: 0
	// Line 572, Address: 0x101c960, Func Offset: 0x20
	// Line 574, Address: 0x101c9c8, Func Offset: 0x88
	// Line 576, Address: 0x101c9d8, Func Offset: 0x98
	// Line 578, Address: 0x101c9e8, Func Offset: 0xa8
	// Line 580, Address: 0x101c9f8, Func Offset: 0xb8
	// Line 583, Address: 0x101ca00, Func Offset: 0xc0
	// Line 584, Address: 0x101ca18, Func Offset: 0xd8
	// Line 585, Address: 0x101ca40, Func Offset: 0x100
	// Line 586, Address: 0x101ca60, Func Offset: 0x120
	// Line 587, Address: 0x101ca6c, Func Offset: 0x12c
	// Line 588, Address: 0x101ca9c, Func Offset: 0x15c
	// Line 590, Address: 0x101caac, Func Offset: 0x16c
	// Func End, Address: 0x101cacc, Func Offset: 0x18c
}

// 
// Start address: 0x101cad0
int FadeProc()
{
	// Line 595, Address: 0x101cad0, Func Offset: 0
	// Line 596, Address: 0x101cad8, Func Offset: 0x8
	// Line 598, Address: 0x101cb1c, Func Offset: 0x4c
	// Line 600, Address: 0x101cb2c, Func Offset: 0x5c
	// Line 602, Address: 0x101cb3c, Func Offset: 0x6c
	// Line 604, Address: 0x101cb4c, Func Offset: 0x7c
	// Line 606, Address: 0x101cb5c, Func Offset: 0x8c
	// Line 608, Address: 0x101cb60, Func Offset: 0x90
	// Func End, Address: 0x101cb70, Func Offset: 0xa0
}

