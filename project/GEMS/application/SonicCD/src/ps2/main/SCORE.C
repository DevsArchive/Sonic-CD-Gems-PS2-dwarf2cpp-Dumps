typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;

typedef void(*type_7)();

typedef _anon0 type_0[20];
typedef _anon0 type_1[0];
typedef _anon1* type_2[6];
typedef unsigned char type_3[7];
typedef unsigned int type_4[4];
typedef unsigned char type_5[2];
typedef unsigned char type_6[22];
typedef unsigned int type_8[6];
typedef _anon1* type_9[4];
typedef unsigned char type_10[3];
typedef _anon2 type_11[128];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

union _anon8
{
	unsigned short w;
	_anon9 b;
};

struct _anon9
{
	unsigned char l;
	unsigned char h;
};

unsigned int subtbl[6];
unsigned int subtblh4[4];
_anon1 tenpat0;
_anon1 tenpat1;
_anon1 tenpat2;
_anon1 tenpat3;
_anon1 tenpat4;
_anon1 tenpat5;
_anon1* tenpat[6];
_anon1 scorepat0;
_anon1 scorepat1;
_anon1 scorepat2;
_anon1 scorepat3;
_anon1* scorepat[4];
unsigned char time_flag;
_anon6 debugflag;
_anon3 systemtimer;
short plring;
void(*WaveAllStop)();
unsigned char pl_suu_f;
unsigned char pl_suu;
int extrascore;
int plscore;
unsigned char plscore_f;
short timebonus;
short ringbonus;
_anon1 bonuspat;
_anon1 bonuspat0;
_anon6 stageno;
unsigned char bonus_f;
_anon3 pltime;
unsigned char plautoflag;
unsigned char pltimeover_f;
_anon2 actwk[128];
unsigned char pltime_f;
_anon8 pauseflag;
unsigned char plring_f;
short blkno;
unsigned char scoreinittbl[7];
unsigned char ringinittbl[3];

void tensuu(_anon2* pAct);
void ten_init(_anon2* pAct);
void ten_move(_anon2* pAct);
void score(_anon2* pAct);
void score_init(_anon2* pAct);
void score_move(_anon2* pAct);
void scoreup(unsigned int updata);
void scoreset();
void ringinit();
void scoreinit();
void posiwrt();
void bonuswrt(_anon0* pSprdat, unsigned int lDispVal);
void ringwrt(_anon0* pSprdat, unsigned int lDispVal);
void scorewrt(_anon0* pSprdat, unsigned int lDispVal);
void scorewrt2(_anon0* pSprdat, unsigned int lDispVal, unsigned int* subval, short sD6, short zero_disp);
void posiwrt0(_anon0* pSprdat, unsigned int lDispVal);
void playsuuwrt(_anon0* pSprdat);
void timewrt1(_anon0* pSprdat, unsigned int lDispVal);
void timewrt(_anon0* pSprdat, unsigned int lDispVal);
void timewrt0(_anon0* pSprdat, unsigned int lDispVal, unsigned int* subval, short sD6);

// 
// Start address: 0x10050b0
void tensuu(_anon2* pAct)
{
	// Line 295, Address: 0x10050b0, Func Offset: 0
	// Line 296, Address: 0x10050bc, Func Offset: 0xc
	// Line 297, Address: 0x10050d8, Func Offset: 0x28
	// Line 298, Address: 0x10050e4, Func Offset: 0x34
	// Line 301, Address: 0x10050f0, Func Offset: 0x40
	// Func End, Address: 0x1005100, Func Offset: 0x50
}

// 
// Start address: 0x1005100
void ten_init(_anon2* pAct)
{
	// Line 304, Address: 0x1005100, Func Offset: 0
	// Line 305, Address: 0x1005108, Func Offset: 0x8
	// Line 306, Address: 0x1005114, Func Offset: 0x14
	// Line 307, Address: 0x1005120, Func Offset: 0x20
	// Line 308, Address: 0x1005130, Func Offset: 0x30
	// Line 309, Address: 0x1005150, Func Offset: 0x50
	// Line 312, Address: 0x100515c, Func Offset: 0x5c
	// Func End, Address: 0x1005168, Func Offset: 0x68
}

