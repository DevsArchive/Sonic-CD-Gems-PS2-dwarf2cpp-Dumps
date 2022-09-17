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
// Start address: 0x101b500
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
	// Line 80, Address: 0x101b500, Func Offset: 0
	// Line 81, Address: 0x101b52c, Func Offset: 0x2c
	// Line 84, Address: 0x101b56c, Func Offset: 0x6c
	// Line 88, Address: 0x101b578, Func Offset: 0x78
	// Line 89, Address: 0x101b590, Func Offset: 0x90
	// Line 91, Address: 0x101b59c, Func Offset: 0x9c
	// Line 92, Address: 0x101b5a8, Func Offset: 0xa8
	// Line 93, Address: 0x101b5b4, Func Offset: 0xb4
	// Line 95, Address: 0x101b5cc, Func Offset: 0xcc
	// Line 96, Address: 0x101b5d8, Func Offset: 0xd8
	// Line 99, Address: 0x101b5e4, Func Offset: 0xe4
	// Line 100, Address: 0x101b5f0, Func Offset: 0xf0
	// Line 102, Address: 0x101b5fc, Func Offset: 0xfc
	// Line 104, Address: 0x101b604, Func Offset: 0x104
	// Line 107, Address: 0x101b610, Func Offset: 0x110
	// Line 109, Address: 0x101b624, Func Offset: 0x124
	// Line 110, Address: 0x101b634, Func Offset: 0x134
	// Line 112, Address: 0x101b644, Func Offset: 0x144
	// Line 113, Address: 0x101b668, Func Offset: 0x168
	// Line 114, Address: 0x101b670, Func Offset: 0x170
	// Line 117, Address: 0x101b67c, Func Offset: 0x17c
	// Line 118, Address: 0x101b6a0, Func Offset: 0x1a0
	// Line 119, Address: 0x101b6a4, Func Offset: 0x1a4
	// Func End, Address: 0x101b6d4, Func Offset: 0x1d4
}

// 
// Start address: 0x101b6e0
short CollitblDataXchk(_anon0* pActwk, _anon0* pColliAct, short iXposi, short iYposi, short iD5)
{
	short iColiNo;
	short iColiwk;
	short iColiData;
	// Line 139, Address: 0x101b6e0, Func Offset: 0
	// Line 140, Address: 0x101b708, Func Offset: 0x28
	// Line 144, Address: 0x101b71c, Func Offset: 0x3c
	// Line 145, Address: 0x101b73c, Func Offset: 0x5c
	// Line 147, Address: 0x101b764, Func Offset: 0x84
	// Line 148, Address: 0x101b790, Func Offset: 0xb0
	// Line 149, Address: 0x101b7b4, Func Offset: 0xd4
	// Line 150, Address: 0x101b7dc, Func Offset: 0xfc
	// Line 152, Address: 0x101b7f4, Func Offset: 0x114
	// Line 153, Address: 0x101b800, Func Offset: 0x120
	// Line 154, Address: 0x101b818, Func Offset: 0x138
	// Line 155, Address: 0x101b824, Func Offset: 0x144
	// Line 156, Address: 0x101b83c, Func Offset: 0x15c
	// Line 158, Address: 0x101b860, Func Offset: 0x180
	// Line 161, Address: 0x101b86c, Func Offset: 0x18c
	// Line 162, Address: 0x101b880, Func Offset: 0x1a0
	// Line 165, Address: 0x101b88c, Func Offset: 0x1ac
	// Line 167, Address: 0x101b8a8, Func Offset: 0x1c8
	// Func End, Address: 0x101b8c4, Func Offset: 0x1e4
}

// 
// Start address: 0x101b8d0
short CollitblDataYchk(_anon0* pActwk, _anon0* pColliAct, short iYposi, short iColiNo, short iD5)
{
	short iColiData;
	short iYwork;
	// Line 188, Address: 0x101b8d0, Func Offset: 0
	// Line 192, Address: 0x101b8f4, Func Offset: 0x24
	// Line 194, Address: 0x101b920, Func Offset: 0x50
	// Line 195, Address: 0x101b94c, Func Offset: 0x7c
	// Line 196, Address: 0x101b970, Func Offset: 0xa0
	// Line 197, Address: 0x101b998, Func Offset: 0xc8
	// Line 199, Address: 0x101b9b0, Func Offset: 0xe0
	// Line 200, Address: 0x101b9bc, Func Offset: 0xec
	// Line 201, Address: 0x101b9d4, Func Offset: 0x104
	// Line 202, Address: 0x101b9e0, Func Offset: 0x110
	// Line 203, Address: 0x101b9f8, Func Offset: 0x128
	// Line 205, Address: 0x101ba10, Func Offset: 0x140
	// Line 209, Address: 0x101ba1c, Func Offset: 0x14c
	// Line 210, Address: 0x101ba3c, Func Offset: 0x16c
	// Line 213, Address: 0x101ba48, Func Offset: 0x178
	// Line 215, Address: 0x101ba58, Func Offset: 0x188
	// Func End, Address: 0x101ba70, Func Offset: 0x1a0
}

