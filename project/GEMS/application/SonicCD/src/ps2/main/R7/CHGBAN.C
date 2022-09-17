typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_0)(_anon0*);
typedef void(*type_18)(_anon0*);
typedef void(*type_33)(_anon0*);
typedef void(*type_38)(_anon0*);
typedef void(*type_45)(_anon0*);

typedef _anon9 type_1[20];
typedef void(*type_2)(_anon0*)[4];
typedef char type_3[9];
typedef _anon9 type_4[0];
typedef _anon1* type_5[5];
typedef char type_6[9];
typedef char type_7[9];
typedef short type_8[18];
typedef char type_9[9];
typedef _anon1** type_10[3];
typedef _anon1* type_11[2];
typedef char type_12[9];
typedef unsigned char* type_13[1];
typedef short type_14[18];
typedef unsigned char type_15[6];
typedef _anon1* type_16[1];
typedef unsigned char type_17[9];
typedef void(*type_19)(_anon0*)[8];
typedef unsigned char type_20[9];
typedef unsigned char type_21[9];
typedef unsigned char type_22[10];
typedef unsigned char type_23[9];
typedef unsigned char type_24[9];
typedef unsigned char type_25[2];
typedef unsigned char type_26[22];
typedef unsigned char type_27[9];
typedef char type_28[9];
typedef char type_29[9];
typedef _anon1* type_30[0];
typedef short type_31[18];
typedef short type_32[18];
typedef void(*type_34)(_anon0*)[4];
typedef char type_35[9];
typedef _anon1* type_36[5];
typedef short type_37[18];
typedef unsigned char* type_39[0];
typedef void(*type_40)(_anon0*)[3];
typedef unsigned char* type_41[1];
typedef unsigned char type_42[11];
typedef short type_43[32];
typedef _anon0 type_44[128];
typedef void(*type_46)(_anon0*)[2];
typedef unsigned char type_47[9];
typedef unsigned char type_48[9];
typedef unsigned char* type_49[1];
typedef unsigned char type_50[9];
typedef unsigned char type_51[9];
typedef unsigned char type_52[9];
typedef short type_53[16];

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
		_anon9 spra[20];
		_anon9 spr[0];
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

union _anon7
{
	unsigned short w;
	_anon8 b;
};

struct _anon8
{
	unsigned char l;
	unsigned char h;
};

struct _anon9
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

char srevtbl0[9];
char srevtbl1[9];
char srevtbl2[9];
short spositbl0[18];
short spositbl1[18];
short spositbl2[18];
char ppositbl0[9];
char ppositbl1[9];
char ppositblg_0[9];
char ppositblg_1[9];
short ppositbl[16];
unsigned char gpattbl[9];
unsigned char grevtbl0_0[9];
unsigned char grevtbl0_1[9];
unsigned char grevtbl1_0[9];
unsigned char grevtbl1_1[9];
unsigned char gpositbl0_0[9];
unsigned char gpositbl0_1[9];
unsigned char gpositbl1_0[9];
unsigned char gpositbl1_1[9];
unsigned char gpositbl2_0[9];
unsigned char gpositbl2_1[9];
short gpositbl[32];
short gspdtbl0[18];
short gspdtbl1[18];
_anon1 amipat0;
_anon1* amipat[1];
void(*ami_act_tbl)(_anon0*)[2];
unsigned char prio_flag;
unsigned char chgbanchg0[11];
unsigned char* chgbanchg[1];
_anon1 chgbanpat0;
_anon1 chgbanpat1;
_anon1 chgbanpat2;
_anon1 chgbanpat3;
_anon1 chgbanpat4;
_anon1* chgbanpat[5];
void(*chgban_act_tbl)(_anon0*)[4];
_anon0 actwk[128];
unsigned char spr_rchg0[10];
unsigned char* spr_rchg[1];
_anon1 spr_rpat0;
_anon1 spr_rpat1;
_anon1 spr_rpat2;
_anon1 spr_rpat3;
_anon1 spr_rpat4;
_anon1* spr_rpat[5];
void(*spring_r_act_tbl)(_anon0*)[8];
_anon1* spring90pat2[0];
unsigned char* springchg[0];
_anon7 swdata;
unsigned char prio_sav;
void(*gun7_act_tbl)(_anon0*)[4];
_anon2 scra_v_posit;
unsigned char hibanachg0[6];
unsigned char* hibanachg[1];
_anon1 hibanapat0;
_anon1 hibanapat1;
_anon1* hibanapat[2];
void(*hibana_act_tbl)(_anon0*)[3];
_anon5 editmode;

void ami(_anon0* pActwk);
void ami_init(_anon0* pActwk);
void ami_move(_anon0* pActwk);
void chgban(_anon0* pActwk);
void chgban_init(_anon0* pActwk);
void chgban_move0(_anon0* pActwk);
void chgban_move1(_anon0* pActwk);
void chgban_move2(_anon0* pActwk);
void spring_r(_anon0* pActwk);
void spr_r_init(_anon0* pActwk);
void spr_r_move0(_anon0* pActwk);
void spr_r_move1(_anon0* pActwk);
void spr_r_move2(_anon0* pActwk);
void spr_r_move3(_anon0* pActwk);
void spr_r_move4(_anon0* pActwk);
void spr_r_move5(_anon0* pActwk);
void spr_r_move6(_anon0* pActwk);
void gun7(_anon0* pActwk);
void gun7_init(_anon0* pActwk);
void gun7_move0(_anon0* pActwk);
void gun7_move1(_anon0* pActwk);
void gun7_move2(_anon0* pActwk);
void hibana(_anon0* pActwk);
void hibana_init(_anon0* pActwk);
void hibana_move0(_anon0* pActwk);
void hibana_move1(_anon0* pActwk);
void spr_r_set(_anon0* pActwk);
void coli_spr(_anon0* pActwk);
unsigned int coli0(_anon0* pActwk, _anon0* pPlayerwk, short xOffs, short yOffs);
void playset(_anon0* pActwk, _anon0* pPlayerwk);
short pposiset(_anon0* pActwk, _anon0* pMstwk, _anon0* pPlayerwk, char* pPostbl);
void plspdset(_anon0* pActwk, _anon0* pPlayerwk, short patcnt);
void g_move0(_anon0* pActwk, unsigned char* pPatTbl, unsigned char* pRevTbl, unsigned char* pGposiTbl, unsigned char* pPposiTbl);
void playset_g(_anon0* pActwk, _anon0* pMstadr, _anon0* pPlayerwk, unsigned char* pPposiTbl);
void gspdset(_anon0* pMstadr, _anon0* pGawaadr);
void gun7_coli(_anon0* pActwk);
void gun7set(_anon0* pActwk);

