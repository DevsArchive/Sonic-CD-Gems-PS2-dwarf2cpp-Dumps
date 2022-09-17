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
typedef int type_9[15];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[15];
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

unsigned char z31dwrttbl[49];
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
	// Line 112, Address: 0x1026ce0, Func Offset: 0
	// Func End, Address: 0x1026ce8, Func Offset: 0x8
}

// 
// Start address: 0x1026cf0
void divdevset()
{
	// Line 116, Address: 0x1026cf0, Func Offset: 0
	// Func End, Address: 0x1026cf8, Func Offset: 0x8
}

// 
// Start address: 0x1026d00
_anon1* main_chk()
{
	// Line 170, Address: 0x1026d00, Func Offset: 0
	// Line 171, Address: 0x1026d14, Func Offset: 0x14
	// Line 173, Address: 0x1026d24, Func Offset: 0x24
	// Line 174, Address: 0x1026d2c, Func Offset: 0x2c
	// Func End, Address: 0x1026d34, Func Offset: 0x34
}

// 
// Start address: 0x1026d40
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 187, Address: 0x1026d40, Func Offset: 0
	// Line 193, Address: 0x1026d4c, Func Offset: 0xc
	// Line 198, Address: 0x1026d80, Func Offset: 0x40
	// Line 200, Address: 0x1026dc8, Func Offset: 0x88
	// Line 201, Address: 0x1026dcc, Func Offset: 0x8c
	// Line 202, Address: 0x1026de8, Func Offset: 0xa8
	// Line 203, Address: 0x1026dfc, Func Offset: 0xbc
	// Line 204, Address: 0x1026e18, Func Offset: 0xd8
	// Line 205, Address: 0x1026e2c, Func Offset: 0xec
	// Line 206, Address: 0x1026e48, Func Offset: 0x108
	// Line 207, Address: 0x1026e5c, Func Offset: 0x11c
	// Line 208, Address: 0x1026e78, Func Offset: 0x138
	// Line 209, Address: 0x1026e8c, Func Offset: 0x14c
	// Line 211, Address: 0x1026ea8, Func Offset: 0x168
	// Line 212, Address: 0x1026ecc, Func Offset: 0x18c
	// Line 213, Address: 0x1026ed8, Func Offset: 0x198
	// Line 215, Address: 0x1026ee4, Func Offset: 0x1a4
	// Line 216, Address: 0x1026f00, Func Offset: 0x1c0
	// Line 218, Address: 0x1026f0c, Func Offset: 0x1cc
	// Line 219, Address: 0x1026f14, Func Offset: 0x1d4
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
	// Line 231, Address: 0x1026f30, Func Offset: 0
	// Line 232, Address: 0x1026f48, Func Offset: 0x18
	// Line 236, Address: 0x1026f64, Func Offset: 0x34
	// Line 246, Address: 0x1026f98, Func Offset: 0x68
	// Line 256, Address: 0x1026fc4, Func Offset: 0x94
	// Line 257, Address: 0x1026fd8, Func Offset: 0xa8
	// Line 258, Address: 0x1026fe0, Func Offset: 0xb0
	// Line 259, Address: 0x1026ff0, Func Offset: 0xc0
	// Line 261, Address: 0x1027000, Func Offset: 0xd0
	// Line 263, Address: 0x1027014, Func Offset: 0xe4
	// Line 266, Address: 0x102701c, Func Offset: 0xec
	// Line 267, Address: 0x1027034, Func Offset: 0x104
	// Line 268, Address: 0x102705c, Func Offset: 0x12c
	// Line 271, Address: 0x1027064, Func Offset: 0x134
	// Line 274, Address: 0x1027084, Func Offset: 0x154
	// Line 275, Address: 0x10270a0, Func Offset: 0x170
	// Line 279, Address: 0x10270b4, Func Offset: 0x184
	// Line 280, Address: 0x10270c8, Func Offset: 0x198
	// Line 281, Address: 0x10270d4, Func Offset: 0x1a4
	// Line 283, Address: 0x10270dc, Func Offset: 0x1ac
	// Line 287, Address: 0x10270e0, Func Offset: 0x1b0
	// Line 288, Address: 0x1027104, Func Offset: 0x1d4
	// Line 290, Address: 0x1027114, Func Offset: 0x1e4
	// Line 292, Address: 0x102711c, Func Offset: 0x1ec
	// Line 293, Address: 0x1027130, Func Offset: 0x200
	// Line 294, Address: 0x102713c, Func Offset: 0x20c
	// Line 296, Address: 0x1027144, Func Offset: 0x214
	// Line 299, Address: 0x1027148, Func Offset: 0x218
	// Line 300, Address: 0x102716c, Func Offset: 0x23c
	// Line 303, Address: 0x102717c, Func Offset: 0x24c
	// Line 305, Address: 0x1027184, Func Offset: 0x254
	// Line 307, Address: 0x1027194, Func Offset: 0x264
	// Line 308, Address: 0x1027198, Func Offset: 0x268
	// Line 309, Address: 0x10271b0, Func Offset: 0x280
	// Line 310, Address: 0x10271c8, Func Offset: 0x298
	// Line 311, Address: 0x10271e0, Func Offset: 0x2b0
	// Line 314, Address: 0x10271f8, Func Offset: 0x2c8
	// Func End, Address: 0x1027218, Func Offset: 0x2e8
}

// 
// Start address: 0x1027220
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 326, Address: 0x1027220, Func Offset: 0
	// Line 331, Address: 0x1027234, Func Offset: 0x14
	// Line 332, Address: 0x102723c, Func Offset: 0x1c
	// Line 333, Address: 0x1027264, Func Offset: 0x44
	// Line 334, Address: 0x1027280, Func Offset: 0x60
	// Line 335, Address: 0x10272b4, Func Offset: 0x94
	// Line 336, Address: 0x10272c8, Func Offset: 0xa8
	// Line 340, Address: 0x10272cc, Func Offset: 0xac
	// Line 341, Address: 0x10272d8, Func Offset: 0xb8
	// Line 342, Address: 0x10272e0, Func Offset: 0xc0
	// Line 343, Address: 0x10272ec, Func Offset: 0xcc
	// Line 345, Address: 0x10272f8, Func Offset: 0xd8
	// Line 346, Address: 0x1027330, Func Offset: 0x110
	// Line 347, Address: 0x1027370, Func Offset: 0x150
	// Line 350, Address: 0x10273b0, Func Offset: 0x190
	// Line 351, Address: 0x10273bc, Func Offset: 0x19c
	// Line 352, Address: 0x10273d0, Func Offset: 0x1b0
	// Line 354, Address: 0x10273e0, Func Offset: 0x1c0
	// Func End, Address: 0x10273f4, Func Offset: 0x1d4
}

