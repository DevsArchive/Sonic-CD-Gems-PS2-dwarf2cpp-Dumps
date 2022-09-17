typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_0)(_anon1*);
typedef void(*type_4)(_anon1*);
typedef void(*type_7)(_anon1*);
typedef void(*type_9)(_anon1*);
typedef void(*type_11)(_anon1*);
typedef void(*type_13)(_anon1*);

typedef void(*type_1)(_anon1*)[4];
typedef _anon0 type_2[2];
typedef _anon3 type_3[10];
typedef void(*type_5)(_anon1*)[4];
typedef _anon1 type_6[18];
typedef void(*type_8)(_anon1*)[2];
typedef void(*type_10)(_anon1*)[4];
typedef void(*type_12)(_anon1*)[5];
typedef void(*type_14)(_anon1*)[2];

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
	_anon5 XPOSI;
	_anon5 YPOSI;
	_anon5 X_SPEED;
	_anon5 Y_SPEED;
	_anon5 X_ACCEL;
	_anon5 Y_ACCEL;
	short X_OFFSET;
	short Y_OFFSET;
	short SIN_CNT;
	short TM_CNT;
	short SPR_TIMER;
	short PAT_NO;
	short CGBASE;
	_anon4* PAT_ADR;
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
	short timer;
	_anon2* paMapTbl;
};

struct _anon4
{
	short patnum;
	_anon3 aPatDat[10];
};

