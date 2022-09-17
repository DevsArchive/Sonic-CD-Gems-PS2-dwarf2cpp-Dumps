typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;


typedef tagPALETTEENTRY type_0[60];
typedef tagPALETTEENTRY type_1[48];
typedef tagPALETTEENTRY type_2[16];
typedef tagPALETTEENTRY type_3[64];
typedef unsigned char type_4[7];
typedef unsigned char type_5[7];
typedef _anon1 type_6[6];
typedef tagPALETTEENTRY type_7[48];
typedef tagPALETTEENTRY type_8[64];

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
	tagPALETTEENTRY colortbl[60];
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
_anon1 colortbl[6];
unsigned char enkeino;
unsigned char colrevflag;
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
// Start address: 0x1016910
void clchgctr()
{
	unsigned char* pChgTime;
	unsigned char* pChgCnt;
	_anon0 colchg50;
	_anon0 colchg51;
	_anon0 colchg52;
	_anon0 colchg53;
	// Line 179, Address: 0x1016910, Func Offset: 0
	// Line 181, Address: 0x1016918, Func Offset: 0x8
	// Line 189, Address: 0x101694c, Func Offset: 0x3c
	// Line 207, Address: 0x1016980, Func Offset: 0x70
	// Line 215, Address: 0x10169b4, Func Offset: 0xa4
	// Line 224, Address: 0x10169e8, Func Offset: 0xd8
	// Line 225, Address: 0x10169f4, Func Offset: 0xe4
	// Line 228, Address: 0x1016a00, Func Offset: 0xf0
	// Line 229, Address: 0x1016a10, Func Offset: 0x100
	// Line 230, Address: 0x1016a24, Func Offset: 0x114
	// Line 231, Address: 0x1016a2c, Func Offset: 0x11c
	// Line 234, Address: 0x1016a40, Func Offset: 0x130
	// Line 235, Address: 0x1016a58, Func Offset: 0x148
	// Line 236, Address: 0x1016a6c, Func Offset: 0x15c
	// Line 238, Address: 0x1016a74, Func Offset: 0x164
	// Line 241, Address: 0x1016a88, Func Offset: 0x178
	// Func End, Address: 0x1016a98, Func Offset: 0x188
}

// 
// Start address: 0x1016aa0
void colchgsub(unsigned char** ppChgTime, unsigned char** ppChgCnt, _anon0* pColortbl)
{
	short cnt;
	tagPALETTEENTRY* pPalet;
	tagPALETTEENTRY* pColtbl;
	int i;
	// Line 245, Address: 0x1016aa0, Func Offset: 0
	// Line 250, Address: 0x1016ac0, Func Offset: 0x20
	// Line 251, Address: 0x1016af4, Func Offset: 0x54
	// Line 252, Address: 0x1016b08, Func Offset: 0x68
	// Line 253, Address: 0x1016b54, Func Offset: 0xb4
	// Line 257, Address: 0x1016b58, Func Offset: 0xb8
	// Line 260, Address: 0x1016b68, Func Offset: 0xc8
	// Line 261, Address: 0x1016b80, Func Offset: 0xe0
	// Line 262, Address: 0x1016b9c, Func Offset: 0xfc
	// Line 264, Address: 0x1016bb4, Func Offset: 0x114
	// Line 265, Address: 0x1016bc0, Func Offset: 0x120
	// Line 266, Address: 0x1016bf0, Func Offset: 0x150
	// Line 270, Address: 0x1016c0c, Func Offset: 0x16c
	// Line 271, Address: 0x1016c20, Func Offset: 0x180
	// Line 272, Address: 0x1016c34, Func Offset: 0x194
	// Func End, Address: 0x1016c50, Func Offset: 0x1b0
}

// 
// Start address: 0x1016c50
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 280, Address: 0x1016c50, Func Offset: 0
	// Line 284, Address: 0x1016c5c, Func Offset: 0xc
	// Line 286, Address: 0x1016c90, Func Offset: 0x40
	// Line 287, Address: 0x1016c9c, Func Offset: 0x4c
	// Line 288, Address: 0x1016ca0, Func Offset: 0x50
	// Line 289, Address: 0x1016ca4, Func Offset: 0x54
	// Line 290, Address: 0x1016ca8, Func Offset: 0x58
	// Line 291, Address: 0x1016cb0, Func Offset: 0x60
	// Line 292, Address: 0x1016cb4, Func Offset: 0x64
	// Line 293, Address: 0x1016cd0, Func Offset: 0x80
	// Line 294, Address: 0x1016cd8, Func Offset: 0x88
	// Line 296, Address: 0x1016ce8, Func Offset: 0x98
	// Func End, Address: 0x1016cfc, Func Offset: 0xac
}

