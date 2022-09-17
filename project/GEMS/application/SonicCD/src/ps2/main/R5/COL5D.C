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
unsigned char enkeino;
unsigned char colrevflag;
unsigned char bossflag;
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
// Start address: 0x101f540
void clchgctr()
{
	unsigned char* pChgTime;
	unsigned char* pChgCnt;
	_anon0 colchg50;
	_anon0 colchg51;
	_anon0 colchg52;
	_anon0 colchg53;
	// Line 187, Address: 0x101f540, Func Offset: 0
	// Line 189, Address: 0x101f548, Func Offset: 0x8
	// Line 197, Address: 0x101f584, Func Offset: 0x44
	// Line 205, Address: 0x101f5c0, Func Offset: 0x80
	// Line 214, Address: 0x101f5fc, Func Offset: 0xbc
	// Line 223, Address: 0x101f638, Func Offset: 0xf8
	// Line 224, Address: 0x101f644, Func Offset: 0x104
	// Line 226, Address: 0x101f650, Func Offset: 0x110
	// Line 228, Address: 0x101f660, Func Offset: 0x120
	// Line 229, Address: 0x101f66c, Func Offset: 0x12c
	// Line 230, Address: 0x101f678, Func Offset: 0x138
	// Line 234, Address: 0x101f680, Func Offset: 0x140
	// Line 235, Address: 0x101f690, Func Offset: 0x150
	// Line 236, Address: 0x101f6a4, Func Offset: 0x164
	// Line 237, Address: 0x101f6ac, Func Offset: 0x16c
	// Line 241, Address: 0x101f6c0, Func Offset: 0x180
	// Line 242, Address: 0x101f6d8, Func Offset: 0x198
	// Line 243, Address: 0x101f6ec, Func Offset: 0x1ac
	// Line 245, Address: 0x101f700, Func Offset: 0x1c0
	// Func End, Address: 0x101f710, Func Offset: 0x1d0
}

// 
// Start address: 0x101f710
void colchgsub(unsigned char** ppChgTime, unsigned char** ppChgCnt, _anon0* pColortbl)
{
	short cnt;
	tagPALETTEENTRY* pPalet;
	tagPALETTEENTRY* pColtbl;
	int i;
	// Line 249, Address: 0x101f710, Func Offset: 0
	// Line 254, Address: 0x101f730, Func Offset: 0x20
	// Line 255, Address: 0x101f764, Func Offset: 0x54
	// Line 256, Address: 0x101f778, Func Offset: 0x68
	// Line 257, Address: 0x101f7c4, Func Offset: 0xb4
	// Line 261, Address: 0x101f7c8, Func Offset: 0xb8
	// Line 264, Address: 0x101f7d8, Func Offset: 0xc8
	// Line 265, Address: 0x101f7f0, Func Offset: 0xe0
	// Line 266, Address: 0x101f80c, Func Offset: 0xfc
	// Line 268, Address: 0x101f824, Func Offset: 0x114
	// Line 269, Address: 0x101f830, Func Offset: 0x120
	// Line 270, Address: 0x101f860, Func Offset: 0x150
	// Line 274, Address: 0x101f87c, Func Offset: 0x16c
	// Line 275, Address: 0x101f890, Func Offset: 0x180
	// Line 276, Address: 0x101f8a4, Func Offset: 0x194
	// Func End, Address: 0x101f8c0, Func Offset: 0x1b0
}

// 
// Start address: 0x101f8c0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 284, Address: 0x101f8c0, Func Offset: 0
	// Line 288, Address: 0x101f8cc, Func Offset: 0xc
	// Line 290, Address: 0x101f900, Func Offset: 0x40
	// Line 291, Address: 0x101f90c, Func Offset: 0x4c
	// Line 292, Address: 0x101f910, Func Offset: 0x50
	// Line 293, Address: 0x101f914, Func Offset: 0x54
	// Line 294, Address: 0x101f918, Func Offset: 0x58
	// Line 295, Address: 0x101f920, Func Offset: 0x60
	// Line 296, Address: 0x101f924, Func Offset: 0x64
	// Line 297, Address: 0x101f940, Func Offset: 0x80
	// Line 298, Address: 0x101f948, Func Offset: 0x88
	// Line 300, Address: 0x101f958, Func Offset: 0x98
	// Func End, Address: 0x101f96c, Func Offset: 0xac
}

