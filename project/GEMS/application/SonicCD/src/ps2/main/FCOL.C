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
typedef char type_2[4];
typedef unsigned char type_3[256];
typedef unsigned char type_4[16];
typedef unsigned char type_5[16][257];
typedef unsigned char type_6[16];
typedef unsigned char type_7[16][257];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];

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

char dirstk[4];
unsigned char scdtblwk[16][257];
unsigned char scddirtbl[256];
unsigned char* scdadr;
unsigned char scdtblwk2[16][257];
unsigned short* pmapwk;
_anon5 stageno;
unsigned char mapwka[64][8];
unsigned char prio_flag;

short fcol(_anon1* pActwk);
short fcol_d(_anon1* pActwk);
short fcol_r(_anon1* pActwk);
short fcol_u(_anon1* pActwk);
short fcol_l(_anon1* pActwk);
short scdend(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirStk);
short scdchk(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirStk);
short scdchk2(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirStk);
short scdend_r(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirstk);
short scdchk_r(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirstk);
short scdchk2_r(_anon1* pActwk, short iXposi, short iYposi, short iBlkMsk, short iRideon, char* cpDirstk);
short scramapad(_anon1* pActwk, short iXposi, short iYposi);
short dirchk(_anon1* pActwk, short scd0, short scd1);
short scdcnv();
short st_elseDataChk(short iBlkNo, _anon1* pActwk);
short st_wackyDataChk(short iBlkNo, _anon1* pActwk);
short st_starDataChk(short iBlkNo, _anon1* pActwk);
short st_metalDataChk(short iBlkNo, _anon1* pActwk);
unsigned char CCset(int lSrc, int lDst);
unsigned char CSset(unsigned short wSrc, unsigned short wDst);
unsigned char bchg(unsigned char bySrc, unsigned char byDst);

// 
// Start address: 0x1001350
short fcol(_anon1* pActwk)
{
	short iColliVal;
	unsigned char byDirec;
	char cDirecWork;
	// Line 50, Address: 0x1001350, Func Offset: 0
	// Line 55, Address: 0x1001368, Func Offset: 0x18
	// Line 57, Address: 0x1001380, Func Offset: 0x30
	// Line 58, Address: 0x1001388, Func Offset: 0x38
	// Line 59, Address: 0x1001390, Func Offset: 0x40
	// Line 62, Address: 0x100139c, Func Offset: 0x4c
	// Line 63, Address: 0x10013a8, Func Offset: 0x58
	// Line 65, Address: 0x10013b4, Func Offset: 0x64
	// Line 66, Address: 0x10013c4, Func Offset: 0x74
	// Line 68, Address: 0x10013e8, Func Offset: 0x98
	// Line 69, Address: 0x10013f8, Func Offset: 0xa8
	// Line 71, Address: 0x1001404, Func Offset: 0xb4
	// Line 72, Address: 0x1001410, Func Offset: 0xc0
	// Line 76, Address: 0x1001418, Func Offset: 0xc8
	// Line 77, Address: 0x1001428, Func Offset: 0xd8
	// Line 79, Address: 0x1001434, Func Offset: 0xe4
	// Line 82, Address: 0x1001440, Func Offset: 0xf0
	// Line 84, Address: 0x1001454, Func Offset: 0x104
	// Line 87, Address: 0x1001484, Func Offset: 0x134
	// Line 88, Address: 0x1001498, Func Offset: 0x148
	// Line 90, Address: 0x10014a0, Func Offset: 0x150
	// Line 91, Address: 0x10014b4, Func Offset: 0x164
	// Line 93, Address: 0x10014bc, Func Offset: 0x16c
	// Line 94, Address: 0x10014d0, Func Offset: 0x180
	// Line 96, Address: 0x10014d8, Func Offset: 0x188
	// Line 99, Address: 0x10014ec, Func Offset: 0x19c
	// Line 100, Address: 0x1001514, Func Offset: 0x1c4
	// Line 101, Address: 0x1001518, Func Offset: 0x1c8
	// Line 102, Address: 0x100151c, Func Offset: 0x1cc
	// Func End, Address: 0x1001538, Func Offset: 0x1e8
}

