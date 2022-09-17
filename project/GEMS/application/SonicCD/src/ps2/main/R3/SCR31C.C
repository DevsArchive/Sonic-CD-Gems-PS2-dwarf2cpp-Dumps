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

unsigned char z31cwrttbl[49];
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
// Start address: 0x1027670
void enecginit()
{
	// Line 112, Address: 0x1027670, Func Offset: 0
	// Func End, Address: 0x1027678, Func Offset: 0x8
}

// 
// Start address: 0x1027680
void divdevset()
{
	// Line 116, Address: 0x1027680, Func Offset: 0
	// Func End, Address: 0x1027688, Func Offset: 0x8
}

// 
// Start address: 0x1027690
_anon1* main_chk()
{
	// Line 170, Address: 0x1027690, Func Offset: 0
	// Line 171, Address: 0x10276a4, Func Offset: 0x14
	// Line 173, Address: 0x10276b4, Func Offset: 0x24
	// Line 174, Address: 0x10276bc, Func Offset: 0x2c
	// Func End, Address: 0x10276c4, Func Offset: 0x34
}

// 
// Start address: 0x10276d0
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 187, Address: 0x10276d0, Func Offset: 0
	// Line 193, Address: 0x10276dc, Func Offset: 0xc
	// Line 198, Address: 0x1027710, Func Offset: 0x40
	// Line 200, Address: 0x1027758, Func Offset: 0x88
	// Line 201, Address: 0x102775c, Func Offset: 0x8c
	// Line 202, Address: 0x1027778, Func Offset: 0xa8
	// Line 203, Address: 0x102778c, Func Offset: 0xbc
	// Line 204, Address: 0x10277a8, Func Offset: 0xd8
	// Line 205, Address: 0x10277bc, Func Offset: 0xec
	// Line 206, Address: 0x10277d8, Func Offset: 0x108
	// Line 207, Address: 0x10277ec, Func Offset: 0x11c
	// Line 208, Address: 0x1027808, Func Offset: 0x138
	// Line 209, Address: 0x102781c, Func Offset: 0x14c
	// Line 211, Address: 0x1027838, Func Offset: 0x168
	// Line 212, Address: 0x102785c, Func Offset: 0x18c
	// Line 213, Address: 0x1027868, Func Offset: 0x198
	// Line 215, Address: 0x1027874, Func Offset: 0x1a4
	// Line 216, Address: 0x1027890, Func Offset: 0x1c0
	// Line 218, Address: 0x102789c, Func Offset: 0x1cc
	// Line 219, Address: 0x10278a4, Func Offset: 0x1d4
	// Func End, Address: 0x10278b8, Func Offset: 0x1e8
}

// 
// Start address: 0x10278c0
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 231, Address: 0x10278c0, Func Offset: 0
	// Line 232, Address: 0x10278d8, Func Offset: 0x18
	// Line 236, Address: 0x10278f4, Func Offset: 0x34
	// Line 246, Address: 0x1027928, Func Offset: 0x68
	// Line 256, Address: 0x1027954, Func Offset: 0x94
	// Line 257, Address: 0x1027968, Func Offset: 0xa8
	// Line 258, Address: 0x1027970, Func Offset: 0xb0
	// Line 259, Address: 0x1027980, Func Offset: 0xc0
	// Line 261, Address: 0x1027990, Func Offset: 0xd0
	// Line 263, Address: 0x10279a4, Func Offset: 0xe4
	// Line 266, Address: 0x10279ac, Func Offset: 0xec
	// Line 267, Address: 0x10279c4, Func Offset: 0x104
	// Line 268, Address: 0x10279ec, Func Offset: 0x12c
	// Line 271, Address: 0x10279f4, Func Offset: 0x134
	// Line 274, Address: 0x1027a14, Func Offset: 0x154
	// Line 275, Address: 0x1027a30, Func Offset: 0x170
	// Line 279, Address: 0x1027a44, Func Offset: 0x184
	// Line 280, Address: 0x1027a58, Func Offset: 0x198
	// Line 281, Address: 0x1027a64, Func Offset: 0x1a4
	// Line 283, Address: 0x1027a6c, Func Offset: 0x1ac
	// Line 287, Address: 0x1027a70, Func Offset: 0x1b0
	// Line 288, Address: 0x1027a94, Func Offset: 0x1d4
	// Line 290, Address: 0x1027aa4, Func Offset: 0x1e4
	// Line 292, Address: 0x1027aac, Func Offset: 0x1ec
	// Line 293, Address: 0x1027ac0, Func Offset: 0x200
	// Line 294, Address: 0x1027acc, Func Offset: 0x20c
	// Line 296, Address: 0x1027ad4, Func Offset: 0x214
	// Line 299, Address: 0x1027ad8, Func Offset: 0x218
	// Line 300, Address: 0x1027afc, Func Offset: 0x23c
	// Line 303, Address: 0x1027b0c, Func Offset: 0x24c
	// Line 305, Address: 0x1027b14, Func Offset: 0x254
	// Line 307, Address: 0x1027b24, Func Offset: 0x264
	// Line 308, Address: 0x1027b28, Func Offset: 0x268
	// Line 309, Address: 0x1027b40, Func Offset: 0x280
	// Line 310, Address: 0x1027b58, Func Offset: 0x298
	// Line 311, Address: 0x1027b70, Func Offset: 0x2b0
	// Line 314, Address: 0x1027b88, Func Offset: 0x2c8
	// Func End, Address: 0x1027ba8, Func Offset: 0x2e8
}

// 
// Start address: 0x1027bb0
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 326, Address: 0x1027bb0, Func Offset: 0
	// Line 331, Address: 0x1027bc4, Func Offset: 0x14
	// Line 332, Address: 0x1027bcc, Func Offset: 0x1c
	// Line 333, Address: 0x1027bf4, Func Offset: 0x44
	// Line 334, Address: 0x1027c10, Func Offset: 0x60
	// Line 335, Address: 0x1027c44, Func Offset: 0x94
	// Line 336, Address: 0x1027c58, Func Offset: 0xa8
	// Line 340, Address: 0x1027c5c, Func Offset: 0xac
	// Line 341, Address: 0x1027c68, Func Offset: 0xb8
	// Line 342, Address: 0x1027c70, Func Offset: 0xc0
	// Line 343, Address: 0x1027c7c, Func Offset: 0xcc
	// Line 345, Address: 0x1027c88, Func Offset: 0xd8
	// Line 346, Address: 0x1027cc0, Func Offset: 0x110
	// Line 347, Address: 0x1027d00, Func Offset: 0x150
	// Line 350, Address: 0x1027d40, Func Offset: 0x190
	// Line 351, Address: 0x1027d4c, Func Offset: 0x19c
	// Line 352, Address: 0x1027d60, Func Offset: 0x1b0
	// Line 354, Address: 0x1027d70, Func Offset: 0x1c0
	// Func End, Address: 0x1027d84, Func Offset: 0x1d4
}

