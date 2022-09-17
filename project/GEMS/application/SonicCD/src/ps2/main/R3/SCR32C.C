typedef struct _anon0;
typedef struct tagPOINT;
typedef struct _anon1;
typedef union _anon2;
typedef struct _anon3;
typedef struct _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef union _anon8;
typedef struct _anon9;
typedef struct _anon10;

typedef int(*type_4)(int, int, int, int, int);

typedef _anon10 type_0[20];
typedef unsigned char type_1[4];
typedef _anon10 type_2[0];
typedef unsigned char type_3[49];
typedef unsigned char type_5[0];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef _anon2* type_8[8];
typedef int type_9[14];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[14];
typedef short type_18[256];
typedef unsigned short type_19[3];
typedef _anon2* type_20[8];
typedef _anon1 type_21[128];
typedef unsigned short type_22[2];
typedef unsigned short type_23[16];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon10 spra[20];
		_anon10 spr[0];
	};
};

struct tagPOINT
{
	int x;
	int y;
};

struct _anon1
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon2 xposi;
	_anon2 yposi;
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

union _anon2
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon3
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
	unsigned short w;
	_anon9 b;
};

struct _anon9
{
	unsigned char l;
	unsigned char h;
};

struct _anon10
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char z32cwrttbl[49];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
_anon1 actwk[128];
unsigned char main_play;
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
_anon8 scr_die;
_anon6 scr_timer;
_anon8 zone_flag;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon2 scra_v_posit;
_anon2 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
short hscrollwork[256];
_anon2 scrb_h_posit;
_anon2 scrc_h_posit;
_anon2 scrz_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
unsigned char awasintbl[0];
_anon6 waterdirec;
_anon2* lphscrollbuff;
_anon8 scrflagc;
_anon8 scrflagz;
_anon8 scrflagb;
_anon2 vscroll;
short scra_hz;
_anon8 scrflaga;
_anon6 scroll_start;
short scra_vz;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon8 scrflagaw;
unsigned char mapwka[64][8];
_anon2 scra_v_posiw;
_anon2 scra_h_posiw;
_anon8 scrflagbw;
_anon2 scrb_v_posiw;
_anon2 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

void enecginit();
void divdevset();
_anon1* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4);
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
void scrv_up_ch(_anon2 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon2 lD1);
void scrv_move(_anon2 lD1);
void scrollb_hv(_anon2 lD4, _anon2 lD5);
void scrollb_v(unsigned short wD0);
void scrollb_h(int lD4, int flagb);
void scrollc_h(int lD4, int flagc);
void scrollz_h(int lD4, int flagz);
void scrollwrtadva();
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
void mapwrt_z11a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();

// 
// Start address: 0x1026fc0
void enecginit()
{
	// Line 111, Address: 0x1026fc0, Func Offset: 0
	// Func End, Address: 0x1026fc8, Func Offset: 0x8
}

// 
// Start address: 0x1026fd0
void divdevset()
{
	// Line 115, Address: 0x1026fd0, Func Offset: 0
	// Func End, Address: 0x1026fd8, Func Offset: 0x8
}

// 
// Start address: 0x1026fe0
_anon1* main_chk()
{
	// Line 169, Address: 0x1026fe0, Func Offset: 0
	// Line 170, Address: 0x1026ff4, Func Offset: 0x14
	// Line 172, Address: 0x1027004, Func Offset: 0x24
	// Line 173, Address: 0x102700c, Func Offset: 0x2c
	// Func End, Address: 0x1027014, Func Offset: 0x34
}

// 
// Start address: 0x1027020
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 186, Address: 0x1027020, Func Offset: 0
	// Line 192, Address: 0x102702c, Func Offset: 0xc
	// Line 197, Address: 0x1027060, Func Offset: 0x40
	// Line 199, Address: 0x10270a8, Func Offset: 0x88
	// Line 200, Address: 0x10270ac, Func Offset: 0x8c
	// Line 201, Address: 0x10270c8, Func Offset: 0xa8
	// Line 202, Address: 0x10270dc, Func Offset: 0xbc
	// Line 203, Address: 0x10270f8, Func Offset: 0xd8
	// Line 204, Address: 0x102710c, Func Offset: 0xec
	// Line 205, Address: 0x1027128, Func Offset: 0x108
	// Line 206, Address: 0x102713c, Func Offset: 0x11c
	// Line 207, Address: 0x1027158, Func Offset: 0x138
	// Line 208, Address: 0x102716c, Func Offset: 0x14c
	// Line 210, Address: 0x1027188, Func Offset: 0x168
	// Line 211, Address: 0x10271ac, Func Offset: 0x18c
	// Line 212, Address: 0x10271b8, Func Offset: 0x198
	// Line 214, Address: 0x10271c4, Func Offset: 0x1a4
	// Line 215, Address: 0x10271e0, Func Offset: 0x1c0
	// Line 217, Address: 0x10271ec, Func Offset: 0x1cc
	// Line 218, Address: 0x10271f4, Func Offset: 0x1d4
	// Func End, Address: 0x1027208, Func Offset: 0x1e8
}

// 
// Start address: 0x1027210
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 230, Address: 0x1027210, Func Offset: 0
	// Line 231, Address: 0x1027228, Func Offset: 0x18
	// Line 235, Address: 0x1027244, Func Offset: 0x34
	// Line 245, Address: 0x1027278, Func Offset: 0x68
	// Line 255, Address: 0x10272a4, Func Offset: 0x94
	// Line 256, Address: 0x10272b8, Func Offset: 0xa8
	// Line 257, Address: 0x10272c0, Func Offset: 0xb0
	// Line 258, Address: 0x10272d0, Func Offset: 0xc0
	// Line 260, Address: 0x10272e0, Func Offset: 0xd0
	// Line 262, Address: 0x10272f4, Func Offset: 0xe4
	// Line 265, Address: 0x10272fc, Func Offset: 0xec
	// Line 266, Address: 0x1027314, Func Offset: 0x104
	// Line 267, Address: 0x102733c, Func Offset: 0x12c
	// Line 270, Address: 0x1027344, Func Offset: 0x134
	// Line 273, Address: 0x1027364, Func Offset: 0x154
	// Line 274, Address: 0x1027380, Func Offset: 0x170
	// Line 278, Address: 0x1027394, Func Offset: 0x184
	// Line 279, Address: 0x10273a8, Func Offset: 0x198
	// Line 280, Address: 0x10273b4, Func Offset: 0x1a4
	// Line 282, Address: 0x10273bc, Func Offset: 0x1ac
	// Line 286, Address: 0x10273c0, Func Offset: 0x1b0
	// Line 287, Address: 0x10273e4, Func Offset: 0x1d4
	// Line 289, Address: 0x10273f4, Func Offset: 0x1e4
	// Line 291, Address: 0x10273fc, Func Offset: 0x1ec
	// Line 292, Address: 0x1027410, Func Offset: 0x200
	// Line 293, Address: 0x102741c, Func Offset: 0x20c
	// Line 295, Address: 0x1027424, Func Offset: 0x214
	// Line 298, Address: 0x1027428, Func Offset: 0x218
	// Line 299, Address: 0x102744c, Func Offset: 0x23c
	// Line 302, Address: 0x102745c, Func Offset: 0x24c
	// Line 304, Address: 0x1027464, Func Offset: 0x254
	// Line 306, Address: 0x1027474, Func Offset: 0x264
	// Line 307, Address: 0x1027478, Func Offset: 0x268
	// Line 308, Address: 0x1027490, Func Offset: 0x280
	// Line 309, Address: 0x10274a8, Func Offset: 0x298
	// Line 310, Address: 0x10274c0, Func Offset: 0x2b0
	// Line 313, Address: 0x10274d8, Func Offset: 0x2c8
	// Func End, Address: 0x10274f8, Func Offset: 0x2e8
}

// 
// Start address: 0x1027500
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 325, Address: 0x1027500, Func Offset: 0
	// Line 330, Address: 0x1027514, Func Offset: 0x14
	// Line 331, Address: 0x102751c, Func Offset: 0x1c
	// Line 332, Address: 0x1027544, Func Offset: 0x44
	// Line 333, Address: 0x1027560, Func Offset: 0x60
	// Line 334, Address: 0x1027594, Func Offset: 0x94
	// Line 335, Address: 0x10275a8, Func Offset: 0xa8
	// Line 339, Address: 0x10275ac, Func Offset: 0xac
	// Line 340, Address: 0x10275b8, Func Offset: 0xb8
	// Line 341, Address: 0x10275c0, Func Offset: 0xc0
	// Line 342, Address: 0x10275cc, Func Offset: 0xcc
	// Line 344, Address: 0x10275d8, Func Offset: 0xd8
	// Line 345, Address: 0x1027610, Func Offset: 0x110
	// Line 346, Address: 0x1027650, Func Offset: 0x150
	// Line 349, Address: 0x1027690, Func Offset: 0x190
	// Line 350, Address: 0x102769c, Func Offset: 0x19c
	// Line 351, Address: 0x10276b0, Func Offset: 0x1b0
	// Line 353, Address: 0x10276c0, Func Offset: 0x1c0
	// Func End, Address: 0x10276d4, Func Offset: 0x1d4
}

