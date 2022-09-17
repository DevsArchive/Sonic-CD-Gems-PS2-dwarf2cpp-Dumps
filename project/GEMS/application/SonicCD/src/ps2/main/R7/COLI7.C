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
// Start address: 0x101cb00
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
	// Line 77, Address: 0x101cb00, Func Offset: 0
	// Line 78, Address: 0x101cb2c, Func Offset: 0x2c
	// Line 81, Address: 0x101cb6c, Func Offset: 0x6c
	// Line 85, Address: 0x101cb78, Func Offset: 0x78
	// Line 86, Address: 0x101cb84, Func Offset: 0x84
	// Line 88, Address: 0x101cb90, Func Offset: 0x90
	// Line 90, Address: 0x101cba8, Func Offset: 0xa8
	// Line 91, Address: 0x101cbb4, Func Offset: 0xb4
	// Line 94, Address: 0x101cbc0, Func Offset: 0xc0
	// Line 95, Address: 0x101cbcc, Func Offset: 0xcc
	// Line 97, Address: 0x101cbd8, Func Offset: 0xd8
	// Line 99, Address: 0x101cbe0, Func Offset: 0xe0
	// Line 102, Address: 0x101cbec, Func Offset: 0xec
	// Line 104, Address: 0x101cc00, Func Offset: 0x100
	// Line 105, Address: 0x101cc10, Func Offset: 0x110
	// Line 107, Address: 0x101cc20, Func Offset: 0x120
	// Line 108, Address: 0x101cc44, Func Offset: 0x144
	// Line 109, Address: 0x101cc58, Func Offset: 0x158
	// Line 112, Address: 0x101cc64, Func Offset: 0x164
	// Line 113, Address: 0x101cc88, Func Offset: 0x188
	// Line 114, Address: 0x101cc8c, Func Offset: 0x18c
	// Line 115, Address: 0x101cc90, Func Offset: 0x190
	// Func End, Address: 0x101ccc0, Func Offset: 0x1c0
}

// 
// Start address: 0x101ccc0
short CollitblDataXchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 135, Address: 0x101ccc0, Func Offset: 0
	// Line 136, Address: 0x101cce8, Func Offset: 0x28
	// Line 140, Address: 0x101ccfc, Func Offset: 0x3c
	// Line 141, Address: 0x101cd1c, Func Offset: 0x5c
	// Line 143, Address: 0x101cd44, Func Offset: 0x84
	// Line 144, Address: 0x101cd70, Func Offset: 0xb0
	// Line 145, Address: 0x101cd94, Func Offset: 0xd4
	// Line 147, Address: 0x101cdbc, Func Offset: 0xfc
	// Line 149, Address: 0x101cdd4, Func Offset: 0x114
	// Line 150, Address: 0x101cde0, Func Offset: 0x120
	// Line 151, Address: 0x101cdf8, Func Offset: 0x138
	// Line 152, Address: 0x101ce04, Func Offset: 0x144
	// Line 153, Address: 0x101ce1c, Func Offset: 0x15c
	// Line 155, Address: 0x101ce44, Func Offset: 0x184
	// Line 158, Address: 0x101ce50, Func Offset: 0x190
	// Line 159, Address: 0x101ce64, Func Offset: 0x1a4
	// Line 162, Address: 0x101ce70, Func Offset: 0x1b0
	// Line 164, Address: 0x101ce90, Func Offset: 0x1d0
	// Func End, Address: 0x101ceac, Func Offset: 0x1ec
}

// 
// Start address: 0x101ceb0
short CollitblDataYchk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 186, Address: 0x101ceb0, Func Offset: 0
	// Line 190, Address: 0x101ced8, Func Offset: 0x28
	// Line 192, Address: 0x101cf04, Func Offset: 0x54
	// Line 193, Address: 0x101cf30, Func Offset: 0x80
	// Line 194, Address: 0x101cf54, Func Offset: 0xa4
	// Line 195, Address: 0x101cf7c, Func Offset: 0xcc
	// Line 197, Address: 0x101cf94, Func Offset: 0xe4
	// Line 198, Address: 0x101cfa0, Func Offset: 0xf0
	// Line 199, Address: 0x101cfb8, Func Offset: 0x108
	// Line 200, Address: 0x101cfc4, Func Offset: 0x114
	// Line 201, Address: 0x101cfdc, Func Offset: 0x12c
	// Line 203, Address: 0x101d000, Func Offset: 0x150
	// Line 207, Address: 0x101d00c, Func Offset: 0x15c
	// Line 208, Address: 0x101d02c, Func Offset: 0x17c
	// Line 211, Address: 0x101d038, Func Offset: 0x188
	// Line 213, Address: 0x101d054, Func Offset: 0x1a4
	// Func End, Address: 0x101d06c, Func Offset: 0x1bc
}

