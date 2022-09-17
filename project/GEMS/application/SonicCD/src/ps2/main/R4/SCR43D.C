typedef struct tagPOINT;
typedef struct _anon0;
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
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef int(*type_5)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef unsigned short type_1[2];
typedef _anon13 type_2[0];
typedef unsigned char type_3[4];
typedef unsigned char type_4[129];
typedef unsigned char type_6[256];
typedef unsigned short type_7[4];
typedef unsigned short type_8[4][1024];
typedef unsigned short type_9[6];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef _anon2* type_12[8];
typedef unsigned char type_13[64][8];
typedef unsigned char type_14[22];
typedef unsigned char type_15[64];
typedef unsigned char type_16[64][8];
typedef short type_17[256];
typedef _anon1 type_18[128];
typedef _anon2* type_19[8];
typedef unsigned short type_20[16];

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
		_anon13 spra[20];
		_anon13 spr[0];
	};
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
	unsigned int l;
	_anon9 w;
	_anon10 b;
};

struct _anon9
{
	unsigned short l;
	unsigned short h;
};

struct _anon10
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon11
{
	unsigned short w;
	_anon12 b;
};

struct _anon12
{
	unsigned char l;
	unsigned char h;
};

struct _anon13
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char z81awrttbl[129];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
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
_anon11 scr_die;
_anon6 scr_timer;
_anon11 zone_flag;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon2 scra_v_posit;
_anon2 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
_anon2 scrb_h_posit;
_anon2 scrc_h_posit;
_anon2 scrz_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
short hscrollwork[256];
_anon11 scrflagc;
_anon11 scrflagz;
_anon11 scrflagb;
_anon2 vscroll;
short scra_vz;
short scra_hz;
_anon11 scrflaga;
_anon6 scroll_start;
unsigned char awasintbl[256];
short waterposi;
_anon6 waterdirec;
_anon2* lphscrollbuff;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon11 scrflagaw;
unsigned char mapwka[64][8];
_anon2 scra_v_posiw;
_anon2 scra_h_posiw;
_anon11 scrflagbw;
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
void scrv_up_ch(_anon2 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon2 lD1);
void scrv_move(_anon2 lD1);
void scrollb_hv(_anon2* lD4, _anon2* lD5);
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
// Start address: 0x1027410
void enecginit()
{
	// Line 129, Address: 0x1027410, Func Offset: 0
	// Func End, Address: 0x1027418, Func Offset: 0x8
}

// 
// Start address: 0x1027420
void divdevset()
{
	// Line 133, Address: 0x1027420, Func Offset: 0
	// Func End, Address: 0x1027428, Func Offset: 0x8
}

// 
// Start address: 0x1027430
_anon1* main_chk()
{
	// Line 181, Address: 0x1027430, Func Offset: 0
	// Line 182, Address: 0x1027450, Func Offset: 0x20
	// Line 183, Address: 0x1027458, Func Offset: 0x28
	// Func End, Address: 0x1027460, Func Offset: 0x30
}

// 
// Start address: 0x1027460
void scr_set()
{
	int i;
	// Line 190, Address: 0x1027460, Func Offset: 0
	// Line 199, Address: 0x102746c, Func Offset: 0xc
	// Line 201, Address: 0x10274b4, Func Offset: 0x54
	// Line 202, Address: 0x10274b8, Func Offset: 0x58
	// Line 203, Address: 0x10274dc, Func Offset: 0x7c
	// Line 204, Address: 0x10274f8, Func Offset: 0x98
	// Line 205, Address: 0x102751c, Func Offset: 0xbc
	// Line 206, Address: 0x1027538, Func Offset: 0xd8
	// Line 207, Address: 0x102755c, Func Offset: 0xfc
	// Line 208, Address: 0x1027578, Func Offset: 0x118
	// Line 209, Address: 0x102759c, Func Offset: 0x13c
	// Line 210, Address: 0x10275b8, Func Offset: 0x158
	// Line 212, Address: 0x10275dc, Func Offset: 0x17c
	// Line 213, Address: 0x1027600, Func Offset: 0x1a0
	// Line 214, Address: 0x102760c, Func Offset: 0x1ac
	// Line 216, Address: 0x1027618, Func Offset: 0x1b8
	// Line 217, Address: 0x102763c, Func Offset: 0x1dc
	// Line 219, Address: 0x1027648, Func Offset: 0x1e8
	// Line 220, Address: 0x1027650, Func Offset: 0x1f0
	// Func End, Address: 0x1027664, Func Offset: 0x204
}

// 
// Start address: 0x1027670
void playposiset()
{
	unsigned short endplpositbl[16];
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 224, Address: 0x1027670, Func Offset: 0
	// Line 225, Address: 0x1027684, Func Offset: 0x14
	// Line 235, Address: 0x10276b8, Func Offset: 0x48
	// Line 239, Address: 0x10276d4, Func Offset: 0x64
	// Line 247, Address: 0x1027700, Func Offset: 0x90
	// Line 249, Address: 0x1027714, Func Offset: 0xa4
	// Line 250, Address: 0x102771c, Func Offset: 0xac
	// Line 251, Address: 0x102772c, Func Offset: 0xbc
	// Line 252, Address: 0x102773c, Func Offset: 0xcc
	// Line 253, Address: 0x1027750, Func Offset: 0xe0
	// Line 257, Address: 0x1027758, Func Offset: 0xe8
	// Line 259, Address: 0x1027770, Func Offset: 0x100
	// Line 260, Address: 0x1027788, Func Offset: 0x118
	// Line 261, Address: 0x10277ac, Func Offset: 0x13c
	// Line 262, Address: 0x10277d0, Func Offset: 0x160
	// Line 266, Address: 0x10277d8, Func Offset: 0x168
	// Line 267, Address: 0x10277ec, Func Offset: 0x17c
	// Line 268, Address: 0x1027810, Func Offset: 0x1a0
	// Line 272, Address: 0x1027834, Func Offset: 0x1c4
	// Line 273, Address: 0x1027848, Func Offset: 0x1d8
	// Line 274, Address: 0x1027854, Func Offset: 0x1e4
	// Line 276, Address: 0x102785c, Func Offset: 0x1ec
	// Line 280, Address: 0x1027860, Func Offset: 0x1f0
	// Line 281, Address: 0x1027884, Func Offset: 0x214
	// Line 283, Address: 0x1027894, Func Offset: 0x224
	// Line 285, Address: 0x102789c, Func Offset: 0x22c
	// Line 286, Address: 0x10278b0, Func Offset: 0x240
	// Line 287, Address: 0x10278bc, Func Offset: 0x24c
	// Line 289, Address: 0x10278c4, Func Offset: 0x254
	// Line 292, Address: 0x10278c8, Func Offset: 0x258
	// Line 293, Address: 0x10278ec, Func Offset: 0x27c
	// Line 296, Address: 0x10278fc, Func Offset: 0x28c
	// Line 299, Address: 0x1027904, Func Offset: 0x294
	// Line 301, Address: 0x1027910, Func Offset: 0x2a0
	// Line 302, Address: 0x1027914, Func Offset: 0x2a4
	// Line 303, Address: 0x102792c, Func Offset: 0x2bc
	// Line 304, Address: 0x1027944, Func Offset: 0x2d4
	// Line 305, Address: 0x102795c, Func Offset: 0x2ec
	// Line 308, Address: 0x1027974, Func Offset: 0x304
	// Func End, Address: 0x1027990, Func Offset: 0x320
}

