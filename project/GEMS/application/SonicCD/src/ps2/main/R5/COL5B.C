typedef struct tagPALETTEENTRY;
typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;


typedef tagPALETTEENTRY type_0[64];
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
// Start address: 0x10228e0
void clchgctr()
{
	unsigned char* pChgTime;
	unsigned char* pChgCnt;
	_anon0 colchg50;
	_anon0 colchg51;
	_anon0 colchg52;
	// Line 179, Address: 0x10228e0, Func Offset: 0
	// Line 181, Address: 0x10228e8, Func Offset: 0x8
	// Line 189, Address: 0x1022924, Func Offset: 0x44
	// Line 202, Address: 0x1022960, Func Offset: 0x80
	// Line 211, Address: 0x102299c, Func Offset: 0xbc
	// Line 212, Address: 0x10229a8, Func Offset: 0xc8
	// Line 215, Address: 0x10229b4, Func Offset: 0xd4
	// Line 216, Address: 0x10229c4, Func Offset: 0xe4
	// Line 217, Address: 0x10229d8, Func Offset: 0xf8
	// Line 218, Address: 0x10229e0, Func Offset: 0x100
	// Line 221, Address: 0x10229f4, Func Offset: 0x114
	// Line 222, Address: 0x1022a0c, Func Offset: 0x12c
	// Line 225, Address: 0x1022a20, Func Offset: 0x140
	// Func End, Address: 0x1022a30, Func Offset: 0x150
}

// 
// Start address: 0x1022a30
void colchgsub(unsigned char** ppChgTime, unsigned char** ppChgCnt, _anon0* pColortbl)
{
	short cnt;
	tagPALETTEENTRY* pPalet;
	tagPALETTEENTRY* pColtbl;
	int i;
	// Line 229, Address: 0x1022a30, Func Offset: 0
	// Line 234, Address: 0x1022a50, Func Offset: 0x20
	// Line 235, Address: 0x1022a84, Func Offset: 0x54
	// Line 236, Address: 0x1022a98, Func Offset: 0x68
	// Line 237, Address: 0x1022ae4, Func Offset: 0xb4
	// Line 241, Address: 0x1022ae8, Func Offset: 0xb8
	// Line 244, Address: 0x1022af8, Func Offset: 0xc8
	// Line 245, Address: 0x1022b10, Func Offset: 0xe0
	// Line 246, Address: 0x1022b2c, Func Offset: 0xfc
	// Line 248, Address: 0x1022b44, Func Offset: 0x114
	// Line 249, Address: 0x1022b50, Func Offset: 0x120
	// Line 250, Address: 0x1022b80, Func Offset: 0x150
	// Line 254, Address: 0x1022b9c, Func Offset: 0x16c
	// Line 255, Address: 0x1022bb0, Func Offset: 0x180
	// Line 256, Address: 0x1022bc4, Func Offset: 0x194
	// Func End, Address: 0x1022be0, Func Offset: 0x1b0
}

// 
// Start address: 0x1022be0
void fadein0()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 264, Address: 0x1022be0, Func Offset: 0
	// Line 268, Address: 0x1022bec, Func Offset: 0xc
	// Line 270, Address: 0x1022c20, Func Offset: 0x40
	// Line 271, Address: 0x1022c2c, Func Offset: 0x4c
	// Line 272, Address: 0x1022c30, Func Offset: 0x50
	// Line 273, Address: 0x1022c34, Func Offset: 0x54
	// Line 274, Address: 0x1022c38, Func Offset: 0x58
	// Line 275, Address: 0x1022c40, Func Offset: 0x60
	// Line 276, Address: 0x1022c44, Func Offset: 0x64
	// Line 277, Address: 0x1022c60, Func Offset: 0x80
	// Line 278, Address: 0x1022c68, Func Offset: 0x88
	// Line 280, Address: 0x1022c78, Func Offset: 0x98
	// Func End, Address: 0x1022c8c, Func Offset: 0xac
}

