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

typedef void(*type_6)(int, int);
typedef int(*type_8)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef char type_2[7];
typedef unsigned char* type_3[0];
typedef short type_4[2];
typedef short type_5[2][1];
typedef unsigned char type_7[49];
typedef unsigned short type_9[4];
typedef unsigned short type_10[4][1024];
typedef char type_11[11];
typedef _anon2* type_12[8];
typedef unsigned char type_13[2];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned char type_16[22];
typedef short type_17[9];
typedef unsigned char type_18[64];
typedef unsigned char type_19[64][8];
typedef short type_20[256];
typedef char type_21[3];
typedef short type_22[6];
typedef unsigned char type_23[4];
typedef char type_24[3];
typedef _anon2* type_25[8];
typedef char type_26[3];
typedef unsigned char type_27[65];
typedef char type_28[6];
typedef _anon1 type_29[128];
typedef short type_30[6];

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

unsigned char z81awrttbl[65];
unsigned char z81awrttbl2[49];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
unsigned char mapwrt_cnt;
_anon2 scra_v_posit;
_anon2 scra_h_posit;
unsigned char mapwkb[64][8];
void(*ChangeTileBmp)(int, int);
unsigned char enkeino;
_anon1 actwk[128];
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
_anon2 scrz_h_posit;
_anon2 scrc_h_posit;
_anon2 scrb_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
short hscrollwork[256];
_anon2* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon2 vscroll;
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
unsigned char* zonemaptbl[0];

void enkeichg();
_anon1* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z51aline0(short** ppHscw);
void z51aline1(short** ppHscw);
void z51aline2(short** ppHscw);
void z51aline3(short** ppHscw);
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk);
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
void scrv_up_ch(_anon2 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon2 lSpd);
void scrv_move(_anon2 lSpd);
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
// Start address: 0x1028830
void enkeichg()
{
	short tbl[6];
	char tbl0[3];
	int EnkeiNo;
	int TileNo;
	int BmpNo;
	int i;
	short* pTbl;
	short poswk;
	// Line 172, Address: 0x1028830, Func Offset: 0
	// Line 173, Address: 0x1028850, Func Offset: 0x20
	// Line 177, Address: 0x1028884, Func Offset: 0x54
	// Line 183, Address: 0x10288a8, Func Offset: 0x78
	// Line 187, Address: 0x10288b8, Func Offset: 0x88
	// Line 188, Address: 0x10288bc, Func Offset: 0x8c
	// Line 190, Address: 0x10288c0, Func Offset: 0x90
	// Line 191, Address: 0x10288c8, Func Offset: 0x98
	// Line 194, Address: 0x10288ec, Func Offset: 0xbc
	// Line 195, Address: 0x10288f0, Func Offset: 0xc0
	// Line 198, Address: 0x1028914, Func Offset: 0xe4
	// Line 203, Address: 0x1028928, Func Offset: 0xf8
	// Line 206, Address: 0x1028934, Func Offset: 0x104
	// Line 207, Address: 0x1028938, Func Offset: 0x108
	// Line 208, Address: 0x1028944, Func Offset: 0x114
	// Line 209, Address: 0x1028948, Func Offset: 0x118
	// Line 210, Address: 0x102894c, Func Offset: 0x11c
	// Line 211, Address: 0x1028954, Func Offset: 0x124
	// Line 212, Address: 0x1028958, Func Offset: 0x128
	// Line 214, Address: 0x102895c, Func Offset: 0x12c
	// Line 215, Address: 0x1028964, Func Offset: 0x134
	// Line 216, Address: 0x1028984, Func Offset: 0x154
	// Line 218, Address: 0x1028990, Func Offset: 0x160
	// Line 219, Address: 0x10289b0, Func Offset: 0x180
	// Line 221, Address: 0x10289d0, Func Offset: 0x1a0
	// Line 222, Address: 0x1028a08, Func Offset: 0x1d8
	// Line 223, Address: 0x1028a20, Func Offset: 0x1f0
	// Line 224, Address: 0x1028a2c, Func Offset: 0x1fc
	// Func End, Address: 0x1028a54, Func Offset: 0x224
}

// 
// Start address: 0x1028a60
_anon1* main_chk()
{
	// Line 238, Address: 0x1028a60, Func Offset: 0
	// Line 239, Address: 0x1028a74, Func Offset: 0x14
	// Line 241, Address: 0x1028a84, Func Offset: 0x24
	// Line 243, Address: 0x1028a8c, Func Offset: 0x2c
	// Func End, Address: 0x1028a94, Func Offset: 0x34
}

// 
// Start address: 0x1028aa0
void scr_set()
{
	short* pScrTbl;
	// Line 281, Address: 0x1028aa0, Func Offset: 0
	// Line 284, Address: 0x1028aac, Func Offset: 0xc
	// Line 285, Address: 0x1028ac0, Func Offset: 0x20
	// Line 286, Address: 0x1028ad4, Func Offset: 0x34
	// Line 288, Address: 0x1028adc, Func Offset: 0x3c
	// Line 289, Address: 0x1028ae4, Func Offset: 0x44
	// Line 290, Address: 0x1028af0, Func Offset: 0x50
	// Line 291, Address: 0x1028af4, Func Offset: 0x54
	// Line 292, Address: 0x1028b08, Func Offset: 0x68
	// Line 293, Address: 0x1028b0c, Func Offset: 0x6c
	// Line 294, Address: 0x1028b20, Func Offset: 0x80
	// Line 295, Address: 0x1028b24, Func Offset: 0x84
	// Line 296, Address: 0x1028b38, Func Offset: 0x98
	// Line 297, Address: 0x1028b3c, Func Offset: 0x9c
	// Line 298, Address: 0x1028b50, Func Offset: 0xb0
	// Line 299, Address: 0x1028b70, Func Offset: 0xd0
	// Line 300, Address: 0x1028b74, Func Offset: 0xd4
	// Line 301, Address: 0x1028b80, Func Offset: 0xe0
	// Line 303, Address: 0x1028b8c, Func Offset: 0xec
	// Line 304, Address: 0x1028b98, Func Offset: 0xf8
	// Line 306, Address: 0x1028ba4, Func Offset: 0x104
	// Line 307, Address: 0x1028bac, Func Offset: 0x10c
	// Func End, Address: 0x1028bc0, Func Offset: 0x120
}

// 
// Start address: 0x1028bc0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 345, Address: 0x1028bc0, Func Offset: 0
	// Line 348, Address: 0x1028bd4, Func Offset: 0x14
	// Line 349, Address: 0x1028be4, Func Offset: 0x24
	// Line 350, Address: 0x1028bec, Func Offset: 0x2c
	// Line 352, Address: 0x1028bfc, Func Offset: 0x3c
	// Line 353, Address: 0x1028c14, Func Offset: 0x54
	// Line 354, Address: 0x1028c24, Func Offset: 0x64
	// Line 355, Address: 0x1028c2c, Func Offset: 0x6c
	// Line 357, Address: 0x1028c30, Func Offset: 0x70
	// Line 359, Address: 0x1028c38, Func Offset: 0x78
	// Line 362, Address: 0x1028c40, Func Offset: 0x80
	// Line 363, Address: 0x1028c54, Func Offset: 0x94
	// Line 367, Address: 0x1028c68, Func Offset: 0xa8
	// Line 368, Address: 0x1028c7c, Func Offset: 0xbc
	// Line 369, Address: 0x1028c88, Func Offset: 0xc8
	// Line 370, Address: 0x1028c90, Func Offset: 0xd0
	// Line 374, Address: 0x1028c94, Func Offset: 0xd4
	// Line 375, Address: 0x1028cb8, Func Offset: 0xf8
	// Line 379, Address: 0x1028cc8, Func Offset: 0x108
	// Line 381, Address: 0x1028cd0, Func Offset: 0x110
	// Line 382, Address: 0x1028ce4, Func Offset: 0x124
	// Line 383, Address: 0x1028cf0, Func Offset: 0x130
	// Line 384, Address: 0x1028cf8, Func Offset: 0x138
	// Line 388, Address: 0x1028cfc, Func Offset: 0x13c
	// Line 389, Address: 0x1028d20, Func Offset: 0x160
	// Line 393, Address: 0x1028d30, Func Offset: 0x170
	// Line 395, Address: 0x1028d38, Func Offset: 0x178
	// Line 398, Address: 0x1028d48, Func Offset: 0x188
	// Line 399, Address: 0x1028d58, Func Offset: 0x198
	// Line 400, Address: 0x1028d68, Func Offset: 0x1a8
	// Line 401, Address: 0x1028d78, Func Offset: 0x1b8
	// Line 402, Address: 0x1028d88, Func Offset: 0x1c8
	// Func End, Address: 0x1028da4, Func Offset: 0x1e4
}

