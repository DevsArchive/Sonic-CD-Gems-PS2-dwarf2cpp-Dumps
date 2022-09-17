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
typedef int type_9[10];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[10];
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

unsigned char z32bwrttbl[49];
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
	// Line 111, Address: 0x1026c40, Func Offset: 0
	// Func End, Address: 0x1026c48, Func Offset: 0x8
}

// 
// Start address: 0x1026c50
void divdevset()
{
	// Line 115, Address: 0x1026c50, Func Offset: 0
	// Func End, Address: 0x1026c58, Func Offset: 0x8
}

// 
// Start address: 0x1026c60
_anon2* main_chk()
{
	// Line 169, Address: 0x1026c60, Func Offset: 0
	// Line 170, Address: 0x1026c74, Func Offset: 0x14
	// Line 172, Address: 0x1026c84, Func Offset: 0x24
	// Line 173, Address: 0x1026c8c, Func Offset: 0x2c
	// Func End, Address: 0x1026c94, Func Offset: 0x34
}

// 
// Start address: 0x1026ca0
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 186, Address: 0x1026ca0, Func Offset: 0
	// Line 192, Address: 0x1026cac, Func Offset: 0xc
	// Line 197, Address: 0x1026ce0, Func Offset: 0x40
	// Line 199, Address: 0x1026d28, Func Offset: 0x88
	// Line 200, Address: 0x1026d2c, Func Offset: 0x8c
	// Line 201, Address: 0x1026d48, Func Offset: 0xa8
	// Line 202, Address: 0x1026d5c, Func Offset: 0xbc
	// Line 203, Address: 0x1026d78, Func Offset: 0xd8
	// Line 204, Address: 0x1026d8c, Func Offset: 0xec
	// Line 205, Address: 0x1026da8, Func Offset: 0x108
	// Line 206, Address: 0x1026dbc, Func Offset: 0x11c
	// Line 207, Address: 0x1026dd8, Func Offset: 0x138
	// Line 208, Address: 0x1026dec, Func Offset: 0x14c
	// Line 210, Address: 0x1026e08, Func Offset: 0x168
	// Line 211, Address: 0x1026e2c, Func Offset: 0x18c
	// Line 212, Address: 0x1026e38, Func Offset: 0x198
	// Line 214, Address: 0x1026e44, Func Offset: 0x1a4
	// Line 215, Address: 0x1026e60, Func Offset: 0x1c0
	// Line 217, Address: 0x1026e6c, Func Offset: 0x1cc
	// Line 218, Address: 0x1026e74, Func Offset: 0x1d4
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
	// Line 230, Address: 0x1026e90, Func Offset: 0
	// Line 231, Address: 0x1026ea8, Func Offset: 0x18
	// Line 235, Address: 0x1026ec4, Func Offset: 0x34
	// Line 245, Address: 0x1026ef8, Func Offset: 0x68
	// Line 255, Address: 0x1026f24, Func Offset: 0x94
	// Line 256, Address: 0x1026f38, Func Offset: 0xa8
	// Line 257, Address: 0x1026f40, Func Offset: 0xb0
	// Line 258, Address: 0x1026f50, Func Offset: 0xc0
	// Line 260, Address: 0x1026f60, Func Offset: 0xd0
	// Line 262, Address: 0x1026f74, Func Offset: 0xe4
	// Line 265, Address: 0x1026f7c, Func Offset: 0xec
	// Line 266, Address: 0x1026f94, Func Offset: 0x104
	// Line 267, Address: 0x1026fbc, Func Offset: 0x12c
	// Line 270, Address: 0x1026fc4, Func Offset: 0x134
	// Line 273, Address: 0x1026fe4, Func Offset: 0x154
	// Line 274, Address: 0x1027000, Func Offset: 0x170
	// Line 278, Address: 0x1027014, Func Offset: 0x184
	// Line 279, Address: 0x1027028, Func Offset: 0x198
	// Line 280, Address: 0x1027034, Func Offset: 0x1a4
	// Line 282, Address: 0x102703c, Func Offset: 0x1ac
	// Line 286, Address: 0x1027040, Func Offset: 0x1b0
	// Line 287, Address: 0x1027064, Func Offset: 0x1d4
	// Line 289, Address: 0x1027074, Func Offset: 0x1e4
	// Line 291, Address: 0x102707c, Func Offset: 0x1ec
	// Line 292, Address: 0x1027090, Func Offset: 0x200
	// Line 293, Address: 0x102709c, Func Offset: 0x20c
	// Line 295, Address: 0x10270a4, Func Offset: 0x214
	// Line 298, Address: 0x10270a8, Func Offset: 0x218
	// Line 299, Address: 0x10270cc, Func Offset: 0x23c
	// Line 302, Address: 0x10270dc, Func Offset: 0x24c
	// Line 304, Address: 0x10270e4, Func Offset: 0x254
	// Line 306, Address: 0x10270f4, Func Offset: 0x264
	// Line 307, Address: 0x10270f8, Func Offset: 0x268
	// Line 308, Address: 0x1027110, Func Offset: 0x280
	// Line 309, Address: 0x1027128, Func Offset: 0x298
	// Line 310, Address: 0x1027140, Func Offset: 0x2b0
	// Line 313, Address: 0x1027158, Func Offset: 0x2c8
	// Func End, Address: 0x1027178, Func Offset: 0x2e8
}

// 
// Start address: 0x1027180
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 325, Address: 0x1027180, Func Offset: 0
	// Line 330, Address: 0x1027194, Func Offset: 0x14
	// Line 331, Address: 0x102719c, Func Offset: 0x1c
	// Line 332, Address: 0x10271c4, Func Offset: 0x44
	// Line 333, Address: 0x10271e0, Func Offset: 0x60
	// Line 334, Address: 0x1027214, Func Offset: 0x94
	// Line 335, Address: 0x1027228, Func Offset: 0xa8
	// Line 339, Address: 0x102722c, Func Offset: 0xac
	// Line 340, Address: 0x1027238, Func Offset: 0xb8
	// Line 341, Address: 0x1027240, Func Offset: 0xc0
	// Line 342, Address: 0x102724c, Func Offset: 0xcc
	// Line 344, Address: 0x1027258, Func Offset: 0xd8
	// Line 345, Address: 0x1027290, Func Offset: 0x110
	// Line 346, Address: 0x10272d0, Func Offset: 0x150
	// Line 349, Address: 0x1027310, Func Offset: 0x190
	// Line 350, Address: 0x102731c, Func Offset: 0x19c
	// Line 351, Address: 0x1027330, Func Offset: 0x1b0
	// Line 353, Address: 0x1027340, Func Offset: 0x1c0
	// Func End, Address: 0x1027354, Func Offset: 0x1d4
}

