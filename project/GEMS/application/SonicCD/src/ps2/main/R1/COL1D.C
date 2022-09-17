typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[16];
typedef tagPALETTEENTRY type_1[16];
typedef unsigned char type_2[18];
typedef tagPALETTEENTRY type_3[64];
typedef tagPALETTEENTRY type_4[4];
typedef tagPALETTEENTRY type_5[4][3];
typedef unsigned char type_6[7];
typedef unsigned char type_7[7];
typedef _anon0 type_8[6];
typedef tagPALETTEENTRY type_9[48];
typedef tagPALETTEENTRY type_10[5];
typedef tagPALETTEENTRY type_11[64];
typedef tagPALETTEENTRY type_12[4];
typedef tagPALETTEENTRY type_13[4][3];

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

tagPALETTEENTRY clst1_1d0[4][3];
tagPALETTEENTRY clst1_1d1[4][3];
tagPALETTEENTRY advacolor[64];
tagPALETTEENTRY advacolor2[64];
tagPALETTEENTRY gamecolor[16];
tagPALETTEENTRY zone1colord[48];
tagPALETTEENTRY zone1colboss1[16];
_anon0 colortbl[6];
unsigned char col1d0cnt[18];
tagPALETTEENTRY col1d0col[5];
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
// Start address: 0x10232a0
void clchgctr()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 104, Address: 0x10232a0, Func Offset: 0
	// Line 108, Address: 0x10232b4, Func Offset: 0x14
	// Line 109, Address: 0x10232c8, Func Offset: 0x28
	// Line 110, Address: 0x10232e0, Func Offset: 0x40
	// Line 111, Address: 0x10232ec, Func Offset: 0x4c
	// Line 112, Address: 0x1023304, Func Offset: 0x64
	// Line 113, Address: 0x102330c, Func Offset: 0x6c
	// Line 115, Address: 0x1023314, Func Offset: 0x74
	// Line 118, Address: 0x1023328, Func Offset: 0x88
	// Line 119, Address: 0x1023334, Func Offset: 0x94
	// Line 120, Address: 0x1023350, Func Offset: 0xb0
	// Line 121, Address: 0x102335c, Func Offset: 0xbc
	// Line 122, Address: 0x102338c, Func Offset: 0xec
	// Line 124, Address: 0x102339c, Func Offset: 0xfc
	// Line 125, Address: 0x10233b0, Func Offset: 0x110
	// Line 126, Address: 0x10233c8, Func Offset: 0x128
	// Line 127, Address: 0x10233d4, Func Offset: 0x134
	// Line 128, Address: 0x10233ec, Func Offset: 0x14c
	// Line 129, Address: 0x10233f4, Func Offset: 0x154
	// Line 131, Address: 0x10233fc, Func Offset: 0x15c
	// Line 134, Address: 0x1023410, Func Offset: 0x170
	// Line 135, Address: 0x102341c, Func Offset: 0x17c
	// Line 136, Address: 0x1023438, Func Offset: 0x198
	// Line 137, Address: 0x1023444, Func Offset: 0x1a4
	// Line 138, Address: 0x1023474, Func Offset: 0x1d4
	// Line 140, Address: 0x1023484, Func Offset: 0x1e4
	// Line 141, Address: 0x10234ac, Func Offset: 0x20c
	// Func End, Address: 0x10234c8, Func Offset: 0x228
}

// 
// Start address: 0x10234d0
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 154, Address: 0x10234d0, Func Offset: 0
	// Line 157, Address: 0x10234e8, Func Offset: 0x18
	// Line 158, Address: 0x10234fc, Func Offset: 0x2c
	// Line 160, Address: 0x102351c, Func Offset: 0x4c
	// Line 161, Address: 0x1023540, Func Offset: 0x70
	// Line 162, Address: 0x1023554, Func Offset: 0x84
	// Line 164, Address: 0x1023580, Func Offset: 0xb0
	// Line 167, Address: 0x1023588, Func Offset: 0xb8
	// Line 168, Address: 0x10235a4, Func Offset: 0xd4
	// Line 169, Address: 0x10235b4, Func Offset: 0xe4
	// Line 171, Address: 0x10235ec, Func Offset: 0x11c
	// Func End, Address: 0x10235fc, Func Offset: 0x12c
}

