typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;

typedef void(*type_6)(_anon2*);
typedef void(*type_13)(_anon2*);
typedef void(*type_22)(_anon2*);
typedef void(*type_45)(_anon2*);
typedef void(*type_46)(_anon2*);

typedef unsigned char* type_0[2];
typedef unsigned char type_1[5];
typedef unsigned char type_2[4];
typedef _anon0 type_3[20];
typedef _anon1* type_4[4];
typedef _anon0 type_5[0];
typedef void(*type_7)(_anon2*)[2];
typedef unsigned char type_8[7];
typedef unsigned char type_9[4];
typedef unsigned char* type_10[2];
typedef unsigned char type_11[25];
typedef unsigned char type_12[3];
typedef _anon1* type_14[3];
typedef void(*type_15)(_anon2*)[6];
typedef _anon1* type_16[5];
typedef unsigned char* type_17[1];
typedef unsigned char* type_18[2];
typedef unsigned char type_19[3];
typedef unsigned char type_20[18];
typedef _anon1* type_21[5];
typedef void(*type_23)(_anon2*)[3];
typedef unsigned char type_24[2];
typedef unsigned char* type_25[2];
typedef _anon1* type_26[3];
typedef unsigned char type_27[22];
typedef unsigned char type_28[5];
typedef _anon1* type_29[7];
typedef unsigned char type_30[4];
typedef unsigned char* type_31[2];
typedef unsigned char type_32[7];
typedef unsigned char* type_33[2];
typedef _anon1* type_34[4];
typedef unsigned char* type_35[2];
typedef unsigned char type_36[4];
typedef _anon1* type_37[3];
typedef unsigned char type_38[20];
typedef unsigned char type_39[3];
typedef _anon2 type_40[128];
typedef unsigned char type_41[6];
typedef unsigned char* type_42[2];
typedef unsigned char type_43[3];
typedef unsigned char type_44[4];
typedef void(*type_47)(_anon2*)[5];
typedef void(*type_48)(_anon2*)[5];
typedef _anon1* type_49[7];
typedef _anon1* type_50[3];

struct _anon0
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon0 spra[20];
		_anon0 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon3 xposi;
	_anon3 yposi;
	_anon6 xspeed;
	_anon6 yspeed;
	_anon6 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon6 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon6 direc;
	_anon6 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon4
{
	short l;
	short h;
};

struct _anon5
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon6
{
	short w;
	_anon7 b;
};

struct _anon7
{
	char l;
	char h;
};

unsigned char ari_pchg00[4];
unsigned char ari_pchg01[4];
unsigned char* ari_pchg[2];
_anon1 ari0;
_anon1 ari1;
_anon1 ari2;
_anon1 ari3;
_anon1* ari_pat[4];
unsigned char chou_pchg00[7];
unsigned char chou_pchg01[7];
unsigned char* chou_pchg[2];
_anon1 chou1e;
_anon1 chou2e;
_anon1 chou3e;
_anon1 chou1b;
_anon1 chou2b;
_anon1 chou3b;
_anon1* e_chou_pat[3];
_anon1* b_chou_pat[3];
unsigned char pchg_e_0[4];
unsigned char pchg_e_1[5];
unsigned char* pchg_e[2];
unsigned char pchg_b_0[4];
unsigned char pchg_b_1[5];
unsigned char* pchg_b[2];
_anon1 ka1e;
_anon1 ka2e;
_anon1 ka3e;
_anon1 ka4e;
_anon1 ka5e;
_anon1* e_ka_pat[5];
_anon1 ka1b;
_anon1 ka2b;
_anon1 ka3b;
_anon1 ka4b;
_anon1 ka5b;
_anon1* b_ka_pat[5];
unsigned char e_kamem_pchg00[4];
unsigned char e_kamem_pchg01[3];
unsigned char* e_kamem_pchg[2];
unsigned char b_kamem_pchg00[18];
unsigned char b_kamem_pchg01[3];
unsigned char* b_kamem_pchg[2];
_anon1 kamem_pat00e;
_anon1 kamem_pat00b;
_anon1 kamem_pat01;
_anon1 kamem_pat02;
_anon1* e_kamem_pat[3];
_anon1* b_kamem_pat[3];
unsigned char tama_pchg00[6];
unsigned char* tama_pchg[1];
_anon1 tama_pat00;
_anon1 tama_pat01;
_anon1 tama_pat02;
_anon1 tama_pat03;
_anon1* tama_pat[4];
unsigned char e_tagame_pchg00[3];
unsigned char e_tagame_pchg01[20];
unsigned char* e_tagame_pchg[2];
unsigned char b_tagame_pchg00[3];
unsigned char b_tagame_pchg01[25];
unsigned char* b_tagame_pchg[2];
_anon1 tagame_pat00;
_anon1 tagame_pat01;
_anon1 tagame_pat02;
_anon1 tagame_pat03e;
_anon1 tagame_pat04e;
_anon1 tagame_pat05e;
_anon1 tagame_pat03b;
_anon1 tagame_pat04b;
_anon1 tagame_pat05b;
_anon1 tagame_pat06;
_anon1* e_tagame_pat[7];
_anon1* b_tagame_pat[7];
_anon2 actwk[128];
_anon6 editmode;

