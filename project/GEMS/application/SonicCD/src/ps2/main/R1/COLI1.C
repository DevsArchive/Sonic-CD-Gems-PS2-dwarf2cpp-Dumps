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
short pcolspecial(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5);
short eggman_chk(_anon1* pActwk, _anon1* pColliAct);
short yago(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5);
short main_attack(_anon1* pActwk, _anon1* pColliAct);

// 
// Start address: 0x101fc70
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
	// Line 73, Address: 0x101fc70, Func Offset: 0
	// Line 74, Address: 0x101fc9c, Func Offset: 0x2c
	// Line 77, Address: 0x101fcdc, Func Offset: 0x6c
	// Line 81, Address: 0x101fce8, Func Offset: 0x78
	// Line 82, Address: 0x101fcf4, Func Offset: 0x84
	// Line 84, Address: 0x101fd00, Func Offset: 0x90
	// Line 86, Address: 0x101fd18, Func Offset: 0xa8
	// Line 87, Address: 0x101fd24, Func Offset: 0xb4
	// Line 90, Address: 0x101fd30, Func Offset: 0xc0
	// Line 91, Address: 0x101fd3c, Func Offset: 0xcc
	// Line 93, Address: 0x101fd48, Func Offset: 0xd8
	// Line 95, Address: 0x101fd50, Func Offset: 0xe0
	// Line 98, Address: 0x101fd5c, Func Offset: 0xec
	// Line 100, Address: 0x101fd70, Func Offset: 0x100
	// Line 101, Address: 0x101fd80, Func Offset: 0x110
	// Line 103, Address: 0x101fd90, Func Offset: 0x120
	// Line 104, Address: 0x101fdb4, Func Offset: 0x144
	// Line 105, Address: 0x101fdc8, Func Offset: 0x158
	// Line 108, Address: 0x101fdd4, Func Offset: 0x164
	// Line 109, Address: 0x101fdf8, Func Offset: 0x188
	// Line 110, Address: 0x101fdfc, Func Offset: 0x18c
	// Line 111, Address: 0x101fe00, Func Offset: 0x190
	// Func End, Address: 0x101fe30, Func Offset: 0x1c0
}

// 
// Start address: 0x101fe30
short CollitblDataXchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 131, Address: 0x101fe30, Func Offset: 0
	// Line 132, Address: 0x101fe58, Func Offset: 0x28
	// Line 136, Address: 0x101fe6c, Func Offset: 0x3c
	// Line 137, Address: 0x101fe8c, Func Offset: 0x5c
	// Line 139, Address: 0x101feb4, Func Offset: 0x84
	// Line 140, Address: 0x101fee0, Func Offset: 0xb0
	// Line 141, Address: 0x101ff04, Func Offset: 0xd4
	// Line 143, Address: 0x101ff2c, Func Offset: 0xfc
	// Line 145, Address: 0x101ff44, Func Offset: 0x114
	// Line 146, Address: 0x101ff50, Func Offset: 0x120
	// Line 147, Address: 0x101ff68, Func Offset: 0x138
	// Line 148, Address: 0x101ff74, Func Offset: 0x144
	// Line 149, Address: 0x101ff8c, Func Offset: 0x15c
	// Line 151, Address: 0x101ffb4, Func Offset: 0x184
	// Line 154, Address: 0x101ffc0, Func Offset: 0x190
	// Line 155, Address: 0x101ffd4, Func Offset: 0x1a4
	// Line 158, Address: 0x101ffe0, Func Offset: 0x1b0
	// Line 160, Address: 0x1020000, Func Offset: 0x1d0
	// Func End, Address: 0x102001c, Func Offset: 0x1ec
}

