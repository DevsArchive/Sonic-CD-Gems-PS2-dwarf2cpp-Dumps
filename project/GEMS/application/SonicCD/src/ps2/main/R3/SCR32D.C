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
typedef int type_9[16];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[16];
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

unsigned char z32dwrttbl[49];
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
// Start address: 0x1026fe0
void enecginit()
{
	// Line 111, Address: 0x1026fe0, Func Offset: 0
	// Func End, Address: 0x1026fe8, Func Offset: 0x8
}

// 
// Start address: 0x1026ff0
void divdevset()
{
	// Line 115, Address: 0x1026ff0, Func Offset: 0
	// Func End, Address: 0x1026ff8, Func Offset: 0x8
}

// 
// Start address: 0x1027000
_anon1* main_chk()
{
	// Line 169, Address: 0x1027000, Func Offset: 0
	// Line 170, Address: 0x1027014, Func Offset: 0x14
	// Line 172, Address: 0x1027024, Func Offset: 0x24
	// Line 173, Address: 0x102702c, Func Offset: 0x2c
	// Func End, Address: 0x1027034, Func Offset: 0x34
}

// 
// Start address: 0x1027040
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 186, Address: 0x1027040, Func Offset: 0
	// Line 192, Address: 0x102704c, Func Offset: 0xc
	// Line 197, Address: 0x1027080, Func Offset: 0x40
	// Line 199, Address: 0x10270c8, Func Offset: 0x88
	// Line 200, Address: 0x10270cc, Func Offset: 0x8c
	// Line 201, Address: 0x10270e8, Func Offset: 0xa8
	// Line 202, Address: 0x10270fc, Func Offset: 0xbc
	// Line 203, Address: 0x1027118, Func Offset: 0xd8
	// Line 204, Address: 0x102712c, Func Offset: 0xec
	// Line 205, Address: 0x1027148, Func Offset: 0x108
	// Line 206, Address: 0x102715c, Func Offset: 0x11c
	// Line 207, Address: 0x1027178, Func Offset: 0x138
	// Line 208, Address: 0x102718c, Func Offset: 0x14c
	// Line 210, Address: 0x10271a8, Func Offset: 0x168
	// Line 211, Address: 0x10271cc, Func Offset: 0x18c
	// Line 212, Address: 0x10271d8, Func Offset: 0x198
	// Line 214, Address: 0x10271e4, Func Offset: 0x1a4
	// Line 215, Address: 0x1027200, Func Offset: 0x1c0
	// Line 217, Address: 0x102720c, Func Offset: 0x1cc
	// Line 218, Address: 0x1027214, Func Offset: 0x1d4
	// Func End, Address: 0x1027228, Func Offset: 0x1e8
}

// 
// Start address: 0x1027230
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 230, Address: 0x1027230, Func Offset: 0
	// Line 231, Address: 0x1027248, Func Offset: 0x18
	// Line 235, Address: 0x1027264, Func Offset: 0x34
	// Line 245, Address: 0x1027298, Func Offset: 0x68
	// Line 255, Address: 0x10272c4, Func Offset: 0x94
	// Line 256, Address: 0x10272d8, Func Offset: 0xa8
	// Line 257, Address: 0x10272e0, Func Offset: 0xb0
	// Line 258, Address: 0x10272f0, Func Offset: 0xc0
	// Line 260, Address: 0x1027300, Func Offset: 0xd0
	// Line 262, Address: 0x1027314, Func Offset: 0xe4
	// Line 265, Address: 0x102731c, Func Offset: 0xec
	// Line 266, Address: 0x1027334, Func Offset: 0x104
	// Line 267, Address: 0x102735c, Func Offset: 0x12c
	// Line 270, Address: 0x1027364, Func Offset: 0x134
	// Line 273, Address: 0x1027384, Func Offset: 0x154
	// Line 274, Address: 0x10273a0, Func Offset: 0x170
	// Line 278, Address: 0x10273b4, Func Offset: 0x184
	// Line 279, Address: 0x10273c8, Func Offset: 0x198
	// Line 280, Address: 0x10273d4, Func Offset: 0x1a4
	// Line 282, Address: 0x10273dc, Func Offset: 0x1ac
	// Line 286, Address: 0x10273e0, Func Offset: 0x1b0
	// Line 287, Address: 0x1027404, Func Offset: 0x1d4
	// Line 289, Address: 0x1027414, Func Offset: 0x1e4
	// Line 291, Address: 0x102741c, Func Offset: 0x1ec
	// Line 292, Address: 0x1027430, Func Offset: 0x200
	// Line 293, Address: 0x102743c, Func Offset: 0x20c
	// Line 295, Address: 0x1027444, Func Offset: 0x214
	// Line 298, Address: 0x1027448, Func Offset: 0x218
	// Line 299, Address: 0x102746c, Func Offset: 0x23c
	// Line 302, Address: 0x102747c, Func Offset: 0x24c
	// Line 304, Address: 0x1027484, Func Offset: 0x254
	// Line 306, Address: 0x1027494, Func Offset: 0x264
	// Line 307, Address: 0x1027498, Func Offset: 0x268
	// Line 308, Address: 0x10274b0, Func Offset: 0x280
	// Line 309, Address: 0x10274c8, Func Offset: 0x298
	// Line 310, Address: 0x10274e0, Func Offset: 0x2b0
	// Line 313, Address: 0x10274f8, Func Offset: 0x2c8
	// Func End, Address: 0x1027518, Func Offset: 0x2e8
}

// 
// Start address: 0x1027520
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 325, Address: 0x1027520, Func Offset: 0
	// Line 330, Address: 0x1027534, Func Offset: 0x14
	// Line 331, Address: 0x102753c, Func Offset: 0x1c
	// Line 332, Address: 0x1027564, Func Offset: 0x44
	// Line 333, Address: 0x1027580, Func Offset: 0x60
	// Line 334, Address: 0x10275b4, Func Offset: 0x94
	// Line 335, Address: 0x10275c8, Func Offset: 0xa8
	// Line 339, Address: 0x10275cc, Func Offset: 0xac
	// Line 340, Address: 0x10275d8, Func Offset: 0xb8
	// Line 341, Address: 0x10275e0, Func Offset: 0xc0
	// Line 342, Address: 0x10275ec, Func Offset: 0xcc
	// Line 344, Address: 0x10275f8, Func Offset: 0xd8
	// Line 345, Address: 0x1027630, Func Offset: 0x110
	// Line 346, Address: 0x1027670, Func Offset: 0x150
	// Line 349, Address: 0x10276b0, Func Offset: 0x190
	// Line 350, Address: 0x10276bc, Func Offset: 0x19c
	// Line 351, Address: 0x10276d0, Func Offset: 0x1b0
	// Line 353, Address: 0x10276e0, Func Offset: 0x1c0
	// Func End, Address: 0x10276f4, Func Offset: 0x1d4
}

