typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_9)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef unsigned char type_2[4];
typedef unsigned char type_3[66];
typedef unsigned char type_4[18];
typedef unsigned char type_5[130];
typedef unsigned char type_6[18];
typedef unsigned char type_7[2];
typedef unsigned char type_8[22];
typedef void(*type_10)(_anon1*)[2];
typedef unsigned char* type_11[9];
typedef unsigned char type_12[66];
typedef unsigned char type_13[66];
typedef _anon1 type_14[128];
typedef unsigned char type_15[130];
typedef unsigned char type_16[130];
typedef _anon0* type_17[14];

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

unsigned char pchg_00[18];
unsigned char pchg_01[130];
unsigned char pchg_02[130];
unsigned char pchg_03[130];
unsigned char pchg_04[18];
unsigned char pchg_05[66];
unsigned char pchg_06[66];
unsigned char pchg_07[66];
unsigned char pchg_08[4];
unsigned char* pchg[9];
_anon0 pat00;
_anon0 pat01;
_anon0 pat02;
_anon0 pat03;
_anon0 pat04;
_anon0 pat05;
_anon0 pat06;
_anon0 pat07;
_anon0 pat08;
_anon0 pat09;
_anon0 pat0a;
_anon0 pat0b;
_anon0 pat0c;
_anon0 pat0d;
_anon0* pat_kabasira[14];
void(*kabasira_act_tbl)(_anon1*)[2];
_anon1 actwk[128];

void kabasira(_anon1* pActwk);
void act_init(_anon1* pActwk);
void act_init_sub(_anon1* pActwk);
void act_move(_anon1* pActwk);
unsigned int kabasira_area(_anon1* pActwk, _anon1* pPlayerwk, short* pX, short* pY);

// 
// Start address: 0x102a210
void kabasira(_anon1* pActwk)
{
	_anon1* pMainact;
	short xsv;
	short ysv;
	short len;
	// Line 496, Address: 0x102a210, Func Offset: 0
	// Line 499, Address: 0x102a22c, Func Offset: 0x1c
	// Line 500, Address: 0x102a244, Func Offset: 0x34
	// Line 502, Address: 0x102a260, Func Offset: 0x50
	// Line 503, Address: 0x102a288, Func Offset: 0x78
	// Line 505, Address: 0x102a29c, Func Offset: 0x8c
	// Line 506, Address: 0x102a2a8, Func Offset: 0x98
	// Line 512, Address: 0x102a2b0, Func Offset: 0xa0
	// Line 513, Address: 0x102a2cc, Func Offset: 0xbc
	// Line 515, Address: 0x102a2e8, Func Offset: 0xd8
	// Line 516, Address: 0x102a2f8, Func Offset: 0xe8
	// Line 517, Address: 0x102a308, Func Offset: 0xf8
	// Line 518, Address: 0x102a318, Func Offset: 0x108
	// Line 519, Address: 0x102a324, Func Offset: 0x114
	// Line 520, Address: 0x102a32c, Func Offset: 0x11c
	// Line 521, Address: 0x102a334, Func Offset: 0x124
	// Line 522, Address: 0x102a340, Func Offset: 0x130
	// Line 523, Address: 0x102a34c, Func Offset: 0x13c
	// Line 524, Address: 0x102a358, Func Offset: 0x148
	// Line 526, Address: 0x102a360, Func Offset: 0x150
	// Line 527, Address: 0x102a3ac, Func Offset: 0x19c
	// Line 531, Address: 0x102a3b8, Func Offset: 0x1a8
	// Line 533, Address: 0x102a3cc, Func Offset: 0x1bc
	// Line 534, Address: 0x102a3d8, Func Offset: 0x1c8
	// Line 535, Address: 0x102a3e0, Func Offset: 0x1d0
	// Line 536, Address: 0x102a3f4, Func Offset: 0x1e4
	// Line 537, Address: 0x102a400, Func Offset: 0x1f0
	// Line 541, Address: 0x102a40c, Func Offset: 0x1fc
	// Line 545, Address: 0x102a414, Func Offset: 0x204
	// Line 551, Address: 0x102a428, Func Offset: 0x218
	// Line 552, Address: 0x102a46c, Func Offset: 0x25c
	// Line 553, Address: 0x102a480, Func Offset: 0x270
	// Line 554, Address: 0x102a48c, Func Offset: 0x27c
	// Line 555, Address: 0x102a498, Func Offset: 0x288
	// Func End, Address: 0x102a4b8, Func Offset: 0x2a8
}

