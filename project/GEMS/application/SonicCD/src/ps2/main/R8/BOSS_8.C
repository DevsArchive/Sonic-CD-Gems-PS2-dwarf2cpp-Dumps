typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct _anon10;

typedef int(*type_13)(_anon0*, _anon0*, _anon0*);
typedef void(*type_17)(_anon0*, _anon0*);
typedef void(*type_23)(_anon0*, _anon0*);
typedef unsigned int(*type_41)(_anon0*);

typedef short type_0[32];
typedef unsigned char type_1[6];
typedef _anon10 type_2[20];
typedef unsigned char type_3[3];
typedef char* type_4[5];
typedef _anon10 type_5[0];
typedef _anon1 type_6[16];
typedef char type_7[4];
typedef _anon2* type_8[16];
typedef _anon1 type_9[16];
typedef char type_10[2];
typedef _anon2* type_11[16];
typedef _anon2* type_12[2];
typedef int(*type_14)(_anon0*, _anon0*, _anon0*)[6];
typedef _anon2* type_15[16];
typedef short type_16[6];
typedef char* type_18[4];
typedef void(*type_19)(_anon0*, _anon0*)[10];
typedef char type_20[12];
typedef _anon3* type_21[5];
typedef _anon3 type_22[29];
typedef void(*type_24)(_anon0*, _anon0*)[28];
typedef _anon3 type_25[13];
typedef unsigned char type_26[2];
typedef unsigned char type_27[3];
typedef unsigned char type_28[22];
typedef short* type_29[5];
typedef unsigned char type_30[3];
typedef short type_31[32];
typedef unsigned char type_32[6];
typedef _anon1* type_33[6];
typedef char type_34[4];
typedef _anon1 type_35[16];
typedef char type_36[2];
typedef _anon2** type_37[6];
typedef _anon2* type_38[4];
typedef _anon0 type_39[128];
typedef short* type_40[2];
typedef unsigned int(*type_42)(_anon0*)[2];
typedef _anon2* type_43[9];
typedef short type_44[6];
typedef char type_45[16];
typedef short type_46[16];
typedef _anon4 type_47[5];
typedef _anon2* type_48[16];
typedef _anon3 type_49[29];
typedef _anon3 type_50[23];
typedef _anon2* type_51[16];
typedef _anon2* type_52[16];
typedef unsigned char* type_53[6];
typedef unsigned char type_54[4];

struct _anon0
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon2** patbase;
	_anon5 xposi;
	_anon5 yposi;
	_anon8 xspeed;
	_anon8 yspeed;
	_anon8 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon8 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon8 direc;
	_anon8 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon1
{
	short xOffs;
	short yOffs;
	short xDst;
	short yDst;
	short ColiNo;
};

struct _anon2
{
	unsigned char cnt;
	union
	{
		_anon10 spra[20];
		_anon10 spr[0];
	};
};

struct _anon3
{
	unsigned char r_no;
	unsigned char Dummy;
	short param;
};

struct _anon4
{
	int X_Speed;
	int Y_Speed;
	char Roll_Speed;
	char Dummy;
};

union _anon5
{
	int l;
	_anon6 w;
	_anon7 b;
};

struct _anon6
{
	short l;
	short h;
};

struct _anon7
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon8
{
	short w;
	_anon9 b;
};

struct _anon9
{
	char l;
	char h;
};

struct _anon10
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char egg8_pchg0[3];
unsigned char egg8_pchg1[6];
unsigned char egg8_pchg2[6];
unsigned char egg8_pchg3[3];
unsigned char egg8_pchg4[4];
unsigned char egg8_pchg5[3];
unsigned char* egg8_pchg[6];
_anon2 egg8_pat0;
_anon2 egg8_pat1;
_anon2 egg8_pat2;
_anon2 egg8_pat3;
_anon2 egg8_pat4;
_anon2 egg8_pat5;
_anon2 egg8_pat6;
_anon2 egg8_pat7;
_anon2 egg8_pat8;
_anon2* egg8_pat[9];
void(*egg8_act_tbl)(_anon0*, _anon0*)[28];
_anon0 actwk[128];
short scralim_left;
short scralim_n_left;
unsigned char bossflag;
unsigned char bossstart;
short scralim_right;
short scralim_n_right;
short spin_tbl1[32];
short spin_tbl3[32];
short* spin_tbl[5];
_anon3 egg8acttbl1[13];
_anon3 egg8acttbl2[23];
_anon3 egg8acttbl3[29];
_anon3 egg8acttbl4[29];
_anon3* egg8acttbl[5];
_anon2 meca_pat0;
_anon2 meca_pat1;
_anon2 meca_pat2;
_anon2 meca_pat3;
_anon2* egg8meca_pat[4];
void(*meca_act_tbl)(_anon0*, _anon0*)[10];
_anon2 hane0_1_pat00;
_anon2 hane0_1_pat01;
_anon2 hane0_1_pat02;
_anon2 hane0_1_pat03;
_anon2 hane0_1_pat04;
_anon2* egg8hane0_pat1[16];
_anon2 hane0_2_pat00;
_anon2 hane0_2_pat01;
_anon2 hane0_2_pat02;
_anon2 hane0_2_pat03;
_anon2 hane0_2_pat04;
_anon2* egg8hane0_pat2[16];
_anon2 hane0_3_pat00;
_anon2 hane0_3_pat01;
_anon2 hane0_3_pat02;
_anon2 hane0_3_pat03;
_anon2 hane0_3_pat04;
_anon2* egg8hane0_pat3[16];
_anon2 hane1_pat00;
_anon2 hane1_pat01;
_anon2* egg8hane1_pat[16];
_anon2 hane2_1_pat00;
_anon2 hane2_1_pat01;
_anon2 hane2_1_pat02;
_anon2 hane2_1_pat03;
_anon2 hane2_1_pat04;
_anon2* egg8hane2_pat1[16];
_anon2 hane2_2_pat00;
_anon2 hane2_2_pat01;
_anon2 hane2_2_pat02;
_anon2 hane2_2_pat03;
_anon2 hane2_2_pat04;
_anon2* egg8hane2_pat2[16];
_anon2** hane_base_tbl[6];
int(*hane_act_tbl)(_anon0*, _anon0*, _anon0*)[6];
char reset_tbl_1mai[2];
char reset_tbl_2mai[2];
char reset_tbl_3mai[4];
char reset_tbl_4mai[4];
char* reset_pattbl[5];
char hane_reset_tbl_2mai[12];
char hane_reset_tbl_3mai[16];
char* hane_no_reset_tbl[4];
_anon1 hane0_offs_tbl1[16];
_anon1 hane1_offs_tbl[16];
_anon1 hane2_offs_tbl[16];
_anon1* hane_offs_tbl[6];
short hibana0[6];
short hibana1[6];
short* hibana_offs_tbl[2];
_anon2 hibana_pat0;
_anon2 hibana_pat1;
_anon2* egg8hibana_pat[2];
unsigned int(*hibana_act_tbl)(_anon0*)[2];