// 
// Start address: 0x1001540
short fcol_d(_anon1* pActwk)
{
	short iXposi;
	short iYposi;
	short iScd;
	short iScd0;
	short iScd1;
	char* cpDirStk;
	// Line 116, Address: 0x1001540, Func Offset: 0
	// Line 121, Address: 0x1001564, Func Offset: 0x24
	// Line 122, Address: 0x100159c, Func Offset: 0x5c
	// Line 123, Address: 0x10015d4, Func Offset: 0x94
	// Line 124, Address: 0x10015dc, Func Offset: 0x9c
	// Line 127, Address: 0x1001608, Func Offset: 0xc8
	// Line 128, Address: 0x1001640, Func Offset: 0x100
	// Line 129, Address: 0x1001678, Func Offset: 0x138
	// Line 130, Address: 0x1001680, Func Offset: 0x140
	// Line 134, Address: 0x10016ac, Func Offset: 0x16c
	// Line 136, Address: 0x10016c8, Func Offset: 0x188
	// Line 137, Address: 0x10016e8, Func Offset: 0x1a8
	// Line 145, Address: 0x1001720, Func Offset: 0x1e0
	// Line 151, Address: 0x100172c, Func Offset: 0x1ec
	// Line 153, Address: 0x1001748, Func Offset: 0x208
	// Line 154, Address: 0x1001758, Func Offset: 0x218
	// Line 156, Address: 0x1001764, Func Offset: 0x224
	// Line 159, Address: 0x1001774, Func Offset: 0x234
	// Line 160, Address: 0x1001788, Func Offset: 0x248
	// Line 161, Address: 0x1001798, Func Offset: 0x258
	// Line 166, Address: 0x10017a4, Func Offset: 0x264
	// Line 169, Address: 0x10017b8, Func Offset: 0x278
	// Line 170, Address: 0x10017c8, Func Offset: 0x288
	// Line 173, Address: 0x10017d4, Func Offset: 0x294
	// Line 175, Address: 0x10017e8, Func Offset: 0x2a8
	// Line 176, Address: 0x10017f8, Func Offset: 0x2b8
	// Line 177, Address: 0x1001808, Func Offset: 0x2c8
	// Line 178, Address: 0x1001814, Func Offset: 0x2d4
	// Line 182, Address: 0x100181c, Func Offset: 0x2dc
	// Line 184, Address: 0x100182c, Func Offset: 0x2ec
	// Line 186, Address: 0x1001830, Func Offset: 0x2f0
	// Func End, Address: 0x1001858, Func Offset: 0x318
}

// 
// Start address: 0x1001860
short fcol_r(_anon1* pActwk)
{
	short iXposi;
	short iYposi;
	short scd0;
	short scd1;
	char* cpDirStk;
	// Line 199, Address: 0x1001860, Func Offset: 0
	// Line 204, Address: 0x1001880, Func Offset: 0x20
	// Line 205, Address: 0x10018b8, Func Offset: 0x58
	// Line 206, Address: 0x10018f0, Func Offset: 0x90
	// Line 207, Address: 0x10018f8, Func Offset: 0x98
	// Line 210, Address: 0x1001924, Func Offset: 0xc4
	// Line 211, Address: 0x100195c, Func Offset: 0xfc
	// Line 212, Address: 0x1001994, Func Offset: 0x134
	// Line 213, Address: 0x100199c, Func Offset: 0x13c
	// Line 215, Address: 0x10019c8, Func Offset: 0x168
	// Line 216, Address: 0x10019fc, Func Offset: 0x19c
	// Line 217, Address: 0x1001a08, Func Offset: 0x1a8
	// Line 220, Address: 0x1001a18, Func Offset: 0x1b8
	// Line 221, Address: 0x1001a2c, Func Offset: 0x1cc
	// Line 222, Address: 0x1001a3c, Func Offset: 0x1dc
	// Line 227, Address: 0x1001a48, Func Offset: 0x1e8
	// Line 230, Address: 0x1001a5c, Func Offset: 0x1fc
	// Line 232, Address: 0x1001a70, Func Offset: 0x210
	// Line 233, Address: 0x1001a80, Func Offset: 0x220
	// Line 234, Address: 0x1001a90, Func Offset: 0x230
	// Line 235, Address: 0x1001a9c, Func Offset: 0x23c
	// Line 237, Address: 0x1001aa4, Func Offset: 0x244
	// Line 238, Address: 0x1001ab4, Func Offset: 0x254
	// Line 241, Address: 0x1001ac0, Func Offset: 0x260
	// Line 242, Address: 0x1001ad0, Func Offset: 0x270
	// Line 244, Address: 0x1001ad4, Func Offset: 0x274
	// Func End, Address: 0x1001af8, Func Offset: 0x298
}

// 
// Start address: 0x1001b00
short fcol_u(_anon1* pActwk)
{
	short iXposi;
	short iYposi;
	short scd0;
	short scd1;
	char* cpDirStk;
	// Line 257, Address: 0x1001b00, Func Offset: 0
	// Line 262, Address: 0x1001b20, Func Offset: 0x20
	// Line 263, Address: 0x1001b5c, Func Offset: 0x5c
	// Line 264, Address: 0x1001b94, Func Offset: 0x94
	// Line 265, Address: 0x1001b9c, Func Offset: 0x9c
	// Line 268, Address: 0x1001bc8, Func Offset: 0xc8
	// Line 269, Address: 0x1001c04, Func Offset: 0x104
	// Line 270, Address: 0x1001c3c, Func Offset: 0x13c
	// Line 271, Address: 0x1001c44, Func Offset: 0x144
	// Line 273, Address: 0x1001c70, Func Offset: 0x170
	// Line 274, Address: 0x1001ca4, Func Offset: 0x1a4
	// Line 276, Address: 0x1001cb0, Func Offset: 0x1b0
	// Line 279, Address: 0x1001cc0, Func Offset: 0x1c0
	// Line 280, Address: 0x1001cd4, Func Offset: 0x1d4
	// Line 281, Address: 0x1001ce4, Func Offset: 0x1e4
	// Line 284, Address: 0x1001cf0, Func Offset: 0x1f0
	// Line 287, Address: 0x1001d04, Func Offset: 0x204
	// Line 289, Address: 0x1001d18, Func Offset: 0x218
	// Line 290, Address: 0x1001d28, Func Offset: 0x228
	// Line 291, Address: 0x1001d38, Func Offset: 0x238
	// Line 292, Address: 0x1001d44, Func Offset: 0x244
	// Line 294, Address: 0x1001d4c, Func Offset: 0x24c
	// Line 295, Address: 0x1001d5c, Func Offset: 0x25c
	// Line 298, Address: 0x1001d68, Func Offset: 0x268
	// Line 299, Address: 0x1001d78, Func Offset: 0x278
	// Line 300, Address: 0x1001d7c, Func Offset: 0x27c
	// Func End, Address: 0x1001da0, Func Offset: 0x2a0
}

