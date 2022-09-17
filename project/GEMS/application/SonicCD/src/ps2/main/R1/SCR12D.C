typedef struct tagPOINT;
typedef union _anon0;
typedef struct _anon1;
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
typedef void(*type_9)(void*, unsigned char, int);

typedef short type_0[256];
typedef _anon13 type_1[128];
typedef unsigned char type_3[33];
typedef _anon11 type_4[20];
typedef _anon11 type_5[0];
typedef unsigned short type_6[6];
typedef int type_7[4];
typedef _anon0* type_8[8];
typedef unsigned char type_10[4];
typedef unsigned short type_11[2];
typedef unsigned short type_12[4];
typedef unsigned short type_13[4][1024];
typedef unsigned short type_14[16];
typedef _anon0* type_15[8];
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

union _anon0
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon1
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
	_anon0 xposi;
	_anon0 yposi;
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

unsigned char z12dwrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
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
_anon0 scra_v_posit;
_anon0 scra_h_posit;
_anon4 demoflag;
short enddemono;
unsigned char plflag;
void(*sMemSet)(void*, unsigned char, int);
short hscrollwork[256];
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
_anon0 scrb_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
_anon0* lphscrollbuff;
_anon9 scrflagz;
_anon9 scrflagc;
_anon9 scrflagb;
_anon0 vscroll;
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
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon9 scrflagaw;
unsigned char mapwkb[64][8];
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
_anon9 scrflagbw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon1 mapinittbl;

void enecginit();
void divdevset();
_anon13* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk);
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
void scrv_up_ch(_anon0 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon0 lSpd);
void scrv_move(_anon0 lSpd);
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
// Start address: 0x1025230
void enecginit()
{
	// Line 134, Address: 0x1025230, Func Offset: 0
	// Func End, Address: 0x1025238, Func Offset: 0x8
}

// 
// Start address: 0x1025240
void divdevset()
{
	// Line 139, Address: 0x1025240, Func Offset: 0
	// Func End, Address: 0x1025248, Func Offset: 0x8
}

// 
// Start address: 0x1025250
_anon13* main_chk()
{
	// Line 153, Address: 0x1025250, Func Offset: 0
	// Line 154, Address: 0x1025270, Func Offset: 0x20
	// Line 155, Address: 0x1025278, Func Offset: 0x28
	// Func End, Address: 0x1025280, Func Offset: 0x30
}

// 
// Start address: 0x1025280
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 166, Address: 0x1025280, Func Offset: 0
	// Line 167, Address: 0x102528c, Func Offset: 0xc
	// Line 172, Address: 0x10252c0, Func Offset: 0x40
	// Line 174, Address: 0x1025308, Func Offset: 0x88
	// Line 175, Address: 0x102530c, Func Offset: 0x8c
	// Line 176, Address: 0x1025328, Func Offset: 0xa8
	// Line 177, Address: 0x102534c, Func Offset: 0xcc
	// Line 178, Address: 0x1025370, Func Offset: 0xf0
	// Line 179, Address: 0x1025394, Func Offset: 0x114
	// Line 181, Address: 0x10253b8, Func Offset: 0x138
	// Line 182, Address: 0x10253dc, Func Offset: 0x15c
	// Line 183, Address: 0x10253e8, Func Offset: 0x168
	// Line 185, Address: 0x10253f4, Func Offset: 0x174
	// Line 186, Address: 0x1025410, Func Offset: 0x190
	// Line 188, Address: 0x102541c, Func Offset: 0x19c
	// Line 189, Address: 0x1025424, Func Offset: 0x1a4
	// Func End, Address: 0x1025438, Func Offset: 0x1b8
}

// 
// Start address: 0x1025440
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	// Line 200, Address: 0x1025440, Func Offset: 0
	// Line 201, Address: 0x1025450, Func Offset: 0x10
	// Line 204, Address: 0x102546c, Func Offset: 0x2c
	// Line 214, Address: 0x10254a0, Func Offset: 0x60
	// Line 220, Address: 0x10254cc, Func Offset: 0x8c
	// Line 221, Address: 0x10254dc, Func Offset: 0x9c
	// Line 222, Address: 0x10254e4, Func Offset: 0xa4
	// Line 223, Address: 0x10254f4, Func Offset: 0xb4
	// Line 224, Address: 0x1025504, Func Offset: 0xc4
	// Line 225, Address: 0x1025518, Func Offset: 0xd8
	// Line 227, Address: 0x1025520, Func Offset: 0xe0
	// Line 228, Address: 0x1025540, Func Offset: 0x100
	// Line 229, Address: 0x1025574, Func Offset: 0x134
	// Line 230, Address: 0x10255ac, Func Offset: 0x16c
	// Line 232, Address: 0x10255b4, Func Offset: 0x174
	// Line 233, Address: 0x10255e4, Func Offset: 0x1a4
	// Line 237, Address: 0x1025618, Func Offset: 0x1d8
	// Line 238, Address: 0x1025640, Func Offset: 0x200
	// Line 239, Address: 0x1025644, Func Offset: 0x204
	// Line 240, Address: 0x1025678, Func Offset: 0x238
	// Line 242, Address: 0x1025680, Func Offset: 0x240
	// Line 243, Address: 0x10256a8, Func Offset: 0x268
	// Line 244, Address: 0x10256ac, Func Offset: 0x26c
	// Line 245, Address: 0x10256e0, Func Offset: 0x2a0
	// Line 247, Address: 0x10256e8, Func Offset: 0x2a8
	// Line 249, Address: 0x10256f8, Func Offset: 0x2b8
	// Line 250, Address: 0x1025704, Func Offset: 0x2c4
	// Line 251, Address: 0x1025710, Func Offset: 0x2d0
	// Line 252, Address: 0x102571c, Func Offset: 0x2dc
	// Line 253, Address: 0x1025728, Func Offset: 0x2e8
	// Func End, Address: 0x1025740, Func Offset: 0x300
}

// 
// Start address: 0x1025740
void scrbinit(short xWk, short yWk)
{
	_anon0 lYwk;
	// Line 265, Address: 0x1025740, Func Offset: 0
	// Line 268, Address: 0x1025750, Func Offset: 0x10
	// Line 269, Address: 0x1025758, Func Offset: 0x18
	// Line 271, Address: 0x102575c, Func Offset: 0x1c
	// Line 272, Address: 0x102576c, Func Offset: 0x2c
	// Line 273, Address: 0x1025778, Func Offset: 0x38
	// Line 274, Address: 0x10257b8, Func Offset: 0x78
	// Line 276, Address: 0x10257f8, Func Offset: 0xb8
	// Line 277, Address: 0x1025830, Func Offset: 0xf0
	// Line 278, Address: 0x1025870, Func Offset: 0x130
	// Line 280, Address: 0x10258b0, Func Offset: 0x170
	// Line 281, Address: 0x10258d0, Func Offset: 0x190
	// Func End, Address: 0x10258e0, Func Offset: 0x1a0
}