// 
// Start address: 0x1027360
void scroll()
{
	int LineSpdTbl[10];
	unsigned char z32b_cnttbl[10];
	unsigned char z32b_cnttbl0[3];
	unsigned char z32b_cnttbl1[6];
	unsigned short z32b_kawatbl[3];
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
	// Line 366, Address: 0x1027360, Func Offset: 0
	// Line 367, Address: 0x1027380, Func Offset: 0x20
	// Line 373, Address: 0x10273b4, Func Offset: 0x54
	// Line 376, Address: 0x10273e8, Func Offset: 0x88
	// Line 379, Address: 0x102740c, Func Offset: 0xac
	// Line 382, Address: 0x1027440, Func Offset: 0xe0
	// Line 392, Address: 0x1027464, Func Offset: 0x104
	// Line 395, Address: 0x1027474, Func Offset: 0x114
	// Line 396, Address: 0x10274a0, Func Offset: 0x140
	// Line 397, Address: 0x10274ac, Func Offset: 0x14c
	// Line 398, Address: 0x10274b8, Func Offset: 0x158
	// Line 400, Address: 0x10274c4, Func Offset: 0x164
	// Line 401, Address: 0x10274d4, Func Offset: 0x174
	// Line 404, Address: 0x10274e4, Func Offset: 0x184
	// Line 405, Address: 0x1027508, Func Offset: 0x1a8
	// Line 406, Address: 0x1027544, Func Offset: 0x1e4
	// Line 408, Address: 0x1027580, Func Offset: 0x220
	// Line 409, Address: 0x1027588, Func Offset: 0x228
	// Line 410, Address: 0x1027590, Func Offset: 0x230
	// Line 412, Address: 0x10275b0, Func Offset: 0x250
	// Line 413, Address: 0x10275c4, Func Offset: 0x264
	// Line 414, Address: 0x10275cc, Func Offset: 0x26c
	// Line 415, Address: 0x10275e0, Func Offset: 0x280
	// Line 416, Address: 0x10275f4, Func Offset: 0x294
	// Line 418, Address: 0x10275f8, Func Offset: 0x298
	// Line 420, Address: 0x1027600, Func Offset: 0x2a0
	// Line 423, Address: 0x1027614, Func Offset: 0x2b4
	// Line 424, Address: 0x1027628, Func Offset: 0x2c8
	// Line 425, Address: 0x1027638, Func Offset: 0x2d8
	// Line 426, Address: 0x1027648, Func Offset: 0x2e8
	// Line 428, Address: 0x1027658, Func Offset: 0x2f8
	// Line 429, Address: 0x1027674, Func Offset: 0x314
	// Line 430, Address: 0x1027690, Func Offset: 0x330
	// Line 431, Address: 0x1027698, Func Offset: 0x338
	// Line 455, Address: 0x10276a0, Func Offset: 0x340
	// Line 456, Address: 0x10276a8, Func Offset: 0x348
	// Line 457, Address: 0x10276b4, Func Offset: 0x354
	// Line 458, Address: 0x10276cc, Func Offset: 0x36c
	// Line 459, Address: 0x10276d0, Func Offset: 0x370
	// Line 460, Address: 0x10276e0, Func Offset: 0x380
	// Line 461, Address: 0x10276e4, Func Offset: 0x384
	// Line 462, Address: 0x10276ec, Func Offset: 0x38c
	// Line 463, Address: 0x1027710, Func Offset: 0x3b0
	// Line 464, Address: 0x1027720, Func Offset: 0x3c0
	// Line 465, Address: 0x1027724, Func Offset: 0x3c4
	// Line 466, Address: 0x1027730, Func Offset: 0x3d0
	// Line 474, Address: 0x1027740, Func Offset: 0x3e0
	// Line 475, Address: 0x1027768, Func Offset: 0x408
	// Line 476, Address: 0x1027774, Func Offset: 0x414
	// Line 477, Address: 0x1027794, Func Offset: 0x434
	// Line 479, Address: 0x10277a0, Func Offset: 0x440
	// Line 480, Address: 0x10277a4, Func Offset: 0x444
	// Line 482, Address: 0x10277b0, Func Offset: 0x450
	// Line 483, Address: 0x10277bc, Func Offset: 0x45c
	// Line 484, Address: 0x10277c8, Func Offset: 0x468
	// Line 486, Address: 0x10277e4, Func Offset: 0x484
	// Line 487, Address: 0x10277f8, Func Offset: 0x498
	// Line 488, Address: 0x102780c, Func Offset: 0x4ac
	// Line 490, Address: 0x1027818, Func Offset: 0x4b8
	// Line 491, Address: 0x102783c, Func Offset: 0x4dc
	// Line 492, Address: 0x102784c, Func Offset: 0x4ec
	// Line 493, Address: 0x1027870, Func Offset: 0x510
	// Line 495, Address: 0x102787c, Func Offset: 0x51c
	// Line 496, Address: 0x1027888, Func Offset: 0x528
	// Line 498, Address: 0x10278ac, Func Offset: 0x54c
	// Line 499, Address: 0x10278b8, Func Offset: 0x558
	// Line 500, Address: 0x10278cc, Func Offset: 0x56c
	// Line 502, Address: 0x10278dc, Func Offset: 0x57c
	// Line 504, Address: 0x1027900, Func Offset: 0x5a0
	// Line 505, Address: 0x102790c, Func Offset: 0x5ac
	// Line 506, Address: 0x1027920, Func Offset: 0x5c0
	// Line 521, Address: 0x1027930, Func Offset: 0x5d0
	// Line 522, Address: 0x1027938, Func Offset: 0x5d8
	// Line 523, Address: 0x1027944, Func Offset: 0x5e4
	// Line 524, Address: 0x1027970, Func Offset: 0x610
	// Line 525, Address: 0x1027974, Func Offset: 0x614
	// Line 526, Address: 0x1027988, Func Offset: 0x628
	// Line 527, Address: 0x1027998, Func Offset: 0x638
	// Line 528, Address: 0x10279a4, Func Offset: 0x644
	// Line 531, Address: 0x10279b0, Func Offset: 0x650
	// Line 533, Address: 0x10279d4, Func Offset: 0x674
	// Line 534, Address: 0x10279e0, Func Offset: 0x680
	// Line 535, Address: 0x10279f4, Func Offset: 0x694
	// Line 537, Address: 0x1027a04, Func Offset: 0x6a4
	// Line 539, Address: 0x1027a28, Func Offset: 0x6c8
	// Line 540, Address: 0x1027a34, Func Offset: 0x6d4
	// Line 541, Address: 0x1027a48, Func Offset: 0x6e8
	// Line 543, Address: 0x1027a58, Func Offset: 0x6f8
	// Line 545, Address: 0x1027a7c, Func Offset: 0x71c
	// Line 546, Address: 0x1027a88, Func Offset: 0x728
	// Line 547, Address: 0x1027a9c, Func Offset: 0x73c
	// Line 549, Address: 0x1027aac, Func Offset: 0x74c
	// Line 551, Address: 0x1027ad0, Func Offset: 0x770
	// Line 552, Address: 0x1027adc, Func Offset: 0x77c
	// Line 553, Address: 0x1027af0, Func Offset: 0x790
	// Line 556, Address: 0x1027b00, Func Offset: 0x7a0
	// Line 557, Address: 0x1027b38, Func Offset: 0x7d8
	// Line 558, Address: 0x1027b44, Func Offset: 0x7e4
	// Line 559, Address: 0x1027b64, Func Offset: 0x804
	// Line 560, Address: 0x1027b70, Func Offset: 0x810
	// Line 562, Address: 0x1027b7c, Func Offset: 0x81c
	// Line 563, Address: 0x1027b88, Func Offset: 0x828
	// Line 564, Address: 0x1027ba4, Func Offset: 0x844
	// Line 565, Address: 0x1027bb8, Func Offset: 0x858
	// Line 566, Address: 0x1027bcc, Func Offset: 0x86c
	// Line 567, Address: 0x1027bd8, Func Offset: 0x878
	// Line 568, Address: 0x1027bfc, Func Offset: 0x89c
	// Line 569, Address: 0x1027c0c, Func Offset: 0x8ac
	// Line 570, Address: 0x1027c30, Func Offset: 0x8d0
	// Line 572, Address: 0x1027c40, Func Offset: 0x8e0
	// Line 574, Address: 0x1027c64, Func Offset: 0x904
	// Line 575, Address: 0x1027c70, Func Offset: 0x910
	// Line 576, Address: 0x1027c84, Func Offset: 0x924
	// Line 578, Address: 0x1027c94, Func Offset: 0x934
	// Line 579, Address: 0x1027ca0, Func Offset: 0x940
	// Line 580, Address: 0x1027cac, Func Offset: 0x94c
	// Line 581, Address: 0x1027cb8, Func Offset: 0x958
	// Line 582, Address: 0x1027cc0, Func Offset: 0x960
	// Line 583, Address: 0x1027cc8, Func Offset: 0x968
	// Line 584, Address: 0x1027cec, Func Offset: 0x98c
	// Line 585, Address: 0x1027d04, Func Offset: 0x9a4
	// Line 586, Address: 0x1027d0c, Func Offset: 0x9ac
	// Line 587, Address: 0x1027d14, Func Offset: 0x9b4
	// Line 589, Address: 0x1027d28, Func Offset: 0x9c8
	// Line 590, Address: 0x1027d30, Func Offset: 0x9d0
	// Line 591, Address: 0x1027d40, Func Offset: 0x9e0
	// Line 594, Address: 0x1027d4c, Func Offset: 0x9ec
	// Line 595, Address: 0x1027d54, Func Offset: 0x9f4
	// Line 596, Address: 0x1027d78, Func Offset: 0xa18
	// Line 598, Address: 0x1027d8c, Func Offset: 0xa2c
	// Line 601, Address: 0x1027dc0, Func Offset: 0xa60
	// Line 603, Address: 0x1027dc8, Func Offset: 0xa68
	// Line 608, Address: 0x1027dd0, Func Offset: 0xa70
	// Line 609, Address: 0x1027de4, Func Offset: 0xa84
	// Line 610, Address: 0x1027df0, Func Offset: 0xa90
	// Line 611, Address: 0x1027e04, Func Offset: 0xaa4
	// Line 613, Address: 0x1027e1c, Func Offset: 0xabc
	// Line 614, Address: 0x1027e24, Func Offset: 0xac4
	// Line 615, Address: 0x1027e38, Func Offset: 0xad8
	// Line 616, Address: 0x1027e4c, Func Offset: 0xaec
	// Line 617, Address: 0x1027e60, Func Offset: 0xb00
	// Line 618, Address: 0x1027e6c, Func Offset: 0xb0c
	// Line 619, Address: 0x1027e74, Func Offset: 0xb14
	// Line 620, Address: 0x1027e94, Func Offset: 0xb34
	// Line 621, Address: 0x1027eac, Func Offset: 0xb4c
	// Line 622, Address: 0x1027eb4, Func Offset: 0xb54
	// Line 623, Address: 0x1027eec, Func Offset: 0xb8c
	// Line 624, Address: 0x1027f00, Func Offset: 0xba0
	// Line 625, Address: 0x1027f1c, Func Offset: 0xbbc
	// Line 628, Address: 0x1027f20, Func Offset: 0xbc0
	// Line 629, Address: 0x1027f2c, Func Offset: 0xbcc
	// Line 630, Address: 0x1027f38, Func Offset: 0xbd8
	// Line 631, Address: 0x1027f44, Func Offset: 0xbe4
	// Line 632, Address: 0x1027f50, Func Offset: 0xbf0
	// Line 634, Address: 0x1027f70, Func Offset: 0xc10
	// Func End, Address: 0x1027f98, Func Offset: 0xc38
}

