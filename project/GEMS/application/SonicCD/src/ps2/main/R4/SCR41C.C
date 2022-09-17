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
typedef union _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef int(*type_4)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned char type_2[4];
typedef unsigned char type_3[129];
typedef unsigned char type_5[256];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef _anon2* type_10[8];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef short type_15[256];
typedef unsigned short type_16[6];
typedef _anon1 type_17[128];
typedef _anon2* type_18[8];
typedef unsigned short type_19[16];
typedef unsigned short type_20[2];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
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
short hscrollwork[256];
_anon2 scrb_h_posit;
_anon2 scrc_h_posit;
_anon2 scrz_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
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
// Start address: 0x1025430
void enecginit()
{
	// Line 128, Address: 0x1025430, Func Offset: 0
	// Func End, Address: 0x1025438, Func Offset: 0x8
}

// 
// Start address: 0x1025440
void divdevset()
{
	// Line 132, Address: 0x1025440, Func Offset: 0
	// Func End, Address: 0x1025448, Func Offset: 0x8
}

// 
// Start address: 0x1025450
_anon1* main_chk()
{
	// Line 180, Address: 0x1025450, Func Offset: 0
	// Line 181, Address: 0x1025470, Func Offset: 0x20
	// Line 182, Address: 0x1025478, Func Offset: 0x28
	// Func End, Address: 0x1025480, Func Offset: 0x30
}

// 
// Start address: 0x1025480
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 185, Address: 0x1025480, Func Offset: 0
	// Line 192, Address: 0x102548c, Func Offset: 0xc
	// Line 197, Address: 0x10254c0, Func Offset: 0x40
	// Line 199, Address: 0x1025508, Func Offset: 0x88
	// Line 200, Address: 0x102550c, Func Offset: 0x8c
	// Line 201, Address: 0x1025528, Func Offset: 0xa8
	// Line 202, Address: 0x102553c, Func Offset: 0xbc
	// Line 203, Address: 0x1025558, Func Offset: 0xd8
	// Line 204, Address: 0x102556c, Func Offset: 0xec
	// Line 205, Address: 0x1025588, Func Offset: 0x108
	// Line 206, Address: 0x102559c, Func Offset: 0x11c
	// Line 207, Address: 0x10255b8, Func Offset: 0x138
	// Line 208, Address: 0x10255cc, Func Offset: 0x14c
	// Line 210, Address: 0x10255e8, Func Offset: 0x168
	// Line 211, Address: 0x102560c, Func Offset: 0x18c
	// Line 212, Address: 0x1025618, Func Offset: 0x198
	// Line 214, Address: 0x1025624, Func Offset: 0x1a4
	// Line 215, Address: 0x1025640, Func Offset: 0x1c0
	// Line 217, Address: 0x102564c, Func Offset: 0x1cc
	// Line 218, Address: 0x1025654, Func Offset: 0x1d4
	// Func End, Address: 0x1025668, Func Offset: 0x1e8
}

// 
// Start address: 0x1025670
void playposiset()
{
	unsigned short endplpositbl[16];
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 222, Address: 0x1025670, Func Offset: 0
	// Line 223, Address: 0x1025684, Func Offset: 0x14
	// Line 233, Address: 0x10256b8, Func Offset: 0x48
	// Line 237, Address: 0x10256d4, Func Offset: 0x64
	// Line 245, Address: 0x1025700, Func Offset: 0x90
	// Line 247, Address: 0x1025714, Func Offset: 0xa4
	// Line 248, Address: 0x102571c, Func Offset: 0xac
	// Line 249, Address: 0x102572c, Func Offset: 0xbc
	// Line 250, Address: 0x102573c, Func Offset: 0xcc
	// Line 251, Address: 0x1025750, Func Offset: 0xe0
	// Line 255, Address: 0x1025758, Func Offset: 0xe8
	// Line 257, Address: 0x1025770, Func Offset: 0x100
	// Line 258, Address: 0x1025788, Func Offset: 0x118
	// Line 259, Address: 0x10257ac, Func Offset: 0x13c
	// Line 260, Address: 0x10257d0, Func Offset: 0x160
	// Line 264, Address: 0x10257d8, Func Offset: 0x168
	// Line 265, Address: 0x10257ec, Func Offset: 0x17c
	// Line 266, Address: 0x1025810, Func Offset: 0x1a0
	// Line 270, Address: 0x1025834, Func Offset: 0x1c4
	// Line 271, Address: 0x1025848, Func Offset: 0x1d8
	// Line 272, Address: 0x1025854, Func Offset: 0x1e4
	// Line 274, Address: 0x102585c, Func Offset: 0x1ec
	// Line 278, Address: 0x1025860, Func Offset: 0x1f0
	// Line 279, Address: 0x1025884, Func Offset: 0x214
	// Line 281, Address: 0x1025894, Func Offset: 0x224
	// Line 283, Address: 0x102589c, Func Offset: 0x22c
	// Line 284, Address: 0x10258b0, Func Offset: 0x240
	// Line 285, Address: 0x10258bc, Func Offset: 0x24c
	// Line 287, Address: 0x10258c4, Func Offset: 0x254
	// Line 290, Address: 0x10258c8, Func Offset: 0x258
	// Line 291, Address: 0x10258ec, Func Offset: 0x27c
	// Line 294, Address: 0x10258fc, Func Offset: 0x28c
	// Line 297, Address: 0x1025904, Func Offset: 0x294
	// Line 299, Address: 0x1025910, Func Offset: 0x2a0
	// Line 300, Address: 0x1025914, Func Offset: 0x2a4
	// Line 301, Address: 0x102592c, Func Offset: 0x2bc
	// Line 302, Address: 0x1025944, Func Offset: 0x2d4
	// Line 303, Address: 0x102595c, Func Offset: 0x2ec
	// Line 306, Address: 0x1025974, Func Offset: 0x304
	// Func End, Address: 0x1025990, Func Offset: 0x320
}

// 
// Start address: 0x1025990
void scrbinit(short yWk)
{
	_anon8 data;
	int i;
	// Line 310, Address: 0x1025990, Func Offset: 0
	// Line 314, Address: 0x102599c, Func Offset: 0xc
	// Line 315, Address: 0x10259a0, Func Offset: 0x10
	// Line 316, Address: 0x10259ac, Func Offset: 0x1c
	// Line 318, Address: 0x10259b8, Func Offset: 0x28
	// Line 319, Address: 0x10259c4, Func Offset: 0x34
	// Line 320, Address: 0x10259cc, Func Offset: 0x3c
	// Line 321, Address: 0x10259d8, Func Offset: 0x48
	// Line 323, Address: 0x10259e4, Func Offset: 0x54
	// Line 324, Address: 0x1025a08, Func Offset: 0x78
	// Line 325, Address: 0x1025a34, Func Offset: 0xa4
	// Line 326, Address: 0x1025a60, Func Offset: 0xd0
	// Line 328, Address: 0x1025a6c, Func Offset: 0xdc
	// Line 329, Address: 0x1025a80, Func Offset: 0xf0
	// Line 330, Address: 0x1025a90, Func Offset: 0x100
	// Func End, Address: 0x1025aa0, Func Offset: 0x110
}

