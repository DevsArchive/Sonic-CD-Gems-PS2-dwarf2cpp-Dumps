typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;


typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[2];
typedef unsigned char type_3[22];
typedef unsigned short type_4[4];
typedef unsigned char type_5[2];
typedef unsigned char type_6[2][64];
typedef _anon1 type_7[128];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
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

unsigned char bCarry;
_anon1 actwk[128];
unsigned char colitbl[2][64];
short emyscorecnt;
unsigned short escoretbl[4];
unsigned char plpower_m;
unsigned char plpower_a;
unsigned char plpower_b;
unsigned char conbine_flag;
_anon5 debugflag;
short plring;
_anon5 editmode;
unsigned char bossstart;

short pcol(_anon1* pActwk);
short CollitblDataXchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iD5);
short CollitblDataYchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5);
short ColliHitChk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5);
short pcolitem(_anon1* pActwk, _anon1* pColliAct);
short pcolnomal(_anon1* pActwk, _anon1* pColliAct);
short pcolplay2(_anon1* pActwk, _anon1* pColliAct);
short pcolplay(_anon1* pActwk, _anon1* pColliAct);
short pcole(_anon1* pActwk, _anon1* pColliAct);
void playdamagechk(_anon1* pActwk, _anon1* pColliAct);
short playdamageset(_anon1* pActwk, _anon1* pColliAct);
short playdieset(_anon1* pActwk);
short pcolspecial(_anon1* pActwk, _anon1* pColliAct);
short eggman_chk(_anon1* pActwk, _anon1* pColliAct);
short main_attack(_anon1* pActwk, _anon1* pColliAct);

// 
// Start address: 0x1015640
short pcol(_anon1* pActwk)
{
	short iXwork;
	short iYwork;
	short iSprvs;
	short iXcollichk;
	short i;
	short iRet;
	short iColino;
	_anon1* pColliAct;
	// Line 74, Address: 0x1015640, Func Offset: 0
	// Line 75, Address: 0x101566c, Func Offset: 0x2c
	// Line 78, Address: 0x10156ac, Func Offset: 0x6c
	// Line 82, Address: 0x10156b8, Func Offset: 0x78
	// Line 83, Address: 0x10156c4, Func Offset: 0x84
	// Line 85, Address: 0x10156d0, Func Offset: 0x90
	// Line 87, Address: 0x10156e8, Func Offset: 0xa8
	// Line 88, Address: 0x10156f4, Func Offset: 0xb4
	// Line 91, Address: 0x1015700, Func Offset: 0xc0
	// Line 92, Address: 0x101570c, Func Offset: 0xcc
	// Line 94, Address: 0x1015718, Func Offset: 0xd8
	// Line 96, Address: 0x1015720, Func Offset: 0xe0
	// Line 99, Address: 0x101572c, Func Offset: 0xec
	// Line 101, Address: 0x1015740, Func Offset: 0x100
	// Line 102, Address: 0x1015750, Func Offset: 0x110
	// Line 104, Address: 0x1015760, Func Offset: 0x120
	// Line 105, Address: 0x1015784, Func Offset: 0x144
	// Line 106, Address: 0x1015798, Func Offset: 0x158
	// Line 109, Address: 0x10157a4, Func Offset: 0x164
	// Line 110, Address: 0x10157c8, Func Offset: 0x188
	// Line 111, Address: 0x10157cc, Func Offset: 0x18c
	// Line 112, Address: 0x10157d0, Func Offset: 0x190
	// Func End, Address: 0x1015800, Func Offset: 0x1c0
}

// 
// Start address: 0x1015800
short CollitblDataXchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 132, Address: 0x1015800, Func Offset: 0
	// Line 133, Address: 0x1015828, Func Offset: 0x28
	// Line 137, Address: 0x101583c, Func Offset: 0x3c
	// Line 138, Address: 0x101585c, Func Offset: 0x5c
	// Line 140, Address: 0x1015884, Func Offset: 0x84
	// Line 141, Address: 0x10158b0, Func Offset: 0xb0
	// Line 142, Address: 0x10158d4, Func Offset: 0xd4
	// Line 144, Address: 0x10158fc, Func Offset: 0xfc
	// Line 146, Address: 0x1015914, Func Offset: 0x114
	// Line 147, Address: 0x1015920, Func Offset: 0x120
	// Line 148, Address: 0x1015938, Func Offset: 0x138
	// Line 149, Address: 0x1015944, Func Offset: 0x144
	// Line 150, Address: 0x101595c, Func Offset: 0x15c
	// Line 152, Address: 0x1015984, Func Offset: 0x184
	// Line 155, Address: 0x1015990, Func Offset: 0x190
	// Line 156, Address: 0x10159a4, Func Offset: 0x1a4
	// Line 159, Address: 0x10159b0, Func Offset: 0x1b0
	// Line 161, Address: 0x10159d0, Func Offset: 0x1d0
	// Func End, Address: 0x10159ec, Func Offset: 0x1ec
}

