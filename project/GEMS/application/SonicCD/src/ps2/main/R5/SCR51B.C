typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct tagPOINT;
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

typedef void(*type_25)(int, int);
typedef int(*type_28)(int, int, int, int, int);

typedef char type_0[10];
typedef _anon13 type_1[20];
typedef char type_2[4];
typedef _anon13 type_3[0];
typedef short type_4[9];
typedef unsigned char type_5[4];
typedef char type_6[3];
typedef _anon0* type_7[8];
typedef unsigned short type_8[4];
typedef unsigned short type_9[4][1024];
typedef char type_10[12];
typedef short type_11[6];
typedef unsigned char type_12[2];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef unsigned char type_15[22];
typedef short type_16[9];
typedef unsigned char type_17[64];
typedef unsigned char type_18[64][8];
typedef short type_19[256];
typedef char type_20[3];
typedef unsigned char* type_21[0];
typedef char type_22[4];
typedef short type_23[2];
typedef short type_24[2][1];
typedef unsigned char type_26[65];
typedef _anon2 type_27[128];
typedef _anon0* type_29[8];

union _anon0
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon0 xposi;
	_anon0 yposi;
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

struct tagPOINT
{
	int x;
	int y;
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

unsigned char z81awrttbl[65];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
unsigned char mapwrt_cnt;
_anon0 scra_v_posit;
_anon0 scra_h_posit;
unsigned char mapwkb[64][8];
void(*ChangeTileBmp)(int, int);
unsigned char enkeino;
_anon2 actwk[128];
_anon11 scrflaga;
unsigned char main_play;
short scr_dir_tbl[6];
short scra_hline;
short scra_vline;
unsigned char scra_v_count;
unsigned char scra_h_count;
short scra_h_keep;
short scralim_down;
short scralim_n_down;
short scralim_up;
short scralim_n_up;
short scralim_right;
short scralim_n_right;
short scralim_left;
short scralim_n_left;
short scrar_no;
_anon6 scr_timer;
_anon11 scr_die;
_anon11 zone_flag;
unsigned char scrh_flag;
unsigned char scrv_flag;
short playpositbl[2][1];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
unsigned char plflag;
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
_anon0 scrb_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
short hscrollwork[256];
_anon0* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon0 vscroll;
short scra_hz;
_anon6 scroll_start;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
short scra_vz;
unsigned char limmoveflag;
_anon11 scrflagaw;
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon11 scrflagbw;
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;
unsigned char* zonemaptbl[0];

void enkeichg();
_anon2* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z51bline0(short** ppHscw);
void z51bline1(short** ppHscw);
void z51bline2(short** ppHscw);
void z51bline3(short** ppHscw);
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk);
void scrollb_v(short yPos);
void scrollb_h(int xoffs, int flgbit);
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
void mapwrtb();
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase);
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6);
void mapwrt_z81a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();
void divdevset();
void enecginit();
void mapset2(unsigned char* pMapDst, int idx);

// 
// Start address: 0x1023b60
void enkeichg()
{
	short tbl[9];
	char tbl0[3];
	int EnkeiNo;
	int i;
	int BmpNo;
	int TileNo;
	short* pTbl;
	short poswk;
	// Line 154, Address: 0x1023b60, Func Offset: 0
	// Line 155, Address: 0x1023b80, Func Offset: 0x20
	// Line 160, Address: 0x1023bac, Func Offset: 0x4c
	// Line 166, Address: 0x1023bd0, Func Offset: 0x70
	// Line 170, Address: 0x1023be0, Func Offset: 0x80
	// Line 171, Address: 0x1023be4, Func Offset: 0x84
	// Line 173, Address: 0x1023be8, Func Offset: 0x88
	// Line 174, Address: 0x1023bf0, Func Offset: 0x90
	// Line 177, Address: 0x1023c14, Func Offset: 0xb4
	// Line 178, Address: 0x1023c18, Func Offset: 0xb8
	// Line 181, Address: 0x1023c3c, Func Offset: 0xdc
	// Line 186, Address: 0x1023c50, Func Offset: 0xf0
	// Line 189, Address: 0x1023c5c, Func Offset: 0xfc
	// Line 190, Address: 0x1023c60, Func Offset: 0x100
	// Line 191, Address: 0x1023c6c, Func Offset: 0x10c
	// Line 192, Address: 0x1023c70, Func Offset: 0x110
	// Line 193, Address: 0x1023c74, Func Offset: 0x114
	// Line 194, Address: 0x1023c7c, Func Offset: 0x11c
	// Line 195, Address: 0x1023c80, Func Offset: 0x120
	// Line 197, Address: 0x1023c84, Func Offset: 0x124
	// Line 198, Address: 0x1023c8c, Func Offset: 0x12c
	// Line 199, Address: 0x1023cac, Func Offset: 0x14c
	// Line 201, Address: 0x1023cb8, Func Offset: 0x158
	// Line 202, Address: 0x1023cd8, Func Offset: 0x178
	// Line 204, Address: 0x1023cf8, Func Offset: 0x198
	// Line 205, Address: 0x1023d30, Func Offset: 0x1d0
	// Line 206, Address: 0x1023d48, Func Offset: 0x1e8
	// Line 207, Address: 0x1023d54, Func Offset: 0x1f4
	// Func End, Address: 0x1023d7c, Func Offset: 0x21c
}

// 
// Start address: 0x1023d80
_anon2* main_chk()
{
	// Line 221, Address: 0x1023d80, Func Offset: 0
	// Line 222, Address: 0x1023d94, Func Offset: 0x14
	// Line 224, Address: 0x1023da4, Func Offset: 0x24
	// Line 226, Address: 0x1023dac, Func Offset: 0x2c
	// Func End, Address: 0x1023db4, Func Offset: 0x34
}

// 
// Start address: 0x1023dc0
void scr_set()
{
	short* pScrTbl;
	// Line 264, Address: 0x1023dc0, Func Offset: 0
	// Line 267, Address: 0x1023dcc, Func Offset: 0xc
	// Line 268, Address: 0x1023de0, Func Offset: 0x20
	// Line 269, Address: 0x1023df4, Func Offset: 0x34
	// Line 271, Address: 0x1023dfc, Func Offset: 0x3c
	// Line 272, Address: 0x1023e04, Func Offset: 0x44
	// Line 273, Address: 0x1023e10, Func Offset: 0x50
	// Line 274, Address: 0x1023e14, Func Offset: 0x54
	// Line 275, Address: 0x1023e28, Func Offset: 0x68
	// Line 276, Address: 0x1023e2c, Func Offset: 0x6c
	// Line 277, Address: 0x1023e40, Func Offset: 0x80
	// Line 278, Address: 0x1023e44, Func Offset: 0x84
	// Line 279, Address: 0x1023e58, Func Offset: 0x98
	// Line 280, Address: 0x1023e5c, Func Offset: 0x9c
	// Line 281, Address: 0x1023e70, Func Offset: 0xb0
	// Line 282, Address: 0x1023e90, Func Offset: 0xd0
	// Line 283, Address: 0x1023e94, Func Offset: 0xd4
	// Line 284, Address: 0x1023ea0, Func Offset: 0xe0
	// Line 286, Address: 0x1023eac, Func Offset: 0xec
	// Line 287, Address: 0x1023eb8, Func Offset: 0xf8
	// Line 289, Address: 0x1023ec4, Func Offset: 0x104
	// Line 290, Address: 0x1023ecc, Func Offset: 0x10c
	// Func End, Address: 0x1023ee0, Func Offset: 0x120
}

