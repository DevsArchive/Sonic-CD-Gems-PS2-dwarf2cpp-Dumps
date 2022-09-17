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

unsigned char z32awrttbl[49];
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
// Start address: 0x1029aa0
void enecginit()
{
	// Line 111, Address: 0x1029aa0, Func Offset: 0
	// Func End, Address: 0x1029aa8, Func Offset: 0x8
}

// 
// Start address: 0x1029ab0
void divdevset()
{
	// Line 115, Address: 0x1029ab0, Func Offset: 0
	// Func End, Address: 0x1029ab8, Func Offset: 0x8
}

// 
// Start address: 0x1029ac0
_anon1* main_chk()
{
	// Line 169, Address: 0x1029ac0, Func Offset: 0
	// Line 170, Address: 0x1029ad4, Func Offset: 0x14
	// Line 172, Address: 0x1029ae4, Func Offset: 0x24
	// Line 173, Address: 0x1029aec, Func Offset: 0x2c
	// Func End, Address: 0x1029af4, Func Offset: 0x34
}

// 
// Start address: 0x1029b00
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 186, Address: 0x1029b00, Func Offset: 0
	// Line 192, Address: 0x1029b0c, Func Offset: 0xc
	// Line 197, Address: 0x1029b40, Func Offset: 0x40
	// Line 199, Address: 0x1029b88, Func Offset: 0x88
	// Line 200, Address: 0x1029b8c, Func Offset: 0x8c
	// Line 201, Address: 0x1029ba8, Func Offset: 0xa8
	// Line 202, Address: 0x1029bbc, Func Offset: 0xbc
	// Line 203, Address: 0x1029bd8, Func Offset: 0xd8
	// Line 204, Address: 0x1029bec, Func Offset: 0xec
	// Line 205, Address: 0x1029c08, Func Offset: 0x108
	// Line 206, Address: 0x1029c1c, Func Offset: 0x11c
	// Line 207, Address: 0x1029c38, Func Offset: 0x138
	// Line 208, Address: 0x1029c4c, Func Offset: 0x14c
	// Line 210, Address: 0x1029c68, Func Offset: 0x168
	// Line 211, Address: 0x1029c8c, Func Offset: 0x18c
	// Line 212, Address: 0x1029c98, Func Offset: 0x198
	// Line 214, Address: 0x1029ca4, Func Offset: 0x1a4
	// Line 215, Address: 0x1029cc0, Func Offset: 0x1c0
	// Line 217, Address: 0x1029ccc, Func Offset: 0x1cc
	// Line 218, Address: 0x1029cd4, Func Offset: 0x1d4
	// Func End, Address: 0x1029ce8, Func Offset: 0x1e8
}

// 
// Start address: 0x1029cf0
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 230, Address: 0x1029cf0, Func Offset: 0
	// Line 231, Address: 0x1029d08, Func Offset: 0x18
	// Line 235, Address: 0x1029d24, Func Offset: 0x34
	// Line 245, Address: 0x1029d58, Func Offset: 0x68
	// Line 255, Address: 0x1029d84, Func Offset: 0x94
	// Line 256, Address: 0x1029d98, Func Offset: 0xa8
	// Line 257, Address: 0x1029da0, Func Offset: 0xb0
	// Line 258, Address: 0x1029db0, Func Offset: 0xc0
	// Line 260, Address: 0x1029dc0, Func Offset: 0xd0
	// Line 262, Address: 0x1029dd4, Func Offset: 0xe4
	// Line 265, Address: 0x1029ddc, Func Offset: 0xec
	// Line 266, Address: 0x1029df4, Func Offset: 0x104
	// Line 267, Address: 0x1029e1c, Func Offset: 0x12c
	// Line 270, Address: 0x1029e24, Func Offset: 0x134
	// Line 273, Address: 0x1029e44, Func Offset: 0x154
	// Line 274, Address: 0x1029e60, Func Offset: 0x170
	// Line 278, Address: 0x1029e74, Func Offset: 0x184
	// Line 279, Address: 0x1029e88, Func Offset: 0x198
	// Line 280, Address: 0x1029e94, Func Offset: 0x1a4
	// Line 282, Address: 0x1029e9c, Func Offset: 0x1ac
	// Line 286, Address: 0x1029ea0, Func Offset: 0x1b0
	// Line 287, Address: 0x1029ec4, Func Offset: 0x1d4
	// Line 289, Address: 0x1029ed4, Func Offset: 0x1e4
	// Line 291, Address: 0x1029edc, Func Offset: 0x1ec
	// Line 292, Address: 0x1029ef0, Func Offset: 0x200
	// Line 293, Address: 0x1029efc, Func Offset: 0x20c
	// Line 295, Address: 0x1029f04, Func Offset: 0x214
	// Line 298, Address: 0x1029f08, Func Offset: 0x218
	// Line 299, Address: 0x1029f2c, Func Offset: 0x23c
	// Line 302, Address: 0x1029f3c, Func Offset: 0x24c
	// Line 304, Address: 0x1029f44, Func Offset: 0x254
	// Line 306, Address: 0x1029f54, Func Offset: 0x264
	// Line 307, Address: 0x1029f58, Func Offset: 0x268
	// Line 308, Address: 0x1029f70, Func Offset: 0x280
	// Line 309, Address: 0x1029f88, Func Offset: 0x298
	// Line 310, Address: 0x1029fa0, Func Offset: 0x2b0
	// Line 313, Address: 0x1029fb8, Func Offset: 0x2c8
	// Func End, Address: 0x1029fd8, Func Offset: 0x2e8
}

// 
// Start address: 0x1029fe0
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 325, Address: 0x1029fe0, Func Offset: 0
	// Line 330, Address: 0x1029ff4, Func Offset: 0x14
	// Line 331, Address: 0x1029ffc, Func Offset: 0x1c
	// Line 332, Address: 0x102a024, Func Offset: 0x44
	// Line 333, Address: 0x102a040, Func Offset: 0x60
	// Line 334, Address: 0x102a074, Func Offset: 0x94
	// Line 335, Address: 0x102a088, Func Offset: 0xa8
	// Line 339, Address: 0x102a08c, Func Offset: 0xac
	// Line 340, Address: 0x102a098, Func Offset: 0xb8
	// Line 341, Address: 0x102a0a0, Func Offset: 0xc0
	// Line 342, Address: 0x102a0ac, Func Offset: 0xcc
	// Line 344, Address: 0x102a0b8, Func Offset: 0xd8
	// Line 345, Address: 0x102a0f0, Func Offset: 0x110
	// Line 346, Address: 0x102a130, Func Offset: 0x150
	// Line 349, Address: 0x102a170, Func Offset: 0x190
	// Line 350, Address: 0x102a17c, Func Offset: 0x19c
	// Line 351, Address: 0x102a190, Func Offset: 0x1b0
	// Line 353, Address: 0x102a1a0, Func Offset: 0x1c0
	// Func End, Address: 0x102a1b4, Func Offset: 0x1d4
}

