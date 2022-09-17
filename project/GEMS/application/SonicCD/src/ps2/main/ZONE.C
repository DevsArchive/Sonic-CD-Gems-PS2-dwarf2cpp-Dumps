typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_8)();

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned short type_2[12];
typedef unsigned short type_3[0];
typedef _anon1* type_4[5];
typedef _anon1* type_5[0];
typedef _anon1* type_6[5];
typedef _anon1* type_7[2];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef unsigned char type_11[3];
typedef _anon1* type_12[5];
typedef _anon1* type_13[5];
typedef _anon0 type_14[128];
typedef _anon1* type_15[2];

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
		_anon7 spra[20];
		_anon7 spr[0];
	};
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

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon1 game0;
_anon1 game1;
_anon1* gamepat[2];
_anon1 time0;
_anon1 time1;
_anon1* timepat[2];
_anon1 gotpat0;
_anon1 gotpat1;
_anon1 gotpat2;
_anon1 gotpat3;
_anon1 madepat0;
_anon1 madepat1;
_anon1 madepat2;
_anon1 madepat3;
_anon1 bonuspat;
_anon1 bonuspat0;
_anon1* gotpat[5];
_anon1* gotpat_0[5];
_anon1* madepat[5];
_anon1* madepat_0[5];
unsigned char pl_suu;
unsigned char plsubchg_flag;
unsigned char pltimeover_f;
_anon5 stageno;
_anon1* title_pat[0];
unsigned short title_tbl[0];
_anon5 scroll_start;
unsigned char plautoflag;
unsigned short ClearSountWait;
_anon2 systemtimer;
short WaitCount;
unsigned short cleartbl[12];
unsigned char generate_flag;
_anon2 scra_h_posit;
_anon0 actwk[128];
void(*WaveAllStop)();
short ringbonus;
short timebonus;
unsigned char special_flag;
unsigned char bonus_f;
unsigned char gf_flag;
unsigned char clrspflg_save;
unsigned char ta_flag;
unsigned char time_flag;
unsigned char play_start;
unsigned char markerno;
unsigned char projector_flag;
unsigned char enkeino;
unsigned char tv_flag;
unsigned char flowercnt[3];
unsigned char enecgflg;
unsigned char plflag;
_anon5 gameflag;

void over(_anon0* pAct);
void over_init(_anon0* pAct);
void over_move(_anon0* pAct);
void title(_anon0* pAct);
void title_init(_anon0* pAct);
void title_move0(_anon0* pAct);
void title_move1(_anon0* pAct);
void title_back0(_anon0* pAct);
void title_back1(_anon0* pAct);
void title_wait(_anon0* pAct);
void clear(_anon0* pAct);
void clear_init0(_anon0* pAct);
void clear_init(_anon0* pAct);
void clear_move0(_anon0* pAct);
void clear_move1(_anon0* pAct);
void clear_move2(_anon0* pAct);
void clear_wait(_anon0* pAct);

// 
// Start address: 0x1012340
void over(_anon0* pAct)
{
	// Line 271, Address: 0x1012340, Func Offset: 0
	// Line 272, Address: 0x101234c, Func Offset: 0xc
	// Line 274, Address: 0x1012374, Func Offset: 0x34
	// Line 275, Address: 0x1012380, Func Offset: 0x40
	// Line 277, Address: 0x1012388, Func Offset: 0x48
	// Line 281, Address: 0x1012394, Func Offset: 0x54
	// Func End, Address: 0x10123a4, Func Offset: 0x64
}

