typedef struct tagPOINT;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef int(*type_2)(int, int, int, int, int);
typedef void(*type_8)(void*, unsigned char, int);

typedef short type_0[256];
typedef _anon13 type_1[128];
typedef unsigned char type_3[33];
typedef _anon11 type_4[20];
typedef _anon11 type_5[0];
typedef unsigned short type_6[6];
typedef _anon1* type_7[8];
typedef int type_9[5];
typedef unsigned char type_10[5];
typedef unsigned short type_11[2];
typedef unsigned short type_12[4];
typedef unsigned short type_13[4][1024];
typedef unsigned short type_14[16];
typedef _anon1* type_15[8];
typedef unsigned char type_16[2];
typedef unsigned char type_17[64];
typedef unsigned char type_18[64][8];
typedef unsigned char type_19[22];
typedef unsigned char type_20[64];
typedef unsigned char type_21[4];
typedef unsigned char type_22[64][8];

struct tagPOINT
{
	int x;
	int y;
};

struct _anon0
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

union _anon1
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon2
{
	short l;
	short h;
};

struct _anon3
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon4
{
	short w;
	_anon5 b;
};

struct _anon5
{
	char l;
	char h;
};

union _anon6
{
	unsigned int l;
	_anon7 w;
	_anon8 b;
};

struct _anon7
{
	unsigned short l;
	unsigned short h;
};

struct _anon8
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon9
{
	unsigned short w;
	_anon10 b;
};

struct _anon10
{
	unsigned char l;
	unsigned char h;
};

struct _anon11
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon12
{
	unsigned char cnt;
	union
	{
		_anon11 spra[20];
		_anon11 spr[0];
	};
};

struct _anon13
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon12** patbase;
	_anon1 xposi;
	_anon1 yposi;
	_anon4 xspeed;
	_anon4 yspeed;
	_anon4 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon4 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon4 direc;
	_anon4 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

unsigned char z12cwrttbl[33];
_anon1* vblockwrtbtbl[8];
_anon1* mapwrt_tbl[8];
_anon13 actwk[128];
unsigned char main_play;
short scra_hline;
short scra_vline;
unsigned char scra_v_count;
unsigned char scra_h_count;
short scra_h_keep;
short scralim_left;
short scralim_down;
short scralim_n_down;
short scralim_up;
short scralim_n_up;
short scralim_right;
short scralim_n_right;
short scralim_n_left;
short scrar_no;
unsigned char scrh_flag;
unsigned char scrv_flag;
_anon9 scr_die;
_anon4 scr_timer;
_anon9 zone_flag;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon1 scra_v_posit;
_anon1 scra_h_posit;
_anon4 demoflag;
short enddemono;
unsigned char plflag;
void(*sMemSet)(void*, unsigned char, int);
short hscrollwork[256];
_anon1 scrz_h_posit;
_anon1 scrc_h_posit;
_anon1 scrb_h_posit;
_anon1 scrz_v_posit;
_anon1 scrc_v_posit;
_anon1 scrb_v_posit;
_anon1* lphscrollbuff;
_anon9 scrflagz;
_anon9 scrflagc;
_anon9 scrflagb;
_anon1 vscroll;
short scra_vz;
short scra_hz;
_anon9 scrflaga;
_anon4 scroll_start;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char limmoveflag;
unsigned char mapwka[64][8];
_anon1 scra_v_posiw;
_anon1 scra_h_posiw;
_anon9 scrflagaw;
unsigned char mapwkb[64][8];
_anon1 scrb_v_posiw;
_anon1 scrb_h_posiw;
_anon9 scrflagbw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon0 mapinittbl;

void enecginit();
void divdevset();
_anon13* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk);
void scrollb_hv(int xOffs, int yOffs);
void scrollc_h(int xoffs, int flgbit);
void scrollz_h(int xoffs, int flgbit);
void scroll_h();
void scrh_move();
void scroll_v();
void sv_move_main(short yPos);
void sv_move_main2(short yPos);
void sv_move_sub(short yPos);
void sv_move_sub2();
void sv_move_minus(short speed);
void scrv_up_ch(_anon1 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon1 lSpd);
void scrv_move(_anon1 lSpd);
void scrollwrt();
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase);
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
void mapwrt_z11c(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();

// 
// Start address: 0x1025200
void enecginit()
{
	// Line 135, Address: 0x1025200, Func Offset: 0
	// Func End, Address: 0x1025208, Func Offset: 0x8
}

// 
// Start address: 0x1025210
void divdevset()
{
	// Line 140, Address: 0x1025210, Func Offset: 0
	// Func End, Address: 0x1025218, Func Offset: 0x8
}

// 
// Start address: 0x1025220
_anon13* main_chk()
{
	// Line 154, Address: 0x1025220, Func Offset: 0
	// Line 155, Address: 0x1025240, Func Offset: 0x20
	// Line 156, Address: 0x1025248, Func Offset: 0x28
	// Func End, Address: 0x1025250, Func Offset: 0x30
}

// 
// Start address: 0x1025250
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 167, Address: 0x1025250, Func Offset: 0
	// Line 168, Address: 0x102525c, Func Offset: 0xc
	// Line 173, Address: 0x1025290, Func Offset: 0x40
	// Line 175, Address: 0x10252d8, Func Offset: 0x88
	// Line 176, Address: 0x10252dc, Func Offset: 0x8c
	// Line 177, Address: 0x10252f8, Func Offset: 0xa8
	// Line 178, Address: 0x102531c, Func Offset: 0xcc
	// Line 179, Address: 0x1025340, Func Offset: 0xf0
	// Line 180, Address: 0x1025364, Func Offset: 0x114
	// Line 182, Address: 0x1025388, Func Offset: 0x138
	// Line 183, Address: 0x10253ac, Func Offset: 0x15c
	// Line 184, Address: 0x10253b8, Func Offset: 0x168
	// Line 186, Address: 0x10253c4, Func Offset: 0x174
	// Line 187, Address: 0x10253e0, Func Offset: 0x190
	// Line 189, Address: 0x10253ec, Func Offset: 0x19c
	// Line 190, Address: 0x10253f4, Func Offset: 0x1a4
	// Func End, Address: 0x1025408, Func Offset: 0x1b8
}

