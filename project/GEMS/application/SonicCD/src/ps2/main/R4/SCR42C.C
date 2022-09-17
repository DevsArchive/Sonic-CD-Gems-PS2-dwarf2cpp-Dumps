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
// Start address: 0x1026a30
void enecginit()
{
	// Line 129, Address: 0x1026a30, Func Offset: 0
	// Func End, Address: 0x1026a38, Func Offset: 0x8
}

// 
// Start address: 0x1026a40
void divdevset()
{
	// Line 133, Address: 0x1026a40, Func Offset: 0
	// Func End, Address: 0x1026a48, Func Offset: 0x8
}

// 
// Start address: 0x1026a50
_anon1* main_chk()
{
	// Line 181, Address: 0x1026a50, Func Offset: 0
	// Line 182, Address: 0x1026a70, Func Offset: 0x20
	// Line 183, Address: 0x1026a78, Func Offset: 0x28
	// Func End, Address: 0x1026a80, Func Offset: 0x30
}

// 
// Start address: 0x1026a80
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 186, Address: 0x1026a80, Func Offset: 0
	// Line 193, Address: 0x1026a8c, Func Offset: 0xc
	// Line 198, Address: 0x1026ac0, Func Offset: 0x40
	// Line 200, Address: 0x1026b08, Func Offset: 0x88
	// Line 201, Address: 0x1026b0c, Func Offset: 0x8c
	// Line 202, Address: 0x1026b28, Func Offset: 0xa8
	// Line 203, Address: 0x1026b3c, Func Offset: 0xbc
	// Line 204, Address: 0x1026b58, Func Offset: 0xd8
	// Line 205, Address: 0x1026b6c, Func Offset: 0xec
	// Line 206, Address: 0x1026b88, Func Offset: 0x108
	// Line 207, Address: 0x1026b9c, Func Offset: 0x11c
	// Line 208, Address: 0x1026bb8, Func Offset: 0x138
	// Line 209, Address: 0x1026bcc, Func Offset: 0x14c
	// Line 211, Address: 0x1026be8, Func Offset: 0x168
	// Line 212, Address: 0x1026c0c, Func Offset: 0x18c
	// Line 213, Address: 0x1026c18, Func Offset: 0x198
	// Line 215, Address: 0x1026c24, Func Offset: 0x1a4
	// Line 216, Address: 0x1026c40, Func Offset: 0x1c0
	// Line 218, Address: 0x1026c4c, Func Offset: 0x1cc
	// Line 219, Address: 0x1026c54, Func Offset: 0x1d4
	// Func End, Address: 0x1026c68, Func Offset: 0x1e8
}

// 
// Start address: 0x1026c70
void playposiset()
{
	unsigned short endplpositbl[16];
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 223, Address: 0x1026c70, Func Offset: 0
	// Line 224, Address: 0x1026c84, Func Offset: 0x14
	// Line 234, Address: 0x1026cb8, Func Offset: 0x48
	// Line 238, Address: 0x1026cd4, Func Offset: 0x64
	// Line 246, Address: 0x1026d00, Func Offset: 0x90
	// Line 248, Address: 0x1026d14, Func Offset: 0xa4
	// Line 249, Address: 0x1026d1c, Func Offset: 0xac
	// Line 250, Address: 0x1026d2c, Func Offset: 0xbc
	// Line 251, Address: 0x1026d3c, Func Offset: 0xcc
	// Line 252, Address: 0x1026d50, Func Offset: 0xe0
	// Line 256, Address: 0x1026d58, Func Offset: 0xe8
	// Line 258, Address: 0x1026d70, Func Offset: 0x100
	// Line 259, Address: 0x1026d88, Func Offset: 0x118
	// Line 260, Address: 0x1026dac, Func Offset: 0x13c
	// Line 261, Address: 0x1026dd0, Func Offset: 0x160
	// Line 265, Address: 0x1026dd8, Func Offset: 0x168
	// Line 266, Address: 0x1026dec, Func Offset: 0x17c
	// Line 267, Address: 0x1026e10, Func Offset: 0x1a0
	// Line 271, Address: 0x1026e34, Func Offset: 0x1c4
	// Line 272, Address: 0x1026e48, Func Offset: 0x1d8
	// Line 273, Address: 0x1026e54, Func Offset: 0x1e4
	// Line 275, Address: 0x1026e5c, Func Offset: 0x1ec
	// Line 279, Address: 0x1026e60, Func Offset: 0x1f0
	// Line 280, Address: 0x1026e84, Func Offset: 0x214
	// Line 282, Address: 0x1026e94, Func Offset: 0x224
	// Line 284, Address: 0x1026e9c, Func Offset: 0x22c
	// Line 285, Address: 0x1026eb0, Func Offset: 0x240
	// Line 286, Address: 0x1026ebc, Func Offset: 0x24c
	// Line 288, Address: 0x1026ec4, Func Offset: 0x254
	// Line 291, Address: 0x1026ec8, Func Offset: 0x258
	// Line 292, Address: 0x1026eec, Func Offset: 0x27c
	// Line 295, Address: 0x1026efc, Func Offset: 0x28c
	// Line 298, Address: 0x1026f04, Func Offset: 0x294
	// Line 300, Address: 0x1026f10, Func Offset: 0x2a0
	// Line 301, Address: 0x1026f14, Func Offset: 0x2a4
	// Line 302, Address: 0x1026f2c, Func Offset: 0x2bc
	// Line 303, Address: 0x1026f44, Func Offset: 0x2d4
	// Line 304, Address: 0x1026f5c, Func Offset: 0x2ec
	// Line 307, Address: 0x1026f74, Func Offset: 0x304
	// Func End, Address: 0x1026f90, Func Offset: 0x320
}

// 
// Start address: 0x1026f90
void scrbinit(short yWk)
{
	_anon8 data;
	// Line 311, Address: 0x1026f90, Func Offset: 0
	// Line 315, Address: 0x1026f98, Func Offset: 0x8
	// Line 316, Address: 0x1026f9c, Func Offset: 0xc
	// Line 317, Address: 0x1026fa8, Func Offset: 0x18
	// Line 319, Address: 0x1026fb4, Func Offset: 0x24
	// Line 320, Address: 0x1026fc0, Func Offset: 0x30
	// Line 321, Address: 0x1026fc8, Func Offset: 0x38
	// Line 322, Address: 0x1026fd4, Func Offset: 0x44
	// Line 324, Address: 0x1026fe0, Func Offset: 0x50
	// Line 325, Address: 0x1027004, Func Offset: 0x74
	// Line 326, Address: 0x1027030, Func Offset: 0xa0
	// Line 331, Address: 0x102705c, Func Offset: 0xcc
	// Func End, Address: 0x1027068, Func Offset: 0xd8
}