// 
// Start address: 0x102a1c0
void scroll()
{
	int LineSpdTbl[14];
	unsigned char z32a_cnttbl[14];
	unsigned short z32a_kawatbl[3];
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
	// Line 366, Address: 0x102a1c0, Func Offset: 0
	// Line 367, Address: 0x102a1e0, Func Offset: 0x20
	// Line 374, Address: 0x102a214, Func Offset: 0x54
	// Line 377, Address: 0x102a248, Func Offset: 0x88
	// Line 387, Address: 0x102a26c, Func Offset: 0xac
	// Line 390, Address: 0x102a27c, Func Offset: 0xbc
	// Line 391, Address: 0x102a2a8, Func Offset: 0xe8
	// Line 392, Address: 0x102a2b4, Func Offset: 0xf4
	// Line 393, Address: 0x102a2c0, Func Offset: 0x100
	// Line 395, Address: 0x102a2cc, Func Offset: 0x10c
	// Line 396, Address: 0x102a2dc, Func Offset: 0x11c
	// Line 399, Address: 0x102a2ec, Func Offset: 0x12c
	// Line 400, Address: 0x102a310, Func Offset: 0x150
	// Line 401, Address: 0x102a34c, Func Offset: 0x18c
	// Line 403, Address: 0x102a388, Func Offset: 0x1c8
	// Line 404, Address: 0x102a390, Func Offset: 0x1d0
	// Line 405, Address: 0x102a398, Func Offset: 0x1d8
	// Line 407, Address: 0x102a3b8, Func Offset: 0x1f8
	// Line 408, Address: 0x102a3cc, Func Offset: 0x20c
	// Line 409, Address: 0x102a3d4, Func Offset: 0x214
	// Line 410, Address: 0x102a3e8, Func Offset: 0x228
	// Line 411, Address: 0x102a3fc, Func Offset: 0x23c
	// Line 413, Address: 0x102a400, Func Offset: 0x240
	// Line 415, Address: 0x102a408, Func Offset: 0x248
	// Line 418, Address: 0x102a41c, Func Offset: 0x25c
	// Line 419, Address: 0x102a430, Func Offset: 0x270
	// Line 420, Address: 0x102a440, Func Offset: 0x280
	// Line 421, Address: 0x102a450, Func Offset: 0x290
	// Line 423, Address: 0x102a460, Func Offset: 0x2a0
	// Line 424, Address: 0x102a47c, Func Offset: 0x2bc
	// Line 425, Address: 0x102a498, Func Offset: 0x2d8
	// Line 426, Address: 0x102a4a0, Func Offset: 0x2e0
	// Line 448, Address: 0x102a4a8, Func Offset: 0x2e8
	// Line 449, Address: 0x102a4b0, Func Offset: 0x2f0
	// Line 450, Address: 0x102a4bc, Func Offset: 0x2fc
	// Line 451, Address: 0x102a4d4, Func Offset: 0x314
	// Line 452, Address: 0x102a4d8, Func Offset: 0x318
	// Line 453, Address: 0x102a4e8, Func Offset: 0x328
	// Line 454, Address: 0x102a4ec, Func Offset: 0x32c
	// Line 455, Address: 0x102a4f4, Func Offset: 0x334
	// Line 456, Address: 0x102a518, Func Offset: 0x358
	// Line 457, Address: 0x102a528, Func Offset: 0x368
	// Line 458, Address: 0x102a52c, Func Offset: 0x36c
	// Line 459, Address: 0x102a534, Func Offset: 0x374
	// Line 466, Address: 0x102a544, Func Offset: 0x384
	// Line 467, Address: 0x102a56c, Func Offset: 0x3ac
	// Line 468, Address: 0x102a578, Func Offset: 0x3b8
	// Line 469, Address: 0x102a598, Func Offset: 0x3d8
	// Line 471, Address: 0x102a5a4, Func Offset: 0x3e4
	// Line 472, Address: 0x102a5a8, Func Offset: 0x3e8
	// Line 474, Address: 0x102a5b4, Func Offset: 0x3f4
	// Line 475, Address: 0x102a5c0, Func Offset: 0x400
	// Line 476, Address: 0x102a5cc, Func Offset: 0x40c
	// Line 477, Address: 0x102a5e8, Func Offset: 0x428
	// Line 478, Address: 0x102a5fc, Func Offset: 0x43c
	// Line 479, Address: 0x102a620, Func Offset: 0x460
	// Line 480, Address: 0x102a630, Func Offset: 0x470
	// Line 481, Address: 0x102a654, Func Offset: 0x494
	// Line 483, Address: 0x102a664, Func Offset: 0x4a4
	// Line 484, Address: 0x102a670, Func Offset: 0x4b0
	// Line 486, Address: 0x102a694, Func Offset: 0x4d4
	// Line 487, Address: 0x102a6a0, Func Offset: 0x4e0
	// Line 488, Address: 0x102a6b4, Func Offset: 0x4f4
	// Line 490, Address: 0x102a6c4, Func Offset: 0x504
	// Line 492, Address: 0x102a6e8, Func Offset: 0x528
	// Line 493, Address: 0x102a6f4, Func Offset: 0x534
	// Line 494, Address: 0x102a708, Func Offset: 0x548
	// Line 509, Address: 0x102a718, Func Offset: 0x558
	// Line 510, Address: 0x102a720, Func Offset: 0x560
	// Line 511, Address: 0x102a72c, Func Offset: 0x56c
	// Line 512, Address: 0x102a758, Func Offset: 0x598
	// Line 513, Address: 0x102a75c, Func Offset: 0x59c
	// Line 514, Address: 0x102a770, Func Offset: 0x5b0
	// Line 515, Address: 0x102a780, Func Offset: 0x5c0
	// Line 516, Address: 0x102a78c, Func Offset: 0x5cc
	// Line 519, Address: 0x102a798, Func Offset: 0x5d8
	// Line 521, Address: 0x102a7bc, Func Offset: 0x5fc
	// Line 522, Address: 0x102a7c8, Func Offset: 0x608
	// Line 523, Address: 0x102a7dc, Func Offset: 0x61c
	// Line 525, Address: 0x102a7ec, Func Offset: 0x62c
	// Line 527, Address: 0x102a810, Func Offset: 0x650
	// Line 528, Address: 0x102a81c, Func Offset: 0x65c
	// Line 529, Address: 0x102a830, Func Offset: 0x670
	// Line 531, Address: 0x102a840, Func Offset: 0x680
	// Line 533, Address: 0x102a864, Func Offset: 0x6a4
	// Line 534, Address: 0x102a870, Func Offset: 0x6b0
	// Line 535, Address: 0x102a884, Func Offset: 0x6c4
	// Line 537, Address: 0x102a894, Func Offset: 0x6d4
	// Line 539, Address: 0x102a8b8, Func Offset: 0x6f8
	// Line 540, Address: 0x102a8c4, Func Offset: 0x704
	// Line 541, Address: 0x102a8d8, Func Offset: 0x718
	// Line 544, Address: 0x102a8e8, Func Offset: 0x728
	// Line 545, Address: 0x102a920, Func Offset: 0x760
	// Line 546, Address: 0x102a92c, Func Offset: 0x76c
	// Line 547, Address: 0x102a94c, Func Offset: 0x78c
	// Line 548, Address: 0x102a958, Func Offset: 0x798
	// Line 550, Address: 0x102a964, Func Offset: 0x7a4
	// Line 551, Address: 0x102a970, Func Offset: 0x7b0
	// Line 552, Address: 0x102a99c, Func Offset: 0x7dc
	// Line 553, Address: 0x102a9c0, Func Offset: 0x800
	// Line 554, Address: 0x102a9d0, Func Offset: 0x810
	// Line 555, Address: 0x102a9f4, Func Offset: 0x834
	// Line 557, Address: 0x102aa04, Func Offset: 0x844
	// Line 559, Address: 0x102aa28, Func Offset: 0x868
	// Line 560, Address: 0x102aa34, Func Offset: 0x874
	// Line 561, Address: 0x102aa48, Func Offset: 0x888
	// Line 563, Address: 0x102aa58, Func Offset: 0x898
	// Line 564, Address: 0x102aa64, Func Offset: 0x8a4
	// Line 565, Address: 0x102aa70, Func Offset: 0x8b0
	// Line 566, Address: 0x102aa7c, Func Offset: 0x8bc
	// Line 567, Address: 0x102aa84, Func Offset: 0x8c4
	// Line 568, Address: 0x102aa8c, Func Offset: 0x8cc
	// Line 569, Address: 0x102aab0, Func Offset: 0x8f0
	// Line 570, Address: 0x102aac8, Func Offset: 0x908
	// Line 571, Address: 0x102aad0, Func Offset: 0x910
	// Line 572, Address: 0x102aad8, Func Offset: 0x918
	// Line 574, Address: 0x102aaec, Func Offset: 0x92c
	// Line 575, Address: 0x102aaf4, Func Offset: 0x934
	// Line 576, Address: 0x102ab04, Func Offset: 0x944
	// Line 579, Address: 0x102ab0c, Func Offset: 0x94c
	// Line 580, Address: 0x102ab18, Func Offset: 0x958
	// Line 581, Address: 0x102ab3c, Func Offset: 0x97c
	// Line 583, Address: 0x102ab50, Func Offset: 0x990
	// Line 586, Address: 0x102ab7c, Func Offset: 0x9bc
	// Line 588, Address: 0x102ab84, Func Offset: 0x9c4
	// Line 593, Address: 0x102ab90, Func Offset: 0x9d0
	// Line 594, Address: 0x102aba4, Func Offset: 0x9e4
	// Line 595, Address: 0x102abb0, Func Offset: 0x9f0
	// Line 596, Address: 0x102abc4, Func Offset: 0xa04
	// Line 599, Address: 0x102abdc, Func Offset: 0xa1c
	// Line 600, Address: 0x102abf0, Func Offset: 0xa30
	// Line 601, Address: 0x102ac04, Func Offset: 0xa44
	// Line 602, Address: 0x102ac18, Func Offset: 0xa58
	// Line 603, Address: 0x102ac38, Func Offset: 0xa78
	// Line 604, Address: 0x102ac40, Func Offset: 0xa80
	// Line 605, Address: 0x102ac60, Func Offset: 0xaa0
	// Line 606, Address: 0x102ac78, Func Offset: 0xab8
	// Line 607, Address: 0x102ac80, Func Offset: 0xac0
	// Line 608, Address: 0x102acac, Func Offset: 0xaec
	// Line 609, Address: 0x102acc0, Func Offset: 0xb00
	// Line 610, Address: 0x102acdc, Func Offset: 0xb1c
	// Line 613, Address: 0x102ace0, Func Offset: 0xb20
	// Line 614, Address: 0x102acec, Func Offset: 0xb2c
	// Line 615, Address: 0x102acf8, Func Offset: 0xb38
	// Line 616, Address: 0x102ad04, Func Offset: 0xb44
	// Line 617, Address: 0x102ad0c, Func Offset: 0xb4c
	// Line 619, Address: 0x102ad30, Func Offset: 0xb70
	// Func End, Address: 0x102ad58, Func Offset: 0xb98
}

