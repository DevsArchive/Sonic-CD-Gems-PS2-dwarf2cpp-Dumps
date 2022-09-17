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
unsigned char plpower_m;
unsigned char prio_flag;
short emyscorecnt;
unsigned short escoretbl[4];
unsigned char plpower_a;
unsigned char plpower_b;
unsigned char conbine_flag;
_anon5 debugflag;
short plring;
_anon5 editmode;
unsigned char bossstart;

short pcol(_anon0* pActwk);
short CollitblDataXchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iD5);
short CollitblDataYchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5);
short ColliHitChk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iChkPosi, short iD5);
short pcolitem(_anon0* pActwk, _anon0* pColliAct);
short pcolnomal(_anon0* pActwk, _anon0* pColliAct);
short pcolplay2(_anon0* pActwk, _anon0* pColliAct);
short pcolplay(_anon0* pActwk, _anon0* pColliAct);
short pcole(_anon0* pActwk, _anon0* pColliAct);
void playdamagechk(_anon0* pActwk, _anon0* pColliAct);
short playdamageset(_anon0* pActwk, _anon0* pColliAct);
short playdieset(_anon0* pActwk);
short pcolspecial(_anon0* pActwk, _anon0* pColliAct);
short eggman_chk(_anon0* pActwk, _anon0* pColliAct);
short yago(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iChkPosi, short iD5);
short main_attack(_anon0* pActwk, _anon0* pColliAct);

// 
// Start address: 0x101acd0
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
	// Line 79, Address: 0x101acd0, Func Offset: 0
	// Line 80, Address: 0x101acfc, Func Offset: 0x2c
	// Line 83, Address: 0x101ad3c, Func Offset: 0x6c
	// Line 87, Address: 0x101ad48, Func Offset: 0x78
	// Line 88, Address: 0x101ad60, Func Offset: 0x90
	// Line 92, Address: 0x101ad6c, Func Offset: 0x9c
	// Line 93, Address: 0x101ad78, Func Offset: 0xa8
	// Line 95, Address: 0x101ad84, Func Offset: 0xb4
	// Line 97, Address: 0x101ad9c, Func Offset: 0xcc
	// Line 98, Address: 0x101ada8, Func Offset: 0xd8
	// Line 101, Address: 0x101adb4, Func Offset: 0xe4
	// Line 102, Address: 0x101adc0, Func Offset: 0xf0
	// Line 104, Address: 0x101adcc, Func Offset: 0xfc
	// Line 106, Address: 0x101add4, Func Offset: 0x104
	// Line 109, Address: 0x101ade0, Func Offset: 0x110
	// Line 111, Address: 0x101adf4, Func Offset: 0x124
	// Line 112, Address: 0x101ae04, Func Offset: 0x134
	// Line 114, Address: 0x101ae14, Func Offset: 0x144
	// Line 115, Address: 0x101ae38, Func Offset: 0x168
	// Line 116, Address: 0x101ae40, Func Offset: 0x170
	// Line 119, Address: 0x101ae4c, Func Offset: 0x17c
	// Line 120, Address: 0x101ae70, Func Offset: 0x1a0
	// Line 121, Address: 0x101ae74, Func Offset: 0x1a4
	// Line 122, Address: 0x101ae78, Func Offset: 0x1a8
	// Func End, Address: 0x101aea8, Func Offset: 0x1d8
}

// 
// Start address: 0x101aeb0
short CollitblDataXchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 142, Address: 0x101aeb0, Func Offset: 0
	// Line 143, Address: 0x101aed8, Func Offset: 0x28
	// Line 147, Address: 0x101aeec, Func Offset: 0x3c
	// Line 148, Address: 0x101af0c, Func Offset: 0x5c
	// Line 150, Address: 0x101af34, Func Offset: 0x84
	// Line 151, Address: 0x101af60, Func Offset: 0xb0
	// Line 152, Address: 0x101af84, Func Offset: 0xd4
	// Line 154, Address: 0x101afac, Func Offset: 0xfc
	// Line 156, Address: 0x101afc4, Func Offset: 0x114
	// Line 157, Address: 0x101afd0, Func Offset: 0x120
	// Line 158, Address: 0x101afe8, Func Offset: 0x138
	// Line 159, Address: 0x101aff4, Func Offset: 0x144
	// Line 160, Address: 0x101b00c, Func Offset: 0x15c
	// Line 162, Address: 0x101b034, Func Offset: 0x184
	// Line 165, Address: 0x101b040, Func Offset: 0x190
	// Line 166, Address: 0x101b054, Func Offset: 0x1a4
	// Line 169, Address: 0x101b060, Func Offset: 0x1b0
	// Line 171, Address: 0x101b080, Func Offset: 0x1d0
	// Func End, Address: 0x101b09c, Func Offset: 0x1ec
}

