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
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef void(*type_2)();

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef short type_3[2];
typedef unsigned char* type_4[60];
typedef char type_5[4];
typedef unsigned char type_6[8];
typedef unsigned char type_7[7];
typedef unsigned char type_8[8];
typedef unsigned char type_9[8];
typedef short* type_10[3];
typedef unsigned char type_11[8];
typedef unsigned char type_12[2];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef unsigned char type_15[22];
typedef unsigned char type_16[6];
typedef unsigned char type_17[3];
typedef char type_18[80];
typedef unsigned char type_19[8];
typedef short type_20[3];
typedef unsigned char type_21[8];
typedef unsigned char type_22[8];
typedef unsigned char type_23[766];
typedef short type_24[3];
typedef short type_25[128];
typedef unsigned char type_26[7];
typedef char type_27[7];
typedef short type_28[9];
typedef unsigned char type_29[8];
typedef short type_30[2];
typedef _anon1 type_31[128];
typedef _anon0* type_32[0];
typedef unsigned char type_33[6];
typedef unsigned char type_34[6];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
	};
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
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

struct _anon2
{
	short plring;
	int plscore;
	_anon6 stageno;
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
	_anon6 demoflag;
	_anon6 hintposi;
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
_anon1 actwk[128];
unsigned char pl_suu;
_anon6 byecnt0;
unsigned char Brake_Sw;
unsigned char Brake_Req;
_anon0* sncpat[0];
_anon6 editmode;
unsigned char ta_flag;
unsigned char plpower_a;
short plretspdwk;
short pladdspdwk;
short plmaxspdwk;
unsigned char chibi_flag;
_anon6 gametimer;
_anon6 stageno;
unsigned char mapwka[64][8];
short backto_cnt;
char time_item;
unsigned char plflag;
short tate[2];
short yoko[2];
short naname[9];
unsigned char st6clrchg;
unsigned char plpower_m;
unsigned char generate_flag;
unsigned char time_flag;
unsigned char boss_sound;
unsigned char bossflag;
unsigned char clchgcnt[7];
char dirstk[4];
_anon11 swdata;
_anon11 swdata1;
unsigned char plautoflag;
_anon6 debugflag;
unsigned char plpower_s;
_anon11 plposiwkadr;
short playposiwk[128];
_anon2* lpKeepWork;
_anon3 pltime;
unsigned char plring_f2_s;
unsigned char plring_f2;
short plring_s;
short plring;
unsigned char waterflag;
unsigned char water_flag;
short waterposi_m;
_anon3 scrz_v_posit;
_anon3 scrz_h_posit;
_anon3 scrc_v_posit;
_anon3 scrc_h_posit;
_anon3 scrb_v_posit;
_anon3 scrb_h_posit;
_anon3 scra_v_posit;
_anon3 scra_h_posit;
short scralim_down;
_anon6 scroll_start;
_anon6 gameflag;
unsigned char kusya_flag;
short scra_vline;
unsigned char scr_cnt;
void(*WaveAllStop)();
unsigned char mizuflag;
unsigned char bossstart;
short scralim_right;
short scralim_left;
_anon8 debugwork;
short emyscorecnt;
unsigned char pl_suu_f;
unsigned char pltime_f;
unsigned char markerno;
unsigned char play_start;
unsigned char flowercnt[3];
unsigned char tv_flag;
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
void play00(_anon1* actionwk);
void muteki_set();
void test_mapwrt();
void play00init();
void mizuki_set();
unsigned int mapno_chk(short d2, short d3);
void kuru2();
void bura();
void sibi2();
void sibi();
void bfloor();
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
void kuru2move();
void buramove();
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
// Start address: 0x1020870
void bye_chk()
{
	// Line 23, Address: 0x1020870, Func Offset: 0
	// Line 24, Address: 0x1020878, Func Offset: 0x8
	// Line 26, Address: 0x10208a4, Func Offset: 0x34
	// Line 29, Address: 0x10208c8, Func Offset: 0x58
	// Line 30, Address: 0x10208e4, Func Offset: 0x74
	// Line 31, Address: 0x10208ec, Func Offset: 0x7c
	// Line 32, Address: 0x10208f8, Func Offset: 0x88
	// Line 33, Address: 0x102090c, Func Offset: 0x9c
	// Line 34, Address: 0x1020914, Func Offset: 0xa4
	// Line 35, Address: 0x1020920, Func Offset: 0xb0
	// Line 36, Address: 0x102092c, Func Offset: 0xbc
	// Line 37, Address: 0x1020938, Func Offset: 0xc8
	// Line 39, Address: 0x1020974, Func Offset: 0x104
	// Line 40, Address: 0x102097c, Func Offset: 0x10c
	// Line 41, Address: 0x1020988, Func Offset: 0x118
	// Func End, Address: 0x1020998, Func Offset: 0x128
}

// 
// Start address: 0x10209a0
void play00(_anon1* actionwk)
{
	unsigned char d0;
	// Line 47, Address: 0x10209a0, Func Offset: 0
	// Line 50, Address: 0x10209b0, Func Offset: 0x10
	// Line 52, Address: 0x10209b8, Func Offset: 0x18
	// Line 54, Address: 0x10209cc, Func Offset: 0x2c
	// Line 56, Address: 0x1020a10, Func Offset: 0x70
	// Line 57, Address: 0x1020a1c, Func Offset: 0x7c
	// Line 58, Address: 0x1020a28, Func Offset: 0x88
	// Line 59, Address: 0x1020a30, Func Offset: 0x90
	// Line 60, Address: 0x1020a48, Func Offset: 0xa8
	// Line 61, Address: 0x1020a60, Func Offset: 0xc0
	// Line 62, Address: 0x1020a68, Func Offset: 0xc8
	// Line 65, Address: 0x1020a80, Func Offset: 0xe0
	// Line 69, Address: 0x1020a88, Func Offset: 0xe8
	// Line 71, Address: 0x1020ad4, Func Offset: 0x134
	// Line 72, Address: 0x1020adc, Func Offset: 0x13c
	// Line 74, Address: 0x1020ae4, Func Offset: 0x144
	// Line 75, Address: 0x1020aec, Func Offset: 0x14c
	// Line 77, Address: 0x1020af4, Func Offset: 0x154
	// Line 78, Address: 0x1020afc, Func Offset: 0x15c
	// Line 80, Address: 0x1020b04, Func Offset: 0x164
	// Line 81, Address: 0x1020b0c, Func Offset: 0x16c
	// Line 83, Address: 0x1020b14, Func Offset: 0x174
	// Line 88, Address: 0x1020b1c, Func Offset: 0x17c
	// Line 90, Address: 0x1020b2c, Func Offset: 0x18c
	// Line 91, Address: 0x1020b48, Func Offset: 0x1a8
	// Func End, Address: 0x1020b5c, Func Offset: 0x1bc
}

// 
// Start address: 0x1020b60
void muteki_set()
{
	// Line 99, Address: 0x1020b60, Func Offset: 0
	// Line 100, Address: 0x1020b74, Func Offset: 0x14
	// Line 101, Address: 0x1020b80, Func Offset: 0x20
	// Line 103, Address: 0x1020bb0, Func Offset: 0x50
	// Line 104, Address: 0x1020bbc, Func Offset: 0x5c
	// Line 105, Address: 0x1020bc8, Func Offset: 0x68
	// Line 106, Address: 0x1020bd4, Func Offset: 0x74
	// Line 108, Address: 0x1020be0, Func Offset: 0x80
	// Func End, Address: 0x1020be8, Func Offset: 0x88
}

// 
// Start address: 0x1020bf0
void test_mapwrt()
{
	// Line 118, Address: 0x1020bf0, Func Offset: 0
	// Func End, Address: 0x1020bf8, Func Offset: 0x8
}

// 
// Start address: 0x1020c00
void play00init()
{
	// Line 125, Address: 0x1020c00, Func Offset: 0
	// Line 126, Address: 0x1020c14, Func Offset: 0x14
	// Line 127, Address: 0x1020c20, Func Offset: 0x20
	// Line 128, Address: 0x1020c2c, Func Offset: 0x2c
	// Line 129, Address: 0x1020c40, Func Offset: 0x40
	// Line 130, Address: 0x1020c4c, Func Offset: 0x4c
	// Line 134, Address: 0x1020c58, Func Offset: 0x58
	// Line 135, Address: 0x1020c64, Func Offset: 0x64
	// Line 136, Address: 0x1020c70, Func Offset: 0x70
	// Line 137, Address: 0x1020c7c, Func Offset: 0x7c
	// Line 138, Address: 0x1020c88, Func Offset: 0x88
	// Line 139, Address: 0x1020c94, Func Offset: 0x94
	// Line 140, Address: 0x1020ca0, Func Offset: 0xa0
	// Line 141, Address: 0x1020cac, Func Offset: 0xac
	// Func End, Address: 0x1020cb4, Func Offset: 0xb4
}

// 
// Start address: 0x1020cc0
void mizuki_set()
{
	short d2;
	short d3;
	unsigned int d1;
	_anon1* new_actwk;
	// Line 146, Address: 0x1020cc0, Func Offset: 0
	// Line 151, Address: 0x1020cd4, Func Offset: 0x14
	// Line 152, Address: 0x1020cec, Func Offset: 0x2c
	// Line 153, Address: 0x1020d08, Func Offset: 0x48
	// Line 154, Address: 0x1020d1c, Func Offset: 0x5c
	// Line 155, Address: 0x1020d30, Func Offset: 0x70
	// Line 156, Address: 0x1020d40, Func Offset: 0x80
	// Line 157, Address: 0x1020d54, Func Offset: 0x94
	// Line 158, Address: 0x1020d64, Func Offset: 0xa4
	// Line 160, Address: 0x1020d80, Func Offset: 0xc0
	// Line 161, Address: 0x1020d94, Func Offset: 0xd4
	// Line 162, Address: 0x1020da8, Func Offset: 0xe8
	// Line 163, Address: 0x1020db4, Func Offset: 0xf4
	// Line 164, Address: 0x1020dc4, Func Offset: 0x104
	// Line 165, Address: 0x1020dd4, Func Offset: 0x114
	// Line 166, Address: 0x1020dec, Func Offset: 0x12c
	// Line 168, Address: 0x1020e0c, Func Offset: 0x14c
	// Line 169, Address: 0x1020e20, Func Offset: 0x160
	// Func End, Address: 0x1020e3c, Func Offset: 0x17c
}

// 
// Start address: 0x1020e40
unsigned int mapno_chk(short d2, short d3)
{
	unsigned int d1;
	// Line 174, Address: 0x1020e40, Func Offset: 0
	// Line 177, Address: 0x1020e50, Func Offset: 0x10
	// Line 178, Address: 0x1020e54, Func Offset: 0x14
	// Line 179, Address: 0x1020e94, Func Offset: 0x54
	// Line 180, Address: 0x1020e98, Func Offset: 0x58
	// Func End, Address: 0x1020ea8, Func Offset: 0x68
}

// 
// Start address: 0x1020eb0
void kuru2()
{
	unsigned short tmp_xposi;
	// Line 184, Address: 0x1020eb0, Func Offset: 0
	// Line 187, Address: 0x1020ec0, Func Offset: 0x10
	// Line 188, Address: 0x1020f0c, Func Offset: 0x5c
	// Line 190, Address: 0x1020f14, Func Offset: 0x64
	// Line 193, Address: 0x1020f4c, Func Offset: 0x9c
	// Line 194, Address: 0x1020f60, Func Offset: 0xb0
	// Line 195, Address: 0x1020f68, Func Offset: 0xb8
	// Line 196, Address: 0x1020fa0, Func Offset: 0xf0
	// Line 197, Address: 0x1020fac, Func Offset: 0xfc
	// Line 198, Address: 0x1020fb8, Func Offset: 0x108
	// Line 199, Address: 0x1020fcc, Func Offset: 0x11c
	// Line 201, Address: 0x1020fdc, Func Offset: 0x12c
	// Line 202, Address: 0x1020fe8, Func Offset: 0x138
	// Line 203, Address: 0x1020ffc, Func Offset: 0x14c
	// Line 204, Address: 0x1021008, Func Offset: 0x158
	// Line 205, Address: 0x1021014, Func Offset: 0x164
	// Func End, Address: 0x102102c, Func Offset: 0x17c
}

// 
// Start address: 0x1021030
void bura()
{
	unsigned short tmp_yposi;
	// Line 209, Address: 0x1021030, Func Offset: 0
	// Line 212, Address: 0x102103c, Func Offset: 0xc
	// Line 213, Address: 0x1021088, Func Offset: 0x58
	// Line 215, Address: 0x1021090, Func Offset: 0x60
	// Line 218, Address: 0x10210dc, Func Offset: 0xac
	// Line 219, Address: 0x10210f4, Func Offset: 0xc4
	// Line 220, Address: 0x10210fc, Func Offset: 0xcc
	// Line 221, Address: 0x1021120, Func Offset: 0xf0
	// Line 224, Address: 0x1021128, Func Offset: 0xf8
	// Line 225, Address: 0x102113c, Func Offset: 0x10c
	// Line 226, Address: 0x1021164, Func Offset: 0x134
	// Line 227, Address: 0x1021170, Func Offset: 0x140
	// Line 228, Address: 0x1021184, Func Offset: 0x154
	// Line 229, Address: 0x1021190, Func Offset: 0x160
	// Line 230, Address: 0x102119c, Func Offset: 0x16c
	// Line 231, Address: 0x10211b4, Func Offset: 0x184
	// Line 232, Address: 0x10211bc, Func Offset: 0x18c
	// Func End, Address: 0x10211d0, Func Offset: 0x1a0
}

// 
// Start address: 0x10211d0
void sibi2()
{
	short block_no;
	short i;
	short* block_tbl;
	short* tbl[3];
	// Line 239, Address: 0x10211d0, Func Offset: 0
	// Line 242, Address: 0x10211e0, Func Offset: 0x10
	// Line 244, Address: 0x1021204, Func Offset: 0x34
	// Line 247, Address: 0x102128c, Func Offset: 0xbc
	// Line 249, Address: 0x1021294, Func Offset: 0xc4
	// Line 250, Address: 0x10212b4, Func Offset: 0xe4
	// Line 251, Address: 0x10212dc, Func Offset: 0x10c
	// Line 252, Address: 0x10212e8, Func Offset: 0x118
	// Line 253, Address: 0x10212ec, Func Offset: 0x11c
	// Line 254, Address: 0x10212f4, Func Offset: 0x124
	// Line 255, Address: 0x1021334, Func Offset: 0x164
	// Line 257, Address: 0x1021354, Func Offset: 0x184
	// Line 258, Address: 0x102137c, Func Offset: 0x1ac
	// Func End, Address: 0x1021394, Func Offset: 0x1c4
}

// 
// Start address: 0x10213a0
void sibi()
{
	short block_no;
	short i;
	short* block_tbl;
	short tbl[3];
	short tbl0[3];
	// Line 262, Address: 0x10213a0, Func Offset: 0
	// Line 265, Address: 0x10213b4, Func Offset: 0x14
	// Line 266, Address: 0x10213d8, Func Offset: 0x38
	// Line 268, Address: 0x10213fc, Func Offset: 0x5c
	// Line 269, Address: 0x1021440, Func Offset: 0xa0
	// Line 271, Address: 0x1021478, Func Offset: 0xd8
	// Line 272, Address: 0x10214a8, Func Offset: 0x108
	// Line 273, Address: 0x10214c4, Func Offset: 0x124
	// Line 274, Address: 0x10214e0, Func Offset: 0x140
	// Line 275, Address: 0x10214f4, Func Offset: 0x154
	// Line 276, Address: 0x1021504, Func Offset: 0x164
	// Line 278, Address: 0x102150c, Func Offset: 0x16c
	// Line 282, Address: 0x1021538, Func Offset: 0x198
	// Line 283, Address: 0x1021560, Func Offset: 0x1c0
	// Line 284, Address: 0x102156c, Func Offset: 0x1cc
	// Line 285, Address: 0x10215a0, Func Offset: 0x200
	// Line 286, Address: 0x10215a4, Func Offset: 0x204
	// Line 287, Address: 0x10215b0, Func Offset: 0x210
	// Line 288, Address: 0x10215dc, Func Offset: 0x23c
	// Line 290, Address: 0x10215fc, Func Offset: 0x25c
	// Line 291, Address: 0x102161c, Func Offset: 0x27c
	// Func End, Address: 0x1021638, Func Offset: 0x298
}

// 
// Start address: 0x1021640
void bfloor()
{
	unsigned char counter;
	// Line 295, Address: 0x1021640, Func Offset: 0
	// Line 298, Address: 0x102164c, Func Offset: 0xc
	// Line 299, Address: 0x1021680, Func Offset: 0x40
	// Line 300, Address: 0x1021698, Func Offset: 0x58
	// Line 301, Address: 0x10216b8, Func Offset: 0x78
	// Line 302, Address: 0x10216c0, Func Offset: 0x80
	// Line 305, Address: 0x10216d8, Func Offset: 0x98
	// Line 308, Address: 0x1021764, Func Offset: 0x124
	// Line 312, Address: 0x10217f0, Func Offset: 0x1b0
	// Line 313, Address: 0x10217fc, Func Offset: 0x1bc
	// Line 314, Address: 0x1021810, Func Offset: 0x1d0
	// Line 315, Address: 0x1021824, Func Offset: 0x1e4
	// Line 316, Address: 0x1021838, Func Offset: 0x1f8
	// Line 317, Address: 0x1021840, Func Offset: 0x200
	// Line 318, Address: 0x1021858, Func Offset: 0x218
	// Line 319, Address: 0x102186c, Func Offset: 0x22c
	// Line 320, Address: 0x1021878, Func Offset: 0x238
	// Line 321, Address: 0x1021884, Func Offset: 0x244
	// Line 322, Address: 0x1021898, Func Offset: 0x258
	// Line 323, Address: 0x10218a4, Func Offset: 0x264
	// Line 324, Address: 0x10218b0, Func Offset: 0x270
	// Func End, Address: 0x10218c4, Func Offset: 0x284
}

// 
// Start address: 0x10218d0
void scr_h()
{
	// Line 330, Address: 0x10218d0, Func Offset: 0
	// Func End, Address: 0x10218d8, Func Offset: 0x8
}

// 
// Start address: 0x10218e0
void play00move()
{
	// Line 334, Address: 0x10218e0, Func Offset: 0
	// Line 335, Address: 0x10218e8, Func Offset: 0x8
	// Line 336, Address: 0x10218f0, Func Offset: 0x10
	// Line 337, Address: 0x10218f8, Func Offset: 0x18
	// Line 338, Address: 0x1021928, Func Offset: 0x48
	// Line 339, Address: 0x1021934, Func Offset: 0x54
	// Line 342, Address: 0x102193c, Func Offset: 0x5c
	// Line 343, Address: 0x1021968, Func Offset: 0x88
	// Line 345, Address: 0x1021990, Func Offset: 0xb0
	// Line 346, Address: 0x10219a8, Func Offset: 0xc8
	// Line 347, Address: 0x10219b0, Func Offset: 0xd0
	// Line 348, Address: 0x10219b8, Func Offset: 0xd8
	// Line 350, Address: 0x10219fc, Func Offset: 0x11c
	// Line 351, Address: 0x1021a04, Func Offset: 0x124
	// Line 353, Address: 0x1021a0c, Func Offset: 0x12c
	// Line 354, Address: 0x1021a14, Func Offset: 0x134
	// Line 356, Address: 0x1021a1c, Func Offset: 0x13c
	// Line 357, Address: 0x1021a24, Func Offset: 0x144
	// Line 359, Address: 0x1021a2c, Func Offset: 0x14c
	// Line 364, Address: 0x1021a34, Func Offset: 0x154
	// Line 365, Address: 0x1021a3c, Func Offset: 0x15c
	// Line 366, Address: 0x1021a44, Func Offset: 0x164
	// Line 367, Address: 0x1021a4c, Func Offset: 0x16c
	// Line 368, Address: 0x1021a54, Func Offset: 0x174
	// Line 371, Address: 0x1021a5c, Func Offset: 0x17c
	// Line 372, Address: 0x1021a64, Func Offset: 0x184
	// Line 374, Address: 0x1021a6c, Func Offset: 0x18c
	// Line 375, Address: 0x1021a7c, Func Offset: 0x19c
	// Line 377, Address: 0x1021a8c, Func Offset: 0x1ac
	// Line 378, Address: 0x1021a94, Func Offset: 0x1b4
	// Line 380, Address: 0x1021ad0, Func Offset: 0x1f0
	// Line 382, Address: 0x1021ae0, Func Offset: 0x200
	// Line 383, Address: 0x1021ae8, Func Offset: 0x208
	// Func End, Address: 0x1021af8, Func Offset: 0x218
}

// 
// Start address: 0x1021b00
void playpowercnt()
{
	unsigned short d0;
	unsigned short cal;
	// Line 390, Address: 0x1021b00, Func Offset: 0
	// Line 394, Address: 0x1021b10, Func Offset: 0x10
	// Line 395, Address: 0x1021b2c, Func Offset: 0x2c
	// Line 396, Address: 0x1021b38, Func Offset: 0x38
	// Line 397, Address: 0x1021b44, Func Offset: 0x44
	// Line 398, Address: 0x1021b58, Func Offset: 0x58
	// Line 399, Address: 0x1021b68, Func Offset: 0x68
	// Line 400, Address: 0x1021b70, Func Offset: 0x70
	// Line 401, Address: 0x1021b88, Func Offset: 0x88
	// Line 402, Address: 0x1021b98, Func Offset: 0x98
	// Line 403, Address: 0x1021ba8, Func Offset: 0xa8
	// Line 404, Address: 0x1021bb0, Func Offset: 0xb0
	// Line 405, Address: 0x1021bc8, Func Offset: 0xc8
	// Line 410, Address: 0x1021bd8, Func Offset: 0xd8
	// Line 411, Address: 0x1021bec, Func Offset: 0xec
	// Line 412, Address: 0x1021bf8, Func Offset: 0xf8
	// Line 413, Address: 0x1021c04, Func Offset: 0x104
	// Line 414, Address: 0x1021c14, Func Offset: 0x114
	// Line 415, Address: 0x1021c28, Func Offset: 0x128
	// Line 416, Address: 0x1021c34, Func Offset: 0x134
	// Line 417, Address: 0x1021c5c, Func Offset: 0x15c
	// Line 418, Address: 0x1021c70, Func Offset: 0x170
	// Line 421, Address: 0x1021c7c, Func Offset: 0x17c
	// Line 424, Address: 0x1021c84, Func Offset: 0x184
	// Line 430, Address: 0x1021c8c, Func Offset: 0x18c
	// Line 431, Address: 0x1021ca0, Func Offset: 0x1a0
	// Line 432, Address: 0x1021cac, Func Offset: 0x1ac
	// Line 433, Address: 0x1021cb8, Func Offset: 0x1b8
	// Line 434, Address: 0x1021cc8, Func Offset: 0x1c8
	// Line 435, Address: 0x1021cdc, Func Offset: 0x1dc
	// Line 436, Address: 0x1021ce8, Func Offset: 0x1e8
	// Line 437, Address: 0x1021cf4, Func Offset: 0x1f4
	// Line 438, Address: 0x1021d00, Func Offset: 0x200
	// Line 439, Address: 0x1021d0c, Func Offset: 0x20c
	// Line 440, Address: 0x1021d34, Func Offset: 0x234
	// Line 441, Address: 0x1021d48, Func Offset: 0x248
	// Line 444, Address: 0x1021d54, Func Offset: 0x254
	// Line 447, Address: 0x1021d5c, Func Offset: 0x25c
	// Line 451, Address: 0x1021d64, Func Offset: 0x264
	// Func End, Address: 0x1021d7c, Func Offset: 0x27c
}

// 
// Start address: 0x1021d80
void playposiwkset()
{
	// Line 458, Address: 0x1021d80, Func Offset: 0
	// Line 459, Address: 0x1021dc0, Func Offset: 0x40
	// Line 460, Address: 0x1021e04, Func Offset: 0x84
	// Line 461, Address: 0x1021e18, Func Offset: 0x98
	// Func End, Address: 0x1021e20, Func Offset: 0xa0
}

// 
// Start address: 0x1021e20
void plwaterchk()
{
	// Line 467, Address: 0x1021e20, Func Offset: 0
	// Func End, Address: 0x1021e28, Func Offset: 0x8
}

// 
// Start address: 0x1021e30
void playsave()
{
	// Line 473, Address: 0x1021e30, Func Offset: 0
	// Line 474, Address: 0x1021e44, Func Offset: 0x14
	// Line 475, Address: 0x1021e58, Func Offset: 0x28
	// Line 476, Address: 0x1021e6c, Func Offset: 0x3c
	// Line 477, Address: 0x1021e80, Func Offset: 0x50
	// Line 478, Address: 0x1021e94, Func Offset: 0x64
	// Line 479, Address: 0x1021ea8, Func Offset: 0x78
	// Line 480, Address: 0x1021ebc, Func Offset: 0x8c
	// Line 481, Address: 0x1021ed0, Func Offset: 0xa0
	// Line 482, Address: 0x1021ee4, Func Offset: 0xb4
	// Line 483, Address: 0x1021ef8, Func Offset: 0xc8
	// Line 484, Address: 0x1021f0c, Func Offset: 0xdc
	// Line 485, Address: 0x1021f20, Func Offset: 0xf0
	// Line 486, Address: 0x1021f34, Func Offset: 0x104
	// Line 487, Address: 0x1021f48, Func Offset: 0x118
	// Line 488, Address: 0x1021f5c, Func Offset: 0x12c
	// Line 489, Address: 0x1021f70, Func Offset: 0x140
	// Line 490, Address: 0x1021f84, Func Offset: 0x154
	// Line 491, Address: 0x1021f98, Func Offset: 0x168
	// Line 492, Address: 0x1021fac, Func Offset: 0x17c
	// Line 493, Address: 0x1021fc0, Func Offset: 0x190
	// Line 494, Address: 0x1021fd4, Func Offset: 0x1a4
	// Line 495, Address: 0x1021fe8, Func Offset: 0x1b8
	// Line 496, Address: 0x1021ff8, Func Offset: 0x1c8
	// Line 497, Address: 0x102200c, Func Offset: 0x1dc
	// Line 498, Address: 0x102201c, Func Offset: 0x1ec
	// Line 499, Address: 0x1022050, Func Offset: 0x220
	// Line 501, Address: 0x1022064, Func Offset: 0x234
	// Func End, Address: 0x102206c, Func Offset: 0x23c
}

// 
// Start address: 0x1022070
void backto_chk()
{
	short d0;
	short d1;
	short d2;
	char cal;
	// Line 507, Address: 0x1022070, Func Offset: 0
	// Line 511, Address: 0x1022088, Func Offset: 0x18
	// Line 513, Address: 0x102209c, Func Offset: 0x2c
	// Line 514, Address: 0x10220b0, Func Offset: 0x40
	// Line 515, Address: 0x10220c8, Func Offset: 0x58
	// Line 516, Address: 0x10220d4, Func Offset: 0x64
	// Line 517, Address: 0x10220e4, Func Offset: 0x74
	// Line 518, Address: 0x1022110, Func Offset: 0xa0
	// Line 519, Address: 0x1022134, Func Offset: 0xc4
	// Line 520, Address: 0x1022158, Func Offset: 0xe8
	// Line 521, Address: 0x1022170, Func Offset: 0x100
	// Line 522, Address: 0x1022180, Func Offset: 0x110
	// Line 523, Address: 0x10221ac, Func Offset: 0x13c
	// Line 524, Address: 0x10221c8, Func Offset: 0x158
	// Line 525, Address: 0x10221e8, Func Offset: 0x178
	// Line 526, Address: 0x1022200, Func Offset: 0x190
	// Line 528, Address: 0x1022208, Func Offset: 0x198
	// Line 529, Address: 0x1022214, Func Offset: 0x1a4
	// Line 530, Address: 0x102221c, Func Offset: 0x1ac
	// Line 532, Address: 0x1022224, Func Offset: 0x1b4
	// Line 533, Address: 0x1022238, Func Offset: 0x1c8
	// Line 534, Address: 0x1022250, Func Offset: 0x1e0
	// Line 535, Address: 0x102225c, Func Offset: 0x1ec
	// Line 536, Address: 0x102226c, Func Offset: 0x1fc
	// Line 537, Address: 0x102227c, Func Offset: 0x20c
	// Line 540, Address: 0x1022288, Func Offset: 0x218
	// Line 541, Address: 0x10222b4, Func Offset: 0x244
	// Line 542, Address: 0x10222d0, Func Offset: 0x260
	// Line 543, Address: 0x10222f0, Func Offset: 0x280
	// Line 544, Address: 0x1022308, Func Offset: 0x298
	// Line 545, Address: 0x1022310, Func Offset: 0x2a0
	// Line 546, Address: 0x102231c, Func Offset: 0x2ac
	// Line 549, Address: 0x1022324, Func Offset: 0x2b4
	// Line 550, Address: 0x1022338, Func Offset: 0x2c8
	// Line 551, Address: 0x1022364, Func Offset: 0x2f4
	// Line 552, Address: 0x102236c, Func Offset: 0x2fc
	// Line 553, Address: 0x1022374, Func Offset: 0x304
	// Line 555, Address: 0x102237c, Func Offset: 0x30c
	// Line 556, Address: 0x1022398, Func Offset: 0x328
	// Line 557, Address: 0x10223a0, Func Offset: 0x330
	// Line 558, Address: 0x10223a8, Func Offset: 0x338
	// Line 560, Address: 0x10223b0, Func Offset: 0x340
	// Func End, Address: 0x10223d0, Func Offset: 0x360
}

// 
// Start address: 0x10223d0
void play00walk()
{
	// Line 566, Address: 0x10223d0, Func Offset: 0
	// Line 567, Address: 0x10223d8, Func Offset: 0x8
	// Line 568, Address: 0x10223ec, Func Offset: 0x1c
	// Line 569, Address: 0x1022408, Func Offset: 0x38
	// Line 571, Address: 0x1022410, Func Offset: 0x40
	// Line 572, Address: 0x1022418, Func Offset: 0x48
	// Line 573, Address: 0x1022434, Func Offset: 0x64
	// Line 574, Address: 0x1022448, Func Offset: 0x78
	// Line 575, Address: 0x1022460, Func Offset: 0x90
	// Line 576, Address: 0x1022468, Func Offset: 0x98
	// Line 578, Address: 0x1022480, Func Offset: 0xb0
	// Line 579, Address: 0x1022488, Func Offset: 0xb8
	// Line 580, Address: 0x1022498, Func Offset: 0xc8
	// Line 582, Address: 0x10224a0, Func Offset: 0xd0
	// Line 583, Address: 0x10224a8, Func Offset: 0xd8
	// Line 584, Address: 0x10224b0, Func Offset: 0xe0
	// Line 585, Address: 0x10224c4, Func Offset: 0xf4
	// Line 586, Address: 0x10224cc, Func Offset: 0xfc
	// Line 587, Address: 0x10224d4, Func Offset: 0x104
	// Line 588, Address: 0x10224dc, Func Offset: 0x10c
	// Line 589, Address: 0x10224e4, Func Offset: 0x114
	// Line 590, Address: 0x10224f4, Func Offset: 0x124
	// Line 591, Address: 0x1022504, Func Offset: 0x134
	// Line 592, Address: 0x102250c, Func Offset: 0x13c
	// Func End, Address: 0x102251c, Func Offset: 0x14c
}

// 
// Start address: 0x1022520
void play00jump()
{
	// Line 598, Address: 0x1022520, Func Offset: 0
	// Line 599, Address: 0x1022528, Func Offset: 0x8
	// Line 600, Address: 0x102255c, Func Offset: 0x3c
	// Line 601, Address: 0x1022564, Func Offset: 0x44
	// Line 602, Address: 0x102257c, Func Offset: 0x5c
	// Line 604, Address: 0x1022594, Func Offset: 0x74
	// Line 605, Address: 0x102259c, Func Offset: 0x7c
	// Line 606, Address: 0x10225a4, Func Offset: 0x84
	// Line 607, Address: 0x10225ac, Func Offset: 0x8c
	// Line 608, Address: 0x10225b4, Func Offset: 0x94
	// Line 609, Address: 0x10225bc, Func Offset: 0x9c
	// Line 610, Address: 0x10225cc, Func Offset: 0xac
	// Line 612, Address: 0x10225f8, Func Offset: 0xd8
	// Line 614, Address: 0x1022600, Func Offset: 0xe0
	// Line 615, Address: 0x1022608, Func Offset: 0xe8
	// Func End, Address: 0x1022618, Func Offset: 0xf8
}

// 
// Start address: 0x1022620
void ball00walk()
{
	// Line 620, Address: 0x1022620, Func Offset: 0
	// Line 621, Address: 0x1022628, Func Offset: 0x8
	// Line 622, Address: 0x1022630, Func Offset: 0x10
	// Line 623, Address: 0x1022638, Func Offset: 0x18
	// Line 624, Address: 0x102264c, Func Offset: 0x2c
	// Line 625, Address: 0x1022654, Func Offset: 0x34
	// Line 626, Address: 0x102265c, Func Offset: 0x3c
	// Line 627, Address: 0x1022664, Func Offset: 0x44
	// Line 629, Address: 0x1022688, Func Offset: 0x68
	// Line 630, Address: 0x1022698, Func Offset: 0x78
	// Line 631, Address: 0x10226a0, Func Offset: 0x80
	// Func End, Address: 0x10226b0, Func Offset: 0x90
}

// 
// Start address: 0x10226b0
void ball00jump()
{
	// Line 636, Address: 0x10226b0, Func Offset: 0
	// Line 637, Address: 0x10226b8, Func Offset: 0x8
	// Line 638, Address: 0x10226d0, Func Offset: 0x20
	// Line 639, Address: 0x10226d8, Func Offset: 0x28
	// Line 640, Address: 0x10226e0, Func Offset: 0x30
	// Line 641, Address: 0x10226e8, Func Offset: 0x38
	// Line 643, Address: 0x10226f0, Func Offset: 0x40
	// Line 644, Address: 0x1022708, Func Offset: 0x58
	// Line 645, Address: 0x1022710, Func Offset: 0x60
	// Line 646, Address: 0x1022718, Func Offset: 0x68
	// Line 647, Address: 0x1022720, Func Offset: 0x70
	// Line 650, Address: 0x1022728, Func Offset: 0x78
	// Line 651, Address: 0x1022730, Func Offset: 0x80
	// Line 652, Address: 0x1022738, Func Offset: 0x88
	// Line 653, Address: 0x1022740, Func Offset: 0x90
	// Line 654, Address: 0x1022748, Func Offset: 0x98
	// Line 656, Address: 0x1022750, Func Offset: 0xa0
	// Line 657, Address: 0x1022760, Func Offset: 0xb0
	// Line 659, Address: 0x102278c, Func Offset: 0xdc
	// Line 661, Address: 0x1022794, Func Offset: 0xe4
	// Line 662, Address: 0x102279c, Func Offset: 0xec
	// Func End, Address: 0x10227ac, Func Offset: 0xfc
}

// 
// Start address: 0x10227b0
void kuru2move()
{
	short tmp_sin;
	short tmp_cos;
	// Line 666, Address: 0x10227b0, Func Offset: 0
	// Line 669, Address: 0x10227bc, Func Offset: 0xc
	// Line 670, Address: 0x10227d4, Func Offset: 0x24
	// Line 671, Address: 0x10227ec, Func Offset: 0x3c
	// Line 673, Address: 0x102282c, Func Offset: 0x7c
	// Line 674, Address: 0x1022840, Func Offset: 0x90
	// Line 675, Address: 0x1022854, Func Offset: 0xa4
	// Line 676, Address: 0x102285c, Func Offset: 0xac
	// Line 679, Address: 0x1022864, Func Offset: 0xb4
	// Line 681, Address: 0x1022890, Func Offset: 0xe0
	// Line 682, Address: 0x10228dc, Func Offset: 0x12c
	// Line 684, Address: 0x10228f0, Func Offset: 0x140
	// Line 685, Address: 0x1022908, Func Offset: 0x158
	// Line 686, Address: 0x1022948, Func Offset: 0x198
	// Line 688, Address: 0x1022978, Func Offset: 0x1c8
	// Line 690, Address: 0x10229a0, Func Offset: 0x1f0
	// Line 691, Address: 0x10229d8, Func Offset: 0x228
	// Line 692, Address: 0x10229fc, Func Offset: 0x24c
	// Func End, Address: 0x1022a10, Func Offset: 0x260
}

// 
// Start address: 0x1022a10
void buramove()
{
	// Line 696, Address: 0x1022a10, Func Offset: 0
	// Line 697, Address: 0x1022a18, Func Offset: 0x8
	// Line 700, Address: 0x1022a7c, Func Offset: 0x6c
	// Line 701, Address: 0x1022a90, Func Offset: 0x80
	// Line 702, Address: 0x1022aa4, Func Offset: 0x94
	// Line 703, Address: 0x1022ab0, Func Offset: 0xa0
	// Line 704, Address: 0x1022abc, Func Offset: 0xac
	// Line 707, Address: 0x1022ac4, Func Offset: 0xb4
	// Line 708, Address: 0x1022adc, Func Offset: 0xcc
	// Line 709, Address: 0x1022af0, Func Offset: 0xe0
	// Line 710, Address: 0x1022b04, Func Offset: 0xf4
	// Line 711, Address: 0x1022b18, Func Offset: 0x108
	// Line 712, Address: 0x1022b38, Func Offset: 0x128
	// Line 713, Address: 0x1022b4c, Func Offset: 0x13c
	// Line 714, Address: 0x1022b60, Func Offset: 0x150
	// Line 715, Address: 0x1022b74, Func Offset: 0x164
	// Line 716, Address: 0x1022b84, Func Offset: 0x174
	// Line 717, Address: 0x1022bb4, Func Offset: 0x1a4
	// Line 718, Address: 0x1022bc0, Func Offset: 0x1b0
	// Line 719, Address: 0x1022bf0, Func Offset: 0x1e0
	// Func End, Address: 0x1022c00, Func Offset: 0x1f0
}

// 
// Start address: 0x1022c00
void chk11()
{
	short d0;
	char mapdata;
	char chk11tbl[7];
	// Line 723, Address: 0x1022c00, Func Offset: 0
	// Line 726, Address: 0x1022c0c, Func Offset: 0xc
	// Line 728, Address: 0x1022c38, Func Offset: 0x38
	// Line 729, Address: 0x1022c50, Func Offset: 0x50
	// Line 730, Address: 0x1022c68, Func Offset: 0x68
	// Line 732, Address: 0x1022cb8, Func Offset: 0xb8
	// Line 733, Address: 0x1022d04, Func Offset: 0x104
	// Line 734, Address: 0x1022d10, Func Offset: 0x110
	// Line 735, Address: 0x1022d38, Func Offset: 0x138
	// Line 736, Address: 0x1022d4c, Func Offset: 0x14c
	// Line 738, Address: 0x1022d54, Func Offset: 0x154
	// Line 739, Address: 0x1022d74, Func Offset: 0x174
	// Line 740, Address: 0x1022d8c, Func Offset: 0x18c
	// Line 741, Address: 0x1022da0, Func Offset: 0x1a0
	// Line 742, Address: 0x1022db8, Func Offset: 0x1b8
	// Line 743, Address: 0x1022dd8, Func Offset: 0x1d8
	// Line 744, Address: 0x1022de4, Func Offset: 0x1e4
	// Line 745, Address: 0x1022dfc, Func Offset: 0x1fc
	// Line 746, Address: 0x1022e20, Func Offset: 0x220
	// Func End, Address: 0x1022e34, Func Offset: 0x234
}

// 
// Start address: 0x1022e40
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
	// Line 753, Address: 0x1022e40, Func Offset: 0
	// Line 766, Address: 0x1022e60, Func Offset: 0x20
	// Line 767, Address: 0x1022e74, Func Offset: 0x34
	// Line 768, Address: 0x1022e88, Func Offset: 0x48
	// Line 769, Address: 0x1022ea8, Func Offset: 0x68
	// Line 771, Address: 0x1022ec8, Func Offset: 0x88
	// Line 772, Address: 0x1022ee8, Func Offset: 0xa8
	// Line 774, Address: 0x1022f14, Func Offset: 0xd4
	// Line 775, Address: 0x1022f2c, Func Offset: 0xec
	// Line 776, Address: 0x1022f40, Func Offset: 0x100
	// Line 778, Address: 0x1022f4c, Func Offset: 0x10c
	// Line 780, Address: 0x1022f64, Func Offset: 0x124
	// Line 781, Address: 0x1022f70, Func Offset: 0x130
	// Line 782, Address: 0x1022fa8, Func Offset: 0x168
	// Line 783, Address: 0x1022fd8, Func Offset: 0x198
	// Line 784, Address: 0x1022fe0, Func Offset: 0x1a0
	// Line 787, Address: 0x1022fe8, Func Offset: 0x1a8
	// Line 788, Address: 0x1023014, Func Offset: 0x1d4
	// Line 789, Address: 0x1023034, Func Offset: 0x1f4
	// Line 790, Address: 0x102308c, Func Offset: 0x24c
	// Line 791, Address: 0x10230a0, Func Offset: 0x260
	// Line 792, Address: 0x10230bc, Func Offset: 0x27c
	// Line 795, Address: 0x10230c4, Func Offset: 0x284
	// Line 796, Address: 0x10230dc, Func Offset: 0x29c
	// Line 797, Address: 0x10230f0, Func Offset: 0x2b0
	// Line 800, Address: 0x1023108, Func Offset: 0x2c8
	// Line 801, Address: 0x1023134, Func Offset: 0x2f4
	// Line 802, Address: 0x1023140, Func Offset: 0x300
	// Line 805, Address: 0x1023148, Func Offset: 0x308
	// Line 808, Address: 0x1023160, Func Offset: 0x320
	// Line 809, Address: 0x102318c, Func Offset: 0x34c
	// Line 810, Address: 0x1023198, Func Offset: 0x358
	// Line 815, Address: 0x10231a0, Func Offset: 0x360
	// Line 816, Address: 0x10231e0, Func Offset: 0x3a0
	// Line 817, Address: 0x10231f8, Func Offset: 0x3b8
	// Line 818, Address: 0x1023228, Func Offset: 0x3e8
	// Line 819, Address: 0x102324c, Func Offset: 0x40c
	// Line 821, Address: 0x1023278, Func Offset: 0x438
	// Line 824, Address: 0x10232ac, Func Offset: 0x46c
	// Line 825, Address: 0x10232c4, Func Offset: 0x484
	// Line 826, Address: 0x10232d0, Func Offset: 0x490
	// Line 827, Address: 0x10232e4, Func Offset: 0x4a4
	// Line 828, Address: 0x10232ec, Func Offset: 0x4ac
	// Line 829, Address: 0x10232f8, Func Offset: 0x4b8
	// Line 830, Address: 0x1023310, Func Offset: 0x4d0
	// Line 831, Address: 0x1023354, Func Offset: 0x514
	// Line 832, Address: 0x1023394, Func Offset: 0x554
	// Line 834, Address: 0x10233e4, Func Offset: 0x5a4
	// Line 835, Address: 0x10233f8, Func Offset: 0x5b8
	// Line 836, Address: 0x1023408, Func Offset: 0x5c8
	// Line 837, Address: 0x1023420, Func Offset: 0x5e0
	// Line 838, Address: 0x1023444, Func Offset: 0x604
	// Line 839, Address: 0x102344c, Func Offset: 0x60c
	// Line 841, Address: 0x1023470, Func Offset: 0x630
	// Line 842, Address: 0x1023478, Func Offset: 0x638
	// Line 845, Address: 0x1023480, Func Offset: 0x640
	// Line 846, Address: 0x1023498, Func Offset: 0x658
	// Line 847, Address: 0x10234a4, Func Offset: 0x664
	// Line 848, Address: 0x10234b0, Func Offset: 0x670
	// Line 850, Address: 0x10234bc, Func Offset: 0x67c
	// Line 853, Address: 0x10234c4, Func Offset: 0x684
	// Line 854, Address: 0x10234dc, Func Offset: 0x69c
	// Line 855, Address: 0x10234e8, Func Offset: 0x6a8
	// Line 856, Address: 0x1023510, Func Offset: 0x6d0
	// Line 857, Address: 0x1023518, Func Offset: 0x6d8
	// Line 858, Address: 0x1023520, Func Offset: 0x6e0
	// Line 860, Address: 0x1023528, Func Offset: 0x6e8
	// Line 861, Address: 0x1023530, Func Offset: 0x6f0
	// Line 862, Address: 0x102353c, Func Offset: 0x6fc
	// Line 863, Address: 0x1023544, Func Offset: 0x704
	// Line 868, Address: 0x102354c, Func Offset: 0x70c
	// Line 869, Address: 0x1023564, Func Offset: 0x724
	// Line 870, Address: 0x1023570, Func Offset: 0x730
	// Line 871, Address: 0x10235a0, Func Offset: 0x760
	// Line 874, Address: 0x10235a8, Func Offset: 0x768
	// Line 875, Address: 0x10235c0, Func Offset: 0x780
	// Line 876, Address: 0x10235e4, Func Offset: 0x7a4
	// Line 878, Address: 0x1023610, Func Offset: 0x7d0
	// Line 881, Address: 0x1023644, Func Offset: 0x804
	// Line 882, Address: 0x102365c, Func Offset: 0x81c
	// Line 883, Address: 0x1023668, Func Offset: 0x828
	// Line 884, Address: 0x102367c, Func Offset: 0x83c
	// Line 885, Address: 0x1023694, Func Offset: 0x854
	// Line 886, Address: 0x10236a0, Func Offset: 0x860
	// Line 887, Address: 0x10236ac, Func Offset: 0x86c
	// Line 888, Address: 0x10236e8, Func Offset: 0x8a8
	// Line 889, Address: 0x10236f8, Func Offset: 0x8b8
	// Line 890, Address: 0x1023704, Func Offset: 0x8c4
	// Line 891, Address: 0x1023710, Func Offset: 0x8d0
	// Line 894, Address: 0x1023718, Func Offset: 0x8d8
	// Line 895, Address: 0x1023730, Func Offset: 0x8f0
	// Line 896, Address: 0x102373c, Func Offset: 0x8fc
	// Line 897, Address: 0x102376c, Func Offset: 0x92c
	// Line 900, Address: 0x1023774, Func Offset: 0x934
	// Line 901, Address: 0x1023790, Func Offset: 0x950
	// Line 902, Address: 0x10237b0, Func Offset: 0x970
	// Line 904, Address: 0x10237b8, Func Offset: 0x978
	// Line 905, Address: 0x10237e8, Func Offset: 0x9a8
	// Line 910, Address: 0x10237fc, Func Offset: 0x9bc
	// Line 912, Address: 0x102382c, Func Offset: 0x9ec
	// Line 914, Address: 0x1023844, Func Offset: 0xa04
	// Line 915, Address: 0x1023880, Func Offset: 0xa40
	// Line 917, Address: 0x1023888, Func Offset: 0xa48
	// Line 921, Address: 0x10238c4, Func Offset: 0xa84
	// Line 922, Address: 0x10238e4, Func Offset: 0xaa4
	// Line 923, Address: 0x10238f0, Func Offset: 0xab0
	// Line 925, Address: 0x10238fc, Func Offset: 0xabc
	// Line 926, Address: 0x1023914, Func Offset: 0xad4
	// Line 928, Address: 0x102391c, Func Offset: 0xadc
	// Line 929, Address: 0x102392c, Func Offset: 0xaec
	// Line 930, Address: 0x1023940, Func Offset: 0xb00
	// Line 932, Address: 0x1023944, Func Offset: 0xb04
	// Line 934, Address: 0x1023954, Func Offset: 0xb14
	// Line 935, Address: 0x1023960, Func Offset: 0xb20
	// Func End, Address: 0x1023988, Func Offset: 0xb48
}

