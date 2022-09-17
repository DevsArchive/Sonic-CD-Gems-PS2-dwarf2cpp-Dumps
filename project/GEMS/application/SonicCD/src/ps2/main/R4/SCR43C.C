typedef struct tagPOINT;
typedef struct _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
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

typedef int(*type_5)(int, int, int, int, int);

typedef _anon14 type_0[20];
typedef unsigned short type_1[4];
typedef _anon14 type_2[0];
typedef unsigned char type_3[4];
typedef unsigned char type_4[129];
typedef unsigned char type_6[256];
typedef unsigned short type_7[4];
typedef unsigned short type_8[4][1024];
typedef unsigned short type_9[6];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef _anon3* type_12[8];
typedef unsigned char type_13[64][8];
typedef unsigned char type_14[22];
typedef unsigned char type_15[64];
typedef unsigned char type_16[64][8];
typedef short type_17[256];
typedef unsigned char type_18[766];
typedef _anon1 type_19[128];
typedef _anon3* type_20[8];
typedef unsigned short type_21[16];

struct tagPOINT
{
	int x;
	int y;
};

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon14 spra[20];
		_anon14 spr[0];
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

struct _anon2
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

union _anon3
{
	int l;
	_anon5 w;
	_anon6 b;
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

unsigned char z81awrttbl[129];
_anon3* vblockwrtbtbl[8];
_anon3* mapwrt_tbl[8];
_anon1 actwk[128];
unsigned char main_play;
unsigned short scr_dir_tbl[6];
short scra_hline;
short scra_vline;
unsigned char scra_v_count;
unsigned char scra_h_count;
short scra_h_keep;
short scralim_left;
short scralim_n_down;
short scralim_down;
short scralim_n_up;
short scralim_up;
short scralim_n_right;
short scralim_right;
short scralim_n_left;
short scrar_no;
unsigned char scrh_flag;
unsigned char scrv_flag;
_anon12 scr_die;
_anon7 scr_timer;
_anon12 zone_flag;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon3 scra_v_posit;
_anon3 scra_h_posit;
unsigned char plflag;
_anon2* lpKeepWork;
_anon3 scrb_h_posit;
_anon3 scrc_h_posit;
_anon3 scrz_h_posit;
_anon3 scrz_v_posit;
_anon3 scrc_v_posit;
_anon3 scrb_v_posit;
short hscrollwork[256];
_anon12 scrflagc;
_anon12 scrflagz;
_anon12 scrflagb;
_anon3 vscroll;
short scra_vz;
short scra_hz;
_anon12 scrflaga;
_anon7 scroll_start;
unsigned char awasintbl[256];
short waterposi;
_anon7 waterdirec;
_anon3* lphscrollbuff;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon12 scrflagaw;
unsigned char mapwka[64][8];
_anon3 scra_v_posiw;
_anon3 scra_h_posiw;
_anon12 scrflagbw;
_anon3 scrb_v_posiw;
_anon3 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon4 mapinittbl;

void enecginit();
void divdevset();
_anon1* main_chk();
void scr_set();
void playposiset();
void scrbinit(short yWk);
void scroll();
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs);
void scroll_h();
void scrh_move();
void right_check(unsigned short wD0);
void left_check(unsigned short wD0);
void scroll_v();
void sv_move_main(unsigned short wD0);
void sv_move_main1(unsigned short wD0);
void sv_move_main2(unsigned short wD0);
void sv_move_sub2();
void sv_move_sub(unsigned short wD0);
void sv_move_minus(unsigned short wD1);
void scrv_up_ch(_anon3 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon3 lD1);
void scrv_move(_anon3 lD1);
void scrollb_hv(_anon3* lD4, _anon3* lD5);
void scrollb_v(unsigned short wD0);
void scrollb_h(int lD4, int flagb);
void scrollc_h(int lD4, int flagc);
void scrollz_h(int lD4, int flagz);
void scrollwrtadva();
void scrollwrt();
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw);
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
void mapinit();
void mapset();

// 
// Start address: 0x1020800
void enecginit()
{
	// Line 129, Address: 0x1020800, Func Offset: 0
	// Func End, Address: 0x1020808, Func Offset: 0x8
}

// 
// Start address: 0x1020810
void divdevset()
{
	// Line 133, Address: 0x1020810, Func Offset: 0
	// Func End, Address: 0x1020818, Func Offset: 0x8
}

// 
// Start address: 0x1020820
_anon1* main_chk()
{
	// Line 181, Address: 0x1020820, Func Offset: 0
	// Line 182, Address: 0x1020840, Func Offset: 0x20
	// Line 183, Address: 0x1020848, Func Offset: 0x28
	// Func End, Address: 0x1020850, Func Offset: 0x30
}

// 
// Start address: 0x1020850
void scr_set()
{
	int i;
	// Line 190, Address: 0x1020850, Func Offset: 0
	// Line 199, Address: 0x102085c, Func Offset: 0xc
	// Line 201, Address: 0x10208a4, Func Offset: 0x54
	// Line 202, Address: 0x10208a8, Func Offset: 0x58
	// Line 203, Address: 0x10208cc, Func Offset: 0x7c
	// Line 204, Address: 0x10208e8, Func Offset: 0x98
	// Line 205, Address: 0x102090c, Func Offset: 0xbc
	// Line 206, Address: 0x1020928, Func Offset: 0xd8
	// Line 207, Address: 0x102094c, Func Offset: 0xfc
	// Line 208, Address: 0x1020968, Func Offset: 0x118
	// Line 209, Address: 0x102098c, Func Offset: 0x13c
	// Line 210, Address: 0x10209a8, Func Offset: 0x158
	// Line 212, Address: 0x10209cc, Func Offset: 0x17c
	// Line 213, Address: 0x10209f0, Func Offset: 0x1a0
	// Line 214, Address: 0x10209fc, Func Offset: 0x1ac
	// Line 216, Address: 0x1020a08, Func Offset: 0x1b8
	// Line 217, Address: 0x1020a2c, Func Offset: 0x1dc
	// Line 219, Address: 0x1020a38, Func Offset: 0x1e8
	// Line 220, Address: 0x1020a40, Func Offset: 0x1f0
	// Func End, Address: 0x1020a54, Func Offset: 0x204
}

