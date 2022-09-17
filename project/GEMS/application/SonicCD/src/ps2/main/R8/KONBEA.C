typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_2)(_anon1*);
typedef void(*type_4)(_anon1*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef void(*type_3)(_anon1*)[4];
typedef void(*type_5)(_anon1*)[4];
typedef short* type_6[2];
typedef unsigned char* type_7[1];
typedef short type_8[2];
typedef unsigned char type_9[2];
typedef unsigned char type_10[22];
typedef _anon0* type_11[7];
typedef _anon1 type_12[128];
typedef short type_13[5];
typedef unsigned char type_14[14];
typedef char type_15[892];

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

char konbea8tbl[892];
short a_tbl_00[2];
short a_tbl_01[5];
short* a_tbl0[2];
unsigned char pchg_00[14];
unsigned char* pchg[1];
_anon0 pat_00;
_anon0 pat_01;
_anon0 pat_02;
_anon0 pat_03;
_anon0 pat_04;
_anon0 pat_05;
_anon0* pat_konbea[7];
void(*a_act_tbl)(_anon1*)[4];
_anon1 actwk[128];
void(*b_act_tbl)(_anon1*)[4];

void konbea(_anon1* pActwk);
void a_init(_anon1* pActwk);
void a_init_sub(_anon1* pActwk, _anon1* pNewact);
void a_stop(_anon1* pActwk);
void a_stop1(_anon1* pActwk);
void a_move(_anon1* pActwk);
void move_version(_anon1* pActwk);
void b_init(_anon1* pActwk);
void b_init_sub(_anon1* pActwk, _anon1* pNewact);
void b_stop(_anon1* pActwk);
void b_stop1(_anon1* pActwk);
void b_roll(_anon1* pActwk);
void b_move(_anon1* pActwk);

// 
// Start address: 0x101fb90
void konbea(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 608, Address: 0x101fb90, Func Offset: 0
	// Line 611, Address: 0x101fba0, Func Offset: 0x10
	// Line 613, Address: 0x101fbb0, Func Offset: 0x20
	// Line 614, Address: 0x101fbc0, Func Offset: 0x30
	// Line 616, Address: 0x101fbe8, Func Offset: 0x58
	// Line 617, Address: 0x101fbfc, Func Offset: 0x6c
	// Line 620, Address: 0x101fc10, Func Offset: 0x80
	// Line 622, Address: 0x101fc34, Func Offset: 0xa4
	// Line 625, Address: 0x101fc48, Func Offset: 0xb8
	// Line 627, Address: 0x101fc6c, Func Offset: 0xdc
	// Line 632, Address: 0x101fc80, Func Offset: 0xf0
	// Line 633, Address: 0x101fcc4, Func Offset: 0x134
	// Line 635, Address: 0x101fcd0, Func Offset: 0x140
	// Line 636, Address: 0x101fcec, Func Offset: 0x15c
	// Line 640, Address: 0x101fd00, Func Offset: 0x170
	// Line 642, Address: 0x101fd08, Func Offset: 0x178
	// Line 644, Address: 0x101fd14, Func Offset: 0x184
	// Func End, Address: 0x101fd28, Func Offset: 0x198
}

// 
// Start address: 0x101fd30
void a_init(_anon1* pActwk)
{
	short* pTbl;
	short i;
	_anon1* pNewact;
	// Line 650, Address: 0x101fd30, Func Offset: 0
	// Line 654, Address: 0x101fd44, Func Offset: 0x14
	// Line 656, Address: 0x101fd68, Func Offset: 0x38
	// Line 657, Address: 0x101fd7c, Func Offset: 0x4c
	// Line 658, Address: 0x101fd84, Func Offset: 0x54
	// Line 660, Address: 0x101fd94, Func Offset: 0x64
	// Line 662, Address: 0x101fdc4, Func Offset: 0x94
	// Line 663, Address: 0x101fdd8, Func Offset: 0xa8
	// Line 664, Address: 0x101fde4, Func Offset: 0xb4
	// Line 668, Address: 0x101fdec, Func Offset: 0xbc
	// Line 669, Address: 0x101fdfc, Func Offset: 0xcc
	// Line 670, Address: 0x101fe34, Func Offset: 0x104
	// Line 671, Address: 0x101fe44, Func Offset: 0x114
	// Line 672, Address: 0x101fe50, Func Offset: 0x120
	// Line 673, Address: 0x101fe64, Func Offset: 0x134
	// Line 674, Address: 0x101fe9c, Func Offset: 0x16c
	// Line 675, Address: 0x101fed4, Func Offset: 0x1a4
	// Line 676, Address: 0x101fee4, Func Offset: 0x1b4
	// Line 677, Address: 0x101ff00, Func Offset: 0x1d0
	// Func End, Address: 0x101ff18, Func Offset: 0x1e8
}

// 
// Start address: 0x101ff20
void a_init_sub(_anon1* pActwk, _anon1* pNewact)
{
	// Line 683, Address: 0x101ff20, Func Offset: 0
	// Line 684, Address: 0x101ff2c, Func Offset: 0xc
	// Line 685, Address: 0x101ff38, Func Offset: 0x18
	// Line 686, Address: 0x101ff48, Func Offset: 0x28
	// Line 687, Address: 0x101ff54, Func Offset: 0x34
	// Line 688, Address: 0x101ff6c, Func Offset: 0x4c
	// Line 689, Address: 0x101ff78, Func Offset: 0x58
	// Line 690, Address: 0x101ff84, Func Offset: 0x64
	// Line 691, Address: 0x101ff94, Func Offset: 0x74
	// Line 692, Address: 0x101ffa4, Func Offset: 0x84
	// Line 693, Address: 0x101ffb4, Func Offset: 0x94
	// Func End, Address: 0x101ffc0, Func Offset: 0xa0
}

// 
// Start address: 0x101ffc0
void a_stop(_anon1* pActwk)
{
	// Line 699, Address: 0x101ffc0, Func Offset: 0
	// Line 700, Address: 0x101ffcc, Func Offset: 0xc
	// Line 701, Address: 0x101ffd8, Func Offset: 0x18
	// Line 702, Address: 0x101ffe4, Func Offset: 0x24
	// Line 703, Address: 0x101fff4, Func Offset: 0x34
	// Line 704, Address: 0x1020000, Func Offset: 0x40
	// Func End, Address: 0x1020010, Func Offset: 0x50
}

// 
// Start address: 0x1020010
void a_stop1(_anon1* pActwk)
{
	// Line 710, Address: 0x1020010, Func Offset: 0
	// Line 711, Address: 0x102001c, Func Offset: 0xc
	// Line 712, Address: 0x1020038, Func Offset: 0x28
	// Line 713, Address: 0x1020044, Func Offset: 0x34
	// Line 714, Address: 0x102004c, Func Offset: 0x3c
	// Line 717, Address: 0x1020054, Func Offset: 0x44
	// Line 718, Address: 0x1020074, Func Offset: 0x64
	// Line 719, Address: 0x1020080, Func Offset: 0x70
	// Line 720, Address: 0x102008c, Func Offset: 0x7c
	// Line 722, Address: 0x102009c, Func Offset: 0x8c
	// Line 723, Address: 0x10200ac, Func Offset: 0x9c
	// Line 730, Address: 0x10200c0, Func Offset: 0xb0
	// Func End, Address: 0x10200d0, Func Offset: 0xc0
}

// 
// Start address: 0x10200d0
void a_move(_anon1* pActwk)
{
	// Line 736, Address: 0x10200d0, Func Offset: 0
	// Line 737, Address: 0x10200dc, Func Offset: 0xc
	// Line 739, Address: 0x10200f0, Func Offset: 0x20
	// Line 740, Address: 0x1020100, Func Offset: 0x30
	// Line 744, Address: 0x102010c, Func Offset: 0x3c
	// Func End, Address: 0x102011c, Func Offset: 0x4c
}

// 
// Start address: 0x1020120
void move_version(_anon1* pActwk)
{
	_anon1* pMainwk;
	// Line 791, Address: 0x1020120, Func Offset: 0
	// Line 794, Address: 0x1020130, Func Offset: 0x10
	// Line 795, Address: 0x1020140, Func Offset: 0x20
	// Line 797, Address: 0x1020168, Func Offset: 0x48
	// Line 798, Address: 0x102017c, Func Offset: 0x5c
	// Line 801, Address: 0x1020190, Func Offset: 0x70
	// Line 803, Address: 0x10201b4, Func Offset: 0x94
	// Line 806, Address: 0x10201c8, Func Offset: 0xa8
	// Line 808, Address: 0x10201ec, Func Offset: 0xcc
	// Line 813, Address: 0x1020200, Func Offset: 0xe0
	// Line 814, Address: 0x1020244, Func Offset: 0x124
	// Line 816, Address: 0x1020250, Func Offset: 0x130
	// Line 817, Address: 0x102026c, Func Offset: 0x14c
	// Line 821, Address: 0x1020280, Func Offset: 0x160
	// Func End, Address: 0x1020294, Func Offset: 0x174
}

// 
// Start address: 0x10202a0
void b_init(_anon1* pActwk)
{
	_anon1* pNewact;
	int lp;
	short wk1;
	short wk2;
	// Line 827, Address: 0x10202a0, Func Offset: 0
	// Line 832, Address: 0x10202b8, Func Offset: 0x18
	// Line 833, Address: 0x10202c0, Func Offset: 0x20
	// Line 835, Address: 0x10202d0, Func Offset: 0x30
	// Line 836, Address: 0x10202ec, Func Offset: 0x4c
	// Line 838, Address: 0x10202f8, Func Offset: 0x58
	// Line 839, Address: 0x102030c, Func Offset: 0x6c
	// Line 840, Address: 0x1020318, Func Offset: 0x78
	// Line 844, Address: 0x1020320, Func Offset: 0x80
	// Line 845, Address: 0x1020330, Func Offset: 0x90
	// Line 846, Address: 0x1020368, Func Offset: 0xc8
	// Line 847, Address: 0x1020378, Func Offset: 0xd8
	// Line 848, Address: 0x1020384, Func Offset: 0xe4
	// Line 849, Address: 0x1020394, Func Offset: 0xf4
	// Line 850, Address: 0x10203a4, Func Offset: 0x104
	// Line 851, Address: 0x10203ac, Func Offset: 0x10c
	// Line 852, Address: 0x10203b8, Func Offset: 0x118
	// Line 853, Address: 0x10203c8, Func Offset: 0x128
	// Line 854, Address: 0x10203d4, Func Offset: 0x134
	// Func End, Address: 0x10203f0, Func Offset: 0x150
}

// 
// Start address: 0x10203f0
void b_init_sub(_anon1* pActwk, _anon1* pNewact)
{
	// Line 860, Address: 0x10203f0, Func Offset: 0
	// Line 861, Address: 0x10203fc, Func Offset: 0xc
	// Line 862, Address: 0x1020408, Func Offset: 0x18
	// Line 863, Address: 0x1020418, Func Offset: 0x28
	// Line 864, Address: 0x1020424, Func Offset: 0x34
	// Line 865, Address: 0x102043c, Func Offset: 0x4c
	// Line 866, Address: 0x1020448, Func Offset: 0x58
	// Line 867, Address: 0x1020454, Func Offset: 0x64
	// Line 868, Address: 0x1020464, Func Offset: 0x74
	// Line 869, Address: 0x1020474, Func Offset: 0x84
	// Line 870, Address: 0x1020484, Func Offset: 0x94
	// Func End, Address: 0x1020490, Func Offset: 0xa0
}

// 
// Start address: 0x1020490
void b_stop(_anon1* pActwk)
{
	// Line 876, Address: 0x1020490, Func Offset: 0
	// Line 877, Address: 0x102049c, Func Offset: 0xc
	// Line 878, Address: 0x10204a8, Func Offset: 0x18
	// Line 879, Address: 0x10204b8, Func Offset: 0x28
	// Line 880, Address: 0x10204c4, Func Offset: 0x34
	// Func End, Address: 0x10204d4, Func Offset: 0x44
}

// 
// Start address: 0x10204e0
void b_stop1(_anon1* pActwk)
{
	// Line 887, Address: 0x10204e0, Func Offset: 0
	// Line 888, Address: 0x10204ec, Func Offset: 0xc
	// Line 890, Address: 0x10204f8, Func Offset: 0x18
	// Line 891, Address: 0x1020514, Func Offset: 0x34
	// Line 892, Address: 0x1020520, Func Offset: 0x40
	// Line 893, Address: 0x1020528, Func Offset: 0x48
	// Line 896, Address: 0x1020530, Func Offset: 0x50
	// Line 897, Address: 0x102054c, Func Offset: 0x6c
	// Line 898, Address: 0x102055c, Func Offset: 0x7c
	// Line 899, Address: 0x1020568, Func Offset: 0x88
	// Line 901, Address: 0x1020574, Func Offset: 0x94
	// Line 902, Address: 0x1020584, Func Offset: 0xa4
	// Line 909, Address: 0x1020598, Func Offset: 0xb8
	// Func End, Address: 0x10205a8, Func Offset: 0xc8
}

// 
// Start address: 0x10205b0
void b_roll(_anon1* pActwk)
{
	_anon5 patnowk;
	// Line 915, Address: 0x10205b0, Func Offset: 0
	// Line 918, Address: 0x10205bc, Func Offset: 0xc
	// Line 920, Address: 0x10205c8, Func Offset: 0x18
	// Line 921, Address: 0x10205f0, Func Offset: 0x40
	// Line 922, Address: 0x10205f8, Func Offset: 0x48
	// Line 923, Address: 0x1020604, Func Offset: 0x54
	// Line 925, Address: 0x102060c, Func Offset: 0x5c
	// Line 926, Address: 0x1020618, Func Offset: 0x68
	// Line 928, Address: 0x1020624, Func Offset: 0x74
	// Line 929, Address: 0x102064c, Func Offset: 0x9c
	// Line 933, Address: 0x1020650, Func Offset: 0xa0
	// Line 934, Address: 0x102065c, Func Offset: 0xac
	// Line 936, Address: 0x1020668, Func Offset: 0xb8
	// Func End, Address: 0x1020678, Func Offset: 0xc8
}

// 
// Start address: 0x1020680
void b_move(_anon1* pActwk)
{
	short xsav;
	short idx;
	short xwk;
	short ywk;
	char* pKonbeaTbl;
	// Line 942, Address: 0x1020680, Func Offset: 0
	// Line 946, Address: 0x102069c, Func Offset: 0x1c
	// Line 947, Address: 0x10206ac, Func Offset: 0x2c
	// Line 948, Address: 0x10206bc, Func Offset: 0x3c
	// Line 950, Address: 0x10206d4, Func Offset: 0x54
	// Line 951, Address: 0x1020714, Func Offset: 0x94
	// Line 952, Address: 0x1020754, Func Offset: 0xd4
	// Line 953, Address: 0x102075c, Func Offset: 0xdc
	// Line 954, Address: 0x1020764, Func Offset: 0xe4
	// Line 956, Address: 0x102078c, Func Offset: 0x10c
	// Line 957, Address: 0x10207b8, Func Offset: 0x138
	// Line 961, Address: 0x10207c4, Func Offset: 0x144
	// Func End, Address: 0x10207e4, Func Offset: 0x164
}