// 
// Start address: 0x101ba70
short ColliHitChk(_anon0* pActwk, _anon0* pColliAct)
{
	unsigned char iColino;
	// Line 237, Address: 0x101ba70, Func Offset: 0
	// Line 238, Address: 0x101ba84, Func Offset: 0x14
	// Line 240, Address: 0x101ba9c, Func Offset: 0x2c
	// Line 242, Address: 0x101baa8, Func Offset: 0x38
	// Line 243, Address: 0x101bab8, Func Offset: 0x48
	// Line 245, Address: 0x101bac4, Func Offset: 0x54
	// Line 247, Address: 0x101bad4, Func Offset: 0x64
	// Line 248, Address: 0x101bae4, Func Offset: 0x74
	// Line 250, Address: 0x101baf0, Func Offset: 0x80
	// Line 252, Address: 0x101bb08, Func Offset: 0x98
	// Line 253, Address: 0x101bb18, Func Offset: 0xa8
	// Line 257, Address: 0x101bb24, Func Offset: 0xb4
	// Line 259, Address: 0x101bb34, Func Offset: 0xc4
	// Func End, Address: 0x101bb48, Func Offset: 0xd8
}

// 
// Start address: 0x101bb50
short pcolitem(_anon0* pActwk, _anon0* pColliAct)
{
	short iD0;
	// Line 274, Address: 0x101bb50, Func Offset: 0
	// Line 277, Address: 0x101bb64, Func Offset: 0x14
	// Line 280, Address: 0x101bb80, Func Offset: 0x30
	// Line 281, Address: 0x101bb98, Func Offset: 0x48
	// Line 282, Address: 0x101bba8, Func Offset: 0x58
	// Line 286, Address: 0x101bbb0, Func Offset: 0x60
	// Line 288, Address: 0x101bbc8, Func Offset: 0x78
	// Line 289, Address: 0x101bbec, Func Offset: 0x9c
	// Line 290, Address: 0x101bc14, Func Offset: 0xc4
	// Line 292, Address: 0x101bc28, Func Offset: 0xd8
	// Line 293, Address: 0x101bc4c, Func Offset: 0xfc
	// Line 294, Address: 0x101bc58, Func Offset: 0x108
	// Line 295, Address: 0x101bc6c, Func Offset: 0x11c
	// Line 297, Address: 0x101bc7c, Func Offset: 0x12c
	// Line 301, Address: 0x101bc84, Func Offset: 0x134
	// Line 303, Address: 0x101bca0, Func Offset: 0x150
	// Line 304, Address: 0x101bcc4, Func Offset: 0x174
	// Line 308, Address: 0x101bcd4, Func Offset: 0x184
	// Line 309, Address: 0x101bcd8, Func Offset: 0x188
	// Func End, Address: 0x101bcec, Func Offset: 0x19c
}

