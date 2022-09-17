typedef struct tagPOINT;
typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
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

typedef void(*type_20)(int, int);
typedef int(*type_23)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef unsigned char type_1[4];
typedef char type_2[3];
typedef _anon1* type_3[8];
typedef _anon13 type_4[0];
typedef char type_5[3];
typedef short type_6[6];
typedef short type_7[9];
typedef unsigned short type_8[4];
typedef unsigned short type_9[4][1024];
typedef char type_10[3];
typedef unsigned char type_11[2];
typedef unsigned char type_12[64];
typedef unsigned char type_13[64][8];
typedef unsigned char type_14[22];
typedef unsigned char* type_15[0];
typedef unsigned char type_16[64];
typedef unsigned char type_17[64][8];
typedef short type_18[2];
typedef short type_19[2][1];
typedef short type_21[256];
typedef unsigned char type_22[65];
typedef _anon2 type_24[128];
typedef _anon1* type_25[8];
typedef short type_26[6];

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
void z51cline(short** ppHscw);
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
// Start address: 0x10287a0
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
	// Line 151, Address: 0x10287a0, Func Offset: 0
	// Line 152, Address: 0x10287c0, Func Offset: 0x20
	// Line 156, Address: 0x10287f4, Func Offset: 0x54
	// Line 162, Address: 0x1028818, Func Offset: 0x78
	// Line 166, Address: 0x1028828, Func Offset: 0x88
	// Line 167, Address: 0x102882c, Func Offset: 0x8c
	// Line 169, Address: 0x1028830, Func Offset: 0x90
	// Line 170, Address: 0x1028838, Func Offset: 0x98
	// Line 173, Address: 0x102885c, Func Offset: 0xbc
	// Line 174, Address: 0x1028860, Func Offset: 0xc0
	// Line 177, Address: 0x1028884, Func Offset: 0xe4
	// Line 182, Address: 0x1028898, Func Offset: 0xf8
	// Line 185, Address: 0x10288a4, Func Offset: 0x104
	// Line 186, Address: 0x10288a8, Func Offset: 0x108
	// Line 187, Address: 0x10288b4, Func Offset: 0x114
	// Line 188, Address: 0x10288b8, Func Offset: 0x118
	// Line 189, Address: 0x10288bc, Func Offset: 0x11c
	// Line 190, Address: 0x10288c4, Func Offset: 0x124
	// Line 191, Address: 0x10288c8, Func Offset: 0x128
	// Line 193, Address: 0x10288cc, Func Offset: 0x12c
	// Line 194, Address: 0x10288d4, Func Offset: 0x134
	// Line 195, Address: 0x10288f4, Func Offset: 0x154
	// Line 197, Address: 0x1028900, Func Offset: 0x160
	// Line 198, Address: 0x1028920, Func Offset: 0x180
	// Line 200, Address: 0x1028940, Func Offset: 0x1a0
	// Line 201, Address: 0x1028978, Func Offset: 0x1d8
	// Line 202, Address: 0x1028990, Func Offset: 0x1f0
	// Line 203, Address: 0x102899c, Func Offset: 0x1fc
	// Func End, Address: 0x10289c4, Func Offset: 0x224
}

// 
// Start address: 0x10289d0
_anon2* main_chk()
{
	// Line 217, Address: 0x10289d0, Func Offset: 0
	// Line 218, Address: 0x10289e4, Func Offset: 0x14
	// Line 220, Address: 0x10289f4, Func Offset: 0x24
	// Line 222, Address: 0x10289fc, Func Offset: 0x2c
	// Func End, Address: 0x1028a04, Func Offset: 0x34
}

// 
// Start address: 0x1028a10
void scr_set()
{
	short* pScrTbl;
	// Line 260, Address: 0x1028a10, Func Offset: 0
	// Line 263, Address: 0x1028a1c, Func Offset: 0xc
	// Line 264, Address: 0x1028a30, Func Offset: 0x20
	// Line 265, Address: 0x1028a44, Func Offset: 0x34
	// Line 267, Address: 0x1028a4c, Func Offset: 0x3c
	// Line 268, Address: 0x1028a54, Func Offset: 0x44
	// Line 269, Address: 0x1028a60, Func Offset: 0x50
	// Line 270, Address: 0x1028a64, Func Offset: 0x54
	// Line 271, Address: 0x1028a78, Func Offset: 0x68
	// Line 272, Address: 0x1028a7c, Func Offset: 0x6c
	// Line 273, Address: 0x1028a90, Func Offset: 0x80
	// Line 274, Address: 0x1028a94, Func Offset: 0x84
	// Line 275, Address: 0x1028aa8, Func Offset: 0x98
	// Line 276, Address: 0x1028aac, Func Offset: 0x9c
	// Line 277, Address: 0x1028ac0, Func Offset: 0xb0
	// Line 278, Address: 0x1028ae0, Func Offset: 0xd0
	// Line 279, Address: 0x1028ae4, Func Offset: 0xd4
	// Line 280, Address: 0x1028af0, Func Offset: 0xe0
	// Line 282, Address: 0x1028afc, Func Offset: 0xec
	// Line 283, Address: 0x1028b08, Func Offset: 0xf8
	// Line 285, Address: 0x1028b14, Func Offset: 0x104
	// Line 286, Address: 0x1028b1c, Func Offset: 0x10c
	// Func End, Address: 0x1028b30, Func Offset: 0x120
}

// 
// Start address: 0x1028b30
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 325, Address: 0x1028b30, Func Offset: 0
	// Line 328, Address: 0x1028b44, Func Offset: 0x14
	// Line 329, Address: 0x1028b54, Func Offset: 0x24
	// Line 330, Address: 0x1028b5c, Func Offset: 0x2c
	// Line 332, Address: 0x1028b6c, Func Offset: 0x3c
	// Line 333, Address: 0x1028b84, Func Offset: 0x54
	// Line 334, Address: 0x1028b94, Func Offset: 0x64
	// Line 335, Address: 0x1028b9c, Func Offset: 0x6c
	// Line 337, Address: 0x1028ba0, Func Offset: 0x70
	// Line 339, Address: 0x1028ba8, Func Offset: 0x78
	// Line 342, Address: 0x1028bb0, Func Offset: 0x80
	// Line 343, Address: 0x1028bc4, Func Offset: 0x94
	// Line 347, Address: 0x1028bd8, Func Offset: 0xa8
	// Line 348, Address: 0x1028bec, Func Offset: 0xbc
	// Line 349, Address: 0x1028bf8, Func Offset: 0xc8
	// Line 350, Address: 0x1028c00, Func Offset: 0xd0
	// Line 354, Address: 0x1028c04, Func Offset: 0xd4
	// Line 355, Address: 0x1028c28, Func Offset: 0xf8
	// Line 359, Address: 0x1028c38, Func Offset: 0x108
	// Line 361, Address: 0x1028c40, Func Offset: 0x110
	// Line 362, Address: 0x1028c54, Func Offset: 0x124
	// Line 363, Address: 0x1028c60, Func Offset: 0x130
	// Line 364, Address: 0x1028c68, Func Offset: 0x138
	// Line 368, Address: 0x1028c6c, Func Offset: 0x13c
	// Line 369, Address: 0x1028c90, Func Offset: 0x160
	// Line 373, Address: 0x1028ca0, Func Offset: 0x170
	// Line 375, Address: 0x1028ca8, Func Offset: 0x178
	// Line 378, Address: 0x1028cb8, Func Offset: 0x188
	// Line 379, Address: 0x1028cc8, Func Offset: 0x198
	// Line 380, Address: 0x1028cd8, Func Offset: 0x1a8
	// Line 381, Address: 0x1028ce8, Func Offset: 0x1b8
	// Line 382, Address: 0x1028cf8, Func Offset: 0x1c8
	// Func End, Address: 0x1028d14, Func Offset: 0x1e4
}

