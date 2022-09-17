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

typedef int(*type_0)(int, int, int, int, int);

typedef _anon13 type_1[20];
typedef _anon13 type_2[0];
typedef unsigned char type_3[33];
typedef unsigned short type_4[6];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef _anon2* type_7[8];
typedef unsigned char type_8[2];
typedef int type_9[3];
typedef unsigned char type_10[64];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef short type_15[256];
typedef unsigned short type_16[2];
typedef _anon2* type_17[8];
typedef _anon1 type_18[128];
typedef unsigned short type_19[16];
typedef unsigned char type_20[4];

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

unsigned char z12awrttbl[33];
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
_anon2 scrz_h_posit;
_anon2 scrc_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
_anon2* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon2 vscroll;
short scra_vz;
short scra_hz;
_anon11 scrflaga;
_anon6 scroll_start;
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
void scrbinit(short d1, short d0);
void scroll();
void scroll_h();
void scrh_move();
void right_check(unsigned short wD0);
void left_check(unsigned short wD0);
void scroll_v();
void sv_move_main(short wD0);
void sv_move_main1(short wD0);
void sv_move_main2(short wD0);
void sv_move_sub2();
void sv_move_sub(short wD0);
void sv_move_minus(short wD1);
void scrv_up_ch(_anon2 lD1);
void sv_move_plus(short wD1);
void scrv_down_ch(_anon2 lD1);
void scrv_move(_anon2 lD1);
void scrollb_hv(int lD4, int lD5);
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

// 
// Start address: 0x1026630
void enecginit()
{
	// Line 133, Address: 0x1026630, Func Offset: 0
	// Func End, Address: 0x1026638, Func Offset: 0x8
}

// 
// Start address: 0x1026640
void divdevset()
{
	// Line 137, Address: 0x1026640, Func Offset: 0
	// Func End, Address: 0x1026648, Func Offset: 0x8
}

// 
// Start address: 0x1026650
_anon1* main_chk()
{
	// Line 152, Address: 0x1026650, Func Offset: 0
	// Line 153, Address: 0x1026664, Func Offset: 0x14
	// Line 155, Address: 0x1026674, Func Offset: 0x24
	// Line 156, Address: 0x102667c, Func Offset: 0x2c
	// Func End, Address: 0x1026684, Func Offset: 0x34
}

// 
// Start address: 0x1026690
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 167, Address: 0x1026690, Func Offset: 0
	// Line 168, Address: 0x102669c, Func Offset: 0xc
	// Line 173, Address: 0x10266d0, Func Offset: 0x40
	// Line 175, Address: 0x1026718, Func Offset: 0x88
	// Line 176, Address: 0x102671c, Func Offset: 0x8c
	// Line 177, Address: 0x1026738, Func Offset: 0xa8
	// Line 178, Address: 0x102674c, Func Offset: 0xbc
	// Line 179, Address: 0x1026768, Func Offset: 0xd8
	// Line 180, Address: 0x102677c, Func Offset: 0xec
	// Line 181, Address: 0x1026798, Func Offset: 0x108
	// Line 182, Address: 0x10267ac, Func Offset: 0x11c
	// Line 183, Address: 0x10267c8, Func Offset: 0x138
	// Line 184, Address: 0x10267dc, Func Offset: 0x14c
	// Line 186, Address: 0x10267f8, Func Offset: 0x168
	// Line 187, Address: 0x102681c, Func Offset: 0x18c
	// Line 188, Address: 0x1026828, Func Offset: 0x198
	// Line 190, Address: 0x1026834, Func Offset: 0x1a4
	// Line 191, Address: 0x1026850, Func Offset: 0x1c0
	// Line 193, Address: 0x102685c, Func Offset: 0x1cc
	// Line 194, Address: 0x1026864, Func Offset: 0x1d4
	// Func End, Address: 0x1026878, Func Offset: 0x1e8
}

// 
// Start address: 0x1026880
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short d0;
	short d1;
	unsigned short* a1;
	// Line 205, Address: 0x1026880, Func Offset: 0
	// Line 206, Address: 0x1026894, Func Offset: 0x14
	// Line 207, Address: 0x10268b0, Func Offset: 0x30
	// Line 218, Address: 0x10268e4, Func Offset: 0x64
	// Line 222, Address: 0x1026910, Func Offset: 0x90
	// Line 224, Address: 0x1026920, Func Offset: 0xa0
	// Line 225, Address: 0x1026928, Func Offset: 0xa8
	// Line 226, Address: 0x1026938, Func Offset: 0xb8
	// Line 227, Address: 0x1026948, Func Offset: 0xc8
	// Line 228, Address: 0x102695c, Func Offset: 0xdc
	// Line 231, Address: 0x1026964, Func Offset: 0xe4
	// Line 233, Address: 0x102697c, Func Offset: 0xfc
	// Line 234, Address: 0x102698c, Func Offset: 0x10c
	// Line 235, Address: 0x1026998, Func Offset: 0x118
	// Line 236, Address: 0x10269b4, Func Offset: 0x134
	// Line 237, Address: 0x10269e0, Func Offset: 0x160
	// Line 240, Address: 0x10269e8, Func Offset: 0x168
	// Line 241, Address: 0x10269f8, Func Offset: 0x178
	// Line 242, Address: 0x1026a14, Func Offset: 0x194
	// Line 245, Address: 0x1026a40, Func Offset: 0x1c0
	// Line 246, Address: 0x1026a54, Func Offset: 0x1d4
	// Line 247, Address: 0x1026a5c, Func Offset: 0x1dc
	// Line 248, Address: 0x1026a68, Func Offset: 0x1e8
	// Line 251, Address: 0x1026a70, Func Offset: 0x1f0
	// Line 252, Address: 0x1026a98, Func Offset: 0x218
	// Line 253, Address: 0x1026a9c, Func Offset: 0x21c
	// Line 254, Address: 0x1026ad0, Func Offset: 0x250
	// Line 256, Address: 0x1026ad8, Func Offset: 0x258
	// Line 257, Address: 0x1026b00, Func Offset: 0x280
	// Line 258, Address: 0x1026b04, Func Offset: 0x284
	// Line 259, Address: 0x1026b38, Func Offset: 0x2b8
	// Line 261, Address: 0x1026b40, Func Offset: 0x2c0
	// Line 263, Address: 0x1026b50, Func Offset: 0x2d0
	// Line 264, Address: 0x1026b5c, Func Offset: 0x2dc
	// Line 265, Address: 0x1026b68, Func Offset: 0x2e8
	// Line 266, Address: 0x1026b74, Func Offset: 0x2f4
	// Line 267, Address: 0x1026b80, Func Offset: 0x300
	// Func End, Address: 0x1026b9c, Func Offset: 0x31c
}

