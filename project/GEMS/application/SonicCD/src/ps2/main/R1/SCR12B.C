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

typedef void(*type_13)(void*, unsigned char, int);
typedef int(*type_14)(int, int, int, int, int);

typedef unsigned char type_0[8];
typedef short type_1[256];
typedef _anon0* type_2[8];
typedef short type_3[2];
typedef short type_4[2][1];
typedef _anon13 type_5[128];
typedef short type_6[6];
typedef _anon0* type_7[8];
typedef _anon11 type_8[20];
typedef _anon11 type_9[0];
typedef unsigned char type_10[4];
typedef short type_11[2];
typedef short type_12[2][8];
typedef unsigned short type_15[4];
typedef unsigned short type_16[4][1024];
typedef unsigned char type_17[33];
typedef unsigned char type_18[2];
typedef unsigned char type_19[64];
typedef unsigned char type_20[64][8];
typedef unsigned char type_21[22];
typedef int type_22[8];
typedef unsigned char type_23[64];
typedef unsigned char type_24[64][8];

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

unsigned char z12bwrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon13 actwk[128];
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
_anon4 scr_timer;
_anon9 scr_die;
_anon9 zone_flag;
unsigned char scrh_flag;
unsigned char scrv_flag;
short endplpositbl[2][8];
short playpositbl[2][1];
unsigned char playmapnotbl[4];
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
_anon0 scrc_h_posit;
_anon0 scrz_h_posit;
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
_anon9 scrflagaw;
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon9 scrflagbw;
unsigned char mapwkb[64][8];
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon1 mapinittbl;

_anon13* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
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
void divdevset();
void enecginit();

// 
// Start address: 0x1025f00
_anon13* main_chk()
{
	// Line 151, Address: 0x1025f00, Func Offset: 0
	// Line 152, Address: 0x1025f14, Func Offset: 0x14
	// Line 154, Address: 0x1025f24, Func Offset: 0x24
	// Line 156, Address: 0x1025f2c, Func Offset: 0x2c
	// Func End, Address: 0x1025f34, Func Offset: 0x34
}

// 
// Start address: 0x1025f40
void scr_set()
{
	short* pScrTbl;
	// Line 194, Address: 0x1025f40, Func Offset: 0
	// Line 197, Address: 0x1025f4c, Func Offset: 0xc
	// Line 198, Address: 0x1025f60, Func Offset: 0x20
	// Line 199, Address: 0x1025f74, Func Offset: 0x34
	// Line 201, Address: 0x1025f7c, Func Offset: 0x3c
	// Line 202, Address: 0x1025f84, Func Offset: 0x44
	// Line 203, Address: 0x1025f90, Func Offset: 0x50
	// Line 204, Address: 0x1025f94, Func Offset: 0x54
	// Line 205, Address: 0x1025fa8, Func Offset: 0x68
	// Line 206, Address: 0x1025fac, Func Offset: 0x6c
	// Line 207, Address: 0x1025fc0, Func Offset: 0x80
	// Line 208, Address: 0x1025fc4, Func Offset: 0x84
	// Line 209, Address: 0x1025fd8, Func Offset: 0x98
	// Line 210, Address: 0x1025fdc, Func Offset: 0x9c
	// Line 211, Address: 0x1025ff0, Func Offset: 0xb0
	// Line 212, Address: 0x1026010, Func Offset: 0xd0
	// Line 213, Address: 0x1026014, Func Offset: 0xd4
	// Line 214, Address: 0x1026020, Func Offset: 0xe0
	// Line 216, Address: 0x102602c, Func Offset: 0xec
	// Line 217, Address: 0x1026038, Func Offset: 0xf8
	// Line 219, Address: 0x1026044, Func Offset: 0x104
	// Line 220, Address: 0x102604c, Func Offset: 0x10c
	// Func End, Address: 0x1026060, Func Offset: 0x120
}

// 
// Start address: 0x1026060
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 269, Address: 0x1026060, Func Offset: 0
	// Line 272, Address: 0x1026074, Func Offset: 0x14
	// Line 273, Address: 0x1026084, Func Offset: 0x24
	// Line 274, Address: 0x102608c, Func Offset: 0x2c
	// Line 276, Address: 0x102609c, Func Offset: 0x3c
	// Line 277, Address: 0x10260b4, Func Offset: 0x54
	// Line 278, Address: 0x10260c4, Func Offset: 0x64
	// Line 279, Address: 0x10260cc, Func Offset: 0x6c
	// Line 281, Address: 0x10260d0, Func Offset: 0x70
	// Line 283, Address: 0x10260d8, Func Offset: 0x78
	// Line 284, Address: 0x10260f8, Func Offset: 0x98
	// Line 285, Address: 0x102611c, Func Offset: 0xbc
	// Line 287, Address: 0x1026124, Func Offset: 0xc4
	// Line 291, Address: 0x1026144, Func Offset: 0xe4
	// Line 292, Address: 0x1026158, Func Offset: 0xf8
	// Line 296, Address: 0x102616c, Func Offset: 0x10c
	// Line 297, Address: 0x1026180, Func Offset: 0x120
	// Line 298, Address: 0x102618c, Func Offset: 0x12c
	// Line 299, Address: 0x1026194, Func Offset: 0x134
	// Line 303, Address: 0x1026198, Func Offset: 0x138
	// Line 304, Address: 0x10261bc, Func Offset: 0x15c
	// Line 308, Address: 0x10261cc, Func Offset: 0x16c
	// Line 310, Address: 0x10261d4, Func Offset: 0x174
	// Line 311, Address: 0x10261e8, Func Offset: 0x188
	// Line 312, Address: 0x10261f4, Func Offset: 0x194
	// Line 313, Address: 0x10261fc, Func Offset: 0x19c
	// Line 317, Address: 0x1026200, Func Offset: 0x1a0
	// Line 318, Address: 0x1026224, Func Offset: 0x1c4
	// Line 322, Address: 0x1026234, Func Offset: 0x1d4
	// Line 324, Address: 0x102623c, Func Offset: 0x1dc
	// Line 327, Address: 0x102624c, Func Offset: 0x1ec
	// Line 328, Address: 0x102625c, Func Offset: 0x1fc
	// Line 329, Address: 0x102626c, Func Offset: 0x20c
	// Line 330, Address: 0x102627c, Func Offset: 0x21c
	// Line 331, Address: 0x102628c, Func Offset: 0x22c
	// Func End, Address: 0x10262a8, Func Offset: 0x248
}

