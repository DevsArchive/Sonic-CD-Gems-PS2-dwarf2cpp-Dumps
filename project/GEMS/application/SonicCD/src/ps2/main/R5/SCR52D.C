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
typedef short type_27[6];

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
// Start address: 0x1028870
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
	// Line 152, Address: 0x1028870, Func Offset: 0
	// Line 153, Address: 0x1028890, Func Offset: 0x20
	// Line 157, Address: 0x10288c4, Func Offset: 0x54
	// Line 163, Address: 0x10288e8, Func Offset: 0x78
	// Line 167, Address: 0x10288f8, Func Offset: 0x88
	// Line 168, Address: 0x10288fc, Func Offset: 0x8c
	// Line 170, Address: 0x1028900, Func Offset: 0x90
	// Line 171, Address: 0x1028908, Func Offset: 0x98
	// Line 174, Address: 0x102892c, Func Offset: 0xbc
	// Line 175, Address: 0x1028930, Func Offset: 0xc0
	// Line 178, Address: 0x1028954, Func Offset: 0xe4
	// Line 183, Address: 0x1028968, Func Offset: 0xf8
	// Line 186, Address: 0x1028974, Func Offset: 0x104
	// Line 187, Address: 0x1028978, Func Offset: 0x108
	// Line 188, Address: 0x1028984, Func Offset: 0x114
	// Line 189, Address: 0x1028988, Func Offset: 0x118
	// Line 190, Address: 0x102898c, Func Offset: 0x11c
	// Line 191, Address: 0x1028994, Func Offset: 0x124
	// Line 192, Address: 0x1028998, Func Offset: 0x128
	// Line 194, Address: 0x102899c, Func Offset: 0x12c
	// Line 195, Address: 0x10289a4, Func Offset: 0x134
	// Line 196, Address: 0x10289c4, Func Offset: 0x154
	// Line 198, Address: 0x10289d0, Func Offset: 0x160
	// Line 199, Address: 0x10289f0, Func Offset: 0x180
	// Line 201, Address: 0x1028a10, Func Offset: 0x1a0
	// Line 202, Address: 0x1028a48, Func Offset: 0x1d8
	// Line 203, Address: 0x1028a60, Func Offset: 0x1f0
	// Line 204, Address: 0x1028a6c, Func Offset: 0x1fc
	// Func End, Address: 0x1028a94, Func Offset: 0x224
}

// 
// Start address: 0x1028aa0
_anon2* main_chk()
{
	// Line 218, Address: 0x1028aa0, Func Offset: 0
	// Line 219, Address: 0x1028ab4, Func Offset: 0x14
	// Line 221, Address: 0x1028ac4, Func Offset: 0x24
	// Line 223, Address: 0x1028acc, Func Offset: 0x2c
	// Func End, Address: 0x1028ad4, Func Offset: 0x34
}

// 
// Start address: 0x1028ae0
void scr_set()
{
	short* pScrTbl;
	// Line 261, Address: 0x1028ae0, Func Offset: 0
	// Line 264, Address: 0x1028aec, Func Offset: 0xc
	// Line 265, Address: 0x1028b00, Func Offset: 0x20
	// Line 266, Address: 0x1028b14, Func Offset: 0x34
	// Line 268, Address: 0x1028b1c, Func Offset: 0x3c
	// Line 269, Address: 0x1028b24, Func Offset: 0x44
	// Line 270, Address: 0x1028b30, Func Offset: 0x50
	// Line 271, Address: 0x1028b34, Func Offset: 0x54
	// Line 272, Address: 0x1028b48, Func Offset: 0x68
	// Line 273, Address: 0x1028b4c, Func Offset: 0x6c
	// Line 274, Address: 0x1028b60, Func Offset: 0x80
	// Line 275, Address: 0x1028b64, Func Offset: 0x84
	// Line 276, Address: 0x1028b78, Func Offset: 0x98
	// Line 277, Address: 0x1028b7c, Func Offset: 0x9c
	// Line 278, Address: 0x1028b90, Func Offset: 0xb0
	// Line 279, Address: 0x1028bb0, Func Offset: 0xd0
	// Line 280, Address: 0x1028bb4, Func Offset: 0xd4
	// Line 281, Address: 0x1028bc0, Func Offset: 0xe0
	// Line 283, Address: 0x1028bcc, Func Offset: 0xec
	// Line 284, Address: 0x1028bd8, Func Offset: 0xf8
	// Line 286, Address: 0x1028be4, Func Offset: 0x104
	// Line 287, Address: 0x1028bec, Func Offset: 0x10c
	// Func End, Address: 0x1028c00, Func Offset: 0x120
}

// 
// Start address: 0x1028c00
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 326, Address: 0x1028c00, Func Offset: 0
	// Line 329, Address: 0x1028c14, Func Offset: 0x14
	// Line 330, Address: 0x1028c24, Func Offset: 0x24
	// Line 331, Address: 0x1028c2c, Func Offset: 0x2c
	// Line 333, Address: 0x1028c3c, Func Offset: 0x3c
	// Line 334, Address: 0x1028c54, Func Offset: 0x54
	// Line 335, Address: 0x1028c64, Func Offset: 0x64
	// Line 336, Address: 0x1028c6c, Func Offset: 0x6c
	// Line 338, Address: 0x1028c70, Func Offset: 0x70
	// Line 340, Address: 0x1028c78, Func Offset: 0x78
	// Line 343, Address: 0x1028c80, Func Offset: 0x80
	// Line 344, Address: 0x1028c94, Func Offset: 0x94
	// Line 348, Address: 0x1028ca8, Func Offset: 0xa8
	// Line 349, Address: 0x1028cbc, Func Offset: 0xbc
	// Line 350, Address: 0x1028cc8, Func Offset: 0xc8
	// Line 351, Address: 0x1028cd0, Func Offset: 0xd0
	// Line 355, Address: 0x1028cd4, Func Offset: 0xd4
	// Line 356, Address: 0x1028cf8, Func Offset: 0xf8
	// Line 360, Address: 0x1028d08, Func Offset: 0x108
	// Line 362, Address: 0x1028d10, Func Offset: 0x110
	// Line 363, Address: 0x1028d24, Func Offset: 0x124
	// Line 364, Address: 0x1028d30, Func Offset: 0x130
	// Line 365, Address: 0x1028d38, Func Offset: 0x138
	// Line 369, Address: 0x1028d3c, Func Offset: 0x13c
	// Line 370, Address: 0x1028d60, Func Offset: 0x160
	// Line 374, Address: 0x1028d70, Func Offset: 0x170
	// Line 376, Address: 0x1028d78, Func Offset: 0x178
	// Line 379, Address: 0x1028d88, Func Offset: 0x188
	// Line 380, Address: 0x1028d98, Func Offset: 0x198
	// Line 381, Address: 0x1028da8, Func Offset: 0x1a8
	// Line 382, Address: 0x1028db8, Func Offset: 0x1b8
	// Line 383, Address: 0x1028dc8, Func Offset: 0x1c8
	// Func End, Address: 0x1028de4, Func Offset: 0x1e4
}

// 
// Start address: 0x1028df0
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 404, Address: 0x1028df0, Func Offset: 0
	// Line 407, Address: 0x1028dfc, Func Offset: 0xc
	// Line 408, Address: 0x1028e04, Func Offset: 0x14
	// Line 410, Address: 0x1028e08, Func Offset: 0x18
	// Line 411, Address: 0x1028e14, Func Offset: 0x24
	// Line 413, Address: 0x1028e30, Func Offset: 0x40
	// Line 414, Address: 0x1028e3c, Func Offset: 0x4c
	// Line 415, Address: 0x1028e48, Func Offset: 0x58
	// Line 417, Address: 0x1028e54, Func Offset: 0x64
	// Line 418, Address: 0x1028e70, Func Offset: 0x80
	// Line 420, Address: 0x1028e7c, Func Offset: 0x8c
	// Line 421, Address: 0x1028e98, Func Offset: 0xa8
	// Line 423, Address: 0x1028ea4, Func Offset: 0xb4
	// Line 424, Address: 0x1028eb0, Func Offset: 0xc0
	// Line 425, Address: 0x1028ebc, Func Offset: 0xcc
	// Func End, Address: 0x1028ec8, Func Offset: 0xd8
}