// 
// Start address: 0x1026ba0
void scrbinit(short d1, short d0)
{
	_anon2 ld0;
	// Line 279, Address: 0x1026ba0, Func Offset: 0
	// Line 301, Address: 0x1026bac, Func Offset: 0xc
	// Line 302, Address: 0x1026bb4, Func Offset: 0x14
	// Line 304, Address: 0x1026bb8, Func Offset: 0x18
	// Line 305, Address: 0x1026bdc, Func Offset: 0x3c
	// Line 306, Address: 0x1026be8, Func Offset: 0x48
	// Line 307, Address: 0x1026c28, Func Offset: 0x88
	// Line 309, Address: 0x1026c68, Func Offset: 0xc8
	// Line 310, Address: 0x1026ca0, Func Offset: 0x100
	// Line 311, Address: 0x1026cd8, Func Offset: 0x138
	// Line 314, Address: 0x1026d18, Func Offset: 0x178
	// Line 315, Address: 0x1026d20, Func Offset: 0x180
	// Line 316, Address: 0x1026d28, Func Offset: 0x188
	// Line 317, Address: 0x1026d30, Func Offset: 0x190
	// Line 318, Address: 0x1026d38, Func Offset: 0x198
	// Line 319, Address: 0x1026d40, Func Offset: 0x1a0
	// Line 322, Address: 0x1026d48, Func Offset: 0x1a8
	// Func End, Address: 0x1026d54, Func Offset: 0x1b4
}

// 
// Start address: 0x1026d60
void scroll()
{
	_anon2 d0;
	_anon2 d1;
	_anon2 d2;
	_anon2 d3;
	_anon2 d4;
	_anon2 d5;
	_anon2 tmp;
	int l4;
	int l5;
	_anon2* pHscrollbuff;
	short* p;
	short* pHscrollwork;
	short s;
	int i;
	int j;
	int cnt;
	int temp;
	int hs[3];
	// Line 333, Address: 0x1026d60, Func Offset: 0
	// Line 343, Address: 0x1026d8c, Func Offset: 0x2c
	// Line 345, Address: 0x1026da4, Func Offset: 0x44
	// Line 346, Address: 0x1026db4, Func Offset: 0x54
	// Line 348, Address: 0x1026de0, Func Offset: 0x80
	// Line 349, Address: 0x1026dec, Func Offset: 0x8c
	// Line 350, Address: 0x1026df8, Func Offset: 0x98
	// Line 352, Address: 0x1026e04, Func Offset: 0xa4
	// Line 353, Address: 0x1026e14, Func Offset: 0xb4
	// Line 355, Address: 0x1026e24, Func Offset: 0xc4
	// Line 356, Address: 0x1026e48, Func Offset: 0xe8
	// Line 358, Address: 0x1026e84, Func Offset: 0x124
	// Line 359, Address: 0x1026e9c, Func Offset: 0x13c
	// Line 360, Address: 0x1026ec8, Func Offset: 0x168
	// Line 362, Address: 0x1026ed8, Func Offset: 0x178
	// Line 363, Address: 0x1026ee8, Func Offset: 0x188
	// Line 364, Address: 0x1026ef8, Func Offset: 0x198
	// Line 366, Address: 0x1026f08, Func Offset: 0x1a8
	// Line 367, Address: 0x1026f3c, Func Offset: 0x1dc
	// Line 369, Address: 0x1026f50, Func Offset: 0x1f0
	// Line 371, Address: 0x1026f64, Func Offset: 0x204
	// Line 372, Address: 0x1026f6c, Func Offset: 0x20c
	// Line 373, Address: 0x1026f74, Func Offset: 0x214
	// Line 374, Address: 0x1026f94, Func Offset: 0x234
	// Line 375, Address: 0x1026f9c, Func Offset: 0x23c
	// Line 376, Address: 0x1026fa4, Func Offset: 0x244
	// Line 377, Address: 0x1026fa8, Func Offset: 0x248
	// Line 382, Address: 0x1026fb8, Func Offset: 0x258
	// Line 384, Address: 0x1026fc0, Func Offset: 0x260
	// Line 385, Address: 0x1026fe0, Func Offset: 0x280
	// Line 386, Address: 0x1027014, Func Offset: 0x2b4
	// Line 388, Address: 0x1027040, Func Offset: 0x2e0
	// Line 389, Address: 0x1027074, Func Offset: 0x314
	// Line 391, Address: 0x10270a0, Func Offset: 0x340
	// Line 392, Address: 0x10270d4, Func Offset: 0x374
	// Line 395, Address: 0x1027100, Func Offset: 0x3a0
	// Line 396, Address: 0x1027120, Func Offset: 0x3c0
	// Line 398, Address: 0x102714c, Func Offset: 0x3ec
	// Line 399, Address: 0x102716c, Func Offset: 0x40c
	// Line 401, Address: 0x1027198, Func Offset: 0x438
	// Line 402, Address: 0x10271a0, Func Offset: 0x440
	// Line 403, Address: 0x10271a8, Func Offset: 0x448
	// Line 404, Address: 0x10271b4, Func Offset: 0x454
	// Line 405, Address: 0x10271bc, Func Offset: 0x45c
	// Line 406, Address: 0x10271c8, Func Offset: 0x468
	// Line 407, Address: 0x10271d4, Func Offset: 0x474
	// Line 408, Address: 0x10271dc, Func Offset: 0x47c
	// Line 409, Address: 0x10271f8, Func Offset: 0x498
	// Line 410, Address: 0x1027200, Func Offset: 0x4a0
	// Line 411, Address: 0x1027208, Func Offset: 0x4a8
	// Line 413, Address: 0x102722c, Func Offset: 0x4cc
	// Line 414, Address: 0x102723c, Func Offset: 0x4dc
	// Line 416, Address: 0x1027254, Func Offset: 0x4f4
	// Line 418, Address: 0x102725c, Func Offset: 0x4fc
	// Line 419, Address: 0x102726c, Func Offset: 0x50c
	// Line 422, Address: 0x10272a4, Func Offset: 0x544
	// Line 423, Address: 0x10272b0, Func Offset: 0x550
	// Line 424, Address: 0x10272c0, Func Offset: 0x560
	// Line 425, Address: 0x10272c4, Func Offset: 0x564
	// Line 426, Address: 0x10272e4, Func Offset: 0x584
	// Line 427, Address: 0x10272f4, Func Offset: 0x594
	// Line 428, Address: 0x1027320, Func Offset: 0x5c0
	// Line 429, Address: 0x102732c, Func Offset: 0x5cc
	// Line 431, Address: 0x1027348, Func Offset: 0x5e8
	// Line 433, Address: 0x1027354, Func Offset: 0x5f4
	// Line 435, Address: 0x102735c, Func Offset: 0x5fc
	// Line 437, Address: 0x1027360, Func Offset: 0x600
	// Line 439, Address: 0x102736c, Func Offset: 0x60c
	// Line 440, Address: 0x1027380, Func Offset: 0x620
	// Line 441, Address: 0x1027390, Func Offset: 0x630
	// Line 442, Address: 0x10273a0, Func Offset: 0x640
	// Line 445, Address: 0x10273b0, Func Offset: 0x650
	// Line 446, Address: 0x10273bc, Func Offset: 0x65c
	// Line 447, Address: 0x10273c8, Func Offset: 0x668
	// Line 448, Address: 0x10273d8, Func Offset: 0x678
	// Line 449, Address: 0x10273e8, Func Offset: 0x688
	// Line 450, Address: 0x10273f4, Func Offset: 0x694
	// Line 451, Address: 0x1027424, Func Offset: 0x6c4
	// Line 452, Address: 0x1027434, Func Offset: 0x6d4
	// Line 453, Address: 0x1027440, Func Offset: 0x6e0
	// Line 454, Address: 0x1027444, Func Offset: 0x6e4
	// Line 455, Address: 0x102744c, Func Offset: 0x6ec
	// Line 456, Address: 0x1027454, Func Offset: 0x6f4
	// Line 457, Address: 0x1027470, Func Offset: 0x710
	// Line 461, Address: 0x102747c, Func Offset: 0x71c
	// Line 462, Address: 0x1027484, Func Offset: 0x724
	// Line 463, Address: 0x1027490, Func Offset: 0x730
	// Line 464, Address: 0x10274a8, Func Offset: 0x748
	// Line 465, Address: 0x10274b4, Func Offset: 0x754
	// Line 466, Address: 0x10274bc, Func Offset: 0x75c
	// Line 467, Address: 0x10274c0, Func Offset: 0x760
	// Line 468, Address: 0x10274d0, Func Offset: 0x770
	// Line 469, Address: 0x10274e0, Func Offset: 0x780
	// Line 470, Address: 0x10274e8, Func Offset: 0x788
	// Line 471, Address: 0x10274ec, Func Offset: 0x78c
	// Line 473, Address: 0x1027500, Func Offset: 0x7a0
	// Func End, Address: 0x1027534, Func Offset: 0x7d4
}