// 
// Start address: 0x1020a60
void playposiset()
{
	unsigned short endplpositbl[16];
	unsigned short playpositbl[4];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 224, Address: 0x1020a60, Func Offset: 0
	// Line 225, Address: 0x1020a74, Func Offset: 0x14
	// Line 235, Address: 0x1020aa8, Func Offset: 0x48
	// Line 240, Address: 0x1020ad4, Func Offset: 0x74
	// Line 248, Address: 0x1020b00, Func Offset: 0xa0
	// Line 249, Address: 0x1020b14, Func Offset: 0xb4
	// Line 250, Address: 0x1020b28, Func Offset: 0xc8
	// Line 251, Address: 0x1020b3c, Func Offset: 0xdc
	// Line 252, Address: 0x1020b44, Func Offset: 0xe4
	// Line 254, Address: 0x1020b58, Func Offset: 0xf8
	// Line 255, Address: 0x1020b60, Func Offset: 0x100
	// Line 256, Address: 0x1020b70, Func Offset: 0x110
	// Line 257, Address: 0x1020b80, Func Offset: 0x120
	// Line 258, Address: 0x1020b94, Func Offset: 0x134
	// Line 261, Address: 0x1020b9c, Func Offset: 0x13c
	// Line 262, Address: 0x1020bb0, Func Offset: 0x150
	// Line 265, Address: 0x1020bc4, Func Offset: 0x164
	// Line 266, Address: 0x1020bd8, Func Offset: 0x178
	// Line 267, Address: 0x1020be4, Func Offset: 0x184
	// Line 269, Address: 0x1020bec, Func Offset: 0x18c
	// Line 273, Address: 0x1020bf0, Func Offset: 0x190
	// Line 274, Address: 0x1020c14, Func Offset: 0x1b4
	// Line 276, Address: 0x1020c24, Func Offset: 0x1c4
	// Line 278, Address: 0x1020c2c, Func Offset: 0x1cc
	// Line 279, Address: 0x1020c40, Func Offset: 0x1e0
	// Line 280, Address: 0x1020c4c, Func Offset: 0x1ec
	// Line 282, Address: 0x1020c54, Func Offset: 0x1f4
	// Line 285, Address: 0x1020c58, Func Offset: 0x1f8
	// Line 286, Address: 0x1020c7c, Func Offset: 0x21c
	// Line 289, Address: 0x1020c8c, Func Offset: 0x22c
	// Line 292, Address: 0x1020c94, Func Offset: 0x234
	// Line 294, Address: 0x1020ca0, Func Offset: 0x240
	// Line 295, Address: 0x1020ca4, Func Offset: 0x244
	// Line 296, Address: 0x1020cbc, Func Offset: 0x25c
	// Line 297, Address: 0x1020cd4, Func Offset: 0x274
	// Line 298, Address: 0x1020cec, Func Offset: 0x28c
	// Line 301, Address: 0x1020d04, Func Offset: 0x2a4
	// Func End, Address: 0x1020d20, Func Offset: 0x2c0
}

// 
// Start address: 0x1020d20
void scrbinit(short yWk)
{
	_anon9 data;
	// Line 305, Address: 0x1020d20, Func Offset: 0
	// Line 309, Address: 0x1020d28, Func Offset: 0x8
	// Line 310, Address: 0x1020d2c, Func Offset: 0xc
	// Line 311, Address: 0x1020d38, Func Offset: 0x18
	// Line 313, Address: 0x1020d44, Func Offset: 0x24
	// Line 314, Address: 0x1020d50, Func Offset: 0x30
	// Line 315, Address: 0x1020d58, Func Offset: 0x38
	// Line 316, Address: 0x1020d64, Func Offset: 0x44
	// Line 318, Address: 0x1020d70, Func Offset: 0x50
	// Line 319, Address: 0x1020d94, Func Offset: 0x74
	// Line 320, Address: 0x1020dc0, Func Offset: 0xa0
	// Line 325, Address: 0x1020dec, Func Offset: 0xcc
	// Func End, Address: 0x1020df8, Func Offset: 0xd8
}

// 
// Start address: 0x1020e00
void scroll()
{
	_anon9 data;
	_anon3 temp1;
	_anon3 temp2;
	int hsCount;
	int i;
	// Line 329, Address: 0x1020e00, Func Offset: 0
	// Line 335, Address: 0x1020e10, Func Offset: 0x10
	// Line 338, Address: 0x1020e20, Func Offset: 0x20
	// Line 339, Address: 0x1020e4c, Func Offset: 0x4c
	// Line 340, Address: 0x1020e54, Func Offset: 0x54
	// Line 341, Address: 0x1020e5c, Func Offset: 0x5c
	// Line 343, Address: 0x1020e64, Func Offset: 0x64
	// Line 344, Address: 0x1020e74, Func Offset: 0x74
	// Line 348, Address: 0x1020e84, Func Offset: 0x84
	// Line 349, Address: 0x1020eb4, Func Offset: 0xb4
	// Line 350, Address: 0x1020ecc, Func Offset: 0xcc
	// Line 352, Address: 0x1020edc, Func Offset: 0xdc
	// Line 353, Address: 0x1020eec, Func Offset: 0xec
	// Line 354, Address: 0x1020efc, Func Offset: 0xfc
	// Line 356, Address: 0x1020f0c, Func Offset: 0x10c
	// Line 357, Address: 0x1020f40, Func Offset: 0x140
	// Line 358, Address: 0x1020f48, Func Offset: 0x148
	// Line 360, Address: 0x1020f50, Func Offset: 0x150
	// Line 361, Address: 0x1020f54, Func Offset: 0x154
	// Line 364, Address: 0x1020f60, Func Offset: 0x160
	// Line 365, Address: 0x1020f90, Func Offset: 0x190
	// Line 366, Address: 0x1020f94, Func Offset: 0x194
	// Line 368, Address: 0x1020fa4, Func Offset: 0x1a4
	// Line 369, Address: 0x1020fc0, Func Offset: 0x1c0
	// Line 370, Address: 0x1020fe4, Func Offset: 0x1e4
	// Line 371, Address: 0x1020ff0, Func Offset: 0x1f0
	// Line 372, Address: 0x1020ffc, Func Offset: 0x1fc
	// Line 373, Address: 0x1021008, Func Offset: 0x208
	// Line 375, Address: 0x1021058, Func Offset: 0x258
	// Func End, Address: 0x1021070, Func Offset: 0x270
}

// 
// Start address: 0x1021070
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs)
{
	_anon3* pHScrollBuff;
	_anon3 hsw;
	_anon7 data1;
	_anon7 data2;
	short avp;
	int i;
	// Line 413, Address: 0x1021070, Func Offset: 0
	// Line 420, Address: 0x102108c, Func Offset: 0x1c
	// Line 421, Address: 0x1021094, Func Offset: 0x24
	// Line 422, Address: 0x10210a0, Func Offset: 0x30
	// Line 423, Address: 0x10210ac, Func Offset: 0x3c
	// Line 424, Address: 0x10210c0, Func Offset: 0x50
	// Line 425, Address: 0x10210d4, Func Offset: 0x64
	// Line 426, Address: 0x10210d8, Func Offset: 0x68
	// Line 427, Address: 0x10210ec, Func Offset: 0x7c
	// Line 429, Address: 0x10210f0, Func Offset: 0x80
	// Line 430, Address: 0x10210fc, Func Offset: 0x8c
	// Line 431, Address: 0x1021124, Func Offset: 0xb4
	// Line 432, Address: 0x1021134, Func Offset: 0xc4
	// Line 436, Address: 0x1021138, Func Offset: 0xc8
	// Line 441, Address: 0x102115c, Func Offset: 0xec
	// Line 442, Address: 0x1021164, Func Offset: 0xf4
	// Line 443, Address: 0x10211b4, Func Offset: 0x144
	// Line 444, Address: 0x10211b8, Func Offset: 0x148
	// Line 445, Address: 0x10211c4, Func Offset: 0x154
	// Line 446, Address: 0x10211d0, Func Offset: 0x160
	// Line 447, Address: 0x10211dc, Func Offset: 0x16c
	// Line 449, Address: 0x10211f4, Func Offset: 0x184
	// Line 450, Address: 0x10211f8, Func Offset: 0x188
	// Line 452, Address: 0x1021220, Func Offset: 0x1b0
	// Line 454, Address: 0x102122c, Func Offset: 0x1bc
	// Line 456, Address: 0x1021234, Func Offset: 0x1c4
	// Line 457, Address: 0x102123c, Func Offset: 0x1cc
	// Line 458, Address: 0x1021240, Func Offset: 0x1d0
	// Line 459, Address: 0x102124c, Func Offset: 0x1dc
	// Line 460, Address: 0x1021258, Func Offset: 0x1e8
	// Line 461, Address: 0x1021264, Func Offset: 0x1f4
	// Line 462, Address: 0x1021270, Func Offset: 0x200
	// Line 464, Address: 0x1021288, Func Offset: 0x218
	// Line 465, Address: 0x102128c, Func Offset: 0x21c
	// Line 467, Address: 0x10212b4, Func Offset: 0x244
	// Line 469, Address: 0x10212c0, Func Offset: 0x250
	// Func End, Address: 0x10212d8, Func Offset: 0x268
}

