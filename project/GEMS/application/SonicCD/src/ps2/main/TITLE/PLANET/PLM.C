typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;

typedef void(*type_9)();

typedef _anon0 type_0[2];
typedef _anon4 type_1[10];
typedef short type_2[12];
typedef short type_3[8];
typedef short type_4[6];
typedef short type_5[4];
typedef short type_6[12];
typedef short type_7[6];
typedef _anon3 type_8[4];
typedef void(*type_10)()[6];
typedef _anon3 type_11[5];
typedef short type_12[8];
typedef _anon3 type_13[5];

struct _anon0
{
	short index;
	unsigned char etc;
	short hoffs;
	short hrevoffs;
	short voffs;
	short vrevoffs;
};

struct _anon1
{
	unsigned short ACT_NO;
	unsigned short EXE_NO;
	_anon6 XPOSI;
	_anon6 YPOSI;
	_anon6 X_SPEED;
	_anon6 Y_SPEED;
	_anon6 X_ACCEL;
	_anon6 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon5* PAT_ADR;
	unsigned char SPR_FLG;
	unsigned char ACT_FLG;
	short END_XPOSI;
	short END_YPOSI;
	short X_WIDE;
	short Y_WIDE;
	unsigned char timer1;
	unsigned char timer2;
};

struct _anon2
{
	short mapnum;
	_anon0 aMapDat[2];
};

struct _anon3
{
	short number;
	short* inipat;
};

struct _anon4
{
	short timer;
	_anon2* paMapTbl;
};

struct _anon5
{
	short patnum;
	_anon4 aPatDat[10];
};

union _anon6
{
	int l;
	_anon7 w;
	_anon8 b;
};

struct _anon7
{
	short l;
	short h;
};

struct _anon8
{
	char b4;
	char b3;
	char b2;
	char b1;
};

short fpat0[8];
short fpat1[8];
short fpat2[12];
_anon3 flick_ini_tbl[4];
short spat0[6];
_anon3 star_ini_tbl[5];
short upat0[4];
_anon3 ufo_ini_tbl[5];
void(*sprinit_tbl)()[6];
short actset_tbl[12];
short actset_tm[6];
unsigned char music_selflg;
unsigned char actset_wk;
unsigned char actset_flg;
_anon5 flicky_tbl;
_anon5 flicky_tbl1;
_anon5 flicky_tbl3;
short colorno;

void sprinit();
void flick_set();
void f_actset(_anon1* pActwk, _anon3* pFoffset, short initx, short inity, short iReverse, short iNormal, short max);
void star_set();
void s_actset(_anon1* pActwk, _anon3* pSoffset, short iD3, short iD5, short iD6, short i);
void ufo_set();
void eggman_set();
void metals_set();
void tails_set();

// 
// Start address: 0x10070c0
void sprinit()
{
	_anon6 lD0;
	short i;
	short iD0;
	short iD5;
	// Line 139, Address: 0x10070c0, Func Offset: 0
	// Line 143, Address: 0x10070d4, Func Offset: 0x14
	// Line 146, Address: 0x10070ec, Func Offset: 0x2c
	// Line 148, Address: 0x10070f8, Func Offset: 0x38
	// Line 150, Address: 0x1007134, Func Offset: 0x74
	// Line 151, Address: 0x1007154, Func Offset: 0x94
	// Line 152, Address: 0x100715c, Func Offset: 0x9c
	// Line 153, Address: 0x1007168, Func Offset: 0xa8
	// Line 155, Address: 0x10071a0, Func Offset: 0xe0
	// Line 156, Address: 0x10071b0, Func Offset: 0xf0
	// Line 157, Address: 0x10071fc, Func Offset: 0x13c
	// Line 159, Address: 0x1007224, Func Offset: 0x164
	// Line 160, Address: 0x1007248, Func Offset: 0x188
	// Line 162, Address: 0x1007250, Func Offset: 0x190
	// Line 165, Address: 0x1007270, Func Offset: 0x1b0
	// Func End, Address: 0x100728c, Func Offset: 0x1cc
}

