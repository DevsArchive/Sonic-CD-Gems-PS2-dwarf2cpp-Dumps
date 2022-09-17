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

typedef void(*type_2)(_anon0*);
typedef void(*type_5)(_anon0*);
typedef void(*type_19)(_anon0*);
typedef void(*type_31)(_anon0*);
typedef void(*type_42)(_anon0*);
typedef void(*type_43)(_anon0*);
typedef void(*type_46)(_anon0*);
typedef void(*type_51)(_anon0*);
typedef void(*type_57)(_anon0*);
typedef void(*type_59)(_anon0*);

typedef _anon9 type_0[20];
typedef short type_1[12];
typedef _anon1* type_3[4];
typedef unsigned char type_4[4];
typedef void(*type_6)(_anon0*)[2];
typedef _anon9 type_7[0];
typedef _anon1* type_8[4];
typedef short type_9[16];
typedef unsigned char type_10[10];
typedef _anon1* type_11[1];
typedef short type_12[0];
typedef unsigned char type_13[5];
typedef unsigned char type_14[3];
typedef _anon1* type_15[8];
typedef unsigned char type_16[22];
typedef _anon1* type_17[2];
typedef short type_18[24];
typedef void(*type_20)(_anon0*)[2];
typedef _anon1* type_21[2];
typedef unsigned char type_22[7];
typedef _anon1* type_23[2];
typedef _anon1* type_24[4];
typedef unsigned char type_25[2];
typedef _anon1* type_26[1];
typedef unsigned char type_27[22];
typedef short type_28[3];
typedef _anon1* type_29[5];
typedef short type_30[3];
typedef void(*type_32)(_anon0*)[2];
typedef _anon1* type_33[5];
typedef unsigned char type_34[6];
typedef _anon1* type_35[5];
typedef unsigned char* type_36[5];
typedef unsigned char type_37[4];
typedef unsigned char type_38[12];
typedef short type_39[2];
typedef unsigned char* type_40[2];
typedef unsigned char type_41[6];
typedef void(*type_44)(_anon0*)[3];
typedef void(*type_45)(_anon0*)[3];
typedef void(*type_47)(_anon0*)[11];
typedef unsigned char* type_48[2];
typedef unsigned char type_49[4];
typedef short type_50[3];
typedef void(*type_52)(_anon0*)[3];
typedef _anon0 type_53[128];
typedef char type_54[5];
typedef _anon1** type_55[3];
typedef unsigned char* type_56[1];
typedef void(*type_58)(_anon0*)[3];
typedef void(*type_60)(_anon0*)[6];
typedef unsigned char* type_61[1];
typedef unsigned short type_62[3];
typedef unsigned char type_63[18];
typedef _anon1* type_64[17];
typedef _anon1* type_65[6];
typedef _anon1* type_66[2];
typedef void(*type_67)(_anon0*)[3];

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

unsigned char stbStx;
unsigned char stbPatOff;
char stbRad;
void(*boss6_tbl)(_anon0*)[11];
unsigned char* egg6_pchg[5];
_anon0 actwk[128];
unsigned char bossflag;
unsigned char bossstart;
short scralim_n_right;
short scralim_right;
short scralim_n_left;
short scralim_left;
_anon1* egg6_pat[17];
unsigned char generate_flag;
short scr_dir_tbl[0];
void(*egg6meca0_tbl)(_anon0*)[3];
_anon1* egg6meca0_pat[2];
void(*egg6meca1_tbl)(_anon0*)[2];
_anon1* egg6meca1_pat[4];
void(*egg6meca2_tbl)(_anon0*)[2];
unsigned char* egg6meca2_pchg[2];
_anon1* egg6meca2_pat[4];
void(*egg6bakuha_tbl)(_anon0*)[3];
_anon1* egg6bakuha_pat[8];
unsigned char* egg6bakuha_pchg[2];
void(*egg6toge_tbl)(_anon0*)[3];
_anon1* egg6toge_pat[1];
void(*egg6gareki_tbl)(_anon0*)[3];
_anon1* egg6gareki_pat[2];
unsigned char* egg6gareki_pchg[1];
void(*egg6beam_tbl)(_anon0*)[2];
_anon1** e6beam_tbl[3];
_anon1* egg6beam_pat[5];
void(*egg6yuka_tbl)(_anon0*)[3];
short yuka_tbl[24];
_anon1* egg6yuka_pat[1];
void(*egg6door_tbl)(_anon0*)[6];
_anon1* egg6beamer_pat[2];
_anon1* egg6door_pat[2];
short yuka_xini[12];
short gareki_yini[3];
_anon1* egg6gareki4_pat[4];
short scralim_n_down;
short scralim_down;
unsigned char clchgtim[7];
unsigned char e6pat_pchg0[22];
unsigned char e6pat_pchg1[6];
unsigned char e6pat_pchg2[3];
unsigned char e6pat_pchg3[4];
unsigned char e6pat_pchg4[10];
_anon1 e6spr_pat00;
_anon1 e6spr_pat01;
_anon1 e6spr_pat02;
_anon1 e6spr_pat03;
_anon1 e6spr_pat04;
_anon1 e6spr_pat05;
_anon1 e6spr_pat06;
_anon1 e6spr_pat07;
_anon1 e6spr_pat08;
_anon1 e6spr_pat09;
_anon1 e6spr_pat10;
_anon1 e6spr_pat11;
_anon1 e6spr_pat12;
_anon1 e6spr_pat13;
_anon1 e6spr_pat14;
_anon1 e6spr_pat15;
_anon1 e6spr_pat16;
_anon1* egg6_pat_yarare[6];
_anon1 e6meca_pat00;
_anon1 e6meca_pat01;
_anon1 e6hari_pat00;
_anon1 e6hari_pat01;
_anon1 e6hari_pat02;
_anon1 e6hari_pat03;
unsigned char egg6_fire_pchg00[6];
unsigned char egg6_fire_pchg01[4];
_anon1 e6fire_pat00;
_anon1 e6fire_pat01;
_anon1 e6fire_pat02;
_anon1 e6fire_pat03;
_anon1 e6toge_pat00;
unsigned char egg6bakuha_pchg00[5];
unsigned char egg6bakuha_pchg01[12];
_anon1 e6bakuha_pat00;
_anon1 e6bakuha_pat01;
_anon1 e6bakuha_pat02;
_anon1 e6bakuha_pat03;
_anon1 e6bakuha_pat04;
_anon1 e6bakuha_pat05;
_anon1 e6bakuha_pat06;
_anon1 e6beamer_pat00;
_anon1 e6beamer_pat01;
_anon1 e6door_pat00;
_anon1 e6door_pat01;
unsigned char egg6gareki_pchg00[4];
_anon1 e6gareki_pat00;
_anon1 e6gareki_pat01;
_anon1 e6gareki4_pat00;
_anon1 e6gareki4_pat01;
_anon1 e6gareki4_pat02;
_anon1 e6gareki4_pat03;
_anon1 e6yuka_pat00;
unsigned char egg6beam_pchg00[18];
unsigned char* egg6beam_pchg[1];
_anon1 e6beam_pat00;
_anon1 e6beam_pat01;
_anon1 e6beam_pat02;
_anon1 e6beam_pat03;
_anon1 e6beam_pat04;
_anon1 e6beam2_pat00;
_anon1 e6beam2_pat01;
_anon1 e6beam2_pat02;
_anon1 e6beam2_pat03;
_anon1 e6beam2_pat04;
_anon1* egg6beam2_pat[5];
_anon1 e6beam3_pat00;
_anon1 e6beam3_pat01;
_anon1 e6beam3_pat02;
_anon1 e6beam3_pat03;
_anon1 e6beam3_pat04;
_anon1* egg6beam3_pat[5];

void egg6boss(_anon0* pActwk);
void egg6_hitchk(_anon0* pActwk);
void egg6_coliset(_anon0* pActwk);
void egg6_beam_ctrl();
void egg6_start(_anon0* pActwk);
void egg6_ini(_anon0* pActwk);
void egg6_none(_anon0* pActwk);
void egg6_down(_anon0* pActwk);
void egg6_hover(_anon0* pActwk);
void fuwafuwa(_anon0* pActwk);
void egg6_up(_anon0* pActwk);
void egg6_event(_anon0* pActwk);
void beamdemo_start(_anon0* pActwk);
void beam_start(_anon0* pActwk);
void rakkabutu(_anon0* pActwk);
void event_end(_anon0* pActwk);
void egg6_event_retry(_anon0* pActwk);
void egg6_dead1(_anon0* pActwk);
void egg6_dead2(_anon0* pActwk);
void enkei_in(_anon0* pActwk);
void enkei_out(_anon0* pActwk);
void egg6_flashout();
void egg6_flashin();
void egg6_cgchg(_anon0* pActwk);
void dead2_end(_anon0* pActwk);
void door_open();
void egg6_dead3(_anon0* pActwk);
void egg6_dead4(_anon0* pActwk);
void genecolor_setchk(_anon0* pActwk);
void dead_snc_pos2();
void dead_snc_pos();
void egg6meca0(_anon0* pActwk);
void egg6meca0_ini(_anon0* pActwk);
void egg6meca0_01(_anon0* pActwk);
void egg6meca0_02(_anon0* pActwk);
void egg6meca1(_anon0* pActwk);
void egg6meca1_ini(_anon0* pActwk);
void egg6meca1_01(_anon0* pActwk);
void egg6meca2(_anon0* pActwk);
void egg6meca2_ini(_anon0* pActwk);
void egg6meca2_01(_anon0* pActwk);
void egg6bakuha(_anon0* pActwk);
void egg6bakuha_ini(_anon0* pActwk);
void egg6bakuha_01(_anon0* pActwk);
void egg6bakuha_02(_anon0* pActwk);
void egg6toge(_anon0* pActwk);
void egg6toge_ini(_anon0* pActwk);
void egg6toge_01(_anon0* pActwk);
void egg6toge_02(_anon0* pActwk);
void egg6gareki(_anon0* pActwk);
void egg6gareki_ini(_anon0* pActwk);
void egg6gareki_01(_anon0* pActwk);
void egg6gareki_02(_anon0* pActwk);
void egg6beam(_anon0* pActwk);
void egg6beam_ini(_anon0* pActwk);
void egg6beam_01(_anon0* pActwk);
void egg6yuka(_anon0* pActwk);
void egg6yuka_ini(_anon0* pActwk);
void egg6yuka_01(_anon0* pActwk);
void egg6yuka_02(_anon0* pActwk);
void egg6_yuka_ridechk(_anon0* pActwk);
void egg6_yuka_ride_on(_anon0* pActwk);
short egg6_yuka_hasami_chk(_anon0* pActwk);
short mydamage(_anon0* pActwk);
void egg6door(_anon0* pActwk);
void egg6door_ini(_anon0* pActwk);
void egg6door_closewait(_anon0* pActwk);
void egg6door_move(_anon0* pActwk);
void egg6door_closed(_anon0* pActwk);
void egg6door_openwait(_anon0* pActwk);
void egg6door_beamer(_anon0* pActwk);
void add_spd2(_anon0* pActwk);
void add_spd(_anon0* pActwk);
short act_search(unsigned char wActNo, unsigned char* bpActoff, _anon0** ppActAdr);
short get_gareki_y(_anon0* pActwk);
void make_toge(_anon0* pActwk, short iD0);
void make_yuka(_anon0* pActwk, short iD0);
void make_gareki(_anon0* pActwk, short iD0);
void make_gareki4(_anon0* pActwk);
void make_beam(short iD0);
void make_bakuha(_anon0* pActwk);
void make_bakuha2(_anon0* pActwk);
void make_meca(_anon0* pActwk);
void frameout_chk(_anon0* pActwk);
short get_snc_floor();
short get_beam_pos();
void egg6_jisin(_anon0* pActwk);
void colchg_set(unsigned char byD0);
void colchg_stop();
void colchg_start();

// 
// Start address: 0x1027f20
void egg6boss(_anon0* pActwk)
{
	// Line 335, Address: 0x1027f20, Func Offset: 0
	// Line 336, Address: 0x1027f2c, Func Offset: 0xc
	// Line 337, Address: 0x1027f38, Func Offset: 0x18
	// Line 339, Address: 0x1027f44, Func Offset: 0x24
	// Line 340, Address: 0x1027f4c, Func Offset: 0x2c
	// Line 341, Address: 0x1027f90, Func Offset: 0x70
	// Line 342, Address: 0x1027fa4, Func Offset: 0x84
	// Line 343, Address: 0x1027fac, Func Offset: 0x8c
	// Line 344, Address: 0x1027fc0, Func Offset: 0xa0
	// Line 345, Address: 0x1027fcc, Func Offset: 0xac
	// Func End, Address: 0x1027fdc, Func Offset: 0xbc
}