// 
// Start address: 0x1027fa0
void zonescrsetsub0(_anon0** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon0* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon0 lD0;
	int i;
	// Line 639, Address: 0x1027fa0, Func Offset: 0
	// Line 646, Address: 0x1027fd4, Func Offset: 0x34
	// Line 647, Address: 0x1027ff4, Func Offset: 0x54
	// Line 648, Address: 0x1027ffc, Func Offset: 0x5c
	// Line 650, Address: 0x1028004, Func Offset: 0x64
	// Line 655, Address: 0x1028028, Func Offset: 0x88
	// Line 656, Address: 0x102803c, Func Offset: 0x9c
	// Line 658, Address: 0x1028068, Func Offset: 0xc8
	// Line 659, Address: 0x1028078, Func Offset: 0xd8
	// Line 660, Address: 0x102808c, Func Offset: 0xec
	// Line 663, Address: 0x1028094, Func Offset: 0xf4
	// Line 666, Address: 0x10280b0, Func Offset: 0x110
	// Line 671, Address: 0x10280d4, Func Offset: 0x134
	// Line 672, Address: 0x10280e4, Func Offset: 0x144
	// Line 675, Address: 0x10280f8, Func Offset: 0x158
	// Line 677, Address: 0x10280fc, Func Offset: 0x15c
	// Line 680, Address: 0x1028104, Func Offset: 0x164
	// Line 681, Address: 0x102810c, Func Offset: 0x16c
	// Line 682, Address: 0x1028110, Func Offset: 0x170
	// Line 683, Address: 0x1028120, Func Offset: 0x180
	// Line 688, Address: 0x1028148, Func Offset: 0x1a8
	// Line 689, Address: 0x1028150, Func Offset: 0x1b0
	// Line 690, Address: 0x1028158, Func Offset: 0x1b8
	// Line 694, Address: 0x1028160, Func Offset: 0x1c0
	// Line 695, Address: 0x1028190, Func Offset: 0x1f0
	// Line 698, Address: 0x10281a8, Func Offset: 0x208
	// Line 701, Address: 0x10281cc, Func Offset: 0x22c
	// Line 702, Address: 0x10281fc, Func Offset: 0x25c
	// Line 703, Address: 0x1028214, Func Offset: 0x274
	// Line 711, Address: 0x102821c, Func Offset: 0x27c
	// Line 712, Address: 0x102824c, Func Offset: 0x2ac
	// Line 717, Address: 0x1028264, Func Offset: 0x2c4
	// Line 718, Address: 0x102826c, Func Offset: 0x2cc
	// Line 719, Address: 0x1028270, Func Offset: 0x2d0
	// Line 722, Address: 0x1028288, Func Offset: 0x2e8
	// Line 723, Address: 0x102829c, Func Offset: 0x2fc
	// Line 724, Address: 0x10282c8, Func Offset: 0x328
	// Line 725, Address: 0x10282dc, Func Offset: 0x33c
	// Line 726, Address: 0x10282f8, Func Offset: 0x358
	// Line 727, Address: 0x1028300, Func Offset: 0x360
	// Line 728, Address: 0x1028308, Func Offset: 0x368
	// Line 729, Address: 0x102830c, Func Offset: 0x36c
	// Line 730, Address: 0x1028320, Func Offset: 0x380
	// Line 731, Address: 0x1028334, Func Offset: 0x394
	// Line 733, Address: 0x1028358, Func Offset: 0x3b8
	// Line 736, Address: 0x1028360, Func Offset: 0x3c0
	// Line 737, Address: 0x1028370, Func Offset: 0x3d0
	// Line 738, Address: 0x102837c, Func Offset: 0x3dc
	// Line 739, Address: 0x10283a0, Func Offset: 0x400
	// Line 740, Address: 0x10283a8, Func Offset: 0x408
	// Func End, Address: 0x10283c8, Func Offset: 0x428
}

// 
// Start address: 0x10283d0
void scroll_h()
{
	unsigned short wD4;
	// Line 756, Address: 0x10283d0, Func Offset: 0
	// Line 759, Address: 0x10283dc, Func Offset: 0xc
	// Line 760, Address: 0x10283e8, Func Offset: 0x18
	// Line 761, Address: 0x10283f0, Func Offset: 0x20
	// Line 762, Address: 0x1028424, Func Offset: 0x54
	// Line 763, Address: 0x1028438, Func Offset: 0x68
	// Line 764, Address: 0x1028464, Func Offset: 0x94
	// Line 765, Address: 0x1028478, Func Offset: 0xa8
	// Line 768, Address: 0x1028480, Func Offset: 0xb0
	// Line 773, Address: 0x1028494, Func Offset: 0xc4
	// Func End, Address: 0x10284a8, Func Offset: 0xd8
}

// 
// Start address: 0x10284b0
void scrh_move()
{
	unsigned short wD0;
	// Line 775, Address: 0x10284b0, Func Offset: 0
	// Line 778, Address: 0x10284bc, Func Offset: 0xc
	// Line 779, Address: 0x10284c8, Func Offset: 0x18
	// Line 780, Address: 0x10284dc, Func Offset: 0x2c
	// Line 781, Address: 0x10284f0, Func Offset: 0x40
	// Line 783, Address: 0x10284fc, Func Offset: 0x4c
	// Line 784, Address: 0x1028504, Func Offset: 0x54
	// Line 785, Address: 0x102850c, Func Offset: 0x5c
	// Line 786, Address: 0x1028524, Func Offset: 0x74
	// Line 787, Address: 0x1028530, Func Offset: 0x80
	// Line 789, Address: 0x1028538, Func Offset: 0x88
	// Line 792, Address: 0x1028544, Func Offset: 0x94
	// Func End, Address: 0x1028558, Func Offset: 0xa8
}

// 
// Start address: 0x1028560
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 795, Address: 0x1028560, Func Offset: 0
	// Line 798, Address: 0x102856c, Func Offset: 0xc
	// Line 799, Address: 0x102858c, Func Offset: 0x2c
	// Line 802, Address: 0x1028594, Func Offset: 0x34
	// Line 803, Address: 0x10285ac, Func Offset: 0x4c
	// Line 804, Address: 0x10285dc, Func Offset: 0x7c
	// Line 807, Address: 0x10285e8, Func Offset: 0x88
	// Line 808, Address: 0x10285f0, Func Offset: 0x90
	// Line 809, Address: 0x1028604, Func Offset: 0xa4
	// Line 810, Address: 0x1028634, Func Offset: 0xd4
	// Line 811, Address: 0x1028640, Func Offset: 0xe0
	// Line 813, Address: 0x1028648, Func Offset: 0xe8
	// Func End, Address: 0x1028658, Func Offset: 0xf8
}

// 
// Start address: 0x1028660
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 816, Address: 0x1028660, Func Offset: 0
	// Line 819, Address: 0x102866c, Func Offset: 0xc
	// Line 820, Address: 0x102868c, Func Offset: 0x2c
	// Line 823, Address: 0x1028694, Func Offset: 0x34
	// Line 824, Address: 0x10286ac, Func Offset: 0x4c
	// Line 825, Address: 0x10286dc, Func Offset: 0x7c
	// Line 828, Address: 0x10286e8, Func Offset: 0x88
	// Line 829, Address: 0x10286f0, Func Offset: 0x90
	// Line 830, Address: 0x1028704, Func Offset: 0xa4
	// Line 831, Address: 0x1028734, Func Offset: 0xd4
	// Line 832, Address: 0x1028740, Func Offset: 0xe0
	// Line 834, Address: 0x1028748, Func Offset: 0xe8
	// Func End, Address: 0x1028758, Func Offset: 0xf8
}

