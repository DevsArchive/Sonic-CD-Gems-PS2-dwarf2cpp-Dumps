typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;

typedef int(*type_8)(_anon1*);
typedef int(*type_10)(_anon1*);
typedef int(*type_14)(_anon1*);
typedef int(*type_20)(_anon1*);
typedef int(*type_22)(_anon1*);
typedef int(*type_24)(_anon1*);
typedef int(*type_26)(_anon1*);
typedef int(*type_32)(_anon1*);
typedef int(*type_35)(_anon1*);

typedef _anon0* type_0[1];
typedef _anon0* type_1[1];
typedef _anon0* type_2[1];
typedef _anon0* type_3[1];
typedef _anon0* type_4[1];
typedef _anon0* type_5[1];
typedef unsigned char type_6[2];
typedef unsigned char type_7[22];
typedef int(*type_9)(_anon1*)[7];
typedef unsigned char* type_11[5];
typedef int(*type_12)(_anon1*)[3];
typedef unsigned char type_13[4];
typedef int(*type_15)(_anon1*)[9];
typedef unsigned char type_16[4];
typedef _anon1 type_17[128];
typedef short type_18[20];
typedef short type_19[6];
typedef int(*type_21)(_anon1*)[6];
typedef int(*type_23)(_anon1*)[13];
typedef int(*type_25)(_anon1*)[3];
typedef int(*type_27)(_anon1*)[8];
typedef _anon7 type_28[20];
typedef unsigned char type_29[4];
typedef _anon7 type_30[0];
typedef unsigned char type_31[6];
typedef int(*type_33)(_anon1*)[8];
typedef unsigned char type_34[3];
typedef int(*type_36)(_anon1*)[6];
typedef short type_37[20];
typedef _anon0* type_38[3];
typedef _anon0* type_39[1];
typedef _anon0* type_40[11];
typedef _anon0* type_41[3];

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

unsigned char egg1_pchg0[3];
unsigned char egg1_pchg1[4];
unsigned char egg1_pchg2[6];
unsigned char egg1_pchg3[4];
unsigned char egg1_pchg4[4];
unsigned char* egg1_pchg[5];
_anon0 spr_egg1_pat0;
_anon0 spr_egg1_pat1;
_anon0 spr_egg1_pat2;
_anon0 spr_egg1_pat3;
_anon0 spr_egg1_pat4;
_anon0 spr_egg1_pat5;
_anon0 spr_egg1_pat6;
_anon0 spr_egg1_pat7;
_anon0 spr_egg1_pat8;
_anon0 spr_egg1_pat9;
_anon0 spr_egg1_pat10;
_anon0* egg1_pat[11];
_anon0 spr_egg1body_pat0;
_anon0* egg1body_pat[1];
_anon0 spr_egg1leg1_pat0;
_anon0* egg1leg1_pat[1];
_anon0 spr_egg1leg2_pat0;
_anon0* egg1leg2_pat[1];
_anon0 spr_egg1leg3_pat0;
_anon0* egg1leg3_pat[1];
_anon0 spr_egg1arm1_pat0;
_anon0* egg1arm1_pat[1];
_anon0 spr_egg1arm2_pat0;
_anon0* egg1arm2_pat[1];
_anon0 spr_egg1arm3_pat10;
_anon0 spr_egg1arm3_pat11;
_anon0 spr_egg1arm3_pat12;
_anon0* egg1arm3_pat1[3];
_anon0 spr_egg1arm3_pat20;
_anon0 spr_egg1arm3_pat21;
_anon0 spr_egg1arm3_pat22;
_anon0* egg1arm3_pat2[3];
_anon0 spr_egg1arm4_pat0;
_anon0* egg1arm4_pat[1];
short scralim_n_down;
short scralim_down;
unsigned char bossflag;
_anon1 actwk[128];
unsigned char bossstart;
short scralim_n_left;
short scralim_left;
short scralim_n_right;
short scralim_right;
short scra_vline;
unsigned char generate_flag;
short scr_dir_tbl[6];

void egg1(_anon1* pActwk);
void egg1_anime(_anon1* pActwk);
void egg1_jisin(_anon1* pActwk);
void sonic_hajiku(short subact);
void egg1_coliude(short subact, _anon1* pActwk);
void egg1_hit_chk(_anon1* pActwk);
void egg1_warai_chk(_anon1* pActwk);
void egg1_coli(short subact, _anon1* pActwk);
void egg1coli_set_body(_anon1* pActwk);
void egg1coli_set_arm(short subact);
void egg1coli_set_arm_l(_anon1* pActwk);
void egg1coli_set_arm_r(_anon1* pActwk);
void egg1coli_set(_anon1* pActwk);
int egg1_ini(_anon1* pActwk);
int make_act(_anon1* pActwk, _anon1** subActwk);
void egg1_make_act(_anon1* pActwk);
int egg1_01(_anon1* pActwk);
int egg1_06(_anon1* pActwk);
int egg1_wait(_anon1* pActwk);
int egg1_02(_anon1* pActwk);
int egg1_03(_anon1* pActwk);
int egg1_04(_anon1* pActwk);
int egg1_05(_anon1* pActwk);
void egg1body(_anon1* pActwk);
void spd_normal(_anon1* pActwk);
int egg1body_ini(_anon1* pActwk);
int egg1body_08(_anon1* pActwk);
void bup_set(_anon1* legActwk);
void bup_clr(_anon1* legActwk);
void grd_set(_anon1* legActwk);
void grd_clr(_anon1* legActwk);
int egg1body_01(_anon1* pActwk);
int egg1body_02(_anon1* pActwk);
int egg1body_03(_anon1* pActwk);
int egg1body_04(_anon1* pActwk);
void armset_1(_anon1* pActwk);
void armset_2(_anon1* pActwk);
void armset_3(_anon1* pActwk);
void spd_up(_anon1* pActwk);
int egg1body_05(_anon1* pActwk);
int egg1body_06(_anon1* pActwk);
int egg1body_07(_anon1* pActwk);
void arm_bom(_anon1* pActwk);
void egg1arm1(_anon1* pActwk);
int egg1arm1_ini(_anon1* pActwk);
int egg1arm1_01(_anon1* pActwk);
int egg1arm1_02(_anon1* pActwk);
void egg1arm2(_anon1* pActwk);
int egg1arm2_ini(_anon1* pActwk);
int egg1arm2_01(_anon1* pActwk);
int egg1arm2_03(_anon1* pActwk);
int egg1arm2_02(_anon1* pActwk);
int egg1arm2_04(_anon1* pActwk);
int egg1arm2_05(_anon1* pActwk);
void egg1arm2_set(_anon1* pActwk);
void egg1arm3(_anon1* pActwk);
int egg1arm3_ini(_anon1* pActwk);
int egg1arm3_01(_anon1* pActwk);
int egg1arm3_03(_anon1* pActwk);
int egg1arm3_04(_anon1* pActwk);
int egg1arm3_05(_anon1* pActwk);
int egg1arm3_02(_anon1* pActwk);
void egg1arm4(_anon1* pActwk);
int egg1arm4_ini(_anon1* pActwk);
int egg1arm4_01(_anon1* pActwk);
int egg1arm4_02(_anon1* pActwk);
void egg1leg1(_anon1* pActwk);
int egg1leg1_ini(_anon1* pActwk);
int egg1leg1_01(_anon1* pActwk);
int egg1leg1_02(_anon1* pActwk);
int egg1leg1_03(_anon1* pActwk);
int egg1leg1_04(_anon1* pActwk);
int egg1leg1_05(_anon1* pActwk);
int egg1leg1_06(_anon1* pActwk);
int egg1leg1_07(_anon1* pActwk);
int egg1leg1_08(_anon1* pActwk);
int egg1leg1_09(_anon1* pActwk);
int egg1leg1_10(_anon1* pActwk);
int egg1leg1_11(_anon1* pActwk);
void egg1leg1_set(_anon1* pActwk);
int egg1leg1_12(_anon1* pActwk);
void egg1leg2(_anon1* pActwk);
int egg1leg2_ini(_anon1* pActwk);
int egg1leg2_01(_anon1* pActwk);
int egg1leg2_02(_anon1* pActwk);
int egg1leg2_03(_anon1* pActwk);
int egg1leg2_04(_anon1* pActwk);
int egg1leg2_05(_anon1* pActwk);
int egg1leg2_06(_anon1* pActwk);
void leg2_set(int xs, int ys, _anon1* pActwk);
void leg2_set2(_anon1* pActwk);
int egg1leg2_07(_anon1* pActwk);
void egg1leg3(_anon1* pActwk);
void leg3_set_not_grd(_anon1* pActwk);
int egg1leg3_ini(_anon1* pActwk);
void leg3_on_the_ground(_anon1* pActwk);
int egg1leg3_01(_anon1* pActwk);
int egg1leg3_03(_anon1* pActwk);
int egg1leg3_02(_anon1* pActwk);
int egg1leg3_04(_anon1* pActwk);
int egg1leg3_05(_anon1* pActwk);
void leg3_set(_anon1* pActwk);
int egg1leg3_06(_anon1* pActwk);
void bom_set(_anon1* pActwk);
void tenmetu();

// 
// Start address: 0x1027730
void egg1(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[8];
	// Line 628, Address: 0x1027730, Func Offset: 0
	// Line 629, Address: 0x102773c, Func Offset: 0xc
	// Line 641, Address: 0x1027770, Func Offset: 0x40
	// Line 642, Address: 0x102777c, Func Offset: 0x4c
	// Line 643, Address: 0x1027788, Func Offset: 0x58
	// Line 644, Address: 0x1027794, Func Offset: 0x64
	// Line 645, Address: 0x10277a0, Func Offset: 0x70
	// Line 647, Address: 0x10277e4, Func Offset: 0xb4
	// Line 648, Address: 0x10277f8, Func Offset: 0xc8
	// Line 650, Address: 0x1027804, Func Offset: 0xd4
	// Func End, Address: 0x1027814, Func Offset: 0xe4
}

// 
// Start address: 0x1027820
void egg1_anime(_anon1* pActwk)
{
	// Line 657, Address: 0x1027820, Func Offset: 0
	// Line 658, Address: 0x1027828, Func Offset: 0x8
	// Line 659, Address: 0x1027838, Func Offset: 0x18
	// Line 660, Address: 0x1027848, Func Offset: 0x28
	// Line 661, Address: 0x1027858, Func Offset: 0x38
	// Line 662, Address: 0x1027860, Func Offset: 0x40
	// Line 663, Address: 0x1027868, Func Offset: 0x48
	// Line 664, Address: 0x1027870, Func Offset: 0x50
	// Line 665, Address: 0x1027878, Func Offset: 0x58
	// Line 666, Address: 0x1027880, Func Offset: 0x60
	// Func End, Address: 0x102788c, Func Offset: 0x6c
}

// 
// Start address: 0x1027890
void egg1_jisin(_anon1* pActwk)
{
	short temp1;
	short temp0;
	// Line 669, Address: 0x1027890, Func Offset: 0
	// Line 670, Address: 0x10278a0, Func Offset: 0x10
	// Line 671, Address: 0x10278ac, Func Offset: 0x1c
	// Line 673, Address: 0x10278b8, Func Offset: 0x28
	// Line 675, Address: 0x10278c8, Func Offset: 0x38
	// Line 676, Address: 0x10278d4, Func Offset: 0x44
	// Line 678, Address: 0x10278e4, Func Offset: 0x54
	// Line 679, Address: 0x10278f4, Func Offset: 0x64
	// Line 681, Address: 0x1027918, Func Offset: 0x88
	// Line 684, Address: 0x1027924, Func Offset: 0x94
	// Line 685, Address: 0x102792c, Func Offset: 0x9c
	// Line 686, Address: 0x1027934, Func Offset: 0xa4
	// Func End, Address: 0x1027948, Func Offset: 0xb8
}

// 
// Start address: 0x1027950
void sonic_hajiku(short subact)
{
	short temp1;
	short temp2;
	// Line 690, Address: 0x1027950, Func Offset: 0
	// Line 691, Address: 0x1027960, Func Offset: 0x10
	// Line 693, Address: 0x1027978, Func Offset: 0x28
	// Line 694, Address: 0x1027984, Func Offset: 0x34
	// Line 696, Address: 0x102799c, Func Offset: 0x4c
	// Line 697, Address: 0x10279b4, Func Offset: 0x64
	// Line 699, Address: 0x10279b8, Func Offset: 0x68
	// Line 700, Address: 0x1027a10, Func Offset: 0xc0
	// Line 701, Address: 0x1027a18, Func Offset: 0xc8
	// Line 702, Address: 0x1027a20, Func Offset: 0xd0
	// Func End, Address: 0x1027a34, Func Offset: 0xe4
}

// 
// Start address: 0x1027a40
void egg1_coliude(short subact, _anon1* pActwk)
{
	// Line 705, Address: 0x1027a40, Func Offset: 0
	// Line 707, Address: 0x1027a50, Func Offset: 0x10
	// Line 708, Address: 0x1027a80, Func Offset: 0x40
	// Line 709, Address: 0x1027a8c, Func Offset: 0x4c
	// Line 710, Address: 0x1027a98, Func Offset: 0x58
	// Line 711, Address: 0x1027aa4, Func Offset: 0x64
	// Line 712, Address: 0x1027ab0, Func Offset: 0x70
	// Func End, Address: 0x1027ac0, Func Offset: 0x80
}

// 
// Start address: 0x1027ac0
void egg1_hit_chk(_anon1* pActwk)
{
	short subact;
	// Line 715, Address: 0x1027ac0, Func Offset: 0
	// Line 718, Address: 0x1027ad0, Func Offset: 0x10
	// Line 720, Address: 0x1027ae0, Func Offset: 0x20
	// Line 722, Address: 0x1027af8, Func Offset: 0x38
	// Line 724, Address: 0x1027b08, Func Offset: 0x48
	// Line 725, Address: 0x1027b4c, Func Offset: 0x8c
	// Line 728, Address: 0x1027b54, Func Offset: 0x94
	// Line 729, Address: 0x1027b64, Func Offset: 0xa4
	// Line 730, Address: 0x1027b90, Func Offset: 0xd0
	// Line 731, Address: 0x1027bbc, Func Offset: 0xfc
	// Line 733, Address: 0x1027be8, Func Offset: 0x128
	// Line 734, Address: 0x1027bf8, Func Offset: 0x138
	// Line 736, Address: 0x1027c00, Func Offset: 0x140
	// Line 737, Address: 0x1027c2c, Func Offset: 0x16c
	// Line 739, Address: 0x1027c58, Func Offset: 0x198
	// Line 740, Address: 0x1027c68, Func Offset: 0x1a8
	// Line 742, Address: 0x1027c70, Func Offset: 0x1b0
	// Line 743, Address: 0x1027c80, Func Offset: 0x1c0
	// Line 744, Address: 0x1027cac, Func Offset: 0x1ec
	// Line 745, Address: 0x1027cd8, Func Offset: 0x218
	// Line 747, Address: 0x1027d04, Func Offset: 0x244
	// Line 748, Address: 0x1027d14, Func Offset: 0x254
	// Line 750, Address: 0x1027d1c, Func Offset: 0x25c
	// Line 751, Address: 0x1027d48, Func Offset: 0x288
	// Line 753, Address: 0x1027d74, Func Offset: 0x2b4
	// Line 754, Address: 0x1027d84, Func Offset: 0x2c4
	// Line 756, Address: 0x1027d8c, Func Offset: 0x2cc
	// Line 759, Address: 0x1027da4, Func Offset: 0x2e4
	// Line 760, Address: 0x1027db4, Func Offset: 0x2f4
	// Line 761, Address: 0x1027de0, Func Offset: 0x320
	// Line 762, Address: 0x1027e0c, Func Offset: 0x34c
	// Line 763, Address: 0x1027e38, Func Offset: 0x378
	// Line 765, Address: 0x1027e64, Func Offset: 0x3a4
	// Line 766, Address: 0x1027e74, Func Offset: 0x3b4
	// Line 769, Address: 0x1027e7c, Func Offset: 0x3bc
	// Line 770, Address: 0x1027e8c, Func Offset: 0x3cc
	// Line 771, Address: 0x1027eb8, Func Offset: 0x3f8
	// Line 772, Address: 0x1027ee4, Func Offset: 0x424
	// Line 773, Address: 0x1027f10, Func Offset: 0x450
	// Line 775, Address: 0x1027f3c, Func Offset: 0x47c
	// Line 776, Address: 0x1027f4c, Func Offset: 0x48c
	// Line 779, Address: 0x1027f54, Func Offset: 0x494
	// Line 782, Address: 0x1027f6c, Func Offset: 0x4ac
	// Line 783, Address: 0x1027f7c, Func Offset: 0x4bc
	// Line 784, Address: 0x1027fa8, Func Offset: 0x4e8
	// Line 785, Address: 0x1027fd4, Func Offset: 0x514
	// Line 786, Address: 0x1028000, Func Offset: 0x540
	// Line 788, Address: 0x102802c, Func Offset: 0x56c
	// Line 789, Address: 0x102803c, Func Offset: 0x57c
	// Line 796, Address: 0x1028044, Func Offset: 0x584
	// Line 797, Address: 0x1028054, Func Offset: 0x594
	// Line 798, Address: 0x1028064, Func Offset: 0x5a4
	// Line 800, Address: 0x1028074, Func Offset: 0x5b4
	// Func End, Address: 0x1028088, Func Offset: 0x5c8
}

// 
// Start address: 0x1028090
void egg1_warai_chk(_anon1* pActwk)
{
	// Line 806, Address: 0x1028090, Func Offset: 0
	// Line 808, Address: 0x1028098, Func Offset: 0x8
	// Line 810, Address: 0x10280a8, Func Offset: 0x18
	// Line 813, Address: 0x10280d8, Func Offset: 0x48
	// Line 814, Address: 0x10280e0, Func Offset: 0x50
	// Line 815, Address: 0x10280e8, Func Offset: 0x58
	// Line 816, Address: 0x10280f0, Func Offset: 0x60
	// Line 817, Address: 0x10280f8, Func Offset: 0x68
	// Line 818, Address: 0x1028104, Func Offset: 0x74
	// Line 821, Address: 0x1028110, Func Offset: 0x80
	// Func End, Address: 0x102811c, Func Offset: 0x8c
}