// 
// Start address: 0x1023990
void lmovecol()
{
	short add_speed;
	char add_dir;
	char tmp_dir;
	unsigned char sonic_dir;
	// Line 938, Address: 0x1023990, Func Offset: 0
	// Line 939, Address: 0x10239a4, Func Offset: 0x14
	// Line 944, Address: 0x10239a8, Func Offset: 0x18
	// Line 945, Address: 0x10239e4, Func Offset: 0x54
	// Line 946, Address: 0x10239f0, Func Offset: 0x60
	// Line 948, Address: 0x1023a24, Func Offset: 0x94
	// Line 949, Address: 0x1023a48, Func Offset: 0xb8
	// Line 950, Address: 0x1023a4c, Func Offset: 0xbc
	// Line 951, Address: 0x1023a90, Func Offset: 0x100
	// Line 952, Address: 0x1023a98, Func Offset: 0x108
	// Line 953, Address: 0x1023adc, Func Offset: 0x14c
	// Line 954, Address: 0x1023af0, Func Offset: 0x160
	// Line 957, Address: 0x1023b28, Func Offset: 0x198
	// Line 958, Address: 0x1023b3c, Func Offset: 0x1ac
	// Line 961, Address: 0x1023b44, Func Offset: 0x1b4
	// Line 962, Address: 0x1023b58, Func Offset: 0x1c8
	// Line 963, Address: 0x1023b6c, Func Offset: 0x1dc
	// Line 964, Address: 0x1023b74, Func Offset: 0x1e4
	// Line 967, Address: 0x1023b7c, Func Offset: 0x1ec
	// Line 968, Address: 0x1023b90, Func Offset: 0x200
	// Line 971, Address: 0x1023b98, Func Offset: 0x208
	// Line 972, Address: 0x1023bac, Func Offset: 0x21c
	// Line 973, Address: 0x1023bc0, Func Offset: 0x230
	// Line 978, Address: 0x1023bc8, Func Offset: 0x238
	// Func End, Address: 0x1023be4, Func Offset: 0x254
}