// 
// Start address: 0x1027990
void scrbinit(short yWk)
{
	_anon8 data;
	// Line 312, Address: 0x1027990, Func Offset: 0
	// Line 316, Address: 0x1027998, Func Offset: 0x8
	// Line 317, Address: 0x102799c, Func Offset: 0xc
	// Line 318, Address: 0x10279a8, Func Offset: 0x18
	// Line 320, Address: 0x10279b4, Func Offset: 0x24
	// Line 321, Address: 0x10279c0, Func Offset: 0x30
	// Line 322, Address: 0x10279c8, Func Offset: 0x38
	// Line 323, Address: 0x10279d4, Func Offset: 0x44
	// Line 325, Address: 0x10279e0, Func Offset: 0x50
	// Line 326, Address: 0x1027a04, Func Offset: 0x74
	// Line 327, Address: 0x1027a30, Func Offset: 0xa0
	// Line 332, Address: 0x1027a5c, Func Offset: 0xcc
	// Func End, Address: 0x1027a68, Func Offset: 0xd8
}

// 
// Start address: 0x1027a70
void scroll()
{
	_anon8 data;
	_anon2 temp1;
	_anon2 temp2;
	int hsCount;
	int i;
	// Line 336, Address: 0x1027a70, Func Offset: 0
	// Line 342, Address: 0x1027a80, Func Offset: 0x10
	// Line 345, Address: 0x1027a90, Func Offset: 0x20
	// Line 346, Address: 0x1027abc, Func Offset: 0x4c
	// Line 347, Address: 0x1027ac4, Func Offset: 0x54
	// Line 348, Address: 0x1027acc, Func Offset: 0x5c
	// Line 350, Address: 0x1027ad4, Func Offset: 0x64
	// Line 351, Address: 0x1027ae4, Func Offset: 0x74
	// Line 355, Address: 0x1027af4, Func Offset: 0x84
	// Line 356, Address: 0x1027b24, Func Offset: 0xb4
	// Line 357, Address: 0x1027b3c, Func Offset: 0xcc
	// Line 359, Address: 0x1027b4c, Func Offset: 0xdc
	// Line 360, Address: 0x1027b5c, Func Offset: 0xec
	// Line 361, Address: 0x1027b6c, Func Offset: 0xfc
	// Line 363, Address: 0x1027b7c, Func Offset: 0x10c
	// Line 364, Address: 0x1027bb0, Func Offset: 0x140
	// Line 365, Address: 0x1027bb8, Func Offset: 0x148
	// Line 367, Address: 0x1027bc0, Func Offset: 0x150
	// Line 368, Address: 0x1027bc4, Func Offset: 0x154
	// Line 371, Address: 0x1027bd0, Func Offset: 0x160
	// Line 372, Address: 0x1027c00, Func Offset: 0x190
	// Line 373, Address: 0x1027c04, Func Offset: 0x194
	// Line 375, Address: 0x1027c14, Func Offset: 0x1a4
	// Line 376, Address: 0x1027c30, Func Offset: 0x1c0
	// Line 377, Address: 0x1027c54, Func Offset: 0x1e4
	// Line 378, Address: 0x1027c60, Func Offset: 0x1f0
	// Line 379, Address: 0x1027c6c, Func Offset: 0x1fc
	// Line 380, Address: 0x1027c78, Func Offset: 0x208
	// Line 382, Address: 0x1027cc8, Func Offset: 0x258
	// Func End, Address: 0x1027ce0, Func Offset: 0x270
}

// 
// Start address: 0x1027ce0
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	_anon6 data1;
	_anon6 data2;
	short avp;
	int i;
	// Line 420, Address: 0x1027ce0, Func Offset: 0
	// Line 427, Address: 0x1027cfc, Func Offset: 0x1c
	// Line 428, Address: 0x1027d04, Func Offset: 0x24
	// Line 429, Address: 0x1027d10, Func Offset: 0x30
	// Line 430, Address: 0x1027d1c, Func Offset: 0x3c
	// Line 431, Address: 0x1027d30, Func Offset: 0x50
	// Line 432, Address: 0x1027d44, Func Offset: 0x64
	// Line 433, Address: 0x1027d48, Func Offset: 0x68
	// Line 434, Address: 0x1027d5c, Func Offset: 0x7c
	// Line 436, Address: 0x1027d60, Func Offset: 0x80
	// Line 437, Address: 0x1027d6c, Func Offset: 0x8c
	// Line 438, Address: 0x1027d94, Func Offset: 0xb4
	// Line 439, Address: 0x1027da4, Func Offset: 0xc4
	// Line 443, Address: 0x1027da8, Func Offset: 0xc8
	// Line 448, Address: 0x1027dcc, Func Offset: 0xec
	// Line 449, Address: 0x1027dd4, Func Offset: 0xf4
	// Line 450, Address: 0x1027e24, Func Offset: 0x144
	// Line 451, Address: 0x1027e28, Func Offset: 0x148
	// Line 452, Address: 0x1027e34, Func Offset: 0x154
	// Line 453, Address: 0x1027e40, Func Offset: 0x160
	// Line 454, Address: 0x1027e4c, Func Offset: 0x16c
	// Line 456, Address: 0x1027e64, Func Offset: 0x184
	// Line 457, Address: 0x1027e68, Func Offset: 0x188
	// Line 459, Address: 0x1027e90, Func Offset: 0x1b0
	// Line 461, Address: 0x1027e9c, Func Offset: 0x1bc
	// Line 463, Address: 0x1027ea4, Func Offset: 0x1c4
	// Line 464, Address: 0x1027eac, Func Offset: 0x1cc
	// Line 465, Address: 0x1027eb0, Func Offset: 0x1d0
	// Line 466, Address: 0x1027ebc, Func Offset: 0x1dc
	// Line 467, Address: 0x1027ec8, Func Offset: 0x1e8
	// Line 468, Address: 0x1027ed4, Func Offset: 0x1f4
	// Line 469, Address: 0x1027ee0, Func Offset: 0x200
	// Line 471, Address: 0x1027ef8, Func Offset: 0x218
	// Line 472, Address: 0x1027efc, Func Offset: 0x21c
	// Line 474, Address: 0x1027f24, Func Offset: 0x244
	// Line 476, Address: 0x1027f30, Func Offset: 0x250
	// Func End, Address: 0x1027f48, Func Offset: 0x268
}

// 
// Start address: 0x1027f50
void scroll_h()
{
	unsigned short wD4;
	// Line 488, Address: 0x1027f50, Func Offset: 0
	// Line 491, Address: 0x1027f5c, Func Offset: 0xc
	// Line 492, Address: 0x1027f68, Func Offset: 0x18
	// Line 493, Address: 0x1027f70, Func Offset: 0x20
	// Line 494, Address: 0x1027fa4, Func Offset: 0x54
	// Line 495, Address: 0x1027fb8, Func Offset: 0x68
	// Line 496, Address: 0x1027fe4, Func Offset: 0x94
	// Line 497, Address: 0x1027ff8, Func Offset: 0xa8
	// Line 500, Address: 0x1028000, Func Offset: 0xb0
	// Line 505, Address: 0x1028014, Func Offset: 0xc4
	// Func End, Address: 0x1028028, Func Offset: 0xd8
}