// 
// Start address: 0x1023600
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 174, Address: 0x1023600, Func Offset: 0
	// Line 178, Address: 0x102360c, Func Offset: 0xc
	// Line 180, Address: 0x1023640, Func Offset: 0x40
	// Line 181, Address: 0x102364c, Func Offset: 0x4c
	// Line 182, Address: 0x1023650, Func Offset: 0x50
	// Line 183, Address: 0x1023654, Func Offset: 0x54
	// Line 184, Address: 0x1023658, Func Offset: 0x58
	// Line 185, Address: 0x1023660, Func Offset: 0x60
	// Line 186, Address: 0x1023664, Func Offset: 0x64
	// Line 187, Address: 0x1023680, Func Offset: 0x80
	// Line 188, Address: 0x1023688, Func Offset: 0x88
	// Line 190, Address: 0x1023698, Func Offset: 0x98
	// Func End, Address: 0x10236ac, Func Offset: 0xac
}

// 
// Start address: 0x10236b0
int fadein0_new()
{
	// Line 194, Address: 0x10236b0, Func Offset: 0
	// Line 196, Address: 0x10236b8, Func Offset: 0x8
	// Line 198, Address: 0x10236c4, Func Offset: 0x14
	// Line 201, Address: 0x10236cc, Func Offset: 0x1c
	// Line 202, Address: 0x10236ec, Func Offset: 0x3c
	// Line 203, Address: 0x10236f4, Func Offset: 0x44
	// Line 205, Address: 0x1023700, Func Offset: 0x50
	// Line 206, Address: 0x1023704, Func Offset: 0x54
	// Func End, Address: 0x1023714, Func Offset: 0x64
}

// 
// Start address: 0x1023720
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 210, Address: 0x1023720, Func Offset: 0
	// Line 214, Address: 0x1023734, Func Offset: 0x14
	// Line 215, Address: 0x1023768, Func Offset: 0x48
	// Line 217, Address: 0x102379c, Func Offset: 0x7c
	// Line 218, Address: 0x10237a8, Func Offset: 0x88
	// Line 219, Address: 0x10237b8, Func Offset: 0x98
	// Line 220, Address: 0x10237bc, Func Offset: 0x9c
	// Line 221, Address: 0x10237c0, Func Offset: 0xa0
	// Line 222, Address: 0x10237dc, Func Offset: 0xbc
	// Line 224, Address: 0x10237f8, Func Offset: 0xd8
	// Line 225, Address: 0x102382c, Func Offset: 0x10c
	// Line 227, Address: 0x1023860, Func Offset: 0x140
	// Line 228, Address: 0x102386c, Func Offset: 0x14c
	// Line 229, Address: 0x102387c, Func Offset: 0x15c
	// Line 230, Address: 0x1023880, Func Offset: 0x160
	// Line 231, Address: 0x1023884, Func Offset: 0x164
	// Line 235, Address: 0x10238a0, Func Offset: 0x180
	// Func End, Address: 0x10238bc, Func Offset: 0x19c
}

// 
// Start address: 0x10238c0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 239, Address: 0x10238c0, Func Offset: 0
	// Line 240, Address: 0x10238cc, Func Offset: 0xc
	// Line 243, Address: 0x102392c, Func Offset: 0x6c
	// Line 244, Address: 0x1023950, Func Offset: 0x90
	// Line 245, Address: 0x1023960, Func Offset: 0xa0
	// Line 246, Address: 0x1023968, Func Offset: 0xa8
	// Line 247, Address: 0x102398c, Func Offset: 0xcc
	// Line 248, Address: 0x102399c, Func Offset: 0xdc
	// Line 249, Address: 0x10239a4, Func Offset: 0xe4
	// Line 250, Address: 0x10239c8, Func Offset: 0x108
	// Line 254, Address: 0x10239dc, Func Offset: 0x11c
	// Func End, Address: 0x10239e8, Func Offset: 0x128
}

// 
// Start address: 0x10239f0
void fadeout()
{
	// Line 258, Address: 0x10239f0, Func Offset: 0
	// Line 259, Address: 0x10239f8, Func Offset: 0x8
	// Line 261, Address: 0x1023a04, Func Offset: 0x14
	// Line 262, Address: 0x1023a0c, Func Offset: 0x1c
	// Line 264, Address: 0x1023a1c, Func Offset: 0x2c
	// Func End, Address: 0x1023a24, Func Offset: 0x34
}

