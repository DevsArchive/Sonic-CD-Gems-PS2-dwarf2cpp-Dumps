typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_7)(_anon0*);
typedef void(*type_10)(_anon0*);

typedef _anon9 type_0[20];
typedef _anon9 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef tagPALETTEENTRY type_4[0];
typedef _anon1* type_5[0];
typedef char* type_6[0];
typedef void(*type_8)(_anon0*)[9];
typedef _anon0 type_9[128];
typedef void(*type_11)(_anon0*)[2];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon2 xposi;
	_anon2 yposi;
	_anon5 xspeed;
	_anon5 yspeed;
	_anon5 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon5 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon5 direc;
	_anon5 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon9 spra[20];
		_anon9 spr[0];
	};
};

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
};

union _anon2
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon3
{
	short l;
	short h;
};

struct _anon4
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon5
{
	short w;
	_anon6 b;
};

struct _anon6
{
	char l;
	char h;
};

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

void(*em7_tbl)(_anon0*)[9];
tagPALETTEENTRY gamecolor[0];
char* em_pchg[0];
_anon0 actwk[128];
unsigned char generate_flag;
_anon1* emie7pat[0];
unsigned char pltime_f;
_anon7 swdata;
unsigned char plautoflag;
_anon5 editmode;
tagPALETTEENTRY* lpcolorwk;
void(*ht1_tbl)(_anon0*)[2];

void emie7(_anon0* pActwk);
void emie7_init(_anon0* pActwk);
void emie7_move0(_anon0* pActwk);
void emie7_move1(_anon0* pActwk);
void emie7_tobii(_anon0* pActwk);
void emie7_tobim(_anon0* pActwk);
void emie7_daki2(_anon0* pActwk);
void emie7_end(_anon0* pActwk);
void setdirect(_anon0* pEmiewk, _anon0* pSonicwk);
void speedset(_anon0* pActwk);
void speedsetx(_anon0* pActwk);
void speedsety(_anon0* pActwk);
void dakicheck(_anon0* pActwk);
void empatchg(_anon0* pActwk, char** pPattbl);
void emie7clrsetx(tagPALETTEENTRY* pPalet);
void heartset(_anon0* pActwk);
void heart7(_anon0* pActwk);
void heart1_init(_anon0* pActwk);
void heart1_move(_anon0* pActwk);

// 
// Start address: 0x10228b0
void emie7(_anon0* pActwk)
{
	// Line 147, Address: 0x10228b0, Func Offset: 0
	// Line 148, Address: 0x10228bc, Func Offset: 0xc
	// Line 149, Address: 0x1022900, Func Offset: 0x50
	// Line 150, Address: 0x102290c, Func Offset: 0x5c
	// Line 152, Address: 0x1022918, Func Offset: 0x68
	// Line 153, Address: 0x1022930, Func Offset: 0x80
	// Line 155, Address: 0x1022940, Func Offset: 0x90
	// Func End, Address: 0x1022950, Func Offset: 0xa0
}

// 
// Start address: 0x1022950
void emie7_init(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 161, Address: 0x1022950, Func Offset: 0
	// Line 164, Address: 0x102295c, Func Offset: 0xc
	// Line 165, Address: 0x102296c, Func Offset: 0x1c
	// Line 166, Address: 0x1022978, Func Offset: 0x28
	// Line 167, Address: 0x1022984, Func Offset: 0x34
	// Line 169, Address: 0x1022994, Func Offset: 0x44
	// Line 170, Address: 0x10229a0, Func Offset: 0x50
	// Line 171, Address: 0x10229ac, Func Offset: 0x5c
	// Line 172, Address: 0x10229bc, Func Offset: 0x6c
	// Line 174, Address: 0x10229c8, Func Offset: 0x78
	// Line 175, Address: 0x10229d8, Func Offset: 0x88
	// Line 176, Address: 0x10229e4, Func Offset: 0x94
	// Line 180, Address: 0x10229f0, Func Offset: 0xa0
	// Line 181, Address: 0x10229fc, Func Offset: 0xac
	// Line 182, Address: 0x1022a0c, Func Offset: 0xbc
	// Line 183, Address: 0x1022a20, Func Offset: 0xd0
	// Line 184, Address: 0x1022a2c, Func Offset: 0xdc
	// Line 185, Address: 0x1022a38, Func Offset: 0xe8
	// Line 186, Address: 0x1022a48, Func Offset: 0xf8
	// Line 187, Address: 0x1022a58, Func Offset: 0x108
	// Line 191, Address: 0x1022a64, Func Offset: 0x114
	// Line 192, Address: 0x1022a78, Func Offset: 0x128
	// Line 193, Address: 0x1022a88, Func Offset: 0x138
	// Line 194, Address: 0x1022a94, Func Offset: 0x144
	// Line 196, Address: 0x1022a9c, Func Offset: 0x14c
	// Line 198, Address: 0x1022ab0, Func Offset: 0x160
	// Func End, Address: 0x1022ac0, Func Offset: 0x170
}