// 
// Start address: 0x102a4c0
void act_init(_anon1* pActwk)
{
	short anglewk1;
	short anglewk2;
	short xangle;
	short yangle;
	unsigned char mstnowk;
	int i;
	_anon1* pNewact;
	// Line 561, Address: 0x102a4c0, Func Offset: 0
	// Line 567, Address: 0x102a4e4, Func Offset: 0x24
	// Line 568, Address: 0x102a4f0, Func Offset: 0x30
	// Line 569, Address: 0x102a500, Func Offset: 0x40
	// Line 570, Address: 0x102a510, Func Offset: 0x50
	// Line 571, Address: 0x102a51c, Func Offset: 0x5c
	// Line 573, Address: 0x102a528, Func Offset: 0x68
	// Line 574, Address: 0x102a538, Func Offset: 0x78
	// Line 575, Address: 0x102a544, Func Offset: 0x84
	// Line 576, Address: 0x102a550, Func Offset: 0x90
	// Line 577, Address: 0x102a55c, Func Offset: 0x9c
	// Line 578, Address: 0x102a568, Func Offset: 0xa8
	// Line 579, Address: 0x102a574, Func Offset: 0xb4
	// Line 580, Address: 0x102a57c, Func Offset: 0xbc
	// Line 581, Address: 0x102a588, Func Offset: 0xc8
	// Line 582, Address: 0x102a594, Func Offset: 0xd4
	// Line 583, Address: 0x102a59c, Func Offset: 0xdc
	// Line 584, Address: 0x102a5a8, Func Offset: 0xe8
	// Line 587, Address: 0x102a5b4, Func Offset: 0xf4
	// Line 589, Address: 0x102a5c0, Func Offset: 0x100
	// Line 590, Address: 0x102a5c4, Func Offset: 0x104
	// Line 591, Address: 0x102a5c8, Func Offset: 0x108
	// Line 593, Address: 0x102a5cc, Func Offset: 0x10c
	// Line 595, Address: 0x102a5d8, Func Offset: 0x118
	// Line 597, Address: 0x102a5f0, Func Offset: 0x130
	// Line 598, Address: 0x102a5fc, Func Offset: 0x13c
	// Line 601, Address: 0x102a604, Func Offset: 0x144
	// Line 602, Address: 0x102a63c, Func Offset: 0x17c
	// Line 603, Address: 0x102a644, Func Offset: 0x184
	// Line 604, Address: 0x102a670, Func Offset: 0x1b0
	// Line 605, Address: 0x102a67c, Func Offset: 0x1bc
	// Line 606, Address: 0x102a688, Func Offset: 0x1c8
	// Line 607, Address: 0x102a690, Func Offset: 0x1d0
	// Line 608, Address: 0x102a698, Func Offset: 0x1d8
	// Line 609, Address: 0x102a6a4, Func Offset: 0x1e4
	// Line 610, Address: 0x102a6b4, Func Offset: 0x1f4
	// Line 611, Address: 0x102a6c4, Func Offset: 0x204
	// Line 612, Address: 0x102a6d4, Func Offset: 0x214
	// Line 614, Address: 0x102a6ec, Func Offset: 0x22c
	// Line 616, Address: 0x102a704, Func Offset: 0x244
	// Line 618, Address: 0x102a714, Func Offset: 0x254
	// Line 620, Address: 0x102a724, Func Offset: 0x264
	// Line 621, Address: 0x102a730, Func Offset: 0x270
	// Line 622, Address: 0x102a740, Func Offset: 0x280
	// Func End, Address: 0x102a768, Func Offset: 0x2a8
}

// 
// Start address: 0x102a770
void act_init_sub(_anon1* pActwk)
{
	// Line 628, Address: 0x102a770, Func Offset: 0
	// Line 629, Address: 0x102a778, Func Offset: 0x8
	// Line 630, Address: 0x102a784, Func Offset: 0x14
	// Line 631, Address: 0x102a794, Func Offset: 0x24
	// Line 632, Address: 0x102a7a0, Func Offset: 0x30
	// Line 633, Address: 0x102a7ac, Func Offset: 0x3c
	// Line 634, Address: 0x102a7b8, Func Offset: 0x48
	// Line 635, Address: 0x102a7c4, Func Offset: 0x54
	// Line 636, Address: 0x102a7d0, Func Offset: 0x60
	// Line 637, Address: 0x102a7e0, Func Offset: 0x70
	// Func End, Address: 0x102a7ec, Func Offset: 0x7c
}