// 
// Start address: 0x101bcf0
short pcolnomal(_anon0* pActwk, _anon0* pColliAct)
{
	short iScoreCntwk;
	short iScoreData;
	// Line 324, Address: 0x101bcf0, Func Offset: 0
	// Line 328, Address: 0x101bd08, Func Offset: 0x18
	// Line 332, Address: 0x101bd4c, Func Offset: 0x5c
	// Line 333, Address: 0x101bd5c, Func Offset: 0x6c
	// Line 337, Address: 0x101bd68, Func Offset: 0x78
	// Line 339, Address: 0x101bd7c, Func Offset: 0x8c
	// Line 340, Address: 0x101bda0, Func Offset: 0xb0
	// Line 341, Address: 0x101bdc4, Func Offset: 0xd4
	// Line 342, Address: 0x101bde8, Func Offset: 0xf8
	// Line 343, Address: 0x101be0c, Func Offset: 0x11c
	// Line 344, Address: 0x101be14, Func Offset: 0x124
	// Line 345, Address: 0x101be24, Func Offset: 0x134
	// Line 346, Address: 0x101be38, Func Offset: 0x148
	// Line 347, Address: 0x101be48, Func Offset: 0x158
	// Line 351, Address: 0x101be50, Func Offset: 0x160
	// Line 352, Address: 0x101be60, Func Offset: 0x170
	// Line 353, Address: 0x101be70, Func Offset: 0x180
	// Line 354, Address: 0x101be84, Func Offset: 0x194
	// Line 355, Address: 0x101be98, Func Offset: 0x1a8
	// Line 357, Address: 0x101bea4, Func Offset: 0x1b4
	// Line 358, Address: 0x101beac, Func Offset: 0x1bc
	// Line 359, Address: 0x101bee8, Func Offset: 0x1f8
	// Line 361, Address: 0x101bf04, Func Offset: 0x214
	// Line 362, Address: 0x101bf10, Func Offset: 0x220
	// Line 365, Address: 0x101bf1c, Func Offset: 0x22c
	// Line 366, Address: 0x101bf2c, Func Offset: 0x23c
	// Line 367, Address: 0x101bf38, Func Offset: 0x248
	// Line 368, Address: 0x101bf44, Func Offset: 0x254
	// Line 369, Address: 0x101bf4c, Func Offset: 0x25c
	// Line 371, Address: 0x101bf58, Func Offset: 0x268
	// Line 373, Address: 0x101bf70, Func Offset: 0x280
	// Line 374, Address: 0x101bf9c, Func Offset: 0x2ac
	// Line 376, Address: 0x101bfc8, Func Offset: 0x2d8
	// Line 377, Address: 0x101bfd8, Func Offset: 0x2e8
	// Line 379, Address: 0x101bfe0, Func Offset: 0x2f0
	// Line 381, Address: 0x101bff0, Func Offset: 0x300
	// Line 382, Address: 0x101bff4, Func Offset: 0x304
	// Func End, Address: 0x101c00c, Func Offset: 0x31c
}

// 
// Start address: 0x101c010
short pcolplay2(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 398, Address: 0x101c010, Func Offset: 0
	// Line 399, Address: 0x101c020, Func Offset: 0x10
	// Line 400, Address: 0x101c030, Func Offset: 0x20
	// Line 401, Address: 0x101c040, Func Offset: 0x30
	// Func End, Address: 0x101c050, Func Offset: 0x40
}

// 
// Start address: 0x101c050
short pcolplay(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 416, Address: 0x101c050, Func Offset: 0
	// Line 417, Address: 0x101c060, Func Offset: 0x10
	// Line 418, Address: 0x101c074, Func Offset: 0x24
	// Line 420, Address: 0x101c08c, Func Offset: 0x3c
	// Line 421, Address: 0x101c090, Func Offset: 0x40
	// Func End, Address: 0x101c0a0, Func Offset: 0x50
}

// 
// Start address: 0x101c0a0
short pcole(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 436, Address: 0x101c0a0, Func Offset: 0
	// Line 437, Address: 0x101c0b0, Func Offset: 0x10
	// Line 438, Address: 0x101c0c4, Func Offset: 0x24
	// Line 440, Address: 0x101c0d0, Func Offset: 0x30
	// Line 441, Address: 0x101c0e0, Func Offset: 0x40
	// Func End, Address: 0x101c0f0, Func Offset: 0x50
}

// 
// Start address: 0x101c0f0
void playdamagechk(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 456, Address: 0x101c0f0, Func Offset: 0
	// Line 459, Address: 0x101c100, Func Offset: 0x10
	// Line 460, Address: 0x101c108, Func Offset: 0x18
	// Line 461, Address: 0x101c120, Func Offset: 0x30
	// Line 462, Address: 0x101c128, Func Offset: 0x38
	// Line 464, Address: 0x101c13c, Func Offset: 0x4c
	// Line 465, Address: 0x101c148, Func Offset: 0x58
	// Line 466, Address: 0x101c150, Func Offset: 0x60
	// Line 468, Address: 0x101c160, Func Offset: 0x70
	// Line 470, Address: 0x101c178, Func Offset: 0x88
	// Line 471, Address: 0x101c184, Func Offset: 0x94
	// Line 472, Address: 0x101c190, Func Offset: 0xa0
	// Line 475, Address: 0x101c198, Func Offset: 0xa8
	// Line 476, Address: 0x101c1a4, Func Offset: 0xb4
	// Line 480, Address: 0x101c1b0, Func Offset: 0xc0
	// Line 481, Address: 0x101c1dc, Func Offset: 0xec
	// Line 483, Address: 0x101c200, Func Offset: 0x110
	// Line 484, Address: 0x101c208, Func Offset: 0x118
	// Line 485, Address: 0x101c214, Func Offset: 0x124
	// Line 486, Address: 0x101c220, Func Offset: 0x130
	// Func End, Address: 0x101c230, Func Offset: 0x140
}