// 
// Start address: 0x101d070
short ColliHitChk(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	unsigned char iColino;
	// Line 238, Address: 0x101d070, Func Offset: 0
	// Line 239, Address: 0x101d090, Func Offset: 0x20
	// Line 241, Address: 0x101d0a8, Func Offset: 0x38
	// Line 243, Address: 0x101d0b4, Func Offset: 0x44
	// Line 244, Address: 0x101d0c4, Func Offset: 0x54
	// Line 246, Address: 0x101d0d0, Func Offset: 0x60
	// Line 248, Address: 0x101d0e0, Func Offset: 0x70
	// Line 249, Address: 0x101d0fc, Func Offset: 0x8c
	// Line 251, Address: 0x101d108, Func Offset: 0x98
	// Line 253, Address: 0x101d120, Func Offset: 0xb0
	// Line 254, Address: 0x101d130, Func Offset: 0xc0
	// Line 258, Address: 0x101d13c, Func Offset: 0xcc
	// Line 260, Address: 0x101d14c, Func Offset: 0xdc
	// Func End, Address: 0x101d160, Func Offset: 0xf0
}

// 
// Start address: 0x101d160
short pcolitem(_anon1* pActwk, _anon1* pColliAct)
{
	short iD0;
	// Line 275, Address: 0x101d160, Func Offset: 0
	// Line 278, Address: 0x101d174, Func Offset: 0x14
	// Line 281, Address: 0x101d190, Func Offset: 0x30
	// Line 282, Address: 0x101d1a8, Func Offset: 0x48
	// Line 283, Address: 0x101d1b8, Func Offset: 0x58
	// Line 287, Address: 0x101d1c0, Func Offset: 0x60
	// Line 289, Address: 0x101d1d8, Func Offset: 0x78
	// Line 290, Address: 0x101d1fc, Func Offset: 0x9c
	// Line 291, Address: 0x101d224, Func Offset: 0xc4
	// Line 293, Address: 0x101d238, Func Offset: 0xd8
	// Line 294, Address: 0x101d25c, Func Offset: 0xfc
	// Line 295, Address: 0x101d268, Func Offset: 0x108
	// Line 296, Address: 0x101d27c, Func Offset: 0x11c
	// Line 298, Address: 0x101d28c, Func Offset: 0x12c
	// Line 302, Address: 0x101d294, Func Offset: 0x134
	// Line 304, Address: 0x101d2b0, Func Offset: 0x150
	// Line 305, Address: 0x101d2d4, Func Offset: 0x174
	// Line 309, Address: 0x101d2e4, Func Offset: 0x184
	// Line 310, Address: 0x101d2e8, Func Offset: 0x188
	// Func End, Address: 0x101d2fc, Func Offset: 0x19c
}

// 
// Start address: 0x101d300
short pcolnomal(_anon1* pActwk, _anon1* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 326, Address: 0x101d300, Func Offset: 0
	// Line 330, Address: 0x101d318, Func Offset: 0x18
	// Line 334, Address: 0x101d35c, Func Offset: 0x5c
	// Line 335, Address: 0x101d36c, Func Offset: 0x6c
	// Line 339, Address: 0x101d378, Func Offset: 0x78
	// Line 341, Address: 0x101d38c, Func Offset: 0x8c
	// Line 342, Address: 0x101d3b0, Func Offset: 0xb0
	// Line 343, Address: 0x101d3d4, Func Offset: 0xd4
	// Line 344, Address: 0x101d3f8, Func Offset: 0xf8
	// Line 345, Address: 0x101d41c, Func Offset: 0x11c
	// Line 346, Address: 0x101d424, Func Offset: 0x124
	// Line 347, Address: 0x101d434, Func Offset: 0x134
	// Line 348, Address: 0x101d448, Func Offset: 0x148
	// Line 349, Address: 0x101d458, Func Offset: 0x158
	// Line 353, Address: 0x101d460, Func Offset: 0x160
	// Line 354, Address: 0x101d470, Func Offset: 0x170
	// Line 355, Address: 0x101d480, Func Offset: 0x180
	// Line 356, Address: 0x101d494, Func Offset: 0x194
	// Line 357, Address: 0x101d4a8, Func Offset: 0x1a8
	// Line 359, Address: 0x101d4b4, Func Offset: 0x1b4
	// Line 360, Address: 0x101d4bc, Func Offset: 0x1bc
	// Line 361, Address: 0x101d4f8, Func Offset: 0x1f8
	// Line 363, Address: 0x101d514, Func Offset: 0x214
	// Line 364, Address: 0x101d520, Func Offset: 0x220
	// Line 367, Address: 0x101d52c, Func Offset: 0x22c
	// Line 368, Address: 0x101d53c, Func Offset: 0x23c
	// Line 369, Address: 0x101d548, Func Offset: 0x248
	// Line 370, Address: 0x101d554, Func Offset: 0x254
	// Line 371, Address: 0x101d55c, Func Offset: 0x25c
	// Line 373, Address: 0x101d568, Func Offset: 0x268
	// Line 375, Address: 0x101d580, Func Offset: 0x280
	// Line 376, Address: 0x101d5ac, Func Offset: 0x2ac
	// Line 378, Address: 0x101d5d8, Func Offset: 0x2d8
	// Line 379, Address: 0x101d5e8, Func Offset: 0x2e8
	// Line 381, Address: 0x101d5f0, Func Offset: 0x2f0
	// Line 383, Address: 0x101d600, Func Offset: 0x300
	// Line 384, Address: 0x101d604, Func Offset: 0x304
	// Func End, Address: 0x101d61c, Func Offset: 0x31c
}