// 
// Start address: 0x1001da0
short fcol_l(_anon1* pActwk)
{
	short iXposi;
	short iYposi;
	short scd0;
	short scd1;
	char* cpDirStk;
	// Line 313, Address: 0x1001da0, Func Offset: 0
	// Line 318, Address: 0x1001dc0, Func Offset: 0x20
	// Line 319, Address: 0x1001df8, Func Offset: 0x58
	// Line 320, Address: 0x1001e34, Func Offset: 0x94
	// Line 321, Address: 0x1001e3c, Func Offset: 0x9c
	// Line 324, Address: 0x1001e68, Func Offset: 0xc8
	// Line 325, Address: 0x1001ea0, Func Offset: 0x100
	// Line 326, Address: 0x1001edc, Func Offset: 0x13c
	// Line 327, Address: 0x1001ee4, Func Offset: 0x144
	// Line 329, Address: 0x1001f10, Func Offset: 0x170
	// Line 330, Address: 0x1001f44, Func Offset: 0x1a4
	// Line 331, Address: 0x1001f50, Func Offset: 0x1b0
	// Line 334, Address: 0x1001f60, Func Offset: 0x1c0
	// Line 335, Address: 0x1001f74, Func Offset: 0x1d4
	// Line 336, Address: 0x1001f84, Func Offset: 0x1e4
	// Line 339, Address: 0x1001f90, Func Offset: 0x1f0
	// Line 342, Address: 0x1001fa4, Func Offset: 0x204
	// Line 344, Address: 0x1001fb8, Func Offset: 0x218
	// Line 345, Address: 0x1001fc8, Func Offset: 0x228
	// Line 346, Address: 0x1001fd8, Func Offset: 0x238
	// Line 347, Address: 0x1001fe4, Func Offset: 0x244
	// Line 349, Address: 0x1001fec, Func Offset: 0x24c
	// Line 350, Address: 0x1001ffc, Func Offset: 0x25c
	// Line 352, Address: 0x1002008, Func Offset: 0x268
	// Line 353, Address: 0x1002018, Func Offset: 0x278
	// Line 354, Address: 0x100201c, Func Offset: 0x27c
	// Func End, Address: 0x1002040, Func Offset: 0x2a0
}

// 
// Start address: 0x1002040
short scdend(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirStk)
{
	short iScd;
	// Line 365, Address: 0x1002040, Func Offset: 0
	// Line 368, Address: 0x1002068, Func Offset: 0x28
	// Line 369, Address: 0x1002078, Func Offset: 0x38
	// Line 370, Address: 0x10020a4, Func Offset: 0x64
	// Line 371, Address: 0x10020b4, Func Offset: 0x74
	// Line 372, Address: 0x10020c8, Func Offset: 0x88
	// Func End, Address: 0x10020dc, Func Offset: 0x9c
}