// 
// Start address: 0x1027d90
void scroll()
{
	int LineSpdTbl[14];
	unsigned char z31c_cnttbl[14];
	unsigned short z31c_kawatbl[3];
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
	// Line 367, Address: 0x1027d90, Func Offset: 0
	// Line 368, Address: 0x1027db0, Func Offset: 0x20
	// Line 375, Address: 0x1027de4, Func Offset: 0x54
	// Line 378, Address: 0x1027e18, Func Offset: 0x88
	// Line 388, Address: 0x1027e3c, Func Offset: 0xac
	// Line 391, Address: 0x1027e4c, Func Offset: 0xbc
	// Line 392, Address: 0x1027e78, Func Offset: 0xe8
	// Line 393, Address: 0x1027e84, Func Offset: 0xf4
	// Line 394, Address: 0x1027e90, Func Offset: 0x100
	// Line 396, Address: 0x1027e9c, Func Offset: 0x10c
	// Line 397, Address: 0x1027eac, Func Offset: 0x11c
	// Line 400, Address: 0x1027ebc, Func Offset: 0x12c
	// Line 401, Address: 0x1027ee0, Func Offset: 0x150
	// Line 402, Address: 0x1027f1c, Func Offset: 0x18c
	// Line 404, Address: 0x1027f58, Func Offset: 0x1c8
	// Line 405, Address: 0x1027f60, Func Offset: 0x1d0
	// Line 406, Address: 0x1027f68, Func Offset: 0x1d8
	// Line 408, Address: 0x1027f88, Func Offset: 0x1f8
	// Line 409, Address: 0x1027f9c, Func Offset: 0x20c
	// Line 410, Address: 0x1027fa4, Func Offset: 0x214
	// Line 411, Address: 0x1027fb8, Func Offset: 0x228
	// Line 412, Address: 0x1027fcc, Func Offset: 0x23c
	// Line 414, Address: 0x1027fd0, Func Offset: 0x240
	// Line 416, Address: 0x1027fd8, Func Offset: 0x248
	// Line 419, Address: 0x1027fec, Func Offset: 0x25c
	// Line 420, Address: 0x1028000, Func Offset: 0x270
	// Line 421, Address: 0x1028010, Func Offset: 0x280
	// Line 422, Address: 0x1028020, Func Offset: 0x290
	// Line 424, Address: 0x1028030, Func Offset: 0x2a0
	// Line 425, Address: 0x102804c, Func Offset: 0x2bc
	// Line 426, Address: 0x1028068, Func Offset: 0x2d8
	// Line 427, Address: 0x1028070, Func Offset: 0x2e0
	// Line 450, Address: 0x1028078, Func Offset: 0x2e8
	// Line 451, Address: 0x1028080, Func Offset: 0x2f0
	// Line 452, Address: 0x102808c, Func Offset: 0x2fc
	// Line 453, Address: 0x10280a4, Func Offset: 0x314
	// Line 454, Address: 0x10280a8, Func Offset: 0x318
	// Line 455, Address: 0x10280b8, Func Offset: 0x328
	// Line 456, Address: 0x10280bc, Func Offset: 0x32c
	// Line 457, Address: 0x10280c4, Func Offset: 0x334
	// Line 458, Address: 0x10280e8, Func Offset: 0x358
	// Line 459, Address: 0x10280f8, Func Offset: 0x368
	// Line 460, Address: 0x10280fc, Func Offset: 0x36c
	// Line 461, Address: 0x1028104, Func Offset: 0x374
	// Line 468, Address: 0x1028114, Func Offset: 0x384
	// Line 469, Address: 0x102813c, Func Offset: 0x3ac
	// Line 470, Address: 0x1028148, Func Offset: 0x3b8
	// Line 471, Address: 0x1028168, Func Offset: 0x3d8
	// Line 473, Address: 0x1028174, Func Offset: 0x3e4
	// Line 474, Address: 0x1028178, Func Offset: 0x3e8
	// Line 476, Address: 0x1028184, Func Offset: 0x3f4
	// Line 477, Address: 0x1028190, Func Offset: 0x400
	// Line 478, Address: 0x102819c, Func Offset: 0x40c
	// Line 479, Address: 0x10281b8, Func Offset: 0x428
	// Line 480, Address: 0x10281cc, Func Offset: 0x43c
	// Line 481, Address: 0x10281f0, Func Offset: 0x460
	// Line 482, Address: 0x1028200, Func Offset: 0x470
	// Line 483, Address: 0x1028224, Func Offset: 0x494
	// Line 485, Address: 0x1028234, Func Offset: 0x4a4
	// Line 486, Address: 0x1028240, Func Offset: 0x4b0
	// Line 488, Address: 0x1028264, Func Offset: 0x4d4
	// Line 489, Address: 0x1028270, Func Offset: 0x4e0
	// Line 490, Address: 0x1028284, Func Offset: 0x4f4
	// Line 492, Address: 0x1028294, Func Offset: 0x504
	// Line 494, Address: 0x10282b8, Func Offset: 0x528
	// Line 495, Address: 0x10282c4, Func Offset: 0x534
	// Line 496, Address: 0x10282d8, Func Offset: 0x548
	// Line 511, Address: 0x10282e8, Func Offset: 0x558
	// Line 512, Address: 0x10282f0, Func Offset: 0x560
	// Line 513, Address: 0x10282fc, Func Offset: 0x56c
	// Line 514, Address: 0x1028328, Func Offset: 0x598
	// Line 515, Address: 0x102832c, Func Offset: 0x59c
	// Line 516, Address: 0x1028340, Func Offset: 0x5b0
	// Line 517, Address: 0x1028350, Func Offset: 0x5c0
	// Line 518, Address: 0x102835c, Func Offset: 0x5cc
	// Line 521, Address: 0x1028368, Func Offset: 0x5d8
	// Line 523, Address: 0x102838c, Func Offset: 0x5fc
	// Line 524, Address: 0x1028398, Func Offset: 0x608
	// Line 525, Address: 0x10283ac, Func Offset: 0x61c
	// Line 527, Address: 0x10283bc, Func Offset: 0x62c
	// Line 529, Address: 0x10283e0, Func Offset: 0x650
	// Line 530, Address: 0x10283ec, Func Offset: 0x65c
	// Line 531, Address: 0x1028400, Func Offset: 0x670
	// Line 533, Address: 0x1028410, Func Offset: 0x680
	// Line 535, Address: 0x1028434, Func Offset: 0x6a4
	// Line 536, Address: 0x1028440, Func Offset: 0x6b0
	// Line 537, Address: 0x1028454, Func Offset: 0x6c4
	// Line 539, Address: 0x1028464, Func Offset: 0x6d4
	// Line 541, Address: 0x1028488, Func Offset: 0x6f8
	// Line 542, Address: 0x1028494, Func Offset: 0x704
	// Line 543, Address: 0x10284a8, Func Offset: 0x718
	// Line 546, Address: 0x10284b8, Func Offset: 0x728
	// Line 547, Address: 0x10284f0, Func Offset: 0x760
	// Line 548, Address: 0x10284fc, Func Offset: 0x76c
	// Line 549, Address: 0x102851c, Func Offset: 0x78c
	// Line 550, Address: 0x1028528, Func Offset: 0x798
	// Line 552, Address: 0x1028534, Func Offset: 0x7a4
	// Line 553, Address: 0x1028540, Func Offset: 0x7b0
	// Line 554, Address: 0x102856c, Func Offset: 0x7dc
	// Line 555, Address: 0x1028590, Func Offset: 0x800
	// Line 556, Address: 0x10285a0, Func Offset: 0x810
	// Line 557, Address: 0x10285c4, Func Offset: 0x834
	// Line 559, Address: 0x10285d4, Func Offset: 0x844
	// Line 561, Address: 0x10285f8, Func Offset: 0x868
	// Line 562, Address: 0x1028604, Func Offset: 0x874
	// Line 563, Address: 0x1028618, Func Offset: 0x888
	// Line 565, Address: 0x1028628, Func Offset: 0x898
	// Line 566, Address: 0x1028634, Func Offset: 0x8a4
	// Line 567, Address: 0x1028640, Func Offset: 0x8b0
	// Line 568, Address: 0x102864c, Func Offset: 0x8bc
	// Line 569, Address: 0x1028654, Func Offset: 0x8c4
	// Line 570, Address: 0x102865c, Func Offset: 0x8cc
	// Line 571, Address: 0x1028680, Func Offset: 0x8f0
	// Line 572, Address: 0x1028698, Func Offset: 0x908
	// Line 573, Address: 0x10286a0, Func Offset: 0x910
	// Line 574, Address: 0x10286a8, Func Offset: 0x918
	// Line 576, Address: 0x10286bc, Func Offset: 0x92c
	// Line 577, Address: 0x10286c4, Func Offset: 0x934
	// Line 578, Address: 0x10286d4, Func Offset: 0x944
	// Line 581, Address: 0x10286dc, Func Offset: 0x94c
	// Line 582, Address: 0x10286e8, Func Offset: 0x958
	// Line 583, Address: 0x102870c, Func Offset: 0x97c
	// Line 585, Address: 0x1028720, Func Offset: 0x990
	// Line 588, Address: 0x102874c, Func Offset: 0x9bc
	// Line 590, Address: 0x1028754, Func Offset: 0x9c4
	// Line 595, Address: 0x1028760, Func Offset: 0x9d0
	// Line 596, Address: 0x1028774, Func Offset: 0x9e4
	// Line 597, Address: 0x1028780, Func Offset: 0x9f0
	// Line 598, Address: 0x1028794, Func Offset: 0xa04
	// Line 601, Address: 0x10287ac, Func Offset: 0xa1c
	// Line 602, Address: 0x10287c0, Func Offset: 0xa30
	// Line 603, Address: 0x10287d4, Func Offset: 0xa44
	// Line 604, Address: 0x10287e8, Func Offset: 0xa58
	// Line 605, Address: 0x1028808, Func Offset: 0xa78
	// Line 606, Address: 0x1028810, Func Offset: 0xa80
	// Line 607, Address: 0x1028830, Func Offset: 0xaa0
	// Line 608, Address: 0x1028848, Func Offset: 0xab8
	// Line 609, Address: 0x1028850, Func Offset: 0xac0
	// Line 610, Address: 0x102887c, Func Offset: 0xaec
	// Line 611, Address: 0x1028890, Func Offset: 0xb00
	// Line 612, Address: 0x10288ac, Func Offset: 0xb1c
	// Line 615, Address: 0x10288b0, Func Offset: 0xb20
	// Line 616, Address: 0x10288bc, Func Offset: 0xb2c
	// Line 617, Address: 0x10288c8, Func Offset: 0xb38
	// Line 618, Address: 0x10288d4, Func Offset: 0xb44
	// Line 619, Address: 0x10288dc, Func Offset: 0xb4c
	// Line 621, Address: 0x1028900, Func Offset: 0xb70
	// Func End, Address: 0x1028928, Func Offset: 0xb98
}