// 
// Start address: 0x1027fe0
void egg6_hitchk(_anon0* pActwk)
{
	_anon0* pActbp;
	// Line 357, Address: 0x1027fe0, Func Offset: 0
	// Line 361, Address: 0x1027ff0, Func Offset: 0x10
	// Line 364, Address: 0x1028008, Func Offset: 0x28
	// Line 366, Address: 0x102801c, Func Offset: 0x3c
	// Line 367, Address: 0x102802c, Func Offset: 0x4c
	// Line 368, Address: 0x1028040, Func Offset: 0x60
	// Line 369, Address: 0x102804c, Func Offset: 0x6c
	// Line 372, Address: 0x1028054, Func Offset: 0x74
	// Line 373, Address: 0x1028078, Func Offset: 0x98
	// Line 375, Address: 0x102808c, Func Offset: 0xac
	// Line 379, Address: 0x102809c, Func Offset: 0xbc
	// Line 380, Address: 0x10280ac, Func Offset: 0xcc
	// Line 381, Address: 0x10280b4, Func Offset: 0xd4
	// Line 382, Address: 0x10280b8, Func Offset: 0xd8
	// Line 383, Address: 0x10280c4, Func Offset: 0xe4
	// Line 384, Address: 0x10280cc, Func Offset: 0xec
	// Line 386, Address: 0x10280d8, Func Offset: 0xf8
	// Line 387, Address: 0x10280e4, Func Offset: 0x104
	// Func End, Address: 0x10280f8, Func Offset: 0x118
}

// 
// Start address: 0x1028100
void egg6_coliset(_anon0* pActwk)
{
	_anon0* pActbp;
	// Line 399, Address: 0x1028100, Func Offset: 0
	// Line 402, Address: 0x102810c, Func Offset: 0xc
	// Line 403, Address: 0x1028130, Func Offset: 0x30
	// Line 404, Address: 0x102813c, Func Offset: 0x3c
	// Line 405, Address: 0x1028148, Func Offset: 0x48
	// Line 406, Address: 0x1028150, Func Offset: 0x50
	// Line 407, Address: 0x1028158, Func Offset: 0x58
	// Func End, Address: 0x1028168, Func Offset: 0x68
}

// 
// Start address: 0x1028170
void egg6_beam_ctrl()
{
	unsigned char byD0;
	// Line 419, Address: 0x1028170, Func Offset: 0
	// Line 422, Address: 0x102817c, Func Offset: 0xc
	// Line 423, Address: 0x102818c, Func Offset: 0x1c
	// Line 424, Address: 0x10281a0, Func Offset: 0x30
	// Line 427, Address: 0x10281bc, Func Offset: 0x4c
	// Line 429, Address: 0x10281d4, Func Offset: 0x64
	// Line 430, Address: 0x10281e8, Func Offset: 0x78
	// Line 433, Address: 0x10281f0, Func Offset: 0x80
	// Line 434, Address: 0x1028204, Func Offset: 0x94
	// Func End, Address: 0x1028218, Func Offset: 0xa8
}

// 
// Start address: 0x1028220
void egg6_start(_anon0* pActwk)
{
	// Line 446, Address: 0x1028220, Func Offset: 0
	// Line 447, Address: 0x102822c, Func Offset: 0xc
	// Line 449, Address: 0x1028248, Func Offset: 0x28
	// Line 450, Address: 0x1028254, Func Offset: 0x34
	// Line 452, Address: 0x102825c, Func Offset: 0x3c
	// Line 453, Address: 0x1028268, Func Offset: 0x48
	// Line 454, Address: 0x1028274, Func Offset: 0x54
	// Func End, Address: 0x1028284, Func Offset: 0x64
}

// 
// Start address: 0x1028290
void egg6_ini(_anon0* pActwk)
{
	// Line 466, Address: 0x1028290, Func Offset: 0
	// Line 467, Address: 0x102829c, Func Offset: 0xc
	// Line 470, Address: 0x10282b4, Func Offset: 0x24
	// Line 471, Address: 0x10282c0, Func Offset: 0x30
	// Line 476, Address: 0x10282cc, Func Offset: 0x3c
	// Line 478, Address: 0x10282d8, Func Offset: 0x48
	// Line 479, Address: 0x10282e8, Func Offset: 0x58
	// Line 480, Address: 0x10282f4, Func Offset: 0x64
	// Line 481, Address: 0x1028300, Func Offset: 0x70
	// Line 482, Address: 0x102830c, Func Offset: 0x7c
	// Line 483, Address: 0x1028318, Func Offset: 0x88
	// Line 485, Address: 0x1028328, Func Offset: 0x98
	// Line 486, Address: 0x1028338, Func Offset: 0xa8
	// Line 488, Address: 0x1028344, Func Offset: 0xb4
	// Line 489, Address: 0x1028358, Func Offset: 0xc8
	// Line 490, Address: 0x102836c, Func Offset: 0xdc
	// Line 491, Address: 0x1028380, Func Offset: 0xf0
	// Line 492, Address: 0x102838c, Func Offset: 0xfc
	// Line 493, Address: 0x1028398, Func Offset: 0x108
	// Line 494, Address: 0x10283a4, Func Offset: 0x114
	// Line 495, Address: 0x10283b0, Func Offset: 0x120
	// Line 496, Address: 0x10283bc, Func Offset: 0x12c
	// Line 499, Address: 0x10283c4, Func Offset: 0x134
	// Line 500, Address: 0x10283d4, Func Offset: 0x144
	// Line 503, Address: 0x10283f0, Func Offset: 0x160
	// Line 504, Address: 0x10283f8, Func Offset: 0x168
	// Line 505, Address: 0x1028404, Func Offset: 0x174
	// Line 506, Address: 0x102840c, Func Offset: 0x17c
	// Line 507, Address: 0x1028418, Func Offset: 0x188
	// Line 509, Address: 0x1028424, Func Offset: 0x194
	// Line 510, Address: 0x1028430, Func Offset: 0x1a0
	// Func End, Address: 0x1028440, Func Offset: 0x1b0
}

// 
// Start address: 0x1028440
void egg6_none(_anon0* pActwk)
{
	// Line 522, Address: 0x1028440, Func Offset: 0
	// Line 523, Address: 0x1028448, Func Offset: 0x8
	// Line 524, Address: 0x1028458, Func Offset: 0x18
	// Func End, Address: 0x1028464, Func Offset: 0x24
}

// 
// Start address: 0x1028470
void egg6_down(_anon0* pActwk)
{
	_anon7 wD0;
	unsigned short down_pos[3];
	// Line 536, Address: 0x1028470, Func Offset: 0
	// Line 538, Address: 0x102847c, Func Offset: 0xc
	// Line 540, Address: 0x10284a0, Func Offset: 0x30
	// Line 541, Address: 0x10284a4, Func Offset: 0x34
	// Line 542, Address: 0x10284b0, Func Offset: 0x40
	// Line 543, Address: 0x10284bc, Func Offset: 0x4c
	// Line 544, Address: 0x10284d4, Func Offset: 0x64
	// Line 547, Address: 0x1028504, Func Offset: 0x94
	// Line 548, Address: 0x1028510, Func Offset: 0xa0
	// Line 549, Address: 0x102851c, Func Offset: 0xac
	// Line 550, Address: 0x1028524, Func Offset: 0xb4
	// Line 551, Address: 0x1028530, Func Offset: 0xc0
	// Line 553, Address: 0x102853c, Func Offset: 0xcc
	// Line 554, Address: 0x1028548, Func Offset: 0xd8
	// Func End, Address: 0x1028558, Func Offset: 0xe8
}

// 
// Start address: 0x1028560
void egg6_hover(_anon0* pActwk)
{
	_anon7 wD0;
	// Line 566, Address: 0x1028560, Func Offset: 0
	// Line 569, Address: 0x102856c, Func Offset: 0xc
	// Line 570, Address: 0x102857c, Func Offset: 0x1c
	// Line 573, Address: 0x102859c, Func Offset: 0x3c
	// Line 574, Address: 0x10285a8, Func Offset: 0x48
	// Line 576, Address: 0x10285b0, Func Offset: 0x50
	// Line 577, Address: 0x10285bc, Func Offset: 0x5c
	// Line 579, Address: 0x10285d0, Func Offset: 0x70
	// Line 580, Address: 0x10285e0, Func Offset: 0x80
	// Line 585, Address: 0x10285fc, Func Offset: 0x9c
	// Line 587, Address: 0x1028604, Func Offset: 0xa4
	// Line 588, Address: 0x1028610, Func Offset: 0xb0
	// Line 589, Address: 0x1028618, Func Offset: 0xb8
	// Line 590, Address: 0x1028624, Func Offset: 0xc4
	// Line 592, Address: 0x1028630, Func Offset: 0xd0
	// Line 593, Address: 0x1028638, Func Offset: 0xd8
	// Func End, Address: 0x1028648, Func Offset: 0xe8
}

// 
// Start address: 0x1028650
void fuwafuwa(_anon0* pActwk)
{
	short iSin;
	short iCos;
	unsigned char bRad;
	// Line 605, Address: 0x1028650, Func Offset: 0
	// Line 610, Address: 0x1028660, Func Offset: 0x10
	// Line 612, Address: 0x1028678, Func Offset: 0x28
	// Line 613, Address: 0x1028688, Func Offset: 0x38
	// Line 615, Address: 0x1028694, Func Offset: 0x44
	// Line 616, Address: 0x10286bc, Func Offset: 0x6c
	// Line 617, Address: 0x10286e0, Func Offset: 0x90
	// Line 625, Address: 0x1028700, Func Offset: 0xb0
	// Line 628, Address: 0x1028708, Func Offset: 0xb8
	// Line 630, Address: 0x1028720, Func Offset: 0xd0
	// Line 631, Address: 0x1028738, Func Offset: 0xe8
	// Line 632, Address: 0x1028748, Func Offset: 0xf8
	// Line 633, Address: 0x1028754, Func Offset: 0x104
	// Line 634, Address: 0x1028760, Func Offset: 0x110
	// Line 635, Address: 0x102876c, Func Offset: 0x11c
	// Line 636, Address: 0x1028780, Func Offset: 0x130
	// Func End, Address: 0x1028794, Func Offset: 0x144
}

// 
// Start address: 0x10287a0
void egg6_up(_anon0* pActwk)
{
	_anon7 wD0;
	short up_pos[3];
	// Line 648, Address: 0x10287a0, Func Offset: 0
	// Line 650, Address: 0x10287ac, Func Offset: 0xc
	// Line 652, Address: 0x10287d0, Func Offset: 0x30
	// Line 653, Address: 0x10287dc, Func Offset: 0x3c
	// Line 654, Address: 0x10287ec, Func Offset: 0x4c
	// Line 657, Address: 0x1028824, Func Offset: 0x84
	// Line 658, Address: 0x1028840, Func Offset: 0xa0
	// Line 659, Address: 0x1028848, Func Offset: 0xa8
	// Line 660, Address: 0x1028854, Func Offset: 0xb4
	// Line 661, Address: 0x1028860, Func Offset: 0xc0
	// Line 663, Address: 0x1028870, Func Offset: 0xd0
	// Line 665, Address: 0x1028888, Func Offset: 0xe8
	// Line 666, Address: 0x1028894, Func Offset: 0xf4
	// Line 669, Address: 0x10288a0, Func Offset: 0x100
	// Line 670, Address: 0x10288a8, Func Offset: 0x108
	// Line 671, Address: 0x10288b0, Func Offset: 0x110
	// Line 672, Address: 0x10288b8, Func Offset: 0x118
	// Func End, Address: 0x10288c8, Func Offset: 0x128
}