// 
// Start address: 0x10212e0
void scroll_h()
{
	unsigned short wD4;
	// Line 481, Address: 0x10212e0, Func Offset: 0
	// Line 484, Address: 0x10212ec, Func Offset: 0xc
	// Line 485, Address: 0x10212f8, Func Offset: 0x18
	// Line 486, Address: 0x1021300, Func Offset: 0x20
	// Line 487, Address: 0x1021334, Func Offset: 0x54
	// Line 488, Address: 0x1021348, Func Offset: 0x68
	// Line 489, Address: 0x1021374, Func Offset: 0x94
	// Line 490, Address: 0x1021388, Func Offset: 0xa8
	// Line 493, Address: 0x1021390, Func Offset: 0xb0
	// Line 498, Address: 0x10213a4, Func Offset: 0xc4
	// Func End, Address: 0x10213b8, Func Offset: 0xd8
}

// 
// Start address: 0x10213c0
void scrh_move()
{
	unsigned short wD0;
	// Line 500, Address: 0x10213c0, Func Offset: 0
	// Line 503, Address: 0x10213cc, Func Offset: 0xc
	// Line 504, Address: 0x10213d8, Func Offset: 0x18
	// Line 505, Address: 0x10213ec, Func Offset: 0x2c
	// Line 506, Address: 0x1021400, Func Offset: 0x40
	// Line 508, Address: 0x102140c, Func Offset: 0x4c
	// Line 509, Address: 0x1021414, Func Offset: 0x54
	// Line 510, Address: 0x102141c, Func Offset: 0x5c
	// Line 511, Address: 0x1021434, Func Offset: 0x74
	// Line 512, Address: 0x1021440, Func Offset: 0x80
	// Line 514, Address: 0x1021448, Func Offset: 0x88
	// Line 517, Address: 0x1021454, Func Offset: 0x94
	// Func End, Address: 0x1021468, Func Offset: 0xa8
}

// 
// Start address: 0x1021470
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 520, Address: 0x1021470, Func Offset: 0
	// Line 523, Address: 0x102147c, Func Offset: 0xc
	// Line 524, Address: 0x102149c, Func Offset: 0x2c
	// Line 527, Address: 0x10214a4, Func Offset: 0x34
	// Line 528, Address: 0x10214bc, Func Offset: 0x4c
	// Line 529, Address: 0x10214ec, Func Offset: 0x7c
	// Line 532, Address: 0x10214f8, Func Offset: 0x88
	// Line 533, Address: 0x1021500, Func Offset: 0x90
	// Line 534, Address: 0x1021514, Func Offset: 0xa4
	// Line 535, Address: 0x1021544, Func Offset: 0xd4
	// Line 536, Address: 0x1021550, Func Offset: 0xe0
	// Line 538, Address: 0x1021558, Func Offset: 0xe8
	// Func End, Address: 0x1021568, Func Offset: 0xf8
}

// 
// Start address: 0x1021570
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 541, Address: 0x1021570, Func Offset: 0
	// Line 544, Address: 0x102157c, Func Offset: 0xc
	// Line 545, Address: 0x102159c, Func Offset: 0x2c
	// Line 548, Address: 0x10215a4, Func Offset: 0x34
	// Line 549, Address: 0x10215bc, Func Offset: 0x4c
	// Line 550, Address: 0x10215ec, Func Offset: 0x7c
	// Line 553, Address: 0x10215f8, Func Offset: 0x88
	// Line 554, Address: 0x1021600, Func Offset: 0x90
	// Line 555, Address: 0x1021614, Func Offset: 0xa4
	// Line 556, Address: 0x1021644, Func Offset: 0xd4
	// Line 557, Address: 0x1021650, Func Offset: 0xe0
	// Line 559, Address: 0x1021658, Func Offset: 0xe8
	// Func End, Address: 0x1021668, Func Offset: 0xf8
}

// 
// Start address: 0x1021670
void scroll_v()
{
	unsigned short wD0;
	// Line 578, Address: 0x1021670, Func Offset: 0
	// Line 581, Address: 0x102167c, Func Offset: 0xc
	// Line 582, Address: 0x10216a8, Func Offset: 0x38
	// Line 583, Address: 0x10216c0, Func Offset: 0x50
	// Line 586, Address: 0x10216c8, Func Offset: 0x58
	// Line 587, Address: 0x10216e0, Func Offset: 0x70
	// Line 588, Address: 0x10216e8, Func Offset: 0x78
	// Line 589, Address: 0x1021708, Func Offset: 0x98
	// Line 590, Address: 0x102171c, Func Offset: 0xac
	// Line 591, Address: 0x1021728, Func Offset: 0xb8
	// Line 593, Address: 0x1021730, Func Offset: 0xc0
	// Line 594, Address: 0x1021744, Func Offset: 0xd4
	// Line 595, Address: 0x1021754, Func Offset: 0xe4
	// Line 596, Address: 0x102175c, Func Offset: 0xec
	// Line 597, Address: 0x1021768, Func Offset: 0xf8
	// Line 599, Address: 0x1021770, Func Offset: 0x100
	// Line 600, Address: 0x1021778, Func Offset: 0x108
	// Line 601, Address: 0x102178c, Func Offset: 0x11c
	// Line 602, Address: 0x1021794, Func Offset: 0x124
	// Line 608, Address: 0x102179c, Func Offset: 0x12c
	// Line 609, Address: 0x10217b0, Func Offset: 0x140
	// Line 610, Address: 0x10217b8, Func Offset: 0x148
	// Line 611, Address: 0x10217c4, Func Offset: 0x154
	// Line 613, Address: 0x10217cc, Func Offset: 0x15c
	// Line 614, Address: 0x10217e0, Func Offset: 0x170
	// Line 615, Address: 0x10217e8, Func Offset: 0x178
	// Line 620, Address: 0x10217f0, Func Offset: 0x180
	// Line 622, Address: 0x10217f8, Func Offset: 0x188
	// Func End, Address: 0x102180c, Func Offset: 0x19c
}

// 
// Start address: 0x1021810
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 628, Address: 0x1021810, Func Offset: 0
	// Line 631, Address: 0x1021820, Func Offset: 0x10
	// Line 632, Address: 0x102183c, Func Offset: 0x2c
	// Line 633, Address: 0x1021848, Func Offset: 0x38
	// Line 636, Address: 0x1021850, Func Offset: 0x40
	// Line 637, Address: 0x102185c, Func Offset: 0x4c
	// Line 638, Address: 0x1021874, Func Offset: 0x64
	// Line 641, Address: 0x1021890, Func Offset: 0x80
	// Line 642, Address: 0x10218a0, Func Offset: 0x90
	// Line 643, Address: 0x10218ac, Func Offset: 0x9c
	// Line 645, Address: 0x10218b4, Func Offset: 0xa4
	// Line 646, Address: 0x10218d4, Func Offset: 0xc4
	// Line 647, Address: 0x10218e0, Func Offset: 0xd0
	// Line 648, Address: 0x10218e8, Func Offset: 0xd8
	// Line 649, Address: 0x1021908, Func Offset: 0xf8
	// Line 650, Address: 0x1021914, Func Offset: 0x104
	// Line 652, Address: 0x102191c, Func Offset: 0x10c
	// Line 656, Address: 0x1021928, Func Offset: 0x118
	// Func End, Address: 0x102193c, Func Offset: 0x12c
}