// 
// Start address: 0x10262b0
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 352, Address: 0x10262b0, Func Offset: 0
	// Line 355, Address: 0x10262c0, Func Offset: 0x10
	// Line 356, Address: 0x10262c8, Func Offset: 0x18
	// Line 358, Address: 0x10262cc, Func Offset: 0x1c
	// Line 359, Address: 0x10262e0, Func Offset: 0x30
	// Line 360, Address: 0x10262ec, Func Offset: 0x3c
	// Line 361, Address: 0x10262f8, Func Offset: 0x48
	// Line 363, Address: 0x1026304, Func Offset: 0x54
	// Line 364, Address: 0x1026320, Func Offset: 0x70
	// Line 366, Address: 0x102632c, Func Offset: 0x7c
	// Line 367, Address: 0x1026348, Func Offset: 0x98
	// Line 369, Address: 0x1026354, Func Offset: 0xa4
	// Line 370, Address: 0x1026370, Func Offset: 0xc0
	// Line 372, Address: 0x1026394, Func Offset: 0xe4
	// Line 373, Address: 0x10263b4, Func Offset: 0x104
	// Func End, Address: 0x10263c4, Func Offset: 0x114
}

// 
// Start address: 0x10263d0
void scroll()
{
	_anon0 ldwk;
	_anon0 ldwk2;
	_anon0* pHscrbuf;
	int i;
	int j;
	int lXwk;
	int lYwk;
	short sYline;
	short sYnum;
	short* psHscr;
	short* psHscw;
	short wk;
	short wk;
	unsigned char z12b_cnttbl[8];
	int scaddtbl[8];
	// Line 389, Address: 0x10263d0, Func Offset: 0
	// Line 401, Address: 0x10263fc, Func Offset: 0x2c
	// Line 406, Address: 0x102640c, Func Offset: 0x3c
	// Line 408, Address: 0x1026438, Func Offset: 0x68
	// Line 410, Address: 0x1026440, Func Offset: 0x70
	// Line 411, Address: 0x1026448, Func Offset: 0x78
	// Line 413, Address: 0x1026450, Func Offset: 0x80
	// Line 414, Address: 0x1026460, Func Offset: 0x90
	// Line 417, Address: 0x1026470, Func Offset: 0xa0
	// Line 418, Address: 0x1026484, Func Offset: 0xb4
	// Line 420, Address: 0x1026494, Func Offset: 0xc4
	// Line 421, Address: 0x10264b0, Func Offset: 0xe0
	// Line 423, Address: 0x10264c0, Func Offset: 0xf0
	// Line 424, Address: 0x10264d4, Func Offset: 0x104
	// Line 425, Address: 0x10264f4, Func Offset: 0x124
	// Line 426, Address: 0x1026504, Func Offset: 0x134
	// Line 428, Address: 0x102652c, Func Offset: 0x15c
	// Line 429, Address: 0x1026564, Func Offset: 0x194
	// Line 431, Address: 0x1026578, Func Offset: 0x1a8
	// Line 432, Address: 0x102658c, Func Offset: 0x1bc
	// Line 433, Address: 0x1026594, Func Offset: 0x1c4
	// Line 434, Address: 0x102659c, Func Offset: 0x1cc
	// Line 435, Address: 0x10265bc, Func Offset: 0x1ec
	// Line 436, Address: 0x10265c4, Func Offset: 0x1f4
	// Line 437, Address: 0x10265cc, Func Offset: 0x1fc
	// Line 438, Address: 0x10265d0, Func Offset: 0x200
	// Line 440, Address: 0x10265e0, Func Offset: 0x210
	// Line 441, Address: 0x1026600, Func Offset: 0x230
	// Line 442, Address: 0x1026618, Func Offset: 0x248
	// Line 443, Address: 0x1026620, Func Offset: 0x250
	// Line 445, Address: 0x1026628, Func Offset: 0x258
	// Line 447, Address: 0x1026634, Func Offset: 0x264
	// Line 448, Address: 0x102663c, Func Offset: 0x26c
	// Line 449, Address: 0x1026640, Func Offset: 0x270
	// Line 450, Address: 0x1026648, Func Offset: 0x278
	// Line 451, Address: 0x102664c, Func Offset: 0x27c
	// Line 452, Address: 0x1026664, Func Offset: 0x294
	// Line 454, Address: 0x1026694, Func Offset: 0x2c4
	// Line 456, Address: 0x10266b0, Func Offset: 0x2e0
	// Line 457, Address: 0x10266b8, Func Offset: 0x2e8
	// Line 458, Address: 0x10266bc, Func Offset: 0x2ec
	// Line 459, Address: 0x10266cc, Func Offset: 0x2fc
	// Line 461, Address: 0x10266d8, Func Offset: 0x308
	// Line 463, Address: 0x10266f8, Func Offset: 0x328
	// Line 465, Address: 0x1026704, Func Offset: 0x334
	// Line 466, Address: 0x102670c, Func Offset: 0x33c
	// Line 467, Address: 0x1026710, Func Offset: 0x340
	// Line 469, Address: 0x1026720, Func Offset: 0x350
	// Line 470, Address: 0x1026740, Func Offset: 0x370
	// Line 472, Address: 0x102674c, Func Offset: 0x37c
	// Line 473, Address: 0x1026754, Func Offset: 0x384
	// Line 474, Address: 0x1026758, Func Offset: 0x388
	// Line 476, Address: 0x1026768, Func Offset: 0x398
	// Line 477, Address: 0x1026788, Func Offset: 0x3b8
	// Line 479, Address: 0x1026794, Func Offset: 0x3c4
	// Line 480, Address: 0x102679c, Func Offset: 0x3cc
	// Line 481, Address: 0x10267a0, Func Offset: 0x3d0
	// Line 483, Address: 0x10267b0, Func Offset: 0x3e0
	// Line 484, Address: 0x10267e0, Func Offset: 0x410
	// Line 486, Address: 0x1026814, Func Offset: 0x444
	// Line 487, Address: 0x1026820, Func Offset: 0x450
	// Line 488, Address: 0x102682c, Func Offset: 0x45c
	// Line 489, Address: 0x1026848, Func Offset: 0x478
	// Func End, Address: 0x102687c, Func Offset: 0x4ac
}

// 
// Start address: 0x1026880
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 510, Address: 0x1026880, Func Offset: 0
	// Line 514, Address: 0x102689c, Func Offset: 0x1c
	// Line 515, Address: 0x10268a0, Func Offset: 0x20
	// Line 516, Address: 0x10268bc, Func Offset: 0x3c
	// Line 517, Address: 0x10268c8, Func Offset: 0x48
	// Line 519, Address: 0x10268d4, Func Offset: 0x54
	// Line 520, Address: 0x10268dc, Func Offset: 0x5c
	// Line 521, Address: 0x10268ec, Func Offset: 0x6c
	// Line 522, Address: 0x1026910, Func Offset: 0x90
	// Line 523, Address: 0x1026930, Func Offset: 0xb0
	// Func End, Address: 0x1026944, Func Offset: 0xc4
}