// 
// Start address: 0x101a320
void ami(_anon0* pActwk)
{
	// Line 265, Address: 0x101a320, Func Offset: 0
	// Line 266, Address: 0x101a32c, Func Offset: 0xc
	// Line 267, Address: 0x101a370, Func Offset: 0x50
	// Line 268, Address: 0x101a37c, Func Offset: 0x5c
	// Line 269, Address: 0x101a388, Func Offset: 0x68
	// Func End, Address: 0x101a398, Func Offset: 0x78
}

// 
// Start address: 0x101a3a0
void ami_init(_anon0* pActwk)
{
	// Line 275, Address: 0x101a3a0, Func Offset: 0
	// Line 276, Address: 0x101a3ac, Func Offset: 0xc
	// Line 277, Address: 0x101a3bc, Func Offset: 0x1c
	// Line 278, Address: 0x101a3c8, Func Offset: 0x28
	// Line 279, Address: 0x101a3d8, Func Offset: 0x38
	// Line 281, Address: 0x101a3e8, Func Offset: 0x48
	// Line 282, Address: 0x101a3f4, Func Offset: 0x54
	// Func End, Address: 0x101a404, Func Offset: 0x64
}

// 
// Start address: 0x101a410
void ami_move(_anon0* pActwk)
{
	// Line 288, Address: 0x101a410, Func Offset: 0
	// Line 289, Address: 0x101a418, Func Offset: 0x8
	// Line 290, Address: 0x101a428, Func Offset: 0x18
	// Line 291, Address: 0x101a430, Func Offset: 0x20
	// Line 292, Address: 0x101a438, Func Offset: 0x28
	// Line 294, Address: 0x101a444, Func Offset: 0x34
	// Func End, Address: 0x101a450, Func Offset: 0x40
}

// 
// Start address: 0x101a450
void chgban(_anon0* pActwk)
{
	// Line 351, Address: 0x101a450, Func Offset: 0
	// Line 352, Address: 0x101a45c, Func Offset: 0xc
	// Line 353, Address: 0x101a4a0, Func Offset: 0x50
	// Line 354, Address: 0x101a4ac, Func Offset: 0x5c
	// Line 355, Address: 0x101a4b8, Func Offset: 0x68
	// Func End, Address: 0x101a4c8, Func Offset: 0x78
}

// 
// Start address: 0x101a4d0
void chgban_init(_anon0* pActwk)
{
	// Line 361, Address: 0x101a4d0, Func Offset: 0
	// Line 362, Address: 0x101a4dc, Func Offset: 0xc
	// Line 363, Address: 0x101a4ec, Func Offset: 0x1c
	// Line 367, Address: 0x101a4fc, Func Offset: 0x2c
	// Line 368, Address: 0x101a50c, Func Offset: 0x3c
	// Line 369, Address: 0x101a51c, Func Offset: 0x4c
	// Line 371, Address: 0x101a528, Func Offset: 0x58
	// Line 372, Address: 0x101a538, Func Offset: 0x68
	// Line 376, Address: 0x101a548, Func Offset: 0x78
	// Line 377, Address: 0x101a558, Func Offset: 0x88
	// Line 379, Address: 0x101a57c, Func Offset: 0xac
	// Line 380, Address: 0x101a588, Func Offset: 0xb8
	// Func End, Address: 0x101a598, Func Offset: 0xc8
}

// 
// Start address: 0x101a5a0
void chgban_move0(_anon0* pActwk)
{
	short xsz;
	short xdst;
	short ysz;
	short ydst;
	// Line 386, Address: 0x101a5a0, Func Offset: 0
	// Line 389, Address: 0x101a5b8, Func Offset: 0x18
	// Line 390, Address: 0x101a5c8, Func Offset: 0x28
	// Line 391, Address: 0x101a5d8, Func Offset: 0x38
	// Line 395, Address: 0x101a5e0, Func Offset: 0x40
	// Line 396, Address: 0x101a634, Func Offset: 0x94
	// Line 398, Address: 0x101a668, Func Offset: 0xc8
	// Line 400, Address: 0x101a6bc, Func Offset: 0x11c
	// Line 402, Address: 0x101a6f0, Func Offset: 0x150
	// Line 405, Address: 0x101a778, Func Offset: 0x1d8
	// Line 408, Address: 0x101a7c8, Func Offset: 0x228
	// Line 409, Address: 0x101a7d4, Func Offset: 0x234
	// Line 411, Address: 0x101a7e4, Func Offset: 0x244
	// Line 412, Address: 0x101a7ec, Func Offset: 0x24c
	// Line 413, Address: 0x101a7f8, Func Offset: 0x258
	// Line 414, Address: 0x101a808, Func Offset: 0x268
	// Line 416, Address: 0x101a81c, Func Offset: 0x27c
	// Func End, Address: 0x101a838, Func Offset: 0x298
}

// 
// Start address: 0x101a840
void chgban_move1(_anon0* pActwk)
{
	// Line 422, Address: 0x101a840, Func Offset: 0
	// Line 423, Address: 0x101a84c, Func Offset: 0xc
	// Line 424, Address: 0x101a860, Func Offset: 0x20
	// Func End, Address: 0x101a870, Func Offset: 0x30
}

// 
// Start address: 0x101a870
void chgban_move2(_anon0* pActwk)
{
	// Line 430, Address: 0x101a870, Func Offset: 0
	// Line 431, Address: 0x101a878, Func Offset: 0x8
	// Line 432, Address: 0x101a888, Func Offset: 0x18
	// Line 433, Address: 0x101a898, Func Offset: 0x28
	// Line 434, Address: 0x101a8a4, Func Offset: 0x34
	// Line 435, Address: 0x101a8ac, Func Offset: 0x3c
	// Line 436, Address: 0x101a8bc, Func Offset: 0x4c
	// Line 440, Address: 0x101a8c4, Func Offset: 0x54
	// Line 441, Address: 0x101a8cc, Func Offset: 0x5c
	// Line 442, Address: 0x101a8dc, Func Offset: 0x6c
	// Func End, Address: 0x101a8e8, Func Offset: 0x78
}