void ene_ari(_anon2* pActwk);
void ari_init(_anon2* pActwk);
void ari_fall(_anon2* pActwk);
void ari_move(_anon2* pActwk);
void ene_chou(_anon2* pActwk);
void chou_init(_anon2* pActwk);
void chou_move(_anon2* pActwk);
void ene_ka(_anon2* pActwk);
void ka_init(_anon2* pActwk);
void ka_move(_anon2* pActwk);
void ka_turn(_anon2* pActwk);
void ka_down(_anon2* pActwk);
void ka_stop(_anon2* pActwk);
void ene_kamemusi(_anon2* pActwk);
void kamemusi_init(_anon2* pActwk);
void kamemusi_fall(_anon2* pActwk);
void kamemusi_move(_anon2* pActwk);
short area(_anon2* pActwk);
void kamemusi_stop(_anon2* pActwk);
void kamemusi_stop1(_anon2* pActwk);
void kamemusi_tama(_anon2* pActwk);
void kamemusi_tama_init(_anon2* pActwk, _anon2* pTamawk);
void tama(_anon2* pActwk);
void tama_init(_anon2* pActwk);
void tama_move(_anon2* pActwk);
void ene_tagame_a(_anon2* pActwk);
void tagame_init(_anon2* pActwk);
void tagame_wait(_anon2* pActwk);
void tagame_wait1(_anon2* pActwk);
void tagame_jump(_anon2* pActwk);
void tagame_jump1(_anon2* pActwk);
void ene_tama();

// 
// Start address: 0x1004c00
void ene_ari(_anon2* pActwk)
{
	void(*tbl)(_anon2*)[3];
	// Line 516, Address: 0x1004c00, Func Offset: 0
	// Line 517, Address: 0x1004c0c, Func Offset: 0xc
	// Line 524, Address: 0x1004c30, Func Offset: 0x30
	// Line 525, Address: 0x1004c44, Func Offset: 0x44
	// Line 526, Address: 0x1004c80, Func Offset: 0x80
	// Line 527, Address: 0x1004c8c, Func Offset: 0x8c
	// Line 528, Address: 0x1004ca0, Func Offset: 0xa0
	// Func End, Address: 0x1004cb0, Func Offset: 0xb0
}

// 
// Start address: 0x1004cb0
void ari_init(_anon2* pActwk)
{
	short c;
	// Line 533, Address: 0x1004cb0, Func Offset: 0
	// Line 536, Address: 0x1004cc0, Func Offset: 0x10
	// Line 537, Address: 0x1004cd0, Func Offset: 0x20
	// Line 538, Address: 0x1004cdc, Func Offset: 0x2c
	// Line 539, Address: 0x1004cec, Func Offset: 0x3c
	// Line 540, Address: 0x1004cf8, Func Offset: 0x48
	// Line 541, Address: 0x1004d04, Func Offset: 0x54
	// Line 542, Address: 0x1004d10, Func Offset: 0x60
	// Line 543, Address: 0x1004d1c, Func Offset: 0x6c
	// Line 544, Address: 0x1004d2c, Func Offset: 0x7c
	// Line 546, Address: 0x1004d3c, Func Offset: 0x8c
	// Line 548, Address: 0x1004d54, Func Offset: 0xa4
	// Line 549, Address: 0x1004d64, Func Offset: 0xb4
	// Line 550, Address: 0x1004d6c, Func Offset: 0xbc
	// Line 553, Address: 0x1004d74, Func Offset: 0xc4
	// Line 554, Address: 0x1004d84, Func Offset: 0xd4
	// Line 558, Address: 0x1004d90, Func Offset: 0xe0
	// Line 559, Address: 0x1004da4, Func Offset: 0xf4
	// Line 560, Address: 0x1004db8, Func Offset: 0x108
	// Line 562, Address: 0x1004dc8, Func Offset: 0x118
	// Line 564, Address: 0x1004dd8, Func Offset: 0x128
	// Func End, Address: 0x1004dec, Func Offset: 0x13c
}

// 
// Start address: 0x1004df0
void ari_fall(_anon2* pActwk)
{
	short c;
	// Line 569, Address: 0x1004df0, Func Offset: 0
	// Line 572, Address: 0x1004e00, Func Offset: 0x10
	// Line 573, Address: 0x1004e14, Func Offset: 0x24
	// Line 574, Address: 0x1004e28, Func Offset: 0x38
	// Line 576, Address: 0x1004e38, Func Offset: 0x48
	// Line 578, Address: 0x1004e48, Func Offset: 0x58
	// Func End, Address: 0x1004e5c, Func Offset: 0x6c
}