// 
// Start address: 0x1023a30
int fadeout_new()
{
	// Line 268, Address: 0x1023a30, Func Offset: 0
	// Line 270, Address: 0x1023a38, Func Offset: 0x8
	// Line 272, Address: 0x1023a44, Func Offset: 0x14
	// Line 275, Address: 0x1023a4c, Func Offset: 0x1c
	// Line 276, Address: 0x1023a6c, Func Offset: 0x3c
	// Line 277, Address: 0x1023a74, Func Offset: 0x44
	// Line 279, Address: 0x1023a80, Func Offset: 0x50
	// Line 280, Address: 0x1023a84, Func Offset: 0x54
	// Func End, Address: 0x1023a94, Func Offset: 0x64
}

// 
// Start address: 0x1023aa0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 283, Address: 0x1023aa0, Func Offset: 0
	// Line 287, Address: 0x1023ab0, Func Offset: 0x10
	// Line 289, Address: 0x1023ae4, Func Offset: 0x44
	// Line 290, Address: 0x1023af0, Func Offset: 0x50
	// Line 291, Address: 0x1023afc, Func Offset: 0x5c
	// Line 292, Address: 0x1023b00, Func Offset: 0x60
	// Line 293, Address: 0x1023b1c, Func Offset: 0x7c
	// Line 295, Address: 0x1023b50, Func Offset: 0xb0
	// Line 296, Address: 0x1023b5c, Func Offset: 0xbc
	// Line 297, Address: 0x1023b68, Func Offset: 0xc8
	// Line 298, Address: 0x1023b6c, Func Offset: 0xcc
	// Line 301, Address: 0x1023b88, Func Offset: 0xe8
	// Func End, Address: 0x1023ba0, Func Offset: 0x100
}

// 
// Start address: 0x1023ba0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 304, Address: 0x1023ba0, Func Offset: 0
	// Line 305, Address: 0x1023ba8, Func Offset: 0x8
	// Line 306, Address: 0x1023bb8, Func Offset: 0x18
	// Line 307, Address: 0x1023bcc, Func Offset: 0x2c
	// Line 308, Address: 0x1023bd4, Func Offset: 0x34
	// Line 309, Address: 0x1023be4, Func Offset: 0x44
	// Line 310, Address: 0x1023bf4, Func Offset: 0x54
	// Line 311, Address: 0x1023bfc, Func Offset: 0x5c
	// Line 312, Address: 0x1023c0c, Func Offset: 0x6c
	// Line 315, Address: 0x1023c1c, Func Offset: 0x7c
	// Func End, Address: 0x1023c28, Func Offset: 0x88
}

// 
// Start address: 0x1023c30
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 320, Address: 0x1023c30, Func Offset: 0
	// Line 324, Address: 0x1023c3c, Func Offset: 0xc
	// Line 325, Address: 0x1023c44, Func Offset: 0x14
	// Line 327, Address: 0x1023c50, Func Offset: 0x20
	// Line 329, Address: 0x1023c84, Func Offset: 0x54
	// Line 330, Address: 0x1023c90, Func Offset: 0x60
	// Line 331, Address: 0x1023c98, Func Offset: 0x68
	// Line 332, Address: 0x1023ca0, Func Offset: 0x70
	// Line 333, Address: 0x1023ca8, Func Offset: 0x78
	// Line 334, Address: 0x1023cb0, Func Offset: 0x80
	// Line 335, Address: 0x1023cb4, Func Offset: 0x84
	// Line 336, Address: 0x1023cd0, Func Offset: 0xa0
	// Line 337, Address: 0x1023cd8, Func Offset: 0xa8
	// Line 339, Address: 0x1023ce8, Func Offset: 0xb8
	// Func End, Address: 0x1023cfc, Func Offset: 0xcc
}

// 
// Start address: 0x1023d00
int flashin_new()
{
	// Line 341, Address: 0x1023d00, Func Offset: 0
	// Line 343, Address: 0x1023d08, Func Offset: 0x8
	// Line 345, Address: 0x1023d14, Func Offset: 0x14
	// Line 348, Address: 0x1023d1c, Func Offset: 0x1c
	// Line 349, Address: 0x1023d3c, Func Offset: 0x3c
	// Line 350, Address: 0x1023d44, Func Offset: 0x44
	// Line 352, Address: 0x1023d50, Func Offset: 0x50
	// Line 353, Address: 0x1023d54, Func Offset: 0x54
	// Func End, Address: 0x1023d64, Func Offset: 0x64
}