// 
// Start address: 0x1021940
void sv_move_main1(unsigned short wD0)
{
	// Line 660, Address: 0x1021940, Func Offset: 0
	// Line 662, Address: 0x102194c, Func Offset: 0xc
	// Line 663, Address: 0x102196c, Func Offset: 0x2c
	// Line 664, Address: 0x1021978, Func Offset: 0x38
	// Line 665, Address: 0x1021980, Func Offset: 0x40
	// Line 666, Address: 0x10219a0, Func Offset: 0x60
	// Line 667, Address: 0x10219ac, Func Offset: 0x6c
	// Line 669, Address: 0x10219b4, Func Offset: 0x74
	// Line 672, Address: 0x10219c0, Func Offset: 0x80
	// Func End, Address: 0x10219d0, Func Offset: 0x90
}

// 
// Start address: 0x10219d0
void sv_move_main2(unsigned short wD0)
{
	// Line 675, Address: 0x10219d0, Func Offset: 0
	// Line 677, Address: 0x10219dc, Func Offset: 0xc
	// Line 678, Address: 0x10219fc, Func Offset: 0x2c
	// Line 679, Address: 0x1021a08, Func Offset: 0x38
	// Line 680, Address: 0x1021a10, Func Offset: 0x40
	// Line 681, Address: 0x1021a30, Func Offset: 0x60
	// Line 682, Address: 0x1021a3c, Func Offset: 0x6c
	// Line 684, Address: 0x1021a44, Func Offset: 0x74
	// Line 687, Address: 0x1021a50, Func Offset: 0x80
	// Func End, Address: 0x1021a60, Func Offset: 0x90
}

// 
// Start address: 0x1021a60
void sv_move_sub2()
{
	// Line 690, Address: 0x1021a60, Func Offset: 0
	// Line 691, Address: 0x1021a68, Func Offset: 0x8
	// Line 692, Address: 0x1021a70, Func Offset: 0x10
	// Line 693, Address: 0x1021a7c, Func Offset: 0x1c
	// Func End, Address: 0x1021a8c, Func Offset: 0x2c
}

// 
// Start address: 0x1021a90
void sv_move_sub(unsigned short wD0)
{
	_anon3 lD1;
	// Line 696, Address: 0x1021a90, Func Offset: 0
	// Line 699, Address: 0x1021a9c, Func Offset: 0xc
	// Line 700, Address: 0x1021aa0, Func Offset: 0x10
	// Line 701, Address: 0x1021aa8, Func Offset: 0x18
	// Line 702, Address: 0x1021ac4, Func Offset: 0x34
	// Line 703, Address: 0x1021ae0, Func Offset: 0x50
	// Line 704, Address: 0x1021aec, Func Offset: 0x5c
	// Line 706, Address: 0x1021af4, Func Offset: 0x64
	// Line 709, Address: 0x1021b00, Func Offset: 0x70
	// Func End, Address: 0x1021b10, Func Offset: 0x80
}

// 
// Start address: 0x1021b10
void sv_move_minus(unsigned short wD1)
{
	_anon3 lD1;
	unsigned short wk;
	// Line 714, Address: 0x1021b10, Func Offset: 0
	// Line 718, Address: 0x1021b20, Func Offset: 0x10
	// Line 719, Address: 0x1021b3c, Func Offset: 0x2c
	// Line 720, Address: 0x1021b48, Func Offset: 0x38
	// Line 722, Address: 0x1021b5c, Func Offset: 0x4c
	// Line 723, Address: 0x1021b64, Func Offset: 0x54
	// Line 724, Address: 0x1021b6c, Func Offset: 0x5c
	// Line 725, Address: 0x1021b70, Func Offset: 0x60
	// Line 726, Address: 0x1021b7c, Func Offset: 0x6c
	// Func End, Address: 0x1021b90, Func Offset: 0x80
}

// 
// Start address: 0x1021b90
void scrv_up_ch(_anon3 lD1)
{
	// Line 730, Address: 0x1021b90, Func Offset: 0
	// Line 731, Address: 0x1021b9c, Func Offset: 0xc
	// Line 732, Address: 0x1021bc4, Func Offset: 0x34
	// Line 733, Address: 0x1021bd8, Func Offset: 0x48
	// Line 734, Address: 0x1021be4, Func Offset: 0x54
	// Line 735, Address: 0x1021bf8, Func Offset: 0x68
	// Line 736, Address: 0x1021c0c, Func Offset: 0x7c
	// Line 737, Address: 0x1021c20, Func Offset: 0x90
	// Line 740, Address: 0x1021c28, Func Offset: 0x98
	// Line 743, Address: 0x1021c34, Func Offset: 0xa4
	// Line 745, Address: 0x1021c40, Func Offset: 0xb0
	// Func End, Address: 0x1021c50, Func Offset: 0xc0
}

// 
// Start address: 0x1021c50
void sv_move_plus(unsigned short wD1)
{
	_anon3 lD1;
	unsigned short wk;
	// Line 751, Address: 0x1021c50, Func Offset: 0
	// Line 755, Address: 0x1021c60, Func Offset: 0x10
	// Line 756, Address: 0x1021c64, Func Offset: 0x14
	// Line 757, Address: 0x1021c6c, Func Offset: 0x1c
	// Line 758, Address: 0x1021c78, Func Offset: 0x28
	// Line 760, Address: 0x1021c8c, Func Offset: 0x3c
	// Line 761, Address: 0x1021c94, Func Offset: 0x44
	// Line 762, Address: 0x1021c9c, Func Offset: 0x4c
	// Line 764, Address: 0x1021ca0, Func Offset: 0x50
	// Line 766, Address: 0x1021cac, Func Offset: 0x5c
	// Func End, Address: 0x1021cc0, Func Offset: 0x70
}

// 
// Start address: 0x1021cc0
void scrv_down_ch(_anon3 lD1)
{
	// Line 770, Address: 0x1021cc0, Func Offset: 0
	// Line 771, Address: 0x1021ccc, Func Offset: 0xc
	// Line 772, Address: 0x1021cf4, Func Offset: 0x34
	// Line 773, Address: 0x1021d00, Func Offset: 0x40
	// Line 774, Address: 0x1021d14, Func Offset: 0x54
	// Line 775, Address: 0x1021d28, Func Offset: 0x68
	// Line 776, Address: 0x1021d3c, Func Offset: 0x7c
	// Line 777, Address: 0x1021d50, Func Offset: 0x90
	// Line 779, Address: 0x1021d58, Func Offset: 0x98
	// Line 782, Address: 0x1021d64, Func Offset: 0xa4
	// Line 784, Address: 0x1021d70, Func Offset: 0xb0
	// Func End, Address: 0x1021d80, Func Offset: 0xc0
}