// 
// Start address: 0x1028d20
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 403, Address: 0x1028d20, Func Offset: 0
	// Line 406, Address: 0x1028d2c, Func Offset: 0xc
	// Line 407, Address: 0x1028d34, Func Offset: 0x14
	// Line 409, Address: 0x1028d38, Func Offset: 0x18
	// Line 411, Address: 0x1028d44, Func Offset: 0x24
	// Line 412, Address: 0x1028d50, Func Offset: 0x30
	// Line 413, Address: 0x1028d5c, Func Offset: 0x3c
	// Line 415, Address: 0x1028d68, Func Offset: 0x48
	// Line 416, Address: 0x1028d84, Func Offset: 0x64
	// Line 418, Address: 0x1028d90, Func Offset: 0x70
	// Line 419, Address: 0x1028dac, Func Offset: 0x8c
	// Line 421, Address: 0x1028db8, Func Offset: 0x98
	// Line 422, Address: 0x1028dc4, Func Offset: 0xa4
	// Line 423, Address: 0x1028de8, Func Offset: 0xc8
	// Func End, Address: 0x1028df4, Func Offset: 0xd4
}

// 
// Start address: 0x1028e00
void scroll()
{
	_anon1 ldwk;
	_anon1* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 439, Address: 0x1028e00, Func Offset: 0
	// Line 451, Address: 0x1028e1c, Func Offset: 0x1c
	// Line 456, Address: 0x1028e2c, Func Offset: 0x2c
	// Line 458, Address: 0x1028e58, Func Offset: 0x58
	// Line 460, Address: 0x1028e60, Func Offset: 0x60
	// Line 461, Address: 0x1028e68, Func Offset: 0x68
	// Line 463, Address: 0x1028e70, Func Offset: 0x70
	// Line 464, Address: 0x1028e80, Func Offset: 0x80
	// Line 467, Address: 0x1028e90, Func Offset: 0x90
	// Line 468, Address: 0x1028eac, Func Offset: 0xac
	// Line 470, Address: 0x1028ebc, Func Offset: 0xbc
	// Line 471, Address: 0x1028ed0, Func Offset: 0xd0
	// Line 473, Address: 0x1028ee0, Func Offset: 0xe0
	// Line 474, Address: 0x1028ef4, Func Offset: 0xf4
	// Line 476, Address: 0x1028f04, Func Offset: 0x104
	// Line 479, Address: 0x1028f18, Func Offset: 0x118
	// Line 481, Address: 0x1028f28, Func Offset: 0x128
	// Line 482, Address: 0x1028f50, Func Offset: 0x150
	// Line 483, Address: 0x1028f88, Func Offset: 0x188
	// Line 485, Address: 0x1028f9c, Func Offset: 0x19c
	// Line 487, Address: 0x1028fa8, Func Offset: 0x1a8
	// Line 489, Address: 0x1028fc0, Func Offset: 0x1c0
	// Line 490, Address: 0x1028fe0, Func Offset: 0x1e0
	// Line 492, Address: 0x1028fec, Func Offset: 0x1ec
	// Line 493, Address: 0x1029000, Func Offset: 0x200
	// Line 494, Address: 0x1029010, Func Offset: 0x210
	// Line 495, Address: 0x102901c, Func Offset: 0x21c
	// Line 497, Address: 0x1029024, Func Offset: 0x224
	// Line 498, Address: 0x1029044, Func Offset: 0x244
	// Line 500, Address: 0x1029050, Func Offset: 0x250
	// Line 501, Address: 0x1029064, Func Offset: 0x264
	// Line 503, Address: 0x1029074, Func Offset: 0x274
	// Line 504, Address: 0x1029094, Func Offset: 0x294
	// Line 506, Address: 0x10290a0, Func Offset: 0x2a0
	// Line 507, Address: 0x10290b4, Func Offset: 0x2b4
	// Line 509, Address: 0x10290c4, Func Offset: 0x2c4
	// Line 510, Address: 0x10290e4, Func Offset: 0x2e4
	// Line 512, Address: 0x10290f0, Func Offset: 0x2f0
	// Line 513, Address: 0x1029104, Func Offset: 0x304
	// Line 515, Address: 0x1029114, Func Offset: 0x314
	// Line 516, Address: 0x1029134, Func Offset: 0x334
	// Line 518, Address: 0x1029140, Func Offset: 0x340
	// Line 519, Address: 0x1029154, Func Offset: 0x354
	// Line 523, Address: 0x1029164, Func Offset: 0x364
	// Line 524, Address: 0x1029170, Func Offset: 0x370
	// Line 525, Address: 0x10291a0, Func Offset: 0x3a0
	// Line 526, Address: 0x10291d0, Func Offset: 0x3d0
	// Line 527, Address: 0x10291ec, Func Offset: 0x3ec
	// Func End, Address: 0x1029210, Func Offset: 0x410
}

// 
// Start address: 0x1029210
void z51cline(short** ppHscw)
{
	int lHwk;
	_anon1 ldHposwk;
	int i;
	int j;
	short wk;
	char z51cscrtbl[3];
	// Line 541, Address: 0x1029210, Func Offset: 0
	// Line 546, Address: 0x1029228, Func Offset: 0x18
	// Line 550, Address: 0x102924c, Func Offset: 0x3c
	// Line 551, Address: 0x1029270, Func Offset: 0x60
	// Line 552, Address: 0x102928c, Func Offset: 0x7c
	// Line 554, Address: 0x1029290, Func Offset: 0x80
	// Line 555, Address: 0x1029294, Func Offset: 0x84
	// Line 557, Address: 0x10292a0, Func Offset: 0x90
	// Line 559, Address: 0x10292ac, Func Offset: 0x9c
	// Line 561, Address: 0x10292cc, Func Offset: 0xbc
	// Line 563, Address: 0x10292e4, Func Offset: 0xd4
	// Line 564, Address: 0x10292f0, Func Offset: 0xe0
	// Line 565, Address: 0x1029304, Func Offset: 0xf4
	// Line 567, Address: 0x1029310, Func Offset: 0x100
	// Line 568, Address: 0x1029334, Func Offset: 0x124
	// Line 569, Address: 0x1029340, Func Offset: 0x130
	// Line 570, Address: 0x1029364, Func Offset: 0x154
	// Line 571, Address: 0x1029370, Func Offset: 0x160
	// Func End, Address: 0x102938c, Func Offset: 0x17c
}

// 
// Start address: 0x1029390
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 592, Address: 0x1029390, Func Offset: 0
	// Line 596, Address: 0x10293ac, Func Offset: 0x1c
	// Line 598, Address: 0x10293b0, Func Offset: 0x20
	// Line 599, Address: 0x10293cc, Func Offset: 0x3c
	// Line 600, Address: 0x10293d8, Func Offset: 0x48
	// Line 602, Address: 0x10293e4, Func Offset: 0x54
	// Line 603, Address: 0x10293ec, Func Offset: 0x5c
	// Line 604, Address: 0x10293fc, Func Offset: 0x6c
	// Line 605, Address: 0x1029420, Func Offset: 0x90
	// Line 606, Address: 0x1029440, Func Offset: 0xb0
	// Func End, Address: 0x1029454, Func Offset: 0xc4
}

