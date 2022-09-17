typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPALETTEENTRY;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef void(*type_7)(_anon0*);
typedef void(*type_10)(_anon0*);
typedef void(*type_12)(_anon0*);
typedef void(*type_16)(_anon0*);
typedef void(*type_21)(_anon0*);
typedef void(*type_27)(_anon0*);
typedef void(*type_29)(_anon0*);
typedef void(*type_37)(_anon0*);
typedef void(*type_41)(_anon0*);
typedef void(*type_43)(_anon0*);
typedef void(*type_48)(_anon0*);
typedef void(*type_51)(_anon0*);
typedef void(*type_53)(_anon0*, _anon0*);
typedef void(*type_58)();
typedef void(*type_63)(_anon0*);
typedef void(*type_69)(_anon0*);

typedef _anon7 type_0[20];
typedef _anon1* type_1[7];
typedef _anon7 type_2[0];
typedef short type_3[4];
typedef unsigned short type_4[0];
typedef _anon1* type_5[5];
typedef _anon1* type_6[2];
typedef void(*type_8)(_anon0*)[2];
typedef unsigned char* type_9[1];
typedef void(*type_11)(_anon0*)[2];
typedef short type_13[3];
typedef void(*type_14)(_anon0*)[4];
typedef unsigned char type_15[3];
typedef void(*type_17)(_anon0*)[2];
typedef unsigned char type_18[3];
typedef _anon1* type_19[24];
typedef unsigned char type_20[4];
typedef void(*type_22)(_anon0*)[3];
typedef unsigned char* type_23[1];
typedef unsigned char type_24[6];
typedef short type_25[12];
typedef unsigned char type_26[6];
typedef void(*type_28)(_anon0*)[10];
typedef void(*type_30)(_anon0*)[4];
typedef _anon1* type_31[6];
typedef unsigned char type_32[3];
typedef _anon1* type_33[2];
typedef unsigned char type_34[4];
typedef unsigned char type_35[6];
typedef short type_36[43];
typedef unsigned char type_38[10];
typedef void(*type_39)(_anon0*)[12];
typedef unsigned char type_40[2];
typedef void(*type_42)(_anon0*)[2];
typedef void(*type_44)(_anon0*)[5];
typedef unsigned char type_45[22];
typedef short type_46[8];
typedef tagPALETTEENTRY type_47[16];
typedef void(*type_49)(_anon0*)[6];
typedef _anon1* type_50[4];
typedef unsigned char* type_52[14];
typedef void(*type_54)(_anon0*, _anon0*)[4];
typedef unsigned char type_55[4];
typedef unsigned char type_56[4];
typedef _anon0 type_57[128];
typedef void(*type_59)()[4];
typedef unsigned char type_60[3];
typedef unsigned char type_61[4];
typedef unsigned char type_62[6];
typedef void(*type_64)(_anon0*)[8];
typedef unsigned char type_65[6];
typedef _anon1* type_66[2];
typedef unsigned char* type_67[1];
typedef unsigned char* type_68[2];
typedef void(*type_70)(_anon0*)[10];
typedef unsigned char type_71[5];
typedef unsigned char type_72[6];
typedef unsigned char type_73[3];
typedef short type_74[2];

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

unsigned char egg7_pchg0[4];
unsigned char* egg7_pchg[1];
_anon1 egg7_pat00;
_anon1 egg7_pat01;
_anon1* egg7_pat[2];
unsigned char egg7beam_pchg0[4];
unsigned char* egg7beam_pchg[1];
_anon1 egg7b_pat00;
_anon1 egg7b_pat01;
_anon1* egg7beam_pat[2];
unsigned char egg7jet_pchg0[6];
unsigned char egg7jet_pchg1[6];
unsigned char* egg7jet_pchg[2];
_anon1 egg7j_pat00;
_anon1 egg7j_pat01;
_anon1 egg7j_pat02;
_anon1 egg7j_pat03;
_anon1 egg7j_pat04;
_anon1 egg7j_pat05;
_anon1* egg7jet_pat[6];
unsigned char msnc_pchg00[3];
unsigned char msnc_pchg01[10];
unsigned char msnc_pchg02[5];
unsigned char msnc_pchg03[3];
unsigned char msnc_pchg04[6];
unsigned char msnc_pchg05[6];
unsigned char msnc_pchg06[6];
unsigned char msnc_pchg07[6];
unsigned char msnc_pchg08[3];
unsigned char msnc_pchg09[4];
unsigned char msnc_pchg10[4];
unsigned char msnc_pchg11[3];
unsigned char msnc_pchg12[4];
unsigned char msnc_pchg13[3];
unsigned char* msnc_pchg[14];
_anon1 msnc_pat00;
_anon1 msnc_pat01;
_anon1 msnc_pat02;
_anon1 msnc_pat03;
_anon1 msnc_pat04;
_anon1 msnc_pat05;
_anon1 msnc_pat06;
_anon1 msnc_pat07;
_anon1 msnc_pat08;
_anon1 msnc_pat09;
_anon1 msnc_pat10;
_anon1 msnc_pat11;
_anon1 msnc_pat12;
_anon1 msnc_pat13;
_anon1 msnc_pat14;
_anon1 msnc_pat15;
_anon1 msnc_pat16;
_anon1 msnc_pat17;
_anon1 msnc_pat18;
_anon1 msnc_pat19;
_anon1 msnc_pat20;
_anon1 msnc_pat21;
_anon1 msnc_pat22;
_anon1 msnc_pat23;
_anon1* msnc_pat[24];
_anon1 msnc_ele_pat0;
_anon1 msnc_ele_pat1;
_anon1* msnc_ele_pat[2];
_anon1 msnc_bara_pat0;
_anon1 msnc_bara_pat1;
_anon1 msnc_bara_pat2;
_anon1 msnc_bara_pat3;
_anon1 msnc_bara_pat4;
_anon1* msnc_bara_pat[5];
_anon1 hahen73_pat0;
_anon1 hahen73_pat1;
_anon1 hahen73_pat2;
_anon1 hahen73_pat3;
_anon1* hahen73_pat[4];
short QuickReturn;
_anon0* pEggman;
_anon0 actwk[128];
_anon0* pPlayerwk;
unsigned char generate_flag;
unsigned char bossflag;
short GL_d5;
_anon2 scra_h_posit;
_anon0* pMsnc;
unsigned char bossstart;
short scralim_n_left;
short scralim_left;
tagPALETTEENTRY* lpcolorwk3;
tagPALETTEENTRY* lpcolorwk;
short scra_hline;
short scralim_n_right;
short scralim_right;
unsigned short scr_dir_tbl[0];
_anon1* bakupat[7];
_anon2 scra_v_posit;

void msnc(_anon0* pActwk);
void msnc_ini(_anon0* pActwk);
void msnc_demo1(_anon0* pActwk);
void msnc_demo2(_anon0* pActwk);
void msnc_demo2_ini(_anon0* pActwk);
void kamae_anime(_anon0* pActwk);
void fire_start(_anon0* pActwk);
void door_open(_anon0* pActwk);
void msnc_demo2_next(_anon0* pActwk);
void msnc_egg_chk(_anon0* pActwk);
void goal_chk(_anon0* pActwk);
void goal_chk_snc_win(_anon0* pActwk);
void goal_chk_msnc_win(_anon0* pActwk);
void loser_posiset(_anon0* pActwk);
void msnc_low_move(_anon0* pActwk);
void msnc_atc_move(_anon0* pActwk);
void baisoku_mode(_anon0* pActwk);
void msnc_normal_move(_anon0* pActwk);
void msnc_hi_set(_anon0* pActwk);
void msnc_low_set(_anon0* pActwk);
void msnc_wk_clr(_anon0* pActwk);
void msnc_wk_clr2(_anon0* pActwk);
void msnc_atc(_anon0* pActwk);
void msnc_act_ini(_anon0* pActwk);
void msnc_act_next(_anon0* pActwk);
void msnc_f_atc(_anon0* pActwk);
void msnc_f_atc_tobi(_anon0* pActwk);
void msnc_f_atc_atack(_anon0* pActwk);
void msnc_f_atc_coli(_anon0* pActwk);
void msnc_f_atc_end(_anon0* pActwk);
void msnc_b_atc(_anon0* pActwk);
void msnc_b_atc_atack(_anon0* pActwk);
void msnc_b_atc_coli(_anon0* pActwk);
void msnc_b_atc_kill(_anon0* pActwk);
void msnc_ele(_anon0* pActwk);
void msnc_ele_ini(_anon0* pActwk);
void msnc_ele_01(_anon0* pActwk);
void msnc_win(_anon0* pActwk);
void msnc_win_ini(_anon0* pActwk);
void msnc_win_wait(_anon0* pActwk);
void msnc_win_timer(_anon0* pActwk);
void msnc_win_chichi(_anon0* pActwk);
void msnc_lose(_anon0* pActwk);
void egg7(_anon0* pActwk);
void egg7_ini(_anon0* pActwk);
void egg7_demo1(_anon0* pActwk);
void snc_wait(_anon0* pActwk);
void r_l(_anon0* pActwk);
void l_r(_anon0* pActwk);
void r_l2(_anon0* pActwk);
void egg7_demo2(_anon0* pActwk);
void msnc_turn(_anon0* pActwk);
void beam_on(_anon0* pActwk);
void beam_on2(_anon0* pActwk);
void beam_off(_anon0* pActwk);
void move_start(_anon0* pActwk);
void beam_next(_anon0* pActwk);
void egg7_move(_anon0* pActwk);
void egg7_goal(_anon0* pActwk);
void egg7_goal_ini(_anon0* pActwk);
void egg7_goal_msnc_win(_anon0* pActwk);
void egg7_goal_snc_win(_anon0* pActwk);
void egg7_goal0(_anon0* pActwk);
void egg7_goal1(_anon0* pActwk);
void egg7_goal2(_anon0* pActwk);
void egg7_goal3(_anon0* pActwk);
void emie7clrset();
void egg7_spdset(_anon0* pActwk);
void egg7_maxspdset(_anon0* pActwk, short d1);
void egg_beamchk(_anon0* pActwk);
void egg7_hscr(_anon0* pActwk);
void egg7_hscr_pat0();
void egg7_hscr_pat1();
void egg7_hscr_pat2();
void egg7_hscr_pat3();
void egg_hight(_anon0* pActwk);
void msnc_hight(_anon0* pActwk);
void hight_set2(_anon0* pActwk);
void hight_set(_anon0* pActwk);
short hight_set_retry(_anon0* pActwk, short* d1);
void egg7beam(_anon0* pActwk);
void egg7beam_ini(_anon0* pActwk);
void egg7beam_01(_anon0* pActwk, _anon0* a2);
short beam_posi(_anon0* pActwk, _anon0* a2);
void egg7beam_kemuri1(_anon0* pActwk, _anon0* a2);
void egg7beam_kemuri2(_anon0* pActwk);
void kemuri_disp(_anon0* pActwk);
void hahen73(_anon0* pActwk);
void egg7jet(_anon0* pActwk);
void egg7jet_ini(_anon0* pActwk);
void egg7jet_01(_anon0* pActwk);
void msnc_bara(_anon0* pActwk);
void msnc_bara_ini(_anon0* pActwk);
void msnc_bara_01(_anon0* pActwk);
void add_spd3(_anon0* pActwk);
void hari_spdadd(_anon0* pActwk);
void add_spd2(_anon0* pActwk);
void add_spd(_anon0* pActwk);
void w_timer(_anon0* pActwk);
void b_timer(_anon0* pActwk);
void event_timer(_anon0* pActwk, short* pTimer, void(*func)(_anon0*));
void make_bara(_anon0* pActwk);
void make_ele(_anon0* pActwk);
void make_msnc(_anon0* pActwk);
void make_jet(_anon0* pActwk);
void make_beam(_anon0* pActwk);
void make_kemuri(_anon0* pActwk);
void make_bakuha(_anon0* pActwk);
void make_hahen(_anon0* pActwk);

// 
// Start address: 0x1029190
void msnc(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[10];
	// Line 745, Address: 0x1029190, Func Offset: 0
	// Line 746, Address: 0x102919c, Func Offset: 0xc
	// Line 761, Address: 0x10291d0, Func Offset: 0x40
	// Line 762, Address: 0x1029200, Func Offset: 0x70
	// Line 763, Address: 0x102920c, Func Offset: 0x7c
	// Line 765, Address: 0x1029218, Func Offset: 0x88
	// Line 766, Address: 0x1029254, Func Offset: 0xc4
	// Line 768, Address: 0x1029264, Func Offset: 0xd4
	// Line 769, Address: 0x102926c, Func Offset: 0xdc
	// Line 771, Address: 0x1029274, Func Offset: 0xe4
	// Line 772, Address: 0x1029288, Func Offset: 0xf8
	// Line 773, Address: 0x1029294, Func Offset: 0x104
	// Func End, Address: 0x10292a4, Func Offset: 0x114
}

// 
// Start address: 0x10292b0
void msnc_ini(_anon0* pActwk)
{
	// Line 778, Address: 0x10292b0, Func Offset: 0
	// Line 779, Address: 0x10292bc, Func Offset: 0xc
	// Line 780, Address: 0x10292c8, Func Offset: 0x18
	// Line 781, Address: 0x10292d4, Func Offset: 0x24
	// Line 782, Address: 0x10292e0, Func Offset: 0x30
	// Line 783, Address: 0x10292ec, Func Offset: 0x3c
	// Line 784, Address: 0x10292f8, Func Offset: 0x48
	// Line 785, Address: 0x1029308, Func Offset: 0x58
	// Line 787, Address: 0x1029318, Func Offset: 0x68
	// Line 788, Address: 0x1029324, Func Offset: 0x74
	// Func End, Address: 0x1029334, Func Offset: 0x84
}