// 
// Start address: 0x1027070
void scroll()
{
	_anon8 data;
	_anon2 temp1;
	_anon2 temp2;
	int hsCount;
	int i;
	// Line 335, Address: 0x1027070, Func Offset: 0
	// Line 341, Address: 0x1027080, Func Offset: 0x10
	// Line 344, Address: 0x1027090, Func Offset: 0x20
	// Line 345, Address: 0x10270bc, Func Offset: 0x4c
	// Line 346, Address: 0x10270c4, Func Offset: 0x54
	// Line 347, Address: 0x10270cc, Func Offset: 0x5c
	// Line 349, Address: 0x10270d4, Func Offset: 0x64
	// Line 350, Address: 0x10270e4, Func Offset: 0x74
	// Line 354, Address: 0x10270f4, Func Offset: 0x84
	// Line 355, Address: 0x1027124, Func Offset: 0xb4
	// Line 356, Address: 0x102713c, Func Offset: 0xcc
	// Line 358, Address: 0x102714c, Func Offset: 0xdc
	// Line 359, Address: 0x102715c, Func Offset: 0xec
	// Line 360, Address: 0x102716c, Func Offset: 0xfc
	// Line 362, Address: 0x102717c, Func Offset: 0x10c
	// Line 363, Address: 0x10271b0, Func Offset: 0x140
	// Line 364, Address: 0x10271b8, Func Offset: 0x148
	// Line 366, Address: 0x10271c0, Func Offset: 0x150
	// Line 367, Address: 0x10271c4, Func Offset: 0x154
	// Line 370, Address: 0x10271d0, Func Offset: 0x160
	// Line 371, Address: 0x1027200, Func Offset: 0x190
	// Line 372, Address: 0x1027204, Func Offset: 0x194
	// Line 374, Address: 0x1027214, Func Offset: 0x1a4
	// Line 375, Address: 0x1027230, Func Offset: 0x1c0
	// Line 376, Address: 0x1027254, Func Offset: 0x1e4
	// Line 377, Address: 0x1027260, Func Offset: 0x1f0
	// Line 378, Address: 0x102726c, Func Offset: 0x1fc
	// Line 379, Address: 0x1027278, Func Offset: 0x208
	// Line 381, Address: 0x10272c8, Func Offset: 0x258
	// Func End, Address: 0x10272e0, Func Offset: 0x270
}

// 
// Start address: 0x10272e0
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	_anon6 data1;
	_anon6 data2;
	short avp;
	int i;
	// Line 419, Address: 0x10272e0, Func Offset: 0
	// Line 426, Address: 0x10272fc, Func Offset: 0x1c
	// Line 427, Address: 0x1027304, Func Offset: 0x24
	// Line 428, Address: 0x1027310, Func Offset: 0x30
	// Line 429, Address: 0x102731c, Func Offset: 0x3c
	// Line 430, Address: 0x1027330, Func Offset: 0x50
	// Line 431, Address: 0x1027344, Func Offset: 0x64
	// Line 432, Address: 0x1027348, Func Offset: 0x68
	// Line 433, Address: 0x102735c, Func Offset: 0x7c
	// Line 435, Address: 0x1027360, Func Offset: 0x80
	// Line 436, Address: 0x102736c, Func Offset: 0x8c
	// Line 437, Address: 0x1027394, Func Offset: 0xb4
	// Line 438, Address: 0x10273a4, Func Offset: 0xc4
	// Line 442, Address: 0x10273a8, Func Offset: 0xc8
	// Line 447, Address: 0x10273cc, Func Offset: 0xec
	// Line 448, Address: 0x10273d4, Func Offset: 0xf4
	// Line 449, Address: 0x1027424, Func Offset: 0x144
	// Line 450, Address: 0x1027428, Func Offset: 0x148
	// Line 451, Address: 0x1027434, Func Offset: 0x154
	// Line 452, Address: 0x1027440, Func Offset: 0x160
	// Line 453, Address: 0x102744c, Func Offset: 0x16c
	// Line 455, Address: 0x1027464, Func Offset: 0x184
	// Line 456, Address: 0x1027468, Func Offset: 0x188
	// Line 458, Address: 0x1027490, Func Offset: 0x1b0
	// Line 460, Address: 0x102749c, Func Offset: 0x1bc
	// Line 462, Address: 0x10274a4, Func Offset: 0x1c4
	// Line 463, Address: 0x10274ac, Func Offset: 0x1cc
	// Line 464, Address: 0x10274b0, Func Offset: 0x1d0
	// Line 465, Address: 0x10274bc, Func Offset: 0x1dc
	// Line 466, Address: 0x10274c8, Func Offset: 0x1e8
	// Line 467, Address: 0x10274d4, Func Offset: 0x1f4
	// Line 468, Address: 0x10274e0, Func Offset: 0x200
	// Line 470, Address: 0x10274f8, Func Offset: 0x218
	// Line 471, Address: 0x10274fc, Func Offset: 0x21c
	// Line 473, Address: 0x1027524, Func Offset: 0x244
	// Line 475, Address: 0x1027530, Func Offset: 0x250
	// Func End, Address: 0x1027548, Func Offset: 0x268
}

// 
// Start address: 0x1027550
void scroll_h()
{
	unsigned short wD4;
	// Line 487, Address: 0x1027550, Func Offset: 0
	// Line 490, Address: 0x102755c, Func Offset: 0xc
	// Line 491, Address: 0x1027568, Func Offset: 0x18
	// Line 492, Address: 0x1027570, Func Offset: 0x20
	// Line 493, Address: 0x10275a4, Func Offset: 0x54
	// Line 494, Address: 0x10275b8, Func Offset: 0x68
	// Line 495, Address: 0x10275e4, Func Offset: 0x94
	// Line 496, Address: 0x10275f8, Func Offset: 0xa8
	// Line 499, Address: 0x1027600, Func Offset: 0xb0
	// Line 504, Address: 0x1027614, Func Offset: 0xc4
	// Func End, Address: 0x1027628, Func Offset: 0xd8
}

// 
// Start address: 0x1027630
void scrh_move()
{
	unsigned short wD0;
	// Line 506, Address: 0x1027630, Func Offset: 0
	// Line 509, Address: 0x102763c, Func Offset: 0xc
	// Line 510, Address: 0x1027648, Func Offset: 0x18
	// Line 511, Address: 0x102765c, Func Offset: 0x2c
	// Line 512, Address: 0x1027670, Func Offset: 0x40
	// Line 514, Address: 0x102767c, Func Offset: 0x4c
	// Line 515, Address: 0x1027684, Func Offset: 0x54
	// Line 516, Address: 0x102768c, Func Offset: 0x5c
	// Line 517, Address: 0x10276a4, Func Offset: 0x74
	// Line 518, Address: 0x10276b0, Func Offset: 0x80
	// Line 520, Address: 0x10276b8, Func Offset: 0x88
	// Line 523, Address: 0x10276c4, Func Offset: 0x94
	// Func End, Address: 0x10276d8, Func Offset: 0xa8
}