// 
// Start address: 0x1028ed0
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
	// Line 441, Address: 0x1028ed0, Func Offset: 0
	// Line 453, Address: 0x1028ef4, Func Offset: 0x24
	// Line 458, Address: 0x1028f04, Func Offset: 0x34
	// Line 460, Address: 0x1028f30, Func Offset: 0x60
	// Line 462, Address: 0x1028f38, Func Offset: 0x68
	// Line 463, Address: 0x1028f40, Func Offset: 0x70
	// Line 465, Address: 0x1028f48, Func Offset: 0x78
	// Line 466, Address: 0x1028f58, Func Offset: 0x88
	// Line 469, Address: 0x1028f68, Func Offset: 0x98
	// Line 470, Address: 0x1028f7c, Func Offset: 0xac
	// Line 472, Address: 0x1028f8c, Func Offset: 0xbc
	// Line 473, Address: 0x1028fa0, Func Offset: 0xd0
	// Line 475, Address: 0x1028fb0, Func Offset: 0xe0
	// Line 476, Address: 0x1028fc4, Func Offset: 0xf4
	// Line 478, Address: 0x1028fd4, Func Offset: 0x104
	// Line 479, Address: 0x1028fe8, Func Offset: 0x118
	// Line 482, Address: 0x1028ff8, Func Offset: 0x128
	// Line 484, Address: 0x1029008, Func Offset: 0x138
	// Line 485, Address: 0x1029030, Func Offset: 0x160
	// Line 486, Address: 0x1029068, Func Offset: 0x198
	// Line 488, Address: 0x102907c, Func Offset: 0x1ac
	// Line 489, Address: 0x1029088, Func Offset: 0x1b8
	// Line 491, Address: 0x10290a8, Func Offset: 0x1d8
	// Line 493, Address: 0x10290c0, Func Offset: 0x1f0
	// Line 494, Address: 0x10290e0, Func Offset: 0x210
	// Line 496, Address: 0x10290ec, Func Offset: 0x21c
	// Line 497, Address: 0x1029100, Func Offset: 0x230
	// Line 498, Address: 0x1029110, Func Offset: 0x240
	// Line 499, Address: 0x102911c, Func Offset: 0x24c
	// Line 501, Address: 0x1029124, Func Offset: 0x254
	// Line 515, Address: 0x1029130, Func Offset: 0x260
	// Line 516, Address: 0x1029150, Func Offset: 0x280
	// Line 517, Address: 0x102915c, Func Offset: 0x28c
	// Line 518, Address: 0x1029170, Func Offset: 0x2a0
	// Line 522, Address: 0x1029180, Func Offset: 0x2b0
	// Line 523, Address: 0x102918c, Func Offset: 0x2bc
	// Line 524, Address: 0x10291bc, Func Offset: 0x2ec
	// Line 525, Address: 0x10291c8, Func Offset: 0x2f8
	// Line 526, Address: 0x10291d4, Func Offset: 0x304
	// Line 528, Address: 0x10291ec, Func Offset: 0x31c
	// Line 530, Address: 0x10291f8, Func Offset: 0x328
	// Line 531, Address: 0x1029204, Func Offset: 0x334
	// Line 532, Address: 0x1029234, Func Offset: 0x364
	// Line 533, Address: 0x1029250, Func Offset: 0x380
	// Line 534, Address: 0x1029258, Func Offset: 0x388
	// Line 535, Address: 0x1029278, Func Offset: 0x3a8
	// Line 537, Address: 0x1029298, Func Offset: 0x3c8
	// Line 538, Address: 0x10292ac, Func Offset: 0x3dc
	// Line 542, Address: 0x10292b8, Func Offset: 0x3e8
	// Line 543, Address: 0x10292c4, Func Offset: 0x3f4
	// Line 544, Address: 0x10292f4, Func Offset: 0x424
	// Line 550, Address: 0x1029310, Func Offset: 0x440
	// Line 551, Address: 0x1029328, Func Offset: 0x458
	// Line 552, Address: 0x1029334, Func Offset: 0x464
	// Line 553, Address: 0x1029340, Func Offset: 0x470
	// Line 554, Address: 0x1029350, Func Offset: 0x480
	// Line 555, Address: 0x1029380, Func Offset: 0x4b0
	// Line 556, Address: 0x1029384, Func Offset: 0x4b4
	// Line 558, Address: 0x102938c, Func Offset: 0x4bc
	// Line 560, Address: 0x10293b4, Func Offset: 0x4e4
	// Line 561, Address: 0x10293d0, Func Offset: 0x500
	// Line 562, Address: 0x10293dc, Func Offset: 0x50c
	// Line 563, Address: 0x10293e8, Func Offset: 0x518
	// Line 564, Address: 0x102940c, Func Offset: 0x53c
	// Line 565, Address: 0x102941c, Func Offset: 0x54c
	// Line 566, Address: 0x1029440, Func Offset: 0x570
	// Line 570, Address: 0x102945c, Func Offset: 0x58c
	// Func End, Address: 0x1029488, Func Offset: 0x5b8
}

// 
// Start address: 0x1029490
void z51dline(short** ppHscw)
{
	int lHwk;
	_anon1 ldHposwk;
	int i;
	int j;
	short wk;
	char z51dscrtbl[3];
	// Line 584, Address: 0x1029490, Func Offset: 0
	// Line 589, Address: 0x10294a8, Func Offset: 0x18
	// Line 593, Address: 0x10294cc, Func Offset: 0x3c
	// Line 594, Address: 0x10294f0, Func Offset: 0x60
	// Line 595, Address: 0x102950c, Func Offset: 0x7c
	// Line 597, Address: 0x1029510, Func Offset: 0x80
	// Line 598, Address: 0x1029514, Func Offset: 0x84
	// Line 599, Address: 0x1029520, Func Offset: 0x90
	// Line 601, Address: 0x1029534, Func Offset: 0xa4
	// Line 603, Address: 0x1029540, Func Offset: 0xb0
	// Line 605, Address: 0x1029560, Func Offset: 0xd0
	// Line 607, Address: 0x1029578, Func Offset: 0xe8
	// Line 608, Address: 0x102958c, Func Offset: 0xfc
	// Line 609, Address: 0x1029598, Func Offset: 0x108
	// Line 611, Address: 0x10295a4, Func Offset: 0x114
	// Line 612, Address: 0x10295c8, Func Offset: 0x138
	// Line 613, Address: 0x10295d4, Func Offset: 0x144
	// Line 614, Address: 0x10295f8, Func Offset: 0x168
	// Line 616, Address: 0x1029604, Func Offset: 0x174
	// Line 617, Address: 0x1029618, Func Offset: 0x188
	// Func End, Address: 0x1029634, Func Offset: 0x1a4
}