// 
// Start address: 0x10258e0
void scroll()
{
	short* pHScrollWork;
	_anon0* pHScrollBuff;
	_anon0* psHscr;
	int i;
	int j;
	unsigned short wD1;
	_anon0 lD0;
	_anon0 lD2;
	int lD4;
	int lD5;
	unsigned char z12d_cnttbl[4];
	int scaddtbl[4];
	// Line 292, Address: 0x10258e0, Func Offset: 0
	// Line 302, Address: 0x1025904, Func Offset: 0x24
	// Line 306, Address: 0x1025930, Func Offset: 0x50
	// Line 308, Address: 0x1025940, Func Offset: 0x60
	// Line 310, Address: 0x102596c, Func Offset: 0x8c
	// Line 312, Address: 0x1025974, Func Offset: 0x94
	// Line 313, Address: 0x102597c, Func Offset: 0x9c
	// Line 315, Address: 0x1025984, Func Offset: 0xa4
	// Line 316, Address: 0x1025994, Func Offset: 0xb4
	// Line 318, Address: 0x10259a4, Func Offset: 0xc4
	// Line 319, Address: 0x10259cc, Func Offset: 0xec
	// Line 321, Address: 0x10259f4, Func Offset: 0x114
	// Line 322, Address: 0x1025a08, Func Offset: 0x128
	// Line 323, Address: 0x1025a20, Func Offset: 0x140
	// Line 325, Address: 0x1025a30, Func Offset: 0x150
	// Line 327, Address: 0x1025a58, Func Offset: 0x178
	// Line 328, Address: 0x1025a90, Func Offset: 0x1b0
	// Line 330, Address: 0x1025aa4, Func Offset: 0x1c4
	// Line 331, Address: 0x1025aac, Func Offset: 0x1cc
	// Line 332, Address: 0x1025ab8, Func Offset: 0x1d8
	// Line 333, Address: 0x1025ad8, Func Offset: 0x1f8
	// Line 334, Address: 0x1025adc, Func Offset: 0x1fc
	// Line 336, Address: 0x1025aec, Func Offset: 0x20c
	// Line 337, Address: 0x1025b0c, Func Offset: 0x22c
	// Line 338, Address: 0x1025b14, Func Offset: 0x234
	// Line 339, Address: 0x1025b1c, Func Offset: 0x23c
	// Line 341, Address: 0x1025b28, Func Offset: 0x248
	// Line 342, Address: 0x1025b54, Func Offset: 0x274
	// Line 343, Address: 0x1025b58, Func Offset: 0x278
	// Line 345, Address: 0x1025b6c, Func Offset: 0x28c
	// Line 346, Address: 0x1025b78, Func Offset: 0x298
	// Line 347, Address: 0x1025b88, Func Offset: 0x2a8
	// Line 349, Address: 0x1025b94, Func Offset: 0x2b4
	// Line 350, Address: 0x1025bb4, Func Offset: 0x2d4
	// Line 352, Address: 0x1025bc0, Func Offset: 0x2e0
	// Line 353, Address: 0x1025bd0, Func Offset: 0x2f0
	// Line 355, Address: 0x1025be0, Func Offset: 0x300
	// Line 356, Address: 0x1025c00, Func Offset: 0x320
	// Line 358, Address: 0x1025c0c, Func Offset: 0x32c
	// Line 359, Address: 0x1025c1c, Func Offset: 0x33c
	// Line 361, Address: 0x1025c2c, Func Offset: 0x34c
	// Line 362, Address: 0x1025c4c, Func Offset: 0x36c
	// Line 364, Address: 0x1025c58, Func Offset: 0x378
	// Line 365, Address: 0x1025c68, Func Offset: 0x388
	// Line 367, Address: 0x1025c78, Func Offset: 0x398
	// Line 368, Address: 0x1025c84, Func Offset: 0x3a4
	// Line 369, Address: 0x1025c8c, Func Offset: 0x3ac
	// Line 370, Address: 0x1025c9c, Func Offset: 0x3bc
	// Line 371, Address: 0x1025cc4, Func Offset: 0x3e4
	// Line 372, Address: 0x1025ccc, Func Offset: 0x3ec
	// Line 373, Address: 0x1025cf8, Func Offset: 0x418
	// Line 374, Address: 0x1025d14, Func Offset: 0x434
	// Func End, Address: 0x1025d40, Func Offset: 0x460
}

// 
// Start address: 0x1025d40
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 395, Address: 0x1025d40, Func Offset: 0
	// Line 399, Address: 0x1025d5c, Func Offset: 0x1c
	// Line 400, Address: 0x1025d60, Func Offset: 0x20
	// Line 402, Address: 0x1025d80, Func Offset: 0x40
	// Line 403, Address: 0x1025d9c, Func Offset: 0x5c
	// Line 404, Address: 0x1025da8, Func Offset: 0x68
	// Line 406, Address: 0x1025db4, Func Offset: 0x74
	// Line 407, Address: 0x1025dbc, Func Offset: 0x7c
	// Line 408, Address: 0x1025dcc, Func Offset: 0x8c
	// Line 409, Address: 0x1025df0, Func Offset: 0xb0
	// Line 410, Address: 0x1025e10, Func Offset: 0xd0
	// Func End, Address: 0x1025e24, Func Offset: 0xe4
}

// 
// Start address: 0x1025e30
void scrollb_hv(int xOffs, int yOffs)
{
	int lwk;
	int lsv;
	_anon0 ldwk;
	// Line 432, Address: 0x1025e30, Func Offset: 0
	// Line 436, Address: 0x1025e44, Func Offset: 0x14
	// Line 437, Address: 0x1025e4c, Func Offset: 0x1c
	// Line 438, Address: 0x1025e60, Func Offset: 0x30
	// Line 439, Address: 0x1025e90, Func Offset: 0x60
	// Line 440, Address: 0x1025ea4, Func Offset: 0x74
	// Line 441, Address: 0x1025eb0, Func Offset: 0x80
	// Line 442, Address: 0x1025ec4, Func Offset: 0x94
	// Line 444, Address: 0x1025ecc, Func Offset: 0x9c
	// Line 449, Address: 0x1025ee0, Func Offset: 0xb0
	// Line 450, Address: 0x1025ee8, Func Offset: 0xb8
	// Line 451, Address: 0x1025efc, Func Offset: 0xcc
	// Line 452, Address: 0x1025f2c, Func Offset: 0xfc
	// Line 453, Address: 0x1025f40, Func Offset: 0x110
	// Line 454, Address: 0x1025f4c, Func Offset: 0x11c
	// Line 455, Address: 0x1025f60, Func Offset: 0x130
	// Line 457, Address: 0x1025f68, Func Offset: 0x138
	// Line 462, Address: 0x1025f7c, Func Offset: 0x14c
	// Func End, Address: 0x1025f90, Func Offset: 0x160
}