// 
// Start address: 0x10159f0
short CollitblDataYchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 183, Address: 0x10159f0, Func Offset: 0
	// Line 187, Address: 0x1015a18, Func Offset: 0x28
	// Line 189, Address: 0x1015a44, Func Offset: 0x54
	// Line 190, Address: 0x1015a70, Func Offset: 0x80
	// Line 191, Address: 0x1015a94, Func Offset: 0xa4
	// Line 192, Address: 0x1015abc, Func Offset: 0xcc
	// Line 194, Address: 0x1015ad4, Func Offset: 0xe4
	// Line 195, Address: 0x1015ae0, Func Offset: 0xf0
	// Line 196, Address: 0x1015af8, Func Offset: 0x108
	// Line 197, Address: 0x1015b04, Func Offset: 0x114
	// Line 198, Address: 0x1015b1c, Func Offset: 0x12c
	// Line 200, Address: 0x1015b40, Func Offset: 0x150
	// Line 204, Address: 0x1015b4c, Func Offset: 0x15c
	// Line 205, Address: 0x1015b6c, Func Offset: 0x17c
	// Line 208, Address: 0x1015b78, Func Offset: 0x188
	// Line 210, Address: 0x1015b94, Func Offset: 0x1a4
	// Func End, Address: 0x1015bac, Func Offset: 0x1bc
}

// 
// Start address: 0x1015bb0
short ColliHitChk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	unsigned char iColino;
	// Line 235, Address: 0x1015bb0, Func Offset: 0
	// Line 236, Address: 0x1015bd0, Func Offset: 0x20
	// Line 238, Address: 0x1015be8, Func Offset: 0x38
	// Line 240, Address: 0x1015bf4, Func Offset: 0x44
	// Line 241, Address: 0x1015c04, Func Offset: 0x54
	// Line 243, Address: 0x1015c10, Func Offset: 0x60
	// Line 245, Address: 0x1015c20, Func Offset: 0x70
	// Line 246, Address: 0x1015c3c, Func Offset: 0x8c
	// Line 248, Address: 0x1015c48, Func Offset: 0x98
	// Line 250, Address: 0x1015c60, Func Offset: 0xb0
	// Line 251, Address: 0x1015c70, Func Offset: 0xc0
	// Line 255, Address: 0x1015c7c, Func Offset: 0xcc
	// Line 257, Address: 0x1015c8c, Func Offset: 0xdc
	// Func End, Address: 0x1015ca0, Func Offset: 0xf0
}

// 
// Start address: 0x1015ca0
short pcolitem(_anon1* pActwk, _anon1* pColliAct)
{
	short iD0;
	// Line 272, Address: 0x1015ca0, Func Offset: 0
	// Line 275, Address: 0x1015cb4, Func Offset: 0x14
	// Line 278, Address: 0x1015cd0, Func Offset: 0x30
	// Line 279, Address: 0x1015ce8, Func Offset: 0x48
	// Line 280, Address: 0x1015cf8, Func Offset: 0x58
	// Line 284, Address: 0x1015d00, Func Offset: 0x60
	// Line 286, Address: 0x1015d18, Func Offset: 0x78
	// Line 287, Address: 0x1015d3c, Func Offset: 0x9c
	// Line 288, Address: 0x1015d64, Func Offset: 0xc4
	// Line 290, Address: 0x1015d78, Func Offset: 0xd8
	// Line 291, Address: 0x1015d9c, Func Offset: 0xfc
	// Line 292, Address: 0x1015da8, Func Offset: 0x108
	// Line 293, Address: 0x1015dbc, Func Offset: 0x11c
	// Line 295, Address: 0x1015dcc, Func Offset: 0x12c
	// Line 299, Address: 0x1015dd4, Func Offset: 0x134
	// Line 301, Address: 0x1015df0, Func Offset: 0x150
	// Line 302, Address: 0x1015e14, Func Offset: 0x174
	// Line 306, Address: 0x1015e24, Func Offset: 0x184
	// Line 307, Address: 0x1015e28, Func Offset: 0x188
	// Func End, Address: 0x1015e3c, Func Offset: 0x19c
}

