typedef union _anon0;
typedef struct _anon1;
typedef struct tagPOINT;
typedef struct _anon2;
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
typedef _anon0* type_8[8];
typedef int type_9[13];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[13];
typedef short type_18[256];
typedef unsigned char type_19[3];
typedef _anon0* type_20[8];
typedef _anon2 type_21[128];
typedef unsigned char type_22[6];
typedef unsigned short type_23[2];
typedef unsigned short type_24[3];
typedef unsigned short type_25[16];

union _anon0
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon1
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

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon0 xposi;
	_anon0 yposi;
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

unsigned char z31bwrttbl[49];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon2 actwk[128];
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
_anon0 scra_v_posit;
_anon0 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
short hscrollwork[256];
_anon0 scrb_h_posit;
_anon0 scrc_h_posit;
_anon0 scrz_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
unsigned char awasintbl[0];
_anon6 waterdirec;
_anon0* lphscrollbuff;
_anon8 scrflagc;
_anon8 scrflagz;
_anon8 scrflagb;
_anon0 vscroll;
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
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon8 scrflagbw;
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

void enecginit();
void divdevset();
_anon2* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
void zonescrsetsub0(_anon0** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4);
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
void scrv_up_ch(_anon0 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon0 lD1);
void scrv_move(_anon0 lD1);
void scrollb_hv(_anon0 lD4, _anon0 lD5);
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
// Start address: 0x1026c40
void enecginit()
{
	// Line 112, Address: 0x1026c40, Func Offset: 0
	// Func End, Address: 0x1026c48, Func Offset: 0x8
}

// 
// Start address: 0x1026c50
void divdevset()
{
	// Line 116, Address: 0x1026c50, Func Offset: 0
	// Func End, Address: 0x1026c58, Func Offset: 0x8
}

// 
// Start address: 0x1026c60
_anon2* main_chk()
{
	// Line 170, Address: 0x1026c60, Func Offset: 0
	// Line 171, Address: 0x1026c74, Func Offset: 0x14
	// Line 173, Address: 0x1026c84, Func Offset: 0x24
	// Line 174, Address: 0x1026c8c, Func Offset: 0x2c
	// Func End, Address: 0x1026c94, Func Offset: 0x34
}

// 
// Start address: 0x1026ca0
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 187, Address: 0x1026ca0, Func Offset: 0
	// Line 193, Address: 0x1026cac, Func Offset: 0xc
	// Line 198, Address: 0x1026ce0, Func Offset: 0x40
	// Line 200, Address: 0x1026d28, Func Offset: 0x88
	// Line 201, Address: 0x1026d2c, Func Offset: 0x8c
	// Line 202, Address: 0x1026d48, Func Offset: 0xa8
	// Line 203, Address: 0x1026d5c, Func Offset: 0xbc
	// Line 204, Address: 0x1026d78, Func Offset: 0xd8
	// Line 205, Address: 0x1026d8c, Func Offset: 0xec
	// Line 206, Address: 0x1026da8, Func Offset: 0x108
	// Line 207, Address: 0x1026dbc, Func Offset: 0x11c
	// Line 208, Address: 0x1026dd8, Func Offset: 0x138
	// Line 209, Address: 0x1026dec, Func Offset: 0x14c
	// Line 211, Address: 0x1026e08, Func Offset: 0x168
	// Line 212, Address: 0x1026e2c, Func Offset: 0x18c
	// Line 213, Address: 0x1026e38, Func Offset: 0x198
	// Line 215, Address: 0x1026e44, Func Offset: 0x1a4
	// Line 216, Address: 0x1026e60, Func Offset: 0x1c0
	// Line 218, Address: 0x1026e6c, Func Offset: 0x1cc
	// Line 219, Address: 0x1026e74, Func Offset: 0x1d4
	// Func End, Address: 0x1026e88, Func Offset: 0x1e8
}

// 
// Start address: 0x1026e90
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 231, Address: 0x1026e90, Func Offset: 0
	// Line 232, Address: 0x1026ea8, Func Offset: 0x18
	// Line 236, Address: 0x1026ec4, Func Offset: 0x34
	// Line 246, Address: 0x1026ef8, Func Offset: 0x68
	// Line 256, Address: 0x1026f24, Func Offset: 0x94
	// Line 257, Address: 0x1026f38, Func Offset: 0xa8
	// Line 258, Address: 0x1026f40, Func Offset: 0xb0
	// Line 259, Address: 0x1026f50, Func Offset: 0xc0
	// Line 261, Address: 0x1026f60, Func Offset: 0xd0
	// Line 263, Address: 0x1026f74, Func Offset: 0xe4
	// Line 266, Address: 0x1026f7c, Func Offset: 0xec
	// Line 267, Address: 0x1026f94, Func Offset: 0x104
	// Line 268, Address: 0x1026fbc, Func Offset: 0x12c
	// Line 271, Address: 0x1026fc4, Func Offset: 0x134
	// Line 274, Address: 0x1026fe4, Func Offset: 0x154
	// Line 275, Address: 0x1027000, Func Offset: 0x170
	// Line 279, Address: 0x1027014, Func Offset: 0x184
	// Line 280, Address: 0x1027028, Func Offset: 0x198
	// Line 281, Address: 0x1027034, Func Offset: 0x1a4
	// Line 283, Address: 0x102703c, Func Offset: 0x1ac
	// Line 287, Address: 0x1027040, Func Offset: 0x1b0
	// Line 288, Address: 0x1027064, Func Offset: 0x1d4
	// Line 290, Address: 0x1027074, Func Offset: 0x1e4
	// Line 292, Address: 0x102707c, Func Offset: 0x1ec
	// Line 293, Address: 0x1027090, Func Offset: 0x200
	// Line 294, Address: 0x102709c, Func Offset: 0x20c
	// Line 296, Address: 0x10270a4, Func Offset: 0x214
	// Line 299, Address: 0x10270a8, Func Offset: 0x218
	// Line 300, Address: 0x10270cc, Func Offset: 0x23c
	// Line 303, Address: 0x10270dc, Func Offset: 0x24c
	// Line 305, Address: 0x10270e4, Func Offset: 0x254
	// Line 307, Address: 0x10270f4, Func Offset: 0x264
	// Line 308, Address: 0x10270f8, Func Offset: 0x268
	// Line 309, Address: 0x1027110, Func Offset: 0x280
	// Line 310, Address: 0x1027128, Func Offset: 0x298
	// Line 311, Address: 0x1027140, Func Offset: 0x2b0
	// Line 314, Address: 0x1027158, Func Offset: 0x2c8
	// Func End, Address: 0x1027178, Func Offset: 0x2e8
}

// 
// Start address: 0x1027180
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 326, Address: 0x1027180, Func Offset: 0
	// Line 331, Address: 0x1027194, Func Offset: 0x14
	// Line 332, Address: 0x102719c, Func Offset: 0x1c
	// Line 333, Address: 0x10271c4, Func Offset: 0x44
	// Line 334, Address: 0x10271e0, Func Offset: 0x60
	// Line 335, Address: 0x1027214, Func Offset: 0x94
	// Line 336, Address: 0x1027228, Func Offset: 0xa8
	// Line 340, Address: 0x102722c, Func Offset: 0xac
	// Line 341, Address: 0x1027238, Func Offset: 0xb8
	// Line 342, Address: 0x1027240, Func Offset: 0xc0
	// Line 343, Address: 0x102724c, Func Offset: 0xcc
	// Line 345, Address: 0x1027258, Func Offset: 0xd8
	// Line 346, Address: 0x1027290, Func Offset: 0x110
	// Line 347, Address: 0x10272d0, Func Offset: 0x150
	// Line 350, Address: 0x1027310, Func Offset: 0x190
	// Line 351, Address: 0x102731c, Func Offset: 0x19c
	// Line 352, Address: 0x1027330, Func Offset: 0x1b0
	// Line 354, Address: 0x1027340, Func Offset: 0x1c0
	// Func End, Address: 0x1027354, Func Offset: 0x1d4
}