// 
// Start address: 0x1028030
void scrh_move()
{
	unsigned short wD0;
	// Line 507, Address: 0x1028030, Func Offset: 0
	// Line 510, Address: 0x102803c, Func Offset: 0xc
	// Line 511, Address: 0x1028048, Func Offset: 0x18
	// Line 512, Address: 0x102805c, Func Offset: 0x2c
	// Line 513, Address: 0x1028070, Func Offset: 0x40
	// Line 515, Address: 0x102807c, Func Offset: 0x4c
	// Line 516, Address: 0x1028084, Func Offset: 0x54
	// Line 517, Address: 0x102808c, Func Offset: 0x5c
	// Line 518, Address: 0x10280a4, Func Offset: 0x74
	// Line 519, Address: 0x10280b0, Func Offset: 0x80
	// Line 521, Address: 0x10280b8, Func Offset: 0x88
	// Line 524, Address: 0x10280c4, Func Offset: 0x94
	// Func End, Address: 0x10280d8, Func Offset: 0xa8
}

// 
// Start address: 0x10280e0
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 527, Address: 0x10280e0, Func Offset: 0
	// Line 530, Address: 0x10280ec, Func Offset: 0xc
	// Line 531, Address: 0x102810c, Func Offset: 0x2c
	// Line 534, Address: 0x1028114, Func Offset: 0x34
	// Line 535, Address: 0x102812c, Func Offset: 0x4c
	// Line 536, Address: 0x102815c, Func Offset: 0x7c
	// Line 539, Address: 0x1028168, Func Offset: 0x88
	// Line 540, Address: 0x1028170, Func Offset: 0x90
	// Line 541, Address: 0x1028184, Func Offset: 0xa4
	// Line 542, Address: 0x10281b4, Func Offset: 0xd4
	// Line 543, Address: 0x10281c0, Func Offset: 0xe0
	// Line 545, Address: 0x10281c8, Func Offset: 0xe8
	// Func End, Address: 0x10281d8, Func Offset: 0xf8
}

// 
// Start address: 0x10281e0
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 548, Address: 0x10281e0, Func Offset: 0
	// Line 551, Address: 0x10281ec, Func Offset: 0xc
	// Line 552, Address: 0x102820c, Func Offset: 0x2c
	// Line 555, Address: 0x1028214, Func Offset: 0x34
	// Line 556, Address: 0x102822c, Func Offset: 0x4c
	// Line 557, Address: 0x102825c, Func Offset: 0x7c
	// Line 560, Address: 0x1028268, Func Offset: 0x88
	// Line 561, Address: 0x1028270, Func Offset: 0x90
	// Line 562, Address: 0x1028284, Func Offset: 0xa4
	// Line 563, Address: 0x10282b4, Func Offset: 0xd4
	// Line 564, Address: 0x10282c0, Func Offset: 0xe0
	// Line 566, Address: 0x10282c8, Func Offset: 0xe8
	// Func End, Address: 0x10282d8, Func Offset: 0xf8
}

// 
// Start address: 0x10282e0
void scroll_v()
{
	unsigned short wD0;
	// Line 585, Address: 0x10282e0, Func Offset: 0
	// Line 588, Address: 0x10282ec, Func Offset: 0xc
	// Line 589, Address: 0x1028318, Func Offset: 0x38
	// Line 590, Address: 0x1028330, Func Offset: 0x50
	// Line 593, Address: 0x1028338, Func Offset: 0x58
	// Line 594, Address: 0x1028350, Func Offset: 0x70
	// Line 595, Address: 0x1028358, Func Offset: 0x78
	// Line 596, Address: 0x1028378, Func Offset: 0x98
	// Line 597, Address: 0x102838c, Func Offset: 0xac
	// Line 598, Address: 0x1028398, Func Offset: 0xb8
	// Line 600, Address: 0x10283a0, Func Offset: 0xc0
	// Line 601, Address: 0x10283b4, Func Offset: 0xd4
	// Line 602, Address: 0x10283c4, Func Offset: 0xe4
	// Line 603, Address: 0x10283cc, Func Offset: 0xec
	// Line 604, Address: 0x10283d8, Func Offset: 0xf8
	// Line 606, Address: 0x10283e0, Func Offset: 0x100
	// Line 607, Address: 0x10283e8, Func Offset: 0x108
	// Line 608, Address: 0x10283fc, Func Offset: 0x11c
	// Line 609, Address: 0x1028404, Func Offset: 0x124
	// Line 615, Address: 0x102840c, Func Offset: 0x12c
	// Line 616, Address: 0x1028420, Func Offset: 0x140
	// Line 617, Address: 0x1028428, Func Offset: 0x148
	// Line 618, Address: 0x1028434, Func Offset: 0x154
	// Line 620, Address: 0x102843c, Func Offset: 0x15c
	// Line 621, Address: 0x1028450, Func Offset: 0x170
	// Line 622, Address: 0x1028458, Func Offset: 0x178
	// Line 627, Address: 0x1028460, Func Offset: 0x180
	// Line 629, Address: 0x1028468, Func Offset: 0x188
	// Func End, Address: 0x102847c, Func Offset: 0x19c
}

// 
// Start address: 0x1028480
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 635, Address: 0x1028480, Func Offset: 0
	// Line 638, Address: 0x1028490, Func Offset: 0x10
	// Line 639, Address: 0x10284ac, Func Offset: 0x2c
	// Line 640, Address: 0x10284b8, Func Offset: 0x38
	// Line 643, Address: 0x10284c0, Func Offset: 0x40
	// Line 644, Address: 0x10284cc, Func Offset: 0x4c
	// Line 645, Address: 0x10284e4, Func Offset: 0x64
	// Line 648, Address: 0x1028500, Func Offset: 0x80
	// Line 649, Address: 0x1028510, Func Offset: 0x90
	// Line 650, Address: 0x102851c, Func Offset: 0x9c
	// Line 652, Address: 0x1028524, Func Offset: 0xa4
	// Line 653, Address: 0x1028544, Func Offset: 0xc4
	// Line 654, Address: 0x1028550, Func Offset: 0xd0
	// Line 655, Address: 0x1028558, Func Offset: 0xd8
	// Line 656, Address: 0x1028578, Func Offset: 0xf8
	// Line 657, Address: 0x1028584, Func Offset: 0x104
	// Line 659, Address: 0x102858c, Func Offset: 0x10c
	// Line 663, Address: 0x1028598, Func Offset: 0x118
	// Func End, Address: 0x10285ac, Func Offset: 0x12c
}