// 
// Start address: 0x101f970
int fadein0_new()
{
	// Line 304, Address: 0x101f970, Func Offset: 0
	// Line 306, Address: 0x101f978, Func Offset: 0x8
	// Line 308, Address: 0x101f984, Func Offset: 0x14
	// Line 311, Address: 0x101f98c, Func Offset: 0x1c
	// Line 312, Address: 0x101f9ac, Func Offset: 0x3c
	// Line 313, Address: 0x101f9b4, Func Offset: 0x44
	// Line 315, Address: 0x101f9c0, Func Offset: 0x50
	// Line 316, Address: 0x101f9c4, Func Offset: 0x54
	// Func End, Address: 0x101f9d4, Func Offset: 0x64
}

// 
// Start address: 0x101f9e0
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 320, Address: 0x101f9e0, Func Offset: 0
	// Line 324, Address: 0x101f9f4, Func Offset: 0x14
	// Line 325, Address: 0x101fa28, Func Offset: 0x48
	// Line 327, Address: 0x101fa5c, Func Offset: 0x7c
	// Line 328, Address: 0x101fa68, Func Offset: 0x88
	// Line 329, Address: 0x101fa78, Func Offset: 0x98
	// Line 330, Address: 0x101fa7c, Func Offset: 0x9c
	// Line 331, Address: 0x101fa80, Func Offset: 0xa0
	// Line 332, Address: 0x101fa9c, Func Offset: 0xbc
	// Line 334, Address: 0x101fab8, Func Offset: 0xd8
	// Line 335, Address: 0x101faec, Func Offset: 0x10c
	// Line 337, Address: 0x101fb20, Func Offset: 0x140
	// Line 338, Address: 0x101fb2c, Func Offset: 0x14c
	// Line 339, Address: 0x101fb3c, Func Offset: 0x15c
	// Line 340, Address: 0x101fb40, Func Offset: 0x160
	// Line 341, Address: 0x101fb44, Func Offset: 0x164
	// Line 345, Address: 0x101fb60, Func Offset: 0x180
	// Func End, Address: 0x101fb7c, Func Offset: 0x19c
}

// 
// Start address: 0x101fb80
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 349, Address: 0x101fb80, Func Offset: 0
	// Line 350, Address: 0x101fb8c, Func Offset: 0xc
	// Line 353, Address: 0x101fbec, Func Offset: 0x6c
	// Line 354, Address: 0x101fc10, Func Offset: 0x90
	// Line 355, Address: 0x101fc20, Func Offset: 0xa0
	// Line 356, Address: 0x101fc28, Func Offset: 0xa8
	// Line 357, Address: 0x101fc4c, Func Offset: 0xcc
	// Line 358, Address: 0x101fc5c, Func Offset: 0xdc
	// Line 359, Address: 0x101fc64, Func Offset: 0xe4
	// Line 360, Address: 0x101fc88, Func Offset: 0x108
	// Line 364, Address: 0x101fc9c, Func Offset: 0x11c
	// Func End, Address: 0x101fca8, Func Offset: 0x128
}

// 
// Start address: 0x101fcb0
void fadeout()
{
	// Line 368, Address: 0x101fcb0, Func Offset: 0
	// Line 369, Address: 0x101fcb8, Func Offset: 0x8
	// Line 371, Address: 0x101fcc4, Func Offset: 0x14
	// Line 372, Address: 0x101fccc, Func Offset: 0x1c
	// Line 374, Address: 0x101fcdc, Func Offset: 0x2c
	// Func End, Address: 0x101fce4, Func Offset: 0x34
}

// 
// Start address: 0x101fcf0
int fadeout_new()
{
	// Line 378, Address: 0x101fcf0, Func Offset: 0
	// Line 380, Address: 0x101fcf8, Func Offset: 0x8
	// Line 382, Address: 0x101fd04, Func Offset: 0x14
	// Line 385, Address: 0x101fd0c, Func Offset: 0x1c
	// Line 386, Address: 0x101fd2c, Func Offset: 0x3c
	// Line 387, Address: 0x101fd34, Func Offset: 0x44
	// Line 389, Address: 0x101fd40, Func Offset: 0x50
	// Line 390, Address: 0x101fd44, Func Offset: 0x54
	// Func End, Address: 0x101fd54, Func Offset: 0x64
}