// 
// Start address: 0x1027700
void scroll()
{
	int LineSpdTbl[16];
	unsigned char z32d_cnttbl[16];
	unsigned char z32d_cnttbl1[3];
	unsigned short z32d_kawatbl[3];
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
	// Line 366, Address: 0x1027700, Func Offset: 0
	// Line 367, Address: 0x1027720, Func Offset: 0x20
	// Line 374, Address: 0x1027754, Func Offset: 0x54
	// Line 377, Address: 0x1027788, Func Offset: 0x88
	// Line 380, Address: 0x10277ac, Func Offset: 0xac
	// Line 390, Address: 0x10277d0, Func Offset: 0xd0
	// Line 393, Address: 0x10277e0, Func Offset: 0xe0
	// Line 394, Address: 0x102780c, Func Offset: 0x10c
	// Line 395, Address: 0x1027818, Func Offset: 0x118
	// Line 396, Address: 0x1027824, Func Offset: 0x124
	// Line 398, Address: 0x1027830, Func Offset: 0x130
	// Line 399, Address: 0x1027840, Func Offset: 0x140
	// Line 402, Address: 0x1027850, Func Offset: 0x150
	// Line 403, Address: 0x1027874, Func Offset: 0x174
	// Line 404, Address: 0x10278ac, Func Offset: 0x1ac
	// Line 406, Address: 0x10278e4, Func Offset: 0x1e4
	// Line 407, Address: 0x10278ec, Func Offset: 0x1ec
	// Line 408, Address: 0x10278f8, Func Offset: 0x1f8
	// Line 410, Address: 0x1027918, Func Offset: 0x218
	// Line 411, Address: 0x102792c, Func Offset: 0x22c
	// Line 412, Address: 0x1027934, Func Offset: 0x234
	// Line 413, Address: 0x1027948, Func Offset: 0x248
	// Line 414, Address: 0x102795c, Func Offset: 0x25c
	// Line 416, Address: 0x1027960, Func Offset: 0x260
	// Line 418, Address: 0x1027968, Func Offset: 0x268
	// Line 421, Address: 0x1027980, Func Offset: 0x280
	// Line 422, Address: 0x1027994, Func Offset: 0x294
	// Line 423, Address: 0x10279a4, Func Offset: 0x2a4
	// Line 424, Address: 0x10279b4, Func Offset: 0x2b4
	// Line 426, Address: 0x10279c4, Func Offset: 0x2c4
	// Line 427, Address: 0x10279e0, Func Offset: 0x2e0
	// Line 428, Address: 0x10279fc, Func Offset: 0x2fc
	// Line 429, Address: 0x1027a04, Func Offset: 0x304
	// Line 452, Address: 0x1027a0c, Func Offset: 0x30c
	// Line 453, Address: 0x1027a14, Func Offset: 0x314
	// Line 454, Address: 0x1027a20, Func Offset: 0x320
	// Line 455, Address: 0x1027a38, Func Offset: 0x338
	// Line 456, Address: 0x1027a3c, Func Offset: 0x33c
	// Line 457, Address: 0x1027a4c, Func Offset: 0x34c
	// Line 458, Address: 0x1027a50, Func Offset: 0x350
	// Line 459, Address: 0x1027a58, Func Offset: 0x358
	// Line 460, Address: 0x1027a7c, Func Offset: 0x37c
	// Line 461, Address: 0x1027a8c, Func Offset: 0x38c
	// Line 462, Address: 0x1027a90, Func Offset: 0x390
	// Line 463, Address: 0x1027a9c, Func Offset: 0x39c
	// Line 471, Address: 0x1027aac, Func Offset: 0x3ac
	// Line 472, Address: 0x1027ab8, Func Offset: 0x3b8
	// Line 473, Address: 0x1027ad8, Func Offset: 0x3d8
	// Line 474, Address: 0x1027afc, Func Offset: 0x3fc
	// Line 477, Address: 0x1027b10, Func Offset: 0x410
	// Line 478, Address: 0x1027b1c, Func Offset: 0x41c
	// Line 479, Address: 0x1027b30, Func Offset: 0x430
	// Line 481, Address: 0x1027b40, Func Offset: 0x440
	// Line 483, Address: 0x1027b64, Func Offset: 0x464
	// Line 484, Address: 0x1027b70, Func Offset: 0x470
	// Line 485, Address: 0x1027b84, Func Offset: 0x484
	// Line 500, Address: 0x1027b94, Func Offset: 0x494
	// Line 501, Address: 0x1027b9c, Func Offset: 0x49c
	// Line 502, Address: 0x1027ba8, Func Offset: 0x4a8
	// Line 503, Address: 0x1027bd4, Func Offset: 0x4d4
	// Line 504, Address: 0x1027bd8, Func Offset: 0x4d8
	// Line 505, Address: 0x1027bec, Func Offset: 0x4ec
	// Line 506, Address: 0x1027bfc, Func Offset: 0x4fc
	// Line 507, Address: 0x1027c08, Func Offset: 0x508
	// Line 510, Address: 0x1027c14, Func Offset: 0x514
	// Line 512, Address: 0x1027c38, Func Offset: 0x538
	// Line 513, Address: 0x1027c44, Func Offset: 0x544
	// Line 514, Address: 0x1027c58, Func Offset: 0x558
	// Line 516, Address: 0x1027c68, Func Offset: 0x568
	// Line 518, Address: 0x1027c8c, Func Offset: 0x58c
	// Line 519, Address: 0x1027c98, Func Offset: 0x598
	// Line 520, Address: 0x1027cac, Func Offset: 0x5ac
	// Line 522, Address: 0x1027cbc, Func Offset: 0x5bc
	// Line 524, Address: 0x1027ce0, Func Offset: 0x5e0
	// Line 525, Address: 0x1027cec, Func Offset: 0x5ec
	// Line 526, Address: 0x1027d00, Func Offset: 0x600
	// Line 529, Address: 0x1027d10, Func Offset: 0x610
	// Line 530, Address: 0x1027d48, Func Offset: 0x648
	// Line 531, Address: 0x1027d54, Func Offset: 0x654
	// Line 532, Address: 0x1027d74, Func Offset: 0x674
	// Line 533, Address: 0x1027d80, Func Offset: 0x680
	// Line 535, Address: 0x1027d8c, Func Offset: 0x68c
	// Line 536, Address: 0x1027d98, Func Offset: 0x698
	// Line 537, Address: 0x1027db4, Func Offset: 0x6b4
	// Line 538, Address: 0x1027dc8, Func Offset: 0x6c8
	// Line 539, Address: 0x1027ddc, Func Offset: 0x6dc
	// Line 540, Address: 0x1027de8, Func Offset: 0x6e8
	// Line 541, Address: 0x1027e0c, Func Offset: 0x70c
	// Line 542, Address: 0x1027e1c, Func Offset: 0x71c
	// Line 543, Address: 0x1027e40, Func Offset: 0x740
	// Line 545, Address: 0x1027e4c, Func Offset: 0x74c
	// Line 547, Address: 0x1027e70, Func Offset: 0x770
	// Line 548, Address: 0x1027e7c, Func Offset: 0x77c
	// Line 549, Address: 0x1027e90, Func Offset: 0x790
	// Line 551, Address: 0x1027ea0, Func Offset: 0x7a0
	// Line 552, Address: 0x1027eac, Func Offset: 0x7ac
	// Line 553, Address: 0x1027eb8, Func Offset: 0x7b8
	// Line 554, Address: 0x1027ec4, Func Offset: 0x7c4
	// Line 555, Address: 0x1027ecc, Func Offset: 0x7cc
	// Line 556, Address: 0x1027ed4, Func Offset: 0x7d4
	// Line 557, Address: 0x1027ef8, Func Offset: 0x7f8
	// Line 558, Address: 0x1027f14, Func Offset: 0x814
	// Line 559, Address: 0x1027f1c, Func Offset: 0x81c
	// Line 560, Address: 0x1027f24, Func Offset: 0x824
	// Line 562, Address: 0x1027f38, Func Offset: 0x838
	// Line 563, Address: 0x1027f40, Func Offset: 0x840
	// Line 564, Address: 0x1027f50, Func Offset: 0x850
	// Line 567, Address: 0x1027f58, Func Offset: 0x858
	// Line 568, Address: 0x1027f60, Func Offset: 0x860
	// Line 569, Address: 0x1027f84, Func Offset: 0x884
	// Line 571, Address: 0x1027f98, Func Offset: 0x898
	// Line 574, Address: 0x1027fc0, Func Offset: 0x8c0
	// Line 576, Address: 0x1027fc8, Func Offset: 0x8c8
	// Line 581, Address: 0x1027fd0, Func Offset: 0x8d0
	// Line 582, Address: 0x1027fe4, Func Offset: 0x8e4
	// Line 583, Address: 0x1027ff0, Func Offset: 0x8f0
	// Line 584, Address: 0x1028004, Func Offset: 0x904
	// Line 587, Address: 0x102801c, Func Offset: 0x91c
	// Line 588, Address: 0x1028030, Func Offset: 0x930
	// Line 589, Address: 0x1028044, Func Offset: 0x944
	// Line 590, Address: 0x1028058, Func Offset: 0x958
	// Line 591, Address: 0x1028078, Func Offset: 0x978
	// Line 592, Address: 0x1028080, Func Offset: 0x980
	// Line 593, Address: 0x10280a0, Func Offset: 0x9a0
	// Line 594, Address: 0x10280b8, Func Offset: 0x9b8
	// Line 595, Address: 0x10280c0, Func Offset: 0x9c0
	// Line 596, Address: 0x10280ec, Func Offset: 0x9ec
	// Line 597, Address: 0x1028100, Func Offset: 0xa00
	// Line 598, Address: 0x102811c, Func Offset: 0xa1c
	// Line 601, Address: 0x1028120, Func Offset: 0xa20
	// Line 602, Address: 0x102812c, Func Offset: 0xa2c
	// Line 603, Address: 0x1028138, Func Offset: 0xa38
	// Line 604, Address: 0x1028144, Func Offset: 0xa44
	// Line 605, Address: 0x102814c, Func Offset: 0xa4c
	// Line 607, Address: 0x1028170, Func Offset: 0xa70
	// Func End, Address: 0x1028198, Func Offset: 0xa98
}