// 
// Start address: 0x1004e60
void ari_move(_anon2* pActwk)
{
	short xpos;
	short xpos_m;
	short c;
	int spd_x;
	// Line 583, Address: 0x1004e60, Func Offset: 0
	// Line 591, Address: 0x1004e7c, Func Offset: 0x1c
	// Line 592, Address: 0x1004e88, Func Offset: 0x28
	// Line 593, Address: 0x1004e9c, Func Offset: 0x3c
	// Line 594, Address: 0x1004eac, Func Offset: 0x4c
	// Line 595, Address: 0x1004ebc, Func Offset: 0x5c
	// Line 596, Address: 0x1004ee0, Func Offset: 0x80
	// Line 597, Address: 0x1004f0c, Func Offset: 0xac
	// Line 599, Address: 0x1004f20, Func Offset: 0xc0
	// Line 600, Address: 0x1004f34, Func Offset: 0xd4
	// Line 602, Address: 0x1004f48, Func Offset: 0xe8
	// Line 604, Address: 0x1004f5c, Func Offset: 0xfc
	// Line 605, Address: 0x1004f88, Func Offset: 0x128
	// Line 606, Address: 0x1004f9c, Func Offset: 0x13c
	// Line 610, Address: 0x1004fa4, Func Offset: 0x144
	// Line 611, Address: 0x1004fb0, Func Offset: 0x150
	// Line 612, Address: 0x1004fc0, Func Offset: 0x160
	// Line 613, Address: 0x1004fdc, Func Offset: 0x17c
	// Line 614, Address: 0x1004ff8, Func Offset: 0x198
	// Line 615, Address: 0x1005000, Func Offset: 0x1a0
	// Func End, Address: 0x1005020, Func Offset: 0x1c0
}

// 
// Start address: 0x1005020
void ene_chou(_anon2* pActwk)
{
	// Line 639, Address: 0x1005020, Func Offset: 0
	// Line 640, Address: 0x100502c, Func Offset: 0xc
	// Line 641, Address: 0x1005040, Func Offset: 0x20
	// Line 642, Address: 0x1005068, Func Offset: 0x48
	// Line 643, Address: 0x1005074, Func Offset: 0x54
	// Func End, Address: 0x1005084, Func Offset: 0x64
}

// 
// Start address: 0x1005090
void chou_init(_anon2* pActwk)
{
	// Line 648, Address: 0x1005090, Func Offset: 0
	// Line 649, Address: 0x100509c, Func Offset: 0xc
	// Line 650, Address: 0x10050ac, Func Offset: 0x1c
	// Line 651, Address: 0x10050bc, Func Offset: 0x2c
	// Line 652, Address: 0x10050c8, Func Offset: 0x38
	// Line 653, Address: 0x10050d4, Func Offset: 0x44
	// Line 654, Address: 0x10050e0, Func Offset: 0x50
	// Line 655, Address: 0x10050ec, Func Offset: 0x5c
	// Line 656, Address: 0x10050f8, Func Offset: 0x68
	// Line 657, Address: 0x1005108, Func Offset: 0x78
	// Line 658, Address: 0x1005118, Func Offset: 0x88
	// Line 659, Address: 0x1005124, Func Offset: 0x94
	// Line 660, Address: 0x1005134, Func Offset: 0xa4
	// Line 662, Address: 0x100514c, Func Offset: 0xbc
	// Line 663, Address: 0x1005158, Func Offset: 0xc8
	// Line 664, Address: 0x1005164, Func Offset: 0xd4
	// Line 665, Address: 0x1005170, Func Offset: 0xe0
	// Line 666, Address: 0x1005178, Func Offset: 0xe8
	// Line 667, Address: 0x1005188, Func Offset: 0xf8
	// Line 670, Address: 0x1005190, Func Offset: 0x100
	// Line 671, Address: 0x100519c, Func Offset: 0x10c
	// Line 672, Address: 0x10051a8, Func Offset: 0x118
	// Line 673, Address: 0x10051b4, Func Offset: 0x124
	// Line 674, Address: 0x10051c0, Func Offset: 0x130
	// Line 676, Address: 0x10051d0, Func Offset: 0x140
	// Func End, Address: 0x10051e0, Func Offset: 0x150
}

// 
// Start address: 0x10051e0
void chou_move(_anon2* pActwk)
{
	short xpos;
	short shift;
	short sSin;
	short sCos;
	_anon3 lSin;
	// Line 681, Address: 0x10051e0, Func Offset: 0
	// Line 687, Address: 0x10051f4, Func Offset: 0x14
	// Line 688, Address: 0x100520c, Func Offset: 0x2c
	// Line 689, Address: 0x100521c, Func Offset: 0x3c
	// Line 690, Address: 0x1005230, Func Offset: 0x50
	// Line 691, Address: 0x100524c, Func Offset: 0x6c
	// Line 693, Address: 0x1005260, Func Offset: 0x80
	// Line 694, Address: 0x1005270, Func Offset: 0x90
	// Line 695, Address: 0x1005288, Func Offset: 0xa8
	// Line 696, Address: 0x10052a4, Func Offset: 0xc4
	// Line 697, Address: 0x10052c0, Func Offset: 0xe0
	// Line 699, Address: 0x10052c8, Func Offset: 0xe8
	// Line 700, Address: 0x10052e0, Func Offset: 0x100
	// Line 701, Address: 0x10052f8, Func Offset: 0x118
	// Line 702, Address: 0x1005300, Func Offset: 0x120
	// Line 703, Address: 0x1005304, Func Offset: 0x124
	// Line 704, Address: 0x1005314, Func Offset: 0x134
	// Line 705, Address: 0x1005354, Func Offset: 0x174
	// Line 706, Address: 0x1005368, Func Offset: 0x188
	// Line 708, Address: 0x1005374, Func Offset: 0x194
	// Line 709, Address: 0x1005388, Func Offset: 0x1a8
	// Line 710, Address: 0x1005394, Func Offset: 0x1b4
	// Line 711, Address: 0x10053a8, Func Offset: 0x1c8
	// Func End, Address: 0x10053c0, Func Offset: 0x1e0
}