// 
// Start address: 0x1029640
void z51dline0(short** ppHscw)
{
	int lHwk;
	_anon1 ldHposwk;
	int i;
	int j;
	short wk;
	char z51dscrtbl0[6];
	// Line 631, Address: 0x1029640, Func Offset: 0
	// Line 636, Address: 0x1029658, Func Offset: 0x18
	// Line 640, Address: 0x102968c, Func Offset: 0x4c
	// Line 641, Address: 0x10296b0, Func Offset: 0x70
	// Line 642, Address: 0x10296cc, Func Offset: 0x8c
	// Line 644, Address: 0x10296d0, Func Offset: 0x90
	// Line 645, Address: 0x10296d4, Func Offset: 0x94
	// Line 647, Address: 0x10296e0, Func Offset: 0xa0
	// Line 649, Address: 0x10296ec, Func Offset: 0xac
	// Line 651, Address: 0x102970c, Func Offset: 0xcc
	// Line 653, Address: 0x1029724, Func Offset: 0xe4
	// Line 654, Address: 0x1029730, Func Offset: 0xf0
	// Line 655, Address: 0x1029744, Func Offset: 0x104
	// Line 657, Address: 0x1029750, Func Offset: 0x110
	// Line 658, Address: 0x1029774, Func Offset: 0x134
	// Line 659, Address: 0x1029780, Func Offset: 0x140
	// Line 660, Address: 0x10297a4, Func Offset: 0x164
	// Line 661, Address: 0x10297b0, Func Offset: 0x170
	// Func End, Address: 0x10297cc, Func Offset: 0x18c
}

// 
// Start address: 0x10297d0
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 682, Address: 0x10297d0, Func Offset: 0
	// Line 686, Address: 0x10297ec, Func Offset: 0x1c
	// Line 688, Address: 0x10297f0, Func Offset: 0x20
	// Line 689, Address: 0x102980c, Func Offset: 0x3c
	// Line 690, Address: 0x1029818, Func Offset: 0x48
	// Line 692, Address: 0x1029824, Func Offset: 0x54
	// Line 693, Address: 0x102982c, Func Offset: 0x5c
	// Line 694, Address: 0x102983c, Func Offset: 0x6c
	// Line 695, Address: 0x1029860, Func Offset: 0x90
	// Line 696, Address: 0x1029880, Func Offset: 0xb0
	// Func End, Address: 0x1029894, Func Offset: 0xc4
}

// 
// Start address: 0x10298a0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 802, Address: 0x10298a0, Func Offset: 0
	// Line 805, Address: 0x10298b0, Func Offset: 0x10
	// Line 806, Address: 0x10298c0, Func Offset: 0x20
	// Line 807, Address: 0x10298cc, Func Offset: 0x2c
	// Line 809, Address: 0x1029904, Func Offset: 0x64
	// Line 810, Address: 0x102990c, Func Offset: 0x6c
	// Line 811, Address: 0x1029920, Func Offset: 0x80
	// Line 812, Address: 0x1029940, Func Offset: 0xa0
	// Line 813, Address: 0x1029954, Func Offset: 0xb4
	// Line 815, Address: 0x102995c, Func Offset: 0xbc
	// Line 820, Address: 0x1029970, Func Offset: 0xd0
	// Func End, Address: 0x1029984, Func Offset: 0xe4
}

// 
// Start address: 0x1029990
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 838, Address: 0x1029990, Func Offset: 0
	// Line 842, Address: 0x10299a4, Func Offset: 0x14
	// Line 843, Address: 0x10299ac, Func Offset: 0x1c
	// Line 844, Address: 0x10299b4, Func Offset: 0x24
	// Line 845, Address: 0x10299bc, Func Offset: 0x2c
	// Line 846, Address: 0x10299c0, Func Offset: 0x30
	// Line 847, Address: 0x10299e4, Func Offset: 0x54
	// Line 848, Address: 0x10299f0, Func Offset: 0x60
	// Line 850, Address: 0x1029a0c, Func Offset: 0x7c
	// Line 851, Address: 0x1029a18, Func Offset: 0x88
	// Line 852, Address: 0x1029a2c, Func Offset: 0x9c
	// Line 853, Address: 0x1029a38, Func Offset: 0xa8
	// Line 854, Address: 0x1029a5c, Func Offset: 0xcc
	// Line 856, Address: 0x1029a64, Func Offset: 0xd4
	// Line 861, Address: 0x1029a8c, Func Offset: 0xfc
	// Func End, Address: 0x1029aa0, Func Offset: 0x110
}

// 
// Start address: 0x1029aa0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 879, Address: 0x1029aa0, Func Offset: 0
	// Line 883, Address: 0x1029ab4, Func Offset: 0x14
	// Line 884, Address: 0x1029abc, Func Offset: 0x1c
	// Line 885, Address: 0x1029ac4, Func Offset: 0x24
	// Line 886, Address: 0x1029acc, Func Offset: 0x2c
	// Line 887, Address: 0x1029ad0, Func Offset: 0x30
	// Line 888, Address: 0x1029af4, Func Offset: 0x54
	// Line 889, Address: 0x1029b00, Func Offset: 0x60
	// Line 891, Address: 0x1029b1c, Func Offset: 0x7c
	// Line 892, Address: 0x1029b28, Func Offset: 0x88
	// Line 893, Address: 0x1029b3c, Func Offset: 0x9c
	// Line 894, Address: 0x1029b48, Func Offset: 0xa8
	// Line 895, Address: 0x1029b6c, Func Offset: 0xcc
	// Line 897, Address: 0x1029b74, Func Offset: 0xd4
	// Line 902, Address: 0x1029b9c, Func Offset: 0xfc
	// Func End, Address: 0x1029bb0, Func Offset: 0x110
}

// 
// Start address: 0x1029bb0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 920, Address: 0x1029bb0, Func Offset: 0
	// Line 924, Address: 0x1029bc4, Func Offset: 0x14
	// Line 925, Address: 0x1029bcc, Func Offset: 0x1c
	// Line 926, Address: 0x1029bd4, Func Offset: 0x24
	// Line 927, Address: 0x1029bdc, Func Offset: 0x2c
	// Line 928, Address: 0x1029be0, Func Offset: 0x30
	// Line 929, Address: 0x1029c04, Func Offset: 0x54
	// Line 930, Address: 0x1029c10, Func Offset: 0x60
	// Line 932, Address: 0x1029c2c, Func Offset: 0x7c
	// Line 933, Address: 0x1029c38, Func Offset: 0x88
	// Line 934, Address: 0x1029c4c, Func Offset: 0x9c
	// Line 935, Address: 0x1029c58, Func Offset: 0xa8
	// Line 936, Address: 0x1029c7c, Func Offset: 0xcc
	// Line 938, Address: 0x1029c84, Func Offset: 0xd4
	// Line 943, Address: 0x1029cac, Func Offset: 0xfc
	// Func End, Address: 0x1029cc0, Func Offset: 0x110
}

// 
// Start address: 0x1029cc0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 958, Address: 0x1029cc0, Func Offset: 0
	// Line 962, Address: 0x1029cd0, Func Offset: 0x10
	// Line 964, Address: 0x1029ce0, Func Offset: 0x20
	// Line 965, Address: 0x1029ce8, Func Offset: 0x28
	// Line 966, Address: 0x1029d1c, Func Offset: 0x5c
	// Line 967, Address: 0x1029d24, Func Offset: 0x64
	// Line 968, Address: 0x1029d38, Func Offset: 0x78
	// Line 969, Address: 0x1029d5c, Func Offset: 0x9c
	// Line 970, Address: 0x1029d70, Func Offset: 0xb0
	// Line 971, Address: 0x1029d78, Func Offset: 0xb8
	// Line 976, Address: 0x1029d8c, Func Offset: 0xcc
	// Func End, Address: 0x1029da4, Func Offset: 0xe4
}