// 
// Start address: 0x102ad60
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 624, Address: 0x102ad60, Func Offset: 0
	// Line 631, Address: 0x102ad94, Func Offset: 0x34
	// Line 632, Address: 0x102adb4, Func Offset: 0x54
	// Line 633, Address: 0x102adbc, Func Offset: 0x5c
	// Line 635, Address: 0x102adc4, Func Offset: 0x64
	// Line 640, Address: 0x102ade8, Func Offset: 0x88
	// Line 641, Address: 0x102adfc, Func Offset: 0x9c
	// Line 643, Address: 0x102ae28, Func Offset: 0xc8
	// Line 644, Address: 0x102ae38, Func Offset: 0xd8
	// Line 645, Address: 0x102ae4c, Func Offset: 0xec
	// Line 648, Address: 0x102ae54, Func Offset: 0xf4
	// Line 651, Address: 0x102ae70, Func Offset: 0x110
	// Line 656, Address: 0x102ae94, Func Offset: 0x134
	// Line 657, Address: 0x102aea4, Func Offset: 0x144
	// Line 660, Address: 0x102aeb8, Func Offset: 0x158
	// Line 662, Address: 0x102aebc, Func Offset: 0x15c
	// Line 665, Address: 0x102aec4, Func Offset: 0x164
	// Line 666, Address: 0x102aecc, Func Offset: 0x16c
	// Line 667, Address: 0x102aed0, Func Offset: 0x170
	// Line 668, Address: 0x102aee0, Func Offset: 0x180
	// Line 673, Address: 0x102af08, Func Offset: 0x1a8
	// Line 674, Address: 0x102af10, Func Offset: 0x1b0
	// Line 675, Address: 0x102af18, Func Offset: 0x1b8
	// Line 679, Address: 0x102af20, Func Offset: 0x1c0
	// Line 680, Address: 0x102af50, Func Offset: 0x1f0
	// Line 683, Address: 0x102af68, Func Offset: 0x208
	// Line 686, Address: 0x102af8c, Func Offset: 0x22c
	// Line 687, Address: 0x102afbc, Func Offset: 0x25c
	// Line 688, Address: 0x102afd4, Func Offset: 0x274
	// Line 696, Address: 0x102afdc, Func Offset: 0x27c
	// Line 697, Address: 0x102b00c, Func Offset: 0x2ac
	// Line 702, Address: 0x102b024, Func Offset: 0x2c4
	// Line 703, Address: 0x102b02c, Func Offset: 0x2cc
	// Line 704, Address: 0x102b030, Func Offset: 0x2d0
	// Line 707, Address: 0x102b048, Func Offset: 0x2e8
	// Line 708, Address: 0x102b05c, Func Offset: 0x2fc
	// Line 709, Address: 0x102b088, Func Offset: 0x328
	// Line 710, Address: 0x102b09c, Func Offset: 0x33c
	// Line 711, Address: 0x102b0b8, Func Offset: 0x358
	// Line 712, Address: 0x102b0c0, Func Offset: 0x360
	// Line 713, Address: 0x102b0c8, Func Offset: 0x368
	// Line 714, Address: 0x102b0cc, Func Offset: 0x36c
	// Line 715, Address: 0x102b0e0, Func Offset: 0x380
	// Line 716, Address: 0x102b0f4, Func Offset: 0x394
	// Line 718, Address: 0x102b118, Func Offset: 0x3b8
	// Line 721, Address: 0x102b120, Func Offset: 0x3c0
	// Line 722, Address: 0x102b130, Func Offset: 0x3d0
	// Line 723, Address: 0x102b13c, Func Offset: 0x3dc
	// Line 724, Address: 0x102b160, Func Offset: 0x400
	// Line 725, Address: 0x102b168, Func Offset: 0x408
	// Func End, Address: 0x102b188, Func Offset: 0x428
}

// 
// Start address: 0x102b190
void scroll_h()
{
	unsigned short wD4;
	// Line 741, Address: 0x102b190, Func Offset: 0
	// Line 744, Address: 0x102b19c, Func Offset: 0xc
	// Line 745, Address: 0x102b1a8, Func Offset: 0x18
	// Line 746, Address: 0x102b1b0, Func Offset: 0x20
	// Line 747, Address: 0x102b1e4, Func Offset: 0x54
	// Line 748, Address: 0x102b1f8, Func Offset: 0x68
	// Line 749, Address: 0x102b224, Func Offset: 0x94
	// Line 750, Address: 0x102b238, Func Offset: 0xa8
	// Line 753, Address: 0x102b240, Func Offset: 0xb0
	// Line 758, Address: 0x102b254, Func Offset: 0xc4
	// Func End, Address: 0x102b268, Func Offset: 0xd8
}

// 
// Start address: 0x102b270
void scrh_move()
{
	unsigned short wD0;
	// Line 760, Address: 0x102b270, Func Offset: 0
	// Line 763, Address: 0x102b27c, Func Offset: 0xc
	// Line 764, Address: 0x102b288, Func Offset: 0x18
	// Line 765, Address: 0x102b29c, Func Offset: 0x2c
	// Line 766, Address: 0x102b2b0, Func Offset: 0x40
	// Line 768, Address: 0x102b2bc, Func Offset: 0x4c
	// Line 769, Address: 0x102b2c4, Func Offset: 0x54
	// Line 770, Address: 0x102b2cc, Func Offset: 0x5c
	// Line 771, Address: 0x102b2e4, Func Offset: 0x74
	// Line 772, Address: 0x102b2f0, Func Offset: 0x80
	// Line 774, Address: 0x102b2f8, Func Offset: 0x88
	// Line 777, Address: 0x102b304, Func Offset: 0x94
	// Func End, Address: 0x102b318, Func Offset: 0xa8
}

// 
// Start address: 0x102b320
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 780, Address: 0x102b320, Func Offset: 0
	// Line 783, Address: 0x102b32c, Func Offset: 0xc
	// Line 784, Address: 0x102b34c, Func Offset: 0x2c
	// Line 787, Address: 0x102b354, Func Offset: 0x34
	// Line 788, Address: 0x102b36c, Func Offset: 0x4c
	// Line 789, Address: 0x102b39c, Func Offset: 0x7c
	// Line 792, Address: 0x102b3a8, Func Offset: 0x88
	// Line 793, Address: 0x102b3b0, Func Offset: 0x90
	// Line 794, Address: 0x102b3c4, Func Offset: 0xa4
	// Line 795, Address: 0x102b3f4, Func Offset: 0xd4
	// Line 796, Address: 0x102b400, Func Offset: 0xe0
	// Line 798, Address: 0x102b408, Func Offset: 0xe8
	// Func End, Address: 0x102b418, Func Offset: 0xf8
}

// 
// Start address: 0x102b420
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 801, Address: 0x102b420, Func Offset: 0
	// Line 804, Address: 0x102b42c, Func Offset: 0xc
	// Line 805, Address: 0x102b44c, Func Offset: 0x2c
	// Line 808, Address: 0x102b454, Func Offset: 0x34
	// Line 809, Address: 0x102b46c, Func Offset: 0x4c
	// Line 810, Address: 0x102b49c, Func Offset: 0x7c
	// Line 813, Address: 0x102b4a8, Func Offset: 0x88
	// Line 814, Address: 0x102b4b0, Func Offset: 0x90
	// Line 815, Address: 0x102b4c4, Func Offset: 0xa4
	// Line 816, Address: 0x102b4f4, Func Offset: 0xd4
	// Line 817, Address: 0x102b500, Func Offset: 0xe0
	// Line 819, Address: 0x102b508, Func Offset: 0xe8
	// Func End, Address: 0x102b518, Func Offset: 0xf8
}