// 
// Start address: 0x101b0a0
short CollitblDataYchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 193, Address: 0x101b0a0, Func Offset: 0
	// Line 197, Address: 0x101b0c8, Func Offset: 0x28
	// Line 199, Address: 0x101b0f4, Func Offset: 0x54
	// Line 200, Address: 0x101b120, Func Offset: 0x80
	// Line 201, Address: 0x101b144, Func Offset: 0xa4
	// Line 202, Address: 0x101b16c, Func Offset: 0xcc
	// Line 204, Address: 0x101b184, Func Offset: 0xe4
	// Line 205, Address: 0x101b190, Func Offset: 0xf0
	// Line 206, Address: 0x101b1a8, Func Offset: 0x108
	// Line 207, Address: 0x101b1b4, Func Offset: 0x114
	// Line 208, Address: 0x101b1cc, Func Offset: 0x12c
	// Line 210, Address: 0x101b1f0, Func Offset: 0x150
	// Line 214, Address: 0x101b1fc, Func Offset: 0x15c
	// Line 215, Address: 0x101b21c, Func Offset: 0x17c
	// Line 218, Address: 0x101b228, Func Offset: 0x188
	// Line 220, Address: 0x101b244, Func Offset: 0x1a4
	// Func End, Address: 0x101b25c, Func Offset: 0x1bc
}

// 
// Start address: 0x101b260
short ColliHitChk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	unsigned char iColino;
	// Line 245, Address: 0x101b260, Func Offset: 0
	// Line 246, Address: 0x101b280, Func Offset: 0x20
	// Line 248, Address: 0x101b298, Func Offset: 0x38
	// Line 250, Address: 0x101b2a4, Func Offset: 0x44
	// Line 251, Address: 0x101b2b4, Func Offset: 0x54
	// Line 253, Address: 0x101b2c0, Func Offset: 0x60
	// Line 255, Address: 0x101b2d0, Func Offset: 0x70
	// Line 256, Address: 0x101b2ec, Func Offset: 0x8c
	// Line 258, Address: 0x101b2f8, Func Offset: 0x98
	// Line 260, Address: 0x101b310, Func Offset: 0xb0
	// Line 262, Address: 0x101b320, Func Offset: 0xc0
	// Line 264, Address: 0x101b32c, Func Offset: 0xcc
	// Line 265, Address: 0x101b33c, Func Offset: 0xdc
	// Line 269, Address: 0x101b348, Func Offset: 0xe8
	// Line 271, Address: 0x101b358, Func Offset: 0xf8
	// Func End, Address: 0x101b36c, Func Offset: 0x10c
}

// 
// Start address: 0x101b370
short pcolitem(_anon0* pActwk, _anon0* pColliAct)
{
	short iD0;
	// Line 286, Address: 0x101b370, Func Offset: 0
	// Line 289, Address: 0x101b384, Func Offset: 0x14
	// Line 291, Address: 0x101b3c4, Func Offset: 0x54
	// Line 295, Address: 0x101b3d0, Func Offset: 0x60
	// Line 298, Address: 0x101b3ec, Func Offset: 0x7c
	// Line 299, Address: 0x101b404, Func Offset: 0x94
	// Line 300, Address: 0x101b414, Func Offset: 0xa4
	// Line 304, Address: 0x101b41c, Func Offset: 0xac
	// Line 306, Address: 0x101b434, Func Offset: 0xc4
	// Line 307, Address: 0x101b458, Func Offset: 0xe8
	// Line 308, Address: 0x101b480, Func Offset: 0x110
	// Line 310, Address: 0x101b494, Func Offset: 0x124
	// Line 311, Address: 0x101b4b8, Func Offset: 0x148
	// Line 312, Address: 0x101b4c4, Func Offset: 0x154
	// Line 313, Address: 0x101b4d8, Func Offset: 0x168
	// Line 315, Address: 0x101b4e8, Func Offset: 0x178
	// Line 319, Address: 0x101b4f0, Func Offset: 0x180
	// Line 321, Address: 0x101b50c, Func Offset: 0x19c
	// Line 322, Address: 0x101b530, Func Offset: 0x1c0
	// Line 326, Address: 0x101b540, Func Offset: 0x1d0
	// Line 327, Address: 0x101b544, Func Offset: 0x1d4
	// Func End, Address: 0x101b558, Func Offset: 0x1e8
}