// 
// Start address: 0x10276e0
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 526, Address: 0x10276e0, Func Offset: 0
	// Line 529, Address: 0x10276ec, Func Offset: 0xc
	// Line 530, Address: 0x102770c, Func Offset: 0x2c
	// Line 533, Address: 0x1027714, Func Offset: 0x34
	// Line 534, Address: 0x102772c, Func Offset: 0x4c
	// Line 535, Address: 0x102775c, Func Offset: 0x7c
	// Line 538, Address: 0x1027768, Func Offset: 0x88
	// Line 539, Address: 0x1027770, Func Offset: 0x90
	// Line 540, Address: 0x1027784, Func Offset: 0xa4
	// Line 541, Address: 0x10277b4, Func Offset: 0xd4
	// Line 542, Address: 0x10277c0, Func Offset: 0xe0
	// Line 544, Address: 0x10277c8, Func Offset: 0xe8
	// Func End, Address: 0x10277d8, Func Offset: 0xf8
}

// 
// Start address: 0x10277e0
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 547, Address: 0x10277e0, Func Offset: 0
	// Line 550, Address: 0x10277ec, Func Offset: 0xc
	// Line 551, Address: 0x102780c, Func Offset: 0x2c
	// Line 554, Address: 0x1027814, Func Offset: 0x34
	// Line 555, Address: 0x102782c, Func Offset: 0x4c
	// Line 556, Address: 0x102785c, Func Offset: 0x7c
	// Line 559, Address: 0x1027868, Func Offset: 0x88
	// Line 560, Address: 0x1027870, Func Offset: 0x90
	// Line 561, Address: 0x1027884, Func Offset: 0xa4
	// Line 562, Address: 0x10278b4, Func Offset: 0xd4
	// Line 563, Address: 0x10278c0, Func Offset: 0xe0
	// Line 565, Address: 0x10278c8, Func Offset: 0xe8
	// Func End, Address: 0x10278d8, Func Offset: 0xf8
}

// 
// Start address: 0x10278e0
void scroll_v()
{
	unsigned short wD0;
	// Line 584, Address: 0x10278e0, Func Offset: 0
	// Line 587, Address: 0x10278ec, Func Offset: 0xc
	// Line 588, Address: 0x1027918, Func Offset: 0x38
	// Line 589, Address: 0x1027930, Func Offset: 0x50
	// Line 592, Address: 0x1027938, Func Offset: 0x58
	// Line 593, Address: 0x1027950, Func Offset: 0x70
	// Line 594, Address: 0x1027958, Func Offset: 0x78
	// Line 595, Address: 0x1027978, Func Offset: 0x98
	// Line 596, Address: 0x102798c, Func Offset: 0xac
	// Line 597, Address: 0x1027998, Func Offset: 0xb8
	// Line 599, Address: 0x10279a0, Func Offset: 0xc0
	// Line 600, Address: 0x10279b4, Func Offset: 0xd4
	// Line 601, Address: 0x10279c4, Func Offset: 0xe4
	// Line 602, Address: 0x10279cc, Func Offset: 0xec
	// Line 603, Address: 0x10279d8, Func Offset: 0xf8
	// Line 605, Address: 0x10279e0, Func Offset: 0x100
	// Line 606, Address: 0x10279e8, Func Offset: 0x108
	// Line 607, Address: 0x10279fc, Func Offset: 0x11c
	// Line 608, Address: 0x1027a04, Func Offset: 0x124
	// Line 614, Address: 0x1027a0c, Func Offset: 0x12c
	// Line 615, Address: 0x1027a20, Func Offset: 0x140
	// Line 616, Address: 0x1027a28, Func Offset: 0x148
	// Line 617, Address: 0x1027a34, Func Offset: 0x154
	// Line 619, Address: 0x1027a3c, Func Offset: 0x15c
	// Line 620, Address: 0x1027a50, Func Offset: 0x170
	// Line 621, Address: 0x1027a58, Func Offset: 0x178
	// Line 626, Address: 0x1027a60, Func Offset: 0x180
	// Line 628, Address: 0x1027a68, Func Offset: 0x188
	// Func End, Address: 0x1027a7c, Func Offset: 0x19c
}

// 
// Start address: 0x1027a80
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 634, Address: 0x1027a80, Func Offset: 0
	// Line 637, Address: 0x1027a90, Func Offset: 0x10
	// Line 638, Address: 0x1027aac, Func Offset: 0x2c
	// Line 639, Address: 0x1027ab8, Func Offset: 0x38
	// Line 642, Address: 0x1027ac0, Func Offset: 0x40
	// Line 643, Address: 0x1027acc, Func Offset: 0x4c
	// Line 644, Address: 0x1027ae4, Func Offset: 0x64
	// Line 647, Address: 0x1027b00, Func Offset: 0x80
	// Line 648, Address: 0x1027b10, Func Offset: 0x90
	// Line 649, Address: 0x1027b1c, Func Offset: 0x9c
	// Line 651, Address: 0x1027b24, Func Offset: 0xa4
	// Line 652, Address: 0x1027b44, Func Offset: 0xc4
	// Line 653, Address: 0x1027b50, Func Offset: 0xd0
	// Line 654, Address: 0x1027b58, Func Offset: 0xd8
	// Line 655, Address: 0x1027b78, Func Offset: 0xf8
	// Line 656, Address: 0x1027b84, Func Offset: 0x104
	// Line 658, Address: 0x1027b8c, Func Offset: 0x10c
	// Line 662, Address: 0x1027b98, Func Offset: 0x118
	// Func End, Address: 0x1027bac, Func Offset: 0x12c
}

// 
// Start address: 0x1027bb0
void sv_move_main1(unsigned short wD0)
{
	// Line 666, Address: 0x1027bb0, Func Offset: 0
	// Line 668, Address: 0x1027bbc, Func Offset: 0xc
	// Line 669, Address: 0x1027bdc, Func Offset: 0x2c
	// Line 670, Address: 0x1027be8, Func Offset: 0x38
	// Line 671, Address: 0x1027bf0, Func Offset: 0x40
	// Line 672, Address: 0x1027c10, Func Offset: 0x60
	// Line 673, Address: 0x1027c1c, Func Offset: 0x6c
	// Line 675, Address: 0x1027c24, Func Offset: 0x74
	// Line 678, Address: 0x1027c30, Func Offset: 0x80
	// Func End, Address: 0x1027c40, Func Offset: 0x90
}

// 
// Start address: 0x1027c40
void sv_move_main2(unsigned short wD0)
{
	// Line 681, Address: 0x1027c40, Func Offset: 0
	// Line 683, Address: 0x1027c4c, Func Offset: 0xc
	// Line 684, Address: 0x1027c6c, Func Offset: 0x2c
	// Line 685, Address: 0x1027c78, Func Offset: 0x38
	// Line 686, Address: 0x1027c80, Func Offset: 0x40
	// Line 687, Address: 0x1027ca0, Func Offset: 0x60
	// Line 688, Address: 0x1027cac, Func Offset: 0x6c
	// Line 690, Address: 0x1027cb4, Func Offset: 0x74
	// Line 693, Address: 0x1027cc0, Func Offset: 0x80
	// Func End, Address: 0x1027cd0, Func Offset: 0x90
}