// 
// Start address: 0x10281a0
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 612, Address: 0x10281a0, Func Offset: 0
	// Line 619, Address: 0x10281d4, Func Offset: 0x34
	// Line 620, Address: 0x10281f4, Func Offset: 0x54
	// Line 621, Address: 0x10281fc, Func Offset: 0x5c
	// Line 623, Address: 0x1028204, Func Offset: 0x64
	// Line 628, Address: 0x1028228, Func Offset: 0x88
	// Line 629, Address: 0x102823c, Func Offset: 0x9c
	// Line 631, Address: 0x1028268, Func Offset: 0xc8
	// Line 632, Address: 0x1028278, Func Offset: 0xd8
	// Line 633, Address: 0x102828c, Func Offset: 0xec
	// Line 636, Address: 0x1028294, Func Offset: 0xf4
	// Line 639, Address: 0x10282b0, Func Offset: 0x110
	// Line 644, Address: 0x10282d4, Func Offset: 0x134
	// Line 645, Address: 0x10282e4, Func Offset: 0x144
	// Line 648, Address: 0x10282f8, Func Offset: 0x158
	// Line 650, Address: 0x10282fc, Func Offset: 0x15c
	// Line 653, Address: 0x1028304, Func Offset: 0x164
	// Line 654, Address: 0x102830c, Func Offset: 0x16c
	// Line 655, Address: 0x1028310, Func Offset: 0x170
	// Line 656, Address: 0x1028320, Func Offset: 0x180
	// Line 661, Address: 0x1028348, Func Offset: 0x1a8
	// Line 662, Address: 0x1028350, Func Offset: 0x1b0
	// Line 663, Address: 0x1028358, Func Offset: 0x1b8
	// Line 667, Address: 0x1028360, Func Offset: 0x1c0
	// Line 668, Address: 0x1028390, Func Offset: 0x1f0
	// Line 671, Address: 0x10283a8, Func Offset: 0x208
	// Line 674, Address: 0x10283cc, Func Offset: 0x22c
	// Line 675, Address: 0x10283fc, Func Offset: 0x25c
	// Line 676, Address: 0x1028414, Func Offset: 0x274
	// Line 684, Address: 0x102841c, Func Offset: 0x27c
	// Line 685, Address: 0x102844c, Func Offset: 0x2ac
	// Line 690, Address: 0x1028464, Func Offset: 0x2c4
	// Line 691, Address: 0x102846c, Func Offset: 0x2cc
	// Line 692, Address: 0x1028470, Func Offset: 0x2d0
	// Line 695, Address: 0x1028488, Func Offset: 0x2e8
	// Line 696, Address: 0x102849c, Func Offset: 0x2fc
	// Line 697, Address: 0x10284c8, Func Offset: 0x328
	// Line 698, Address: 0x10284dc, Func Offset: 0x33c
	// Line 699, Address: 0x10284f8, Func Offset: 0x358
	// Line 700, Address: 0x1028500, Func Offset: 0x360
	// Line 701, Address: 0x1028508, Func Offset: 0x368
	// Line 702, Address: 0x102850c, Func Offset: 0x36c
	// Line 703, Address: 0x1028520, Func Offset: 0x380
	// Line 704, Address: 0x1028534, Func Offset: 0x394
	// Line 706, Address: 0x1028558, Func Offset: 0x3b8
	// Line 709, Address: 0x1028560, Func Offset: 0x3c0
	// Line 710, Address: 0x1028570, Func Offset: 0x3d0
	// Line 711, Address: 0x102857c, Func Offset: 0x3dc
	// Line 712, Address: 0x10285a0, Func Offset: 0x400
	// Line 713, Address: 0x10285a8, Func Offset: 0x408
	// Func End, Address: 0x10285c8, Func Offset: 0x428
}

// 
// Start address: 0x10285d0
void scroll_h()
{
	unsigned short wD4;
	// Line 729, Address: 0x10285d0, Func Offset: 0
	// Line 732, Address: 0x10285dc, Func Offset: 0xc
	// Line 733, Address: 0x10285e8, Func Offset: 0x18
	// Line 734, Address: 0x10285f0, Func Offset: 0x20
	// Line 735, Address: 0x1028624, Func Offset: 0x54
	// Line 736, Address: 0x1028638, Func Offset: 0x68
	// Line 737, Address: 0x1028664, Func Offset: 0x94
	// Line 738, Address: 0x1028678, Func Offset: 0xa8
	// Line 741, Address: 0x1028680, Func Offset: 0xb0
	// Line 746, Address: 0x1028694, Func Offset: 0xc4
	// Func End, Address: 0x10286a8, Func Offset: 0xd8
}

// 
// Start address: 0x10286b0
void scrh_move()
{
	unsigned short wD0;
	// Line 748, Address: 0x10286b0, Func Offset: 0
	// Line 751, Address: 0x10286bc, Func Offset: 0xc
	// Line 752, Address: 0x10286c8, Func Offset: 0x18
	// Line 753, Address: 0x10286dc, Func Offset: 0x2c
	// Line 754, Address: 0x10286f0, Func Offset: 0x40
	// Line 756, Address: 0x10286fc, Func Offset: 0x4c
	// Line 757, Address: 0x1028704, Func Offset: 0x54
	// Line 758, Address: 0x102870c, Func Offset: 0x5c
	// Line 759, Address: 0x1028724, Func Offset: 0x74
	// Line 760, Address: 0x1028730, Func Offset: 0x80
	// Line 762, Address: 0x1028738, Func Offset: 0x88
	// Line 765, Address: 0x1028744, Func Offset: 0x94
	// Func End, Address: 0x1028758, Func Offset: 0xa8
}

// 
// Start address: 0x1028760
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 768, Address: 0x1028760, Func Offset: 0
	// Line 771, Address: 0x102876c, Func Offset: 0xc
	// Line 772, Address: 0x102878c, Func Offset: 0x2c
	// Line 775, Address: 0x1028794, Func Offset: 0x34
	// Line 776, Address: 0x10287ac, Func Offset: 0x4c
	// Line 777, Address: 0x10287dc, Func Offset: 0x7c
	// Line 780, Address: 0x10287e8, Func Offset: 0x88
	// Line 781, Address: 0x10287f0, Func Offset: 0x90
	// Line 782, Address: 0x1028804, Func Offset: 0xa4
	// Line 783, Address: 0x1028834, Func Offset: 0xd4
	// Line 784, Address: 0x1028840, Func Offset: 0xe0
	// Line 786, Address: 0x1028848, Func Offset: 0xe8
	// Func End, Address: 0x1028858, Func Offset: 0xf8
}

// 
// Start address: 0x1028860
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 789, Address: 0x1028860, Func Offset: 0
	// Line 792, Address: 0x102886c, Func Offset: 0xc
	// Line 793, Address: 0x102888c, Func Offset: 0x2c
	// Line 796, Address: 0x1028894, Func Offset: 0x34
	// Line 797, Address: 0x10288ac, Func Offset: 0x4c
	// Line 798, Address: 0x10288dc, Func Offset: 0x7c
	// Line 801, Address: 0x10288e8, Func Offset: 0x88
	// Line 802, Address: 0x10288f0, Func Offset: 0x90
	// Line 803, Address: 0x1028904, Func Offset: 0xa4
	// Line 804, Address: 0x1028934, Func Offset: 0xd4
	// Line 805, Address: 0x1028940, Func Offset: 0xe0
	// Line 807, Address: 0x1028948, Func Offset: 0xe8
	// Func End, Address: 0x1028958, Func Offset: 0xf8
}

