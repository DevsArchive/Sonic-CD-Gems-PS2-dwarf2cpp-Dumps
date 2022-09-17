typedef struct _anon0;
typedef union _anon1;
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

typedef void(*type_19)(int, int);
typedef int(*type_21)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned char type_2[4];
typedef char type_3[3];
typedef _anon1* type_4[8];
typedef short type_5[6];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef char type_8[3];
typedef unsigned char type_9[2];
typedef unsigned char type_10[64];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef unsigned char* type_15[0];
typedef short type_16[256];
typedef short type_17[2];
typedef short type_18[2][1];
typedef unsigned char type_20[65];
typedef char type_22[6];
typedef _anon2 type_23[128];
typedef _anon1* type_24[8];
typedef short type_25[9];
typedef char type_26[3];
typedef short type_27[9];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
	};
};

union _anon1
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon0** patbase;
	_anon1 xposi;
	_anon1 yposi;
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
_anon1* vblockwrtbtbl[8];
_anon1* mapwrt_tbl[8];
unsigned char mapwrt_cnt;
_anon1 scra_v_posit;
_anon1 scra_h_posit;
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
_anon1 scrz_h_posit;
_anon1 scrc_h_posit;
_anon1 scrb_h_posit;
_anon1 scrz_v_posit;
_anon1 scrc_v_posit;
_anon1 scrb_v_posit;
short hscrollwork[256];
_anon1* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon1 vscroll;
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
_anon1 scra_v_posiw;
_anon1 scra_h_posiw;
_anon11 scrflagbw;
_anon1 scrb_v_posiw;
_anon1 scrb_h_posiw;
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
void z51dline(short** ppHscw);
void z51dline0(short** ppHscw);
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk);
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
void scrv_up_ch(_anon1 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon1 lSpd);
void scrv_move(_anon1 lSpd);
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
// Start address: 0x1023be0
void enkeichg()
{
	short tbl[9];
	char tbl0[3];
	int EnkeiNo;
	int TileNo;
	int BmpNo;
	int i;
	short* pTbl;
	short poswk;
	// Line 152, Address: 0x1023be0, Func Offset: 0
	// Line 153, Address: 0x1023c00, Func Offset: 0x20
	// Line 158, Address: 0x1023c2c, Func Offset: 0x4c
	// Line 164, Address: 0x1023c50, Func Offset: 0x70
	// Line 168, Address: 0x1023c60, Func Offset: 0x80
	// Line 169, Address: 0x1023c64, Func Offset: 0x84
	// Line 171, Address: 0x1023c68, Func Offset: 0x88
	// Line 172, Address: 0x1023c70, Func Offset: 0x90
	// Line 175, Address: 0x1023c94, Func Offset: 0xb4
	// Line 176, Address: 0x1023c98, Func Offset: 0xb8
	// Line 179, Address: 0x1023cbc, Func Offset: 0xdc
	// Line 184, Address: 0x1023cd0, Func Offset: 0xf0
	// Line 187, Address: 0x1023cdc, Func Offset: 0xfc
	// Line 188, Address: 0x1023ce0, Func Offset: 0x100
	// Line 189, Address: 0x1023cec, Func Offset: 0x10c
	// Line 190, Address: 0x1023cf0, Func Offset: 0x110
	// Line 191, Address: 0x1023cf4, Func Offset: 0x114
	// Line 192, Address: 0x1023cfc, Func Offset: 0x11c
	// Line 193, Address: 0x1023d00, Func Offset: 0x120
	// Line 195, Address: 0x1023d04, Func Offset: 0x124
	// Line 196, Address: 0x1023d0c, Func Offset: 0x12c
	// Line 197, Address: 0x1023d2c, Func Offset: 0x14c
	// Line 199, Address: 0x1023d38, Func Offset: 0x158
	// Line 200, Address: 0x1023d58, Func Offset: 0x178
	// Line 202, Address: 0x1023d78, Func Offset: 0x198
	// Line 203, Address: 0x1023db0, Func Offset: 0x1d0
	// Line 204, Address: 0x1023dc8, Func Offset: 0x1e8
	// Line 205, Address: 0x1023dd4, Func Offset: 0x1f4
	// Func End, Address: 0x1023dfc, Func Offset: 0x21c
}

// 
// Start address: 0x1023e00
_anon2* main_chk()
{
	// Line 219, Address: 0x1023e00, Func Offset: 0
	// Line 220, Address: 0x1023e14, Func Offset: 0x14
	// Line 222, Address: 0x1023e24, Func Offset: 0x24
	// Line 224, Address: 0x1023e2c, Func Offset: 0x2c
	// Func End, Address: 0x1023e34, Func Offset: 0x34
}

// 
// Start address: 0x1023e40
void scr_set()
{
	short* pScrTbl;
	// Line 262, Address: 0x1023e40, Func Offset: 0
	// Line 265, Address: 0x1023e4c, Func Offset: 0xc
	// Line 266, Address: 0x1023e60, Func Offset: 0x20
	// Line 267, Address: 0x1023e74, Func Offset: 0x34
	// Line 269, Address: 0x1023e7c, Func Offset: 0x3c
	// Line 270, Address: 0x1023e84, Func Offset: 0x44
	// Line 271, Address: 0x1023e90, Func Offset: 0x50
	// Line 272, Address: 0x1023e94, Func Offset: 0x54
	// Line 273, Address: 0x1023ea8, Func Offset: 0x68
	// Line 274, Address: 0x1023eac, Func Offset: 0x6c
	// Line 275, Address: 0x1023ec0, Func Offset: 0x80
	// Line 276, Address: 0x1023ec4, Func Offset: 0x84
	// Line 277, Address: 0x1023ed8, Func Offset: 0x98
	// Line 278, Address: 0x1023edc, Func Offset: 0x9c
	// Line 279, Address: 0x1023ef0, Func Offset: 0xb0
	// Line 280, Address: 0x1023f10, Func Offset: 0xd0
	// Line 281, Address: 0x1023f14, Func Offset: 0xd4
	// Line 282, Address: 0x1023f20, Func Offset: 0xe0
	// Line 284, Address: 0x1023f2c, Func Offset: 0xec
	// Line 285, Address: 0x1023f38, Func Offset: 0xf8
	// Line 287, Address: 0x1023f44, Func Offset: 0x104
	// Line 288, Address: 0x1023f4c, Func Offset: 0x10c
	// Func End, Address: 0x1023f60, Func Offset: 0x120
}

// 
// Start address: 0x1023f60
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 327, Address: 0x1023f60, Func Offset: 0
	// Line 330, Address: 0x1023f74, Func Offset: 0x14
	// Line 331, Address: 0x1023f84, Func Offset: 0x24
	// Line 332, Address: 0x1023f8c, Func Offset: 0x2c
	// Line 334, Address: 0x1023f9c, Func Offset: 0x3c
	// Line 335, Address: 0x1023fb4, Func Offset: 0x54
	// Line 336, Address: 0x1023fc4, Func Offset: 0x64
	// Line 337, Address: 0x1023fcc, Func Offset: 0x6c
	// Line 339, Address: 0x1023fd0, Func Offset: 0x70
	// Line 341, Address: 0x1023fd8, Func Offset: 0x78
	// Line 344, Address: 0x1023fe0, Func Offset: 0x80
	// Line 345, Address: 0x1023ff4, Func Offset: 0x94
	// Line 349, Address: 0x1024008, Func Offset: 0xa8
	// Line 350, Address: 0x102401c, Func Offset: 0xbc
	// Line 351, Address: 0x1024028, Func Offset: 0xc8
	// Line 352, Address: 0x1024030, Func Offset: 0xd0
	// Line 356, Address: 0x1024034, Func Offset: 0xd4
	// Line 357, Address: 0x1024058, Func Offset: 0xf8
	// Line 361, Address: 0x1024068, Func Offset: 0x108
	// Line 363, Address: 0x1024070, Func Offset: 0x110
	// Line 364, Address: 0x1024084, Func Offset: 0x124
	// Line 365, Address: 0x1024090, Func Offset: 0x130
	// Line 366, Address: 0x1024098, Func Offset: 0x138
	// Line 370, Address: 0x102409c, Func Offset: 0x13c
	// Line 371, Address: 0x10240c0, Func Offset: 0x160
	// Line 375, Address: 0x10240d0, Func Offset: 0x170
	// Line 377, Address: 0x10240d8, Func Offset: 0x178
	// Line 380, Address: 0x10240e8, Func Offset: 0x188
	// Line 381, Address: 0x10240f8, Func Offset: 0x198
	// Line 382, Address: 0x1024108, Func Offset: 0x1a8
	// Line 383, Address: 0x1024118, Func Offset: 0x1b8
	// Line 384, Address: 0x1024128, Func Offset: 0x1c8
	// Func End, Address: 0x1024144, Func Offset: 0x1e4
}