// 
// Start address: 0x1028db0
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 423, Address: 0x1028db0, Func Offset: 0
	// Line 426, Address: 0x1028dbc, Func Offset: 0xc
	// Line 427, Address: 0x1028dc4, Func Offset: 0x14
	// Line 429, Address: 0x1028dc8, Func Offset: 0x18
	// Line 430, Address: 0x1028de0, Func Offset: 0x30
	// Line 431, Address: 0x1028dec, Func Offset: 0x3c
	// Line 432, Address: 0x1028df4, Func Offset: 0x44
	// Line 433, Address: 0x1028e00, Func Offset: 0x50
	// Line 435, Address: 0x1028e20, Func Offset: 0x70
	// Line 436, Address: 0x1028e2c, Func Offset: 0x7c
	// Line 437, Address: 0x1028e38, Func Offset: 0x88
	// Line 439, Address: 0x1028e44, Func Offset: 0x94
	// Line 441, Address: 0x1028e84, Func Offset: 0xd4
	// Line 442, Address: 0x1028ea0, Func Offset: 0xf0
	// Line 444, Address: 0x1028eac, Func Offset: 0xfc
	// Line 445, Address: 0x1028eb8, Func Offset: 0x108
	// Line 446, Address: 0x1028ec4, Func Offset: 0x114
	// Func End, Address: 0x1028ed0, Func Offset: 0x120
}

// 
// Start address: 0x1028ed0
void scroll()
{
	_anon2 ldwk;
	_anon2* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 462, Address: 0x1028ed0, Func Offset: 0
	// Line 474, Address: 0x1028eec, Func Offset: 0x1c
	// Line 479, Address: 0x1028efc, Func Offset: 0x2c
	// Line 481, Address: 0x1028f28, Func Offset: 0x58
	// Line 483, Address: 0x1028f30, Func Offset: 0x60
	// Line 484, Address: 0x1028f38, Func Offset: 0x68
	// Line 486, Address: 0x1028f40, Func Offset: 0x70
	// Line 487, Address: 0x1028f50, Func Offset: 0x80
	// Line 490, Address: 0x1028f60, Func Offset: 0x90
	// Line 491, Address: 0x1028f74, Func Offset: 0xa4
	// Line 493, Address: 0x1028f84, Func Offset: 0xb4
	// Line 494, Address: 0x1028f98, Func Offset: 0xc8
	// Line 496, Address: 0x1028fa8, Func Offset: 0xd8
	// Line 497, Address: 0x1028fbc, Func Offset: 0xec
	// Line 498, Address: 0x1028fc4, Func Offset: 0xf4
	// Line 500, Address: 0x1028fd4, Func Offset: 0x104
	// Line 501, Address: 0x1028fe4, Func Offset: 0x114
	// Line 502, Address: 0x1028ffc, Func Offset: 0x12c
	// Line 503, Address: 0x1029000, Func Offset: 0x130
	// Line 505, Address: 0x1029008, Func Offset: 0x138
	// Line 506, Address: 0x102900c, Func Offset: 0x13c
	// Line 510, Address: 0x102901c, Func Offset: 0x14c
	// Line 512, Address: 0x102902c, Func Offset: 0x15c
	// Line 513, Address: 0x1029054, Func Offset: 0x184
	// Line 514, Address: 0x102908c, Func Offset: 0x1bc
	// Line 516, Address: 0x10290a0, Func Offset: 0x1d0
	// Line 518, Address: 0x10290ac, Func Offset: 0x1dc
	// Line 519, Address: 0x10290c4, Func Offset: 0x1f4
	// Line 520, Address: 0x10290d0, Func Offset: 0x200
	// Line 521, Address: 0x10290dc, Func Offset: 0x20c
	// Line 524, Address: 0x10290e4, Func Offset: 0x214
	// Line 529, Address: 0x1029104, Func Offset: 0x234
	// Line 531, Address: 0x1029110, Func Offset: 0x240
	// Line 532, Address: 0x1029124, Func Offset: 0x254
	// Line 534, Address: 0x1029134, Func Offset: 0x264
	// Line 535, Address: 0x1029140, Func Offset: 0x270
	// Line 538, Address: 0x102914c, Func Offset: 0x27c
	// Line 542, Address: 0x102916c, Func Offset: 0x29c
	// Line 544, Address: 0x1029178, Func Offset: 0x2a8
	// Line 545, Address: 0x102918c, Func Offset: 0x2bc
	// Line 549, Address: 0x102919c, Func Offset: 0x2cc
	// Line 550, Address: 0x10291a8, Func Offset: 0x2d8
	// Line 551, Address: 0x10291d8, Func Offset: 0x308
	// Line 552, Address: 0x1029208, Func Offset: 0x338
	// Line 553, Address: 0x1029224, Func Offset: 0x354
	// Func End, Address: 0x1029248, Func Offset: 0x378
}

// 
// Start address: 0x1029250
void z51aline0(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl0[6];
	// Line 567, Address: 0x1029250, Func Offset: 0
	// Line 572, Address: 0x1029268, Func Offset: 0x18
	// Line 576, Address: 0x102929c, Func Offset: 0x4c
	// Line 577, Address: 0x10292c0, Func Offset: 0x70
	// Line 578, Address: 0x10292dc, Func Offset: 0x8c
	// Line 580, Address: 0x10292e0, Func Offset: 0x90
	// Line 581, Address: 0x10292e4, Func Offset: 0x94
	// Line 583, Address: 0x10292f0, Func Offset: 0xa0
	// Line 585, Address: 0x1029304, Func Offset: 0xb4
	// Line 587, Address: 0x1029310, Func Offset: 0xc0
	// Line 589, Address: 0x1029330, Func Offset: 0xe0
	// Line 591, Address: 0x1029348, Func Offset: 0xf8
	// Line 592, Address: 0x102935c, Func Offset: 0x10c
	// Line 593, Address: 0x1029368, Func Offset: 0x118
	// Line 595, Address: 0x1029374, Func Offset: 0x124
	// Line 596, Address: 0x1029398, Func Offset: 0x148
	// Line 597, Address: 0x10293a4, Func Offset: 0x154
	// Line 598, Address: 0x10293c8, Func Offset: 0x178
	// Line 599, Address: 0x10293d4, Func Offset: 0x184
	// Line 600, Address: 0x10293e8, Func Offset: 0x198
	// Func End, Address: 0x1029404, Func Offset: 0x1b4
}

// 
// Start address: 0x1029410
void z51aline1(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl1[7];
	// Line 614, Address: 0x1029410, Func Offset: 0
	// Line 619, Address: 0x1029428, Func Offset: 0x18
	// Line 623, Address: 0x1029454, Func Offset: 0x44
	// Line 624, Address: 0x1029478, Func Offset: 0x68
	// Line 625, Address: 0x1029494, Func Offset: 0x84
	// Line 627, Address: 0x1029498, Func Offset: 0x88
	// Line 628, Address: 0x102949c, Func Offset: 0x8c
	// Line 630, Address: 0x10294a8, Func Offset: 0x98
	// Line 632, Address: 0x10294b4, Func Offset: 0xa4
	// Line 634, Address: 0x10294d4, Func Offset: 0xc4
	// Line 636, Address: 0x10294ec, Func Offset: 0xdc
	// Line 637, Address: 0x10294f8, Func Offset: 0xe8
	// Line 638, Address: 0x102950c, Func Offset: 0xfc
	// Line 640, Address: 0x1029518, Func Offset: 0x108
	// Line 641, Address: 0x102953c, Func Offset: 0x12c
	// Line 642, Address: 0x1029548, Func Offset: 0x138
	// Line 643, Address: 0x102956c, Func Offset: 0x15c
	// Line 644, Address: 0x1029578, Func Offset: 0x168
	// Func End, Address: 0x1029594, Func Offset: 0x184
}