// 
// Start address: 0x10053c0
void ene_ka(_anon2* pActwk)
{
	void(*tbl)(_anon2*)[5];
	// Line 744, Address: 0x10053c0, Func Offset: 0
	// Line 745, Address: 0x10053cc, Func Offset: 0xc
	// Line 754, Address: 0x10053f8, Func Offset: 0x38
	// Line 755, Address: 0x100540c, Func Offset: 0x4c
	// Line 756, Address: 0x1005448, Func Offset: 0x88
	// Line 757, Address: 0x1005454, Func Offset: 0x94
	// Line 758, Address: 0x1005468, Func Offset: 0xa8
	// Func End, Address: 0x1005478, Func Offset: 0xb8
}

// 
// Start address: 0x1005480
void ka_init(_anon2* pActwk)
{
	// Line 763, Address: 0x1005480, Func Offset: 0
	// Line 764, Address: 0x100548c, Func Offset: 0xc
	// Line 765, Address: 0x100549c, Func Offset: 0x1c
	// Line 766, Address: 0x10054ac, Func Offset: 0x2c
	// Line 767, Address: 0x10054b8, Func Offset: 0x38
	// Line 768, Address: 0x10054c4, Func Offset: 0x44
	// Line 769, Address: 0x10054d0, Func Offset: 0x50
	// Line 770, Address: 0x10054dc, Func Offset: 0x5c
	// Line 771, Address: 0x10054e8, Func Offset: 0x68
	// Line 772, Address: 0x10054f8, Func Offset: 0x78
	// Line 774, Address: 0x1005508, Func Offset: 0x88
	// Line 776, Address: 0x1005520, Func Offset: 0xa0
	// Line 777, Address: 0x1005530, Func Offset: 0xb0
	// Line 778, Address: 0x1005540, Func Offset: 0xc0
	// Line 779, Address: 0x100554c, Func Offset: 0xcc
	// Line 782, Address: 0x1005554, Func Offset: 0xd4
	// Line 783, Address: 0x1005564, Func Offset: 0xe4
	// Line 784, Address: 0x1005574, Func Offset: 0xf4
	// Line 786, Address: 0x1005580, Func Offset: 0x100
	// Line 787, Address: 0x100558c, Func Offset: 0x10c
	// Func End, Address: 0x100559c, Func Offset: 0x11c
}

// 
// Start address: 0x10055a0
void ka_move(_anon2* pActwk)
{
	_anon2* pPlayerwk;
	short d0;
	// Line 792, Address: 0x10055a0, Func Offset: 0
	// Line 796, Address: 0x10055b4, Func Offset: 0x14
	// Line 798, Address: 0x10055cc, Func Offset: 0x2c
	// Line 799, Address: 0x10055d4, Func Offset: 0x34
	// Line 800, Address: 0x10055e0, Func Offset: 0x40
	// Line 801, Address: 0x10055f4, Func Offset: 0x54
	// Line 802, Address: 0x1005600, Func Offset: 0x60
	// Line 804, Address: 0x1005614, Func Offset: 0x74
	// Line 805, Address: 0x1005620, Func Offset: 0x80
	// Line 806, Address: 0x1005634, Func Offset: 0x94
	// Line 807, Address: 0x1005640, Func Offset: 0xa0
	// Line 809, Address: 0x1005654, Func Offset: 0xb4
	// Line 810, Address: 0x1005664, Func Offset: 0xc4
	// Line 811, Address: 0x1005670, Func Offset: 0xd0
	// Line 817, Address: 0x1005678, Func Offset: 0xd8
	// Line 818, Address: 0x1005690, Func Offset: 0xf0
	// Line 819, Address: 0x10056a0, Func Offset: 0x100
	// Line 820, Address: 0x10056b4, Func Offset: 0x114
	// Line 821, Address: 0x10056d0, Func Offset: 0x130
	// Line 822, Address: 0x10056e4, Func Offset: 0x144
	// Line 823, Address: 0x10056f4, Func Offset: 0x154
	// Line 824, Address: 0x1005710, Func Offset: 0x170
	// Line 825, Address: 0x100572c, Func Offset: 0x18c
	// Line 826, Address: 0x1005734, Func Offset: 0x194
	// Line 827, Address: 0x1005748, Func Offset: 0x1a8
	// Func End, Address: 0x1005760, Func Offset: 0x1c0
}