// 
// Start address: 0x1024150
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 405, Address: 0x1024150, Func Offset: 0
	// Line 408, Address: 0x102415c, Func Offset: 0xc
	// Line 409, Address: 0x1024164, Func Offset: 0x14
	// Line 411, Address: 0x1024168, Func Offset: 0x18
	// Line 412, Address: 0x1024174, Func Offset: 0x24
	// Line 414, Address: 0x1024190, Func Offset: 0x40
	// Line 415, Address: 0x102419c, Func Offset: 0x4c
	// Line 416, Address: 0x10241a8, Func Offset: 0x58
	// Line 418, Address: 0x10241b4, Func Offset: 0x64
	// Line 419, Address: 0x10241d0, Func Offset: 0x80
	// Line 421, Address: 0x10241dc, Func Offset: 0x8c
	// Line 422, Address: 0x10241f8, Func Offset: 0xa8
	// Line 424, Address: 0x1024204, Func Offset: 0xb4
	// Line 425, Address: 0x1024210, Func Offset: 0xc0
	// Line 426, Address: 0x102421c, Func Offset: 0xcc
	// Func End, Address: 0x1024228, Func Offset: 0xd8
}

// 
// Start address: 0x1024230
void scroll()
{
	_anon1 ldwk;
	_anon1* pHscrbuf;
	_anon1 ldwk2;
	_anon1 ldwk3;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	short sYline;
	short sYnumsv;
	// Line 442, Address: 0x1024230, Func Offset: 0
	// Line 454, Address: 0x1024254, Func Offset: 0x24
	// Line 459, Address: 0x1024264, Func Offset: 0x34
	// Line 461, Address: 0x1024290, Func Offset: 0x60
	// Line 463, Address: 0x1024298, Func Offset: 0x68
	// Line 464, Address: 0x10242a0, Func Offset: 0x70
	// Line 466, Address: 0x10242a8, Func Offset: 0x78
	// Line 467, Address: 0x10242b8, Func Offset: 0x88
	// Line 470, Address: 0x10242c8, Func Offset: 0x98
	// Line 471, Address: 0x10242dc, Func Offset: 0xac
	// Line 473, Address: 0x10242ec, Func Offset: 0xbc
	// Line 474, Address: 0x1024300, Func Offset: 0xd0
	// Line 476, Address: 0x1024310, Func Offset: 0xe0
	// Line 477, Address: 0x1024324, Func Offset: 0xf4
	// Line 479, Address: 0x1024334, Func Offset: 0x104
	// Line 480, Address: 0x1024348, Func Offset: 0x118
	// Line 483, Address: 0x1024358, Func Offset: 0x128
	// Line 485, Address: 0x1024368, Func Offset: 0x138
	// Line 486, Address: 0x1024390, Func Offset: 0x160
	// Line 487, Address: 0x10243c8, Func Offset: 0x198
	// Line 489, Address: 0x10243dc, Func Offset: 0x1ac
	// Line 490, Address: 0x10243e8, Func Offset: 0x1b8
	// Line 492, Address: 0x1024408, Func Offset: 0x1d8
	// Line 494, Address: 0x1024420, Func Offset: 0x1f0
	// Line 495, Address: 0x1024440, Func Offset: 0x210
	// Line 497, Address: 0x102444c, Func Offset: 0x21c
	// Line 498, Address: 0x1024460, Func Offset: 0x230
	// Line 499, Address: 0x1024470, Func Offset: 0x240
	// Line 500, Address: 0x102447c, Func Offset: 0x24c
	// Line 502, Address: 0x1024484, Func Offset: 0x254
	// Line 516, Address: 0x1024490, Func Offset: 0x260
	// Line 517, Address: 0x10244b0, Func Offset: 0x280
	// Line 518, Address: 0x10244bc, Func Offset: 0x28c
	// Line 519, Address: 0x10244d0, Func Offset: 0x2a0
	// Line 523, Address: 0x10244e0, Func Offset: 0x2b0
	// Line 524, Address: 0x10244ec, Func Offset: 0x2bc
	// Line 525, Address: 0x102451c, Func Offset: 0x2ec
	// Line 526, Address: 0x1024528, Func Offset: 0x2f8
	// Line 527, Address: 0x1024534, Func Offset: 0x304
	// Line 529, Address: 0x102454c, Func Offset: 0x31c
	// Line 531, Address: 0x1024558, Func Offset: 0x328
	// Line 532, Address: 0x1024564, Func Offset: 0x334
	// Line 533, Address: 0x1024594, Func Offset: 0x364
	// Line 534, Address: 0x10245b0, Func Offset: 0x380
	// Line 535, Address: 0x10245b8, Func Offset: 0x388
	// Line 536, Address: 0x10245d8, Func Offset: 0x3a8
	// Line 538, Address: 0x10245f8, Func Offset: 0x3c8
	// Line 539, Address: 0x102460c, Func Offset: 0x3dc
	// Line 543, Address: 0x1024618, Func Offset: 0x3e8
	// Line 544, Address: 0x1024624, Func Offset: 0x3f4
	// Line 545, Address: 0x1024654, Func Offset: 0x424
	// Line 551, Address: 0x1024670, Func Offset: 0x440
	// Line 552, Address: 0x1024688, Func Offset: 0x458
	// Line 553, Address: 0x1024694, Func Offset: 0x464
	// Line 554, Address: 0x10246a0, Func Offset: 0x470
	// Line 555, Address: 0x10246b0, Func Offset: 0x480
	// Line 556, Address: 0x10246e0, Func Offset: 0x4b0
	// Line 557, Address: 0x10246e4, Func Offset: 0x4b4
	// Line 559, Address: 0x10246ec, Func Offset: 0x4bc
	// Line 561, Address: 0x1024714, Func Offset: 0x4e4
	// Line 562, Address: 0x1024730, Func Offset: 0x500
	// Line 563, Address: 0x102473c, Func Offset: 0x50c
	// Line 564, Address: 0x1024748, Func Offset: 0x518
	// Line 565, Address: 0x102476c, Func Offset: 0x53c
	// Line 566, Address: 0x102477c, Func Offset: 0x54c
	// Line 567, Address: 0x10247a0, Func Offset: 0x570
	// Line 571, Address: 0x10247bc, Func Offset: 0x58c
	// Func End, Address: 0x10247e8, Func Offset: 0x5b8
}