// 
// Start address: 0x1022c90
int fadein0_new()
{
	// Line 284, Address: 0x1022c90, Func Offset: 0
	// Line 286, Address: 0x1022c98, Func Offset: 0x8
	// Line 288, Address: 0x1022ca4, Func Offset: 0x14
	// Line 291, Address: 0x1022cac, Func Offset: 0x1c
	// Line 292, Address: 0x1022ccc, Func Offset: 0x3c
	// Line 293, Address: 0x1022cd4, Func Offset: 0x44
	// Line 295, Address: 0x1022ce0, Func Offset: 0x50
	// Line 296, Address: 0x1022ce4, Func Offset: 0x54
	// Func End, Address: 0x1022cf4, Func Offset: 0x64
}

// 
// Start address: 0x1022d00
void fadein1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 300, Address: 0x1022d00, Func Offset: 0
	// Line 304, Address: 0x1022d14, Func Offset: 0x14
	// Line 305, Address: 0x1022d48, Func Offset: 0x48
	// Line 307, Address: 0x1022d7c, Func Offset: 0x7c
	// Line 308, Address: 0x1022d88, Func Offset: 0x88
	// Line 309, Address: 0x1022d98, Func Offset: 0x98
	// Line 310, Address: 0x1022d9c, Func Offset: 0x9c
	// Line 311, Address: 0x1022da0, Func Offset: 0xa0
	// Line 312, Address: 0x1022dbc, Func Offset: 0xbc
	// Line 314, Address: 0x1022dd8, Func Offset: 0xd8
	// Line 315, Address: 0x1022e0c, Func Offset: 0x10c
	// Line 317, Address: 0x1022e40, Func Offset: 0x140
	// Line 318, Address: 0x1022e4c, Func Offset: 0x14c
	// Line 319, Address: 0x1022e5c, Func Offset: 0x15c
	// Line 320, Address: 0x1022e60, Func Offset: 0x160
	// Line 321, Address: 0x1022e64, Func Offset: 0x164
	// Line 325, Address: 0x1022e80, Func Offset: 0x180
	// Func End, Address: 0x1022e9c, Func Offset: 0x19c
}

// 
// Start address: 0x1022ea0
void fadein2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 329, Address: 0x1022ea0, Func Offset: 0
	// Line 330, Address: 0x1022eac, Func Offset: 0xc
	// Line 333, Address: 0x1022f0c, Func Offset: 0x6c
	// Line 334, Address: 0x1022f30, Func Offset: 0x90
	// Line 335, Address: 0x1022f40, Func Offset: 0xa0
	// Line 336, Address: 0x1022f48, Func Offset: 0xa8
	// Line 337, Address: 0x1022f6c, Func Offset: 0xcc
	// Line 338, Address: 0x1022f7c, Func Offset: 0xdc
	// Line 339, Address: 0x1022f84, Func Offset: 0xe4
	// Line 340, Address: 0x1022fa8, Func Offset: 0x108
	// Line 344, Address: 0x1022fbc, Func Offset: 0x11c
	// Func End, Address: 0x1022fc8, Func Offset: 0x128
}

// 
// Start address: 0x1022fd0
void fadeout()
{
	// Line 348, Address: 0x1022fd0, Func Offset: 0
	// Line 349, Address: 0x1022fd8, Func Offset: 0x8
	// Line 351, Address: 0x1022fe4, Func Offset: 0x14
	// Line 352, Address: 0x1022fec, Func Offset: 0x1c
	// Line 354, Address: 0x1022ffc, Func Offset: 0x2c
	// Func End, Address: 0x1023004, Func Offset: 0x34
}

// 
// Start address: 0x1023010
int fadeout_new()
{
	// Line 358, Address: 0x1023010, Func Offset: 0
	// Line 360, Address: 0x1023018, Func Offset: 0x8
	// Line 362, Address: 0x1023024, Func Offset: 0x14
	// Line 365, Address: 0x102302c, Func Offset: 0x1c
	// Line 366, Address: 0x102304c, Func Offset: 0x3c
	// Line 367, Address: 0x1023054, Func Offset: 0x44
	// Line 369, Address: 0x1023060, Func Offset: 0x50
	// Line 370, Address: 0x1023064, Func Offset: 0x54
	// Func End, Address: 0x1023074, Func Offset: 0x64
}