// 
// Start address: 0x10276e0
void scroll()
{
	int LineSpdTbl[14];
	unsigned char z32c_cnttbl[14];
	unsigned short z32c_kawatbl[3];
	short* pHScrollWork;
	_anon2* pHScrollBuff;
	_anon2* pHscrWk;
	int i;
	int j;
	unsigned short wD1;
	unsigned short wD3;
	unsigned short wD4;
	unsigned short wD5;
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 366, Address: 0x10276e0, Func Offset: 0
	// Line 367, Address: 0x1027700, Func Offset: 0x20
	// Line 374, Address: 0x1027734, Func Offset: 0x54
	// Line 377, Address: 0x1027768, Func Offset: 0x88
	// Line 387, Address: 0x102778c, Func Offset: 0xac
	// Line 390, Address: 0x102779c, Func Offset: 0xbc
	// Line 391, Address: 0x10277c8, Func Offset: 0xe8
	// Line 392, Address: 0x10277d4, Func Offset: 0xf4
	// Line 393, Address: 0x10277e0, Func Offset: 0x100
	// Line 395, Address: 0x10277ec, Func Offset: 0x10c
	// Line 396, Address: 0x10277fc, Func Offset: 0x11c
	// Line 399, Address: 0x102780c, Func Offset: 0x12c
	// Line 400, Address: 0x1027830, Func Offset: 0x150
	// Line 401, Address: 0x102786c, Func Offset: 0x18c
	// Line 403, Address: 0x10278a8, Func Offset: 0x1c8
	// Line 404, Address: 0x10278b0, Func Offset: 0x1d0
	// Line 405, Address: 0x10278b8, Func Offset: 0x1d8
	// Line 407, Address: 0x10278d8, Func Offset: 0x1f8
	// Line 408, Address: 0x10278ec, Func Offset: 0x20c
	// Line 409, Address: 0x10278f4, Func Offset: 0x214
	// Line 410, Address: 0x1027908, Func Offset: 0x228
	// Line 411, Address: 0x102791c, Func Offset: 0x23c
	// Line 413, Address: 0x1027920, Func Offset: 0x240
	// Line 415, Address: 0x1027928, Func Offset: 0x248
	// Line 418, Address: 0x102793c, Func Offset: 0x25c
	// Line 419, Address: 0x1027950, Func Offset: 0x270
	// Line 420, Address: 0x1027960, Func Offset: 0x280
	// Line 421, Address: 0x1027970, Func Offset: 0x290
	// Line 423, Address: 0x1027980, Func Offset: 0x2a0
	// Line 424, Address: 0x102799c, Func Offset: 0x2bc
	// Line 425, Address: 0x10279b8, Func Offset: 0x2d8
	// Line 426, Address: 0x10279c0, Func Offset: 0x2e0
	// Line 449, Address: 0x10279c8, Func Offset: 0x2e8
	// Line 450, Address: 0x10279d0, Func Offset: 0x2f0
	// Line 451, Address: 0x10279dc, Func Offset: 0x2fc
	// Line 452, Address: 0x10279f4, Func Offset: 0x314
	// Line 453, Address: 0x10279f8, Func Offset: 0x318
	// Line 454, Address: 0x1027a08, Func Offset: 0x328
	// Line 455, Address: 0x1027a0c, Func Offset: 0x32c
	// Line 456, Address: 0x1027a14, Func Offset: 0x334
	// Line 457, Address: 0x1027a38, Func Offset: 0x358
	// Line 458, Address: 0x1027a48, Func Offset: 0x368
	// Line 459, Address: 0x1027a4c, Func Offset: 0x36c
	// Line 460, Address: 0x1027a54, Func Offset: 0x374
	// Line 468, Address: 0x1027a64, Func Offset: 0x384
	// Line 469, Address: 0x1027a8c, Func Offset: 0x3ac
	// Line 470, Address: 0x1027a98, Func Offset: 0x3b8
	// Line 471, Address: 0x1027ab8, Func Offset: 0x3d8
	// Line 473, Address: 0x1027ac4, Func Offset: 0x3e4
	// Line 474, Address: 0x1027ac8, Func Offset: 0x3e8
	// Line 476, Address: 0x1027ad4, Func Offset: 0x3f4
	// Line 477, Address: 0x1027ae0, Func Offset: 0x400
	// Line 478, Address: 0x1027aec, Func Offset: 0x40c
	// Line 479, Address: 0x1027b08, Func Offset: 0x428
	// Line 480, Address: 0x1027b1c, Func Offset: 0x43c
	// Line 481, Address: 0x1027b40, Func Offset: 0x460
	// Line 482, Address: 0x1027b50, Func Offset: 0x470
	// Line 483, Address: 0x1027b74, Func Offset: 0x494
	// Line 485, Address: 0x1027b84, Func Offset: 0x4a4
	// Line 486, Address: 0x1027b90, Func Offset: 0x4b0
	// Line 488, Address: 0x1027bb4, Func Offset: 0x4d4
	// Line 489, Address: 0x1027bc0, Func Offset: 0x4e0
	// Line 490, Address: 0x1027bd4, Func Offset: 0x4f4
	// Line 492, Address: 0x1027be4, Func Offset: 0x504
	// Line 494, Address: 0x1027c08, Func Offset: 0x528
	// Line 495, Address: 0x1027c14, Func Offset: 0x534
	// Line 496, Address: 0x1027c28, Func Offset: 0x548
	// Line 511, Address: 0x1027c38, Func Offset: 0x558
	// Line 512, Address: 0x1027c40, Func Offset: 0x560
	// Line 513, Address: 0x1027c4c, Func Offset: 0x56c
	// Line 514, Address: 0x1027c78, Func Offset: 0x598
	// Line 515, Address: 0x1027c7c, Func Offset: 0x59c
	// Line 516, Address: 0x1027c90, Func Offset: 0x5b0
	// Line 517, Address: 0x1027ca0, Func Offset: 0x5c0
	// Line 518, Address: 0x1027cac, Func Offset: 0x5cc
	// Line 522, Address: 0x1027cb8, Func Offset: 0x5d8
	// Line 524, Address: 0x1027cdc, Func Offset: 0x5fc
	// Line 525, Address: 0x1027ce8, Func Offset: 0x608
	// Line 526, Address: 0x1027cfc, Func Offset: 0x61c
	// Line 528, Address: 0x1027d0c, Func Offset: 0x62c
	// Line 530, Address: 0x1027d30, Func Offset: 0x650
	// Line 531, Address: 0x1027d3c, Func Offset: 0x65c
	// Line 532, Address: 0x1027d50, Func Offset: 0x670
	// Line 534, Address: 0x1027d60, Func Offset: 0x680
	// Line 536, Address: 0x1027d84, Func Offset: 0x6a4
	// Line 537, Address: 0x1027d90, Func Offset: 0x6b0
	// Line 538, Address: 0x1027da4, Func Offset: 0x6c4
	// Line 540, Address: 0x1027db4, Func Offset: 0x6d4
	// Line 542, Address: 0x1027dd8, Func Offset: 0x6f8
	// Line 543, Address: 0x1027de4, Func Offset: 0x704
	// Line 544, Address: 0x1027df8, Func Offset: 0x718
	// Line 547, Address: 0x1027e08, Func Offset: 0x728
	// Line 548, Address: 0x1027e40, Func Offset: 0x760
	// Line 549, Address: 0x1027e4c, Func Offset: 0x76c
	// Line 550, Address: 0x1027e6c, Func Offset: 0x78c
	// Line 551, Address: 0x1027e78, Func Offset: 0x798
	// Line 553, Address: 0x1027e84, Func Offset: 0x7a4
	// Line 554, Address: 0x1027e90, Func Offset: 0x7b0
	// Line 555, Address: 0x1027ebc, Func Offset: 0x7dc
	// Line 556, Address: 0x1027ee0, Func Offset: 0x800
	// Line 557, Address: 0x1027ef0, Func Offset: 0x810
	// Line 558, Address: 0x1027f14, Func Offset: 0x834
	// Line 560, Address: 0x1027f24, Func Offset: 0x844
	// Line 562, Address: 0x1027f48, Func Offset: 0x868
	// Line 563, Address: 0x1027f54, Func Offset: 0x874
	// Line 564, Address: 0x1027f68, Func Offset: 0x888
	// Line 566, Address: 0x1027f78, Func Offset: 0x898
	// Line 567, Address: 0x1027f84, Func Offset: 0x8a4
	// Line 568, Address: 0x1027f90, Func Offset: 0x8b0
	// Line 569, Address: 0x1027f9c, Func Offset: 0x8bc
	// Line 570, Address: 0x1027fa4, Func Offset: 0x8c4
	// Line 571, Address: 0x1027fac, Func Offset: 0x8cc
	// Line 572, Address: 0x1027fd0, Func Offset: 0x8f0
	// Line 573, Address: 0x1027fe8, Func Offset: 0x908
	// Line 574, Address: 0x1027ff0, Func Offset: 0x910
	// Line 575, Address: 0x1027ff8, Func Offset: 0x918
	// Line 577, Address: 0x102800c, Func Offset: 0x92c
	// Line 578, Address: 0x1028014, Func Offset: 0x934
	// Line 579, Address: 0x1028024, Func Offset: 0x944
	// Line 582, Address: 0x102802c, Func Offset: 0x94c
	// Line 583, Address: 0x1028038, Func Offset: 0x958
	// Line 584, Address: 0x102805c, Func Offset: 0x97c
	// Line 586, Address: 0x1028070, Func Offset: 0x990
	// Line 589, Address: 0x102809c, Func Offset: 0x9bc
	// Line 591, Address: 0x10280a4, Func Offset: 0x9c4
	// Line 596, Address: 0x10280b0, Func Offset: 0x9d0
	// Line 597, Address: 0x10280c4, Func Offset: 0x9e4
	// Line 598, Address: 0x10280d0, Func Offset: 0x9f0
	// Line 599, Address: 0x10280e4, Func Offset: 0xa04
	// Line 602, Address: 0x10280fc, Func Offset: 0xa1c
	// Line 603, Address: 0x1028110, Func Offset: 0xa30
	// Line 604, Address: 0x1028124, Func Offset: 0xa44
	// Line 605, Address: 0x1028138, Func Offset: 0xa58
	// Line 606, Address: 0x1028158, Func Offset: 0xa78
	// Line 607, Address: 0x1028160, Func Offset: 0xa80
	// Line 608, Address: 0x1028180, Func Offset: 0xaa0
	// Line 609, Address: 0x1028198, Func Offset: 0xab8
	// Line 610, Address: 0x10281a0, Func Offset: 0xac0
	// Line 611, Address: 0x10281cc, Func Offset: 0xaec
	// Line 612, Address: 0x10281e0, Func Offset: 0xb00
	// Line 613, Address: 0x10281fc, Func Offset: 0xb1c
	// Line 616, Address: 0x1028200, Func Offset: 0xb20
	// Line 617, Address: 0x102820c, Func Offset: 0xb2c
	// Line 618, Address: 0x1028218, Func Offset: 0xb38
	// Line 619, Address: 0x1028224, Func Offset: 0xb44
	// Line 620, Address: 0x102822c, Func Offset: 0xb4c
	// Line 622, Address: 0x1028250, Func Offset: 0xb70
	// Func End, Address: 0x1028278, Func Offset: 0xb98
}