// 
// Start address: 0x1021d80
void scrv_move(_anon3 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 787, Address: 0x1021d80, Func Offset: 0
	// Line 790, Address: 0x1021d90, Func Offset: 0x10
	// Line 792, Address: 0x1021d9c, Func Offset: 0x1c
	// Line 793, Address: 0x1021da4, Func Offset: 0x24
	// Line 794, Address: 0x1021dac, Func Offset: 0x2c
	// Line 796, Address: 0x1021db0, Func Offset: 0x30
	// Line 797, Address: 0x1021dd8, Func Offset: 0x58
	// Line 800, Address: 0x1021de4, Func Offset: 0x64
	// Line 801, Address: 0x1021e18, Func Offset: 0x98
	// Line 802, Address: 0x1021e2c, Func Offset: 0xac
	// Line 804, Address: 0x1021e58, Func Offset: 0xd8
	// Line 805, Address: 0x1021e6c, Func Offset: 0xec
	// Line 807, Address: 0x1021e74, Func Offset: 0xf4
	// Line 812, Address: 0x1021e88, Func Offset: 0x108
	// Func End, Address: 0x1021e9c, Func Offset: 0x11c
}

// 
// Start address: 0x1021ea0
void scrollb_hv(_anon3* lD4, _anon3* lD5)
{
	_anon3 lD0;
	_anon3 lD2;
	_anon3 lD3;
	// Line 816, Address: 0x1021ea0, Func Offset: 0
	// Line 819, Address: 0x1021eac, Func Offset: 0xc
	// Line 820, Address: 0x1021ebc, Func Offset: 0x1c
	// Line 821, Address: 0x1021ed0, Func Offset: 0x30
	// Line 823, Address: 0x1021edc, Func Offset: 0x3c
	// Line 825, Address: 0x1021f10, Func Offset: 0x70
	// Line 826, Address: 0x1021f24, Func Offset: 0x84
	// Line 827, Address: 0x1021f34, Func Offset: 0x94
	// Line 828, Address: 0x1021f48, Func Offset: 0xa8
	// Line 829, Address: 0x1021f5c, Func Offset: 0xbc
	// Line 832, Address: 0x1021f64, Func Offset: 0xc4
	// Line 837, Address: 0x1021f78, Func Offset: 0xd8
	// Line 838, Address: 0x1021f88, Func Offset: 0xe8
	// Line 839, Address: 0x1021f9c, Func Offset: 0xfc
	// Line 840, Address: 0x1021fb4, Func Offset: 0x114
	// Line 842, Address: 0x1021fc0, Func Offset: 0x120
	// Line 844, Address: 0x1021ff4, Func Offset: 0x154
	// Line 845, Address: 0x1022008, Func Offset: 0x168
	// Line 846, Address: 0x1022018, Func Offset: 0x178
	// Line 847, Address: 0x102202c, Func Offset: 0x18c
	// Line 848, Address: 0x1022040, Func Offset: 0x1a0
	// Line 851, Address: 0x1022048, Func Offset: 0x1a8
	// Line 856, Address: 0x102205c, Func Offset: 0x1bc
	// Func End, Address: 0x1022068, Func Offset: 0x1c8
}

// 
// Start address: 0x1022070
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 863, Address: 0x1022070, Func Offset: 0
	// Line 866, Address: 0x102207c, Func Offset: 0xc
	// Line 867, Address: 0x1022088, Func Offset: 0x18
	// Line 869, Address: 0x1022094, Func Offset: 0x24
	// Line 870, Address: 0x10220c0, Func Offset: 0x50
	// Line 871, Address: 0x10220d4, Func Offset: 0x64
	// Line 872, Address: 0x1022104, Func Offset: 0x94
	// Line 873, Address: 0x1022118, Func Offset: 0xa8
	// Line 876, Address: 0x1022120, Func Offset: 0xb0
	// Line 881, Address: 0x1022134, Func Offset: 0xc4
	// Func End, Address: 0x1022144, Func Offset: 0xd4
}

// 
// Start address: 0x1022150
void scrollb_h(int lD4, int flagb)
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	unsigned char bD3;
	// Line 885, Address: 0x1022150, Func Offset: 0
	// Line 889, Address: 0x1022160, Func Offset: 0x10
	// Line 890, Address: 0x102216c, Func Offset: 0x1c
	// Line 891, Address: 0x102217c, Func Offset: 0x2c
	// Line 893, Address: 0x1022188, Func Offset: 0x38
	// Line 894, Address: 0x1022190, Func Offset: 0x40
	// Line 895, Address: 0x1022198, Func Offset: 0x48
	// Line 897, Address: 0x10221a4, Func Offset: 0x54
	// Line 898, Address: 0x10221b0, Func Offset: 0x60
	// Line 899, Address: 0x10221c4, Func Offset: 0x74
	// Line 900, Address: 0x10221d0, Func Offset: 0x80
	// Line 901, Address: 0x10221e4, Func Offset: 0x94
	// Line 902, Address: 0x10221f4, Func Offset: 0xa4
	// Line 903, Address: 0x1022208, Func Offset: 0xb8
	// Line 904, Address: 0x1022224, Func Offset: 0xd4
	// Line 907, Address: 0x102222c, Func Offset: 0xdc
	// Line 912, Address: 0x102224c, Func Offset: 0xfc
	// Func End, Address: 0x102225c, Func Offset: 0x10c
}

// 
// Start address: 0x1022260
void scrollc_h(int lD4, int flagc)
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	unsigned char bD3;
	// Line 915, Address: 0x1022260, Func Offset: 0
	// Line 919, Address: 0x1022270, Func Offset: 0x10
	// Line 920, Address: 0x102227c, Func Offset: 0x1c
	// Line 921, Address: 0x102228c, Func Offset: 0x2c
	// Line 923, Address: 0x1022298, Func Offset: 0x38
	// Line 924, Address: 0x10222a0, Func Offset: 0x40
	// Line 925, Address: 0x10222a8, Func Offset: 0x48
	// Line 927, Address: 0x10222b4, Func Offset: 0x54
	// Line 928, Address: 0x10222c0, Func Offset: 0x60
	// Line 929, Address: 0x10222d4, Func Offset: 0x74
	// Line 930, Address: 0x10222e0, Func Offset: 0x80
	// Line 931, Address: 0x10222f4, Func Offset: 0x94
	// Line 932, Address: 0x1022304, Func Offset: 0xa4
	// Line 933, Address: 0x1022318, Func Offset: 0xb8
	// Line 934, Address: 0x1022334, Func Offset: 0xd4
	// Line 937, Address: 0x102233c, Func Offset: 0xdc
	// Line 942, Address: 0x102235c, Func Offset: 0xfc
	// Func End, Address: 0x102236c, Func Offset: 0x10c
}

// 
// Start address: 0x1022370
void scrollz_h(int lD4, int flagz)
{
	_anon3 lD0;
	_anon3 lD1;
	_anon3 lD2;
	unsigned char bD3;
	// Line 954, Address: 0x1022370, Func Offset: 0
	// Line 958, Address: 0x1022380, Func Offset: 0x10
	// Line 959, Address: 0x102238c, Func Offset: 0x1c
	// Line 960, Address: 0x102239c, Func Offset: 0x2c
	// Line 962, Address: 0x10223a8, Func Offset: 0x38
	// Line 963, Address: 0x10223b0, Func Offset: 0x40
	// Line 964, Address: 0x10223b8, Func Offset: 0x48
	// Line 966, Address: 0x10223c4, Func Offset: 0x54
	// Line 967, Address: 0x10223d0, Func Offset: 0x60
	// Line 968, Address: 0x10223e4, Func Offset: 0x74
	// Line 969, Address: 0x10223f0, Func Offset: 0x80
	// Line 970, Address: 0x1022404, Func Offset: 0x94
	// Line 971, Address: 0x1022414, Func Offset: 0xa4
	// Line 972, Address: 0x1022428, Func Offset: 0xb8
	// Line 973, Address: 0x1022444, Func Offset: 0xd4
	// Line 976, Address: 0x102244c, Func Offset: 0xdc
	// Line 981, Address: 0x102246c, Func Offset: 0xfc
	// Func End, Address: 0x102247c, Func Offset: 0x10c
}