// 
// Start address: 0x1005170
void ten_move(_anon2* pAct)
{
	// Line 315, Address: 0x1005170, Func Offset: 0
	// Line 316, Address: 0x100517c, Func Offset: 0xc
	// Line 319, Address: 0x100518c, Func Offset: 0x1c
	// Line 320, Address: 0x100519c, Func Offset: 0x2c
	// Line 321, Address: 0x10051a8, Func Offset: 0x38
	// Line 324, Address: 0x10051b8, Func Offset: 0x48
	// Func End, Address: 0x10051c8, Func Offset: 0x58
}

// 
// Start address: 0x10051d0
void score(_anon2* pAct)
{
	// Line 327, Address: 0x10051d0, Func Offset: 0
	// Line 328, Address: 0x10051dc, Func Offset: 0xc
	// Line 329, Address: 0x10051f8, Func Offset: 0x28
	// Line 330, Address: 0x1005204, Func Offset: 0x34
	// Line 332, Address: 0x100520c, Func Offset: 0x3c
	// Line 333, Address: 0x1005228, Func Offset: 0x58
	// Line 335, Address: 0x1005234, Func Offset: 0x64
	// Func End, Address: 0x1005244, Func Offset: 0x74
}

// 
// Start address: 0x1005250
void score_init(_anon2* pAct)
{
	// Line 338, Address: 0x1005250, Func Offset: 0
	// Line 339, Address: 0x1005258, Func Offset: 0x8
	// Line 340, Address: 0x1005264, Func Offset: 0x14
	// Line 341, Address: 0x1005274, Func Offset: 0x24
	// Line 342, Address: 0x1005280, Func Offset: 0x30
	// Line 343, Address: 0x100528c, Func Offset: 0x3c
	// Line 344, Address: 0x1005298, Func Offset: 0x48
	// Line 345, Address: 0x10052a8, Func Offset: 0x58
	// Line 346, Address: 0x10052b4, Func Offset: 0x64
	// Line 349, Address: 0x10052bc, Func Offset: 0x6c
	// Line 350, Address: 0x10052cc, Func Offset: 0x7c
	// Line 353, Address: 0x10052d8, Func Offset: 0x88
	// Line 354, Address: 0x10052e8, Func Offset: 0x98
	// Line 355, Address: 0x10052f4, Func Offset: 0xa4
	// Line 357, Address: 0x1005300, Func Offset: 0xb0
	// Line 359, Address: 0x100532c, Func Offset: 0xdc
	// Line 360, Address: 0x1005338, Func Offset: 0xe8
	// Line 362, Address: 0x1005340, Func Offset: 0xf0
	// Line 363, Address: 0x100534c, Func Offset: 0xfc
	// Line 365, Address: 0x1005354, Func Offset: 0x104
	// Line 371, Address: 0x1005360, Func Offset: 0x110
	// Func End, Address: 0x100536c, Func Offset: 0x11c
}

// 
// Start address: 0x1005370
void score_move(_anon2* pAct)
{
	// Line 373, Address: 0x1005370, Func Offset: 0
	// Line 374, Address: 0x100537c, Func Offset: 0xc
	// Line 375, Address: 0x100538c, Func Offset: 0x1c
	// Line 376, Address: 0x100539c, Func Offset: 0x2c
	// Line 377, Address: 0x10053ac, Func Offset: 0x3c
	// Line 378, Address: 0x10053b8, Func Offset: 0x48
	// Line 380, Address: 0x10053c4, Func Offset: 0x54
	// Line 383, Address: 0x10053cc, Func Offset: 0x5c
	// Line 384, Address: 0x10053e8, Func Offset: 0x78
	// Line 385, Address: 0x1005400, Func Offset: 0x90
	// Line 387, Address: 0x1005414, Func Offset: 0xa4
	// Line 390, Address: 0x1005420, Func Offset: 0xb0
	// Line 393, Address: 0x1005428, Func Offset: 0xb8
	// Line 394, Address: 0x1005430, Func Offset: 0xc0
	// Line 395, Address: 0x1005440, Func Offset: 0xd0
	// Line 400, Address: 0x100544c, Func Offset: 0xdc
	// Line 403, Address: 0x1005458, Func Offset: 0xe8
	// Func End, Address: 0x1005468, Func Offset: 0xf8
}