// 
// Start address: 0x1005760
void ka_turn(_anon2* pActwk)
{
	// Line 832, Address: 0x1005760, Func Offset: 0
	// Line 833, Address: 0x100576c, Func Offset: 0xc
	// Line 835, Address: 0x1005780, Func Offset: 0x20
	// Func End, Address: 0x1005790, Func Offset: 0x30
}

// 
// Start address: 0x1005790
void ka_down(_anon2* pActwk)
{
	short c;
	// Line 840, Address: 0x1005790, Func Offset: 0
	// Line 843, Address: 0x10057a0, Func Offset: 0x10
	// Line 844, Address: 0x10057b0, Func Offset: 0x20
	// Line 845, Address: 0x10057c4, Func Offset: 0x34
	// Line 847, Address: 0x10057d8, Func Offset: 0x48
	// Line 848, Address: 0x10057e4, Func Offset: 0x54
	// Line 849, Address: 0x10057f4, Func Offset: 0x64
	// Line 850, Address: 0x1005804, Func Offset: 0x74
	// Line 852, Address: 0x1005830, Func Offset: 0xa0
	// Func End, Address: 0x1005844, Func Offset: 0xb4
}

// 
// Start address: 0x1005850
void ka_stop(_anon2* pActwk)
{
	// Line 857, Address: 0x1005850, Func Offset: 0
	// Line 858, Address: 0x100585c, Func Offset: 0xc
	// Line 859, Address: 0x100587c, Func Offset: 0x2c
	// Line 860, Address: 0x1005888, Func Offset: 0x38
	// Func End, Address: 0x1005898, Func Offset: 0x48
}

// 
// Start address: 0x10058a0
void ene_kamemusi(_anon2* pActwk)
{
	void(*tbl)(_anon2*)[6];
	// Line 900, Address: 0x10058a0, Func Offset: 0
	// Line 901, Address: 0x10058ac, Func Offset: 0xc
	// Line 911, Address: 0x10058e0, Func Offset: 0x40
	// Line 913, Address: 0x10058fc, Func Offset: 0x5c
	// Line 914, Address: 0x1005908, Func Offset: 0x68
	// Line 917, Address: 0x1005910, Func Offset: 0x70
	// Line 918, Address: 0x1005924, Func Offset: 0x84
	// Line 919, Address: 0x1005960, Func Offset: 0xc0
	// Line 920, Address: 0x100596c, Func Offset: 0xcc
	// Line 922, Address: 0x1005980, Func Offset: 0xe0
	// Func End, Address: 0x1005990, Func Offset: 0xf0
}

// 
// Start address: 0x1005990
void kamemusi_init(_anon2* pActwk)
{
	// Line 927, Address: 0x1005990, Func Offset: 0
	// Line 928, Address: 0x100599c, Func Offset: 0xc
	// Line 929, Address: 0x10059ac, Func Offset: 0x1c
	// Line 930, Address: 0x10059bc, Func Offset: 0x2c
	// Line 931, Address: 0x10059c8, Func Offset: 0x38
	// Line 932, Address: 0x10059d4, Func Offset: 0x44
	// Line 933, Address: 0x10059e0, Func Offset: 0x50
	// Line 934, Address: 0x10059ec, Func Offset: 0x5c
	// Line 935, Address: 0x10059f8, Func Offset: 0x68
	// Line 936, Address: 0x1005a08, Func Offset: 0x78
	// Line 938, Address: 0x1005a18, Func Offset: 0x88
	// Line 940, Address: 0x1005a30, Func Offset: 0xa0
	// Line 941, Address: 0x1005a40, Func Offset: 0xb0
	// Line 942, Address: 0x1005a50, Func Offset: 0xc0
	// Line 943, Address: 0x1005a60, Func Offset: 0xd0
	// Line 946, Address: 0x1005a68, Func Offset: 0xd8
	// Line 947, Address: 0x1005a78, Func Offset: 0xe8
	// Line 948, Address: 0x1005a88, Func Offset: 0xf8
	// Line 950, Address: 0x1005a94, Func Offset: 0x104
	// Line 951, Address: 0x1005aa0, Func Offset: 0x110
	// Func End, Address: 0x1005ab0, Func Offset: 0x120
}

// 
// Start address: 0x1005ab0
void kamemusi_fall(_anon2* pActwk)
{
	short d1;
	// Line 956, Address: 0x1005ab0, Func Offset: 0
	// Line 959, Address: 0x1005ac0, Func Offset: 0x10
	// Line 960, Address: 0x1005ad4, Func Offset: 0x24
	// Line 961, Address: 0x1005ae8, Func Offset: 0x38
	// Line 962, Address: 0x1005b08, Func Offset: 0x58
	// Func End, Address: 0x1005b1c, Func Offset: 0x6c
}