// 
// Start address: 0x10123b0
void over_init(_anon0* pAct)
{
	_anon0* pTmpAct;
	// Line 284, Address: 0x10123b0, Func Offset: 0
	// Line 287, Address: 0x10123bc, Func Offset: 0xc
	// Line 288, Address: 0x10123c8, Func Offset: 0x18
	// Line 289, Address: 0x10123d4, Func Offset: 0x24
	// Line 290, Address: 0x10123e0, Func Offset: 0x30
	// Line 291, Address: 0x10123ec, Func Offset: 0x3c
	// Line 292, Address: 0x10123f8, Func Offset: 0x48
	// Line 293, Address: 0x1012404, Func Offset: 0x54
	// Line 294, Address: 0x1012414, Func Offset: 0x64
	// Line 295, Address: 0x1012420, Func Offset: 0x70
	// Line 296, Address: 0x1012438, Func Offset: 0x88
	// Line 297, Address: 0x101244c, Func Offset: 0x9c
	// Line 298, Address: 0x101245c, Func Offset: 0xac
	// Line 299, Address: 0x101246c, Func Offset: 0xbc
	// Line 301, Address: 0x1012478, Func Offset: 0xc8
	// Line 304, Address: 0x1012480, Func Offset: 0xd0
	// Line 305, Address: 0x1012494, Func Offset: 0xe4
	// Line 307, Address: 0x10124a4, Func Offset: 0xf4
	// Line 308, Address: 0x10124b0, Func Offset: 0x100
	// Line 312, Address: 0x10124b8, Func Offset: 0x108
	// Line 313, Address: 0x10124cc, Func Offset: 0x11c
	// Line 315, Address: 0x10124e0, Func Offset: 0x130
	// Line 316, Address: 0x10124ec, Func Offset: 0x13c
	// Line 319, Address: 0x10124f4, Func Offset: 0x144
	// Line 320, Address: 0x1012500, Func Offset: 0x150
	// Line 321, Address: 0x1012510, Func Offset: 0x160
	// Line 322, Address: 0x1012520, Func Offset: 0x170
	// Line 323, Address: 0x1012530, Func Offset: 0x180
	// Line 324, Address: 0x101253c, Func Offset: 0x18c
	// Line 325, Address: 0x1012548, Func Offset: 0x198
	// Line 326, Address: 0x1012554, Func Offset: 0x1a4
	// Line 328, Address: 0x1012560, Func Offset: 0x1b0
	// Line 329, Address: 0x1012570, Func Offset: 0x1c0
	// Line 330, Address: 0x101257c, Func Offset: 0x1cc
	// Line 332, Address: 0x1012584, Func Offset: 0x1d4
	// Line 334, Address: 0x1012590, Func Offset: 0x1e0
	// Func End, Address: 0x10125a0, Func Offset: 0x1f0
}

// 
// Start address: 0x10125a0
void over_move(_anon0* pAct)
{
	// Line 337, Address: 0x10125a0, Func Offset: 0
	// Line 338, Address: 0x10125ac, Func Offset: 0xc
	// Line 339, Address: 0x10125e0, Func Offset: 0x40
	// Line 340, Address: 0x10125f0, Func Offset: 0x50
	// Line 341, Address: 0x10125f8, Func Offset: 0x58
	// Line 342, Address: 0x101262c, Func Offset: 0x8c
	// Line 344, Address: 0x101263c, Func Offset: 0x9c
	// Line 346, Address: 0x1012648, Func Offset: 0xa8
	// Func End, Address: 0x1012658, Func Offset: 0xb8
}

// 
// Start address: 0x1012660
void title(_anon0* pAct)
{
	// Line 350, Address: 0x1012660, Func Offset: 0
	// Line 351, Address: 0x101266c, Func Offset: 0xc
	// Line 353, Address: 0x10126c4, Func Offset: 0x64
	// Line 354, Address: 0x10126d0, Func Offset: 0x70
	// Line 356, Address: 0x10126d8, Func Offset: 0x78
	// Line 357, Address: 0x10126e4, Func Offset: 0x84
	// Line 359, Address: 0x10126ec, Func Offset: 0x8c
	// Line 360, Address: 0x10126f8, Func Offset: 0x98
	// Line 362, Address: 0x1012700, Func Offset: 0xa0
	// Line 363, Address: 0x101270c, Func Offset: 0xac
	// Line 365, Address: 0x1012714, Func Offset: 0xb4
	// Line 366, Address: 0x1012720, Func Offset: 0xc0
	// Line 368, Address: 0x1012728, Func Offset: 0xc8
	// Line 372, Address: 0x1012734, Func Offset: 0xd4
	// Func End, Address: 0x1012744, Func Offset: 0xe4
}