// 
// Start address: 0x1029460
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 712, Address: 0x1029460, Func Offset: 0
	// Line 715, Address: 0x1029470, Func Offset: 0x10
	// Line 716, Address: 0x1029480, Func Offset: 0x20
	// Line 717, Address: 0x102948c, Func Offset: 0x2c
	// Line 719, Address: 0x10294c4, Func Offset: 0x64
	// Line 720, Address: 0x10294cc, Func Offset: 0x6c
	// Line 721, Address: 0x10294e0, Func Offset: 0x80
	// Line 722, Address: 0x1029500, Func Offset: 0xa0
	// Line 723, Address: 0x1029514, Func Offset: 0xb4
	// Line 725, Address: 0x102951c, Func Offset: 0xbc
	// Line 730, Address: 0x1029530, Func Offset: 0xd0
	// Func End, Address: 0x1029544, Func Offset: 0xe4
}

// 
// Start address: 0x1029550
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 748, Address: 0x1029550, Func Offset: 0
	// Line 752, Address: 0x1029564, Func Offset: 0x14
	// Line 753, Address: 0x102956c, Func Offset: 0x1c
	// Line 754, Address: 0x1029574, Func Offset: 0x24
	// Line 755, Address: 0x102957c, Func Offset: 0x2c
	// Line 756, Address: 0x1029580, Func Offset: 0x30
	// Line 757, Address: 0x10295a4, Func Offset: 0x54
	// Line 758, Address: 0x10295b0, Func Offset: 0x60
	// Line 760, Address: 0x10295cc, Func Offset: 0x7c
	// Line 761, Address: 0x10295d8, Func Offset: 0x88
	// Line 762, Address: 0x10295ec, Func Offset: 0x9c
	// Line 763, Address: 0x10295f8, Func Offset: 0xa8
	// Line 764, Address: 0x102961c, Func Offset: 0xcc
	// Line 766, Address: 0x1029624, Func Offset: 0xd4
	// Line 771, Address: 0x102964c, Func Offset: 0xfc
	// Func End, Address: 0x1029660, Func Offset: 0x110
}

// 
// Start address: 0x1029660
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 789, Address: 0x1029660, Func Offset: 0
	// Line 793, Address: 0x1029674, Func Offset: 0x14
	// Line 794, Address: 0x102967c, Func Offset: 0x1c
	// Line 795, Address: 0x1029684, Func Offset: 0x24
	// Line 796, Address: 0x102968c, Func Offset: 0x2c
	// Line 797, Address: 0x1029690, Func Offset: 0x30
	// Line 798, Address: 0x10296b4, Func Offset: 0x54
	// Line 799, Address: 0x10296c0, Func Offset: 0x60
	// Line 801, Address: 0x10296dc, Func Offset: 0x7c
	// Line 802, Address: 0x10296e8, Func Offset: 0x88
	// Line 803, Address: 0x10296fc, Func Offset: 0x9c
	// Line 804, Address: 0x1029708, Func Offset: 0xa8
	// Line 805, Address: 0x102972c, Func Offset: 0xcc
	// Line 807, Address: 0x1029734, Func Offset: 0xd4
	// Line 812, Address: 0x102975c, Func Offset: 0xfc
	// Func End, Address: 0x1029770, Func Offset: 0x110
}

// 
// Start address: 0x1029770
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 830, Address: 0x1029770, Func Offset: 0
	// Line 834, Address: 0x1029784, Func Offset: 0x14
	// Line 835, Address: 0x102978c, Func Offset: 0x1c
	// Line 836, Address: 0x1029794, Func Offset: 0x24
	// Line 837, Address: 0x102979c, Func Offset: 0x2c
	// Line 838, Address: 0x10297a0, Func Offset: 0x30
	// Line 839, Address: 0x10297c4, Func Offset: 0x54
	// Line 840, Address: 0x10297d0, Func Offset: 0x60
	// Line 842, Address: 0x10297ec, Func Offset: 0x7c
	// Line 843, Address: 0x10297f8, Func Offset: 0x88
	// Line 844, Address: 0x102980c, Func Offset: 0x9c
	// Line 845, Address: 0x1029818, Func Offset: 0xa8
	// Line 846, Address: 0x102983c, Func Offset: 0xcc
	// Line 848, Address: 0x1029844, Func Offset: 0xd4
	// Line 853, Address: 0x102986c, Func Offset: 0xfc
	// Func End, Address: 0x1029880, Func Offset: 0x110
}

// 
// Start address: 0x1029880
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 868, Address: 0x1029880, Func Offset: 0
	// Line 872, Address: 0x1029890, Func Offset: 0x10
	// Line 874, Address: 0x10298a0, Func Offset: 0x20
	// Line 875, Address: 0x10298a8, Func Offset: 0x28
	// Line 876, Address: 0x10298dc, Func Offset: 0x5c
	// Line 877, Address: 0x10298e4, Func Offset: 0x64
	// Line 878, Address: 0x10298f8, Func Offset: 0x78
	// Line 879, Address: 0x102991c, Func Offset: 0x9c
	// Line 880, Address: 0x1029930, Func Offset: 0xb0
	// Line 881, Address: 0x1029938, Func Offset: 0xb8
	// Line 886, Address: 0x102994c, Func Offset: 0xcc
	// Func End, Address: 0x1029964, Func Offset: 0xe4
}

// 
// Start address: 0x1029970
void scrh_move()
{
	short xwk;
	// Line 903, Address: 0x1029970, Func Offset: 0
	// Line 906, Address: 0x1029978, Func Offset: 0x8
	// Line 907, Address: 0x10299c0, Func Offset: 0x50
	// Line 909, Address: 0x10299d0, Func Offset: 0x60
	// Line 910, Address: 0x10299d8, Func Offset: 0x68
	// Line 911, Address: 0x10299e0, Func Offset: 0x70
	// Line 913, Address: 0x10299f0, Func Offset: 0x80
	// Line 914, Address: 0x1029a04, Func Offset: 0x94
	// Line 918, Address: 0x1029a10, Func Offset: 0xa0
	// Line 919, Address: 0x1029a24, Func Offset: 0xb4
	// Line 920, Address: 0x1029a48, Func Offset: 0xd8
	// Line 922, Address: 0x1029a58, Func Offset: 0xe8
	// Line 924, Address: 0x1029a60, Func Offset: 0xf0
	// Line 925, Address: 0x1029a74, Func Offset: 0x104
	// Line 929, Address: 0x1029a80, Func Offset: 0x110
	// Line 930, Address: 0x1029a94, Func Offset: 0x124
	// Line 931, Address: 0x1029ab8, Func Offset: 0x148
	// Line 936, Address: 0x1029ac8, Func Offset: 0x158
	// Line 937, Address: 0x1029af8, Func Offset: 0x188
	// Line 938, Address: 0x1029b00, Func Offset: 0x190
	// Func End, Address: 0x1029b10, Func Offset: 0x1a0
}