// 
// Start address: 0x1022480
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 995, Address: 0x1022480, Func Offset: 0
	// Line 1001, Address: 0x102249c, Func Offset: 0x1c
	// Line 1002, Address: 0x10224a0, Func Offset: 0x20
	// Line 1003, Address: 0x10224ac, Func Offset: 0x2c
	// Line 1004, Address: 0x10224b8, Func Offset: 0x38
	// Line 1005, Address: 0x10224c0, Func Offset: 0x40
	// Line 1006, Address: 0x10224c8, Func Offset: 0x48
	// Line 1008, Address: 0x10224e4, Func Offset: 0x64
	// Line 1009, Address: 0x10224f0, Func Offset: 0x70
	// Line 1010, Address: 0x10224fc, Func Offset: 0x7c
	// Line 1011, Address: 0x1022504, Func Offset: 0x84
	// Line 1013, Address: 0x102250c, Func Offset: 0x8c
	// Func End, Address: 0x1022530, Func Offset: 0xb0
}

// 
// Start address: 0x1022530
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon3 lD4;
	unsigned short wD5;
	// Line 1026, Address: 0x1022530, Func Offset: 0
	// Line 1035, Address: 0x1022550, Func Offset: 0x20
	// Line 1036, Address: 0x1022554, Func Offset: 0x24
	// Line 1037, Address: 0x1022560, Func Offset: 0x30
	// Line 1038, Address: 0x102256c, Func Offset: 0x3c
	// Line 1039, Address: 0x1022574, Func Offset: 0x44
	// Line 1040, Address: 0x102257c, Func Offset: 0x4c
	// Line 1042, Address: 0x1022598, Func Offset: 0x68
	// Line 1043, Address: 0x102259c, Func Offset: 0x6c
	// Line 1044, Address: 0x10225a8, Func Offset: 0x78
	// Line 1045, Address: 0x10225b4, Func Offset: 0x84
	// Line 1046, Address: 0x10225bc, Func Offset: 0x8c
	// Line 1048, Address: 0x10225c4, Func Offset: 0x94
	// Line 1049, Address: 0x10225d0, Func Offset: 0xa0
	// Line 1050, Address: 0x10225e4, Func Offset: 0xb4
	// Line 1052, Address: 0x10225f0, Func Offset: 0xc0
	// Line 1053, Address: 0x10225f8, Func Offset: 0xc8
	// Line 1055, Address: 0x1022600, Func Offset: 0xd0
	// Line 1057, Address: 0x1022620, Func Offset: 0xf0
	// Line 1063, Address: 0x102264c, Func Offset: 0x11c
	// Line 1064, Address: 0x1022660, Func Offset: 0x130
	// Line 1066, Address: 0x102266c, Func Offset: 0x13c
	// Line 1067, Address: 0x1022674, Func Offset: 0x144
	// Line 1068, Address: 0x102267c, Func Offset: 0x14c
	// Line 1070, Address: 0x102269c, Func Offset: 0x16c
	// Line 1076, Address: 0x10226c8, Func Offset: 0x198
	// Line 1077, Address: 0x10226dc, Func Offset: 0x1ac
	// Line 1079, Address: 0x10226e8, Func Offset: 0x1b8
	// Line 1080, Address: 0x10226f0, Func Offset: 0x1c0
	// Line 1081, Address: 0x10226f8, Func Offset: 0x1c8
	// Line 1083, Address: 0x1022718, Func Offset: 0x1e8
	// Line 1089, Address: 0x1022744, Func Offset: 0x214
	// Line 1090, Address: 0x1022758, Func Offset: 0x228
	// Line 1092, Address: 0x1022764, Func Offset: 0x234
	// Line 1093, Address: 0x102276c, Func Offset: 0x23c
	// Line 1094, Address: 0x1022774, Func Offset: 0x244
	// Line 1096, Address: 0x1022794, Func Offset: 0x264
	// Line 1105, Address: 0x10227c0, Func Offset: 0x290
	// Func End, Address: 0x10227e8, Func Offset: 0x2b8
}

// 
// Start address: 0x10227f0
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw)
{
	tagPOINT TilePoint;
	_anon3 lD4;
	unsigned short wD5;
	// Line 1122, Address: 0x10227f0, Func Offset: 0
	// Line 1127, Address: 0x1022810, Func Offset: 0x20
	// Line 1128, Address: 0x1022820, Func Offset: 0x30
	// Line 1129, Address: 0x1022838, Func Offset: 0x48
	// Line 1131, Address: 0x102284c, Func Offset: 0x5c
	// Line 1132, Address: 0x1022854, Func Offset: 0x64
	// Line 1134, Address: 0x102285c, Func Offset: 0x6c
	// Line 1136, Address: 0x102287c, Func Offset: 0x8c
	// Line 1142, Address: 0x10228a8, Func Offset: 0xb8
	// Line 1143, Address: 0x10228c0, Func Offset: 0xd0
	// Line 1145, Address: 0x10228d4, Func Offset: 0xe4
	// Line 1146, Address: 0x10228dc, Func Offset: 0xec
	// Line 1147, Address: 0x10228e4, Func Offset: 0xf4
	// Line 1149, Address: 0x1022904, Func Offset: 0x114
	// Line 1155, Address: 0x1022930, Func Offset: 0x140
	// Line 1156, Address: 0x1022948, Func Offset: 0x158
	// Line 1158, Address: 0x102295c, Func Offset: 0x16c
	// Line 1159, Address: 0x1022964, Func Offset: 0x174
	// Line 1160, Address: 0x102296c, Func Offset: 0x17c
	// Line 1162, Address: 0x102298c, Func Offset: 0x19c
	// Line 1168, Address: 0x10229b8, Func Offset: 0x1c8
	// Line 1169, Address: 0x10229d0, Func Offset: 0x1e0
	// Line 1171, Address: 0x10229e4, Func Offset: 0x1f4
	// Line 1172, Address: 0x10229ec, Func Offset: 0x1fc
	// Line 1173, Address: 0x10229f4, Func Offset: 0x204
	// Line 1175, Address: 0x1022a14, Func Offset: 0x224
	// Line 1184, Address: 0x1022a40, Func Offset: 0x250
	// Func End, Address: 0x1022a54, Func Offset: 0x264
}

// 
// Start address: 0x1022a60
void scrollwrtc()
{
	// Line 1191, Address: 0x1022a60, Func Offset: 0
	// Func End, Address: 0x1022a68, Func Offset: 0x8
}

// 
// Start address: 0x1022a70
void scrollwrtz()
{
	// Line 1196, Address: 0x1022a70, Func Offset: 0
	// Func End, Address: 0x1022a78, Func Offset: 0x8
}

// 
// Start address: 0x1022a80
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1214, Address: 0x1022a80, Func Offset: 0
	// Line 1227, Address: 0x1022aa8, Func Offset: 0x28
	// Line 1230, Address: 0x1022ac8, Func Offset: 0x48
	// Line 1231, Address: 0x1022adc, Func Offset: 0x5c
	// Line 1232, Address: 0x1022af0, Func Offset: 0x70
	// Line 1233, Address: 0x1022b04, Func Offset: 0x84
	// Line 1235, Address: 0x1022b18, Func Offset: 0x98
	// Line 1236, Address: 0x1022b24, Func Offset: 0xa4
	// Line 1237, Address: 0x1022b38, Func Offset: 0xb8
	// Func End, Address: 0x1022b48, Func Offset: 0xc8
}