// 
// Start address: 0x10288d0
void egg6_event(_anon0* pActwk)
{
	unsigned short wDemoNo;
	// Line 684, Address: 0x10288d0, Func Offset: 0
	// Line 687, Address: 0x10288e0, Func Offset: 0x10
	// Line 689, Address: 0x10288ec, Func Offset: 0x1c
	// Line 690, Address: 0x10288fc, Func Offset: 0x2c
	// Line 692, Address: 0x1028908, Func Offset: 0x38
	// Line 695, Address: 0x102895c, Func Offset: 0x8c
	// Line 696, Address: 0x1028968, Func Offset: 0x98
	// Line 697, Address: 0x1028974, Func Offset: 0xa4
	// Line 699, Address: 0x102897c, Func Offset: 0xac
	// Line 700, Address: 0x1028988, Func Offset: 0xb8
	// Line 702, Address: 0x1028990, Func Offset: 0xc0
	// Line 703, Address: 0x10289a4, Func Offset: 0xd4
	// Line 704, Address: 0x10289b0, Func Offset: 0xe0
	// Line 706, Address: 0x10289b8, Func Offset: 0xe8
	// Line 707, Address: 0x10289c4, Func Offset: 0xf4
	// Line 708, Address: 0x10289d0, Func Offset: 0x100
	// Line 710, Address: 0x10289d8, Func Offset: 0x108
	// Line 711, Address: 0x10289ec, Func Offset: 0x11c
	// Line 712, Address: 0x10289f4, Func Offset: 0x124
	// Line 713, Address: 0x1028a00, Func Offset: 0x130
	// Line 715, Address: 0x1028a08, Func Offset: 0x138
	// Line 716, Address: 0x1028a14, Func Offset: 0x144
	// Line 718, Address: 0x1028a1c, Func Offset: 0x14c
	// Line 721, Address: 0x1028a28, Func Offset: 0x158
	// Func End, Address: 0x1028a3c, Func Offset: 0x16c
}

// 
// Start address: 0x1028a40
void beamdemo_start(_anon0* pActwk)
{
	short iD0;
	// Line 733, Address: 0x1028a40, Func Offset: 0
	// Line 735, Address: 0x1028a50, Func Offset: 0x10
	// Line 737, Address: 0x1028a5c, Func Offset: 0x1c
	// Line 738, Address: 0x1028a6c, Func Offset: 0x2c
	// Line 739, Address: 0x1028a78, Func Offset: 0x38
	// Line 740, Address: 0x1028a84, Func Offset: 0x44
	// Func End, Address: 0x1028a98, Func Offset: 0x58
}

// 
// Start address: 0x1028aa0
void beam_start(_anon0* pActwk)
{
	unsigned char byFloor;
	unsigned char byD1;
	// Line 752, Address: 0x1028aa0, Func Offset: 0
	// Line 757, Address: 0x1028ab4, Func Offset: 0x14
	// Line 758, Address: 0x1028acc, Func Offset: 0x2c
	// Line 759, Address: 0x1028adc, Func Offset: 0x3c
	// Line 762, Address: 0x1028b08, Func Offset: 0x68
	// Line 763, Address: 0x1028b10, Func Offset: 0x70
	// Line 765, Address: 0x1028b18, Func Offset: 0x78
	// Line 766, Address: 0x1028b20, Func Offset: 0x80
	// Line 768, Address: 0x1028b28, Func Offset: 0x88
	// Line 771, Address: 0x1028b30, Func Offset: 0x90
	// Line 772, Address: 0x1028b38, Func Offset: 0x98
	// Line 773, Address: 0x1028b44, Func Offset: 0xa4
	// Func End, Address: 0x1028b5c, Func Offset: 0xbc
}

// 
// Start address: 0x1028b60
void rakkabutu(_anon0* pActwk)
{
	unsigned short wD0;
	short iD0;
	// Line 785, Address: 0x1028b60, Func Offset: 0
	// Line 788, Address: 0x1028b74, Func Offset: 0x14
	// Line 790, Address: 0x1028b90, Func Offset: 0x30
	// Line 791, Address: 0x1028bac, Func Offset: 0x4c
	// Line 795, Address: 0x1028bc0, Func Offset: 0x60
	// Line 797, Address: 0x1028bdc, Func Offset: 0x7c
	// Line 798, Address: 0x1028bf8, Func Offset: 0x98
	// Line 801, Address: 0x1028c0c, Func Offset: 0xac
	// Line 805, Address: 0x1028c24, Func Offset: 0xc4
	// Line 808, Address: 0x1028c38, Func Offset: 0xd8
	// Line 810, Address: 0x1028c54, Func Offset: 0xf4
	// Line 811, Address: 0x1028c78, Func Offset: 0x118
	// Line 812, Address: 0x1028c88, Func Offset: 0x128
	// Line 817, Address: 0x1028c90, Func Offset: 0x130
	// Line 818, Address: 0x1028ca0, Func Offset: 0x140
	// Line 819, Address: 0x1028ca8, Func Offset: 0x148
	// Line 820, Address: 0x1028cb4, Func Offset: 0x154
	// Line 821, Address: 0x1028cc0, Func Offset: 0x160
	// Line 822, Address: 0x1028ccc, Func Offset: 0x16c
	// Line 823, Address: 0x1028cd8, Func Offset: 0x178
	// Line 825, Address: 0x1028ce4, Func Offset: 0x184
	// Line 826, Address: 0x1028cf0, Func Offset: 0x190
	// Line 827, Address: 0x1028cfc, Func Offset: 0x19c
	// Line 828, Address: 0x1028d04, Func Offset: 0x1a4
	// Line 829, Address: 0x1028d10, Func Offset: 0x1b0
	// Line 830, Address: 0x1028d1c, Func Offset: 0x1bc
	// Func End, Address: 0x1028d34, Func Offset: 0x1d4
}

// 
// Start address: 0x1028d40
void event_end(_anon0* pActwk)
{
	// Line 842, Address: 0x1028d40, Func Offset: 0
	// Line 844, Address: 0x1028d4c, Func Offset: 0xc
	// Line 846, Address: 0x1028d64, Func Offset: 0x24
	// Line 847, Address: 0x1028d70, Func Offset: 0x30
	// Line 850, Address: 0x1028d78, Func Offset: 0x38
	// Line 851, Address: 0x1028d80, Func Offset: 0x40
	// Line 852, Address: 0x1028d8c, Func Offset: 0x4c
	// Line 853, Address: 0x1028d94, Func Offset: 0x54
	// Line 854, Address: 0x1028da0, Func Offset: 0x60
	// Line 855, Address: 0x1028dac, Func Offset: 0x6c
	// Func End, Address: 0x1028dbc, Func Offset: 0x7c
}

// 
// Start address: 0x1028dc0
void egg6_event_retry(_anon0* pActwk)
{
	// Line 867, Address: 0x1028dc0, Func Offset: 0
	// Line 868, Address: 0x1028dc8, Func Offset: 0x8
	// Line 869, Address: 0x1028dd4, Func Offset: 0x14
	// Line 870, Address: 0x1028ddc, Func Offset: 0x1c
	// Line 871, Address: 0x1028de8, Func Offset: 0x28
	// Func End, Address: 0x1028df4, Func Offset: 0x34
}

// 
// Start address: 0x1028e00
void egg6_dead1(_anon0* pActwk)
{
	// Line 883, Address: 0x1028e00, Func Offset: 0
	// Line 884, Address: 0x1028e0c, Func Offset: 0xc
	// Line 885, Address: 0x1028e14, Func Offset: 0x14
	// Line 887, Address: 0x1028e30, Func Offset: 0x30
	// Line 888, Address: 0x1028e3c, Func Offset: 0x3c
	// Line 889, Address: 0x1028e60, Func Offset: 0x60
	// Line 892, Address: 0x1028e68, Func Offset: 0x68
	// Line 893, Address: 0x1028e74, Func Offset: 0x74
	// Line 894, Address: 0x1028e80, Func Offset: 0x80
	// Line 895, Address: 0x1028e88, Func Offset: 0x88
	// Line 896, Address: 0x1028e94, Func Offset: 0x94
	// Line 897, Address: 0x1028e9c, Func Offset: 0x9c
	// Func End, Address: 0x1028eac, Func Offset: 0xac
}

// 
// Start address: 0x1028eb0
void egg6_dead2(_anon0* pActwk)
{
	short sUsr_tm;
	// Line 909, Address: 0x1028eb0, Func Offset: 0
	// Line 911, Address: 0x1028ec0, Func Offset: 0x10
	// Line 912, Address: 0x1028edc, Func Offset: 0x2c
	// Line 914, Address: 0x1028ef0, Func Offset: 0x40
	// Line 915, Address: 0x1028f0c, Func Offset: 0x5c
	// Line 917, Address: 0x1028f1c, Func Offset: 0x6c
	// Line 920, Address: 0x1028f24, Func Offset: 0x74
	// Line 921, Address: 0x1028f34, Func Offset: 0x84
	// Line 922, Address: 0x1028f44, Func Offset: 0x94
	// Line 924, Address: 0x1028f58, Func Offset: 0xa8
	// Line 925, Address: 0x1028f64, Func Offset: 0xb4
	// Line 928, Address: 0x1028f6c, Func Offset: 0xbc
	// Line 930, Address: 0x1028f80, Func Offset: 0xd0
	// Line 931, Address: 0x1028f88, Func Offset: 0xd8
	// Line 933, Address: 0x1028f9c, Func Offset: 0xec
	// Line 934, Address: 0x1028fa8, Func Offset: 0xf8
	// Line 939, Address: 0x1028fb0, Func Offset: 0x100
	// Line 941, Address: 0x1028fc4, Func Offset: 0x114
	// Line 942, Address: 0x1028fcc, Func Offset: 0x11c
	// Line 945, Address: 0x1028fd4, Func Offset: 0x124
	// Line 947, Address: 0x1028fe8, Func Offset: 0x138
	// Line 948, Address: 0x1028ff4, Func Offset: 0x144
	// Line 951, Address: 0x1028ffc, Func Offset: 0x14c
	// Line 953, Address: 0x1029010, Func Offset: 0x160
	// Line 954, Address: 0x1029018, Func Offset: 0x168
	// Line 957, Address: 0x1029020, Func Offset: 0x170
	// Line 959, Address: 0x1029034, Func Offset: 0x184
	// Line 961, Address: 0x1029048, Func Offset: 0x198
	// Line 962, Address: 0x1029054, Func Offset: 0x1a4
	// Line 965, Address: 0x102905c, Func Offset: 0x1ac
	// Line 966, Address: 0x1029070, Func Offset: 0x1c0
	// Line 967, Address: 0x102907c, Func Offset: 0x1cc
	// Func End, Address: 0x1029090, Func Offset: 0x1e0
}

// 
// Start address: 0x1029090
void enkei_in(_anon0* pActwk)
{
	unsigned char byTimer;
	unsigned char byCnt;
	// Line 979, Address: 0x1029090, Func Offset: 0
	// Line 982, Address: 0x102909c, Func Offset: 0xc
	// Line 983, Address: 0x10290a8, Func Offset: 0x18
	// Line 984, Address: 0x10290b4, Func Offset: 0x24
	// Line 985, Address: 0x10290c4, Func Offset: 0x34
	// Line 986, Address: 0x10290d0, Func Offset: 0x40
	// Line 987, Address: 0x10290dc, Func Offset: 0x4c
	// Func End, Address: 0x10290ec, Func Offset: 0x5c
}

// 
// Start address: 0x10290f0
void enkei_out(_anon0* pActwk)
{
	unsigned char byTimer;
	unsigned char byCnt;
	// Line 999, Address: 0x10290f0, Func Offset: 0
	// Line 1002, Address: 0x10290fc, Func Offset: 0xc
	// Line 1003, Address: 0x1029108, Func Offset: 0x18
	// Line 1004, Address: 0x1029114, Func Offset: 0x24
	// Line 1005, Address: 0x1029124, Func Offset: 0x34
	// Line 1006, Address: 0x1029130, Func Offset: 0x40
	// Line 1007, Address: 0x102913c, Func Offset: 0x4c
	// Func End, Address: 0x102914c, Func Offset: 0x5c
}

// 
// Start address: 0x1029150
void egg6_flashout()
{
	// Line 1019, Address: 0x1029150, Func Offset: 0
	// Line 1020, Address: 0x1029158, Func Offset: 0x8
	// Line 1021, Address: 0x1029160, Func Offset: 0x10
	// Line 1022, Address: 0x1029168, Func Offset: 0x18
	// Func End, Address: 0x1029178, Func Offset: 0x28
}

// 
// Start address: 0x1029180
void egg6_flashin()
{
	// Line 1034, Address: 0x1029180, Func Offset: 0
	// Line 1035, Address: 0x1029188, Func Offset: 0x8
	// Line 1036, Address: 0x1029190, Func Offset: 0x10
	// Line 1037, Address: 0x1029198, Func Offset: 0x18
	// Func End, Address: 0x10291a8, Func Offset: 0x28
}