// 
// Start address: 0x1020020
short CollitblDataYchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 182, Address: 0x1020020, Func Offset: 0
	// Line 186, Address: 0x1020048, Func Offset: 0x28
	// Line 188, Address: 0x1020074, Func Offset: 0x54
	// Line 189, Address: 0x10200a0, Func Offset: 0x80
	// Line 190, Address: 0x10200c4, Func Offset: 0xa4
	// Line 191, Address: 0x10200ec, Func Offset: 0xcc
	// Line 193, Address: 0x1020104, Func Offset: 0xe4
	// Line 194, Address: 0x1020110, Func Offset: 0xf0
	// Line 195, Address: 0x1020128, Func Offset: 0x108
	// Line 196, Address: 0x1020134, Func Offset: 0x114
	// Line 197, Address: 0x102014c, Func Offset: 0x12c
	// Line 199, Address: 0x1020170, Func Offset: 0x150
	// Line 203, Address: 0x102017c, Func Offset: 0x15c
	// Line 204, Address: 0x102019c, Func Offset: 0x17c
	// Line 207, Address: 0x10201a8, Func Offset: 0x188
	// Line 209, Address: 0x10201c4, Func Offset: 0x1a4
	// Func End, Address: 0x10201dc, Func Offset: 0x1bc
}

// 
// Start address: 0x10201e0
short ColliHitChk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	unsigned char iColino;
	// Line 234, Address: 0x10201e0, Func Offset: 0
	// Line 235, Address: 0x1020200, Func Offset: 0x20
	// Line 237, Address: 0x1020218, Func Offset: 0x38
	// Line 239, Address: 0x1020224, Func Offset: 0x44
	// Line 240, Address: 0x1020234, Func Offset: 0x54
	// Line 242, Address: 0x1020240, Func Offset: 0x60
	// Line 244, Address: 0x1020250, Func Offset: 0x70
	// Line 245, Address: 0x102026c, Func Offset: 0x8c
	// Line 247, Address: 0x1020278, Func Offset: 0x98
	// Line 249, Address: 0x1020290, Func Offset: 0xb0
	// Line 250, Address: 0x10202a0, Func Offset: 0xc0
	// Line 254, Address: 0x10202ac, Func Offset: 0xcc
	// Line 256, Address: 0x10202bc, Func Offset: 0xdc
	// Func End, Address: 0x10202d0, Func Offset: 0xf0
}

// 
// Start address: 0x10202d0
short pcolitem(_anon1* pActwk, _anon1* pColliAct)
{
	short iD0;
	// Line 271, Address: 0x10202d0, Func Offset: 0
	// Line 274, Address: 0x10202e4, Func Offset: 0x14
	// Line 277, Address: 0x1020300, Func Offset: 0x30
	// Line 278, Address: 0x1020318, Func Offset: 0x48
	// Line 279, Address: 0x1020328, Func Offset: 0x58
	// Line 283, Address: 0x1020330, Func Offset: 0x60
	// Line 285, Address: 0x1020348, Func Offset: 0x78
	// Line 286, Address: 0x102036c, Func Offset: 0x9c
	// Line 287, Address: 0x1020394, Func Offset: 0xc4
	// Line 289, Address: 0x10203a8, Func Offset: 0xd8
	// Line 290, Address: 0x10203cc, Func Offset: 0xfc
	// Line 291, Address: 0x10203d8, Func Offset: 0x108
	// Line 292, Address: 0x10203ec, Func Offset: 0x11c
	// Line 294, Address: 0x10203fc, Func Offset: 0x12c
	// Line 298, Address: 0x1020404, Func Offset: 0x134
	// Line 300, Address: 0x1020420, Func Offset: 0x150
	// Line 301, Address: 0x1020444, Func Offset: 0x174
	// Line 305, Address: 0x1020454, Func Offset: 0x184
	// Line 306, Address: 0x1020458, Func Offset: 0x188
	// Func End, Address: 0x102046c, Func Offset: 0x19c
}