// 
// Start address: 0x1025aa0
void scroll()
{
	_anon8 data;
	_anon2 temp1;
	_anon2 temp2;
	int hsCount;
	int i;
	// Line 334, Address: 0x1025aa0, Func Offset: 0
	// Line 340, Address: 0x1025ab0, Func Offset: 0x10
	// Line 344, Address: 0x1025ac0, Func Offset: 0x20
	// Line 345, Address: 0x1025ac8, Func Offset: 0x28
	// Line 346, Address: 0x1025ad0, Func Offset: 0x30
	// Line 347, Address: 0x1025ad8, Func Offset: 0x38
	// Line 349, Address: 0x1025ae0, Func Offset: 0x40
	// Line 350, Address: 0x1025ae8, Func Offset: 0x48
	// Line 351, Address: 0x1025af0, Func Offset: 0x50
	// Line 353, Address: 0x1025af8, Func Offset: 0x58
	// Line 354, Address: 0x1025b08, Func Offset: 0x68
	// Line 358, Address: 0x1025b18, Func Offset: 0x78
	// Line 359, Address: 0x1025b48, Func Offset: 0xa8
	// Line 360, Address: 0x1025b60, Func Offset: 0xc0
	// Line 362, Address: 0x1025b70, Func Offset: 0xd0
	// Line 363, Address: 0x1025b80, Func Offset: 0xe0
	// Line 364, Address: 0x1025b90, Func Offset: 0xf0
	// Line 366, Address: 0x1025ba0, Func Offset: 0x100
	// Line 367, Address: 0x1025bd4, Func Offset: 0x134
	// Line 368, Address: 0x1025bdc, Func Offset: 0x13c
	// Line 369, Address: 0x1025be4, Func Offset: 0x144
	// Line 371, Address: 0x1025be8, Func Offset: 0x148
	// Line 374, Address: 0x1025bf4, Func Offset: 0x154
	// Line 375, Address: 0x1025c24, Func Offset: 0x184
	// Line 376, Address: 0x1025c28, Func Offset: 0x188
	// Line 378, Address: 0x1025c38, Func Offset: 0x198
	// Line 379, Address: 0x1025c54, Func Offset: 0x1b4
	// Line 380, Address: 0x1025c78, Func Offset: 0x1d8
	// Line 381, Address: 0x1025c84, Func Offset: 0x1e4
	// Line 382, Address: 0x1025c90, Func Offset: 0x1f0
	// Line 384, Address: 0x1025c9c, Func Offset: 0x1fc
	// Line 386, Address: 0x1025cec, Func Offset: 0x24c
	// Func End, Address: 0x1025d04, Func Offset: 0x264
}

// 
// Start address: 0x1025d10
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	_anon6 data1;
	_anon6 data2;
	short avp;
	int i;
	// Line 424, Address: 0x1025d10, Func Offset: 0
	// Line 431, Address: 0x1025d2c, Func Offset: 0x1c
	// Line 432, Address: 0x1025d34, Func Offset: 0x24
	// Line 433, Address: 0x1025d40, Func Offset: 0x30
	// Line 434, Address: 0x1025d4c, Func Offset: 0x3c
	// Line 435, Address: 0x1025d60, Func Offset: 0x50
	// Line 436, Address: 0x1025d74, Func Offset: 0x64
	// Line 437, Address: 0x1025d78, Func Offset: 0x68
	// Line 438, Address: 0x1025d8c, Func Offset: 0x7c
	// Line 440, Address: 0x1025d90, Func Offset: 0x80
	// Line 441, Address: 0x1025d9c, Func Offset: 0x8c
	// Line 442, Address: 0x1025dc4, Func Offset: 0xb4
	// Line 443, Address: 0x1025dd4, Func Offset: 0xc4
	// Line 447, Address: 0x1025dd8, Func Offset: 0xc8
	// Line 452, Address: 0x1025dfc, Func Offset: 0xec
	// Line 453, Address: 0x1025e04, Func Offset: 0xf4
	// Line 454, Address: 0x1025e54, Func Offset: 0x144
	// Line 455, Address: 0x1025e58, Func Offset: 0x148
	// Line 456, Address: 0x1025e64, Func Offset: 0x154
	// Line 457, Address: 0x1025e70, Func Offset: 0x160
	// Line 458, Address: 0x1025e7c, Func Offset: 0x16c
	// Line 460, Address: 0x1025e94, Func Offset: 0x184
	// Line 461, Address: 0x1025e98, Func Offset: 0x188
	// Line 463, Address: 0x1025ec0, Func Offset: 0x1b0
	// Line 465, Address: 0x1025ecc, Func Offset: 0x1bc
	// Line 467, Address: 0x1025ed4, Func Offset: 0x1c4
	// Line 468, Address: 0x1025edc, Func Offset: 0x1cc
	// Line 469, Address: 0x1025ee0, Func Offset: 0x1d0
	// Line 470, Address: 0x1025eec, Func Offset: 0x1dc
	// Line 471, Address: 0x1025ef8, Func Offset: 0x1e8
	// Line 472, Address: 0x1025f04, Func Offset: 0x1f4
	// Line 473, Address: 0x1025f10, Func Offset: 0x200
	// Line 475, Address: 0x1025f28, Func Offset: 0x218
	// Line 476, Address: 0x1025f2c, Func Offset: 0x21c
	// Line 478, Address: 0x1025f54, Func Offset: 0x244
	// Line 480, Address: 0x1025f60, Func Offset: 0x250
	// Func End, Address: 0x1025f78, Func Offset: 0x268
}

// 
// Start address: 0x1025f80
void scroll_h()
{
	unsigned short wD4;
	// Line 492, Address: 0x1025f80, Func Offset: 0
	// Line 495, Address: 0x1025f8c, Func Offset: 0xc
	// Line 496, Address: 0x1025f98, Func Offset: 0x18
	// Line 497, Address: 0x1025fa0, Func Offset: 0x20
	// Line 498, Address: 0x1025fd4, Func Offset: 0x54
	// Line 499, Address: 0x1025fe8, Func Offset: 0x68
	// Line 500, Address: 0x1026014, Func Offset: 0x94
	// Line 501, Address: 0x1026028, Func Offset: 0xa8
	// Line 504, Address: 0x1026030, Func Offset: 0xb0
	// Line 509, Address: 0x1026044, Func Offset: 0xc4
	// Func End, Address: 0x1026058, Func Offset: 0xd8
}