// 
// Start address: 0x1005b20
void kamemusi_move(_anon2* pActwk)
{
	short d0;
	short d1;
	// Line 967, Address: 0x1005b20, Func Offset: 0
	// Line 972, Address: 0x1005b34, Func Offset: 0x14
	// Line 974, Address: 0x1005b4c, Func Offset: 0x2c
	// Line 976, Address: 0x1005b64, Func Offset: 0x44
	// Line 978, Address: 0x1005b74, Func Offset: 0x54
	// Line 979, Address: 0x1005b84, Func Offset: 0x64
	// Line 982, Address: 0x1005b8c, Func Offset: 0x6c
	// Line 984, Address: 0x1005ba0, Func Offset: 0x80
	// Line 985, Address: 0x1005bb0, Func Offset: 0x90
	// Line 990, Address: 0x1005bb8, Func Offset: 0x98
	// Line 991, Address: 0x1005bd0, Func Offset: 0xb0
	// Line 992, Address: 0x1005be0, Func Offset: 0xc0
	// Line 993, Address: 0x1005bf4, Func Offset: 0xd4
	// Line 994, Address: 0x1005c10, Func Offset: 0xf0
	// Line 996, Address: 0x1005c24, Func Offset: 0x104
	// Line 997, Address: 0x1005c38, Func Offset: 0x118
	// Line 999, Address: 0x1005c60, Func Offset: 0x140
	// Line 1000, Address: 0x1005c70, Func Offset: 0x150
	// Line 1001, Address: 0x1005c84, Func Offset: 0x164
	// Line 1004, Address: 0x1005c8c, Func Offset: 0x16c
	// Line 1005, Address: 0x1005c9c, Func Offset: 0x17c
	// Line 1006, Address: 0x1005cac, Func Offset: 0x18c
	// Line 1007, Address: 0x1005cbc, Func Offset: 0x19c
	// Line 1008, Address: 0x1005cc4, Func Offset: 0x1a4
	// Func End, Address: 0x1005cdc, Func Offset: 0x1bc
}

// 
// Start address: 0x1005ce0
short area(_anon2* pActwk)
{
	_anon2* pPlayerwk;
	short d0;
	short d1;
	short carry_flag;
	// Line 1010, Address: 0x1005ce0, Func Offset: 0
	// Line 1015, Address: 0x1005cf8, Func Offset: 0x18
	// Line 1016, Address: 0x1005d00, Func Offset: 0x20
	// Line 1017, Address: 0x1005d0c, Func Offset: 0x2c
	// Line 1018, Address: 0x1005d20, Func Offset: 0x40
	// Line 1019, Address: 0x1005d2c, Func Offset: 0x4c
	// Line 1021, Address: 0x1005d40, Func Offset: 0x60
	// Line 1022, Address: 0x1005d4c, Func Offset: 0x6c
	// Line 1023, Address: 0x1005d58, Func Offset: 0x78
	// Line 1024, Address: 0x1005d6c, Func Offset: 0x8c
	// Line 1025, Address: 0x1005d74, Func Offset: 0x94
	// Line 1026, Address: 0x1005d80, Func Offset: 0xa0
	// Line 1027, Address: 0x1005da8, Func Offset: 0xc8
	// Line 1028, Address: 0x1005dac, Func Offset: 0xcc
	// Line 1031, Address: 0x1005db4, Func Offset: 0xd4
	// Line 1033, Address: 0x1005db8, Func Offset: 0xd8
	// Line 1034, Address: 0x1005dbc, Func Offset: 0xdc
	// Func End, Address: 0x1005dd8, Func Offset: 0xf8
}

// 
// Start address: 0x1005de0
void kamemusi_stop(_anon2* pActwk)
{
	// Line 1039, Address: 0x1005de0, Func Offset: 0
	// Line 1040, Address: 0x1005dec, Func Offset: 0xc
	// Line 1041, Address: 0x1005dfc, Func Offset: 0x1c
	// Line 1043, Address: 0x1005e08, Func Offset: 0x28
	// Line 1044, Address: 0x1005e14, Func Offset: 0x34
	// Func End, Address: 0x1005e24, Func Offset: 0x44
}

// 
// Start address: 0x1005e30
void kamemusi_stop1(_anon2* pActwk)
{
	// Line 1049, Address: 0x1005e30, Func Offset: 0
	// Line 1050, Address: 0x1005e3c, Func Offset: 0xc
	// Line 1052, Address: 0x1005e50, Func Offset: 0x20
	// Func End, Address: 0x1005e60, Func Offset: 0x30
}

// 
// Start address: 0x1005e60
void kamemusi_tama(_anon2* pActwk)
{
	_anon2* pTama1wk;
	_anon2* pTama2wk;
	// Line 1057, Address: 0x1005e60, Func Offset: 0
	// Line 1061, Address: 0x1005e6c, Func Offset: 0xc
	// Line 1062, Address: 0x1005e78, Func Offset: 0x18
	// Line 1063, Address: 0x1005e80, Func Offset: 0x20
	// Line 1065, Address: 0x1005e8c, Func Offset: 0x2c
	// Line 1067, Address: 0x1005ea4, Func Offset: 0x44
	// Line 1069, Address: 0x1005eb8, Func Offset: 0x58
	// Line 1071, Address: 0x1005ed0, Func Offset: 0x70
	// Line 1073, Address: 0x1005edc, Func Offset: 0x7c
	// Line 1074, Address: 0x1005eec, Func Offset: 0x8c
	// Line 1075, Address: 0x1005ef4, Func Offset: 0x94
	// Line 1077, Address: 0x1005f08, Func Offset: 0xa8
	// Line 1078, Address: 0x1005f18, Func Offset: 0xb8
	// Line 1082, Address: 0x1005f24, Func Offset: 0xc4
	// Func End, Address: 0x1005f34, Func Offset: 0xd4
}

