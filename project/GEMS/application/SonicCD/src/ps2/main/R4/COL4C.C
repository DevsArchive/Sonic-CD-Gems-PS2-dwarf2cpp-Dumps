typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;


typedef tagPALETTEENTRY type_0[4];
typedef tagPALETTEENTRY type_1[16];
typedef unsigned char type_2[10];
typedef tagPALETTEENTRY type_3[16];
typedef unsigned char type_4[10];
typedef tagPALETTEENTRY type_5[64];
typedef unsigned char type_6[7];
typedef unsigned char type_7[7];
typedef _anon0 type_8[6];
typedef unsigned char type_9[10];
typedef tagPALETTEENTRY type_10[48];
typedef unsigned char type_11[10];
typedef tagPALETTEENTRY type_12[64];

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
unsigned char col4c0cnt[10];
unsigned char col4c1cnt[10];
unsigned char col4c2cnt[10];
unsigned char col4c3cnt[10];
tagPALETTEENTRY col4c0col[4];
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
// Start address: 0x101f6e0
void clchgctr()
{
	// Line 130, Address: 0x101f6e0, Func Offset: 0
	// Line 131, Address: 0x101f6e8, Func Offset: 0x8
	// Line 133, Address: 0x101f6f8, Func Offset: 0x18
	// Line 134, Address: 0x101f720, Func Offset: 0x40
	// Line 135, Address: 0x101f748, Func Offset: 0x68
	// Line 137, Address: 0x101f770, Func Offset: 0x90
	// Func End, Address: 0x101f780, Func Offset: 0xa0
}

// 
// Start address: 0x101f780
void clchg_sub0(unsigned char* pChgTime, unsigned char* pChgCnt, unsigned char* pCntTbl, tagPALETTEENTRY* pColTbl)
{
	tagPALETTEENTRY* lpPe;
	// Line 145, Address: 0x101f780, Func Offset: 0
	// Line 148, Address: 0x101f798, Func Offset: 0x18
	// Line 149, Address: 0x101f7ac, Func Offset: 0x2c
	// Line 150, Address: 0x101f7cc, Func Offset: 0x4c
	// Line 151, Address: 0x101f7f0, Func Offset: 0x70
	// Line 152, Address: 0x101f804, Func Offset: 0x84
	// Line 153, Address: 0x101f830, Func Offset: 0xb0
	// Line 156, Address: 0x101f838, Func Offset: 0xb8
	// Line 157, Address: 0x101f854, Func Offset: 0xd4
	// Line 158, Address: 0x101f864, Func Offset: 0xe4
	// Line 165, Address: 0x101f89c, Func Offset: 0x11c
	// Func End, Address: 0x101f8ac, Func Offset: 0x12c
}

// 
// Start address: 0x101f8b0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 168, Address: 0x101f8b0, Func Offset: 0
	// Line 172, Address: 0x101f8bc, Func Offset: 0xc
	// Line 174, Address: 0x101f8f0, Func Offset: 0x40
	// Line 175, Address: 0x101f8fc, Func Offset: 0x4c
	// Line 176, Address: 0x101f900, Func Offset: 0x50
	// Line 177, Address: 0x101f904, Func Offset: 0x54
	// Line 178, Address: 0x101f908, Func Offset: 0x58
	// Line 179, Address: 0x101f910, Func Offset: 0x60
	// Line 180, Address: 0x101f914, Func Offset: 0x64
	// Line 181, Address: 0x101f930, Func Offset: 0x80
	// Line 182, Address: 0x101f938, Func Offset: 0x88
	// Line 184, Address: 0x101f948, Func Offset: 0x98
	// Func End, Address: 0x101f95c, Func Offset: 0xac
}