// 
// Start address: 0x1026060
void scrh_move()
{
	unsigned short wD0;
	// Line 511, Address: 0x1026060, Func Offset: 0
	// Line 514, Address: 0x102606c, Func Offset: 0xc
	// Line 515, Address: 0x1026078, Func Offset: 0x18
	// Line 516, Address: 0x102608c, Func Offset: 0x2c
	// Line 517, Address: 0x10260a0, Func Offset: 0x40
	// Line 519, Address: 0x10260ac, Func Offset: 0x4c
	// Line 520, Address: 0x10260b4, Func Offset: 0x54
	// Line 521, Address: 0x10260bc, Func Offset: 0x5c
	// Line 522, Address: 0x10260d4, Func Offset: 0x74
	// Line 523, Address: 0x10260e0, Func Offset: 0x80
	// Line 525, Address: 0x10260e8, Func Offset: 0x88
	// Line 528, Address: 0x10260f4, Func Offset: 0x94
	// Func End, Address: 0x1026108, Func Offset: 0xa8
}

// 
// Start address: 0x1026110
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 531, Address: 0x1026110, Func Offset: 0
	// Line 534, Address: 0x102611c, Func Offset: 0xc
	// Line 535, Address: 0x102613c, Func Offset: 0x2c
	// Line 538, Address: 0x1026144, Func Offset: 0x34
	// Line 539, Address: 0x102615c, Func Offset: 0x4c
	// Line 540, Address: 0x102618c, Func Offset: 0x7c
	// Line 543, Address: 0x1026198, Func Offset: 0x88
	// Line 544, Address: 0x10261a0, Func Offset: 0x90
	// Line 545, Address: 0x10261b4, Func Offset: 0xa4
	// Line 546, Address: 0x10261e4, Func Offset: 0xd4
	// Line 547, Address: 0x10261f0, Func Offset: 0xe0
	// Line 549, Address: 0x10261f8, Func Offset: 0xe8
	// Func End, Address: 0x1026208, Func Offset: 0xf8
}

// 
// Start address: 0x1026210
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 552, Address: 0x1026210, Func Offset: 0
	// Line 555, Address: 0x102621c, Func Offset: 0xc
	// Line 556, Address: 0x102623c, Func Offset: 0x2c
	// Line 559, Address: 0x1026244, Func Offset: 0x34
	// Line 560, Address: 0x102625c, Func Offset: 0x4c
	// Line 561, Address: 0x102628c, Func Offset: 0x7c
	// Line 564, Address: 0x1026298, Func Offset: 0x88
	// Line 565, Address: 0x10262a0, Func Offset: 0x90
	// Line 566, Address: 0x10262b4, Func Offset: 0xa4
	// Line 567, Address: 0x10262e4, Func Offset: 0xd4
	// Line 568, Address: 0x10262f0, Func Offset: 0xe0
	// Line 570, Address: 0x10262f8, Func Offset: 0xe8
	// Func End, Address: 0x1026308, Func Offset: 0xf8
}

// 
// Start address: 0x1026310
void scroll_v()
{
	unsigned short wD0;
	// Line 589, Address: 0x1026310, Func Offset: 0
	// Line 592, Address: 0x102631c, Func Offset: 0xc
	// Line 593, Address: 0x1026348, Func Offset: 0x38
	// Line 594, Address: 0x1026360, Func Offset: 0x50
	// Line 597, Address: 0x1026368, Func Offset: 0x58
	// Line 598, Address: 0x1026380, Func Offset: 0x70
	// Line 599, Address: 0x1026388, Func Offset: 0x78
	// Line 600, Address: 0x10263a8, Func Offset: 0x98
	// Line 601, Address: 0x10263bc, Func Offset: 0xac
	// Line 602, Address: 0x10263c8, Func Offset: 0xb8
	// Line 604, Address: 0x10263d0, Func Offset: 0xc0
	// Line 605, Address: 0x10263e4, Func Offset: 0xd4
	// Line 606, Address: 0x10263f4, Func Offset: 0xe4
	// Line 607, Address: 0x10263fc, Func Offset: 0xec
	// Line 608, Address: 0x1026408, Func Offset: 0xf8
	// Line 610, Address: 0x1026410, Func Offset: 0x100
	// Line 611, Address: 0x1026418, Func Offset: 0x108
	// Line 612, Address: 0x102642c, Func Offset: 0x11c
	// Line 613, Address: 0x1026434, Func Offset: 0x124
	// Line 619, Address: 0x102643c, Func Offset: 0x12c
	// Line 620, Address: 0x1026450, Func Offset: 0x140
	// Line 621, Address: 0x1026458, Func Offset: 0x148
	// Line 622, Address: 0x1026464, Func Offset: 0x154
	// Line 624, Address: 0x102646c, Func Offset: 0x15c
	// Line 625, Address: 0x1026480, Func Offset: 0x170
	// Line 626, Address: 0x1026488, Func Offset: 0x178
	// Line 631, Address: 0x1026490, Func Offset: 0x180
	// Line 633, Address: 0x1026498, Func Offset: 0x188
	// Func End, Address: 0x10264ac, Func Offset: 0x19c
}

// 
// Start address: 0x10264b0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 639, Address: 0x10264b0, Func Offset: 0
	// Line 642, Address: 0x10264c0, Func Offset: 0x10
	// Line 643, Address: 0x10264dc, Func Offset: 0x2c
	// Line 644, Address: 0x10264e8, Func Offset: 0x38
	// Line 647, Address: 0x10264f0, Func Offset: 0x40
	// Line 648, Address: 0x10264fc, Func Offset: 0x4c
	// Line 649, Address: 0x1026514, Func Offset: 0x64
	// Line 652, Address: 0x1026530, Func Offset: 0x80
	// Line 653, Address: 0x1026540, Func Offset: 0x90
	// Line 654, Address: 0x102654c, Func Offset: 0x9c
	// Line 656, Address: 0x1026554, Func Offset: 0xa4
	// Line 657, Address: 0x1026574, Func Offset: 0xc4
	// Line 658, Address: 0x1026580, Func Offset: 0xd0
	// Line 659, Address: 0x1026588, Func Offset: 0xd8
	// Line 660, Address: 0x10265a8, Func Offset: 0xf8
	// Line 661, Address: 0x10265b4, Func Offset: 0x104
	// Line 663, Address: 0x10265bc, Func Offset: 0x10c
	// Line 667, Address: 0x10265c8, Func Offset: 0x118
	// Func End, Address: 0x10265dc, Func Offset: 0x12c
}

// 
// Start address: 0x10265e0
void sv_move_main1(unsigned short wD0)
{
	// Line 671, Address: 0x10265e0, Func Offset: 0
	// Line 673, Address: 0x10265ec, Func Offset: 0xc
	// Line 674, Address: 0x102660c, Func Offset: 0x2c
	// Line 675, Address: 0x1026618, Func Offset: 0x38
	// Line 676, Address: 0x1026620, Func Offset: 0x40
	// Line 677, Address: 0x1026640, Func Offset: 0x60
	// Line 678, Address: 0x102664c, Func Offset: 0x6c
	// Line 680, Address: 0x1026654, Func Offset: 0x74
	// Line 683, Address: 0x1026660, Func Offset: 0x80
	// Func End, Address: 0x1026670, Func Offset: 0x90
}