// 
// Start address: 0x10285b0
void sv_move_main1(unsigned short wD0)
{
	// Line 667, Address: 0x10285b0, Func Offset: 0
	// Line 669, Address: 0x10285bc, Func Offset: 0xc
	// Line 670, Address: 0x10285dc, Func Offset: 0x2c
	// Line 671, Address: 0x10285e8, Func Offset: 0x38
	// Line 672, Address: 0x10285f0, Func Offset: 0x40
	// Line 673, Address: 0x1028610, Func Offset: 0x60
	// Line 674, Address: 0x102861c, Func Offset: 0x6c
	// Line 676, Address: 0x1028624, Func Offset: 0x74
	// Line 679, Address: 0x1028630, Func Offset: 0x80
	// Func End, Address: 0x1028640, Func Offset: 0x90
}

// 
// Start address: 0x1028640
void sv_move_main2(unsigned short wD0)
{
	// Line 682, Address: 0x1028640, Func Offset: 0
	// Line 684, Address: 0x102864c, Func Offset: 0xc
	// Line 685, Address: 0x102866c, Func Offset: 0x2c
	// Line 686, Address: 0x1028678, Func Offset: 0x38
	// Line 687, Address: 0x1028680, Func Offset: 0x40
	// Line 688, Address: 0x10286a0, Func Offset: 0x60
	// Line 689, Address: 0x10286ac, Func Offset: 0x6c
	// Line 691, Address: 0x10286b4, Func Offset: 0x74
	// Line 694, Address: 0x10286c0, Func Offset: 0x80
	// Func End, Address: 0x10286d0, Func Offset: 0x90
}

// 
// Start address: 0x10286d0
void sv_move_sub2()
{
	// Line 697, Address: 0x10286d0, Func Offset: 0
	// Line 698, Address: 0x10286d8, Func Offset: 0x8
	// Line 699, Address: 0x10286e0, Func Offset: 0x10
	// Line 700, Address: 0x10286ec, Func Offset: 0x1c
	// Func End, Address: 0x10286fc, Func Offset: 0x2c
}

// 
// Start address: 0x1028700
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 703, Address: 0x1028700, Func Offset: 0
	// Line 706, Address: 0x102870c, Func Offset: 0xc
	// Line 707, Address: 0x1028710, Func Offset: 0x10
	// Line 708, Address: 0x1028718, Func Offset: 0x18
	// Line 709, Address: 0x1028734, Func Offset: 0x34
	// Line 710, Address: 0x1028750, Func Offset: 0x50
	// Line 711, Address: 0x102875c, Func Offset: 0x5c
	// Line 713, Address: 0x1028764, Func Offset: 0x64
	// Line 716, Address: 0x1028770, Func Offset: 0x70
	// Func End, Address: 0x1028780, Func Offset: 0x80
}

// 
// Start address: 0x1028780
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 721, Address: 0x1028780, Func Offset: 0
	// Line 725, Address: 0x1028790, Func Offset: 0x10
	// Line 726, Address: 0x10287ac, Func Offset: 0x2c
	// Line 727, Address: 0x10287b8, Func Offset: 0x38
	// Line 729, Address: 0x10287cc, Func Offset: 0x4c
	// Line 730, Address: 0x10287d4, Func Offset: 0x54
	// Line 731, Address: 0x10287dc, Func Offset: 0x5c
	// Line 732, Address: 0x10287e0, Func Offset: 0x60
	// Line 733, Address: 0x10287ec, Func Offset: 0x6c
	// Func End, Address: 0x1028800, Func Offset: 0x80
}

// 
// Start address: 0x1028800
void scrv_up_ch(_anon2 lD1)
{
	// Line 737, Address: 0x1028800, Func Offset: 0
	// Line 738, Address: 0x102880c, Func Offset: 0xc
	// Line 739, Address: 0x1028834, Func Offset: 0x34
	// Line 740, Address: 0x1028848, Func Offset: 0x48
	// Line 741, Address: 0x1028854, Func Offset: 0x54
	// Line 742, Address: 0x1028868, Func Offset: 0x68
	// Line 743, Address: 0x102887c, Func Offset: 0x7c
	// Line 744, Address: 0x1028890, Func Offset: 0x90
	// Line 747, Address: 0x1028898, Func Offset: 0x98
	// Line 750, Address: 0x10288a4, Func Offset: 0xa4
	// Line 752, Address: 0x10288b0, Func Offset: 0xb0
	// Func End, Address: 0x10288c0, Func Offset: 0xc0
}

// 
// Start address: 0x10288c0
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 758, Address: 0x10288c0, Func Offset: 0
	// Line 762, Address: 0x10288d0, Func Offset: 0x10
	// Line 763, Address: 0x10288d4, Func Offset: 0x14
	// Line 764, Address: 0x10288dc, Func Offset: 0x1c
	// Line 765, Address: 0x10288e8, Func Offset: 0x28
	// Line 767, Address: 0x10288fc, Func Offset: 0x3c
	// Line 768, Address: 0x1028904, Func Offset: 0x44
	// Line 769, Address: 0x102890c, Func Offset: 0x4c
	// Line 771, Address: 0x1028910, Func Offset: 0x50
	// Line 773, Address: 0x102891c, Func Offset: 0x5c
	// Func End, Address: 0x1028930, Func Offset: 0x70
}

// 
// Start address: 0x1028930
void scrv_down_ch(_anon2 lD1)
{
	// Line 777, Address: 0x1028930, Func Offset: 0
	// Line 778, Address: 0x102893c, Func Offset: 0xc
	// Line 779, Address: 0x1028964, Func Offset: 0x34
	// Line 780, Address: 0x1028970, Func Offset: 0x40
	// Line 781, Address: 0x1028984, Func Offset: 0x54
	// Line 782, Address: 0x1028998, Func Offset: 0x68
	// Line 783, Address: 0x10289ac, Func Offset: 0x7c
	// Line 784, Address: 0x10289c0, Func Offset: 0x90
	// Line 786, Address: 0x10289c8, Func Offset: 0x98
	// Line 789, Address: 0x10289d4, Func Offset: 0xa4
	// Line 791, Address: 0x10289e0, Func Offset: 0xb0
	// Func End, Address: 0x10289f0, Func Offset: 0xc0
}

// 
// Start address: 0x10289f0
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 794, Address: 0x10289f0, Func Offset: 0
	// Line 797, Address: 0x1028a00, Func Offset: 0x10
	// Line 799, Address: 0x1028a0c, Func Offset: 0x1c
	// Line 800, Address: 0x1028a14, Func Offset: 0x24
	// Line 801, Address: 0x1028a1c, Func Offset: 0x2c
	// Line 803, Address: 0x1028a20, Func Offset: 0x30
	// Line 804, Address: 0x1028a48, Func Offset: 0x58
	// Line 807, Address: 0x1028a54, Func Offset: 0x64
	// Line 808, Address: 0x1028a88, Func Offset: 0x98
	// Line 809, Address: 0x1028a9c, Func Offset: 0xac
	// Line 811, Address: 0x1028ac8, Func Offset: 0xd8
	// Line 812, Address: 0x1028adc, Func Offset: 0xec
	// Line 814, Address: 0x1028ae4, Func Offset: 0xf4
	// Line 819, Address: 0x1028af8, Func Offset: 0x108
	// Func End, Address: 0x1028b0c, Func Offset: 0x11c
}