// 
// Start address: 0x101b560
short pcolnomal(_anon0* pActwk, _anon0* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 343, Address: 0x101b560, Func Offset: 0
	// Line 347, Address: 0x101b578, Func Offset: 0x18
	// Line 351, Address: 0x101b5bc, Func Offset: 0x5c
	// Line 352, Address: 0x101b5cc, Func Offset: 0x6c
	// Line 356, Address: 0x101b5d8, Func Offset: 0x78
	// Line 358, Address: 0x101b5ec, Func Offset: 0x8c
	// Line 359, Address: 0x101b610, Func Offset: 0xb0
	// Line 360, Address: 0x101b634, Func Offset: 0xd4
	// Line 361, Address: 0x101b658, Func Offset: 0xf8
	// Line 362, Address: 0x101b67c, Func Offset: 0x11c
	// Line 363, Address: 0x101b684, Func Offset: 0x124
	// Line 364, Address: 0x101b694, Func Offset: 0x134
	// Line 365, Address: 0x101b6a8, Func Offset: 0x148
	// Line 366, Address: 0x101b6b8, Func Offset: 0x158
	// Line 370, Address: 0x101b6c0, Func Offset: 0x160
	// Line 371, Address: 0x101b6d0, Func Offset: 0x170
	// Line 372, Address: 0x101b6e0, Func Offset: 0x180
	// Line 373, Address: 0x101b6f4, Func Offset: 0x194
	// Line 374, Address: 0x101b708, Func Offset: 0x1a8
	// Line 376, Address: 0x101b714, Func Offset: 0x1b4
	// Line 377, Address: 0x101b71c, Func Offset: 0x1bc
	// Line 378, Address: 0x101b758, Func Offset: 0x1f8
	// Line 380, Address: 0x101b774, Func Offset: 0x214
	// Line 381, Address: 0x101b780, Func Offset: 0x220
	// Line 384, Address: 0x101b78c, Func Offset: 0x22c
	// Line 385, Address: 0x101b79c, Func Offset: 0x23c
	// Line 386, Address: 0x101b7a8, Func Offset: 0x248
	// Line 387, Address: 0x101b7b4, Func Offset: 0x254
	// Line 388, Address: 0x101b7bc, Func Offset: 0x25c
	// Line 390, Address: 0x101b7c8, Func Offset: 0x268
	// Line 392, Address: 0x101b7e0, Func Offset: 0x280
	// Line 393, Address: 0x101b80c, Func Offset: 0x2ac
	// Line 395, Address: 0x101b838, Func Offset: 0x2d8
	// Line 396, Address: 0x101b848, Func Offset: 0x2e8
	// Line 398, Address: 0x101b850, Func Offset: 0x2f0
	// Line 400, Address: 0x101b860, Func Offset: 0x300
	// Line 401, Address: 0x101b864, Func Offset: 0x304
	// Func End, Address: 0x101b87c, Func Offset: 0x31c
}

// 
// Start address: 0x101b880
short pcolplay2(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 417, Address: 0x101b880, Func Offset: 0
	// Line 418, Address: 0x101b890, Func Offset: 0x10
	// Line 419, Address: 0x101b8a0, Func Offset: 0x20
	// Line 420, Address: 0x101b8b0, Func Offset: 0x30
	// Func End, Address: 0x101b8c0, Func Offset: 0x40
}

// 
// Start address: 0x101b8c0
short pcolplay(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 435, Address: 0x101b8c0, Func Offset: 0
	// Line 436, Address: 0x101b8d0, Func Offset: 0x10
	// Line 438, Address: 0x101b908, Func Offset: 0x48
	// Line 440, Address: 0x101b914, Func Offset: 0x54
	// Line 442, Address: 0x101b924, Func Offset: 0x64
	// Func End, Address: 0x101b934, Func Offset: 0x74
}