// 
// Start address: 0x101f960
int fadein0_new()
{
	// Line 188, Address: 0x101f960, Func Offset: 0
	// Line 190, Address: 0x101f968, Func Offset: 0x8
	// Line 192, Address: 0x101f974, Func Offset: 0x14
	// Line 195, Address: 0x101f97c, Func Offset: 0x1c
	// Line 196, Address: 0x101f99c, Func Offset: 0x3c
	// Line 197, Address: 0x101f9a4, Func Offset: 0x44
	// Line 199, Address: 0x101f9b0, Func Offset: 0x50
	// Line 200, Address: 0x101f9b4, Func Offset: 0x54
	// Func End, Address: 0x101f9c4, Func Offset: 0x64
}

// 
// Start address: 0x101f9d0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 203, Address: 0x101f9d0, Func Offset: 0
	// Line 207, Address: 0x101f9e4, Func Offset: 0x14
	// Line 208, Address: 0x101fa18, Func Offset: 0x48
	// Line 210, Address: 0x101fa4c, Func Offset: 0x7c
	// Line 211, Address: 0x101fa58, Func Offset: 0x88
	// Line 212, Address: 0x101fa68, Func Offset: 0x98
	// Line 213, Address: 0x101fa6c, Func Offset: 0x9c
	// Line 214, Address: 0x101fa70, Func Offset: 0xa0
	// Line 215, Address: 0x101fa8c, Func Offset: 0xbc
	// Line 217, Address: 0x101faa8, Func Offset: 0xd8
	// Line 218, Address: 0x101fadc, Func Offset: 0x10c
	// Line 220, Address: 0x101fb10, Func Offset: 0x140
	// Line 221, Address: 0x101fb1c, Func Offset: 0x14c
	// Line 222, Address: 0x101fb2c, Func Offset: 0x15c
	// Line 223, Address: 0x101fb30, Func Offset: 0x160
	// Line 224, Address: 0x101fb34, Func Offset: 0x164
	// Line 228, Address: 0x101fb50, Func Offset: 0x180
	// Func End, Address: 0x101fb6c, Func Offset: 0x19c
}

// 
// Start address: 0x101fb70
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 233, Address: 0x101fb70, Func Offset: 0
	// Line 234, Address: 0x101fb7c, Func Offset: 0xc
	// Line 237, Address: 0x101fbdc, Func Offset: 0x6c
	// Line 238, Address: 0x101fc00, Func Offset: 0x90
	// Line 239, Address: 0x101fc10, Func Offset: 0xa0
	// Line 240, Address: 0x101fc18, Func Offset: 0xa8
	// Line 241, Address: 0x101fc3c, Func Offset: 0xcc
	// Line 242, Address: 0x101fc4c, Func Offset: 0xdc
	// Line 243, Address: 0x101fc54, Func Offset: 0xe4
	// Line 244, Address: 0x101fc78, Func Offset: 0x108
	// Line 248, Address: 0x101fc8c, Func Offset: 0x11c
	// Func End, Address: 0x101fc98, Func Offset: 0x128
}

// 
// Start address: 0x101fca0
void fadeout()
{
	// Line 252, Address: 0x101fca0, Func Offset: 0
	// Line 253, Address: 0x101fca8, Func Offset: 0x8
	// Line 255, Address: 0x101fcb4, Func Offset: 0x14
	// Line 256, Address: 0x101fcbc, Func Offset: 0x1c
	// Line 258, Address: 0x101fccc, Func Offset: 0x2c
	// Func End, Address: 0x101fcd4, Func Offset: 0x34
}

// 
// Start address: 0x101fce0
int fadeout_new()
{
	// Line 262, Address: 0x101fce0, Func Offset: 0
	// Line 264, Address: 0x101fce8, Func Offset: 0x8
	// Line 266, Address: 0x101fcf4, Func Offset: 0x14
	// Line 269, Address: 0x101fcfc, Func Offset: 0x1c
	// Line 270, Address: 0x101fd1c, Func Offset: 0x3c
	// Line 271, Address: 0x101fd24, Func Offset: 0x44
	// Line 273, Address: 0x101fd30, Func Offset: 0x50
	// Line 274, Address: 0x101fd34, Func Offset: 0x54
	// Func End, Address: 0x101fd44, Func Offset: 0x64
}