// 
// Start address: 0x1023ee0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 329, Address: 0x1023ee0, Func Offset: 0
	// Line 332, Address: 0x1023ef4, Func Offset: 0x14
	// Line 333, Address: 0x1023f04, Func Offset: 0x24
	// Line 334, Address: 0x1023f0c, Func Offset: 0x2c
	// Line 336, Address: 0x1023f1c, Func Offset: 0x3c
	// Line 337, Address: 0x1023f34, Func Offset: 0x54
	// Line 338, Address: 0x1023f44, Func Offset: 0x64
	// Line 339, Address: 0x1023f4c, Func Offset: 0x6c
	// Line 341, Address: 0x1023f50, Func Offset: 0x70
	// Line 343, Address: 0x1023f58, Func Offset: 0x78
	// Line 346, Address: 0x1023f60, Func Offset: 0x80
	// Line 347, Address: 0x1023f74, Func Offset: 0x94
	// Line 351, Address: 0x1023f88, Func Offset: 0xa8
	// Line 352, Address: 0x1023f9c, Func Offset: 0xbc
	// Line 353, Address: 0x1023fa8, Func Offset: 0xc8
	// Line 354, Address: 0x1023fb0, Func Offset: 0xd0
	// Line 358, Address: 0x1023fb4, Func Offset: 0xd4
	// Line 359, Address: 0x1023fd8, Func Offset: 0xf8
	// Line 363, Address: 0x1023fe8, Func Offset: 0x108
	// Line 365, Address: 0x1023ff0, Func Offset: 0x110
	// Line 366, Address: 0x1024004, Func Offset: 0x124
	// Line 367, Address: 0x1024010, Func Offset: 0x130
	// Line 368, Address: 0x1024018, Func Offset: 0x138
	// Line 372, Address: 0x102401c, Func Offset: 0x13c
	// Line 373, Address: 0x1024040, Func Offset: 0x160
	// Line 377, Address: 0x1024050, Func Offset: 0x170
	// Line 379, Address: 0x1024058, Func Offset: 0x178
	// Line 382, Address: 0x1024068, Func Offset: 0x188
	// Line 383, Address: 0x1024078, Func Offset: 0x198
	// Line 384, Address: 0x1024088, Func Offset: 0x1a8
	// Line 385, Address: 0x1024098, Func Offset: 0x1b8
	// Line 386, Address: 0x10240a8, Func Offset: 0x1c8
	// Func End, Address: 0x10240c4, Func Offset: 0x1e4
}

// 
// Start address: 0x10240d0
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 407, Address: 0x10240d0, Func Offset: 0
	// Line 410, Address: 0x10240dc, Func Offset: 0xc
	// Line 411, Address: 0x10240e4, Func Offset: 0x14
	// Line 413, Address: 0x10240e8, Func Offset: 0x18
	// Line 414, Address: 0x10240f4, Func Offset: 0x24
	// Line 416, Address: 0x1024108, Func Offset: 0x38
	// Line 417, Address: 0x1024114, Func Offset: 0x44
	// Line 418, Address: 0x1024120, Func Offset: 0x50
	// Line 420, Address: 0x102412c, Func Offset: 0x5c
	// Line 421, Address: 0x1024148, Func Offset: 0x78
	// Line 423, Address: 0x1024178, Func Offset: 0xa8
	// Line 424, Address: 0x1024194, Func Offset: 0xc4
	// Line 426, Address: 0x10241a0, Func Offset: 0xd0
	// Line 427, Address: 0x10241ac, Func Offset: 0xdc
	// Line 428, Address: 0x10241d0, Func Offset: 0x100
	// Func End, Address: 0x10241dc, Func Offset: 0x10c
}

// 
// Start address: 0x10241e0
void scroll()
{
	_anon0 ldwk;
	_anon0* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 444, Address: 0x10241e0, Func Offset: 0
	// Line 456, Address: 0x10241fc, Func Offset: 0x1c
	// Line 461, Address: 0x102420c, Func Offset: 0x2c
	// Line 463, Address: 0x1024238, Func Offset: 0x58
	// Line 465, Address: 0x1024240, Func Offset: 0x60
	// Line 466, Address: 0x1024248, Func Offset: 0x68
	// Line 468, Address: 0x1024250, Func Offset: 0x70
	// Line 469, Address: 0x1024260, Func Offset: 0x80
	// Line 472, Address: 0x1024270, Func Offset: 0x90
	// Line 473, Address: 0x102428c, Func Offset: 0xac
	// Line 475, Address: 0x102429c, Func Offset: 0xbc
	// Line 476, Address: 0x10242b0, Func Offset: 0xd0
	// Line 478, Address: 0x10242c0, Func Offset: 0xe0
	// Line 479, Address: 0x10242d4, Func Offset: 0xf4
	// Line 480, Address: 0x10242dc, Func Offset: 0xfc
	// Line 482, Address: 0x10242ec, Func Offset: 0x10c
	// Line 483, Address: 0x10242f8, Func Offset: 0x118
	// Line 484, Address: 0x1024300, Func Offset: 0x120
	// Line 487, Address: 0x1024318, Func Offset: 0x138
	// Line 489, Address: 0x1024328, Func Offset: 0x148
	// Line 490, Address: 0x1024350, Func Offset: 0x170
	// Line 491, Address: 0x1024388, Func Offset: 0x1a8
	// Line 493, Address: 0x102439c, Func Offset: 0x1bc
	// Line 495, Address: 0x10243a8, Func Offset: 0x1c8
	// Line 497, Address: 0x10243c0, Func Offset: 0x1e0
	// Line 498, Address: 0x10243cc, Func Offset: 0x1ec
	// Line 499, Address: 0x10243d8, Func Offset: 0x1f8
	// Line 500, Address: 0x10243f8, Func Offset: 0x218
	// Line 502, Address: 0x1024404, Func Offset: 0x224
	// Line 503, Address: 0x1024418, Func Offset: 0x238
	// Line 504, Address: 0x1024428, Func Offset: 0x248
	// Line 506, Address: 0x1024430, Func Offset: 0x250
	// Line 507, Address: 0x102443c, Func Offset: 0x25c
	// Line 511, Address: 0x1024448, Func Offset: 0x268
	// Line 512, Address: 0x1024454, Func Offset: 0x274
	// Line 513, Address: 0x1024484, Func Offset: 0x2a4
	// Line 514, Address: 0x10244b4, Func Offset: 0x2d4
	// Line 515, Address: 0x10244d0, Func Offset: 0x2f0
	// Func End, Address: 0x10244f4, Func Offset: 0x314
}

// 
// Start address: 0x1024500
void z51bline0(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl0[4];
	// Line 529, Address: 0x1024500, Func Offset: 0
	// Line 534, Address: 0x1024518, Func Offset: 0x18
	// Line 538, Address: 0x1024544, Func Offset: 0x44
	// Line 539, Address: 0x1024568, Func Offset: 0x68
	// Line 540, Address: 0x1024574, Func Offset: 0x74
	// Line 542, Address: 0x1024578, Func Offset: 0x78
	// Line 543, Address: 0x102457c, Func Offset: 0x7c
	// Line 544, Address: 0x1024588, Func Offset: 0x88
	// Line 546, Address: 0x102459c, Func Offset: 0x9c
	// Line 548, Address: 0x10245a8, Func Offset: 0xa8
	// Line 550, Address: 0x10245c8, Func Offset: 0xc8
	// Line 552, Address: 0x10245e0, Func Offset: 0xe0
	// Line 553, Address: 0x10245f4, Func Offset: 0xf4
	// Line 554, Address: 0x1024600, Func Offset: 0x100
	// Line 556, Address: 0x102460c, Func Offset: 0x10c
	// Line 557, Address: 0x1024630, Func Offset: 0x130
	// Line 558, Address: 0x102463c, Func Offset: 0x13c
	// Line 559, Address: 0x1024660, Func Offset: 0x160
	// Line 560, Address: 0x102466c, Func Offset: 0x16c
	// Line 561, Address: 0x1024680, Func Offset: 0x180
	// Func End, Address: 0x102469c, Func Offset: 0x19c
}

// 
// Start address: 0x10246a0
void z51bline1(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl1[12];
	// Line 575, Address: 0x10246a0, Func Offset: 0
	// Line 580, Address: 0x10246b8, Func Offset: 0x18
	// Line 585, Address: 0x10246ec, Func Offset: 0x4c
	// Line 586, Address: 0x1024710, Func Offset: 0x70
	// Line 587, Address: 0x102472c, Func Offset: 0x8c
	// Line 589, Address: 0x1024730, Func Offset: 0x90
	// Line 590, Address: 0x1024734, Func Offset: 0x94
	// Line 592, Address: 0x1024740, Func Offset: 0xa0
	// Line 594, Address: 0x102474c, Func Offset: 0xac
	// Line 596, Address: 0x102476c, Func Offset: 0xcc
	// Line 598, Address: 0x1024784, Func Offset: 0xe4
	// Line 599, Address: 0x1024790, Func Offset: 0xf0
	// Line 600, Address: 0x10247a4, Func Offset: 0x104
	// Line 602, Address: 0x10247b0, Func Offset: 0x110
	// Line 603, Address: 0x10247d4, Func Offset: 0x134
	// Line 604, Address: 0x10247e0, Func Offset: 0x140
	// Line 605, Address: 0x1024804, Func Offset: 0x164
	// Line 606, Address: 0x1024810, Func Offset: 0x170
	// Func End, Address: 0x102482c, Func Offset: 0x18c
}

