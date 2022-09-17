typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef unsigned char type_0[32];
typedef tagPALETTEENTRY type_1[48];
typedef unsigned char type_2[34];
typedef tagPALETTEENTRY type_3[16];
typedef unsigned char type_4[8];
typedef tagPALETTEENTRY type_5[64];
typedef unsigned char type_6[7];
typedef unsigned char type_7[7];
typedef tagPALETTEENTRY type_8[2];
typedef tagPALETTEENTRY type_9[3];
typedef _anon0 type_10[6];
typedef tagPALETTEENTRY type_11[2];
typedef tagPALETTEENTRY type_12[48];
typedef tagPALETTEENTRY type_13[3];
typedef tagPALETTEENTRY type_14[64];
typedef unsigned char type_15[6];

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
tagPALETTEENTRY zone3colora[48];
tagPALETTEENTRY zone3colora2[48];
_anon0 colortbl[6];
unsigned char col3a0cnt[8];
tagPALETTEENTRY col3a0col[3];
unsigned char col3a1cnt[34];
tagPALETTEENTRY col3a1col[2];
unsigned char col3a2cnt[32];
tagPALETTEENTRY col3a2col[3];
unsigned char col3a3cnt[6];
tagPALETTEENTRY col3a3col[2];
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

unsigned short cntplus(unsigned char* work, unsigned short plus_data, unsigned short under_limit, unsigned short upper_limit);
void clchgctr();
void colchg3a();
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
// Start address: 0x10244c0
unsigned short cntplus(unsigned char* work, unsigned short plus_data, unsigned short under_limit, unsigned short upper_limit)
{
	// Line 114, Address: 0x10244c0, Func Offset: 0
	// Line 115, Address: 0x10244d4, Func Offset: 0x14
	// Line 116, Address: 0x102451c, Func Offset: 0x5c
	// Line 117, Address: 0x1024528, Func Offset: 0x68
	// Func End, Address: 0x1024534, Func Offset: 0x74
}

// 
// Start address: 0x1024540
void clchgctr()
{
	// Line 119, Address: 0x1024540, Func Offset: 0
	// Line 120, Address: 0x1024548, Func Offset: 0x8
	// Line 121, Address: 0x1024550, Func Offset: 0x10
	// Func End, Address: 0x1024560, Func Offset: 0x20
}

// 
// Start address: 0x1024560
void colchg3a()
{
	// Line 123, Address: 0x1024560, Func Offset: 0
	// Line 124, Address: 0x1024568, Func Offset: 0x8
	// Line 125, Address: 0x1024590, Func Offset: 0x30
	// Line 126, Address: 0x10245b8, Func Offset: 0x58
	// Line 127, Address: 0x10245e0, Func Offset: 0x80
	// Line 129, Address: 0x1024608, Func Offset: 0xa8
	// Func End, Address: 0x1024618, Func Offset: 0xb8
}

// 
// Start address: 0x1024620
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 139, Address: 0x1024620, Func Offset: 0
	// Line 142, Address: 0x1024638, Func Offset: 0x18
	// Line 143, Address: 0x102464c, Func Offset: 0x2c
	// Line 145, Address: 0x102466c, Func Offset: 0x4c
	// Line 146, Address: 0x1024690, Func Offset: 0x70
	// Line 147, Address: 0x10246a4, Func Offset: 0x84
	// Line 149, Address: 0x10246d0, Func Offset: 0xb0
	// Line 152, Address: 0x10246d8, Func Offset: 0xb8
	// Line 153, Address: 0x10246f4, Func Offset: 0xd4
	// Line 154, Address: 0x1024704, Func Offset: 0xe4
	// Line 161, Address: 0x102473c, Func Offset: 0x11c
	// Func End, Address: 0x102474c, Func Offset: 0x12c
}

