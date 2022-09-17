typedef struct tagPOINT;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef struct _anon6;
typedef union _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef union _anon12;
typedef struct _anon13;
typedef struct _anon14;

typedef int(*type_15)(int, int, int, int, int);

typedef _anon14 type_0[20];
typedef _anon0* type_1[8];
typedef short type_2[6];
typedef char type_3[7];
typedef _anon14 type_4[0];
typedef char type_5[7];
typedef unsigned char type_6[4];
typedef short type_7[2];
typedef short type_8[2][8];
typedef unsigned short type_9[4];
typedef unsigned short type_10[4][1024];
typedef unsigned char type_11[2];
typedef unsigned char type_12[64];
typedef unsigned char type_13[64][8];
typedef unsigned char type_14[22];
typedef unsigned char type_16[64];
typedef unsigned char type_17[64][8];
typedef unsigned char type_18[33];
typedef short type_19[256];
typedef unsigned char type_20[766];
typedef _anon0* type_21[8];
typedef _anon2 type_22[128];
typedef short type_23[2];
typedef short type_24[2][2];

struct tagPOINT
{
	int x;
	int y;
};

union _anon0
{
	int l;
	_anon5 w;
	_anon6 b;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon14 spra[20];
		_anon14 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon0 xposi;
	_anon0 yposi;
	_anon7 xspeed;
	_anon7 yspeed;
	_anon7 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon7 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon7 direc;
	_anon7 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

struct _anon3
{
	short plring;
	int plscore;
	_anon7 stageno;
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
	_anon7 demoflag;
	_anon7 hintposi;
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

struct _anon4
{
	unsigned char* CGdata;
	unsigned char* Blkdata;
	unsigned char* Mapdata;
	unsigned char iniCGno1;
	unsigned char stCGno1;
	unsigned char iniCGno2;
	unsigned char stCGno2;
	unsigned char colorno1;
	unsigned char colorno2;
	unsigned char soundNo;
};

struct _anon5
{
	short l;
	short h;
};

struct _anon6
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon7
{
	short w;
	_anon8 b;
};

struct _anon8
{
	char l;
	char h;
};

union _anon9
{
	unsigned int l;
	_anon10 w;
	_anon11 b;
};

struct _anon10
{
	unsigned short l;
	unsigned short h;
};

struct _anon11
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon12
{
	unsigned short w;
	_anon13 b;
};

struct _anon13
{
	unsigned char l;
	unsigned char h;
};

struct _anon14
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char z81awrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon2 actwk[128];
unsigned char main_play;
short scr_dir_tbl[6];
short scra_hline;
short scra_vline;
unsigned char scra_v_count;
unsigned char scra_h_count;
short scra_h_keep;
short scralim_down;
short scralim_n_down;
short scralim_up;
short scralim_n_up;
short scralim_right;
short scralim_n_right;
short scralim_left;
short scralim_n_left;
short scrar_no;
_anon7 scr_timer;
_anon12 scr_die;
_anon12 zone_flag;
unsigned char scrh_flag;
unsigned char scrv_flag;
short endplpositbl[2][8];
short playpositbl[2][2];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon0 scra_v_posit;
_anon0 scra_h_posit;
unsigned char plflag;
_anon3* lpKeepWork;
_anon0 scrb_h_posit;
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
short hscrollwork[256];
_anon0* lphscrollbuff;
_anon12 scrflagz;
_anon12 scrflagc;
_anon12 scrflagb;
_anon0 vscroll;
short scra_hz;
_anon12 scrflaga;
_anon7 scroll_start;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
short scra_vz;
unsigned char limmoveflag;
_anon12 scrflagaw;
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon12 scrflagbw;
unsigned char mapwkb[64][8];
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon4 mapinittbl;

_anon2* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z82bline0(short** ppHscw);
void z82bline1(short** ppHscw);
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk);
void scrollb_v(short yPos);
void scrollb_h(int xoffs, int flgbit);
void scrollc_h(int xoffs, int flgbit);
void scrollz_h(int xoffs, int flgbit);
void scroll_h();
void scrh_move();
void scroll_v();
void sv_move_main(short yPos);
void sv_move_main2(short yPos);
void sv_move_sub(short yPos);
void sv_move_sub2();
void sv_move_minus(short speed);
void scrv_up_ch(_anon0 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon0 lSpd);
void scrv_move(_anon0 lSpd);
void scrollwrt();
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase);
void scrollwrtc();
void scrollwrtz();
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt);
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt);
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt);
void blockwrt(int VramBase, tagPOINT* pTilePoint, int BlkIndex);
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex);
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex);
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex);
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo);
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs);
int block_chk(unsigned short xOffs, unsigned short yOffs);
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint);
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint);
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint);
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint);
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint);
void mapwrt();
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase);
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6);
void mapwrt_z81a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();
void divdevset();
void enecginit();

// 
// Start address: 0x1029ed0
_anon2* main_chk()
{
	// Line 151, Address: 0x1029ed0, Func Offset: 0
	// Line 152, Address: 0x1029ee4, Func Offset: 0x14
	// Line 154, Address: 0x1029ef4, Func Offset: 0x24
	// Line 156, Address: 0x1029efc, Func Offset: 0x2c
	// Func End, Address: 0x1029f04, Func Offset: 0x34
}

// 
// Start address: 0x1029f10
void scr_set()
{
	short* pScrTbl;
	// Line 194, Address: 0x1029f10, Func Offset: 0
	// Line 197, Address: 0x1029f1c, Func Offset: 0xc
	// Line 198, Address: 0x1029f30, Func Offset: 0x20
	// Line 199, Address: 0x1029f44, Func Offset: 0x34
	// Line 201, Address: 0x1029f4c, Func Offset: 0x3c
	// Line 202, Address: 0x1029f54, Func Offset: 0x44
	// Line 203, Address: 0x1029f60, Func Offset: 0x50
	// Line 204, Address: 0x1029f64, Func Offset: 0x54
	// Line 205, Address: 0x1029f78, Func Offset: 0x68
	// Line 206, Address: 0x1029f7c, Func Offset: 0x6c
	// Line 207, Address: 0x1029f90, Func Offset: 0x80
	// Line 208, Address: 0x1029f94, Func Offset: 0x84
	// Line 209, Address: 0x1029fa8, Func Offset: 0x98
	// Line 210, Address: 0x1029fac, Func Offset: 0x9c
	// Line 211, Address: 0x1029fc0, Func Offset: 0xb0
	// Line 212, Address: 0x1029fe0, Func Offset: 0xd0
	// Line 213, Address: 0x1029fe4, Func Offset: 0xd4
	// Line 214, Address: 0x1029ff0, Func Offset: 0xe0
	// Line 216, Address: 0x1029ffc, Func Offset: 0xec
	// Line 217, Address: 0x102a008, Func Offset: 0xf8
	// Line 219, Address: 0x102a014, Func Offset: 0x104
	// Line 220, Address: 0x102a01c, Func Offset: 0x10c
	// Func End, Address: 0x102a030, Func Offset: 0x120
}

