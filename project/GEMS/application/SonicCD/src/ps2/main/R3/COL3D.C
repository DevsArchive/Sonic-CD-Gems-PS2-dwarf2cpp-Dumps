typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[64];
typedef unsigned char type_1[34];
typedef unsigned char type_2[36];
typedef unsigned char type_3[8];
typedef unsigned char type_4[7];
typedef unsigned char type_5[7];
typedef tagPALETTEENTRY type_6[16];
typedef tagPALETTEENTRY type_7[48];
typedef tagPALETTEENTRY type_8[64];
typedef tagPALETTEENTRY type_9[9];
typedef tagPALETTEENTRY type_10[9];
typedef tagPALETTEENTRY type_11[3];
typedef _anon0 type_12[7];
typedef tagPALETTEENTRY type_13[16];
typedef tagPALETTEENTRY type_14[16];

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

unsigned char col3d0cnt[8];
tagPALETTEENTRY col3d0col[3];
unsigned char col3d1cnt[36];
tagPALETTEENTRY col3d1col[9];
unsigned char col3d2cnt[34];
tagPALETTEENTRY col3d2col[9];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone3colord[48];
tagPALETTEENTRY zone3colboss0[16];
tagPALETTEENTRY zone3colboss1[16];
_anon0 colortbl[7];
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
void colchg3d();
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
// Start address: 0x1024aa0
void clchgctr()
{
	// Line 113, Address: 0x1024aa0, Func Offset: 0
	// Line 114, Address: 0x1024aa8, Func Offset: 0x8
	// Line 115, Address: 0x1024ab0, Func Offset: 0x10
	// Func End, Address: 0x1024ac0, Func Offset: 0x20
}

// 
// Start address: 0x1024ac0
void colchg3d()
{
	// Line 117, Address: 0x1024ac0, Func Offset: 0
	// Line 118, Address: 0x1024ac8, Func Offset: 0x8
	// Line 119, Address: 0x1024af0, Func Offset: 0x30
	// Line 120, Address: 0x1024b18, Func Offset: 0x58
	// Line 121, Address: 0x1024b40, Func Offset: 0x80
	// Func End, Address: 0x1024b50, Func Offset: 0x90
}

// 
// Start address: 0x1024b50
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 130, Address: 0x1024b50, Func Offset: 0
	// Line 133, Address: 0x1024b68, Func Offset: 0x18
	// Line 134, Address: 0x1024b7c, Func Offset: 0x2c
	// Line 136, Address: 0x1024b9c, Func Offset: 0x4c
	// Line 137, Address: 0x1024bc0, Func Offset: 0x70
	// Line 138, Address: 0x1024bd4, Func Offset: 0x84
	// Line 140, Address: 0x1024c00, Func Offset: 0xb0
	// Line 143, Address: 0x1024c08, Func Offset: 0xb8
	// Line 144, Address: 0x1024c24, Func Offset: 0xd4
	// Line 145, Address: 0x1024c34, Func Offset: 0xe4
	// Line 152, Address: 0x1024c6c, Func Offset: 0x11c
	// Func End, Address: 0x1024c7c, Func Offset: 0x12c
}

// 
// Start address: 0x1024c80
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 155, Address: 0x1024c80, Func Offset: 0
	// Line 159, Address: 0x1024c8c, Func Offset: 0xc
	// Line 161, Address: 0x1024cc0, Func Offset: 0x40
	// Line 162, Address: 0x1024ccc, Func Offset: 0x4c
	// Line 163, Address: 0x1024cd0, Func Offset: 0x50
	// Line 164, Address: 0x1024cd4, Func Offset: 0x54
	// Line 165, Address: 0x1024cd8, Func Offset: 0x58
	// Line 166, Address: 0x1024ce0, Func Offset: 0x60
	// Line 167, Address: 0x1024ce4, Func Offset: 0x64
	// Line 168, Address: 0x1024d00, Func Offset: 0x80
	// Line 169, Address: 0x1024d08, Func Offset: 0x88
	// Line 171, Address: 0x1024d18, Func Offset: 0x98
	// Func End, Address: 0x1024d2c, Func Offset: 0xac
}