// 
// Start address: 0x102b520
void scroll_v()
{
	unsigned short wD0;
	// Line 838, Address: 0x102b520, Func Offset: 0
	// Line 841, Address: 0x102b52c, Func Offset: 0xc
	// Line 842, Address: 0x102b558, Func Offset: 0x38
	// Line 843, Address: 0x102b570, Func Offset: 0x50
	// Line 846, Address: 0x102b578, Func Offset: 0x58
	// Line 847, Address: 0x102b590, Func Offset: 0x70
	// Line 848, Address: 0x102b598, Func Offset: 0x78
	// Line 849, Address: 0x102b5b8, Func Offset: 0x98
	// Line 850, Address: 0x102b5cc, Func Offset: 0xac
	// Line 851, Address: 0x102b5d8, Func Offset: 0xb8
	// Line 853, Address: 0x102b5e0, Func Offset: 0xc0
	// Line 854, Address: 0x102b5f4, Func Offset: 0xd4
	// Line 855, Address: 0x102b604, Func Offset: 0xe4
	// Line 856, Address: 0x102b60c, Func Offset: 0xec
	// Line 857, Address: 0x102b618, Func Offset: 0xf8
	// Line 859, Address: 0x102b620, Func Offset: 0x100
	// Line 860, Address: 0x102b628, Func Offset: 0x108
	// Line 861, Address: 0x102b63c, Func Offset: 0x11c
	// Line 862, Address: 0x102b644, Func Offset: 0x124
	// Line 868, Address: 0x102b64c, Func Offset: 0x12c
	// Line 869, Address: 0x102b660, Func Offset: 0x140
	// Line 870, Address: 0x102b668, Func Offset: 0x148
	// Line 871, Address: 0x102b674, Func Offset: 0x154
	// Line 873, Address: 0x102b67c, Func Offset: 0x15c
	// Line 874, Address: 0x102b690, Func Offset: 0x170
	// Line 875, Address: 0x102b698, Func Offset: 0x178
	// Line 880, Address: 0x102b6a0, Func Offset: 0x180
	// Line 882, Address: 0x102b6a8, Func Offset: 0x188
	// Func End, Address: 0x102b6bc, Func Offset: 0x19c
}

// 
// Start address: 0x102b6c0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 888, Address: 0x102b6c0, Func Offset: 0
	// Line 891, Address: 0x102b6d0, Func Offset: 0x10
	// Line 892, Address: 0x102b6ec, Func Offset: 0x2c
	// Line 893, Address: 0x102b6f8, Func Offset: 0x38
	// Line 896, Address: 0x102b700, Func Offset: 0x40
	// Line 897, Address: 0x102b70c, Func Offset: 0x4c
	// Line 898, Address: 0x102b724, Func Offset: 0x64
	// Line 901, Address: 0x102b740, Func Offset: 0x80
	// Line 902, Address: 0x102b750, Func Offset: 0x90
	// Line 903, Address: 0x102b75c, Func Offset: 0x9c
	// Line 905, Address: 0x102b764, Func Offset: 0xa4
	// Line 906, Address: 0x102b784, Func Offset: 0xc4
	// Line 907, Address: 0x102b790, Func Offset: 0xd0
	// Line 908, Address: 0x102b798, Func Offset: 0xd8
	// Line 909, Address: 0x102b7b8, Func Offset: 0xf8
	// Line 910, Address: 0x102b7c4, Func Offset: 0x104
	// Line 912, Address: 0x102b7cc, Func Offset: 0x10c
	// Line 916, Address: 0x102b7d8, Func Offset: 0x118
	// Func End, Address: 0x102b7ec, Func Offset: 0x12c
}

// 
// Start address: 0x102b7f0
void sv_move_main1(unsigned short wD0)
{
	// Line 920, Address: 0x102b7f0, Func Offset: 0
	// Line 922, Address: 0x102b7fc, Func Offset: 0xc
	// Line 923, Address: 0x102b81c, Func Offset: 0x2c
	// Line 924, Address: 0x102b828, Func Offset: 0x38
	// Line 925, Address: 0x102b830, Func Offset: 0x40
	// Line 926, Address: 0x102b850, Func Offset: 0x60
	// Line 927, Address: 0x102b85c, Func Offset: 0x6c
	// Line 929, Address: 0x102b864, Func Offset: 0x74
	// Line 932, Address: 0x102b870, Func Offset: 0x80
	// Func End, Address: 0x102b880, Func Offset: 0x90
}

// 
// Start address: 0x102b880
void sv_move_main2(unsigned short wD0)
{
	// Line 935, Address: 0x102b880, Func Offset: 0
	// Line 937, Address: 0x102b88c, Func Offset: 0xc
	// Line 938, Address: 0x102b8ac, Func Offset: 0x2c
	// Line 939, Address: 0x102b8b8, Func Offset: 0x38
	// Line 940, Address: 0x102b8c0, Func Offset: 0x40
	// Line 941, Address: 0x102b8e0, Func Offset: 0x60
	// Line 942, Address: 0x102b8ec, Func Offset: 0x6c
	// Line 944, Address: 0x102b8f4, Func Offset: 0x74
	// Line 947, Address: 0x102b900, Func Offset: 0x80
	// Func End, Address: 0x102b910, Func Offset: 0x90
}

// 
// Start address: 0x102b910
void sv_move_sub2()
{
	// Line 950, Address: 0x102b910, Func Offset: 0
	// Line 951, Address: 0x102b918, Func Offset: 0x8
	// Line 952, Address: 0x102b920, Func Offset: 0x10
	// Line 953, Address: 0x102b92c, Func Offset: 0x1c
	// Func End, Address: 0x102b93c, Func Offset: 0x2c
}

// 
// Start address: 0x102b940
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 956, Address: 0x102b940, Func Offset: 0
	// Line 959, Address: 0x102b94c, Func Offset: 0xc
	// Line 960, Address: 0x102b950, Func Offset: 0x10
	// Line 961, Address: 0x102b958, Func Offset: 0x18
	// Line 962, Address: 0x102b974, Func Offset: 0x34
	// Line 963, Address: 0x102b990, Func Offset: 0x50
	// Line 964, Address: 0x102b99c, Func Offset: 0x5c
	// Line 966, Address: 0x102b9a4, Func Offset: 0x64
	// Line 969, Address: 0x102b9b0, Func Offset: 0x70
	// Func End, Address: 0x102b9c0, Func Offset: 0x80
}

// 
// Start address: 0x102b9c0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 974, Address: 0x102b9c0, Func Offset: 0
	// Line 978, Address: 0x102b9d0, Func Offset: 0x10
	// Line 979, Address: 0x102b9ec, Func Offset: 0x2c
	// Line 980, Address: 0x102b9f8, Func Offset: 0x38
	// Line 982, Address: 0x102ba0c, Func Offset: 0x4c
	// Line 983, Address: 0x102ba14, Func Offset: 0x54
	// Line 984, Address: 0x102ba1c, Func Offset: 0x5c
	// Line 985, Address: 0x102ba20, Func Offset: 0x60
	// Line 986, Address: 0x102ba2c, Func Offset: 0x6c
	// Func End, Address: 0x102ba40, Func Offset: 0x80
}

// 
// Start address: 0x102ba40
void scrv_up_ch(_anon2 lD1)
{
	// Line 990, Address: 0x102ba40, Func Offset: 0
	// Line 991, Address: 0x102ba4c, Func Offset: 0xc
	// Line 992, Address: 0x102ba74, Func Offset: 0x34
	// Line 993, Address: 0x102ba8c, Func Offset: 0x4c
	// Line 994, Address: 0x102ba98, Func Offset: 0x58
	// Line 995, Address: 0x102baac, Func Offset: 0x6c
	// Line 996, Address: 0x102bac0, Func Offset: 0x80
	// Line 997, Address: 0x102bad4, Func Offset: 0x94
	// Line 1000, Address: 0x102badc, Func Offset: 0x9c
	// Line 1003, Address: 0x102bae8, Func Offset: 0xa8
	// Line 1005, Address: 0x102baf4, Func Offset: 0xb4
	// Func End, Address: 0x102bb04, Func Offset: 0xc4
}

// 
// Start address: 0x102bb10
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 1011, Address: 0x102bb10, Func Offset: 0
	// Line 1015, Address: 0x102bb20, Func Offset: 0x10
	// Line 1016, Address: 0x102bb24, Func Offset: 0x14
	// Line 1017, Address: 0x102bb2c, Func Offset: 0x1c
	// Line 1018, Address: 0x102bb38, Func Offset: 0x28
	// Line 1020, Address: 0x102bb4c, Func Offset: 0x3c
	// Line 1021, Address: 0x102bb54, Func Offset: 0x44
	// Line 1022, Address: 0x102bb5c, Func Offset: 0x4c
	// Line 1024, Address: 0x102bb60, Func Offset: 0x50
	// Line 1026, Address: 0x102bb6c, Func Offset: 0x5c
	// Func End, Address: 0x102bb80, Func Offset: 0x70
}