// 
// Start address: 0x102a030
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 271, Address: 0x102a030, Func Offset: 0
	// Line 275, Address: 0x102a044, Func Offset: 0x14
	// Line 276, Address: 0x102a058, Func Offset: 0x28
	// Line 277, Address: 0x102a060, Func Offset: 0x30
	// Line 278, Address: 0x102a074, Func Offset: 0x44
	// Line 279, Address: 0x102a088, Func Offset: 0x58
	// Line 280, Address: 0x102a090, Func Offset: 0x60
	// Line 281, Address: 0x102a0a0, Func Offset: 0x70
	// Line 282, Address: 0x102a0a8, Func Offset: 0x78
	// Line 284, Address: 0x102a0b8, Func Offset: 0x88
	// Line 285, Address: 0x102a0d0, Func Offset: 0xa0
	// Line 286, Address: 0x102a0e0, Func Offset: 0xb0
	// Line 287, Address: 0x102a0e8, Func Offset: 0xb8
	// Line 289, Address: 0x102a0ec, Func Offset: 0xbc
	// Line 291, Address: 0x102a0f4, Func Offset: 0xc4
	// Line 293, Address: 0x102a0fc, Func Offset: 0xcc
	// Line 294, Address: 0x102a110, Func Offset: 0xe0
	// Line 298, Address: 0x102a124, Func Offset: 0xf4
	// Line 299, Address: 0x102a138, Func Offset: 0x108
	// Line 300, Address: 0x102a144, Func Offset: 0x114
	// Line 301, Address: 0x102a14c, Func Offset: 0x11c
	// Line 305, Address: 0x102a150, Func Offset: 0x120
	// Line 306, Address: 0x102a174, Func Offset: 0x144
	// Line 310, Address: 0x102a184, Func Offset: 0x154
	// Line 312, Address: 0x102a18c, Func Offset: 0x15c
	// Line 313, Address: 0x102a1a0, Func Offset: 0x170
	// Line 314, Address: 0x102a1ac, Func Offset: 0x17c
	// Line 315, Address: 0x102a1b4, Func Offset: 0x184
	// Line 319, Address: 0x102a1b8, Func Offset: 0x188
	// Line 320, Address: 0x102a1dc, Func Offset: 0x1ac
	// Line 324, Address: 0x102a1ec, Func Offset: 0x1bc
	// Line 326, Address: 0x102a1f4, Func Offset: 0x1c4
	// Line 329, Address: 0x102a204, Func Offset: 0x1d4
	// Line 330, Address: 0x102a214, Func Offset: 0x1e4
	// Line 331, Address: 0x102a224, Func Offset: 0x1f4
	// Line 332, Address: 0x102a234, Func Offset: 0x204
	// Line 333, Address: 0x102a244, Func Offset: 0x214
	// Func End, Address: 0x102a260, Func Offset: 0x230
}

// 
// Start address: 0x102a260
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 354, Address: 0x102a260, Func Offset: 0
	// Line 357, Address: 0x102a26c, Func Offset: 0xc
	// Line 358, Address: 0x102a274, Func Offset: 0x14
	// Line 360, Address: 0x102a278, Func Offset: 0x18
	// Line 361, Address: 0x102a284, Func Offset: 0x24
	// Line 362, Address: 0x102a290, Func Offset: 0x30
	// Line 363, Address: 0x102a29c, Func Offset: 0x3c
	// Line 365, Address: 0x102a2a8, Func Offset: 0x48
	// Line 366, Address: 0x102a2c4, Func Offset: 0x64
	// Line 368, Address: 0x102a2d0, Func Offset: 0x70
	// Line 369, Address: 0x102a2ec, Func Offset: 0x8c
	// Line 371, Address: 0x102a2f8, Func Offset: 0x98
	// Line 372, Address: 0x102a314, Func Offset: 0xb4
	// Line 373, Address: 0x102a338, Func Offset: 0xd8
	// Func End, Address: 0x102a344, Func Offset: 0xe4
}

// 
// Start address: 0x102a350
void scroll()
{
	_anon0 ldwk;
	_anon0* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 389, Address: 0x102a350, Func Offset: 0
	// Line 401, Address: 0x102a36c, Func Offset: 0x1c
	// Line 406, Address: 0x102a37c, Func Offset: 0x2c
	// Line 408, Address: 0x102a3a8, Func Offset: 0x58
	// Line 410, Address: 0x102a3b0, Func Offset: 0x60
	// Line 411, Address: 0x102a3b8, Func Offset: 0x68
	// Line 413, Address: 0x102a3c0, Func Offset: 0x70
	// Line 414, Address: 0x102a3d0, Func Offset: 0x80
	// Line 417, Address: 0x102a3e0, Func Offset: 0x90
	// Line 418, Address: 0x102a3f4, Func Offset: 0xa4
	// Line 420, Address: 0x102a404, Func Offset: 0xb4
	// Line 421, Address: 0x102a418, Func Offset: 0xc8
	// Line 423, Address: 0x102a428, Func Offset: 0xd8
	// Line 424, Address: 0x102a444, Func Offset: 0xf4
	// Line 426, Address: 0x102a454, Func Offset: 0x104
	// Line 429, Address: 0x102a468, Func Offset: 0x118
	// Line 431, Address: 0x102a478, Func Offset: 0x128
	// Line 433, Address: 0x102a4a0, Func Offset: 0x150
	// Line 434, Address: 0x102a4d8, Func Offset: 0x188
	// Line 436, Address: 0x102a4ec, Func Offset: 0x19c
	// Line 438, Address: 0x102a4f8, Func Offset: 0x1a8
	// Line 439, Address: 0x102a518, Func Offset: 0x1c8
	// Line 441, Address: 0x102a524, Func Offset: 0x1d4
	// Line 442, Address: 0x102a538, Func Offset: 0x1e8
	// Line 444, Address: 0x102a548, Func Offset: 0x1f8
	// Line 446, Address: 0x102a554, Func Offset: 0x204
	// Line 447, Address: 0x102a574, Func Offset: 0x224
	// Line 449, Address: 0x102a580, Func Offset: 0x230
	// Line 450, Address: 0x102a594, Func Offset: 0x244
	// Line 452, Address: 0x102a5a4, Func Offset: 0x254
	// Line 454, Address: 0x102a5b0, Func Offset: 0x260
	// Line 455, Address: 0x102a5d0, Func Offset: 0x280
	// Line 457, Address: 0x102a5dc, Func Offset: 0x28c
	// Line 458, Address: 0x102a5f0, Func Offset: 0x2a0
	// Line 460, Address: 0x102a600, Func Offset: 0x2b0
	// Line 461, Address: 0x102a60c, Func Offset: 0x2bc
	// Line 462, Address: 0x102a63c, Func Offset: 0x2ec
	// Line 463, Address: 0x102a66c, Func Offset: 0x31c
	// Line 464, Address: 0x102a688, Func Offset: 0x338
	// Func End, Address: 0x102a6ac, Func Offset: 0x35c
}

// 
// Start address: 0x102a6b0
void z82bline0(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon0 ldwk;
	short wk;
	char z82bscrtbl0[7];
	// Line 469, Address: 0x102a6b0, Func Offset: 0
	// Line 478, Address: 0x102a6c8, Func Offset: 0x18
	// Line 479, Address: 0x102a6ec, Func Offset: 0x3c
	// Line 481, Address: 0x102a70c, Func Offset: 0x5c
	// Line 483, Address: 0x102a718, Func Offset: 0x68
	// Line 485, Address: 0x102a724, Func Offset: 0x74
	// Line 487, Address: 0x102a744, Func Offset: 0x94
	// Line 489, Address: 0x102a764, Func Offset: 0xb4
	// Line 490, Address: 0x102a770, Func Offset: 0xc0
	// Line 491, Address: 0x102a784, Func Offset: 0xd4
	// Line 493, Address: 0x102a790, Func Offset: 0xe0
	// Line 494, Address: 0x102a7b4, Func Offset: 0x104
	// Line 495, Address: 0x102a7c0, Func Offset: 0x110
	// Line 496, Address: 0x102a7e4, Func Offset: 0x134
	// Line 497, Address: 0x102a7f0, Func Offset: 0x140
	// Func End, Address: 0x102a80c, Func Offset: 0x15c
}