// 
// Start address: 0x10020e0
short scdchk(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirStk)
{
	short iBlkNo;
	short iBlkOffset;
	short iXwork;
	short iScdData;
	unsigned short iScdNo;
	char cDirect;
	unsigned char bySCDwk;
	char cScdwk;
	// Line 395, Address: 0x10020e0, Func Offset: 0
	// Line 407, Address: 0x1002124, Func Offset: 0x44
	// Line 409, Address: 0x1002140, Func Offset: 0x60
	// Line 410, Address: 0x100215c, Func Offset: 0x7c
	// Line 412, Address: 0x1002194, Func Offset: 0xb4
	// Line 416, Address: 0x10021c0, Func Offset: 0xe0
	// Line 417, Address: 0x10021dc, Func Offset: 0xfc
	// Line 418, Address: 0x10021ec, Func Offset: 0x10c
	// Line 420, Address: 0x10021f8, Func Offset: 0x118
	// Line 424, Address: 0x1002224, Func Offset: 0x144
	// Line 425, Address: 0x100223c, Func Offset: 0x15c
	// Line 427, Address: 0x1002244, Func Offset: 0x164
	// Line 429, Address: 0x1002250, Func Offset: 0x170
	// Line 432, Address: 0x1002264, Func Offset: 0x184
	// Line 433, Address: 0x1002280, Func Offset: 0x1a0
	// Line 435, Address: 0x100229c, Func Offset: 0x1bc
	// Line 438, Address: 0x10022b0, Func Offset: 0x1d0
	// Line 440, Address: 0x10022d4, Func Offset: 0x1f4
	// Line 441, Address: 0x10022dc, Func Offset: 0x1fc
	// Line 444, Address: 0x10022e8, Func Offset: 0x208
	// Line 445, Address: 0x1002314, Func Offset: 0x234
	// Line 447, Address: 0x1002324, Func Offset: 0x244
	// Line 448, Address: 0x1002334, Func Offset: 0x254
	// Line 449, Address: 0x1002348, Func Offset: 0x268
	// Line 452, Address: 0x1002364, Func Offset: 0x284
	// Line 453, Address: 0x1002374, Func Offset: 0x294
	// Line 454, Address: 0x10023a0, Func Offset: 0x2c0
	// Line 455, Address: 0x10023b0, Func Offset: 0x2d0
	// Line 457, Address: 0x10023c4, Func Offset: 0x2e4
	// Line 459, Address: 0x10023f8, Func Offset: 0x318
	// Line 461, Address: 0x1002410, Func Offset: 0x330
	// Line 462, Address: 0x100241c, Func Offset: 0x33c
	// Line 463, Address: 0x1002424, Func Offset: 0x344
	// Line 466, Address: 0x100242c, Func Offset: 0x34c
	// Line 467, Address: 0x1002450, Func Offset: 0x370
	// Line 468, Address: 0x1002460, Func Offset: 0x380
	// Line 470, Address: 0x100248c, Func Offset: 0x3ac
	// Line 471, Address: 0x100249c, Func Offset: 0x3bc
	// Line 472, Address: 0x10024c8, Func Offset: 0x3e8
	// Line 473, Address: 0x10024d8, Func Offset: 0x3f8
	// Line 474, Address: 0x10024ec, Func Offset: 0x40c
	// Func End, Address: 0x100251c, Func Offset: 0x43c
}

// 
// Start address: 0x1002520
short scdchk2(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirStk)
{
	short iBlkNo;
	short iBlkOffset;
	short iScd;
	short iXwork;
	short iScdData;
	char cDirect;
	unsigned short iScdNo;
	unsigned char bySCDwk;
	char cScdwk;
	// Line 498, Address: 0x1002520, Func Offset: 0
	// Line 509, Address: 0x1002568, Func Offset: 0x48
	// Line 510, Address: 0x1002584, Func Offset: 0x64
	// Line 511, Address: 0x10025a0, Func Offset: 0x80
	// Line 514, Address: 0x10025d8, Func Offset: 0xb8
	// Line 517, Address: 0x1002600, Func Offset: 0xe0
	// Line 518, Address: 0x100261c, Func Offset: 0xfc
	// Line 519, Address: 0x100262c, Func Offset: 0x10c
	// Line 522, Address: 0x1002638, Func Offset: 0x118
	// Line 525, Address: 0x1002660, Func Offset: 0x140
	// Line 526, Address: 0x100267c, Func Offset: 0x15c
	// Line 527, Address: 0x1002688, Func Offset: 0x168
	// Line 530, Address: 0x100269c, Func Offset: 0x17c
	// Line 531, Address: 0x10026b8, Func Offset: 0x198
	// Line 533, Address: 0x10026d4, Func Offset: 0x1b4
	// Line 537, Address: 0x10026e8, Func Offset: 0x1c8
	// Line 539, Address: 0x100270c, Func Offset: 0x1ec
	// Line 541, Address: 0x1002714, Func Offset: 0x1f4
	// Line 544, Address: 0x1002720, Func Offset: 0x200
	// Line 545, Address: 0x100274c, Func Offset: 0x22c
	// Line 547, Address: 0x100275c, Func Offset: 0x23c
	// Line 548, Address: 0x100276c, Func Offset: 0x24c
	// Line 550, Address: 0x100278c, Func Offset: 0x26c
	// Line 552, Address: 0x100279c, Func Offset: 0x27c
	// Line 553, Address: 0x10027c4, Func Offset: 0x2a4
	// Line 555, Address: 0x10027d4, Func Offset: 0x2b4
	// Line 556, Address: 0x10027e0, Func Offset: 0x2c0
	// Line 557, Address: 0x10027f0, Func Offset: 0x2d0
	// Line 560, Address: 0x1002810, Func Offset: 0x2f0
	// Line 562, Address: 0x1002828, Func Offset: 0x308
	// Line 563, Address: 0x1002834, Func Offset: 0x314
	// Line 564, Address: 0x100283c, Func Offset: 0x31c
	// Line 567, Address: 0x1002844, Func Offset: 0x324
	// Line 568, Address: 0x1002864, Func Offset: 0x344
	// Line 569, Address: 0x1002880, Func Offset: 0x360
	// Line 571, Address: 0x10028a0, Func Offset: 0x380
	// Line 572, Address: 0x10028b4, Func Offset: 0x394
	// Func End, Address: 0x10028e8, Func Offset: 0x3c8
}