// 
// Start address: 0x1012750
void title_init(_anon0* pAct)
{
	_anon0* pTmpAct;
	unsigned short* wp;
	int i;
	// Line 375, Address: 0x1012750, Func Offset: 0
	// Line 380, Address: 0x1012764, Func Offset: 0x14
	// Line 381, Address: 0x1012770, Func Offset: 0x20
	// Line 382, Address: 0x101277c, Func Offset: 0x2c
	// Line 383, Address: 0x1012788, Func Offset: 0x38
	// Line 384, Address: 0x1012794, Func Offset: 0x44
	// Line 385, Address: 0x10127a0, Func Offset: 0x50
	// Line 386, Address: 0x10127ac, Func Offset: 0x5c
	// Line 387, Address: 0x10127b8, Func Offset: 0x68
	// Line 388, Address: 0x10127c8, Func Offset: 0x78
	// Line 392, Address: 0x10127d4, Func Offset: 0x84
	// Line 393, Address: 0x10127dc, Func Offset: 0x8c
	// Line 394, Address: 0x10127e8, Func Offset: 0x98
	// Line 395, Address: 0x10127f4, Func Offset: 0xa4
	// Line 396, Address: 0x1012800, Func Offset: 0xb0
	// Line 397, Address: 0x101280c, Func Offset: 0xbc
	// Line 398, Address: 0x1012818, Func Offset: 0xc8
	// Line 400, Address: 0x1012828, Func Offset: 0xd8
	// Line 401, Address: 0x101283c, Func Offset: 0xec
	// Line 402, Address: 0x1012848, Func Offset: 0xf8
	// Line 403, Address: 0x101285c, Func Offset: 0x10c
	// Line 404, Address: 0x1012870, Func Offset: 0x120
	// Line 405, Address: 0x101288c, Func Offset: 0x13c
	// Line 406, Address: 0x1012898, Func Offset: 0x148
	// Line 408, Address: 0x10128c4, Func Offset: 0x174
	// Line 409, Address: 0x10128e4, Func Offset: 0x194
	// Line 411, Address: 0x10128f4, Func Offset: 0x1a4
	// Func End, Address: 0x101290c, Func Offset: 0x1bc
}

// 
// Start address: 0x1012910
void title_move0(_anon0* pAct)
{
	// Line 415, Address: 0x1012910, Func Offset: 0
	// Line 416, Address: 0x101291c, Func Offset: 0xc
	// Line 417, Address: 0x101294c, Func Offset: 0x3c
	// Line 418, Address: 0x101295c, Func Offset: 0x4c
	// Line 419, Address: 0x1012964, Func Offset: 0x54
	// Line 420, Address: 0x1012998, Func Offset: 0x88
	// Line 421, Address: 0x10129a8, Func Offset: 0x98
	// Line 423, Address: 0x10129b0, Func Offset: 0xa0
	// Line 425, Address: 0x10129c0, Func Offset: 0xb0
	// Line 427, Address: 0x10129cc, Func Offset: 0xbc
	// Func End, Address: 0x10129dc, Func Offset: 0xcc
}

// 
// Start address: 0x10129e0
void title_move1(_anon0* pAct)
{
	// Line 430, Address: 0x10129e0, Func Offset: 0
	// Line 431, Address: 0x10129ec, Func Offset: 0xc
	// Line 432, Address: 0x1012a1c, Func Offset: 0x3c
	// Line 433, Address: 0x1012a2c, Func Offset: 0x4c
	// Line 434, Address: 0x1012a34, Func Offset: 0x54
	// Line 435, Address: 0x1012a68, Func Offset: 0x88
	// Line 436, Address: 0x1012a78, Func Offset: 0x98
	// Line 438, Address: 0x1012a80, Func Offset: 0xa0
	// Line 440, Address: 0x1012a90, Func Offset: 0xb0
	// Line 443, Address: 0x1012a9c, Func Offset: 0xbc
	// Func End, Address: 0x1012aac, Func Offset: 0xcc
}

// 
// Start address: 0x1012ab0
void title_back0(_anon0* pAct)
{
	// Line 446, Address: 0x1012ab0, Func Offset: 0
	// Line 447, Address: 0x1012abc, Func Offset: 0xc
	// Line 448, Address: 0x1012acc, Func Offset: 0x1c
	// Line 449, Address: 0x1012adc, Func Offset: 0x2c
	// Line 451, Address: 0x1012ae4, Func Offset: 0x34
	// Line 452, Address: 0x1012b14, Func Offset: 0x64
	// Line 453, Address: 0x1012b24, Func Offset: 0x74
	// Line 454, Address: 0x1012b30, Func Offset: 0x80
	// Line 456, Address: 0x1012b38, Func Offset: 0x88
	// Line 457, Address: 0x1012b6c, Func Offset: 0xbc
	// Line 458, Address: 0x1012b7c, Func Offset: 0xcc
	// Line 460, Address: 0x1012b84, Func Offset: 0xd4
	// Line 463, Address: 0x1012b94, Func Offset: 0xe4
	// Line 465, Address: 0x1012ba0, Func Offset: 0xf0
	// Func End, Address: 0x1012bb0, Func Offset: 0x100
}

