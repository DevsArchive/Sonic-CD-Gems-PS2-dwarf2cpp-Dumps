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
typedef _anon0 type_7[128];

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

unsigned char bCarry;
_anon0 actwk[128];
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

short pcol(_anon0* pActwk);
short CollitblDataXchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iD5);
short CollitblDataYchk(_anon0* pActwk, _anon0* pColliAct, short iYposi, short iColiNo, short iD5);
short ColliHitChk(_anon0* pActwk, _anon0* pColliAct);
short pcolitem(_anon0* pActwk, _anon0* pColliAct);
short pcolnomal(_anon0* pActwk, _anon0* pColliAct);
short pcolplay2(_anon0* pActwk, _anon0* pColliAct);
short pcolplay(_anon0* pActwk, _anon0* pColliAct);
short pcole(_anon0* pActwk, _anon0* pColliAct);
void playdamagechk(_anon0* pActwk, _anon0* pColliAct);
short playdamageset(_anon0* pActwk, _anon0* pColliAct);
short playdieset(_anon0* pActwk);
short pcolspecial(_anon0* pActwk, _anon0* pColliAct);
short eggman_chk(_anon0* pActwk, _anon0* pColliAct, char cColiNo);
void boss_1(_anon0* pActwk, _anon0* pColliAct, char cColiNo);
void boss_4(_anon0* pActwk, _anon0* pColliAct, char cColiNo);
void boss_5(_anon0* pActwk, _anon0* pColliAct, char cColiNo);
void main_attack(_anon0* pActwk, _anon0* pColliAct);

// 
// Start address: 0x1015a40
short pcol(_anon0* pActwk)
{
	short iXwork;
	short iYwork;
	short iSprvs;
	short iXcollichk;
	short i;
	short iRet;
	short iColino;
	_anon0* pColliAct;
	// Line 80, Address: 0x1015a40, Func Offset: 0
	// Line 81, Address: 0x1015a6c, Func Offset: 0x2c
	// Line 88, Address: 0x1015aac, Func Offset: 0x6c
	// Line 89, Address: 0x1015ac4, Func Offset: 0x84
	// Line 91, Address: 0x1015ad0, Func Offset: 0x90
	// Line 92, Address: 0x1015adc, Func Offset: 0x9c
	// Line 93, Address: 0x1015ae8, Func Offset: 0xa8
	// Line 95, Address: 0x1015b00, Func Offset: 0xc0
	// Line 96, Address: 0x1015b0c, Func Offset: 0xcc
	// Line 99, Address: 0x1015b18, Func Offset: 0xd8
	// Line 100, Address: 0x1015b24, Func Offset: 0xe4
	// Line 101, Address: 0x1015b30, Func Offset: 0xf0
	// Line 103, Address: 0x1015b38, Func Offset: 0xf8
	// Line 106, Address: 0x1015b44, Func Offset: 0x104
	// Line 108, Address: 0x1015b58, Func Offset: 0x118
	// Line 109, Address: 0x1015b68, Func Offset: 0x128
	// Line 111, Address: 0x1015b78, Func Offset: 0x138
	// Line 112, Address: 0x1015b9c, Func Offset: 0x15c
	// Line 113, Address: 0x1015ba4, Func Offset: 0x164
	// Line 116, Address: 0x1015bb0, Func Offset: 0x170
	// Line 117, Address: 0x1015bd4, Func Offset: 0x194
	// Line 118, Address: 0x1015bd8, Func Offset: 0x198
	// Func End, Address: 0x1015c08, Func Offset: 0x1c8
}

// 
// Start address: 0x1015c10
short CollitblDataXchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 138, Address: 0x1015c10, Func Offset: 0
	// Line 139, Address: 0x1015c38, Func Offset: 0x28
	// Line 143, Address: 0x1015c4c, Func Offset: 0x3c
	// Line 144, Address: 0x1015c6c, Func Offset: 0x5c
	// Line 146, Address: 0x1015c94, Func Offset: 0x84
	// Line 147, Address: 0x1015cc0, Func Offset: 0xb0
	// Line 148, Address: 0x1015ce4, Func Offset: 0xd4
	// Line 149, Address: 0x1015d0c, Func Offset: 0xfc
	// Line 151, Address: 0x1015d24, Func Offset: 0x114
	// Line 152, Address: 0x1015d30, Func Offset: 0x120
	// Line 153, Address: 0x1015d48, Func Offset: 0x138
	// Line 154, Address: 0x1015d54, Func Offset: 0x144
	// Line 155, Address: 0x1015d6c, Func Offset: 0x15c
	// Line 157, Address: 0x1015d90, Func Offset: 0x180
	// Line 160, Address: 0x1015d9c, Func Offset: 0x18c
	// Line 161, Address: 0x1015db0, Func Offset: 0x1a0
	// Line 163, Address: 0x1015dbc, Func Offset: 0x1ac
	// Line 164, Address: 0x1015dd8, Func Offset: 0x1c8
	// Func End, Address: 0x1015df4, Func Offset: 0x1e4
}