// 
// Start address: 0x1024d30
int fadein0_new()
{
	// Line 175, Address: 0x1024d30, Func Offset: 0
	// Line 177, Address: 0x1024d38, Func Offset: 0x8
	// Line 179, Address: 0x1024d44, Func Offset: 0x14
	// Line 182, Address: 0x1024d4c, Func Offset: 0x1c
	// Line 183, Address: 0x1024d6c, Func Offset: 0x3c
	// Line 184, Address: 0x1024d74, Func Offset: 0x44
	// Line 186, Address: 0x1024d80, Func Offset: 0x50
	// Line 187, Address: 0x1024d84, Func Offset: 0x54
	// Func End, Address: 0x1024d94, Func Offset: 0x64
}

// 
// Start address: 0x1024da0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 191, Address: 0x1024da0, Func Offset: 0
	// Line 195, Address: 0x1024db4, Func Offset: 0x14
	// Line 196, Address: 0x1024de8, Func Offset: 0x48
	// Line 198, Address: 0x1024e1c, Func Offset: 0x7c
	// Line 199, Address: 0x1024e28, Func Offset: 0x88
	// Line 200, Address: 0x1024e38, Func Offset: 0x98
	// Line 201, Address: 0x1024e3c, Func Offset: 0x9c
	// Line 202, Address: 0x1024e40, Func Offset: 0xa0
	// Line 203, Address: 0x1024e5c, Func Offset: 0xbc
	// Line 205, Address: 0x1024e78, Func Offset: 0xd8
	// Line 206, Address: 0x1024eac, Func Offset: 0x10c
	// Line 208, Address: 0x1024ee0, Func Offset: 0x140
	// Line 209, Address: 0x1024eec, Func Offset: 0x14c
	// Line 210, Address: 0x1024efc, Func Offset: 0x15c
	// Line 211, Address: 0x1024f00, Func Offset: 0x160
	// Line 212, Address: 0x1024f04, Func Offset: 0x164
	// Line 216, Address: 0x1024f20, Func Offset: 0x180
	// Func End, Address: 0x1024f3c, Func Offset: 0x19c
}

// 
// Start address: 0x1024f40
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 220, Address: 0x1024f40, Func Offset: 0
	// Line 221, Address: 0x1024f4c, Func Offset: 0xc
	// Line 224, Address: 0x1024fac, Func Offset: 0x6c
	// Line 225, Address: 0x1024fd0, Func Offset: 0x90
	// Line 226, Address: 0x1024fe0, Func Offset: 0xa0
	// Line 227, Address: 0x1024fe8, Func Offset: 0xa8
	// Line 228, Address: 0x102500c, Func Offset: 0xcc
	// Line 229, Address: 0x102501c, Func Offset: 0xdc
	// Line 230, Address: 0x1025024, Func Offset: 0xe4
	// Line 231, Address: 0x1025048, Func Offset: 0x108
	// Line 235, Address: 0x102505c, Func Offset: 0x11c
	// Func End, Address: 0x1025068, Func Offset: 0x128
}

// 
// Start address: 0x1025070
void fadeout()
{
	// Line 239, Address: 0x1025070, Func Offset: 0
	// Line 240, Address: 0x1025078, Func Offset: 0x8
	// Line 242, Address: 0x1025084, Func Offset: 0x14
	// Line 243, Address: 0x102508c, Func Offset: 0x1c
	// Line 245, Address: 0x102509c, Func Offset: 0x2c
	// Func End, Address: 0x10250a4, Func Offset: 0x34
}

// 
// Start address: 0x10250b0
int fadeout_new()
{
	// Line 249, Address: 0x10250b0, Func Offset: 0
	// Line 251, Address: 0x10250b8, Func Offset: 0x8
	// Line 253, Address: 0x10250c4, Func Offset: 0x14
	// Line 256, Address: 0x10250cc, Func Offset: 0x1c
	// Line 257, Address: 0x10250ec, Func Offset: 0x3c
	// Line 258, Address: 0x10250f4, Func Offset: 0x44
	// Line 260, Address: 0x1025100, Func Offset: 0x50
	// Line 261, Address: 0x1025104, Func Offset: 0x54
	// Func End, Address: 0x1025114, Func Offset: 0x64
}