// 
// Start address: 0x1023bf0
void plwalk_l()
{
	short cal_speed;
	// Line 983, Address: 0x1023bf0, Func Offset: 0
	// Line 986, Address: 0x1023bfc, Func Offset: 0xc
	// Line 987, Address: 0x1023c10, Func Offset: 0x20
	// Line 988, Address: 0x1023c20, Func Offset: 0x30
	// Line 990, Address: 0x1023c30, Func Offset: 0x40
	// Line 991, Address: 0x1023c48, Func Offset: 0x58
	// Line 992, Address: 0x1023c5c, Func Offset: 0x6c
	// Line 993, Address: 0x1023c70, Func Offset: 0x80
	// Line 996, Address: 0x1023c7c, Func Offset: 0x8c
	// Line 997, Address: 0x1023ca4, Func Offset: 0xb4
	// Line 998, Address: 0x1023cb8, Func Offset: 0xc8
	// Line 1001, Address: 0x1023d04, Func Offset: 0x114
	// Line 1002, Address: 0x1023d0c, Func Offset: 0x11c
	// Line 1003, Address: 0x1023d14, Func Offset: 0x124
	// Line 1005, Address: 0x1023d1c, Func Offset: 0x12c
	// Line 1007, Address: 0x1023d54, Func Offset: 0x164
	// Line 1008, Address: 0x1023d5c, Func Offset: 0x16c
	// Line 1009, Address: 0x1023d7c, Func Offset: 0x18c
	// Line 1010, Address: 0x1023d90, Func Offset: 0x1a0
	// Line 1011, Address: 0x1023d9c, Func Offset: 0x1ac
	// Line 1013, Address: 0x1023db0, Func Offset: 0x1c0
	// Line 1014, Address: 0x1023dc4, Func Offset: 0x1d4
	// Line 1015, Address: 0x1023dd0, Func Offset: 0x1e0
	// Line 1017, Address: 0x1023ddc, Func Offset: 0x1ec
	// Line 1019, Address: 0x1023de8, Func Offset: 0x1f8
	// Func End, Address: 0x1023dfc, Func Offset: 0x20c
}

