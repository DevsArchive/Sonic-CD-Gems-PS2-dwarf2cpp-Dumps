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
typedef _anon2* type_9[8];
typedef unsigned char type_10[64];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef short type_15[256];
typedef unsigned short type_16[6];
typedef _anon2* type_17[8];
typedef _anon1 type_18[128];
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
void scrollb_hv(int lD4, int lD5);
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
// Start address: 0x10257f0
void enecginit()
{
	// Line 128, Address: 0x10257f0, Func Offset: 0
	// Func End, Address: 0x10257f8, Func Offset: 0x8
}

// 
// Start address: 0x1025800
void divdevset()
{
	// Line 132, Address: 0x1025800, Func Offset: 0
	// Func End, Address: 0x1025808, Func Offset: 0x8
}

// 
// Start address: 0x1025810
_anon1* main_chk()
{
	// Line 180, Address: 0x1025810, Func Offset: 0
	// Line 181, Address: 0x1025830, Func Offset: 0x20
	// Line 182, Address: 0x1025838, Func Offset: 0x28
	// Func End, Address: 0x1025840, Func Offset: 0x30
}

// 
// Start address: 0x1025840
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 185, Address: 0x1025840, Func Offset: 0
	// Line 192, Address: 0x102584c, Func Offset: 0xc
	// Line 197, Address: 0x1025880, Func Offset: 0x40
	// Line 199, Address: 0x10258c8, Func Offset: 0x88
	// Line 200, Address: 0x10258cc, Func Offset: 0x8c
	// Line 201, Address: 0x10258e8, Func Offset: 0xa8
	// Line 202, Address: 0x10258fc, Func Offset: 0xbc
	// Line 203, Address: 0x1025918, Func Offset: 0xd8
	// Line 204, Address: 0x102592c, Func Offset: 0xec
	// Line 205, Address: 0x1025948, Func Offset: 0x108
	// Line 206, Address: 0x102595c, Func Offset: 0x11c
	// Line 207, Address: 0x1025978, Func Offset: 0x138
	// Line 208, Address: 0x102598c, Func Offset: 0x14c
	// Line 210, Address: 0x10259a8, Func Offset: 0x168
	// Line 211, Address: 0x10259cc, Func Offset: 0x18c
	// Line 212, Address: 0x10259d8, Func Offset: 0x198
	// Line 214, Address: 0x10259e4, Func Offset: 0x1a4
	// Line 215, Address: 0x1025a00, Func Offset: 0x1c0
	// Line 217, Address: 0x1025a0c, Func Offset: 0x1cc
	// Line 218, Address: 0x1025a14, Func Offset: 0x1d4
	// Func End, Address: 0x1025a28, Func Offset: 0x1e8
}

// 
// Start address: 0x1025a30
void playposiset()
{
	unsigned short endplpositbl[16];
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 222, Address: 0x1025a30, Func Offset: 0
	// Line 223, Address: 0x1025a44, Func Offset: 0x14
	// Line 233, Address: 0x1025a78, Func Offset: 0x48
	// Line 237, Address: 0x1025a94, Func Offset: 0x64
	// Line 245, Address: 0x1025ac0, Func Offset: 0x90
	// Line 247, Address: 0x1025ad4, Func Offset: 0xa4
	// Line 248, Address: 0x1025adc, Func Offset: 0xac
	// Line 249, Address: 0x1025aec, Func Offset: 0xbc
	// Line 250, Address: 0x1025afc, Func Offset: 0xcc
	// Line 251, Address: 0x1025b10, Func Offset: 0xe0
	// Line 255, Address: 0x1025b18, Func Offset: 0xe8
	// Line 257, Address: 0x1025b30, Func Offset: 0x100
	// Line 258, Address: 0x1025b48, Func Offset: 0x118
	// Line 259, Address: 0x1025b6c, Func Offset: 0x13c
	// Line 260, Address: 0x1025b90, Func Offset: 0x160
	// Line 264, Address: 0x1025b98, Func Offset: 0x168
	// Line 265, Address: 0x1025bac, Func Offset: 0x17c
	// Line 266, Address: 0x1025bd0, Func Offset: 0x1a0
	// Line 270, Address: 0x1025bf4, Func Offset: 0x1c4
	// Line 271, Address: 0x1025c08, Func Offset: 0x1d8
	// Line 272, Address: 0x1025c14, Func Offset: 0x1e4
	// Line 274, Address: 0x1025c1c, Func Offset: 0x1ec
	// Line 278, Address: 0x1025c20, Func Offset: 0x1f0
	// Line 279, Address: 0x1025c44, Func Offset: 0x214
	// Line 281, Address: 0x1025c54, Func Offset: 0x224
	// Line 283, Address: 0x1025c5c, Func Offset: 0x22c
	// Line 284, Address: 0x1025c70, Func Offset: 0x240
	// Line 285, Address: 0x1025c7c, Func Offset: 0x24c
	// Line 287, Address: 0x1025c84, Func Offset: 0x254
	// Line 290, Address: 0x1025c88, Func Offset: 0x258
	// Line 291, Address: 0x1025cac, Func Offset: 0x27c
	// Line 294, Address: 0x1025cbc, Func Offset: 0x28c
	// Line 297, Address: 0x1025cc4, Func Offset: 0x294
	// Line 299, Address: 0x1025cd0, Func Offset: 0x2a0
	// Line 300, Address: 0x1025cd4, Func Offset: 0x2a4
	// Line 301, Address: 0x1025cec, Func Offset: 0x2bc
	// Line 302, Address: 0x1025d04, Func Offset: 0x2d4
	// Line 303, Address: 0x1025d1c, Func Offset: 0x2ec
	// Line 306, Address: 0x1025d34, Func Offset: 0x304
	// Func End, Address: 0x1025d50, Func Offset: 0x320
}

// 
// Start address: 0x1025d50
void scrbinit(short yWk)
{
	unsigned short data;
	int i;
	// Line 310, Address: 0x1025d50, Func Offset: 0
	// Line 314, Address: 0x1025d60, Func Offset: 0x10
	// Line 315, Address: 0x1025d6c, Func Offset: 0x1c
	// Line 317, Address: 0x1025d74, Func Offset: 0x24
	// Line 318, Address: 0x1025d7c, Func Offset: 0x2c
	// Line 319, Address: 0x1025d84, Func Offset: 0x34
	// Line 320, Address: 0x1025d8c, Func Offset: 0x3c
	// Line 325, Address: 0x1025d94, Func Offset: 0x44
	// Line 326, Address: 0x1025db8, Func Offset: 0x68
	// Line 327, Address: 0x1025de4, Func Offset: 0x94
	// Line 328, Address: 0x1025e10, Func Offset: 0xc0
	// Line 330, Address: 0x1025e1c, Func Offset: 0xcc
	// Line 331, Address: 0x1025e30, Func Offset: 0xe0
	// Line 332, Address: 0x1025e40, Func Offset: 0xf0
	// Func End, Address: 0x1025e54, Func Offset: 0x104
}

