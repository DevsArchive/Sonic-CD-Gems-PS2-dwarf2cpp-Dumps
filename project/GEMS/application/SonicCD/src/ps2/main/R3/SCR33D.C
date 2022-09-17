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
typedef int type_9[12];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[12];
typedef short type_18[256];
typedef unsigned char type_19[3];
typedef _anon2* type_20[8];
typedef _anon1 type_21[128];
typedef unsigned short type_22[3];
typedef unsigned short type_23[2];
typedef unsigned short type_24[16];

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

unsigned char z33dwrttbl[49];
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
// Start address: 0x1026ce0
void enecginit()
{
	// Line 110, Address: 0x1026ce0, Func Offset: 0
	// Func End, Address: 0x1026ce8, Func Offset: 0x8
}

// 
// Start address: 0x1026cf0
void divdevset()
{
	// Line 114, Address: 0x1026cf0, Func Offset: 0
	// Func End, Address: 0x1026cf8, Func Offset: 0x8
}

// 
// Start address: 0x1026d00
_anon1* main_chk()
{
	// Line 168, Address: 0x1026d00, Func Offset: 0
	// Line 169, Address: 0x1026d14, Func Offset: 0x14
	// Line 171, Address: 0x1026d24, Func Offset: 0x24
	// Line 172, Address: 0x1026d2c, Func Offset: 0x2c
	// Func End, Address: 0x1026d34, Func Offset: 0x34
}

// 
// Start address: 0x1026d40
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 185, Address: 0x1026d40, Func Offset: 0
	// Line 191, Address: 0x1026d4c, Func Offset: 0xc
	// Line 196, Address: 0x1026d80, Func Offset: 0x40
	// Line 198, Address: 0x1026dc8, Func Offset: 0x88
	// Line 199, Address: 0x1026dcc, Func Offset: 0x8c
	// Line 200, Address: 0x1026de8, Func Offset: 0xa8
	// Line 201, Address: 0x1026dfc, Func Offset: 0xbc
	// Line 202, Address: 0x1026e18, Func Offset: 0xd8
	// Line 203, Address: 0x1026e2c, Func Offset: 0xec
	// Line 204, Address: 0x1026e48, Func Offset: 0x108
	// Line 205, Address: 0x1026e5c, Func Offset: 0x11c
	// Line 206, Address: 0x1026e78, Func Offset: 0x138
	// Line 207, Address: 0x1026e8c, Func Offset: 0x14c
	// Line 209, Address: 0x1026ea8, Func Offset: 0x168
	// Line 210, Address: 0x1026ecc, Func Offset: 0x18c
	// Line 211, Address: 0x1026ed8, Func Offset: 0x198
	// Line 213, Address: 0x1026ee4, Func Offset: 0x1a4
	// Line 214, Address: 0x1026f00, Func Offset: 0x1c0
	// Line 216, Address: 0x1026f0c, Func Offset: 0x1cc
	// Line 217, Address: 0x1026f14, Func Offset: 0x1d4
	// Func End, Address: 0x1026f28, Func Offset: 0x1e8
}

// 
// Start address: 0x1026f30
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 229, Address: 0x1026f30, Func Offset: 0
	// Line 230, Address: 0x1026f48, Func Offset: 0x18
	// Line 234, Address: 0x1026f64, Func Offset: 0x34
	// Line 244, Address: 0x1026f98, Func Offset: 0x68
	// Line 254, Address: 0x1026fc4, Func Offset: 0x94
	// Line 255, Address: 0x1026fd8, Func Offset: 0xa8
	// Line 256, Address: 0x1026fe0, Func Offset: 0xb0
	// Line 257, Address: 0x1026ff0, Func Offset: 0xc0
	// Line 259, Address: 0x1027000, Func Offset: 0xd0
	// Line 261, Address: 0x1027014, Func Offset: 0xe4
	// Line 264, Address: 0x102701c, Func Offset: 0xec
	// Line 265, Address: 0x1027034, Func Offset: 0x104
	// Line 266, Address: 0x102705c, Func Offset: 0x12c
	// Line 269, Address: 0x1027064, Func Offset: 0x134
	// Line 272, Address: 0x1027084, Func Offset: 0x154
	// Line 273, Address: 0x10270a0, Func Offset: 0x170
	// Line 277, Address: 0x10270b4, Func Offset: 0x184
	// Line 278, Address: 0x10270c8, Func Offset: 0x198
	// Line 279, Address: 0x10270d4, Func Offset: 0x1a4
	// Line 281, Address: 0x10270dc, Func Offset: 0x1ac
	// Line 285, Address: 0x10270e0, Func Offset: 0x1b0
	// Line 286, Address: 0x1027104, Func Offset: 0x1d4
	// Line 288, Address: 0x1027114, Func Offset: 0x1e4
	// Line 290, Address: 0x102711c, Func Offset: 0x1ec
	// Line 291, Address: 0x1027130, Func Offset: 0x200
	// Line 292, Address: 0x102713c, Func Offset: 0x20c
	// Line 294, Address: 0x1027144, Func Offset: 0x214
	// Line 297, Address: 0x1027148, Func Offset: 0x218
	// Line 298, Address: 0x102716c, Func Offset: 0x23c
	// Line 301, Address: 0x102717c, Func Offset: 0x24c
	// Line 303, Address: 0x1027184, Func Offset: 0x254
	// Line 305, Address: 0x1027194, Func Offset: 0x264
	// Line 306, Address: 0x1027198, Func Offset: 0x268
	// Line 307, Address: 0x10271b0, Func Offset: 0x280
	// Line 308, Address: 0x10271c8, Func Offset: 0x298
	// Line 309, Address: 0x10271e0, Func Offset: 0x2b0
	// Line 312, Address: 0x10271f8, Func Offset: 0x2c8
	// Func End, Address: 0x1027218, Func Offset: 0x2e8
}

// 
// Start address: 0x1027220
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 324, Address: 0x1027220, Func Offset: 0
	// Line 329, Address: 0x1027234, Func Offset: 0x14
	// Line 330, Address: 0x102723c, Func Offset: 0x1c
	// Line 331, Address: 0x1027264, Func Offset: 0x44
	// Line 332, Address: 0x1027280, Func Offset: 0x60
	// Line 333, Address: 0x10272b4, Func Offset: 0x94
	// Line 334, Address: 0x10272c8, Func Offset: 0xa8
	// Line 338, Address: 0x10272cc, Func Offset: 0xac
	// Line 339, Address: 0x10272d8, Func Offset: 0xb8
	// Line 340, Address: 0x10272e0, Func Offset: 0xc0
	// Line 341, Address: 0x10272ec, Func Offset: 0xcc
	// Line 343, Address: 0x10272f8, Func Offset: 0xd8
	// Line 344, Address: 0x1027330, Func Offset: 0x110
	// Line 345, Address: 0x1027370, Func Offset: 0x150
	// Line 348, Address: 0x10273b0, Func Offset: 0x190
	// Line 349, Address: 0x10273bc, Func Offset: 0x19c
	// Line 350, Address: 0x10273d0, Func Offset: 0x1b0
	// Line 352, Address: 0x10273e0, Func Offset: 0x1c0
	// Func End, Address: 0x10273f4, Func Offset: 0x1d4
}