// 
// Start address: 0x1029340
void msnc_demo1(_anon0* pActwk)
{
	// Line 793, Address: 0x1029340, Func Offset: 0
	// Line 794, Address: 0x1029348, Func Offset: 0x8
	// Line 796, Address: 0x1029364, Func Offset: 0x24
	// Line 797, Address: 0x102937c, Func Offset: 0x3c
	// Line 800, Address: 0x1029384, Func Offset: 0x44
	// Line 801, Address: 0x10293a0, Func Offset: 0x60
	// Line 802, Address: 0x10293bc, Func Offset: 0x7c
	// Line 803, Address: 0x10293cc, Func Offset: 0x8c
	// Line 804, Address: 0x10293d8, Func Offset: 0x98
	// Line 805, Address: 0x10293e4, Func Offset: 0xa4
	// Line 808, Address: 0x10293ec, Func Offset: 0xac
	// Line 809, Address: 0x10293f4, Func Offset: 0xb4
	// Func End, Address: 0x1029400, Func Offset: 0xc0
}

// 
// Start address: 0x1029400
void msnc_demo2(_anon0* pActwk)
{
	void(*demo2_jmp)(_anon0*)[8];
	// Line 814, Address: 0x1029400, Func Offset: 0
	// Line 815, Address: 0x102940c, Func Offset: 0xc
	// Line 827, Address: 0x1029440, Func Offset: 0x40
	// Line 828, Address: 0x1029464, Func Offset: 0x64
	// Func End, Address: 0x1029474, Func Offset: 0x74
}

// 
// Start address: 0x1029480
void msnc_demo2_ini(_anon0* pActwk)
{
	// Line 831, Address: 0x1029480, Func Offset: 0
	// Line 832, Address: 0x102948c, Func Offset: 0xc
	// Line 833, Address: 0x1029498, Func Offset: 0x18
	// Line 834, Address: 0x10294a8, Func Offset: 0x28
	// Line 836, Address: 0x10294b0, Func Offset: 0x30
	// Line 837, Address: 0x10294bc, Func Offset: 0x3c
	// Func End, Address: 0x10294cc, Func Offset: 0x4c
}

// 
// Start address: 0x10294d0
void kamae_anime(_anon0* pActwk)
{
	// Line 840, Address: 0x10294d0, Func Offset: 0
	// Line 841, Address: 0x10294d8, Func Offset: 0x8
	// Line 843, Address: 0x10294f0, Func Offset: 0x20
	// Line 844, Address: 0x10294fc, Func Offset: 0x2c
	// Line 845, Address: 0x102950c, Func Offset: 0x3c
	// Line 847, Address: 0x1029518, Func Offset: 0x48
	// Func End, Address: 0x1029524, Func Offset: 0x54
}

// 
// Start address: 0x1029530
void fire_start(_anon0* pActwk)
{
	// Line 850, Address: 0x1029530, Func Offset: 0
	// Line 851, Address: 0x1029538, Func Offset: 0x8
	// Line 852, Address: 0x1029548, Func Offset: 0x18
	// Line 853, Address: 0x1029554, Func Offset: 0x24
	// Line 854, Address: 0x1029560, Func Offset: 0x30
	// Func End, Address: 0x102956c, Func Offset: 0x3c
}

// 
// Start address: 0x1029570
void door_open(_anon0* pActwk)
{
	short d0;
	// Line 857, Address: 0x1029570, Func Offset: 0
	// Line 860, Address: 0x1029580, Func Offset: 0x10
	// Line 862, Address: 0x1029590, Func Offset: 0x20
	// Line 863, Address: 0x10295a4, Func Offset: 0x34
	// Line 864, Address: 0x10295b4, Func Offset: 0x44
	// Line 865, Address: 0x10295c0, Func Offset: 0x50
	// Line 866, Address: 0x10295cc, Func Offset: 0x5c
	// Line 868, Address: 0x10295dc, Func Offset: 0x6c
	// Line 870, Address: 0x10295e8, Func Offset: 0x78
	// Line 871, Address: 0x10295f4, Func Offset: 0x84
	// Func End, Address: 0x1029608, Func Offset: 0x98
}

// 
// Start address: 0x1029610
void msnc_demo2_next(_anon0* pActwk)
{
	// Line 874, Address: 0x1029610, Func Offset: 0
	// Line 875, Address: 0x102961c, Func Offset: 0xc
	// Line 876, Address: 0x102962c, Func Offset: 0x1c
	// Line 877, Address: 0x1029638, Func Offset: 0x28
	// Func End, Address: 0x1029648, Func Offset: 0x38
}

// 
// Start address: 0x1029650
void msnc_egg_chk(_anon0* pActwk)
{
	short d0;
	// Line 882, Address: 0x1029650, Func Offset: 0
	// Line 885, Address: 0x1029660, Func Offset: 0x10
	// Line 886, Address: 0x1029678, Func Offset: 0x28
	// Line 887, Address: 0x1029688, Func Offset: 0x38
	// Line 888, Address: 0x10296a0, Func Offset: 0x50
	// Line 890, Address: 0x10296b4, Func Offset: 0x64
	// Line 892, Address: 0x10296d0, Func Offset: 0x80
	// Line 893, Address: 0x10296e4, Func Offset: 0x94
	// Line 894, Address: 0x10296f0, Func Offset: 0xa0
	// Line 895, Address: 0x10296fc, Func Offset: 0xac
	// Line 898, Address: 0x1029704, Func Offset: 0xb4
	// Line 899, Address: 0x1029714, Func Offset: 0xc4
	// Line 901, Address: 0x102973c, Func Offset: 0xec
	// Line 902, Address: 0x1029750, Func Offset: 0x100
	// Line 903, Address: 0x102975c, Func Offset: 0x10c
	// Line 906, Address: 0x1029768, Func Offset: 0x118
	// Line 907, Address: 0x1029774, Func Offset: 0x124
	// Line 908, Address: 0x1029780, Func Offset: 0x130
	// Func End, Address: 0x1029794, Func Offset: 0x144
}

// 
// Start address: 0x10297a0
void goal_chk(_anon0* pActwk)
{
	short d0;
	// Line 913, Address: 0x10297a0, Func Offset: 0
	// Line 916, Address: 0x10297b0, Func Offset: 0x10
	// Line 917, Address: 0x10297cc, Func Offset: 0x2c
	// Line 919, Address: 0x10297e0, Func Offset: 0x40
	// Line 920, Address: 0x10297ec, Func Offset: 0x4c
	// Line 923, Address: 0x10297f4, Func Offset: 0x54
	// Line 924, Address: 0x1029800, Func Offset: 0x60
	// Line 926, Address: 0x1029824, Func Offset: 0x84
	// Line 927, Address: 0x1029830, Func Offset: 0x90
	// Line 930, Address: 0x1029838, Func Offset: 0x98
	// Line 932, Address: 0x1029860, Func Offset: 0xc0
	// Line 935, Address: 0x102986c, Func Offset: 0xcc
	// Func End, Address: 0x1029880, Func Offset: 0xe0
}

// 
// Start address: 0x1029880
void goal_chk_snc_win(_anon0* pActwk)
{
	// Line 938, Address: 0x1029880, Func Offset: 0
	// Line 939, Address: 0x102988c, Func Offset: 0xc
	// Line 941, Address: 0x10298a4, Func Offset: 0x24
	// Line 942, Address: 0x10298b4, Func Offset: 0x34
	// Line 943, Address: 0x10298c8, Func Offset: 0x48
	// Line 944, Address: 0x10298d4, Func Offset: 0x54
	// Line 945, Address: 0x10298e0, Func Offset: 0x60
	// Line 946, Address: 0x10298ec, Func Offset: 0x6c
	// Line 948, Address: 0x10298f8, Func Offset: 0x78
	// Line 950, Address: 0x1029914, Func Offset: 0x94
	// Line 951, Address: 0x1029928, Func Offset: 0xa8
	// Line 952, Address: 0x1029938, Func Offset: 0xb8
	// Line 953, Address: 0x1029944, Func Offset: 0xc4
	// Line 954, Address: 0x1029950, Func Offset: 0xd0
	// Line 955, Address: 0x1029958, Func Offset: 0xd8
	// Line 957, Address: 0x1029960, Func Offset: 0xe0
	// Func End, Address: 0x1029970, Func Offset: 0xf0
}

// 
// Start address: 0x1029970
void goal_chk_msnc_win(_anon0* pActwk)
{
	// Line 960, Address: 0x1029970, Func Offset: 0
	// Line 961, Address: 0x102997c, Func Offset: 0xc
	// Line 962, Address: 0x1029988, Func Offset: 0x18
	// Line 963, Address: 0x1029998, Func Offset: 0x28
	// Line 965, Address: 0x10299ac, Func Offset: 0x3c
	// Line 967, Address: 0x10299b8, Func Offset: 0x48
	// Line 969, Address: 0x10299c8, Func Offset: 0x58
	// Line 970, Address: 0x10299d8, Func Offset: 0x68
	// Line 971, Address: 0x10299e4, Func Offset: 0x74
	// Line 972, Address: 0x10299ec, Func Offset: 0x7c
	// Line 973, Address: 0x10299f4, Func Offset: 0x84
	// Func End, Address: 0x1029a04, Func Offset: 0x94
}

// 
// Start address: 0x1029a10
void loser_posiset(_anon0* pActwk)
{
	short d1;
	// Line 976, Address: 0x1029a10, Func Offset: 0
	// Line 979, Address: 0x1029a1c, Func Offset: 0xc
	// Line 981, Address: 0x1029a2c, Func Offset: 0x1c
	// Line 982, Address: 0x1029a38, Func Offset: 0x28
	// Line 984, Address: 0x1029a5c, Func Offset: 0x4c
	// Line 987, Address: 0x1029a64, Func Offset: 0x54
	// Func End, Address: 0x1029a74, Func Offset: 0x64
}

// 
// Start address: 0x1029a80
void msnc_low_move(_anon0* pActwk)
{
	short d4;
	// Line 992, Address: 0x1029a80, Func Offset: 0
	// Line 995, Address: 0x1029a90, Func Offset: 0x10
	// Line 996, Address: 0x1029a9c, Func Offset: 0x1c
	// Line 997, Address: 0x1029aa8, Func Offset: 0x28
	// Line 1001, Address: 0x1029abc, Func Offset: 0x3c
	// Line 1002, Address: 0x1029acc, Func Offset: 0x4c
	// Line 1004, Address: 0x1029adc, Func Offset: 0x5c
	// Line 1005, Address: 0x1029ae8, Func Offset: 0x68
	// Line 1008, Address: 0x1029af0, Func Offset: 0x70
	// Line 1009, Address: 0x1029b04, Func Offset: 0x84
	// Line 1010, Address: 0x1029b20, Func Offset: 0xa0
	// Line 1011, Address: 0x1029b30, Func Offset: 0xb0
	// Line 1013, Address: 0x1029b40, Func Offset: 0xc0
	// Line 1014, Address: 0x1029b50, Func Offset: 0xd0
	// Line 1017, Address: 0x1029b58, Func Offset: 0xd8
	// Line 1018, Address: 0x1029b68, Func Offset: 0xe8
	// Line 1022, Address: 0x1029b74, Func Offset: 0xf4
	// Line 1024, Address: 0x1029b88, Func Offset: 0x108
	// Line 1026, Address: 0x1029ba0, Func Offset: 0x120
	// Line 1029, Address: 0x1029ba8, Func Offset: 0x128
	// Line 1030, Address: 0x1029bb8, Func Offset: 0x138
	// Line 1032, Address: 0x1029bcc, Func Offset: 0x14c
	// Line 1033, Address: 0x1029bd4, Func Offset: 0x154
	// Line 1036, Address: 0x1029bdc, Func Offset: 0x15c
	// Line 1038, Address: 0x1029bec, Func Offset: 0x16c
	// Line 1041, Address: 0x1029bf4, Func Offset: 0x174
	// Line 1043, Address: 0x1029c0c, Func Offset: 0x18c
	// Line 1046, Address: 0x1029c14, Func Offset: 0x194
	// Line 1049, Address: 0x1029c24, Func Offset: 0x1a4
	// Line 1051, Address: 0x1029c40, Func Offset: 0x1c0
	// Line 1052, Address: 0x1029c4c, Func Offset: 0x1cc
	// Line 1055, Address: 0x1029c54, Func Offset: 0x1d4
	// Line 1057, Address: 0x1029c60, Func Offset: 0x1e0
	// Func End, Address: 0x1029c74, Func Offset: 0x1f4
}

// 
// Start address: 0x1029c80
void msnc_atc_move(_anon0* pActwk)
{
	// Line 1060, Address: 0x1029c80, Func Offset: 0
	// Line 1061, Address: 0x1029c8c, Func Offset: 0xc
	// Line 1063, Address: 0x1029ca8, Func Offset: 0x28
	// Line 1064, Address: 0x1029cb4, Func Offset: 0x34
	// Line 1065, Address: 0x1029cc0, Func Offset: 0x40
	// Line 1068, Address: 0x1029cc8, Func Offset: 0x48
	// Line 1070, Address: 0x1029ce0, Func Offset: 0x60
	// Line 1071, Address: 0x1029cec, Func Offset: 0x6c
	// Line 1073, Address: 0x1029cf8, Func Offset: 0x78
	// Line 1074, Address: 0x1029d04, Func Offset: 0x84
	// Line 1075, Address: 0x1029d10, Func Offset: 0x90
	// Line 1078, Address: 0x1029d18, Func Offset: 0x98
	// Line 1079, Address: 0x1029d24, Func Offset: 0xa4
	// Line 1081, Address: 0x1029d30, Func Offset: 0xb0
	// Line 1082, Address: 0x1029d3c, Func Offset: 0xbc
	// Line 1084, Address: 0x1029d48, Func Offset: 0xc8
	// Func End, Address: 0x1029d58, Func Offset: 0xd8
}