// 
// Start address: 0x10295a0
void z51aline2(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl2[11];
	// Line 658, Address: 0x10295a0, Func Offset: 0
	// Line 663, Address: 0x10295b8, Func Offset: 0x18
	// Line 667, Address: 0x10295e4, Func Offset: 0x44
	// Line 668, Address: 0x1029608, Func Offset: 0x68
	// Line 669, Address: 0x1029624, Func Offset: 0x84
	// Line 671, Address: 0x1029628, Func Offset: 0x88
	// Line 672, Address: 0x102962c, Func Offset: 0x8c
	// Line 673, Address: 0x1029638, Func Offset: 0x98
	// Line 675, Address: 0x102964c, Func Offset: 0xac
	// Line 677, Address: 0x1029658, Func Offset: 0xb8
	// Line 679, Address: 0x1029678, Func Offset: 0xd8
	// Line 681, Address: 0x1029690, Func Offset: 0xf0
	// Line 682, Address: 0x10296a4, Func Offset: 0x104
	// Line 683, Address: 0x10296b0, Func Offset: 0x110
	// Line 685, Address: 0x10296bc, Func Offset: 0x11c
	// Line 686, Address: 0x10296e0, Func Offset: 0x140
	// Line 687, Address: 0x10296ec, Func Offset: 0x14c
	// Line 688, Address: 0x1029710, Func Offset: 0x170
	// Line 689, Address: 0x102971c, Func Offset: 0x17c
	// Line 690, Address: 0x1029730, Func Offset: 0x190
	// Func End, Address: 0x102974c, Func Offset: 0x1ac
}

// 
// Start address: 0x1029750
void z51aline3(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl3[3];
	// Line 704, Address: 0x1029750, Func Offset: 0
	// Line 709, Address: 0x1029768, Func Offset: 0x18
	// Line 713, Address: 0x102978c, Func Offset: 0x3c
	// Line 714, Address: 0x10297b0, Func Offset: 0x60
	// Line 715, Address: 0x10297cc, Func Offset: 0x7c
	// Line 717, Address: 0x10297d0, Func Offset: 0x80
	// Line 718, Address: 0x10297d4, Func Offset: 0x84
	// Line 720, Address: 0x10297e0, Func Offset: 0x90
	// Line 722, Address: 0x10297ec, Func Offset: 0x9c
	// Line 724, Address: 0x102980c, Func Offset: 0xbc
	// Line 726, Address: 0x1029824, Func Offset: 0xd4
	// Line 727, Address: 0x1029830, Func Offset: 0xe0
	// Line 728, Address: 0x1029844, Func Offset: 0xf4
	// Line 730, Address: 0x1029850, Func Offset: 0x100
	// Line 731, Address: 0x1029874, Func Offset: 0x124
	// Line 732, Address: 0x1029880, Func Offset: 0x130
	// Line 733, Address: 0x10298a4, Func Offset: 0x154
	// Line 734, Address: 0x10298b0, Func Offset: 0x160
	// Func End, Address: 0x10298cc, Func Offset: 0x17c
}

// 
// Start address: 0x10298d0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 755, Address: 0x10298d0, Func Offset: 0
	// Line 759, Address: 0x10298ec, Func Offset: 0x1c
	// Line 761, Address: 0x10298f0, Func Offset: 0x20
	// Line 762, Address: 0x102990c, Func Offset: 0x3c
	// Line 763, Address: 0x1029918, Func Offset: 0x48
	// Line 765, Address: 0x1029924, Func Offset: 0x54
	// Line 766, Address: 0x102992c, Func Offset: 0x5c
	// Line 767, Address: 0x102993c, Func Offset: 0x6c
	// Line 768, Address: 0x1029960, Func Offset: 0x90
	// Line 769, Address: 0x1029980, Func Offset: 0xb0
	// Func End, Address: 0x1029994, Func Offset: 0xc4
}

// 
// Start address: 0x10299a0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 875, Address: 0x10299a0, Func Offset: 0
	// Line 878, Address: 0x10299b0, Func Offset: 0x10
	// Line 879, Address: 0x10299c0, Func Offset: 0x20
	// Line 880, Address: 0x10299cc, Func Offset: 0x2c
	// Line 882, Address: 0x1029a04, Func Offset: 0x64
	// Line 883, Address: 0x1029a0c, Func Offset: 0x6c
	// Line 884, Address: 0x1029a20, Func Offset: 0x80
	// Line 885, Address: 0x1029a40, Func Offset: 0xa0
	// Line 886, Address: 0x1029a54, Func Offset: 0xb4
	// Line 888, Address: 0x1029a5c, Func Offset: 0xbc
	// Line 893, Address: 0x1029a70, Func Offset: 0xd0
	// Func End, Address: 0x1029a84, Func Offset: 0xe4
}

// 
// Start address: 0x1029a90
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 911, Address: 0x1029a90, Func Offset: 0
	// Line 915, Address: 0x1029aa4, Func Offset: 0x14
	// Line 916, Address: 0x1029aac, Func Offset: 0x1c
	// Line 917, Address: 0x1029ab4, Func Offset: 0x24
	// Line 918, Address: 0x1029abc, Func Offset: 0x2c
	// Line 919, Address: 0x1029ac0, Func Offset: 0x30
	// Line 920, Address: 0x1029ae4, Func Offset: 0x54
	// Line 921, Address: 0x1029af0, Func Offset: 0x60
	// Line 923, Address: 0x1029b0c, Func Offset: 0x7c
	// Line 924, Address: 0x1029b18, Func Offset: 0x88
	// Line 925, Address: 0x1029b2c, Func Offset: 0x9c
	// Line 926, Address: 0x1029b38, Func Offset: 0xa8
	// Line 927, Address: 0x1029b5c, Func Offset: 0xcc
	// Line 929, Address: 0x1029b64, Func Offset: 0xd4
	// Line 934, Address: 0x1029b8c, Func Offset: 0xfc
	// Func End, Address: 0x1029ba0, Func Offset: 0x110
}

// 
// Start address: 0x1029ba0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 952, Address: 0x1029ba0, Func Offset: 0
	// Line 956, Address: 0x1029bb4, Func Offset: 0x14
	// Line 957, Address: 0x1029bbc, Func Offset: 0x1c
	// Line 958, Address: 0x1029bc4, Func Offset: 0x24
	// Line 959, Address: 0x1029bcc, Func Offset: 0x2c
	// Line 960, Address: 0x1029bd0, Func Offset: 0x30
	// Line 961, Address: 0x1029bf4, Func Offset: 0x54
	// Line 962, Address: 0x1029c00, Func Offset: 0x60
	// Line 964, Address: 0x1029c1c, Func Offset: 0x7c
	// Line 965, Address: 0x1029c28, Func Offset: 0x88
	// Line 966, Address: 0x1029c3c, Func Offset: 0x9c
	// Line 967, Address: 0x1029c48, Func Offset: 0xa8
	// Line 968, Address: 0x1029c6c, Func Offset: 0xcc
	// Line 970, Address: 0x1029c74, Func Offset: 0xd4
	// Line 975, Address: 0x1029c9c, Func Offset: 0xfc
	// Func End, Address: 0x1029cb0, Func Offset: 0x110
}

// 
// Start address: 0x1029cb0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 993, Address: 0x1029cb0, Func Offset: 0
	// Line 997, Address: 0x1029cc4, Func Offset: 0x14
	// Line 998, Address: 0x1029ccc, Func Offset: 0x1c
	// Line 999, Address: 0x1029cd4, Func Offset: 0x24
	// Line 1000, Address: 0x1029cdc, Func Offset: 0x2c
	// Line 1001, Address: 0x1029ce0, Func Offset: 0x30
	// Line 1002, Address: 0x1029d04, Func Offset: 0x54
	// Line 1003, Address: 0x1029d10, Func Offset: 0x60
	// Line 1005, Address: 0x1029d2c, Func Offset: 0x7c
	// Line 1006, Address: 0x1029d38, Func Offset: 0x88
	// Line 1007, Address: 0x1029d4c, Func Offset: 0x9c
	// Line 1008, Address: 0x1029d58, Func Offset: 0xa8
	// Line 1009, Address: 0x1029d7c, Func Offset: 0xcc
	// Line 1011, Address: 0x1029d84, Func Offset: 0xd4
	// Line 1016, Address: 0x1029dac, Func Offset: 0xfc
	// Func End, Address: 0x1029dc0, Func Offset: 0x110
}