// 
// Start address: 0x1016d00
int fadein0_new()
{
	// Line 300, Address: 0x1016d00, Func Offset: 0
	// Line 302, Address: 0x1016d08, Func Offset: 0x8
	// Line 304, Address: 0x1016d14, Func Offset: 0x14
	// Line 307, Address: 0x1016d1c, Func Offset: 0x1c
	// Line 308, Address: 0x1016d3c, Func Offset: 0x3c
	// Line 309, Address: 0x1016d44, Func Offset: 0x44
	// Line 311, Address: 0x1016d50, Func Offset: 0x50
	// Line 312, Address: 0x1016d54, Func Offset: 0x54
	// Func End, Address: 0x1016d64, Func Offset: 0x64
}

// 
// Start address: 0x1016d70
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 316, Address: 0x1016d70, Func Offset: 0
	// Line 320, Address: 0x1016d84, Func Offset: 0x14
	// Line 321, Address: 0x1016db8, Func Offset: 0x48
	// Line 323, Address: 0x1016dec, Func Offset: 0x7c
	// Line 324, Address: 0x1016df8, Func Offset: 0x88
	// Line 325, Address: 0x1016e08, Func Offset: 0x98
	// Line 326, Address: 0x1016e0c, Func Offset: 0x9c
	// Line 327, Address: 0x1016e10, Func Offset: 0xa0
	// Line 328, Address: 0x1016e2c, Func Offset: 0xbc
	// Line 330, Address: 0x1016e48, Func Offset: 0xd8
	// Line 331, Address: 0x1016e7c, Func Offset: 0x10c
	// Line 333, Address: 0x1016eb0, Func Offset: 0x140
	// Line 334, Address: 0x1016ebc, Func Offset: 0x14c
	// Line 335, Address: 0x1016ecc, Func Offset: 0x15c
	// Line 336, Address: 0x1016ed0, Func Offset: 0x160
	// Line 337, Address: 0x1016ed4, Func Offset: 0x164
	// Line 341, Address: 0x1016ef0, Func Offset: 0x180
	// Func End, Address: 0x1016f0c, Func Offset: 0x19c
}

// 
// Start address: 0x1016f10
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 345, Address: 0x1016f10, Func Offset: 0
	// Line 346, Address: 0x1016f1c, Func Offset: 0xc
	// Line 349, Address: 0x1016f7c, Func Offset: 0x6c
	// Line 350, Address: 0x1016fa0, Func Offset: 0x90
	// Line 351, Address: 0x1016fb0, Func Offset: 0xa0
	// Line 352, Address: 0x1016fb8, Func Offset: 0xa8
	// Line 353, Address: 0x1016fdc, Func Offset: 0xcc
	// Line 354, Address: 0x1016fec, Func Offset: 0xdc
	// Line 355, Address: 0x1016ff4, Func Offset: 0xe4
	// Line 356, Address: 0x1017018, Func Offset: 0x108
	// Line 360, Address: 0x101702c, Func Offset: 0x11c
	// Func End, Address: 0x1017038, Func Offset: 0x128
}

// 
// Start address: 0x1017040
void fadeout()
{
	// Line 364, Address: 0x1017040, Func Offset: 0
	// Line 365, Address: 0x1017048, Func Offset: 0x8
	// Line 367, Address: 0x1017054, Func Offset: 0x14
	// Line 368, Address: 0x101705c, Func Offset: 0x1c
	// Line 370, Address: 0x101706c, Func Offset: 0x2c
	// Func End, Address: 0x1017074, Func Offset: 0x34
}