// 
// Start address: 0x1007290
void flick_set()
{
	short i;
	short iD3;
	short iD5;
	short iD6;
	short iD7;
	_anon1* pActwk;
	_anon6 lD0;
	_anon3* pFoffset;
	// Line 178, Address: 0x1007290, Func Offset: 0
	// Line 185, Address: 0x10072b0, Func Offset: 0x20
	// Line 188, Address: 0x10072c8, Func Offset: 0x38
	// Line 189, Address: 0x10072dc, Func Offset: 0x4c
	// Line 190, Address: 0x10072e8, Func Offset: 0x58
	// Line 191, Address: 0x10072f0, Func Offset: 0x60
	// Line 194, Address: 0x1007308, Func Offset: 0x78
	// Line 195, Address: 0x100731c, Func Offset: 0x8c
	// Line 196, Address: 0x1007328, Func Offset: 0x98
	// Line 198, Address: 0x1007330, Func Offset: 0xa0
	// Line 200, Address: 0x1007338, Func Offset: 0xa8
	// Line 201, Address: 0x1007344, Func Offset: 0xb4
	// Line 203, Address: 0x1007350, Func Offset: 0xc0
	// Line 204, Address: 0x1007360, Func Offset: 0xd0
	// Line 206, Address: 0x1007374, Func Offset: 0xe4
	// Line 208, Address: 0x1007380, Func Offset: 0xf0
	// Line 209, Address: 0x1007390, Func Offset: 0x100
	// Line 210, Address: 0x10073ac, Func Offset: 0x11c
	// Line 213, Address: 0x10073cc, Func Offset: 0x13c
	// Line 214, Address: 0x10073dc, Func Offset: 0x14c
	// Line 215, Address: 0x1007408, Func Offset: 0x178
	// Line 217, Address: 0x1007424, Func Offset: 0x194
	// Line 218, Address: 0x100743c, Func Offset: 0x1ac
	// Line 220, Address: 0x1007448, Func Offset: 0x1b8
	// Line 222, Address: 0x1007454, Func Offset: 0x1c4
	// Line 224, Address: 0x1007460, Func Offset: 0x1d0
	// Line 228, Address: 0x1007474, Func Offset: 0x1e4
	// Line 229, Address: 0x10074c8, Func Offset: 0x238
	// Line 230, Address: 0x1007510, Func Offset: 0x280
	// Line 231, Address: 0x1007518, Func Offset: 0x288
	// Func End, Address: 0x1007540, Func Offset: 0x2b0
}

// 
// Start address: 0x1007540
void f_actset(_anon1* pActwk, _anon3* pFoffset, short initx, short inity, short iReverse, short iNormal, short max)
{
	_anon6 lD0;
	short iD0;
	// Line 255, Address: 0x1007540, Func Offset: 0
	// Line 259, Address: 0x1007568, Func Offset: 0x28
	// Line 260, Address: 0x1007570, Func Offset: 0x30
	// Line 261, Address: 0x1007580, Func Offset: 0x40
	// Line 262, Address: 0x100758c, Func Offset: 0x4c
	// Line 263, Address: 0x1007598, Func Offset: 0x58
	// Line 264, Address: 0x10075a4, Func Offset: 0x64
	// Line 268, Address: 0x10075b0, Func Offset: 0x70
	// Line 270, Address: 0x10075d0, Func Offset: 0x90
	// Line 271, Address: 0x10075e0, Func Offset: 0xa0
	// Line 272, Address: 0x10075fc, Func Offset: 0xbc
	// Line 274, Address: 0x1007610, Func Offset: 0xd0
	// Line 277, Address: 0x1007628, Func Offset: 0xe8
	// Line 278, Address: 0x1007638, Func Offset: 0xf8
	// Line 279, Address: 0x1007648, Func Offset: 0x108
	// Line 280, Address: 0x1007654, Func Offset: 0x114
	// Line 281, Address: 0x1007664, Func Offset: 0x124
	// Line 285, Address: 0x100766c, Func Offset: 0x12c
	// Line 286, Address: 0x100767c, Func Offset: 0x13c
	// Line 287, Address: 0x1007688, Func Offset: 0x148
	// Line 288, Address: 0x1007690, Func Offset: 0x150
	// Line 290, Address: 0x10076a0, Func Offset: 0x160
	// Line 294, Address: 0x10076a8, Func Offset: 0x168
	// Line 295, Address: 0x10076b8, Func Offset: 0x178
	// Line 296, Address: 0x10076c0, Func Offset: 0x180
	// Line 299, Address: 0x10076d0, Func Offset: 0x190
	// Line 301, Address: 0x10076e4, Func Offset: 0x1a4
	// Line 302, Address: 0x10076f4, Func Offset: 0x1b4
	// Line 303, Address: 0x1007700, Func Offset: 0x1c0
	// Line 304, Address: 0x100772c, Func Offset: 0x1ec
	// Line 306, Address: 0x1007740, Func Offset: 0x200
	// Line 307, Address: 0x1007750, Func Offset: 0x210
	// Line 308, Address: 0x1007760, Func Offset: 0x220
	// Line 309, Address: 0x100777c, Func Offset: 0x23c
	// Line 311, Address: 0x10077a0, Func Offset: 0x260
	// Line 312, Address: 0x10077b0, Func Offset: 0x270
	// Line 313, Address: 0x10077e8, Func Offset: 0x2a8
	// Func End, Address: 0x10077fc, Func Offset: 0x2bc
}