// 
// Start address: 0x1028760
void scroll_v()
{
	unsigned short wD0;
	// Line 853, Address: 0x1028760, Func Offset: 0
	// Line 856, Address: 0x102876c, Func Offset: 0xc
	// Line 857, Address: 0x1028798, Func Offset: 0x38
	// Line 858, Address: 0x10287b0, Func Offset: 0x50
	// Line 861, Address: 0x10287b8, Func Offset: 0x58
	// Line 862, Address: 0x10287d0, Func Offset: 0x70
	// Line 863, Address: 0x10287d8, Func Offset: 0x78
	// Line 864, Address: 0x10287f8, Func Offset: 0x98
	// Line 865, Address: 0x102880c, Func Offset: 0xac
	// Line 866, Address: 0x1028818, Func Offset: 0xb8
	// Line 868, Address: 0x1028820, Func Offset: 0xc0
	// Line 869, Address: 0x1028834, Func Offset: 0xd4
	// Line 870, Address: 0x1028844, Func Offset: 0xe4
	// Line 871, Address: 0x102884c, Func Offset: 0xec
	// Line 872, Address: 0x1028858, Func Offset: 0xf8
	// Line 874, Address: 0x1028860, Func Offset: 0x100
	// Line 875, Address: 0x1028868, Func Offset: 0x108
	// Line 876, Address: 0x102887c, Func Offset: 0x11c
	// Line 877, Address: 0x1028884, Func Offset: 0x124
	// Line 883, Address: 0x102888c, Func Offset: 0x12c
	// Line 884, Address: 0x10288a0, Func Offset: 0x140
	// Line 885, Address: 0x10288a8, Func Offset: 0x148
	// Line 886, Address: 0x10288b4, Func Offset: 0x154
	// Line 888, Address: 0x10288bc, Func Offset: 0x15c
	// Line 889, Address: 0x10288d0, Func Offset: 0x170
	// Line 890, Address: 0x10288d8, Func Offset: 0x178
	// Line 895, Address: 0x10288e0, Func Offset: 0x180
	// Line 897, Address: 0x10288e8, Func Offset: 0x188
	// Func End, Address: 0x10288fc, Func Offset: 0x19c
}

// 
// Start address: 0x1028900
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 903, Address: 0x1028900, Func Offset: 0
	// Line 906, Address: 0x1028910, Func Offset: 0x10
	// Line 907, Address: 0x102892c, Func Offset: 0x2c
	// Line 908, Address: 0x1028938, Func Offset: 0x38
	// Line 911, Address: 0x1028940, Func Offset: 0x40
	// Line 912, Address: 0x102894c, Func Offset: 0x4c
	// Line 913, Address: 0x1028964, Func Offset: 0x64
	// Line 916, Address: 0x1028980, Func Offset: 0x80
	// Line 917, Address: 0x1028990, Func Offset: 0x90
	// Line 918, Address: 0x102899c, Func Offset: 0x9c
	// Line 920, Address: 0x10289a4, Func Offset: 0xa4
	// Line 921, Address: 0x10289c4, Func Offset: 0xc4
	// Line 922, Address: 0x10289d0, Func Offset: 0xd0
	// Line 923, Address: 0x10289d8, Func Offset: 0xd8
	// Line 924, Address: 0x10289f8, Func Offset: 0xf8
	// Line 925, Address: 0x1028a04, Func Offset: 0x104
	// Line 927, Address: 0x1028a0c, Func Offset: 0x10c
	// Line 931, Address: 0x1028a18, Func Offset: 0x118
	// Func End, Address: 0x1028a2c, Func Offset: 0x12c
}

// 
// Start address: 0x1028a30
void sv_move_main1(unsigned short wD0)
{
	// Line 935, Address: 0x1028a30, Func Offset: 0
	// Line 937, Address: 0x1028a3c, Func Offset: 0xc
	// Line 938, Address: 0x1028a5c, Func Offset: 0x2c
	// Line 939, Address: 0x1028a68, Func Offset: 0x38
	// Line 940, Address: 0x1028a70, Func Offset: 0x40
	// Line 941, Address: 0x1028a90, Func Offset: 0x60
	// Line 942, Address: 0x1028a9c, Func Offset: 0x6c
	// Line 944, Address: 0x1028aa4, Func Offset: 0x74
	// Line 947, Address: 0x1028ab0, Func Offset: 0x80
	// Func End, Address: 0x1028ac0, Func Offset: 0x90
}

// 
// Start address: 0x1028ac0
void sv_move_main2(unsigned short wD0)
{
	// Line 950, Address: 0x1028ac0, Func Offset: 0
	// Line 952, Address: 0x1028acc, Func Offset: 0xc
	// Line 953, Address: 0x1028aec, Func Offset: 0x2c
	// Line 954, Address: 0x1028af8, Func Offset: 0x38
	// Line 955, Address: 0x1028b00, Func Offset: 0x40
	// Line 956, Address: 0x1028b20, Func Offset: 0x60
	// Line 957, Address: 0x1028b2c, Func Offset: 0x6c
	// Line 959, Address: 0x1028b34, Func Offset: 0x74
	// Line 962, Address: 0x1028b40, Func Offset: 0x80
	// Func End, Address: 0x1028b50, Func Offset: 0x90
}

// 
// Start address: 0x1028b50
void sv_move_sub2()
{
	// Line 965, Address: 0x1028b50, Func Offset: 0
	// Line 966, Address: 0x1028b58, Func Offset: 0x8
	// Line 967, Address: 0x1028b60, Func Offset: 0x10
	// Line 968, Address: 0x1028b6c, Func Offset: 0x1c
	// Func End, Address: 0x1028b7c, Func Offset: 0x2c
}

// 
// Start address: 0x1028b80
void sv_move_sub(unsigned short wD0)
{
	_anon0 lD1;
	// Line 971, Address: 0x1028b80, Func Offset: 0
	// Line 974, Address: 0x1028b8c, Func Offset: 0xc
	// Line 975, Address: 0x1028b90, Func Offset: 0x10
	// Line 976, Address: 0x1028b98, Func Offset: 0x18
	// Line 977, Address: 0x1028bb4, Func Offset: 0x34
	// Line 978, Address: 0x1028bd0, Func Offset: 0x50
	// Line 979, Address: 0x1028bdc, Func Offset: 0x5c
	// Line 981, Address: 0x1028be4, Func Offset: 0x64
	// Line 984, Address: 0x1028bf0, Func Offset: 0x70
	// Func End, Address: 0x1028c00, Func Offset: 0x80
}

// 
// Start address: 0x1028c00
void sv_move_minus(unsigned short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 989, Address: 0x1028c00, Func Offset: 0
	// Line 993, Address: 0x1028c10, Func Offset: 0x10
	// Line 994, Address: 0x1028c2c, Func Offset: 0x2c
	// Line 995, Address: 0x1028c38, Func Offset: 0x38
	// Line 997, Address: 0x1028c4c, Func Offset: 0x4c
	// Line 998, Address: 0x1028c54, Func Offset: 0x54
	// Line 999, Address: 0x1028c5c, Func Offset: 0x5c
	// Line 1000, Address: 0x1028c60, Func Offset: 0x60
	// Line 1001, Address: 0x1028c6c, Func Offset: 0x6c
	// Func End, Address: 0x1028c80, Func Offset: 0x80
}

// 
// Start address: 0x1028c80
void scrv_up_ch(_anon0 lD1)
{
	// Line 1005, Address: 0x1028c80, Func Offset: 0
	// Line 1006, Address: 0x1028c8c, Func Offset: 0xc
	// Line 1007, Address: 0x1028cb4, Func Offset: 0x34
	// Line 1008, Address: 0x1028ccc, Func Offset: 0x4c
	// Line 1009, Address: 0x1028cd8, Func Offset: 0x58
	// Line 1010, Address: 0x1028cec, Func Offset: 0x6c
	// Line 1011, Address: 0x1028d00, Func Offset: 0x80
	// Line 1012, Address: 0x1028d14, Func Offset: 0x94
	// Line 1015, Address: 0x1028d1c, Func Offset: 0x9c
	// Line 1018, Address: 0x1028d28, Func Offset: 0xa8
	// Line 1020, Address: 0x1028d34, Func Offset: 0xb4
	// Func End, Address: 0x1028d44, Func Offset: 0xc4
}