// 
// Start address: 0x1023e00
void plwalk_r()
{
	short cal_speed;
	// Line 1023, Address: 0x1023e00, Func Offset: 0
	// Line 1026, Address: 0x1023e0c, Func Offset: 0xc
	// Line 1027, Address: 0x1023e20, Func Offset: 0x20
	// Line 1028, Address: 0x1023e30, Func Offset: 0x30
	// Line 1030, Address: 0x1023e40, Func Offset: 0x40
	// Line 1031, Address: 0x1023e58, Func Offset: 0x58
	// Line 1032, Address: 0x1023e6c, Func Offset: 0x6c
	// Line 1033, Address: 0x1023e80, Func Offset: 0x80
	// Line 1036, Address: 0x1023e8c, Func Offset: 0x8c
	// Line 1037, Address: 0x1023eb0, Func Offset: 0xb0
	// Line 1038, Address: 0x1023ec4, Func Offset: 0xc4
	// Line 1041, Address: 0x1023ef8, Func Offset: 0xf8
	// Line 1042, Address: 0x1023f00, Func Offset: 0x100
	// Line 1043, Address: 0x1023f08, Func Offset: 0x108
	// Line 1045, Address: 0x1023f10, Func Offset: 0x110
	// Line 1046, Address: 0x1023f48, Func Offset: 0x148
	// Line 1047, Address: 0x1023f50, Func Offset: 0x150
	// Line 1048, Address: 0x1023f70, Func Offset: 0x170
	// Line 1049, Address: 0x1023f84, Func Offset: 0x184
	// Line 1050, Address: 0x1023f90, Func Offset: 0x190
	// Line 1052, Address: 0x1023fa4, Func Offset: 0x1a4
	// Line 1053, Address: 0x1023fb8, Func Offset: 0x1b8
	// Line 1054, Address: 0x1023fc4, Func Offset: 0x1c4
	// Line 1056, Address: 0x1023fd0, Func Offset: 0x1d0
	// Line 1058, Address: 0x1023fdc, Func Offset: 0x1dc
	// Func End, Address: 0x1023ff0, Func Offset: 0x1f0
}