// 
// Start address: 0x1015e40
short pcolnomal(_anon1* pActwk, _anon1* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 323, Address: 0x1015e40, Func Offset: 0
	// Line 327, Address: 0x1015e58, Func Offset: 0x18
	// Line 331, Address: 0x1015e9c, Func Offset: 0x5c
	// Line 332, Address: 0x1015eac, Func Offset: 0x6c
	// Line 336, Address: 0x1015eb8, Func Offset: 0x78
	// Line 338, Address: 0x1015ecc, Func Offset: 0x8c
	// Line 339, Address: 0x1015ef0, Func Offset: 0xb0
	// Line 340, Address: 0x1015f14, Func Offset: 0xd4
	// Line 341, Address: 0x1015f38, Func Offset: 0xf8
	// Line 342, Address: 0x1015f5c, Func Offset: 0x11c
	// Line 343, Address: 0x1015f64, Func Offset: 0x124
	// Line 344, Address: 0x1015f74, Func Offset: 0x134
	// Line 345, Address: 0x1015f88, Func Offset: 0x148
	// Line 346, Address: 0x1015f98, Func Offset: 0x158
	// Line 350, Address: 0x1015fa0, Func Offset: 0x160
	// Line 351, Address: 0x1015fb0, Func Offset: 0x170
	// Line 352, Address: 0x1015fc0, Func Offset: 0x180
	// Line 353, Address: 0x1015fd4, Func Offset: 0x194
	// Line 354, Address: 0x1015fe8, Func Offset: 0x1a8
	// Line 356, Address: 0x1015ff4, Func Offset: 0x1b4
	// Line 357, Address: 0x1015ffc, Func Offset: 0x1bc
	// Line 358, Address: 0x1016038, Func Offset: 0x1f8
	// Line 360, Address: 0x1016054, Func Offset: 0x214
	// Line 361, Address: 0x1016060, Func Offset: 0x220
	// Line 364, Address: 0x101606c, Func Offset: 0x22c
	// Line 365, Address: 0x101607c, Func Offset: 0x23c
	// Line 366, Address: 0x1016088, Func Offset: 0x248
	// Line 367, Address: 0x1016094, Func Offset: 0x254
	// Line 368, Address: 0x101609c, Func Offset: 0x25c
	// Line 370, Address: 0x10160a8, Func Offset: 0x268
	// Line 372, Address: 0x10160c0, Func Offset: 0x280
	// Line 373, Address: 0x10160f0, Func Offset: 0x2b0
	// Line 375, Address: 0x1016108, Func Offset: 0x2c8
	// Line 377, Address: 0x1016134, Func Offset: 0x2f4
	// Line 378, Address: 0x1016144, Func Offset: 0x304
	// Line 381, Address: 0x101614c, Func Offset: 0x30c
	// Line 384, Address: 0x101615c, Func Offset: 0x31c
	// Line 385, Address: 0x1016160, Func Offset: 0x320
	// Func End, Address: 0x1016178, Func Offset: 0x338
}

// 
// Start address: 0x1016180
short pcolplay2(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 401, Address: 0x1016180, Func Offset: 0
	// Line 402, Address: 0x1016190, Func Offset: 0x10
	// Line 403, Address: 0x10161a0, Func Offset: 0x20
	// Line 404, Address: 0x10161b0, Func Offset: 0x30
	// Func End, Address: 0x10161c0, Func Offset: 0x40
}

// 
// Start address: 0x10161c0
short pcolplay(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 419, Address: 0x10161c0, Func Offset: 0
	// Line 420, Address: 0x10161d0, Func Offset: 0x10
	// Line 421, Address: 0x10161e4, Func Offset: 0x24
	// Line 423, Address: 0x10161fc, Func Offset: 0x3c
	// Line 424, Address: 0x1016200, Func Offset: 0x40
	// Func End, Address: 0x1016210, Func Offset: 0x50
}