// 
// Start address: 0x1024750
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 164, Address: 0x1024750, Func Offset: 0
	// Line 168, Address: 0x102475c, Func Offset: 0xc
	// Line 170, Address: 0x1024790, Func Offset: 0x40
	// Line 171, Address: 0x102479c, Func Offset: 0x4c
	// Line 172, Address: 0x10247a0, Func Offset: 0x50
	// Line 173, Address: 0x10247a4, Func Offset: 0x54
	// Line 174, Address: 0x10247a8, Func Offset: 0x58
	// Line 175, Address: 0x10247b0, Func Offset: 0x60
	// Line 176, Address: 0x10247b4, Func Offset: 0x64
	// Line 177, Address: 0x10247d0, Func Offset: 0x80
	// Line 178, Address: 0x10247d8, Func Offset: 0x88
	// Line 180, Address: 0x10247e8, Func Offset: 0x98
	// Func End, Address: 0x10247fc, Func Offset: 0xac
}

// 
// Start address: 0x1024800
int fadein0_new()
{
	// Line 184, Address: 0x1024800, Func Offset: 0
	// Line 186, Address: 0x1024808, Func Offset: 0x8
	// Line 188, Address: 0x1024814, Func Offset: 0x14
	// Line 191, Address: 0x102481c, Func Offset: 0x1c
	// Line 192, Address: 0x102483c, Func Offset: 0x3c
	// Line 193, Address: 0x1024844, Func Offset: 0x44
	// Line 195, Address: 0x1024850, Func Offset: 0x50
	// Line 196, Address: 0x1024854, Func Offset: 0x54
	// Func End, Address: 0x1024864, Func Offset: 0x64
}

// 
// Start address: 0x1024870
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 200, Address: 0x1024870, Func Offset: 0
	// Line 204, Address: 0x1024884, Func Offset: 0x14
	// Line 205, Address: 0x10248b8, Func Offset: 0x48
	// Line 207, Address: 0x10248ec, Func Offset: 0x7c
	// Line 208, Address: 0x10248f8, Func Offset: 0x88
	// Line 209, Address: 0x1024908, Func Offset: 0x98
	// Line 210, Address: 0x102490c, Func Offset: 0x9c
	// Line 211, Address: 0x1024910, Func Offset: 0xa0
	// Line 212, Address: 0x102492c, Func Offset: 0xbc
	// Line 214, Address: 0x1024948, Func Offset: 0xd8
	// Line 215, Address: 0x102497c, Func Offset: 0x10c
	// Line 217, Address: 0x10249b0, Func Offset: 0x140
	// Line 218, Address: 0x10249bc, Func Offset: 0x14c
	// Line 219, Address: 0x10249cc, Func Offset: 0x15c
	// Line 220, Address: 0x10249d0, Func Offset: 0x160
	// Line 221, Address: 0x10249d4, Func Offset: 0x164
	// Line 225, Address: 0x10249f0, Func Offset: 0x180
	// Func End, Address: 0x1024a0c, Func Offset: 0x19c
}

// 
// Start address: 0x1024a10
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 229, Address: 0x1024a10, Func Offset: 0
	// Line 230, Address: 0x1024a1c, Func Offset: 0xc
	// Line 233, Address: 0x1024a7c, Func Offset: 0x6c
	// Line 234, Address: 0x1024aa0, Func Offset: 0x90
	// Line 235, Address: 0x1024ab0, Func Offset: 0xa0
	// Line 236, Address: 0x1024ab8, Func Offset: 0xa8
	// Line 237, Address: 0x1024adc, Func Offset: 0xcc
	// Line 238, Address: 0x1024aec, Func Offset: 0xdc
	// Line 239, Address: 0x1024af4, Func Offset: 0xe4
	// Line 240, Address: 0x1024b18, Func Offset: 0x108
	// Line 244, Address: 0x1024b2c, Func Offset: 0x11c
	// Func End, Address: 0x1024b38, Func Offset: 0x128
}

// 
// Start address: 0x1024b40
void fadeout()
{
	// Line 248, Address: 0x1024b40, Func Offset: 0
	// Line 249, Address: 0x1024b48, Func Offset: 0x8
	// Line 251, Address: 0x1024b54, Func Offset: 0x14
	// Line 252, Address: 0x1024b5c, Func Offset: 0x1c
	// Line 254, Address: 0x1024b6c, Func Offset: 0x2c
	// Func End, Address: 0x1024b74, Func Offset: 0x34
}