// 
// Start address: 0x1024830
void z51bline2(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl2[4];
	// Line 620, Address: 0x1024830, Func Offset: 0
	// Line 625, Address: 0x1024848, Func Offset: 0x18
	// Line 629, Address: 0x1024874, Func Offset: 0x44
	// Line 630, Address: 0x1024898, Func Offset: 0x68
	// Line 631, Address: 0x10248a4, Func Offset: 0x74
	// Line 633, Address: 0x10248a8, Func Offset: 0x78
	// Line 634, Address: 0x10248ac, Func Offset: 0x7c
	// Line 635, Address: 0x10248b8, Func Offset: 0x88
	// Line 637, Address: 0x10248cc, Func Offset: 0x9c
	// Line 639, Address: 0x10248d8, Func Offset: 0xa8
	// Line 641, Address: 0x10248f8, Func Offset: 0xc8
	// Line 643, Address: 0x1024910, Func Offset: 0xe0
	// Line 644, Address: 0x1024924, Func Offset: 0xf4
	// Line 645, Address: 0x1024930, Func Offset: 0x100
	// Line 647, Address: 0x102493c, Func Offset: 0x10c
	// Line 648, Address: 0x1024960, Func Offset: 0x130
	// Line 649, Address: 0x102496c, Func Offset: 0x13c
	// Line 650, Address: 0x1024990, Func Offset: 0x160
	// Line 651, Address: 0x102499c, Func Offset: 0x16c
	// Line 652, Address: 0x10249b0, Func Offset: 0x180
	// Func End, Address: 0x10249cc, Func Offset: 0x19c
}

// 
// Start address: 0x10249d0
void z51bline3(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl3[10];
	// Line 666, Address: 0x10249d0, Func Offset: 0
	// Line 671, Address: 0x10249e8, Func Offset: 0x18
	// Line 676, Address: 0x1024a1c, Func Offset: 0x4c
	// Line 677, Address: 0x1024a40, Func Offset: 0x70
	// Line 678, Address: 0x1024a5c, Func Offset: 0x8c
	// Line 680, Address: 0x1024a60, Func Offset: 0x90
	// Line 681, Address: 0x1024a64, Func Offset: 0x94
	// Line 683, Address: 0x1024a70, Func Offset: 0xa0
	// Line 685, Address: 0x1024a7c, Func Offset: 0xac
	// Line 687, Address: 0x1024a9c, Func Offset: 0xcc
	// Line 689, Address: 0x1024ab4, Func Offset: 0xe4
	// Line 690, Address: 0x1024ac0, Func Offset: 0xf0
	// Line 691, Address: 0x1024ad4, Func Offset: 0x104
	// Line 693, Address: 0x1024ae0, Func Offset: 0x110
	// Line 694, Address: 0x1024b04, Func Offset: 0x134
	// Line 695, Address: 0x1024b10, Func Offset: 0x140
	// Line 696, Address: 0x1024b34, Func Offset: 0x164
	// Line 697, Address: 0x1024b40, Func Offset: 0x170
	// Func End, Address: 0x1024b5c, Func Offset: 0x18c
}

// 
// Start address: 0x1024b60
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 718, Address: 0x1024b60, Func Offset: 0
	// Line 722, Address: 0x1024b7c, Func Offset: 0x1c
	// Line 723, Address: 0x1024b80, Func Offset: 0x20
	// Line 725, Address: 0x1024ba0, Func Offset: 0x40
	// Line 726, Address: 0x1024bbc, Func Offset: 0x5c
	// Line 727, Address: 0x1024bc8, Func Offset: 0x68
	// Line 729, Address: 0x1024bd4, Func Offset: 0x74
	// Line 730, Address: 0x1024bdc, Func Offset: 0x7c
	// Line 731, Address: 0x1024bec, Func Offset: 0x8c
	// Line 732, Address: 0x1024c10, Func Offset: 0xb0
	// Line 733, Address: 0x1024c30, Func Offset: 0xd0
	// Func End, Address: 0x1024c44, Func Offset: 0xe4
}

// 
// Start address: 0x1024c50
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 839, Address: 0x1024c50, Func Offset: 0
	// Line 842, Address: 0x1024c60, Func Offset: 0x10
	// Line 843, Address: 0x1024c70, Func Offset: 0x20
	// Line 844, Address: 0x1024c7c, Func Offset: 0x2c
	// Line 846, Address: 0x1024cb4, Func Offset: 0x64
	// Line 847, Address: 0x1024cbc, Func Offset: 0x6c
	// Line 848, Address: 0x1024cd0, Func Offset: 0x80
	// Line 849, Address: 0x1024cf0, Func Offset: 0xa0
	// Line 850, Address: 0x1024d04, Func Offset: 0xb4
	// Line 852, Address: 0x1024d0c, Func Offset: 0xbc
	// Line 857, Address: 0x1024d20, Func Offset: 0xd0
	// Func End, Address: 0x1024d34, Func Offset: 0xe4
}

// 
// Start address: 0x1024d40
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 875, Address: 0x1024d40, Func Offset: 0
	// Line 879, Address: 0x1024d54, Func Offset: 0x14
	// Line 880, Address: 0x1024d5c, Func Offset: 0x1c
	// Line 881, Address: 0x1024d64, Func Offset: 0x24
	// Line 882, Address: 0x1024d6c, Func Offset: 0x2c
	// Line 883, Address: 0x1024d70, Func Offset: 0x30
	// Line 884, Address: 0x1024d94, Func Offset: 0x54
	// Line 885, Address: 0x1024da0, Func Offset: 0x60
	// Line 887, Address: 0x1024dbc, Func Offset: 0x7c
	// Line 888, Address: 0x1024dc8, Func Offset: 0x88
	// Line 889, Address: 0x1024ddc, Func Offset: 0x9c
	// Line 890, Address: 0x1024de8, Func Offset: 0xa8
	// Line 891, Address: 0x1024e0c, Func Offset: 0xcc
	// Line 893, Address: 0x1024e14, Func Offset: 0xd4
	// Line 898, Address: 0x1024e3c, Func Offset: 0xfc
	// Func End, Address: 0x1024e50, Func Offset: 0x110
}

// 
// Start address: 0x1024e50
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 916, Address: 0x1024e50, Func Offset: 0
	// Line 920, Address: 0x1024e64, Func Offset: 0x14
	// Line 921, Address: 0x1024e6c, Func Offset: 0x1c
	// Line 922, Address: 0x1024e74, Func Offset: 0x24
	// Line 923, Address: 0x1024e7c, Func Offset: 0x2c
	// Line 924, Address: 0x1024e80, Func Offset: 0x30
	// Line 925, Address: 0x1024ea4, Func Offset: 0x54
	// Line 926, Address: 0x1024eb0, Func Offset: 0x60
	// Line 928, Address: 0x1024ecc, Func Offset: 0x7c
	// Line 929, Address: 0x1024ed8, Func Offset: 0x88
	// Line 930, Address: 0x1024eec, Func Offset: 0x9c
	// Line 931, Address: 0x1024ef8, Func Offset: 0xa8
	// Line 932, Address: 0x1024f1c, Func Offset: 0xcc
	// Line 934, Address: 0x1024f24, Func Offset: 0xd4
	// Line 939, Address: 0x1024f4c, Func Offset: 0xfc
	// Func End, Address: 0x1024f60, Func Offset: 0x110
}