// 
// Start address: 0x1027400
void scroll()
{
	int LineSpdTbl[12];
	unsigned char z33d_cnttbl[12];
	unsigned char z33d_cnttbl1[3];
	unsigned short z33d_kawatbl[3];
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
	// Line 365, Address: 0x1027400, Func Offset: 0
	// Line 366, Address: 0x1027420, Func Offset: 0x20
	// Line 372, Address: 0x1027454, Func Offset: 0x54
	// Line 375, Address: 0x1027488, Func Offset: 0x88
	// Line 378, Address: 0x10274ac, Func Offset: 0xac
	// Line 389, Address: 0x10274d0, Func Offset: 0xd0
	// Line 392, Address: 0x10274e0, Func Offset: 0xe0
	// Line 393, Address: 0x102750c, Func Offset: 0x10c
	// Line 394, Address: 0x1027518, Func Offset: 0x118
	// Line 395, Address: 0x1027524, Func Offset: 0x124
	// Line 397, Address: 0x1027530, Func Offset: 0x130
	// Line 398, Address: 0x1027540, Func Offset: 0x140
	// Line 401, Address: 0x1027550, Func Offset: 0x150
	// Line 402, Address: 0x1027574, Func Offset: 0x174
	// Line 403, Address: 0x10275ac, Func Offset: 0x1ac
	// Line 405, Address: 0x10275e4, Func Offset: 0x1e4
	// Line 406, Address: 0x10275ec, Func Offset: 0x1ec
	// Line 407, Address: 0x10275f8, Func Offset: 0x1f8
	// Line 409, Address: 0x1027618, Func Offset: 0x218
	// Line 410, Address: 0x102762c, Func Offset: 0x22c
	// Line 411, Address: 0x1027634, Func Offset: 0x234
	// Line 412, Address: 0x1027648, Func Offset: 0x248
	// Line 413, Address: 0x102765c, Func Offset: 0x25c
	// Line 415, Address: 0x1027660, Func Offset: 0x260
	// Line 417, Address: 0x1027668, Func Offset: 0x268
	// Line 420, Address: 0x1027680, Func Offset: 0x280
	// Line 421, Address: 0x1027694, Func Offset: 0x294
	// Line 422, Address: 0x10276a4, Func Offset: 0x2a4
	// Line 423, Address: 0x10276b4, Func Offset: 0x2b4
	// Line 425, Address: 0x10276c4, Func Offset: 0x2c4
	// Line 426, Address: 0x10276e0, Func Offset: 0x2e0
	// Line 427, Address: 0x10276fc, Func Offset: 0x2fc
	// Line 428, Address: 0x1027704, Func Offset: 0x304
	// Line 451, Address: 0x102770c, Func Offset: 0x30c
	// Line 452, Address: 0x1027714, Func Offset: 0x314
	// Line 453, Address: 0x1027720, Func Offset: 0x320
	// Line 454, Address: 0x1027738, Func Offset: 0x338
	// Line 455, Address: 0x102773c, Func Offset: 0x33c
	// Line 456, Address: 0x102774c, Func Offset: 0x34c
	// Line 457, Address: 0x1027750, Func Offset: 0x350
	// Line 458, Address: 0x1027758, Func Offset: 0x358
	// Line 459, Address: 0x102777c, Func Offset: 0x37c
	// Line 460, Address: 0x102778c, Func Offset: 0x38c
	// Line 461, Address: 0x1027790, Func Offset: 0x390
	// Line 462, Address: 0x102779c, Func Offset: 0x39c
	// Line 470, Address: 0x10277ac, Func Offset: 0x3ac
	// Line 471, Address: 0x10277b8, Func Offset: 0x3b8
	// Line 472, Address: 0x10277d8, Func Offset: 0x3d8
	// Line 474, Address: 0x10277fc, Func Offset: 0x3fc
	// Line 475, Address: 0x1027808, Func Offset: 0x408
	// Line 476, Address: 0x102781c, Func Offset: 0x41c
	// Line 479, Address: 0x102782c, Func Offset: 0x42c
	// Line 480, Address: 0x1027838, Func Offset: 0x438
	// Line 481, Address: 0x102784c, Func Offset: 0x44c
	// Line 483, Address: 0x102785c, Func Offset: 0x45c
	// Line 485, Address: 0x1027880, Func Offset: 0x480
	// Line 486, Address: 0x102788c, Func Offset: 0x48c
	// Line 487, Address: 0x10278a0, Func Offset: 0x4a0
	// Line 502, Address: 0x10278b0, Func Offset: 0x4b0
	// Line 503, Address: 0x10278b8, Func Offset: 0x4b8
	// Line 504, Address: 0x10278c4, Func Offset: 0x4c4
	// Line 505, Address: 0x10278f0, Func Offset: 0x4f0
	// Line 506, Address: 0x10278f4, Func Offset: 0x4f4
	// Line 507, Address: 0x1027908, Func Offset: 0x508
	// Line 508, Address: 0x1027918, Func Offset: 0x518
	// Line 509, Address: 0x1027924, Func Offset: 0x524
	// Line 512, Address: 0x1027930, Func Offset: 0x530
	// Line 514, Address: 0x1027954, Func Offset: 0x554
	// Line 515, Address: 0x1027960, Func Offset: 0x560
	// Line 516, Address: 0x1027974, Func Offset: 0x574
	// Line 518, Address: 0x1027984, Func Offset: 0x584
	// Line 520, Address: 0x10279a8, Func Offset: 0x5a8
	// Line 521, Address: 0x10279b4, Func Offset: 0x5b4
	// Line 522, Address: 0x10279c8, Func Offset: 0x5c8
	// Line 524, Address: 0x10279d8, Func Offset: 0x5d8
	// Line 526, Address: 0x10279fc, Func Offset: 0x5fc
	// Line 527, Address: 0x1027a08, Func Offset: 0x608
	// Line 528, Address: 0x1027a1c, Func Offset: 0x61c
	// Line 531, Address: 0x1027a2c, Func Offset: 0x62c
	// Line 532, Address: 0x1027a64, Func Offset: 0x664
	// Line 533, Address: 0x1027a70, Func Offset: 0x670
	// Line 534, Address: 0x1027a90, Func Offset: 0x690
	// Line 535, Address: 0x1027a9c, Func Offset: 0x69c
	// Line 537, Address: 0x1027aa8, Func Offset: 0x6a8
	// Line 538, Address: 0x1027ab4, Func Offset: 0x6b4
	// Line 539, Address: 0x1027ad0, Func Offset: 0x6d0
	// Line 540, Address: 0x1027ae4, Func Offset: 0x6e4
	// Line 541, Address: 0x1027af8, Func Offset: 0x6f8
	// Line 542, Address: 0x1027b04, Func Offset: 0x704
	// Line 543, Address: 0x1027b28, Func Offset: 0x728
	// Line 544, Address: 0x1027b38, Func Offset: 0x738
	// Line 545, Address: 0x1027b5c, Func Offset: 0x75c
	// Line 547, Address: 0x1027b68, Func Offset: 0x768
	// Line 549, Address: 0x1027b8c, Func Offset: 0x78c
	// Line 550, Address: 0x1027b98, Func Offset: 0x798
	// Line 551, Address: 0x1027bac, Func Offset: 0x7ac
	// Line 553, Address: 0x1027bbc, Func Offset: 0x7bc
	// Line 554, Address: 0x1027bc8, Func Offset: 0x7c8
	// Line 555, Address: 0x1027bd4, Func Offset: 0x7d4
	// Line 556, Address: 0x1027be0, Func Offset: 0x7e0
	// Line 557, Address: 0x1027be8, Func Offset: 0x7e8
	// Line 558, Address: 0x1027bf0, Func Offset: 0x7f0
	// Line 559, Address: 0x1027c14, Func Offset: 0x814
	// Line 560, Address: 0x1027c30, Func Offset: 0x830
	// Line 561, Address: 0x1027c38, Func Offset: 0x838
	// Line 562, Address: 0x1027c40, Func Offset: 0x840
	// Line 564, Address: 0x1027c54, Func Offset: 0x854
	// Line 565, Address: 0x1027c5c, Func Offset: 0x85c
	// Line 566, Address: 0x1027c6c, Func Offset: 0x86c
	// Line 569, Address: 0x1027c74, Func Offset: 0x874
	// Line 570, Address: 0x1027c7c, Func Offset: 0x87c
	// Line 571, Address: 0x1027ca0, Func Offset: 0x8a0
	// Line 573, Address: 0x1027cb4, Func Offset: 0x8b4
	// Line 576, Address: 0x1027cdc, Func Offset: 0x8dc
	// Line 578, Address: 0x1027ce4, Func Offset: 0x8e4
	// Line 583, Address: 0x1027cec, Func Offset: 0x8ec
	// Line 584, Address: 0x1027d00, Func Offset: 0x900
	// Line 585, Address: 0x1027d0c, Func Offset: 0x90c
	// Line 586, Address: 0x1027d20, Func Offset: 0x920
	// Line 589, Address: 0x1027d38, Func Offset: 0x938
	// Line 590, Address: 0x1027d4c, Func Offset: 0x94c
	// Line 591, Address: 0x1027d60, Func Offset: 0x960
	// Line 592, Address: 0x1027d74, Func Offset: 0x974
	// Line 593, Address: 0x1027d94, Func Offset: 0x994
	// Line 594, Address: 0x1027d9c, Func Offset: 0x99c
	// Line 595, Address: 0x1027dbc, Func Offset: 0x9bc
	// Line 596, Address: 0x1027dd4, Func Offset: 0x9d4
	// Line 597, Address: 0x1027ddc, Func Offset: 0x9dc
	// Line 598, Address: 0x1027e08, Func Offset: 0xa08
	// Line 599, Address: 0x1027e1c, Func Offset: 0xa1c
	// Line 600, Address: 0x1027e38, Func Offset: 0xa38
	// Line 603, Address: 0x1027e3c, Func Offset: 0xa3c
	// Line 604, Address: 0x1027e48, Func Offset: 0xa48
	// Line 605, Address: 0x1027e54, Func Offset: 0xa54
	// Line 606, Address: 0x1027e60, Func Offset: 0xa60
	// Line 607, Address: 0x1027e68, Func Offset: 0xa68
	// Line 609, Address: 0x1027e8c, Func Offset: 0xa8c
	// Func End, Address: 0x1027eb4, Func Offset: 0xab4
}