// 
// Start address: 0x1023ff0
void balllmove()
{
	short d0;
	short d1;
	short d2;
	int sin_data;
	int cos_data;
	short sin_tmp;
	short cos_tmp;
	// Line 1066, Address: 0x1023ff0, Func Offset: 0
	// Line 1076, Address: 0x102400c, Func Offset: 0x1c
	// Line 1077, Address: 0x1024020, Func Offset: 0x30
	// Line 1078, Address: 0x1024034, Func Offset: 0x44
	// Line 1079, Address: 0x1024054, Func Offset: 0x64
	// Line 1082, Address: 0x1024074, Func Offset: 0x84
	// Line 1083, Address: 0x1024088, Func Offset: 0x98
	// Line 1084, Address: 0x1024094, Func Offset: 0xa4
	// Line 1085, Address: 0x10240ac, Func Offset: 0xbc
	// Line 1086, Address: 0x10240f0, Func Offset: 0x100
	// Line 1087, Address: 0x1024130, Func Offset: 0x140
	// Line 1089, Address: 0x1024180, Func Offset: 0x190
	// Line 1090, Address: 0x1024194, Func Offset: 0x1a4
	// Line 1091, Address: 0x10241a4, Func Offset: 0x1b4
	// Line 1092, Address: 0x10241bc, Func Offset: 0x1cc
	// Line 1093, Address: 0x10241e0, Func Offset: 0x1f0
	// Line 1094, Address: 0x10241e8, Func Offset: 0x1f8
	// Line 1097, Address: 0x102420c, Func Offset: 0x21c
	// Line 1098, Address: 0x1024214, Func Offset: 0x224
	// Line 1100, Address: 0x102422c, Func Offset: 0x23c
	// Line 1101, Address: 0x1024244, Func Offset: 0x254
	// Line 1102, Address: 0x1024250, Func Offset: 0x260
	// Line 1103, Address: 0x1024278, Func Offset: 0x288
	// Line 1104, Address: 0x1024280, Func Offset: 0x290
	// Line 1105, Address: 0x10242a8, Func Offset: 0x2b8
	// Line 1107, Address: 0x10242b0, Func Offset: 0x2c0
	// Line 1108, Address: 0x10242b8, Func Offset: 0x2c8
	// Line 1109, Address: 0x10242c4, Func Offset: 0x2d4
	// Line 1110, Address: 0x10242cc, Func Offset: 0x2dc
	// Line 1111, Address: 0x10242f4, Func Offset: 0x304
	// Line 1114, Address: 0x10242fc, Func Offset: 0x30c
	// Line 1115, Address: 0x102430c, Func Offset: 0x31c
	// Line 1117, Address: 0x102431c, Func Offset: 0x32c
	// Line 1119, Address: 0x102432c, Func Offset: 0x33c
	// Line 1120, Address: 0x1024370, Func Offset: 0x380
	// Line 1121, Address: 0x1024384, Func Offset: 0x394
	// Line 1122, Address: 0x102438c, Func Offset: 0x39c
	// Line 1124, Address: 0x1024394, Func Offset: 0x3a4
	// Line 1125, Address: 0x10243d8, Func Offset: 0x3e8
	// Line 1126, Address: 0x10243ec, Func Offset: 0x3fc
	// Line 1132, Address: 0x10243f4, Func Offset: 0x404
	// Line 1135, Address: 0x102440c, Func Offset: 0x41c
	// Line 1136, Address: 0x1024420, Func Offset: 0x430
	// Line 1137, Address: 0x1024434, Func Offset: 0x444
	// Line 1138, Address: 0x1024440, Func Offset: 0x450
	// Line 1139, Address: 0x102444c, Func Offset: 0x45c
	// Line 1140, Address: 0x1024454, Func Offset: 0x464
	// Line 1141, Address: 0x1024460, Func Offset: 0x470
	// Line 1142, Address: 0x102446c, Func Offset: 0x47c
	// Line 1144, Address: 0x1024480, Func Offset: 0x490
	// Line 1147, Address: 0x102448c, Func Offset: 0x49c
	// Line 1148, Address: 0x10244a8, Func Offset: 0x4b8
	// Line 1149, Address: 0x10244b4, Func Offset: 0x4c4
	// Line 1151, Address: 0x10244c0, Func Offset: 0x4d0
	// Line 1152, Address: 0x10244d4, Func Offset: 0x4e4
	// Line 1154, Address: 0x10244d8, Func Offset: 0x4e8
	// Line 1155, Address: 0x10244e8, Func Offset: 0x4f8
	// Line 1156, Address: 0x10244fc, Func Offset: 0x50c
	// Line 1157, Address: 0x1024500, Func Offset: 0x510
	// Line 1158, Address: 0x1024510, Func Offset: 0x520
	// Line 1159, Address: 0x1024520, Func Offset: 0x530
	// Line 1161, Address: 0x1024530, Func Offset: 0x540
	// Line 1162, Address: 0x1024538, Func Offset: 0x548
	// Func End, Address: 0x102455c, Func Offset: 0x56c
}

// 
// Start address: 0x1024560
void ballwalk_l()
{
	short cal_speed;
	// Line 1166, Address: 0x1024560, Func Offset: 0
	// Line 1169, Address: 0x1024568, Func Offset: 0x8
	// Line 1171, Address: 0x1024588, Func Offset: 0x28
	// Line 1172, Address: 0x102459c, Func Offset: 0x3c
	// Line 1173, Address: 0x10245a8, Func Offset: 0x48
	// Line 1175, Address: 0x10245b0, Func Offset: 0x50
	// Line 1176, Address: 0x10245f4, Func Offset: 0x94
	// Line 1177, Address: 0x1024610, Func Offset: 0xb0
	// Line 1179, Address: 0x1024618, Func Offset: 0xb8
	// Func End, Address: 0x1024628, Func Offset: 0xc8
}

// 
// Start address: 0x1024630
void ballwalk_r()
{
	short cal_speed;
	// Line 1182, Address: 0x1024630, Func Offset: 0
	// Line 1185, Address: 0x1024638, Func Offset: 0x8
	// Line 1187, Address: 0x1024658, Func Offset: 0x28
	// Line 1188, Address: 0x102466c, Func Offset: 0x3c
	// Line 1189, Address: 0x1024678, Func Offset: 0x48
	// Line 1191, Address: 0x1024680, Func Offset: 0x50
	// Line 1192, Address: 0x10246c4, Func Offset: 0x94
	// Line 1193, Address: 0x10246e0, Func Offset: 0xb0
	// Line 1195, Address: 0x10246e8, Func Offset: 0xb8
	// Func End, Address: 0x10246f8, Func Offset: 0xc8
}

// 
// Start address: 0x1024700
void jumpmove()
{
	short cal_speed;
	short cmp_speed;
	// Line 1199, Address: 0x1024700, Func Offset: 0
	// Line 1207, Address: 0x102470c, Func Offset: 0xc
	// Line 1208, Address: 0x102471c, Func Offset: 0x1c
	// Line 1210, Address: 0x1024734, Func Offset: 0x34
	// Line 1211, Address: 0x102476c, Func Offset: 0x6c
	// Line 1214, Address: 0x102478c, Func Offset: 0x8c
	// Line 1219, Address: 0x10247a4, Func Offset: 0xa4
	// Line 1220, Address: 0x10247b4, Func Offset: 0xb4
	// Line 1221, Address: 0x10247cc, Func Offset: 0xcc
	// Line 1222, Address: 0x10247e0, Func Offset: 0xe0
	// Line 1223, Address: 0x1024810, Func Offset: 0x110
	// Line 1224, Address: 0x1024834, Func Offset: 0x134
	// Line 1227, Address: 0x1024858, Func Offset: 0x158
	// Line 1228, Address: 0x1024870, Func Offset: 0x170
	// Line 1229, Address: 0x1024884, Func Offset: 0x184
	// Line 1230, Address: 0x10248b4, Func Offset: 0x1b4
	// Line 1234, Address: 0x10248e8, Func Offset: 0x1e8
	// Line 1236, Address: 0x10248f0, Func Offset: 0x1f0
	// Line 1237, Address: 0x1024928, Func Offset: 0x228
	// Line 1238, Address: 0x1024958, Func Offset: 0x258
	// Line 1239, Address: 0x1024978, Func Offset: 0x278
	// Line 1240, Address: 0x1024988, Func Offset: 0x288
	// Line 1241, Address: 0x10249b0, Func Offset: 0x2b0
	// Line 1243, Address: 0x10249c0, Func Offset: 0x2c0
	// Line 1244, Address: 0x10249fc, Func Offset: 0x2fc
	// Line 1245, Address: 0x1024a10, Func Offset: 0x310
	// Line 1247, Address: 0x1024a18, Func Offset: 0x318
	// Line 1248, Address: 0x1024a54, Func Offset: 0x354
	// Line 1250, Address: 0x1024a68, Func Offset: 0x368
	// Line 1251, Address: 0x1024a70, Func Offset: 0x370
	// Func End, Address: 0x1024a84, Func Offset: 0x384
}

// 
// Start address: 0x1024a90
void hedcolchk()
{
	short tmp_d0;
	short tmp_d1;
	short tmp_d3;
	unsigned char cal_direc;
	// Line 1256, Address: 0x1024a90, Func Offset: 0
	// Line 1260, Address: 0x1024a9c, Func Offset: 0xc
	// Line 1261, Address: 0x1024abc, Func Offset: 0x2c
	// Line 1262, Address: 0x1024ac8, Func Offset: 0x38
	// Line 1264, Address: 0x1024af4, Func Offset: 0x64
	// Line 1265, Address: 0x1024b1c, Func Offset: 0x8c
	// Line 1268, Address: 0x1024b28, Func Offset: 0x98
	// Func End, Address: 0x1024b3c, Func Offset: 0xac
}