// 
// Start address: 0x1027cd0
void sv_move_sub2()
{
	// Line 696, Address: 0x1027cd0, Func Offset: 0
	// Line 697, Address: 0x1027cd8, Func Offset: 0x8
	// Line 698, Address: 0x1027ce0, Func Offset: 0x10
	// Line 699, Address: 0x1027cec, Func Offset: 0x1c
	// Func End, Address: 0x1027cfc, Func Offset: 0x2c
}

// 
// Start address: 0x1027d00
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 702, Address: 0x1027d00, Func Offset: 0
	// Line 705, Address: 0x1027d0c, Func Offset: 0xc
	// Line 706, Address: 0x1027d10, Func Offset: 0x10
	// Line 707, Address: 0x1027d18, Func Offset: 0x18
	// Line 708, Address: 0x1027d34, Func Offset: 0x34
	// Line 709, Address: 0x1027d50, Func Offset: 0x50
	// Line 710, Address: 0x1027d5c, Func Offset: 0x5c
	// Line 712, Address: 0x1027d64, Func Offset: 0x64
	// Line 715, Address: 0x1027d70, Func Offset: 0x70
	// Func End, Address: 0x1027d80, Func Offset: 0x80
}

// 
// Start address: 0x1027d80
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 720, Address: 0x1027d80, Func Offset: 0
	// Line 724, Address: 0x1027d90, Func Offset: 0x10
	// Line 725, Address: 0x1027dac, Func Offset: 0x2c
	// Line 726, Address: 0x1027db8, Func Offset: 0x38
	// Line 728, Address: 0x1027dcc, Func Offset: 0x4c
	// Line 729, Address: 0x1027dd4, Func Offset: 0x54
	// Line 730, Address: 0x1027ddc, Func Offset: 0x5c
	// Line 731, Address: 0x1027de0, Func Offset: 0x60
	// Line 732, Address: 0x1027dec, Func Offset: 0x6c
	// Func End, Address: 0x1027e00, Func Offset: 0x80
}

// 
// Start address: 0x1027e00
void scrv_up_ch(_anon2 lD1)
{
	// Line 736, Address: 0x1027e00, Func Offset: 0
	// Line 737, Address: 0x1027e0c, Func Offset: 0xc
	// Line 738, Address: 0x1027e34, Func Offset: 0x34
	// Line 739, Address: 0x1027e48, Func Offset: 0x48
	// Line 740, Address: 0x1027e54, Func Offset: 0x54
	// Line 741, Address: 0x1027e68, Func Offset: 0x68
	// Line 742, Address: 0x1027e7c, Func Offset: 0x7c
	// Line 743, Address: 0x1027e90, Func Offset: 0x90
	// Line 746, Address: 0x1027e98, Func Offset: 0x98
	// Line 749, Address: 0x1027ea4, Func Offset: 0xa4
	// Line 751, Address: 0x1027eb0, Func Offset: 0xb0
	// Func End, Address: 0x1027ec0, Func Offset: 0xc0
}

// 
// Start address: 0x1027ec0
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 757, Address: 0x1027ec0, Func Offset: 0
	// Line 761, Address: 0x1027ed0, Func Offset: 0x10
	// Line 762, Address: 0x1027ed4, Func Offset: 0x14
	// Line 763, Address: 0x1027edc, Func Offset: 0x1c
	// Line 764, Address: 0x1027ee8, Func Offset: 0x28
	// Line 766, Address: 0x1027efc, Func Offset: 0x3c
	// Line 767, Address: 0x1027f04, Func Offset: 0x44
	// Line 768, Address: 0x1027f0c, Func Offset: 0x4c
	// Line 770, Address: 0x1027f10, Func Offset: 0x50
	// Line 772, Address: 0x1027f1c, Func Offset: 0x5c
	// Func End, Address: 0x1027f30, Func Offset: 0x70
}

// 
// Start address: 0x1027f30
void scrv_down_ch(_anon2 lD1)
{
	// Line 776, Address: 0x1027f30, Func Offset: 0
	// Line 777, Address: 0x1027f3c, Func Offset: 0xc
	// Line 778, Address: 0x1027f64, Func Offset: 0x34
	// Line 779, Address: 0x1027f70, Func Offset: 0x40
	// Line 780, Address: 0x1027f84, Func Offset: 0x54
	// Line 781, Address: 0x1027f98, Func Offset: 0x68
	// Line 782, Address: 0x1027fac, Func Offset: 0x7c
	// Line 783, Address: 0x1027fc0, Func Offset: 0x90
	// Line 785, Address: 0x1027fc8, Func Offset: 0x98
	// Line 788, Address: 0x1027fd4, Func Offset: 0xa4
	// Line 790, Address: 0x1027fe0, Func Offset: 0xb0
	// Func End, Address: 0x1027ff0, Func Offset: 0xc0
}

// 
// Start address: 0x1027ff0
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 793, Address: 0x1027ff0, Func Offset: 0
	// Line 796, Address: 0x1028000, Func Offset: 0x10
	// Line 798, Address: 0x102800c, Func Offset: 0x1c
	// Line 799, Address: 0x1028014, Func Offset: 0x24
	// Line 800, Address: 0x102801c, Func Offset: 0x2c
	// Line 802, Address: 0x1028020, Func Offset: 0x30
	// Line 803, Address: 0x1028048, Func Offset: 0x58
	// Line 806, Address: 0x1028054, Func Offset: 0x64
	// Line 807, Address: 0x1028088, Func Offset: 0x98
	// Line 808, Address: 0x102809c, Func Offset: 0xac
	// Line 810, Address: 0x10280c8, Func Offset: 0xd8
	// Line 811, Address: 0x10280dc, Func Offset: 0xec
	// Line 813, Address: 0x10280e4, Func Offset: 0xf4
	// Line 818, Address: 0x10280f8, Func Offset: 0x108
	// Func End, Address: 0x102810c, Func Offset: 0x11c
}

// 
// Start address: 0x1028110
void scrollb_hv(_anon2* lD4, _anon2* lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 822, Address: 0x1028110, Func Offset: 0
	// Line 825, Address: 0x102811c, Func Offset: 0xc
	// Line 826, Address: 0x102812c, Func Offset: 0x1c
	// Line 827, Address: 0x1028140, Func Offset: 0x30
	// Line 829, Address: 0x102814c, Func Offset: 0x3c
	// Line 831, Address: 0x1028180, Func Offset: 0x70
	// Line 832, Address: 0x1028194, Func Offset: 0x84
	// Line 833, Address: 0x10281a4, Func Offset: 0x94
	// Line 834, Address: 0x10281b8, Func Offset: 0xa8
	// Line 835, Address: 0x10281cc, Func Offset: 0xbc
	// Line 838, Address: 0x10281d4, Func Offset: 0xc4
	// Line 843, Address: 0x10281e8, Func Offset: 0xd8
	// Line 844, Address: 0x10281f8, Func Offset: 0xe8
	// Line 845, Address: 0x102820c, Func Offset: 0xfc
	// Line 846, Address: 0x1028224, Func Offset: 0x114
	// Line 848, Address: 0x1028230, Func Offset: 0x120
	// Line 850, Address: 0x1028264, Func Offset: 0x154
	// Line 851, Address: 0x1028278, Func Offset: 0x168
	// Line 852, Address: 0x1028288, Func Offset: 0x178
	// Line 853, Address: 0x102829c, Func Offset: 0x18c
	// Line 854, Address: 0x10282b0, Func Offset: 0x1a0
	// Line 857, Address: 0x10282b8, Func Offset: 0x1a8
	// Line 862, Address: 0x10282cc, Func Offset: 0x1bc
	// Func End, Address: 0x10282d8, Func Offset: 0x1c8
}