// 
// Start address: 0x1024b80
int fadeout_new()
{
	// Line 258, Address: 0x1024b80, Func Offset: 0
	// Line 260, Address: 0x1024b88, Func Offset: 0x8
	// Line 262, Address: 0x1024b94, Func Offset: 0x14
	// Line 265, Address: 0x1024b9c, Func Offset: 0x1c
	// Line 266, Address: 0x1024bbc, Func Offset: 0x3c
	// Line 267, Address: 0x1024bc4, Func Offset: 0x44
	// Line 269, Address: 0x1024bd0, Func Offset: 0x50
	// Line 270, Address: 0x1024bd4, Func Offset: 0x54
	// Func End, Address: 0x1024be4, Func Offset: 0x64
}

// 
// Start address: 0x1024bf0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 273, Address: 0x1024bf0, Func Offset: 0
	// Line 277, Address: 0x1024c00, Func Offset: 0x10
	// Line 279, Address: 0x1024c34, Func Offset: 0x44
	// Line 280, Address: 0x1024c40, Func Offset: 0x50
	// Line 281, Address: 0x1024c4c, Func Offset: 0x5c
	// Line 282, Address: 0x1024c50, Func Offset: 0x60
	// Line 283, Address: 0x1024c6c, Func Offset: 0x7c
	// Line 285, Address: 0x1024ca0, Func Offset: 0xb0
	// Line 286, Address: 0x1024cac, Func Offset: 0xbc
	// Line 287, Address: 0x1024cb8, Func Offset: 0xc8
	// Line 288, Address: 0x1024cbc, Func Offset: 0xcc
	// Line 291, Address: 0x1024cd8, Func Offset: 0xe8
	// Func End, Address: 0x1024cf0, Func Offset: 0x100
}

// 
// Start address: 0x1024cf0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 294, Address: 0x1024cf0, Func Offset: 0
	// Line 295, Address: 0x1024cf8, Func Offset: 0x8
	// Line 296, Address: 0x1024d08, Func Offset: 0x18
	// Line 297, Address: 0x1024d1c, Func Offset: 0x2c
	// Line 298, Address: 0x1024d24, Func Offset: 0x34
	// Line 299, Address: 0x1024d34, Func Offset: 0x44
	// Line 300, Address: 0x1024d44, Func Offset: 0x54
	// Line 301, Address: 0x1024d4c, Func Offset: 0x5c
	// Line 302, Address: 0x1024d5c, Func Offset: 0x6c
	// Line 305, Address: 0x1024d6c, Func Offset: 0x7c
	// Func End, Address: 0x1024d78, Func Offset: 0x88
}

// 
// Start address: 0x1024d80
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 310, Address: 0x1024d80, Func Offset: 0
	// Line 314, Address: 0x1024d8c, Func Offset: 0xc
	// Line 315, Address: 0x1024d94, Func Offset: 0x14
	// Line 317, Address: 0x1024da0, Func Offset: 0x20
	// Line 319, Address: 0x1024dd4, Func Offset: 0x54
	// Line 320, Address: 0x1024de0, Func Offset: 0x60
	// Line 321, Address: 0x1024de8, Func Offset: 0x68
	// Line 322, Address: 0x1024df0, Func Offset: 0x70
	// Line 323, Address: 0x1024df8, Func Offset: 0x78
	// Line 324, Address: 0x1024e00, Func Offset: 0x80
	// Line 325, Address: 0x1024e04, Func Offset: 0x84
	// Line 326, Address: 0x1024e20, Func Offset: 0xa0
	// Line 327, Address: 0x1024e28, Func Offset: 0xa8
	// Line 329, Address: 0x1024e38, Func Offset: 0xb8
	// Func End, Address: 0x1024e4c, Func Offset: 0xcc
}

// 
// Start address: 0x1024e50
int flashin_new()
{
	// Line 331, Address: 0x1024e50, Func Offset: 0
	// Line 333, Address: 0x1024e58, Func Offset: 0x8
	// Line 335, Address: 0x1024e64, Func Offset: 0x14
	// Line 338, Address: 0x1024e6c, Func Offset: 0x1c
	// Line 339, Address: 0x1024e8c, Func Offset: 0x3c
	// Line 340, Address: 0x1024e94, Func Offset: 0x44
	// Line 342, Address: 0x1024ea0, Func Offset: 0x50
	// Line 343, Address: 0x1024ea4, Func Offset: 0x54
	// Func End, Address: 0x1024eb4, Func Offset: 0x64
}