// 
// Start address: 0x1007800
void star_set()
{
	short i;
	short iD1;
	short iD3;
	short iD5;
	short iD6;
	short iD7;
	_anon6 lD0;
	_anon1* pActwk;
	_anon3* pSoffset;
	// Line 325, Address: 0x1007800, Func Offset: 0
	// Line 331, Address: 0x1007824, Func Offset: 0x24
	// Line 332, Address: 0x1007840, Func Offset: 0x40
	// Line 335, Address: 0x100785c, Func Offset: 0x5c
	// Line 338, Address: 0x1007874, Func Offset: 0x74
	// Line 339, Address: 0x1007888, Func Offset: 0x88
	// Line 340, Address: 0x1007894, Func Offset: 0x94
	// Line 341, Address: 0x100789c, Func Offset: 0x9c
	// Line 344, Address: 0x10078b4, Func Offset: 0xb4
	// Line 345, Address: 0x10078c8, Func Offset: 0xc8
	// Line 346, Address: 0x10078d4, Func Offset: 0xd4
	// Line 348, Address: 0x10078dc, Func Offset: 0xdc
	// Line 350, Address: 0x10078e4, Func Offset: 0xe4
	// Line 351, Address: 0x10078f0, Func Offset: 0xf0
	// Line 352, Address: 0x10078fc, Func Offset: 0xfc
	// Line 354, Address: 0x1007900, Func Offset: 0x100
	// Line 355, Address: 0x1007910, Func Offset: 0x110
	// Line 356, Address: 0x100793c, Func Offset: 0x13c
	// Line 358, Address: 0x1007948, Func Offset: 0x148
	// Line 359, Address: 0x100795c, Func Offset: 0x15c
	// Line 361, Address: 0x1007968, Func Offset: 0x168
	// Line 362, Address: 0x100796c, Func Offset: 0x16c
	// Line 363, Address: 0x1007984, Func Offset: 0x184
	// Line 365, Address: 0x1007990, Func Offset: 0x190
	// Line 367, Address: 0x100799c, Func Offset: 0x19c
	// Line 368, Address: 0x10079ac, Func Offset: 0x1ac
	// Line 369, Address: 0x10079c8, Func Offset: 0x1c8
	// Line 372, Address: 0x10079e4, Func Offset: 0x1e4
	// Line 374, Address: 0x10079f0, Func Offset: 0x1f0
	// Line 376, Address: 0x1007a04, Func Offset: 0x204
	// Line 377, Address: 0x1007a24, Func Offset: 0x224
	// Line 378, Address: 0x1007a6c, Func Offset: 0x26c
	// Line 379, Address: 0x1007a74, Func Offset: 0x274
	// Func End, Address: 0x1007aa0, Func Offset: 0x2a0
}