// 
// Start address: 0x10282e0
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 869, Address: 0x10282e0, Func Offset: 0
	// Line 872, Address: 0x10282ec, Func Offset: 0xc
	// Line 873, Address: 0x10282f8, Func Offset: 0x18
	// Line 875, Address: 0x1028304, Func Offset: 0x24
	// Line 876, Address: 0x1028330, Func Offset: 0x50
	// Line 877, Address: 0x1028344, Func Offset: 0x64
	// Line 878, Address: 0x1028374, Func Offset: 0x94
	// Line 879, Address: 0x1028388, Func Offset: 0xa8
	// Line 882, Address: 0x1028390, Func Offset: 0xb0
	// Line 887, Address: 0x10283a4, Func Offset: 0xc4
	// Func End, Address: 0x10283b4, Func Offset: 0xd4
}

// 
// Start address: 0x10283c0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 891, Address: 0x10283c0, Func Offset: 0
	// Line 895, Address: 0x10283d0, Func Offset: 0x10
	// Line 896, Address: 0x10283dc, Func Offset: 0x1c
	// Line 897, Address: 0x10283ec, Func Offset: 0x2c
	// Line 899, Address: 0x10283f8, Func Offset: 0x38
	// Line 900, Address: 0x1028400, Func Offset: 0x40
	// Line 901, Address: 0x1028408, Func Offset: 0x48
	// Line 903, Address: 0x1028414, Func Offset: 0x54
	// Line 904, Address: 0x1028420, Func Offset: 0x60
	// Line 905, Address: 0x1028434, Func Offset: 0x74
	// Line 906, Address: 0x1028440, Func Offset: 0x80
	// Line 907, Address: 0x1028454, Func Offset: 0x94
	// Line 908, Address: 0x1028464, Func Offset: 0xa4
	// Line 909, Address: 0x1028478, Func Offset: 0xb8
	// Line 910, Address: 0x1028494, Func Offset: 0xd4
	// Line 913, Address: 0x102849c, Func Offset: 0xdc
	// Line 918, Address: 0x10284bc, Func Offset: 0xfc
	// Func End, Address: 0x10284cc, Func Offset: 0x10c
}

// 
// Start address: 0x10284d0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 921, Address: 0x10284d0, Func Offset: 0
	// Line 925, Address: 0x10284e0, Func Offset: 0x10
	// Line 926, Address: 0x10284ec, Func Offset: 0x1c
	// Line 927, Address: 0x10284fc, Func Offset: 0x2c
	// Line 929, Address: 0x1028508, Func Offset: 0x38
	// Line 930, Address: 0x1028510, Func Offset: 0x40
	// Line 931, Address: 0x1028518, Func Offset: 0x48
	// Line 933, Address: 0x1028524, Func Offset: 0x54
	// Line 934, Address: 0x1028530, Func Offset: 0x60
	// Line 935, Address: 0x1028544, Func Offset: 0x74
	// Line 936, Address: 0x1028550, Func Offset: 0x80
	// Line 937, Address: 0x1028564, Func Offset: 0x94
	// Line 938, Address: 0x1028574, Func Offset: 0xa4
	// Line 939, Address: 0x1028588, Func Offset: 0xb8
	// Line 940, Address: 0x10285a4, Func Offset: 0xd4
	// Line 943, Address: 0x10285ac, Func Offset: 0xdc
	// Line 948, Address: 0x10285cc, Func Offset: 0xfc
	// Func End, Address: 0x10285dc, Func Offset: 0x10c
}

// 
// Start address: 0x10285e0
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 960, Address: 0x10285e0, Func Offset: 0
	// Line 964, Address: 0x10285f0, Func Offset: 0x10
	// Line 965, Address: 0x10285fc, Func Offset: 0x1c
	// Line 966, Address: 0x102860c, Func Offset: 0x2c
	// Line 968, Address: 0x1028618, Func Offset: 0x38
	// Line 969, Address: 0x1028620, Func Offset: 0x40
	// Line 970, Address: 0x1028628, Func Offset: 0x48
	// Line 972, Address: 0x1028634, Func Offset: 0x54
	// Line 973, Address: 0x1028640, Func Offset: 0x60
	// Line 974, Address: 0x1028654, Func Offset: 0x74
	// Line 975, Address: 0x1028660, Func Offset: 0x80
	// Line 976, Address: 0x1028674, Func Offset: 0x94
	// Line 977, Address: 0x1028684, Func Offset: 0xa4
	// Line 978, Address: 0x1028698, Func Offset: 0xb8
	// Line 979, Address: 0x10286b4, Func Offset: 0xd4
	// Line 982, Address: 0x10286bc, Func Offset: 0xdc
	// Line 987, Address: 0x10286dc, Func Offset: 0xfc
	// Func End, Address: 0x10286ec, Func Offset: 0x10c
}

// 
// Start address: 0x10286f0
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1001, Address: 0x10286f0, Func Offset: 0
	// Line 1007, Address: 0x102870c, Func Offset: 0x1c
	// Line 1008, Address: 0x1028710, Func Offset: 0x20
	// Line 1009, Address: 0x102871c, Func Offset: 0x2c
	// Line 1010, Address: 0x1028728, Func Offset: 0x38
	// Line 1011, Address: 0x1028730, Func Offset: 0x40
	// Line 1012, Address: 0x1028738, Func Offset: 0x48
	// Line 1014, Address: 0x1028754, Func Offset: 0x64
	// Line 1015, Address: 0x1028760, Func Offset: 0x70
	// Line 1016, Address: 0x102876c, Func Offset: 0x7c
	// Line 1017, Address: 0x1028774, Func Offset: 0x84
	// Line 1019, Address: 0x102877c, Func Offset: 0x8c
	// Func End, Address: 0x10287a0, Func Offset: 0xb0
}