// 
// Start address: 0x1024ec0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 345, Address: 0x1024ec0, Func Offset: 0
	// Line 349, Address: 0x1024ed4, Func Offset: 0x14
	// Line 350, Address: 0x1024f08, Func Offset: 0x48
	// Line 352, Address: 0x1024f3c, Func Offset: 0x7c
	// Line 353, Address: 0x1024f48, Func Offset: 0x88
	// Line 354, Address: 0x1024f58, Func Offset: 0x98
	// Line 355, Address: 0x1024f5c, Func Offset: 0x9c
	// Line 356, Address: 0x1024f60, Func Offset: 0xa0
	// Line 357, Address: 0x1024f7c, Func Offset: 0xbc
	// Line 359, Address: 0x1024f98, Func Offset: 0xd8
	// Line 360, Address: 0x1024fcc, Func Offset: 0x10c
	// Line 362, Address: 0x1025000, Func Offset: 0x140
	// Line 363, Address: 0x102500c, Func Offset: 0x14c
	// Line 364, Address: 0x102501c, Func Offset: 0x15c
	// Line 365, Address: 0x1025020, Func Offset: 0x160
	// Line 366, Address: 0x1025024, Func Offset: 0x164
	// Line 370, Address: 0x1025040, Func Offset: 0x180
	// Func End, Address: 0x102505c, Func Offset: 0x19c
}

// 
// Start address: 0x1025060
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 374, Address: 0x1025060, Func Offset: 0
	// Line 375, Address: 0x102506c, Func Offset: 0xc
	// Line 378, Address: 0x10250cc, Func Offset: 0x6c
	// Line 379, Address: 0x10250f0, Func Offset: 0x90
	// Line 380, Address: 0x1025100, Func Offset: 0xa0
	// Line 381, Address: 0x1025108, Func Offset: 0xa8
	// Line 382, Address: 0x102512c, Func Offset: 0xcc
	// Line 383, Address: 0x102513c, Func Offset: 0xdc
	// Line 384, Address: 0x1025144, Func Offset: 0xe4
	// Line 385, Address: 0x1025168, Func Offset: 0x108
	// Line 389, Address: 0x102517c, Func Offset: 0x11c
	// Func End, Address: 0x1025188, Func Offset: 0x128
}

// 
// Start address: 0x1025190
void flashout()
{
	// Line 393, Address: 0x1025190, Func Offset: 0
	// Line 394, Address: 0x1025198, Func Offset: 0x8
	// Line 396, Address: 0x10251a4, Func Offset: 0x14
	// Line 397, Address: 0x10251ac, Func Offset: 0x1c
	// Line 399, Address: 0x10251bc, Func Offset: 0x2c
	// Func End, Address: 0x10251c4, Func Offset: 0x34
}

// 
// Start address: 0x10251d0
int flashout_new()
{
	// Line 401, Address: 0x10251d0, Func Offset: 0
	// Line 403, Address: 0x10251d8, Func Offset: 0x8
	// Line 405, Address: 0x10251e4, Func Offset: 0x14
	// Line 408, Address: 0x10251ec, Func Offset: 0x1c
	// Line 409, Address: 0x102520c, Func Offset: 0x3c
	// Line 410, Address: 0x1025214, Func Offset: 0x44
	// Line 412, Address: 0x1025220, Func Offset: 0x50
	// Line 413, Address: 0x1025224, Func Offset: 0x54
	// Func End, Address: 0x1025234, Func Offset: 0x64
}