// 
// Start address: 0x1029b10
void scroll_v()
{
	short ywk;
	// Line 953, Address: 0x1029b10, Func Offset: 0
	// Line 956, Address: 0x1029b1c, Func Offset: 0xc
	// Line 957, Address: 0x1029b50, Func Offset: 0x40
	// Line 958, Address: 0x1029b68, Func Offset: 0x58
	// Line 962, Address: 0x1029b74, Func Offset: 0x64
	// Line 963, Address: 0x1029b8c, Func Offset: 0x7c
	// Line 964, Address: 0x1029b98, Func Offset: 0x88
	// Line 965, Address: 0x1029bbc, Func Offset: 0xac
	// Line 966, Address: 0x1029bd0, Func Offset: 0xc0
	// Line 967, Address: 0x1029bdc, Func Offset: 0xcc
	// Line 968, Address: 0x1029be4, Func Offset: 0xd4
	// Line 969, Address: 0x1029c0c, Func Offset: 0xfc
	// Line 970, Address: 0x1029c34, Func Offset: 0x124
	// Line 971, Address: 0x1029c40, Func Offset: 0x130
	// Line 973, Address: 0x1029c48, Func Offset: 0x138
	// Line 974, Address: 0x1029c70, Func Offset: 0x160
	// Line 975, Address: 0x1029c80, Func Offset: 0x170
	// Line 976, Address: 0x1029c88, Func Offset: 0x178
	// Line 981, Address: 0x1029c90, Func Offset: 0x180
	// Line 982, Address: 0x1029cbc, Func Offset: 0x1ac
	// Line 983, Address: 0x1029cc8, Func Offset: 0x1b8
	// Line 984, Address: 0x1029cd0, Func Offset: 0x1c0
	// Line 985, Address: 0x1029ce0, Func Offset: 0x1d0
	// Line 986, Address: 0x1029ce8, Func Offset: 0x1d8
	// Line 991, Address: 0x1029cf0, Func Offset: 0x1e0
	// Line 992, Address: 0x1029cf8, Func Offset: 0x1e8
	// Func End, Address: 0x1029d0c, Func Offset: 0x1fc
}

// 
// Start address: 0x1029d10
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1006, Address: 0x1029d10, Func Offset: 0
	// Line 1009, Address: 0x1029d20, Func Offset: 0x10
	// Line 1010, Address: 0x1029d3c, Func Offset: 0x2c
	// Line 1011, Address: 0x1029d54, Func Offset: 0x44
	// Line 1012, Address: 0x1029d78, Func Offset: 0x68
	// Line 1013, Address: 0x1029d80, Func Offset: 0x70
	// Line 1017, Address: 0x1029d90, Func Offset: 0x80
	// Line 1018, Address: 0x1029da4, Func Offset: 0x94
	// Line 1019, Address: 0x1029db0, Func Offset: 0xa0
	// Line 1022, Address: 0x1029db8, Func Offset: 0xa8
	// Line 1023, Address: 0x1029dd0, Func Offset: 0xc0
	// Line 1024, Address: 0x1029ddc, Func Offset: 0xcc
	// Line 1025, Address: 0x1029dfc, Func Offset: 0xec
	// Line 1026, Address: 0x1029e08, Func Offset: 0xf8
	// Line 1027, Address: 0x1029e10, Func Offset: 0x100
	// Line 1029, Address: 0x1029e1c, Func Offset: 0x10c
	// Line 1031, Address: 0x1029e24, Func Offset: 0x114
	// Line 1032, Address: 0x1029e3c, Func Offset: 0x12c
	// Line 1033, Address: 0x1029e48, Func Offset: 0x138
	// Line 1034, Address: 0x1029e68, Func Offset: 0x158
	// Line 1035, Address: 0x1029e74, Func Offset: 0x164
	// Line 1036, Address: 0x1029e7c, Func Offset: 0x16c
	// Line 1039, Address: 0x1029e88, Func Offset: 0x178
	// Func End, Address: 0x1029e9c, Func Offset: 0x18c
}

// 
// Start address: 0x1029ea0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1053, Address: 0x1029ea0, Func Offset: 0
	// Line 1056, Address: 0x1029eb0, Func Offset: 0x10
	// Line 1058, Address: 0x1029ebc, Func Offset: 0x1c
	// Line 1059, Address: 0x1029ed4, Func Offset: 0x34
	// Line 1060, Address: 0x1029ee0, Func Offset: 0x40
	// Line 1061, Address: 0x1029f00, Func Offset: 0x60
	// Line 1062, Address: 0x1029f0c, Func Offset: 0x6c
	// Line 1063, Address: 0x1029f14, Func Offset: 0x74
	// Line 1065, Address: 0x1029f20, Func Offset: 0x80
	// Func End, Address: 0x1029f34, Func Offset: 0x94
}

// 
// Start address: 0x1029f40
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1080, Address: 0x1029f40, Func Offset: 0
	// Line 1083, Address: 0x1029f4c, Func Offset: 0xc
	// Line 1084, Address: 0x1029f50, Func Offset: 0x10
	// Line 1085, Address: 0x1029f7c, Func Offset: 0x3c
	// Line 1086, Address: 0x1029f90, Func Offset: 0x50
	// Line 1087, Address: 0x1029f9c, Func Offset: 0x5c
	// Line 1088, Address: 0x1029fa4, Func Offset: 0x64
	// Line 1090, Address: 0x1029fb0, Func Offset: 0x70
	// Func End, Address: 0x1029fc0, Func Offset: 0x80
}

// 
// Start address: 0x1029fc0
void sv_move_sub2()
{
	// Line 1094, Address: 0x1029fc0, Func Offset: 0
	// Line 1095, Address: 0x1029fc8, Func Offset: 0x8
	// Line 1097, Address: 0x1029fd0, Func Offset: 0x10
	// Line 1098, Address: 0x1029fdc, Func Offset: 0x1c
	// Func End, Address: 0x1029fec, Func Offset: 0x2c
}

// 
// Start address: 0x1029ff0
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1112, Address: 0x1029ff0, Func Offset: 0
	// Line 1115, Address: 0x1029ffc, Func Offset: 0xc
	// Line 1116, Address: 0x102a020, Func Offset: 0x30
	// Line 1117, Address: 0x102a044, Func Offset: 0x54
	// Line 1118, Address: 0x102a050, Func Offset: 0x60
	// Func End, Address: 0x102a060, Func Offset: 0x70
}

// 
// Start address: 0x102a060
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1133, Address: 0x102a060, Func Offset: 0
	// Line 1134, Address: 0x102a06c, Func Offset: 0xc
	// Line 1135, Address: 0x102a094, Func Offset: 0x34
	// Line 1137, Address: 0x102a0ac, Func Offset: 0x4c
	// Line 1138, Address: 0x102a0b8, Func Offset: 0x58
	// Line 1139, Address: 0x102a0c0, Func Offset: 0x60
	// Line 1140, Address: 0x102a0cc, Func Offset: 0x6c
	// Line 1141, Address: 0x102a0e0, Func Offset: 0x80
	// Line 1142, Address: 0x102a0f4, Func Offset: 0x94
	// Line 1146, Address: 0x102a108, Func Offset: 0xa8
	// Line 1147, Address: 0x102a114, Func Offset: 0xb4
	// Func End, Address: 0x102a124, Func Offset: 0xc4
}

// 
// Start address: 0x102a130
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1161, Address: 0x102a130, Func Offset: 0
	// Line 1164, Address: 0x102a13c, Func Offset: 0xc
	// Line 1165, Address: 0x102a15c, Func Offset: 0x2c
	// Line 1166, Address: 0x102a180, Func Offset: 0x50
	// Line 1167, Address: 0x102a18c, Func Offset: 0x5c
	// Func End, Address: 0x102a19c, Func Offset: 0x6c
}