// 
// Start address: 0x1028280
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 627, Address: 0x1028280, Func Offset: 0
	// Line 634, Address: 0x10282b4, Func Offset: 0x34
	// Line 635, Address: 0x10282d4, Func Offset: 0x54
	// Line 636, Address: 0x10282dc, Func Offset: 0x5c
	// Line 638, Address: 0x10282e4, Func Offset: 0x64
	// Line 643, Address: 0x1028308, Func Offset: 0x88
	// Line 644, Address: 0x102831c, Func Offset: 0x9c
	// Line 646, Address: 0x1028348, Func Offset: 0xc8
	// Line 647, Address: 0x1028358, Func Offset: 0xd8
	// Line 648, Address: 0x102836c, Func Offset: 0xec
	// Line 651, Address: 0x1028374, Func Offset: 0xf4
	// Line 654, Address: 0x1028390, Func Offset: 0x110
	// Line 659, Address: 0x10283b4, Func Offset: 0x134
	// Line 660, Address: 0x10283c4, Func Offset: 0x144
	// Line 663, Address: 0x10283d8, Func Offset: 0x158
	// Line 665, Address: 0x10283dc, Func Offset: 0x15c
	// Line 668, Address: 0x10283e4, Func Offset: 0x164
	// Line 669, Address: 0x10283ec, Func Offset: 0x16c
	// Line 670, Address: 0x10283f0, Func Offset: 0x170
	// Line 671, Address: 0x1028400, Func Offset: 0x180
	// Line 676, Address: 0x1028428, Func Offset: 0x1a8
	// Line 677, Address: 0x1028430, Func Offset: 0x1b0
	// Line 678, Address: 0x1028438, Func Offset: 0x1b8
	// Line 682, Address: 0x1028440, Func Offset: 0x1c0
	// Line 683, Address: 0x1028470, Func Offset: 0x1f0
	// Line 686, Address: 0x1028488, Func Offset: 0x208
	// Line 689, Address: 0x10284ac, Func Offset: 0x22c
	// Line 690, Address: 0x10284dc, Func Offset: 0x25c
	// Line 691, Address: 0x10284f4, Func Offset: 0x274
	// Line 699, Address: 0x10284fc, Func Offset: 0x27c
	// Line 700, Address: 0x102852c, Func Offset: 0x2ac
	// Line 705, Address: 0x1028544, Func Offset: 0x2c4
	// Line 706, Address: 0x102854c, Func Offset: 0x2cc
	// Line 707, Address: 0x1028550, Func Offset: 0x2d0
	// Line 710, Address: 0x1028568, Func Offset: 0x2e8
	// Line 711, Address: 0x102857c, Func Offset: 0x2fc
	// Line 712, Address: 0x10285a8, Func Offset: 0x328
	// Line 713, Address: 0x10285bc, Func Offset: 0x33c
	// Line 714, Address: 0x10285d8, Func Offset: 0x358
	// Line 715, Address: 0x10285e0, Func Offset: 0x360
	// Line 716, Address: 0x10285e8, Func Offset: 0x368
	// Line 717, Address: 0x10285ec, Func Offset: 0x36c
	// Line 718, Address: 0x1028600, Func Offset: 0x380
	// Line 719, Address: 0x1028614, Func Offset: 0x394
	// Line 721, Address: 0x1028638, Func Offset: 0x3b8
	// Line 724, Address: 0x1028640, Func Offset: 0x3c0
	// Line 725, Address: 0x1028650, Func Offset: 0x3d0
	// Line 726, Address: 0x102865c, Func Offset: 0x3dc
	// Line 727, Address: 0x1028680, Func Offset: 0x400
	// Line 728, Address: 0x1028688, Func Offset: 0x408
	// Func End, Address: 0x10286a8, Func Offset: 0x428
}

// 
// Start address: 0x10286b0
void scroll_h()
{
	unsigned short wD4;
	// Line 744, Address: 0x10286b0, Func Offset: 0
	// Line 747, Address: 0x10286bc, Func Offset: 0xc
	// Line 748, Address: 0x10286c8, Func Offset: 0x18
	// Line 749, Address: 0x10286d0, Func Offset: 0x20
	// Line 750, Address: 0x1028704, Func Offset: 0x54
	// Line 751, Address: 0x1028718, Func Offset: 0x68
	// Line 752, Address: 0x1028744, Func Offset: 0x94
	// Line 753, Address: 0x1028758, Func Offset: 0xa8
	// Line 756, Address: 0x1028760, Func Offset: 0xb0
	// Line 761, Address: 0x1028774, Func Offset: 0xc4
	// Func End, Address: 0x1028788, Func Offset: 0xd8
}

// 
// Start address: 0x1028790
void scrh_move()
{
	unsigned short wD0;
	// Line 763, Address: 0x1028790, Func Offset: 0
	// Line 766, Address: 0x102879c, Func Offset: 0xc
	// Line 767, Address: 0x10287a8, Func Offset: 0x18
	// Line 768, Address: 0x10287bc, Func Offset: 0x2c
	// Line 769, Address: 0x10287d0, Func Offset: 0x40
	// Line 771, Address: 0x10287dc, Func Offset: 0x4c
	// Line 772, Address: 0x10287e4, Func Offset: 0x54
	// Line 773, Address: 0x10287ec, Func Offset: 0x5c
	// Line 774, Address: 0x1028804, Func Offset: 0x74
	// Line 775, Address: 0x1028810, Func Offset: 0x80
	// Line 777, Address: 0x1028818, Func Offset: 0x88
	// Line 780, Address: 0x1028824, Func Offset: 0x94
	// Func End, Address: 0x1028838, Func Offset: 0xa8
}

// 
// Start address: 0x1028840
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 783, Address: 0x1028840, Func Offset: 0
	// Line 786, Address: 0x102884c, Func Offset: 0xc
	// Line 787, Address: 0x102886c, Func Offset: 0x2c
	// Line 790, Address: 0x1028874, Func Offset: 0x34
	// Line 791, Address: 0x102888c, Func Offset: 0x4c
	// Line 792, Address: 0x10288bc, Func Offset: 0x7c
	// Line 795, Address: 0x10288c8, Func Offset: 0x88
	// Line 796, Address: 0x10288d0, Func Offset: 0x90
	// Line 797, Address: 0x10288e4, Func Offset: 0xa4
	// Line 798, Address: 0x1028914, Func Offset: 0xd4
	// Line 799, Address: 0x1028920, Func Offset: 0xe0
	// Line 801, Address: 0x1028928, Func Offset: 0xe8
	// Func End, Address: 0x1028938, Func Offset: 0xf8
}