// 
// Start address: 0x1027ec0
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 614, Address: 0x1027ec0, Func Offset: 0
	// Line 621, Address: 0x1027ef4, Func Offset: 0x34
	// Line 622, Address: 0x1027f14, Func Offset: 0x54
	// Line 623, Address: 0x1027f1c, Func Offset: 0x5c
	// Line 625, Address: 0x1027f24, Func Offset: 0x64
	// Line 630, Address: 0x1027f48, Func Offset: 0x88
	// Line 631, Address: 0x1027f5c, Func Offset: 0x9c
	// Line 633, Address: 0x1027f88, Func Offset: 0xc8
	// Line 634, Address: 0x1027f98, Func Offset: 0xd8
	// Line 635, Address: 0x1027fac, Func Offset: 0xec
	// Line 638, Address: 0x1027fb4, Func Offset: 0xf4
	// Line 641, Address: 0x1027fd0, Func Offset: 0x110
	// Line 646, Address: 0x1027ff4, Func Offset: 0x134
	// Line 647, Address: 0x1028004, Func Offset: 0x144
	// Line 650, Address: 0x1028018, Func Offset: 0x158
	// Line 652, Address: 0x102801c, Func Offset: 0x15c
	// Line 655, Address: 0x1028024, Func Offset: 0x164
	// Line 656, Address: 0x102802c, Func Offset: 0x16c
	// Line 657, Address: 0x1028030, Func Offset: 0x170
	// Line 658, Address: 0x1028040, Func Offset: 0x180
	// Line 663, Address: 0x1028068, Func Offset: 0x1a8
	// Line 664, Address: 0x1028070, Func Offset: 0x1b0
	// Line 665, Address: 0x1028078, Func Offset: 0x1b8
	// Line 669, Address: 0x1028080, Func Offset: 0x1c0
	// Line 670, Address: 0x10280b0, Func Offset: 0x1f0
	// Line 673, Address: 0x10280c8, Func Offset: 0x208
	// Line 676, Address: 0x10280ec, Func Offset: 0x22c
	// Line 677, Address: 0x102811c, Func Offset: 0x25c
	// Line 678, Address: 0x1028134, Func Offset: 0x274
	// Line 686, Address: 0x102813c, Func Offset: 0x27c
	// Line 687, Address: 0x102816c, Func Offset: 0x2ac
	// Line 692, Address: 0x1028184, Func Offset: 0x2c4
	// Line 693, Address: 0x102818c, Func Offset: 0x2cc
	// Line 694, Address: 0x1028190, Func Offset: 0x2d0
	// Line 697, Address: 0x10281a8, Func Offset: 0x2e8
	// Line 698, Address: 0x10281bc, Func Offset: 0x2fc
	// Line 699, Address: 0x10281e8, Func Offset: 0x328
	// Line 700, Address: 0x10281fc, Func Offset: 0x33c
	// Line 701, Address: 0x1028218, Func Offset: 0x358
	// Line 702, Address: 0x1028220, Func Offset: 0x360
	// Line 703, Address: 0x1028228, Func Offset: 0x368
	// Line 704, Address: 0x102822c, Func Offset: 0x36c
	// Line 705, Address: 0x1028240, Func Offset: 0x380
	// Line 706, Address: 0x1028254, Func Offset: 0x394
	// Line 708, Address: 0x1028278, Func Offset: 0x3b8
	// Line 711, Address: 0x1028280, Func Offset: 0x3c0
	// Line 712, Address: 0x1028290, Func Offset: 0x3d0
	// Line 713, Address: 0x102829c, Func Offset: 0x3dc
	// Line 714, Address: 0x10282c0, Func Offset: 0x400
	// Line 715, Address: 0x10282c8, Func Offset: 0x408
	// Func End, Address: 0x10282e8, Func Offset: 0x428
}

// 
// Start address: 0x10282f0
void scroll_h()
{
	unsigned short wD4;
	// Line 731, Address: 0x10282f0, Func Offset: 0
	// Line 734, Address: 0x10282fc, Func Offset: 0xc
	// Line 735, Address: 0x1028308, Func Offset: 0x18
	// Line 736, Address: 0x1028310, Func Offset: 0x20
	// Line 737, Address: 0x1028344, Func Offset: 0x54
	// Line 738, Address: 0x1028358, Func Offset: 0x68
	// Line 739, Address: 0x1028384, Func Offset: 0x94
	// Line 740, Address: 0x1028398, Func Offset: 0xa8
	// Line 743, Address: 0x10283a0, Func Offset: 0xb0
	// Line 748, Address: 0x10283b4, Func Offset: 0xc4
	// Func End, Address: 0x10283c8, Func Offset: 0xd8
}

// 
// Start address: 0x10283d0
void scrh_move()
{
	unsigned short wD0;
	// Line 750, Address: 0x10283d0, Func Offset: 0
	// Line 753, Address: 0x10283dc, Func Offset: 0xc
	// Line 754, Address: 0x10283e8, Func Offset: 0x18
	// Line 755, Address: 0x10283fc, Func Offset: 0x2c
	// Line 756, Address: 0x1028410, Func Offset: 0x40
	// Line 758, Address: 0x102841c, Func Offset: 0x4c
	// Line 759, Address: 0x1028424, Func Offset: 0x54
	// Line 760, Address: 0x102842c, Func Offset: 0x5c
	// Line 761, Address: 0x1028444, Func Offset: 0x74
	// Line 762, Address: 0x1028450, Func Offset: 0x80
	// Line 764, Address: 0x1028458, Func Offset: 0x88
	// Line 767, Address: 0x1028464, Func Offset: 0x94
	// Func End, Address: 0x1028478, Func Offset: 0xa8
}

// 
// Start address: 0x1028480
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 770, Address: 0x1028480, Func Offset: 0
	// Line 773, Address: 0x102848c, Func Offset: 0xc
	// Line 774, Address: 0x10284ac, Func Offset: 0x2c
	// Line 777, Address: 0x10284b4, Func Offset: 0x34
	// Line 778, Address: 0x10284cc, Func Offset: 0x4c
	// Line 779, Address: 0x10284fc, Func Offset: 0x7c
	// Line 782, Address: 0x1028508, Func Offset: 0x88
	// Line 783, Address: 0x1028510, Func Offset: 0x90
	// Line 784, Address: 0x1028524, Func Offset: 0xa4
	// Line 785, Address: 0x1028554, Func Offset: 0xd4
	// Line 786, Address: 0x1028560, Func Offset: 0xe0
	// Line 788, Address: 0x1028568, Func Offset: 0xe8
	// Func End, Address: 0x1028578, Func Offset: 0xf8
}

// 
// Start address: 0x1028580
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 791, Address: 0x1028580, Func Offset: 0
	// Line 794, Address: 0x102858c, Func Offset: 0xc
	// Line 795, Address: 0x10285ac, Func Offset: 0x2c
	// Line 798, Address: 0x10285b4, Func Offset: 0x34
	// Line 799, Address: 0x10285cc, Func Offset: 0x4c
	// Line 800, Address: 0x10285fc, Func Offset: 0x7c
	// Line 803, Address: 0x1028608, Func Offset: 0x88
	// Line 804, Address: 0x1028610, Func Offset: 0x90
	// Line 805, Address: 0x1028624, Func Offset: 0xa4
	// Line 806, Address: 0x1028654, Func Offset: 0xd4
	// Line 807, Address: 0x1028660, Func Offset: 0xe0
	// Line 809, Address: 0x1028668, Func Offset: 0xe8
	// Func End, Address: 0x1028678, Func Offset: 0xf8
}