// 
// Start address: 0x1028930
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 626, Address: 0x1028930, Func Offset: 0
	// Line 633, Address: 0x1028964, Func Offset: 0x34
	// Line 634, Address: 0x1028984, Func Offset: 0x54
	// Line 635, Address: 0x102898c, Func Offset: 0x5c
	// Line 637, Address: 0x1028994, Func Offset: 0x64
	// Line 642, Address: 0x10289b8, Func Offset: 0x88
	// Line 643, Address: 0x10289cc, Func Offset: 0x9c
	// Line 645, Address: 0x10289f8, Func Offset: 0xc8
	// Line 646, Address: 0x1028a08, Func Offset: 0xd8
	// Line 647, Address: 0x1028a1c, Func Offset: 0xec
	// Line 650, Address: 0x1028a24, Func Offset: 0xf4
	// Line 653, Address: 0x1028a40, Func Offset: 0x110
	// Line 658, Address: 0x1028a64, Func Offset: 0x134
	// Line 659, Address: 0x1028a74, Func Offset: 0x144
	// Line 662, Address: 0x1028a88, Func Offset: 0x158
	// Line 664, Address: 0x1028a8c, Func Offset: 0x15c
	// Line 667, Address: 0x1028a94, Func Offset: 0x164
	// Line 668, Address: 0x1028a9c, Func Offset: 0x16c
	// Line 669, Address: 0x1028aa0, Func Offset: 0x170
	// Line 670, Address: 0x1028ab0, Func Offset: 0x180
	// Line 675, Address: 0x1028ad8, Func Offset: 0x1a8
	// Line 676, Address: 0x1028ae0, Func Offset: 0x1b0
	// Line 677, Address: 0x1028ae8, Func Offset: 0x1b8
	// Line 681, Address: 0x1028af0, Func Offset: 0x1c0
	// Line 682, Address: 0x1028b20, Func Offset: 0x1f0
	// Line 685, Address: 0x1028b38, Func Offset: 0x208
	// Line 688, Address: 0x1028b5c, Func Offset: 0x22c
	// Line 689, Address: 0x1028b8c, Func Offset: 0x25c
	// Line 690, Address: 0x1028ba4, Func Offset: 0x274
	// Line 698, Address: 0x1028bac, Func Offset: 0x27c
	// Line 699, Address: 0x1028bdc, Func Offset: 0x2ac
	// Line 704, Address: 0x1028bf4, Func Offset: 0x2c4
	// Line 705, Address: 0x1028bfc, Func Offset: 0x2cc
	// Line 706, Address: 0x1028c00, Func Offset: 0x2d0
	// Line 709, Address: 0x1028c18, Func Offset: 0x2e8
	// Line 710, Address: 0x1028c2c, Func Offset: 0x2fc
	// Line 711, Address: 0x1028c58, Func Offset: 0x328
	// Line 712, Address: 0x1028c6c, Func Offset: 0x33c
	// Line 713, Address: 0x1028c88, Func Offset: 0x358
	// Line 714, Address: 0x1028c90, Func Offset: 0x360
	// Line 715, Address: 0x1028c98, Func Offset: 0x368
	// Line 716, Address: 0x1028c9c, Func Offset: 0x36c
	// Line 717, Address: 0x1028cb0, Func Offset: 0x380
	// Line 718, Address: 0x1028cc4, Func Offset: 0x394
	// Line 720, Address: 0x1028ce8, Func Offset: 0x3b8
	// Line 723, Address: 0x1028cf0, Func Offset: 0x3c0
	// Line 724, Address: 0x1028d00, Func Offset: 0x3d0
	// Line 725, Address: 0x1028d0c, Func Offset: 0x3dc
	// Line 726, Address: 0x1028d30, Func Offset: 0x400
	// Line 727, Address: 0x1028d38, Func Offset: 0x408
	// Func End, Address: 0x1028d58, Func Offset: 0x428
}

// 
// Start address: 0x1028d60
void scroll_h()
{
	unsigned short wD4;
	// Line 743, Address: 0x1028d60, Func Offset: 0
	// Line 746, Address: 0x1028d6c, Func Offset: 0xc
	// Line 747, Address: 0x1028d78, Func Offset: 0x18
	// Line 748, Address: 0x1028d80, Func Offset: 0x20
	// Line 749, Address: 0x1028db4, Func Offset: 0x54
	// Line 750, Address: 0x1028dc8, Func Offset: 0x68
	// Line 751, Address: 0x1028df4, Func Offset: 0x94
	// Line 752, Address: 0x1028e08, Func Offset: 0xa8
	// Line 755, Address: 0x1028e10, Func Offset: 0xb0
	// Line 760, Address: 0x1028e24, Func Offset: 0xc4
	// Func End, Address: 0x1028e38, Func Offset: 0xd8
}

// 
// Start address: 0x1028e40
void scrh_move()
{
	unsigned short wD0;
	// Line 762, Address: 0x1028e40, Func Offset: 0
	// Line 765, Address: 0x1028e4c, Func Offset: 0xc
	// Line 766, Address: 0x1028e58, Func Offset: 0x18
	// Line 767, Address: 0x1028e6c, Func Offset: 0x2c
	// Line 768, Address: 0x1028e80, Func Offset: 0x40
	// Line 770, Address: 0x1028e8c, Func Offset: 0x4c
	// Line 771, Address: 0x1028e94, Func Offset: 0x54
	// Line 772, Address: 0x1028e9c, Func Offset: 0x5c
	// Line 773, Address: 0x1028eb4, Func Offset: 0x74
	// Line 774, Address: 0x1028ec0, Func Offset: 0x80
	// Line 776, Address: 0x1028ec8, Func Offset: 0x88
	// Line 779, Address: 0x1028ed4, Func Offset: 0x94
	// Func End, Address: 0x1028ee8, Func Offset: 0xa8
}

// 
// Start address: 0x1028ef0
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 782, Address: 0x1028ef0, Func Offset: 0
	// Line 785, Address: 0x1028efc, Func Offset: 0xc
	// Line 786, Address: 0x1028f1c, Func Offset: 0x2c
	// Line 789, Address: 0x1028f24, Func Offset: 0x34
	// Line 790, Address: 0x1028f3c, Func Offset: 0x4c
	// Line 791, Address: 0x1028f6c, Func Offset: 0x7c
	// Line 794, Address: 0x1028f78, Func Offset: 0x88
	// Line 795, Address: 0x1028f80, Func Offset: 0x90
	// Line 796, Address: 0x1028f94, Func Offset: 0xa4
	// Line 797, Address: 0x1028fc4, Func Offset: 0xd4
	// Line 798, Address: 0x1028fd0, Func Offset: 0xe0
	// Line 800, Address: 0x1028fd8, Func Offset: 0xe8
	// Func End, Address: 0x1028fe8, Func Offset: 0xf8
}

// 
// Start address: 0x1028ff0
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 803, Address: 0x1028ff0, Func Offset: 0
	// Line 806, Address: 0x1028ffc, Func Offset: 0xc
	// Line 807, Address: 0x102901c, Func Offset: 0x2c
	// Line 810, Address: 0x1029024, Func Offset: 0x34
	// Line 811, Address: 0x102903c, Func Offset: 0x4c
	// Line 812, Address: 0x102906c, Func Offset: 0x7c
	// Line 815, Address: 0x1029078, Func Offset: 0x88
	// Line 816, Address: 0x1029080, Func Offset: 0x90
	// Line 817, Address: 0x1029094, Func Offset: 0xa4
	// Line 818, Address: 0x10290c4, Func Offset: 0xd4
	// Line 819, Address: 0x10290d0, Func Offset: 0xe0
	// Line 821, Address: 0x10290d8, Func Offset: 0xe8
	// Func End, Address: 0x10290e8, Func Offset: 0xf8
}