// 
// Start address: 0x101a8f0
void spring_r(_anon0* pActwk)
{
	int mstwkno;
	int gawa0wkno;
	int gawa1wkno;
	// Line 503, Address: 0x101a8f0, Func Offset: 0
	// Line 506, Address: 0x101a908, Func Offset: 0x18
	// Line 507, Address: 0x101a930, Func Offset: 0x40
	// Line 508, Address: 0x101a93c, Func Offset: 0x4c
	// Line 512, Address: 0x101a944, Func Offset: 0x54
	// Line 514, Address: 0x101a96c, Func Offset: 0x7c
	// Line 515, Address: 0x101a9b0, Func Offset: 0xc0
	// Line 517, Address: 0x101a9d8, Func Offset: 0xe8
	// Line 519, Address: 0x101a9e4, Func Offset: 0xf4
	// Line 521, Address: 0x101a9ec, Func Offset: 0xfc
	// Line 525, Address: 0x101a9f8, Func Offset: 0x108
	// Line 530, Address: 0x101aa10, Func Offset: 0x120
	// Line 531, Address: 0x101aa1c, Func Offset: 0x12c
	// Line 532, Address: 0x101aa28, Func Offset: 0x138
	// Line 534, Address: 0x101aa34, Func Offset: 0x144
	// Line 536, Address: 0x101aa50, Func Offset: 0x160
	// Line 537, Address: 0x101aa70, Func Offset: 0x180
	// Line 538, Address: 0x101aa90, Func Offset: 0x1a0
	// Line 540, Address: 0x101aab0, Func Offset: 0x1c0
	// Func End, Address: 0x101aacc, Func Offset: 0x1dc
}

// 
// Start address: 0x101aad0
void spr_r_init(_anon0* pActwk)
{
	_anon0* pNewact;
	_anon0* pTstwk;
	int i;
	unsigned char r_nowk;
	// Line 546, Address: 0x101aad0, Func Offset: 0
	// Line 551, Address: 0x101aae4, Func Offset: 0x14
	// Line 552, Address: 0x101aaf4, Func Offset: 0x24
	// Line 553, Address: 0x101ab04, Func Offset: 0x34
	// Line 554, Address: 0x101ab14, Func Offset: 0x44
	// Line 555, Address: 0x101ab20, Func Offset: 0x50
	// Line 556, Address: 0x101ab30, Func Offset: 0x60
	// Line 557, Address: 0x101ab3c, Func Offset: 0x6c
	// Line 558, Address: 0x101ab48, Func Offset: 0x78
	// Line 560, Address: 0x101ab54, Func Offset: 0x84
	// Line 561, Address: 0x101ab70, Func Offset: 0xa0
	// Line 562, Address: 0x101aba4, Func Offset: 0xd4
	// Line 566, Address: 0x101abac, Func Offset: 0xdc
	// Line 567, Address: 0x101abb4, Func Offset: 0xe4
	// Line 569, Address: 0x101abc0, Func Offset: 0xf0
	// Line 570, Address: 0x101abd8, Func Offset: 0x108
	// Line 571, Address: 0x101abe4, Func Offset: 0x114
	// Line 574, Address: 0x101abec, Func Offset: 0x11c
	// Line 575, Address: 0x101abf4, Func Offset: 0x124
	// Line 577, Address: 0x101ac04, Func Offset: 0x134
	// Line 578, Address: 0x101ac0c, Func Offset: 0x13c
	// Line 580, Address: 0x101ac18, Func Offset: 0x148
	// Line 582, Address: 0x101ac28, Func Offset: 0x158
	// Line 583, Address: 0x101ac34, Func Offset: 0x164
	// Line 584, Address: 0x101ac44, Func Offset: 0x174
	// Line 585, Address: 0x101ac54, Func Offset: 0x184
	// Line 586, Address: 0x101ac64, Func Offset: 0x194
	// Line 588, Address: 0x101ac74, Func Offset: 0x1a4
	// Line 589, Address: 0x101ac80, Func Offset: 0x1b0
	// Line 590, Address: 0x101ac8c, Func Offset: 0x1bc
	// Line 591, Address: 0x101ac9c, Func Offset: 0x1cc
	// Line 592, Address: 0x101aca8, Func Offset: 0x1d8
	// Line 593, Address: 0x101acdc, Func Offset: 0x20c
	// Line 595, Address: 0x101ace4, Func Offset: 0x214
	// Line 596, Address: 0x101acf0, Func Offset: 0x220
	// Line 597, Address: 0x101ad00, Func Offset: 0x230
	// Line 598, Address: 0x101ad0c, Func Offset: 0x23c
	// Line 600, Address: 0x101ad18, Func Offset: 0x248
	// Line 601, Address: 0x101ad24, Func Offset: 0x254
	// Line 602, Address: 0x101ad58, Func Offset: 0x288
	// Line 604, Address: 0x101ad60, Func Offset: 0x290
	// Line 609, Address: 0x101ad94, Func Offset: 0x2c4
	// Line 610, Address: 0x101ada4, Func Offset: 0x2d4
	// Line 611, Address: 0x101add8, Func Offset: 0x308
	// Line 613, Address: 0x101ade0, Func Offset: 0x310
	// Line 614, Address: 0x101adec, Func Offset: 0x31c
	// Line 617, Address: 0x101adf4, Func Offset: 0x324
	// Line 618, Address: 0x101adfc, Func Offset: 0x32c
	// Line 620, Address: 0x101ae08, Func Offset: 0x338
	// Line 621, Address: 0x101ae14, Func Offset: 0x344
	// Func End, Address: 0x101ae2c, Func Offset: 0x35c
}

// 
// Start address: 0x101ae30
void spr_r_move0(_anon0* pActwk)
{
	_anon0* pMstwk;
	// Line 627, Address: 0x101ae30, Func Offset: 0
	// Line 630, Address: 0x101ae40, Func Offset: 0x10
	// Line 631, Address: 0x101ae50, Func Offset: 0x20
	// Line 633, Address: 0x101ae74, Func Offset: 0x44
	// Line 635, Address: 0x101aea0, Func Offset: 0x70
	// Line 638, Address: 0x101aeb4, Func Offset: 0x84
	// Func End, Address: 0x101aec8, Func Offset: 0x98
}