// 
// Start address: 0x1022b50
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1241, Address: 0x1022b50, Func Offset: 0
	// Line 1245, Address: 0x1022b78, Func Offset: 0x28
	// Line 1248, Address: 0x1022b98, Func Offset: 0x48
	// Line 1249, Address: 0x1022bac, Func Offset: 0x5c
	// Line 1250, Address: 0x1022bc0, Func Offset: 0x70
	// Line 1251, Address: 0x1022bd4, Func Offset: 0x84
	// Line 1253, Address: 0x1022be8, Func Offset: 0x98
	// Line 1254, Address: 0x1022bf4, Func Offset: 0xa4
	// Line 1255, Address: 0x1022c08, Func Offset: 0xb8
	// Func End, Address: 0x1022c18, Func Offset: 0xc8
}

// 
// Start address: 0x1022c20
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1275, Address: 0x1022c20, Func Offset: 0
	// Line 1279, Address: 0x1022c48, Func Offset: 0x28
	// Line 1282, Address: 0x1022c68, Func Offset: 0x48
	// Line 1283, Address: 0x1022c7c, Func Offset: 0x5c
	// Line 1284, Address: 0x1022c8c, Func Offset: 0x6c
	// Line 1285, Address: 0x1022ca0, Func Offset: 0x80
	// Line 1287, Address: 0x1022cb0, Func Offset: 0x90
	// Line 1288, Address: 0x1022cbc, Func Offset: 0x9c
	// Line 1289, Address: 0x1022cd0, Func Offset: 0xb0
	// Func End, Address: 0x1022ce0, Func Offset: 0xc0
}

// 
// Start address: 0x1022ce0
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
	// Line 1308, Address: 0x1022ce0, Func Offset: 0
	// Line 1309, Address: 0x1022d14, Func Offset: 0x34
	// Line 1314, Address: 0x1022d18, Func Offset: 0x38
	// Line 1316, Address: 0x1022d28, Func Offset: 0x48
	// Line 1317, Address: 0x1022d2c, Func Offset: 0x4c
	// Line 1318, Address: 0x1022d34, Func Offset: 0x54
	// Line 1320, Address: 0x1022d44, Func Offset: 0x64
	// Line 1322, Address: 0x1022d48, Func Offset: 0x68
	// Line 1323, Address: 0x1022d50, Func Offset: 0x70
	// Line 1326, Address: 0x1022d58, Func Offset: 0x78
	// Line 1327, Address: 0x1022d60, Func Offset: 0x80
	// Line 1328, Address: 0x1022d6c, Func Offset: 0x8c
	// Line 1330, Address: 0x1022d78, Func Offset: 0x98
	// Line 1331, Address: 0x1022d80, Func Offset: 0xa0
	// Line 1332, Address: 0x1022d88, Func Offset: 0xa8
	// Line 1333, Address: 0x1022d90, Func Offset: 0xb0
	// Line 1335, Address: 0x1022d9c, Func Offset: 0xbc
	// Line 1336, Address: 0x1022da4, Func Offset: 0xc4
	// Line 1337, Address: 0x1022dac, Func Offset: 0xcc
	// Line 1338, Address: 0x1022db4, Func Offset: 0xd4
	// Line 1340, Address: 0x1022dc0, Func Offset: 0xe0
	// Line 1341, Address: 0x1022dc8, Func Offset: 0xe8
	// Line 1342, Address: 0x1022dd0, Func Offset: 0xf0
	// Line 1345, Address: 0x1022dd8, Func Offset: 0xf8
	// Line 1346, Address: 0x1022de0, Func Offset: 0x100
	// Line 1349, Address: 0x1022de8, Func Offset: 0x108
	// Line 1350, Address: 0x1022e2c, Func Offset: 0x14c
	// Line 1351, Address: 0x1022e70, Func Offset: 0x190
	// Line 1352, Address: 0x1022eb4, Func Offset: 0x1d4
	// Line 1354, Address: 0x1022ef8, Func Offset: 0x218
	// Func End, Address: 0x1022f28, Func Offset: 0x248
}

// 
// Start address: 0x1022f30
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1372, Address: 0x1022f30, Func Offset: 0
	// Line 1373, Address: 0x1022f50, Func Offset: 0x20
	// Line 1374, Address: 0x1022f70, Func Offset: 0x40
	// Func End, Address: 0x1022f80, Func Offset: 0x50
}

// 
// Start address: 0x1022f80
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1376, Address: 0x1022f80, Func Offset: 0
	// Line 1377, Address: 0x1022fa0, Func Offset: 0x20
	// Line 1378, Address: 0x1022fa4, Func Offset: 0x24
	// Line 1379, Address: 0x1022fc4, Func Offset: 0x44
	// Func End, Address: 0x1022fd4, Func Offset: 0x54
}

// 
// Start address: 0x1022fe0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1386, Address: 0x1022fe0, Func Offset: 0
	// Line 1392, Address: 0x1023010, Func Offset: 0x30
	// Line 1393, Address: 0x1023020, Func Offset: 0x40
	// Line 1399, Address: 0x1023030, Func Offset: 0x50
	// Line 1400, Address: 0x102304c, Func Offset: 0x6c
	// Line 1401, Address: 0x1023050, Func Offset: 0x70
	// Line 1403, Address: 0x102306c, Func Offset: 0x8c
	// Line 1404, Address: 0x102308c, Func Offset: 0xac
	// Line 1405, Address: 0x10230ac, Func Offset: 0xcc
	// Line 1406, Address: 0x10230b4, Func Offset: 0xd4
	// Line 1408, Address: 0x10230d4, Func Offset: 0xf4
	// Line 1409, Address: 0x10230f4, Func Offset: 0x114
	// Line 1410, Address: 0x102313c, Func Offset: 0x15c
	// Line 1412, Address: 0x1023148, Func Offset: 0x168
	// Line 1414, Address: 0x1023164, Func Offset: 0x184
	// Line 1419, Address: 0x102316c, Func Offset: 0x18c
	// Line 1420, Address: 0x1023178, Func Offset: 0x198
	// Line 1423, Address: 0x1023184, Func Offset: 0x1a4
	// Line 1424, Address: 0x102318c, Func Offset: 0x1ac
	// Line 1425, Address: 0x10231ac, Func Offset: 0x1cc
	// Line 1426, Address: 0x10231c8, Func Offset: 0x1e8
	// Line 1427, Address: 0x10231d0, Func Offset: 0x1f0
	// Line 1428, Address: 0x10231f0, Func Offset: 0x210
	// Line 1430, Address: 0x102320c, Func Offset: 0x22c
	// Line 1431, Address: 0x1023214, Func Offset: 0x234
	// Line 1432, Address: 0x102321c, Func Offset: 0x23c
	// Line 1433, Address: 0x1023228, Func Offset: 0x248
	// Line 1434, Address: 0x1023240, Func Offset: 0x260
	// Line 1436, Address: 0x1023250, Func Offset: 0x270
	// Line 1439, Address: 0x102325c, Func Offset: 0x27c
	// Line 1440, Address: 0x1023264, Func Offset: 0x284
	// Line 1441, Address: 0x1023268, Func Offset: 0x288
	// Func End, Address: 0x1023288, Func Offset: 0x2a8
}