// 
// Start address: 0x1027540
void scroll_h()
{
	unsigned short wD4;
	// Line 483, Address: 0x1027540, Func Offset: 0
	// Line 486, Address: 0x102754c, Func Offset: 0xc
	// Line 487, Address: 0x1027558, Func Offset: 0x18
	// Line 488, Address: 0x1027560, Func Offset: 0x20
	// Line 489, Address: 0x1027594, Func Offset: 0x54
	// Line 490, Address: 0x10275a8, Func Offset: 0x68
	// Line 491, Address: 0x10275f0, Func Offset: 0xb0
	// Line 493, Address: 0x1027604, Func Offset: 0xc4
	// Func End, Address: 0x1027618, Func Offset: 0xd8
}

// 
// Start address: 0x1027620
void scrh_move()
{
	unsigned short wD0;
	// Line 496, Address: 0x1027620, Func Offset: 0
	// Line 499, Address: 0x102762c, Func Offset: 0xc
	// Line 500, Address: 0x1027638, Func Offset: 0x18
	// Line 501, Address: 0x102764c, Func Offset: 0x2c
	// Line 502, Address: 0x1027660, Func Offset: 0x40
	// Line 503, Address: 0x102767c, Func Offset: 0x5c
	// Line 504, Address: 0x10276a8, Func Offset: 0x88
	// Line 505, Address: 0x10276b4, Func Offset: 0x94
	// Func End, Address: 0x10276c8, Func Offset: 0xa8
}

// 
// Start address: 0x10276d0
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 508, Address: 0x10276d0, Func Offset: 0
	// Line 511, Address: 0x10276dc, Func Offset: 0xc
	// Line 512, Address: 0x1027704, Func Offset: 0x34
	// Line 513, Address: 0x102771c, Func Offset: 0x4c
	// Line 514, Address: 0x1027758, Func Offset: 0x88
	// Line 515, Address: 0x1027760, Func Offset: 0x90
	// Line 516, Address: 0x1027774, Func Offset: 0xa4
	// Line 517, Address: 0x10277a4, Func Offset: 0xd4
	// Line 518, Address: 0x10277b0, Func Offset: 0xe0
	// Line 519, Address: 0x10277b8, Func Offset: 0xe8
	// Func End, Address: 0x10277c8, Func Offset: 0xf8
}

// 
// Start address: 0x10277d0
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 522, Address: 0x10277d0, Func Offset: 0
	// Line 525, Address: 0x10277dc, Func Offset: 0xc
	// Line 526, Address: 0x1027804, Func Offset: 0x34
	// Line 527, Address: 0x102781c, Func Offset: 0x4c
	// Line 528, Address: 0x1027858, Func Offset: 0x88
	// Line 529, Address: 0x1027860, Func Offset: 0x90
	// Line 530, Address: 0x1027874, Func Offset: 0xa4
	// Line 531, Address: 0x10278a4, Func Offset: 0xd4
	// Line 532, Address: 0x10278b0, Func Offset: 0xe0
	// Line 533, Address: 0x10278b8, Func Offset: 0xe8
	// Func End, Address: 0x10278c8, Func Offset: 0xf8
}

// 
// Start address: 0x10278d0
void scroll_v()
{
	short wD0;
	// Line 544, Address: 0x10278d0, Func Offset: 0
	// Line 547, Address: 0x10278dc, Func Offset: 0xc
	// Line 548, Address: 0x1027910, Func Offset: 0x40
	// Line 549, Address: 0x1027934, Func Offset: 0x64
	// Line 550, Address: 0x102794c, Func Offset: 0x7c
	// Line 551, Address: 0x1027958, Func Offset: 0x88
	// Line 552, Address: 0x102797c, Func Offset: 0xac
	// Line 553, Address: 0x1027990, Func Offset: 0xc0
	// Line 554, Address: 0x102799c, Func Offset: 0xcc
	// Line 556, Address: 0x10279a4, Func Offset: 0xd4
	// Line 557, Address: 0x10279cc, Func Offset: 0xfc
	// Line 558, Address: 0x10279f4, Func Offset: 0x124
	// Line 559, Address: 0x1027a00, Func Offset: 0x130
	// Line 562, Address: 0x1027a08, Func Offset: 0x138
	// Line 563, Address: 0x1027a30, Func Offset: 0x160
	// Line 564, Address: 0x1027a40, Func Offset: 0x170
	// Line 565, Address: 0x1027a48, Func Offset: 0x178
	// Line 570, Address: 0x1027a50, Func Offset: 0x180
	// Line 571, Address: 0x1027a7c, Func Offset: 0x1ac
	// Line 572, Address: 0x1027a88, Func Offset: 0x1b8
	// Line 574, Address: 0x1027a90, Func Offset: 0x1c0
	// Line 575, Address: 0x1027aa0, Func Offset: 0x1d0
	// Line 576, Address: 0x1027aa8, Func Offset: 0x1d8
	// Line 579, Address: 0x1027ab0, Func Offset: 0x1e0
	// Line 580, Address: 0x1027ab8, Func Offset: 0x1e8
	// Func End, Address: 0x1027acc, Func Offset: 0x1fc
}

// 
// Start address: 0x1027ad0
void sv_move_main(short wD0)
{
	short wD1;
	// Line 586, Address: 0x1027ad0, Func Offset: 0
	// Line 589, Address: 0x1027ae0, Func Offset: 0x10
	// Line 591, Address: 0x1027b10, Func Offset: 0x40
	// Line 592, Address: 0x1027b20, Func Offset: 0x50
	// Line 593, Address: 0x1027b3c, Func Offset: 0x6c
	// Line 594, Address: 0x1027b50, Func Offset: 0x80
	// Line 595, Address: 0x1027b5c, Func Offset: 0x8c
	// Line 597, Address: 0x1027b64, Func Offset: 0x94
	// Line 598, Address: 0x1027b90, Func Offset: 0xc0
	// Line 599, Address: 0x1027bbc, Func Offset: 0xec
	// Line 601, Address: 0x1027bc8, Func Offset: 0xf8
	// Func End, Address: 0x1027bdc, Func Offset: 0x10c
}

// 
// Start address: 0x1027be0
void sv_move_main1(short wD0)
{
	// Line 604, Address: 0x1027be0, Func Offset: 0
	// Line 605, Address: 0x1027bec, Func Offset: 0xc
	// Line 606, Address: 0x1027c18, Func Offset: 0x38
	// Line 607, Address: 0x1027c44, Func Offset: 0x64
	// Line 608, Address: 0x1027c50, Func Offset: 0x70
	// Func End, Address: 0x1027c60, Func Offset: 0x80
}

