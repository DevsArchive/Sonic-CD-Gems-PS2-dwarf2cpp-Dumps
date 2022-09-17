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
typedef short type_4[6];
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
// Start address: 0x10287f0
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
	// Line 154, Address: 0x10287f0, Func Offset: 0
	// Line 155, Address: 0x1028810, Func Offset: 0x20
	// Line 159, Address: 0x1028844, Func Offset: 0x54
	// Line 165, Address: 0x1028868, Func Offset: 0x78
	// Line 169, Address: 0x1028878, Func Offset: 0x88
	// Line 170, Address: 0x102887c, Func Offset: 0x8c
	// Line 172, Address: 0x1028880, Func Offset: 0x90
	// Line 173, Address: 0x1028888, Func Offset: 0x98
	// Line 176, Address: 0x10288ac, Func Offset: 0xbc
	// Line 177, Address: 0x10288b0, Func Offset: 0xc0
	// Line 180, Address: 0x10288d4, Func Offset: 0xe4
	// Line 185, Address: 0x10288e8, Func Offset: 0xf8
	// Line 188, Address: 0x10288f4, Func Offset: 0x104
	// Line 189, Address: 0x10288f8, Func Offset: 0x108
	// Line 190, Address: 0x1028904, Func Offset: 0x114
	// Line 191, Address: 0x1028908, Func Offset: 0x118
	// Line 192, Address: 0x102890c, Func Offset: 0x11c
	// Line 193, Address: 0x1028914, Func Offset: 0x124
	// Line 194, Address: 0x1028918, Func Offset: 0x128
	// Line 196, Address: 0x102891c, Func Offset: 0x12c
	// Line 197, Address: 0x1028924, Func Offset: 0x134
	// Line 198, Address: 0x1028944, Func Offset: 0x154
	// Line 200, Address: 0x1028950, Func Offset: 0x160
	// Line 201, Address: 0x1028970, Func Offset: 0x180
	// Line 203, Address: 0x1028990, Func Offset: 0x1a0
	// Line 204, Address: 0x10289c8, Func Offset: 0x1d8
	// Line 205, Address: 0x10289e0, Func Offset: 0x1f0
	// Line 206, Address: 0x10289ec, Func Offset: 0x1fc
	// Func End, Address: 0x1028a14, Func Offset: 0x224
}

// 
// Start address: 0x1028a20
_anon2* main_chk()
{
	// Line 220, Address: 0x1028a20, Func Offset: 0
	// Line 221, Address: 0x1028a34, Func Offset: 0x14
	// Line 223, Address: 0x1028a44, Func Offset: 0x24
	// Line 225, Address: 0x1028a4c, Func Offset: 0x2c
	// Func End, Address: 0x1028a54, Func Offset: 0x34
}

// 
// Start address: 0x1028a60
void scr_set()
{
	short* pScrTbl;
	// Line 263, Address: 0x1028a60, Func Offset: 0
	// Line 266, Address: 0x1028a6c, Func Offset: 0xc
	// Line 267, Address: 0x1028a80, Func Offset: 0x20
	// Line 268, Address: 0x1028a94, Func Offset: 0x34
	// Line 270, Address: 0x1028a9c, Func Offset: 0x3c
	// Line 271, Address: 0x1028aa4, Func Offset: 0x44
	// Line 272, Address: 0x1028ab0, Func Offset: 0x50
	// Line 273, Address: 0x1028ab4, Func Offset: 0x54
	// Line 274, Address: 0x1028ac8, Func Offset: 0x68
	// Line 275, Address: 0x1028acc, Func Offset: 0x6c
	// Line 276, Address: 0x1028ae0, Func Offset: 0x80
	// Line 277, Address: 0x1028ae4, Func Offset: 0x84
	// Line 278, Address: 0x1028af8, Func Offset: 0x98
	// Line 279, Address: 0x1028afc, Func Offset: 0x9c
	// Line 280, Address: 0x1028b10, Func Offset: 0xb0
	// Line 281, Address: 0x1028b30, Func Offset: 0xd0
	// Line 282, Address: 0x1028b34, Func Offset: 0xd4
	// Line 283, Address: 0x1028b40, Func Offset: 0xe0
	// Line 285, Address: 0x1028b4c, Func Offset: 0xec
	// Line 286, Address: 0x1028b58, Func Offset: 0xf8
	// Line 288, Address: 0x1028b64, Func Offset: 0x104
	// Line 289, Address: 0x1028b6c, Func Offset: 0x10c
	// Func End, Address: 0x1028b80, Func Offset: 0x120
}

// 
// Start address: 0x1028b80
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 328, Address: 0x1028b80, Func Offset: 0
	// Line 331, Address: 0x1028b94, Func Offset: 0x14
	// Line 332, Address: 0x1028ba4, Func Offset: 0x24
	// Line 333, Address: 0x1028bac, Func Offset: 0x2c
	// Line 335, Address: 0x1028bbc, Func Offset: 0x3c
	// Line 336, Address: 0x1028bd4, Func Offset: 0x54
	// Line 337, Address: 0x1028be4, Func Offset: 0x64
	// Line 338, Address: 0x1028bec, Func Offset: 0x6c
	// Line 340, Address: 0x1028bf0, Func Offset: 0x70
	// Line 342, Address: 0x1028bf8, Func Offset: 0x78
	// Line 345, Address: 0x1028c00, Func Offset: 0x80
	// Line 346, Address: 0x1028c14, Func Offset: 0x94
	// Line 350, Address: 0x1028c28, Func Offset: 0xa8
	// Line 351, Address: 0x1028c3c, Func Offset: 0xbc
	// Line 352, Address: 0x1028c48, Func Offset: 0xc8
	// Line 353, Address: 0x1028c50, Func Offset: 0xd0
	// Line 357, Address: 0x1028c54, Func Offset: 0xd4
	// Line 358, Address: 0x1028c78, Func Offset: 0xf8
	// Line 362, Address: 0x1028c88, Func Offset: 0x108
	// Line 364, Address: 0x1028c90, Func Offset: 0x110
	// Line 365, Address: 0x1028ca4, Func Offset: 0x124
	// Line 366, Address: 0x1028cb0, Func Offset: 0x130
	// Line 367, Address: 0x1028cb8, Func Offset: 0x138
	// Line 371, Address: 0x1028cbc, Func Offset: 0x13c
	// Line 372, Address: 0x1028ce0, Func Offset: 0x160
	// Line 376, Address: 0x1028cf0, Func Offset: 0x170
	// Line 378, Address: 0x1028cf8, Func Offset: 0x178
	// Line 381, Address: 0x1028d08, Func Offset: 0x188
	// Line 382, Address: 0x1028d18, Func Offset: 0x198
	// Line 383, Address: 0x1028d28, Func Offset: 0x1a8
	// Line 384, Address: 0x1028d38, Func Offset: 0x1b8
	// Line 385, Address: 0x1028d48, Func Offset: 0x1c8
	// Func End, Address: 0x1028d64, Func Offset: 0x1e4
}

// 
// Start address: 0x1028d70
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 406, Address: 0x1028d70, Func Offset: 0
	// Line 409, Address: 0x1028d7c, Func Offset: 0xc
	// Line 410, Address: 0x1028d84, Func Offset: 0x14
	// Line 412, Address: 0x1028d88, Func Offset: 0x18
	// Line 413, Address: 0x1028d94, Func Offset: 0x24
	// Line 415, Address: 0x1028da8, Func Offset: 0x38
	// Line 416, Address: 0x1028db4, Func Offset: 0x44
	// Line 417, Address: 0x1028dc0, Func Offset: 0x50
	// Line 419, Address: 0x1028dcc, Func Offset: 0x5c
	// Line 420, Address: 0x1028de8, Func Offset: 0x78
	// Line 422, Address: 0x1028e18, Func Offset: 0xa8
	// Line 423, Address: 0x1028e34, Func Offset: 0xc4
	// Line 425, Address: 0x1028e40, Func Offset: 0xd0
	// Line 426, Address: 0x1028e4c, Func Offset: 0xdc
	// Line 427, Address: 0x1028e70, Func Offset: 0x100
	// Func End, Address: 0x1028e7c, Func Offset: 0x10c
}