// 
// Start address: 0x1029db0
void scrh_move()
{
	short xwk;
	// Line 993, Address: 0x1029db0, Func Offset: 0
	// Line 996, Address: 0x1029db8, Func Offset: 0x8
	// Line 997, Address: 0x1029e00, Func Offset: 0x50
	// Line 999, Address: 0x1029e10, Func Offset: 0x60
	// Line 1000, Address: 0x1029e18, Func Offset: 0x68
	// Line 1001, Address: 0x1029e20, Func Offset: 0x70
	// Line 1003, Address: 0x1029e30, Func Offset: 0x80
	// Line 1004, Address: 0x1029e44, Func Offset: 0x94
	// Line 1008, Address: 0x1029e50, Func Offset: 0xa0
	// Line 1009, Address: 0x1029e64, Func Offset: 0xb4
	// Line 1010, Address: 0x1029e88, Func Offset: 0xd8
	// Line 1012, Address: 0x1029e98, Func Offset: 0xe8
	// Line 1014, Address: 0x1029ea0, Func Offset: 0xf0
	// Line 1015, Address: 0x1029eb4, Func Offset: 0x104
	// Line 1019, Address: 0x1029ec0, Func Offset: 0x110
	// Line 1020, Address: 0x1029ed4, Func Offset: 0x124
	// Line 1021, Address: 0x1029ef8, Func Offset: 0x148
	// Line 1026, Address: 0x1029f08, Func Offset: 0x158
	// Line 1027, Address: 0x1029f38, Func Offset: 0x188
	// Line 1028, Address: 0x1029f40, Func Offset: 0x190
	// Func End, Address: 0x1029f50, Func Offset: 0x1a0
}

// 
// Start address: 0x1029f50
void scroll_v()
{
	short ywk;
	// Line 1043, Address: 0x1029f50, Func Offset: 0
	// Line 1046, Address: 0x1029f5c, Func Offset: 0xc
	// Line 1047, Address: 0x1029f90, Func Offset: 0x40
	// Line 1048, Address: 0x1029fa8, Func Offset: 0x58
	// Line 1052, Address: 0x1029fb4, Func Offset: 0x64
	// Line 1053, Address: 0x1029fcc, Func Offset: 0x7c
	// Line 1054, Address: 0x1029fd8, Func Offset: 0x88
	// Line 1055, Address: 0x1029ffc, Func Offset: 0xac
	// Line 1056, Address: 0x102a010, Func Offset: 0xc0
	// Line 1057, Address: 0x102a01c, Func Offset: 0xcc
	// Line 1058, Address: 0x102a024, Func Offset: 0xd4
	// Line 1059, Address: 0x102a04c, Func Offset: 0xfc
	// Line 1060, Address: 0x102a074, Func Offset: 0x124
	// Line 1061, Address: 0x102a080, Func Offset: 0x130
	// Line 1063, Address: 0x102a088, Func Offset: 0x138
	// Line 1064, Address: 0x102a0b0, Func Offset: 0x160
	// Line 1065, Address: 0x102a0c0, Func Offset: 0x170
	// Line 1066, Address: 0x102a0c8, Func Offset: 0x178
	// Line 1071, Address: 0x102a0d0, Func Offset: 0x180
	// Line 1072, Address: 0x102a0fc, Func Offset: 0x1ac
	// Line 1073, Address: 0x102a108, Func Offset: 0x1b8
	// Line 1074, Address: 0x102a110, Func Offset: 0x1c0
	// Line 1075, Address: 0x102a120, Func Offset: 0x1d0
	// Line 1076, Address: 0x102a128, Func Offset: 0x1d8
	// Line 1081, Address: 0x102a130, Func Offset: 0x1e0
	// Line 1082, Address: 0x102a138, Func Offset: 0x1e8
	// Func End, Address: 0x102a14c, Func Offset: 0x1fc
}

// 
// Start address: 0x102a150
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1096, Address: 0x102a150, Func Offset: 0
	// Line 1099, Address: 0x102a160, Func Offset: 0x10
	// Line 1100, Address: 0x102a17c, Func Offset: 0x2c
	// Line 1101, Address: 0x102a194, Func Offset: 0x44
	// Line 1102, Address: 0x102a1b8, Func Offset: 0x68
	// Line 1103, Address: 0x102a1c0, Func Offset: 0x70
	// Line 1107, Address: 0x102a1d0, Func Offset: 0x80
	// Line 1108, Address: 0x102a1e4, Func Offset: 0x94
	// Line 1109, Address: 0x102a1f0, Func Offset: 0xa0
	// Line 1112, Address: 0x102a1f8, Func Offset: 0xa8
	// Line 1113, Address: 0x102a210, Func Offset: 0xc0
	// Line 1114, Address: 0x102a21c, Func Offset: 0xcc
	// Line 1115, Address: 0x102a23c, Func Offset: 0xec
	// Line 1116, Address: 0x102a248, Func Offset: 0xf8
	// Line 1117, Address: 0x102a250, Func Offset: 0x100
	// Line 1119, Address: 0x102a25c, Func Offset: 0x10c
	// Line 1121, Address: 0x102a264, Func Offset: 0x114
	// Line 1122, Address: 0x102a27c, Func Offset: 0x12c
	// Line 1123, Address: 0x102a288, Func Offset: 0x138
	// Line 1124, Address: 0x102a2a8, Func Offset: 0x158
	// Line 1125, Address: 0x102a2b4, Func Offset: 0x164
	// Line 1126, Address: 0x102a2bc, Func Offset: 0x16c
	// Line 1129, Address: 0x102a2c8, Func Offset: 0x178
	// Func End, Address: 0x102a2dc, Func Offset: 0x18c
}

// 
// Start address: 0x102a2e0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1143, Address: 0x102a2e0, Func Offset: 0
	// Line 1146, Address: 0x102a2f0, Func Offset: 0x10
	// Line 1148, Address: 0x102a2fc, Func Offset: 0x1c
	// Line 1149, Address: 0x102a314, Func Offset: 0x34
	// Line 1150, Address: 0x102a320, Func Offset: 0x40
	// Line 1151, Address: 0x102a340, Func Offset: 0x60
	// Line 1152, Address: 0x102a34c, Func Offset: 0x6c
	// Line 1153, Address: 0x102a354, Func Offset: 0x74
	// Line 1155, Address: 0x102a360, Func Offset: 0x80
	// Func End, Address: 0x102a374, Func Offset: 0x94
}

// 
// Start address: 0x102a380
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1170, Address: 0x102a380, Func Offset: 0
	// Line 1173, Address: 0x102a38c, Func Offset: 0xc
	// Line 1174, Address: 0x102a390, Func Offset: 0x10
	// Line 1175, Address: 0x102a3bc, Func Offset: 0x3c
	// Line 1176, Address: 0x102a3d0, Func Offset: 0x50
	// Line 1177, Address: 0x102a3dc, Func Offset: 0x5c
	// Line 1178, Address: 0x102a3e4, Func Offset: 0x64
	// Line 1180, Address: 0x102a3f0, Func Offset: 0x70
	// Func End, Address: 0x102a400, Func Offset: 0x80
}

// 
// Start address: 0x102a400
void sv_move_sub2()
{
	// Line 1184, Address: 0x102a400, Func Offset: 0
	// Line 1185, Address: 0x102a408, Func Offset: 0x8
	// Line 1187, Address: 0x102a410, Func Offset: 0x10
	// Line 1188, Address: 0x102a41c, Func Offset: 0x1c
	// Func End, Address: 0x102a42c, Func Offset: 0x2c
}

// 
// Start address: 0x102a430
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1202, Address: 0x102a430, Func Offset: 0
	// Line 1205, Address: 0x102a43c, Func Offset: 0xc
	// Line 1206, Address: 0x102a460, Func Offset: 0x30
	// Line 1207, Address: 0x102a484, Func Offset: 0x54
	// Line 1208, Address: 0x102a490, Func Offset: 0x60
	// Func End, Address: 0x102a4a0, Func Offset: 0x70
}