// 
// Start address: 0x1025240
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 416, Address: 0x1025240, Func Offset: 0
	// Line 420, Address: 0x1025250, Func Offset: 0x10
	// Line 422, Address: 0x1025284, Func Offset: 0x44
	// Line 423, Address: 0x1025290, Func Offset: 0x50
	// Line 424, Address: 0x102529c, Func Offset: 0x5c
	// Line 425, Address: 0x10252a0, Func Offset: 0x60
	// Line 426, Address: 0x10252bc, Func Offset: 0x7c
	// Line 428, Address: 0x10252f0, Func Offset: 0xb0
	// Line 429, Address: 0x10252fc, Func Offset: 0xbc
	// Line 430, Address: 0x1025308, Func Offset: 0xc8
	// Line 431, Address: 0x102530c, Func Offset: 0xcc
	// Line 434, Address: 0x1025328, Func Offset: 0xe8
	// Func End, Address: 0x1025340, Func Offset: 0x100
}

// 
// Start address: 0x1025340
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 437, Address: 0x1025340, Func Offset: 0
	// Line 438, Address: 0x1025348, Func Offset: 0x8
	// Line 439, Address: 0x1025360, Func Offset: 0x20
	// Line 440, Address: 0x1025374, Func Offset: 0x34
	// Line 441, Address: 0x102537c, Func Offset: 0x3c
	// Line 442, Address: 0x1025394, Func Offset: 0x54
	// Line 443, Address: 0x10253a4, Func Offset: 0x64
	// Line 444, Address: 0x10253ac, Func Offset: 0x6c
	// Line 445, Address: 0x10253c4, Func Offset: 0x84
	// Line 449, Address: 0x10253d4, Func Offset: 0x94
	// Func End, Address: 0x10253e0, Func Offset: 0xa0
}

// 
// Start address: 0x10253e0
void colorset(int ColorNo)
{
	// Line 452, Address: 0x10253e0, Func Offset: 0
	// Line 453, Address: 0x10253ec, Func Offset: 0xc
	// Line 454, Address: 0x10253fc, Func Offset: 0x1c
	// Func End, Address: 0x102540c, Func Offset: 0x2c
}

// 
// Start address: 0x1025410
void colorset2(int ColorNo)
{
	// Line 456, Address: 0x1025410, Func Offset: 0
	// Line 457, Address: 0x102541c, Func Offset: 0xc
	// Line 458, Address: 0x102542c, Func Offset: 0x1c
	// Func End, Address: 0x102543c, Func Offset: 0x2c
}

// 
// Start address: 0x1025440
void colorset3(int ColorNo)
{
	// Line 460, Address: 0x1025440, Func Offset: 0
	// Line 461, Address: 0x102544c, Func Offset: 0xc
	// Line 462, Address: 0x102545c, Func Offset: 0x1c
	// Func End, Address: 0x102546c, Func Offset: 0x2c
}

// 
// Start address: 0x1025470
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 468, Address: 0x1025470, Func Offset: 0
	// Line 473, Address: 0x1025490, Func Offset: 0x20
	// Line 475, Address: 0x10254f8, Func Offset: 0x88
	// Line 477, Address: 0x1025508, Func Offset: 0x98
	// Line 479, Address: 0x1025518, Func Offset: 0xa8
	// Line 481, Address: 0x1025528, Func Offset: 0xb8
	// Line 484, Address: 0x1025530, Func Offset: 0xc0
	// Line 485, Address: 0x1025548, Func Offset: 0xd8
	// Line 486, Address: 0x1025570, Func Offset: 0x100
	// Line 487, Address: 0x1025590, Func Offset: 0x120
	// Line 488, Address: 0x102559c, Func Offset: 0x12c
	// Line 489, Address: 0x10255cc, Func Offset: 0x15c
	// Line 491, Address: 0x10255dc, Func Offset: 0x16c
	// Func End, Address: 0x10255fc, Func Offset: 0x18c
}

// 
// Start address: 0x1025600
int FadeProc()
{
	// Line 496, Address: 0x1025600, Func Offset: 0
	// Line 497, Address: 0x1025608, Func Offset: 0x8
	// Line 499, Address: 0x102564c, Func Offset: 0x4c
	// Line 501, Address: 0x102565c, Func Offset: 0x5c
	// Line 503, Address: 0x102566c, Func Offset: 0x6c
	// Line 505, Address: 0x102567c, Func Offset: 0x7c
	// Line 507, Address: 0x102568c, Func Offset: 0x8c
	// Line 509, Address: 0x1025690, Func Offset: 0x90
	// Func End, Address: 0x10256a0, Func Offset: 0xa0
}

