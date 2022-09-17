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
short yago(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5);
short main_attack(_anon1* pActwk, _anon1* pColliAct);

// 
// Start address: 0x1016860
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
	// Line 77, Address: 0x1016860, Func Offset: 0
	// Line 78, Address: 0x101688c, Func Offset: 0x2c
	// Line 81, Address: 0x10168cc, Func Offset: 0x6c
	// Line 85, Address: 0x10168d8, Func Offset: 0x78
	// Line 86, Address: 0x10168e4, Func Offset: 0x84
	// Line 88, Address: 0x10168f0, Func Offset: 0x90
	// Line 90, Address: 0x1016908, Func Offset: 0xa8
	// Line 91, Address: 0x1016914, Func Offset: 0xb4
	// Line 94, Address: 0x1016920, Func Offset: 0xc0
	// Line 95, Address: 0x101692c, Func Offset: 0xcc
	// Line 97, Address: 0x1016938, Func Offset: 0xd8
	// Line 99, Address: 0x1016940, Func Offset: 0xe0
	// Line 102, Address: 0x101694c, Func Offset: 0xec
	// Line 104, Address: 0x1016960, Func Offset: 0x100
	// Line 105, Address: 0x1016970, Func Offset: 0x110
	// Line 107, Address: 0x1016980, Func Offset: 0x120
	// Line 108, Address: 0x10169a4, Func Offset: 0x144
	// Line 109, Address: 0x10169ac, Func Offset: 0x14c
	// Line 112, Address: 0x10169b8, Func Offset: 0x158
	// Line 113, Address: 0x10169dc, Func Offset: 0x17c
	// Line 114, Address: 0x10169e0, Func Offset: 0x180
	// Line 115, Address: 0x10169e4, Func Offset: 0x184
	// Func End, Address: 0x1016a14, Func Offset: 0x1b4
}

// 
// Start address: 0x1016a20
short CollitblDataXchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 135, Address: 0x1016a20, Func Offset: 0
	// Line 136, Address: 0x1016a48, Func Offset: 0x28
	// Line 140, Address: 0x1016a5c, Func Offset: 0x3c
	// Line 141, Address: 0x1016a7c, Func Offset: 0x5c
	// Line 143, Address: 0x1016aa4, Func Offset: 0x84
	// Line 144, Address: 0x1016ad0, Func Offset: 0xb0
	// Line 145, Address: 0x1016af4, Func Offset: 0xd4
	// Line 147, Address: 0x1016b1c, Func Offset: 0xfc
	// Line 149, Address: 0x1016b34, Func Offset: 0x114
	// Line 150, Address: 0x1016b40, Func Offset: 0x120
	// Line 151, Address: 0x1016b58, Func Offset: 0x138
	// Line 152, Address: 0x1016b64, Func Offset: 0x144
	// Line 153, Address: 0x1016b7c, Func Offset: 0x15c
	// Line 155, Address: 0x1016ba4, Func Offset: 0x184
	// Line 158, Address: 0x1016bb0, Func Offset: 0x190
	// Line 159, Address: 0x1016bc4, Func Offset: 0x1a4
	// Line 162, Address: 0x1016bd0, Func Offset: 0x1b0
	// Line 164, Address: 0x1016bf0, Func Offset: 0x1d0
	// Func End, Address: 0x1016c0c, Func Offset: 0x1ec
}

// 
// Start address: 0x1016c10
short CollitblDataYchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 186, Address: 0x1016c10, Func Offset: 0
	// Line 190, Address: 0x1016c38, Func Offset: 0x28
	// Line 192, Address: 0x1016c64, Func Offset: 0x54
	// Line 193, Address: 0x1016c90, Func Offset: 0x80
	// Line 194, Address: 0x1016cb4, Func Offset: 0xa4
	// Line 195, Address: 0x1016cdc, Func Offset: 0xcc
	// Line 197, Address: 0x1016cf4, Func Offset: 0xe4
	// Line 198, Address: 0x1016d00, Func Offset: 0xf0
	// Line 199, Address: 0x1016d18, Func Offset: 0x108
	// Line 200, Address: 0x1016d24, Func Offset: 0x114
	// Line 201, Address: 0x1016d3c, Func Offset: 0x12c
	// Line 203, Address: 0x1016d60, Func Offset: 0x150
	// Line 207, Address: 0x1016d6c, Func Offset: 0x15c
	// Line 208, Address: 0x1016d8c, Func Offset: 0x17c
	// Line 211, Address: 0x1016d98, Func Offset: 0x188
	// Line 213, Address: 0x1016db4, Func Offset: 0x1a4
	// Func End, Address: 0x1016dcc, Func Offset: 0x1bc
}