// 
// Start address: 0x102a4a0
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1223, Address: 0x102a4a0, Func Offset: 0
	// Line 1224, Address: 0x102a4ac, Func Offset: 0xc
	// Line 1225, Address: 0x102a4d4, Func Offset: 0x34
	// Line 1227, Address: 0x102a4ec, Func Offset: 0x4c
	// Line 1228, Address: 0x102a4f8, Func Offset: 0x58
	// Line 1229, Address: 0x102a500, Func Offset: 0x60
	// Line 1230, Address: 0x102a50c, Func Offset: 0x6c
	// Line 1231, Address: 0x102a520, Func Offset: 0x80
	// Line 1232, Address: 0x102a534, Func Offset: 0x94
	// Line 1236, Address: 0x102a548, Func Offset: 0xa8
	// Line 1237, Address: 0x102a554, Func Offset: 0xb4
	// Func End, Address: 0x102a564, Func Offset: 0xc4
}

// 
// Start address: 0x102a570
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1251, Address: 0x102a570, Func Offset: 0
	// Line 1254, Address: 0x102a57c, Func Offset: 0xc
	// Line 1255, Address: 0x102a59c, Func Offset: 0x2c
	// Line 1256, Address: 0x102a5c0, Func Offset: 0x50
	// Line 1257, Address: 0x102a5cc, Func Offset: 0x5c
	// Func End, Address: 0x102a5dc, Func Offset: 0x6c
}

// 
// Start address: 0x102a5e0
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1272, Address: 0x102a5e0, Func Offset: 0
	// Line 1273, Address: 0x102a5ec, Func Offset: 0xc
	// Line 1274, Address: 0x102a614, Func Offset: 0x34
	// Line 1276, Address: 0x102a62c, Func Offset: 0x4c
	// Line 1277, Address: 0x102a638, Func Offset: 0x58
	// Line 1278, Address: 0x102a640, Func Offset: 0x60
	// Line 1279, Address: 0x102a64c, Func Offset: 0x6c
	// Line 1280, Address: 0x102a660, Func Offset: 0x80
	// Line 1281, Address: 0x102a674, Func Offset: 0x94
	// Line 1285, Address: 0x102a688, Func Offset: 0xa8
	// Line 1286, Address: 0x102a694, Func Offset: 0xb4
	// Func End, Address: 0x102a6a4, Func Offset: 0xc4
}

// 
// Start address: 0x102a6b0
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1303, Address: 0x102a6b0, Func Offset: 0
	// Line 1307, Address: 0x102a6c0, Func Offset: 0x10
	// Line 1308, Address: 0x102a6d0, Func Offset: 0x20
	// Line 1309, Address: 0x102a6f4, Func Offset: 0x44
	// Line 1310, Address: 0x102a708, Func Offset: 0x58
	// Line 1311, Address: 0x102a720, Func Offset: 0x70
	// Line 1313, Address: 0x102a72c, Func Offset: 0x7c
	// Line 1315, Address: 0x102a738, Func Offset: 0x88
	// Line 1316, Address: 0x102a774, Func Offset: 0xc4
	// Line 1317, Address: 0x102a77c, Func Offset: 0xcc
	// Line 1318, Address: 0x102a790, Func Offset: 0xe0
	// Line 1319, Address: 0x102a7bc, Func Offset: 0x10c
	// Line 1320, Address: 0x102a7cc, Func Offset: 0x11c
	// Line 1321, Address: 0x102a7e0, Func Offset: 0x130
	// Line 1322, Address: 0x102a7e8, Func Offset: 0x138
	// Line 1327, Address: 0x102a7fc, Func Offset: 0x14c
	// Func End, Address: 0x102a810, Func Offset: 0x160
}

// 
// Start address: 0x102a810
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
	// Line 1345, Address: 0x102a810, Func Offset: 0
	// Line 1354, Address: 0x102a830, Func Offset: 0x20
	// Line 1355, Address: 0x102a834, Func Offset: 0x24
	// Line 1356, Address: 0x102a840, Func Offset: 0x30
	// Line 1357, Address: 0x102a84c, Func Offset: 0x3c
	// Line 1358, Address: 0x102a854, Func Offset: 0x44
	// Line 1359, Address: 0x102a85c, Func Offset: 0x4c
	// Line 1361, Address: 0x102a870, Func Offset: 0x60
	// Line 1362, Address: 0x102a874, Func Offset: 0x64
	// Line 1363, Address: 0x102a880, Func Offset: 0x70
	// Line 1364, Address: 0x102a88c, Func Offset: 0x7c
	// Line 1365, Address: 0x102a894, Func Offset: 0x84
	// Line 1367, Address: 0x102a89c, Func Offset: 0x8c
	// Line 1368, Address: 0x102a8a8, Func Offset: 0x98
	// Line 1369, Address: 0x102a8bc, Func Offset: 0xac
	// Line 1371, Address: 0x102a8c8, Func Offset: 0xb8
	// Line 1372, Address: 0x102a8d0, Func Offset: 0xc0
	// Line 1374, Address: 0x102a8d8, Func Offset: 0xc8
	// Line 1376, Address: 0x102a8f8, Func Offset: 0xe8
	// Line 1382, Address: 0x102a924, Func Offset: 0x114
	// Line 1383, Address: 0x102a938, Func Offset: 0x128
	// Line 1385, Address: 0x102a944, Func Offset: 0x134
	// Line 1386, Address: 0x102a94c, Func Offset: 0x13c
	// Line 1387, Address: 0x102a954, Func Offset: 0x144
	// Line 1389, Address: 0x102a974, Func Offset: 0x164
	// Line 1395, Address: 0x102a9a0, Func Offset: 0x190
	// Line 1396, Address: 0x102a9b4, Func Offset: 0x1a4
	// Line 1398, Address: 0x102a9c0, Func Offset: 0x1b0
	// Line 1399, Address: 0x102a9c8, Func Offset: 0x1b8
	// Line 1400, Address: 0x102a9d0, Func Offset: 0x1c0
	// Line 1402, Address: 0x102a9f0, Func Offset: 0x1e0
	// Line 1408, Address: 0x102aa1c, Func Offset: 0x20c
	// Line 1409, Address: 0x102aa30, Func Offset: 0x220
	// Line 1411, Address: 0x102aa3c, Func Offset: 0x22c
	// Line 1412, Address: 0x102aa44, Func Offset: 0x234
	// Line 1413, Address: 0x102aa4c, Func Offset: 0x23c
	// Line 1415, Address: 0x102aa6c, Func Offset: 0x25c
	// Line 1424, Address: 0x102aa98, Func Offset: 0x288
	// Func End, Address: 0x102aac0, Func Offset: 0x2b0
}