// 
// Start address: 0x1005470
void scoreup(unsigned int updata)
{
	// Line 408, Address: 0x1005470, Func Offset: 0
	// Line 409, Address: 0x100547c, Func Offset: 0xc
	// Line 411, Address: 0x1005488, Func Offset: 0x18
	// Line 412, Address: 0x10054a0, Func Offset: 0x30
	// Line 414, Address: 0x10054bc, Func Offset: 0x4c
	// Line 416, Address: 0x10054cc, Func Offset: 0x5c
	// Line 419, Address: 0x10054e8, Func Offset: 0x78
	// Line 420, Address: 0x10054fc, Func Offset: 0x8c
	// Line 421, Address: 0x1005510, Func Offset: 0xa0
	// Line 422, Address: 0x1005524, Func Offset: 0xb4
	// Line 423, Address: 0x1005534, Func Offset: 0xc4
	// Line 426, Address: 0x1005540, Func Offset: 0xd0
	// Func End, Address: 0x1005550, Func Offset: 0xe0
}

// 
// Start address: 0x1005550
void scoreset()
{
	_anon0* pSprdat;
	_anon1* pSprpat;
	// Line 432, Address: 0x1005550, Func Offset: 0
	// Line 436, Address: 0x1005560, Func Offset: 0x10
	// Line 437, Address: 0x1005568, Func Offset: 0x18
	// Line 438, Address: 0x1005578, Func Offset: 0x28
	// Line 440, Address: 0x1005580, Func Offset: 0x30
	// Line 441, Address: 0x1005588, Func Offset: 0x38
	// Line 442, Address: 0x10055b4, Func Offset: 0x64
	// Line 445, Address: 0x10055bc, Func Offset: 0x6c
	// Line 446, Address: 0x10055cc, Func Offset: 0x7c
	// Line 447, Address: 0x10055e4, Func Offset: 0x94
	// Line 450, Address: 0x10055ec, Func Offset: 0x9c
	// Line 451, Address: 0x10055f4, Func Offset: 0xa4
	// Line 452, Address: 0x10055fc, Func Offset: 0xac
	// Line 455, Address: 0x1005610, Func Offset: 0xc0
	// Line 456, Address: 0x1005620, Func Offset: 0xd0
	// Line 457, Address: 0x1005638, Func Offset: 0xe8
	// Line 460, Address: 0x1005640, Func Offset: 0xf0
	// Line 461, Address: 0x1005648, Func Offset: 0xf8
	// Line 463, Address: 0x1005670, Func Offset: 0x120
	// Line 464, Address: 0x1005678, Func Offset: 0x128
	// Line 468, Address: 0x1005694, Func Offset: 0x144
	// Line 469, Address: 0x10056c4, Func Offset: 0x174
	// Line 471, Address: 0x10056dc, Func Offset: 0x18c
	// Line 475, Address: 0x10056f4, Func Offset: 0x1a4
	// Line 476, Address: 0x10056fc, Func Offset: 0x1ac
	// Line 477, Address: 0x1005704, Func Offset: 0x1b4
	// Line 478, Address: 0x1005714, Func Offset: 0x1c4
	// Line 480, Address: 0x1005720, Func Offset: 0x1d0
	// Line 482, Address: 0x1005728, Func Offset: 0x1d8
	// Line 483, Address: 0x1005740, Func Offset: 0x1f0
	// Line 485, Address: 0x1005750, Func Offset: 0x200
	// Line 486, Address: 0x1005764, Func Offset: 0x214
	// Line 487, Address: 0x1005780, Func Offset: 0x230
	// Line 488, Address: 0x1005788, Func Offset: 0x238
	// Line 489, Address: 0x100579c, Func Offset: 0x24c
	// Line 490, Address: 0x10057b8, Func Offset: 0x268
	// Line 491, Address: 0x10057c0, Func Offset: 0x270
	// Line 492, Address: 0x10057d4, Func Offset: 0x284
	// Line 493, Address: 0x10057f0, Func Offset: 0x2a0
	// Line 500, Address: 0x10057fc, Func Offset: 0x2ac
	// Line 501, Address: 0x1005804, Func Offset: 0x2b4
	// Line 503, Address: 0x1005820, Func Offset: 0x2d0
	// Line 504, Address: 0x1005828, Func Offset: 0x2d8
	// Line 506, Address: 0x1005844, Func Offset: 0x2f4
	// Line 507, Address: 0x100584c, Func Offset: 0x2fc
	// Line 508, Address: 0x1005864, Func Offset: 0x314
	// Line 509, Address: 0x1005874, Func Offset: 0x324
	// Line 511, Address: 0x100587c, Func Offset: 0x32c
	// Line 516, Address: 0x10058c4, Func Offset: 0x374
	// Line 517, Address: 0x10058d4, Func Offset: 0x384
	// Line 518, Address: 0x10058dc, Func Offset: 0x38c
	// Line 519, Address: 0x10058e4, Func Offset: 0x394
	// Line 522, Address: 0x10058f0, Func Offset: 0x3a0
	// Line 523, Address: 0x1005900, Func Offset: 0x3b0
	// Line 524, Address: 0x1005908, Func Offset: 0x3b8
	// Line 525, Address: 0x1005934, Func Offset: 0x3e4
	// Line 526, Address: 0x100593c, Func Offset: 0x3ec
	// Line 527, Address: 0x1005958, Func Offset: 0x408
	// Line 528, Address: 0x1005974, Func Offset: 0x424
	// Line 529, Address: 0x1005988, Func Offset: 0x438
	// Line 533, Address: 0x1005990, Func Offset: 0x440
	// Func End, Address: 0x10059a8, Func Offset: 0x458
}