// 
// Start address: 0x1016210
short pcole(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 439, Address: 0x1016210, Func Offset: 0
	// Line 440, Address: 0x1016220, Func Offset: 0x10
	// Line 441, Address: 0x1016234, Func Offset: 0x24
	// Line 443, Address: 0x1016240, Func Offset: 0x30
	// Line 444, Address: 0x1016250, Func Offset: 0x40
	// Func End, Address: 0x1016260, Func Offset: 0x50
}

// 
// Start address: 0x1016260
void playdamagechk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 459, Address: 0x1016260, Func Offset: 0
	// Line 462, Address: 0x1016270, Func Offset: 0x10
	// Line 463, Address: 0x1016278, Func Offset: 0x18
	// Line 464, Address: 0x1016290, Func Offset: 0x30
	// Line 465, Address: 0x1016298, Func Offset: 0x38
	// Line 467, Address: 0x10162ac, Func Offset: 0x4c
	// Line 468, Address: 0x10162b8, Func Offset: 0x58
	// Line 469, Address: 0x10162c0, Func Offset: 0x60
	// Line 470, Address: 0x10162d0, Func Offset: 0x70
	// Line 472, Address: 0x10162e8, Func Offset: 0x88
	// Line 473, Address: 0x10162f4, Func Offset: 0x94
	// Line 474, Address: 0x1016300, Func Offset: 0xa0
	// Line 477, Address: 0x1016308, Func Offset: 0xa8
	// Line 478, Address: 0x1016314, Func Offset: 0xb4
	// Line 481, Address: 0x1016320, Func Offset: 0xc0
	// Line 482, Address: 0x101634c, Func Offset: 0xec
	// Line 484, Address: 0x1016370, Func Offset: 0x110
	// Line 485, Address: 0x1016378, Func Offset: 0x118
	// Line 486, Address: 0x1016384, Func Offset: 0x124
	// Line 487, Address: 0x1016390, Func Offset: 0x130
	// Func End, Address: 0x10163a0, Func Offset: 0x140
}

// 
// Start address: 0x10163a0
short playdamageset(_anon1* pActwk, _anon1* pColliAct)
{
	_anon1* pFreeAct;
	short iRet;
	// Line 502, Address: 0x10163a0, Func Offset: 0
	// Line 506, Address: 0x10163b4, Func Offset: 0x14
	// Line 508, Address: 0x10163c8, Func Offset: 0x28
	// Line 509, Address: 0x10163d8, Func Offset: 0x38
	// Line 511, Address: 0x10163e4, Func Offset: 0x44
	// Line 513, Address: 0x10163fc, Func Offset: 0x5c
	// Line 514, Address: 0x1016410, Func Offset: 0x70
	// Line 516, Address: 0x1016420, Func Offset: 0x80
	// Line 517, Address: 0x101642c, Func Offset: 0x8c
	// Line 518, Address: 0x101643c, Func Offset: 0x9c
	// Line 521, Address: 0x101644c, Func Offset: 0xac
	// Line 522, Address: 0x101645c, Func Offset: 0xbc
	// Line 525, Address: 0x1016468, Func Offset: 0xc8
	// Line 527, Address: 0x1016480, Func Offset: 0xe0
	// Line 528, Address: 0x1016490, Func Offset: 0xf0
	// Line 530, Address: 0x101649c, Func Offset: 0xfc
	// Line 531, Address: 0x10164a8, Func Offset: 0x108
	// Func End, Address: 0x10164bc, Func Offset: 0x11c
}

// 
// Start address: 0x10164c0
short playdieset(_anon1* pActwk)
{
	// Line 544, Address: 0x10164c0, Func Offset: 0
	// Line 545, Address: 0x10164cc, Func Offset: 0xc
	// Line 546, Address: 0x10164e4, Func Offset: 0x24
	// Line 547, Address: 0x10164f0, Func Offset: 0x30
	// Line 548, Address: 0x10164f8, Func Offset: 0x38
	// Line 549, Address: 0x1016504, Func Offset: 0x44
	// Line 550, Address: 0x101650c, Func Offset: 0x4c
	// Line 551, Address: 0x101651c, Func Offset: 0x5c
	// Line 552, Address: 0x1016528, Func Offset: 0x68
	// Line 553, Address: 0x1016530, Func Offset: 0x70
	// Line 554, Address: 0x1016538, Func Offset: 0x78
	// Line 555, Address: 0x1016548, Func Offset: 0x88
	// Line 556, Address: 0x1016554, Func Offset: 0x94
	// Line 557, Address: 0x1016564, Func Offset: 0xa4
	// Line 558, Address: 0x101656c, Func Offset: 0xac
	// Line 559, Address: 0x1016578, Func Offset: 0xb8
	// Line 560, Address: 0x101657c, Func Offset: 0xbc
	// Func End, Address: 0x101658c, Func Offset: 0xcc
}