// 
// Start address: 0x101aed0
void spr_r_move1(_anon0* pActwk)
{
	// Line 644, Address: 0x101aed0, Func Offset: 0
	// Line 645, Address: 0x101aedc, Func Offset: 0xc
	// Line 646, Address: 0x101aeec, Func Offset: 0x1c
	// Line 647, Address: 0x101aef8, Func Offset: 0x28
	// Line 649, Address: 0x101af04, Func Offset: 0x34
	// Func End, Address: 0x101af14, Func Offset: 0x44
}

// 
// Start address: 0x101af20
void spr_r_move2(_anon0* pActwk)
{
	_anon0* pMstadr;
	_anon0* pPlayerwk;
	// Line 655, Address: 0x101af20, Func Offset: 0
	// Line 658, Address: 0x101af34, Func Offset: 0x14
	// Line 660, Address: 0x101af58, Func Offset: 0x38
	// Line 662, Address: 0x101af68, Func Offset: 0x48
	// Line 664, Address: 0x101af84, Func Offset: 0x64
	// Line 667, Address: 0x101af98, Func Offset: 0x78
	// Line 668, Address: 0x101afa4, Func Offset: 0x84
	// Line 670, Address: 0x101afe0, Func Offset: 0xc0
	// Line 671, Address: 0x101afec, Func Offset: 0xcc
	// Line 672, Address: 0x101aff4, Func Offset: 0xd4
	// Line 673, Address: 0x101b000, Func Offset: 0xe0
	// Line 674, Address: 0x101b024, Func Offset: 0x104
	// Line 677, Address: 0x101b03c, Func Offset: 0x11c
	// Line 678, Address: 0x101b050, Func Offset: 0x130
	// Line 681, Address: 0x101b05c, Func Offset: 0x13c
	// Line 684, Address: 0x101b070, Func Offset: 0x150
	// Line 686, Address: 0x101b07c, Func Offset: 0x15c
	// Line 688, Address: 0x101b084, Func Offset: 0x164
	// Line 690, Address: 0x101b094, Func Offset: 0x174
	// Line 693, Address: 0x101b0a8, Func Offset: 0x188
	// Line 694, Address: 0x101b0b4, Func Offset: 0x194
	// Line 696, Address: 0x101b0dc, Func Offset: 0x1bc
	// Line 697, Address: 0x101b0e8, Func Offset: 0x1c8
	// Line 699, Address: 0x101b0f0, Func Offset: 0x1d0
	// Line 700, Address: 0x101b104, Func Offset: 0x1e4
	// Line 703, Address: 0x101b110, Func Offset: 0x1f0
	// Line 706, Address: 0x101b124, Func Offset: 0x204
	// Line 709, Address: 0x101b130, Func Offset: 0x210
	// Func End, Address: 0x101b148, Func Offset: 0x228
}

// 
// Start address: 0x101b150
void spr_r_move3(_anon0* pActwk)
{
	_anon0* pMstwk;
	_anon0* pGawawk;
	// Line 715, Address: 0x101b150, Func Offset: 0
	// Line 718, Address: 0x101b160, Func Offset: 0x10
	// Line 719, Address: 0x101b170, Func Offset: 0x20
	// Line 720, Address: 0x101b178, Func Offset: 0x28
	// Line 721, Address: 0x101b180, Func Offset: 0x30
	// Line 723, Address: 0x101b188, Func Offset: 0x38
	// Line 725, Address: 0x101b198, Func Offset: 0x48
	// Line 726, Address: 0x101b1bc, Func Offset: 0x6c
	// Line 727, Address: 0x101b1dc, Func Offset: 0x8c
	// Line 728, Address: 0x101b1e0, Func Offset: 0x90
	// Line 729, Address: 0x101b200, Func Offset: 0xb0
	// Line 730, Address: 0x101b204, Func Offset: 0xb4
	// Line 734, Address: 0x101b20c, Func Offset: 0xbc
	// Func End, Address: 0x101b220, Func Offset: 0xd0
}

// 
// Start address: 0x101b220
void spr_r_move4(_anon0* pActwk)
{
	unsigned char* pPattbl;
	unsigned char* pRevtbl;
	unsigned char* pPositbl;
	// Line 740, Address: 0x101b220, Func Offset: 0
	// Line 743, Address: 0x101b238, Func Offset: 0x18
	// Line 745, Address: 0x101b240, Func Offset: 0x20
	// Line 746, Address: 0x101b250, Func Offset: 0x30
	// Line 747, Address: 0x101b258, Func Offset: 0x38
	// Line 748, Address: 0x101b260, Func Offset: 0x40
	// Line 750, Address: 0x101b268, Func Offset: 0x48
	// Line 752, Address: 0x101b270, Func Offset: 0x50
	// Line 753, Address: 0x101b280, Func Offset: 0x60
	// Line 754, Address: 0x101b288, Func Offset: 0x68
	// Line 755, Address: 0x101b290, Func Offset: 0x70
	// Line 760, Address: 0x101b298, Func Offset: 0x78
	// Line 761, Address: 0x101b2b8, Func Offset: 0x98
	// Func End, Address: 0x101b2d4, Func Offset: 0xb4
}

// 
// Start address: 0x101b2e0
void spr_r_move5(_anon0* pActwk)
{
	unsigned char* pPattbl;
	unsigned char* pRevtbl;
	unsigned char* pPositbl;
	// Line 767, Address: 0x101b2e0, Func Offset: 0
	// Line 770, Address: 0x101b2f8, Func Offset: 0x18
	// Line 772, Address: 0x101b300, Func Offset: 0x20
	// Line 773, Address: 0x101b310, Func Offset: 0x30
	// Line 774, Address: 0x101b318, Func Offset: 0x38
	// Line 775, Address: 0x101b320, Func Offset: 0x40
	// Line 777, Address: 0x101b328, Func Offset: 0x48
	// Line 779, Address: 0x101b330, Func Offset: 0x50
	// Line 780, Address: 0x101b340, Func Offset: 0x60
	// Line 781, Address: 0x101b348, Func Offset: 0x68
	// Line 782, Address: 0x101b350, Func Offset: 0x70
	// Line 787, Address: 0x101b358, Func Offset: 0x78
	// Line 788, Address: 0x101b378, Func Offset: 0x98
	// Func End, Address: 0x101b394, Func Offset: 0xb4
}