// 
// Start address: 0x10291b0
void egg6_cgchg(_anon0* pActwk)
{
	_anon0* pActbp;
	// Line 1049, Address: 0x10291b0, Func Offset: 0
	// Line 1053, Address: 0x10291bc, Func Offset: 0xc
	// Line 1054, Address: 0x10291c8, Func Offset: 0x18
	// Line 1055, Address: 0x10291d0, Func Offset: 0x20
	// Line 1056, Address: 0x10291dc, Func Offset: 0x2c
	// Line 1057, Address: 0x10291e8, Func Offset: 0x38
	// Line 1060, Address: 0x10291f4, Func Offset: 0x44
	// Line 1061, Address: 0x1029218, Func Offset: 0x68
	// Line 1062, Address: 0x1029224, Func Offset: 0x74
	// Line 1063, Address: 0x102922c, Func Offset: 0x7c
	// Line 1064, Address: 0x1029238, Func Offset: 0x88
	// Func End, Address: 0x1029248, Func Offset: 0x98
}

// 
// Start address: 0x1029250
void dead2_end(_anon0* pActwk)
{
	// Line 1076, Address: 0x1029250, Func Offset: 0
	// Line 1077, Address: 0x102925c, Func Offset: 0xc
	// Line 1078, Address: 0x1029264, Func Offset: 0x14
	// Line 1079, Address: 0x102926c, Func Offset: 0x1c
	// Line 1080, Address: 0x1029274, Func Offset: 0x24
	// Line 1081, Address: 0x1029280, Func Offset: 0x30
	// Line 1083, Address: 0x102928c, Func Offset: 0x3c
	// Line 1084, Address: 0x1029298, Func Offset: 0x48
	// Line 1085, Address: 0x10292a0, Func Offset: 0x50
	// Line 1086, Address: 0x10292b0, Func Offset: 0x60
	// Line 1087, Address: 0x10292c0, Func Offset: 0x70
	// Line 1088, Address: 0x10292d4, Func Offset: 0x84
	// Line 1090, Address: 0x10292e8, Func Offset: 0x98
	// Line 1092, Address: 0x10292f4, Func Offset: 0xa4
	// Line 1093, Address: 0x1029300, Func Offset: 0xb0
	// Func End, Address: 0x1029310, Func Offset: 0xc0
}

// 
// Start address: 0x1029310
void door_open()
{
	unsigned char byActoff;
	_anon0* pActDoor;
	// Line 1105, Address: 0x1029310, Func Offset: 0
	// Line 1106, Address: 0x1029318, Func Offset: 0x8
	// Line 1111, Address: 0x1029320, Func Offset: 0x10
	// Line 1112, Address: 0x1029334, Func Offset: 0x24
	// Line 1115, Address: 0x102934c, Func Offset: 0x3c
	// Line 1116, Address: 0x1029358, Func Offset: 0x48
	// Func End, Address: 0x1029368, Func Offset: 0x58
}

// 
// Start address: 0x1029370
void egg6_dead3(_anon0* pActwk)
{
	// Line 1128, Address: 0x1029370, Func Offset: 0
	// Line 1129, Address: 0x102937c, Func Offset: 0xc
	// Line 1130, Address: 0x1029388, Func Offset: 0x18
	// Line 1131, Address: 0x1029394, Func Offset: 0x24
	// Line 1134, Address: 0x10293b0, Func Offset: 0x40
	// Line 1135, Address: 0x10293bc, Func Offset: 0x4c
	// Line 1136, Address: 0x10293c4, Func Offset: 0x54
	// Line 1138, Address: 0x10293d0, Func Offset: 0x60
	// Func End, Address: 0x10293e0, Func Offset: 0x70
}

// 
// Start address: 0x10293e0
void egg6_dead4(_anon0* pActwk)
{
	// Line 1150, Address: 0x10293e0, Func Offset: 0
	// Line 1151, Address: 0x10293ec, Func Offset: 0xc
	// Line 1152, Address: 0x10293f8, Func Offset: 0x18
	// Line 1153, Address: 0x1029404, Func Offset: 0x24
	// Func End, Address: 0x1029414, Func Offset: 0x34
}

// 
// Start address: 0x1029420
void genecolor_setchk(_anon0* pActwk)
{
	// Line 1165, Address: 0x1029420, Func Offset: 0
	// Line 1166, Address: 0x102942c, Func Offset: 0xc
	// Line 1168, Address: 0x1029444, Func Offset: 0x24
	// Line 1170, Address: 0x1029460, Func Offset: 0x40
	// Line 1171, Address: 0x1029470, Func Offset: 0x50
	// Line 1173, Address: 0x1029478, Func Offset: 0x58
	// Func End, Address: 0x1029488, Func Offset: 0x68
}

// 
// Start address: 0x1029490
void dead_snc_pos2()
{
	// Line 1186, Address: 0x1029490, Func Offset: 0
	// Line 1187, Address: 0x1029498, Func Offset: 0x8
	// Line 1188, Address: 0x10294a0, Func Offset: 0x10
	// Line 1189, Address: 0x10294ac, Func Offset: 0x1c
	// Func End, Address: 0x10294b4, Func Offset: 0x24
}

// 
// Start address: 0x10294c0
void dead_snc_pos()
{
	// Line 1202, Address: 0x10294c0, Func Offset: 0
	// Line 1205, Address: 0x10294d8, Func Offset: 0x18
	// Line 1206, Address: 0x10294e0, Func Offset: 0x20
	// Line 1208, Address: 0x10294e8, Func Offset: 0x28
	// Line 1209, Address: 0x1029504, Func Offset: 0x44
	// Line 1210, Address: 0x1029510, Func Offset: 0x50
	// Line 1211, Address: 0x102952c, Func Offset: 0x6c
	// Line 1213, Address: 0x1029540, Func Offset: 0x80
	// Line 1214, Address: 0x102954c, Func Offset: 0x8c
	// Func End, Address: 0x1029554, Func Offset: 0x94
}

// 
// Start address: 0x1029560
void egg6meca0(_anon0* pActwk)
{
	// Line 1233, Address: 0x1029560, Func Offset: 0
	// Line 1234, Address: 0x102956c, Func Offset: 0xc
	// Line 1235, Address: 0x10295b0, Func Offset: 0x50
	// Line 1236, Address: 0x10295bc, Func Offset: 0x5c
	// Func End, Address: 0x10295cc, Func Offset: 0x6c
}

// 
// Start address: 0x10295d0
void egg6meca0_ini(_anon0* pActwk)
{
	// Line 1248, Address: 0x10295d0, Func Offset: 0
	// Line 1249, Address: 0x10295d8, Func Offset: 0x8
	// Line 1250, Address: 0x10295e4, Func Offset: 0x14
	// Line 1251, Address: 0x10295f0, Func Offset: 0x20
	// Line 1252, Address: 0x10295fc, Func Offset: 0x2c
	// Line 1253, Address: 0x1029608, Func Offset: 0x38
	// Line 1254, Address: 0x1029614, Func Offset: 0x44
	// Line 1255, Address: 0x1029620, Func Offset: 0x50
	// Line 1256, Address: 0x1029630, Func Offset: 0x60
	// Func End, Address: 0x102963c, Func Offset: 0x6c
}

// 
// Start address: 0x1029640
void egg6meca0_01(_anon0* pActwk)
{
	_anon0* pActbp;
	// Line 1268, Address: 0x1029640, Func Offset: 0
	// Line 1271, Address: 0x102964c, Func Offset: 0xc
	// Line 1272, Address: 0x1029670, Func Offset: 0x30
	// Line 1273, Address: 0x102967c, Func Offset: 0x3c
	// Line 1274, Address: 0x102969c, Func Offset: 0x5c
	// Func End, Address: 0x10296ac, Func Offset: 0x6c
}

// 
// Start address: 0x10296b0
void egg6meca0_02(_anon0* pActwk)
{
	// Line 1286, Address: 0x10296b0, Func Offset: 0
	// Line 1287, Address: 0x10296bc, Func Offset: 0xc
	// Line 1288, Address: 0x10296c8, Func Offset: 0x18
	// Line 1289, Address: 0x10296d4, Func Offset: 0x24
	// Line 1290, Address: 0x10296e0, Func Offset: 0x30
	// Line 1291, Address: 0x10296ec, Func Offset: 0x3c
	// Line 1292, Address: 0x1029700, Func Offset: 0x50
	// Func End, Address: 0x1029710, Func Offset: 0x60
}

// 
// Start address: 0x1029710
void egg6meca1(_anon0* pActwk)
{
	// Line 1310, Address: 0x1029710, Func Offset: 0
	// Line 1311, Address: 0x102971c, Func Offset: 0xc
	// Line 1312, Address: 0x1029760, Func Offset: 0x50
	// Line 1313, Address: 0x102976c, Func Offset: 0x5c
	// Func End, Address: 0x102977c, Func Offset: 0x6c
}

// 
// Start address: 0x1029780
void egg6meca1_ini(_anon0* pActwk)
{
	// Line 1325, Address: 0x1029780, Func Offset: 0
	// Line 1326, Address: 0x1029788, Func Offset: 0x8
	// Line 1327, Address: 0x1029794, Func Offset: 0x14
	// Line 1328, Address: 0x10297a0, Func Offset: 0x20
	// Line 1329, Address: 0x10297ac, Func Offset: 0x2c
	// Line 1330, Address: 0x10297b8, Func Offset: 0x38
	// Line 1331, Address: 0x10297c4, Func Offset: 0x44
	// Line 1332, Address: 0x10297d0, Func Offset: 0x50
	// Line 1333, Address: 0x10297e0, Func Offset: 0x60
	// Func End, Address: 0x10297ec, Func Offset: 0x6c
}

// 
// Start address: 0x10297f0
void egg6meca1_01(_anon0* pActwk)
{
	unsigned char byD0;
	char egg6meca1_pchg[5];
	_anon0* pActbp;
	// Line 1345, Address: 0x10297f0, Func Offset: 0
	// Line 1347, Address: 0x1029804, Func Offset: 0x14
	// Line 1350, Address: 0x1029830, Func Offset: 0x40
	// Line 1351, Address: 0x1029854, Func Offset: 0x64
	// Line 1352, Address: 0x1029860, Func Offset: 0x70
	// Line 1353, Address: 0x102986c, Func Offset: 0x7c
	// Line 1355, Address: 0x102987c, Func Offset: 0x8c
	// Line 1357, Address: 0x1029890, Func Offset: 0xa0
	// Line 1360, Address: 0x10298a4, Func Offset: 0xb4
	// Line 1361, Address: 0x10298b0, Func Offset: 0xc0
	// Line 1362, Address: 0x10298bc, Func Offset: 0xcc
	// Line 1364, Address: 0x10298c4, Func Offset: 0xd4
	// Line 1367, Address: 0x10298dc, Func Offset: 0xec
	// Line 1369, Address: 0x10298e8, Func Offset: 0xf8
	// Line 1370, Address: 0x10298f4, Func Offset: 0x104
	// Line 1371, Address: 0x1029900, Func Offset: 0x110
	// Line 1375, Address: 0x1029908, Func Offset: 0x118
	// Line 1378, Address: 0x1029928, Func Offset: 0x138
	// Line 1379, Address: 0x1029938, Func Offset: 0x148
	// Line 1380, Address: 0x102995c, Func Offset: 0x16c
	// Line 1381, Address: 0x1029964, Func Offset: 0x174
	// Line 1382, Address: 0x1029970, Func Offset: 0x180
	// Line 1385, Address: 0x1029978, Func Offset: 0x188
	// Line 1386, Address: 0x1029994, Func Offset: 0x1a4
	// Line 1387, Address: 0x102999c, Func Offset: 0x1ac
	// Line 1388, Address: 0x10299a4, Func Offset: 0x1b4
	// Line 1389, Address: 0x10299ac, Func Offset: 0x1bc
	// Func End, Address: 0x10299c4, Func Offset: 0x1d4
}

// 
// Start address: 0x10299d0
void egg6meca2(_anon0* pActwk)
{
	// Line 1406, Address: 0x10299d0, Func Offset: 0
	// Line 1407, Address: 0x10299dc, Func Offset: 0xc
	// Line 1408, Address: 0x10299e8, Func Offset: 0x18
	// Line 1409, Address: 0x10299f4, Func Offset: 0x24
	// Line 1410, Address: 0x10299fc, Func Offset: 0x2c
	// Line 1411, Address: 0x1029a40, Func Offset: 0x70
	// Line 1413, Address: 0x1029a54, Func Offset: 0x84
	// Line 1414, Address: 0x1029a68, Func Offset: 0x98
	// Line 1415, Address: 0x1029a74, Func Offset: 0xa4
	// Func End, Address: 0x1029a84, Func Offset: 0xb4
}