// 
// Start address: 0x1028120
void egg1_coli(short subact, _anon1* pActwk)
{
	// Line 827, Address: 0x1028120, Func Offset: 0
	// Line 829, Address: 0x1028130, Func Offset: 0x10
	// Line 832, Address: 0x102813c, Func Offset: 0x1c
	// Line 835, Address: 0x1028148, Func Offset: 0x28
	// Line 836, Address: 0x1028150, Func Offset: 0x30
	// Line 837, Address: 0x1028158, Func Offset: 0x38
	// Line 838, Address: 0x1028160, Func Offset: 0x40
	// Line 839, Address: 0x1028168, Func Offset: 0x48
	// Line 840, Address: 0x1028174, Func Offset: 0x54
	// Line 841, Address: 0x1028180, Func Offset: 0x60
	// Line 842, Address: 0x1028190, Func Offset: 0x70
	// Line 845, Address: 0x10281a0, Func Offset: 0x80
	// Line 846, Address: 0x10281a8, Func Offset: 0x88
	// Line 847, Address: 0x10281b0, Func Offset: 0x90
	// Line 848, Address: 0x10281b8, Func Offset: 0x98
	// Line 849, Address: 0x10281c0, Func Offset: 0xa0
	// Line 850, Address: 0x10281cc, Func Offset: 0xac
	// Line 852, Address: 0x10281d4, Func Offset: 0xb4
	// Line 853, Address: 0x10281e4, Func Offset: 0xc4
	// Line 855, Address: 0x10281ec, Func Offset: 0xcc
	// Line 856, Address: 0x10281f8, Func Offset: 0xd8
	// Line 857, Address: 0x1028200, Func Offset: 0xe0
	// Line 858, Address: 0x1028208, Func Offset: 0xe8
	// Line 860, Address: 0x1028238, Func Offset: 0x118
	// Line 861, Address: 0x1028244, Func Offset: 0x124
	// Line 862, Address: 0x1028270, Func Offset: 0x150
	// Line 864, Address: 0x102829c, Func Offset: 0x17c
	// Line 865, Address: 0x10282c8, Func Offset: 0x1a8
	// Line 866, Address: 0x10282f4, Func Offset: 0x1d4
	// Line 867, Address: 0x1028320, Func Offset: 0x200
	// Line 868, Address: 0x1028348, Func Offset: 0x228
	// Line 869, Address: 0x1028370, Func Offset: 0x250
	// Line 870, Address: 0x102839c, Func Offset: 0x27c
	// Line 871, Address: 0x10283c8, Func Offset: 0x2a8
	// Line 872, Address: 0x10283f0, Func Offset: 0x2d0
	// Line 873, Address: 0x1028418, Func Offset: 0x2f8
	// Line 875, Address: 0x1028448, Func Offset: 0x328
	// Line 876, Address: 0x1028474, Func Offset: 0x354
	// Line 877, Address: 0x10284a0, Func Offset: 0x380
	// Line 878, Address: 0x10284cc, Func Offset: 0x3ac
	// Line 879, Address: 0x10284f4, Func Offset: 0x3d4
	// Line 880, Address: 0x102851c, Func Offset: 0x3fc
	// Line 881, Address: 0x1028548, Func Offset: 0x428
	// Line 882, Address: 0x1028574, Func Offset: 0x454
	// Line 883, Address: 0x102859c, Func Offset: 0x47c
	// Line 884, Address: 0x10285c4, Func Offset: 0x4a4
	// Line 887, Address: 0x10285cc, Func Offset: 0x4ac
	// Line 890, Address: 0x10285e4, Func Offset: 0x4c4
	// Line 891, Address: 0x10285f0, Func Offset: 0x4d0
	// Line 892, Address: 0x1028620, Func Offset: 0x500
	// Line 893, Address: 0x102862c, Func Offset: 0x50c
	// Line 898, Address: 0x1028634, Func Offset: 0x514
	// Line 899, Address: 0x1028640, Func Offset: 0x520
	// Line 900, Address: 0x1028670, Func Offset: 0x550
	// Line 904, Address: 0x102867c, Func Offset: 0x55c
	// Func End, Address: 0x102868c, Func Offset: 0x56c
}

// 
// Start address: 0x1028690
void egg1coli_set_body(_anon1* pActwk)
{
	short subact;
	// Line 907, Address: 0x1028690, Func Offset: 0
	// Line 910, Address: 0x102869c, Func Offset: 0xc
	// Line 911, Address: 0x10286a8, Func Offset: 0x18
	// Line 913, Address: 0x10286b4, Func Offset: 0x24
	// Line 914, Address: 0x102870c, Func Offset: 0x7c
	// Line 915, Address: 0x1028734, Func Offset: 0xa4
	// Line 916, Address: 0x102875c, Func Offset: 0xcc
	// Line 917, Address: 0x1028788, Func Offset: 0xf8
	// Line 918, Address: 0x10287b0, Func Offset: 0x120
	// Line 920, Address: 0x10287d8, Func Offset: 0x148
	// Line 921, Address: 0x1028830, Func Offset: 0x1a0
	// Line 922, Address: 0x1028858, Func Offset: 0x1c8
	// Line 923, Address: 0x1028880, Func Offset: 0x1f0
	// Line 924, Address: 0x10288ac, Func Offset: 0x21c
	// Line 925, Address: 0x10288d4, Func Offset: 0x244
	// Line 926, Address: 0x10288fc, Func Offset: 0x26c
	// Func End, Address: 0x102890c, Func Offset: 0x27c
}

// 
// Start address: 0x1028910
void egg1coli_set_arm(short subact)
{
	// Line 929, Address: 0x1028910, Func Offset: 0
	// Line 930, Address: 0x1028918, Func Offset: 0x8
	// Line 931, Address: 0x1028968, Func Offset: 0x58
	// Line 932, Address: 0x1028994, Func Offset: 0x84
	// Line 933, Address: 0x10289c0, Func Offset: 0xb0
	// Func End, Address: 0x10289cc, Func Offset: 0xbc
}

// 
// Start address: 0x10289d0
void egg1coli_set_arm_l(_anon1* pActwk)
{
	// Line 936, Address: 0x10289d0, Func Offset: 0
	// Line 937, Address: 0x10289dc, Func Offset: 0xc
	// Line 938, Address: 0x1028a10, Func Offset: 0x40
	// Line 939, Address: 0x1028a1c, Func Offset: 0x4c
	// Func End, Address: 0x1028a2c, Func Offset: 0x5c
}

// 
// Start address: 0x1028a30
void egg1coli_set_arm_r(_anon1* pActwk)
{
	// Line 942, Address: 0x1028a30, Func Offset: 0
	// Line 943, Address: 0x1028a3c, Func Offset: 0xc
	// Line 944, Address: 0x1028a70, Func Offset: 0x40
	// Line 945, Address: 0x1028a7c, Func Offset: 0x4c
	// Func End, Address: 0x1028a8c, Func Offset: 0x5c
}

// 
// Start address: 0x1028a90
void egg1coli_set(_anon1* pActwk)
{
	// Line 948, Address: 0x1028a90, Func Offset: 0
	// Line 949, Address: 0x1028a9c, Func Offset: 0xc
	// Line 950, Address: 0x1028ab4, Func Offset: 0x24
	// Line 951, Address: 0x1028ac0, Func Offset: 0x30
	// Line 952, Address: 0x1028ad8, Func Offset: 0x48
	// Line 953, Address: 0x1028ae4, Func Offset: 0x54
	// Line 954, Address: 0x1028afc, Func Offset: 0x6c
	// Line 955, Address: 0x1028b08, Func Offset: 0x78
	// Func End, Address: 0x1028b18, Func Offset: 0x88
}

// 
// Start address: 0x1028b20
int egg1_ini(_anon1* pActwk)
{
	// Line 960, Address: 0x1028b20, Func Offset: 0
	// Line 961, Address: 0x1028b2c, Func Offset: 0xc
	// Line 962, Address: 0x1028b38, Func Offset: 0x18
	// Line 964, Address: 0x1028b44, Func Offset: 0x24
	// Line 965, Address: 0x1028b4c, Func Offset: 0x2c
	// Line 966, Address: 0x1028b58, Func Offset: 0x38
	// Line 967, Address: 0x1028b64, Func Offset: 0x44
	// Line 968, Address: 0x1028b70, Func Offset: 0x50
	// Line 969, Address: 0x1028b7c, Func Offset: 0x5c
	// Line 970, Address: 0x1028b88, Func Offset: 0x68
	// Line 971, Address: 0x1028b94, Func Offset: 0x74
	// Line 973, Address: 0x1028ba4, Func Offset: 0x84
	// Line 974, Address: 0x1028bb0, Func Offset: 0x90
	// Line 975, Address: 0x1028bb8, Func Offset: 0x98
	// Line 976, Address: 0x1028bc0, Func Offset: 0xa0
	// Line 977, Address: 0x1028bc8, Func Offset: 0xa8
	// Line 979, Address: 0x1028bd0, Func Offset: 0xb0
	// Line 980, Address: 0x1028bdc, Func Offset: 0xbc
	// Line 982, Address: 0x1028be8, Func Offset: 0xc8
	// Line 983, Address: 0x1028bf4, Func Offset: 0xd4
	// Line 984, Address: 0x1028bf8, Func Offset: 0xd8
	// Func End, Address: 0x1028c08, Func Offset: 0xe8
}

// 
// Start address: 0x1028c10
int make_act(_anon1* pActwk, _anon1** subActwk)
{
	int ret;
	_anon1* ppActwk;
	// Line 1004, Address: 0x1028c10, Func Offset: 0
	// Line 1008, Address: 0x1028c24, Func Offset: 0x14
	// Line 1010, Address: 0x1028c38, Func Offset: 0x28
	// Line 1011, Address: 0x1028c44, Func Offset: 0x34
	// Line 1012, Address: 0x1028c54, Func Offset: 0x44
	// Line 1013, Address: 0x1028c64, Func Offset: 0x54
	// Line 1014, Address: 0x1028c68, Func Offset: 0x58
	// Line 1016, Address: 0x1028c70, Func Offset: 0x60
	// Line 1017, Address: 0x1028c74, Func Offset: 0x64
	// Line 1018, Address: 0x1028c78, Func Offset: 0x68
	// Func End, Address: 0x1028c8c, Func Offset: 0x7c
}

// 
// Start address: 0x1028c90
void egg1_make_act(_anon1* pActwk)
{
	_anon1* subActwk;
	_anon1* disActwk;
	_anon1* bodyActwk;
	short subact;
	// Line 1021, Address: 0x1028c90, Func Offset: 0
	// Line 1026, Address: 0x1028ca8, Func Offset: 0x18
	// Line 1027, Address: 0x1028cc0, Func Offset: 0x30
	// Line 1028, Address: 0x1028d00, Func Offset: 0x70
	// Line 1029, Address: 0x1028d40, Func Offset: 0xb0
	// Line 1030, Address: 0x1028d4c, Func Offset: 0xbc
	// Line 1031, Address: 0x1028d58, Func Offset: 0xc8
	// Line 1032, Address: 0x1028d60, Func Offset: 0xd0
	// Line 1036, Address: 0x1028d68, Func Offset: 0xd8
	// Line 1037, Address: 0x1028d80, Func Offset: 0xf0
	// Line 1038, Address: 0x1028dbc, Func Offset: 0x12c
	// Line 1039, Address: 0x1028df8, Func Offset: 0x168
	// Line 1040, Address: 0x1028e04, Func Offset: 0x174
	// Line 1041, Address: 0x1028e10, Func Offset: 0x180
	// Line 1044, Address: 0x1028e18, Func Offset: 0x188
	// Line 1045, Address: 0x1028e30, Func Offset: 0x1a0
	// Line 1046, Address: 0x1028e6c, Func Offset: 0x1dc
	// Line 1047, Address: 0x1028ea8, Func Offset: 0x218
	// Line 1048, Address: 0x1028eb4, Func Offset: 0x224
	// Line 1049, Address: 0x1028ec0, Func Offset: 0x230
	// Line 1052, Address: 0x1028ec8, Func Offset: 0x238
	// Line 1053, Address: 0x1028ee0, Func Offset: 0x250
	// Line 1054, Address: 0x1028f1c, Func Offset: 0x28c
	// Line 1055, Address: 0x1028f58, Func Offset: 0x2c8
	// Line 1056, Address: 0x1028f64, Func Offset: 0x2d4
	// Line 1058, Address: 0x1028f70, Func Offset: 0x2e0
	// Line 1059, Address: 0x1028f74, Func Offset: 0x2e4
	// Line 1063, Address: 0x1028fb0, Func Offset: 0x320
	// Line 1064, Address: 0x1028fc8, Func Offset: 0x338
	// Line 1065, Address: 0x1029004, Func Offset: 0x374
	// Line 1066, Address: 0x1029040, Func Offset: 0x3b0
	// Line 1067, Address: 0x102904c, Func Offset: 0x3bc
	// Line 1068, Address: 0x1029058, Func Offset: 0x3c8
	// Line 1069, Address: 0x1029068, Func Offset: 0x3d8
	// Line 1072, Address: 0x102906c, Func Offset: 0x3dc
	// Line 1073, Address: 0x1029084, Func Offset: 0x3f4
	// Line 1074, Address: 0x10290c0, Func Offset: 0x430
	// Line 1075, Address: 0x10290fc, Func Offset: 0x46c
	// Line 1076, Address: 0x1029108, Func Offset: 0x478
	// Line 1077, Address: 0x1029114, Func Offset: 0x484
	// Line 1078, Address: 0x1029124, Func Offset: 0x494
	// Line 1081, Address: 0x1029128, Func Offset: 0x498
	// Line 1082, Address: 0x1029140, Func Offset: 0x4b0
	// Line 1083, Address: 0x102917c, Func Offset: 0x4ec
	// Line 1084, Address: 0x10291b8, Func Offset: 0x528
	// Line 1085, Address: 0x10291c4, Func Offset: 0x534
	// Line 1086, Address: 0x10291d0, Func Offset: 0x540
	// Line 1089, Address: 0x10291e0, Func Offset: 0x550
	// Line 1090, Address: 0x10291e4, Func Offset: 0x554
	// Line 1094, Address: 0x1029220, Func Offset: 0x590
	// Line 1095, Address: 0x1029238, Func Offset: 0x5a8
	// Line 1096, Address: 0x1029274, Func Offset: 0x5e4
	// Line 1098, Address: 0x10292d4, Func Offset: 0x644
	// Line 1099, Address: 0x10292e0, Func Offset: 0x650
	// Line 1100, Address: 0x10292ec, Func Offset: 0x65c
	// Line 1103, Address: 0x10292f0, Func Offset: 0x660
	// Line 1104, Address: 0x1029308, Func Offset: 0x678
	// Line 1105, Address: 0x1029344, Func Offset: 0x6b4
	// Line 1106, Address: 0x1029350, Func Offset: 0x6c0
	// Line 1107, Address: 0x102938c, Func Offset: 0x6fc
	// Line 1108, Address: 0x10293c8, Func Offset: 0x738
	// Line 1109, Address: 0x10293d4, Func Offset: 0x744
	// Line 1110, Address: 0x10293e0, Func Offset: 0x750
	// Line 1113, Address: 0x10293e8, Func Offset: 0x758
	// Line 1114, Address: 0x1029400, Func Offset: 0x770
	// Line 1115, Address: 0x102943c, Func Offset: 0x7ac
	// Line 1116, Address: 0x1029478, Func Offset: 0x7e8
	// Line 1117, Address: 0x1029484, Func Offset: 0x7f4
	// Line 1118, Address: 0x1029494, Func Offset: 0x804
	// Line 1119, Address: 0x10294a0, Func Offset: 0x810
	// Line 1122, Address: 0x10294a8, Func Offset: 0x818
	// Line 1123, Address: 0x10294c0, Func Offset: 0x830
	// Line 1124, Address: 0x10294fc, Func Offset: 0x86c
	// Line 1125, Address: 0x1029538, Func Offset: 0x8a8
	// Line 1126, Address: 0x1029544, Func Offset: 0x8b4
	// Line 1127, Address: 0x1029550, Func Offset: 0x8c0
	// Line 1128, Address: 0x1029558, Func Offset: 0x8c8
	// Line 1132, Address: 0x1029594, Func Offset: 0x904
	// Line 1133, Address: 0x10295a0, Func Offset: 0x910
	// Line 1134, Address: 0x10295cc, Func Offset: 0x93c
	// Line 1137, Address: 0x10295f8, Func Offset: 0x968
	// Line 1138, Address: 0x1029610, Func Offset: 0x980
	// Line 1139, Address: 0x102966c, Func Offset: 0x9dc
	// Line 1140, Address: 0x1029674, Func Offset: 0x9e4
	// Line 1141, Address: 0x1029680, Func Offset: 0x9f0
	// Line 1142, Address: 0x102968c, Func Offset: 0x9fc
	// Line 1143, Address: 0x102969c, Func Offset: 0xa0c
	// Line 1146, Address: 0x10296a4, Func Offset: 0xa14
	// Line 1147, Address: 0x10296bc, Func Offset: 0xa2c
	// Line 1148, Address: 0x10296f8, Func Offset: 0xa68
	// Line 1149, Address: 0x1029734, Func Offset: 0xaa4
	// Line 1150, Address: 0x1029740, Func Offset: 0xab0
	// Line 1151, Address: 0x1029750, Func Offset: 0xac0
	// Line 1152, Address: 0x102975c, Func Offset: 0xacc
	// Line 1153, Address: 0x102976c, Func Offset: 0xadc
	// Line 1156, Address: 0x1029774, Func Offset: 0xae4
	// Line 1157, Address: 0x102978c, Func Offset: 0xafc
	// Line 1158, Address: 0x10297c8, Func Offset: 0xb38
	// Line 1159, Address: 0x1029804, Func Offset: 0xb74
	// Line 1160, Address: 0x1029810, Func Offset: 0xb80
	// Line 1161, Address: 0x102981c, Func Offset: 0xb8c
	// Line 1162, Address: 0x102982c, Func Offset: 0xb9c
	// Line 1164, Address: 0x1029834, Func Offset: 0xba4
	// Line 1166, Address: 0x1029870, Func Offset: 0xbe0
	// Line 1167, Address: 0x102987c, Func Offset: 0xbec
	// Line 1168, Address: 0x1029888, Func Offset: 0xbf8
	// Func End, Address: 0x10298a4, Func Offset: 0xc14
}

// 
// Start address: 0x10298b0
int egg1_01(_anon1* pActwk)
{
	// Line 1173, Address: 0x10298b0, Func Offset: 0
	// Line 1174, Address: 0x10298b8, Func Offset: 0x8
	// Line 1175, Address: 0x10298c4, Func Offset: 0x14
	// Line 1177, Address: 0x10298d0, Func Offset: 0x20
	// Line 1178, Address: 0x10298f8, Func Offset: 0x48
	// Line 1180, Address: 0x1029934, Func Offset: 0x84
	// Line 1182, Address: 0x1029950, Func Offset: 0xa0
	// Line 1183, Address: 0x102995c, Func Offset: 0xac
	// Line 1184, Address: 0x1029968, Func Offset: 0xb8
	// Line 1185, Address: 0x1029974, Func Offset: 0xc4
	// Line 1186, Address: 0x1029980, Func Offset: 0xd0
	// Line 1187, Address: 0x102998c, Func Offset: 0xdc
	// Line 1190, Address: 0x1029994, Func Offset: 0xe4
	// Line 1191, Address: 0x10299b8, Func Offset: 0x108
	// Line 1193, Address: 0x10299dc, Func Offset: 0x12c
	// Line 1194, Address: 0x10299e0, Func Offset: 0x130
	// Func End, Address: 0x10299ec, Func Offset: 0x13c
}

// 
// Start address: 0x10299f0
int egg1_06(_anon1* pActwk)
{
	// Line 1199, Address: 0x10299f0, Func Offset: 0
	// Line 1201, Address: 0x10299fc, Func Offset: 0xc
	// Line 1202, Address: 0x1029a10, Func Offset: 0x20
	// Line 1205, Address: 0x1029a2c, Func Offset: 0x3c
	// Line 1207, Address: 0x1029a38, Func Offset: 0x48
	// Line 1208, Address: 0x1029a44, Func Offset: 0x54
	// Line 1210, Address: 0x1029a50, Func Offset: 0x60
	// Line 1211, Address: 0x1029a54, Func Offset: 0x64
	// Func End, Address: 0x1029a64, Func Offset: 0x74
}