// 
// Start address: 0x1029d60
void baisoku_mode(_anon0* pActwk)
{
	// Line 1087, Address: 0x1029d60, Func Offset: 0
	// Line 1089, Address: 0x1029d6c, Func Offset: 0xc
	// Line 1091, Address: 0x1029d88, Func Offset: 0x28
	// Line 1092, Address: 0x1029d98, Func Offset: 0x38
	// Line 1093, Address: 0x1029da0, Func Offset: 0x40
	// Line 1094, Address: 0x1029da8, Func Offset: 0x48
	// Line 1097, Address: 0x1029db0, Func Offset: 0x50
	// Line 1100, Address: 0x1029dc0, Func Offset: 0x60
	// Line 1101, Address: 0x1029dcc, Func Offset: 0x6c
	// Func End, Address: 0x1029ddc, Func Offset: 0x7c
}

// 
// Start address: 0x1029de0
void msnc_normal_move(_anon0* pActwk)
{
	short d0;
	// Line 1104, Address: 0x1029de0, Func Offset: 0
	// Line 1107, Address: 0x1029df0, Func Offset: 0x10
	// Line 1108, Address: 0x1029e00, Func Offset: 0x20
	// Line 1110, Address: 0x1029e1c, Func Offset: 0x3c
	// Line 1111, Address: 0x1029e34, Func Offset: 0x54
	// Line 1112, Address: 0x1029e40, Func Offset: 0x60
	// Line 1114, Address: 0x1029e48, Func Offset: 0x68
	// Line 1115, Address: 0x1029e58, Func Offset: 0x78
	// Line 1116, Address: 0x1029e7c, Func Offset: 0x9c
	// Line 1118, Address: 0x1029e90, Func Offset: 0xb0
	// Line 1120, Address: 0x1029ea8, Func Offset: 0xc8
	// Line 1122, Address: 0x1029eb4, Func Offset: 0xd4
	// Line 1124, Address: 0x1029ebc, Func Offset: 0xdc
	// Line 1126, Address: 0x1029ed4, Func Offset: 0xf4
	// Line 1129, Address: 0x1029ee0, Func Offset: 0x100
	// Func End, Address: 0x1029ef4, Func Offset: 0x114
}

// 
// Start address: 0x1029f00
void msnc_hi_set(_anon0* pActwk)
{
	short d0;
	// Line 1132, Address: 0x1029f00, Func Offset: 0
	// Line 1135, Address: 0x1029f10, Func Offset: 0x10
	// Line 1136, Address: 0x1029f3c, Func Offset: 0x3c
	// Line 1137, Address: 0x1029f68, Func Offset: 0x68
	// Line 1139, Address: 0x1029f74, Func Offset: 0x74
	// Line 1140, Address: 0x1029f7c, Func Offset: 0x7c
	// Line 1142, Address: 0x1029fa0, Func Offset: 0xa0
	// Line 1144, Address: 0x1029fac, Func Offset: 0xac
	// Line 1145, Address: 0x1029fb4, Func Offset: 0xb4
	// Line 1146, Address: 0x1029fc0, Func Offset: 0xc0
	// Line 1147, Address: 0x1029fcc, Func Offset: 0xcc
	// Line 1148, Address: 0x1029fd8, Func Offset: 0xd8
	// Func End, Address: 0x1029fec, Func Offset: 0xec
}

// 
// Start address: 0x1029ff0
void msnc_low_set(_anon0* pActwk)
{
	short d0;
	// Line 1151, Address: 0x1029ff0, Func Offset: 0
	// Line 1154, Address: 0x102a000, Func Offset: 0x10
	// Line 1155, Address: 0x102a02c, Func Offset: 0x3c
	// Line 1156, Address: 0x102a058, Func Offset: 0x68
	// Line 1158, Address: 0x102a064, Func Offset: 0x74
	// Line 1159, Address: 0x102a06c, Func Offset: 0x7c
	// Line 1161, Address: 0x102a090, Func Offset: 0xa0
	// Line 1163, Address: 0x102a09c, Func Offset: 0xac
	// Line 1164, Address: 0x102a0a4, Func Offset: 0xb4
	// Line 1165, Address: 0x102a0b0, Func Offset: 0xc0
	// Line 1166, Address: 0x102a0bc, Func Offset: 0xcc
	// Line 1167, Address: 0x102a0c8, Func Offset: 0xd8
	// Func End, Address: 0x102a0dc, Func Offset: 0xec
}

// 
// Start address: 0x102a0e0
void msnc_wk_clr(_anon0* pActwk)
{
	// Line 1170, Address: 0x102a0e0, Func Offset: 0
	// Line 1171, Address: 0x102a0ec, Func Offset: 0xc
	// Line 1172, Address: 0x102a0f4, Func Offset: 0x14
	// Line 1173, Address: 0x102a100, Func Offset: 0x20
	// Func End, Address: 0x102a110, Func Offset: 0x30
}

// 
// Start address: 0x102a110
void msnc_wk_clr2(_anon0* pActwk)
{
	// Line 1176, Address: 0x102a110, Func Offset: 0
	// Line 1177, Address: 0x102a118, Func Offset: 0x8
	// Line 1178, Address: 0x102a120, Func Offset: 0x10
	// Line 1179, Address: 0x102a128, Func Offset: 0x18
	// Func End, Address: 0x102a134, Func Offset: 0x24
}

// 
// Start address: 0x102a140
void msnc_atc(_anon0* pActwk)
{
	short event_tbl_t[2];
	void(*event_tbl_f)(_anon0*)[2];
	// Line 1184, Address: 0x102a140, Func Offset: 0
	// Line 1185, Address: 0x102a14c, Func Offset: 0xc
	// Line 1190, Address: 0x102a168, Func Offset: 0x28
	// Line 1196, Address: 0x102a184, Func Offset: 0x44
	// Line 1197, Address: 0x102a190, Func Offset: 0x50
	// Line 1198, Address: 0x102a19c, Func Offset: 0x5c
	// Line 1199, Address: 0x102a1b0, Func Offset: 0x70
	// Func End, Address: 0x102a1c0, Func Offset: 0x80
}

// 
// Start address: 0x102a1c0
void msnc_act_ini(_anon0* pActwk)
{
	// Line 1202, Address: 0x102a1c0, Func Offset: 0
	// Line 1203, Address: 0x102a1cc, Func Offset: 0xc
	// Line 1204, Address: 0x102a1d8, Func Offset: 0x18
	// Line 1205, Address: 0x102a238, Func Offset: 0x78
	// Line 1206, Address: 0x102a244, Func Offset: 0x84
	// Func End, Address: 0x102a254, Func Offset: 0x94
}

// 
// Start address: 0x102a260
void msnc_act_next(_anon0* pActwk)
{
	// Line 1209, Address: 0x102a260, Func Offset: 0
	// Line 1210, Address: 0x102a26c, Func Offset: 0xc
	// Line 1211, Address: 0x102a280, Func Offset: 0x20
	// Line 1212, Address: 0x102a29c, Func Offset: 0x3c
	// Line 1214, Address: 0x102a2b4, Func Offset: 0x54
	// Line 1216, Address: 0x102a2c4, Func Offset: 0x64
	// Line 1217, Address: 0x102a2d0, Func Offset: 0x70
	// Line 1218, Address: 0x102a2dc, Func Offset: 0x7c
	// Line 1221, Address: 0x102a2e4, Func Offset: 0x84
	// Line 1223, Address: 0x102a2f4, Func Offset: 0x94
	// Line 1224, Address: 0x102a300, Func Offset: 0xa0
	// Line 1226, Address: 0x102a30c, Func Offset: 0xac
	// Func End, Address: 0x102a31c, Func Offset: 0xbc
}

// 
// Start address: 0x102a320
void msnc_f_atc(_anon0* pActwk)
{
	short event_tbl_t[4];
	void(*event_tbl_f)(_anon0*)[4];
	// Line 1231, Address: 0x102a320, Func Offset: 0
	// Line 1232, Address: 0x102a32c, Func Offset: 0xc
	// Line 1239, Address: 0x102a358, Func Offset: 0x38
	// Line 1247, Address: 0x102a384, Func Offset: 0x64
	// Line 1248, Address: 0x102a390, Func Offset: 0x70
	// Line 1249, Address: 0x102a39c, Func Offset: 0x7c
	// Line 1250, Address: 0x102a3b0, Func Offset: 0x90
	// Func End, Address: 0x102a3c0, Func Offset: 0xa0
}

// 
// Start address: 0x102a3c0
void msnc_f_atc_tobi(_anon0* pActwk)
{
	// Line 1253, Address: 0x102a3c0, Func Offset: 0
	// Line 1254, Address: 0x102a3cc, Func Offset: 0xc
	// Line 1255, Address: 0x102a42c, Func Offset: 0x6c
	// Line 1257, Address: 0x102a438, Func Offset: 0x78
	// Line 1258, Address: 0x102a444, Func Offset: 0x84
	// Line 1259, Address: 0x102a450, Func Offset: 0x90
	// Line 1260, Address: 0x102a45c, Func Offset: 0x9c
	// Func End, Address: 0x102a46c, Func Offset: 0xac
}

// 
// Start address: 0x102a470
void msnc_f_atc_atack(_anon0* pActwk)
{
	// Line 1263, Address: 0x102a470, Func Offset: 0
	// Line 1264, Address: 0x102a478, Func Offset: 0x8
	// Line 1265, Address: 0x102a484, Func Offset: 0x14
	// Func End, Address: 0x102a490, Func Offset: 0x20
}

// 
// Start address: 0x102a490
void msnc_f_atc_coli(_anon0* pActwk)
{
	// Line 1268, Address: 0x102a490, Func Offset: 0
	// Line 1269, Address: 0x102a498, Func Offset: 0x8
	// Line 1270, Address: 0x102a4a4, Func Offset: 0x14
	// Line 1271, Address: 0x102a4b0, Func Offset: 0x20
	// Func End, Address: 0x102a4bc, Func Offset: 0x2c
}

// 
// Start address: 0x102a4c0
void msnc_f_atc_end(_anon0* pActwk)
{
	short d0;
	// Line 1274, Address: 0x102a4c0, Func Offset: 0
	// Line 1277, Address: 0x102a4d0, Func Offset: 0x10
	// Line 1278, Address: 0x102a4d8, Func Offset: 0x18
	// Line 1279, Address: 0x102a4e0, Func Offset: 0x20
	// Line 1280, Address: 0x102a4f4, Func Offset: 0x34
	// Line 1281, Address: 0x102a52c, Func Offset: 0x6c
	// Line 1282, Address: 0x102a538, Func Offset: 0x78
	// Func End, Address: 0x102a54c, Func Offset: 0x8c
}

// 
// Start address: 0x102a550
void msnc_b_atc(_anon0* pActwk)
{
	short event_tbl_t[3];
	void(*event_tbl_f)(_anon0*)[3];
	// Line 1287, Address: 0x102a550, Func Offset: 0
	// Line 1288, Address: 0x102a55c, Func Offset: 0xc
	// Line 1294, Address: 0x102a580, Func Offset: 0x30
	// Line 1301, Address: 0x102a5a4, Func Offset: 0x54
	// Line 1302, Address: 0x102a5b0, Func Offset: 0x60
	// Line 1303, Address: 0x102a5bc, Func Offset: 0x6c
	// Line 1304, Address: 0x102a5d0, Func Offset: 0x80
	// Func End, Address: 0x102a5e0, Func Offset: 0x90
}

// 
// Start address: 0x102a5e0
void msnc_b_atc_atack(_anon0* pActwk)
{
	// Line 1307, Address: 0x102a5e0, Func Offset: 0
	// Line 1308, Address: 0x102a5ec, Func Offset: 0xc
	// Line 1309, Address: 0x102a5f8, Func Offset: 0x18
	// Line 1310, Address: 0x102a604, Func Offset: 0x24
	// Line 1311, Address: 0x102a610, Func Offset: 0x30
	// Line 1313, Address: 0x102a61c, Func Offset: 0x3c
	// Line 1314, Address: 0x102a628, Func Offset: 0x48
	// Func End, Address: 0x102a638, Func Offset: 0x58
}

// 
// Start address: 0x102a640
void msnc_b_atc_coli(_anon0* pActwk)
{
	// Line 1317, Address: 0x102a640, Func Offset: 0
	// Line 1318, Address: 0x102a648, Func Offset: 0x8
	// Line 1319, Address: 0x102a654, Func Offset: 0x14
	// Line 1320, Address: 0x102a660, Func Offset: 0x20
	// Func End, Address: 0x102a66c, Func Offset: 0x2c
}

// 
// Start address: 0x102a670
void msnc_b_atc_kill(_anon0* pActwk)
{
	// Line 1323, Address: 0x102a670, Func Offset: 0
	// Line 1324, Address: 0x102a67c, Func Offset: 0xc
	// Line 1325, Address: 0x102a684, Func Offset: 0x14
	// Line 1326, Address: 0x102a68c, Func Offset: 0x1c
	// Line 1327, Address: 0x102a698, Func Offset: 0x28
	// Func End, Address: 0x102a6a8, Func Offset: 0x38
}

// 
// Start address: 0x102a6b0
void msnc_ele(_anon0* pActwk)
{
	void(*act_tbl)(_anon0*)[2];
	// Line 1330, Address: 0x102a6b0, Func Offset: 0
	// Line 1331, Address: 0x102a6bc, Func Offset: 0xc
	// Line 1337, Address: 0x102a6d8, Func Offset: 0x28
	// Line 1338, Address: 0x102a708, Func Offset: 0x58
	// Line 1339, Address: 0x102a744, Func Offset: 0x94
	// Func End, Address: 0x102a754, Func Offset: 0xa4
}