// 
// Start address: 0x101fd60
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 393, Address: 0x101fd60, Func Offset: 0
	// Line 397, Address: 0x101fd70, Func Offset: 0x10
	// Line 399, Address: 0x101fda4, Func Offset: 0x44
	// Line 400, Address: 0x101fdb0, Func Offset: 0x50
	// Line 401, Address: 0x101fdbc, Func Offset: 0x5c
	// Line 402, Address: 0x101fdc0, Func Offset: 0x60
	// Line 403, Address: 0x101fddc, Func Offset: 0x7c
	// Line 405, Address: 0x101fe10, Func Offset: 0xb0
	// Line 406, Address: 0x101fe1c, Func Offset: 0xbc
	// Line 407, Address: 0x101fe28, Func Offset: 0xc8
	// Line 408, Address: 0x101fe2c, Func Offset: 0xcc
	// Line 411, Address: 0x101fe48, Func Offset: 0xe8
	// Func End, Address: 0x101fe60, Func Offset: 0x100
}

// 
// Start address: 0x101fe60
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 414, Address: 0x101fe60, Func Offset: 0
	// Line 415, Address: 0x101fe68, Func Offset: 0x8
	// Line 416, Address: 0x101fe78, Func Offset: 0x18
	// Line 417, Address: 0x101fe8c, Func Offset: 0x2c
	// Line 418, Address: 0x101fe94, Func Offset: 0x34
	// Line 419, Address: 0x101fea4, Func Offset: 0x44
	// Line 420, Address: 0x101feb4, Func Offset: 0x54
	// Line 421, Address: 0x101febc, Func Offset: 0x5c
	// Line 422, Address: 0x101fecc, Func Offset: 0x6c
	// Line 425, Address: 0x101fedc, Func Offset: 0x7c
	// Func End, Address: 0x101fee8, Func Offset: 0x88
}

// 
// Start address: 0x101fef0
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 430, Address: 0x101fef0, Func Offset: 0
	// Line 434, Address: 0x101fefc, Func Offset: 0xc
	// Line 435, Address: 0x101ff04, Func Offset: 0x14
	// Line 437, Address: 0x101ff10, Func Offset: 0x20
	// Line 439, Address: 0x101ff44, Func Offset: 0x54
	// Line 440, Address: 0x101ff50, Func Offset: 0x60
	// Line 441, Address: 0x101ff58, Func Offset: 0x68
	// Line 442, Address: 0x101ff60, Func Offset: 0x70
	// Line 443, Address: 0x101ff68, Func Offset: 0x78
	// Line 444, Address: 0x101ff70, Func Offset: 0x80
	// Line 445, Address: 0x101ff74, Func Offset: 0x84
	// Line 446, Address: 0x101ff90, Func Offset: 0xa0
	// Line 447, Address: 0x101ff98, Func Offset: 0xa8
	// Line 449, Address: 0x101ffa8, Func Offset: 0xb8
	// Func End, Address: 0x101ffbc, Func Offset: 0xcc
}

// 
// Start address: 0x101ffc0
int flashin_new()
{
	// Line 451, Address: 0x101ffc0, Func Offset: 0
	// Line 453, Address: 0x101ffc8, Func Offset: 0x8
	// Line 455, Address: 0x101ffd4, Func Offset: 0x14
	// Line 458, Address: 0x101ffdc, Func Offset: 0x1c
	// Line 459, Address: 0x101fffc, Func Offset: 0x3c
	// Line 460, Address: 0x1020004, Func Offset: 0x44
	// Line 462, Address: 0x1020010, Func Offset: 0x50
	// Line 463, Address: 0x1020014, Func Offset: 0x54
	// Func End, Address: 0x1020024, Func Offset: 0x64
}