// 
// Start address: 0x102a1a0
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1182, Address: 0x102a1a0, Func Offset: 0
	// Line 1183, Address: 0x102a1ac, Func Offset: 0xc
	// Line 1184, Address: 0x102a1d4, Func Offset: 0x34
	// Line 1186, Address: 0x102a1ec, Func Offset: 0x4c
	// Line 1187, Address: 0x102a1f8, Func Offset: 0x58
	// Line 1188, Address: 0x102a200, Func Offset: 0x60
	// Line 1189, Address: 0x102a20c, Func Offset: 0x6c
	// Line 1190, Address: 0x102a220, Func Offset: 0x80
	// Line 1191, Address: 0x102a234, Func Offset: 0x94
	// Line 1195, Address: 0x102a248, Func Offset: 0xa8
	// Line 1196, Address: 0x102a254, Func Offset: 0xb4
	// Func End, Address: 0x102a264, Func Offset: 0xc4
}

// 
// Start address: 0x102a270
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1213, Address: 0x102a270, Func Offset: 0
	// Line 1217, Address: 0x102a280, Func Offset: 0x10
	// Line 1218, Address: 0x102a290, Func Offset: 0x20
	// Line 1219, Address: 0x102a2b4, Func Offset: 0x44
	// Line 1220, Address: 0x102a2c8, Func Offset: 0x58
	// Line 1221, Address: 0x102a2e0, Func Offset: 0x70
	// Line 1223, Address: 0x102a2ec, Func Offset: 0x7c
	// Line 1225, Address: 0x102a2f8, Func Offset: 0x88
	// Line 1226, Address: 0x102a334, Func Offset: 0xc4
	// Line 1227, Address: 0x102a33c, Func Offset: 0xcc
	// Line 1228, Address: 0x102a350, Func Offset: 0xe0
	// Line 1229, Address: 0x102a37c, Func Offset: 0x10c
	// Line 1230, Address: 0x102a38c, Func Offset: 0x11c
	// Line 1231, Address: 0x102a3a0, Func Offset: 0x130
	// Line 1232, Address: 0x102a3a8, Func Offset: 0x138
	// Line 1237, Address: 0x102a3bc, Func Offset: 0x14c
	// Func End, Address: 0x102a3d0, Func Offset: 0x160
}

// 
// Start address: 0x102a3d0
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
	// Line 1255, Address: 0x102a3d0, Func Offset: 0
	// Line 1264, Address: 0x102a3f0, Func Offset: 0x20
	// Line 1265, Address: 0x102a3f4, Func Offset: 0x24
	// Line 1266, Address: 0x102a400, Func Offset: 0x30
	// Line 1267, Address: 0x102a40c, Func Offset: 0x3c
	// Line 1268, Address: 0x102a414, Func Offset: 0x44
	// Line 1269, Address: 0x102a41c, Func Offset: 0x4c
	// Line 1271, Address: 0x102a430, Func Offset: 0x60
	// Line 1272, Address: 0x102a434, Func Offset: 0x64
	// Line 1273, Address: 0x102a440, Func Offset: 0x70
	// Line 1274, Address: 0x102a44c, Func Offset: 0x7c
	// Line 1275, Address: 0x102a454, Func Offset: 0x84
	// Line 1277, Address: 0x102a45c, Func Offset: 0x8c
	// Line 1278, Address: 0x102a468, Func Offset: 0x98
	// Line 1279, Address: 0x102a47c, Func Offset: 0xac
	// Line 1281, Address: 0x102a488, Func Offset: 0xb8
	// Line 1282, Address: 0x102a490, Func Offset: 0xc0
	// Line 1284, Address: 0x102a498, Func Offset: 0xc8
	// Line 1286, Address: 0x102a4b8, Func Offset: 0xe8
	// Line 1292, Address: 0x102a4e4, Func Offset: 0x114
	// Line 1293, Address: 0x102a4f8, Func Offset: 0x128
	// Line 1295, Address: 0x102a504, Func Offset: 0x134
	// Line 1296, Address: 0x102a50c, Func Offset: 0x13c
	// Line 1297, Address: 0x102a514, Func Offset: 0x144
	// Line 1299, Address: 0x102a534, Func Offset: 0x164
	// Line 1305, Address: 0x102a560, Func Offset: 0x190
	// Line 1306, Address: 0x102a574, Func Offset: 0x1a4
	// Line 1308, Address: 0x102a580, Func Offset: 0x1b0
	// Line 1309, Address: 0x102a588, Func Offset: 0x1b8
	// Line 1310, Address: 0x102a590, Func Offset: 0x1c0
	// Line 1312, Address: 0x102a5b0, Func Offset: 0x1e0
	// Line 1318, Address: 0x102a5dc, Func Offset: 0x20c
	// Line 1319, Address: 0x102a5f0, Func Offset: 0x220
	// Line 1321, Address: 0x102a5fc, Func Offset: 0x22c
	// Line 1322, Address: 0x102a604, Func Offset: 0x234
	// Line 1323, Address: 0x102a60c, Func Offset: 0x23c
	// Line 1325, Address: 0x102a62c, Func Offset: 0x25c
	// Line 1334, Address: 0x102a658, Func Offset: 0x288
	// Func End, Address: 0x102a680, Func Offset: 0x2b0
}

// 
// Start address: 0x102a680
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
	// Line 1351, Address: 0x102a680, Func Offset: 0
	// Line 1362, Address: 0x102a6ac, Func Offset: 0x2c
	// Line 1364, Address: 0x102a6b4, Func Offset: 0x34
	// Line 1365, Address: 0x102a6cc, Func Offset: 0x4c
	// Line 1366, Address: 0x102a6e0, Func Offset: 0x60
	// Line 1368, Address: 0x102a6e8, Func Offset: 0x68
	// Line 1370, Address: 0x102a6fc, Func Offset: 0x7c
	// Line 1371, Address: 0x102a714, Func Offset: 0x94
	// Line 1372, Address: 0x102a728, Func Offset: 0xa8
	// Line 1373, Address: 0x102a730, Func Offset: 0xb0
	// Line 1375, Address: 0x102a738, Func Offset: 0xb8
	// Line 1376, Address: 0x102a74c, Func Offset: 0xcc
	// Line 1381, Address: 0x102a754, Func Offset: 0xd4
	// Line 1382, Address: 0x102a7a4, Func Offset: 0x124
	// Line 1383, Address: 0x102a7ac, Func Offset: 0x12c
	// Line 1389, Address: 0x102a7cc, Func Offset: 0x14c
	// Line 1390, Address: 0x102a7ec, Func Offset: 0x16c
	// Line 1391, Address: 0x102a810, Func Offset: 0x190
	// Line 1392, Address: 0x102a81c, Func Offset: 0x19c
	// Line 1393, Address: 0x102a824, Func Offset: 0x1a4
	// Line 1395, Address: 0x102a844, Func Offset: 0x1c4
	// Line 1399, Address: 0x102a870, Func Offset: 0x1f0
	// Line 1402, Address: 0x102a878, Func Offset: 0x1f8
	// Line 1403, Address: 0x102a87c, Func Offset: 0x1fc
	// Line 1407, Address: 0x102a89c, Func Offset: 0x21c
	// Line 1414, Address: 0x102a8c8, Func Offset: 0x248
	// Line 1421, Address: 0x102a8dc, Func Offset: 0x25c
	// Line 1422, Address: 0x102a8e4, Func Offset: 0x264
	// Line 1423, Address: 0x102a8ec, Func Offset: 0x26c
	// Line 1424, Address: 0x102a904, Func Offset: 0x284
	// Line 1425, Address: 0x102a924, Func Offset: 0x2a4
	// Line 1429, Address: 0x102a92c, Func Offset: 0x2ac
	// Line 1431, Address: 0x102a95c, Func Offset: 0x2dc
	// Line 1432, Address: 0x102a968, Func Offset: 0x2e8
	// Line 1436, Address: 0x102a978, Func Offset: 0x2f8
	// Line 1437, Address: 0x102a984, Func Offset: 0x304
	// Line 1439, Address: 0x102a9a4, Func Offset: 0x324
	// Line 1440, Address: 0x102a9dc, Func Offset: 0x35c
	// Line 1441, Address: 0x102a9fc, Func Offset: 0x37c
	// Line 1443, Address: 0x102aa20, Func Offset: 0x3a0
	// Line 1446, Address: 0x102aa44, Func Offset: 0x3c4
	// Line 1448, Address: 0x102aa64, Func Offset: 0x3e4
	// Line 1450, Address: 0x102aa78, Func Offset: 0x3f8
	// Line 1451, Address: 0x102aa84, Func Offset: 0x404
	// Line 1452, Address: 0x102aa94, Func Offset: 0x414
	// Line 1454, Address: 0x102aa9c, Func Offset: 0x41c
	// Func End, Address: 0x102aac4, Func Offset: 0x444
}