// 
// Start address: 0x1028680
void scroll_v()
{
	unsigned short wD0;
	// Line 828, Address: 0x1028680, Func Offset: 0
	// Line 831, Address: 0x102868c, Func Offset: 0xc
	// Line 832, Address: 0x10286b8, Func Offset: 0x38
	// Line 833, Address: 0x10286d0, Func Offset: 0x50
	// Line 836, Address: 0x10286d8, Func Offset: 0x58
	// Line 837, Address: 0x10286f0, Func Offset: 0x70
	// Line 838, Address: 0x10286f8, Func Offset: 0x78
	// Line 839, Address: 0x1028718, Func Offset: 0x98
	// Line 840, Address: 0x102872c, Func Offset: 0xac
	// Line 841, Address: 0x1028738, Func Offset: 0xb8
	// Line 843, Address: 0x1028740, Func Offset: 0xc0
	// Line 844, Address: 0x1028754, Func Offset: 0xd4
	// Line 845, Address: 0x1028764, Func Offset: 0xe4
	// Line 846, Address: 0x102876c, Func Offset: 0xec
	// Line 847, Address: 0x1028778, Func Offset: 0xf8
	// Line 849, Address: 0x1028780, Func Offset: 0x100
	// Line 850, Address: 0x1028788, Func Offset: 0x108
	// Line 851, Address: 0x102879c, Func Offset: 0x11c
	// Line 852, Address: 0x10287a4, Func Offset: 0x124
	// Line 858, Address: 0x10287ac, Func Offset: 0x12c
	// Line 859, Address: 0x10287c0, Func Offset: 0x140
	// Line 860, Address: 0x10287c8, Func Offset: 0x148
	// Line 861, Address: 0x10287d4, Func Offset: 0x154
	// Line 863, Address: 0x10287dc, Func Offset: 0x15c
	// Line 864, Address: 0x10287f0, Func Offset: 0x170
	// Line 865, Address: 0x10287f8, Func Offset: 0x178
	// Line 870, Address: 0x1028800, Func Offset: 0x180
	// Line 872, Address: 0x1028808, Func Offset: 0x188
	// Func End, Address: 0x102881c, Func Offset: 0x19c
}

// 
// Start address: 0x1028820
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 878, Address: 0x1028820, Func Offset: 0
	// Line 881, Address: 0x1028830, Func Offset: 0x10
	// Line 882, Address: 0x102884c, Func Offset: 0x2c
	// Line 883, Address: 0x1028858, Func Offset: 0x38
	// Line 886, Address: 0x1028860, Func Offset: 0x40
	// Line 887, Address: 0x102886c, Func Offset: 0x4c
	// Line 888, Address: 0x1028884, Func Offset: 0x64
	// Line 891, Address: 0x10288a0, Func Offset: 0x80
	// Line 892, Address: 0x10288b0, Func Offset: 0x90
	// Line 893, Address: 0x10288bc, Func Offset: 0x9c
	// Line 895, Address: 0x10288c4, Func Offset: 0xa4
	// Line 896, Address: 0x10288e4, Func Offset: 0xc4
	// Line 897, Address: 0x10288f0, Func Offset: 0xd0
	// Line 898, Address: 0x10288f8, Func Offset: 0xd8
	// Line 899, Address: 0x1028918, Func Offset: 0xf8
	// Line 900, Address: 0x1028924, Func Offset: 0x104
	// Line 902, Address: 0x102892c, Func Offset: 0x10c
	// Line 906, Address: 0x1028938, Func Offset: 0x118
	// Func End, Address: 0x102894c, Func Offset: 0x12c
}

// 
// Start address: 0x1028950
void sv_move_main1(unsigned short wD0)
{
	// Line 910, Address: 0x1028950, Func Offset: 0
	// Line 912, Address: 0x102895c, Func Offset: 0xc
	// Line 913, Address: 0x102897c, Func Offset: 0x2c
	// Line 914, Address: 0x1028988, Func Offset: 0x38
	// Line 915, Address: 0x1028990, Func Offset: 0x40
	// Line 916, Address: 0x10289b0, Func Offset: 0x60
	// Line 917, Address: 0x10289bc, Func Offset: 0x6c
	// Line 919, Address: 0x10289c4, Func Offset: 0x74
	// Line 922, Address: 0x10289d0, Func Offset: 0x80
	// Func End, Address: 0x10289e0, Func Offset: 0x90
}

// 
// Start address: 0x10289e0
void sv_move_main2(unsigned short wD0)
{
	// Line 925, Address: 0x10289e0, Func Offset: 0
	// Line 927, Address: 0x10289ec, Func Offset: 0xc
	// Line 928, Address: 0x1028a0c, Func Offset: 0x2c
	// Line 929, Address: 0x1028a18, Func Offset: 0x38
	// Line 930, Address: 0x1028a20, Func Offset: 0x40
	// Line 931, Address: 0x1028a40, Func Offset: 0x60
	// Line 932, Address: 0x1028a4c, Func Offset: 0x6c
	// Line 934, Address: 0x1028a54, Func Offset: 0x74
	// Line 937, Address: 0x1028a60, Func Offset: 0x80
	// Func End, Address: 0x1028a70, Func Offset: 0x90
}

// 
// Start address: 0x1028a70
void sv_move_sub2()
{
	// Line 940, Address: 0x1028a70, Func Offset: 0
	// Line 941, Address: 0x1028a78, Func Offset: 0x8
	// Line 942, Address: 0x1028a80, Func Offset: 0x10
	// Line 943, Address: 0x1028a8c, Func Offset: 0x1c
	// Func End, Address: 0x1028a9c, Func Offset: 0x2c
}

// 
// Start address: 0x1028aa0
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 946, Address: 0x1028aa0, Func Offset: 0
	// Line 949, Address: 0x1028aac, Func Offset: 0xc
	// Line 950, Address: 0x1028ab0, Func Offset: 0x10
	// Line 951, Address: 0x1028ab8, Func Offset: 0x18
	// Line 952, Address: 0x1028ad4, Func Offset: 0x34
	// Line 953, Address: 0x1028af0, Func Offset: 0x50
	// Line 954, Address: 0x1028afc, Func Offset: 0x5c
	// Line 956, Address: 0x1028b04, Func Offset: 0x64
	// Line 959, Address: 0x1028b10, Func Offset: 0x70
	// Func End, Address: 0x1028b20, Func Offset: 0x80
}

// 
// Start address: 0x1028b20
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 964, Address: 0x1028b20, Func Offset: 0
	// Line 968, Address: 0x1028b30, Func Offset: 0x10
	// Line 969, Address: 0x1028b4c, Func Offset: 0x2c
	// Line 970, Address: 0x1028b58, Func Offset: 0x38
	// Line 972, Address: 0x1028b6c, Func Offset: 0x4c
	// Line 973, Address: 0x1028b74, Func Offset: 0x54
	// Line 974, Address: 0x1028b7c, Func Offset: 0x5c
	// Line 975, Address: 0x1028b80, Func Offset: 0x60
	// Line 976, Address: 0x1028b8c, Func Offset: 0x6c
	// Func End, Address: 0x1028ba0, Func Offset: 0x80
}

// 
// Start address: 0x1028ba0
void scrv_up_ch(_anon2 lD1)
{
	// Line 980, Address: 0x1028ba0, Func Offset: 0
	// Line 981, Address: 0x1028bac, Func Offset: 0xc
	// Line 982, Address: 0x1028bd4, Func Offset: 0x34
	// Line 983, Address: 0x1028bec, Func Offset: 0x4c
	// Line 984, Address: 0x1028bf8, Func Offset: 0x58
	// Line 985, Address: 0x1028c0c, Func Offset: 0x6c
	// Line 986, Address: 0x1028c20, Func Offset: 0x80
	// Line 987, Address: 0x1028c34, Func Offset: 0x94
	// Line 990, Address: 0x1028c3c, Func Offset: 0x9c
	// Line 993, Address: 0x1028c48, Func Offset: 0xa8
	// Line 995, Address: 0x1028c54, Func Offset: 0xb4
	// Func End, Address: 0x1028c64, Func Offset: 0xc4
}

// 
// Start address: 0x1028c70
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 1001, Address: 0x1028c70, Func Offset: 0
	// Line 1005, Address: 0x1028c80, Func Offset: 0x10
	// Line 1006, Address: 0x1028c84, Func Offset: 0x14
	// Line 1007, Address: 0x1028c8c, Func Offset: 0x1c
	// Line 1008, Address: 0x1028c98, Func Offset: 0x28
	// Line 1010, Address: 0x1028cac, Func Offset: 0x3c
	// Line 1011, Address: 0x1028cb4, Func Offset: 0x44
	// Line 1012, Address: 0x1028cbc, Func Offset: 0x4c
	// Line 1014, Address: 0x1028cc0, Func Offset: 0x50
	// Line 1016, Address: 0x1028ccc, Func Offset: 0x5c
	// Func End, Address: 0x1028ce0, Func Offset: 0x70
}