// 
// Start address: 0x1025410
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	// Line 201, Address: 0x1025410, Func Offset: 0
	// Line 202, Address: 0x1025420, Func Offset: 0x10
	// Line 205, Address: 0x102543c, Func Offset: 0x2c
	// Line 215, Address: 0x1025470, Func Offset: 0x60
	// Line 221, Address: 0x102549c, Func Offset: 0x8c
	// Line 222, Address: 0x10254ac, Func Offset: 0x9c
	// Line 223, Address: 0x10254b4, Func Offset: 0xa4
	// Line 224, Address: 0x10254c4, Func Offset: 0xb4
	// Line 225, Address: 0x10254d4, Func Offset: 0xc4
	// Line 226, Address: 0x10254e8, Func Offset: 0xd8
	// Line 228, Address: 0x10254f0, Func Offset: 0xe0
	// Line 229, Address: 0x1025510, Func Offset: 0x100
	// Line 230, Address: 0x1025544, Func Offset: 0x134
	// Line 231, Address: 0x102557c, Func Offset: 0x16c
	// Line 233, Address: 0x1025584, Func Offset: 0x174
	// Line 234, Address: 0x10255b4, Func Offset: 0x1a4
	// Line 238, Address: 0x10255e8, Func Offset: 0x1d8
	// Line 239, Address: 0x1025610, Func Offset: 0x200
	// Line 240, Address: 0x1025614, Func Offset: 0x204
	// Line 241, Address: 0x1025648, Func Offset: 0x238
	// Line 243, Address: 0x1025650, Func Offset: 0x240
	// Line 244, Address: 0x1025678, Func Offset: 0x268
	// Line 245, Address: 0x102567c, Func Offset: 0x26c
	// Line 246, Address: 0x10256b0, Func Offset: 0x2a0
	// Line 248, Address: 0x10256b8, Func Offset: 0x2a8
	// Line 250, Address: 0x10256c8, Func Offset: 0x2b8
	// Line 251, Address: 0x10256d4, Func Offset: 0x2c4
	// Line 252, Address: 0x10256e0, Func Offset: 0x2d0
	// Line 253, Address: 0x10256ec, Func Offset: 0x2dc
	// Line 254, Address: 0x10256f8, Func Offset: 0x2e8
	// Func End, Address: 0x1025710, Func Offset: 0x300
}

// 
// Start address: 0x1025710
void scrbinit(short xWk, short yWk)
{
	_anon1 lYwk;
	// Line 266, Address: 0x1025710, Func Offset: 0
	// Line 269, Address: 0x1025720, Func Offset: 0x10
	// Line 270, Address: 0x1025728, Func Offset: 0x18
	// Line 272, Address: 0x102572c, Func Offset: 0x1c
	// Line 273, Address: 0x1025740, Func Offset: 0x30
	// Line 274, Address: 0x102574c, Func Offset: 0x3c
	// Line 275, Address: 0x102578c, Func Offset: 0x7c
	// Line 277, Address: 0x10257cc, Func Offset: 0xbc
	// Line 278, Address: 0x1025804, Func Offset: 0xf4
	// Line 279, Address: 0x1025844, Func Offset: 0x134
	// Line 281, Address: 0x1025884, Func Offset: 0x174
	// Line 282, Address: 0x10258a4, Func Offset: 0x194
	// Func End, Address: 0x10258b4, Func Offset: 0x1a4
}

// 
// Start address: 0x10258c0
void scroll()
{
	short* pHScrollWork;
	_anon1* pHScrollBuff;
	_anon1* psHscr;
	int i;
	int j;
	unsigned short wD1;
	unsigned short temp;
	_anon1 lD0;
	_anon1 lD2;
	_anon1 lD3;
	int lD4;
	int lD5;
	unsigned char z12c_cnttbl[5];
	int scaddtbl[5];
	// Line 293, Address: 0x10258c0, Func Offset: 0
	// Line 303, Address: 0x10258e8, Func Offset: 0x28
	// Line 307, Address: 0x1025914, Func Offset: 0x54
	// Line 309, Address: 0x1025924, Func Offset: 0x64
	// Line 311, Address: 0x1025950, Func Offset: 0x90
	// Line 313, Address: 0x1025958, Func Offset: 0x98
	// Line 314, Address: 0x1025960, Func Offset: 0xa0
	// Line 316, Address: 0x1025968, Func Offset: 0xa8
	// Line 317, Address: 0x1025978, Func Offset: 0xb8
	// Line 319, Address: 0x1025988, Func Offset: 0xc8
	// Line 320, Address: 0x10259b0, Func Offset: 0xf0
	// Line 322, Address: 0x10259d8, Func Offset: 0x118
	// Line 323, Address: 0x10259ec, Func Offset: 0x12c
	// Line 324, Address: 0x1025a08, Func Offset: 0x148
	// Line 326, Address: 0x1025a18, Func Offset: 0x158
	// Line 328, Address: 0x1025a40, Func Offset: 0x180
	// Line 329, Address: 0x1025a78, Func Offset: 0x1b8
	// Line 331, Address: 0x1025a8c, Func Offset: 0x1cc
	// Line 332, Address: 0x1025a94, Func Offset: 0x1d4
	// Line 333, Address: 0x1025aa0, Func Offset: 0x1e0
	// Line 334, Address: 0x1025ac0, Func Offset: 0x200
	// Line 335, Address: 0x1025ac4, Func Offset: 0x204
	// Line 337, Address: 0x1025ad4, Func Offset: 0x214
	// Line 338, Address: 0x1025af4, Func Offset: 0x234
	// Line 339, Address: 0x1025afc, Func Offset: 0x23c
	// Line 340, Address: 0x1025b04, Func Offset: 0x244
	// Line 342, Address: 0x1025b10, Func Offset: 0x250
	// Line 343, Address: 0x1025b3c, Func Offset: 0x27c
	// Line 344, Address: 0x1025b40, Func Offset: 0x280
	// Line 346, Address: 0x1025b54, Func Offset: 0x294
	// Line 347, Address: 0x1025b60, Func Offset: 0x2a0
	// Line 348, Address: 0x1025b70, Func Offset: 0x2b0
	// Line 350, Address: 0x1025b7c, Func Offset: 0x2bc
	// Line 351, Address: 0x1025b9c, Func Offset: 0x2dc
	// Line 353, Address: 0x1025ba8, Func Offset: 0x2e8
	// Line 354, Address: 0x1025bb8, Func Offset: 0x2f8
	// Line 356, Address: 0x1025bc8, Func Offset: 0x308
	// Line 357, Address: 0x1025be8, Func Offset: 0x328
	// Line 359, Address: 0x1025bf4, Func Offset: 0x334
	// Line 360, Address: 0x1025c04, Func Offset: 0x344
	// Line 362, Address: 0x1025c14, Func Offset: 0x354
	// Line 363, Address: 0x1025c34, Func Offset: 0x374
	// Line 365, Address: 0x1025c40, Func Offset: 0x380
	// Line 366, Address: 0x1025c50, Func Offset: 0x390
	// Line 368, Address: 0x1025c60, Func Offset: 0x3a0
	// Line 369, Address: 0x1025c6c, Func Offset: 0x3ac
	// Line 370, Address: 0x1025c74, Func Offset: 0x3b4
	// Line 371, Address: 0x1025c84, Func Offset: 0x3c4
	// Line 372, Address: 0x1025cac, Func Offset: 0x3ec
	// Line 373, Address: 0x1025cc8, Func Offset: 0x408
	// Line 374, Address: 0x1025cd0, Func Offset: 0x410
	// Line 375, Address: 0x1025cd4, Func Offset: 0x414
	// Line 376, Address: 0x1025cf0, Func Offset: 0x430
	// Line 378, Address: 0x1025d00, Func Offset: 0x440
	// Line 379, Address: 0x1025d10, Func Offset: 0x450
	// Line 383, Address: 0x1025d18, Func Offset: 0x458
	// Line 384, Address: 0x1025d20, Func Offset: 0x460
	// Line 386, Address: 0x1025d4c, Func Offset: 0x48c
	// Line 387, Address: 0x1025d50, Func Offset: 0x490
	// Line 388, Address: 0x1025d60, Func Offset: 0x4a0
	// Line 389, Address: 0x1025d68, Func Offset: 0x4a8
	// Line 390, Address: 0x1025d84, Func Offset: 0x4c4
	// Line 391, Address: 0x1025d8c, Func Offset: 0x4cc
	// Line 396, Address: 0x1025d9c, Func Offset: 0x4dc
	// Line 397, Address: 0x1025da8, Func Offset: 0x4e8
	// Line 398, Address: 0x1025dcc, Func Offset: 0x50c
	// Line 399, Address: 0x1025dd8, Func Offset: 0x518
	// Line 400, Address: 0x1025df8, Func Offset: 0x538
	// Line 401, Address: 0x1025e04, Func Offset: 0x544
	// Line 402, Address: 0x1025e14, Func Offset: 0x554
	// Line 405, Address: 0x1025e2c, Func Offset: 0x56c
	// Line 406, Address: 0x1025e48, Func Offset: 0x588
	// Line 407, Address: 0x1025e54, Func Offset: 0x594
	// Line 408, Address: 0x1025e60, Func Offset: 0x5a0
	// Line 409, Address: 0x1025e84, Func Offset: 0x5c4
	// Line 410, Address: 0x1025e94, Func Offset: 0x5d4
	// Line 411, Address: 0x1025eb8, Func Offset: 0x5f8
	// Line 412, Address: 0x1025edc, Func Offset: 0x61c
	// Func End, Address: 0x1025f0c, Func Offset: 0x64c
}