// 
// Start address: 0x10059b0
void ringinit()
{
	// Line 542, Address: 0x10059b0, Func Offset: 0
	// Func End, Address: 0x10059b8, Func Offset: 0x8
}

// 
// Start address: 0x10059c0
void scoreinit()
{
	_anon0* pSprdat;
	// Line 544, Address: 0x10059c0, Func Offset: 0
	// Line 547, Address: 0x10059cc, Func Offset: 0xc
	// Line 548, Address: 0x10059d4, Func Offset: 0x14
	// Line 551, Address: 0x10059e0, Func Offset: 0x20
	// Func End, Address: 0x10059f4, Func Offset: 0x34
}

// 
// Start address: 0x1005a00
void posiwrt()
{
	_anon0* pSprdat;
	_anon3 lwk;
	// Line 565, Address: 0x1005a00, Func Offset: 0
	// Line 569, Address: 0x1005a0c, Func Offset: 0xc
	// Line 570, Address: 0x1005a10, Func Offset: 0x10
	// Line 571, Address: 0x1005a1c, Func Offset: 0x1c
	// Line 572, Address: 0x1005a24, Func Offset: 0x24
	// Line 574, Address: 0x1005a34, Func Offset: 0x34
	// Line 575, Address: 0x1005a40, Func Offset: 0x40
	// Line 576, Address: 0x1005a48, Func Offset: 0x48
	// Line 577, Address: 0x1005a58, Func Offset: 0x58
	// Func End, Address: 0x1005a6c, Func Offset: 0x6c
}

// 
// Start address: 0x1005a70
void bonuswrt(_anon0* pSprdat, unsigned int lDispVal)
{
	// Line 581, Address: 0x1005a70, Func Offset: 0
	// Line 582, Address: 0x1005a80, Func Offset: 0x10
	// Line 584, Address: 0x1005aa0, Func Offset: 0x30
	// Func End, Address: 0x1005ab0, Func Offset: 0x40
}

// 
// Start address: 0x1005ab0
void ringwrt(_anon0* pSprdat, unsigned int lDispVal)
{
	// Line 586, Address: 0x1005ab0, Func Offset: 0
	// Line 587, Address: 0x1005ac0, Func Offset: 0x10
	// Line 589, Address: 0x1005ae0, Func Offset: 0x30
	// Func End, Address: 0x1005af0, Func Offset: 0x40
}

// 
// Start address: 0x1005af0
void scorewrt(_anon0* pSprdat, unsigned int lDispVal)
{
	// Line 592, Address: 0x1005af0, Func Offset: 0
	// Line 593, Address: 0x1005b00, Func Offset: 0x10
	// Line 595, Address: 0x1005b20, Func Offset: 0x30
	// Func End, Address: 0x1005b30, Func Offset: 0x40
}