// 
// Start address: 0x1016dd0
short ColliHitChk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	unsigned char iColino;
	// Line 238, Address: 0x1016dd0, Func Offset: 0
	// Line 239, Address: 0x1016df0, Func Offset: 0x20
	// Line 241, Address: 0x1016e08, Func Offset: 0x38
	// Line 243, Address: 0x1016e14, Func Offset: 0x44
	// Line 244, Address: 0x1016e24, Func Offset: 0x54
	// Line 246, Address: 0x1016e30, Func Offset: 0x60
	// Line 248, Address: 0x1016e40, Func Offset: 0x70
	// Line 249, Address: 0x1016e5c, Func Offset: 0x8c
	// Line 251, Address: 0x1016e68, Func Offset: 0x98
	// Line 253, Address: 0x1016e80, Func Offset: 0xb0
	// Line 254, Address: 0x1016e90, Func Offset: 0xc0
	// Line 258, Address: 0x1016e9c, Func Offset: 0xcc
	// Line 260, Address: 0x1016eac, Func Offset: 0xdc
	// Func End, Address: 0x1016ec0, Func Offset: 0xf0
}

// 
// Start address: 0x1016ec0
short pcolitem(_anon1* pActwk, _anon1* pColliAct)
{
	short iD0;
	// Line 275, Address: 0x1016ec0, Func Offset: 0
	// Line 278, Address: 0x1016ed4, Func Offset: 0x14
	// Line 281, Address: 0x1016ef0, Func Offset: 0x30
	// Line 282, Address: 0x1016f08, Func Offset: 0x48
	// Line 283, Address: 0x1016f18, Func Offset: 0x58
	// Line 287, Address: 0x1016f20, Func Offset: 0x60
	// Line 289, Address: 0x1016f38, Func Offset: 0x78
	// Line 290, Address: 0x1016f5c, Func Offset: 0x9c
	// Line 291, Address: 0x1016f84, Func Offset: 0xc4
	// Line 293, Address: 0x1016f98, Func Offset: 0xd8
	// Line 294, Address: 0x1016fbc, Func Offset: 0xfc
	// Line 295, Address: 0x1016fc8, Func Offset: 0x108
	// Line 296, Address: 0x1016fdc, Func Offset: 0x11c
	// Line 298, Address: 0x1016fec, Func Offset: 0x12c
	// Line 302, Address: 0x1016ff4, Func Offset: 0x134
	// Line 304, Address: 0x1017010, Func Offset: 0x150
	// Line 305, Address: 0x1017034, Func Offset: 0x174
	// Line 309, Address: 0x1017044, Func Offset: 0x184
	// Line 310, Address: 0x1017048, Func Offset: 0x188
	// Func End, Address: 0x101705c, Func Offset: 0x19c
}

// 
// Start address: 0x1017060
short pcolnomal(_anon1* pActwk, _anon1* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 326, Address: 0x1017060, Func Offset: 0
	// Line 330, Address: 0x1017078, Func Offset: 0x18
	// Line 334, Address: 0x10170bc, Func Offset: 0x5c
	// Line 335, Address: 0x10170cc, Func Offset: 0x6c
	// Line 339, Address: 0x10170d8, Func Offset: 0x78
	// Line 341, Address: 0x10170ec, Func Offset: 0x8c
	// Line 342, Address: 0x1017110, Func Offset: 0xb0
	// Line 343, Address: 0x1017134, Func Offset: 0xd4
	// Line 344, Address: 0x1017158, Func Offset: 0xf8
	// Line 345, Address: 0x101717c, Func Offset: 0x11c
	// Line 346, Address: 0x1017184, Func Offset: 0x124
	// Line 347, Address: 0x1017194, Func Offset: 0x134
	// Line 348, Address: 0x10171a8, Func Offset: 0x148
	// Line 349, Address: 0x10171b8, Func Offset: 0x158
	// Line 353, Address: 0x10171c0, Func Offset: 0x160
	// Line 354, Address: 0x10171d0, Func Offset: 0x170
	// Line 355, Address: 0x10171e0, Func Offset: 0x180
	// Line 356, Address: 0x10171f4, Func Offset: 0x194
	// Line 357, Address: 0x1017208, Func Offset: 0x1a8
	// Line 359, Address: 0x1017214, Func Offset: 0x1b4
	// Line 360, Address: 0x101721c, Func Offset: 0x1bc
	// Line 361, Address: 0x1017258, Func Offset: 0x1f8
	// Line 363, Address: 0x1017274, Func Offset: 0x214
	// Line 364, Address: 0x1017280, Func Offset: 0x220
	// Line 367, Address: 0x101728c, Func Offset: 0x22c
	// Line 368, Address: 0x101729c, Func Offset: 0x23c
	// Line 369, Address: 0x10172a8, Func Offset: 0x248
	// Line 370, Address: 0x10172b4, Func Offset: 0x254
	// Line 371, Address: 0x10172bc, Func Offset: 0x25c
	// Line 373, Address: 0x10172c8, Func Offset: 0x268
	// Line 377, Address: 0x10172e0, Func Offset: 0x280
	// Line 378, Address: 0x101730c, Func Offset: 0x2ac
	// Line 380, Address: 0x1017338, Func Offset: 0x2d8
	// Line 381, Address: 0x1017348, Func Offset: 0x2e8
	// Line 383, Address: 0x1017350, Func Offset: 0x2f0
	// Line 385, Address: 0x1017360, Func Offset: 0x300
	// Line 386, Address: 0x1017364, Func Offset: 0x304
	// Func End, Address: 0x101737c, Func Offset: 0x31c
}

