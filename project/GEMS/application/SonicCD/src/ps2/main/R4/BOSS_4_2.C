typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef struct _anon11;

typedef unsigned int(*type_5)(_anon0*);
typedef void(*type_16)(_anon0*);
typedef unsigned int(*type_25)(_anon0*);
typedef unsigned int(*type_29)(_anon0*);

typedef _anon11 type_0[20];
typedef _anon1* type_1[7];
typedef _anon11 type_2[0];
typedef unsigned char type_3[6];
typedef _anon1* type_4[9];
typedef unsigned int(*type_6)(_anon0*)[14];
typedef unsigned char type_7[4];
typedef _anon1* type_8[2];
typedef unsigned char* type_9[1];
typedef unsigned char* type_10[5];
typedef unsigned char type_11[3];
typedef unsigned char type_12[3];
typedef short type_13[20];
typedef char type_14[8];
typedef unsigned char type_15[2];
typedef void(*type_17)(_anon0*)[2];
typedef unsigned char type_18[22];
typedef short type_19[17];
typedef unsigned char* type_20[4];
typedef _anon2 type_21[4];
typedef unsigned char type_22[3];
typedef unsigned char type_23[3];
typedef unsigned short type_24[0];
typedef unsigned int(*type_26)(_anon0*)[9];
typedef _anon0 type_27[128];
typedef unsigned char type_28[4];
typedef unsigned int(*type_30)(_anon0*)[3];
typedef unsigned char type_31[4];
typedef unsigned char type_32[5];
typedef unsigned char type_33[7];
typedef _anon1* type_34[2];

struct _anon0
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

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon11 spra[20];
		_anon11 spr[0];
	};
};