// 
// Start address: 0x1028940
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 804, Address: 0x1028940, Func Offset: 0
	// Line 807, Address: 0x102894c, Func Offset: 0xc
	// Line 808, Address: 0x102896c, Func Offset: 0x2c
	// Line 811, Address: 0x1028974, Func Offset: 0x34
	// Line 812, Address: 0x102898c, Func Offset: 0x4c
	// Line 813, Address: 0x10289bc, Func Offset: 0x7c
	// Line 816, Address: 0x10289c8, Func Offset: 0x88
	// Line 817, Address: 0x10289d0, Func Offset: 0x90
	// Line 818, Address: 0x10289e4, Func Offset: 0xa4
	// Line 819, Address: 0x1028a14, Func Offset: 0xd4
	// Line 820, Address: 0x1028a20, Func Offset: 0xe0
	// Line 822, Address: 0x1028a28, Func Offset: 0xe8
	// Func End, Address: 0x1028a38, Func Offset: 0xf8
}

// 
// Start address: 0x1028a40
void scroll_v()
{
	unsigned short wD0;
	// Line 841, Address: 0x1028a40, Func Offset: 0
	// Line 844, Address: 0x1028a4c, Func Offset: 0xc
	// Line 845, Address: 0x1028a78, Func Offset: 0x38
	// Line 846, Address: 0x1028a90, Func Offset: 0x50
	// Line 849, Address: 0x1028a98, Func Offset: 0x58
	// Line 850, Address: 0x1028ab0, Func Offset: 0x70
	// Line 851, Address: 0x1028ab8, Func Offset: 0x78
	// Line 852, Address: 0x1028ad8, Func Offset: 0x98
	// Line 853, Address: 0x1028aec, Func Offset: 0xac
	// Line 854, Address: 0x1028af8, Func Offset: 0xb8
	// Line 856, Address: 0x1028b00, Func Offset: 0xc0
	// Line 857, Address: 0x1028b14, Func Offset: 0xd4
	// Line 858, Address: 0x1028b24, Func Offset: 0xe4
	// Line 859, Address: 0x1028b2c, Func Offset: 0xec
	// Line 860, Address: 0x1028b38, Func Offset: 0xf8
	// Line 862, Address: 0x1028b40, Func Offset: 0x100
	// Line 863, Address: 0x1028b48, Func Offset: 0x108
	// Line 864, Address: 0x1028b5c, Func Offset: 0x11c
	// Line 865, Address: 0x1028b64, Func Offset: 0x124
	// Line 871, Address: 0x1028b6c, Func Offset: 0x12c
	// Line 872, Address: 0x1028b80, Func Offset: 0x140
	// Line 873, Address: 0x1028b88, Func Offset: 0x148
	// Line 874, Address: 0x1028b94, Func Offset: 0x154
	// Line 876, Address: 0x1028b9c, Func Offset: 0x15c
	// Line 877, Address: 0x1028bb0, Func Offset: 0x170
	// Line 878, Address: 0x1028bb8, Func Offset: 0x178
	// Line 883, Address: 0x1028bc0, Func Offset: 0x180
	// Line 885, Address: 0x1028bc8, Func Offset: 0x188
	// Func End, Address: 0x1028bdc, Func Offset: 0x19c
}

// 
// Start address: 0x1028be0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 891, Address: 0x1028be0, Func Offset: 0
	// Line 894, Address: 0x1028bf0, Func Offset: 0x10
	// Line 895, Address: 0x1028c0c, Func Offset: 0x2c
	// Line 896, Address: 0x1028c18, Func Offset: 0x38
	// Line 899, Address: 0x1028c20, Func Offset: 0x40
	// Line 900, Address: 0x1028c2c, Func Offset: 0x4c
	// Line 901, Address: 0x1028c44, Func Offset: 0x64
	// Line 904, Address: 0x1028c60, Func Offset: 0x80
	// Line 905, Address: 0x1028c70, Func Offset: 0x90
	// Line 906, Address: 0x1028c7c, Func Offset: 0x9c
	// Line 908, Address: 0x1028c84, Func Offset: 0xa4
	// Line 909, Address: 0x1028ca4, Func Offset: 0xc4
	// Line 910, Address: 0x1028cb0, Func Offset: 0xd0
	// Line 911, Address: 0x1028cb8, Func Offset: 0xd8
	// Line 912, Address: 0x1028cd8, Func Offset: 0xf8
	// Line 913, Address: 0x1028ce4, Func Offset: 0x104
	// Line 915, Address: 0x1028cec, Func Offset: 0x10c
	// Line 919, Address: 0x1028cf8, Func Offset: 0x118
	// Func End, Address: 0x1028d0c, Func Offset: 0x12c
}

// 
// Start address: 0x1028d10
void sv_move_main1(unsigned short wD0)
{
	// Line 923, Address: 0x1028d10, Func Offset: 0
	// Line 925, Address: 0x1028d1c, Func Offset: 0xc
	// Line 926, Address: 0x1028d3c, Func Offset: 0x2c
	// Line 927, Address: 0x1028d48, Func Offset: 0x38
	// Line 928, Address: 0x1028d50, Func Offset: 0x40
	// Line 929, Address: 0x1028d70, Func Offset: 0x60
	// Line 930, Address: 0x1028d7c, Func Offset: 0x6c
	// Line 932, Address: 0x1028d84, Func Offset: 0x74
	// Line 935, Address: 0x1028d90, Func Offset: 0x80
	// Func End, Address: 0x1028da0, Func Offset: 0x90
}

// 
// Start address: 0x1028da0
void sv_move_main2(unsigned short wD0)
{
	// Line 938, Address: 0x1028da0, Func Offset: 0
	// Line 940, Address: 0x1028dac, Func Offset: 0xc
	// Line 941, Address: 0x1028dcc, Func Offset: 0x2c
	// Line 942, Address: 0x1028dd8, Func Offset: 0x38
	// Line 943, Address: 0x1028de0, Func Offset: 0x40
	// Line 944, Address: 0x1028e00, Func Offset: 0x60
	// Line 945, Address: 0x1028e0c, Func Offset: 0x6c
	// Line 947, Address: 0x1028e14, Func Offset: 0x74
	// Line 950, Address: 0x1028e20, Func Offset: 0x80
	// Func End, Address: 0x1028e30, Func Offset: 0x90
}

// 
// Start address: 0x1028e30
void sv_move_sub2()
{
	// Line 953, Address: 0x1028e30, Func Offset: 0
	// Line 954, Address: 0x1028e38, Func Offset: 0x8
	// Line 955, Address: 0x1028e40, Func Offset: 0x10
	// Line 956, Address: 0x1028e4c, Func Offset: 0x1c
	// Func End, Address: 0x1028e5c, Func Offset: 0x2c
}

// 
// Start address: 0x1028e60
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 959, Address: 0x1028e60, Func Offset: 0
	// Line 962, Address: 0x1028e6c, Func Offset: 0xc
	// Line 963, Address: 0x1028e70, Func Offset: 0x10
	// Line 964, Address: 0x1028e78, Func Offset: 0x18
	// Line 965, Address: 0x1028e94, Func Offset: 0x34
	// Line 966, Address: 0x1028eb0, Func Offset: 0x50
	// Line 967, Address: 0x1028ebc, Func Offset: 0x5c
	// Line 969, Address: 0x1028ec4, Func Offset: 0x64
	// Line 972, Address: 0x1028ed0, Func Offset: 0x70
	// Func End, Address: 0x1028ee0, Func Offset: 0x80
}

// 
// Start address: 0x1028ee0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 977, Address: 0x1028ee0, Func Offset: 0
	// Line 981, Address: 0x1028ef0, Func Offset: 0x10
	// Line 982, Address: 0x1028f0c, Func Offset: 0x2c
	// Line 983, Address: 0x1028f18, Func Offset: 0x38
	// Line 985, Address: 0x1028f2c, Func Offset: 0x4c
	// Line 986, Address: 0x1028f34, Func Offset: 0x54
	// Line 987, Address: 0x1028f3c, Func Offset: 0x5c
	// Line 988, Address: 0x1028f40, Func Offset: 0x60
	// Line 989, Address: 0x1028f4c, Func Offset: 0x6c
	// Func End, Address: 0x1028f60, Func Offset: 0x80
}