// 
// Start address: 0x1025f10
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 433, Address: 0x1025f10, Func Offset: 0
	// Line 437, Address: 0x1025f2c, Func Offset: 0x1c
	// Line 438, Address: 0x1025f30, Func Offset: 0x20
	// Line 440, Address: 0x1025f50, Func Offset: 0x40
	// Line 441, Address: 0x1025f6c, Func Offset: 0x5c
	// Line 442, Address: 0x1025f78, Func Offset: 0x68
	// Line 444, Address: 0x1025f84, Func Offset: 0x74
	// Line 445, Address: 0x1025f8c, Func Offset: 0x7c
	// Line 446, Address: 0x1025f9c, Func Offset: 0x8c
	// Line 447, Address: 0x1025fc0, Func Offset: 0xb0
	// Line 448, Address: 0x1025fe0, Func Offset: 0xd0
	// Func End, Address: 0x1025ff4, Func Offset: 0xe4
}

// 
// Start address: 0x1026000
void scrollb_hv(int xOffs, int yOffs)
{
	int lwk;
	int lsv;
	_anon1 ldwk;
	// Line 470, Address: 0x1026000, Func Offset: 0
	// Line 474, Address: 0x1026014, Func Offset: 0x14
	// Line 475, Address: 0x102601c, Func Offset: 0x1c
	// Line 476, Address: 0x1026030, Func Offset: 0x30
	// Line 477, Address: 0x1026060, Func Offset: 0x60
	// Line 478, Address: 0x1026074, Func Offset: 0x74
	// Line 479, Address: 0x1026080, Func Offset: 0x80
	// Line 480, Address: 0x1026094, Func Offset: 0x94
	// Line 482, Address: 0x102609c, Func Offset: 0x9c
	// Line 487, Address: 0x10260b0, Func Offset: 0xb0
	// Line 488, Address: 0x10260b8, Func Offset: 0xb8
	// Line 489, Address: 0x10260cc, Func Offset: 0xcc
	// Line 490, Address: 0x10260fc, Func Offset: 0xfc
	// Line 491, Address: 0x1026110, Func Offset: 0x110
	// Line 492, Address: 0x102611c, Func Offset: 0x11c
	// Line 493, Address: 0x1026130, Func Offset: 0x130
	// Line 495, Address: 0x1026138, Func Offset: 0x138
	// Line 500, Address: 0x102614c, Func Offset: 0x14c
	// Func End, Address: 0x1026160, Func Offset: 0x160
}

// 
// Start address: 0x1026160
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 631, Address: 0x1026160, Func Offset: 0
	// Line 635, Address: 0x1026174, Func Offset: 0x14
	// Line 636, Address: 0x102617c, Func Offset: 0x1c
	// Line 637, Address: 0x1026184, Func Offset: 0x24
	// Line 638, Address: 0x102618c, Func Offset: 0x2c
	// Line 639, Address: 0x1026190, Func Offset: 0x30
	// Line 640, Address: 0x10261b4, Func Offset: 0x54
	// Line 641, Address: 0x10261c0, Func Offset: 0x60
	// Line 643, Address: 0x10261dc, Func Offset: 0x7c
	// Line 644, Address: 0x10261e8, Func Offset: 0x88
	// Line 645, Address: 0x10261fc, Func Offset: 0x9c
	// Line 646, Address: 0x1026208, Func Offset: 0xa8
	// Line 647, Address: 0x102622c, Func Offset: 0xcc
	// Line 649, Address: 0x1026234, Func Offset: 0xd4
	// Line 654, Address: 0x102625c, Func Offset: 0xfc
	// Func End, Address: 0x1026270, Func Offset: 0x110
}

// 
// Start address: 0x1026270
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 672, Address: 0x1026270, Func Offset: 0
	// Line 676, Address: 0x1026284, Func Offset: 0x14
	// Line 677, Address: 0x102628c, Func Offset: 0x1c
	// Line 678, Address: 0x1026294, Func Offset: 0x24
	// Line 679, Address: 0x102629c, Func Offset: 0x2c
	// Line 680, Address: 0x10262a0, Func Offset: 0x30
	// Line 681, Address: 0x10262c4, Func Offset: 0x54
	// Line 682, Address: 0x10262d0, Func Offset: 0x60
	// Line 684, Address: 0x10262ec, Func Offset: 0x7c
	// Line 685, Address: 0x10262f8, Func Offset: 0x88
	// Line 686, Address: 0x102630c, Func Offset: 0x9c
	// Line 687, Address: 0x1026318, Func Offset: 0xa8
	// Line 688, Address: 0x102633c, Func Offset: 0xcc
	// Line 690, Address: 0x1026344, Func Offset: 0xd4
	// Line 695, Address: 0x102636c, Func Offset: 0xfc
	// Func End, Address: 0x1026380, Func Offset: 0x110
}

// 
// Start address: 0x1026380
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 710, Address: 0x1026380, Func Offset: 0
	// Line 714, Address: 0x1026390, Func Offset: 0x10
	// Line 716, Address: 0x10263a0, Func Offset: 0x20
	// Line 717, Address: 0x10263a8, Func Offset: 0x28
	// Line 718, Address: 0x10263dc, Func Offset: 0x5c
	// Line 719, Address: 0x10263e4, Func Offset: 0x64
	// Line 720, Address: 0x10263f8, Func Offset: 0x78
	// Line 721, Address: 0x102641c, Func Offset: 0x9c
	// Line 722, Address: 0x1026430, Func Offset: 0xb0
	// Line 723, Address: 0x1026438, Func Offset: 0xb8
	// Line 728, Address: 0x102644c, Func Offset: 0xcc
	// Func End, Address: 0x1026464, Func Offset: 0xe4
}