// 
// Start address: 0x10247f0
void z51dline(short** ppHscw)
{
	int lHwk;
	_anon1 ldHposwk;
	int i;
	int j;
	short wk;
	char z51dscrtbl[3];
	// Line 585, Address: 0x10247f0, Func Offset: 0
	// Line 590, Address: 0x1024808, Func Offset: 0x18
	// Line 594, Address: 0x102482c, Func Offset: 0x3c
	// Line 595, Address: 0x1024850, Func Offset: 0x60
	// Line 596, Address: 0x102486c, Func Offset: 0x7c
	// Line 598, Address: 0x1024870, Func Offset: 0x80
	// Line 599, Address: 0x1024874, Func Offset: 0x84
	// Line 600, Address: 0x1024880, Func Offset: 0x90
	// Line 602, Address: 0x1024894, Func Offset: 0xa4
	// Line 604, Address: 0x10248a0, Func Offset: 0xb0
	// Line 606, Address: 0x10248c0, Func Offset: 0xd0
	// Line 608, Address: 0x10248d8, Func Offset: 0xe8
	// Line 609, Address: 0x10248ec, Func Offset: 0xfc
	// Line 610, Address: 0x10248f8, Func Offset: 0x108
	// Line 612, Address: 0x1024904, Func Offset: 0x114
	// Line 613, Address: 0x1024928, Func Offset: 0x138
	// Line 614, Address: 0x1024934, Func Offset: 0x144
	// Line 615, Address: 0x1024958, Func Offset: 0x168
	// Line 617, Address: 0x1024964, Func Offset: 0x174
	// Line 618, Address: 0x1024978, Func Offset: 0x188
	// Func End, Address: 0x1024994, Func Offset: 0x1a4
}

// 
// Start address: 0x10249a0
void z51dline0(short** ppHscw)
{
	int lHwk;
	_anon1 ldHposwk;
	int i;
	int j;
	short wk;
	char z51dscrtbl0[6];
	// Line 632, Address: 0x10249a0, Func Offset: 0
	// Line 637, Address: 0x10249b8, Func Offset: 0x18
	// Line 641, Address: 0x10249ec, Func Offset: 0x4c
	// Line 642, Address: 0x1024a10, Func Offset: 0x70
	// Line 643, Address: 0x1024a2c, Func Offset: 0x8c
	// Line 645, Address: 0x1024a30, Func Offset: 0x90
	// Line 646, Address: 0x1024a34, Func Offset: 0x94
	// Line 648, Address: 0x1024a40, Func Offset: 0xa0
	// Line 650, Address: 0x1024a4c, Func Offset: 0xac
	// Line 652, Address: 0x1024a6c, Func Offset: 0xcc
	// Line 654, Address: 0x1024a84, Func Offset: 0xe4
	// Line 655, Address: 0x1024a90, Func Offset: 0xf0
	// Line 656, Address: 0x1024aa4, Func Offset: 0x104
	// Line 658, Address: 0x1024ab0, Func Offset: 0x110
	// Line 659, Address: 0x1024ad4, Func Offset: 0x134
	// Line 660, Address: 0x1024ae0, Func Offset: 0x140
	// Line 661, Address: 0x1024b04, Func Offset: 0x164
	// Line 662, Address: 0x1024b10, Func Offset: 0x170
	// Func End, Address: 0x1024b2c, Func Offset: 0x18c
}

// 
// Start address: 0x1024b30
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 683, Address: 0x1024b30, Func Offset: 0
	// Line 687, Address: 0x1024b4c, Func Offset: 0x1c
	// Line 689, Address: 0x1024b50, Func Offset: 0x20
	// Line 690, Address: 0x1024b6c, Func Offset: 0x3c
	// Line 691, Address: 0x1024b78, Func Offset: 0x48
	// Line 693, Address: 0x1024b84, Func Offset: 0x54
	// Line 694, Address: 0x1024b8c, Func Offset: 0x5c
	// Line 695, Address: 0x1024b9c, Func Offset: 0x6c
	// Line 696, Address: 0x1024bc0, Func Offset: 0x90
	// Line 697, Address: 0x1024be0, Func Offset: 0xb0
	// Func End, Address: 0x1024bf4, Func Offset: 0xc4
}

// 
// Start address: 0x1024c00
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 803, Address: 0x1024c00, Func Offset: 0
	// Line 806, Address: 0x1024c10, Func Offset: 0x10
	// Line 807, Address: 0x1024c20, Func Offset: 0x20
	// Line 808, Address: 0x1024c2c, Func Offset: 0x2c
	// Line 810, Address: 0x1024c64, Func Offset: 0x64
	// Line 811, Address: 0x1024c6c, Func Offset: 0x6c
	// Line 812, Address: 0x1024c80, Func Offset: 0x80
	// Line 813, Address: 0x1024ca0, Func Offset: 0xa0
	// Line 814, Address: 0x1024cb4, Func Offset: 0xb4
	// Line 816, Address: 0x1024cbc, Func Offset: 0xbc
	// Line 821, Address: 0x1024cd0, Func Offset: 0xd0
	// Func End, Address: 0x1024ce4, Func Offset: 0xe4
}

// 
// Start address: 0x1024cf0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 839, Address: 0x1024cf0, Func Offset: 0
	// Line 843, Address: 0x1024d04, Func Offset: 0x14
	// Line 844, Address: 0x1024d0c, Func Offset: 0x1c
	// Line 845, Address: 0x1024d14, Func Offset: 0x24
	// Line 846, Address: 0x1024d1c, Func Offset: 0x2c
	// Line 847, Address: 0x1024d20, Func Offset: 0x30
	// Line 848, Address: 0x1024d44, Func Offset: 0x54
	// Line 849, Address: 0x1024d50, Func Offset: 0x60
	// Line 851, Address: 0x1024d6c, Func Offset: 0x7c
	// Line 852, Address: 0x1024d78, Func Offset: 0x88
	// Line 853, Address: 0x1024d8c, Func Offset: 0x9c
	// Line 854, Address: 0x1024d98, Func Offset: 0xa8
	// Line 855, Address: 0x1024dbc, Func Offset: 0xcc
	// Line 857, Address: 0x1024dc4, Func Offset: 0xd4
	// Line 862, Address: 0x1024dec, Func Offset: 0xfc
	// Func End, Address: 0x1024e00, Func Offset: 0x110
}

// 
// Start address: 0x1024e00
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 880, Address: 0x1024e00, Func Offset: 0
	// Line 884, Address: 0x1024e14, Func Offset: 0x14
	// Line 885, Address: 0x1024e1c, Func Offset: 0x1c
	// Line 886, Address: 0x1024e24, Func Offset: 0x24
	// Line 887, Address: 0x1024e2c, Func Offset: 0x2c
	// Line 888, Address: 0x1024e30, Func Offset: 0x30
	// Line 889, Address: 0x1024e54, Func Offset: 0x54
	// Line 890, Address: 0x1024e60, Func Offset: 0x60
	// Line 892, Address: 0x1024e7c, Func Offset: 0x7c
	// Line 893, Address: 0x1024e88, Func Offset: 0x88
	// Line 894, Address: 0x1024e9c, Func Offset: 0x9c
	// Line 895, Address: 0x1024ea8, Func Offset: 0xa8
	// Line 896, Address: 0x1024ecc, Func Offset: 0xcc
	// Line 898, Address: 0x1024ed4, Func Offset: 0xd4
	// Line 903, Address: 0x1024efc, Func Offset: 0xfc
	// Func End, Address: 0x1024f10, Func Offset: 0x110
}

// 
// Start address: 0x1024f10
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 921, Address: 0x1024f10, Func Offset: 0
	// Line 925, Address: 0x1024f24, Func Offset: 0x14
	// Line 926, Address: 0x1024f2c, Func Offset: 0x1c
	// Line 927, Address: 0x1024f34, Func Offset: 0x24
	// Line 928, Address: 0x1024f3c, Func Offset: 0x2c
	// Line 929, Address: 0x1024f40, Func Offset: 0x30
	// Line 930, Address: 0x1024f64, Func Offset: 0x54
	// Line 931, Address: 0x1024f70, Func Offset: 0x60
	// Line 933, Address: 0x1024f8c, Func Offset: 0x7c
	// Line 934, Address: 0x1024f98, Func Offset: 0x88
	// Line 935, Address: 0x1024fac, Func Offset: 0x9c
	// Line 936, Address: 0x1024fb8, Func Offset: 0xa8
	// Line 937, Address: 0x1024fdc, Func Offset: 0xcc
	// Line 939, Address: 0x1024fe4, Func Offset: 0xd4
	// Line 944, Address: 0x102500c, Func Offset: 0xfc
	// Func End, Address: 0x1025020, Func Offset: 0x110
}