// 
// Start address: 0x10287a0
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
	// Line 1032, Address: 0x10287a0, Func Offset: 0
	// Line 1041, Address: 0x10287c0, Func Offset: 0x20
	// Line 1042, Address: 0x10287c4, Func Offset: 0x24
	// Line 1043, Address: 0x10287d0, Func Offset: 0x30
	// Line 1044, Address: 0x10287dc, Func Offset: 0x3c
	// Line 1045, Address: 0x10287e4, Func Offset: 0x44
	// Line 1046, Address: 0x10287ec, Func Offset: 0x4c
	// Line 1048, Address: 0x1028808, Func Offset: 0x68
	// Line 1049, Address: 0x102880c, Func Offset: 0x6c
	// Line 1050, Address: 0x1028818, Func Offset: 0x78
	// Line 1051, Address: 0x1028824, Func Offset: 0x84
	// Line 1052, Address: 0x102882c, Func Offset: 0x8c
	// Line 1054, Address: 0x1028834, Func Offset: 0x94
	// Line 1055, Address: 0x1028840, Func Offset: 0xa0
	// Line 1056, Address: 0x1028854, Func Offset: 0xb4
	// Line 1058, Address: 0x1028860, Func Offset: 0xc0
	// Line 1059, Address: 0x1028868, Func Offset: 0xc8
	// Line 1061, Address: 0x1028870, Func Offset: 0xd0
	// Line 1063, Address: 0x1028890, Func Offset: 0xf0
	// Line 1069, Address: 0x10288bc, Func Offset: 0x11c
	// Line 1070, Address: 0x10288d0, Func Offset: 0x130
	// Line 1072, Address: 0x10288dc, Func Offset: 0x13c
	// Line 1073, Address: 0x10288e4, Func Offset: 0x144
	// Line 1074, Address: 0x10288ec, Func Offset: 0x14c
	// Line 1076, Address: 0x102890c, Func Offset: 0x16c
	// Line 1082, Address: 0x1028938, Func Offset: 0x198
	// Line 1083, Address: 0x102894c, Func Offset: 0x1ac
	// Line 1085, Address: 0x1028958, Func Offset: 0x1b8
	// Line 1086, Address: 0x1028960, Func Offset: 0x1c0
	// Line 1087, Address: 0x1028968, Func Offset: 0x1c8
	// Line 1089, Address: 0x1028988, Func Offset: 0x1e8
	// Line 1095, Address: 0x10289b4, Func Offset: 0x214
	// Line 1096, Address: 0x10289c8, Func Offset: 0x228
	// Line 1098, Address: 0x10289d4, Func Offset: 0x234
	// Line 1099, Address: 0x10289dc, Func Offset: 0x23c
	// Line 1100, Address: 0x10289e4, Func Offset: 0x244
	// Line 1102, Address: 0x1028a04, Func Offset: 0x264
	// Line 1111, Address: 0x1028a30, Func Offset: 0x290
	// Func End, Address: 0x1028a58, Func Offset: 0x2b8
}

// 
// Start address: 0x1028a60
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw)
{
	tagPOINT TilePoint;
	_anon2 lD4;
	unsigned short wD5;
	// Line 1128, Address: 0x1028a60, Func Offset: 0
	// Line 1133, Address: 0x1028a80, Func Offset: 0x20
	// Line 1134, Address: 0x1028a90, Func Offset: 0x30
	// Line 1135, Address: 0x1028aa8, Func Offset: 0x48
	// Line 1137, Address: 0x1028abc, Func Offset: 0x5c
	// Line 1138, Address: 0x1028ac4, Func Offset: 0x64
	// Line 1140, Address: 0x1028acc, Func Offset: 0x6c
	// Line 1142, Address: 0x1028aec, Func Offset: 0x8c
	// Line 1148, Address: 0x1028b18, Func Offset: 0xb8
	// Line 1149, Address: 0x1028b30, Func Offset: 0xd0
	// Line 1151, Address: 0x1028b44, Func Offset: 0xe4
	// Line 1152, Address: 0x1028b4c, Func Offset: 0xec
	// Line 1153, Address: 0x1028b54, Func Offset: 0xf4
	// Line 1155, Address: 0x1028b74, Func Offset: 0x114
	// Line 1161, Address: 0x1028ba0, Func Offset: 0x140
	// Line 1162, Address: 0x1028bb8, Func Offset: 0x158
	// Line 1164, Address: 0x1028bcc, Func Offset: 0x16c
	// Line 1165, Address: 0x1028bd4, Func Offset: 0x174
	// Line 1166, Address: 0x1028bdc, Func Offset: 0x17c
	// Line 1168, Address: 0x1028bfc, Func Offset: 0x19c
	// Line 1174, Address: 0x1028c28, Func Offset: 0x1c8
	// Line 1175, Address: 0x1028c40, Func Offset: 0x1e0
	// Line 1177, Address: 0x1028c54, Func Offset: 0x1f4
	// Line 1178, Address: 0x1028c5c, Func Offset: 0x1fc
	// Line 1179, Address: 0x1028c64, Func Offset: 0x204
	// Line 1181, Address: 0x1028c84, Func Offset: 0x224
	// Line 1190, Address: 0x1028cb0, Func Offset: 0x250
	// Func End, Address: 0x1028cc4, Func Offset: 0x264
}

// 
// Start address: 0x1028cd0
void scrollwrtc()
{
	// Line 1197, Address: 0x1028cd0, Func Offset: 0
	// Func End, Address: 0x1028cd8, Func Offset: 0x8
}

// 
// Start address: 0x1028ce0
void scrollwrtz()
{
	// Line 1202, Address: 0x1028ce0, Func Offset: 0
	// Func End, Address: 0x1028ce8, Func Offset: 0x8
}

// 
// Start address: 0x1028cf0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1220, Address: 0x1028cf0, Func Offset: 0
	// Line 1233, Address: 0x1028d18, Func Offset: 0x28
	// Line 1236, Address: 0x1028d38, Func Offset: 0x48
	// Line 1237, Address: 0x1028d4c, Func Offset: 0x5c
	// Line 1238, Address: 0x1028d60, Func Offset: 0x70
	// Line 1239, Address: 0x1028d74, Func Offset: 0x84
	// Line 1241, Address: 0x1028d88, Func Offset: 0x98
	// Line 1242, Address: 0x1028d94, Func Offset: 0xa4
	// Line 1243, Address: 0x1028da8, Func Offset: 0xb8
	// Func End, Address: 0x1028db8, Func Offset: 0xc8
}

// 
// Start address: 0x1028dc0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1247, Address: 0x1028dc0, Func Offset: 0
	// Line 1251, Address: 0x1028de8, Func Offset: 0x28
	// Line 1254, Address: 0x1028e08, Func Offset: 0x48
	// Line 1255, Address: 0x1028e1c, Func Offset: 0x5c
	// Line 1256, Address: 0x1028e30, Func Offset: 0x70
	// Line 1257, Address: 0x1028e44, Func Offset: 0x84
	// Line 1259, Address: 0x1028e58, Func Offset: 0x98
	// Line 1260, Address: 0x1028e64, Func Offset: 0xa4
	// Line 1261, Address: 0x1028e78, Func Offset: 0xb8
	// Func End, Address: 0x1028e88, Func Offset: 0xc8
}