// 
// Start address: 0x1025f90
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 593, Address: 0x1025f90, Func Offset: 0
	// Line 597, Address: 0x1025fa4, Func Offset: 0x14
	// Line 598, Address: 0x1025fac, Func Offset: 0x1c
	// Line 599, Address: 0x1025fb4, Func Offset: 0x24
	// Line 600, Address: 0x1025fbc, Func Offset: 0x2c
	// Line 601, Address: 0x1025fc0, Func Offset: 0x30
	// Line 602, Address: 0x1025fe4, Func Offset: 0x54
	// Line 603, Address: 0x1025ff0, Func Offset: 0x60
	// Line 605, Address: 0x102600c, Func Offset: 0x7c
	// Line 606, Address: 0x1026018, Func Offset: 0x88
	// Line 607, Address: 0x102602c, Func Offset: 0x9c
	// Line 608, Address: 0x1026038, Func Offset: 0xa8
	// Line 609, Address: 0x102605c, Func Offset: 0xcc
	// Line 611, Address: 0x1026064, Func Offset: 0xd4
	// Line 616, Address: 0x102608c, Func Offset: 0xfc
	// Func End, Address: 0x10260a0, Func Offset: 0x110
}

// 
// Start address: 0x10260a0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 634, Address: 0x10260a0, Func Offset: 0
	// Line 638, Address: 0x10260b4, Func Offset: 0x14
	// Line 639, Address: 0x10260bc, Func Offset: 0x1c
	// Line 640, Address: 0x10260c4, Func Offset: 0x24
	// Line 641, Address: 0x10260cc, Func Offset: 0x2c
	// Line 642, Address: 0x10260d0, Func Offset: 0x30
	// Line 643, Address: 0x10260f4, Func Offset: 0x54
	// Line 644, Address: 0x1026100, Func Offset: 0x60
	// Line 646, Address: 0x102611c, Func Offset: 0x7c
	// Line 647, Address: 0x1026128, Func Offset: 0x88
	// Line 648, Address: 0x102613c, Func Offset: 0x9c
	// Line 649, Address: 0x1026148, Func Offset: 0xa8
	// Line 650, Address: 0x102616c, Func Offset: 0xcc
	// Line 652, Address: 0x1026174, Func Offset: 0xd4
	// Line 657, Address: 0x102619c, Func Offset: 0xfc
	// Func End, Address: 0x10261b0, Func Offset: 0x110
}

// 
// Start address: 0x10261b0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 672, Address: 0x10261b0, Func Offset: 0
	// Line 676, Address: 0x10261c0, Func Offset: 0x10
	// Line 678, Address: 0x10261d0, Func Offset: 0x20
	// Line 679, Address: 0x10261d8, Func Offset: 0x28
	// Line 680, Address: 0x102620c, Func Offset: 0x5c
	// Line 681, Address: 0x1026214, Func Offset: 0x64
	// Line 682, Address: 0x1026228, Func Offset: 0x78
	// Line 683, Address: 0x102624c, Func Offset: 0x9c
	// Line 684, Address: 0x1026260, Func Offset: 0xb0
	// Line 685, Address: 0x1026268, Func Offset: 0xb8
	// Line 690, Address: 0x102627c, Func Offset: 0xcc
	// Func End, Address: 0x1026294, Func Offset: 0xe4
}

// 
// Start address: 0x10262a0
void scrh_move()
{
	short xwk;
	// Line 707, Address: 0x10262a0, Func Offset: 0
	// Line 710, Address: 0x10262a8, Func Offset: 0x8
	// Line 711, Address: 0x10262f0, Func Offset: 0x50
	// Line 713, Address: 0x1026300, Func Offset: 0x60
	// Line 714, Address: 0x1026308, Func Offset: 0x68
	// Line 715, Address: 0x1026310, Func Offset: 0x70
	// Line 717, Address: 0x1026320, Func Offset: 0x80
	// Line 718, Address: 0x1026334, Func Offset: 0x94
	// Line 722, Address: 0x1026340, Func Offset: 0xa0
	// Line 723, Address: 0x1026354, Func Offset: 0xb4
	// Line 724, Address: 0x1026378, Func Offset: 0xd8
	// Line 726, Address: 0x1026388, Func Offset: 0xe8
	// Line 728, Address: 0x1026390, Func Offset: 0xf0
	// Line 729, Address: 0x10263a4, Func Offset: 0x104
	// Line 733, Address: 0x10263b0, Func Offset: 0x110
	// Line 734, Address: 0x10263c4, Func Offset: 0x124
	// Line 735, Address: 0x10263e8, Func Offset: 0x148
	// Line 740, Address: 0x10263f8, Func Offset: 0x158
	// Line 741, Address: 0x1026428, Func Offset: 0x188
	// Line 742, Address: 0x1026430, Func Offset: 0x190
	// Func End, Address: 0x1026440, Func Offset: 0x1a0
}