// 
// Start address: 0x1025020
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 959, Address: 0x1025020, Func Offset: 0
	// Line 963, Address: 0x1025030, Func Offset: 0x10
	// Line 965, Address: 0x1025040, Func Offset: 0x20
	// Line 966, Address: 0x1025048, Func Offset: 0x28
	// Line 967, Address: 0x102507c, Func Offset: 0x5c
	// Line 968, Address: 0x1025084, Func Offset: 0x64
	// Line 969, Address: 0x1025098, Func Offset: 0x78
	// Line 970, Address: 0x10250bc, Func Offset: 0x9c
	// Line 971, Address: 0x10250d0, Func Offset: 0xb0
	// Line 972, Address: 0x10250d8, Func Offset: 0xb8
	// Line 977, Address: 0x10250ec, Func Offset: 0xcc
	// Func End, Address: 0x1025104, Func Offset: 0xe4
}

// 
// Start address: 0x1025110
void scrh_move()
{
	short xwk;
	// Line 994, Address: 0x1025110, Func Offset: 0
	// Line 997, Address: 0x1025118, Func Offset: 0x8
	// Line 998, Address: 0x1025160, Func Offset: 0x50
	// Line 1000, Address: 0x1025170, Func Offset: 0x60
	// Line 1001, Address: 0x1025178, Func Offset: 0x68
	// Line 1002, Address: 0x1025180, Func Offset: 0x70
	// Line 1004, Address: 0x1025190, Func Offset: 0x80
	// Line 1005, Address: 0x10251a4, Func Offset: 0x94
	// Line 1009, Address: 0x10251b0, Func Offset: 0xa0
	// Line 1010, Address: 0x10251c4, Func Offset: 0xb4
	// Line 1011, Address: 0x10251e8, Func Offset: 0xd8
	// Line 1013, Address: 0x10251f8, Func Offset: 0xe8
	// Line 1015, Address: 0x1025200, Func Offset: 0xf0
	// Line 1016, Address: 0x1025214, Func Offset: 0x104
	// Line 1020, Address: 0x1025220, Func Offset: 0x110
	// Line 1021, Address: 0x1025234, Func Offset: 0x124
	// Line 1022, Address: 0x1025258, Func Offset: 0x148
	// Line 1027, Address: 0x1025268, Func Offset: 0x158
	// Line 1028, Address: 0x1025298, Func Offset: 0x188
	// Line 1029, Address: 0x10252a0, Func Offset: 0x190
	// Func End, Address: 0x10252b0, Func Offset: 0x1a0
}

// 
// Start address: 0x10252b0
void scroll_v()
{
	short ywk;
	// Line 1044, Address: 0x10252b0, Func Offset: 0
	// Line 1047, Address: 0x10252bc, Func Offset: 0xc
	// Line 1048, Address: 0x10252f0, Func Offset: 0x40
	// Line 1049, Address: 0x1025308, Func Offset: 0x58
	// Line 1053, Address: 0x1025314, Func Offset: 0x64
	// Line 1054, Address: 0x102532c, Func Offset: 0x7c
	// Line 1055, Address: 0x1025338, Func Offset: 0x88
	// Line 1056, Address: 0x102535c, Func Offset: 0xac
	// Line 1057, Address: 0x1025370, Func Offset: 0xc0
	// Line 1058, Address: 0x102537c, Func Offset: 0xcc
	// Line 1059, Address: 0x1025384, Func Offset: 0xd4
	// Line 1060, Address: 0x10253ac, Func Offset: 0xfc
	// Line 1061, Address: 0x10253d4, Func Offset: 0x124
	// Line 1062, Address: 0x10253e0, Func Offset: 0x130
	// Line 1064, Address: 0x10253e8, Func Offset: 0x138
	// Line 1065, Address: 0x1025410, Func Offset: 0x160
	// Line 1066, Address: 0x1025420, Func Offset: 0x170
	// Line 1067, Address: 0x1025428, Func Offset: 0x178
	// Line 1072, Address: 0x1025430, Func Offset: 0x180
	// Line 1073, Address: 0x102545c, Func Offset: 0x1ac
	// Line 1074, Address: 0x1025468, Func Offset: 0x1b8
	// Line 1075, Address: 0x1025470, Func Offset: 0x1c0
	// Line 1076, Address: 0x1025480, Func Offset: 0x1d0
	// Line 1077, Address: 0x1025488, Func Offset: 0x1d8
	// Line 1082, Address: 0x1025490, Func Offset: 0x1e0
	// Line 1083, Address: 0x1025498, Func Offset: 0x1e8
	// Func End, Address: 0x10254ac, Func Offset: 0x1fc
}

// 
// Start address: 0x10254b0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1097, Address: 0x10254b0, Func Offset: 0
	// Line 1100, Address: 0x10254c0, Func Offset: 0x10
	// Line 1101, Address: 0x10254dc, Func Offset: 0x2c
	// Line 1102, Address: 0x10254f4, Func Offset: 0x44
	// Line 1103, Address: 0x1025518, Func Offset: 0x68
	// Line 1104, Address: 0x1025520, Func Offset: 0x70
	// Line 1108, Address: 0x1025530, Func Offset: 0x80
	// Line 1109, Address: 0x1025544, Func Offset: 0x94
	// Line 1110, Address: 0x1025550, Func Offset: 0xa0
	// Line 1113, Address: 0x1025558, Func Offset: 0xa8
	// Line 1114, Address: 0x1025570, Func Offset: 0xc0
	// Line 1115, Address: 0x102557c, Func Offset: 0xcc
	// Line 1116, Address: 0x102559c, Func Offset: 0xec
	// Line 1117, Address: 0x10255a8, Func Offset: 0xf8
	// Line 1118, Address: 0x10255b0, Func Offset: 0x100
	// Line 1120, Address: 0x10255bc, Func Offset: 0x10c
	// Line 1122, Address: 0x10255c4, Func Offset: 0x114
	// Line 1123, Address: 0x10255dc, Func Offset: 0x12c
	// Line 1124, Address: 0x10255e8, Func Offset: 0x138
	// Line 1125, Address: 0x1025608, Func Offset: 0x158
	// Line 1126, Address: 0x1025614, Func Offset: 0x164
	// Line 1127, Address: 0x102561c, Func Offset: 0x16c
	// Line 1130, Address: 0x1025628, Func Offset: 0x178
	// Func End, Address: 0x102563c, Func Offset: 0x18c
}

// 
// Start address: 0x1025640
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1144, Address: 0x1025640, Func Offset: 0
	// Line 1147, Address: 0x1025650, Func Offset: 0x10
	// Line 1149, Address: 0x102565c, Func Offset: 0x1c
	// Line 1150, Address: 0x1025674, Func Offset: 0x34
	// Line 1151, Address: 0x1025680, Func Offset: 0x40
	// Line 1152, Address: 0x10256a0, Func Offset: 0x60
	// Line 1153, Address: 0x10256ac, Func Offset: 0x6c
	// Line 1154, Address: 0x10256b4, Func Offset: 0x74
	// Line 1156, Address: 0x10256c0, Func Offset: 0x80
	// Func End, Address: 0x10256d4, Func Offset: 0x94
}

// 
// Start address: 0x10256e0
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1171, Address: 0x10256e0, Func Offset: 0
	// Line 1174, Address: 0x10256ec, Func Offset: 0xc
	// Line 1175, Address: 0x10256f0, Func Offset: 0x10
	// Line 1176, Address: 0x102571c, Func Offset: 0x3c
	// Line 1177, Address: 0x1025730, Func Offset: 0x50
	// Line 1178, Address: 0x102573c, Func Offset: 0x5c
	// Line 1179, Address: 0x1025744, Func Offset: 0x64
	// Line 1181, Address: 0x1025750, Func Offset: 0x70
	// Func End, Address: 0x1025760, Func Offset: 0x80
}