// 
// Start address: 0x1029a70
int egg1_wait(_anon1* pActwk)
{
	// Line 1216, Address: 0x1029a70, Func Offset: 0
	// Line 1217, Address: 0x1029a7c, Func Offset: 0xc
	// Line 1218, Address: 0x1029a8c, Func Offset: 0x1c
	// Line 1220, Address: 0x1029aa4, Func Offset: 0x34
	// Line 1221, Address: 0x1029aac, Func Offset: 0x3c
	// Line 1222, Address: 0x1029ab8, Func Offset: 0x48
	// Line 1223, Address: 0x1029ac4, Func Offset: 0x54
	// Line 1224, Address: 0x1029ad0, Func Offset: 0x60
	// Line 1226, Address: 0x1029adc, Func Offset: 0x6c
	// Line 1227, Address: 0x1029ae0, Func Offset: 0x70
	// Func End, Address: 0x1029af0, Func Offset: 0x80
}

// 
// Start address: 0x1029af0
int egg1_02(_anon1* pActwk)
{
	short subact;
	short egg1acttbl[20];
	// Line 1235, Address: 0x1029af0, Func Offset: 0
	// Line 1237, Address: 0x1029b00, Func Offset: 0x10
	// Line 1252, Address: 0x1029b34, Func Offset: 0x44
	// Line 1253, Address: 0x1029b44, Func Offset: 0x54
	// Line 1254, Address: 0x1029b78, Func Offset: 0x88
	// Line 1255, Address: 0x1029b84, Func Offset: 0x94
	// Line 1256, Address: 0x1029bb0, Func Offset: 0xc0
	// Line 1259, Address: 0x1029bc8, Func Offset: 0xd8
	// Line 1260, Address: 0x1029bd0, Func Offset: 0xe0
	// Line 1261, Address: 0x1029bd8, Func Offset: 0xe8
	// Line 1262, Address: 0x1029be0, Func Offset: 0xf0
	// Line 1263, Address: 0x1029be8, Func Offset: 0xf8
	// Line 1265, Address: 0x1029bf0, Func Offset: 0x100
	// Line 1266, Address: 0x1029bfc, Func Offset: 0x10c
	// Line 1267, Address: 0x1029c0c, Func Offset: 0x11c
	// Line 1268, Address: 0x1029c18, Func Offset: 0x128
	// Line 1271, Address: 0x1029c28, Func Offset: 0x138
	// Line 1272, Address: 0x1029c38, Func Offset: 0x148
	// Line 1273, Address: 0x1029c64, Func Offset: 0x174
	// Line 1274, Address: 0x1029c6c, Func Offset: 0x17c
	// Line 1275, Address: 0x1029ca0, Func Offset: 0x1b0
	// Line 1276, Address: 0x1029ce0, Func Offset: 0x1f0
	// Line 1277, Address: 0x1029d24, Func Offset: 0x234
	// Line 1278, Address: 0x1029d28, Func Offset: 0x238
	// Func End, Address: 0x1029d3c, Func Offset: 0x24c
}

// 
// Start address: 0x1029d40
int egg1_03(_anon1* pActwk)
{
	short subact;
	// Line 1283, Address: 0x1029d40, Func Offset: 0
	// Line 1286, Address: 0x1029d50, Func Offset: 0x10
	// Line 1288, Address: 0x1029d60, Func Offset: 0x20
	// Line 1290, Address: 0x1029d6c, Func Offset: 0x2c
	// Line 1293, Address: 0x1029d84, Func Offset: 0x44
	// Line 1294, Address: 0x1029d94, Func Offset: 0x54
	// Line 1296, Address: 0x1029da4, Func Offset: 0x64
	// Line 1297, Address: 0x1029db0, Func Offset: 0x70
	// Line 1298, Address: 0x1029db8, Func Offset: 0x78
	// Line 1299, Address: 0x1029dc0, Func Offset: 0x80
	// Line 1300, Address: 0x1029dc8, Func Offset: 0x88
	// Line 1301, Address: 0x1029dd0, Func Offset: 0x90
	// Line 1302, Address: 0x1029de0, Func Offset: 0xa0
	// Line 1304, Address: 0x1029e0c, Func Offset: 0xcc
	// Line 1306, Address: 0x1029e24, Func Offset: 0xe4
	// Line 1307, Address: 0x1029e2c, Func Offset: 0xec
	// Line 1308, Address: 0x1029e38, Func Offset: 0xf8
	// Line 1309, Address: 0x1029e44, Func Offset: 0x104
	// Line 1310, Address: 0x1029e50, Func Offset: 0x110
	// Line 1312, Address: 0x1029e5c, Func Offset: 0x11c
	// Line 1313, Address: 0x1029e60, Func Offset: 0x120
	// Func End, Address: 0x1029e74, Func Offset: 0x134
}

// 
// Start address: 0x1029e80
int egg1_04(_anon1* pActwk)
{
	int ret;
	unsigned short sin;
	unsigned short cos;
	_anon2 sinl;
	_anon2 cosl;
	short xposi_bak;
	short yposi_bak;
	// Line 1318, Address: 0x1029e80, Func Offset: 0
	// Line 1319, Address: 0x1029e98, Func Offset: 0x18
	// Line 1324, Address: 0x1029e9c, Func Offset: 0x1c
	// Line 1326, Address: 0x1029eb0, Func Offset: 0x30
	// Line 1328, Address: 0x1029ec8, Func Offset: 0x48
	// Line 1329, Address: 0x1029ed8, Func Offset: 0x58
	// Line 1330, Address: 0x1029ef0, Func Offset: 0x70
	// Line 1331, Address: 0x1029efc, Func Offset: 0x7c
	// Line 1332, Address: 0x1029f08, Func Offset: 0x88
	// Line 1333, Address: 0x1029f28, Func Offset: 0xa8
	// Line 1334, Address: 0x1029f34, Func Offset: 0xb4
	// Line 1336, Address: 0x1029f48, Func Offset: 0xc8
	// Line 1337, Address: 0x1029f60, Func Offset: 0xe0
	// Line 1340, Address: 0x1029f7c, Func Offset: 0xfc
	// Line 1341, Address: 0x1029f84, Func Offset: 0x104
	// Line 1342, Address: 0x1029f98, Func Offset: 0x118
	// Line 1344, Address: 0x1029fac, Func Offset: 0x12c
	// Line 1345, Address: 0x1029fb8, Func Offset: 0x138
	// Line 1347, Address: 0x1029fc0, Func Offset: 0x140
	// Line 1348, Address: 0x1029fc8, Func Offset: 0x148
	// Line 1349, Address: 0x1029fd0, Func Offset: 0x150
	// Line 1350, Address: 0x1029fdc, Func Offset: 0x15c
	// Line 1352, Address: 0x1029fec, Func Offset: 0x16c
	// Line 1356, Address: 0x1029ff4, Func Offset: 0x174
	// Line 1359, Address: 0x102a004, Func Offset: 0x184
	// Line 1360, Address: 0x102a014, Func Offset: 0x194
	// Line 1361, Address: 0x102a024, Func Offset: 0x1a4
	// Line 1362, Address: 0x102a034, Func Offset: 0x1b4
	// Line 1363, Address: 0x102a044, Func Offset: 0x1c4
	// Line 1364, Address: 0x102a050, Func Offset: 0x1d0
	// Line 1365, Address: 0x102a058, Func Offset: 0x1d8
	// Line 1367, Address: 0x102a060, Func Offset: 0x1e0
	// Line 1368, Address: 0x102a074, Func Offset: 0x1f4
	// Line 1369, Address: 0x102a088, Func Offset: 0x208
	// Line 1371, Address: 0x102a0a4, Func Offset: 0x224
	// Line 1372, Address: 0x102a0b4, Func Offset: 0x234
	// Line 1373, Address: 0x102a0bc, Func Offset: 0x23c
	// Line 1374, Address: 0x102a0c4, Func Offset: 0x244
	// Line 1375, Address: 0x102a0cc, Func Offset: 0x24c
	// Line 1376, Address: 0x102a0d4, Func Offset: 0x254
	// Line 1377, Address: 0x102a0e0, Func Offset: 0x260
	// Line 1378, Address: 0x102a0ec, Func Offset: 0x26c
	// Line 1381, Address: 0x102a0f8, Func Offset: 0x278
	// Line 1382, Address: 0x102a0fc, Func Offset: 0x27c
	// Func End, Address: 0x102a118, Func Offset: 0x298
}

// 
// Start address: 0x102a120
int egg1_05(_anon1* pActwk)
{
	short temp0;
	short temp1;
	int ret;
	// Line 1387, Address: 0x102a120, Func Offset: 0
	// Line 1389, Address: 0x102a138, Func Offset: 0x18
	// Line 1391, Address: 0x102a13c, Func Offset: 0x1c
	// Line 1392, Address: 0x102a14c, Func Offset: 0x2c
	// Line 1393, Address: 0x102a15c, Func Offset: 0x3c
	// Line 1394, Address: 0x102a170, Func Offset: 0x50
	// Line 1395, Address: 0x102a184, Func Offset: 0x64
	// Line 1396, Address: 0x102a1a8, Func Offset: 0x88
	// Line 1399, Address: 0x102a1b4, Func Offset: 0x94
	// Line 1400, Address: 0x102a1bc, Func Offset: 0x9c
	// Line 1401, Address: 0x102a1c4, Func Offset: 0xa4
	// Line 1402, Address: 0x102a1c8, Func Offset: 0xa8
	// Line 1404, Address: 0x102a1d4, Func Offset: 0xb4
	// Line 1405, Address: 0x102a1d8, Func Offset: 0xb8
	// Func End, Address: 0x102a1f4, Func Offset: 0xd4
}

// 
// Start address: 0x102a200
void egg1body(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[9];
	// Line 1411, Address: 0x102a200, Func Offset: 0
	// Line 1412, Address: 0x102a20c, Func Offset: 0xc
	// Line 1425, Address: 0x102a238, Func Offset: 0x38
	// Line 1426, Address: 0x102a27c, Func Offset: 0x7c
	// Line 1427, Address: 0x102a288, Func Offset: 0x88
	// Func End, Address: 0x102a298, Func Offset: 0x98
}

// 
// Start address: 0x102a2a0
void spd_normal(_anon1* pActwk)
{
	short subact1;
	short subact2;
	// Line 1431, Address: 0x102a2a0, Func Offset: 0
	// Line 1434, Address: 0x102a2b0, Func Offset: 0x10
	// Line 1435, Address: 0x102a2c0, Func Offset: 0x20
	// Line 1436, Address: 0x102a2e8, Func Offset: 0x48
	// Line 1437, Address: 0x102a314, Func Offset: 0x74
	// Line 1438, Address: 0x102a33c, Func Offset: 0x9c
	// Line 1439, Address: 0x102a364, Func Offset: 0xc4
	// Line 1440, Address: 0x102a390, Func Offset: 0xf0
	// Line 1441, Address: 0x102a3b8, Func Offset: 0x118
	// Line 1443, Address: 0x102a3e0, Func Offset: 0x140
	// Line 1444, Address: 0x102a3f0, Func Offset: 0x150
	// Line 1445, Address: 0x102a418, Func Offset: 0x178
	// Line 1446, Address: 0x102a444, Func Offset: 0x1a4
	// Line 1447, Address: 0x102a46c, Func Offset: 0x1cc
	// Line 1448, Address: 0x102a494, Func Offset: 0x1f4
	// Line 1449, Address: 0x102a4c0, Func Offset: 0x220
	// Line 1450, Address: 0x102a4e8, Func Offset: 0x248
	// Line 1452, Address: 0x102a510, Func Offset: 0x270
	// Line 1453, Address: 0x102a520, Func Offset: 0x280
	// Line 1454, Address: 0x102a54c, Func Offset: 0x2ac
	// Line 1455, Address: 0x102a578, Func Offset: 0x2d8
	// Line 1457, Address: 0x102a580, Func Offset: 0x2e0
	// Line 1458, Address: 0x102a5ac, Func Offset: 0x30c
	// Line 1459, Address: 0x102a5d8, Func Offset: 0x338
	// Line 1460, Address: 0x102a604, Func Offset: 0x364
	// Line 1463, Address: 0x102a630, Func Offset: 0x390
	// Line 1464, Address: 0x102a65c, Func Offset: 0x3bc
	// Line 1466, Address: 0x102a664, Func Offset: 0x3c4
	// Line 1467, Address: 0x102a690, Func Offset: 0x3f0
	// Line 1468, Address: 0x102a6bc, Func Offset: 0x41c
	// Line 1469, Address: 0x102a6e8, Func Offset: 0x448
	// Line 1471, Address: 0x102a714, Func Offset: 0x474
	// Func End, Address: 0x102a728, Func Offset: 0x488
}

// 
// Start address: 0x102a730
int egg1body_ini(_anon1* pActwk)
{
	// Line 1475, Address: 0x102a730, Func Offset: 0
	// Line 1476, Address: 0x102a73c, Func Offset: 0xc
	// Line 1477, Address: 0x102a744, Func Offset: 0x14
	// Line 1478, Address: 0x102a750, Func Offset: 0x20
	// Line 1479, Address: 0x102a75c, Func Offset: 0x2c
	// Line 1480, Address: 0x102a768, Func Offset: 0x38
	// Line 1481, Address: 0x102a774, Func Offset: 0x44
	// Line 1482, Address: 0x102a780, Func Offset: 0x50
	// Line 1483, Address: 0x102a790, Func Offset: 0x60
	// Line 1484, Address: 0x102a79c, Func Offset: 0x6c
	// Line 1485, Address: 0x102a7a0, Func Offset: 0x70
	// Func End, Address: 0x102a7b0, Func Offset: 0x80
}

// 
// Start address: 0x102a7b0
int egg1body_08(_anon1* pActwk)
{
	// Line 1490, Address: 0x102a7b0, Func Offset: 0
	// Line 1491, Address: 0x102a7bc, Func Offset: 0xc
	// Line 1492, Address: 0x102a7cc, Func Offset: 0x1c
	// Line 1494, Address: 0x102a7dc, Func Offset: 0x2c
	// Line 1495, Address: 0x102a7e8, Func Offset: 0x38
	// Line 1496, Address: 0x102a7f8, Func Offset: 0x48
	// Line 1498, Address: 0x102a808, Func Offset: 0x58
	// Line 1499, Address: 0x102a80c, Func Offset: 0x5c
	// Func End, Address: 0x102a81c, Func Offset: 0x6c
}

// 
// Start address: 0x102a820
void bup_set(_anon1* legActwk)
{
	short subact;
	// Line 1504, Address: 0x102a820, Func Offset: 0
	// Line 1507, Address: 0x102a82c, Func Offset: 0xc
	// Line 1508, Address: 0x102a83c, Func Offset: 0x1c
	// Line 1509, Address: 0x102a84c, Func Offset: 0x2c
	// Line 1510, Address: 0x102a878, Func Offset: 0x58
	// Line 1511, Address: 0x102a8a4, Func Offset: 0x84
	// Line 1512, Address: 0x102a8d0, Func Offset: 0xb0
	// Func End, Address: 0x102a8e0, Func Offset: 0xc0
}

// 
// Start address: 0x102a8e0
void bup_clr(_anon1* legActwk)
{
	short subact;
	// Line 1517, Address: 0x102a8e0, Func Offset: 0
	// Line 1520, Address: 0x102a8ec, Func Offset: 0xc
	// Line 1521, Address: 0x102a8fc, Func Offset: 0x1c
	// Line 1522, Address: 0x102a90c, Func Offset: 0x2c
	// Line 1523, Address: 0x102a938, Func Offset: 0x58
	// Line 1524, Address: 0x102a964, Func Offset: 0x84
	// Line 1525, Address: 0x102a990, Func Offset: 0xb0
	// Func End, Address: 0x102a9a0, Func Offset: 0xc0
}

// 
// Start address: 0x102a9a0
void grd_set(_anon1* legActwk)
{
	short subact;
	// Line 1530, Address: 0x102a9a0, Func Offset: 0
	// Line 1533, Address: 0x102a9ac, Func Offset: 0xc
	// Line 1534, Address: 0x102a9bc, Func Offset: 0x1c
	// Line 1535, Address: 0x102a9cc, Func Offset: 0x2c
	// Line 1536, Address: 0x102a9f8, Func Offset: 0x58
	// Line 1537, Address: 0x102aa24, Func Offset: 0x84
	// Line 1538, Address: 0x102aa50, Func Offset: 0xb0
	// Func End, Address: 0x102aa60, Func Offset: 0xc0
}

// 
// Start address: 0x102aa60
void grd_clr(_anon1* legActwk)
{
	short subact;
	// Line 1543, Address: 0x102aa60, Func Offset: 0
	// Line 1546, Address: 0x102aa6c, Func Offset: 0xc
	// Line 1547, Address: 0x102aa7c, Func Offset: 0x1c
	// Line 1548, Address: 0x102aa8c, Func Offset: 0x2c
	// Line 1549, Address: 0x102aab8, Func Offset: 0x58
	// Line 1550, Address: 0x102aae4, Func Offset: 0x84
	// Line 1551, Address: 0x102ab10, Func Offset: 0xb0
	// Func End, Address: 0x102ab20, Func Offset: 0xc0
}

// 
// Start address: 0x102ab20
int egg1body_01(_anon1* pActwk)
{
	short subact;
	// Line 1556, Address: 0x102ab20, Func Offset: 0
	// Line 1559, Address: 0x102ab30, Func Offset: 0x10
	// Line 1560, Address: 0x102ab40, Func Offset: 0x20
	// Line 1561, Address: 0x102ab68, Func Offset: 0x48
	// Line 1562, Address: 0x102ab94, Func Offset: 0x74
	// Line 1563, Address: 0x102abbc, Func Offset: 0x9c
	// Line 1564, Address: 0x102abe8, Func Offset: 0xc8
	// Line 1566, Address: 0x102ac10, Func Offset: 0xf0
	// Line 1567, Address: 0x102ac20, Func Offset: 0x100
	// Line 1568, Address: 0x102ac48, Func Offset: 0x128
	// Line 1570, Address: 0x102ac7c, Func Offset: 0x15c
	// Line 1571, Address: 0x102ac94, Func Offset: 0x174
	// Line 1572, Address: 0x102aca4, Func Offset: 0x184
	// Line 1573, Address: 0x102acd8, Func Offset: 0x1b8
	// Line 1575, Address: 0x102ace0, Func Offset: 0x1c0
	// Line 1576, Address: 0x102acf0, Func Offset: 0x1d0
	// Line 1577, Address: 0x102acf4, Func Offset: 0x1d4
	// Func End, Address: 0x102ad08, Func Offset: 0x1e8
}