// 
// Start address: 0x102a810
void z82bline1(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon0 ldwk;
	short wk;
	char z82bscrtbl1[7];
	// Line 502, Address: 0x102a810, Func Offset: 0
	// Line 511, Address: 0x102a828, Func Offset: 0x18
	// Line 512, Address: 0x102a84c, Func Offset: 0x3c
	// Line 514, Address: 0x102a86c, Func Offset: 0x5c
	// Line 515, Address: 0x102a878, Func Offset: 0x68
	// Line 517, Address: 0x102a88c, Func Offset: 0x7c
	// Line 519, Address: 0x102a898, Func Offset: 0x88
	// Line 521, Address: 0x102a8b8, Func Offset: 0xa8
	// Line 523, Address: 0x102a8d8, Func Offset: 0xc8
	// Line 524, Address: 0x102a8ec, Func Offset: 0xdc
	// Line 525, Address: 0x102a8f8, Func Offset: 0xe8
	// Line 527, Address: 0x102a904, Func Offset: 0xf4
	// Line 528, Address: 0x102a928, Func Offset: 0x118
	// Line 529, Address: 0x102a934, Func Offset: 0x124
	// Line 530, Address: 0x102a958, Func Offset: 0x148
	// Line 531, Address: 0x102a964, Func Offset: 0x154
	// Line 532, Address: 0x102a978, Func Offset: 0x168
	// Func End, Address: 0x102a994, Func Offset: 0x184
}

// 
// Start address: 0x102a9a0
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 553, Address: 0x102a9a0, Func Offset: 0
	// Line 557, Address: 0x102a9bc, Func Offset: 0x1c
	// Line 558, Address: 0x102a9c0, Func Offset: 0x20
	// Line 560, Address: 0x102a9e0, Func Offset: 0x40
	// Line 561, Address: 0x102a9fc, Func Offset: 0x5c
	// Line 562, Address: 0x102aa08, Func Offset: 0x68
	// Line 564, Address: 0x102aa14, Func Offset: 0x74
	// Line 565, Address: 0x102aa1c, Func Offset: 0x7c
	// Line 566, Address: 0x102aa2c, Func Offset: 0x8c
	// Line 567, Address: 0x102aa50, Func Offset: 0xb0
	// Line 568, Address: 0x102aa70, Func Offset: 0xd0
	// Func End, Address: 0x102aa84, Func Offset: 0xe4
}

// 
// Start address: 0x102aa90
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 674, Address: 0x102aa90, Func Offset: 0
	// Line 677, Address: 0x102aaa0, Func Offset: 0x10
	// Line 678, Address: 0x102aab0, Func Offset: 0x20
	// Line 679, Address: 0x102aabc, Func Offset: 0x2c
	// Line 681, Address: 0x102aaf4, Func Offset: 0x64
	// Line 682, Address: 0x102aafc, Func Offset: 0x6c
	// Line 683, Address: 0x102ab10, Func Offset: 0x80
	// Line 684, Address: 0x102ab30, Func Offset: 0xa0
	// Line 685, Address: 0x102ab44, Func Offset: 0xb4
	// Line 687, Address: 0x102ab4c, Func Offset: 0xbc
	// Line 692, Address: 0x102ab60, Func Offset: 0xd0
	// Func End, Address: 0x102ab74, Func Offset: 0xe4
}

// 
// Start address: 0x102ab80
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 710, Address: 0x102ab80, Func Offset: 0
	// Line 714, Address: 0x102ab94, Func Offset: 0x14
	// Line 715, Address: 0x102ab9c, Func Offset: 0x1c
	// Line 716, Address: 0x102aba4, Func Offset: 0x24
	// Line 717, Address: 0x102abac, Func Offset: 0x2c
	// Line 718, Address: 0x102abb0, Func Offset: 0x30
	// Line 719, Address: 0x102abd4, Func Offset: 0x54
	// Line 720, Address: 0x102abe0, Func Offset: 0x60
	// Line 722, Address: 0x102abfc, Func Offset: 0x7c
	// Line 723, Address: 0x102ac08, Func Offset: 0x88
	// Line 724, Address: 0x102ac1c, Func Offset: 0x9c
	// Line 725, Address: 0x102ac28, Func Offset: 0xa8
	// Line 726, Address: 0x102ac4c, Func Offset: 0xcc
	// Line 728, Address: 0x102ac54, Func Offset: 0xd4
	// Line 733, Address: 0x102ac7c, Func Offset: 0xfc
	// Func End, Address: 0x102ac90, Func Offset: 0x110
}

// 
// Start address: 0x102ac90
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 751, Address: 0x102ac90, Func Offset: 0
	// Line 755, Address: 0x102aca4, Func Offset: 0x14
	// Line 756, Address: 0x102acac, Func Offset: 0x1c
	// Line 757, Address: 0x102acb4, Func Offset: 0x24
	// Line 758, Address: 0x102acbc, Func Offset: 0x2c
	// Line 759, Address: 0x102acc0, Func Offset: 0x30
	// Line 760, Address: 0x102ace4, Func Offset: 0x54
	// Line 761, Address: 0x102acf0, Func Offset: 0x60
	// Line 763, Address: 0x102ad0c, Func Offset: 0x7c
	// Line 764, Address: 0x102ad18, Func Offset: 0x88
	// Line 765, Address: 0x102ad2c, Func Offset: 0x9c
	// Line 766, Address: 0x102ad38, Func Offset: 0xa8
	// Line 767, Address: 0x102ad5c, Func Offset: 0xcc
	// Line 769, Address: 0x102ad64, Func Offset: 0xd4
	// Line 774, Address: 0x102ad8c, Func Offset: 0xfc
	// Func End, Address: 0x102ada0, Func Offset: 0x110
}

// 
// Start address: 0x102ada0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 792, Address: 0x102ada0, Func Offset: 0
	// Line 796, Address: 0x102adb4, Func Offset: 0x14
	// Line 797, Address: 0x102adbc, Func Offset: 0x1c
	// Line 798, Address: 0x102adc4, Func Offset: 0x24
	// Line 799, Address: 0x102adcc, Func Offset: 0x2c
	// Line 800, Address: 0x102add0, Func Offset: 0x30
	// Line 801, Address: 0x102adf4, Func Offset: 0x54
	// Line 802, Address: 0x102ae00, Func Offset: 0x60
	// Line 804, Address: 0x102ae1c, Func Offset: 0x7c
	// Line 805, Address: 0x102ae28, Func Offset: 0x88
	// Line 806, Address: 0x102ae3c, Func Offset: 0x9c
	// Line 807, Address: 0x102ae48, Func Offset: 0xa8
	// Line 808, Address: 0x102ae6c, Func Offset: 0xcc
	// Line 810, Address: 0x102ae74, Func Offset: 0xd4
	// Line 815, Address: 0x102ae9c, Func Offset: 0xfc
	// Func End, Address: 0x102aeb0, Func Offset: 0x110
}