// 
// Start address: 0x1024f60
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 957, Address: 0x1024f60, Func Offset: 0
	// Line 961, Address: 0x1024f74, Func Offset: 0x14
	// Line 962, Address: 0x1024f7c, Func Offset: 0x1c
	// Line 963, Address: 0x1024f84, Func Offset: 0x24
	// Line 964, Address: 0x1024f8c, Func Offset: 0x2c
	// Line 965, Address: 0x1024f90, Func Offset: 0x30
	// Line 966, Address: 0x1024fb4, Func Offset: 0x54
	// Line 967, Address: 0x1024fc0, Func Offset: 0x60
	// Line 969, Address: 0x1024fdc, Func Offset: 0x7c
	// Line 970, Address: 0x1024fe8, Func Offset: 0x88
	// Line 971, Address: 0x1024ffc, Func Offset: 0x9c
	// Line 972, Address: 0x1025008, Func Offset: 0xa8
	// Line 973, Address: 0x102502c, Func Offset: 0xcc
	// Line 975, Address: 0x1025034, Func Offset: 0xd4
	// Line 980, Address: 0x102505c, Func Offset: 0xfc
	// Func End, Address: 0x1025070, Func Offset: 0x110
}

// 
// Start address: 0x1025070
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 995, Address: 0x1025070, Func Offset: 0
	// Line 999, Address: 0x1025080, Func Offset: 0x10
	// Line 1001, Address: 0x1025090, Func Offset: 0x20
	// Line 1002, Address: 0x1025098, Func Offset: 0x28
	// Line 1003, Address: 0x10250cc, Func Offset: 0x5c
	// Line 1004, Address: 0x10250d4, Func Offset: 0x64
	// Line 1005, Address: 0x10250e8, Func Offset: 0x78
	// Line 1006, Address: 0x102510c, Func Offset: 0x9c
	// Line 1007, Address: 0x1025120, Func Offset: 0xb0
	// Line 1008, Address: 0x1025128, Func Offset: 0xb8
	// Line 1013, Address: 0x102513c, Func Offset: 0xcc
	// Func End, Address: 0x1025154, Func Offset: 0xe4
}

// 
// Start address: 0x1025160
void scrh_move()
{
	short xwk;
	// Line 1030, Address: 0x1025160, Func Offset: 0
	// Line 1033, Address: 0x1025168, Func Offset: 0x8
	// Line 1034, Address: 0x10251b0, Func Offset: 0x50
	// Line 1036, Address: 0x10251c0, Func Offset: 0x60
	// Line 1037, Address: 0x10251c8, Func Offset: 0x68
	// Line 1038, Address: 0x10251d0, Func Offset: 0x70
	// Line 1040, Address: 0x10251e0, Func Offset: 0x80
	// Line 1041, Address: 0x10251f4, Func Offset: 0x94
	// Line 1045, Address: 0x1025200, Func Offset: 0xa0
	// Line 1046, Address: 0x1025214, Func Offset: 0xb4
	// Line 1047, Address: 0x1025238, Func Offset: 0xd8
	// Line 1049, Address: 0x1025248, Func Offset: 0xe8
	// Line 1051, Address: 0x1025250, Func Offset: 0xf0
	// Line 1052, Address: 0x1025264, Func Offset: 0x104
	// Line 1056, Address: 0x1025270, Func Offset: 0x110
	// Line 1057, Address: 0x1025284, Func Offset: 0x124
	// Line 1058, Address: 0x10252a8, Func Offset: 0x148
	// Line 1063, Address: 0x10252b8, Func Offset: 0x158
	// Line 1064, Address: 0x10252e8, Func Offset: 0x188
	// Line 1065, Address: 0x10252f0, Func Offset: 0x190
	// Func End, Address: 0x1025300, Func Offset: 0x1a0
}

// 
// Start address: 0x1025300
void scroll_v()
{
	short ywk;
	// Line 1080, Address: 0x1025300, Func Offset: 0
	// Line 1083, Address: 0x102530c, Func Offset: 0xc
	// Line 1084, Address: 0x1025340, Func Offset: 0x40
	// Line 1085, Address: 0x1025358, Func Offset: 0x58
	// Line 1089, Address: 0x1025364, Func Offset: 0x64
	// Line 1090, Address: 0x102537c, Func Offset: 0x7c
	// Line 1091, Address: 0x1025388, Func Offset: 0x88
	// Line 1092, Address: 0x10253ac, Func Offset: 0xac
	// Line 1093, Address: 0x10253c0, Func Offset: 0xc0
	// Line 1094, Address: 0x10253cc, Func Offset: 0xcc
	// Line 1095, Address: 0x10253d4, Func Offset: 0xd4
	// Line 1096, Address: 0x10253fc, Func Offset: 0xfc
	// Line 1097, Address: 0x1025424, Func Offset: 0x124
	// Line 1098, Address: 0x1025430, Func Offset: 0x130
	// Line 1100, Address: 0x1025438, Func Offset: 0x138
	// Line 1101, Address: 0x1025460, Func Offset: 0x160
	// Line 1102, Address: 0x1025470, Func Offset: 0x170
	// Line 1103, Address: 0x1025478, Func Offset: 0x178
	// Line 1108, Address: 0x1025480, Func Offset: 0x180
	// Line 1109, Address: 0x10254ac, Func Offset: 0x1ac
	// Line 1110, Address: 0x10254b8, Func Offset: 0x1b8
	// Line 1111, Address: 0x10254c0, Func Offset: 0x1c0
	// Line 1112, Address: 0x10254d0, Func Offset: 0x1d0
	// Line 1113, Address: 0x10254d8, Func Offset: 0x1d8
	// Line 1118, Address: 0x10254e0, Func Offset: 0x1e0
	// Line 1119, Address: 0x10254e8, Func Offset: 0x1e8
	// Func End, Address: 0x10254fc, Func Offset: 0x1fc
}

// 
// Start address: 0x1025500
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1133, Address: 0x1025500, Func Offset: 0
	// Line 1136, Address: 0x1025510, Func Offset: 0x10
	// Line 1137, Address: 0x102552c, Func Offset: 0x2c
	// Line 1138, Address: 0x1025544, Func Offset: 0x44
	// Line 1139, Address: 0x1025568, Func Offset: 0x68
	// Line 1140, Address: 0x1025570, Func Offset: 0x70
	// Line 1144, Address: 0x1025580, Func Offset: 0x80
	// Line 1145, Address: 0x1025594, Func Offset: 0x94
	// Line 1146, Address: 0x10255a0, Func Offset: 0xa0
	// Line 1149, Address: 0x10255a8, Func Offset: 0xa8
	// Line 1150, Address: 0x10255c0, Func Offset: 0xc0
	// Line 1151, Address: 0x10255cc, Func Offset: 0xcc
	// Line 1152, Address: 0x10255ec, Func Offset: 0xec
	// Line 1153, Address: 0x10255f8, Func Offset: 0xf8
	// Line 1154, Address: 0x1025600, Func Offset: 0x100
	// Line 1156, Address: 0x102560c, Func Offset: 0x10c
	// Line 1158, Address: 0x1025614, Func Offset: 0x114
	// Line 1159, Address: 0x102562c, Func Offset: 0x12c
	// Line 1160, Address: 0x1025638, Func Offset: 0x138
	// Line 1161, Address: 0x1025658, Func Offset: 0x158
	// Line 1162, Address: 0x1025664, Func Offset: 0x164
	// Line 1163, Address: 0x102566c, Func Offset: 0x16c
	// Line 1166, Address: 0x1025678, Func Offset: 0x178
	// Func End, Address: 0x102568c, Func Offset: 0x18c
}

// 
// Start address: 0x1025690
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1180, Address: 0x1025690, Func Offset: 0
	// Line 1183, Address: 0x10256a0, Func Offset: 0x10
	// Line 1185, Address: 0x10256ac, Func Offset: 0x1c
	// Line 1186, Address: 0x10256c4, Func Offset: 0x34
	// Line 1187, Address: 0x10256d0, Func Offset: 0x40
	// Line 1188, Address: 0x10256f0, Func Offset: 0x60
	// Line 1189, Address: 0x10256fc, Func Offset: 0x6c
	// Line 1190, Address: 0x1025704, Func Offset: 0x74
	// Line 1192, Address: 0x1025710, Func Offset: 0x80
	// Func End, Address: 0x1025724, Func Offset: 0x94
}