// 
// Start address: 0x1028b10
void scrollb_hv(_anon2* lD4, _anon2* lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 823, Address: 0x1028b10, Func Offset: 0
	// Line 826, Address: 0x1028b1c, Func Offset: 0xc
	// Line 827, Address: 0x1028b2c, Func Offset: 0x1c
	// Line 828, Address: 0x1028b40, Func Offset: 0x30
	// Line 830, Address: 0x1028b4c, Func Offset: 0x3c
	// Line 832, Address: 0x1028b80, Func Offset: 0x70
	// Line 833, Address: 0x1028b94, Func Offset: 0x84
	// Line 834, Address: 0x1028ba4, Func Offset: 0x94
	// Line 835, Address: 0x1028bb8, Func Offset: 0xa8
	// Line 836, Address: 0x1028bcc, Func Offset: 0xbc
	// Line 839, Address: 0x1028bd4, Func Offset: 0xc4
	// Line 844, Address: 0x1028be8, Func Offset: 0xd8
	// Line 845, Address: 0x1028bf8, Func Offset: 0xe8
	// Line 846, Address: 0x1028c0c, Func Offset: 0xfc
	// Line 847, Address: 0x1028c24, Func Offset: 0x114
	// Line 849, Address: 0x1028c30, Func Offset: 0x120
	// Line 851, Address: 0x1028c64, Func Offset: 0x154
	// Line 852, Address: 0x1028c78, Func Offset: 0x168
	// Line 853, Address: 0x1028c88, Func Offset: 0x178
	// Line 854, Address: 0x1028c9c, Func Offset: 0x18c
	// Line 855, Address: 0x1028cb0, Func Offset: 0x1a0
	// Line 858, Address: 0x1028cb8, Func Offset: 0x1a8
	// Line 863, Address: 0x1028ccc, Func Offset: 0x1bc
	// Func End, Address: 0x1028cd8, Func Offset: 0x1c8
}

// 
// Start address: 0x1028ce0
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 870, Address: 0x1028ce0, Func Offset: 0
	// Line 873, Address: 0x1028cec, Func Offset: 0xc
	// Line 874, Address: 0x1028cf8, Func Offset: 0x18
	// Line 876, Address: 0x1028d04, Func Offset: 0x24
	// Line 877, Address: 0x1028d30, Func Offset: 0x50
	// Line 878, Address: 0x1028d44, Func Offset: 0x64
	// Line 879, Address: 0x1028d74, Func Offset: 0x94
	// Line 880, Address: 0x1028d88, Func Offset: 0xa8
	// Line 883, Address: 0x1028d90, Func Offset: 0xb0
	// Line 888, Address: 0x1028da4, Func Offset: 0xc4
	// Func End, Address: 0x1028db4, Func Offset: 0xd4
}

// 
// Start address: 0x1028dc0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 892, Address: 0x1028dc0, Func Offset: 0
	// Line 896, Address: 0x1028dd0, Func Offset: 0x10
	// Line 897, Address: 0x1028ddc, Func Offset: 0x1c
	// Line 898, Address: 0x1028dec, Func Offset: 0x2c
	// Line 900, Address: 0x1028df8, Func Offset: 0x38
	// Line 901, Address: 0x1028e00, Func Offset: 0x40
	// Line 902, Address: 0x1028e08, Func Offset: 0x48
	// Line 904, Address: 0x1028e14, Func Offset: 0x54
	// Line 905, Address: 0x1028e20, Func Offset: 0x60
	// Line 906, Address: 0x1028e34, Func Offset: 0x74
	// Line 907, Address: 0x1028e40, Func Offset: 0x80
	// Line 908, Address: 0x1028e54, Func Offset: 0x94
	// Line 909, Address: 0x1028e64, Func Offset: 0xa4
	// Line 910, Address: 0x1028e78, Func Offset: 0xb8
	// Line 911, Address: 0x1028e94, Func Offset: 0xd4
	// Line 914, Address: 0x1028e9c, Func Offset: 0xdc
	// Line 919, Address: 0x1028ebc, Func Offset: 0xfc
	// Func End, Address: 0x1028ecc, Func Offset: 0x10c
}

// 
// Start address: 0x1028ed0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 922, Address: 0x1028ed0, Func Offset: 0
	// Line 926, Address: 0x1028ee0, Func Offset: 0x10
	// Line 927, Address: 0x1028eec, Func Offset: 0x1c
	// Line 928, Address: 0x1028efc, Func Offset: 0x2c
	// Line 930, Address: 0x1028f08, Func Offset: 0x38
	// Line 931, Address: 0x1028f10, Func Offset: 0x40
	// Line 932, Address: 0x1028f18, Func Offset: 0x48
	// Line 934, Address: 0x1028f24, Func Offset: 0x54
	// Line 935, Address: 0x1028f30, Func Offset: 0x60
	// Line 936, Address: 0x1028f44, Func Offset: 0x74
	// Line 937, Address: 0x1028f50, Func Offset: 0x80
	// Line 938, Address: 0x1028f64, Func Offset: 0x94
	// Line 939, Address: 0x1028f74, Func Offset: 0xa4
	// Line 940, Address: 0x1028f88, Func Offset: 0xb8
	// Line 941, Address: 0x1028fa4, Func Offset: 0xd4
	// Line 944, Address: 0x1028fac, Func Offset: 0xdc
	// Line 949, Address: 0x1028fcc, Func Offset: 0xfc
	// Func End, Address: 0x1028fdc, Func Offset: 0x10c
}

// 
// Start address: 0x1028fe0
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 961, Address: 0x1028fe0, Func Offset: 0
	// Line 965, Address: 0x1028ff0, Func Offset: 0x10
	// Line 966, Address: 0x1028ffc, Func Offset: 0x1c
	// Line 967, Address: 0x102900c, Func Offset: 0x2c
	// Line 969, Address: 0x1029018, Func Offset: 0x38
	// Line 970, Address: 0x1029020, Func Offset: 0x40
	// Line 971, Address: 0x1029028, Func Offset: 0x48
	// Line 973, Address: 0x1029034, Func Offset: 0x54
	// Line 974, Address: 0x1029040, Func Offset: 0x60
	// Line 975, Address: 0x1029054, Func Offset: 0x74
	// Line 976, Address: 0x1029060, Func Offset: 0x80
	// Line 977, Address: 0x1029074, Func Offset: 0x94
	// Line 978, Address: 0x1029084, Func Offset: 0xa4
	// Line 979, Address: 0x1029098, Func Offset: 0xb8
	// Line 980, Address: 0x10290b4, Func Offset: 0xd4
	// Line 983, Address: 0x10290bc, Func Offset: 0xdc
	// Line 988, Address: 0x10290dc, Func Offset: 0xfc
	// Func End, Address: 0x10290ec, Func Offset: 0x10c
}

// 
// Start address: 0x10290f0
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1002, Address: 0x10290f0, Func Offset: 0
	// Line 1008, Address: 0x102910c, Func Offset: 0x1c
	// Line 1009, Address: 0x1029110, Func Offset: 0x20
	// Line 1010, Address: 0x102911c, Func Offset: 0x2c
	// Line 1011, Address: 0x1029128, Func Offset: 0x38
	// Line 1012, Address: 0x1029130, Func Offset: 0x40
	// Line 1013, Address: 0x1029138, Func Offset: 0x48
	// Line 1015, Address: 0x1029154, Func Offset: 0x64
	// Line 1016, Address: 0x1029160, Func Offset: 0x70
	// Line 1017, Address: 0x102916c, Func Offset: 0x7c
	// Line 1018, Address: 0x1029174, Func Offset: 0x84
	// Line 1020, Address: 0x102917c, Func Offset: 0x8c
	// Func End, Address: 0x10291a0, Func Offset: 0xb0
}