// 
// Start address: 0x102bb80
void scrv_down_ch(_anon2 lD1)
{
	// Line 1030, Address: 0x102bb80, Func Offset: 0
	// Line 1031, Address: 0x102bb8c, Func Offset: 0xc
	// Line 1032, Address: 0x102bbb4, Func Offset: 0x34
	// Line 1033, Address: 0x102bbc0, Func Offset: 0x40
	// Line 1034, Address: 0x102bbd4, Func Offset: 0x54
	// Line 1035, Address: 0x102bbe8, Func Offset: 0x68
	// Line 1036, Address: 0x102bbfc, Func Offset: 0x7c
	// Line 1037, Address: 0x102bc10, Func Offset: 0x90
	// Line 1039, Address: 0x102bc18, Func Offset: 0x98
	// Line 1042, Address: 0x102bc24, Func Offset: 0xa4
	// Line 1044, Address: 0x102bc30, Func Offset: 0xb0
	// Func End, Address: 0x102bc40, Func Offset: 0xc0
}

// 
// Start address: 0x102bc40
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1047, Address: 0x102bc40, Func Offset: 0
	// Line 1050, Address: 0x102bc50, Func Offset: 0x10
	// Line 1052, Address: 0x102bc5c, Func Offset: 0x1c
	// Line 1053, Address: 0x102bc64, Func Offset: 0x24
	// Line 1054, Address: 0x102bc6c, Func Offset: 0x2c
	// Line 1056, Address: 0x102bc70, Func Offset: 0x30
	// Line 1057, Address: 0x102bc98, Func Offset: 0x58
	// Line 1060, Address: 0x102bca4, Func Offset: 0x64
	// Line 1061, Address: 0x102bcd8, Func Offset: 0x98
	// Line 1062, Address: 0x102bcec, Func Offset: 0xac
	// Line 1064, Address: 0x102bd18, Func Offset: 0xd8
	// Line 1065, Address: 0x102bd2c, Func Offset: 0xec
	// Line 1067, Address: 0x102bd34, Func Offset: 0xf4
	// Line 1072, Address: 0x102bd48, Func Offset: 0x108
	// Func End, Address: 0x102bd5c, Func Offset: 0x11c
}

// 
// Start address: 0x102bd60
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1076, Address: 0x102bd60, Func Offset: 0
	// Line 1079, Address: 0x102bd6c, Func Offset: 0xc
	// Line 1080, Address: 0x102bd7c, Func Offset: 0x1c
	// Line 1081, Address: 0x102bd8c, Func Offset: 0x2c
	// Line 1083, Address: 0x102bd98, Func Offset: 0x38
	// Line 1085, Address: 0x102bdcc, Func Offset: 0x6c
	// Line 1086, Address: 0x102bde0, Func Offset: 0x80
	// Line 1087, Address: 0x102bdf0, Func Offset: 0x90
	// Line 1088, Address: 0x102be04, Func Offset: 0xa4
	// Line 1089, Address: 0x102be18, Func Offset: 0xb8
	// Line 1092, Address: 0x102be20, Func Offset: 0xc0
	// Line 1097, Address: 0x102be34, Func Offset: 0xd4
	// Line 1098, Address: 0x102be44, Func Offset: 0xe4
	// Line 1099, Address: 0x102be54, Func Offset: 0xf4
	// Line 1101, Address: 0x102be60, Func Offset: 0x100
	// Line 1103, Address: 0x102be94, Func Offset: 0x134
	// Line 1104, Address: 0x102bea8, Func Offset: 0x148
	// Line 1105, Address: 0x102beb8, Func Offset: 0x158
	// Line 1106, Address: 0x102becc, Func Offset: 0x16c
	// Line 1107, Address: 0x102bee0, Func Offset: 0x180
	// Line 1110, Address: 0x102bee8, Func Offset: 0x188
	// Line 1115, Address: 0x102befc, Func Offset: 0x19c
	// Func End, Address: 0x102bf08, Func Offset: 0x1a8
}

// 
// Start address: 0x102bf10
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1122, Address: 0x102bf10, Func Offset: 0
	// Line 1125, Address: 0x102bf1c, Func Offset: 0xc
	// Line 1126, Address: 0x102bf28, Func Offset: 0x18
	// Line 1128, Address: 0x102bf34, Func Offset: 0x24
	// Line 1129, Address: 0x102bf60, Func Offset: 0x50
	// Line 1130, Address: 0x102bf74, Func Offset: 0x64
	// Line 1131, Address: 0x102bfa4, Func Offset: 0x94
	// Line 1132, Address: 0x102bfb8, Func Offset: 0xa8
	// Line 1135, Address: 0x102bfc0, Func Offset: 0xb0
	// Line 1140, Address: 0x102bfd4, Func Offset: 0xc4
	// Func End, Address: 0x102bfe4, Func Offset: 0xd4
}

// 
// Start address: 0x102bff0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1144, Address: 0x102bff0, Func Offset: 0
	// Line 1148, Address: 0x102c000, Func Offset: 0x10
	// Line 1149, Address: 0x102c00c, Func Offset: 0x1c
	// Line 1150, Address: 0x102c01c, Func Offset: 0x2c
	// Line 1152, Address: 0x102c028, Func Offset: 0x38
	// Line 1153, Address: 0x102c030, Func Offset: 0x40
	// Line 1154, Address: 0x102c038, Func Offset: 0x48
	// Line 1156, Address: 0x102c044, Func Offset: 0x54
	// Line 1157, Address: 0x102c050, Func Offset: 0x60
	// Line 1158, Address: 0x102c064, Func Offset: 0x74
	// Line 1159, Address: 0x102c070, Func Offset: 0x80
	// Line 1160, Address: 0x102c084, Func Offset: 0x94
	// Line 1161, Address: 0x102c094, Func Offset: 0xa4
	// Line 1162, Address: 0x102c0a8, Func Offset: 0xb8
	// Line 1163, Address: 0x102c0c4, Func Offset: 0xd4
	// Line 1166, Address: 0x102c0cc, Func Offset: 0xdc
	// Line 1171, Address: 0x102c0ec, Func Offset: 0xfc
	// Func End, Address: 0x102c0fc, Func Offset: 0x10c
}

// 
// Start address: 0x102c100
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1175, Address: 0x102c100, Func Offset: 0
	// Line 1179, Address: 0x102c110, Func Offset: 0x10
	// Line 1180, Address: 0x102c11c, Func Offset: 0x1c
	// Line 1181, Address: 0x102c12c, Func Offset: 0x2c
	// Line 1183, Address: 0x102c138, Func Offset: 0x38
	// Line 1184, Address: 0x102c140, Func Offset: 0x40
	// Line 1185, Address: 0x102c148, Func Offset: 0x48
	// Line 1187, Address: 0x102c154, Func Offset: 0x54
	// Line 1188, Address: 0x102c160, Func Offset: 0x60
	// Line 1189, Address: 0x102c174, Func Offset: 0x74
	// Line 1190, Address: 0x102c180, Func Offset: 0x80
	// Line 1191, Address: 0x102c194, Func Offset: 0x94
	// Line 1192, Address: 0x102c1a4, Func Offset: 0xa4
	// Line 1193, Address: 0x102c1b8, Func Offset: 0xb8
	// Line 1194, Address: 0x102c1d4, Func Offset: 0xd4
	// Line 1197, Address: 0x102c1dc, Func Offset: 0xdc
	// Line 1202, Address: 0x102c1fc, Func Offset: 0xfc
	// Func End, Address: 0x102c20c, Func Offset: 0x10c
}

// 
// Start address: 0x102c210
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1214, Address: 0x102c210, Func Offset: 0
	// Line 1218, Address: 0x102c220, Func Offset: 0x10
	// Line 1219, Address: 0x102c22c, Func Offset: 0x1c
	// Line 1220, Address: 0x102c23c, Func Offset: 0x2c
	// Line 1222, Address: 0x102c248, Func Offset: 0x38
	// Line 1223, Address: 0x102c250, Func Offset: 0x40
	// Line 1224, Address: 0x102c258, Func Offset: 0x48
	// Line 1226, Address: 0x102c264, Func Offset: 0x54
	// Line 1227, Address: 0x102c270, Func Offset: 0x60
	// Line 1228, Address: 0x102c284, Func Offset: 0x74
	// Line 1229, Address: 0x102c290, Func Offset: 0x80
	// Line 1230, Address: 0x102c2a4, Func Offset: 0x94
	// Line 1231, Address: 0x102c2b4, Func Offset: 0xa4
	// Line 1232, Address: 0x102c2c8, Func Offset: 0xb8
	// Line 1233, Address: 0x102c2e4, Func Offset: 0xd4
	// Line 1236, Address: 0x102c2ec, Func Offset: 0xdc
	// Line 1241, Address: 0x102c30c, Func Offset: 0xfc
	// Func End, Address: 0x102c31c, Func Offset: 0x10c
}