// 
// Start address: 0x1015e00
short CollitblDataYchk(_anon0* pActwk, _anon0* pColliAct, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 185, Address: 0x1015e00, Func Offset: 0
	// Line 189, Address: 0x1015e24, Func Offset: 0x24
	// Line 191, Address: 0x1015e50, Func Offset: 0x50
	// Line 192, Address: 0x1015e7c, Func Offset: 0x7c
	// Line 193, Address: 0x1015ea0, Func Offset: 0xa0
	// Line 194, Address: 0x1015ec8, Func Offset: 0xc8
	// Line 196, Address: 0x1015ee0, Func Offset: 0xe0
	// Line 197, Address: 0x1015eec, Func Offset: 0xec
	// Line 198, Address: 0x1015f04, Func Offset: 0x104
	// Line 199, Address: 0x1015f10, Func Offset: 0x110
	// Line 200, Address: 0x1015f28, Func Offset: 0x128
	// Line 202, Address: 0x1015f40, Func Offset: 0x140
	// Line 205, Address: 0x1015f4c, Func Offset: 0x14c
	// Line 206, Address: 0x1015f6c, Func Offset: 0x16c
	// Line 208, Address: 0x1015f78, Func Offset: 0x178
	// Line 209, Address: 0x1015f88, Func Offset: 0x188
	// Func End, Address: 0x1015fa0, Func Offset: 0x1a0
}

// 
// Start address: 0x1015fa0
short ColliHitChk(_anon0* pActwk, _anon0* pColliAct)
{
	unsigned char iColino;
	// Line 231, Address: 0x1015fa0, Func Offset: 0
	// Line 232, Address: 0x1015fb4, Func Offset: 0x14
	// Line 234, Address: 0x1015fcc, Func Offset: 0x2c
	// Line 236, Address: 0x1015fd8, Func Offset: 0x38
	// Line 237, Address: 0x1015fe8, Func Offset: 0x48
	// Line 239, Address: 0x1015ff4, Func Offset: 0x54
	// Line 241, Address: 0x1016004, Func Offset: 0x64
	// Line 242, Address: 0x1016014, Func Offset: 0x74
	// Line 244, Address: 0x1016020, Func Offset: 0x80
	// Line 246, Address: 0x1016038, Func Offset: 0x98
	// Line 247, Address: 0x1016048, Func Offset: 0xa8
	// Line 251, Address: 0x1016054, Func Offset: 0xb4
	// Line 253, Address: 0x1016064, Func Offset: 0xc4
	// Func End, Address: 0x1016078, Func Offset: 0xd8
}

// 
// Start address: 0x1016080
short pcolitem(_anon0* pActwk, _anon0* pColliAct)
{
	short iD0;
	// Line 268, Address: 0x1016080, Func Offset: 0
	// Line 271, Address: 0x1016094, Func Offset: 0x14
	// Line 274, Address: 0x10160b0, Func Offset: 0x30
	// Line 275, Address: 0x10160c8, Func Offset: 0x48
	// Line 276, Address: 0x10160d8, Func Offset: 0x58
	// Line 280, Address: 0x10160e0, Func Offset: 0x60
	// Line 282, Address: 0x10160f8, Func Offset: 0x78
	// Line 283, Address: 0x101611c, Func Offset: 0x9c
	// Line 284, Address: 0x1016144, Func Offset: 0xc4
	// Line 286, Address: 0x1016158, Func Offset: 0xd8
	// Line 287, Address: 0x101617c, Func Offset: 0xfc
	// Line 288, Address: 0x1016188, Func Offset: 0x108
	// Line 289, Address: 0x101619c, Func Offset: 0x11c
	// Line 291, Address: 0x10161ac, Func Offset: 0x12c
	// Line 295, Address: 0x10161b4, Func Offset: 0x134
	// Line 297, Address: 0x10161d0, Func Offset: 0x150
	// Line 298, Address: 0x10161f4, Func Offset: 0x174
	// Line 302, Address: 0x1016204, Func Offset: 0x184
	// Line 303, Address: 0x1016208, Func Offset: 0x188
	// Func End, Address: 0x101621c, Func Offset: 0x19c
}