// 
// Start address: 0x10290f0
void scroll_v()
{
	unsigned short wD0;
	// Line 840, Address: 0x10290f0, Func Offset: 0
	// Line 843, Address: 0x10290fc, Func Offset: 0xc
	// Line 844, Address: 0x1029128, Func Offset: 0x38
	// Line 845, Address: 0x1029140, Func Offset: 0x50
	// Line 848, Address: 0x1029148, Func Offset: 0x58
	// Line 849, Address: 0x1029160, Func Offset: 0x70
	// Line 850, Address: 0x1029168, Func Offset: 0x78
	// Line 851, Address: 0x1029188, Func Offset: 0x98
	// Line 852, Address: 0x102919c, Func Offset: 0xac
	// Line 853, Address: 0x10291a8, Func Offset: 0xb8
	// Line 855, Address: 0x10291b0, Func Offset: 0xc0
	// Line 856, Address: 0x10291c4, Func Offset: 0xd4
	// Line 857, Address: 0x10291d4, Func Offset: 0xe4
	// Line 858, Address: 0x10291dc, Func Offset: 0xec
	// Line 859, Address: 0x10291e8, Func Offset: 0xf8
	// Line 861, Address: 0x10291f0, Func Offset: 0x100
	// Line 862, Address: 0x10291f8, Func Offset: 0x108
	// Line 863, Address: 0x102920c, Func Offset: 0x11c
	// Line 864, Address: 0x1029214, Func Offset: 0x124
	// Line 870, Address: 0x102921c, Func Offset: 0x12c
	// Line 871, Address: 0x1029230, Func Offset: 0x140
	// Line 872, Address: 0x1029238, Func Offset: 0x148
	// Line 873, Address: 0x1029244, Func Offset: 0x154
	// Line 875, Address: 0x102924c, Func Offset: 0x15c
	// Line 876, Address: 0x1029260, Func Offset: 0x170
	// Line 877, Address: 0x1029268, Func Offset: 0x178
	// Line 882, Address: 0x1029270, Func Offset: 0x180
	// Line 884, Address: 0x1029278, Func Offset: 0x188
	// Func End, Address: 0x102928c, Func Offset: 0x19c
}

// 
// Start address: 0x1029290
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 890, Address: 0x1029290, Func Offset: 0
	// Line 893, Address: 0x10292a0, Func Offset: 0x10
	// Line 894, Address: 0x10292bc, Func Offset: 0x2c
	// Line 895, Address: 0x10292c8, Func Offset: 0x38
	// Line 898, Address: 0x10292d0, Func Offset: 0x40
	// Line 899, Address: 0x10292dc, Func Offset: 0x4c
	// Line 900, Address: 0x10292f4, Func Offset: 0x64
	// Line 903, Address: 0x1029310, Func Offset: 0x80
	// Line 904, Address: 0x1029320, Func Offset: 0x90
	// Line 905, Address: 0x102932c, Func Offset: 0x9c
	// Line 907, Address: 0x1029334, Func Offset: 0xa4
	// Line 908, Address: 0x1029354, Func Offset: 0xc4
	// Line 909, Address: 0x1029360, Func Offset: 0xd0
	// Line 910, Address: 0x1029368, Func Offset: 0xd8
	// Line 911, Address: 0x1029388, Func Offset: 0xf8
	// Line 912, Address: 0x1029394, Func Offset: 0x104
	// Line 914, Address: 0x102939c, Func Offset: 0x10c
	// Line 918, Address: 0x10293a8, Func Offset: 0x118
	// Func End, Address: 0x10293bc, Func Offset: 0x12c
}

// 
// Start address: 0x10293c0
void sv_move_main1(unsigned short wD0)
{
	// Line 922, Address: 0x10293c0, Func Offset: 0
	// Line 924, Address: 0x10293cc, Func Offset: 0xc
	// Line 925, Address: 0x10293ec, Func Offset: 0x2c
	// Line 926, Address: 0x10293f8, Func Offset: 0x38
	// Line 927, Address: 0x1029400, Func Offset: 0x40
	// Line 928, Address: 0x1029420, Func Offset: 0x60
	// Line 929, Address: 0x102942c, Func Offset: 0x6c
	// Line 931, Address: 0x1029434, Func Offset: 0x74
	// Line 934, Address: 0x1029440, Func Offset: 0x80
	// Func End, Address: 0x1029450, Func Offset: 0x90
}

// 
// Start address: 0x1029450
void sv_move_main2(unsigned short wD0)
{
	// Line 937, Address: 0x1029450, Func Offset: 0
	// Line 939, Address: 0x102945c, Func Offset: 0xc
	// Line 940, Address: 0x102947c, Func Offset: 0x2c
	// Line 941, Address: 0x1029488, Func Offset: 0x38
	// Line 942, Address: 0x1029490, Func Offset: 0x40
	// Line 943, Address: 0x10294b0, Func Offset: 0x60
	// Line 944, Address: 0x10294bc, Func Offset: 0x6c
	// Line 946, Address: 0x10294c4, Func Offset: 0x74
	// Line 949, Address: 0x10294d0, Func Offset: 0x80
	// Func End, Address: 0x10294e0, Func Offset: 0x90
}

// 
// Start address: 0x10294e0
void sv_move_sub2()
{
	// Line 952, Address: 0x10294e0, Func Offset: 0
	// Line 953, Address: 0x10294e8, Func Offset: 0x8
	// Line 954, Address: 0x10294f0, Func Offset: 0x10
	// Line 955, Address: 0x10294fc, Func Offset: 0x1c
	// Func End, Address: 0x102950c, Func Offset: 0x2c
}

// 
// Start address: 0x1029510
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 958, Address: 0x1029510, Func Offset: 0
	// Line 961, Address: 0x102951c, Func Offset: 0xc
	// Line 962, Address: 0x1029520, Func Offset: 0x10
	// Line 963, Address: 0x1029528, Func Offset: 0x18
	// Line 964, Address: 0x1029544, Func Offset: 0x34
	// Line 965, Address: 0x1029560, Func Offset: 0x50
	// Line 966, Address: 0x102956c, Func Offset: 0x5c
	// Line 968, Address: 0x1029574, Func Offset: 0x64
	// Line 971, Address: 0x1029580, Func Offset: 0x70
	// Func End, Address: 0x1029590, Func Offset: 0x80
}

// 
// Start address: 0x1029590
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 976, Address: 0x1029590, Func Offset: 0
	// Line 980, Address: 0x10295a0, Func Offset: 0x10
	// Line 981, Address: 0x10295bc, Func Offset: 0x2c
	// Line 982, Address: 0x10295c8, Func Offset: 0x38
	// Line 984, Address: 0x10295dc, Func Offset: 0x4c
	// Line 985, Address: 0x10295e4, Func Offset: 0x54
	// Line 986, Address: 0x10295ec, Func Offset: 0x5c
	// Line 987, Address: 0x10295f0, Func Offset: 0x60
	// Line 988, Address: 0x10295fc, Func Offset: 0x6c
	// Func End, Address: 0x1029610, Func Offset: 0x80
}

// 
// Start address: 0x1029610
void scrv_up_ch(_anon2 lD1)
{
	// Line 992, Address: 0x1029610, Func Offset: 0
	// Line 993, Address: 0x102961c, Func Offset: 0xc
	// Line 994, Address: 0x1029644, Func Offset: 0x34
	// Line 995, Address: 0x102965c, Func Offset: 0x4c
	// Line 996, Address: 0x1029668, Func Offset: 0x58
	// Line 997, Address: 0x102967c, Func Offset: 0x6c
	// Line 998, Address: 0x1029690, Func Offset: 0x80
	// Line 999, Address: 0x10296a4, Func Offset: 0x94
	// Line 1002, Address: 0x10296ac, Func Offset: 0x9c
	// Line 1005, Address: 0x10296b8, Func Offset: 0xa8
	// Line 1007, Address: 0x10296c4, Func Offset: 0xb4
	// Func End, Address: 0x10296d4, Func Offset: 0xc4
}

// 
// Start address: 0x10296e0
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 1013, Address: 0x10296e0, Func Offset: 0
	// Line 1017, Address: 0x10296f0, Func Offset: 0x10
	// Line 1018, Address: 0x10296f4, Func Offset: 0x14
	// Line 1019, Address: 0x10296fc, Func Offset: 0x1c
	// Line 1020, Address: 0x1029708, Func Offset: 0x28
	// Line 1022, Address: 0x102971c, Func Offset: 0x3c
	// Line 1023, Address: 0x1029724, Func Offset: 0x44
	// Line 1024, Address: 0x102972c, Func Offset: 0x4c
	// Line 1026, Address: 0x1029730, Func Offset: 0x50
	// Line 1028, Address: 0x102973c, Func Offset: 0x5c
	// Func End, Address: 0x1029750, Func Offset: 0x70
}