// 
// Start address: 0x1025730
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 1207, Address: 0x1025730, Func Offset: 0
	// Line 1210, Address: 0x102573c, Func Offset: 0xc
	// Line 1211, Address: 0x1025740, Func Offset: 0x10
	// Line 1212, Address: 0x102576c, Func Offset: 0x3c
	// Line 1213, Address: 0x1025780, Func Offset: 0x50
	// Line 1214, Address: 0x102578c, Func Offset: 0x5c
	// Line 1215, Address: 0x1025794, Func Offset: 0x64
	// Line 1217, Address: 0x10257a0, Func Offset: 0x70
	// Func End, Address: 0x10257b0, Func Offset: 0x80
}

// 
// Start address: 0x10257b0
void sv_move_sub2()
{
	// Line 1221, Address: 0x10257b0, Func Offset: 0
	// Line 1222, Address: 0x10257b8, Func Offset: 0x8
	// Line 1224, Address: 0x10257c0, Func Offset: 0x10
	// Line 1225, Address: 0x10257cc, Func Offset: 0x1c
	// Func End, Address: 0x10257dc, Func Offset: 0x2c
}

// 
// Start address: 0x10257e0
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	// Line 1239, Address: 0x10257e0, Func Offset: 0
	// Line 1242, Address: 0x10257ec, Func Offset: 0xc
	// Line 1243, Address: 0x1025810, Func Offset: 0x30
	// Line 1244, Address: 0x1025834, Func Offset: 0x54
	// Line 1245, Address: 0x1025840, Func Offset: 0x60
	// Func End, Address: 0x1025850, Func Offset: 0x70
}

// 
// Start address: 0x1025850
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1260, Address: 0x1025850, Func Offset: 0
	// Line 1261, Address: 0x102585c, Func Offset: 0xc
	// Line 1262, Address: 0x1025884, Func Offset: 0x34
	// Line 1264, Address: 0x102589c, Func Offset: 0x4c
	// Line 1265, Address: 0x10258a8, Func Offset: 0x58
	// Line 1266, Address: 0x10258b0, Func Offset: 0x60
	// Line 1267, Address: 0x10258bc, Func Offset: 0x6c
	// Line 1268, Address: 0x10258d0, Func Offset: 0x80
	// Line 1269, Address: 0x10258e4, Func Offset: 0x94
	// Line 1273, Address: 0x10258f8, Func Offset: 0xa8
	// Line 1274, Address: 0x1025904, Func Offset: 0xb4
	// Func End, Address: 0x1025914, Func Offset: 0xc4
}

// 
// Start address: 0x1025920
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	// Line 1288, Address: 0x1025920, Func Offset: 0
	// Line 1291, Address: 0x102592c, Func Offset: 0xc
	// Line 1292, Address: 0x102594c, Func Offset: 0x2c
	// Line 1293, Address: 0x1025970, Func Offset: 0x50
	// Line 1294, Address: 0x102597c, Func Offset: 0x5c
	// Func End, Address: 0x102598c, Func Offset: 0x6c
}

// 
// Start address: 0x1025990
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1309, Address: 0x1025990, Func Offset: 0
	// Line 1310, Address: 0x102599c, Func Offset: 0xc
	// Line 1311, Address: 0x10259c4, Func Offset: 0x34
	// Line 1313, Address: 0x10259dc, Func Offset: 0x4c
	// Line 1314, Address: 0x10259e8, Func Offset: 0x58
	// Line 1315, Address: 0x10259f0, Func Offset: 0x60
	// Line 1316, Address: 0x10259fc, Func Offset: 0x6c
	// Line 1317, Address: 0x1025a10, Func Offset: 0x80
	// Line 1318, Address: 0x1025a24, Func Offset: 0x94
	// Line 1322, Address: 0x1025a38, Func Offset: 0xa8
	// Line 1323, Address: 0x1025a44, Func Offset: 0xb4
	// Func End, Address: 0x1025a54, Func Offset: 0xc4
}

// 
// Start address: 0x1025a60
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1340, Address: 0x1025a60, Func Offset: 0
	// Line 1344, Address: 0x1025a70, Func Offset: 0x10
	// Line 1345, Address: 0x1025a80, Func Offset: 0x20
	// Line 1346, Address: 0x1025aa4, Func Offset: 0x44
	// Line 1347, Address: 0x1025ab8, Func Offset: 0x58
	// Line 1348, Address: 0x1025ad0, Func Offset: 0x70
	// Line 1350, Address: 0x1025adc, Func Offset: 0x7c
	// Line 1352, Address: 0x1025ae8, Func Offset: 0x88
	// Line 1353, Address: 0x1025b24, Func Offset: 0xc4
	// Line 1354, Address: 0x1025b2c, Func Offset: 0xcc
	// Line 1355, Address: 0x1025b40, Func Offset: 0xe0
	// Line 1356, Address: 0x1025b6c, Func Offset: 0x10c
	// Line 1357, Address: 0x1025b7c, Func Offset: 0x11c
	// Line 1358, Address: 0x1025b90, Func Offset: 0x130
	// Line 1359, Address: 0x1025b98, Func Offset: 0x138
	// Line 1364, Address: 0x1025bac, Func Offset: 0x14c
	// Func End, Address: 0x1025bc0, Func Offset: 0x160
}

// 
// Start address: 0x1025bc0
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
	// Line 1382, Address: 0x1025bc0, Func Offset: 0
	// Line 1391, Address: 0x1025be0, Func Offset: 0x20
	// Line 1392, Address: 0x1025be4, Func Offset: 0x24
	// Line 1393, Address: 0x1025bf0, Func Offset: 0x30
	// Line 1394, Address: 0x1025bfc, Func Offset: 0x3c
	// Line 1395, Address: 0x1025c04, Func Offset: 0x44
	// Line 1396, Address: 0x1025c0c, Func Offset: 0x4c
	// Line 1398, Address: 0x1025c20, Func Offset: 0x60
	// Line 1399, Address: 0x1025c24, Func Offset: 0x64
	// Line 1400, Address: 0x1025c30, Func Offset: 0x70
	// Line 1401, Address: 0x1025c3c, Func Offset: 0x7c
	// Line 1402, Address: 0x1025c44, Func Offset: 0x84
	// Line 1404, Address: 0x1025c4c, Func Offset: 0x8c
	// Line 1405, Address: 0x1025c58, Func Offset: 0x98
	// Line 1406, Address: 0x1025c6c, Func Offset: 0xac
	// Line 1408, Address: 0x1025c78, Func Offset: 0xb8
	// Line 1409, Address: 0x1025c80, Func Offset: 0xc0
	// Line 1411, Address: 0x1025c88, Func Offset: 0xc8
	// Line 1413, Address: 0x1025ca8, Func Offset: 0xe8
	// Line 1419, Address: 0x1025cd4, Func Offset: 0x114
	// Line 1420, Address: 0x1025ce8, Func Offset: 0x128
	// Line 1422, Address: 0x1025cf4, Func Offset: 0x134
	// Line 1423, Address: 0x1025cfc, Func Offset: 0x13c
	// Line 1424, Address: 0x1025d04, Func Offset: 0x144
	// Line 1426, Address: 0x1025d24, Func Offset: 0x164
	// Line 1432, Address: 0x1025d50, Func Offset: 0x190
	// Line 1433, Address: 0x1025d64, Func Offset: 0x1a4
	// Line 1435, Address: 0x1025d70, Func Offset: 0x1b0
	// Line 1436, Address: 0x1025d78, Func Offset: 0x1b8
	// Line 1437, Address: 0x1025d80, Func Offset: 0x1c0
	// Line 1439, Address: 0x1025da0, Func Offset: 0x1e0
	// Line 1445, Address: 0x1025dcc, Func Offset: 0x20c
	// Line 1446, Address: 0x1025de0, Func Offset: 0x220
	// Line 1448, Address: 0x1025dec, Func Offset: 0x22c
	// Line 1449, Address: 0x1025df4, Func Offset: 0x234
	// Line 1450, Address: 0x1025dfc, Func Offset: 0x23c
	// Line 1452, Address: 0x1025e1c, Func Offset: 0x25c
	// Line 1461, Address: 0x1025e48, Func Offset: 0x288
	// Func End, Address: 0x1025e70, Func Offset: 0x2b0
}