// 
// Start address: 0x1027360
void scroll()
{
	int LineSpdTbl[13];
	unsigned char z31b_cnttbl[13];
	unsigned char z31b_cnttbl0[3];
	unsigned char z31b_cnttbl1[6];
	unsigned short z31b_kawatbl[3];
	short* pHScrollWork;
	_anon0* pHScrollBuff;
	_anon0* pHscrWk;
	int i;
	int j;
	unsigned short wD1;
	unsigned short wD3;
	unsigned short wD4;
	unsigned short wD5;
	_anon0 lD0;
	_anon0 lD2;
	_anon0 lD3;
	// Line 367, Address: 0x1027360, Func Offset: 0
	// Line 368, Address: 0x1027380, Func Offset: 0x20
	// Line 375, Address: 0x10273ac, Func Offset: 0x4c
	// Line 378, Address: 0x10273d8, Func Offset: 0x78
	// Line 381, Address: 0x10273fc, Func Offset: 0x9c
	// Line 385, Address: 0x1027430, Func Offset: 0xd0
	// Line 395, Address: 0x1027454, Func Offset: 0xf4
	// Line 398, Address: 0x1027464, Func Offset: 0x104
	// Line 399, Address: 0x1027490, Func Offset: 0x130
	// Line 400, Address: 0x102749c, Func Offset: 0x13c
	// Line 401, Address: 0x10274a8, Func Offset: 0x148
	// Line 403, Address: 0x10274b4, Func Offset: 0x154
	// Line 404, Address: 0x10274c4, Func Offset: 0x164
	// Line 407, Address: 0x10274d4, Func Offset: 0x174
	// Line 408, Address: 0x10274f8, Func Offset: 0x198
	// Line 409, Address: 0x1027534, Func Offset: 0x1d4
	// Line 411, Address: 0x1027570, Func Offset: 0x210
	// Line 412, Address: 0x1027578, Func Offset: 0x218
	// Line 413, Address: 0x1027580, Func Offset: 0x220
	// Line 415, Address: 0x10275a0, Func Offset: 0x240
	// Line 416, Address: 0x10275b4, Func Offset: 0x254
	// Line 417, Address: 0x10275bc, Func Offset: 0x25c
	// Line 418, Address: 0x10275d0, Func Offset: 0x270
	// Line 419, Address: 0x10275e4, Func Offset: 0x284
	// Line 421, Address: 0x10275e8, Func Offset: 0x288
	// Line 423, Address: 0x10275f0, Func Offset: 0x290
	// Line 426, Address: 0x1027604, Func Offset: 0x2a4
	// Line 427, Address: 0x1027618, Func Offset: 0x2b8
	// Line 428, Address: 0x1027628, Func Offset: 0x2c8
	// Line 429, Address: 0x1027638, Func Offset: 0x2d8
	// Line 431, Address: 0x1027648, Func Offset: 0x2e8
	// Line 432, Address: 0x1027664, Func Offset: 0x304
	// Line 433, Address: 0x1027680, Func Offset: 0x320
	// Line 434, Address: 0x1027688, Func Offset: 0x328
	// Line 457, Address: 0x1027690, Func Offset: 0x330
	// Line 458, Address: 0x1027698, Func Offset: 0x338
	// Line 459, Address: 0x10276a4, Func Offset: 0x344
	// Line 460, Address: 0x10276bc, Func Offset: 0x35c
	// Line 461, Address: 0x10276c0, Func Offset: 0x360
	// Line 462, Address: 0x10276d0, Func Offset: 0x370
	// Line 463, Address: 0x10276d4, Func Offset: 0x374
	// Line 464, Address: 0x10276dc, Func Offset: 0x37c
	// Line 465, Address: 0x1027700, Func Offset: 0x3a0
	// Line 466, Address: 0x1027710, Func Offset: 0x3b0
	// Line 467, Address: 0x1027714, Func Offset: 0x3b4
	// Line 468, Address: 0x1027720, Func Offset: 0x3c0
	// Line 475, Address: 0x1027730, Func Offset: 0x3d0
	// Line 476, Address: 0x1027758, Func Offset: 0x3f8
	// Line 477, Address: 0x1027764, Func Offset: 0x404
	// Line 478, Address: 0x1027784, Func Offset: 0x424
	// Line 480, Address: 0x1027790, Func Offset: 0x430
	// Line 481, Address: 0x1027794, Func Offset: 0x434
	// Line 483, Address: 0x10277a0, Func Offset: 0x440
	// Line 484, Address: 0x10277ac, Func Offset: 0x44c
	// Line 485, Address: 0x10277b8, Func Offset: 0x458
	// Line 487, Address: 0x10277d4, Func Offset: 0x474
	// Line 488, Address: 0x10277e8, Func Offset: 0x488
	// Line 489, Address: 0x10277fc, Func Offset: 0x49c
	// Line 491, Address: 0x1027808, Func Offset: 0x4a8
	// Line 492, Address: 0x102782c, Func Offset: 0x4cc
	// Line 493, Address: 0x102783c, Func Offset: 0x4dc
	// Line 494, Address: 0x1027860, Func Offset: 0x500
	// Line 496, Address: 0x102786c, Func Offset: 0x50c
	// Line 497, Address: 0x1027878, Func Offset: 0x518
	// Line 499, Address: 0x102789c, Func Offset: 0x53c
	// Line 500, Address: 0x10278a8, Func Offset: 0x548
	// Line 501, Address: 0x10278bc, Func Offset: 0x55c
	// Line 503, Address: 0x10278cc, Func Offset: 0x56c
	// Line 505, Address: 0x10278f0, Func Offset: 0x590
	// Line 506, Address: 0x10278fc, Func Offset: 0x59c
	// Line 507, Address: 0x1027910, Func Offset: 0x5b0
	// Line 522, Address: 0x1027920, Func Offset: 0x5c0
	// Line 523, Address: 0x1027928, Func Offset: 0x5c8
	// Line 524, Address: 0x1027934, Func Offset: 0x5d4
	// Line 525, Address: 0x1027960, Func Offset: 0x600
	// Line 526, Address: 0x1027964, Func Offset: 0x604
	// Line 527, Address: 0x1027978, Func Offset: 0x618
	// Line 528, Address: 0x1027988, Func Offset: 0x628
	// Line 529, Address: 0x1027994, Func Offset: 0x634
	// Line 532, Address: 0x10279a0, Func Offset: 0x640
	// Line 534, Address: 0x10279c4, Func Offset: 0x664
	// Line 535, Address: 0x10279d0, Func Offset: 0x670
	// Line 536, Address: 0x10279e4, Func Offset: 0x684
	// Line 538, Address: 0x10279f4, Func Offset: 0x694
	// Line 540, Address: 0x1027a18, Func Offset: 0x6b8
	// Line 541, Address: 0x1027a24, Func Offset: 0x6c4
	// Line 542, Address: 0x1027a38, Func Offset: 0x6d8
	// Line 544, Address: 0x1027a48, Func Offset: 0x6e8
	// Line 546, Address: 0x1027a6c, Func Offset: 0x70c
	// Line 547, Address: 0x1027a78, Func Offset: 0x718
	// Line 548, Address: 0x1027a8c, Func Offset: 0x72c
	// Line 550, Address: 0x1027a9c, Func Offset: 0x73c
	// Line 552, Address: 0x1027ac0, Func Offset: 0x760
	// Line 553, Address: 0x1027acc, Func Offset: 0x76c
	// Line 554, Address: 0x1027ae0, Func Offset: 0x780
	// Line 557, Address: 0x1027af0, Func Offset: 0x790
	// Line 558, Address: 0x1027b28, Func Offset: 0x7c8
	// Line 559, Address: 0x1027b34, Func Offset: 0x7d4
	// Line 560, Address: 0x1027b54, Func Offset: 0x7f4
	// Line 561, Address: 0x1027b60, Func Offset: 0x800
	// Line 563, Address: 0x1027b6c, Func Offset: 0x80c
	// Line 564, Address: 0x1027b78, Func Offset: 0x818
	// Line 565, Address: 0x1027b94, Func Offset: 0x834
	// Line 566, Address: 0x1027bac, Func Offset: 0x84c
	// Line 567, Address: 0x1027bc0, Func Offset: 0x860
	// Line 568, Address: 0x1027bcc, Func Offset: 0x86c
	// Line 569, Address: 0x1027bf0, Func Offset: 0x890
	// Line 570, Address: 0x1027c00, Func Offset: 0x8a0
	// Line 571, Address: 0x1027c24, Func Offset: 0x8c4
	// Line 573, Address: 0x1027c30, Func Offset: 0x8d0
	// Line 575, Address: 0x1027c54, Func Offset: 0x8f4
	// Line 576, Address: 0x1027c60, Func Offset: 0x900
	// Line 577, Address: 0x1027c74, Func Offset: 0x914
	// Line 579, Address: 0x1027c88, Func Offset: 0x928
	// Line 580, Address: 0x1027c94, Func Offset: 0x934
	// Line 581, Address: 0x1027ca0, Func Offset: 0x940
	// Line 582, Address: 0x1027cac, Func Offset: 0x94c
	// Line 583, Address: 0x1027cb4, Func Offset: 0x954
	// Line 584, Address: 0x1027cbc, Func Offset: 0x95c
	// Line 585, Address: 0x1027ce0, Func Offset: 0x980
	// Line 586, Address: 0x1027cf8, Func Offset: 0x998
	// Line 587, Address: 0x1027d00, Func Offset: 0x9a0
	// Line 588, Address: 0x1027d08, Func Offset: 0x9a8
	// Line 590, Address: 0x1027d1c, Func Offset: 0x9bc
	// Line 591, Address: 0x1027d24, Func Offset: 0x9c4
	// Line 592, Address: 0x1027d34, Func Offset: 0x9d4
	// Line 595, Address: 0x1027d40, Func Offset: 0x9e0
	// Line 596, Address: 0x1027d48, Func Offset: 0x9e8
	// Line 597, Address: 0x1027d6c, Func Offset: 0xa0c
	// Line 599, Address: 0x1027d80, Func Offset: 0xa20
	// Line 602, Address: 0x1027db0, Func Offset: 0xa50
	// Line 604, Address: 0x1027db8, Func Offset: 0xa58
	// Line 609, Address: 0x1027dc0, Func Offset: 0xa60
	// Line 610, Address: 0x1027dd4, Func Offset: 0xa74
	// Line 611, Address: 0x1027de0, Func Offset: 0xa80
	// Line 612, Address: 0x1027df8, Func Offset: 0xa98
	// Line 614, Address: 0x1027e10, Func Offset: 0xab0
	// Line 615, Address: 0x1027e18, Func Offset: 0xab8
	// Line 616, Address: 0x1027e2c, Func Offset: 0xacc
	// Line 617, Address: 0x1027e40, Func Offset: 0xae0
	// Line 618, Address: 0x1027e54, Func Offset: 0xaf4
	// Line 619, Address: 0x1027e60, Func Offset: 0xb00
	// Line 620, Address: 0x1027e68, Func Offset: 0xb08
	// Line 621, Address: 0x1027e88, Func Offset: 0xb28
	// Line 622, Address: 0x1027ea0, Func Offset: 0xb40
	// Line 623, Address: 0x1027ea8, Func Offset: 0xb48
	// Line 624, Address: 0x1027ee0, Func Offset: 0xb80
	// Line 625, Address: 0x1027ef8, Func Offset: 0xb98
	// Line 626, Address: 0x1027f14, Func Offset: 0xbb4
	// Line 629, Address: 0x1027f18, Func Offset: 0xbb8
	// Line 630, Address: 0x1027f24, Func Offset: 0xbc4
	// Line 631, Address: 0x1027f30, Func Offset: 0xbd0
	// Line 632, Address: 0x1027f3c, Func Offset: 0xbdc
	// Line 633, Address: 0x1027f48, Func Offset: 0xbe8
	// Line 635, Address: 0x1027f68, Func Offset: 0xc08
	// Func End, Address: 0x1027f90, Func Offset: 0xc30
}