// 
// Start address: 0x1017380
short pcolplay2(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 402, Address: 0x1017380, Func Offset: 0
	// Line 403, Address: 0x1017390, Func Offset: 0x10
	// Line 404, Address: 0x10173a0, Func Offset: 0x20
	// Line 405, Address: 0x10173b0, Func Offset: 0x30
	// Func End, Address: 0x10173c0, Func Offset: 0x40
}

// 
// Start address: 0x10173c0
short pcolplay(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 420, Address: 0x10173c0, Func Offset: 0
	// Line 421, Address: 0x10173d0, Func Offset: 0x10
	// Line 422, Address: 0x10173e4, Func Offset: 0x24
	// Line 424, Address: 0x10173fc, Func Offset: 0x3c
	// Line 425, Address: 0x1017400, Func Offset: 0x40
	// Func End, Address: 0x1017410, Func Offset: 0x50
}

// 
// Start address: 0x1017410
short pcole(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 440, Address: 0x1017410, Func Offset: 0
	// Line 441, Address: 0x1017420, Func Offset: 0x10
	// Line 442, Address: 0x1017434, Func Offset: 0x24
	// Line 444, Address: 0x1017440, Func Offset: 0x30
	// Line 445, Address: 0x1017450, Func Offset: 0x40
	// Func End, Address: 0x1017460, Func Offset: 0x50
}

// 
// Start address: 0x1017460
void playdamagechk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 460, Address: 0x1017460, Func Offset: 0
	// Line 463, Address: 0x1017470, Func Offset: 0x10
	// Line 464, Address: 0x1017478, Func Offset: 0x18
	// Line 465, Address: 0x1017490, Func Offset: 0x30
	// Line 466, Address: 0x1017498, Func Offset: 0x38
	// Line 468, Address: 0x10174ac, Func Offset: 0x4c
	// Line 469, Address: 0x10174b8, Func Offset: 0x58
	// Line 470, Address: 0x10174c0, Func Offset: 0x60
	// Line 471, Address: 0x10174d0, Func Offset: 0x70
	// Line 473, Address: 0x10174e8, Func Offset: 0x88
	// Line 474, Address: 0x10174f4, Func Offset: 0x94
	// Line 475, Address: 0x1017500, Func Offset: 0xa0
	// Line 478, Address: 0x1017508, Func Offset: 0xa8
	// Line 479, Address: 0x1017514, Func Offset: 0xb4
	// Line 482, Address: 0x1017520, Func Offset: 0xc0
	// Line 483, Address: 0x101754c, Func Offset: 0xec
	// Line 485, Address: 0x1017570, Func Offset: 0x110
	// Line 486, Address: 0x1017578, Func Offset: 0x118
	// Line 487, Address: 0x1017584, Func Offset: 0x124
	// Line 488, Address: 0x1017590, Func Offset: 0x130
	// Func End, Address: 0x10175a0, Func Offset: 0x140
}