// 
// Start address: 0x1025e70
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
	// Line 1478, Address: 0x1025e70, Func Offset: 0
	// Line 1489, Address: 0x1025e9c, Func Offset: 0x2c
	// Line 1491, Address: 0x1025ea4, Func Offset: 0x34
	// Line 1492, Address: 0x1025ebc, Func Offset: 0x4c
	// Line 1493, Address: 0x1025ed0, Func Offset: 0x60
	// Line 1495, Address: 0x1025ed8, Func Offset: 0x68
	// Line 1497, Address: 0x1025eec, Func Offset: 0x7c
	// Line 1498, Address: 0x1025f04, Func Offset: 0x94
	// Line 1499, Address: 0x1025f18, Func Offset: 0xa8
	// Line 1500, Address: 0x1025f20, Func Offset: 0xb0
	// Line 1502, Address: 0x1025f28, Func Offset: 0xb8
	// Line 1503, Address: 0x1025f3c, Func Offset: 0xcc
	// Line 1508, Address: 0x1025f44, Func Offset: 0xd4
	// Line 1509, Address: 0x1025f94, Func Offset: 0x124
	// Line 1510, Address: 0x1025f9c, Func Offset: 0x12c
	// Line 1516, Address: 0x1025fbc, Func Offset: 0x14c
	// Line 1517, Address: 0x1025fdc, Func Offset: 0x16c
	// Line 1518, Address: 0x1026000, Func Offset: 0x190
	// Line 1519, Address: 0x102600c, Func Offset: 0x19c
	// Line 1520, Address: 0x1026014, Func Offset: 0x1a4
	// Line 1522, Address: 0x1026034, Func Offset: 0x1c4
	// Line 1526, Address: 0x1026060, Func Offset: 0x1f0
	// Line 1529, Address: 0x1026068, Func Offset: 0x1f8
	// Line 1530, Address: 0x102606c, Func Offset: 0x1fc
	// Line 1534, Address: 0x102608c, Func Offset: 0x21c
	// Line 1541, Address: 0x10260b8, Func Offset: 0x248
	// Line 1548, Address: 0x10260cc, Func Offset: 0x25c
	// Line 1549, Address: 0x10260d4, Func Offset: 0x264
	// Line 1550, Address: 0x10260dc, Func Offset: 0x26c
	// Line 1551, Address: 0x10260f4, Func Offset: 0x284
	// Line 1552, Address: 0x1026114, Func Offset: 0x2a4
	// Line 1556, Address: 0x102611c, Func Offset: 0x2ac
	// Line 1558, Address: 0x102614c, Func Offset: 0x2dc
	// Line 1559, Address: 0x1026158, Func Offset: 0x2e8
	// Line 1563, Address: 0x1026168, Func Offset: 0x2f8
	// Line 1564, Address: 0x1026174, Func Offset: 0x304
	// Line 1566, Address: 0x1026194, Func Offset: 0x324
	// Line 1567, Address: 0x10261cc, Func Offset: 0x35c
	// Line 1568, Address: 0x10261ec, Func Offset: 0x37c
	// Line 1570, Address: 0x1026210, Func Offset: 0x3a0
	// Line 1573, Address: 0x1026234, Func Offset: 0x3c4
	// Line 1575, Address: 0x1026254, Func Offset: 0x3e4
	// Line 1577, Address: 0x1026268, Func Offset: 0x3f8
	// Line 1578, Address: 0x1026274, Func Offset: 0x404
	// Line 1579, Address: 0x1026284, Func Offset: 0x414
	// Line 1581, Address: 0x102628c, Func Offset: 0x41c
	// Func End, Address: 0x10262b4, Func Offset: 0x444
}

// 
// Start address: 0x10262c0
void scrollwrtc()
{
	// Line 1587, Address: 0x10262c0, Func Offset: 0
	// Func End, Address: 0x10262c8, Func Offset: 0x8
}

// 
// Start address: 0x10262d0
void scrollwrtz()
{
	// Line 1592, Address: 0x10262d0, Func Offset: 0
	// Func End, Address: 0x10262d8, Func Offset: 0x8
}

// 
// Start address: 0x10262e0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1610, Address: 0x10262e0, Func Offset: 0
	// Line 1623, Address: 0x1026308, Func Offset: 0x28
	// Line 1626, Address: 0x1026328, Func Offset: 0x48
	// Line 1627, Address: 0x102633c, Func Offset: 0x5c
	// Line 1628, Address: 0x1026350, Func Offset: 0x70
	// Line 1629, Address: 0x1026364, Func Offset: 0x84
	// Line 1631, Address: 0x1026378, Func Offset: 0x98
	// Line 1632, Address: 0x1026384, Func Offset: 0xa4
	// Line 1633, Address: 0x1026398, Func Offset: 0xb8
	// Func End, Address: 0x10263a8, Func Offset: 0xc8
}

// 
// Start address: 0x10263b0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1637, Address: 0x10263b0, Func Offset: 0
	// Line 1641, Address: 0x10263d8, Func Offset: 0x28
	// Line 1644, Address: 0x10263f8, Func Offset: 0x48
	// Line 1645, Address: 0x102640c, Func Offset: 0x5c
	// Line 1646, Address: 0x1026420, Func Offset: 0x70
	// Line 1647, Address: 0x1026434, Func Offset: 0x84
	// Line 1649, Address: 0x1026448, Func Offset: 0x98
	// Line 1650, Address: 0x1026454, Func Offset: 0xa4
	// Line 1651, Address: 0x1026468, Func Offset: 0xb8
	// Func End, Address: 0x1026478, Func Offset: 0xc8
}

// 
// Start address: 0x1026480
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1671, Address: 0x1026480, Func Offset: 0
	// Line 1675, Address: 0x10264a8, Func Offset: 0x28
	// Line 1678, Address: 0x10264c8, Func Offset: 0x48
	// Line 1679, Address: 0x10264dc, Func Offset: 0x5c
	// Line 1680, Address: 0x10264ec, Func Offset: 0x6c
	// Line 1681, Address: 0x1026500, Func Offset: 0x80
	// Line 1683, Address: 0x1026510, Func Offset: 0x90
	// Line 1684, Address: 0x102651c, Func Offset: 0x9c
	// Line 1685, Address: 0x1026530, Func Offset: 0xb0
	// Func End, Address: 0x1026540, Func Offset: 0xc0
}

// 
// Start address: 0x1026540
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
	// Line 1704, Address: 0x1026540, Func Offset: 0
	// Line 1710, Address: 0x1026574, Func Offset: 0x34
	// Line 1712, Address: 0x1026584, Func Offset: 0x44
	// Line 1713, Address: 0x1026588, Func Offset: 0x48
	// Line 1714, Address: 0x1026590, Func Offset: 0x50
	// Line 1716, Address: 0x10265a0, Func Offset: 0x60
	// Line 1718, Address: 0x10265a4, Func Offset: 0x64
	// Line 1719, Address: 0x10265ac, Func Offset: 0x6c
	// Line 1722, Address: 0x10265b4, Func Offset: 0x74
	// Line 1723, Address: 0x10265bc, Func Offset: 0x7c
	// Line 1724, Address: 0x10265c8, Func Offset: 0x88
	// Line 1726, Address: 0x10265d4, Func Offset: 0x94
	// Line 1727, Address: 0x10265dc, Func Offset: 0x9c
	// Line 1728, Address: 0x10265e4, Func Offset: 0xa4
	// Line 1729, Address: 0x10265ec, Func Offset: 0xac
	// Line 1731, Address: 0x10265f8, Func Offset: 0xb8
	// Line 1732, Address: 0x1026600, Func Offset: 0xc0
	// Line 1733, Address: 0x1026608, Func Offset: 0xc8
	// Line 1734, Address: 0x1026610, Func Offset: 0xd0
	// Line 1736, Address: 0x102661c, Func Offset: 0xdc
	// Line 1737, Address: 0x1026624, Func Offset: 0xe4
	// Line 1738, Address: 0x102662c, Func Offset: 0xec
	// Line 1741, Address: 0x1026634, Func Offset: 0xf4
	// Line 1742, Address: 0x102663c, Func Offset: 0xfc
	// Line 1745, Address: 0x1026644, Func Offset: 0x104
	// Line 1746, Address: 0x1026688, Func Offset: 0x148
	// Line 1747, Address: 0x10266cc, Func Offset: 0x18c
	// Line 1748, Address: 0x1026710, Func Offset: 0x1d0
	// Line 1750, Address: 0x1026754, Func Offset: 0x214
	// Func End, Address: 0x1026784, Func Offset: 0x244
}