// 
// Start address: 0x1029750
void scrv_down_ch(_anon2 lD1)
{
	// Line 1032, Address: 0x1029750, Func Offset: 0
	// Line 1033, Address: 0x102975c, Func Offset: 0xc
	// Line 1034, Address: 0x1029784, Func Offset: 0x34
	// Line 1035, Address: 0x1029790, Func Offset: 0x40
	// Line 1036, Address: 0x10297a4, Func Offset: 0x54
	// Line 1037, Address: 0x10297b8, Func Offset: 0x68
	// Line 1038, Address: 0x10297cc, Func Offset: 0x7c
	// Line 1039, Address: 0x10297e0, Func Offset: 0x90
	// Line 1041, Address: 0x10297e8, Func Offset: 0x98
	// Line 1044, Address: 0x10297f4, Func Offset: 0xa4
	// Line 1046, Address: 0x1029800, Func Offset: 0xb0
	// Func End, Address: 0x1029810, Func Offset: 0xc0
}

// 
// Start address: 0x1029810
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1049, Address: 0x1029810, Func Offset: 0
	// Line 1052, Address: 0x1029820, Func Offset: 0x10
	// Line 1054, Address: 0x102982c, Func Offset: 0x1c
	// Line 1055, Address: 0x1029834, Func Offset: 0x24
	// Line 1056, Address: 0x102983c, Func Offset: 0x2c
	// Line 1058, Address: 0x1029840, Func Offset: 0x30
	// Line 1059, Address: 0x1029868, Func Offset: 0x58
	// Line 1062, Address: 0x1029874, Func Offset: 0x64
	// Line 1063, Address: 0x10298a8, Func Offset: 0x98
	// Line 1064, Address: 0x10298bc, Func Offset: 0xac
	// Line 1066, Address: 0x10298e8, Func Offset: 0xd8
	// Line 1067, Address: 0x10298fc, Func Offset: 0xec
	// Line 1069, Address: 0x1029904, Func Offset: 0xf4
	// Line 1074, Address: 0x1029918, Func Offset: 0x108
	// Func End, Address: 0x102992c, Func Offset: 0x11c
}

// 
// Start address: 0x1029930
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1078, Address: 0x1029930, Func Offset: 0
	// Line 1081, Address: 0x102993c, Func Offset: 0xc
	// Line 1082, Address: 0x102994c, Func Offset: 0x1c
	// Line 1083, Address: 0x102995c, Func Offset: 0x2c
	// Line 1085, Address: 0x1029968, Func Offset: 0x38
	// Line 1087, Address: 0x102999c, Func Offset: 0x6c
	// Line 1088, Address: 0x10299b0, Func Offset: 0x80
	// Line 1089, Address: 0x10299c0, Func Offset: 0x90
	// Line 1090, Address: 0x10299d4, Func Offset: 0xa4
	// Line 1091, Address: 0x10299e8, Func Offset: 0xb8
	// Line 1094, Address: 0x10299f0, Func Offset: 0xc0
	// Line 1099, Address: 0x1029a04, Func Offset: 0xd4
	// Line 1100, Address: 0x1029a14, Func Offset: 0xe4
	// Line 1101, Address: 0x1029a24, Func Offset: 0xf4
	// Line 1103, Address: 0x1029a30, Func Offset: 0x100
	// Line 1105, Address: 0x1029a64, Func Offset: 0x134
	// Line 1106, Address: 0x1029a78, Func Offset: 0x148
	// Line 1107, Address: 0x1029a88, Func Offset: 0x158
	// Line 1108, Address: 0x1029a9c, Func Offset: 0x16c
	// Line 1109, Address: 0x1029ab0, Func Offset: 0x180
	// Line 1112, Address: 0x1029ab8, Func Offset: 0x188
	// Line 1117, Address: 0x1029acc, Func Offset: 0x19c
	// Func End, Address: 0x1029ad8, Func Offset: 0x1a8
}

// 
// Start address: 0x1029ae0
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1124, Address: 0x1029ae0, Func Offset: 0
	// Line 1127, Address: 0x1029aec, Func Offset: 0xc
	// Line 1128, Address: 0x1029af8, Func Offset: 0x18
	// Line 1130, Address: 0x1029b04, Func Offset: 0x24
	// Line 1131, Address: 0x1029b30, Func Offset: 0x50
	// Line 1132, Address: 0x1029b44, Func Offset: 0x64
	// Line 1133, Address: 0x1029b74, Func Offset: 0x94
	// Line 1134, Address: 0x1029b88, Func Offset: 0xa8
	// Line 1137, Address: 0x1029b90, Func Offset: 0xb0
	// Line 1142, Address: 0x1029ba4, Func Offset: 0xc4
	// Func End, Address: 0x1029bb4, Func Offset: 0xd4
}

// 
// Start address: 0x1029bc0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1146, Address: 0x1029bc0, Func Offset: 0
	// Line 1150, Address: 0x1029bd0, Func Offset: 0x10
	// Line 1151, Address: 0x1029bdc, Func Offset: 0x1c
	// Line 1152, Address: 0x1029bec, Func Offset: 0x2c
	// Line 1154, Address: 0x1029bf8, Func Offset: 0x38
	// Line 1155, Address: 0x1029c00, Func Offset: 0x40
	// Line 1156, Address: 0x1029c08, Func Offset: 0x48
	// Line 1158, Address: 0x1029c14, Func Offset: 0x54
	// Line 1159, Address: 0x1029c20, Func Offset: 0x60
	// Line 1160, Address: 0x1029c34, Func Offset: 0x74
	// Line 1161, Address: 0x1029c40, Func Offset: 0x80
	// Line 1162, Address: 0x1029c54, Func Offset: 0x94
	// Line 1163, Address: 0x1029c64, Func Offset: 0xa4
	// Line 1164, Address: 0x1029c78, Func Offset: 0xb8
	// Line 1165, Address: 0x1029c94, Func Offset: 0xd4
	// Line 1168, Address: 0x1029c9c, Func Offset: 0xdc
	// Line 1173, Address: 0x1029cbc, Func Offset: 0xfc
	// Func End, Address: 0x1029ccc, Func Offset: 0x10c
}

// 
// Start address: 0x1029cd0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1177, Address: 0x1029cd0, Func Offset: 0
	// Line 1181, Address: 0x1029ce0, Func Offset: 0x10
	// Line 1182, Address: 0x1029cec, Func Offset: 0x1c
	// Line 1183, Address: 0x1029cfc, Func Offset: 0x2c
	// Line 1185, Address: 0x1029d08, Func Offset: 0x38
	// Line 1186, Address: 0x1029d10, Func Offset: 0x40
	// Line 1187, Address: 0x1029d18, Func Offset: 0x48
	// Line 1189, Address: 0x1029d24, Func Offset: 0x54
	// Line 1190, Address: 0x1029d30, Func Offset: 0x60
	// Line 1191, Address: 0x1029d44, Func Offset: 0x74
	// Line 1192, Address: 0x1029d50, Func Offset: 0x80
	// Line 1193, Address: 0x1029d64, Func Offset: 0x94
	// Line 1194, Address: 0x1029d74, Func Offset: 0xa4
	// Line 1195, Address: 0x1029d88, Func Offset: 0xb8
	// Line 1196, Address: 0x1029da4, Func Offset: 0xd4
	// Line 1199, Address: 0x1029dac, Func Offset: 0xdc
	// Line 1204, Address: 0x1029dcc, Func Offset: 0xfc
	// Func End, Address: 0x1029ddc, Func Offset: 0x10c
}

// 
// Start address: 0x1029de0
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1216, Address: 0x1029de0, Func Offset: 0
	// Line 1220, Address: 0x1029df0, Func Offset: 0x10
	// Line 1221, Address: 0x1029dfc, Func Offset: 0x1c
	// Line 1222, Address: 0x1029e0c, Func Offset: 0x2c
	// Line 1224, Address: 0x1029e18, Func Offset: 0x38
	// Line 1225, Address: 0x1029e20, Func Offset: 0x40
	// Line 1226, Address: 0x1029e28, Func Offset: 0x48
	// Line 1228, Address: 0x1029e34, Func Offset: 0x54
	// Line 1229, Address: 0x1029e40, Func Offset: 0x60
	// Line 1230, Address: 0x1029e54, Func Offset: 0x74
	// Line 1231, Address: 0x1029e60, Func Offset: 0x80
	// Line 1232, Address: 0x1029e74, Func Offset: 0x94
	// Line 1233, Address: 0x1029e84, Func Offset: 0xa4
	// Line 1234, Address: 0x1029e98, Func Offset: 0xb8
	// Line 1235, Address: 0x1029eb4, Func Offset: 0xd4
	// Line 1238, Address: 0x1029ebc, Func Offset: 0xdc
	// Line 1243, Address: 0x1029edc, Func Offset: 0xfc
	// Func End, Address: 0x1029eec, Func Offset: 0x10c
}