// 
// Start address: 0x1028f60
void scrv_up_ch(_anon2 lD1)
{
	// Line 993, Address: 0x1028f60, Func Offset: 0
	// Line 994, Address: 0x1028f6c, Func Offset: 0xc
	// Line 995, Address: 0x1028f94, Func Offset: 0x34
	// Line 996, Address: 0x1028fac, Func Offset: 0x4c
	// Line 997, Address: 0x1028fb8, Func Offset: 0x58
	// Line 998, Address: 0x1028fcc, Func Offset: 0x6c
	// Line 999, Address: 0x1028fe0, Func Offset: 0x80
	// Line 1000, Address: 0x1028ff4, Func Offset: 0x94
	// Line 1003, Address: 0x1028ffc, Func Offset: 0x9c
	// Line 1006, Address: 0x1029008, Func Offset: 0xa8
	// Line 1008, Address: 0x1029014, Func Offset: 0xb4
	// Func End, Address: 0x1029024, Func Offset: 0xc4
}

// 
// Start address: 0x1029030
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 1014, Address: 0x1029030, Func Offset: 0
	// Line 1018, Address: 0x1029040, Func Offset: 0x10
	// Line 1019, Address: 0x1029044, Func Offset: 0x14
	// Line 1020, Address: 0x102904c, Func Offset: 0x1c
	// Line 1021, Address: 0x1029058, Func Offset: 0x28
	// Line 1023, Address: 0x102906c, Func Offset: 0x3c
	// Line 1024, Address: 0x1029074, Func Offset: 0x44
	// Line 1025, Address: 0x102907c, Func Offset: 0x4c
	// Line 1027, Address: 0x1029080, Func Offset: 0x50
	// Line 1029, Address: 0x102908c, Func Offset: 0x5c
	// Func End, Address: 0x10290a0, Func Offset: 0x70
}

// 
// Start address: 0x10290a0
void scrv_down_ch(_anon2 lD1)
{
	// Line 1033, Address: 0x10290a0, Func Offset: 0
	// Line 1034, Address: 0x10290ac, Func Offset: 0xc
	// Line 1035, Address: 0x10290d4, Func Offset: 0x34
	// Line 1036, Address: 0x10290e0, Func Offset: 0x40
	// Line 1037, Address: 0x10290f4, Func Offset: 0x54
	// Line 1038, Address: 0x1029108, Func Offset: 0x68
	// Line 1039, Address: 0x102911c, Func Offset: 0x7c
	// Line 1040, Address: 0x1029130, Func Offset: 0x90
	// Line 1042, Address: 0x1029138, Func Offset: 0x98
	// Line 1045, Address: 0x1029144, Func Offset: 0xa4
	// Line 1047, Address: 0x1029150, Func Offset: 0xb0
	// Func End, Address: 0x1029160, Func Offset: 0xc0
}

// 
// Start address: 0x1029160
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1050, Address: 0x1029160, Func Offset: 0
	// Line 1053, Address: 0x1029170, Func Offset: 0x10
	// Line 1055, Address: 0x102917c, Func Offset: 0x1c
	// Line 1056, Address: 0x1029184, Func Offset: 0x24
	// Line 1057, Address: 0x102918c, Func Offset: 0x2c
	// Line 1059, Address: 0x1029190, Func Offset: 0x30
	// Line 1060, Address: 0x10291b8, Func Offset: 0x58
	// Line 1063, Address: 0x10291c4, Func Offset: 0x64
	// Line 1064, Address: 0x10291f8, Func Offset: 0x98
	// Line 1065, Address: 0x102920c, Func Offset: 0xac
	// Line 1067, Address: 0x1029238, Func Offset: 0xd8
	// Line 1068, Address: 0x102924c, Func Offset: 0xec
	// Line 1070, Address: 0x1029254, Func Offset: 0xf4
	// Line 1075, Address: 0x1029268, Func Offset: 0x108
	// Func End, Address: 0x102927c, Func Offset: 0x11c
}

// 
// Start address: 0x1029280
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1079, Address: 0x1029280, Func Offset: 0
	// Line 1082, Address: 0x102928c, Func Offset: 0xc
	// Line 1083, Address: 0x102929c, Func Offset: 0x1c
	// Line 1084, Address: 0x10292ac, Func Offset: 0x2c
	// Line 1086, Address: 0x10292b8, Func Offset: 0x38
	// Line 1088, Address: 0x10292ec, Func Offset: 0x6c
	// Line 1089, Address: 0x1029300, Func Offset: 0x80
	// Line 1090, Address: 0x1029310, Func Offset: 0x90
	// Line 1091, Address: 0x1029324, Func Offset: 0xa4
	// Line 1092, Address: 0x1029338, Func Offset: 0xb8
	// Line 1095, Address: 0x1029340, Func Offset: 0xc0
	// Line 1100, Address: 0x1029354, Func Offset: 0xd4
	// Line 1101, Address: 0x1029364, Func Offset: 0xe4
	// Line 1102, Address: 0x1029374, Func Offset: 0xf4
	// Line 1104, Address: 0x1029380, Func Offset: 0x100
	// Line 1106, Address: 0x10293b4, Func Offset: 0x134
	// Line 1107, Address: 0x10293c8, Func Offset: 0x148
	// Line 1108, Address: 0x10293d8, Func Offset: 0x158
	// Line 1109, Address: 0x10293ec, Func Offset: 0x16c
	// Line 1110, Address: 0x1029400, Func Offset: 0x180
	// Line 1113, Address: 0x1029408, Func Offset: 0x188
	// Line 1118, Address: 0x102941c, Func Offset: 0x19c
	// Func End, Address: 0x1029428, Func Offset: 0x1a8
}

// 
// Start address: 0x1029430
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1125, Address: 0x1029430, Func Offset: 0
	// Line 1128, Address: 0x102943c, Func Offset: 0xc
	// Line 1129, Address: 0x1029448, Func Offset: 0x18
	// Line 1131, Address: 0x1029454, Func Offset: 0x24
	// Line 1132, Address: 0x1029480, Func Offset: 0x50
	// Line 1133, Address: 0x1029494, Func Offset: 0x64
	// Line 1134, Address: 0x10294c4, Func Offset: 0x94
	// Line 1135, Address: 0x10294d8, Func Offset: 0xa8
	// Line 1138, Address: 0x10294e0, Func Offset: 0xb0
	// Line 1143, Address: 0x10294f4, Func Offset: 0xc4
	// Func End, Address: 0x1029504, Func Offset: 0xd4
}

// 
// Start address: 0x1029510
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1147, Address: 0x1029510, Func Offset: 0
	// Line 1151, Address: 0x1029520, Func Offset: 0x10
	// Line 1152, Address: 0x102952c, Func Offset: 0x1c
	// Line 1153, Address: 0x102953c, Func Offset: 0x2c
	// Line 1155, Address: 0x1029548, Func Offset: 0x38
	// Line 1156, Address: 0x1029550, Func Offset: 0x40
	// Line 1157, Address: 0x1029558, Func Offset: 0x48
	// Line 1159, Address: 0x1029564, Func Offset: 0x54
	// Line 1160, Address: 0x1029570, Func Offset: 0x60
	// Line 1161, Address: 0x1029584, Func Offset: 0x74
	// Line 1162, Address: 0x1029590, Func Offset: 0x80
	// Line 1163, Address: 0x10295a4, Func Offset: 0x94
	// Line 1164, Address: 0x10295b4, Func Offset: 0xa4
	// Line 1165, Address: 0x10295c8, Func Offset: 0xb8
	// Line 1166, Address: 0x10295e4, Func Offset: 0xd4
	// Line 1169, Address: 0x10295ec, Func Offset: 0xdc
	// Line 1174, Address: 0x102960c, Func Offset: 0xfc
	// Func End, Address: 0x102961c, Func Offset: 0x10c
}

// 
// Start address: 0x1029620
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1178, Address: 0x1029620, Func Offset: 0
	// Line 1182, Address: 0x1029630, Func Offset: 0x10
	// Line 1183, Address: 0x102963c, Func Offset: 0x1c
	// Line 1184, Address: 0x102964c, Func Offset: 0x2c
	// Line 1186, Address: 0x1029658, Func Offset: 0x38
	// Line 1187, Address: 0x1029660, Func Offset: 0x40
	// Line 1188, Address: 0x1029668, Func Offset: 0x48
	// Line 1190, Address: 0x1029674, Func Offset: 0x54
	// Line 1191, Address: 0x1029680, Func Offset: 0x60
	// Line 1192, Address: 0x1029694, Func Offset: 0x74
	// Line 1193, Address: 0x10296a0, Func Offset: 0x80
	// Line 1194, Address: 0x10296b4, Func Offset: 0x94
	// Line 1195, Address: 0x10296c4, Func Offset: 0xa4
	// Line 1196, Address: 0x10296d8, Func Offset: 0xb8
	// Line 1197, Address: 0x10296f4, Func Offset: 0xd4
	// Line 1200, Address: 0x10296fc, Func Offset: 0xdc
	// Line 1205, Address: 0x102971c, Func Offset: 0xfc
	// Func End, Address: 0x102972c, Func Offset: 0x10c
}