// 
// Start address: 0x1027c60
void sv_move_main2(short wD0)
{
	// Line 611, Address: 0x1027c60, Func Offset: 0
	// Line 612, Address: 0x1027c6c, Func Offset: 0xc
	// Line 613, Address: 0x1027c98, Func Offset: 0x38
	// Line 614, Address: 0x1027cc4, Func Offset: 0x64
	// Line 615, Address: 0x1027cd0, Func Offset: 0x70
	// Func End, Address: 0x1027ce0, Func Offset: 0x80
}

// 
// Start address: 0x1027ce0
void sv_move_sub2()
{
	// Line 618, Address: 0x1027ce0, Func Offset: 0
	// Line 619, Address: 0x1027ce8, Func Offset: 0x8
	// Line 620, Address: 0x1027cf0, Func Offset: 0x10
	// Line 621, Address: 0x1027cfc, Func Offset: 0x1c
	// Func End, Address: 0x1027d0c, Func Offset: 0x2c
}

// 
// Start address: 0x1027d10
void sv_move_sub(short wD0)
{
	_anon2 lD1;
	// Line 624, Address: 0x1027d10, Func Offset: 0
	// Line 627, Address: 0x1027d1c, Func Offset: 0xc
	// Line 628, Address: 0x1027d20, Func Offset: 0x10
	// Line 629, Address: 0x1027d4c, Func Offset: 0x3c
	// Line 630, Address: 0x1027d74, Func Offset: 0x64
	// Line 631, Address: 0x1027d80, Func Offset: 0x70
	// Func End, Address: 0x1027d90, Func Offset: 0x80
}

// 
// Start address: 0x1027d90
void sv_move_minus(short wD1)
{
	_anon2 lD1;
	short wk;
	// Line 636, Address: 0x1027d90, Func Offset: 0
	// Line 640, Address: 0x1027da0, Func Offset: 0x10
	// Line 642, Address: 0x1027dc4, Func Offset: 0x34
	// Line 643, Address: 0x1027dd0, Func Offset: 0x40
	// Line 644, Address: 0x1027dd8, Func Offset: 0x48
	// Line 645, Address: 0x1027ddc, Func Offset: 0x4c
	// Line 646, Address: 0x1027de8, Func Offset: 0x58
	// Func End, Address: 0x1027dfc, Func Offset: 0x6c
}

// 
// Start address: 0x1027e00
void scrv_up_ch(_anon2 lD1)
{
	// Line 649, Address: 0x1027e00, Func Offset: 0
	// Line 650, Address: 0x1027e0c, Func Offset: 0xc
	// Line 651, Address: 0x1027e34, Func Offset: 0x34
	// Line 652, Address: 0x1027e4c, Func Offset: 0x4c
	// Line 653, Address: 0x1027e58, Func Offset: 0x58
	// Line 655, Address: 0x1027e60, Func Offset: 0x60
	// Line 656, Address: 0x1027e6c, Func Offset: 0x6c
	// Line 657, Address: 0x1027e80, Func Offset: 0x80
	// Line 658, Address: 0x1027e94, Func Offset: 0x94
	// Line 661, Address: 0x1027ea8, Func Offset: 0xa8
	// Line 662, Address: 0x1027eb4, Func Offset: 0xb4
	// Func End, Address: 0x1027ec4, Func Offset: 0xc4
}

// 
// Start address: 0x1027ed0
void sv_move_plus(short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 665, Address: 0x1027ed0, Func Offset: 0
	// Line 669, Address: 0x1027ee0, Func Offset: 0x10
	// Line 671, Address: 0x1027f00, Func Offset: 0x30
	// Line 672, Address: 0x1027f08, Func Offset: 0x38
	// Line 673, Address: 0x1027f10, Func Offset: 0x40
	// Line 674, Address: 0x1027f14, Func Offset: 0x44
	// Line 675, Address: 0x1027f20, Func Offset: 0x50
	// Func End, Address: 0x1027f34, Func Offset: 0x64
}

// 
// Start address: 0x1027f40
void scrv_down_ch(_anon2 lD1)
{
	// Line 679, Address: 0x1027f40, Func Offset: 0
	// Line 680, Address: 0x1027f4c, Func Offset: 0xc
	// Line 681, Address: 0x1027f74, Func Offset: 0x34
	// Line 682, Address: 0x1027f98, Func Offset: 0x58
	// Line 683, Address: 0x1027fa4, Func Offset: 0x64
	// Line 685, Address: 0x1027fac, Func Offset: 0x6c
	// Line 686, Address: 0x1027fc0, Func Offset: 0x80
	// Line 687, Address: 0x1027fd4, Func Offset: 0x94
	// Line 690, Address: 0x1027fe8, Func Offset: 0xa8
	// Line 691, Address: 0x1027ff4, Func Offset: 0xb4
	// Func End, Address: 0x1028004, Func Offset: 0xc4
}

// 
// Start address: 0x1028010
void scrv_move(_anon2 lD1)
{
	short wD4;
	short wk;
	_anon8 dwk;
	// Line 694, Address: 0x1028010, Func Offset: 0
	// Line 698, Address: 0x1028020, Func Offset: 0x10
	// Line 700, Address: 0x1028030, Func Offset: 0x20
	// Line 701, Address: 0x102803c, Func Offset: 0x2c
	// Line 702, Address: 0x1028044, Func Offset: 0x34
	// Line 704, Address: 0x1028048, Func Offset: 0x38
	// Line 705, Address: 0x102805c, Func Offset: 0x4c
	// Line 706, Address: 0x1028074, Func Offset: 0x64
	// Line 708, Address: 0x1028080, Func Offset: 0x70
	// Line 710, Address: 0x102808c, Func Offset: 0x7c
	// Line 711, Address: 0x10280c8, Func Offset: 0xb8
	// Line 712, Address: 0x10280d0, Func Offset: 0xc0
	// Line 713, Address: 0x10280e4, Func Offset: 0xd4
	// Line 714, Address: 0x1028110, Func Offset: 0x100
	// Line 715, Address: 0x102813c, Func Offset: 0x12c
	// Line 717, Address: 0x1028150, Func Offset: 0x140
	// Func End, Address: 0x1028164, Func Offset: 0x154
}

// 
// Start address: 0x1028170
void scrollb_hv(int lD4, int lD5)
{
	int lD0;
	int lD1;
	_anon2 lD2;
	// Line 729, Address: 0x1028170, Func Offset: 0
	// Line 733, Address: 0x1028184, Func Offset: 0x14
	// Line 734, Address: 0x102818c, Func Offset: 0x1c
	// Line 735, Address: 0x10281a0, Func Offset: 0x30
	// Line 736, Address: 0x10281d0, Func Offset: 0x60
	// Line 737, Address: 0x10281e4, Func Offset: 0x74
	// Line 738, Address: 0x102820c, Func Offset: 0x9c
	// Line 740, Address: 0x1028220, Func Offset: 0xb0
	// Line 741, Address: 0x1028228, Func Offset: 0xb8
	// Line 742, Address: 0x102823c, Func Offset: 0xcc
	// Line 743, Address: 0x102826c, Func Offset: 0xfc
	// Line 744, Address: 0x1028280, Func Offset: 0x110
	// Line 745, Address: 0x10282a8, Func Offset: 0x138
	// Line 747, Address: 0x10282bc, Func Offset: 0x14c
	// Func End, Address: 0x10282d0, Func Offset: 0x160
}