// 
// Start address: 0x101b940
short pcole(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 457, Address: 0x101b940, Func Offset: 0
	// Line 458, Address: 0x101b950, Func Offset: 0x10
	// Line 459, Address: 0x101b964, Func Offset: 0x24
	// Line 461, Address: 0x101b970, Func Offset: 0x30
	// Line 462, Address: 0x101b980, Func Offset: 0x40
	// Func End, Address: 0x101b990, Func Offset: 0x50
}

// 
// Start address: 0x101b990
void playdamagechk(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 477, Address: 0x101b990, Func Offset: 0
	// Line 480, Address: 0x101b9a0, Func Offset: 0x10
	// Line 481, Address: 0x101b9a8, Func Offset: 0x18
	// Line 482, Address: 0x101b9c0, Func Offset: 0x30
	// Line 483, Address: 0x101b9c8, Func Offset: 0x38
	// Line 485, Address: 0x101b9dc, Func Offset: 0x4c
	// Line 486, Address: 0x101b9e8, Func Offset: 0x58
	// Line 487, Address: 0x101b9f0, Func Offset: 0x60
	// Line 488, Address: 0x101ba00, Func Offset: 0x70
	// Line 490, Address: 0x101ba18, Func Offset: 0x88
	// Line 491, Address: 0x101ba24, Func Offset: 0x94
	// Line 492, Address: 0x101ba30, Func Offset: 0xa0
	// Line 495, Address: 0x101ba38, Func Offset: 0xa8
	// Line 496, Address: 0x101ba44, Func Offset: 0xb4
	// Line 499, Address: 0x101ba50, Func Offset: 0xc0
	// Line 500, Address: 0x101ba7c, Func Offset: 0xec
	// Line 502, Address: 0x101baa0, Func Offset: 0x110
	// Line 503, Address: 0x101baa8, Func Offset: 0x118
	// Line 504, Address: 0x101bab4, Func Offset: 0x124
	// Line 505, Address: 0x101bac0, Func Offset: 0x130
	// Func End, Address: 0x101bad0, Func Offset: 0x140
}

// 
// Start address: 0x101bad0
short playdamageset(_anon0* pActwk, _anon0* pColliAct)
{
	_anon0* pFreeAct;
	short iRet;
	// Line 520, Address: 0x101bad0, Func Offset: 0
	// Line 524, Address: 0x101bae4, Func Offset: 0x14
	// Line 526, Address: 0x101baf8, Func Offset: 0x28
	// Line 527, Address: 0x101bb08, Func Offset: 0x38
	// Line 529, Address: 0x101bb14, Func Offset: 0x44
	// Line 531, Address: 0x101bb2c, Func Offset: 0x5c
	// Line 532, Address: 0x101bb40, Func Offset: 0x70
	// Line 534, Address: 0x101bb50, Func Offset: 0x80
	// Line 535, Address: 0x101bb5c, Func Offset: 0x8c
	// Line 536, Address: 0x101bb6c, Func Offset: 0x9c
	// Line 538, Address: 0x101bb7c, Func Offset: 0xac
	// Line 539, Address: 0x101bb8c, Func Offset: 0xbc
	// Line 545, Address: 0x101bb98, Func Offset: 0xc8
	// Line 546, Address: 0x101bba8, Func Offset: 0xd8
	// Line 549, Address: 0x101bbb4, Func Offset: 0xe4
	// Line 551, Address: 0x101bbcc, Func Offset: 0xfc
	// Line 552, Address: 0x101bbdc, Func Offset: 0x10c
	// Line 554, Address: 0x101bbe8, Func Offset: 0x118
	// Line 555, Address: 0x101bbf4, Func Offset: 0x124
	// Func End, Address: 0x101bc08, Func Offset: 0x138
}