// 
// Start address: 0x1026950
void scrollb_hv(int xOffs, int yOffs)
{
	int lwk;
	int lsv;
	_anon0 ldwk;
	// Line 545, Address: 0x1026950, Func Offset: 0
	// Line 549, Address: 0x1026964, Func Offset: 0x14
	// Line 550, Address: 0x102696c, Func Offset: 0x1c
	// Line 551, Address: 0x1026980, Func Offset: 0x30
	// Line 552, Address: 0x10269b0, Func Offset: 0x60
	// Line 553, Address: 0x10269c4, Func Offset: 0x74
	// Line 554, Address: 0x10269d0, Func Offset: 0x80
	// Line 555, Address: 0x10269e4, Func Offset: 0x94
	// Line 557, Address: 0x10269ec, Func Offset: 0x9c
	// Line 562, Address: 0x1026a00, Func Offset: 0xb0
	// Line 563, Address: 0x1026a08, Func Offset: 0xb8
	// Line 564, Address: 0x1026a1c, Func Offset: 0xcc
	// Line 565, Address: 0x1026a4c, Func Offset: 0xfc
	// Line 566, Address: 0x1026a60, Func Offset: 0x110
	// Line 567, Address: 0x1026a6c, Func Offset: 0x11c
	// Line 568, Address: 0x1026a80, Func Offset: 0x130
	// Line 570, Address: 0x1026a88, Func Offset: 0x138
	// Line 575, Address: 0x1026a9c, Func Offset: 0x14c
	// Func End, Address: 0x1026ab0, Func Offset: 0x160
}

// 
// Start address: 0x1026ab0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	short wk;
	// Line 702, Address: 0x1026ab0, Func Offset: 0
	// Line 706, Address: 0x1026ac8, Func Offset: 0x18
	// Line 707, Address: 0x1026ae8, Func Offset: 0x38
	// Line 708, Address: 0x1026b00, Func Offset: 0x50
	// Line 710, Address: 0x1026b34, Func Offset: 0x84
	// Line 711, Address: 0x1026b40, Func Offset: 0x90
	// Line 712, Address: 0x1026b54, Func Offset: 0xa4
	// Line 713, Address: 0x1026b60, Func Offset: 0xb0
	// Line 714, Address: 0x1026b84, Func Offset: 0xd4
	// Line 716, Address: 0x1026b8c, Func Offset: 0xdc
	// Line 721, Address: 0x1026bb4, Func Offset: 0x104
	// Func End, Address: 0x1026bcc, Func Offset: 0x11c
}

// 
// Start address: 0x1026bd0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	short wk;
	// Line 739, Address: 0x1026bd0, Func Offset: 0
	// Line 743, Address: 0x1026be8, Func Offset: 0x18
	// Line 744, Address: 0x1026c08, Func Offset: 0x38
	// Line 745, Address: 0x1026c20, Func Offset: 0x50
	// Line 747, Address: 0x1026c54, Func Offset: 0x84
	// Line 748, Address: 0x1026c60, Func Offset: 0x90
	// Line 749, Address: 0x1026c74, Func Offset: 0xa4
	// Line 750, Address: 0x1026c80, Func Offset: 0xb0
	// Line 751, Address: 0x1026ca4, Func Offset: 0xd4
	// Line 753, Address: 0x1026cac, Func Offset: 0xdc
	// Line 758, Address: 0x1026cd4, Func Offset: 0x104
	// Func End, Address: 0x1026cec, Func Offset: 0x11c
}

// 
// Start address: 0x1026cf0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 773, Address: 0x1026cf0, Func Offset: 0
	// Line 777, Address: 0x1026d00, Func Offset: 0x10
	// Line 779, Address: 0x1026d10, Func Offset: 0x20
	// Line 780, Address: 0x1026d18, Func Offset: 0x28
	// Line 781, Address: 0x1026d4c, Func Offset: 0x5c
	// Line 782, Address: 0x1026d54, Func Offset: 0x64
	// Line 783, Address: 0x1026d68, Func Offset: 0x78
	// Line 784, Address: 0x1026d8c, Func Offset: 0x9c
	// Line 785, Address: 0x1026da0, Func Offset: 0xb0
	// Line 786, Address: 0x1026da8, Func Offset: 0xb8
	// Line 791, Address: 0x1026dbc, Func Offset: 0xcc
	// Func End, Address: 0x1026dd4, Func Offset: 0xe4
}

// 
// Start address: 0x1026de0
void scrh_move()
{
	short xwk;
	// Line 808, Address: 0x1026de0, Func Offset: 0
	// Line 811, Address: 0x1026de8, Func Offset: 0x8
	// Line 812, Address: 0x1026e30, Func Offset: 0x50
	// Line 814, Address: 0x1026e40, Func Offset: 0x60
	// Line 815, Address: 0x1026e48, Func Offset: 0x68
	// Line 816, Address: 0x1026e50, Func Offset: 0x70
	// Line 818, Address: 0x1026e60, Func Offset: 0x80
	// Line 819, Address: 0x1026e74, Func Offset: 0x94
	// Line 823, Address: 0x1026e80, Func Offset: 0xa0
	// Line 824, Address: 0x1026e94, Func Offset: 0xb4
	// Line 825, Address: 0x1026eb8, Func Offset: 0xd8
	// Line 827, Address: 0x1026ec8, Func Offset: 0xe8
	// Line 829, Address: 0x1026ed0, Func Offset: 0xf0
	// Line 830, Address: 0x1026ee4, Func Offset: 0x104
	// Line 834, Address: 0x1026ef0, Func Offset: 0x110
	// Line 835, Address: 0x1026f04, Func Offset: 0x124
	// Line 836, Address: 0x1026f28, Func Offset: 0x148
	// Line 841, Address: 0x1026f38, Func Offset: 0x158
	// Line 842, Address: 0x1026f68, Func Offset: 0x188
	// Line 843, Address: 0x1026f70, Func Offset: 0x190
	// Func End, Address: 0x1026f80, Func Offset: 0x1a0
}