// 
// Start address: 0x1025e60
void scroll()
{
	_anon8 data;
	int temp1;
	int temp2;
	int hsCount;
	int i;
	// Line 336, Address: 0x1025e60, Func Offset: 0
	// Line 342, Address: 0x1025e78, Func Offset: 0x18
	// Line 345, Address: 0x1025e88, Func Offset: 0x28
	// Line 346, Address: 0x1025eb4, Func Offset: 0x54
	// Line 347, Address: 0x1025ebc, Func Offset: 0x5c
	// Line 348, Address: 0x1025ec4, Func Offset: 0x64
	// Line 350, Address: 0x1025ecc, Func Offset: 0x6c
	// Line 351, Address: 0x1025edc, Func Offset: 0x7c
	// Line 355, Address: 0x1025eec, Func Offset: 0x8c
	// Line 356, Address: 0x1025f18, Func Offset: 0xb8
	// Line 357, Address: 0x1025f2c, Func Offset: 0xcc
	// Line 359, Address: 0x1025f3c, Func Offset: 0xdc
	// Line 360, Address: 0x1025f4c, Func Offset: 0xec
	// Line 361, Address: 0x1025f5c, Func Offset: 0xfc
	// Line 363, Address: 0x1025f6c, Func Offset: 0x10c
	// Line 364, Address: 0x1025fa0, Func Offset: 0x140
	// Line 365, Address: 0x1025fa8, Func Offset: 0x148
	// Line 367, Address: 0x1025fb0, Func Offset: 0x150
	// Line 369, Address: 0x1025fb4, Func Offset: 0x154
	// Line 372, Address: 0x1025fc0, Func Offset: 0x160
	// Line 373, Address: 0x1025ff0, Func Offset: 0x190
	// Line 374, Address: 0x1025ff4, Func Offset: 0x194
	// Line 376, Address: 0x1026004, Func Offset: 0x1a4
	// Line 377, Address: 0x1026020, Func Offset: 0x1c0
	// Line 378, Address: 0x1026044, Func Offset: 0x1e4
	// Line 379, Address: 0x1026050, Func Offset: 0x1f0
	// Line 380, Address: 0x102605c, Func Offset: 0x1fc
	// Line 381, Address: 0x1026068, Func Offset: 0x208
	// Line 383, Address: 0x10260b8, Func Offset: 0x258
	// Func End, Address: 0x10260d8, Func Offset: 0x278
}

// 
// Start address: 0x10260e0
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	_anon6 data1;
	_anon6 data2;
	short avp;
	int i;
	// Line 421, Address: 0x10260e0, Func Offset: 0
	// Line 428, Address: 0x10260fc, Func Offset: 0x1c
	// Line 429, Address: 0x1026104, Func Offset: 0x24
	// Line 430, Address: 0x1026110, Func Offset: 0x30
	// Line 431, Address: 0x102611c, Func Offset: 0x3c
	// Line 432, Address: 0x1026130, Func Offset: 0x50
	// Line 433, Address: 0x1026144, Func Offset: 0x64
	// Line 434, Address: 0x1026148, Func Offset: 0x68
	// Line 435, Address: 0x102615c, Func Offset: 0x7c
	// Line 437, Address: 0x1026160, Func Offset: 0x80
	// Line 438, Address: 0x102616c, Func Offset: 0x8c
	// Line 439, Address: 0x1026194, Func Offset: 0xb4
	// Line 440, Address: 0x10261a4, Func Offset: 0xc4
	// Line 444, Address: 0x10261a8, Func Offset: 0xc8
	// Line 449, Address: 0x10261cc, Func Offset: 0xec
	// Line 450, Address: 0x10261d4, Func Offset: 0xf4
	// Line 451, Address: 0x1026224, Func Offset: 0x144
	// Line 452, Address: 0x1026228, Func Offset: 0x148
	// Line 453, Address: 0x1026234, Func Offset: 0x154
	// Line 454, Address: 0x1026240, Func Offset: 0x160
	// Line 455, Address: 0x102624c, Func Offset: 0x16c
	// Line 457, Address: 0x1026264, Func Offset: 0x184
	// Line 458, Address: 0x1026268, Func Offset: 0x188
	// Line 460, Address: 0x1026290, Func Offset: 0x1b0
	// Line 462, Address: 0x102629c, Func Offset: 0x1bc
	// Line 464, Address: 0x10262a4, Func Offset: 0x1c4
	// Line 465, Address: 0x10262ac, Func Offset: 0x1cc
	// Line 466, Address: 0x10262b0, Func Offset: 0x1d0
	// Line 467, Address: 0x10262bc, Func Offset: 0x1dc
	// Line 468, Address: 0x10262c8, Func Offset: 0x1e8
	// Line 469, Address: 0x10262d4, Func Offset: 0x1f4
	// Line 470, Address: 0x10262e0, Func Offset: 0x200
	// Line 472, Address: 0x10262f8, Func Offset: 0x218
	// Line 473, Address: 0x10262fc, Func Offset: 0x21c
	// Line 475, Address: 0x1026324, Func Offset: 0x244
	// Line 477, Address: 0x1026330, Func Offset: 0x250
	// Func End, Address: 0x1026348, Func Offset: 0x268
}

// 
// Start address: 0x1026350
void scroll_h()
{
	unsigned short wD4;
	// Line 489, Address: 0x1026350, Func Offset: 0
	// Line 492, Address: 0x102635c, Func Offset: 0xc
	// Line 493, Address: 0x1026368, Func Offset: 0x18
	// Line 494, Address: 0x1026370, Func Offset: 0x20
	// Line 495, Address: 0x10263a4, Func Offset: 0x54
	// Line 496, Address: 0x10263b8, Func Offset: 0x68
	// Line 497, Address: 0x10263e4, Func Offset: 0x94
	// Line 498, Address: 0x10263f8, Func Offset: 0xa8
	// Line 501, Address: 0x1026400, Func Offset: 0xb0
	// Line 506, Address: 0x1026414, Func Offset: 0xc4
	// Func End, Address: 0x1026428, Func Offset: 0xd8
}

// 
// Start address: 0x1026430
void scrh_move()
{
	unsigned short wD0;
	// Line 508, Address: 0x1026430, Func Offset: 0
	// Line 511, Address: 0x102643c, Func Offset: 0xc
	// Line 512, Address: 0x1026448, Func Offset: 0x18
	// Line 513, Address: 0x102645c, Func Offset: 0x2c
	// Line 514, Address: 0x1026470, Func Offset: 0x40
	// Line 516, Address: 0x102647c, Func Offset: 0x4c
	// Line 517, Address: 0x1026484, Func Offset: 0x54
	// Line 518, Address: 0x102648c, Func Offset: 0x5c
	// Line 519, Address: 0x10264a4, Func Offset: 0x74
	// Line 520, Address: 0x10264b0, Func Offset: 0x80
	// Line 522, Address: 0x10264b8, Func Offset: 0x88
	// Line 525, Address: 0x10264c4, Func Offset: 0x94
	// Func End, Address: 0x10264d8, Func Offset: 0xa8
}