// 
// Start address: 0x1027400
void scroll()
{
	int LineSpdTbl[15];
	unsigned char z31d_cnttbl[15];
	unsigned char z31d_cnttbl1[3];
	unsigned short z31d_kawatbl[3];
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
	// Line 367, Address: 0x1027400, Func Offset: 0
	// Line 368, Address: 0x1027420, Func Offset: 0x20
	// Line 375, Address: 0x1027450, Func Offset: 0x50
	// Line 378, Address: 0x102747c, Func Offset: 0x7c
	// Line 381, Address: 0x10274a0, Func Offset: 0xa0
	// Line 391, Address: 0x10274c4, Func Offset: 0xc4
	// Line 394, Address: 0x10274d4, Func Offset: 0xd4
	// Line 395, Address: 0x1027500, Func Offset: 0x100
	// Line 396, Address: 0x102750c, Func Offset: 0x10c
	// Line 397, Address: 0x1027518, Func Offset: 0x118
	// Line 399, Address: 0x1027524, Func Offset: 0x124
	// Line 400, Address: 0x1027534, Func Offset: 0x134
	// Line 403, Address: 0x1027544, Func Offset: 0x144
	// Line 404, Address: 0x1027568, Func Offset: 0x168
	// Line 405, Address: 0x10275a0, Func Offset: 0x1a0
	// Line 407, Address: 0x10275d8, Func Offset: 0x1d8
	// Line 408, Address: 0x10275e0, Func Offset: 0x1e0
	// Line 409, Address: 0x10275ec, Func Offset: 0x1ec
	// Line 411, Address: 0x102760c, Func Offset: 0x20c
	// Line 412, Address: 0x1027620, Func Offset: 0x220
	// Line 413, Address: 0x1027628, Func Offset: 0x228
	// Line 414, Address: 0x102763c, Func Offset: 0x23c
	// Line 415, Address: 0x1027650, Func Offset: 0x250
	// Line 417, Address: 0x1027654, Func Offset: 0x254
	// Line 419, Address: 0x102765c, Func Offset: 0x25c
	// Line 422, Address: 0x1027674, Func Offset: 0x274
	// Line 423, Address: 0x1027688, Func Offset: 0x288
	// Line 424, Address: 0x1027698, Func Offset: 0x298
	// Line 425, Address: 0x10276a8, Func Offset: 0x2a8
	// Line 427, Address: 0x10276b8, Func Offset: 0x2b8
	// Line 428, Address: 0x10276d4, Func Offset: 0x2d4
	// Line 429, Address: 0x10276f0, Func Offset: 0x2f0
	// Line 430, Address: 0x10276f8, Func Offset: 0x2f8
	// Line 453, Address: 0x1027700, Func Offset: 0x300
	// Line 454, Address: 0x1027708, Func Offset: 0x308
	// Line 455, Address: 0x1027714, Func Offset: 0x314
	// Line 456, Address: 0x102772c, Func Offset: 0x32c
	// Line 457, Address: 0x1027730, Func Offset: 0x330
	// Line 458, Address: 0x1027740, Func Offset: 0x340
	// Line 459, Address: 0x1027744, Func Offset: 0x344
	// Line 460, Address: 0x102774c, Func Offset: 0x34c
	// Line 461, Address: 0x1027770, Func Offset: 0x370
	// Line 462, Address: 0x1027780, Func Offset: 0x380
	// Line 463, Address: 0x1027784, Func Offset: 0x384
	// Line 464, Address: 0x1027790, Func Offset: 0x390
	// Line 471, Address: 0x10277a0, Func Offset: 0x3a0
	// Line 472, Address: 0x10277ac, Func Offset: 0x3ac
	// Line 473, Address: 0x10277cc, Func Offset: 0x3cc
	// Line 474, Address: 0x10277f0, Func Offset: 0x3f0
	// Line 477, Address: 0x1027804, Func Offset: 0x404
	// Line 478, Address: 0x1027810, Func Offset: 0x410
	// Line 479, Address: 0x1027824, Func Offset: 0x424
	// Line 481, Address: 0x1027834, Func Offset: 0x434
	// Line 483, Address: 0x1027858, Func Offset: 0x458
	// Line 484, Address: 0x1027864, Func Offset: 0x464
	// Line 485, Address: 0x1027878, Func Offset: 0x478
	// Line 500, Address: 0x1027888, Func Offset: 0x488
	// Line 501, Address: 0x1027890, Func Offset: 0x490
	// Line 502, Address: 0x102789c, Func Offset: 0x49c
	// Line 503, Address: 0x10278c8, Func Offset: 0x4c8
	// Line 504, Address: 0x10278cc, Func Offset: 0x4cc
	// Line 505, Address: 0x10278e0, Func Offset: 0x4e0
	// Line 506, Address: 0x10278f0, Func Offset: 0x4f0
	// Line 507, Address: 0x10278fc, Func Offset: 0x4fc
	// Line 511, Address: 0x1027908, Func Offset: 0x508
	// Line 513, Address: 0x102792c, Func Offset: 0x52c
	// Line 514, Address: 0x1027938, Func Offset: 0x538
	// Line 515, Address: 0x102794c, Func Offset: 0x54c
	// Line 517, Address: 0x102795c, Func Offset: 0x55c
	// Line 519, Address: 0x1027980, Func Offset: 0x580
	// Line 520, Address: 0x102798c, Func Offset: 0x58c
	// Line 521, Address: 0x10279a0, Func Offset: 0x5a0
	// Line 523, Address: 0x10279b0, Func Offset: 0x5b0
	// Line 525, Address: 0x10279d4, Func Offset: 0x5d4
	// Line 526, Address: 0x10279e0, Func Offset: 0x5e0
	// Line 527, Address: 0x10279f4, Func Offset: 0x5f4
	// Line 530, Address: 0x1027a04, Func Offset: 0x604
	// Line 531, Address: 0x1027a3c, Func Offset: 0x63c
	// Line 532, Address: 0x1027a48, Func Offset: 0x648
	// Line 533, Address: 0x1027a68, Func Offset: 0x668
	// Line 534, Address: 0x1027a74, Func Offset: 0x674
	// Line 536, Address: 0x1027a80, Func Offset: 0x680
	// Line 537, Address: 0x1027a8c, Func Offset: 0x68c
	// Line 538, Address: 0x1027aa8, Func Offset: 0x6a8
	// Line 539, Address: 0x1027abc, Func Offset: 0x6bc
	// Line 540, Address: 0x1027ad0, Func Offset: 0x6d0
	// Line 541, Address: 0x1027adc, Func Offset: 0x6dc
	// Line 542, Address: 0x1027b00, Func Offset: 0x700
	// Line 543, Address: 0x1027b10, Func Offset: 0x710
	// Line 544, Address: 0x1027b34, Func Offset: 0x734
	// Line 546, Address: 0x1027b40, Func Offset: 0x740
	// Line 548, Address: 0x1027b64, Func Offset: 0x764
	// Line 549, Address: 0x1027b70, Func Offset: 0x770
	// Line 550, Address: 0x1027b84, Func Offset: 0x784
	// Line 552, Address: 0x1027b94, Func Offset: 0x794
	// Line 553, Address: 0x1027ba0, Func Offset: 0x7a0
	// Line 554, Address: 0x1027bac, Func Offset: 0x7ac
	// Line 555, Address: 0x1027bb8, Func Offset: 0x7b8
	// Line 556, Address: 0x1027bc0, Func Offset: 0x7c0
	// Line 557, Address: 0x1027bc8, Func Offset: 0x7c8
	// Line 558, Address: 0x1027bec, Func Offset: 0x7ec
	// Line 559, Address: 0x1027c04, Func Offset: 0x804
	// Line 560, Address: 0x1027c10, Func Offset: 0x810
	// Line 561, Address: 0x1027c18, Func Offset: 0x818
	// Line 563, Address: 0x1027c2c, Func Offset: 0x82c
	// Line 564, Address: 0x1027c34, Func Offset: 0x834
	// Line 565, Address: 0x1027c44, Func Offset: 0x844
	// Line 568, Address: 0x1027c50, Func Offset: 0x850
	// Line 569, Address: 0x1027c58, Func Offset: 0x858
	// Line 570, Address: 0x1027c7c, Func Offset: 0x87c
	// Line 572, Address: 0x1027c90, Func Offset: 0x890
	// Line 575, Address: 0x1027cb8, Func Offset: 0x8b8
	// Line 577, Address: 0x1027cc0, Func Offset: 0x8c0
	// Line 582, Address: 0x1027cc8, Func Offset: 0x8c8
	// Line 583, Address: 0x1027cdc, Func Offset: 0x8dc
	// Line 584, Address: 0x1027ce8, Func Offset: 0x8e8
	// Line 585, Address: 0x1027cfc, Func Offset: 0x8fc
	// Line 588, Address: 0x1027d14, Func Offset: 0x914
	// Line 589, Address: 0x1027d28, Func Offset: 0x928
	// Line 590, Address: 0x1027d3c, Func Offset: 0x93c
	// Line 591, Address: 0x1027d50, Func Offset: 0x950
	// Line 592, Address: 0x1027d70, Func Offset: 0x970
	// Line 593, Address: 0x1027d78, Func Offset: 0x978
	// Line 594, Address: 0x1027d98, Func Offset: 0x998
	// Line 595, Address: 0x1027db0, Func Offset: 0x9b0
	// Line 596, Address: 0x1027db8, Func Offset: 0x9b8
	// Line 597, Address: 0x1027de4, Func Offset: 0x9e4
	// Line 598, Address: 0x1027df8, Func Offset: 0x9f8
	// Line 599, Address: 0x1027e14, Func Offset: 0xa14
	// Line 602, Address: 0x1027e18, Func Offset: 0xa18
	// Line 603, Address: 0x1027e24, Func Offset: 0xa24
	// Line 604, Address: 0x1027e30, Func Offset: 0xa30
	// Line 605, Address: 0x1027e3c, Func Offset: 0xa3c
	// Line 606, Address: 0x1027e44, Func Offset: 0xa44
	// Line 608, Address: 0x1027e68, Func Offset: 0xa68
	// Func End, Address: 0x1027e90, Func Offset: 0xa90
}