// 
// Start address: 0x102aad0
void scrollwrtc()
{
	// Line 1460, Address: 0x102aad0, Func Offset: 0
	// Func End, Address: 0x102aad8, Func Offset: 0x8
}

// 
// Start address: 0x102aae0
void scrollwrtz()
{
	// Line 1465, Address: 0x102aae0, Func Offset: 0
	// Func End, Address: 0x102aae8, Func Offset: 0x8
}

// 
// Start address: 0x102aaf0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1483, Address: 0x102aaf0, Func Offset: 0
	// Line 1496, Address: 0x102ab18, Func Offset: 0x28
	// Line 1499, Address: 0x102ab38, Func Offset: 0x48
	// Line 1500, Address: 0x102ab4c, Func Offset: 0x5c
	// Line 1501, Address: 0x102ab60, Func Offset: 0x70
	// Line 1502, Address: 0x102ab74, Func Offset: 0x84
	// Line 1504, Address: 0x102ab88, Func Offset: 0x98
	// Line 1505, Address: 0x102ab94, Func Offset: 0xa4
	// Line 1506, Address: 0x102aba8, Func Offset: 0xb8
	// Func End, Address: 0x102abb8, Func Offset: 0xc8
}

// 
// Start address: 0x102abc0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1510, Address: 0x102abc0, Func Offset: 0
	// Line 1514, Address: 0x102abe8, Func Offset: 0x28
	// Line 1517, Address: 0x102ac08, Func Offset: 0x48
	// Line 1518, Address: 0x102ac1c, Func Offset: 0x5c
	// Line 1519, Address: 0x102ac30, Func Offset: 0x70
	// Line 1520, Address: 0x102ac44, Func Offset: 0x84
	// Line 1522, Address: 0x102ac58, Func Offset: 0x98
	// Line 1523, Address: 0x102ac64, Func Offset: 0xa4
	// Line 1524, Address: 0x102ac78, Func Offset: 0xb8
	// Func End, Address: 0x102ac88, Func Offset: 0xc8
}

// 
// Start address: 0x102ac90
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1544, Address: 0x102ac90, Func Offset: 0
	// Line 1548, Address: 0x102acb8, Func Offset: 0x28
	// Line 1551, Address: 0x102acd8, Func Offset: 0x48
	// Line 1552, Address: 0x102acec, Func Offset: 0x5c
	// Line 1553, Address: 0x102acfc, Func Offset: 0x6c
	// Line 1554, Address: 0x102ad10, Func Offset: 0x80
	// Line 1556, Address: 0x102ad20, Func Offset: 0x90
	// Line 1557, Address: 0x102ad2c, Func Offset: 0x9c
	// Line 1558, Address: 0x102ad40, Func Offset: 0xb0
	// Func End, Address: 0x102ad50, Func Offset: 0xc0
}

// 
// Start address: 0x102ad50
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
	// Line 1577, Address: 0x102ad50, Func Offset: 0
	// Line 1583, Address: 0x102ad84, Func Offset: 0x34
	// Line 1585, Address: 0x102ad94, Func Offset: 0x44
	// Line 1586, Address: 0x102ad98, Func Offset: 0x48
	// Line 1587, Address: 0x102ada0, Func Offset: 0x50
	// Line 1589, Address: 0x102adb0, Func Offset: 0x60
	// Line 1591, Address: 0x102adb4, Func Offset: 0x64
	// Line 1592, Address: 0x102adbc, Func Offset: 0x6c
	// Line 1595, Address: 0x102adc4, Func Offset: 0x74
	// Line 1596, Address: 0x102adcc, Func Offset: 0x7c
	// Line 1597, Address: 0x102add8, Func Offset: 0x88
	// Line 1599, Address: 0x102ade4, Func Offset: 0x94
	// Line 1600, Address: 0x102adec, Func Offset: 0x9c
	// Line 1601, Address: 0x102adf4, Func Offset: 0xa4
	// Line 1602, Address: 0x102adfc, Func Offset: 0xac
	// Line 1604, Address: 0x102ae08, Func Offset: 0xb8
	// Line 1605, Address: 0x102ae10, Func Offset: 0xc0
	// Line 1606, Address: 0x102ae18, Func Offset: 0xc8
	// Line 1607, Address: 0x102ae20, Func Offset: 0xd0
	// Line 1609, Address: 0x102ae2c, Func Offset: 0xdc
	// Line 1610, Address: 0x102ae34, Func Offset: 0xe4
	// Line 1611, Address: 0x102ae3c, Func Offset: 0xec
	// Line 1614, Address: 0x102ae44, Func Offset: 0xf4
	// Line 1615, Address: 0x102ae4c, Func Offset: 0xfc
	// Line 1618, Address: 0x102ae54, Func Offset: 0x104
	// Line 1619, Address: 0x102ae98, Func Offset: 0x148
	// Line 1620, Address: 0x102aedc, Func Offset: 0x18c
	// Line 1621, Address: 0x102af20, Func Offset: 0x1d0
	// Line 1623, Address: 0x102af64, Func Offset: 0x214
	// Func End, Address: 0x102af94, Func Offset: 0x244
}

// 
// Start address: 0x102afa0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1641, Address: 0x102afa0, Func Offset: 0
	// Line 1642, Address: 0x102afc0, Func Offset: 0x20
	// Line 1643, Address: 0x102afe0, Func Offset: 0x40
	// Func End, Address: 0x102aff0, Func Offset: 0x50
}

// 
// Start address: 0x102aff0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1645, Address: 0x102aff0, Func Offset: 0
	// Line 1646, Address: 0x102b010, Func Offset: 0x20
	// Line 1647, Address: 0x102b014, Func Offset: 0x24
	// Line 1648, Address: 0x102b034, Func Offset: 0x44
	// Func End, Address: 0x102b044, Func Offset: 0x54
}