// 
// Start address: 0x1025120
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 264, Address: 0x1025120, Func Offset: 0
	// Line 268, Address: 0x1025130, Func Offset: 0x10
	// Line 270, Address: 0x1025164, Func Offset: 0x44
	// Line 271, Address: 0x1025170, Func Offset: 0x50
	// Line 272, Address: 0x102517c, Func Offset: 0x5c
	// Line 273, Address: 0x1025180, Func Offset: 0x60
	// Line 274, Address: 0x102519c, Func Offset: 0x7c
	// Line 276, Address: 0x10251d0, Func Offset: 0xb0
	// Line 277, Address: 0x10251dc, Func Offset: 0xbc
	// Line 278, Address: 0x10251e8, Func Offset: 0xc8
	// Line 279, Address: 0x10251ec, Func Offset: 0xcc
	// Line 282, Address: 0x1025208, Func Offset: 0xe8
	// Func End, Address: 0x1025220, Func Offset: 0x100
}

// 
// Start address: 0x1025220
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 285, Address: 0x1025220, Func Offset: 0
	// Line 286, Address: 0x1025228, Func Offset: 0x8
	// Line 287, Address: 0x1025238, Func Offset: 0x18
	// Line 288, Address: 0x102524c, Func Offset: 0x2c
	// Line 289, Address: 0x1025254, Func Offset: 0x34
	// Line 290, Address: 0x1025264, Func Offset: 0x44
	// Line 291, Address: 0x1025274, Func Offset: 0x54
	// Line 292, Address: 0x102527c, Func Offset: 0x5c
	// Line 293, Address: 0x102528c, Func Offset: 0x6c
	// Line 296, Address: 0x102529c, Func Offset: 0x7c
	// Func End, Address: 0x10252a8, Func Offset: 0x88
}

// 
// Start address: 0x10252b0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 301, Address: 0x10252b0, Func Offset: 0
	// Line 305, Address: 0x10252bc, Func Offset: 0xc
	// Line 306, Address: 0x10252c4, Func Offset: 0x14
	// Line 308, Address: 0x10252d0, Func Offset: 0x20
	// Line 310, Address: 0x1025304, Func Offset: 0x54
	// Line 311, Address: 0x1025310, Func Offset: 0x60
	// Line 312, Address: 0x1025318, Func Offset: 0x68
	// Line 313, Address: 0x1025320, Func Offset: 0x70
	// Line 314, Address: 0x1025328, Func Offset: 0x78
	// Line 315, Address: 0x1025330, Func Offset: 0x80
	// Line 316, Address: 0x1025334, Func Offset: 0x84
	// Line 317, Address: 0x1025350, Func Offset: 0xa0
	// Line 318, Address: 0x1025358, Func Offset: 0xa8
	// Line 320, Address: 0x1025368, Func Offset: 0xb8
	// Func End, Address: 0x102537c, Func Offset: 0xcc
}

// 
// Start address: 0x1025380
int flashin_new()
{
	// Line 322, Address: 0x1025380, Func Offset: 0
	// Line 324, Address: 0x1025388, Func Offset: 0x8
	// Line 326, Address: 0x1025394, Func Offset: 0x14
	// Line 329, Address: 0x102539c, Func Offset: 0x1c
	// Line 330, Address: 0x10253bc, Func Offset: 0x3c
	// Line 331, Address: 0x10253c4, Func Offset: 0x44
	// Line 333, Address: 0x10253d0, Func Offset: 0x50
	// Line 334, Address: 0x10253d4, Func Offset: 0x54
	// Func End, Address: 0x10253e4, Func Offset: 0x64
}