void egg8(_anon0* pActwk);
void egg8_ini(_anon0* pActwk);
void egg8_scrset(_anon0* pActwk, _anon0* pMecawk);
void egg8_open1(_anon0* pActwk, _anon0* pMecawk);
void egg8_wait(_anon0* pActwk);
void egg8_move_r(_anon0* pActwk);
void egg8_move_l(_anon0* pActwk);
void egg8_move_d(_anon0* pActwk);
void egg8_move_u(_anon0* pActwk);
void egg8_move_c(_anon0* pActwk);
void egg8_move_escu(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_roll(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_stop(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_chg1(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_chg2(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_chg3(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_fire(_anon0* pActwk, _anon0* pMecawk);
void egg8_hane_reset(_anon0* pActwk, _anon0* pMecawk);
void egg8_spin_d(_anon0* pActwk, _anon0* pMecawk);
void egg8_spin_l(_anon0* pActwk, _anon0* pMecawk);
void egg8_spin_r(_anon0* pActwk, _anon0* pMecawk);
void egg8_target(_anon0* pActwk, _anon0* pMecawk);
void egg8target_ini(_anon0* pActwk, _anon0* pMecawk);
void egg8target_roll(_anon0* pActwk, _anon0* pMecawk);
void egg8target_move(_anon0* pActwk, _anon0* pMecawk);
void egg8_targetreset(_anon0* pActwk, _anon0* pMecawk);
void egg8_tobi_d(_anon0* pActwk, _anon0* pMecawk);
void egg8_tobi(_anon0* pActwk, _anon0* pMecawk);
void egg8_tobi_u(_anon0* pActwk);
void egg8_dead(_anon0* pActwk, _anon0* pMecawk);
void egg8_esc(_anon0* pActwk);
void egg8_esc2(_anon0* pActwk);
void egg8_warai_chk(_anon0* pActwk);
void egg8_colichk(_anon0* pActwk, _anon0* pPlayerwk, _anon0* pMecawk);
void next_action(_anon0* pActwk);
void egg8meca(_anon0* pActwk);
void egg8meca_ini(_anon0* pActwk);
void egg8meca_normal(_anon0* pActwk, _anon0* pEggwk);
void egg8meca_spin(_anon0* pActwk, _anon0* pEggwk);
void egg8meca_chg1(_anon0* pActwk);
void egg8meca_chg2(_anon0* pActwk);
void egg8meca_chg3(_anon0* pActwk, _anon0* pEggwk);
void egg8meca_fire(_anon0* pActwk, _anon0* pEggwk);
void egg8meca_hane_reset(_anon0* pActwk, _anon0* pEggwk);
void egg8meca_dead(_anon0* pActwk, _anon0* pEggwk);
void egg8meca_tobi(_anon0* pActwk, _anon0* pEggwk);
void hane_ctrl(_anon0* pActwk);
void hane_stop(_anon0* pActwk);
void hane_roll(_anon0* pActwk);
void futa_roll(_anon0* pActwk);
void egg8hane(_anon0* pActwk);
int egg8hane_ini(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk);
int egg8hane_demo(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk);
int egg8hane_normal(_anon0* pActwk, _anon0* pMecawk);
int egg8hane_fire1(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk);
int egg8hane_wait(_anon0* pActwk, _anon0* pMecawk);
int egg8hane_kill(_anon0* pActwk);
void hane_no_reset(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk);
void egg8hane_posiset(_anon0* pActwk, _anon0* pMecawk);
void hane_offs_set(_anon0* pActwk, _anon0* pMecawk);
void hane_rol_l(_anon0* pActwk);
void hane_rol_r(_anon0* pActwk);
void rol_sound(_anon0* pActwk);
void egg8hibana(_anon0* pActwk);
unsigned int egg8hibana_ini(_anon0* pActwk);
unsigned int egg8hibana_1(_anon0* pActwk);
void make_meca(_anon0* pActwk);
void make_hane(_anon0* pActwk);
void make_hibana(_anon0* pActwk);
void egg8_spd_set(_anon0* pActwk, _anon0* pMecawk);
void tobi_set(_anon0* pActwk);
void bom_set(_anon0* pActwk);

// 
// Start address: 0x101cac0
void egg8(_anon0* pActwk)
{
	_anon0* pPlayerwk;
	_anon0* pMecawk;
	short idx;
	// Line 532, Address: 0x101cac0, Func Offset: 0
	// Line 536, Address: 0x101cad8, Func Offset: 0x18
	// Line 538, Address: 0x101cae0, Func Offset: 0x20
	// Line 539, Address: 0x101cb00, Func Offset: 0x40
	// Line 540, Address: 0x101cb20, Func Offset: 0x60
	// Line 545, Address: 0x101cb2c, Func Offset: 0x6c
	// Line 547, Address: 0x101cb38, Func Offset: 0x78
	// Line 548, Address: 0x101cb68, Func Offset: 0xa8
	// Line 552, Address: 0x101cb70, Func Offset: 0xb0
	// Line 554, Address: 0x101cb84, Func Offset: 0xc4
	// Line 555, Address: 0x101cb9c, Func Offset: 0xdc
	// Line 557, Address: 0x101cba8, Func Offset: 0xe8
	// Line 560, Address: 0x101cbb8, Func Offset: 0xf8
	// Line 561, Address: 0x101cc00, Func Offset: 0x140
	// Line 563, Address: 0x101cc14, Func Offset: 0x154
	// Line 565, Address: 0x101cc2c, Func Offset: 0x16c
	// Line 568, Address: 0x101cc54, Func Offset: 0x194
	// Line 569, Address: 0x101cc80, Func Offset: 0x1c0
	// Line 571, Address: 0x101cc8c, Func Offset: 0x1cc
	// Func End, Address: 0x101cca8, Func Offset: 0x1e8
}

// 
// Start address: 0x101ccb0
void egg8_ini(_anon0* pActwk)
{
	// Line 578, Address: 0x101ccb0, Func Offset: 0
	// Line 579, Address: 0x101ccb8, Func Offset: 0x8
	// Line 580, Address: 0x101ccc4, Func Offset: 0x14
	// Line 581, Address: 0x101ccd0, Func Offset: 0x20
	// Line 582, Address: 0x101ccdc, Func Offset: 0x2c
	// Line 583, Address: 0x101cce8, Func Offset: 0x38
	// Line 584, Address: 0x101ccf4, Func Offset: 0x44
	// Line 585, Address: 0x101cd00, Func Offset: 0x50
	// Line 587, Address: 0x101cd10, Func Offset: 0x60
	// Line 588, Address: 0x101cd1c, Func Offset: 0x6c
	// Line 589, Address: 0x101cd2c, Func Offset: 0x7c
	// Func End, Address: 0x101cd38, Func Offset: 0x88
}

// 
// Start address: 0x101cd40
void egg8_scrset(_anon0* pActwk, _anon0* pMecawk)
{
	short limwk;
	// Line 596, Address: 0x101cd40, Func Offset: 0
	// Line 599, Address: 0x101cd54, Func Offset: 0x14
	// Line 600, Address: 0x101cd70, Func Offset: 0x30
	// Line 601, Address: 0x101cdc0, Func Offset: 0x80
	// Line 603, Address: 0x101cddc, Func Offset: 0x9c
	// Line 604, Address: 0x101cdf4, Func Offset: 0xb4
	// Line 606, Address: 0x101ce00, Func Offset: 0xc0
	// Line 607, Address: 0x101ce2c, Func Offset: 0xec
	// Line 609, Address: 0x101ce3c, Func Offset: 0xfc
	// Line 610, Address: 0x101ce4c, Func Offset: 0x10c
	// Line 612, Address: 0x101ce58, Func Offset: 0x118
	// Line 616, Address: 0x101ce64, Func Offset: 0x124
	// Line 620, Address: 0x101ce74, Func Offset: 0x134
	// Func End, Address: 0x101ce88, Func Offset: 0x148
}

// 
// Start address: 0x101ce90
void egg8_open1(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 627, Address: 0x101ce90, Func Offset: 0
	// Line 628, Address: 0x101cea0, Func Offset: 0x10
	// Line 630, Address: 0x101ced8, Func Offset: 0x48
	// Line 632, Address: 0x101cf04, Func Offset: 0x74
	// Line 634, Address: 0x101cf14, Func Offset: 0x84
	// Line 635, Address: 0x101cf20, Func Offset: 0x90
	// Line 637, Address: 0x101cf34, Func Offset: 0xa4
	// Line 638, Address: 0x101cf3c, Func Offset: 0xac
	// Line 639, Address: 0x101cf44, Func Offset: 0xb4
	// Line 640, Address: 0x101cf54, Func Offset: 0xc4
	// Line 643, Address: 0x101cf60, Func Offset: 0xd0
	// Line 646, Address: 0x101cf68, Func Offset: 0xd8
	// Line 647, Address: 0x101cf8c, Func Offset: 0xfc
	// Line 651, Address: 0x101cf94, Func Offset: 0x104
	// Line 652, Address: 0x101cfa4, Func Offset: 0x114
	// Line 654, Address: 0x101cfbc, Func Offset: 0x12c
	// Line 655, Address: 0x101cfcc, Func Offset: 0x13c
	// Line 656, Address: 0x101cfd4, Func Offset: 0x144
	// Line 659, Address: 0x101cfdc, Func Offset: 0x14c
	// Line 662, Address: 0x101cfe4, Func Offset: 0x154
	// Line 664, Address: 0x101d008, Func Offset: 0x178
	// Line 665, Address: 0x101d018, Func Offset: 0x188
	// Line 667, Address: 0x101d020, Func Offset: 0x190
	// Line 668, Address: 0x101d030, Func Offset: 0x1a0
	// Line 669, Address: 0x101d03c, Func Offset: 0x1ac
	// Line 670, Address: 0x101d048, Func Offset: 0x1b8
	// Line 671, Address: 0x101d054, Func Offset: 0x1c4
	// Line 674, Address: 0x101d060, Func Offset: 0x1d0
	// Line 677, Address: 0x101d068, Func Offset: 0x1d8
	// Line 678, Address: 0x101d074, Func Offset: 0x1e4
	// Line 681, Address: 0x101d084, Func Offset: 0x1f4
	// Line 682, Address: 0x101d090, Func Offset: 0x200
	// Line 683, Address: 0x101d09c, Func Offset: 0x20c
	// Line 689, Address: 0x101d0a8, Func Offset: 0x218
	// Func End, Address: 0x101d0b8, Func Offset: 0x228
}

// 
// Start address: 0x101d0c0
void egg8_wait(_anon0* pActwk)
{
	unsigned char wk;
	// Line 696, Address: 0x101d0c0, Func Offset: 0
	// Line 699, Address: 0x101d0cc, Func Offset: 0xc
	// Line 700, Address: 0x101d0dc, Func Offset: 0x1c
	// Line 701, Address: 0x101d0e8, Func Offset: 0x28
	// Line 703, Address: 0x101d100, Func Offset: 0x40
	// Line 704, Address: 0x101d108, Func Offset: 0x48
	// Line 706, Address: 0x101d118, Func Offset: 0x58
	// Func End, Address: 0x101d128, Func Offset: 0x68
}

// 
// Start address: 0x101d130
void egg8_move_r(_anon0* pActwk)
{
	// Line 713, Address: 0x101d130, Func Offset: 0
	// Line 714, Address: 0x101d138, Func Offset: 0x8
	// Line 715, Address: 0x101d150, Func Offset: 0x20
	// Line 717, Address: 0x101d17c, Func Offset: 0x4c
	// Line 718, Address: 0x101d18c, Func Offset: 0x5c
	// Line 720, Address: 0x101d19c, Func Offset: 0x6c
	// Func End, Address: 0x101d1a8, Func Offset: 0x78
}

// 
// Start address: 0x101d1b0
void egg8_move_l(_anon0* pActwk)
{
	// Line 727, Address: 0x101d1b0, Func Offset: 0
	// Line 728, Address: 0x101d1b8, Func Offset: 0x8
	// Line 729, Address: 0x101d1d0, Func Offset: 0x20
	// Line 731, Address: 0x101d1fc, Func Offset: 0x4c
	// Line 732, Address: 0x101d20c, Func Offset: 0x5c
	// Line 734, Address: 0x101d21c, Func Offset: 0x6c
	// Func End, Address: 0x101d228, Func Offset: 0x78
}

// 
// Start address: 0x101d230
void egg8_move_d(_anon0* pActwk)
{
	// Line 741, Address: 0x101d230, Func Offset: 0
	// Line 742, Address: 0x101d238, Func Offset: 0x8
	// Line 743, Address: 0x101d250, Func Offset: 0x20
	// Line 745, Address: 0x101d27c, Func Offset: 0x4c
	// Line 746, Address: 0x101d28c, Func Offset: 0x5c
	// Line 748, Address: 0x101d29c, Func Offset: 0x6c
	// Func End, Address: 0x101d2a8, Func Offset: 0x78
}

// 
// Start address: 0x101d2b0
void egg8_move_u(_anon0* pActwk)
{
	// Line 755, Address: 0x101d2b0, Func Offset: 0
	// Line 756, Address: 0x101d2b8, Func Offset: 0x8
	// Line 757, Address: 0x101d2d0, Func Offset: 0x20
	// Line 759, Address: 0x101d2fc, Func Offset: 0x4c
	// Line 760, Address: 0x101d30c, Func Offset: 0x5c
	// Line 762, Address: 0x101d31c, Func Offset: 0x6c
	// Func End, Address: 0x101d328, Func Offset: 0x78
}

// 
// Start address: 0x101d330
void egg8_move_c(_anon0* pActwk)
{
	short xOfs;
	char sw;
	// Line 769, Address: 0x101d330, Func Offset: 0
	// Line 773, Address: 0x101d340, Func Offset: 0x10
	// Line 775, Address: 0x101d34c, Func Offset: 0x1c
	// Line 777, Address: 0x101d35c, Func Offset: 0x2c
	// Line 779, Address: 0x101d368, Func Offset: 0x38
	// Line 781, Address: 0x101d384, Func Offset: 0x54
	// Line 782, Address: 0x101d390, Func Offset: 0x60
	// Line 783, Address: 0x101d398, Func Offset: 0x68
	// Line 785, Address: 0x101d3a4, Func Offset: 0x74
	// Line 786, Address: 0x101d3ac, Func Offset: 0x7c
	// Line 788, Address: 0x101d3c4, Func Offset: 0x94
	// Line 790, Address: 0x101d3dc, Func Offset: 0xac
	// Line 793, Address: 0x101d410, Func Offset: 0xe0
	// Line 795, Address: 0x101d418, Func Offset: 0xe8
	// Line 797, Address: 0x101d430, Func Offset: 0x100
	// Line 804, Address: 0x101d464, Func Offset: 0x134
	// Line 807, Address: 0x101d46c, Func Offset: 0x13c
	// Line 809, Address: 0x101d47c, Func Offset: 0x14c
	// Line 810, Address: 0x101d48c, Func Offset: 0x15c
	// Line 811, Address: 0x101d4b4, Func Offset: 0x184
	// Line 812, Address: 0x101d4c0, Func Offset: 0x190
	// Line 813, Address: 0x101d4c8, Func Offset: 0x198
	// Line 814, Address: 0x101d4e0, Func Offset: 0x1b0
	// Line 815, Address: 0x101d4ec, Func Offset: 0x1bc
	// Line 816, Address: 0x101d4f4, Func Offset: 0x1c4
	// Line 819, Address: 0x101d500, Func Offset: 0x1d0
	// Line 823, Address: 0x101d510, Func Offset: 0x1e0
	// Line 826, Address: 0x101d544, Func Offset: 0x214
	// Line 827, Address: 0x101d554, Func Offset: 0x224
	// Line 828, Address: 0x101d560, Func Offset: 0x230
	// Line 832, Address: 0x101d568, Func Offset: 0x238
	// Line 833, Address: 0x101d578, Func Offset: 0x248
	// Line 834, Address: 0x101d584, Func Offset: 0x254
	// Line 838, Address: 0x101d58c, Func Offset: 0x25c
	// Line 839, Address: 0x101d59c, Func Offset: 0x26c
	// Line 845, Address: 0x101d5a8, Func Offset: 0x278
	// Func End, Address: 0x101d5bc, Func Offset: 0x28c
}

// 
// Start address: 0x101d5c0
void egg8_move_escu(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 852, Address: 0x101d5c0, Func Offset: 0
	// Line 853, Address: 0x101d5d0, Func Offset: 0x10
	// Line 854, Address: 0x101d5e0, Func Offset: 0x20
	// Line 855, Address: 0x101d5f0, Func Offset: 0x30
	// Line 856, Address: 0x101d600, Func Offset: 0x40
	// Line 860, Address: 0x101d60c, Func Offset: 0x4c
	// Line 861, Address: 0x101d624, Func Offset: 0x64
	// Line 863, Address: 0x101d650, Func Offset: 0x90
	// Line 864, Address: 0x101d660, Func Offset: 0xa0
	// Line 866, Address: 0x101d670, Func Offset: 0xb0
	// Func End, Address: 0x101d680, Func Offset: 0xc0
}

// 
// Start address: 0x101d680
void egg8_hane_roll(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 873, Address: 0x101d680, Func Offset: 0
	// Line 874, Address: 0x101d68c, Func Offset: 0xc
	// Line 875, Address: 0x101d6a4, Func Offset: 0x24
	// Line 876, Address: 0x101d6b4, Func Offset: 0x34
	// Line 877, Address: 0x101d6bc, Func Offset: 0x3c
	// Line 881, Address: 0x101d6c4, Func Offset: 0x44
	// Line 882, Address: 0x101d6d4, Func Offset: 0x54
	// Func End, Address: 0x101d6e0, Func Offset: 0x60
}

// 
// Start address: 0x101d6e0
void egg8_hane_stop(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 889, Address: 0x101d6e0, Func Offset: 0
	// Line 890, Address: 0x101d6ec, Func Offset: 0xc
	// Line 892, Address: 0x101d6fc, Func Offset: 0x1c
	// Line 893, Address: 0x101d70c, Func Offset: 0x2c
	// Line 894, Address: 0x101d71c, Func Offset: 0x3c
	// Line 895, Address: 0x101d72c, Func Offset: 0x4c
	// Line 896, Address: 0x101d734, Func Offset: 0x54
	// Line 898, Address: 0x101d73c, Func Offset: 0x5c
	// Line 900, Address: 0x101d754, Func Offset: 0x74
	// Line 901, Address: 0x101d760, Func Offset: 0x80
	// Line 902, Address: 0x101d768, Func Offset: 0x88
	// Line 907, Address: 0x101d774, Func Offset: 0x94
	// Line 909, Address: 0x101d78c, Func Offset: 0xac
	// Line 911, Address: 0x101d79c, Func Offset: 0xbc
	// Func End, Address: 0x101d7a8, Func Offset: 0xc8
}

// 
// Start address: 0x101d7b0
void egg8_hane_chg1(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 918, Address: 0x101d7b0, Func Offset: 0
	// Line 919, Address: 0x101d7bc, Func Offset: 0xc
	// Line 920, Address: 0x101d7c4, Func Offset: 0x14
	// Line 921, Address: 0x101d7cc, Func Offset: 0x1c
	// Line 922, Address: 0x101d7d4, Func Offset: 0x24
	// Line 923, Address: 0x101d7e4, Func Offset: 0x34
	// Line 924, Address: 0x101d7f4, Func Offset: 0x44
	// Line 926, Address: 0x101d800, Func Offset: 0x50
	// Line 927, Address: 0x101d808, Func Offset: 0x58
	// Line 928, Address: 0x101d810, Func Offset: 0x60
	// Line 929, Address: 0x101d820, Func Offset: 0x70
	// Func End, Address: 0x101d82c, Func Offset: 0x7c
}

// 
// Start address: 0x101d830
void egg8_hane_chg2(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 936, Address: 0x101d830, Func Offset: 0
	// Line 937, Address: 0x101d840, Func Offset: 0x10
	// Line 939, Address: 0x101d84c, Func Offset: 0x1c
	// Line 940, Address: 0x101d854, Func Offset: 0x24
	// Line 941, Address: 0x101d85c, Func Offset: 0x2c
	// Line 942, Address: 0x101d864, Func Offset: 0x34
	// Line 944, Address: 0x101d870, Func Offset: 0x40
	// Line 945, Address: 0x101d880, Func Offset: 0x50
	// Func End, Address: 0x101d890, Func Offset: 0x60
}

// 
// Start address: 0x101d890
void egg8_hane_chg3(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 952, Address: 0x101d890, Func Offset: 0
	// Line 953, Address: 0x101d89c, Func Offset: 0xc
	// Line 954, Address: 0x101d8a4, Func Offset: 0x14
	// Line 955, Address: 0x101d8ac, Func Offset: 0x1c
	// Line 956, Address: 0x101d8b4, Func Offset: 0x24
	// Line 958, Address: 0x101d8c0, Func Offset: 0x30
	// Line 959, Address: 0x101d8d0, Func Offset: 0x40
	// Func End, Address: 0x101d8dc, Func Offset: 0x4c
}

// 
// Start address: 0x101d8e0
void egg8_hane_fire(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 966, Address: 0x101d8e0, Func Offset: 0
	// Line 967, Address: 0x101d8f0, Func Offset: 0x10
	// Line 970, Address: 0x101d91c, Func Offset: 0x3c
	// Line 971, Address: 0x101d928, Func Offset: 0x48
	// Line 973, Address: 0x101d938, Func Offset: 0x58
	// Line 975, Address: 0x101d950, Func Offset: 0x70
	// Line 978, Address: 0x101d960, Func Offset: 0x80
	// Line 979, Address: 0x101d970, Func Offset: 0x90
	// Line 983, Address: 0x101d978, Func Offset: 0x98
	// Line 985, Address: 0x101d99c, Func Offset: 0xbc
	// Line 987, Address: 0x101d9ac, Func Offset: 0xcc
	// Line 991, Address: 0x101d9b4, Func Offset: 0xd4
	// Line 992, Address: 0x101d9c4, Func Offset: 0xe4
	// Line 993, Address: 0x101d9cc, Func Offset: 0xec
	// Line 994, Address: 0x101d9d4, Func Offset: 0xf4
	// Line 995, Address: 0x101d9dc, Func Offset: 0xfc
	// Line 996, Address: 0x101d9e8, Func Offset: 0x108
	// Line 997, Address: 0x101d9f0, Func Offset: 0x110
	// Line 1000, Address: 0x101d9f8, Func Offset: 0x118
	// Func End, Address: 0x101da08, Func Offset: 0x128
}

// 
// Start address: 0x101da10
void egg8_hane_reset(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 1007, Address: 0x101da10, Func Offset: 0
	// Line 1008, Address: 0x101da1c, Func Offset: 0xc
	// Line 1009, Address: 0x101da24, Func Offset: 0x14
	// Line 1010, Address: 0x101da2c, Func Offset: 0x1c
	// Line 1011, Address: 0x101da34, Func Offset: 0x24
	// Line 1013, Address: 0x101da40, Func Offset: 0x30
	// Line 1014, Address: 0x101da50, Func Offset: 0x40
	// Func End, Address: 0x101da5c, Func Offset: 0x4c
}

// 
// Start address: 0x101da60
void egg8_spin_d(_anon0* pActwk, _anon0* pMecawk)
{
	int tateini;
	// Line 1021, Address: 0x101da60, Func Offset: 0
	// Line 1022, Address: 0x101da74, Func Offset: 0x14
	// Line 1024, Address: 0x101da78, Func Offset: 0x18
	// Line 1026, Address: 0x101da88, Func Offset: 0x28
	// Line 1028, Address: 0x101daa0, Func Offset: 0x40
	// Line 1031, Address: 0x101daac, Func Offset: 0x4c
	// Line 1032, Address: 0x101dab0, Func Offset: 0x50
	// Line 1034, Address: 0x101dab8, Func Offset: 0x58
	// Line 1036, Address: 0x101dae4, Func Offset: 0x84
	// Line 1039, Address: 0x101daf0, Func Offset: 0x90
	// Line 1040, Address: 0x101dafc, Func Offset: 0x9c
	// Line 1041, Address: 0x101db08, Func Offset: 0xa8
	// Line 1043, Address: 0x101db10, Func Offset: 0xb0
	// Line 1045, Address: 0x101db28, Func Offset: 0xc8
	// Line 1046, Address: 0x101db34, Func Offset: 0xd4
	// Line 1048, Address: 0x101db3c, Func Offset: 0xdc
	// Line 1052, Address: 0x101db44, Func Offset: 0xe4
	// Line 1053, Address: 0x101db50, Func Offset: 0xf0
	// Line 1058, Address: 0x101db5c, Func Offset: 0xfc
	// Line 1060, Address: 0x101db74, Func Offset: 0x114
	// Line 1061, Address: 0x101db78, Func Offset: 0x118
	// Line 1062, Address: 0x101db90, Func Offset: 0x130
	// Line 1064, Address: 0x101dba8, Func Offset: 0x148
	// Line 1065, Address: 0x101dbb8, Func Offset: 0x158
	// Line 1067, Address: 0x101dbc0, Func Offset: 0x160
	// Line 1071, Address: 0x101dbd0, Func Offset: 0x170
	// Line 1072, Address: 0x101dbe8, Func Offset: 0x188
	// Line 1075, Address: 0x101dbec, Func Offset: 0x18c
	// Line 1078, Address: 0x101dbfc, Func Offset: 0x19c
	// Line 1081, Address: 0x101dc1c, Func Offset: 0x1bc
	// Line 1082, Address: 0x101dc2c, Func Offset: 0x1cc
	// Line 1083, Address: 0x101dc3c, Func Offset: 0x1dc
	// Line 1084, Address: 0x101dc44, Func Offset: 0x1e4
	// Line 1086, Address: 0x101dc4c, Func Offset: 0x1ec
	// Line 1087, Address: 0x101dc58, Func Offset: 0x1f8
	// Line 1090, Address: 0x101dc64, Func Offset: 0x204
	// Line 1092, Address: 0x101dc74, Func Offset: 0x214
	// Line 1094, Address: 0x101dc8c, Func Offset: 0x22c
	// Line 1101, Address: 0x101dc94, Func Offset: 0x234
	// Func End, Address: 0x101dca8, Func Offset: 0x248
}

// 
// Start address: 0x101dcb0
void egg8_spin_l(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 1108, Address: 0x101dcb0, Func Offset: 0
	// Line 1109, Address: 0x101dcc0, Func Offset: 0x10
	// Line 1110, Address: 0x101dcd0, Func Offset: 0x20
	// Func End, Address: 0x101dce0, Func Offset: 0x30
}

// 
// Start address: 0x101dce0
void egg8_spin_r(_anon0* pActwk, _anon0* pMecawk)
{
	short* pSpinTbl;
	short xwk;
	short ywk;
	unsigned char hanecntwk;
	unsigned char para0wk;
	// Line 1169, Address: 0x101dce0, Func Offset: 0
	// Line 1173, Address: 0x101dd04, Func Offset: 0x24
	// Line 1175, Address: 0x101dd28, Func Offset: 0x48
	// Line 1176, Address: 0x101dd34, Func Offset: 0x54
	// Line 1177, Address: 0x101dd3c, Func Offset: 0x5c
	// Line 1179, Address: 0x101dd44, Func Offset: 0x64
	// Line 1180, Address: 0x101dd4c, Func Offset: 0x6c
	// Line 1181, Address: 0x101dd54, Func Offset: 0x74
	// Line 1182, Address: 0x101dd5c, Func Offset: 0x7c
	// Line 1183, Address: 0x101dd6c, Func Offset: 0x8c
	// Line 1185, Address: 0x101dd8c, Func Offset: 0xac
	// Line 1186, Address: 0x101ddb0, Func Offset: 0xd0
	// Line 1187, Address: 0x101ddb8, Func Offset: 0xd8
	// Line 1191, Address: 0x101ddc8, Func Offset: 0xe8
	// Line 1192, Address: 0x101ddd0, Func Offset: 0xf0
	// Line 1194, Address: 0x101dde0, Func Offset: 0x100
	// Line 1195, Address: 0x101dde8, Func Offset: 0x108
	// Line 1197, Address: 0x101ddf0, Func Offset: 0x110
	// Line 1202, Address: 0x101de68, Func Offset: 0x188
	// Line 1203, Address: 0x101de70, Func Offset: 0x190
	// Line 1204, Address: 0x101de7c, Func Offset: 0x19c
	// Line 1206, Address: 0x101de84, Func Offset: 0x1a4
	// Line 1207, Address: 0x101de90, Func Offset: 0x1b0
	// Line 1211, Address: 0x101de9c, Func Offset: 0x1bc
	// Line 1212, Address: 0x101dea8, Func Offset: 0x1c8
	// Line 1213, Address: 0x101deb0, Func Offset: 0x1d0
	// Line 1217, Address: 0x101deb8, Func Offset: 0x1d8
	// Line 1219, Address: 0x101dedc, Func Offset: 0x1fc
	// Line 1221, Address: 0x101deec, Func Offset: 0x20c
	// Line 1222, Address: 0x101df08, Func Offset: 0x228
	// Line 1226, Address: 0x101df14, Func Offset: 0x234
	// Line 1229, Address: 0x101df1c, Func Offset: 0x23c
	// Line 1230, Address: 0x101df3c, Func Offset: 0x25c
	// Line 1232, Address: 0x101df58, Func Offset: 0x278
	// Line 1233, Address: 0x101df6c, Func Offset: 0x28c
	// Line 1235, Address: 0x101df80, Func Offset: 0x2a0
	// Line 1237, Address: 0x101df98, Func Offset: 0x2b8
	// Line 1238, Address: 0x101dfa8, Func Offset: 0x2c8
	// Line 1239, Address: 0x101dfb4, Func Offset: 0x2d4
	// Line 1240, Address: 0x101dfc0, Func Offset: 0x2e0
	// Line 1242, Address: 0x101dfc8, Func Offset: 0x2e8
	// Line 1246, Address: 0x101dfd8, Func Offset: 0x2f8
	// Line 1247, Address: 0x101dfe8, Func Offset: 0x308
	// Line 1249, Address: 0x101dff8, Func Offset: 0x318
	// Line 1250, Address: 0x101e004, Func Offset: 0x324
	// Line 1252, Address: 0x101e010, Func Offset: 0x330
	// Line 1255, Address: 0x101e070, Func Offset: 0x390
	// Line 1257, Address: 0x101e094, Func Offset: 0x3b4
	// Line 1260, Address: 0x101e0a0, Func Offset: 0x3c0
	// Line 1262, Address: 0x101e0b8, Func Offset: 0x3d8
	// Line 1263, Address: 0x101e0c8, Func Offset: 0x3e8
	// Line 1265, Address: 0x101e0d0, Func Offset: 0x3f0
	// Line 1267, Address: 0x101e0e0, Func Offset: 0x400
	// Line 1269, Address: 0x101e100, Func Offset: 0x420
	// Line 1270, Address: 0x101e10c, Func Offset: 0x42c
	// Line 1272, Address: 0x101e114, Func Offset: 0x434
	// Line 1274, Address: 0x101e120, Func Offset: 0x440
	// Line 1276, Address: 0x101e128, Func Offset: 0x448
	// Line 1278, Address: 0x101e140, Func Offset: 0x460
	// Line 1279, Address: 0x101e150, Func Offset: 0x470
	// Line 1281, Address: 0x101e158, Func Offset: 0x478
	// Line 1288, Address: 0x101e168, Func Offset: 0x488
	// Func End, Address: 0x101e18c, Func Offset: 0x4ac
}

// 
// Start address: 0x101e190
void egg8_target(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 1295, Address: 0x101e190, Func Offset: 0
	// Line 1296, Address: 0x101e1a0, Func Offset: 0x10
	// Line 1298, Address: 0x101e1b0, Func Offset: 0x20
	// Line 1302, Address: 0x101e1c0, Func Offset: 0x30
	// Line 1304, Address: 0x101e1d8, Func Offset: 0x48
	// Line 1308, Address: 0x101e1e8, Func Offset: 0x58
	// Line 1310, Address: 0x101e200, Func Offset: 0x70
	// Line 1313, Address: 0x101e210, Func Offset: 0x80
	// Line 1315, Address: 0x101e228, Func Offset: 0x98
	// Line 1317, Address: 0x101e238, Func Offset: 0xa8
	// Func End, Address: 0x101e248, Func Offset: 0xb8
}

// 
// Start address: 0x101e250
void egg8target_ini(_anon0* pActwk, _anon0* pMecawk)
{
	short xPos;
	short xSav;
	_anon5 xwk;
	_anon5 ywk;
	// Line 1323, Address: 0x101e250, Func Offset: 0
	// Line 1327, Address: 0x101e264, Func Offset: 0x14
	// Line 1328, Address: 0x101e274, Func Offset: 0x24
	// Line 1330, Address: 0x101e2c4, Func Offset: 0x74
	// Line 1331, Address: 0x101e2d4, Func Offset: 0x84
	// Line 1335, Address: 0x101e2e0, Func Offset: 0x90
	// Line 1336, Address: 0x101e2f0, Func Offset: 0xa0
	// Line 1337, Address: 0x101e300, Func Offset: 0xb0
	// Line 1338, Address: 0x101e308, Func Offset: 0xb8
	// Line 1340, Address: 0x101e310, Func Offset: 0xc0
	// Line 1342, Address: 0x101e324, Func Offset: 0xd4
	// Line 1343, Address: 0x101e334, Func Offset: 0xe4
	// Line 1344, Address: 0x101e35c, Func Offset: 0x10c
	// Line 1346, Address: 0x101e368, Func Offset: 0x118
	// Line 1347, Address: 0x101e3a4, Func Offset: 0x154
	// Line 1349, Address: 0x101e3b0, Func Offset: 0x160
	// Line 1351, Address: 0x101e3c8, Func Offset: 0x178
	// Line 1352, Address: 0x101e3d4, Func Offset: 0x184
	// Line 1354, Address: 0x101e3dc, Func Offset: 0x18c
	// Line 1356, Address: 0x101e3e8, Func Offset: 0x198
	// Line 1358, Address: 0x101e3f0, Func Offset: 0x1a0
	// Line 1360, Address: 0x101e400, Func Offset: 0x1b0
	// Line 1361, Address: 0x101e40c, Func Offset: 0x1bc
	// Line 1362, Address: 0x101e414, Func Offset: 0x1c4
	// Line 1366, Address: 0x101e420, Func Offset: 0x1d0
	// Line 1367, Address: 0x101e430, Func Offset: 0x1e0
	// Line 1368, Address: 0x101e458, Func Offset: 0x208
	// Line 1370, Address: 0x101e464, Func Offset: 0x214
	// Line 1371, Address: 0x101e4a0, Func Offset: 0x250
	// Line 1373, Address: 0x101e4ac, Func Offset: 0x25c
	// Line 1374, Address: 0x101e4d4, Func Offset: 0x284
	// Line 1375, Address: 0x101e4e0, Func Offset: 0x290
	// Line 1377, Address: 0x101e4e8, Func Offset: 0x298
	// Line 1380, Address: 0x101e4f4, Func Offset: 0x2a4
	// Func End, Address: 0x101e508, Func Offset: 0x2b8
}

// 
// Start address: 0x101e510
void egg8target_roll(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 1386, Address: 0x101e510, Func Offset: 0
	// Line 1387, Address: 0x101e51c, Func Offset: 0xc
	// Line 1389, Address: 0x101e534, Func Offset: 0x24
	// Line 1391, Address: 0x101e544, Func Offset: 0x34
	// Func End, Address: 0x101e550, Func Offset: 0x40
}

// 
// Start address: 0x101e550
void egg8target_move(_anon0* pActwk, _anon0* pMecawk)
{
	short ywk;
	// Line 1397, Address: 0x101e550, Func Offset: 0
	// Line 1400, Address: 0x101e560, Func Offset: 0x10
	// Line 1401, Address: 0x101e578, Func Offset: 0x28
	// Line 1402, Address: 0x101e584, Func Offset: 0x34
	// Line 1403, Address: 0x101e58c, Func Offset: 0x3c
	// Line 1407, Address: 0x101e598, Func Offset: 0x48
	// Line 1408, Address: 0x101e5b0, Func Offset: 0x60
	// Line 1410, Address: 0x101e5c8, Func Offset: 0x78
	// Line 1412, Address: 0x101e5ec, Func Offset: 0x9c
	// Line 1413, Address: 0x101e5f4, Func Offset: 0xa4
	// Line 1414, Address: 0x101e604, Func Offset: 0xb4
	// Line 1415, Address: 0x101e614, Func Offset: 0xc4
	// Line 1417, Address: 0x101e624, Func Offset: 0xd4
	// Func End, Address: 0x101e634, Func Offset: 0xe4
}

// 
// Start address: 0x101e640
void egg8_targetreset(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 1424, Address: 0x101e640, Func Offset: 0
	// Line 1425, Address: 0x101e650, Func Offset: 0x10
	// Line 1426, Address: 0x101e668, Func Offset: 0x28
	// Line 1428, Address: 0x101e680, Func Offset: 0x40
	// Line 1430, Address: 0x101e69c, Func Offset: 0x5c
	// Line 1431, Address: 0x101e6a8, Func Offset: 0x68
	// Line 1432, Address: 0x101e6b0, Func Offset: 0x70
	// Line 1434, Address: 0x101e6c0, Func Offset: 0x80
	// Line 1436, Address: 0x101e6d0, Func Offset: 0x90
	// Func End, Address: 0x101e6e0, Func Offset: 0xa0
}

// 
// Start address: 0x101e6e0
void egg8_tobi_d(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 1443, Address: 0x101e6e0, Func Offset: 0
	// Line 1444, Address: 0x101e6f0, Func Offset: 0x10
	// Line 1446, Address: 0x101e71c, Func Offset: 0x3c
	// Line 1448, Address: 0x101e748, Func Offset: 0x68
	// Line 1449, Address: 0x101e754, Func Offset: 0x74
	// Line 1450, Address: 0x101e760, Func Offset: 0x80
	// Line 1452, Address: 0x101e768, Func Offset: 0x88
	// Line 1453, Address: 0x101e774, Func Offset: 0x94
	// Line 1457, Address: 0x101e780, Func Offset: 0xa0
	// Line 1459, Address: 0x101e798, Func Offset: 0xb8
	// Line 1460, Address: 0x101e7a8, Func Offset: 0xc8
	// Line 1462, Address: 0x101e7c8, Func Offset: 0xe8
	// Line 1465, Address: 0x101e7d8, Func Offset: 0xf8
	// Line 1467, Address: 0x101e808, Func Offset: 0x128
	// Line 1471, Address: 0x101e820, Func Offset: 0x140
	// Line 1474, Address: 0x101e830, Func Offset: 0x150
	// Line 1475, Address: 0x101e840, Func Offset: 0x160
	// Line 1476, Address: 0x101e850, Func Offset: 0x170
	// Line 1477, Address: 0x101e85c, Func Offset: 0x17c
	// Line 1478, Address: 0x101e864, Func Offset: 0x184
	// Line 1480, Address: 0x101e86c, Func Offset: 0x18c
	// Line 1483, Address: 0x101e878, Func Offset: 0x198
	// Line 1485, Address: 0x101e890, Func Offset: 0x1b0
	// Line 1490, Address: 0x101e8a8, Func Offset: 0x1c8
	// Line 1492, Address: 0x101e8b4, Func Offset: 0x1d4
	// Line 1499, Address: 0x101e8c0, Func Offset: 0x1e0
	// Line 1501, Address: 0x101e8f0, Func Offset: 0x210
	// Line 1503, Address: 0x101e900, Func Offset: 0x220
	// Line 1507, Address: 0x101e918, Func Offset: 0x238
	// Line 1510, Address: 0x101e928, Func Offset: 0x248
	// Line 1511, Address: 0x101e934, Func Offset: 0x254
	// Line 1512, Address: 0x101e93c, Func Offset: 0x25c
	// Line 1513, Address: 0x101e948, Func Offset: 0x268
	// Line 1516, Address: 0x101e954, Func Offset: 0x274
	// Line 1518, Address: 0x101e96c, Func Offset: 0x28c
	// Line 1519, Address: 0x101e978, Func Offset: 0x298
	// Line 1520, Address: 0x101e990, Func Offset: 0x2b0
	// Line 1522, Address: 0x101e998, Func Offset: 0x2b8
	// Line 1524, Address: 0x101e9b4, Func Offset: 0x2d4
	// Line 1525, Address: 0x101e9bc, Func Offset: 0x2dc
	// Line 1527, Address: 0x101e9cc, Func Offset: 0x2ec
	// Line 1532, Address: 0x101e9d8, Func Offset: 0x2f8
	// Func End, Address: 0x101e9e8, Func Offset: 0x308
}

// 
// Start address: 0x101e9f0
void egg8_tobi(_anon0* pActwk, _anon0* pMecawk)
{
	short xwk;
	// Line 1539, Address: 0x101e9f0, Func Offset: 0
	// Line 1542, Address: 0x101ea04, Func Offset: 0x14
	// Line 1543, Address: 0x101ea28, Func Offset: 0x38
	// Line 1545, Address: 0x101ea38, Func Offset: 0x48
	// Line 1546, Address: 0x101ea40, Func Offset: 0x50
	// Line 1548, Address: 0x101ea48, Func Offset: 0x58
	// Line 1550, Address: 0x101ea64, Func Offset: 0x74
	// Line 1551, Address: 0x101ea70, Func Offset: 0x80
	// Line 1552, Address: 0x101ea7c, Func Offset: 0x8c
	// Line 1554, Address: 0x101ea84, Func Offset: 0x94
	// Line 1555, Address: 0x101ea90, Func Offset: 0xa0
	// Line 1559, Address: 0x101ea9c, Func Offset: 0xac
	// Line 1560, Address: 0x101eaa8, Func Offset: 0xb8
	// Line 1561, Address: 0x101eab4, Func Offset: 0xc4
	// Line 1562, Address: 0x101eabc, Func Offset: 0xcc
	// Line 1566, Address: 0x101eac4, Func Offset: 0xd4
	// Line 1568, Address: 0x101ead0, Func Offset: 0xe0
	// Line 1573, Address: 0x101eaec, Func Offset: 0xfc
	// Line 1575, Address: 0x101eaf8, Func Offset: 0x108
	// Line 1576, Address: 0x101eb00, Func Offset: 0x110
	// Line 1578, Address: 0x101eb08, Func Offset: 0x118
	// Line 1580, Address: 0x101eb20, Func Offset: 0x130
	// Line 1582, Address: 0x101eb2c, Func Offset: 0x13c
	// Line 1583, Address: 0x101eb68, Func Offset: 0x178
	// Line 1585, Address: 0x101eb74, Func Offset: 0x184
	// Line 1587, Address: 0x101eb7c, Func Offset: 0x18c
	// Line 1589, Address: 0x101eb88, Func Offset: 0x198
	// Line 1590, Address: 0x101ebc4, Func Offset: 0x1d4
	// Line 1596, Address: 0x101ebd0, Func Offset: 0x1e0
	// Line 1601, Address: 0x101ebe4, Func Offset: 0x1f4
	// Line 1602, Address: 0x101ebf4, Func Offset: 0x204
	// Line 1603, Address: 0x101ec0c, Func Offset: 0x21c
	// Line 1605, Address: 0x101ec24, Func Offset: 0x234
	// Line 1606, Address: 0x101ec30, Func Offset: 0x240
	// Line 1608, Address: 0x101ec38, Func Offset: 0x248
	// Line 1611, Address: 0x101ec44, Func Offset: 0x254
	// Line 1616, Address: 0x101ec4c, Func Offset: 0x25c
	// Line 1617, Address: 0x101ec54, Func Offset: 0x264
	// Line 1619, Address: 0x101ec64, Func Offset: 0x274
	// Line 1620, Address: 0x101ec70, Func Offset: 0x280
	// Line 1621, Address: 0x101ec78, Func Offset: 0x288
	// Line 1622, Address: 0x101ec80, Func Offset: 0x290
	// Line 1623, Address: 0x101ec88, Func Offset: 0x298
	// Func End, Address: 0x101ec9c, Func Offset: 0x2ac
}

// 
// Start address: 0x101eca0
void egg8_tobi_u(_anon0* pActwk)
{
	// Line 1630, Address: 0x101eca0, Func Offset: 0
	// Line 1631, Address: 0x101ecac, Func Offset: 0xc
	// Line 1633, Address: 0x101ecbc, Func Offset: 0x1c
	// Line 1634, Address: 0x101ecc8, Func Offset: 0x28
	// Line 1635, Address: 0x101ecd0, Func Offset: 0x30
	// Line 1636, Address: 0x101ecd8, Func Offset: 0x38
	// Line 1640, Address: 0x101ece0, Func Offset: 0x40
	// Line 1641, Address: 0x101ecec, Func Offset: 0x4c
	// Line 1642, Address: 0x101ed04, Func Offset: 0x64
	// Line 1644, Address: 0x101ed0c, Func Offset: 0x6c
	// Line 1646, Address: 0x101ed28, Func Offset: 0x88
	// Line 1647, Address: 0x101ed30, Func Offset: 0x90
	// Line 1648, Address: 0x101ed40, Func Offset: 0xa0
	// Line 1649, Address: 0x101ed48, Func Offset: 0xa8
	// Line 1650, Address: 0x101ed50, Func Offset: 0xb0
	// Line 1652, Address: 0x101ed58, Func Offset: 0xb8
	// Func End, Address: 0x101ed68, Func Offset: 0xc8
}

// 
// Start address: 0x101ed70
void egg8_dead(_anon0* pActwk, _anon0* pMecawk)
{
	_anon0* pNewact;
	// Line 1659, Address: 0x101ed70, Func Offset: 0
	// Line 1662, Address: 0x101ed80, Func Offset: 0x10
	// Line 1664, Address: 0x101ed90, Func Offset: 0x20
	// Line 1665, Address: 0x101ed9c, Func Offset: 0x2c
	// Line 1667, Address: 0x101eda4, Func Offset: 0x34
	// Line 1668, Address: 0x101edb0, Func Offset: 0x40
	// Line 1669, Address: 0x101edbc, Func Offset: 0x4c
	// Line 1670, Address: 0x101edc4, Func Offset: 0x54
	// Line 1671, Address: 0x101edcc, Func Offset: 0x5c
	// Line 1672, Address: 0x101edd4, Func Offset: 0x64
	// Line 1673, Address: 0x101eddc, Func Offset: 0x6c
	// Line 1677, Address: 0x101edec, Func Offset: 0x7c
	// Line 1679, Address: 0x101ee10, Func Offset: 0xa0
	// Line 1680, Address: 0x101ee24, Func Offset: 0xb4
	// Line 1681, Address: 0x101ee30, Func Offset: 0xc0
	// Line 1682, Address: 0x101ee3c, Func Offset: 0xcc
	// Line 1685, Address: 0x101ee48, Func Offset: 0xd8
	// Line 1689, Address: 0x101ee54, Func Offset: 0xe4
	// Line 1690, Address: 0x101ee5c, Func Offset: 0xec
	// Line 1692, Address: 0x101ee68, Func Offset: 0xf8
	// Func End, Address: 0x101ee78, Func Offset: 0x108
}

// 
// Start address: 0x101ee80
void egg8_esc(_anon0* pActwk)
{
	unsigned char dirwk;
	short sinwk;
	short coswk;
	// Line 1699, Address: 0x101ee80, Func Offset: 0
	// Line 1703, Address: 0x101ee90, Func Offset: 0x10
	// Line 1705, Address: 0x101eea0, Func Offset: 0x20
	// Line 1707, Address: 0x101eeac, Func Offset: 0x2c
	// Line 1708, Address: 0x101eeb4, Func Offset: 0x34
	// Line 1709, Address: 0x101eebc, Func Offset: 0x3c
	// Line 1713, Address: 0x101eecc, Func Offset: 0x4c
	// Line 1714, Address: 0x101eedc, Func Offset: 0x5c
	// Line 1716, Address: 0x101eee8, Func Offset: 0x68
	// Line 1717, Address: 0x101ef0c, Func Offset: 0x8c
	// Line 1721, Address: 0x101ef18, Func Offset: 0x98
	// Line 1722, Address: 0x101ef30, Func Offset: 0xb0
	// Line 1724, Address: 0x101ef40, Func Offset: 0xc0
	// Line 1725, Address: 0x101ef4c, Func Offset: 0xcc
	// Line 1726, Address: 0x101ef5c, Func Offset: 0xdc
	// Line 1728, Address: 0x101ef70, Func Offset: 0xf0
	// Line 1729, Address: 0x101ef90, Func Offset: 0x110
	// Line 1730, Address: 0x101ef9c, Func Offset: 0x11c
	// Line 1732, Address: 0x101efb0, Func Offset: 0x130
	// Line 1734, Address: 0x101efc8, Func Offset: 0x148
	// Line 1736, Address: 0x101efe4, Func Offset: 0x164
	// Line 1738, Address: 0x101eff0, Func Offset: 0x170
	// Line 1739, Address: 0x101effc, Func Offset: 0x17c
	// Line 1740, Address: 0x101f004, Func Offset: 0x184
	// Line 1742, Address: 0x101f00c, Func Offset: 0x18c
	// Func End, Address: 0x101f020, Func Offset: 0x1a0
}

// 
// Start address: 0x101f020
void egg8_esc2(_anon0* pActwk)
{
	// Line 1749, Address: 0x101f020, Func Offset: 0
	// Line 1750, Address: 0x101f02c, Func Offset: 0xc
	// Line 1751, Address: 0x101f03c, Func Offset: 0x1c
	// Line 1752, Address: 0x101f048, Func Offset: 0x28
	// Func End, Address: 0x101f058, Func Offset: 0x38
}

// 
// Start address: 0x101f060
void egg8_warai_chk(_anon0* pActwk)
{
	// Line 1759, Address: 0x101f060, Func Offset: 0
	// Line 1760, Address: 0x101f068, Func Offset: 0x8
	// Line 1761, Address: 0x101f078, Func Offset: 0x18
	// Line 1764, Address: 0x101f0a0, Func Offset: 0x40
	// Line 1765, Address: 0x101f0ac, Func Offset: 0x4c
	// Line 1770, Address: 0x101f0b8, Func Offset: 0x58
	// Func End, Address: 0x101f0c4, Func Offset: 0x64
}

// 
// Start address: 0x101f0d0
void egg8_colichk(_anon0* pActwk, _anon0* pPlayerwk, _anon0* pMecawk)
{
	unsigned char hane_patno;
	// Line 1786, Address: 0x101f0d0, Func Offset: 0
	// Line 1789, Address: 0x101f0e8, Func Offset: 0x18
	// Line 1793, Address: 0x101f100, Func Offset: 0x30
	// Line 1795, Address: 0x101f10c, Func Offset: 0x3c
	// Line 1797, Address: 0x101f11c, Func Offset: 0x4c
	// Line 1800, Address: 0x101f13c, Func Offset: 0x6c
	// Line 1802, Address: 0x101f164, Func Offset: 0x94
	// Line 1803, Address: 0x101f17c, Func Offset: 0xac
	// Line 1804, Address: 0x101f184, Func Offset: 0xb4
	// Line 1805, Address: 0x101f18c, Func Offset: 0xbc
	// Line 1806, Address: 0x101f194, Func Offset: 0xc4
	// Line 1808, Address: 0x101f19c, Func Offset: 0xcc
	// Line 1809, Address: 0x101f1a8, Func Offset: 0xd8
	// Line 1810, Address: 0x101f1b4, Func Offset: 0xe4
	// Line 1812, Address: 0x101f1c0, Func Offset: 0xf0
	// Line 1813, Address: 0x101f1cc, Func Offset: 0xfc
	// Line 1814, Address: 0x101f1d4, Func Offset: 0x104
	// Line 1815, Address: 0x101f1dc, Func Offset: 0x10c
	// Line 1817, Address: 0x101f1ec, Func Offset: 0x11c
	// Line 1820, Address: 0x101f1f8, Func Offset: 0x128
	// Line 1821, Address: 0x101f208, Func Offset: 0x138
	// Line 1823, Address: 0x101f218, Func Offset: 0x148
	// Line 1824, Address: 0x101f224, Func Offset: 0x154
	// Line 1827, Address: 0x101f264, Func Offset: 0x194
	// Line 1828, Address: 0x101f270, Func Offset: 0x1a0
	// Line 1829, Address: 0x101f280, Func Offset: 0x1b0
	// Line 1830, Address: 0x101f288, Func Offset: 0x1b8
	// Line 1833, Address: 0x101f290, Func Offset: 0x1c0
	// Line 1834, Address: 0x101f298, Func Offset: 0x1c8
	// Line 1837, Address: 0x101f2a0, Func Offset: 0x1d0
	// Line 1839, Address: 0x101f2cc, Func Offset: 0x1fc
	// Line 1841, Address: 0x101f2dc, Func Offset: 0x20c
	// Line 1842, Address: 0x101f2e8, Func Offset: 0x218
	// Line 1844, Address: 0x101f300, Func Offset: 0x230
	// Line 1845, Address: 0x101f30c, Func Offset: 0x23c
	// Line 1847, Address: 0x101f324, Func Offset: 0x254
	// Line 1848, Address: 0x101f32c, Func Offset: 0x25c
	// Line 1850, Address: 0x101f334, Func Offset: 0x264
	// Line 1852, Address: 0x101f340, Func Offset: 0x270
	// Line 1854, Address: 0x101f348, Func Offset: 0x278
	// Line 1856, Address: 0x101f364, Func Offset: 0x294
	// Line 1857, Address: 0x101f370, Func Offset: 0x2a0
	// Line 1859, Address: 0x101f388, Func Offset: 0x2b8
	// Line 1860, Address: 0x101f394, Func Offset: 0x2c4
	// Line 1862, Address: 0x101f3ac, Func Offset: 0x2dc
	// Line 1863, Address: 0x101f3b4, Func Offset: 0x2e4
	// Line 1865, Address: 0x101f3bc, Func Offset: 0x2ec
	// Line 1869, Address: 0x101f3c8, Func Offset: 0x2f8
	// Line 1872, Address: 0x101f3d0, Func Offset: 0x300
	// Line 1874, Address: 0x101f3fc, Func Offset: 0x32c
	// Line 1876, Address: 0x101f41c, Func Offset: 0x34c
	// Line 1877, Address: 0x101f428, Func Offset: 0x358
	// Line 1879, Address: 0x101f440, Func Offset: 0x370
	// Line 1880, Address: 0x101f44c, Func Offset: 0x37c
	// Line 1882, Address: 0x101f454, Func Offset: 0x384
	// Line 1884, Address: 0x101f45c, Func Offset: 0x38c
	// Line 1886, Address: 0x101f464, Func Offset: 0x394
	// Line 1888, Address: 0x101f480, Func Offset: 0x3b0
	// Line 1889, Address: 0x101f48c, Func Offset: 0x3bc
	// Line 1891, Address: 0x101f4a4, Func Offset: 0x3d4
	// Line 1892, Address: 0x101f4b0, Func Offset: 0x3e0
	// Line 1894, Address: 0x101f4b8, Func Offset: 0x3e8
	// Line 1898, Address: 0x101f4c0, Func Offset: 0x3f0
	// Line 1904, Address: 0x101f4c8, Func Offset: 0x3f8
	// Line 1906, Address: 0x101f4f4, Func Offset: 0x424
	// Line 1907, Address: 0x101f4fc, Func Offset: 0x42c
	// Line 1909, Address: 0x101f504, Func Offset: 0x434
	// Line 1912, Address: 0x101f510, Func Offset: 0x440
	// Line 1915, Address: 0x101f518, Func Offset: 0x448
	// Line 1919, Address: 0x101f520, Func Offset: 0x450
	// Line 1924, Address: 0x101f528, Func Offset: 0x458
	// Line 1925, Address: 0x101f534, Func Offset: 0x464
	// Line 1926, Address: 0x101f540, Func Offset: 0x470
	// Line 1927, Address: 0x101f54c, Func Offset: 0x47c
	// Line 1928, Address: 0x101f558, Func Offset: 0x488
	// Func End, Address: 0x101f56c, Func Offset: 0x49c
}

// 
// Start address: 0x101f570
void next_action(_anon0* pActwk)
{
	_anon3* pEggactTbl;
	unsigned char tblno;
	unsigned char tblidx;
	// Line 2340, Address: 0x101f570, Func Offset: 0
	// Line 2345, Address: 0x101f584, Func Offset: 0x14
	// Line 2346, Address: 0x101f590, Func Offset: 0x20
	// Line 2347, Address: 0x101f59c, Func Offset: 0x2c
	// Line 2349, Address: 0x101f5c0, Func Offset: 0x50
	// Line 2350, Address: 0x101f5cc, Func Offset: 0x5c
	// Line 2352, Address: 0x101f5d4, Func Offset: 0x64
	// Line 2355, Address: 0x101f5e0, Func Offset: 0x70
	// Line 2356, Address: 0x101f5f0, Func Offset: 0x80
	// Line 2357, Address: 0x101f5fc, Func Offset: 0x8c
	// Line 2358, Address: 0x101f608, Func Offset: 0x98
	// Line 2359, Address: 0x101f610, Func Offset: 0xa0
	// Func End, Address: 0x101f628, Func Offset: 0xb8
}

// 
// Start address: 0x101f630
void egg8meca(_anon0* pActwk)
{
	_anon0* pEggwk;
	// Line 2409, Address: 0x101f630, Func Offset: 0
	// Line 2412, Address: 0x101f640, Func Offset: 0x10
	// Line 2414, Address: 0x101f668, Func Offset: 0x38
	// Line 2417, Address: 0x101f6b0, Func Offset: 0x80
	// Line 2418, Address: 0x101f6e0, Func Offset: 0xb0
	// Line 2420, Address: 0x101f6ec, Func Offset: 0xbc
	// Func End, Address: 0x101f700, Func Offset: 0xd0
}

// 
// Start address: 0x101f700
void egg8meca_ini(_anon0* pActwk)
{
	// Line 2427, Address: 0x101f700, Func Offset: 0
	// Line 2428, Address: 0x101f70c, Func Offset: 0xc
	// Line 2429, Address: 0x101f718, Func Offset: 0x18
	// Line 2430, Address: 0x101f724, Func Offset: 0x24
	// Line 2431, Address: 0x101f730, Func Offset: 0x30
	// Line 2432, Address: 0x101f73c, Func Offset: 0x3c
	// Line 2433, Address: 0x101f748, Func Offset: 0x48
	// Line 2434, Address: 0x101f754, Func Offset: 0x54
	// Line 2435, Address: 0x101f764, Func Offset: 0x64
	// Line 2436, Address: 0x101f76c, Func Offset: 0x6c
	// Line 2437, Address: 0x101f778, Func Offset: 0x78
	// Line 2438, Address: 0x101f784, Func Offset: 0x84
	// Line 2439, Address: 0x101f794, Func Offset: 0x94
	// Line 2440, Address: 0x101f7a4, Func Offset: 0xa4
	// Func End, Address: 0x101f7b4, Func Offset: 0xb4
}

// 
// Start address: 0x101f7c0
void egg8meca_normal(_anon0* pActwk, _anon0* pEggwk)
{
	// Line 2447, Address: 0x101f7c0, Func Offset: 0
	// Line 2448, Address: 0x101f7d0, Func Offset: 0x10
	// Line 2449, Address: 0x101f7e0, Func Offset: 0x20
	// Line 2450, Address: 0x101f7f0, Func Offset: 0x30
	// Line 2451, Address: 0x101f7fc, Func Offset: 0x3c
	// Func End, Address: 0x101f80c, Func Offset: 0x4c
}

// 
// Start address: 0x101f810
void egg8meca_spin(_anon0* pActwk, _anon0* pEggwk)
{
	// Line 2458, Address: 0x101f810, Func Offset: 0
	// Line 2459, Address: 0x101f820, Func Offset: 0x10
	// Line 2460, Address: 0x101f830, Func Offset: 0x20
	// Line 2461, Address: 0x101f840, Func Offset: 0x30
	// Line 2462, Address: 0x101f84c, Func Offset: 0x3c
	// Func End, Address: 0x101f85c, Func Offset: 0x4c
}

// 
// Start address: 0x101f860
void egg8meca_chg1(_anon0* pActwk)
{
	// Line 2469, Address: 0x101f860, Func Offset: 0
	// Line 2470, Address: 0x101f868, Func Offset: 0x8
	// Line 2473, Address: 0x101f890, Func Offset: 0x30
	// Line 2474, Address: 0x101f89c, Func Offset: 0x3c
	// Line 2475, Address: 0x101f8a4, Func Offset: 0x44
	// Line 2478, Address: 0x101f8b0, Func Offset: 0x50
	// Line 2483, Address: 0x101f8cc, Func Offset: 0x6c
	// Line 2485, Address: 0x101f8dc, Func Offset: 0x7c
	// Line 2487, Address: 0x101f8f4, Func Offset: 0x94
	// Line 2488, Address: 0x101f900, Func Offset: 0xa0
	// Line 2490, Address: 0x101f920, Func Offset: 0xc0
	// Line 2497, Address: 0x101f92c, Func Offset: 0xcc
	// Line 2499, Address: 0x101f958, Func Offset: 0xf8
	// Line 2500, Address: 0x101f964, Func Offset: 0x104
	// Line 2501, Address: 0x101f96c, Func Offset: 0x10c
	// Line 2502, Address: 0x101f978, Func Offset: 0x118
	// Line 2504, Address: 0x101f984, Func Offset: 0x124
	// Func End, Address: 0x101f990, Func Offset: 0x130
}

// 
// Start address: 0x101f990
void egg8meca_chg2(_anon0* pActwk)
{
	// Line 2511, Address: 0x101f990, Func Offset: 0
	// Line 2512, Address: 0x101f998, Func Offset: 0x8
	// Line 2514, Address: 0x101f9a8, Func Offset: 0x18
	// Line 2515, Address: 0x101f9b4, Func Offset: 0x24
	// Line 2519, Address: 0x101f9c4, Func Offset: 0x34
	// Line 2520, Address: 0x101f9f0, Func Offset: 0x60
	// Line 2524, Address: 0x101f9fc, Func Offset: 0x6c
	// Line 2526, Address: 0x101fa18, Func Offset: 0x88
	// Line 2527, Address: 0x101fa24, Func Offset: 0x94
	// Line 2528, Address: 0x101fa2c, Func Offset: 0x9c
	// Line 2530, Address: 0x101fa38, Func Offset: 0xa8
	// Func End, Address: 0x101fa44, Func Offset: 0xb4
}

// 
// Start address: 0x101fa50
void egg8meca_chg3(_anon0* pActwk, _anon0* pEggwk)
{
	// Line 2537, Address: 0x101fa50, Func Offset: 0
	// Line 2538, Address: 0x101fa5c, Func Offset: 0xc
	// Line 2539, Address: 0x101fa6c, Func Offset: 0x1c
	// Line 2541, Address: 0x101fa7c, Func Offset: 0x2c
	// Line 2543, Address: 0x101fa8c, Func Offset: 0x3c
	// Line 2544, Address: 0x101fa98, Func Offset: 0x48
	// Line 2548, Address: 0x101faa8, Func Offset: 0x58
	// Line 2549, Address: 0x101fad4, Func Offset: 0x84
	// Line 2553, Address: 0x101fae0, Func Offset: 0x90
	// Line 2555, Address: 0x101faf8, Func Offset: 0xa8
	// Line 2556, Address: 0x101fb00, Func Offset: 0xb0
	// Line 2557, Address: 0x101fb08, Func Offset: 0xb8
	// Line 2558, Address: 0x101fb14, Func Offset: 0xc4
	// Line 2560, Address: 0x101fb1c, Func Offset: 0xcc
	// Func End, Address: 0x101fb28, Func Offset: 0xd8
}

// 
// Start address: 0x101fb30
void egg8meca_fire(_anon0* pActwk, _anon0* pEggwk)
{
	// Line 2567, Address: 0x101fb30, Func Offset: 0
	// Line 2568, Address: 0x101fb40, Func Offset: 0x10
	// Line 2569, Address: 0x101fb50, Func Offset: 0x20
	// Line 2571, Address: 0x101fb60, Func Offset: 0x30
	// Line 2573, Address: 0x101fb80, Func Offset: 0x50
	// Line 2575, Address: 0x101fbbc, Func Offset: 0x8c
	// Line 2576, Address: 0x101fbc8, Func Offset: 0x98
	// Line 2577, Address: 0x101fbd8, Func Offset: 0xa8
	// Line 2578, Address: 0x101fbe0, Func Offset: 0xb0
	// Line 2580, Address: 0x101fbec, Func Offset: 0xbc
	// Func End, Address: 0x101fbfc, Func Offset: 0xcc
}

// 
// Start address: 0x101fc00
void egg8meca_hane_reset(_anon0* pActwk, _anon0* pEggwk)
{
	// Line 2587, Address: 0x101fc00, Func Offset: 0
	// Line 2588, Address: 0x101fc0c, Func Offset: 0xc
	// Line 2589, Address: 0x101fc1c, Func Offset: 0x1c
	// Line 2591, Address: 0x101fc2c, Func Offset: 0x2c
	// Line 2593, Address: 0x101fc44, Func Offset: 0x44
	// Line 2594, Address: 0x101fc54, Func Offset: 0x54
	// Line 2595, Address: 0x101fc64, Func Offset: 0x64
	// Line 2596, Address: 0x101fc70, Func Offset: 0x70
	// Line 2597, Address: 0x101fc80, Func Offset: 0x80
	// Line 2601, Address: 0x101fc90, Func Offset: 0x90
	// Line 2603, Address: 0x101fcb8, Func Offset: 0xb8
	// Line 2604, Address: 0x101fcc8, Func Offset: 0xc8
	// Line 2605, Address: 0x101fcd0, Func Offset: 0xd0
	// Line 2606, Address: 0x101fcd8, Func Offset: 0xd8
	// Line 2607, Address: 0x101fce0, Func Offset: 0xe0
	// Line 2609, Address: 0x101fcec, Func Offset: 0xec
	// Func End, Address: 0x101fcf8, Func Offset: 0xf8
}

// 
// Start address: 0x101fd00
void egg8meca_dead(_anon0* pActwk, _anon0* pEggwk)
{
	// Line 2616, Address: 0x101fd00, Func Offset: 0
	// Line 2617, Address: 0x101fd0c, Func Offset: 0xc
	// Line 2618, Address: 0x101fd1c, Func Offset: 0x1c
	// Line 2619, Address: 0x101fd2c, Func Offset: 0x2c
	// Func End, Address: 0x101fd38, Func Offset: 0x38
}

// 
// Start address: 0x101fd40
void egg8meca_tobi(_anon0* pActwk, _anon0* pEggwk)
{
	short wk;
	// Line 2626, Address: 0x101fd40, Func Offset: 0
	// Line 2629, Address: 0x101fd50, Func Offset: 0x10
	// Line 2630, Address: 0x101fd60, Func Offset: 0x20
	// Line 2632, Address: 0x101fd70, Func Offset: 0x30
	// Line 2633, Address: 0x101fdb4, Func Offset: 0x74
	// Line 2637, Address: 0x101fdc0, Func Offset: 0x80
	// Line 2638, Address: 0x101fdf4, Func Offset: 0xb4
	// Func End, Address: 0x101fe04, Func Offset: 0xc4
}

// 
// Start address: 0x101fe10
void hane_ctrl(_anon0* pActwk)
{
	unsigned char FlagWk;
	// Line 2652, Address: 0x101fe10, Func Offset: 0
	// Line 2655, Address: 0x101fe20, Func Offset: 0x10
	// Line 2656, Address: 0x101fe2c, Func Offset: 0x1c
	// Line 2658, Address: 0x101fe3c, Func Offset: 0x2c
	// Line 2659, Address: 0x101fe4c, Func Offset: 0x3c
	// Line 2660, Address: 0x101fe64, Func Offset: 0x54
	// Line 2661, Address: 0x101fe70, Func Offset: 0x60
	// Line 2662, Address: 0x101fe78, Func Offset: 0x68
	// Line 2664, Address: 0x101fe84, Func Offset: 0x74
	// Line 2666, Address: 0x101fe8c, Func Offset: 0x7c
	// Line 2667, Address: 0x101fe94, Func Offset: 0x84
	// Line 2669, Address: 0x101fea4, Func Offset: 0x94
	// Line 2670, Address: 0x101febc, Func Offset: 0xac
	// Line 2671, Address: 0x101fecc, Func Offset: 0xbc
	// Line 2672, Address: 0x101fed8, Func Offset: 0xc8
	// Line 2673, Address: 0x101fee0, Func Offset: 0xd0
	// Line 2674, Address: 0x101fef0, Func Offset: 0xe0
	// Line 2678, Address: 0x101fefc, Func Offset: 0xec
	// Func End, Address: 0x101ff10, Func Offset: 0x100
}

// 
// Start address: 0x101ff10
void hane_stop(_anon0* pActwk)
{
	// Line 2684, Address: 0x101ff10, Func Offset: 0
	// Line 2685, Address: 0x101ff18, Func Offset: 0x8
	// Line 2686, Address: 0x101ff30, Func Offset: 0x20
	// Line 2688, Address: 0x101ff48, Func Offset: 0x38
	// Line 2690, Address: 0x101ff68, Func Offset: 0x58
	// Line 2691, Address: 0x101ff78, Func Offset: 0x68
	// Line 2692, Address: 0x101ff80, Func Offset: 0x70
	// Line 2696, Address: 0x101ff88, Func Offset: 0x78
	// Line 2698, Address: 0x101ff94, Func Offset: 0x84
	// Line 2699, Address: 0x101ffb8, Func Offset: 0xa8
	// Line 2700, Address: 0x101ffc8, Func Offset: 0xb8
	// Line 2705, Address: 0x101ffd0, Func Offset: 0xc0
	// Line 2706, Address: 0x1020000, Func Offset: 0xf0
	// Line 2707, Address: 0x1020008, Func Offset: 0xf8
	// Line 2714, Address: 0x1020018, Func Offset: 0x108
	// Func End, Address: 0x1020024, Func Offset: 0x114
}

// 
// Start address: 0x1020030
void hane_roll(_anon0* pActwk)
{
	// Line 2720, Address: 0x1020030, Func Offset: 0
	// Line 2721, Address: 0x102003c, Func Offset: 0xc
	// Line 2723, Address: 0x1020054, Func Offset: 0x24
	// Line 2725, Address: 0x1020060, Func Offset: 0x30
	// Line 2730, Address: 0x1020084, Func Offset: 0x54
	// Line 2731, Address: 0x102008c, Func Offset: 0x5c
	// Line 2735, Address: 0x102009c, Func Offset: 0x6c
	// Line 2738, Address: 0x10200a8, Func Offset: 0x78
	// Line 2739, Address: 0x10200d8, Func Offset: 0xa8
	// Line 2740, Address: 0x10200e0, Func Offset: 0xb0
	// Line 2742, Address: 0x10200f0, Func Offset: 0xc0
	// Func End, Address: 0x1020100, Func Offset: 0xd0
}

// 
// Start address: 0x1020100
void futa_roll(_anon0* pActwk)
{
	// Line 2748, Address: 0x1020100, Func Offset: 0
	// Line 2749, Address: 0x1020108, Func Offset: 0x8
	// Line 2751, Address: 0x1020118, Func Offset: 0x18
	// Line 2753, Address: 0x1020130, Func Offset: 0x30
	// Line 2754, Address: 0x102013c, Func Offset: 0x3c
	// Line 2756, Address: 0x102015c, Func Offset: 0x5c
	// Line 2757, Address: 0x1020164, Func Offset: 0x64
	// Line 2761, Address: 0x1020170, Func Offset: 0x70
	// Func End, Address: 0x102017c, Func Offset: 0x7c
}

// 
// Start address: 0x1020180
void egg8hane(_anon0* pActwk)
{
	_anon0* pMecawk;
	_anon0* pEggwk;
	int ret;
	// Line 3039, Address: 0x1020180, Func Offset: 0
	// Line 3043, Address: 0x1020198, Func Offset: 0x18
	// Line 3044, Address: 0x10201c0, Func Offset: 0x40
	// Line 3046, Address: 0x10201e4, Func Offset: 0x64
	// Line 3047, Address: 0x10201f8, Func Offset: 0x78
	// Line 3053, Address: 0x102020c, Func Offset: 0x8c
	// Line 3055, Address: 0x1020264, Func Offset: 0xe4
	// Line 3059, Address: 0x102026c, Func Offset: 0xec
	// Line 3061, Address: 0x1020284, Func Offset: 0x104
	// Line 3062, Address: 0x1020294, Func Offset: 0x114
	// Line 3064, Address: 0x10202b4, Func Offset: 0x134
	// Line 3065, Address: 0x10202c4, Func Offset: 0x144
	// Line 3066, Address: 0x10202d4, Func Offset: 0x154
	// Line 3068, Address: 0x10202f4, Func Offset: 0x174
	// Line 3069, Address: 0x1020304, Func Offset: 0x184
	// Line 3071, Address: 0x102030c, Func Offset: 0x18c
	// Line 3072, Address: 0x102031c, Func Offset: 0x19c
	// Line 3076, Address: 0x102032c, Func Offset: 0x1ac
	// Line 3077, Address: 0x1020338, Func Offset: 0x1b8
	// Func End, Address: 0x1020354, Func Offset: 0x1d4
}

// 
// Start address: 0x1020360
int egg8hane_ini(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk)
{
	// Line 3084, Address: 0x1020360, Func Offset: 0
	// Line 3085, Address: 0x1020374, Func Offset: 0x14
	// Line 3086, Address: 0x1020380, Func Offset: 0x20
	// Line 3087, Address: 0x102038c, Func Offset: 0x2c
	// Line 3088, Address: 0x1020398, Func Offset: 0x38
	// Line 3089, Address: 0x10203a4, Func Offset: 0x44
	// Line 3090, Address: 0x10203b0, Func Offset: 0x50
	// Line 3091, Address: 0x10203bc, Func Offset: 0x5c
	// Line 3093, Address: 0x10203cc, Func Offset: 0x6c
	// Line 3094, Address: 0x10203e8, Func Offset: 0x88
	// Line 3097, Address: 0x10203f4, Func Offset: 0x94
	// Line 3098, Address: 0x10203fc, Func Offset: 0x9c
	// Line 3100, Address: 0x1020404, Func Offset: 0xa4
	// Line 3101, Address: 0x1020408, Func Offset: 0xa8
	// Func End, Address: 0x1020418, Func Offset: 0xb8
}

// 
// Start address: 0x1020420
int egg8hane_demo(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk)
{
	// Line 3108, Address: 0x1020420, Func Offset: 0
	// Line 3109, Address: 0x1020434, Func Offset: 0x14
	// Line 3111, Address: 0x1020444, Func Offset: 0x24
	// Line 3112, Address: 0x102045c, Func Offset: 0x3c
	// Line 3113, Address: 0x1020464, Func Offset: 0x44
	// Line 3114, Address: 0x102046c, Func Offset: 0x4c
	// Line 3116, Address: 0x1020474, Func Offset: 0x54
	// Line 3119, Address: 0x1020480, Func Offset: 0x60
	// Line 3120, Address: 0x1020484, Func Offset: 0x64
	// Func End, Address: 0x1020494, Func Offset: 0x74
}

// 
// Start address: 0x10204a0
int egg8hane_normal(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 3127, Address: 0x10204a0, Func Offset: 0
	// Line 3128, Address: 0x10204b0, Func Offset: 0x10
	// Line 3129, Address: 0x10204c8, Func Offset: 0x28
	// Line 3130, Address: 0x10204d0, Func Offset: 0x30
	// Line 3131, Address: 0x10204dc, Func Offset: 0x3c
	// Line 3135, Address: 0x10204e8, Func Offset: 0x48
	// Line 3136, Address: 0x1020514, Func Offset: 0x74
	// Line 3137, Address: 0x102051c, Func Offset: 0x7c
	// Line 3138, Address: 0x1020528, Func Offset: 0x88
	// Line 3139, Address: 0x1020538, Func Offset: 0x98
	// Line 3143, Address: 0x1020544, Func Offset: 0xa4
	// Line 3145, Address: 0x102056c, Func Offset: 0xcc
	// Line 3146, Address: 0x1020584, Func Offset: 0xe4
	// Line 3147, Address: 0x1020590, Func Offset: 0xf0
	// Line 3148, Address: 0x10205b0, Func Offset: 0x110
	// Line 3152, Address: 0x10205bc, Func Offset: 0x11c
	// Line 3153, Address: 0x10205cc, Func Offset: 0x12c
	// Line 3157, Address: 0x10205dc, Func Offset: 0x13c
	// Line 3158, Address: 0x10205ec, Func Offset: 0x14c
	// Line 3159, Address: 0x10205f0, Func Offset: 0x150
	// Func End, Address: 0x1020600, Func Offset: 0x160
}

// 
// Start address: 0x1020600
int egg8hane_fire1(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk)
{
	short PosWk;
	char* pResetTbl;
	int lwk;
	short hane_fire_tbl[16];
	// Line 3188, Address: 0x1020600, Func Offset: 0
	// Line 3215, Address: 0x1020620, Func Offset: 0x20
	// Line 3218, Address: 0x1020654, Func Offset: 0x54
	// Line 3220, Address: 0x1020664, Func Offset: 0x64
	// Line 3221, Address: 0x102067c, Func Offset: 0x7c
	// Line 3225, Address: 0x102068c, Func Offset: 0x8c
	// Line 3226, Address: 0x10206a0, Func Offset: 0xa0
	// Line 3228, Address: 0x10206bc, Func Offset: 0xbc
	// Line 3229, Address: 0x10206cc, Func Offset: 0xcc
	// Line 3232, Address: 0x10206dc, Func Offset: 0xdc
	// Line 3236, Address: 0x10206e4, Func Offset: 0xe4
	// Line 3238, Address: 0x1020708, Func Offset: 0x108
	// Line 3239, Address: 0x1020710, Func Offset: 0x110
	// Line 3242, Address: 0x1020720, Func Offset: 0x120
	// Line 3246, Address: 0x1020728, Func Offset: 0x128
	// Line 3248, Address: 0x1020764, Func Offset: 0x164
	// Line 3249, Address: 0x1020770, Func Offset: 0x170
	// Line 3250, Address: 0x1020780, Func Offset: 0x180
	// Line 3252, Address: 0x1020788, Func Offset: 0x188
	// Line 3254, Address: 0x1020790, Func Offset: 0x190
	// Line 3255, Address: 0x10207a8, Func Offset: 0x1a8
	// Line 3258, Address: 0x10207b8, Func Offset: 0x1b8
	// Line 3260, Address: 0x1020808, Func Offset: 0x208
	// Line 3261, Address: 0x1020810, Func Offset: 0x210
	// Line 3262, Address: 0x1020820, Func Offset: 0x220
	// Line 3263, Address: 0x1020828, Func Offset: 0x228
	// Line 3265, Address: 0x1020838, Func Offset: 0x238
	// Line 3267, Address: 0x1020850, Func Offset: 0x250
	// Line 3269, Address: 0x102086c, Func Offset: 0x26c
	// Line 3271, Address: 0x1020878, Func Offset: 0x278
	// Line 3272, Address: 0x102087c, Func Offset: 0x27c
	// Line 3273, Address: 0x1020890, Func Offset: 0x290
	// Line 3274, Address: 0x1020898, Func Offset: 0x298
	// Line 3275, Address: 0x102089c, Func Offset: 0x29c
	// Line 3276, Address: 0x10208a0, Func Offset: 0x2a0
	// Line 3277, Address: 0x10208a4, Func Offset: 0x2a4
	// Line 3279, Address: 0x10208b4, Func Offset: 0x2b4
	// Line 3280, Address: 0x10208c0, Func Offset: 0x2c0
	// Line 3281, Address: 0x10208d0, Func Offset: 0x2d0
	// Line 3282, Address: 0x10208e0, Func Offset: 0x2e0
	// Line 3284, Address: 0x10208e8, Func Offset: 0x2e8
	// Line 3286, Address: 0x10208f4, Func Offset: 0x2f4
	// Line 3287, Address: 0x1020904, Func Offset: 0x304
	// Line 3288, Address: 0x1020908, Func Offset: 0x308
	// Line 3289, Address: 0x1020910, Func Offset: 0x310
	// Line 3290, Address: 0x1020914, Func Offset: 0x314
	// Line 3291, Address: 0x1020918, Func Offset: 0x318
	// Line 3292, Address: 0x102091c, Func Offset: 0x31c
	// Line 3294, Address: 0x102092c, Func Offset: 0x32c
	// Line 3295, Address: 0x1020938, Func Offset: 0x338
	// Line 3296, Address: 0x1020948, Func Offset: 0x348
	// Line 3298, Address: 0x1020958, Func Offset: 0x358
	// Line 3300, Address: 0x1020970, Func Offset: 0x370
	// Line 3302, Address: 0x10209c0, Func Offset: 0x3c0
	// Line 3303, Address: 0x10209c8, Func Offset: 0x3c8
	// Line 3304, Address: 0x10209d8, Func Offset: 0x3d8
	// Line 3306, Address: 0x10209e0, Func Offset: 0x3e0
	// Line 3307, Address: 0x10209f0, Func Offset: 0x3f0
	// Line 3308, Address: 0x10209f8, Func Offset: 0x3f8
	// Line 3313, Address: 0x1020a08, Func Offset: 0x408
	// Line 3317, Address: 0x1020a10, Func Offset: 0x410
	// Line 3318, Address: 0x1020a28, Func Offset: 0x428
	// Line 3320, Address: 0x1020a40, Func Offset: 0x440
	// Line 3322, Address: 0x1020a54, Func Offset: 0x454
	// Line 3323, Address: 0x1020a60, Func Offset: 0x460
	// Line 3324, Address: 0x1020a80, Func Offset: 0x480
	// Line 3325, Address: 0x1020a8c, Func Offset: 0x48c
	// Line 3327, Address: 0x1020a94, Func Offset: 0x494
	// Line 3331, Address: 0x1020aa0, Func Offset: 0x4a0
	// Line 3333, Address: 0x1020ac4, Func Offset: 0x4c4
	// Line 3334, Address: 0x1020acc, Func Offset: 0x4cc
	// Line 3335, Address: 0x1020adc, Func Offset: 0x4dc
	// Line 3337, Address: 0x1020ae4, Func Offset: 0x4e4
	// Line 3340, Address: 0x1020af0, Func Offset: 0x4f0
	// Line 3344, Address: 0x1020af8, Func Offset: 0x4f8
	// Line 3346, Address: 0x1020b1c, Func Offset: 0x51c
	// Line 3347, Address: 0x1020b28, Func Offset: 0x528
	// Line 3348, Address: 0x1020b38, Func Offset: 0x538
	// Line 3349, Address: 0x1020b40, Func Offset: 0x540
	// Line 3350, Address: 0x1020b48, Func Offset: 0x548
	// Line 3353, Address: 0x1020b50, Func Offset: 0x550
	// Line 3357, Address: 0x1020b58, Func Offset: 0x558
	// Line 3359, Address: 0x1020b7c, Func Offset: 0x57c
	// Line 3361, Address: 0x1020b8c, Func Offset: 0x58c
	// Line 3362, Address: 0x1020b94, Func Offset: 0x594
	// Line 3363, Address: 0x1020b9c, Func Offset: 0x59c
	// Line 3365, Address: 0x1020ba8, Func Offset: 0x5a8
	// Line 3367, Address: 0x1020bc8, Func Offset: 0x5c8
	// Line 3368, Address: 0x1020bd8, Func Offset: 0x5d8
	// Line 3371, Address: 0x1020be4, Func Offset: 0x5e4
	// Line 3372, Address: 0x1020c00, Func Offset: 0x600
	// Line 3375, Address: 0x1020c08, Func Offset: 0x608
	// Line 3377, Address: 0x1020c44, Func Offset: 0x644
	// Line 3380, Address: 0x1020c50, Func Offset: 0x650
	// Line 3386, Address: 0x1020c5c, Func Offset: 0x65c
	// Line 3387, Address: 0x1020c60, Func Offset: 0x660
	// Func End, Address: 0x1020c7c, Func Offset: 0x67c
}

// 
// Start address: 0x1020c80
int egg8hane_wait(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 3394, Address: 0x1020c80, Func Offset: 0
	// Line 3395, Address: 0x1020c90, Func Offset: 0x10
	// Line 3396, Address: 0x1020ca8, Func Offset: 0x28
	// Line 3399, Address: 0x1020cc0, Func Offset: 0x40
	// Line 3401, Address: 0x1020cd8, Func Offset: 0x58
	// Line 3404, Address: 0x1020ce4, Func Offset: 0x64
	// Line 3405, Address: 0x1020ce8, Func Offset: 0x68
	// Func End, Address: 0x1020cf8, Func Offset: 0x78
}

// 
// Start address: 0x1020d00
int egg8hane_kill(_anon0* pActwk)
{
	// Line 3412, Address: 0x1020d00, Func Offset: 0
	// Line 3413, Address: 0x1020d0c, Func Offset: 0xc
	// Line 3415, Address: 0x1020d1c, Func Offset: 0x1c
	// Line 3416, Address: 0x1020d24, Func Offset: 0x24
	// Line 3418, Address: 0x1020d2c, Func Offset: 0x2c
	// Line 3419, Address: 0x1020d38, Func Offset: 0x38
	// Line 3421, Address: 0x1020d44, Func Offset: 0x44
	// Line 3422, Address: 0x1020d5c, Func Offset: 0x5c
	// Line 3426, Address: 0x1020d6c, Func Offset: 0x6c
	// Line 3427, Address: 0x1020d74, Func Offset: 0x74
	// Line 3428, Address: 0x1020d7c, Func Offset: 0x7c
	// Line 3430, Address: 0x1020d8c, Func Offset: 0x8c
	// Line 3432, Address: 0x1020da4, Func Offset: 0xa4
	// Line 3433, Address: 0x1020db4, Func Offset: 0xb4
	// Line 3435, Address: 0x1020dbc, Func Offset: 0xbc
	// Line 3440, Address: 0x1020dcc, Func Offset: 0xcc
	// Line 3441, Address: 0x1020de4, Func Offset: 0xe4
	// Line 3442, Address: 0x1020dfc, Func Offset: 0xfc
	// Line 3444, Address: 0x1020e0c, Func Offset: 0x10c
	// Line 3445, Address: 0x1020e28, Func Offset: 0x128
	// Line 3448, Address: 0x1020e40, Func Offset: 0x140
	// Line 3449, Address: 0x1020e64, Func Offset: 0x164
	// Line 3451, Address: 0x1020e6c, Func Offset: 0x16c
	// Line 3452, Address: 0x1020e90, Func Offset: 0x190
	// Line 3457, Address: 0x1020e98, Func Offset: 0x198
	// Line 3461, Address: 0x1020ea8, Func Offset: 0x1a8
	// Line 3463, Address: 0x1020ed8, Func Offset: 0x1d8
	// Line 3465, Address: 0x1020ee4, Func Offset: 0x1e4
	// Line 3467, Address: 0x1020ee8, Func Offset: 0x1e8
	// Func End, Address: 0x1020ef8, Func Offset: 0x1f8
}

// 
// Start address: 0x1020f00
void hane_no_reset(_anon0* pActwk, _anon0* pMecawk, _anon0* pEggwk)
{
	char* pResetTbl;
	int HaneNum;
	int KillNo;
	// Line 3520, Address: 0x1020f00, Func Offset: 0
	// Line 3524, Address: 0x1020f1c, Func Offset: 0x1c
	// Line 3526, Address: 0x1020f3c, Func Offset: 0x3c
	// Line 3527, Address: 0x1020f4c, Func Offset: 0x4c
	// Line 3531, Address: 0x1020f54, Func Offset: 0x54
	// Line 3533, Address: 0x1020f6c, Func Offset: 0x6c
	// Line 3534, Address: 0x1020f74, Func Offset: 0x74
	// Line 3538, Address: 0x1020f7c, Func Offset: 0x7c
	// Line 3539, Address: 0x1020f88, Func Offset: 0x88
	// Line 3540, Address: 0x1020f94, Func Offset: 0x94
	// Line 3542, Address: 0x1020fb0, Func Offset: 0xb0
	// Line 3543, Address: 0x1020fcc, Func Offset: 0xcc
	// Func End, Address: 0x1020fe4, Func Offset: 0xe4
}

// 
// Start address: 0x1020ff0
void egg8hane_posiset(_anon0* pActwk, _anon0* pMecawk)
{
	// Line 3558, Address: 0x1020ff0, Func Offset: 0
	// Line 3559, Address: 0x1021000, Func Offset: 0x10
	// Line 3560, Address: 0x1021010, Func Offset: 0x20
	// Line 3561, Address: 0x1021044, Func Offset: 0x54
	// Line 3562, Address: 0x1021078, Func Offset: 0x88
	// Func End, Address: 0x1021088, Func Offset: 0x98
}

// 
// Start address: 0x1021090
void hane_offs_set(_anon0* pActwk, _anon0* pMecawk)
{
	_anon1* pOffsTbl;
	short hankeiwk;
	// Line 3655, Address: 0x1021090, Func Offset: 0
	// Line 3659, Address: 0x10210a4, Func Offset: 0x14
	// Line 3661, Address: 0x10210e0, Func Offset: 0x50
	// Line 3662, Address: 0x10210f0, Func Offset: 0x60
	// Line 3664, Address: 0x102112c, Func Offset: 0x9c
	// Line 3666, Address: 0x1021168, Func Offset: 0xd8
	// Line 3667, Address: 0x1021178, Func Offset: 0xe8
	// Line 3668, Address: 0x1021184, Func Offset: 0xf4
	// Func End, Address: 0x1021198, Func Offset: 0x108
}

// 
// Start address: 0x10211a0
void hane_rol_l(_anon0* pActwk)
{
	// Line 3682, Address: 0x10211a0, Func Offset: 0
	// Line 3683, Address: 0x10211ac, Func Offset: 0xc
	// Line 3684, Address: 0x10211d8, Func Offset: 0x38
	// Line 3687, Address: 0x10211e4, Func Offset: 0x44
	// Line 3688, Address: 0x10211f0, Func Offset: 0x50
	// Func End, Address: 0x1021200, Func Offset: 0x60
}

// 
// Start address: 0x1021200
void hane_rol_r(_anon0* pActwk)
{
	// Line 3691, Address: 0x1021200, Func Offset: 0
	// Line 3692, Address: 0x102120c, Func Offset: 0xc
	// Line 3693, Address: 0x1021230, Func Offset: 0x30
	// Line 3696, Address: 0x1021238, Func Offset: 0x38
	// Line 3697, Address: 0x1021244, Func Offset: 0x44
	// Func End, Address: 0x1021254, Func Offset: 0x54
}

// 
// Start address: 0x1021260
void rol_sound(_anon0* pActwk)
{
	// Line 3700, Address: 0x1021260, Func Offset: 0
	// Line 3701, Address: 0x102126c, Func Offset: 0xc
	// Line 3702, Address: 0x1021298, Func Offset: 0x38
	// Line 3704, Address: 0x10212a4, Func Offset: 0x44
	// Func End, Address: 0x10212b4, Func Offset: 0x54
}

// 
// Start address: 0x10212c0
void egg8hibana(_anon0* pActwk)
{
	// Line 3757, Address: 0x10212c0, Func Offset: 0
	// Line 3758, Address: 0x10212cc, Func Offset: 0xc
	// Line 3759, Address: 0x1021318, Func Offset: 0x58
	// Line 3761, Address: 0x1021324, Func Offset: 0x64
	// Func End, Address: 0x1021334, Func Offset: 0x74
}

// 
// Start address: 0x1021340
unsigned int egg8hibana_ini(_anon0* pActwk)
{
	// Line 3767, Address: 0x1021340, Func Offset: 0
	// Line 3768, Address: 0x102134c, Func Offset: 0xc
	// Line 3769, Address: 0x102135c, Func Offset: 0x1c
	// Line 3770, Address: 0x1021368, Func Offset: 0x28
	// Line 3771, Address: 0x1021374, Func Offset: 0x34
	// Line 3772, Address: 0x1021380, Func Offset: 0x40
	// Line 3773, Address: 0x102138c, Func Offset: 0x4c
	// Line 3774, Address: 0x1021398, Func Offset: 0x58
	// Line 3776, Address: 0x10213a8, Func Offset: 0x68
	// Line 3777, Address: 0x10213b4, Func Offset: 0x74
	// Func End, Address: 0x10213c4, Func Offset: 0x84
}

// 
// Start address: 0x10213d0
unsigned int egg8hibana_1(_anon0* pActwk)
{
	_anon0* pMecawk;
	short* pOffsTbl;
	// Line 3783, Address: 0x10213d0, Func Offset: 0
	// Line 3787, Address: 0x10213e4, Func Offset: 0x14
	// Line 3788, Address: 0x102140c, Func Offset: 0x3c
	// Line 3789, Address: 0x1021418, Func Offset: 0x48
	// Line 3791, Address: 0x1021424, Func Offset: 0x54
	// Line 3792, Address: 0x1021470, Func Offset: 0xa0
	// Line 3793, Address: 0x102148c, Func Offset: 0xbc
	// Line 3795, Address: 0x10214a0, Func Offset: 0xd0
	// Line 3796, Address: 0x10214c4, Func Offset: 0xf4
	// Line 3799, Address: 0x10214dc, Func Offset: 0x10c
	// Line 3800, Address: 0x1021500, Func Offset: 0x130
	// Line 3801, Address: 0x1021524, Func Offset: 0x154
	// Line 3805, Address: 0x102152c, Func Offset: 0x15c
	// Line 3807, Address: 0x1021534, Func Offset: 0x164
	// Line 3808, Address: 0x1021558, Func Offset: 0x188
	// Line 3813, Address: 0x1021560, Func Offset: 0x190
	// Line 3814, Address: 0x1021578, Func Offset: 0x1a8
	// Line 3816, Address: 0x1021584, Func Offset: 0x1b4
	// Line 3818, Address: 0x1021588, Func Offset: 0x1b8
	// Func End, Address: 0x10215a0, Func Offset: 0x1d0
}

// 
// Start address: 0x10215a0
void make_meca(_anon0* pActwk)
{
	_anon0* pNewact;
	// Line 3835, Address: 0x10215a0, Func Offset: 0
	// Line 3838, Address: 0x10215ac, Func Offset: 0xc
	// Line 3839, Address: 0x10215c4, Func Offset: 0x24
	// Line 3840, Address: 0x10215fc, Func Offset: 0x5c
	// Line 3841, Address: 0x1021634, Func Offset: 0x94
	// Line 3842, Address: 0x1021640, Func Offset: 0xa0
	// Line 3843, Address: 0x1021650, Func Offset: 0xb0
	// Line 3847, Address: 0x1021660, Func Offset: 0xc0
	// Func End, Address: 0x1021670, Func Offset: 0xd0
}

// 
// Start address: 0x1021670
void make_hane(_anon0* pActwk)
{
	_anon0* pNewact;
	unsigned char hanecnt;
	unsigned char hanepat;
	// Line 3860, Address: 0x1021670, Func Offset: 0
	// Line 3864, Address: 0x1021684, Func Offset: 0x14
	// Line 3868, Address: 0x1021690, Func Offset: 0x20
	// Line 3872, Address: 0x10216a8, Func Offset: 0x38
	// Line 3873, Address: 0x10216e0, Func Offset: 0x70
	// Line 3874, Address: 0x10216e8, Func Offset: 0x78
	// Line 3875, Address: 0x10216f4, Func Offset: 0x84
	// Line 3876, Address: 0x1021704, Func Offset: 0x94
	// Line 3877, Address: 0x1021714, Func Offset: 0xa4
	// Line 3878, Address: 0x102171c, Func Offset: 0xac
	// Line 3879, Address: 0x1021724, Func Offset: 0xb4
	// Line 3880, Address: 0x102172c, Func Offset: 0xbc
	// Line 3881, Address: 0x102173c, Func Offset: 0xcc
	// Func End, Address: 0x1021754, Func Offset: 0xe4
}

// 
// Start address: 0x1021760
void make_hibana(_anon0* pActwk)
{
	unsigned char cnt;
	_anon0* pNewact;
	// Line 3894, Address: 0x1021760, Func Offset: 0
	// Line 3898, Address: 0x1021770, Func Offset: 0x10
	// Line 3901, Address: 0x1021774, Func Offset: 0x14
	// Line 3905, Address: 0x1021788, Func Offset: 0x28
	// Line 3906, Address: 0x10217c0, Func Offset: 0x60
	// Line 3907, Address: 0x10217cc, Func Offset: 0x6c
	// Line 3908, Address: 0x10217dc, Func Offset: 0x7c
	// Line 3909, Address: 0x10217ec, Func Offset: 0x8c
	// Line 3911, Address: 0x1021800, Func Offset: 0xa0
	// Line 3914, Address: 0x1021810, Func Offset: 0xb0
	// Func End, Address: 0x1021824, Func Offset: 0xc4
}

// 
// Start address: 0x1021830
void egg8_spd_set(_anon0* pActwk, _anon0* pMecawk)
{
	_anon4 spd_tbl[5];
	// Line 3933, Address: 0x1021830, Func Offset: 0
	// Line 3934, Address: 0x102183c, Func Offset: 0xc
	// Line 3957, Address: 0x1021868, Func Offset: 0x38
	// Line 3959, Address: 0x1021890, Func Offset: 0x60
	// Line 3961, Address: 0x10218b8, Func Offset: 0x88
	// Line 3963, Address: 0x10218e0, Func Offset: 0xb0
	// Func End, Address: 0x10218ec, Func Offset: 0xbc
}

// 
// Start address: 0x10218f0
void tobi_set(_anon0* pActwk)
{
	short sinwk;
	short coswk;
	// Line 3976, Address: 0x10218f0, Func Offset: 0
	// Line 3979, Address: 0x10218fc, Func Offset: 0xc
	// Line 3980, Address: 0x1021914, Func Offset: 0x24
	// Line 3982, Address: 0x102192c, Func Offset: 0x3c
	// Line 3983, Address: 0x1021954, Func Offset: 0x64
	// Line 3987, Address: 0x1021960, Func Offset: 0x70
	// Line 3989, Address: 0x1021978, Func Offset: 0x88
	// Line 3990, Address: 0x1021990, Func Offset: 0xa0
	// Line 3994, Address: 0x102199c, Func Offset: 0xac
	// Line 3995, Address: 0x10219c8, Func Offset: 0xd8
	// Line 3996, Address: 0x10219f8, Func Offset: 0x108
	// Line 3997, Address: 0x1021a04, Func Offset: 0x114
	// Line 3998, Address: 0x1021a10, Func Offset: 0x120
	// Line 3999, Address: 0x1021a24, Func Offset: 0x134
	// Line 4000, Address: 0x1021a38, Func Offset: 0x148
	// Func End, Address: 0x1021a48, Func Offset: 0x158
}

// 
// Start address: 0x1021a50
void bom_set(_anon0* pActwk)
{
	_anon0* pNewact;
	int rnd;
	_anon5 wk1;
	_anon5 wk2;
	// Line 4013, Address: 0x1021a50, Func Offset: 0
	// Line 4018, Address: 0x1021a60, Func Offset: 0x10
	// Line 4020, Address: 0x1021a90, Func Offset: 0x40
	// Line 4021, Address: 0x1021aa4, Func Offset: 0x54
	// Line 4022, Address: 0x1021ab0, Func Offset: 0x60
	// Line 4023, Address: 0x1021abc, Func Offset: 0x6c
	// Line 4026, Address: 0x1021ac8, Func Offset: 0x78
	// Line 4027, Address: 0x1021ad4, Func Offset: 0x84
	// Line 4028, Address: 0x1021af4, Func Offset: 0xa4
	// Line 4029, Address: 0x1021b20, Func Offset: 0xd0
	// Line 4030, Address: 0x1021b54, Func Offset: 0x104
	// Line 4032, Address: 0x1021b78, Func Offset: 0x128
	// Line 4037, Address: 0x1021b84, Func Offset: 0x134
	// Func End, Address: 0x1021b98, Func Offset: 0x148
}