// 
// Start address: 0x1012bb0
void title_back1(_anon0* pAct)
{
	// Line 468, Address: 0x1012bb0, Func Offset: 0
	// Line 469, Address: 0x1012bbc, Func Offset: 0xc
	// Line 470, Address: 0x1012bcc, Func Offset: 0x1c
	// Line 471, Address: 0x1012bdc, Func Offset: 0x2c
	// Line 473, Address: 0x1012be4, Func Offset: 0x34
	// Line 474, Address: 0x1012c14, Func Offset: 0x64
	// Line 475, Address: 0x1012c20, Func Offset: 0x70
	// Line 477, Address: 0x1012c28, Func Offset: 0x78
	// Line 478, Address: 0x1012c5c, Func Offset: 0xac
	// Line 479, Address: 0x1012c6c, Func Offset: 0xbc
	// Line 481, Address: 0x1012c74, Func Offset: 0xc4
	// Line 484, Address: 0x1012c84, Func Offset: 0xd4
	// Line 486, Address: 0x1012c90, Func Offset: 0xe0
	// Func End, Address: 0x1012ca0, Func Offset: 0xf0
}

// 
// Start address: 0x1012ca0
void title_wait(_anon0* pAct)
{
	// Line 489, Address: 0x1012ca0, Func Offset: 0
	// Line 490, Address: 0x1012cac, Func Offset: 0xc
	// Line 491, Address: 0x1012cb4, Func Offset: 0x14
	// Line 492, Address: 0x1012cbc, Func Offset: 0x1c
	// Line 494, Address: 0x1012cc8, Func Offset: 0x28
	// Func End, Address: 0x1012cd8, Func Offset: 0x38
}

// 
// Start address: 0x1012ce0
void clear(_anon0* pAct)
{
	// Line 501, Address: 0x1012ce0, Func Offset: 0
	// Line 502, Address: 0x1012cec, Func Offset: 0xc
	// Line 504, Address: 0x1012d50, Func Offset: 0x70
	// Line 505, Address: 0x1012d5c, Func Offset: 0x7c
	// Line 506, Address: 0x1012d6c, Func Offset: 0x8c
	// Line 508, Address: 0x1012d74, Func Offset: 0x94
	// Line 509, Address: 0x1012d80, Func Offset: 0xa0
	// Line 510, Address: 0x1012d90, Func Offset: 0xb0
	// Line 512, Address: 0x1012d98, Func Offset: 0xb8
	// Line 513, Address: 0x1012da4, Func Offset: 0xc4
	// Line 515, Address: 0x1012dac, Func Offset: 0xcc
	// Line 516, Address: 0x1012db8, Func Offset: 0xd8
	// Line 519, Address: 0x1012dc0, Func Offset: 0xe0
	// Line 520, Address: 0x1012df4, Func Offset: 0x114
	// Line 522, Address: 0x1012e04, Func Offset: 0x124
	// Line 523, Address: 0x1012e10, Func Offset: 0x130
	// Line 525, Address: 0x1012e18, Func Offset: 0x138
	// Line 526, Address: 0x1012e24, Func Offset: 0x144
	// Line 528, Address: 0x1012e2c, Func Offset: 0x14c
	// Line 532, Address: 0x1012e38, Func Offset: 0x158
	// Func End, Address: 0x1012e48, Func Offset: 0x168
}

// 
// Start address: 0x1012e50
void clear_init0(_anon0* pAct)
{
	// Line 534, Address: 0x1012e50, Func Offset: 0
	// Line 535, Address: 0x1012e5c, Func Offset: 0xc
	// Line 536, Address: 0x1012e6c, Func Offset: 0x1c
	// Line 537, Address: 0x1012e7c, Func Offset: 0x2c
	// Line 538, Address: 0x1012e88, Func Offset: 0x38
	// Line 541, Address: 0x1012e94, Func Offset: 0x44
	// Line 543, Address: 0x1012eac, Func Offset: 0x5c
	// Func End, Address: 0x1012ebc, Func Offset: 0x6c
}

