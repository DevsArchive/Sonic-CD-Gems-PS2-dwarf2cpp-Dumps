typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_5)(_anon0*);
typedef int(*type_11)(_anon0*);
typedef void(*type_25)(_anon0*);
typedef int(*type_27)(_anon0*);
typedef void(*type_29)(_anon0*);
typedef void(*type_31)(_anon0*);
typedef int(*type_35)(_anon0*);
typedef int(*type_37)(_anon0*);
typedef int(*type_42)(_anon0*);
typedef int(*type_45)(_anon0*);
typedef int(*type_53)(_anon0*);
typedef int(*type_54)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon7 type_1[0];
typedef short type_2[16];
typedef int type_3[24];
typedef short type_4[6];
typedef void(*type_6)(_anon0*)[2];
typedef short type_7[4];
typedef short type_8[6];
typedef _anon1* type_9[7];
typedef tagPALETTEENTRY type_10[9];
typedef int(*type_12)(_anon0*)[7];
typedef unsigned char type_13[10];
typedef unsigned char* type_14[2];
typedef unsigned char* type_15[1];
typedef unsigned char* type_16[1];
typedef unsigned char type_17[3];
typedef unsigned char type_18[6];
typedef tagPALETTEENTRY type_19[9];
typedef _anon1* type_20[3];
typedef _anon1* type_21[16];
typedef _anon1* type_22[4];
typedef unsigned char type_23[2];
typedef unsigned char type_24[22];
typedef void(*type_26)(_anon0*)[5];
typedef int(*type_28)(_anon0*)[3];
typedef void(*type_30)(_anon0*)[2];
typedef void(*type_32)(_anon0*)[5];
typedef short type_33[8];
typedef _anon1* type_34[1];
typedef int(*type_36)(_anon0*)[3];
typedef int(*type_38)(_anon0*)[4];
typedef _anon0 type_39[128];
typedef _anon1* type_40[5];
typedef unsigned char* type_41[4];
typedef int(*type_43)(_anon0*)[7];
typedef _anon1* type_44[1];
typedef int(*type_46)(_anon0*)[3];
typedef unsigned char type_47[4];
typedef unsigned char type_48[6];
typedef unsigned char type_49[7];
typedef unsigned char type_50[12];
typedef unsigned char type_51[4];
typedef _anon1* type_52[2];
typedef int(*type_55)(_anon0*)[5];
typedef int(*type_56)(_anon0*)[3];
typedef _anon1* type_57[6];
typedef _anon1* type_58[1];

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