// 
// Start address: 0x101c230
short playdamageset(_anon0* pActwk, _anon0* pColliAct)
{
	_anon0* pFreeAct;
	int iRet;
	// Line 501, Address: 0x101c230, Func Offset: 0
	// Line 505, Address: 0x101c244, Func Offset: 0x14
	// Line 507, Address: 0x101c258, Func Offset: 0x28
	// Line 508, Address: 0x101c268, Func Offset: 0x38
	// Line 510, Address: 0x101c274, Func Offset: 0x44
	// Line 512, Address: 0x101c28c, Func Offset: 0x5c
	// Line 513, Address: 0x101c29c, Func Offset: 0x6c
	// Line 515, Address: 0x101c2a4, Func Offset: 0x74
	// Line 516, Address: 0x101c2b0, Func Offset: 0x80
	// Line 517, Address: 0x101c2c0, Func Offset: 0x90
	// Line 520, Address: 0x101c2d0, Func Offset: 0xa0
	// Line 521, Address: 0x101c2e0, Func Offset: 0xb0
	// Line 524, Address: 0x101c2ec, Func Offset: 0xbc
	// Line 526, Address: 0x101c304, Func Offset: 0xd4
	// Line 527, Address: 0x101c314, Func Offset: 0xe4
	// Line 529, Address: 0x101c320, Func Offset: 0xf0
	// Line 530, Address: 0x101c32c, Func Offset: 0xfc
	// Func End, Address: 0x101c340, Func Offset: 0x110
}

// 
// Start address: 0x101c340
short playdieset(_anon0* pActwk)
{
	// Line 543, Address: 0x101c340, Func Offset: 0
	// Line 544, Address: 0x101c34c, Func Offset: 0xc
	// Line 545, Address: 0x101c364, Func Offset: 0x24
	// Line 546, Address: 0x101c370, Func Offset: 0x30
	// Line 547, Address: 0x101c378, Func Offset: 0x38
	// Line 548, Address: 0x101c384, Func Offset: 0x44
	// Line 549, Address: 0x101c38c, Func Offset: 0x4c
	// Line 550, Address: 0x101c39c, Func Offset: 0x5c
	// Line 551, Address: 0x101c3a8, Func Offset: 0x68
	// Line 552, Address: 0x101c3b0, Func Offset: 0x70
	// Line 553, Address: 0x101c3b8, Func Offset: 0x78
	// Line 554, Address: 0x101c3c8, Func Offset: 0x88
	// Line 555, Address: 0x101c3d4, Func Offset: 0x94
	// Line 556, Address: 0x101c3e4, Func Offset: 0xa4
	// Line 557, Address: 0x101c3ec, Func Offset: 0xac
	// Line 558, Address: 0x101c3f8, Func Offset: 0xb8
	// Line 559, Address: 0x101c3fc, Func Offset: 0xbc
	// Func End, Address: 0x101c40c, Func Offset: 0xcc
}

// 
// Start address: 0x101c410
short pcolspecial(_anon0* pActwk, _anon0* pColliAct)
{
	char cColiNo;
	// Line 576, Address: 0x101c410, Func Offset: 0
	// Line 577, Address: 0x101c424, Func Offset: 0x14
	// Line 579, Address: 0x101c444, Func Offset: 0x34
	// Line 585, Address: 0x101c49c, Func Offset: 0x8c
	// Line 586, Address: 0x101c4ac, Func Offset: 0x9c
	// Line 589, Address: 0x101c4b4, Func Offset: 0xa4
	// Line 590, Address: 0x101c4c4, Func Offset: 0xb4
	// Line 592, Address: 0x101c4cc, Func Offset: 0xbc
	// Line 595, Address: 0x101c4e0, Func Offset: 0xd0
	// Line 596, Address: 0x101c4e4, Func Offset: 0xd4
	// Func End, Address: 0x101c4f8, Func Offset: 0xe8
}