// 
// Start address: 0x1023080
void fadeout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 373, Address: 0x1023080, Func Offset: 0
	// Line 377, Address: 0x1023090, Func Offset: 0x10
	// Line 379, Address: 0x10230c4, Func Offset: 0x44
	// Line 380, Address: 0x10230d0, Func Offset: 0x50
	// Line 381, Address: 0x10230dc, Func Offset: 0x5c
	// Line 382, Address: 0x10230e0, Func Offset: 0x60
	// Line 383, Address: 0x10230fc, Func Offset: 0x7c
	// Line 385, Address: 0x1023130, Func Offset: 0xb0
	// Line 386, Address: 0x102313c, Func Offset: 0xbc
	// Line 387, Address: 0x1023148, Func Offset: 0xc8
	// Line 388, Address: 0x102314c, Func Offset: 0xcc
	// Line 391, Address: 0x1023168, Func Offset: 0xe8
	// Func End, Address: 0x1023180, Func Offset: 0x100
}

// 
// Start address: 0x1023180
void fadeout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 394, Address: 0x1023180, Func Offset: 0
	// Line 395, Address: 0x1023188, Func Offset: 0x8
	// Line 396, Address: 0x1023198, Func Offset: 0x18
	// Line 397, Address: 0x10231ac, Func Offset: 0x2c
	// Line 398, Address: 0x10231b4, Func Offset: 0x34
	// Line 399, Address: 0x10231c4, Func Offset: 0x44
	// Line 400, Address: 0x10231d4, Func Offset: 0x54
	// Line 401, Address: 0x10231dc, Func Offset: 0x5c
	// Line 402, Address: 0x10231ec, Func Offset: 0x6c
	// Line 405, Address: 0x10231fc, Func Offset: 0x7c
	// Func End, Address: 0x1023208, Func Offset: 0x88
}

// 
// Start address: 0x1023210
void flashin()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 410, Address: 0x1023210, Func Offset: 0
	// Line 414, Address: 0x102321c, Func Offset: 0xc
	// Line 415, Address: 0x1023224, Func Offset: 0x14
	// Line 417, Address: 0x1023230, Func Offset: 0x20
	// Line 419, Address: 0x1023264, Func Offset: 0x54
	// Line 420, Address: 0x1023270, Func Offset: 0x60
	// Line 421, Address: 0x1023278, Func Offset: 0x68
	// Line 422, Address: 0x1023280, Func Offset: 0x70
	// Line 423, Address: 0x1023288, Func Offset: 0x78
	// Line 424, Address: 0x1023290, Func Offset: 0x80
	// Line 425, Address: 0x1023294, Func Offset: 0x84
	// Line 426, Address: 0x10232b0, Func Offset: 0xa0
	// Line 427, Address: 0x10232b8, Func Offset: 0xa8
	// Line 429, Address: 0x10232c8, Func Offset: 0xb8
	// Func End, Address: 0x10232dc, Func Offset: 0xcc
}

// 
// Start address: 0x10232e0
int flashin_new()
{
	// Line 431, Address: 0x10232e0, Func Offset: 0
	// Line 433, Address: 0x10232e8, Func Offset: 0x8
	// Line 435, Address: 0x10232f4, Func Offset: 0x14
	// Line 438, Address: 0x10232fc, Func Offset: 0x1c
	// Line 439, Address: 0x102331c, Func Offset: 0x3c
	// Line 440, Address: 0x1023324, Func Offset: 0x44
	// Line 442, Address: 0x1023330, Func Offset: 0x50
	// Line 443, Address: 0x1023334, Func Offset: 0x54
	// Func End, Address: 0x1023344, Func Offset: 0x64
}

// 
// Start address: 0x1023350
void flashin1()
{
	tagPALETTEENTRY* lpPe;
	tagPALETTEENTRY* lpPe2;
	int i;
	// Line 445, Address: 0x1023350, Func Offset: 0
	// Line 449, Address: 0x1023364, Func Offset: 0x14
	// Line 450, Address: 0x1023398, Func Offset: 0x48
	// Line 452, Address: 0x10233cc, Func Offset: 0x7c
	// Line 453, Address: 0x10233d8, Func Offset: 0x88
	// Line 454, Address: 0x10233e8, Func Offset: 0x98
	// Line 455, Address: 0x10233ec, Func Offset: 0x9c
	// Line 456, Address: 0x10233f0, Func Offset: 0xa0
	// Line 457, Address: 0x102340c, Func Offset: 0xbc
	// Line 459, Address: 0x1023428, Func Offset: 0xd8
	// Line 460, Address: 0x102345c, Func Offset: 0x10c
	// Line 462, Address: 0x1023490, Func Offset: 0x140
	// Line 463, Address: 0x102349c, Func Offset: 0x14c
	// Line 464, Address: 0x10234ac, Func Offset: 0x15c
	// Line 465, Address: 0x10234b0, Func Offset: 0x160
	// Line 466, Address: 0x10234b4, Func Offset: 0x164
	// Line 470, Address: 0x10234d0, Func Offset: 0x180
	// Func End, Address: 0x10234ec, Func Offset: 0x19c
}

