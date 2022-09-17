typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef struct _anon9;
typedef struct _anon10;
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef void(*type_11)();

typedef unsigned char type_0[6];
typedef unsigned char type_1[6];
typedef unsigned char type_2[2];
typedef unsigned char type_3[64];
typedef unsigned char type_4[64][8];
typedef unsigned char type_5[22];
typedef unsigned char type_6[3];
typedef char type_7[5];
typedef unsigned char type_8[766];
typedef short type_9[128];
typedef _anon2 type_10[128];
typedef unsigned char* type_12[60];
typedef unsigned char type_13[8];
typedef unsigned char type_14[8];
typedef unsigned char type_15[8];
typedef _anon13 type_16[20];
typedef unsigned char type_17[8];
typedef _anon13 type_18[0];
typedef unsigned char type_19[6];
typedef char type_20[80];
typedef unsigned char type_21[8];
typedef unsigned char type_22[8];
typedef unsigned char type_23[8];
typedef char type_24[4];
typedef unsigned char type_25[7];
typedef unsigned char type_26[8];
typedef _anon0* type_27[0];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
	};
};

union _anon1
{
	int l;
	_anon3 w;
	_anon4 b;
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon1 xposi;
	_anon1 yposi;
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
	unsigned int l;
	_anon9 w;
	_anon10 b;
};