// 
// Start address: 0x102ad10
int egg1body_02(_anon1* pActwk)
{
	short subact;
	// Line 1582, Address: 0x102ad10, Func Offset: 0
	// Line 1585, Address: 0x102ad20, Func Offset: 0x10
	// Line 1586, Address: 0x102ad30, Func Offset: 0x20
	// Line 1587, Address: 0x102ad5c, Func Offset: 0x4c
	// Line 1588, Address: 0x102ad6c, Func Offset: 0x5c
	// Line 1590, Address: 0x102ada0, Func Offset: 0x90
	// Line 1591, Address: 0x102adcc, Func Offset: 0xbc
	// Line 1593, Address: 0x102add8, Func Offset: 0xc8
	// Line 1594, Address: 0x102ae04, Func Offset: 0xf4
	// Line 1597, Address: 0x102ae38, Func Offset: 0x128
	// Line 1598, Address: 0x102ae60, Func Offset: 0x150
	// Line 1600, Address: 0x102ae6c, Func Offset: 0x15c
	// Line 1603, Address: 0x102aea0, Func Offset: 0x190
	// Line 1604, Address: 0x102aec8, Func Offset: 0x1b8
	// Line 1607, Address: 0x102aed4, Func Offset: 0x1c4
	// Line 1608, Address: 0x102aefc, Func Offset: 0x1ec
	// Line 1609, Address: 0x102af24, Func Offset: 0x214
	// Line 1611, Address: 0x102af4c, Func Offset: 0x23c
	// Line 1612, Address: 0x102af5c, Func Offset: 0x24c
	// Line 1613, Address: 0x102af84, Func Offset: 0x274
	// Line 1614, Address: 0x102afac, Func Offset: 0x29c
	// Line 1615, Address: 0x102afd4, Func Offset: 0x2c4
	// Line 1616, Address: 0x102b000, Func Offset: 0x2f0
	// Line 1617, Address: 0x102b028, Func Offset: 0x318
	// Line 1618, Address: 0x102b054, Func Offset: 0x344
	// Line 1620, Address: 0x102b07c, Func Offset: 0x36c
	// Line 1621, Address: 0x102b08c, Func Offset: 0x37c
	// Line 1622, Address: 0x102b090, Func Offset: 0x380
	// Func End, Address: 0x102b0a4, Func Offset: 0x394
}

// 
// Start address: 0x102b0b0
int egg1body_03(_anon1* pActwk)
{
	short subact;
	// Line 1627, Address: 0x102b0b0, Func Offset: 0
	// Line 1630, Address: 0x102b0c0, Func Offset: 0x10
	// Line 1632, Address: 0x102b0d8, Func Offset: 0x28
	// Line 1633, Address: 0x102b0e8, Func Offset: 0x38
	// Line 1635, Address: 0x102b0f4, Func Offset: 0x44
	// Line 1636, Address: 0x102b104, Func Offset: 0x54
	// Line 1637, Address: 0x102b138, Func Offset: 0x88
	// Line 1638, Address: 0x102b144, Func Offset: 0x94
	// Line 1639, Address: 0x102b154, Func Offset: 0xa4
	// Line 1640, Address: 0x102b188, Func Offset: 0xd8
	// Line 1642, Address: 0x102b194, Func Offset: 0xe4
	// Line 1643, Address: 0x102b1a4, Func Offset: 0xf4
	// Line 1644, Address: 0x102b1b4, Func Offset: 0x104
	// Line 1645, Address: 0x102b1c4, Func Offset: 0x114
	// Line 1646, Address: 0x102b1c8, Func Offset: 0x118
	// Func End, Address: 0x102b1dc, Func Offset: 0x12c
}

// 
// Start address: 0x102b1e0
int egg1body_04(_anon1* pActwk)
{
	short subact1;
	short subact2;
	short subact3;
	short subact4;
	// Line 1651, Address: 0x102b1e0, Func Offset: 0
	// Line 1657, Address: 0x102b1fc, Func Offset: 0x1c
	// Line 1660, Address: 0x102b214, Func Offset: 0x34
	// Line 1661, Address: 0x102b224, Func Offset: 0x44
	// Line 1662, Address: 0x102b234, Func Offset: 0x54
	// Line 1666, Address: 0x102b23c, Func Offset: 0x5c
	// Line 1667, Address: 0x102b250, Func Offset: 0x70
	// Line 1669, Address: 0x102b260, Func Offset: 0x80
	// Line 1670, Address: 0x102b294, Func Offset: 0xb4
	// Line 1671, Address: 0x102b2a0, Func Offset: 0xc0
	// Line 1672, Address: 0x102b2d4, Func Offset: 0xf4
	// Line 1674, Address: 0x102b2e0, Func Offset: 0x100
	// Line 1675, Address: 0x102b30c, Func Offset: 0x12c
	// Line 1676, Address: 0x102b338, Func Offset: 0x158
	// Line 1677, Address: 0x102b364, Func Offset: 0x184
	// Line 1678, Address: 0x102b390, Func Offset: 0x1b0
	// Line 1679, Address: 0x102b3bc, Func Offset: 0x1dc
	// Line 1680, Address: 0x102b3e8, Func Offset: 0x208
	// Line 1682, Address: 0x102b414, Func Offset: 0x234
	// Line 1685, Address: 0x102b430, Func Offset: 0x250
	// Line 1688, Address: 0x102b43c, Func Offset: 0x25c
	// Line 1689, Address: 0x102b44c, Func Offset: 0x26c
	// Line 1691, Address: 0x102b45c, Func Offset: 0x27c
	// Line 1692, Address: 0x102b46c, Func Offset: 0x28c
	// Line 1693, Address: 0x102b47c, Func Offset: 0x29c
	// Line 1696, Address: 0x102b488, Func Offset: 0x2a8
	// Line 1698, Address: 0x102b4a0, Func Offset: 0x2c0
	// Line 1701, Address: 0x102b4b0, Func Offset: 0x2d0
	// Line 1702, Address: 0x102b4c0, Func Offset: 0x2e0
	// Line 1703, Address: 0x102b4e8, Func Offset: 0x308
	// Line 1704, Address: 0x102b510, Func Offset: 0x330
	// Line 1705, Address: 0x102b538, Func Offset: 0x358
	// Line 1706, Address: 0x102b564, Func Offset: 0x384
	// Line 1708, Address: 0x102b58c, Func Offset: 0x3ac
	// Line 1709, Address: 0x102b59c, Func Offset: 0x3bc
	// Line 1710, Address: 0x102b5c4, Func Offset: 0x3e4
	// Line 1711, Address: 0x102b5ec, Func Offset: 0x40c
	// Line 1712, Address: 0x102b614, Func Offset: 0x434
	// Line 1713, Address: 0x102b640, Func Offset: 0x460
	// Line 1715, Address: 0x102b668, Func Offset: 0x488
	// Line 1716, Address: 0x102b674, Func Offset: 0x494
	// Line 1719, Address: 0x102b67c, Func Offset: 0x49c
	// Line 1722, Address: 0x102b68c, Func Offset: 0x4ac
	// Line 1723, Address: 0x102b69c, Func Offset: 0x4bc
	// Line 1724, Address: 0x102b6c4, Func Offset: 0x4e4
	// Line 1725, Address: 0x102b6ec, Func Offset: 0x50c
	// Line 1726, Address: 0x102b714, Func Offset: 0x534
	// Line 1727, Address: 0x102b740, Func Offset: 0x560
	// Line 1729, Address: 0x102b768, Func Offset: 0x588
	// Line 1730, Address: 0x102b77c, Func Offset: 0x59c
	// Line 1731, Address: 0x102b7a4, Func Offset: 0x5c4
	// Line 1732, Address: 0x102b7cc, Func Offset: 0x5ec
	// Line 1733, Address: 0x102b7f4, Func Offset: 0x614
	// Line 1734, Address: 0x102b824, Func Offset: 0x644
	// Line 1736, Address: 0x102b84c, Func Offset: 0x66c
	// Line 1738, Address: 0x102b858, Func Offset: 0x678
	// Line 1739, Address: 0x102b860, Func Offset: 0x680
	// Func End, Address: 0x102b880, Func Offset: 0x6a0
}

// 
// Start address: 0x102b880
void armset_1(_anon1* pActwk)
{
	short subact1;
	short subact2;
	// Line 1744, Address: 0x102b880, Func Offset: 0
	// Line 1747, Address: 0x102b890, Func Offset: 0x10
	// Line 1748, Address: 0x102b8a0, Func Offset: 0x20
	// Line 1749, Address: 0x102b8cc, Func Offset: 0x4c
	// Line 1750, Address: 0x102b8f8, Func Offset: 0x78
	// Line 1752, Address: 0x102b900, Func Offset: 0x80
	// Line 1753, Address: 0x102b928, Func Offset: 0xa8
	// Line 1754, Address: 0x102b954, Func Offset: 0xd4
	// Line 1755, Address: 0x102b97c, Func Offset: 0xfc
	// Line 1758, Address: 0x102b9a0, Func Offset: 0x120
	// Line 1759, Address: 0x102b9cc, Func Offset: 0x14c
	// Line 1761, Address: 0x102b9d4, Func Offset: 0x154
	// Line 1762, Address: 0x102b9fc, Func Offset: 0x17c
	// Line 1763, Address: 0x102ba28, Func Offset: 0x1a8
	// Line 1764, Address: 0x102ba50, Func Offset: 0x1d0
	// Line 1766, Address: 0x102ba74, Func Offset: 0x1f4
	// Func End, Address: 0x102ba88, Func Offset: 0x208
}

// 
// Start address: 0x102ba90
void armset_2(_anon1* pActwk)
{
	short subact1;
	short subact2;
	// Line 1770, Address: 0x102ba90, Func Offset: 0
	// Line 1773, Address: 0x102baa0, Func Offset: 0x10
	// Line 1774, Address: 0x102bab0, Func Offset: 0x20
	// Line 1775, Address: 0x102badc, Func Offset: 0x4c
	// Line 1776, Address: 0x102bb08, Func Offset: 0x78
	// Line 1778, Address: 0x102bb10, Func Offset: 0x80
	// Line 1779, Address: 0x102bb38, Func Offset: 0xa8
	// Line 1780, Address: 0x102bb64, Func Offset: 0xd4
	// Line 1781, Address: 0x102bb8c, Func Offset: 0xfc
	// Line 1784, Address: 0x102bbb0, Func Offset: 0x120
	// Line 1785, Address: 0x102bbdc, Func Offset: 0x14c
	// Line 1787, Address: 0x102bbe4, Func Offset: 0x154
	// Line 1788, Address: 0x102bc0c, Func Offset: 0x17c
	// Line 1789, Address: 0x102bc38, Func Offset: 0x1a8
	// Line 1790, Address: 0x102bc60, Func Offset: 0x1d0
	// Line 1792, Address: 0x102bc84, Func Offset: 0x1f4
	// Func End, Address: 0x102bc98, Func Offset: 0x208
}

// 
// Start address: 0x102bca0
void armset_3(_anon1* pActwk)
{
	short subact1;
	short subact2;
	// Line 1796, Address: 0x102bca0, Func Offset: 0
	// Line 1799, Address: 0x102bcb0, Func Offset: 0x10
	// Line 1800, Address: 0x102bcc0, Func Offset: 0x20
	// Line 1801, Address: 0x102bcec, Func Offset: 0x4c
	// Line 1802, Address: 0x102bd18, Func Offset: 0x78
	// Line 1804, Address: 0x102bd20, Func Offset: 0x80
	// Line 1805, Address: 0x102bd48, Func Offset: 0xa8
	// Line 1806, Address: 0x102bd74, Func Offset: 0xd4
	// Line 1807, Address: 0x102bd9c, Func Offset: 0xfc
	// Line 1810, Address: 0x102bdc4, Func Offset: 0x124
	// Line 1811, Address: 0x102bdf0, Func Offset: 0x150
	// Line 1813, Address: 0x102bdf8, Func Offset: 0x158
	// Line 1814, Address: 0x102be20, Func Offset: 0x180
	// Line 1815, Address: 0x102be4c, Func Offset: 0x1ac
	// Line 1816, Address: 0x102be74, Func Offset: 0x1d4
	// Line 1818, Address: 0x102be9c, Func Offset: 0x1fc
	// Func End, Address: 0x102beb0, Func Offset: 0x210
}

// 
// Start address: 0x102beb0
void spd_up(_anon1* pActwk)
{
	short subact1;
	short subact2;
	// Line 1821, Address: 0x102beb0, Func Offset: 0
	// Line 1824, Address: 0x102bec0, Func Offset: 0x10
	// Line 1825, Address: 0x102bed0, Func Offset: 0x20
	// Line 1826, Address: 0x102bef8, Func Offset: 0x48
	// Line 1827, Address: 0x102bf24, Func Offset: 0x74
	// Line 1828, Address: 0x102bf4c, Func Offset: 0x9c
	// Line 1829, Address: 0x102bf74, Func Offset: 0xc4
	// Line 1830, Address: 0x102bfa0, Func Offset: 0xf0
	// Line 1831, Address: 0x102bfc8, Func Offset: 0x118
	// Line 1833, Address: 0x102bff4, Func Offset: 0x144
	// Line 1834, Address: 0x102c004, Func Offset: 0x154
	// Line 1835, Address: 0x102c02c, Func Offset: 0x17c
	// Line 1836, Address: 0x102c058, Func Offset: 0x1a8
	// Line 1837, Address: 0x102c080, Func Offset: 0x1d0
	// Line 1838, Address: 0x102c0a8, Func Offset: 0x1f8
	// Line 1839, Address: 0x102c0d4, Func Offset: 0x224
	// Line 1840, Address: 0x102c0fc, Func Offset: 0x24c
	// Line 1842, Address: 0x102c128, Func Offset: 0x278
	// Line 1843, Address: 0x102c138, Func Offset: 0x288
	// Line 1844, Address: 0x102c164, Func Offset: 0x2b4
	// Line 1845, Address: 0x102c190, Func Offset: 0x2e0
	// Line 1847, Address: 0x102c198, Func Offset: 0x2e8
	// Line 1848, Address: 0x102c1c4, Func Offset: 0x314
	// Line 1849, Address: 0x102c1f0, Func Offset: 0x340
	// Line 1850, Address: 0x102c21c, Func Offset: 0x36c
	// Line 1853, Address: 0x102c248, Func Offset: 0x398
	// Line 1854, Address: 0x102c274, Func Offset: 0x3c4
	// Line 1856, Address: 0x102c27c, Func Offset: 0x3cc
	// Line 1857, Address: 0x102c2a8, Func Offset: 0x3f8
	// Line 1858, Address: 0x102c2d4, Func Offset: 0x424
	// Line 1859, Address: 0x102c300, Func Offset: 0x450
	// Line 1861, Address: 0x102c32c, Func Offset: 0x47c
	// Func End, Address: 0x102c340, Func Offset: 0x490
}

// 
// Start address: 0x102c340
int egg1body_05(_anon1* pActwk)
{
	short subact1;
	short subact2;
	short subact3;
	short subact4;
	// Line 1867, Address: 0x102c340, Func Offset: 0
	// Line 1873, Address: 0x102c35c, Func Offset: 0x1c
	// Line 1876, Address: 0x102c374, Func Offset: 0x34
	// Line 1877, Address: 0x102c388, Func Offset: 0x48
	// Line 1878, Address: 0x102c398, Func Offset: 0x58
	// Line 1882, Address: 0x102c3a0, Func Offset: 0x60
	// Line 1883, Address: 0x102c3b0, Func Offset: 0x70
	// Line 1886, Address: 0x102c3c0, Func Offset: 0x80
	// Line 1887, Address: 0x102c3f4, Func Offset: 0xb4
	// Line 1888, Address: 0x102c400, Func Offset: 0xc0
	// Line 1889, Address: 0x102c434, Func Offset: 0xf4
	// Line 1891, Address: 0x102c440, Func Offset: 0x100
	// Line 1893, Address: 0x102c458, Func Offset: 0x118
	// Line 1894, Address: 0x102c468, Func Offset: 0x128
	// Line 1895, Address: 0x102c474, Func Offset: 0x134
	// Line 1899, Address: 0x102c47c, Func Offset: 0x13c
	// Line 1900, Address: 0x102c4a8, Func Offset: 0x168
	// Line 1901, Address: 0x102c4d4, Func Offset: 0x194
	// Line 1902, Address: 0x102c500, Func Offset: 0x1c0
	// Line 1903, Address: 0x102c52c, Func Offset: 0x1ec
	// Line 1904, Address: 0x102c558, Func Offset: 0x218
	// Line 1905, Address: 0x102c584, Func Offset: 0x244
	// Line 1907, Address: 0x102c5b0, Func Offset: 0x270
	// Line 1908, Address: 0x102c5cc, Func Offset: 0x28c
	// Line 1910, Address: 0x102c5d8, Func Offset: 0x298
	// Line 1911, Address: 0x102c5e8, Func Offset: 0x2a8
	// Line 1913, Address: 0x102c5f8, Func Offset: 0x2b8
	// Line 1914, Address: 0x102c608, Func Offset: 0x2c8
	// Line 1915, Address: 0x102c618, Func Offset: 0x2d8
	// Line 1920, Address: 0x102c624, Func Offset: 0x2e4
	// Line 1922, Address: 0x102c63c, Func Offset: 0x2fc
	// Line 1925, Address: 0x102c64c, Func Offset: 0x30c
	// Line 1926, Address: 0x102c65c, Func Offset: 0x31c
	// Line 1927, Address: 0x102c684, Func Offset: 0x344
	// Line 1928, Address: 0x102c6ac, Func Offset: 0x36c
	// Line 1929, Address: 0x102c6d4, Func Offset: 0x394
	// Line 1930, Address: 0x102c700, Func Offset: 0x3c0
	// Line 1932, Address: 0x102c728, Func Offset: 0x3e8
	// Line 1933, Address: 0x102c738, Func Offset: 0x3f8
	// Line 1934, Address: 0x102c760, Func Offset: 0x420
	// Line 1935, Address: 0x102c788, Func Offset: 0x448
	// Line 1936, Address: 0x102c7b0, Func Offset: 0x470
	// Line 1937, Address: 0x102c7dc, Func Offset: 0x49c
	// Line 1939, Address: 0x102c804, Func Offset: 0x4c4
	// Line 1940, Address: 0x102c810, Func Offset: 0x4d0
	// Line 1943, Address: 0x102c818, Func Offset: 0x4d8
	// Line 1946, Address: 0x102c828, Func Offset: 0x4e8
	// Line 1947, Address: 0x102c838, Func Offset: 0x4f8
	// Line 1948, Address: 0x102c860, Func Offset: 0x520
	// Line 1949, Address: 0x102c888, Func Offset: 0x548
	// Line 1950, Address: 0x102c8b0, Func Offset: 0x570
	// Line 1951, Address: 0x102c8e0, Func Offset: 0x5a0
	// Line 1953, Address: 0x102c908, Func Offset: 0x5c8
	// Line 1954, Address: 0x102c91c, Func Offset: 0x5dc
	// Line 1955, Address: 0x102c944, Func Offset: 0x604
	// Line 1956, Address: 0x102c96c, Func Offset: 0x62c
	// Line 1957, Address: 0x102c998, Func Offset: 0x658
	// Line 1958, Address: 0x102c9c8, Func Offset: 0x688
	// Line 1960, Address: 0x102c9f0, Func Offset: 0x6b0
	// Line 1962, Address: 0x102c9fc, Func Offset: 0x6bc
	// Line 1963, Address: 0x102ca00, Func Offset: 0x6c0
	// Func End, Address: 0x102ca20, Func Offset: 0x6e0
}