// 
// Start address: 0x1028e80
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
	// Line 443, Address: 0x1028e80, Func Offset: 0
	// Line 455, Address: 0x1028e9c, Func Offset: 0x1c
	// Line 460, Address: 0x1028eac, Func Offset: 0x2c
	// Line 462, Address: 0x1028ed8, Func Offset: 0x58
	// Line 464, Address: 0x1028ee0, Func Offset: 0x60
	// Line 465, Address: 0x1028ee8, Func Offset: 0x68
	// Line 467, Address: 0x1028ef0, Func Offset: 0x70
	// Line 468, Address: 0x1028f00, Func Offset: 0x80
	// Line 471, Address: 0x1028f10, Func Offset: 0x90
	// Line 472, Address: 0x1028f2c, Func Offset: 0xac
	// Line 474, Address: 0x1028f3c, Func Offset: 0xbc
	// Line 475, Address: 0x1028f50, Func Offset: 0xd0
	// Line 477, Address: 0x1028f60, Func Offset: 0xe0
	// Line 478, Address: 0x1028f74, Func Offset: 0xf4
	// Line 479, Address: 0x1028f7c, Func Offset: 0xfc
	// Line 481, Address: 0x1028f8c, Func Offset: 0x10c
	// Line 482, Address: 0x1028f98, Func Offset: 0x118
	// Line 483, Address: 0x1028fa0, Func Offset: 0x120
	// Line 486, Address: 0x1028fb8, Func Offset: 0x138
	// Line 488, Address: 0x1028fc8, Func Offset: 0x148
	// Line 489, Address: 0x1028ff0, Func Offset: 0x170
	// Line 490, Address: 0x1029028, Func Offset: 0x1a8
	// Line 492, Address: 0x102903c, Func Offset: 0x1bc
	// Line 494, Address: 0x1029048, Func Offset: 0x1c8
	// Line 496, Address: 0x1029060, Func Offset: 0x1e0
	// Line 497, Address: 0x102906c, Func Offset: 0x1ec
	// Line 498, Address: 0x1029078, Func Offset: 0x1f8
	// Line 499, Address: 0x1029098, Func Offset: 0x218
	// Line 501, Address: 0x10290a4, Func Offset: 0x224
	// Line 502, Address: 0x10290b8, Func Offset: 0x238
	// Line 503, Address: 0x10290c8, Func Offset: 0x248
	// Line 505, Address: 0x10290d0, Func Offset: 0x250
	// Line 506, Address: 0x10290dc, Func Offset: 0x25c
	// Line 510, Address: 0x10290e8, Func Offset: 0x268
	// Line 511, Address: 0x10290f4, Func Offset: 0x274
	// Line 512, Address: 0x1029124, Func Offset: 0x2a4
	// Line 513, Address: 0x1029154, Func Offset: 0x2d4
	// Line 514, Address: 0x1029170, Func Offset: 0x2f0
	// Func End, Address: 0x1029194, Func Offset: 0x314
}

// 
// Start address: 0x10291a0
void z51bline0(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl0[4];
	// Line 528, Address: 0x10291a0, Func Offset: 0
	// Line 533, Address: 0x10291b8, Func Offset: 0x18
	// Line 537, Address: 0x10291e4, Func Offset: 0x44
	// Line 538, Address: 0x1029208, Func Offset: 0x68
	// Line 539, Address: 0x1029214, Func Offset: 0x74
	// Line 541, Address: 0x1029218, Func Offset: 0x78
	// Line 542, Address: 0x102921c, Func Offset: 0x7c
	// Line 543, Address: 0x1029228, Func Offset: 0x88
	// Line 545, Address: 0x102923c, Func Offset: 0x9c
	// Line 547, Address: 0x1029248, Func Offset: 0xa8
	// Line 549, Address: 0x1029268, Func Offset: 0xc8
	// Line 551, Address: 0x1029280, Func Offset: 0xe0
	// Line 552, Address: 0x1029294, Func Offset: 0xf4
	// Line 553, Address: 0x10292a0, Func Offset: 0x100
	// Line 555, Address: 0x10292ac, Func Offset: 0x10c
	// Line 556, Address: 0x10292d0, Func Offset: 0x130
	// Line 557, Address: 0x10292dc, Func Offset: 0x13c
	// Line 558, Address: 0x1029300, Func Offset: 0x160
	// Line 559, Address: 0x102930c, Func Offset: 0x16c
	// Line 560, Address: 0x1029320, Func Offset: 0x180
	// Func End, Address: 0x102933c, Func Offset: 0x19c
}

// 
// Start address: 0x1029340
void z51bline1(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl1[12];
	// Line 574, Address: 0x1029340, Func Offset: 0
	// Line 579, Address: 0x1029358, Func Offset: 0x18
	// Line 584, Address: 0x102938c, Func Offset: 0x4c
	// Line 585, Address: 0x10293b0, Func Offset: 0x70
	// Line 586, Address: 0x10293cc, Func Offset: 0x8c
	// Line 588, Address: 0x10293d0, Func Offset: 0x90
	// Line 589, Address: 0x10293d4, Func Offset: 0x94
	// Line 591, Address: 0x10293e0, Func Offset: 0xa0
	// Line 593, Address: 0x10293ec, Func Offset: 0xac
	// Line 595, Address: 0x102940c, Func Offset: 0xcc
	// Line 597, Address: 0x1029424, Func Offset: 0xe4
	// Line 598, Address: 0x1029430, Func Offset: 0xf0
	// Line 599, Address: 0x1029444, Func Offset: 0x104
	// Line 601, Address: 0x1029450, Func Offset: 0x110
	// Line 602, Address: 0x1029474, Func Offset: 0x134
	// Line 603, Address: 0x1029480, Func Offset: 0x140
	// Line 604, Address: 0x10294a4, Func Offset: 0x164
	// Line 605, Address: 0x10294b0, Func Offset: 0x170
	// Func End, Address: 0x10294cc, Func Offset: 0x18c
}

// 
// Start address: 0x10294d0
void z51bline2(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl2[4];
	// Line 619, Address: 0x10294d0, Func Offset: 0
	// Line 624, Address: 0x10294e8, Func Offset: 0x18
	// Line 628, Address: 0x1029514, Func Offset: 0x44
	// Line 629, Address: 0x1029538, Func Offset: 0x68
	// Line 630, Address: 0x1029544, Func Offset: 0x74
	// Line 632, Address: 0x1029548, Func Offset: 0x78
	// Line 633, Address: 0x102954c, Func Offset: 0x7c
	// Line 634, Address: 0x1029558, Func Offset: 0x88
	// Line 636, Address: 0x102956c, Func Offset: 0x9c
	// Line 638, Address: 0x1029578, Func Offset: 0xa8
	// Line 640, Address: 0x1029598, Func Offset: 0xc8
	// Line 642, Address: 0x10295b0, Func Offset: 0xe0
	// Line 643, Address: 0x10295c4, Func Offset: 0xf4
	// Line 644, Address: 0x10295d0, Func Offset: 0x100
	// Line 646, Address: 0x10295dc, Func Offset: 0x10c
	// Line 647, Address: 0x1029600, Func Offset: 0x130
	// Line 648, Address: 0x102960c, Func Offset: 0x13c
	// Line 649, Address: 0x1029630, Func Offset: 0x160
	// Line 650, Address: 0x102963c, Func Offset: 0x16c
	// Line 651, Address: 0x1029650, Func Offset: 0x180
	// Func End, Address: 0x102966c, Func Offset: 0x19c
}