// 
// Start address: 0x10234f0
void flashin2(tagPALETTEENTRY* lpPeDest, tagPALETTEENTRY* lpPeSrc)
{
	// Line 474, Address: 0x10234f0, Func Offset: 0
	// Line 475, Address: 0x10234fc, Func Offset: 0xc
	// Line 478, Address: 0x102355c, Func Offset: 0x6c
	// Line 479, Address: 0x1023580, Func Offset: 0x90
	// Line 480, Address: 0x1023590, Func Offset: 0xa0
	// Line 481, Address: 0x1023598, Func Offset: 0xa8
	// Line 482, Address: 0x10235bc, Func Offset: 0xcc
	// Line 483, Address: 0x10235cc, Func Offset: 0xdc
	// Line 484, Address: 0x10235d4, Func Offset: 0xe4
	// Line 485, Address: 0x10235f8, Func Offset: 0x108
	// Line 489, Address: 0x102360c, Func Offset: 0x11c
	// Func End, Address: 0x1023618, Func Offset: 0x128
}

// 
// Start address: 0x1023620
void flashout()
{
	// Line 493, Address: 0x1023620, Func Offset: 0
	// Line 494, Address: 0x1023628, Func Offset: 0x8
	// Line 496, Address: 0x1023634, Func Offset: 0x14
	// Line 497, Address: 0x102363c, Func Offset: 0x1c
	// Line 499, Address: 0x102364c, Func Offset: 0x2c
	// Func End, Address: 0x1023654, Func Offset: 0x34
}

// 
// Start address: 0x1023660
int flashout_new()
{
	// Line 501, Address: 0x1023660, Func Offset: 0
	// Line 503, Address: 0x1023668, Func Offset: 0x8
	// Line 505, Address: 0x1023674, Func Offset: 0x14
	// Line 508, Address: 0x102367c, Func Offset: 0x1c
	// Line 509, Address: 0x102369c, Func Offset: 0x3c
	// Line 510, Address: 0x10236a4, Func Offset: 0x44
	// Line 512, Address: 0x10236b0, Func Offset: 0x50
	// Line 513, Address: 0x10236b4, Func Offset: 0x54
	// Func End, Address: 0x10236c4, Func Offset: 0x64
}

// 
// Start address: 0x10236d0
void flashout1()
{
	tagPALETTEENTRY* lpPe;
	int i;
	// Line 516, Address: 0x10236d0, Func Offset: 0
	// Line 520, Address: 0x10236e0, Func Offset: 0x10
	// Line 522, Address: 0x1023714, Func Offset: 0x44
	// Line 523, Address: 0x1023720, Func Offset: 0x50
	// Line 524, Address: 0x102372c, Func Offset: 0x5c
	// Line 525, Address: 0x1023730, Func Offset: 0x60
	// Line 526, Address: 0x102374c, Func Offset: 0x7c
	// Line 528, Address: 0x1023780, Func Offset: 0xb0
	// Line 529, Address: 0x102378c, Func Offset: 0xbc
	// Line 530, Address: 0x1023798, Func Offset: 0xc8
	// Line 531, Address: 0x102379c, Func Offset: 0xcc
	// Line 534, Address: 0x10237b8, Func Offset: 0xe8
	// Func End, Address: 0x10237d0, Func Offset: 0x100
}