// 
// Start address: 0x10264e0
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 528, Address: 0x10264e0, Func Offset: 0
	// Line 531, Address: 0x10264ec, Func Offset: 0xc
	// Line 532, Address: 0x102650c, Func Offset: 0x2c
	// Line 535, Address: 0x1026514, Func Offset: 0x34
	// Line 536, Address: 0x102652c, Func Offset: 0x4c
	// Line 537, Address: 0x102655c, Func Offset: 0x7c
	// Line 540, Address: 0x1026568, Func Offset: 0x88
	// Line 541, Address: 0x1026570, Func Offset: 0x90
	// Line 542, Address: 0x1026584, Func Offset: 0xa4
	// Line 543, Address: 0x10265b4, Func Offset: 0xd4
	// Line 544, Address: 0x10265c0, Func Offset: 0xe0
	// Line 546, Address: 0x10265c8, Func Offset: 0xe8
	// Func End, Address: 0x10265d8, Func Offset: 0xf8
}

// 
// Start address: 0x10265e0
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 549, Address: 0x10265e0, Func Offset: 0
	// Line 552, Address: 0x10265ec, Func Offset: 0xc
	// Line 553, Address: 0x102660c, Func Offset: 0x2c
	// Line 556, Address: 0x1026614, Func Offset: 0x34
	// Line 557, Address: 0x102662c, Func Offset: 0x4c
	// Line 558, Address: 0x102665c, Func Offset: 0x7c
	// Line 561, Address: 0x1026668, Func Offset: 0x88
	// Line 562, Address: 0x1026670, Func Offset: 0x90
	// Line 563, Address: 0x1026684, Func Offset: 0xa4
	// Line 564, Address: 0x10266b4, Func Offset: 0xd4
	// Line 565, Address: 0x10266c0, Func Offset: 0xe0
	// Line 567, Address: 0x10266c8, Func Offset: 0xe8
	// Func End, Address: 0x10266d8, Func Offset: 0xf8
}

// 
// Start address: 0x10266e0
void scroll_v()
{
	unsigned short wD0;
	// Line 586, Address: 0x10266e0, Func Offset: 0
	// Line 589, Address: 0x10266ec, Func Offset: 0xc
	// Line 590, Address: 0x1026718, Func Offset: 0x38
	// Line 591, Address: 0x1026730, Func Offset: 0x50
	// Line 594, Address: 0x1026738, Func Offset: 0x58
	// Line 595, Address: 0x1026750, Func Offset: 0x70
	// Line 596, Address: 0x1026758, Func Offset: 0x78
	// Line 597, Address: 0x1026778, Func Offset: 0x98
	// Line 598, Address: 0x102678c, Func Offset: 0xac
	// Line 599, Address: 0x1026798, Func Offset: 0xb8
	// Line 601, Address: 0x10267a0, Func Offset: 0xc0
	// Line 602, Address: 0x10267b4, Func Offset: 0xd4
	// Line 603, Address: 0x10267c4, Func Offset: 0xe4
	// Line 604, Address: 0x10267cc, Func Offset: 0xec
	// Line 605, Address: 0x10267d8, Func Offset: 0xf8
	// Line 607, Address: 0x10267e0, Func Offset: 0x100
	// Line 608, Address: 0x10267e8, Func Offset: 0x108
	// Line 609, Address: 0x10267fc, Func Offset: 0x11c
	// Line 610, Address: 0x1026804, Func Offset: 0x124
	// Line 616, Address: 0x102680c, Func Offset: 0x12c
	// Line 617, Address: 0x1026820, Func Offset: 0x140
	// Line 618, Address: 0x1026828, Func Offset: 0x148
	// Line 619, Address: 0x1026834, Func Offset: 0x154
	// Line 621, Address: 0x102683c, Func Offset: 0x15c
	// Line 622, Address: 0x1026850, Func Offset: 0x170
	// Line 623, Address: 0x1026858, Func Offset: 0x178
	// Line 628, Address: 0x1026860, Func Offset: 0x180
	// Line 630, Address: 0x1026868, Func Offset: 0x188
	// Func End, Address: 0x102687c, Func Offset: 0x19c
}

// 
// Start address: 0x1026880
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 636, Address: 0x1026880, Func Offset: 0
	// Line 639, Address: 0x1026890, Func Offset: 0x10
	// Line 640, Address: 0x10268ac, Func Offset: 0x2c
	// Line 641, Address: 0x10268b8, Func Offset: 0x38
	// Line 644, Address: 0x10268c0, Func Offset: 0x40
	// Line 645, Address: 0x10268cc, Func Offset: 0x4c
	// Line 646, Address: 0x10268e4, Func Offset: 0x64
	// Line 649, Address: 0x1026900, Func Offset: 0x80
	// Line 650, Address: 0x1026910, Func Offset: 0x90
	// Line 651, Address: 0x102691c, Func Offset: 0x9c
	// Line 653, Address: 0x1026924, Func Offset: 0xa4
	// Line 654, Address: 0x1026944, Func Offset: 0xc4
	// Line 655, Address: 0x1026950, Func Offset: 0xd0
	// Line 656, Address: 0x1026958, Func Offset: 0xd8
	// Line 657, Address: 0x1026978, Func Offset: 0xf8
	// Line 658, Address: 0x1026984, Func Offset: 0x104
	// Line 660, Address: 0x102698c, Func Offset: 0x10c
	// Line 664, Address: 0x1026998, Func Offset: 0x118
	// Func End, Address: 0x10269ac, Func Offset: 0x12c
}

// 
// Start address: 0x10269b0
void sv_move_main1(unsigned short wD0)
{
	// Line 668, Address: 0x10269b0, Func Offset: 0
	// Line 670, Address: 0x10269bc, Func Offset: 0xc
	// Line 671, Address: 0x10269dc, Func Offset: 0x2c
	// Line 672, Address: 0x10269e8, Func Offset: 0x38
	// Line 673, Address: 0x10269f0, Func Offset: 0x40
	// Line 674, Address: 0x1026a10, Func Offset: 0x60
	// Line 675, Address: 0x1026a1c, Func Offset: 0x6c
	// Line 677, Address: 0x1026a24, Func Offset: 0x74
	// Line 680, Address: 0x1026a30, Func Offset: 0x80
	// Func End, Address: 0x1026a40, Func Offset: 0x90
}

// 
// Start address: 0x1026a40
void sv_move_main2(unsigned short wD0)
{
	// Line 683, Address: 0x1026a40, Func Offset: 0
	// Line 685, Address: 0x1026a4c, Func Offset: 0xc
	// Line 686, Address: 0x1026a6c, Func Offset: 0x2c
	// Line 687, Address: 0x1026a78, Func Offset: 0x38
	// Line 688, Address: 0x1026a80, Func Offset: 0x40
	// Line 689, Address: 0x1026aa0, Func Offset: 0x60
	// Line 690, Address: 0x1026aac, Func Offset: 0x6c
	// Line 692, Address: 0x1026ab4, Func Offset: 0x74
	// Line 695, Address: 0x1026ac0, Func Offset: 0x80
	// Func End, Address: 0x1026ad0, Func Offset: 0x90
}