// 
// Start address: 0x1029670
void z51bline3(short** ppHscw)
{
	int lHwk;
	_anon0 ldHposwk;
	int i;
	int j;
	short wk;
	char z51bscrtbl3[10];
	// Line 665, Address: 0x1029670, Func Offset: 0
	// Line 670, Address: 0x1029688, Func Offset: 0x18
	// Line 675, Address: 0x10296bc, Func Offset: 0x4c
	// Line 676, Address: 0x10296e0, Func Offset: 0x70
	// Line 677, Address: 0x10296fc, Func Offset: 0x8c
	// Line 679, Address: 0x1029700, Func Offset: 0x90
	// Line 680, Address: 0x1029704, Func Offset: 0x94
	// Line 682, Address: 0x1029710, Func Offset: 0xa0
	// Line 684, Address: 0x102971c, Func Offset: 0xac
	// Line 686, Address: 0x102973c, Func Offset: 0xcc
	// Line 688, Address: 0x1029754, Func Offset: 0xe4
	// Line 689, Address: 0x1029760, Func Offset: 0xf0
	// Line 690, Address: 0x1029774, Func Offset: 0x104
	// Line 692, Address: 0x1029780, Func Offset: 0x110
	// Line 693, Address: 0x10297a4, Func Offset: 0x134
	// Line 694, Address: 0x10297b0, Func Offset: 0x140
	// Line 695, Address: 0x10297d4, Func Offset: 0x164
	// Line 696, Address: 0x10297e0, Func Offset: 0x170
	// Func End, Address: 0x10297fc, Func Offset: 0x18c
}

// 
// Start address: 0x1029800
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 717, Address: 0x1029800, Func Offset: 0
	// Line 721, Address: 0x102981c, Func Offset: 0x1c
	// Line 723, Address: 0x1029820, Func Offset: 0x20
	// Line 724, Address: 0x102983c, Func Offset: 0x3c
	// Line 725, Address: 0x1029848, Func Offset: 0x48
	// Line 727, Address: 0x1029854, Func Offset: 0x54
	// Line 728, Address: 0x102985c, Func Offset: 0x5c
	// Line 729, Address: 0x102986c, Func Offset: 0x6c
	// Line 730, Address: 0x1029890, Func Offset: 0x90
	// Line 731, Address: 0x10298b0, Func Offset: 0xb0
	// Func End, Address: 0x10298c4, Func Offset: 0xc4
}

// 
// Start address: 0x10298d0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 837, Address: 0x10298d0, Func Offset: 0
	// Line 840, Address: 0x10298e0, Func Offset: 0x10
	// Line 841, Address: 0x10298f0, Func Offset: 0x20
	// Line 842, Address: 0x10298fc, Func Offset: 0x2c
	// Line 844, Address: 0x1029934, Func Offset: 0x64
	// Line 845, Address: 0x102993c, Func Offset: 0x6c
	// Line 846, Address: 0x1029950, Func Offset: 0x80
	// Line 847, Address: 0x1029970, Func Offset: 0xa0
	// Line 848, Address: 0x1029984, Func Offset: 0xb4
	// Line 850, Address: 0x102998c, Func Offset: 0xbc
	// Line 855, Address: 0x10299a0, Func Offset: 0xd0
	// Func End, Address: 0x10299b4, Func Offset: 0xe4
}

// 
// Start address: 0x10299c0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 873, Address: 0x10299c0, Func Offset: 0
	// Line 877, Address: 0x10299d4, Func Offset: 0x14
	// Line 878, Address: 0x10299dc, Func Offset: 0x1c
	// Line 879, Address: 0x10299e4, Func Offset: 0x24
	// Line 880, Address: 0x10299ec, Func Offset: 0x2c
	// Line 881, Address: 0x10299f0, Func Offset: 0x30
	// Line 882, Address: 0x1029a14, Func Offset: 0x54
	// Line 883, Address: 0x1029a20, Func Offset: 0x60
	// Line 885, Address: 0x1029a3c, Func Offset: 0x7c
	// Line 886, Address: 0x1029a48, Func Offset: 0x88
	// Line 887, Address: 0x1029a5c, Func Offset: 0x9c
	// Line 888, Address: 0x1029a68, Func Offset: 0xa8
	// Line 889, Address: 0x1029a8c, Func Offset: 0xcc
	// Line 891, Address: 0x1029a94, Func Offset: 0xd4
	// Line 896, Address: 0x1029abc, Func Offset: 0xfc
	// Func End, Address: 0x1029ad0, Func Offset: 0x110
}

// 
// Start address: 0x1029ad0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 914, Address: 0x1029ad0, Func Offset: 0
	// Line 918, Address: 0x1029ae4, Func Offset: 0x14
	// Line 919, Address: 0x1029aec, Func Offset: 0x1c
	// Line 920, Address: 0x1029af4, Func Offset: 0x24
	// Line 921, Address: 0x1029afc, Func Offset: 0x2c
	// Line 922, Address: 0x1029b00, Func Offset: 0x30
	// Line 923, Address: 0x1029b24, Func Offset: 0x54
	// Line 924, Address: 0x1029b30, Func Offset: 0x60
	// Line 926, Address: 0x1029b4c, Func Offset: 0x7c
	// Line 927, Address: 0x1029b58, Func Offset: 0x88
	// Line 928, Address: 0x1029b6c, Func Offset: 0x9c
	// Line 929, Address: 0x1029b78, Func Offset: 0xa8
	// Line 930, Address: 0x1029b9c, Func Offset: 0xcc
	// Line 932, Address: 0x1029ba4, Func Offset: 0xd4
	// Line 937, Address: 0x1029bcc, Func Offset: 0xfc
	// Func End, Address: 0x1029be0, Func Offset: 0x110
}

// 
// Start address: 0x1029be0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 955, Address: 0x1029be0, Func Offset: 0
	// Line 959, Address: 0x1029bf4, Func Offset: 0x14
	// Line 960, Address: 0x1029bfc, Func Offset: 0x1c
	// Line 961, Address: 0x1029c04, Func Offset: 0x24
	// Line 962, Address: 0x1029c0c, Func Offset: 0x2c
	// Line 963, Address: 0x1029c10, Func Offset: 0x30
	// Line 964, Address: 0x1029c34, Func Offset: 0x54
	// Line 965, Address: 0x1029c40, Func Offset: 0x60
	// Line 967, Address: 0x1029c5c, Func Offset: 0x7c
	// Line 968, Address: 0x1029c68, Func Offset: 0x88
	// Line 969, Address: 0x1029c7c, Func Offset: 0x9c
	// Line 970, Address: 0x1029c88, Func Offset: 0xa8
	// Line 971, Address: 0x1029cac, Func Offset: 0xcc
	// Line 973, Address: 0x1029cb4, Func Offset: 0xd4
	// Line 978, Address: 0x1029cdc, Func Offset: 0xfc
	// Func End, Address: 0x1029cf0, Func Offset: 0x110
}

// 
// Start address: 0x1029cf0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 993, Address: 0x1029cf0, Func Offset: 0
	// Line 997, Address: 0x1029d00, Func Offset: 0x10
	// Line 999, Address: 0x1029d10, Func Offset: 0x20
	// Line 1000, Address: 0x1029d18, Func Offset: 0x28
	// Line 1001, Address: 0x1029d4c, Func Offset: 0x5c
	// Line 1002, Address: 0x1029d54, Func Offset: 0x64
	// Line 1003, Address: 0x1029d68, Func Offset: 0x78
	// Line 1004, Address: 0x1029d8c, Func Offset: 0x9c
	// Line 1005, Address: 0x1029da0, Func Offset: 0xb0
	// Line 1006, Address: 0x1029da8, Func Offset: 0xb8
	// Line 1011, Address: 0x1029dbc, Func Offset: 0xcc
	// Func End, Address: 0x1029dd4, Func Offset: 0xe4
}