// 
// Start address: 0x102aeb0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 830, Address: 0x102aeb0, Func Offset: 0
	// Line 834, Address: 0x102aec0, Func Offset: 0x10
	// Line 836, Address: 0x102aed0, Func Offset: 0x20
	// Line 837, Address: 0x102aed8, Func Offset: 0x28
	// Line 838, Address: 0x102af0c, Func Offset: 0x5c
	// Line 839, Address: 0x102af14, Func Offset: 0x64
	// Line 840, Address: 0x102af28, Func Offset: 0x78
	// Line 841, Address: 0x102af4c, Func Offset: 0x9c
	// Line 842, Address: 0x102af60, Func Offset: 0xb0
	// Line 843, Address: 0x102af68, Func Offset: 0xb8
	// Line 848, Address: 0x102af7c, Func Offset: 0xcc
	// Func End, Address: 0x102af94, Func Offset: 0xe4
}

// 
// Start address: 0x102afa0
void scrh_move()
{
	short xwk;
	// Line 865, Address: 0x102afa0, Func Offset: 0
	// Line 868, Address: 0x102afa8, Func Offset: 0x8
	// Line 869, Address: 0x102aff0, Func Offset: 0x50
	// Line 871, Address: 0x102b000, Func Offset: 0x60
	// Line 872, Address: 0x102b008, Func Offset: 0x68
	// Line 873, Address: 0x102b010, Func Offset: 0x70
	// Line 875, Address: 0x102b020, Func Offset: 0x80
	// Line 876, Address: 0x102b034, Func Offset: 0x94
	// Line 880, Address: 0x102b040, Func Offset: 0xa0
	// Line 881, Address: 0x102b054, Func Offset: 0xb4
	// Line 882, Address: 0x102b078, Func Offset: 0xd8
	// Line 884, Address: 0x102b088, Func Offset: 0xe8
	// Line 886, Address: 0x102b090, Func Offset: 0xf0
	// Line 887, Address: 0x102b0a4, Func Offset: 0x104
	// Line 891, Address: 0x102b0b0, Func Offset: 0x110
	// Line 892, Address: 0x102b0c4, Func Offset: 0x124
	// Line 893, Address: 0x102b0e8, Func Offset: 0x148
	// Line 898, Address: 0x102b0f8, Func Offset: 0x158
	// Line 899, Address: 0x102b128, Func Offset: 0x188
	// Line 900, Address: 0x102b130, Func Offset: 0x190
	// Func End, Address: 0x102b140, Func Offset: 0x1a0
}

// 
// Start address: 0x102b140
void scroll_v()
{
	short ywk;
	// Line 915, Address: 0x102b140, Func Offset: 0
	// Line 918, Address: 0x102b14c, Func Offset: 0xc
	// Line 919, Address: 0x102b180, Func Offset: 0x40
	// Line 920, Address: 0x102b198, Func Offset: 0x58
	// Line 924, Address: 0x102b1a4, Func Offset: 0x64
	// Line 925, Address: 0x102b1bc, Func Offset: 0x7c
	// Line 926, Address: 0x102b1c8, Func Offset: 0x88
	// Line 927, Address: 0x102b1ec, Func Offset: 0xac
	// Line 928, Address: 0x102b200, Func Offset: 0xc0
	// Line 929, Address: 0x102b20c, Func Offset: 0xcc
	// Line 930, Address: 0x102b214, Func Offset: 0xd4
	// Line 931, Address: 0x102b23c, Func Offset: 0xfc
	// Line 932, Address: 0x102b264, Func Offset: 0x124
	// Line 933, Address: 0x102b270, Func Offset: 0x130
	// Line 935, Address: 0x102b278, Func Offset: 0x138
	// Line 936, Address: 0x102b2a0, Func Offset: 0x160
	// Line 937, Address: 0x102b2b0, Func Offset: 0x170
	// Line 938, Address: 0x102b2b8, Func Offset: 0x178
	// Line 943, Address: 0x102b2c0, Func Offset: 0x180
	// Line 944, Address: 0x102b2ec, Func Offset: 0x1ac
	// Line 945, Address: 0x102b2f8, Func Offset: 0x1b8
	// Line 946, Address: 0x102b300, Func Offset: 0x1c0
	// Line 947, Address: 0x102b310, Func Offset: 0x1d0
	// Line 948, Address: 0x102b318, Func Offset: 0x1d8
	// Line 953, Address: 0x102b320, Func Offset: 0x1e0
	// Line 954, Address: 0x102b328, Func Offset: 0x1e8
	// Func End, Address: 0x102b33c, Func Offset: 0x1fc
}

// 
// Start address: 0x102b340
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 968, Address: 0x102b340, Func Offset: 0
	// Line 971, Address: 0x102b350, Func Offset: 0x10
	// Line 972, Address: 0x102b36c, Func Offset: 0x2c
	// Line 973, Address: 0x102b384, Func Offset: 0x44
	// Line 974, Address: 0x102b3a8, Func Offset: 0x68
	// Line 975, Address: 0x102b3b0, Func Offset: 0x70
	// Line 979, Address: 0x102b3c0, Func Offset: 0x80
	// Line 980, Address: 0x102b3d4, Func Offset: 0x94
	// Line 981, Address: 0x102b3e0, Func Offset: 0xa0
	// Line 984, Address: 0x102b3e8, Func Offset: 0xa8
	// Line 985, Address: 0x102b400, Func Offset: 0xc0
	// Line 986, Address: 0x102b40c, Func Offset: 0xcc
	// Line 987, Address: 0x102b42c, Func Offset: 0xec
	// Line 988, Address: 0x102b438, Func Offset: 0xf8
	// Line 989, Address: 0x102b440, Func Offset: 0x100
	// Line 991, Address: 0x102b44c, Func Offset: 0x10c
	// Line 993, Address: 0x102b454, Func Offset: 0x114
	// Line 994, Address: 0x102b46c, Func Offset: 0x12c
	// Line 995, Address: 0x102b478, Func Offset: 0x138
	// Line 996, Address: 0x102b498, Func Offset: 0x158
	// Line 997, Address: 0x102b4a4, Func Offset: 0x164
	// Line 998, Address: 0x102b4ac, Func Offset: 0x16c
	// Line 1001, Address: 0x102b4b8, Func Offset: 0x178
	// Func End, Address: 0x102b4cc, Func Offset: 0x18c
}

// 
// Start address: 0x102b4d0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1015, Address: 0x102b4d0, Func Offset: 0
	// Line 1018, Address: 0x102b4e0, Func Offset: 0x10
	// Line 1020, Address: 0x102b4ec, Func Offset: 0x1c
	// Line 1021, Address: 0x102b504, Func Offset: 0x34
	// Line 1022, Address: 0x102b510, Func Offset: 0x40
	// Line 1023, Address: 0x102b530, Func Offset: 0x60
	// Line 1024, Address: 0x102b53c, Func Offset: 0x6c
	// Line 1025, Address: 0x102b544, Func Offset: 0x74
	// Line 1027, Address: 0x102b550, Func Offset: 0x80
	// Func End, Address: 0x102b564, Func Offset: 0x94
}

// 
// Start address: 0x102b570
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 1042, Address: 0x102b570, Func Offset: 0
	// Line 1045, Address: 0x102b57c, Func Offset: 0xc
	// Line 1046, Address: 0x102b580, Func Offset: 0x10
	// Line 1047, Address: 0x102b5ac, Func Offset: 0x3c
	// Line 1048, Address: 0x102b5c0, Func Offset: 0x50
	// Line 1049, Address: 0x102b5cc, Func Offset: 0x5c
	// Line 1050, Address: 0x102b5d4, Func Offset: 0x64
	// Line 1052, Address: 0x102b5e0, Func Offset: 0x70
	// Func End, Address: 0x102b5f0, Func Offset: 0x80
}