// 
// Start address: 0x1028e90
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1281, Address: 0x1028e90, Func Offset: 0
	// Line 1285, Address: 0x1028eb8, Func Offset: 0x28
	// Line 1288, Address: 0x1028ed8, Func Offset: 0x48
	// Line 1289, Address: 0x1028eec, Func Offset: 0x5c
	// Line 1290, Address: 0x1028efc, Func Offset: 0x6c
	// Line 1291, Address: 0x1028f10, Func Offset: 0x80
	// Line 1293, Address: 0x1028f20, Func Offset: 0x90
	// Line 1294, Address: 0x1028f2c, Func Offset: 0x9c
	// Line 1295, Address: 0x1028f40, Func Offset: 0xb0
	// Func End, Address: 0x1028f50, Func Offset: 0xc0
}

// 
// Start address: 0x1028f50
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
	// Line 1314, Address: 0x1028f50, Func Offset: 0
	// Line 1315, Address: 0x1028f84, Func Offset: 0x34
	// Line 1320, Address: 0x1028f88, Func Offset: 0x38
	// Line 1322, Address: 0x1028f98, Func Offset: 0x48
	// Line 1323, Address: 0x1028f9c, Func Offset: 0x4c
	// Line 1324, Address: 0x1028fa4, Func Offset: 0x54
	// Line 1326, Address: 0x1028fb4, Func Offset: 0x64
	// Line 1328, Address: 0x1028fb8, Func Offset: 0x68
	// Line 1329, Address: 0x1028fc0, Func Offset: 0x70
	// Line 1332, Address: 0x1028fc8, Func Offset: 0x78
	// Line 1333, Address: 0x1028fd0, Func Offset: 0x80
	// Line 1334, Address: 0x1028fdc, Func Offset: 0x8c
	// Line 1336, Address: 0x1028fe8, Func Offset: 0x98
	// Line 1337, Address: 0x1028ff0, Func Offset: 0xa0
	// Line 1338, Address: 0x1028ff8, Func Offset: 0xa8
	// Line 1339, Address: 0x1029000, Func Offset: 0xb0
	// Line 1341, Address: 0x102900c, Func Offset: 0xbc
	// Line 1342, Address: 0x1029014, Func Offset: 0xc4
	// Line 1343, Address: 0x102901c, Func Offset: 0xcc
	// Line 1344, Address: 0x1029024, Func Offset: 0xd4
	// Line 1346, Address: 0x1029030, Func Offset: 0xe0
	// Line 1347, Address: 0x1029038, Func Offset: 0xe8
	// Line 1348, Address: 0x1029040, Func Offset: 0xf0
	// Line 1351, Address: 0x1029048, Func Offset: 0xf8
	// Line 1352, Address: 0x1029050, Func Offset: 0x100
	// Line 1355, Address: 0x1029058, Func Offset: 0x108
	// Line 1356, Address: 0x102909c, Func Offset: 0x14c
	// Line 1357, Address: 0x10290e0, Func Offset: 0x190
	// Line 1358, Address: 0x1029124, Func Offset: 0x1d4
	// Line 1360, Address: 0x1029168, Func Offset: 0x218
	// Func End, Address: 0x1029198, Func Offset: 0x248
}

// 
// Start address: 0x10291a0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1378, Address: 0x10291a0, Func Offset: 0
	// Line 1379, Address: 0x10291c0, Func Offset: 0x20
	// Line 1380, Address: 0x10291e0, Func Offset: 0x40
	// Func End, Address: 0x10291f0, Func Offset: 0x50
}

// 
// Start address: 0x10291f0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1382, Address: 0x10291f0, Func Offset: 0
	// Line 1383, Address: 0x1029210, Func Offset: 0x20
	// Line 1384, Address: 0x1029214, Func Offset: 0x24
	// Line 1385, Address: 0x1029234, Func Offset: 0x44
	// Func End, Address: 0x1029244, Func Offset: 0x54
}

// 
// Start address: 0x1029250
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1392, Address: 0x1029250, Func Offset: 0
	// Line 1398, Address: 0x1029280, Func Offset: 0x30
	// Line 1399, Address: 0x1029290, Func Offset: 0x40
	// Line 1405, Address: 0x10292a0, Func Offset: 0x50
	// Line 1406, Address: 0x10292bc, Func Offset: 0x6c
	// Line 1407, Address: 0x10292c0, Func Offset: 0x70
	// Line 1409, Address: 0x10292dc, Func Offset: 0x8c
	// Line 1410, Address: 0x10292fc, Func Offset: 0xac
	// Line 1411, Address: 0x102931c, Func Offset: 0xcc
	// Line 1412, Address: 0x1029324, Func Offset: 0xd4
	// Line 1414, Address: 0x1029344, Func Offset: 0xf4
	// Line 1415, Address: 0x1029364, Func Offset: 0x114
	// Line 1416, Address: 0x10293ac, Func Offset: 0x15c
	// Line 1418, Address: 0x10293b8, Func Offset: 0x168
	// Line 1420, Address: 0x10293d4, Func Offset: 0x184
	// Line 1425, Address: 0x10293dc, Func Offset: 0x18c
	// Line 1426, Address: 0x10293e8, Func Offset: 0x198
	// Line 1429, Address: 0x10293f4, Func Offset: 0x1a4
	// Line 1430, Address: 0x10293fc, Func Offset: 0x1ac
	// Line 1431, Address: 0x102941c, Func Offset: 0x1cc
	// Line 1432, Address: 0x1029438, Func Offset: 0x1e8
	// Line 1433, Address: 0x1029440, Func Offset: 0x1f0
	// Line 1434, Address: 0x1029460, Func Offset: 0x210
	// Line 1436, Address: 0x102947c, Func Offset: 0x22c
	// Line 1437, Address: 0x1029484, Func Offset: 0x234
	// Line 1438, Address: 0x102948c, Func Offset: 0x23c
	// Line 1439, Address: 0x1029498, Func Offset: 0x248
	// Line 1440, Address: 0x10294b0, Func Offset: 0x260
	// Line 1442, Address: 0x10294c0, Func Offset: 0x270
	// Line 1445, Address: 0x10294cc, Func Offset: 0x27c
	// Line 1446, Address: 0x10294d4, Func Offset: 0x284
	// Line 1447, Address: 0x10294d8, Func Offset: 0x288
	// Func End, Address: 0x10294f8, Func Offset: 0x2a8
}