// 
// Start address: 0x1027e90
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 613, Address: 0x1027e90, Func Offset: 0
	// Line 620, Address: 0x1027ec4, Func Offset: 0x34
	// Line 621, Address: 0x1027ee4, Func Offset: 0x54
	// Line 622, Address: 0x1027eec, Func Offset: 0x5c
	// Line 624, Address: 0x1027ef4, Func Offset: 0x64
	// Line 629, Address: 0x1027f18, Func Offset: 0x88
	// Line 630, Address: 0x1027f2c, Func Offset: 0x9c
	// Line 632, Address: 0x1027f58, Func Offset: 0xc8
	// Line 633, Address: 0x1027f68, Func Offset: 0xd8
	// Line 634, Address: 0x1027f7c, Func Offset: 0xec
	// Line 637, Address: 0x1027f84, Func Offset: 0xf4
	// Line 640, Address: 0x1027fa0, Func Offset: 0x110
	// Line 645, Address: 0x1027fc4, Func Offset: 0x134
	// Line 646, Address: 0x1027fd4, Func Offset: 0x144
	// Line 649, Address: 0x1027fe8, Func Offset: 0x158
	// Line 651, Address: 0x1027fec, Func Offset: 0x15c
	// Line 654, Address: 0x1027ff4, Func Offset: 0x164
	// Line 655, Address: 0x1027ffc, Func Offset: 0x16c
	// Line 656, Address: 0x1028000, Func Offset: 0x170
	// Line 657, Address: 0x1028010, Func Offset: 0x180
	// Line 662, Address: 0x1028038, Func Offset: 0x1a8
	// Line 663, Address: 0x1028040, Func Offset: 0x1b0
	// Line 664, Address: 0x1028048, Func Offset: 0x1b8
	// Line 668, Address: 0x1028050, Func Offset: 0x1c0
	// Line 669, Address: 0x1028080, Func Offset: 0x1f0
	// Line 672, Address: 0x1028098, Func Offset: 0x208
	// Line 675, Address: 0x10280bc, Func Offset: 0x22c
	// Line 676, Address: 0x10280ec, Func Offset: 0x25c
	// Line 677, Address: 0x1028104, Func Offset: 0x274
	// Line 685, Address: 0x102810c, Func Offset: 0x27c
	// Line 686, Address: 0x102813c, Func Offset: 0x2ac
	// Line 691, Address: 0x1028154, Func Offset: 0x2c4
	// Line 692, Address: 0x102815c, Func Offset: 0x2cc
	// Line 693, Address: 0x1028160, Func Offset: 0x2d0
	// Line 696, Address: 0x1028178, Func Offset: 0x2e8
	// Line 697, Address: 0x102818c, Func Offset: 0x2fc
	// Line 698, Address: 0x10281b8, Func Offset: 0x328
	// Line 699, Address: 0x10281cc, Func Offset: 0x33c
	// Line 700, Address: 0x10281e8, Func Offset: 0x358
	// Line 701, Address: 0x10281f0, Func Offset: 0x360
	// Line 702, Address: 0x10281f8, Func Offset: 0x368
	// Line 703, Address: 0x10281fc, Func Offset: 0x36c
	// Line 704, Address: 0x1028210, Func Offset: 0x380
	// Line 705, Address: 0x1028224, Func Offset: 0x394
	// Line 707, Address: 0x1028248, Func Offset: 0x3b8
	// Line 710, Address: 0x1028250, Func Offset: 0x3c0
	// Line 711, Address: 0x1028260, Func Offset: 0x3d0
	// Line 712, Address: 0x102826c, Func Offset: 0x3dc
	// Line 713, Address: 0x1028290, Func Offset: 0x400
	// Line 714, Address: 0x1028298, Func Offset: 0x408
	// Func End, Address: 0x10282b8, Func Offset: 0x428
}

// 
// Start address: 0x10282c0
void scroll_h()
{
	unsigned short wD4;
	// Line 730, Address: 0x10282c0, Func Offset: 0
	// Line 733, Address: 0x10282cc, Func Offset: 0xc
	// Line 734, Address: 0x10282d8, Func Offset: 0x18
	// Line 735, Address: 0x10282e0, Func Offset: 0x20
	// Line 736, Address: 0x1028314, Func Offset: 0x54
	// Line 737, Address: 0x1028328, Func Offset: 0x68
	// Line 738, Address: 0x1028354, Func Offset: 0x94
	// Line 739, Address: 0x1028368, Func Offset: 0xa8
	// Line 742, Address: 0x1028370, Func Offset: 0xb0
	// Line 747, Address: 0x1028384, Func Offset: 0xc4
	// Func End, Address: 0x1028398, Func Offset: 0xd8
}

// 
// Start address: 0x10283a0
void scrh_move()
{
	unsigned short wD0;
	// Line 749, Address: 0x10283a0, Func Offset: 0
	// Line 752, Address: 0x10283ac, Func Offset: 0xc
	// Line 753, Address: 0x10283b8, Func Offset: 0x18
	// Line 754, Address: 0x10283cc, Func Offset: 0x2c
	// Line 755, Address: 0x10283e0, Func Offset: 0x40
	// Line 757, Address: 0x10283ec, Func Offset: 0x4c
	// Line 758, Address: 0x10283f4, Func Offset: 0x54
	// Line 759, Address: 0x10283fc, Func Offset: 0x5c
	// Line 760, Address: 0x1028414, Func Offset: 0x74
	// Line 761, Address: 0x1028420, Func Offset: 0x80
	// Line 763, Address: 0x1028428, Func Offset: 0x88
	// Line 766, Address: 0x1028434, Func Offset: 0x94
	// Func End, Address: 0x1028448, Func Offset: 0xa8
}

// 
// Start address: 0x1028450
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 769, Address: 0x1028450, Func Offset: 0
	// Line 772, Address: 0x102845c, Func Offset: 0xc
	// Line 773, Address: 0x102847c, Func Offset: 0x2c
	// Line 776, Address: 0x1028484, Func Offset: 0x34
	// Line 777, Address: 0x102849c, Func Offset: 0x4c
	// Line 778, Address: 0x10284cc, Func Offset: 0x7c
	// Line 781, Address: 0x10284d8, Func Offset: 0x88
	// Line 782, Address: 0x10284e0, Func Offset: 0x90
	// Line 783, Address: 0x10284f4, Func Offset: 0xa4
	// Line 784, Address: 0x1028524, Func Offset: 0xd4
	// Line 785, Address: 0x1028530, Func Offset: 0xe0
	// Line 787, Address: 0x1028538, Func Offset: 0xe8
	// Func End, Address: 0x1028548, Func Offset: 0xf8
}

// 
// Start address: 0x1028550
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 790, Address: 0x1028550, Func Offset: 0
	// Line 793, Address: 0x102855c, Func Offset: 0xc
	// Line 794, Address: 0x102857c, Func Offset: 0x2c
	// Line 797, Address: 0x1028584, Func Offset: 0x34
	// Line 798, Address: 0x102859c, Func Offset: 0x4c
	// Line 799, Address: 0x10285cc, Func Offset: 0x7c
	// Line 802, Address: 0x10285d8, Func Offset: 0x88
	// Line 803, Address: 0x10285e0, Func Offset: 0x90
	// Line 804, Address: 0x10285f4, Func Offset: 0xa4
	// Line 805, Address: 0x1028624, Func Offset: 0xd4
	// Line 806, Address: 0x1028630, Func Offset: 0xe0
	// Line 808, Address: 0x1028638, Func Offset: 0xe8
	// Func End, Address: 0x1028648, Func Offset: 0xf8
}