// 
// Start address: 0x1029de0
void scrh_move()
{
	short xwk;
	// Line 1028, Address: 0x1029de0, Func Offset: 0
	// Line 1031, Address: 0x1029de8, Func Offset: 0x8
	// Line 1032, Address: 0x1029e30, Func Offset: 0x50
	// Line 1034, Address: 0x1029e40, Func Offset: 0x60
	// Line 1035, Address: 0x1029e48, Func Offset: 0x68
	// Line 1036, Address: 0x1029e50, Func Offset: 0x70
	// Line 1038, Address: 0x1029e60, Func Offset: 0x80
	// Line 1039, Address: 0x1029e74, Func Offset: 0x94
	// Line 1043, Address: 0x1029e80, Func Offset: 0xa0
	// Line 1044, Address: 0x1029e94, Func Offset: 0xb4
	// Line 1045, Address: 0x1029eb8, Func Offset: 0xd8
	// Line 1047, Address: 0x1029ec8, Func Offset: 0xe8
	// Line 1049, Address: 0x1029ed0, Func Offset: 0xf0
	// Line 1050, Address: 0x1029ee4, Func Offset: 0x104
	// Line 1054, Address: 0x1029ef0, Func Offset: 0x110
	// Line 1055, Address: 0x1029f04, Func Offset: 0x124
	// Line 1056, Address: 0x1029f28, Func Offset: 0x148
	// Line 1061, Address: 0x1029f38, Func Offset: 0x158
	// Line 1062, Address: 0x1029f68, Func Offset: 0x188
	// Line 1063, Address: 0x1029f70, Func Offset: 0x190
	// Func End, Address: 0x1029f80, Func Offset: 0x1a0
}

// 
// Start address: 0x1029f80
void scroll_v()
{
	short ywk;
	// Line 1078, Address: 0x1029f80, Func Offset: 0
	// Line 1081, Address: 0x1029f8c, Func Offset: 0xc
	// Line 1082, Address: 0x1029fc0, Func Offset: 0x40
	// Line 1083, Address: 0x1029fd8, Func Offset: 0x58
	// Line 1087, Address: 0x1029fe4, Func Offset: 0x64
	// Line 1088, Address: 0x1029ffc, Func Offset: 0x7c
	// Line 1089, Address: 0x102a008, Func Offset: 0x88
	// Line 1090, Address: 0x102a02c, Func Offset: 0xac
	// Line 1091, Address: 0x102a040, Func Offset: 0xc0
	// Line 1092, Address: 0x102a04c, Func Offset: 0xcc
	// Line 1093, Address: 0x102a054, Func Offset: 0xd4
	// Line 1094, Address: 0x102a07c, Func Offset: 0xfc
	// Line 1095, Address: 0x102a0a4, Func Offset: 0x124
	// Line 1096, Address: 0x102a0b0, Func Offset: 0x130
	// Line 1098, Address: 0x102a0b8, Func Offset: 0x138
	// Line 1099, Address: 0x102a0e0, Func Offset: 0x160
	// Line 1100, Address: 0x102a0f0, Func Offset: 0x170
	// Line 1101, Address: 0x102a0f8, Func Offset: 0x178
	// Line 1106, Address: 0x102a100, Func Offset: 0x180
	// Line 1107, Address: 0x102a12c, Func Offset: 0x1ac
	// Line 1108, Address: 0x102a138, Func Offset: 0x1b8
	// Line 1109, Address: 0x102a140, Func Offset: 0x1c0
	// Line 1110, Address: 0x102a150, Func Offset: 0x1d0
	// Line 1111, Address: 0x102a158, Func Offset: 0x1d8
	// Line 1116, Address: 0x102a160, Func Offset: 0x1e0
	// Line 1117, Address: 0x102a168, Func Offset: 0x1e8
	// Func End, Address: 0x102a17c, Func Offset: 0x1fc
}

// 
// Start address: 0x102a180
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1131, Address: 0x102a180, Func Offset: 0
	// Line 1134, Address: 0x102a190, Func Offset: 0x10
	// Line 1135, Address: 0x102a1ac, Func Offset: 0x2c
	// Line 1136, Address: 0x102a1c4, Func Offset: 0x44
	// Line 1137, Address: 0x102a1e8, Func Offset: 0x68
	// Line 1138, Address: 0x102a1f0, Func Offset: 0x70
	// Line 1142, Address: 0x102a200, Func Offset: 0x80
	// Line 1143, Address: 0x102a214, Func Offset: 0x94
	// Line 1144, Address: 0x102a220, Func Offset: 0xa0
	// Line 1147, Address: 0x102a228, Func Offset: 0xa8
	// Line 1148, Address: 0x102a240, Func Offset: 0xc0
	// Line 1149, Address: 0x102a24c, Func Offset: 0xcc
	// Line 1150, Address: 0x102a26c, Func Offset: 0xec
	// Line 1151, Address: 0x102a278, Func Offset: 0xf8
	// Line 1152, Address: 0x102a280, Func Offset: 0x100
	// Line 1154, Address: 0x102a28c, Func Offset: 0x10c
	// Line 1156, Address: 0x102a294, Func Offset: 0x114
	// Line 1157, Address: 0x102a2ac, Func Offset: 0x12c
	// Line 1158, Address: 0x102a2b8, Func Offset: 0x138
	// Line 1159, Address: 0x102a2d8, Func Offset: 0x158
	// Line 1160, Address: 0x102a2e4, Func Offset: 0x164
	// Line 1161, Address: 0x102a2ec, Func Offset: 0x16c
	// Line 1164, Address: 0x102a2f8, Func Offset: 0x178
	// Func End, Address: 0x102a30c, Func Offset: 0x18c
}

// 
// Start address: 0x102a310
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1178, Address: 0x102a310, Func Offset: 0
	// Line 1181, Address: 0x102a320, Func Offset: 0x10
	// Line 1183, Address: 0x102a32c, Func Offset: 0x1c
	// Line 1184, Address: 0x102a344, Func Offset: 0x34
	// Line 1185, Address: 0x102a350, Func Offset: 0x40
	// Line 1186, Address: 0x102a370, Func Offset: 0x60
	// Line 1187, Address: 0x102a37c, Func Offset: 0x6c
	// Line 1188, Address: 0x102a384, Func Offset: 0x74
	// Line 1190, Address: 0x102a390, Func Offset: 0x80
	// Func End, Address: 0x102a3a4, Func Offset: 0x94
}

// 
// Start address: 0x102a3b0
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 1205, Address: 0x102a3b0, Func Offset: 0
	// Line 1208, Address: 0x102a3bc, Func Offset: 0xc
	// Line 1209, Address: 0x102a3c0, Func Offset: 0x10
	// Line 1210, Address: 0x102a3ec, Func Offset: 0x3c
	// Line 1211, Address: 0x102a400, Func Offset: 0x50
	// Line 1212, Address: 0x102a40c, Func Offset: 0x5c
	// Line 1213, Address: 0x102a414, Func Offset: 0x64
	// Line 1215, Address: 0x102a420, Func Offset: 0x70
	// Func End, Address: 0x102a430, Func Offset: 0x80
}

// 
// Start address: 0x102a430
void sv_move_sub2()
{
	// Line 1219, Address: 0x102a430, Func Offset: 0
	// Line 1220, Address: 0x102a438, Func Offset: 0x8
	// Line 1222, Address: 0x102a440, Func Offset: 0x10
	// Line 1223, Address: 0x102a44c, Func Offset: 0x1c
	// Func End, Address: 0x102a45c, Func Offset: 0x2c
}