// 
// Start address: 0x1029dc0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 1031, Address: 0x1029dc0, Func Offset: 0
	// Line 1035, Address: 0x1029dd0, Func Offset: 0x10
	// Line 1037, Address: 0x1029de0, Func Offset: 0x20
	// Line 1038, Address: 0x1029de8, Func Offset: 0x28
	// Line 1039, Address: 0x1029e1c, Func Offset: 0x5c
	// Line 1040, Address: 0x1029e24, Func Offset: 0x64
	// Line 1041, Address: 0x1029e38, Func Offset: 0x78
	// Line 1042, Address: 0x1029e5c, Func Offset: 0x9c
	// Line 1043, Address: 0x1029e70, Func Offset: 0xb0
	// Line 1044, Address: 0x1029e78, Func Offset: 0xb8
	// Line 1049, Address: 0x1029e8c, Func Offset: 0xcc
	// Func End, Address: 0x1029ea4, Func Offset: 0xe4
}

// 
// Start address: 0x1029eb0
void scrh_move()
{
	short xwk;
	// Line 1066, Address: 0x1029eb0, Func Offset: 0
	// Line 1069, Address: 0x1029eb8, Func Offset: 0x8
	// Line 1070, Address: 0x1029f00, Func Offset: 0x50
	// Line 1072, Address: 0x1029f10, Func Offset: 0x60
	// Line 1073, Address: 0x1029f18, Func Offset: 0x68
	// Line 1074, Address: 0x1029f20, Func Offset: 0x70
	// Line 1076, Address: 0x1029f30, Func Offset: 0x80
	// Line 1077, Address: 0x1029f44, Func Offset: 0x94
	// Line 1081, Address: 0x1029f50, Func Offset: 0xa0
	// Line 1082, Address: 0x1029f64, Func Offset: 0xb4
	// Line 1083, Address: 0x1029f88, Func Offset: 0xd8
	// Line 1085, Address: 0x1029f98, Func Offset: 0xe8
	// Line 1087, Address: 0x1029fa0, Func Offset: 0xf0
	// Line 1088, Address: 0x1029fb4, Func Offset: 0x104
	// Line 1092, Address: 0x1029fc0, Func Offset: 0x110
	// Line 1093, Address: 0x1029fd4, Func Offset: 0x124
	// Line 1094, Address: 0x1029ff8, Func Offset: 0x148
	// Line 1099, Address: 0x102a008, Func Offset: 0x158
	// Line 1100, Address: 0x102a038, Func Offset: 0x188
	// Line 1101, Address: 0x102a040, Func Offset: 0x190
	// Func End, Address: 0x102a050, Func Offset: 0x1a0
}

// 
// Start address: 0x102a050
void scroll_v()
{
	short ywk;
	// Line 1116, Address: 0x102a050, Func Offset: 0
	// Line 1119, Address: 0x102a05c, Func Offset: 0xc
	// Line 1120, Address: 0x102a090, Func Offset: 0x40
	// Line 1121, Address: 0x102a0a8, Func Offset: 0x58
	// Line 1125, Address: 0x102a0b4, Func Offset: 0x64
	// Line 1126, Address: 0x102a0cc, Func Offset: 0x7c
	// Line 1127, Address: 0x102a0d8, Func Offset: 0x88
	// Line 1128, Address: 0x102a0fc, Func Offset: 0xac
	// Line 1129, Address: 0x102a110, Func Offset: 0xc0
	// Line 1130, Address: 0x102a11c, Func Offset: 0xcc
	// Line 1131, Address: 0x102a124, Func Offset: 0xd4
	// Line 1132, Address: 0x102a14c, Func Offset: 0xfc
	// Line 1133, Address: 0x102a174, Func Offset: 0x124
	// Line 1134, Address: 0x102a180, Func Offset: 0x130
	// Line 1136, Address: 0x102a188, Func Offset: 0x138
	// Line 1137, Address: 0x102a1b0, Func Offset: 0x160
	// Line 1138, Address: 0x102a1c0, Func Offset: 0x170
	// Line 1139, Address: 0x102a1c8, Func Offset: 0x178
	// Line 1144, Address: 0x102a1d0, Func Offset: 0x180
	// Line 1145, Address: 0x102a1fc, Func Offset: 0x1ac
	// Line 1146, Address: 0x102a208, Func Offset: 0x1b8
	// Line 1147, Address: 0x102a210, Func Offset: 0x1c0
	// Line 1148, Address: 0x102a220, Func Offset: 0x1d0
	// Line 1149, Address: 0x102a228, Func Offset: 0x1d8
	// Line 1154, Address: 0x102a230, Func Offset: 0x1e0
	// Line 1155, Address: 0x102a238, Func Offset: 0x1e8
	// Func End, Address: 0x102a24c, Func Offset: 0x1fc
}

// 
// Start address: 0x102a250
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1169, Address: 0x102a250, Func Offset: 0
	// Line 1172, Address: 0x102a260, Func Offset: 0x10
	// Line 1173, Address: 0x102a27c, Func Offset: 0x2c
	// Line 1174, Address: 0x102a294, Func Offset: 0x44
	// Line 1175, Address: 0x102a2b8, Func Offset: 0x68
	// Line 1176, Address: 0x102a2c0, Func Offset: 0x70
	// Line 1180, Address: 0x102a2d0, Func Offset: 0x80
	// Line 1181, Address: 0x102a2e4, Func Offset: 0x94
	// Line 1182, Address: 0x102a2f0, Func Offset: 0xa0
	// Line 1185, Address: 0x102a2f8, Func Offset: 0xa8
	// Line 1186, Address: 0x102a310, Func Offset: 0xc0
	// Line 1187, Address: 0x102a31c, Func Offset: 0xcc
	// Line 1188, Address: 0x102a33c, Func Offset: 0xec
	// Line 1189, Address: 0x102a348, Func Offset: 0xf8
	// Line 1190, Address: 0x102a350, Func Offset: 0x100
	// Line 1192, Address: 0x102a35c, Func Offset: 0x10c
	// Line 1194, Address: 0x102a364, Func Offset: 0x114
	// Line 1195, Address: 0x102a37c, Func Offset: 0x12c
	// Line 1196, Address: 0x102a388, Func Offset: 0x138
	// Line 1197, Address: 0x102a3a8, Func Offset: 0x158
	// Line 1198, Address: 0x102a3b4, Func Offset: 0x164
	// Line 1199, Address: 0x102a3bc, Func Offset: 0x16c
	// Line 1202, Address: 0x102a3c8, Func Offset: 0x178
	// Func End, Address: 0x102a3dc, Func Offset: 0x18c
}

// 
// Start address: 0x102a3e0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1216, Address: 0x102a3e0, Func Offset: 0
	// Line 1219, Address: 0x102a3f0, Func Offset: 0x10
	// Line 1221, Address: 0x102a3fc, Func Offset: 0x1c
	// Line 1222, Address: 0x102a414, Func Offset: 0x34
	// Line 1223, Address: 0x102a420, Func Offset: 0x40
	// Line 1224, Address: 0x102a440, Func Offset: 0x60
	// Line 1225, Address: 0x102a44c, Func Offset: 0x6c
	// Line 1226, Address: 0x102a454, Func Offset: 0x74
	// Line 1228, Address: 0x102a460, Func Offset: 0x80
	// Func End, Address: 0x102a474, Func Offset: 0x94
}

// 
// Start address: 0x102a480
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1243, Address: 0x102a480, Func Offset: 0
	// Line 1246, Address: 0x102a48c, Func Offset: 0xc
	// Line 1247, Address: 0x102a490, Func Offset: 0x10
	// Line 1248, Address: 0x102a4bc, Func Offset: 0x3c
	// Line 1249, Address: 0x102a4d0, Func Offset: 0x50
	// Line 1250, Address: 0x102a4dc, Func Offset: 0x5c
	// Line 1251, Address: 0x102a4e4, Func Offset: 0x64
	// Line 1253, Address: 0x102a4f0, Func Offset: 0x70
	// Func End, Address: 0x102a500, Func Offset: 0x80
}