// 
// Start address: 0x1028650
void scroll_v()
{
	unsigned short wD0;
	// Line 827, Address: 0x1028650, Func Offset: 0
	// Line 830, Address: 0x102865c, Func Offset: 0xc
	// Line 831, Address: 0x1028688, Func Offset: 0x38
	// Line 832, Address: 0x10286a0, Func Offset: 0x50
	// Line 835, Address: 0x10286a8, Func Offset: 0x58
	// Line 836, Address: 0x10286c0, Func Offset: 0x70
	// Line 837, Address: 0x10286c8, Func Offset: 0x78
	// Line 838, Address: 0x10286e8, Func Offset: 0x98
	// Line 839, Address: 0x10286fc, Func Offset: 0xac
	// Line 840, Address: 0x1028708, Func Offset: 0xb8
	// Line 842, Address: 0x1028710, Func Offset: 0xc0
	// Line 843, Address: 0x1028724, Func Offset: 0xd4
	// Line 844, Address: 0x1028734, Func Offset: 0xe4
	// Line 845, Address: 0x102873c, Func Offset: 0xec
	// Line 846, Address: 0x1028748, Func Offset: 0xf8
	// Line 848, Address: 0x1028750, Func Offset: 0x100
	// Line 849, Address: 0x1028758, Func Offset: 0x108
	// Line 850, Address: 0x102876c, Func Offset: 0x11c
	// Line 851, Address: 0x1028774, Func Offset: 0x124
	// Line 857, Address: 0x102877c, Func Offset: 0x12c
	// Line 858, Address: 0x1028790, Func Offset: 0x140
	// Line 859, Address: 0x1028798, Func Offset: 0x148
	// Line 860, Address: 0x10287a4, Func Offset: 0x154
	// Line 862, Address: 0x10287ac, Func Offset: 0x15c
	// Line 863, Address: 0x10287c0, Func Offset: 0x170
	// Line 864, Address: 0x10287c8, Func Offset: 0x178
	// Line 869, Address: 0x10287d0, Func Offset: 0x180
	// Line 871, Address: 0x10287d8, Func Offset: 0x188
	// Func End, Address: 0x10287ec, Func Offset: 0x19c
}

// 
// Start address: 0x10287f0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 877, Address: 0x10287f0, Func Offset: 0
	// Line 880, Address: 0x1028800, Func Offset: 0x10
	// Line 881, Address: 0x102881c, Func Offset: 0x2c
	// Line 882, Address: 0x1028828, Func Offset: 0x38
	// Line 885, Address: 0x1028830, Func Offset: 0x40
	// Line 886, Address: 0x102883c, Func Offset: 0x4c
	// Line 887, Address: 0x1028854, Func Offset: 0x64
	// Line 890, Address: 0x1028870, Func Offset: 0x80
	// Line 891, Address: 0x1028880, Func Offset: 0x90
	// Line 892, Address: 0x102888c, Func Offset: 0x9c
	// Line 894, Address: 0x1028894, Func Offset: 0xa4
	// Line 895, Address: 0x10288b4, Func Offset: 0xc4
	// Line 896, Address: 0x10288c0, Func Offset: 0xd0
	// Line 897, Address: 0x10288c8, Func Offset: 0xd8
	// Line 898, Address: 0x10288e8, Func Offset: 0xf8
	// Line 899, Address: 0x10288f4, Func Offset: 0x104
	// Line 901, Address: 0x10288fc, Func Offset: 0x10c
	// Line 905, Address: 0x1028908, Func Offset: 0x118
	// Func End, Address: 0x102891c, Func Offset: 0x12c
}

// 
// Start address: 0x1028920
void sv_move_main1(unsigned short wD0)
{
	// Line 909, Address: 0x1028920, Func Offset: 0
	// Line 911, Address: 0x102892c, Func Offset: 0xc
	// Line 912, Address: 0x102894c, Func Offset: 0x2c
	// Line 913, Address: 0x1028958, Func Offset: 0x38
	// Line 914, Address: 0x1028960, Func Offset: 0x40
	// Line 915, Address: 0x1028980, Func Offset: 0x60
	// Line 916, Address: 0x102898c, Func Offset: 0x6c
	// Line 918, Address: 0x1028994, Func Offset: 0x74
	// Line 921, Address: 0x10289a0, Func Offset: 0x80
	// Func End, Address: 0x10289b0, Func Offset: 0x90
}

// 
// Start address: 0x10289b0
void sv_move_main2(unsigned short wD0)
{
	// Line 924, Address: 0x10289b0, Func Offset: 0
	// Line 926, Address: 0x10289bc, Func Offset: 0xc
	// Line 927, Address: 0x10289dc, Func Offset: 0x2c
	// Line 928, Address: 0x10289e8, Func Offset: 0x38
	// Line 929, Address: 0x10289f0, Func Offset: 0x40
	// Line 930, Address: 0x1028a10, Func Offset: 0x60
	// Line 931, Address: 0x1028a1c, Func Offset: 0x6c
	// Line 933, Address: 0x1028a24, Func Offset: 0x74
	// Line 936, Address: 0x1028a30, Func Offset: 0x80
	// Func End, Address: 0x1028a40, Func Offset: 0x90
}

// 
// Start address: 0x1028a40
void sv_move_sub2()
{
	// Line 939, Address: 0x1028a40, Func Offset: 0
	// Line 940, Address: 0x1028a48, Func Offset: 0x8
	// Line 941, Address: 0x1028a50, Func Offset: 0x10
	// Line 942, Address: 0x1028a5c, Func Offset: 0x1c
	// Func End, Address: 0x1028a6c, Func Offset: 0x2c
}

// 
// Start address: 0x1028a70
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 945, Address: 0x1028a70, Func Offset: 0
	// Line 948, Address: 0x1028a7c, Func Offset: 0xc
	// Line 949, Address: 0x1028a80, Func Offset: 0x10
	// Line 950, Address: 0x1028a88, Func Offset: 0x18
	// Line 951, Address: 0x1028aa4, Func Offset: 0x34
	// Line 952, Address: 0x1028ac0, Func Offset: 0x50
	// Line 953, Address: 0x1028acc, Func Offset: 0x5c
	// Line 955, Address: 0x1028ad4, Func Offset: 0x64
	// Line 958, Address: 0x1028ae0, Func Offset: 0x70
	// Func End, Address: 0x1028af0, Func Offset: 0x80
}

// 
// Start address: 0x1028af0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 963, Address: 0x1028af0, Func Offset: 0
	// Line 967, Address: 0x1028b00, Func Offset: 0x10
	// Line 968, Address: 0x1028b1c, Func Offset: 0x2c
	// Line 969, Address: 0x1028b28, Func Offset: 0x38
	// Line 971, Address: 0x1028b3c, Func Offset: 0x4c
	// Line 972, Address: 0x1028b44, Func Offset: 0x54
	// Line 973, Address: 0x1028b4c, Func Offset: 0x5c
	// Line 974, Address: 0x1028b50, Func Offset: 0x60
	// Line 975, Address: 0x1028b5c, Func Offset: 0x6c
	// Func End, Address: 0x1028b70, Func Offset: 0x80
}

// 
// Start address: 0x1028b70
void scrv_up_ch(_anon2 lD1)
{
	// Line 979, Address: 0x1028b70, Func Offset: 0
	// Line 980, Address: 0x1028b7c, Func Offset: 0xc
	// Line 981, Address: 0x1028ba4, Func Offset: 0x34
	// Line 982, Address: 0x1028bbc, Func Offset: 0x4c
	// Line 983, Address: 0x1028bc8, Func Offset: 0x58
	// Line 984, Address: 0x1028bdc, Func Offset: 0x6c
	// Line 985, Address: 0x1028bf0, Func Offset: 0x80
	// Line 986, Address: 0x1028c04, Func Offset: 0x94
	// Line 989, Address: 0x1028c0c, Func Offset: 0x9c
	// Line 992, Address: 0x1028c18, Func Offset: 0xa8
	// Line 994, Address: 0x1028c24, Func Offset: 0xb4
	// Func End, Address: 0x1028c34, Func Offset: 0xc4
}

// 
// Start address: 0x1028c40
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 1000, Address: 0x1028c40, Func Offset: 0
	// Line 1004, Address: 0x1028c50, Func Offset: 0x10
	// Line 1005, Address: 0x1028c54, Func Offset: 0x14
	// Line 1006, Address: 0x1028c5c, Func Offset: 0x1c
	// Line 1007, Address: 0x1028c68, Func Offset: 0x28
	// Line 1009, Address: 0x1028c7c, Func Offset: 0x3c
	// Line 1010, Address: 0x1028c84, Func Offset: 0x44
	// Line 1011, Address: 0x1028c8c, Func Offset: 0x4c
	// Line 1013, Address: 0x1028c90, Func Offset: 0x50
	// Line 1015, Address: 0x1028c9c, Func Offset: 0x5c
	// Func End, Address: 0x1028cb0, Func Offset: 0x70
}