// 
// Start address: 0x1028ce0
void scrv_down_ch(_anon2 lD1)
{
	// Line 1020, Address: 0x1028ce0, Func Offset: 0
	// Line 1021, Address: 0x1028cec, Func Offset: 0xc
	// Line 1022, Address: 0x1028d14, Func Offset: 0x34
	// Line 1023, Address: 0x1028d20, Func Offset: 0x40
	// Line 1024, Address: 0x1028d34, Func Offset: 0x54
	// Line 1025, Address: 0x1028d48, Func Offset: 0x68
	// Line 1026, Address: 0x1028d5c, Func Offset: 0x7c
	// Line 1027, Address: 0x1028d70, Func Offset: 0x90
	// Line 1029, Address: 0x1028d78, Func Offset: 0x98
	// Line 1032, Address: 0x1028d84, Func Offset: 0xa4
	// Line 1034, Address: 0x1028d90, Func Offset: 0xb0
	// Func End, Address: 0x1028da0, Func Offset: 0xc0
}

// 
// Start address: 0x1028da0
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1037, Address: 0x1028da0, Func Offset: 0
	// Line 1040, Address: 0x1028db0, Func Offset: 0x10
	// Line 1042, Address: 0x1028dbc, Func Offset: 0x1c
	// Line 1043, Address: 0x1028dc4, Func Offset: 0x24
	// Line 1044, Address: 0x1028dcc, Func Offset: 0x2c
	// Line 1046, Address: 0x1028dd0, Func Offset: 0x30
	// Line 1047, Address: 0x1028df8, Func Offset: 0x58
	// Line 1050, Address: 0x1028e04, Func Offset: 0x64
	// Line 1051, Address: 0x1028e38, Func Offset: 0x98
	// Line 1052, Address: 0x1028e4c, Func Offset: 0xac
	// Line 1054, Address: 0x1028e78, Func Offset: 0xd8
	// Line 1055, Address: 0x1028e8c, Func Offset: 0xec
	// Line 1057, Address: 0x1028e94, Func Offset: 0xf4
	// Line 1062, Address: 0x1028ea8, Func Offset: 0x108
	// Func End, Address: 0x1028ebc, Func Offset: 0x11c
}

// 
// Start address: 0x1028ec0
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1066, Address: 0x1028ec0, Func Offset: 0
	// Line 1069, Address: 0x1028ecc, Func Offset: 0xc
	// Line 1070, Address: 0x1028edc, Func Offset: 0x1c
	// Line 1071, Address: 0x1028eec, Func Offset: 0x2c
	// Line 1073, Address: 0x1028ef8, Func Offset: 0x38
	// Line 1075, Address: 0x1028f2c, Func Offset: 0x6c
	// Line 1076, Address: 0x1028f40, Func Offset: 0x80
	// Line 1077, Address: 0x1028f50, Func Offset: 0x90
	// Line 1078, Address: 0x1028f64, Func Offset: 0xa4
	// Line 1079, Address: 0x1028f78, Func Offset: 0xb8
	// Line 1082, Address: 0x1028f80, Func Offset: 0xc0
	// Line 1087, Address: 0x1028f94, Func Offset: 0xd4
	// Line 1088, Address: 0x1028fa4, Func Offset: 0xe4
	// Line 1089, Address: 0x1028fb4, Func Offset: 0xf4
	// Line 1091, Address: 0x1028fc0, Func Offset: 0x100
	// Line 1093, Address: 0x1028ff4, Func Offset: 0x134
	// Line 1094, Address: 0x1029008, Func Offset: 0x148
	// Line 1095, Address: 0x1029018, Func Offset: 0x158
	// Line 1096, Address: 0x102902c, Func Offset: 0x16c
	// Line 1097, Address: 0x1029040, Func Offset: 0x180
	// Line 1100, Address: 0x1029048, Func Offset: 0x188
	// Line 1105, Address: 0x102905c, Func Offset: 0x19c
	// Func End, Address: 0x1029068, Func Offset: 0x1a8
}

// 
// Start address: 0x1029070
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1112, Address: 0x1029070, Func Offset: 0
	// Line 1115, Address: 0x102907c, Func Offset: 0xc
	// Line 1116, Address: 0x1029088, Func Offset: 0x18
	// Line 1118, Address: 0x1029094, Func Offset: 0x24
	// Line 1119, Address: 0x10290c0, Func Offset: 0x50
	// Line 1120, Address: 0x10290d4, Func Offset: 0x64
	// Line 1121, Address: 0x1029104, Func Offset: 0x94
	// Line 1122, Address: 0x1029118, Func Offset: 0xa8
	// Line 1125, Address: 0x1029120, Func Offset: 0xb0
	// Line 1130, Address: 0x1029134, Func Offset: 0xc4
	// Func End, Address: 0x1029144, Func Offset: 0xd4
}

// 
// Start address: 0x1029150
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1134, Address: 0x1029150, Func Offset: 0
	// Line 1138, Address: 0x1029160, Func Offset: 0x10
	// Line 1139, Address: 0x102916c, Func Offset: 0x1c
	// Line 1140, Address: 0x102917c, Func Offset: 0x2c
	// Line 1142, Address: 0x1029188, Func Offset: 0x38
	// Line 1143, Address: 0x1029190, Func Offset: 0x40
	// Line 1144, Address: 0x1029198, Func Offset: 0x48
	// Line 1146, Address: 0x10291a4, Func Offset: 0x54
	// Line 1147, Address: 0x10291b0, Func Offset: 0x60
	// Line 1148, Address: 0x10291c4, Func Offset: 0x74
	// Line 1149, Address: 0x10291d0, Func Offset: 0x80
	// Line 1150, Address: 0x10291e4, Func Offset: 0x94
	// Line 1151, Address: 0x10291f4, Func Offset: 0xa4
	// Line 1152, Address: 0x1029208, Func Offset: 0xb8
	// Line 1153, Address: 0x1029224, Func Offset: 0xd4
	// Line 1156, Address: 0x102922c, Func Offset: 0xdc
	// Line 1161, Address: 0x102924c, Func Offset: 0xfc
	// Func End, Address: 0x102925c, Func Offset: 0x10c
}

// 
// Start address: 0x1029260
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1165, Address: 0x1029260, Func Offset: 0
	// Line 1169, Address: 0x1029270, Func Offset: 0x10
	// Line 1170, Address: 0x102927c, Func Offset: 0x1c
	// Line 1171, Address: 0x102928c, Func Offset: 0x2c
	// Line 1173, Address: 0x1029298, Func Offset: 0x38
	// Line 1174, Address: 0x10292a0, Func Offset: 0x40
	// Line 1175, Address: 0x10292a8, Func Offset: 0x48
	// Line 1177, Address: 0x10292b4, Func Offset: 0x54
	// Line 1178, Address: 0x10292c0, Func Offset: 0x60
	// Line 1179, Address: 0x10292d4, Func Offset: 0x74
	// Line 1180, Address: 0x10292e0, Func Offset: 0x80
	// Line 1181, Address: 0x10292f4, Func Offset: 0x94
	// Line 1182, Address: 0x1029304, Func Offset: 0xa4
	// Line 1183, Address: 0x1029318, Func Offset: 0xb8
	// Line 1184, Address: 0x1029334, Func Offset: 0xd4
	// Line 1187, Address: 0x102933c, Func Offset: 0xdc
	// Line 1192, Address: 0x102935c, Func Offset: 0xfc
	// Func End, Address: 0x102936c, Func Offset: 0x10c
}

// 
// Start address: 0x1029370
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1204, Address: 0x1029370, Func Offset: 0
	// Line 1208, Address: 0x1029380, Func Offset: 0x10
	// Line 1209, Address: 0x102938c, Func Offset: 0x1c
	// Line 1210, Address: 0x102939c, Func Offset: 0x2c
	// Line 1212, Address: 0x10293a8, Func Offset: 0x38
	// Line 1213, Address: 0x10293b0, Func Offset: 0x40
	// Line 1214, Address: 0x10293b8, Func Offset: 0x48
	// Line 1216, Address: 0x10293c4, Func Offset: 0x54
	// Line 1217, Address: 0x10293d0, Func Offset: 0x60
	// Line 1218, Address: 0x10293e4, Func Offset: 0x74
	// Line 1219, Address: 0x10293f0, Func Offset: 0x80
	// Line 1220, Address: 0x1029404, Func Offset: 0x94
	// Line 1221, Address: 0x1029414, Func Offset: 0xa4
	// Line 1222, Address: 0x1029428, Func Offset: 0xb8
	// Line 1223, Address: 0x1029444, Func Offset: 0xd4
	// Line 1226, Address: 0x102944c, Func Offset: 0xdc
	// Line 1231, Address: 0x102946c, Func Offset: 0xfc
	// Func End, Address: 0x102947c, Func Offset: 0x10c
}