struct tagPALETTEENTRY
{
	unsigned char peRed;
	unsigned char peGreen;
	unsigned char peBlue;
	unsigned char peFlags;
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

unsigned char egg5_pchg0[4];
unsigned char egg5_pchg1[6];
unsigned char egg5_pchg2[6];
unsigned char egg5_pchg3[10];
unsigned char* egg5_pchg[4];
unsigned char egg5catch_pchg0[3];
unsigned char egg5catch_pchg1[4];
unsigned char* egg5catch_pchg[2];
unsigned char egg5hibana_pchg0[7];
unsigned char* egg5hibana_pchg[1];
unsigned char egg5bakuha_pat0[12];
unsigned char* egg5bakuha_pchg[1];
_anon1 spr_egg5_pat00;
_anon1 spr_egg5_pat01;
_anon1 spr_egg5_pat02;
_anon1 spr_egg5_pat03;
_anon1 spr_egg5_pat04;
_anon1 spr_egg5_pat05;
_anon1 spr_egg5_pat06;
_anon1 spr_egg5_pat07;
_anon1 spr_egg5_pat08;
_anon1 spr_egg5_pat09;
_anon1 spr_egg5_pat10;
_anon1 spr_egg5_pat11;
_anon1 spr_egg5_pat12;
_anon1 spr_egg5_pat13;
_anon1 spr_egg5_pat14;
_anon1 spr_egg5_pat15;
_anon1* egg5_pat[16];
_anon1 spr_egg5meca1_pat0;
_anon1* egg5meca1_pat[1];
_anon1 spr_egg5meca2_pat0;
_anon1 spr_egg5meca2_pat1;
_anon1 spr_egg5meca2_pat2;
_anon1 spr_egg5meca2_pat3;
_anon1 spr_egg5meca2_pat4;
_anon1 spr_egg5meca2_pat5;
_anon1* egg5meca2_pat[6];
_anon1 spr_egg5meca3_pat0;
_anon1* egg5meca3_pat[1];
_anon1 spr_egg5pipe_pat0;
_anon1 spr_egg5pipe_pat1;
_anon1 spr_egg5pipe_pat2;
_anon1 spr_egg5pipe_pat3;
_anon1* egg5pipe_pat[4];
_anon1 spr_egg5catch_pat0;
_anon1 spr_egg5catch_pat1;
_anon1 spr_egg5catch_pat2;
_anon1* egg5catch_pat[3];
_anon1 spr_egg5bomb_pat0;
_anon1 spr_egg5bomb_pat1;
_anon1* egg5bomb_pat[2];
_anon1 spr_egg5hibana_pat0;
_anon1 spr_egg5hibana_pat1;
_anon1 spr_egg5hibana_pat2;
_anon1 spr_egg5hibana_pat3;
_anon1 spr_egg5hibana_pat4;
_anon1* egg5hibana_pat[5];
_anon1 spr_egg5hari_pat0;
_anon1* egg5hari_pat[1];
_anon0 actwk[128];
short scralim_n_left;
short scralim_left;
short scralim_n_right;
short scralim_right;
unsigned char bossstart;
short scra_vline;
unsigned char bossflag;
unsigned char generate_flag;
short scr_dir_tbl[6];
short scralim_n_down;
short scralim_down;
int bomb2_tbl[24];
tagPALETTEENTRY* lpcolorwk;
_anon1* bakupat[7];
_anon2 scra_v_posit;
_anon2 scra_h_posit;

void egg5(_anon0* pActwk);
int egg5_ini(_anon0* pActwk);
int egg5_1(_anon0* pActwk);
int egg5_esc(_anon0* pActwk);
void egg5meca1(_anon0* pActwk);
int egg5meca1_ini(_anon0* pActwk);
int egg5meca1_scrset(_anon0* pActwk);
int egg5meca1_scrreset(_anon0* pActwk);
int egg5meca1_normal(_anon0* pActwk);
void egg5meca2(_anon0* pActwk);
int egg5meca2_ini(_anon0* pActwk);
int egg5meca2_ue(_anon0* pActwk);
int egg5meca2_down1(_anon0* pActwk);
int egg5meca2_down2(_anon0* pActwk);
int egg5meca2_kezu(_anon0* pActwk);
int egg5meca2_esc(_anon0* pActwk);
int egg5meca2_end(_anon0* pActwk);
void my_rideonchk(_anon0* pActwk);
void egg5meca3(_anon0* pActwk);
void egg5meca3_ini(_anon0* pActwk);
void egg5meca3_1(_anon0* pActwk);
void egg5pipe(_anon0* pActwk);
void egg5pipe_ini(_anon0* pActwk);
void egg5pipe_1(_anon0* pActwk);
void egg5catch(_anon0* pActwk);
int egg5catch_ini(_anon0* pActwk);
int egg5catch_1st(_anon0* pActwk);
int egg5catch_return(_anon0* pActwk);
int egg5catch_wait(_anon0* pActwk);
int egg5catch_go1(_anon0* pActwk);
int egg5catch_go2(_anon0* pActwk);
int egg5catch_fire(_anon0* pActwk);
void lever_on(_anon0* pActwk);
void lever_off(_anon0* pActwk);
void egg5bomb(_anon0* pActwk);
int egg5bomb_ini(_anon0* pActwk);
int egg5bomb_1(_anon0* pActwk);
int egg5bomb_2(_anon0* pActwk);
int egg5bomb_3(_anon0* pActwk);
int egg5bomb_4(_anon0* pActwk);
void egg5bomb2(_anon0* pActwk);
int egg5bomb2_ini(_anon0* pActwk);
int egg5bomb2_1(_anon0* pActwk);
int egg5bomb2_2(_anon0* pActwk);
int egg5bomb_hit(_anon0* pActwk);
void egg5hibana(_anon0* pActwk);
int egg5hibana_ini(_anon0* pActwk);
int egg5hibana_1(_anon0* pActwk);
int egg5hibana_2(_anon0* pActwk);
int hibana_delchk(_anon0* pActwk);
void egg5hari(_anon0* pActwk);
void egg5hari_ini(_anon0* pActwk);
void egg5hari_1(_anon0* pActwk);
void egg5hari_2(_anon0* pActwk);
void egg5hari_3(_anon0* pActwk);
void egg5hari_4(_anon0* pActwk);
void egg5hari_chk(_anon0* pActwk);
void egg5belt(_anon0* pActwk);
void egg5belt_ini(_anon0* pActwk);
void egg5belt_0(_anon0* pActwk);
void egg5belt_1(_anon0* pActwk);
void egg5belt_2(_anon0* pActwk);
void egg5belt_3(_anon0* pActwk);
int belt_spdset(_anon0* pActwk);
void belt_hitpnt(short subact, _anon0* pActwk);
void belt_sncspd(int wD6, _anon0* pActwk);
void belt_sncxmax(short subact);
void belt_anime(_anon0* pActwk);
void set_belt_col(_anon0* pActwk);
int chk_belt_on();
void egg5bakuha(_anon0* pActwk);
int egg5bakuha_ini(_anon0* pActwk);
int egg5bakuha_1(_anon0* pActwk);
int frameout_sp4(_anon0* pActwk);
void make_hibana1();
void make_hibana2(_anon0* pActwk);
void bom_set(_anon0* pActwk);
void make_meca2(_anon0* pActwk);
void make_egg5(_anon0* pActwk);
void make_catch(_anon0* pActwk);
void make_pipe(_anon0* pActwk);
void make_meca3(_anon0* pActwk);
void make_bomb(_anon0* pActwk);
void make_bomb2(_anon0* pActwk);
void make_belt(_anon0* pActwk);
void chg_mstno(unsigned char num, _anon0* pActwk);
void chg_mstno2(unsigned char num, short subact);
int frameout_chk(_anon0* pActwk);

// 
// Start address: 0x1023e50
void egg5(_anon0* pActwk)
{
	int(*act_tbl)(_anon0*)[3];
	// Line 671, Address: 0x1023e50, Func Offset: 0
	// Line 679, Address: 0x1023e5c, Func Offset: 0xc
	// Line 681, Address: 0x1023ea8, Func Offset: 0x58
	// Line 682, Address: 0x1023eb8, Func Offset: 0x68
	// Line 683, Address: 0x1023ecc, Func Offset: 0x7c
	// Line 684, Address: 0x1023ed8, Func Offset: 0x88
	// Line 686, Address: 0x1023ee0, Func Offset: 0x90
	// Line 687, Address: 0x1023eec, Func Offset: 0x9c
	// Func End, Address: 0x1023efc, Func Offset: 0xac
}

// 
// Start address: 0x1023f00
int egg5_ini(_anon0* pActwk)
{
	int ret;
	// Line 690, Address: 0x1023f00, Func Offset: 0
	// Line 693, Address: 0x1023f10, Func Offset: 0x10
	// Line 694, Address: 0x1023f20, Func Offset: 0x20
	// Line 695, Address: 0x1023f2c, Func Offset: 0x2c
	// Line 696, Address: 0x1023f38, Func Offset: 0x38
	// Line 697, Address: 0x1023f44, Func Offset: 0x44
	// Line 698, Address: 0x1023f50, Func Offset: 0x50
	// Line 699, Address: 0x1023f5c, Func Offset: 0x5c
	// Line 700, Address: 0x1023f6c, Func Offset: 0x6c
	// Line 701, Address: 0x1023f78, Func Offset: 0x78
	// Line 702, Address: 0x1023f88, Func Offset: 0x88
	// Line 703, Address: 0x1023f8c, Func Offset: 0x8c
	// Func End, Address: 0x1023fa0, Func Offset: 0xa0
}

// 
// Start address: 0x1023fa0
int egg5_1(_anon0* pActwk)
{
	short subact;
	int ret;
	// Line 706, Address: 0x1023fa0, Func Offset: 0
	// Line 710, Address: 0x1023fb4, Func Offset: 0x14
	// Line 712, Address: 0x1023fcc, Func Offset: 0x2c
	// Line 713, Address: 0x1023fdc, Func Offset: 0x3c
	// Line 714, Address: 0x1024008, Func Offset: 0x68
	// Line 718, Address: 0x102403c, Func Offset: 0x9c
	// Line 721, Address: 0x102404c, Func Offset: 0xac
	// Line 722, Address: 0x102405c, Func Offset: 0xbc
	// Line 723, Address: 0x1024068, Func Offset: 0xc8
	// Line 726, Address: 0x1024070, Func Offset: 0xd0
	// Line 727, Address: 0x1024080, Func Offset: 0xe0
	// Line 730, Address: 0x1024098, Func Offset: 0xf8
	// Line 734, Address: 0x10240a8, Func Offset: 0x108
	// Line 737, Address: 0x10240b4, Func Offset: 0x114
	// Line 738, Address: 0x10240c0, Func Offset: 0x120
	// Line 739, Address: 0x10240c8, Func Offset: 0x128
	// Line 740, Address: 0x10240d8, Func Offset: 0x138
	// Line 741, Address: 0x10240e8, Func Offset: 0x148
	// Line 742, Address: 0x10240f8, Func Offset: 0x158
	// Line 743, Address: 0x1024104, Func Offset: 0x164
	// Line 744, Address: 0x1024114, Func Offset: 0x174
	// Line 745, Address: 0x1024118, Func Offset: 0x178
	// Func End, Address: 0x1024130, Func Offset: 0x190
}

// 
// Start address: 0x1024130
int egg5_esc(_anon0* pActwk)
{
	int ret;
	// Line 748, Address: 0x1024130, Func Offset: 0
	// Line 749, Address: 0x102413c, Func Offset: 0xc
	// Line 751, Address: 0x1024140, Func Offset: 0x10
	// Line 752, Address: 0x1024158, Func Offset: 0x28
	// Line 753, Address: 0x1024174, Func Offset: 0x44
	// Line 754, Address: 0x1024178, Func Offset: 0x48
	// Line 755, Address: 0x102417c, Func Offset: 0x4c
	// Func End, Address: 0x102418c, Func Offset: 0x5c
}

// 
// Start address: 0x1024190
void egg5meca1(_anon0* pActwk)
{
	short subact;
	int(*act_tbl)(_anon0*)[4];
	// Line 763, Address: 0x1024190, Func Offset: 0
	// Line 773, Address: 0x10241a0, Func Offset: 0x10
	// Line 775, Address: 0x10241ec, Func Offset: 0x5c
	// Line 776, Address: 0x10241fc, Func Offset: 0x6c
	// Line 777, Address: 0x1024230, Func Offset: 0xa0
	// Line 779, Address: 0x102423c, Func Offset: 0xac
	// Func End, Address: 0x1024250, Func Offset: 0xc0
}

// 
// Start address: 0x1024250
int egg5meca1_ini(_anon0* pActwk)
{
	int ret;
	// Line 782, Address: 0x1024250, Func Offset: 0
	// Line 785, Address: 0x1024260, Func Offset: 0x10
	// Line 786, Address: 0x102426c, Func Offset: 0x1c
	// Line 787, Address: 0x102427c, Func Offset: 0x2c
	// Line 788, Address: 0x1024288, Func Offset: 0x38
	// Line 789, Address: 0x1024294, Func Offset: 0x44
	// Line 790, Address: 0x10242a0, Func Offset: 0x50
	// Line 791, Address: 0x10242ac, Func Offset: 0x5c
	// Line 792, Address: 0x10242b8, Func Offset: 0x68
	// Line 793, Address: 0x10242c8, Func Offset: 0x78
	// Line 794, Address: 0x10242d4, Func Offset: 0x84
	// Line 795, Address: 0x10242e4, Func Offset: 0x94
	// Line 796, Address: 0x10242e8, Func Offset: 0x98
	// Func End, Address: 0x10242fc, Func Offset: 0xac
}

// 
// Start address: 0x1024300
int egg5meca1_scrset(_anon0* pActwk)
{
	short wD0;
	// Line 800, Address: 0x1024300, Func Offset: 0
	// Line 803, Address: 0x1024310, Func Offset: 0x10
	// Line 805, Address: 0x1024328, Func Offset: 0x28
	// Line 807, Address: 0x1024344, Func Offset: 0x44
	// Line 808, Address: 0x1024350, Func Offset: 0x50
	// Line 811, Address: 0x1024360, Func Offset: 0x60
	// Line 814, Address: 0x1024374, Func Offset: 0x74
	// Line 815, Address: 0x1024380, Func Offset: 0x80
	// Line 816, Address: 0x102438c, Func Offset: 0x8c
	// Line 817, Address: 0x10243b0, Func Offset: 0xb0
	// Line 819, Address: 0x10243d4, Func Offset: 0xd4
	// Line 822, Address: 0x10243f0, Func Offset: 0xf0
	// Line 823, Address: 0x1024400, Func Offset: 0x100
	// Line 824, Address: 0x102440c, Func Offset: 0x10c
	// Line 825, Address: 0x1024418, Func Offset: 0x118
	// Line 826, Address: 0x1024424, Func Offset: 0x124
	// Line 827, Address: 0x1024430, Func Offset: 0x130
	// Line 828, Address: 0x102443c, Func Offset: 0x13c
	// Line 831, Address: 0x1024448, Func Offset: 0x148
	// Line 832, Address: 0x1024450, Func Offset: 0x150
	// Line 834, Address: 0x1024458, Func Offset: 0x158
	// Line 835, Address: 0x102445c, Func Offset: 0x15c
	// Func End, Address: 0x1024470, Func Offset: 0x170
}

// 
// Start address: 0x1024470
int egg5meca1_scrreset(_anon0* pActwk)
{
	short wD0;
	short wD1;
	short wD2;
	short wD3;
	// Line 839, Address: 0x1024470, Func Offset: 0
	// Line 842, Address: 0x102448c, Func Offset: 0x1c
	// Line 843, Address: 0x102449c, Func Offset: 0x2c
	// Line 844, Address: 0x10244ac, Func Offset: 0x3c
	// Line 845, Address: 0x10244bc, Func Offset: 0x4c
	// Line 846, Address: 0x10244cc, Func Offset: 0x5c
	// Line 847, Address: 0x10244e0, Func Offset: 0x70
	// Line 848, Address: 0x10244f4, Func Offset: 0x84
	// Line 851, Address: 0x1024518, Func Offset: 0xa8
	// Line 852, Address: 0x1024520, Func Offset: 0xb0
	// Line 853, Address: 0x1024528, Func Offset: 0xb8
	// Line 854, Address: 0x1024530, Func Offset: 0xc0
	// Line 855, Address: 0x1024540, Func Offset: 0xd0
	// Line 857, Address: 0x1024554, Func Offset: 0xe4
	// Line 858, Address: 0x1024560, Func Offset: 0xf0
	// Line 859, Address: 0x1024568, Func Offset: 0xf8
	// Line 861, Address: 0x1024574, Func Offset: 0x104
	// Line 862, Address: 0x1024578, Func Offset: 0x108
	// Func End, Address: 0x1024598, Func Offset: 0x128
}

// 
// Start address: 0x10245a0
int egg5meca1_normal(_anon0* pActwk)
{
	short subact;
	short wD0;
	// Line 865, Address: 0x10245a0, Func Offset: 0
	// Line 869, Address: 0x10245b0, Func Offset: 0x10
	// Line 870, Address: 0x10245c0, Func Offset: 0x20
	// Line 871, Address: 0x10245f4, Func Offset: 0x54
	// Line 872, Address: 0x1024600, Func Offset: 0x60
	// Line 875, Address: 0x102462c, Func Offset: 0x8c
	// Line 877, Address: 0x102463c, Func Offset: 0x9c
	// Line 878, Address: 0x102464c, Func Offset: 0xac
	// Line 879, Address: 0x1024658, Func Offset: 0xb8
	// Line 880, Address: 0x1024670, Func Offset: 0xd0
	// Line 881, Address: 0x102467c, Func Offset: 0xdc
	// Line 882, Address: 0x1024690, Func Offset: 0xf0
	// Line 884, Address: 0x10246a4, Func Offset: 0x104
	// Line 885, Address: 0x10246a8, Func Offset: 0x108
	// Func End, Address: 0x10246bc, Func Offset: 0x11c
}

// 
// Start address: 0x10246c0
void egg5meca2(_anon0* pActwk)
{
	short subact;
	int(*act_tbl)(_anon0*)[7];
	// Line 893, Address: 0x10246c0, Func Offset: 0
	// Line 906, Address: 0x10246d0, Func Offset: 0x10
	// Line 908, Address: 0x102471c, Func Offset: 0x5c
	// Line 911, Address: 0x1024734, Func Offset: 0x74
	// Line 912, Address: 0x1024740, Func Offset: 0x80
	// Line 914, Address: 0x1024750, Func Offset: 0x90
	// Line 916, Address: 0x1024768, Func Offset: 0xa8
	// Line 917, Address: 0x1024778, Func Offset: 0xb8
	// Line 919, Address: 0x10247b0, Func Offset: 0xf0
	// Line 921, Address: 0x10247e8, Func Offset: 0x128
	// Line 922, Address: 0x10247f8, Func Offset: 0x138
	// Line 924, Address: 0x1024810, Func Offset: 0x150
	// Line 925, Address: 0x1024820, Func Offset: 0x160
	// Line 926, Address: 0x102482c, Func Offset: 0x16c
	// Line 928, Address: 0x1024834, Func Offset: 0x174
	// Line 929, Address: 0x1024844, Func Offset: 0x184
	// Line 930, Address: 0x1024854, Func Offset: 0x194
	// Line 931, Address: 0x1024860, Func Offset: 0x1a0
	// Line 934, Address: 0x1024868, Func Offset: 0x1a8
	// Line 935, Address: 0x1024880, Func Offset: 0x1c0
	// Line 936, Address: 0x1024890, Func Offset: 0x1d0
	// Line 940, Address: 0x10248a0, Func Offset: 0x1e0
	// Line 943, Address: 0x10248ac, Func Offset: 0x1ec
	// Func End, Address: 0x10248c0, Func Offset: 0x200
}

// 
// Start address: 0x10248c0
int egg5meca2_ini(_anon0* pActwk)
{
	int ret;
	// Line 946, Address: 0x10248c0, Func Offset: 0
	// Line 949, Address: 0x10248d0, Func Offset: 0x10
	// Line 950, Address: 0x10248e0, Func Offset: 0x20
	// Line 951, Address: 0x10248ec, Func Offset: 0x2c
	// Line 952, Address: 0x10248f8, Func Offset: 0x38
	// Line 953, Address: 0x1024904, Func Offset: 0x44
	// Line 954, Address: 0x1024910, Func Offset: 0x50
	// Line 955, Address: 0x102491c, Func Offset: 0x5c
	// Line 956, Address: 0x102492c, Func Offset: 0x6c
	// Line 957, Address: 0x1024938, Func Offset: 0x78
	// Line 958, Address: 0x1024944, Func Offset: 0x84
	// Line 959, Address: 0x1024950, Func Offset: 0x90
	// Line 960, Address: 0x102495c, Func Offset: 0x9c
	// Line 961, Address: 0x1024968, Func Offset: 0xa8
	// Line 962, Address: 0x1024974, Func Offset: 0xb4
	// Line 963, Address: 0x1024980, Func Offset: 0xc0
	// Line 964, Address: 0x1024990, Func Offset: 0xd0
	// Line 965, Address: 0x1024994, Func Offset: 0xd4
	// Func End, Address: 0x10249a8, Func Offset: 0xe8
}

// 
// Start address: 0x10249b0
int egg5meca2_ue(_anon0* pActwk)
{
	// Line 969, Address: 0x10249b0, Func Offset: 0
	// Line 970, Address: 0x10249bc, Func Offset: 0xc
	// Line 972, Address: 0x10249cc, Func Offset: 0x1c
	// Line 973, Address: 0x10249d8, Func Offset: 0x28
	// Line 974, Address: 0x10249e4, Func Offset: 0x34
	// Line 976, Address: 0x10249ec, Func Offset: 0x3c
	// Line 977, Address: 0x10249f0, Func Offset: 0x40
	// Func End, Address: 0x1024a00, Func Offset: 0x50
}

// 
// Start address: 0x1024a00
int egg5meca2_down1(_anon0* pActwk)
{
	int ret;
	// Line 982, Address: 0x1024a00, Func Offset: 0
	// Line 983, Address: 0x1024a10, Func Offset: 0x10
	// Line 985, Address: 0x1024a14, Func Offset: 0x14
	// Line 986, Address: 0x1024a24, Func Offset: 0x24
	// Line 988, Address: 0x1024a3c, Func Offset: 0x3c
	// Line 990, Address: 0x1024a54, Func Offset: 0x54
	// Line 991, Address: 0x1024a6c, Func Offset: 0x6c
	// Line 993, Address: 0x1024a84, Func Offset: 0x84
	// Line 995, Address: 0x1024a94, Func Offset: 0x94
	// Line 999, Address: 0x1024a9c, Func Offset: 0x9c
	// Line 1000, Address: 0x1024aa4, Func Offset: 0xa4
	// Line 1001, Address: 0x1024ab4, Func Offset: 0xb4
	// Line 1002, Address: 0x1024ac4, Func Offset: 0xc4
	// Line 1003, Address: 0x1024ad8, Func Offset: 0xd8
	// Line 1004, Address: 0x1024ae4, Func Offset: 0xe4
	// Line 1005, Address: 0x1024af0, Func Offset: 0xf0
	// Line 1007, Address: 0x1024b00, Func Offset: 0x100
	// Line 1008, Address: 0x1024b04, Func Offset: 0x104
	// Func End, Address: 0x1024b18, Func Offset: 0x118
}

// 
// Start address: 0x1024b20
int egg5meca2_down2(_anon0* pActwk)
{
	// Line 1019, Address: 0x1024b20, Func Offset: 0
	// Line 1026, Address: 0x1024b2c, Func Offset: 0xc
	// Line 1029, Address: 0x1024b44, Func Offset: 0x24
	// Line 1032, Address: 0x1024b70, Func Offset: 0x50
	// Line 1033, Address: 0x1024b7c, Func Offset: 0x5c
	// Line 1034, Address: 0x1024b8c, Func Offset: 0x6c
	// Line 1036, Address: 0x1024b94, Func Offset: 0x74
	// Line 1037, Address: 0x1024ba4, Func Offset: 0x84
	// Line 1042, Address: 0x1024bb0, Func Offset: 0x90
	// Line 1045, Address: 0x1024bdc, Func Offset: 0xbc
	// Line 1046, Address: 0x1024be8, Func Offset: 0xc8
	// Line 1047, Address: 0x1024bf8, Func Offset: 0xd8
	// Line 1048, Address: 0x1024c04, Func Offset: 0xe4
	// Line 1051, Address: 0x1024c14, Func Offset: 0xf4
	// Line 1053, Address: 0x1024c24, Func Offset: 0x104
	// Line 1055, Address: 0x1024c30, Func Offset: 0x110
	// Line 1056, Address: 0x1024c40, Func Offset: 0x120
	// Line 1059, Address: 0x1024c54, Func Offset: 0x134
	// Line 1060, Address: 0x1024c60, Func Offset: 0x140
	// Line 1061, Address: 0x1024c68, Func Offset: 0x148
	// Line 1063, Address: 0x1024c74, Func Offset: 0x154
	// Line 1064, Address: 0x1024c84, Func Offset: 0x164
	// Line 1066, Address: 0x1024c8c, Func Offset: 0x16c
	// Line 1067, Address: 0x1024ca4, Func Offset: 0x184
	// Line 1068, Address: 0x1024ca8, Func Offset: 0x188
	// Func End, Address: 0x1024cb8, Func Offset: 0x198
}

// 
// Start address: 0x1024cc0
int egg5meca2_kezu(_anon0* pActwk)
{
	short subact;
	short wD0;
	short meca2_ytbl[4];
	// Line 1072, Address: 0x1024cc0, Func Offset: 0
	// Line 1075, Address: 0x1024cd4, Func Offset: 0x14
	// Line 1083, Address: 0x1024d00, Func Offset: 0x40
	// Line 1084, Address: 0x1024d0c, Func Offset: 0x4c
	// Line 1086, Address: 0x1024d30, Func Offset: 0x70
	// Line 1087, Address: 0x1024d48, Func Offset: 0x88
	// Line 1088, Address: 0x1024d50, Func Offset: 0x90
	// Line 1089, Address: 0x1024d60, Func Offset: 0xa0
	// Line 1091, Address: 0x1024d68, Func Offset: 0xa8
	// Line 1093, Address: 0x1024d78, Func Offset: 0xb8
	// Line 1096, Address: 0x1024d90, Func Offset: 0xd0
	// Line 1097, Address: 0x1024da0, Func Offset: 0xe0
	// Line 1098, Address: 0x1024db0, Func Offset: 0xf0
	// Line 1099, Address: 0x1024ddc, Func Offset: 0x11c
	// Line 1100, Address: 0x1024de8, Func Offset: 0x128
	// Line 1105, Address: 0x1024df8, Func Offset: 0x138
	// Line 1106, Address: 0x1024e08, Func Offset: 0x148
	// Line 1107, Address: 0x1024e30, Func Offset: 0x170
	// Line 1109, Address: 0x1024e3c, Func Offset: 0x17c
	// Line 1111, Address: 0x1024e58, Func Offset: 0x198
	// Line 1113, Address: 0x1024e74, Func Offset: 0x1b4
	// Line 1114, Address: 0x1024e90, Func Offset: 0x1d0
	// Line 1118, Address: 0x1024e9c, Func Offset: 0x1dc
	// Line 1119, Address: 0x1024ea8, Func Offset: 0x1e8
	// Line 1120, Address: 0x1024ec8, Func Offset: 0x208
	// Line 1121, Address: 0x1024ef4, Func Offset: 0x234
	// Line 1122, Address: 0x1024f14, Func Offset: 0x254
	// Line 1123, Address: 0x1024f40, Func Offset: 0x280
	// Line 1124, Address: 0x1024f4c, Func Offset: 0x28c
	// Line 1125, Address: 0x1024f5c, Func Offset: 0x29c
	// Line 1126, Address: 0x1024f60, Func Offset: 0x2a0
	// Func End, Address: 0x1024f78, Func Offset: 0x2b8
}

// 
// Start address: 0x1024f80
int egg5meca2_esc(_anon0* pActwk)
{
	// Line 1131, Address: 0x1024f80, Func Offset: 0
	// Line 1132, Address: 0x1024f8c, Func Offset: 0xc
	// Line 1133, Address: 0x1024f98, Func Offset: 0x18
	// Line 1134, Address: 0x1024fa8, Func Offset: 0x28
	// Line 1137, Address: 0x1024fc0, Func Offset: 0x40
	// Line 1138, Address: 0x1024fc8, Func Offset: 0x48
	// Line 1139, Address: 0x1024fd0, Func Offset: 0x50
	// Line 1144, Address: 0x1024fdc, Func Offset: 0x5c
	// Line 1147, Address: 0x1024fe8, Func Offset: 0x68
	// Line 1148, Address: 0x1025008, Func Offset: 0x88
	// Line 1149, Address: 0x1025014, Func Offset: 0x94
	// Line 1150, Address: 0x1025018, Func Offset: 0x98
	// Func End, Address: 0x1025028, Func Offset: 0xa8
}

// 
// Start address: 0x1025030
int egg5meca2_end(_anon0* pActwk)
{
	// Line 1155, Address: 0x1025030, Func Offset: 0
	// Line 1156, Address: 0x102503c, Func Offset: 0xc
	// Line 1159, Address: 0x1025054, Func Offset: 0x24
	// Line 1160, Address: 0x1025064, Func Offset: 0x34
	// Line 1162, Address: 0x1025070, Func Offset: 0x40
	// Line 1163, Address: 0x102507c, Func Offset: 0x4c
	// Line 1164, Address: 0x102508c, Func Offset: 0x5c
	// Line 1165, Address: 0x1025098, Func Offset: 0x68
	// Line 1168, Address: 0x10250b0, Func Offset: 0x80
	// Line 1169, Address: 0x10250c0, Func Offset: 0x90
	// Line 1172, Address: 0x10250cc, Func Offset: 0x9c
	// Line 1173, Address: 0x10250dc, Func Offset: 0xac
	// Line 1174, Address: 0x10250e0, Func Offset: 0xb0
	// Func End, Address: 0x10250f0, Func Offset: 0xc0
}

// 
// Start address: 0x10250f0
void my_rideonchk(_anon0* pActwk)
{
	// Line 1177, Address: 0x10250f0, Func Offset: 0
	// Line 1178, Address: 0x10250fc, Func Offset: 0xc
	// Line 1179, Address: 0x1025110, Func Offset: 0x20
	// Func End, Address: 0x1025120, Func Offset: 0x30
}

// 
// Start address: 0x1025120
void egg5meca3(_anon0* pActwk)
{
	short subact;
	void(*act_tbl)(_anon0*)[2];
	// Line 1187, Address: 0x1025120, Func Offset: 0
	// Line 1196, Address: 0x1025130, Func Offset: 0x10
	// Line 1197, Address: 0x1025174, Func Offset: 0x54
	// Line 1198, Address: 0x1025184, Func Offset: 0x64
	// Line 1199, Address: 0x10251b8, Func Offset: 0x98
	// Line 1200, Address: 0x10251c4, Func Offset: 0xa4
	// Func End, Address: 0x10251d8, Func Offset: 0xb8
}

// 
// Start address: 0x10251e0
void egg5meca3_ini(_anon0* pActwk)
{
	// Line 1203, Address: 0x10251e0, Func Offset: 0
	// Line 1204, Address: 0x10251ec, Func Offset: 0xc
	// Line 1205, Address: 0x10251fc, Func Offset: 0x1c
	// Line 1206, Address: 0x1025208, Func Offset: 0x28
	// Line 1207, Address: 0x1025214, Func Offset: 0x34
	// Line 1208, Address: 0x1025220, Func Offset: 0x40
	// Line 1209, Address: 0x102522c, Func Offset: 0x4c
	// Line 1210, Address: 0x1025238, Func Offset: 0x58
	// Line 1211, Address: 0x1025248, Func Offset: 0x68
	// Line 1212, Address: 0x1025254, Func Offset: 0x74
	// Func End, Address: 0x1025264, Func Offset: 0x84
}

// 
// Start address: 0x1025270
void egg5meca3_1(_anon0* pActwk)
{
	short subact;
	// Line 1215, Address: 0x1025270, Func Offset: 0
	// Line 1218, Address: 0x102527c, Func Offset: 0xc
	// Line 1219, Address: 0x102528c, Func Offset: 0x1c
	// Line 1220, Address: 0x10252b8, Func Offset: 0x48
	// Line 1221, Address: 0x10252e4, Func Offset: 0x74
	// Func End, Address: 0x10252f4, Func Offset: 0x84
}

// 
// Start address: 0x1025300
void egg5pipe(_anon0* pActwk)
{
	short subact;
	void(*act_tbl)(_anon0*)[2];
	// Line 1229, Address: 0x1025300, Func Offset: 0
	// Line 1238, Address: 0x1025310, Func Offset: 0x10
	// Line 1239, Address: 0x1025354, Func Offset: 0x54
	// Line 1240, Address: 0x1025364, Func Offset: 0x64
	// Line 1241, Address: 0x1025398, Func Offset: 0x98
	// Line 1242, Address: 0x10253a4, Func Offset: 0xa4
	// Func End, Address: 0x10253b8, Func Offset: 0xb8
}

// 
// Start address: 0x10253c0
void egg5pipe_ini(_anon0* pActwk)
{
	// Line 1245, Address: 0x10253c0, Func Offset: 0
	// Line 1246, Address: 0x10253cc, Func Offset: 0xc
	// Line 1247, Address: 0x10253dc, Func Offset: 0x1c
	// Line 1248, Address: 0x10253e8, Func Offset: 0x28
	// Line 1249, Address: 0x10253f4, Func Offset: 0x34
	// Line 1250, Address: 0x1025400, Func Offset: 0x40
	// Line 1251, Address: 0x102540c, Func Offset: 0x4c
	// Line 1252, Address: 0x1025418, Func Offset: 0x58
	// Line 1253, Address: 0x1025428, Func Offset: 0x68
	// Line 1254, Address: 0x1025434, Func Offset: 0x74
	// Func End, Address: 0x1025444, Func Offset: 0x84
}

// 
// Start address: 0x1025450
void egg5pipe_1(_anon0* pActwk)
{
	short subact;
	short temp;
	// Line 1257, Address: 0x1025450, Func Offset: 0
	// Line 1261, Address: 0x1025460, Func Offset: 0x10
	// Line 1262, Address: 0x1025470, Func Offset: 0x20
	// Line 1263, Address: 0x10254d8, Func Offset: 0x88
	// Line 1264, Address: 0x10254e4, Func Offset: 0x94
	// Line 1265, Address: 0x10254f0, Func Offset: 0xa0
	// Func End, Address: 0x1025504, Func Offset: 0xb4
}

// 
// Start address: 0x1025510
void egg5catch(_anon0* pActwk)
{
	int(*act_tbl)(_anon0*)[7];
	// Line 1273, Address: 0x1025510, Func Offset: 0
	// Line 1285, Address: 0x102551c, Func Offset: 0xc
	// Line 1287, Address: 0x1025568, Func Offset: 0x58
	// Line 1288, Address: 0x102557c, Func Offset: 0x6c
	// Line 1289, Address: 0x1025588, Func Offset: 0x78
	// Line 1291, Address: 0x1025590, Func Offset: 0x80
	// Line 1292, Address: 0x102559c, Func Offset: 0x8c
	// Func End, Address: 0x10255ac, Func Offset: 0x9c
}

// 
// Start address: 0x10255b0
int egg5catch_ini(_anon0* pActwk)
{
	int ret;
	// Line 1295, Address: 0x10255b0, Func Offset: 0
	// Line 1298, Address: 0x10255c0, Func Offset: 0x10
	// Line 1299, Address: 0x10255d0, Func Offset: 0x20
	// Line 1300, Address: 0x10255dc, Func Offset: 0x2c
	// Line 1301, Address: 0x10255e8, Func Offset: 0x38
	// Line 1302, Address: 0x10255f4, Func Offset: 0x44
	// Line 1303, Address: 0x1025600, Func Offset: 0x50
	// Line 1304, Address: 0x102560c, Func Offset: 0x5c
	// Line 1305, Address: 0x102561c, Func Offset: 0x6c
	// Line 1306, Address: 0x102562c, Func Offset: 0x7c
	// Line 1307, Address: 0x1025630, Func Offset: 0x80
	// Func End, Address: 0x1025644, Func Offset: 0x94
}

// 
// Start address: 0x1025650
int egg5catch_1st(_anon0* pActwk)
{
	short subact;
	int ret;
	// Line 1311, Address: 0x1025650, Func Offset: 0
	// Line 1313, Address: 0x1025664, Func Offset: 0x14
	// Line 1315, Address: 0x1025668, Func Offset: 0x18
	// Line 1316, Address: 0x1025678, Func Offset: 0x28
	// Line 1317, Address: 0x10256a4, Func Offset: 0x54
	// Line 1320, Address: 0x10256d8, Func Offset: 0x88
	// Line 1321, Address: 0x10256e4, Func Offset: 0x94
	// Line 1323, Address: 0x10256f4, Func Offset: 0xa4
	// Line 1324, Address: 0x10256f8, Func Offset: 0xa8
	// Func End, Address: 0x1025710, Func Offset: 0xc0
}

// 
// Start address: 0x1025710
int egg5catch_return(_anon0* pActwk)
{
	// Line 1328, Address: 0x1025710, Func Offset: 0
	// Line 1329, Address: 0x1025718, Func Offset: 0x8
	// Line 1330, Address: 0x1025734, Func Offset: 0x24
	// Line 1332, Address: 0x1025754, Func Offset: 0x44
	// Line 1333, Address: 0x1025760, Func Offset: 0x50
	// Line 1334, Address: 0x1025764, Func Offset: 0x54
	// Func End, Address: 0x1025770, Func Offset: 0x60
}

// 
// Start address: 0x1025770
int egg5catch_wait(_anon0* pActwk)
{
	short subact;
	int ret;
	// Line 1338, Address: 0x1025770, Func Offset: 0
	// Line 1340, Address: 0x1025784, Func Offset: 0x14
	// Line 1342, Address: 0x1025788, Func Offset: 0x18
	// Line 1343, Address: 0x1025798, Func Offset: 0x28
	// Line 1344, Address: 0x10257c4, Func Offset: 0x54
	// Line 1345, Address: 0x10257fc, Func Offset: 0x8c
	// Line 1348, Address: 0x1025808, Func Offset: 0x98
	// Line 1349, Address: 0x1025818, Func Offset: 0xa8
	// Line 1352, Address: 0x1025830, Func Offset: 0xc0
	// Line 1353, Address: 0x1025838, Func Offset: 0xc8
	// Line 1354, Address: 0x1025844, Func Offset: 0xd4
	// Line 1355, Address: 0x1025850, Func Offset: 0xe0
	// Line 1356, Address: 0x102585c, Func Offset: 0xec
	// Line 1357, Address: 0x1025868, Func Offset: 0xf8
	// Line 1360, Address: 0x1025878, Func Offset: 0x108
	// Line 1361, Address: 0x102587c, Func Offset: 0x10c
	// Func End, Address: 0x1025894, Func Offset: 0x124
}

// 
// Start address: 0x10258a0
int egg5catch_go1(_anon0* pActwk)
{
	// Line 1365, Address: 0x10258a0, Func Offset: 0
	// Line 1366, Address: 0x10258a8, Func Offset: 0x8
	// Line 1367, Address: 0x10258bc, Func Offset: 0x1c
	// Line 1368, Address: 0x10258d8, Func Offset: 0x38
	// Line 1369, Address: 0x10258e4, Func Offset: 0x44
	// Line 1370, Address: 0x10258e8, Func Offset: 0x48
	// Func End, Address: 0x10258f4, Func Offset: 0x54
}

// 
// Start address: 0x1025900
int egg5catch_go2(_anon0* pActwk)
{
	// Line 1374, Address: 0x1025900, Func Offset: 0
	// Line 1375, Address: 0x102590c, Func Offset: 0xc
	// Line 1377, Address: 0x1025938, Func Offset: 0x38
	// Line 1379, Address: 0x1025954, Func Offset: 0x54
	// Line 1380, Address: 0x1025968, Func Offset: 0x68
	// Line 1387, Address: 0x1025974, Func Offset: 0x74
	// Line 1388, Address: 0x1025980, Func Offset: 0x80
	// Line 1389, Address: 0x102598c, Func Offset: 0x8c
	// Line 1390, Address: 0x1025998, Func Offset: 0x98
	// Line 1391, Address: 0x102599c, Func Offset: 0x9c
	// Func End, Address: 0x10259ac, Func Offset: 0xac
}

// 
// Start address: 0x10259b0
int egg5catch_fire(_anon0* pActwk)
{
	// Line 1395, Address: 0x10259b0, Func Offset: 0
	// Line 1396, Address: 0x10259bc, Func Offset: 0xc
	// Line 1397, Address: 0x10259cc, Func Offset: 0x1c
	// Line 1400, Address: 0x10259e4, Func Offset: 0x34
	// Line 1401, Address: 0x10259f0, Func Offset: 0x40
	// Line 1402, Address: 0x1025a00, Func Offset: 0x50
	// Line 1403, Address: 0x1025a10, Func Offset: 0x60
	// Line 1405, Address: 0x1025a1c, Func Offset: 0x6c
	// Line 1408, Address: 0x1025a34, Func Offset: 0x84
	// Line 1409, Address: 0x1025a3c, Func Offset: 0x8c
	// Line 1410, Address: 0x1025a48, Func Offset: 0x98
	// Line 1412, Address: 0x1025a54, Func Offset: 0xa4
	// Line 1413, Address: 0x1025a58, Func Offset: 0xa8
	// Func End, Address: 0x1025a68, Func Offset: 0xb8
}

// 
// Start address: 0x1025a70
void lever_on(_anon0* pActwk)
{
	short subact;
	// Line 1416, Address: 0x1025a70, Func Offset: 0
	// Line 1419, Address: 0x1025a80, Func Offset: 0x10
	// Line 1420, Address: 0x1025a90, Func Offset: 0x20
	// Line 1422, Address: 0x1025abc, Func Offset: 0x4c
	// Line 1423, Address: 0x1025acc, Func Offset: 0x5c
	// Line 1425, Address: 0x1025af4, Func Offset: 0x84
	// Func End, Address: 0x1025b08, Func Offset: 0x98
}

// 
// Start address: 0x1025b10
void lever_off(_anon0* pActwk)
{
	short subact;
	// Line 1428, Address: 0x1025b10, Func Offset: 0
	// Line 1431, Address: 0x1025b20, Func Offset: 0x10
	// Line 1432, Address: 0x1025b30, Func Offset: 0x20
	// Line 1434, Address: 0x1025b5c, Func Offset: 0x4c
	// Line 1435, Address: 0x1025b6c, Func Offset: 0x5c
	// Line 1437, Address: 0x1025b90, Func Offset: 0x80
	// Func End, Address: 0x1025ba4, Func Offset: 0x94
}

// 
// Start address: 0x1025bb0
void egg5bomb(_anon0* pActwk)
{
	int ret;
	int(*act_tbl)(_anon0*)[5];
	// Line 1445, Address: 0x1025bb0, Func Offset: 0
	// Line 1457, Address: 0x1025bc0, Func Offset: 0x10
	// Line 1458, Address: 0x1025c08, Func Offset: 0x58
	// Line 1460, Address: 0x1025c10, Func Offset: 0x60
	// Line 1461, Address: 0x1025c1c, Func Offset: 0x6c
	// Line 1462, Address: 0x1025c28, Func Offset: 0x78
	// Line 1464, Address: 0x1025c30, Func Offset: 0x80
	// Line 1465, Address: 0x1025c3c, Func Offset: 0x8c
	// Func End, Address: 0x1025c50, Func Offset: 0xa0
}

// 
// Start address: 0x1025c50
int egg5bomb_ini(_anon0* pActwk)
{
	int ret;
	// Line 1468, Address: 0x1025c50, Func Offset: 0
	// Line 1471, Address: 0x1025c60, Func Offset: 0x10
	// Line 1472, Address: 0x1025c70, Func Offset: 0x20
	// Line 1473, Address: 0x1025c7c, Func Offset: 0x2c
	// Line 1474, Address: 0x1025c88, Func Offset: 0x38
	// Line 1475, Address: 0x1025c94, Func Offset: 0x44
	// Line 1476, Address: 0x1025ca0, Func Offset: 0x50
	// Line 1477, Address: 0x1025cac, Func Offset: 0x5c
	// Line 1478, Address: 0x1025cbc, Func Offset: 0x6c
	// Line 1479, Address: 0x1025cc8, Func Offset: 0x78
	// Line 1480, Address: 0x1025cd4, Func Offset: 0x84
	// Line 1481, Address: 0x1025ce0, Func Offset: 0x90
	// Line 1482, Address: 0x1025cec, Func Offset: 0x9c
	// Line 1483, Address: 0x1025cfc, Func Offset: 0xac
	// Line 1484, Address: 0x1025d00, Func Offset: 0xb0
	// Func End, Address: 0x1025d14, Func Offset: 0xc4
}

// 
// Start address: 0x1025d20
int egg5bomb_1(_anon0* pActwk)
{
	short subact;
	int ret;
	// Line 1488, Address: 0x1025d20, Func Offset: 0
	// Line 1490, Address: 0x1025d34, Func Offset: 0x14
	// Line 1492, Address: 0x1025d38, Func Offset: 0x18
	// Line 1493, Address: 0x1025d48, Func Offset: 0x28
	// Line 1494, Address: 0x1025d74, Func Offset: 0x54
	// Line 1496, Address: 0x1025da8, Func Offset: 0x88
	// Line 1497, Address: 0x1025db8, Func Offset: 0x98
	// Line 1499, Address: 0x1025dc8, Func Offset: 0xa8
	// Line 1500, Address: 0x1025dcc, Func Offset: 0xac
	// Func End, Address: 0x1025de4, Func Offset: 0xc4
}

// 
// Start address: 0x1025df0
int egg5bomb_2(_anon0* pActwk)
{
	short subact;
	short sin;
	short cos;
	int temp;
	int ret;
	// Line 1504, Address: 0x1025df0, Func Offset: 0
	// Line 1508, Address: 0x1025e08, Func Offset: 0x18
	// Line 1510, Address: 0x1025e0c, Func Offset: 0x1c
	// Line 1511, Address: 0x1025e1c, Func Offset: 0x2c
	// Line 1512, Address: 0x1025e48, Func Offset: 0x58
	// Line 1514, Address: 0x1025e7c, Func Offset: 0x8c
	// Line 1516, Address: 0x1025ea8, Func Offset: 0xb8
	// Line 1517, Address: 0x1025eb8, Func Offset: 0xc8
	// Line 1518, Address: 0x1025ec8, Func Offset: 0xd8
	// Line 1521, Address: 0x1025ed0, Func Offset: 0xe0
	// Line 1522, Address: 0x1025efc, Func Offset: 0x10c
	// Line 1523, Address: 0x1025f14, Func Offset: 0x124
	// Line 1524, Address: 0x1025f24, Func Offset: 0x134
	// Line 1525, Address: 0x1025f3c, Func Offset: 0x14c
	// Line 1527, Address: 0x1025f48, Func Offset: 0x158
	// Line 1528, Address: 0x1025f50, Func Offset: 0x160
	// Line 1529, Address: 0x1025f54, Func Offset: 0x164
	// Line 1530, Address: 0x1025f64, Func Offset: 0x174
	// Line 1531, Address: 0x1025f70, Func Offset: 0x180
	// Line 1533, Address: 0x1025f84, Func Offset: 0x194
	// Line 1534, Address: 0x1025f88, Func Offset: 0x198
	// Func End, Address: 0x1025fa4, Func Offset: 0x1b4
}

// 
// Start address: 0x1025fb0
int egg5bomb_3(_anon0* pActwk)
{
	short subact;
	int ret;
	// Line 1538, Address: 0x1025fb0, Func Offset: 0
	// Line 1540, Address: 0x1025fc4, Func Offset: 0x14
	// Line 1542, Address: 0x1025fc8, Func Offset: 0x18
	// Line 1543, Address: 0x1025fe0, Func Offset: 0x30
	// Line 1546, Address: 0x1025ff8, Func Offset: 0x48
	// Line 1547, Address: 0x1026008, Func Offset: 0x58
	// Line 1548, Address: 0x102603c, Func Offset: 0x8c
	// Line 1551, Address: 0x1026048, Func Offset: 0x98
	// Line 1552, Address: 0x1026060, Func Offset: 0xb0
	// Line 1555, Address: 0x102607c, Func Offset: 0xcc
	// Line 1556, Address: 0x1026088, Func Offset: 0xd8
	// Line 1560, Address: 0x1026098, Func Offset: 0xe8
	// Line 1561, Address: 0x102609c, Func Offset: 0xec
	// Func End, Address: 0x10260b4, Func Offset: 0x104
}

// 
// Start address: 0x10260c0
int egg5bomb_4(_anon0* pActwk)
{
	short subact;
	int ret;
	// Line 1565, Address: 0x10260c0, Func Offset: 0
	// Line 1567, Address: 0x10260d4, Func Offset: 0x14
	// Line 1569, Address: 0x10260d8, Func Offset: 0x18
	// Line 1570, Address: 0x10260f0, Func Offset: 0x30
	// Line 1573, Address: 0x1026108, Func Offset: 0x48
	// Line 1574, Address: 0x1026118, Func Offset: 0x58
	// Line 1575, Address: 0x102614c, Func Offset: 0x8c
	// Line 1578, Address: 0x1026158, Func Offset: 0x98
	// Line 1579, Address: 0x1026168, Func Offset: 0xa8
	// Line 1582, Address: 0x1026180, Func Offset: 0xc0
	// Line 1583, Address: 0x102618c, Func Offset: 0xcc
	// Line 1587, Address: 0x1026190, Func Offset: 0xd0
	// Line 1588, Address: 0x1026194, Func Offset: 0xd4
	// Func End, Address: 0x10261ac, Func Offset: 0xec
}

// 
// Start address: 0x10261b0
void egg5bomb2(_anon0* pActwk)
{
	int ret;
	int(*act_tbl)(_anon0*)[3];
	// Line 1596, Address: 0x10261b0, Func Offset: 0
	// Line 1606, Address: 0x10261c0, Func Offset: 0x10
	// Line 1607, Address: 0x1026208, Func Offset: 0x58
	// Line 1609, Address: 0x1026210, Func Offset: 0x60
	// Line 1610, Address: 0x102621c, Func Offset: 0x6c
	// Line 1611, Address: 0x1026228, Func Offset: 0x78
	// Line 1613, Address: 0x1026230, Func Offset: 0x80
	// Line 1614, Address: 0x102623c, Func Offset: 0x8c
	// Func End, Address: 0x1026250, Func Offset: 0xa0
}

// 
// Start address: 0x1026250
int egg5bomb2_ini(_anon0* pActwk)
{
	int ret;
	short wD0;
	// Line 1629, Address: 0x1026250, Func Offset: 0
	// Line 1633, Address: 0x1026264, Func Offset: 0x14
	// Line 1634, Address: 0x1026274, Func Offset: 0x24
	// Line 1635, Address: 0x1026280, Func Offset: 0x30
	// Line 1636, Address: 0x102628c, Func Offset: 0x3c
	// Line 1637, Address: 0x1026298, Func Offset: 0x48
	// Line 1638, Address: 0x10262a4, Func Offset: 0x54
	// Line 1639, Address: 0x10262b0, Func Offset: 0x60
	// Line 1640, Address: 0x10262c0, Func Offset: 0x70
	// Line 1641, Address: 0x10262cc, Func Offset: 0x7c
	// Line 1642, Address: 0x10262d8, Func Offset: 0x88
	// Line 1644, Address: 0x10262e4, Func Offset: 0x94
	// Line 1645, Address: 0x10262fc, Func Offset: 0xac
	// Line 1646, Address: 0x1026310, Func Offset: 0xc0
	// Line 1647, Address: 0x1026354, Func Offset: 0x104
	// Line 1648, Address: 0x1026398, Func Offset: 0x148
	// Line 1649, Address: 0x10263d0, Func Offset: 0x180
	// Line 1651, Address: 0x10263f4, Func Offset: 0x1a4
	// Line 1652, Address: 0x1026404, Func Offset: 0x1b4
	// Line 1653, Address: 0x1026408, Func Offset: 0x1b8
	// Func End, Address: 0x1026420, Func Offset: 0x1d0
}

// 
// Start address: 0x1026420
int egg5bomb2_1(_anon0* pActwk)
{
	int ret;
	// Line 1656, Address: 0x1026420, Func Offset: 0
	// Line 1657, Address: 0x1026430, Func Offset: 0x10
	// Line 1659, Address: 0x1026434, Func Offset: 0x14
	// Line 1660, Address: 0x102644c, Func Offset: 0x2c
	// Line 1663, Address: 0x1026464, Func Offset: 0x44
	// Line 1664, Address: 0x1026474, Func Offset: 0x54
	// Line 1667, Address: 0x102648c, Func Offset: 0x6c
	// Line 1668, Address: 0x1026494, Func Offset: 0x74
	// Line 1669, Address: 0x10264a4, Func Offset: 0x84
	// Line 1672, Address: 0x10264b4, Func Offset: 0x94
	// Line 1673, Address: 0x10264b8, Func Offset: 0x98
	// Func End, Address: 0x10264cc, Func Offset: 0xac
}

// 
// Start address: 0x10264d0
int egg5bomb2_2(_anon0* pActwk)
{
	short subact;
	int ret;
	short wD0;
	// Line 1676, Address: 0x10264d0, Func Offset: 0
	// Line 1678, Address: 0x10264e8, Func Offset: 0x18
	// Line 1681, Address: 0x10264ec, Func Offset: 0x1c
	// Line 1682, Address: 0x1026504, Func Offset: 0x34
	// Line 1685, Address: 0x102651c, Func Offset: 0x4c
	// Line 1686, Address: 0x102652c, Func Offset: 0x5c
	// Line 1687, Address: 0x1026560, Func Offset: 0x90
	// Line 1690, Address: 0x102656c, Func Offset: 0x9c
	// Line 1691, Address: 0x1026588, Func Offset: 0xb8
	// Line 1692, Address: 0x10265a0, Func Offset: 0xd0
	// Line 1693, Address: 0x10265b8, Func Offset: 0xe8
	// Line 1694, Address: 0x10265cc, Func Offset: 0xfc
	// Line 1695, Address: 0x10265d8, Func Offset: 0x108
	// Line 1696, Address: 0x102661c, Func Offset: 0x14c
	// Line 1698, Address: 0x1026648, Func Offset: 0x178
	// Line 1699, Address: 0x1026664, Func Offset: 0x194
	// Line 1700, Address: 0x1026668, Func Offset: 0x198
	// Line 1701, Address: 0x1026678, Func Offset: 0x1a8
	// Line 1704, Address: 0x102667c, Func Offset: 0x1ac
	// Line 1705, Address: 0x1026680, Func Offset: 0x1b0
	// Func End, Address: 0x102669c, Func Offset: 0x1cc
}

// 
// Start address: 0x10266a0
int egg5bomb_hit(_anon0* pActwk)
{
	short xback;
	short yback;
	// Line 1708, Address: 0x10266a0, Func Offset: 0
	// Line 1711, Address: 0x10266b4, Func Offset: 0x14
	// Line 1712, Address: 0x10266c4, Func Offset: 0x24
	// Line 1713, Address: 0x10266d4, Func Offset: 0x34
	// Line 1714, Address: 0x10266e0, Func Offset: 0x40
	// Line 1715, Address: 0x10266ec, Func Offset: 0x4c
	// Line 1716, Address: 0x10266f8, Func Offset: 0x58
	// Line 1717, Address: 0x1026700, Func Offset: 0x60
	// Line 1718, Address: 0x1026708, Func Offset: 0x68
	// Line 1719, Address: 0x1026714, Func Offset: 0x74
	// Line 1720, Address: 0x1026718, Func Offset: 0x78
	// Func End, Address: 0x1026730, Func Offset: 0x90
}

// 
// Start address: 0x1026730
void egg5hibana(_anon0* pActwk)
{
	int(*act_tbl)(_anon0*)[3];
	// Line 1728, Address: 0x1026730, Func Offset: 0
	// Line 1736, Address: 0x102673c, Func Offset: 0xc
	// Line 1738, Address: 0x1026788, Func Offset: 0x58
	// Line 1739, Address: 0x102679c, Func Offset: 0x6c
	// Line 1740, Address: 0x10267a8, Func Offset: 0x78
	// Line 1742, Address: 0x10267b0, Func Offset: 0x80
	// Line 1743, Address: 0x10267bc, Func Offset: 0x8c
	// Func End, Address: 0x10267cc, Func Offset: 0x9c
}

// 
// Start address: 0x10267d0
int egg5hibana_ini(_anon0* pActwk)
{
	int ret;
	// Line 1746, Address: 0x10267d0, Func Offset: 0
	// Line 1749, Address: 0x10267e0, Func Offset: 0x10
	// Line 1750, Address: 0x10267f0, Func Offset: 0x20
	// Line 1751, Address: 0x10267fc, Func Offset: 0x2c
	// Line 1752, Address: 0x1026808, Func Offset: 0x38
	// Line 1753, Address: 0x1026814, Func Offset: 0x44
	// Line 1754, Address: 0x1026820, Func Offset: 0x50
	// Line 1755, Address: 0x102682c, Func Offset: 0x5c
	// Line 1756, Address: 0x102683c, Func Offset: 0x6c
	// Line 1757, Address: 0x102684c, Func Offset: 0x7c
	// Line 1758, Address: 0x1026858, Func Offset: 0x88
	// Line 1759, Address: 0x1026868, Func Offset: 0x98
	// Line 1762, Address: 0x1026880, Func Offset: 0xb0
	// Line 1763, Address: 0x1026890, Func Offset: 0xc0
	// Line 1765, Address: 0x10268a0, Func Offset: 0xd0
	// Line 1766, Address: 0x10268a4, Func Offset: 0xd4
	// Func End, Address: 0x10268b8, Func Offset: 0xe8
}

// 
// Start address: 0x10268c0
int egg5hibana_1(_anon0* pActwk)
{
	int ret;
	// Line 1770, Address: 0x10268c0, Func Offset: 0
	// Line 1771, Address: 0x10268d0, Func Offset: 0x10
	// Line 1773, Address: 0x10268d4, Func Offset: 0x14
	// Line 1774, Address: 0x10268ec, Func Offset: 0x2c
	// Line 1775, Address: 0x1026908, Func Offset: 0x48
	// Line 1776, Address: 0x1026924, Func Offset: 0x64
	// Line 1778, Address: 0x1026930, Func Offset: 0x70
	// Line 1779, Address: 0x1026940, Func Offset: 0x80
	// Line 1780, Address: 0x1026944, Func Offset: 0x84
	// Func End, Address: 0x1026958, Func Offset: 0x98
}

// 
// Start address: 0x1026960
int egg5hibana_2(_anon0* pActwk)
{
	int ret;
	// Line 1784, Address: 0x1026960, Func Offset: 0
	// Line 1787, Address: 0x1026970, Func Offset: 0x10
	// Line 1788, Address: 0x1026988, Func Offset: 0x28
	// Line 1789, Address: 0x1026998, Func Offset: 0x38
	// Line 1790, Address: 0x10269b4, Func Offset: 0x54
	// Line 1791, Address: 0x10269cc, Func Offset: 0x6c
	// Line 1792, Address: 0x10269dc, Func Offset: 0x7c
	// Line 1793, Address: 0x10269e0, Func Offset: 0x80
	// Func End, Address: 0x10269f4, Func Offset: 0x94
}

// 
// Start address: 0x1026a00
int hibana_delchk(_anon0* pActwk)
{
	int ret;
	// Line 1796, Address: 0x1026a00, Func Offset: 0
	// Line 1797, Address: 0x1026a10, Func Offset: 0x10
	// Line 1799, Address: 0x1026a14, Func Offset: 0x14
	// Line 1800, Address: 0x1026a28, Func Offset: 0x28
	// Line 1801, Address: 0x1026a2c, Func Offset: 0x2c
	// Line 1802, Address: 0x1026a30, Func Offset: 0x30
	// Func End, Address: 0x1026a44, Func Offset: 0x44
}

// 
// Start address: 0x1026a50
void egg5hari(_anon0* pActwk)
{
	void(*act_tbl)(_anon0*)[5];
	// Line 1824, Address: 0x1026a50, Func Offset: 0
	// Line 1834, Address: 0x1026a5c, Func Offset: 0xc
	// Line 1835, Address: 0x1026aa0, Func Offset: 0x50
	// Line 1836, Address: 0x1026aac, Func Offset: 0x5c
	// Func End, Address: 0x1026abc, Func Offset: 0x6c
}

// 
// Start address: 0x1026ac0
void egg5hari_ini(_anon0* pActwk)
{
	// Line 1839, Address: 0x1026ac0, Func Offset: 0
	// Line 1840, Address: 0x1026acc, Func Offset: 0xc
	// Line 1841, Address: 0x1026adc, Func Offset: 0x1c
	// Line 1842, Address: 0x1026ae8, Func Offset: 0x28
	// Line 1843, Address: 0x1026af4, Func Offset: 0x34
	// Line 1844, Address: 0x1026b00, Func Offset: 0x40
	// Line 1845, Address: 0x1026b0c, Func Offset: 0x4c
	// Line 1846, Address: 0x1026b18, Func Offset: 0x58
	// Line 1847, Address: 0x1026b28, Func Offset: 0x68
	// Line 1848, Address: 0x1026b34, Func Offset: 0x74
	// Line 1849, Address: 0x1026b40, Func Offset: 0x80
	// Line 1850, Address: 0x1026b4c, Func Offset: 0x8c
	// Func End, Address: 0x1026b5c, Func Offset: 0x9c
}

// 
// Start address: 0x1026b60
void egg5hari_1(_anon0* pActwk)
{
	// Line 1853, Address: 0x1026b60, Func Offset: 0
	// Line 1854, Address: 0x1026b6c, Func Offset: 0xc
	// Line 1857, Address: 0x1026b88, Func Offset: 0x28
	// Line 1858, Address: 0x1026b90, Func Offset: 0x30
	// Line 1859, Address: 0x1026ba0, Func Offset: 0x40
	// Line 1861, Address: 0x1026bac, Func Offset: 0x4c
	// Func End, Address: 0x1026bbc, Func Offset: 0x5c
}

// 
// Start address: 0x1026bc0
void egg5hari_2(_anon0* pActwk)
{
	// Line 1864, Address: 0x1026bc0, Func Offset: 0
	// Line 1865, Address: 0x1026bcc, Func Offset: 0xc
	// Line 1866, Address: 0x1026be0, Func Offset: 0x20
	// Line 1867, Address: 0x1026bfc, Func Offset: 0x3c
	// Line 1871, Address: 0x1026c10, Func Offset: 0x50
	// Line 1872, Address: 0x1026c1c, Func Offset: 0x5c
	// Line 1873, Address: 0x1026c2c, Func Offset: 0x6c
	// Line 1875, Address: 0x1026c38, Func Offset: 0x78
	// Func End, Address: 0x1026c48, Func Offset: 0x88
}

// 
// Start address: 0x1026c50
void egg5hari_3(_anon0* pActwk)
{
	// Line 1878, Address: 0x1026c50, Func Offset: 0
	// Line 1879, Address: 0x1026c5c, Func Offset: 0xc
	// Line 1880, Address: 0x1026c70, Func Offset: 0x20
	// Line 1881, Address: 0x1026c8c, Func Offset: 0x3c
	// Line 1885, Address: 0x1026ca0, Func Offset: 0x50
	// Line 1886, Address: 0x1026cb0, Func Offset: 0x60
	// Line 1887, Address: 0x1026cbc, Func Offset: 0x6c
	// Line 1889, Address: 0x1026cc8, Func Offset: 0x78
	// Func End, Address: 0x1026cd8, Func Offset: 0x88
}

// 
// Start address: 0x1026ce0
void egg5hari_4(_anon0* pActwk)
{
	// Line 1892, Address: 0x1026ce0, Func Offset: 0
	// Line 1893, Address: 0x1026cec, Func Offset: 0xc
	// Line 1894, Address: 0x1026cf8, Func Offset: 0x18
	// Func End, Address: 0x1026d08, Func Offset: 0x28
}

// 
// Start address: 0x1026d10
void egg5hari_chk(_anon0* pActwk)
{
	// Line 1897, Address: 0x1026d10, Func Offset: 0
	// Line 1898, Address: 0x1026d1c, Func Offset: 0xc
	// Line 1899, Address: 0x1026d28, Func Offset: 0x18
	// Line 1900, Address: 0x1026d34, Func Offset: 0x24
	// Line 1901, Address: 0x1026d40, Func Offset: 0x30
	// Line 1902, Address: 0x1026d4c, Func Offset: 0x3c
	// Line 1903, Address: 0x1026d58, Func Offset: 0x48
	// Func End, Address: 0x1026d68, Func Offset: 0x58
}

// 
// Start address: 0x1026d70
void egg5belt(_anon0* pActwk)
{
	void(*act_tbl)(_anon0*)[5];
	// Line 1911, Address: 0x1026d70, Func Offset: 0
	// Line 1921, Address: 0x1026d7c, Func Offset: 0xc
	// Line 1922, Address: 0x1026dc0, Func Offset: 0x50
	// Line 1923, Address: 0x1026dcc, Func Offset: 0x5c
	// Func End, Address: 0x1026ddc, Func Offset: 0x6c
}

// 
// Start address: 0x1026de0
void egg5belt_ini(_anon0* pActwk)
{
	// Line 1926, Address: 0x1026de0, Func Offset: 0
	// Line 1927, Address: 0x1026dec, Func Offset: 0xc
	// Line 1928, Address: 0x1026dfc, Func Offset: 0x1c
	// Line 1929, Address: 0x1026e08, Func Offset: 0x28
	// Func End, Address: 0x1026e18, Func Offset: 0x38
}

// 
// Start address: 0x1026e20
void egg5belt_0(_anon0* pActwk)
{
	short subact;
	// Line 1932, Address: 0x1026e20, Func Offset: 0
	// Line 1935, Address: 0x1026e30, Func Offset: 0x10
	// Line 1936, Address: 0x1026e40, Func Offset: 0x20
	// Line 1939, Address: 0x1026e74, Func Offset: 0x54
	// Line 1940, Address: 0x1026e84, Func Offset: 0x64
	// Line 1942, Address: 0x1026e90, Func Offset: 0x70
	// Func End, Address: 0x1026ea4, Func Offset: 0x84
}

// 
// Start address: 0x1026eb0
void egg5belt_1(_anon0* pActwk)
{
	short wD1;
	// Line 1946, Address: 0x1026eb0, Func Offset: 0
	// Line 1947, Address: 0x1026ec0, Func Offset: 0x10
	// Line 1949, Address: 0x1026ec4, Func Offset: 0x14
	// Line 1951, Address: 0x1026ed4, Func Offset: 0x24
	// Line 1952, Address: 0x1026eec, Func Offset: 0x3c
	// Line 1954, Address: 0x1026ef8, Func Offset: 0x48
	// Line 1956, Address: 0x1026f14, Func Offset: 0x64
	// Line 1957, Address: 0x1026f28, Func Offset: 0x78
	// Line 1958, Address: 0x1026f40, Func Offset: 0x90
	// Line 1959, Address: 0x1026f48, Func Offset: 0x98
	// Line 1961, Address: 0x1026f50, Func Offset: 0xa0
	// Line 1970, Address: 0x1026f5c, Func Offset: 0xac
	// Line 1973, Address: 0x1026f70, Func Offset: 0xc0
	// Line 1974, Address: 0x1026f7c, Func Offset: 0xcc
	// Line 1976, Address: 0x1026f8c, Func Offset: 0xdc
	// Func End, Address: 0x1026fa0, Func Offset: 0xf0
}

// 
// Start address: 0x1026fa0
void egg5belt_2(_anon0* pActwk)
{
	short subact;
	int wD6;
	// Line 1980, Address: 0x1026fa0, Func Offset: 0
	// Line 1984, Address: 0x1026fb4, Func Offset: 0x14
	// Line 1985, Address: 0x1026fc4, Func Offset: 0x24
	// Line 1988, Address: 0x1026ff8, Func Offset: 0x58
	// Line 1989, Address: 0x1027008, Func Offset: 0x68
	// Line 1992, Address: 0x1027020, Func Offset: 0x80
	// Line 1994, Address: 0x1027030, Func Offset: 0x90
	// Line 1999, Address: 0x1027038, Func Offset: 0x98
	// Line 2000, Address: 0x1027044, Func Offset: 0xa4
	// Line 2001, Address: 0x1027078, Func Offset: 0xd8
	// Line 2003, Address: 0x1027088, Func Offset: 0xe8
	// Line 2004, Address: 0x1027098, Func Offset: 0xf8
	// Line 2009, Address: 0x10270a4, Func Offset: 0x104
	// Line 2010, Address: 0x10270b4, Func Offset: 0x114
	// Line 2012, Address: 0x10270c4, Func Offset: 0x124
	// Line 2013, Address: 0x10270dc, Func Offset: 0x13c
	// Line 2014, Address: 0x10270e8, Func Offset: 0x148
	// Func End, Address: 0x1027100, Func Offset: 0x160
}

// 
// Start address: 0x1027100
void egg5belt_3(_anon0* pActwk)
{
	// Line 2017, Address: 0x1027100, Func Offset: 0
	// Line 2019, Address: 0x1027108, Func Offset: 0x8
	// Line 2020, Address: 0x102710c, Func Offset: 0xc
	// Func End, Address: 0x1027118, Func Offset: 0x18
}

// 
// Start address: 0x1027120
int belt_spdset(_anon0* pActwk)
{
	int wD6;
	// Line 2026, Address: 0x1027120, Func Offset: 0
	// Line 2029, Address: 0x1027130, Func Offset: 0x10
	// Line 2030, Address: 0x102713c, Func Offset: 0x1c
	// Line 2032, Address: 0x1027144, Func Offset: 0x24
	// Line 2034, Address: 0x102714c, Func Offset: 0x2c
	// Line 2038, Address: 0x1027178, Func Offset: 0x58
	// Line 2039, Address: 0x1027188, Func Offset: 0x68
	// Line 2042, Address: 0x1027190, Func Offset: 0x70
	// Line 2046, Address: 0x10271b8, Func Offset: 0x98
	// Line 2049, Address: 0x10271c8, Func Offset: 0xa8
	// Line 2054, Address: 0x10271d0, Func Offset: 0xb0
	// Line 2056, Address: 0x10271dc, Func Offset: 0xbc
	// Line 2061, Address: 0x10271e4, Func Offset: 0xc4
	// Line 2065, Address: 0x10271f4, Func Offset: 0xd4
	// Line 2066, Address: 0x1027210, Func Offset: 0xf0
	// Line 2070, Address: 0x1027224, Func Offset: 0x104
	// Line 2071, Address: 0x1027240, Func Offset: 0x120
	// Line 2073, Address: 0x102724c, Func Offset: 0x12c
	// Line 2074, Address: 0x1027250, Func Offset: 0x130
	// Func End, Address: 0x1027264, Func Offset: 0x144
}

// 
// Start address: 0x1027270
void belt_hitpnt(short subact, _anon0* pActwk)
{
	// Line 2080, Address: 0x1027270, Func Offset: 0
	// Line 2081, Address: 0x102727c, Func Offset: 0xc
	// Line 2082, Address: 0x1027294, Func Offset: 0x24
	// Line 2085, Address: 0x10272b0, Func Offset: 0x40
	// Line 2086, Address: 0x10272e0, Func Offset: 0x70
	// Line 2088, Address: 0x10272f0, Func Offset: 0x80
	// Func End, Address: 0x10272fc, Func Offset: 0x8c
}

// 
// Start address: 0x1027300
void belt_sncspd(int wD6, _anon0* pActwk)
{
	_anon2 wD0;
	// Line 2094, Address: 0x1027300, Func Offset: 0
	// Line 2097, Address: 0x102730c, Func Offset: 0xc
	// Line 2101, Address: 0x102731c, Func Offset: 0x1c
	// Line 2103, Address: 0x1027334, Func Offset: 0x34
	// Line 2104, Address: 0x1027350, Func Offset: 0x50
	// Line 2106, Address: 0x102736c, Func Offset: 0x6c
	// Line 2107, Address: 0x102737c, Func Offset: 0x7c
	// Line 2112, Address: 0x1027384, Func Offset: 0x84
	// Line 2113, Address: 0x1027394, Func Offset: 0x94
	// Line 2114, Address: 0x10273a4, Func Offset: 0xa4
	// Line 2116, Address: 0x10273b4, Func Offset: 0xb4
	// Line 2119, Address: 0x10273c0, Func Offset: 0xc0
	// Line 2120, Address: 0x10273c4, Func Offset: 0xc4
	// Line 2124, Address: 0x10273d0, Func Offset: 0xd0
	// Line 2126, Address: 0x10273fc, Func Offset: 0xfc
	// Line 2127, Address: 0x1027400, Func Offset: 0x100
	// Line 2130, Address: 0x1027418, Func Offset: 0x118
	// Line 2131, Address: 0x1027424, Func Offset: 0x124
	// Line 2134, Address: 0x102743c, Func Offset: 0x13c
	// Func End, Address: 0x1027448, Func Offset: 0x148
}

// 
// Start address: 0x1027450
void belt_sncxmax(short subact)
{
	// Line 2140, Address: 0x1027450, Func Offset: 0
	// Line 2141, Address: 0x1027458, Func Offset: 0x8
	// Line 2143, Address: 0x1027490, Func Offset: 0x40
	// Line 2144, Address: 0x10274ac, Func Offset: 0x5c
	// Line 2146, Address: 0x10274b8, Func Offset: 0x68
	// Func End, Address: 0x10274c4, Func Offset: 0x74
}

// 
// Start address: 0x10274d0
void belt_anime(_anon0* pActwk)
{
	unsigned char wD0;
	// Line 2154, Address: 0x10274d0, Func Offset: 0
	// Line 2157, Address: 0x10274e0, Func Offset: 0x10
	// Line 2160, Address: 0x10274fc, Func Offset: 0x2c
	// Line 2161, Address: 0x1027504, Func Offset: 0x34
	// Line 2164, Address: 0x102750c, Func Offset: 0x3c
	// Line 2167, Address: 0x1027528, Func Offset: 0x58
	// Line 2168, Address: 0x1027530, Func Offset: 0x60
	// Line 2171, Address: 0x1027538, Func Offset: 0x68
	// Line 2174, Address: 0x1027554, Func Offset: 0x84
	// Line 2175, Address: 0x102755c, Func Offset: 0x8c
	// Line 2179, Address: 0x1027564, Func Offset: 0x94
	// Line 2184, Address: 0x102756c, Func Offset: 0x9c
	// Line 2185, Address: 0x102757c, Func Offset: 0xac
	// Line 2187, Address: 0x1027598, Func Offset: 0xc8
	// Line 2188, Address: 0x10275a0, Func Offset: 0xd0
	// Line 2190, Address: 0x10275ac, Func Offset: 0xdc
	// Func End, Address: 0x10275c0, Func Offset: 0xf0
}

// 
// Start address: 0x10275c0
void set_belt_col(_anon0* pActwk)
{
	tagPALETTEENTRY* pColorwk;
	char bA3;
	tagPALETTEENTRY belt_col_tblD[9];
	tagPALETTEENTRY belt_col_tblC[9];
	// Line 2196, Address: 0x10275c0, Func Offset: 0
	// Line 2199, Address: 0x10275d0, Func Offset: 0x10
	// Line 2204, Address: 0x1027604, Func Offset: 0x44
	// Line 2214, Address: 0x1027638, Func Offset: 0x78
	// Line 2215, Address: 0x1027648, Func Offset: 0x88
	// Line 2216, Address: 0x1027664, Func Offset: 0xa4
	// Line 2218, Address: 0x102766c, Func Offset: 0xac
	// Line 2219, Address: 0x102767c, Func Offset: 0xbc
	// Line 2220, Address: 0x1027688, Func Offset: 0xc8
	// Line 2222, Address: 0x1027698, Func Offset: 0xd8
	// Line 2223, Address: 0x10276cc, Func Offset: 0x10c
	// Line 2224, Address: 0x10276d0, Func Offset: 0x110
	// Line 2225, Address: 0x10276dc, Func Offset: 0x11c
	// Line 2226, Address: 0x1027710, Func Offset: 0x150
	// Line 2227, Address: 0x1027714, Func Offset: 0x154
	// Line 2228, Address: 0x1027720, Func Offset: 0x160
	// Line 2229, Address: 0x1027754, Func Offset: 0x194
	// Line 2232, Address: 0x102775c, Func Offset: 0x19c
	// Line 2233, Address: 0x1027790, Func Offset: 0x1d0
	// Line 2234, Address: 0x1027794, Func Offset: 0x1d4
	// Line 2235, Address: 0x10277a0, Func Offset: 0x1e0
	// Line 2236, Address: 0x10277d4, Func Offset: 0x214
	// Line 2237, Address: 0x10277d8, Func Offset: 0x218
	// Line 2238, Address: 0x10277e4, Func Offset: 0x224
	// Line 2240, Address: 0x1027818, Func Offset: 0x258
	// Func End, Address: 0x102782c, Func Offset: 0x26c
}

// 
// Start address: 0x1027830
int chk_belt_on()
{
	// Line 2250, Address: 0x1027830, Func Offset: 0
	// Line 2252, Address: 0x102784c, Func Offset: 0x1c
	// Line 2254, Address: 0x1027868, Func Offset: 0x38
	// Line 2256, Address: 0x1027884, Func Offset: 0x54
	// Line 2258, Address: 0x102789c, Func Offset: 0x6c
	// Line 2259, Address: 0x10278b4, Func Offset: 0x84
	// Line 2261, Address: 0x10278c0, Func Offset: 0x90
	// Line 2266, Address: 0x10278cc, Func Offset: 0x9c
	// Line 2267, Address: 0x10278d0, Func Offset: 0xa0
	// Func End, Address: 0x10278d8, Func Offset: 0xa8
}

// 
// Start address: 0x10278e0
void egg5bakuha(_anon0* pActwk)
{
	int(*act_tbl)(_anon0*)[3];
	// Line 2273, Address: 0x10278e0, Func Offset: 0
	// Line 2281, Address: 0x10278ec, Func Offset: 0xc
	// Line 2283, Address: 0x1027938, Func Offset: 0x58
	// Line 2284, Address: 0x102794c, Func Offset: 0x6c
	// Line 2285, Address: 0x1027958, Func Offset: 0x78
	// Line 2287, Address: 0x1027960, Func Offset: 0x80
	// Line 2288, Address: 0x102796c, Func Offset: 0x8c
	// Func End, Address: 0x102797c, Func Offset: 0x9c
}

// 
// Start address: 0x1027980
int egg5bakuha_ini(_anon0* pActwk)
{
	int ret;
	// Line 2291, Address: 0x1027980, Func Offset: 0
	// Line 2294, Address: 0x1027990, Func Offset: 0x10
	// Line 2295, Address: 0x10279a0, Func Offset: 0x20
	// Line 2296, Address: 0x10279ac, Func Offset: 0x2c
	// Line 2297, Address: 0x10279b8, Func Offset: 0x38
	// Line 2298, Address: 0x10279c4, Func Offset: 0x44
	// Line 2299, Address: 0x10279d0, Func Offset: 0x50
	// Line 2300, Address: 0x10279dc, Func Offset: 0x5c
	// Line 2301, Address: 0x10279ec, Func Offset: 0x6c
	// Line 2302, Address: 0x10279fc, Func Offset: 0x7c
	// Line 2303, Address: 0x1027a00, Func Offset: 0x80
	// Func End, Address: 0x1027a14, Func Offset: 0x94
}

// 
// Start address: 0x1027a20
int egg5bakuha_1(_anon0* pActwk)
{
	// Line 2306, Address: 0x1027a20, Func Offset: 0
	// Line 2307, Address: 0x1027a28, Func Offset: 0x8
	// Line 2308, Address: 0x1027a3c, Func Offset: 0x1c
	// Line 2309, Address: 0x1027a40, Func Offset: 0x20
	// Func End, Address: 0x1027a4c, Func Offset: 0x2c
}

// 
// Start address: 0x1027a50
int frameout_sp4(_anon0* pActwk)
{
	// Line 2312, Address: 0x1027a50, Func Offset: 0
	// Line 2313, Address: 0x1027a58, Func Offset: 0x8
	// Line 2314, Address: 0x1027a5c, Func Offset: 0xc
	// Line 2315, Address: 0x1027a60, Func Offset: 0x10
	// Func End, Address: 0x1027a6c, Func Offset: 0x1c
}

// 
// Start address: 0x1027a70
void make_hibana1()
{
	_anon0* ppActwk;
	// Line 2322, Address: 0x1027a70, Func Offset: 0
	// Line 2325, Address: 0x1027a78, Func Offset: 0x8
	// Line 2328, Address: 0x1027a8c, Func Offset: 0x1c
	// Line 2329, Address: 0x1027a98, Func Offset: 0x28
	// Line 2330, Address: 0x1027aa4, Func Offset: 0x34
	// Line 2332, Address: 0x1027ab0, Func Offset: 0x40
	// Func End, Address: 0x1027ac0, Func Offset: 0x50
}

// 
// Start address: 0x1027ac0
void make_hibana2(_anon0* pActwk)
{
	_anon0* ppActwk;
	short wD4;
	int i;
	int j;
	short hibana_tbl[16];
	short hibana_ytbl[6];
	// Line 2335, Address: 0x1027ac0, Func Offset: 0
	// Line 2339, Address: 0x1027ad8, Func Offset: 0x18
	// Line 2350, Address: 0x1027b0c, Func Offset: 0x4c
	// Line 2360, Address: 0x1027b40, Func Offset: 0x80
	// Line 2361, Address: 0x1027b60, Func Offset: 0xa0
	// Line 2362, Address: 0x1027b64, Func Offset: 0xa4
	// Line 2364, Address: 0x1027b70, Func Offset: 0xb0
	// Line 2366, Address: 0x1027b84, Func Offset: 0xc4
	// Line 2367, Address: 0x1027b90, Func Offset: 0xd0
	// Line 2368, Address: 0x1027bd0, Func Offset: 0x110
	// Line 2369, Address: 0x1027bdc, Func Offset: 0x11c
	// Line 2370, Address: 0x1027bec, Func Offset: 0x12c
	// Line 2371, Address: 0x1027bfc, Func Offset: 0x13c
	// Line 2372, Address: 0x1027c20, Func Offset: 0x160
	// Line 2373, Address: 0x1027c60, Func Offset: 0x1a0
	// Line 2375, Address: 0x1027c68, Func Offset: 0x1a8
	// Line 2376, Address: 0x1027c6c, Func Offset: 0x1ac
	// Line 2377, Address: 0x1027c7c, Func Offset: 0x1bc
	// Func End, Address: 0x1027c98, Func Offset: 0x1d8
}

// 
// Start address: 0x1027ca0
void bom_set(_anon0* pActwk)
{
	_anon0* ppActwk;
	unsigned char wD2;
	unsigned char wD3;
	short bom_tbl[8];
	// Line 2384, Address: 0x1027ca0, Func Offset: 0
	// Line 2387, Address: 0x1027cb4, Func Offset: 0x14
	// Line 2396, Address: 0x1027ce8, Func Offset: 0x48
	// Line 2399, Address: 0x1027d18, Func Offset: 0x78
	// Line 2400, Address: 0x1027d24, Func Offset: 0x84
	// Line 2401, Address: 0x1027d38, Func Offset: 0x98
	// Line 2402, Address: 0x1027d4c, Func Offset: 0xac
	// Line 2403, Address: 0x1027d5c, Func Offset: 0xbc
	// Line 2406, Address: 0x1027d70, Func Offset: 0xd0
	// Line 2407, Address: 0x1027d78, Func Offset: 0xd8
	// Line 2408, Address: 0x1027d84, Func Offset: 0xe4
	// Line 2409, Address: 0x1027d94, Func Offset: 0xf4
	// Line 2410, Address: 0x1027da4, Func Offset: 0x104
	// Line 2411, Address: 0x1027dd0, Func Offset: 0x130
	// Line 2412, Address: 0x1027df0, Func Offset: 0x150
	// Line 2415, Address: 0x1027dfc, Func Offset: 0x15c
	// Func End, Address: 0x1027e14, Func Offset: 0x174
}

// 
// Start address: 0x1027e20
void make_meca2(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2418, Address: 0x1027e20, Func Offset: 0
	// Line 2421, Address: 0x1027e2c, Func Offset: 0xc
	// Line 2423, Address: 0x1027e40, Func Offset: 0x20
	// Line 2424, Address: 0x1027e80, Func Offset: 0x60
	// Line 2425, Address: 0x1027ec0, Func Offset: 0xa0
	// Line 2426, Address: 0x1027ecc, Func Offset: 0xac
	// Line 2427, Address: 0x1027edc, Func Offset: 0xbc
	// Line 2429, Address: 0x1027f00, Func Offset: 0xe0
	// Func End, Address: 0x1027f10, Func Offset: 0xf0
}

// 
// Start address: 0x1027f10
void make_egg5(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2432, Address: 0x1027f10, Func Offset: 0
	// Line 2435, Address: 0x1027f1c, Func Offset: 0xc
	// Line 2437, Address: 0x1027f30, Func Offset: 0x20
	// Line 2438, Address: 0x1027f70, Func Offset: 0x60
	// Line 2439, Address: 0x1027fb0, Func Offset: 0xa0
	// Line 2440, Address: 0x1027fbc, Func Offset: 0xac
	// Line 2441, Address: 0x1027fcc, Func Offset: 0xbc
	// Line 2443, Address: 0x1027fdc, Func Offset: 0xcc
	// Func End, Address: 0x1027fec, Func Offset: 0xdc
}

// 
// Start address: 0x1027ff0
void make_catch(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2446, Address: 0x1027ff0, Func Offset: 0
	// Line 2449, Address: 0x1027ffc, Func Offset: 0xc
	// Line 2451, Address: 0x1028010, Func Offset: 0x20
	// Line 2452, Address: 0x1028050, Func Offset: 0x60
	// Line 2453, Address: 0x1028090, Func Offset: 0xa0
	// Line 2454, Address: 0x102809c, Func Offset: 0xac
	// Line 2455, Address: 0x10280c0, Func Offset: 0xd0
	// Line 2457, Address: 0x10280e4, Func Offset: 0xf4
	// Func End, Address: 0x10280f4, Func Offset: 0x104
}

// 
// Start address: 0x1028100
void make_pipe(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2460, Address: 0x1028100, Func Offset: 0
	// Line 2463, Address: 0x102810c, Func Offset: 0xc
	// Line 2465, Address: 0x1028120, Func Offset: 0x20
	// Line 2466, Address: 0x1028160, Func Offset: 0x60
	// Line 2467, Address: 0x102816c, Func Offset: 0x6c
	// Line 2468, Address: 0x102817c, Func Offset: 0x7c
	// Line 2470, Address: 0x102818c, Func Offset: 0x8c
	// Func End, Address: 0x102819c, Func Offset: 0x9c
}

// 
// Start address: 0x10281a0
void make_meca3(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2473, Address: 0x10281a0, Func Offset: 0
	// Line 2476, Address: 0x10281ac, Func Offset: 0xc
	// Line 2478, Address: 0x10281c0, Func Offset: 0x20
	// Line 2479, Address: 0x1028200, Func Offset: 0x60
	// Line 2480, Address: 0x102820c, Func Offset: 0x6c
	// Line 2481, Address: 0x102821c, Func Offset: 0x7c
	// Line 2483, Address: 0x1028240, Func Offset: 0xa0
	// Func End, Address: 0x1028250, Func Offset: 0xb0
}

// 
// Start address: 0x1028250
void make_bomb(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2486, Address: 0x1028250, Func Offset: 0
	// Line 2489, Address: 0x102825c, Func Offset: 0xc
	// Line 2491, Address: 0x1028270, Func Offset: 0x20
	// Line 2492, Address: 0x10282b0, Func Offset: 0x60
	// Line 2493, Address: 0x10282bc, Func Offset: 0x6c
	// Line 2494, Address: 0x10282cc, Func Offset: 0x7c
	// Line 2496, Address: 0x10282f0, Func Offset: 0xa0
	// Func End, Address: 0x1028300, Func Offset: 0xb0
}

// 
// Start address: 0x1028300
void make_bomb2(_anon0* pActwk)
{
	_anon0* ppActwk;
	int i;
	// Line 2499, Address: 0x1028300, Func Offset: 0
	// Line 2503, Address: 0x1028310, Func Offset: 0x10
	// Line 2505, Address: 0x102831c, Func Offset: 0x1c
	// Line 2507, Address: 0x1028330, Func Offset: 0x30
	// Line 2508, Address: 0x1028370, Func Offset: 0x70
	// Line 2509, Address: 0x102837c, Func Offset: 0x7c
	// Line 2510, Address: 0x102838c, Func Offset: 0x8c
	// Line 2511, Address: 0x102839c, Func Offset: 0x9c
	// Line 2512, Address: 0x10283ac, Func Offset: 0xac
	// Line 2514, Address: 0x10283b4, Func Offset: 0xb4
	// Line 2515, Address: 0x10283b8, Func Offset: 0xb8
	// Line 2516, Address: 0x10283c4, Func Offset: 0xc4
	// Func End, Address: 0x10283d8, Func Offset: 0xd8
}

// 
// Start address: 0x10283e0
void make_belt(_anon0* pActwk)
{
	_anon0* ppActwk;
	// Line 2519, Address: 0x10283e0, Func Offset: 0
	// Line 2522, Address: 0x10283ec, Func Offset: 0xc
	// Line 2524, Address: 0x1028400, Func Offset: 0x20
	// Line 2525, Address: 0x1028440, Func Offset: 0x60
	// Line 2526, Address: 0x1028480, Func Offset: 0xa0
	// Line 2528, Address: 0x102848c, Func Offset: 0xac
	// Func End, Address: 0x102849c, Func Offset: 0xbc
}

// 
// Start address: 0x10284a0
void chg_mstno(unsigned char num, _anon0* pActwk)
{
	// Line 2538, Address: 0x10284a0, Func Offset: 0
	// Line 2539, Address: 0x10284b0, Func Offset: 0x10
	// Line 2540, Address: 0x10284f4, Func Offset: 0x54
	// Func End, Address: 0x1028504, Func Offset: 0x64
}

// 
// Start address: 0x1028510
void chg_mstno2(unsigned char num, short subact)
{
	// Line 2542, Address: 0x1028510, Func Offset: 0
	// Line 2543, Address: 0x102851c, Func Offset: 0xc
	// Line 2544, Address: 0x1028548, Func Offset: 0x38
	// Line 2545, Address: 0x1028570, Func Offset: 0x60
	// Line 2546, Address: 0x1028598, Func Offset: 0x88
	// Line 2547, Address: 0x10285c0, Func Offset: 0xb0
	// Line 2548, Address: 0x10285e8, Func Offset: 0xd8
	// Func End, Address: 0x10285f4, Func Offset: 0xe4
}

// 
// Start address: 0x1028600
int frameout_chk(_anon0* pActwk)
{
	int ret;
	short wD3;
	_anon5 wD0;
	// Line 2558, Address: 0x1028600, Func Offset: 0
	// Line 2559, Address: 0x1028610, Func Offset: 0x10
	// Line 2565, Address: 0x1028614, Func Offset: 0x14
	// Line 2566, Address: 0x1028618, Func Offset: 0x18
	// Line 2567, Address: 0x1028624, Func Offset: 0x24
	// Line 2568, Address: 0x1028658, Func Offset: 0x58
	// Line 2570, Address: 0x1028678, Func Offset: 0x78
	// Line 2572, Address: 0x102869c, Func Offset: 0x9c
	// Line 2573, Address: 0x10286a0, Func Offset: 0xa0
	// Line 2574, Address: 0x10286ac, Func Offset: 0xac
	// Line 2575, Address: 0x10286e0, Func Offset: 0xe0
	// Line 2577, Address: 0x1028700, Func Offset: 0x100
	// Line 2578, Address: 0x1028724, Func Offset: 0x124
	// Line 2582, Address: 0x1028728, Func Offset: 0x128
	// Line 2583, Address: 0x102872c, Func Offset: 0x12c
	// Func End, Address: 0x1028740, Func Offset: 0x140
}