// 
// Start address: 0x1028d50
void sv_move_plus(unsigned short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 1026, Address: 0x1028d50, Func Offset: 0
	// Line 1030, Address: 0x1028d60, Func Offset: 0x10
	// Line 1031, Address: 0x1028d64, Func Offset: 0x14
	// Line 1032, Address: 0x1028d6c, Func Offset: 0x1c
	// Line 1033, Address: 0x1028d78, Func Offset: 0x28
	// Line 1035, Address: 0x1028d8c, Func Offset: 0x3c
	// Line 1036, Address: 0x1028d94, Func Offset: 0x44
	// Line 1037, Address: 0x1028d9c, Func Offset: 0x4c
	// Line 1039, Address: 0x1028da0, Func Offset: 0x50
	// Line 1041, Address: 0x1028dac, Func Offset: 0x5c
	// Func End, Address: 0x1028dc0, Func Offset: 0x70
}

// 
// Start address: 0x1028dc0
void scrv_down_ch(_anon0 lD1)
{
	// Line 1045, Address: 0x1028dc0, Func Offset: 0
	// Line 1046, Address: 0x1028dcc, Func Offset: 0xc
	// Line 1047, Address: 0x1028df4, Func Offset: 0x34
	// Line 1048, Address: 0x1028e00, Func Offset: 0x40
	// Line 1049, Address: 0x1028e14, Func Offset: 0x54
	// Line 1050, Address: 0x1028e28, Func Offset: 0x68
	// Line 1051, Address: 0x1028e3c, Func Offset: 0x7c
	// Line 1052, Address: 0x1028e50, Func Offset: 0x90
	// Line 1054, Address: 0x1028e58, Func Offset: 0x98
	// Line 1057, Address: 0x1028e64, Func Offset: 0xa4
	// Line 1059, Address: 0x1028e70, Func Offset: 0xb0
	// Func End, Address: 0x1028e80, Func Offset: 0xc0
}

// 
// Start address: 0x1028e80
void scrv_move(_anon0 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1062, Address: 0x1028e80, Func Offset: 0
	// Line 1065, Address: 0x1028e90, Func Offset: 0x10
	// Line 1067, Address: 0x1028e9c, Func Offset: 0x1c
	// Line 1068, Address: 0x1028ea4, Func Offset: 0x24
	// Line 1069, Address: 0x1028eac, Func Offset: 0x2c
	// Line 1071, Address: 0x1028eb0, Func Offset: 0x30
	// Line 1072, Address: 0x1028ed8, Func Offset: 0x58
	// Line 1075, Address: 0x1028ee4, Func Offset: 0x64
	// Line 1076, Address: 0x1028f18, Func Offset: 0x98
	// Line 1077, Address: 0x1028f2c, Func Offset: 0xac
	// Line 1079, Address: 0x1028f58, Func Offset: 0xd8
	// Line 1080, Address: 0x1028f6c, Func Offset: 0xec
	// Line 1082, Address: 0x1028f74, Func Offset: 0xf4
	// Line 1087, Address: 0x1028f88, Func Offset: 0x108
	// Func End, Address: 0x1028f9c, Func Offset: 0x11c
}

// 
// Start address: 0x1028fa0
void scrollb_hv(_anon0 lD4, _anon0 lD5)
{
	_anon0 lD0;
	_anon0 lD2;
	_anon0 lD3;
	// Line 1091, Address: 0x1028fa0, Func Offset: 0
	// Line 1094, Address: 0x1028fac, Func Offset: 0xc
	// Line 1095, Address: 0x1028fbc, Func Offset: 0x1c
	// Line 1096, Address: 0x1028fcc, Func Offset: 0x2c
	// Line 1098, Address: 0x1028fd8, Func Offset: 0x38
	// Line 1100, Address: 0x102900c, Func Offset: 0x6c
	// Line 1101, Address: 0x1029020, Func Offset: 0x80
	// Line 1102, Address: 0x1029030, Func Offset: 0x90
	// Line 1103, Address: 0x1029044, Func Offset: 0xa4
	// Line 1104, Address: 0x1029058, Func Offset: 0xb8
	// Line 1107, Address: 0x1029060, Func Offset: 0xc0
	// Line 1112, Address: 0x1029074, Func Offset: 0xd4
	// Line 1113, Address: 0x1029084, Func Offset: 0xe4
	// Line 1114, Address: 0x1029094, Func Offset: 0xf4
	// Line 1116, Address: 0x10290a0, Func Offset: 0x100
	// Line 1118, Address: 0x10290d4, Func Offset: 0x134
	// Line 1119, Address: 0x10290e8, Func Offset: 0x148
	// Line 1120, Address: 0x10290f8, Func Offset: 0x158
	// Line 1121, Address: 0x102910c, Func Offset: 0x16c
	// Line 1122, Address: 0x1029120, Func Offset: 0x180
	// Line 1125, Address: 0x1029128, Func Offset: 0x188
	// Line 1130, Address: 0x102913c, Func Offset: 0x19c
	// Func End, Address: 0x1029148, Func Offset: 0x1a8
}

// 
// Start address: 0x1029150
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1137, Address: 0x1029150, Func Offset: 0
	// Line 1140, Address: 0x102915c, Func Offset: 0xc
	// Line 1141, Address: 0x1029168, Func Offset: 0x18
	// Line 1143, Address: 0x1029174, Func Offset: 0x24
	// Line 1144, Address: 0x10291a0, Func Offset: 0x50
	// Line 1145, Address: 0x10291b4, Func Offset: 0x64
	// Line 1146, Address: 0x10291e4, Func Offset: 0x94
	// Line 1147, Address: 0x10291f8, Func Offset: 0xa8
	// Line 1150, Address: 0x1029200, Func Offset: 0xb0
	// Line 1155, Address: 0x1029214, Func Offset: 0xc4
	// Func End, Address: 0x1029224, Func Offset: 0xd4
}

// 
// Start address: 0x1029230
void scrollb_h(int lD4, int flagb)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1159, Address: 0x1029230, Func Offset: 0
	// Line 1163, Address: 0x1029240, Func Offset: 0x10
	// Line 1164, Address: 0x102924c, Func Offset: 0x1c
	// Line 1165, Address: 0x102925c, Func Offset: 0x2c
	// Line 1167, Address: 0x1029268, Func Offset: 0x38
	// Line 1168, Address: 0x1029270, Func Offset: 0x40
	// Line 1169, Address: 0x1029278, Func Offset: 0x48
	// Line 1171, Address: 0x1029284, Func Offset: 0x54
	// Line 1172, Address: 0x1029290, Func Offset: 0x60
	// Line 1173, Address: 0x10292a4, Func Offset: 0x74
	// Line 1174, Address: 0x10292b0, Func Offset: 0x80
	// Line 1175, Address: 0x10292c4, Func Offset: 0x94
	// Line 1176, Address: 0x10292d4, Func Offset: 0xa4
	// Line 1177, Address: 0x10292e8, Func Offset: 0xb8
	// Line 1178, Address: 0x1029304, Func Offset: 0xd4
	// Line 1181, Address: 0x102930c, Func Offset: 0xdc
	// Line 1186, Address: 0x102932c, Func Offset: 0xfc
	// Func End, Address: 0x102933c, Func Offset: 0x10c
}

// 
// Start address: 0x1029340
void scrollc_h(int lD4, int flagc)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1190, Address: 0x1029340, Func Offset: 0
	// Line 1194, Address: 0x1029350, Func Offset: 0x10
	// Line 1195, Address: 0x102935c, Func Offset: 0x1c
	// Line 1196, Address: 0x102936c, Func Offset: 0x2c
	// Line 1198, Address: 0x1029378, Func Offset: 0x38
	// Line 1199, Address: 0x1029380, Func Offset: 0x40
	// Line 1200, Address: 0x1029388, Func Offset: 0x48
	// Line 1202, Address: 0x1029394, Func Offset: 0x54
	// Line 1203, Address: 0x10293a0, Func Offset: 0x60
	// Line 1204, Address: 0x10293b4, Func Offset: 0x74
	// Line 1205, Address: 0x10293c0, Func Offset: 0x80
	// Line 1206, Address: 0x10293d4, Func Offset: 0x94
	// Line 1207, Address: 0x10293e4, Func Offset: 0xa4
	// Line 1208, Address: 0x10293f8, Func Offset: 0xb8
	// Line 1209, Address: 0x1029414, Func Offset: 0xd4
	// Line 1212, Address: 0x102941c, Func Offset: 0xdc
	// Line 1217, Address: 0x102943c, Func Offset: 0xfc
	// Func End, Address: 0x102944c, Func Offset: 0x10c
}