// 
// Start address: 0x1028960
void scroll_v()
{
	unsigned short wD0;
	// Line 826, Address: 0x1028960, Func Offset: 0
	// Line 829, Address: 0x102896c, Func Offset: 0xc
	// Line 830, Address: 0x1028998, Func Offset: 0x38
	// Line 831, Address: 0x10289b0, Func Offset: 0x50
	// Line 834, Address: 0x10289b8, Func Offset: 0x58
	// Line 835, Address: 0x10289d0, Func Offset: 0x70
	// Line 836, Address: 0x10289d8, Func Offset: 0x78
	// Line 837, Address: 0x10289f8, Func Offset: 0x98
	// Line 838, Address: 0x1028a0c, Func Offset: 0xac
	// Line 839, Address: 0x1028a18, Func Offset: 0xb8
	// Line 841, Address: 0x1028a20, Func Offset: 0xc0
	// Line 842, Address: 0x1028a34, Func Offset: 0xd4
	// Line 843, Address: 0x1028a44, Func Offset: 0xe4
	// Line 844, Address: 0x1028a4c, Func Offset: 0xec
	// Line 845, Address: 0x1028a58, Func Offset: 0xf8
	// Line 847, Address: 0x1028a60, Func Offset: 0x100
	// Line 848, Address: 0x1028a68, Func Offset: 0x108
	// Line 849, Address: 0x1028a7c, Func Offset: 0x11c
	// Line 850, Address: 0x1028a84, Func Offset: 0x124
	// Line 856, Address: 0x1028a8c, Func Offset: 0x12c
	// Line 857, Address: 0x1028aa0, Func Offset: 0x140
	// Line 858, Address: 0x1028aa8, Func Offset: 0x148
	// Line 859, Address: 0x1028ab4, Func Offset: 0x154
	// Line 861, Address: 0x1028abc, Func Offset: 0x15c
	// Line 862, Address: 0x1028ad0, Func Offset: 0x170
	// Line 863, Address: 0x1028ad8, Func Offset: 0x178
	// Line 868, Address: 0x1028ae0, Func Offset: 0x180
	// Line 870, Address: 0x1028ae8, Func Offset: 0x188
	// Func End, Address: 0x1028afc, Func Offset: 0x19c
}

// 
// Start address: 0x1028b00
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 876, Address: 0x1028b00, Func Offset: 0
	// Line 879, Address: 0x1028b10, Func Offset: 0x10
	// Line 880, Address: 0x1028b2c, Func Offset: 0x2c
	// Line 881, Address: 0x1028b38, Func Offset: 0x38
	// Line 884, Address: 0x1028b40, Func Offset: 0x40
	// Line 885, Address: 0x1028b4c, Func Offset: 0x4c
	// Line 886, Address: 0x1028b64, Func Offset: 0x64
	// Line 889, Address: 0x1028b80, Func Offset: 0x80
	// Line 890, Address: 0x1028b90, Func Offset: 0x90
	// Line 891, Address: 0x1028b9c, Func Offset: 0x9c
	// Line 893, Address: 0x1028ba4, Func Offset: 0xa4
	// Line 894, Address: 0x1028bc4, Func Offset: 0xc4
	// Line 895, Address: 0x1028bd0, Func Offset: 0xd0
	// Line 896, Address: 0x1028bd8, Func Offset: 0xd8
	// Line 897, Address: 0x1028bf8, Func Offset: 0xf8
	// Line 898, Address: 0x1028c04, Func Offset: 0x104
	// Line 900, Address: 0x1028c0c, Func Offset: 0x10c
	// Line 904, Address: 0x1028c18, Func Offset: 0x118
	// Func End, Address: 0x1028c2c, Func Offset: 0x12c
}

// 
// Start address: 0x1028c30
void sv_move_main1(unsigned short wD0)
{
	// Line 908, Address: 0x1028c30, Func Offset: 0
	// Line 910, Address: 0x1028c3c, Func Offset: 0xc
	// Line 911, Address: 0x1028c5c, Func Offset: 0x2c
	// Line 912, Address: 0x1028c68, Func Offset: 0x38
	// Line 913, Address: 0x1028c70, Func Offset: 0x40
	// Line 914, Address: 0x1028c90, Func Offset: 0x60
	// Line 915, Address: 0x1028c9c, Func Offset: 0x6c
	// Line 917, Address: 0x1028ca4, Func Offset: 0x74
	// Line 920, Address: 0x1028cb0, Func Offset: 0x80
	// Func End, Address: 0x1028cc0, Func Offset: 0x90
}

// 
// Start address: 0x1028cc0
void sv_move_main2(unsigned short wD0)
{
	// Line 923, Address: 0x1028cc0, Func Offset: 0
	// Line 925, Address: 0x1028ccc, Func Offset: 0xc
	// Line 926, Address: 0x1028cec, Func Offset: 0x2c
	// Line 927, Address: 0x1028cf8, Func Offset: 0x38
	// Line 928, Address: 0x1028d00, Func Offset: 0x40
	// Line 929, Address: 0x1028d20, Func Offset: 0x60
	// Line 930, Address: 0x1028d2c, Func Offset: 0x6c
	// Line 932, Address: 0x1028d34, Func Offset: 0x74
	// Line 935, Address: 0x1028d40, Func Offset: 0x80
	// Func End, Address: 0x1028d50, Func Offset: 0x90
}

// 
// Start address: 0x1028d50
void sv_move_sub2()
{
	// Line 938, Address: 0x1028d50, Func Offset: 0
	// Line 939, Address: 0x1028d58, Func Offset: 0x8
	// Line 940, Address: 0x1028d60, Func Offset: 0x10
	// Line 941, Address: 0x1028d6c, Func Offset: 0x1c
	// Func End, Address: 0x1028d7c, Func Offset: 0x2c
}

// 
// Start address: 0x1028d80
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 944, Address: 0x1028d80, Func Offset: 0
	// Line 947, Address: 0x1028d8c, Func Offset: 0xc
	// Line 948, Address: 0x1028d90, Func Offset: 0x10
	// Line 949, Address: 0x1028d98, Func Offset: 0x18
	// Line 950, Address: 0x1028db4, Func Offset: 0x34
	// Line 951, Address: 0x1028dd0, Func Offset: 0x50
	// Line 952, Address: 0x1028ddc, Func Offset: 0x5c
	// Line 954, Address: 0x1028de4, Func Offset: 0x64
	// Line 957, Address: 0x1028df0, Func Offset: 0x70
	// Func End, Address: 0x1028e00, Func Offset: 0x80
}

// 
// Start address: 0x1028e00
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 962, Address: 0x1028e00, Func Offset: 0
	// Line 966, Address: 0x1028e10, Func Offset: 0x10
	// Line 967, Address: 0x1028e2c, Func Offset: 0x2c
	// Line 968, Address: 0x1028e38, Func Offset: 0x38
	// Line 970, Address: 0x1028e4c, Func Offset: 0x4c
	// Line 971, Address: 0x1028e54, Func Offset: 0x54
	// Line 972, Address: 0x1028e5c, Func Offset: 0x5c
	// Line 973, Address: 0x1028e60, Func Offset: 0x60
	// Line 974, Address: 0x1028e6c, Func Offset: 0x6c
	// Func End, Address: 0x1028e80, Func Offset: 0x80
}

// 
// Start address: 0x1028e80
void scrv_up_ch(_anon2 lD1)
{
	// Line 978, Address: 0x1028e80, Func Offset: 0
	// Line 979, Address: 0x1028e8c, Func Offset: 0xc
	// Line 980, Address: 0x1028eb4, Func Offset: 0x34
	// Line 981, Address: 0x1028ecc, Func Offset: 0x4c
	// Line 982, Address: 0x1028ed8, Func Offset: 0x58
	// Line 983, Address: 0x1028eec, Func Offset: 0x6c
	// Line 984, Address: 0x1028f00, Func Offset: 0x80
	// Line 985, Address: 0x1028f14, Func Offset: 0x94
	// Line 988, Address: 0x1028f1c, Func Offset: 0x9c
	// Line 991, Address: 0x1028f28, Func Offset: 0xa8
	// Line 993, Address: 0x1028f34, Func Offset: 0xb4
	// Func End, Address: 0x1028f44, Func Offset: 0xc4
}

// 
// Start address: 0x1028f50
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 999, Address: 0x1028f50, Func Offset: 0
	// Line 1003, Address: 0x1028f60, Func Offset: 0x10
	// Line 1004, Address: 0x1028f64, Func Offset: 0x14
	// Line 1005, Address: 0x1028f6c, Func Offset: 0x1c
	// Line 1006, Address: 0x1028f78, Func Offset: 0x28
	// Line 1008, Address: 0x1028f8c, Func Offset: 0x3c
	// Line 1009, Address: 0x1028f94, Func Offset: 0x44
	// Line 1010, Address: 0x1028f9c, Func Offset: 0x4c
	// Line 1012, Address: 0x1028fa0, Func Offset: 0x50
	// Line 1014, Address: 0x1028fac, Func Offset: 0x5c
	// Func End, Address: 0x1028fc0, Func Offset: 0x70
}