// 
// Start address: 0x102a500
void sv_move_sub2()
{
	// Line 1257, Address: 0x102a500, Func Offset: 0
	// Line 1258, Address: 0x102a508, Func Offset: 0x8
	// Line 1260, Address: 0x102a510, Func Offset: 0x10
	// Line 1261, Address: 0x102a51c, Func Offset: 0x1c
	// Func End, Address: 0x102a52c, Func Offset: 0x2c
}

// 
// Start address: 0x102a530
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1275, Address: 0x102a530, Func Offset: 0
	// Line 1278, Address: 0x102a53c, Func Offset: 0xc
	// Line 1279, Address: 0x102a560, Func Offset: 0x30
	// Line 1280, Address: 0x102a584, Func Offset: 0x54
	// Line 1281, Address: 0x102a590, Func Offset: 0x60
	// Func End, Address: 0x102a5a0, Func Offset: 0x70
}

// 
// Start address: 0x102a5a0
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1296, Address: 0x102a5a0, Func Offset: 0
	// Line 1297, Address: 0x102a5ac, Func Offset: 0xc
	// Line 1298, Address: 0x102a5d4, Func Offset: 0x34
	// Line 1300, Address: 0x102a5ec, Func Offset: 0x4c
	// Line 1301, Address: 0x102a5f8, Func Offset: 0x58
	// Line 1302, Address: 0x102a600, Func Offset: 0x60
	// Line 1303, Address: 0x102a60c, Func Offset: 0x6c
	// Line 1304, Address: 0x102a620, Func Offset: 0x80
	// Line 1305, Address: 0x102a634, Func Offset: 0x94
	// Line 1309, Address: 0x102a648, Func Offset: 0xa8
	// Line 1310, Address: 0x102a654, Func Offset: 0xb4
	// Func End, Address: 0x102a664, Func Offset: 0xc4
}

// 
// Start address: 0x102a670
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1324, Address: 0x102a670, Func Offset: 0
	// Line 1327, Address: 0x102a67c, Func Offset: 0xc
	// Line 1328, Address: 0x102a69c, Func Offset: 0x2c
	// Line 1329, Address: 0x102a6c0, Func Offset: 0x50
	// Line 1330, Address: 0x102a6cc, Func Offset: 0x5c
	// Func End, Address: 0x102a6dc, Func Offset: 0x6c
}

// 
// Start address: 0x102a6e0
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1345, Address: 0x102a6e0, Func Offset: 0
	// Line 1346, Address: 0x102a6ec, Func Offset: 0xc
	// Line 1347, Address: 0x102a714, Func Offset: 0x34
	// Line 1349, Address: 0x102a72c, Func Offset: 0x4c
	// Line 1350, Address: 0x102a738, Func Offset: 0x58
	// Line 1351, Address: 0x102a740, Func Offset: 0x60
	// Line 1352, Address: 0x102a74c, Func Offset: 0x6c
	// Line 1353, Address: 0x102a760, Func Offset: 0x80
	// Line 1354, Address: 0x102a774, Func Offset: 0x94
	// Line 1358, Address: 0x102a788, Func Offset: 0xa8
	// Line 1359, Address: 0x102a794, Func Offset: 0xb4
	// Func End, Address: 0x102a7a4, Func Offset: 0xc4
}

// 
// Start address: 0x102a7b0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1376, Address: 0x102a7b0, Func Offset: 0
	// Line 1380, Address: 0x102a7c0, Func Offset: 0x10
	// Line 1381, Address: 0x102a7d0, Func Offset: 0x20
	// Line 1382, Address: 0x102a7f4, Func Offset: 0x44
	// Line 1383, Address: 0x102a808, Func Offset: 0x58
	// Line 1384, Address: 0x102a820, Func Offset: 0x70
	// Line 1386, Address: 0x102a82c, Func Offset: 0x7c
	// Line 1388, Address: 0x102a838, Func Offset: 0x88
	// Line 1389, Address: 0x102a874, Func Offset: 0xc4
	// Line 1390, Address: 0x102a87c, Func Offset: 0xcc
	// Line 1391, Address: 0x102a890, Func Offset: 0xe0
	// Line 1392, Address: 0x102a8bc, Func Offset: 0x10c
	// Line 1393, Address: 0x102a8cc, Func Offset: 0x11c
	// Line 1394, Address: 0x102a8e0, Func Offset: 0x130
	// Line 1395, Address: 0x102a8e8, Func Offset: 0x138
	// Line 1400, Address: 0x102a8fc, Func Offset: 0x14c
	// Func End, Address: 0x102a910, Func Offset: 0x160
}

// 
// Start address: 0x102a910
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
	// Line 1418, Address: 0x102a910, Func Offset: 0
	// Line 1427, Address: 0x102a930, Func Offset: 0x20
	// Line 1428, Address: 0x102a934, Func Offset: 0x24
	// Line 1429, Address: 0x102a940, Func Offset: 0x30
	// Line 1430, Address: 0x102a94c, Func Offset: 0x3c
	// Line 1431, Address: 0x102a954, Func Offset: 0x44
	// Line 1432, Address: 0x102a95c, Func Offset: 0x4c
	// Line 1434, Address: 0x102a970, Func Offset: 0x60
	// Line 1435, Address: 0x102a974, Func Offset: 0x64
	// Line 1436, Address: 0x102a980, Func Offset: 0x70
	// Line 1437, Address: 0x102a98c, Func Offset: 0x7c
	// Line 1438, Address: 0x102a994, Func Offset: 0x84
	// Line 1440, Address: 0x102a99c, Func Offset: 0x8c
	// Line 1441, Address: 0x102a9a8, Func Offset: 0x98
	// Line 1442, Address: 0x102a9bc, Func Offset: 0xac
	// Line 1444, Address: 0x102a9c8, Func Offset: 0xb8
	// Line 1445, Address: 0x102a9d0, Func Offset: 0xc0
	// Line 1447, Address: 0x102a9d8, Func Offset: 0xc8
	// Line 1449, Address: 0x102a9f8, Func Offset: 0xe8
	// Line 1455, Address: 0x102aa24, Func Offset: 0x114
	// Line 1456, Address: 0x102aa38, Func Offset: 0x128
	// Line 1458, Address: 0x102aa44, Func Offset: 0x134
	// Line 1459, Address: 0x102aa4c, Func Offset: 0x13c
	// Line 1460, Address: 0x102aa54, Func Offset: 0x144
	// Line 1462, Address: 0x102aa74, Func Offset: 0x164
	// Line 1468, Address: 0x102aaa0, Func Offset: 0x190
	// Line 1469, Address: 0x102aab4, Func Offset: 0x1a4
	// Line 1471, Address: 0x102aac0, Func Offset: 0x1b0
	// Line 1472, Address: 0x102aac8, Func Offset: 0x1b8
	// Line 1473, Address: 0x102aad0, Func Offset: 0x1c0
	// Line 1475, Address: 0x102aaf0, Func Offset: 0x1e0
	// Line 1481, Address: 0x102ab1c, Func Offset: 0x20c
	// Line 1482, Address: 0x102ab30, Func Offset: 0x220
	// Line 1484, Address: 0x102ab3c, Func Offset: 0x22c
	// Line 1485, Address: 0x102ab44, Func Offset: 0x234
	// Line 1486, Address: 0x102ab4c, Func Offset: 0x23c
	// Line 1488, Address: 0x102ab6c, Func Offset: 0x25c
	// Line 1497, Address: 0x102ab98, Func Offset: 0x288
	// Func End, Address: 0x102abc0, Func Offset: 0x2b0
}