// 
// Start address: 0x1029450
void scrollz_h(int lD4, int flagz)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1229, Address: 0x1029450, Func Offset: 0
	// Line 1233, Address: 0x1029460, Func Offset: 0x10
	// Line 1234, Address: 0x102946c, Func Offset: 0x1c
	// Line 1235, Address: 0x102947c, Func Offset: 0x2c
	// Line 1237, Address: 0x1029488, Func Offset: 0x38
	// Line 1238, Address: 0x1029490, Func Offset: 0x40
	// Line 1239, Address: 0x1029498, Func Offset: 0x48
	// Line 1241, Address: 0x10294a4, Func Offset: 0x54
	// Line 1242, Address: 0x10294b0, Func Offset: 0x60
	// Line 1243, Address: 0x10294c4, Func Offset: 0x74
	// Line 1244, Address: 0x10294d0, Func Offset: 0x80
	// Line 1245, Address: 0x10294e4, Func Offset: 0x94
	// Line 1246, Address: 0x10294f4, Func Offset: 0xa4
	// Line 1247, Address: 0x1029508, Func Offset: 0xb8
	// Line 1248, Address: 0x1029524, Func Offset: 0xd4
	// Line 1251, Address: 0x102952c, Func Offset: 0xdc
	// Line 1256, Address: 0x102954c, Func Offset: 0xfc
	// Func End, Address: 0x102955c, Func Offset: 0x10c
}

// 
// Start address: 0x1029560
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1271, Address: 0x1029560, Func Offset: 0
	// Line 1277, Address: 0x102957c, Func Offset: 0x1c
	// Line 1278, Address: 0x1029580, Func Offset: 0x20
	// Line 1279, Address: 0x102958c, Func Offset: 0x2c
	// Line 1280, Address: 0x1029598, Func Offset: 0x38
	// Line 1281, Address: 0x10295a0, Func Offset: 0x40
	// Line 1282, Address: 0x10295a8, Func Offset: 0x48
	// Line 1290, Address: 0x10295bc, Func Offset: 0x5c
	// Func End, Address: 0x10295e0, Func Offset: 0x80
}

// 
// Start address: 0x10295e0
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
	// Line 1303, Address: 0x10295e0, Func Offset: 0
	// Line 1312, Address: 0x1029600, Func Offset: 0x20
	// Line 1313, Address: 0x1029604, Func Offset: 0x24
	// Line 1314, Address: 0x1029610, Func Offset: 0x30
	// Line 1315, Address: 0x102961c, Func Offset: 0x3c
	// Line 1316, Address: 0x1029624, Func Offset: 0x44
	// Line 1317, Address: 0x102962c, Func Offset: 0x4c
	// Line 1319, Address: 0x1029640, Func Offset: 0x60
	// Line 1320, Address: 0x1029644, Func Offset: 0x64
	// Line 1321, Address: 0x1029650, Func Offset: 0x70
	// Line 1322, Address: 0x102965c, Func Offset: 0x7c
	// Line 1323, Address: 0x1029664, Func Offset: 0x84
	// Line 1325, Address: 0x102966c, Func Offset: 0x8c
	// Line 1326, Address: 0x1029678, Func Offset: 0x98
	// Line 1327, Address: 0x102968c, Func Offset: 0xac
	// Line 1329, Address: 0x1029698, Func Offset: 0xb8
	// Line 1330, Address: 0x10296a0, Func Offset: 0xc0
	// Line 1332, Address: 0x10296a8, Func Offset: 0xc8
	// Line 1334, Address: 0x10296c8, Func Offset: 0xe8
	// Line 1340, Address: 0x10296f4, Func Offset: 0x114
	// Line 1341, Address: 0x1029708, Func Offset: 0x128
	// Line 1343, Address: 0x1029714, Func Offset: 0x134
	// Line 1344, Address: 0x102971c, Func Offset: 0x13c
	// Line 1345, Address: 0x1029724, Func Offset: 0x144
	// Line 1347, Address: 0x1029744, Func Offset: 0x164
	// Line 1353, Address: 0x1029770, Func Offset: 0x190
	// Line 1354, Address: 0x1029784, Func Offset: 0x1a4
	// Line 1356, Address: 0x1029790, Func Offset: 0x1b0
	// Line 1357, Address: 0x1029798, Func Offset: 0x1b8
	// Line 1358, Address: 0x10297a0, Func Offset: 0x1c0
	// Line 1360, Address: 0x10297c0, Func Offset: 0x1e0
	// Line 1366, Address: 0x10297ec, Func Offset: 0x20c
	// Line 1367, Address: 0x1029800, Func Offset: 0x220
	// Line 1369, Address: 0x102980c, Func Offset: 0x22c
	// Line 1370, Address: 0x1029814, Func Offset: 0x234
	// Line 1371, Address: 0x102981c, Func Offset: 0x23c
	// Line 1373, Address: 0x102983c, Func Offset: 0x25c
	// Line 1382, Address: 0x1029868, Func Offset: 0x288
	// Func End, Address: 0x1029890, Func Offset: 0x2b0
}

// 
// Start address: 0x1029890
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
	// Line 1399, Address: 0x1029890, Func Offset: 0
	// Line 1410, Address: 0x10298bc, Func Offset: 0x2c
	// Line 1412, Address: 0x10298c4, Func Offset: 0x34
	// Line 1413, Address: 0x10298dc, Func Offset: 0x4c
	// Line 1414, Address: 0x10298f0, Func Offset: 0x60
	// Line 1416, Address: 0x10298f8, Func Offset: 0x68
	// Line 1418, Address: 0x102990c, Func Offset: 0x7c
	// Line 1419, Address: 0x1029924, Func Offset: 0x94
	// Line 1420, Address: 0x1029938, Func Offset: 0xa8
	// Line 1421, Address: 0x1029940, Func Offset: 0xb0
	// Line 1423, Address: 0x1029948, Func Offset: 0xb8
	// Line 1424, Address: 0x102995c, Func Offset: 0xcc
	// Line 1429, Address: 0x1029964, Func Offset: 0xd4
	// Line 1430, Address: 0x10299b4, Func Offset: 0x124
	// Line 1431, Address: 0x10299bc, Func Offset: 0x12c
	// Line 1437, Address: 0x10299dc, Func Offset: 0x14c
	// Line 1438, Address: 0x10299fc, Func Offset: 0x16c
	// Line 1439, Address: 0x1029a20, Func Offset: 0x190
	// Line 1440, Address: 0x1029a2c, Func Offset: 0x19c
	// Line 1441, Address: 0x1029a34, Func Offset: 0x1a4
	// Line 1443, Address: 0x1029a54, Func Offset: 0x1c4
	// Line 1447, Address: 0x1029a80, Func Offset: 0x1f0
	// Line 1450, Address: 0x1029a88, Func Offset: 0x1f8
	// Line 1451, Address: 0x1029a8c, Func Offset: 0x1fc
	// Line 1455, Address: 0x1029aac, Func Offset: 0x21c
	// Line 1462, Address: 0x1029ad8, Func Offset: 0x248
	// Line 1469, Address: 0x1029aec, Func Offset: 0x25c
	// Line 1470, Address: 0x1029af4, Func Offset: 0x264
	// Line 1471, Address: 0x1029afc, Func Offset: 0x26c
	// Line 1472, Address: 0x1029b14, Func Offset: 0x284
	// Line 1473, Address: 0x1029b34, Func Offset: 0x2a4
	// Line 1477, Address: 0x1029b3c, Func Offset: 0x2ac
	// Line 1479, Address: 0x1029b6c, Func Offset: 0x2dc
	// Line 1480, Address: 0x1029b78, Func Offset: 0x2e8
	// Line 1484, Address: 0x1029b88, Func Offset: 0x2f8
	// Line 1485, Address: 0x1029b94, Func Offset: 0x304
	// Line 1486, Address: 0x1029bb4, Func Offset: 0x324
	// Line 1487, Address: 0x1029be0, Func Offset: 0x350
	// Line 1488, Address: 0x1029c00, Func Offset: 0x370
	// Line 1490, Address: 0x1029c24, Func Offset: 0x394
	// Line 1493, Address: 0x1029c48, Func Offset: 0x3b8
	// Line 1495, Address: 0x1029c68, Func Offset: 0x3d8
	// Line 1497, Address: 0x1029c7c, Func Offset: 0x3ec
	// Line 1498, Address: 0x1029c88, Func Offset: 0x3f8
	// Line 1499, Address: 0x1029c98, Func Offset: 0x408
	// Line 1501, Address: 0x1029ca0, Func Offset: 0x410
	// Func End, Address: 0x1029cc8, Func Offset: 0x438
}

// 
// Start address: 0x1029cd0
void scrollwrtc()
{
	// Line 1509, Address: 0x1029cd0, Func Offset: 0
	// Func End, Address: 0x1029cd8, Func Offset: 0x8
}

// 
// Start address: 0x1029ce0
void scrollwrtz()
{
	// Line 1514, Address: 0x1029ce0, Func Offset: 0
	// Func End, Address: 0x1029ce8, Func Offset: 0x8
}