// 
// Start address: 0x1026ad0
void sv_move_sub2()
{
	// Line 698, Address: 0x1026ad0, Func Offset: 0
	// Line 699, Address: 0x1026ad8, Func Offset: 0x8
	// Line 700, Address: 0x1026ae0, Func Offset: 0x10
	// Line 701, Address: 0x1026aec, Func Offset: 0x1c
	// Func End, Address: 0x1026afc, Func Offset: 0x2c
}

// 
// Start address: 0x1026b00
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 704, Address: 0x1026b00, Func Offset: 0
	// Line 707, Address: 0x1026b0c, Func Offset: 0xc
	// Line 708, Address: 0x1026b10, Func Offset: 0x10
	// Line 709, Address: 0x1026b18, Func Offset: 0x18
	// Line 710, Address: 0x1026b34, Func Offset: 0x34
	// Line 711, Address: 0x1026b50, Func Offset: 0x50
	// Line 712, Address: 0x1026b5c, Func Offset: 0x5c
	// Line 714, Address: 0x1026b64, Func Offset: 0x64
	// Line 717, Address: 0x1026b70, Func Offset: 0x70
	// Func End, Address: 0x1026b80, Func Offset: 0x80
}

// 
// Start address: 0x1026b80
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 722, Address: 0x1026b80, Func Offset: 0
	// Line 726, Address: 0x1026b90, Func Offset: 0x10
	// Line 727, Address: 0x1026bac, Func Offset: 0x2c
	// Line 728, Address: 0x1026bb8, Func Offset: 0x38
	// Line 730, Address: 0x1026bcc, Func Offset: 0x4c
	// Line 731, Address: 0x1026bd4, Func Offset: 0x54
	// Line 732, Address: 0x1026bdc, Func Offset: 0x5c
	// Line 733, Address: 0x1026be0, Func Offset: 0x60
	// Line 734, Address: 0x1026bec, Func Offset: 0x6c
	// Func End, Address: 0x1026c00, Func Offset: 0x80
}

// 
// Start address: 0x1026c00
void scrv_up_ch(_anon2 lD1)
{
	// Line 738, Address: 0x1026c00, Func Offset: 0
	// Line 739, Address: 0x1026c0c, Func Offset: 0xc
	// Line 740, Address: 0x1026c34, Func Offset: 0x34
	// Line 741, Address: 0x1026c4c, Func Offset: 0x4c
	// Line 742, Address: 0x1026c58, Func Offset: 0x58
	// Line 743, Address: 0x1026c6c, Func Offset: 0x6c
	// Line 744, Address: 0x1026c80, Func Offset: 0x80
	// Line 745, Address: 0x1026c94, Func Offset: 0x94
	// Line 748, Address: 0x1026c9c, Func Offset: 0x9c
	// Line 751, Address: 0x1026ca8, Func Offset: 0xa8
	// Line 753, Address: 0x1026cb4, Func Offset: 0xb4
	// Func End, Address: 0x1026cc4, Func Offset: 0xc4
}

// 
// Start address: 0x1026cd0
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 759, Address: 0x1026cd0, Func Offset: 0
	// Line 763, Address: 0x1026ce0, Func Offset: 0x10
	// Line 764, Address: 0x1026ce4, Func Offset: 0x14
	// Line 765, Address: 0x1026cec, Func Offset: 0x1c
	// Line 766, Address: 0x1026cf8, Func Offset: 0x28
	// Line 768, Address: 0x1026d0c, Func Offset: 0x3c
	// Line 769, Address: 0x1026d14, Func Offset: 0x44
	// Line 770, Address: 0x1026d1c, Func Offset: 0x4c
	// Line 772, Address: 0x1026d20, Func Offset: 0x50
	// Line 774, Address: 0x1026d2c, Func Offset: 0x5c
	// Func End, Address: 0x1026d40, Func Offset: 0x70
}

// 
// Start address: 0x1026d40
void scrv_down_ch(_anon2 lD1)
{
	// Line 778, Address: 0x1026d40, Func Offset: 0
	// Line 779, Address: 0x1026d4c, Func Offset: 0xc
	// Line 780, Address: 0x1026d74, Func Offset: 0x34
	// Line 781, Address: 0x1026d80, Func Offset: 0x40
	// Line 782, Address: 0x1026d94, Func Offset: 0x54
	// Line 783, Address: 0x1026da8, Func Offset: 0x68
	// Line 784, Address: 0x1026dbc, Func Offset: 0x7c
	// Line 785, Address: 0x1026dd0, Func Offset: 0x90
	// Line 787, Address: 0x1026dd8, Func Offset: 0x98
	// Line 790, Address: 0x1026de4, Func Offset: 0xa4
	// Line 792, Address: 0x1026df0, Func Offset: 0xb0
	// Func End, Address: 0x1026e00, Func Offset: 0xc0
}

// 
// Start address: 0x1026e00
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 795, Address: 0x1026e00, Func Offset: 0
	// Line 798, Address: 0x1026e10, Func Offset: 0x10
	// Line 800, Address: 0x1026e1c, Func Offset: 0x1c
	// Line 801, Address: 0x1026e24, Func Offset: 0x24
	// Line 802, Address: 0x1026e2c, Func Offset: 0x2c
	// Line 804, Address: 0x1026e30, Func Offset: 0x30
	// Line 805, Address: 0x1026e58, Func Offset: 0x58
	// Line 808, Address: 0x1026e64, Func Offset: 0x64
	// Line 809, Address: 0x1026e98, Func Offset: 0x98
	// Line 810, Address: 0x1026eac, Func Offset: 0xac
	// Line 812, Address: 0x1026ed8, Func Offset: 0xd8
	// Line 813, Address: 0x1026eec, Func Offset: 0xec
	// Line 815, Address: 0x1026ef4, Func Offset: 0xf4
	// Line 820, Address: 0x1026f08, Func Offset: 0x108
	// Func End, Address: 0x1026f1c, Func Offset: 0x11c
}