// 
// Start address: 0x10291a0
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
	// Line 1033, Address: 0x10291a0, Func Offset: 0
	// Line 1042, Address: 0x10291c0, Func Offset: 0x20
	// Line 1043, Address: 0x10291c4, Func Offset: 0x24
	// Line 1044, Address: 0x10291d0, Func Offset: 0x30
	// Line 1045, Address: 0x10291dc, Func Offset: 0x3c
	// Line 1046, Address: 0x10291e4, Func Offset: 0x44
	// Line 1047, Address: 0x10291ec, Func Offset: 0x4c
	// Line 1049, Address: 0x1029208, Func Offset: 0x68
	// Line 1050, Address: 0x102920c, Func Offset: 0x6c
	// Line 1051, Address: 0x1029218, Func Offset: 0x78
	// Line 1052, Address: 0x1029224, Func Offset: 0x84
	// Line 1053, Address: 0x102922c, Func Offset: 0x8c
	// Line 1055, Address: 0x1029234, Func Offset: 0x94
	// Line 1056, Address: 0x1029240, Func Offset: 0xa0
	// Line 1057, Address: 0x1029254, Func Offset: 0xb4
	// Line 1059, Address: 0x1029260, Func Offset: 0xc0
	// Line 1060, Address: 0x1029268, Func Offset: 0xc8
	// Line 1062, Address: 0x1029270, Func Offset: 0xd0
	// Line 1064, Address: 0x1029290, Func Offset: 0xf0
	// Line 1070, Address: 0x10292bc, Func Offset: 0x11c
	// Line 1071, Address: 0x10292d0, Func Offset: 0x130
	// Line 1073, Address: 0x10292dc, Func Offset: 0x13c
	// Line 1074, Address: 0x10292e4, Func Offset: 0x144
	// Line 1075, Address: 0x10292ec, Func Offset: 0x14c
	// Line 1077, Address: 0x102930c, Func Offset: 0x16c
	// Line 1083, Address: 0x1029338, Func Offset: 0x198
	// Line 1084, Address: 0x102934c, Func Offset: 0x1ac
	// Line 1086, Address: 0x1029358, Func Offset: 0x1b8
	// Line 1087, Address: 0x1029360, Func Offset: 0x1c0
	// Line 1088, Address: 0x1029368, Func Offset: 0x1c8
	// Line 1090, Address: 0x1029388, Func Offset: 0x1e8
	// Line 1096, Address: 0x10293b4, Func Offset: 0x214
	// Line 1097, Address: 0x10293c8, Func Offset: 0x228
	// Line 1099, Address: 0x10293d4, Func Offset: 0x234
	// Line 1100, Address: 0x10293dc, Func Offset: 0x23c
	// Line 1101, Address: 0x10293e4, Func Offset: 0x244
	// Line 1103, Address: 0x1029404, Func Offset: 0x264
	// Line 1112, Address: 0x1029430, Func Offset: 0x290
	// Func End, Address: 0x1029458, Func Offset: 0x2b8
}

// 
// Start address: 0x1029460
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw)
{
	tagPOINT TilePoint;
	_anon2 lD4;
	unsigned short wD5;
	// Line 1129, Address: 0x1029460, Func Offset: 0
	// Line 1134, Address: 0x1029480, Func Offset: 0x20
	// Line 1135, Address: 0x1029490, Func Offset: 0x30
	// Line 1136, Address: 0x10294a8, Func Offset: 0x48
	// Line 1138, Address: 0x10294bc, Func Offset: 0x5c
	// Line 1139, Address: 0x10294c4, Func Offset: 0x64
	// Line 1141, Address: 0x10294cc, Func Offset: 0x6c
	// Line 1143, Address: 0x10294ec, Func Offset: 0x8c
	// Line 1149, Address: 0x1029518, Func Offset: 0xb8
	// Line 1150, Address: 0x1029530, Func Offset: 0xd0
	// Line 1152, Address: 0x1029544, Func Offset: 0xe4
	// Line 1153, Address: 0x102954c, Func Offset: 0xec
	// Line 1154, Address: 0x1029554, Func Offset: 0xf4
	// Line 1156, Address: 0x1029574, Func Offset: 0x114
	// Line 1162, Address: 0x10295a0, Func Offset: 0x140
	// Line 1163, Address: 0x10295b8, Func Offset: 0x158
	// Line 1165, Address: 0x10295cc, Func Offset: 0x16c
	// Line 1166, Address: 0x10295d4, Func Offset: 0x174
	// Line 1167, Address: 0x10295dc, Func Offset: 0x17c
	// Line 1169, Address: 0x10295fc, Func Offset: 0x19c
	// Line 1175, Address: 0x1029628, Func Offset: 0x1c8
	// Line 1176, Address: 0x1029640, Func Offset: 0x1e0
	// Line 1178, Address: 0x1029654, Func Offset: 0x1f4
	// Line 1179, Address: 0x102965c, Func Offset: 0x1fc
	// Line 1180, Address: 0x1029664, Func Offset: 0x204
	// Line 1182, Address: 0x1029684, Func Offset: 0x224
	// Line 1191, Address: 0x10296b0, Func Offset: 0x250
	// Func End, Address: 0x10296c4, Func Offset: 0x264
}

// 
// Start address: 0x10296d0
void scrollwrtc()
{
	// Line 1198, Address: 0x10296d0, Func Offset: 0
	// Func End, Address: 0x10296d8, Func Offset: 0x8
}

// 
// Start address: 0x10296e0
void scrollwrtz()
{
	// Line 1203, Address: 0x10296e0, Func Offset: 0
	// Func End, Address: 0x10296e8, Func Offset: 0x8
}

// 
// Start address: 0x10296f0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1221, Address: 0x10296f0, Func Offset: 0
	// Line 1234, Address: 0x1029718, Func Offset: 0x28
	// Line 1237, Address: 0x1029738, Func Offset: 0x48
	// Line 1238, Address: 0x102974c, Func Offset: 0x5c
	// Line 1239, Address: 0x1029760, Func Offset: 0x70
	// Line 1240, Address: 0x1029774, Func Offset: 0x84
	// Line 1242, Address: 0x1029788, Func Offset: 0x98
	// Line 1243, Address: 0x1029794, Func Offset: 0xa4
	// Line 1244, Address: 0x10297a8, Func Offset: 0xb8
	// Func End, Address: 0x10297b8, Func Offset: 0xc8
}

// 
// Start address: 0x10297c0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1248, Address: 0x10297c0, Func Offset: 0
	// Line 1252, Address: 0x10297e8, Func Offset: 0x28
	// Line 1255, Address: 0x1029808, Func Offset: 0x48
	// Line 1256, Address: 0x102981c, Func Offset: 0x5c
	// Line 1257, Address: 0x1029830, Func Offset: 0x70
	// Line 1258, Address: 0x1029844, Func Offset: 0x84
	// Line 1260, Address: 0x1029858, Func Offset: 0x98
	// Line 1261, Address: 0x1029864, Func Offset: 0xa4
	// Line 1262, Address: 0x1029878, Func Offset: 0xb8
	// Func End, Address: 0x1029888, Func Offset: 0xc8
}