// 
// Start address: 0x102aac0
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
	// Line 1441, Address: 0x102aac0, Func Offset: 0
	// Line 1452, Address: 0x102aaec, Func Offset: 0x2c
	// Line 1454, Address: 0x102aaf4, Func Offset: 0x34
	// Line 1455, Address: 0x102ab0c, Func Offset: 0x4c
	// Line 1456, Address: 0x102ab20, Func Offset: 0x60
	// Line 1458, Address: 0x102ab28, Func Offset: 0x68
	// Line 1460, Address: 0x102ab3c, Func Offset: 0x7c
	// Line 1461, Address: 0x102ab54, Func Offset: 0x94
	// Line 1462, Address: 0x102ab68, Func Offset: 0xa8
	// Line 1463, Address: 0x102ab70, Func Offset: 0xb0
	// Line 1465, Address: 0x102ab78, Func Offset: 0xb8
	// Line 1466, Address: 0x102ab8c, Func Offset: 0xcc
	// Line 1471, Address: 0x102ab94, Func Offset: 0xd4
	// Line 1472, Address: 0x102abe4, Func Offset: 0x124
	// Line 1473, Address: 0x102abec, Func Offset: 0x12c
	// Line 1479, Address: 0x102ac0c, Func Offset: 0x14c
	// Line 1480, Address: 0x102ac2c, Func Offset: 0x16c
	// Line 1481, Address: 0x102ac50, Func Offset: 0x190
	// Line 1482, Address: 0x102ac5c, Func Offset: 0x19c
	// Line 1483, Address: 0x102ac64, Func Offset: 0x1a4
	// Line 1485, Address: 0x102ac84, Func Offset: 0x1c4
	// Line 1489, Address: 0x102acb0, Func Offset: 0x1f0
	// Line 1492, Address: 0x102acb8, Func Offset: 0x1f8
	// Line 1493, Address: 0x102acbc, Func Offset: 0x1fc
	// Line 1497, Address: 0x102acdc, Func Offset: 0x21c
	// Line 1504, Address: 0x102ad08, Func Offset: 0x248
	// Line 1511, Address: 0x102ad1c, Func Offset: 0x25c
	// Line 1512, Address: 0x102ad24, Func Offset: 0x264
	// Line 1513, Address: 0x102ad2c, Func Offset: 0x26c
	// Line 1514, Address: 0x102ad44, Func Offset: 0x284
	// Line 1515, Address: 0x102ad64, Func Offset: 0x2a4
	// Line 1519, Address: 0x102ad6c, Func Offset: 0x2ac
	// Line 1521, Address: 0x102ad9c, Func Offset: 0x2dc
	// Line 1522, Address: 0x102ada8, Func Offset: 0x2e8
	// Line 1526, Address: 0x102adb8, Func Offset: 0x2f8
	// Line 1527, Address: 0x102adc4, Func Offset: 0x304
	// Line 1529, Address: 0x102ade4, Func Offset: 0x324
	// Line 1530, Address: 0x102ae1c, Func Offset: 0x35c
	// Line 1531, Address: 0x102ae3c, Func Offset: 0x37c
	// Line 1533, Address: 0x102ae60, Func Offset: 0x3a0
	// Line 1536, Address: 0x102ae84, Func Offset: 0x3c4
	// Line 1538, Address: 0x102aea4, Func Offset: 0x3e4
	// Line 1540, Address: 0x102aeb8, Func Offset: 0x3f8
	// Line 1541, Address: 0x102aec4, Func Offset: 0x404
	// Line 1542, Address: 0x102aed4, Func Offset: 0x414
	// Line 1544, Address: 0x102aedc, Func Offset: 0x41c
	// Func End, Address: 0x102af04, Func Offset: 0x444
}

// 
// Start address: 0x102af10
void scrollwrtc()
{
	// Line 1550, Address: 0x102af10, Func Offset: 0
	// Func End, Address: 0x102af18, Func Offset: 0x8
}

// 
// Start address: 0x102af20
void scrollwrtz()
{
	// Line 1555, Address: 0x102af20, Func Offset: 0
	// Func End, Address: 0x102af28, Func Offset: 0x8
}

// 
// Start address: 0x102af30
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1573, Address: 0x102af30, Func Offset: 0
	// Line 1586, Address: 0x102af58, Func Offset: 0x28
	// Line 1589, Address: 0x102af78, Func Offset: 0x48
	// Line 1590, Address: 0x102af8c, Func Offset: 0x5c
	// Line 1591, Address: 0x102afa0, Func Offset: 0x70
	// Line 1592, Address: 0x102afb4, Func Offset: 0x84
	// Line 1594, Address: 0x102afc8, Func Offset: 0x98
	// Line 1595, Address: 0x102afd4, Func Offset: 0xa4
	// Line 1596, Address: 0x102afe8, Func Offset: 0xb8
	// Func End, Address: 0x102aff8, Func Offset: 0xc8
}

// 
// Start address: 0x102b000
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1600, Address: 0x102b000, Func Offset: 0
	// Line 1604, Address: 0x102b028, Func Offset: 0x28
	// Line 1607, Address: 0x102b048, Func Offset: 0x48
	// Line 1608, Address: 0x102b05c, Func Offset: 0x5c
	// Line 1609, Address: 0x102b070, Func Offset: 0x70
	// Line 1610, Address: 0x102b084, Func Offset: 0x84
	// Line 1612, Address: 0x102b098, Func Offset: 0x98
	// Line 1613, Address: 0x102b0a4, Func Offset: 0xa4
	// Line 1614, Address: 0x102b0b8, Func Offset: 0xb8
	// Func End, Address: 0x102b0c8, Func Offset: 0xc8
}

// 
// Start address: 0x102b0d0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1634, Address: 0x102b0d0, Func Offset: 0
	// Line 1638, Address: 0x102b0f8, Func Offset: 0x28
	// Line 1641, Address: 0x102b118, Func Offset: 0x48
	// Line 1642, Address: 0x102b12c, Func Offset: 0x5c
	// Line 1643, Address: 0x102b13c, Func Offset: 0x6c
	// Line 1644, Address: 0x102b150, Func Offset: 0x80
	// Line 1646, Address: 0x102b160, Func Offset: 0x90
	// Line 1647, Address: 0x102b16c, Func Offset: 0x9c
	// Line 1648, Address: 0x102b180, Func Offset: 0xb0
	// Func End, Address: 0x102b190, Func Offset: 0xc0
}

// 
// Start address: 0x102b190
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
	// Line 1667, Address: 0x102b190, Func Offset: 0
	// Line 1673, Address: 0x102b1c4, Func Offset: 0x34
	// Line 1675, Address: 0x102b1d4, Func Offset: 0x44
	// Line 1676, Address: 0x102b1d8, Func Offset: 0x48
	// Line 1677, Address: 0x102b1e0, Func Offset: 0x50
	// Line 1679, Address: 0x102b1f0, Func Offset: 0x60
	// Line 1681, Address: 0x102b1f4, Func Offset: 0x64
	// Line 1682, Address: 0x102b1fc, Func Offset: 0x6c
	// Line 1685, Address: 0x102b204, Func Offset: 0x74
	// Line 1686, Address: 0x102b20c, Func Offset: 0x7c
	// Line 1687, Address: 0x102b218, Func Offset: 0x88
	// Line 1689, Address: 0x102b224, Func Offset: 0x94
	// Line 1690, Address: 0x102b22c, Func Offset: 0x9c
	// Line 1691, Address: 0x102b234, Func Offset: 0xa4
	// Line 1692, Address: 0x102b23c, Func Offset: 0xac
	// Line 1694, Address: 0x102b248, Func Offset: 0xb8
	// Line 1695, Address: 0x102b250, Func Offset: 0xc0
	// Line 1696, Address: 0x102b258, Func Offset: 0xc8
	// Line 1697, Address: 0x102b260, Func Offset: 0xd0
	// Line 1699, Address: 0x102b26c, Func Offset: 0xdc
	// Line 1700, Address: 0x102b274, Func Offset: 0xe4
	// Line 1701, Address: 0x102b27c, Func Offset: 0xec
	// Line 1704, Address: 0x102b284, Func Offset: 0xf4
	// Line 1705, Address: 0x102b28c, Func Offset: 0xfc
	// Line 1708, Address: 0x102b294, Func Offset: 0x104
	// Line 1709, Address: 0x102b2d8, Func Offset: 0x148
	// Line 1710, Address: 0x102b31c, Func Offset: 0x18c
	// Line 1711, Address: 0x102b360, Func Offset: 0x1d0
	// Line 1713, Address: 0x102b3a4, Func Offset: 0x214
	// Func End, Address: 0x102b3d4, Func Offset: 0x244
}

// 
// Start address: 0x102b3e0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1731, Address: 0x102b3e0, Func Offset: 0
	// Line 1732, Address: 0x102b400, Func Offset: 0x20
	// Line 1733, Address: 0x102b420, Func Offset: 0x40
	// Func End, Address: 0x102b430, Func Offset: 0x50
}