// 
// Start address: 0x1024b40
void limitchk()
{
	short cal_limit_l;
	short cal_limit_r;
	short position_wk;
	int cal_position;
	int cal_speed;
	// Line 1273, Address: 0x1024b40, Func Offset: 0
	// Line 1277, Address: 0x1024b5c, Func Offset: 0x1c
	// Line 1278, Address: 0x1024b64, Func Offset: 0x24
	// Line 1279, Address: 0x1024b74, Func Offset: 0x34
	// Line 1280, Address: 0x1024b9c, Func Offset: 0x5c
	// Line 1281, Address: 0x1024ba0, Func Offset: 0x60
	// Line 1282, Address: 0x1024bb4, Func Offset: 0x74
	// Line 1283, Address: 0x1024bd8, Func Offset: 0x98
	// Line 1284, Address: 0x1024bfc, Func Offset: 0xbc
	// Line 1285, Address: 0x1024c1c, Func Offset: 0xdc
	// Line 1287, Address: 0x1024c38, Func Offset: 0xf8
	// Line 1288, Address: 0x1024c40, Func Offset: 0x100
	// Line 1290, Address: 0x1024c68, Func Offset: 0x128
	// Line 1292, Address: 0x1024c84, Func Offset: 0x144
	// Line 1293, Address: 0x1024c8c, Func Offset: 0x14c
	// Line 1296, Address: 0x1024cb4, Func Offset: 0x174
	// Line 1298, Address: 0x1024ce4, Func Offset: 0x1a4
	// Line 1299, Address: 0x1024d18, Func Offset: 0x1d8
	// Line 1300, Address: 0x1024d24, Func Offset: 0x1e4
	// Func End, Address: 0x1024d48, Func Offset: 0x208
}

// 
// Start address: 0x1024d50
void ballchk()
{
	// Line 1305, Address: 0x1024d50, Func Offset: 0
	// Line 1306, Address: 0x1024d58, Func Offset: 0x8
	// Line 1308, Address: 0x1024d6c, Func Offset: 0x1c
	// Line 1309, Address: 0x1024da4, Func Offset: 0x54
	// Line 1310, Address: 0x1024ddc, Func Offset: 0x8c
	// Line 1311, Address: 0x1024de4, Func Offset: 0x94
	// Func End, Address: 0x1024df4, Func Offset: 0xa4
}

// 
// Start address: 0x1024e00
void ballset()
{
	// Line 1315, Address: 0x1024e00, Func Offset: 0
	// Line 1317, Address: 0x1024e18, Func Offset: 0x18
	// Line 1318, Address: 0x1024e2c, Func Offset: 0x2c
	// Line 1319, Address: 0x1024e40, Func Offset: 0x40
	// Line 1320, Address: 0x1024e4c, Func Offset: 0x4c
	// Line 1321, Address: 0x1024e58, Func Offset: 0x58
	// Line 1323, Address: 0x1024e60, Func Offset: 0x60
	// Line 1324, Address: 0x1024e6c, Func Offset: 0x6c
	// Line 1325, Address: 0x1024e78, Func Offset: 0x78
	// Line 1327, Address: 0x1024e8c, Func Offset: 0x8c
	// Line 1329, Address: 0x1024e9c, Func Offset: 0x9c
	// Line 1330, Address: 0x1024ea8, Func Offset: 0xa8
	// Line 1331, Address: 0x1024ecc, Func Offset: 0xcc
	// Func End, Address: 0x1024ed4, Func Offset: 0xd4
}

// 
// Start address: 0x1024ee0
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
	// Line 1336, Address: 0x1024ee0, Func Offset: 0
	// Line 1342, Address: 0x1024ef4, Func Offset: 0x14
	// Line 1343, Address: 0x1024ef8, Func Offset: 0x18
	// Line 1344, Address: 0x1024efc, Func Offset: 0x1c
	// Line 1346, Address: 0x1024f00, Func Offset: 0x20
	// Line 1347, Address: 0x1024f20, Func Offset: 0x40
	// Line 1349, Address: 0x1024f5c, Func Offset: 0x7c
	// Line 1350, Address: 0x1024f80, Func Offset: 0xa0
	// Line 1353, Address: 0x1024fb4, Func Offset: 0xd4
	// Line 1354, Address: 0x1024fd0, Func Offset: 0xf0
	// Line 1355, Address: 0x1024fd8, Func Offset: 0xf8
	// Line 1357, Address: 0x102500c, Func Offset: 0x12c
	// Line 1358, Address: 0x1025014, Func Offset: 0x134
	// Line 1359, Address: 0x1025034, Func Offset: 0x154
	// Line 1362, Address: 0x1025050, Func Offset: 0x170
	// Line 1363, Address: 0x1025064, Func Offset: 0x184
	// Line 1364, Address: 0x1025070, Func Offset: 0x190
	// Line 1366, Address: 0x102507c, Func Offset: 0x19c
	// Line 1367, Address: 0x1025084, Func Offset: 0x1a4
	// Line 1368, Address: 0x1025088, Func Offset: 0x1a8
	// Line 1369, Address: 0x10250a4, Func Offset: 0x1c4
	// Line 1370, Address: 0x10250ac, Func Offset: 0x1cc
	// Line 1371, Address: 0x10250b0, Func Offset: 0x1d0
	// Line 1372, Address: 0x10250cc, Func Offset: 0x1ec
	// Line 1373, Address: 0x10250e0, Func Offset: 0x200
	// Line 1374, Address: 0x10250f4, Func Offset: 0x214
	// Line 1376, Address: 0x10250fc, Func Offset: 0x21c
	// Line 1377, Address: 0x1025108, Func Offset: 0x228
	// Line 1379, Address: 0x1025110, Func Offset: 0x230
	// Line 1380, Address: 0x1025118, Func Offset: 0x238
	// Line 1382, Address: 0x1025124, Func Offset: 0x244
	// Line 1383, Address: 0x102513c, Func Offset: 0x25c
	// Line 1384, Address: 0x1025150, Func Offset: 0x270
	// Line 1386, Address: 0x102515c, Func Offset: 0x27c
	// Line 1387, Address: 0x1025170, Func Offset: 0x290
	// Line 1388, Address: 0x102517c, Func Offset: 0x29c
	// Line 1389, Address: 0x1025188, Func Offset: 0x2a8
	// Line 1390, Address: 0x1025190, Func Offset: 0x2b0
	// Line 1391, Address: 0x102519c, Func Offset: 0x2bc
	// Line 1392, Address: 0x10251a8, Func Offset: 0x2c8
	// Line 1394, Address: 0x10251bc, Func Offset: 0x2dc
	// Line 1395, Address: 0x10251d0, Func Offset: 0x2f0
	// Line 1396, Address: 0x10251dc, Func Offset: 0x2fc
	// Line 1397, Address: 0x10251e0, Func Offset: 0x300
	// Func End, Address: 0x10251fc, Func Offset: 0x31c
}

// 
// Start address: 0x1025200
void jumpchk2()
{
	short cal_speed;
	// Line 1400, Address: 0x1025200, Func Offset: 0
	// Line 1403, Address: 0x1025208, Func Offset: 0x8
	// Line 1404, Address: 0x102521c, Func Offset: 0x1c
	// Line 1405, Address: 0x1025228, Func Offset: 0x28
	// Line 1406, Address: 0x102524c, Func Offset: 0x4c
	// Line 1407, Address: 0x1025270, Func Offset: 0x70
	// Line 1408, Address: 0x1025288, Func Offset: 0x88
	// Line 1409, Address: 0x1025290, Func Offset: 0x90
	// Line 1414, Address: 0x1025298, Func Offset: 0x98
	// Func End, Address: 0x10252a8, Func Offset: 0xa8
}

// 
// Start address: 0x10252b0
void keispd()
{
	unsigned char cal_direc;
	int sin_data;
	short sin_tmp;
	short cos_tmp;
	// Line 1419, Address: 0x10252b0, Func Offset: 0
	// Line 1424, Address: 0x10252c0, Func Offset: 0x10
	// Line 1425, Address: 0x10252d4, Func Offset: 0x24
	// Line 1426, Address: 0x10252f0, Func Offset: 0x40
	// Line 1427, Address: 0x1025300, Func Offset: 0x50
	// Line 1429, Address: 0x102530c, Func Offset: 0x5c
	// Line 1430, Address: 0x1025328, Func Offset: 0x78
	// Line 1432, Address: 0x1025334, Func Offset: 0x84
	// Line 1433, Address: 0x1025338, Func Offset: 0x88
	// Line 1434, Address: 0x102533c, Func Offset: 0x8c
	// Line 1435, Address: 0x1025354, Func Offset: 0xa4
	// Line 1436, Address: 0x102536c, Func Offset: 0xbc
	// Line 1437, Address: 0x1025390, Func Offset: 0xe0
	// Line 1438, Address: 0x1025398, Func Offset: 0xe8
	// Line 1440, Address: 0x10253b4, Func Offset: 0x104
	// Func End, Address: 0x10253cc, Func Offset: 0x11c
}

// 
// Start address: 0x10253d0
void keispd2()
{
	unsigned char cal_direc;
	int sin_data;
	short sin_tmp;
	short cos_tmp;
	// Line 1443, Address: 0x10253d0, Func Offset: 0
	// Line 1448, Address: 0x10253e0, Func Offset: 0x10
	// Line 1449, Address: 0x10253f4, Func Offset: 0x24
	// Line 1450, Address: 0x1025410, Func Offset: 0x40
	// Line 1451, Address: 0x1025420, Func Offset: 0x50
	// Line 1453, Address: 0x102542c, Func Offset: 0x5c
	// Line 1454, Address: 0x1025448, Func Offset: 0x78
	// Line 1456, Address: 0x1025454, Func Offset: 0x84
	// Line 1457, Address: 0x1025460, Func Offset: 0x90
	// Line 1458, Address: 0x1025464, Func Offset: 0x94
	// Line 1459, Address: 0x102547c, Func Offset: 0xac
	// Line 1460, Address: 0x10254a0, Func Offset: 0xd0
	// Line 1461, Address: 0x10254bc, Func Offset: 0xec
	// Line 1462, Address: 0x10254c4, Func Offset: 0xf4
	// Line 1463, Address: 0x10254e8, Func Offset: 0x118
	// Line 1465, Address: 0x1025504, Func Offset: 0x134
	// Func End, Address: 0x102551c, Func Offset: 0x14c
}

// 
// Start address: 0x1025520
void fallchk()
{
	// Line 1471, Address: 0x1025520, Func Offset: 0
	// Line 1472, Address: 0x1025534, Func Offset: 0x14
	// Line 1473, Address: 0x1025548, Func Offset: 0x28
	// Line 1474, Address: 0x1025568, Func Offset: 0x48
	// Line 1475, Address: 0x10255a0, Func Offset: 0x80
	// Line 1476, Address: 0x10255a8, Func Offset: 0x88
	// Line 1477, Address: 0x10255b0, Func Offset: 0x90
	// Line 1478, Address: 0x10255c4, Func Offset: 0xa4
	// Line 1479, Address: 0x10255d0, Func Offset: 0xb0
	// Line 1480, Address: 0x10255d8, Func Offset: 0xb8
	// Line 1482, Address: 0x10255ec, Func Offset: 0xcc
	// Func End, Address: 0x10255f4, Func Offset: 0xd4
}

// 
// Start address: 0x1025600
void direcchg()
{
	char cal_direc;
	// Line 1487, Address: 0x1025600, Func Offset: 0
	// Line 1490, Address: 0x1025608, Func Offset: 0x8
	// Line 1491, Address: 0x1025620, Func Offset: 0x20
	// Line 1492, Address: 0x1025640, Func Offset: 0x40
	// Line 1493, Address: 0x1025650, Func Offset: 0x50
	// Line 1494, Address: 0x1025678, Func Offset: 0x78
	// Line 1495, Address: 0x1025680, Func Offset: 0x80
	// Line 1497, Address: 0x10256a8, Func Offset: 0xa8
	// Line 1498, Address: 0x10256b0, Func Offset: 0xb0
	// Func End, Address: 0x10256c0, Func Offset: 0xc0
}