// 
// Start address: 0x1029cf0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1535, Address: 0x1029cf0, Func Offset: 0
	// Line 1548, Address: 0x1029d18, Func Offset: 0x28
	// Line 1551, Address: 0x1029d38, Func Offset: 0x48
	// Line 1552, Address: 0x1029d4c, Func Offset: 0x5c
	// Line 1553, Address: 0x1029d60, Func Offset: 0x70
	// Line 1554, Address: 0x1029d74, Func Offset: 0x84
	// Line 1556, Address: 0x1029d88, Func Offset: 0x98
	// Line 1557, Address: 0x1029d94, Func Offset: 0xa4
	// Line 1558, Address: 0x1029da8, Func Offset: 0xb8
	// Func End, Address: 0x1029db8, Func Offset: 0xc8
}

// 
// Start address: 0x1029dc0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1562, Address: 0x1029dc0, Func Offset: 0
	// Line 1566, Address: 0x1029de8, Func Offset: 0x28
	// Line 1569, Address: 0x1029e08, Func Offset: 0x48
	// Line 1570, Address: 0x1029e1c, Func Offset: 0x5c
	// Line 1571, Address: 0x1029e30, Func Offset: 0x70
	// Line 1572, Address: 0x1029e44, Func Offset: 0x84
	// Line 1574, Address: 0x1029e58, Func Offset: 0x98
	// Line 1575, Address: 0x1029e64, Func Offset: 0xa4
	// Line 1576, Address: 0x1029e78, Func Offset: 0xb8
	// Func End, Address: 0x1029e88, Func Offset: 0xc8
}

// 
// Start address: 0x1029e90
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1595, Address: 0x1029e90, Func Offset: 0
	// Line 1599, Address: 0x1029eb8, Func Offset: 0x28
	// Line 1602, Address: 0x1029ed8, Func Offset: 0x48
	// Line 1603, Address: 0x1029eec, Func Offset: 0x5c
	// Line 1604, Address: 0x1029efc, Func Offset: 0x6c
	// Line 1605, Address: 0x1029f10, Func Offset: 0x80
	// Line 1607, Address: 0x1029f20, Func Offset: 0x90
	// Line 1608, Address: 0x1029f2c, Func Offset: 0x9c
	// Line 1609, Address: 0x1029f40, Func Offset: 0xb0
	// Func End, Address: 0x1029f50, Func Offset: 0xc0
}

// 
// Start address: 0x1029f50
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
	// Line 1628, Address: 0x1029f50, Func Offset: 0
	// Line 1634, Address: 0x1029f84, Func Offset: 0x34
	// Line 1636, Address: 0x1029f94, Func Offset: 0x44
	// Line 1637, Address: 0x1029f98, Func Offset: 0x48
	// Line 1638, Address: 0x1029fa0, Func Offset: 0x50
	// Line 1640, Address: 0x1029fb0, Func Offset: 0x60
	// Line 1642, Address: 0x1029fb4, Func Offset: 0x64
	// Line 1643, Address: 0x1029fbc, Func Offset: 0x6c
	// Line 1646, Address: 0x1029fc4, Func Offset: 0x74
	// Line 1647, Address: 0x1029fcc, Func Offset: 0x7c
	// Line 1648, Address: 0x1029fd8, Func Offset: 0x88
	// Line 1650, Address: 0x1029fe4, Func Offset: 0x94
	// Line 1651, Address: 0x1029fec, Func Offset: 0x9c
	// Line 1652, Address: 0x1029ff4, Func Offset: 0xa4
	// Line 1653, Address: 0x1029ffc, Func Offset: 0xac
	// Line 1655, Address: 0x102a008, Func Offset: 0xb8
	// Line 1656, Address: 0x102a010, Func Offset: 0xc0
	// Line 1657, Address: 0x102a018, Func Offset: 0xc8
	// Line 1658, Address: 0x102a020, Func Offset: 0xd0
	// Line 1660, Address: 0x102a02c, Func Offset: 0xdc
	// Line 1661, Address: 0x102a034, Func Offset: 0xe4
	// Line 1662, Address: 0x102a03c, Func Offset: 0xec
	// Line 1665, Address: 0x102a044, Func Offset: 0xf4
	// Line 1666, Address: 0x102a04c, Func Offset: 0xfc
	// Line 1669, Address: 0x102a054, Func Offset: 0x104
	// Line 1670, Address: 0x102a098, Func Offset: 0x148
	// Line 1671, Address: 0x102a0dc, Func Offset: 0x18c
	// Line 1672, Address: 0x102a120, Func Offset: 0x1d0
	// Line 1674, Address: 0x102a164, Func Offset: 0x214
	// Func End, Address: 0x102a194, Func Offset: 0x244
}

// 
// Start address: 0x102a1a0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1692, Address: 0x102a1a0, Func Offset: 0
	// Line 1693, Address: 0x102a1c0, Func Offset: 0x20
	// Line 1694, Address: 0x102a1e0, Func Offset: 0x40
	// Func End, Address: 0x102a1f0, Func Offset: 0x50
}

// 
// Start address: 0x102a1f0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1696, Address: 0x102a1f0, Func Offset: 0
	// Line 1697, Address: 0x102a210, Func Offset: 0x20
	// Line 1698, Address: 0x102a214, Func Offset: 0x24
	// Line 1699, Address: 0x102a234, Func Offset: 0x44
	// Func End, Address: 0x102a244, Func Offset: 0x54
}

// 
// Start address: 0x102a250
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1706, Address: 0x102a250, Func Offset: 0
	// Line 1712, Address: 0x102a280, Func Offset: 0x30
	// Line 1713, Address: 0x102a290, Func Offset: 0x40
	// Line 1719, Address: 0x102a2a0, Func Offset: 0x50
	// Line 1720, Address: 0x102a2bc, Func Offset: 0x6c
	// Line 1721, Address: 0x102a2c0, Func Offset: 0x70
	// Line 1722, Address: 0x102a2dc, Func Offset: 0x8c
	// Line 1723, Address: 0x102a2e0, Func Offset: 0x90
	// Line 1724, Address: 0x102a300, Func Offset: 0xb0
	// Line 1725, Address: 0x102a308, Func Offset: 0xb8
	// Line 1726, Address: 0x102a328, Func Offset: 0xd8
	// Line 1727, Address: 0x102a330, Func Offset: 0xe0
	// Line 1728, Address: 0x102a378, Func Offset: 0x128
	// Line 1730, Address: 0x102a384, Func Offset: 0x134
	// Line 1732, Address: 0x102a3a0, Func Offset: 0x150
	// Line 1737, Address: 0x102a3a8, Func Offset: 0x158
	// Line 1738, Address: 0x102a3b4, Func Offset: 0x164
	// Line 1741, Address: 0x102a3c0, Func Offset: 0x170
	// Line 1742, Address: 0x102a3c8, Func Offset: 0x178
	// Line 1743, Address: 0x102a3e8, Func Offset: 0x198
	// Line 1744, Address: 0x102a404, Func Offset: 0x1b4
	// Line 1745, Address: 0x102a40c, Func Offset: 0x1bc
	// Line 1746, Address: 0x102a42c, Func Offset: 0x1dc
	// Line 1748, Address: 0x102a448, Func Offset: 0x1f8
	// Line 1749, Address: 0x102a450, Func Offset: 0x200
	// Line 1750, Address: 0x102a458, Func Offset: 0x208
	// Line 1751, Address: 0x102a464, Func Offset: 0x214
	// Line 1752, Address: 0x102a47c, Func Offset: 0x22c
	// Line 1754, Address: 0x102a48c, Func Offset: 0x23c
	// Line 1757, Address: 0x102a498, Func Offset: 0x248
	// Line 1758, Address: 0x102a4a0, Func Offset: 0x250
	// Line 1759, Address: 0x102a4a4, Func Offset: 0x254
	// Func End, Address: 0x102a4c4, Func Offset: 0x274
}

// 
// Start address: 0x102a4d0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1779, Address: 0x102a4d0, Func Offset: 0
	// Line 1787, Address: 0x102a4f8, Func Offset: 0x28
	// Line 1788, Address: 0x102a55c, Func Offset: 0x8c
	// Line 1794, Address: 0x102a564, Func Offset: 0x94
	// Line 1795, Address: 0x102a56c, Func Offset: 0x9c
	// Line 1796, Address: 0x102a58c, Func Offset: 0xbc
	// Line 1797, Address: 0x102a5a8, Func Offset: 0xd8
	// Line 1798, Address: 0x102a5b0, Func Offset: 0xe0
	// Line 1799, Address: 0x102a5d0, Func Offset: 0x100
	// Line 1802, Address: 0x102a5ec, Func Offset: 0x11c
	// Line 1803, Address: 0x102a5f4, Func Offset: 0x124
	// Line 1804, Address: 0x102a5fc, Func Offset: 0x12c
	// Line 1805, Address: 0x102a608, Func Offset: 0x138
	// Line 1806, Address: 0x102a620, Func Offset: 0x150
	// Line 1807, Address: 0x102a628, Func Offset: 0x158
	// Line 1812, Address: 0x102a638, Func Offset: 0x168
	// Line 1815, Address: 0x102a644, Func Offset: 0x174
	// Line 1816, Address: 0x102a64c, Func Offset: 0x17c
	// Line 1817, Address: 0x102a650, Func Offset: 0x180
	// Func End, Address: 0x102a66c, Func Offset: 0x19c
}