// 
// Start address: 0x1022ac0
void emie7_move0(_anon0* pActwk)
{
	// Line 204, Address: 0x1022ac0, Func Offset: 0
	// Line 205, Address: 0x1022acc, Func Offset: 0xc
	// Line 207, Address: 0x1022ae4, Func Offset: 0x24
	// Line 208, Address: 0x1022af4, Func Offset: 0x34
	// Line 210, Address: 0x1022b00, Func Offset: 0x40
	// Line 211, Address: 0x1022b1c, Func Offset: 0x5c
	// Line 212, Address: 0x1022b28, Func Offset: 0x68
	// Line 213, Address: 0x1022b30, Func Offset: 0x70
	// Line 215, Address: 0x1022b3c, Func Offset: 0x7c
	// Line 217, Address: 0x1022b44, Func Offset: 0x84
	// Line 218, Address: 0x1022b58, Func Offset: 0x98
	// Line 219, Address: 0x1022b64, Func Offset: 0xa4
	// Line 220, Address: 0x1022b74, Func Offset: 0xb4
	// Line 222, Address: 0x1022b88, Func Offset: 0xc8
	// Func End, Address: 0x1022b98, Func Offset: 0xd8
}

// 
// Start address: 0x1022ba0
void emie7_move1(_anon0* pActwk)
{
	short lenwk;
	short maxspd;
	short spdwk;
	short scdwk;
	// Line 228, Address: 0x1022ba0, Func Offset: 0
	// Line 231, Address: 0x1022bbc, Func Offset: 0x1c
	// Line 232, Address: 0x1022bc8, Func Offset: 0x28
	// Line 234, Address: 0x1022bdc, Func Offset: 0x3c
	// Line 235, Address: 0x1022bec, Func Offset: 0x4c
	// Line 237, Address: 0x1022c0c, Func Offset: 0x6c
	// Line 238, Address: 0x1022c18, Func Offset: 0x78
	// Line 239, Address: 0x1022c20, Func Offset: 0x80
	// Line 240, Address: 0x1022c2c, Func Offset: 0x8c
	// Line 241, Address: 0x1022c38, Func Offset: 0x98
	// Line 246, Address: 0x1022c40, Func Offset: 0xa0
	// Line 248, Address: 0x1022c6c, Func Offset: 0xcc
	// Line 251, Address: 0x1022c78, Func Offset: 0xd8
	// Line 252, Address: 0x1022cc4, Func Offset: 0x124
	// Line 256, Address: 0x1022cd0, Func Offset: 0x130
	// Line 259, Address: 0x1022d20, Func Offset: 0x180
	// Line 260, Address: 0x1022d30, Func Offset: 0x190
	// Line 263, Address: 0x1022d38, Func Offset: 0x198
	// Line 264, Address: 0x1022d44, Func Offset: 0x1a4
	// Line 265, Address: 0x1022d58, Func Offset: 0x1b8
	// Line 270, Address: 0x1022d60, Func Offset: 0x1c0
	// Line 271, Address: 0x1022d6c, Func Offset: 0x1cc
	// Line 272, Address: 0x1022d84, Func Offset: 0x1e4
	// Line 276, Address: 0x1022d90, Func Offset: 0x1f0
	// Line 277, Address: 0x1022da4, Func Offset: 0x204
	// Line 278, Address: 0x1022dac, Func Offset: 0x20c
	// Line 280, Address: 0x1022db8, Func Offset: 0x218
	// Line 281, Address: 0x1022dc8, Func Offset: 0x228
	// Line 282, Address: 0x1022dd4, Func Offset: 0x234
	// Line 286, Address: 0x1022de0, Func Offset: 0x240
	// Line 287, Address: 0x1022df4, Func Offset: 0x254
	// Line 291, Address: 0x1022dfc, Func Offset: 0x25c
	// Line 294, Address: 0x1022e04, Func Offset: 0x264
	// Line 296, Address: 0x1022e1c, Func Offset: 0x27c
	// Line 298, Address: 0x1022e2c, Func Offset: 0x28c
	// Line 299, Address: 0x1022e3c, Func Offset: 0x29c
	// Line 300, Address: 0x1022e48, Func Offset: 0x2a8
	// Line 301, Address: 0x1022e50, Func Offset: 0x2b0
	// Line 304, Address: 0x1022e5c, Func Offset: 0x2bc
	// Line 306, Address: 0x1022e80, Func Offset: 0x2e0
	// Line 309, Address: 0x1022e88, Func Offset: 0x2e8
	// Line 310, Address: 0x1022e94, Func Offset: 0x2f4
	// Line 311, Address: 0x1022ea8, Func Offset: 0x308
	// Line 316, Address: 0x1022eb0, Func Offset: 0x310
	// Line 317, Address: 0x1022ec4, Func Offset: 0x324
	// Line 318, Address: 0x1022eec, Func Offset: 0x34c
	// Line 322, Address: 0x1022efc, Func Offset: 0x35c
	// Line 324, Address: 0x1022f08, Func Offset: 0x368
	// Line 325, Address: 0x1022f14, Func Offset: 0x374
	// Line 327, Address: 0x1022f28, Func Offset: 0x388
	// Func End, Address: 0x1022f48, Func Offset: 0x3a8
}