struct _anon2
{
	char xpos;
	char ypos;
	int xspd;
	int yspd;
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

union _anon8
{
	unsigned int l;
	_anon9 w;
	_anon10 b;
};

struct _anon9
{
	unsigned short l;
	unsigned short h;
};

struct _anon10
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

struct _anon11
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

_anon1 egg4_pat0;
_anon1 egg4_pat1;
_anon1 egg4_pat2;
_anon1 egg4_pat3;
_anon1 egg4_pat4;
_anon1 egg4_pat5;
_anon1 egg4_pat6;
_anon1* egg4_pat[7];
unsigned char egg4_pchg0[3];
unsigned char egg4_pchg1[4];
unsigned char egg4_pchg2[3];
unsigned char egg4_pchg3[6];
unsigned char* egg4_pchg[4];
unsigned int(*egg4_act_tbl)(_anon0*)[14];
_anon0 actwk[128];
short scralim_left;
short scralim_n_left;
short scralim_right;
short scralim_n_right;
unsigned char generate_flag;
unsigned char bossstart;
unsigned short scr_dir_tbl[0];
_anon1 egg4meca_pat0;
_anon1 egg4meca_pat1;
_anon1* egg4meca_pat[2];
void(*egg4meca_act_tbl)(_anon0*)[2];
unsigned char egg4awa_pchg0[7];
unsigned char egg4awa_pchg1[3];
unsigned char egg4awa_pchg2[5];
unsigned char egg4awa_pchg3[3];
unsigned char egg4awa_pchg4[4];
unsigned char* egg4awa_pchg[5];
_anon1 egg4awa_pat0;
_anon1 egg4awa_pat1;
_anon1 egg4awa_pat2;
_anon1 egg4awa_pat3;
_anon1 egg4awa_pat4;
_anon1 egg4awa_pat5;
_anon1 egg4awa_pat6;
_anon1 egg4awa_pat7;
_anon1 egg4awa_pat8;
_anon1* egg4awa_pat[9];
unsigned int(*egg4awa_act_tbl)(_anon0*)[9];
_anon1 egg4tama_pat0;
_anon1 egg4tama_pat1;
_anon1* egg4tama_pat[2];
unsigned char egg4tama_pchg0[4];
unsigned char* egg4tama_pchg[1];
unsigned int(*egg4tama_act_tbl)(_anon0*)[3];

void egg4(_anon0* pActwk);
void egg4_warai_chk(_anon0* pActwk);
void egg4_warai(_anon0* pActwk);
unsigned int egg4_ini(_anon0* pActwk);
void make_egg4meca(_anon0* pActwk);
unsigned int egg4_scrset(_anon0* pActwk);
unsigned int egg4_scrreset(_anon0* pActwk);
unsigned int egg4_awademo1(_anon0* pActwk);
void egg4_posiini(_anon0* pActwk);
void make_awa(_anon0* pActwk, _anon0** pNewact);
void make_awa2(_anon0* pActwk, _anon0** pNewact);
unsigned int egg4_awademo2(_anon0* pActwk);
unsigned int egg4_awademo3(_anon0* pActwk);
unsigned int egg4_movel(_anon0* pActwk);
void egg4_hitchk(_anon0* pActwk);
void make_tama(_anon0* pActwk);
void egg4_posiset(_anon0* pActwk);
unsigned int egg4_mover(_anon0* pActwk);
unsigned int egg4_wait(_anon0* pActwk);
unsigned int egg4_die(_anon0* pActwk);
void bom_set(_anon0* pActwk);
unsigned int egg4_esc(_anon0* pActwk);
unsigned int egg4_movec(_anon0* pActwk);
unsigned int egg4_movec2(_anon0* pActwk);
unsigned int egg4_movec3(_anon0* pActwk);
void egg4meca(_anon0* pActwk);
void egg4meca_ini(_anon0* pActwk);
void egg4meca_01(_anon0* pActwk);
void egg4awa(_anon0* pActwk);
unsigned int egg4awa_ini(_anon0* pActwk);
unsigned int egg4awa_deru(_anon0* pActwk);
unsigned int egg4awa_tuku(_anon0* pActwk);
unsigned int egg4awa_hiro(_anon0* pActwk);
void awa_hitchk(_anon0* pActwk);
unsigned int egg4awa_roll(_anon0* pActwk);
unsigned int egg4awa_ychg(_anon0* pActwk);
void ychg_ret(_anon0* pActwk, _anon0* pEggwk);
void ychg_rad_endproc(_anon0* pActwk);
unsigned int egg4awa_del(_anon0* pActwk);
unsigned int egg4awa_out(_anon0* pActwk);
unsigned int egg4awa_chi(_anon0* pActwk);
void egg4tama(_anon0* pActwk);
unsigned int egg4tama_ini(_anon0* pActwk);
unsigned int egg4tama_01(_anon0* pActwk);
unsigned int egg4tama_02(_anon0* pActwk);
unsigned int egg4tama_kill(_anon0* pActwk);
unsigned int frameout_chk(_anon0* pActwk);

// 
// Start address: 0x1022240
void egg4(_anon0* pActwk)
{
	// Line 319, Address: 0x1022240, Func Offset: 0
	// Line 320, Address: 0x102224c, Func Offset: 0xc
	// Line 321, Address: 0x102225c, Func Offset: 0x1c
	// Line 323, Address: 0x102226c, Func Offset: 0x2c
	// Line 324, Address: 0x1022278, Func Offset: 0x38
	// Line 325, Address: 0x10222a0, Func Offset: 0x60
	// Line 326, Address: 0x10222a8, Func Offset: 0x68
	// Line 327, Address: 0x10222b0, Func Offset: 0x70
	// Line 328, Address: 0x10222b8, Func Offset: 0x78
	// Line 329, Address: 0x10222c0, Func Offset: 0x80
	// Line 333, Address: 0x10222c8, Func Offset: 0x88
	// Line 334, Address: 0x1022314, Func Offset: 0xd4
	// Line 335, Address: 0x1022328, Func Offset: 0xe8
	// Line 337, Address: 0x1022334, Func Offset: 0xf4
	// Func End, Address: 0x1022344, Func Offset: 0x104
}

// 
// Start address: 0x1022350
void egg4_warai_chk(_anon0* pActwk)
{
	// Line 343, Address: 0x1022350, Func Offset: 0
	// Line 344, Address: 0x102235c, Func Offset: 0xc
	// Line 346, Address: 0x102236c, Func Offset: 0x1c
	// Line 349, Address: 0x1022394, Func Offset: 0x44
	// Line 352, Address: 0x10223a0, Func Offset: 0x50
	// Func End, Address: 0x10223b0, Func Offset: 0x60
}

// 
// Start address: 0x10223b0
void egg4_warai(_anon0* pActwk)
{
	// Line 358, Address: 0x10223b0, Func Offset: 0
	// Line 359, Address: 0x10223b8, Func Offset: 0x8
	// Line 360, Address: 0x10223c4, Func Offset: 0x14
	// Line 361, Address: 0x10223d0, Func Offset: 0x20
	// Line 362, Address: 0x10223d8, Func Offset: 0x28
	// Line 363, Address: 0x10223e0, Func Offset: 0x30
	// Line 364, Address: 0x10223e8, Func Offset: 0x38
	// Line 365, Address: 0x10223f0, Func Offset: 0x40
	// Func End, Address: 0x10223fc, Func Offset: 0x4c
}

// 
// Start address: 0x1022400
unsigned int egg4_ini(_anon0* pActwk)
{
	// Line 374, Address: 0x1022400, Func Offset: 0
	// Line 375, Address: 0x102240c, Func Offset: 0xc
	// Line 376, Address: 0x102241c, Func Offset: 0x1c
	// Line 377, Address: 0x1022428, Func Offset: 0x28
	// Line 378, Address: 0x1022434, Func Offset: 0x34
	// Line 379, Address: 0x1022440, Func Offset: 0x40
	// Line 380, Address: 0x102244c, Func Offset: 0x4c
	// Line 381, Address: 0x1022458, Func Offset: 0x58
	// Line 382, Address: 0x1022468, Func Offset: 0x68
	// Line 384, Address: 0x1022474, Func Offset: 0x74
	// Line 386, Address: 0x1022480, Func Offset: 0x80
	// Line 387, Address: 0x1022484, Func Offset: 0x84
	// Func End, Address: 0x1022494, Func Offset: 0x94
}

// 
// Start address: 0x10224a0
void make_egg4meca(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 393, Address: 0x10224a0, Func Offset: 0
	// Line 396, Address: 0x10224ac, Func Offset: 0xc
	// Line 397, Address: 0x10224c0, Func Offset: 0x20
	// Line 398, Address: 0x10224f8, Func Offset: 0x58
	// Line 399, Address: 0x1022530, Func Offset: 0x90
	// Line 400, Address: 0x102253c, Func Offset: 0x9c
	// Line 401, Address: 0x102254c, Func Offset: 0xac
	// Line 403, Address: 0x102255c, Func Offset: 0xbc
	// Func End, Address: 0x102256c, Func Offset: 0xcc
}

// 
// Start address: 0x1022570
unsigned int egg4_scrset(_anon0* pActwk)
{
	short xwk;
	// Line 412, Address: 0x1022570, Func Offset: 0
	// Line 415, Address: 0x1022580, Func Offset: 0x10
	// Line 417, Address: 0x102259c, Func Offset: 0x2c
	// Line 418, Address: 0x10225ec, Func Offset: 0x7c
	// Line 420, Address: 0x1022608, Func Offset: 0x98
	// Line 422, Address: 0x1022614, Func Offset: 0xa4
	// Line 423, Address: 0x1022620, Func Offset: 0xb0
	// Line 424, Address: 0x102263c, Func Offset: 0xcc
	// Line 428, Address: 0x1022648, Func Offset: 0xd8
	// Line 432, Address: 0x1022658, Func Offset: 0xe8
	// Line 433, Address: 0x102265c, Func Offset: 0xec
	// Func End, Address: 0x1022670, Func Offset: 0x100
}

// 
// Start address: 0x1022670
unsigned int egg4_scrreset(_anon0* pActwk)
{
	short* pScrdir;
	short sLeft;
	short sRight;
	short sUp;
	short sDown;
	short BgmNo;
	// Line 442, Address: 0x1022670, Func Offset: 0
	// Line 445, Address: 0x1022694, Func Offset: 0x24
	// Line 446, Address: 0x102269c, Func Offset: 0x2c
	// Line 447, Address: 0x10226b0, Func Offset: 0x40
	// Line 448, Address: 0x10226c4, Func Offset: 0x54
	// Line 449, Address: 0x10226d8, Func Offset: 0x68
	// Line 451, Address: 0x10226ec, Func Offset: 0x7c
	// Line 452, Address: 0x1022700, Func Offset: 0x90
	// Line 454, Address: 0x1022714, Func Offset: 0xa4
	// Line 455, Address: 0x1022738, Func Offset: 0xc8
	// Line 459, Address: 0x1022744, Func Offset: 0xd4
	// Line 460, Address: 0x102274c, Func Offset: 0xdc
	// Line 462, Address: 0x102275c, Func Offset: 0xec
	// Line 463, Address: 0x102276c, Func Offset: 0xfc
	// Line 464, Address: 0x1022778, Func Offset: 0x108
	// Line 465, Address: 0x1022780, Func Offset: 0x110
	// Line 468, Address: 0x102278c, Func Offset: 0x11c
	// Line 469, Address: 0x1022798, Func Offset: 0x128
	// Line 470, Address: 0x10227a0, Func Offset: 0x130
	// Line 472, Address: 0x10227ac, Func Offset: 0x13c
	// Line 473, Address: 0x10227b0, Func Offset: 0x140
	// Func End, Address: 0x10227d8, Func Offset: 0x168
}

// 
// Start address: 0x10227e0
unsigned int egg4_awademo1(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 482, Address: 0x10227e0, Func Offset: 0
	// Line 485, Address: 0x10227ec, Func Offset: 0xc
	// Line 486, Address: 0x10227f8, Func Offset: 0x18
	// Line 488, Address: 0x1022808, Func Offset: 0x28
	// Line 489, Address: 0x1022820, Func Offset: 0x40
	// Line 493, Address: 0x1022830, Func Offset: 0x50
	// Line 496, Address: 0x1022860, Func Offset: 0x80
	// Line 498, Address: 0x102286c, Func Offset: 0x8c
	// Line 499, Address: 0x1022874, Func Offset: 0x94
	// Line 501, Address: 0x1022884, Func Offset: 0xa4
	// Line 503, Address: 0x102289c, Func Offset: 0xbc
	// Line 504, Address: 0x10228b4, Func Offset: 0xd4
	// Line 508, Address: 0x10228c0, Func Offset: 0xe0
	// Line 509, Address: 0x10228c4, Func Offset: 0xe4
	// Func End, Address: 0x10228d4, Func Offset: 0xf4
}

// 
// Start address: 0x10228e0
void egg4_posiini(_anon0* pActwk)
{
	// Line 515, Address: 0x10228e0, Func Offset: 0
	// Line 516, Address: 0x10228e8, Func Offset: 0x8
	// Line 518, Address: 0x1022904, Func Offset: 0x24
	// Line 519, Address: 0x1022910, Func Offset: 0x30
	// Line 520, Address: 0x1022918, Func Offset: 0x38
	// Line 521, Address: 0x1022924, Func Offset: 0x44
	// Line 522, Address: 0x102292c, Func Offset: 0x4c
	// Line 523, Address: 0x1022934, Func Offset: 0x54
	// Line 525, Address: 0x1022944, Func Offset: 0x64
	// Func End, Address: 0x1022950, Func Offset: 0x70
}

// 
// Start address: 0x1022950
void make_awa(_anon0* pActwk, _anon0** pNewact)
{
	_anon0* pMakeact;
	// Line 531, Address: 0x1022950, Func Offset: 0
	// Line 534, Address: 0x1022960, Func Offset: 0x10
	// Line 535, Address: 0x1022974, Func Offset: 0x24
	// Line 536, Address: 0x1022980, Func Offset: 0x30
	// Line 537, Address: 0x10229b8, Func Offset: 0x68
	// Line 538, Address: 0x10229c4, Func Offset: 0x74
	// Line 539, Address: 0x10229d4, Func Offset: 0x84
	// Line 541, Address: 0x10229e0, Func Offset: 0x90
	// Func End, Address: 0x10229f0, Func Offset: 0xa0
}

// 
// Start address: 0x10229f0
void make_awa2(_anon0* pActwk, _anon0** pNewact)
{
	// Line 547, Address: 0x10229f0, Func Offset: 0
	// Line 548, Address: 0x1022a00, Func Offset: 0x10
	// Line 549, Address: 0x1022a10, Func Offset: 0x20
	// Line 550, Address: 0x1022a20, Func Offset: 0x30
	// Func End, Address: 0x1022a30, Func Offset: 0x40
}

// 
// Start address: 0x1022a30
unsigned int egg4_awademo2(_anon0* pActwk)
{
	// Line 559, Address: 0x1022a30, Func Offset: 0
	// Line 560, Address: 0x1022a3c, Func Offset: 0xc
	// Line 562, Address: 0x1022a48, Func Offset: 0x18
	// Line 563, Address: 0x1022a6c, Func Offset: 0x3c
	// Line 564, Address: 0x1022a74, Func Offset: 0x44
	// Line 567, Address: 0x1022a80, Func Offset: 0x50
	// Line 568, Address: 0x1022a84, Func Offset: 0x54
	// Func End, Address: 0x1022a94, Func Offset: 0x64
}

// 
// Start address: 0x1022aa0
unsigned int egg4_awademo3(_anon0* pActwk)
{
	// Line 577, Address: 0x1022aa0, Func Offset: 0
	// Line 578, Address: 0x1022aa8, Func Offset: 0x8
	// Line 579, Address: 0x1022acc, Func Offset: 0x2c
	// Line 580, Address: 0x1022ad8, Func Offset: 0x38
	// Line 581, Address: 0x1022ae4, Func Offset: 0x44
	// Line 582, Address: 0x1022af0, Func Offset: 0x50
	// Line 583, Address: 0x1022af8, Func Offset: 0x58
	// Line 584, Address: 0x1022b04, Func Offset: 0x64
	// Line 585, Address: 0x1022b0c, Func Offset: 0x6c
	// Line 588, Address: 0x1022b14, Func Offset: 0x74
	// Line 589, Address: 0x1022b18, Func Offset: 0x78
	// Func End, Address: 0x1022b24, Func Offset: 0x84
}

// 
// Start address: 0x1022b30
unsigned int egg4_movel(_anon0* pActwk)
{
	// Line 598, Address: 0x1022b30, Func Offset: 0
	// Line 599, Address: 0x1022b3c, Func Offset: 0xc
	// Line 601, Address: 0x1022b48, Func Offset: 0x18
	// Line 602, Address: 0x1022b58, Func Offset: 0x28
	// Line 603, Address: 0x1022b74, Func Offset: 0x44
	// Line 607, Address: 0x1022b80, Func Offset: 0x50
	// Line 609, Address: 0x1022b98, Func Offset: 0x68
	// Line 610, Address: 0x1022ba0, Func Offset: 0x70
	// Line 611, Address: 0x1022bac, Func Offset: 0x7c
	// Line 612, Address: 0x1022bbc, Func Offset: 0x8c
	// Line 613, Address: 0x1022bc4, Func Offset: 0x94
	// Line 614, Address: 0x1022bdc, Func Offset: 0xac
	// Line 615, Address: 0x1022bf4, Func Offset: 0xc4
	// Line 618, Address: 0x1022c00, Func Offset: 0xd0
	// Line 619, Address: 0x1022c04, Func Offset: 0xd4
	// Func End, Address: 0x1022c14, Func Offset: 0xe4
}

// 
// Start address: 0x1022c20
void egg4_hitchk(_anon0* pActwk)
{
	// Line 625, Address: 0x1022c20, Func Offset: 0
	// Line 626, Address: 0x1022c2c, Func Offset: 0xc
	// Line 631, Address: 0x1022c3c, Func Offset: 0x1c
	// Line 632, Address: 0x1022c48, Func Offset: 0x28
	// Line 637, Address: 0x1022c60, Func Offset: 0x40
	// Line 638, Address: 0x1022c68, Func Offset: 0x48
	// Line 639, Address: 0x1022c74, Func Offset: 0x54
	// Line 640, Address: 0x1022c84, Func Offset: 0x64
	// Line 641, Address: 0x1022c90, Func Offset: 0x70
	// Line 642, Address: 0x1022cbc, Func Offset: 0x9c
	// Line 643, Address: 0x1022cc8, Func Offset: 0xa8
	// Func End, Address: 0x1022cd8, Func Offset: 0xb8
}

// 
// Start address: 0x1022ce0
void make_tama(_anon0* pActwk)
{
	int i;
	_anon0* pNewact;
	short xposwk;
	int xspdwk;
	_anon2 tama_tbl[4];
	// Line 649, Address: 0x1022ce0, Func Offset: 0
	// Line 677, Address: 0x1022cf8, Func Offset: 0x18
	// Line 678, Address: 0x1022d04, Func Offset: 0x24
	// Line 683, Address: 0x1022d18, Func Offset: 0x38
	// Line 684, Address: 0x1022d50, Func Offset: 0x70
	// Line 685, Address: 0x1022d5c, Func Offset: 0x7c
	// Line 686, Address: 0x1022d6c, Func Offset: 0x8c
	// Line 688, Address: 0x1022d7c, Func Offset: 0x9c
	// Line 689, Address: 0x1022da8, Func Offset: 0xc8
	// Line 691, Address: 0x1022dc4, Func Offset: 0xe4
	// Line 693, Address: 0x1022ddc, Func Offset: 0xfc
	// Line 694, Address: 0x1022df8, Func Offset: 0x118
	// Line 698, Address: 0x1022dfc, Func Offset: 0x11c
	// Line 699, Address: 0x1022e04, Func Offset: 0x124
	// Line 700, Address: 0x1022e30, Func Offset: 0x150
	// Line 701, Address: 0x1022e38, Func Offset: 0x158
	// Line 702, Address: 0x1022e5c, Func Offset: 0x17c
	// Line 703, Address: 0x1022e6c, Func Offset: 0x18c
	// Func End, Address: 0x1022e88, Func Offset: 0x1a8
}

// 
// Start address: 0x1022e90
void egg4_posiset(_anon0* pActwk)
{
	short sinwk;
	short coswk;
	_anon3 xwk;
	_anon3 ywk;
	// Line 709, Address: 0x1022e90, Func Offset: 0
	// Line 713, Address: 0x1022e9c, Func Offset: 0xc
	// Line 714, Address: 0x1022eb4, Func Offset: 0x24
	// Line 715, Address: 0x1022ec8, Func Offset: 0x38
	// Line 716, Address: 0x1022edc, Func Offset: 0x4c
	// Line 717, Address: 0x1022ef4, Func Offset: 0x64
	// Line 718, Address: 0x1022f0c, Func Offset: 0x7c
	// Line 719, Address: 0x1022f18, Func Offset: 0x88
	// Line 721, Address: 0x1022f24, Func Offset: 0x94
	// Line 722, Address: 0x1022f30, Func Offset: 0xa0
	// Line 723, Address: 0x1022f3c, Func Offset: 0xac
	// Line 724, Address: 0x1022f50, Func Offset: 0xc0
	// Line 725, Address: 0x1022f64, Func Offset: 0xd4
	// Func End, Address: 0x1022f74, Func Offset: 0xe4
}

// 
// Start address: 0x1022f80
unsigned int egg4_mover(_anon0* pActwk)
{
	// Line 734, Address: 0x1022f80, Func Offset: 0
	// Line 735, Address: 0x1022f8c, Func Offset: 0xc
	// Line 737, Address: 0x1022f98, Func Offset: 0x18
	// Line 738, Address: 0x1022fa8, Func Offset: 0x28
	// Line 739, Address: 0x1022fc4, Func Offset: 0x44
	// Line 743, Address: 0x1022fd0, Func Offset: 0x50
	// Line 745, Address: 0x1022fe8, Func Offset: 0x68
	// Line 746, Address: 0x1022ff0, Func Offset: 0x70
	// Line 747, Address: 0x1022ffc, Func Offset: 0x7c
	// Line 748, Address: 0x102300c, Func Offset: 0x8c
	// Line 749, Address: 0x1023014, Func Offset: 0x94
	// Line 750, Address: 0x102302c, Func Offset: 0xac
	// Line 751, Address: 0x1023044, Func Offset: 0xc4
	// Line 754, Address: 0x1023050, Func Offset: 0xd0
	// Line 755, Address: 0x1023054, Func Offset: 0xd4
	// Func End, Address: 0x1023064, Func Offset: 0xe4
}

// 
// Start address: 0x1023070
unsigned int egg4_wait(_anon0* pActwk)
{
	char awaposi_cnt_tbl[8];
	char cnt;
	_anon0* pChildact;
	// Line 764, Address: 0x1023070, Func Offset: 0
	// Line 765, Address: 0x1023084, Func Offset: 0x14
	// Line 771, Address: 0x10230b8, Func Offset: 0x48
	// Line 772, Address: 0x10230c8, Func Offset: 0x58
	// Line 773, Address: 0x10230d4, Func Offset: 0x64
	// Line 775, Address: 0x10230e4, Func Offset: 0x74
	// Line 777, Address: 0x1023104, Func Offset: 0x94
	// Line 778, Address: 0x102312c, Func Offset: 0xbc
	// Line 779, Address: 0x1023138, Func Offset: 0xc8
	// Line 780, Address: 0x1023144, Func Offset: 0xd4
	// Line 781, Address: 0x1023154, Func Offset: 0xe4
	// Line 782, Address: 0x1023164, Func Offset: 0xf4
	// Line 784, Address: 0x1023184, Func Offset: 0x114
	// Line 785, Address: 0x102318c, Func Offset: 0x11c
	// Line 787, Address: 0x10231a4, Func Offset: 0x134
	// Line 788, Address: 0x10231b4, Func Offset: 0x144
	// Line 789, Address: 0x10231c0, Func Offset: 0x150
	// Line 791, Address: 0x10231c8, Func Offset: 0x158
	// Line 792, Address: 0x10231d8, Func Offset: 0x168
	// Line 796, Address: 0x10231e4, Func Offset: 0x174
	// Line 797, Address: 0x10231ec, Func Offset: 0x17c
	// Line 802, Address: 0x102320c, Func Offset: 0x19c
	// Line 803, Address: 0x102321c, Func Offset: 0x1ac
	// Line 804, Address: 0x1023228, Func Offset: 0x1b8
	// Line 807, Address: 0x1023254, Func Offset: 0x1e4
	// Line 808, Address: 0x1023258, Func Offset: 0x1e8
	// Func End, Address: 0x1023270, Func Offset: 0x200
}

// 
// Start address: 0x1023270
unsigned int egg4_die(_anon0* pActwk)
{
	// Line 817, Address: 0x1023270, Func Offset: 0
	// Line 818, Address: 0x102327c, Func Offset: 0xc
	// Line 820, Address: 0x102328c, Func Offset: 0x1c
	// Line 821, Address: 0x10232a4, Func Offset: 0x34
	// Line 822, Address: 0x10232b0, Func Offset: 0x40
	// Line 824, Address: 0x10232d0, Func Offset: 0x60
	// Line 825, Address: 0x10232dc, Func Offset: 0x6c
	// Line 826, Address: 0x10232e8, Func Offset: 0x78
	// Line 828, Address: 0x1023314, Func Offset: 0xa4
	// Line 829, Address: 0x1023320, Func Offset: 0xb0
	// Line 831, Address: 0x1023340, Func Offset: 0xd0
	// Line 832, Address: 0x1023348, Func Offset: 0xd8
	// Line 833, Address: 0x1023354, Func Offset: 0xe4
	// Line 834, Address: 0x1023364, Func Offset: 0xf4
	// Line 835, Address: 0x1023374, Func Offset: 0x104
	// Line 836, Address: 0x10233a8, Func Offset: 0x138
	// Line 837, Address: 0x10233dc, Func Offset: 0x16c
	// Line 840, Address: 0x10233e8, Func Offset: 0x178
	// Line 841, Address: 0x10233ec, Func Offset: 0x17c
	// Func End, Address: 0x10233fc, Func Offset: 0x18c
}

// 
// Start address: 0x1023400
void bom_set(_anon0* pActwk)
{
	_anon3 tmwk;
	int wk;
	short bom_tbl[20];
	_anon0* pNewact;
	// Line 847, Address: 0x1023400, Func Offset: 0
	// Line 850, Address: 0x1023410, Func Offset: 0x10
	// Line 864, Address: 0x1023444, Func Offset: 0x44
	// Line 865, Address: 0x1023448, Func Offset: 0x48
	// Line 866, Address: 0x1023454, Func Offset: 0x54
	// Line 867, Address: 0x1023458, Func Offset: 0x58
	// Line 868, Address: 0x1023480, Func Offset: 0x80
	// Line 869, Address: 0x10234a4, Func Offset: 0xa4
	// Line 870, Address: 0x10234b8, Func Offset: 0xb8
	// Line 871, Address: 0x10234dc, Func Offset: 0xdc
	// Line 872, Address: 0x10234f0, Func Offset: 0xf0
	// Line 873, Address: 0x10234fc, Func Offset: 0xfc
	// Line 874, Address: 0x1023510, Func Offset: 0x110
	// Line 875, Address: 0x102351c, Func Offset: 0x11c
	// Line 876, Address: 0x1023528, Func Offset: 0x128
	// Line 877, Address: 0x1023538, Func Offset: 0x138
	// Line 878, Address: 0x1023548, Func Offset: 0x148
	// Line 879, Address: 0x1023570, Func Offset: 0x170
	// Line 880, Address: 0x1023590, Func Offset: 0x190
	// Line 883, Address: 0x102359c, Func Offset: 0x19c
	// Func End, Address: 0x10235b0, Func Offset: 0x1b0
}

// 
// Start address: 0x10235b0
unsigned int egg4_esc(_anon0* pActwk)
{
	// Line 892, Address: 0x10235b0, Func Offset: 0
	// Line 893, Address: 0x10235bc, Func Offset: 0xc
	// Line 894, Address: 0x10235e0, Func Offset: 0x30
	// Line 897, Address: 0x10235ec, Func Offset: 0x3c
	// Line 898, Address: 0x1023604, Func Offset: 0x54
	// Line 900, Address: 0x1023620, Func Offset: 0x70
	// Line 901, Address: 0x102362c, Func Offset: 0x7c
	// Line 904, Address: 0x102365c, Func Offset: 0xac
	// Line 905, Address: 0x1023660, Func Offset: 0xb0
	// Func End, Address: 0x1023670, Func Offset: 0xc0
}

// 
// Start address: 0x1023670
unsigned int egg4_movec(_anon0* pActwk)
{
	_anon3 offswk;
	// Line 914, Address: 0x1023670, Func Offset: 0
	// Line 917, Address: 0x102367c, Func Offset: 0xc
	// Line 919, Address: 0x102368c, Func Offset: 0x1c
	// Line 922, Address: 0x10236c4, Func Offset: 0x54
	// Line 923, Address: 0x10236d0, Func Offset: 0x60
	// Line 924, Address: 0x10236d8, Func Offset: 0x68
	// Line 925, Address: 0x10236e8, Func Offset: 0x78
	// Line 929, Address: 0x10236f0, Func Offset: 0x80
	// Line 930, Address: 0x1023700, Func Offset: 0x90
	// Line 934, Address: 0x1023708, Func Offset: 0x98
	// Line 942, Address: 0x1023714, Func Offset: 0xa4
	// Line 944, Address: 0x102372c, Func Offset: 0xbc
	// Line 945, Address: 0x1023740, Func Offset: 0xd0
	// Line 946, Address: 0x102375c, Func Offset: 0xec
	// Line 950, Address: 0x1023768, Func Offset: 0xf8
	// Line 951, Address: 0x102377c, Func Offset: 0x10c
	// Line 952, Address: 0x1023798, Func Offset: 0x128
	// Line 957, Address: 0x10237a4, Func Offset: 0x134
	// Line 958, Address: 0x10237b4, Func Offset: 0x144
	// Line 959, Address: 0x10237c8, Func Offset: 0x158
	// Line 960, Address: 0x10237d4, Func Offset: 0x164
	// Line 962, Address: 0x10237dc, Func Offset: 0x16c
	// Line 963, Address: 0x10237e8, Func Offset: 0x178
	// Line 964, Address: 0x10237f4, Func Offset: 0x184
	// Line 966, Address: 0x1023808, Func Offset: 0x198
	// Line 967, Address: 0x1023814, Func Offset: 0x1a4
	// Line 969, Address: 0x102381c, Func Offset: 0x1ac
	// Line 970, Address: 0x1023824, Func Offset: 0x1b4
	// Line 971, Address: 0x1023830, Func Offset: 0x1c0
	// Line 973, Address: 0x1023840, Func Offset: 0x1d0
	// Line 974, Address: 0x1023844, Func Offset: 0x1d4
	// Func End, Address: 0x1023854, Func Offset: 0x1e4
}

// 
// Start address: 0x1023860
unsigned int egg4_movec2(_anon0* pActwk)
{
	// Line 983, Address: 0x1023860, Func Offset: 0
	// Line 984, Address: 0x1023868, Func Offset: 0x8
	// Line 985, Address: 0x1023870, Func Offset: 0x10
	// Line 986, Address: 0x1023874, Func Offset: 0x14
	// Func End, Address: 0x1023880, Func Offset: 0x20
}

// 
// Start address: 0x1023880
unsigned int egg4_movec3(_anon0* pActwk)
{
	// Line 995, Address: 0x1023880, Func Offset: 0
	// Line 996, Address: 0x1023888, Func Offset: 0x8
	// Line 997, Address: 0x1023890, Func Offset: 0x10
	// Line 998, Address: 0x1023894, Func Offset: 0x14
	// Func End, Address: 0x10238a0, Func Offset: 0x20
}

// 
// Start address: 0x10238a0
void egg4meca(_anon0* pActwk)
{
	// Line 1035, Address: 0x10238a0, Func Offset: 0
	// Line 1036, Address: 0x10238ac, Func Offset: 0xc
	// Line 1037, Address: 0x10238f0, Func Offset: 0x50
	// Line 1038, Address: 0x10238fc, Func Offset: 0x5c
	// Func End, Address: 0x102390c, Func Offset: 0x6c
}

// 
// Start address: 0x1023910
void egg4meca_ini(_anon0* pActwk)
{
	// Line 1047, Address: 0x1023910, Func Offset: 0
	// Line 1048, Address: 0x102391c, Func Offset: 0xc
	// Line 1049, Address: 0x102392c, Func Offset: 0x1c
	// Line 1050, Address: 0x1023938, Func Offset: 0x28
	// Line 1051, Address: 0x1023944, Func Offset: 0x34
	// Line 1052, Address: 0x1023950, Func Offset: 0x40
	// Line 1053, Address: 0x102395c, Func Offset: 0x4c
	// Line 1054, Address: 0x1023968, Func Offset: 0x58
	// Line 1056, Address: 0x1023978, Func Offset: 0x68
	// Line 1057, Address: 0x1023984, Func Offset: 0x74
	// Func End, Address: 0x1023994, Func Offset: 0x84
}

// 
// Start address: 0x10239a0
void egg4meca_01(_anon0* pActwk)
{
	_anon0* pEggact;
	// Line 1066, Address: 0x10239a0, Func Offset: 0
	// Line 1069, Address: 0x10239ac, Func Offset: 0xc
	// Line 1070, Address: 0x10239d4, Func Offset: 0x34
	// Line 1071, Address: 0x10239e0, Func Offset: 0x40
	// Line 1072, Address: 0x10239ec, Func Offset: 0x4c
	// Func End, Address: 0x10239fc, Func Offset: 0x5c
}

// 
// Start address: 0x1023a00
void egg4awa(_anon0* pActwk)
{
	// Line 1170, Address: 0x1023a00, Func Offset: 0
	// Line 1171, Address: 0x1023a0c, Func Offset: 0xc
	// Line 1172, Address: 0x1023a58, Func Offset: 0x58
	// Line 1174, Address: 0x1023a64, Func Offset: 0x64
	// Func End, Address: 0x1023a74, Func Offset: 0x74
}

// 
// Start address: 0x1023a80
unsigned int egg4awa_ini(_anon0* pActwk)
{
	_anon3 RndNum;
	_anon8 uRndNum;
	// Line 1183, Address: 0x1023a80, Func Offset: 0
	// Line 1187, Address: 0x1023a8c, Func Offset: 0xc
	// Line 1188, Address: 0x1023a98, Func Offset: 0x18
	// Line 1189, Address: 0x1023aa4, Func Offset: 0x24
	// Line 1190, Address: 0x1023ab0, Func Offset: 0x30
	// Line 1191, Address: 0x1023abc, Func Offset: 0x3c
	// Line 1192, Address: 0x1023ac8, Func Offset: 0x48
	// Line 1193, Address: 0x1023ad4, Func Offset: 0x54
	// Line 1195, Address: 0x1023ae4, Func Offset: 0x64
	// Line 1196, Address: 0x1023af0, Func Offset: 0x70
	// Line 1197, Address: 0x1023b00, Func Offset: 0x80
	// Line 1198, Address: 0x1023b1c, Func Offset: 0x9c
	// Line 1200, Address: 0x1023b30, Func Offset: 0xb0
	// Line 1201, Address: 0x1023b3c, Func Offset: 0xbc
	// Line 1202, Address: 0x1023b44, Func Offset: 0xc4
	// Line 1206, Address: 0x1023b50, Func Offset: 0xd0
	// Line 1208, Address: 0x1023b5c, Func Offset: 0xdc
	// Line 1209, Address: 0x1023b68, Func Offset: 0xe8
	// Line 1210, Address: 0x1023b6c, Func Offset: 0xec
	// Line 1211, Address: 0x1023b8c, Func Offset: 0x10c
	// Line 1213, Address: 0x1023b98, Func Offset: 0x118
	// Line 1214, Address: 0x1023ba4, Func Offset: 0x124
	// Func End, Address: 0x1023bb4, Func Offset: 0x134
}

// 
// Start address: 0x1023bc0
unsigned int egg4awa_deru(_anon0* pActwk)
{
	_anon0* pEggact;
	short xwk;
	// Line 1223, Address: 0x1023bc0, Func Offset: 0
	// Line 1227, Address: 0x1023bd4, Func Offset: 0x14
	// Line 1228, Address: 0x1023bec, Func Offset: 0x2c
	// Line 1230, Address: 0x1023bfc, Func Offset: 0x3c
	// Line 1231, Address: 0x1023c18, Func Offset: 0x58
	// Line 1235, Address: 0x1023c2c, Func Offset: 0x6c
	// Line 1236, Address: 0x1023c54, Func Offset: 0x94
	// Line 1238, Address: 0x1023c7c, Func Offset: 0xbc
	// Line 1240, Address: 0x1023cc4, Func Offset: 0x104
	// Line 1241, Address: 0x1023cd0, Func Offset: 0x110
	// Line 1242, Address: 0x1023cd8, Func Offset: 0x118
	// Line 1246, Address: 0x1023ce0, Func Offset: 0x120
	// Line 1247, Address: 0x1023ce8, Func Offset: 0x128
	// Line 1248, Address: 0x1023cf0, Func Offset: 0x130
	// Line 1249, Address: 0x1023d0c, Func Offset: 0x14c
	// Line 1250, Address: 0x1023d14, Func Offset: 0x154
	// Line 1251, Address: 0x1023d20, Func Offset: 0x160
	// Line 1252, Address: 0x1023d2c, Func Offset: 0x16c
	// Line 1253, Address: 0x1023d38, Func Offset: 0x178
	// Line 1254, Address: 0x1023d44, Func Offset: 0x184
	// Line 1259, Address: 0x1023d50, Func Offset: 0x190
	// Line 1262, Address: 0x1023d68, Func Offset: 0x1a8
	// Line 1263, Address: 0x1023d80, Func Offset: 0x1c0
	// Line 1265, Address: 0x1023d8c, Func Offset: 0x1cc
	// Line 1266, Address: 0x1023da4, Func Offset: 0x1e4
	// Line 1267, Address: 0x1023db0, Func Offset: 0x1f0
	// Line 1271, Address: 0x1023db8, Func Offset: 0x1f8
	// Line 1272, Address: 0x1023dcc, Func Offset: 0x20c
	// Line 1273, Address: 0x1023dd0, Func Offset: 0x210
	// Func End, Address: 0x1023de8, Func Offset: 0x228
}

// 
// Start address: 0x1023df0
unsigned int egg4awa_tuku(_anon0* pActwk)
{
	_anon0* pEggact;
	short RadSpd;
	// Line 1282, Address: 0x1023df0, Func Offset: 0
	// Line 1286, Address: 0x1023e04, Func Offset: 0x14
	// Line 1287, Address: 0x1023e2c, Func Offset: 0x3c
	// Line 1288, Address: 0x1023e38, Func Offset: 0x48
	// Line 1289, Address: 0x1023e44, Func Offset: 0x54
	// Line 1291, Address: 0x1023e50, Func Offset: 0x60
	// Line 1292, Address: 0x1023e70, Func Offset: 0x80
	// Line 1296, Address: 0x1023e7c, Func Offset: 0x8c
	// Line 1297, Address: 0x1023e8c, Func Offset: 0x9c
	// Line 1298, Address: 0x1023ea0, Func Offset: 0xb0
	// Line 1299, Address: 0x1023ea8, Func Offset: 0xb8
	// Line 1300, Address: 0x1023eb0, Func Offset: 0xc0
	// Line 1301, Address: 0x1023ebc, Func Offset: 0xcc
	// Line 1302, Address: 0x1023ec8, Func Offset: 0xd8
	// Line 1305, Address: 0x1023ed4, Func Offset: 0xe4
	// Line 1306, Address: 0x1023ef4, Func Offset: 0x104
	// Line 1307, Address: 0x1023f10, Func Offset: 0x120
	// Line 1308, Address: 0x1023f18, Func Offset: 0x128
	// Line 1309, Address: 0x1023f24, Func Offset: 0x134
	// Line 1312, Address: 0x1023f30, Func Offset: 0x140
	// Line 1313, Address: 0x1023f34, Func Offset: 0x144
	// Func End, Address: 0x1023f4c, Func Offset: 0x15c
}

// 
// Start address: 0x1023f50
unsigned int egg4awa_hiro(_anon0* pActwk)
{
	int flg;
	_anon0* pEggact;
	// Line 1322, Address: 0x1023f50, Func Offset: 0
	// Line 1326, Address: 0x1023f64, Func Offset: 0x14
	// Line 1327, Address: 0x1023f7c, Func Offset: 0x2c
	// Line 1331, Address: 0x1023f88, Func Offset: 0x38
	// Line 1333, Address: 0x1023f8c, Func Offset: 0x3c
	// Line 1334, Address: 0x1023fb4, Func Offset: 0x64
	// Line 1335, Address: 0x1023fc0, Func Offset: 0x70
	// Line 1337, Address: 0x1023fcc, Func Offset: 0x7c
	// Line 1338, Address: 0x1023ff0, Func Offset: 0xa0
	// Line 1339, Address: 0x1024000, Func Offset: 0xb0
	// Line 1341, Address: 0x1024008, Func Offset: 0xb8
	// Line 1342, Address: 0x1024014, Func Offset: 0xc4
	// Line 1346, Address: 0x1024018, Func Offset: 0xc8
	// Line 1347, Address: 0x102403c, Func Offset: 0xec
	// Line 1348, Address: 0x102404c, Func Offset: 0xfc
	// Line 1350, Address: 0x1024054, Func Offset: 0x104
	// Line 1351, Address: 0x1024060, Func Offset: 0x110
	// Line 1355, Address: 0x1024064, Func Offset: 0x114
	// Line 1357, Address: 0x1024078, Func Offset: 0x128
	// Line 1358, Address: 0x1024088, Func Offset: 0x138
	// Line 1360, Address: 0x1024090, Func Offset: 0x140
	// Line 1364, Address: 0x10240a0, Func Offset: 0x150
	// Line 1366, Address: 0x10240ac, Func Offset: 0x15c
	// Line 1367, Address: 0x10240c4, Func Offset: 0x174
	// Line 1368, Address: 0x10240d0, Func Offset: 0x180
	// Line 1372, Address: 0x10240d8, Func Offset: 0x188
	// Line 1373, Address: 0x10240e4, Func Offset: 0x194
	// Line 1374, Address: 0x10240f0, Func Offset: 0x1a0
	// Line 1376, Address: 0x10240fc, Func Offset: 0x1ac
	// Line 1377, Address: 0x1024114, Func Offset: 0x1c4
	// Line 1378, Address: 0x1024120, Func Offset: 0x1d0
	// Line 1381, Address: 0x102412c, Func Offset: 0x1dc
	// Line 1385, Address: 0x102413c, Func Offset: 0x1ec
	// Line 1387, Address: 0x1024150, Func Offset: 0x200
	// Line 1388, Address: 0x1024154, Func Offset: 0x204
	// Func End, Address: 0x102416c, Func Offset: 0x21c
}

// 
// Start address: 0x1024170
void awa_hitchk(_anon0* pActwk)
{
	_anon0* pEggact;
	unsigned char flgwk;
	// Line 1394, Address: 0x1024170, Func Offset: 0
	// Line 1398, Address: 0x1024184, Func Offset: 0x14
	// Line 1399, Address: 0x10241ac, Func Offset: 0x3c
	// Line 1400, Address: 0x10241c0, Func Offset: 0x50
	// Line 1405, Address: 0x10241d0, Func Offset: 0x60
	// Line 1406, Address: 0x10241d8, Func Offset: 0x68
	// Line 1407, Address: 0x10241e4, Func Offset: 0x74
	// Line 1409, Address: 0x10241f4, Func Offset: 0x84
	// Line 1410, Address: 0x1024200, Func Offset: 0x90
	// Line 1411, Address: 0x102420c, Func Offset: 0x9c
	// Line 1416, Address: 0x1024214, Func Offset: 0xa4
	// Line 1417, Address: 0x1024220, Func Offset: 0xb0
	// Line 1418, Address: 0x102422c, Func Offset: 0xbc
	// Line 1419, Address: 0x1024258, Func Offset: 0xe8
	// Line 1420, Address: 0x1024264, Func Offset: 0xf4
	// Line 1421, Address: 0x1024270, Func Offset: 0x100
	// Func End, Address: 0x1024288, Func Offset: 0x118
}

// 
// Start address: 0x1024290
unsigned int egg4awa_roll(_anon0* pActwk)
{
	_anon0* pEggact;
	// Line 1430, Address: 0x1024290, Func Offset: 0
	// Line 1433, Address: 0x10242a0, Func Offset: 0x10
	// Line 1434, Address: 0x10242c8, Func Offset: 0x38
	// Line 1435, Address: 0x10242d4, Func Offset: 0x44
	// Line 1437, Address: 0x10242e0, Func Offset: 0x50
	// Line 1438, Address: 0x10242f4, Func Offset: 0x64
	// Line 1439, Address: 0x1024300, Func Offset: 0x70
	// Line 1443, Address: 0x1024314, Func Offset: 0x84
	// Line 1444, Address: 0x1024328, Func Offset: 0x98
	// Line 1445, Address: 0x1024334, Func Offset: 0xa4
	// Line 1446, Address: 0x1024340, Func Offset: 0xb0
	// Line 1450, Address: 0x1024354, Func Offset: 0xc4
	// Line 1451, Address: 0x1024360, Func Offset: 0xd0
	// Line 1453, Address: 0x1024374, Func Offset: 0xe4
	// Line 1454, Address: 0x1024384, Func Offset: 0xf4
	// Line 1456, Address: 0x102438c, Func Offset: 0xfc
	// Line 1460, Address: 0x102439c, Func Offset: 0x10c
	// Line 1461, Address: 0x10243a8, Func Offset: 0x118
	// Line 1462, Address: 0x10243ac, Func Offset: 0x11c
	// Func End, Address: 0x10243c0, Func Offset: 0x130
}

// 
// Start address: 0x10243c0
unsigned int egg4awa_ychg(_anon0* pActwk)
{
	_anon0* pEggact;
	// Line 1471, Address: 0x10243c0, Func Offset: 0
	// Line 1474, Address: 0x10243d0, Func Offset: 0x10
	// Line 1476, Address: 0x10243dc, Func Offset: 0x1c
	// Line 1477, Address: 0x1024404, Func Offset: 0x44
	// Line 1478, Address: 0x1024410, Func Offset: 0x50
	// Line 1480, Address: 0x102441c, Func Offset: 0x5c
	// Line 1482, Address: 0x102442c, Func Offset: 0x6c
	// Line 1483, Address: 0x1024440, Func Offset: 0x80
	// Line 1484, Address: 0x1024464, Func Offset: 0xa4
	// Line 1485, Address: 0x1024474, Func Offset: 0xb4
	// Line 1487, Address: 0x102447c, Func Offset: 0xbc
	// Line 1488, Address: 0x1024488, Func Offset: 0xc8
	// Line 1491, Address: 0x1024494, Func Offset: 0xd4
	// Line 1492, Address: 0x10244a0, Func Offset: 0xe0
	// Line 1493, Address: 0x10244b0, Func Offset: 0xf0
	// Line 1495, Address: 0x10244b8, Func Offset: 0xf8
	// Line 1497, Address: 0x10244c0, Func Offset: 0x100
	// Line 1499, Address: 0x10244dc, Func Offset: 0x11c
	// Line 1502, Address: 0x10244ec, Func Offset: 0x12c
	// Line 1505, Address: 0x10244fc, Func Offset: 0x13c
	// Line 1506, Address: 0x1024500, Func Offset: 0x140
	// Func End, Address: 0x1024514, Func Offset: 0x154
}

// 
// Start address: 0x1024520
void ychg_ret(_anon0* pActwk, _anon0* pEggwk)
{
	short spdwk;
	unsigned char radwk;
	// Line 1512, Address: 0x1024520, Func Offset: 0
	// Line 1516, Address: 0x1024538, Func Offset: 0x18
	// Line 1518, Address: 0x1024544, Func Offset: 0x24
	// Line 1519, Address: 0x1024560, Func Offset: 0x40
	// Line 1523, Address: 0x102456c, Func Offset: 0x4c
	// Line 1525, Address: 0x102457c, Func Offset: 0x5c
	// Line 1526, Address: 0x1024594, Func Offset: 0x74
	// Line 1527, Address: 0x10245ac, Func Offset: 0x8c
	// Line 1531, Address: 0x10245b4, Func Offset: 0x94
	// Line 1533, Address: 0x10245c4, Func Offset: 0xa4
	// Line 1534, Address: 0x10245d0, Func Offset: 0xb0
	// Line 1536, Address: 0x10245d8, Func Offset: 0xb8
	// Line 1539, Address: 0x10245e4, Func Offset: 0xc4
	// Line 1540, Address: 0x10245f0, Func Offset: 0xd0
	// Func End, Address: 0x1024608, Func Offset: 0xe8
}

// 
// Start address: 0x1024610
void ychg_rad_endproc(_anon0* pActwk)
{
	unsigned short radwk;
	// Line 1546, Address: 0x1024610, Func Offset: 0
	// Line 1549, Address: 0x102461c, Func Offset: 0xc
	// Line 1551, Address: 0x1024628, Func Offset: 0x18
	// Line 1553, Address: 0x1024638, Func Offset: 0x28
	// Line 1563, Address: 0x1024650, Func Offset: 0x40
	// Line 1565, Address: 0x1024658, Func Offset: 0x48
	// Line 1567, Address: 0x1024670, Func Offset: 0x60
	// Func End, Address: 0x1024680, Func Offset: 0x70
}

// 
// Start address: 0x1024680
unsigned int egg4awa_del(_anon0* pActwk)
{
	// Line 1576, Address: 0x1024680, Func Offset: 0
	// Line 1577, Address: 0x102468c, Func Offset: 0xc
	// Line 1579, Address: 0x10246a0, Func Offset: 0x20
	// Line 1580, Address: 0x10246a4, Func Offset: 0x24
	// Func End, Address: 0x10246b4, Func Offset: 0x34
}

// 
// Start address: 0x10246c0
unsigned int egg4awa_out(_anon0* pActwk)
{
	// Line 1589, Address: 0x10246c0, Func Offset: 0
	// Line 1590, Address: 0x10246cc, Func Offset: 0xc
	// Line 1592, Address: 0x10246d8, Func Offset: 0x18
	// Line 1593, Address: 0x10246dc, Func Offset: 0x1c
	// Func End, Address: 0x10246ec, Func Offset: 0x2c
}

// 
// Start address: 0x10246f0
unsigned int egg4awa_chi(_anon0* pActwk)
{
	_anon0* pEggact;
	short cntwk;
	short radwk;
	short rad_tbl[17];
	// Line 1602, Address: 0x10246f0, Func Offset: 0
	// Line 1625, Address: 0x1024708, Func Offset: 0x18
	// Line 1627, Address: 0x1024714, Func Offset: 0x24
	// Line 1628, Address: 0x102473c, Func Offset: 0x4c
	// Line 1629, Address: 0x1024748, Func Offset: 0x58
	// Line 1630, Address: 0x1024754, Func Offset: 0x64
	// Line 1631, Address: 0x1024768, Func Offset: 0x78
	// Line 1633, Address: 0x102477c, Func Offset: 0x8c
	// Line 1635, Address: 0x10247a0, Func Offset: 0xb0
	// Line 1636, Address: 0x10247b0, Func Offset: 0xc0
	// Line 1637, Address: 0x10247d4, Func Offset: 0xe4
	// Line 1638, Address: 0x10247e8, Func Offset: 0xf8
	// Line 1640, Address: 0x10247f0, Func Offset: 0x100
	// Line 1642, Address: 0x10247fc, Func Offset: 0x10c
	// Line 1643, Address: 0x1024808, Func Offset: 0x118
	// Line 1644, Address: 0x1024814, Func Offset: 0x124
	// Line 1648, Address: 0x1024820, Func Offset: 0x130
	// Line 1649, Address: 0x102482c, Func Offset: 0x13c
	// Line 1651, Address: 0x1024840, Func Offset: 0x150
	// Line 1652, Address: 0x1024850, Func Offset: 0x160
	// Line 1654, Address: 0x1024858, Func Offset: 0x168
	// Line 1658, Address: 0x1024868, Func Offset: 0x178
	// Line 1660, Address: 0x1024874, Func Offset: 0x184
	// Line 1661, Address: 0x1024878, Func Offset: 0x188
	// Func End, Address: 0x1024894, Func Offset: 0x1a4
}

// 
// Start address: 0x10248a0
void egg4tama(_anon0* pActwk)
{
	// Line 1710, Address: 0x10248a0, Func Offset: 0
	// Line 1711, Address: 0x10248ac, Func Offset: 0xc
	// Line 1712, Address: 0x10248f8, Func Offset: 0x58
	// Line 1713, Address: 0x102490c, Func Offset: 0x6c
	// Line 1715, Address: 0x1024918, Func Offset: 0x78
	// Func End, Address: 0x1024928, Func Offset: 0x88
}

// 
// Start address: 0x1024930
unsigned int egg4tama_ini(_anon0* pActwk)
{
	// Line 1721, Address: 0x1024930, Func Offset: 0
	// Line 1722, Address: 0x102493c, Func Offset: 0xc
	// Line 1723, Address: 0x102494c, Func Offset: 0x1c
	// Line 1724, Address: 0x1024958, Func Offset: 0x28
	// Line 1725, Address: 0x1024964, Func Offset: 0x34
	// Line 1726, Address: 0x1024970, Func Offset: 0x40
	// Line 1727, Address: 0x102497c, Func Offset: 0x4c
	// Line 1728, Address: 0x1024988, Func Offset: 0x58
	// Line 1730, Address: 0x1024998, Func Offset: 0x68
	// Line 1731, Address: 0x10249a4, Func Offset: 0x74
	// Func End, Address: 0x10249b4, Func Offset: 0x84
}

// 
// Start address: 0x10249c0
unsigned int egg4tama_01(_anon0* pActwk)
{
	_anon0* pEggact;
	// Line 1737, Address: 0x10249c0, Func Offset: 0
	// Line 1740, Address: 0x10249d0, Func Offset: 0x10
	// Line 1741, Address: 0x10249f8, Func Offset: 0x38
	// Line 1742, Address: 0x1024a0c, Func Offset: 0x4c
	// Line 1745, Address: 0x1024a20, Func Offset: 0x60
	// Line 1746, Address: 0x1024a2c, Func Offset: 0x6c
	// Line 1747, Address: 0x1024a38, Func Offset: 0x78
	// Line 1748, Address: 0x1024a50, Func Offset: 0x90
	// Line 1750, Address: 0x1024a68, Func Offset: 0xa8
	// Line 1751, Address: 0x1024a8c, Func Offset: 0xcc
	// Line 1752, Address: 0x1024a98, Func Offset: 0xd8
	// Line 1753, Address: 0x1024aa4, Func Offset: 0xe4
	// Line 1757, Address: 0x1024ab4, Func Offset: 0xf4
	// Line 1758, Address: 0x1024ab8, Func Offset: 0xf8
	// Func End, Address: 0x1024acc, Func Offset: 0x10c
}

// 
// Start address: 0x1024ad0
unsigned int egg4tama_02(_anon0* pActwk)
{
	_anon0* pEggact;
	// Line 1764, Address: 0x1024ad0, Func Offset: 0
	// Line 1767, Address: 0x1024ae0, Func Offset: 0x10
	// Line 1768, Address: 0x1024b08, Func Offset: 0x38
	// Line 1769, Address: 0x1024b1c, Func Offset: 0x4c
	// Line 1772, Address: 0x1024b30, Func Offset: 0x60
	// Line 1773, Address: 0x1024b48, Func Offset: 0x78
	// Line 1775, Address: 0x1024b60, Func Offset: 0x90
	// Line 1776, Address: 0x1024b74, Func Offset: 0xa4
	// Line 1779, Address: 0x1024b88, Func Offset: 0xb8
	// Line 1780, Address: 0x1024b8c, Func Offset: 0xbc
	// Func End, Address: 0x1024ba0, Func Offset: 0xd0
}

// 
// Start address: 0x1024ba0
unsigned int egg4tama_kill(_anon0* pActwk)
{
	// Line 1786, Address: 0x1024ba0, Func Offset: 0
	// Line 1787, Address: 0x1024bac, Func Offset: 0xc
	// Line 1789, Address: 0x1024bb8, Func Offset: 0x18
	// Line 1790, Address: 0x1024bbc, Func Offset: 0x1c
	// Func End, Address: 0x1024bcc, Func Offset: 0x2c
}

// 
// Start address: 0x1024bd0
unsigned int frameout_chk(_anon0* pActwk)
{
	// Line 1796, Address: 0x1024bd0, Func Offset: 0
	// Line 1797, Address: 0x1024bd8, Func Offset: 0x8
	// Line 1800, Address: 0x1024c2c, Func Offset: 0x5c
	// Line 1803, Address: 0x1024c38, Func Offset: 0x68
	// Line 1805, Address: 0x1024c3c, Func Offset: 0x6c
	// Func End, Address: 0x1024c48, Func Offset: 0x78
}