// 
// Start address: 0x1026790
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1768, Address: 0x1026790, Func Offset: 0
	// Line 1769, Address: 0x10267b0, Func Offset: 0x20
	// Line 1770, Address: 0x10267d0, Func Offset: 0x40
	// Func End, Address: 0x10267e0, Func Offset: 0x50
}

// 
// Start address: 0x10267e0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1772, Address: 0x10267e0, Func Offset: 0
	// Line 1773, Address: 0x1026800, Func Offset: 0x20
	// Line 1774, Address: 0x1026804, Func Offset: 0x24
	// Line 1775, Address: 0x1026824, Func Offset: 0x44
	// Func End, Address: 0x1026834, Func Offset: 0x54
}

// 
// Start address: 0x1026840
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1782, Address: 0x1026840, Func Offset: 0
	// Line 1788, Address: 0x1026870, Func Offset: 0x30
	// Line 1789, Address: 0x1026880, Func Offset: 0x40
	// Line 1795, Address: 0x1026890, Func Offset: 0x50
	// Line 1796, Address: 0x10268ac, Func Offset: 0x6c
	// Line 1797, Address: 0x10268b0, Func Offset: 0x70
	// Line 1798, Address: 0x10268cc, Func Offset: 0x8c
	// Line 1799, Address: 0x10268d0, Func Offset: 0x90
	// Line 1800, Address: 0x10268f0, Func Offset: 0xb0
	// Line 1801, Address: 0x10268f8, Func Offset: 0xb8
	// Line 1802, Address: 0x1026918, Func Offset: 0xd8
	// Line 1803, Address: 0x1026920, Func Offset: 0xe0
	// Line 1804, Address: 0x1026968, Func Offset: 0x128
	// Line 1806, Address: 0x1026974, Func Offset: 0x134
	// Line 1808, Address: 0x1026990, Func Offset: 0x150
	// Line 1813, Address: 0x1026998, Func Offset: 0x158
	// Line 1814, Address: 0x10269a4, Func Offset: 0x164
	// Line 1817, Address: 0x10269b0, Func Offset: 0x170
	// Line 1818, Address: 0x10269b8, Func Offset: 0x178
	// Line 1819, Address: 0x10269d8, Func Offset: 0x198
	// Line 1820, Address: 0x10269f4, Func Offset: 0x1b4
	// Line 1821, Address: 0x10269fc, Func Offset: 0x1bc
	// Line 1822, Address: 0x1026a1c, Func Offset: 0x1dc
	// Line 1824, Address: 0x1026a38, Func Offset: 0x1f8
	// Line 1825, Address: 0x1026a40, Func Offset: 0x200
	// Line 1826, Address: 0x1026a48, Func Offset: 0x208
	// Line 1827, Address: 0x1026a54, Func Offset: 0x214
	// Line 1828, Address: 0x1026a6c, Func Offset: 0x22c
	// Line 1830, Address: 0x1026a7c, Func Offset: 0x23c
	// Line 1833, Address: 0x1026a88, Func Offset: 0x248
	// Line 1834, Address: 0x1026a90, Func Offset: 0x250
	// Line 1835, Address: 0x1026a94, Func Offset: 0x254
	// Func End, Address: 0x1026ab4, Func Offset: 0x274
}

// 
// Start address: 0x1026ac0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1855, Address: 0x1026ac0, Func Offset: 0
	// Line 1863, Address: 0x1026ae8, Func Offset: 0x28
	// Line 1864, Address: 0x1026b4c, Func Offset: 0x8c
	// Line 1870, Address: 0x1026b54, Func Offset: 0x94
	// Line 1871, Address: 0x1026b5c, Func Offset: 0x9c
	// Line 1872, Address: 0x1026b7c, Func Offset: 0xbc
	// Line 1873, Address: 0x1026b98, Func Offset: 0xd8
	// Line 1874, Address: 0x1026ba0, Func Offset: 0xe0
	// Line 1875, Address: 0x1026bc0, Func Offset: 0x100
	// Line 1878, Address: 0x1026bdc, Func Offset: 0x11c
	// Line 1879, Address: 0x1026be4, Func Offset: 0x124
	// Line 1880, Address: 0x1026bec, Func Offset: 0x12c
	// Line 1881, Address: 0x1026bf8, Func Offset: 0x138
	// Line 1882, Address: 0x1026c10, Func Offset: 0x150
	// Line 1883, Address: 0x1026c18, Func Offset: 0x158
	// Line 1888, Address: 0x1026c28, Func Offset: 0x168
	// Line 1891, Address: 0x1026c34, Func Offset: 0x174
	// Line 1892, Address: 0x1026c3c, Func Offset: 0x17c
	// Line 1893, Address: 0x1026c40, Func Offset: 0x180
	// Func End, Address: 0x1026c5c, Func Offset: 0x19c
}

// 
// Start address: 0x1026c60
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1907, Address: 0x1026c60, Func Offset: 0
	// Line 1914, Address: 0x1026c7c, Func Offset: 0x1c
	// Line 1915, Address: 0x1026c80, Func Offset: 0x20
	// Line 1916, Address: 0x1026c88, Func Offset: 0x28
	// Line 1917, Address: 0x1026cac, Func Offset: 0x4c
	// Line 1918, Address: 0x1026cb8, Func Offset: 0x58
	// Line 1919, Address: 0x1026cd0, Func Offset: 0x70
	// Line 1920, Address: 0x1026ce4, Func Offset: 0x84
	// Line 1925, Address: 0x1026cfc, Func Offset: 0x9c
	// Func End, Address: 0x1026d14, Func Offset: 0xb4
}

// 
// Start address: 0x1026d20
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1939, Address: 0x1026d20, Func Offset: 0
	// Line 1940, Address: 0x1026d2c, Func Offset: 0xc
	// Line 1941, Address: 0x1026d58, Func Offset: 0x38
	// Line 1942, Address: 0x1026da4, Func Offset: 0x84
	// Line 1943, Address: 0x1026dd0, Func Offset: 0xb0
	// Line 1945, Address: 0x1026e1c, Func Offset: 0xfc
	// Line 1951, Address: 0x1026e28, Func Offset: 0x108
	// Line 1952, Address: 0x1026e2c, Func Offset: 0x10c
	// Func End, Address: 0x1026e38, Func Offset: 0x118
}

// 
// Start address: 0x1026e40
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1969, Address: 0x1026e40, Func Offset: 0
	// Line 1970, Address: 0x1026e5c, Func Offset: 0x1c
	// Line 1972, Address: 0x1026e78, Func Offset: 0x38
	// Func End, Address: 0x1026e88, Func Offset: 0x48
}

// 
// Start address: 0x1026e90
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1974, Address: 0x1026e90, Func Offset: 0
	// Line 1975, Address: 0x1026eac, Func Offset: 0x1c
	// Line 1976, Address: 0x1026eb0, Func Offset: 0x20
	// Line 1978, Address: 0x1026ecc, Func Offset: 0x3c
	// Func End, Address: 0x1026edc, Func Offset: 0x4c
}

// 
// Start address: 0x1026ee0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1980, Address: 0x1026ee0, Func Offset: 0
	// Line 1981, Address: 0x1026ef4, Func Offset: 0x14
	// Line 1983, Address: 0x1026f10, Func Offset: 0x30
	// Func End, Address: 0x1026f20, Func Offset: 0x40
}

// 
// Start address: 0x1026f20
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1985, Address: 0x1026f20, Func Offset: 0
	// Line 1986, Address: 0x1026f3c, Func Offset: 0x1c
	// Line 1988, Address: 0x1026f58, Func Offset: 0x38
	// Func End, Address: 0x1026f68, Func Offset: 0x48
}