// 
// Start address: 0x102c320
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1256, Address: 0x102c320, Func Offset: 0
	// Line 1262, Address: 0x102c33c, Func Offset: 0x1c
	// Line 1263, Address: 0x102c340, Func Offset: 0x20
	// Line 1264, Address: 0x102c34c, Func Offset: 0x2c
	// Line 1265, Address: 0x102c358, Func Offset: 0x38
	// Line 1266, Address: 0x102c360, Func Offset: 0x40
	// Line 1267, Address: 0x102c368, Func Offset: 0x48
	// Line 1275, Address: 0x102c37c, Func Offset: 0x5c
	// Func End, Address: 0x102c3a0, Func Offset: 0x80
}

// 
// Start address: 0x102c3a0
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
	// Line 1288, Address: 0x102c3a0, Func Offset: 0
	// Line 1297, Address: 0x102c3c0, Func Offset: 0x20
	// Line 1298, Address: 0x102c3c4, Func Offset: 0x24
	// Line 1299, Address: 0x102c3d0, Func Offset: 0x30
	// Line 1300, Address: 0x102c3dc, Func Offset: 0x3c
	// Line 1301, Address: 0x102c3e4, Func Offset: 0x44
	// Line 1302, Address: 0x102c3ec, Func Offset: 0x4c
	// Line 1304, Address: 0x102c400, Func Offset: 0x60
	// Line 1305, Address: 0x102c404, Func Offset: 0x64
	// Line 1306, Address: 0x102c410, Func Offset: 0x70
	// Line 1307, Address: 0x102c41c, Func Offset: 0x7c
	// Line 1308, Address: 0x102c424, Func Offset: 0x84
	// Line 1310, Address: 0x102c42c, Func Offset: 0x8c
	// Line 1311, Address: 0x102c438, Func Offset: 0x98
	// Line 1312, Address: 0x102c44c, Func Offset: 0xac
	// Line 1314, Address: 0x102c458, Func Offset: 0xb8
	// Line 1315, Address: 0x102c460, Func Offset: 0xc0
	// Line 1317, Address: 0x102c468, Func Offset: 0xc8
	// Line 1319, Address: 0x102c488, Func Offset: 0xe8
	// Line 1325, Address: 0x102c4b4, Func Offset: 0x114
	// Line 1326, Address: 0x102c4c8, Func Offset: 0x128
	// Line 1328, Address: 0x102c4d4, Func Offset: 0x134
	// Line 1329, Address: 0x102c4dc, Func Offset: 0x13c
	// Line 1330, Address: 0x102c4e4, Func Offset: 0x144
	// Line 1332, Address: 0x102c504, Func Offset: 0x164
	// Line 1338, Address: 0x102c530, Func Offset: 0x190
	// Line 1339, Address: 0x102c544, Func Offset: 0x1a4
	// Line 1341, Address: 0x102c550, Func Offset: 0x1b0
	// Line 1342, Address: 0x102c558, Func Offset: 0x1b8
	// Line 1343, Address: 0x102c560, Func Offset: 0x1c0
	// Line 1345, Address: 0x102c580, Func Offset: 0x1e0
	// Line 1351, Address: 0x102c5ac, Func Offset: 0x20c
	// Line 1352, Address: 0x102c5c0, Func Offset: 0x220
	// Line 1354, Address: 0x102c5cc, Func Offset: 0x22c
	// Line 1355, Address: 0x102c5d4, Func Offset: 0x234
	// Line 1356, Address: 0x102c5dc, Func Offset: 0x23c
	// Line 1358, Address: 0x102c5fc, Func Offset: 0x25c
	// Line 1367, Address: 0x102c628, Func Offset: 0x288
	// Func End, Address: 0x102c650, Func Offset: 0x2b0
}

// 
// Start address: 0x102c650
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
	// Line 1384, Address: 0x102c650, Func Offset: 0
	// Line 1395, Address: 0x102c67c, Func Offset: 0x2c
	// Line 1397, Address: 0x102c684, Func Offset: 0x34
	// Line 1398, Address: 0x102c69c, Func Offset: 0x4c
	// Line 1399, Address: 0x102c6b0, Func Offset: 0x60
	// Line 1401, Address: 0x102c6b8, Func Offset: 0x68
	// Line 1403, Address: 0x102c6cc, Func Offset: 0x7c
	// Line 1404, Address: 0x102c6e4, Func Offset: 0x94
	// Line 1405, Address: 0x102c6f8, Func Offset: 0xa8
	// Line 1406, Address: 0x102c700, Func Offset: 0xb0
	// Line 1408, Address: 0x102c708, Func Offset: 0xb8
	// Line 1409, Address: 0x102c71c, Func Offset: 0xcc
	// Line 1414, Address: 0x102c724, Func Offset: 0xd4
	// Line 1415, Address: 0x102c774, Func Offset: 0x124
	// Line 1416, Address: 0x102c77c, Func Offset: 0x12c
	// Line 1422, Address: 0x102c79c, Func Offset: 0x14c
	// Line 1423, Address: 0x102c7bc, Func Offset: 0x16c
	// Line 1424, Address: 0x102c7e0, Func Offset: 0x190
	// Line 1425, Address: 0x102c7ec, Func Offset: 0x19c
	// Line 1426, Address: 0x102c7f4, Func Offset: 0x1a4
	// Line 1428, Address: 0x102c814, Func Offset: 0x1c4
	// Line 1432, Address: 0x102c840, Func Offset: 0x1f0
	// Line 1435, Address: 0x102c848, Func Offset: 0x1f8
	// Line 1436, Address: 0x102c84c, Func Offset: 0x1fc
	// Line 1440, Address: 0x102c86c, Func Offset: 0x21c
	// Line 1447, Address: 0x102c898, Func Offset: 0x248
	// Line 1454, Address: 0x102c8ac, Func Offset: 0x25c
	// Line 1455, Address: 0x102c8b4, Func Offset: 0x264
	// Line 1456, Address: 0x102c8bc, Func Offset: 0x26c
	// Line 1457, Address: 0x102c8d4, Func Offset: 0x284
	// Line 1458, Address: 0x102c8f4, Func Offset: 0x2a4
	// Line 1462, Address: 0x102c8fc, Func Offset: 0x2ac
	// Line 1464, Address: 0x102c92c, Func Offset: 0x2dc
	// Line 1465, Address: 0x102c938, Func Offset: 0x2e8
	// Line 1469, Address: 0x102c948, Func Offset: 0x2f8
	// Line 1470, Address: 0x102c954, Func Offset: 0x304
	// Line 1471, Address: 0x102c974, Func Offset: 0x324
	// Line 1472, Address: 0x102c9a0, Func Offset: 0x350
	// Line 1473, Address: 0x102c9c0, Func Offset: 0x370
	// Line 1475, Address: 0x102c9e4, Func Offset: 0x394
	// Line 1478, Address: 0x102ca08, Func Offset: 0x3b8
	// Line 1480, Address: 0x102ca28, Func Offset: 0x3d8
	// Line 1482, Address: 0x102ca3c, Func Offset: 0x3ec
	// Line 1483, Address: 0x102ca48, Func Offset: 0x3f8
	// Line 1484, Address: 0x102ca58, Func Offset: 0x408
	// Line 1486, Address: 0x102ca60, Func Offset: 0x410
	// Func End, Address: 0x102ca88, Func Offset: 0x438
}

// 
// Start address: 0x102ca90
void scrollwrtc()
{
	// Line 1494, Address: 0x102ca90, Func Offset: 0
	// Func End, Address: 0x102ca98, Func Offset: 0x8
}

// 
// Start address: 0x102caa0
void scrollwrtz()
{
	// Line 1499, Address: 0x102caa0, Func Offset: 0
	// Func End, Address: 0x102caa8, Func Offset: 0x8
}