// 
// Start address: 0x101b3a0
void spr_r_move6(_anon0* pActwk)
{
	_anon0* pMstwk;
	// Line 794, Address: 0x101b3a0, Func Offset: 0
	// Line 797, Address: 0x101b3b0, Func Offset: 0x10
	// Line 798, Address: 0x101b3cc, Func Offset: 0x2c
	// Line 799, Address: 0x101b3f0, Func Offset: 0x50
	// Line 800, Address: 0x101b410, Func Offset: 0x70
	// Line 801, Address: 0x101b418, Func Offset: 0x78
	// Line 802, Address: 0x101b428, Func Offset: 0x88
	// Line 804, Address: 0x101b434, Func Offset: 0x94
	// Line 805, Address: 0x101b45c, Func Offset: 0xbc
	// Line 810, Address: 0x101b464, Func Offset: 0xc4
	// Line 811, Address: 0x101b47c, Func Offset: 0xdc
	// Line 812, Address: 0x101b494, Func Offset: 0xf4
	// Func End, Address: 0x101b4a8, Func Offset: 0x108
}

// 
// Start address: 0x101b4b0
void gun7(_anon0* pActwk)
{
	// Line 838, Address: 0x101b4b0, Func Offset: 0
	// Line 839, Address: 0x101b4bc, Func Offset: 0xc
	// Line 840, Address: 0x101b500, Func Offset: 0x50
	// Line 841, Address: 0x101b50c, Func Offset: 0x5c
	// Line 842, Address: 0x101b518, Func Offset: 0x68
	// Func End, Address: 0x101b528, Func Offset: 0x78
}

// 
// Start address: 0x101b530
void gun7_init(_anon0* pActwk)
{
	// Line 848, Address: 0x101b530, Func Offset: 0
	// Line 849, Address: 0x101b53c, Func Offset: 0xc
	// Line 850, Address: 0x101b54c, Func Offset: 0x1c
	// Line 851, Address: 0x101b55c, Func Offset: 0x2c
	// Line 852, Address: 0x101b568, Func Offset: 0x38
	// Line 853, Address: 0x101b578, Func Offset: 0x48
	// Line 854, Address: 0x101b584, Func Offset: 0x54
	// Line 856, Address: 0x101b590, Func Offset: 0x60
	// Line 857, Address: 0x101b59c, Func Offset: 0x6c
	// Line 858, Address: 0x101b5ac, Func Offset: 0x7c
	// Line 859, Address: 0x101b5b8, Func Offset: 0x88
	// Line 860, Address: 0x101b5c0, Func Offset: 0x90
	// Line 861, Address: 0x101b5c8, Func Offset: 0x98
	// Line 862, Address: 0x101b5d4, Func Offset: 0xa4
	// Line 863, Address: 0x101b5e0, Func Offset: 0xb0
	// Line 865, Address: 0x101b5ec, Func Offset: 0xbc
	// Func End, Address: 0x101b5fc, Func Offset: 0xcc
}

// 
// Start address: 0x101b600
void gun7_move0(_anon0* pActwk)
{
	// Line 871, Address: 0x101b600, Func Offset: 0
	// Line 872, Address: 0x101b60c, Func Offset: 0xc
	// Line 873, Address: 0x101b618, Func Offset: 0x18
	// Func End, Address: 0x101b628, Func Offset: 0x28
}

// 
// Start address: 0x101b630
void gun7_move1(_anon0* pActwk)
{
	// Line 879, Address: 0x101b630, Func Offset: 0
	// Line 880, Address: 0x101b63c, Func Offset: 0xc
	// Line 881, Address: 0x101b64c, Func Offset: 0x1c
	// Line 883, Address: 0x101b658, Func Offset: 0x28
	// Line 884, Address: 0x101b674, Func Offset: 0x44
	// Line 886, Address: 0x101b684, Func Offset: 0x54
	// Line 888, Address: 0x101b68c, Func Offset: 0x5c
	// Line 890, Address: 0x101b698, Func Offset: 0x68
	// Line 891, Address: 0x101b6c0, Func Offset: 0x90
	// Line 894, Address: 0x101b6d0, Func Offset: 0xa0
	// Func End, Address: 0x101b6e0, Func Offset: 0xb0
}

// 
// Start address: 0x101b6e0
void gun7_move2(_anon0* pActwk)
{
	// Line 900, Address: 0x101b6e0, Func Offset: 0
	// Line 901, Address: 0x101b6ec, Func Offset: 0xc
	// Line 902, Address: 0x101b6fc, Func Offset: 0x1c
	// Line 903, Address: 0x101b708, Func Offset: 0x28
	// Line 904, Address: 0x101b738, Func Offset: 0x58
	// Line 906, Address: 0x101b744, Func Offset: 0x64
	// Func End, Address: 0x101b754, Func Offset: 0x74
}

// 
// Start address: 0x101b760
void hibana(_anon0* pActwk)
{
	// Line 953, Address: 0x101b760, Func Offset: 0
	// Line 954, Address: 0x101b76c, Func Offset: 0xc
	// Line 955, Address: 0x101b7b0, Func Offset: 0x50
	// Line 956, Address: 0x101b7bc, Func Offset: 0x5c
	// Func End, Address: 0x101b7cc, Func Offset: 0x6c
}

// 
// Start address: 0x101b7d0
void hibana_init(_anon0* pActwk)
{
	// Line 962, Address: 0x101b7d0, Func Offset: 0
	// Line 963, Address: 0x101b7d8, Func Offset: 0x8
	// Line 964, Address: 0x101b7e8, Func Offset: 0x18
	// Line 965, Address: 0x101b7f8, Func Offset: 0x28
	// Line 966, Address: 0x101b804, Func Offset: 0x34
	// Line 967, Address: 0x101b814, Func Offset: 0x44
	// Func End, Address: 0x101b820, Func Offset: 0x50
}

// 
// Start address: 0x101b820
void hibana_move0(_anon0* pActwk)
{
	// Line 973, Address: 0x101b820, Func Offset: 0
	// Line 974, Address: 0x101b82c, Func Offset: 0xc
	// Line 975, Address: 0x101b840, Func Offset: 0x20
	// Func End, Address: 0x101b850, Func Offset: 0x30
}