// 
// Start address: 0x102b430
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1735, Address: 0x102b430, Func Offset: 0
	// Line 1736, Address: 0x102b450, Func Offset: 0x20
	// Line 1737, Address: 0x102b454, Func Offset: 0x24
	// Line 1738, Address: 0x102b474, Func Offset: 0x44
	// Func End, Address: 0x102b484, Func Offset: 0x54
}

// 
// Start address: 0x102b490
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1745, Address: 0x102b490, Func Offset: 0
	// Line 1751, Address: 0x102b4c0, Func Offset: 0x30
	// Line 1752, Address: 0x102b4d0, Func Offset: 0x40
	// Line 1758, Address: 0x102b4e0, Func Offset: 0x50
	// Line 1759, Address: 0x102b4fc, Func Offset: 0x6c
	// Line 1760, Address: 0x102b500, Func Offset: 0x70
	// Line 1761, Address: 0x102b51c, Func Offset: 0x8c
	// Line 1762, Address: 0x102b520, Func Offset: 0x90
	// Line 1763, Address: 0x102b540, Func Offset: 0xb0
	// Line 1764, Address: 0x102b548, Func Offset: 0xb8
	// Line 1765, Address: 0x102b568, Func Offset: 0xd8
	// Line 1766, Address: 0x102b570, Func Offset: 0xe0
	// Line 1767, Address: 0x102b5b8, Func Offset: 0x128
	// Line 1769, Address: 0x102b5c4, Func Offset: 0x134
	// Line 1771, Address: 0x102b5e0, Func Offset: 0x150
	// Line 1776, Address: 0x102b5e8, Func Offset: 0x158
	// Line 1777, Address: 0x102b5f4, Func Offset: 0x164
	// Line 1780, Address: 0x102b600, Func Offset: 0x170
	// Line 1781, Address: 0x102b608, Func Offset: 0x178
	// Line 1782, Address: 0x102b628, Func Offset: 0x198
	// Line 1783, Address: 0x102b644, Func Offset: 0x1b4
	// Line 1784, Address: 0x102b64c, Func Offset: 0x1bc
	// Line 1785, Address: 0x102b66c, Func Offset: 0x1dc
	// Line 1787, Address: 0x102b688, Func Offset: 0x1f8
	// Line 1788, Address: 0x102b690, Func Offset: 0x200
	// Line 1789, Address: 0x102b698, Func Offset: 0x208
	// Line 1790, Address: 0x102b6a4, Func Offset: 0x214
	// Line 1791, Address: 0x102b6bc, Func Offset: 0x22c
	// Line 1793, Address: 0x102b6cc, Func Offset: 0x23c
	// Line 1796, Address: 0x102b6d8, Func Offset: 0x248
	// Line 1797, Address: 0x102b6e0, Func Offset: 0x250
	// Line 1798, Address: 0x102b6e4, Func Offset: 0x254
	// Func End, Address: 0x102b704, Func Offset: 0x274
}

// 
// Start address: 0x102b710
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1818, Address: 0x102b710, Func Offset: 0
	// Line 1826, Address: 0x102b738, Func Offset: 0x28
	// Line 1827, Address: 0x102b79c, Func Offset: 0x8c
	// Line 1833, Address: 0x102b7a4, Func Offset: 0x94
	// Line 1834, Address: 0x102b7ac, Func Offset: 0x9c
	// Line 1835, Address: 0x102b7cc, Func Offset: 0xbc
	// Line 1836, Address: 0x102b7e8, Func Offset: 0xd8
	// Line 1837, Address: 0x102b7f0, Func Offset: 0xe0
	// Line 1838, Address: 0x102b810, Func Offset: 0x100
	// Line 1841, Address: 0x102b82c, Func Offset: 0x11c
	// Line 1842, Address: 0x102b834, Func Offset: 0x124
	// Line 1843, Address: 0x102b83c, Func Offset: 0x12c
	// Line 1844, Address: 0x102b848, Func Offset: 0x138
	// Line 1845, Address: 0x102b860, Func Offset: 0x150
	// Line 1846, Address: 0x102b868, Func Offset: 0x158
	// Line 1851, Address: 0x102b878, Func Offset: 0x168
	// Line 1854, Address: 0x102b884, Func Offset: 0x174
	// Line 1855, Address: 0x102b88c, Func Offset: 0x17c
	// Line 1856, Address: 0x102b890, Func Offset: 0x180
	// Func End, Address: 0x102b8ac, Func Offset: 0x19c
}

// 
// Start address: 0x102b8b0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1870, Address: 0x102b8b0, Func Offset: 0
	// Line 1877, Address: 0x102b8cc, Func Offset: 0x1c
	// Line 1878, Address: 0x102b8d0, Func Offset: 0x20
	// Line 1879, Address: 0x102b8d8, Func Offset: 0x28
	// Line 1880, Address: 0x102b8fc, Func Offset: 0x4c
	// Line 1881, Address: 0x102b908, Func Offset: 0x58
	// Line 1882, Address: 0x102b920, Func Offset: 0x70
	// Line 1883, Address: 0x102b934, Func Offset: 0x84
	// Line 1888, Address: 0x102b94c, Func Offset: 0x9c
	// Func End, Address: 0x102b964, Func Offset: 0xb4
}

// 
// Start address: 0x102b970
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1902, Address: 0x102b970, Func Offset: 0
	// Line 1903, Address: 0x102b97c, Func Offset: 0xc
	// Line 1904, Address: 0x102b9a8, Func Offset: 0x38
	// Line 1905, Address: 0x102b9f4, Func Offset: 0x84
	// Line 1906, Address: 0x102ba20, Func Offset: 0xb0
	// Line 1908, Address: 0x102ba6c, Func Offset: 0xfc
	// Line 1914, Address: 0x102ba78, Func Offset: 0x108
	// Line 1915, Address: 0x102ba7c, Func Offset: 0x10c
	// Func End, Address: 0x102ba88, Func Offset: 0x118
}

// 
// Start address: 0x102ba90
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1932, Address: 0x102ba90, Func Offset: 0
	// Line 1933, Address: 0x102baac, Func Offset: 0x1c
	// Line 1935, Address: 0x102bac8, Func Offset: 0x38
	// Func End, Address: 0x102bad8, Func Offset: 0x48
}

// 
// Start address: 0x102bae0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1937, Address: 0x102bae0, Func Offset: 0
	// Line 1938, Address: 0x102bafc, Func Offset: 0x1c
	// Line 1939, Address: 0x102bb00, Func Offset: 0x20
	// Line 1941, Address: 0x102bb1c, Func Offset: 0x3c
	// Func End, Address: 0x102bb2c, Func Offset: 0x4c
}

// 
// Start address: 0x102bb30
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1943, Address: 0x102bb30, Func Offset: 0
	// Line 1944, Address: 0x102bb44, Func Offset: 0x14
	// Line 1946, Address: 0x102bb60, Func Offset: 0x30
	// Func End, Address: 0x102bb70, Func Offset: 0x40
}

// 
// Start address: 0x102bb70
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1948, Address: 0x102bb70, Func Offset: 0
	// Line 1949, Address: 0x102bb8c, Func Offset: 0x1c
	// Line 1951, Address: 0x102bba8, Func Offset: 0x38
	// Func End, Address: 0x102bbb8, Func Offset: 0x48
}