// 
// Start address: 0x1026440
void scroll_v()
{
	short ywk;
	// Line 757, Address: 0x1026440, Func Offset: 0
	// Line 760, Address: 0x102644c, Func Offset: 0xc
	// Line 761, Address: 0x1026480, Func Offset: 0x40
	// Line 762, Address: 0x1026498, Func Offset: 0x58
	// Line 766, Address: 0x10264a4, Func Offset: 0x64
	// Line 767, Address: 0x10264bc, Func Offset: 0x7c
	// Line 768, Address: 0x10264c8, Func Offset: 0x88
	// Line 769, Address: 0x10264ec, Func Offset: 0xac
	// Line 770, Address: 0x1026500, Func Offset: 0xc0
	// Line 771, Address: 0x102650c, Func Offset: 0xcc
	// Line 772, Address: 0x1026514, Func Offset: 0xd4
	// Line 773, Address: 0x102653c, Func Offset: 0xfc
	// Line 774, Address: 0x1026564, Func Offset: 0x124
	// Line 775, Address: 0x1026570, Func Offset: 0x130
	// Line 777, Address: 0x1026578, Func Offset: 0x138
	// Line 778, Address: 0x10265a0, Func Offset: 0x160
	// Line 779, Address: 0x10265b0, Func Offset: 0x170
	// Line 780, Address: 0x10265b8, Func Offset: 0x178
	// Line 785, Address: 0x10265c0, Func Offset: 0x180
	// Line 786, Address: 0x10265ec, Func Offset: 0x1ac
	// Line 787, Address: 0x10265f8, Func Offset: 0x1b8
	// Line 788, Address: 0x1026600, Func Offset: 0x1c0
	// Line 789, Address: 0x1026610, Func Offset: 0x1d0
	// Line 790, Address: 0x1026618, Func Offset: 0x1d8
	// Line 795, Address: 0x1026620, Func Offset: 0x1e0
	// Line 796, Address: 0x1026628, Func Offset: 0x1e8
	// Func End, Address: 0x102663c, Func Offset: 0x1fc
}

// 
// Start address: 0x1026640
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 810, Address: 0x1026640, Func Offset: 0
	// Line 813, Address: 0x1026650, Func Offset: 0x10
	// Line 814, Address: 0x102666c, Func Offset: 0x2c
	// Line 815, Address: 0x1026684, Func Offset: 0x44
	// Line 816, Address: 0x10266a8, Func Offset: 0x68
	// Line 817, Address: 0x10266b0, Func Offset: 0x70
	// Line 821, Address: 0x10266c0, Func Offset: 0x80
	// Line 822, Address: 0x10266d4, Func Offset: 0x94
	// Line 823, Address: 0x10266e0, Func Offset: 0xa0
	// Line 826, Address: 0x10266e8, Func Offset: 0xa8
	// Line 827, Address: 0x1026700, Func Offset: 0xc0
	// Line 828, Address: 0x102670c, Func Offset: 0xcc
	// Line 829, Address: 0x102672c, Func Offset: 0xec
	// Line 830, Address: 0x1026738, Func Offset: 0xf8
	// Line 831, Address: 0x1026740, Func Offset: 0x100
	// Line 833, Address: 0x102674c, Func Offset: 0x10c
	// Line 835, Address: 0x1026754, Func Offset: 0x114
	// Line 836, Address: 0x102676c, Func Offset: 0x12c
	// Line 837, Address: 0x1026778, Func Offset: 0x138
	// Line 838, Address: 0x1026798, Func Offset: 0x158
	// Line 839, Address: 0x10267a4, Func Offset: 0x164
	// Line 840, Address: 0x10267ac, Func Offset: 0x16c
	// Line 843, Address: 0x10267b8, Func Offset: 0x178
	// Func End, Address: 0x10267cc, Func Offset: 0x18c
}

// 
// Start address: 0x10267d0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 857, Address: 0x10267d0, Func Offset: 0
	// Line 860, Address: 0x10267e0, Func Offset: 0x10
	// Line 862, Address: 0x10267ec, Func Offset: 0x1c
	// Line 863, Address: 0x1026804, Func Offset: 0x34
	// Line 864, Address: 0x1026810, Func Offset: 0x40
	// Line 865, Address: 0x1026830, Func Offset: 0x60
	// Line 866, Address: 0x102683c, Func Offset: 0x6c
	// Line 867, Address: 0x1026844, Func Offset: 0x74
	// Line 869, Address: 0x1026850, Func Offset: 0x80
	// Func End, Address: 0x1026864, Func Offset: 0x94
}

// 
// Start address: 0x1026870
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 884, Address: 0x1026870, Func Offset: 0
	// Line 887, Address: 0x102687c, Func Offset: 0xc
	// Line 888, Address: 0x1026880, Func Offset: 0x10
	// Line 889, Address: 0x10268ac, Func Offset: 0x3c
	// Line 890, Address: 0x10268c0, Func Offset: 0x50
	// Line 891, Address: 0x10268cc, Func Offset: 0x5c
	// Line 892, Address: 0x10268d4, Func Offset: 0x64
	// Line 894, Address: 0x10268e0, Func Offset: 0x70
	// Func End, Address: 0x10268f0, Func Offset: 0x80
}

// 
// Start address: 0x10268f0
void sv_move_sub2()
{
	// Line 898, Address: 0x10268f0, Func Offset: 0
	// Line 899, Address: 0x10268f8, Func Offset: 0x8
	// Line 901, Address: 0x1026900, Func Offset: 0x10
	// Line 902, Address: 0x102690c, Func Offset: 0x1c
	// Func End, Address: 0x102691c, Func Offset: 0x2c
}

// 
// Start address: 0x1026920
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	// Line 916, Address: 0x1026920, Func Offset: 0
	// Line 919, Address: 0x102692c, Func Offset: 0xc
	// Line 920, Address: 0x1026950, Func Offset: 0x30
	// Line 921, Address: 0x1026974, Func Offset: 0x54
	// Line 922, Address: 0x1026980, Func Offset: 0x60
	// Func End, Address: 0x1026990, Func Offset: 0x70
}

// 
// Start address: 0x1026990
void scrv_up_ch(_anon0 lSpd)
{
	// Line 937, Address: 0x1026990, Func Offset: 0
	// Line 938, Address: 0x102699c, Func Offset: 0xc
	// Line 939, Address: 0x10269c4, Func Offset: 0x34
	// Line 941, Address: 0x10269dc, Func Offset: 0x4c
	// Line 942, Address: 0x10269e8, Func Offset: 0x58
	// Line 943, Address: 0x10269f0, Func Offset: 0x60
	// Line 944, Address: 0x10269fc, Func Offset: 0x6c
	// Line 945, Address: 0x1026a10, Func Offset: 0x80
	// Line 946, Address: 0x1026a24, Func Offset: 0x94
	// Line 950, Address: 0x1026a38, Func Offset: 0xa8
	// Line 951, Address: 0x1026a44, Func Offset: 0xb4
	// Func End, Address: 0x1026a54, Func Offset: 0xc4
}

// 
// Start address: 0x1026a60
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	// Line 965, Address: 0x1026a60, Func Offset: 0
	// Line 968, Address: 0x1026a6c, Func Offset: 0xc
	// Line 969, Address: 0x1026a8c, Func Offset: 0x2c
	// Line 970, Address: 0x1026ab0, Func Offset: 0x50
	// Line 971, Address: 0x1026abc, Func Offset: 0x5c
	// Func End, Address: 0x1026acc, Func Offset: 0x6c
}