// 
// Start address: 0x1023290
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1461, Address: 0x1023290, Func Offset: 0
	// Line 1469, Address: 0x10232b8, Func Offset: 0x28
	// Line 1470, Address: 0x102331c, Func Offset: 0x8c
	// Line 1476, Address: 0x1023324, Func Offset: 0x94
	// Line 1477, Address: 0x102332c, Func Offset: 0x9c
	// Line 1478, Address: 0x102334c, Func Offset: 0xbc
	// Line 1479, Address: 0x1023368, Func Offset: 0xd8
	// Line 1480, Address: 0x1023370, Func Offset: 0xe0
	// Line 1481, Address: 0x1023390, Func Offset: 0x100
	// Line 1484, Address: 0x10233ac, Func Offset: 0x11c
	// Line 1485, Address: 0x10233b4, Func Offset: 0x124
	// Line 1486, Address: 0x10233bc, Func Offset: 0x12c
	// Line 1487, Address: 0x10233c8, Func Offset: 0x138
	// Line 1488, Address: 0x10233e0, Func Offset: 0x150
	// Line 1489, Address: 0x10233e8, Func Offset: 0x158
	// Line 1494, Address: 0x10233f8, Func Offset: 0x168
	// Line 1497, Address: 0x1023404, Func Offset: 0x174
	// Line 1498, Address: 0x102340c, Func Offset: 0x17c
	// Line 1499, Address: 0x1023410, Func Offset: 0x180
	// Func End, Address: 0x102342c, Func Offset: 0x19c
}

// 
// Start address: 0x1023430
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1514, Address: 0x1023430, Func Offset: 0
	// Line 1521, Address: 0x102344c, Func Offset: 0x1c
	// Line 1522, Address: 0x1023450, Func Offset: 0x20
	// Line 1523, Address: 0x1023458, Func Offset: 0x28
	// Line 1524, Address: 0x102347c, Func Offset: 0x4c
	// Line 1525, Address: 0x1023488, Func Offset: 0x58
	// Line 1526, Address: 0x10234a0, Func Offset: 0x70
	// Line 1527, Address: 0x10234b4, Func Offset: 0x84
	// Line 1532, Address: 0x10234cc, Func Offset: 0x9c
	// Func End, Address: 0x10234e4, Func Offset: 0xb4
}

// 
// Start address: 0x10234f0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1546, Address: 0x10234f0, Func Offset: 0
	// Line 1547, Address: 0x10234fc, Func Offset: 0xc
	// Line 1548, Address: 0x1023528, Func Offset: 0x38
	// Line 1549, Address: 0x1023574, Func Offset: 0x84
	// Line 1550, Address: 0x10235a0, Func Offset: 0xb0
	// Line 1552, Address: 0x10235ec, Func Offset: 0xfc
	// Line 1558, Address: 0x10235f8, Func Offset: 0x108
	// Line 1559, Address: 0x10235fc, Func Offset: 0x10c
	// Func End, Address: 0x1023608, Func Offset: 0x118
}

// 
// Start address: 0x1023610
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1576, Address: 0x1023610, Func Offset: 0
	// Line 1577, Address: 0x102362c, Func Offset: 0x1c
	// Line 1579, Address: 0x1023648, Func Offset: 0x38
	// Func End, Address: 0x1023658, Func Offset: 0x48
}

// 
// Start address: 0x1023660
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1581, Address: 0x1023660, Func Offset: 0
	// Line 1582, Address: 0x102367c, Func Offset: 0x1c
	// Line 1583, Address: 0x1023680, Func Offset: 0x20
	// Line 1585, Address: 0x102369c, Func Offset: 0x3c
	// Func End, Address: 0x10236ac, Func Offset: 0x4c
}

// 
// Start address: 0x10236b0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1587, Address: 0x10236b0, Func Offset: 0
	// Line 1588, Address: 0x10236c4, Func Offset: 0x14
	// Line 1590, Address: 0x10236e0, Func Offset: 0x30
	// Func End, Address: 0x10236f0, Func Offset: 0x40
}

// 
// Start address: 0x10236f0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1592, Address: 0x10236f0, Func Offset: 0
	// Line 1593, Address: 0x102370c, Func Offset: 0x1c
	// Line 1595, Address: 0x1023728, Func Offset: 0x38
	// Func End, Address: 0x1023738, Func Offset: 0x48
}

// 
// Start address: 0x1023740
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1598, Address: 0x1023740, Func Offset: 0
	// Line 1599, Address: 0x1023758, Func Offset: 0x18
	// Line 1600, Address: 0x1023768, Func Offset: 0x28
	// Line 1601, Address: 0x1023778, Func Offset: 0x38
	// Line 1602, Address: 0x1023784, Func Offset: 0x44
	// Line 1604, Address: 0x1023790, Func Offset: 0x50
	// Line 1605, Address: 0x10237bc, Func Offset: 0x7c
	// Line 1608, Address: 0x10237e8, Func Offset: 0xa8
	// Func End, Address: 0x10237f4, Func Offset: 0xb4
}

// 
// Start address: 0x1023800
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1624, Address: 0x1023800, Func Offset: 0
	// Line 1629, Address: 0x1023818, Func Offset: 0x18
	// Line 1630, Address: 0x1023824, Func Offset: 0x24
	// Line 1631, Address: 0x1023830, Func Offset: 0x30
	// Line 1632, Address: 0x1023838, Func Offset: 0x38
	// Line 1633, Address: 0x102383c, Func Offset: 0x3c
	// Line 1635, Address: 0x1023854, Func Offset: 0x54
	// Line 1636, Address: 0x1023860, Func Offset: 0x60
	// Line 1637, Address: 0x102386c, Func Offset: 0x6c
	// Line 1638, Address: 0x1023874, Func Offset: 0x74
	// Line 1640, Address: 0x1023878, Func Offset: 0x78
	// Line 1642, Address: 0x1023890, Func Offset: 0x90
	// Func End, Address: 0x10238b0, Func Offset: 0xb0
}

// 
// Start address: 0x10238b0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1646, Address: 0x10238b0, Func Offset: 0
	// Line 1647, Address: 0x10238c8, Func Offset: 0x18
	// Line 1648, Address: 0x10238e8, Func Offset: 0x38
	// Func End, Address: 0x10238f8, Func Offset: 0x48
}

// 
// Start address: 0x1023900
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1653, Address: 0x1023900, Func Offset: 0
	// Line 1657, Address: 0x1023920, Func Offset: 0x20
	// Line 1660, Address: 0x102393c, Func Offset: 0x3c
	// Line 1664, Address: 0x1023964, Func Offset: 0x64
	// Line 1665, Address: 0x1023970, Func Offset: 0x70
	// Line 1667, Address: 0x1023998, Func Offset: 0x98
	// Func End, Address: 0x10239a8, Func Offset: 0xa8
}

// 
// Start address: 0x10239b0
void mapinit()
{
	// Line 1777, Address: 0x10239b0, Func Offset: 0
	// Line 1779, Address: 0x10239b8, Func Offset: 0x8
	// Line 1780, Address: 0x10239cc, Func Offset: 0x1c
	// Line 1783, Address: 0x10239e0, Func Offset: 0x30
	// Line 1784, Address: 0x1023a00, Func Offset: 0x50
	// Func End, Address: 0x1023a10, Func Offset: 0x60
}

// 
// Start address: 0x1023a10
void mapset()
{
	// Line 1795, Address: 0x1023a10, Func Offset: 0
	// Func End, Address: 0x1023a18, Func Offset: 0x8
}