// 
// Start address: 0x10256c0
void jumpcolchk()
{
	short chk_d0;
	short chk_d1;
	short tmp_d3;
	char chk_d2;
	char chk_d3;
	unsigned char cal_direc;
	// Line 1506, Address: 0x10256c0, Func Offset: 0
	// Line 1511, Address: 0x10256d4, Func Offset: 0x14
	// Line 1513, Address: 0x10256f4, Func Offset: 0x34
	// Line 1514, Address: 0x10256fc, Func Offset: 0x3c
	// Line 1515, Address: 0x1025704, Func Offset: 0x44
	// Line 1516, Address: 0x102570c, Func Offset: 0x4c
	// Line 1517, Address: 0x1025714, Func Offset: 0x54
	// Line 1518, Address: 0x102571c, Func Offset: 0x5c
	// Line 1521, Address: 0x1025754, Func Offset: 0x94
	// Line 1523, Address: 0x1025768, Func Offset: 0xa8
	// Line 1524, Address: 0x102577c, Func Offset: 0xbc
	// Line 1525, Address: 0x1025794, Func Offset: 0xd4
	// Line 1527, Address: 0x102579c, Func Offset: 0xdc
	// Line 1529, Address: 0x10257b0, Func Offset: 0xf0
	// Line 1530, Address: 0x10257c4, Func Offset: 0x104
	// Line 1531, Address: 0x10257dc, Func Offset: 0x11c
	// Line 1533, Address: 0x10257e4, Func Offset: 0x124
	// Line 1534, Address: 0x1025800, Func Offset: 0x140
	// Line 1536, Address: 0x1025814, Func Offset: 0x154
	// Line 1537, Address: 0x1025824, Func Offset: 0x164
	// Line 1538, Address: 0x1025838, Func Offset: 0x178
	// Line 1539, Address: 0x1025860, Func Offset: 0x1a0
	// Line 1541, Address: 0x10258b0, Func Offset: 0x1f0
	// Line 1542, Address: 0x10258c8, Func Offset: 0x208
	// Line 1543, Address: 0x10258d0, Func Offset: 0x210
	// Line 1544, Address: 0x10258d8, Func Offset: 0x218
	// Line 1545, Address: 0x10258e0, Func Offset: 0x220
	// Line 1547, Address: 0x10258f8, Func Offset: 0x238
	// Line 1548, Address: 0x1025900, Func Offset: 0x240
	// Line 1549, Address: 0x1025928, Func Offset: 0x268
	// Line 1550, Address: 0x1025930, Func Offset: 0x270
	// Line 1552, Address: 0x1025948, Func Offset: 0x288
	// Line 1553, Address: 0x1025950, Func Offset: 0x290
	// Line 1554, Address: 0x1025960, Func Offset: 0x2a0
	// Line 1556, Address: 0x1025968, Func Offset: 0x2a8
	// Line 1559, Address: 0x1025990, Func Offset: 0x2d0
	// Line 1560, Address: 0x10259a0, Func Offset: 0x2e0
	// Line 1561, Address: 0x10259d4, Func Offset: 0x314
	// Line 1565, Address: 0x10259dc, Func Offset: 0x31c
	// Line 1567, Address: 0x10259f0, Func Offset: 0x330
	// Line 1568, Address: 0x1025a04, Func Offset: 0x344
	// Line 1569, Address: 0x1025a1c, Func Offset: 0x35c
	// Line 1570, Address: 0x1025a24, Func Offset: 0x364
	// Line 1571, Address: 0x1025a34, Func Offset: 0x374
	// Line 1573, Address: 0x1025a3c, Func Offset: 0x37c
	// Line 1575, Address: 0x1025a58, Func Offset: 0x398
	// Line 1576, Address: 0x1025a6c, Func Offset: 0x3ac
	// Line 1577, Address: 0x1025a84, Func Offset: 0x3c4
	// Line 1578, Address: 0x1025aa4, Func Offset: 0x3e4
	// Line 1581, Address: 0x1025aac, Func Offset: 0x3ec
	// Line 1582, Address: 0x1025ac4, Func Offset: 0x404
	// Line 1583, Address: 0x1025ae0, Func Offset: 0x420
	// Line 1585, Address: 0x1025af4, Func Offset: 0x434
	// Line 1586, Address: 0x1025b08, Func Offset: 0x448
	// Line 1587, Address: 0x1025b20, Func Offset: 0x460
	// Line 1588, Address: 0x1025b28, Func Offset: 0x468
	// Line 1589, Address: 0x1025b30, Func Offset: 0x470
	// Line 1590, Address: 0x1025b38, Func Offset: 0x478
	// Line 1591, Address: 0x1025b40, Func Offset: 0x480
	// Line 1592, Address: 0x1025b50, Func Offset: 0x490
	// Line 1596, Address: 0x1025b58, Func Offset: 0x498
	// Line 1598, Address: 0x1025b6c, Func Offset: 0x4ac
	// Line 1599, Address: 0x1025b80, Func Offset: 0x4c0
	// Line 1600, Address: 0x1025b98, Func Offset: 0x4d8
	// Line 1602, Address: 0x1025ba0, Func Offset: 0x4e0
	// Line 1604, Address: 0x1025bb4, Func Offset: 0x4f4
	// Line 1605, Address: 0x1025bc8, Func Offset: 0x508
	// Line 1606, Address: 0x1025be0, Func Offset: 0x520
	// Line 1609, Address: 0x1025be8, Func Offset: 0x528
	// Line 1610, Address: 0x1025c04, Func Offset: 0x544
	// Line 1612, Address: 0x1025c18, Func Offset: 0x558
	// Line 1613, Address: 0x1025c2c, Func Offset: 0x56c
	// Line 1614, Address: 0x1025c44, Func Offset: 0x584
	// Line 1615, Address: 0x1025c5c, Func Offset: 0x59c
	// Line 1616, Address: 0x1025c64, Func Offset: 0x5a4
	// Line 1618, Address: 0x1025c6c, Func Offset: 0x5ac
	// Line 1619, Address: 0x1025c74, Func Offset: 0x5b4
	// Line 1620, Address: 0x1025c7c, Func Offset: 0x5bc
	// Line 1621, Address: 0x1025c8c, Func Offset: 0x5cc
	// Line 1622, Address: 0x1025cc0, Func Offset: 0x600
	// Line 1626, Address: 0x1025cc8, Func Offset: 0x608
	// Line 1628, Address: 0x1025cdc, Func Offset: 0x61c
	// Line 1629, Address: 0x1025cf0, Func Offset: 0x630
	// Line 1630, Address: 0x1025d08, Func Offset: 0x648
	// Line 1631, Address: 0x1025d10, Func Offset: 0x650
	// Line 1632, Address: 0x1025d20, Func Offset: 0x660
	// Line 1634, Address: 0x1025d28, Func Offset: 0x668
	// Line 1636, Address: 0x1025d44, Func Offset: 0x684
	// Line 1637, Address: 0x1025d58, Func Offset: 0x698
	// Line 1638, Address: 0x1025d70, Func Offset: 0x6b0
	// Line 1639, Address: 0x1025d90, Func Offset: 0x6d0
	// Line 1642, Address: 0x1025d98, Func Offset: 0x6d8
	// Line 1643, Address: 0x1025db0, Func Offset: 0x6f0
	// Line 1644, Address: 0x1025dcc, Func Offset: 0x70c
	// Line 1646, Address: 0x1025de0, Func Offset: 0x720
	// Line 1647, Address: 0x1025df4, Func Offset: 0x734
	// Line 1648, Address: 0x1025e0c, Func Offset: 0x74c
	// Line 1649, Address: 0x1025e14, Func Offset: 0x754
	// Line 1650, Address: 0x1025e1c, Func Offset: 0x75c
	// Line 1651, Address: 0x1025e24, Func Offset: 0x764
	// Line 1652, Address: 0x1025e2c, Func Offset: 0x76c
	// Line 1658, Address: 0x1025e3c, Func Offset: 0x77c
	// Func End, Address: 0x1025e58, Func Offset: 0x798
}

// 
// Start address: 0x1025e60
void jumpcolsub()
{
	// Line 1664, Address: 0x1025e60, Func Offset: 0
	// Line 1665, Address: 0x1025e74, Func Offset: 0x14
	// Line 1666, Address: 0x1025e8c, Func Offset: 0x2c
	// Line 1667, Address: 0x1025ea0, Func Offset: 0x40
	// Line 1668, Address: 0x1025eb4, Func Offset: 0x54
	// Line 1669, Address: 0x1025ec0, Func Offset: 0x60
	// Line 1670, Address: 0x1025ecc, Func Offset: 0x6c
	// Line 1671, Address: 0x1025ed4, Func Offset: 0x74
	// Line 1672, Address: 0x1025ee0, Func Offset: 0x80
	// Line 1673, Address: 0x1025eec, Func Offset: 0x8c
	// Line 1675, Address: 0x1025f00, Func Offset: 0xa0
	// Line 1678, Address: 0x1025f08, Func Offset: 0xa8
	// Line 1679, Address: 0x1025f10, Func Offset: 0xb0
	// Line 1680, Address: 0x1025f18, Func Offset: 0xb8
	// Func End, Address: 0x1025f20, Func Offset: 0xc0
}

// 
// Start address: 0x1025f20
void jumpcolsub0()
{
	// Line 1684, Address: 0x1025f20, Func Offset: 0
	// Line 1685, Address: 0x1025f34, Func Offset: 0x14
	// Line 1686, Address: 0x1025f3c, Func Offset: 0x1c
	// Line 1687, Address: 0x1025f44, Func Offset: 0x24
	// Func End, Address: 0x1025f4c, Func Offset: 0x2c
}

// 
// Start address: 0x1025f50
void play00damage()
{
	// Line 1691, Address: 0x1025f50, Func Offset: 0
	// Line 1692, Address: 0x1025f58, Func Offset: 0x8
	// Line 1693, Address: 0x1025f68, Func Offset: 0x18
	// Line 1694, Address: 0x1025f7c, Func Offset: 0x2c
	// Line 1695, Address: 0x1025fa8, Func Offset: 0x58
	// Line 1696, Address: 0x1025fb0, Func Offset: 0x60
	// Line 1697, Address: 0x1025fb8, Func Offset: 0x68
	// Line 1698, Address: 0x1025fc0, Func Offset: 0x70
	// Line 1699, Address: 0x1025fc8, Func Offset: 0x78
	// Line 1700, Address: 0x1025fd8, Func Offset: 0x88
	// Func End, Address: 0x1025fe8, Func Offset: 0x98
}

// 
// Start address: 0x1025ff0
void play00damage_sub()
{
	// Line 1703, Address: 0x1025ff0, Func Offset: 0
	// Line 1704, Address: 0x1025ff8, Func Offset: 0x8
	// Line 1705, Address: 0x1026028, Func Offset: 0x38
	// Line 1706, Address: 0x1026038, Func Offset: 0x48
	// Line 1708, Address: 0x1026040, Func Offset: 0x50
	// Line 1709, Address: 0x1026048, Func Offset: 0x58
	// Line 1710, Address: 0x1026060, Func Offset: 0x70
	// Line 1711, Address: 0x1026088, Func Offset: 0x98
	// Line 1712, Address: 0x1026090, Func Offset: 0xa0
	// Line 1713, Address: 0x10260a4, Func Offset: 0xb4
	// Line 1714, Address: 0x10260b0, Func Offset: 0xc0
	// Func End, Address: 0x10260c0, Func Offset: 0xd0
}

// 
// Start address: 0x10260c0
void play00die()
{
	// Line 1718, Address: 0x10260c0, Func Offset: 0
	// Line 1719, Address: 0x10260c8, Func Offset: 0x8
	// Line 1720, Address: 0x10260d0, Func Offset: 0x10
	// Line 1721, Address: 0x10260e0, Func Offset: 0x20
	// Line 1722, Address: 0x10260e8, Func Offset: 0x28
	// Line 1723, Address: 0x10260f0, Func Offset: 0x30
	// Line 1724, Address: 0x1026100, Func Offset: 0x40
	// Func End, Address: 0x1026110, Func Offset: 0x50
}

// 
// Start address: 0x1026110
void play00die_sub()
{
	_anon1* new_actwk;
	// Line 1727, Address: 0x1026110, Func Offset: 0
	// Line 1730, Address: 0x1026118, Func Offset: 0x8
	// Line 1731, Address: 0x1026148, Func Offset: 0x38
	// Line 1732, Address: 0x1026154, Func Offset: 0x44
	// Line 1733, Address: 0x1026168, Func Offset: 0x58
	// Line 1734, Address: 0x1026170, Func Offset: 0x60
	// Line 1735, Address: 0x1026184, Func Offset: 0x74
	// Line 1737, Address: 0x10261bc, Func Offset: 0xac
	// Line 1738, Address: 0x10261ec, Func Offset: 0xdc
	// Line 1739, Address: 0x10261f8, Func Offset: 0xe8
	// Line 1740, Address: 0x1026204, Func Offset: 0xf4
	// Line 1741, Address: 0x1026210, Func Offset: 0x100
	// Line 1742, Address: 0x1026224, Func Offset: 0x114
	// Line 1743, Address: 0x102622c, Func Offset: 0x11c
	// Line 1745, Address: 0x1026234, Func Offset: 0x124
	// Line 1746, Address: 0x1026240, Func Offset: 0x130
	// Func End, Address: 0x1026250, Func Offset: 0x140
}

// 
// Start address: 0x1026250
void play00erase()
{
	// Line 1750, Address: 0x1026250, Func Offset: 0
	// Line 1751, Address: 0x1026258, Func Offset: 0x8
	// Line 1752, Address: 0x102626c, Func Offset: 0x1c
	// Line 1753, Address: 0x1026280, Func Offset: 0x30
	// Line 1754, Address: 0x1026294, Func Offset: 0x44
	// Line 1759, Address: 0x10262a0, Func Offset: 0x50
	// Line 1760, Address: 0x10262a8, Func Offset: 0x58
	// Line 1761, Address: 0x10262d4, Func Offset: 0x84
	// Line 1764, Address: 0x1026314, Func Offset: 0xc4
	// Line 1765, Address: 0x1026328, Func Offset: 0xd8
	// Line 1766, Address: 0x1026340, Func Offset: 0xf0
	// Line 1767, Address: 0x1026360, Func Offset: 0x110
	// Line 1768, Address: 0x1026368, Func Offset: 0x118
	// Line 1771, Address: 0x1026370, Func Offset: 0x120
	// Line 1773, Address: 0x102637c, Func Offset: 0x12c
	// Func End, Address: 0x102638c, Func Offset: 0x13c
}

// 
// Start address: 0x1026390
void loopchk()
{
	// Line 1783, Address: 0x1026390, Func Offset: 0
	// Func End, Address: 0x1026398, Func Offset: 0x8
}