// 
// Start address: 0x1022f50
void emie7_tobii(_anon0* pActwk)
{
	short lenwk;
	// Line 332, Address: 0x1022f50, Func Offset: 0
	// Line 335, Address: 0x1022f60, Func Offset: 0x10
	// Line 337, Address: 0x1022f6c, Func Offset: 0x1c
	// Line 339, Address: 0x1022fb8, Func Offset: 0x68
	// Line 342, Address: 0x1022fd4, Func Offset: 0x84
	// Line 343, Address: 0x1022fe8, Func Offset: 0x98
	// Line 344, Address: 0x1022ff0, Func Offset: 0xa0
	// Line 345, Address: 0x1022ff8, Func Offset: 0xa8
	// Line 347, Address: 0x1023010, Func Offset: 0xc0
	// Line 348, Address: 0x102301c, Func Offset: 0xcc
	// Line 349, Address: 0x1023024, Func Offset: 0xd4
	// Line 353, Address: 0x1023030, Func Offset: 0xe0
	// Line 354, Address: 0x102303c, Func Offset: 0xec
	// Line 356, Address: 0x102304c, Func Offset: 0xfc
	// Line 357, Address: 0x1023058, Func Offset: 0x108
	// Func End, Address: 0x102306c, Func Offset: 0x11c
}

// 
// Start address: 0x1023070
void emie7_tobim(_anon0* pActwk)
{
	// Line 363, Address: 0x1023070, Func Offset: 0
	// Line 364, Address: 0x102307c, Func Offset: 0xc
	// Line 365, Address: 0x1023088, Func Offset: 0x18
	// Line 366, Address: 0x10230b0, Func Offset: 0x40
	// Line 369, Address: 0x10230bc, Func Offset: 0x4c
	// Line 371, Address: 0x10230d8, Func Offset: 0x68
	// Line 372, Address: 0x10230e4, Func Offset: 0x74
	// Line 373, Address: 0x10230ec, Func Offset: 0x7c
	// Line 375, Address: 0x10230f4, Func Offset: 0x84
	// Line 376, Address: 0x1023118, Func Offset: 0xa8
	// Line 377, Address: 0x1023128, Func Offset: 0xb8
	// Line 380, Address: 0x1023130, Func Offset: 0xc0
	// Line 381, Address: 0x1023140, Func Offset: 0xd0
	// Line 383, Address: 0x102314c, Func Offset: 0xdc
	// Func End, Address: 0x102315c, Func Offset: 0xec
}