// 
// Start address: 0x101bc10
short playdieset(_anon0* pActwk)
{
	// Line 568, Address: 0x101bc10, Func Offset: 0
	// Line 569, Address: 0x101bc1c, Func Offset: 0xc
	// Line 570, Address: 0x101bc34, Func Offset: 0x24
	// Line 571, Address: 0x101bc40, Func Offset: 0x30
	// Line 572, Address: 0x101bc48, Func Offset: 0x38
	// Line 573, Address: 0x101bc54, Func Offset: 0x44
	// Line 574, Address: 0x101bc5c, Func Offset: 0x4c
	// Line 575, Address: 0x101bc6c, Func Offset: 0x5c
	// Line 576, Address: 0x101bc78, Func Offset: 0x68
	// Line 577, Address: 0x101bc80, Func Offset: 0x70
	// Line 578, Address: 0x101bc88, Func Offset: 0x78
	// Line 579, Address: 0x101bc98, Func Offset: 0x88
	// Line 580, Address: 0x101bca4, Func Offset: 0x94
	// Line 581, Address: 0x101bcb4, Func Offset: 0xa4
	// Line 582, Address: 0x101bcbc, Func Offset: 0xac
	// Line 583, Address: 0x101bcc8, Func Offset: 0xb8
	// Line 584, Address: 0x101bccc, Func Offset: 0xbc
	// Func End, Address: 0x101bcdc, Func Offset: 0xcc
}

// 
// Start address: 0x101bce0
short pcolspecial(_anon0* pActwk, _anon0* pColliAct)
{
	unsigned char flgwk;
	char cColiNo;
	// Line 604, Address: 0x101bce0, Func Offset: 0
	// Line 606, Address: 0x101bcf8, Func Offset: 0x18
	// Line 608, Address: 0x101bd18, Func Offset: 0x38
	// Line 611, Address: 0x101bd7c, Func Offset: 0x9c
	// Line 612, Address: 0x101bd94, Func Offset: 0xb4
	// Line 613, Address: 0x101bda4, Func Offset: 0xc4
	// Line 622, Address: 0x101bdac, Func Offset: 0xcc
	// Line 623, Address: 0x101bdbc, Func Offset: 0xdc
	// Line 627, Address: 0x101bdc4, Func Offset: 0xe4
	// Line 628, Address: 0x101bddc, Func Offset: 0xfc
	// Line 629, Address: 0x101be0c, Func Offset: 0x12c
	// Line 630, Address: 0x101be1c, Func Offset: 0x13c
	// Line 632, Address: 0x101be28, Func Offset: 0x148
	// Line 633, Address: 0x101be38, Func Offset: 0x158
	// Line 638, Address: 0x101be48, Func Offset: 0x168
	// Line 640, Address: 0x101be50, Func Offset: 0x170
	// Line 641, Address: 0x101be6c, Func Offset: 0x18c
	// Line 642, Address: 0x101be7c, Func Offset: 0x19c
	// Line 645, Address: 0x101be8c, Func Offset: 0x1ac
	// Line 649, Address: 0x101be94, Func Offset: 0x1b4
	// Line 650, Address: 0x101bea4, Func Offset: 0x1c4
	// Line 654, Address: 0x101beac, Func Offset: 0x1cc
	// Line 655, Address: 0x101bed8, Func Offset: 0x1f8
	// Line 656, Address: 0x101bee0, Func Offset: 0x200
	// Line 657, Address: 0x101bee8, Func Offset: 0x208
	// Line 660, Address: 0x101beec, Func Offset: 0x20c
	// Line 661, Address: 0x101bf0c, Func Offset: 0x22c
	// Line 662, Address: 0x101bf1c, Func Offset: 0x23c
	// Line 664, Address: 0x101bf24, Func Offset: 0x244
	// Line 667, Address: 0x101bf34, Func Offset: 0x254
	// Line 670, Address: 0x101bf3c, Func Offset: 0x25c
	// Line 675, Address: 0x101bf7c, Func Offset: 0x29c
	// Line 677, Address: 0x101bf90, Func Offset: 0x2b0
	// Line 678, Address: 0x101bfa8, Func Offset: 0x2c8
	// Line 679, Address: 0x101bfb8, Func Offset: 0x2d8
	// Line 682, Address: 0x101bfc0, Func Offset: 0x2e0
	// Line 683, Address: 0x101bfcc, Func Offset: 0x2ec
	// Line 684, Address: 0x101bfd8, Func Offset: 0x2f8
	// Line 685, Address: 0x101c004, Func Offset: 0x324
	// Line 686, Address: 0x101c010, Func Offset: 0x330
	// Line 687, Address: 0x101c018, Func Offset: 0x338
	// Line 689, Address: 0x101c024, Func Offset: 0x344
	// Line 690, Address: 0x101c02c, Func Offset: 0x34c
	// Line 692, Address: 0x101c038, Func Offset: 0x358
	// Line 694, Address: 0x101c04c, Func Offset: 0x36c
	// Line 697, Address: 0x101c05c, Func Offset: 0x37c
	// Line 698, Address: 0x101c06c, Func Offset: 0x38c
	// Line 699, Address: 0x101c074, Func Offset: 0x394
	// Line 705, Address: 0x101c080, Func Offset: 0x3a0
	// Line 707, Address: 0x101c094, Func Offset: 0x3b4
	// Line 710, Address: 0x101c0a4, Func Offset: 0x3c4
	// Line 711, Address: 0x101c0b4, Func Offset: 0x3d4
	// Line 712, Address: 0x101c0bc, Func Offset: 0x3dc
	// Line 719, Address: 0x101c0c8, Func Offset: 0x3e8
	// Line 720, Address: 0x101c0f0, Func Offset: 0x410
	// Line 723, Address: 0x101c0fc, Func Offset: 0x41c
	// Line 724, Address: 0x101c10c, Func Offset: 0x42c
	// Line 725, Address: 0x101c120, Func Offset: 0x440
	// Line 729, Address: 0x101c130, Func Offset: 0x450
	// Line 732, Address: 0x101c138, Func Offset: 0x458
	// Line 737, Address: 0x101c148, Func Offset: 0x468
	// Line 738, Address: 0x101c14c, Func Offset: 0x46c
	// Func End, Address: 0x101c164, Func Offset: 0x484
}