// 
// Start address: 0x1025760
void sv_move_sub2()
{
	// Line 1185, Address: 0x1025760, Func Offset: 0
	// Line 1186, Address: 0x1025768, Func Offset: 0x8
	// Line 1188, Address: 0x1025770, Func Offset: 0x10
	// Line 1189, Address: 0x102577c, Func Offset: 0x1c
	// Func End, Address: 0x102578c, Func Offset: 0x2c
}

// 
// Start address: 0x1025790
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1203, Address: 0x1025790, Func Offset: 0
	// Line 1206, Address: 0x102579c, Func Offset: 0xc
	// Line 1207, Address: 0x10257c0, Func Offset: 0x30
	// Line 1208, Address: 0x10257e4, Func Offset: 0x54
	// Line 1209, Address: 0x10257f0, Func Offset: 0x60
	// Func End, Address: 0x1025800, Func Offset: 0x70
}

// 
// Start address: 0x1025800
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1224, Address: 0x1025800, Func Offset: 0
	// Line 1225, Address: 0x102580c, Func Offset: 0xc
	// Line 1226, Address: 0x1025834, Func Offset: 0x34
	// Line 1228, Address: 0x102584c, Func Offset: 0x4c
	// Line 1229, Address: 0x1025858, Func Offset: 0x58
	// Line 1230, Address: 0x1025860, Func Offset: 0x60
	// Line 1231, Address: 0x102586c, Func Offset: 0x6c
	// Line 1232, Address: 0x1025880, Func Offset: 0x80
	// Line 1233, Address: 0x1025894, Func Offset: 0x94
	// Line 1237, Address: 0x10258a8, Func Offset: 0xa8
	// Line 1238, Address: 0x10258b4, Func Offset: 0xb4
	// Func End, Address: 0x10258c4, Func Offset: 0xc4
}

// 
// Start address: 0x10258d0
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1252, Address: 0x10258d0, Func Offset: 0
	// Line 1255, Address: 0x10258dc, Func Offset: 0xc
	// Line 1256, Address: 0x10258fc, Func Offset: 0x2c
	// Line 1257, Address: 0x1025920, Func Offset: 0x50
	// Line 1258, Address: 0x102592c, Func Offset: 0x5c
	// Func End, Address: 0x102593c, Func Offset: 0x6c
}

// 
// Start address: 0x1025940
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1273, Address: 0x1025940, Func Offset: 0
	// Line 1274, Address: 0x102594c, Func Offset: 0xc
	// Line 1275, Address: 0x1025974, Func Offset: 0x34
	// Line 1277, Address: 0x102598c, Func Offset: 0x4c
	// Line 1278, Address: 0x1025998, Func Offset: 0x58
	// Line 1279, Address: 0x10259a0, Func Offset: 0x60
	// Line 1280, Address: 0x10259ac, Func Offset: 0x6c
	// Line 1281, Address: 0x10259c0, Func Offset: 0x80
	// Line 1282, Address: 0x10259d4, Func Offset: 0x94
	// Line 1286, Address: 0x10259e8, Func Offset: 0xa8
	// Line 1287, Address: 0x10259f4, Func Offset: 0xb4
	// Func End, Address: 0x1025a04, Func Offset: 0xc4
}

// 
// Start address: 0x1025a10
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1304, Address: 0x1025a10, Func Offset: 0
	// Line 1308, Address: 0x1025a20, Func Offset: 0x10
	// Line 1309, Address: 0x1025a30, Func Offset: 0x20
	// Line 1310, Address: 0x1025a54, Func Offset: 0x44
	// Line 1311, Address: 0x1025a68, Func Offset: 0x58
	// Line 1312, Address: 0x1025a80, Func Offset: 0x70
	// Line 1314, Address: 0x1025a8c, Func Offset: 0x7c
	// Line 1316, Address: 0x1025a98, Func Offset: 0x88
	// Line 1317, Address: 0x1025ad4, Func Offset: 0xc4
	// Line 1318, Address: 0x1025adc, Func Offset: 0xcc
	// Line 1319, Address: 0x1025af0, Func Offset: 0xe0
	// Line 1320, Address: 0x1025b1c, Func Offset: 0x10c
	// Line 1321, Address: 0x1025b2c, Func Offset: 0x11c
	// Line 1322, Address: 0x1025b40, Func Offset: 0x130
	// Line 1323, Address: 0x1025b48, Func Offset: 0x138
	// Line 1328, Address: 0x1025b5c, Func Offset: 0x14c
	// Func End, Address: 0x1025b70, Func Offset: 0x160
}

// 
// Start address: 0x1025b70
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
	// Line 1346, Address: 0x1025b70, Func Offset: 0
	// Line 1355, Address: 0x1025b90, Func Offset: 0x20
	// Line 1356, Address: 0x1025b94, Func Offset: 0x24
	// Line 1357, Address: 0x1025ba0, Func Offset: 0x30
	// Line 1358, Address: 0x1025bac, Func Offset: 0x3c
	// Line 1359, Address: 0x1025bb4, Func Offset: 0x44
	// Line 1360, Address: 0x1025bbc, Func Offset: 0x4c
	// Line 1362, Address: 0x1025bd0, Func Offset: 0x60
	// Line 1363, Address: 0x1025bd4, Func Offset: 0x64
	// Line 1364, Address: 0x1025be0, Func Offset: 0x70
	// Line 1365, Address: 0x1025bec, Func Offset: 0x7c
	// Line 1366, Address: 0x1025bf4, Func Offset: 0x84
	// Line 1368, Address: 0x1025bfc, Func Offset: 0x8c
	// Line 1369, Address: 0x1025c08, Func Offset: 0x98
	// Line 1370, Address: 0x1025c1c, Func Offset: 0xac
	// Line 1372, Address: 0x1025c28, Func Offset: 0xb8
	// Line 1373, Address: 0x1025c30, Func Offset: 0xc0
	// Line 1375, Address: 0x1025c38, Func Offset: 0xc8
	// Line 1377, Address: 0x1025c58, Func Offset: 0xe8
	// Line 1383, Address: 0x1025c84, Func Offset: 0x114
	// Line 1384, Address: 0x1025c98, Func Offset: 0x128
	// Line 1386, Address: 0x1025ca4, Func Offset: 0x134
	// Line 1387, Address: 0x1025cac, Func Offset: 0x13c
	// Line 1388, Address: 0x1025cb4, Func Offset: 0x144
	// Line 1390, Address: 0x1025cd4, Func Offset: 0x164
	// Line 1396, Address: 0x1025d00, Func Offset: 0x190
	// Line 1397, Address: 0x1025d14, Func Offset: 0x1a4
	// Line 1399, Address: 0x1025d20, Func Offset: 0x1b0
	// Line 1400, Address: 0x1025d28, Func Offset: 0x1b8
	// Line 1401, Address: 0x1025d30, Func Offset: 0x1c0
	// Line 1403, Address: 0x1025d50, Func Offset: 0x1e0
	// Line 1409, Address: 0x1025d7c, Func Offset: 0x20c
	// Line 1410, Address: 0x1025d90, Func Offset: 0x220
	// Line 1412, Address: 0x1025d9c, Func Offset: 0x22c
	// Line 1413, Address: 0x1025da4, Func Offset: 0x234
	// Line 1414, Address: 0x1025dac, Func Offset: 0x23c
	// Line 1416, Address: 0x1025dcc, Func Offset: 0x25c
	// Line 1425, Address: 0x1025df8, Func Offset: 0x288
	// Func End, Address: 0x1025e20, Func Offset: 0x2b0
}