// 
// Start address: 0x102cab0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1520, Address: 0x102cab0, Func Offset: 0
	// Line 1533, Address: 0x102cad8, Func Offset: 0x28
	// Line 1536, Address: 0x102caf8, Func Offset: 0x48
	// Line 1537, Address: 0x102cb0c, Func Offset: 0x5c
	// Line 1538, Address: 0x102cb20, Func Offset: 0x70
	// Line 1539, Address: 0x102cb34, Func Offset: 0x84
	// Line 1541, Address: 0x102cb48, Func Offset: 0x98
	// Line 1542, Address: 0x102cb54, Func Offset: 0xa4
	// Line 1543, Address: 0x102cb68, Func Offset: 0xb8
	// Func End, Address: 0x102cb78, Func Offset: 0xc8
}

// 
// Start address: 0x102cb80
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1547, Address: 0x102cb80, Func Offset: 0
	// Line 1551, Address: 0x102cba8, Func Offset: 0x28
	// Line 1554, Address: 0x102cbc8, Func Offset: 0x48
	// Line 1555, Address: 0x102cbdc, Func Offset: 0x5c
	// Line 1556, Address: 0x102cbf0, Func Offset: 0x70
	// Line 1557, Address: 0x102cc04, Func Offset: 0x84
	// Line 1559, Address: 0x102cc18, Func Offset: 0x98
	// Line 1560, Address: 0x102cc24, Func Offset: 0xa4
	// Line 1561, Address: 0x102cc38, Func Offset: 0xb8
	// Func End, Address: 0x102cc48, Func Offset: 0xc8
}

// 
// Start address: 0x102cc50
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1580, Address: 0x102cc50, Func Offset: 0
	// Line 1584, Address: 0x102cc78, Func Offset: 0x28
	// Line 1587, Address: 0x102cc98, Func Offset: 0x48
	// Line 1588, Address: 0x102ccac, Func Offset: 0x5c
	// Line 1589, Address: 0x102ccbc, Func Offset: 0x6c
	// Line 1590, Address: 0x102ccd0, Func Offset: 0x80
	// Line 1592, Address: 0x102cce0, Func Offset: 0x90
	// Line 1593, Address: 0x102ccec, Func Offset: 0x9c
	// Line 1594, Address: 0x102cd00, Func Offset: 0xb0
	// Func End, Address: 0x102cd10, Func Offset: 0xc0
}

// 
// Start address: 0x102cd10
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
	// Line 1613, Address: 0x102cd10, Func Offset: 0
	// Line 1619, Address: 0x102cd44, Func Offset: 0x34
	// Line 1621, Address: 0x102cd54, Func Offset: 0x44
	// Line 1622, Address: 0x102cd58, Func Offset: 0x48
	// Line 1623, Address: 0x102cd60, Func Offset: 0x50
	// Line 1625, Address: 0x102cd70, Func Offset: 0x60
	// Line 1627, Address: 0x102cd74, Func Offset: 0x64
	// Line 1628, Address: 0x102cd7c, Func Offset: 0x6c
	// Line 1631, Address: 0x102cd84, Func Offset: 0x74
	// Line 1632, Address: 0x102cd8c, Func Offset: 0x7c
	// Line 1633, Address: 0x102cd98, Func Offset: 0x88
	// Line 1635, Address: 0x102cda4, Func Offset: 0x94
	// Line 1636, Address: 0x102cdac, Func Offset: 0x9c
	// Line 1637, Address: 0x102cdb4, Func Offset: 0xa4
	// Line 1638, Address: 0x102cdbc, Func Offset: 0xac
	// Line 1640, Address: 0x102cdc8, Func Offset: 0xb8
	// Line 1641, Address: 0x102cdd0, Func Offset: 0xc0
	// Line 1642, Address: 0x102cdd8, Func Offset: 0xc8
	// Line 1643, Address: 0x102cde0, Func Offset: 0xd0
	// Line 1645, Address: 0x102cdec, Func Offset: 0xdc
	// Line 1646, Address: 0x102cdf4, Func Offset: 0xe4
	// Line 1647, Address: 0x102cdfc, Func Offset: 0xec
	// Line 1650, Address: 0x102ce04, Func Offset: 0xf4
	// Line 1651, Address: 0x102ce0c, Func Offset: 0xfc
	// Line 1654, Address: 0x102ce14, Func Offset: 0x104
	// Line 1655, Address: 0x102ce58, Func Offset: 0x148
	// Line 1656, Address: 0x102ce9c, Func Offset: 0x18c
	// Line 1657, Address: 0x102cee0, Func Offset: 0x1d0
	// Line 1659, Address: 0x102cf24, Func Offset: 0x214
	// Func End, Address: 0x102cf54, Func Offset: 0x244
}

// 
// Start address: 0x102cf60
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1677, Address: 0x102cf60, Func Offset: 0
	// Line 1678, Address: 0x102cf80, Func Offset: 0x20
	// Line 1679, Address: 0x102cfa0, Func Offset: 0x40
	// Func End, Address: 0x102cfb0, Func Offset: 0x50
}

// 
// Start address: 0x102cfb0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1681, Address: 0x102cfb0, Func Offset: 0
	// Line 1682, Address: 0x102cfd0, Func Offset: 0x20
	// Line 1683, Address: 0x102cfd4, Func Offset: 0x24
	// Line 1684, Address: 0x102cff4, Func Offset: 0x44
	// Func End, Address: 0x102d004, Func Offset: 0x54
}

// 
// Start address: 0x102d010
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1691, Address: 0x102d010, Func Offset: 0
	// Line 1697, Address: 0x102d040, Func Offset: 0x30
	// Line 1698, Address: 0x102d050, Func Offset: 0x40
	// Line 1704, Address: 0x102d060, Func Offset: 0x50
	// Line 1705, Address: 0x102d07c, Func Offset: 0x6c
	// Line 1706, Address: 0x102d080, Func Offset: 0x70
	// Line 1707, Address: 0x102d09c, Func Offset: 0x8c
	// Line 1708, Address: 0x102d0a0, Func Offset: 0x90
	// Line 1709, Address: 0x102d0c0, Func Offset: 0xb0
	// Line 1710, Address: 0x102d0c8, Func Offset: 0xb8
	// Line 1711, Address: 0x102d0e8, Func Offset: 0xd8
	// Line 1712, Address: 0x102d0f0, Func Offset: 0xe0
	// Line 1713, Address: 0x102d138, Func Offset: 0x128
	// Line 1715, Address: 0x102d144, Func Offset: 0x134
	// Line 1717, Address: 0x102d160, Func Offset: 0x150
	// Line 1722, Address: 0x102d168, Func Offset: 0x158
	// Line 1723, Address: 0x102d174, Func Offset: 0x164
	// Line 1726, Address: 0x102d180, Func Offset: 0x170
	// Line 1727, Address: 0x102d188, Func Offset: 0x178
	// Line 1728, Address: 0x102d1a8, Func Offset: 0x198
	// Line 1729, Address: 0x102d1c4, Func Offset: 0x1b4
	// Line 1730, Address: 0x102d1cc, Func Offset: 0x1bc
	// Line 1731, Address: 0x102d1ec, Func Offset: 0x1dc
	// Line 1733, Address: 0x102d208, Func Offset: 0x1f8
	// Line 1734, Address: 0x102d210, Func Offset: 0x200
	// Line 1735, Address: 0x102d218, Func Offset: 0x208
	// Line 1736, Address: 0x102d224, Func Offset: 0x214
	// Line 1737, Address: 0x102d23c, Func Offset: 0x22c
	// Line 1739, Address: 0x102d24c, Func Offset: 0x23c
	// Line 1742, Address: 0x102d258, Func Offset: 0x248
	// Line 1743, Address: 0x102d260, Func Offset: 0x250
	// Line 1744, Address: 0x102d264, Func Offset: 0x254
	// Func End, Address: 0x102d284, Func Offset: 0x274
}

// 
// Start address: 0x102d290
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1764, Address: 0x102d290, Func Offset: 0
	// Line 1772, Address: 0x102d2b8, Func Offset: 0x28
	// Line 1773, Address: 0x102d31c, Func Offset: 0x8c
	// Line 1779, Address: 0x102d324, Func Offset: 0x94
	// Line 1780, Address: 0x102d32c, Func Offset: 0x9c
	// Line 1781, Address: 0x102d34c, Func Offset: 0xbc
	// Line 1782, Address: 0x102d368, Func Offset: 0xd8
	// Line 1783, Address: 0x102d370, Func Offset: 0xe0
	// Line 1784, Address: 0x102d390, Func Offset: 0x100
	// Line 1787, Address: 0x102d3ac, Func Offset: 0x11c
	// Line 1788, Address: 0x102d3b4, Func Offset: 0x124
	// Line 1789, Address: 0x102d3bc, Func Offset: 0x12c
	// Line 1790, Address: 0x102d3c8, Func Offset: 0x138
	// Line 1791, Address: 0x102d3e0, Func Offset: 0x150
	// Line 1792, Address: 0x102d3e8, Func Offset: 0x158
	// Line 1797, Address: 0x102d3f8, Func Offset: 0x168
	// Line 1800, Address: 0x102d404, Func Offset: 0x174
	// Line 1801, Address: 0x102d40c, Func Offset: 0x17c
	// Line 1802, Address: 0x102d410, Func Offset: 0x180
	// Func End, Address: 0x102d42c, Func Offset: 0x19c
}