// 
// Start address: 0x1026470
void scrh_move()
{
	short xwk;
	// Line 745, Address: 0x1026470, Func Offset: 0
	// Line 748, Address: 0x1026478, Func Offset: 0x8
	// Line 749, Address: 0x10264c0, Func Offset: 0x50
	// Line 751, Address: 0x10264d0, Func Offset: 0x60
	// Line 752, Address: 0x10264d8, Func Offset: 0x68
	// Line 753, Address: 0x10264e0, Func Offset: 0x70
	// Line 755, Address: 0x10264f0, Func Offset: 0x80
	// Line 756, Address: 0x1026504, Func Offset: 0x94
	// Line 760, Address: 0x1026510, Func Offset: 0xa0
	// Line 761, Address: 0x1026524, Func Offset: 0xb4
	// Line 762, Address: 0x1026548, Func Offset: 0xd8
	// Line 764, Address: 0x1026558, Func Offset: 0xe8
	// Line 766, Address: 0x1026560, Func Offset: 0xf0
	// Line 767, Address: 0x1026574, Func Offset: 0x104
	// Line 771, Address: 0x1026580, Func Offset: 0x110
	// Line 772, Address: 0x1026594, Func Offset: 0x124
	// Line 773, Address: 0x10265b8, Func Offset: 0x148
	// Line 778, Address: 0x10265c8, Func Offset: 0x158
	// Line 779, Address: 0x10265f8, Func Offset: 0x188
	// Line 780, Address: 0x1026600, Func Offset: 0x190
	// Func End, Address: 0x1026610, Func Offset: 0x1a0
}

// 
// Start address: 0x1026610
void scroll_v()
{
	short ywk;
	// Line 795, Address: 0x1026610, Func Offset: 0
	// Line 798, Address: 0x102661c, Func Offset: 0xc
	// Line 799, Address: 0x1026650, Func Offset: 0x40
	// Line 800, Address: 0x1026668, Func Offset: 0x58
	// Line 804, Address: 0x1026674, Func Offset: 0x64
	// Line 805, Address: 0x102668c, Func Offset: 0x7c
	// Line 806, Address: 0x1026698, Func Offset: 0x88
	// Line 807, Address: 0x10266bc, Func Offset: 0xac
	// Line 808, Address: 0x10266d0, Func Offset: 0xc0
	// Line 809, Address: 0x10266dc, Func Offset: 0xcc
	// Line 810, Address: 0x10266e4, Func Offset: 0xd4
	// Line 811, Address: 0x102670c, Func Offset: 0xfc
	// Line 812, Address: 0x1026734, Func Offset: 0x124
	// Line 813, Address: 0x1026740, Func Offset: 0x130
	// Line 815, Address: 0x1026748, Func Offset: 0x138
	// Line 816, Address: 0x1026770, Func Offset: 0x160
	// Line 817, Address: 0x1026780, Func Offset: 0x170
	// Line 818, Address: 0x1026788, Func Offset: 0x178
	// Line 823, Address: 0x1026790, Func Offset: 0x180
	// Line 824, Address: 0x10267bc, Func Offset: 0x1ac
	// Line 825, Address: 0x10267c8, Func Offset: 0x1b8
	// Line 826, Address: 0x10267d0, Func Offset: 0x1c0
	// Line 827, Address: 0x10267e0, Func Offset: 0x1d0
	// Line 828, Address: 0x10267e8, Func Offset: 0x1d8
	// Line 833, Address: 0x10267f0, Func Offset: 0x1e0
	// Line 834, Address: 0x10267f8, Func Offset: 0x1e8
	// Func End, Address: 0x102680c, Func Offset: 0x1fc
}

// 
// Start address: 0x1026810
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 848, Address: 0x1026810, Func Offset: 0
	// Line 851, Address: 0x1026820, Func Offset: 0x10
	// Line 852, Address: 0x102683c, Func Offset: 0x2c
	// Line 853, Address: 0x1026854, Func Offset: 0x44
	// Line 854, Address: 0x1026878, Func Offset: 0x68
	// Line 855, Address: 0x1026880, Func Offset: 0x70
	// Line 859, Address: 0x1026890, Func Offset: 0x80
	// Line 860, Address: 0x10268a4, Func Offset: 0x94
	// Line 861, Address: 0x10268b0, Func Offset: 0xa0
	// Line 864, Address: 0x10268b8, Func Offset: 0xa8
	// Line 865, Address: 0x10268d0, Func Offset: 0xc0
	// Line 866, Address: 0x10268dc, Func Offset: 0xcc
	// Line 867, Address: 0x10268fc, Func Offset: 0xec
	// Line 868, Address: 0x1026908, Func Offset: 0xf8
	// Line 869, Address: 0x1026910, Func Offset: 0x100
	// Line 871, Address: 0x102691c, Func Offset: 0x10c
	// Line 873, Address: 0x1026924, Func Offset: 0x114
	// Line 874, Address: 0x102693c, Func Offset: 0x12c
	// Line 875, Address: 0x1026948, Func Offset: 0x138
	// Line 876, Address: 0x1026968, Func Offset: 0x158
	// Line 877, Address: 0x1026974, Func Offset: 0x164
	// Line 878, Address: 0x102697c, Func Offset: 0x16c
	// Line 881, Address: 0x1026988, Func Offset: 0x178
	// Func End, Address: 0x102699c, Func Offset: 0x18c
}

// 
// Start address: 0x10269a0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 895, Address: 0x10269a0, Func Offset: 0
	// Line 898, Address: 0x10269b0, Func Offset: 0x10
	// Line 900, Address: 0x10269bc, Func Offset: 0x1c
	// Line 901, Address: 0x10269d4, Func Offset: 0x34
	// Line 902, Address: 0x10269e0, Func Offset: 0x40
	// Line 903, Address: 0x1026a00, Func Offset: 0x60
	// Line 904, Address: 0x1026a0c, Func Offset: 0x6c
	// Line 905, Address: 0x1026a14, Func Offset: 0x74
	// Line 907, Address: 0x1026a20, Func Offset: 0x80
	// Func End, Address: 0x1026a34, Func Offset: 0x94
}

// 
// Start address: 0x1026a40
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 922, Address: 0x1026a40, Func Offset: 0
	// Line 925, Address: 0x1026a4c, Func Offset: 0xc
	// Line 926, Address: 0x1026a50, Func Offset: 0x10
	// Line 927, Address: 0x1026a7c, Func Offset: 0x3c
	// Line 928, Address: 0x1026a90, Func Offset: 0x50
	// Line 929, Address: 0x1026a9c, Func Offset: 0x5c
	// Line 930, Address: 0x1026aa4, Func Offset: 0x64
	// Line 932, Address: 0x1026ab0, Func Offset: 0x70
	// Func End, Address: 0x1026ac0, Func Offset: 0x80
}