// 
// Start address: 0x1026f80
void scroll_v()
{
	short ywk;
	// Line 858, Address: 0x1026f80, Func Offset: 0
	// Line 861, Address: 0x1026f8c, Func Offset: 0xc
	// Line 862, Address: 0x1026fc0, Func Offset: 0x40
	// Line 863, Address: 0x1026fd8, Func Offset: 0x58
	// Line 867, Address: 0x1026fe4, Func Offset: 0x64
	// Line 868, Address: 0x1026ffc, Func Offset: 0x7c
	// Line 869, Address: 0x1027008, Func Offset: 0x88
	// Line 870, Address: 0x102702c, Func Offset: 0xac
	// Line 871, Address: 0x1027040, Func Offset: 0xc0
	// Line 872, Address: 0x102704c, Func Offset: 0xcc
	// Line 873, Address: 0x1027054, Func Offset: 0xd4
	// Line 874, Address: 0x102707c, Func Offset: 0xfc
	// Line 875, Address: 0x10270a4, Func Offset: 0x124
	// Line 876, Address: 0x10270b0, Func Offset: 0x130
	// Line 878, Address: 0x10270b8, Func Offset: 0x138
	// Line 879, Address: 0x10270e0, Func Offset: 0x160
	// Line 880, Address: 0x10270f0, Func Offset: 0x170
	// Line 881, Address: 0x10270f8, Func Offset: 0x178
	// Line 886, Address: 0x1027100, Func Offset: 0x180
	// Line 887, Address: 0x102712c, Func Offset: 0x1ac
	// Line 888, Address: 0x1027138, Func Offset: 0x1b8
	// Line 889, Address: 0x1027140, Func Offset: 0x1c0
	// Line 890, Address: 0x1027150, Func Offset: 0x1d0
	// Line 891, Address: 0x1027158, Func Offset: 0x1d8
	// Line 896, Address: 0x1027160, Func Offset: 0x1e0
	// Line 897, Address: 0x1027168, Func Offset: 0x1e8
	// Func End, Address: 0x102717c, Func Offset: 0x1fc
}

// 
// Start address: 0x1027180
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 911, Address: 0x1027180, Func Offset: 0
	// Line 914, Address: 0x1027190, Func Offset: 0x10
	// Line 915, Address: 0x10271ac, Func Offset: 0x2c
	// Line 916, Address: 0x10271c4, Func Offset: 0x44
	// Line 917, Address: 0x10271e8, Func Offset: 0x68
	// Line 918, Address: 0x10271f0, Func Offset: 0x70
	// Line 922, Address: 0x1027200, Func Offset: 0x80
	// Line 923, Address: 0x1027214, Func Offset: 0x94
	// Line 924, Address: 0x1027220, Func Offset: 0xa0
	// Line 927, Address: 0x1027228, Func Offset: 0xa8
	// Line 928, Address: 0x1027240, Func Offset: 0xc0
	// Line 929, Address: 0x102724c, Func Offset: 0xcc
	// Line 930, Address: 0x102726c, Func Offset: 0xec
	// Line 931, Address: 0x1027278, Func Offset: 0xf8
	// Line 932, Address: 0x1027280, Func Offset: 0x100
	// Line 934, Address: 0x102728c, Func Offset: 0x10c
	// Line 936, Address: 0x1027294, Func Offset: 0x114
	// Line 937, Address: 0x10272ac, Func Offset: 0x12c
	// Line 938, Address: 0x10272b8, Func Offset: 0x138
	// Line 939, Address: 0x10272d8, Func Offset: 0x158
	// Line 940, Address: 0x10272e4, Func Offset: 0x164
	// Line 941, Address: 0x10272ec, Func Offset: 0x16c
	// Line 944, Address: 0x10272f8, Func Offset: 0x178
	// Func End, Address: 0x102730c, Func Offset: 0x18c
}

// 
// Start address: 0x1027310
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 958, Address: 0x1027310, Func Offset: 0
	// Line 961, Address: 0x1027320, Func Offset: 0x10
	// Line 963, Address: 0x102732c, Func Offset: 0x1c
	// Line 964, Address: 0x1027344, Func Offset: 0x34
	// Line 965, Address: 0x1027350, Func Offset: 0x40
	// Line 966, Address: 0x1027370, Func Offset: 0x60
	// Line 967, Address: 0x102737c, Func Offset: 0x6c
	// Line 968, Address: 0x1027384, Func Offset: 0x74
	// Line 970, Address: 0x1027390, Func Offset: 0x80
	// Func End, Address: 0x10273a4, Func Offset: 0x94
}

// 
// Start address: 0x10273b0
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 985, Address: 0x10273b0, Func Offset: 0
	// Line 988, Address: 0x10273bc, Func Offset: 0xc
	// Line 989, Address: 0x10273c0, Func Offset: 0x10
	// Line 990, Address: 0x10273ec, Func Offset: 0x3c
	// Line 991, Address: 0x1027400, Func Offset: 0x50
	// Line 992, Address: 0x102740c, Func Offset: 0x5c
	// Line 993, Address: 0x1027414, Func Offset: 0x64
	// Line 995, Address: 0x1027420, Func Offset: 0x70
	// Func End, Address: 0x1027430, Func Offset: 0x80
}

// 
// Start address: 0x1027430
void sv_move_sub2()
{
	// Line 999, Address: 0x1027430, Func Offset: 0
	// Line 1000, Address: 0x1027438, Func Offset: 0x8
	// Line 1002, Address: 0x1027440, Func Offset: 0x10
	// Line 1003, Address: 0x102744c, Func Offset: 0x1c
	// Func End, Address: 0x102745c, Func Offset: 0x2c
}

// 
// Start address: 0x1027460
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	short wk;
	// Line 1017, Address: 0x1027460, Func Offset: 0
	// Line 1020, Address: 0x1027470, Func Offset: 0x10
	// Line 1021, Address: 0x1027494, Func Offset: 0x34
	// Line 1022, Address: 0x10274ac, Func Offset: 0x4c
	// Line 1023, Address: 0x10274b8, Func Offset: 0x58
	// Func End, Address: 0x10274cc, Func Offset: 0x6c
}

// 
// Start address: 0x10274d0
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1038, Address: 0x10274d0, Func Offset: 0
	// Line 1039, Address: 0x10274dc, Func Offset: 0xc
	// Line 1040, Address: 0x1027504, Func Offset: 0x34
	// Line 1042, Address: 0x102751c, Func Offset: 0x4c
	// Line 1043, Address: 0x1027528, Func Offset: 0x58
	// Line 1044, Address: 0x1027530, Func Offset: 0x60
	// Line 1045, Address: 0x102753c, Func Offset: 0x6c
	// Line 1046, Address: 0x1027550, Func Offset: 0x80
	// Line 1047, Address: 0x1027564, Func Offset: 0x94
	// Line 1051, Address: 0x1027578, Func Offset: 0xa8
	// Line 1052, Address: 0x1027584, Func Offset: 0xb4
	// Func End, Address: 0x1027594, Func Offset: 0xc4
}

// 
// Start address: 0x10275a0
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	short wk;
	// Line 1066, Address: 0x10275a0, Func Offset: 0
	// Line 1069, Address: 0x10275b0, Func Offset: 0x10
	// Line 1070, Address: 0x10275d0, Func Offset: 0x30
	// Line 1071, Address: 0x10275e8, Func Offset: 0x48
	// Line 1072, Address: 0x10275f4, Func Offset: 0x54
	// Func End, Address: 0x1027608, Func Offset: 0x68
}