// 
// Start address: 0x1029480
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1246, Address: 0x1029480, Func Offset: 0
	// Line 1252, Address: 0x102949c, Func Offset: 0x1c
	// Line 1253, Address: 0x10294a0, Func Offset: 0x20
	// Line 1254, Address: 0x10294ac, Func Offset: 0x2c
	// Line 1255, Address: 0x10294b8, Func Offset: 0x38
	// Line 1256, Address: 0x10294c0, Func Offset: 0x40
	// Line 1257, Address: 0x10294c8, Func Offset: 0x48
	// Line 1265, Address: 0x10294dc, Func Offset: 0x5c
	// Func End, Address: 0x1029500, Func Offset: 0x80
}

// 
// Start address: 0x1029500
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
	// Line 1278, Address: 0x1029500, Func Offset: 0
	// Line 1287, Address: 0x1029520, Func Offset: 0x20
	// Line 1288, Address: 0x1029524, Func Offset: 0x24
	// Line 1289, Address: 0x1029530, Func Offset: 0x30
	// Line 1290, Address: 0x102953c, Func Offset: 0x3c
	// Line 1291, Address: 0x1029544, Func Offset: 0x44
	// Line 1292, Address: 0x102954c, Func Offset: 0x4c
	// Line 1294, Address: 0x1029560, Func Offset: 0x60
	// Line 1295, Address: 0x1029564, Func Offset: 0x64
	// Line 1296, Address: 0x1029570, Func Offset: 0x70
	// Line 1297, Address: 0x102957c, Func Offset: 0x7c
	// Line 1298, Address: 0x1029584, Func Offset: 0x84
	// Line 1300, Address: 0x102958c, Func Offset: 0x8c
	// Line 1301, Address: 0x1029598, Func Offset: 0x98
	// Line 1302, Address: 0x10295ac, Func Offset: 0xac
	// Line 1304, Address: 0x10295b8, Func Offset: 0xb8
	// Line 1305, Address: 0x10295c0, Func Offset: 0xc0
	// Line 1307, Address: 0x10295c8, Func Offset: 0xc8
	// Line 1309, Address: 0x10295e8, Func Offset: 0xe8
	// Line 1315, Address: 0x1029614, Func Offset: 0x114
	// Line 1316, Address: 0x1029628, Func Offset: 0x128
	// Line 1318, Address: 0x1029634, Func Offset: 0x134
	// Line 1319, Address: 0x102963c, Func Offset: 0x13c
	// Line 1320, Address: 0x1029644, Func Offset: 0x144
	// Line 1322, Address: 0x1029664, Func Offset: 0x164
	// Line 1328, Address: 0x1029690, Func Offset: 0x190
	// Line 1329, Address: 0x10296a4, Func Offset: 0x1a4
	// Line 1331, Address: 0x10296b0, Func Offset: 0x1b0
	// Line 1332, Address: 0x10296b8, Func Offset: 0x1b8
	// Line 1333, Address: 0x10296c0, Func Offset: 0x1c0
	// Line 1335, Address: 0x10296e0, Func Offset: 0x1e0
	// Line 1341, Address: 0x102970c, Func Offset: 0x20c
	// Line 1342, Address: 0x1029720, Func Offset: 0x220
	// Line 1344, Address: 0x102972c, Func Offset: 0x22c
	// Line 1345, Address: 0x1029734, Func Offset: 0x234
	// Line 1346, Address: 0x102973c, Func Offset: 0x23c
	// Line 1348, Address: 0x102975c, Func Offset: 0x25c
	// Line 1357, Address: 0x1029788, Func Offset: 0x288
	// Func End, Address: 0x10297b0, Func Offset: 0x2b0
}

// 
// Start address: 0x10297b0
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
	// Line 1374, Address: 0x10297b0, Func Offset: 0
	// Line 1385, Address: 0x10297dc, Func Offset: 0x2c
	// Line 1387, Address: 0x10297e4, Func Offset: 0x34
	// Line 1388, Address: 0x10297fc, Func Offset: 0x4c
	// Line 1389, Address: 0x1029810, Func Offset: 0x60
	// Line 1391, Address: 0x1029818, Func Offset: 0x68
	// Line 1393, Address: 0x102982c, Func Offset: 0x7c
	// Line 1394, Address: 0x1029844, Func Offset: 0x94
	// Line 1395, Address: 0x1029858, Func Offset: 0xa8
	// Line 1396, Address: 0x1029860, Func Offset: 0xb0
	// Line 1398, Address: 0x1029868, Func Offset: 0xb8
	// Line 1399, Address: 0x102987c, Func Offset: 0xcc
	// Line 1404, Address: 0x1029884, Func Offset: 0xd4
	// Line 1405, Address: 0x10298d4, Func Offset: 0x124
	// Line 1406, Address: 0x10298dc, Func Offset: 0x12c
	// Line 1412, Address: 0x10298fc, Func Offset: 0x14c
	// Line 1413, Address: 0x102991c, Func Offset: 0x16c
	// Line 1414, Address: 0x1029940, Func Offset: 0x190
	// Line 1415, Address: 0x102994c, Func Offset: 0x19c
	// Line 1416, Address: 0x1029954, Func Offset: 0x1a4
	// Line 1418, Address: 0x1029974, Func Offset: 0x1c4
	// Line 1422, Address: 0x10299a0, Func Offset: 0x1f0
	// Line 1425, Address: 0x10299a8, Func Offset: 0x1f8
	// Line 1426, Address: 0x10299ac, Func Offset: 0x1fc
	// Line 1430, Address: 0x10299cc, Func Offset: 0x21c
	// Line 1437, Address: 0x10299f8, Func Offset: 0x248
	// Line 1444, Address: 0x1029a0c, Func Offset: 0x25c
	// Line 1445, Address: 0x1029a14, Func Offset: 0x264
	// Line 1446, Address: 0x1029a1c, Func Offset: 0x26c
	// Line 1447, Address: 0x1029a34, Func Offset: 0x284
	// Line 1448, Address: 0x1029a54, Func Offset: 0x2a4
	// Line 1452, Address: 0x1029a5c, Func Offset: 0x2ac
	// Line 1454, Address: 0x1029a8c, Func Offset: 0x2dc
	// Line 1455, Address: 0x1029a98, Func Offset: 0x2e8
	// Line 1459, Address: 0x1029aa8, Func Offset: 0x2f8
	// Line 1460, Address: 0x1029ab4, Func Offset: 0x304
	// Line 1461, Address: 0x1029ad4, Func Offset: 0x324
	// Line 1462, Address: 0x1029b00, Func Offset: 0x350
	// Line 1463, Address: 0x1029b20, Func Offset: 0x370
	// Line 1465, Address: 0x1029b44, Func Offset: 0x394
	// Line 1468, Address: 0x1029b68, Func Offset: 0x3b8
	// Line 1470, Address: 0x1029b88, Func Offset: 0x3d8
	// Line 1472, Address: 0x1029b9c, Func Offset: 0x3ec
	// Line 1473, Address: 0x1029ba8, Func Offset: 0x3f8
	// Line 1474, Address: 0x1029bb8, Func Offset: 0x408
	// Line 1476, Address: 0x1029bc0, Func Offset: 0x410
	// Func End, Address: 0x1029be8, Func Offset: 0x438
}

// 
// Start address: 0x1029bf0
void scrollwrtc()
{
	// Line 1484, Address: 0x1029bf0, Func Offset: 0
	// Func End, Address: 0x1029bf8, Func Offset: 0x8
}

// 
// Start address: 0x1029c00
void scrollwrtz()
{
	// Line 1489, Address: 0x1029c00, Func Offset: 0
	// Func End, Address: 0x1029c08, Func Offset: 0x8
}

// 
// Start address: 0x1029c10
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1510, Address: 0x1029c10, Func Offset: 0
	// Line 1523, Address: 0x1029c38, Func Offset: 0x28
	// Line 1526, Address: 0x1029c58, Func Offset: 0x48
	// Line 1527, Address: 0x1029c6c, Func Offset: 0x5c
	// Line 1528, Address: 0x1029c80, Func Offset: 0x70
	// Line 1529, Address: 0x1029c94, Func Offset: 0x84
	// Line 1531, Address: 0x1029ca8, Func Offset: 0x98
	// Line 1532, Address: 0x1029cb4, Func Offset: 0xa4
	// Line 1533, Address: 0x1029cc8, Func Offset: 0xb8
	// Func End, Address: 0x1029cd8, Func Offset: 0xc8
}