// 
// Start address: 0x102bbc0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1953, Address: 0x102bbc0, Func Offset: 0
	// Line 1954, Address: 0x102bbd8, Func Offset: 0x18
	// Line 1955, Address: 0x102bbe8, Func Offset: 0x28
	// Line 1956, Address: 0x102bbf8, Func Offset: 0x38
	// Line 1957, Address: 0x102bc04, Func Offset: 0x44
	// Line 1959, Address: 0x102bc10, Func Offset: 0x50
	// Line 1960, Address: 0x102bc3c, Func Offset: 0x7c
	// Line 1963, Address: 0x102bc68, Func Offset: 0xa8
	// Func End, Address: 0x102bc74, Func Offset: 0xb4
}

// 
// Start address: 0x102bc80
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1979, Address: 0x102bc80, Func Offset: 0
	// Line 1984, Address: 0x102bc98, Func Offset: 0x18
	// Line 1985, Address: 0x102bca4, Func Offset: 0x24
	// Line 1986, Address: 0x102bcb0, Func Offset: 0x30
	// Line 1987, Address: 0x102bcb8, Func Offset: 0x38
	// Line 1988, Address: 0x102bcbc, Func Offset: 0x3c
	// Line 1989, Address: 0x102bcd4, Func Offset: 0x54
	// Line 1990, Address: 0x102bcdc, Func Offset: 0x5c
	// Func End, Address: 0x102bcfc, Func Offset: 0x7c
}

// 
// Start address: 0x102bd00
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1993, Address: 0x102bd00, Func Offset: 0
	// Line 1998, Address: 0x102bd18, Func Offset: 0x18
	// Line 1999, Address: 0x102bd24, Func Offset: 0x24
	// Line 2000, Address: 0x102bd30, Func Offset: 0x30
	// Line 2001, Address: 0x102bd38, Func Offset: 0x38
	// Line 2002, Address: 0x102bd3c, Func Offset: 0x3c
	// Line 2004, Address: 0x102bd4c, Func Offset: 0x4c
	// Func End, Address: 0x102bd6c, Func Offset: 0x6c
}

// 
// Start address: 0x102bd70
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 2007, Address: 0x102bd70, Func Offset: 0
	// Line 2008, Address: 0x102bd88, Func Offset: 0x18
	// Line 2009, Address: 0x102bda8, Func Offset: 0x38
	// Func End, Address: 0x102bdb8, Func Offset: 0x48
}

// 
// Start address: 0x102bdc0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 2014, Address: 0x102bdc0, Func Offset: 0
	// Line 2018, Address: 0x102bde0, Func Offset: 0x20
	// Line 2021, Address: 0x102bdfc, Func Offset: 0x3c
	// Line 2025, Address: 0x102be24, Func Offset: 0x64
	// Line 2026, Address: 0x102be30, Func Offset: 0x70
	// Line 2028, Address: 0x102be58, Func Offset: 0x98
	// Func End, Address: 0x102be68, Func Offset: 0xa8
}

// 
// Start address: 0x102be70
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 2034, Address: 0x102be70, Func Offset: 0
	// Line 2037, Address: 0x102be8c, Func Offset: 0x1c
	// Line 2038, Address: 0x102be94, Func Offset: 0x24
	// Line 2041, Address: 0x102be9c, Func Offset: 0x2c
	// Line 2043, Address: 0x102bec0, Func Offset: 0x50
	// Line 2044, Address: 0x102bee0, Func Offset: 0x70
	// Line 2045, Address: 0x102bee8, Func Offset: 0x78
	// Line 2046, Address: 0x102bf0c, Func Offset: 0x9c
	// Func End, Address: 0x102bf28, Func Offset: 0xb8
}

// 
// Start address: 0x102bf30
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2072, Address: 0x102bf30, Func Offset: 0
	// Line 2077, Address: 0x102bf58, Func Offset: 0x28
	// Line 2078, Address: 0x102bf68, Func Offset: 0x38
	// Line 2080, Address: 0x102bf84, Func Offset: 0x54
	// Line 2081, Address: 0x102bfa8, Func Offset: 0x78
	// Line 2082, Address: 0x102bfd0, Func Offset: 0xa0
	// Line 2083, Address: 0x102bfdc, Func Offset: 0xac
	// Line 2084, Address: 0x102bfe4, Func Offset: 0xb4
	// Line 2087, Address: 0x102c000, Func Offset: 0xd0
	// Line 2091, Address: 0x102c028, Func Offset: 0xf8
	// Line 2094, Address: 0x102c030, Func Offset: 0x100
	// Line 2095, Address: 0x102c034, Func Offset: 0x104
	// Line 2099, Address: 0x102c050, Func Offset: 0x120
	// Line 2106, Address: 0x102c078, Func Offset: 0x148
	// Func End, Address: 0x102c094, Func Offset: 0x164
}

// 
// Start address: 0x102c0a0
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
	// Line 2117, Address: 0x102c0a0, Func Offset: 0
	// Line 2118, Address: 0x102c0c0, Func Offset: 0x20
	// Line 2123, Address: 0x102c0ec, Func Offset: 0x4c
	// Line 2129, Address: 0x102c110, Func Offset: 0x70
	// Line 2130, Address: 0x102c114, Func Offset: 0x74
	// Line 2132, Address: 0x102c118, Func Offset: 0x78
	// Line 2133, Address: 0x102c120, Func Offset: 0x80
	// Line 2136, Address: 0x102c144, Func Offset: 0xa4
	// Line 2137, Address: 0x102c148, Func Offset: 0xa8
	// Line 2140, Address: 0x102c16c, Func Offset: 0xcc
	// Line 2141, Address: 0x102c170, Func Offset: 0xd0
	// Line 2142, Address: 0x102c178, Func Offset: 0xd8
	// Line 2143, Address: 0x102c17c, Func Offset: 0xdc
	// Line 2145, Address: 0x102c180, Func Offset: 0xe0
	// Line 2146, Address: 0x102c188, Func Offset: 0xe8
	// Line 2147, Address: 0x102c1a8, Func Offset: 0x108
	// Line 2151, Address: 0x102c1b4, Func Offset: 0x114
	// Line 2152, Address: 0x102c1c8, Func Offset: 0x128
	// Line 2155, Address: 0x102c1dc, Func Offset: 0x13c
	// Line 2156, Address: 0x102c1fc, Func Offset: 0x15c
	// Func End, Address: 0x102c224, Func Offset: 0x184
}

// 
// Start address: 0x102c230
void mapset()
{
	// Line 2161, Address: 0x102c230, Func Offset: 0
	// Func End, Address: 0x102c238, Func Offset: 0x8
}

// 
// Start address: 0x102c240
void divdevset()
{
	// Line 2165, Address: 0x102c240, Func Offset: 0
	// Func End, Address: 0x102c248, Func Offset: 0x8
}

// 
// Start address: 0x102c250
void enecginit()
{
	// Line 2169, Address: 0x102c250, Func Offset: 0
	// Func End, Address: 0x102c258, Func Offset: 0x8
}

// 
// Start address: 0x102c260
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2185, Address: 0x102c260, Func Offset: 0
	// Line 2189, Address: 0x102c280, Func Offset: 0x20
	// Line 2190, Address: 0x102c298, Func Offset: 0x38
	// Line 2191, Address: 0x102c2a8, Func Offset: 0x48
	// Line 2192, Address: 0x102c2b8, Func Offset: 0x58
	// Line 2193, Address: 0x102c2c0, Func Offset: 0x60
	// Line 2195, Address: 0x102c2c4, Func Offset: 0x64
	// Line 2196, Address: 0x102c2d0, Func Offset: 0x70
	// Line 2197, Address: 0x102c2e8, Func Offset: 0x88
	// Line 2199, Address: 0x102c2f4, Func Offset: 0x94
	// Line 2200, Address: 0x102c300, Func Offset: 0xa0
	// Line 2201, Address: 0x102c30c, Func Offset: 0xac
	// Func End, Address: 0x102c32c, Func Offset: 0xcc
}