// 
// Start address: 0x1028cb0
void scrv_down_ch(_anon2 lD1)
{
	// Line 1019, Address: 0x1028cb0, Func Offset: 0
	// Line 1020, Address: 0x1028cbc, Func Offset: 0xc
	// Line 1021, Address: 0x1028ce4, Func Offset: 0x34
	// Line 1022, Address: 0x1028cf0, Func Offset: 0x40
	// Line 1023, Address: 0x1028d04, Func Offset: 0x54
	// Line 1024, Address: 0x1028d18, Func Offset: 0x68
	// Line 1025, Address: 0x1028d2c, Func Offset: 0x7c
	// Line 1026, Address: 0x1028d40, Func Offset: 0x90
	// Line 1028, Address: 0x1028d48, Func Offset: 0x98
	// Line 1031, Address: 0x1028d54, Func Offset: 0xa4
	// Line 1033, Address: 0x1028d60, Func Offset: 0xb0
	// Func End, Address: 0x1028d70, Func Offset: 0xc0
}

// 
// Start address: 0x1028d70
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1036, Address: 0x1028d70, Func Offset: 0
	// Line 1039, Address: 0x1028d80, Func Offset: 0x10
	// Line 1041, Address: 0x1028d8c, Func Offset: 0x1c
	// Line 1042, Address: 0x1028d94, Func Offset: 0x24
	// Line 1043, Address: 0x1028d9c, Func Offset: 0x2c
	// Line 1045, Address: 0x1028da0, Func Offset: 0x30
	// Line 1046, Address: 0x1028dc8, Func Offset: 0x58
	// Line 1049, Address: 0x1028dd4, Func Offset: 0x64
	// Line 1050, Address: 0x1028e08, Func Offset: 0x98
	// Line 1051, Address: 0x1028e1c, Func Offset: 0xac
	// Line 1053, Address: 0x1028e48, Func Offset: 0xd8
	// Line 1054, Address: 0x1028e5c, Func Offset: 0xec
	// Line 1056, Address: 0x1028e64, Func Offset: 0xf4
	// Line 1061, Address: 0x1028e78, Func Offset: 0x108
	// Func End, Address: 0x1028e8c, Func Offset: 0x11c
}

// 
// Start address: 0x1028e90
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1065, Address: 0x1028e90, Func Offset: 0
	// Line 1068, Address: 0x1028e9c, Func Offset: 0xc
	// Line 1069, Address: 0x1028eac, Func Offset: 0x1c
	// Line 1070, Address: 0x1028ebc, Func Offset: 0x2c
	// Line 1072, Address: 0x1028ec8, Func Offset: 0x38
	// Line 1074, Address: 0x1028efc, Func Offset: 0x6c
	// Line 1075, Address: 0x1028f10, Func Offset: 0x80
	// Line 1076, Address: 0x1028f20, Func Offset: 0x90
	// Line 1077, Address: 0x1028f34, Func Offset: 0xa4
	// Line 1078, Address: 0x1028f48, Func Offset: 0xb8
	// Line 1081, Address: 0x1028f50, Func Offset: 0xc0
	// Line 1086, Address: 0x1028f64, Func Offset: 0xd4
	// Line 1087, Address: 0x1028f74, Func Offset: 0xe4
	// Line 1088, Address: 0x1028f84, Func Offset: 0xf4
	// Line 1090, Address: 0x1028f90, Func Offset: 0x100
	// Line 1092, Address: 0x1028fc4, Func Offset: 0x134
	// Line 1093, Address: 0x1028fd8, Func Offset: 0x148
	// Line 1094, Address: 0x1028fe8, Func Offset: 0x158
	// Line 1095, Address: 0x1028ffc, Func Offset: 0x16c
	// Line 1096, Address: 0x1029010, Func Offset: 0x180
	// Line 1099, Address: 0x1029018, Func Offset: 0x188
	// Line 1104, Address: 0x102902c, Func Offset: 0x19c
	// Func End, Address: 0x1029038, Func Offset: 0x1a8
}

// 
// Start address: 0x1029040
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1111, Address: 0x1029040, Func Offset: 0
	// Line 1114, Address: 0x102904c, Func Offset: 0xc
	// Line 1115, Address: 0x1029058, Func Offset: 0x18
	// Line 1117, Address: 0x1029064, Func Offset: 0x24
	// Line 1118, Address: 0x1029090, Func Offset: 0x50
	// Line 1119, Address: 0x10290a4, Func Offset: 0x64
	// Line 1120, Address: 0x10290d4, Func Offset: 0x94
	// Line 1121, Address: 0x10290e8, Func Offset: 0xa8
	// Line 1124, Address: 0x10290f0, Func Offset: 0xb0
	// Line 1129, Address: 0x1029104, Func Offset: 0xc4
	// Func End, Address: 0x1029114, Func Offset: 0xd4
}

// 
// Start address: 0x1029120
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1133, Address: 0x1029120, Func Offset: 0
	// Line 1137, Address: 0x1029130, Func Offset: 0x10
	// Line 1138, Address: 0x102913c, Func Offset: 0x1c
	// Line 1139, Address: 0x102914c, Func Offset: 0x2c
	// Line 1141, Address: 0x1029158, Func Offset: 0x38
	// Line 1142, Address: 0x1029160, Func Offset: 0x40
	// Line 1143, Address: 0x1029168, Func Offset: 0x48
	// Line 1145, Address: 0x1029174, Func Offset: 0x54
	// Line 1146, Address: 0x1029180, Func Offset: 0x60
	// Line 1147, Address: 0x1029194, Func Offset: 0x74
	// Line 1148, Address: 0x10291a0, Func Offset: 0x80
	// Line 1149, Address: 0x10291b4, Func Offset: 0x94
	// Line 1150, Address: 0x10291c4, Func Offset: 0xa4
	// Line 1151, Address: 0x10291d8, Func Offset: 0xb8
	// Line 1152, Address: 0x10291f4, Func Offset: 0xd4
	// Line 1155, Address: 0x10291fc, Func Offset: 0xdc
	// Line 1160, Address: 0x102921c, Func Offset: 0xfc
	// Func End, Address: 0x102922c, Func Offset: 0x10c
}

// 
// Start address: 0x1029230
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1164, Address: 0x1029230, Func Offset: 0
	// Line 1168, Address: 0x1029240, Func Offset: 0x10
	// Line 1169, Address: 0x102924c, Func Offset: 0x1c
	// Line 1170, Address: 0x102925c, Func Offset: 0x2c
	// Line 1172, Address: 0x1029268, Func Offset: 0x38
	// Line 1173, Address: 0x1029270, Func Offset: 0x40
	// Line 1174, Address: 0x1029278, Func Offset: 0x48
	// Line 1176, Address: 0x1029284, Func Offset: 0x54
	// Line 1177, Address: 0x1029290, Func Offset: 0x60
	// Line 1178, Address: 0x10292a4, Func Offset: 0x74
	// Line 1179, Address: 0x10292b0, Func Offset: 0x80
	// Line 1180, Address: 0x10292c4, Func Offset: 0x94
	// Line 1181, Address: 0x10292d4, Func Offset: 0xa4
	// Line 1182, Address: 0x10292e8, Func Offset: 0xb8
	// Line 1183, Address: 0x1029304, Func Offset: 0xd4
	// Line 1186, Address: 0x102930c, Func Offset: 0xdc
	// Line 1191, Address: 0x102932c, Func Offset: 0xfc
	// Func End, Address: 0x102933c, Func Offset: 0x10c
}

// 
// Start address: 0x1029340
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1203, Address: 0x1029340, Func Offset: 0
	// Line 1207, Address: 0x1029350, Func Offset: 0x10
	// Line 1208, Address: 0x102935c, Func Offset: 0x1c
	// Line 1209, Address: 0x102936c, Func Offset: 0x2c
	// Line 1211, Address: 0x1029378, Func Offset: 0x38
	// Line 1212, Address: 0x1029380, Func Offset: 0x40
	// Line 1213, Address: 0x1029388, Func Offset: 0x48
	// Line 1215, Address: 0x1029394, Func Offset: 0x54
	// Line 1216, Address: 0x10293a0, Func Offset: 0x60
	// Line 1217, Address: 0x10293b4, Func Offset: 0x74
	// Line 1218, Address: 0x10293c0, Func Offset: 0x80
	// Line 1219, Address: 0x10293d4, Func Offset: 0x94
	// Line 1220, Address: 0x10293e4, Func Offset: 0xa4
	// Line 1221, Address: 0x10293f8, Func Offset: 0xb8
	// Line 1222, Address: 0x1029414, Func Offset: 0xd4
	// Line 1225, Address: 0x102941c, Func Offset: 0xdc
	// Line 1230, Address: 0x102943c, Func Offset: 0xfc
	// Func End, Address: 0x102944c, Func Offset: 0x10c
}