// 
// Start address: 0x101d620
short pcolplay2(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 400, Address: 0x101d620, Func Offset: 0
	// Line 401, Address: 0x101d630, Func Offset: 0x10
	// Line 402, Address: 0x101d640, Func Offset: 0x20
	// Line 403, Address: 0x101d650, Func Offset: 0x30
	// Func End, Address: 0x101d660, Func Offset: 0x40
}

// 
// Start address: 0x101d660
short pcolplay(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 418, Address: 0x101d660, Func Offset: 0
	// Line 419, Address: 0x101d670, Func Offset: 0x10
	// Line 420, Address: 0x101d684, Func Offset: 0x24
	// Line 422, Address: 0x101d69c, Func Offset: 0x3c
	// Line 423, Address: 0x101d6a0, Func Offset: 0x40
	// Func End, Address: 0x101d6b0, Func Offset: 0x50
}

// 
// Start address: 0x101d6b0
short pcole(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 438, Address: 0x101d6b0, Func Offset: 0
	// Line 439, Address: 0x101d6c0, Func Offset: 0x10
	// Line 440, Address: 0x101d6d4, Func Offset: 0x24
	// Line 442, Address: 0x101d6e0, Func Offset: 0x30
	// Line 443, Address: 0x101d6f0, Func Offset: 0x40
	// Func End, Address: 0x101d700, Func Offset: 0x50
}

// 
// Start address: 0x101d700
void playdamagechk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 458, Address: 0x101d700, Func Offset: 0
	// Line 461, Address: 0x101d710, Func Offset: 0x10
	// Line 462, Address: 0x101d718, Func Offset: 0x18
	// Line 463, Address: 0x101d730, Func Offset: 0x30
	// Line 464, Address: 0x101d738, Func Offset: 0x38
	// Line 466, Address: 0x101d74c, Func Offset: 0x4c
	// Line 467, Address: 0x101d758, Func Offset: 0x58
	// Line 468, Address: 0x101d760, Func Offset: 0x60
	// Line 469, Address: 0x101d770, Func Offset: 0x70
	// Line 471, Address: 0x101d788, Func Offset: 0x88
	// Line 472, Address: 0x101d794, Func Offset: 0x94
	// Line 473, Address: 0x101d7a0, Func Offset: 0xa0
	// Line 476, Address: 0x101d7a8, Func Offset: 0xa8
	// Line 477, Address: 0x101d7b4, Func Offset: 0xb4
	// Line 480, Address: 0x101d7c0, Func Offset: 0xc0
	// Line 481, Address: 0x101d7ec, Func Offset: 0xec
	// Line 483, Address: 0x101d810, Func Offset: 0x110
	// Line 484, Address: 0x101d818, Func Offset: 0x118
	// Line 485, Address: 0x101d824, Func Offset: 0x124
	// Line 486, Address: 0x101d830, Func Offset: 0x130
	// Func End, Address: 0x101d840, Func Offset: 0x140
}