// 
// Start address: 0x1016220
short pcolnomal(_anon0* pActwk, _anon0* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 318, Address: 0x1016220, Func Offset: 0
	// Line 322, Address: 0x1016238, Func Offset: 0x18
	// Line 326, Address: 0x101627c, Func Offset: 0x5c
	// Line 327, Address: 0x101628c, Func Offset: 0x6c
	// Line 331, Address: 0x1016298, Func Offset: 0x78
	// Line 333, Address: 0x10162ac, Func Offset: 0x8c
	// Line 334, Address: 0x10162d0, Func Offset: 0xb0
	// Line 335, Address: 0x10162f4, Func Offset: 0xd4
	// Line 336, Address: 0x1016318, Func Offset: 0xf8
	// Line 337, Address: 0x101633c, Func Offset: 0x11c
	// Line 338, Address: 0x1016344, Func Offset: 0x124
	// Line 339, Address: 0x1016354, Func Offset: 0x134
	// Line 340, Address: 0x1016368, Func Offset: 0x148
	// Line 341, Address: 0x1016378, Func Offset: 0x158
	// Line 345, Address: 0x1016380, Func Offset: 0x160
	// Line 346, Address: 0x1016390, Func Offset: 0x170
	// Line 347, Address: 0x10163a0, Func Offset: 0x180
	// Line 348, Address: 0x10163b4, Func Offset: 0x194
	// Line 349, Address: 0x10163c8, Func Offset: 0x1a8
	// Line 351, Address: 0x10163d4, Func Offset: 0x1b4
	// Line 352, Address: 0x10163dc, Func Offset: 0x1bc
	// Line 353, Address: 0x1016418, Func Offset: 0x1f8
	// Line 355, Address: 0x1016434, Func Offset: 0x214
	// Line 356, Address: 0x1016440, Func Offset: 0x220
	// Line 359, Address: 0x101644c, Func Offset: 0x22c
	// Line 360, Address: 0x101645c, Func Offset: 0x23c
	// Line 361, Address: 0x1016468, Func Offset: 0x248
	// Line 362, Address: 0x1016474, Func Offset: 0x254
	// Line 363, Address: 0x101647c, Func Offset: 0x25c
	// Line 365, Address: 0x1016488, Func Offset: 0x268
	// Line 367, Address: 0x10164a0, Func Offset: 0x280
	// Line 368, Address: 0x10164cc, Func Offset: 0x2ac
	// Line 370, Address: 0x10164f8, Func Offset: 0x2d8
	// Line 371, Address: 0x1016508, Func Offset: 0x2e8
	// Line 373, Address: 0x1016510, Func Offset: 0x2f0
	// Line 375, Address: 0x1016520, Func Offset: 0x300
	// Line 376, Address: 0x1016524, Func Offset: 0x304
	// Func End, Address: 0x101653c, Func Offset: 0x31c
}

// 
// Start address: 0x1016540
short pcolplay2(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 392, Address: 0x1016540, Func Offset: 0
	// Line 393, Address: 0x1016550, Func Offset: 0x10
	// Line 394, Address: 0x1016560, Func Offset: 0x20
	// Line 395, Address: 0x1016570, Func Offset: 0x30
	// Func End, Address: 0x1016580, Func Offset: 0x40
}

// 
// Start address: 0x1016580
short pcolplay(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 410, Address: 0x1016580, Func Offset: 0
	// Line 411, Address: 0x1016590, Func Offset: 0x10
	// Line 412, Address: 0x10165a4, Func Offset: 0x24
	// Line 413, Address: 0x10165b0, Func Offset: 0x30
	// Line 414, Address: 0x10165c4, Func Offset: 0x44
	// Line 416, Address: 0x10165dc, Func Offset: 0x5c
	// Line 417, Address: 0x10165e0, Func Offset: 0x60
	// Func End, Address: 0x10165f0, Func Offset: 0x70
}

// 
// Start address: 0x10165f0
short pcole(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 432, Address: 0x10165f0, Func Offset: 0
	// Line 433, Address: 0x1016600, Func Offset: 0x10
	// Line 434, Address: 0x1016614, Func Offset: 0x24
	// Line 436, Address: 0x1016620, Func Offset: 0x30
	// Line 437, Address: 0x1016630, Func Offset: 0x40
	// Func End, Address: 0x1016640, Func Offset: 0x50
}