// 
// Start address: 0x1005f40
void kamemusi_tama_init(_anon2* pActwk, _anon2* pTamawk)
{
	// Line 1084, Address: 0x1005f40, Func Offset: 0
	// Line 1085, Address: 0x1005f4c, Func Offset: 0xc
	// Line 1086, Address: 0x1005f5c, Func Offset: 0x1c
	// Line 1087, Address: 0x1005f68, Func Offset: 0x28
	// Line 1088, Address: 0x1005f78, Func Offset: 0x38
	// Line 1089, Address: 0x1005f94, Func Offset: 0x54
	// Line 1090, Address: 0x1005fa4, Func Offset: 0x64
	// Line 1092, Address: 0x1005fc8, Func Offset: 0x88
	// Line 1093, Address: 0x1005fd8, Func Offset: 0x98
	// Func End, Address: 0x1005fe4, Func Offset: 0xa4
}

// 
// Start address: 0x1005ff0
void tama(_anon2* pActwk)
{
	void(*tbl)(_anon2*)[2];
	// Line 1126, Address: 0x1005ff0, Func Offset: 0
	// Line 1127, Address: 0x1005ffc, Func Offset: 0xc
	// Line 1133, Address: 0x1006018, Func Offset: 0x28
	// Line 1134, Address: 0x1006054, Func Offset: 0x64
	// Line 1135, Address: 0x1006060, Func Offset: 0x70
	// Func End, Address: 0x1006070, Func Offset: 0x80
}

// 
// Start address: 0x1006070
void tama_init(_anon2* pActwk)
{
	// Line 1140, Address: 0x1006070, Func Offset: 0
	// Line 1141, Address: 0x1006078, Func Offset: 0x8
	// Line 1142, Address: 0x1006088, Func Offset: 0x18
	// Line 1143, Address: 0x1006098, Func Offset: 0x28
	// Line 1144, Address: 0x10060a8, Func Offset: 0x38
	// Line 1145, Address: 0x10060b4, Func Offset: 0x44
	// Line 1146, Address: 0x10060c0, Func Offset: 0x50
	// Line 1147, Address: 0x10060cc, Func Offset: 0x5c
	// Line 1148, Address: 0x10060d8, Func Offset: 0x68
	// Line 1149, Address: 0x10060e8, Func Offset: 0x78
	// Line 1150, Address: 0x10060f4, Func Offset: 0x84
	// Line 1152, Address: 0x1006104, Func Offset: 0x94
	// Line 1154, Address: 0x1006118, Func Offset: 0xa8
	// Line 1155, Address: 0x1006128, Func Offset: 0xb8
	// Line 1156, Address: 0x1006138, Func Offset: 0xc8
	// Line 1159, Address: 0x1006140, Func Offset: 0xd0
	// Line 1160, Address: 0x1006150, Func Offset: 0xe0
	// Line 1162, Address: 0x1006160, Func Offset: 0xf0
	// Func End, Address: 0x100616c, Func Offset: 0xfc
}

// 
// Start address: 0x1006170
void tama_move(_anon2* pActwk)
{
	short d1;
	// Line 1167, Address: 0x1006170, Func Offset: 0
	// Line 1170, Address: 0x1006180, Func Offset: 0x10
	// Line 1172, Address: 0x1006198, Func Offset: 0x28
	// Line 1173, Address: 0x10061a4, Func Offset: 0x34
	// Line 1175, Address: 0x10061ac, Func Offset: 0x3c
	// Line 1176, Address: 0x10061c0, Func Offset: 0x50
	// Line 1178, Address: 0x10061d0, Func Offset: 0x60
	// Line 1179, Address: 0x10061dc, Func Offset: 0x6c
	// Line 1182, Address: 0x10061e4, Func Offset: 0x74
	// Line 1183, Address: 0x1006200, Func Offset: 0x90
	// Line 1184, Address: 0x100621c, Func Offset: 0xac
	// Line 1185, Address: 0x1006240, Func Offset: 0xd0
	// Line 1187, Address: 0x1006264, Func Offset: 0xf4
	// Line 1188, Address: 0x1006278, Func Offset: 0x108
	// Func End, Address: 0x100628c, Func Offset: 0x11c
}

// 
// Start address: 0x1006290
void ene_tagame_a(_anon2* pActwk)
{
	void(*tbl)(_anon2*)[5];
	// Line 1221, Address: 0x1006290, Func Offset: 0
	// Line 1222, Address: 0x100629c, Func Offset: 0xc
	// Line 1231, Address: 0x10062c8, Func Offset: 0x38
	// Line 1232, Address: 0x10062dc, Func Offset: 0x4c
	// Line 1233, Address: 0x1006318, Func Offset: 0x88
	// Line 1234, Address: 0x1006324, Func Offset: 0x94
	// Line 1235, Address: 0x1006338, Func Offset: 0xa8
	// Func End, Address: 0x1006348, Func Offset: 0xb8
}