// 
// Start address: 0x1029890
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1282, Address: 0x1029890, Func Offset: 0
	// Line 1286, Address: 0x10298b8, Func Offset: 0x28
	// Line 1289, Address: 0x10298d8, Func Offset: 0x48
	// Line 1290, Address: 0x10298ec, Func Offset: 0x5c
	// Line 1291, Address: 0x10298fc, Func Offset: 0x6c
	// Line 1292, Address: 0x1029910, Func Offset: 0x80
	// Line 1294, Address: 0x1029920, Func Offset: 0x90
	// Line 1295, Address: 0x102992c, Func Offset: 0x9c
	// Line 1296, Address: 0x1029940, Func Offset: 0xb0
	// Func End, Address: 0x1029950, Func Offset: 0xc0
}

// 
// Start address: 0x1029950
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
	// Line 1315, Address: 0x1029950, Func Offset: 0
	// Line 1316, Address: 0x1029984, Func Offset: 0x34
	// Line 1321, Address: 0x1029988, Func Offset: 0x38
	// Line 1323, Address: 0x1029998, Func Offset: 0x48
	// Line 1324, Address: 0x102999c, Func Offset: 0x4c
	// Line 1325, Address: 0x10299a4, Func Offset: 0x54
	// Line 1327, Address: 0x10299b4, Func Offset: 0x64
	// Line 1329, Address: 0x10299b8, Func Offset: 0x68
	// Line 1330, Address: 0x10299c0, Func Offset: 0x70
	// Line 1333, Address: 0x10299c8, Func Offset: 0x78
	// Line 1334, Address: 0x10299d0, Func Offset: 0x80
	// Line 1335, Address: 0x10299dc, Func Offset: 0x8c
	// Line 1337, Address: 0x10299e8, Func Offset: 0x98
	// Line 1338, Address: 0x10299f0, Func Offset: 0xa0
	// Line 1339, Address: 0x10299f8, Func Offset: 0xa8
	// Line 1340, Address: 0x1029a00, Func Offset: 0xb0
	// Line 1342, Address: 0x1029a0c, Func Offset: 0xbc
	// Line 1343, Address: 0x1029a14, Func Offset: 0xc4
	// Line 1344, Address: 0x1029a1c, Func Offset: 0xcc
	// Line 1345, Address: 0x1029a24, Func Offset: 0xd4
	// Line 1347, Address: 0x1029a30, Func Offset: 0xe0
	// Line 1348, Address: 0x1029a38, Func Offset: 0xe8
	// Line 1349, Address: 0x1029a40, Func Offset: 0xf0
	// Line 1352, Address: 0x1029a48, Func Offset: 0xf8
	// Line 1353, Address: 0x1029a50, Func Offset: 0x100
	// Line 1356, Address: 0x1029a58, Func Offset: 0x108
	// Line 1357, Address: 0x1029a9c, Func Offset: 0x14c
	// Line 1358, Address: 0x1029ae0, Func Offset: 0x190
	// Line 1359, Address: 0x1029b24, Func Offset: 0x1d4
	// Line 1361, Address: 0x1029b68, Func Offset: 0x218
	// Func End, Address: 0x1029b98, Func Offset: 0x248
}

// 
// Start address: 0x1029ba0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1379, Address: 0x1029ba0, Func Offset: 0
	// Line 1380, Address: 0x1029bc0, Func Offset: 0x20
	// Line 1381, Address: 0x1029be0, Func Offset: 0x40
	// Func End, Address: 0x1029bf0, Func Offset: 0x50
}

// 
// Start address: 0x1029bf0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1383, Address: 0x1029bf0, Func Offset: 0
	// Line 1384, Address: 0x1029c10, Func Offset: 0x20
	// Line 1385, Address: 0x1029c14, Func Offset: 0x24
	// Line 1386, Address: 0x1029c34, Func Offset: 0x44
	// Func End, Address: 0x1029c44, Func Offset: 0x54
}

// 
// Start address: 0x1029c50
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1393, Address: 0x1029c50, Func Offset: 0
	// Line 1399, Address: 0x1029c80, Func Offset: 0x30
	// Line 1400, Address: 0x1029c90, Func Offset: 0x40
	// Line 1406, Address: 0x1029ca0, Func Offset: 0x50
	// Line 1407, Address: 0x1029cbc, Func Offset: 0x6c
	// Line 1408, Address: 0x1029cc0, Func Offset: 0x70
	// Line 1410, Address: 0x1029cdc, Func Offset: 0x8c
	// Line 1411, Address: 0x1029cfc, Func Offset: 0xac
	// Line 1412, Address: 0x1029d1c, Func Offset: 0xcc
	// Line 1413, Address: 0x1029d24, Func Offset: 0xd4
	// Line 1415, Address: 0x1029d44, Func Offset: 0xf4
	// Line 1416, Address: 0x1029d64, Func Offset: 0x114
	// Line 1417, Address: 0x1029dac, Func Offset: 0x15c
	// Line 1419, Address: 0x1029db8, Func Offset: 0x168
	// Line 1421, Address: 0x1029dd4, Func Offset: 0x184
	// Line 1426, Address: 0x1029ddc, Func Offset: 0x18c
	// Line 1427, Address: 0x1029de8, Func Offset: 0x198
	// Line 1430, Address: 0x1029df4, Func Offset: 0x1a4
	// Line 1431, Address: 0x1029dfc, Func Offset: 0x1ac
	// Line 1432, Address: 0x1029e1c, Func Offset: 0x1cc
	// Line 1433, Address: 0x1029e38, Func Offset: 0x1e8
	// Line 1434, Address: 0x1029e40, Func Offset: 0x1f0
	// Line 1435, Address: 0x1029e60, Func Offset: 0x210
	// Line 1437, Address: 0x1029e7c, Func Offset: 0x22c
	// Line 1438, Address: 0x1029e84, Func Offset: 0x234
	// Line 1439, Address: 0x1029e8c, Func Offset: 0x23c
	// Line 1440, Address: 0x1029e98, Func Offset: 0x248
	// Line 1441, Address: 0x1029eb0, Func Offset: 0x260
	// Line 1443, Address: 0x1029ec0, Func Offset: 0x270
	// Line 1446, Address: 0x1029ecc, Func Offset: 0x27c
	// Line 1447, Address: 0x1029ed4, Func Offset: 0x284
	// Line 1448, Address: 0x1029ed8, Func Offset: 0x288
	// Func End, Address: 0x1029ef8, Func Offset: 0x2a8
}