// 
// Start address: 0x1026f70
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1990, Address: 0x1026f70, Func Offset: 0
	// Line 1991, Address: 0x1026f88, Func Offset: 0x18
	// Line 1992, Address: 0x1026f98, Func Offset: 0x28
	// Line 1993, Address: 0x1026fa8, Func Offset: 0x38
	// Line 1994, Address: 0x1026fb4, Func Offset: 0x44
	// Line 1996, Address: 0x1026fc0, Func Offset: 0x50
	// Line 1997, Address: 0x1026fec, Func Offset: 0x7c
	// Line 2000, Address: 0x1027018, Func Offset: 0xa8
	// Func End, Address: 0x1027024, Func Offset: 0xb4
}

// 
// Start address: 0x1027030
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2016, Address: 0x1027030, Func Offset: 0
	// Line 2021, Address: 0x1027048, Func Offset: 0x18
	// Line 2022, Address: 0x1027054, Func Offset: 0x24
	// Line 2023, Address: 0x1027060, Func Offset: 0x30
	// Line 2024, Address: 0x1027068, Func Offset: 0x38
	// Line 2025, Address: 0x102706c, Func Offset: 0x3c
	// Line 2026, Address: 0x1027084, Func Offset: 0x54
	// Line 2027, Address: 0x102708c, Func Offset: 0x5c
	// Func End, Address: 0x10270ac, Func Offset: 0x7c
}

// 
// Start address: 0x10270b0
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2030, Address: 0x10270b0, Func Offset: 0
	// Line 2035, Address: 0x10270c8, Func Offset: 0x18
	// Line 2036, Address: 0x10270d4, Func Offset: 0x24
	// Line 2037, Address: 0x10270e0, Func Offset: 0x30
	// Line 2038, Address: 0x10270e8, Func Offset: 0x38
	// Line 2039, Address: 0x10270ec, Func Offset: 0x3c
	// Line 2041, Address: 0x10270fc, Func Offset: 0x4c
	// Func End, Address: 0x102711c, Func Offset: 0x6c
}

// 
// Start address: 0x1027120
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 2044, Address: 0x1027120, Func Offset: 0
	// Line 2045, Address: 0x1027138, Func Offset: 0x18
	// Line 2046, Address: 0x1027158, Func Offset: 0x38
	// Func End, Address: 0x1027168, Func Offset: 0x48
}

// 
// Start address: 0x1027170
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 2051, Address: 0x1027170, Func Offset: 0
	// Line 2055, Address: 0x1027190, Func Offset: 0x20
	// Line 2058, Address: 0x10271ac, Func Offset: 0x3c
	// Line 2062, Address: 0x10271d4, Func Offset: 0x64
	// Line 2063, Address: 0x10271e0, Func Offset: 0x70
	// Line 2065, Address: 0x1027208, Func Offset: 0x98
	// Func End, Address: 0x1027218, Func Offset: 0xa8
}

// 
// Start address: 0x1027220
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 2071, Address: 0x1027220, Func Offset: 0
	// Line 2074, Address: 0x102723c, Func Offset: 0x1c
	// Line 2075, Address: 0x1027244, Func Offset: 0x24
	// Line 2078, Address: 0x102724c, Func Offset: 0x2c
	// Line 2080, Address: 0x1027270, Func Offset: 0x50
	// Line 2081, Address: 0x1027290, Func Offset: 0x70
	// Line 2082, Address: 0x1027298, Func Offset: 0x78
	// Line 2083, Address: 0x10272bc, Func Offset: 0x9c
	// Func End, Address: 0x10272d8, Func Offset: 0xb8
}

// 
// Start address: 0x10272e0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2109, Address: 0x10272e0, Func Offset: 0
	// Line 2114, Address: 0x1027308, Func Offset: 0x28
	// Line 2115, Address: 0x1027318, Func Offset: 0x38
	// Line 2117, Address: 0x1027334, Func Offset: 0x54
	// Line 2118, Address: 0x1027358, Func Offset: 0x78
	// Line 2119, Address: 0x1027380, Func Offset: 0xa0
	// Line 2120, Address: 0x102738c, Func Offset: 0xac
	// Line 2121, Address: 0x1027394, Func Offset: 0xb4
	// Line 2124, Address: 0x10273b0, Func Offset: 0xd0
	// Line 2128, Address: 0x10273d8, Func Offset: 0xf8
	// Line 2131, Address: 0x10273e0, Func Offset: 0x100
	// Line 2132, Address: 0x10273e4, Func Offset: 0x104
	// Line 2136, Address: 0x1027400, Func Offset: 0x120
	// Line 2143, Address: 0x1027428, Func Offset: 0x148
	// Func End, Address: 0x1027444, Func Offset: 0x164
}

// 
// Start address: 0x1027450
void mapinit()
{
	short tbl[9];
	char tbl0[3];
	int EnkeiNo;
	int TileNo;
	int BmpNo;
	int i;
	short* pTbl;
	short poswk;
	// Line 2154, Address: 0x1027450, Func Offset: 0
	// Line 2155, Address: 0x1027470, Func Offset: 0x20
	// Line 2160, Address: 0x102749c, Func Offset: 0x4c
	// Line 2166, Address: 0x10274c0, Func Offset: 0x70
	// Line 2167, Address: 0x10274c4, Func Offset: 0x74
	// Line 2169, Address: 0x10274c8, Func Offset: 0x78
	// Line 2170, Address: 0x10274d0, Func Offset: 0x80
	// Line 2173, Address: 0x10274f4, Func Offset: 0xa4
	// Line 2174, Address: 0x10274f8, Func Offset: 0xa8
	// Line 2177, Address: 0x102751c, Func Offset: 0xcc
	// Line 2178, Address: 0x1027520, Func Offset: 0xd0
	// Line 2179, Address: 0x1027528, Func Offset: 0xd8
	// Line 2180, Address: 0x102752c, Func Offset: 0xdc
	// Line 2182, Address: 0x1027530, Func Offset: 0xe0
	// Line 2183, Address: 0x1027538, Func Offset: 0xe8
	// Line 2184, Address: 0x1027558, Func Offset: 0x108
	// Line 2188, Address: 0x1027564, Func Offset: 0x114
	// Line 2189, Address: 0x1027578, Func Offset: 0x128
	// Line 2191, Address: 0x102758c, Func Offset: 0x13c
	// Line 2192, Address: 0x10275a4, Func Offset: 0x154
	// Line 2193, Address: 0x10275c4, Func Offset: 0x174
	// Func End, Address: 0x10275ec, Func Offset: 0x19c
}

// 
// Start address: 0x10275f0
void mapset()
{
	// Line 2198, Address: 0x10275f0, Func Offset: 0
	// Func End, Address: 0x10275f8, Func Offset: 0x8
}

// 
// Start address: 0x1027600
void divdevset()
{
	// Line 2202, Address: 0x1027600, Func Offset: 0
	// Func End, Address: 0x1027608, Func Offset: 0x8
}

// 
// Start address: 0x1027610
void enecginit()
{
	// Line 2206, Address: 0x1027610, Func Offset: 0
	// Func End, Address: 0x1027618, Func Offset: 0x8
}

// 
// Start address: 0x1027620
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2222, Address: 0x1027620, Func Offset: 0
	// Line 2226, Address: 0x1027640, Func Offset: 0x20
	// Line 2227, Address: 0x1027658, Func Offset: 0x38
	// Line 2228, Address: 0x1027668, Func Offset: 0x48
	// Line 2229, Address: 0x1027678, Func Offset: 0x58
	// Line 2230, Address: 0x1027680, Func Offset: 0x60
	// Line 2232, Address: 0x1027684, Func Offset: 0x64
	// Line 2233, Address: 0x1027690, Func Offset: 0x70
	// Line 2234, Address: 0x10276a8, Func Offset: 0x88
	// Line 2236, Address: 0x10276b4, Func Offset: 0x94
	// Line 2237, Address: 0x10276c0, Func Offset: 0xa0
	// Line 2238, Address: 0x10276cc, Func Offset: 0xac
	// Func End, Address: 0x10276ec, Func Offset: 0xcc
}