// 
// Start address: 0x1006350
void tagame_init(_anon2* pActwk)
{
	// Line 1240, Address: 0x1006350, Func Offset: 0
	// Line 1241, Address: 0x100635c, Func Offset: 0xc
	// Line 1242, Address: 0x100636c, Func Offset: 0x1c
	// Line 1243, Address: 0x100637c, Func Offset: 0x2c
	// Line 1244, Address: 0x1006388, Func Offset: 0x38
	// Line 1245, Address: 0x1006394, Func Offset: 0x44
	// Line 1246, Address: 0x10063a0, Func Offset: 0x50
	// Line 1247, Address: 0x10063ac, Func Offset: 0x5c
	// Line 1248, Address: 0x10063b8, Func Offset: 0x68
	// Line 1249, Address: 0x10063c8, Func Offset: 0x78
	// Line 1250, Address: 0x10063d8, Func Offset: 0x88
	// Line 1252, Address: 0x10063e8, Func Offset: 0x98
	// Line 1254, Address: 0x1006400, Func Offset: 0xb0
	// Line 1255, Address: 0x1006410, Func Offset: 0xc0
	// Line 1256, Address: 0x1006420, Func Offset: 0xd0
	// Line 1257, Address: 0x1006430, Func Offset: 0xe0
	// Line 1258, Address: 0x100643c, Func Offset: 0xec
	// Line 1261, Address: 0x1006444, Func Offset: 0xf4
	// Line 1262, Address: 0x1006454, Func Offset: 0x104
	// Line 1263, Address: 0x1006464, Func Offset: 0x114
	// Line 1264, Address: 0x1006470, Func Offset: 0x120
	// Line 1266, Address: 0x100647c, Func Offset: 0x12c
	// Line 1267, Address: 0x1006488, Func Offset: 0x138
	// Func End, Address: 0x1006498, Func Offset: 0x148
}

// 
// Start address: 0x10064a0
void tagame_wait(_anon2* pActwk)
{
	// Line 1272, Address: 0x10064a0, Func Offset: 0
	// Line 1273, Address: 0x10064a8, Func Offset: 0x8
	// Line 1274, Address: 0x10064b8, Func Offset: 0x18
	// Line 1275, Address: 0x10064c4, Func Offset: 0x24
	// Line 1276, Address: 0x10064cc, Func Offset: 0x2c
	// Line 1277, Address: 0x10064dc, Func Offset: 0x3c
	// Func End, Address: 0x10064e8, Func Offset: 0x48
}

// 
// Start address: 0x10064f0
void tagame_wait1(_anon2* pActwk)
{
	// Line 1282, Address: 0x10064f0, Func Offset: 0
	// Line 1283, Address: 0x10064fc, Func Offset: 0xc
	// Line 1285, Address: 0x1006510, Func Offset: 0x20
	// Func End, Address: 0x1006520, Func Offset: 0x30
}

// 
// Start address: 0x1006520
void tagame_jump(_anon2* pActwk)
{
	// Line 1290, Address: 0x1006520, Func Offset: 0
	// Line 1291, Address: 0x100652c, Func Offset: 0xc
	// Line 1292, Address: 0x100653c, Func Offset: 0x1c
	// Line 1293, Address: 0x1006548, Func Offset: 0x28
	// Line 1294, Address: 0x1006554, Func Offset: 0x34
	// Line 1295, Address: 0x1006564, Func Offset: 0x44
	// Line 1296, Address: 0x1006574, Func Offset: 0x54
	// Line 1298, Address: 0x1006594, Func Offset: 0x74
	// Line 1300, Address: 0x10065a0, Func Offset: 0x80
	// Line 1301, Address: 0x10065ac, Func Offset: 0x8c
	// Func End, Address: 0x10065bc, Func Offset: 0x9c
}

// 
// Start address: 0x10065c0
void tagame_jump1(_anon2* pActwk)
{
	// Line 1306, Address: 0x10065c0, Func Offset: 0
	// Line 1307, Address: 0x10065cc, Func Offset: 0xc
	// Line 1308, Address: 0x10065e4, Func Offset: 0x24
	// Line 1310, Address: 0x10065fc, Func Offset: 0x3c
	// Line 1312, Address: 0x1006628, Func Offset: 0x68
	// Line 1313, Address: 0x1006634, Func Offset: 0x74
	// Line 1315, Address: 0x1006654, Func Offset: 0x94
	// Line 1318, Address: 0x1006660, Func Offset: 0xa0
	// Line 1319, Address: 0x1006674, Func Offset: 0xb4
	// Func End, Address: 0x1006684, Func Offset: 0xc4
}

// 
// Start address: 0x1006690
void ene_tama()
{
	// Line 1324, Address: 0x1006690, Func Offset: 0
	// Line 1325, Address: 0x1006694, Func Offset: 0x4
	// Func End, Address: 0x10066a0, Func Offset: 0x10
}