// 
// Start address: 0x10282d0
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 758, Address: 0x10282d0, Func Offset: 0
	// Line 761, Address: 0x10282dc, Func Offset: 0xc
	// Line 762, Address: 0x10282e8, Func Offset: 0x18
	// Line 764, Address: 0x10282f4, Func Offset: 0x24
	// Line 765, Address: 0x1028320, Func Offset: 0x50
	// Line 766, Address: 0x1028334, Func Offset: 0x64
	// Line 767, Address: 0x1028364, Func Offset: 0x94
	// Line 768, Address: 0x1028378, Func Offset: 0xa8
	// Line 771, Address: 0x1028380, Func Offset: 0xb0
	// Line 776, Address: 0x1028394, Func Offset: 0xc4
	// Func End, Address: 0x10283a4, Func Offset: 0xd4
}

// 
// Start address: 0x10283b0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 788, Address: 0x10283b0, Func Offset: 0
	// Line 792, Address: 0x10283c0, Func Offset: 0x10
	// Line 793, Address: 0x10283cc, Func Offset: 0x1c
	// Line 794, Address: 0x10283dc, Func Offset: 0x2c
	// Line 796, Address: 0x10283e8, Func Offset: 0x38
	// Line 797, Address: 0x10283f0, Func Offset: 0x40
	// Line 798, Address: 0x10283f8, Func Offset: 0x48
	// Line 800, Address: 0x1028404, Func Offset: 0x54
	// Line 801, Address: 0x1028410, Func Offset: 0x60
	// Line 802, Address: 0x1028424, Func Offset: 0x74
	// Line 807, Address: 0x1028430, Func Offset: 0x80
	// Line 808, Address: 0x1028444, Func Offset: 0x94
	// Line 809, Address: 0x1028454, Func Offset: 0xa4
	// Line 810, Address: 0x102848c, Func Offset: 0xdc
	// Line 812, Address: 0x10284ac, Func Offset: 0xfc
	// Func End, Address: 0x10284bc, Func Offset: 0x10c
}

// 
// Start address: 0x10284c0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 824, Address: 0x10284c0, Func Offset: 0
	// Line 828, Address: 0x10284d0, Func Offset: 0x10
	// Line 829, Address: 0x10284dc, Func Offset: 0x1c
	// Line 830, Address: 0x10284ec, Func Offset: 0x2c
	// Line 832, Address: 0x10284f8, Func Offset: 0x38
	// Line 833, Address: 0x1028500, Func Offset: 0x40
	// Line 834, Address: 0x1028508, Func Offset: 0x48
	// Line 836, Address: 0x1028514, Func Offset: 0x54
	// Line 837, Address: 0x1028520, Func Offset: 0x60
	// Line 838, Address: 0x1028534, Func Offset: 0x74
	// Line 843, Address: 0x1028540, Func Offset: 0x80
	// Line 844, Address: 0x1028554, Func Offset: 0x94
	// Line 845, Address: 0x1028564, Func Offset: 0xa4
	// Line 846, Address: 0x102859c, Func Offset: 0xdc
	// Line 848, Address: 0x10285bc, Func Offset: 0xfc
	// Func End, Address: 0x10285cc, Func Offset: 0x10c
}

// 
// Start address: 0x10285d0
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 860, Address: 0x10285d0, Func Offset: 0
	// Line 864, Address: 0x10285e0, Func Offset: 0x10
	// Line 865, Address: 0x10285ec, Func Offset: 0x1c
	// Line 866, Address: 0x10285fc, Func Offset: 0x2c
	// Line 868, Address: 0x1028608, Func Offset: 0x38
	// Line 869, Address: 0x1028610, Func Offset: 0x40
	// Line 870, Address: 0x1028618, Func Offset: 0x48
	// Line 872, Address: 0x1028624, Func Offset: 0x54
	// Line 873, Address: 0x1028630, Func Offset: 0x60
	// Line 874, Address: 0x1028644, Func Offset: 0x74
	// Line 879, Address: 0x1028650, Func Offset: 0x80
	// Line 880, Address: 0x1028664, Func Offset: 0x94
	// Line 881, Address: 0x1028674, Func Offset: 0xa4
	// Line 882, Address: 0x10286ac, Func Offset: 0xdc
	// Line 884, Address: 0x10286cc, Func Offset: 0xfc
	// Func End, Address: 0x10286dc, Func Offset: 0x10c
}

// 
// Start address: 0x10286e0
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 896, Address: 0x10286e0, Func Offset: 0
	// Line 902, Address: 0x10286fc, Func Offset: 0x1c
	// Line 903, Address: 0x1028700, Func Offset: 0x20
	// Line 904, Address: 0x102870c, Func Offset: 0x2c
	// Line 905, Address: 0x1028718, Func Offset: 0x38
	// Line 906, Address: 0x1028720, Func Offset: 0x40
	// Line 907, Address: 0x1028728, Func Offset: 0x48
	// Line 913, Address: 0x102873c, Func Offset: 0x5c
	// Func End, Address: 0x1028760, Func Offset: 0x80
}

// 
// Start address: 0x1028760
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
	// Line 927, Address: 0x1028760, Func Offset: 0
	// Line 936, Address: 0x1028780, Func Offset: 0x20
	// Line 937, Address: 0x1028784, Func Offset: 0x24
	// Line 938, Address: 0x1028790, Func Offset: 0x30
	// Line 939, Address: 0x102879c, Func Offset: 0x3c
	// Line 940, Address: 0x10287a4, Func Offset: 0x44
	// Line 941, Address: 0x10287ac, Func Offset: 0x4c
	// Line 943, Address: 0x10287c0, Func Offset: 0x60
	// Line 944, Address: 0x10287c4, Func Offset: 0x64
	// Line 945, Address: 0x10287d0, Func Offset: 0x70
	// Line 946, Address: 0x10287dc, Func Offset: 0x7c
	// Line 947, Address: 0x10287e4, Func Offset: 0x84
	// Line 949, Address: 0x10287ec, Func Offset: 0x8c
	// Line 950, Address: 0x10287f8, Func Offset: 0x98
	// Line 951, Address: 0x102880c, Func Offset: 0xac
	// Line 953, Address: 0x1028818, Func Offset: 0xb8
	// Line 954, Address: 0x1028820, Func Offset: 0xc0
	// Line 956, Address: 0x1028828, Func Offset: 0xc8
	// Line 958, Address: 0x1028848, Func Offset: 0xe8
	// Line 964, Address: 0x1028874, Func Offset: 0x114
	// Line 965, Address: 0x1028888, Func Offset: 0x128
	// Line 967, Address: 0x1028894, Func Offset: 0x134
	// Line 968, Address: 0x102889c, Func Offset: 0x13c
	// Line 969, Address: 0x10288a4, Func Offset: 0x144
	// Line 971, Address: 0x10288c4, Func Offset: 0x164
	// Line 977, Address: 0x10288f0, Func Offset: 0x190
	// Line 978, Address: 0x1028904, Func Offset: 0x1a4
	// Line 980, Address: 0x1028910, Func Offset: 0x1b0
	// Line 981, Address: 0x1028918, Func Offset: 0x1b8
	// Line 982, Address: 0x1028920, Func Offset: 0x1c0
	// Line 984, Address: 0x1028940, Func Offset: 0x1e0
	// Line 990, Address: 0x102896c, Func Offset: 0x20c
	// Line 991, Address: 0x1028980, Func Offset: 0x220
	// Line 993, Address: 0x102898c, Func Offset: 0x22c
	// Line 994, Address: 0x1028994, Func Offset: 0x234
	// Line 995, Address: 0x102899c, Func Offset: 0x23c
	// Line 997, Address: 0x10289bc, Func Offset: 0x25c
	// Line 1006, Address: 0x10289e8, Func Offset: 0x288
	// Func End, Address: 0x1028a10, Func Offset: 0x2b0
}