// 
// Start address: 0x1029a90
void egg6meca2_ini(_anon0* pActwk)
{
	// Line 1427, Address: 0x1029a90, Func Offset: 0
	// Line 1428, Address: 0x1029a98, Func Offset: 0x8
	// Line 1429, Address: 0x1029aa4, Func Offset: 0x14
	// Line 1430, Address: 0x1029ab0, Func Offset: 0x20
	// Line 1431, Address: 0x1029abc, Func Offset: 0x2c
	// Line 1432, Address: 0x1029ac8, Func Offset: 0x38
	// Line 1433, Address: 0x1029ad4, Func Offset: 0x44
	// Line 1434, Address: 0x1029ae0, Func Offset: 0x50
	// Line 1435, Address: 0x1029af0, Func Offset: 0x60
	// Func End, Address: 0x1029afc, Func Offset: 0x6c
}

// 
// Start address: 0x1029b00
void egg6meca2_01(_anon0* pActwk)
{
	_anon0* pActbp;
	// Line 1447, Address: 0x1029b00, Func Offset: 0
	// Line 1450, Address: 0x1029b10, Func Offset: 0x10
	// Line 1451, Address: 0x1029b34, Func Offset: 0x34
	// Line 1452, Address: 0x1029b40, Func Offset: 0x40
	// Line 1453, Address: 0x1029b4c, Func Offset: 0x4c
	// Line 1454, Address: 0x1029b5c, Func Offset: 0x5c
	// Line 1455, Address: 0x1029b68, Func Offset: 0x68
	// Line 1457, Address: 0x1029b80, Func Offset: 0x80
	// Line 1458, Address: 0x1029b8c, Func Offset: 0x8c
	// Line 1460, Address: 0x1029b98, Func Offset: 0x98
	// Func End, Address: 0x1029bac, Func Offset: 0xac
}

// 
// Start address: 0x1029bb0
void egg6bakuha(_anon0* pActwk)
{
	// Line 1479, Address: 0x1029bb0, Func Offset: 0
	// Line 1480, Address: 0x1029bbc, Func Offset: 0xc
	// Line 1481, Address: 0x1029c00, Func Offset: 0x50
	// Func End, Address: 0x1029c10, Func Offset: 0x60
}

// 
// Start address: 0x1029c10
void egg6bakuha_ini(_anon0* pActwk)
{
	// Line 1493, Address: 0x1029c10, Func Offset: 0
	// Line 1494, Address: 0x1029c1c, Func Offset: 0xc
	// Line 1495, Address: 0x1029c28, Func Offset: 0x18
	// Line 1496, Address: 0x1029c34, Func Offset: 0x24
	// Line 1497, Address: 0x1029c44, Func Offset: 0x34
	// Line 1500, Address: 0x1029c5c, Func Offset: 0x4c
	// Line 1501, Address: 0x1029c68, Func Offset: 0x58
	// Line 1502, Address: 0x1029c74, Func Offset: 0x64
	// Line 1503, Address: 0x1029c80, Func Offset: 0x70
	// Line 1504, Address: 0x1029c8c, Func Offset: 0x7c
	// Line 1505, Address: 0x1029c98, Func Offset: 0x88
	// Line 1509, Address: 0x1029ca0, Func Offset: 0x90
	// Line 1510, Address: 0x1029cac, Func Offset: 0x9c
	// Line 1511, Address: 0x1029cb8, Func Offset: 0xa8
	// Line 1512, Address: 0x1029cc4, Func Offset: 0xb4
	// Line 1513, Address: 0x1029cd0, Func Offset: 0xc0
	// Line 1515, Address: 0x1029cdc, Func Offset: 0xcc
	// Func End, Address: 0x1029cec, Func Offset: 0xdc
}

// 
// Start address: 0x1029cf0
void egg6bakuha_01(_anon0* pActwk)
{
	_anon0* pActbp;
	// Line 1527, Address: 0x1029cf0, Func Offset: 0
	// Line 1530, Address: 0x1029d00, Func Offset: 0x10
	// Line 1531, Address: 0x1029d24, Func Offset: 0x34
	// Line 1532, Address: 0x1029d34, Func Offset: 0x44
	// Line 1534, Address: 0x1029d50, Func Offset: 0x60
	// Line 1535, Address: 0x1029d5c, Func Offset: 0x6c
	// Line 1537, Address: 0x1029d64, Func Offset: 0x74
	// Line 1538, Address: 0x1029d70, Func Offset: 0x80
	// Line 1539, Address: 0x1029d7c, Func Offset: 0x8c
	// Line 1541, Address: 0x1029d8c, Func Offset: 0x9c
	// Line 1542, Address: 0x1029da0, Func Offset: 0xb0
	// Line 1544, Address: 0x1029db8, Func Offset: 0xc8
	// Line 1545, Address: 0x1029dc4, Func Offset: 0xd4
	// Line 1547, Address: 0x1029dd0, Func Offset: 0xe0
	// Func End, Address: 0x1029de4, Func Offset: 0xf4
}

// 
// Start address: 0x1029df0
void egg6bakuha_02(_anon0* pActwk)
{
	// Line 1559, Address: 0x1029df0, Func Offset: 0
	// Line 1560, Address: 0x1029dfc, Func Offset: 0xc
	// Line 1561, Address: 0x1029e0c, Func Offset: 0x1c
	// Line 1563, Address: 0x1029e28, Func Offset: 0x38
	// Line 1564, Address: 0x1029e34, Func Offset: 0x44
	// Line 1566, Address: 0x1029e3c, Func Offset: 0x4c
	// Line 1567, Address: 0x1029e48, Func Offset: 0x58
	// Line 1568, Address: 0x1029e5c, Func Offset: 0x6c
	// Line 1569, Address: 0x1029e68, Func Offset: 0x78
	// Func End, Address: 0x1029e78, Func Offset: 0x88
}

// 
// Start address: 0x1029e80
void egg6toge(_anon0* pActwk)
{
	// Line 1588, Address: 0x1029e80, Func Offset: 0
	// Line 1589, Address: 0x1029e8c, Func Offset: 0xc
	// Line 1590, Address: 0x1029ed0, Func Offset: 0x50
	// Func End, Address: 0x1029ee0, Func Offset: 0x60
}

// 
// Start address: 0x1029ee0
void egg6toge_ini(_anon0* pActwk)
{
	// Line 1602, Address: 0x1029ee0, Func Offset: 0
	// Line 1603, Address: 0x1029eec, Func Offset: 0xc
	// Line 1604, Address: 0x1029ef8, Func Offset: 0x18
	// Line 1605, Address: 0x1029f04, Func Offset: 0x24
	// Line 1606, Address: 0x1029f10, Func Offset: 0x30
	// Line 1607, Address: 0x1029f1c, Func Offset: 0x3c
	// Line 1608, Address: 0x1029f28, Func Offset: 0x48
	// Line 1609, Address: 0x1029f34, Func Offset: 0x54
	// Line 1610, Address: 0x1029f44, Func Offset: 0x64
	// Line 1611, Address: 0x1029f50, Func Offset: 0x70
	// Line 1612, Address: 0x1029f5c, Func Offset: 0x7c
	// Line 1613, Address: 0x1029f68, Func Offset: 0x88
	// Func End, Address: 0x1029f78, Func Offset: 0x98
}

// 
// Start address: 0x1029f80
void egg6toge_01(_anon0* pActwk)
{
	short iD1;
	// Line 1625, Address: 0x1029f80, Func Offset: 0
	// Line 1628, Address: 0x1029f90, Func Offset: 0x10
	// Line 1629, Address: 0x1029fa8, Func Offset: 0x28
	// Line 1630, Address: 0x1029fbc, Func Offset: 0x3c
	// Line 1631, Address: 0x1029fc8, Func Offset: 0x48
	// Line 1633, Address: 0x1029fd8, Func Offset: 0x58
	// Line 1634, Address: 0x1029fe8, Func Offset: 0x68
	// Line 1635, Address: 0x1029ff8, Func Offset: 0x78
	// Line 1636, Address: 0x102a000, Func Offset: 0x80
	// Line 1639, Address: 0x102a008, Func Offset: 0x88
	// Line 1640, Address: 0x102a014, Func Offset: 0x94
	// Func End, Address: 0x102a028, Func Offset: 0xa8
}

// 
// Start address: 0x102a030
void egg6toge_02(_anon0* pActwk)
{
	// Line 1652, Address: 0x102a030, Func Offset: 0
	// Line 1653, Address: 0x102a03c, Func Offset: 0xc
	// Line 1654, Address: 0x102a04c, Func Offset: 0x1c
	// Line 1656, Address: 0x102a068, Func Offset: 0x38
	// Line 1657, Address: 0x102a074, Func Offset: 0x44
	// Line 1660, Address: 0x102a07c, Func Offset: 0x4c
	// Line 1663, Address: 0x102a098, Func Offset: 0x68
	// Line 1664, Address: 0x102a0a8, Func Offset: 0x78
	// Line 1665, Address: 0x102a0c4, Func Offset: 0x94
	// Line 1667, Address: 0x102a0d4, Func Offset: 0xa4
	// Line 1668, Address: 0x102a0e0, Func Offset: 0xb0
	// Func End, Address: 0x102a0f0, Func Offset: 0xc0
}

// 
// Start address: 0x102a0f0
void egg6gareki(_anon0* pActwk)
{
	// Line 1687, Address: 0x102a0f0, Func Offset: 0
	// Line 1688, Address: 0x102a0fc, Func Offset: 0xc
	// Line 1689, Address: 0x102a140, Func Offset: 0x50
	// Line 1690, Address: 0x102a14c, Func Offset: 0x5c
	// Line 1691, Address: 0x102a158, Func Offset: 0x68
	// Func End, Address: 0x102a168, Func Offset: 0x78
}

// 
// Start address: 0x102a170
void egg6gareki_ini(_anon0* pActwk)
{
	// Line 1703, Address: 0x102a170, Func Offset: 0
	// Line 1704, Address: 0x102a178, Func Offset: 0x8
	// Line 1705, Address: 0x102a184, Func Offset: 0x14
	// Line 1706, Address: 0x102a190, Func Offset: 0x20
	// Line 1711, Address: 0x102a19c, Func Offset: 0x2c
	// Line 1712, Address: 0x102a1a8, Func Offset: 0x38
	// Line 1714, Address: 0x102a1b4, Func Offset: 0x44
	// Line 1715, Address: 0x102a1c0, Func Offset: 0x50
	// Line 1716, Address: 0x102a1d0, Func Offset: 0x60
	// Func End, Address: 0x102a1dc, Func Offset: 0x6c
}

// 
// Start address: 0x102a1e0
void egg6gareki_01(_anon0* pActwk)
{
	short iD1;
	// Line 1728, Address: 0x102a1e0, Func Offset: 0
	// Line 1731, Address: 0x102a1f0, Func Offset: 0x10
	// Line 1733, Address: 0x102a204, Func Offset: 0x24
	// Line 1734, Address: 0x102a210, Func Offset: 0x30
	// Line 1735, Address: 0x102a224, Func Offset: 0x44
	// Line 1736, Address: 0x102a230, Func Offset: 0x50
	// Line 1739, Address: 0x102a240, Func Offset: 0x60
	// Line 1740, Address: 0x102a250, Func Offset: 0x70
	// Line 1741, Address: 0x102a260, Func Offset: 0x80
	// Line 1743, Address: 0x102a26c, Func Offset: 0x8c
	// Func End, Address: 0x102a280, Func Offset: 0xa0
}

// 
// Start address: 0x102a280
void egg6gareki_02(_anon0* pActwk)
{
	// Line 1755, Address: 0x102a280, Func Offset: 0
	// Line 1756, Address: 0x102a28c, Func Offset: 0xc
	// Line 1757, Address: 0x102a298, Func Offset: 0x18
	// Func End, Address: 0x102a2a8, Func Offset: 0x28
}

// 
// Start address: 0x102a2b0
void egg6beam(_anon0* pActwk)
{
	// Line 1775, Address: 0x102a2b0, Func Offset: 0
	// Line 1780, Address: 0x102a2bc, Func Offset: 0xc
	// Line 1782, Address: 0x102a300, Func Offset: 0x50
	// Func End, Address: 0x102a310, Func Offset: 0x60
}