// 
// Start address: 0x1025e20
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
	// Line 1442, Address: 0x1025e20, Func Offset: 0
	// Line 1453, Address: 0x1025e4c, Func Offset: 0x2c
	// Line 1455, Address: 0x1025e54, Func Offset: 0x34
	// Line 1456, Address: 0x1025e6c, Func Offset: 0x4c
	// Line 1457, Address: 0x1025e80, Func Offset: 0x60
	// Line 1459, Address: 0x1025e88, Func Offset: 0x68
	// Line 1461, Address: 0x1025e9c, Func Offset: 0x7c
	// Line 1462, Address: 0x1025eb4, Func Offset: 0x94
	// Line 1463, Address: 0x1025ec8, Func Offset: 0xa8
	// Line 1464, Address: 0x1025ed0, Func Offset: 0xb0
	// Line 1466, Address: 0x1025ed8, Func Offset: 0xb8
	// Line 1467, Address: 0x1025eec, Func Offset: 0xcc
	// Line 1472, Address: 0x1025ef4, Func Offset: 0xd4
	// Line 1473, Address: 0x1025f44, Func Offset: 0x124
	// Line 1474, Address: 0x1025f4c, Func Offset: 0x12c
	// Line 1480, Address: 0x1025f6c, Func Offset: 0x14c
	// Line 1481, Address: 0x1025f8c, Func Offset: 0x16c
	// Line 1482, Address: 0x1025fb0, Func Offset: 0x190
	// Line 1483, Address: 0x1025fbc, Func Offset: 0x19c
	// Line 1484, Address: 0x1025fc4, Func Offset: 0x1a4
	// Line 1486, Address: 0x1025fe4, Func Offset: 0x1c4
	// Line 1490, Address: 0x1026010, Func Offset: 0x1f0
	// Line 1493, Address: 0x1026018, Func Offset: 0x1f8
	// Line 1494, Address: 0x102601c, Func Offset: 0x1fc
	// Line 1498, Address: 0x102603c, Func Offset: 0x21c
	// Line 1505, Address: 0x1026068, Func Offset: 0x248
	// Line 1512, Address: 0x102607c, Func Offset: 0x25c
	// Line 1513, Address: 0x1026084, Func Offset: 0x264
	// Line 1514, Address: 0x102608c, Func Offset: 0x26c
	// Line 1515, Address: 0x10260a4, Func Offset: 0x284
	// Line 1516, Address: 0x10260c4, Func Offset: 0x2a4
	// Line 1520, Address: 0x10260cc, Func Offset: 0x2ac
	// Line 1522, Address: 0x10260fc, Func Offset: 0x2dc
	// Line 1523, Address: 0x1026108, Func Offset: 0x2e8
	// Line 1527, Address: 0x1026118, Func Offset: 0x2f8
	// Line 1528, Address: 0x1026124, Func Offset: 0x304
	// Line 1530, Address: 0x1026144, Func Offset: 0x324
	// Line 1531, Address: 0x102617c, Func Offset: 0x35c
	// Line 1532, Address: 0x102619c, Func Offset: 0x37c
	// Line 1534, Address: 0x10261c0, Func Offset: 0x3a0
	// Line 1537, Address: 0x10261e4, Func Offset: 0x3c4
	// Line 1539, Address: 0x1026204, Func Offset: 0x3e4
	// Line 1541, Address: 0x1026218, Func Offset: 0x3f8
	// Line 1542, Address: 0x1026224, Func Offset: 0x404
	// Line 1543, Address: 0x1026234, Func Offset: 0x414
	// Line 1545, Address: 0x102623c, Func Offset: 0x41c
	// Func End, Address: 0x1026264, Func Offset: 0x444
}

// 
// Start address: 0x1026270
void scrollwrtc()
{
	// Line 1551, Address: 0x1026270, Func Offset: 0
	// Func End, Address: 0x1026278, Func Offset: 0x8
}

// 
// Start address: 0x1026280
void scrollwrtz()
{
	// Line 1556, Address: 0x1026280, Func Offset: 0
	// Func End, Address: 0x1026288, Func Offset: 0x8
}

// 
// Start address: 0x1026290
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1574, Address: 0x1026290, Func Offset: 0
	// Line 1587, Address: 0x10262b8, Func Offset: 0x28
	// Line 1590, Address: 0x10262d8, Func Offset: 0x48
	// Line 1591, Address: 0x10262ec, Func Offset: 0x5c
	// Line 1592, Address: 0x1026300, Func Offset: 0x70
	// Line 1593, Address: 0x1026314, Func Offset: 0x84
	// Line 1595, Address: 0x1026328, Func Offset: 0x98
	// Line 1596, Address: 0x1026334, Func Offset: 0xa4
	// Line 1597, Address: 0x1026348, Func Offset: 0xb8
	// Func End, Address: 0x1026358, Func Offset: 0xc8
}

// 
// Start address: 0x1026360
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1601, Address: 0x1026360, Func Offset: 0
	// Line 1605, Address: 0x1026388, Func Offset: 0x28
	// Line 1608, Address: 0x10263a8, Func Offset: 0x48
	// Line 1609, Address: 0x10263bc, Func Offset: 0x5c
	// Line 1610, Address: 0x10263d0, Func Offset: 0x70
	// Line 1611, Address: 0x10263e4, Func Offset: 0x84
	// Line 1613, Address: 0x10263f8, Func Offset: 0x98
	// Line 1614, Address: 0x1026404, Func Offset: 0xa4
	// Line 1615, Address: 0x1026418, Func Offset: 0xb8
	// Func End, Address: 0x1026428, Func Offset: 0xc8
}

// 
// Start address: 0x1026430
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1635, Address: 0x1026430, Func Offset: 0
	// Line 1639, Address: 0x1026458, Func Offset: 0x28
	// Line 1642, Address: 0x1026478, Func Offset: 0x48
	// Line 1643, Address: 0x102648c, Func Offset: 0x5c
	// Line 1644, Address: 0x102649c, Func Offset: 0x6c
	// Line 1645, Address: 0x10264b0, Func Offset: 0x80
	// Line 1647, Address: 0x10264c0, Func Offset: 0x90
	// Line 1648, Address: 0x10264cc, Func Offset: 0x9c
	// Line 1649, Address: 0x10264e0, Func Offset: 0xb0
	// Func End, Address: 0x10264f0, Func Offset: 0xc0
}

// 
// Start address: 0x10264f0
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
	// Line 1668, Address: 0x10264f0, Func Offset: 0
	// Line 1674, Address: 0x1026524, Func Offset: 0x34
	// Line 1676, Address: 0x1026534, Func Offset: 0x44
	// Line 1677, Address: 0x1026538, Func Offset: 0x48
	// Line 1678, Address: 0x1026540, Func Offset: 0x50
	// Line 1680, Address: 0x1026550, Func Offset: 0x60
	// Line 1682, Address: 0x1026554, Func Offset: 0x64
	// Line 1683, Address: 0x102655c, Func Offset: 0x6c
	// Line 1686, Address: 0x1026564, Func Offset: 0x74
	// Line 1687, Address: 0x102656c, Func Offset: 0x7c
	// Line 1688, Address: 0x1026578, Func Offset: 0x88
	// Line 1690, Address: 0x1026584, Func Offset: 0x94
	// Line 1691, Address: 0x102658c, Func Offset: 0x9c
	// Line 1692, Address: 0x1026594, Func Offset: 0xa4
	// Line 1693, Address: 0x102659c, Func Offset: 0xac
	// Line 1695, Address: 0x10265a8, Func Offset: 0xb8
	// Line 1696, Address: 0x10265b0, Func Offset: 0xc0
	// Line 1697, Address: 0x10265b8, Func Offset: 0xc8
	// Line 1698, Address: 0x10265c0, Func Offset: 0xd0
	// Line 1700, Address: 0x10265cc, Func Offset: 0xdc
	// Line 1701, Address: 0x10265d4, Func Offset: 0xe4
	// Line 1702, Address: 0x10265dc, Func Offset: 0xec
	// Line 1705, Address: 0x10265e4, Func Offset: 0xf4
	// Line 1706, Address: 0x10265ec, Func Offset: 0xfc
	// Line 1709, Address: 0x10265f4, Func Offset: 0x104
	// Line 1710, Address: 0x1026638, Func Offset: 0x148
	// Line 1711, Address: 0x102667c, Func Offset: 0x18c
	// Line 1712, Address: 0x10266c0, Func Offset: 0x1d0
	// Line 1714, Address: 0x1026704, Func Offset: 0x214
	// Func End, Address: 0x1026734, Func Offset: 0x244
}