// 
// Start address: 0x101c170
short eggman_chk(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 753, Address: 0x101c170, Func Offset: 0
	// Line 754, Address: 0x101c180, Func Offset: 0x10
	// Line 755, Address: 0x101c1a4, Func Offset: 0x34
	// Line 756, Address: 0x101c1b4, Func Offset: 0x44
	// Line 757, Address: 0x101c1d8, Func Offset: 0x68
	// Line 758, Address: 0x101c1e0, Func Offset: 0x70
	// Line 759, Address: 0x101c1f0, Func Offset: 0x80
	// Line 760, Address: 0x101c1f4, Func Offset: 0x84
	// Func End, Address: 0x101c204, Func Offset: 0x94
}

// 
// Start address: 0x101c210
short yago(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iChkPosi, short iD5)
{
	// Line 780, Address: 0x101c210, Func Offset: 0
	// Line 781, Address: 0x101c22c, Func Offset: 0x1c
	// Line 782, Address: 0x101c23c, Func Offset: 0x2c
	// Line 783, Address: 0x101c254, Func Offset: 0x44
	// Line 784, Address: 0x101c26c, Func Offset: 0x5c
	// Line 785, Address: 0x101c28c, Func Offset: 0x7c
	// Line 786, Address: 0x101c2a4, Func Offset: 0x94
	// Line 788, Address: 0x101c2b0, Func Offset: 0xa0
	// Line 789, Address: 0x101c2d8, Func Offset: 0xc8
	// Line 790, Address: 0x101c2e8, Func Offset: 0xd8
	// Line 792, Address: 0x101c300, Func Offset: 0xf0
	// Line 793, Address: 0x101c31c, Func Offset: 0x10c
	// Line 794, Address: 0x101c328, Func Offset: 0x118
	// Line 795, Address: 0x101c340, Func Offset: 0x130
	// Line 797, Address: 0x101c358, Func Offset: 0x148
	// Line 800, Address: 0x101c370, Func Offset: 0x160
	// Line 801, Address: 0x101c388, Func Offset: 0x178
	// Line 803, Address: 0x101c3a0, Func Offset: 0x190
	// Line 804, Address: 0x101c3b0, Func Offset: 0x1a0
	// Func End, Address: 0x101c3c0, Func Offset: 0x1b0
}

// 
// Start address: 0x101c3c0
short main_attack(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 819, Address: 0x101c3c0, Func Offset: 0
	// Line 820, Address: 0x101c3cc, Func Offset: 0xc
	// Line 821, Address: 0x101c3e8, Func Offset: 0x28
	// Line 822, Address: 0x101c3f8, Func Offset: 0x38
	// Line 823, Address: 0x101c3fc, Func Offset: 0x3c
	// Func End, Address: 0x101c408, Func Offset: 0x48
}