// 
// Start address: 0x102abc0
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
	// Line 1514, Address: 0x102abc0, Func Offset: 0
	// Line 1525, Address: 0x102abec, Func Offset: 0x2c
	// Line 1527, Address: 0x102abf4, Func Offset: 0x34
	// Line 1528, Address: 0x102ac0c, Func Offset: 0x4c
	// Line 1529, Address: 0x102ac20, Func Offset: 0x60
	// Line 1531, Address: 0x102ac28, Func Offset: 0x68
	// Line 1533, Address: 0x102ac3c, Func Offset: 0x7c
	// Line 1534, Address: 0x102ac54, Func Offset: 0x94
	// Line 1535, Address: 0x102ac68, Func Offset: 0xa8
	// Line 1536, Address: 0x102ac70, Func Offset: 0xb0
	// Line 1538, Address: 0x102ac78, Func Offset: 0xb8
	// Line 1539, Address: 0x102ac8c, Func Offset: 0xcc
	// Line 1544, Address: 0x102ac94, Func Offset: 0xd4
	// Line 1545, Address: 0x102ace4, Func Offset: 0x124
	// Line 1546, Address: 0x102acec, Func Offset: 0x12c
	// Line 1548, Address: 0x102ad04, Func Offset: 0x144
	// Line 1549, Address: 0x102ad2c, Func Offset: 0x16c
	// Line 1550, Address: 0x102ad34, Func Offset: 0x174
	// Line 1557, Address: 0x102ad54, Func Offset: 0x194
	// Line 1558, Address: 0x102ad74, Func Offset: 0x1b4
	// Line 1559, Address: 0x102ad98, Func Offset: 0x1d8
	// Line 1560, Address: 0x102ada4, Func Offset: 0x1e4
	// Line 1561, Address: 0x102adac, Func Offset: 0x1ec
	// Line 1563, Address: 0x102adcc, Func Offset: 0x20c
	// Line 1567, Address: 0x102adf8, Func Offset: 0x238
	// Line 1570, Address: 0x102ae00, Func Offset: 0x240
	// Line 1571, Address: 0x102ae04, Func Offset: 0x244
	// Line 1575, Address: 0x102ae24, Func Offset: 0x264
	// Line 1582, Address: 0x102ae50, Func Offset: 0x290
	// Line 1589, Address: 0x102ae64, Func Offset: 0x2a4
	// Line 1590, Address: 0x102ae6c, Func Offset: 0x2ac
	// Line 1591, Address: 0x102ae74, Func Offset: 0x2b4
	// Line 1592, Address: 0x102ae8c, Func Offset: 0x2cc
	// Line 1593, Address: 0x102aeac, Func Offset: 0x2ec
	// Line 1597, Address: 0x102aeb4, Func Offset: 0x2f4
	// Line 1599, Address: 0x102aee4, Func Offset: 0x324
	// Line 1600, Address: 0x102aef0, Func Offset: 0x330
	// Line 1604, Address: 0x102af00, Func Offset: 0x340
	// Line 1605, Address: 0x102af0c, Func Offset: 0x34c
	// Line 1606, Address: 0x102af24, Func Offset: 0x364
	// Line 1607, Address: 0x102af44, Func Offset: 0x384
	// Line 1608, Address: 0x102af4c, Func Offset: 0x38c
	// Line 1611, Address: 0x102af6c, Func Offset: 0x3ac
	// Line 1612, Address: 0x102afa4, Func Offset: 0x3e4
	// Line 1613, Address: 0x102afc4, Func Offset: 0x404
	// Line 1615, Address: 0x102afe8, Func Offset: 0x428
	// Line 1618, Address: 0x102b00c, Func Offset: 0x44c
	// Line 1620, Address: 0x102b02c, Func Offset: 0x46c
	// Line 1622, Address: 0x102b040, Func Offset: 0x480
	// Line 1623, Address: 0x102b04c, Func Offset: 0x48c
	// Line 1624, Address: 0x102b05c, Func Offset: 0x49c
	// Line 1626, Address: 0x102b064, Func Offset: 0x4a4
	// Func End, Address: 0x102b08c, Func Offset: 0x4cc
}

// 
// Start address: 0x102b090
void scrollwrtc()
{
	// Line 1632, Address: 0x102b090, Func Offset: 0
	// Func End, Address: 0x102b098, Func Offset: 0x8
}

// 
// Start address: 0x102b0a0
void scrollwrtz()
{
	// Line 1637, Address: 0x102b0a0, Func Offset: 0
	// Func End, Address: 0x102b0a8, Func Offset: 0x8
}

// 
// Start address: 0x102b0b0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1655, Address: 0x102b0b0, Func Offset: 0
	// Line 1668, Address: 0x102b0d8, Func Offset: 0x28
	// Line 1671, Address: 0x102b0f8, Func Offset: 0x48
	// Line 1672, Address: 0x102b10c, Func Offset: 0x5c
	// Line 1673, Address: 0x102b120, Func Offset: 0x70
	// Line 1674, Address: 0x102b134, Func Offset: 0x84
	// Line 1676, Address: 0x102b148, Func Offset: 0x98
	// Line 1677, Address: 0x102b154, Func Offset: 0xa4
	// Line 1678, Address: 0x102b168, Func Offset: 0xb8
	// Func End, Address: 0x102b178, Func Offset: 0xc8
}

// 
// Start address: 0x102b180
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1682, Address: 0x102b180, Func Offset: 0
	// Line 1686, Address: 0x102b1a8, Func Offset: 0x28
	// Line 1689, Address: 0x102b1c8, Func Offset: 0x48
	// Line 1690, Address: 0x102b1dc, Func Offset: 0x5c
	// Line 1691, Address: 0x102b1f0, Func Offset: 0x70
	// Line 1692, Address: 0x102b204, Func Offset: 0x84
	// Line 1694, Address: 0x102b218, Func Offset: 0x98
	// Line 1695, Address: 0x102b224, Func Offset: 0xa4
	// Line 1696, Address: 0x102b238, Func Offset: 0xb8
	// Func End, Address: 0x102b248, Func Offset: 0xc8
}

// 
// Start address: 0x102b250
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1716, Address: 0x102b250, Func Offset: 0
	// Line 1720, Address: 0x102b278, Func Offset: 0x28
	// Line 1723, Address: 0x102b298, Func Offset: 0x48
	// Line 1724, Address: 0x102b2ac, Func Offset: 0x5c
	// Line 1725, Address: 0x102b2bc, Func Offset: 0x6c
	// Line 1726, Address: 0x102b2d0, Func Offset: 0x80
	// Line 1728, Address: 0x102b2e0, Func Offset: 0x90
	// Line 1729, Address: 0x102b2ec, Func Offset: 0x9c
	// Line 1730, Address: 0x102b300, Func Offset: 0xb0
	// Func End, Address: 0x102b310, Func Offset: 0xc0
}

// 
// Start address: 0x102b310
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
	// Line 1749, Address: 0x102b310, Func Offset: 0
	// Line 1755, Address: 0x102b344, Func Offset: 0x34
	// Line 1757, Address: 0x102b354, Func Offset: 0x44
	// Line 1758, Address: 0x102b358, Func Offset: 0x48
	// Line 1759, Address: 0x102b360, Func Offset: 0x50
	// Line 1761, Address: 0x102b370, Func Offset: 0x60
	// Line 1763, Address: 0x102b374, Func Offset: 0x64
	// Line 1764, Address: 0x102b37c, Func Offset: 0x6c
	// Line 1767, Address: 0x102b384, Func Offset: 0x74
	// Line 1768, Address: 0x102b38c, Func Offset: 0x7c
	// Line 1769, Address: 0x102b398, Func Offset: 0x88
	// Line 1771, Address: 0x102b3a4, Func Offset: 0x94
	// Line 1772, Address: 0x102b3ac, Func Offset: 0x9c
	// Line 1773, Address: 0x102b3b4, Func Offset: 0xa4
	// Line 1774, Address: 0x102b3bc, Func Offset: 0xac
	// Line 1776, Address: 0x102b3c8, Func Offset: 0xb8
	// Line 1777, Address: 0x102b3d0, Func Offset: 0xc0
	// Line 1778, Address: 0x102b3d8, Func Offset: 0xc8
	// Line 1779, Address: 0x102b3e0, Func Offset: 0xd0
	// Line 1781, Address: 0x102b3ec, Func Offset: 0xdc
	// Line 1782, Address: 0x102b3f4, Func Offset: 0xe4
	// Line 1783, Address: 0x102b3fc, Func Offset: 0xec
	// Line 1786, Address: 0x102b404, Func Offset: 0xf4
	// Line 1787, Address: 0x102b40c, Func Offset: 0xfc
	// Line 1790, Address: 0x102b414, Func Offset: 0x104
	// Line 1791, Address: 0x102b458, Func Offset: 0x148
	// Line 1792, Address: 0x102b49c, Func Offset: 0x18c
	// Line 1793, Address: 0x102b4e0, Func Offset: 0x1d0
	// Line 1795, Address: 0x102b524, Func Offset: 0x214
	// Func End, Address: 0x102b554, Func Offset: 0x244
}