// 
// Start address: 0x1007aa0
void s_actset(_anon1* pActwk, _anon3* pSoffset, short iD3, short iD5, short iD6, short i)
{
	_anon6 lD0;
	// Line 398, Address: 0x1007aa0, Func Offset: 0
	// Line 401, Address: 0x1007ac0, Func Offset: 0x20
	// Line 402, Address: 0x1007acc, Func Offset: 0x2c
	// Line 403, Address: 0x1007ad4, Func Offset: 0x34
	// Line 405, Address: 0x1007ae4, Func Offset: 0x44
	// Line 406, Address: 0x1007af0, Func Offset: 0x50
	// Line 408, Address: 0x1007afc, Func Offset: 0x5c
	// Line 409, Address: 0x1007b08, Func Offset: 0x68
	// Line 410, Address: 0x1007b1c, Func Offset: 0x7c
	// Line 411, Address: 0x1007b28, Func Offset: 0x88
	// Line 412, Address: 0x1007b38, Func Offset: 0x98
	// Line 413, Address: 0x1007b64, Func Offset: 0xc4
	// Line 414, Address: 0x1007b74, Func Offset: 0xd4
	// Line 415, Address: 0x1007b80, Func Offset: 0xe0
	// Line 417, Address: 0x1007b94, Func Offset: 0xf4
	// Line 420, Address: 0x1007ba4, Func Offset: 0x104
	// Line 422, Address: 0x1007bc0, Func Offset: 0x120
	// Line 426, Address: 0x1007bd4, Func Offset: 0x134
	// Line 427, Address: 0x1007c04, Func Offset: 0x164
	// Func End, Address: 0x1007c14, Func Offset: 0x174
}

// 
// Start address: 0x1007c20
void ufo_set()
{
	_anon1* pActwk;
	_anon3* pUoffset;
	_anon6 lD0;
	short i;
	short iD1;
	short iD5;
	short iD6;
	short iD7;
	short iNum;
	// Line 439, Address: 0x1007c20, Func Offset: 0
	// Line 447, Address: 0x1007c44, Func Offset: 0x24
	// Line 450, Address: 0x1007c5c, Func Offset: 0x3c
	// Line 451, Address: 0x1007c70, Func Offset: 0x50
	// Line 452, Address: 0x1007c7c, Func Offset: 0x5c
	// Line 453, Address: 0x1007c84, Func Offset: 0x64
	// Line 456, Address: 0x1007c9c, Func Offset: 0x7c
	// Line 457, Address: 0x1007cb0, Func Offset: 0x90
	// Line 458, Address: 0x1007cbc, Func Offset: 0x9c
	// Line 460, Address: 0x1007cc4, Func Offset: 0xa4
	// Line 462, Address: 0x1007ccc, Func Offset: 0xac
	// Line 463, Address: 0x1007cd8, Func Offset: 0xb8
	// Line 466, Address: 0x1007ce4, Func Offset: 0xc4
	// Line 467, Address: 0x1007cf4, Func Offset: 0xd4
	// Line 469, Address: 0x1007d08, Func Offset: 0xe8
	// Line 471, Address: 0x1007d14, Func Offset: 0xf4
	// Line 472, Address: 0x1007d24, Func Offset: 0x104
	// Line 473, Address: 0x1007d40, Func Offset: 0x120
	// Line 475, Address: 0x1007d60, Func Offset: 0x140
	// Line 476, Address: 0x1007d78, Func Offset: 0x158
	// Line 478, Address: 0x1007d84, Func Offset: 0x164
	// Line 480, Address: 0x1007d90, Func Offset: 0x170
	// Line 481, Address: 0x1007da0, Func Offset: 0x180
	// Line 483, Address: 0x1007dbc, Func Offset: 0x19c
	// Line 484, Address: 0x1007dd8, Func Offset: 0x1b8
	// Line 486, Address: 0x1007de4, Func Offset: 0x1c4
	// Line 488, Address: 0x1007df0, Func Offset: 0x1d0
	// Line 490, Address: 0x1007e04, Func Offset: 0x1e4
	// Line 491, Address: 0x1007e0c, Func Offset: 0x1ec
	// Line 492, Address: 0x1007e1c, Func Offset: 0x1fc
	// Line 493, Address: 0x1007e24, Func Offset: 0x204
	// Line 495, Address: 0x1007e2c, Func Offset: 0x20c
	// Line 496, Address: 0x1007e38, Func Offset: 0x218
	// Line 498, Address: 0x1007e44, Func Offset: 0x224
	// Line 499, Address: 0x1007e50, Func Offset: 0x230
	// Line 500, Address: 0x1007e58, Func Offset: 0x238
	// Line 502, Address: 0x1007e68, Func Offset: 0x248
	// Line 503, Address: 0x1007e74, Func Offset: 0x254
	// Line 504, Address: 0x1007e94, Func Offset: 0x274
	// Line 506, Address: 0x1007ea4, Func Offset: 0x284
	// Line 507, Address: 0x1007eb4, Func Offset: 0x294
	// Line 508, Address: 0x1007ec4, Func Offset: 0x2a4
	// Line 509, Address: 0x1007ee0, Func Offset: 0x2c0
	// Line 510, Address: 0x1007f04, Func Offset: 0x2e4
	// Line 513, Address: 0x1007f28, Func Offset: 0x308
	// Line 514, Address: 0x1007f3c, Func Offset: 0x31c
	// Line 515, Address: 0x1007f6c, Func Offset: 0x34c
	// Line 516, Address: 0x1007f94, Func Offset: 0x374
	// Line 517, Address: 0x1007f9c, Func Offset: 0x37c
	// Func End, Address: 0x1007fc8, Func Offset: 0x3a8
}