// 
// Start address: 0x1026ac0
void sv_move_sub2()
{
	// Line 936, Address: 0x1026ac0, Func Offset: 0
	// Line 937, Address: 0x1026ac8, Func Offset: 0x8
	// Line 939, Address: 0x1026ad0, Func Offset: 0x10
	// Line 940, Address: 0x1026adc, Func Offset: 0x1c
	// Func End, Address: 0x1026aec, Func Offset: 0x2c
}

// 
// Start address: 0x1026af0
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 954, Address: 0x1026af0, Func Offset: 0
	// Line 957, Address: 0x1026afc, Func Offset: 0xc
	// Line 958, Address: 0x1026b20, Func Offset: 0x30
	// Line 959, Address: 0x1026b44, Func Offset: 0x54
	// Line 960, Address: 0x1026b50, Func Offset: 0x60
	// Func End, Address: 0x1026b60, Func Offset: 0x70
}

// 
// Start address: 0x1026b60
void scrv_up_ch(_anon1 lSpd)
{
	// Line 975, Address: 0x1026b60, Func Offset: 0
	// Line 976, Address: 0x1026b6c, Func Offset: 0xc
	// Line 977, Address: 0x1026b94, Func Offset: 0x34
	// Line 979, Address: 0x1026bac, Func Offset: 0x4c
	// Line 980, Address: 0x1026bb8, Func Offset: 0x58
	// Line 981, Address: 0x1026bc0, Func Offset: 0x60
	// Line 982, Address: 0x1026bcc, Func Offset: 0x6c
	// Line 983, Address: 0x1026be0, Func Offset: 0x80
	// Line 984, Address: 0x1026bf4, Func Offset: 0x94
	// Line 988, Address: 0x1026c08, Func Offset: 0xa8
	// Line 989, Address: 0x1026c14, Func Offset: 0xb4
	// Func End, Address: 0x1026c24, Func Offset: 0xc4
}

// 
// Start address: 0x1026c30
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1003, Address: 0x1026c30, Func Offset: 0
	// Line 1006, Address: 0x1026c3c, Func Offset: 0xc
	// Line 1007, Address: 0x1026c5c, Func Offset: 0x2c
	// Line 1008, Address: 0x1026c80, Func Offset: 0x50
	// Line 1009, Address: 0x1026c8c, Func Offset: 0x5c
	// Func End, Address: 0x1026c9c, Func Offset: 0x6c
}

// 
// Start address: 0x1026ca0
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1024, Address: 0x1026ca0, Func Offset: 0
	// Line 1025, Address: 0x1026cac, Func Offset: 0xc
	// Line 1026, Address: 0x1026cd4, Func Offset: 0x34
	// Line 1028, Address: 0x1026cec, Func Offset: 0x4c
	// Line 1029, Address: 0x1026cf8, Func Offset: 0x58
	// Line 1030, Address: 0x1026d00, Func Offset: 0x60
	// Line 1031, Address: 0x1026d0c, Func Offset: 0x6c
	// Line 1032, Address: 0x1026d20, Func Offset: 0x80
	// Line 1033, Address: 0x1026d34, Func Offset: 0x94
	// Line 1037, Address: 0x1026d48, Func Offset: 0xa8
	// Line 1038, Address: 0x1026d54, Func Offset: 0xb4
	// Func End, Address: 0x1026d64, Func Offset: 0xc4
}

// 
// Start address: 0x1026d70
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon6 spdwk;
	// Line 1055, Address: 0x1026d70, Func Offset: 0
	// Line 1059, Address: 0x1026d80, Func Offset: 0x10
	// Line 1060, Address: 0x1026d90, Func Offset: 0x20
	// Line 1061, Address: 0x1026db4, Func Offset: 0x44
	// Line 1062, Address: 0x1026dc8, Func Offset: 0x58
	// Line 1063, Address: 0x1026de0, Func Offset: 0x70
	// Line 1065, Address: 0x1026dec, Func Offset: 0x7c
	// Line 1067, Address: 0x1026df8, Func Offset: 0x88
	// Line 1068, Address: 0x1026e34, Func Offset: 0xc4
	// Line 1069, Address: 0x1026e3c, Func Offset: 0xcc
	// Line 1070, Address: 0x1026e50, Func Offset: 0xe0
	// Line 1071, Address: 0x1026e7c, Func Offset: 0x10c
	// Line 1072, Address: 0x1026e8c, Func Offset: 0x11c
	// Line 1073, Address: 0x1026ea0, Func Offset: 0x130
	// Line 1074, Address: 0x1026ea8, Func Offset: 0x138
	// Line 1079, Address: 0x1026ebc, Func Offset: 0x14c
	// Func End, Address: 0x1026ed0, Func Offset: 0x160
}

// 
// Start address: 0x1026ed0
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon1 lD4;
	unsigned short wD5;
	// Line 1119, Address: 0x1026ed0, Func Offset: 0
	// Line 1128, Address: 0x1026ef0, Func Offset: 0x20
	// Line 1129, Address: 0x1026ef8, Func Offset: 0x28
	// Line 1130, Address: 0x1026f04, Func Offset: 0x34
	// Line 1131, Address: 0x1026f10, Func Offset: 0x40
	// Line 1132, Address: 0x1026f18, Func Offset: 0x48
	// Line 1133, Address: 0x1026f1c, Func Offset: 0x4c
	// Line 1145, Address: 0x1026f30, Func Offset: 0x60
	// Line 1146, Address: 0x1026f38, Func Offset: 0x68
	// Line 1147, Address: 0x1026f44, Func Offset: 0x74
	// Line 1148, Address: 0x1026f50, Func Offset: 0x80
	// Line 1149, Address: 0x1026f58, Func Offset: 0x88
	// Line 1151, Address: 0x1026f5c, Func Offset: 0x8c
	// Line 1152, Address: 0x1026f68, Func Offset: 0x98
	// Line 1153, Address: 0x1026f7c, Func Offset: 0xac
	// Line 1155, Address: 0x1026f88, Func Offset: 0xb8
	// Line 1156, Address: 0x1026f90, Func Offset: 0xc0
	// Line 1157, Address: 0x1026f98, Func Offset: 0xc8
	// Line 1158, Address: 0x1026fb8, Func Offset: 0xe8
	// Line 1160, Address: 0x1026fe4, Func Offset: 0x114
	// Line 1161, Address: 0x1026ff8, Func Offset: 0x128
	// Line 1163, Address: 0x1027004, Func Offset: 0x134
	// Line 1164, Address: 0x102700c, Func Offset: 0x13c
	// Line 1165, Address: 0x1027014, Func Offset: 0x144
	// Line 1166, Address: 0x1027034, Func Offset: 0x164
	// Line 1168, Address: 0x1027060, Func Offset: 0x190
	// Line 1169, Address: 0x1027074, Func Offset: 0x1a4
	// Line 1171, Address: 0x1027080, Func Offset: 0x1b0
	// Line 1172, Address: 0x1027088, Func Offset: 0x1b8
	// Line 1173, Address: 0x1027090, Func Offset: 0x1c0
	// Line 1174, Address: 0x10270b0, Func Offset: 0x1e0
	// Line 1176, Address: 0x10270dc, Func Offset: 0x20c
	// Line 1177, Address: 0x10270f0, Func Offset: 0x220
	// Line 1179, Address: 0x10270fc, Func Offset: 0x22c
	// Line 1180, Address: 0x1027104, Func Offset: 0x234
	// Line 1181, Address: 0x102710c, Func Offset: 0x23c
	// Line 1182, Address: 0x102712c, Func Offset: 0x25c
	// Line 1185, Address: 0x1027158, Func Offset: 0x288
	// Func End, Address: 0x1027180, Func Offset: 0x2b0
}