// 
// Start address: 0x102a310
void egg6beam_ini(_anon0* pActwk)
{
	// Line 1801, Address: 0x102a310, Func Offset: 0
	// Line 1802, Address: 0x102a31c, Func Offset: 0xc
	// Line 1803, Address: 0x102a328, Func Offset: 0x18
	// Line 1805, Address: 0x102a330, Func Offset: 0x20
	// Line 1806, Address: 0x102a33c, Func Offset: 0x2c
	// Line 1807, Address: 0x102a348, Func Offset: 0x38
	// Line 1808, Address: 0x102a354, Func Offset: 0x44
	// Line 1809, Address: 0x102a360, Func Offset: 0x50
	// Line 1810, Address: 0x102a36c, Func Offset: 0x5c
	// Line 1811, Address: 0x102a378, Func Offset: 0x68
	// Line 1812, Address: 0x102a388, Func Offset: 0x78
	// Line 1813, Address: 0x102a394, Func Offset: 0x84
	// Func End, Address: 0x102a3a4, Func Offset: 0x94
}

// 
// Start address: 0x102a3b0
void egg6beam_01(_anon0* pActwk)
{
	unsigned char byD0;
	unsigned char bywk;
	// Line 1825, Address: 0x102a3b0, Func Offset: 0
	// Line 1829, Address: 0x102a3c4, Func Offset: 0x14
	// Line 1832, Address: 0x102a3e4, Func Offset: 0x34
	// Line 1833, Address: 0x102a3f0, Func Offset: 0x40
	// Line 1834, Address: 0x102a414, Func Offset: 0x64
	// Line 1835, Address: 0x102a41c, Func Offset: 0x6c
	// Line 1836, Address: 0x102a428, Func Offset: 0x78
	// Line 1842, Address: 0x102a448, Func Offset: 0x98
	// Line 1843, Address: 0x102a458, Func Offset: 0xa8
	// Line 1844, Address: 0x102a464, Func Offset: 0xb4
	// Line 1845, Address: 0x102a46c, Func Offset: 0xbc
	// Line 1847, Address: 0x102a484, Func Offset: 0xd4
	// Line 1848, Address: 0x102a4a8, Func Offset: 0xf8
	// Line 1850, Address: 0x102a4b8, Func Offset: 0x108
	// Line 1851, Address: 0x102a4c4, Func Offset: 0x114
	// Line 1853, Address: 0x102a4cc, Func Offset: 0x11c
	// Line 1856, Address: 0x102a4d4, Func Offset: 0x124
	// Line 1857, Address: 0x102a4ec, Func Offset: 0x13c
	// Line 1858, Address: 0x102a4fc, Func Offset: 0x14c
	// Line 1859, Address: 0x102a508, Func Offset: 0x158
	// Func End, Address: 0x102a520, Func Offset: 0x170
}

// 
// Start address: 0x102a520
void egg6yuka(_anon0* pActwk)
{
	// Line 1878, Address: 0x102a520, Func Offset: 0
	// Line 1879, Address: 0x102a52c, Func Offset: 0xc
	// Line 1880, Address: 0x102a570, Func Offset: 0x50
	// Line 1881, Address: 0x102a57c, Func Offset: 0x5c
	// Line 1882, Address: 0x102a588, Func Offset: 0x68
	// Func End, Address: 0x102a598, Func Offset: 0x78
}

// 
// Start address: 0x102a5a0
void egg6yuka_ini(_anon0* pActwk)
{
	_anon5 iD0;
	// Line 1909, Address: 0x102a5a0, Func Offset: 0
	// Line 1912, Address: 0x102a5a8, Func Offset: 0x8
	// Line 1913, Address: 0x102a5b4, Func Offset: 0x14
	// Line 1914, Address: 0x102a5c0, Func Offset: 0x20
	// Line 1915, Address: 0x102a5cc, Func Offset: 0x2c
	// Line 1917, Address: 0x102a5d8, Func Offset: 0x38
	// Line 1919, Address: 0x102a5e4, Func Offset: 0x44
	// Line 1920, Address: 0x102a5f0, Func Offset: 0x50
	// Line 1921, Address: 0x102a5fc, Func Offset: 0x5c
	// Line 1923, Address: 0x102a60c, Func Offset: 0x6c
	// Line 1924, Address: 0x102a610, Func Offset: 0x70
	// Line 1925, Address: 0x102a61c, Func Offset: 0x7c
	// Line 1926, Address: 0x102a628, Func Offset: 0x88
	// Line 1928, Address: 0x102a634, Func Offset: 0x94
	// Line 1929, Address: 0x102a63c, Func Offset: 0x9c
	// Line 1930, Address: 0x102a648, Func Offset: 0xa8
	// Func End, Address: 0x102a654, Func Offset: 0xb4
}

// 
// Start address: 0x102a660
void egg6yuka_01(_anon0* pActwk)
{
	short iD0;
	short iD1;
	// Line 1942, Address: 0x102a660, Func Offset: 0
	// Line 1945, Address: 0x102a674, Func Offset: 0x14
	// Line 1947, Address: 0x102a680, Func Offset: 0x20
	// Line 1948, Address: 0x102a690, Func Offset: 0x30
	// Line 1949, Address: 0x102a6a4, Func Offset: 0x44
	// Line 1950, Address: 0x102a6c8, Func Offset: 0x68
	// Line 1952, Address: 0x102a6ec, Func Offset: 0x8c
	// Line 1953, Address: 0x102a714, Func Offset: 0xb4
	// Line 1954, Address: 0x102a738, Func Offset: 0xd8
	// Line 1955, Address: 0x102a740, Func Offset: 0xe0
	// Line 1958, Address: 0x102a748, Func Offset: 0xe8
	// Line 1959, Address: 0x102a750, Func Offset: 0xf0
	// Line 1960, Address: 0x102a758, Func Offset: 0xf8
	// Line 1961, Address: 0x102a760, Func Offset: 0x100
	// Line 1962, Address: 0x102a76c, Func Offset: 0x10c
	// Line 1963, Address: 0x102a778, Func Offset: 0x118
	// Func End, Address: 0x102a790, Func Offset: 0x130
}

// 
// Start address: 0x102a790
void egg6yuka_02(_anon0* pActwk)
{
	short iD0;
	short iD1;
	_anon0* pActbp;
	// Line 1975, Address: 0x102a790, Func Offset: 0
	// Line 1979, Address: 0x102a7a4, Func Offset: 0x14
	// Line 1980, Address: 0x102a7c8, Func Offset: 0x38
	// Line 1983, Address: 0x102a7d8, Func Offset: 0x48
	// Line 1986, Address: 0x102a7e4, Func Offset: 0x54
	// Line 1987, Address: 0x102a818, Func Offset: 0x88
	// Line 1988, Address: 0x102a828, Func Offset: 0x98
	// Line 1990, Address: 0x102a844, Func Offset: 0xb4
	// Line 1991, Address: 0x102a84c, Func Offset: 0xbc
	// Line 1992, Address: 0x102a860, Func Offset: 0xd0
	// Line 1994, Address: 0x102a86c, Func Offset: 0xdc
	// Line 1995, Address: 0x102a87c, Func Offset: 0xec
	// Line 1996, Address: 0x102a898, Func Offset: 0x108
	// Line 1997, Address: 0x102a8c0, Func Offset: 0x130
	// Line 1998, Address: 0x102a8e8, Func Offset: 0x158
	// Func End, Address: 0x102a900, Func Offset: 0x170
}

// 
// Start address: 0x102a900
void egg6_yuka_ridechk(_anon0* pActwk)
{
	short iSpd_sav;
	// Line 2010, Address: 0x102a900, Func Offset: 0
	// Line 2014, Address: 0x102a910, Func Offset: 0x10
	// Line 2016, Address: 0x102a928, Func Offset: 0x28
	// Line 2019, Address: 0x102a938, Func Offset: 0x38
	// Line 2021, Address: 0x102a944, Func Offset: 0x44
	// Line 2024, Address: 0x102a96c, Func Offset: 0x6c
	// Line 2026, Address: 0x102a980, Func Offset: 0x80
	// Line 2028, Address: 0x102a99c, Func Offset: 0x9c
	// Line 2029, Address: 0x102a9ac, Func Offset: 0xac
	// Line 2032, Address: 0x102a9dc, Func Offset: 0xdc
	// Line 2035, Address: 0x102a9e4, Func Offset: 0xe4
	// Line 2036, Address: 0x102aa08, Func Offset: 0x108
	// Line 2038, Address: 0x102aa1c, Func Offset: 0x11c
	// Line 2041, Address: 0x102aa24, Func Offset: 0x124
	// Line 2042, Address: 0x102aa4c, Func Offset: 0x14c
	// Func End, Address: 0x102aa60, Func Offset: 0x160
}

// 
// Start address: 0x102aa60
void egg6_yuka_ride_on(_anon0* pActwk)
{
	short iD0;
	// Line 2054, Address: 0x102aa60, Func Offset: 0
	// Line 2057, Address: 0x102aa6c, Func Offset: 0xc
	// Line 2058, Address: 0x102aa7c, Func Offset: 0x1c
	// Line 2059, Address: 0x102aa90, Func Offset: 0x30
	// Line 2060, Address: 0x102aa9c, Func Offset: 0x3c
	// Line 2061, Address: 0x102aab0, Func Offset: 0x50
	// Line 2063, Address: 0x102aac8, Func Offset: 0x68
	// Line 2065, Address: 0x102aae0, Func Offset: 0x80
	// Line 2066, Address: 0x102aae8, Func Offset: 0x88
	// Func End, Address: 0x102aaf8, Func Offset: 0x98
}

// 
// Start address: 0x102ab00
short egg6_yuka_hasami_chk(_anon0* pActwk)
{
	short iD0;
	short iD1;
	// Line 2078, Address: 0x102ab00, Func Offset: 0
	// Line 2081, Address: 0x102ab14, Func Offset: 0x14
	// Line 2082, Address: 0x102ab48, Func Offset: 0x48
	// Line 2083, Address: 0x102ab58, Func Offset: 0x58
	// Line 2085, Address: 0x102ab74, Func Offset: 0x74
	// Line 2087, Address: 0x102ab88, Func Offset: 0x88
	// Line 2090, Address: 0x102aba4, Func Offset: 0xa4
	// Line 2091, Address: 0x102abb0, Func Offset: 0xb0
	// Line 2092, Address: 0x102abbc, Func Offset: 0xbc
	// Line 2094, Address: 0x102abc8, Func Offset: 0xc8
	// Line 2096, Address: 0x102abe0, Func Offset: 0xe0
	// Line 2097, Address: 0x102ac00, Func Offset: 0x100
	// Line 2099, Address: 0x102ac2c, Func Offset: 0x12c
	// Line 2100, Address: 0x102ac40, Func Offset: 0x140
	// Line 2102, Address: 0x102ac64, Func Offset: 0x164
	// Line 2108, Address: 0x102ac78, Func Offset: 0x178
	// Line 2109, Address: 0x102aca4, Func Offset: 0x1a4
	// Line 2111, Address: 0x102acb0, Func Offset: 0x1b0
	// Line 2112, Address: 0x102acb4, Func Offset: 0x1b4
	// Func End, Address: 0x102accc, Func Offset: 0x1cc
}

// 
// Start address: 0x102acd0
short mydamage(_anon0* pActwk)
{
	// Line 2124, Address: 0x102acd0, Func Offset: 0
	// Line 2126, Address: 0x102acdc, Func Offset: 0xc
	// Line 2128, Address: 0x102acf4, Func Offset: 0x24
	// Line 2129, Address: 0x102ad08, Func Offset: 0x38
	// Line 2131, Address: 0x102ad24, Func Offset: 0x54
	// Line 2134, Address: 0x102ad38, Func Offset: 0x68
	// Line 2135, Address: 0x102ad3c, Func Offset: 0x6c
	// Func End, Address: 0x102ad4c, Func Offset: 0x7c
}

// 
// Start address: 0x102ad50
void egg6door(_anon0* pActwk)
{
	short xwk;
	short ywk;
	// Line 2159, Address: 0x102ad50, Func Offset: 0
	// Line 2160, Address: 0x102ad64, Func Offset: 0x14
	// Line 2162, Address: 0x102ada8, Func Offset: 0x58
	// Line 2166, Address: 0x102adc0, Func Offset: 0x70
	// Line 2167, Address: 0x102add0, Func Offset: 0x80
	// Line 2168, Address: 0x102ade0, Func Offset: 0x90
	// Line 2169, Address: 0x102adf0, Func Offset: 0xa0
	// Line 2170, Address: 0x102ae00, Func Offset: 0xb0
	// Line 2173, Address: 0x102ae14, Func Offset: 0xc4
	// Line 2174, Address: 0x102ae24, Func Offset: 0xd4
	// Line 2177, Address: 0x102ae34, Func Offset: 0xe4
	// Line 2178, Address: 0x102ae40, Func Offset: 0xf0
	// Func End, Address: 0x102ae58, Func Offset: 0x108
}