// 
// Start address: 0x1029ef0
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1258, Address: 0x1029ef0, Func Offset: 0
	// Line 1264, Address: 0x1029f0c, Func Offset: 0x1c
	// Line 1265, Address: 0x1029f10, Func Offset: 0x20
	// Line 1266, Address: 0x1029f1c, Func Offset: 0x2c
	// Line 1267, Address: 0x1029f28, Func Offset: 0x38
	// Line 1268, Address: 0x1029f30, Func Offset: 0x40
	// Line 1269, Address: 0x1029f38, Func Offset: 0x48
	// Line 1277, Address: 0x1029f4c, Func Offset: 0x5c
	// Func End, Address: 0x1029f70, Func Offset: 0x80
}

// 
// Start address: 0x1029f70
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
	// Line 1290, Address: 0x1029f70, Func Offset: 0
	// Line 1299, Address: 0x1029f90, Func Offset: 0x20
	// Line 1300, Address: 0x1029f94, Func Offset: 0x24
	// Line 1301, Address: 0x1029fa0, Func Offset: 0x30
	// Line 1302, Address: 0x1029fac, Func Offset: 0x3c
	// Line 1303, Address: 0x1029fb4, Func Offset: 0x44
	// Line 1304, Address: 0x1029fbc, Func Offset: 0x4c
	// Line 1306, Address: 0x1029fd0, Func Offset: 0x60
	// Line 1307, Address: 0x1029fd4, Func Offset: 0x64
	// Line 1308, Address: 0x1029fe0, Func Offset: 0x70
	// Line 1309, Address: 0x1029fec, Func Offset: 0x7c
	// Line 1310, Address: 0x1029ff4, Func Offset: 0x84
	// Line 1312, Address: 0x1029ffc, Func Offset: 0x8c
	// Line 1313, Address: 0x102a008, Func Offset: 0x98
	// Line 1314, Address: 0x102a01c, Func Offset: 0xac
	// Line 1316, Address: 0x102a028, Func Offset: 0xb8
	// Line 1317, Address: 0x102a030, Func Offset: 0xc0
	// Line 1319, Address: 0x102a038, Func Offset: 0xc8
	// Line 1321, Address: 0x102a058, Func Offset: 0xe8
	// Line 1327, Address: 0x102a084, Func Offset: 0x114
	// Line 1328, Address: 0x102a098, Func Offset: 0x128
	// Line 1330, Address: 0x102a0a4, Func Offset: 0x134
	// Line 1331, Address: 0x102a0ac, Func Offset: 0x13c
	// Line 1332, Address: 0x102a0b4, Func Offset: 0x144
	// Line 1334, Address: 0x102a0d4, Func Offset: 0x164
	// Line 1340, Address: 0x102a100, Func Offset: 0x190
	// Line 1341, Address: 0x102a114, Func Offset: 0x1a4
	// Line 1343, Address: 0x102a120, Func Offset: 0x1b0
	// Line 1344, Address: 0x102a128, Func Offset: 0x1b8
	// Line 1345, Address: 0x102a130, Func Offset: 0x1c0
	// Line 1347, Address: 0x102a150, Func Offset: 0x1e0
	// Line 1353, Address: 0x102a17c, Func Offset: 0x20c
	// Line 1354, Address: 0x102a190, Func Offset: 0x220
	// Line 1356, Address: 0x102a19c, Func Offset: 0x22c
	// Line 1357, Address: 0x102a1a4, Func Offset: 0x234
	// Line 1358, Address: 0x102a1ac, Func Offset: 0x23c
	// Line 1360, Address: 0x102a1cc, Func Offset: 0x25c
	// Line 1369, Address: 0x102a1f8, Func Offset: 0x288
	// Func End, Address: 0x102a220, Func Offset: 0x2b0
}

// 
// Start address: 0x102a220
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
	// Line 1386, Address: 0x102a220, Func Offset: 0
	// Line 1397, Address: 0x102a24c, Func Offset: 0x2c
	// Line 1399, Address: 0x102a254, Func Offset: 0x34
	// Line 1400, Address: 0x102a26c, Func Offset: 0x4c
	// Line 1401, Address: 0x102a280, Func Offset: 0x60
	// Line 1403, Address: 0x102a288, Func Offset: 0x68
	// Line 1405, Address: 0x102a29c, Func Offset: 0x7c
	// Line 1406, Address: 0x102a2b4, Func Offset: 0x94
	// Line 1407, Address: 0x102a2c8, Func Offset: 0xa8
	// Line 1408, Address: 0x102a2d0, Func Offset: 0xb0
	// Line 1410, Address: 0x102a2d8, Func Offset: 0xb8
	// Line 1411, Address: 0x102a2ec, Func Offset: 0xcc
	// Line 1416, Address: 0x102a2f4, Func Offset: 0xd4
	// Line 1417, Address: 0x102a344, Func Offset: 0x124
	// Line 1418, Address: 0x102a34c, Func Offset: 0x12c
	// Line 1424, Address: 0x102a36c, Func Offset: 0x14c
	// Line 1425, Address: 0x102a38c, Func Offset: 0x16c
	// Line 1426, Address: 0x102a3b0, Func Offset: 0x190
	// Line 1427, Address: 0x102a3bc, Func Offset: 0x19c
	// Line 1428, Address: 0x102a3c4, Func Offset: 0x1a4
	// Line 1430, Address: 0x102a3e4, Func Offset: 0x1c4
	// Line 1434, Address: 0x102a410, Func Offset: 0x1f0
	// Line 1437, Address: 0x102a418, Func Offset: 0x1f8
	// Line 1438, Address: 0x102a41c, Func Offset: 0x1fc
	// Line 1442, Address: 0x102a43c, Func Offset: 0x21c
	// Line 1449, Address: 0x102a468, Func Offset: 0x248
	// Line 1456, Address: 0x102a47c, Func Offset: 0x25c
	// Line 1457, Address: 0x102a484, Func Offset: 0x264
	// Line 1458, Address: 0x102a48c, Func Offset: 0x26c
	// Line 1459, Address: 0x102a4a4, Func Offset: 0x284
	// Line 1460, Address: 0x102a4c4, Func Offset: 0x2a4
	// Line 1464, Address: 0x102a4cc, Func Offset: 0x2ac
	// Line 1466, Address: 0x102a4fc, Func Offset: 0x2dc
	// Line 1467, Address: 0x102a508, Func Offset: 0x2e8
	// Line 1471, Address: 0x102a518, Func Offset: 0x2f8
	// Line 1472, Address: 0x102a524, Func Offset: 0x304
	// Line 1473, Address: 0x102a544, Func Offset: 0x324
	// Line 1474, Address: 0x102a570, Func Offset: 0x350
	// Line 1475, Address: 0x102a590, Func Offset: 0x370
	// Line 1477, Address: 0x102a5b4, Func Offset: 0x394
	// Line 1480, Address: 0x102a5d8, Func Offset: 0x3b8
	// Line 1482, Address: 0x102a5f8, Func Offset: 0x3d8
	// Line 1484, Address: 0x102a60c, Func Offset: 0x3ec
	// Line 1485, Address: 0x102a618, Func Offset: 0x3f8
	// Line 1486, Address: 0x102a628, Func Offset: 0x408
	// Line 1488, Address: 0x102a630, Func Offset: 0x410
	// Func End, Address: 0x102a658, Func Offset: 0x438
}

// 
// Start address: 0x102a660
void scrollwrtc()
{
	// Line 1496, Address: 0x102a660, Func Offset: 0
	// Func End, Address: 0x102a668, Func Offset: 0x8
}

// 
// Start address: 0x102a670
void scrollwrtz()
{
	// Line 1501, Address: 0x102a670, Func Offset: 0
	// Func End, Address: 0x102a678, Func Offset: 0x8
}

// 
// Start address: 0x102a680
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1522, Address: 0x102a680, Func Offset: 0
	// Line 1535, Address: 0x102a6a8, Func Offset: 0x28
	// Line 1538, Address: 0x102a6c8, Func Offset: 0x48
	// Line 1539, Address: 0x102a6dc, Func Offset: 0x5c
	// Line 1540, Address: 0x102a6f0, Func Offset: 0x70
	// Line 1541, Address: 0x102a704, Func Offset: 0x84
	// Line 1543, Address: 0x102a718, Func Offset: 0x98
	// Line 1544, Address: 0x102a724, Func Offset: 0xa4
	// Line 1545, Address: 0x102a738, Func Offset: 0xb8
	// Func End, Address: 0x102a748, Func Offset: 0xc8
}