// 
// Start address: 0x1027180
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon1 lD4;
	int WrtTblCnt;
	unsigned short wD0;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1199, Address: 0x1027180, Func Offset: 0
	// Line 1210, Address: 0x10271ac, Func Offset: 0x2c
	// Line 1212, Address: 0x10271b4, Func Offset: 0x34
	// Line 1213, Address: 0x10271cc, Func Offset: 0x4c
	// Line 1214, Address: 0x10271e0, Func Offset: 0x60
	// Line 1216, Address: 0x10271e8, Func Offset: 0x68
	// Line 1218, Address: 0x10271fc, Func Offset: 0x7c
	// Line 1219, Address: 0x1027214, Func Offset: 0x94
	// Line 1220, Address: 0x1027228, Func Offset: 0xa8
	// Line 1221, Address: 0x1027230, Func Offset: 0xb0
	// Line 1223, Address: 0x1027238, Func Offset: 0xb8
	// Line 1224, Address: 0x102724c, Func Offset: 0xcc
	// Line 1229, Address: 0x1027254, Func Offset: 0xd4
	// Line 1230, Address: 0x10272a4, Func Offset: 0x124
	// Line 1231, Address: 0x10272ac, Func Offset: 0x12c
	// Line 1232, Address: 0x10272cc, Func Offset: 0x14c
	// Line 1233, Address: 0x10272ec, Func Offset: 0x16c
	// Line 1234, Address: 0x1027310, Func Offset: 0x190
	// Line 1235, Address: 0x102731c, Func Offset: 0x19c
	// Line 1236, Address: 0x1027324, Func Offset: 0x1a4
	// Line 1238, Address: 0x1027344, Func Offset: 0x1c4
	// Line 1242, Address: 0x1027370, Func Offset: 0x1f0
	// Line 1245, Address: 0x1027378, Func Offset: 0x1f8
	// Line 1246, Address: 0x102737c, Func Offset: 0x1fc
	// Line 1250, Address: 0x102739c, Func Offset: 0x21c
	// Line 1257, Address: 0x10273c8, Func Offset: 0x248
	// Line 1264, Address: 0x10273dc, Func Offset: 0x25c
	// Line 1265, Address: 0x10273e4, Func Offset: 0x264
	// Line 1266, Address: 0x10273ec, Func Offset: 0x26c
	// Line 1267, Address: 0x1027404, Func Offset: 0x284
	// Line 1268, Address: 0x1027424, Func Offset: 0x2a4
	// Line 1272, Address: 0x102742c, Func Offset: 0x2ac
	// Line 1274, Address: 0x102745c, Func Offset: 0x2dc
	// Line 1275, Address: 0x1027468, Func Offset: 0x2e8
	// Line 1279, Address: 0x1027478, Func Offset: 0x2f8
	// Line 1280, Address: 0x1027484, Func Offset: 0x304
	// Line 1281, Address: 0x10274a4, Func Offset: 0x324
	// Line 1282, Address: 0x10274d0, Func Offset: 0x350
	// Line 1283, Address: 0x10274f0, Func Offset: 0x370
	// Line 1285, Address: 0x1027514, Func Offset: 0x394
	// Line 1288, Address: 0x1027538, Func Offset: 0x3b8
	// Line 1290, Address: 0x1027558, Func Offset: 0x3d8
	// Line 1292, Address: 0x102756c, Func Offset: 0x3ec
	// Line 1293, Address: 0x1027578, Func Offset: 0x3f8
	// Line 1294, Address: 0x1027588, Func Offset: 0x408
	// Line 1296, Address: 0x1027590, Func Offset: 0x410
	// Func End, Address: 0x10275b8, Func Offset: 0x438
}

// 
// Start address: 0x10275c0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1323, Address: 0x10275c0, Func Offset: 0
	// Line 1336, Address: 0x10275e8, Func Offset: 0x28
	// Line 1339, Address: 0x1027608, Func Offset: 0x48
	// Line 1340, Address: 0x102761c, Func Offset: 0x5c
	// Line 1341, Address: 0x1027630, Func Offset: 0x70
	// Line 1342, Address: 0x1027644, Func Offset: 0x84
	// Line 1344, Address: 0x1027658, Func Offset: 0x98
	// Line 1345, Address: 0x1027664, Func Offset: 0xa4
	// Line 1346, Address: 0x1027678, Func Offset: 0xb8
	// Func End, Address: 0x1027688, Func Offset: 0xc8
}

// 
// Start address: 0x1027690
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1350, Address: 0x1027690, Func Offset: 0
	// Line 1354, Address: 0x10276b8, Func Offset: 0x28
	// Line 1357, Address: 0x10276d8, Func Offset: 0x48
	// Line 1358, Address: 0x10276ec, Func Offset: 0x5c
	// Line 1359, Address: 0x1027700, Func Offset: 0x70
	// Line 1360, Address: 0x1027714, Func Offset: 0x84
	// Line 1362, Address: 0x1027728, Func Offset: 0x98
	// Line 1363, Address: 0x1027734, Func Offset: 0xa4
	// Line 1364, Address: 0x1027748, Func Offset: 0xb8
	// Func End, Address: 0x1027758, Func Offset: 0xc8
}

// 
// Start address: 0x1027760
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1380, Address: 0x1027760, Func Offset: 0
	// Line 1384, Address: 0x1027788, Func Offset: 0x28
	// Line 1385, Address: 0x10277a8, Func Offset: 0x48
	// Line 1386, Address: 0x10277bc, Func Offset: 0x5c
	// Line 1387, Address: 0x10277cc, Func Offset: 0x6c
	// Line 1388, Address: 0x10277f0, Func Offset: 0x90
	// Line 1389, Address: 0x10277fc, Func Offset: 0x9c
	// Line 1390, Address: 0x1027810, Func Offset: 0xb0
	// Func End, Address: 0x1027820, Func Offset: 0xc0
}