// 
// Start address: 0x1029730
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1217, Address: 0x1029730, Func Offset: 0
	// Line 1221, Address: 0x1029740, Func Offset: 0x10
	// Line 1222, Address: 0x102974c, Func Offset: 0x1c
	// Line 1223, Address: 0x102975c, Func Offset: 0x2c
	// Line 1225, Address: 0x1029768, Func Offset: 0x38
	// Line 1226, Address: 0x1029770, Func Offset: 0x40
	// Line 1227, Address: 0x1029778, Func Offset: 0x48
	// Line 1229, Address: 0x1029784, Func Offset: 0x54
	// Line 1230, Address: 0x1029790, Func Offset: 0x60
	// Line 1231, Address: 0x10297a4, Func Offset: 0x74
	// Line 1232, Address: 0x10297b0, Func Offset: 0x80
	// Line 1233, Address: 0x10297c4, Func Offset: 0x94
	// Line 1234, Address: 0x10297d4, Func Offset: 0xa4
	// Line 1235, Address: 0x10297e8, Func Offset: 0xb8
	// Line 1236, Address: 0x1029804, Func Offset: 0xd4
	// Line 1239, Address: 0x102980c, Func Offset: 0xdc
	// Line 1244, Address: 0x102982c, Func Offset: 0xfc
	// Func End, Address: 0x102983c, Func Offset: 0x10c
}

// 
// Start address: 0x1029840
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1259, Address: 0x1029840, Func Offset: 0
	// Line 1265, Address: 0x102985c, Func Offset: 0x1c
	// Line 1266, Address: 0x1029860, Func Offset: 0x20
	// Line 1267, Address: 0x102986c, Func Offset: 0x2c
	// Line 1268, Address: 0x1029878, Func Offset: 0x38
	// Line 1269, Address: 0x1029880, Func Offset: 0x40
	// Line 1270, Address: 0x1029888, Func Offset: 0x48
	// Line 1278, Address: 0x102989c, Func Offset: 0x5c
	// Func End, Address: 0x10298c0, Func Offset: 0x80
}

// 
// Start address: 0x10298c0
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon2 lD4;
	unsigned short wD5;
	// Line 1291, Address: 0x10298c0, Func Offset: 0
	// Line 1300, Address: 0x10298e0, Func Offset: 0x20
	// Line 1301, Address: 0x10298e4, Func Offset: 0x24
	// Line 1302, Address: 0x10298f0, Func Offset: 0x30
	// Line 1303, Address: 0x10298fc, Func Offset: 0x3c
	// Line 1304, Address: 0x1029904, Func Offset: 0x44
	// Line 1305, Address: 0x102990c, Func Offset: 0x4c
	// Line 1307, Address: 0x1029920, Func Offset: 0x60
	// Line 1308, Address: 0x1029924, Func Offset: 0x64
	// Line 1309, Address: 0x1029930, Func Offset: 0x70
	// Line 1310, Address: 0x102993c, Func Offset: 0x7c
	// Line 1311, Address: 0x1029944, Func Offset: 0x84
	// Line 1313, Address: 0x102994c, Func Offset: 0x8c
	// Line 1314, Address: 0x1029958, Func Offset: 0x98
	// Line 1315, Address: 0x102996c, Func Offset: 0xac
	// Line 1317, Address: 0x1029978, Func Offset: 0xb8
	// Line 1318, Address: 0x1029980, Func Offset: 0xc0
	// Line 1320, Address: 0x1029988, Func Offset: 0xc8
	// Line 1322, Address: 0x10299a8, Func Offset: 0xe8
	// Line 1328, Address: 0x10299d4, Func Offset: 0x114
	// Line 1329, Address: 0x10299e8, Func Offset: 0x128
	// Line 1331, Address: 0x10299f4, Func Offset: 0x134
	// Line 1332, Address: 0x10299fc, Func Offset: 0x13c
	// Line 1333, Address: 0x1029a04, Func Offset: 0x144
	// Line 1335, Address: 0x1029a24, Func Offset: 0x164
	// Line 1341, Address: 0x1029a50, Func Offset: 0x190
	// Line 1342, Address: 0x1029a64, Func Offset: 0x1a4
	// Line 1344, Address: 0x1029a70, Func Offset: 0x1b0
	// Line 1345, Address: 0x1029a78, Func Offset: 0x1b8
	// Line 1346, Address: 0x1029a80, Func Offset: 0x1c0
	// Line 1348, Address: 0x1029aa0, Func Offset: 0x1e0
	// Line 1354, Address: 0x1029acc, Func Offset: 0x20c
	// Line 1355, Address: 0x1029ae0, Func Offset: 0x220
	// Line 1357, Address: 0x1029aec, Func Offset: 0x22c
	// Line 1358, Address: 0x1029af4, Func Offset: 0x234
	// Line 1359, Address: 0x1029afc, Func Offset: 0x23c
	// Line 1361, Address: 0x1029b1c, Func Offset: 0x25c
	// Line 1370, Address: 0x1029b48, Func Offset: 0x288
	// Func End, Address: 0x1029b70, Func Offset: 0x2b0
}

// 
// Start address: 0x1029b70
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon2 lD4;
	int WrtTblCnt;
	unsigned short wD0;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1387, Address: 0x1029b70, Func Offset: 0
	// Line 1398, Address: 0x1029b9c, Func Offset: 0x2c
	// Line 1400, Address: 0x1029ba4, Func Offset: 0x34
	// Line 1401, Address: 0x1029bbc, Func Offset: 0x4c
	// Line 1402, Address: 0x1029bd0, Func Offset: 0x60
	// Line 1404, Address: 0x1029bd8, Func Offset: 0x68
	// Line 1406, Address: 0x1029bec, Func Offset: 0x7c
	// Line 1407, Address: 0x1029c04, Func Offset: 0x94
	// Line 1408, Address: 0x1029c18, Func Offset: 0xa8
	// Line 1409, Address: 0x1029c20, Func Offset: 0xb0
	// Line 1411, Address: 0x1029c28, Func Offset: 0xb8
	// Line 1412, Address: 0x1029c3c, Func Offset: 0xcc
	// Line 1417, Address: 0x1029c44, Func Offset: 0xd4
	// Line 1418, Address: 0x1029c94, Func Offset: 0x124
	// Line 1419, Address: 0x1029c9c, Func Offset: 0x12c
	// Line 1425, Address: 0x1029cbc, Func Offset: 0x14c
	// Line 1426, Address: 0x1029cdc, Func Offset: 0x16c
	// Line 1427, Address: 0x1029d00, Func Offset: 0x190
	// Line 1428, Address: 0x1029d0c, Func Offset: 0x19c
	// Line 1429, Address: 0x1029d14, Func Offset: 0x1a4
	// Line 1431, Address: 0x1029d34, Func Offset: 0x1c4
	// Line 1435, Address: 0x1029d60, Func Offset: 0x1f0
	// Line 1438, Address: 0x1029d68, Func Offset: 0x1f8
	// Line 1439, Address: 0x1029d6c, Func Offset: 0x1fc
	// Line 1443, Address: 0x1029d8c, Func Offset: 0x21c
	// Line 1450, Address: 0x1029db8, Func Offset: 0x248
	// Line 1457, Address: 0x1029dcc, Func Offset: 0x25c
	// Line 1458, Address: 0x1029dd4, Func Offset: 0x264
	// Line 1459, Address: 0x1029ddc, Func Offset: 0x26c
	// Line 1460, Address: 0x1029df4, Func Offset: 0x284
	// Line 1461, Address: 0x1029e14, Func Offset: 0x2a4
	// Line 1465, Address: 0x1029e1c, Func Offset: 0x2ac
	// Line 1467, Address: 0x1029e4c, Func Offset: 0x2dc
	// Line 1468, Address: 0x1029e58, Func Offset: 0x2e8
	// Line 1472, Address: 0x1029e68, Func Offset: 0x2f8
	// Line 1473, Address: 0x1029e74, Func Offset: 0x304
	// Line 1474, Address: 0x1029e94, Func Offset: 0x324
	// Line 1475, Address: 0x1029ec0, Func Offset: 0x350
	// Line 1476, Address: 0x1029ee0, Func Offset: 0x370
	// Line 1478, Address: 0x1029f04, Func Offset: 0x394
	// Line 1481, Address: 0x1029f28, Func Offset: 0x3b8
	// Line 1483, Address: 0x1029f48, Func Offset: 0x3d8
	// Line 1485, Address: 0x1029f5c, Func Offset: 0x3ec
	// Line 1486, Address: 0x1029f68, Func Offset: 0x3f8
	// Line 1487, Address: 0x1029f78, Func Offset: 0x408
	// Line 1489, Address: 0x1029f80, Func Offset: 0x410
	// Func End, Address: 0x1029fa8, Func Offset: 0x438
}