// 
// Start address: 0x1012ec0
void clear_init(_anon0* pAct)
{
	_anon0* pTmpAct;
	unsigned short* wp;
	int i;
	// Line 552, Address: 0x1012ec0, Func Offset: 0
	// Line 557, Address: 0x1012ed4, Func Offset: 0x14
	// Line 558, Address: 0x1012ef0, Func Offset: 0x30
	// Line 563, Address: 0x1012f30, Func Offset: 0x70
	// Line 564, Address: 0x1012f38, Func Offset: 0x78
	// Line 565, Address: 0x1012f40, Func Offset: 0x80
	// Line 566, Address: 0x1012f4c, Func Offset: 0x8c
	// Line 567, Address: 0x1012f58, Func Offset: 0x98
	// Line 568, Address: 0x1012f64, Func Offset: 0xa4
	// Line 569, Address: 0x1012f70, Func Offset: 0xb0
	// Line 570, Address: 0x1012f7c, Func Offset: 0xbc
	// Line 571, Address: 0x1012f98, Func Offset: 0xd8
	// Line 572, Address: 0x1012fa4, Func Offset: 0xe4
	// Line 573, Address: 0x1012fb4, Func Offset: 0xf4
	// Line 574, Address: 0x1012fc4, Func Offset: 0x104
	// Line 576, Address: 0x1012fd4, Func Offset: 0x114
	// Line 579, Address: 0x1012fdc, Func Offset: 0x11c
	// Line 580, Address: 0x1012fec, Func Offset: 0x12c
	// Line 581, Address: 0x1012ffc, Func Offset: 0x13c
	// Line 585, Address: 0x101300c, Func Offset: 0x14c
	// Line 586, Address: 0x1013020, Func Offset: 0x160
	// Line 587, Address: 0x1013034, Func Offset: 0x174
	// Line 588, Address: 0x1013048, Func Offset: 0x188
	// Line 590, Address: 0x1013068, Func Offset: 0x1a8
	// Line 591, Address: 0x1013074, Func Offset: 0x1b4
	// Line 593, Address: 0x10130a0, Func Offset: 0x1e0
	// Line 594, Address: 0x10130ac, Func Offset: 0x1ec
	// Line 596, Address: 0x10130bc, Func Offset: 0x1fc
	// Func End, Address: 0x10130d4, Func Offset: 0x214
}

// 
// Start address: 0x10130e0
void clear_move0(_anon0* pAct)
{
	// Line 600, Address: 0x10130e0, Func Offset: 0
	// Line 601, Address: 0x10130ec, Func Offset: 0xc
	// Line 602, Address: 0x10130fc, Func Offset: 0x1c
	// Line 605, Address: 0x101310c, Func Offset: 0x2c
	// Line 607, Address: 0x101313c, Func Offset: 0x5c
	// Line 608, Address: 0x101314c, Func Offset: 0x6c
	// Line 610, Address: 0x101315c, Func Offset: 0x7c
	// Line 611, Address: 0x1013164, Func Offset: 0x84
	// Line 612, Address: 0x1013198, Func Offset: 0xb8
	// Line 613, Address: 0x10131a8, Func Offset: 0xc8
	// Line 615, Address: 0x10131b0, Func Offset: 0xd0
	// Line 619, Address: 0x10131c0, Func Offset: 0xe0
	// Line 620, Address: 0x10131d8, Func Offset: 0xf8
	// Line 623, Address: 0x10131e4, Func Offset: 0x104
	// Func End, Address: 0x10131f4, Func Offset: 0x114
}

// 
// Start address: 0x1013200
void clear_move1(_anon0* pAct)
{
	_anon2 lD0;
	// Line 627, Address: 0x1013200, Func Offset: 0
	// Line 630, Address: 0x101320c, Func Offset: 0xc
	// Line 631, Address: 0x1013210, Func Offset: 0x10
	// Line 632, Address: 0x101321c, Func Offset: 0x1c
	// Line 633, Address: 0x101322c, Func Offset: 0x2c
	// Line 634, Address: 0x101323c, Func Offset: 0x3c
	// Line 635, Address: 0x101324c, Func Offset: 0x4c
	// Line 636, Address: 0x1013264, Func Offset: 0x64
	// Line 637, Address: 0x1013274, Func Offset: 0x74
	// Line 638, Address: 0x10132a0, Func Offset: 0xa0
	// Line 642, Address: 0x10132c0, Func Offset: 0xc0
	// Line 643, Address: 0x10132dc, Func Offset: 0xdc
	// Line 644, Address: 0x10132ec, Func Offset: 0xec
	// Line 648, Address: 0x10132f8, Func Offset: 0xf8
	// Line 649, Address: 0x1013304, Func Offset: 0x104
	// Line 653, Address: 0x101330c, Func Offset: 0x10c
	// Line 654, Address: 0x101331c, Func Offset: 0x11c
	// Line 655, Address: 0x1013328, Func Offset: 0x128
	// Line 657, Address: 0x101333c, Func Offset: 0x13c
	// Line 659, Address: 0x101334c, Func Offset: 0x14c
	// Line 660, Address: 0x1013358, Func Offset: 0x158
	// Line 663, Address: 0x101336c, Func Offset: 0x16c
	// Line 664, Address: 0x101338c, Func Offset: 0x18c
	// Line 665, Address: 0x101339c, Func Offset: 0x19c
	// Line 666, Address: 0x10133a8, Func Offset: 0x1a8
	// Line 667, Address: 0x10133c0, Func Offset: 0x1c0
	// Line 669, Address: 0x10133cc, Func Offset: 0x1cc
	// Line 672, Address: 0x10133d4, Func Offset: 0x1d4
	// Line 673, Address: 0x10133e4, Func Offset: 0x1e4
	// Line 676, Address: 0x10133f4, Func Offset: 0x1f4
	// Line 677, Address: 0x1013424, Func Offset: 0x224
	// Line 681, Address: 0x1013430, Func Offset: 0x230
	// Line 682, Address: 0x101343c, Func Offset: 0x23c
	// Line 684, Address: 0x1013448, Func Offset: 0x248
	// Func End, Address: 0x1013458, Func Offset: 0x258
}