// 
// Start address: 0x1016640
void playdamagechk(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 452, Address: 0x1016640, Func Offset: 0
	// Line 455, Address: 0x1016650, Func Offset: 0x10
	// Line 456, Address: 0x1016668, Func Offset: 0x28
	// Line 457, Address: 0x1016670, Func Offset: 0x30
	// Line 459, Address: 0x1016684, Func Offset: 0x44
	// Line 460, Address: 0x1016690, Func Offset: 0x50
	// Line 461, Address: 0x1016698, Func Offset: 0x58
	// Line 463, Address: 0x10166a8, Func Offset: 0x68
	// Line 465, Address: 0x10166c0, Func Offset: 0x80
	// Line 466, Address: 0x10166cc, Func Offset: 0x8c
	// Line 467, Address: 0x10166d8, Func Offset: 0x98
	// Line 470, Address: 0x10166e0, Func Offset: 0xa0
	// Line 471, Address: 0x10166ec, Func Offset: 0xac
	// Line 475, Address: 0x10166f8, Func Offset: 0xb8
	// Line 476, Address: 0x1016724, Func Offset: 0xe4
	// Line 478, Address: 0x1016748, Func Offset: 0x108
	// Line 479, Address: 0x1016750, Func Offset: 0x110
	// Line 480, Address: 0x101675c, Func Offset: 0x11c
	// Line 481, Address: 0x1016768, Func Offset: 0x128
	// Func End, Address: 0x1016778, Func Offset: 0x138
}

// 
// Start address: 0x1016780
short playdamageset(_anon0* pActwk, _anon0* pColliAct)
{
	_anon0* pFreeAct;
	int iRet;
	// Line 496, Address: 0x1016780, Func Offset: 0
	// Line 500, Address: 0x1016794, Func Offset: 0x14
	// Line 501, Address: 0x101679c, Func Offset: 0x1c
	// Line 502, Address: 0x10167ac, Func Offset: 0x2c
	// Line 504, Address: 0x10167b4, Func Offset: 0x34
	// Line 506, Address: 0x10167c8, Func Offset: 0x48
	// Line 507, Address: 0x10167d8, Func Offset: 0x58
	// Line 509, Address: 0x10167e4, Func Offset: 0x64
	// Line 511, Address: 0x10167fc, Func Offset: 0x7c
	// Line 512, Address: 0x101680c, Func Offset: 0x8c
	// Line 514, Address: 0x1016814, Func Offset: 0x94
	// Line 515, Address: 0x1016820, Func Offset: 0xa0
	// Line 516, Address: 0x1016830, Func Offset: 0xb0
	// Line 519, Address: 0x1016840, Func Offset: 0xc0
	// Line 520, Address: 0x1016850, Func Offset: 0xd0
	// Line 523, Address: 0x101685c, Func Offset: 0xdc
	// Line 525, Address: 0x1016874, Func Offset: 0xf4
	// Line 526, Address: 0x1016884, Func Offset: 0x104
	// Line 528, Address: 0x1016890, Func Offset: 0x110
	// Line 529, Address: 0x101689c, Func Offset: 0x11c
	// Func End, Address: 0x10168b0, Func Offset: 0x130
}

// 
// Start address: 0x10168b0
short playdieset(_anon0* pActwk)
{
	// Line 542, Address: 0x10168b0, Func Offset: 0
	// Line 543, Address: 0x10168bc, Func Offset: 0xc
	// Line 544, Address: 0x10168d4, Func Offset: 0x24
	// Line 545, Address: 0x10168e0, Func Offset: 0x30
	// Line 546, Address: 0x10168e8, Func Offset: 0x38
	// Line 547, Address: 0x10168f4, Func Offset: 0x44
	// Line 548, Address: 0x10168fc, Func Offset: 0x4c
	// Line 549, Address: 0x101690c, Func Offset: 0x5c
	// Line 550, Address: 0x1016918, Func Offset: 0x68
	// Line 551, Address: 0x1016920, Func Offset: 0x70
	// Line 552, Address: 0x1016928, Func Offset: 0x78
	// Line 553, Address: 0x1016938, Func Offset: 0x88
	// Line 554, Address: 0x1016944, Func Offset: 0x94
	// Line 555, Address: 0x1016954, Func Offset: 0xa4
	// Line 556, Address: 0x101695c, Func Offset: 0xac
	// Line 557, Address: 0x1016968, Func Offset: 0xb8
	// Line 558, Address: 0x101696c, Func Offset: 0xbc
	// Func End, Address: 0x101697c, Func Offset: 0xcc
}