// 
// Start address: 0x1027610
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1087, Address: 0x1027610, Func Offset: 0
	// Line 1088, Address: 0x102761c, Func Offset: 0xc
	// Line 1089, Address: 0x1027644, Func Offset: 0x34
	// Line 1091, Address: 0x102765c, Func Offset: 0x4c
	// Line 1092, Address: 0x1027668, Func Offset: 0x58
	// Line 1093, Address: 0x1027670, Func Offset: 0x60
	// Line 1094, Address: 0x102767c, Func Offset: 0x6c
	// Line 1095, Address: 0x1027690, Func Offset: 0x80
	// Line 1096, Address: 0x10276a4, Func Offset: 0x94
	// Line 1100, Address: 0x10276b8, Func Offset: 0xa8
	// Line 1101, Address: 0x10276c4, Func Offset: 0xb4
	// Func End, Address: 0x10276d4, Func Offset: 0xc4
}

// 
// Start address: 0x10276e0
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon6 spdwk;
	short wk;
	// Line 1118, Address: 0x10276e0, Func Offset: 0
	// Line 1122, Address: 0x10276f4, Func Offset: 0x14
	// Line 1123, Address: 0x1027704, Func Offset: 0x24
	// Line 1124, Address: 0x102771c, Func Offset: 0x3c
	// Line 1125, Address: 0x1027730, Func Offset: 0x50
	// Line 1126, Address: 0x1027748, Func Offset: 0x68
	// Line 1128, Address: 0x1027754, Func Offset: 0x74
	// Line 1130, Address: 0x1027760, Func Offset: 0x80
	// Line 1131, Address: 0x102779c, Func Offset: 0xbc
	// Line 1132, Address: 0x10277a4, Func Offset: 0xc4
	// Line 1133, Address: 0x10277b8, Func Offset: 0xd8
	// Line 1134, Address: 0x10277e4, Func Offset: 0x104
	// Line 1135, Address: 0x10277f4, Func Offset: 0x114
	// Line 1136, Address: 0x1027808, Func Offset: 0x128
	// Line 1137, Address: 0x1027810, Func Offset: 0x130
	// Line 1142, Address: 0x1027824, Func Offset: 0x144
	// Func End, Address: 0x102783c, Func Offset: 0x15c
}

// 
// Start address: 0x1027840
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
	// Line 1160, Address: 0x1027840, Func Offset: 0
	// Line 1169, Address: 0x1027860, Func Offset: 0x20
	// Line 1170, Address: 0x1027864, Func Offset: 0x24
	// Line 1171, Address: 0x1027870, Func Offset: 0x30
	// Line 1172, Address: 0x102787c, Func Offset: 0x3c
	// Line 1173, Address: 0x1027884, Func Offset: 0x44
	// Line 1174, Address: 0x102788c, Func Offset: 0x4c
	// Line 1176, Address: 0x10278a0, Func Offset: 0x60
	// Line 1177, Address: 0x10278a4, Func Offset: 0x64
	// Line 1178, Address: 0x10278b0, Func Offset: 0x70
	// Line 1179, Address: 0x10278bc, Func Offset: 0x7c
	// Line 1180, Address: 0x10278c4, Func Offset: 0x84
	// Line 1182, Address: 0x10278cc, Func Offset: 0x8c
	// Line 1183, Address: 0x10278d8, Func Offset: 0x98
	// Line 1184, Address: 0x10278ec, Func Offset: 0xac
	// Line 1186, Address: 0x10278f8, Func Offset: 0xb8
	// Line 1187, Address: 0x1027900, Func Offset: 0xc0
	// Line 1189, Address: 0x1027908, Func Offset: 0xc8
	// Line 1191, Address: 0x1027928, Func Offset: 0xe8
	// Line 1197, Address: 0x1027954, Func Offset: 0x114
	// Line 1198, Address: 0x1027968, Func Offset: 0x128
	// Line 1200, Address: 0x1027974, Func Offset: 0x134
	// Line 1201, Address: 0x102797c, Func Offset: 0x13c
	// Line 1202, Address: 0x1027984, Func Offset: 0x144
	// Line 1204, Address: 0x10279a4, Func Offset: 0x164
	// Line 1210, Address: 0x10279d0, Func Offset: 0x190
	// Line 1211, Address: 0x10279e4, Func Offset: 0x1a4
	// Line 1213, Address: 0x10279f0, Func Offset: 0x1b0
	// Line 1214, Address: 0x10279f8, Func Offset: 0x1b8
	// Line 1215, Address: 0x1027a00, Func Offset: 0x1c0
	// Line 1217, Address: 0x1027a20, Func Offset: 0x1e0
	// Line 1223, Address: 0x1027a4c, Func Offset: 0x20c
	// Line 1224, Address: 0x1027a60, Func Offset: 0x220
	// Line 1226, Address: 0x1027a6c, Func Offset: 0x22c
	// Line 1227, Address: 0x1027a74, Func Offset: 0x234
	// Line 1228, Address: 0x1027a7c, Func Offset: 0x23c
	// Line 1230, Address: 0x1027a9c, Func Offset: 0x25c
	// Line 1239, Address: 0x1027ac8, Func Offset: 0x288
	// Func End, Address: 0x1027af0, Func Offset: 0x2b0
}