// 
// Start address: 0x102a750
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1549, Address: 0x102a750, Func Offset: 0
	// Line 1553, Address: 0x102a778, Func Offset: 0x28
	// Line 1556, Address: 0x102a798, Func Offset: 0x48
	// Line 1557, Address: 0x102a7ac, Func Offset: 0x5c
	// Line 1558, Address: 0x102a7c0, Func Offset: 0x70
	// Line 1559, Address: 0x102a7d4, Func Offset: 0x84
	// Line 1561, Address: 0x102a7e8, Func Offset: 0x98
	// Line 1562, Address: 0x102a7f4, Func Offset: 0xa4
	// Line 1563, Address: 0x102a808, Func Offset: 0xb8
	// Func End, Address: 0x102a818, Func Offset: 0xc8
}

// 
// Start address: 0x102a820
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1582, Address: 0x102a820, Func Offset: 0
	// Line 1586, Address: 0x102a848, Func Offset: 0x28
	// Line 1589, Address: 0x102a868, Func Offset: 0x48
	// Line 1590, Address: 0x102a87c, Func Offset: 0x5c
	// Line 1591, Address: 0x102a88c, Func Offset: 0x6c
	// Line 1592, Address: 0x102a8a0, Func Offset: 0x80
	// Line 1594, Address: 0x102a8b0, Func Offset: 0x90
	// Line 1595, Address: 0x102a8bc, Func Offset: 0x9c
	// Line 1596, Address: 0x102a8d0, Func Offset: 0xb0
	// Func End, Address: 0x102a8e0, Func Offset: 0xc0
}

// 
// Start address: 0x102a8e0
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
	// Line 1615, Address: 0x102a8e0, Func Offset: 0
	// Line 1621, Address: 0x102a914, Func Offset: 0x34
	// Line 1623, Address: 0x102a924, Func Offset: 0x44
	// Line 1624, Address: 0x102a928, Func Offset: 0x48
	// Line 1625, Address: 0x102a930, Func Offset: 0x50
	// Line 1627, Address: 0x102a940, Func Offset: 0x60
	// Line 1629, Address: 0x102a944, Func Offset: 0x64
	// Line 1630, Address: 0x102a94c, Func Offset: 0x6c
	// Line 1633, Address: 0x102a954, Func Offset: 0x74
	// Line 1634, Address: 0x102a95c, Func Offset: 0x7c
	// Line 1635, Address: 0x102a968, Func Offset: 0x88
	// Line 1637, Address: 0x102a974, Func Offset: 0x94
	// Line 1638, Address: 0x102a97c, Func Offset: 0x9c
	// Line 1639, Address: 0x102a984, Func Offset: 0xa4
	// Line 1640, Address: 0x102a98c, Func Offset: 0xac
	// Line 1642, Address: 0x102a998, Func Offset: 0xb8
	// Line 1643, Address: 0x102a9a0, Func Offset: 0xc0
	// Line 1644, Address: 0x102a9a8, Func Offset: 0xc8
	// Line 1645, Address: 0x102a9b0, Func Offset: 0xd0
	// Line 1647, Address: 0x102a9bc, Func Offset: 0xdc
	// Line 1648, Address: 0x102a9c4, Func Offset: 0xe4
	// Line 1649, Address: 0x102a9cc, Func Offset: 0xec
	// Line 1652, Address: 0x102a9d4, Func Offset: 0xf4
	// Line 1653, Address: 0x102a9dc, Func Offset: 0xfc
	// Line 1656, Address: 0x102a9e4, Func Offset: 0x104
	// Line 1657, Address: 0x102aa28, Func Offset: 0x148
	// Line 1658, Address: 0x102aa6c, Func Offset: 0x18c
	// Line 1659, Address: 0x102aab0, Func Offset: 0x1d0
	// Line 1661, Address: 0x102aaf4, Func Offset: 0x214
	// Func End, Address: 0x102ab24, Func Offset: 0x244
}

// 
// Start address: 0x102ab30
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1679, Address: 0x102ab30, Func Offset: 0
	// Line 1680, Address: 0x102ab50, Func Offset: 0x20
	// Line 1681, Address: 0x102ab70, Func Offset: 0x40
	// Func End, Address: 0x102ab80, Func Offset: 0x50
}

// 
// Start address: 0x102ab80
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1683, Address: 0x102ab80, Func Offset: 0
	// Line 1684, Address: 0x102aba0, Func Offset: 0x20
	// Line 1685, Address: 0x102aba4, Func Offset: 0x24
	// Line 1686, Address: 0x102abc4, Func Offset: 0x44
	// Func End, Address: 0x102abd4, Func Offset: 0x54
}

// 
// Start address: 0x102abe0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1693, Address: 0x102abe0, Func Offset: 0
	// Line 1699, Address: 0x102ac10, Func Offset: 0x30
	// Line 1700, Address: 0x102ac20, Func Offset: 0x40
	// Line 1706, Address: 0x102ac30, Func Offset: 0x50
	// Line 1707, Address: 0x102ac4c, Func Offset: 0x6c
	// Line 1708, Address: 0x102ac50, Func Offset: 0x70
	// Line 1709, Address: 0x102ac6c, Func Offset: 0x8c
	// Line 1710, Address: 0x102ac70, Func Offset: 0x90
	// Line 1711, Address: 0x102ac90, Func Offset: 0xb0
	// Line 1712, Address: 0x102ac98, Func Offset: 0xb8
	// Line 1713, Address: 0x102acb8, Func Offset: 0xd8
	// Line 1714, Address: 0x102acc0, Func Offset: 0xe0
	// Line 1715, Address: 0x102ad08, Func Offset: 0x128
	// Line 1717, Address: 0x102ad14, Func Offset: 0x134
	// Line 1719, Address: 0x102ad30, Func Offset: 0x150
	// Line 1724, Address: 0x102ad38, Func Offset: 0x158
	// Line 1725, Address: 0x102ad44, Func Offset: 0x164
	// Line 1728, Address: 0x102ad50, Func Offset: 0x170
	// Line 1729, Address: 0x102ad58, Func Offset: 0x178
	// Line 1730, Address: 0x102ad78, Func Offset: 0x198
	// Line 1731, Address: 0x102ad94, Func Offset: 0x1b4
	// Line 1732, Address: 0x102ad9c, Func Offset: 0x1bc
	// Line 1733, Address: 0x102adbc, Func Offset: 0x1dc
	// Line 1735, Address: 0x102add8, Func Offset: 0x1f8
	// Line 1736, Address: 0x102ade0, Func Offset: 0x200
	// Line 1737, Address: 0x102ade8, Func Offset: 0x208
	// Line 1738, Address: 0x102adf4, Func Offset: 0x214
	// Line 1739, Address: 0x102ae0c, Func Offset: 0x22c
	// Line 1741, Address: 0x102ae1c, Func Offset: 0x23c
	// Line 1744, Address: 0x102ae28, Func Offset: 0x248
	// Line 1745, Address: 0x102ae30, Func Offset: 0x250
	// Line 1746, Address: 0x102ae34, Func Offset: 0x254
	// Func End, Address: 0x102ae54, Func Offset: 0x274
}

// 
// Start address: 0x102ae60
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1766, Address: 0x102ae60, Func Offset: 0
	// Line 1774, Address: 0x102ae88, Func Offset: 0x28
	// Line 1775, Address: 0x102aeec, Func Offset: 0x8c
	// Line 1781, Address: 0x102aef4, Func Offset: 0x94
	// Line 1782, Address: 0x102aefc, Func Offset: 0x9c
	// Line 1783, Address: 0x102af1c, Func Offset: 0xbc
	// Line 1784, Address: 0x102af38, Func Offset: 0xd8
	// Line 1785, Address: 0x102af40, Func Offset: 0xe0
	// Line 1786, Address: 0x102af60, Func Offset: 0x100
	// Line 1789, Address: 0x102af7c, Func Offset: 0x11c
	// Line 1790, Address: 0x102af84, Func Offset: 0x124
	// Line 1791, Address: 0x102af8c, Func Offset: 0x12c
	// Line 1792, Address: 0x102af98, Func Offset: 0x138
	// Line 1793, Address: 0x102afb0, Func Offset: 0x150
	// Line 1794, Address: 0x102afb8, Func Offset: 0x158
	// Line 1799, Address: 0x102afc8, Func Offset: 0x168
	// Line 1802, Address: 0x102afd4, Func Offset: 0x174
	// Line 1803, Address: 0x102afdc, Func Offset: 0x17c
	// Line 1804, Address: 0x102afe0, Func Offset: 0x180
	// Func End, Address: 0x102affc, Func Offset: 0x19c
}