// 
// Start address: 0x102a760
void msnc_ele_ini(_anon0* pActwk)
{
	// Line 1342, Address: 0x102a760, Func Offset: 0
	// Line 1343, Address: 0x102a76c, Func Offset: 0xc
	// Line 1344, Address: 0x102a778, Func Offset: 0x18
	// Line 1345, Address: 0x102a784, Func Offset: 0x24
	// Line 1346, Address: 0x102a790, Func Offset: 0x30
	// Line 1347, Address: 0x102a79c, Func Offset: 0x3c
	// Line 1348, Address: 0x102a7a8, Func Offset: 0x48
	// Line 1349, Address: 0x102a7b8, Func Offset: 0x58
	// Line 1351, Address: 0x102a7c8, Func Offset: 0x68
	// Line 1352, Address: 0x102a7d4, Func Offset: 0x74
	// Func End, Address: 0x102a7e4, Func Offset: 0x84
}

// 
// Start address: 0x102a7f0
void msnc_ele_01(_anon0* pActwk)
{
	// Line 1355, Address: 0x102a7f0, Func Offset: 0
	// Line 1356, Address: 0x102a7fc, Func Offset: 0xc
	// Line 1358, Address: 0x102a81c, Func Offset: 0x2c
	// Line 1359, Address: 0x102a828, Func Offset: 0x38
	// Line 1361, Address: 0x102a830, Func Offset: 0x40
	// Line 1362, Address: 0x102a844, Func Offset: 0x54
	// Line 1364, Address: 0x102a858, Func Offset: 0x68
	// Line 1365, Address: 0x102a868, Func Offset: 0x78
	// Line 1367, Address: 0x102a880, Func Offset: 0x90
	// Line 1368, Address: 0x102a88c, Func Offset: 0x9c
	// Line 1370, Address: 0x102a894, Func Offset: 0xa4
	// Line 1371, Address: 0x102a89c, Func Offset: 0xac
	// Line 1372, Address: 0x102a8ac, Func Offset: 0xbc
	// Line 1374, Address: 0x102a8c4, Func Offset: 0xd4
	// Line 1376, Address: 0x102a8cc, Func Offset: 0xdc
	// Func End, Address: 0x102a8dc, Func Offset: 0xec
}

// 
// Start address: 0x102a8e0
void msnc_win(_anon0* pActwk)
{
	void(*jmp)(_anon0*)[4];
	// Line 1381, Address: 0x102a8e0, Func Offset: 0
	// Line 1382, Address: 0x102a8ec, Func Offset: 0xc
	// Line 1390, Address: 0x102a918, Func Offset: 0x38
	// Line 1392, Address: 0x102a928, Func Offset: 0x48
	// Line 1393, Address: 0x102a94c, Func Offset: 0x6c
	// Func End, Address: 0x102a95c, Func Offset: 0x7c
}

// 
// Start address: 0x102a960
void msnc_win_ini(_anon0* pActwk)
{
	// Line 1396, Address: 0x102a960, Func Offset: 0
	// Line 1397, Address: 0x102a968, Func Offset: 0x8
	// Line 1398, Address: 0x102a974, Func Offset: 0x14
	// Line 1399, Address: 0x102a980, Func Offset: 0x20
	// Line 1400, Address: 0x102a98c, Func Offset: 0x2c
	// Line 1401, Address: 0x102a99c, Func Offset: 0x3c
	// Func End, Address: 0x102a9a8, Func Offset: 0x48
}

// 
// Start address: 0x102a9b0
void msnc_win_wait(_anon0* pActwk)
{
	// Line 1404, Address: 0x102a9b0, Func Offset: 0
	// Line 1405, Address: 0x102a9b8, Func Offset: 0x8
	// Line 1407, Address: 0x102a9d8, Func Offset: 0x28
	// Line 1408, Address: 0x102a9e8, Func Offset: 0x38
	// Line 1410, Address: 0x102a9f4, Func Offset: 0x44
	// Func End, Address: 0x102aa00, Func Offset: 0x50
}

// 
// Start address: 0x102aa00
void msnc_win_timer(_anon0* pActwk)
{
	// Line 1413, Address: 0x102aa00, Func Offset: 0
	// Line 1414, Address: 0x102aa0c, Func Offset: 0xc
	// Line 1415, Address: 0x102aa18, Func Offset: 0x18
	// Func End, Address: 0x102aa28, Func Offset: 0x28
}

// 
// Start address: 0x102aa30
void msnc_win_chichi(_anon0* pActwk)
{
	// Line 1418, Address: 0x102aa30, Func Offset: 0
	// Line 1419, Address: 0x102aa38, Func Offset: 0x8
	// Line 1420, Address: 0x102aa44, Func Offset: 0x14
	// Func End, Address: 0x102aa50, Func Offset: 0x20
}

// 
// Start address: 0x102aa50
void msnc_lose(_anon0* pActwk)
{
	// Line 1425, Address: 0x102aa50, Func Offset: 0
	// Line 1426, Address: 0x102aa5c, Func Offset: 0xc
	// Line 1428, Address: 0x102aa70, Func Offset: 0x20
	// Line 1430, Address: 0x102aa7c, Func Offset: 0x2c
	// Line 1431, Address: 0x102aa88, Func Offset: 0x38
	// Line 1432, Address: 0x102aa94, Func Offset: 0x44
	// Line 1433, Address: 0x102aa9c, Func Offset: 0x4c
	// Line 1434, Address: 0x102aaa4, Func Offset: 0x54
	// Line 1435, Address: 0x102aab0, Func Offset: 0x60
	// Line 1436, Address: 0x102aabc, Func Offset: 0x6c
	// Line 1438, Address: 0x102aac8, Func Offset: 0x78
	// Line 1440, Address: 0x102aae4, Func Offset: 0x94
	// Line 1441, Address: 0x102aaf0, Func Offset: 0xa0
	// Line 1442, Address: 0x102aafc, Func Offset: 0xac
	// Line 1444, Address: 0x102ab04, Func Offset: 0xb4
	// Line 1445, Address: 0x102ab10, Func Offset: 0xc0
	// Line 1446, Address: 0x102ab20, Func Offset: 0xd0
	// Func End, Address: 0x102ab30, Func Offset: 0xe0
}

// 
// Start address: 0x102ab30
void egg7(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[5];
	// Line 1451, Address: 0x102ab30, Func Offset: 0
	// Line 1452, Address: 0x102ab3c, Func Offset: 0xc
	// Line 1461, Address: 0x102ab68, Func Offset: 0x38
	// Line 1462, Address: 0x102ab78, Func Offset: 0x48
	// Line 1463, Address: 0x102abb4, Func Offset: 0x84
	// Line 1465, Address: 0x102abc4, Func Offset: 0x94
	// Line 1466, Address: 0x102abcc, Func Offset: 0x9c
	// Line 1468, Address: 0x102abd4, Func Offset: 0xa4
	// Line 1469, Address: 0x102abe0, Func Offset: 0xb0
	// Line 1470, Address: 0x102abec, Func Offset: 0xbc
	// Line 1471, Address: 0x102ac00, Func Offset: 0xd0
	// Line 1472, Address: 0x102ac0c, Func Offset: 0xdc
	// Func End, Address: 0x102ac1c, Func Offset: 0xec
}

// 
// Start address: 0x102ac20
void egg7_ini(_anon0* pActwk)
{
	// Line 1477, Address: 0x102ac20, Func Offset: 0
	// Line 1478, Address: 0x102ac2c, Func Offset: 0xc
	// Line 1479, Address: 0x102ac38, Func Offset: 0x18
	// Line 1480, Address: 0x102ac44, Func Offset: 0x24
	// Line 1481, Address: 0x102ac50, Func Offset: 0x30
	// Line 1482, Address: 0x102ac5c, Func Offset: 0x3c
	// Line 1483, Address: 0x102ac68, Func Offset: 0x48
	// Line 1485, Address: 0x102ac78, Func Offset: 0x58
	// Line 1486, Address: 0x102ac8c, Func Offset: 0x6c
	// Line 1488, Address: 0x102ac98, Func Offset: 0x78
	// Line 1489, Address: 0x102aca4, Func Offset: 0x84
	// Line 1490, Address: 0x102acb0, Func Offset: 0x90
	// Line 1491, Address: 0x102acbc, Func Offset: 0x9c
	// Line 1493, Address: 0x102accc, Func Offset: 0xac
	// Line 1494, Address: 0x102acd8, Func Offset: 0xb8
	// Line 1495, Address: 0x102ace4, Func Offset: 0xc4
	// Func End, Address: 0x102acf4, Func Offset: 0xd4
}

// 
// Start address: 0x102ad00
void egg7_demo1(_anon0* pActwk)
{
	void(*demo1_jmp)(_anon0*)[6];
	// Line 1500, Address: 0x102ad00, Func Offset: 0
	// Line 1501, Address: 0x102ad0c, Func Offset: 0xc
	// Line 1511, Address: 0x102ad40, Func Offset: 0x40
	// Line 1513, Address: 0x102ad4c, Func Offset: 0x4c
	// Line 1514, Address: 0x102ad70, Func Offset: 0x70
	// Func End, Address: 0x102ad80, Func Offset: 0x80
}

// 
// Start address: 0x102ad80
void snc_wait(_anon0* pActwk)
{
	short d0;
	// Line 1517, Address: 0x102ad80, Func Offset: 0
	// Line 1520, Address: 0x102ad90, Func Offset: 0x10
	// Line 1521, Address: 0x102ada0, Func Offset: 0x20
	// Line 1522, Address: 0x102adb0, Func Offset: 0x30
	// Line 1524, Address: 0x102add0, Func Offset: 0x50
	// Line 1525, Address: 0x102addc, Func Offset: 0x5c
	// Line 1526, Address: 0x102ade4, Func Offset: 0x64
	// Line 1527, Address: 0x102adf4, Func Offset: 0x74
	// Line 1529, Address: 0x102ae04, Func Offset: 0x84
	// Line 1530, Address: 0x102ae10, Func Offset: 0x90
	// Line 1531, Address: 0x102ae18, Func Offset: 0x98
	// Line 1533, Address: 0x102ae20, Func Offset: 0xa0
	// Line 1534, Address: 0x102ae2c, Func Offset: 0xac
	// Line 1537, Address: 0x102ae34, Func Offset: 0xb4
	// Line 1538, Address: 0x102ae48, Func Offset: 0xc8
	// Line 1540, Address: 0x102ae54, Func Offset: 0xd4
	// Line 1541, Address: 0x102ae78, Func Offset: 0xf8
	// Line 1543, Address: 0x102ae8c, Func Offset: 0x10c
	// Line 1544, Address: 0x102ae94, Func Offset: 0x114
	// Line 1546, Address: 0x102ae9c, Func Offset: 0x11c
	// Func End, Address: 0x102aeb0, Func Offset: 0x130
}

// 
// Start address: 0x102aeb0
void r_l(_anon0* pActwk)
{
	short d0;
	// Line 1549, Address: 0x102aeb0, Func Offset: 0
	// Line 1552, Address: 0x102aec0, Func Offset: 0x10
	// Line 1553, Address: 0x102aecc, Func Offset: 0x1c
	// Line 1554, Address: 0x102aed8, Func Offset: 0x28
	// Line 1555, Address: 0x102aefc, Func Offset: 0x4c
	// Line 1556, Address: 0x102af04, Func Offset: 0x54
	// Line 1557, Address: 0x102af10, Func Offset: 0x60
	// Line 1558, Address: 0x102af18, Func Offset: 0x68
	// Line 1559, Address: 0x102af28, Func Offset: 0x78
	// Line 1560, Address: 0x102af38, Func Offset: 0x88
	// Line 1561, Address: 0x102af44, Func Offset: 0x94
	// Func End, Address: 0x102af58, Func Offset: 0xa8
}

// 
// Start address: 0x102af60
void l_r(_anon0* pActwk)
{
	short d0;
	// Line 1564, Address: 0x102af60, Func Offset: 0
	// Line 1567, Address: 0x102af70, Func Offset: 0x10
	// Line 1568, Address: 0x102af7c, Func Offset: 0x1c
	// Line 1569, Address: 0x102af88, Func Offset: 0x28
	// Line 1570, Address: 0x102afac, Func Offset: 0x4c
	// Line 1571, Address: 0x102afb4, Func Offset: 0x54
	// Line 1572, Address: 0x102afc0, Func Offset: 0x60
	// Line 1573, Address: 0x102afc8, Func Offset: 0x68
	// Line 1574, Address: 0x102afd8, Func Offset: 0x78
	// Line 1575, Address: 0x102afe8, Func Offset: 0x88
	// Line 1576, Address: 0x102aff4, Func Offset: 0x94
	// Func End, Address: 0x102b008, Func Offset: 0xa8
}

// 
// Start address: 0x102b010
void r_l2(_anon0* pActwk)
{
	short d0;
	// Line 1579, Address: 0x102b010, Func Offset: 0
	// Line 1582, Address: 0x102b020, Func Offset: 0x10
	// Line 1583, Address: 0x102b02c, Func Offset: 0x1c
	// Line 1584, Address: 0x102b038, Func Offset: 0x28
	// Line 1585, Address: 0x102b05c, Func Offset: 0x4c
	// Line 1586, Address: 0x102b064, Func Offset: 0x54
	// Line 1587, Address: 0x102b06c, Func Offset: 0x5c
	// Line 1588, Address: 0x102b074, Func Offset: 0x64
	// Line 1589, Address: 0x102b07c, Func Offset: 0x6c
	// Line 1590, Address: 0x102b084, Func Offset: 0x74
	// Line 1591, Address: 0x102b094, Func Offset: 0x84
	// Line 1592, Address: 0x102b0a0, Func Offset: 0x90
	// Func End, Address: 0x102b0b4, Func Offset: 0xa4
}

// 
// Start address: 0x102b0c0
void egg7_demo2(_anon0* pActwk)
{
	short event_tbl_t[12];
	void(*event_tbl_f)(_anon0*)[12];
	short d0;
	// Line 1597, Address: 0x102b0c0, Func Offset: 0
	// Line 1598, Address: 0x102b0d0, Func Offset: 0x10
	// Line 1617, Address: 0x102b104, Func Offset: 0x44
	// Line 1638, Address: 0x102b138, Func Offset: 0x78
	// Line 1639, Address: 0x102b144, Func Offset: 0x84
	// Line 1640, Address: 0x102b150, Func Offset: 0x90
	// Line 1642, Address: 0x102b174, Func Offset: 0xb4
	// Line 1644, Address: 0x102b17c, Func Offset: 0xbc
	// Line 1646, Address: 0x102b188, Func Offset: 0xc8
	// Line 1647, Address: 0x102b19c, Func Offset: 0xdc
	// Func End, Address: 0x102b1b0, Func Offset: 0xf0
}