// 
// Start address: 0x1028a10
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
	// Line 1020, Address: 0x1028a10, Func Offset: 0
	// Line 1031, Address: 0x1028a3c, Func Offset: 0x2c
	// Line 1033, Address: 0x1028a44, Func Offset: 0x34
	// Line 1034, Address: 0x1028a5c, Func Offset: 0x4c
	// Line 1035, Address: 0x1028a70, Func Offset: 0x60
	// Line 1037, Address: 0x1028a78, Func Offset: 0x68
	// Line 1039, Address: 0x1028a8c, Func Offset: 0x7c
	// Line 1040, Address: 0x1028aa4, Func Offset: 0x94
	// Line 1041, Address: 0x1028ab8, Func Offset: 0xa8
	// Line 1042, Address: 0x1028ac0, Func Offset: 0xb0
	// Line 1044, Address: 0x1028ac8, Func Offset: 0xb8
	// Line 1045, Address: 0x1028adc, Func Offset: 0xcc
	// Line 1050, Address: 0x1028ae4, Func Offset: 0xd4
	// Line 1051, Address: 0x1028b34, Func Offset: 0x124
	// Line 1052, Address: 0x1028b3c, Func Offset: 0x12c
	// Line 1053, Address: 0x1028b44, Func Offset: 0x134
	// Line 1054, Address: 0x1028b64, Func Offset: 0x154
	// Line 1055, Address: 0x1028b84, Func Offset: 0x174
	// Line 1056, Address: 0x1028ba8, Func Offset: 0x198
	// Line 1057, Address: 0x1028bb4, Func Offset: 0x1a4
	// Line 1058, Address: 0x1028bbc, Func Offset: 0x1ac
	// Line 1060, Address: 0x1028bdc, Func Offset: 0x1cc
	// Line 1064, Address: 0x1028c08, Func Offset: 0x1f8
	// Line 1067, Address: 0x1028c10, Func Offset: 0x200
	// Line 1068, Address: 0x1028c14, Func Offset: 0x204
	// Line 1072, Address: 0x1028c34, Func Offset: 0x224
	// Line 1079, Address: 0x1028c60, Func Offset: 0x250
	// Line 1086, Address: 0x1028c74, Func Offset: 0x264
	// Line 1087, Address: 0x1028c7c, Func Offset: 0x26c
	// Line 1088, Address: 0x1028c84, Func Offset: 0x274
	// Line 1089, Address: 0x1028c9c, Func Offset: 0x28c
	// Line 1090, Address: 0x1028cbc, Func Offset: 0x2ac
	// Line 1094, Address: 0x1028cc4, Func Offset: 0x2b4
	// Line 1096, Address: 0x1028cf4, Func Offset: 0x2e4
	// Line 1097, Address: 0x1028d00, Func Offset: 0x2f0
	// Line 1101, Address: 0x1028d10, Func Offset: 0x300
	// Line 1102, Address: 0x1028d1c, Func Offset: 0x30c
	// Line 1103, Address: 0x1028d3c, Func Offset: 0x32c
	// Line 1104, Address: 0x1028d48, Func Offset: 0x338
	// Line 1105, Address: 0x1028d74, Func Offset: 0x364
	// Line 1106, Address: 0x1028d94, Func Offset: 0x384
	// Line 1108, Address: 0x1028db8, Func Offset: 0x3a8
	// Line 1111, Address: 0x1028ddc, Func Offset: 0x3cc
	// Line 1113, Address: 0x1028dfc, Func Offset: 0x3ec
	// Line 1116, Address: 0x1028e10, Func Offset: 0x400
	// Line 1117, Address: 0x1028e1c, Func Offset: 0x40c
	// Line 1118, Address: 0x1028e2c, Func Offset: 0x41c
	// Line 1120, Address: 0x1028e34, Func Offset: 0x424
	// Func End, Address: 0x1028e5c, Func Offset: 0x44c
}

// 
// Start address: 0x1028e60
void scrollwrtc()
{
	// Line 1125, Address: 0x1028e60, Func Offset: 0
	// Func End, Address: 0x1028e68, Func Offset: 0x8
}

// 
// Start address: 0x1028e70
void scrollwrtz()
{
	// Line 1130, Address: 0x1028e70, Func Offset: 0
	// Func End, Address: 0x1028e78, Func Offset: 0x8
}

// 
// Start address: 0x1028e80
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1148, Address: 0x1028e80, Func Offset: 0
	// Line 1152, Address: 0x1028ea8, Func Offset: 0x28
	// Line 1153, Address: 0x1028ec8, Func Offset: 0x48
	// Line 1154, Address: 0x1028edc, Func Offset: 0x5c
	// Line 1155, Address: 0x1028ef0, Func Offset: 0x70
	// Line 1156, Address: 0x1028f18, Func Offset: 0x98
	// Line 1157, Address: 0x1028f24, Func Offset: 0xa4
	// Line 1158, Address: 0x1028f38, Func Offset: 0xb8
	// Func End, Address: 0x1028f48, Func Offset: 0xc8
}

// 
// Start address: 0x1028f50
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1160, Address: 0x1028f50, Func Offset: 0
	// Line 1164, Address: 0x1028f78, Func Offset: 0x28
	// Line 1167, Address: 0x1028f98, Func Offset: 0x48
	// Line 1168, Address: 0x1028fac, Func Offset: 0x5c
	// Line 1169, Address: 0x1028fc0, Func Offset: 0x70
	// Line 1170, Address: 0x1028fd4, Func Offset: 0x84
	// Line 1172, Address: 0x1028fe8, Func Offset: 0x98
	// Line 1173, Address: 0x1028ff4, Func Offset: 0xa4
	// Line 1174, Address: 0x1029008, Func Offset: 0xb8
	// Func End, Address: 0x1029018, Func Offset: 0xc8
}

// 
// Start address: 0x1029020
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1190, Address: 0x1029020, Func Offset: 0
	// Line 1194, Address: 0x1029048, Func Offset: 0x28
	// Line 1197, Address: 0x1029068, Func Offset: 0x48
	// Line 1198, Address: 0x102907c, Func Offset: 0x5c
	// Line 1199, Address: 0x102908c, Func Offset: 0x6c
	// Line 1200, Address: 0x10290a0, Func Offset: 0x80
	// Line 1202, Address: 0x10290b0, Func Offset: 0x90
	// Line 1203, Address: 0x10290bc, Func Offset: 0x9c
	// Line 1204, Address: 0x10290d0, Func Offset: 0xb0
	// Func End, Address: 0x10290e0, Func Offset: 0xc0
}