struct _anon8
{
	short plring;
	int plscore;
	_anon5 stageno;
	unsigned int TimeWarp;
	void* pSprBmp;
	unsigned int GamePass;
	unsigned char play_start;
	unsigned char pl_suu;
	unsigned char generate_flag;
	unsigned char time_flag;
	unsigned char special_flag;
	int pltime_sb;
	short plxposi_sb;
	short plyposi_sb;
	short scralim_down_sb;
	short scra_h_posit_sb;
	short scra_v_posit_sb;
	short scrb_h_posit_sb;
	short scrb_v_posit_sb;
	short scrc_h_posit_sb;
	short scrc_v_posit_sb;
	short scrz_h_posit_sb;
	short scrz_v_posit_sb;
	short waterposi_m_sb;
	short plmspd_sb;
	short plxspd_sb;
	short plyspd_sb;
	unsigned char plflag_sb;
	unsigned char cddat_sb;
	unsigned char water_flag_sb;
	unsigned char waterflag_sb;
	unsigned char chibi_sb;
	unsigned char prio_sb;
	short plring_s;
	unsigned char plring_f2_s;
	unsigned char plflag;
	_anon5 demoflag;
	_anon5 hintposi;
	unsigned char waterflag;
	unsigned short* ptv_adr;
	unsigned short* sm_adr0;
	int SPEMode;
	unsigned char stagenm;
	unsigned char clrspflg_save;
	unsigned char ta_flag;
	unsigned char gf_flag;
	unsigned char projector_flag;
	unsigned char flagworkcnt;
	unsigned char flagworkcnt2;
	unsigned char flagwork[766];
	unsigned int ta_time;
	unsigned char ta_Menu1;
	unsigned char ta_Round;
	unsigned char ta_Zone;
	unsigned char EndingMesType;
	int extrascore;
	unsigned char emie3end;
	unsigned char SpecialTime;
	unsigned char bRestart;
	unsigned char User;
	unsigned short wReserved1;
	unsigned short wReserved2;
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

union _anon11
{
	unsigned short w;
	_anon12 b;
};

struct _anon12
{
	unsigned char l;
	unsigned char h;
};

struct _anon13
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned int WaveClear;
_anon2 actwk[128];
unsigned char pl_suu;
_anon5 byecnt0;
unsigned char Brake_Sw;
unsigned char Brake_Req;
_anon0* sncpat[0];
_anon5 editmode;
unsigned char ta_flag;
unsigned char plpower_a;
short plretspdwk;
short pladdspdwk;
short plmaxspdwk;
unsigned char chibi_flag;
_anon5 gametimer;
_anon5 stageno;
unsigned char mapwka[64][8];
short scra_hline;
unsigned char watercoliflag;
char dirstk[4];
short backto_cnt;
_anon11 swdata;
_anon11 swdata1;
unsigned char plautoflag;
_anon5 debugflag;
unsigned char plpower_s;
unsigned char time_flag;
unsigned char boss_sound;
unsigned char plpower_m;
_anon11 plposiwkadr;
short playposiwk[128];
short waterposi;
_anon8* lpKeepWork;
_anon1 pltime;
unsigned char plring_f2_s;
unsigned char plring_f2;
short plring_s;
short plring;
unsigned char waterflag;
unsigned char water_flag;
short waterposi_m;
_anon1 scrz_v_posit;
_anon1 scrz_h_posit;
_anon1 scrc_v_posit;
_anon1 scrc_h_posit;
_anon1 scrb_v_posit;
_anon1 scrb_h_posit;
_anon1 scra_v_posit;
_anon1 scra_h_posit;
short scralim_down;
unsigned char plflag;
char time_item;
_anon5 scroll_start;
_anon5 gameflag;
short scra_vline;
unsigned char scr_cnt;
void(*WaveAllStop)();
unsigned char mizuflag;
unsigned char bossstart;
short scralim_right;
short scralim_left;
_anon7 debugwork;
short emyscorecnt;
unsigned char pl_suu_f;
unsigned char pltime_f;
unsigned char markerno;
unsigned char play_start;
unsigned char flowercnt[3];
unsigned char tv_flag;
unsigned char loopmapno2;
unsigned char loopmapno;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char* playchg[60];
unsigned char plchg00[8];
unsigned char plchg01[8];
unsigned char plchg49[8];
unsigned char plchg53[8];
unsigned char plchg03[8];
unsigned char plchg02[8];
unsigned char plchg54[8];
unsigned char plchg35[6];
unsigned char plchg04[8];
unsigned char plchg39[7];
unsigned char plchg33[6];
unsigned char plchg34[6];
unsigned char* playcg;
_anon0** playpat;

void bye_chk();
void play00(_anon2* actionwk);
void muteki_set();
void test_mapwrt();
void play00init();
void mizuki_set();
unsigned int mapno_chk(short d2, short d3);
void scr_h();
void play00move();
void playpowercnt();
void playposiwkset();
void plwaterchk();
void playsave();
void backto_chk();
void play00walk();
void play00jump();
void ball00walk();
void ball00jump();
void chk11();
void levermove();
void lmovecol();
void plwalk_l();
void plwalk_r();
void balllmove();
void ballwalk_l();
void ballwalk_r();
void jumpmove();
void hedcolchk();
void limitchk();
void ballchk();
void ballset();
unsigned char jumpchk();
void jumpchk2();
void keispd();
void keispd2();
void fallchk();
void direcchg();
void jumpcolchk();
void jumpcolsub();
void jumpcolsub0();
void play00damage();
void play00damage_sub();
void play00die();
void play00die_sub();
void play00erase();
void loopchk();
void st7_x();
void patchgmain();
void patchgmain2(unsigned char* pat_pointer);
void playrunchg(unsigned char pat_no);
void playrunchg2(unsigned char pat_no);
void playrunchg3(unsigned char pat_no);
void playetc_chg();
void little_runchg();
char little_patchg(char pat_index);
void playwrt();
unsigned char frip_spd(int* cal_jump, unsigned char* cal_direc);

// 
// Start address: 0x1007500
void bye_chk()
{
	// Line 23, Address: 0x1007500, Func Offset: 0
	// Line 24, Address: 0x1007508, Func Offset: 0x8
	// Line 26, Address: 0x1007534, Func Offset: 0x34
	// Line 29, Address: 0x1007558, Func Offset: 0x58
	// Line 30, Address: 0x1007574, Func Offset: 0x74
	// Line 31, Address: 0x100757c, Func Offset: 0x7c
	// Line 32, Address: 0x1007588, Func Offset: 0x88
	// Line 33, Address: 0x100759c, Func Offset: 0x9c
	// Line 34, Address: 0x10075a4, Func Offset: 0xa4
	// Line 35, Address: 0x10075b0, Func Offset: 0xb0
	// Line 36, Address: 0x10075bc, Func Offset: 0xbc
	// Line 37, Address: 0x10075c8, Func Offset: 0xc8
	// Line 39, Address: 0x1007604, Func Offset: 0x104
	// Line 40, Address: 0x100760c, Func Offset: 0x10c
	// Line 41, Address: 0x1007618, Func Offset: 0x118
	// Func End, Address: 0x1007628, Func Offset: 0x128
}

// 
// Start address: 0x1007630
void play00(_anon2* actionwk)
{
	unsigned char d0;
	// Line 47, Address: 0x1007630, Func Offset: 0
	// Line 50, Address: 0x1007640, Func Offset: 0x10
	// Line 52, Address: 0x1007648, Func Offset: 0x18
	// Line 54, Address: 0x100765c, Func Offset: 0x2c
	// Line 56, Address: 0x10076a0, Func Offset: 0x70
	// Line 57, Address: 0x10076ac, Func Offset: 0x7c
	// Line 58, Address: 0x10076b8, Func Offset: 0x88
	// Line 59, Address: 0x10076c0, Func Offset: 0x90
	// Line 60, Address: 0x10076d8, Func Offset: 0xa8
	// Line 61, Address: 0x10076f0, Func Offset: 0xc0
	// Line 62, Address: 0x10076f8, Func Offset: 0xc8
	// Line 65, Address: 0x1007710, Func Offset: 0xe0
	// Line 69, Address: 0x1007718, Func Offset: 0xe8
	// Line 71, Address: 0x1007764, Func Offset: 0x134
	// Line 72, Address: 0x100776c, Func Offset: 0x13c
	// Line 74, Address: 0x1007774, Func Offset: 0x144
	// Line 75, Address: 0x100777c, Func Offset: 0x14c
	// Line 77, Address: 0x1007784, Func Offset: 0x154
	// Line 78, Address: 0x100778c, Func Offset: 0x15c
	// Line 80, Address: 0x1007794, Func Offset: 0x164
	// Line 81, Address: 0x100779c, Func Offset: 0x16c
	// Line 83, Address: 0x10077a4, Func Offset: 0x174
	// Line 88, Address: 0x10077ac, Func Offset: 0x17c
	// Line 90, Address: 0x10077bc, Func Offset: 0x18c
	// Line 91, Address: 0x10077d8, Func Offset: 0x1a8
	// Func End, Address: 0x10077ec, Func Offset: 0x1bc
}

// 
// Start address: 0x10077f0
void muteki_set()
{
	// Line 99, Address: 0x10077f0, Func Offset: 0
	// Line 100, Address: 0x1007804, Func Offset: 0x14
	// Line 101, Address: 0x1007810, Func Offset: 0x20
	// Line 103, Address: 0x1007840, Func Offset: 0x50
	// Line 104, Address: 0x100784c, Func Offset: 0x5c
	// Line 105, Address: 0x1007858, Func Offset: 0x68
	// Line 106, Address: 0x1007864, Func Offset: 0x74
	// Line 108, Address: 0x1007870, Func Offset: 0x80
	// Func End, Address: 0x1007878, Func Offset: 0x88
}

// 
// Start address: 0x1007880
void test_mapwrt()
{
	// Line 118, Address: 0x1007880, Func Offset: 0
	// Func End, Address: 0x1007888, Func Offset: 0x8
}

// 
// Start address: 0x1007890
void play00init()
{
	// Line 125, Address: 0x1007890, Func Offset: 0
	// Line 126, Address: 0x10078a4, Func Offset: 0x14
	// Line 127, Address: 0x10078b0, Func Offset: 0x20
	// Line 128, Address: 0x10078bc, Func Offset: 0x2c
	// Line 129, Address: 0x10078d0, Func Offset: 0x40
	// Line 130, Address: 0x10078dc, Func Offset: 0x4c
	// Line 134, Address: 0x10078e8, Func Offset: 0x58
	// Line 135, Address: 0x10078f4, Func Offset: 0x64
	// Line 136, Address: 0x1007900, Func Offset: 0x70
	// Line 137, Address: 0x100790c, Func Offset: 0x7c
	// Line 138, Address: 0x1007918, Func Offset: 0x88
	// Line 139, Address: 0x1007924, Func Offset: 0x94
	// Line 140, Address: 0x1007930, Func Offset: 0xa0
	// Line 141, Address: 0x100793c, Func Offset: 0xac
	// Func End, Address: 0x1007944, Func Offset: 0xb4
}

// 
// Start address: 0x1007950
void mizuki_set()
{
	short d2;
	short d3;
	unsigned int d1;
	_anon2* new_actwk;
	// Line 146, Address: 0x1007950, Func Offset: 0
	// Line 151, Address: 0x1007964, Func Offset: 0x14
	// Line 152, Address: 0x100797c, Func Offset: 0x2c
	// Line 153, Address: 0x1007998, Func Offset: 0x48
	// Line 154, Address: 0x10079ac, Func Offset: 0x5c
	// Line 155, Address: 0x10079c0, Func Offset: 0x70
	// Line 156, Address: 0x10079d0, Func Offset: 0x80
	// Line 157, Address: 0x10079e4, Func Offset: 0x94
	// Line 158, Address: 0x10079f4, Func Offset: 0xa4
	// Line 160, Address: 0x1007a10, Func Offset: 0xc0
	// Line 161, Address: 0x1007a24, Func Offset: 0xd4
	// Line 162, Address: 0x1007a38, Func Offset: 0xe8
	// Line 163, Address: 0x1007a44, Func Offset: 0xf4
	// Line 164, Address: 0x1007a54, Func Offset: 0x104
	// Line 165, Address: 0x1007a64, Func Offset: 0x114
	// Line 166, Address: 0x1007a7c, Func Offset: 0x12c
	// Line 168, Address: 0x1007a9c, Func Offset: 0x14c
	// Line 169, Address: 0x1007ab0, Func Offset: 0x160
	// Func End, Address: 0x1007acc, Func Offset: 0x17c
}

// 
// Start address: 0x1007ad0
unsigned int mapno_chk(short d2, short d3)
{
	unsigned int d1;
	// Line 174, Address: 0x1007ad0, Func Offset: 0
	// Line 177, Address: 0x1007ae0, Func Offset: 0x10
	// Line 178, Address: 0x1007ae4, Func Offset: 0x14
	// Line 179, Address: 0x1007b24, Func Offset: 0x54
	// Line 180, Address: 0x1007b28, Func Offset: 0x58
	// Func End, Address: 0x1007b38, Func Offset: 0x68
}

// 
// Start address: 0x1007b40
void scr_h()
{
	short d0;
	short d1;
	// Line 190, Address: 0x1007b40, Func Offset: 0
	// Line 193, Address: 0x1007b4c, Func Offset: 0xc
	// Line 194, Address: 0x1007b5c, Func Offset: 0x1c
	// Line 196, Address: 0x1007b98, Func Offset: 0x58
	// Line 199, Address: 0x1007be0, Func Offset: 0xa0
	// Line 200, Address: 0x1007c00, Func Offset: 0xc0
	// Line 201, Address: 0x1007c20, Func Offset: 0xe0
	// Line 202, Address: 0x1007c28, Func Offset: 0xe8
	// Line 203, Address: 0x1007c40, Func Offset: 0x100
	// Line 204, Address: 0x1007c4c, Func Offset: 0x10c
	// Line 205, Address: 0x1007c6c, Func Offset: 0x12c
	// Line 206, Address: 0x1007c74, Func Offset: 0x134
	// Line 207, Address: 0x1007c80, Func Offset: 0x140
	// Line 211, Address: 0x1007ca0, Func Offset: 0x160
	// Line 212, Address: 0x1007ca8, Func Offset: 0x168
	// Func End, Address: 0x1007cbc, Func Offset: 0x17c
}

// 
// Start address: 0x1007cc0
void play00move()
{
	// Line 217, Address: 0x1007cc0, Func Offset: 0
	// Line 218, Address: 0x1007cc8, Func Offset: 0x8
	// Line 219, Address: 0x1007cd0, Func Offset: 0x10
	// Line 220, Address: 0x1007cd8, Func Offset: 0x18
	// Line 221, Address: 0x1007d08, Func Offset: 0x48
	// Line 222, Address: 0x1007d14, Func Offset: 0x54
	// Line 225, Address: 0x1007d1c, Func Offset: 0x5c
	// Line 226, Address: 0x1007d48, Func Offset: 0x88
	// Line 231, Address: 0x1007d70, Func Offset: 0xb0
	// Line 232, Address: 0x1007d88, Func Offset: 0xc8
	// Line 233, Address: 0x1007dbc, Func Offset: 0xfc
	// Line 234, Address: 0x1007dc4, Func Offset: 0x104
	// Line 235, Address: 0x1007dcc, Func Offset: 0x10c
	// Line 237, Address: 0x1007e10, Func Offset: 0x150
	// Line 238, Address: 0x1007e18, Func Offset: 0x158
	// Line 240, Address: 0x1007e20, Func Offset: 0x160
	// Line 241, Address: 0x1007e28, Func Offset: 0x168
	// Line 243, Address: 0x1007e30, Func Offset: 0x170
	// Line 244, Address: 0x1007e38, Func Offset: 0x178
	// Line 246, Address: 0x1007e40, Func Offset: 0x180
	// Line 251, Address: 0x1007e48, Func Offset: 0x188
	// Line 254, Address: 0x1007e50, Func Offset: 0x190
	// Line 255, Address: 0x1007e58, Func Offset: 0x198
	// Line 257, Address: 0x1007e60, Func Offset: 0x1a0
	// Line 258, Address: 0x1007e68, Func Offset: 0x1a8
	// Line 259, Address: 0x1007e78, Func Offset: 0x1b8
	// Line 260, Address: 0x1007e88, Func Offset: 0x1c8
	// Line 261, Address: 0x1007eb4, Func Offset: 0x1f4
	// Line 263, Address: 0x1007ec4, Func Offset: 0x204
	// Line 264, Address: 0x1007ecc, Func Offset: 0x20c
	// Line 266, Address: 0x1007f08, Func Offset: 0x248
	// Line 268, Address: 0x1007f18, Func Offset: 0x258
	// Line 269, Address: 0x1007f20, Func Offset: 0x260
	// Func End, Address: 0x1007f30, Func Offset: 0x270
}

// 
// Start address: 0x1007f30
void playpowercnt()
{
	unsigned short d0;
	unsigned short cal;
	// Line 276, Address: 0x1007f30, Func Offset: 0
	// Line 280, Address: 0x1007f40, Func Offset: 0x10
	// Line 281, Address: 0x1007f5c, Func Offset: 0x2c
	// Line 282, Address: 0x1007f68, Func Offset: 0x38
	// Line 283, Address: 0x1007f74, Func Offset: 0x44
	// Line 284, Address: 0x1007f88, Func Offset: 0x58
	// Line 285, Address: 0x1007f98, Func Offset: 0x68
	// Line 286, Address: 0x1007fa0, Func Offset: 0x70
	// Line 287, Address: 0x1007fb8, Func Offset: 0x88
	// Line 288, Address: 0x1007fc8, Func Offset: 0x98
	// Line 289, Address: 0x1007fd8, Func Offset: 0xa8
	// Line 290, Address: 0x1007fe0, Func Offset: 0xb0
	// Line 291, Address: 0x1007ff8, Func Offset: 0xc8
	// Line 296, Address: 0x1008008, Func Offset: 0xd8
	// Line 297, Address: 0x100801c, Func Offset: 0xec
	// Line 298, Address: 0x1008028, Func Offset: 0xf8
	// Line 299, Address: 0x1008034, Func Offset: 0x104
	// Line 300, Address: 0x1008044, Func Offset: 0x114
	// Line 301, Address: 0x1008058, Func Offset: 0x128
	// Line 302, Address: 0x1008064, Func Offset: 0x134
	// Line 303, Address: 0x100808c, Func Offset: 0x15c
	// Line 304, Address: 0x10080a0, Func Offset: 0x170
	// Line 307, Address: 0x10080ac, Func Offset: 0x17c
	// Line 310, Address: 0x10080b4, Func Offset: 0x184
	// Line 316, Address: 0x10080bc, Func Offset: 0x18c
	// Line 317, Address: 0x10080d0, Func Offset: 0x1a0
	// Line 318, Address: 0x10080dc, Func Offset: 0x1ac
	// Line 319, Address: 0x10080e8, Func Offset: 0x1b8
	// Line 320, Address: 0x10080f8, Func Offset: 0x1c8
	// Line 321, Address: 0x100810c, Func Offset: 0x1dc
	// Line 322, Address: 0x1008118, Func Offset: 0x1e8
	// Line 323, Address: 0x1008124, Func Offset: 0x1f4
	// Line 324, Address: 0x1008130, Func Offset: 0x200
	// Line 325, Address: 0x100813c, Func Offset: 0x20c
	// Line 326, Address: 0x1008164, Func Offset: 0x234
	// Line 327, Address: 0x1008178, Func Offset: 0x248
	// Line 330, Address: 0x1008184, Func Offset: 0x254
	// Line 333, Address: 0x100818c, Func Offset: 0x25c
	// Line 337, Address: 0x1008194, Func Offset: 0x264
	// Func End, Address: 0x10081ac, Func Offset: 0x27c
}

// 
// Start address: 0x10081b0
void playposiwkset()
{
	// Line 344, Address: 0x10081b0, Func Offset: 0
	// Line 345, Address: 0x10081f0, Func Offset: 0x40
	// Line 346, Address: 0x1008234, Func Offset: 0x84
	// Line 347, Address: 0x1008248, Func Offset: 0x98
	// Func End, Address: 0x1008250, Func Offset: 0xa0
}

// 
// Start address: 0x1008250
void plwaterchk()
{
	unsigned char gavage;
	_anon2* new_actwk;
	// Line 352, Address: 0x1008250, Func Offset: 0
	// Line 353, Address: 0x100825c, Func Offset: 0xc
	// Line 356, Address: 0x1008264, Func Offset: 0x14
	// Line 358, Address: 0x1008280, Func Offset: 0x30
	// Line 360, Address: 0x10082b8, Func Offset: 0x68
	// Line 361, Address: 0x10082e4, Func Offset: 0x94
	// Line 362, Address: 0x10082fc, Func Offset: 0xac
	// Line 363, Address: 0x1008310, Func Offset: 0xc0
	// Line 364, Address: 0x1008318, Func Offset: 0xc8
	// Line 365, Address: 0x1008324, Func Offset: 0xd4
	// Line 366, Address: 0x100832c, Func Offset: 0xdc
	// Line 367, Address: 0x1008338, Func Offset: 0xe8
	// Line 368, Address: 0x1008344, Func Offset: 0xf4
	// Line 369, Address: 0x1008350, Func Offset: 0x100
	// Line 370, Address: 0x1008378, Func Offset: 0x128
	// Line 371, Address: 0x10083a0, Func Offset: 0x150
	// Line 374, Address: 0x10083c0, Func Offset: 0x170
	// Line 375, Address: 0x10083d8, Func Offset: 0x188
	// Line 376, Address: 0x10083f0, Func Offset: 0x1a0
	// Line 377, Address: 0x1008404, Func Offset: 0x1b4
	// Line 378, Address: 0x1008410, Func Offset: 0x1c0
	// Line 379, Address: 0x100841c, Func Offset: 0x1cc
	// Line 380, Address: 0x1008428, Func Offset: 0x1d8
	// Line 381, Address: 0x100843c, Func Offset: 0x1ec
	// Line 382, Address: 0x1008454, Func Offset: 0x204
	// Line 385, Address: 0x100847c, Func Offset: 0x22c
	// Line 386, Address: 0x1008490, Func Offset: 0x240
	// Line 387, Address: 0x100849c, Func Offset: 0x24c
	// Line 388, Address: 0x10084ac, Func Offset: 0x25c
	// Func End, Address: 0x10084c0, Func Offset: 0x270
}

// 
// Start address: 0x10084c0
void playsave()
{
	// Line 394, Address: 0x10084c0, Func Offset: 0
	// Line 395, Address: 0x10084d4, Func Offset: 0x14
	// Line 396, Address: 0x10084e8, Func Offset: 0x28
	// Line 397, Address: 0x10084fc, Func Offset: 0x3c
	// Line 398, Address: 0x1008510, Func Offset: 0x50
	// Line 399, Address: 0x1008524, Func Offset: 0x64
	// Line 400, Address: 0x1008538, Func Offset: 0x78
	// Line 401, Address: 0x100854c, Func Offset: 0x8c
	// Line 402, Address: 0x1008560, Func Offset: 0xa0
	// Line 403, Address: 0x1008574, Func Offset: 0xb4
	// Line 404, Address: 0x1008588, Func Offset: 0xc8
	// Line 405, Address: 0x100859c, Func Offset: 0xdc
	// Line 406, Address: 0x10085b0, Func Offset: 0xf0
	// Line 407, Address: 0x10085c4, Func Offset: 0x104
	// Line 408, Address: 0x10085d8, Func Offset: 0x118
	// Line 409, Address: 0x10085ec, Func Offset: 0x12c
	// Line 410, Address: 0x1008600, Func Offset: 0x140
	// Line 411, Address: 0x1008614, Func Offset: 0x154
	// Line 412, Address: 0x1008628, Func Offset: 0x168
	// Line 413, Address: 0x100863c, Func Offset: 0x17c
	// Line 414, Address: 0x1008650, Func Offset: 0x190
	// Line 415, Address: 0x1008664, Func Offset: 0x1a4
	// Line 416, Address: 0x1008678, Func Offset: 0x1b8
	// Line 417, Address: 0x100868c, Func Offset: 0x1cc
	// Line 418, Address: 0x100869c, Func Offset: 0x1dc
	// Line 419, Address: 0x10086b0, Func Offset: 0x1f0
	// Line 420, Address: 0x10086c0, Func Offset: 0x200
	// Line 421, Address: 0x10086f4, Func Offset: 0x234
	// Line 423, Address: 0x1008708, Func Offset: 0x248
	// Line 424, Address: 0x100871c, Func Offset: 0x25c
	// Func End, Address: 0x1008724, Func Offset: 0x264
}

// 
// Start address: 0x1008730
void backto_chk()
{
	short d0;
	short d1;
	short d2;
	char cal;
	// Line 430, Address: 0x1008730, Func Offset: 0
	// Line 435, Address: 0x1008748, Func Offset: 0x18
	// Line 437, Address: 0x100875c, Func Offset: 0x2c
	// Line 438, Address: 0x1008778, Func Offset: 0x48
	// Line 439, Address: 0x10087a4, Func Offset: 0x74
	// Line 440, Address: 0x10087c0, Func Offset: 0x90
	// Line 441, Address: 0x10087c8, Func Offset: 0x98
	// Line 442, Address: 0x10087d0, Func Offset: 0xa0
	// Line 443, Address: 0x10087d8, Func Offset: 0xa8
	// Line 448, Address: 0x10087e0, Func Offset: 0xb0
	// Line 449, Address: 0x10087f4, Func Offset: 0xc4
	// Line 450, Address: 0x100880c, Func Offset: 0xdc
	// Line 451, Address: 0x1008818, Func Offset: 0xe8
	// Line 452, Address: 0x1008828, Func Offset: 0xf8
	// Line 453, Address: 0x1008854, Func Offset: 0x124
	// Line 454, Address: 0x1008878, Func Offset: 0x148
	// Line 455, Address: 0x100889c, Func Offset: 0x16c
	// Line 456, Address: 0x10088b4, Func Offset: 0x184
	// Line 457, Address: 0x10088c4, Func Offset: 0x194
	// Line 458, Address: 0x10088f0, Func Offset: 0x1c0
	// Line 459, Address: 0x100890c, Func Offset: 0x1dc
	// Line 460, Address: 0x100892c, Func Offset: 0x1fc
	// Line 461, Address: 0x1008944, Func Offset: 0x214
	// Line 468, Address: 0x100894c, Func Offset: 0x21c
	// Line 469, Address: 0x1008958, Func Offset: 0x228
	// Line 470, Address: 0x1008960, Func Offset: 0x230
	// Line 472, Address: 0x1008968, Func Offset: 0x238
	// Line 473, Address: 0x100897c, Func Offset: 0x24c
	// Line 474, Address: 0x1008994, Func Offset: 0x264
	// Line 475, Address: 0x10089a0, Func Offset: 0x270
	// Line 476, Address: 0x10089b0, Func Offset: 0x280
	// Line 477, Address: 0x10089c0, Func Offset: 0x290
	// Line 480, Address: 0x10089cc, Func Offset: 0x29c
	// Line 481, Address: 0x10089f8, Func Offset: 0x2c8
	// Line 482, Address: 0x1008a14, Func Offset: 0x2e4
	// Line 483, Address: 0x1008a34, Func Offset: 0x304
	// Line 484, Address: 0x1008a4c, Func Offset: 0x31c
	// Line 485, Address: 0x1008a54, Func Offset: 0x324
	// Line 486, Address: 0x1008a60, Func Offset: 0x330
	// Line 489, Address: 0x1008a68, Func Offset: 0x338
	// Line 490, Address: 0x1008a7c, Func Offset: 0x34c
	// Line 491, Address: 0x1008aa8, Func Offset: 0x378
	// Line 492, Address: 0x1008ab0, Func Offset: 0x380
	// Line 493, Address: 0x1008ab8, Func Offset: 0x388
	// Line 495, Address: 0x1008ac0, Func Offset: 0x390
	// Line 496, Address: 0x1008adc, Func Offset: 0x3ac
	// Line 497, Address: 0x1008ae4, Func Offset: 0x3b4
	// Line 498, Address: 0x1008aec, Func Offset: 0x3bc
	// Line 500, Address: 0x1008af4, Func Offset: 0x3c4
	// Func End, Address: 0x1008b14, Func Offset: 0x3e4
}

// 
// Start address: 0x1008b20
void play00walk()
{
	// Line 506, Address: 0x1008b20, Func Offset: 0
	// Line 507, Address: 0x1008b28, Func Offset: 0x8
	// Line 508, Address: 0x1008b30, Func Offset: 0x10
	// Line 509, Address: 0x1008b4c, Func Offset: 0x2c
	// Line 510, Address: 0x1008b60, Func Offset: 0x40
	// Line 511, Address: 0x1008b78, Func Offset: 0x58
	// Line 512, Address: 0x1008b80, Func Offset: 0x60
	// Line 514, Address: 0x1008b98, Func Offset: 0x78
	// Line 515, Address: 0x1008ba0, Func Offset: 0x80
	// Line 516, Address: 0x1008bb0, Func Offset: 0x90
	// Line 518, Address: 0x1008bb8, Func Offset: 0x98
	// Line 519, Address: 0x1008bc0, Func Offset: 0xa0
	// Line 520, Address: 0x1008bc8, Func Offset: 0xa8
	// Line 521, Address: 0x1008bdc, Func Offset: 0xbc
	// Line 522, Address: 0x1008be4, Func Offset: 0xc4
	// Line 523, Address: 0x1008bec, Func Offset: 0xcc
	// Line 524, Address: 0x1008bf4, Func Offset: 0xd4
	// Line 525, Address: 0x1008bfc, Func Offset: 0xdc
	// Line 526, Address: 0x1008c0c, Func Offset: 0xec
	// Line 527, Address: 0x1008c1c, Func Offset: 0xfc
	// Line 528, Address: 0x1008c24, Func Offset: 0x104
	// Func End, Address: 0x1008c34, Func Offset: 0x114
}

// 
// Start address: 0x1008c40
void play00jump()
{
	// Line 534, Address: 0x1008c40, Func Offset: 0
	// Line 535, Address: 0x1008c48, Func Offset: 0x8
	// Line 536, Address: 0x1008c90, Func Offset: 0x50
	// Line 538, Address: 0x1008c98, Func Offset: 0x58
	// Line 539, Address: 0x1008ca0, Func Offset: 0x60
	// Line 540, Address: 0x1008ca8, Func Offset: 0x68
	// Line 541, Address: 0x1008cb0, Func Offset: 0x70
	// Line 542, Address: 0x1008cb8, Func Offset: 0x78
	// Line 543, Address: 0x1008cc0, Func Offset: 0x80
	// Line 544, Address: 0x1008cd0, Func Offset: 0x90
	// Line 546, Address: 0x1008cfc, Func Offset: 0xbc
	// Line 548, Address: 0x1008d04, Func Offset: 0xc4
	// Line 549, Address: 0x1008d0c, Func Offset: 0xcc
	// Func End, Address: 0x1008d1c, Func Offset: 0xdc
}

// 
// Start address: 0x1008d20
void ball00walk()
{
	// Line 554, Address: 0x1008d20, Func Offset: 0
	// Line 555, Address: 0x1008d28, Func Offset: 0x8
	// Line 556, Address: 0x1008d30, Func Offset: 0x10
	// Line 557, Address: 0x1008d38, Func Offset: 0x18
	// Line 558, Address: 0x1008d4c, Func Offset: 0x2c
	// Line 559, Address: 0x1008d54, Func Offset: 0x34
	// Line 560, Address: 0x1008d5c, Func Offset: 0x3c
	// Line 561, Address: 0x1008d64, Func Offset: 0x44
	// Line 563, Address: 0x1008d88, Func Offset: 0x68
	// Line 564, Address: 0x1008d98, Func Offset: 0x78
	// Line 565, Address: 0x1008da0, Func Offset: 0x80
	// Func End, Address: 0x1008db0, Func Offset: 0x90
}

// 
// Start address: 0x1008db0
void ball00jump()
{
	// Line 570, Address: 0x1008db0, Func Offset: 0
	// Line 571, Address: 0x1008db8, Func Offset: 0x8
	// Line 572, Address: 0x1008dc0, Func Offset: 0x10
	// Line 573, Address: 0x1008dc8, Func Offset: 0x18
	// Line 574, Address: 0x1008dd0, Func Offset: 0x20
	// Line 575, Address: 0x1008dd8, Func Offset: 0x28
	// Line 577, Address: 0x1008de0, Func Offset: 0x30
	// Line 578, Address: 0x1008df0, Func Offset: 0x40
	// Line 580, Address: 0x1008e1c, Func Offset: 0x6c
	// Line 582, Address: 0x1008e24, Func Offset: 0x74
	// Line 583, Address: 0x1008e2c, Func Offset: 0x7c
	// Func End, Address: 0x1008e3c, Func Offset: 0x8c
}

// 
// Start address: 0x1008e40
void chk11()
{
	short d0;
	char mapdata;
	char chk11tbl[5];
	// Line 588, Address: 0x1008e40, Func Offset: 0
	// Line 591, Address: 0x1008e4c, Func Offset: 0xc
	// Line 593, Address: 0x1008e78, Func Offset: 0x38
	// Line 594, Address: 0x1008e90, Func Offset: 0x50
	// Line 595, Address: 0x1008ea8, Func Offset: 0x68
	// Line 597, Address: 0x1008ef8, Func Offset: 0xb8
	// Line 598, Address: 0x1008f44, Func Offset: 0x104
	// Line 599, Address: 0x1008f50, Func Offset: 0x110
	// Line 600, Address: 0x1008f78, Func Offset: 0x138
	// Line 601, Address: 0x1008f8c, Func Offset: 0x14c
	// Line 603, Address: 0x1008f94, Func Offset: 0x154
	// Line 604, Address: 0x1008fb4, Func Offset: 0x174
	// Line 605, Address: 0x1008fcc, Func Offset: 0x18c
	// Line 606, Address: 0x1008fe0, Func Offset: 0x1a0
	// Line 607, Address: 0x1008ff8, Func Offset: 0x1b8
	// Line 608, Address: 0x1009018, Func Offset: 0x1d8
	// Line 609, Address: 0x1009024, Func Offset: 0x1e4
	// Line 610, Address: 0x100903c, Func Offset: 0x1fc
	// Line 611, Address: 0x1009060, Func Offset: 0x220
	// Func End, Address: 0x1009074, Func Offset: 0x234
}

// 
// Start address: 0x1009080
void levermove()
{
	short d0;
	short d1;
	short d2;
	unsigned char ride_number;
	int sin_data;
	int cos_data;
	short sin_tmp;
	short cos_tmp;
	// Line 618, Address: 0x1009080, Func Offset: 0
	// Line 631, Address: 0x10090a0, Func Offset: 0x20
	// Line 632, Address: 0x10090b4, Func Offset: 0x34
	// Line 633, Address: 0x10090c8, Func Offset: 0x48
	// Line 634, Address: 0x10090e8, Func Offset: 0x68
	// Line 636, Address: 0x1009108, Func Offset: 0x88
	// Line 637, Address: 0x1009128, Func Offset: 0xa8
	// Line 639, Address: 0x1009154, Func Offset: 0xd4
	// Line 640, Address: 0x100916c, Func Offset: 0xec
	// Line 641, Address: 0x1009180, Func Offset: 0x100
	// Line 643, Address: 0x100918c, Func Offset: 0x10c
	// Line 645, Address: 0x10091a4, Func Offset: 0x124
	// Line 646, Address: 0x10091b0, Func Offset: 0x130
	// Line 647, Address: 0x10091e8, Func Offset: 0x168
	// Line 648, Address: 0x1009218, Func Offset: 0x198
	// Line 649, Address: 0x1009220, Func Offset: 0x1a0
	// Line 652, Address: 0x1009228, Func Offset: 0x1a8
	// Line 653, Address: 0x1009254, Func Offset: 0x1d4
	// Line 654, Address: 0x1009274, Func Offset: 0x1f4
	// Line 655, Address: 0x10092cc, Func Offset: 0x24c
	// Line 656, Address: 0x10092e0, Func Offset: 0x260
	// Line 657, Address: 0x10092fc, Func Offset: 0x27c
	// Line 660, Address: 0x1009304, Func Offset: 0x284
	// Line 661, Address: 0x100931c, Func Offset: 0x29c
	// Line 662, Address: 0x1009330, Func Offset: 0x2b0
	// Line 663, Address: 0x100933c, Func Offset: 0x2bc
	// Line 664, Address: 0x1009364, Func Offset: 0x2e4
	// Line 665, Address: 0x100936c, Func Offset: 0x2ec
	// Line 666, Address: 0x1009374, Func Offset: 0x2f4
	// Line 669, Address: 0x100938c, Func Offset: 0x30c
	// Line 670, Address: 0x10093b8, Func Offset: 0x338
	// Line 671, Address: 0x10093c4, Func Offset: 0x344
	// Line 674, Address: 0x10093cc, Func Offset: 0x34c
	// Line 677, Address: 0x10093e4, Func Offset: 0x364
	// Line 678, Address: 0x1009410, Func Offset: 0x390
	// Line 679, Address: 0x100941c, Func Offset: 0x39c
	// Line 684, Address: 0x1009424, Func Offset: 0x3a4
	// Line 685, Address: 0x1009464, Func Offset: 0x3e4
	// Line 686, Address: 0x100947c, Func Offset: 0x3fc
	// Line 687, Address: 0x10094ac, Func Offset: 0x42c
	// Line 688, Address: 0x10094d0, Func Offset: 0x450
	// Line 690, Address: 0x10094fc, Func Offset: 0x47c
	// Line 693, Address: 0x1009530, Func Offset: 0x4b0
	// Line 694, Address: 0x1009548, Func Offset: 0x4c8
	// Line 695, Address: 0x1009554, Func Offset: 0x4d4
	// Line 696, Address: 0x1009568, Func Offset: 0x4e8
	// Line 697, Address: 0x1009570, Func Offset: 0x4f0
	// Line 698, Address: 0x100957c, Func Offset: 0x4fc
	// Line 699, Address: 0x1009594, Func Offset: 0x514
	// Line 700, Address: 0x10095d8, Func Offset: 0x558
	// Line 701, Address: 0x1009618, Func Offset: 0x598
	// Line 703, Address: 0x1009668, Func Offset: 0x5e8
	// Line 704, Address: 0x100967c, Func Offset: 0x5fc
	// Line 705, Address: 0x100968c, Func Offset: 0x60c
	// Line 706, Address: 0x10096a4, Func Offset: 0x624
	// Line 707, Address: 0x10096c8, Func Offset: 0x648
	// Line 708, Address: 0x10096d0, Func Offset: 0x650
	// Line 710, Address: 0x10096f4, Func Offset: 0x674
	// Line 711, Address: 0x10096fc, Func Offset: 0x67c
	// Line 714, Address: 0x1009704, Func Offset: 0x684
	// Line 715, Address: 0x100971c, Func Offset: 0x69c
	// Line 716, Address: 0x1009728, Func Offset: 0x6a8
	// Line 717, Address: 0x1009734, Func Offset: 0x6b4
	// Line 719, Address: 0x1009740, Func Offset: 0x6c0
	// Line 722, Address: 0x1009748, Func Offset: 0x6c8
	// Line 723, Address: 0x1009760, Func Offset: 0x6e0
	// Line 724, Address: 0x100976c, Func Offset: 0x6ec
	// Line 725, Address: 0x1009794, Func Offset: 0x714
	// Line 726, Address: 0x100979c, Func Offset: 0x71c
	// Line 727, Address: 0x10097a4, Func Offset: 0x724
	// Line 729, Address: 0x10097ac, Func Offset: 0x72c
	// Line 730, Address: 0x10097b4, Func Offset: 0x734
	// Line 731, Address: 0x10097c0, Func Offset: 0x740
	// Line 732, Address: 0x10097c8, Func Offset: 0x748
	// Line 737, Address: 0x10097d0, Func Offset: 0x750
	// Line 738, Address: 0x10097e8, Func Offset: 0x768
	// Line 739, Address: 0x10097f4, Func Offset: 0x774
	// Line 740, Address: 0x1009824, Func Offset: 0x7a4
	// Line 743, Address: 0x100982c, Func Offset: 0x7ac
	// Line 744, Address: 0x1009844, Func Offset: 0x7c4
	// Line 745, Address: 0x1009868, Func Offset: 0x7e8
	// Line 747, Address: 0x1009894, Func Offset: 0x814
	// Line 750, Address: 0x10098c8, Func Offset: 0x848
	// Line 751, Address: 0x10098e0, Func Offset: 0x860
	// Line 752, Address: 0x10098ec, Func Offset: 0x86c
	// Line 753, Address: 0x1009900, Func Offset: 0x880
	// Line 754, Address: 0x1009918, Func Offset: 0x898
	// Line 755, Address: 0x1009924, Func Offset: 0x8a4
	// Line 756, Address: 0x1009930, Func Offset: 0x8b0
	// Line 757, Address: 0x100996c, Func Offset: 0x8ec
	// Line 758, Address: 0x100997c, Func Offset: 0x8fc
	// Line 759, Address: 0x1009988, Func Offset: 0x908
	// Line 760, Address: 0x1009994, Func Offset: 0x914
	// Line 763, Address: 0x100999c, Func Offset: 0x91c
	// Line 764, Address: 0x10099b4, Func Offset: 0x934
	// Line 765, Address: 0x10099c0, Func Offset: 0x940
	// Line 766, Address: 0x10099f0, Func Offset: 0x970
	// Line 769, Address: 0x10099f8, Func Offset: 0x978
	// Line 770, Address: 0x1009a14, Func Offset: 0x994
	// Line 771, Address: 0x1009a34, Func Offset: 0x9b4
	// Line 773, Address: 0x1009a3c, Func Offset: 0x9bc
	// Line 774, Address: 0x1009a6c, Func Offset: 0x9ec
	// Line 779, Address: 0x1009a80, Func Offset: 0xa00
	// Line 781, Address: 0x1009ab0, Func Offset: 0xa30
	// Line 783, Address: 0x1009ac8, Func Offset: 0xa48
	// Line 784, Address: 0x1009b04, Func Offset: 0xa84
	// Line 786, Address: 0x1009b0c, Func Offset: 0xa8c
	// Line 790, Address: 0x1009b48, Func Offset: 0xac8
	// Line 791, Address: 0x1009b68, Func Offset: 0xae8
	// Line 792, Address: 0x1009b74, Func Offset: 0xaf4
	// Line 794, Address: 0x1009b84, Func Offset: 0xb04
	// Line 795, Address: 0x1009b98, Func Offset: 0xb18
	// Line 796, Address: 0x1009ba0, Func Offset: 0xb20
	// Line 797, Address: 0x1009bb0, Func Offset: 0xb30
	// Line 798, Address: 0x1009bc4, Func Offset: 0xb44
	// Line 799, Address: 0x1009bc8, Func Offset: 0xb48
	// Line 801, Address: 0x1009bd8, Func Offset: 0xb58
	// Line 802, Address: 0x1009be0, Func Offset: 0xb60
	// Func End, Address: 0x1009c08, Func Offset: 0xb88
}

// 
// Start address: 0x1009c10
void lmovecol()
{
	short add_speed;
	char add_dir;
	char tmp_dir;
	unsigned char sonic_dir;
	// Line 805, Address: 0x1009c10, Func Offset: 0
	// Line 806, Address: 0x1009c24, Func Offset: 0x14
	// Line 811, Address: 0x1009c28, Func Offset: 0x18
	// Line 812, Address: 0x1009c64, Func Offset: 0x54
	// Line 813, Address: 0x1009c70, Func Offset: 0x60
	// Line 815, Address: 0x1009ca4, Func Offset: 0x94
	// Line 816, Address: 0x1009cc8, Func Offset: 0xb8
	// Line 817, Address: 0x1009ccc, Func Offset: 0xbc
	// Line 818, Address: 0x1009d10, Func Offset: 0x100
	// Line 819, Address: 0x1009d18, Func Offset: 0x108
	// Line 820, Address: 0x1009d5c, Func Offset: 0x14c
	// Line 821, Address: 0x1009d70, Func Offset: 0x160
	// Line 824, Address: 0x1009da8, Func Offset: 0x198
	// Line 825, Address: 0x1009dbc, Func Offset: 0x1ac
	// Line 828, Address: 0x1009dc4, Func Offset: 0x1b4
	// Line 829, Address: 0x1009dd8, Func Offset: 0x1c8
	// Line 830, Address: 0x1009dec, Func Offset: 0x1dc
	// Line 831, Address: 0x1009df4, Func Offset: 0x1e4
	// Line 834, Address: 0x1009dfc, Func Offset: 0x1ec
	// Line 835, Address: 0x1009e10, Func Offset: 0x200
	// Line 838, Address: 0x1009e18, Func Offset: 0x208
	// Line 839, Address: 0x1009e2c, Func Offset: 0x21c
	// Line 840, Address: 0x1009e40, Func Offset: 0x230
	// Line 845, Address: 0x1009e48, Func Offset: 0x238
	// Func End, Address: 0x1009e64, Func Offset: 0x254
}

// 
// Start address: 0x1009e70
void plwalk_l()
{
	short cal_speed;
	// Line 850, Address: 0x1009e70, Func Offset: 0
	// Line 853, Address: 0x1009e7c, Func Offset: 0xc
	// Line 854, Address: 0x1009e90, Func Offset: 0x20
	// Line 855, Address: 0x1009ea0, Func Offset: 0x30
	// Line 857, Address: 0x1009eb0, Func Offset: 0x40
	// Line 858, Address: 0x1009ec8, Func Offset: 0x58
	// Line 859, Address: 0x1009edc, Func Offset: 0x6c
	// Line 860, Address: 0x1009ef0, Func Offset: 0x80
	// Line 863, Address: 0x1009efc, Func Offset: 0x8c
	// Line 864, Address: 0x1009f24, Func Offset: 0xb4
	// Line 865, Address: 0x1009f38, Func Offset: 0xc8
	// Line 868, Address: 0x1009f84, Func Offset: 0x114
	// Line 869, Address: 0x1009f8c, Func Offset: 0x11c
	// Line 870, Address: 0x1009f94, Func Offset: 0x124
	// Line 872, Address: 0x1009f9c, Func Offset: 0x12c
	// Line 874, Address: 0x1009fd4, Func Offset: 0x164
	// Line 875, Address: 0x1009fdc, Func Offset: 0x16c
	// Line 876, Address: 0x1009ffc, Func Offset: 0x18c
	// Line 877, Address: 0x100a010, Func Offset: 0x1a0
	// Line 878, Address: 0x100a01c, Func Offset: 0x1ac
	// Line 880, Address: 0x100a030, Func Offset: 0x1c0
	// Line 881, Address: 0x100a044, Func Offset: 0x1d4
	// Line 882, Address: 0x100a050, Func Offset: 0x1e0
	// Line 884, Address: 0x100a05c, Func Offset: 0x1ec
	// Line 886, Address: 0x100a068, Func Offset: 0x1f8
	// Func End, Address: 0x100a07c, Func Offset: 0x20c
}

// 
// Start address: 0x100a080
void plwalk_r()
{
	short cal_speed;
	// Line 890, Address: 0x100a080, Func Offset: 0
	// Line 893, Address: 0x100a08c, Func Offset: 0xc
	// Line 894, Address: 0x100a0a0, Func Offset: 0x20
	// Line 895, Address: 0x100a0b0, Func Offset: 0x30
	// Line 897, Address: 0x100a0c0, Func Offset: 0x40
	// Line 898, Address: 0x100a0d8, Func Offset: 0x58
	// Line 899, Address: 0x100a0ec, Func Offset: 0x6c
	// Line 900, Address: 0x100a100, Func Offset: 0x80
	// Line 903, Address: 0x100a10c, Func Offset: 0x8c
	// Line 904, Address: 0x100a130, Func Offset: 0xb0
	// Line 905, Address: 0x100a144, Func Offset: 0xc4
	// Line 908, Address: 0x100a178, Func Offset: 0xf8
	// Line 909, Address: 0x100a180, Func Offset: 0x100
	// Line 910, Address: 0x100a188, Func Offset: 0x108
	// Line 912, Address: 0x100a190, Func Offset: 0x110
	// Line 913, Address: 0x100a1c8, Func Offset: 0x148
	// Line 914, Address: 0x100a1d0, Func Offset: 0x150
	// Line 915, Address: 0x100a1f0, Func Offset: 0x170
	// Line 916, Address: 0x100a204, Func Offset: 0x184
	// Line 917, Address: 0x100a210, Func Offset: 0x190
	// Line 919, Address: 0x100a224, Func Offset: 0x1a4
	// Line 920, Address: 0x100a238, Func Offset: 0x1b8
	// Line 921, Address: 0x100a244, Func Offset: 0x1c4
	// Line 923, Address: 0x100a250, Func Offset: 0x1d0
	// Line 925, Address: 0x100a25c, Func Offset: 0x1dc
	// Func End, Address: 0x100a270, Func Offset: 0x1f0
}

// 
// Start address: 0x100a270
void balllmove()
{
	short d0;
	short d1;
	short d2;
	int sin_data;
	int cos_data;
	short sin_tmp;
	short cos_tmp;
	// Line 933, Address: 0x100a270, Func Offset: 0
	// Line 943, Address: 0x100a28c, Func Offset: 0x1c
	// Line 944, Address: 0x100a2a0, Func Offset: 0x30
	// Line 945, Address: 0x100a2b4, Func Offset: 0x44
	// Line 946, Address: 0x100a2d4, Func Offset: 0x64
	// Line 949, Address: 0x100a2f4, Func Offset: 0x84
	// Line 950, Address: 0x100a308, Func Offset: 0x98
	// Line 951, Address: 0x100a314, Func Offset: 0xa4
	// Line 952, Address: 0x100a32c, Func Offset: 0xbc
	// Line 953, Address: 0x100a370, Func Offset: 0x100
	// Line 954, Address: 0x100a3b0, Func Offset: 0x140
	// Line 956, Address: 0x100a400, Func Offset: 0x190
	// Line 957, Address: 0x100a414, Func Offset: 0x1a4
	// Line 958, Address: 0x100a424, Func Offset: 0x1b4
	// Line 959, Address: 0x100a43c, Func Offset: 0x1cc
	// Line 960, Address: 0x100a460, Func Offset: 0x1f0
	// Line 961, Address: 0x100a468, Func Offset: 0x1f8
	// Line 964, Address: 0x100a48c, Func Offset: 0x21c
	// Line 965, Address: 0x100a494, Func Offset: 0x224
	// Line 967, Address: 0x100a4ac, Func Offset: 0x23c
	// Line 968, Address: 0x100a4c4, Func Offset: 0x254
	// Line 969, Address: 0x100a4d0, Func Offset: 0x260
	// Line 970, Address: 0x100a4f8, Func Offset: 0x288
	// Line 971, Address: 0x100a500, Func Offset: 0x290
	// Line 972, Address: 0x100a528, Func Offset: 0x2b8
	// Line 974, Address: 0x100a530, Func Offset: 0x2c0
	// Line 975, Address: 0x100a538, Func Offset: 0x2c8
	// Line 976, Address: 0x100a544, Func Offset: 0x2d4
	// Line 977, Address: 0x100a54c, Func Offset: 0x2dc
	// Line 978, Address: 0x100a574, Func Offset: 0x304
	// Line 981, Address: 0x100a57c, Func Offset: 0x30c
	// Line 982, Address: 0x100a58c, Func Offset: 0x31c
	// Line 984, Address: 0x100a59c, Func Offset: 0x32c
	// Line 986, Address: 0x100a5ac, Func Offset: 0x33c
	// Line 987, Address: 0x100a5f0, Func Offset: 0x380
	// Line 988, Address: 0x100a604, Func Offset: 0x394
	// Line 989, Address: 0x100a60c, Func Offset: 0x39c
	// Line 991, Address: 0x100a614, Func Offset: 0x3a4
	// Line 992, Address: 0x100a658, Func Offset: 0x3e8
	// Line 993, Address: 0x100a66c, Func Offset: 0x3fc
	// Line 999, Address: 0x100a674, Func Offset: 0x404
	// Line 1003, Address: 0x100a68c, Func Offset: 0x41c
	// Line 1004, Address: 0x100a698, Func Offset: 0x428
	// Line 1007, Address: 0x100a6c0, Func Offset: 0x450
	// Line 1008, Address: 0x100a6d4, Func Offset: 0x464
	// Line 1009, Address: 0x100a6e8, Func Offset: 0x478
	// Line 1010, Address: 0x100a6f4, Func Offset: 0x484
	// Line 1011, Address: 0x100a700, Func Offset: 0x490
	// Line 1012, Address: 0x100a714, Func Offset: 0x4a4
	// Line 1013, Address: 0x100a71c, Func Offset: 0x4ac
	// Line 1014, Address: 0x100a728, Func Offset: 0x4b8
	// Line 1015, Address: 0x100a734, Func Offset: 0x4c4
	// Line 1017, Address: 0x100a748, Func Offset: 0x4d8
	// Line 1020, Address: 0x100a754, Func Offset: 0x4e4
	// Line 1021, Address: 0x100a770, Func Offset: 0x500
	// Line 1022, Address: 0x100a77c, Func Offset: 0x50c
	// Line 1024, Address: 0x100a788, Func Offset: 0x518
	// Line 1025, Address: 0x100a79c, Func Offset: 0x52c
	// Line 1026, Address: 0x100a7a0, Func Offset: 0x530
	// Line 1027, Address: 0x100a7b0, Func Offset: 0x540
	// Line 1028, Address: 0x100a7c4, Func Offset: 0x554
	// Line 1029, Address: 0x100a7c8, Func Offset: 0x558
	// Line 1030, Address: 0x100a7d8, Func Offset: 0x568
	// Line 1031, Address: 0x100a7e8, Func Offset: 0x578
	// Line 1033, Address: 0x100a7f8, Func Offset: 0x588
	// Line 1034, Address: 0x100a800, Func Offset: 0x590
	// Func End, Address: 0x100a824, Func Offset: 0x5b4
}

// 
// Start address: 0x100a830
void ballwalk_l()
{
	short cal_speed;
	// Line 1038, Address: 0x100a830, Func Offset: 0
	// Line 1041, Address: 0x100a838, Func Offset: 0x8
	// Line 1043, Address: 0x100a858, Func Offset: 0x28
	// Line 1044, Address: 0x100a86c, Func Offset: 0x3c
	// Line 1045, Address: 0x100a878, Func Offset: 0x48
	// Line 1047, Address: 0x100a880, Func Offset: 0x50
	// Line 1048, Address: 0x100a8c4, Func Offset: 0x94
	// Line 1049, Address: 0x100a8e0, Func Offset: 0xb0
	// Line 1051, Address: 0x100a8e8, Func Offset: 0xb8
	// Func End, Address: 0x100a8f8, Func Offset: 0xc8
}

// 
// Start address: 0x100a900
void ballwalk_r()
{
	short cal_speed;
	// Line 1054, Address: 0x100a900, Func Offset: 0
	// Line 1057, Address: 0x100a908, Func Offset: 0x8
	// Line 1059, Address: 0x100a928, Func Offset: 0x28
	// Line 1060, Address: 0x100a93c, Func Offset: 0x3c
	// Line 1061, Address: 0x100a948, Func Offset: 0x48
	// Line 1063, Address: 0x100a950, Func Offset: 0x50
	// Line 1064, Address: 0x100a994, Func Offset: 0x94
	// Line 1065, Address: 0x100a9b0, Func Offset: 0xb0
	// Line 1067, Address: 0x100a9b8, Func Offset: 0xb8
	// Func End, Address: 0x100a9c8, Func Offset: 0xc8
}

// 
// Start address: 0x100a9d0
void jumpmove()
{
	short cal_speed;
	short cmp_speed;
	// Line 1071, Address: 0x100a9d0, Func Offset: 0
	// Line 1079, Address: 0x100a9dc, Func Offset: 0xc
	// Line 1080, Address: 0x100a9ec, Func Offset: 0x1c
	// Line 1082, Address: 0x100aa1c, Func Offset: 0x4c
	// Line 1083, Address: 0x100aa54, Func Offset: 0x84
	// Line 1085, Address: 0x100aa74, Func Offset: 0xa4
	// Line 1089, Address: 0x100aa7c, Func Offset: 0xac
	// Line 1090, Address: 0x100aa8c, Func Offset: 0xbc
	// Line 1091, Address: 0x100aaa4, Func Offset: 0xd4
	// Line 1092, Address: 0x100aab8, Func Offset: 0xe8
	// Line 1093, Address: 0x100aae8, Func Offset: 0x118
	// Line 1094, Address: 0x100ab0c, Func Offset: 0x13c
	// Line 1097, Address: 0x100ab30, Func Offset: 0x160
	// Line 1098, Address: 0x100ab48, Func Offset: 0x178
	// Line 1099, Address: 0x100ab5c, Func Offset: 0x18c
	// Line 1100, Address: 0x100ab8c, Func Offset: 0x1bc
	// Line 1104, Address: 0x100abc0, Func Offset: 0x1f0
	// Line 1106, Address: 0x100abc8, Func Offset: 0x1f8
	// Line 1107, Address: 0x100ac00, Func Offset: 0x230
	// Line 1108, Address: 0x100ac30, Func Offset: 0x260
	// Line 1109, Address: 0x100ac50, Func Offset: 0x280
	// Line 1110, Address: 0x100ac60, Func Offset: 0x290
	// Line 1111, Address: 0x100ac88, Func Offset: 0x2b8
	// Line 1113, Address: 0x100ac98, Func Offset: 0x2c8
	// Line 1114, Address: 0x100acd4, Func Offset: 0x304
	// Line 1115, Address: 0x100ace8, Func Offset: 0x318
	// Line 1117, Address: 0x100acf0, Func Offset: 0x320
	// Line 1118, Address: 0x100ad2c, Func Offset: 0x35c
	// Line 1120, Address: 0x100ad40, Func Offset: 0x370
	// Line 1121, Address: 0x100ad48, Func Offset: 0x378
	// Func End, Address: 0x100ad5c, Func Offset: 0x38c
}

// 
// Start address: 0x100ad60
void hedcolchk()
{
	short tmp_d0;
	short tmp_d1;
	short tmp_d3;
	unsigned char cal_direc;
	// Line 1126, Address: 0x100ad60, Func Offset: 0
	// Line 1130, Address: 0x100ad6c, Func Offset: 0xc
	// Line 1131, Address: 0x100ad8c, Func Offset: 0x2c
	// Line 1132, Address: 0x100ad98, Func Offset: 0x38
	// Line 1133, Address: 0x100adc4, Func Offset: 0x64
	// Line 1134, Address: 0x100adec, Func Offset: 0x8c
	// Line 1137, Address: 0x100adf8, Func Offset: 0x98
	// Func End, Address: 0x100ae0c, Func Offset: 0xac
}

// 
// Start address: 0x100ae10
void limitchk()
{
	short cal_limit_l;
	short cal_limit_r;
	short position_wk;
	int cal_position;
	int cal_speed;
	// Line 1142, Address: 0x100ae10, Func Offset: 0
	// Line 1146, Address: 0x100ae2c, Func Offset: 0x1c
	// Line 1147, Address: 0x100ae34, Func Offset: 0x24
	// Line 1148, Address: 0x100ae44, Func Offset: 0x34
	// Line 1149, Address: 0x100ae6c, Func Offset: 0x5c
	// Line 1150, Address: 0x100ae70, Func Offset: 0x60
	// Line 1151, Address: 0x100ae84, Func Offset: 0x74
	// Line 1152, Address: 0x100aea8, Func Offset: 0x98
	// Line 1153, Address: 0x100aecc, Func Offset: 0xbc
	// Line 1154, Address: 0x100aeec, Func Offset: 0xdc
	// Line 1156, Address: 0x100af08, Func Offset: 0xf8
	// Line 1157, Address: 0x100af10, Func Offset: 0x100
	// Line 1159, Address: 0x100af38, Func Offset: 0x128
	// Line 1161, Address: 0x100af54, Func Offset: 0x144
	// Line 1162, Address: 0x100af5c, Func Offset: 0x14c
	// Line 1165, Address: 0x100af84, Func Offset: 0x174
	// Line 1167, Address: 0x100afb4, Func Offset: 0x1a4
	// Line 1168, Address: 0x100afe8, Func Offset: 0x1d8
	// Line 1169, Address: 0x100aff4, Func Offset: 0x1e4
	// Func End, Address: 0x100b018, Func Offset: 0x208
}

// 
// Start address: 0x100b020
void ballchk()
{
	// Line 1174, Address: 0x100b020, Func Offset: 0
	// Line 1175, Address: 0x100b028, Func Offset: 0x8
	// Line 1177, Address: 0x100b03c, Func Offset: 0x1c
	// Line 1178, Address: 0x100b074, Func Offset: 0x54
	// Line 1179, Address: 0x100b0ac, Func Offset: 0x8c
	// Line 1180, Address: 0x100b0b4, Func Offset: 0x94
	// Func End, Address: 0x100b0c4, Func Offset: 0xa4
}

// 
// Start address: 0x100b0d0
void ballset()
{
	// Line 1184, Address: 0x100b0d0, Func Offset: 0
	// Line 1186, Address: 0x100b0e8, Func Offset: 0x18
	// Line 1187, Address: 0x100b0fc, Func Offset: 0x2c
	// Line 1188, Address: 0x100b110, Func Offset: 0x40
	// Line 1189, Address: 0x100b11c, Func Offset: 0x4c
	// Line 1190, Address: 0x100b128, Func Offset: 0x58
	// Line 1191, Address: 0x100b13c, Func Offset: 0x6c
	// Line 1193, Address: 0x100b144, Func Offset: 0x74
	// Line 1194, Address: 0x100b150, Func Offset: 0x80
	// Line 1195, Address: 0x100b15c, Func Offset: 0x8c
	// Line 1199, Address: 0x100b170, Func Offset: 0xa0
	// Line 1200, Address: 0x100b17c, Func Offset: 0xac
	// Line 1201, Address: 0x100b1b0, Func Offset: 0xe0
	// Line 1202, Address: 0x100b1bc, Func Offset: 0xec
	// Func End, Address: 0x100b1c4, Func Offset: 0xf4
}

// 
// Start address: 0x100b1d0
unsigned char jumpchk()
{
	char cal_char;
	unsigned char cal_direc;
	unsigned char ret_flag;
	int cal_jump;
	int sin_data;
	int cos_data;
	short sin_tmp;
	short cos_tmp;
	// Line 1207, Address: 0x100b1d0, Func Offset: 0
	// Line 1213, Address: 0x100b1e4, Func Offset: 0x14
	// Line 1214, Address: 0x100b1e8, Func Offset: 0x18
	// Line 1215, Address: 0x100b1ec, Func Offset: 0x1c
	// Line 1217, Address: 0x100b1f0, Func Offset: 0x20
	// Line 1218, Address: 0x100b210, Func Offset: 0x40
	// Line 1220, Address: 0x100b24c, Func Offset: 0x7c
	// Line 1221, Address: 0x100b270, Func Offset: 0xa0
	// Line 1224, Address: 0x100b2a4, Func Offset: 0xd4
	// Line 1225, Address: 0x100b2c0, Func Offset: 0xf0
	// Line 1226, Address: 0x100b2c8, Func Offset: 0xf8
	// Line 1227, Address: 0x100b2fc, Func Offset: 0x12c
	// Line 1228, Address: 0x100b304, Func Offset: 0x134
	// Line 1229, Address: 0x100b324, Func Offset: 0x154
	// Line 1232, Address: 0x100b340, Func Offset: 0x170
	// Line 1233, Address: 0x100b354, Func Offset: 0x184
	// Line 1234, Address: 0x100b360, Func Offset: 0x190
	// Line 1236, Address: 0x100b36c, Func Offset: 0x19c
	// Line 1237, Address: 0x100b374, Func Offset: 0x1a4
	// Line 1238, Address: 0x100b378, Func Offset: 0x1a8
	// Line 1239, Address: 0x100b394, Func Offset: 0x1c4
	// Line 1240, Address: 0x100b39c, Func Offset: 0x1cc
	// Line 1241, Address: 0x100b3a0, Func Offset: 0x1d0
	// Line 1242, Address: 0x100b3bc, Func Offset: 0x1ec
	// Line 1243, Address: 0x100b3d0, Func Offset: 0x200
	// Line 1244, Address: 0x100b3e4, Func Offset: 0x214
	// Line 1246, Address: 0x100b3ec, Func Offset: 0x21c
	// Line 1247, Address: 0x100b3f8, Func Offset: 0x228
	// Line 1249, Address: 0x100b400, Func Offset: 0x230
	// Line 1250, Address: 0x100b408, Func Offset: 0x238
	// Line 1252, Address: 0x100b414, Func Offset: 0x244
	// Line 1253, Address: 0x100b42c, Func Offset: 0x25c
	// Line 1254, Address: 0x100b440, Func Offset: 0x270
	// Line 1256, Address: 0x100b44c, Func Offset: 0x27c
	// Line 1257, Address: 0x100b460, Func Offset: 0x290
	// Line 1258, Address: 0x100b46c, Func Offset: 0x29c
	// Line 1259, Address: 0x100b478, Func Offset: 0x2a8
	// Line 1260, Address: 0x100b48c, Func Offset: 0x2bc
	// Line 1261, Address: 0x100b494, Func Offset: 0x2c4
	// Line 1262, Address: 0x100b4a0, Func Offset: 0x2d0
	// Line 1263, Address: 0x100b4ac, Func Offset: 0x2dc
	// Line 1265, Address: 0x100b4c0, Func Offset: 0x2f0
	// Line 1266, Address: 0x100b4d4, Func Offset: 0x304
	// Line 1267, Address: 0x100b4e0, Func Offset: 0x310
	// Line 1268, Address: 0x100b4e4, Func Offset: 0x314
	// Func End, Address: 0x100b500, Func Offset: 0x330
}

// 
// Start address: 0x100b500
void jumpchk2()
{
	short cal_speed;
	// Line 1271, Address: 0x100b500, Func Offset: 0
	// Line 1274, Address: 0x100b508, Func Offset: 0x8
	// Line 1275, Address: 0x100b51c, Func Offset: 0x1c
	// Line 1276, Address: 0x100b528, Func Offset: 0x28
	// Line 1277, Address: 0x100b54c, Func Offset: 0x4c
	// Line 1278, Address: 0x100b570, Func Offset: 0x70
	// Line 1279, Address: 0x100b588, Func Offset: 0x88
	// Line 1280, Address: 0x100b590, Func Offset: 0x90
	// Line 1283, Address: 0x100b598, Func Offset: 0x98
	// Line 1285, Address: 0x100b5a0, Func Offset: 0xa0
	// Line 1287, Address: 0x100b5c8, Func Offset: 0xc8
	// Func End, Address: 0x100b5d8, Func Offset: 0xd8
}

// 
// Start address: 0x100b5e0
void keispd()
{
	unsigned char cal_direc;
	int sin_data;
	short sin_tmp;
	short cos_tmp;
	// Line 1292, Address: 0x100b5e0, Func Offset: 0
	// Line 1297, Address: 0x100b5f0, Func Offset: 0x10
	// Line 1298, Address: 0x100b604, Func Offset: 0x24
	// Line 1299, Address: 0x100b620, Func Offset: 0x40
	// Line 1300, Address: 0x100b630, Func Offset: 0x50
	// Line 1302, Address: 0x100b63c, Func Offset: 0x5c
	// Line 1303, Address: 0x100b658, Func Offset: 0x78
	// Line 1305, Address: 0x100b664, Func Offset: 0x84
	// Line 1306, Address: 0x100b668, Func Offset: 0x88
	// Line 1307, Address: 0x100b66c, Func Offset: 0x8c
	// Line 1308, Address: 0x100b684, Func Offset: 0xa4
	// Line 1309, Address: 0x100b69c, Func Offset: 0xbc
	// Line 1310, Address: 0x100b6c0, Func Offset: 0xe0
	// Line 1311, Address: 0x100b6c8, Func Offset: 0xe8
	// Line 1313, Address: 0x100b6e4, Func Offset: 0x104
	// Func End, Address: 0x100b6fc, Func Offset: 0x11c
}

// 
// Start address: 0x100b700
void keispd2()
{
	unsigned char cal_direc;
	int sin_data;
	short sin_tmp;
	short cos_tmp;
	// Line 1316, Address: 0x100b700, Func Offset: 0
	// Line 1321, Address: 0x100b710, Func Offset: 0x10
	// Line 1322, Address: 0x100b724, Func Offset: 0x24
	// Line 1323, Address: 0x100b740, Func Offset: 0x40
	// Line 1324, Address: 0x100b750, Func Offset: 0x50
	// Line 1326, Address: 0x100b75c, Func Offset: 0x5c
	// Line 1327, Address: 0x100b778, Func Offset: 0x78
	// Line 1329, Address: 0x100b784, Func Offset: 0x84
	// Line 1330, Address: 0x100b790, Func Offset: 0x90
	// Line 1331, Address: 0x100b794, Func Offset: 0x94
	// Line 1332, Address: 0x100b7ac, Func Offset: 0xac
	// Line 1333, Address: 0x100b7d0, Func Offset: 0xd0
	// Line 1334, Address: 0x100b7ec, Func Offset: 0xec
	// Line 1335, Address: 0x100b7f4, Func Offset: 0xf4
	// Line 1336, Address: 0x100b818, Func Offset: 0x118
	// Line 1338, Address: 0x100b834, Func Offset: 0x134
	// Func End, Address: 0x100b84c, Func Offset: 0x14c
}

// 
// Start address: 0x100b850
void fallchk()
{
	// Line 1344, Address: 0x100b850, Func Offset: 0
	// Line 1345, Address: 0x100b864, Func Offset: 0x14
	// Line 1347, Address: 0x100b878, Func Offset: 0x28
	// Line 1348, Address: 0x100b898, Func Offset: 0x48
	// Line 1349, Address: 0x100b8d0, Func Offset: 0x80
	// Line 1350, Address: 0x100b8d8, Func Offset: 0x88
	// Line 1351, Address: 0x100b8e0, Func Offset: 0x90
	// Line 1352, Address: 0x100b8f4, Func Offset: 0xa4
	// Line 1353, Address: 0x100b900, Func Offset: 0xb0
	// Line 1354, Address: 0x100b908, Func Offset: 0xb8
	// Line 1356, Address: 0x100b91c, Func Offset: 0xcc
	// Func End, Address: 0x100b924, Func Offset: 0xd4
}

// 
// Start address: 0x100b930
void direcchg()
{
	char cal_direc;
	// Line 1361, Address: 0x100b930, Func Offset: 0
	// Line 1364, Address: 0x100b938, Func Offset: 0x8
	// Line 1365, Address: 0x100b950, Func Offset: 0x20
	// Line 1366, Address: 0x100b970, Func Offset: 0x40
	// Line 1367, Address: 0x100b980, Func Offset: 0x50
	// Line 1368, Address: 0x100b9a8, Func Offset: 0x78
	// Line 1369, Address: 0x100b9b0, Func Offset: 0x80
	// Line 1371, Address: 0x100b9d8, Func Offset: 0xa8
	// Line 1372, Address: 0x100b9e0, Func Offset: 0xb0
	// Func End, Address: 0x100b9f0, Func Offset: 0xc0
}

// 
// Start address: 0x100b9f0
void jumpcolchk()
{
	short chk_d0;
	short chk_d1;
	short tmp_d3;
	char chk_d2;
	char chk_d3;
	unsigned char cal_direc;
	// Line 1380, Address: 0x100b9f0, Func Offset: 0
	// Line 1385, Address: 0x100ba04, Func Offset: 0x14
	// Line 1386, Address: 0x100ba24, Func Offset: 0x34
	// Line 1387, Address: 0x100ba2c, Func Offset: 0x3c
	// Line 1388, Address: 0x100ba34, Func Offset: 0x44
	// Line 1389, Address: 0x100ba3c, Func Offset: 0x4c
	// Line 1390, Address: 0x100ba44, Func Offset: 0x54
	// Line 1391, Address: 0x100ba4c, Func Offset: 0x5c
	// Line 1394, Address: 0x100ba84, Func Offset: 0x94
	// Line 1395, Address: 0x100ba98, Func Offset: 0xa8
	// Line 1396, Address: 0x100baac, Func Offset: 0xbc
	// Line 1397, Address: 0x100bac4, Func Offset: 0xd4
	// Line 1399, Address: 0x100bacc, Func Offset: 0xdc
	// Line 1400, Address: 0x100bae0, Func Offset: 0xf0
	// Line 1401, Address: 0x100baf4, Func Offset: 0x104
	// Line 1402, Address: 0x100bb0c, Func Offset: 0x11c
	// Line 1404, Address: 0x100bb14, Func Offset: 0x124
	// Line 1405, Address: 0x100bb30, Func Offset: 0x140
	// Line 1406, Address: 0x100bb44, Func Offset: 0x154
	// Line 1407, Address: 0x100bb54, Func Offset: 0x164
	// Line 1408, Address: 0x100bb68, Func Offset: 0x178
	// Line 1409, Address: 0x100bb90, Func Offset: 0x1a0
	// Line 1411, Address: 0x100bbe0, Func Offset: 0x1f0
	// Line 1412, Address: 0x100bbf8, Func Offset: 0x208
	// Line 1413, Address: 0x100bc00, Func Offset: 0x210
	// Line 1414, Address: 0x100bc08, Func Offset: 0x218
	// Line 1415, Address: 0x100bc10, Func Offset: 0x220
	// Line 1417, Address: 0x100bc28, Func Offset: 0x238
	// Line 1418, Address: 0x100bc30, Func Offset: 0x240
	// Line 1419, Address: 0x100bc58, Func Offset: 0x268
	// Line 1420, Address: 0x100bc60, Func Offset: 0x270
	// Line 1422, Address: 0x100bc78, Func Offset: 0x288
	// Line 1423, Address: 0x100bc80, Func Offset: 0x290
	// Line 1424, Address: 0x100bc90, Func Offset: 0x2a0
	// Line 1426, Address: 0x100bc98, Func Offset: 0x2a8
	// Line 1429, Address: 0x100bcc0, Func Offset: 0x2d0
	// Line 1430, Address: 0x100bcd0, Func Offset: 0x2e0
	// Line 1431, Address: 0x100bd04, Func Offset: 0x314
	// Line 1435, Address: 0x100bd0c, Func Offset: 0x31c
	// Line 1436, Address: 0x100bd20, Func Offset: 0x330
	// Line 1437, Address: 0x100bd34, Func Offset: 0x344
	// Line 1438, Address: 0x100bd4c, Func Offset: 0x35c
	// Line 1439, Address: 0x100bd54, Func Offset: 0x364
	// Line 1440, Address: 0x100bd64, Func Offset: 0x374
	// Line 1442, Address: 0x100bd6c, Func Offset: 0x37c
	// Line 1443, Address: 0x100bd88, Func Offset: 0x398
	// Line 1444, Address: 0x100bd9c, Func Offset: 0x3ac
	// Line 1445, Address: 0x100bdb4, Func Offset: 0x3c4
	// Line 1446, Address: 0x100bdd4, Func Offset: 0x3e4
	// Line 1449, Address: 0x100bddc, Func Offset: 0x3ec
	// Line 1450, Address: 0x100bdf4, Func Offset: 0x404
	// Line 1451, Address: 0x100be10, Func Offset: 0x420
	// Line 1452, Address: 0x100be24, Func Offset: 0x434
	// Line 1453, Address: 0x100be38, Func Offset: 0x448
	// Line 1454, Address: 0x100be50, Func Offset: 0x460
	// Line 1455, Address: 0x100be58, Func Offset: 0x468
	// Line 1456, Address: 0x100be60, Func Offset: 0x470
	// Line 1457, Address: 0x100be68, Func Offset: 0x478
	// Line 1458, Address: 0x100be70, Func Offset: 0x480
	// Line 1459, Address: 0x100be80, Func Offset: 0x490
	// Line 1463, Address: 0x100be88, Func Offset: 0x498
	// Line 1464, Address: 0x100be9c, Func Offset: 0x4ac
	// Line 1465, Address: 0x100beb0, Func Offset: 0x4c0
	// Line 1466, Address: 0x100bec8, Func Offset: 0x4d8
	// Line 1468, Address: 0x100bed0, Func Offset: 0x4e0
	// Line 1469, Address: 0x100bee4, Func Offset: 0x4f4
	// Line 1470, Address: 0x100bef8, Func Offset: 0x508
	// Line 1471, Address: 0x100bf10, Func Offset: 0x520
	// Line 1474, Address: 0x100bf18, Func Offset: 0x528
	// Line 1475, Address: 0x100bf34, Func Offset: 0x544
	// Line 1476, Address: 0x100bf48, Func Offset: 0x558
	// Line 1477, Address: 0x100bf5c, Func Offset: 0x56c
	// Line 1478, Address: 0x100bf74, Func Offset: 0x584
	// Line 1479, Address: 0x100bf8c, Func Offset: 0x59c
	// Line 1480, Address: 0x100bf94, Func Offset: 0x5a4
	// Line 1482, Address: 0x100bf9c, Func Offset: 0x5ac
	// Line 1483, Address: 0x100bfa4, Func Offset: 0x5b4
	// Line 1484, Address: 0x100bfac, Func Offset: 0x5bc
	// Line 1485, Address: 0x100bfbc, Func Offset: 0x5cc
	// Line 1486, Address: 0x100bff0, Func Offset: 0x600
	// Line 1490, Address: 0x100bff8, Func Offset: 0x608
	// Line 1491, Address: 0x100c00c, Func Offset: 0x61c
	// Line 1492, Address: 0x100c020, Func Offset: 0x630
	// Line 1493, Address: 0x100c038, Func Offset: 0x648
	// Line 1494, Address: 0x100c040, Func Offset: 0x650
	// Line 1495, Address: 0x100c050, Func Offset: 0x660
	// Line 1497, Address: 0x100c058, Func Offset: 0x668
	// Line 1498, Address: 0x100c074, Func Offset: 0x684
	// Line 1499, Address: 0x100c088, Func Offset: 0x698
	// Line 1500, Address: 0x100c0a0, Func Offset: 0x6b0
	// Line 1501, Address: 0x100c0c0, Func Offset: 0x6d0
	// Line 1504, Address: 0x100c0c8, Func Offset: 0x6d8
	// Line 1505, Address: 0x100c0e0, Func Offset: 0x6f0
	// Line 1506, Address: 0x100c0fc, Func Offset: 0x70c
	// Line 1507, Address: 0x100c110, Func Offset: 0x720
	// Line 1508, Address: 0x100c124, Func Offset: 0x734
	// Line 1509, Address: 0x100c13c, Func Offset: 0x74c
	// Line 1510, Address: 0x100c144, Func Offset: 0x754
	// Line 1511, Address: 0x100c14c, Func Offset: 0x75c
	// Line 1512, Address: 0x100c154, Func Offset: 0x764
	// Line 1513, Address: 0x100c15c, Func Offset: 0x76c
	// Line 1519, Address: 0x100c16c, Func Offset: 0x77c
	// Func End, Address: 0x100c188, Func Offset: 0x798
}

// 
// Start address: 0x100c190
void jumpcolsub()
{
	// Line 1522, Address: 0x100c190, Func Offset: 0
	// Line 1525, Address: 0x100c198, Func Offset: 0x8
	// Line 1526, Address: 0x100c1ac, Func Offset: 0x1c
	// Line 1527, Address: 0x100c1c4, Func Offset: 0x34
	// Line 1528, Address: 0x100c1d8, Func Offset: 0x48
	// Line 1529, Address: 0x100c1ec, Func Offset: 0x5c
	// Line 1530, Address: 0x100c1f8, Func Offset: 0x68
	// Line 1531, Address: 0x100c204, Func Offset: 0x74
	// Line 1532, Address: 0x100c218, Func Offset: 0x88
	// Line 1533, Address: 0x100c220, Func Offset: 0x90
	// Line 1534, Address: 0x100c22c, Func Offset: 0x9c
	// Line 1535, Address: 0x100c238, Func Offset: 0xa8
	// Line 1537, Address: 0x100c24c, Func Offset: 0xbc
	// Line 1538, Address: 0x100c254, Func Offset: 0xc4
	// Line 1539, Address: 0x100c260, Func Offset: 0xd0
	// Line 1542, Address: 0x100c288, Func Offset: 0xf8
	// Line 1543, Address: 0x100c290, Func Offset: 0x100
	// Line 1544, Address: 0x100c298, Func Offset: 0x108
	// Func End, Address: 0x100c2a8, Func Offset: 0x118
}

// 
// Start address: 0x100c2b0
void jumpcolsub0()
{
	// Line 1548, Address: 0x100c2b0, Func Offset: 0
	// Line 1549, Address: 0x100c2c4, Func Offset: 0x14
	// Line 1550, Address: 0x100c2cc, Func Offset: 0x1c
	// Line 1551, Address: 0x100c2d4, Func Offset: 0x24
	// Func End, Address: 0x100c2dc, Func Offset: 0x2c
}

// 
// Start address: 0x100c2e0
void play00damage()
{
	// Line 1555, Address: 0x100c2e0, Func Offset: 0
	// Line 1556, Address: 0x100c2e8, Func Offset: 0x8
	// Line 1557, Address: 0x100c2f8, Func Offset: 0x18
	// Line 1558, Address: 0x100c30c, Func Offset: 0x2c
	// Line 1559, Address: 0x100c338, Func Offset: 0x58
	// Line 1560, Address: 0x100c340, Func Offset: 0x60
	// Line 1561, Address: 0x100c348, Func Offset: 0x68
	// Line 1562, Address: 0x100c350, Func Offset: 0x70
	// Line 1563, Address: 0x100c358, Func Offset: 0x78
	// Line 1564, Address: 0x100c360, Func Offset: 0x80
	// Line 1565, Address: 0x100c370, Func Offset: 0x90
	// Func End, Address: 0x100c380, Func Offset: 0xa0
}

// 
// Start address: 0x100c380
void play00damage_sub()
{
	// Line 1568, Address: 0x100c380, Func Offset: 0
	// Line 1569, Address: 0x100c388, Func Offset: 0x8
	// Line 1570, Address: 0x100c3b8, Func Offset: 0x38
	// Line 1571, Address: 0x100c3c8, Func Offset: 0x48
	// Line 1573, Address: 0x100c3d0, Func Offset: 0x50
	// Line 1574, Address: 0x100c3d8, Func Offset: 0x58
	// Line 1575, Address: 0x100c3f0, Func Offset: 0x70
	// Line 1576, Address: 0x100c418, Func Offset: 0x98
	// Line 1577, Address: 0x100c420, Func Offset: 0xa0
	// Line 1578, Address: 0x100c434, Func Offset: 0xb4
	// Line 1579, Address: 0x100c440, Func Offset: 0xc0
	// Func End, Address: 0x100c450, Func Offset: 0xd0
}

// 
// Start address: 0x100c450
void play00die()
{
	// Line 1583, Address: 0x100c450, Func Offset: 0
	// Line 1584, Address: 0x100c458, Func Offset: 0x8
	// Line 1585, Address: 0x100c460, Func Offset: 0x10
	// Line 1586, Address: 0x100c470, Func Offset: 0x20
	// Line 1587, Address: 0x100c478, Func Offset: 0x28
	// Line 1588, Address: 0x100c480, Func Offset: 0x30
	// Line 1589, Address: 0x100c490, Func Offset: 0x40
	// Func End, Address: 0x100c4a0, Func Offset: 0x50
}

// 
// Start address: 0x100c4a0
void play00die_sub()
{
	_anon2* new_actwk;
	// Line 1592, Address: 0x100c4a0, Func Offset: 0
	// Line 1595, Address: 0x100c4a8, Func Offset: 0x8
	// Line 1596, Address: 0x100c4d8, Func Offset: 0x38
	// Line 1597, Address: 0x100c4e4, Func Offset: 0x44
	// Line 1598, Address: 0x100c4f8, Func Offset: 0x58
	// Line 1599, Address: 0x100c500, Func Offset: 0x60
	// Line 1600, Address: 0x100c514, Func Offset: 0x74
	// Line 1602, Address: 0x100c54c, Func Offset: 0xac
	// Line 1603, Address: 0x100c57c, Func Offset: 0xdc
	// Line 1604, Address: 0x100c588, Func Offset: 0xe8
	// Line 1605, Address: 0x100c594, Func Offset: 0xf4
	// Line 1606, Address: 0x100c5a0, Func Offset: 0x100
	// Line 1607, Address: 0x100c5b4, Func Offset: 0x114
	// Line 1608, Address: 0x100c5bc, Func Offset: 0x11c
	// Line 1610, Address: 0x100c5c4, Func Offset: 0x124
	// Line 1611, Address: 0x100c5d0, Func Offset: 0x130
	// Func End, Address: 0x100c5e0, Func Offset: 0x140
}

// 
// Start address: 0x100c5e0
void play00erase()
{
	// Line 1615, Address: 0x100c5e0, Func Offset: 0
	// Line 1616, Address: 0x100c5e8, Func Offset: 0x8
	// Line 1617, Address: 0x100c5fc, Func Offset: 0x1c
	// Line 1618, Address: 0x100c610, Func Offset: 0x30
	// Line 1619, Address: 0x100c624, Func Offset: 0x44
	// Line 1624, Address: 0x100c630, Func Offset: 0x50
	// Line 1625, Address: 0x100c638, Func Offset: 0x58
	// Line 1626, Address: 0x100c664, Func Offset: 0x84
	// Line 1629, Address: 0x100c6a4, Func Offset: 0xc4
	// Line 1630, Address: 0x100c6b8, Func Offset: 0xd8
	// Line 1631, Address: 0x100c6d0, Func Offset: 0xf0
	// Line 1632, Address: 0x100c6f0, Func Offset: 0x110
	// Line 1633, Address: 0x100c6f8, Func Offset: 0x118
	// Line 1636, Address: 0x100c700, Func Offset: 0x120
	// Line 1638, Address: 0x100c70c, Func Offset: 0x12c
	// Func End, Address: 0x100c71c, Func Offset: 0x13c
}

// 
// Start address: 0x100c720
void loopchk()
{
	short index;
	unsigned char mapdata;
	// Line 1647, Address: 0x100c720, Func Offset: 0
	// Line 1651, Address: 0x100c730, Func Offset: 0x10
	// Line 1654, Address: 0x100c79c, Func Offset: 0x7c
	// Line 1656, Address: 0x100c7e4, Func Offset: 0xc4
	// Line 1657, Address: 0x100c82c, Func Offset: 0x10c
	// Line 1658, Address: 0x100c844, Func Offset: 0x124
	// Line 1659, Address: 0x100c87c, Func Offset: 0x15c
	// Line 1663, Address: 0x100c88c, Func Offset: 0x16c
	// Line 1666, Address: 0x100c8b4, Func Offset: 0x194
	// Line 1667, Address: 0x100c8e4, Func Offset: 0x1c4
	// Line 1668, Address: 0x100c8f8, Func Offset: 0x1d8
	// Line 1670, Address: 0x100c900, Func Offset: 0x1e0
	// Line 1672, Address: 0x100c918, Func Offset: 0x1f8
	// Line 1673, Address: 0x100c944, Func Offset: 0x224
	// Line 1674, Address: 0x100c95c, Func Offset: 0x23c
	// Line 1675, Address: 0x100c970, Func Offset: 0x250
	// Line 1679, Address: 0x100c978, Func Offset: 0x258
	// Line 1680, Address: 0x100c994, Func Offset: 0x274
	// Line 1681, Address: 0x100c9a8, Func Offset: 0x288
	// Line 1684, Address: 0x100c9b0, Func Offset: 0x290
	// Line 1685, Address: 0x100c9cc, Func Offset: 0x2ac
	// Line 1686, Address: 0x100c9e0, Func Offset: 0x2c0
	// Line 1689, Address: 0x100c9e8, Func Offset: 0x2c8
	// Line 1690, Address: 0x100ca00, Func Offset: 0x2e0
	// Line 1691, Address: 0x100ca34, Func Offset: 0x314
	// Line 1692, Address: 0x100ca48, Func Offset: 0x328
	// Line 1695, Address: 0x100ca50, Func Offset: 0x330
	// Line 1696, Address: 0x100ca6c, Func Offset: 0x34c
	// Line 1697, Address: 0x100ca80, Func Offset: 0x360
	// Func End, Address: 0x100ca98, Func Offset: 0x378
}

// 
// Start address: 0x100caa0
void st7_x()
{
	short y_position;
	// Line 1701, Address: 0x100caa0, Func Offset: 0
	// Line 1705, Address: 0x100caa8, Func Offset: 0x8
	// Line 1706, Address: 0x100cac0, Func Offset: 0x20
	// Line 1707, Address: 0x100cae4, Func Offset: 0x44
	// Line 1709, Address: 0x100cb04, Func Offset: 0x64
	// Line 1710, Address: 0x100cb34, Func Offset: 0x94
	// Line 1711, Address: 0x100cb5c, Func Offset: 0xbc
	// Line 1712, Address: 0x100cb64, Func Offset: 0xc4
	// Line 1713, Address: 0x100cb94, Func Offset: 0xf4
	// Line 1715, Address: 0x100cbbc, Func Offset: 0x11c
	// Func End, Address: 0x100cbcc, Func Offset: 0x12c
}

// 
// Start address: 0x100cbd0
void patchgmain()
{
	char pat_index;
	unsigned char* pat_pointer;
	// Line 1721, Address: 0x100cbd0, Func Offset: 0
	// Line 1725, Address: 0x100cbe0, Func Offset: 0x10
	// Line 1726, Address: 0x100cc08, Func Offset: 0x38
	// Line 1727, Address: 0x100cc18, Func Offset: 0x48
	// Line 1730, Address: 0x100cc2c, Func Offset: 0x5c
	// Line 1731, Address: 0x100cc44, Func Offset: 0x74
	// Line 1732, Address: 0x100cc60, Func Offset: 0x90
	// Line 1734, Address: 0x100cc88, Func Offset: 0xb8
	// Line 1735, Address: 0x100ccb8, Func Offset: 0xe8
	// Line 1736, Address: 0x100cce8, Func Offset: 0x118
	// Line 1737, Address: 0x100ccf4, Func Offset: 0x124
	// Line 1738, Address: 0x100cd00, Func Offset: 0x130
	// Func End, Address: 0x100cd18, Func Offset: 0x148
}

// 
// Start address: 0x100cd20
void patchgmain2(unsigned char* pat_pointer)
{
	unsigned char pat_no;
	// Line 1741, Address: 0x100cd20, Func Offset: 0
	// Line 1744, Address: 0x100cd2c, Func Offset: 0xc
	// Line 1745, Address: 0x100cd5c, Func Offset: 0x3c
	// Line 1746, Address: 0x100cd64, Func Offset: 0x44
	// Line 1747, Address: 0x100cd78, Func Offset: 0x58
	// Line 1750, Address: 0x100cd80, Func Offset: 0x60
	// Line 1752, Address: 0x100cdb0, Func Offset: 0x90
	// Line 1753, Address: 0x100cdbc, Func Offset: 0x9c
	// Line 1754, Address: 0x100cdcc, Func Offset: 0xac
	// Line 1756, Address: 0x100cdd4, Func Offset: 0xb4
	// Line 1758, Address: 0x100ce1c, Func Offset: 0xfc
	// Line 1760, Address: 0x100ce5c, Func Offset: 0x13c
	// Line 1762, Address: 0x100ce64, Func Offset: 0x144
	// Line 1768, Address: 0x100ce88, Func Offset: 0x168
	// Func End, Address: 0x100ce98, Func Offset: 0x178
}

// 
// Start address: 0x100cea0
void playrunchg(unsigned char pat_no)
{
	unsigned char direction;
	unsigned char cal_data;
	unsigned char chara_data;
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1772, Address: 0x100cea0, Func Offset: 0
	// Line 1777, Address: 0x100cec0, Func Offset: 0x20
	// Line 1778, Address: 0x100cef0, Func Offset: 0x50
	// Line 1779, Address: 0x100cf18, Func Offset: 0x78
	// Line 1781, Address: 0x100cf3c, Func Offset: 0x9c
	// Line 1782, Address: 0x100cf40, Func Offset: 0xa0
	// Line 1783, Address: 0x100cf4c, Func Offset: 0xac
	// Line 1784, Address: 0x100cf64, Func Offset: 0xc4
	// Line 1785, Address: 0x100cf84, Func Offset: 0xe4
	// Line 1786, Address: 0x100cfac, Func Offset: 0x10c
	// Line 1787, Address: 0x100cfb4, Func Offset: 0x114
	// Line 1789, Address: 0x100cfd4, Func Offset: 0x134
	// Line 1790, Address: 0x100cfe8, Func Offset: 0x148
	// Line 1791, Address: 0x100cff0, Func Offset: 0x150
	// Line 1792, Address: 0x100d004, Func Offset: 0x164
	// Line 1794, Address: 0x100d030, Func Offset: 0x190
	// Line 1796, Address: 0x100d06c, Func Offset: 0x1cc
	// Line 1797, Address: 0x100d084, Func Offset: 0x1e4
	// Line 1798, Address: 0x100d094, Func Offset: 0x1f4
	// Line 1799, Address: 0x100d09c, Func Offset: 0x1fc
	// Line 1800, Address: 0x100d0a4, Func Offset: 0x204
	// Line 1801, Address: 0x100d0ac, Func Offset: 0x20c
	// Line 1802, Address: 0x100d0b4, Func Offset: 0x214
	// Line 1803, Address: 0x100d0bc, Func Offset: 0x21c
	// Line 1804, Address: 0x100d0c4, Func Offset: 0x224
	// Line 1805, Address: 0x100d0e8, Func Offset: 0x248
	// Line 1807, Address: 0x100d10c, Func Offset: 0x26c
	// Line 1808, Address: 0x100d114, Func Offset: 0x274
	// Line 1812, Address: 0x100d140, Func Offset: 0x2a0
	// Line 1813, Address: 0x100d160, Func Offset: 0x2c0
	// Line 1814, Address: 0x100d174, Func Offset: 0x2d4
	// Line 1815, Address: 0x100d194, Func Offset: 0x2f4
	// Line 1816, Address: 0x100d1a0, Func Offset: 0x300
	// Line 1817, Address: 0x100d1ac, Func Offset: 0x30c
	// Line 1818, Address: 0x100d1d0, Func Offset: 0x330
	// Func End, Address: 0x100d1f4, Func Offset: 0x354
}

// 
// Start address: 0x100d200
void playrunchg2(unsigned char pat_no)
{
	unsigned char direction;
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1821, Address: 0x100d200, Func Offset: 0
	// Line 1826, Address: 0x100d218, Func Offset: 0x18
	// Line 1827, Address: 0x100d240, Func Offset: 0x40
	// Line 1828, Address: 0x100d27c, Func Offset: 0x7c
	// Line 1830, Address: 0x100d2a0, Func Offset: 0xa0
	// Line 1831, Address: 0x100d2b8, Func Offset: 0xb8
	// Line 1832, Address: 0x100d2c8, Func Offset: 0xc8
	// Line 1833, Address: 0x100d2dc, Func Offset: 0xdc
	// Line 1834, Address: 0x100d2f8, Func Offset: 0xf8
	// Line 1835, Address: 0x100d300, Func Offset: 0x100
	// Line 1836, Address: 0x100d308, Func Offset: 0x108
	// Line 1837, Address: 0x100d32c, Func Offset: 0x12c
	// Line 1841, Address: 0x100d334, Func Offset: 0x134
	// Line 1842, Address: 0x100d354, Func Offset: 0x154
	// Line 1843, Address: 0x100d368, Func Offset: 0x168
	// Line 1844, Address: 0x100d388, Func Offset: 0x188
	// Line 1845, Address: 0x100d394, Func Offset: 0x194
	// Line 1846, Address: 0x100d3a8, Func Offset: 0x1a8
	// Line 1847, Address: 0x100d3d0, Func Offset: 0x1d0
	// Line 1848, Address: 0x100d3dc, Func Offset: 0x1dc
	// Func End, Address: 0x100d3f8, Func Offset: 0x1f8
}

// 
// Start address: 0x100d400
void playrunchg3(unsigned char pat_no)
{
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1851, Address: 0x100d400, Func Offset: 0
	// Line 1855, Address: 0x100d414, Func Offset: 0x14
	// Line 1856, Address: 0x100d438, Func Offset: 0x38
	// Line 1857, Address: 0x100d474, Func Offset: 0x74
	// Line 1858, Address: 0x100d480, Func Offset: 0x80
	// Line 1859, Address: 0x100d494, Func Offset: 0x94
	// Line 1860, Address: 0x100d4a0, Func Offset: 0xa0
	// Line 1861, Address: 0x100d4ac, Func Offset: 0xac
	// Line 1862, Address: 0x100d4d0, Func Offset: 0xd0
	// Line 1863, Address: 0x100d4d8, Func Offset: 0xd8
	// Line 1864, Address: 0x100d4ec, Func Offset: 0xec
	// Line 1865, Address: 0x100d514, Func Offset: 0x114
	// Line 1866, Address: 0x100d520, Func Offset: 0x120
	// Func End, Address: 0x100d538, Func Offset: 0x138
}

// 
// Start address: 0x100d540
void playetc_chg()
{
	char pat_index;
	unsigned char* pat_pointer;
	// Line 1869, Address: 0x100d540, Func Offset: 0
	// Line 1873, Address: 0x100d550, Func Offset: 0x10
	// Line 1874, Address: 0x100d568, Func Offset: 0x28
	// Line 1876, Address: 0x100d584, Func Offset: 0x44
	// Line 1877, Address: 0x100d5a4, Func Offset: 0x64
	// Line 1878, Address: 0x100d5ac, Func Offset: 0x6c
	// Func End, Address: 0x100d5c4, Func Offset: 0x84
}

// 
// Start address: 0x100d5d0
void little_runchg()
{
	unsigned char direction;
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1882, Address: 0x100d5d0, Func Offset: 0
	// Line 1887, Address: 0x100d5e4, Func Offset: 0x14
	// Line 1888, Address: 0x100d5f0, Func Offset: 0x20
	// Line 1889, Address: 0x100d61c, Func Offset: 0x4c
	// Line 1891, Address: 0x100d624, Func Offset: 0x54
	// Line 1892, Address: 0x100d638, Func Offset: 0x68
	// Line 1893, Address: 0x100d660, Func Offset: 0x90
	// Line 1894, Address: 0x100d67c, Func Offset: 0xac
	// Line 1895, Address: 0x100d690, Func Offset: 0xc0
	// Line 1896, Address: 0x100d69c, Func Offset: 0xcc
	// Line 1897, Address: 0x100d6a8, Func Offset: 0xd8
	// Line 1898, Address: 0x100d6b4, Func Offset: 0xe4
	// Line 1901, Address: 0x100d6bc, Func Offset: 0xec
	// Line 1902, Address: 0x100d6f8, Func Offset: 0x128
	// Line 1903, Address: 0x100d71c, Func Offset: 0x14c
	// Line 1904, Address: 0x100d724, Func Offset: 0x154
	// Line 1905, Address: 0x100d744, Func Offset: 0x174
	// Line 1906, Address: 0x100d758, Func Offset: 0x188
	// Line 1907, Address: 0x100d778, Func Offset: 0x1a8
	// Line 1908, Address: 0x100d784, Func Offset: 0x1b4
	// Line 1909, Address: 0x100d790, Func Offset: 0x1c0
	// Func End, Address: 0x100d7ac, Func Offset: 0x1dc
}

// 
// Start address: 0x100d7b0
char little_patchg(char pat_index)
{
	char tbl[80];
	// Line 1913, Address: 0x100d7b0, Func Offset: 0
	// Line 1914, Address: 0x100d7b8, Func Offset: 0x8
	// Line 1926, Address: 0x100d7ec, Func Offset: 0x3c
	// Line 1927, Address: 0x100d81c, Func Offset: 0x6c
	// Line 1928, Address: 0x100d820, Func Offset: 0x70
	// Func End, Address: 0x100d82c, Func Offset: 0x7c
}

// 
// Start address: 0x100d830
void playwrt()
{
	// Line 1955, Address: 0x100d830, Func Offset: 0
	// Func End, Address: 0x100d838, Func Offset: 0x8
}

// 
// Start address: 0x100d840
unsigned char frip_spd(int* cal_jump, unsigned char* cal_direc)
{
	short cal_x;
	char ride_no;
	// Line 1961, Address: 0x100d840, Func Offset: 0
	// Line 1965, Address: 0x100d858, Func Offset: 0x18
	// Line 1966, Address: 0x100d868, Func Offset: 0x28
	// Line 1969, Address: 0x100d8a8, Func Offset: 0x68
	// Line 1970, Address: 0x100d8d0, Func Offset: 0x90
	// Line 1974, Address: 0x100d978, Func Offset: 0x138
	// Line 1976, Address: 0x100d9fc, Func Offset: 0x1bc
	// Line 1978, Address: 0x100da50, Func Offset: 0x210
	// Line 1979, Address: 0x100da8c, Func Offset: 0x24c
	// Line 1980, Address: 0x100da90, Func Offset: 0x250
	// Func End, Address: 0x100daa8, Func Offset: 0x268
}