// 
// Start address: 0x10028f0
short scdend_r(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirstk)
{
	short iScd;
	// Line 583, Address: 0x10028f0, Func Offset: 0
	// Line 586, Address: 0x1002918, Func Offset: 0x28
	// Line 587, Address: 0x1002928, Func Offset: 0x38
	// Line 588, Address: 0x1002950, Func Offset: 0x60
	// Line 589, Address: 0x1002960, Func Offset: 0x70
	// Line 590, Address: 0x1002974, Func Offset: 0x84
	// Func End, Address: 0x1002988, Func Offset: 0x98
}

// 
// Start address: 0x1002990
short scdchk_r(_anon1* pActwk, short iXposi, short iYposi, short iOffset, short iBlkMsk, short iRideon, char* cpDirstk)
{
	short iBlkNo;
	short iBlkOffset;
	short iXwork;
	short iYwork;
	short iScdData;
	char cDirect;
	unsigned short iScdNo;
	unsigned char bySCDwk;
	char cScdwk;
	// Line 614, Address: 0x1002990, Func Offset: 0
	// Line 625, Address: 0x10029d8, Func Offset: 0x48
	// Line 626, Address: 0x10029f4, Func Offset: 0x64
	// Line 627, Address: 0x1002a10, Func Offset: 0x80
	// Line 629, Address: 0x1002a48, Func Offset: 0xb8
	// Line 633, Address: 0x1002a74, Func Offset: 0xe4
	// Line 634, Address: 0x1002a90, Func Offset: 0x100
	// Line 635, Address: 0x1002aa0, Func Offset: 0x110
	// Line 637, Address: 0x1002aac, Func Offset: 0x11c
	// Line 640, Address: 0x1002ad8, Func Offset: 0x148
	// Line 641, Address: 0x1002af4, Func Offset: 0x164
	// Line 643, Address: 0x1002b00, Func Offset: 0x170
	// Line 646, Address: 0x1002b14, Func Offset: 0x184
	// Line 647, Address: 0x1002b30, Func Offset: 0x1a0
	// Line 649, Address: 0x1002b54, Func Offset: 0x1c4
	// Line 652, Address: 0x1002b68, Func Offset: 0x1d8
	// Line 654, Address: 0x1002b84, Func Offset: 0x1f4
	// Line 657, Address: 0x1002b8c, Func Offset: 0x1fc
	// Line 659, Address: 0x1002b98, Func Offset: 0x208
	// Line 660, Address: 0x1002bc4, Func Offset: 0x234
	// Line 662, Address: 0x1002bd4, Func Offset: 0x244
	// Line 663, Address: 0x1002be4, Func Offset: 0x254
	// Line 665, Address: 0x1002c04, Func Offset: 0x274
	// Line 666, Address: 0x1002c14, Func Offset: 0x284
	// Line 667, Address: 0x1002c40, Func Offset: 0x2b0
	// Line 668, Address: 0x1002c50, Func Offset: 0x2c0
	// Line 670, Address: 0x1002c64, Func Offset: 0x2d4
	// Line 671, Address: 0x1002c70, Func Offset: 0x2e0
	// Line 673, Address: 0x1002ca0, Func Offset: 0x310
	// Line 674, Address: 0x1002cc0, Func Offset: 0x330
	// Line 675, Address: 0x1002ccc, Func Offset: 0x33c
	// Line 676, Address: 0x1002cdc, Func Offset: 0x34c
	// Line 678, Address: 0x1002d08, Func Offset: 0x378
	// Line 679, Address: 0x1002d18, Func Offset: 0x388
	// Line 680, Address: 0x1002d40, Func Offset: 0x3b0
	// Line 681, Address: 0x1002d50, Func Offset: 0x3c0
	// Line 682, Address: 0x1002d64, Func Offset: 0x3d4
	// Func End, Address: 0x1002d98, Func Offset: 0x408
}