// 
// Start address: 0x1016590
short pcolspecial(_anon1* pActwk, _anon1* pColliAct)
{
	char cColiNo;
	// Line 580, Address: 0x1016590, Func Offset: 0
	// Line 581, Address: 0x10165a4, Func Offset: 0x14
	// Line 583, Address: 0x10165c4, Func Offset: 0x34
	// Line 587, Address: 0x1016610, Func Offset: 0x80
	// Line 588, Address: 0x1016620, Func Offset: 0x90
	// Line 592, Address: 0x1016628, Func Offset: 0x98
	// Line 593, Address: 0x1016638, Func Offset: 0xa8
	// Line 596, Address: 0x1016640, Func Offset: 0xb0
	// Line 598, Address: 0x1016680, Func Offset: 0xf0
	// Line 601, Address: 0x101668c, Func Offset: 0xfc
	// Line 602, Address: 0x10166ac, Func Offset: 0x11c
	// Line 603, Address: 0x10166cc, Func Offset: 0x13c
	// Line 604, Address: 0x10166dc, Func Offset: 0x14c
	// Line 608, Address: 0x10166e4, Func Offset: 0x154
	// Line 610, Address: 0x10166f8, Func Offset: 0x168
	// Line 612, Address: 0x1016710, Func Offset: 0x180
	// Line 613, Address: 0x1016720, Func Offset: 0x190
	// Line 614, Address: 0x1016730, Func Offset: 0x1a0
	// Line 615, Address: 0x1016738, Func Offset: 0x1a8
	// Line 616, Address: 0x1016744, Func Offset: 0x1b4
	// Line 617, Address: 0x1016750, Func Offset: 0x1c0
	// Line 618, Address: 0x1016758, Func Offset: 0x1c8
	// Line 619, Address: 0x1016764, Func Offset: 0x1d4
	// Line 620, Address: 0x1016770, Func Offset: 0x1e0
	// Line 622, Address: 0x10167ac, Func Offset: 0x21c
	// Line 623, Address: 0x10167b4, Func Offset: 0x224
	// Line 625, Address: 0x10167c8, Func Offset: 0x238
	// Line 626, Address: 0x10167d8, Func Offset: 0x248
	// Line 627, Address: 0x10167e8, Func Offset: 0x258
	// Line 630, Address: 0x10167f0, Func Offset: 0x260
	// Line 636, Address: 0x10167fc, Func Offset: 0x26c
	// Line 638, Address: 0x1016810, Func Offset: 0x280
	// Line 639, Address: 0x1016820, Func Offset: 0x290
	// Line 647, Address: 0x1016830, Func Offset: 0x2a0
	// Line 648, Address: 0x1016834, Func Offset: 0x2a4
	// Func End, Address: 0x1016848, Func Offset: 0x2b8
}

// 
// Start address: 0x1016850
short eggman_chk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 663, Address: 0x1016850, Func Offset: 0
	// Line 664, Address: 0x1016860, Func Offset: 0x10
	// Line 665, Address: 0x1016870, Func Offset: 0x20
	// Line 666, Address: 0x1016894, Func Offset: 0x44
	// Line 667, Address: 0x101689c, Func Offset: 0x4c
	// Line 668, Address: 0x10168ac, Func Offset: 0x5c
	// Line 669, Address: 0x10168b0, Func Offset: 0x60
	// Func End, Address: 0x10168c0, Func Offset: 0x70
}

// 
// Start address: 0x10168c0
short main_attack(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 684, Address: 0x10168c0, Func Offset: 0
	// Line 685, Address: 0x10168cc, Func Offset: 0xc
	// Line 686, Address: 0x10168e8, Func Offset: 0x28
	// Line 687, Address: 0x10168f8, Func Offset: 0x38
	// Line 688, Address: 0x10168fc, Func Offset: 0x3c
	// Func End, Address: 0x1016908, Func Offset: 0x48
}