// 
// Start address: 0x101b850
void hibana_move1(_anon0* pActwk)
{
	// Line 981, Address: 0x101b850, Func Offset: 0
	// Line 982, Address: 0x101b85c, Func Offset: 0xc
	// Line 983, Address: 0x101b868, Func Offset: 0x18
	// Func End, Address: 0x101b878, Func Offset: 0x28
}

// 
// Start address: 0x101b880
void spr_r_set(_anon0* pActwk)
{
	char* pRevtbl;
	short* pPostbl;
	short patcntwk;
	_anon0* pMstwk;
	_anon1** tbl1[3];
	char tbl0[9];
	// Line 1000, Address: 0x101b880, Func Offset: 0
	// Line 1011, Address: 0x101b898, Func Offset: 0x18
	// Line 1013, Address: 0x101b8c4, Func Offset: 0x44
	// Line 1014, Address: 0x101b8cc, Func Offset: 0x4c
	// Line 1015, Address: 0x101b8d4, Func Offset: 0x54
	// Line 1018, Address: 0x101b8dc, Func Offset: 0x5c
	// Line 1019, Address: 0x101b8e4, Func Offset: 0x64
	// Line 1020, Address: 0x101b8ec, Func Offset: 0x6c
	// Line 1023, Address: 0x101b8f4, Func Offset: 0x74
	// Line 1024, Address: 0x101b8fc, Func Offset: 0x7c
	// Line 1030, Address: 0x101b904, Func Offset: 0x84
	// Line 1031, Address: 0x101b910, Func Offset: 0x90
	// Line 1032, Address: 0x101b934, Func Offset: 0xb4
	// Line 1034, Address: 0x101b944, Func Offset: 0xc4
	// Line 1035, Address: 0x101b958, Func Offset: 0xd8
	// Line 1039, Address: 0x101b964, Func Offset: 0xe4
	// Line 1040, Address: 0x101b9a0, Func Offset: 0x120
	// Line 1041, Address: 0x101b9b0, Func Offset: 0x130
	// Line 1042, Address: 0x101b9d4, Func Offset: 0x154
	// Line 1043, Address: 0x101ba14, Func Offset: 0x194
	// Line 1044, Address: 0x101ba58, Func Offset: 0x1d8
	// Func End, Address: 0x101ba74, Func Offset: 0x1f4
}

// 
// Start address: 0x101ba80
void coli_spr(_anon0* pActwk)
{
	// Line 1058, Address: 0x101ba80, Func Offset: 0
	// Line 1059, Address: 0x101ba8c, Func Offset: 0xc
	// Line 1063, Address: 0x101ba9c, Func Offset: 0x1c
	// Line 1064, Address: 0x101bac0, Func Offset: 0x40
	// Line 1066, Address: 0x101bad4, Func Offset: 0x54
	// Func End, Address: 0x101bae4, Func Offset: 0x64
}

// 
// Start address: 0x101baf0
unsigned int coli0(_anon0* pActwk, _anon0* pPlayerwk, short xOffs, short yOffs)
{
	short sizwk;
	short poswk;
	// Line 1073, Address: 0x101baf0, Func Offset: 0
	// Line 1076, Address: 0x101bb0c, Func Offset: 0x1c
	// Line 1077, Address: 0x101bb24, Func Offset: 0x34
	// Line 1078, Address: 0x101bb34, Func Offset: 0x44
	// Line 1082, Address: 0x101bb40, Func Offset: 0x50
	// Line 1083, Address: 0x101bb74, Func Offset: 0x84
	// Line 1086, Address: 0x101bb80, Func Offset: 0x90
	// Line 1087, Address: 0x101bbc0, Func Offset: 0xd0
	// Line 1089, Address: 0x101bbf4, Func Offset: 0x104
	// Line 1090, Address: 0x101bc38, Func Offset: 0x148
	// Line 1093, Address: 0x101bc44, Func Offset: 0x154
	// Line 1094, Address: 0x101bc84, Func Offset: 0x194
	// Line 1096, Address: 0x101bcb8, Func Offset: 0x1c8
	// Line 1097, Address: 0x101bcfc, Func Offset: 0x20c
	// Line 1100, Address: 0x101bd08, Func Offset: 0x218
	// Line 1101, Address: 0x101bd0c, Func Offset: 0x21c
	// Func End, Address: 0x101bd20, Func Offset: 0x230
}

// 
// Start address: 0x101bd20
void playset(_anon0* pActwk, _anon0* pPlayerwk)
{
	_anon0* pMstwk;
	short cntwk;
	// Line 1115, Address: 0x101bd20, Func Offset: 0
	// Line 1119, Address: 0x101bd38, Func Offset: 0x18
	// Line 1120, Address: 0x101bd40, Func Offset: 0x20
	// Line 1121, Address: 0x101bd50, Func Offset: 0x30
	// Line 1122, Address: 0x101bd60, Func Offset: 0x40
	// Line 1123, Address: 0x101bd6c, Func Offset: 0x4c
	// Line 1124, Address: 0x101bd78, Func Offset: 0x58
	// Line 1127, Address: 0x101bd84, Func Offset: 0x64
	// Line 1128, Address: 0x101bda4, Func Offset: 0x84
	// Line 1130, Address: 0x101bdb4, Func Offset: 0x94
	// Line 1131, Address: 0x101bde8, Func Offset: 0xc8
	// Line 1132, Address: 0x101bdf4, Func Offset: 0xd4
	// Line 1134, Address: 0x101be04, Func Offset: 0xe4
	// Line 1135, Address: 0x101be28, Func Offset: 0x108
	// Line 1137, Address: 0x101be4c, Func Offset: 0x12c
	// Line 1138, Address: 0x101be60, Func Offset: 0x140
	// Func End, Address: 0x101be78, Func Offset: 0x158
}

// 
// Start address: 0x101be80
short pposiset(_anon0* pActwk, _anon0* pMstwk, _anon0* pPlayerwk, char* pPostbl)
{
	short poswk;
	short cntsv;
	// Line 1145, Address: 0x101be80, Func Offset: 0
	// Line 1148, Address: 0x101be9c, Func Offset: 0x1c
	// Line 1149, Address: 0x101beb0, Func Offset: 0x30
	// Line 1150, Address: 0x101bed4, Func Offset: 0x54
	// Line 1152, Address: 0x101bee0, Func Offset: 0x60
	// Line 1153, Address: 0x101bf28, Func Offset: 0xa8
	// Line 1155, Address: 0x101bf74, Func Offset: 0xf4
	// Line 1156, Address: 0x101bf78, Func Offset: 0xf8
	// Func End, Address: 0x101bf8c, Func Offset: 0x10c
}