// 
// Start address: 0x1026670
void sv_move_main2(unsigned short wD0)
{
	// Line 686, Address: 0x1026670, Func Offset: 0
	// Line 688, Address: 0x102667c, Func Offset: 0xc
	// Line 689, Address: 0x102669c, Func Offset: 0x2c
	// Line 690, Address: 0x10266a8, Func Offset: 0x38
	// Line 691, Address: 0x10266b0, Func Offset: 0x40
	// Line 692, Address: 0x10266d0, Func Offset: 0x60
	// Line 693, Address: 0x10266dc, Func Offset: 0x6c
	// Line 695, Address: 0x10266e4, Func Offset: 0x74
	// Line 698, Address: 0x10266f0, Func Offset: 0x80
	// Func End, Address: 0x1026700, Func Offset: 0x90
}

// 
// Start address: 0x1026700
void sv_move_sub2()
{
	// Line 701, Address: 0x1026700, Func Offset: 0
	// Line 702, Address: 0x1026708, Func Offset: 0x8
	// Line 703, Address: 0x1026710, Func Offset: 0x10
	// Line 704, Address: 0x102671c, Func Offset: 0x1c
	// Func End, Address: 0x102672c, Func Offset: 0x2c
}

// 
// Start address: 0x1026730
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 707, Address: 0x1026730, Func Offset: 0
	// Line 710, Address: 0x102673c, Func Offset: 0xc
	// Line 711, Address: 0x1026740, Func Offset: 0x10
	// Line 712, Address: 0x1026748, Func Offset: 0x18
	// Line 713, Address: 0x1026764, Func Offset: 0x34
	// Line 714, Address: 0x1026780, Func Offset: 0x50
	// Line 715, Address: 0x102678c, Func Offset: 0x5c
	// Line 717, Address: 0x1026794, Func Offset: 0x64
	// Line 720, Address: 0x10267a0, Func Offset: 0x70
	// Func End, Address: 0x10267b0, Func Offset: 0x80
}

// 
// Start address: 0x10267b0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 725, Address: 0x10267b0, Func Offset: 0
	// Line 729, Address: 0x10267c0, Func Offset: 0x10
	// Line 730, Address: 0x10267dc, Func Offset: 0x2c
	// Line 731, Address: 0x10267e8, Func Offset: 0x38
	// Line 733, Address: 0x10267fc, Func Offset: 0x4c
	// Line 734, Address: 0x1026804, Func Offset: 0x54
	// Line 735, Address: 0x102680c, Func Offset: 0x5c
	// Line 736, Address: 0x1026810, Func Offset: 0x60
	// Line 737, Address: 0x102681c, Func Offset: 0x6c
	// Func End, Address: 0x1026830, Func Offset: 0x80
}

// 
// Start address: 0x1026830
void scrv_up_ch(_anon2 lD1)
{
	// Line 741, Address: 0x1026830, Func Offset: 0
	// Line 742, Address: 0x102683c, Func Offset: 0xc
	// Line 743, Address: 0x1026864, Func Offset: 0x34
	// Line 744, Address: 0x102687c, Func Offset: 0x4c
	// Line 745, Address: 0x1026888, Func Offset: 0x58
	// Line 746, Address: 0x102689c, Func Offset: 0x6c
	// Line 747, Address: 0x10268b0, Func Offset: 0x80
	// Line 748, Address: 0x10268c4, Func Offset: 0x94
	// Line 751, Address: 0x10268cc, Func Offset: 0x9c
	// Line 754, Address: 0x10268d8, Func Offset: 0xa8
	// Line 756, Address: 0x10268e4, Func Offset: 0xb4
	// Func End, Address: 0x10268f4, Func Offset: 0xc4
}

// 
// Start address: 0x1026900
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 762, Address: 0x1026900, Func Offset: 0
	// Line 766, Address: 0x1026910, Func Offset: 0x10
	// Line 767, Address: 0x1026914, Func Offset: 0x14
	// Line 768, Address: 0x102691c, Func Offset: 0x1c
	// Line 769, Address: 0x1026928, Func Offset: 0x28
	// Line 771, Address: 0x102693c, Func Offset: 0x3c
	// Line 772, Address: 0x1026944, Func Offset: 0x44
	// Line 773, Address: 0x102694c, Func Offset: 0x4c
	// Line 775, Address: 0x1026950, Func Offset: 0x50
	// Line 777, Address: 0x102695c, Func Offset: 0x5c
	// Func End, Address: 0x1026970, Func Offset: 0x70
}

// 
// Start address: 0x1026970
void scrv_down_ch(_anon2 lD1)
{
	// Line 781, Address: 0x1026970, Func Offset: 0
	// Line 782, Address: 0x102697c, Func Offset: 0xc
	// Line 783, Address: 0x10269a4, Func Offset: 0x34
	// Line 784, Address: 0x10269b0, Func Offset: 0x40
	// Line 785, Address: 0x10269c4, Func Offset: 0x54
	// Line 786, Address: 0x10269d8, Func Offset: 0x68
	// Line 787, Address: 0x10269ec, Func Offset: 0x7c
	// Line 788, Address: 0x1026a00, Func Offset: 0x90
	// Line 790, Address: 0x1026a08, Func Offset: 0x98
	// Line 793, Address: 0x1026a14, Func Offset: 0xa4
	// Line 795, Address: 0x1026a20, Func Offset: 0xb0
	// Func End, Address: 0x1026a30, Func Offset: 0xc0
}

// 
// Start address: 0x1026a30
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 798, Address: 0x1026a30, Func Offset: 0
	// Line 801, Address: 0x1026a40, Func Offset: 0x10
	// Line 803, Address: 0x1026a4c, Func Offset: 0x1c
	// Line 804, Address: 0x1026a54, Func Offset: 0x24
	// Line 805, Address: 0x1026a5c, Func Offset: 0x2c
	// Line 807, Address: 0x1026a60, Func Offset: 0x30
	// Line 808, Address: 0x1026a88, Func Offset: 0x58
	// Line 811, Address: 0x1026a94, Func Offset: 0x64
	// Line 812, Address: 0x1026ac8, Func Offset: 0x98
	// Line 813, Address: 0x1026adc, Func Offset: 0xac
	// Line 815, Address: 0x1026b08, Func Offset: 0xd8
	// Line 816, Address: 0x1026b1c, Func Offset: 0xec
	// Line 818, Address: 0x1026b24, Func Offset: 0xf4
	// Line 823, Address: 0x1026b38, Func Offset: 0x108
	// Func End, Address: 0x1026b4c, Func Offset: 0x11c
}