// 
// Start address: 0x1017080
int fadeout_new()
{
	// Line 374, Address: 0x1017080, Func Offset: 0
	// Line 376, Address: 0x1017088, Func Offset: 0x8
	// Line 378, Address: 0x1017094, Func Offset: 0x14
	// Line 381, Address: 0x101709c, Func Offset: 0x1c
	// Line 382, Address: 0x10170bc, Func Offset: 0x3c
	// Line 383, Address: 0x10170c4, Func Offset: 0x44
	// Line 385, Address: 0x10170d0, Func Offset: 0x50
	// Line 386, Address: 0x10170d4, Func Offset: 0x54
	// Func End, Address: 0x10170e4, Func Offset: 0x64
}

// 
// Start address: 0x10170f0
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 389, Address: 0x10170f0, Func Offset: 0
	// Line 393, Address: 0x1017100, Func Offset: 0x10
	// Line 395, Address: 0x1017134, Func Offset: 0x44
	// Line 396, Address: 0x1017140, Func Offset: 0x50
	// Line 397, Address: 0x101714c, Func Offset: 0x5c
	// Line 398, Address: 0x1017150, Func Offset: 0x60
	// Line 399, Address: 0x101716c, Func Offset: 0x7c
	// Line 401, Address: 0x10171a0, Func Offset: 0xb0
	// Line 402, Address: 0x10171ac, Func Offset: 0xbc
	// Line 403, Address: 0x10171b8, Func Offset: 0xc8
	// Line 404, Address: 0x10171bc, Func Offset: 0xcc
	// Line 407, Address: 0x10171d8, Func Offset: 0xe8
	// Func End, Address: 0x10171f0, Func Offset: 0x100
}

// 
// Start address: 0x10171f0
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 410, Address: 0x10171f0, Func Offset: 0
	// Line 411, Address: 0x10171f8, Func Offset: 0x8
	// Line 412, Address: 0x1017208, Func Offset: 0x18
	// Line 413, Address: 0x101721c, Func Offset: 0x2c
	// Line 414, Address: 0x1017224, Func Offset: 0x34
	// Line 415, Address: 0x1017234, Func Offset: 0x44
	// Line 416, Address: 0x1017244, Func Offset: 0x54
	// Line 417, Address: 0x101724c, Func Offset: 0x5c
	// Line 418, Address: 0x101725c, Func Offset: 0x6c
	// Line 421, Address: 0x101726c, Func Offset: 0x7c
	// Func End, Address: 0x1017278, Func Offset: 0x88
}

// 
// Start address: 0x1017280
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 426, Address: 0x1017280, Func Offset: 0
	// Line 430, Address: 0x101728c, Func Offset: 0xc
	// Line 431, Address: 0x1017294, Func Offset: 0x14
	// Line 433, Address: 0x10172a0, Func Offset: 0x20
	// Line 435, Address: 0x10172d4, Func Offset: 0x54
	// Line 436, Address: 0x10172e0, Func Offset: 0x60
	// Line 437, Address: 0x10172e8, Func Offset: 0x68
	// Line 438, Address: 0x10172f0, Func Offset: 0x70
	// Line 439, Address: 0x10172f8, Func Offset: 0x78
	// Line 440, Address: 0x1017300, Func Offset: 0x80
	// Line 441, Address: 0x1017304, Func Offset: 0x84
	// Line 442, Address: 0x1017320, Func Offset: 0xa0
	// Line 443, Address: 0x1017328, Func Offset: 0xa8
	// Line 445, Address: 0x1017338, Func Offset: 0xb8
	// Func End, Address: 0x101734c, Func Offset: 0xcc
}

// 
// Start address: 0x1017350
int flashin_new()
{
	// Line 447, Address: 0x1017350, Func Offset: 0
	// Line 449, Address: 0x1017358, Func Offset: 0x8
	// Line 451, Address: 0x1017364, Func Offset: 0x14
	// Line 454, Address: 0x101736c, Func Offset: 0x1c
	// Line 455, Address: 0x101738c, Func Offset: 0x3c
	// Line 456, Address: 0x1017394, Func Offset: 0x44
	// Line 458, Address: 0x10173a0, Func Offset: 0x50
	// Line 459, Address: 0x10173a4, Func Offset: 0x54
	// Func End, Address: 0x10173b4, Func Offset: 0x64
}