// 
// Start address: 0x101fd50
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 277, Address: 0x101fd50, Func Offset: 0
	// Line 281, Address: 0x101fd60, Func Offset: 0x10
	// Line 283, Address: 0x101fd94, Func Offset: 0x44
	// Line 284, Address: 0x101fda0, Func Offset: 0x50
	// Line 285, Address: 0x101fdac, Func Offset: 0x5c
	// Line 286, Address: 0x101fdb0, Func Offset: 0x60
	// Line 287, Address: 0x101fdcc, Func Offset: 0x7c
	// Line 289, Address: 0x101fe00, Func Offset: 0xb0
	// Line 290, Address: 0x101fe0c, Func Offset: 0xbc
	// Line 291, Address: 0x101fe18, Func Offset: 0xc8
	// Line 292, Address: 0x101fe1c, Func Offset: 0xcc
	// Line 295, Address: 0x101fe38, Func Offset: 0xe8
	// Func End, Address: 0x101fe50, Func Offset: 0x100
}

// 
// Start address: 0x101fe50
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 299, Address: 0x101fe50, Func Offset: 0
	// Line 300, Address: 0x101fe58, Func Offset: 0x8
	// Line 301, Address: 0x101fe68, Func Offset: 0x18
	// Line 302, Address: 0x101fe7c, Func Offset: 0x2c
	// Line 303, Address: 0x101fe84, Func Offset: 0x34
	// Line 304, Address: 0x101fe94, Func Offset: 0x44
	// Line 305, Address: 0x101fea4, Func Offset: 0x54
	// Line 306, Address: 0x101feac, Func Offset: 0x5c
	// Line 307, Address: 0x101febc, Func Offset: 0x6c
	// Line 310, Address: 0x101fecc, Func Offset: 0x7c
	// Func End, Address: 0x101fed8, Func Offset: 0x88
}

// 
// Start address: 0x101fee0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 313, Address: 0x101fee0, Func Offset: 0
	// Line 317, Address: 0x101feec, Func Offset: 0xc
	// Line 318, Address: 0x101fef4, Func Offset: 0x14
	// Line 320, Address: 0x101ff00, Func Offset: 0x20
	// Line 322, Address: 0x101ff34, Func Offset: 0x54
	// Line 323, Address: 0x101ff40, Func Offset: 0x60
	// Line 324, Address: 0x101ff48, Func Offset: 0x68
	// Line 325, Address: 0x101ff50, Func Offset: 0x70
	// Line 326, Address: 0x101ff58, Func Offset: 0x78
	// Line 327, Address: 0x101ff60, Func Offset: 0x80
	// Line 328, Address: 0x101ff64, Func Offset: 0x84
	// Line 329, Address: 0x101ff80, Func Offset: 0xa0
	// Line 330, Address: 0x101ff88, Func Offset: 0xa8
	// Line 332, Address: 0x101ff98, Func Offset: 0xb8
	// Func End, Address: 0x101ffac, Func Offset: 0xcc
}

// 
// Start address: 0x101ffb0
int flashin_new()
{
	// Line 335, Address: 0x101ffb0, Func Offset: 0
	// Line 337, Address: 0x101ffb8, Func Offset: 0x8
	// Line 339, Address: 0x101ffc4, Func Offset: 0x14
	// Line 342, Address: 0x101ffcc, Func Offset: 0x1c
	// Line 343, Address: 0x101ffec, Func Offset: 0x3c
	// Line 344, Address: 0x101fff4, Func Offset: 0x44
	// Line 346, Address: 0x1020000, Func Offset: 0x50
	// Line 347, Address: 0x1020004, Func Offset: 0x54
	// Func End, Address: 0x1020014, Func Offset: 0x64
}