// 
// Start address: 0x1026b50
void scrollb_hv(_anon2* lD4, _anon2* lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 827, Address: 0x1026b50, Func Offset: 0
	// Line 830, Address: 0x1026b5c, Func Offset: 0xc
	// Line 831, Address: 0x1026b6c, Func Offset: 0x1c
	// Line 832, Address: 0x1026b80, Func Offset: 0x30
	// Line 834, Address: 0x1026b8c, Func Offset: 0x3c
	// Line 836, Address: 0x1026bc0, Func Offset: 0x70
	// Line 837, Address: 0x1026bd4, Func Offset: 0x84
	// Line 838, Address: 0x1026be4, Func Offset: 0x94
	// Line 839, Address: 0x1026bf8, Func Offset: 0xa8
	// Line 840, Address: 0x1026c0c, Func Offset: 0xbc
	// Line 843, Address: 0x1026c14, Func Offset: 0xc4
	// Line 848, Address: 0x1026c28, Func Offset: 0xd8
	// Line 849, Address: 0x1026c38, Func Offset: 0xe8
	// Line 850, Address: 0x1026c4c, Func Offset: 0xfc
	// Line 851, Address: 0x1026c64, Func Offset: 0x114
	// Line 853, Address: 0x1026c70, Func Offset: 0x120
	// Line 855, Address: 0x1026ca4, Func Offset: 0x154
	// Line 856, Address: 0x1026cb8, Func Offset: 0x168
	// Line 857, Address: 0x1026cc8, Func Offset: 0x178
	// Line 858, Address: 0x1026cdc, Func Offset: 0x18c
	// Line 859, Address: 0x1026cf0, Func Offset: 0x1a0
	// Line 862, Address: 0x1026cf8, Func Offset: 0x1a8
	// Line 867, Address: 0x1026d0c, Func Offset: 0x1bc
	// Func End, Address: 0x1026d18, Func Offset: 0x1c8
}

// 
// Start address: 0x1026d20
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 874, Address: 0x1026d20, Func Offset: 0
	// Line 877, Address: 0x1026d2c, Func Offset: 0xc
	// Line 878, Address: 0x1026d38, Func Offset: 0x18
	// Line 880, Address: 0x1026d44, Func Offset: 0x24
	// Line 881, Address: 0x1026d70, Func Offset: 0x50
	// Line 882, Address: 0x1026d84, Func Offset: 0x64
	// Line 883, Address: 0x1026db4, Func Offset: 0x94
	// Line 884, Address: 0x1026dc8, Func Offset: 0xa8
	// Line 887, Address: 0x1026dd0, Func Offset: 0xb0
	// Line 892, Address: 0x1026de4, Func Offset: 0xc4
	// Func End, Address: 0x1026df4, Func Offset: 0xd4
}

// 
// Start address: 0x1026e00
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 896, Address: 0x1026e00, Func Offset: 0
	// Line 900, Address: 0x1026e10, Func Offset: 0x10
	// Line 901, Address: 0x1026e1c, Func Offset: 0x1c
	// Line 902, Address: 0x1026e2c, Func Offset: 0x2c
	// Line 904, Address: 0x1026e38, Func Offset: 0x38
	// Line 905, Address: 0x1026e40, Func Offset: 0x40
	// Line 906, Address: 0x1026e48, Func Offset: 0x48
	// Line 908, Address: 0x1026e54, Func Offset: 0x54
	// Line 909, Address: 0x1026e60, Func Offset: 0x60
	// Line 910, Address: 0x1026e74, Func Offset: 0x74
	// Line 911, Address: 0x1026e80, Func Offset: 0x80
	// Line 912, Address: 0x1026e94, Func Offset: 0x94
	// Line 913, Address: 0x1026ea4, Func Offset: 0xa4
	// Line 914, Address: 0x1026eb8, Func Offset: 0xb8
	// Line 915, Address: 0x1026ed4, Func Offset: 0xd4
	// Line 918, Address: 0x1026edc, Func Offset: 0xdc
	// Line 923, Address: 0x1026efc, Func Offset: 0xfc
	// Func End, Address: 0x1026f0c, Func Offset: 0x10c
}

// 
// Start address: 0x1026f10
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 926, Address: 0x1026f10, Func Offset: 0
	// Line 930, Address: 0x1026f20, Func Offset: 0x10
	// Line 931, Address: 0x1026f2c, Func Offset: 0x1c
	// Line 932, Address: 0x1026f3c, Func Offset: 0x2c
	// Line 934, Address: 0x1026f48, Func Offset: 0x38
	// Line 935, Address: 0x1026f50, Func Offset: 0x40
	// Line 936, Address: 0x1026f58, Func Offset: 0x48
	// Line 938, Address: 0x1026f64, Func Offset: 0x54
	// Line 939, Address: 0x1026f70, Func Offset: 0x60
	// Line 940, Address: 0x1026f84, Func Offset: 0x74
	// Line 941, Address: 0x1026f90, Func Offset: 0x80
	// Line 942, Address: 0x1026fa4, Func Offset: 0x94
	// Line 943, Address: 0x1026fb4, Func Offset: 0xa4
	// Line 944, Address: 0x1026fc8, Func Offset: 0xb8
	// Line 945, Address: 0x1026fe4, Func Offset: 0xd4
	// Line 948, Address: 0x1026fec, Func Offset: 0xdc
	// Line 953, Address: 0x102700c, Func Offset: 0xfc
	// Func End, Address: 0x102701c, Func Offset: 0x10c
}

// 
// Start address: 0x1027020
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 965, Address: 0x1027020, Func Offset: 0
	// Line 969, Address: 0x1027030, Func Offset: 0x10
	// Line 970, Address: 0x102703c, Func Offset: 0x1c
	// Line 971, Address: 0x102704c, Func Offset: 0x2c
	// Line 973, Address: 0x1027058, Func Offset: 0x38
	// Line 974, Address: 0x1027060, Func Offset: 0x40
	// Line 975, Address: 0x1027068, Func Offset: 0x48
	// Line 977, Address: 0x1027074, Func Offset: 0x54
	// Line 978, Address: 0x1027080, Func Offset: 0x60
	// Line 979, Address: 0x1027094, Func Offset: 0x74
	// Line 980, Address: 0x10270a0, Func Offset: 0x80
	// Line 981, Address: 0x10270b4, Func Offset: 0x94
	// Line 982, Address: 0x10270c4, Func Offset: 0xa4
	// Line 983, Address: 0x10270d8, Func Offset: 0xb8
	// Line 984, Address: 0x10270f4, Func Offset: 0xd4
	// Line 987, Address: 0x10270fc, Func Offset: 0xdc
	// Line 992, Address: 0x102711c, Func Offset: 0xfc
	// Func End, Address: 0x102712c, Func Offset: 0x10c
}

// 
// Start address: 0x1027130
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1006, Address: 0x1027130, Func Offset: 0
	// Line 1012, Address: 0x102714c, Func Offset: 0x1c
	// Line 1013, Address: 0x1027150, Func Offset: 0x20
	// Line 1014, Address: 0x102715c, Func Offset: 0x2c
	// Line 1015, Address: 0x1027168, Func Offset: 0x38
	// Line 1016, Address: 0x1027170, Func Offset: 0x40
	// Line 1017, Address: 0x1027178, Func Offset: 0x48
	// Line 1019, Address: 0x1027194, Func Offset: 0x64
	// Line 1020, Address: 0x10271a0, Func Offset: 0x70
	// Line 1021, Address: 0x10271ac, Func Offset: 0x7c
	// Line 1022, Address: 0x10271b4, Func Offset: 0x84
	// Line 1024, Address: 0x10271bc, Func Offset: 0x8c
	// Func End, Address: 0x10271e0, Func Offset: 0xb0
}