// 
// Start address: 0x1028fc0
void scrv_down_ch(_anon2 lD1)
{
	// Line 1018, Address: 0x1028fc0, Func Offset: 0
	// Line 1019, Address: 0x1028fcc, Func Offset: 0xc
	// Line 1020, Address: 0x1028ff4, Func Offset: 0x34
	// Line 1021, Address: 0x1029000, Func Offset: 0x40
	// Line 1022, Address: 0x1029014, Func Offset: 0x54
	// Line 1023, Address: 0x1029028, Func Offset: 0x68
	// Line 1024, Address: 0x102903c, Func Offset: 0x7c
	// Line 1025, Address: 0x1029050, Func Offset: 0x90
	// Line 1027, Address: 0x1029058, Func Offset: 0x98
	// Line 1030, Address: 0x1029064, Func Offset: 0xa4
	// Line 1032, Address: 0x1029070, Func Offset: 0xb0
	// Func End, Address: 0x1029080, Func Offset: 0xc0
}

// 
// Start address: 0x1029080
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1035, Address: 0x1029080, Func Offset: 0
	// Line 1038, Address: 0x1029090, Func Offset: 0x10
	// Line 1040, Address: 0x102909c, Func Offset: 0x1c
	// Line 1041, Address: 0x10290a4, Func Offset: 0x24
	// Line 1042, Address: 0x10290ac, Func Offset: 0x2c
	// Line 1044, Address: 0x10290b0, Func Offset: 0x30
	// Line 1045, Address: 0x10290d8, Func Offset: 0x58
	// Line 1048, Address: 0x10290e4, Func Offset: 0x64
	// Line 1049, Address: 0x1029118, Func Offset: 0x98
	// Line 1050, Address: 0x102912c, Func Offset: 0xac
	// Line 1052, Address: 0x1029158, Func Offset: 0xd8
	// Line 1053, Address: 0x102916c, Func Offset: 0xec
	// Line 1055, Address: 0x1029174, Func Offset: 0xf4
	// Line 1060, Address: 0x1029188, Func Offset: 0x108
	// Func End, Address: 0x102919c, Func Offset: 0x11c
}

// 
// Start address: 0x10291a0
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1064, Address: 0x10291a0, Func Offset: 0
	// Line 1067, Address: 0x10291ac, Func Offset: 0xc
	// Line 1068, Address: 0x10291bc, Func Offset: 0x1c
	// Line 1069, Address: 0x10291cc, Func Offset: 0x2c
	// Line 1071, Address: 0x10291d8, Func Offset: 0x38
	// Line 1073, Address: 0x102920c, Func Offset: 0x6c
	// Line 1074, Address: 0x1029220, Func Offset: 0x80
	// Line 1075, Address: 0x1029230, Func Offset: 0x90
	// Line 1076, Address: 0x1029244, Func Offset: 0xa4
	// Line 1077, Address: 0x1029258, Func Offset: 0xb8
	// Line 1080, Address: 0x1029260, Func Offset: 0xc0
	// Line 1085, Address: 0x1029274, Func Offset: 0xd4
	// Line 1086, Address: 0x1029284, Func Offset: 0xe4
	// Line 1087, Address: 0x1029294, Func Offset: 0xf4
	// Line 1089, Address: 0x10292a0, Func Offset: 0x100
	// Line 1091, Address: 0x10292d4, Func Offset: 0x134
	// Line 1092, Address: 0x10292e8, Func Offset: 0x148
	// Line 1093, Address: 0x10292f8, Func Offset: 0x158
	// Line 1094, Address: 0x102930c, Func Offset: 0x16c
	// Line 1095, Address: 0x1029320, Func Offset: 0x180
	// Line 1098, Address: 0x1029328, Func Offset: 0x188
	// Line 1103, Address: 0x102933c, Func Offset: 0x19c
	// Func End, Address: 0x1029348, Func Offset: 0x1a8
}

// 
// Start address: 0x1029350
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1110, Address: 0x1029350, Func Offset: 0
	// Line 1113, Address: 0x102935c, Func Offset: 0xc
	// Line 1114, Address: 0x1029368, Func Offset: 0x18
	// Line 1116, Address: 0x1029374, Func Offset: 0x24
	// Line 1117, Address: 0x10293a0, Func Offset: 0x50
	// Line 1118, Address: 0x10293b4, Func Offset: 0x64
	// Line 1119, Address: 0x10293e4, Func Offset: 0x94
	// Line 1120, Address: 0x10293f8, Func Offset: 0xa8
	// Line 1123, Address: 0x1029400, Func Offset: 0xb0
	// Line 1128, Address: 0x1029414, Func Offset: 0xc4
	// Func End, Address: 0x1029424, Func Offset: 0xd4
}

// 
// Start address: 0x1029430
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1132, Address: 0x1029430, Func Offset: 0
	// Line 1136, Address: 0x1029440, Func Offset: 0x10
	// Line 1137, Address: 0x102944c, Func Offset: 0x1c
	// Line 1138, Address: 0x102945c, Func Offset: 0x2c
	// Line 1140, Address: 0x1029468, Func Offset: 0x38
	// Line 1141, Address: 0x1029470, Func Offset: 0x40
	// Line 1142, Address: 0x1029478, Func Offset: 0x48
	// Line 1144, Address: 0x1029484, Func Offset: 0x54
	// Line 1145, Address: 0x1029490, Func Offset: 0x60
	// Line 1146, Address: 0x10294a4, Func Offset: 0x74
	// Line 1147, Address: 0x10294b0, Func Offset: 0x80
	// Line 1148, Address: 0x10294c4, Func Offset: 0x94
	// Line 1149, Address: 0x10294d4, Func Offset: 0xa4
	// Line 1150, Address: 0x10294e8, Func Offset: 0xb8
	// Line 1151, Address: 0x1029504, Func Offset: 0xd4
	// Line 1154, Address: 0x102950c, Func Offset: 0xdc
	// Line 1159, Address: 0x102952c, Func Offset: 0xfc
	// Func End, Address: 0x102953c, Func Offset: 0x10c
}

// 
// Start address: 0x1029540
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1163, Address: 0x1029540, Func Offset: 0
	// Line 1167, Address: 0x1029550, Func Offset: 0x10
	// Line 1168, Address: 0x102955c, Func Offset: 0x1c
	// Line 1169, Address: 0x102956c, Func Offset: 0x2c
	// Line 1171, Address: 0x1029578, Func Offset: 0x38
	// Line 1172, Address: 0x1029580, Func Offset: 0x40
	// Line 1173, Address: 0x1029588, Func Offset: 0x48
	// Line 1175, Address: 0x1029594, Func Offset: 0x54
	// Line 1176, Address: 0x10295a0, Func Offset: 0x60
	// Line 1177, Address: 0x10295b4, Func Offset: 0x74
	// Line 1178, Address: 0x10295c0, Func Offset: 0x80
	// Line 1179, Address: 0x10295d4, Func Offset: 0x94
	// Line 1180, Address: 0x10295e4, Func Offset: 0xa4
	// Line 1181, Address: 0x10295f8, Func Offset: 0xb8
	// Line 1182, Address: 0x1029614, Func Offset: 0xd4
	// Line 1185, Address: 0x102961c, Func Offset: 0xdc
	// Line 1190, Address: 0x102963c, Func Offset: 0xfc
	// Func End, Address: 0x102964c, Func Offset: 0x10c
}

// 
// Start address: 0x1029650
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1202, Address: 0x1029650, Func Offset: 0
	// Line 1206, Address: 0x1029660, Func Offset: 0x10
	// Line 1207, Address: 0x102966c, Func Offset: 0x1c
	// Line 1208, Address: 0x102967c, Func Offset: 0x2c
	// Line 1210, Address: 0x1029688, Func Offset: 0x38
	// Line 1211, Address: 0x1029690, Func Offset: 0x40
	// Line 1212, Address: 0x1029698, Func Offset: 0x48
	// Line 1214, Address: 0x10296a4, Func Offset: 0x54
	// Line 1215, Address: 0x10296b0, Func Offset: 0x60
	// Line 1216, Address: 0x10296c4, Func Offset: 0x74
	// Line 1217, Address: 0x10296d0, Func Offset: 0x80
	// Line 1218, Address: 0x10296e4, Func Offset: 0x94
	// Line 1219, Address: 0x10296f4, Func Offset: 0xa4
	// Line 1220, Address: 0x1029708, Func Offset: 0xb8
	// Line 1221, Address: 0x1029724, Func Offset: 0xd4
	// Line 1224, Address: 0x102972c, Func Offset: 0xdc
	// Line 1229, Address: 0x102974c, Func Offset: 0xfc
	// Func End, Address: 0x102975c, Func Offset: 0x10c
}