// 
// Start address: 0x1026ad0
void scrv_down_ch(_anon0 lSpd)
{
	// Line 986, Address: 0x1026ad0, Func Offset: 0
	// Line 987, Address: 0x1026adc, Func Offset: 0xc
	// Line 988, Address: 0x1026b04, Func Offset: 0x34
	// Line 990, Address: 0x1026b1c, Func Offset: 0x4c
	// Line 991, Address: 0x1026b28, Func Offset: 0x58
	// Line 992, Address: 0x1026b30, Func Offset: 0x60
	// Line 993, Address: 0x1026b3c, Func Offset: 0x6c
	// Line 994, Address: 0x1026b50, Func Offset: 0x80
	// Line 995, Address: 0x1026b64, Func Offset: 0x94
	// Line 999, Address: 0x1026b78, Func Offset: 0xa8
	// Line 1000, Address: 0x1026b84, Func Offset: 0xb4
	// Func End, Address: 0x1026b94, Func Offset: 0xc4
}

// 
// Start address: 0x1026ba0
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon6 spdwk;
	// Line 1017, Address: 0x1026ba0, Func Offset: 0
	// Line 1021, Address: 0x1026bb0, Func Offset: 0x10
	// Line 1022, Address: 0x1026bc0, Func Offset: 0x20
	// Line 1023, Address: 0x1026be4, Func Offset: 0x44
	// Line 1024, Address: 0x1026bf8, Func Offset: 0x58
	// Line 1025, Address: 0x1026c10, Func Offset: 0x70
	// Line 1027, Address: 0x1026c1c, Func Offset: 0x7c
	// Line 1029, Address: 0x1026c28, Func Offset: 0x88
	// Line 1030, Address: 0x1026c64, Func Offset: 0xc4
	// Line 1031, Address: 0x1026c6c, Func Offset: 0xcc
	// Line 1032, Address: 0x1026c80, Func Offset: 0xe0
	// Line 1033, Address: 0x1026cac, Func Offset: 0x10c
	// Line 1034, Address: 0x1026cbc, Func Offset: 0x11c
	// Line 1035, Address: 0x1026cd0, Func Offset: 0x130
	// Line 1036, Address: 0x1026cd8, Func Offset: 0x138
	// Line 1041, Address: 0x1026cec, Func Offset: 0x14c
	// Func End, Address: 0x1026d00, Func Offset: 0x160
}

// 
// Start address: 0x1026d00
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon0 lD4;
	unsigned short wD5;
	// Line 1081, Address: 0x1026d00, Func Offset: 0
	// Line 1090, Address: 0x1026d20, Func Offset: 0x20
	// Line 1091, Address: 0x1026d28, Func Offset: 0x28
	// Line 1092, Address: 0x1026d34, Func Offset: 0x34
	// Line 1093, Address: 0x1026d40, Func Offset: 0x40
	// Line 1094, Address: 0x1026d48, Func Offset: 0x48
	// Line 1095, Address: 0x1026d4c, Func Offset: 0x4c
	// Line 1107, Address: 0x1026d60, Func Offset: 0x60
	// Line 1108, Address: 0x1026d68, Func Offset: 0x68
	// Line 1109, Address: 0x1026d74, Func Offset: 0x74
	// Line 1110, Address: 0x1026d80, Func Offset: 0x80
	// Line 1111, Address: 0x1026d88, Func Offset: 0x88
	// Line 1113, Address: 0x1026d8c, Func Offset: 0x8c
	// Line 1114, Address: 0x1026d98, Func Offset: 0x98
	// Line 1115, Address: 0x1026dac, Func Offset: 0xac
	// Line 1117, Address: 0x1026db8, Func Offset: 0xb8
	// Line 1118, Address: 0x1026dc0, Func Offset: 0xc0
	// Line 1119, Address: 0x1026dc8, Func Offset: 0xc8
	// Line 1120, Address: 0x1026de8, Func Offset: 0xe8
	// Line 1122, Address: 0x1026e14, Func Offset: 0x114
	// Line 1123, Address: 0x1026e28, Func Offset: 0x128
	// Line 1125, Address: 0x1026e34, Func Offset: 0x134
	// Line 1126, Address: 0x1026e3c, Func Offset: 0x13c
	// Line 1127, Address: 0x1026e44, Func Offset: 0x144
	// Line 1128, Address: 0x1026e64, Func Offset: 0x164
	// Line 1130, Address: 0x1026e90, Func Offset: 0x190
	// Line 1131, Address: 0x1026ea4, Func Offset: 0x1a4
	// Line 1133, Address: 0x1026eb0, Func Offset: 0x1b0
	// Line 1134, Address: 0x1026eb8, Func Offset: 0x1b8
	// Line 1135, Address: 0x1026ec0, Func Offset: 0x1c0
	// Line 1136, Address: 0x1026ee0, Func Offset: 0x1e0
	// Line 1138, Address: 0x1026f0c, Func Offset: 0x20c
	// Line 1139, Address: 0x1026f20, Func Offset: 0x220
	// Line 1141, Address: 0x1026f2c, Func Offset: 0x22c
	// Line 1142, Address: 0x1026f34, Func Offset: 0x234
	// Line 1143, Address: 0x1026f3c, Func Offset: 0x23c
	// Line 1144, Address: 0x1026f5c, Func Offset: 0x25c
	// Line 1147, Address: 0x1026f88, Func Offset: 0x288
	// Func End, Address: 0x1026fb0, Func Offset: 0x2b0
}