// 
// Start address: 0x1002da0
short scdchk2_r(_anon1* pActwk, short iXposi, short iYposi, short iBlkMsk, short iRideon, char* cpDirstk)
{
	short iBlkNo;
	short iBlkOffset;
	short iXwork;
	short iYwork;
	short iScdData;
	char cDirect;
	unsigned short iScdNo;
	unsigned char bySCDwk;
	char cScdwk;
	// Line 703, Address: 0x1002da0, Func Offset: 0
	// Line 715, Address: 0x1002de4, Func Offset: 0x44
	// Line 716, Address: 0x1002e00, Func Offset: 0x60
	// Line 717, Address: 0x1002e1c, Func Offset: 0x7c
	// Line 720, Address: 0x1002e54, Func Offset: 0xb4
	// Line 723, Address: 0x1002e7c, Func Offset: 0xdc
	// Line 724, Address: 0x1002e98, Func Offset: 0xf8
	// Line 725, Address: 0x1002ea8, Func Offset: 0x108
	// Line 728, Address: 0x1002eb4, Func Offset: 0x114
	// Line 731, Address: 0x1002edc, Func Offset: 0x13c
	// Line 732, Address: 0x1002ef8, Func Offset: 0x158
	// Line 733, Address: 0x1002f04, Func Offset: 0x164
	// Line 736, Address: 0x1002f18, Func Offset: 0x178
	// Line 737, Address: 0x1002f34, Func Offset: 0x194
	// Line 739, Address: 0x1002f58, Func Offset: 0x1b8
	// Line 742, Address: 0x1002f6c, Func Offset: 0x1cc
	// Line 744, Address: 0x1002f88, Func Offset: 0x1e8
	// Line 747, Address: 0x1002f90, Func Offset: 0x1f0
	// Line 749, Address: 0x1002f9c, Func Offset: 0x1fc
	// Line 750, Address: 0x1002fc8, Func Offset: 0x228
	// Line 752, Address: 0x1002fd8, Func Offset: 0x238
	// Line 753, Address: 0x1002fe8, Func Offset: 0x248
	// Line 755, Address: 0x1003008, Func Offset: 0x268
	// Line 757, Address: 0x1003018, Func Offset: 0x278
	// Line 759, Address: 0x1003040, Func Offset: 0x2a0
	// Line 762, Address: 0x1003050, Func Offset: 0x2b0
	// Line 763, Address: 0x1003070, Func Offset: 0x2d0
	// Line 764, Address: 0x100307c, Func Offset: 0x2dc
	// Line 765, Address: 0x100309c, Func Offset: 0x2fc
	// Line 768, Address: 0x10030a8, Func Offset: 0x308
	// Line 769, Address: 0x10030c8, Func Offset: 0x328
	// Line 772, Address: 0x10030e4, Func Offset: 0x344
	// Line 774, Address: 0x100310c, Func Offset: 0x36c
	// Line 775, Address: 0x1003120, Func Offset: 0x380
	// Func End, Address: 0x1003154, Func Offset: 0x3b4
}

// 
// Start address: 0x1003160
short scramapad(_anon1* pActwk, short iXposi, short iYposi)
{
	char cBlkNo;
	short iBlkNo;
	short iMapNo;
	short iXwork;
	short iYwork;
	unsigned short* lpw;
	// Line 790, Address: 0x1003160, Func Offset: 0
	// Line 797, Address: 0x100318c, Func Offset: 0x2c
	// Line 799, Address: 0x10031c0, Func Offset: 0x60
	// Line 800, Address: 0x10031d4, Func Offset: 0x74
	// Line 801, Address: 0x10031d8, Func Offset: 0x78
	// Line 802, Address: 0x10031ec, Func Offset: 0x8c
	// Line 807, Address: 0x10031f0, Func Offset: 0x90
	// Line 808, Address: 0x1003214, Func Offset: 0xb4
	// Line 809, Address: 0x1003230, Func Offset: 0xd0
	// Line 812, Address: 0x100323c, Func Offset: 0xdc
	// Line 814, Address: 0x100325c, Func Offset: 0xfc
	// Line 815, Address: 0x100327c, Func Offset: 0x11c
	// Line 816, Address: 0x1003288, Func Offset: 0x128
	// Line 817, Address: 0x1003294, Func Offset: 0x134
	// Line 819, Address: 0x10032a0, Func Offset: 0x140
	// Line 820, Address: 0x10032c0, Func Offset: 0x160
	// Line 821, Address: 0x10032cc, Func Offset: 0x16c
	// Line 823, Address: 0x10032d8, Func Offset: 0x178
	// Line 825, Address: 0x10032f0, Func Offset: 0x190
	// Line 826, Address: 0x1003304, Func Offset: 0x1a4
	// Line 829, Address: 0x1003318, Func Offset: 0x1b8
	// Line 830, Address: 0x1003348, Func Offset: 0x1e8
	// Line 831, Address: 0x1003358, Func Offset: 0x1f8
	// Line 832, Address: 0x1003364, Func Offset: 0x204
	// Line 834, Address: 0x1003374, Func Offset: 0x214
	// Line 836, Address: 0x10033ac, Func Offset: 0x24c
	// Line 838, Address: 0x10033bc, Func Offset: 0x25c
	// Line 839, Address: 0x10033d8, Func Offset: 0x278
	// Line 842, Address: 0x10033e8, Func Offset: 0x288
	// Line 844, Address: 0x1003404, Func Offset: 0x2a4
	// Line 845, Address: 0x1003438, Func Offset: 0x2d8
	// Line 847, Address: 0x100346c, Func Offset: 0x30c
	// Line 850, Address: 0x1003470, Func Offset: 0x310
	// Line 851, Address: 0x1003478, Func Offset: 0x318
	// Line 852, Address: 0x1003488, Func Offset: 0x328
	// Line 853, Address: 0x100349c, Func Offset: 0x33c
	// Line 854, Address: 0x10034b8, Func Offset: 0x358
	// Line 855, Address: 0x10034c4, Func Offset: 0x364
	// Line 858, Address: 0x10034d0, Func Offset: 0x370
	// Line 859, Address: 0x10034ec, Func Offset: 0x38c
	// Line 862, Address: 0x1003528, Func Offset: 0x3c8
	// Line 863, Address: 0x1003540, Func Offset: 0x3e0
	// Line 865, Address: 0x1003548, Func Offset: 0x3e8
	// Line 866, Address: 0x1003560, Func Offset: 0x400
	// Line 868, Address: 0x1003568, Func Offset: 0x408
	// Line 869, Address: 0x1003580, Func Offset: 0x420
	// Line 871, Address: 0x1003588, Func Offset: 0x428
	// Line 873, Address: 0x10035a0, Func Offset: 0x440
	// Line 874, Address: 0x10035bc, Func Offset: 0x45c
	// Line 875, Address: 0x10035f0, Func Offset: 0x490
	// Line 878, Address: 0x1003624, Func Offset: 0x4c4
	// Line 879, Address: 0x100362c, Func Offset: 0x4cc
	// Line 880, Address: 0x100363c, Func Offset: 0x4dc
	// Line 881, Address: 0x1003650, Func Offset: 0x4f0
	// Line 882, Address: 0x100366c, Func Offset: 0x50c
	// Line 884, Address: 0x1003678, Func Offset: 0x518
	// Func End, Address: 0x10036a0, Func Offset: 0x540
}