// 
// Start address: 0x102b560
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1813, Address: 0x102b560, Func Offset: 0
	// Line 1814, Address: 0x102b580, Func Offset: 0x20
	// Line 1815, Address: 0x102b5a0, Func Offset: 0x40
	// Func End, Address: 0x102b5b0, Func Offset: 0x50
}

// 
// Start address: 0x102b5b0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1817, Address: 0x102b5b0, Func Offset: 0
	// Line 1818, Address: 0x102b5d0, Func Offset: 0x20
	// Line 1819, Address: 0x102b5d4, Func Offset: 0x24
	// Line 1820, Address: 0x102b5f4, Func Offset: 0x44
	// Func End, Address: 0x102b604, Func Offset: 0x54
}

// 
// Start address: 0x102b610
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1827, Address: 0x102b610, Func Offset: 0
	// Line 1833, Address: 0x102b640, Func Offset: 0x30
	// Line 1834, Address: 0x102b650, Func Offset: 0x40
	// Line 1840, Address: 0x102b660, Func Offset: 0x50
	// Line 1841, Address: 0x102b67c, Func Offset: 0x6c
	// Line 1842, Address: 0x102b680, Func Offset: 0x70
	// Line 1843, Address: 0x102b69c, Func Offset: 0x8c
	// Line 1844, Address: 0x102b6a0, Func Offset: 0x90
	// Line 1845, Address: 0x102b6c0, Func Offset: 0xb0
	// Line 1846, Address: 0x102b6c8, Func Offset: 0xb8
	// Line 1847, Address: 0x102b6e8, Func Offset: 0xd8
	// Line 1848, Address: 0x102b6f0, Func Offset: 0xe0
	// Line 1849, Address: 0x102b738, Func Offset: 0x128
	// Line 1851, Address: 0x102b744, Func Offset: 0x134
	// Line 1853, Address: 0x102b760, Func Offset: 0x150
	// Line 1858, Address: 0x102b768, Func Offset: 0x158
	// Line 1859, Address: 0x102b774, Func Offset: 0x164
	// Line 1862, Address: 0x102b780, Func Offset: 0x170
	// Line 1863, Address: 0x102b788, Func Offset: 0x178
	// Line 1864, Address: 0x102b7a8, Func Offset: 0x198
	// Line 1865, Address: 0x102b7c4, Func Offset: 0x1b4
	// Line 1866, Address: 0x102b7cc, Func Offset: 0x1bc
	// Line 1867, Address: 0x102b7ec, Func Offset: 0x1dc
	// Line 1869, Address: 0x102b808, Func Offset: 0x1f8
	// Line 1870, Address: 0x102b810, Func Offset: 0x200
	// Line 1871, Address: 0x102b818, Func Offset: 0x208
	// Line 1872, Address: 0x102b824, Func Offset: 0x214
	// Line 1873, Address: 0x102b83c, Func Offset: 0x22c
	// Line 1875, Address: 0x102b84c, Func Offset: 0x23c
	// Line 1878, Address: 0x102b858, Func Offset: 0x248
	// Line 1879, Address: 0x102b860, Func Offset: 0x250
	// Line 1880, Address: 0x102b864, Func Offset: 0x254
	// Func End, Address: 0x102b884, Func Offset: 0x274
}

// 
// Start address: 0x102b890
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1900, Address: 0x102b890, Func Offset: 0
	// Line 1908, Address: 0x102b8b8, Func Offset: 0x28
	// Line 1909, Address: 0x102b91c, Func Offset: 0x8c
	// Line 1915, Address: 0x102b924, Func Offset: 0x94
	// Line 1916, Address: 0x102b92c, Func Offset: 0x9c
	// Line 1917, Address: 0x102b94c, Func Offset: 0xbc
	// Line 1918, Address: 0x102b968, Func Offset: 0xd8
	// Line 1919, Address: 0x102b970, Func Offset: 0xe0
	// Line 1920, Address: 0x102b990, Func Offset: 0x100
	// Line 1923, Address: 0x102b9ac, Func Offset: 0x11c
	// Line 1924, Address: 0x102b9b4, Func Offset: 0x124
	// Line 1925, Address: 0x102b9bc, Func Offset: 0x12c
	// Line 1926, Address: 0x102b9c8, Func Offset: 0x138
	// Line 1927, Address: 0x102b9e0, Func Offset: 0x150
	// Line 1928, Address: 0x102b9e8, Func Offset: 0x158
	// Line 1933, Address: 0x102b9f8, Func Offset: 0x168
	// Line 1936, Address: 0x102ba04, Func Offset: 0x174
	// Line 1937, Address: 0x102ba0c, Func Offset: 0x17c
	// Line 1938, Address: 0x102ba10, Func Offset: 0x180
	// Func End, Address: 0x102ba2c, Func Offset: 0x19c
}

// 
// Start address: 0x102ba30
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1952, Address: 0x102ba30, Func Offset: 0
	// Line 1959, Address: 0x102ba4c, Func Offset: 0x1c
	// Line 1960, Address: 0x102ba50, Func Offset: 0x20
	// Line 1961, Address: 0x102ba58, Func Offset: 0x28
	// Line 1962, Address: 0x102ba7c, Func Offset: 0x4c
	// Line 1963, Address: 0x102ba88, Func Offset: 0x58
	// Line 1964, Address: 0x102baa0, Func Offset: 0x70
	// Line 1965, Address: 0x102bab4, Func Offset: 0x84
	// Line 1970, Address: 0x102bacc, Func Offset: 0x9c
	// Func End, Address: 0x102bae4, Func Offset: 0xb4
}

// 
// Start address: 0x102baf0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1984, Address: 0x102baf0, Func Offset: 0
	// Line 1985, Address: 0x102bafc, Func Offset: 0xc
	// Line 1986, Address: 0x102bb28, Func Offset: 0x38
	// Line 1987, Address: 0x102bb74, Func Offset: 0x84
	// Line 1988, Address: 0x102bba0, Func Offset: 0xb0
	// Line 1990, Address: 0x102bbec, Func Offset: 0xfc
	// Line 1996, Address: 0x102bbf8, Func Offset: 0x108
	// Line 1997, Address: 0x102bbfc, Func Offset: 0x10c
	// Func End, Address: 0x102bc08, Func Offset: 0x118
}

// 
// Start address: 0x102bc10
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2014, Address: 0x102bc10, Func Offset: 0
	// Line 2015, Address: 0x102bc2c, Func Offset: 0x1c
	// Line 2017, Address: 0x102bc48, Func Offset: 0x38
	// Func End, Address: 0x102bc58, Func Offset: 0x48
}

// 
// Start address: 0x102bc60
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2019, Address: 0x102bc60, Func Offset: 0
	// Line 2020, Address: 0x102bc7c, Func Offset: 0x1c
	// Line 2021, Address: 0x102bc80, Func Offset: 0x20
	// Line 2023, Address: 0x102bc9c, Func Offset: 0x3c
	// Func End, Address: 0x102bcac, Func Offset: 0x4c
}

// 
// Start address: 0x102bcb0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2025, Address: 0x102bcb0, Func Offset: 0
	// Line 2026, Address: 0x102bcc4, Func Offset: 0x14
	// Line 2028, Address: 0x102bce0, Func Offset: 0x30
	// Func End, Address: 0x102bcf0, Func Offset: 0x40
}

// 
// Start address: 0x102bcf0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2030, Address: 0x102bcf0, Func Offset: 0
	// Line 2031, Address: 0x102bd0c, Func Offset: 0x1c
	// Line 2033, Address: 0x102bd28, Func Offset: 0x38
	// Func End, Address: 0x102bd38, Func Offset: 0x48
}