// 
// Start address: 0x1026fb0
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon0 lD4;
	int WrtTblCnt;
	unsigned short wD0;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1161, Address: 0x1026fb0, Func Offset: 0
	// Line 1172, Address: 0x1026fdc, Func Offset: 0x2c
	// Line 1174, Address: 0x1026fe4, Func Offset: 0x34
	// Line 1175, Address: 0x1026ffc, Func Offset: 0x4c
	// Line 1176, Address: 0x1027010, Func Offset: 0x60
	// Line 1178, Address: 0x1027018, Func Offset: 0x68
	// Line 1180, Address: 0x102702c, Func Offset: 0x7c
	// Line 1181, Address: 0x1027044, Func Offset: 0x94
	// Line 1182, Address: 0x1027058, Func Offset: 0xa8
	// Line 1183, Address: 0x1027060, Func Offset: 0xb0
	// Line 1185, Address: 0x1027068, Func Offset: 0xb8
	// Line 1186, Address: 0x102707c, Func Offset: 0xcc
	// Line 1191, Address: 0x1027084, Func Offset: 0xd4
	// Line 1192, Address: 0x10270d4, Func Offset: 0x124
	// Line 1193, Address: 0x10270dc, Func Offset: 0x12c
	// Line 1194, Address: 0x10270fc, Func Offset: 0x14c
	// Line 1195, Address: 0x102711c, Func Offset: 0x16c
	// Line 1196, Address: 0x1027140, Func Offset: 0x190
	// Line 1197, Address: 0x102714c, Func Offset: 0x19c
	// Line 1198, Address: 0x1027154, Func Offset: 0x1a4
	// Line 1200, Address: 0x1027174, Func Offset: 0x1c4
	// Line 1204, Address: 0x10271a0, Func Offset: 0x1f0
	// Line 1207, Address: 0x10271a8, Func Offset: 0x1f8
	// Line 1208, Address: 0x10271ac, Func Offset: 0x1fc
	// Line 1212, Address: 0x10271cc, Func Offset: 0x21c
	// Line 1219, Address: 0x10271f8, Func Offset: 0x248
	// Line 1226, Address: 0x102720c, Func Offset: 0x25c
	// Line 1227, Address: 0x1027214, Func Offset: 0x264
	// Line 1228, Address: 0x102721c, Func Offset: 0x26c
	// Line 1229, Address: 0x1027234, Func Offset: 0x284
	// Line 1230, Address: 0x1027254, Func Offset: 0x2a4
	// Line 1234, Address: 0x102725c, Func Offset: 0x2ac
	// Line 1236, Address: 0x102728c, Func Offset: 0x2dc
	// Line 1237, Address: 0x1027298, Func Offset: 0x2e8
	// Line 1241, Address: 0x10272a8, Func Offset: 0x2f8
	// Line 1242, Address: 0x10272b4, Func Offset: 0x304
	// Line 1243, Address: 0x10272d4, Func Offset: 0x324
	// Line 1244, Address: 0x1027300, Func Offset: 0x350
	// Line 1245, Address: 0x1027320, Func Offset: 0x370
	// Line 1247, Address: 0x1027344, Func Offset: 0x394
	// Line 1250, Address: 0x1027368, Func Offset: 0x3b8
	// Line 1252, Address: 0x1027388, Func Offset: 0x3d8
	// Line 1254, Address: 0x102739c, Func Offset: 0x3ec
	// Line 1255, Address: 0x10273a8, Func Offset: 0x3f8
	// Line 1256, Address: 0x10273b8, Func Offset: 0x408
	// Line 1258, Address: 0x10273c0, Func Offset: 0x410
	// Func End, Address: 0x10273e8, Func Offset: 0x438
}

// 
// Start address: 0x10273f0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1285, Address: 0x10273f0, Func Offset: 0
	// Line 1298, Address: 0x1027418, Func Offset: 0x28
	// Line 1301, Address: 0x1027438, Func Offset: 0x48
	// Line 1302, Address: 0x102744c, Func Offset: 0x5c
	// Line 1303, Address: 0x1027460, Func Offset: 0x70
	// Line 1304, Address: 0x1027474, Func Offset: 0x84
	// Line 1306, Address: 0x1027488, Func Offset: 0x98
	// Line 1307, Address: 0x1027494, Func Offset: 0xa4
	// Line 1308, Address: 0x10274a8, Func Offset: 0xb8
	// Func End, Address: 0x10274b8, Func Offset: 0xc8
}

// 
// Start address: 0x10274c0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1312, Address: 0x10274c0, Func Offset: 0
	// Line 1316, Address: 0x10274e8, Func Offset: 0x28
	// Line 1319, Address: 0x1027508, Func Offset: 0x48
	// Line 1320, Address: 0x102751c, Func Offset: 0x5c
	// Line 1321, Address: 0x1027530, Func Offset: 0x70
	// Line 1322, Address: 0x1027544, Func Offset: 0x84
	// Line 1324, Address: 0x1027558, Func Offset: 0x98
	// Line 1325, Address: 0x1027564, Func Offset: 0xa4
	// Line 1326, Address: 0x1027578, Func Offset: 0xb8
	// Func End, Address: 0x1027588, Func Offset: 0xc8
}

// 
// Start address: 0x1027590
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1342, Address: 0x1027590, Func Offset: 0
	// Line 1346, Address: 0x10275b8, Func Offset: 0x28
	// Line 1347, Address: 0x10275d8, Func Offset: 0x48
	// Line 1348, Address: 0x10275ec, Func Offset: 0x5c
	// Line 1349, Address: 0x10275fc, Func Offset: 0x6c
	// Line 1350, Address: 0x1027620, Func Offset: 0x90
	// Line 1351, Address: 0x102762c, Func Offset: 0x9c
	// Line 1352, Address: 0x1027640, Func Offset: 0xb0
	// Func End, Address: 0x1027650, Func Offset: 0xc0
}

// 
// Start address: 0x1027650
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
	// Line 1370, Address: 0x1027650, Func Offset: 0
	// Line 1376, Address: 0x1027684, Func Offset: 0x34
	// Line 1377, Address: 0x10276a0, Func Offset: 0x50
	// Line 1378, Address: 0x10276b4, Func Offset: 0x64
	// Line 1379, Address: 0x10276bc, Func Offset: 0x6c
	// Line 1381, Address: 0x10276c4, Func Offset: 0x74
	// Line 1382, Address: 0x10276cc, Func Offset: 0x7c
	// Line 1383, Address: 0x10276d8, Func Offset: 0x88
	// Line 1384, Address: 0x10276e4, Func Offset: 0x94
	// Line 1385, Address: 0x10276e8, Func Offset: 0x98
	// Line 1386, Address: 0x10276ec, Func Offset: 0x9c
	// Line 1387, Address: 0x10276f0, Func Offset: 0xa0
	// Line 1388, Address: 0x10276f4, Func Offset: 0xa4
	// Line 1389, Address: 0x10276fc, Func Offset: 0xac
	// Line 1390, Address: 0x1027708, Func Offset: 0xb8
	// Line 1391, Address: 0x102770c, Func Offset: 0xbc
	// Line 1392, Address: 0x1027710, Func Offset: 0xc0
	// Line 1393, Address: 0x1027714, Func Offset: 0xc4
	// Line 1394, Address: 0x1027718, Func Offset: 0xc8
	// Line 1395, Address: 0x1027720, Func Offset: 0xd0
	// Line 1396, Address: 0x102772c, Func Offset: 0xdc
	// Line 1397, Address: 0x1027730, Func Offset: 0xe0
	// Line 1398, Address: 0x1027734, Func Offset: 0xe4
	// Line 1399, Address: 0x1027738, Func Offset: 0xe8
	// Line 1400, Address: 0x102773c, Func Offset: 0xec
	// Line 1402, Address: 0x1027744, Func Offset: 0xf4
	// Line 1403, Address: 0x1027748, Func Offset: 0xf8
	// Line 1404, Address: 0x102774c, Func Offset: 0xfc
	// Line 1405, Address: 0x1027750, Func Offset: 0x100
	// Line 1408, Address: 0x1027754, Func Offset: 0x104
	// Line 1409, Address: 0x1027798, Func Offset: 0x148
	// Line 1410, Address: 0x10277dc, Func Offset: 0x18c
	// Line 1411, Address: 0x1027820, Func Offset: 0x1d0
	// Line 1412, Address: 0x1027864, Func Offset: 0x214
	// Func End, Address: 0x1027894, Func Offset: 0x244
}