// 
// Start address: 0x1026f20
void scrollb_hv(int lD4, int lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 824, Address: 0x1026f20, Func Offset: 0
	// Line 827, Address: 0x1026f2c, Func Offset: 0xc
	// Line 828, Address: 0x1026f3c, Func Offset: 0x1c
	// Line 829, Address: 0x1026f4c, Func Offset: 0x2c
	// Line 831, Address: 0x1026f58, Func Offset: 0x38
	// Line 833, Address: 0x1026f8c, Func Offset: 0x6c
	// Line 834, Address: 0x1026fa0, Func Offset: 0x80
	// Line 835, Address: 0x1026fb0, Func Offset: 0x90
	// Line 836, Address: 0x1026fc4, Func Offset: 0xa4
	// Line 837, Address: 0x1026fd8, Func Offset: 0xb8
	// Line 840, Address: 0x1026fe0, Func Offset: 0xc0
	// Line 845, Address: 0x1026ff4, Func Offset: 0xd4
	// Line 846, Address: 0x1027004, Func Offset: 0xe4
	// Line 847, Address: 0x1027014, Func Offset: 0xf4
	// Line 848, Address: 0x102702c, Func Offset: 0x10c
	// Line 850, Address: 0x1027038, Func Offset: 0x118
	// Line 852, Address: 0x102706c, Func Offset: 0x14c
	// Line 853, Address: 0x1027080, Func Offset: 0x160
	// Line 854, Address: 0x1027090, Func Offset: 0x170
	// Line 855, Address: 0x10270a4, Func Offset: 0x184
	// Line 856, Address: 0x10270b8, Func Offset: 0x198
	// Line 859, Address: 0x10270c0, Func Offset: 0x1a0
	// Line 864, Address: 0x10270d4, Func Offset: 0x1b4
	// Func End, Address: 0x10270e0, Func Offset: 0x1c0
}

// 
// Start address: 0x10270e0
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 871, Address: 0x10270e0, Func Offset: 0
	// Line 874, Address: 0x10270ec, Func Offset: 0xc
	// Line 875, Address: 0x10270f8, Func Offset: 0x18
	// Line 877, Address: 0x1027104, Func Offset: 0x24
	// Line 878, Address: 0x1027130, Func Offset: 0x50
	// Line 879, Address: 0x1027144, Func Offset: 0x64
	// Line 880, Address: 0x1027174, Func Offset: 0x94
	// Line 881, Address: 0x1027188, Func Offset: 0xa8
	// Line 884, Address: 0x1027190, Func Offset: 0xb0
	// Line 889, Address: 0x10271a4, Func Offset: 0xc4
	// Func End, Address: 0x10271b4, Func Offset: 0xd4
}

// 
// Start address: 0x10271c0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 893, Address: 0x10271c0, Func Offset: 0
	// Line 897, Address: 0x10271d0, Func Offset: 0x10
	// Line 898, Address: 0x10271dc, Func Offset: 0x1c
	// Line 899, Address: 0x10271ec, Func Offset: 0x2c
	// Line 901, Address: 0x10271f8, Func Offset: 0x38
	// Line 902, Address: 0x1027200, Func Offset: 0x40
	// Line 903, Address: 0x1027208, Func Offset: 0x48
	// Line 905, Address: 0x1027214, Func Offset: 0x54
	// Line 906, Address: 0x1027220, Func Offset: 0x60
	// Line 907, Address: 0x1027234, Func Offset: 0x74
	// Line 908, Address: 0x1027240, Func Offset: 0x80
	// Line 909, Address: 0x1027254, Func Offset: 0x94
	// Line 910, Address: 0x1027264, Func Offset: 0xa4
	// Line 911, Address: 0x1027278, Func Offset: 0xb8
	// Line 912, Address: 0x1027294, Func Offset: 0xd4
	// Line 915, Address: 0x102729c, Func Offset: 0xdc
	// Line 920, Address: 0x10272bc, Func Offset: 0xfc
	// Func End, Address: 0x10272cc, Func Offset: 0x10c
}

// 
// Start address: 0x10272d0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 923, Address: 0x10272d0, Func Offset: 0
	// Line 927, Address: 0x10272e0, Func Offset: 0x10
	// Line 928, Address: 0x10272ec, Func Offset: 0x1c
	// Line 929, Address: 0x10272fc, Func Offset: 0x2c
	// Line 931, Address: 0x1027308, Func Offset: 0x38
	// Line 932, Address: 0x1027310, Func Offset: 0x40
	// Line 933, Address: 0x1027318, Func Offset: 0x48
	// Line 935, Address: 0x1027324, Func Offset: 0x54
	// Line 936, Address: 0x1027330, Func Offset: 0x60
	// Line 937, Address: 0x1027344, Func Offset: 0x74
	// Line 938, Address: 0x1027350, Func Offset: 0x80
	// Line 939, Address: 0x1027364, Func Offset: 0x94
	// Line 940, Address: 0x1027374, Func Offset: 0xa4
	// Line 941, Address: 0x1027388, Func Offset: 0xb8
	// Line 942, Address: 0x10273a4, Func Offset: 0xd4
	// Line 945, Address: 0x10273ac, Func Offset: 0xdc
	// Line 950, Address: 0x10273cc, Func Offset: 0xfc
	// Func End, Address: 0x10273dc, Func Offset: 0x10c
}

// 
// Start address: 0x10273e0
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 962, Address: 0x10273e0, Func Offset: 0
	// Line 966, Address: 0x10273f0, Func Offset: 0x10
	// Line 967, Address: 0x10273fc, Func Offset: 0x1c
	// Line 968, Address: 0x102740c, Func Offset: 0x2c
	// Line 970, Address: 0x1027418, Func Offset: 0x38
	// Line 971, Address: 0x1027420, Func Offset: 0x40
	// Line 972, Address: 0x1027428, Func Offset: 0x48
	// Line 974, Address: 0x1027434, Func Offset: 0x54
	// Line 975, Address: 0x1027440, Func Offset: 0x60
	// Line 976, Address: 0x1027454, Func Offset: 0x74
	// Line 977, Address: 0x1027460, Func Offset: 0x80
	// Line 978, Address: 0x1027474, Func Offset: 0x94
	// Line 979, Address: 0x1027484, Func Offset: 0xa4
	// Line 980, Address: 0x1027498, Func Offset: 0xb8
	// Line 981, Address: 0x10274b4, Func Offset: 0xd4
	// Line 984, Address: 0x10274bc, Func Offset: 0xdc
	// Line 989, Address: 0x10274dc, Func Offset: 0xfc
	// Func End, Address: 0x10274ec, Func Offset: 0x10c
}

// 
// Start address: 0x10274f0
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1003, Address: 0x10274f0, Func Offset: 0
	// Line 1009, Address: 0x102750c, Func Offset: 0x1c
	// Line 1010, Address: 0x1027510, Func Offset: 0x20
	// Line 1011, Address: 0x102751c, Func Offset: 0x2c
	// Line 1012, Address: 0x1027528, Func Offset: 0x38
	// Line 1013, Address: 0x1027530, Func Offset: 0x40
	// Line 1014, Address: 0x1027538, Func Offset: 0x48
	// Line 1016, Address: 0x1027554, Func Offset: 0x64
	// Line 1017, Address: 0x1027560, Func Offset: 0x70
	// Line 1018, Address: 0x102756c, Func Offset: 0x7c
	// Line 1019, Address: 0x1027574, Func Offset: 0x84
	// Line 1021, Address: 0x102757c, Func Offset: 0x8c
	// Func End, Address: 0x10275a0, Func Offset: 0xb0
}