// 
// Start address: 0x102ae60
void egg6door_ini(_anon0* pActwk)
{
	// Line 2190, Address: 0x102ae60, Func Offset: 0
	// Line 2191, Address: 0x102ae68, Func Offset: 0x8
	// Line 2192, Address: 0x102ae74, Func Offset: 0x14
	// Line 2193, Address: 0x102ae80, Func Offset: 0x20
	// Line 2195, Address: 0x102ae8c, Func Offset: 0x2c
	// Line 2196, Address: 0x102aeac, Func Offset: 0x4c
	// Line 2199, Address: 0x102aec4, Func Offset: 0x64
	// Line 2200, Address: 0x102aed4, Func Offset: 0x74
	// Line 2203, Address: 0x102aef0, Func Offset: 0x90
	// Line 2204, Address: 0x102aefc, Func Offset: 0x9c
	// Line 2206, Address: 0x102af08, Func Offset: 0xa8
	// Line 2207, Address: 0x102af14, Func Offset: 0xb4
	// Line 2208, Address: 0x102af20, Func Offset: 0xc0
	// Line 2209, Address: 0x102af2c, Func Offset: 0xcc
	// Line 2210, Address: 0x102af38, Func Offset: 0xd8
	// Line 2211, Address: 0x102af44, Func Offset: 0xe4
	// Line 2216, Address: 0x102af4c, Func Offset: 0xec
	// Line 2217, Address: 0x102af58, Func Offset: 0xf8
	// Line 2218, Address: 0x102af64, Func Offset: 0x104
	// Line 2219, Address: 0x102af70, Func Offset: 0x110
	// Line 2221, Address: 0x102af7c, Func Offset: 0x11c
	// Line 2222, Address: 0x102af88, Func Offset: 0x128
	// Line 2223, Address: 0x102af94, Func Offset: 0x134
	// Line 2224, Address: 0x102afa0, Func Offset: 0x140
	// Line 2230, Address: 0x102afa8, Func Offset: 0x148
	// Line 2231, Address: 0x102afb4, Func Offset: 0x154
	// Line 2232, Address: 0x102afc0, Func Offset: 0x160
	// Line 2233, Address: 0x102afd0, Func Offset: 0x170
	// Line 2236, Address: 0x102afdc, Func Offset: 0x17c
	// Func End, Address: 0x102afe8, Func Offset: 0x188
}

// 
// Start address: 0x102aff0
void egg6door_closewait(_anon0* pActwk)
{
	// Line 2248, Address: 0x102aff0, Func Offset: 0
	// Line 2249, Address: 0x102aff8, Func Offset: 0x8
	// Line 2250, Address: 0x102b00c, Func Offset: 0x1c
	// Line 2252, Address: 0x102b020, Func Offset: 0x30
	// Line 2253, Address: 0x102b03c, Func Offset: 0x4c
	// Line 2255, Address: 0x102b050, Func Offset: 0x60
	// Line 2256, Address: 0x102b06c, Func Offset: 0x7c
	// Line 2259, Address: 0x102b080, Func Offset: 0x90
	// Line 2260, Address: 0x102b09c, Func Offset: 0xac
	// Line 2261, Address: 0x102b0a8, Func Offset: 0xb8
	// Func End, Address: 0x102b0b4, Func Offset: 0xc4
}

// 
// Start address: 0x102b0c0
void egg6door_move(_anon0* pActwk)
{
	_anon5 iD0;
	// Line 2273, Address: 0x102b0c0, Func Offset: 0
	// Line 2275, Address: 0x102b0cc, Func Offset: 0xc
	// Line 2276, Address: 0x102b0d8, Func Offset: 0x18
	// Line 2278, Address: 0x102b0f0, Func Offset: 0x30
	// Line 2279, Address: 0x102b0fc, Func Offset: 0x3c
	// Line 2282, Address: 0x102b110, Func Offset: 0x50
	// Line 2285, Address: 0x102b138, Func Offset: 0x78
	// Line 2286, Address: 0x102b144, Func Offset: 0x84
	// Line 2290, Address: 0x102b14c, Func Offset: 0x8c
	// Line 2293, Address: 0x102b174, Func Offset: 0xb4
	// Line 2296, Address: 0x102b180, Func Offset: 0xc0
	// Line 2299, Address: 0x102b19c, Func Offset: 0xdc
	// Line 2300, Address: 0x102b1a8, Func Offset: 0xe8
	// Line 2301, Address: 0x102b1b4, Func Offset: 0xf4
	// Line 2304, Address: 0x102b1bc, Func Offset: 0xfc
	// Line 2305, Address: 0x102b1c8, Func Offset: 0x108
	// Line 2307, Address: 0x102b1d4, Func Offset: 0x114
	// Func End, Address: 0x102b1e4, Func Offset: 0x124
}

// 
// Start address: 0x102b1f0
void egg6door_closed(_anon0* pActwk)
{
	// Line 2319, Address: 0x102b1f0, Func Offset: 0
	// Line 2320, Address: 0x102b1fc, Func Offset: 0xc
	// Line 2322, Address: 0x102b210, Func Offset: 0x20
	// Line 2323, Address: 0x102b22c, Func Offset: 0x3c
	// Line 2325, Address: 0x102b238, Func Offset: 0x48
	// Line 2326, Address: 0x102b244, Func Offset: 0x54
	// Func End, Address: 0x102b254, Func Offset: 0x64
}

// 
// Start address: 0x102b260
void egg6door_openwait(_anon0* pActwk)
{
	// Line 2338, Address: 0x102b260, Func Offset: 0
	// Line 2339, Address: 0x102b26c, Func Offset: 0xc
	// Line 2341, Address: 0x102b280, Func Offset: 0x20
	// Line 2342, Address: 0x102b29c, Func Offset: 0x3c
	// Line 2344, Address: 0x102b2a8, Func Offset: 0x48
	// Line 2345, Address: 0x102b2b4, Func Offset: 0x54
	// Func End, Address: 0x102b2c4, Func Offset: 0x64
}

// 
// Start address: 0x102b2d0
void egg6door_beamer(_anon0* pActwk)
{
	_anon5 iD0;
	_anon0* pPlaywk;
	// Line 2358, Address: 0x102b2d0, Func Offset: 0
	// Line 2362, Address: 0x102b2e0, Func Offset: 0x10
	// Line 2363, Address: 0x102b2e8, Func Offset: 0x18
	// Line 2364, Address: 0x102b310, Func Offset: 0x40
	// Line 2368, Address: 0x102b334, Func Offset: 0x64
	// Line 2370, Address: 0x102b344, Func Offset: 0x74
	// Line 2371, Address: 0x102b370, Func Offset: 0xa0
	// Line 2372, Address: 0x102b384, Func Offset: 0xb4
	// Line 2373, Address: 0x102b3a0, Func Offset: 0xd0
	// Line 2376, Address: 0x102b3b8, Func Offset: 0xe8
	// Line 2378, Address: 0x102b3cc, Func Offset: 0xfc
	// Line 2379, Address: 0x102b3fc, Func Offset: 0x12c
	// Line 2381, Address: 0x102b408, Func Offset: 0x138
	// Func End, Address: 0x102b41c, Func Offset: 0x14c
}

// 
// Start address: 0x102b420
void add_spd2(_anon0* pActwk)
{
	_anon2 lD0;
	// Line 2393, Address: 0x102b420, Func Offset: 0
	// Line 2396, Address: 0x102b428, Func Offset: 0x8
	// Line 2397, Address: 0x102b440, Func Offset: 0x20
	// Line 2399, Address: 0x102b458, Func Offset: 0x38
	// Line 2400, Address: 0x102b46c, Func Offset: 0x4c
	// Line 2401, Address: 0x102b484, Func Offset: 0x64
	// Line 2402, Address: 0x102b498, Func Offset: 0x78
	// Line 2403, Address: 0x102b4b0, Func Offset: 0x90
	// Func End, Address: 0x102b4bc, Func Offset: 0x9c
}

// 
// Start address: 0x102b4c0
void add_spd(_anon0* pActwk)
{
	_anon2 lD0;
	// Line 2405, Address: 0x102b4c0, Func Offset: 0
	// Line 2408, Address: 0x102b4c8, Func Offset: 0x8
	// Line 2409, Address: 0x102b4dc, Func Offset: 0x1c
	// Line 2410, Address: 0x102b4f4, Func Offset: 0x34
	// Line 2411, Address: 0x102b508, Func Offset: 0x48
	// Line 2412, Address: 0x102b520, Func Offset: 0x60
	// Func End, Address: 0x102b52c, Func Offset: 0x6c
}

// 
// Start address: 0x102b530
short act_search(unsigned char wActNo, unsigned char* bpActoff, _anon0** ppActAdr)
{
	// Line 2427, Address: 0x102b530, Func Offset: 0
	// Line 2428, Address: 0x102b540, Func Offset: 0x10
	// Line 2430, Address: 0x102b548, Func Offset: 0x18
	// Line 2432, Address: 0x102b58c, Func Offset: 0x5c
	// Line 2433, Address: 0x102b5bc, Func Offset: 0x8c
	// Line 2435, Address: 0x102b5c8, Func Offset: 0x98
	// Line 2436, Address: 0x102b5e0, Func Offset: 0xb0
	// Line 2437, Address: 0x102b5e4, Func Offset: 0xb4
	// Func End, Address: 0x102b5f0, Func Offset: 0xc0
}

// 
// Start address: 0x102b5f0
short get_gareki_y(_anon0* pActwk)
{
	short iD0;
	// Line 2477, Address: 0x102b5f0, Func Offset: 0
	// Line 2479, Address: 0x102b5fc, Func Offset: 0xc
	// Line 2480, Address: 0x102b610, Func Offset: 0x20
	// Line 2481, Address: 0x102b61c, Func Offset: 0x2c
	// Line 2482, Address: 0x102b638, Func Offset: 0x48
	// Func End, Address: 0x102b648, Func Offset: 0x58
}

// 
// Start address: 0x102b650
void make_toge(_anon0* pActwk, short iD0)
{
	short iD1;
	short iD2;
	_anon0* pActfree;
	// Line 2495, Address: 0x102b650, Func Offset: 0
	// Line 2499, Address: 0x102b668, Func Offset: 0x18
	// Line 2500, Address: 0x102b69c, Func Offset: 0x4c
	// Line 2501, Address: 0x102b6c0, Func Offset: 0x70
	// Line 2503, Address: 0x102b6d4, Func Offset: 0x84
	// Line 2505, Address: 0x102b6e8, Func Offset: 0x98
	// Line 2506, Address: 0x102b71c, Func Offset: 0xcc
	// Line 2508, Address: 0x102b728, Func Offset: 0xd8
	// Line 2511, Address: 0x102b73c, Func Offset: 0xec
	// Line 2513, Address: 0x102b750, Func Offset: 0x100
	// Line 2514, Address: 0x102b76c, Func Offset: 0x11c
	// Line 2516, Address: 0x102b780, Func Offset: 0x130
	// Line 2519, Address: 0x102b788, Func Offset: 0x138
	// Line 2520, Address: 0x102b794, Func Offset: 0x144
	// Line 2521, Address: 0x102b7a8, Func Offset: 0x158
	// Line 2524, Address: 0x102b7b8, Func Offset: 0x168
	// Line 2525, Address: 0x102b7d4, Func Offset: 0x184
	// Line 2527, Address: 0x102b7dc, Func Offset: 0x18c
	// Line 2528, Address: 0x102b804, Func Offset: 0x1b4
	// Line 2529, Address: 0x102b810, Func Offset: 0x1c0
	// Func End, Address: 0x102b828, Func Offset: 0x1d8
}

// 
// Start address: 0x102b830
void make_yuka(_anon0* pActwk, short iD0)
{
	short iD1;
	short iD2;
	short iSav;
	_anon0* pActfree;
	// Line 2542, Address: 0x102b830, Func Offset: 0
	// Line 2546, Address: 0x102b84c, Func Offset: 0x1c
	// Line 2547, Address: 0x102b858, Func Offset: 0x28
	// Line 2548, Address: 0x102b88c, Func Offset: 0x5c
	// Line 2549, Address: 0x102b8b0, Func Offset: 0x80
	// Line 2551, Address: 0x102b8c4, Func Offset: 0x94
	// Line 2554, Address: 0x102b8d8, Func Offset: 0xa8
	// Line 2556, Address: 0x102b8ec, Func Offset: 0xbc
	// Line 2558, Address: 0x102b900, Func Offset: 0xd0
	// Line 2559, Address: 0x102b934, Func Offset: 0x104
	// Line 2561, Address: 0x102b940, Func Offset: 0x110
	// Line 2563, Address: 0x102b954, Func Offset: 0x124
	// Line 2564, Address: 0x102b974, Func Offset: 0x144
	// Line 2567, Address: 0x102b988, Func Offset: 0x158
	// Line 2568, Address: 0x102b994, Func Offset: 0x164
	// Line 2569, Address: 0x102b9a0, Func Offset: 0x170
	// Line 2570, Address: 0x102b9c4, Func Offset: 0x194
	// Func End, Address: 0x102b9e0, Func Offset: 0x1b0
}