// 
// Start address: 0x1023d70
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 355, Address: 0x1023d70, Func Offset: 0
	// Line 359, Address: 0x1023d84, Func Offset: 0x14
	// Line 360, Address: 0x1023db8, Func Offset: 0x48
	// Line 362, Address: 0x1023dec, Func Offset: 0x7c
	// Line 363, Address: 0x1023df8, Func Offset: 0x88
	// Line 364, Address: 0x1023e08, Func Offset: 0x98
	// Line 365, Address: 0x1023e0c, Func Offset: 0x9c
	// Line 366, Address: 0x1023e10, Func Offset: 0xa0
	// Line 367, Address: 0x1023e2c, Func Offset: 0xbc
	// Line 369, Address: 0x1023e48, Func Offset: 0xd8
	// Line 370, Address: 0x1023e7c, Func Offset: 0x10c
	// Line 372, Address: 0x1023eb0, Func Offset: 0x140
	// Line 373, Address: 0x1023ebc, Func Offset: 0x14c
	// Line 374, Address: 0x1023ecc, Func Offset: 0x15c
	// Line 375, Address: 0x1023ed0, Func Offset: 0x160
	// Line 376, Address: 0x1023ed4, Func Offset: 0x164
	// Line 380, Address: 0x1023ef0, Func Offset: 0x180
	// Func End, Address: 0x1023f0c, Func Offset: 0x19c
}

// 
// Start address: 0x1023f10
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 384, Address: 0x1023f10, Func Offset: 0
	// Line 385, Address: 0x1023f1c, Func Offset: 0xc
	// Line 388, Address: 0x1023f7c, Func Offset: 0x6c
	// Line 389, Address: 0x1023fa0, Func Offset: 0x90
	// Line 390, Address: 0x1023fb0, Func Offset: 0xa0
	// Line 391, Address: 0x1023fb8, Func Offset: 0xa8
	// Line 392, Address: 0x1023fdc, Func Offset: 0xcc
	// Line 393, Address: 0x1023fec, Func Offset: 0xdc
	// Line 394, Address: 0x1023ff4, Func Offset: 0xe4
	// Line 395, Address: 0x1024018, Func Offset: 0x108
	// Line 399, Address: 0x102402c, Func Offset: 0x11c
	// Func End, Address: 0x1024038, Func Offset: 0x128
}

// 
// Start address: 0x1024040
void flashout()
{
	// Line 403, Address: 0x1024040, Func Offset: 0
	// Line 404, Address: 0x1024048, Func Offset: 0x8
	// Line 406, Address: 0x1024054, Func Offset: 0x14
	// Line 407, Address: 0x102405c, Func Offset: 0x1c
	// Line 409, Address: 0x102406c, Func Offset: 0x2c
	// Func End, Address: 0x1024074, Func Offset: 0x34
}

// 
// Start address: 0x1024080
int flashout_new()
{
	// Line 411, Address: 0x1024080, Func Offset: 0
	// Line 413, Address: 0x1024088, Func Offset: 0x8
	// Line 415, Address: 0x1024094, Func Offset: 0x14
	// Line 418, Address: 0x102409c, Func Offset: 0x1c
	// Line 419, Address: 0x10240bc, Func Offset: 0x3c
	// Line 420, Address: 0x10240c4, Func Offset: 0x44
	// Line 422, Address: 0x10240d0, Func Offset: 0x50
	// Line 423, Address: 0x10240d4, Func Offset: 0x54
	// Func End, Address: 0x10240e4, Func Offset: 0x64
}