// 
// Start address: 0x1027f90
void zonescrsetsub0(_anon0** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon0* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon0 lD0;
	int i;
	// Line 640, Address: 0x1027f90, Func Offset: 0
	// Line 647, Address: 0x1027fc4, Func Offset: 0x34
	// Line 648, Address: 0x1027fe4, Func Offset: 0x54
	// Line 649, Address: 0x1027fec, Func Offset: 0x5c
	// Line 651, Address: 0x1027ff4, Func Offset: 0x64
	// Line 656, Address: 0x1028018, Func Offset: 0x88
	// Line 657, Address: 0x102802c, Func Offset: 0x9c
	// Line 659, Address: 0x1028058, Func Offset: 0xc8
	// Line 660, Address: 0x1028068, Func Offset: 0xd8
	// Line 661, Address: 0x102807c, Func Offset: 0xec
	// Line 664, Address: 0x1028084, Func Offset: 0xf4
	// Line 667, Address: 0x10280a0, Func Offset: 0x110
	// Line 672, Address: 0x10280c4, Func Offset: 0x134
	// Line 673, Address: 0x10280d4, Func Offset: 0x144
	// Line 676, Address: 0x10280e8, Func Offset: 0x158
	// Line 678, Address: 0x10280ec, Func Offset: 0x15c
	// Line 681, Address: 0x10280f4, Func Offset: 0x164
	// Line 682, Address: 0x10280fc, Func Offset: 0x16c
	// Line 683, Address: 0x1028100, Func Offset: 0x170
	// Line 684, Address: 0x1028110, Func Offset: 0x180
	// Line 689, Address: 0x1028138, Func Offset: 0x1a8
	// Line 690, Address: 0x1028140, Func Offset: 0x1b0
	// Line 691, Address: 0x1028148, Func Offset: 0x1b8
	// Line 695, Address: 0x1028150, Func Offset: 0x1c0
	// Line 696, Address: 0x1028180, Func Offset: 0x1f0
	// Line 699, Address: 0x1028198, Func Offset: 0x208
	// Line 702, Address: 0x10281bc, Func Offset: 0x22c
	// Line 703, Address: 0x10281ec, Func Offset: 0x25c
	// Line 704, Address: 0x1028204, Func Offset: 0x274
	// Line 712, Address: 0x102820c, Func Offset: 0x27c
	// Line 713, Address: 0x102823c, Func Offset: 0x2ac
	// Line 718, Address: 0x1028254, Func Offset: 0x2c4
	// Line 719, Address: 0x102825c, Func Offset: 0x2cc
	// Line 720, Address: 0x1028260, Func Offset: 0x2d0
	// Line 723, Address: 0x1028278, Func Offset: 0x2e8
	// Line 724, Address: 0x102828c, Func Offset: 0x2fc
	// Line 725, Address: 0x10282b8, Func Offset: 0x328
	// Line 726, Address: 0x10282cc, Func Offset: 0x33c
	// Line 727, Address: 0x10282e8, Func Offset: 0x358
	// Line 728, Address: 0x10282f0, Func Offset: 0x360
	// Line 729, Address: 0x10282f8, Func Offset: 0x368
	// Line 730, Address: 0x10282fc, Func Offset: 0x36c
	// Line 731, Address: 0x1028310, Func Offset: 0x380
	// Line 732, Address: 0x1028324, Func Offset: 0x394
	// Line 734, Address: 0x1028348, Func Offset: 0x3b8
	// Line 737, Address: 0x1028350, Func Offset: 0x3c0
	// Line 738, Address: 0x1028360, Func Offset: 0x3d0
	// Line 739, Address: 0x102836c, Func Offset: 0x3dc
	// Line 740, Address: 0x1028390, Func Offset: 0x400
	// Line 741, Address: 0x1028398, Func Offset: 0x408
	// Func End, Address: 0x10283b8, Func Offset: 0x428
}

// 
// Start address: 0x10283c0
void scroll_h()
{
	unsigned short wD4;
	// Line 757, Address: 0x10283c0, Func Offset: 0
	// Line 760, Address: 0x10283cc, Func Offset: 0xc
	// Line 761, Address: 0x10283d8, Func Offset: 0x18
	// Line 762, Address: 0x10283e0, Func Offset: 0x20
	// Line 763, Address: 0x1028414, Func Offset: 0x54
	// Line 764, Address: 0x1028428, Func Offset: 0x68
	// Line 765, Address: 0x1028454, Func Offset: 0x94
	// Line 766, Address: 0x1028468, Func Offset: 0xa8
	// Line 769, Address: 0x1028470, Func Offset: 0xb0
	// Line 774, Address: 0x1028484, Func Offset: 0xc4
	// Func End, Address: 0x1028498, Func Offset: 0xd8
}

// 
// Start address: 0x10284a0
void scrh_move()
{
	unsigned short wD0;
	// Line 776, Address: 0x10284a0, Func Offset: 0
	// Line 779, Address: 0x10284ac, Func Offset: 0xc
	// Line 780, Address: 0x10284b8, Func Offset: 0x18
	// Line 781, Address: 0x10284cc, Func Offset: 0x2c
	// Line 782, Address: 0x10284e0, Func Offset: 0x40
	// Line 784, Address: 0x10284ec, Func Offset: 0x4c
	// Line 785, Address: 0x10284f4, Func Offset: 0x54
	// Line 786, Address: 0x10284fc, Func Offset: 0x5c
	// Line 787, Address: 0x1028514, Func Offset: 0x74
	// Line 788, Address: 0x1028520, Func Offset: 0x80
	// Line 790, Address: 0x1028528, Func Offset: 0x88
	// Line 793, Address: 0x1028534, Func Offset: 0x94
	// Func End, Address: 0x1028548, Func Offset: 0xa8
}

// 
// Start address: 0x1028550
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 796, Address: 0x1028550, Func Offset: 0
	// Line 799, Address: 0x102855c, Func Offset: 0xc
	// Line 800, Address: 0x102857c, Func Offset: 0x2c
	// Line 803, Address: 0x1028584, Func Offset: 0x34
	// Line 804, Address: 0x102859c, Func Offset: 0x4c
	// Line 805, Address: 0x10285cc, Func Offset: 0x7c
	// Line 808, Address: 0x10285d8, Func Offset: 0x88
	// Line 809, Address: 0x10285e0, Func Offset: 0x90
	// Line 810, Address: 0x10285f4, Func Offset: 0xa4
	// Line 811, Address: 0x1028624, Func Offset: 0xd4
	// Line 812, Address: 0x1028630, Func Offset: 0xe0
	// Line 814, Address: 0x1028638, Func Offset: 0xe8
	// Func End, Address: 0x1028648, Func Offset: 0xf8
}