// 
// Start address: 0x10253f0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 336, Address: 0x10253f0, Func Offset: 0
	// Line 340, Address: 0x1025404, Func Offset: 0x14
	// Line 341, Address: 0x1025438, Func Offset: 0x48
	// Line 343, Address: 0x102546c, Func Offset: 0x7c
	// Line 344, Address: 0x1025478, Func Offset: 0x88
	// Line 345, Address: 0x1025488, Func Offset: 0x98
	// Line 346, Address: 0x102548c, Func Offset: 0x9c
	// Line 347, Address: 0x1025490, Func Offset: 0xa0
	// Line 348, Address: 0x10254ac, Func Offset: 0xbc
	// Line 350, Address: 0x10254c8, Func Offset: 0xd8
	// Line 351, Address: 0x10254fc, Func Offset: 0x10c
	// Line 353, Address: 0x1025530, Func Offset: 0x140
	// Line 354, Address: 0x102553c, Func Offset: 0x14c
	// Line 355, Address: 0x102554c, Func Offset: 0x15c
	// Line 356, Address: 0x1025550, Func Offset: 0x160
	// Line 357, Address: 0x1025554, Func Offset: 0x164
	// Line 361, Address: 0x1025570, Func Offset: 0x180
	// Func End, Address: 0x102558c, Func Offset: 0x19c
}

// 
// Start address: 0x1025590
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 365, Address: 0x1025590, Func Offset: 0
	// Line 366, Address: 0x102559c, Func Offset: 0xc
	// Line 369, Address: 0x10255fc, Func Offset: 0x6c
	// Line 370, Address: 0x1025620, Func Offset: 0x90
	// Line 371, Address: 0x1025630, Func Offset: 0xa0
	// Line 372, Address: 0x1025638, Func Offset: 0xa8
	// Line 373, Address: 0x102565c, Func Offset: 0xcc
	// Line 374, Address: 0x102566c, Func Offset: 0xdc
	// Line 375, Address: 0x1025674, Func Offset: 0xe4
	// Line 376, Address: 0x1025698, Func Offset: 0x108
	// Line 380, Address: 0x10256ac, Func Offset: 0x11c
	// Func End, Address: 0x10256b8, Func Offset: 0x128
}

// 
// Start address: 0x10256c0
void flashout()
{
	// Line 384, Address: 0x10256c0, Func Offset: 0
	// Line 385, Address: 0x10256c8, Func Offset: 0x8
	// Line 387, Address: 0x10256d4, Func Offset: 0x14
	// Line 388, Address: 0x10256dc, Func Offset: 0x1c
	// Line 390, Address: 0x10256ec, Func Offset: 0x2c
	// Func End, Address: 0x10256f4, Func Offset: 0x34
}

// 
// Start address: 0x1025700
int flashout_new()
{
	// Line 392, Address: 0x1025700, Func Offset: 0
	// Line 394, Address: 0x1025708, Func Offset: 0x8
	// Line 396, Address: 0x1025714, Func Offset: 0x14
	// Line 399, Address: 0x102571c, Func Offset: 0x1c
	// Line 400, Address: 0x102573c, Func Offset: 0x3c
	// Line 401, Address: 0x1025744, Func Offset: 0x44
	// Line 403, Address: 0x1025750, Func Offset: 0x50
	// Line 404, Address: 0x1025754, Func Offset: 0x54
	// Func End, Address: 0x1025764, Func Offset: 0x64
}

// 
// Start address: 0x1025770
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 407, Address: 0x1025770, Func Offset: 0
	// Line 411, Address: 0x1025780, Func Offset: 0x10
	// Line 413, Address: 0x10257b4, Func Offset: 0x44
	// Line 414, Address: 0x10257c0, Func Offset: 0x50
	// Line 415, Address: 0x10257cc, Func Offset: 0x5c
	// Line 416, Address: 0x10257d0, Func Offset: 0x60
	// Line 417, Address: 0x10257ec, Func Offset: 0x7c
	// Line 419, Address: 0x1025820, Func Offset: 0xb0
	// Line 420, Address: 0x102582c, Func Offset: 0xbc
	// Line 421, Address: 0x1025838, Func Offset: 0xc8
	// Line 422, Address: 0x102583c, Func Offset: 0xcc
	// Line 425, Address: 0x1025858, Func Offset: 0xe8
	// Func End, Address: 0x1025870, Func Offset: 0x100
}