// 
// Start address: 0x1016980
short pcolspecial(_anon0* pActwk, _anon0* pColliAct)
{
	char cColiNo;
	// Line 575, Address: 0x1016980, Func Offset: 0
	// Line 576, Address: 0x1016994, Func Offset: 0x14
	// Line 578, Address: 0x10169b4, Func Offset: 0x34
	// Line 582, Address: 0x1016a00, Func Offset: 0x80
	// Line 583, Address: 0x1016a10, Func Offset: 0x90
	// Line 587, Address: 0x1016a18, Func Offset: 0x98
	// Line 588, Address: 0x1016a28, Func Offset: 0xa8
	// Line 590, Address: 0x1016a30, Func Offset: 0xb0
	// Line 593, Address: 0x1016a44, Func Offset: 0xc4
	// Line 594, Address: 0x1016a48, Func Offset: 0xc8
	// Func End, Address: 0x1016a5c, Func Offset: 0xdc
}

// 
// Start address: 0x1016a60
short eggman_chk(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 611, Address: 0x1016a60, Func Offset: 0
	// Line 613, Address: 0x1016a74, Func Offset: 0x14
	// Line 614, Address: 0x1016a98, Func Offset: 0x38
	// Line 617, Address: 0x1016ad0, Func Offset: 0x70
	// Line 618, Address: 0x1016ae4, Func Offset: 0x84
	// Line 620, Address: 0x1016aec, Func Offset: 0x8c
	// Line 621, Address: 0x1016b00, Func Offset: 0xa0
	// Line 623, Address: 0x1016b08, Func Offset: 0xa8
	// Line 624, Address: 0x1016b1c, Func Offset: 0xbc
	// Line 626, Address: 0x1016b24, Func Offset: 0xc4
	// Line 629, Address: 0x1016b38, Func Offset: 0xd8
	// Line 630, Address: 0x1016b3c, Func Offset: 0xdc
	// Func End, Address: 0x1016b4c, Func Offset: 0xec
}

// 
// Start address: 0x1016b50
void boss_1(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 646, Address: 0x1016b50, Func Offset: 0
	// Line 647, Address: 0x1016b64, Func Offset: 0x14
	// Line 648, Address: 0x1016b94, Func Offset: 0x44
	// Line 655, Address: 0x1016b9c, Func Offset: 0x4c
	// Line 656, Address: 0x1016bac, Func Offset: 0x5c
	// Line 657, Address: 0x1016bc0, Func Offset: 0x70
	// Line 658, Address: 0x1016bd0, Func Offset: 0x80
	// Line 660, Address: 0x1016bd8, Func Offset: 0x88
	// Line 661, Address: 0x1016be8, Func Offset: 0x98
	// Func End, Address: 0x1016bf8, Func Offset: 0xa8
}

// 
// Start address: 0x1016c00
void boss_4(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 677, Address: 0x1016c00, Func Offset: 0
	// Line 678, Address: 0x1016c14, Func Offset: 0x14
	// Line 681, Address: 0x1016c2c, Func Offset: 0x2c
	// Line 683, Address: 0x1016c44, Func Offset: 0x44
	// Line 684, Address: 0x1016c54, Func Offset: 0x54
	// Line 685, Address: 0x1016c64, Func Offset: 0x64
	// Line 686, Address: 0x1016c6c, Func Offset: 0x6c
	// Line 688, Address: 0x1016c78, Func Offset: 0x78
	// Line 689, Address: 0x1016c84, Func Offset: 0x84
	// Line 690, Address: 0x1016c90, Func Offset: 0x90
	// Line 691, Address: 0x1016cbc, Func Offset: 0xbc
	// Line 692, Address: 0x1016ce0, Func Offset: 0xe0
	// Line 693, Address: 0x1016ce8, Func Offset: 0xe8
	// Line 695, Address: 0x1016d00, Func Offset: 0x100
	// Line 696, Address: 0x1016d10, Func Offset: 0x110
	// Line 698, Address: 0x1016d20, Func Offset: 0x120
	// Func End, Address: 0x1016d30, Func Offset: 0x130
}

// 
// Start address: 0x1016d30
void boss_5(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 713, Address: 0x1016d30, Func Offset: 0
	// Line 714, Address: 0x1016d44, Func Offset: 0x14
	// Line 716, Address: 0x1016d5c, Func Offset: 0x2c
	// Line 717, Address: 0x1016d6c, Func Offset: 0x3c
	// Line 719, Address: 0x1016d7c, Func Offset: 0x4c
	// Func End, Address: 0x1016d8c, Func Offset: 0x5c
}

// 
// Start address: 0x1016d90
void main_attack(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 734, Address: 0x1016d90, Func Offset: 0
	// Line 735, Address: 0x1016d9c, Func Offset: 0xc
	// Line 736, Address: 0x1016db8, Func Offset: 0x28
	// Line 737, Address: 0x1016dc8, Func Offset: 0x38
	// Func End, Address: 0x1016dd4, Func Offset: 0x44
}