// 
// Start address: 0x10175a0
short playdamageset(_anon1* pActwk, _anon1* pColliAct)
{
	_anon1* pFreeAct;
	short iRet;
	// Line 503, Address: 0x10175a0, Func Offset: 0
	// Line 507, Address: 0x10175b4, Func Offset: 0x14
	// Line 509, Address: 0x10175c8, Func Offset: 0x28
	// Line 510, Address: 0x10175d8, Func Offset: 0x38
	// Line 512, Address: 0x10175e4, Func Offset: 0x44
	// Line 514, Address: 0x10175fc, Func Offset: 0x5c
	// Line 515, Address: 0x1017610, Func Offset: 0x70
	// Line 517, Address: 0x1017620, Func Offset: 0x80
	// Line 518, Address: 0x101762c, Func Offset: 0x8c
	// Line 519, Address: 0x101763c, Func Offset: 0x9c
	// Line 522, Address: 0x101764c, Func Offset: 0xac
	// Line 523, Address: 0x101765c, Func Offset: 0xbc
	// Line 526, Address: 0x1017668, Func Offset: 0xc8
	// Line 528, Address: 0x1017680, Func Offset: 0xe0
	// Line 529, Address: 0x1017690, Func Offset: 0xf0
	// Line 531, Address: 0x101769c, Func Offset: 0xfc
	// Line 532, Address: 0x10176a8, Func Offset: 0x108
	// Func End, Address: 0x10176bc, Func Offset: 0x11c
}

// 
// Start address: 0x10176c0
short playdieset(_anon1* pActwk)
{
	// Line 545, Address: 0x10176c0, Func Offset: 0
	// Line 546, Address: 0x10176cc, Func Offset: 0xc
	// Line 547, Address: 0x10176e4, Func Offset: 0x24
	// Line 548, Address: 0x10176f0, Func Offset: 0x30
	// Line 549, Address: 0x10176f8, Func Offset: 0x38
	// Line 550, Address: 0x1017704, Func Offset: 0x44
	// Line 551, Address: 0x101770c, Func Offset: 0x4c
	// Line 552, Address: 0x101771c, Func Offset: 0x5c
	// Line 553, Address: 0x1017728, Func Offset: 0x68
	// Line 554, Address: 0x1017730, Func Offset: 0x70
	// Line 555, Address: 0x1017738, Func Offset: 0x78
	// Line 556, Address: 0x1017748, Func Offset: 0x88
	// Line 557, Address: 0x1017754, Func Offset: 0x94
	// Line 558, Address: 0x1017764, Func Offset: 0xa4
	// Line 559, Address: 0x101776c, Func Offset: 0xac
	// Line 560, Address: 0x1017778, Func Offset: 0xb8
	// Line 561, Address: 0x101777c, Func Offset: 0xbc
	// Func End, Address: 0x101778c, Func Offset: 0xcc
}

// 
// Start address: 0x1017790
short pcolspecial(_anon1* pActwk, _anon1* pColliAct)
{
	char cColiNo;
	// Line 581, Address: 0x1017790, Func Offset: 0
	// Line 582, Address: 0x10177a4, Func Offset: 0x14
	// Line 584, Address: 0x10177c4, Func Offset: 0x34
	// Line 592, Address: 0x1017834, Func Offset: 0xa4
	// Line 593, Address: 0x1017844, Func Offset: 0xb4
	// Line 597, Address: 0x101784c, Func Offset: 0xbc
	// Line 598, Address: 0x101785c, Func Offset: 0xcc
	// Line 599, Address: 0x101786c, Func Offset: 0xdc
	// Line 609, Address: 0x1017874, Func Offset: 0xe4
	// Line 610, Address: 0x1017884, Func Offset: 0xf4
	// Line 613, Address: 0x101788c, Func Offset: 0xfc
	// Line 615, Address: 0x10178cc, Func Offset: 0x13c
	// Line 619, Address: 0x10178d8, Func Offset: 0x148
	// Line 621, Address: 0x10178ec, Func Offset: 0x15c
	// Line 622, Address: 0x1017904, Func Offset: 0x174
	// Line 623, Address: 0x1017914, Func Offset: 0x184
	// Line 626, Address: 0x101791c, Func Offset: 0x18c
	// Line 627, Address: 0x1017928, Func Offset: 0x198
	// Line 628, Address: 0x1017934, Func Offset: 0x1a4
	// Line 629, Address: 0x1017960, Func Offset: 0x1d0
	// Line 630, Address: 0x101796c, Func Offset: 0x1dc
	// Line 631, Address: 0x1017974, Func Offset: 0x1e4
	// Line 633, Address: 0x1017980, Func Offset: 0x1f0
	// Line 634, Address: 0x1017988, Func Offset: 0x1f8
	// Line 636, Address: 0x1017994, Func Offset: 0x204
	// Line 638, Address: 0x10179a8, Func Offset: 0x218
	// Line 641, Address: 0x10179b8, Func Offset: 0x228
	// Line 642, Address: 0x10179c8, Func Offset: 0x238
	// Line 643, Address: 0x10179d0, Func Offset: 0x240
	// Line 649, Address: 0x10179dc, Func Offset: 0x24c
	// Line 651, Address: 0x10179f0, Func Offset: 0x260
	// Line 654, Address: 0x1017a00, Func Offset: 0x270
	// Line 655, Address: 0x1017a10, Func Offset: 0x280
	// Line 656, Address: 0x1017a18, Func Offset: 0x288
	// Line 664, Address: 0x1017a24, Func Offset: 0x294
	// Line 665, Address: 0x1017a4c, Func Offset: 0x2bc
	// Line 668, Address: 0x1017a58, Func Offset: 0x2c8
	// Line 669, Address: 0x1017a68, Func Offset: 0x2d8
	// Line 670, Address: 0x1017a7c, Func Offset: 0x2ec
	// Line 674, Address: 0x1017a8c, Func Offset: 0x2fc
	// Line 677, Address: 0x1017a94, Func Offset: 0x304
	// Line 682, Address: 0x1017aa4, Func Offset: 0x314
	// Line 683, Address: 0x1017aa8, Func Offset: 0x318
	// Func End, Address: 0x1017abc, Func Offset: 0x32c
}