// 
// Start address: 0x1020470
short pcolnomal(_anon1* pActwk, _anon1* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 322, Address: 0x1020470, Func Offset: 0
	// Line 326, Address: 0x1020488, Func Offset: 0x18
	// Line 330, Address: 0x10204cc, Func Offset: 0x5c
	// Line 331, Address: 0x10204dc, Func Offset: 0x6c
	// Line 335, Address: 0x10204e8, Func Offset: 0x78
	// Line 337, Address: 0x10204fc, Func Offset: 0x8c
	// Line 338, Address: 0x1020520, Func Offset: 0xb0
	// Line 339, Address: 0x1020544, Func Offset: 0xd4
	// Line 340, Address: 0x1020568, Func Offset: 0xf8
	// Line 341, Address: 0x102058c, Func Offset: 0x11c
	// Line 342, Address: 0x1020594, Func Offset: 0x124
	// Line 343, Address: 0x10205a4, Func Offset: 0x134
	// Line 344, Address: 0x10205b8, Func Offset: 0x148
	// Line 345, Address: 0x10205c8, Func Offset: 0x158
	// Line 349, Address: 0x10205d0, Func Offset: 0x160
	// Line 350, Address: 0x10205e0, Func Offset: 0x170
	// Line 351, Address: 0x10205f0, Func Offset: 0x180
	// Line 352, Address: 0x1020604, Func Offset: 0x194
	// Line 353, Address: 0x1020618, Func Offset: 0x1a8
	// Line 355, Address: 0x1020624, Func Offset: 0x1b4
	// Line 356, Address: 0x102062c, Func Offset: 0x1bc
	// Line 357, Address: 0x1020668, Func Offset: 0x1f8
	// Line 359, Address: 0x1020684, Func Offset: 0x214
	// Line 360, Address: 0x1020690, Func Offset: 0x220
	// Line 363, Address: 0x102069c, Func Offset: 0x22c
	// Line 364, Address: 0x10206ac, Func Offset: 0x23c
	// Line 365, Address: 0x10206b8, Func Offset: 0x248
	// Line 366, Address: 0x10206c4, Func Offset: 0x254
	// Line 367, Address: 0x10206cc, Func Offset: 0x25c
	// Line 369, Address: 0x10206d8, Func Offset: 0x268
	// Line 371, Address: 0x10206f0, Func Offset: 0x280
	// Line 372, Address: 0x102071c, Func Offset: 0x2ac
	// Line 374, Address: 0x1020748, Func Offset: 0x2d8
	// Line 375, Address: 0x1020758, Func Offset: 0x2e8
	// Line 377, Address: 0x1020760, Func Offset: 0x2f0
	// Line 379, Address: 0x1020770, Func Offset: 0x300
	// Line 380, Address: 0x1020774, Func Offset: 0x304
	// Func End, Address: 0x102078c, Func Offset: 0x31c
}

// 
// Start address: 0x1020790
short pcolplay2(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 396, Address: 0x1020790, Func Offset: 0
	// Line 397, Address: 0x10207a0, Func Offset: 0x10
	// Line 398, Address: 0x10207b0, Func Offset: 0x20
	// Line 399, Address: 0x10207c0, Func Offset: 0x30
	// Func End, Address: 0x10207d0, Func Offset: 0x40
}

// 
// Start address: 0x10207d0
short pcolplay(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 414, Address: 0x10207d0, Func Offset: 0
	// Line 415, Address: 0x10207e0, Func Offset: 0x10
	// Line 416, Address: 0x10207f4, Func Offset: 0x24
	// Line 418, Address: 0x102080c, Func Offset: 0x3c
	// Line 419, Address: 0x1020810, Func Offset: 0x40
	// Func End, Address: 0x1020820, Func Offset: 0x50
}

// 
// Start address: 0x1020820
short pcole(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 434, Address: 0x1020820, Func Offset: 0
	// Line 435, Address: 0x1020830, Func Offset: 0x10
	// Line 436, Address: 0x1020844, Func Offset: 0x24
	// Line 438, Address: 0x1020850, Func Offset: 0x30
	// Line 439, Address: 0x1020860, Func Offset: 0x40
	// Func End, Address: 0x1020870, Func Offset: 0x50
}