// 
// Start address: 0x1020030
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 465, Address: 0x1020030, Func Offset: 0
	// Line 469, Address: 0x1020044, Func Offset: 0x14
	// Line 470, Address: 0x1020078, Func Offset: 0x48
	// Line 472, Address: 0x10200ac, Func Offset: 0x7c
	// Line 473, Address: 0x10200b8, Func Offset: 0x88
	// Line 474, Address: 0x10200c8, Func Offset: 0x98
	// Line 475, Address: 0x10200cc, Func Offset: 0x9c
	// Line 476, Address: 0x10200d0, Func Offset: 0xa0
	// Line 477, Address: 0x10200ec, Func Offset: 0xbc
	// Line 479, Address: 0x1020108, Func Offset: 0xd8
	// Line 480, Address: 0x102013c, Func Offset: 0x10c
	// Line 482, Address: 0x1020170, Func Offset: 0x140
	// Line 483, Address: 0x102017c, Func Offset: 0x14c
	// Line 484, Address: 0x102018c, Func Offset: 0x15c
	// Line 485, Address: 0x1020190, Func Offset: 0x160
	// Line 486, Address: 0x1020194, Func Offset: 0x164
	// Line 490, Address: 0x10201b0, Func Offset: 0x180
	// Func End, Address: 0x10201cc, Func Offset: 0x19c
}

// 
// Start address: 0x10201d0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 494, Address: 0x10201d0, Func Offset: 0
	// Line 495, Address: 0x10201dc, Func Offset: 0xc
	// Line 498, Address: 0x102023c, Func Offset: 0x6c
	// Line 499, Address: 0x1020260, Func Offset: 0x90
	// Line 500, Address: 0x1020270, Func Offset: 0xa0
	// Line 501, Address: 0x1020278, Func Offset: 0xa8
	// Line 502, Address: 0x102029c, Func Offset: 0xcc
	// Line 503, Address: 0x10202ac, Func Offset: 0xdc
	// Line 504, Address: 0x10202b4, Func Offset: 0xe4
	// Line 505, Address: 0x10202d8, Func Offset: 0x108
	// Line 509, Address: 0x10202ec, Func Offset: 0x11c
	// Func End, Address: 0x10202f8, Func Offset: 0x128
}

// 
// Start address: 0x1020300
void flashout()
{
	// Line 513, Address: 0x1020300, Func Offset: 0
	// Line 514, Address: 0x1020308, Func Offset: 0x8
	// Line 516, Address: 0x1020314, Func Offset: 0x14
	// Line 517, Address: 0x102031c, Func Offset: 0x1c
	// Line 519, Address: 0x102032c, Func Offset: 0x2c
	// Func End, Address: 0x1020334, Func Offset: 0x34
}

// 
// Start address: 0x1020340
int flashout_new()
{
	// Line 521, Address: 0x1020340, Func Offset: 0
	// Line 523, Address: 0x1020348, Func Offset: 0x8
	// Line 525, Address: 0x1020354, Func Offset: 0x14
	// Line 528, Address: 0x102035c, Func Offset: 0x1c
	// Line 529, Address: 0x102037c, Func Offset: 0x3c
	// Line 530, Address: 0x1020384, Func Offset: 0x44
	// Line 532, Address: 0x1020390, Func Offset: 0x50
	// Line 533, Address: 0x1020394, Func Offset: 0x54
	// Func End, Address: 0x10203a4, Func Offset: 0x64
}

// 
// Start address: 0x10203b0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 536, Address: 0x10203b0, Func Offset: 0
	// Line 540, Address: 0x10203c0, Func Offset: 0x10
	// Line 542, Address: 0x10203f4, Func Offset: 0x44
	// Line 543, Address: 0x1020400, Func Offset: 0x50
	// Line 544, Address: 0x102040c, Func Offset: 0x5c
	// Line 545, Address: 0x1020410, Func Offset: 0x60
	// Line 546, Address: 0x102042c, Func Offset: 0x7c
	// Line 548, Address: 0x1020460, Func Offset: 0xb0
	// Line 549, Address: 0x102046c, Func Offset: 0xbc
	// Line 550, Address: 0x1020478, Func Offset: 0xc8
	// Line 551, Address: 0x102047c, Func Offset: 0xcc
	// Line 554, Address: 0x1020498, Func Offset: 0xe8
	// Func End, Address: 0x10204b0, Func Offset: 0x100
}