// 
// Start address: 0x102a460
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	// Line 1237, Address: 0x102a460, Func Offset: 0
	// Line 1240, Address: 0x102a46c, Func Offset: 0xc
	// Line 1241, Address: 0x102a490, Func Offset: 0x30
	// Line 1242, Address: 0x102a4b4, Func Offset: 0x54
	// Line 1243, Address: 0x102a4c0, Func Offset: 0x60
	// Func End, Address: 0x102a4d0, Func Offset: 0x70
}

// 
// Start address: 0x102a4d0
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1258, Address: 0x102a4d0, Func Offset: 0
	// Line 1259, Address: 0x102a4dc, Func Offset: 0xc
	// Line 1260, Address: 0x102a504, Func Offset: 0x34
	// Line 1262, Address: 0x102a51c, Func Offset: 0x4c
	// Line 1263, Address: 0x102a528, Func Offset: 0x58
	// Line 1264, Address: 0x102a530, Func Offset: 0x60
	// Line 1265, Address: 0x102a53c, Func Offset: 0x6c
	// Line 1266, Address: 0x102a550, Func Offset: 0x80
	// Line 1267, Address: 0x102a564, Func Offset: 0x94
	// Line 1271, Address: 0x102a578, Func Offset: 0xa8
	// Line 1272, Address: 0x102a584, Func Offset: 0xb4
	// Func End, Address: 0x102a594, Func Offset: 0xc4
}

// 
// Start address: 0x102a5a0
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	// Line 1286, Address: 0x102a5a0, Func Offset: 0
	// Line 1289, Address: 0x102a5ac, Func Offset: 0xc
	// Line 1290, Address: 0x102a5cc, Func Offset: 0x2c
	// Line 1291, Address: 0x102a5f0, Func Offset: 0x50
	// Line 1292, Address: 0x102a5fc, Func Offset: 0x5c
	// Func End, Address: 0x102a60c, Func Offset: 0x6c
}

// 
// Start address: 0x102a610
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1307, Address: 0x102a610, Func Offset: 0
	// Line 1308, Address: 0x102a61c, Func Offset: 0xc
	// Line 1309, Address: 0x102a644, Func Offset: 0x34
	// Line 1311, Address: 0x102a65c, Func Offset: 0x4c
	// Line 1312, Address: 0x102a668, Func Offset: 0x58
	// Line 1313, Address: 0x102a670, Func Offset: 0x60
	// Line 1314, Address: 0x102a67c, Func Offset: 0x6c
	// Line 1315, Address: 0x102a690, Func Offset: 0x80
	// Line 1316, Address: 0x102a6a4, Func Offset: 0x94
	// Line 1320, Address: 0x102a6b8, Func Offset: 0xa8
	// Line 1321, Address: 0x102a6c4, Func Offset: 0xb4
	// Func End, Address: 0x102a6d4, Func Offset: 0xc4
}

// 
// Start address: 0x102a6e0
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1338, Address: 0x102a6e0, Func Offset: 0
	// Line 1342, Address: 0x102a6f0, Func Offset: 0x10
	// Line 1343, Address: 0x102a700, Func Offset: 0x20
	// Line 1344, Address: 0x102a724, Func Offset: 0x44
	// Line 1345, Address: 0x102a738, Func Offset: 0x58
	// Line 1346, Address: 0x102a750, Func Offset: 0x70
	// Line 1348, Address: 0x102a75c, Func Offset: 0x7c
	// Line 1350, Address: 0x102a768, Func Offset: 0x88
	// Line 1351, Address: 0x102a7a4, Func Offset: 0xc4
	// Line 1352, Address: 0x102a7ac, Func Offset: 0xcc
	// Line 1353, Address: 0x102a7c0, Func Offset: 0xe0
	// Line 1354, Address: 0x102a7ec, Func Offset: 0x10c
	// Line 1355, Address: 0x102a7fc, Func Offset: 0x11c
	// Line 1356, Address: 0x102a810, Func Offset: 0x130
	// Line 1357, Address: 0x102a818, Func Offset: 0x138
	// Line 1362, Address: 0x102a82c, Func Offset: 0x14c
	// Func End, Address: 0x102a840, Func Offset: 0x160
}

// 
// Start address: 0x102a840
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
	// Line 1380, Address: 0x102a840, Func Offset: 0
	// Line 1389, Address: 0x102a860, Func Offset: 0x20
	// Line 1390, Address: 0x102a864, Func Offset: 0x24
	// Line 1391, Address: 0x102a870, Func Offset: 0x30
	// Line 1392, Address: 0x102a87c, Func Offset: 0x3c
	// Line 1393, Address: 0x102a884, Func Offset: 0x44
	// Line 1394, Address: 0x102a88c, Func Offset: 0x4c
	// Line 1396, Address: 0x102a8a0, Func Offset: 0x60
	// Line 1397, Address: 0x102a8a4, Func Offset: 0x64
	// Line 1398, Address: 0x102a8b0, Func Offset: 0x70
	// Line 1399, Address: 0x102a8bc, Func Offset: 0x7c
	// Line 1400, Address: 0x102a8c4, Func Offset: 0x84
	// Line 1402, Address: 0x102a8cc, Func Offset: 0x8c
	// Line 1403, Address: 0x102a8d8, Func Offset: 0x98
	// Line 1404, Address: 0x102a8ec, Func Offset: 0xac
	// Line 1406, Address: 0x102a8f8, Func Offset: 0xb8
	// Line 1407, Address: 0x102a900, Func Offset: 0xc0
	// Line 1409, Address: 0x102a908, Func Offset: 0xc8
	// Line 1411, Address: 0x102a928, Func Offset: 0xe8
	// Line 1417, Address: 0x102a954, Func Offset: 0x114
	// Line 1418, Address: 0x102a968, Func Offset: 0x128
	// Line 1420, Address: 0x102a974, Func Offset: 0x134
	// Line 1421, Address: 0x102a97c, Func Offset: 0x13c
	// Line 1422, Address: 0x102a984, Func Offset: 0x144
	// Line 1424, Address: 0x102a9a4, Func Offset: 0x164
	// Line 1430, Address: 0x102a9d0, Func Offset: 0x190
	// Line 1431, Address: 0x102a9e4, Func Offset: 0x1a4
	// Line 1433, Address: 0x102a9f0, Func Offset: 0x1b0
	// Line 1434, Address: 0x102a9f8, Func Offset: 0x1b8
	// Line 1435, Address: 0x102aa00, Func Offset: 0x1c0
	// Line 1437, Address: 0x102aa20, Func Offset: 0x1e0
	// Line 1443, Address: 0x102aa4c, Func Offset: 0x20c
	// Line 1444, Address: 0x102aa60, Func Offset: 0x220
	// Line 1446, Address: 0x102aa6c, Func Offset: 0x22c
	// Line 1447, Address: 0x102aa74, Func Offset: 0x234
	// Line 1448, Address: 0x102aa7c, Func Offset: 0x23c
	// Line 1450, Address: 0x102aa9c, Func Offset: 0x25c
	// Line 1459, Address: 0x102aac8, Func Offset: 0x288
	// Func End, Address: 0x102aaf0, Func Offset: 0x2b0
}