// 
// Start address: 0x1020870
void playdamagechk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 454, Address: 0x1020870, Func Offset: 0
	// Line 457, Address: 0x1020880, Func Offset: 0x10
	// Line 458, Address: 0x1020888, Func Offset: 0x18
	// Line 459, Address: 0x10208a0, Func Offset: 0x30
	// Line 460, Address: 0x10208a8, Func Offset: 0x38
	// Line 462, Address: 0x10208bc, Func Offset: 0x4c
	// Line 463, Address: 0x10208c8, Func Offset: 0x58
	// Line 464, Address: 0x10208d0, Func Offset: 0x60
	// Line 466, Address: 0x10208e0, Func Offset: 0x70
	// Line 468, Address: 0x10208f8, Func Offset: 0x88
	// Line 469, Address: 0x1020904, Func Offset: 0x94
	// Line 470, Address: 0x1020910, Func Offset: 0xa0
	// Line 473, Address: 0x1020918, Func Offset: 0xa8
	// Line 474, Address: 0x1020924, Func Offset: 0xb4
	// Line 477, Address: 0x1020930, Func Offset: 0xc0
	// Line 478, Address: 0x102095c, Func Offset: 0xec
	// Line 480, Address: 0x1020980, Func Offset: 0x110
	// Line 481, Address: 0x1020988, Func Offset: 0x118
	// Line 482, Address: 0x1020994, Func Offset: 0x124
	// Line 483, Address: 0x10209a0, Func Offset: 0x130
	// Func End, Address: 0x10209b0, Func Offset: 0x140
}

// 
// Start address: 0x10209b0
short playdamageset(_anon1* pActwk, _anon1* pColliAct)
{
	_anon1* pFreeAct;
	short iRet;
	// Line 498, Address: 0x10209b0, Func Offset: 0
	// Line 502, Address: 0x10209c4, Func Offset: 0x14
	// Line 504, Address: 0x10209d8, Func Offset: 0x28
	// Line 505, Address: 0x10209e8, Func Offset: 0x38
	// Line 507, Address: 0x10209f4, Func Offset: 0x44
	// Line 509, Address: 0x1020a0c, Func Offset: 0x5c
	// Line 510, Address: 0x1020a20, Func Offset: 0x70
	// Line 512, Address: 0x1020a30, Func Offset: 0x80
	// Line 513, Address: 0x1020a3c, Func Offset: 0x8c
	// Line 514, Address: 0x1020a4c, Func Offset: 0x9c
	// Line 517, Address: 0x1020a5c, Func Offset: 0xac
	// Line 518, Address: 0x1020a6c, Func Offset: 0xbc
	// Line 521, Address: 0x1020a78, Func Offset: 0xc8
	// Line 523, Address: 0x1020a90, Func Offset: 0xe0
	// Line 524, Address: 0x1020aa0, Func Offset: 0xf0
	// Line 526, Address: 0x1020aac, Func Offset: 0xfc
	// Line 527, Address: 0x1020ab8, Func Offset: 0x108
	// Func End, Address: 0x1020acc, Func Offset: 0x11c
}

// 
// Start address: 0x1020ad0
short playdieset(_anon1* pActwk)
{
	// Line 540, Address: 0x1020ad0, Func Offset: 0
	// Line 541, Address: 0x1020adc, Func Offset: 0xc
	// Line 542, Address: 0x1020af4, Func Offset: 0x24
	// Line 543, Address: 0x1020b00, Func Offset: 0x30
	// Line 544, Address: 0x1020b08, Func Offset: 0x38
	// Line 545, Address: 0x1020b14, Func Offset: 0x44
	// Line 546, Address: 0x1020b1c, Func Offset: 0x4c
	// Line 547, Address: 0x1020b2c, Func Offset: 0x5c
	// Line 548, Address: 0x1020b38, Func Offset: 0x68
	// Line 549, Address: 0x1020b40, Func Offset: 0x70
	// Line 550, Address: 0x1020b48, Func Offset: 0x78
	// Line 551, Address: 0x1020b58, Func Offset: 0x88
	// Line 552, Address: 0x1020b64, Func Offset: 0x94
	// Line 553, Address: 0x1020b74, Func Offset: 0xa4
	// Line 554, Address: 0x1020b7c, Func Offset: 0xac
	// Line 555, Address: 0x1020b88, Func Offset: 0xb8
	// Line 556, Address: 0x1020b8c, Func Offset: 0xbc
	// Func End, Address: 0x1020b9c, Func Offset: 0xcc
}