// 
// Start address: 0x1023160
void emie7_daki2(_anon0* pActwk)
{
	// Line 389, Address: 0x1023160, Func Offset: 0
	// Line 390, Address: 0x102316c, Func Offset: 0xc
	// Line 392, Address: 0x1023178, Func Offset: 0x18
	// Line 393, Address: 0x102318c, Func Offset: 0x2c
	// Line 394, Address: 0x1023194, Func Offset: 0x34
	// Line 395, Address: 0x10231a0, Func Offset: 0x40
	// Line 397, Address: 0x10231b4, Func Offset: 0x54
	// Line 398, Address: 0x10231cc, Func Offset: 0x6c
	// Line 399, Address: 0x10231f0, Func Offset: 0x90
	// Line 400, Address: 0x10231f8, Func Offset: 0x98
	// Line 403, Address: 0x102321c, Func Offset: 0xbc
	// Line 404, Address: 0x102322c, Func Offset: 0xcc
	// Line 405, Address: 0x1023238, Func Offset: 0xd8
	// Line 406, Address: 0x1023248, Func Offset: 0xe8
	// Line 407, Address: 0x1023250, Func Offset: 0xf0
	// Line 408, Address: 0x102325c, Func Offset: 0xfc
	// Line 410, Address: 0x1023268, Func Offset: 0x108
	// Func End, Address: 0x1023278, Func Offset: 0x118
}

// 
// Start address: 0x1023280
void emie7_end(_anon0* pActwk)
{
	// Line 416, Address: 0x1023280, Func Offset: 0
	// Line 417, Address: 0x102328c, Func Offset: 0xc
	// Line 418, Address: 0x1023298, Func Offset: 0x18
	// Line 420, Address: 0x10232ac, Func Offset: 0x2c
	// Line 421, Address: 0x10232c4, Func Offset: 0x44
	// Line 422, Address: 0x10232e8, Func Offset: 0x68
	// Line 423, Address: 0x10232f0, Func Offset: 0x70
	// Line 426, Address: 0x1023314, Func Offset: 0x94
	// Line 427, Address: 0x1023320, Func Offset: 0xa0
	// Func End, Address: 0x1023330, Func Offset: 0xb0
}

// 
// Start address: 0x1023330
void setdirect(_anon0* pEmiewk, _anon0* pSonicwk)
{
	// Line 444, Address: 0x1023330, Func Offset: 0
	// Line 445, Address: 0x102333c, Func Offset: 0xc
	// Line 447, Address: 0x1023368, Func Offset: 0x38
	// Line 448, Address: 0x1023378, Func Offset: 0x48
	// Line 449, Address: 0x1023388, Func Offset: 0x58
	// Line 451, Address: 0x1023390, Func Offset: 0x60
	// Line 452, Address: 0x10233a0, Func Offset: 0x70
	// Line 454, Address: 0x10233b0, Func Offset: 0x80
	// Func End, Address: 0x10233bc, Func Offset: 0x8c
}

// 
// Start address: 0x10233c0
void speedset(_anon0* pActwk)
{
	// Line 466, Address: 0x10233c0, Func Offset: 0
	// Line 467, Address: 0x10233cc, Func Offset: 0xc
	// Line 468, Address: 0x10233d8, Func Offset: 0x18
	// Line 469, Address: 0x10233e4, Func Offset: 0x24
	// Func End, Address: 0x10233f4, Func Offset: 0x34
}

// 
// Start address: 0x1023400
void speedsetx(_anon0* pActwk)
{
	// Line 472, Address: 0x1023400, Func Offset: 0
	// Line 473, Address: 0x1023408, Func Offset: 0x8
	// Line 474, Address: 0x102342c, Func Offset: 0x2c
	// Func End, Address: 0x1023438, Func Offset: 0x38
}