// 
// Start address: 0x10036a0
short dirchk(_anon1* pActwk, short scd0, short scd1)
{
	unsigned char cDirectWk;
	// Line 900, Address: 0x10036a0, Func Offset: 0
	// Line 903, Address: 0x10036b4, Func Offset: 0x14
	// Line 904, Address: 0x10036c0, Func Offset: 0x20
	// Line 906, Address: 0x10036e4, Func Offset: 0x44
	// Line 907, Address: 0x10036f0, Func Offset: 0x50
	// Line 910, Address: 0x10036f8, Func Offset: 0x58
	// Line 911, Address: 0x1003708, Func Offset: 0x68
	// Line 915, Address: 0x1003718, Func Offset: 0x78
	// Line 916, Address: 0x1003724, Func Offset: 0x84
	// Line 917, Address: 0x100372c, Func Offset: 0x8c
	// Line 918, Address: 0x1003734, Func Offset: 0x94
	// Line 929, Address: 0x100373c, Func Offset: 0x9c
	// Line 930, Address: 0x1003740, Func Offset: 0xa0
	// Func End, Address: 0x1003750, Func Offset: 0xb0
}

// 
// Start address: 0x1003750
short scdcnv()
{
	// Line 944, Address: 0x1003750, Func Offset: 0
	// Line 945, Address: 0x1003754, Func Offset: 0x4
	// Func End, Address: 0x100375c, Func Offset: 0xc
}

// 
// Start address: 0x1003760
short st_elseDataChk(short iBlkNo, _anon1* pActwk)
{
	// Line 962, Address: 0x1003760, Func Offset: 0
	// Line 963, Address: 0x100376c, Func Offset: 0xc
	// Line 964, Address: 0x1003784, Func Offset: 0x24
	// Line 965, Address: 0x1003790, Func Offset: 0x30
	// Line 966, Address: 0x10037b8, Func Offset: 0x58
	// Line 967, Address: 0x10037c4, Func Offset: 0x64
	// Line 968, Address: 0x10037c8, Func Offset: 0x68
	// Func End, Address: 0x10037d4, Func Offset: 0x74
}

// 
// Start address: 0x10037e0
short st_wackyDataChk(short iBlkNo, _anon1* pActwk)
{
	// Line 984, Address: 0x10037e0, Func Offset: 0
	// Line 985, Address: 0x10037ec, Func Offset: 0xc
	// Line 988, Address: 0x1003804, Func Offset: 0x24
	// Line 991, Address: 0x1003848, Func Offset: 0x68
	// Line 992, Address: 0x1003850, Func Offset: 0x70
	// Line 994, Address: 0x1003858, Func Offset: 0x78
	// Line 995, Address: 0x1003860, Func Offset: 0x80
	// Line 997, Address: 0x1003868, Func Offset: 0x88
	// Line 998, Address: 0x1003870, Func Offset: 0x90
	// Line 1000, Address: 0x1003878, Func Offset: 0x98
	// Line 1003, Address: 0x1003880, Func Offset: 0xa0
	// Line 1006, Address: 0x1003888, Func Offset: 0xa8
	// Line 1008, Address: 0x10038a0, Func Offset: 0xc0
	// Line 1009, Address: 0x10038b0, Func Offset: 0xd0
	// Line 1012, Address: 0x10038c0, Func Offset: 0xe0
	// Line 1013, Address: 0x10038c4, Func Offset: 0xe4
	// Func End, Address: 0x10038d0, Func Offset: 0xf0
}