// 
// Start address: 0x102b5f0
void sv_move_sub2()
{
	// Line 1056, Address: 0x102b5f0, Func Offset: 0
	// Line 1057, Address: 0x102b5f8, Func Offset: 0x8
	// Line 1059, Address: 0x102b600, Func Offset: 0x10
	// Line 1060, Address: 0x102b60c, Func Offset: 0x1c
	// Func End, Address: 0x102b61c, Func Offset: 0x2c
}

// 
// Start address: 0x102b620
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	// Line 1074, Address: 0x102b620, Func Offset: 0
	// Line 1077, Address: 0x102b62c, Func Offset: 0xc
	// Line 1078, Address: 0x102b650, Func Offset: 0x30
	// Line 1079, Address: 0x102b674, Func Offset: 0x54
	// Line 1080, Address: 0x102b680, Func Offset: 0x60
	// Func End, Address: 0x102b690, Func Offset: 0x70
}

// 
// Start address: 0x102b690
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1095, Address: 0x102b690, Func Offset: 0
	// Line 1096, Address: 0x102b69c, Func Offset: 0xc
	// Line 1097, Address: 0x102b6c4, Func Offset: 0x34
	// Line 1099, Address: 0x102b6dc, Func Offset: 0x4c
	// Line 1100, Address: 0x102b6e8, Func Offset: 0x58
	// Line 1101, Address: 0x102b6f0, Func Offset: 0x60
	// Line 1102, Address: 0x102b6fc, Func Offset: 0x6c
	// Line 1103, Address: 0x102b710, Func Offset: 0x80
	// Line 1104, Address: 0x102b724, Func Offset: 0x94
	// Line 1108, Address: 0x102b738, Func Offset: 0xa8
	// Line 1109, Address: 0x102b744, Func Offset: 0xb4
	// Func End, Address: 0x102b754, Func Offset: 0xc4
}

// 
// Start address: 0x102b760
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	// Line 1123, Address: 0x102b760, Func Offset: 0
	// Line 1126, Address: 0x102b76c, Func Offset: 0xc
	// Line 1127, Address: 0x102b78c, Func Offset: 0x2c
	// Line 1128, Address: 0x102b7b0, Func Offset: 0x50
	// Line 1129, Address: 0x102b7bc, Func Offset: 0x5c
	// Func End, Address: 0x102b7cc, Func Offset: 0x6c
}

// 
// Start address: 0x102b7d0
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1144, Address: 0x102b7d0, Func Offset: 0
	// Line 1145, Address: 0x102b7dc, Func Offset: 0xc
	// Line 1146, Address: 0x102b804, Func Offset: 0x34
	// Line 1148, Address: 0x102b81c, Func Offset: 0x4c
	// Line 1149, Address: 0x102b828, Func Offset: 0x58
	// Line 1150, Address: 0x102b830, Func Offset: 0x60
	// Line 1151, Address: 0x102b83c, Func Offset: 0x6c
	// Line 1152, Address: 0x102b850, Func Offset: 0x80
	// Line 1153, Address: 0x102b864, Func Offset: 0x94
	// Line 1157, Address: 0x102b878, Func Offset: 0xa8
	// Line 1158, Address: 0x102b884, Func Offset: 0xb4
	// Func End, Address: 0x102b894, Func Offset: 0xc4
}

// 
// Start address: 0x102b8a0
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon9 spdwk;
	// Line 1175, Address: 0x102b8a0, Func Offset: 0
	// Line 1179, Address: 0x102b8b0, Func Offset: 0x10
	// Line 1180, Address: 0x102b8c0, Func Offset: 0x20
	// Line 1181, Address: 0x102b8e4, Func Offset: 0x44
	// Line 1182, Address: 0x102b8f8, Func Offset: 0x58
	// Line 1183, Address: 0x102b910, Func Offset: 0x70
	// Line 1185, Address: 0x102b91c, Func Offset: 0x7c
	// Line 1187, Address: 0x102b928, Func Offset: 0x88
	// Line 1188, Address: 0x102b964, Func Offset: 0xc4
	// Line 1189, Address: 0x102b96c, Func Offset: 0xcc
	// Line 1190, Address: 0x102b980, Func Offset: 0xe0
	// Line 1191, Address: 0x102b9ac, Func Offset: 0x10c
	// Line 1192, Address: 0x102b9bc, Func Offset: 0x11c
	// Line 1193, Address: 0x102b9d0, Func Offset: 0x130
	// Line 1194, Address: 0x102b9d8, Func Offset: 0x138
	// Line 1199, Address: 0x102b9ec, Func Offset: 0x14c
	// Func End, Address: 0x102ba00, Func Offset: 0x160
}

// 
// Start address: 0x102ba00
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon0 lD4;
	unsigned short wD5;
	// Line 1217, Address: 0x102ba00, Func Offset: 0
	// Line 1226, Address: 0x102ba20, Func Offset: 0x20
	// Line 1227, Address: 0x102ba24, Func Offset: 0x24
	// Line 1228, Address: 0x102ba30, Func Offset: 0x30
	// Line 1229, Address: 0x102ba3c, Func Offset: 0x3c
	// Line 1230, Address: 0x102ba44, Func Offset: 0x44
	// Line 1231, Address: 0x102ba4c, Func Offset: 0x4c
	// Line 1233, Address: 0x102ba60, Func Offset: 0x60
	// Line 1234, Address: 0x102ba64, Func Offset: 0x64
	// Line 1235, Address: 0x102ba70, Func Offset: 0x70
	// Line 1236, Address: 0x102ba7c, Func Offset: 0x7c
	// Line 1237, Address: 0x102ba84, Func Offset: 0x84
	// Line 1239, Address: 0x102ba8c, Func Offset: 0x8c
	// Line 1240, Address: 0x102ba98, Func Offset: 0x98
	// Line 1241, Address: 0x102baac, Func Offset: 0xac
	// Line 1243, Address: 0x102bab8, Func Offset: 0xb8
	// Line 1244, Address: 0x102bac0, Func Offset: 0xc0
	// Line 1246, Address: 0x102bac8, Func Offset: 0xc8
	// Line 1248, Address: 0x102bae8, Func Offset: 0xe8
	// Line 1254, Address: 0x102bb14, Func Offset: 0x114
	// Line 1255, Address: 0x102bb28, Func Offset: 0x128
	// Line 1257, Address: 0x102bb34, Func Offset: 0x134
	// Line 1258, Address: 0x102bb3c, Func Offset: 0x13c
	// Line 1259, Address: 0x102bb44, Func Offset: 0x144
	// Line 1261, Address: 0x102bb64, Func Offset: 0x164
	// Line 1267, Address: 0x102bb90, Func Offset: 0x190
	// Line 1268, Address: 0x102bba4, Func Offset: 0x1a4
	// Line 1270, Address: 0x102bbb0, Func Offset: 0x1b0
	// Line 1271, Address: 0x102bbb8, Func Offset: 0x1b8
	// Line 1272, Address: 0x102bbc0, Func Offset: 0x1c0
	// Line 1274, Address: 0x102bbe0, Func Offset: 0x1e0
	// Line 1280, Address: 0x102bc0c, Func Offset: 0x20c
	// Line 1281, Address: 0x102bc20, Func Offset: 0x220
	// Line 1283, Address: 0x102bc2c, Func Offset: 0x22c
	// Line 1284, Address: 0x102bc34, Func Offset: 0x234
	// Line 1285, Address: 0x102bc3c, Func Offset: 0x23c
	// Line 1287, Address: 0x102bc5c, Func Offset: 0x25c
	// Line 1296, Address: 0x102bc88, Func Offset: 0x288
	// Func End, Address: 0x102bcb0, Func Offset: 0x2b0
}