// 
// Start address: 0x1028650
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 817, Address: 0x1028650, Func Offset: 0
	// Line 820, Address: 0x102865c, Func Offset: 0xc
	// Line 821, Address: 0x102867c, Func Offset: 0x2c
	// Line 824, Address: 0x1028684, Func Offset: 0x34
	// Line 825, Address: 0x102869c, Func Offset: 0x4c
	// Line 826, Address: 0x10286cc, Func Offset: 0x7c
	// Line 829, Address: 0x10286d8, Func Offset: 0x88
	// Line 830, Address: 0x10286e0, Func Offset: 0x90
	// Line 831, Address: 0x10286f4, Func Offset: 0xa4
	// Line 832, Address: 0x1028724, Func Offset: 0xd4
	// Line 833, Address: 0x1028730, Func Offset: 0xe0
	// Line 835, Address: 0x1028738, Func Offset: 0xe8
	// Func End, Address: 0x1028748, Func Offset: 0xf8
}

// 
// Start address: 0x1028750
void scroll_v()
{
	unsigned short wD0;
	// Line 854, Address: 0x1028750, Func Offset: 0
	// Line 857, Address: 0x102875c, Func Offset: 0xc
	// Line 858, Address: 0x1028788, Func Offset: 0x38
	// Line 859, Address: 0x10287a0, Func Offset: 0x50
	// Line 862, Address: 0x10287a8, Func Offset: 0x58
	// Line 863, Address: 0x10287c0, Func Offset: 0x70
	// Line 864, Address: 0x10287c8, Func Offset: 0x78
	// Line 865, Address: 0x10287e8, Func Offset: 0x98
	// Line 866, Address: 0x10287fc, Func Offset: 0xac
	// Line 867, Address: 0x1028808, Func Offset: 0xb8
	// Line 869, Address: 0x1028810, Func Offset: 0xc0
	// Line 870, Address: 0x1028824, Func Offset: 0xd4
	// Line 871, Address: 0x1028834, Func Offset: 0xe4
	// Line 872, Address: 0x102883c, Func Offset: 0xec
	// Line 873, Address: 0x1028848, Func Offset: 0xf8
	// Line 875, Address: 0x1028850, Func Offset: 0x100
	// Line 876, Address: 0x1028858, Func Offset: 0x108
	// Line 877, Address: 0x102886c, Func Offset: 0x11c
	// Line 878, Address: 0x1028874, Func Offset: 0x124
	// Line 884, Address: 0x102887c, Func Offset: 0x12c
	// Line 885, Address: 0x1028890, Func Offset: 0x140
	// Line 886, Address: 0x1028898, Func Offset: 0x148
	// Line 887, Address: 0x10288a4, Func Offset: 0x154
	// Line 889, Address: 0x10288ac, Func Offset: 0x15c
	// Line 890, Address: 0x10288c0, Func Offset: 0x170
	// Line 891, Address: 0x10288c8, Func Offset: 0x178
	// Line 896, Address: 0x10288d0, Func Offset: 0x180
	// Line 898, Address: 0x10288d8, Func Offset: 0x188
	// Func End, Address: 0x10288ec, Func Offset: 0x19c
}

// 
// Start address: 0x10288f0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 904, Address: 0x10288f0, Func Offset: 0
	// Line 907, Address: 0x1028900, Func Offset: 0x10
	// Line 908, Address: 0x102891c, Func Offset: 0x2c
	// Line 909, Address: 0x1028928, Func Offset: 0x38
	// Line 912, Address: 0x1028930, Func Offset: 0x40
	// Line 913, Address: 0x102893c, Func Offset: 0x4c
	// Line 914, Address: 0x1028954, Func Offset: 0x64
	// Line 917, Address: 0x1028970, Func Offset: 0x80
	// Line 918, Address: 0x1028980, Func Offset: 0x90
	// Line 919, Address: 0x102898c, Func Offset: 0x9c
	// Line 921, Address: 0x1028994, Func Offset: 0xa4
	// Line 922, Address: 0x10289b4, Func Offset: 0xc4
	// Line 923, Address: 0x10289c0, Func Offset: 0xd0
	// Line 924, Address: 0x10289c8, Func Offset: 0xd8
	// Line 925, Address: 0x10289e8, Func Offset: 0xf8
	// Line 926, Address: 0x10289f4, Func Offset: 0x104
	// Line 928, Address: 0x10289fc, Func Offset: 0x10c
	// Line 932, Address: 0x1028a08, Func Offset: 0x118
	// Func End, Address: 0x1028a1c, Func Offset: 0x12c
}

// 
// Start address: 0x1028a20
void sv_move_main1(unsigned short wD0)
{
	// Line 936, Address: 0x1028a20, Func Offset: 0
	// Line 938, Address: 0x1028a2c, Func Offset: 0xc
	// Line 939, Address: 0x1028a4c, Func Offset: 0x2c
	// Line 940, Address: 0x1028a58, Func Offset: 0x38
	// Line 941, Address: 0x1028a60, Func Offset: 0x40
	// Line 942, Address: 0x1028a80, Func Offset: 0x60
	// Line 943, Address: 0x1028a8c, Func Offset: 0x6c
	// Line 945, Address: 0x1028a94, Func Offset: 0x74
	// Line 948, Address: 0x1028aa0, Func Offset: 0x80
	// Func End, Address: 0x1028ab0, Func Offset: 0x90
}

// 
// Start address: 0x1028ab0
void sv_move_main2(unsigned short wD0)
{
	// Line 951, Address: 0x1028ab0, Func Offset: 0
	// Line 953, Address: 0x1028abc, Func Offset: 0xc
	// Line 954, Address: 0x1028adc, Func Offset: 0x2c
	// Line 955, Address: 0x1028ae8, Func Offset: 0x38
	// Line 956, Address: 0x1028af0, Func Offset: 0x40
	// Line 957, Address: 0x1028b10, Func Offset: 0x60
	// Line 958, Address: 0x1028b1c, Func Offset: 0x6c
	// Line 960, Address: 0x1028b24, Func Offset: 0x74
	// Line 963, Address: 0x1028b30, Func Offset: 0x80
	// Func End, Address: 0x1028b40, Func Offset: 0x90
}

// 
// Start address: 0x1028b40
void sv_move_sub2()
{
	// Line 966, Address: 0x1028b40, Func Offset: 0
	// Line 967, Address: 0x1028b48, Func Offset: 0x8
	// Line 968, Address: 0x1028b50, Func Offset: 0x10
	// Line 969, Address: 0x1028b5c, Func Offset: 0x1c
	// Func End, Address: 0x1028b6c, Func Offset: 0x2c
}

// 
// Start address: 0x1028b70
void sv_move_sub(unsigned short wD0)
{
	_anon0 lD1;
	// Line 972, Address: 0x1028b70, Func Offset: 0
	// Line 975, Address: 0x1028b7c, Func Offset: 0xc
	// Line 976, Address: 0x1028b80, Func Offset: 0x10
	// Line 977, Address: 0x1028b88, Func Offset: 0x18
	// Line 978, Address: 0x1028ba4, Func Offset: 0x34
	// Line 979, Address: 0x1028bc0, Func Offset: 0x50
	// Line 980, Address: 0x1028bcc, Func Offset: 0x5c
	// Line 982, Address: 0x1028bd4, Func Offset: 0x64
	// Line 985, Address: 0x1028be0, Func Offset: 0x70
	// Func End, Address: 0x1028bf0, Func Offset: 0x80
}

// 
// Start address: 0x1028bf0
void sv_move_minus(unsigned short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 990, Address: 0x1028bf0, Func Offset: 0
	// Line 994, Address: 0x1028c00, Func Offset: 0x10
	// Line 995, Address: 0x1028c1c, Func Offset: 0x2c
	// Line 996, Address: 0x1028c28, Func Offset: 0x38
	// Line 998, Address: 0x1028c3c, Func Offset: 0x4c
	// Line 999, Address: 0x1028c44, Func Offset: 0x54
	// Line 1000, Address: 0x1028c4c, Func Offset: 0x5c
	// Line 1001, Address: 0x1028c50, Func Offset: 0x60
	// Line 1002, Address: 0x1028c5c, Func Offset: 0x6c
	// Func End, Address: 0x1028c70, Func Offset: 0x80
}

// 
// Start address: 0x1028c70
void scrv_up_ch(_anon0 lD1)
{
	// Line 1006, Address: 0x1028c70, Func Offset: 0
	// Line 1007, Address: 0x1028c7c, Func Offset: 0xc
	// Line 1008, Address: 0x1028ca4, Func Offset: 0x34
	// Line 1009, Address: 0x1028cbc, Func Offset: 0x4c
	// Line 1010, Address: 0x1028cc8, Func Offset: 0x58
	// Line 1011, Address: 0x1028cdc, Func Offset: 0x6c
	// Line 1012, Address: 0x1028cf0, Func Offset: 0x80
	// Line 1013, Address: 0x1028d04, Func Offset: 0x94
	// Line 1016, Address: 0x1028d0c, Func Offset: 0x9c
	// Line 1019, Address: 0x1028d18, Func Offset: 0xa8
	// Line 1021, Address: 0x1028d24, Func Offset: 0xb4
	// Func End, Address: 0x1028d34, Func Offset: 0xc4
}