// 
// Start address: 0x1029fb0
void scrollwrtc()
{
	// Line 1497, Address: 0x1029fb0, Func Offset: 0
	// Func End, Address: 0x1029fb8, Func Offset: 0x8
}

// 
// Start address: 0x1029fc0
void scrollwrtz()
{
	// Line 1502, Address: 0x1029fc0, Func Offset: 0
	// Func End, Address: 0x1029fc8, Func Offset: 0x8
}

// 
// Start address: 0x1029fd0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1523, Address: 0x1029fd0, Func Offset: 0
	// Line 1536, Address: 0x1029ff8, Func Offset: 0x28
	// Line 1539, Address: 0x102a018, Func Offset: 0x48
	// Line 1540, Address: 0x102a02c, Func Offset: 0x5c
	// Line 1541, Address: 0x102a040, Func Offset: 0x70
	// Line 1542, Address: 0x102a054, Func Offset: 0x84
	// Line 1544, Address: 0x102a068, Func Offset: 0x98
	// Line 1545, Address: 0x102a074, Func Offset: 0xa4
	// Line 1546, Address: 0x102a088, Func Offset: 0xb8
	// Func End, Address: 0x102a098, Func Offset: 0xc8
}

// 
// Start address: 0x102a0a0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1550, Address: 0x102a0a0, Func Offset: 0
	// Line 1554, Address: 0x102a0c8, Func Offset: 0x28
	// Line 1557, Address: 0x102a0e8, Func Offset: 0x48
	// Line 1558, Address: 0x102a0fc, Func Offset: 0x5c
	// Line 1559, Address: 0x102a110, Func Offset: 0x70
	// Line 1560, Address: 0x102a124, Func Offset: 0x84
	// Line 1562, Address: 0x102a138, Func Offset: 0x98
	// Line 1563, Address: 0x102a144, Func Offset: 0xa4
	// Line 1564, Address: 0x102a158, Func Offset: 0xb8
	// Func End, Address: 0x102a168, Func Offset: 0xc8
}

// 
// Start address: 0x102a170
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1583, Address: 0x102a170, Func Offset: 0
	// Line 1587, Address: 0x102a198, Func Offset: 0x28
	// Line 1590, Address: 0x102a1b8, Func Offset: 0x48
	// Line 1591, Address: 0x102a1cc, Func Offset: 0x5c
	// Line 1592, Address: 0x102a1dc, Func Offset: 0x6c
	// Line 1593, Address: 0x102a1f0, Func Offset: 0x80
	// Line 1595, Address: 0x102a200, Func Offset: 0x90
	// Line 1596, Address: 0x102a20c, Func Offset: 0x9c
	// Line 1597, Address: 0x102a220, Func Offset: 0xb0
	// Func End, Address: 0x102a230, Func Offset: 0xc0
}

// 
// Start address: 0x102a230
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
	// Line 1616, Address: 0x102a230, Func Offset: 0
	// Line 1622, Address: 0x102a264, Func Offset: 0x34
	// Line 1624, Address: 0x102a274, Func Offset: 0x44
	// Line 1625, Address: 0x102a278, Func Offset: 0x48
	// Line 1626, Address: 0x102a280, Func Offset: 0x50
	// Line 1628, Address: 0x102a290, Func Offset: 0x60
	// Line 1630, Address: 0x102a294, Func Offset: 0x64
	// Line 1631, Address: 0x102a29c, Func Offset: 0x6c
	// Line 1634, Address: 0x102a2a4, Func Offset: 0x74
	// Line 1635, Address: 0x102a2ac, Func Offset: 0x7c
	// Line 1636, Address: 0x102a2b8, Func Offset: 0x88
	// Line 1638, Address: 0x102a2c4, Func Offset: 0x94
	// Line 1639, Address: 0x102a2cc, Func Offset: 0x9c
	// Line 1640, Address: 0x102a2d4, Func Offset: 0xa4
	// Line 1641, Address: 0x102a2dc, Func Offset: 0xac
	// Line 1643, Address: 0x102a2e8, Func Offset: 0xb8
	// Line 1644, Address: 0x102a2f0, Func Offset: 0xc0
	// Line 1645, Address: 0x102a2f8, Func Offset: 0xc8
	// Line 1646, Address: 0x102a300, Func Offset: 0xd0
	// Line 1648, Address: 0x102a30c, Func Offset: 0xdc
	// Line 1649, Address: 0x102a314, Func Offset: 0xe4
	// Line 1650, Address: 0x102a31c, Func Offset: 0xec
	// Line 1653, Address: 0x102a324, Func Offset: 0xf4
	// Line 1654, Address: 0x102a32c, Func Offset: 0xfc
	// Line 1657, Address: 0x102a334, Func Offset: 0x104
	// Line 1658, Address: 0x102a378, Func Offset: 0x148
	// Line 1659, Address: 0x102a3bc, Func Offset: 0x18c
	// Line 1660, Address: 0x102a400, Func Offset: 0x1d0
	// Line 1662, Address: 0x102a444, Func Offset: 0x214
	// Func End, Address: 0x102a474, Func Offset: 0x244
}

// 
// Start address: 0x102a480
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1680, Address: 0x102a480, Func Offset: 0
	// Line 1681, Address: 0x102a4a0, Func Offset: 0x20
	// Line 1682, Address: 0x102a4c0, Func Offset: 0x40
	// Func End, Address: 0x102a4d0, Func Offset: 0x50
}

// 
// Start address: 0x102a4d0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1684, Address: 0x102a4d0, Func Offset: 0
	// Line 1685, Address: 0x102a4f0, Func Offset: 0x20
	// Line 1686, Address: 0x102a4f4, Func Offset: 0x24
	// Line 1687, Address: 0x102a514, Func Offset: 0x44
	// Func End, Address: 0x102a524, Func Offset: 0x54
}

// 
// Start address: 0x102a530
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1694, Address: 0x102a530, Func Offset: 0
	// Line 1700, Address: 0x102a560, Func Offset: 0x30
	// Line 1701, Address: 0x102a570, Func Offset: 0x40
	// Line 1707, Address: 0x102a580, Func Offset: 0x50
	// Line 1708, Address: 0x102a59c, Func Offset: 0x6c
	// Line 1709, Address: 0x102a5a0, Func Offset: 0x70
	// Line 1710, Address: 0x102a5bc, Func Offset: 0x8c
	// Line 1711, Address: 0x102a5c0, Func Offset: 0x90
	// Line 1712, Address: 0x102a5e0, Func Offset: 0xb0
	// Line 1713, Address: 0x102a5e8, Func Offset: 0xb8
	// Line 1714, Address: 0x102a608, Func Offset: 0xd8
	// Line 1715, Address: 0x102a610, Func Offset: 0xe0
	// Line 1716, Address: 0x102a658, Func Offset: 0x128
	// Line 1718, Address: 0x102a664, Func Offset: 0x134
	// Line 1720, Address: 0x102a680, Func Offset: 0x150
	// Line 1725, Address: 0x102a688, Func Offset: 0x158
	// Line 1726, Address: 0x102a694, Func Offset: 0x164
	// Line 1729, Address: 0x102a6a0, Func Offset: 0x170
	// Line 1730, Address: 0x102a6a8, Func Offset: 0x178
	// Line 1731, Address: 0x102a6c8, Func Offset: 0x198
	// Line 1732, Address: 0x102a6e4, Func Offset: 0x1b4
	// Line 1733, Address: 0x102a6ec, Func Offset: 0x1bc
	// Line 1734, Address: 0x102a70c, Func Offset: 0x1dc
	// Line 1736, Address: 0x102a728, Func Offset: 0x1f8
	// Line 1737, Address: 0x102a730, Func Offset: 0x200
	// Line 1738, Address: 0x102a738, Func Offset: 0x208
	// Line 1739, Address: 0x102a744, Func Offset: 0x214
	// Line 1740, Address: 0x102a75c, Func Offset: 0x22c
	// Line 1742, Address: 0x102a76c, Func Offset: 0x23c
	// Line 1745, Address: 0x102a778, Func Offset: 0x248
	// Line 1746, Address: 0x102a780, Func Offset: 0x250
	// Line 1747, Address: 0x102a784, Func Offset: 0x254
	// Func End, Address: 0x102a7a4, Func Offset: 0x274
}