// 
// Start address: 0x10275a0
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
	// Line 1034, Address: 0x10275a0, Func Offset: 0
	// Line 1043, Address: 0x10275c0, Func Offset: 0x20
	// Line 1044, Address: 0x10275c4, Func Offset: 0x24
	// Line 1045, Address: 0x10275d0, Func Offset: 0x30
	// Line 1046, Address: 0x10275dc, Func Offset: 0x3c
	// Line 1047, Address: 0x10275e4, Func Offset: 0x44
	// Line 1048, Address: 0x10275ec, Func Offset: 0x4c
	// Line 1050, Address: 0x1027608, Func Offset: 0x68
	// Line 1051, Address: 0x102760c, Func Offset: 0x6c
	// Line 1052, Address: 0x1027618, Func Offset: 0x78
	// Line 1053, Address: 0x1027624, Func Offset: 0x84
	// Line 1054, Address: 0x102762c, Func Offset: 0x8c
	// Line 1056, Address: 0x1027634, Func Offset: 0x94
	// Line 1057, Address: 0x1027640, Func Offset: 0xa0
	// Line 1058, Address: 0x1027654, Func Offset: 0xb4
	// Line 1060, Address: 0x1027660, Func Offset: 0xc0
	// Line 1061, Address: 0x1027668, Func Offset: 0xc8
	// Line 1063, Address: 0x1027670, Func Offset: 0xd0
	// Line 1065, Address: 0x1027690, Func Offset: 0xf0
	// Line 1071, Address: 0x10276bc, Func Offset: 0x11c
	// Line 1072, Address: 0x10276d0, Func Offset: 0x130
	// Line 1074, Address: 0x10276dc, Func Offset: 0x13c
	// Line 1075, Address: 0x10276e4, Func Offset: 0x144
	// Line 1076, Address: 0x10276ec, Func Offset: 0x14c
	// Line 1078, Address: 0x102770c, Func Offset: 0x16c
	// Line 1084, Address: 0x1027738, Func Offset: 0x198
	// Line 1085, Address: 0x102774c, Func Offset: 0x1ac
	// Line 1087, Address: 0x1027758, Func Offset: 0x1b8
	// Line 1088, Address: 0x1027760, Func Offset: 0x1c0
	// Line 1089, Address: 0x1027768, Func Offset: 0x1c8
	// Line 1091, Address: 0x1027788, Func Offset: 0x1e8
	// Line 1097, Address: 0x10277b4, Func Offset: 0x214
	// Line 1098, Address: 0x10277c8, Func Offset: 0x228
	// Line 1100, Address: 0x10277d4, Func Offset: 0x234
	// Line 1101, Address: 0x10277dc, Func Offset: 0x23c
	// Line 1102, Address: 0x10277e4, Func Offset: 0x244
	// Line 1104, Address: 0x1027804, Func Offset: 0x264
	// Line 1113, Address: 0x1027830, Func Offset: 0x290
	// Func End, Address: 0x1027858, Func Offset: 0x2b8
}

// 
// Start address: 0x1027860
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw)
{
	tagPOINT TilePoint;
	_anon2 lD4;
	unsigned short wD5;
	// Line 1130, Address: 0x1027860, Func Offset: 0
	// Line 1135, Address: 0x1027880, Func Offset: 0x20
	// Line 1136, Address: 0x1027890, Func Offset: 0x30
	// Line 1137, Address: 0x10278a8, Func Offset: 0x48
	// Line 1139, Address: 0x10278bc, Func Offset: 0x5c
	// Line 1140, Address: 0x10278c4, Func Offset: 0x64
	// Line 1142, Address: 0x10278cc, Func Offset: 0x6c
	// Line 1144, Address: 0x10278ec, Func Offset: 0x8c
	// Line 1150, Address: 0x1027918, Func Offset: 0xb8
	// Line 1151, Address: 0x1027930, Func Offset: 0xd0
	// Line 1153, Address: 0x1027944, Func Offset: 0xe4
	// Line 1154, Address: 0x102794c, Func Offset: 0xec
	// Line 1155, Address: 0x1027954, Func Offset: 0xf4
	// Line 1157, Address: 0x1027974, Func Offset: 0x114
	// Line 1163, Address: 0x10279a0, Func Offset: 0x140
	// Line 1164, Address: 0x10279b8, Func Offset: 0x158
	// Line 1166, Address: 0x10279cc, Func Offset: 0x16c
	// Line 1167, Address: 0x10279d4, Func Offset: 0x174
	// Line 1168, Address: 0x10279dc, Func Offset: 0x17c
	// Line 1170, Address: 0x10279fc, Func Offset: 0x19c
	// Line 1176, Address: 0x1027a28, Func Offset: 0x1c8
	// Line 1177, Address: 0x1027a40, Func Offset: 0x1e0
	// Line 1179, Address: 0x1027a54, Func Offset: 0x1f4
	// Line 1180, Address: 0x1027a5c, Func Offset: 0x1fc
	// Line 1181, Address: 0x1027a64, Func Offset: 0x204
	// Line 1183, Address: 0x1027a84, Func Offset: 0x224
	// Line 1192, Address: 0x1027ab0, Func Offset: 0x250
	// Func End, Address: 0x1027ac4, Func Offset: 0x264
}

// 
// Start address: 0x1027ad0
void scrollwrtc()
{
	// Line 1199, Address: 0x1027ad0, Func Offset: 0
	// Func End, Address: 0x1027ad8, Func Offset: 0x8
}

// 
// Start address: 0x1027ae0
void scrollwrtz()
{
	// Line 1204, Address: 0x1027ae0, Func Offset: 0
	// Func End, Address: 0x1027ae8, Func Offset: 0x8
}

// 
// Start address: 0x1027af0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1222, Address: 0x1027af0, Func Offset: 0
	// Line 1235, Address: 0x1027b18, Func Offset: 0x28
	// Line 1238, Address: 0x1027b38, Func Offset: 0x48
	// Line 1239, Address: 0x1027b4c, Func Offset: 0x5c
	// Line 1240, Address: 0x1027b60, Func Offset: 0x70
	// Line 1241, Address: 0x1027b74, Func Offset: 0x84
	// Line 1243, Address: 0x1027b88, Func Offset: 0x98
	// Line 1244, Address: 0x1027b94, Func Offset: 0xa4
	// Line 1245, Address: 0x1027ba8, Func Offset: 0xb8
	// Func End, Address: 0x1027bb8, Func Offset: 0xc8
}

// 
// Start address: 0x1027bc0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1249, Address: 0x1027bc0, Func Offset: 0
	// Line 1253, Address: 0x1027be8, Func Offset: 0x28
	// Line 1256, Address: 0x1027c08, Func Offset: 0x48
	// Line 1257, Address: 0x1027c1c, Func Offset: 0x5c
	// Line 1258, Address: 0x1027c30, Func Offset: 0x70
	// Line 1259, Address: 0x1027c44, Func Offset: 0x84
	// Line 1261, Address: 0x1027c58, Func Offset: 0x98
	// Line 1262, Address: 0x1027c64, Func Offset: 0xa4
	// Line 1263, Address: 0x1027c78, Func Offset: 0xb8
	// Func End, Address: 0x1027c88, Func Offset: 0xc8
}