// 
// Start address: 0x1029450
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1245, Address: 0x1029450, Func Offset: 0
	// Line 1251, Address: 0x102946c, Func Offset: 0x1c
	// Line 1252, Address: 0x1029470, Func Offset: 0x20
	// Line 1253, Address: 0x102947c, Func Offset: 0x2c
	// Line 1254, Address: 0x1029488, Func Offset: 0x38
	// Line 1255, Address: 0x1029490, Func Offset: 0x40
	// Line 1256, Address: 0x1029498, Func Offset: 0x48
	// Line 1264, Address: 0x10294ac, Func Offset: 0x5c
	// Func End, Address: 0x10294d0, Func Offset: 0x80
}

// 
// Start address: 0x10294d0
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
	// Line 1277, Address: 0x10294d0, Func Offset: 0
	// Line 1286, Address: 0x10294f0, Func Offset: 0x20
	// Line 1287, Address: 0x10294f4, Func Offset: 0x24
	// Line 1288, Address: 0x1029500, Func Offset: 0x30
	// Line 1289, Address: 0x102950c, Func Offset: 0x3c
	// Line 1290, Address: 0x1029514, Func Offset: 0x44
	// Line 1291, Address: 0x102951c, Func Offset: 0x4c
	// Line 1293, Address: 0x1029530, Func Offset: 0x60
	// Line 1294, Address: 0x1029534, Func Offset: 0x64
	// Line 1295, Address: 0x1029540, Func Offset: 0x70
	// Line 1296, Address: 0x102954c, Func Offset: 0x7c
	// Line 1297, Address: 0x1029554, Func Offset: 0x84
	// Line 1299, Address: 0x102955c, Func Offset: 0x8c
	// Line 1300, Address: 0x1029568, Func Offset: 0x98
	// Line 1301, Address: 0x102957c, Func Offset: 0xac
	// Line 1303, Address: 0x1029588, Func Offset: 0xb8
	// Line 1304, Address: 0x1029590, Func Offset: 0xc0
	// Line 1306, Address: 0x1029598, Func Offset: 0xc8
	// Line 1308, Address: 0x10295b8, Func Offset: 0xe8
	// Line 1314, Address: 0x10295e4, Func Offset: 0x114
	// Line 1315, Address: 0x10295f8, Func Offset: 0x128
	// Line 1317, Address: 0x1029604, Func Offset: 0x134
	// Line 1318, Address: 0x102960c, Func Offset: 0x13c
	// Line 1319, Address: 0x1029614, Func Offset: 0x144
	// Line 1321, Address: 0x1029634, Func Offset: 0x164
	// Line 1327, Address: 0x1029660, Func Offset: 0x190
	// Line 1328, Address: 0x1029674, Func Offset: 0x1a4
	// Line 1330, Address: 0x1029680, Func Offset: 0x1b0
	// Line 1331, Address: 0x1029688, Func Offset: 0x1b8
	// Line 1332, Address: 0x1029690, Func Offset: 0x1c0
	// Line 1334, Address: 0x10296b0, Func Offset: 0x1e0
	// Line 1340, Address: 0x10296dc, Func Offset: 0x20c
	// Line 1341, Address: 0x10296f0, Func Offset: 0x220
	// Line 1343, Address: 0x10296fc, Func Offset: 0x22c
	// Line 1344, Address: 0x1029704, Func Offset: 0x234
	// Line 1345, Address: 0x102970c, Func Offset: 0x23c
	// Line 1347, Address: 0x102972c, Func Offset: 0x25c
	// Line 1356, Address: 0x1029758, Func Offset: 0x288
	// Func End, Address: 0x1029780, Func Offset: 0x2b0
}

// 
// Start address: 0x1029780
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
	// Line 1373, Address: 0x1029780, Func Offset: 0
	// Line 1384, Address: 0x10297ac, Func Offset: 0x2c
	// Line 1386, Address: 0x10297b4, Func Offset: 0x34
	// Line 1387, Address: 0x10297cc, Func Offset: 0x4c
	// Line 1388, Address: 0x10297e0, Func Offset: 0x60
	// Line 1390, Address: 0x10297e8, Func Offset: 0x68
	// Line 1392, Address: 0x10297fc, Func Offset: 0x7c
	// Line 1393, Address: 0x1029814, Func Offset: 0x94
	// Line 1394, Address: 0x1029828, Func Offset: 0xa8
	// Line 1395, Address: 0x1029830, Func Offset: 0xb0
	// Line 1397, Address: 0x1029838, Func Offset: 0xb8
	// Line 1398, Address: 0x102984c, Func Offset: 0xcc
	// Line 1403, Address: 0x1029854, Func Offset: 0xd4
	// Line 1404, Address: 0x10298a4, Func Offset: 0x124
	// Line 1405, Address: 0x10298ac, Func Offset: 0x12c
	// Line 1411, Address: 0x10298cc, Func Offset: 0x14c
	// Line 1412, Address: 0x10298ec, Func Offset: 0x16c
	// Line 1413, Address: 0x1029910, Func Offset: 0x190
	// Line 1414, Address: 0x102991c, Func Offset: 0x19c
	// Line 1415, Address: 0x1029924, Func Offset: 0x1a4
	// Line 1417, Address: 0x1029944, Func Offset: 0x1c4
	// Line 1421, Address: 0x1029970, Func Offset: 0x1f0
	// Line 1424, Address: 0x1029978, Func Offset: 0x1f8
	// Line 1425, Address: 0x102997c, Func Offset: 0x1fc
	// Line 1429, Address: 0x102999c, Func Offset: 0x21c
	// Line 1436, Address: 0x10299c8, Func Offset: 0x248
	// Line 1443, Address: 0x10299dc, Func Offset: 0x25c
	// Line 1444, Address: 0x10299e4, Func Offset: 0x264
	// Line 1445, Address: 0x10299ec, Func Offset: 0x26c
	// Line 1446, Address: 0x1029a04, Func Offset: 0x284
	// Line 1447, Address: 0x1029a24, Func Offset: 0x2a4
	// Line 1451, Address: 0x1029a2c, Func Offset: 0x2ac
	// Line 1453, Address: 0x1029a5c, Func Offset: 0x2dc
	// Line 1454, Address: 0x1029a68, Func Offset: 0x2e8
	// Line 1458, Address: 0x1029a78, Func Offset: 0x2f8
	// Line 1459, Address: 0x1029a84, Func Offset: 0x304
	// Line 1460, Address: 0x1029aa4, Func Offset: 0x324
	// Line 1461, Address: 0x1029ad0, Func Offset: 0x350
	// Line 1462, Address: 0x1029af0, Func Offset: 0x370
	// Line 1464, Address: 0x1029b14, Func Offset: 0x394
	// Line 1467, Address: 0x1029b38, Func Offset: 0x3b8
	// Line 1469, Address: 0x1029b58, Func Offset: 0x3d8
	// Line 1471, Address: 0x1029b6c, Func Offset: 0x3ec
	// Line 1472, Address: 0x1029b78, Func Offset: 0x3f8
	// Line 1473, Address: 0x1029b88, Func Offset: 0x408
	// Line 1475, Address: 0x1029b90, Func Offset: 0x410
	// Func End, Address: 0x1029bb8, Func Offset: 0x438
}

// 
// Start address: 0x1029bc0
void scrollwrtc()
{
	// Line 1483, Address: 0x1029bc0, Func Offset: 0
	// Func End, Address: 0x1029bc8, Func Offset: 0x8
}

// 
// Start address: 0x1029bd0
void scrollwrtz()
{
	// Line 1488, Address: 0x1029bd0, Func Offset: 0
	// Func End, Address: 0x1029bd8, Func Offset: 0x8
}

// 
// Start address: 0x1029be0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1509, Address: 0x1029be0, Func Offset: 0
	// Line 1522, Address: 0x1029c08, Func Offset: 0x28
	// Line 1525, Address: 0x1029c28, Func Offset: 0x48
	// Line 1526, Address: 0x1029c3c, Func Offset: 0x5c
	// Line 1527, Address: 0x1029c50, Func Offset: 0x70
	// Line 1528, Address: 0x1029c64, Func Offset: 0x84
	// Line 1530, Address: 0x1029c78, Func Offset: 0x98
	// Line 1531, Address: 0x1029c84, Func Offset: 0xa4
	// Line 1532, Address: 0x1029c98, Func Offset: 0xb8
	// Func End, Address: 0x1029ca8, Func Offset: 0xc8
}