// 
// Start address: 0x101d840
short playdamageset(_anon1* pActwk, _anon1* pColliAct)
{
	_anon1* pFreeAct;
	short iRet;
	// Line 501, Address: 0x101d840, Func Offset: 0
	// Line 505, Address: 0x101d854, Func Offset: 0x14
	// Line 507, Address: 0x101d868, Func Offset: 0x28
	// Line 508, Address: 0x101d878, Func Offset: 0x38
	// Line 510, Address: 0x101d884, Func Offset: 0x44
	// Line 512, Address: 0x101d89c, Func Offset: 0x5c
	// Line 513, Address: 0x101d8b0, Func Offset: 0x70
	// Line 515, Address: 0x101d8c0, Func Offset: 0x80
	// Line 516, Address: 0x101d8cc, Func Offset: 0x8c
	// Line 517, Address: 0x101d8dc, Func Offset: 0x9c
	// Line 520, Address: 0x101d8ec, Func Offset: 0xac
	// Line 521, Address: 0x101d8fc, Func Offset: 0xbc
	// Line 524, Address: 0x101d908, Func Offset: 0xc8
	// Line 526, Address: 0x101d920, Func Offset: 0xe0
	// Line 527, Address: 0x101d930, Func Offset: 0xf0
	// Line 529, Address: 0x101d93c, Func Offset: 0xfc
	// Line 530, Address: 0x101d948, Func Offset: 0x108
	// Func End, Address: 0x101d95c, Func Offset: 0x11c
}

// 
// Start address: 0x101d960
short playdieset(_anon1* pActwk)
{
	// Line 543, Address: 0x101d960, Func Offset: 0
	// Line 544, Address: 0x101d96c, Func Offset: 0xc
	// Line 545, Address: 0x101d984, Func Offset: 0x24
	// Line 546, Address: 0x101d990, Func Offset: 0x30
	// Line 547, Address: 0x101d998, Func Offset: 0x38
	// Line 548, Address: 0x101d9a4, Func Offset: 0x44
	// Line 549, Address: 0x101d9ac, Func Offset: 0x4c
	// Line 550, Address: 0x101d9bc, Func Offset: 0x5c
	// Line 551, Address: 0x101d9c8, Func Offset: 0x68
	// Line 552, Address: 0x101d9d0, Func Offset: 0x70
	// Line 553, Address: 0x101d9d8, Func Offset: 0x78
	// Line 554, Address: 0x101d9e8, Func Offset: 0x88
	// Line 555, Address: 0x101d9f4, Func Offset: 0x94
	// Line 556, Address: 0x101da04, Func Offset: 0xa4
	// Line 557, Address: 0x101da0c, Func Offset: 0xac
	// Line 558, Address: 0x101da18, Func Offset: 0xb8
	// Line 559, Address: 0x101da1c, Func Offset: 0xbc
	// Func End, Address: 0x101da2c, Func Offset: 0xcc
}

// 
// Start address: 0x101da30
short pcolspecial(_anon1* pActwk, _anon1* pColliAct)
{
	char cColiNo;
	// Line 579, Address: 0x101da30, Func Offset: 0
	// Line 580, Address: 0x101da44, Func Offset: 0x14
	// Line 582, Address: 0x101da64, Func Offset: 0x34
	// Line 588, Address: 0x101dac8, Func Offset: 0x98
	// Line 589, Address: 0x101dae0, Func Offset: 0xb0
	// Line 590, Address: 0x101daf0, Func Offset: 0xc0
	// Line 597, Address: 0x101daf8, Func Offset: 0xc8
	// Line 598, Address: 0x101db08, Func Offset: 0xd8
	// Line 606, Address: 0x101db10, Func Offset: 0xe0
	// Line 607, Address: 0x101db20, Func Offset: 0xf0
	// Line 610, Address: 0x101db28, Func Offset: 0xf8
	// Line 612, Address: 0x101db68, Func Offset: 0x138
	// Line 616, Address: 0x101db74, Func Offset: 0x144
	// Line 617, Address: 0x101db9c, Func Offset: 0x16c
	// Line 620, Address: 0x101dba8, Func Offset: 0x178
	// Line 621, Address: 0x101dbb8, Func Offset: 0x188
	// Line 622, Address: 0x101dbcc, Func Offset: 0x19c
	// Line 626, Address: 0x101dbdc, Func Offset: 0x1ac
	// Line 629, Address: 0x101dbe4, Func Offset: 0x1b4
	// Line 630, Address: 0x101dbf4, Func Offset: 0x1c4
	// Line 634, Address: 0x101dbfc, Func Offset: 0x1cc
	// Line 636, Address: 0x101dc10, Func Offset: 0x1e0
	// Line 637, Address: 0x101dc28, Func Offset: 0x1f8
	// Line 638, Address: 0x101dc38, Func Offset: 0x208
	// Line 641, Address: 0x101dc40, Func Offset: 0x210
	// Line 642, Address: 0x101dc4c, Func Offset: 0x21c
	// Line 643, Address: 0x101dc58, Func Offset: 0x228
	// Line 644, Address: 0x101dc84, Func Offset: 0x254
	// Line 645, Address: 0x101dc90, Func Offset: 0x260
	// Line 646, Address: 0x101dc98, Func Offset: 0x268
	// Line 648, Address: 0x101dca4, Func Offset: 0x274
	// Line 649, Address: 0x101dcac, Func Offset: 0x27c
	// Line 651, Address: 0x101dcb8, Func Offset: 0x288
	// Line 653, Address: 0x101dccc, Func Offset: 0x29c
	// Line 656, Address: 0x101dcdc, Func Offset: 0x2ac
	// Line 657, Address: 0x101dcec, Func Offset: 0x2bc
	// Line 658, Address: 0x101dcf4, Func Offset: 0x2c4
	// Line 664, Address: 0x101dd00, Func Offset: 0x2d0
	// Line 666, Address: 0x101dd14, Func Offset: 0x2e4
	// Line 669, Address: 0x101dd24, Func Offset: 0x2f4
	// Line 670, Address: 0x101dd34, Func Offset: 0x304
	// Line 671, Address: 0x101dd3c, Func Offset: 0x30c
	// Line 678, Address: 0x101dd48, Func Offset: 0x318
	// Line 679, Address: 0x101dd4c, Func Offset: 0x31c
	// Func End, Address: 0x101dd60, Func Offset: 0x330
}