// 
// Start address: 0x1027c90
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1283, Address: 0x1027c90, Func Offset: 0
	// Line 1287, Address: 0x1027cb8, Func Offset: 0x28
	// Line 1290, Address: 0x1027cd8, Func Offset: 0x48
	// Line 1291, Address: 0x1027cec, Func Offset: 0x5c
	// Line 1292, Address: 0x1027cfc, Func Offset: 0x6c
	// Line 1293, Address: 0x1027d10, Func Offset: 0x80
	// Line 1295, Address: 0x1027d20, Func Offset: 0x90
	// Line 1296, Address: 0x1027d2c, Func Offset: 0x9c
	// Line 1297, Address: 0x1027d40, Func Offset: 0xb0
	// Func End, Address: 0x1027d50, Func Offset: 0xc0
}

// 
// Start address: 0x1027d50
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
	// Line 1316, Address: 0x1027d50, Func Offset: 0
	// Line 1317, Address: 0x1027d84, Func Offset: 0x34
	// Line 1322, Address: 0x1027d88, Func Offset: 0x38
	// Line 1324, Address: 0x1027d98, Func Offset: 0x48
	// Line 1325, Address: 0x1027d9c, Func Offset: 0x4c
	// Line 1326, Address: 0x1027da4, Func Offset: 0x54
	// Line 1328, Address: 0x1027db4, Func Offset: 0x64
	// Line 1330, Address: 0x1027db8, Func Offset: 0x68
	// Line 1331, Address: 0x1027dc0, Func Offset: 0x70
	// Line 1334, Address: 0x1027dc8, Func Offset: 0x78
	// Line 1335, Address: 0x1027dd0, Func Offset: 0x80
	// Line 1336, Address: 0x1027ddc, Func Offset: 0x8c
	// Line 1338, Address: 0x1027de8, Func Offset: 0x98
	// Line 1339, Address: 0x1027df0, Func Offset: 0xa0
	// Line 1340, Address: 0x1027df8, Func Offset: 0xa8
	// Line 1341, Address: 0x1027e00, Func Offset: 0xb0
	// Line 1343, Address: 0x1027e0c, Func Offset: 0xbc
	// Line 1344, Address: 0x1027e14, Func Offset: 0xc4
	// Line 1345, Address: 0x1027e1c, Func Offset: 0xcc
	// Line 1346, Address: 0x1027e24, Func Offset: 0xd4
	// Line 1348, Address: 0x1027e30, Func Offset: 0xe0
	// Line 1349, Address: 0x1027e38, Func Offset: 0xe8
	// Line 1350, Address: 0x1027e40, Func Offset: 0xf0
	// Line 1353, Address: 0x1027e48, Func Offset: 0xf8
	// Line 1354, Address: 0x1027e50, Func Offset: 0x100
	// Line 1357, Address: 0x1027e58, Func Offset: 0x108
	// Line 1358, Address: 0x1027e9c, Func Offset: 0x14c
	// Line 1359, Address: 0x1027ee0, Func Offset: 0x190
	// Line 1360, Address: 0x1027f24, Func Offset: 0x1d4
	// Line 1362, Address: 0x1027f68, Func Offset: 0x218
	// Func End, Address: 0x1027f98, Func Offset: 0x248
}

// 
// Start address: 0x1027fa0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1380, Address: 0x1027fa0, Func Offset: 0
	// Line 1381, Address: 0x1027fc0, Func Offset: 0x20
	// Line 1382, Address: 0x1027fe0, Func Offset: 0x40
	// Func End, Address: 0x1027ff0, Func Offset: 0x50
}

// 
// Start address: 0x1027ff0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1384, Address: 0x1027ff0, Func Offset: 0
	// Line 1385, Address: 0x1028010, Func Offset: 0x20
	// Line 1386, Address: 0x1028014, Func Offset: 0x24
	// Line 1387, Address: 0x1028034, Func Offset: 0x44
	// Func End, Address: 0x1028044, Func Offset: 0x54
}

// 
// Start address: 0x1028050
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1394, Address: 0x1028050, Func Offset: 0
	// Line 1400, Address: 0x1028080, Func Offset: 0x30
	// Line 1401, Address: 0x1028090, Func Offset: 0x40
	// Line 1407, Address: 0x10280a0, Func Offset: 0x50
	// Line 1408, Address: 0x10280bc, Func Offset: 0x6c
	// Line 1409, Address: 0x10280c0, Func Offset: 0x70
	// Line 1410, Address: 0x10280dc, Func Offset: 0x8c
	// Line 1411, Address: 0x10280e0, Func Offset: 0x90
	// Line 1412, Address: 0x1028100, Func Offset: 0xb0
	// Line 1413, Address: 0x1028108, Func Offset: 0xb8
	// Line 1414, Address: 0x1028128, Func Offset: 0xd8
	// Line 1415, Address: 0x1028130, Func Offset: 0xe0
	// Line 1416, Address: 0x1028178, Func Offset: 0x128
	// Line 1418, Address: 0x1028184, Func Offset: 0x134
	// Line 1420, Address: 0x10281a0, Func Offset: 0x150
	// Line 1425, Address: 0x10281a8, Func Offset: 0x158
	// Line 1426, Address: 0x10281b4, Func Offset: 0x164
	// Line 1429, Address: 0x10281c0, Func Offset: 0x170
	// Line 1430, Address: 0x10281c8, Func Offset: 0x178
	// Line 1431, Address: 0x10281e8, Func Offset: 0x198
	// Line 1432, Address: 0x1028204, Func Offset: 0x1b4
	// Line 1433, Address: 0x102820c, Func Offset: 0x1bc
	// Line 1434, Address: 0x102822c, Func Offset: 0x1dc
	// Line 1436, Address: 0x1028248, Func Offset: 0x1f8
	// Line 1437, Address: 0x1028250, Func Offset: 0x200
	// Line 1438, Address: 0x1028258, Func Offset: 0x208
	// Line 1439, Address: 0x1028264, Func Offset: 0x214
	// Line 1440, Address: 0x102827c, Func Offset: 0x22c
	// Line 1442, Address: 0x102828c, Func Offset: 0x23c
	// Line 1445, Address: 0x1028298, Func Offset: 0x248
	// Line 1446, Address: 0x10282a0, Func Offset: 0x250
	// Line 1447, Address: 0x10282a4, Func Offset: 0x254
	// Func End, Address: 0x10282c4, Func Offset: 0x274
}