// 
// Start address: 0x1028d40
void sv_move_plus(unsigned short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 1027, Address: 0x1028d40, Func Offset: 0
	// Line 1031, Address: 0x1028d50, Func Offset: 0x10
	// Line 1032, Address: 0x1028d54, Func Offset: 0x14
	// Line 1033, Address: 0x1028d5c, Func Offset: 0x1c
	// Line 1034, Address: 0x1028d68, Func Offset: 0x28
	// Line 1036, Address: 0x1028d7c, Func Offset: 0x3c
	// Line 1037, Address: 0x1028d84, Func Offset: 0x44
	// Line 1038, Address: 0x1028d8c, Func Offset: 0x4c
	// Line 1040, Address: 0x1028d90, Func Offset: 0x50
	// Line 1042, Address: 0x1028d9c, Func Offset: 0x5c
	// Func End, Address: 0x1028db0, Func Offset: 0x70
}

// 
// Start address: 0x1028db0
void scrv_down_ch(_anon0 lD1)
{
	// Line 1046, Address: 0x1028db0, Func Offset: 0
	// Line 1047, Address: 0x1028dbc, Func Offset: 0xc
	// Line 1048, Address: 0x1028de4, Func Offset: 0x34
	// Line 1049, Address: 0x1028df0, Func Offset: 0x40
	// Line 1050, Address: 0x1028e04, Func Offset: 0x54
	// Line 1051, Address: 0x1028e18, Func Offset: 0x68
	// Line 1052, Address: 0x1028e2c, Func Offset: 0x7c
	// Line 1053, Address: 0x1028e40, Func Offset: 0x90
	// Line 1055, Address: 0x1028e48, Func Offset: 0x98
	// Line 1058, Address: 0x1028e54, Func Offset: 0xa4
	// Line 1060, Address: 0x1028e60, Func Offset: 0xb0
	// Func End, Address: 0x1028e70, Func Offset: 0xc0
}

// 
// Start address: 0x1028e70
void scrv_move(_anon0 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1063, Address: 0x1028e70, Func Offset: 0
	// Line 1066, Address: 0x1028e80, Func Offset: 0x10
	// Line 1068, Address: 0x1028e8c, Func Offset: 0x1c
	// Line 1069, Address: 0x1028e94, Func Offset: 0x24
	// Line 1070, Address: 0x1028e9c, Func Offset: 0x2c
	// Line 1072, Address: 0x1028ea0, Func Offset: 0x30
	// Line 1073, Address: 0x1028ec8, Func Offset: 0x58
	// Line 1076, Address: 0x1028ed4, Func Offset: 0x64
	// Line 1077, Address: 0x1028f08, Func Offset: 0x98
	// Line 1078, Address: 0x1028f1c, Func Offset: 0xac
	// Line 1080, Address: 0x1028f48, Func Offset: 0xd8
	// Line 1081, Address: 0x1028f5c, Func Offset: 0xec
	// Line 1083, Address: 0x1028f64, Func Offset: 0xf4
	// Line 1088, Address: 0x1028f78, Func Offset: 0x108
	// Func End, Address: 0x1028f8c, Func Offset: 0x11c
}

// 
// Start address: 0x1028f90
void scrollb_hv(_anon0 lD4, _anon0 lD5)
{
	_anon0 lD0;
	_anon0 lD2;
	_anon0 lD3;
	// Line 1092, Address: 0x1028f90, Func Offset: 0
	// Line 1095, Address: 0x1028f9c, Func Offset: 0xc
	// Line 1096, Address: 0x1028fac, Func Offset: 0x1c
	// Line 1097, Address: 0x1028fbc, Func Offset: 0x2c
	// Line 1099, Address: 0x1028fc8, Func Offset: 0x38
	// Line 1101, Address: 0x1028ffc, Func Offset: 0x6c
	// Line 1102, Address: 0x1029010, Func Offset: 0x80
	// Line 1103, Address: 0x1029020, Func Offset: 0x90
	// Line 1104, Address: 0x1029034, Func Offset: 0xa4
	// Line 1105, Address: 0x1029048, Func Offset: 0xb8
	// Line 1108, Address: 0x1029050, Func Offset: 0xc0
	// Line 1113, Address: 0x1029064, Func Offset: 0xd4
	// Line 1114, Address: 0x1029074, Func Offset: 0xe4
	// Line 1115, Address: 0x1029084, Func Offset: 0xf4
	// Line 1117, Address: 0x1029090, Func Offset: 0x100
	// Line 1119, Address: 0x10290c4, Func Offset: 0x134
	// Line 1120, Address: 0x10290d8, Func Offset: 0x148
	// Line 1121, Address: 0x10290e8, Func Offset: 0x158
	// Line 1122, Address: 0x10290fc, Func Offset: 0x16c
	// Line 1123, Address: 0x1029110, Func Offset: 0x180
	// Line 1126, Address: 0x1029118, Func Offset: 0x188
	// Line 1131, Address: 0x102912c, Func Offset: 0x19c
	// Func End, Address: 0x1029138, Func Offset: 0x1a8
}

// 
// Start address: 0x1029140
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1138, Address: 0x1029140, Func Offset: 0
	// Line 1141, Address: 0x102914c, Func Offset: 0xc
	// Line 1142, Address: 0x1029158, Func Offset: 0x18
	// Line 1144, Address: 0x1029164, Func Offset: 0x24
	// Line 1145, Address: 0x1029190, Func Offset: 0x50
	// Line 1146, Address: 0x10291a4, Func Offset: 0x64
	// Line 1147, Address: 0x10291d4, Func Offset: 0x94
	// Line 1148, Address: 0x10291e8, Func Offset: 0xa8
	// Line 1151, Address: 0x10291f0, Func Offset: 0xb0
	// Line 1156, Address: 0x1029204, Func Offset: 0xc4
	// Func End, Address: 0x1029214, Func Offset: 0xd4
}

// 
// Start address: 0x1029220
void scrollb_h(int lD4, int flagb)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1160, Address: 0x1029220, Func Offset: 0
	// Line 1164, Address: 0x1029230, Func Offset: 0x10
	// Line 1165, Address: 0x102923c, Func Offset: 0x1c
	// Line 1166, Address: 0x102924c, Func Offset: 0x2c
	// Line 1168, Address: 0x1029258, Func Offset: 0x38
	// Line 1169, Address: 0x1029260, Func Offset: 0x40
	// Line 1170, Address: 0x1029268, Func Offset: 0x48
	// Line 1172, Address: 0x1029274, Func Offset: 0x54
	// Line 1173, Address: 0x1029280, Func Offset: 0x60
	// Line 1174, Address: 0x1029294, Func Offset: 0x74
	// Line 1175, Address: 0x10292a0, Func Offset: 0x80
	// Line 1176, Address: 0x10292b4, Func Offset: 0x94
	// Line 1177, Address: 0x10292c4, Func Offset: 0xa4
	// Line 1178, Address: 0x10292d8, Func Offset: 0xb8
	// Line 1179, Address: 0x10292f4, Func Offset: 0xd4
	// Line 1182, Address: 0x10292fc, Func Offset: 0xdc
	// Line 1187, Address: 0x102931c, Func Offset: 0xfc
	// Func End, Address: 0x102932c, Func Offset: 0x10c
}

// 
// Start address: 0x1029330
void scrollc_h(int lD4, int flagc)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1191, Address: 0x1029330, Func Offset: 0
	// Line 1195, Address: 0x1029340, Func Offset: 0x10
	// Line 1196, Address: 0x102934c, Func Offset: 0x1c
	// Line 1197, Address: 0x102935c, Func Offset: 0x2c
	// Line 1199, Address: 0x1029368, Func Offset: 0x38
	// Line 1200, Address: 0x1029370, Func Offset: 0x40
	// Line 1201, Address: 0x1029378, Func Offset: 0x48
	// Line 1203, Address: 0x1029384, Func Offset: 0x54
	// Line 1204, Address: 0x1029390, Func Offset: 0x60
	// Line 1205, Address: 0x10293a4, Func Offset: 0x74
	// Line 1206, Address: 0x10293b0, Func Offset: 0x80
	// Line 1207, Address: 0x10293c4, Func Offset: 0x94
	// Line 1208, Address: 0x10293d4, Func Offset: 0xa4
	// Line 1209, Address: 0x10293e8, Func Offset: 0xb8
	// Line 1210, Address: 0x1029404, Func Offset: 0xd4
	// Line 1213, Address: 0x102940c, Func Offset: 0xdc
	// Line 1218, Address: 0x102942c, Func Offset: 0xfc
	// Func End, Address: 0x102943c, Func Offset: 0x10c
}