// 
// Start address: 0x102b1b0
void msnc_turn(_anon0* pActwk)
{
	_anon0* a2;
	// Line 1650, Address: 0x102b1b0, Func Offset: 0
	// Line 1653, Address: 0x102b1bc, Func Offset: 0xc
	// Line 1654, Address: 0x102b1e4, Func Offset: 0x34
	// Line 1655, Address: 0x102b1ec, Func Offset: 0x3c
	// Line 1656, Address: 0x102b1f0, Func Offset: 0x40
	// Line 1657, Address: 0x102b1f4, Func Offset: 0x44
	// Func End, Address: 0x102b204, Func Offset: 0x54
}

// 
// Start address: 0x102b210
void beam_on(_anon0* pActwk)
{
	// Line 1660, Address: 0x102b210, Func Offset: 0
	// Line 1661, Address: 0x102b218, Func Offset: 0x8
	// Line 1662, Address: 0x102b228, Func Offset: 0x18
	// Line 1663, Address: 0x102b238, Func Offset: 0x28
	// Func End, Address: 0x102b244, Func Offset: 0x34
}

// 
// Start address: 0x102b250
void beam_on2(_anon0* pActwk)
{
	// Line 1666, Address: 0x102b250, Func Offset: 0
	// Line 1667, Address: 0x102b258, Func Offset: 0x8
	// Line 1668, Address: 0x102b268, Func Offset: 0x18
	// Line 1669, Address: 0x102b278, Func Offset: 0x28
	// Func End, Address: 0x102b284, Func Offset: 0x34
}

// 
// Start address: 0x102b290
void beam_off(_anon0* pActwk)
{
	// Line 1672, Address: 0x102b290, Func Offset: 0
	// Line 1673, Address: 0x102b298, Func Offset: 0x8
	// Line 1674, Address: 0x102b2a8, Func Offset: 0x18
	// Line 1675, Address: 0x102b2b8, Func Offset: 0x28
	// Func End, Address: 0x102b2c4, Func Offset: 0x34
}

// 
// Start address: 0x102b2d0
void move_start(_anon0* pActwk)
{
	// Line 1678, Address: 0x102b2d0, Func Offset: 0
	// Line 1679, Address: 0x102b2d8, Func Offset: 0x8
	// Line 1680, Address: 0x102b2e8, Func Offset: 0x18
	// Line 1681, Address: 0x102b2f4, Func Offset: 0x24
	// Line 1682, Address: 0x102b2fc, Func Offset: 0x2c
	// Func End, Address: 0x102b308, Func Offset: 0x38
}

// 
// Start address: 0x102b310
void beam_next(_anon0* pActwk)
{
	// Line 1685, Address: 0x102b310, Func Offset: 0
	// Line 1686, Address: 0x102b31c, Func Offset: 0xc
	// Line 1688, Address: 0x102b328, Func Offset: 0x18
	// Line 1689, Address: 0x102b334, Func Offset: 0x24
	// Line 1691, Address: 0x102b344, Func Offset: 0x34
	// Line 1692, Address: 0x102b350, Func Offset: 0x40
	// Line 1693, Address: 0x102b35c, Func Offset: 0x4c
	// Line 1694, Address: 0x102b368, Func Offset: 0x58
	// Line 1695, Address: 0x102b370, Func Offset: 0x60
	// Line 1697, Address: 0x102b378, Func Offset: 0x68
	// Line 1698, Address: 0x102b388, Func Offset: 0x78
	// Line 1699, Address: 0x102b390, Func Offset: 0x80
	// Line 1700, Address: 0x102b398, Func Offset: 0x88
	// Func End, Address: 0x102b3a8, Func Offset: 0x98
}

// 
// Start address: 0x102b3b0
void egg7_move(_anon0* pActwk)
{
	short d0;
	// Line 1705, Address: 0x102b3b0, Func Offset: 0
	// Line 1708, Address: 0x102b3c0, Func Offset: 0x10
	// Line 1709, Address: 0x102b3cc, Func Offset: 0x1c
	// Line 1711, Address: 0x102b3f0, Func Offset: 0x40
	// Line 1712, Address: 0x102b3fc, Func Offset: 0x4c
	// Line 1713, Address: 0x102b408, Func Offset: 0x58
	// Line 1714, Address: 0x102b414, Func Offset: 0x64
	// Line 1717, Address: 0x102b41c, Func Offset: 0x6c
	// Line 1718, Address: 0x102b424, Func Offset: 0x74
	// Line 1719, Address: 0x102b430, Func Offset: 0x80
	// Line 1720, Address: 0x102b438, Func Offset: 0x88
	// Line 1721, Address: 0x102b440, Func Offset: 0x90
	// Line 1723, Address: 0x102b448, Func Offset: 0x98
	// Func End, Address: 0x102b45c, Func Offset: 0xac
}

// 
// Start address: 0x102b460
void egg7_goal(_anon0* pActwk)
{
	void(*jmp)(_anon0*)[10];
	// Line 1728, Address: 0x102b460, Func Offset: 0
	// Line 1729, Address: 0x102b46c, Func Offset: 0xc
	// Line 1743, Address: 0x102b4a0, Func Offset: 0x40
	// Line 1744, Address: 0x102b4c4, Func Offset: 0x64
	// Func End, Address: 0x102b4d4, Func Offset: 0x74
}

// 
// Start address: 0x102b4e0
void egg7_goal_ini(_anon0* pActwk)
{
	unsigned char d0;
	// Line 1747, Address: 0x102b4e0, Func Offset: 0
	// Line 1750, Address: 0x102b4f0, Func Offset: 0x10
	// Line 1751, Address: 0x102b4fc, Func Offset: 0x1c
	// Line 1752, Address: 0x102b504, Func Offset: 0x24
	// Line 1754, Address: 0x102b514, Func Offset: 0x34
	// Line 1755, Address: 0x102b520, Func Offset: 0x40
	// Line 1757, Address: 0x102b528, Func Offset: 0x48
	// Line 1759, Address: 0x102b538, Func Offset: 0x58
	// Line 1762, Address: 0x102b544, Func Offset: 0x64
	// Func End, Address: 0x102b558, Func Offset: 0x78
}

// 
// Start address: 0x102b560
void egg7_goal_msnc_win(_anon0* pActwk)
{
	// Line 1765, Address: 0x102b560, Func Offset: 0
	// Line 1766, Address: 0x102b568, Func Offset: 0x8
	// Line 1767, Address: 0x102b574, Func Offset: 0x14
	// Func End, Address: 0x102b580, Func Offset: 0x20
}

// 
// Start address: 0x102b580
void egg7_goal_snc_win(_anon0* pActwk)
{
	// Line 1770, Address: 0x102b580, Func Offset: 0
	// Line 1771, Address: 0x102b588, Func Offset: 0x8
	// Line 1772, Address: 0x102b598, Func Offset: 0x18
	// Line 1773, Address: 0x102b5a8, Func Offset: 0x28
	// Line 1775, Address: 0x102b5b8, Func Offset: 0x38
	// Line 1776, Address: 0x102b5c4, Func Offset: 0x44
	// Line 1777, Address: 0x102b5d0, Func Offset: 0x50
	// Func End, Address: 0x102b5dc, Func Offset: 0x5c
}

// 
// Start address: 0x102b5e0
void egg7_goal0(_anon0* pActwk)
{
	short d0;
	// Line 1780, Address: 0x102b5e0, Func Offset: 0
	// Line 1783, Address: 0x102b5f0, Func Offset: 0x10
	// Line 1784, Address: 0x102b600, Func Offset: 0x20
	// Line 1786, Address: 0x102b61c, Func Offset: 0x3c
	// Line 1787, Address: 0x102b62c, Func Offset: 0x4c
	// Line 1788, Address: 0x102b650, Func Offset: 0x70
	// Line 1790, Address: 0x102b660, Func Offset: 0x80
	// Line 1792, Address: 0x102b670, Func Offset: 0x90
	// Line 1795, Address: 0x102b678, Func Offset: 0x98
	// Line 1796, Address: 0x102b688, Func Offset: 0xa8
	// Line 1797, Address: 0x102b698, Func Offset: 0xb8
	// Line 1798, Address: 0x102b6a4, Func Offset: 0xc4
	// Line 1799, Address: 0x102b6ac, Func Offset: 0xcc
	// Line 1801, Address: 0x102b6b8, Func Offset: 0xd8
	// Line 1803, Address: 0x102b6c0, Func Offset: 0xe0
	// Func End, Address: 0x102b6d4, Func Offset: 0xf4
}

// 
// Start address: 0x102b6e0
void egg7_goal1(_anon0* pActwk)
{
	// Line 1806, Address: 0x102b6e0, Func Offset: 0
	// Line 1807, Address: 0x102b6ec, Func Offset: 0xc
	// Line 1808, Address: 0x102b6f8, Func Offset: 0x18
	// Line 1810, Address: 0x102b714, Func Offset: 0x34
	// Line 1811, Address: 0x102b720, Func Offset: 0x40
	// Line 1812, Address: 0x102b728, Func Offset: 0x48
	// Line 1813, Address: 0x102b738, Func Offset: 0x58
	// Line 1815, Address: 0x102b744, Func Offset: 0x64
	// Func End, Address: 0x102b754, Func Offset: 0x74
}

// 
// Start address: 0x102b760
void egg7_goal2(_anon0* pActwk)
{
	// Line 1818, Address: 0x102b760, Func Offset: 0
	// Line 1819, Address: 0x102b76c, Func Offset: 0xc
	// Line 1820, Address: 0x102b778, Func Offset: 0x18
	// Line 1822, Address: 0x102b794, Func Offset: 0x34
	// Line 1823, Address: 0x102b7a4, Func Offset: 0x44
	// Line 1825, Address: 0x102b7b0, Func Offset: 0x50
	// Func End, Address: 0x102b7c0, Func Offset: 0x60
}

// 
// Start address: 0x102b7c0
void egg7_goal3(_anon0* pActwk)
{
	short d0;
	// Line 1828, Address: 0x102b7c0, Func Offset: 0
	// Line 1831, Address: 0x102b7d0, Func Offset: 0x10
	// Line 1832, Address: 0x102b7dc, Func Offset: 0x1c
	// Line 1834, Address: 0x102b7ec, Func Offset: 0x2c
	// Line 1836, Address: 0x102b7f8, Func Offset: 0x38
	// Line 1838, Address: 0x102b804, Func Offset: 0x44
	// Line 1839, Address: 0x102b810, Func Offset: 0x50
	// Line 1841, Address: 0x102b81c, Func Offset: 0x5c
	// Line 1842, Address: 0x102b824, Func Offset: 0x64
	// Line 1844, Address: 0x102b82c, Func Offset: 0x6c
	// Line 1845, Address: 0x102b838, Func Offset: 0x78
	// Line 1846, Address: 0x102b844, Func Offset: 0x84
	// Func End, Address: 0x102b858, Func Offset: 0x98
}

// 
// Start address: 0x102b860
void emie7clrset()
{
	short i;
	tagPALETTEENTRY* a3;
	tagPALETTEENTRY* a4;
	tagPALETTEENTRY* a5;
	tagPALETTEENTRY emie7_clr[16];
	// Line 1849, Address: 0x102b860, Func Offset: 0
	// Line 1853, Address: 0x102b874, Func Offset: 0x14
	// Line 1861, Address: 0x102b8a8, Func Offset: 0x48
	// Line 1862, Address: 0x102b8ac, Func Offset: 0x4c
	// Line 1863, Address: 0x102b8b8, Func Offset: 0x58
	// Line 1864, Address: 0x102b8c4, Func Offset: 0x64
	// Line 1866, Address: 0x102b8d0, Func Offset: 0x70
	// Line 1867, Address: 0x102b910, Func Offset: 0xb0
	// Line 1868, Address: 0x102b914, Func Offset: 0xb4
	// Line 1869, Address: 0x102b918, Func Offset: 0xb8
	// Line 1870, Address: 0x102b91c, Func Offset: 0xbc
	// Line 1871, Address: 0x102b93c, Func Offset: 0xdc
	// Func End, Address: 0x102b958, Func Offset: 0xf8
}

// 
// Start address: 0x102b960
void egg7_spdset(_anon0* pActwk)
{
	short d0;
	short d1;
	// Line 1874, Address: 0x102b960, Func Offset: 0
	// Line 1877, Address: 0x102b974, Func Offset: 0x14
	// Line 1878, Address: 0x102b990, Func Offset: 0x30
	// Line 1879, Address: 0x102b9a0, Func Offset: 0x40
	// Line 1880, Address: 0x102b9b4, Func Offset: 0x54
	// Line 1881, Address: 0x102b9c0, Func Offset: 0x60
	// Line 1884, Address: 0x102b9d0, Func Offset: 0x70
	// Line 1885, Address: 0x102b9e0, Func Offset: 0x80
	// Line 1886, Address: 0x102b9f0, Func Offset: 0x90
	// Line 1888, Address: 0x102ba00, Func Offset: 0xa0
	// Line 1889, Address: 0x102ba10, Func Offset: 0xb0
	// Line 1892, Address: 0x102ba18, Func Offset: 0xb8
	// Line 1894, Address: 0x102ba28, Func Offset: 0xc8
	// Line 1897, Address: 0x102ba30, Func Offset: 0xd0
	// Line 1899, Address: 0x102ba38, Func Offset: 0xd8
	// Line 1901, Address: 0x102ba48, Func Offset: 0xe8
	// Line 1903, Address: 0x102ba60, Func Offset: 0x100
	// Line 1904, Address: 0x102ba70, Func Offset: 0x110
	// Line 1907, Address: 0x102ba7c, Func Offset: 0x11c
	// Line 1908, Address: 0x102ba88, Func Offset: 0x128
	// Line 1909, Address: 0x102ba9c, Func Offset: 0x13c
	// Line 1911, Address: 0x102bab8, Func Offset: 0x158
	// Line 1913, Address: 0x102bac0, Func Offset: 0x160
	// Line 1914, Address: 0x102bac8, Func Offset: 0x168
	// Line 1917, Address: 0x102bad0, Func Offset: 0x170
	// Line 1920, Address: 0x102bae0, Func Offset: 0x180
	// Func End, Address: 0x102baf8, Func Offset: 0x198
}