// 
// Start address: 0x1025870
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 428, Address: 0x1025870, Func Offset: 0
	// Line 429, Address: 0x1025878, Func Offset: 0x8
	// Line 430, Address: 0x1025890, Func Offset: 0x20
	// Line 431, Address: 0x10258a4, Func Offset: 0x34
	// Line 432, Address: 0x10258ac, Func Offset: 0x3c
	// Line 433, Address: 0x10258c4, Func Offset: 0x54
	// Line 434, Address: 0x10258d4, Func Offset: 0x64
	// Line 435, Address: 0x10258dc, Func Offset: 0x6c
	// Line 436, Address: 0x10258f4, Func Offset: 0x84
	// Line 440, Address: 0x1025904, Func Offset: 0x94
	// Func End, Address: 0x1025910, Func Offset: 0xa0
}

// 
// Start address: 0x1025910
void colorset(int ColorNo)
{
	// Line 443, Address: 0x1025910, Func Offset: 0
	// Line 444, Address: 0x102591c, Func Offset: 0xc
	// Line 445, Address: 0x102592c, Func Offset: 0x1c
	// Func End, Address: 0x102593c, Func Offset: 0x2c
}

// 
// Start address: 0x1025940
void colorset2(int ColorNo)
{
	// Line 447, Address: 0x1025940, Func Offset: 0
	// Line 448, Address: 0x102594c, Func Offset: 0xc
	// Line 449, Address: 0x102595c, Func Offset: 0x1c
	// Func End, Address: 0x102596c, Func Offset: 0x2c
}

// 
// Start address: 0x1025970
void colorset3(int ColorNo)
{
	// Line 451, Address: 0x1025970, Func Offset: 0
	// Line 452, Address: 0x102597c, Func Offset: 0xc
	// Line 453, Address: 0x102598c, Func Offset: 0x1c
	// Func End, Address: 0x102599c, Func Offset: 0x2c
}

// 
// Start address: 0x10259a0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 459, Address: 0x10259a0, Func Offset: 0
	// Line 464, Address: 0x10259c0, Func Offset: 0x20
	// Line 466, Address: 0x1025a28, Func Offset: 0x88
	// Line 468, Address: 0x1025a38, Func Offset: 0x98
	// Line 470, Address: 0x1025a48, Func Offset: 0xa8
	// Line 472, Address: 0x1025a58, Func Offset: 0xb8
	// Line 475, Address: 0x1025a60, Func Offset: 0xc0
	// Line 476, Address: 0x1025a78, Func Offset: 0xd8
	// Line 477, Address: 0x1025aa0, Func Offset: 0x100
	// Line 478, Address: 0x1025ac0, Func Offset: 0x120
	// Line 479, Address: 0x1025acc, Func Offset: 0x12c
	// Line 480, Address: 0x1025afc, Func Offset: 0x15c
	// Line 482, Address: 0x1025b0c, Func Offset: 0x16c
	// Func End, Address: 0x1025b2c, Func Offset: 0x18c
}

// 
// Start address: 0x1025b30
int FadeProc()
{
	// Line 487, Address: 0x1025b30, Func Offset: 0
	// Line 488, Address: 0x1025b38, Func Offset: 0x8
	// Line 490, Address: 0x1025b7c, Func Offset: 0x4c
	// Line 492, Address: 0x1025b8c, Func Offset: 0x5c
	// Line 494, Address: 0x1025b9c, Func Offset: 0x6c
	// Line 496, Address: 0x1025bac, Func Offset: 0x7c
	// Line 498, Address: 0x1025bbc, Func Offset: 0x8c
	// Line 500, Address: 0x1025bc0, Func Offset: 0x90
	// Func End, Address: 0x1025bd0, Func Offset: 0xa0
}