// 
// Start address: 0x10173c0
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 461, Address: 0x10173c0, Func Offset: 0
	// Line 465, Address: 0x10173d4, Func Offset: 0x14
	// Line 466, Address: 0x1017408, Func Offset: 0x48
	// Line 468, Address: 0x101743c, Func Offset: 0x7c
	// Line 469, Address: 0x1017448, Func Offset: 0x88
	// Line 470, Address: 0x1017458, Func Offset: 0x98
	// Line 471, Address: 0x101745c, Func Offset: 0x9c
	// Line 472, Address: 0x1017460, Func Offset: 0xa0
	// Line 473, Address: 0x101747c, Func Offset: 0xbc
	// Line 475, Address: 0x1017498, Func Offset: 0xd8
	// Line 476, Address: 0x10174cc, Func Offset: 0x10c
	// Line 478, Address: 0x1017500, Func Offset: 0x140
	// Line 479, Address: 0x101750c, Func Offset: 0x14c
	// Line 480, Address: 0x101751c, Func Offset: 0x15c
	// Line 481, Address: 0x1017520, Func Offset: 0x160
	// Line 482, Address: 0x1017524, Func Offset: 0x164
	// Line 486, Address: 0x1017540, Func Offset: 0x180
	// Func End, Address: 0x101755c, Func Offset: 0x19c
}

// 
// Start address: 0x1017560
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 490, Address: 0x1017560, Func Offset: 0
	// Line 491, Address: 0x101756c, Func Offset: 0xc
	// Line 494, Address: 0x10175cc, Func Offset: 0x6c
	// Line 495, Address: 0x10175f0, Func Offset: 0x90
	// Line 496, Address: 0x1017600, Func Offset: 0xa0
	// Line 497, Address: 0x1017608, Func Offset: 0xa8
	// Line 498, Address: 0x101762c, Func Offset: 0xcc
	// Line 499, Address: 0x101763c, Func Offset: 0xdc
	// Line 500, Address: 0x1017644, Func Offset: 0xe4
	// Line 501, Address: 0x1017668, Func Offset: 0x108
	// Line 505, Address: 0x101767c, Func Offset: 0x11c
	// Func End, Address: 0x1017688, Func Offset: 0x128
}

// 
// Start address: 0x1017690
void flashout()
{
	// Line 509, Address: 0x1017690, Func Offset: 0
	// Line 510, Address: 0x1017698, Func Offset: 0x8
	// Line 512, Address: 0x10176a4, Func Offset: 0x14
	// Line 513, Address: 0x10176ac, Func Offset: 0x1c
	// Line 515, Address: 0x10176bc, Func Offset: 0x2c
	// Func End, Address: 0x10176c4, Func Offset: 0x34
}

// 
// Start address: 0x10176d0
int flashout_new()
{
	// Line 517, Address: 0x10176d0, Func Offset: 0
	// Line 519, Address: 0x10176d8, Func Offset: 0x8
	// Line 521, Address: 0x10176e4, Func Offset: 0x14
	// Line 524, Address: 0x10176ec, Func Offset: 0x1c
	// Line 525, Address: 0x101770c, Func Offset: 0x3c
	// Line 526, Address: 0x1017714, Func Offset: 0x44
	// Line 528, Address: 0x1017720, Func Offset: 0x50
	// Line 529, Address: 0x1017724, Func Offset: 0x54
	// Func End, Address: 0x1017734, Func Offset: 0x64
}

// 
// Start address: 0x1017740
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 532, Address: 0x1017740, Func Offset: 0
	// Line 536, Address: 0x1017750, Func Offset: 0x10
	// Line 538, Address: 0x1017784, Func Offset: 0x44
	// Line 539, Address: 0x1017790, Func Offset: 0x50
	// Line 540, Address: 0x101779c, Func Offset: 0x5c
	// Line 541, Address: 0x10177a0, Func Offset: 0x60
	// Line 542, Address: 0x10177bc, Func Offset: 0x7c
	// Line 544, Address: 0x10177f0, Func Offset: 0xb0
	// Line 545, Address: 0x10177fc, Func Offset: 0xbc
	// Line 546, Address: 0x1017808, Func Offset: 0xc8
	// Line 547, Address: 0x101780c, Func Offset: 0xcc
	// Line 550, Address: 0x1017828, Func Offset: 0xe8
	// Func End, Address: 0x1017840, Func Offset: 0x100
}