// 
// Start address: 0x10290e0
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
	// Line 1222, Address: 0x10290e0, Func Offset: 0
	// Line 1228, Address: 0x1029114, Func Offset: 0x34
	// Line 1230, Address: 0x1029124, Func Offset: 0x44
	// Line 1231, Address: 0x1029128, Func Offset: 0x48
	// Line 1232, Address: 0x1029130, Func Offset: 0x50
	// Line 1234, Address: 0x1029140, Func Offset: 0x60
	// Line 1236, Address: 0x1029144, Func Offset: 0x64
	// Line 1237, Address: 0x102914c, Func Offset: 0x6c
	// Line 1240, Address: 0x1029154, Func Offset: 0x74
	// Line 1241, Address: 0x102915c, Func Offset: 0x7c
	// Line 1242, Address: 0x1029168, Func Offset: 0x88
	// Line 1244, Address: 0x1029174, Func Offset: 0x94
	// Line 1245, Address: 0x102917c, Func Offset: 0x9c
	// Line 1246, Address: 0x1029184, Func Offset: 0xa4
	// Line 1247, Address: 0x102918c, Func Offset: 0xac
	// Line 1249, Address: 0x1029198, Func Offset: 0xb8
	// Line 1250, Address: 0x10291a0, Func Offset: 0xc0
	// Line 1251, Address: 0x10291a8, Func Offset: 0xc8
	// Line 1252, Address: 0x10291b0, Func Offset: 0xd0
	// Line 1254, Address: 0x10291bc, Func Offset: 0xdc
	// Line 1255, Address: 0x10291c4, Func Offset: 0xe4
	// Line 1256, Address: 0x10291cc, Func Offset: 0xec
	// Line 1259, Address: 0x10291d4, Func Offset: 0xf4
	// Line 1260, Address: 0x10291dc, Func Offset: 0xfc
	// Line 1263, Address: 0x10291e4, Func Offset: 0x104
	// Line 1264, Address: 0x1029228, Func Offset: 0x148
	// Line 1265, Address: 0x102926c, Func Offset: 0x18c
	// Line 1266, Address: 0x10292b0, Func Offset: 0x1d0
	// Line 1268, Address: 0x10292f4, Func Offset: 0x214
	// Func End, Address: 0x1029324, Func Offset: 0x244
}

// 
// Start address: 0x1029330
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1287, Address: 0x1029330, Func Offset: 0
	// Line 1288, Address: 0x1029350, Func Offset: 0x20
	// Line 1289, Address: 0x1029370, Func Offset: 0x40
	// Func End, Address: 0x1029380, Func Offset: 0x50
}

// 
// Start address: 0x1029380
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1292, Address: 0x1029380, Func Offset: 0
	// Line 1293, Address: 0x10293a0, Func Offset: 0x20
	// Line 1294, Address: 0x10293a4, Func Offset: 0x24
	// Line 1295, Address: 0x10293c4, Func Offset: 0x44
	// Func End, Address: 0x10293d4, Func Offset: 0x54
}

// 
// Start address: 0x10293e0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1298, Address: 0x10293e0, Func Offset: 0
	// Line 1304, Address: 0x1029410, Func Offset: 0x30
	// Line 1305, Address: 0x1029420, Func Offset: 0x40
	// Line 1311, Address: 0x1029430, Func Offset: 0x50
	// Line 1312, Address: 0x102944c, Func Offset: 0x6c
	// Line 1313, Address: 0x1029450, Func Offset: 0x70
	// Line 1314, Address: 0x102946c, Func Offset: 0x8c
	// Line 1315, Address: 0x1029470, Func Offset: 0x90
	// Line 1316, Address: 0x1029490, Func Offset: 0xb0
	// Line 1317, Address: 0x1029498, Func Offset: 0xb8
	// Line 1318, Address: 0x10294b8, Func Offset: 0xd8
	// Line 1319, Address: 0x10294c0, Func Offset: 0xe0
	// Line 1320, Address: 0x1029508, Func Offset: 0x128
	// Line 1322, Address: 0x1029514, Func Offset: 0x134
	// Line 1324, Address: 0x1029530, Func Offset: 0x150
	// Line 1329, Address: 0x1029538, Func Offset: 0x158
	// Line 1330, Address: 0x1029544, Func Offset: 0x164
	// Line 1333, Address: 0x1029550, Func Offset: 0x170
	// Line 1334, Address: 0x1029558, Func Offset: 0x178
	// Line 1335, Address: 0x1029578, Func Offset: 0x198
	// Line 1336, Address: 0x1029594, Func Offset: 0x1b4
	// Line 1337, Address: 0x102959c, Func Offset: 0x1bc
	// Line 1338, Address: 0x10295bc, Func Offset: 0x1dc
	// Line 1340, Address: 0x10295d8, Func Offset: 0x1f8
	// Line 1341, Address: 0x10295e0, Func Offset: 0x200
	// Line 1342, Address: 0x10295e8, Func Offset: 0x208
	// Line 1343, Address: 0x10295f4, Func Offset: 0x214
	// Line 1344, Address: 0x102960c, Func Offset: 0x22c
	// Line 1346, Address: 0x102961c, Func Offset: 0x23c
	// Line 1349, Address: 0x1029628, Func Offset: 0x248
	// Line 1350, Address: 0x1029630, Func Offset: 0x250
	// Line 1351, Address: 0x1029634, Func Offset: 0x254
	// Func End, Address: 0x1029654, Func Offset: 0x274
}

// 
// Start address: 0x1029660
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1369, Address: 0x1029660, Func Offset: 0
	// Line 1377, Address: 0x1029688, Func Offset: 0x28
	// Line 1378, Address: 0x10296ec, Func Offset: 0x8c
	// Line 1384, Address: 0x10296f4, Func Offset: 0x94
	// Line 1385, Address: 0x10296fc, Func Offset: 0x9c
	// Line 1386, Address: 0x102971c, Func Offset: 0xbc
	// Line 1387, Address: 0x1029738, Func Offset: 0xd8
	// Line 1388, Address: 0x1029740, Func Offset: 0xe0
	// Line 1389, Address: 0x1029760, Func Offset: 0x100
	// Line 1392, Address: 0x102977c, Func Offset: 0x11c
	// Line 1393, Address: 0x1029784, Func Offset: 0x124
	// Line 1394, Address: 0x102978c, Func Offset: 0x12c
	// Line 1395, Address: 0x1029798, Func Offset: 0x138
	// Line 1396, Address: 0x10297b0, Func Offset: 0x150
	// Line 1397, Address: 0x10297b8, Func Offset: 0x158
	// Line 1402, Address: 0x10297c8, Func Offset: 0x168
	// Line 1405, Address: 0x10297d4, Func Offset: 0x174
	// Line 1406, Address: 0x10297dc, Func Offset: 0x17c
	// Line 1407, Address: 0x10297e0, Func Offset: 0x180
	// Func End, Address: 0x10297fc, Func Offset: 0x19c
}

// 
// Start address: 0x1029800
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1421, Address: 0x1029800, Func Offset: 0
	// Line 1428, Address: 0x102981c, Func Offset: 0x1c
	// Line 1429, Address: 0x1029820, Func Offset: 0x20
	// Line 1430, Address: 0x1029828, Func Offset: 0x28
	// Line 1431, Address: 0x102984c, Func Offset: 0x4c
	// Line 1432, Address: 0x1029858, Func Offset: 0x58
	// Line 1433, Address: 0x1029870, Func Offset: 0x70
	// Line 1434, Address: 0x1029884, Func Offset: 0x84
	// Line 1439, Address: 0x102989c, Func Offset: 0x9c
	// Func End, Address: 0x10298b4, Func Offset: 0xb4
}