// 
// Start address: 0x1029440
void scrollz_h(int lD4, int flagz)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1230, Address: 0x1029440, Func Offset: 0
	// Line 1234, Address: 0x1029450, Func Offset: 0x10
	// Line 1235, Address: 0x102945c, Func Offset: 0x1c
	// Line 1236, Address: 0x102946c, Func Offset: 0x2c
	// Line 1238, Address: 0x1029478, Func Offset: 0x38
	// Line 1239, Address: 0x1029480, Func Offset: 0x40
	// Line 1240, Address: 0x1029488, Func Offset: 0x48
	// Line 1242, Address: 0x1029494, Func Offset: 0x54
	// Line 1243, Address: 0x10294a0, Func Offset: 0x60
	// Line 1244, Address: 0x10294b4, Func Offset: 0x74
	// Line 1245, Address: 0x10294c0, Func Offset: 0x80
	// Line 1246, Address: 0x10294d4, Func Offset: 0x94
	// Line 1247, Address: 0x10294e4, Func Offset: 0xa4
	// Line 1248, Address: 0x10294f8, Func Offset: 0xb8
	// Line 1249, Address: 0x1029514, Func Offset: 0xd4
	// Line 1252, Address: 0x102951c, Func Offset: 0xdc
	// Line 1257, Address: 0x102953c, Func Offset: 0xfc
	// Func End, Address: 0x102954c, Func Offset: 0x10c
}

// 
// Start address: 0x1029550
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1272, Address: 0x1029550, Func Offset: 0
	// Line 1278, Address: 0x102956c, Func Offset: 0x1c
	// Line 1279, Address: 0x1029570, Func Offset: 0x20
	// Line 1280, Address: 0x102957c, Func Offset: 0x2c
	// Line 1281, Address: 0x1029588, Func Offset: 0x38
	// Line 1282, Address: 0x1029590, Func Offset: 0x40
	// Line 1283, Address: 0x1029598, Func Offset: 0x48
	// Line 1291, Address: 0x10295ac, Func Offset: 0x5c
	// Func End, Address: 0x10295d0, Func Offset: 0x80
}

// 
// Start address: 0x10295d0
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
	// Line 1304, Address: 0x10295d0, Func Offset: 0
	// Line 1313, Address: 0x10295f0, Func Offset: 0x20
	// Line 1314, Address: 0x10295f4, Func Offset: 0x24
	// Line 1315, Address: 0x1029600, Func Offset: 0x30
	// Line 1316, Address: 0x102960c, Func Offset: 0x3c
	// Line 1317, Address: 0x1029614, Func Offset: 0x44
	// Line 1318, Address: 0x102961c, Func Offset: 0x4c
	// Line 1320, Address: 0x1029630, Func Offset: 0x60
	// Line 1321, Address: 0x1029634, Func Offset: 0x64
	// Line 1322, Address: 0x1029640, Func Offset: 0x70
	// Line 1323, Address: 0x102964c, Func Offset: 0x7c
	// Line 1324, Address: 0x1029654, Func Offset: 0x84
	// Line 1326, Address: 0x102965c, Func Offset: 0x8c
	// Line 1327, Address: 0x1029668, Func Offset: 0x98
	// Line 1328, Address: 0x102967c, Func Offset: 0xac
	// Line 1330, Address: 0x1029688, Func Offset: 0xb8
	// Line 1331, Address: 0x1029690, Func Offset: 0xc0
	// Line 1333, Address: 0x1029698, Func Offset: 0xc8
	// Line 1335, Address: 0x10296b8, Func Offset: 0xe8
	// Line 1341, Address: 0x10296e4, Func Offset: 0x114
	// Line 1342, Address: 0x10296f8, Func Offset: 0x128
	// Line 1344, Address: 0x1029704, Func Offset: 0x134
	// Line 1345, Address: 0x102970c, Func Offset: 0x13c
	// Line 1346, Address: 0x1029714, Func Offset: 0x144
	// Line 1348, Address: 0x1029734, Func Offset: 0x164
	// Line 1354, Address: 0x1029760, Func Offset: 0x190
	// Line 1355, Address: 0x1029774, Func Offset: 0x1a4
	// Line 1357, Address: 0x1029780, Func Offset: 0x1b0
	// Line 1358, Address: 0x1029788, Func Offset: 0x1b8
	// Line 1359, Address: 0x1029790, Func Offset: 0x1c0
	// Line 1361, Address: 0x10297b0, Func Offset: 0x1e0
	// Line 1367, Address: 0x10297dc, Func Offset: 0x20c
	// Line 1368, Address: 0x10297f0, Func Offset: 0x220
	// Line 1370, Address: 0x10297fc, Func Offset: 0x22c
	// Line 1371, Address: 0x1029804, Func Offset: 0x234
	// Line 1372, Address: 0x102980c, Func Offset: 0x23c
	// Line 1374, Address: 0x102982c, Func Offset: 0x25c
	// Line 1383, Address: 0x1029858, Func Offset: 0x288
	// Func End, Address: 0x1029880, Func Offset: 0x2b0
}

// 
// Start address: 0x1029880
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
	// Line 1400, Address: 0x1029880, Func Offset: 0
	// Line 1411, Address: 0x10298ac, Func Offset: 0x2c
	// Line 1413, Address: 0x10298b4, Func Offset: 0x34
	// Line 1414, Address: 0x10298cc, Func Offset: 0x4c
	// Line 1415, Address: 0x10298e0, Func Offset: 0x60
	// Line 1417, Address: 0x10298e8, Func Offset: 0x68
	// Line 1419, Address: 0x10298fc, Func Offset: 0x7c
	// Line 1420, Address: 0x1029914, Func Offset: 0x94
	// Line 1421, Address: 0x1029928, Func Offset: 0xa8
	// Line 1422, Address: 0x1029930, Func Offset: 0xb0
	// Line 1424, Address: 0x1029938, Func Offset: 0xb8
	// Line 1425, Address: 0x102994c, Func Offset: 0xcc
	// Line 1430, Address: 0x1029954, Func Offset: 0xd4
	// Line 1431, Address: 0x10299a4, Func Offset: 0x124
	// Line 1432, Address: 0x10299ac, Func Offset: 0x12c
	// Line 1438, Address: 0x10299cc, Func Offset: 0x14c
	// Line 1439, Address: 0x10299ec, Func Offset: 0x16c
	// Line 1440, Address: 0x1029a10, Func Offset: 0x190
	// Line 1441, Address: 0x1029a1c, Func Offset: 0x19c
	// Line 1442, Address: 0x1029a24, Func Offset: 0x1a4
	// Line 1444, Address: 0x1029a44, Func Offset: 0x1c4
	// Line 1448, Address: 0x1029a70, Func Offset: 0x1f0
	// Line 1451, Address: 0x1029a78, Func Offset: 0x1f8
	// Line 1452, Address: 0x1029a7c, Func Offset: 0x1fc
	// Line 1456, Address: 0x1029a9c, Func Offset: 0x21c
	// Line 1463, Address: 0x1029ac8, Func Offset: 0x248
	// Line 1470, Address: 0x1029adc, Func Offset: 0x25c
	// Line 1471, Address: 0x1029ae4, Func Offset: 0x264
	// Line 1472, Address: 0x1029aec, Func Offset: 0x26c
	// Line 1473, Address: 0x1029b04, Func Offset: 0x284
	// Line 1474, Address: 0x1029b24, Func Offset: 0x2a4
	// Line 1478, Address: 0x1029b2c, Func Offset: 0x2ac
	// Line 1480, Address: 0x1029b5c, Func Offset: 0x2dc
	// Line 1481, Address: 0x1029b68, Func Offset: 0x2e8
	// Line 1485, Address: 0x1029b78, Func Offset: 0x2f8
	// Line 1486, Address: 0x1029b84, Func Offset: 0x304
	// Line 1487, Address: 0x1029ba4, Func Offset: 0x324
	// Line 1488, Address: 0x1029bd0, Func Offset: 0x350
	// Line 1489, Address: 0x1029bf0, Func Offset: 0x370
	// Line 1491, Address: 0x1029c14, Func Offset: 0x394
	// Line 1494, Address: 0x1029c38, Func Offset: 0x3b8
	// Line 1496, Address: 0x1029c58, Func Offset: 0x3d8
	// Line 1498, Address: 0x1029c6c, Func Offset: 0x3ec
	// Line 1499, Address: 0x1029c78, Func Offset: 0x3f8
	// Line 1500, Address: 0x1029c88, Func Offset: 0x408
	// Line 1502, Address: 0x1029c90, Func Offset: 0x410
	// Func End, Address: 0x1029cb8, Func Offset: 0x438
}

// 
// Start address: 0x1029cc0
void scrollwrtc()
{
	// Line 1510, Address: 0x1029cc0, Func Offset: 0
	// Func End, Address: 0x1029cc8, Func Offset: 0x8
}