// 
// Start address: 0x1029ce0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1537, Address: 0x1029ce0, Func Offset: 0
	// Line 1541, Address: 0x1029d08, Func Offset: 0x28
	// Line 1544, Address: 0x1029d28, Func Offset: 0x48
	// Line 1545, Address: 0x1029d3c, Func Offset: 0x5c
	// Line 1546, Address: 0x1029d50, Func Offset: 0x70
	// Line 1547, Address: 0x1029d64, Func Offset: 0x84
	// Line 1549, Address: 0x1029d78, Func Offset: 0x98
	// Line 1550, Address: 0x1029d84, Func Offset: 0xa4
	// Line 1551, Address: 0x1029d98, Func Offset: 0xb8
	// Func End, Address: 0x1029da8, Func Offset: 0xc8
}

// 
// Start address: 0x1029db0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1570, Address: 0x1029db0, Func Offset: 0
	// Line 1574, Address: 0x1029dd8, Func Offset: 0x28
	// Line 1577, Address: 0x1029df8, Func Offset: 0x48
	// Line 1578, Address: 0x1029e0c, Func Offset: 0x5c
	// Line 1579, Address: 0x1029e1c, Func Offset: 0x6c
	// Line 1580, Address: 0x1029e30, Func Offset: 0x80
	// Line 1582, Address: 0x1029e40, Func Offset: 0x90
	// Line 1583, Address: 0x1029e4c, Func Offset: 0x9c
	// Line 1584, Address: 0x1029e60, Func Offset: 0xb0
	// Func End, Address: 0x1029e70, Func Offset: 0xc0
}

// 
// Start address: 0x1029e70
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
	// Line 1603, Address: 0x1029e70, Func Offset: 0
	// Line 1609, Address: 0x1029ea4, Func Offset: 0x34
	// Line 1611, Address: 0x1029eb4, Func Offset: 0x44
	// Line 1612, Address: 0x1029eb8, Func Offset: 0x48
	// Line 1613, Address: 0x1029ec0, Func Offset: 0x50
	// Line 1615, Address: 0x1029ed0, Func Offset: 0x60
	// Line 1617, Address: 0x1029ed4, Func Offset: 0x64
	// Line 1618, Address: 0x1029edc, Func Offset: 0x6c
	// Line 1621, Address: 0x1029ee4, Func Offset: 0x74
	// Line 1622, Address: 0x1029eec, Func Offset: 0x7c
	// Line 1623, Address: 0x1029ef8, Func Offset: 0x88
	// Line 1625, Address: 0x1029f04, Func Offset: 0x94
	// Line 1626, Address: 0x1029f0c, Func Offset: 0x9c
	// Line 1627, Address: 0x1029f14, Func Offset: 0xa4
	// Line 1628, Address: 0x1029f1c, Func Offset: 0xac
	// Line 1630, Address: 0x1029f28, Func Offset: 0xb8
	// Line 1631, Address: 0x1029f30, Func Offset: 0xc0
	// Line 1632, Address: 0x1029f38, Func Offset: 0xc8
	// Line 1633, Address: 0x1029f40, Func Offset: 0xd0
	// Line 1635, Address: 0x1029f4c, Func Offset: 0xdc
	// Line 1636, Address: 0x1029f54, Func Offset: 0xe4
	// Line 1637, Address: 0x1029f5c, Func Offset: 0xec
	// Line 1640, Address: 0x1029f64, Func Offset: 0xf4
	// Line 1641, Address: 0x1029f6c, Func Offset: 0xfc
	// Line 1644, Address: 0x1029f74, Func Offset: 0x104
	// Line 1645, Address: 0x1029fb8, Func Offset: 0x148
	// Line 1646, Address: 0x1029ffc, Func Offset: 0x18c
	// Line 1647, Address: 0x102a040, Func Offset: 0x1d0
	// Line 1649, Address: 0x102a084, Func Offset: 0x214
	// Func End, Address: 0x102a0b4, Func Offset: 0x244
}

// 
// Start address: 0x102a0c0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1667, Address: 0x102a0c0, Func Offset: 0
	// Line 1668, Address: 0x102a0e0, Func Offset: 0x20
	// Line 1669, Address: 0x102a100, Func Offset: 0x40
	// Func End, Address: 0x102a110, Func Offset: 0x50
}

// 
// Start address: 0x102a110
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1671, Address: 0x102a110, Func Offset: 0
	// Line 1672, Address: 0x102a130, Func Offset: 0x20
	// Line 1673, Address: 0x102a134, Func Offset: 0x24
	// Line 1674, Address: 0x102a154, Func Offset: 0x44
	// Func End, Address: 0x102a164, Func Offset: 0x54
}

// 
// Start address: 0x102a170
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1681, Address: 0x102a170, Func Offset: 0
	// Line 1687, Address: 0x102a1a0, Func Offset: 0x30
	// Line 1688, Address: 0x102a1b0, Func Offset: 0x40
	// Line 1694, Address: 0x102a1c0, Func Offset: 0x50
	// Line 1695, Address: 0x102a1dc, Func Offset: 0x6c
	// Line 1696, Address: 0x102a1e0, Func Offset: 0x70
	// Line 1697, Address: 0x102a1fc, Func Offset: 0x8c
	// Line 1698, Address: 0x102a200, Func Offset: 0x90
	// Line 1699, Address: 0x102a220, Func Offset: 0xb0
	// Line 1700, Address: 0x102a228, Func Offset: 0xb8
	// Line 1701, Address: 0x102a248, Func Offset: 0xd8
	// Line 1702, Address: 0x102a250, Func Offset: 0xe0
	// Line 1703, Address: 0x102a298, Func Offset: 0x128
	// Line 1705, Address: 0x102a2a4, Func Offset: 0x134
	// Line 1707, Address: 0x102a2c0, Func Offset: 0x150
	// Line 1712, Address: 0x102a2c8, Func Offset: 0x158
	// Line 1713, Address: 0x102a2d4, Func Offset: 0x164
	// Line 1716, Address: 0x102a2e0, Func Offset: 0x170
	// Line 1717, Address: 0x102a2e8, Func Offset: 0x178
	// Line 1718, Address: 0x102a308, Func Offset: 0x198
	// Line 1719, Address: 0x102a324, Func Offset: 0x1b4
	// Line 1720, Address: 0x102a32c, Func Offset: 0x1bc
	// Line 1721, Address: 0x102a34c, Func Offset: 0x1dc
	// Line 1723, Address: 0x102a368, Func Offset: 0x1f8
	// Line 1724, Address: 0x102a370, Func Offset: 0x200
	// Line 1725, Address: 0x102a378, Func Offset: 0x208
	// Line 1726, Address: 0x102a384, Func Offset: 0x214
	// Line 1727, Address: 0x102a39c, Func Offset: 0x22c
	// Line 1729, Address: 0x102a3ac, Func Offset: 0x23c
	// Line 1732, Address: 0x102a3b8, Func Offset: 0x248
	// Line 1733, Address: 0x102a3c0, Func Offset: 0x250
	// Line 1734, Address: 0x102a3c4, Func Offset: 0x254
	// Func End, Address: 0x102a3e4, Func Offset: 0x274
}

// 
// Start address: 0x102a3f0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1754, Address: 0x102a3f0, Func Offset: 0
	// Line 1762, Address: 0x102a418, Func Offset: 0x28
	// Line 1763, Address: 0x102a47c, Func Offset: 0x8c
	// Line 1769, Address: 0x102a484, Func Offset: 0x94
	// Line 1770, Address: 0x102a48c, Func Offset: 0x9c
	// Line 1771, Address: 0x102a4ac, Func Offset: 0xbc
	// Line 1772, Address: 0x102a4c8, Func Offset: 0xd8
	// Line 1773, Address: 0x102a4d0, Func Offset: 0xe0
	// Line 1774, Address: 0x102a4f0, Func Offset: 0x100
	// Line 1777, Address: 0x102a50c, Func Offset: 0x11c
	// Line 1778, Address: 0x102a514, Func Offset: 0x124
	// Line 1779, Address: 0x102a51c, Func Offset: 0x12c
	// Line 1780, Address: 0x102a528, Func Offset: 0x138
	// Line 1781, Address: 0x102a540, Func Offset: 0x150
	// Line 1782, Address: 0x102a548, Func Offset: 0x158
	// Line 1787, Address: 0x102a558, Func Offset: 0x168
	// Line 1790, Address: 0x102a564, Func Offset: 0x174
	// Line 1791, Address: 0x102a56c, Func Offset: 0x17c
	// Line 1792, Address: 0x102a570, Func Offset: 0x180
	// Func End, Address: 0x102a58c, Func Offset: 0x19c
}