// 
// Start address: 0x1027af0
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon0 lD4;
	int WrtTblCnt;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	short wD0;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1256, Address: 0x1027af0, Func Offset: 0
	// Line 1268, Address: 0x1027b1c, Func Offset: 0x2c
	// Line 1270, Address: 0x1027b24, Func Offset: 0x34
	// Line 1271, Address: 0x1027b3c, Func Offset: 0x4c
	// Line 1272, Address: 0x1027b50, Func Offset: 0x60
	// Line 1274, Address: 0x1027b58, Func Offset: 0x68
	// Line 1276, Address: 0x1027b6c, Func Offset: 0x7c
	// Line 1277, Address: 0x1027b84, Func Offset: 0x94
	// Line 1278, Address: 0x1027b98, Func Offset: 0xa8
	// Line 1279, Address: 0x1027ba0, Func Offset: 0xb0
	// Line 1281, Address: 0x1027ba8, Func Offset: 0xb8
	// Line 1282, Address: 0x1027bbc, Func Offset: 0xcc
	// Line 1287, Address: 0x1027bc4, Func Offset: 0xd4
	// Line 1288, Address: 0x1027c1c, Func Offset: 0x12c
	// Line 1294, Address: 0x1027c44, Func Offset: 0x154
	// Line 1295, Address: 0x1027c68, Func Offset: 0x178
	// Line 1296, Address: 0x1027c90, Func Offset: 0x1a0
	// Line 1297, Address: 0x1027ca0, Func Offset: 0x1b0
	// Line 1298, Address: 0x1027ca8, Func Offset: 0x1b8
	// Line 1300, Address: 0x1027cc8, Func Offset: 0x1d8
	// Line 1304, Address: 0x1027cf4, Func Offset: 0x204
	// Line 1307, Address: 0x1027cfc, Func Offset: 0x20c
	// Line 1308, Address: 0x1027d00, Func Offset: 0x210
	// Line 1312, Address: 0x1027d20, Func Offset: 0x230
	// Line 1319, Address: 0x1027d4c, Func Offset: 0x25c
	// Line 1326, Address: 0x1027d60, Func Offset: 0x270
	// Line 1327, Address: 0x1027d68, Func Offset: 0x278
	// Line 1328, Address: 0x1027d70, Func Offset: 0x280
	// Line 1329, Address: 0x1027d88, Func Offset: 0x298
	// Line 1330, Address: 0x1027da8, Func Offset: 0x2b8
	// Line 1334, Address: 0x1027db0, Func Offset: 0x2c0
	// Line 1336, Address: 0x1027de0, Func Offset: 0x2f0
	// Line 1337, Address: 0x1027dec, Func Offset: 0x2fc
	// Line 1341, Address: 0x1027dfc, Func Offset: 0x30c
	// Line 1342, Address: 0x1027e08, Func Offset: 0x318
	// Line 1343, Address: 0x1027e2c, Func Offset: 0x33c
	// Line 1344, Address: 0x1027e5c, Func Offset: 0x36c
	// Line 1345, Address: 0x1027e80, Func Offset: 0x390
	// Line 1347, Address: 0x1027ea8, Func Offset: 0x3b8
	// Line 1350, Address: 0x1027ecc, Func Offset: 0x3dc
	// Line 1352, Address: 0x1027eec, Func Offset: 0x3fc
	// Line 1354, Address: 0x1027f00, Func Offset: 0x410
	// Line 1355, Address: 0x1027f0c, Func Offset: 0x41c
	// Line 1356, Address: 0x1027f1c, Func Offset: 0x42c
	// Line 1358, Address: 0x1027f24, Func Offset: 0x434
	// Func End, Address: 0x1027f4c, Func Offset: 0x45c
}

// 
// Start address: 0x1027f50
void scrollwrtc()
{
	// Line 1364, Address: 0x1027f50, Func Offset: 0
	// Func End, Address: 0x1027f58, Func Offset: 0x8
}

// 
// Start address: 0x1027f60
void scrollwrtz()
{
	// Line 1369, Address: 0x1027f60, Func Offset: 0
	// Func End, Address: 0x1027f68, Func Offset: 0x8
}

// 
// Start address: 0x1027f70
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1387, Address: 0x1027f70, Func Offset: 0
	// Line 1400, Address: 0x1027f98, Func Offset: 0x28
	// Line 1403, Address: 0x1027fb8, Func Offset: 0x48
	// Line 1404, Address: 0x1027fcc, Func Offset: 0x5c
	// Line 1405, Address: 0x1027fe0, Func Offset: 0x70
	// Line 1406, Address: 0x1027ff4, Func Offset: 0x84
	// Line 1408, Address: 0x1028008, Func Offset: 0x98
	// Line 1409, Address: 0x1028014, Func Offset: 0xa4
	// Line 1410, Address: 0x1028028, Func Offset: 0xb8
	// Func End, Address: 0x1028038, Func Offset: 0xc8
}

// 
// Start address: 0x1028040
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1414, Address: 0x1028040, Func Offset: 0
	// Line 1418, Address: 0x1028068, Func Offset: 0x28
	// Line 1421, Address: 0x1028088, Func Offset: 0x48
	// Line 1422, Address: 0x102809c, Func Offset: 0x5c
	// Line 1423, Address: 0x10280b0, Func Offset: 0x70
	// Line 1424, Address: 0x10280c4, Func Offset: 0x84
	// Line 1426, Address: 0x10280d8, Func Offset: 0x98
	// Line 1427, Address: 0x10280e4, Func Offset: 0xa4
	// Line 1428, Address: 0x10280f8, Func Offset: 0xb8
	// Func End, Address: 0x1028108, Func Offset: 0xc8
}

// 
// Start address: 0x1028110
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1448, Address: 0x1028110, Func Offset: 0
	// Line 1452, Address: 0x1028138, Func Offset: 0x28
	// Line 1455, Address: 0x1028158, Func Offset: 0x48
	// Line 1456, Address: 0x102816c, Func Offset: 0x5c
	// Line 1457, Address: 0x102817c, Func Offset: 0x6c
	// Line 1458, Address: 0x1028190, Func Offset: 0x80
	// Line 1460, Address: 0x10281a0, Func Offset: 0x90
	// Line 1461, Address: 0x10281ac, Func Offset: 0x9c
	// Line 1462, Address: 0x10281c0, Func Offset: 0xb0
	// Func End, Address: 0x10281d0, Func Offset: 0xc0
}

// 
// Start address: 0x10281d0
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
	// Line 1481, Address: 0x10281d0, Func Offset: 0
	// Line 1487, Address: 0x1028204, Func Offset: 0x34
	// Line 1489, Address: 0x1028214, Func Offset: 0x44
	// Line 1490, Address: 0x1028218, Func Offset: 0x48
	// Line 1491, Address: 0x1028220, Func Offset: 0x50
	// Line 1493, Address: 0x1028230, Func Offset: 0x60
	// Line 1495, Address: 0x1028234, Func Offset: 0x64
	// Line 1496, Address: 0x102823c, Func Offset: 0x6c
	// Line 1499, Address: 0x1028244, Func Offset: 0x74
	// Line 1500, Address: 0x102824c, Func Offset: 0x7c
	// Line 1501, Address: 0x1028258, Func Offset: 0x88
	// Line 1503, Address: 0x1028264, Func Offset: 0x94
	// Line 1504, Address: 0x102826c, Func Offset: 0x9c
	// Line 1505, Address: 0x1028274, Func Offset: 0xa4
	// Line 1506, Address: 0x102827c, Func Offset: 0xac
	// Line 1508, Address: 0x1028288, Func Offset: 0xb8
	// Line 1509, Address: 0x1028290, Func Offset: 0xc0
	// Line 1510, Address: 0x1028298, Func Offset: 0xc8
	// Line 1511, Address: 0x10282a0, Func Offset: 0xd0
	// Line 1513, Address: 0x10282ac, Func Offset: 0xdc
	// Line 1514, Address: 0x10282b4, Func Offset: 0xe4
	// Line 1515, Address: 0x10282bc, Func Offset: 0xec
	// Line 1518, Address: 0x10282c4, Func Offset: 0xf4
	// Line 1519, Address: 0x10282cc, Func Offset: 0xfc
	// Line 1522, Address: 0x10282d4, Func Offset: 0x104
	// Line 1523, Address: 0x1028318, Func Offset: 0x148
	// Line 1524, Address: 0x102835c, Func Offset: 0x18c
	// Line 1525, Address: 0x10283a0, Func Offset: 0x1d0
	// Line 1527, Address: 0x10283e4, Func Offset: 0x214
	// Func End, Address: 0x1028414, Func Offset: 0x244
}