// 
// Start address: 0x102bcb0
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon0 lD4;
	int WrtTblCnt;
	unsigned short wD0;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1313, Address: 0x102bcb0, Func Offset: 0
	// Line 1324, Address: 0x102bcdc, Func Offset: 0x2c
	// Line 1326, Address: 0x102bce4, Func Offset: 0x34
	// Line 1327, Address: 0x102bcfc, Func Offset: 0x4c
	// Line 1328, Address: 0x102bd10, Func Offset: 0x60
	// Line 1330, Address: 0x102bd18, Func Offset: 0x68
	// Line 1332, Address: 0x102bd2c, Func Offset: 0x7c
	// Line 1333, Address: 0x102bd44, Func Offset: 0x94
	// Line 1334, Address: 0x102bd58, Func Offset: 0xa8
	// Line 1335, Address: 0x102bd60, Func Offset: 0xb0
	// Line 1337, Address: 0x102bd68, Func Offset: 0xb8
	// Line 1338, Address: 0x102bd7c, Func Offset: 0xcc
	// Line 1343, Address: 0x102bd84, Func Offset: 0xd4
	// Line 1344, Address: 0x102bdd4, Func Offset: 0x124
	// Line 1345, Address: 0x102bddc, Func Offset: 0x12c
	// Line 1351, Address: 0x102bdfc, Func Offset: 0x14c
	// Line 1352, Address: 0x102be1c, Func Offset: 0x16c
	// Line 1353, Address: 0x102be40, Func Offset: 0x190
	// Line 1354, Address: 0x102be4c, Func Offset: 0x19c
	// Line 1355, Address: 0x102be54, Func Offset: 0x1a4
	// Line 1357, Address: 0x102be74, Func Offset: 0x1c4
	// Line 1361, Address: 0x102bea0, Func Offset: 0x1f0
	// Line 1364, Address: 0x102bea8, Func Offset: 0x1f8
	// Line 1365, Address: 0x102beac, Func Offset: 0x1fc
	// Line 1369, Address: 0x102becc, Func Offset: 0x21c
	// Line 1376, Address: 0x102bef8, Func Offset: 0x248
	// Line 1383, Address: 0x102bf0c, Func Offset: 0x25c
	// Line 1384, Address: 0x102bf14, Func Offset: 0x264
	// Line 1385, Address: 0x102bf1c, Func Offset: 0x26c
	// Line 1386, Address: 0x102bf34, Func Offset: 0x284
	// Line 1387, Address: 0x102bf54, Func Offset: 0x2a4
	// Line 1391, Address: 0x102bf5c, Func Offset: 0x2ac
	// Line 1393, Address: 0x102bf8c, Func Offset: 0x2dc
	// Line 1394, Address: 0x102bf98, Func Offset: 0x2e8
	// Line 1398, Address: 0x102bfa8, Func Offset: 0x2f8
	// Line 1399, Address: 0x102bfb4, Func Offset: 0x304
	// Line 1400, Address: 0x102bfd4, Func Offset: 0x324
	// Line 1401, Address: 0x102c00c, Func Offset: 0x35c
	// Line 1402, Address: 0x102c02c, Func Offset: 0x37c
	// Line 1404, Address: 0x102c050, Func Offset: 0x3a0
	// Line 1407, Address: 0x102c074, Func Offset: 0x3c4
	// Line 1409, Address: 0x102c094, Func Offset: 0x3e4
	// Line 1411, Address: 0x102c0a8, Func Offset: 0x3f8
	// Line 1412, Address: 0x102c0b4, Func Offset: 0x404
	// Line 1413, Address: 0x102c0c4, Func Offset: 0x414
	// Line 1415, Address: 0x102c0cc, Func Offset: 0x41c
	// Func End, Address: 0x102c0f4, Func Offset: 0x444
}

// 
// Start address: 0x102c100
void scrollwrtc()
{
	// Line 1421, Address: 0x102c100, Func Offset: 0
	// Func End, Address: 0x102c108, Func Offset: 0x8
}

// 
// Start address: 0x102c110
void scrollwrtz()
{
	// Line 1426, Address: 0x102c110, Func Offset: 0
	// Func End, Address: 0x102c118, Func Offset: 0x8
}

// 
// Start address: 0x102c120
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1444, Address: 0x102c120, Func Offset: 0
	// Line 1457, Address: 0x102c148, Func Offset: 0x28
	// Line 1460, Address: 0x102c168, Func Offset: 0x48
	// Line 1461, Address: 0x102c17c, Func Offset: 0x5c
	// Line 1462, Address: 0x102c190, Func Offset: 0x70
	// Line 1463, Address: 0x102c1a4, Func Offset: 0x84
	// Line 1465, Address: 0x102c1b8, Func Offset: 0x98
	// Line 1466, Address: 0x102c1c4, Func Offset: 0xa4
	// Line 1467, Address: 0x102c1d8, Func Offset: 0xb8
	// Func End, Address: 0x102c1e8, Func Offset: 0xc8
}

// 
// Start address: 0x102c1f0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1471, Address: 0x102c1f0, Func Offset: 0
	// Line 1475, Address: 0x102c218, Func Offset: 0x28
	// Line 1478, Address: 0x102c238, Func Offset: 0x48
	// Line 1479, Address: 0x102c24c, Func Offset: 0x5c
	// Line 1480, Address: 0x102c260, Func Offset: 0x70
	// Line 1481, Address: 0x102c274, Func Offset: 0x84
	// Line 1483, Address: 0x102c288, Func Offset: 0x98
	// Line 1484, Address: 0x102c294, Func Offset: 0xa4
	// Line 1485, Address: 0x102c2a8, Func Offset: 0xb8
	// Func End, Address: 0x102c2b8, Func Offset: 0xc8
}

// 
// Start address: 0x102c2c0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1505, Address: 0x102c2c0, Func Offset: 0
	// Line 1509, Address: 0x102c2e8, Func Offset: 0x28
	// Line 1512, Address: 0x102c308, Func Offset: 0x48
	// Line 1513, Address: 0x102c31c, Func Offset: 0x5c
	// Line 1514, Address: 0x102c32c, Func Offset: 0x6c
	// Line 1515, Address: 0x102c340, Func Offset: 0x80
	// Line 1517, Address: 0x102c350, Func Offset: 0x90
	// Line 1518, Address: 0x102c35c, Func Offset: 0x9c
	// Line 1519, Address: 0x102c370, Func Offset: 0xb0
	// Func End, Address: 0x102c380, Func Offset: 0xc0
}