// 
// Start address: 0x1029cb0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1536, Address: 0x1029cb0, Func Offset: 0
	// Line 1540, Address: 0x1029cd8, Func Offset: 0x28
	// Line 1543, Address: 0x1029cf8, Func Offset: 0x48
	// Line 1544, Address: 0x1029d0c, Func Offset: 0x5c
	// Line 1545, Address: 0x1029d20, Func Offset: 0x70
	// Line 1546, Address: 0x1029d34, Func Offset: 0x84
	// Line 1548, Address: 0x1029d48, Func Offset: 0x98
	// Line 1549, Address: 0x1029d54, Func Offset: 0xa4
	// Line 1550, Address: 0x1029d68, Func Offset: 0xb8
	// Func End, Address: 0x1029d78, Func Offset: 0xc8
}

// 
// Start address: 0x1029d80
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1569, Address: 0x1029d80, Func Offset: 0
	// Line 1573, Address: 0x1029da8, Func Offset: 0x28
	// Line 1576, Address: 0x1029dc8, Func Offset: 0x48
	// Line 1577, Address: 0x1029ddc, Func Offset: 0x5c
	// Line 1578, Address: 0x1029dec, Func Offset: 0x6c
	// Line 1579, Address: 0x1029e00, Func Offset: 0x80
	// Line 1581, Address: 0x1029e10, Func Offset: 0x90
	// Line 1582, Address: 0x1029e1c, Func Offset: 0x9c
	// Line 1583, Address: 0x1029e30, Func Offset: 0xb0
	// Func End, Address: 0x1029e40, Func Offset: 0xc0
}

// 
// Start address: 0x1029e40
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
	// Line 1602, Address: 0x1029e40, Func Offset: 0
	// Line 1608, Address: 0x1029e74, Func Offset: 0x34
	// Line 1610, Address: 0x1029e84, Func Offset: 0x44
	// Line 1611, Address: 0x1029e88, Func Offset: 0x48
	// Line 1612, Address: 0x1029e90, Func Offset: 0x50
	// Line 1614, Address: 0x1029ea0, Func Offset: 0x60
	// Line 1616, Address: 0x1029ea4, Func Offset: 0x64
	// Line 1617, Address: 0x1029eac, Func Offset: 0x6c
	// Line 1620, Address: 0x1029eb4, Func Offset: 0x74
	// Line 1621, Address: 0x1029ebc, Func Offset: 0x7c
	// Line 1622, Address: 0x1029ec8, Func Offset: 0x88
	// Line 1624, Address: 0x1029ed4, Func Offset: 0x94
	// Line 1625, Address: 0x1029edc, Func Offset: 0x9c
	// Line 1626, Address: 0x1029ee4, Func Offset: 0xa4
	// Line 1627, Address: 0x1029eec, Func Offset: 0xac
	// Line 1629, Address: 0x1029ef8, Func Offset: 0xb8
	// Line 1630, Address: 0x1029f00, Func Offset: 0xc0
	// Line 1631, Address: 0x1029f08, Func Offset: 0xc8
	// Line 1632, Address: 0x1029f10, Func Offset: 0xd0
	// Line 1634, Address: 0x1029f1c, Func Offset: 0xdc
	// Line 1635, Address: 0x1029f24, Func Offset: 0xe4
	// Line 1636, Address: 0x1029f2c, Func Offset: 0xec
	// Line 1639, Address: 0x1029f34, Func Offset: 0xf4
	// Line 1640, Address: 0x1029f3c, Func Offset: 0xfc
	// Line 1643, Address: 0x1029f44, Func Offset: 0x104
	// Line 1644, Address: 0x1029f88, Func Offset: 0x148
	// Line 1645, Address: 0x1029fcc, Func Offset: 0x18c
	// Line 1646, Address: 0x102a010, Func Offset: 0x1d0
	// Line 1648, Address: 0x102a054, Func Offset: 0x214
	// Func End, Address: 0x102a084, Func Offset: 0x244
}

// 
// Start address: 0x102a090
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1666, Address: 0x102a090, Func Offset: 0
	// Line 1667, Address: 0x102a0b0, Func Offset: 0x20
	// Line 1668, Address: 0x102a0d0, Func Offset: 0x40
	// Func End, Address: 0x102a0e0, Func Offset: 0x50
}

// 
// Start address: 0x102a0e0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1670, Address: 0x102a0e0, Func Offset: 0
	// Line 1671, Address: 0x102a100, Func Offset: 0x20
	// Line 1672, Address: 0x102a104, Func Offset: 0x24
	// Line 1673, Address: 0x102a124, Func Offset: 0x44
	// Func End, Address: 0x102a134, Func Offset: 0x54
}

// 
// Start address: 0x102a140
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1680, Address: 0x102a140, Func Offset: 0
	// Line 1686, Address: 0x102a170, Func Offset: 0x30
	// Line 1687, Address: 0x102a180, Func Offset: 0x40
	// Line 1693, Address: 0x102a190, Func Offset: 0x50
	// Line 1694, Address: 0x102a1ac, Func Offset: 0x6c
	// Line 1695, Address: 0x102a1b0, Func Offset: 0x70
	// Line 1696, Address: 0x102a1cc, Func Offset: 0x8c
	// Line 1697, Address: 0x102a1d0, Func Offset: 0x90
	// Line 1698, Address: 0x102a1f0, Func Offset: 0xb0
	// Line 1699, Address: 0x102a1f8, Func Offset: 0xb8
	// Line 1700, Address: 0x102a218, Func Offset: 0xd8
	// Line 1701, Address: 0x102a220, Func Offset: 0xe0
	// Line 1702, Address: 0x102a268, Func Offset: 0x128
	// Line 1704, Address: 0x102a274, Func Offset: 0x134
	// Line 1706, Address: 0x102a290, Func Offset: 0x150
	// Line 1711, Address: 0x102a298, Func Offset: 0x158
	// Line 1712, Address: 0x102a2a4, Func Offset: 0x164
	// Line 1715, Address: 0x102a2b0, Func Offset: 0x170
	// Line 1716, Address: 0x102a2b8, Func Offset: 0x178
	// Line 1717, Address: 0x102a2d8, Func Offset: 0x198
	// Line 1718, Address: 0x102a2f4, Func Offset: 0x1b4
	// Line 1719, Address: 0x102a2fc, Func Offset: 0x1bc
	// Line 1720, Address: 0x102a31c, Func Offset: 0x1dc
	// Line 1722, Address: 0x102a338, Func Offset: 0x1f8
	// Line 1723, Address: 0x102a340, Func Offset: 0x200
	// Line 1724, Address: 0x102a348, Func Offset: 0x208
	// Line 1725, Address: 0x102a354, Func Offset: 0x214
	// Line 1726, Address: 0x102a36c, Func Offset: 0x22c
	// Line 1728, Address: 0x102a37c, Func Offset: 0x23c
	// Line 1731, Address: 0x102a388, Func Offset: 0x248
	// Line 1732, Address: 0x102a390, Func Offset: 0x250
	// Line 1733, Address: 0x102a394, Func Offset: 0x254
	// Func End, Address: 0x102a3b4, Func Offset: 0x274
}

// 
// Start address: 0x102a3c0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1753, Address: 0x102a3c0, Func Offset: 0
	// Line 1761, Address: 0x102a3e8, Func Offset: 0x28
	// Line 1762, Address: 0x102a44c, Func Offset: 0x8c
	// Line 1768, Address: 0x102a454, Func Offset: 0x94
	// Line 1769, Address: 0x102a45c, Func Offset: 0x9c
	// Line 1770, Address: 0x102a47c, Func Offset: 0xbc
	// Line 1771, Address: 0x102a498, Func Offset: 0xd8
	// Line 1772, Address: 0x102a4a0, Func Offset: 0xe0
	// Line 1773, Address: 0x102a4c0, Func Offset: 0x100
	// Line 1776, Address: 0x102a4dc, Func Offset: 0x11c
	// Line 1777, Address: 0x102a4e4, Func Offset: 0x124
	// Line 1778, Address: 0x102a4ec, Func Offset: 0x12c
	// Line 1779, Address: 0x102a4f8, Func Offset: 0x138
	// Line 1780, Address: 0x102a510, Func Offset: 0x150
	// Line 1781, Address: 0x102a518, Func Offset: 0x158
	// Line 1786, Address: 0x102a528, Func Offset: 0x168
	// Line 1789, Address: 0x102a534, Func Offset: 0x174
	// Line 1790, Address: 0x102a53c, Func Offset: 0x17c
	// Line 1791, Address: 0x102a540, Func Offset: 0x180
	// Func End, Address: 0x102a55c, Func Offset: 0x19c
}