// 
// Start address: 0x1020020
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 350, Address: 0x1020020, Func Offset: 0
	// Line 354, Address: 0x1020034, Func Offset: 0x14
	// Line 355, Address: 0x1020068, Func Offset: 0x48
	// Line 357, Address: 0x102009c, Func Offset: 0x7c
	// Line 358, Address: 0x10200a8, Func Offset: 0x88
	// Line 359, Address: 0x10200b8, Func Offset: 0x98
	// Line 360, Address: 0x10200bc, Func Offset: 0x9c
	// Line 361, Address: 0x10200c0, Func Offset: 0xa0
	// Line 362, Address: 0x10200dc, Func Offset: 0xbc
	// Line 364, Address: 0x10200f8, Func Offset: 0xd8
	// Line 365, Address: 0x102012c, Func Offset: 0x10c
	// Line 367, Address: 0x1020160, Func Offset: 0x140
	// Line 368, Address: 0x102016c, Func Offset: 0x14c
	// Line 369, Address: 0x102017c, Func Offset: 0x15c
	// Line 370, Address: 0x1020180, Func Offset: 0x160
	// Line 371, Address: 0x1020184, Func Offset: 0x164
	// Line 375, Address: 0x10201a0, Func Offset: 0x180
	// Func End, Address: 0x10201bc, Func Offset: 0x19c
}

// 
// Start address: 0x10201c0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 379, Address: 0x10201c0, Func Offset: 0
	// Line 380, Address: 0x10201cc, Func Offset: 0xc
	// Line 383, Address: 0x102022c, Func Offset: 0x6c
	// Line 384, Address: 0x1020250, Func Offset: 0x90
	// Line 385, Address: 0x1020260, Func Offset: 0xa0
	// Line 386, Address: 0x1020268, Func Offset: 0xa8
	// Line 387, Address: 0x102028c, Func Offset: 0xcc
	// Line 388, Address: 0x102029c, Func Offset: 0xdc
	// Line 389, Address: 0x10202a4, Func Offset: 0xe4
	// Line 390, Address: 0x10202c8, Func Offset: 0x108
	// Line 394, Address: 0x10202dc, Func Offset: 0x11c
	// Func End, Address: 0x10202e8, Func Offset: 0x128
}

// 
// Start address: 0x10202f0
void flashout()
{
	// Line 398, Address: 0x10202f0, Func Offset: 0
	// Line 399, Address: 0x10202f8, Func Offset: 0x8
	// Line 401, Address: 0x1020304, Func Offset: 0x14
	// Line 402, Address: 0x102030c, Func Offset: 0x1c
	// Line 404, Address: 0x102031c, Func Offset: 0x2c
	// Func End, Address: 0x1020324, Func Offset: 0x34
}

// 
// Start address: 0x1020330
int flashout_new()
{
	// Line 407, Address: 0x1020330, Func Offset: 0
	// Line 409, Address: 0x1020338, Func Offset: 0x8
	// Line 411, Address: 0x1020344, Func Offset: 0x14
	// Line 414, Address: 0x102034c, Func Offset: 0x1c
	// Line 415, Address: 0x102036c, Func Offset: 0x3c
	// Line 416, Address: 0x1020374, Func Offset: 0x44
	// Line 418, Address: 0x1020380, Func Offset: 0x50
	// Line 419, Address: 0x1020384, Func Offset: 0x54
	// Func End, Address: 0x1020394, Func Offset: 0x64
}

// 
// Start address: 0x10203a0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 422, Address: 0x10203a0, Func Offset: 0
	// Line 426, Address: 0x10203b0, Func Offset: 0x10
	// Line 428, Address: 0x10203e4, Func Offset: 0x44
	// Line 429, Address: 0x10203f0, Func Offset: 0x50
	// Line 430, Address: 0x10203fc, Func Offset: 0x5c
	// Line 431, Address: 0x1020400, Func Offset: 0x60
	// Line 432, Address: 0x102041c, Func Offset: 0x7c
	// Line 434, Address: 0x1020450, Func Offset: 0xb0
	// Line 435, Address: 0x102045c, Func Offset: 0xbc
	// Line 436, Address: 0x1020468, Func Offset: 0xc8
	// Line 437, Address: 0x102046c, Func Offset: 0xcc
	// Line 440, Address: 0x1020488, Func Offset: 0xe8
	// Func End, Address: 0x10204a0, Func Offset: 0x100
}