// 
// Start address: 0x1028420
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1545, Address: 0x1028420, Func Offset: 0
	// Line 1546, Address: 0x1028440, Func Offset: 0x20
	// Line 1547, Address: 0x1028460, Func Offset: 0x40
	// Func End, Address: 0x1028470, Func Offset: 0x50
}

// 
// Start address: 0x1028470
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1549, Address: 0x1028470, Func Offset: 0
	// Line 1550, Address: 0x1028490, Func Offset: 0x20
	// Line 1551, Address: 0x1028494, Func Offset: 0x24
	// Line 1552, Address: 0x10284b4, Func Offset: 0x44
	// Func End, Address: 0x10284c4, Func Offset: 0x54
}

// 
// Start address: 0x10284d0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1559, Address: 0x10284d0, Func Offset: 0
	// Line 1565, Address: 0x1028500, Func Offset: 0x30
	// Line 1566, Address: 0x1028510, Func Offset: 0x40
	// Line 1572, Address: 0x1028520, Func Offset: 0x50
	// Line 1573, Address: 0x102853c, Func Offset: 0x6c
	// Line 1574, Address: 0x1028540, Func Offset: 0x70
	// Line 1575, Address: 0x102855c, Func Offset: 0x8c
	// Line 1576, Address: 0x1028560, Func Offset: 0x90
	// Line 1577, Address: 0x1028580, Func Offset: 0xb0
	// Line 1578, Address: 0x1028588, Func Offset: 0xb8
	// Line 1579, Address: 0x10285a8, Func Offset: 0xd8
	// Line 1580, Address: 0x10285b0, Func Offset: 0xe0
	// Line 1581, Address: 0x10285f8, Func Offset: 0x128
	// Line 1583, Address: 0x1028604, Func Offset: 0x134
	// Line 1585, Address: 0x1028620, Func Offset: 0x150
	// Line 1590, Address: 0x1028628, Func Offset: 0x158
	// Line 1591, Address: 0x1028634, Func Offset: 0x164
	// Line 1594, Address: 0x1028640, Func Offset: 0x170
	// Line 1595, Address: 0x1028648, Func Offset: 0x178
	// Line 1596, Address: 0x1028668, Func Offset: 0x198
	// Line 1597, Address: 0x1028684, Func Offset: 0x1b4
	// Line 1598, Address: 0x102868c, Func Offset: 0x1bc
	// Line 1599, Address: 0x10286ac, Func Offset: 0x1dc
	// Line 1601, Address: 0x10286c8, Func Offset: 0x1f8
	// Line 1602, Address: 0x10286d0, Func Offset: 0x200
	// Line 1603, Address: 0x10286d8, Func Offset: 0x208
	// Line 1604, Address: 0x10286e4, Func Offset: 0x214
	// Line 1605, Address: 0x10286fc, Func Offset: 0x22c
	// Line 1607, Address: 0x102870c, Func Offset: 0x23c
	// Line 1610, Address: 0x1028718, Func Offset: 0x248
	// Line 1611, Address: 0x1028720, Func Offset: 0x250
	// Line 1612, Address: 0x1028724, Func Offset: 0x254
	// Func End, Address: 0x1028744, Func Offset: 0x274
}

// 
// Start address: 0x1028750
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1632, Address: 0x1028750, Func Offset: 0
	// Line 1640, Address: 0x1028778, Func Offset: 0x28
	// Line 1641, Address: 0x10287dc, Func Offset: 0x8c
	// Line 1647, Address: 0x10287e4, Func Offset: 0x94
	// Line 1648, Address: 0x10287ec, Func Offset: 0x9c
	// Line 1649, Address: 0x102880c, Func Offset: 0xbc
	// Line 1650, Address: 0x1028828, Func Offset: 0xd8
	// Line 1651, Address: 0x1028830, Func Offset: 0xe0
	// Line 1652, Address: 0x1028850, Func Offset: 0x100
	// Line 1655, Address: 0x102886c, Func Offset: 0x11c
	// Line 1656, Address: 0x1028874, Func Offset: 0x124
	// Line 1657, Address: 0x102887c, Func Offset: 0x12c
	// Line 1658, Address: 0x1028888, Func Offset: 0x138
	// Line 1659, Address: 0x10288a0, Func Offset: 0x150
	// Line 1660, Address: 0x10288a8, Func Offset: 0x158
	// Line 1665, Address: 0x10288b8, Func Offset: 0x168
	// Line 1668, Address: 0x10288c4, Func Offset: 0x174
	// Line 1669, Address: 0x10288cc, Func Offset: 0x17c
	// Line 1670, Address: 0x10288d0, Func Offset: 0x180
	// Func End, Address: 0x10288ec, Func Offset: 0x19c
}

// 
// Start address: 0x10288f0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1684, Address: 0x10288f0, Func Offset: 0
	// Line 1691, Address: 0x102890c, Func Offset: 0x1c
	// Line 1692, Address: 0x1028910, Func Offset: 0x20
	// Line 1693, Address: 0x1028918, Func Offset: 0x28
	// Line 1694, Address: 0x102893c, Func Offset: 0x4c
	// Line 1695, Address: 0x1028948, Func Offset: 0x58
	// Line 1696, Address: 0x1028960, Func Offset: 0x70
	// Line 1697, Address: 0x1028974, Func Offset: 0x84
	// Line 1702, Address: 0x102898c, Func Offset: 0x9c
	// Func End, Address: 0x10289a4, Func Offset: 0xb4
}

// 
// Start address: 0x10289b0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1716, Address: 0x10289b0, Func Offset: 0
	// Line 1717, Address: 0x10289bc, Func Offset: 0xc
	// Line 1718, Address: 0x10289e8, Func Offset: 0x38
	// Line 1719, Address: 0x1028a34, Func Offset: 0x84
	// Line 1720, Address: 0x1028a60, Func Offset: 0xb0
	// Line 1722, Address: 0x1028aac, Func Offset: 0xfc
	// Line 1728, Address: 0x1028ab8, Func Offset: 0x108
	// Line 1729, Address: 0x1028abc, Func Offset: 0x10c
	// Func End, Address: 0x1028ac8, Func Offset: 0x118
}