// 
// Start address: 0x10204b0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 557, Address: 0x10204b0, Func Offset: 0
	// Line 558, Address: 0x10204b8, Func Offset: 0x8
	// Line 559, Address: 0x10204d0, Func Offset: 0x20
	// Line 560, Address: 0x10204e4, Func Offset: 0x34
	// Line 561, Address: 0x10204ec, Func Offset: 0x3c
	// Line 562, Address: 0x1020504, Func Offset: 0x54
	// Line 563, Address: 0x1020514, Func Offset: 0x64
	// Line 564, Address: 0x102051c, Func Offset: 0x6c
	// Line 565, Address: 0x1020534, Func Offset: 0x84
	// Line 569, Address: 0x1020544, Func Offset: 0x94
	// Func End, Address: 0x1020550, Func Offset: 0xa0
}

// 
// Start address: 0x1020550
void colorset(int ColorNo)
{
	// Line 572, Address: 0x1020550, Func Offset: 0
	// Line 573, Address: 0x102055c, Func Offset: 0xc
	// Line 574, Address: 0x102056c, Func Offset: 0x1c
	// Func End, Address: 0x102057c, Func Offset: 0x2c
}

// 
// Start address: 0x1020580
void colorset2(int ColorNo)
{
	// Line 576, Address: 0x1020580, Func Offset: 0
	// Line 577, Address: 0x102058c, Func Offset: 0xc
	// Line 578, Address: 0x102059c, Func Offset: 0x1c
	// Func End, Address: 0x10205ac, Func Offset: 0x2c
}

// 
// Start address: 0x10205b0
void colorset3(int ColorNo)
{
	// Line 580, Address: 0x10205b0, Func Offset: 0
	// Line 581, Address: 0x10205bc, Func Offset: 0xc
	// Line 582, Address: 0x10205cc, Func Offset: 0x1c
	// Func End, Address: 0x10205dc, Func Offset: 0x2c
}

// 
// Start address: 0x10205e0
void colorset4(int ColorNo)
{
	// Line 584, Address: 0x10205e0, Func Offset: 0
	// Line 585, Address: 0x10205ec, Func Offset: 0xc
	// Line 586, Address: 0x10205fc, Func Offset: 0x1c
	// Func End, Address: 0x102060c, Func Offset: 0x2c
}

// 
// Start address: 0x1020610
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 592, Address: 0x1020610, Func Offset: 0
	// Line 597, Address: 0x1020630, Func Offset: 0x20
	// Line 599, Address: 0x1020698, Func Offset: 0x88
	// Line 601, Address: 0x10206a8, Func Offset: 0x98
	// Line 603, Address: 0x10206b8, Func Offset: 0xa8
	// Line 605, Address: 0x10206c8, Func Offset: 0xb8
	// Line 608, Address: 0x10206d0, Func Offset: 0xc0
	// Line 609, Address: 0x10206e8, Func Offset: 0xd8
	// Line 610, Address: 0x1020710, Func Offset: 0x100
	// Line 611, Address: 0x1020730, Func Offset: 0x120
	// Line 612, Address: 0x102073c, Func Offset: 0x12c
	// Line 613, Address: 0x102076c, Func Offset: 0x15c
	// Line 615, Address: 0x102077c, Func Offset: 0x16c
	// Func End, Address: 0x102079c, Func Offset: 0x18c
}

// 
// Start address: 0x10207a0
int FadeProc()
{
	// Line 620, Address: 0x10207a0, Func Offset: 0
	// Line 621, Address: 0x10207a8, Func Offset: 0x8
	// Line 623, Address: 0x10207ec, Func Offset: 0x4c
	// Line 625, Address: 0x10207fc, Func Offset: 0x5c
	// Line 627, Address: 0x102080c, Func Offset: 0x6c
	// Line 629, Address: 0x102081c, Func Offset: 0x7c
	// Line 631, Address: 0x102082c, Func Offset: 0x8c
	// Line 633, Address: 0x1020830, Func Offset: 0x90
	// Func End, Address: 0x1020840, Func Offset: 0xa0
}