// 
// Start address: 0x102b050
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1655, Address: 0x102b050, Func Offset: 0
	// Line 1661, Address: 0x102b080, Func Offset: 0x30
	// Line 1662, Address: 0x102b090, Func Offset: 0x40
	// Line 1668, Address: 0x102b0a0, Func Offset: 0x50
	// Line 1669, Address: 0x102b0bc, Func Offset: 0x6c
	// Line 1670, Address: 0x102b0c0, Func Offset: 0x70
	// Line 1671, Address: 0x102b0dc, Func Offset: 0x8c
	// Line 1672, Address: 0x102b0e0, Func Offset: 0x90
	// Line 1673, Address: 0x102b100, Func Offset: 0xb0
	// Line 1674, Address: 0x102b108, Func Offset: 0xb8
	// Line 1675, Address: 0x102b128, Func Offset: 0xd8
	// Line 1676, Address: 0x102b130, Func Offset: 0xe0
	// Line 1677, Address: 0x102b178, Func Offset: 0x128
	// Line 1679, Address: 0x102b184, Func Offset: 0x134
	// Line 1681, Address: 0x102b1a0, Func Offset: 0x150
	// Line 1686, Address: 0x102b1a8, Func Offset: 0x158
	// Line 1687, Address: 0x102b1b4, Func Offset: 0x164
	// Line 1690, Address: 0x102b1c0, Func Offset: 0x170
	// Line 1691, Address: 0x102b1c8, Func Offset: 0x178
	// Line 1692, Address: 0x102b1e8, Func Offset: 0x198
	// Line 1693, Address: 0x102b204, Func Offset: 0x1b4
	// Line 1694, Address: 0x102b20c, Func Offset: 0x1bc
	// Line 1695, Address: 0x102b22c, Func Offset: 0x1dc
	// Line 1697, Address: 0x102b248, Func Offset: 0x1f8
	// Line 1698, Address: 0x102b250, Func Offset: 0x200
	// Line 1699, Address: 0x102b258, Func Offset: 0x208
	// Line 1700, Address: 0x102b264, Func Offset: 0x214
	// Line 1701, Address: 0x102b27c, Func Offset: 0x22c
	// Line 1703, Address: 0x102b28c, Func Offset: 0x23c
	// Line 1706, Address: 0x102b298, Func Offset: 0x248
	// Line 1707, Address: 0x102b2a0, Func Offset: 0x250
	// Line 1708, Address: 0x102b2a4, Func Offset: 0x254
	// Func End, Address: 0x102b2c4, Func Offset: 0x274
}

// 
// Start address: 0x102b2d0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1728, Address: 0x102b2d0, Func Offset: 0
	// Line 1736, Address: 0x102b2f8, Func Offset: 0x28
	// Line 1737, Address: 0x102b35c, Func Offset: 0x8c
	// Line 1743, Address: 0x102b364, Func Offset: 0x94
	// Line 1744, Address: 0x102b36c, Func Offset: 0x9c
	// Line 1745, Address: 0x102b38c, Func Offset: 0xbc
	// Line 1746, Address: 0x102b3a8, Func Offset: 0xd8
	// Line 1747, Address: 0x102b3b0, Func Offset: 0xe0
	// Line 1748, Address: 0x102b3d0, Func Offset: 0x100
	// Line 1751, Address: 0x102b3ec, Func Offset: 0x11c
	// Line 1752, Address: 0x102b3f4, Func Offset: 0x124
	// Line 1753, Address: 0x102b3fc, Func Offset: 0x12c
	// Line 1754, Address: 0x102b408, Func Offset: 0x138
	// Line 1755, Address: 0x102b420, Func Offset: 0x150
	// Line 1756, Address: 0x102b428, Func Offset: 0x158
	// Line 1761, Address: 0x102b438, Func Offset: 0x168
	// Line 1764, Address: 0x102b444, Func Offset: 0x174
	// Line 1765, Address: 0x102b44c, Func Offset: 0x17c
	// Line 1766, Address: 0x102b450, Func Offset: 0x180
	// Func End, Address: 0x102b46c, Func Offset: 0x19c
}

// 
// Start address: 0x102b470
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1780, Address: 0x102b470, Func Offset: 0
	// Line 1787, Address: 0x102b48c, Func Offset: 0x1c
	// Line 1788, Address: 0x102b490, Func Offset: 0x20
	// Line 1789, Address: 0x102b498, Func Offset: 0x28
	// Line 1790, Address: 0x102b4bc, Func Offset: 0x4c
	// Line 1791, Address: 0x102b4c8, Func Offset: 0x58
	// Line 1792, Address: 0x102b4e0, Func Offset: 0x70
	// Line 1793, Address: 0x102b4f4, Func Offset: 0x84
	// Line 1798, Address: 0x102b50c, Func Offset: 0x9c
	// Func End, Address: 0x102b524, Func Offset: 0xb4
}

// 
// Start address: 0x102b530
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1812, Address: 0x102b530, Func Offset: 0
	// Line 1813, Address: 0x102b53c, Func Offset: 0xc
	// Line 1814, Address: 0x102b568, Func Offset: 0x38
	// Line 1815, Address: 0x102b5b4, Func Offset: 0x84
	// Line 1816, Address: 0x102b5e0, Func Offset: 0xb0
	// Line 1818, Address: 0x102b62c, Func Offset: 0xfc
	// Line 1824, Address: 0x102b638, Func Offset: 0x108
	// Line 1825, Address: 0x102b63c, Func Offset: 0x10c
	// Func End, Address: 0x102b648, Func Offset: 0x118
}

// 
// Start address: 0x102b650
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1842, Address: 0x102b650, Func Offset: 0
	// Line 1843, Address: 0x102b66c, Func Offset: 0x1c
	// Line 1845, Address: 0x102b688, Func Offset: 0x38
	// Func End, Address: 0x102b698, Func Offset: 0x48
}

// 
// Start address: 0x102b6a0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1847, Address: 0x102b6a0, Func Offset: 0
	// Line 1848, Address: 0x102b6bc, Func Offset: 0x1c
	// Line 1849, Address: 0x102b6c0, Func Offset: 0x20
	// Line 1851, Address: 0x102b6dc, Func Offset: 0x3c
	// Func End, Address: 0x102b6ec, Func Offset: 0x4c
}

// 
// Start address: 0x102b6f0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1853, Address: 0x102b6f0, Func Offset: 0
	// Line 1854, Address: 0x102b704, Func Offset: 0x14
	// Line 1856, Address: 0x102b720, Func Offset: 0x30
	// Func End, Address: 0x102b730, Func Offset: 0x40
}

// 
// Start address: 0x102b730
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1858, Address: 0x102b730, Func Offset: 0
	// Line 1859, Address: 0x102b74c, Func Offset: 0x1c
	// Line 1861, Address: 0x102b768, Func Offset: 0x38
	// Func End, Address: 0x102b778, Func Offset: 0x48
}

// 
// Start address: 0x102b780
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1863, Address: 0x102b780, Func Offset: 0
	// Line 1864, Address: 0x102b798, Func Offset: 0x18
	// Line 1865, Address: 0x102b7a8, Func Offset: 0x28
	// Line 1866, Address: 0x102b7b8, Func Offset: 0x38
	// Line 1867, Address: 0x102b7c4, Func Offset: 0x44
	// Line 1869, Address: 0x102b7d0, Func Offset: 0x50
	// Line 1870, Address: 0x102b7fc, Func Offset: 0x7c
	// Line 1873, Address: 0x102b828, Func Offset: 0xa8
	// Func End, Address: 0x102b834, Func Offset: 0xb4
}