// 
// Start address: 0x10038d0
short st_starDataChk(short iBlkNo, _anon1* pActwk)
{
	// Line 1028, Address: 0x10038d0, Func Offset: 0
	// Line 1030, Address: 0x10038dc, Func Offset: 0xc
	// Line 1031, Address: 0x10038ec, Func Offset: 0x1c
	// Line 1034, Address: 0x100391c, Func Offset: 0x4c
	// Line 1035, Address: 0x100392c, Func Offset: 0x5c
	// Line 1036, Address: 0x1003944, Func Offset: 0x74
	// Line 1037, Address: 0x1003950, Func Offset: 0x80
	// Line 1039, Address: 0x100395c, Func Offset: 0x8c
	// Line 1040, Address: 0x1003970, Func Offset: 0xa0
	// Line 1042, Address: 0x100397c, Func Offset: 0xac
	// Line 1043, Address: 0x100398c, Func Offset: 0xbc
	// Line 1050, Address: 0x10039dc, Func Offset: 0x10c
	// Line 1053, Address: 0x10039e8, Func Offset: 0x118
	// Line 1054, Address: 0x10039ec, Func Offset: 0x11c
	// Func End, Address: 0x10039f8, Func Offset: 0x128
}

// 
// Start address: 0x1003a00
short st_metalDataChk(short iBlkNo, _anon1* pActwk)
{
	// Line 1070, Address: 0x1003a00, Func Offset: 0
	// Line 1072, Address: 0x1003a0c, Func Offset: 0xc
	// Line 1073, Address: 0x1003a24, Func Offset: 0x24
	// Line 1074, Address: 0x1003a30, Func Offset: 0x30
	// Line 1075, Address: 0x1003a40, Func Offset: 0x40
	// Line 1076, Address: 0x1003a54, Func Offset: 0x54
	// Line 1077, Address: 0x1003a60, Func Offset: 0x60
	// Line 1079, Address: 0x1003a70, Func Offset: 0x70
	// Line 1082, Address: 0x1003acc, Func Offset: 0xcc
	// Line 1083, Address: 0x1003ad4, Func Offset: 0xd4
	// Line 1085, Address: 0x1003adc, Func Offset: 0xdc
	// Line 1086, Address: 0x1003ae4, Func Offset: 0xe4
	// Line 1088, Address: 0x1003aec, Func Offset: 0xec
	// Line 1089, Address: 0x1003af4, Func Offset: 0xf4
	// Line 1091, Address: 0x1003afc, Func Offset: 0xfc
	// Line 1092, Address: 0x1003b04, Func Offset: 0x104
	// Line 1094, Address: 0x1003b0c, Func Offset: 0x10c
	// Line 1095, Address: 0x1003b14, Func Offset: 0x114
	// Line 1097, Address: 0x1003b1c, Func Offset: 0x11c
	// Line 1100, Address: 0x1003b24, Func Offset: 0x124
	// Line 1101, Address: 0x1003b28, Func Offset: 0x128
	// Func End, Address: 0x1003b34, Func Offset: 0x134
}

// 
// Start address: 0x1003b40
unsigned char CCset(int lSrc, int lDst)
{
	// Line 1105, Address: 0x1003b40, Func Offset: 0
	// Line 1106, Address: 0x1003b4c, Func Offset: 0xc
	// Line 1107, Address: 0x1003b5c, Func Offset: 0x1c
	// Line 1108, Address: 0x1003b74, Func Offset: 0x34
	// Line 1109, Address: 0x1003b78, Func Offset: 0x38
	// Func End, Address: 0x1003b84, Func Offset: 0x44
}

// 
// Start address: 0x1003b90
unsigned char CSset(unsigned short wSrc, unsigned short wDst)
{
	unsigned int wk;
	unsigned int lSrc;
	unsigned int lDst;
	// Line 1112, Address: 0x1003b90, Func Offset: 0
	// Line 1115, Address: 0x1003ba8, Func Offset: 0x18
	// Line 1116, Address: 0x1003bb0, Func Offset: 0x20
	// Line 1117, Address: 0x1003bb8, Func Offset: 0x28
	// Line 1118, Address: 0x1003bbc, Func Offset: 0x2c
	// Line 1119, Address: 0x1003bd8, Func Offset: 0x48
	// Line 1120, Address: 0x1003bdc, Func Offset: 0x4c
	// Func End, Address: 0x1003bf4, Func Offset: 0x64
}

// 
// Start address: 0x1003c00
unsigned char bchg(unsigned char bySrc, unsigned char byDst)
{
	// Line 1128, Address: 0x1003c00, Func Offset: 0
	// Line 1129, Address: 0x1003c0c, Func Offset: 0xc
	// Line 1130, Address: 0x1003c24, Func Offset: 0x24
	// Line 1131, Address: 0x1003c40, Func Offset: 0x40
	// Line 1132, Address: 0x1003c44, Func Offset: 0x44
	// Func End, Address: 0x1003c50, Func Offset: 0x50
}