// 
// Start address: 0x1020ba0
short pcolspecial(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	char cColiNo;
	// Line 576, Address: 0x1020ba0, Func Offset: 0
	// Line 577, Address: 0x1020bc0, Func Offset: 0x20
	// Line 579, Address: 0x1020be0, Func Offset: 0x40
	// Line 582, Address: 0x1020c5c, Func Offset: 0xbc
	// Line 583, Address: 0x1020c6c, Func Offset: 0xcc
	// Line 585, Address: 0x1020c74, Func Offset: 0xd4
	// Line 586, Address: 0x1020c90, Func Offset: 0xf0
	// Line 591, Address: 0x1020c98, Func Offset: 0xf8
	// Line 592, Address: 0x1020ca8, Func Offset: 0x108
	// Line 596, Address: 0x1020cb0, Func Offset: 0x110
	// Line 597, Address: 0x1020cc0, Func Offset: 0x120
	// Line 599, Address: 0x1020cc8, Func Offset: 0x128
	// Line 600, Address: 0x1020ce8, Func Offset: 0x148
	// Line 601, Address: 0x1020d08, Func Offset: 0x168
	// Line 603, Address: 0x1020d18, Func Offset: 0x178
	// Line 604, Address: 0x1020d1c, Func Offset: 0x17c
	// Func End, Address: 0x1020d30, Func Offset: 0x190
}

// 
// Start address: 0x1020d30
short eggman_chk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 619, Address: 0x1020d30, Func Offset: 0
	// Line 620, Address: 0x1020d40, Func Offset: 0x10
	// Line 621, Address: 0x1020d64, Func Offset: 0x34
	// Line 622, Address: 0x1020d74, Func Offset: 0x44
	// Line 623, Address: 0x1020d98, Func Offset: 0x68
	// Line 624, Address: 0x1020da0, Func Offset: 0x70
	// Line 625, Address: 0x1020db0, Func Offset: 0x80
	// Line 626, Address: 0x1020db4, Func Offset: 0x84
	// Func End, Address: 0x1020dc4, Func Offset: 0x94
}

// 
// Start address: 0x1020dd0
short yago(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	// Line 646, Address: 0x1020dd0, Func Offset: 0
	// Line 647, Address: 0x1020dec, Func Offset: 0x1c
	// Line 648, Address: 0x1020dfc, Func Offset: 0x2c
	// Line 649, Address: 0x1020e14, Func Offset: 0x44
	// Line 650, Address: 0x1020e2c, Func Offset: 0x5c
	// Line 651, Address: 0x1020e4c, Func Offset: 0x7c
	// Line 652, Address: 0x1020e64, Func Offset: 0x94
	// Line 654, Address: 0x1020e70, Func Offset: 0xa0
	// Line 655, Address: 0x1020e98, Func Offset: 0xc8
	// Line 656, Address: 0x1020ea8, Func Offset: 0xd8
	// Line 658, Address: 0x1020ec0, Func Offset: 0xf0
	// Line 659, Address: 0x1020edc, Func Offset: 0x10c
	// Line 660, Address: 0x1020ee8, Func Offset: 0x118
	// Line 661, Address: 0x1020f00, Func Offset: 0x130
	// Line 663, Address: 0x1020f18, Func Offset: 0x148
	// Line 666, Address: 0x1020f30, Func Offset: 0x160
	// Line 667, Address: 0x1020f48, Func Offset: 0x178
	// Line 669, Address: 0x1020f60, Func Offset: 0x190
	// Line 670, Address: 0x1020f70, Func Offset: 0x1a0
	// Func End, Address: 0x1020f80, Func Offset: 0x1b0
}

// 
// Start address: 0x1020f80
short main_attack(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 685, Address: 0x1020f80, Func Offset: 0
	// Line 686, Address: 0x1020f8c, Func Offset: 0xc
	// Line 687, Address: 0x1020fa8, Func Offset: 0x28
	// Line 688, Address: 0x1020fb8, Func Offset: 0x38
	// Line 689, Address: 0x1020fbc, Func Offset: 0x3c
	// Func End, Address: 0x1020fc8, Func Offset: 0x48
}