// 
// Start address: 0x102b840
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1889, Address: 0x102b840, Func Offset: 0
	// Line 1894, Address: 0x102b858, Func Offset: 0x18
	// Line 1895, Address: 0x102b864, Func Offset: 0x24
	// Line 1896, Address: 0x102b870, Func Offset: 0x30
	// Line 1897, Address: 0x102b878, Func Offset: 0x38
	// Line 1898, Address: 0x102b87c, Func Offset: 0x3c
	// Line 1899, Address: 0x102b894, Func Offset: 0x54
	// Line 1900, Address: 0x102b89c, Func Offset: 0x5c
	// Func End, Address: 0x102b8bc, Func Offset: 0x7c
}

// 
// Start address: 0x102b8c0
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1903, Address: 0x102b8c0, Func Offset: 0
	// Line 1908, Address: 0x102b8d8, Func Offset: 0x18
	// Line 1909, Address: 0x102b8e4, Func Offset: 0x24
	// Line 1910, Address: 0x102b8f0, Func Offset: 0x30
	// Line 1911, Address: 0x102b8f8, Func Offset: 0x38
	// Line 1912, Address: 0x102b8fc, Func Offset: 0x3c
	// Line 1914, Address: 0x102b90c, Func Offset: 0x4c
	// Func End, Address: 0x102b92c, Func Offset: 0x6c
}

// 
// Start address: 0x102b930
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1917, Address: 0x102b930, Func Offset: 0
	// Line 1918, Address: 0x102b948, Func Offset: 0x18
	// Line 1919, Address: 0x102b968, Func Offset: 0x38
	// Func End, Address: 0x102b978, Func Offset: 0x48
}

// 
// Start address: 0x102b980
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1924, Address: 0x102b980, Func Offset: 0
	// Line 1928, Address: 0x102b9a0, Func Offset: 0x20
	// Line 1931, Address: 0x102b9bc, Func Offset: 0x3c
	// Line 1935, Address: 0x102b9e4, Func Offset: 0x64
	// Line 1936, Address: 0x102b9f0, Func Offset: 0x70
	// Line 1938, Address: 0x102ba18, Func Offset: 0x98
	// Func End, Address: 0x102ba28, Func Offset: 0xa8
}

// 
// Start address: 0x102ba30
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1944, Address: 0x102ba30, Func Offset: 0
	// Line 1947, Address: 0x102ba4c, Func Offset: 0x1c
	// Line 1948, Address: 0x102ba54, Func Offset: 0x24
	// Line 1951, Address: 0x102ba5c, Func Offset: 0x2c
	// Line 1953, Address: 0x102ba80, Func Offset: 0x50
	// Line 1954, Address: 0x102baa0, Func Offset: 0x70
	// Line 1955, Address: 0x102baa8, Func Offset: 0x78
	// Line 1956, Address: 0x102bacc, Func Offset: 0x9c
	// Func End, Address: 0x102bae8, Func Offset: 0xb8
}

// 
// Start address: 0x102baf0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1982, Address: 0x102baf0, Func Offset: 0
	// Line 1987, Address: 0x102bb18, Func Offset: 0x28
	// Line 1988, Address: 0x102bb28, Func Offset: 0x38
	// Line 1990, Address: 0x102bb44, Func Offset: 0x54
	// Line 1991, Address: 0x102bb68, Func Offset: 0x78
	// Line 1992, Address: 0x102bb90, Func Offset: 0xa0
	// Line 1993, Address: 0x102bb9c, Func Offset: 0xac
	// Line 1994, Address: 0x102bba4, Func Offset: 0xb4
	// Line 1997, Address: 0x102bbc0, Func Offset: 0xd0
	// Line 2001, Address: 0x102bbe8, Func Offset: 0xf8
	// Line 2004, Address: 0x102bbf0, Func Offset: 0x100
	// Line 2005, Address: 0x102bbf4, Func Offset: 0x104
	// Line 2009, Address: 0x102bc10, Func Offset: 0x120
	// Line 2016, Address: 0x102bc38, Func Offset: 0x148
	// Func End, Address: 0x102bc54, Func Offset: 0x164
}

// 
// Start address: 0x102bc60
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
	// Line 2027, Address: 0x102bc60, Func Offset: 0
	// Line 2028, Address: 0x102bc80, Func Offset: 0x20
	// Line 2033, Address: 0x102bcac, Func Offset: 0x4c
	// Line 2039, Address: 0x102bcd0, Func Offset: 0x70
	// Line 2040, Address: 0x102bcd4, Func Offset: 0x74
	// Line 2042, Address: 0x102bcd8, Func Offset: 0x78
	// Line 2043, Address: 0x102bce0, Func Offset: 0x80
	// Line 2046, Address: 0x102bd04, Func Offset: 0xa4
	// Line 2047, Address: 0x102bd08, Func Offset: 0xa8
	// Line 2050, Address: 0x102bd2c, Func Offset: 0xcc
	// Line 2051, Address: 0x102bd30, Func Offset: 0xd0
	// Line 2052, Address: 0x102bd38, Func Offset: 0xd8
	// Line 2053, Address: 0x102bd3c, Func Offset: 0xdc
	// Line 2055, Address: 0x102bd40, Func Offset: 0xe0
	// Line 2056, Address: 0x102bd48, Func Offset: 0xe8
	// Line 2057, Address: 0x102bd68, Func Offset: 0x108
	// Line 2061, Address: 0x102bd74, Func Offset: 0x114
	// Line 2062, Address: 0x102bd88, Func Offset: 0x128
	// Line 2065, Address: 0x102bd9c, Func Offset: 0x13c
	// Line 2066, Address: 0x102bdbc, Func Offset: 0x15c
	// Func End, Address: 0x102bde4, Func Offset: 0x184
}

// 
// Start address: 0x102bdf0
void mapset()
{
	// Line 2071, Address: 0x102bdf0, Func Offset: 0
	// Func End, Address: 0x102bdf8, Func Offset: 0x8
}

// 
// Start address: 0x102be00
void divdevset()
{
	// Line 2075, Address: 0x102be00, Func Offset: 0
	// Func End, Address: 0x102be08, Func Offset: 0x8
}

// 
// Start address: 0x102be10
void enecginit()
{
	// Line 2079, Address: 0x102be10, Func Offset: 0
	// Func End, Address: 0x102be18, Func Offset: 0x8
}

// 
// Start address: 0x102be20
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2095, Address: 0x102be20, Func Offset: 0
	// Line 2099, Address: 0x102be40, Func Offset: 0x20
	// Line 2100, Address: 0x102be58, Func Offset: 0x38
	// Line 2101, Address: 0x102be68, Func Offset: 0x48
	// Line 2102, Address: 0x102be78, Func Offset: 0x58
	// Line 2103, Address: 0x102be80, Func Offset: 0x60
	// Line 2105, Address: 0x102be84, Func Offset: 0x64
	// Line 2106, Address: 0x102be90, Func Offset: 0x70
	// Line 2107, Address: 0x102bea8, Func Offset: 0x88
	// Line 2109, Address: 0x102beb4, Func Offset: 0x94
	// Line 2110, Address: 0x102bec0, Func Offset: 0xa0
	// Line 2111, Address: 0x102becc, Func Offset: 0xac
	// Func End, Address: 0x102beec, Func Offset: 0xcc
}