// 
// Start address: 0x102a560
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1805, Address: 0x102a560, Func Offset: 0
	// Line 1812, Address: 0x102a57c, Func Offset: 0x1c
	// Line 1813, Address: 0x102a580, Func Offset: 0x20
	// Line 1814, Address: 0x102a588, Func Offset: 0x28
	// Line 1815, Address: 0x102a5ac, Func Offset: 0x4c
	// Line 1816, Address: 0x102a5b8, Func Offset: 0x58
	// Line 1817, Address: 0x102a5d0, Func Offset: 0x70
	// Line 1818, Address: 0x102a5e4, Func Offset: 0x84
	// Line 1823, Address: 0x102a5fc, Func Offset: 0x9c
	// Func End, Address: 0x102a614, Func Offset: 0xb4
}

// 
// Start address: 0x102a620
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1837, Address: 0x102a620, Func Offset: 0
	// Line 1838, Address: 0x102a62c, Func Offset: 0xc
	// Line 1839, Address: 0x102a658, Func Offset: 0x38
	// Line 1840, Address: 0x102a6a4, Func Offset: 0x84
	// Line 1841, Address: 0x102a6d0, Func Offset: 0xb0
	// Line 1843, Address: 0x102a71c, Func Offset: 0xfc
	// Line 1849, Address: 0x102a728, Func Offset: 0x108
	// Line 1850, Address: 0x102a72c, Func Offset: 0x10c
	// Func End, Address: 0x102a738, Func Offset: 0x118
}

// 
// Start address: 0x102a740
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1867, Address: 0x102a740, Func Offset: 0
	// Line 1868, Address: 0x102a75c, Func Offset: 0x1c
	// Line 1870, Address: 0x102a778, Func Offset: 0x38
	// Func End, Address: 0x102a788, Func Offset: 0x48
}

// 
// Start address: 0x102a790
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1872, Address: 0x102a790, Func Offset: 0
	// Line 1873, Address: 0x102a7ac, Func Offset: 0x1c
	// Line 1874, Address: 0x102a7b0, Func Offset: 0x20
	// Line 1876, Address: 0x102a7cc, Func Offset: 0x3c
	// Func End, Address: 0x102a7dc, Func Offset: 0x4c
}

// 
// Start address: 0x102a7e0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1878, Address: 0x102a7e0, Func Offset: 0
	// Line 1879, Address: 0x102a7f4, Func Offset: 0x14
	// Line 1881, Address: 0x102a810, Func Offset: 0x30
	// Func End, Address: 0x102a820, Func Offset: 0x40
}

// 
// Start address: 0x102a820
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1883, Address: 0x102a820, Func Offset: 0
	// Line 1884, Address: 0x102a83c, Func Offset: 0x1c
	// Line 1886, Address: 0x102a858, Func Offset: 0x38
	// Func End, Address: 0x102a868, Func Offset: 0x48
}

// 
// Start address: 0x102a870
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1888, Address: 0x102a870, Func Offset: 0
	// Line 1889, Address: 0x102a888, Func Offset: 0x18
	// Line 1890, Address: 0x102a898, Func Offset: 0x28
	// Line 1891, Address: 0x102a8a8, Func Offset: 0x38
	// Line 1892, Address: 0x102a8b4, Func Offset: 0x44
	// Line 1894, Address: 0x102a8c0, Func Offset: 0x50
	// Line 1895, Address: 0x102a8ec, Func Offset: 0x7c
	// Line 1898, Address: 0x102a918, Func Offset: 0xa8
	// Func End, Address: 0x102a924, Func Offset: 0xb4
}

// 
// Start address: 0x102a930
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1914, Address: 0x102a930, Func Offset: 0
	// Line 1919, Address: 0x102a948, Func Offset: 0x18
	// Line 1920, Address: 0x102a954, Func Offset: 0x24
	// Line 1921, Address: 0x102a960, Func Offset: 0x30
	// Line 1922, Address: 0x102a968, Func Offset: 0x38
	// Line 1923, Address: 0x102a96c, Func Offset: 0x3c
	// Line 1927, Address: 0x102a984, Func Offset: 0x54
	// Line 1928, Address: 0x102a98c, Func Offset: 0x5c
	// Line 1929, Address: 0x102a990, Func Offset: 0x60
	// Line 1931, Address: 0x102a9a0, Func Offset: 0x70
	// Func End, Address: 0x102a9c0, Func Offset: 0x90
}

// 
// Start address: 0x102a9c0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1934, Address: 0x102a9c0, Func Offset: 0
	// Line 1935, Address: 0x102a9d8, Func Offset: 0x18
	// Line 1936, Address: 0x102a9f8, Func Offset: 0x38
	// Func End, Address: 0x102aa08, Func Offset: 0x48
}

// 
// Start address: 0x102aa10
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1941, Address: 0x102aa10, Func Offset: 0
	// Line 1945, Address: 0x102aa30, Func Offset: 0x20
	// Line 1948, Address: 0x102aa4c, Func Offset: 0x3c
	// Line 1952, Address: 0x102aa74, Func Offset: 0x64
	// Line 1953, Address: 0x102aa80, Func Offset: 0x70
	// Line 1955, Address: 0x102aaa8, Func Offset: 0x98
	// Func End, Address: 0x102aab8, Func Offset: 0xa8
}

// 
// Start address: 0x102aac0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1960, Address: 0x102aac0, Func Offset: 0
	// Line 1963, Address: 0x102aadc, Func Offset: 0x1c
	// Line 1964, Address: 0x102aae4, Func Offset: 0x24
	// Line 1972, Address: 0x102aaec, Func Offset: 0x2c
	// Line 1973, Address: 0x102ab08, Func Offset: 0x48
	// Line 1975, Address: 0x102ab34, Func Offset: 0x74
	// Line 1977, Address: 0x102ab58, Func Offset: 0x98
	// Line 1978, Address: 0x102ab78, Func Offset: 0xb8
	// Line 1979, Address: 0x102ab80, Func Offset: 0xc0
	// Line 1980, Address: 0x102aba4, Func Offset: 0xe4
	// Func End, Address: 0x102abc0, Func Offset: 0x100
}

// 
// Start address: 0x102abc0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2006, Address: 0x102abc0, Func Offset: 0
	// Line 2011, Address: 0x102abe8, Func Offset: 0x28
	// Line 2012, Address: 0x102abf8, Func Offset: 0x38
	// Line 2014, Address: 0x102ac14, Func Offset: 0x54
	// Line 2015, Address: 0x102ac38, Func Offset: 0x78
	// Line 2016, Address: 0x102ac60, Func Offset: 0xa0
	// Line 2017, Address: 0x102ac6c, Func Offset: 0xac
	// Line 2018, Address: 0x102ac74, Func Offset: 0xb4
	// Line 2021, Address: 0x102ac90, Func Offset: 0xd0
	// Line 2025, Address: 0x102acb8, Func Offset: 0xf8
	// Line 2028, Address: 0x102acc0, Func Offset: 0x100
	// Line 2029, Address: 0x102acc4, Func Offset: 0x104
	// Line 2033, Address: 0x102ace0, Func Offset: 0x120
	// Line 2040, Address: 0x102ad08, Func Offset: 0x148
	// Func End, Address: 0x102ad24, Func Offset: 0x164
}

// 
// Start address: 0x102ad30
void mapinit()
{
	// Line 2045, Address: 0x102ad30, Func Offset: 0
	// Line 2051, Address: 0x102ad38, Func Offset: 0x8
	// Line 2054, Address: 0x102ad40, Func Offset: 0x10
	// Line 2055, Address: 0x102ad54, Func Offset: 0x24
	// Line 2062, Address: 0x102ad68, Func Offset: 0x38
	// Line 2063, Address: 0x102ad7c, Func Offset: 0x4c
	// Line 2066, Address: 0x102ad84, Func Offset: 0x54
	// Line 2068, Address: 0x102ad9c, Func Offset: 0x6c
	// Line 2072, Address: 0x102ada4, Func Offset: 0x74
	// Func End, Address: 0x102adb4, Func Offset: 0x84
}

// 
// Start address: 0x102adc0
void mapset()
{
	// Line 2082, Address: 0x102adc0, Func Offset: 0
	// Func End, Address: 0x102adc8, Func Offset: 0x8
}