// 
// Start address: 0x101bf90
void plspdset(_anon0* pActwk, _anon0* pPlayerwk, short patcnt)
{
	_anon2 sinwk;
	_anon2 coswk;
	// Line 1163, Address: 0x101bf90, Func Offset: 0
	// Line 1166, Address: 0x101bfa4, Func Offset: 0x14
	// Line 1168, Address: 0x101bfbc, Func Offset: 0x2c
	// Line 1169, Address: 0x101bfd0, Func Offset: 0x40
	// Line 1170, Address: 0x101bfdc, Func Offset: 0x4c
	// Line 1171, Address: 0x101bfe8, Func Offset: 0x58
	// Line 1172, Address: 0x101bff4, Func Offset: 0x64
	// Line 1173, Address: 0x101c000, Func Offset: 0x70
	// Line 1174, Address: 0x101c00c, Func Offset: 0x7c
	// Line 1176, Address: 0x101c018, Func Offset: 0x88
	// Line 1177, Address: 0x101c030, Func Offset: 0xa0
	// Line 1181, Address: 0x101c040, Func Offset: 0xb0
	// Line 1183, Address: 0x101c050, Func Offset: 0xc0
	// Line 1184, Address: 0x101c068, Func Offset: 0xd8
	// Line 1185, Address: 0x101c078, Func Offset: 0xe8
	// Line 1187, Address: 0x101c088, Func Offset: 0xf8
	// Line 1189, Address: 0x101c090, Func Offset: 0x100
	// Line 1191, Address: 0x101c0a8, Func Offset: 0x118
	// Line 1192, Address: 0x101c0b0, Func Offset: 0x120
	// Line 1194, Address: 0x101c0bc, Func Offset: 0x12c
	// Line 1195, Address: 0x101c0d4, Func Offset: 0x144
	// Line 1197, Address: 0x101c0e4, Func Offset: 0x154
	// Line 1199, Address: 0x101c0ec, Func Offset: 0x15c
	// Line 1200, Address: 0x101c0f4, Func Offset: 0x164
	// Line 1202, Address: 0x101c100, Func Offset: 0x170
	// Line 1203, Address: 0x101c118, Func Offset: 0x188
	// Line 1209, Address: 0x101c128, Func Offset: 0x198
	// Line 1210, Address: 0x101c138, Func Offset: 0x1a8
	// Line 1211, Address: 0x101c148, Func Offset: 0x1b8
	// Func End, Address: 0x101c158, Func Offset: 0x1c8
}

// 
// Start address: 0x101c160
void g_move0(_anon0* pActwk, unsigned char* pPatTbl, unsigned char* pRevTbl, unsigned char* pGposiTbl, unsigned char* pPposiTbl)
{
	_anon0* pMstwk;
	_anon0* pMstwk2;
	_anon0* pPlayerwk;
	unsigned char cntwk;
	// Line 1218, Address: 0x101c160, Func Offset: 0
	// Line 1222, Address: 0x101c18c, Func Offset: 0x2c
	// Line 1223, Address: 0x101c1b0, Func Offset: 0x50
	// Line 1225, Address: 0x101c1b8, Func Offset: 0x58
	// Line 1226, Address: 0x101c1d0, Func Offset: 0x70
	// Line 1227, Address: 0x101c1e0, Func Offset: 0x80
	// Line 1228, Address: 0x101c200, Func Offset: 0xa0
	// Line 1229, Address: 0x101c214, Func Offset: 0xb4
	// Line 1230, Address: 0x101c224, Func Offset: 0xc4
	// Line 1231, Address: 0x101c264, Func Offset: 0x104
	// Line 1234, Address: 0x101c2a8, Func Offset: 0x148
	// Line 1240, Address: 0x101c2b8, Func Offset: 0x158
	// Line 1241, Address: 0x101c2dc, Func Offset: 0x17c
	// Line 1243, Address: 0x101c2fc, Func Offset: 0x19c
	// Line 1244, Address: 0x101c308, Func Offset: 0x1a8
	// Line 1245, Address: 0x101c330, Func Offset: 0x1d0
	// Line 1246, Address: 0x101c350, Func Offset: 0x1f0
	// Line 1248, Address: 0x101c368, Func Offset: 0x208
	// Line 1250, Address: 0x101c370, Func Offset: 0x210
	// Line 1251, Address: 0x101c380, Func Offset: 0x220
	// Line 1252, Address: 0x101c3a4, Func Offset: 0x244
	// Line 1253, Address: 0x101c3c0, Func Offset: 0x260
	// Line 1254, Address: 0x101c3c8, Func Offset: 0x268
	// Line 1260, Address: 0x101c3d0, Func Offset: 0x270
	// Func End, Address: 0x101c3f0, Func Offset: 0x290
}