// 
// Start address: 0x102ca20
int egg1body_06(_anon1* pActwk)
{
	short subact1;
	short subact2;
	short subact3;
	short subact4;
	// Line 1968, Address: 0x102ca20, Func Offset: 0
	// Line 1974, Address: 0x102ca3c, Func Offset: 0x1c
	// Line 1977, Address: 0x102ca54, Func Offset: 0x34
	// Line 1978, Address: 0x102ca68, Func Offset: 0x48
	// Line 1979, Address: 0x102ca78, Func Offset: 0x58
	// Line 1983, Address: 0x102ca80, Func Offset: 0x60
	// Line 1984, Address: 0x102ca94, Func Offset: 0x74
	// Line 1987, Address: 0x102caa4, Func Offset: 0x84
	// Line 1989, Address: 0x102cabc, Func Offset: 0x9c
	// Line 1990, Address: 0x102cacc, Func Offset: 0xac
	// Line 1992, Address: 0x102cad8, Func Offset: 0xb8
	// Line 1995, Address: 0x102cb0c, Func Offset: 0xec
	// Line 1996, Address: 0x102cb38, Func Offset: 0x118
	// Line 1997, Address: 0x102cb60, Func Offset: 0x140
	// Line 1998, Address: 0x102cb8c, Func Offset: 0x16c
	// Line 2001, Address: 0x102cbb4, Func Offset: 0x194
	// Line 2002, Address: 0x102cbe8, Func Offset: 0x1c8
	// Line 2004, Address: 0x102cbf4, Func Offset: 0x1d4
	// Line 2005, Address: 0x102cc28, Func Offset: 0x208
	// Line 2007, Address: 0x102cc34, Func Offset: 0x214
	// Line 2008, Address: 0x102cc60, Func Offset: 0x240
	// Line 2009, Address: 0x102cc8c, Func Offset: 0x26c
	// Line 2010, Address: 0x102ccb8, Func Offset: 0x298
	// Line 2011, Address: 0x102cce4, Func Offset: 0x2c4
	// Line 2012, Address: 0x102cd10, Func Offset: 0x2f0
	// Line 2013, Address: 0x102cd3c, Func Offset: 0x31c
	// Line 2015, Address: 0x102cd68, Func Offset: 0x348
	// Line 2016, Address: 0x102cd78, Func Offset: 0x358
	// Line 2018, Address: 0x102cd88, Func Offset: 0x368
	// Line 2019, Address: 0x102cd98, Func Offset: 0x378
	// Line 2020, Address: 0x102cda8, Func Offset: 0x388
	// Line 2024, Address: 0x102cdb4, Func Offset: 0x394
	// Line 2026, Address: 0x102cdcc, Func Offset: 0x3ac
	// Line 2029, Address: 0x102cddc, Func Offset: 0x3bc
	// Line 2030, Address: 0x102cdec, Func Offset: 0x3cc
	// Line 2031, Address: 0x102ce18, Func Offset: 0x3f8
	// Line 2032, Address: 0x102ce40, Func Offset: 0x420
	// Line 2033, Address: 0x102ce68, Func Offset: 0x448
	// Line 2034, Address: 0x102ce94, Func Offset: 0x474
	// Line 2035, Address: 0x102cebc, Func Offset: 0x49c
	// Line 2036, Address: 0x102cee8, Func Offset: 0x4c8
	// Line 2038, Address: 0x102cf10, Func Offset: 0x4f0
	// Line 2039, Address: 0x102cf20, Func Offset: 0x500
	// Line 2040, Address: 0x102cf4c, Func Offset: 0x52c
	// Line 2041, Address: 0x102cf74, Func Offset: 0x554
	// Line 2042, Address: 0x102cf9c, Func Offset: 0x57c
	// Line 2043, Address: 0x102cfc4, Func Offset: 0x5a4
	// Line 2044, Address: 0x102cff4, Func Offset: 0x5d4
	// Line 2046, Address: 0x102d01c, Func Offset: 0x5fc
	// Line 2048, Address: 0x102d028, Func Offset: 0x608
	// Line 2051, Address: 0x102d030, Func Offset: 0x610
	// Line 2054, Address: 0x102d040, Func Offset: 0x620
	// Line 2055, Address: 0x102d054, Func Offset: 0x634
	// Line 2056, Address: 0x102d080, Func Offset: 0x660
	// Line 2057, Address: 0x102d0a8, Func Offset: 0x688
	// Line 2058, Address: 0x102d0d0, Func Offset: 0x6b0
	// Line 2059, Address: 0x102d0f8, Func Offset: 0x6d8
	// Line 2060, Address: 0x102d128, Func Offset: 0x708
	// Line 2062, Address: 0x102d150, Func Offset: 0x730
	// Line 2063, Address: 0x102d164, Func Offset: 0x744
	// Line 2064, Address: 0x102d190, Func Offset: 0x770
	// Line 2065, Address: 0x102d1b8, Func Offset: 0x798
	// Line 2066, Address: 0x102d1e0, Func Offset: 0x7c0
	// Line 2067, Address: 0x102d20c, Func Offset: 0x7ec
	// Line 2068, Address: 0x102d234, Func Offset: 0x814
	// Line 2069, Address: 0x102d260, Func Offset: 0x840
	// Line 2071, Address: 0x102d288, Func Offset: 0x868
	// Line 2074, Address: 0x102d294, Func Offset: 0x874
	// Line 2075, Address: 0x102d298, Func Offset: 0x878
	// Func End, Address: 0x102d2b8, Func Offset: 0x898
}

// 
// Start address: 0x102d2c0
int egg1body_07(_anon1* pActwk)
{
	int ret;
	short subact;
	// Line 2080, Address: 0x102d2c0, Func Offset: 0
	// Line 2081, Address: 0x102d2d4, Func Offset: 0x14
	// Line 2084, Address: 0x102d2d8, Func Offset: 0x18
	// Line 2086, Address: 0x102d2f0, Func Offset: 0x30
	// Line 2088, Address: 0x102d30c, Func Offset: 0x4c
	// Line 2089, Address: 0x102d31c, Func Offset: 0x5c
	// Line 2090, Address: 0x102d32c, Func Offset: 0x6c
	// Line 2092, Address: 0x102d358, Func Offset: 0x98
	// Line 2096, Address: 0x102d360, Func Offset: 0xa0
	// Line 2097, Address: 0x102d364, Func Offset: 0xa4
	// Line 2099, Address: 0x102d370, Func Offset: 0xb0
	// Line 2100, Address: 0x102d374, Func Offset: 0xb4
	// Func End, Address: 0x102d38c, Func Offset: 0xcc
}

// 
// Start address: 0x102d390
void arm_bom(_anon1* pActwk)
{
	_anon1* subActwk;
	// Line 2105, Address: 0x102d390, Func Offset: 0
	// Line 2108, Address: 0x102d39c, Func Offset: 0xc
	// Line 2110, Address: 0x102d3b0, Func Offset: 0x20
	// Line 2111, Address: 0x102d3bc, Func Offset: 0x2c
	// Line 2112, Address: 0x102d3c8, Func Offset: 0x38
	// Line 2113, Address: 0x102d3d8, Func Offset: 0x48
	// Line 2114, Address: 0x102d3e8, Func Offset: 0x58
	// Line 2116, Address: 0x102d3f4, Func Offset: 0x64
	// Func End, Address: 0x102d404, Func Offset: 0x74
}

// 
// Start address: 0x102d410
void egg1arm1(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[3];
	// Line 2124, Address: 0x102d410, Func Offset: 0
	// Line 2125, Address: 0x102d41c, Func Offset: 0xc
	// Line 2132, Address: 0x102d440, Func Offset: 0x30
	// Line 2133, Address: 0x102d484, Func Offset: 0x74
	// Line 2134, Address: 0x102d490, Func Offset: 0x80
	// Func End, Address: 0x102d4a0, Func Offset: 0x90
}

// 
// Start address: 0x102d4a0
int egg1arm1_ini(_anon1* pActwk)
{
	int ret;
	// Line 2138, Address: 0x102d4a0, Func Offset: 0
	// Line 2139, Address: 0x102d4b0, Func Offset: 0x10
	// Line 2141, Address: 0x102d4b4, Func Offset: 0x14
	// Line 2142, Address: 0x102d4bc, Func Offset: 0x1c
	// Line 2143, Address: 0x102d4c8, Func Offset: 0x28
	// Line 2144, Address: 0x102d4d4, Func Offset: 0x34
	// Line 2145, Address: 0x102d4e0, Func Offset: 0x40
	// Line 2146, Address: 0x102d4ec, Func Offset: 0x4c
	// Line 2147, Address: 0x102d4fc, Func Offset: 0x5c
	// Line 2148, Address: 0x102d508, Func Offset: 0x68
	// Line 2149, Address: 0x102d518, Func Offset: 0x78
	// Line 2150, Address: 0x102d51c, Func Offset: 0x7c
	// Func End, Address: 0x102d530, Func Offset: 0x90
}

// 
// Start address: 0x102d530
int egg1arm1_01(_anon1* pActwk)
{
	short subact;
	// Line 2154, Address: 0x102d530, Func Offset: 0
	// Line 2157, Address: 0x102d53c, Func Offset: 0xc
	// Line 2158, Address: 0x102d54c, Func Offset: 0x1c
	// Line 2159, Address: 0x102d58c, Func Offset: 0x5c
	// Line 2161, Address: 0x102d5cc, Func Offset: 0x9c
	// Line 2163, Address: 0x102d5e4, Func Offset: 0xb4
	// Line 2165, Address: 0x102d5f4, Func Offset: 0xc4
	// Line 2166, Address: 0x102d604, Func Offset: 0xd4
	// Line 2167, Address: 0x102d62c, Func Offset: 0xfc
	// Line 2168, Address: 0x102d634, Func Offset: 0x104
	// Line 2169, Address: 0x102d644, Func Offset: 0x114
	// Line 2170, Address: 0x102d670, Func Offset: 0x140
	// Line 2172, Address: 0x102d67c, Func Offset: 0x14c
	// Line 2174, Address: 0x102d694, Func Offset: 0x164
	// Line 2176, Address: 0x102d6a4, Func Offset: 0x174
	// Line 2177, Address: 0x102d6b4, Func Offset: 0x184
	// Line 2178, Address: 0x102d6dc, Func Offset: 0x1ac
	// Line 2179, Address: 0x102d6e4, Func Offset: 0x1b4
	// Line 2180, Address: 0x102d708, Func Offset: 0x1d8
	// Line 2182, Address: 0x102d714, Func Offset: 0x1e4
	// Line 2183, Address: 0x102d718, Func Offset: 0x1e8
	// Func End, Address: 0x102d728, Func Offset: 0x1f8
}

// 
// Start address: 0x102d730
int egg1arm1_02(_anon1* pActwk)
{
	int ret;
	// Line 2188, Address: 0x102d730, Func Offset: 0
	// Line 2189, Address: 0x102d740, Func Offset: 0x10
	// Line 2191, Address: 0x102d744, Func Offset: 0x14
	// Line 2194, Address: 0x102d75c, Func Offset: 0x2c
	// Line 2195, Address: 0x102d768, Func Offset: 0x38
	// Line 2196, Address: 0x102d774, Func Offset: 0x44
	// Line 2200, Address: 0x102d77c, Func Offset: 0x4c
	// Line 2201, Address: 0x102d78c, Func Offset: 0x5c
	// Line 2203, Address: 0x102d79c, Func Offset: 0x6c
	// Line 2204, Address: 0x102d7ac, Func Offset: 0x7c
	// Line 2205, Address: 0x102d7c4, Func Offset: 0x94
	// Line 2207, Address: 0x102d7dc, Func Offset: 0xac
	// Line 2209, Address: 0x102d7f8, Func Offset: 0xc8
	// Line 2210, Address: 0x102d7fc, Func Offset: 0xcc
	// Line 2211, Address: 0x102d808, Func Offset: 0xd8
	// Line 2213, Address: 0x102d810, Func Offset: 0xe0
	// Line 2214, Address: 0x102d818, Func Offset: 0xe8
	// Line 2215, Address: 0x102d81c, Func Offset: 0xec
	// Func End, Address: 0x102d830, Func Offset: 0x100
}

// 
// Start address: 0x102d830
void egg1arm2(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[6];
	// Line 2222, Address: 0x102d830, Func Offset: 0
	// Line 2223, Address: 0x102d83c, Func Offset: 0xc
	// Line 2233, Address: 0x102d870, Func Offset: 0x40
	// Line 2235, Address: 0x102d8b4, Func Offset: 0x84
	// Line 2236, Address: 0x102d8cc, Func Offset: 0x9c
	// Line 2238, Address: 0x102d8d8, Func Offset: 0xa8
	// Func End, Address: 0x102d8e8, Func Offset: 0xb8
}

// 
// Start address: 0x102d8f0
int egg1arm2_ini(_anon1* pActwk)
{
	// Line 2242, Address: 0x102d8f0, Func Offset: 0
	// Line 2243, Address: 0x102d8fc, Func Offset: 0xc
	// Line 2244, Address: 0x102d904, Func Offset: 0x14
	// Line 2245, Address: 0x102d910, Func Offset: 0x20
	// Line 2246, Address: 0x102d91c, Func Offset: 0x2c
	// Line 2247, Address: 0x102d928, Func Offset: 0x38
	// Line 2248, Address: 0x102d934, Func Offset: 0x44
	// Line 2249, Address: 0x102d944, Func Offset: 0x54
	// Line 2250, Address: 0x102d950, Func Offset: 0x60
	// Line 2251, Address: 0x102d95c, Func Offset: 0x6c
	// Line 2252, Address: 0x102d960, Func Offset: 0x70
	// Func End, Address: 0x102d970, Func Offset: 0x80
}

// 
// Start address: 0x102d970
int egg1arm2_01(_anon1* pActwk)
{
	// Line 2257, Address: 0x102d970, Func Offset: 0
	// Line 2258, Address: 0x102d97c, Func Offset: 0xc
	// Line 2259, Address: 0x102d98c, Func Offset: 0x1c
	// Line 2260, Address: 0x102d9a4, Func Offset: 0x34
	// Line 2263, Address: 0x102d9b8, Func Offset: 0x48
	// Line 2264, Address: 0x102d9c4, Func Offset: 0x54
	// Line 2265, Address: 0x102d9cc, Func Offset: 0x5c
	// Line 2266, Address: 0x102d9dc, Func Offset: 0x6c
	// Line 2268, Address: 0x102d9e8, Func Offset: 0x78
	// Line 2269, Address: 0x102d9ec, Func Offset: 0x7c
	// Func End, Address: 0x102d9fc, Func Offset: 0x8c
}

// 
// Start address: 0x102da00
int egg1arm2_03(_anon1* pActwk)
{
	// Line 2274, Address: 0x102da00, Func Offset: 0
	// Line 2275, Address: 0x102da0c, Func Offset: 0xc
	// Line 2276, Address: 0x102da1c, Func Offset: 0x1c
	// Line 2277, Address: 0x102da38, Func Offset: 0x38
	// Line 2280, Address: 0x102da4c, Func Offset: 0x4c
	// Line 2281, Address: 0x102da58, Func Offset: 0x58
	// Line 2282, Address: 0x102da64, Func Offset: 0x64
	// Line 2283, Address: 0x102da74, Func Offset: 0x74
	// Line 2285, Address: 0x102da80, Func Offset: 0x80
	// Line 2286, Address: 0x102da84, Func Offset: 0x84
	// Func End, Address: 0x102da94, Func Offset: 0x94
}

// 
// Start address: 0x102daa0
int egg1arm2_02(_anon1* pActwk)
{
	// Line 2290, Address: 0x102daa0, Func Offset: 0
	// Line 2291, Address: 0x102daac, Func Offset: 0xc
	// Line 2292, Address: 0x102dab8, Func Offset: 0x18
	// Line 2293, Address: 0x102dabc, Func Offset: 0x1c
	// Func End, Address: 0x102dacc, Func Offset: 0x2c
}

// 
// Start address: 0x102dad0
int egg1arm2_04(_anon1* pActwk)
{
	// Line 2296, Address: 0x102dad0, Func Offset: 0
	// Line 2297, Address: 0x102dadc, Func Offset: 0xc
	// Line 2298, Address: 0x102dae8, Func Offset: 0x18
	// Line 2299, Address: 0x102daec, Func Offset: 0x1c
	// Func End, Address: 0x102dafc, Func Offset: 0x2c
}

// 
// Start address: 0x102db00
int egg1arm2_05(_anon1* pActwk)
{
	int ret;
	short subact;
	// Line 2303, Address: 0x102db00, Func Offset: 0
	// Line 2304, Address: 0x102db14, Func Offset: 0x14
	// Line 2307, Address: 0x102db18, Func Offset: 0x18
	// Line 2309, Address: 0x102db30, Func Offset: 0x30
	// Line 2311, Address: 0x102db40, Func Offset: 0x40
	// Line 2312, Address: 0x102db4c, Func Offset: 0x4c
	// Line 2313, Address: 0x102db58, Func Offset: 0x58
	// Line 2314, Address: 0x102db68, Func Offset: 0x68
	// Line 2315, Address: 0x102db90, Func Offset: 0x90
	// Line 2319, Address: 0x102db98, Func Offset: 0x98
	// Line 2320, Address: 0x102dba8, Func Offset: 0xa8
	// Line 2322, Address: 0x102dbb8, Func Offset: 0xb8
	// Line 2323, Address: 0x102dbd0, Func Offset: 0xd0
	// Line 2325, Address: 0x102dbe8, Func Offset: 0xe8
	// Line 2327, Address: 0x102dbfc, Func Offset: 0xfc
	// Line 2328, Address: 0x102dc00, Func Offset: 0x100
	// Line 2329, Address: 0x102dc0c, Func Offset: 0x10c
	// Line 2331, Address: 0x102dc14, Func Offset: 0x114
	// Line 2332, Address: 0x102dc1c, Func Offset: 0x11c
	// Line 2333, Address: 0x102dc20, Func Offset: 0x120
	// Func End, Address: 0x102dc38, Func Offset: 0x138
}

// 
// Start address: 0x102dc40
void egg1arm2_set(_anon1* pActwk)
{
	short subact;
	unsigned short sin;
	unsigned short cos;
	_anon2 sinl;
	_anon2 cosl;
	// Line 2337, Address: 0x102dc40, Func Offset: 0
	// Line 2342, Address: 0x102dc50, Func Offset: 0x10
	// Line 2343, Address: 0x102dc60, Func Offset: 0x20
	// Line 2344, Address: 0x102dc8c, Func Offset: 0x4c
	// Line 2346, Address: 0x102dcb8, Func Offset: 0x78
	// Line 2347, Address: 0x102dcdc, Func Offset: 0x9c
	// Line 2348, Address: 0x102dce8, Func Offset: 0xa8
	// Line 2349, Address: 0x102dcf4, Func Offset: 0xb4
	// Line 2350, Address: 0x102dd14, Func Offset: 0xd4
	// Line 2351, Address: 0x102dd34, Func Offset: 0xf4
	// Line 2352, Address: 0x102dd48, Func Offset: 0x108
	// Line 2354, Address: 0x102dd5c, Func Offset: 0x11c
	// Line 2355, Address: 0x102dd74, Func Offset: 0x134
	// Line 2356, Address: 0x102dd84, Func Offset: 0x144
	// Func End, Address: 0x102dd98, Func Offset: 0x158
}