// 
// Start address: 0x10240f0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 426, Address: 0x10240f0, Func Offset: 0
	// Line 430, Address: 0x1024100, Func Offset: 0x10
	// Line 432, Address: 0x1024134, Func Offset: 0x44
	// Line 433, Address: 0x1024140, Func Offset: 0x50
	// Line 434, Address: 0x102414c, Func Offset: 0x5c
	// Line 435, Address: 0x1024150, Func Offset: 0x60
	// Line 436, Address: 0x102416c, Func Offset: 0x7c
	// Line 438, Address: 0x10241a0, Func Offset: 0xb0
	// Line 439, Address: 0x10241ac, Func Offset: 0xbc
	// Line 440, Address: 0x10241b8, Func Offset: 0xc8
	// Line 441, Address: 0x10241bc, Func Offset: 0xcc
	// Line 444, Address: 0x10241d8, Func Offset: 0xe8
	// Func End, Address: 0x10241f0, Func Offset: 0x100
}

// 
// Start address: 0x10241f0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 447, Address: 0x10241f0, Func Offset: 0
	// Line 448, Address: 0x10241f8, Func Offset: 0x8
	// Line 449, Address: 0x1024210, Func Offset: 0x20
	// Line 450, Address: 0x1024224, Func Offset: 0x34
	// Line 451, Address: 0x102422c, Func Offset: 0x3c
	// Line 452, Address: 0x1024244, Func Offset: 0x54
	// Line 453, Address: 0x1024254, Func Offset: 0x64
	// Line 454, Address: 0x102425c, Func Offset: 0x6c
	// Line 455, Address: 0x1024274, Func Offset: 0x84
	// Line 459, Address: 0x1024284, Func Offset: 0x94
	// Func End, Address: 0x1024290, Func Offset: 0xa0
}

// 
// Start address: 0x1024290
void colorset(int ColorNo)
{
	// Line 462, Address: 0x1024290, Func Offset: 0
	// Line 463, Address: 0x102429c, Func Offset: 0xc
	// Line 464, Address: 0x10242ac, Func Offset: 0x1c
	// Func End, Address: 0x10242bc, Func Offset: 0x2c
}

// 
// Start address: 0x10242c0
void colorset2(int ColorNo)
{
	// Line 466, Address: 0x10242c0, Func Offset: 0
	// Line 467, Address: 0x10242cc, Func Offset: 0xc
	// Line 468, Address: 0x10242dc, Func Offset: 0x1c
	// Func End, Address: 0x10242ec, Func Offset: 0x2c
}

// 
// Start address: 0x10242f0
void colorset3(int ColorNo)
{
	// Line 470, Address: 0x10242f0, Func Offset: 0
	// Line 471, Address: 0x10242fc, Func Offset: 0xc
	// Line 472, Address: 0x102430c, Func Offset: 0x1c
	// Func End, Address: 0x102431c, Func Offset: 0x2c
}

// 
// Start address: 0x1024320
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 478, Address: 0x1024320, Func Offset: 0
	// Line 483, Address: 0x1024340, Func Offset: 0x20
	// Line 485, Address: 0x10243a8, Func Offset: 0x88
	// Line 487, Address: 0x10243b8, Func Offset: 0x98
	// Line 489, Address: 0x10243c8, Func Offset: 0xa8
	// Line 491, Address: 0x10243d8, Func Offset: 0xb8
	// Line 494, Address: 0x10243e0, Func Offset: 0xc0
	// Line 495, Address: 0x10243f8, Func Offset: 0xd8
	// Line 496, Address: 0x1024420, Func Offset: 0x100
	// Line 497, Address: 0x1024440, Func Offset: 0x120
	// Line 498, Address: 0x102444c, Func Offset: 0x12c
	// Line 499, Address: 0x102447c, Func Offset: 0x15c
	// Line 501, Address: 0x102448c, Func Offset: 0x16c
	// Func End, Address: 0x10244ac, Func Offset: 0x18c
}

// 
// Start address: 0x10244b0
int FadeProc()
{
	// Line 506, Address: 0x10244b0, Func Offset: 0
	// Line 507, Address: 0x10244b8, Func Offset: 0x8
	// Line 509, Address: 0x10244fc, Func Offset: 0x4c
	// Line 511, Address: 0x102450c, Func Offset: 0x5c
	// Line 513, Address: 0x102451c, Func Offset: 0x6c
	// Line 515, Address: 0x102452c, Func Offset: 0x7c
	// Line 517, Address: 0x102453c, Func Offset: 0x8c
	// Line 519, Address: 0x1024540, Func Offset: 0x90
	// Func End, Address: 0x1024550, Func Offset: 0xa0
}