// 
// Start address: 0x1007fd0
void eggman_set()
{
	_anon1* pActwk;
	_anon6 lD0;
	short iD5;
	short iD6;
	short iD7;
	// Line 529, Address: 0x1007fd0, Func Offset: 0
	// Line 535, Address: 0x1007fe4, Func Offset: 0x14
	// Line 536, Address: 0x1007ffc, Func Offset: 0x2c
	// Line 537, Address: 0x1008010, Func Offset: 0x40
	// Line 539, Address: 0x100801c, Func Offset: 0x4c
	// Line 542, Address: 0x1008034, Func Offset: 0x64
	// Line 543, Address: 0x1008044, Func Offset: 0x74
	// Line 545, Address: 0x1008058, Func Offset: 0x88
	// Line 546, Address: 0x1008064, Func Offset: 0x94
	// Line 547, Address: 0x1008074, Func Offset: 0xa4
	// Line 548, Address: 0x10080a4, Func Offset: 0xd4
	// Line 551, Address: 0x10080b0, Func Offset: 0xe0
	// Line 553, Address: 0x10080c4, Func Offset: 0xf4
	// Line 554, Address: 0x10080cc, Func Offset: 0xfc
	// Line 555, Address: 0x10080dc, Func Offset: 0x10c
	// Line 556, Address: 0x10080e4, Func Offset: 0x114
	// Line 557, Address: 0x10080ec, Func Offset: 0x11c
	// Line 558, Address: 0x10080f8, Func Offset: 0x128
	// Line 559, Address: 0x1008104, Func Offset: 0x134
	// Line 560, Address: 0x1008114, Func Offset: 0x144
	// Line 562, Address: 0x1008120, Func Offset: 0x150
	// Line 563, Address: 0x100812c, Func Offset: 0x15c
	// Line 565, Address: 0x100813c, Func Offset: 0x16c
	// Line 566, Address: 0x100814c, Func Offset: 0x17c
	// Line 569, Address: 0x100815c, Func Offset: 0x18c
	// Line 570, Address: 0x1008164, Func Offset: 0x194
	// Func End, Address: 0x1008180, Func Offset: 0x1b0
}