// 
// Start address: 0x102dda0
void egg1arm3(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[6];
	// Line 2363, Address: 0x102dda0, Func Offset: 0
	// Line 2364, Address: 0x102ddac, Func Offset: 0xc
	// Line 2374, Address: 0x102dde0, Func Offset: 0x40
	// Line 2376, Address: 0x102de24, Func Offset: 0x84
	// Line 2379, Address: 0x102de30, Func Offset: 0x90
	// Func End, Address: 0x102de40, Func Offset: 0xa0
}

// 
// Start address: 0x102de40
int egg1arm3_ini(_anon1* pActwk)
{
	// Line 2383, Address: 0x102de40, Func Offset: 0
	// Line 2384, Address: 0x102de4c, Func Offset: 0xc
	// Line 2385, Address: 0x102de54, Func Offset: 0x14
	// Line 2386, Address: 0x102de60, Func Offset: 0x20
	// Line 2387, Address: 0x102de6c, Func Offset: 0x2c
	// Line 2388, Address: 0x102de78, Func Offset: 0x38
	// Line 2389, Address: 0x102de84, Func Offset: 0x44
	// Line 2390, Address: 0x102de90, Func Offset: 0x50
	// Line 2391, Address: 0x102de9c, Func Offset: 0x5c
	// Line 2392, Address: 0x102dea0, Func Offset: 0x60
	// Func End, Address: 0x102deb0, Func Offset: 0x70
}

// 
// Start address: 0x102deb0
int egg1arm3_01(_anon1* pActwk)
{
	short subact;
	// Line 2397, Address: 0x102deb0, Func Offset: 0
	// Line 2400, Address: 0x102debc, Func Offset: 0xc
	// Line 2401, Address: 0x102decc, Func Offset: 0x1c
	// Line 2403, Address: 0x102df20, Func Offset: 0x70
	// Line 2405, Address: 0x102df5c, Func Offset: 0xac
	// Line 2407, Address: 0x102df74, Func Offset: 0xc4
	// Line 2410, Address: 0x102dfa0, Func Offset: 0xf0
	// Line 2411, Address: 0x102dfbc, Func Offset: 0x10c
	// Line 2412, Address: 0x102dfd0, Func Offset: 0x120
	// Line 2416, Address: 0x102dfd8, Func Offset: 0x128
	// Line 2417, Address: 0x102dff4, Func Offset: 0x144
	// Line 2419, Address: 0x102e008, Func Offset: 0x158
	// Line 2420, Address: 0x102e020, Func Offset: 0x170
	// Line 2422, Address: 0x102e024, Func Offset: 0x174
	// Func End, Address: 0x102e034, Func Offset: 0x184
}

// 
// Start address: 0x102e040
int egg1arm3_03(_anon1* pActwk)
{
	int ret;
	// Line 2427, Address: 0x102e040, Func Offset: 0
	// Line 2428, Address: 0x102e050, Func Offset: 0x10
	// Line 2430, Address: 0x102e054, Func Offset: 0x14
	// Line 2431, Address: 0x102e06c, Func Offset: 0x2c
	// Line 2432, Address: 0x102e07c, Func Offset: 0x3c
	// Line 2433, Address: 0x102e08c, Func Offset: 0x4c
	// Line 2434, Address: 0x102e090, Func Offset: 0x50
	// Func End, Address: 0x102e0a4, Func Offset: 0x64
}

// 
// Start address: 0x102e0b0
int egg1arm3_04(_anon1* pActwk)
{
	int ret;
	// Line 2439, Address: 0x102e0b0, Func Offset: 0
	// Line 2440, Address: 0x102e0c0, Func Offset: 0x10
	// Line 2442, Address: 0x102e0c4, Func Offset: 0x14
	// Line 2443, Address: 0x102e0e0, Func Offset: 0x30
	// Line 2444, Address: 0x102e0f4, Func Offset: 0x44
	// Line 2445, Address: 0x102e104, Func Offset: 0x54
	// Line 2446, Address: 0x102e108, Func Offset: 0x58
	// Func End, Address: 0x102e11c, Func Offset: 0x6c
}

// 
// Start address: 0x102e120
int egg1arm3_05(_anon1* pActwk)
{
	short subact;
	// Line 2451, Address: 0x102e120, Func Offset: 0
	// Line 2454, Address: 0x102e12c, Func Offset: 0xc
	// Line 2455, Address: 0x102e148, Func Offset: 0x28
	// Line 2457, Address: 0x102e164, Func Offset: 0x44
	// Line 2458, Address: 0x102e170, Func Offset: 0x50
	// Line 2459, Address: 0x102e180, Func Offset: 0x60
	// Line 2460, Address: 0x102e1d4, Func Offset: 0xb4
	// Line 2462, Address: 0x102e210, Func Offset: 0xf0
	// Line 2463, Address: 0x102e22c, Func Offset: 0x10c
	// Line 2464, Address: 0x102e240, Func Offset: 0x120
	// Line 2465, Address: 0x102e258, Func Offset: 0x138
	// Line 2466, Address: 0x102e25c, Func Offset: 0x13c
	// Func End, Address: 0x102e26c, Func Offset: 0x14c
}

// 
// Start address: 0x102e270
int egg1arm3_02(_anon1* pActwk)
{
	int ret;
	short subact;
	// Line 2471, Address: 0x102e270, Func Offset: 0
	// Line 2472, Address: 0x102e284, Func Offset: 0x14
	// Line 2475, Address: 0x102e288, Func Offset: 0x18
	// Line 2477, Address: 0x102e2a0, Func Offset: 0x30
	// Line 2479, Address: 0x102e2b0, Func Offset: 0x40
	// Line 2480, Address: 0x102e2bc, Func Offset: 0x4c
	// Line 2481, Address: 0x102e2c4, Func Offset: 0x54
	// Line 2482, Address: 0x102e2cc, Func Offset: 0x5c
	// Line 2483, Address: 0x102e2d8, Func Offset: 0x68
	// Line 2484, Address: 0x102e2e8, Func Offset: 0x78
	// Line 2485, Address: 0x102e310, Func Offset: 0xa0
	// Line 2489, Address: 0x102e318, Func Offset: 0xa8
	// Line 2490, Address: 0x102e328, Func Offset: 0xb8
	// Line 2492, Address: 0x102e338, Func Offset: 0xc8
	// Line 2493, Address: 0x102e350, Func Offset: 0xe0
	// Line 2495, Address: 0x102e368, Func Offset: 0xf8
	// Line 2497, Address: 0x102e384, Func Offset: 0x114
	// Line 2498, Address: 0x102e388, Func Offset: 0x118
	// Line 2499, Address: 0x102e394, Func Offset: 0x124
	// Line 2502, Address: 0x102e39c, Func Offset: 0x12c
	// Line 2503, Address: 0x102e3ac, Func Offset: 0x13c
	// Line 2504, Address: 0x102e3d0, Func Offset: 0x160
	// Line 2505, Address: 0x102e3dc, Func Offset: 0x16c
	// Line 2507, Address: 0x102e3e4, Func Offset: 0x174
	// Line 2508, Address: 0x102e3e8, Func Offset: 0x178
	// Func End, Address: 0x102e400, Func Offset: 0x190
}

// 
// Start address: 0x102e400
void egg1arm4(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[3];
	// Line 2515, Address: 0x102e400, Func Offset: 0
	// Line 2516, Address: 0x102e40c, Func Offset: 0xc
	// Line 2523, Address: 0x102e430, Func Offset: 0x30
	// Line 2524, Address: 0x102e474, Func Offset: 0x74
	// Line 2525, Address: 0x102e480, Func Offset: 0x80
	// Func End, Address: 0x102e490, Func Offset: 0x90
}

// 
// Start address: 0x102e490
int egg1arm4_ini(_anon1* pActwk)
{
	// Line 2529, Address: 0x102e490, Func Offset: 0
	// Line 2530, Address: 0x102e498, Func Offset: 0x8
	// Line 2531, Address: 0x102e4a0, Func Offset: 0x10
	// Line 2532, Address: 0x102e4ac, Func Offset: 0x1c
	// Line 2533, Address: 0x102e4b8, Func Offset: 0x28
	// Line 2534, Address: 0x102e4c4, Func Offset: 0x34
	// Line 2535, Address: 0x102e4d0, Func Offset: 0x40
	// Line 2536, Address: 0x102e4e0, Func Offset: 0x50
	// Line 2537, Address: 0x102e4ec, Func Offset: 0x5c
	// Line 2538, Address: 0x102e4f0, Func Offset: 0x60
	// Func End, Address: 0x102e4fc, Func Offset: 0x6c
}

// 
// Start address: 0x102e500
int egg1arm4_01(_anon1* pActwk)
{
	short subact;
	// Line 2542, Address: 0x102e500, Func Offset: 0
	// Line 2546, Address: 0x102e50c, Func Offset: 0xc
	// Line 2547, Address: 0x102e51c, Func Offset: 0x1c
	// Line 2548, Address: 0x102e55c, Func Offset: 0x5c
	// Line 2550, Address: 0x102e588, Func Offset: 0x88
	// Line 2552, Address: 0x102e5b4, Func Offset: 0xb4
	// Line 2553, Address: 0x102e5e8, Func Offset: 0xe8
	// Line 2555, Address: 0x102e600, Func Offset: 0x100
	// Line 2558, Address: 0x102e610, Func Offset: 0x110
	// Line 2559, Address: 0x102e628, Func Offset: 0x128
	// Line 2560, Address: 0x102e638, Func Offset: 0x138
	// Line 2561, Address: 0x102e648, Func Offset: 0x148
	// Line 2593, Address: 0x102e64c, Func Offset: 0x14c
	// Func End, Address: 0x102e65c, Func Offset: 0x15c
}

// 
// Start address: 0x102e660
int egg1arm4_02(_anon1* pActwk)
{
	int ret;
	// Line 2598, Address: 0x102e660, Func Offset: 0
	// Line 2599, Address: 0x102e670, Func Offset: 0x10
	// Line 2601, Address: 0x102e674, Func Offset: 0x14
	// Line 2603, Address: 0x102e68c, Func Offset: 0x2c
	// Line 2605, Address: 0x102e69c, Func Offset: 0x3c
	// Line 2607, Address: 0x102e6a4, Func Offset: 0x44
	// Line 2608, Address: 0x102e6ac, Func Offset: 0x4c
	// Line 2610, Address: 0x102e6b4, Func Offset: 0x54
	// Line 2611, Address: 0x102e6bc, Func Offset: 0x5c
	// Line 2612, Address: 0x102e6cc, Func Offset: 0x6c
	// Line 2616, Address: 0x102e6d4, Func Offset: 0x74
	// Line 2617, Address: 0x102e6e4, Func Offset: 0x84
	// Line 2619, Address: 0x102e6f4, Func Offset: 0x94
	// Line 2620, Address: 0x102e70c, Func Offset: 0xac
	// Line 2622, Address: 0x102e724, Func Offset: 0xc4
	// Line 2624, Address: 0x102e740, Func Offset: 0xe0
	// Line 2625, Address: 0x102e744, Func Offset: 0xe4
	// Line 2626, Address: 0x102e750, Func Offset: 0xf0
	// Line 2628, Address: 0x102e758, Func Offset: 0xf8
	// Line 2629, Address: 0x102e760, Func Offset: 0x100
	// Line 2630, Address: 0x102e764, Func Offset: 0x104
	// Func End, Address: 0x102e778, Func Offset: 0x118
}

// 
// Start address: 0x102e780
void egg1leg1(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[13];
	// Line 2640, Address: 0x102e780, Func Offset: 0
	// Line 2641, Address: 0x102e78c, Func Offset: 0xc
	// Line 2658, Address: 0x102e7b8, Func Offset: 0x38
	// Line 2659, Address: 0x102e7fc, Func Offset: 0x7c
	// Line 2660, Address: 0x102e808, Func Offset: 0x88
	// Func End, Address: 0x102e818, Func Offset: 0x98
}

// 
// Start address: 0x102e820
int egg1leg1_ini(_anon1* pActwk)
{
	// Line 2664, Address: 0x102e820, Func Offset: 0
	// Line 2665, Address: 0x102e828, Func Offset: 0x8
	// Line 2666, Address: 0x102e830, Func Offset: 0x10
	// Line 2667, Address: 0x102e83c, Func Offset: 0x1c
	// Line 2668, Address: 0x102e848, Func Offset: 0x28
	// Line 2669, Address: 0x102e854, Func Offset: 0x34
	// Line 2670, Address: 0x102e860, Func Offset: 0x40
	// Line 2673, Address: 0x102e870, Func Offset: 0x50
	// Line 2674, Address: 0x102e87c, Func Offset: 0x5c
	// Line 2675, Address: 0x102e888, Func Offset: 0x68
	// Line 2676, Address: 0x102e894, Func Offset: 0x74
	// Line 2677, Address: 0x102e898, Func Offset: 0x78
	// Func End, Address: 0x102e8a4, Func Offset: 0x84
}

// 
// Start address: 0x102e8b0
int egg1leg1_01(_anon1* pActwk)
{
	short subact;
	// Line 2682, Address: 0x102e8b0, Func Offset: 0
	// Line 2685, Address: 0x102e8c0, Func Offset: 0x10
	// Line 2686, Address: 0x102e8d0, Func Offset: 0x20
	// Line 2687, Address: 0x102e8fc, Func Offset: 0x4c
	// Line 2689, Address: 0x102e930, Func Offset: 0x80
	// Line 2691, Address: 0x102e964, Func Offset: 0xb4
	// Line 2692, Address: 0x102e990, Func Offset: 0xe0
	// Line 2695, Address: 0x102e9b8, Func Offset: 0x108
	// Line 2697, Address: 0x102e9d0, Func Offset: 0x120
	// Line 2699, Address: 0x102e9fc, Func Offset: 0x14c
	// Line 2702, Address: 0x102ea14, Func Offset: 0x164
	// Line 2703, Address: 0x102ea20, Func Offset: 0x170
	// Line 2706, Address: 0x102ea2c, Func Offset: 0x17c
	// Line 2707, Address: 0x102ea34, Func Offset: 0x184
	// Line 2709, Address: 0x102ea68, Func Offset: 0x1b8
	// Line 2712, Address: 0x102ea9c, Func Offset: 0x1ec
	// Line 2713, Address: 0x102eac8, Func Offset: 0x218
	// Line 2714, Address: 0x102ead4, Func Offset: 0x224
	// Line 2716, Address: 0x102eae0, Func Offset: 0x230
	// Line 2719, Address: 0x102eb0c, Func Offset: 0x25c
	// Line 2720, Address: 0x102eb18, Func Offset: 0x268
	// Line 2721, Address: 0x102eb24, Func Offset: 0x274
	// Line 2722, Address: 0x102eb28, Func Offset: 0x278
	// Func End, Address: 0x102eb3c, Func Offset: 0x28c
}

// 
// Start address: 0x102eb40
int egg1leg1_02(_anon1* pActwk)
{
	short subact;
	// Line 2727, Address: 0x102eb40, Func Offset: 0
	// Line 2730, Address: 0x102eb50, Func Offset: 0x10
	// Line 2731, Address: 0x102eb60, Func Offset: 0x20
	// Line 2732, Address: 0x102eb8c, Func Offset: 0x4c
	// Line 2733, Address: 0x102ebb8, Func Offset: 0x78
	// Line 2736, Address: 0x102ebd4, Func Offset: 0x94
	// Line 2737, Address: 0x102ebe0, Func Offset: 0xa0
	// Line 2738, Address: 0x102ebec, Func Offset: 0xac
	// Line 2740, Address: 0x102ec14, Func Offset: 0xd4
	// Line 2741, Address: 0x102ec20, Func Offset: 0xe0
	// Line 2742, Address: 0x102ec24, Func Offset: 0xe4
	// Func End, Address: 0x102ec38, Func Offset: 0xf8
}

// 
// Start address: 0x102ec40
int egg1leg1_03(_anon1* pActwk)
{
	short subact;
	// Line 2747, Address: 0x102ec40, Func Offset: 0
	// Line 2750, Address: 0x102ec50, Func Offset: 0x10
	// Line 2751, Address: 0x102ec60, Func Offset: 0x20
	// Line 2752, Address: 0x102ec8c, Func Offset: 0x4c
	// Line 2753, Address: 0x102ecc0, Func Offset: 0x80
	// Line 2754, Address: 0x102ecd0, Func Offset: 0x90
	// Line 2755, Address: 0x102ecdc, Func Offset: 0x9c
	// Line 2756, Address: 0x102ece0, Func Offset: 0xa0
	// Func End, Address: 0x102ecf4, Func Offset: 0xb4
}

// 
// Start address: 0x102ed00
int egg1leg1_04(_anon1* pActwk)
{
	// Line 2761, Address: 0x102ed00, Func Offset: 0
	// Line 2762, Address: 0x102ed0c, Func Offset: 0xc
	// Line 2764, Address: 0x102ed24, Func Offset: 0x24
	// Line 2765, Address: 0x102ed50, Func Offset: 0x50
	// Line 2768, Address: 0x102ed6c, Func Offset: 0x6c
	// Line 2769, Address: 0x102ed78, Func Offset: 0x78
	// Line 2773, Address: 0x102ed88, Func Offset: 0x88
	// Line 2774, Address: 0x102ed94, Func Offset: 0x94
	// Line 2775, Address: 0x102ed98, Func Offset: 0x98
	// Func End, Address: 0x102eda8, Func Offset: 0xa8
}

// 
// Start address: 0x102edb0
int egg1leg1_05(_anon1* pActwk)
{
	short subact;
	// Line 2780, Address: 0x102edb0, Func Offset: 0
	// Line 2783, Address: 0x102edc0, Func Offset: 0x10
	// Line 2784, Address: 0x102edd0, Func Offset: 0x20
	// Line 2785, Address: 0x102edfc, Func Offset: 0x4c
	// Line 2786, Address: 0x102ee30, Func Offset: 0x80
	// Line 2790, Address: 0x102ee60, Func Offset: 0xb0
	// Line 2793, Address: 0x102ee78, Func Offset: 0xc8
	// Line 2795, Address: 0x102eeac, Func Offset: 0xfc
	// Line 2796, Address: 0x102eed8, Func Offset: 0x128
	// Line 2797, Address: 0x102eee8, Func Offset: 0x138
	// Line 2799, Address: 0x102eef0, Func Offset: 0x140
	// Line 2800, Address: 0x102ef1c, Func Offset: 0x16c
	// Line 2803, Address: 0x102ef28, Func Offset: 0x178
	// Line 2804, Address: 0x102ef40, Func Offset: 0x190
	// Line 2805, Address: 0x102ef6c, Func Offset: 0x1bc
	// Line 2806, Address: 0x102ef78, Func Offset: 0x1c8
	// Line 2807, Address: 0x102ef7c, Func Offset: 0x1cc
	// Func End, Address: 0x102ef90, Func Offset: 0x1e0
}