// 
// Start address: 0x102a7f0
void act_move(_anon1* pActwk)
{
	_anon1* pTamaact;
	short xlen;
	short ylen;
	short anglewk;
	_anon2 sinwk;
	_anon2 coswk;
	// Line 643, Address: 0x102a7f0, Func Offset: 0
	// Line 648, Address: 0x102a800, Func Offset: 0x10
	// Line 650, Address: 0x102a808, Func Offset: 0x18
	// Line 651, Address: 0x102a830, Func Offset: 0x40
	// Line 652, Address: 0x102a840, Func Offset: 0x50
	// Line 653, Address: 0x102a850, Func Offset: 0x60
	// Line 655, Address: 0x102a858, Func Offset: 0x68
	// Line 657, Address: 0x102a87c, Func Offset: 0x8c
	// Line 658, Address: 0x102a888, Func Offset: 0x98
	// Line 659, Address: 0x102a89c, Func Offset: 0xac
	// Line 660, Address: 0x102a8a8, Func Offset: 0xb8
	// Line 661, Address: 0x102a8b4, Func Offset: 0xc4
	// Line 662, Address: 0x102a8c0, Func Offset: 0xd0
	// Line 663, Address: 0x102a8d0, Func Offset: 0xe0
	// Line 664, Address: 0x102a8e0, Func Offset: 0xf0
	// Line 665, Address: 0x102a8f0, Func Offset: 0x100
	// Line 666, Address: 0x102a8fc, Func Offset: 0x10c
	// Line 667, Address: 0x102a920, Func Offset: 0x130
	// Line 668, Address: 0x102a944, Func Offset: 0x154
	// Line 669, Address: 0x102a968, Func Offset: 0x178
	// Line 670, Address: 0x102a974, Func Offset: 0x184
	// Line 671, Address: 0x102a980, Func Offset: 0x190
	// Line 672, Address: 0x102a990, Func Offset: 0x1a0
	// Line 674, Address: 0x102a9a0, Func Offset: 0x1b0
	// Line 675, Address: 0x102a9ac, Func Offset: 0x1bc
	// Line 676, Address: 0x102a9bc, Func Offset: 0x1cc
	// Line 680, Address: 0x102a9cc, Func Offset: 0x1dc
	// Line 681, Address: 0x102a9e4, Func Offset: 0x1f4
	// Line 691, Address: 0x102a9f0, Func Offset: 0x200
	// Line 693, Address: 0x102aa24, Func Offset: 0x234
	// Line 694, Address: 0x102aa2c, Func Offset: 0x23c
	// Line 695, Address: 0x102aa48, Func Offset: 0x258
	// Line 696, Address: 0x102aa50, Func Offset: 0x260
	// Line 697, Address: 0x102aa64, Func Offset: 0x274
	// Line 698, Address: 0x102aa88, Func Offset: 0x298
	// Line 699, Address: 0x102aa94, Func Offset: 0x2a4
	// Line 701, Address: 0x102aab0, Func Offset: 0x2c0
	// Line 703, Address: 0x102aae4, Func Offset: 0x2f4
	// Line 704, Address: 0x102aaec, Func Offset: 0x2fc
	// Line 705, Address: 0x102ab08, Func Offset: 0x318
	// Line 706, Address: 0x102ab10, Func Offset: 0x320
	// Line 707, Address: 0x102ab24, Func Offset: 0x334
	// Line 708, Address: 0x102ab48, Func Offset: 0x358
	// Line 709, Address: 0x102ab54, Func Offset: 0x364
	// Line 710, Address: 0x102ab70, Func Offset: 0x380
	// Func End, Address: 0x102ab84, Func Offset: 0x394
}

// 
// Start address: 0x102ab90
unsigned int kabasira_area(_anon1* pActwk, _anon1* pPlayerwk, short* pX, short* pY)
{
	// Line 728, Address: 0x102ab90, Func Offset: 0
	// Line 729, Address: 0x102aba4, Func Offset: 0x14
	// Line 730, Address: 0x102abd8, Func Offset: 0x48
	// Line 731, Address: 0x102ac00, Func Offset: 0x70
	// Line 734, Address: 0x102ac0c, Func Offset: 0x7c
	// Line 735, Address: 0x102ac40, Func Offset: 0xb0
	// Line 736, Address: 0x102ac68, Func Offset: 0xd8
	// Line 739, Address: 0x102ac74, Func Offset: 0xe4
	// Line 740, Address: 0x102ac78, Func Offset: 0xe8
	// Func End, Address: 0x102ac84, Func Offset: 0xf4
}