// 
// Start address: 0x102a670
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1831, Address: 0x102a670, Func Offset: 0
	// Line 1838, Address: 0x102a68c, Func Offset: 0x1c
	// Line 1839, Address: 0x102a690, Func Offset: 0x20
	// Line 1840, Address: 0x102a698, Func Offset: 0x28
	// Line 1841, Address: 0x102a6bc, Func Offset: 0x4c
	// Line 1842, Address: 0x102a6c8, Func Offset: 0x58
	// Line 1843, Address: 0x102a6e0, Func Offset: 0x70
	// Line 1844, Address: 0x102a6f4, Func Offset: 0x84
	// Line 1849, Address: 0x102a70c, Func Offset: 0x9c
	// Func End, Address: 0x102a724, Func Offset: 0xb4
}

// 
// Start address: 0x102a730
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1863, Address: 0x102a730, Func Offset: 0
	// Line 1864, Address: 0x102a73c, Func Offset: 0xc
	// Line 1865, Address: 0x102a768, Func Offset: 0x38
	// Line 1866, Address: 0x102a7b4, Func Offset: 0x84
	// Line 1867, Address: 0x102a7e0, Func Offset: 0xb0
	// Line 1869, Address: 0x102a82c, Func Offset: 0xfc
	// Line 1875, Address: 0x102a838, Func Offset: 0x108
	// Line 1876, Address: 0x102a83c, Func Offset: 0x10c
	// Func End, Address: 0x102a848, Func Offset: 0x118
}

// 
// Start address: 0x102a850
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1893, Address: 0x102a850, Func Offset: 0
	// Line 1894, Address: 0x102a86c, Func Offset: 0x1c
	// Line 1896, Address: 0x102a888, Func Offset: 0x38
	// Func End, Address: 0x102a898, Func Offset: 0x48
}

// 
// Start address: 0x102a8a0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1898, Address: 0x102a8a0, Func Offset: 0
	// Line 1899, Address: 0x102a8bc, Func Offset: 0x1c
	// Line 1900, Address: 0x102a8c0, Func Offset: 0x20
	// Line 1902, Address: 0x102a8dc, Func Offset: 0x3c
	// Func End, Address: 0x102a8ec, Func Offset: 0x4c
}

// 
// Start address: 0x102a8f0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1904, Address: 0x102a8f0, Func Offset: 0
	// Line 1905, Address: 0x102a904, Func Offset: 0x14
	// Line 1907, Address: 0x102a920, Func Offset: 0x30
	// Func End, Address: 0x102a930, Func Offset: 0x40
}

// 
// Start address: 0x102a930
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1909, Address: 0x102a930, Func Offset: 0
	// Line 1910, Address: 0x102a94c, Func Offset: 0x1c
	// Line 1912, Address: 0x102a968, Func Offset: 0x38
	// Func End, Address: 0x102a978, Func Offset: 0x48
}

// 
// Start address: 0x102a980
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1914, Address: 0x102a980, Func Offset: 0
	// Line 1915, Address: 0x102a998, Func Offset: 0x18
	// Line 1916, Address: 0x102a9a8, Func Offset: 0x28
	// Line 1917, Address: 0x102a9b8, Func Offset: 0x38
	// Line 1918, Address: 0x102a9c4, Func Offset: 0x44
	// Line 1920, Address: 0x102a9d0, Func Offset: 0x50
	// Line 1921, Address: 0x102a9fc, Func Offset: 0x7c
	// Line 1924, Address: 0x102aa28, Func Offset: 0xa8
	// Func End, Address: 0x102aa34, Func Offset: 0xb4
}

// 
// Start address: 0x102aa40
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1940, Address: 0x102aa40, Func Offset: 0
	// Line 1945, Address: 0x102aa58, Func Offset: 0x18
	// Line 1946, Address: 0x102aa64, Func Offset: 0x24
	// Line 1947, Address: 0x102aa70, Func Offset: 0x30
	// Line 1948, Address: 0x102aa78, Func Offset: 0x38
	// Line 1949, Address: 0x102aa7c, Func Offset: 0x3c
	// Line 1953, Address: 0x102aa94, Func Offset: 0x54
	// Line 1954, Address: 0x102aa9c, Func Offset: 0x5c
	// Line 1955, Address: 0x102aaa0, Func Offset: 0x60
	// Line 1957, Address: 0x102aab0, Func Offset: 0x70
	// Func End, Address: 0x102aad0, Func Offset: 0x90
}

// 
// Start address: 0x102aad0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1960, Address: 0x102aad0, Func Offset: 0
	// Line 1961, Address: 0x102aae8, Func Offset: 0x18
	// Line 1962, Address: 0x102ab08, Func Offset: 0x38
	// Func End, Address: 0x102ab18, Func Offset: 0x48
}

// 
// Start address: 0x102ab20
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1967, Address: 0x102ab20, Func Offset: 0
	// Line 1971, Address: 0x102ab40, Func Offset: 0x20
	// Line 1974, Address: 0x102ab5c, Func Offset: 0x3c
	// Line 1978, Address: 0x102ab84, Func Offset: 0x64
	// Line 1979, Address: 0x102ab90, Func Offset: 0x70
	// Line 1981, Address: 0x102abb8, Func Offset: 0x98
	// Func End, Address: 0x102abc8, Func Offset: 0xa8
}

// 
// Start address: 0x102abd0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1986, Address: 0x102abd0, Func Offset: 0
	// Line 1989, Address: 0x102abec, Func Offset: 0x1c
	// Line 1990, Address: 0x102abf4, Func Offset: 0x24
	// Line 1995, Address: 0x102abfc, Func Offset: 0x2c
	// Line 1997, Address: 0x102ac20, Func Offset: 0x50
	// Line 1998, Address: 0x102ac40, Func Offset: 0x70
	// Line 1999, Address: 0x102ac48, Func Offset: 0x78
	// Line 2000, Address: 0x102ac6c, Func Offset: 0x9c
	// Func End, Address: 0x102ac88, Func Offset: 0xb8
}

// 
// Start address: 0x102ac90
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2026, Address: 0x102ac90, Func Offset: 0
	// Line 2031, Address: 0x102acb8, Func Offset: 0x28
	// Line 2032, Address: 0x102acc8, Func Offset: 0x38
	// Line 2034, Address: 0x102ace4, Func Offset: 0x54
	// Line 2035, Address: 0x102ad08, Func Offset: 0x78
	// Line 2036, Address: 0x102ad30, Func Offset: 0xa0
	// Line 2037, Address: 0x102ad3c, Func Offset: 0xac
	// Line 2038, Address: 0x102ad44, Func Offset: 0xb4
	// Line 2041, Address: 0x102ad60, Func Offset: 0xd0
	// Line 2045, Address: 0x102ad88, Func Offset: 0xf8
	// Line 2048, Address: 0x102ad90, Func Offset: 0x100
	// Line 2049, Address: 0x102ad94, Func Offset: 0x104
	// Line 2053, Address: 0x102adb0, Func Offset: 0x120
	// Line 2060, Address: 0x102add8, Func Offset: 0x148
	// Func End, Address: 0x102adf4, Func Offset: 0x164
}

// 
// Start address: 0x102ae00
void mapinit()
{
	// Line 2065, Address: 0x102ae00, Func Offset: 0
	// Line 2071, Address: 0x102ae08, Func Offset: 0x8
	// Line 2074, Address: 0x102ae10, Func Offset: 0x10
	// Line 2075, Address: 0x102ae24, Func Offset: 0x24
	// Line 2082, Address: 0x102ae38, Func Offset: 0x38
	// Line 2083, Address: 0x102ae4c, Func Offset: 0x4c
	// Line 2086, Address: 0x102ae54, Func Offset: 0x54
	// Line 2088, Address: 0x102ae6c, Func Offset: 0x6c
	// Line 2092, Address: 0x102ae74, Func Offset: 0x74
	// Func End, Address: 0x102ae84, Func Offset: 0x84
}

// 
// Start address: 0x102ae90
void mapset()
{
	// Line 2102, Address: 0x102ae90, Func Offset: 0
	// Func End, Address: 0x102ae98, Func Offset: 0x8
}