// 
// Start address: 0x102b000
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1818, Address: 0x102b000, Func Offset: 0
	// Line 1825, Address: 0x102b01c, Func Offset: 0x1c
	// Line 1826, Address: 0x102b020, Func Offset: 0x20
	// Line 1827, Address: 0x102b028, Func Offset: 0x28
	// Line 1828, Address: 0x102b04c, Func Offset: 0x4c
	// Line 1829, Address: 0x102b058, Func Offset: 0x58
	// Line 1830, Address: 0x102b070, Func Offset: 0x70
	// Line 1831, Address: 0x102b084, Func Offset: 0x84
	// Line 1836, Address: 0x102b09c, Func Offset: 0x9c
	// Func End, Address: 0x102b0b4, Func Offset: 0xb4
}

// 
// Start address: 0x102b0c0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1850, Address: 0x102b0c0, Func Offset: 0
	// Line 1851, Address: 0x102b0cc, Func Offset: 0xc
	// Line 1852, Address: 0x102b0f8, Func Offset: 0x38
	// Line 1853, Address: 0x102b144, Func Offset: 0x84
	// Line 1854, Address: 0x102b170, Func Offset: 0xb0
	// Line 1856, Address: 0x102b1bc, Func Offset: 0xfc
	// Line 1862, Address: 0x102b1c8, Func Offset: 0x108
	// Line 1863, Address: 0x102b1cc, Func Offset: 0x10c
	// Func End, Address: 0x102b1d8, Func Offset: 0x118
}

// 
// Start address: 0x102b1e0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1880, Address: 0x102b1e0, Func Offset: 0
	// Line 1881, Address: 0x102b1fc, Func Offset: 0x1c
	// Line 1883, Address: 0x102b218, Func Offset: 0x38
	// Func End, Address: 0x102b228, Func Offset: 0x48
}

// 
// Start address: 0x102b230
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1885, Address: 0x102b230, Func Offset: 0
	// Line 1886, Address: 0x102b24c, Func Offset: 0x1c
	// Line 1887, Address: 0x102b250, Func Offset: 0x20
	// Line 1889, Address: 0x102b26c, Func Offset: 0x3c
	// Func End, Address: 0x102b27c, Func Offset: 0x4c
}

// 
// Start address: 0x102b280
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1891, Address: 0x102b280, Func Offset: 0
	// Line 1892, Address: 0x102b294, Func Offset: 0x14
	// Line 1894, Address: 0x102b2b0, Func Offset: 0x30
	// Func End, Address: 0x102b2c0, Func Offset: 0x40
}

// 
// Start address: 0x102b2c0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1896, Address: 0x102b2c0, Func Offset: 0
	// Line 1897, Address: 0x102b2dc, Func Offset: 0x1c
	// Line 1899, Address: 0x102b2f8, Func Offset: 0x38
	// Func End, Address: 0x102b308, Func Offset: 0x48
}

// 
// Start address: 0x102b310
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1901, Address: 0x102b310, Func Offset: 0
	// Line 1902, Address: 0x102b328, Func Offset: 0x18
	// Line 1903, Address: 0x102b338, Func Offset: 0x28
	// Line 1904, Address: 0x102b348, Func Offset: 0x38
	// Line 1905, Address: 0x102b354, Func Offset: 0x44
	// Line 1907, Address: 0x102b360, Func Offset: 0x50
	// Line 1908, Address: 0x102b38c, Func Offset: 0x7c
	// Line 1911, Address: 0x102b3b8, Func Offset: 0xa8
	// Func End, Address: 0x102b3c4, Func Offset: 0xb4
}

// 
// Start address: 0x102b3d0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1927, Address: 0x102b3d0, Func Offset: 0
	// Line 1932, Address: 0x102b3e8, Func Offset: 0x18
	// Line 1933, Address: 0x102b3f4, Func Offset: 0x24
	// Line 1934, Address: 0x102b400, Func Offset: 0x30
	// Line 1935, Address: 0x102b408, Func Offset: 0x38
	// Line 1936, Address: 0x102b40c, Func Offset: 0x3c
	// Line 1940, Address: 0x102b424, Func Offset: 0x54
	// Line 1941, Address: 0x102b42c, Func Offset: 0x5c
	// Line 1942, Address: 0x102b430, Func Offset: 0x60
	// Line 1944, Address: 0x102b440, Func Offset: 0x70
	// Func End, Address: 0x102b460, Func Offset: 0x90
}

// 
// Start address: 0x102b460
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1947, Address: 0x102b460, Func Offset: 0
	// Line 1948, Address: 0x102b478, Func Offset: 0x18
	// Line 1949, Address: 0x102b498, Func Offset: 0x38
	// Func End, Address: 0x102b4a8, Func Offset: 0x48
}

// 
// Start address: 0x102b4b0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1954, Address: 0x102b4b0, Func Offset: 0
	// Line 1958, Address: 0x102b4d0, Func Offset: 0x20
	// Line 1961, Address: 0x102b4ec, Func Offset: 0x3c
	// Line 1965, Address: 0x102b514, Func Offset: 0x64
	// Line 1966, Address: 0x102b520, Func Offset: 0x70
	// Line 1968, Address: 0x102b548, Func Offset: 0x98
	// Func End, Address: 0x102b558, Func Offset: 0xa8
}

// 
// Start address: 0x102b560
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1973, Address: 0x102b560, Func Offset: 0
	// Line 1976, Address: 0x102b57c, Func Offset: 0x1c
	// Line 1977, Address: 0x102b584, Func Offset: 0x24
	// Line 1985, Address: 0x102b58c, Func Offset: 0x2c
	// Line 1986, Address: 0x102b5a8, Func Offset: 0x48
	// Line 1988, Address: 0x102b5d4, Func Offset: 0x74
	// Line 1990, Address: 0x102b5f8, Func Offset: 0x98
	// Line 1991, Address: 0x102b618, Func Offset: 0xb8
	// Line 1992, Address: 0x102b620, Func Offset: 0xc0
	// Line 1993, Address: 0x102b644, Func Offset: 0xe4
	// Func End, Address: 0x102b660, Func Offset: 0x100
}

// 
// Start address: 0x102b660
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2019, Address: 0x102b660, Func Offset: 0
	// Line 2024, Address: 0x102b688, Func Offset: 0x28
	// Line 2025, Address: 0x102b698, Func Offset: 0x38
	// Line 2027, Address: 0x102b6b4, Func Offset: 0x54
	// Line 2028, Address: 0x102b6d8, Func Offset: 0x78
	// Line 2029, Address: 0x102b700, Func Offset: 0xa0
	// Line 2030, Address: 0x102b70c, Func Offset: 0xac
	// Line 2031, Address: 0x102b714, Func Offset: 0xb4
	// Line 2034, Address: 0x102b730, Func Offset: 0xd0
	// Line 2038, Address: 0x102b758, Func Offset: 0xf8
	// Line 2041, Address: 0x102b760, Func Offset: 0x100
	// Line 2042, Address: 0x102b764, Func Offset: 0x104
	// Line 2046, Address: 0x102b780, Func Offset: 0x120
	// Line 2053, Address: 0x102b7a8, Func Offset: 0x148
	// Func End, Address: 0x102b7c4, Func Offset: 0x164
}

// 
// Start address: 0x102b7d0
void mapinit()
{
	// Line 2058, Address: 0x102b7d0, Func Offset: 0
	// Line 2064, Address: 0x102b7d8, Func Offset: 0x8
	// Line 2067, Address: 0x102b7e0, Func Offset: 0x10
	// Line 2068, Address: 0x102b7f4, Func Offset: 0x24
	// Line 2075, Address: 0x102b808, Func Offset: 0x38
	// Line 2076, Address: 0x102b81c, Func Offset: 0x4c
	// Line 2079, Address: 0x102b824, Func Offset: 0x54
	// Line 2081, Address: 0x102b83c, Func Offset: 0x6c
	// Line 2085, Address: 0x102b844, Func Offset: 0x74
	// Func End, Address: 0x102b854, Func Offset: 0x84
}

// 
// Start address: 0x102b860
void mapset()
{
	// Line 2095, Address: 0x102b860, Func Offset: 0
	// Func End, Address: 0x102b868, Func Offset: 0x8
}