// 
// Start address: 0x10278a0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1431, Address: 0x10278a0, Func Offset: 0
	// Line 1432, Address: 0x10278c0, Func Offset: 0x20
	// Line 1433, Address: 0x10278e0, Func Offset: 0x40
	// Func End, Address: 0x10278f0, Func Offset: 0x50
}

// 
// Start address: 0x10278f0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1436, Address: 0x10278f0, Func Offset: 0
	// Line 1437, Address: 0x1027910, Func Offset: 0x20
	// Line 1438, Address: 0x1027914, Func Offset: 0x24
	// Line 1439, Address: 0x1027934, Func Offset: 0x44
	// Func End, Address: 0x1027944, Func Offset: 0x54
}

// 
// Start address: 0x1027950
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1442, Address: 0x1027950, Func Offset: 0
	// Line 1448, Address: 0x1027980, Func Offset: 0x30
	// Line 1449, Address: 0x1027990, Func Offset: 0x40
	// Line 1452, Address: 0x10279a0, Func Offset: 0x50
	// Line 1453, Address: 0x10279c0, Func Offset: 0x70
	// Line 1454, Address: 0x10279e0, Func Offset: 0x90
	// Line 1455, Address: 0x1027a08, Func Offset: 0xb8
	// Line 1456, Address: 0x1027a30, Func Offset: 0xe0
	// Line 1457, Address: 0x1027a78, Func Offset: 0x128
	// Line 1459, Address: 0x1027a84, Func Offset: 0x134
	// Line 1461, Address: 0x1027aa0, Func Offset: 0x150
	// Line 1462, Address: 0x1027aa8, Func Offset: 0x158
	// Line 1463, Address: 0x1027ab4, Func Offset: 0x164
	// Line 1465, Address: 0x1027ac0, Func Offset: 0x170
	// Line 1466, Address: 0x1027ac8, Func Offset: 0x178
	// Line 1467, Address: 0x1027ae8, Func Offset: 0x198
	// Line 1468, Address: 0x1027b04, Func Offset: 0x1b4
	// Line 1469, Address: 0x1027b0c, Func Offset: 0x1bc
	// Line 1470, Address: 0x1027b2c, Func Offset: 0x1dc
	// Line 1472, Address: 0x1027b48, Func Offset: 0x1f8
	// Line 1473, Address: 0x1027b50, Func Offset: 0x200
	// Line 1474, Address: 0x1027b58, Func Offset: 0x208
	// Line 1475, Address: 0x1027b64, Func Offset: 0x214
	// Line 1476, Address: 0x1027b7c, Func Offset: 0x22c
	// Line 1478, Address: 0x1027b8c, Func Offset: 0x23c
	// Line 1480, Address: 0x1027b98, Func Offset: 0x248
	// Line 1481, Address: 0x1027ba0, Func Offset: 0x250
	// Line 1482, Address: 0x1027ba4, Func Offset: 0x254
	// Func End, Address: 0x1027bc4, Func Offset: 0x274
}

// 
// Start address: 0x1027bd0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1498, Address: 0x1027bd0, Func Offset: 0
	// Line 1503, Address: 0x1027bf8, Func Offset: 0x28
	// Line 1504, Address: 0x1027c5c, Func Offset: 0x8c
	// Line 1505, Address: 0x1027c64, Func Offset: 0x94
	// Line 1506, Address: 0x1027c6c, Func Offset: 0x9c
	// Line 1507, Address: 0x1027c8c, Func Offset: 0xbc
	// Line 1508, Address: 0x1027ca8, Func Offset: 0xd8
	// Line 1509, Address: 0x1027cb0, Func Offset: 0xe0
	// Line 1510, Address: 0x1027cd0, Func Offset: 0x100
	// Line 1512, Address: 0x1027cec, Func Offset: 0x11c
	// Line 1513, Address: 0x1027cf4, Func Offset: 0x124
	// Line 1514, Address: 0x1027cfc, Func Offset: 0x12c
	// Line 1515, Address: 0x1027d08, Func Offset: 0x138
	// Line 1516, Address: 0x1027d20, Func Offset: 0x150
	// Line 1517, Address: 0x1027d28, Func Offset: 0x158
	// Line 1519, Address: 0x1027d38, Func Offset: 0x168
	// Line 1521, Address: 0x1027d44, Func Offset: 0x174
	// Line 1522, Address: 0x1027d4c, Func Offset: 0x17c
	// Line 1523, Address: 0x1027d50, Func Offset: 0x180
	// Func End, Address: 0x1027d6c, Func Offset: 0x19c
}

// 
// Start address: 0x1027d70
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1537, Address: 0x1027d70, Func Offset: 0
	// Line 1544, Address: 0x1027d8c, Func Offset: 0x1c
	// Line 1545, Address: 0x1027d90, Func Offset: 0x20
	// Line 1546, Address: 0x1027d98, Func Offset: 0x28
	// Line 1547, Address: 0x1027dbc, Func Offset: 0x4c
	// Line 1548, Address: 0x1027dc8, Func Offset: 0x58
	// Line 1549, Address: 0x1027de0, Func Offset: 0x70
	// Line 1550, Address: 0x1027df4, Func Offset: 0x84
	// Line 1553, Address: 0x1027e0c, Func Offset: 0x9c
	// Func End, Address: 0x1027e24, Func Offset: 0xb4
}