// 
// Start address: 0x10282d0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1467, Address: 0x10282d0, Func Offset: 0
	// Line 1475, Address: 0x10282f8, Func Offset: 0x28
	// Line 1476, Address: 0x102835c, Func Offset: 0x8c
	// Line 1482, Address: 0x1028364, Func Offset: 0x94
	// Line 1483, Address: 0x102836c, Func Offset: 0x9c
	// Line 1484, Address: 0x102838c, Func Offset: 0xbc
	// Line 1485, Address: 0x10283a8, Func Offset: 0xd8
	// Line 1486, Address: 0x10283b0, Func Offset: 0xe0
	// Line 1487, Address: 0x10283d0, Func Offset: 0x100
	// Line 1490, Address: 0x10283ec, Func Offset: 0x11c
	// Line 1491, Address: 0x10283f4, Func Offset: 0x124
	// Line 1492, Address: 0x10283fc, Func Offset: 0x12c
	// Line 1493, Address: 0x1028408, Func Offset: 0x138
	// Line 1494, Address: 0x1028420, Func Offset: 0x150
	// Line 1495, Address: 0x1028428, Func Offset: 0x158
	// Line 1500, Address: 0x1028438, Func Offset: 0x168
	// Line 1503, Address: 0x1028444, Func Offset: 0x174
	// Line 1504, Address: 0x102844c, Func Offset: 0x17c
	// Line 1505, Address: 0x1028450, Func Offset: 0x180
	// Func End, Address: 0x102846c, Func Offset: 0x19c
}

// 
// Start address: 0x1028470
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1519, Address: 0x1028470, Func Offset: 0
	// Line 1526, Address: 0x102848c, Func Offset: 0x1c
	// Line 1527, Address: 0x1028490, Func Offset: 0x20
	// Line 1528, Address: 0x1028498, Func Offset: 0x28
	// Line 1529, Address: 0x10284bc, Func Offset: 0x4c
	// Line 1530, Address: 0x10284c8, Func Offset: 0x58
	// Line 1531, Address: 0x10284e0, Func Offset: 0x70
	// Line 1532, Address: 0x10284f4, Func Offset: 0x84
	// Line 1537, Address: 0x102850c, Func Offset: 0x9c
	// Func End, Address: 0x1028524, Func Offset: 0xb4
}

// 
// Start address: 0x1028530
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1551, Address: 0x1028530, Func Offset: 0
	// Line 1552, Address: 0x102853c, Func Offset: 0xc
	// Line 1553, Address: 0x1028568, Func Offset: 0x38
	// Line 1554, Address: 0x10285b4, Func Offset: 0x84
	// Line 1555, Address: 0x10285e0, Func Offset: 0xb0
	// Line 1557, Address: 0x102862c, Func Offset: 0xfc
	// Line 1563, Address: 0x1028638, Func Offset: 0x108
	// Line 1564, Address: 0x102863c, Func Offset: 0x10c
	// Func End, Address: 0x1028648, Func Offset: 0x118
}

// 
// Start address: 0x1028650
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1581, Address: 0x1028650, Func Offset: 0
	// Line 1582, Address: 0x102866c, Func Offset: 0x1c
	// Line 1584, Address: 0x1028688, Func Offset: 0x38
	// Func End, Address: 0x1028698, Func Offset: 0x48
}

// 
// Start address: 0x10286a0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1586, Address: 0x10286a0, Func Offset: 0
	// Line 1587, Address: 0x10286bc, Func Offset: 0x1c
	// Line 1588, Address: 0x10286c0, Func Offset: 0x20
	// Line 1590, Address: 0x10286dc, Func Offset: 0x3c
	// Func End, Address: 0x10286ec, Func Offset: 0x4c
}

// 
// Start address: 0x10286f0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1592, Address: 0x10286f0, Func Offset: 0
	// Line 1593, Address: 0x1028704, Func Offset: 0x14
	// Line 1595, Address: 0x1028720, Func Offset: 0x30
	// Func End, Address: 0x1028730, Func Offset: 0x40
}

// 
// Start address: 0x1028730
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1597, Address: 0x1028730, Func Offset: 0
	// Line 1598, Address: 0x102874c, Func Offset: 0x1c
	// Line 1600, Address: 0x1028768, Func Offset: 0x38
	// Func End, Address: 0x1028778, Func Offset: 0x48
}

// 
// Start address: 0x1028780
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1602, Address: 0x1028780, Func Offset: 0
	// Line 1603, Address: 0x1028798, Func Offset: 0x18
	// Line 1604, Address: 0x10287a8, Func Offset: 0x28
	// Line 1605, Address: 0x10287b8, Func Offset: 0x38
	// Line 1606, Address: 0x10287c4, Func Offset: 0x44
	// Line 1608, Address: 0x10287d0, Func Offset: 0x50
	// Line 1609, Address: 0x10287fc, Func Offset: 0x7c
	// Line 1612, Address: 0x1028828, Func Offset: 0xa8
	// Func End, Address: 0x1028834, Func Offset: 0xb4
}

// 
// Start address: 0x1028840
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1628, Address: 0x1028840, Func Offset: 0
	// Line 1633, Address: 0x1028858, Func Offset: 0x18
	// Line 1634, Address: 0x1028864, Func Offset: 0x24
	// Line 1635, Address: 0x1028870, Func Offset: 0x30
	// Line 1636, Address: 0x1028878, Func Offset: 0x38
	// Line 1637, Address: 0x102887c, Func Offset: 0x3c
	// Line 1639, Address: 0x1028894, Func Offset: 0x54
	// Line 1640, Address: 0x10288a0, Func Offset: 0x60
	// Line 1641, Address: 0x10288ac, Func Offset: 0x6c
	// Line 1642, Address: 0x10288b4, Func Offset: 0x74
	// Line 1644, Address: 0x10288b8, Func Offset: 0x78
	// Line 1646, Address: 0x10288d0, Func Offset: 0x90
	// Func End, Address: 0x10288f0, Func Offset: 0xb0
}

// 
// Start address: 0x10288f0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1650, Address: 0x10288f0, Func Offset: 0
	// Line 1651, Address: 0x1028908, Func Offset: 0x18
	// Line 1652, Address: 0x1028928, Func Offset: 0x38
	// Func End, Address: 0x1028938, Func Offset: 0x48
}

// 
// Start address: 0x1028940
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1657, Address: 0x1028940, Func Offset: 0
	// Line 1661, Address: 0x1028960, Func Offset: 0x20
	// Line 1664, Address: 0x102897c, Func Offset: 0x3c
	// Line 1668, Address: 0x10289a4, Func Offset: 0x64
	// Line 1669, Address: 0x10289b0, Func Offset: 0x70
	// Line 1671, Address: 0x10289d8, Func Offset: 0x98
	// Func End, Address: 0x10289e8, Func Offset: 0xa8
}

// 
// Start address: 0x10289f0
void mapinit()
{
	// Line 1781, Address: 0x10289f0, Func Offset: 0
	// Line 1783, Address: 0x10289f8, Func Offset: 0x8
	// Line 1784, Address: 0x1028a0c, Func Offset: 0x1c
	// Line 1786, Address: 0x1028a20, Func Offset: 0x30
	// Line 1787, Address: 0x1028a38, Func Offset: 0x48
	// Line 1788, Address: 0x1028a58, Func Offset: 0x68
	// Func End, Address: 0x1028a68, Func Offset: 0x78
}

// 
// Start address: 0x1028a70
void mapset()
{
	// Line 1799, Address: 0x1028a70, Func Offset: 0
	// Func End, Address: 0x1028a78, Func Offset: 0x8
}