// 
// Start address: 0x1023440
void speedsety(_anon0* pActwk)
{
	// Line 477, Address: 0x1023440, Func Offset: 0
	// Line 478, Address: 0x1023448, Func Offset: 0x8
	// Line 479, Address: 0x102346c, Func Offset: 0x2c
	// Func End, Address: 0x1023478, Func Offset: 0x38
}

// 
// Start address: 0x1023480
void dakicheck(_anon0* pActwk)
{
	short spdwk;
	short poswk1;
	short poswk2;
	// Line 491, Address: 0x1023480, Func Offset: 0
	// Line 494, Address: 0x1023498, Func Offset: 0x18
	// Line 501, Address: 0x10234a8, Func Offset: 0x28
	// Line 503, Address: 0x10234c0, Func Offset: 0x40
	// Line 504, Address: 0x10234d0, Func Offset: 0x50
	// Line 505, Address: 0x10234e0, Func Offset: 0x60
	// Line 506, Address: 0x10234e8, Func Offset: 0x68
	// Line 507, Address: 0x10234f8, Func Offset: 0x78
	// Line 511, Address: 0x1023508, Func Offset: 0x88
	// Line 515, Address: 0x1023524, Func Offset: 0xa4
	// Line 516, Address: 0x1023560, Func Offset: 0xe0
	// Line 520, Address: 0x1023568, Func Offset: 0xe8
	// Line 521, Address: 0x102359c, Func Offset: 0x11c
	// Line 522, Address: 0x10235d4, Func Offset: 0x154
	// Line 525, Address: 0x10235dc, Func Offset: 0x15c
	// Line 526, Address: 0x10235fc, Func Offset: 0x17c
	// Line 530, Address: 0x1023608, Func Offset: 0x188
	// Line 532, Address: 0x1023638, Func Offset: 0x1b8
	// Line 533, Address: 0x1023644, Func Offset: 0x1c4
	// Line 534, Address: 0x102364c, Func Offset: 0x1cc
	// Line 535, Address: 0x102365c, Func Offset: 0x1dc
	// Line 536, Address: 0x1023674, Func Offset: 0x1f4
	// Line 537, Address: 0x1023680, Func Offset: 0x200
	// Line 539, Address: 0x102368c, Func Offset: 0x20c
	// Line 541, Address: 0x1023698, Func Offset: 0x218
	// Func End, Address: 0x10236b4, Func Offset: 0x234
}

// 
// Start address: 0x10236c0
void empatchg(_anon0* pActwk, char** pPattbl)
{
	char* pPatdat;
	char patnowk;
	// Line 554, Address: 0x10236c0, Func Offset: 0
	// Line 557, Address: 0x10236d4, Func Offset: 0x14
	// Line 559, Address: 0x10236fc, Func Offset: 0x3c
	// Line 560, Address: 0x102370c, Func Offset: 0x4c
	// Line 561, Address: 0x1023714, Func Offset: 0x54
	// Line 564, Address: 0x102371c, Func Offset: 0x5c
	// Line 565, Address: 0x1023748, Func Offset: 0x88
	// Line 566, Address: 0x1023768, Func Offset: 0xa8
	// Line 568, Address: 0x1023794, Func Offset: 0xd4
	// Line 569, Address: 0x102379c, Func Offset: 0xdc
	// Line 573, Address: 0x10237b8, Func Offset: 0xf8
	// Line 576, Address: 0x10237d0, Func Offset: 0x110
	// Line 577, Address: 0x10237e0, Func Offset: 0x120
	// Line 581, Address: 0x1023824, Func Offset: 0x164
	// Line 584, Address: 0x1023844, Func Offset: 0x184
	// Line 586, Address: 0x1023854, Func Offset: 0x194
	// Func End, Address: 0x1023868, Func Offset: 0x1a8
}

// 
// Start address: 0x1023870
void emie7clrsetx(tagPALETTEENTRY* pPalet)
{
	tagPALETTEENTRY* pColorwk;
	short i;
	// Line 598, Address: 0x1023870, Func Offset: 0
	// Line 602, Address: 0x1023880, Func Offset: 0x10
	// Line 604, Address: 0x102388c, Func Offset: 0x1c
	// Line 605, Address: 0x1023898, Func Offset: 0x28
	// Line 606, Address: 0x10238bc, Func Offset: 0x4c
	// Line 607, Address: 0x10238c0, Func Offset: 0x50
	// Line 608, Address: 0x10238cc, Func Offset: 0x5c
	// Line 609, Address: 0x10238ec, Func Offset: 0x7c
	// Func End, Address: 0x1023900, Func Offset: 0x90
}