// 
// Start address: 0x102ef90
int egg1leg1_06(_anon1* pActwk)
{
	short subact;
	// Line 2812, Address: 0x102ef90, Func Offset: 0
	// Line 2815, Address: 0x102efa0, Func Offset: 0x10
	// Line 2816, Address: 0x102efb0, Func Offset: 0x20
	// Line 2817, Address: 0x102efdc, Func Offset: 0x4c
	// Line 2818, Address: 0x102f010, Func Offset: 0x80
	// Line 2822, Address: 0x102f040, Func Offset: 0xb0
	// Line 2825, Address: 0x102f05c, Func Offset: 0xcc
	// Line 2826, Address: 0x102f090, Func Offset: 0x100
	// Line 2827, Address: 0x102f0a0, Func Offset: 0x110
	// Line 2828, Address: 0x102f0cc, Func Offset: 0x13c
	// Line 2829, Address: 0x102f0d8, Func Offset: 0x148
	// Line 2833, Address: 0x102f0e4, Func Offset: 0x154
	// Line 2834, Address: 0x102f100, Func Offset: 0x170
	// Line 2835, Address: 0x102f12c, Func Offset: 0x19c
	// Line 2836, Address: 0x102f138, Func Offset: 0x1a8
	// Line 2837, Address: 0x102f13c, Func Offset: 0x1ac
	// Func End, Address: 0x102f150, Func Offset: 0x1c0
}

// 
// Start address: 0x102f150
int egg1leg1_07(_anon1* pActwk)
{
	int ret;
	short subact;
	// Line 2842, Address: 0x102f150, Func Offset: 0
	// Line 2843, Address: 0x102f164, Func Offset: 0x14
	// Line 2846, Address: 0x102f168, Func Offset: 0x18
	// Line 2849, Address: 0x102f184, Func Offset: 0x34
	// Line 2850, Address: 0x102f1b0, Func Offset: 0x60
	// Line 2851, Address: 0x102f1c0, Func Offset: 0x70
	// Line 2852, Address: 0x102f1ec, Func Offset: 0x9c
	// Line 2853, Address: 0x102f218, Func Offset: 0xc8
	// Line 2854, Address: 0x102f228, Func Offset: 0xd8
	// Line 2855, Address: 0x102f254, Func Offset: 0x104
	// Line 2856, Address: 0x102f280, Func Offset: 0x130
	// Line 2857, Address: 0x102f2ac, Func Offset: 0x15c
	// Line 2858, Address: 0x102f2d8, Func Offset: 0x188
	// Line 2859, Address: 0x102f2e8, Func Offset: 0x198
	// Line 2861, Address: 0x102f2f4, Func Offset: 0x1a4
	// Line 2864, Address: 0x102f310, Func Offset: 0x1c0
	// Line 2865, Address: 0x102f33c, Func Offset: 0x1ec
	// Line 2866, Address: 0x102f34c, Func Offset: 0x1fc
	// Line 2869, Address: 0x102f358, Func Offset: 0x208
	// Line 2870, Address: 0x102f368, Func Offset: 0x218
	// Line 2871, Address: 0x102f394, Func Offset: 0x244
	// Line 2872, Address: 0x102f3c8, Func Offset: 0x278
	// Line 2873, Address: 0x102f3d8, Func Offset: 0x288
	// Line 2874, Address: 0x102f3e4, Func Offset: 0x294
	// Line 2875, Address: 0x102f3e8, Func Offset: 0x298
	// Func End, Address: 0x102f400, Func Offset: 0x2b0
}

// 
// Start address: 0x102f400
int egg1leg1_08(_anon1* pActwk)
{
	short subact;
	// Line 2880, Address: 0x102f400, Func Offset: 0
	// Line 2883, Address: 0x102f40c, Func Offset: 0xc
	// Line 2884, Address: 0x102f41c, Func Offset: 0x1c
	// Line 2885, Address: 0x102f448, Func Offset: 0x48
	// Line 2886, Address: 0x102f488, Func Offset: 0x88
	// Line 2887, Address: 0x102f4b4, Func Offset: 0xb4
	// Line 2888, Address: 0x102f4e0, Func Offset: 0xe0
	// Line 2889, Address: 0x102f50c, Func Offset: 0x10c
	// Line 2890, Address: 0x102f510, Func Offset: 0x110
	// Func End, Address: 0x102f520, Func Offset: 0x120
}

// 
// Start address: 0x102f520
int egg1leg1_09(_anon1* pActwk)
{
	short subact;
	// Line 2895, Address: 0x102f520, Func Offset: 0
	// Line 2898, Address: 0x102f530, Func Offset: 0x10
	// Line 2899, Address: 0x102f540, Func Offset: 0x20
	// Line 2900, Address: 0x102f56c, Func Offset: 0x4c
	// Line 2902, Address: 0x102f5a0, Func Offset: 0x80
	// Line 2904, Address: 0x102f5d4, Func Offset: 0xb4
	// Line 2905, Address: 0x102f600, Func Offset: 0xe0
	// Line 2906, Address: 0x102f628, Func Offset: 0x108
	// Line 2910, Address: 0x102f630, Func Offset: 0x110
	// Line 2912, Address: 0x102f64c, Func Offset: 0x12c
	// Line 2913, Address: 0x102f678, Func Offset: 0x158
	// Line 2915, Address: 0x102f68c, Func Offset: 0x16c
	// Line 2916, Address: 0x102f698, Func Offset: 0x178
	// Line 2917, Address: 0x102f6c4, Func Offset: 0x1a4
	// Line 2919, Address: 0x102f6d0, Func Offset: 0x1b0
	// Line 2923, Address: 0x102f6d8, Func Offset: 0x1b8
	// Line 2924, Address: 0x102f6e4, Func Offset: 0x1c4
	// Line 2925, Address: 0x102f710, Func Offset: 0x1f0
	// Line 2929, Address: 0x102f71c, Func Offset: 0x1fc
	// Line 2930, Address: 0x102f728, Func Offset: 0x208
	// Line 2931, Address: 0x102f72c, Func Offset: 0x20c
	// Func End, Address: 0x102f740, Func Offset: 0x220
}

// 
// Start address: 0x102f740
int egg1leg1_10(_anon1* pActwk)
{
	short subact;
	// Line 2936, Address: 0x102f740, Func Offset: 0
	// Line 2939, Address: 0x102f750, Func Offset: 0x10
	// Line 2940, Address: 0x102f760, Func Offset: 0x20
	// Line 2941, Address: 0x102f78c, Func Offset: 0x4c
	// Line 2942, Address: 0x102f7b8, Func Offset: 0x78
	// Line 2945, Address: 0x102f7d4, Func Offset: 0x94
	// Line 2946, Address: 0x102f7e0, Func Offset: 0xa0
	// Line 2947, Address: 0x102f7ec, Func Offset: 0xac
	// Line 2949, Address: 0x102f814, Func Offset: 0xd4
	// Line 2950, Address: 0x102f820, Func Offset: 0xe0
	// Line 2951, Address: 0x102f824, Func Offset: 0xe4
	// Func End, Address: 0x102f838, Func Offset: 0xf8
}

// 
// Start address: 0x102f840
int egg1leg1_11(_anon1* pActwk)
{
	short subact;
	// Line 2956, Address: 0x102f840, Func Offset: 0
	// Line 2959, Address: 0x102f850, Func Offset: 0x10
	// Line 2961, Address: 0x102f868, Func Offset: 0x28
	// Line 2962, Address: 0x102f87c, Func Offset: 0x3c
	// Line 2963, Address: 0x102f8ac, Func Offset: 0x6c
	// Line 2965, Address: 0x102f8e0, Func Offset: 0xa0
	// Line 2968, Address: 0x102f914, Func Offset: 0xd4
	// Line 2969, Address: 0x102f940, Func Offset: 0x100
	// Line 2971, Address: 0x102f95c, Func Offset: 0x11c
	// Line 2973, Address: 0x102f96c, Func Offset: 0x12c
	// Line 2974, Address: 0x102f978, Func Offset: 0x138
	// Line 2977, Address: 0x102f984, Func Offset: 0x144
	// Line 2980, Address: 0x102f9ac, Func Offset: 0x16c
	// Line 2981, Address: 0x102f9b8, Func Offset: 0x178
	// Line 2982, Address: 0x102f9bc, Func Offset: 0x17c
	// Func End, Address: 0x102f9d0, Func Offset: 0x190
}

// 
// Start address: 0x102f9d0
void egg1leg1_set(_anon1* pActwk)
{
	unsigned short sin;
	unsigned short cos;
	short sin2;
	short cos2;
	_anon2 sinl;
	_anon2 cosl;
	short subact;
	// Line 2991, Address: 0x102f9d0, Func Offset: 0
	// Line 2997, Address: 0x102f9e8, Func Offset: 0x18
	// Line 2998, Address: 0x102fa00, Func Offset: 0x30
	// Line 2999, Address: 0x102fa0c, Func Offset: 0x3c
	// Line 3000, Address: 0x102fa18, Func Offset: 0x48
	// Line 3001, Address: 0x102fa38, Func Offset: 0x68
	// Line 3003, Address: 0x102fa58, Func Offset: 0x88
	// Line 3005, Address: 0x102fa70, Func Offset: 0xa0
	// Line 3008, Address: 0x102fa88, Func Offset: 0xb8
	// Line 3009, Address: 0x102fa98, Func Offset: 0xc8
	// Line 3010, Address: 0x102fae8, Func Offset: 0x118
	// Line 3011, Address: 0x102fb00, Func Offset: 0x130
	// Line 3012, Address: 0x102fb0c, Func Offset: 0x13c
	// Line 3013, Address: 0x102fb14, Func Offset: 0x144
	// Line 3014, Address: 0x102fb64, Func Offset: 0x194
	// Line 3017, Address: 0x102fb6c, Func Offset: 0x19c
	// Line 3019, Address: 0x102fb84, Func Offset: 0x1b4
	// Line 3020, Address: 0x102fb94, Func Offset: 0x1c4
	// Line 3021, Address: 0x102fba0, Func Offset: 0x1d0
	// Line 3024, Address: 0x102fbac, Func Offset: 0x1dc
	// Line 3025, Address: 0x102fbdc, Func Offset: 0x20c
	// Line 3027, Address: 0x102fc0c, Func Offset: 0x23c
	// Line 3028, Address: 0x102fc18, Func Offset: 0x248
	// Line 3030, Address: 0x102fc24, Func Offset: 0x254
	// Line 3031, Address: 0x102fc34, Func Offset: 0x264
	// Line 3032, Address: 0x102fc60, Func Offset: 0x290
	// Line 3033, Address: 0x102fc8c, Func Offset: 0x2bc
	// Line 3034, Address: 0x102fcb8, Func Offset: 0x2e8
	// Line 3035, Address: 0x102fce4, Func Offset: 0x314
	// Line 3037, Address: 0x102fd10, Func Offset: 0x340
	// Line 3040, Address: 0x102fd18, Func Offset: 0x348
	// Line 3042, Address: 0x102fd28, Func Offset: 0x358
	// Line 3043, Address: 0x102fd38, Func Offset: 0x368
	// Line 3044, Address: 0x102fd88, Func Offset: 0x3b8
	// Line 3045, Address: 0x102fda0, Func Offset: 0x3d0
	// Line 3046, Address: 0x102fdac, Func Offset: 0x3dc
	// Line 3047, Address: 0x102fdb4, Func Offset: 0x3e4
	// Line 3049, Address: 0x102fe04, Func Offset: 0x434
	// Func End, Address: 0x102fe20, Func Offset: 0x450
}

// 
// Start address: 0x102fe20
int egg1leg1_12(_anon1* pActwk)
{
	int ret;
	// Line 3054, Address: 0x102fe20, Func Offset: 0
	// Line 3055, Address: 0x102fe30, Func Offset: 0x10
	// Line 3057, Address: 0x102fe34, Func Offset: 0x14
	// Line 3059, Address: 0x102fe4c, Func Offset: 0x2c
	// Line 3060, Address: 0x102fe5c, Func Offset: 0x3c
	// Line 3062, Address: 0x102fe74, Func Offset: 0x54
	// Line 3063, Address: 0x102fe7c, Func Offset: 0x5c
	// Line 3064, Address: 0x102fe8c, Func Offset: 0x6c
	// Line 3067, Address: 0x102fe94, Func Offset: 0x74
	// Line 3068, Address: 0x102fe9c, Func Offset: 0x7c
	// Line 3070, Address: 0x102feac, Func Offset: 0x8c
	// Line 3074, Address: 0x102feb4, Func Offset: 0x94
	// Line 3076, Address: 0x102fecc, Func Offset: 0xac
	// Line 3077, Address: 0x102fef0, Func Offset: 0xd0
	// Line 3078, Address: 0x102ff14, Func Offset: 0xf4
	// Line 3081, Address: 0x102ff1c, Func Offset: 0xfc
	// Line 3082, Address: 0x102ff40, Func Offset: 0x120
	// Line 3086, Address: 0x102ff64, Func Offset: 0x144
	// Line 3087, Address: 0x102ff7c, Func Offset: 0x15c
	// Line 3089, Address: 0x102ff94, Func Offset: 0x174
	// Line 3091, Address: 0x102ffb0, Func Offset: 0x190
	// Line 3092, Address: 0x102ffb4, Func Offset: 0x194
	// Line 3093, Address: 0x102ffc0, Func Offset: 0x1a0
	// Line 3095, Address: 0x102ffc8, Func Offset: 0x1a8
	// Line 3096, Address: 0x102ffd0, Func Offset: 0x1b0
	// Line 3097, Address: 0x102ffd4, Func Offset: 0x1b4
	// Func End, Address: 0x102ffe8, Func Offset: 0x1c8
}

// 
// Start address: 0x102fff0
void egg1leg2(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[8];
	// Line 3103, Address: 0x102fff0, Func Offset: 0
	// Line 3104, Address: 0x102fffc, Func Offset: 0xc
	// Line 3116, Address: 0x1030030, Func Offset: 0x40
	// Line 3117, Address: 0x1030074, Func Offset: 0x84
	// Line 3118, Address: 0x1030080, Func Offset: 0x90
	// Func End, Address: 0x1030090, Func Offset: 0xa0
}

// 
// Start address: 0x1030090
int egg1leg2_ini(_anon1* pActwk)
{
	// Line 3122, Address: 0x1030090, Func Offset: 0
	// Line 3123, Address: 0x1030098, Func Offset: 0x8
	// Line 3124, Address: 0x10300a0, Func Offset: 0x10
	// Line 3125, Address: 0x10300ac, Func Offset: 0x1c
	// Line 3126, Address: 0x10300b8, Func Offset: 0x28
	// Line 3127, Address: 0x10300c4, Func Offset: 0x34
	// Line 3128, Address: 0x10300d0, Func Offset: 0x40
	// Line 3129, Address: 0x10300dc, Func Offset: 0x4c
	// Line 3130, Address: 0x10300ec, Func Offset: 0x5c
	// Line 3131, Address: 0x10300f8, Func Offset: 0x68
	// Line 3132, Address: 0x1030104, Func Offset: 0x74
	// Line 3133, Address: 0x1030108, Func Offset: 0x78
	// Func End, Address: 0x1030114, Func Offset: 0x84
}

// 
// Start address: 0x1030120
int egg1leg2_01(_anon1* pActwk)
{
	short subact;
	// Line 3138, Address: 0x1030120, Func Offset: 0
	// Line 3141, Address: 0x103012c, Func Offset: 0xc
	// Line 3142, Address: 0x103013c, Func Offset: 0x1c
	// Line 3143, Address: 0x103017c, Func Offset: 0x5c
	// Line 3144, Address: 0x10301bc, Func Offset: 0x9c
	// Line 3145, Address: 0x10301c0, Func Offset: 0xa0
	// Func End, Address: 0x10301d0, Func Offset: 0xb0
}

// 
// Start address: 0x10301d0
int egg1leg2_02(_anon1* pActwk)
{
	short subact;
	// Line 3150, Address: 0x10301d0, Func Offset: 0
	// Line 3153, Address: 0x10301dc, Func Offset: 0xc
	// Line 3154, Address: 0x10301ec, Func Offset: 0x1c
	// Line 3155, Address: 0x1030218, Func Offset: 0x48
	// Line 3156, Address: 0x1030244, Func Offset: 0x74
	// Line 3157, Address: 0x1030270, Func Offset: 0xa0
	// Line 3158, Address: 0x10302b0, Func Offset: 0xe0
	// Line 3159, Address: 0x10302dc, Func Offset: 0x10c
	// Line 3160, Address: 0x10302e0, Func Offset: 0x110
	// Func End, Address: 0x10302f0, Func Offset: 0x120
}

// 
// Start address: 0x10302f0
int egg1leg2_03(_anon1* pActwk)
{
	int xs;
	// Line 3165, Address: 0x10302f0, Func Offset: 0
	// Line 3168, Address: 0x1030300, Func Offset: 0x10
	// Line 3170, Address: 0x103031c, Func Offset: 0x2c
	// Line 3171, Address: 0x1030338, Func Offset: 0x48
	// Line 3173, Address: 0x1030350, Func Offset: 0x60
	// Line 3174, Address: 0x1030358, Func Offset: 0x68
	// Line 3175, Address: 0x103035c, Func Offset: 0x6c
	// Line 3176, Address: 0x1030370, Func Offset: 0x80
	// Line 3179, Address: 0x103037c, Func Offset: 0x8c
	// Line 3180, Address: 0x1030388, Func Offset: 0x98
	// Line 3181, Address: 0x103038c, Func Offset: 0x9c
	// Func End, Address: 0x10303a0, Func Offset: 0xb0
}

// 
// Start address: 0x10303a0
int egg1leg2_04(_anon1* pActwk)
{
	// Line 3186, Address: 0x10303a0, Func Offset: 0
	// Line 3187, Address: 0x10303ac, Func Offset: 0xc
	// Line 3188, Address: 0x10303b4, Func Offset: 0x14
	// Line 3190, Address: 0x10303d0, Func Offset: 0x30
	// Line 3191, Address: 0x10303ec, Func Offset: 0x4c
	// Line 3193, Address: 0x1030404, Func Offset: 0x64
	// Line 3194, Address: 0x103041c, Func Offset: 0x7c
	// Line 3197, Address: 0x1030428, Func Offset: 0x88
	// Line 3198, Address: 0x1030434, Func Offset: 0x94
	// Line 3199, Address: 0x1030438, Func Offset: 0x98
	// Func End, Address: 0x1030448, Func Offset: 0xa8
}

// 
// Start address: 0x1030450
int egg1leg2_05(_anon1* pActwk)
{
	int xs;
	int ys;
	// Line 3204, Address: 0x1030450, Func Offset: 0
	// Line 3207, Address: 0x1030464, Func Offset: 0x14
	// Line 3209, Address: 0x1030480, Func Offset: 0x30
	// Line 3210, Address: 0x103049c, Func Offset: 0x4c
	// Line 3211, Address: 0x10304a4, Func Offset: 0x54
	// Line 3213, Address: 0x10304ac, Func Offset: 0x5c
	// Line 3214, Address: 0x10304b0, Func Offset: 0x60
	// Line 3216, Address: 0x10304cc, Func Offset: 0x7c
	// Line 3217, Address: 0x10304e8, Func Offset: 0x98
	// Line 3218, Address: 0x10304f0, Func Offset: 0xa0
	// Line 3220, Address: 0x10304f8, Func Offset: 0xa8
	// Line 3221, Address: 0x10304fc, Func Offset: 0xac
	// Line 3222, Address: 0x1030514, Func Offset: 0xc4
	// Line 3224, Address: 0x1030530, Func Offset: 0xe0
	// Line 3225, Address: 0x103053c, Func Offset: 0xec
	// Line 3226, Address: 0x1030540, Func Offset: 0xf0
	// Func End, Address: 0x1030558, Func Offset: 0x108
}