// 
// Start address: 0x10298c0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1451, Address: 0x10298c0, Func Offset: 0
	// Line 1452, Address: 0x10298cc, Func Offset: 0xc
	// Line 1453, Address: 0x10298f8, Func Offset: 0x38
	// Line 1454, Address: 0x1029944, Func Offset: 0x84
	// Line 1455, Address: 0x1029970, Func Offset: 0xb0
	// Line 1457, Address: 0x10299bc, Func Offset: 0xfc
	// Line 1463, Address: 0x10299c8, Func Offset: 0x108
	// Line 1464, Address: 0x10299cc, Func Offset: 0x10c
	// Func End, Address: 0x10299d8, Func Offset: 0x118
}

// 
// Start address: 0x10299e0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1479, Address: 0x10299e0, Func Offset: 0
	// Line 1480, Address: 0x10299fc, Func Offset: 0x1c
	// Line 1481, Address: 0x1029a18, Func Offset: 0x38
	// Func End, Address: 0x1029a28, Func Offset: 0x48
}

// 
// Start address: 0x1029a30
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1484, Address: 0x1029a30, Func Offset: 0
	// Line 1485, Address: 0x1029a4c, Func Offset: 0x1c
	// Line 1486, Address: 0x1029a50, Func Offset: 0x20
	// Line 1487, Address: 0x1029a6c, Func Offset: 0x3c
	// Func End, Address: 0x1029a7c, Func Offset: 0x4c
}

// 
// Start address: 0x1029a80
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1490, Address: 0x1029a80, Func Offset: 0
	// Line 1491, Address: 0x1029a94, Func Offset: 0x14
	// Line 1492, Address: 0x1029ab0, Func Offset: 0x30
	// Func End, Address: 0x1029ac0, Func Offset: 0x40
}

// 
// Start address: 0x1029ac0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1495, Address: 0x1029ac0, Func Offset: 0
	// Line 1496, Address: 0x1029adc, Func Offset: 0x1c
	// Line 1497, Address: 0x1029af8, Func Offset: 0x38
	// Func End, Address: 0x1029b08, Func Offset: 0x48
}

// 
// Start address: 0x1029b10
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1500, Address: 0x1029b10, Func Offset: 0
	// Line 1501, Address: 0x1029b28, Func Offset: 0x18
	// Line 1502, Address: 0x1029b38, Func Offset: 0x28
	// Line 1503, Address: 0x1029b48, Func Offset: 0x38
	// Line 1504, Address: 0x1029b54, Func Offset: 0x44
	// Line 1506, Address: 0x1029b60, Func Offset: 0x50
	// Line 1507, Address: 0x1029b8c, Func Offset: 0x7c
	// Line 1509, Address: 0x1029bb8, Func Offset: 0xa8
	// Func End, Address: 0x1029bc4, Func Offset: 0xb4
}

// 
// Start address: 0x1029bd0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1523, Address: 0x1029bd0, Func Offset: 0
	// Line 1528, Address: 0x1029be8, Func Offset: 0x18
	// Line 1529, Address: 0x1029bf4, Func Offset: 0x24
	// Line 1530, Address: 0x1029c00, Func Offset: 0x30
	// Line 1531, Address: 0x1029c08, Func Offset: 0x38
	// Line 1532, Address: 0x1029c0c, Func Offset: 0x3c
	// Line 1536, Address: 0x1029c24, Func Offset: 0x54
	// Line 1537, Address: 0x1029c2c, Func Offset: 0x5c
	// Line 1538, Address: 0x1029c30, Func Offset: 0x60
	// Line 1539, Address: 0x1029c40, Func Offset: 0x70
	// Func End, Address: 0x1029c60, Func Offset: 0x90
}

// 
// Start address: 0x1029c60
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1542, Address: 0x1029c60, Func Offset: 0
	// Line 1543, Address: 0x1029c78, Func Offset: 0x18
	// Line 1544, Address: 0x1029c98, Func Offset: 0x38
	// Func End, Address: 0x1029ca8, Func Offset: 0x48
}

// 
// Start address: 0x1029cb0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1547, Address: 0x1029cb0, Func Offset: 0
	// Line 1551, Address: 0x1029cd0, Func Offset: 0x20
	// Line 1554, Address: 0x1029cec, Func Offset: 0x3c
	// Line 1558, Address: 0x1029d14, Func Offset: 0x64
	// Line 1559, Address: 0x1029d20, Func Offset: 0x70
	// Line 1560, Address: 0x1029d48, Func Offset: 0x98
	// Func End, Address: 0x1029d58, Func Offset: 0xa8
}

// 
// Start address: 0x1029d60
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1563, Address: 0x1029d60, Func Offset: 0
	// Line 1566, Address: 0x1029d7c, Func Offset: 0x1c
	// Line 1567, Address: 0x1029d84, Func Offset: 0x24
	// Line 1570, Address: 0x1029d8c, Func Offset: 0x2c
	// Line 1571, Address: 0x1029db0, Func Offset: 0x50
	// Line 1572, Address: 0x1029dd0, Func Offset: 0x70
	// Line 1573, Address: 0x1029dd8, Func Offset: 0x78
	// Line 1574, Address: 0x1029dfc, Func Offset: 0x9c
	// Func End, Address: 0x1029e18, Func Offset: 0xb8
}

// 
// Start address: 0x1029e20
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1590, Address: 0x1029e20, Func Offset: 0
	// Line 1595, Address: 0x1029e48, Func Offset: 0x28
	// Line 1596, Address: 0x1029e58, Func Offset: 0x38
	// Line 1597, Address: 0x1029e74, Func Offset: 0x54
	// Line 1598, Address: 0x1029e98, Func Offset: 0x78
	// Line 1599, Address: 0x1029ec0, Func Offset: 0xa0
	// Line 1600, Address: 0x1029ecc, Func Offset: 0xac
	// Line 1601, Address: 0x1029ed4, Func Offset: 0xb4
	// Line 1602, Address: 0x1029ef0, Func Offset: 0xd0
	// Line 1603, Address: 0x1029f18, Func Offset: 0xf8
	// Line 1605, Address: 0x1029f20, Func Offset: 0x100
	// Line 1606, Address: 0x1029f24, Func Offset: 0x104
	// Line 1607, Address: 0x1029f40, Func Offset: 0x120
	// Line 1609, Address: 0x1029f68, Func Offset: 0x148
	// Func End, Address: 0x1029f84, Func Offset: 0x164
}

// 
// Start address: 0x1029f90
void mapinit()
{
	// Line 1620, Address: 0x1029f90, Func Offset: 0
	// Line 1622, Address: 0x1029f98, Func Offset: 0x8
	// Line 1623, Address: 0x1029fac, Func Offset: 0x1c
	// Line 1625, Address: 0x1029fc0, Func Offset: 0x30
	// Line 1626, Address: 0x1029fd8, Func Offset: 0x48
	// Line 1627, Address: 0x1029ff8, Func Offset: 0x68
	// Func End, Address: 0x102a008, Func Offset: 0x78
}