// 
// Start address: 0x1027820
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
	// Line 1408, Address: 0x1027820, Func Offset: 0
	// Line 1414, Address: 0x1027854, Func Offset: 0x34
	// Line 1415, Address: 0x1027870, Func Offset: 0x50
	// Line 1416, Address: 0x1027884, Func Offset: 0x64
	// Line 1417, Address: 0x102788c, Func Offset: 0x6c
	// Line 1419, Address: 0x1027894, Func Offset: 0x74
	// Line 1420, Address: 0x102789c, Func Offset: 0x7c
	// Line 1421, Address: 0x10278a8, Func Offset: 0x88
	// Line 1422, Address: 0x10278b4, Func Offset: 0x94
	// Line 1423, Address: 0x10278b8, Func Offset: 0x98
	// Line 1424, Address: 0x10278bc, Func Offset: 0x9c
	// Line 1425, Address: 0x10278c0, Func Offset: 0xa0
	// Line 1426, Address: 0x10278c4, Func Offset: 0xa4
	// Line 1427, Address: 0x10278cc, Func Offset: 0xac
	// Line 1428, Address: 0x10278d8, Func Offset: 0xb8
	// Line 1429, Address: 0x10278dc, Func Offset: 0xbc
	// Line 1430, Address: 0x10278e0, Func Offset: 0xc0
	// Line 1431, Address: 0x10278e4, Func Offset: 0xc4
	// Line 1432, Address: 0x10278e8, Func Offset: 0xc8
	// Line 1433, Address: 0x10278f0, Func Offset: 0xd0
	// Line 1434, Address: 0x10278fc, Func Offset: 0xdc
	// Line 1435, Address: 0x1027900, Func Offset: 0xe0
	// Line 1436, Address: 0x1027904, Func Offset: 0xe4
	// Line 1437, Address: 0x1027908, Func Offset: 0xe8
	// Line 1438, Address: 0x102790c, Func Offset: 0xec
	// Line 1440, Address: 0x1027914, Func Offset: 0xf4
	// Line 1441, Address: 0x1027918, Func Offset: 0xf8
	// Line 1442, Address: 0x102791c, Func Offset: 0xfc
	// Line 1443, Address: 0x1027920, Func Offset: 0x100
	// Line 1446, Address: 0x1027924, Func Offset: 0x104
	// Line 1447, Address: 0x1027968, Func Offset: 0x148
	// Line 1448, Address: 0x10279ac, Func Offset: 0x18c
	// Line 1449, Address: 0x10279f0, Func Offset: 0x1d0
	// Line 1450, Address: 0x1027a34, Func Offset: 0x214
	// Func End, Address: 0x1027a64, Func Offset: 0x244
}

// 
// Start address: 0x1027a70
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1469, Address: 0x1027a70, Func Offset: 0
	// Line 1470, Address: 0x1027a90, Func Offset: 0x20
	// Line 1471, Address: 0x1027ab0, Func Offset: 0x40
	// Func End, Address: 0x1027ac0, Func Offset: 0x50
}

// 
// Start address: 0x1027ac0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1474, Address: 0x1027ac0, Func Offset: 0
	// Line 1475, Address: 0x1027ae0, Func Offset: 0x20
	// Line 1476, Address: 0x1027ae4, Func Offset: 0x24
	// Line 1477, Address: 0x1027b04, Func Offset: 0x44
	// Func End, Address: 0x1027b14, Func Offset: 0x54
}

// 
// Start address: 0x1027b20
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1480, Address: 0x1027b20, Func Offset: 0
	// Line 1486, Address: 0x1027b50, Func Offset: 0x30
	// Line 1487, Address: 0x1027b60, Func Offset: 0x40
	// Line 1490, Address: 0x1027b70, Func Offset: 0x50
	// Line 1491, Address: 0x1027b90, Func Offset: 0x70
	// Line 1492, Address: 0x1027bb0, Func Offset: 0x90
	// Line 1493, Address: 0x1027bd8, Func Offset: 0xb8
	// Line 1494, Address: 0x1027c00, Func Offset: 0xe0
	// Line 1495, Address: 0x1027c48, Func Offset: 0x128
	// Line 1497, Address: 0x1027c54, Func Offset: 0x134
	// Line 1499, Address: 0x1027c70, Func Offset: 0x150
	// Line 1500, Address: 0x1027c78, Func Offset: 0x158
	// Line 1501, Address: 0x1027c84, Func Offset: 0x164
	// Line 1503, Address: 0x1027c90, Func Offset: 0x170
	// Line 1504, Address: 0x1027c98, Func Offset: 0x178
	// Line 1505, Address: 0x1027cb8, Func Offset: 0x198
	// Line 1506, Address: 0x1027cd4, Func Offset: 0x1b4
	// Line 1507, Address: 0x1027cdc, Func Offset: 0x1bc
	// Line 1508, Address: 0x1027cfc, Func Offset: 0x1dc
	// Line 1510, Address: 0x1027d18, Func Offset: 0x1f8
	// Line 1511, Address: 0x1027d20, Func Offset: 0x200
	// Line 1512, Address: 0x1027d28, Func Offset: 0x208
	// Line 1513, Address: 0x1027d34, Func Offset: 0x214
	// Line 1514, Address: 0x1027d4c, Func Offset: 0x22c
	// Line 1516, Address: 0x1027d5c, Func Offset: 0x23c
	// Line 1518, Address: 0x1027d68, Func Offset: 0x248
	// Line 1519, Address: 0x1027d70, Func Offset: 0x250
	// Line 1520, Address: 0x1027d74, Func Offset: 0x254
	// Func End, Address: 0x1027d94, Func Offset: 0x274
}

// 
// Start address: 0x1027da0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1536, Address: 0x1027da0, Func Offset: 0
	// Line 1541, Address: 0x1027dc8, Func Offset: 0x28
	// Line 1542, Address: 0x1027e2c, Func Offset: 0x8c
	// Line 1543, Address: 0x1027e34, Func Offset: 0x94
	// Line 1544, Address: 0x1027e3c, Func Offset: 0x9c
	// Line 1545, Address: 0x1027e5c, Func Offset: 0xbc
	// Line 1546, Address: 0x1027e78, Func Offset: 0xd8
	// Line 1547, Address: 0x1027e80, Func Offset: 0xe0
	// Line 1548, Address: 0x1027ea0, Func Offset: 0x100
	// Line 1550, Address: 0x1027ebc, Func Offset: 0x11c
	// Line 1551, Address: 0x1027ec4, Func Offset: 0x124
	// Line 1552, Address: 0x1027ecc, Func Offset: 0x12c
	// Line 1553, Address: 0x1027ed8, Func Offset: 0x138
	// Line 1554, Address: 0x1027ef0, Func Offset: 0x150
	// Line 1555, Address: 0x1027ef8, Func Offset: 0x158
	// Line 1557, Address: 0x1027f08, Func Offset: 0x168
	// Line 1559, Address: 0x1027f14, Func Offset: 0x174
	// Line 1560, Address: 0x1027f1c, Func Offset: 0x17c
	// Line 1561, Address: 0x1027f20, Func Offset: 0x180
	// Func End, Address: 0x1027f3c, Func Offset: 0x19c
}

// 
// Start address: 0x1027f40
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1575, Address: 0x1027f40, Func Offset: 0
	// Line 1582, Address: 0x1027f5c, Func Offset: 0x1c
	// Line 1583, Address: 0x1027f60, Func Offset: 0x20
	// Line 1584, Address: 0x1027f68, Func Offset: 0x28
	// Line 1585, Address: 0x1027f8c, Func Offset: 0x4c
	// Line 1586, Address: 0x1027f98, Func Offset: 0x58
	// Line 1587, Address: 0x1027fb0, Func Offset: 0x70
	// Line 1588, Address: 0x1027fc4, Func Offset: 0x84
	// Line 1591, Address: 0x1027fdc, Func Offset: 0x9c
	// Func End, Address: 0x1027ff4, Func Offset: 0xb4
}