// 
// Start address: 0x1029cd0
void scrollwrtz()
{
	// Line 1515, Address: 0x1029cd0, Func Offset: 0
	// Func End, Address: 0x1029cd8, Func Offset: 0x8
}

// 
// Start address: 0x1029ce0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1536, Address: 0x1029ce0, Func Offset: 0
	// Line 1549, Address: 0x1029d08, Func Offset: 0x28
	// Line 1552, Address: 0x1029d28, Func Offset: 0x48
	// Line 1553, Address: 0x1029d3c, Func Offset: 0x5c
	// Line 1554, Address: 0x1029d50, Func Offset: 0x70
	// Line 1555, Address: 0x1029d64, Func Offset: 0x84
	// Line 1557, Address: 0x1029d78, Func Offset: 0x98
	// Line 1558, Address: 0x1029d84, Func Offset: 0xa4
	// Line 1559, Address: 0x1029d98, Func Offset: 0xb8
	// Func End, Address: 0x1029da8, Func Offset: 0xc8
}

// 
// Start address: 0x1029db0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1563, Address: 0x1029db0, Func Offset: 0
	// Line 1567, Address: 0x1029dd8, Func Offset: 0x28
	// Line 1570, Address: 0x1029df8, Func Offset: 0x48
	// Line 1571, Address: 0x1029e0c, Func Offset: 0x5c
	// Line 1572, Address: 0x1029e20, Func Offset: 0x70
	// Line 1573, Address: 0x1029e34, Func Offset: 0x84
	// Line 1575, Address: 0x1029e48, Func Offset: 0x98
	// Line 1576, Address: 0x1029e54, Func Offset: 0xa4
	// Line 1577, Address: 0x1029e68, Func Offset: 0xb8
	// Func End, Address: 0x1029e78, Func Offset: 0xc8
}

// 
// Start address: 0x1029e80
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1596, Address: 0x1029e80, Func Offset: 0
	// Line 1600, Address: 0x1029ea8, Func Offset: 0x28
	// Line 1603, Address: 0x1029ec8, Func Offset: 0x48
	// Line 1604, Address: 0x1029edc, Func Offset: 0x5c
	// Line 1605, Address: 0x1029eec, Func Offset: 0x6c
	// Line 1606, Address: 0x1029f00, Func Offset: 0x80
	// Line 1608, Address: 0x1029f10, Func Offset: 0x90
	// Line 1609, Address: 0x1029f1c, Func Offset: 0x9c
	// Line 1610, Address: 0x1029f30, Func Offset: 0xb0
	// Func End, Address: 0x1029f40, Func Offset: 0xc0
}

// 
// Start address: 0x1029f40
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
	// Line 1629, Address: 0x1029f40, Func Offset: 0
	// Line 1635, Address: 0x1029f74, Func Offset: 0x34
	// Line 1637, Address: 0x1029f84, Func Offset: 0x44
	// Line 1638, Address: 0x1029f88, Func Offset: 0x48
	// Line 1639, Address: 0x1029f90, Func Offset: 0x50
	// Line 1641, Address: 0x1029fa0, Func Offset: 0x60
	// Line 1643, Address: 0x1029fa4, Func Offset: 0x64
	// Line 1644, Address: 0x1029fac, Func Offset: 0x6c
	// Line 1647, Address: 0x1029fb4, Func Offset: 0x74
	// Line 1648, Address: 0x1029fbc, Func Offset: 0x7c
	// Line 1649, Address: 0x1029fc8, Func Offset: 0x88
	// Line 1651, Address: 0x1029fd4, Func Offset: 0x94
	// Line 1652, Address: 0x1029fdc, Func Offset: 0x9c
	// Line 1653, Address: 0x1029fe4, Func Offset: 0xa4
	// Line 1654, Address: 0x1029fec, Func Offset: 0xac
	// Line 1656, Address: 0x1029ff8, Func Offset: 0xb8
	// Line 1657, Address: 0x102a000, Func Offset: 0xc0
	// Line 1658, Address: 0x102a008, Func Offset: 0xc8
	// Line 1659, Address: 0x102a010, Func Offset: 0xd0
	// Line 1661, Address: 0x102a01c, Func Offset: 0xdc
	// Line 1662, Address: 0x102a024, Func Offset: 0xe4
	// Line 1663, Address: 0x102a02c, Func Offset: 0xec
	// Line 1666, Address: 0x102a034, Func Offset: 0xf4
	// Line 1667, Address: 0x102a03c, Func Offset: 0xfc
	// Line 1670, Address: 0x102a044, Func Offset: 0x104
	// Line 1671, Address: 0x102a088, Func Offset: 0x148
	// Line 1672, Address: 0x102a0cc, Func Offset: 0x18c
	// Line 1673, Address: 0x102a110, Func Offset: 0x1d0
	// Line 1675, Address: 0x102a154, Func Offset: 0x214
	// Func End, Address: 0x102a184, Func Offset: 0x244
}

// 
// Start address: 0x102a190
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1693, Address: 0x102a190, Func Offset: 0
	// Line 1694, Address: 0x102a1b0, Func Offset: 0x20
	// Line 1695, Address: 0x102a1d0, Func Offset: 0x40
	// Func End, Address: 0x102a1e0, Func Offset: 0x50
}

// 
// Start address: 0x102a1e0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1697, Address: 0x102a1e0, Func Offset: 0
	// Line 1698, Address: 0x102a200, Func Offset: 0x20
	// Line 1699, Address: 0x102a204, Func Offset: 0x24
	// Line 1700, Address: 0x102a224, Func Offset: 0x44
	// Func End, Address: 0x102a234, Func Offset: 0x54
}

// 
// Start address: 0x102a240
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1707, Address: 0x102a240, Func Offset: 0
	// Line 1713, Address: 0x102a270, Func Offset: 0x30
	// Line 1714, Address: 0x102a280, Func Offset: 0x40
	// Line 1720, Address: 0x102a290, Func Offset: 0x50
	// Line 1721, Address: 0x102a2ac, Func Offset: 0x6c
	// Line 1722, Address: 0x102a2b0, Func Offset: 0x70
	// Line 1723, Address: 0x102a2cc, Func Offset: 0x8c
	// Line 1724, Address: 0x102a2d0, Func Offset: 0x90
	// Line 1725, Address: 0x102a2f0, Func Offset: 0xb0
	// Line 1726, Address: 0x102a2f8, Func Offset: 0xb8
	// Line 1727, Address: 0x102a318, Func Offset: 0xd8
	// Line 1728, Address: 0x102a320, Func Offset: 0xe0
	// Line 1729, Address: 0x102a368, Func Offset: 0x128
	// Line 1731, Address: 0x102a374, Func Offset: 0x134
	// Line 1733, Address: 0x102a390, Func Offset: 0x150
	// Line 1738, Address: 0x102a398, Func Offset: 0x158
	// Line 1739, Address: 0x102a3a4, Func Offset: 0x164
	// Line 1742, Address: 0x102a3b0, Func Offset: 0x170
	// Line 1743, Address: 0x102a3b8, Func Offset: 0x178
	// Line 1744, Address: 0x102a3d8, Func Offset: 0x198
	// Line 1745, Address: 0x102a3f4, Func Offset: 0x1b4
	// Line 1746, Address: 0x102a3fc, Func Offset: 0x1bc
	// Line 1747, Address: 0x102a41c, Func Offset: 0x1dc
	// Line 1749, Address: 0x102a438, Func Offset: 0x1f8
	// Line 1750, Address: 0x102a440, Func Offset: 0x200
	// Line 1751, Address: 0x102a448, Func Offset: 0x208
	// Line 1752, Address: 0x102a454, Func Offset: 0x214
	// Line 1753, Address: 0x102a46c, Func Offset: 0x22c
	// Line 1755, Address: 0x102a47c, Func Offset: 0x23c
	// Line 1758, Address: 0x102a488, Func Offset: 0x248
	// Line 1759, Address: 0x102a490, Func Offset: 0x250
	// Line 1760, Address: 0x102a494, Func Offset: 0x254
	// Func End, Address: 0x102a4b4, Func Offset: 0x274
}

// 
// Start address: 0x102a4c0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1780, Address: 0x102a4c0, Func Offset: 0
	// Line 1788, Address: 0x102a4e8, Func Offset: 0x28
	// Line 1789, Address: 0x102a54c, Func Offset: 0x8c
	// Line 1795, Address: 0x102a554, Func Offset: 0x94
	// Line 1796, Address: 0x102a55c, Func Offset: 0x9c
	// Line 1797, Address: 0x102a57c, Func Offset: 0xbc
	// Line 1798, Address: 0x102a598, Func Offset: 0xd8
	// Line 1799, Address: 0x102a5a0, Func Offset: 0xe0
	// Line 1800, Address: 0x102a5c0, Func Offset: 0x100
	// Line 1803, Address: 0x102a5dc, Func Offset: 0x11c
	// Line 1804, Address: 0x102a5e4, Func Offset: 0x124
	// Line 1805, Address: 0x102a5ec, Func Offset: 0x12c
	// Line 1806, Address: 0x102a5f8, Func Offset: 0x138
	// Line 1807, Address: 0x102a610, Func Offset: 0x150
	// Line 1808, Address: 0x102a618, Func Offset: 0x158
	// Line 1813, Address: 0x102a628, Func Offset: 0x168
	// Line 1816, Address: 0x102a634, Func Offset: 0x174
	// Line 1817, Address: 0x102a63c, Func Offset: 0x17c
	// Line 1818, Address: 0x102a640, Func Offset: 0x180
	// Func End, Address: 0x102a65c, Func Offset: 0x19c
}