// 
// Start address: 0x101c3f0
void playset_g(_anon0* pActwk, _anon0* pMstadr, _anon0* pPlayerwk, unsigned char* pPposiTbl)
{
	_anon0* pMstwk;
	_anon0* pGawaadr;
	_anon0* pMstsv;
	// Line 1274, Address: 0x101c3f0, Func Offset: 0
	// Line 1277, Address: 0x101c414, Func Offset: 0x24
	// Line 1278, Address: 0x101c41c, Func Offset: 0x2c
	// Line 1279, Address: 0x101c42c, Func Offset: 0x3c
	// Line 1280, Address: 0x101c43c, Func Offset: 0x4c
	// Line 1281, Address: 0x101c448, Func Offset: 0x58
	// Line 1282, Address: 0x101c454, Func Offset: 0x64
	// Line 1284, Address: 0x101c460, Func Offset: 0x70
	// Line 1285, Address: 0x101c484, Func Offset: 0x94
	// Line 1286, Address: 0x101c4a4, Func Offset: 0xb4
	// Line 1287, Address: 0x101c4b0, Func Offset: 0xc0
	// Line 1288, Address: 0x101c4b8, Func Offset: 0xc8
	// Line 1289, Address: 0x101c4e8, Func Offset: 0xf8
	// Line 1291, Address: 0x101c500, Func Offset: 0x110
	// Line 1293, Address: 0x101c524, Func Offset: 0x134
	// Line 1294, Address: 0x101c53c, Func Offset: 0x14c
	// Line 1295, Address: 0x101c55c, Func Offset: 0x16c
	// Line 1296, Address: 0x101c564, Func Offset: 0x174
	// Line 1299, Address: 0x101c584, Func Offset: 0x194
	// Line 1300, Address: 0x101c58c, Func Offset: 0x19c
	// Line 1301, Address: 0x101c590, Func Offset: 0x1a0
	// Line 1302, Address: 0x101c5b8, Func Offset: 0x1c8
	// Line 1304, Address: 0x101c5e0, Func Offset: 0x1f0
	// Line 1305, Address: 0x101c5f4, Func Offset: 0x204
	// Line 1306, Address: 0x101c600, Func Offset: 0x210
	// Line 1307, Address: 0x101c60c, Func Offset: 0x21c
	// Line 1309, Address: 0x101c614, Func Offset: 0x224
	// Line 1310, Address: 0x101c620, Func Offset: 0x230
	// Line 1314, Address: 0x101c62c, Func Offset: 0x23c
	// Line 1315, Address: 0x101c634, Func Offset: 0x244
	// Line 1316, Address: 0x101c63c, Func Offset: 0x24c
	// Line 1317, Address: 0x101c64c, Func Offset: 0x25c
	// Func End, Address: 0x101c668, Func Offset: 0x278
}

// 
// Start address: 0x101c670
void gspdset(_anon0* pMstadr, _anon0* pGawaadr)
{
	short* pGspdTbl;
	unsigned char r_nowk;
	unsigned char cntwk;
	// Line 1324, Address: 0x101c670, Func Offset: 0
	// Line 1328, Address: 0x101c688, Func Offset: 0x18
	// Line 1329, Address: 0x101c690, Func Offset: 0x20
	// Line 1331, Address: 0x101c69c, Func Offset: 0x2c
	// Line 1332, Address: 0x101c6b4, Func Offset: 0x44
	// Line 1336, Address: 0x101c6bc, Func Offset: 0x4c
	// Line 1337, Address: 0x101c6c8, Func Offset: 0x58
	// Line 1338, Address: 0x101c6d8, Func Offset: 0x68
	// Line 1339, Address: 0x101c6f0, Func Offset: 0x80
	// Line 1340, Address: 0x101c70c, Func Offset: 0x9c
	// Line 1341, Address: 0x101c718, Func Offset: 0xa8
	// Func End, Address: 0x101c730, Func Offset: 0xc0
}

// 
// Start address: 0x101c730
void gun7_coli(_anon0* pActwk)
{
	// Line 1348, Address: 0x101c730, Func Offset: 0
	// Line 1349, Address: 0x101c73c, Func Offset: 0xc
	// Line 1350, Address: 0x101c74c, Func Offset: 0x1c
	// Line 1351, Address: 0x101c764, Func Offset: 0x34
	// Line 1352, Address: 0x101c788, Func Offset: 0x58
	// Line 1358, Address: 0x101c794, Func Offset: 0x64
	// Func End, Address: 0x101c7a4, Func Offset: 0x74
}

// 
// Start address: 0x101c7b0
void gun7set(_anon0* pActwk)
{
	_anon0* pNewact;
	_anon0* pGunact;
	// Line 1364, Address: 0x101c7b0, Func Offset: 0
	// Line 1367, Address: 0x101c7c0, Func Offset: 0x10
	// Line 1368, Address: 0x101c7c8, Func Offset: 0x18
	// Line 1370, Address: 0x101c7d0, Func Offset: 0x20
	// Line 1371, Address: 0x101c7e4, Func Offset: 0x34
	// Line 1372, Address: 0x101c7f0, Func Offset: 0x40
	// Line 1373, Address: 0x101c800, Func Offset: 0x50
	// Line 1374, Address: 0x101c810, Func Offset: 0x60
	// Line 1375, Address: 0x101c81c, Func Offset: 0x6c
	// Line 1377, Address: 0x101c820, Func Offset: 0x70
	// Line 1378, Address: 0x101c834, Func Offset: 0x84
	// Line 1379, Address: 0x101c840, Func Offset: 0x90
	// Line 1380, Address: 0x101c850, Func Offset: 0xa0
	// Line 1385, Address: 0x101c874, Func Offset: 0xc4
	// Line 1387, Address: 0x101c880, Func Offset: 0xd0
	// Line 1388, Address: 0x101c890, Func Offset: 0xe0
	// Line 1389, Address: 0x101c8a0, Func Offset: 0xf0
	// Line 1391, Address: 0x101c8ac, Func Offset: 0xfc
	// Line 1393, Address: 0x101c8d8, Func Offset: 0x128
	// Line 1394, Address: 0x101c8e0, Func Offset: 0x130
	// Line 1397, Address: 0x101c8e8, Func Offset: 0x138
	// Line 1398, Address: 0x101c8f4, Func Offset: 0x144
	// Line 1399, Address: 0x101c904, Func Offset: 0x154
	// Line 1401, Address: 0x101c914, Func Offset: 0x164
	// Line 1402, Address: 0x101c920, Func Offset: 0x170
	// Line 1403, Address: 0x101c930, Func Offset: 0x180
	// Line 1405, Address: 0x101c944, Func Offset: 0x194
	// Line 1406, Address: 0x101c950, Func Offset: 0x1a0
	// Line 1408, Address: 0x101c958, Func Offset: 0x1a8
	// Line 1409, Address: 0x101c960, Func Offset: 0x1b0
	// Line 1412, Address: 0x101c968, Func Offset: 0x1b8
	// Line 1413, Address: 0x101c974, Func Offset: 0x1c4
	// Line 1414, Address: 0x101c984, Func Offset: 0x1d4
	// Line 1417, Address: 0x101c994, Func Offset: 0x1e4
	// Line 1418, Address: 0x101c9a0, Func Offset: 0x1f0
	// Line 1419, Address: 0x101c9b0, Func Offset: 0x200
	// Line 1421, Address: 0x101c9c4, Func Offset: 0x214
	// Line 1423, Address: 0x101c9d0, Func Offset: 0x220
	// Func End, Address: 0x101c9e4, Func Offset: 0x234
}