// 
// Start address: 0x102a7b0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1767, Address: 0x102a7b0, Func Offset: 0
	// Line 1775, Address: 0x102a7d8, Func Offset: 0x28
	// Line 1776, Address: 0x102a83c, Func Offset: 0x8c
	// Line 1782, Address: 0x102a844, Func Offset: 0x94
	// Line 1783, Address: 0x102a84c, Func Offset: 0x9c
	// Line 1784, Address: 0x102a86c, Func Offset: 0xbc
	// Line 1785, Address: 0x102a888, Func Offset: 0xd8
	// Line 1786, Address: 0x102a890, Func Offset: 0xe0
	// Line 1787, Address: 0x102a8b0, Func Offset: 0x100
	// Line 1790, Address: 0x102a8cc, Func Offset: 0x11c
	// Line 1791, Address: 0x102a8d4, Func Offset: 0x124
	// Line 1792, Address: 0x102a8dc, Func Offset: 0x12c
	// Line 1793, Address: 0x102a8e8, Func Offset: 0x138
	// Line 1794, Address: 0x102a900, Func Offset: 0x150
	// Line 1795, Address: 0x102a908, Func Offset: 0x158
	// Line 1800, Address: 0x102a918, Func Offset: 0x168
	// Line 1803, Address: 0x102a924, Func Offset: 0x174
	// Line 1804, Address: 0x102a92c, Func Offset: 0x17c
	// Line 1805, Address: 0x102a930, Func Offset: 0x180
	// Func End, Address: 0x102a94c, Func Offset: 0x19c
}

// 
// Start address: 0x102a950
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1819, Address: 0x102a950, Func Offset: 0
	// Line 1826, Address: 0x102a96c, Func Offset: 0x1c
	// Line 1827, Address: 0x102a970, Func Offset: 0x20
	// Line 1828, Address: 0x102a978, Func Offset: 0x28
	// Line 1829, Address: 0x102a99c, Func Offset: 0x4c
	// Line 1830, Address: 0x102a9a8, Func Offset: 0x58
	// Line 1831, Address: 0x102a9c0, Func Offset: 0x70
	// Line 1832, Address: 0x102a9d4, Func Offset: 0x84
	// Line 1837, Address: 0x102a9ec, Func Offset: 0x9c
	// Func End, Address: 0x102aa04, Func Offset: 0xb4
}

// 
// Start address: 0x102aa10
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1851, Address: 0x102aa10, Func Offset: 0
	// Line 1852, Address: 0x102aa1c, Func Offset: 0xc
	// Line 1853, Address: 0x102aa48, Func Offset: 0x38
	// Line 1854, Address: 0x102aa94, Func Offset: 0x84
	// Line 1855, Address: 0x102aac0, Func Offset: 0xb0
	// Line 1857, Address: 0x102ab0c, Func Offset: 0xfc
	// Line 1863, Address: 0x102ab18, Func Offset: 0x108
	// Line 1864, Address: 0x102ab1c, Func Offset: 0x10c
	// Func End, Address: 0x102ab28, Func Offset: 0x118
}

// 
// Start address: 0x102ab30
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1881, Address: 0x102ab30, Func Offset: 0
	// Line 1882, Address: 0x102ab4c, Func Offset: 0x1c
	// Line 1884, Address: 0x102ab68, Func Offset: 0x38
	// Func End, Address: 0x102ab78, Func Offset: 0x48
}

// 
// Start address: 0x102ab80
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1886, Address: 0x102ab80, Func Offset: 0
	// Line 1887, Address: 0x102ab9c, Func Offset: 0x1c
	// Line 1888, Address: 0x102aba0, Func Offset: 0x20
	// Line 1890, Address: 0x102abbc, Func Offset: 0x3c
	// Func End, Address: 0x102abcc, Func Offset: 0x4c
}

// 
// Start address: 0x102abd0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1892, Address: 0x102abd0, Func Offset: 0
	// Line 1893, Address: 0x102abe4, Func Offset: 0x14
	// Line 1895, Address: 0x102ac00, Func Offset: 0x30
	// Func End, Address: 0x102ac10, Func Offset: 0x40
}

// 
// Start address: 0x102ac10
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1897, Address: 0x102ac10, Func Offset: 0
	// Line 1898, Address: 0x102ac2c, Func Offset: 0x1c
	// Line 1900, Address: 0x102ac48, Func Offset: 0x38
	// Func End, Address: 0x102ac58, Func Offset: 0x48
}

// 
// Start address: 0x102ac60
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1902, Address: 0x102ac60, Func Offset: 0
	// Line 1903, Address: 0x102ac78, Func Offset: 0x18
	// Line 1904, Address: 0x102ac88, Func Offset: 0x28
	// Line 1905, Address: 0x102ac98, Func Offset: 0x38
	// Line 1906, Address: 0x102aca4, Func Offset: 0x44
	// Line 1908, Address: 0x102acb0, Func Offset: 0x50
	// Line 1909, Address: 0x102acdc, Func Offset: 0x7c
	// Line 1912, Address: 0x102ad08, Func Offset: 0xa8
	// Func End, Address: 0x102ad14, Func Offset: 0xb4
}

// 
// Start address: 0x102ad20
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1928, Address: 0x102ad20, Func Offset: 0
	// Line 1933, Address: 0x102ad38, Func Offset: 0x18
	// Line 1934, Address: 0x102ad44, Func Offset: 0x24
	// Line 1935, Address: 0x102ad50, Func Offset: 0x30
	// Line 1936, Address: 0x102ad58, Func Offset: 0x38
	// Line 1937, Address: 0x102ad5c, Func Offset: 0x3c
	// Line 1941, Address: 0x102ad74, Func Offset: 0x54
	// Line 1942, Address: 0x102ad7c, Func Offset: 0x5c
	// Line 1943, Address: 0x102ad80, Func Offset: 0x60
	// Line 1945, Address: 0x102ad90, Func Offset: 0x70
	// Func End, Address: 0x102adb0, Func Offset: 0x90
}

// 
// Start address: 0x102adb0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1948, Address: 0x102adb0, Func Offset: 0
	// Line 1949, Address: 0x102adc8, Func Offset: 0x18
	// Line 1950, Address: 0x102ade8, Func Offset: 0x38
	// Func End, Address: 0x102adf8, Func Offset: 0x48
}

// 
// Start address: 0x102ae00
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1955, Address: 0x102ae00, Func Offset: 0
	// Line 1959, Address: 0x102ae20, Func Offset: 0x20
	// Line 1962, Address: 0x102ae3c, Func Offset: 0x3c
	// Line 1966, Address: 0x102ae64, Func Offset: 0x64
	// Line 1967, Address: 0x102ae70, Func Offset: 0x70
	// Line 1969, Address: 0x102ae98, Func Offset: 0x98
	// Func End, Address: 0x102aea8, Func Offset: 0xa8
}

// 
// Start address: 0x102aeb0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1974, Address: 0x102aeb0, Func Offset: 0
	// Line 1977, Address: 0x102aecc, Func Offset: 0x1c
	// Line 1978, Address: 0x102aed4, Func Offset: 0x24
	// Line 1983, Address: 0x102aedc, Func Offset: 0x2c
	// Line 1985, Address: 0x102af00, Func Offset: 0x50
	// Line 1986, Address: 0x102af20, Func Offset: 0x70
	// Line 1987, Address: 0x102af28, Func Offset: 0x78
	// Line 1988, Address: 0x102af4c, Func Offset: 0x9c
	// Func End, Address: 0x102af68, Func Offset: 0xb8
}

// 
// Start address: 0x102af70
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2014, Address: 0x102af70, Func Offset: 0
	// Line 2019, Address: 0x102af98, Func Offset: 0x28
	// Line 2020, Address: 0x102afa8, Func Offset: 0x38
	// Line 2022, Address: 0x102afc4, Func Offset: 0x54
	// Line 2023, Address: 0x102afe8, Func Offset: 0x78
	// Line 2024, Address: 0x102b010, Func Offset: 0xa0
	// Line 2025, Address: 0x102b01c, Func Offset: 0xac
	// Line 2026, Address: 0x102b024, Func Offset: 0xb4
	// Line 2029, Address: 0x102b040, Func Offset: 0xd0
	// Line 2033, Address: 0x102b068, Func Offset: 0xf8
	// Line 2036, Address: 0x102b070, Func Offset: 0x100
	// Line 2037, Address: 0x102b074, Func Offset: 0x104
	// Line 2041, Address: 0x102b090, Func Offset: 0x120
	// Line 2048, Address: 0x102b0b8, Func Offset: 0x148
	// Func End, Address: 0x102b0d4, Func Offset: 0x164
}

// 
// Start address: 0x102b0e0
void mapinit()
{
	// Line 2053, Address: 0x102b0e0, Func Offset: 0
	// Line 2059, Address: 0x102b0e8, Func Offset: 0x8
	// Line 2062, Address: 0x102b0f0, Func Offset: 0x10
	// Line 2063, Address: 0x102b104, Func Offset: 0x24
	// Line 2070, Address: 0x102b118, Func Offset: 0x38
	// Line 2071, Address: 0x102b12c, Func Offset: 0x4c
	// Line 2074, Address: 0x102b134, Func Offset: 0x54
	// Line 2076, Address: 0x102b14c, Func Offset: 0x6c
	// Line 2080, Address: 0x102b154, Func Offset: 0x74
	// Func End, Address: 0x102b164, Func Offset: 0x84
}

// 
// Start address: 0x102b170
void mapset()
{
	// Line 2090, Address: 0x102b170, Func Offset: 0
	// Func End, Address: 0x102b178, Func Offset: 0x8
}