// 
// Start address: 0x1013460
void clear_move2(_anon0* pAct)
{
	_anon5 wD0;
	// Line 687, Address: 0x1013460, Func Offset: 0
	// Line 690, Address: 0x101346c, Func Offset: 0xc
	// Line 691, Address: 0x1013478, Func Offset: 0x18
	// Line 692, Address: 0x1013480, Func Offset: 0x20
	// Line 694, Address: 0x1013488, Func Offset: 0x28
	// Line 695, Address: 0x1013490, Func Offset: 0x30
	// Line 696, Address: 0x1013498, Func Offset: 0x38
	// Line 697, Address: 0x10134a0, Func Offset: 0x40
	// Line 699, Address: 0x10134a8, Func Offset: 0x48
	// Line 700, Address: 0x10134b0, Func Offset: 0x50
	// Line 701, Address: 0x10134b8, Func Offset: 0x58
	// Line 703, Address: 0x10134c0, Func Offset: 0x60
	// Line 704, Address: 0x10134d0, Func Offset: 0x70
	// Line 707, Address: 0x10134e4, Func Offset: 0x84
	// Line 708, Address: 0x10134f8, Func Offset: 0x98
	// Line 709, Address: 0x1013504, Func Offset: 0xa4
	// Line 710, Address: 0x1013510, Func Offset: 0xb0
	// Line 711, Address: 0x101351c, Func Offset: 0xbc
	// Line 712, Address: 0x1013534, Func Offset: 0xd4
	// Line 714, Address: 0x1013540, Func Offset: 0xe0
	// Line 715, Address: 0x1013558, Func Offset: 0xf8
	// Line 716, Address: 0x1013564, Func Offset: 0x104
	// Line 718, Address: 0x1013568, Func Offset: 0x108
	// Line 720, Address: 0x1013574, Func Offset: 0x114
	// Line 721, Address: 0x101357c, Func Offset: 0x11c
	// Line 722, Address: 0x1013584, Func Offset: 0x124
	// Line 723, Address: 0x1013590, Func Offset: 0x130
	// Line 724, Address: 0x10135a8, Func Offset: 0x148
	// Line 725, Address: 0x10135b0, Func Offset: 0x150
	// Line 728, Address: 0x10135b8, Func Offset: 0x158
	// Line 729, Address: 0x10135c8, Func Offset: 0x168
	// Line 730, Address: 0x10135e0, Func Offset: 0x180
	// Line 731, Address: 0x10135f0, Func Offset: 0x190
	// Line 733, Address: 0x10135f8, Func Offset: 0x198
	// Line 734, Address: 0x101362c, Func Offset: 0x1cc
	// Line 737, Address: 0x1013644, Func Offset: 0x1e4
	// Line 740, Address: 0x1013650, Func Offset: 0x1f0
	// Func End, Address: 0x1013660, Func Offset: 0x200
}

// 
// Start address: 0x1013660
void clear_wait(_anon0* pAct)
{
	// Line 743, Address: 0x1013660, Func Offset: 0
	// Line 744, Address: 0x1013668, Func Offset: 0x8
	// Line 745, Address: 0x1013698, Func Offset: 0x38
	// Func End, Address: 0x10136a4, Func Offset: 0x44
}