// 
// Start address: 0x101c500
short eggman_chk(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 613, Address: 0x101c500, Func Offset: 0
	// Line 615, Address: 0x101c514, Func Offset: 0x14
	// Line 616, Address: 0x101c538, Func Offset: 0x38
	// Line 619, Address: 0x101c570, Func Offset: 0x70
	// Line 620, Address: 0x101c584, Func Offset: 0x84
	// Line 622, Address: 0x101c58c, Func Offset: 0x8c
	// Line 623, Address: 0x101c5a0, Func Offset: 0xa0
	// Line 625, Address: 0x101c5a8, Func Offset: 0xa8
	// Line 626, Address: 0x101c5bc, Func Offset: 0xbc
	// Line 628, Address: 0x101c5c4, Func Offset: 0xc4
	// Line 631, Address: 0x101c5d8, Func Offset: 0xd8
	// Line 632, Address: 0x101c5dc, Func Offset: 0xdc
	// Func End, Address: 0x101c5ec, Func Offset: 0xec
}

// 
// Start address: 0x101c5f0
void boss_1(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 648, Address: 0x101c5f0, Func Offset: 0
	// Line 649, Address: 0x101c604, Func Offset: 0x14
	// Line 650, Address: 0x101c634, Func Offset: 0x44
	// Line 657, Address: 0x101c63c, Func Offset: 0x4c
	// Line 658, Address: 0x101c64c, Func Offset: 0x5c
	// Line 659, Address: 0x101c660, Func Offset: 0x70
	// Line 660, Address: 0x101c670, Func Offset: 0x80
	// Line 662, Address: 0x101c678, Func Offset: 0x88
	// Line 663, Address: 0x101c688, Func Offset: 0x98
	// Func End, Address: 0x101c698, Func Offset: 0xa8
}

// 
// Start address: 0x101c6a0
void boss_4(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 679, Address: 0x101c6a0, Func Offset: 0
	// Line 680, Address: 0x101c6b4, Func Offset: 0x14
	// Line 683, Address: 0x101c6cc, Func Offset: 0x2c
	// Line 685, Address: 0x101c6e4, Func Offset: 0x44
	// Line 686, Address: 0x101c6f4, Func Offset: 0x54
	// Line 687, Address: 0x101c704, Func Offset: 0x64
	// Line 688, Address: 0x101c70c, Func Offset: 0x6c
	// Line 690, Address: 0x101c718, Func Offset: 0x78
	// Line 691, Address: 0x101c724, Func Offset: 0x84
	// Line 692, Address: 0x101c730, Func Offset: 0x90
	// Line 693, Address: 0x101c75c, Func Offset: 0xbc
	// Line 694, Address: 0x101c780, Func Offset: 0xe0
	// Line 695, Address: 0x101c788, Func Offset: 0xe8
	// Line 697, Address: 0x101c7a0, Func Offset: 0x100
	// Line 698, Address: 0x101c7b0, Func Offset: 0x110
	// Line 700, Address: 0x101c7c0, Func Offset: 0x120
	// Func End, Address: 0x101c7d0, Func Offset: 0x130
}

// 
// Start address: 0x101c7d0
void boss_5(_anon0* pActwk, _anon0* pColliAct, char cColiNo)
{
	// Line 715, Address: 0x101c7d0, Func Offset: 0
	// Line 716, Address: 0x101c7e4, Func Offset: 0x14
	// Line 718, Address: 0x101c7fc, Func Offset: 0x2c
	// Line 719, Address: 0x101c80c, Func Offset: 0x3c
	// Line 721, Address: 0x101c81c, Func Offset: 0x4c
	// Func End, Address: 0x101c82c, Func Offset: 0x5c
}

// 
// Start address: 0x101c830
void main_attack(_anon0* pActwk, _anon0* pColliAct)
{
	// Line 736, Address: 0x101c830, Func Offset: 0
	// Line 737, Address: 0x101c83c, Func Offset: 0xc
	// Line 738, Address: 0x101c858, Func Offset: 0x28
	// Line 739, Address: 0x101c868, Func Offset: 0x38
	// Func End, Address: 0x101c874, Func Offset: 0x44
}