// 
// Start address: 0x102d430
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1816, Address: 0x102d430, Func Offset: 0
	// Line 1823, Address: 0x102d44c, Func Offset: 0x1c
	// Line 1824, Address: 0x102d450, Func Offset: 0x20
	// Line 1825, Address: 0x102d458, Func Offset: 0x28
	// Line 1826, Address: 0x102d47c, Func Offset: 0x4c
	// Line 1827, Address: 0x102d488, Func Offset: 0x58
	// Line 1828, Address: 0x102d4a0, Func Offset: 0x70
	// Line 1829, Address: 0x102d4b4, Func Offset: 0x84
	// Line 1834, Address: 0x102d4cc, Func Offset: 0x9c
	// Func End, Address: 0x102d4e4, Func Offset: 0xb4
}

// 
// Start address: 0x102d4f0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1848, Address: 0x102d4f0, Func Offset: 0
	// Line 1849, Address: 0x102d4fc, Func Offset: 0xc
	// Line 1850, Address: 0x102d528, Func Offset: 0x38
	// Line 1851, Address: 0x102d574, Func Offset: 0x84
	// Line 1852, Address: 0x102d5a0, Func Offset: 0xb0
	// Line 1854, Address: 0x102d5ec, Func Offset: 0xfc
	// Line 1860, Address: 0x102d5f8, Func Offset: 0x108
	// Line 1861, Address: 0x102d5fc, Func Offset: 0x10c
	// Func End, Address: 0x102d608, Func Offset: 0x118
}

// 
// Start address: 0x102d610
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1878, Address: 0x102d610, Func Offset: 0
	// Line 1879, Address: 0x102d62c, Func Offset: 0x1c
	// Line 1881, Address: 0x102d648, Func Offset: 0x38
	// Func End, Address: 0x102d658, Func Offset: 0x48
}

// 
// Start address: 0x102d660
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1883, Address: 0x102d660, Func Offset: 0
	// Line 1884, Address: 0x102d67c, Func Offset: 0x1c
	// Line 1885, Address: 0x102d680, Func Offset: 0x20
	// Line 1887, Address: 0x102d69c, Func Offset: 0x3c
	// Func End, Address: 0x102d6ac, Func Offset: 0x4c
}

// 
// Start address: 0x102d6b0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1889, Address: 0x102d6b0, Func Offset: 0
	// Line 1890, Address: 0x102d6c4, Func Offset: 0x14
	// Line 1892, Address: 0x102d6e0, Func Offset: 0x30
	// Func End, Address: 0x102d6f0, Func Offset: 0x40
}

// 
// Start address: 0x102d6f0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1894, Address: 0x102d6f0, Func Offset: 0
	// Line 1895, Address: 0x102d70c, Func Offset: 0x1c
	// Line 1897, Address: 0x102d728, Func Offset: 0x38
	// Func End, Address: 0x102d738, Func Offset: 0x48
}

// 
// Start address: 0x102d740
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1899, Address: 0x102d740, Func Offset: 0
	// Line 1900, Address: 0x102d758, Func Offset: 0x18
	// Line 1901, Address: 0x102d768, Func Offset: 0x28
	// Line 1902, Address: 0x102d778, Func Offset: 0x38
	// Line 1903, Address: 0x102d784, Func Offset: 0x44
	// Line 1905, Address: 0x102d790, Func Offset: 0x50
	// Line 1906, Address: 0x102d7bc, Func Offset: 0x7c
	// Line 1909, Address: 0x102d7e8, Func Offset: 0xa8
	// Func End, Address: 0x102d7f4, Func Offset: 0xb4
}

// 
// Start address: 0x102d800
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1925, Address: 0x102d800, Func Offset: 0
	// Line 1930, Address: 0x102d818, Func Offset: 0x18
	// Line 1931, Address: 0x102d824, Func Offset: 0x24
	// Line 1932, Address: 0x102d830, Func Offset: 0x30
	// Line 1933, Address: 0x102d838, Func Offset: 0x38
	// Line 1934, Address: 0x102d83c, Func Offset: 0x3c
	// Line 1938, Address: 0x102d854, Func Offset: 0x54
	// Line 1939, Address: 0x102d85c, Func Offset: 0x5c
	// Line 1940, Address: 0x102d860, Func Offset: 0x60
	// Line 1942, Address: 0x102d870, Func Offset: 0x70
	// Func End, Address: 0x102d890, Func Offset: 0x90
}

// 
// Start address: 0x102d890
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1945, Address: 0x102d890, Func Offset: 0
	// Line 1946, Address: 0x102d8a8, Func Offset: 0x18
	// Line 1947, Address: 0x102d8c8, Func Offset: 0x38
	// Func End, Address: 0x102d8d8, Func Offset: 0x48
}

// 
// Start address: 0x102d8e0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1952, Address: 0x102d8e0, Func Offset: 0
	// Line 1956, Address: 0x102d900, Func Offset: 0x20
	// Line 1959, Address: 0x102d91c, Func Offset: 0x3c
	// Line 1963, Address: 0x102d944, Func Offset: 0x64
	// Line 1964, Address: 0x102d950, Func Offset: 0x70
	// Line 1966, Address: 0x102d978, Func Offset: 0x98
	// Func End, Address: 0x102d988, Func Offset: 0xa8
}

// 
// Start address: 0x102d990
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1971, Address: 0x102d990, Func Offset: 0
	// Line 1974, Address: 0x102d9ac, Func Offset: 0x1c
	// Line 1975, Address: 0x102d9b4, Func Offset: 0x24
	// Line 1980, Address: 0x102d9bc, Func Offset: 0x2c
	// Line 1982, Address: 0x102d9e0, Func Offset: 0x50
	// Line 1983, Address: 0x102da00, Func Offset: 0x70
	// Line 1984, Address: 0x102da08, Func Offset: 0x78
	// Line 1985, Address: 0x102da2c, Func Offset: 0x9c
	// Func End, Address: 0x102da48, Func Offset: 0xb8
}

// 
// Start address: 0x102da50
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2011, Address: 0x102da50, Func Offset: 0
	// Line 2016, Address: 0x102da78, Func Offset: 0x28
	// Line 2017, Address: 0x102da88, Func Offset: 0x38
	// Line 2019, Address: 0x102daa4, Func Offset: 0x54
	// Line 2020, Address: 0x102dac8, Func Offset: 0x78
	// Line 2021, Address: 0x102daf0, Func Offset: 0xa0
	// Line 2022, Address: 0x102dafc, Func Offset: 0xac
	// Line 2023, Address: 0x102db04, Func Offset: 0xb4
	// Line 2026, Address: 0x102db20, Func Offset: 0xd0
	// Line 2030, Address: 0x102db48, Func Offset: 0xf8
	// Line 2033, Address: 0x102db50, Func Offset: 0x100
	// Line 2034, Address: 0x102db54, Func Offset: 0x104
	// Line 2038, Address: 0x102db70, Func Offset: 0x120
	// Line 2045, Address: 0x102db98, Func Offset: 0x148
	// Func End, Address: 0x102dbb4, Func Offset: 0x164
}

// 
// Start address: 0x102dbc0
void mapinit()
{
	// Line 2050, Address: 0x102dbc0, Func Offset: 0
	// Line 2056, Address: 0x102dbc8, Func Offset: 0x8
	// Line 2059, Address: 0x102dbd0, Func Offset: 0x10
	// Line 2060, Address: 0x102dbe4, Func Offset: 0x24
	// Line 2067, Address: 0x102dbf8, Func Offset: 0x38
	// Line 2068, Address: 0x102dc0c, Func Offset: 0x4c
	// Line 2071, Address: 0x102dc14, Func Offset: 0x54
	// Line 2073, Address: 0x102dc2c, Func Offset: 0x6c
	// Line 2077, Address: 0x102dc34, Func Offset: 0x74
	// Func End, Address: 0x102dc44, Func Offset: 0x84
}

// 
// Start address: 0x102dc50
void mapset()
{
	// Line 2087, Address: 0x102dc50, Func Offset: 0
	// Func End, Address: 0x102dc58, Func Offset: 0x8
}