// 
// Start address: 0x102aaf0
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
	// Line 1476, Address: 0x102aaf0, Func Offset: 0
	// Line 1487, Address: 0x102ab1c, Func Offset: 0x2c
	// Line 1489, Address: 0x102ab24, Func Offset: 0x34
	// Line 1490, Address: 0x102ab3c, Func Offset: 0x4c
	// Line 1491, Address: 0x102ab50, Func Offset: 0x60
	// Line 1493, Address: 0x102ab58, Func Offset: 0x68
	// Line 1495, Address: 0x102ab6c, Func Offset: 0x7c
	// Line 1496, Address: 0x102ab84, Func Offset: 0x94
	// Line 1497, Address: 0x102ab98, Func Offset: 0xa8
	// Line 1498, Address: 0x102aba0, Func Offset: 0xb0
	// Line 1500, Address: 0x102aba8, Func Offset: 0xb8
	// Line 1501, Address: 0x102abbc, Func Offset: 0xcc
	// Line 1506, Address: 0x102abc4, Func Offset: 0xd4
	// Line 1507, Address: 0x102ac14, Func Offset: 0x124
	// Line 1508, Address: 0x102ac1c, Func Offset: 0x12c
	// Line 1514, Address: 0x102ac3c, Func Offset: 0x14c
	// Line 1515, Address: 0x102ac5c, Func Offset: 0x16c
	// Line 1516, Address: 0x102ac80, Func Offset: 0x190
	// Line 1517, Address: 0x102ac8c, Func Offset: 0x19c
	// Line 1518, Address: 0x102ac94, Func Offset: 0x1a4
	// Line 1520, Address: 0x102acb4, Func Offset: 0x1c4
	// Line 1524, Address: 0x102ace0, Func Offset: 0x1f0
	// Line 1527, Address: 0x102ace8, Func Offset: 0x1f8
	// Line 1528, Address: 0x102acec, Func Offset: 0x1fc
	// Line 1532, Address: 0x102ad0c, Func Offset: 0x21c
	// Line 1539, Address: 0x102ad38, Func Offset: 0x248
	// Line 1546, Address: 0x102ad4c, Func Offset: 0x25c
	// Line 1547, Address: 0x102ad54, Func Offset: 0x264
	// Line 1548, Address: 0x102ad5c, Func Offset: 0x26c
	// Line 1549, Address: 0x102ad74, Func Offset: 0x284
	// Line 1550, Address: 0x102ad94, Func Offset: 0x2a4
	// Line 1554, Address: 0x102ad9c, Func Offset: 0x2ac
	// Line 1556, Address: 0x102adcc, Func Offset: 0x2dc
	// Line 1557, Address: 0x102add8, Func Offset: 0x2e8
	// Line 1561, Address: 0x102ade8, Func Offset: 0x2f8
	// Line 1562, Address: 0x102adf4, Func Offset: 0x304
	// Line 1564, Address: 0x102ae14, Func Offset: 0x324
	// Line 1565, Address: 0x102ae4c, Func Offset: 0x35c
	// Line 1566, Address: 0x102ae6c, Func Offset: 0x37c
	// Line 1568, Address: 0x102ae90, Func Offset: 0x3a0
	// Line 1571, Address: 0x102aeb4, Func Offset: 0x3c4
	// Line 1573, Address: 0x102aed4, Func Offset: 0x3e4
	// Line 1575, Address: 0x102aee8, Func Offset: 0x3f8
	// Line 1576, Address: 0x102aef4, Func Offset: 0x404
	// Line 1577, Address: 0x102af04, Func Offset: 0x414
	// Line 1579, Address: 0x102af0c, Func Offset: 0x41c
	// Func End, Address: 0x102af34, Func Offset: 0x444
}

// 
// Start address: 0x102af40
void scrollwrtc()
{
	// Line 1585, Address: 0x102af40, Func Offset: 0
	// Func End, Address: 0x102af48, Func Offset: 0x8
}

// 
// Start address: 0x102af50
void scrollwrtz()
{
	// Line 1590, Address: 0x102af50, Func Offset: 0
	// Func End, Address: 0x102af58, Func Offset: 0x8
}

// 
// Start address: 0x102af60
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1608, Address: 0x102af60, Func Offset: 0
	// Line 1621, Address: 0x102af88, Func Offset: 0x28
	// Line 1624, Address: 0x102afa8, Func Offset: 0x48
	// Line 1625, Address: 0x102afbc, Func Offset: 0x5c
	// Line 1626, Address: 0x102afd0, Func Offset: 0x70
	// Line 1627, Address: 0x102afe4, Func Offset: 0x84
	// Line 1629, Address: 0x102aff8, Func Offset: 0x98
	// Line 1630, Address: 0x102b004, Func Offset: 0xa4
	// Line 1631, Address: 0x102b018, Func Offset: 0xb8
	// Func End, Address: 0x102b028, Func Offset: 0xc8
}

// 
// Start address: 0x102b030
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1635, Address: 0x102b030, Func Offset: 0
	// Line 1639, Address: 0x102b058, Func Offset: 0x28
	// Line 1642, Address: 0x102b078, Func Offset: 0x48
	// Line 1643, Address: 0x102b08c, Func Offset: 0x5c
	// Line 1644, Address: 0x102b0a0, Func Offset: 0x70
	// Line 1645, Address: 0x102b0b4, Func Offset: 0x84
	// Line 1647, Address: 0x102b0c8, Func Offset: 0x98
	// Line 1648, Address: 0x102b0d4, Func Offset: 0xa4
	// Line 1649, Address: 0x102b0e8, Func Offset: 0xb8
	// Func End, Address: 0x102b0f8, Func Offset: 0xc8
}

// 
// Start address: 0x102b100
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1669, Address: 0x102b100, Func Offset: 0
	// Line 1673, Address: 0x102b128, Func Offset: 0x28
	// Line 1676, Address: 0x102b148, Func Offset: 0x48
	// Line 1677, Address: 0x102b15c, Func Offset: 0x5c
	// Line 1678, Address: 0x102b16c, Func Offset: 0x6c
	// Line 1679, Address: 0x102b180, Func Offset: 0x80
	// Line 1681, Address: 0x102b190, Func Offset: 0x90
	// Line 1682, Address: 0x102b19c, Func Offset: 0x9c
	// Line 1683, Address: 0x102b1b0, Func Offset: 0xb0
	// Func End, Address: 0x102b1c0, Func Offset: 0xc0
}

// 
// Start address: 0x102b1c0
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
	// Line 1702, Address: 0x102b1c0, Func Offset: 0
	// Line 1708, Address: 0x102b1f4, Func Offset: 0x34
	// Line 1710, Address: 0x102b204, Func Offset: 0x44
	// Line 1711, Address: 0x102b208, Func Offset: 0x48
	// Line 1712, Address: 0x102b210, Func Offset: 0x50
	// Line 1714, Address: 0x102b220, Func Offset: 0x60
	// Line 1716, Address: 0x102b224, Func Offset: 0x64
	// Line 1717, Address: 0x102b22c, Func Offset: 0x6c
	// Line 1720, Address: 0x102b234, Func Offset: 0x74
	// Line 1721, Address: 0x102b23c, Func Offset: 0x7c
	// Line 1722, Address: 0x102b248, Func Offset: 0x88
	// Line 1724, Address: 0x102b254, Func Offset: 0x94
	// Line 1725, Address: 0x102b25c, Func Offset: 0x9c
	// Line 1726, Address: 0x102b264, Func Offset: 0xa4
	// Line 1727, Address: 0x102b26c, Func Offset: 0xac
	// Line 1729, Address: 0x102b278, Func Offset: 0xb8
	// Line 1730, Address: 0x102b280, Func Offset: 0xc0
	// Line 1731, Address: 0x102b288, Func Offset: 0xc8
	// Line 1732, Address: 0x102b290, Func Offset: 0xd0
	// Line 1734, Address: 0x102b29c, Func Offset: 0xdc
	// Line 1735, Address: 0x102b2a4, Func Offset: 0xe4
	// Line 1736, Address: 0x102b2ac, Func Offset: 0xec
	// Line 1739, Address: 0x102b2b4, Func Offset: 0xf4
	// Line 1740, Address: 0x102b2bc, Func Offset: 0xfc
	// Line 1743, Address: 0x102b2c4, Func Offset: 0x104
	// Line 1744, Address: 0x102b308, Func Offset: 0x148
	// Line 1745, Address: 0x102b34c, Func Offset: 0x18c
	// Line 1746, Address: 0x102b390, Func Offset: 0x1d0
	// Line 1748, Address: 0x102b3d4, Func Offset: 0x214
	// Func End, Address: 0x102b404, Func Offset: 0x244
}