// 
// Start address: 0x10204a0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 444, Address: 0x10204a0, Func Offset: 0
	// Line 445, Address: 0x10204a8, Func Offset: 0x8
	// Line 446, Address: 0x10204c0, Func Offset: 0x20
	// Line 447, Address: 0x10204d4, Func Offset: 0x34
	// Line 448, Address: 0x10204dc, Func Offset: 0x3c
	// Line 449, Address: 0x10204f4, Func Offset: 0x54
	// Line 450, Address: 0x1020504, Func Offset: 0x64
	// Line 451, Address: 0x102050c, Func Offset: 0x6c
	// Line 452, Address: 0x1020524, Func Offset: 0x84
	// Line 456, Address: 0x1020534, Func Offset: 0x94
	// Func End, Address: 0x1020540, Func Offset: 0xa0
}

// 
// Start address: 0x1020540
void colorset(int ColorNo)
{
	// Line 459, Address: 0x1020540, Func Offset: 0
	// Line 460, Address: 0x102054c, Func Offset: 0xc
	// Line 461, Address: 0x102055c, Func Offset: 0x1c
	// Func End, Address: 0x102056c, Func Offset: 0x2c
}

// 
// Start address: 0x1020570
void colorset2(int ColorNo)
{
	// Line 463, Address: 0x1020570, Func Offset: 0
	// Line 464, Address: 0x102057c, Func Offset: 0xc
	// Line 465, Address: 0x102058c, Func Offset: 0x1c
	// Func End, Address: 0x102059c, Func Offset: 0x2c
}

// 
// Start address: 0x10205a0
void colorset3(int ColorNo)
{
	// Line 467, Address: 0x10205a0, Func Offset: 0
	// Line 468, Address: 0x10205ac, Func Offset: 0xc
	// Line 469, Address: 0x10205bc, Func Offset: 0x1c
	// Func End, Address: 0x10205cc, Func Offset: 0x2c
}

// 
// Start address: 0x10205d0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 474, Address: 0x10205d0, Func Offset: 0
	// Line 479, Address: 0x10205f0, Func Offset: 0x20
	// Line 481, Address: 0x1020658, Func Offset: 0x88
	// Line 483, Address: 0x1020668, Func Offset: 0x98
	// Line 485, Address: 0x1020678, Func Offset: 0xa8
	// Line 487, Address: 0x1020688, Func Offset: 0xb8
	// Line 490, Address: 0x1020690, Func Offset: 0xc0
	// Line 491, Address: 0x10206a8, Func Offset: 0xd8
	// Line 492, Address: 0x10206d0, Func Offset: 0x100
	// Line 493, Address: 0x10206f0, Func Offset: 0x120
	// Line 494, Address: 0x10206fc, Func Offset: 0x12c
	// Line 495, Address: 0x102072c, Func Offset: 0x15c
	// Line 497, Address: 0x102073c, Func Offset: 0x16c
	// Func End, Address: 0x102075c, Func Offset: 0x18c
}

// 
// Start address: 0x1020760
int FadeProc()
{
	// Line 500, Address: 0x1020760, Func Offset: 0
	// Line 501, Address: 0x1020768, Func Offset: 0x8
	// Line 503, Address: 0x10207ac, Func Offset: 0x4c
	// Line 505, Address: 0x10207bc, Func Offset: 0x5c
	// Line 507, Address: 0x10207cc, Func Offset: 0x6c
	// Line 509, Address: 0x10207dc, Func Offset: 0x7c
	// Line 511, Address: 0x10207ec, Func Offset: 0x8c
	// Line 513, Address: 0x10207f0, Func Offset: 0x90
	// Func End, Address: 0x1020800, Func Offset: 0xa0
}