// 
// Start address: 0x1005b30
void scorewrt2(_anon0* pSprdat, unsigned int lDispVal, unsigned int* subval, short sD6, short zero_disp)
{
	unsigned int lDisp1;
	int wrt;
	// Line 597, Address: 0x1005b30, Func Offset: 0
	// Line 599, Address: 0x1005b50, Func Offset: 0x20
	// Line 602, Address: 0x1005b54, Func Offset: 0x24
	// Line 603, Address: 0x1005b74, Func Offset: 0x44
	// Line 604, Address: 0x1005b8c, Func Offset: 0x5c
	// Line 605, Address: 0x1005b98, Func Offset: 0x68
	// Line 606, Address: 0x1005ba0, Func Offset: 0x70
	// Line 608, Address: 0x1005ba4, Func Offset: 0x74
	// Line 609, Address: 0x1005bcc, Func Offset: 0x9c
	// Line 610, Address: 0x1005be4, Func Offset: 0xb4
	// Line 612, Address: 0x1005bec, Func Offset: 0xbc
	// Line 614, Address: 0x1005bf4, Func Offset: 0xc4
	// Line 615, Address: 0x1005c00, Func Offset: 0xd0
	// Line 618, Address: 0x1005c24, Func Offset: 0xf4
	// Func End, Address: 0x1005c38, Func Offset: 0x108
}

// 
// Start address: 0x1005c40
void posiwrt0(_anon0* pSprdat, unsigned int lDispVal)
{
	// Line 624, Address: 0x1005c40, Func Offset: 0
	// Line 625, Address: 0x1005c50, Func Offset: 0x10
	// Line 627, Address: 0x1005c6c, Func Offset: 0x2c
	// Func End, Address: 0x1005c7c, Func Offset: 0x3c
}

// 
// Start address: 0x1005c80
void playsuuwrt(_anon0* pSprdat)
{
	unsigned int lDispVal;
	// Line 630, Address: 0x1005c80, Func Offset: 0
	// Line 633, Address: 0x1005c90, Func Offset: 0x10
	// Line 634, Address: 0x1005ca8, Func Offset: 0x28
	// Line 636, Address: 0x1005cb4, Func Offset: 0x34
	// Line 638, Address: 0x1005cc0, Func Offset: 0x40
	// Line 640, Address: 0x1005cdc, Func Offset: 0x5c
	// Func End, Address: 0x1005cf0, Func Offset: 0x70
}

// 
// Start address: 0x1005cf0
void timewrt1(_anon0* pSprdat, unsigned int lDispVal)
{
	// Line 644, Address: 0x1005cf0, Func Offset: 0
	// Line 645, Address: 0x1005d00, Func Offset: 0x10
	// Line 647, Address: 0x1005d1c, Func Offset: 0x2c
	// Func End, Address: 0x1005d2c, Func Offset: 0x3c
}

// 
// Start address: 0x1005d30
void timewrt(_anon0* pSprdat, unsigned int lDispVal)
{
	// Line 649, Address: 0x1005d30, Func Offset: 0
	// Line 650, Address: 0x1005d40, Func Offset: 0x10
	// Line 652, Address: 0x1005d5c, Func Offset: 0x2c
	// Func End, Address: 0x1005d6c, Func Offset: 0x3c
}

// 
// Start address: 0x1005d70
void timewrt0(_anon0* pSprdat, unsigned int lDispVal, unsigned int* subval, short sD6)
{
	unsigned short lDisp1;
	// Line 660, Address: 0x1005d70, Func Offset: 0
	// Line 664, Address: 0x1005d88, Func Offset: 0x18
	// Line 665, Address: 0x1005db0, Func Offset: 0x40
	// Line 666, Address: 0x1005dcc, Func Offset: 0x5c
	// Line 667, Address: 0x1005dd8, Func Offset: 0x68
	// Line 668, Address: 0x1005dec, Func Offset: 0x7c
	// Line 669, Address: 0x1005df8, Func Offset: 0x88
	// Line 683, Address: 0x1005e1c, Func Offset: 0xac
	// Func End, Address: 0x1005e2c, Func Offset: 0xbc
}