// 
// Start address: 0x102c380
void blockwrt(int VramBase, tagPOINT* pTilePoint, int BlkIndex)
{
	int base;
	int frip;
	int p0;
	int p1;
	int p2;
	int p3;
	int x;
	int y;
	// Line 1538, Address: 0x102c380, Func Offset: 0
	// Line 1544, Address: 0x102c3b4, Func Offset: 0x34
	// Line 1546, Address: 0x102c3c4, Func Offset: 0x44
	// Line 1547, Address: 0x102c3c8, Func Offset: 0x48
	// Line 1548, Address: 0x102c3d0, Func Offset: 0x50
	// Line 1550, Address: 0x102c3e0, Func Offset: 0x60
	// Line 1552, Address: 0x102c3e4, Func Offset: 0x64
	// Line 1553, Address: 0x102c3ec, Func Offset: 0x6c
	// Line 1556, Address: 0x102c3f4, Func Offset: 0x74
	// Line 1557, Address: 0x102c3fc, Func Offset: 0x7c
	// Line 1558, Address: 0x102c408, Func Offset: 0x88
	// Line 1560, Address: 0x102c414, Func Offset: 0x94
	// Line 1561, Address: 0x102c41c, Func Offset: 0x9c
	// Line 1562, Address: 0x102c424, Func Offset: 0xa4
	// Line 1563, Address: 0x102c42c, Func Offset: 0xac
	// Line 1565, Address: 0x102c438, Func Offset: 0xb8
	// Line 1566, Address: 0x102c440, Func Offset: 0xc0
	// Line 1567, Address: 0x102c448, Func Offset: 0xc8
	// Line 1568, Address: 0x102c450, Func Offset: 0xd0
	// Line 1570, Address: 0x102c45c, Func Offset: 0xdc
	// Line 1571, Address: 0x102c464, Func Offset: 0xe4
	// Line 1572, Address: 0x102c46c, Func Offset: 0xec
	// Line 1575, Address: 0x102c474, Func Offset: 0xf4
	// Line 1576, Address: 0x102c47c, Func Offset: 0xfc
	// Line 1579, Address: 0x102c484, Func Offset: 0x104
	// Line 1580, Address: 0x102c4c8, Func Offset: 0x148
	// Line 1581, Address: 0x102c50c, Func Offset: 0x18c
	// Line 1582, Address: 0x102c550, Func Offset: 0x1d0
	// Line 1584, Address: 0x102c594, Func Offset: 0x214
	// Func End, Address: 0x102c5c4, Func Offset: 0x244
}

// 
// Start address: 0x102c5d0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1602, Address: 0x102c5d0, Func Offset: 0
	// Line 1603, Address: 0x102c5f0, Func Offset: 0x20
	// Line 1604, Address: 0x102c610, Func Offset: 0x40
	// Func End, Address: 0x102c620, Func Offset: 0x50
}

// 
// Start address: 0x102c620
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1606, Address: 0x102c620, Func Offset: 0
	// Line 1607, Address: 0x102c640, Func Offset: 0x20
	// Line 1608, Address: 0x102c644, Func Offset: 0x24
	// Line 1609, Address: 0x102c664, Func Offset: 0x44
	// Func End, Address: 0x102c674, Func Offset: 0x54
}

// 
// Start address: 0x102c680
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1616, Address: 0x102c680, Func Offset: 0
	// Line 1622, Address: 0x102c6b0, Func Offset: 0x30
	// Line 1623, Address: 0x102c6c0, Func Offset: 0x40
	// Line 1629, Address: 0x102c6d0, Func Offset: 0x50
	// Line 1630, Address: 0x102c6ec, Func Offset: 0x6c
	// Line 1631, Address: 0x102c6f0, Func Offset: 0x70
	// Line 1632, Address: 0x102c70c, Func Offset: 0x8c
	// Line 1633, Address: 0x102c710, Func Offset: 0x90
	// Line 1634, Address: 0x102c730, Func Offset: 0xb0
	// Line 1635, Address: 0x102c738, Func Offset: 0xb8
	// Line 1636, Address: 0x102c758, Func Offset: 0xd8
	// Line 1637, Address: 0x102c760, Func Offset: 0xe0
	// Line 1638, Address: 0x102c7a8, Func Offset: 0x128
	// Line 1640, Address: 0x102c7b4, Func Offset: 0x134
	// Line 1642, Address: 0x102c7d0, Func Offset: 0x150
	// Line 1647, Address: 0x102c7d8, Func Offset: 0x158
	// Line 1648, Address: 0x102c7e4, Func Offset: 0x164
	// Line 1651, Address: 0x102c7f0, Func Offset: 0x170
	// Line 1652, Address: 0x102c7f8, Func Offset: 0x178
	// Line 1653, Address: 0x102c818, Func Offset: 0x198
	// Line 1654, Address: 0x102c834, Func Offset: 0x1b4
	// Line 1655, Address: 0x102c83c, Func Offset: 0x1bc
	// Line 1656, Address: 0x102c85c, Func Offset: 0x1dc
	// Line 1658, Address: 0x102c878, Func Offset: 0x1f8
	// Line 1659, Address: 0x102c880, Func Offset: 0x200
	// Line 1660, Address: 0x102c888, Func Offset: 0x208
	// Line 1661, Address: 0x102c894, Func Offset: 0x214
	// Line 1662, Address: 0x102c8ac, Func Offset: 0x22c
	// Line 1664, Address: 0x102c8bc, Func Offset: 0x23c
	// Line 1667, Address: 0x102c8c8, Func Offset: 0x248
	// Line 1668, Address: 0x102c8d0, Func Offset: 0x250
	// Line 1669, Address: 0x102c8d4, Func Offset: 0x254
	// Func End, Address: 0x102c8f4, Func Offset: 0x274
}

// 
// Start address: 0x102c900
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1689, Address: 0x102c900, Func Offset: 0
	// Line 1697, Address: 0x102c928, Func Offset: 0x28
	// Line 1698, Address: 0x102c98c, Func Offset: 0x8c
	// Line 1704, Address: 0x102c994, Func Offset: 0x94
	// Line 1705, Address: 0x102c99c, Func Offset: 0x9c
	// Line 1706, Address: 0x102c9bc, Func Offset: 0xbc
	// Line 1707, Address: 0x102c9d8, Func Offset: 0xd8
	// Line 1708, Address: 0x102c9e0, Func Offset: 0xe0
	// Line 1709, Address: 0x102ca00, Func Offset: 0x100
	// Line 1712, Address: 0x102ca1c, Func Offset: 0x11c
	// Line 1713, Address: 0x102ca24, Func Offset: 0x124
	// Line 1714, Address: 0x102ca2c, Func Offset: 0x12c
	// Line 1715, Address: 0x102ca38, Func Offset: 0x138
	// Line 1716, Address: 0x102ca50, Func Offset: 0x150
	// Line 1717, Address: 0x102ca58, Func Offset: 0x158
	// Line 1722, Address: 0x102ca68, Func Offset: 0x168
	// Line 1725, Address: 0x102ca74, Func Offset: 0x174
	// Line 1726, Address: 0x102ca7c, Func Offset: 0x17c
	// Line 1727, Address: 0x102ca80, Func Offset: 0x180
	// Func End, Address: 0x102ca9c, Func Offset: 0x19c
}

// 
// Start address: 0x102caa0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1741, Address: 0x102caa0, Func Offset: 0
	// Line 1748, Address: 0x102cabc, Func Offset: 0x1c
	// Line 1749, Address: 0x102cac0, Func Offset: 0x20
	// Line 1750, Address: 0x102cac8, Func Offset: 0x28
	// Line 1751, Address: 0x102caec, Func Offset: 0x4c
	// Line 1752, Address: 0x102caf8, Func Offset: 0x58
	// Line 1753, Address: 0x102cb10, Func Offset: 0x70
	// Line 1754, Address: 0x102cb24, Func Offset: 0x84
	// Line 1759, Address: 0x102cb3c, Func Offset: 0x9c
	// Func End, Address: 0x102cb54, Func Offset: 0xb4
}