// 
// Start address: 0x1029f00
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1468, Address: 0x1029f00, Func Offset: 0
	// Line 1476, Address: 0x1029f28, Func Offset: 0x28
	// Line 1477, Address: 0x1029f8c, Func Offset: 0x8c
	// Line 1483, Address: 0x1029f94, Func Offset: 0x94
	// Line 1484, Address: 0x1029f9c, Func Offset: 0x9c
	// Line 1485, Address: 0x1029fbc, Func Offset: 0xbc
	// Line 1486, Address: 0x1029fd8, Func Offset: 0xd8
	// Line 1487, Address: 0x1029fe0, Func Offset: 0xe0
	// Line 1488, Address: 0x102a000, Func Offset: 0x100
	// Line 1491, Address: 0x102a01c, Func Offset: 0x11c
	// Line 1492, Address: 0x102a024, Func Offset: 0x124
	// Line 1493, Address: 0x102a02c, Func Offset: 0x12c
	// Line 1494, Address: 0x102a038, Func Offset: 0x138
	// Line 1495, Address: 0x102a050, Func Offset: 0x150
	// Line 1496, Address: 0x102a058, Func Offset: 0x158
	// Line 1501, Address: 0x102a068, Func Offset: 0x168
	// Line 1504, Address: 0x102a074, Func Offset: 0x174
	// Line 1505, Address: 0x102a07c, Func Offset: 0x17c
	// Line 1506, Address: 0x102a080, Func Offset: 0x180
	// Func End, Address: 0x102a09c, Func Offset: 0x19c
}

// 
// Start address: 0x102a0a0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1520, Address: 0x102a0a0, Func Offset: 0
	// Line 1527, Address: 0x102a0bc, Func Offset: 0x1c
	// Line 1528, Address: 0x102a0c0, Func Offset: 0x20
	// Line 1529, Address: 0x102a0c8, Func Offset: 0x28
	// Line 1530, Address: 0x102a0ec, Func Offset: 0x4c
	// Line 1531, Address: 0x102a0f8, Func Offset: 0x58
	// Line 1532, Address: 0x102a110, Func Offset: 0x70
	// Line 1533, Address: 0x102a124, Func Offset: 0x84
	// Line 1538, Address: 0x102a13c, Func Offset: 0x9c
	// Func End, Address: 0x102a154, Func Offset: 0xb4
}

// 
// Start address: 0x102a160
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1552, Address: 0x102a160, Func Offset: 0
	// Line 1553, Address: 0x102a16c, Func Offset: 0xc
	// Line 1554, Address: 0x102a198, Func Offset: 0x38
	// Line 1555, Address: 0x102a1e4, Func Offset: 0x84
	// Line 1556, Address: 0x102a210, Func Offset: 0xb0
	// Line 1558, Address: 0x102a25c, Func Offset: 0xfc
	// Line 1564, Address: 0x102a268, Func Offset: 0x108
	// Line 1565, Address: 0x102a26c, Func Offset: 0x10c
	// Func End, Address: 0x102a278, Func Offset: 0x118
}

// 
// Start address: 0x102a280
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1582, Address: 0x102a280, Func Offset: 0
	// Line 1583, Address: 0x102a29c, Func Offset: 0x1c
	// Line 1585, Address: 0x102a2b8, Func Offset: 0x38
	// Func End, Address: 0x102a2c8, Func Offset: 0x48
}

// 
// Start address: 0x102a2d0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1587, Address: 0x102a2d0, Func Offset: 0
	// Line 1588, Address: 0x102a2ec, Func Offset: 0x1c
	// Line 1589, Address: 0x102a2f0, Func Offset: 0x20
	// Line 1591, Address: 0x102a30c, Func Offset: 0x3c
	// Func End, Address: 0x102a31c, Func Offset: 0x4c
}

// 
// Start address: 0x102a320
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1593, Address: 0x102a320, Func Offset: 0
	// Line 1594, Address: 0x102a334, Func Offset: 0x14
	// Line 1596, Address: 0x102a350, Func Offset: 0x30
	// Func End, Address: 0x102a360, Func Offset: 0x40
}

// 
// Start address: 0x102a360
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1598, Address: 0x102a360, Func Offset: 0
	// Line 1599, Address: 0x102a37c, Func Offset: 0x1c
	// Line 1601, Address: 0x102a398, Func Offset: 0x38
	// Func End, Address: 0x102a3a8, Func Offset: 0x48
}

// 
// Start address: 0x102a3b0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1603, Address: 0x102a3b0, Func Offset: 0
	// Line 1604, Address: 0x102a3c8, Func Offset: 0x18
	// Line 1605, Address: 0x102a3d8, Func Offset: 0x28
	// Line 1606, Address: 0x102a3e8, Func Offset: 0x38
	// Line 1607, Address: 0x102a3f4, Func Offset: 0x44
	// Line 1609, Address: 0x102a400, Func Offset: 0x50
	// Line 1610, Address: 0x102a42c, Func Offset: 0x7c
	// Line 1613, Address: 0x102a458, Func Offset: 0xa8
	// Func End, Address: 0x102a464, Func Offset: 0xb4
}

// 
// Start address: 0x102a470
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1629, Address: 0x102a470, Func Offset: 0
	// Line 1634, Address: 0x102a488, Func Offset: 0x18
	// Line 1635, Address: 0x102a494, Func Offset: 0x24
	// Line 1636, Address: 0x102a4a0, Func Offset: 0x30
	// Line 1637, Address: 0x102a4a8, Func Offset: 0x38
	// Line 1638, Address: 0x102a4ac, Func Offset: 0x3c
	// Line 1640, Address: 0x102a4c4, Func Offset: 0x54
	// Line 1641, Address: 0x102a4d0, Func Offset: 0x60
	// Line 1642, Address: 0x102a4dc, Func Offset: 0x6c
	// Line 1643, Address: 0x102a4e4, Func Offset: 0x74
	// Line 1645, Address: 0x102a4e8, Func Offset: 0x78
	// Line 1647, Address: 0x102a500, Func Offset: 0x90
	// Func End, Address: 0x102a520, Func Offset: 0xb0
}

// 
// Start address: 0x102a520
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1651, Address: 0x102a520, Func Offset: 0
	// Line 1652, Address: 0x102a538, Func Offset: 0x18
	// Line 1653, Address: 0x102a558, Func Offset: 0x38
	// Func End, Address: 0x102a568, Func Offset: 0x48
}

// 
// Start address: 0x102a570
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1658, Address: 0x102a570, Func Offset: 0
	// Line 1662, Address: 0x102a590, Func Offset: 0x20
	// Line 1665, Address: 0x102a5ac, Func Offset: 0x3c
	// Line 1669, Address: 0x102a5d4, Func Offset: 0x64
	// Line 1670, Address: 0x102a5e0, Func Offset: 0x70
	// Line 1672, Address: 0x102a608, Func Offset: 0x98
	// Func End, Address: 0x102a618, Func Offset: 0xa8
}

// 
// Start address: 0x102a620
void mapinit()
{
	// Line 1782, Address: 0x102a620, Func Offset: 0
	// Line 1784, Address: 0x102a628, Func Offset: 0x8
	// Line 1785, Address: 0x102a63c, Func Offset: 0x1c
	// Line 1788, Address: 0x102a650, Func Offset: 0x30
	// Line 1789, Address: 0x102a670, Func Offset: 0x50
	// Func End, Address: 0x102a680, Func Offset: 0x60
}

// 
// Start address: 0x102a680
void mapset()
{
	// Line 1800, Address: 0x102a680, Func Offset: 0
	// Func End, Address: 0x102a688, Func Offset: 0x8
}