// 
// Start address: 0x1026740
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1732, Address: 0x1026740, Func Offset: 0
	// Line 1733, Address: 0x1026760, Func Offset: 0x20
	// Line 1734, Address: 0x1026780, Func Offset: 0x40
	// Func End, Address: 0x1026790, Func Offset: 0x50
}

// 
// Start address: 0x1026790
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1736, Address: 0x1026790, Func Offset: 0
	// Line 1737, Address: 0x10267b0, Func Offset: 0x20
	// Line 1738, Address: 0x10267b4, Func Offset: 0x24
	// Line 1739, Address: 0x10267d4, Func Offset: 0x44
	// Func End, Address: 0x10267e4, Func Offset: 0x54
}

// 
// Start address: 0x10267f0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1746, Address: 0x10267f0, Func Offset: 0
	// Line 1752, Address: 0x1026820, Func Offset: 0x30
	// Line 1753, Address: 0x1026830, Func Offset: 0x40
	// Line 1759, Address: 0x1026840, Func Offset: 0x50
	// Line 1760, Address: 0x102685c, Func Offset: 0x6c
	// Line 1761, Address: 0x1026860, Func Offset: 0x70
	// Line 1762, Address: 0x102687c, Func Offset: 0x8c
	// Line 1763, Address: 0x1026880, Func Offset: 0x90
	// Line 1764, Address: 0x10268a0, Func Offset: 0xb0
	// Line 1765, Address: 0x10268a8, Func Offset: 0xb8
	// Line 1766, Address: 0x10268c8, Func Offset: 0xd8
	// Line 1767, Address: 0x10268d0, Func Offset: 0xe0
	// Line 1768, Address: 0x1026918, Func Offset: 0x128
	// Line 1770, Address: 0x1026924, Func Offset: 0x134
	// Line 1772, Address: 0x1026940, Func Offset: 0x150
	// Line 1777, Address: 0x1026948, Func Offset: 0x158
	// Line 1778, Address: 0x1026954, Func Offset: 0x164
	// Line 1781, Address: 0x1026960, Func Offset: 0x170
	// Line 1782, Address: 0x1026968, Func Offset: 0x178
	// Line 1783, Address: 0x1026988, Func Offset: 0x198
	// Line 1784, Address: 0x10269a4, Func Offset: 0x1b4
	// Line 1785, Address: 0x10269ac, Func Offset: 0x1bc
	// Line 1786, Address: 0x10269cc, Func Offset: 0x1dc
	// Line 1788, Address: 0x10269e8, Func Offset: 0x1f8
	// Line 1789, Address: 0x10269f0, Func Offset: 0x200
	// Line 1790, Address: 0x10269f8, Func Offset: 0x208
	// Line 1791, Address: 0x1026a04, Func Offset: 0x214
	// Line 1792, Address: 0x1026a1c, Func Offset: 0x22c
	// Line 1794, Address: 0x1026a2c, Func Offset: 0x23c
	// Line 1797, Address: 0x1026a38, Func Offset: 0x248
	// Line 1798, Address: 0x1026a40, Func Offset: 0x250
	// Line 1799, Address: 0x1026a44, Func Offset: 0x254
	// Func End, Address: 0x1026a64, Func Offset: 0x274
}

// 
// Start address: 0x1026a70
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1819, Address: 0x1026a70, Func Offset: 0
	// Line 1827, Address: 0x1026a98, Func Offset: 0x28
	// Line 1828, Address: 0x1026afc, Func Offset: 0x8c
	// Line 1834, Address: 0x1026b04, Func Offset: 0x94
	// Line 1835, Address: 0x1026b0c, Func Offset: 0x9c
	// Line 1836, Address: 0x1026b2c, Func Offset: 0xbc
	// Line 1837, Address: 0x1026b48, Func Offset: 0xd8
	// Line 1838, Address: 0x1026b50, Func Offset: 0xe0
	// Line 1839, Address: 0x1026b70, Func Offset: 0x100
	// Line 1842, Address: 0x1026b8c, Func Offset: 0x11c
	// Line 1843, Address: 0x1026b94, Func Offset: 0x124
	// Line 1844, Address: 0x1026b9c, Func Offset: 0x12c
	// Line 1845, Address: 0x1026ba8, Func Offset: 0x138
	// Line 1846, Address: 0x1026bc0, Func Offset: 0x150
	// Line 1847, Address: 0x1026bc8, Func Offset: 0x158
	// Line 1852, Address: 0x1026bd8, Func Offset: 0x168
	// Line 1855, Address: 0x1026be4, Func Offset: 0x174
	// Line 1856, Address: 0x1026bec, Func Offset: 0x17c
	// Line 1857, Address: 0x1026bf0, Func Offset: 0x180
	// Func End, Address: 0x1026c0c, Func Offset: 0x19c
}

// 
// Start address: 0x1026c10
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1871, Address: 0x1026c10, Func Offset: 0
	// Line 1878, Address: 0x1026c2c, Func Offset: 0x1c
	// Line 1879, Address: 0x1026c30, Func Offset: 0x20
	// Line 1880, Address: 0x1026c38, Func Offset: 0x28
	// Line 1881, Address: 0x1026c5c, Func Offset: 0x4c
	// Line 1882, Address: 0x1026c68, Func Offset: 0x58
	// Line 1883, Address: 0x1026c80, Func Offset: 0x70
	// Line 1884, Address: 0x1026c94, Func Offset: 0x84
	// Line 1889, Address: 0x1026cac, Func Offset: 0x9c
	// Func End, Address: 0x1026cc4, Func Offset: 0xb4
}

// 
// Start address: 0x1026cd0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1903, Address: 0x1026cd0, Func Offset: 0
	// Line 1904, Address: 0x1026cdc, Func Offset: 0xc
	// Line 1905, Address: 0x1026d08, Func Offset: 0x38
	// Line 1906, Address: 0x1026d54, Func Offset: 0x84
	// Line 1907, Address: 0x1026d80, Func Offset: 0xb0
	// Line 1909, Address: 0x1026dcc, Func Offset: 0xfc
	// Line 1915, Address: 0x1026dd8, Func Offset: 0x108
	// Line 1916, Address: 0x1026ddc, Func Offset: 0x10c
	// Func End, Address: 0x1026de8, Func Offset: 0x118
}

// 
// Start address: 0x1026df0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1933, Address: 0x1026df0, Func Offset: 0
	// Line 1934, Address: 0x1026e0c, Func Offset: 0x1c
	// Line 1936, Address: 0x1026e28, Func Offset: 0x38
	// Func End, Address: 0x1026e38, Func Offset: 0x48
}

// 
// Start address: 0x1026e40
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1938, Address: 0x1026e40, Func Offset: 0
	// Line 1939, Address: 0x1026e5c, Func Offset: 0x1c
	// Line 1940, Address: 0x1026e60, Func Offset: 0x20
	// Line 1942, Address: 0x1026e7c, Func Offset: 0x3c
	// Func End, Address: 0x1026e8c, Func Offset: 0x4c
}

// 
// Start address: 0x1026e90
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1944, Address: 0x1026e90, Func Offset: 0
	// Line 1945, Address: 0x1026ea4, Func Offset: 0x14
	// Line 1947, Address: 0x1026ec0, Func Offset: 0x30
	// Func End, Address: 0x1026ed0, Func Offset: 0x40
}

// 
// Start address: 0x1026ed0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1949, Address: 0x1026ed0, Func Offset: 0
	// Line 1950, Address: 0x1026eec, Func Offset: 0x1c
	// Line 1952, Address: 0x1026f08, Func Offset: 0x38
	// Func End, Address: 0x1026f18, Func Offset: 0x48
}