// 
// Start address: 0x1017840
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 553, Address: 0x1017840, Func Offset: 0
	// Line 554, Address: 0x1017848, Func Offset: 0x8
	// Line 555, Address: 0x1017860, Func Offset: 0x20
	// Line 556, Address: 0x1017874, Func Offset: 0x34
	// Line 557, Address: 0x101787c, Func Offset: 0x3c
	// Line 558, Address: 0x1017894, Func Offset: 0x54
	// Line 559, Address: 0x10178a4, Func Offset: 0x64
	// Line 560, Address: 0x10178ac, Func Offset: 0x6c
	// Line 561, Address: 0x10178c4, Func Offset: 0x84
	// Line 565, Address: 0x10178d4, Func Offset: 0x94
	// Func End, Address: 0x10178e0, Func Offset: 0xa0
}

// 
// Start address: 0x10178e0
void colorset(int ColorNo)
{
	// Line 568, Address: 0x10178e0, Func Offset: 0
	// Line 569, Address: 0x10178ec, Func Offset: 0xc
	// Line 570, Address: 0x10178fc, Func Offset: 0x1c
	// Func End, Address: 0x101790c, Func Offset: 0x2c
}

// 
// Start address: 0x1017910
void colorset2(int ColorNo)
{
	// Line 572, Address: 0x1017910, Func Offset: 0
	// Line 573, Address: 0x101791c, Func Offset: 0xc
	// Line 574, Address: 0x101792c, Func Offset: 0x1c
	// Func End, Address: 0x101793c, Func Offset: 0x2c
}

// 
// Start address: 0x1017940
void colorset3(int ColorNo)
{
	// Line 576, Address: 0x1017940, Func Offset: 0
	// Line 577, Address: 0x101794c, Func Offset: 0xc
	// Line 578, Address: 0x101795c, Func Offset: 0x1c
	// Func End, Address: 0x101796c, Func Offset: 0x2c
}

// 
// Start address: 0x1017970
void colorset4(int ColorNo)
{
	// Line 580, Address: 0x1017970, Func Offset: 0
	// Line 581, Address: 0x101797c, Func Offset: 0xc
	// Line 582, Address: 0x101798c, Func Offset: 0x1c
	// Func End, Address: 0x101799c, Func Offset: 0x2c
}

// 
// Start address: 0x10179a0
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 588, Address: 0x10179a0, Func Offset: 0
	// Line 593, Address: 0x10179c0, Func Offset: 0x20
	// Line 595, Address: 0x1017a28, Func Offset: 0x88
	// Line 597, Address: 0x1017a38, Func Offset: 0x98
	// Line 599, Address: 0x1017a48, Func Offset: 0xa8
	// Line 601, Address: 0x1017a58, Func Offset: 0xb8
	// Line 604, Address: 0x1017a60, Func Offset: 0xc0
	// Line 605, Address: 0x1017a78, Func Offset: 0xd8
	// Line 606, Address: 0x1017aa0, Func Offset: 0x100
	// Line 607, Address: 0x1017ac0, Func Offset: 0x120
	// Line 608, Address: 0x1017acc, Func Offset: 0x12c
	// Line 609, Address: 0x1017afc, Func Offset: 0x15c
	// Line 611, Address: 0x1017b0c, Func Offset: 0x16c
	// Func End, Address: 0x1017b2c, Func Offset: 0x18c
}

// 
// Start address: 0x1017b30
int FadeProc()
{
	// Line 616, Address: 0x1017b30, Func Offset: 0
	// Line 617, Address: 0x1017b38, Func Offset: 0x8
	// Line 619, Address: 0x1017b7c, Func Offset: 0x4c
	// Line 621, Address: 0x1017b8c, Func Offset: 0x5c
	// Line 623, Address: 0x1017b9c, Func Offset: 0x6c
	// Line 625, Address: 0x1017bac, Func Offset: 0x7c
	// Line 627, Address: 0x1017bbc, Func Offset: 0x8c
	// Line 629, Address: 0x1017bc0, Func Offset: 0x90
	// Func End, Address: 0x1017bd0, Func Offset: 0xa0
}