union _anon5
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct _anon6
{
	short l;
	short h;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

unsigned char actset_flg;
_anon1 actwk[18];
unsigned char music_selflg;
void(*flicky_acttbl)(_anon1*)[4];
_anon4 flicky_tbl1;
_anon4 flicky_tbl2;
_anon4 flicky_tbl3;
void(*star_acttbl)(_anon1*)[2];
_anon4 star_tbl;
void(*ufo_acttbl)(_anon1*)[4];
_anon4 ufo_tbl;
_anon4 ufo_tbl1;
_anon4 ufo_tbl2;
void(*eggm_acttbl)(_anon1*)[2];
_anon4 eggm_tbl;
_anon4 eggm_tbl2;
void(*msnc_acttbl)(_anon1*)[5];
_anon4 msnc_tbl;
_anon4 msnc_tbl2;
void(*tails_acttbl)(_anon1*)[4];
_anon4 tails_tbl;
_anon4 tails_up_tbl;
_anon4 tails_down_tbl;

void spr_kill(_anon1* pActwk);
void spr_kills(_anon1* pActwk);
short killchk(_anon1* pActwk);
short chk_another(unsigned short wD0, _anon1* pActwk, _anon1** ppActwk);
void sinmove(_anon1* pActwk);
void flicky_ctrl(_anon1* pActwk);
void flickyinit(_anon1* pActwk);
void flickymove(_anon1* pActwk);
void flickyslow(_anon1* pActwk);
void flickydown(_anon1* pActwk);
void fnormalmove(_anon1* pActwk);
void fslowmove(_anon1* pActwk);
void fdownmove(_anon1* pActwk);
void star_ctrl(_anon1* pActwk);
void starinit(_anon1* pActwk);
void starmove(_anon1* pActwk);
void ufo_ctrl(_anon1* pActwk);
void ufoinit(_anon1* pActwk);
void ufomode(_anon1* pActwk);
void uendset(_anon1* pActwk);
void umset1(_anon1* pActwk);
void umset2(_anon1* pActwk);
void ufomove2(_anon1* pActwk);
void ufomove1(_anon1* pActwk);
void eggm_ctrl(_anon1* pActwk);
void eggminit(_anon1* pActwk);
void eggmmove(_anon1* pActwk);
void msnc_ctrl(_anon1* pActwk);
void msncinit(_anon1* pActwk);
void msncstart(_anon1* pActwk);
void msncfloat(_anon1* pActwk);
void msncdush(_anon1* pActwk);
void msncexit(_anon1* pActwk);
void tails_ctrl(_anon1* pActwk);
void tailsinit(_anon1* pActwk);
void tailsmove(_anon1* pActwk);
void tsset1(_anon1* pActwk);
void tsset2(_anon1* pActwk);
void tailsmove1(_anon1* pActwk);

// 
// Start address: 0x10010f0
void spr_kill(_anon1* pActwk)
{
	// Line 84, Address: 0x10010f0, Func Offset: 0
	// Line 85, Address: 0x10010f8, Func Offset: 0x8
	// Line 86, Address: 0x1001114, Func Offset: 0x24
	// Line 87, Address: 0x1001124, Func Offset: 0x34
	// Func End, Address: 0x1001130, Func Offset: 0x40
}

// 
// Start address: 0x1001130
void spr_kills(_anon1* pActwk)
{
	short i;
	unsigned short wD0;
	// Line 99, Address: 0x1001130, Func Offset: 0
	// Line 103, Address: 0x1001140, Func Offset: 0x10
	// Line 104, Address: 0x100114c, Func Offset: 0x1c
	// Line 105, Address: 0x1001154, Func Offset: 0x24
	// Line 106, Address: 0x1001164, Func Offset: 0x34
	// Line 108, Address: 0x1001170, Func Offset: 0x40
	// Line 110, Address: 0x10011a4, Func Offset: 0x74
	// Line 111, Address: 0x10011c4, Func Offset: 0x94
	// Line 112, Address: 0x10011e0, Func Offset: 0xb0
	// Func End, Address: 0x10011f4, Func Offset: 0xc4
}

// 
// Start address: 0x1001200
short killchk(_anon1* pActwk)
{
	// Line 125, Address: 0x1001200, Func Offset: 0
	// Line 126, Address: 0x1001208, Func Offset: 0x8
	// Line 127, Address: 0x1001224, Func Offset: 0x24
	// Line 128, Address: 0x1001230, Func Offset: 0x30
	// Line 129, Address: 0x100124c, Func Offset: 0x4c
	// Line 130, Address: 0x1001258, Func Offset: 0x58
	// Line 131, Address: 0x1001274, Func Offset: 0x74
	// Line 132, Address: 0x1001280, Func Offset: 0x80
	// Line 133, Address: 0x100129c, Func Offset: 0x9c
	// Line 135, Address: 0x10012a8, Func Offset: 0xa8
	// Line 136, Address: 0x10012ac, Func Offset: 0xac
	// Func End, Address: 0x10012b8, Func Offset: 0xb8
}

// 
// Start address: 0x10012c0
short chk_another(unsigned short wD0, _anon1* pActwk, _anon1** ppActwk)
{
	short i;
	_anon1* pActfind;
	// Line 151, Address: 0x10012c0, Func Offset: 0
	// Line 155, Address: 0x10012d8, Func Offset: 0x18
	// Line 156, Address: 0x10012e0, Func Offset: 0x20
	// Line 158, Address: 0x10012ec, Func Offset: 0x2c
	// Line 159, Address: 0x1001304, Func Offset: 0x44
	// Line 161, Address: 0x1001358, Func Offset: 0x98
	// Line 162, Address: 0x1001360, Func Offset: 0xa0
	// Line 164, Address: 0x100136c, Func Offset: 0xac
	// Line 165, Address: 0x1001390, Func Offset: 0xd0
	// Line 166, Address: 0x1001394, Func Offset: 0xd4
	// Func End, Address: 0x10013a8, Func Offset: 0xe8
}

// 
// Start address: 0x10013b0
void sinmove(_anon1* pActwk)
{
	short iD0;
	short iD3;
	_anon5 lD0;
	_anon5 lD3;
	// Line 178, Address: 0x10013b0, Func Offset: 0
	// Line 182, Address: 0x10013c4, Func Offset: 0x14
	// Line 184, Address: 0x10013e0, Func Offset: 0x30
	// Line 185, Address: 0x10013ec, Func Offset: 0x3c
	// Line 188, Address: 0x10013f4, Func Offset: 0x44
	// Line 190, Address: 0x100140c, Func Offset: 0x5c
	// Line 191, Address: 0x1001424, Func Offset: 0x74
	// Line 192, Address: 0x1001434, Func Offset: 0x84
	// Line 193, Address: 0x100144c, Func Offset: 0x9c
	// Line 194, Address: 0x1001458, Func Offset: 0xa8
	// Line 195, Address: 0x1001464, Func Offset: 0xb4
	// Line 197, Address: 0x1001478, Func Offset: 0xc8
	// Line 198, Address: 0x1001488, Func Offset: 0xd8
	// Line 199, Address: 0x10014bc, Func Offset: 0x10c
	// Line 200, Address: 0x10014d0, Func Offset: 0x120
	// Line 201, Address: 0x10014ec, Func Offset: 0x13c
	// Line 203, Address: 0x10014fc, Func Offset: 0x14c
	// Line 204, Address: 0x1001508, Func Offset: 0x158
	// Line 205, Address: 0x100151c, Func Offset: 0x16c
	// Line 206, Address: 0x1001528, Func Offset: 0x178
	// Line 208, Address: 0x100153c, Func Offset: 0x18c
	// Line 209, Address: 0x1001554, Func Offset: 0x1a4
	// Func End, Address: 0x100156c, Func Offset: 0x1bc
}

// 
// Start address: 0x1001570
void flicky_ctrl(_anon1* pActwk)
{
	// Line 228, Address: 0x1001570, Func Offset: 0
	// Line 229, Address: 0x100157c, Func Offset: 0xc
	// Line 230, Address: 0x10015a8, Func Offset: 0x38
	// Func End, Address: 0x10015b8, Func Offset: 0x48
}

// 
// Start address: 0x10015c0
void flickyinit(_anon1* pActwk)
{
	// Line 242, Address: 0x10015c0, Func Offset: 0
	// Line 243, Address: 0x10015c8, Func Offset: 0x8
	// Line 244, Address: 0x10015d8, Func Offset: 0x18
	// Line 246, Address: 0x10015e0, Func Offset: 0x20
	// Line 247, Address: 0x10015e8, Func Offset: 0x28
	// Line 249, Address: 0x10015f0, Func Offset: 0x30
	// Line 251, Address: 0x1001608, Func Offset: 0x48
	// Line 252, Address: 0x1001614, Func Offset: 0x54
	// Line 255, Address: 0x100161c, Func Offset: 0x5c
	// Line 257, Address: 0x1001634, Func Offset: 0x74
	// Line 258, Address: 0x1001640, Func Offset: 0x80
	// Line 260, Address: 0x1001648, Func Offset: 0x88
	// Line 261, Address: 0x1001654, Func Offset: 0x94
	// Func End, Address: 0x1001660, Func Offset: 0xa0
}

// 
// Start address: 0x1001660
void flickymove(_anon1* pActwk)
{
	// Line 273, Address: 0x1001660, Func Offset: 0
	// Line 274, Address: 0x100166c, Func Offset: 0xc
	// Line 276, Address: 0x1001688, Func Offset: 0x28
	// Line 277, Address: 0x1001694, Func Offset: 0x34
	// Line 279, Address: 0x100169c, Func Offset: 0x3c
	// Line 280, Address: 0x10016a8, Func Offset: 0x48
	// Func End, Address: 0x10016b8, Func Offset: 0x58
}

// 
// Start address: 0x10016c0
void flickyslow(_anon1* pActwk)
{
	// Line 292, Address: 0x10016c0, Func Offset: 0
	// Line 293, Address: 0x10016cc, Func Offset: 0xc
	// Line 295, Address: 0x10016e8, Func Offset: 0x28
	// Line 296, Address: 0x10016f4, Func Offset: 0x34
	// Line 298, Address: 0x10016fc, Func Offset: 0x3c
	// Line 299, Address: 0x1001708, Func Offset: 0x48
	// Line 300, Address: 0x1001714, Func Offset: 0x54
	// Func End, Address: 0x1001724, Func Offset: 0x64
}

// 
// Start address: 0x1001730
void flickydown(_anon1* pActwk)
{
	// Line 312, Address: 0x1001730, Func Offset: 0
	// Line 313, Address: 0x100173c, Func Offset: 0xc
	// Line 315, Address: 0x1001758, Func Offset: 0x28
	// Line 316, Address: 0x1001764, Func Offset: 0x34
	// Line 318, Address: 0x100176c, Func Offset: 0x3c
	// Line 319, Address: 0x1001778, Func Offset: 0x48
	// Line 320, Address: 0x1001784, Func Offset: 0x54
	// Func End, Address: 0x1001794, Func Offset: 0x64
}

// 
// Start address: 0x10017a0
void fnormalmove(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD3;
	// Line 332, Address: 0x10017a0, Func Offset: 0
	// Line 335, Address: 0x10017ac, Func Offset: 0xc
	// Line 337, Address: 0x10017c4, Func Offset: 0x24
	// Line 341, Address: 0x10017d4, Func Offset: 0x34
	// Line 343, Address: 0x10017ec, Func Offset: 0x4c
	// Line 344, Address: 0x1001800, Func Offset: 0x60
	// Line 345, Address: 0x1001814, Func Offset: 0x74
	// Line 346, Address: 0x1001820, Func Offset: 0x80
	// Line 347, Address: 0x100182c, Func Offset: 0x8c
	// Line 349, Address: 0x1001840, Func Offset: 0xa0
	// Line 350, Address: 0x1001850, Func Offset: 0xb0
	// Line 351, Address: 0x100186c, Func Offset: 0xcc
	// Line 352, Address: 0x1001880, Func Offset: 0xe0
	// Line 353, Address: 0x100189c, Func Offset: 0xfc
	// Line 355, Address: 0x10018ac, Func Offset: 0x10c
	// Line 356, Address: 0x10018b8, Func Offset: 0x118
	// Line 357, Address: 0x10018cc, Func Offset: 0x12c
	// Line 359, Address: 0x10018d8, Func Offset: 0x138
	// Line 360, Address: 0x10018ec, Func Offset: 0x14c
	// Line 361, Address: 0x10018f8, Func Offset: 0x158
	// Line 362, Address: 0x100190c, Func Offset: 0x16c
	// Func End, Address: 0x100191c, Func Offset: 0x17c
}

// 
// Start address: 0x1001920
void fslowmove(_anon1* pActwk)
{
	short iD0;
	_anon1* pActflicky;
	// Line 374, Address: 0x1001920, Func Offset: 0
	// Line 379, Address: 0x1001930, Func Offset: 0x10
	// Line 382, Address: 0x1001958, Func Offset: 0x38
	// Line 383, Address: 0x100198c, Func Offset: 0x6c
	// Line 384, Address: 0x100199c, Func Offset: 0x7c
	// Line 386, Address: 0x10019b8, Func Offset: 0x98
	// Line 389, Address: 0x10019cc, Func Offset: 0xac
	// Line 390, Address: 0x10019dc, Func Offset: 0xbc
	// Line 391, Address: 0x10019e4, Func Offset: 0xc4
	// Line 392, Address: 0x10019f4, Func Offset: 0xd4
	// Line 394, Address: 0x1001a08, Func Offset: 0xe8
	// Line 395, Address: 0x1001a14, Func Offset: 0xf4
	// Line 397, Address: 0x1001a1c, Func Offset: 0xfc
	// Line 399, Address: 0x1001a30, Func Offset: 0x110
	// Line 400, Address: 0x1001a40, Func Offset: 0x120
	// Line 401, Address: 0x1001a48, Func Offset: 0x128
	// Line 402, Address: 0x1001a58, Func Offset: 0x138
	// Line 404, Address: 0x1001a70, Func Offset: 0x150
	// Line 406, Address: 0x1001a7c, Func Offset: 0x15c
	// Func End, Address: 0x1001a90, Func Offset: 0x170
}

// 
// Start address: 0x1001a90
void fdownmove(_anon1* pActwk)
{
	short iD0;
	_anon1* pActflicky;
	// Line 418, Address: 0x1001a90, Func Offset: 0
	// Line 423, Address: 0x1001aa0, Func Offset: 0x10
	// Line 426, Address: 0x1001ac8, Func Offset: 0x38
	// Line 427, Address: 0x1001afc, Func Offset: 0x6c
	// Line 428, Address: 0x1001b0c, Func Offset: 0x7c
	// Line 430, Address: 0x1001b10, Func Offset: 0x80
	// Line 433, Address: 0x1001b24, Func Offset: 0x94
	// Line 434, Address: 0x1001b34, Func Offset: 0xa4
	// Line 435, Address: 0x1001b3c, Func Offset: 0xac
	// Line 436, Address: 0x1001b4c, Func Offset: 0xbc
	// Line 438, Address: 0x1001b54, Func Offset: 0xc4
	// Line 440, Address: 0x1001b68, Func Offset: 0xd8
	// Line 441, Address: 0x1001b78, Func Offset: 0xe8
	// Line 442, Address: 0x1001b80, Func Offset: 0xf0
	// Line 444, Address: 0x1001b8c, Func Offset: 0xfc
	// Func End, Address: 0x1001ba0, Func Offset: 0x110
}

// 
// Start address: 0x1001ba0
void star_ctrl(_anon1* pActwk)
{
	// Line 462, Address: 0x1001ba0, Func Offset: 0
	// Line 463, Address: 0x1001bac, Func Offset: 0xc
	// Line 464, Address: 0x1001bd8, Func Offset: 0x38
	// Func End, Address: 0x1001be8, Func Offset: 0x48
}

// 
// Start address: 0x1001bf0
void starinit(_anon1* pActwk)
{
	// Line 476, Address: 0x1001bf0, Func Offset: 0
	// Line 477, Address: 0x1001bf8, Func Offset: 0x8
	// Line 478, Address: 0x1001c08, Func Offset: 0x18
	// Line 479, Address: 0x1001c10, Func Offset: 0x20
	// Line 480, Address: 0x1001c20, Func Offset: 0x30
	// Line 482, Address: 0x1001c30, Func Offset: 0x40
	// Line 483, Address: 0x1001c38, Func Offset: 0x48
	// Line 484, Address: 0x1001c40, Func Offset: 0x50
	// Line 485, Address: 0x1001c4c, Func Offset: 0x5c
	// Func End, Address: 0x1001c58, Func Offset: 0x68
}

// 
// Start address: 0x1001c60
void starmove(_anon1* pActwk)
{
	_anon5 lD0;
	// Line 497, Address: 0x1001c60, Func Offset: 0
	// Line 500, Address: 0x1001c6c, Func Offset: 0xc
	// Line 502, Address: 0x1001c88, Func Offset: 0x28
	// Line 503, Address: 0x1001c94, Func Offset: 0x34
	// Line 506, Address: 0x1001c9c, Func Offset: 0x3c
	// Line 507, Address: 0x1001cac, Func Offset: 0x4c
	// Line 508, Address: 0x1001cc8, Func Offset: 0x68
	// Line 509, Address: 0x1001cdc, Func Offset: 0x7c
	// Line 510, Address: 0x1001cf8, Func Offset: 0x98
	// Line 511, Address: 0x1001d08, Func Offset: 0xa8
	// Line 512, Address: 0x1001d20, Func Offset: 0xc0
	// Line 513, Address: 0x1001d38, Func Offset: 0xd8
	// Func End, Address: 0x1001d48, Func Offset: 0xe8
}

// 
// Start address: 0x1001d50
void ufo_ctrl(_anon1* pActwk)
{
	// Line 533, Address: 0x1001d50, Func Offset: 0
	// Line 534, Address: 0x1001d5c, Func Offset: 0xc
	// Line 535, Address: 0x1001d88, Func Offset: 0x38
	// Func End, Address: 0x1001d98, Func Offset: 0x48
}

// 
// Start address: 0x1001da0
void ufoinit(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	// Line 547, Address: 0x1001da0, Func Offset: 0
	// Line 550, Address: 0x1001dac, Func Offset: 0xc
	// Line 551, Address: 0x1001dbc, Func Offset: 0x1c
	// Line 552, Address: 0x1001dc4, Func Offset: 0x24
	// Line 553, Address: 0x1001dd4, Func Offset: 0x34
	// Line 555, Address: 0x1001de4, Func Offset: 0x44
	// Line 556, Address: 0x1001dec, Func Offset: 0x4c
	// Line 557, Address: 0x1001df4, Func Offset: 0x54
	// Line 558, Address: 0x1001e04, Func Offset: 0x64
	// Line 559, Address: 0x1001e0c, Func Offset: 0x6c
	// Line 560, Address: 0x1001e2c, Func Offset: 0x8c
	// Line 564, Address: 0x1001e3c, Func Offset: 0x9c
	// Line 565, Address: 0x1001e68, Func Offset: 0xc8
	// Line 567, Address: 0x1001e78, Func Offset: 0xd8
	// Line 568, Address: 0x1001e84, Func Offset: 0xe4
	// Func End, Address: 0x1001e94, Func Offset: 0xf4
}

// 
// Start address: 0x1001ea0
void ufomode(_anon1* pActwk)
{
	// Line 580, Address: 0x1001ea0, Func Offset: 0
	// Line 581, Address: 0x1001eac, Func Offset: 0xc
	// Line 583, Address: 0x1001ec4, Func Offset: 0x24
	// Line 584, Address: 0x1001ed0, Func Offset: 0x30
	// Line 587, Address: 0x1001ed8, Func Offset: 0x38
	// Line 588, Address: 0x1001ee4, Func Offset: 0x44
	// Line 590, Address: 0x1001ef0, Func Offset: 0x50
	// Line 591, Address: 0x1001f10, Func Offset: 0x70
	// Line 592, Address: 0x1001f20, Func Offset: 0x80
	// Func End, Address: 0x1001f30, Func Offset: 0x90
}

// 
// Start address: 0x1001f30
void uendset(_anon1* pActwk)
{
	short iD1;
	_anon5 lD0;
	// Line 604, Address: 0x1001f30, Func Offset: 0
	// Line 608, Address: 0x1001f40, Func Offset: 0x10
	// Line 609, Address: 0x1001f50, Func Offset: 0x20
	// Line 611, Address: 0x1001f80, Func Offset: 0x50
	// Line 612, Address: 0x1001f98, Func Offset: 0x68
	// Line 614, Address: 0x1001fd0, Func Offset: 0xa0
	// Line 615, Address: 0x1002000, Func Offset: 0xd0
	// Line 616, Address: 0x1002008, Func Offset: 0xd8
	// Func End, Address: 0x100201c, Func Offset: 0xec
}

// 
// Start address: 0x1002020
void umset1(_anon1* pActwk)
{
	// Line 628, Address: 0x1002020, Func Offset: 0
	// Line 629, Address: 0x1002028, Func Offset: 0x8
	// Line 630, Address: 0x1002034, Func Offset: 0x14
	// Line 631, Address: 0x100203c, Func Offset: 0x1c
	// Line 632, Address: 0x1002044, Func Offset: 0x24
	// Line 633, Address: 0x1002054, Func Offset: 0x34
	// Line 634, Address: 0x100205c, Func Offset: 0x3c
	// Line 635, Address: 0x1002068, Func Offset: 0x48
	// Func End, Address: 0x1002074, Func Offset: 0x54
}

// 
// Start address: 0x1002080
void umset2(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	_anon5 lD7;
	// Line 647, Address: 0x1002080, Func Offset: 0
	// Line 650, Address: 0x100208c, Func Offset: 0xc
	// Line 651, Address: 0x1002098, Func Offset: 0x18
	// Line 652, Address: 0x10020a8, Func Offset: 0x28
	// Line 653, Address: 0x10020b0, Func Offset: 0x30
	// Line 654, Address: 0x10020dc, Func Offset: 0x5c
	// Line 655, Address: 0x10020e0, Func Offset: 0x60
	// Line 656, Address: 0x10020ec, Func Offset: 0x6c
	// Line 657, Address: 0x10020fc, Func Offset: 0x7c
	// Line 659, Address: 0x1002108, Func Offset: 0x88
	// Line 660, Address: 0x1002120, Func Offset: 0xa0
	// Line 662, Address: 0x1002144, Func Offset: 0xc4
	// Line 663, Address: 0x1002150, Func Offset: 0xd0
	// Line 664, Address: 0x100216c, Func Offset: 0xec
	// Line 665, Address: 0x1002170, Func Offset: 0xf0
	// Line 666, Address: 0x100217c, Func Offset: 0xfc
	// Line 667, Address: 0x1002188, Func Offset: 0x108
	// Line 669, Address: 0x1002198, Func Offset: 0x118
	// Line 670, Address: 0x10021a8, Func Offset: 0x128
	// Line 672, Address: 0x10021c4, Func Offset: 0x144
	// Line 675, Address: 0x10021d0, Func Offset: 0x150
	// Line 676, Address: 0x10021f4, Func Offset: 0x174
	// Line 678, Address: 0x1002214, Func Offset: 0x194
	// Line 679, Address: 0x1002224, Func Offset: 0x1a4
	// Line 680, Address: 0x100222c, Func Offset: 0x1ac
	// Line 684, Address: 0x1002234, Func Offset: 0x1b4
	// Line 686, Address: 0x1002254, Func Offset: 0x1d4
	// Line 687, Address: 0x1002264, Func Offset: 0x1e4
	// Line 689, Address: 0x100226c, Func Offset: 0x1ec
	// Func End, Address: 0x100227c, Func Offset: 0x1fc
}

// 
// Start address: 0x1002280
void ufomove2(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	// Line 701, Address: 0x1002280, Func Offset: 0
	// Line 704, Address: 0x100228c, Func Offset: 0xc
	// Line 706, Address: 0x10022a8, Func Offset: 0x28
	// Line 707, Address: 0x10022b4, Func Offset: 0x34
	// Line 709, Address: 0x10022bc, Func Offset: 0x3c
	// Line 710, Address: 0x10022c8, Func Offset: 0x48
	// Line 711, Address: 0x10022dc, Func Offset: 0x5c
	// Line 713, Address: 0x10022e8, Func Offset: 0x68
	// Line 714, Address: 0x10022fc, Func Offset: 0x7c
	// Line 716, Address: 0x1002308, Func Offset: 0x88
	// Line 718, Address: 0x1002318, Func Offset: 0x98
	// Line 719, Address: 0x1002360, Func Offset: 0xe0
	// Line 720, Address: 0x100236c, Func Offset: 0xec
	// Line 723, Address: 0x1002374, Func Offset: 0xf4
	// Line 724, Address: 0x10023bc, Func Offset: 0x13c
	// Line 728, Address: 0x10023c8, Func Offset: 0x148
	// Line 731, Address: 0x10023e0, Func Offset: 0x160
	// Line 733, Address: 0x10023ec, Func Offset: 0x16c
	// Line 735, Address: 0x10023fc, Func Offset: 0x17c
	// Line 736, Address: 0x1002444, Func Offset: 0x1c4
	// Line 737, Address: 0x1002450, Func Offset: 0x1d0
	// Line 740, Address: 0x1002458, Func Offset: 0x1d8
	// Line 741, Address: 0x10024a0, Func Offset: 0x220
	// Line 743, Address: 0x10024ac, Func Offset: 0x22c
	// Func End, Address: 0x10024bc, Func Offset: 0x23c
}

// 
// Start address: 0x10024c0
void ufomove1(_anon1* pActwk)
{
	// Line 755, Address: 0x10024c0, Func Offset: 0
	// Line 756, Address: 0x10024cc, Func Offset: 0xc
	// Line 757, Address: 0x10024e4, Func Offset: 0x24
	// Line 759, Address: 0x10024f8, Func Offset: 0x38
	// Line 761, Address: 0x1002504, Func Offset: 0x44
	// Line 763, Address: 0x1002510, Func Offset: 0x50
	// Line 764, Address: 0x1002520, Func Offset: 0x60
	// Line 765, Address: 0x1002534, Func Offset: 0x74
	// Line 766, Address: 0x1002540, Func Offset: 0x80
	// Func End, Address: 0x1002550, Func Offset: 0x90
}

// 
// Start address: 0x1002550
void eggm_ctrl(_anon1* pActwk)
{
	// Line 783, Address: 0x1002550, Func Offset: 0
	// Line 784, Address: 0x100255c, Func Offset: 0xc
	// Line 785, Address: 0x1002588, Func Offset: 0x38
	// Func End, Address: 0x1002598, Func Offset: 0x48
}

// 
// Start address: 0x10025a0
void eggminit(_anon1* pActwk)
{
	// Line 797, Address: 0x10025a0, Func Offset: 0
	// Line 798, Address: 0x10025a8, Func Offset: 0x8
	// Line 799, Address: 0x10025b8, Func Offset: 0x18
	// Line 800, Address: 0x10025c0, Func Offset: 0x20
	// Line 801, Address: 0x10025d0, Func Offset: 0x30
	// Line 803, Address: 0x10025e0, Func Offset: 0x40
	// Line 804, Address: 0x10025e8, Func Offset: 0x48
	// Line 805, Address: 0x10025f0, Func Offset: 0x50
	// Line 806, Address: 0x10025fc, Func Offset: 0x5c
	// Line 807, Address: 0x1002608, Func Offset: 0x68
	// Func End, Address: 0x1002614, Func Offset: 0x74
}

// 
// Start address: 0x1002620
void eggmmove(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	// Line 819, Address: 0x1002620, Func Offset: 0
	// Line 822, Address: 0x100262c, Func Offset: 0xc
	// Line 824, Address: 0x1002640, Func Offset: 0x20
	// Line 826, Address: 0x1002660, Func Offset: 0x40
	// Line 827, Address: 0x100266c, Func Offset: 0x4c
	// Line 829, Address: 0x1002674, Func Offset: 0x54
	// Line 832, Address: 0x1002684, Func Offset: 0x64
	// Line 833, Address: 0x1002694, Func Offset: 0x74
	// Line 834, Address: 0x100269c, Func Offset: 0x7c
	// Line 835, Address: 0x10026c8, Func Offset: 0xa8
	// Line 837, Address: 0x10026dc, Func Offset: 0xbc
	// Line 838, Address: 0x100270c, Func Offset: 0xec
	// Line 839, Address: 0x100271c, Func Offset: 0xfc
	// Line 842, Address: 0x100272c, Func Offset: 0x10c
	// Line 843, Address: 0x1002738, Func Offset: 0x118
	// Func End, Address: 0x1002748, Func Offset: 0x128
}

// 
// Start address: 0x1002750
void msnc_ctrl(_anon1* pActwk)
{
	// Line 863, Address: 0x1002750, Func Offset: 0
	// Line 864, Address: 0x100275c, Func Offset: 0xc
	// Line 865, Address: 0x1002788, Func Offset: 0x38
	// Func End, Address: 0x1002798, Func Offset: 0x48
}

// 
// Start address: 0x10027a0
void msncinit(_anon1* pActwk)
{
	// Line 877, Address: 0x10027a0, Func Offset: 0
	// Line 878, Address: 0x10027a8, Func Offset: 0x8
	// Line 879, Address: 0x10027b8, Func Offset: 0x18
	// Line 880, Address: 0x10027c0, Func Offset: 0x20
	// Line 881, Address: 0x10027d0, Func Offset: 0x30
	// Line 882, Address: 0x10027e0, Func Offset: 0x40
	// Line 883, Address: 0x10027ec, Func Offset: 0x4c
	// Func End, Address: 0x10027f8, Func Offset: 0x58
}

// 
// Start address: 0x1002800
void msncstart(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	// Line 895, Address: 0x1002800, Func Offset: 0
	// Line 898, Address: 0x100280c, Func Offset: 0xc
	// Line 900, Address: 0x1002828, Func Offset: 0x28
	// Line 901, Address: 0x1002834, Func Offset: 0x34
	// Line 903, Address: 0x100283c, Func Offset: 0x3c
	// Line 904, Address: 0x1002848, Func Offset: 0x48
	// Line 905, Address: 0x1002854, Func Offset: 0x54
	// Line 907, Address: 0x1002868, Func Offset: 0x68
	// Line 908, Address: 0x1002874, Func Offset: 0x74
	// Line 909, Address: 0x100287c, Func Offset: 0x7c
	// Line 910, Address: 0x1002894, Func Offset: 0x94
	// Line 911, Address: 0x10028b8, Func Offset: 0xb8
	// Line 912, Address: 0x10028c4, Func Offset: 0xc4
	// Line 915, Address: 0x10028cc, Func Offset: 0xcc
	// Line 916, Address: 0x10028e0, Func Offset: 0xe0
	// Line 917, Address: 0x10028f4, Func Offset: 0xf4
	// Line 919, Address: 0x100290c, Func Offset: 0x10c
	// Line 921, Address: 0x1002928, Func Offset: 0x128
	// Line 922, Address: 0x1002934, Func Offset: 0x134
	// Line 924, Address: 0x100293c, Func Offset: 0x13c
	// Line 928, Address: 0x1002944, Func Offset: 0x144
	// Line 930, Address: 0x1002960, Func Offset: 0x160
	// Line 931, Address: 0x100296c, Func Offset: 0x16c
	// Line 935, Address: 0x1002974, Func Offset: 0x174
	// Line 937, Address: 0x100298c, Func Offset: 0x18c
	// Line 939, Address: 0x10029a8, Func Offset: 0x1a8
	// Line 940, Address: 0x10029b4, Func Offset: 0x1b4
	// Line 942, Address: 0x10029bc, Func Offset: 0x1bc
	// Line 945, Address: 0x10029c4, Func Offset: 0x1c4
	// Line 947, Address: 0x10029e0, Func Offset: 0x1e0
	// Line 948, Address: 0x10029ec, Func Offset: 0x1ec
	// Line 952, Address: 0x10029f4, Func Offset: 0x1f4
	// Line 953, Address: 0x1002a10, Func Offset: 0x210
	// Line 954, Address: 0x1002a2c, Func Offset: 0x22c
	// Line 955, Address: 0x1002a38, Func Offset: 0x238
	// Line 956, Address: 0x1002a44, Func Offset: 0x244
	// Line 957, Address: 0x1002a50, Func Offset: 0x250
	// Func End, Address: 0x1002a60, Func Offset: 0x260
}

// 
// Start address: 0x1002a60
void msncfloat(_anon1* pActwk)
{
	_anon5 lD0;
	// Line 969, Address: 0x1002a60, Func Offset: 0
	// Line 972, Address: 0x1002a6c, Func Offset: 0xc
	// Line 974, Address: 0x1002a80, Func Offset: 0x20
	// Line 976, Address: 0x1002aa0, Func Offset: 0x40
	// Line 977, Address: 0x1002aac, Func Offset: 0x4c
	// Line 979, Address: 0x1002ab4, Func Offset: 0x54
	// Line 981, Address: 0x1002ad4, Func Offset: 0x74
	// Line 982, Address: 0x1002ae0, Func Offset: 0x80
	// Line 983, Address: 0x1002b00, Func Offset: 0xa0
	// Line 984, Address: 0x1002b24, Func Offset: 0xc4
	// Line 986, Address: 0x1002b34, Func Offset: 0xd4
	// Line 987, Address: 0x1002b44, Func Offset: 0xe4
	// Line 989, Address: 0x1002b70, Func Offset: 0x110
	// Line 990, Address: 0x1002b7c, Func Offset: 0x11c
	// Line 994, Address: 0x1002b84, Func Offset: 0x124
	// Line 995, Address: 0x1002b90, Func Offset: 0x130
	// Line 996, Address: 0x1002b9c, Func Offset: 0x13c
	// Line 997, Address: 0x1002ba8, Func Offset: 0x148
	// Line 998, Address: 0x1002bb8, Func Offset: 0x158
	// Line 999, Address: 0x1002bc0, Func Offset: 0x160
	// Line 1000, Address: 0x1002bcc, Func Offset: 0x16c
	// Line 1001, Address: 0x1002be4, Func Offset: 0x184
	// Line 1003, Address: 0x1002c08, Func Offset: 0x1a8
	// Line 1004, Address: 0x1002c14, Func Offset: 0x1b4
	// Func End, Address: 0x1002c24, Func Offset: 0x1c4
}

// 
// Start address: 0x1002c30
void msncdush(_anon1* pActwk)
{
	// Line 1016, Address: 0x1002c30, Func Offset: 0
	// Line 1017, Address: 0x1002c3c, Func Offset: 0xc
	// Line 1019, Address: 0x1002c50, Func Offset: 0x20
	// Line 1021, Address: 0x1002c7c, Func Offset: 0x4c
	// Line 1022, Address: 0x1002c88, Func Offset: 0x58
	// Line 1026, Address: 0x1002c90, Func Offset: 0x60
	// Line 1027, Address: 0x1002c98, Func Offset: 0x68
	// Line 1028, Address: 0x1002ca0, Func Offset: 0x70
	// Line 1029, Address: 0x1002cac, Func Offset: 0x7c
	// Line 1030, Address: 0x1002cc4, Func Offset: 0x94
	// Line 1031, Address: 0x1002ce8, Func Offset: 0xb8
	// Line 1032, Address: 0x1002cf4, Func Offset: 0xc4
	// Func End, Address: 0x1002d04, Func Offset: 0xd4
}

// 
// Start address: 0x1002d10
void msncexit(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	// Line 1044, Address: 0x1002d10, Func Offset: 0
	// Line 1047, Address: 0x1002d1c, Func Offset: 0xc
	// Line 1049, Address: 0x1002d38, Func Offset: 0x28
	// Line 1050, Address: 0x1002d44, Func Offset: 0x34
	// Line 1052, Address: 0x1002d4c, Func Offset: 0x3c
	// Line 1053, Address: 0x1002d58, Func Offset: 0x48
	// Line 1054, Address: 0x1002d64, Func Offset: 0x54
	// Line 1056, Address: 0x1002d78, Func Offset: 0x68
	// Line 1057, Address: 0x1002d84, Func Offset: 0x74
	// Line 1059, Address: 0x1002d90, Func Offset: 0x80
	// Line 1060, Address: 0x1002da4, Func Offset: 0x94
	// Line 1061, Address: 0x1002db8, Func Offset: 0xa8
	// Func End, Address: 0x1002dc8, Func Offset: 0xb8
}

// 
// Start address: 0x1002dd0
void tails_ctrl(_anon1* pActwk)
{
	// Line 1080, Address: 0x1002dd0, Func Offset: 0
	// Line 1081, Address: 0x1002ddc, Func Offset: 0xc
	// Line 1082, Address: 0x1002e08, Func Offset: 0x38
	// Func End, Address: 0x1002e18, Func Offset: 0x48
}

// 
// Start address: 0x1002e20
void tailsinit(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	// Line 1094, Address: 0x1002e20, Func Offset: 0
	// Line 1097, Address: 0x1002e2c, Func Offset: 0xc
	// Line 1098, Address: 0x1002e3c, Func Offset: 0x1c
	// Line 1099, Address: 0x1002e44, Func Offset: 0x24
	// Line 1100, Address: 0x1002e54, Func Offset: 0x34
	// Line 1102, Address: 0x1002e64, Func Offset: 0x44
	// Line 1103, Address: 0x1002e74, Func Offset: 0x54
	// Line 1104, Address: 0x1002e7c, Func Offset: 0x5c
	// Line 1105, Address: 0x1002e9c, Func Offset: 0x7c
	// Line 1106, Address: 0x1002eac, Func Offset: 0x8c
	// Line 1107, Address: 0x1002ec8, Func Offset: 0xa8
	// Line 1108, Address: 0x1002ed8, Func Offset: 0xb8
	// Line 1109, Address: 0x1002ee4, Func Offset: 0xc4
	// Func End, Address: 0x1002ef4, Func Offset: 0xd4
}

// 
// Start address: 0x1002f00
void tailsmove(_anon1* pActwk)
{
	// Line 1121, Address: 0x1002f00, Func Offset: 0
	// Line 1122, Address: 0x1002f0c, Func Offset: 0xc
	// Line 1123, Address: 0x1002f18, Func Offset: 0x18
	// Line 1124, Address: 0x1002f30, Func Offset: 0x30
	// Line 1126, Address: 0x1002f44, Func Offset: 0x44
	// Line 1127, Address: 0x1002f50, Func Offset: 0x50
	// Line 1128, Address: 0x1002f70, Func Offset: 0x70
	// Line 1129, Address: 0x1002f80, Func Offset: 0x80
	// Func End, Address: 0x1002f90, Func Offset: 0x90
}

// 
// Start address: 0x1002f90
void tsset1(_anon1* pActwk)
{
	// Line 1141, Address: 0x1002f90, Func Offset: 0
	// Line 1142, Address: 0x1002f98, Func Offset: 0x8
	// Line 1143, Address: 0x1002fa4, Func Offset: 0x14
	// Line 1144, Address: 0x1002fac, Func Offset: 0x1c
	// Line 1145, Address: 0x1002fb4, Func Offset: 0x24
	// Line 1146, Address: 0x1002fc4, Func Offset: 0x34
	// Line 1148, Address: 0x1002fdc, Func Offset: 0x4c
	// Line 1149, Address: 0x1003000, Func Offset: 0x70
	// Line 1152, Address: 0x1003024, Func Offset: 0x94
	// Line 1153, Address: 0x1003030, Func Offset: 0xa0
	// Line 1154, Address: 0x100303c, Func Offset: 0xac
	// Func End, Address: 0x1003048, Func Offset: 0xb8
}

// 
// Start address: 0x1003050
void tsset2(_anon1* pActwk)
{
	_anon5 lD0;
	_anon5 lD1;
	_anon5 lD7;
	// Line 1166, Address: 0x1003050, Func Offset: 0
	// Line 1169, Address: 0x100305c, Func Offset: 0xc
	// Line 1170, Address: 0x1003068, Func Offset: 0x18
	// Line 1171, Address: 0x1003078, Func Offset: 0x28
	// Line 1172, Address: 0x1003080, Func Offset: 0x30
	// Line 1173, Address: 0x10030ac, Func Offset: 0x5c
	// Line 1174, Address: 0x10030b0, Func Offset: 0x60
	// Line 1175, Address: 0x10030bc, Func Offset: 0x6c
	// Line 1176, Address: 0x10030cc, Func Offset: 0x7c
	// Line 1177, Address: 0x10030d8, Func Offset: 0x88
	// Line 1178, Address: 0x10030f0, Func Offset: 0xa0
	// Line 1180, Address: 0x1003114, Func Offset: 0xc4
	// Line 1181, Address: 0x1003120, Func Offset: 0xd0
	// Line 1182, Address: 0x100313c, Func Offset: 0xec
	// Line 1183, Address: 0x1003140, Func Offset: 0xf0
	// Line 1184, Address: 0x100314c, Func Offset: 0xfc
	// Line 1185, Address: 0x1003158, Func Offset: 0x108
	// Line 1187, Address: 0x1003168, Func Offset: 0x118
	// Line 1188, Address: 0x1003178, Func Offset: 0x128
	// Line 1190, Address: 0x1003194, Func Offset: 0x144
	// Line 1192, Address: 0x10031a0, Func Offset: 0x150
	// Line 1195, Address: 0x10031c4, Func Offset: 0x174
	// Line 1198, Address: 0x10031d0, Func Offset: 0x180
	// Line 1199, Address: 0x10031f4, Func Offset: 0x1a4
	// Line 1200, Address: 0x1003214, Func Offset: 0x1c4
	// Line 1201, Address: 0x1003224, Func Offset: 0x1d4
	// Line 1202, Address: 0x100322c, Func Offset: 0x1dc
	// Line 1206, Address: 0x1003234, Func Offset: 0x1e4
	// Line 1207, Address: 0x1003254, Func Offset: 0x204
	// Line 1208, Address: 0x1003264, Func Offset: 0x214
	// Line 1210, Address: 0x100326c, Func Offset: 0x21c
	// Func End, Address: 0x100327c, Func Offset: 0x22c
}

// 
// Start address: 0x1003280
void tailsmove1(_anon1* pActwk)
{
	// Line 1222, Address: 0x1003280, Func Offset: 0
	// Line 1223, Address: 0x100328c, Func Offset: 0xc
	// Line 1224, Address: 0x1003298, Func Offset: 0x18
	// Line 1225, Address: 0x10032c4, Func Offset: 0x44
	// Line 1226, Address: 0x10032d0, Func Offset: 0x50
	// Func End, Address: 0x10032e0, Func Offset: 0x60
}