// 
// Start address: 0x1029500
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1467, Address: 0x1029500, Func Offset: 0
	// Line 1475, Address: 0x1029528, Func Offset: 0x28
	// Line 1476, Address: 0x102958c, Func Offset: 0x8c
	// Line 1482, Address: 0x1029594, Func Offset: 0x94
	// Line 1483, Address: 0x102959c, Func Offset: 0x9c
	// Line 1484, Address: 0x10295bc, Func Offset: 0xbc
	// Line 1485, Address: 0x10295d8, Func Offset: 0xd8
	// Line 1486, Address: 0x10295e0, Func Offset: 0xe0
	// Line 1487, Address: 0x1029600, Func Offset: 0x100
	// Line 1490, Address: 0x102961c, Func Offset: 0x11c
	// Line 1491, Address: 0x1029624, Func Offset: 0x124
	// Line 1492, Address: 0x102962c, Func Offset: 0x12c
	// Line 1493, Address: 0x1029638, Func Offset: 0x138
	// Line 1494, Address: 0x1029650, Func Offset: 0x150
	// Line 1495, Address: 0x1029658, Func Offset: 0x158
	// Line 1500, Address: 0x1029668, Func Offset: 0x168
	// Line 1503, Address: 0x1029674, Func Offset: 0x174
	// Line 1504, Address: 0x102967c, Func Offset: 0x17c
	// Line 1505, Address: 0x1029680, Func Offset: 0x180
	// Func End, Address: 0x102969c, Func Offset: 0x19c
}

// 
// Start address: 0x10296a0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1519, Address: 0x10296a0, Func Offset: 0
	// Line 1526, Address: 0x10296bc, Func Offset: 0x1c
	// Line 1527, Address: 0x10296c0, Func Offset: 0x20
	// Line 1528, Address: 0x10296c8, Func Offset: 0x28
	// Line 1529, Address: 0x10296ec, Func Offset: 0x4c
	// Line 1530, Address: 0x10296f8, Func Offset: 0x58
	// Line 1531, Address: 0x1029710, Func Offset: 0x70
	// Line 1532, Address: 0x1029724, Func Offset: 0x84
	// Line 1537, Address: 0x102973c, Func Offset: 0x9c
	// Func End, Address: 0x1029754, Func Offset: 0xb4
}

// 
// Start address: 0x1029760
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1551, Address: 0x1029760, Func Offset: 0
	// Line 1552, Address: 0x102976c, Func Offset: 0xc
	// Line 1553, Address: 0x1029798, Func Offset: 0x38
	// Line 1554, Address: 0x10297e4, Func Offset: 0x84
	// Line 1555, Address: 0x1029810, Func Offset: 0xb0
	// Line 1557, Address: 0x102985c, Func Offset: 0xfc
	// Line 1563, Address: 0x1029868, Func Offset: 0x108
	// Line 1564, Address: 0x102986c, Func Offset: 0x10c
	// Func End, Address: 0x1029878, Func Offset: 0x118
}

// 
// Start address: 0x1029880
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1581, Address: 0x1029880, Func Offset: 0
	// Line 1582, Address: 0x102989c, Func Offset: 0x1c
	// Line 1584, Address: 0x10298b8, Func Offset: 0x38
	// Func End, Address: 0x10298c8, Func Offset: 0x48
}

// 
// Start address: 0x10298d0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1586, Address: 0x10298d0, Func Offset: 0
	// Line 1587, Address: 0x10298ec, Func Offset: 0x1c
	// Line 1588, Address: 0x10298f0, Func Offset: 0x20
	// Line 1590, Address: 0x102990c, Func Offset: 0x3c
	// Func End, Address: 0x102991c, Func Offset: 0x4c
}

// 
// Start address: 0x1029920
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1592, Address: 0x1029920, Func Offset: 0
	// Line 1593, Address: 0x1029934, Func Offset: 0x14
	// Line 1595, Address: 0x1029950, Func Offset: 0x30
	// Func End, Address: 0x1029960, Func Offset: 0x40
}

// 
// Start address: 0x1029960
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1597, Address: 0x1029960, Func Offset: 0
	// Line 1598, Address: 0x102997c, Func Offset: 0x1c
	// Line 1600, Address: 0x1029998, Func Offset: 0x38
	// Func End, Address: 0x10299a8, Func Offset: 0x48
}

// 
// Start address: 0x10299b0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1602, Address: 0x10299b0, Func Offset: 0
	// Line 1603, Address: 0x10299c8, Func Offset: 0x18
	// Line 1604, Address: 0x10299d8, Func Offset: 0x28
	// Line 1605, Address: 0x10299e8, Func Offset: 0x38
	// Line 1606, Address: 0x10299f4, Func Offset: 0x44
	// Line 1608, Address: 0x1029a00, Func Offset: 0x50
	// Line 1609, Address: 0x1029a2c, Func Offset: 0x7c
	// Line 1612, Address: 0x1029a58, Func Offset: 0xa8
	// Func End, Address: 0x1029a64, Func Offset: 0xb4
}

// 
// Start address: 0x1029a70
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1628, Address: 0x1029a70, Func Offset: 0
	// Line 1633, Address: 0x1029a88, Func Offset: 0x18
	// Line 1634, Address: 0x1029a94, Func Offset: 0x24
	// Line 1635, Address: 0x1029aa0, Func Offset: 0x30
	// Line 1636, Address: 0x1029aa8, Func Offset: 0x38
	// Line 1637, Address: 0x1029aac, Func Offset: 0x3c
	// Line 1639, Address: 0x1029ac4, Func Offset: 0x54
	// Line 1640, Address: 0x1029ad0, Func Offset: 0x60
	// Line 1641, Address: 0x1029adc, Func Offset: 0x6c
	// Line 1642, Address: 0x1029ae4, Func Offset: 0x74
	// Line 1644, Address: 0x1029ae8, Func Offset: 0x78
	// Line 1646, Address: 0x1029b00, Func Offset: 0x90
	// Func End, Address: 0x1029b20, Func Offset: 0xb0
}

// 
// Start address: 0x1029b20
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1650, Address: 0x1029b20, Func Offset: 0
	// Line 1651, Address: 0x1029b38, Func Offset: 0x18
	// Line 1652, Address: 0x1029b58, Func Offset: 0x38
	// Func End, Address: 0x1029b68, Func Offset: 0x48
}

// 
// Start address: 0x1029b70
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1657, Address: 0x1029b70, Func Offset: 0
	// Line 1661, Address: 0x1029b90, Func Offset: 0x20
	// Line 1664, Address: 0x1029bac, Func Offset: 0x3c
	// Line 1668, Address: 0x1029bd4, Func Offset: 0x64
	// Line 1669, Address: 0x1029be0, Func Offset: 0x70
	// Line 1671, Address: 0x1029c08, Func Offset: 0x98
	// Func End, Address: 0x1029c18, Func Offset: 0xa8
}

// 
// Start address: 0x1029c20
void mapinit()
{
	// Line 1781, Address: 0x1029c20, Func Offset: 0
	// Line 1783, Address: 0x1029c28, Func Offset: 0x8
	// Line 1784, Address: 0x1029c3c, Func Offset: 0x1c
	// Line 1787, Address: 0x1029c50, Func Offset: 0x30
	// Line 1788, Address: 0x1029c70, Func Offset: 0x50
	// Func End, Address: 0x1029c80, Func Offset: 0x60
}

// 
// Start address: 0x1029c80
void mapset()
{
	// Line 1799, Address: 0x1029c80, Func Offset: 0
	// Func End, Address: 0x1029c88, Func Offset: 0x8
}