// 
// Start address: 0x1029760
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1244, Address: 0x1029760, Func Offset: 0
	// Line 1250, Address: 0x102977c, Func Offset: 0x1c
	// Line 1251, Address: 0x1029780, Func Offset: 0x20
	// Line 1252, Address: 0x102978c, Func Offset: 0x2c
	// Line 1253, Address: 0x1029798, Func Offset: 0x38
	// Line 1254, Address: 0x10297a0, Func Offset: 0x40
	// Line 1255, Address: 0x10297a8, Func Offset: 0x48
	// Line 1263, Address: 0x10297bc, Func Offset: 0x5c
	// Func End, Address: 0x10297e0, Func Offset: 0x80
}

// 
// Start address: 0x10297e0
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
	// Line 1276, Address: 0x10297e0, Func Offset: 0
	// Line 1285, Address: 0x1029800, Func Offset: 0x20
	// Line 1286, Address: 0x1029804, Func Offset: 0x24
	// Line 1287, Address: 0x1029810, Func Offset: 0x30
	// Line 1288, Address: 0x102981c, Func Offset: 0x3c
	// Line 1289, Address: 0x1029824, Func Offset: 0x44
	// Line 1290, Address: 0x102982c, Func Offset: 0x4c
	// Line 1292, Address: 0x1029840, Func Offset: 0x60
	// Line 1293, Address: 0x1029844, Func Offset: 0x64
	// Line 1294, Address: 0x1029850, Func Offset: 0x70
	// Line 1295, Address: 0x102985c, Func Offset: 0x7c
	// Line 1296, Address: 0x1029864, Func Offset: 0x84
	// Line 1298, Address: 0x102986c, Func Offset: 0x8c
	// Line 1299, Address: 0x1029878, Func Offset: 0x98
	// Line 1300, Address: 0x102988c, Func Offset: 0xac
	// Line 1302, Address: 0x1029898, Func Offset: 0xb8
	// Line 1303, Address: 0x10298a0, Func Offset: 0xc0
	// Line 1305, Address: 0x10298a8, Func Offset: 0xc8
	// Line 1307, Address: 0x10298c8, Func Offset: 0xe8
	// Line 1313, Address: 0x10298f4, Func Offset: 0x114
	// Line 1314, Address: 0x1029908, Func Offset: 0x128
	// Line 1316, Address: 0x1029914, Func Offset: 0x134
	// Line 1317, Address: 0x102991c, Func Offset: 0x13c
	// Line 1318, Address: 0x1029924, Func Offset: 0x144
	// Line 1320, Address: 0x1029944, Func Offset: 0x164
	// Line 1326, Address: 0x1029970, Func Offset: 0x190
	// Line 1327, Address: 0x1029984, Func Offset: 0x1a4
	// Line 1329, Address: 0x1029990, Func Offset: 0x1b0
	// Line 1330, Address: 0x1029998, Func Offset: 0x1b8
	// Line 1331, Address: 0x10299a0, Func Offset: 0x1c0
	// Line 1333, Address: 0x10299c0, Func Offset: 0x1e0
	// Line 1339, Address: 0x10299ec, Func Offset: 0x20c
	// Line 1340, Address: 0x1029a00, Func Offset: 0x220
	// Line 1342, Address: 0x1029a0c, Func Offset: 0x22c
	// Line 1343, Address: 0x1029a14, Func Offset: 0x234
	// Line 1344, Address: 0x1029a1c, Func Offset: 0x23c
	// Line 1346, Address: 0x1029a3c, Func Offset: 0x25c
	// Line 1355, Address: 0x1029a68, Func Offset: 0x288
	// Func End, Address: 0x1029a90, Func Offset: 0x2b0
}

// 
// Start address: 0x1029a90
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
	// Line 1372, Address: 0x1029a90, Func Offset: 0
	// Line 1383, Address: 0x1029abc, Func Offset: 0x2c
	// Line 1385, Address: 0x1029ac4, Func Offset: 0x34
	// Line 1386, Address: 0x1029adc, Func Offset: 0x4c
	// Line 1387, Address: 0x1029af0, Func Offset: 0x60
	// Line 1389, Address: 0x1029af8, Func Offset: 0x68
	// Line 1391, Address: 0x1029b0c, Func Offset: 0x7c
	// Line 1392, Address: 0x1029b24, Func Offset: 0x94
	// Line 1393, Address: 0x1029b38, Func Offset: 0xa8
	// Line 1394, Address: 0x1029b40, Func Offset: 0xb0
	// Line 1396, Address: 0x1029b48, Func Offset: 0xb8
	// Line 1397, Address: 0x1029b5c, Func Offset: 0xcc
	// Line 1402, Address: 0x1029b64, Func Offset: 0xd4
	// Line 1403, Address: 0x1029bb4, Func Offset: 0x124
	// Line 1404, Address: 0x1029bbc, Func Offset: 0x12c
	// Line 1410, Address: 0x1029bdc, Func Offset: 0x14c
	// Line 1411, Address: 0x1029bfc, Func Offset: 0x16c
	// Line 1412, Address: 0x1029c20, Func Offset: 0x190
	// Line 1413, Address: 0x1029c2c, Func Offset: 0x19c
	// Line 1414, Address: 0x1029c34, Func Offset: 0x1a4
	// Line 1416, Address: 0x1029c54, Func Offset: 0x1c4
	// Line 1420, Address: 0x1029c80, Func Offset: 0x1f0
	// Line 1423, Address: 0x1029c88, Func Offset: 0x1f8
	// Line 1424, Address: 0x1029c8c, Func Offset: 0x1fc
	// Line 1428, Address: 0x1029cac, Func Offset: 0x21c
	// Line 1435, Address: 0x1029cd8, Func Offset: 0x248
	// Line 1442, Address: 0x1029cec, Func Offset: 0x25c
	// Line 1443, Address: 0x1029cf4, Func Offset: 0x264
	// Line 1444, Address: 0x1029cfc, Func Offset: 0x26c
	// Line 1445, Address: 0x1029d14, Func Offset: 0x284
	// Line 1446, Address: 0x1029d34, Func Offset: 0x2a4
	// Line 1450, Address: 0x1029d3c, Func Offset: 0x2ac
	// Line 1452, Address: 0x1029d6c, Func Offset: 0x2dc
	// Line 1453, Address: 0x1029d78, Func Offset: 0x2e8
	// Line 1457, Address: 0x1029d88, Func Offset: 0x2f8
	// Line 1458, Address: 0x1029d94, Func Offset: 0x304
	// Line 1459, Address: 0x1029db4, Func Offset: 0x324
	// Line 1460, Address: 0x1029de0, Func Offset: 0x350
	// Line 1461, Address: 0x1029e00, Func Offset: 0x370
	// Line 1463, Address: 0x1029e24, Func Offset: 0x394
	// Line 1466, Address: 0x1029e48, Func Offset: 0x3b8
	// Line 1468, Address: 0x1029e68, Func Offset: 0x3d8
	// Line 1470, Address: 0x1029e7c, Func Offset: 0x3ec
	// Line 1471, Address: 0x1029e88, Func Offset: 0x3f8
	// Line 1472, Address: 0x1029e98, Func Offset: 0x408
	// Line 1474, Address: 0x1029ea0, Func Offset: 0x410
	// Func End, Address: 0x1029ec8, Func Offset: 0x438
}

// 
// Start address: 0x1029ed0
void scrollwrtc()
{
	// Line 1482, Address: 0x1029ed0, Func Offset: 0
	// Func End, Address: 0x1029ed8, Func Offset: 0x8
}

// 
// Start address: 0x1029ee0
void scrollwrtz()
{
	// Line 1487, Address: 0x1029ee0, Func Offset: 0
	// Func End, Address: 0x1029ee8, Func Offset: 0x8
}

// 
// Start address: 0x1029ef0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1508, Address: 0x1029ef0, Func Offset: 0
	// Line 1521, Address: 0x1029f18, Func Offset: 0x28
	// Line 1524, Address: 0x1029f38, Func Offset: 0x48
	// Line 1525, Address: 0x1029f4c, Func Offset: 0x5c
	// Line 1526, Address: 0x1029f60, Func Offset: 0x70
	// Line 1527, Address: 0x1029f74, Func Offset: 0x84
	// Line 1529, Address: 0x1029f88, Func Offset: 0x98
	// Line 1530, Address: 0x1029f94, Func Offset: 0xa4
	// Line 1531, Address: 0x1029fa8, Func Offset: 0xb8
	// Func End, Address: 0x1029fb8, Func Offset: 0xc8
}