// 
// Start address: 0x10271e0
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
	// Line 1037, Address: 0x10271e0, Func Offset: 0
	// Line 1046, Address: 0x1027200, Func Offset: 0x20
	// Line 1047, Address: 0x1027204, Func Offset: 0x24
	// Line 1048, Address: 0x1027210, Func Offset: 0x30
	// Line 1049, Address: 0x102721c, Func Offset: 0x3c
	// Line 1050, Address: 0x1027224, Func Offset: 0x44
	// Line 1051, Address: 0x102722c, Func Offset: 0x4c
	// Line 1053, Address: 0x1027248, Func Offset: 0x68
	// Line 1054, Address: 0x102724c, Func Offset: 0x6c
	// Line 1055, Address: 0x1027258, Func Offset: 0x78
	// Line 1056, Address: 0x1027264, Func Offset: 0x84
	// Line 1057, Address: 0x102726c, Func Offset: 0x8c
	// Line 1059, Address: 0x1027274, Func Offset: 0x94
	// Line 1060, Address: 0x1027280, Func Offset: 0xa0
	// Line 1061, Address: 0x1027294, Func Offset: 0xb4
	// Line 1063, Address: 0x10272a0, Func Offset: 0xc0
	// Line 1064, Address: 0x10272a8, Func Offset: 0xc8
	// Line 1066, Address: 0x10272b0, Func Offset: 0xd0
	// Line 1068, Address: 0x10272d0, Func Offset: 0xf0
	// Line 1074, Address: 0x10272fc, Func Offset: 0x11c
	// Line 1075, Address: 0x1027310, Func Offset: 0x130
	// Line 1077, Address: 0x102731c, Func Offset: 0x13c
	// Line 1078, Address: 0x1027324, Func Offset: 0x144
	// Line 1079, Address: 0x102732c, Func Offset: 0x14c
	// Line 1081, Address: 0x102734c, Func Offset: 0x16c
	// Line 1087, Address: 0x1027378, Func Offset: 0x198
	// Line 1088, Address: 0x102738c, Func Offset: 0x1ac
	// Line 1090, Address: 0x1027398, Func Offset: 0x1b8
	// Line 1091, Address: 0x10273a0, Func Offset: 0x1c0
	// Line 1092, Address: 0x10273a8, Func Offset: 0x1c8
	// Line 1094, Address: 0x10273c8, Func Offset: 0x1e8
	// Line 1100, Address: 0x10273f4, Func Offset: 0x214
	// Line 1101, Address: 0x1027408, Func Offset: 0x228
	// Line 1103, Address: 0x1027414, Func Offset: 0x234
	// Line 1104, Address: 0x102741c, Func Offset: 0x23c
	// Line 1105, Address: 0x1027424, Func Offset: 0x244
	// Line 1107, Address: 0x1027444, Func Offset: 0x264
	// Line 1116, Address: 0x1027470, Func Offset: 0x290
	// Func End, Address: 0x1027498, Func Offset: 0x2b8
}

// 
// Start address: 0x10274a0
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw)
{
	tagPOINT TilePoint;
	_anon2 lD4;
	unsigned short wD5;
	// Line 1133, Address: 0x10274a0, Func Offset: 0
	// Line 1138, Address: 0x10274c0, Func Offset: 0x20
	// Line 1139, Address: 0x10274d0, Func Offset: 0x30
	// Line 1140, Address: 0x10274e8, Func Offset: 0x48
	// Line 1142, Address: 0x10274fc, Func Offset: 0x5c
	// Line 1143, Address: 0x1027504, Func Offset: 0x64
	// Line 1145, Address: 0x102750c, Func Offset: 0x6c
	// Line 1147, Address: 0x102752c, Func Offset: 0x8c
	// Line 1153, Address: 0x1027558, Func Offset: 0xb8
	// Line 1154, Address: 0x1027570, Func Offset: 0xd0
	// Line 1156, Address: 0x1027584, Func Offset: 0xe4
	// Line 1157, Address: 0x102758c, Func Offset: 0xec
	// Line 1158, Address: 0x1027594, Func Offset: 0xf4
	// Line 1160, Address: 0x10275b4, Func Offset: 0x114
	// Line 1166, Address: 0x10275e0, Func Offset: 0x140
	// Line 1167, Address: 0x10275f8, Func Offset: 0x158
	// Line 1169, Address: 0x102760c, Func Offset: 0x16c
	// Line 1170, Address: 0x1027614, Func Offset: 0x174
	// Line 1171, Address: 0x102761c, Func Offset: 0x17c
	// Line 1173, Address: 0x102763c, Func Offset: 0x19c
	// Line 1179, Address: 0x1027668, Func Offset: 0x1c8
	// Line 1180, Address: 0x1027680, Func Offset: 0x1e0
	// Line 1182, Address: 0x1027694, Func Offset: 0x1f4
	// Line 1183, Address: 0x102769c, Func Offset: 0x1fc
	// Line 1184, Address: 0x10276a4, Func Offset: 0x204
	// Line 1186, Address: 0x10276c4, Func Offset: 0x224
	// Line 1195, Address: 0x10276f0, Func Offset: 0x250
	// Func End, Address: 0x1027704, Func Offset: 0x264
}

// 
// Start address: 0x1027710
void scrollwrtc()
{
	// Line 1202, Address: 0x1027710, Func Offset: 0
	// Func End, Address: 0x1027718, Func Offset: 0x8
}

// 
// Start address: 0x1027720
void scrollwrtz()
{
	// Line 1207, Address: 0x1027720, Func Offset: 0
	// Func End, Address: 0x1027728, Func Offset: 0x8
}

// 
// Start address: 0x1027730
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1225, Address: 0x1027730, Func Offset: 0
	// Line 1238, Address: 0x1027758, Func Offset: 0x28
	// Line 1241, Address: 0x1027778, Func Offset: 0x48
	// Line 1242, Address: 0x102778c, Func Offset: 0x5c
	// Line 1243, Address: 0x10277a0, Func Offset: 0x70
	// Line 1244, Address: 0x10277b4, Func Offset: 0x84
	// Line 1246, Address: 0x10277c8, Func Offset: 0x98
	// Line 1247, Address: 0x10277d4, Func Offset: 0xa4
	// Line 1248, Address: 0x10277e8, Func Offset: 0xb8
	// Func End, Address: 0x10277f8, Func Offset: 0xc8
}

// 
// Start address: 0x1027800
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1252, Address: 0x1027800, Func Offset: 0
	// Line 1256, Address: 0x1027828, Func Offset: 0x28
	// Line 1259, Address: 0x1027848, Func Offset: 0x48
	// Line 1260, Address: 0x102785c, Func Offset: 0x5c
	// Line 1261, Address: 0x1027870, Func Offset: 0x70
	// Line 1262, Address: 0x1027884, Func Offset: 0x84
	// Line 1264, Address: 0x1027898, Func Offset: 0x98
	// Line 1265, Address: 0x10278a4, Func Offset: 0xa4
	// Line 1266, Address: 0x10278b8, Func Offset: 0xb8
	// Func End, Address: 0x10278c8, Func Offset: 0xc8
}