// 
// Start address: 0x1028000
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1603, Address: 0x1028000, Func Offset: 0
	// Line 1604, Address: 0x102800c, Func Offset: 0xc
	// Line 1605, Address: 0x1028038, Func Offset: 0x38
	// Line 1606, Address: 0x1028084, Func Offset: 0x84
	// Line 1607, Address: 0x10280b0, Func Offset: 0xb0
	// Line 1611, Address: 0x1028108, Func Offset: 0x108
	// Line 1612, Address: 0x102810c, Func Offset: 0x10c
	// Func End, Address: 0x1028118, Func Offset: 0x118
}

// 
// Start address: 0x1028120
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1627, Address: 0x1028120, Func Offset: 0
	// Line 1628, Address: 0x102813c, Func Offset: 0x1c
	// Line 1629, Address: 0x1028158, Func Offset: 0x38
	// Func End, Address: 0x1028168, Func Offset: 0x48
}

// 
// Start address: 0x1028170
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1632, Address: 0x1028170, Func Offset: 0
	// Line 1633, Address: 0x102818c, Func Offset: 0x1c
	// Line 1634, Address: 0x1028190, Func Offset: 0x20
	// Line 1635, Address: 0x10281ac, Func Offset: 0x3c
	// Func End, Address: 0x10281bc, Func Offset: 0x4c
}

// 
// Start address: 0x10281c0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1638, Address: 0x10281c0, Func Offset: 0
	// Line 1639, Address: 0x10281d4, Func Offset: 0x14
	// Line 1640, Address: 0x10281f0, Func Offset: 0x30
	// Func End, Address: 0x1028200, Func Offset: 0x40
}

// 
// Start address: 0x1028200
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1643, Address: 0x1028200, Func Offset: 0
	// Line 1644, Address: 0x102821c, Func Offset: 0x1c
	// Line 1645, Address: 0x1028238, Func Offset: 0x38
	// Func End, Address: 0x1028248, Func Offset: 0x48
}

// 
// Start address: 0x1028250
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1648, Address: 0x1028250, Func Offset: 0
	// Line 1649, Address: 0x1028268, Func Offset: 0x18
	// Line 1650, Address: 0x1028278, Func Offset: 0x28
	// Line 1651, Address: 0x1028288, Func Offset: 0x38
	// Line 1652, Address: 0x1028294, Func Offset: 0x44
	// Line 1654, Address: 0x10282a0, Func Offset: 0x50
	// Line 1655, Address: 0x10282cc, Func Offset: 0x7c
	// Line 1657, Address: 0x10282f8, Func Offset: 0xa8
	// Func End, Address: 0x1028304, Func Offset: 0xb4
}

// 
// Start address: 0x1028310
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1671, Address: 0x1028310, Func Offset: 0
	// Line 1676, Address: 0x1028328, Func Offset: 0x18
	// Line 1677, Address: 0x1028334, Func Offset: 0x24
	// Line 1678, Address: 0x1028340, Func Offset: 0x30
	// Line 1679, Address: 0x1028348, Func Offset: 0x38
	// Line 1680, Address: 0x102834c, Func Offset: 0x3c
	// Line 1684, Address: 0x1028364, Func Offset: 0x54
	// Line 1685, Address: 0x102836c, Func Offset: 0x5c
	// Line 1686, Address: 0x1028370, Func Offset: 0x60
	// Line 1687, Address: 0x1028380, Func Offset: 0x70
	// Func End, Address: 0x10283a0, Func Offset: 0x90
}

// 
// Start address: 0x10283a0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1690, Address: 0x10283a0, Func Offset: 0
	// Line 1691, Address: 0x10283b8, Func Offset: 0x18
	// Line 1692, Address: 0x10283d8, Func Offset: 0x38
	// Func End, Address: 0x10283e8, Func Offset: 0x48
}

// 
// Start address: 0x10283f0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1695, Address: 0x10283f0, Func Offset: 0
	// Line 1699, Address: 0x1028410, Func Offset: 0x20
	// Line 1700, Address: 0x102842c, Func Offset: 0x3c
	// Line 1701, Address: 0x1028454, Func Offset: 0x64
	// Line 1702, Address: 0x1028460, Func Offset: 0x70
	// Line 1703, Address: 0x1028488, Func Offset: 0x98
	// Func End, Address: 0x1028498, Func Offset: 0xa8
}

// 
// Start address: 0x10284a0
void mapwrt_z11c(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1706, Address: 0x10284a0, Func Offset: 0
	// Line 1709, Address: 0x10284bc, Func Offset: 0x1c
	// Line 1710, Address: 0x10284c4, Func Offset: 0x24
	// Line 1713, Address: 0x10284cc, Func Offset: 0x2c
	// Line 1714, Address: 0x10284f0, Func Offset: 0x50
	// Line 1715, Address: 0x1028510, Func Offset: 0x70
	// Line 1716, Address: 0x1028518, Func Offset: 0x78
	// Line 1717, Address: 0x102853c, Func Offset: 0x9c
	// Func End, Address: 0x1028558, Func Offset: 0xb8
}

// 
// Start address: 0x1028560
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1733, Address: 0x1028560, Func Offset: 0
	// Line 1738, Address: 0x1028588, Func Offset: 0x28
	// Line 1739, Address: 0x1028598, Func Offset: 0x38
	// Line 1740, Address: 0x10285b4, Func Offset: 0x54
	// Line 1741, Address: 0x10285d8, Func Offset: 0x78
	// Line 1742, Address: 0x1028600, Func Offset: 0xa0
	// Line 1743, Address: 0x102860c, Func Offset: 0xac
	// Line 1744, Address: 0x1028614, Func Offset: 0xb4
	// Line 1745, Address: 0x1028630, Func Offset: 0xd0
	// Line 1746, Address: 0x1028658, Func Offset: 0xf8
	// Line 1748, Address: 0x1028660, Func Offset: 0x100
	// Line 1749, Address: 0x1028664, Func Offset: 0x104
	// Line 1750, Address: 0x1028680, Func Offset: 0x120
	// Line 1752, Address: 0x10286a8, Func Offset: 0x148
	// Func End, Address: 0x10286c4, Func Offset: 0x164
}

// 
// Start address: 0x10286d0
void mapinit()
{
	// Line 1763, Address: 0x10286d0, Func Offset: 0
	// Line 1765, Address: 0x10286d8, Func Offset: 0x8
	// Line 1766, Address: 0x10286ec, Func Offset: 0x1c
	// Line 1768, Address: 0x1028700, Func Offset: 0x30
	// Line 1769, Address: 0x1028718, Func Offset: 0x48
	// Line 1770, Address: 0x1028738, Func Offset: 0x68
	// Func End, Address: 0x1028748, Func Offset: 0x78
}