// 
// Start address: 0x1029fc0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1535, Address: 0x1029fc0, Func Offset: 0
	// Line 1539, Address: 0x1029fe8, Func Offset: 0x28
	// Line 1542, Address: 0x102a008, Func Offset: 0x48
	// Line 1543, Address: 0x102a01c, Func Offset: 0x5c
	// Line 1544, Address: 0x102a030, Func Offset: 0x70
	// Line 1545, Address: 0x102a044, Func Offset: 0x84
	// Line 1547, Address: 0x102a058, Func Offset: 0x98
	// Line 1548, Address: 0x102a064, Func Offset: 0xa4
	// Line 1549, Address: 0x102a078, Func Offset: 0xb8
	// Func End, Address: 0x102a088, Func Offset: 0xc8
}

// 
// Start address: 0x102a090
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1568, Address: 0x102a090, Func Offset: 0
	// Line 1572, Address: 0x102a0b8, Func Offset: 0x28
	// Line 1575, Address: 0x102a0d8, Func Offset: 0x48
	// Line 1576, Address: 0x102a0ec, Func Offset: 0x5c
	// Line 1577, Address: 0x102a0fc, Func Offset: 0x6c
	// Line 1578, Address: 0x102a110, Func Offset: 0x80
	// Line 1580, Address: 0x102a120, Func Offset: 0x90
	// Line 1581, Address: 0x102a12c, Func Offset: 0x9c
	// Line 1582, Address: 0x102a140, Func Offset: 0xb0
	// Func End, Address: 0x102a150, Func Offset: 0xc0
}

// 
// Start address: 0x102a150
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
	// Line 1601, Address: 0x102a150, Func Offset: 0
	// Line 1607, Address: 0x102a184, Func Offset: 0x34
	// Line 1609, Address: 0x102a194, Func Offset: 0x44
	// Line 1610, Address: 0x102a198, Func Offset: 0x48
	// Line 1611, Address: 0x102a1a0, Func Offset: 0x50
	// Line 1613, Address: 0x102a1b0, Func Offset: 0x60
	// Line 1615, Address: 0x102a1b4, Func Offset: 0x64
	// Line 1616, Address: 0x102a1bc, Func Offset: 0x6c
	// Line 1619, Address: 0x102a1c4, Func Offset: 0x74
	// Line 1620, Address: 0x102a1cc, Func Offset: 0x7c
	// Line 1621, Address: 0x102a1d8, Func Offset: 0x88
	// Line 1623, Address: 0x102a1e4, Func Offset: 0x94
	// Line 1624, Address: 0x102a1ec, Func Offset: 0x9c
	// Line 1625, Address: 0x102a1f4, Func Offset: 0xa4
	// Line 1626, Address: 0x102a1fc, Func Offset: 0xac
	// Line 1628, Address: 0x102a208, Func Offset: 0xb8
	// Line 1629, Address: 0x102a210, Func Offset: 0xc0
	// Line 1630, Address: 0x102a218, Func Offset: 0xc8
	// Line 1631, Address: 0x102a220, Func Offset: 0xd0
	// Line 1633, Address: 0x102a22c, Func Offset: 0xdc
	// Line 1634, Address: 0x102a234, Func Offset: 0xe4
	// Line 1635, Address: 0x102a23c, Func Offset: 0xec
	// Line 1638, Address: 0x102a244, Func Offset: 0xf4
	// Line 1639, Address: 0x102a24c, Func Offset: 0xfc
	// Line 1642, Address: 0x102a254, Func Offset: 0x104
	// Line 1643, Address: 0x102a298, Func Offset: 0x148
	// Line 1644, Address: 0x102a2dc, Func Offset: 0x18c
	// Line 1645, Address: 0x102a320, Func Offset: 0x1d0
	// Line 1647, Address: 0x102a364, Func Offset: 0x214
	// Func End, Address: 0x102a394, Func Offset: 0x244
}

// 
// Start address: 0x102a3a0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1665, Address: 0x102a3a0, Func Offset: 0
	// Line 1666, Address: 0x102a3c0, Func Offset: 0x20
	// Line 1667, Address: 0x102a3e0, Func Offset: 0x40
	// Func End, Address: 0x102a3f0, Func Offset: 0x50
}

// 
// Start address: 0x102a3f0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1669, Address: 0x102a3f0, Func Offset: 0
	// Line 1670, Address: 0x102a410, Func Offset: 0x20
	// Line 1671, Address: 0x102a414, Func Offset: 0x24
	// Line 1672, Address: 0x102a434, Func Offset: 0x44
	// Func End, Address: 0x102a444, Func Offset: 0x54
}

// 
// Start address: 0x102a450
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1679, Address: 0x102a450, Func Offset: 0
	// Line 1685, Address: 0x102a480, Func Offset: 0x30
	// Line 1686, Address: 0x102a490, Func Offset: 0x40
	// Line 1692, Address: 0x102a4a0, Func Offset: 0x50
	// Line 1693, Address: 0x102a4bc, Func Offset: 0x6c
	// Line 1694, Address: 0x102a4c0, Func Offset: 0x70
	// Line 1695, Address: 0x102a4dc, Func Offset: 0x8c
	// Line 1696, Address: 0x102a4e0, Func Offset: 0x90
	// Line 1697, Address: 0x102a500, Func Offset: 0xb0
	// Line 1698, Address: 0x102a508, Func Offset: 0xb8
	// Line 1699, Address: 0x102a528, Func Offset: 0xd8
	// Line 1700, Address: 0x102a530, Func Offset: 0xe0
	// Line 1701, Address: 0x102a578, Func Offset: 0x128
	// Line 1703, Address: 0x102a584, Func Offset: 0x134
	// Line 1705, Address: 0x102a5a0, Func Offset: 0x150
	// Line 1710, Address: 0x102a5a8, Func Offset: 0x158
	// Line 1711, Address: 0x102a5b4, Func Offset: 0x164
	// Line 1714, Address: 0x102a5c0, Func Offset: 0x170
	// Line 1715, Address: 0x102a5c8, Func Offset: 0x178
	// Line 1716, Address: 0x102a5e8, Func Offset: 0x198
	// Line 1717, Address: 0x102a604, Func Offset: 0x1b4
	// Line 1718, Address: 0x102a60c, Func Offset: 0x1bc
	// Line 1719, Address: 0x102a62c, Func Offset: 0x1dc
	// Line 1721, Address: 0x102a648, Func Offset: 0x1f8
	// Line 1722, Address: 0x102a650, Func Offset: 0x200
	// Line 1723, Address: 0x102a658, Func Offset: 0x208
	// Line 1724, Address: 0x102a664, Func Offset: 0x214
	// Line 1725, Address: 0x102a67c, Func Offset: 0x22c
	// Line 1727, Address: 0x102a68c, Func Offset: 0x23c
	// Line 1730, Address: 0x102a698, Func Offset: 0x248
	// Line 1731, Address: 0x102a6a0, Func Offset: 0x250
	// Line 1732, Address: 0x102a6a4, Func Offset: 0x254
	// Func End, Address: 0x102a6c4, Func Offset: 0x274
}

// 
// Start address: 0x102a6d0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1752, Address: 0x102a6d0, Func Offset: 0
	// Line 1760, Address: 0x102a6f8, Func Offset: 0x28
	// Line 1761, Address: 0x102a75c, Func Offset: 0x8c
	// Line 1767, Address: 0x102a764, Func Offset: 0x94
	// Line 1768, Address: 0x102a76c, Func Offset: 0x9c
	// Line 1769, Address: 0x102a78c, Func Offset: 0xbc
	// Line 1770, Address: 0x102a7a8, Func Offset: 0xd8
	// Line 1771, Address: 0x102a7b0, Func Offset: 0xe0
	// Line 1772, Address: 0x102a7d0, Func Offset: 0x100
	// Line 1775, Address: 0x102a7ec, Func Offset: 0x11c
	// Line 1776, Address: 0x102a7f4, Func Offset: 0x124
	// Line 1777, Address: 0x102a7fc, Func Offset: 0x12c
	// Line 1778, Address: 0x102a808, Func Offset: 0x138
	// Line 1779, Address: 0x102a820, Func Offset: 0x150
	// Line 1780, Address: 0x102a828, Func Offset: 0x158
	// Line 1785, Address: 0x102a838, Func Offset: 0x168
	// Line 1788, Address: 0x102a844, Func Offset: 0x174
	// Line 1789, Address: 0x102a84c, Func Offset: 0x17c
	// Line 1790, Address: 0x102a850, Func Offset: 0x180
	// Func End, Address: 0x102a86c, Func Offset: 0x19c
}