// 
// Start address: 0x1023900
void heartset(_anon0* pActwk)
{
	_anon0* pHeartact;
	short wk;
	// Line 621, Address: 0x1023900, Func Offset: 0
	// Line 625, Address: 0x1023910, Func Offset: 0x10
	// Line 626, Address: 0x102392c, Func Offset: 0x2c
	// Line 627, Address: 0x1023940, Func Offset: 0x40
	// Line 628, Address: 0x102394c, Func Offset: 0x4c
	// Line 630, Address: 0x1023958, Func Offset: 0x58
	// Line 631, Address: 0x1023970, Func Offset: 0x70
	// Line 635, Address: 0x102397c, Func Offset: 0x7c
	// Line 636, Address: 0x1023994, Func Offset: 0x94
	// Line 640, Address: 0x10239a0, Func Offset: 0xa0
	// Line 641, Address: 0x10239cc, Func Offset: 0xcc
	// Line 646, Address: 0x10239f0, Func Offset: 0xf0
	// Line 647, Address: 0x1023a00, Func Offset: 0x100
	// Func End, Address: 0x1023a14, Func Offset: 0x114
}

// 
// Start address: 0x1023a20
void heart7(_anon0* pActwk)
{
	// Line 668, Address: 0x1023a20, Func Offset: 0
	// Line 669, Address: 0x1023a2c, Func Offset: 0xc
	// Line 670, Address: 0x1023a70, Func Offset: 0x50
	// Line 671, Address: 0x1023a7c, Func Offset: 0x5c
	// Line 672, Address: 0x1023a88, Func Offset: 0x68
	// Func End, Address: 0x1023a98, Func Offset: 0x78
}

// 
// Start address: 0x1023aa0
void heart1_init(_anon0* pActwk)
{
	// Line 678, Address: 0x1023aa0, Func Offset: 0
	// Line 679, Address: 0x1023aac, Func Offset: 0xc
	// Line 680, Address: 0x1023abc, Func Offset: 0x1c
	// Line 681, Address: 0x1023acc, Func Offset: 0x2c
	// Line 682, Address: 0x1023ad8, Func Offset: 0x38
	// Line 683, Address: 0x1023ae8, Func Offset: 0x48
	// Line 684, Address: 0x1023af4, Func Offset: 0x54
	// Line 685, Address: 0x1023b00, Func Offset: 0x60
	// Line 687, Address: 0x1023b0c, Func Offset: 0x6c
	// Line 688, Address: 0x1023b18, Func Offset: 0x78
	// Func End, Address: 0x1023b28, Func Offset: 0x88
}

// 
// Start address: 0x1023b30
void heart1_move(_anon0* pActwk)
{
	short sinwk;
	short coswk;
	// Line 694, Address: 0x1023b30, Func Offset: 0
	// Line 697, Address: 0x1023b3c, Func Offset: 0xc
	// Line 698, Address: 0x1023b4c, Func Offset: 0x1c
	// Line 699, Address: 0x1023b74, Func Offset: 0x44
	// Line 703, Address: 0x1023b94, Func Offset: 0x64
	// Line 704, Address: 0x1023ba0, Func Offset: 0x70
	// Line 705, Address: 0x1023bc4, Func Offset: 0x94
	// Line 706, Address: 0x1023bd4, Func Offset: 0xa4
	// Line 707, Address: 0x1023bf4, Func Offset: 0xc4
	// Line 708, Address: 0x1023c04, Func Offset: 0xd4
	// Line 709, Address: 0x1023c1c, Func Offset: 0xec
	// Line 710, Address: 0x1023c28, Func Offset: 0xf8
	// Line 711, Address: 0x1023c48, Func Offset: 0x118
	// Line 713, Address: 0x1023c54, Func Offset: 0x124
	// Func End, Address: 0x1023c64, Func Offset: 0x134
}