// 
// Start address: 0x10278d0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1286, Address: 0x10278d0, Func Offset: 0
	// Line 1290, Address: 0x10278f8, Func Offset: 0x28
	// Line 1293, Address: 0x1027918, Func Offset: 0x48
	// Line 1294, Address: 0x102792c, Func Offset: 0x5c
	// Line 1295, Address: 0x102793c, Func Offset: 0x6c
	// Line 1296, Address: 0x1027950, Func Offset: 0x80
	// Line 1298, Address: 0x1027960, Func Offset: 0x90
	// Line 1299, Address: 0x102796c, Func Offset: 0x9c
	// Line 1300, Address: 0x1027980, Func Offset: 0xb0
	// Func End, Address: 0x1027990, Func Offset: 0xc0
}

// 
// Start address: 0x1027990
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
	// Line 1319, Address: 0x1027990, Func Offset: 0
	// Line 1320, Address: 0x10279c4, Func Offset: 0x34
	// Line 1325, Address: 0x10279c8, Func Offset: 0x38
	// Line 1327, Address: 0x10279d8, Func Offset: 0x48
	// Line 1328, Address: 0x10279dc, Func Offset: 0x4c
	// Line 1329, Address: 0x10279e4, Func Offset: 0x54
	// Line 1331, Address: 0x10279f4, Func Offset: 0x64
	// Line 1333, Address: 0x10279f8, Func Offset: 0x68
	// Line 1334, Address: 0x1027a00, Func Offset: 0x70
	// Line 1337, Address: 0x1027a08, Func Offset: 0x78
	// Line 1338, Address: 0x1027a10, Func Offset: 0x80
	// Line 1339, Address: 0x1027a1c, Func Offset: 0x8c
	// Line 1341, Address: 0x1027a28, Func Offset: 0x98
	// Line 1342, Address: 0x1027a30, Func Offset: 0xa0
	// Line 1343, Address: 0x1027a38, Func Offset: 0xa8
	// Line 1344, Address: 0x1027a40, Func Offset: 0xb0
	// Line 1346, Address: 0x1027a4c, Func Offset: 0xbc
	// Line 1347, Address: 0x1027a54, Func Offset: 0xc4
	// Line 1348, Address: 0x1027a5c, Func Offset: 0xcc
	// Line 1349, Address: 0x1027a64, Func Offset: 0xd4
	// Line 1351, Address: 0x1027a70, Func Offset: 0xe0
	// Line 1352, Address: 0x1027a78, Func Offset: 0xe8
	// Line 1353, Address: 0x1027a80, Func Offset: 0xf0
	// Line 1356, Address: 0x1027a88, Func Offset: 0xf8
	// Line 1357, Address: 0x1027a90, Func Offset: 0x100
	// Line 1360, Address: 0x1027a98, Func Offset: 0x108
	// Line 1361, Address: 0x1027adc, Func Offset: 0x14c
	// Line 1362, Address: 0x1027b20, Func Offset: 0x190
	// Line 1363, Address: 0x1027b64, Func Offset: 0x1d4
	// Line 1365, Address: 0x1027ba8, Func Offset: 0x218
	// Func End, Address: 0x1027bd8, Func Offset: 0x248
}

// 
// Start address: 0x1027be0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1383, Address: 0x1027be0, Func Offset: 0
	// Line 1384, Address: 0x1027c00, Func Offset: 0x20
	// Line 1385, Address: 0x1027c20, Func Offset: 0x40
	// Func End, Address: 0x1027c30, Func Offset: 0x50
}

// 
// Start address: 0x1027c30
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1387, Address: 0x1027c30, Func Offset: 0
	// Line 1388, Address: 0x1027c50, Func Offset: 0x20
	// Line 1389, Address: 0x1027c54, Func Offset: 0x24
	// Line 1390, Address: 0x1027c74, Func Offset: 0x44
	// Func End, Address: 0x1027c84, Func Offset: 0x54
}

// 
// Start address: 0x1027c90
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1397, Address: 0x1027c90, Func Offset: 0
	// Line 1403, Address: 0x1027cc0, Func Offset: 0x30
	// Line 1404, Address: 0x1027cd0, Func Offset: 0x40
	// Line 1410, Address: 0x1027ce0, Func Offset: 0x50
	// Line 1411, Address: 0x1027cfc, Func Offset: 0x6c
	// Line 1412, Address: 0x1027d00, Func Offset: 0x70
	// Line 1413, Address: 0x1027d1c, Func Offset: 0x8c
	// Line 1414, Address: 0x1027d20, Func Offset: 0x90
	// Line 1415, Address: 0x1027d40, Func Offset: 0xb0
	// Line 1416, Address: 0x1027d48, Func Offset: 0xb8
	// Line 1417, Address: 0x1027d68, Func Offset: 0xd8
	// Line 1418, Address: 0x1027d70, Func Offset: 0xe0
	// Line 1419, Address: 0x1027db8, Func Offset: 0x128
	// Line 1421, Address: 0x1027dc4, Func Offset: 0x134
	// Line 1423, Address: 0x1027de0, Func Offset: 0x150
	// Line 1428, Address: 0x1027de8, Func Offset: 0x158
	// Line 1429, Address: 0x1027df4, Func Offset: 0x164
	// Line 1432, Address: 0x1027e00, Func Offset: 0x170
	// Line 1433, Address: 0x1027e08, Func Offset: 0x178
	// Line 1434, Address: 0x1027e28, Func Offset: 0x198
	// Line 1435, Address: 0x1027e44, Func Offset: 0x1b4
	// Line 1436, Address: 0x1027e4c, Func Offset: 0x1bc
	// Line 1437, Address: 0x1027e6c, Func Offset: 0x1dc
	// Line 1439, Address: 0x1027e88, Func Offset: 0x1f8
	// Line 1440, Address: 0x1027e90, Func Offset: 0x200
	// Line 1441, Address: 0x1027e98, Func Offset: 0x208
	// Line 1442, Address: 0x1027ea4, Func Offset: 0x214
	// Line 1443, Address: 0x1027ebc, Func Offset: 0x22c
	// Line 1445, Address: 0x1027ecc, Func Offset: 0x23c
	// Line 1448, Address: 0x1027ed8, Func Offset: 0x248
	// Line 1449, Address: 0x1027ee0, Func Offset: 0x250
	// Line 1450, Address: 0x1027ee4, Func Offset: 0x254
	// Func End, Address: 0x1027f04, Func Offset: 0x274
}