// 
// Start address: 0x10263a0
void st7_x()
{
	short y_position;
	// Line 1787, Address: 0x10263a0, Func Offset: 0
	// Line 1791, Address: 0x10263a8, Func Offset: 0x8
	// Line 1792, Address: 0x10263c0, Func Offset: 0x20
	// Line 1793, Address: 0x10263e4, Func Offset: 0x44
	// Line 1795, Address: 0x1026404, Func Offset: 0x64
	// Line 1796, Address: 0x1026434, Func Offset: 0x94
	// Line 1797, Address: 0x102645c, Func Offset: 0xbc
	// Line 1798, Address: 0x1026464, Func Offset: 0xc4
	// Line 1799, Address: 0x1026494, Func Offset: 0xf4
	// Line 1801, Address: 0x10264bc, Func Offset: 0x11c
	// Func End, Address: 0x10264cc, Func Offset: 0x12c
}

// 
// Start address: 0x10264d0
void patchgmain()
{
	char pat_index;
	unsigned char* pat_pointer;
	// Line 1807, Address: 0x10264d0, Func Offset: 0
	// Line 1811, Address: 0x10264e0, Func Offset: 0x10
	// Line 1812, Address: 0x1026508, Func Offset: 0x38
	// Line 1813, Address: 0x1026518, Func Offset: 0x48
	// Line 1816, Address: 0x102652c, Func Offset: 0x5c
	// Line 1817, Address: 0x1026544, Func Offset: 0x74
	// Line 1818, Address: 0x1026560, Func Offset: 0x90
	// Line 1820, Address: 0x1026588, Func Offset: 0xb8
	// Line 1821, Address: 0x10265b8, Func Offset: 0xe8
	// Line 1822, Address: 0x10265e8, Func Offset: 0x118
	// Line 1823, Address: 0x10265f4, Func Offset: 0x124
	// Line 1824, Address: 0x1026600, Func Offset: 0x130
	// Func End, Address: 0x1026618, Func Offset: 0x148
}

// 
// Start address: 0x1026620
void patchgmain2(unsigned char* pat_pointer)
{
	unsigned char pat_no;
	// Line 1827, Address: 0x1026620, Func Offset: 0
	// Line 1830, Address: 0x102662c, Func Offset: 0xc
	// Line 1831, Address: 0x102665c, Func Offset: 0x3c
	// Line 1832, Address: 0x1026664, Func Offset: 0x44
	// Line 1833, Address: 0x1026678, Func Offset: 0x58
	// Line 1836, Address: 0x1026680, Func Offset: 0x60
	// Line 1838, Address: 0x10266b0, Func Offset: 0x90
	// Line 1839, Address: 0x10266bc, Func Offset: 0x9c
	// Line 1840, Address: 0x10266cc, Func Offset: 0xac
	// Line 1842, Address: 0x10266d4, Func Offset: 0xb4
	// Line 1844, Address: 0x102671c, Func Offset: 0xfc
	// Line 1846, Address: 0x102675c, Func Offset: 0x13c
	// Line 1848, Address: 0x1026764, Func Offset: 0x144
	// Line 1854, Address: 0x1026788, Func Offset: 0x168
	// Func End, Address: 0x1026798, Func Offset: 0x178
}

// 
// Start address: 0x10267a0
void playrunchg(unsigned char pat_no)
{
	unsigned char direction;
	unsigned char cal_data;
	unsigned char chara_data;
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1858, Address: 0x10267a0, Func Offset: 0
	// Line 1863, Address: 0x10267c0, Func Offset: 0x20
	// Line 1864, Address: 0x10267f0, Func Offset: 0x50
	// Line 1865, Address: 0x1026818, Func Offset: 0x78
	// Line 1867, Address: 0x102683c, Func Offset: 0x9c
	// Line 1868, Address: 0x1026840, Func Offset: 0xa0
	// Line 1869, Address: 0x102684c, Func Offset: 0xac
	// Line 1870, Address: 0x1026864, Func Offset: 0xc4
	// Line 1871, Address: 0x1026884, Func Offset: 0xe4
	// Line 1872, Address: 0x10268ac, Func Offset: 0x10c
	// Line 1873, Address: 0x10268b4, Func Offset: 0x114
	// Line 1875, Address: 0x10268d4, Func Offset: 0x134
	// Line 1876, Address: 0x10268e8, Func Offset: 0x148
	// Line 1877, Address: 0x10268f0, Func Offset: 0x150
	// Line 1878, Address: 0x1026904, Func Offset: 0x164
	// Line 1880, Address: 0x1026930, Func Offset: 0x190
	// Line 1882, Address: 0x102696c, Func Offset: 0x1cc
	// Line 1883, Address: 0x1026984, Func Offset: 0x1e4
	// Line 1884, Address: 0x1026994, Func Offset: 0x1f4
	// Line 1885, Address: 0x102699c, Func Offset: 0x1fc
	// Line 1886, Address: 0x10269a4, Func Offset: 0x204
	// Line 1887, Address: 0x10269ac, Func Offset: 0x20c
	// Line 1888, Address: 0x10269b4, Func Offset: 0x214
	// Line 1889, Address: 0x10269bc, Func Offset: 0x21c
	// Line 1890, Address: 0x10269c4, Func Offset: 0x224
	// Line 1891, Address: 0x10269e8, Func Offset: 0x248
	// Line 1893, Address: 0x1026a0c, Func Offset: 0x26c
	// Line 1894, Address: 0x1026a14, Func Offset: 0x274
	// Line 1898, Address: 0x1026a40, Func Offset: 0x2a0
	// Line 1899, Address: 0x1026a60, Func Offset: 0x2c0
	// Line 1900, Address: 0x1026a74, Func Offset: 0x2d4
	// Line 1901, Address: 0x1026a94, Func Offset: 0x2f4
	// Line 1902, Address: 0x1026aa0, Func Offset: 0x300
	// Line 1903, Address: 0x1026aac, Func Offset: 0x30c
	// Line 1904, Address: 0x1026ad0, Func Offset: 0x330
	// Func End, Address: 0x1026af4, Func Offset: 0x354
}

// 
// Start address: 0x1026b00
void playrunchg2(unsigned char pat_no)
{
	unsigned char direction;
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1907, Address: 0x1026b00, Func Offset: 0
	// Line 1912, Address: 0x1026b18, Func Offset: 0x18
	// Line 1913, Address: 0x1026b40, Func Offset: 0x40
	// Line 1914, Address: 0x1026b7c, Func Offset: 0x7c
	// Line 1916, Address: 0x1026ba0, Func Offset: 0xa0
	// Line 1917, Address: 0x1026bb8, Func Offset: 0xb8
	// Line 1918, Address: 0x1026bc8, Func Offset: 0xc8
	// Line 1919, Address: 0x1026bdc, Func Offset: 0xdc
	// Line 1920, Address: 0x1026bf8, Func Offset: 0xf8
	// Line 1921, Address: 0x1026c00, Func Offset: 0x100
	// Line 1922, Address: 0x1026c08, Func Offset: 0x108
	// Line 1923, Address: 0x1026c2c, Func Offset: 0x12c
	// Line 1927, Address: 0x1026c34, Func Offset: 0x134
	// Line 1928, Address: 0x1026c54, Func Offset: 0x154
	// Line 1929, Address: 0x1026c68, Func Offset: 0x168
	// Line 1930, Address: 0x1026c88, Func Offset: 0x188
	// Line 1931, Address: 0x1026c94, Func Offset: 0x194
	// Line 1932, Address: 0x1026ca8, Func Offset: 0x1a8
	// Line 1933, Address: 0x1026cd0, Func Offset: 0x1d0
	// Line 1934, Address: 0x1026cdc, Func Offset: 0x1dc
	// Func End, Address: 0x1026cf8, Func Offset: 0x1f8
}

// 
// Start address: 0x1026d00
void playrunchg3(unsigned char pat_no)
{
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1937, Address: 0x1026d00, Func Offset: 0
	// Line 1941, Address: 0x1026d14, Func Offset: 0x14
	// Line 1942, Address: 0x1026d38, Func Offset: 0x38
	// Line 1943, Address: 0x1026d74, Func Offset: 0x74
	// Line 1944, Address: 0x1026d80, Func Offset: 0x80
	// Line 1945, Address: 0x1026d94, Func Offset: 0x94
	// Line 1946, Address: 0x1026da0, Func Offset: 0xa0
	// Line 1947, Address: 0x1026dac, Func Offset: 0xac
	// Line 1948, Address: 0x1026dd0, Func Offset: 0xd0
	// Line 1949, Address: 0x1026dd8, Func Offset: 0xd8
	// Line 1950, Address: 0x1026dec, Func Offset: 0xec
	// Line 1951, Address: 0x1026e14, Func Offset: 0x114
	// Line 1952, Address: 0x1026e20, Func Offset: 0x120
	// Func End, Address: 0x1026e38, Func Offset: 0x138
}

// 
// Start address: 0x1026e40
void playetc_chg()
{
	char pat_index;
	unsigned char* pat_pointer;
	// Line 1955, Address: 0x1026e40, Func Offset: 0
	// Line 1959, Address: 0x1026e50, Func Offset: 0x10
	// Line 1960, Address: 0x1026e68, Func Offset: 0x28
	// Line 1962, Address: 0x1026e84, Func Offset: 0x44
	// Line 1963, Address: 0x1026ea4, Func Offset: 0x64
	// Line 1964, Address: 0x1026eac, Func Offset: 0x6c
	// Func End, Address: 0x1026ec4, Func Offset: 0x84
}

// 
// Start address: 0x1026ed0
void little_runchg()
{
	unsigned char direction;
	unsigned char* pat_pointer;
	short cal_speed;
	// Line 1968, Address: 0x1026ed0, Func Offset: 0
	// Line 1973, Address: 0x1026ee4, Func Offset: 0x14
	// Line 1974, Address: 0x1026ef0, Func Offset: 0x20
	// Line 1975, Address: 0x1026f1c, Func Offset: 0x4c
	// Line 1977, Address: 0x1026f24, Func Offset: 0x54
	// Line 1978, Address: 0x1026f38, Func Offset: 0x68
	// Line 1979, Address: 0x1026f60, Func Offset: 0x90
	// Line 1980, Address: 0x1026f7c, Func Offset: 0xac
	// Line 1981, Address: 0x1026f90, Func Offset: 0xc0
	// Line 1982, Address: 0x1026f9c, Func Offset: 0xcc
	// Line 1983, Address: 0x1026fa8, Func Offset: 0xd8
	// Line 1984, Address: 0x1026fb4, Func Offset: 0xe4
	// Line 1987, Address: 0x1026fbc, Func Offset: 0xec
	// Line 1988, Address: 0x1026ff8, Func Offset: 0x128
	// Line 1989, Address: 0x102701c, Func Offset: 0x14c
	// Line 1990, Address: 0x1027024, Func Offset: 0x154
	// Line 1991, Address: 0x1027044, Func Offset: 0x174
	// Line 1992, Address: 0x1027058, Func Offset: 0x188
	// Line 1993, Address: 0x1027078, Func Offset: 0x1a8
	// Line 1994, Address: 0x1027084, Func Offset: 0x1b4
	// Line 1995, Address: 0x1027090, Func Offset: 0x1c0
	// Func End, Address: 0x10270ac, Func Offset: 0x1dc
}

// 
// Start address: 0x10270b0
char little_patchg(char pat_index)
{
	char tbl[80];
	// Line 1999, Address: 0x10270b0, Func Offset: 0
	// Line 2000, Address: 0x10270b8, Func Offset: 0x8
	// Line 2012, Address: 0x10270ec, Func Offset: 0x3c
	// Line 2013, Address: 0x102711c, Func Offset: 0x6c
	// Line 2014, Address: 0x1027120, Func Offset: 0x70
	// Func End, Address: 0x102712c, Func Offset: 0x7c
}

// 
// Start address: 0x1027130
void playwrt()
{
	// Line 2041, Address: 0x1027130, Func Offset: 0
	// Func End, Address: 0x1027138, Func Offset: 0x8
}

// 
// Start address: 0x1027140
unsigned char frip_spd(int* cal_jump, unsigned char* cal_direc)
{
	short cal_x;
	char ride_no;
	// Line 2047, Address: 0x1027140, Func Offset: 0
	// Line 2051, Address: 0x1027158, Func Offset: 0x18
	// Line 2052, Address: 0x1027168, Func Offset: 0x28
	// Line 2054, Address: 0x10271a8, Func Offset: 0x68
	// Line 2055, Address: 0x10271d0, Func Offset: 0x90
	// Line 2059, Address: 0x1027278, Func Offset: 0x138
	// Line 2061, Address: 0x10272fc, Func Offset: 0x1bc
	// Line 2063, Address: 0x1027350, Func Offset: 0x210
	// Line 2064, Address: 0x102738c, Func Offset: 0x24c
	// Line 2065, Address: 0x1027390, Func Offset: 0x250
	// Func End, Address: 0x10273a8, Func Offset: 0x268
}