// 
// Start address: 0x102bd40
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2035, Address: 0x102bd40, Func Offset: 0
	// Line 2036, Address: 0x102bd58, Func Offset: 0x18
	// Line 2037, Address: 0x102bd68, Func Offset: 0x28
	// Line 2038, Address: 0x102bd78, Func Offset: 0x38
	// Line 2039, Address: 0x102bd84, Func Offset: 0x44
	// Line 2041, Address: 0x102bd90, Func Offset: 0x50
	// Line 2042, Address: 0x102bdbc, Func Offset: 0x7c
	// Line 2045, Address: 0x102bde8, Func Offset: 0xa8
	// Func End, Address: 0x102bdf4, Func Offset: 0xb4
}

// 
// Start address: 0x102be00
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2061, Address: 0x102be00, Func Offset: 0
	// Line 2066, Address: 0x102be18, Func Offset: 0x18
	// Line 2067, Address: 0x102be24, Func Offset: 0x24
	// Line 2068, Address: 0x102be30, Func Offset: 0x30
	// Line 2069, Address: 0x102be38, Func Offset: 0x38
	// Line 2070, Address: 0x102be3c, Func Offset: 0x3c
	// Line 2071, Address: 0x102be54, Func Offset: 0x54
	// Line 2072, Address: 0x102be5c, Func Offset: 0x5c
	// Func End, Address: 0x102be7c, Func Offset: 0x7c
}

// 
// Start address: 0x102be80
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2075, Address: 0x102be80, Func Offset: 0
	// Line 2080, Address: 0x102be98, Func Offset: 0x18
	// Line 2081, Address: 0x102bea4, Func Offset: 0x24
	// Line 2082, Address: 0x102beb0, Func Offset: 0x30
	// Line 2083, Address: 0x102beb8, Func Offset: 0x38
	// Line 2084, Address: 0x102bebc, Func Offset: 0x3c
	// Line 2086, Address: 0x102becc, Func Offset: 0x4c
	// Func End, Address: 0x102beec, Func Offset: 0x6c
}

// 
// Start address: 0x102bef0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 2089, Address: 0x102bef0, Func Offset: 0
	// Line 2090, Address: 0x102bf08, Func Offset: 0x18
	// Line 2091, Address: 0x102bf28, Func Offset: 0x38
	// Func End, Address: 0x102bf38, Func Offset: 0x48
}

// 
// Start address: 0x102bf40
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 2096, Address: 0x102bf40, Func Offset: 0
	// Line 2100, Address: 0x102bf60, Func Offset: 0x20
	// Line 2103, Address: 0x102bf7c, Func Offset: 0x3c
	// Line 2107, Address: 0x102bfa4, Func Offset: 0x64
	// Line 2108, Address: 0x102bfb0, Func Offset: 0x70
	// Line 2110, Address: 0x102bfd8, Func Offset: 0x98
	// Func End, Address: 0x102bfe8, Func Offset: 0xa8
}

// 
// Start address: 0x102bff0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 2116, Address: 0x102bff0, Func Offset: 0
	// Line 2119, Address: 0x102c00c, Func Offset: 0x1c
	// Line 2120, Address: 0x102c014, Func Offset: 0x24
	// Line 2123, Address: 0x102c01c, Func Offset: 0x2c
	// Line 2125, Address: 0x102c040, Func Offset: 0x50
	// Line 2126, Address: 0x102c058, Func Offset: 0x68
	// Line 2127, Address: 0x102c078, Func Offset: 0x88
	// Line 2128, Address: 0x102c080, Func Offset: 0x90
	// Line 2130, Address: 0x102c0a0, Func Offset: 0xb0
	// Line 2131, Address: 0x102c0a8, Func Offset: 0xb8
	// Line 2132, Address: 0x102c0cc, Func Offset: 0xdc
	// Func End, Address: 0x102c0e8, Func Offset: 0xf8
}

// 
// Start address: 0x102c0f0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2158, Address: 0x102c0f0, Func Offset: 0
	// Line 2163, Address: 0x102c118, Func Offset: 0x28
	// Line 2165, Address: 0x102c14c, Func Offset: 0x5c
	// Line 2167, Address: 0x102c174, Func Offset: 0x84
	// Line 2168, Address: 0x102c198, Func Offset: 0xa8
	// Line 2169, Address: 0x102c1c0, Func Offset: 0xd0
	// Line 2170, Address: 0x102c1cc, Func Offset: 0xdc
	// Line 2171, Address: 0x102c1d4, Func Offset: 0xe4
	// Line 2174, Address: 0x102c1f0, Func Offset: 0x100
	// Line 2178, Address: 0x102c218, Func Offset: 0x128
	// Line 2181, Address: 0x102c220, Func Offset: 0x130
	// Line 2182, Address: 0x102c224, Func Offset: 0x134
	// Line 2186, Address: 0x102c240, Func Offset: 0x150
	// Line 2193, Address: 0x102c268, Func Offset: 0x178
	// Func End, Address: 0x102c284, Func Offset: 0x194
}

// 
// Start address: 0x102c290
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
	// Line 2204, Address: 0x102c290, Func Offset: 0
	// Line 2205, Address: 0x102c2b0, Func Offset: 0x20
	// Line 2210, Address: 0x102c2dc, Func Offset: 0x4c
	// Line 2216, Address: 0x102c300, Func Offset: 0x70
	// Line 2217, Address: 0x102c304, Func Offset: 0x74
	// Line 2219, Address: 0x102c308, Func Offset: 0x78
	// Line 2220, Address: 0x102c310, Func Offset: 0x80
	// Line 2223, Address: 0x102c334, Func Offset: 0xa4
	// Line 2224, Address: 0x102c338, Func Offset: 0xa8
	// Line 2227, Address: 0x102c35c, Func Offset: 0xcc
	// Line 2228, Address: 0x102c360, Func Offset: 0xd0
	// Line 2229, Address: 0x102c368, Func Offset: 0xd8
	// Line 2230, Address: 0x102c36c, Func Offset: 0xdc
	// Line 2232, Address: 0x102c370, Func Offset: 0xe0
	// Line 2233, Address: 0x102c378, Func Offset: 0xe8
	// Line 2234, Address: 0x102c398, Func Offset: 0x108
	// Line 2238, Address: 0x102c3a4, Func Offset: 0x114
	// Line 2239, Address: 0x102c3b8, Func Offset: 0x128
	// Line 2242, Address: 0x102c3cc, Func Offset: 0x13c
	// Line 2243, Address: 0x102c3ec, Func Offset: 0x15c
	// Func End, Address: 0x102c414, Func Offset: 0x184
}

// 
// Start address: 0x102c420
void mapset()
{
	// Line 2248, Address: 0x102c420, Func Offset: 0
	// Func End, Address: 0x102c428, Func Offset: 0x8
}

// 
// Start address: 0x102c430
void divdevset()
{
	// Line 2252, Address: 0x102c430, Func Offset: 0
	// Func End, Address: 0x102c438, Func Offset: 0x8
}

// 
// Start address: 0x102c440
void enecginit()
{
	// Line 2256, Address: 0x102c440, Func Offset: 0
	// Func End, Address: 0x102c448, Func Offset: 0x8
}

// 
// Start address: 0x102c450
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2272, Address: 0x102c450, Func Offset: 0
	// Line 2276, Address: 0x102c470, Func Offset: 0x20
	// Line 2277, Address: 0x102c488, Func Offset: 0x38
	// Line 2278, Address: 0x102c498, Func Offset: 0x48
	// Line 2279, Address: 0x102c4a8, Func Offset: 0x58
	// Line 2280, Address: 0x102c4b0, Func Offset: 0x60
	// Line 2282, Address: 0x102c4b4, Func Offset: 0x64
	// Line 2283, Address: 0x102c4c0, Func Offset: 0x70
	// Line 2284, Address: 0x102c4d8, Func Offset: 0x88
	// Line 2286, Address: 0x102c4e4, Func Offset: 0x94
	// Line 2287, Address: 0x102c4f0, Func Offset: 0xa0
	// Line 2288, Address: 0x102c4fc, Func Offset: 0xac
	// Func End, Address: 0x102c51c, Func Offset: 0xcc
}