// 
// Start address: 0x102a590
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1806, Address: 0x102a590, Func Offset: 0
	// Line 1813, Address: 0x102a5ac, Func Offset: 0x1c
	// Line 1814, Address: 0x102a5b0, Func Offset: 0x20
	// Line 1815, Address: 0x102a5b8, Func Offset: 0x28
	// Line 1816, Address: 0x102a5dc, Func Offset: 0x4c
	// Line 1817, Address: 0x102a5e8, Func Offset: 0x58
	// Line 1818, Address: 0x102a600, Func Offset: 0x70
	// Line 1819, Address: 0x102a614, Func Offset: 0x84
	// Line 1824, Address: 0x102a62c, Func Offset: 0x9c
	// Func End, Address: 0x102a644, Func Offset: 0xb4
}

// 
// Start address: 0x102a650
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1838, Address: 0x102a650, Func Offset: 0
	// Line 1839, Address: 0x102a65c, Func Offset: 0xc
	// Line 1840, Address: 0x102a688, Func Offset: 0x38
	// Line 1841, Address: 0x102a6d4, Func Offset: 0x84
	// Line 1842, Address: 0x102a700, Func Offset: 0xb0
	// Line 1844, Address: 0x102a74c, Func Offset: 0xfc
	// Line 1850, Address: 0x102a758, Func Offset: 0x108
	// Line 1851, Address: 0x102a75c, Func Offset: 0x10c
	// Func End, Address: 0x102a768, Func Offset: 0x118
}

// 
// Start address: 0x102a770
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1868, Address: 0x102a770, Func Offset: 0
	// Line 1869, Address: 0x102a78c, Func Offset: 0x1c
	// Line 1871, Address: 0x102a7a8, Func Offset: 0x38
	// Func End, Address: 0x102a7b8, Func Offset: 0x48
}

// 
// Start address: 0x102a7c0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1873, Address: 0x102a7c0, Func Offset: 0
	// Line 1874, Address: 0x102a7dc, Func Offset: 0x1c
	// Line 1875, Address: 0x102a7e0, Func Offset: 0x20
	// Line 1877, Address: 0x102a7fc, Func Offset: 0x3c
	// Func End, Address: 0x102a80c, Func Offset: 0x4c
}

// 
// Start address: 0x102a810
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1879, Address: 0x102a810, Func Offset: 0
	// Line 1880, Address: 0x102a824, Func Offset: 0x14
	// Line 1882, Address: 0x102a840, Func Offset: 0x30
	// Func End, Address: 0x102a850, Func Offset: 0x40
}

// 
// Start address: 0x102a850
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1884, Address: 0x102a850, Func Offset: 0
	// Line 1885, Address: 0x102a86c, Func Offset: 0x1c
	// Line 1887, Address: 0x102a888, Func Offset: 0x38
	// Func End, Address: 0x102a898, Func Offset: 0x48
}

// 
// Start address: 0x102a8a0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1889, Address: 0x102a8a0, Func Offset: 0
	// Line 1890, Address: 0x102a8b8, Func Offset: 0x18
	// Line 1891, Address: 0x102a8c8, Func Offset: 0x28
	// Line 1892, Address: 0x102a8d8, Func Offset: 0x38
	// Line 1893, Address: 0x102a8e4, Func Offset: 0x44
	// Line 1895, Address: 0x102a8f0, Func Offset: 0x50
	// Line 1896, Address: 0x102a91c, Func Offset: 0x7c
	// Line 1899, Address: 0x102a948, Func Offset: 0xa8
	// Func End, Address: 0x102a954, Func Offset: 0xb4
}

// 
// Start address: 0x102a960
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1915, Address: 0x102a960, Func Offset: 0
	// Line 1920, Address: 0x102a978, Func Offset: 0x18
	// Line 1921, Address: 0x102a984, Func Offset: 0x24
	// Line 1922, Address: 0x102a990, Func Offset: 0x30
	// Line 1923, Address: 0x102a998, Func Offset: 0x38
	// Line 1924, Address: 0x102a99c, Func Offset: 0x3c
	// Line 1928, Address: 0x102a9b4, Func Offset: 0x54
	// Line 1929, Address: 0x102a9bc, Func Offset: 0x5c
	// Line 1930, Address: 0x102a9c0, Func Offset: 0x60
	// Line 1932, Address: 0x102a9d0, Func Offset: 0x70
	// Func End, Address: 0x102a9f0, Func Offset: 0x90
}

// 
// Start address: 0x102a9f0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1935, Address: 0x102a9f0, Func Offset: 0
	// Line 1936, Address: 0x102aa08, Func Offset: 0x18
	// Line 1937, Address: 0x102aa28, Func Offset: 0x38
	// Func End, Address: 0x102aa38, Func Offset: 0x48
}

// 
// Start address: 0x102aa40
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1942, Address: 0x102aa40, Func Offset: 0
	// Line 1946, Address: 0x102aa60, Func Offset: 0x20
	// Line 1949, Address: 0x102aa7c, Func Offset: 0x3c
	// Line 1953, Address: 0x102aaa4, Func Offset: 0x64
	// Line 1954, Address: 0x102aab0, Func Offset: 0x70
	// Line 1956, Address: 0x102aad8, Func Offset: 0x98
	// Func End, Address: 0x102aae8, Func Offset: 0xa8
}

// 
// Start address: 0x102aaf0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1961, Address: 0x102aaf0, Func Offset: 0
	// Line 1964, Address: 0x102ab0c, Func Offset: 0x1c
	// Line 1965, Address: 0x102ab14, Func Offset: 0x24
	// Line 1968, Address: 0x102ab1c, Func Offset: 0x2c
	// Line 1970, Address: 0x102ab40, Func Offset: 0x50
	// Line 1971, Address: 0x102ab60, Func Offset: 0x70
	// Line 1972, Address: 0x102ab68, Func Offset: 0x78
	// Line 1973, Address: 0x102ab8c, Func Offset: 0x9c
	// Func End, Address: 0x102aba8, Func Offset: 0xb8
}

// 
// Start address: 0x102abb0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1999, Address: 0x102abb0, Func Offset: 0
	// Line 2004, Address: 0x102abd8, Func Offset: 0x28
	// Line 2005, Address: 0x102abe8, Func Offset: 0x38
	// Line 2007, Address: 0x102ac04, Func Offset: 0x54
	// Line 2008, Address: 0x102ac28, Func Offset: 0x78
	// Line 2009, Address: 0x102ac50, Func Offset: 0xa0
	// Line 2010, Address: 0x102ac5c, Func Offset: 0xac
	// Line 2011, Address: 0x102ac64, Func Offset: 0xb4
	// Line 2014, Address: 0x102ac80, Func Offset: 0xd0
	// Line 2018, Address: 0x102aca8, Func Offset: 0xf8
	// Line 2021, Address: 0x102acb0, Func Offset: 0x100
	// Line 2022, Address: 0x102acb4, Func Offset: 0x104
	// Line 2026, Address: 0x102acd0, Func Offset: 0x120
	// Line 2033, Address: 0x102acf8, Func Offset: 0x148
	// Func End, Address: 0x102ad14, Func Offset: 0x164
}

// 
// Start address: 0x102ad20
void mapinit()
{
	// Line 2038, Address: 0x102ad20, Func Offset: 0
	// Line 2044, Address: 0x102ad28, Func Offset: 0x8
	// Line 2047, Address: 0x102ad30, Func Offset: 0x10
	// Line 2048, Address: 0x102ad44, Func Offset: 0x24
	// Line 2055, Address: 0x102ad58, Func Offset: 0x38
	// Line 2056, Address: 0x102ad6c, Func Offset: 0x4c
	// Line 2059, Address: 0x102ad74, Func Offset: 0x54
	// Line 2061, Address: 0x102ad8c, Func Offset: 0x6c
	// Line 2065, Address: 0x102ad94, Func Offset: 0x74
	// Func End, Address: 0x102ada4, Func Offset: 0x84
}

// 
// Start address: 0x102adb0
void mapset()
{
	// Line 2075, Address: 0x102adb0, Func Offset: 0
	// Func End, Address: 0x102adb8, Func Offset: 0x8
}