// 
// Start address: 0x102b410
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1766, Address: 0x102b410, Func Offset: 0
	// Line 1767, Address: 0x102b430, Func Offset: 0x20
	// Line 1768, Address: 0x102b450, Func Offset: 0x40
	// Func End, Address: 0x102b460, Func Offset: 0x50
}

// 
// Start address: 0x102b460
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1770, Address: 0x102b460, Func Offset: 0
	// Line 1771, Address: 0x102b480, Func Offset: 0x20
	// Line 1772, Address: 0x102b484, Func Offset: 0x24
	// Line 1773, Address: 0x102b4a4, Func Offset: 0x44
	// Func End, Address: 0x102b4b4, Func Offset: 0x54
}

// 
// Start address: 0x102b4c0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1780, Address: 0x102b4c0, Func Offset: 0
	// Line 1786, Address: 0x102b4f0, Func Offset: 0x30
	// Line 1787, Address: 0x102b500, Func Offset: 0x40
	// Line 1793, Address: 0x102b510, Func Offset: 0x50
	// Line 1794, Address: 0x102b52c, Func Offset: 0x6c
	// Line 1795, Address: 0x102b530, Func Offset: 0x70
	// Line 1796, Address: 0x102b54c, Func Offset: 0x8c
	// Line 1797, Address: 0x102b550, Func Offset: 0x90
	// Line 1798, Address: 0x102b570, Func Offset: 0xb0
	// Line 1799, Address: 0x102b578, Func Offset: 0xb8
	// Line 1800, Address: 0x102b598, Func Offset: 0xd8
	// Line 1801, Address: 0x102b5a0, Func Offset: 0xe0
	// Line 1802, Address: 0x102b5e8, Func Offset: 0x128
	// Line 1804, Address: 0x102b5f4, Func Offset: 0x134
	// Line 1806, Address: 0x102b610, Func Offset: 0x150
	// Line 1811, Address: 0x102b618, Func Offset: 0x158
	// Line 1812, Address: 0x102b624, Func Offset: 0x164
	// Line 1815, Address: 0x102b630, Func Offset: 0x170
	// Line 1816, Address: 0x102b638, Func Offset: 0x178
	// Line 1817, Address: 0x102b658, Func Offset: 0x198
	// Line 1818, Address: 0x102b674, Func Offset: 0x1b4
	// Line 1819, Address: 0x102b67c, Func Offset: 0x1bc
	// Line 1820, Address: 0x102b69c, Func Offset: 0x1dc
	// Line 1822, Address: 0x102b6b8, Func Offset: 0x1f8
	// Line 1823, Address: 0x102b6c0, Func Offset: 0x200
	// Line 1824, Address: 0x102b6c8, Func Offset: 0x208
	// Line 1825, Address: 0x102b6d4, Func Offset: 0x214
	// Line 1826, Address: 0x102b6ec, Func Offset: 0x22c
	// Line 1828, Address: 0x102b6fc, Func Offset: 0x23c
	// Line 1831, Address: 0x102b708, Func Offset: 0x248
	// Line 1832, Address: 0x102b710, Func Offset: 0x250
	// Line 1833, Address: 0x102b714, Func Offset: 0x254
	// Func End, Address: 0x102b734, Func Offset: 0x274
}

// 
// Start address: 0x102b740
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1853, Address: 0x102b740, Func Offset: 0
	// Line 1861, Address: 0x102b768, Func Offset: 0x28
	// Line 1862, Address: 0x102b7cc, Func Offset: 0x8c
	// Line 1868, Address: 0x102b7d4, Func Offset: 0x94
	// Line 1869, Address: 0x102b7dc, Func Offset: 0x9c
	// Line 1870, Address: 0x102b7fc, Func Offset: 0xbc
	// Line 1871, Address: 0x102b818, Func Offset: 0xd8
	// Line 1872, Address: 0x102b820, Func Offset: 0xe0
	// Line 1873, Address: 0x102b840, Func Offset: 0x100
	// Line 1876, Address: 0x102b85c, Func Offset: 0x11c
	// Line 1877, Address: 0x102b864, Func Offset: 0x124
	// Line 1878, Address: 0x102b86c, Func Offset: 0x12c
	// Line 1879, Address: 0x102b878, Func Offset: 0x138
	// Line 1880, Address: 0x102b890, Func Offset: 0x150
	// Line 1881, Address: 0x102b898, Func Offset: 0x158
	// Line 1886, Address: 0x102b8a8, Func Offset: 0x168
	// Line 1889, Address: 0x102b8b4, Func Offset: 0x174
	// Line 1890, Address: 0x102b8bc, Func Offset: 0x17c
	// Line 1891, Address: 0x102b8c0, Func Offset: 0x180
	// Func End, Address: 0x102b8dc, Func Offset: 0x19c
}

// 
// Start address: 0x102b8e0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1905, Address: 0x102b8e0, Func Offset: 0
	// Line 1912, Address: 0x102b8fc, Func Offset: 0x1c
	// Line 1913, Address: 0x102b900, Func Offset: 0x20
	// Line 1914, Address: 0x102b908, Func Offset: 0x28
	// Line 1915, Address: 0x102b92c, Func Offset: 0x4c
	// Line 1916, Address: 0x102b938, Func Offset: 0x58
	// Line 1917, Address: 0x102b950, Func Offset: 0x70
	// Line 1918, Address: 0x102b964, Func Offset: 0x84
	// Line 1923, Address: 0x102b97c, Func Offset: 0x9c
	// Func End, Address: 0x102b994, Func Offset: 0xb4
}

// 
// Start address: 0x102b9a0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1937, Address: 0x102b9a0, Func Offset: 0
	// Line 1938, Address: 0x102b9ac, Func Offset: 0xc
	// Line 1939, Address: 0x102b9d8, Func Offset: 0x38
	// Line 1940, Address: 0x102ba24, Func Offset: 0x84
	// Line 1941, Address: 0x102ba50, Func Offset: 0xb0
	// Line 1943, Address: 0x102ba9c, Func Offset: 0xfc
	// Line 1949, Address: 0x102baa8, Func Offset: 0x108
	// Line 1950, Address: 0x102baac, Func Offset: 0x10c
	// Func End, Address: 0x102bab8, Func Offset: 0x118
}

// 
// Start address: 0x102bac0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1967, Address: 0x102bac0, Func Offset: 0
	// Line 1968, Address: 0x102badc, Func Offset: 0x1c
	// Line 1970, Address: 0x102baf8, Func Offset: 0x38
	// Func End, Address: 0x102bb08, Func Offset: 0x48
}

// 
// Start address: 0x102bb10
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1972, Address: 0x102bb10, Func Offset: 0
	// Line 1973, Address: 0x102bb2c, Func Offset: 0x1c
	// Line 1974, Address: 0x102bb30, Func Offset: 0x20
	// Line 1976, Address: 0x102bb4c, Func Offset: 0x3c
	// Func End, Address: 0x102bb5c, Func Offset: 0x4c
}

// 
// Start address: 0x102bb60
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1978, Address: 0x102bb60, Func Offset: 0
	// Line 1979, Address: 0x102bb74, Func Offset: 0x14
	// Line 1981, Address: 0x102bb90, Func Offset: 0x30
	// Func End, Address: 0x102bba0, Func Offset: 0x40
}

// 
// Start address: 0x102bba0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1983, Address: 0x102bba0, Func Offset: 0
	// Line 1984, Address: 0x102bbbc, Func Offset: 0x1c
	// Line 1986, Address: 0x102bbd8, Func Offset: 0x38
	// Func End, Address: 0x102bbe8, Func Offset: 0x48
}