// 
// Start address: 0x1027e30
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1565, Address: 0x1027e30, Func Offset: 0
	// Line 1566, Address: 0x1027e3c, Func Offset: 0xc
	// Line 1567, Address: 0x1027e68, Func Offset: 0x38
	// Line 1568, Address: 0x1027eb4, Func Offset: 0x84
	// Line 1569, Address: 0x1027ee0, Func Offset: 0xb0
	// Line 1573, Address: 0x1027f38, Func Offset: 0x108
	// Line 1574, Address: 0x1027f3c, Func Offset: 0x10c
	// Func End, Address: 0x1027f48, Func Offset: 0x118
}

// 
// Start address: 0x1027f50
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1589, Address: 0x1027f50, Func Offset: 0
	// Line 1590, Address: 0x1027f6c, Func Offset: 0x1c
	// Line 1591, Address: 0x1027f88, Func Offset: 0x38
	// Func End, Address: 0x1027f98, Func Offset: 0x48
}

// 
// Start address: 0x1027fa0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1594, Address: 0x1027fa0, Func Offset: 0
	// Line 1595, Address: 0x1027fbc, Func Offset: 0x1c
	// Line 1596, Address: 0x1027fc0, Func Offset: 0x20
	// Line 1597, Address: 0x1027fdc, Func Offset: 0x3c
	// Func End, Address: 0x1027fec, Func Offset: 0x4c
}

// 
// Start address: 0x1027ff0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1600, Address: 0x1027ff0, Func Offset: 0
	// Line 1601, Address: 0x1028004, Func Offset: 0x14
	// Line 1602, Address: 0x1028020, Func Offset: 0x30
	// Func End, Address: 0x1028030, Func Offset: 0x40
}

// 
// Start address: 0x1028030
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1605, Address: 0x1028030, Func Offset: 0
	// Line 1606, Address: 0x102804c, Func Offset: 0x1c
	// Line 1607, Address: 0x1028068, Func Offset: 0x38
	// Func End, Address: 0x1028078, Func Offset: 0x48
}

// 
// Start address: 0x1028080
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1610, Address: 0x1028080, Func Offset: 0
	// Line 1611, Address: 0x1028098, Func Offset: 0x18
	// Line 1612, Address: 0x10280a8, Func Offset: 0x28
	// Line 1613, Address: 0x10280b8, Func Offset: 0x38
	// Line 1614, Address: 0x10280c4, Func Offset: 0x44
	// Line 1616, Address: 0x10280d0, Func Offset: 0x50
	// Line 1617, Address: 0x10280fc, Func Offset: 0x7c
	// Line 1619, Address: 0x1028128, Func Offset: 0xa8
	// Func End, Address: 0x1028134, Func Offset: 0xb4
}

// 
// Start address: 0x1028140
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1633, Address: 0x1028140, Func Offset: 0
	// Line 1638, Address: 0x1028158, Func Offset: 0x18
	// Line 1639, Address: 0x1028164, Func Offset: 0x24
	// Line 1640, Address: 0x1028170, Func Offset: 0x30
	// Line 1641, Address: 0x1028178, Func Offset: 0x38
	// Line 1642, Address: 0x102817c, Func Offset: 0x3c
	// Line 1646, Address: 0x1028194, Func Offset: 0x54
	// Line 1647, Address: 0x102819c, Func Offset: 0x5c
	// Line 1648, Address: 0x10281a0, Func Offset: 0x60
	// Line 1649, Address: 0x10281b0, Func Offset: 0x70
	// Func End, Address: 0x10281d0, Func Offset: 0x90
}

// 
// Start address: 0x10281d0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1652, Address: 0x10281d0, Func Offset: 0
	// Line 1653, Address: 0x10281e8, Func Offset: 0x18
	// Line 1654, Address: 0x1028208, Func Offset: 0x38
	// Func End, Address: 0x1028218, Func Offset: 0x48
}

// 
// Start address: 0x1028220
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1657, Address: 0x1028220, Func Offset: 0
	// Line 1661, Address: 0x1028240, Func Offset: 0x20
	// Line 1662, Address: 0x102825c, Func Offset: 0x3c
	// Line 1663, Address: 0x1028284, Func Offset: 0x64
	// Line 1664, Address: 0x1028290, Func Offset: 0x70
	// Line 1665, Address: 0x10282b8, Func Offset: 0x98
	// Func End, Address: 0x10282c8, Func Offset: 0xa8
}

// 
// Start address: 0x10282d0
void mapwrt_z11c(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1668, Address: 0x10282d0, Func Offset: 0
	// Line 1671, Address: 0x10282ec, Func Offset: 0x1c
	// Line 1672, Address: 0x10282f4, Func Offset: 0x24
	// Line 1675, Address: 0x10282fc, Func Offset: 0x2c
	// Line 1676, Address: 0x1028320, Func Offset: 0x50
	// Line 1677, Address: 0x1028340, Func Offset: 0x70
	// Line 1678, Address: 0x1028348, Func Offset: 0x78
	// Line 1679, Address: 0x102836c, Func Offset: 0x9c
	// Func End, Address: 0x1028388, Func Offset: 0xb8
}

// 
// Start address: 0x1028390
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1695, Address: 0x1028390, Func Offset: 0
	// Line 1700, Address: 0x10283b8, Func Offset: 0x28
	// Line 1701, Address: 0x10283c8, Func Offset: 0x38
	// Line 1702, Address: 0x10283e4, Func Offset: 0x54
	// Line 1703, Address: 0x1028408, Func Offset: 0x78
	// Line 1704, Address: 0x1028430, Func Offset: 0xa0
	// Line 1705, Address: 0x102843c, Func Offset: 0xac
	// Line 1706, Address: 0x1028444, Func Offset: 0xb4
	// Line 1707, Address: 0x1028460, Func Offset: 0xd0
	// Line 1708, Address: 0x1028488, Func Offset: 0xf8
	// Line 1710, Address: 0x1028490, Func Offset: 0x100
	// Line 1711, Address: 0x1028494, Func Offset: 0x104
	// Line 1712, Address: 0x10284b0, Func Offset: 0x120
	// Line 1714, Address: 0x10284d8, Func Offset: 0x148
	// Func End, Address: 0x10284f4, Func Offset: 0x164
}

// 
// Start address: 0x1028500
void mapinit()
{
	// Line 1725, Address: 0x1028500, Func Offset: 0
	// Line 1727, Address: 0x1028508, Func Offset: 0x8
	// Line 1728, Address: 0x102851c, Func Offset: 0x1c
	// Line 1730, Address: 0x1028530, Func Offset: 0x30
	// Line 1731, Address: 0x1028548, Func Offset: 0x48
	// Line 1732, Address: 0x1028568, Func Offset: 0x68
	// Func End, Address: 0x1028578, Func Offset: 0x78
}