// 
// Start address: 0x102bb00
void egg7_maxspdset(_anon0* pActwk, short d1)
{
	short d0;
	short spd_tbl[8];
	// Line 1923, Address: 0x102bb00, Func Offset: 0
	// Line 1926, Address: 0x102bb10, Func Offset: 0x10
	// Line 1934, Address: 0x102bb44, Func Offset: 0x44
	// Line 1936, Address: 0x102bb5c, Func Offset: 0x5c
	// Line 1938, Address: 0x102bb7c, Func Offset: 0x7c
	// Line 1939, Address: 0x102bb88, Func Offset: 0x88
	// Line 1940, Address: 0x102bb90, Func Offset: 0x90
	// Line 1942, Address: 0x102bbb0, Func Offset: 0xb0
	// Line 1943, Address: 0x102bbbc, Func Offset: 0xbc
	// Line 1946, Address: 0x102bbc4, Func Offset: 0xc4
	// Line 1948, Address: 0x102bbc8, Func Offset: 0xc8
	// Line 1951, Address: 0x102bbd0, Func Offset: 0xd0
	// Line 1954, Address: 0x102bbdc, Func Offset: 0xdc
	// Line 1955, Address: 0x102bc10, Func Offset: 0x110
	// Line 1956, Address: 0x102bc48, Func Offset: 0x148
	// Func End, Address: 0x102bc58, Func Offset: 0x158
}

// 
// Start address: 0x102bc60
void egg_beamchk(_anon0* pActwk)
{
	_anon0* a0;
	short d0;
	// Line 1961, Address: 0x102bc60, Func Offset: 0
	// Line 1965, Address: 0x102bc74, Func Offset: 0x14
	// Line 1966, Address: 0x102bc8c, Func Offset: 0x2c
	// Line 1967, Address: 0x102bca4, Func Offset: 0x44
	// Line 1968, Address: 0x102bcc0, Func Offset: 0x60
	// Line 1969, Address: 0x102bcd4, Func Offset: 0x74
	// Line 1970, Address: 0x102bce8, Func Offset: 0x88
	// Line 1971, Address: 0x102bcfc, Func Offset: 0x9c
	// Line 1972, Address: 0x102bd04, Func Offset: 0xa4
	// Line 1973, Address: 0x102bd10, Func Offset: 0xb0
	// Line 1974, Address: 0x102bd1c, Func Offset: 0xbc
	// Func End, Address: 0x102bd34, Func Offset: 0xd4
}

// 
// Start address: 0x102bd40
void egg7_hscr(_anon0* pActwk)
{
	void(*rlim_jmpd0)()[4];
	short d0;
	// Line 1979, Address: 0x102bd40, Func Offset: 0
	// Line 1980, Address: 0x102bd50, Func Offset: 0x10
	// Line 1989, Address: 0x102bd7c, Func Offset: 0x3c
	// Line 1991, Address: 0x102bd94, Func Offset: 0x54
	// Line 1992, Address: 0x102bda4, Func Offset: 0x64
	// Line 1993, Address: 0x102bdb0, Func Offset: 0x70
	// Line 1995, Address: 0x102bdc4, Func Offset: 0x84
	// Line 1997, Address: 0x102bdd0, Func Offset: 0x90
	// Line 1998, Address: 0x102bdd8, Func Offset: 0x98
	// Line 2000, Address: 0x102bde0, Func Offset: 0xa0
	// Line 2001, Address: 0x102bdf4, Func Offset: 0xb4
	// Line 2002, Address: 0x102be08, Func Offset: 0xc8
	// Line 2004, Address: 0x102be1c, Func Offset: 0xdc
	// Line 2005, Address: 0x102be28, Func Offset: 0xe8
	// Line 2006, Address: 0x102be34, Func Offset: 0xf4
	// Line 2007, Address: 0x102be44, Func Offset: 0x104
	// Line 2010, Address: 0x102be4c, Func Offset: 0x10c
	// Line 2011, Address: 0x102be70, Func Offset: 0x130
	// Func End, Address: 0x102be84, Func Offset: 0x144
}

// 
// Start address: 0x102be90
void egg7_hscr_pat0()
{
	// Line 2016, Address: 0x102be90, Func Offset: 0
	// Func End, Address: 0x102be98, Func Offset: 0x8
}

// 
// Start address: 0x102bea0
void egg7_hscr_pat1()
{
	short d0;
	// Line 2019, Address: 0x102bea0, Func Offset: 0
	// Line 2022, Address: 0x102bea8, Func Offset: 0x8
	// Line 2023, Address: 0x102beb4, Func Offset: 0x14
	// Line 2024, Address: 0x102bebc, Func Offset: 0x1c
	// Line 2025, Address: 0x102bec4, Func Offset: 0x24
	// Func End, Address: 0x102bed4, Func Offset: 0x34
}

// 
// Start address: 0x102bee0
void egg7_hscr_pat2()
{
	short d0;
	// Line 2028, Address: 0x102bee0, Func Offset: 0
	// Line 2031, Address: 0x102bee8, Func Offset: 0x8
	// Line 2032, Address: 0x102bef4, Func Offset: 0x14
	// Line 2033, Address: 0x102befc, Func Offset: 0x1c
	// Line 2034, Address: 0x102bf04, Func Offset: 0x24
	// Func End, Address: 0x102bf14, Func Offset: 0x34
}

// 
// Start address: 0x102bf20
void egg7_hscr_pat3()
{
	// Line 2038, Address: 0x102bf20, Func Offset: 0
	// Line 2039, Address: 0x102bf30, Func Offset: 0x10
	// Line 2040, Address: 0x102bf40, Func Offset: 0x20
	// Func End, Address: 0x102bf48, Func Offset: 0x28
}

// 
// Start address: 0x102bf50
void egg_hight(_anon0* pActwk)
{
	// Line 2045, Address: 0x102bf50, Func Offset: 0
	// Line 2046, Address: 0x102bf5c, Func Offset: 0xc
	// Line 2047, Address: 0x102bf6c, Func Offset: 0x1c
	// Line 2048, Address: 0x102bf78, Func Offset: 0x28
	// Line 2049, Address: 0x102bf88, Func Offset: 0x38
	// Func End, Address: 0x102bf98, Func Offset: 0x48
}

// 
// Start address: 0x102bfa0
void msnc_hight(_anon0* pActwk)
{
	// Line 2054, Address: 0x102bfa0, Func Offset: 0
	// Line 2055, Address: 0x102bfac, Func Offset: 0xc
	// Line 2056, Address: 0x102bfb0, Func Offset: 0x10
	// Line 2057, Address: 0x102bfbc, Func Offset: 0x1c
	// Line 2058, Address: 0x102bfc0, Func Offset: 0x20
	// Func End, Address: 0x102bfd0, Func Offset: 0x30
}

// 
// Start address: 0x102bfd0
void hight_set2(_anon0* pActwk)
{
	int ld1;
	short d1;
	// Line 2063, Address: 0x102bfd0, Func Offset: 0
	// Line 2067, Address: 0x102bfe0, Func Offset: 0x10
	// Line 2068, Address: 0x102bff0, Func Offset: 0x20
	// Line 2069, Address: 0x102c008, Func Offset: 0x38
	// Line 2071, Address: 0x102c028, Func Offset: 0x58
	// Line 2072, Address: 0x102c038, Func Offset: 0x68
	// Line 2073, Address: 0x102c048, Func Offset: 0x78
	// Line 2074, Address: 0x102c04c, Func Offset: 0x7c
	// Line 2075, Address: 0x102c05c, Func Offset: 0x8c
	// Line 2078, Address: 0x102c064, Func Offset: 0x94
	// Line 2079, Address: 0x102c06c, Func Offset: 0x9c
	// Line 2080, Address: 0x102c080, Func Offset: 0xb0
	// Func End, Address: 0x102c094, Func Offset: 0xc4
}

// 
// Start address: 0x102c0a0
void hight_set(_anon0* pActwk)
{
	short d1;
	short bne;
	// Line 2085, Address: 0x102c0a0, Func Offset: 0
	// Line 2089, Address: 0x102c0b0, Func Offset: 0x10
	// Line 2090, Address: 0x102c0c0, Func Offset: 0x20
	// Line 2091, Address: 0x102c0d8, Func Offset: 0x38
	// Line 2092, Address: 0x102c0f0, Func Offset: 0x50
	// Line 2095, Address: 0x102c0f8, Func Offset: 0x58
	// Line 2096, Address: 0x102c110, Func Offset: 0x70
	// Line 2099, Address: 0x102c128, Func Offset: 0x88
	// Line 2100, Address: 0x102c13c, Func Offset: 0x9c
	// Func End, Address: 0x102c150, Func Offset: 0xb0
}

// 
// Start address: 0x102c150
short hight_set_retry(_anon0* pActwk, short* d1)
{
	short egg_move_tbl[43];
	short d2;
	short d3;
	short d4;
	short* a2;
	// Line 2105, Address: 0x102c150, Func Offset: 0
	// Line 2106, Address: 0x102c16c, Func Offset: 0x1c
	// Line 2129, Address: 0x102c198, Func Offset: 0x48
	// Line 2132, Address: 0x102c19c, Func Offset: 0x4c
	// Line 2133, Address: 0x102c1b0, Func Offset: 0x60
	// Line 2134, Address: 0x102c1cc, Func Offset: 0x7c
	// Line 2135, Address: 0x102c1e0, Func Offset: 0x90
	// Line 2137, Address: 0x102c1f4, Func Offset: 0xa4
	// Line 2139, Address: 0x102c218, Func Offset: 0xc8
	// Line 2140, Address: 0x102c22c, Func Offset: 0xdc
	// Line 2141, Address: 0x102c238, Func Offset: 0xe8
	// Line 2144, Address: 0x102c240, Func Offset: 0xf0
	// Line 2146, Address: 0x102c254, Func Offset: 0x104
	// Line 2149, Address: 0x102c268, Func Offset: 0x118
	// Line 2150, Address: 0x102c278, Func Offset: 0x128
	// Line 2151, Address: 0x102c288, Func Offset: 0x138
	// Line 2152, Address: 0x102c290, Func Offset: 0x140
	// Line 2153, Address: 0x102c294, Func Offset: 0x144
	// Func End, Address: 0x102c2b0, Func Offset: 0x160
}

// 
// Start address: 0x102c2b0
void egg7beam(_anon0* pActwk)
{
	void(*tbl)(_anon0*, _anon0*)[4];
	_anon0* a2;
	// Line 2158, Address: 0x102c2b0, Func Offset: 0
	// Line 2159, Address: 0x102c2c0, Func Offset: 0x10
	// Line 2168, Address: 0x102c2ec, Func Offset: 0x3c
	// Line 2169, Address: 0x102c314, Func Offset: 0x64
	// Line 2171, Address: 0x102c324, Func Offset: 0x74
	// Line 2172, Address: 0x102c330, Func Offset: 0x80
	// Line 2174, Address: 0x102c338, Func Offset: 0x88
	// Line 2175, Address: 0x102c378, Func Offset: 0xc8
	// Func End, Address: 0x102c38c, Func Offset: 0xdc
}

// 
// Start address: 0x102c390
void egg7beam_ini(_anon0* pActwk)
{
	// Line 2180, Address: 0x102c390, Func Offset: 0
	// Line 2181, Address: 0x102c398, Func Offset: 0x8
	// Line 2183, Address: 0x102c3b0, Func Offset: 0x20
	// Line 2184, Address: 0x102c3bc, Func Offset: 0x2c
	// Line 2185, Address: 0x102c3c8, Func Offset: 0x38
	// Line 2186, Address: 0x102c3d4, Func Offset: 0x44
	// Line 2187, Address: 0x102c3e0, Func Offset: 0x50
	// Line 2188, Address: 0x102c3ec, Func Offset: 0x5c
	// Line 2189, Address: 0x102c3fc, Func Offset: 0x6c
	// Line 2190, Address: 0x102c408, Func Offset: 0x78
	// Line 2193, Address: 0x102c410, Func Offset: 0x80
	// Line 2194, Address: 0x102c41c, Func Offset: 0x8c
	// Line 2195, Address: 0x102c428, Func Offset: 0x98
	// Line 2196, Address: 0x102c434, Func Offset: 0xa4
	// Line 2197, Address: 0x102c440, Func Offset: 0xb0
	// Line 2198, Address: 0x102c44c, Func Offset: 0xbc
	// Line 2200, Address: 0x102c45c, Func Offset: 0xcc
	// Line 2202, Address: 0x102c478, Func Offset: 0xe8
	// Line 2204, Address: 0x102c484, Func Offset: 0xf4
	// Line 2205, Address: 0x102c490, Func Offset: 0x100
	// Line 2208, Address: 0x102c498, Func Offset: 0x108
	// Line 2210, Address: 0x102c4a4, Func Offset: 0x114
	// Line 2213, Address: 0x102c4b0, Func Offset: 0x120
	// Func End, Address: 0x102c4bc, Func Offset: 0x12c
}