// 
// Start address: 0x1026f20
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1954, Address: 0x1026f20, Func Offset: 0
	// Line 1955, Address: 0x1026f38, Func Offset: 0x18
	// Line 1956, Address: 0x1026f48, Func Offset: 0x28
	// Line 1957, Address: 0x1026f58, Func Offset: 0x38
	// Line 1958, Address: 0x1026f64, Func Offset: 0x44
	// Line 1960, Address: 0x1026f70, Func Offset: 0x50
	// Line 1961, Address: 0x1026f9c, Func Offset: 0x7c
	// Line 1964, Address: 0x1026fc8, Func Offset: 0xa8
	// Func End, Address: 0x1026fd4, Func Offset: 0xb4
}

// 
// Start address: 0x1026fe0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1980, Address: 0x1026fe0, Func Offset: 0
	// Line 1985, Address: 0x1026ff8, Func Offset: 0x18
	// Line 1986, Address: 0x1027004, Func Offset: 0x24
	// Line 1987, Address: 0x1027010, Func Offset: 0x30
	// Line 1988, Address: 0x1027018, Func Offset: 0x38
	// Line 1989, Address: 0x102701c, Func Offset: 0x3c
	// Line 1990, Address: 0x1027034, Func Offset: 0x54
	// Line 1991, Address: 0x102703c, Func Offset: 0x5c
	// Func End, Address: 0x102705c, Func Offset: 0x7c
}

// 
// Start address: 0x1027060
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1994, Address: 0x1027060, Func Offset: 0
	// Line 1999, Address: 0x1027078, Func Offset: 0x18
	// Line 2000, Address: 0x1027084, Func Offset: 0x24
	// Line 2001, Address: 0x1027090, Func Offset: 0x30
	// Line 2002, Address: 0x1027098, Func Offset: 0x38
	// Line 2003, Address: 0x102709c, Func Offset: 0x3c
	// Line 2005, Address: 0x10270ac, Func Offset: 0x4c
	// Func End, Address: 0x10270cc, Func Offset: 0x6c
}

// 
// Start address: 0x10270d0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 2008, Address: 0x10270d0, Func Offset: 0
	// Line 2009, Address: 0x10270e8, Func Offset: 0x18
	// Line 2010, Address: 0x1027108, Func Offset: 0x38
	// Func End, Address: 0x1027118, Func Offset: 0x48
}

// 
// Start address: 0x1027120
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 2015, Address: 0x1027120, Func Offset: 0
	// Line 2019, Address: 0x1027140, Func Offset: 0x20
	// Line 2022, Address: 0x102715c, Func Offset: 0x3c
	// Line 2026, Address: 0x1027184, Func Offset: 0x64
	// Line 2027, Address: 0x1027190, Func Offset: 0x70
	// Line 2029, Address: 0x10271b8, Func Offset: 0x98
	// Func End, Address: 0x10271c8, Func Offset: 0xa8
}

// 
// Start address: 0x10271d0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 2035, Address: 0x10271d0, Func Offset: 0
	// Line 2038, Address: 0x10271ec, Func Offset: 0x1c
	// Line 2039, Address: 0x10271f4, Func Offset: 0x24
	// Line 2042, Address: 0x10271fc, Func Offset: 0x2c
	// Line 2044, Address: 0x1027220, Func Offset: 0x50
	// Line 2045, Address: 0x1027240, Func Offset: 0x70
	// Line 2046, Address: 0x1027248, Func Offset: 0x78
	// Line 2047, Address: 0x102726c, Func Offset: 0x9c
	// Func End, Address: 0x1027288, Func Offset: 0xb8
}

// 
// Start address: 0x1027290
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2073, Address: 0x1027290, Func Offset: 0
	// Line 2078, Address: 0x10272b8, Func Offset: 0x28
	// Line 2079, Address: 0x10272c8, Func Offset: 0x38
	// Line 2081, Address: 0x10272e4, Func Offset: 0x54
	// Line 2082, Address: 0x1027308, Func Offset: 0x78
	// Line 2083, Address: 0x1027330, Func Offset: 0xa0
	// Line 2084, Address: 0x102733c, Func Offset: 0xac
	// Line 2085, Address: 0x1027344, Func Offset: 0xb4
	// Line 2088, Address: 0x1027360, Func Offset: 0xd0
	// Line 2092, Address: 0x1027388, Func Offset: 0xf8
	// Line 2095, Address: 0x1027390, Func Offset: 0x100
	// Line 2096, Address: 0x1027394, Func Offset: 0x104
	// Line 2100, Address: 0x10273b0, Func Offset: 0x120
	// Line 2107, Address: 0x10273d8, Func Offset: 0x148
	// Func End, Address: 0x10273f4, Func Offset: 0x164
}

// 
// Start address: 0x1027400
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
	// Line 2118, Address: 0x1027400, Func Offset: 0
	// Line 2119, Address: 0x1027420, Func Offset: 0x20
	// Line 2124, Address: 0x102744c, Func Offset: 0x4c
	// Line 2130, Address: 0x1027470, Func Offset: 0x70
	// Line 2131, Address: 0x1027474, Func Offset: 0x74
	// Line 2133, Address: 0x1027478, Func Offset: 0x78
	// Line 2134, Address: 0x1027480, Func Offset: 0x80
	// Line 2137, Address: 0x10274a4, Func Offset: 0xa4
	// Line 2138, Address: 0x10274a8, Func Offset: 0xa8
	// Line 2141, Address: 0x10274cc, Func Offset: 0xcc
	// Line 2142, Address: 0x10274d0, Func Offset: 0xd0
	// Line 2143, Address: 0x10274d8, Func Offset: 0xd8
	// Line 2144, Address: 0x10274dc, Func Offset: 0xdc
	// Line 2146, Address: 0x10274e0, Func Offset: 0xe0
	// Line 2147, Address: 0x10274e8, Func Offset: 0xe8
	// Line 2148, Address: 0x1027508, Func Offset: 0x108
	// Line 2152, Address: 0x1027514, Func Offset: 0x114
	// Line 2153, Address: 0x1027528, Func Offset: 0x128
	// Line 2156, Address: 0x102753c, Func Offset: 0x13c
	// Line 2157, Address: 0x102755c, Func Offset: 0x15c
	// Func End, Address: 0x1027584, Func Offset: 0x184
}

// 
// Start address: 0x1027590
void mapset()
{
	// Line 2162, Address: 0x1027590, Func Offset: 0
	// Func End, Address: 0x1027598, Func Offset: 0x8
}

// 
// Start address: 0x10275a0
void divdevset()
{
	// Line 2166, Address: 0x10275a0, Func Offset: 0
	// Func End, Address: 0x10275a8, Func Offset: 0x8
}

// 
// Start address: 0x10275b0
void enecginit()
{
	// Line 2170, Address: 0x10275b0, Func Offset: 0
	// Func End, Address: 0x10275b8, Func Offset: 0x8
}

// 
// Start address: 0x10275c0
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2186, Address: 0x10275c0, Func Offset: 0
	// Line 2190, Address: 0x10275e0, Func Offset: 0x20
	// Line 2191, Address: 0x10275f8, Func Offset: 0x38
	// Line 2192, Address: 0x1027608, Func Offset: 0x48
	// Line 2193, Address: 0x1027618, Func Offset: 0x58
	// Line 2194, Address: 0x1027620, Func Offset: 0x60
	// Line 2196, Address: 0x1027624, Func Offset: 0x64
	// Line 2197, Address: 0x1027630, Func Offset: 0x70
	// Line 2198, Address: 0x1027648, Func Offset: 0x88
	// Line 2200, Address: 0x1027654, Func Offset: 0x94
	// Line 2201, Address: 0x1027660, Func Offset: 0xa0
	// Line 2202, Address: 0x102766c, Func Offset: 0xac
	// Func End, Address: 0x102768c, Func Offset: 0xcc
}