// 
// Start address: 0x102cb60
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1773, Address: 0x102cb60, Func Offset: 0
	// Line 1774, Address: 0x102cb6c, Func Offset: 0xc
	// Line 1775, Address: 0x102cb98, Func Offset: 0x38
	// Line 1776, Address: 0x102cbe4, Func Offset: 0x84
	// Line 1777, Address: 0x102cc10, Func Offset: 0xb0
	// Line 1779, Address: 0x102cc5c, Func Offset: 0xfc
	// Line 1785, Address: 0x102cc68, Func Offset: 0x108
	// Line 1786, Address: 0x102cc6c, Func Offset: 0x10c
	// Func End, Address: 0x102cc78, Func Offset: 0x118
}

// 
// Start address: 0x102cc80
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1803, Address: 0x102cc80, Func Offset: 0
	// Line 1804, Address: 0x102cc9c, Func Offset: 0x1c
	// Line 1806, Address: 0x102ccb8, Func Offset: 0x38
	// Func End, Address: 0x102ccc8, Func Offset: 0x48
}

// 
// Start address: 0x102ccd0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1808, Address: 0x102ccd0, Func Offset: 0
	// Line 1809, Address: 0x102ccec, Func Offset: 0x1c
	// Line 1810, Address: 0x102ccf0, Func Offset: 0x20
	// Line 1812, Address: 0x102cd0c, Func Offset: 0x3c
	// Func End, Address: 0x102cd1c, Func Offset: 0x4c
}

// 
// Start address: 0x102cd20
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1814, Address: 0x102cd20, Func Offset: 0
	// Line 1815, Address: 0x102cd34, Func Offset: 0x14
	// Line 1817, Address: 0x102cd50, Func Offset: 0x30
	// Func End, Address: 0x102cd60, Func Offset: 0x40
}

// 
// Start address: 0x102cd60
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1819, Address: 0x102cd60, Func Offset: 0
	// Line 1820, Address: 0x102cd7c, Func Offset: 0x1c
	// Line 1822, Address: 0x102cd98, Func Offset: 0x38
	// Func End, Address: 0x102cda8, Func Offset: 0x48
}

// 
// Start address: 0x102cdb0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1824, Address: 0x102cdb0, Func Offset: 0
	// Line 1825, Address: 0x102cdc8, Func Offset: 0x18
	// Line 1826, Address: 0x102cdd8, Func Offset: 0x28
	// Line 1827, Address: 0x102cde8, Func Offset: 0x38
	// Line 1828, Address: 0x102cdf4, Func Offset: 0x44
	// Line 1830, Address: 0x102ce00, Func Offset: 0x50
	// Line 1831, Address: 0x102ce2c, Func Offset: 0x7c
	// Line 1834, Address: 0x102ce58, Func Offset: 0xa8
	// Func End, Address: 0x102ce64, Func Offset: 0xb4
}

// 
// Start address: 0x102ce70
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1850, Address: 0x102ce70, Func Offset: 0
	// Line 1857, Address: 0x102ce88, Func Offset: 0x18
	// Line 1858, Address: 0x102ce94, Func Offset: 0x24
	// Line 1859, Address: 0x102cea0, Func Offset: 0x30
	// Line 1860, Address: 0x102cea8, Func Offset: 0x38
	// Line 1861, Address: 0x102ceac, Func Offset: 0x3c
	// Line 1865, Address: 0x102cec4, Func Offset: 0x54
	// Line 1866, Address: 0x102cecc, Func Offset: 0x5c
	// Line 1867, Address: 0x102ced0, Func Offset: 0x60
	// Line 1869, Address: 0x102cee0, Func Offset: 0x70
	// Func End, Address: 0x102cf00, Func Offset: 0x90
}

// 
// Start address: 0x102cf00
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1872, Address: 0x102cf00, Func Offset: 0
	// Line 1873, Address: 0x102cf18, Func Offset: 0x18
	// Line 1874, Address: 0x102cf38, Func Offset: 0x38
	// Func End, Address: 0x102cf48, Func Offset: 0x48
}

// 
// Start address: 0x102cf50
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1879, Address: 0x102cf50, Func Offset: 0
	// Line 1883, Address: 0x102cf70, Func Offset: 0x20
	// Line 1886, Address: 0x102cf8c, Func Offset: 0x3c
	// Line 1890, Address: 0x102cfb4, Func Offset: 0x64
	// Line 1891, Address: 0x102cfc0, Func Offset: 0x70
	// Line 1893, Address: 0x102cfe8, Func Offset: 0x98
	// Func End, Address: 0x102cff8, Func Offset: 0xa8
}

// 
// Start address: 0x102d000
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1899, Address: 0x102d000, Func Offset: 0
	// Line 1902, Address: 0x102d01c, Func Offset: 0x1c
	// Line 1903, Address: 0x102d024, Func Offset: 0x24
	// Line 1906, Address: 0x102d02c, Func Offset: 0x2c
	// Line 1908, Address: 0x102d050, Func Offset: 0x50
	// Line 1909, Address: 0x102d070, Func Offset: 0x70
	// Line 1910, Address: 0x102d078, Func Offset: 0x78
	// Line 1911, Address: 0x102d09c, Func Offset: 0x9c
	// Func End, Address: 0x102d0b8, Func Offset: 0xb8
}

// 
// Start address: 0x102d0c0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1937, Address: 0x102d0c0, Func Offset: 0
	// Line 1942, Address: 0x102d0e8, Func Offset: 0x28
	// Line 1943, Address: 0x102d0f8, Func Offset: 0x38
	// Line 1945, Address: 0x102d114, Func Offset: 0x54
	// Line 1946, Address: 0x102d138, Func Offset: 0x78
	// Line 1947, Address: 0x102d160, Func Offset: 0xa0
	// Line 1948, Address: 0x102d16c, Func Offset: 0xac
	// Line 1949, Address: 0x102d174, Func Offset: 0xb4
	// Line 1952, Address: 0x102d190, Func Offset: 0xd0
	// Line 1956, Address: 0x102d1b8, Func Offset: 0xf8
	// Line 1959, Address: 0x102d1c0, Func Offset: 0x100
	// Line 1960, Address: 0x102d1c4, Func Offset: 0x104
	// Line 1964, Address: 0x102d1e0, Func Offset: 0x120
	// Line 1971, Address: 0x102d208, Func Offset: 0x148
	// Func End, Address: 0x102d224, Func Offset: 0x164
}

// 
// Start address: 0x102d230
void mapinit()
{
	// Line 1982, Address: 0x102d230, Func Offset: 0
	// Line 1984, Address: 0x102d238, Func Offset: 0x8
	// Line 1985, Address: 0x102d24c, Func Offset: 0x1c
	// Line 1987, Address: 0x102d260, Func Offset: 0x30
	// Line 1988, Address: 0x102d278, Func Offset: 0x48
	// Line 1989, Address: 0x102d298, Func Offset: 0x68
	// Func End, Address: 0x102d2a8, Func Offset: 0x78
}

// 
// Start address: 0x102d2b0
void mapset()
{
	// Line 1994, Address: 0x102d2b0, Func Offset: 0
	// Func End, Address: 0x102d2b8, Func Offset: 0x8
}

// 
// Start address: 0x102d2c0
void divdevset()
{
	// Line 1998, Address: 0x102d2c0, Func Offset: 0
	// Func End, Address: 0x102d2c8, Func Offset: 0x8
}

// 
// Start address: 0x102d2d0
void enecginit()
{
	// Line 2002, Address: 0x102d2d0, Func Offset: 0
	// Func End, Address: 0x102d2d8, Func Offset: 0x8
}