// 
// Start address: 0x102b9e0
void make_gareki(_anon0* pActwk, short iD0)
{
	short iD2;
	_anon2 lD0;
	_anon0* pActfree;
	// Line 2583, Address: 0x102b9e0, Func Offset: 0
	// Line 2588, Address: 0x102b9f4, Func Offset: 0x14
	// Line 2589, Address: 0x102ba28, Func Offset: 0x48
	// Line 2590, Address: 0x102ba5c, Func Offset: 0x7c
	// Line 2592, Address: 0x102ba70, Func Offset: 0x90
	// Line 2594, Address: 0x102ba84, Func Offset: 0xa4
	// Line 2595, Address: 0x102bab8, Func Offset: 0xd8
	// Line 2597, Address: 0x102bac4, Func Offset: 0xe4
	// Line 2599, Address: 0x102bad8, Func Offset: 0xf8
	// Line 2600, Address: 0x102bae4, Func Offset: 0x104
	// Line 2603, Address: 0x102baf4, Func Offset: 0x114
	// Line 2604, Address: 0x102bb10, Func Offset: 0x130
	// Line 2605, Address: 0x102bb1c, Func Offset: 0x13c
	// Line 2608, Address: 0x102bb28, Func Offset: 0x148
	// Line 2609, Address: 0x102bb44, Func Offset: 0x164
	// Line 2612, Address: 0x102bb50, Func Offset: 0x170
	// Line 2614, Address: 0x102bb5c, Func Offset: 0x17c
	// Line 2615, Address: 0x102bb68, Func Offset: 0x188
	// Line 2616, Address: 0x102bb84, Func Offset: 0x1a4
	// Line 2617, Address: 0x102bb98, Func Offset: 0x1b8
	// Func End, Address: 0x102bbac, Func Offset: 0x1cc
}

// 
// Start address: 0x102bbb0
void make_gareki4(_anon0* pActwk)
{
	short i;
	short offs;
	short para[16];
	_anon0* pActfree;
	// Line 2629, Address: 0x102bbb0, Func Offset: 0
	// Line 2631, Address: 0x102bbc4, Func Offset: 0x14
	// Line 2641, Address: 0x102bbf8, Func Offset: 0x48
	// Line 2642, Address: 0x102bc00, Func Offset: 0x50
	// Line 2643, Address: 0x102bc04, Func Offset: 0x54
	// Line 2645, Address: 0x102bc18, Func Offset: 0x68
	// Line 2647, Address: 0x102bc2c, Func Offset: 0x7c
	// Line 2649, Address: 0x102bc40, Func Offset: 0x90
	// Line 2650, Address: 0x102bc50, Func Offset: 0xa0
	// Line 2651, Address: 0x102bc60, Func Offset: 0xb0
	// Line 2652, Address: 0x102bc70, Func Offset: 0xc0
	// Line 2653, Address: 0x102bc80, Func Offset: 0xd0
	// Line 2654, Address: 0x102bc90, Func Offset: 0xe0
	// Line 2655, Address: 0x102bca0, Func Offset: 0xf0
	// Line 2657, Address: 0x102bcb0, Func Offset: 0x100
	// Line 2658, Address: 0x102bcc0, Func Offset: 0x110
	// Line 2660, Address: 0x102bcd0, Func Offset: 0x120
	// Line 2661, Address: 0x102bce0, Func Offset: 0x130
	// Line 2662, Address: 0x102bcec, Func Offset: 0x13c
	// Line 2663, Address: 0x102bd18, Func Offset: 0x168
	// Line 2664, Address: 0x102bd44, Func Offset: 0x194
	// Line 2665, Address: 0x102bd70, Func Offset: 0x1c0
	// Line 2666, Address: 0x102bd9c, Func Offset: 0x1ec
	// Line 2667, Address: 0x102bdb8, Func Offset: 0x208
	// Func End, Address: 0x102bdd0, Func Offset: 0x220
}

// 
// Start address: 0x102bdd0
void make_beam(short iD0)
{
	short beam_ytbl[3];
	short xposi_tbl[2];
	short iD2;
	short iD3;
	short iD4;
	_anon0* pActfree;
	// Line 2679, Address: 0x102bdd0, Func Offset: 0
	// Line 2680, Address: 0x102bde8, Func Offset: 0x18
	// Line 2681, Address: 0x102be0c, Func Offset: 0x3c
	// Line 2685, Address: 0x102be28, Func Offset: 0x58
	// Line 2687, Address: 0x102be48, Func Offset: 0x78
	// Line 2689, Address: 0x102be54, Func Offset: 0x84
	// Line 2690, Address: 0x102be68, Func Offset: 0x98
	// Line 2691, Address: 0x102be84, Func Offset: 0xb4
	// Line 2692, Address: 0x102be90, Func Offset: 0xc0
	// Line 2693, Address: 0x102be98, Func Offset: 0xc8
	// Line 2694, Address: 0x102bea0, Func Offset: 0xd0
	// Line 2695, Address: 0x102beb4, Func Offset: 0xe4
	// Line 2696, Address: 0x102bed4, Func Offset: 0x104
	// Func End, Address: 0x102bef0, Func Offset: 0x120
}

// 
// Start address: 0x102bef0
void make_bakuha(_anon0* pActwk)
{
	_anon0* pActfree;
	// Line 2708, Address: 0x102bef0, Func Offset: 0
	// Line 2711, Address: 0x102befc, Func Offset: 0xc
	// Line 2712, Address: 0x102bf10, Func Offset: 0x20
	// Line 2713, Address: 0x102bf1c, Func Offset: 0x2c
	// Line 2714, Address: 0x102bf28, Func Offset: 0x38
	// Line 2715, Address: 0x102bf34, Func Offset: 0x44
	// Line 2716, Address: 0x102bf68, Func Offset: 0x78
	// Line 2717, Address: 0x102bf78, Func Offset: 0x88
	// Func End, Address: 0x102bf88, Func Offset: 0x98
}

// 
// Start address: 0x102bf90
void make_bakuha2(_anon0* pActwk)
{
	_anon0* pActfree;
	_anon2 lD0;
	_anon2 lD1;
	// Line 2729, Address: 0x102bf90, Func Offset: 0
	// Line 2733, Address: 0x102bf9c, Func Offset: 0xc
	// Line 2734, Address: 0x102bfb0, Func Offset: 0x20
	// Line 2735, Address: 0x102bfbc, Func Offset: 0x2c
	// Line 2737, Address: 0x102bfc8, Func Offset: 0x38
	// Line 2738, Address: 0x102bfd8, Func Offset: 0x48
	// Line 2739, Address: 0x102bffc, Func Offset: 0x6c
	// Line 2740, Address: 0x102c008, Func Offset: 0x78
	// Line 2741, Address: 0x102c010, Func Offset: 0x80
	// Line 2742, Address: 0x102c024, Func Offset: 0x94
	// Line 2744, Address: 0x102c034, Func Offset: 0xa4
	// Line 2745, Address: 0x102c048, Func Offset: 0xb8
	// Line 2748, Address: 0x102c064, Func Offset: 0xd4
	// Line 2749, Address: 0x102c094, Func Offset: 0x104
	// Line 2750, Address: 0x102c0c4, Func Offset: 0x134
	// Func End, Address: 0x102c0d4, Func Offset: 0x144
}

// 
// Start address: 0x102c0e0
void make_meca(_anon0* pActwk)
{
	_anon0* pActfree;
	// Line 2762, Address: 0x102c0e0, Func Offset: 0
	// Line 2765, Address: 0x102c0ec, Func Offset: 0xc
	// Line 2766, Address: 0x102c100, Func Offset: 0x20
	// Line 2767, Address: 0x102c134, Func Offset: 0x54
	// Line 2768, Address: 0x102c140, Func Offset: 0x60
	// Line 2770, Address: 0x102c174, Func Offset: 0x94
	// Line 2771, Address: 0x102c188, Func Offset: 0xa8
	// Line 2772, Address: 0x102c1bc, Func Offset: 0xdc
	// Line 2774, Address: 0x102c1c8, Func Offset: 0xe8
	// Line 2775, Address: 0x102c1dc, Func Offset: 0xfc
	// Line 2776, Address: 0x102c210, Func Offset: 0x130
	// Line 2777, Address: 0x102c21c, Func Offset: 0x13c
	// Func End, Address: 0x102c22c, Func Offset: 0x14c
}

// 
// Start address: 0x102c230
void frameout_chk(_anon0* pActwk)
{
	// Line 2789, Address: 0x102c230, Func Offset: 0
	// Line 2790, Address: 0x102c23c, Func Offset: 0xc
	// Line 2792, Address: 0x102c258, Func Offset: 0x28
	// Line 2794, Address: 0x102c264, Func Offset: 0x34
	// Func End, Address: 0x102c274, Func Offset: 0x44
}

// 
// Start address: 0x102c280
short get_snc_floor()
{
	// Line 2807, Address: 0x102c280, Func Offset: 0
	// Line 2808, Address: 0x102c29c, Func Offset: 0x1c
	// Line 2809, Address: 0x102c2a8, Func Offset: 0x28
	// Line 2810, Address: 0x102c2c4, Func Offset: 0x44
	// Line 2812, Address: 0x102c2d0, Func Offset: 0x50
	// Line 2813, Address: 0x102c2d4, Func Offset: 0x54
	// Func End, Address: 0x102c2dc, Func Offset: 0x5c
}

// 
// Start address: 0x102c2e0
short get_beam_pos()
{
	// Line 2826, Address: 0x102c2e0, Func Offset: 0
	// Line 2827, Address: 0x102c2fc, Func Offset: 0x1c
	// Line 2828, Address: 0x102c308, Func Offset: 0x28
	// Line 2829, Address: 0x102c324, Func Offset: 0x44
	// Line 2831, Address: 0x102c330, Func Offset: 0x50
	// Line 2833, Address: 0x102c334, Func Offset: 0x54
	// Func End, Address: 0x102c33c, Func Offset: 0x5c
}

// 
// Start address: 0x102c340
void egg6_jisin(_anon0* pActwk)
{
	short iD0;
	// Line 2845, Address: 0x102c340, Func Offset: 0
	// Line 2848, Address: 0x102c34c, Func Offset: 0xc
	// Line 2850, Address: 0x102c360, Func Offset: 0x20
	// Line 2851, Address: 0x102c370, Func Offset: 0x30
	// Line 2852, Address: 0x102c388, Func Offset: 0x48
	// Line 2855, Address: 0x102c39c, Func Offset: 0x5c
	// Line 2857, Address: 0x102c3a8, Func Offset: 0x68
	// Line 2858, Address: 0x102c3bc, Func Offset: 0x7c
	// Line 2867, Address: 0x102c3d0, Func Offset: 0x90
	// Func End, Address: 0x102c3e0, Func Offset: 0xa0
}

// 
// Start address: 0x102c3e0
void colchg_set(unsigned char byD0)
{
	short i;
	// Line 2879, Address: 0x102c3e0, Func Offset: 0
	// Line 2881, Address: 0x102c3ec, Func Offset: 0xc
	// Line 2883, Address: 0x102c3f8, Func Offset: 0x18
	// Line 2884, Address: 0x102c414, Func Offset: 0x34
	// Line 2885, Address: 0x102c434, Func Offset: 0x54
	// Func End, Address: 0x102c444, Func Offset: 0x64
}

// 
// Start address: 0x102c450
void colchg_stop()
{
	// Line 2887, Address: 0x102c450, Func Offset: 0
	// Line 2888, Address: 0x102c458, Func Offset: 0x8
	// Line 2889, Address: 0x102c464, Func Offset: 0x14
	// Func End, Address: 0x102c474, Func Offset: 0x24
}

// 
// Start address: 0x102c480
void colchg_start()
{
	// Line 2891, Address: 0x102c480, Func Offset: 0
	// Line 2892, Address: 0x102c488, Func Offset: 0x8
	// Line 2893, Address: 0x102c494, Func Offset: 0x14
	// Func End, Address: 0x102c4a4, Func Offset: 0x24
}