// 
// Start address: 0x102c4c0
void egg7beam_01(_anon0* pActwk, _anon0* a2)
{
	// Line 2218, Address: 0x102c4c0, Func Offset: 0
	// Line 2219, Address: 0x102c4d0, Func Offset: 0x10
	// Line 2220, Address: 0x102c4d8, Func Offset: 0x18
	// Line 2221, Address: 0x102c4e0, Func Offset: 0x20
	// Line 2223, Address: 0x102c4f8, Func Offset: 0x38
	// Line 2224, Address: 0x102c504, Func Offset: 0x44
	// Line 2226, Address: 0x102c510, Func Offset: 0x50
	// Line 2228, Address: 0x102c528, Func Offset: 0x68
	// Line 2230, Address: 0x102c538, Func Offset: 0x78
	// Line 2232, Address: 0x102c54c, Func Offset: 0x8c
	// Line 2233, Address: 0x102c55c, Func Offset: 0x9c
	// Line 2234, Address: 0x102c568, Func Offset: 0xa8
	// Line 2235, Address: 0x102c574, Func Offset: 0xb4
	// Line 2238, Address: 0x102c57c, Func Offset: 0xbc
	// Line 2241, Address: 0x102c58c, Func Offset: 0xcc
	// Line 2243, Address: 0x102c5a0, Func Offset: 0xe0
	// Line 2244, Address: 0x102c5b0, Func Offset: 0xf0
	// Line 2245, Address: 0x102c5bc, Func Offset: 0xfc
	// Line 2246, Address: 0x102c5c8, Func Offset: 0x108
	// Line 2249, Address: 0x102c5d0, Func Offset: 0x110
	// Line 2254, Address: 0x102c5e0, Func Offset: 0x120
	// Line 2255, Address: 0x102c5f4, Func Offset: 0x134
	// Line 2256, Address: 0x102c600, Func Offset: 0x140
	// Line 2259, Address: 0x102c608, Func Offset: 0x148
	// Line 2261, Address: 0x102c610, Func Offset: 0x150
	// Func End, Address: 0x102c620, Func Offset: 0x160
}

// 
// Start address: 0x102c620
short beam_posi(_anon0* pActwk, _anon0* a2)
{
	short d0;
	short d1;
	// Line 2264, Address: 0x102c620, Func Offset: 0
	// Line 2267, Address: 0x102c634, Func Offset: 0x14
	// Line 2268, Address: 0x102c644, Func Offset: 0x24
	// Line 2269, Address: 0x102c654, Func Offset: 0x34
	// Line 2270, Address: 0x102c664, Func Offset: 0x44
	// Line 2271, Address: 0x102c674, Func Offset: 0x54
	// Line 2273, Address: 0x102c684, Func Offset: 0x64
	// Line 2275, Address: 0x102c69c, Func Offset: 0x7c
	// Line 2276, Address: 0x102c6ac, Func Offset: 0x8c
	// Line 2277, Address: 0x102c6bc, Func Offset: 0x9c
	// Line 2280, Address: 0x102c6c4, Func Offset: 0xa4
	// Line 2281, Address: 0x102c6d4, Func Offset: 0xb4
	// Line 2284, Address: 0x102c6e4, Func Offset: 0xc4
	// Line 2286, Address: 0x102c6f4, Func Offset: 0xd4
	// Line 2288, Address: 0x102c70c, Func Offset: 0xec
	// Line 2290, Address: 0x102c71c, Func Offset: 0xfc
	// Line 2292, Address: 0x102c734, Func Offset: 0x114
	// Line 2293, Address: 0x102c744, Func Offset: 0x124
	// Line 2297, Address: 0x102c750, Func Offset: 0x130
	// Line 2298, Address: 0x102c760, Func Offset: 0x140
	// Line 2300, Address: 0x102c764, Func Offset: 0x144
	// Func End, Address: 0x102c778, Func Offset: 0x158
}

// 
// Start address: 0x102c780
void egg7beam_kemuri1(_anon0* pActwk, _anon0* a2)
{
	// Line 2305, Address: 0x102c780, Func Offset: 0
	// Line 2306, Address: 0x102c790, Func Offset: 0x10
	// Line 2308, Address: 0x102c7a0, Func Offset: 0x20
	// Line 2309, Address: 0x102c7ac, Func Offset: 0x2c
	// Line 2311, Address: 0x102c7bc, Func Offset: 0x3c
	// Line 2312, Address: 0x102c7c4, Func Offset: 0x44
	// Line 2314, Address: 0x102c7d0, Func Offset: 0x50
	// Line 2316, Address: 0x102c7dc, Func Offset: 0x5c
	// Line 2317, Address: 0x102c7e8, Func Offset: 0x68
	// Func End, Address: 0x102c7f8, Func Offset: 0x78
}

// 
// Start address: 0x102c800
void egg7beam_kemuri2(_anon0* pActwk)
{
	// Line 2322, Address: 0x102c800, Func Offset: 0
	// Line 2323, Address: 0x102c80c, Func Offset: 0xc
	// Line 2324, Address: 0x102c818, Func Offset: 0x18
	// Line 2325, Address: 0x102c840, Func Offset: 0x40
	// Line 2326, Address: 0x102c84c, Func Offset: 0x4c
	// Func End, Address: 0x102c85c, Func Offset: 0x5c
}

// 
// Start address: 0x102c860
void kemuri_disp(_anon0* pActwk)
{
	unsigned char* kemuri_pchg[1];
	// Line 2329, Address: 0x102c860, Func Offset: 0
	// Line 2340, Address: 0x102c86c, Func Offset: 0xc
	// Line 2341, Address: 0x102c880, Func Offset: 0x20
	// Line 2342, Address: 0x102c88c, Func Offset: 0x2c
	// Func End, Address: 0x102c89c, Func Offset: 0x3c
}

// 
// Start address: 0x102c8a0
void hahen73(_anon0* pActwk)
{
	_anon2 ld0;
	_anon2 ld1;
	short d0;
	short d1;
	// Line 2347, Address: 0x102c8a0, Func Offset: 0
	// Line 2351, Address: 0x102c8b4, Func Offset: 0x14
	// Line 2353, Address: 0x102c8cc, Func Offset: 0x2c
	// Line 2355, Address: 0x102c8dc, Func Offset: 0x3c
	// Line 2356, Address: 0x102c8e8, Func Offset: 0x48
	// Line 2357, Address: 0x102c8f4, Func Offset: 0x54
	// Line 2358, Address: 0x102c900, Func Offset: 0x60
	// Line 2359, Address: 0x102c90c, Func Offset: 0x6c
	// Line 2360, Address: 0x102c918, Func Offset: 0x78
	// Line 2362, Address: 0x102c928, Func Offset: 0x88
	// Line 2363, Address: 0x102c934, Func Offset: 0x94
	// Line 2366, Address: 0x102c944, Func Offset: 0xa4
	// Line 2367, Address: 0x102c94c, Func Offset: 0xac
	// Line 2368, Address: 0x102c958, Func Offset: 0xb8
	// Line 2370, Address: 0x102c974, Func Offset: 0xd4
	// Line 2373, Address: 0x102c988, Func Offset: 0xe8
	// Line 2376, Address: 0x102c994, Func Offset: 0xf4
	// Line 2377, Address: 0x102c9a0, Func Offset: 0x100
	// Line 2378, Address: 0x102c9a8, Func Offset: 0x108
	// Line 2379, Address: 0x102c9b4, Func Offset: 0x114
	// Line 2382, Address: 0x102c9c8, Func Offset: 0x128
	// Line 2383, Address: 0x102c9d4, Func Offset: 0x134
	// Line 2384, Address: 0x102c9e4, Func Offset: 0x144
	// Line 2387, Address: 0x102c9ec, Func Offset: 0x14c
	// Line 2389, Address: 0x102c9fc, Func Offset: 0x15c
	// Line 2391, Address: 0x102ca08, Func Offset: 0x168
	// Line 2392, Address: 0x102ca18, Func Offset: 0x178
	// Line 2393, Address: 0x102ca28, Func Offset: 0x188
	// Line 2394, Address: 0x102ca34, Func Offset: 0x194
	// Line 2395, Address: 0x102ca40, Func Offset: 0x1a0
	// Line 2397, Address: 0x102ca50, Func Offset: 0x1b0
	// Line 2398, Address: 0x102ca5c, Func Offset: 0x1bc
	// Line 2401, Address: 0x102ca64, Func Offset: 0x1c4
	// Line 2404, Address: 0x102ca70, Func Offset: 0x1d0
	// Func End, Address: 0x102ca88, Func Offset: 0x1e8
}

// 
// Start address: 0x102ca90
void egg7jet(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 2409, Address: 0x102ca90, Func Offset: 0
	// Line 2410, Address: 0x102ca9c, Func Offset: 0xc
	// Line 2416, Address: 0x102cab8, Func Offset: 0x28
	// Line 2417, Address: 0x102caf4, Func Offset: 0x64
	// Func End, Address: 0x102cb04, Func Offset: 0x74
}

// 
// Start address: 0x102cb10
void egg7jet_ini(_anon0* pActwk)
{
	// Line 2422, Address: 0x102cb10, Func Offset: 0
	// Line 2423, Address: 0x102cb1c, Func Offset: 0xc
	// Line 2424, Address: 0x102cb28, Func Offset: 0x18
	// Line 2425, Address: 0x102cb34, Func Offset: 0x24
	// Line 2426, Address: 0x102cb40, Func Offset: 0x30
	// Line 2427, Address: 0x102cb4c, Func Offset: 0x3c
	// Line 2428, Address: 0x102cb58, Func Offset: 0x48
	// Line 2430, Address: 0x102cb68, Func Offset: 0x58
	// Line 2432, Address: 0x102cb80, Func Offset: 0x70
	// Line 2433, Address: 0x102cb8c, Func Offset: 0x7c
	// Line 2434, Address: 0x102cb98, Func Offset: 0x88
	// Line 2437, Address: 0x102cba0, Func Offset: 0x90
	// Line 2438, Address: 0x102cbac, Func Offset: 0x9c
	// Line 2440, Address: 0x102cbb8, Func Offset: 0xa8
	// Line 2442, Address: 0x102cbc8, Func Offset: 0xb8
	// Line 2443, Address: 0x102cbd4, Func Offset: 0xc4
	// Func End, Address: 0x102cbe4, Func Offset: 0xd4
}

// 
// Start address: 0x102cbf0
void egg7jet_01(_anon0* pActwk)
{
	_anon0* a2;
	short d0;
	// Line 2448, Address: 0x102cbf0, Func Offset: 0
	// Line 2452, Address: 0x102cc04, Func Offset: 0x14
	// Line 2453, Address: 0x102cc2c, Func Offset: 0x3c
	// Line 2455, Address: 0x102cc3c, Func Offset: 0x4c
	// Line 2456, Address: 0x102cc48, Func Offset: 0x58
	// Line 2458, Address: 0x102cc50, Func Offset: 0x60
	// Line 2463, Address: 0x102cc64, Func Offset: 0x74
	// Line 2464, Address: 0x102cc70, Func Offset: 0x80
	// Line 2465, Address: 0x102cc7c, Func Offset: 0x8c
	// Line 2467, Address: 0x102cc88, Func Offset: 0x98
	// Line 2468, Address: 0x102cc98, Func Offset: 0xa8
	// Line 2470, Address: 0x102ccb0, Func Offset: 0xc0
	// Line 2472, Address: 0x102ccbc, Func Offset: 0xcc
	// Line 2473, Address: 0x102cccc, Func Offset: 0xdc
	// Line 2474, Address: 0x102ccdc, Func Offset: 0xec
	// Line 2475, Address: 0x102ccec, Func Offset: 0xfc
	// Line 2476, Address: 0x102cd00, Func Offset: 0x110
	// Line 2477, Address: 0x102cd0c, Func Offset: 0x11c
	// Func End, Address: 0x102cd24, Func Offset: 0x134
}

// 
// Start address: 0x102cd30
void msnc_bara(_anon0* pActwk)
{
	void(*tbl)(_anon0*)[2];
	// Line 2482, Address: 0x102cd30, Func Offset: 0
	// Line 2483, Address: 0x102cd3c, Func Offset: 0xc
	// Line 2489, Address: 0x102cd58, Func Offset: 0x28
	// Line 2490, Address: 0x102cd94, Func Offset: 0x64
	// Line 2492, Address: 0x102cda4, Func Offset: 0x74
	// Line 2493, Address: 0x102cdac, Func Offset: 0x7c
	// Line 2495, Address: 0x102cdb4, Func Offset: 0x84
	// Line 2496, Address: 0x102cdc0, Func Offset: 0x90
	// Func End, Address: 0x102cdd0, Func Offset: 0xa0
}

// 
// Start address: 0x102cdd0
void msnc_bara_ini(_anon0* pActwk)
{
	// Line 2501, Address: 0x102cdd0, Func Offset: 0
	// Line 2502, Address: 0x102cddc, Func Offset: 0xc
	// Line 2503, Address: 0x102cde8, Func Offset: 0x18
	// Line 2504, Address: 0x102cdf4, Func Offset: 0x24
	// Line 2505, Address: 0x102ce00, Func Offset: 0x30
	// Line 2506, Address: 0x102ce0c, Func Offset: 0x3c
	// Line 2507, Address: 0x102ce18, Func Offset: 0x48
	// Line 2509, Address: 0x102ce28, Func Offset: 0x58
	// Line 2510, Address: 0x102ce34, Func Offset: 0x64
	// Func End, Address: 0x102ce44, Func Offset: 0x74
}

// 
// Start address: 0x102ce50
void msnc_bara_01(_anon0* pActwk)
{
	// Line 2515, Address: 0x102ce50, Func Offset: 0
	// Line 2516, Address: 0x102ce5c, Func Offset: 0xc
	// Line 2517, Address: 0x102ce68, Func Offset: 0x18
	// Line 2519, Address: 0x102ce84, Func Offset: 0x34
	// Line 2520, Address: 0x102ce90, Func Offset: 0x40
	// Line 2522, Address: 0x102ce9c, Func Offset: 0x4c
	// Func End, Address: 0x102ceac, Func Offset: 0x5c
}