// 
// Start address: 0x10237d0
void flashout2(tagPALETTEENTRY* lpPeDest)
{
	// Line 537, Address: 0x10237d0, Func Offset: 0
	// Line 538, Address: 0x10237d8, Func Offset: 0x8
	// Line 539, Address: 0x10237f0, Func Offset: 0x20
	// Line 540, Address: 0x1023804, Func Offset: 0x34
	// Line 541, Address: 0x102380c, Func Offset: 0x3c
	// Line 542, Address: 0x1023824, Func Offset: 0x54
	// Line 543, Address: 0x1023834, Func Offset: 0x64
	// Line 544, Address: 0x102383c, Func Offset: 0x6c
	// Line 545, Address: 0x1023854, Func Offset: 0x84
	// Line 549, Address: 0x1023864, Func Offset: 0x94
	// Func End, Address: 0x1023870, Func Offset: 0xa0
}

// 
// Start address: 0x1023870
void colorset(int ColorNo)
{
	// Line 552, Address: 0x1023870, Func Offset: 0
	// Line 553, Address: 0x102387c, Func Offset: 0xc
	// Line 554, Address: 0x102388c, Func Offset: 0x1c
	// Func End, Address: 0x102389c, Func Offset: 0x2c
}

// 
// Start address: 0x10238a0
void colorset2(int ColorNo)
{
	// Line 556, Address: 0x10238a0, Func Offset: 0
	// Line 557, Address: 0x10238ac, Func Offset: 0xc
	// Line 558, Address: 0x10238bc, Func Offset: 0x1c
	// Func End, Address: 0x10238cc, Func Offset: 0x2c
}

// 
// Start address: 0x10238d0
void colorset3(int ColorNo)
{
	// Line 560, Address: 0x10238d0, Func Offset: 0
	// Line 561, Address: 0x10238dc, Func Offset: 0xc
	// Line 562, Address: 0x10238ec, Func Offset: 0x1c
	// Func End, Address: 0x10238fc, Func Offset: 0x2c
}

// 
// Start address: 0x1023900
void colorset4(int ColorNo)
{
	// Line 564, Address: 0x1023900, Func Offset: 0
	// Line 565, Address: 0x102390c, Func Offset: 0xc
	// Line 566, Address: 0x102391c, Func Offset: 0x1c
	// Func End, Address: 0x102392c, Func Offset: 0x2c
}

// 
// Start address: 0x1023930
void colorset00(int ColorNo, int WorkOffs)
{
	tagPALETTEENTRY* lppe;
	tagPALETTEENTRY* lpPeSrc;
	tagPALETTEENTRY* lpPeDest;
	int i;
	int n;
	// Line 572, Address: 0x1023930, Func Offset: 0
	// Line 577, Address: 0x1023950, Func Offset: 0x20
	// Line 579, Address: 0x10239b8, Func Offset: 0x88
	// Line 581, Address: 0x10239c8, Func Offset: 0x98
	// Line 583, Address: 0x10239d8, Func Offset: 0xa8
	// Line 585, Address: 0x10239e8, Func Offset: 0xb8
	// Line 588, Address: 0x10239f0, Func Offset: 0xc0
	// Line 589, Address: 0x1023a08, Func Offset: 0xd8
	// Line 590, Address: 0x1023a30, Func Offset: 0x100
	// Line 591, Address: 0x1023a50, Func Offset: 0x120
	// Line 592, Address: 0x1023a5c, Func Offset: 0x12c
	// Line 593, Address: 0x1023a8c, Func Offset: 0x15c
	// Line 595, Address: 0x1023a9c, Func Offset: 0x16c
	// Func End, Address: 0x1023abc, Func Offset: 0x18c
}

// 
// Start address: 0x1023ac0
int FadeProc()
{
	// Line 600, Address: 0x1023ac0, Func Offset: 0
	// Line 601, Address: 0x1023ac8, Func Offset: 0x8
	// Line 603, Address: 0x1023b0c, Func Offset: 0x4c
	// Line 605, Address: 0x1023b1c, Func Offset: 0x5c
	// Line 607, Address: 0x1023b2c, Func Offset: 0x6c
	// Line 609, Address: 0x1023b3c, Func Offset: 0x7c
	// Line 611, Address: 0x1023b4c, Func Offset: 0x8c
	// Line 613, Address: 0x1023b50, Func Offset: 0x90
	// Func End, Address: 0x1023b60, Func Offset: 0xa0
}