// 
// Start address: 0x102bbf0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1988, Address: 0x102bbf0, Func Offset: 0
	// Line 1989, Address: 0x102bc08, Func Offset: 0x18
	// Line 1990, Address: 0x102bc18, Func Offset: 0x28
	// Line 1991, Address: 0x102bc28, Func Offset: 0x38
	// Line 1992, Address: 0x102bc34, Func Offset: 0x44
	// Line 1994, Address: 0x102bc40, Func Offset: 0x50
	// Line 1995, Address: 0x102bc6c, Func Offset: 0x7c
	// Line 1998, Address: 0x102bc98, Func Offset: 0xa8
	// Func End, Address: 0x102bca4, Func Offset: 0xb4
}

// 
// Start address: 0x102bcb0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2014, Address: 0x102bcb0, Func Offset: 0
	// Line 2019, Address: 0x102bcc8, Func Offset: 0x18
	// Line 2020, Address: 0x102bcd4, Func Offset: 0x24
	// Line 2021, Address: 0x102bce0, Func Offset: 0x30
	// Line 2022, Address: 0x102bce8, Func Offset: 0x38
	// Line 2023, Address: 0x102bcec, Func Offset: 0x3c
	// Line 2024, Address: 0x102bd04, Func Offset: 0x54
	// Line 2025, Address: 0x102bd0c, Func Offset: 0x5c
	// Func End, Address: 0x102bd2c, Func Offset: 0x7c
}

// 
// Start address: 0x102bd30
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2028, Address: 0x102bd30, Func Offset: 0
	// Line 2033, Address: 0x102bd48, Func Offset: 0x18
	// Line 2034, Address: 0x102bd54, Func Offset: 0x24
	// Line 2035, Address: 0x102bd60, Func Offset: 0x30
	// Line 2036, Address: 0x102bd68, Func Offset: 0x38
	// Line 2037, Address: 0x102bd6c, Func Offset: 0x3c
	// Line 2039, Address: 0x102bd7c, Func Offset: 0x4c
	// Func End, Address: 0x102bd9c, Func Offset: 0x6c
}

// 
// Start address: 0x102bda0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 2042, Address: 0x102bda0, Func Offset: 0
	// Line 2043, Address: 0x102bdb8, Func Offset: 0x18
	// Line 2044, Address: 0x102bdd8, Func Offset: 0x38
	// Func End, Address: 0x102bde8, Func Offset: 0x48
}

// 
// Start address: 0x102bdf0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 2049, Address: 0x102bdf0, Func Offset: 0
	// Line 2053, Address: 0x102be10, Func Offset: 0x20
	// Line 2056, Address: 0x102be2c, Func Offset: 0x3c
	// Line 2060, Address: 0x102be54, Func Offset: 0x64
	// Line 2061, Address: 0x102be60, Func Offset: 0x70
	// Line 2063, Address: 0x102be88, Func Offset: 0x98
	// Func End, Address: 0x102be98, Func Offset: 0xa8
}

// 
// Start address: 0x102bea0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 2069, Address: 0x102bea0, Func Offset: 0
	// Line 2072, Address: 0x102bebc, Func Offset: 0x1c
	// Line 2073, Address: 0x102bec4, Func Offset: 0x24
	// Line 2076, Address: 0x102becc, Func Offset: 0x2c
	// Line 2078, Address: 0x102bef0, Func Offset: 0x50
	// Line 2079, Address: 0x102bf10, Func Offset: 0x70
	// Line 2080, Address: 0x102bf18, Func Offset: 0x78
	// Line 2081, Address: 0x102bf3c, Func Offset: 0x9c
	// Func End, Address: 0x102bf58, Func Offset: 0xb8
}

// 
// Start address: 0x102bf60
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2107, Address: 0x102bf60, Func Offset: 0
	// Line 2112, Address: 0x102bf88, Func Offset: 0x28
	// Line 2113, Address: 0x102bf98, Func Offset: 0x38
	// Line 2115, Address: 0x102bfb4, Func Offset: 0x54
	// Line 2116, Address: 0x102bfd8, Func Offset: 0x78
	// Line 2117, Address: 0x102c000, Func Offset: 0xa0
	// Line 2118, Address: 0x102c00c, Func Offset: 0xac
	// Line 2119, Address: 0x102c014, Func Offset: 0xb4
	// Line 2122, Address: 0x102c030, Func Offset: 0xd0
	// Line 2126, Address: 0x102c058, Func Offset: 0xf8
	// Line 2129, Address: 0x102c060, Func Offset: 0x100
	// Line 2130, Address: 0x102c064, Func Offset: 0x104
	// Line 2134, Address: 0x102c080, Func Offset: 0x120
	// Line 2141, Address: 0x102c0a8, Func Offset: 0x148
	// Func End, Address: 0x102c0c4, Func Offset: 0x164
}

// 
// Start address: 0x102c0d0
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
	// Line 2152, Address: 0x102c0d0, Func Offset: 0
	// Line 2153, Address: 0x102c0f0, Func Offset: 0x20
	// Line 2158, Address: 0x102c11c, Func Offset: 0x4c
	// Line 2164, Address: 0x102c140, Func Offset: 0x70
	// Line 2165, Address: 0x102c144, Func Offset: 0x74
	// Line 2167, Address: 0x102c148, Func Offset: 0x78
	// Line 2168, Address: 0x102c150, Func Offset: 0x80
	// Line 2171, Address: 0x102c174, Func Offset: 0xa4
	// Line 2172, Address: 0x102c178, Func Offset: 0xa8
	// Line 2175, Address: 0x102c19c, Func Offset: 0xcc
	// Line 2176, Address: 0x102c1a0, Func Offset: 0xd0
	// Line 2177, Address: 0x102c1a8, Func Offset: 0xd8
	// Line 2178, Address: 0x102c1ac, Func Offset: 0xdc
	// Line 2180, Address: 0x102c1b0, Func Offset: 0xe0
	// Line 2181, Address: 0x102c1b8, Func Offset: 0xe8
	// Line 2182, Address: 0x102c1d8, Func Offset: 0x108
	// Line 2186, Address: 0x102c1e4, Func Offset: 0x114
	// Line 2187, Address: 0x102c1f8, Func Offset: 0x128
	// Line 2189, Address: 0x102c20c, Func Offset: 0x13c
	// Line 2190, Address: 0x102c224, Func Offset: 0x154
	// Line 2191, Address: 0x102c244, Func Offset: 0x174
	// Func End, Address: 0x102c26c, Func Offset: 0x19c
}

// 
// Start address: 0x102c270
void mapset()
{
	// Line 2196, Address: 0x102c270, Func Offset: 0
	// Func End, Address: 0x102c278, Func Offset: 0x8
}

// 
// Start address: 0x102c280
void divdevset()
{
	// Line 2200, Address: 0x102c280, Func Offset: 0
	// Func End, Address: 0x102c288, Func Offset: 0x8
}

// 
// Start address: 0x102c290
void enecginit()
{
	// Line 2204, Address: 0x102c290, Func Offset: 0
	// Func End, Address: 0x102c298, Func Offset: 0x8
}

// 
// Start address: 0x102c2a0
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2220, Address: 0x102c2a0, Func Offset: 0
	// Line 2224, Address: 0x102c2c0, Func Offset: 0x20
	// Line 2225, Address: 0x102c2d8, Func Offset: 0x38
	// Line 2226, Address: 0x102c2e8, Func Offset: 0x48
	// Line 2227, Address: 0x102c2f8, Func Offset: 0x58
	// Line 2228, Address: 0x102c300, Func Offset: 0x60
	// Line 2230, Address: 0x102c304, Func Offset: 0x64
	// Line 2231, Address: 0x102c310, Func Offset: 0x70
	// Line 2232, Address: 0x102c328, Func Offset: 0x88
	// Line 2234, Address: 0x102c334, Func Offset: 0x94
	// Line 2235, Address: 0x102c340, Func Offset: 0xa0
	// Line 2236, Address: 0x102c34c, Func Offset: 0xac
	// Func End, Address: 0x102c36c, Func Offset: 0xcc
}