// 
// Start address: 0x102a660
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1832, Address: 0x102a660, Func Offset: 0
	// Line 1839, Address: 0x102a67c, Func Offset: 0x1c
	// Line 1840, Address: 0x102a680, Func Offset: 0x20
	// Line 1841, Address: 0x102a688, Func Offset: 0x28
	// Line 1842, Address: 0x102a6ac, Func Offset: 0x4c
	// Line 1843, Address: 0x102a6b8, Func Offset: 0x58
	// Line 1844, Address: 0x102a6d0, Func Offset: 0x70
	// Line 1845, Address: 0x102a6e4, Func Offset: 0x84
	// Line 1850, Address: 0x102a6fc, Func Offset: 0x9c
	// Func End, Address: 0x102a714, Func Offset: 0xb4
}

// 
// Start address: 0x102a720
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1864, Address: 0x102a720, Func Offset: 0
	// Line 1865, Address: 0x102a72c, Func Offset: 0xc
	// Line 1866, Address: 0x102a758, Func Offset: 0x38
	// Line 1867, Address: 0x102a7a4, Func Offset: 0x84
	// Line 1868, Address: 0x102a7d0, Func Offset: 0xb0
	// Line 1870, Address: 0x102a81c, Func Offset: 0xfc
	// Line 1876, Address: 0x102a828, Func Offset: 0x108
	// Line 1877, Address: 0x102a82c, Func Offset: 0x10c
	// Func End, Address: 0x102a838, Func Offset: 0x118
}

// 
// Start address: 0x102a840
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1894, Address: 0x102a840, Func Offset: 0
	// Line 1895, Address: 0x102a85c, Func Offset: 0x1c
	// Line 1897, Address: 0x102a878, Func Offset: 0x38
	// Func End, Address: 0x102a888, Func Offset: 0x48
}

// 
// Start address: 0x102a890
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1899, Address: 0x102a890, Func Offset: 0
	// Line 1900, Address: 0x102a8ac, Func Offset: 0x1c
	// Line 1901, Address: 0x102a8b0, Func Offset: 0x20
	// Line 1903, Address: 0x102a8cc, Func Offset: 0x3c
	// Func End, Address: 0x102a8dc, Func Offset: 0x4c
}

// 
// Start address: 0x102a8e0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1905, Address: 0x102a8e0, Func Offset: 0
	// Line 1906, Address: 0x102a8f4, Func Offset: 0x14
	// Line 1908, Address: 0x102a910, Func Offset: 0x30
	// Func End, Address: 0x102a920, Func Offset: 0x40
}

// 
// Start address: 0x102a920
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1910, Address: 0x102a920, Func Offset: 0
	// Line 1911, Address: 0x102a93c, Func Offset: 0x1c
	// Line 1913, Address: 0x102a958, Func Offset: 0x38
	// Func End, Address: 0x102a968, Func Offset: 0x48
}

// 
// Start address: 0x102a970
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1915, Address: 0x102a970, Func Offset: 0
	// Line 1916, Address: 0x102a988, Func Offset: 0x18
	// Line 1917, Address: 0x102a998, Func Offset: 0x28
	// Line 1918, Address: 0x102a9a8, Func Offset: 0x38
	// Line 1919, Address: 0x102a9b4, Func Offset: 0x44
	// Line 1921, Address: 0x102a9c0, Func Offset: 0x50
	// Line 1922, Address: 0x102a9ec, Func Offset: 0x7c
	// Line 1925, Address: 0x102aa18, Func Offset: 0xa8
	// Func End, Address: 0x102aa24, Func Offset: 0xb4
}

// 
// Start address: 0x102aa30
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1941, Address: 0x102aa30, Func Offset: 0
	// Line 1946, Address: 0x102aa48, Func Offset: 0x18
	// Line 1947, Address: 0x102aa54, Func Offset: 0x24
	// Line 1948, Address: 0x102aa60, Func Offset: 0x30
	// Line 1949, Address: 0x102aa68, Func Offset: 0x38
	// Line 1950, Address: 0x102aa6c, Func Offset: 0x3c
	// Line 1954, Address: 0x102aa84, Func Offset: 0x54
	// Line 1955, Address: 0x102aa8c, Func Offset: 0x5c
	// Line 1956, Address: 0x102aa90, Func Offset: 0x60
	// Line 1958, Address: 0x102aaa0, Func Offset: 0x70
	// Func End, Address: 0x102aac0, Func Offset: 0x90
}

// 
// Start address: 0x102aac0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1961, Address: 0x102aac0, Func Offset: 0
	// Line 1962, Address: 0x102aad8, Func Offset: 0x18
	// Line 1963, Address: 0x102aaf8, Func Offset: 0x38
	// Func End, Address: 0x102ab08, Func Offset: 0x48
}

// 
// Start address: 0x102ab10
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1968, Address: 0x102ab10, Func Offset: 0
	// Line 1972, Address: 0x102ab30, Func Offset: 0x20
	// Line 1975, Address: 0x102ab4c, Func Offset: 0x3c
	// Line 1979, Address: 0x102ab74, Func Offset: 0x64
	// Line 1980, Address: 0x102ab80, Func Offset: 0x70
	// Line 1982, Address: 0x102aba8, Func Offset: 0x98
	// Func End, Address: 0x102abb8, Func Offset: 0xa8
}

// 
// Start address: 0x102abc0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1987, Address: 0x102abc0, Func Offset: 0
	// Line 1990, Address: 0x102abdc, Func Offset: 0x1c
	// Line 1991, Address: 0x102abe4, Func Offset: 0x24
	// Line 1999, Address: 0x102abec, Func Offset: 0x2c
	// Line 2000, Address: 0x102ac08, Func Offset: 0x48
	// Line 2002, Address: 0x102ac34, Func Offset: 0x74
	// Line 2004, Address: 0x102ac58, Func Offset: 0x98
	// Line 2005, Address: 0x102ac78, Func Offset: 0xb8
	// Line 2006, Address: 0x102ac80, Func Offset: 0xc0
	// Line 2007, Address: 0x102aca4, Func Offset: 0xe4
	// Func End, Address: 0x102acc0, Func Offset: 0x100
}

// 
// Start address: 0x102acc0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2033, Address: 0x102acc0, Func Offset: 0
	// Line 2038, Address: 0x102ace8, Func Offset: 0x28
	// Line 2039, Address: 0x102acf8, Func Offset: 0x38
	// Line 2041, Address: 0x102ad14, Func Offset: 0x54
	// Line 2042, Address: 0x102ad38, Func Offset: 0x78
	// Line 2043, Address: 0x102ad60, Func Offset: 0xa0
	// Line 2044, Address: 0x102ad6c, Func Offset: 0xac
	// Line 2045, Address: 0x102ad74, Func Offset: 0xb4
	// Line 2048, Address: 0x102ad90, Func Offset: 0xd0
	// Line 2052, Address: 0x102adb8, Func Offset: 0xf8
	// Line 2055, Address: 0x102adc0, Func Offset: 0x100
	// Line 2056, Address: 0x102adc4, Func Offset: 0x104
	// Line 2060, Address: 0x102ade0, Func Offset: 0x120
	// Line 2067, Address: 0x102ae08, Func Offset: 0x148
	// Func End, Address: 0x102ae24, Func Offset: 0x164
}

// 
// Start address: 0x102ae30
void mapinit()
{
	// Line 2072, Address: 0x102ae30, Func Offset: 0
	// Line 2078, Address: 0x102ae38, Func Offset: 0x8
	// Line 2081, Address: 0x102ae40, Func Offset: 0x10
	// Line 2082, Address: 0x102ae54, Func Offset: 0x24
	// Line 2089, Address: 0x102ae68, Func Offset: 0x38
	// Line 2090, Address: 0x102ae7c, Func Offset: 0x4c
	// Line 2093, Address: 0x102ae84, Func Offset: 0x54
	// Line 2095, Address: 0x102ae9c, Func Offset: 0x6c
	// Line 2099, Address: 0x102aea4, Func Offset: 0x74
	// Func End, Address: 0x102aeb4, Func Offset: 0x84
}

// 
// Start address: 0x102aec0
void mapset()
{
	// Line 2109, Address: 0x102aec0, Func Offset: 0
	// Func End, Address: 0x102aec8, Func Offset: 0x8
}