// 
// Start address: 0x102ceb0
void add_spd3(_anon0* pActwk)
{
	short d0;
	// Line 2527, Address: 0x102ceb0, Func Offset: 0
	// Line 2530, Address: 0x102cec0, Func Offset: 0x10
	// Line 2531, Address: 0x102ced0, Func Offset: 0x20
	// Line 2533, Address: 0x102cee0, Func Offset: 0x30
	// Line 2534, Address: 0x102cef0, Func Offset: 0x40
	// Line 2536, Address: 0x102cf00, Func Offset: 0x50
	// Line 2538, Address: 0x102cf18, Func Offset: 0x68
	// Line 2539, Address: 0x102cf24, Func Offset: 0x74
	// Line 2541, Address: 0x102cf2c, Func Offset: 0x7c
	// Line 2543, Address: 0x102cf44, Func Offset: 0x94
	// Line 2544, Address: 0x102cf54, Func Offset: 0xa4
	// Line 2546, Address: 0x102cf78, Func Offset: 0xc8
	// Line 2548, Address: 0x102cf80, Func Offset: 0xd0
	// Line 2549, Address: 0x102cf8c, Func Offset: 0xdc
	// Line 2552, Address: 0x102cf94, Func Offset: 0xe4
	// Line 2553, Address: 0x102cfa4, Func Offset: 0xf4
	// Line 2555, Address: 0x102cfc8, Func Offset: 0x118
	// Line 2557, Address: 0x102cfd0, Func Offset: 0x120
	// Line 2559, Address: 0x102cfdc, Func Offset: 0x12c
	// Func End, Address: 0x102cff0, Func Offset: 0x140
}

// 
// Start address: 0x102cff0
void hari_spdadd(_anon0* pActwk)
{
	// Line 2564, Address: 0x102cff0, Func Offset: 0
	// Line 2565, Address: 0x102cffc, Func Offset: 0xc
	// Line 2566, Address: 0x102d008, Func Offset: 0x18
	// Func End, Address: 0x102d018, Func Offset: 0x28
}

// 
// Start address: 0x102d020
void add_spd2(_anon0* pActwk)
{
	short d0;
	// Line 2568, Address: 0x102d020, Func Offset: 0
	// Line 2571, Address: 0x102d030, Func Offset: 0x10
	// Line 2572, Address: 0x102d040, Func Offset: 0x20
	// Line 2573, Address: 0x102d050, Func Offset: 0x30
	// Line 2574, Address: 0x102d060, Func Offset: 0x40
	// Line 2576, Address: 0x102d070, Func Offset: 0x50
	// Line 2577, Address: 0x102d07c, Func Offset: 0x5c
	// Func End, Address: 0x102d090, Func Offset: 0x70
}

// 
// Start address: 0x102d090
void add_spd(_anon0* pActwk)
{
	int ld0;
	// Line 2580, Address: 0x102d090, Func Offset: 0
	// Line 2583, Address: 0x102d09c, Func Offset: 0xc
	// Line 2584, Address: 0x102d0ac, Func Offset: 0x1c
	// Line 2585, Address: 0x102d0b0, Func Offset: 0x20
	// Line 2586, Address: 0x102d0c0, Func Offset: 0x30
	// Line 2587, Address: 0x102d0d0, Func Offset: 0x40
	// Line 2588, Address: 0x102d0d4, Func Offset: 0x44
	// Line 2589, Address: 0x102d0e4, Func Offset: 0x54
	// Func End, Address: 0x102d0f4, Func Offset: 0x64
}

// 
// Start address: 0x102d100
void w_timer(_anon0* pActwk)
{
	// Line 2594, Address: 0x102d100, Func Offset: 0
	// Line 2595, Address: 0x102d108, Func Offset: 0x8
	// Line 2596, Address: 0x102d118, Func Offset: 0x18
	// Line 2598, Address: 0x102d130, Func Offset: 0x30
	// Line 2600, Address: 0x102d140, Func Offset: 0x40
	// Func End, Address: 0x102d14c, Func Offset: 0x4c
}

// 
// Start address: 0x102d150
void b_timer(_anon0* pActwk)
{
	// Line 2605, Address: 0x102d150, Func Offset: 0
	// Line 2606, Address: 0x102d158, Func Offset: 0x8
	// Line 2607, Address: 0x102d168, Func Offset: 0x18
	// Line 2609, Address: 0x102d17c, Func Offset: 0x2c
	// Line 2611, Address: 0x102d18c, Func Offset: 0x3c
	// Func End, Address: 0x102d198, Func Offset: 0x48
}

// 
// Start address: 0x102d1a0
void event_timer(_anon0* pActwk, short* pTimer, void(*func)(_anon0*))
{
	short d0;
	// Line 2616, Address: 0x102d1a0, Func Offset: 0
	// Line 2619, Address: 0x102d1b8, Func Offset: 0x18
	// Line 2620, Address: 0x102d1d4, Func Offset: 0x34
	// Line 2621, Address: 0x102d1f4, Func Offset: 0x54
	// Line 2623, Address: 0x102d214, Func Offset: 0x74
	// Line 2624, Address: 0x102d224, Func Offset: 0x84
	// Line 2627, Address: 0x102d22c, Func Offset: 0x8c
	// Line 2629, Address: 0x102d23c, Func Offset: 0x9c
	// Line 2630, Address: 0x102d258, Func Offset: 0xb8
	// Line 2631, Address: 0x102d268, Func Offset: 0xc8
	// Line 2633, Address: 0x102d28c, Func Offset: 0xec
	// Func End, Address: 0x102d2a0, Func Offset: 0x100
}

// 
// Start address: 0x102d2a0
void make_bara(_anon0* pActwk)
{
	_anon0* pNewActwk;
	_anon2 ld0;
	_anon2 ld1;
	short d0;
	short d3;
	// Line 2638, Address: 0x102d2a0, Func Offset: 0
	// Line 2643, Address: 0x102d2b4, Func Offset: 0x14
	// Line 2646, Address: 0x102d2c0, Func Offset: 0x20
	// Line 2647, Address: 0x102d2d8, Func Offset: 0x38
	// Line 2648, Address: 0x102d2e0, Func Offset: 0x40
	// Line 2649, Address: 0x102d304, Func Offset: 0x64
	// Line 2651, Address: 0x102d314, Func Offset: 0x74
	// Line 2652, Address: 0x102d350, Func Offset: 0xb0
	// Line 2653, Address: 0x102d35c, Func Offset: 0xbc
	// Line 2654, Address: 0x102d36c, Func Offset: 0xcc
	// Line 2656, Address: 0x102d37c, Func Offset: 0xdc
	// Line 2657, Address: 0x102d388, Func Offset: 0xe8
	// Line 2660, Address: 0x102d398, Func Offset: 0xf8
	// Line 2661, Address: 0x102d3a0, Func Offset: 0x100
	// Line 2662, Address: 0x102d3b0, Func Offset: 0x110
	// Line 2663, Address: 0x102d3cc, Func Offset: 0x12c
	// Line 2666, Address: 0x102d3d8, Func Offset: 0x138
	// Line 2669, Address: 0x102d3e4, Func Offset: 0x144
	// Line 2670, Address: 0x102d3f0, Func Offset: 0x150
	// Line 2671, Address: 0x102d3f8, Func Offset: 0x158
	// Line 2672, Address: 0x102d404, Func Offset: 0x164
	// Line 2673, Address: 0x102d418, Func Offset: 0x178
	// Line 2675, Address: 0x102d430, Func Offset: 0x190
	// Func End, Address: 0x102d448, Func Offset: 0x1a8
}

// 
// Start address: 0x102d450
void make_ele(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 2680, Address: 0x102d450, Func Offset: 0
	// Line 2683, Address: 0x102d45c, Func Offset: 0xc
	// Line 2685, Address: 0x102d474, Func Offset: 0x24
	// Line 2686, Address: 0x102d4b0, Func Offset: 0x60
	// Line 2688, Address: 0x102d4bc, Func Offset: 0x6c
	// Func End, Address: 0x102d4cc, Func Offset: 0x7c
}

// 
// Start address: 0x102d4d0
void make_msnc(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 2693, Address: 0x102d4d0, Func Offset: 0
	// Line 2696, Address: 0x102d4dc, Func Offset: 0xc
	// Line 2698, Address: 0x102d4f4, Func Offset: 0x24
	// Line 2699, Address: 0x102d530, Func Offset: 0x60
	// Line 2700, Address: 0x102d56c, Func Offset: 0x9c
	// Line 2701, Address: 0x102d578, Func Offset: 0xa8
	// Line 2702, Address: 0x102d584, Func Offset: 0xb4
	// Line 2704, Address: 0x102d590, Func Offset: 0xc0
	// Func End, Address: 0x102d5a0, Func Offset: 0xd0
}

// 
// Start address: 0x102d5a0
void make_jet(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 2709, Address: 0x102d5a0, Func Offset: 0
	// Line 2712, Address: 0x102d5ac, Func Offset: 0xc
	// Line 2714, Address: 0x102d5c4, Func Offset: 0x24
	// Line 2715, Address: 0x102d600, Func Offset: 0x60
	// Line 2716, Address: 0x102d60c, Func Offset: 0x6c
	// Line 2717, Address: 0x102d614, Func Offset: 0x74
	// Line 2718, Address: 0x102d61c, Func Offset: 0x7c
	// Line 2720, Address: 0x102d634, Func Offset: 0x94
	// Line 2721, Address: 0x102d670, Func Offset: 0xd0
	// Line 2722, Address: 0x102d67c, Func Offset: 0xdc
	// Line 2723, Address: 0x102d688, Func Offset: 0xe8
	// Line 2726, Address: 0x102d694, Func Offset: 0xf4
	// Func End, Address: 0x102d6a4, Func Offset: 0x104
}

// 
// Start address: 0x102d6b0
void make_beam(_anon0* pActwk)
{
	_anon0* pNewActwk;
	_anon0* a3;
	short d2;
	// Line 2731, Address: 0x102d6b0, Func Offset: 0
	// Line 2736, Address: 0x102d6c4, Func Offset: 0x14
	// Line 2737, Address: 0x102d6d0, Func Offset: 0x20
	// Line 2740, Address: 0x102d6d4, Func Offset: 0x24
	// Line 2741, Address: 0x102d6ec, Func Offset: 0x3c
	// Line 2742, Address: 0x102d724, Func Offset: 0x74
	// Line 2744, Address: 0x102d760, Func Offset: 0xb0
	// Line 2745, Address: 0x102d76c, Func Offset: 0xbc
	// Line 2746, Address: 0x102d770, Func Offset: 0xc0
	// Line 2747, Address: 0x102d784, Func Offset: 0xd4
	// Line 2750, Address: 0x102d794, Func Offset: 0xe4
	// Line 2752, Address: 0x102d7a0, Func Offset: 0xf0
	// Line 2753, Address: 0x102d7ac, Func Offset: 0xfc
	// Line 2754, Address: 0x102d7b8, Func Offset: 0x108
	// Line 2756, Address: 0x102d7c0, Func Offset: 0x110
	// Line 2757, Address: 0x102d7c8, Func Offset: 0x118
	// Line 2758, Address: 0x102d7d4, Func Offset: 0x124
	// Line 2760, Address: 0x102d7ec, Func Offset: 0x13c
	// Func End, Address: 0x102d804, Func Offset: 0x154
}

// 
// Start address: 0x102d810
void make_kemuri(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 2765, Address: 0x102d810, Func Offset: 0
	// Line 2768, Address: 0x102d81c, Func Offset: 0xc
	// Line 2770, Address: 0x102d834, Func Offset: 0x24
	// Line 2771, Address: 0x102d870, Func Offset: 0x60
	// Line 2772, Address: 0x102d87c, Func Offset: 0x6c
	// Line 2773, Address: 0x102d888, Func Offset: 0x78
	// Line 2774, Address: 0x102d894, Func Offset: 0x84
	// Line 2776, Address: 0x102d8a0, Func Offset: 0x90
	// Func End, Address: 0x102d8b0, Func Offset: 0xa0
}

// 
// Start address: 0x102d8b0
void make_bakuha(_anon0* pActwk)
{
	_anon0* pNewActwk;
	// Line 2781, Address: 0x102d8b0, Func Offset: 0
	// Line 2784, Address: 0x102d8bc, Func Offset: 0xc
	// Line 2786, Address: 0x102d8d4, Func Offset: 0x24
	// Line 2787, Address: 0x102d910, Func Offset: 0x60
	// Line 2788, Address: 0x102d91c, Func Offset: 0x6c
	// Line 2789, Address: 0x102d928, Func Offset: 0x78
	// Line 2790, Address: 0x102d938, Func Offset: 0x88
	// Line 2792, Address: 0x102d948, Func Offset: 0x98
	// Line 2794, Address: 0x102d954, Func Offset: 0xa4
	// Func End, Address: 0x102d964, Func Offset: 0xb4
}

// 
// Start address: 0x102d970
void make_hahen(_anon0* pActwk)
{
	_anon0* pNewActwk;
	_anon0* a2;
	// Line 2799, Address: 0x102d970, Func Offset: 0
	// Line 2803, Address: 0x102d980, Func Offset: 0x10
	// Line 2805, Address: 0x102d998, Func Offset: 0x28
	// Line 2806, Address: 0x102d9a4, Func Offset: 0x34
	// Line 2807, Address: 0x102d9b4, Func Offset: 0x44
	// Line 2808, Address: 0x102d9c4, Func Offset: 0x54
	// Line 2809, Address: 0x102d9d4, Func Offset: 0x64
	// Line 2810, Address: 0x102d9e4, Func Offset: 0x74
	// Line 2811, Address: 0x102da0c, Func Offset: 0x9c
	// Line 2813, Address: 0x102da18, Func Offset: 0xa8
	// Func End, Address: 0x102da2c, Func Offset: 0xbc
}