// 
// Start address: 0x1008180
void metals_set()
{
	_anon1* pActwk;
	_anon6 lD0;
	short iD5;
	short iD6;
	short iD7;
	// Line 582, Address: 0x1008180, Func Offset: 0
	// Line 588, Address: 0x1008194, Func Offset: 0x14
	// Line 589, Address: 0x10081ac, Func Offset: 0x2c
	// Line 590, Address: 0x10081c0, Func Offset: 0x40
	// Line 592, Address: 0x10081cc, Func Offset: 0x4c
	// Line 595, Address: 0x10081e4, Func Offset: 0x64
	// Line 596, Address: 0x10081f4, Func Offset: 0x74
	// Line 598, Address: 0x1008224, Func Offset: 0xa4
	// Line 599, Address: 0x1008234, Func Offset: 0xb4
	// Line 601, Address: 0x1008240, Func Offset: 0xc0
	// Line 605, Address: 0x100824c, Func Offset: 0xcc
	// Line 607, Address: 0x1008260, Func Offset: 0xe0
	// Line 608, Address: 0x1008268, Func Offset: 0xe8
	// Line 609, Address: 0x1008278, Func Offset: 0xf8
	// Line 610, Address: 0x1008280, Func Offset: 0x100
	// Line 611, Address: 0x1008288, Func Offset: 0x108
	// Line 612, Address: 0x1008294, Func Offset: 0x114
	// Line 613, Address: 0x10082a0, Func Offset: 0x120
	// Line 614, Address: 0x10082ac, Func Offset: 0x12c
	// Line 615, Address: 0x10082b8, Func Offset: 0x138
	// Line 617, Address: 0x10082c8, Func Offset: 0x148
	// Line 619, Address: 0x10082d4, Func Offset: 0x154
	// Line 621, Address: 0x10082f0, Func Offset: 0x170
	// Line 622, Address: 0x1008300, Func Offset: 0x180
	// Line 625, Address: 0x1008324, Func Offset: 0x1a4
	// Line 627, Address: 0x1008340, Func Offset: 0x1c0
	// Line 628, Address: 0x1008350, Func Offset: 0x1d0
	// Line 631, Address: 0x1008374, Func Offset: 0x1f4
	// Line 632, Address: 0x100837c, Func Offset: 0x1fc
	// Func End, Address: 0x1008398, Func Offset: 0x218
}

// 
// Start address: 0x10083a0
void tails_set()
{
	_anon1* pActwk;
	_anon6 lD0;
	short iD5;
	short iD6;
	short iD7;
	// Line 644, Address: 0x10083a0, Func Offset: 0
	// Line 650, Address: 0x10083b4, Func Offset: 0x14
	// Line 651, Address: 0x10083cc, Func Offset: 0x2c
	// Line 652, Address: 0x10083e0, Func Offset: 0x40
	// Line 654, Address: 0x10083ec, Func Offset: 0x4c
	// Line 657, Address: 0x1008404, Func Offset: 0x64
	// Line 658, Address: 0x1008414, Func Offset: 0x74
	// Line 660, Address: 0x1008428, Func Offset: 0x88
	// Line 662, Address: 0x1008434, Func Offset: 0x94
	// Line 663, Address: 0x1008444, Func Offset: 0xa4
	// Line 664, Address: 0x1008464, Func Offset: 0xc4
	// Line 667, Address: 0x1008470, Func Offset: 0xd0
	// Line 669, Address: 0x1008484, Func Offset: 0xe4
	// Line 670, Address: 0x100848c, Func Offset: 0xec
	// Line 671, Address: 0x100849c, Func Offset: 0xfc
	// Line 672, Address: 0x10084a4, Func Offset: 0x104
	// Line 673, Address: 0x10084ac, Func Offset: 0x10c
	// Line 674, Address: 0x10084b8, Func Offset: 0x118
	// Line 675, Address: 0x10084c4, Func Offset: 0x124
	// Line 676, Address: 0x10084d0, Func Offset: 0x130
	// Line 678, Address: 0x10084d8, Func Offset: 0x138
	// Line 679, Address: 0x10084e4, Func Offset: 0x144
	// Line 681, Address: 0x10084f4, Func Offset: 0x154
	// Line 682, Address: 0x1008504, Func Offset: 0x164
	// Line 683, Address: 0x1008528, Func Offset: 0x188
	// Line 686, Address: 0x100854c, Func Offset: 0x1ac
	// Line 687, Address: 0x1008554, Func Offset: 0x1b4
	// Func End, Address: 0x1008570, Func Offset: 0x1d0
}