// 
// Start address: 0x1028ad0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1746, Address: 0x1028ad0, Func Offset: 0
	// Line 1747, Address: 0x1028aec, Func Offset: 0x1c
	// Line 1749, Address: 0x1028b08, Func Offset: 0x38
	// Func End, Address: 0x1028b18, Func Offset: 0x48
}

// 
// Start address: 0x1028b20
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1751, Address: 0x1028b20, Func Offset: 0
	// Line 1752, Address: 0x1028b3c, Func Offset: 0x1c
	// Line 1753, Address: 0x1028b40, Func Offset: 0x20
	// Line 1755, Address: 0x1028b5c, Func Offset: 0x3c
	// Func End, Address: 0x1028b6c, Func Offset: 0x4c
}

// 
// Start address: 0x1028b70
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1757, Address: 0x1028b70, Func Offset: 0
	// Line 1758, Address: 0x1028b84, Func Offset: 0x14
	// Line 1760, Address: 0x1028ba0, Func Offset: 0x30
	// Func End, Address: 0x1028bb0, Func Offset: 0x40
}

// 
// Start address: 0x1028bb0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1762, Address: 0x1028bb0, Func Offset: 0
	// Line 1763, Address: 0x1028bcc, Func Offset: 0x1c
	// Line 1765, Address: 0x1028be8, Func Offset: 0x38
	// Func End, Address: 0x1028bf8, Func Offset: 0x48
}

// 
// Start address: 0x1028c00
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1767, Address: 0x1028c00, Func Offset: 0
	// Line 1768, Address: 0x1028c18, Func Offset: 0x18
	// Line 1769, Address: 0x1028c28, Func Offset: 0x28
	// Line 1770, Address: 0x1028c38, Func Offset: 0x38
	// Line 1771, Address: 0x1028c44, Func Offset: 0x44
	// Line 1773, Address: 0x1028c50, Func Offset: 0x50
	// Line 1774, Address: 0x1028c7c, Func Offset: 0x7c
	// Line 1777, Address: 0x1028ca8, Func Offset: 0xa8
	// Func End, Address: 0x1028cb4, Func Offset: 0xb4
}

// 
// Start address: 0x1028cc0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1793, Address: 0x1028cc0, Func Offset: 0
	// Line 1798, Address: 0x1028cd8, Func Offset: 0x18
	// Line 1799, Address: 0x1028ce4, Func Offset: 0x24
	// Line 1800, Address: 0x1028cf0, Func Offset: 0x30
	// Line 1801, Address: 0x1028cf8, Func Offset: 0x38
	// Line 1802, Address: 0x1028cfc, Func Offset: 0x3c
	// Line 1806, Address: 0x1028d14, Func Offset: 0x54
	// Line 1807, Address: 0x1028d1c, Func Offset: 0x5c
	// Line 1808, Address: 0x1028d20, Func Offset: 0x60
	// Line 1810, Address: 0x1028d30, Func Offset: 0x70
	// Func End, Address: 0x1028d50, Func Offset: 0x90
}

// 
// Start address: 0x1028d50
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1813, Address: 0x1028d50, Func Offset: 0
	// Line 1814, Address: 0x1028d68, Func Offset: 0x18
	// Line 1815, Address: 0x1028d88, Func Offset: 0x38
	// Func End, Address: 0x1028d98, Func Offset: 0x48
}

// 
// Start address: 0x1028da0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1820, Address: 0x1028da0, Func Offset: 0
	// Line 1824, Address: 0x1028dc0, Func Offset: 0x20
	// Line 1827, Address: 0x1028ddc, Func Offset: 0x3c
	// Line 1831, Address: 0x1028e04, Func Offset: 0x64
	// Line 1832, Address: 0x1028e10, Func Offset: 0x70
	// Line 1834, Address: 0x1028e38, Func Offset: 0x98
	// Func End, Address: 0x1028e48, Func Offset: 0xa8
}

// 
// Start address: 0x1028e50
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1840, Address: 0x1028e50, Func Offset: 0
	// Line 1843, Address: 0x1028e6c, Func Offset: 0x1c
	// Line 1844, Address: 0x1028e74, Func Offset: 0x24
	// Line 1847, Address: 0x1028e7c, Func Offset: 0x2c
	// Line 1849, Address: 0x1028ea0, Func Offset: 0x50
	// Line 1850, Address: 0x1028ec0, Func Offset: 0x70
	// Line 1851, Address: 0x1028ec8, Func Offset: 0x78
	// Line 1852, Address: 0x1028eec, Func Offset: 0x9c
	// Func End, Address: 0x1028f08, Func Offset: 0xb8
}

// 
// Start address: 0x1028f10
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1878, Address: 0x1028f10, Func Offset: 0
	// Line 1883, Address: 0x1028f38, Func Offset: 0x28
	// Line 1884, Address: 0x1028f48, Func Offset: 0x38
	// Line 1886, Address: 0x1028f64, Func Offset: 0x54
	// Line 1887, Address: 0x1028f88, Func Offset: 0x78
	// Line 1888, Address: 0x1028fb0, Func Offset: 0xa0
	// Line 1889, Address: 0x1028fbc, Func Offset: 0xac
	// Line 1890, Address: 0x1028fc4, Func Offset: 0xb4
	// Line 1893, Address: 0x1028fe0, Func Offset: 0xd0
	// Line 1897, Address: 0x1029008, Func Offset: 0xf8
	// Line 1900, Address: 0x1029010, Func Offset: 0x100
	// Line 1901, Address: 0x1029014, Func Offset: 0x104
	// Line 1905, Address: 0x1029030, Func Offset: 0x120
	// Line 1912, Address: 0x1029058, Func Offset: 0x148
	// Func End, Address: 0x1029074, Func Offset: 0x164
}

// 
// Start address: 0x1029080
void mapinit()
{
	// Line 1923, Address: 0x1029080, Func Offset: 0
	// Line 1925, Address: 0x1029088, Func Offset: 0x8
	// Line 1926, Address: 0x102909c, Func Offset: 0x1c
	// Line 1928, Address: 0x10290b0, Func Offset: 0x30
	// Line 1929, Address: 0x10290c8, Func Offset: 0x48
	// Line 1930, Address: 0x10290e8, Func Offset: 0x68
	// Func End, Address: 0x10290f8, Func Offset: 0x78
}

// 
// Start address: 0x1029100
void divdevset()
{
	// Line 1938, Address: 0x1029100, Func Offset: 0
	// Func End, Address: 0x1029108, Func Offset: 0x8
}

// 
// Start address: 0x1029110
void enecginit()
{
	// Line 1943, Address: 0x1029110, Func Offset: 0
	// Func End, Address: 0x1029118, Func Offset: 0x8
}