// 
// Start address: 0x1030560
int egg1leg2_06(_anon1* pActwk)
{
	int xs;
	int ys;
	// Line 3231, Address: 0x1030560, Func Offset: 0
	// Line 3234, Address: 0x1030574, Func Offset: 0x14
	// Line 3236, Address: 0x1030590, Func Offset: 0x30
	// Line 3237, Address: 0x10305ac, Func Offset: 0x4c
	// Line 3238, Address: 0x10305b4, Func Offset: 0x54
	// Line 3240, Address: 0x10305bc, Func Offset: 0x5c
	// Line 3241, Address: 0x10305c0, Func Offset: 0x60
	// Line 3243, Address: 0x10305dc, Func Offset: 0x7c
	// Line 3244, Address: 0x10305f8, Func Offset: 0x98
	// Line 3245, Address: 0x1030600, Func Offset: 0xa0
	// Line 3247, Address: 0x1030608, Func Offset: 0xa8
	// Line 3248, Address: 0x103060c, Func Offset: 0xac
	// Line 3250, Address: 0x1030624, Func Offset: 0xc4
	// Line 3251, Address: 0x1030628, Func Offset: 0xc8
	// Line 3252, Address: 0x103063c, Func Offset: 0xdc
	// Line 3254, Address: 0x1030644, Func Offset: 0xe4
	// Line 3255, Address: 0x1030650, Func Offset: 0xf0
	// Line 3256, Address: 0x1030654, Func Offset: 0xf4
	// Func End, Address: 0x103066c, Func Offset: 0x10c
}

// 
// Start address: 0x1030670
void leg2_set(int xs, int ys, _anon1* pActwk)
{
	short subact;
	// Line 3263, Address: 0x1030670, Func Offset: 0
	// Line 3266, Address: 0x1030684, Func Offset: 0x14
	// Line 3268, Address: 0x103069c, Func Offset: 0x2c
	// Line 3269, Address: 0x10306ac, Func Offset: 0x3c
	// Line 3270, Address: 0x10306dc, Func Offset: 0x6c
	// Line 3271, Address: 0x103070c, Func Offset: 0x9c
	// Line 3272, Address: 0x1030738, Func Offset: 0xc8
	// Line 3273, Address: 0x1030768, Func Offset: 0xf8
	// Line 3274, Address: 0x1030798, Func Offset: 0x128
	// Line 3275, Address: 0x10307c4, Func Offset: 0x154
	// Line 3276, Address: 0x10307f4, Func Offset: 0x184
	// Line 3278, Address: 0x1030824, Func Offset: 0x1b4
	// Func End, Address: 0x1030834, Func Offset: 0x1c4
}

// 
// Start address: 0x1030840
void leg2_set2(_anon1* pActwk)
{
	short subact;
	// Line 3283, Address: 0x1030840, Func Offset: 0
	// Line 3286, Address: 0x103084c, Func Offset: 0xc
	// Line 3287, Address: 0x103085c, Func Offset: 0x1c
	// Line 3288, Address: 0x10308b0, Func Offset: 0x70
	// Line 3289, Address: 0x1030904, Func Offset: 0xc4
	// Func End, Address: 0x1030914, Func Offset: 0xd4
}

// 
// Start address: 0x1030920
int egg1leg2_07(_anon1* pActwk)
{
	int ret;
	// Line 3294, Address: 0x1030920, Func Offset: 0
	// Line 3295, Address: 0x1030930, Func Offset: 0x10
	// Line 3297, Address: 0x1030934, Func Offset: 0x14
	// Line 3300, Address: 0x103094c, Func Offset: 0x2c
	// Line 3301, Address: 0x103095c, Func Offset: 0x3c
	// Line 3303, Address: 0x1030974, Func Offset: 0x54
	// Line 3304, Address: 0x103097c, Func Offset: 0x5c
	// Line 3305, Address: 0x1030988, Func Offset: 0x68
	// Line 3308, Address: 0x1030990, Func Offset: 0x70
	// Line 3309, Address: 0x1030998, Func Offset: 0x78
	// Line 3311, Address: 0x10309a4, Func Offset: 0x84
	// Line 3315, Address: 0x10309ac, Func Offset: 0x8c
	// Line 3317, Address: 0x10309c4, Func Offset: 0xa4
	// Line 3318, Address: 0x10309d4, Func Offset: 0xb4
	// Line 3319, Address: 0x10309e4, Func Offset: 0xc4
	// Line 3322, Address: 0x10309ec, Func Offset: 0xcc
	// Line 3323, Address: 0x10309fc, Func Offset: 0xdc
	// Line 3326, Address: 0x1030a0c, Func Offset: 0xec
	// Line 3327, Address: 0x1030a24, Func Offset: 0x104
	// Line 3328, Address: 0x1030a3c, Func Offset: 0x11c
	// Line 3330, Address: 0x1030a58, Func Offset: 0x138
	// Line 3331, Address: 0x1030a5c, Func Offset: 0x13c
	// Line 3332, Address: 0x1030a68, Func Offset: 0x148
	// Line 3334, Address: 0x1030a70, Func Offset: 0x150
	// Line 3335, Address: 0x1030a78, Func Offset: 0x158
	// Line 3336, Address: 0x1030a7c, Func Offset: 0x15c
	// Func End, Address: 0x1030a90, Func Offset: 0x170
}

// 
// Start address: 0x1030a90
void egg1leg3(_anon1* pActwk)
{
	int(*tbl)(_anon1*)[7];
	// Line 3345, Address: 0x1030a90, Func Offset: 0
	// Line 3346, Address: 0x1030a9c, Func Offset: 0xc
	// Line 3357, Address: 0x1030ac8, Func Offset: 0x38
	// Line 3358, Address: 0x1030b0c, Func Offset: 0x7c
	// Line 3359, Address: 0x1030b18, Func Offset: 0x88
	// Func End, Address: 0x1030b28, Func Offset: 0x98
}

// 
// Start address: 0x1030b30
void leg3_set_not_grd(_anon1* pActwk)
{
	short subact;
	// Line 3363, Address: 0x1030b30, Func Offset: 0
	// Line 3366, Address: 0x1030b3c, Func Offset: 0xc
	// Line 3367, Address: 0x1030b4c, Func Offset: 0x1c
	// Line 3368, Address: 0x1030ba0, Func Offset: 0x70
	// Line 3369, Address: 0x1030bf4, Func Offset: 0xc4
	// Func End, Address: 0x1030c04, Func Offset: 0xd4
}

// 
// Start address: 0x1030c10
int egg1leg3_ini(_anon1* pActwk)
{
	// Line 3373, Address: 0x1030c10, Func Offset: 0
	// Line 3374, Address: 0x1030c1c, Func Offset: 0xc
	// Line 3375, Address: 0x1030c24, Func Offset: 0x14
	// Line 3376, Address: 0x1030c30, Func Offset: 0x20
	// Line 3377, Address: 0x1030c3c, Func Offset: 0x2c
	// Line 3378, Address: 0x1030c48, Func Offset: 0x38
	// Line 3379, Address: 0x1030c54, Func Offset: 0x44
	// Line 3381, Address: 0x1030c64, Func Offset: 0x54
	// Line 3382, Address: 0x1030c70, Func Offset: 0x60
	// Line 3384, Address: 0x1030c7c, Func Offset: 0x6c
	// Line 3385, Address: 0x1030c88, Func Offset: 0x78
	// Line 3386, Address: 0x1030c98, Func Offset: 0x88
	// Line 3387, Address: 0x1030ca4, Func Offset: 0x94
	// Line 3388, Address: 0x1030cb0, Func Offset: 0xa0
	// Line 3389, Address: 0x1030cbc, Func Offset: 0xac
	// Line 3390, Address: 0x1030cc0, Func Offset: 0xb0
	// Func End, Address: 0x1030cd0, Func Offset: 0xc0
}

// 
// Start address: 0x1030cd0
void leg3_on_the_ground(_anon1* pActwk)
{
	short subact;
	// Line 3394, Address: 0x1030cd0, Func Offset: 0
	// Line 3397, Address: 0x1030cdc, Func Offset: 0xc
	// Line 3398, Address: 0x1030cec, Func Offset: 0x1c
	// Line 3399, Address: 0x1030cfc, Func Offset: 0x2c
	// Line 3400, Address: 0x1030d28, Func Offset: 0x58
	// Line 3401, Address: 0x1030d54, Func Offset: 0x84
	// Line 3403, Address: 0x1030d80, Func Offset: 0xb0
	// Line 3404, Address: 0x1030dac, Func Offset: 0xdc
	// Line 3405, Address: 0x1030dd8, Func Offset: 0x108
	// Line 3408, Address: 0x1030e00, Func Offset: 0x130
	// Func End, Address: 0x1030e10, Func Offset: 0x140
}

// 
// Start address: 0x1030e10
int egg1leg3_01(_anon1* pActwk)
{
	// Line 3413, Address: 0x1030e10, Func Offset: 0
	// Line 3414, Address: 0x1030e1c, Func Offset: 0xc
	// Line 3415, Address: 0x1030e38, Func Offset: 0x28
	// Line 3419, Address: 0x1030e54, Func Offset: 0x44
	// Line 3421, Address: 0x1030e6c, Func Offset: 0x5c
	// Line 3424, Address: 0x1030e84, Func Offset: 0x74
	// Line 3427, Address: 0x1030ea0, Func Offset: 0x90
	// Line 3428, Address: 0x1030eac, Func Offset: 0x9c
	// Line 3430, Address: 0x1030ecc, Func Offset: 0xbc
	// Line 3433, Address: 0x1030ed8, Func Offset: 0xc8
	// Line 3438, Address: 0x1030ee4, Func Offset: 0xd4
	// Line 3439, Address: 0x1030ef4, Func Offset: 0xe4
	// Line 3440, Address: 0x1030f00, Func Offset: 0xf0
	// Line 3445, Address: 0x1030f0c, Func Offset: 0xfc
	// Line 3448, Address: 0x1030f28, Func Offset: 0x118
	// Line 3449, Address: 0x1030f34, Func Offset: 0x124
	// Line 3451, Address: 0x1030f54, Func Offset: 0x144
	// Line 3452, Address: 0x1030f60, Func Offset: 0x150
	// Line 3454, Address: 0x1030f6c, Func Offset: 0x15c
	// Line 3458, Address: 0x1030f74, Func Offset: 0x164
	// Line 3459, Address: 0x1030f84, Func Offset: 0x174
	// Line 3461, Address: 0x1030f90, Func Offset: 0x180
	// Line 3462, Address: 0x1030f94, Func Offset: 0x184
	// Func End, Address: 0x1030fa4, Func Offset: 0x194
}

// 
// Start address: 0x1030fb0
int egg1leg3_03(_anon1* pActwk)
{
	// Line 3467, Address: 0x1030fb0, Func Offset: 0
	// Line 3468, Address: 0x1030fbc, Func Offset: 0xc
	// Line 3469, Address: 0x1030fd8, Func Offset: 0x28
	// Line 3470, Address: 0x1030ff4, Func Offset: 0x44
	// Line 3473, Address: 0x1031004, Func Offset: 0x54
	// Line 3474, Address: 0x103100c, Func Offset: 0x5c
	// Line 3475, Address: 0x1031014, Func Offset: 0x64
	// Line 3476, Address: 0x103101c, Func Offset: 0x6c
	// Line 3477, Address: 0x1031024, Func Offset: 0x74
	// Line 3478, Address: 0x1031034, Func Offset: 0x84
	// Line 3480, Address: 0x1031040, Func Offset: 0x90
	// Line 3481, Address: 0x103104c, Func Offset: 0x9c
	// Line 3482, Address: 0x1031050, Func Offset: 0xa0
	// Func End, Address: 0x1031060, Func Offset: 0xb0
}

// 
// Start address: 0x1031060
int egg1leg3_02(_anon1* pActwk)
{
	// Line 3487, Address: 0x1031060, Func Offset: 0
	// Line 3490, Address: 0x103106c, Func Offset: 0xc
	// Line 3492, Address: 0x1031084, Func Offset: 0x24
	// Line 3493, Address: 0x1031090, Func Offset: 0x30
	// Line 3508, Address: 0x10310b0, Func Offset: 0x50
	// Line 3509, Address: 0x10310bc, Func Offset: 0x5c
	// Line 3512, Address: 0x10310c8, Func Offset: 0x68
	// Line 3513, Address: 0x10310cc, Func Offset: 0x6c
	// Func End, Address: 0x10310dc, Func Offset: 0x7c
}

// 
// Start address: 0x10310e0
int egg1leg3_04(_anon1* pActwk)
{
	// Line 3518, Address: 0x10310e0, Func Offset: 0
	// Line 3519, Address: 0x10310ec, Func Offset: 0xc
	// Line 3520, Address: 0x10310f8, Func Offset: 0x18
	// Line 3521, Address: 0x10310fc, Func Offset: 0x1c
	// Func End, Address: 0x103110c, Func Offset: 0x2c
}

// 
// Start address: 0x1031110
int egg1leg3_05(_anon1* pActwk)
{
	short subact;
	// Line 3526, Address: 0x1031110, Func Offset: 0
	// Line 3529, Address: 0x103111c, Func Offset: 0xc
	// Line 3530, Address: 0x103112c, Func Offset: 0x1c
	// Line 3531, Address: 0x1031158, Func Offset: 0x48
	// Line 3532, Address: 0x1031184, Func Offset: 0x74
	// Line 3533, Address: 0x10311b0, Func Offset: 0xa0
	// Line 3534, Address: 0x10311dc, Func Offset: 0xcc
	// Line 3535, Address: 0x1031208, Func Offset: 0xf8
	// Line 3536, Address: 0x1031248, Func Offset: 0x138
	// Line 3537, Address: 0x1031274, Func Offset: 0x164
	// Line 3538, Address: 0x10312a0, Func Offset: 0x190
	// Line 3539, Address: 0x10312cc, Func Offset: 0x1bc
	// Line 3540, Address: 0x10312d0, Func Offset: 0x1c0
	// Func End, Address: 0x10312e0, Func Offset: 0x1d0
}

// 
// Start address: 0x10312e0
void leg3_set(_anon1* pActwk)
{
	short subact;
	int xs;
	int ys;
	// Line 3544, Address: 0x10312e0, Func Offset: 0
	// Line 3548, Address: 0x10312f8, Func Offset: 0x18
	// Line 3550, Address: 0x1031310, Func Offset: 0x30
	// Line 3551, Address: 0x103131c, Func Offset: 0x3c
	// Line 3553, Address: 0x1031324, Func Offset: 0x44
	// Line 3556, Address: 0x103133c, Func Offset: 0x5c
	// Line 3557, Address: 0x1031344, Func Offset: 0x64
	// Line 3559, Address: 0x103134c, Func Offset: 0x6c
	// Line 3561, Address: 0x1031364, Func Offset: 0x84
	// Line 3562, Address: 0x1031368, Func Offset: 0x88
	// Line 3567, Address: 0x103136c, Func Offset: 0x8c
	// Line 3568, Address: 0x103137c, Func Offset: 0x9c
	// Line 3569, Address: 0x10313a8, Func Offset: 0xc8
	// Line 3570, Address: 0x10313d4, Func Offset: 0xf4
	// Line 3571, Address: 0x1031400, Func Offset: 0x120
	// Line 3572, Address: 0x103142c, Func Offset: 0x14c
	// Line 3573, Address: 0x1031458, Func Offset: 0x178
	// Line 3574, Address: 0x1031484, Func Offset: 0x1a4
	// Line 3575, Address: 0x10314b0, Func Offset: 0x1d0
	// Line 3576, Address: 0x10314dc, Func Offset: 0x1fc
	// Line 3577, Address: 0x1031508, Func Offset: 0x228
	// Line 3578, Address: 0x1031534, Func Offset: 0x254
	// Line 3580, Address: 0x1031560, Func Offset: 0x280
	// Func End, Address: 0x103157c, Func Offset: 0x29c
}

// 
// Start address: 0x1031580
int egg1leg3_06(_anon1* pActwk)
{
	int ret;
	// Line 3585, Address: 0x1031580, Func Offset: 0
	// Line 3586, Address: 0x1031590, Func Offset: 0x10
	// Line 3588, Address: 0x1031594, Func Offset: 0x14
	// Line 3590, Address: 0x10315ac, Func Offset: 0x2c
	// Line 3592, Address: 0x10315bc, Func Offset: 0x3c
	// Line 3594, Address: 0x10315d4, Func Offset: 0x54
	// Line 3595, Address: 0x10315dc, Func Offset: 0x5c
	// Line 3596, Address: 0x10315ec, Func Offset: 0x6c
	// Line 3599, Address: 0x10315f4, Func Offset: 0x74
	// Line 3600, Address: 0x10315fc, Func Offset: 0x7c
	// Line 3602, Address: 0x103160c, Func Offset: 0x8c
	// Line 3606, Address: 0x1031614, Func Offset: 0x94
	// Line 3608, Address: 0x103162c, Func Offset: 0xac
	// Line 3609, Address: 0x1031650, Func Offset: 0xd0
	// Line 3610, Address: 0x1031674, Func Offset: 0xf4
	// Line 3613, Address: 0x103167c, Func Offset: 0xfc
	// Line 3614, Address: 0x10316a0, Func Offset: 0x120
	// Line 3618, Address: 0x10316c4, Func Offset: 0x144
	// Line 3619, Address: 0x10316dc, Func Offset: 0x15c
	// Line 3620, Address: 0x10316f4, Func Offset: 0x174
	// Line 3622, Address: 0x1031710, Func Offset: 0x190
	// Line 3623, Address: 0x1031714, Func Offset: 0x194
	// Line 3624, Address: 0x1031720, Func Offset: 0x1a0
	// Line 3626, Address: 0x1031728, Func Offset: 0x1a8
	// Line 3627, Address: 0x1031730, Func Offset: 0x1b0
	// Line 3628, Address: 0x1031734, Func Offset: 0x1b4
	// Func End, Address: 0x1031748, Func Offset: 0x1c8
}

// 
// Start address: 0x1031750
void bom_set(_anon1* pActwk)
{
	short temp;
	_anon1* subActwk;
	short bom_tbl[20];
	// Line 3634, Address: 0x1031750, Func Offset: 0
	// Line 3641, Address: 0x1031760, Func Offset: 0x10
	// Line 3658, Address: 0x1031794, Func Offset: 0x44
	// Line 3660, Address: 0x10317c4, Func Offset: 0x74
	// Line 3661, Address: 0x1031818, Func Offset: 0xc8
	// Line 3663, Address: 0x103182c, Func Offset: 0xdc
	// Line 3665, Address: 0x1031838, Func Offset: 0xe8
	// Line 3666, Address: 0x1031844, Func Offset: 0xf4
	// Line 3667, Address: 0x1031884, Func Offset: 0x134
	// Line 3668, Address: 0x10318c8, Func Offset: 0x178
	// Line 3671, Address: 0x10318d4, Func Offset: 0x184
	// Func End, Address: 0x10318e8, Func Offset: 0x198
}

// 
// Start address: 0x10318f0
void tenmetu()
{
	// Line 3684, Address: 0x10318f0, Func Offset: 0
	// Func End, Address: 0x10318f8, Func Offset: 0x8
}