// 
// Start address: 0x102a870
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1804, Address: 0x102a870, Func Offset: 0
	// Line 1811, Address: 0x102a88c, Func Offset: 0x1c
	// Line 1812, Address: 0x102a890, Func Offset: 0x20
	// Line 1813, Address: 0x102a898, Func Offset: 0x28
	// Line 1814, Address: 0x102a8bc, Func Offset: 0x4c
	// Line 1815, Address: 0x102a8c8, Func Offset: 0x58
	// Line 1816, Address: 0x102a8e0, Func Offset: 0x70
	// Line 1817, Address: 0x102a8f4, Func Offset: 0x84
	// Line 1822, Address: 0x102a90c, Func Offset: 0x9c
	// Func End, Address: 0x102a924, Func Offset: 0xb4
}

// 
// Start address: 0x102a930
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1836, Address: 0x102a930, Func Offset: 0
	// Line 1837, Address: 0x102a93c, Func Offset: 0xc
	// Line 1838, Address: 0x102a968, Func Offset: 0x38
	// Line 1839, Address: 0x102a9b4, Func Offset: 0x84
	// Line 1840, Address: 0x102a9e0, Func Offset: 0xb0
	// Line 1842, Address: 0x102aa2c, Func Offset: 0xfc
	// Line 1848, Address: 0x102aa38, Func Offset: 0x108
	// Line 1849, Address: 0x102aa3c, Func Offset: 0x10c
	// Func End, Address: 0x102aa48, Func Offset: 0x118
}

// 
// Start address: 0x102aa50
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1866, Address: 0x102aa50, Func Offset: 0
	// Line 1867, Address: 0x102aa6c, Func Offset: 0x1c
	// Line 1869, Address: 0x102aa88, Func Offset: 0x38
	// Func End, Address: 0x102aa98, Func Offset: 0x48
}

// 
// Start address: 0x102aaa0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1871, Address: 0x102aaa0, Func Offset: 0
	// Line 1872, Address: 0x102aabc, Func Offset: 0x1c
	// Line 1873, Address: 0x102aac0, Func Offset: 0x20
	// Line 1875, Address: 0x102aadc, Func Offset: 0x3c
	// Func End, Address: 0x102aaec, Func Offset: 0x4c
}

// 
// Start address: 0x102aaf0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1877, Address: 0x102aaf0, Func Offset: 0
	// Line 1878, Address: 0x102ab04, Func Offset: 0x14
	// Line 1880, Address: 0x102ab20, Func Offset: 0x30
	// Func End, Address: 0x102ab30, Func Offset: 0x40
}

// 
// Start address: 0x102ab30
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1882, Address: 0x102ab30, Func Offset: 0
	// Line 1883, Address: 0x102ab4c, Func Offset: 0x1c
	// Line 1885, Address: 0x102ab68, Func Offset: 0x38
	// Func End, Address: 0x102ab78, Func Offset: 0x48
}

// 
// Start address: 0x102ab80
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1887, Address: 0x102ab80, Func Offset: 0
	// Line 1888, Address: 0x102ab98, Func Offset: 0x18
	// Line 1889, Address: 0x102aba8, Func Offset: 0x28
	// Line 1890, Address: 0x102abb8, Func Offset: 0x38
	// Line 1891, Address: 0x102abc4, Func Offset: 0x44
	// Line 1893, Address: 0x102abd0, Func Offset: 0x50
	// Line 1894, Address: 0x102abfc, Func Offset: 0x7c
	// Line 1897, Address: 0x102ac28, Func Offset: 0xa8
	// Func End, Address: 0x102ac34, Func Offset: 0xb4
}

// 
// Start address: 0x102ac40
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1913, Address: 0x102ac40, Func Offset: 0
	// Line 1918, Address: 0x102ac58, Func Offset: 0x18
	// Line 1919, Address: 0x102ac64, Func Offset: 0x24
	// Line 1920, Address: 0x102ac70, Func Offset: 0x30
	// Line 1921, Address: 0x102ac78, Func Offset: 0x38
	// Line 1922, Address: 0x102ac7c, Func Offset: 0x3c
	// Line 1926, Address: 0x102ac94, Func Offset: 0x54
	// Line 1927, Address: 0x102ac9c, Func Offset: 0x5c
	// Line 1928, Address: 0x102aca0, Func Offset: 0x60
	// Line 1930, Address: 0x102acb0, Func Offset: 0x70
	// Func End, Address: 0x102acd0, Func Offset: 0x90
}

// 
// Start address: 0x102acd0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1933, Address: 0x102acd0, Func Offset: 0
	// Line 1934, Address: 0x102ace8, Func Offset: 0x18
	// Line 1935, Address: 0x102ad08, Func Offset: 0x38
	// Func End, Address: 0x102ad18, Func Offset: 0x48
}

// 
// Start address: 0x102ad20
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1940, Address: 0x102ad20, Func Offset: 0
	// Line 1944, Address: 0x102ad40, Func Offset: 0x20
	// Line 1947, Address: 0x102ad5c, Func Offset: 0x3c
	// Line 1951, Address: 0x102ad84, Func Offset: 0x64
	// Line 1952, Address: 0x102ad90, Func Offset: 0x70
	// Line 1954, Address: 0x102adb8, Func Offset: 0x98
	// Func End, Address: 0x102adc8, Func Offset: 0xa8
}

// 
// Start address: 0x102add0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1959, Address: 0x102add0, Func Offset: 0
	// Line 1962, Address: 0x102adec, Func Offset: 0x1c
	// Line 1963, Address: 0x102adf4, Func Offset: 0x24
	// Line 1968, Address: 0x102adfc, Func Offset: 0x2c
	// Line 1970, Address: 0x102ae20, Func Offset: 0x50
	// Line 1971, Address: 0x102ae40, Func Offset: 0x70
	// Line 1972, Address: 0x102ae48, Func Offset: 0x78
	// Line 1973, Address: 0x102ae6c, Func Offset: 0x9c
	// Func End, Address: 0x102ae88, Func Offset: 0xb8
}

// 
// Start address: 0x102ae90
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1999, Address: 0x102ae90, Func Offset: 0
	// Line 2004, Address: 0x102aeb8, Func Offset: 0x28
	// Line 2005, Address: 0x102aec8, Func Offset: 0x38
	// Line 2007, Address: 0x102aee4, Func Offset: 0x54
	// Line 2008, Address: 0x102af08, Func Offset: 0x78
	// Line 2009, Address: 0x102af30, Func Offset: 0xa0
	// Line 2010, Address: 0x102af3c, Func Offset: 0xac
	// Line 2011, Address: 0x102af44, Func Offset: 0xb4
	// Line 2014, Address: 0x102af60, Func Offset: 0xd0
	// Line 2018, Address: 0x102af88, Func Offset: 0xf8
	// Line 2021, Address: 0x102af90, Func Offset: 0x100
	// Line 2022, Address: 0x102af94, Func Offset: 0x104
	// Line 2026, Address: 0x102afb0, Func Offset: 0x120
	// Line 2033, Address: 0x102afd8, Func Offset: 0x148
	// Func End, Address: 0x102aff4, Func Offset: 0x164
}

// 
// Start address: 0x102b000
void mapinit()
{
	// Line 2038, Address: 0x102b000, Func Offset: 0
	// Line 2044, Address: 0x102b008, Func Offset: 0x8
	// Line 2047, Address: 0x102b010, Func Offset: 0x10
	// Line 2048, Address: 0x102b024, Func Offset: 0x24
	// Line 2055, Address: 0x102b038, Func Offset: 0x38
	// Line 2056, Address: 0x102b04c, Func Offset: 0x4c
	// Line 2059, Address: 0x102b054, Func Offset: 0x54
	// Line 2061, Address: 0x102b06c, Func Offset: 0x6c
	// Line 2065, Address: 0x102b074, Func Offset: 0x74
	// Func End, Address: 0x102b084, Func Offset: 0x84
}

// 
// Start address: 0x102b090
void mapset()
{
	// Line 2075, Address: 0x102b090, Func Offset: 0
	// Func End, Address: 0x102b098, Func Offset: 0x8
}