// 
// Start address: 0x101dd60
short eggman_chk(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 694, Address: 0x101dd60, Func Offset: 0
	// Line 695, Address: 0x101dd70, Func Offset: 0x10
	// Line 696, Address: 0x101dd94, Func Offset: 0x34
	// Line 697, Address: 0x101dda4, Func Offset: 0x44
	// Line 698, Address: 0x101ddc8, Func Offset: 0x68
	// Line 699, Address: 0x101ddd0, Func Offset: 0x70
	// Line 700, Address: 0x101dde0, Func Offset: 0x80
	// Line 701, Address: 0x101dde4, Func Offset: 0x84
	// Func End, Address: 0x101ddf4, Func Offset: 0x94
}

// 
// Start address: 0x101de00
short yago(_anon1* pActwk, _anon1* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	// Line 721, Address: 0x101de00, Func Offset: 0
	// Line 722, Address: 0x101de1c, Func Offset: 0x1c
	// Line 723, Address: 0x101de2c, Func Offset: 0x2c
	// Line 724, Address: 0x101de44, Func Offset: 0x44
	// Line 725, Address: 0x101de5c, Func Offset: 0x5c
	// Line 726, Address: 0x101de7c, Func Offset: 0x7c
	// Line 727, Address: 0x101de94, Func Offset: 0x94
	// Line 729, Address: 0x101dea0, Func Offset: 0xa0
	// Line 730, Address: 0x101dec8, Func Offset: 0xc8
	// Line 731, Address: 0x101ded8, Func Offset: 0xd8
	// Line 733, Address: 0x101def0, Func Offset: 0xf0
	// Line 734, Address: 0x101df0c, Func Offset: 0x10c
	// Line 735, Address: 0x101df18, Func Offset: 0x118
	// Line 736, Address: 0x101df30, Func Offset: 0x130
	// Line 738, Address: 0x101df48, Func Offset: 0x148
	// Line 741, Address: 0x101df60, Func Offset: 0x160
	// Line 742, Address: 0x101df78, Func Offset: 0x178
	// Line 744, Address: 0x101df90, Func Offset: 0x190
	// Line 745, Address: 0x101dfa0, Func Offset: 0x1a0
	// Func End, Address: 0x101dfb0, Func Offset: 0x1b0
}

// 
// Start address: 0x101dfb0
short main_attack(_anon1* pActwk, _anon1* pColliAct)
{
	// Line 760, Address: 0x101dfb0, Func Offset: 0
	// Line 761, Address: 0x101dfbc, Func Offset: 0xc
	// Line 762, Address: 0x101dfd8, Func Offset: 0x28
	// Line 763, Address: 0x101dfe8, Func Offset: 0x38
	// Line 764, Address: 0x101dfec, Func Offset: 0x3c
	// Func End, Address: 0x101dff8, Func Offset: 0x48
}