// 
// Start address: 0x1017ac0
short eggman_chk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 698, Address: 0x1017ac0, Func Offset: 0
	// Line 699, Address: 0x1017ad0, Func Offset: 0x10
	// Line 700, Address: 0x1017af4, Func Offset: 0x34
	// Line 701, Address: 0x1017b04, Func Offset: 0x44
	// Line 702, Address: 0x1017b28, Func Offset: 0x68
	// Line 703, Address: 0x1017b30, Func Offset: 0x70
	// Line 704, Address: 0x1017b40, Func Offset: 0x80
	// Line 705, Address: 0x1017b44, Func Offset: 0x84
	// Func End, Address: 0x1017b54, Func Offset: 0x94
}

// 
// Start address: 0x1017b60
short yago(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	// Line 725, Address: 0x1017b60, Func Offset: 0
	// Line 726, Address: 0x1017b7c, Func Offset: 0x1c
	// Line 727, Address: 0x1017b8c, Func Offset: 0x2c
	// Line 728, Address: 0x1017ba4, Func Offset: 0x44
	// Line 729, Address: 0x1017bbc, Func Offset: 0x5c
	// Line 730, Address: 0x1017bdc, Func Offset: 0x7c
	// Line 731, Address: 0x1017bf4, Func Offset: 0x94
	// Line 733, Address: 0x1017c00, Func Offset: 0xa0
	// Line 734, Address: 0x1017c28, Func Offset: 0xc8
	// Line 735, Address: 0x1017c38, Func Offset: 0xd8
	// Line 737, Address: 0x1017c50, Func Offset: 0xf0
	// Line 738, Address: 0x1017c6c, Func Offset: 0x10c
	// Line 739, Address: 0x1017c78, Func Offset: 0x118
	// Line 740, Address: 0x1017c90, Func Offset: 0x130
	// Line 742, Address: 0x1017ca8, Func Offset: 0x148
	// Line 745, Address: 0x1017cc0, Func Offset: 0x160
	// Line 746, Address: 0x1017cd8, Func Offset: 0x178
	// Line 748, Address: 0x1017cf0, Func Offset: 0x190
	// Line 749, Address: 0x1017d00, Func Offset: 0x1a0
	// Func End, Address: 0x1017d10, Func Offset: 0x1b0
}

// 
// Start address: 0x1017d10
short main_attack(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 764, Address: 0x1017d10, Func Offset: 0
	// Line 765, Address: 0x1017d1c, Func Offset: 0xc
	// Line 766, Address: 0x1017d38, Func Offset: 0x28
	// Line 767, Address: 0x1017d48, Func Offset: 0x38
	// Line 768, Address: 0x1017d4c, Func Offset: 0x3c
	// Func End, Address: 0x1017d58, Func Offset: 0x48
}