// 
// Start address: 0x1027f10
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1470, Address: 0x1027f10, Func Offset: 0
	// Line 1478, Address: 0x1027f38, Func Offset: 0x28
	// Line 1479, Address: 0x1027f9c, Func Offset: 0x8c
	// Line 1485, Address: 0x1027fa4, Func Offset: 0x94
	// Line 1486, Address: 0x1027fac, Func Offset: 0x9c
	// Line 1487, Address: 0x1027fcc, Func Offset: 0xbc
	// Line 1488, Address: 0x1027fe8, Func Offset: 0xd8
	// Line 1489, Address: 0x1027ff0, Func Offset: 0xe0
	// Line 1490, Address: 0x1028010, Func Offset: 0x100
	// Line 1493, Address: 0x102802c, Func Offset: 0x11c
	// Line 1494, Address: 0x1028034, Func Offset: 0x124
	// Line 1495, Address: 0x102803c, Func Offset: 0x12c
	// Line 1496, Address: 0x1028048, Func Offset: 0x138
	// Line 1497, Address: 0x1028060, Func Offset: 0x150
	// Line 1498, Address: 0x1028068, Func Offset: 0x158
	// Line 1503, Address: 0x1028078, Func Offset: 0x168
	// Line 1506, Address: 0x1028084, Func Offset: 0x174
	// Line 1507, Address: 0x102808c, Func Offset: 0x17c
	// Line 1508, Address: 0x1028090, Func Offset: 0x180
	// Func End, Address: 0x10280ac, Func Offset: 0x19c
}

// 
// Start address: 0x10280b0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1522, Address: 0x10280b0, Func Offset: 0
	// Line 1529, Address: 0x10280cc, Func Offset: 0x1c
	// Line 1530, Address: 0x10280d0, Func Offset: 0x20
	// Line 1531, Address: 0x10280d8, Func Offset: 0x28
	// Line 1532, Address: 0x10280fc, Func Offset: 0x4c
	// Line 1533, Address: 0x1028108, Func Offset: 0x58
	// Line 1534, Address: 0x1028120, Func Offset: 0x70
	// Line 1535, Address: 0x1028134, Func Offset: 0x84
	// Line 1540, Address: 0x102814c, Func Offset: 0x9c
	// Func End, Address: 0x1028164, Func Offset: 0xb4
}

// 
// Start address: 0x1028170
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1554, Address: 0x1028170, Func Offset: 0
	// Line 1555, Address: 0x102817c, Func Offset: 0xc
	// Line 1556, Address: 0x10281a8, Func Offset: 0x38
	// Line 1557, Address: 0x10281f4, Func Offset: 0x84
	// Line 1558, Address: 0x1028220, Func Offset: 0xb0
	// Line 1560, Address: 0x102826c, Func Offset: 0xfc
	// Line 1566, Address: 0x1028278, Func Offset: 0x108
	// Line 1567, Address: 0x102827c, Func Offset: 0x10c
	// Func End, Address: 0x1028288, Func Offset: 0x118
}

// 
// Start address: 0x1028290
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1584, Address: 0x1028290, Func Offset: 0
	// Line 1585, Address: 0x10282ac, Func Offset: 0x1c
	// Line 1587, Address: 0x10282c8, Func Offset: 0x38
	// Func End, Address: 0x10282d8, Func Offset: 0x48
}

// 
// Start address: 0x10282e0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1589, Address: 0x10282e0, Func Offset: 0
	// Line 1590, Address: 0x10282fc, Func Offset: 0x1c
	// Line 1591, Address: 0x1028300, Func Offset: 0x20
	// Line 1593, Address: 0x102831c, Func Offset: 0x3c
	// Func End, Address: 0x102832c, Func Offset: 0x4c
}

// 
// Start address: 0x1028330
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1595, Address: 0x1028330, Func Offset: 0
	// Line 1596, Address: 0x1028344, Func Offset: 0x14
	// Line 1598, Address: 0x1028360, Func Offset: 0x30
	// Func End, Address: 0x1028370, Func Offset: 0x40
}

// 
// Start address: 0x1028370
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1600, Address: 0x1028370, Func Offset: 0
	// Line 1601, Address: 0x102838c, Func Offset: 0x1c
	// Line 1603, Address: 0x10283a8, Func Offset: 0x38
	// Func End, Address: 0x10283b8, Func Offset: 0x48
}

// 
// Start address: 0x10283c0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1605, Address: 0x10283c0, Func Offset: 0
	// Line 1606, Address: 0x10283d8, Func Offset: 0x18
	// Line 1607, Address: 0x10283e8, Func Offset: 0x28
	// Line 1608, Address: 0x10283f8, Func Offset: 0x38
	// Line 1609, Address: 0x1028404, Func Offset: 0x44
	// Line 1611, Address: 0x1028410, Func Offset: 0x50
	// Line 1612, Address: 0x102843c, Func Offset: 0x7c
	// Line 1615, Address: 0x1028468, Func Offset: 0xa8
	// Func End, Address: 0x1028474, Func Offset: 0xb4
}

// 
// Start address: 0x1028480
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1631, Address: 0x1028480, Func Offset: 0
	// Line 1636, Address: 0x1028498, Func Offset: 0x18
	// Line 1637, Address: 0x10284a4, Func Offset: 0x24
	// Line 1638, Address: 0x10284b0, Func Offset: 0x30
	// Line 1639, Address: 0x10284b8, Func Offset: 0x38
	// Line 1640, Address: 0x10284bc, Func Offset: 0x3c
	// Line 1642, Address: 0x10284d4, Func Offset: 0x54
	// Line 1643, Address: 0x10284e0, Func Offset: 0x60
	// Line 1644, Address: 0x10284ec, Func Offset: 0x6c
	// Line 1645, Address: 0x10284f4, Func Offset: 0x74
	// Line 1647, Address: 0x10284f8, Func Offset: 0x78
	// Line 1649, Address: 0x1028510, Func Offset: 0x90
	// Func End, Address: 0x1028530, Func Offset: 0xb0
}

// 
// Start address: 0x1028530
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1653, Address: 0x1028530, Func Offset: 0
	// Line 1654, Address: 0x1028548, Func Offset: 0x18
	// Line 1655, Address: 0x1028568, Func Offset: 0x38
	// Func End, Address: 0x1028578, Func Offset: 0x48
}

// 
// Start address: 0x1028580
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1660, Address: 0x1028580, Func Offset: 0
	// Line 1664, Address: 0x10285a0, Func Offset: 0x20
	// Line 1667, Address: 0x10285bc, Func Offset: 0x3c
	// Line 1671, Address: 0x10285e4, Func Offset: 0x64
	// Line 1672, Address: 0x10285f0, Func Offset: 0x70
	// Line 1674, Address: 0x1028618, Func Offset: 0x98
	// Func End, Address: 0x1028628, Func Offset: 0xa8
}

// 
// Start address: 0x1028630
void mapinit()
{
	// Line 1784, Address: 0x1028630, Func Offset: 0
	// Line 1786, Address: 0x1028638, Func Offset: 0x8
	// Line 1787, Address: 0x102864c, Func Offset: 0x1c
	// Line 1790, Address: 0x1028660, Func Offset: 0x30
	// Line 1791, Address: 0x1028680, Func Offset: 0x50
	// Func End, Address: 0x1028690, Func Offset: 0x60
}

// 
// Start address: 0x1028690
void mapset()
{
	// Line 1802, Address: 0x1028690, Func Offset: 0
	// Func End, Address: 0x1028698, Func Offset: 0x8
}

