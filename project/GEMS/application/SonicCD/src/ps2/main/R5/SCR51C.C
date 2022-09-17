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
typedef short type_26[9];

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
// Start address: 0x1023b10
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
	// Line 151, Address: 0x1023b10, Func Offset: 0
	// Line 152, Address: 0x1023b30, Func Offset: 0x20
	// Line 157, Address: 0x1023b5c, Func Offset: 0x4c
	// Line 163, Address: 0x1023b80, Func Offset: 0x70
	// Line 167, Address: 0x1023b90, Func Offset: 0x80
	// Line 168, Address: 0x1023b94, Func Offset: 0x84
	// Line 170, Address: 0x1023b98, Func Offset: 0x88
	// Line 171, Address: 0x1023ba0, Func Offset: 0x90
	// Line 174, Address: 0x1023bc4, Func Offset: 0xb4
	// Line 175, Address: 0x1023bc8, Func Offset: 0xb8
	// Line 178, Address: 0x1023bec, Func Offset: 0xdc
	// Line 183, Address: 0x1023c00, Func Offset: 0xf0
	// Line 186, Address: 0x1023c0c, Func Offset: 0xfc
	// Line 187, Address: 0x1023c10, Func Offset: 0x100
	// Line 188, Address: 0x1023c1c, Func Offset: 0x10c
	// Line 189, Address: 0x1023c20, Func Offset: 0x110
	// Line 190, Address: 0x1023c24, Func Offset: 0x114
	// Line 191, Address: 0x1023c2c, Func Offset: 0x11c
	// Line 192, Address: 0x1023c30, Func Offset: 0x120
	// Line 194, Address: 0x1023c34, Func Offset: 0x124
	// Line 195, Address: 0x1023c3c, Func Offset: 0x12c
	// Line 196, Address: 0x1023c5c, Func Offset: 0x14c
	// Line 198, Address: 0x1023c68, Func Offset: 0x158
	// Line 199, Address: 0x1023c88, Func Offset: 0x178
	// Line 201, Address: 0x1023ca8, Func Offset: 0x198
	// Line 202, Address: 0x1023ce0, Func Offset: 0x1d0
	// Line 203, Address: 0x1023cf8, Func Offset: 0x1e8
	// Line 204, Address: 0x1023d04, Func Offset: 0x1f4
	// Func End, Address: 0x1023d2c, Func Offset: 0x21c
}

// 
// Start address: 0x1023d30
_anon2* main_chk()
{
	// Line 218, Address: 0x1023d30, Func Offset: 0
	// Line 219, Address: 0x1023d44, Func Offset: 0x14
	// Line 221, Address: 0x1023d54, Func Offset: 0x24
	// Line 223, Address: 0x1023d5c, Func Offset: 0x2c
	// Func End, Address: 0x1023d64, Func Offset: 0x34
}

// 
// Start address: 0x1023d70
void scr_set()
{
	short* pScrTbl;
	// Line 261, Address: 0x1023d70, Func Offset: 0
	// Line 264, Address: 0x1023d7c, Func Offset: 0xc
	// Line 265, Address: 0x1023d90, Func Offset: 0x20
	// Line 266, Address: 0x1023da4, Func Offset: 0x34
	// Line 268, Address: 0x1023dac, Func Offset: 0x3c
	// Line 269, Address: 0x1023db4, Func Offset: 0x44
	// Line 270, Address: 0x1023dc0, Func Offset: 0x50
	// Line 271, Address: 0x1023dc4, Func Offset: 0x54
	// Line 272, Address: 0x1023dd8, Func Offset: 0x68
	// Line 273, Address: 0x1023ddc, Func Offset: 0x6c
	// Line 274, Address: 0x1023df0, Func Offset: 0x80
	// Line 275, Address: 0x1023df4, Func Offset: 0x84
	// Line 276, Address: 0x1023e08, Func Offset: 0x98
	// Line 277, Address: 0x1023e0c, Func Offset: 0x9c
	// Line 278, Address: 0x1023e20, Func Offset: 0xb0
	// Line 279, Address: 0x1023e40, Func Offset: 0xd0
	// Line 280, Address: 0x1023e44, Func Offset: 0xd4
	// Line 281, Address: 0x1023e50, Func Offset: 0xe0
	// Line 283, Address: 0x1023e5c, Func Offset: 0xec
	// Line 284, Address: 0x1023e68, Func Offset: 0xf8
	// Line 286, Address: 0x1023e74, Func Offset: 0x104
	// Line 287, Address: 0x1023e7c, Func Offset: 0x10c
	// Func End, Address: 0x1023e90, Func Offset: 0x120
}

// 
// Start address: 0x1023e90
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 326, Address: 0x1023e90, Func Offset: 0
	// Line 329, Address: 0x1023ea4, Func Offset: 0x14
	// Line 330, Address: 0x1023eb4, Func Offset: 0x24
	// Line 331, Address: 0x1023ebc, Func Offset: 0x2c
	// Line 333, Address: 0x1023ecc, Func Offset: 0x3c
	// Line 334, Address: 0x1023ee4, Func Offset: 0x54
	// Line 335, Address: 0x1023ef4, Func Offset: 0x64
	// Line 336, Address: 0x1023efc, Func Offset: 0x6c
	// Line 338, Address: 0x1023f00, Func Offset: 0x70
	// Line 340, Address: 0x1023f08, Func Offset: 0x78
	// Line 343, Address: 0x1023f10, Func Offset: 0x80
	// Line 344, Address: 0x1023f24, Func Offset: 0x94
	// Line 348, Address: 0x1023f38, Func Offset: 0xa8
	// Line 349, Address: 0x1023f4c, Func Offset: 0xbc
	// Line 350, Address: 0x1023f58, Func Offset: 0xc8
	// Line 351, Address: 0x1023f60, Func Offset: 0xd0
	// Line 355, Address: 0x1023f64, Func Offset: 0xd4
	// Line 356, Address: 0x1023f88, Func Offset: 0xf8
	// Line 360, Address: 0x1023f98, Func Offset: 0x108
	// Line 362, Address: 0x1023fa0, Func Offset: 0x110
	// Line 363, Address: 0x1023fb4, Func Offset: 0x124
	// Line 364, Address: 0x1023fc0, Func Offset: 0x130
	// Line 365, Address: 0x1023fc8, Func Offset: 0x138
	// Line 369, Address: 0x1023fcc, Func Offset: 0x13c
	// Line 370, Address: 0x1023ff0, Func Offset: 0x160
	// Line 374, Address: 0x1024000, Func Offset: 0x170
	// Line 376, Address: 0x1024008, Func Offset: 0x178
	// Line 379, Address: 0x1024018, Func Offset: 0x188
	// Line 380, Address: 0x1024028, Func Offset: 0x198
	// Line 381, Address: 0x1024038, Func Offset: 0x1a8
	// Line 382, Address: 0x1024048, Func Offset: 0x1b8
	// Line 383, Address: 0x1024058, Func Offset: 0x1c8
	// Func End, Address: 0x1024074, Func Offset: 0x1e4
}

// 
// Start address: 0x1024080
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 404, Address: 0x1024080, Func Offset: 0
	// Line 407, Address: 0x102408c, Func Offset: 0xc
	// Line 408, Address: 0x1024094, Func Offset: 0x14
	// Line 410, Address: 0x1024098, Func Offset: 0x18
	// Line 412, Address: 0x10240a4, Func Offset: 0x24
	// Line 413, Address: 0x10240b0, Func Offset: 0x30
	// Line 414, Address: 0x10240bc, Func Offset: 0x3c
	// Line 416, Address: 0x10240c8, Func Offset: 0x48
	// Line 417, Address: 0x10240e4, Func Offset: 0x64
	// Line 419, Address: 0x10240f0, Func Offset: 0x70
	// Line 420, Address: 0x102410c, Func Offset: 0x8c
	// Line 422, Address: 0x1024118, Func Offset: 0x98
	// Line 423, Address: 0x1024124, Func Offset: 0xa4
	// Line 424, Address: 0x1024148, Func Offset: 0xc8
	// Func End, Address: 0x1024154, Func Offset: 0xd4
}

// 
// Start address: 0x1024160
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
	// Line 440, Address: 0x1024160, Func Offset: 0
	// Line 452, Address: 0x102417c, Func Offset: 0x1c
	// Line 457, Address: 0x102418c, Func Offset: 0x2c
	// Line 459, Address: 0x10241b8, Func Offset: 0x58
	// Line 461, Address: 0x10241c0, Func Offset: 0x60
	// Line 462, Address: 0x10241c8, Func Offset: 0x68
	// Line 464, Address: 0x10241d0, Func Offset: 0x70
	// Line 465, Address: 0x10241e0, Func Offset: 0x80
	// Line 468, Address: 0x10241f0, Func Offset: 0x90
	// Line 469, Address: 0x102420c, Func Offset: 0xac
	// Line 471, Address: 0x102421c, Func Offset: 0xbc
	// Line 472, Address: 0x1024230, Func Offset: 0xd0
	// Line 474, Address: 0x1024240, Func Offset: 0xe0
	// Line 475, Address: 0x1024254, Func Offset: 0xf4
	// Line 477, Address: 0x1024264, Func Offset: 0x104
	// Line 480, Address: 0x1024278, Func Offset: 0x118
	// Line 482, Address: 0x1024288, Func Offset: 0x128
	// Line 483, Address: 0x10242b0, Func Offset: 0x150
	// Line 484, Address: 0x10242e8, Func Offset: 0x188
	// Line 486, Address: 0x10242fc, Func Offset: 0x19c
	// Line 488, Address: 0x1024308, Func Offset: 0x1a8
	// Line 490, Address: 0x1024320, Func Offset: 0x1c0
	// Line 491, Address: 0x1024340, Func Offset: 0x1e0
	// Line 493, Address: 0x102434c, Func Offset: 0x1ec
	// Line 494, Address: 0x1024360, Func Offset: 0x200
	// Line 495, Address: 0x1024370, Func Offset: 0x210
	// Line 496, Address: 0x102437c, Func Offset: 0x21c
	// Line 498, Address: 0x1024384, Func Offset: 0x224
	// Line 499, Address: 0x10243a4, Func Offset: 0x244
	// Line 501, Address: 0x10243b0, Func Offset: 0x250
	// Line 502, Address: 0x10243c4, Func Offset: 0x264
	// Line 504, Address: 0x10243d4, Func Offset: 0x274
	// Line 505, Address: 0x10243f4, Func Offset: 0x294
	// Line 507, Address: 0x1024400, Func Offset: 0x2a0
	// Line 508, Address: 0x1024414, Func Offset: 0x2b4
	// Line 510, Address: 0x1024424, Func Offset: 0x2c4
	// Line 511, Address: 0x1024444, Func Offset: 0x2e4
	// Line 513, Address: 0x1024450, Func Offset: 0x2f0
	// Line 514, Address: 0x1024464, Func Offset: 0x304
	// Line 516, Address: 0x1024474, Func Offset: 0x314
	// Line 517, Address: 0x1024494, Func Offset: 0x334
	// Line 519, Address: 0x10244a0, Func Offset: 0x340
	// Line 520, Address: 0x10244b4, Func Offset: 0x354
	// Line 524, Address: 0x10244c4, Func Offset: 0x364
	// Line 525, Address: 0x10244d0, Func Offset: 0x370
	// Line 526, Address: 0x1024500, Func Offset: 0x3a0
	// Line 527, Address: 0x1024530, Func Offset: 0x3d0
	// Line 528, Address: 0x102454c, Func Offset: 0x3ec
	// Func End, Address: 0x1024570, Func Offset: 0x410
}

// 
// Start address: 0x1024570
void z51cline(short** ppHscw)
{
	int lHwk;
	_anon1 ldHposwk;
	int i;
	int j;
	short wk;
	char z51cscrtbl[3];
	// Line 542, Address: 0x1024570, Func Offset: 0
	// Line 547, Address: 0x1024588, Func Offset: 0x18
	// Line 551, Address: 0x10245ac, Func Offset: 0x3c
	// Line 552, Address: 0x10245d0, Func Offset: 0x60
	// Line 553, Address: 0x10245ec, Func Offset: 0x7c
	// Line 555, Address: 0x10245f0, Func Offset: 0x80
	// Line 556, Address: 0x10245f4, Func Offset: 0x84
	// Line 558, Address: 0x1024600, Func Offset: 0x90
	// Line 560, Address: 0x102460c, Func Offset: 0x9c
	// Line 562, Address: 0x102462c, Func Offset: 0xbc
	// Line 564, Address: 0x1024644, Func Offset: 0xd4
	// Line 565, Address: 0x1024650, Func Offset: 0xe0
	// Line 566, Address: 0x1024664, Func Offset: 0xf4
	// Line 568, Address: 0x1024670, Func Offset: 0x100
	// Line 569, Address: 0x1024694, Func Offset: 0x124
	// Line 570, Address: 0x10246a0, Func Offset: 0x130
	// Line 571, Address: 0x10246c4, Func Offset: 0x154
	// Line 572, Address: 0x10246d0, Func Offset: 0x160
	// Func End, Address: 0x10246ec, Func Offset: 0x17c
}

// 
// Start address: 0x10246f0
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 593, Address: 0x10246f0, Func Offset: 0
	// Line 597, Address: 0x102470c, Func Offset: 0x1c
	// Line 599, Address: 0x1024710, Func Offset: 0x20
	// Line 600, Address: 0x102472c, Func Offset: 0x3c
	// Line 601, Address: 0x1024738, Func Offset: 0x48
	// Line 603, Address: 0x1024744, Func Offset: 0x54
	// Line 604, Address: 0x102474c, Func Offset: 0x5c
	// Line 605, Address: 0x102475c, Func Offset: 0x6c
	// Line 606, Address: 0x1024780, Func Offset: 0x90
	// Line 607, Address: 0x10247a0, Func Offset: 0xb0
	// Func End, Address: 0x10247b4, Func Offset: 0xc4
}

// 
// Start address: 0x10247c0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 713, Address: 0x10247c0, Func Offset: 0
	// Line 716, Address: 0x10247d0, Func Offset: 0x10
	// Line 717, Address: 0x10247e0, Func Offset: 0x20
	// Line 718, Address: 0x10247ec, Func Offset: 0x2c
	// Line 720, Address: 0x1024824, Func Offset: 0x64
	// Line 721, Address: 0x102482c, Func Offset: 0x6c
	// Line 722, Address: 0x1024840, Func Offset: 0x80
	// Line 723, Address: 0x1024860, Func Offset: 0xa0
	// Line 724, Address: 0x1024874, Func Offset: 0xb4
	// Line 726, Address: 0x102487c, Func Offset: 0xbc
	// Line 731, Address: 0x1024890, Func Offset: 0xd0
	// Func End, Address: 0x10248a4, Func Offset: 0xe4
}

// 
// Start address: 0x10248b0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 749, Address: 0x10248b0, Func Offset: 0
	// Line 753, Address: 0x10248c4, Func Offset: 0x14
	// Line 754, Address: 0x10248cc, Func Offset: 0x1c
	// Line 755, Address: 0x10248d4, Func Offset: 0x24
	// Line 756, Address: 0x10248dc, Func Offset: 0x2c
	// Line 757, Address: 0x10248e0, Func Offset: 0x30
	// Line 758, Address: 0x1024904, Func Offset: 0x54
	// Line 759, Address: 0x1024910, Func Offset: 0x60
	// Line 761, Address: 0x102492c, Func Offset: 0x7c
	// Line 762, Address: 0x1024938, Func Offset: 0x88
	// Line 763, Address: 0x102494c, Func Offset: 0x9c
	// Line 764, Address: 0x1024958, Func Offset: 0xa8
	// Line 765, Address: 0x102497c, Func Offset: 0xcc
	// Line 767, Address: 0x1024984, Func Offset: 0xd4
	// Line 772, Address: 0x10249ac, Func Offset: 0xfc
	// Func End, Address: 0x10249c0, Func Offset: 0x110
}

// 
// Start address: 0x10249c0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 790, Address: 0x10249c0, Func Offset: 0
	// Line 794, Address: 0x10249d4, Func Offset: 0x14
	// Line 795, Address: 0x10249dc, Func Offset: 0x1c
	// Line 796, Address: 0x10249e4, Func Offset: 0x24
	// Line 797, Address: 0x10249ec, Func Offset: 0x2c
	// Line 798, Address: 0x10249f0, Func Offset: 0x30
	// Line 799, Address: 0x1024a14, Func Offset: 0x54
	// Line 800, Address: 0x1024a20, Func Offset: 0x60
	// Line 802, Address: 0x1024a3c, Func Offset: 0x7c
	// Line 803, Address: 0x1024a48, Func Offset: 0x88
	// Line 804, Address: 0x1024a5c, Func Offset: 0x9c
	// Line 805, Address: 0x1024a68, Func Offset: 0xa8
	// Line 806, Address: 0x1024a8c, Func Offset: 0xcc
	// Line 808, Address: 0x1024a94, Func Offset: 0xd4
	// Line 813, Address: 0x1024abc, Func Offset: 0xfc
	// Func End, Address: 0x1024ad0, Func Offset: 0x110
}

// 
// Start address: 0x1024ad0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 831, Address: 0x1024ad0, Func Offset: 0
	// Line 835, Address: 0x1024ae4, Func Offset: 0x14
	// Line 836, Address: 0x1024aec, Func Offset: 0x1c
	// Line 837, Address: 0x1024af4, Func Offset: 0x24
	// Line 838, Address: 0x1024afc, Func Offset: 0x2c
	// Line 839, Address: 0x1024b00, Func Offset: 0x30
	// Line 840, Address: 0x1024b24, Func Offset: 0x54
	// Line 841, Address: 0x1024b30, Func Offset: 0x60
	// Line 843, Address: 0x1024b4c, Func Offset: 0x7c
	// Line 844, Address: 0x1024b58, Func Offset: 0x88
	// Line 845, Address: 0x1024b6c, Func Offset: 0x9c
	// Line 846, Address: 0x1024b78, Func Offset: 0xa8
	// Line 847, Address: 0x1024b9c, Func Offset: 0xcc
	// Line 849, Address: 0x1024ba4, Func Offset: 0xd4
	// Line 854, Address: 0x1024bcc, Func Offset: 0xfc
	// Func End, Address: 0x1024be0, Func Offset: 0x110
}

// 
// Start address: 0x1024be0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 869, Address: 0x1024be0, Func Offset: 0
	// Line 873, Address: 0x1024bf0, Func Offset: 0x10
	// Line 875, Address: 0x1024c00, Func Offset: 0x20
	// Line 876, Address: 0x1024c08, Func Offset: 0x28
	// Line 877, Address: 0x1024c3c, Func Offset: 0x5c
	// Line 878, Address: 0x1024c44, Func Offset: 0x64
	// Line 879, Address: 0x1024c58, Func Offset: 0x78
	// Line 880, Address: 0x1024c7c, Func Offset: 0x9c
	// Line 881, Address: 0x1024c90, Func Offset: 0xb0
	// Line 882, Address: 0x1024c98, Func Offset: 0xb8
	// Line 887, Address: 0x1024cac, Func Offset: 0xcc
	// Func End, Address: 0x1024cc4, Func Offset: 0xe4
}

// 
// Start address: 0x1024cd0
void scrh_move()
{
	short xwk;
	// Line 904, Address: 0x1024cd0, Func Offset: 0
	// Line 907, Address: 0x1024cd8, Func Offset: 0x8
	// Line 908, Address: 0x1024d20, Func Offset: 0x50
	// Line 910, Address: 0x1024d30, Func Offset: 0x60
	// Line 911, Address: 0x1024d38, Func Offset: 0x68
	// Line 912, Address: 0x1024d40, Func Offset: 0x70
	// Line 914, Address: 0x1024d50, Func Offset: 0x80
	// Line 915, Address: 0x1024d64, Func Offset: 0x94
	// Line 919, Address: 0x1024d70, Func Offset: 0xa0
	// Line 920, Address: 0x1024d84, Func Offset: 0xb4
	// Line 921, Address: 0x1024da8, Func Offset: 0xd8
	// Line 923, Address: 0x1024db8, Func Offset: 0xe8
	// Line 925, Address: 0x1024dc0, Func Offset: 0xf0
	// Line 926, Address: 0x1024dd4, Func Offset: 0x104
	// Line 930, Address: 0x1024de0, Func Offset: 0x110
	// Line 931, Address: 0x1024df4, Func Offset: 0x124
	// Line 932, Address: 0x1024e18, Func Offset: 0x148
	// Line 937, Address: 0x1024e28, Func Offset: 0x158
	// Line 938, Address: 0x1024e58, Func Offset: 0x188
	// Line 939, Address: 0x1024e60, Func Offset: 0x190
	// Func End, Address: 0x1024e70, Func Offset: 0x1a0
}

// 
// Start address: 0x1024e70
void scroll_v()
{
	short ywk;
	// Line 954, Address: 0x1024e70, Func Offset: 0
	// Line 957, Address: 0x1024e7c, Func Offset: 0xc
	// Line 958, Address: 0x1024eb0, Func Offset: 0x40
	// Line 959, Address: 0x1024ec8, Func Offset: 0x58
	// Line 963, Address: 0x1024ed4, Func Offset: 0x64
	// Line 964, Address: 0x1024eec, Func Offset: 0x7c
	// Line 965, Address: 0x1024ef8, Func Offset: 0x88
	// Line 966, Address: 0x1024f1c, Func Offset: 0xac
	// Line 967, Address: 0x1024f30, Func Offset: 0xc0
	// Line 968, Address: 0x1024f3c, Func Offset: 0xcc
	// Line 969, Address: 0x1024f44, Func Offset: 0xd4
	// Line 970, Address: 0x1024f6c, Func Offset: 0xfc
	// Line 971, Address: 0x1024f94, Func Offset: 0x124
	// Line 972, Address: 0x1024fa0, Func Offset: 0x130
	// Line 974, Address: 0x1024fa8, Func Offset: 0x138
	// Line 975, Address: 0x1024fd0, Func Offset: 0x160
	// Line 976, Address: 0x1024fe0, Func Offset: 0x170
	// Line 977, Address: 0x1024fe8, Func Offset: 0x178
	// Line 982, Address: 0x1024ff0, Func Offset: 0x180
	// Line 983, Address: 0x102501c, Func Offset: 0x1ac
	// Line 984, Address: 0x1025028, Func Offset: 0x1b8
	// Line 985, Address: 0x1025030, Func Offset: 0x1c0
	// Line 986, Address: 0x1025040, Func Offset: 0x1d0
	// Line 987, Address: 0x1025048, Func Offset: 0x1d8
	// Line 992, Address: 0x1025050, Func Offset: 0x1e0
	// Line 993, Address: 0x1025058, Func Offset: 0x1e8
	// Func End, Address: 0x102506c, Func Offset: 0x1fc
}

// 
// Start address: 0x1025070
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1007, Address: 0x1025070, Func Offset: 0
	// Line 1010, Address: 0x1025080, Func Offset: 0x10
	// Line 1011, Address: 0x102509c, Func Offset: 0x2c
	// Line 1012, Address: 0x10250b4, Func Offset: 0x44
	// Line 1013, Address: 0x10250d8, Func Offset: 0x68
	// Line 1014, Address: 0x10250e0, Func Offset: 0x70
	// Line 1018, Address: 0x10250f0, Func Offset: 0x80
	// Line 1019, Address: 0x1025104, Func Offset: 0x94
	// Line 1020, Address: 0x1025110, Func Offset: 0xa0
	// Line 1023, Address: 0x1025118, Func Offset: 0xa8
	// Line 1024, Address: 0x1025130, Func Offset: 0xc0
	// Line 1025, Address: 0x102513c, Func Offset: 0xcc
	// Line 1026, Address: 0x102515c, Func Offset: 0xec
	// Line 1027, Address: 0x1025168, Func Offset: 0xf8
	// Line 1028, Address: 0x1025170, Func Offset: 0x100
	// Line 1030, Address: 0x102517c, Func Offset: 0x10c
	// Line 1032, Address: 0x1025184, Func Offset: 0x114
	// Line 1033, Address: 0x102519c, Func Offset: 0x12c
	// Line 1034, Address: 0x10251a8, Func Offset: 0x138
	// Line 1035, Address: 0x10251c8, Func Offset: 0x158
	// Line 1036, Address: 0x10251d4, Func Offset: 0x164
	// Line 1037, Address: 0x10251dc, Func Offset: 0x16c
	// Line 1040, Address: 0x10251e8, Func Offset: 0x178
	// Func End, Address: 0x10251fc, Func Offset: 0x18c
}

// 
// Start address: 0x1025200
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1054, Address: 0x1025200, Func Offset: 0
	// Line 1057, Address: 0x1025210, Func Offset: 0x10
	// Line 1059, Address: 0x102521c, Func Offset: 0x1c
	// Line 1060, Address: 0x1025234, Func Offset: 0x34
	// Line 1061, Address: 0x1025240, Func Offset: 0x40
	// Line 1062, Address: 0x1025260, Func Offset: 0x60
	// Line 1063, Address: 0x102526c, Func Offset: 0x6c
	// Line 1064, Address: 0x1025274, Func Offset: 0x74
	// Line 1066, Address: 0x1025280, Func Offset: 0x80
	// Func End, Address: 0x1025294, Func Offset: 0x94
}

// 
// Start address: 0x10252a0
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1081, Address: 0x10252a0, Func Offset: 0
	// Line 1084, Address: 0x10252ac, Func Offset: 0xc
	// Line 1085, Address: 0x10252b0, Func Offset: 0x10
	// Line 1086, Address: 0x10252dc, Func Offset: 0x3c
	// Line 1087, Address: 0x10252f0, Func Offset: 0x50
	// Line 1088, Address: 0x10252fc, Func Offset: 0x5c
	// Line 1089, Address: 0x1025304, Func Offset: 0x64
	// Line 1091, Address: 0x1025310, Func Offset: 0x70
	// Func End, Address: 0x1025320, Func Offset: 0x80
}

// 
// Start address: 0x1025320
void sv_move_sub2()
{
	// Line 1095, Address: 0x1025320, Func Offset: 0
	// Line 1096, Address: 0x1025328, Func Offset: 0x8
	// Line 1098, Address: 0x1025330, Func Offset: 0x10
	// Line 1099, Address: 0x102533c, Func Offset: 0x1c
	// Func End, Address: 0x102534c, Func Offset: 0x2c
}

// 
// Start address: 0x1025350
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1113, Address: 0x1025350, Func Offset: 0
	// Line 1116, Address: 0x102535c, Func Offset: 0xc
	// Line 1117, Address: 0x1025380, Func Offset: 0x30
	// Line 1118, Address: 0x10253a4, Func Offset: 0x54
	// Line 1119, Address: 0x10253b0, Func Offset: 0x60
	// Func End, Address: 0x10253c0, Func Offset: 0x70
}

// 
// Start address: 0x10253c0
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1134, Address: 0x10253c0, Func Offset: 0
	// Line 1135, Address: 0x10253cc, Func Offset: 0xc
	// Line 1136, Address: 0x10253f4, Func Offset: 0x34
	// Line 1138, Address: 0x102540c, Func Offset: 0x4c
	// Line 1139, Address: 0x1025418, Func Offset: 0x58
	// Line 1140, Address: 0x1025420, Func Offset: 0x60
	// Line 1141, Address: 0x102542c, Func Offset: 0x6c
	// Line 1142, Address: 0x1025440, Func Offset: 0x80
	// Line 1143, Address: 0x1025454, Func Offset: 0x94
	// Line 1147, Address: 0x1025468, Func Offset: 0xa8
	// Line 1148, Address: 0x1025474, Func Offset: 0xb4
	// Func End, Address: 0x1025484, Func Offset: 0xc4
}

// 
// Start address: 0x1025490
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1162, Address: 0x1025490, Func Offset: 0
	// Line 1165, Address: 0x102549c, Func Offset: 0xc
	// Line 1166, Address: 0x10254bc, Func Offset: 0x2c
	// Line 1167, Address: 0x10254e0, Func Offset: 0x50
	// Line 1168, Address: 0x10254ec, Func Offset: 0x5c
	// Func End, Address: 0x10254fc, Func Offset: 0x6c
}

// 
// Start address: 0x1025500
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1183, Address: 0x1025500, Func Offset: 0
	// Line 1184, Address: 0x102550c, Func Offset: 0xc
	// Line 1185, Address: 0x1025534, Func Offset: 0x34
	// Line 1187, Address: 0x102554c, Func Offset: 0x4c
	// Line 1188, Address: 0x1025558, Func Offset: 0x58
	// Line 1189, Address: 0x1025560, Func Offset: 0x60
	// Line 1190, Address: 0x102556c, Func Offset: 0x6c
	// Line 1191, Address: 0x1025580, Func Offset: 0x80
	// Line 1192, Address: 0x1025594, Func Offset: 0x94
	// Line 1196, Address: 0x10255a8, Func Offset: 0xa8
	// Line 1197, Address: 0x10255b4, Func Offset: 0xb4
	// Func End, Address: 0x10255c4, Func Offset: 0xc4
}

// 
// Start address: 0x10255d0
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1214, Address: 0x10255d0, Func Offset: 0
	// Line 1218, Address: 0x10255e0, Func Offset: 0x10
	// Line 1219, Address: 0x10255f0, Func Offset: 0x20
	// Line 1220, Address: 0x1025614, Func Offset: 0x44
	// Line 1221, Address: 0x1025628, Func Offset: 0x58
	// Line 1222, Address: 0x1025640, Func Offset: 0x70
	// Line 1224, Address: 0x102564c, Func Offset: 0x7c
	// Line 1226, Address: 0x1025658, Func Offset: 0x88
	// Line 1227, Address: 0x1025694, Func Offset: 0xc4
	// Line 1228, Address: 0x102569c, Func Offset: 0xcc
	// Line 1229, Address: 0x10256b0, Func Offset: 0xe0
	// Line 1230, Address: 0x10256dc, Func Offset: 0x10c
	// Line 1231, Address: 0x10256ec, Func Offset: 0x11c
	// Line 1232, Address: 0x1025700, Func Offset: 0x130
	// Line 1233, Address: 0x1025708, Func Offset: 0x138
	// Line 1238, Address: 0x102571c, Func Offset: 0x14c
	// Func End, Address: 0x1025730, Func Offset: 0x160
}

// 
// Start address: 0x1025730
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
	// Line 1256, Address: 0x1025730, Func Offset: 0
	// Line 1265, Address: 0x1025750, Func Offset: 0x20
	// Line 1266, Address: 0x1025754, Func Offset: 0x24
	// Line 1267, Address: 0x1025760, Func Offset: 0x30
	// Line 1268, Address: 0x102576c, Func Offset: 0x3c
	// Line 1269, Address: 0x1025774, Func Offset: 0x44
	// Line 1270, Address: 0x102577c, Func Offset: 0x4c
	// Line 1272, Address: 0x1025790, Func Offset: 0x60
	// Line 1273, Address: 0x1025794, Func Offset: 0x64
	// Line 1274, Address: 0x10257a0, Func Offset: 0x70
	// Line 1275, Address: 0x10257ac, Func Offset: 0x7c
	// Line 1276, Address: 0x10257b4, Func Offset: 0x84
	// Line 1278, Address: 0x10257bc, Func Offset: 0x8c
	// Line 1279, Address: 0x10257c8, Func Offset: 0x98
	// Line 1280, Address: 0x10257dc, Func Offset: 0xac
	// Line 1282, Address: 0x10257e8, Func Offset: 0xb8
	// Line 1283, Address: 0x10257f0, Func Offset: 0xc0
	// Line 1285, Address: 0x10257f8, Func Offset: 0xc8
	// Line 1287, Address: 0x1025818, Func Offset: 0xe8
	// Line 1293, Address: 0x1025844, Func Offset: 0x114
	// Line 1294, Address: 0x1025858, Func Offset: 0x128
	// Line 1296, Address: 0x1025864, Func Offset: 0x134
	// Line 1297, Address: 0x102586c, Func Offset: 0x13c
	// Line 1298, Address: 0x1025874, Func Offset: 0x144
	// Line 1300, Address: 0x1025894, Func Offset: 0x164
	// Line 1306, Address: 0x10258c0, Func Offset: 0x190
	// Line 1307, Address: 0x10258d4, Func Offset: 0x1a4
	// Line 1309, Address: 0x10258e0, Func Offset: 0x1b0
	// Line 1310, Address: 0x10258e8, Func Offset: 0x1b8
	// Line 1311, Address: 0x10258f0, Func Offset: 0x1c0
	// Line 1313, Address: 0x1025910, Func Offset: 0x1e0
	// Line 1319, Address: 0x102593c, Func Offset: 0x20c
	// Line 1320, Address: 0x1025950, Func Offset: 0x220
	// Line 1322, Address: 0x102595c, Func Offset: 0x22c
	// Line 1323, Address: 0x1025964, Func Offset: 0x234
	// Line 1324, Address: 0x102596c, Func Offset: 0x23c
	// Line 1326, Address: 0x102598c, Func Offset: 0x25c
	// Line 1335, Address: 0x10259b8, Func Offset: 0x288
	// Func End, Address: 0x10259e0, Func Offset: 0x2b0
}

// 
// Start address: 0x10259e0
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
	// Line 1352, Address: 0x10259e0, Func Offset: 0
	// Line 1363, Address: 0x1025a0c, Func Offset: 0x2c
	// Line 1365, Address: 0x1025a14, Func Offset: 0x34
	// Line 1366, Address: 0x1025a2c, Func Offset: 0x4c
	// Line 1367, Address: 0x1025a40, Func Offset: 0x60
	// Line 1369, Address: 0x1025a48, Func Offset: 0x68
	// Line 1371, Address: 0x1025a5c, Func Offset: 0x7c
	// Line 1372, Address: 0x1025a74, Func Offset: 0x94
	// Line 1373, Address: 0x1025a88, Func Offset: 0xa8
	// Line 1374, Address: 0x1025a90, Func Offset: 0xb0
	// Line 1376, Address: 0x1025a98, Func Offset: 0xb8
	// Line 1377, Address: 0x1025aac, Func Offset: 0xcc
	// Line 1382, Address: 0x1025ab4, Func Offset: 0xd4
	// Line 1383, Address: 0x1025b04, Func Offset: 0x124
	// Line 1384, Address: 0x1025b0c, Func Offset: 0x12c
	// Line 1390, Address: 0x1025b2c, Func Offset: 0x14c
	// Line 1391, Address: 0x1025b4c, Func Offset: 0x16c
	// Line 1392, Address: 0x1025b70, Func Offset: 0x190
	// Line 1393, Address: 0x1025b7c, Func Offset: 0x19c
	// Line 1394, Address: 0x1025b84, Func Offset: 0x1a4
	// Line 1396, Address: 0x1025ba4, Func Offset: 0x1c4
	// Line 1400, Address: 0x1025bd0, Func Offset: 0x1f0
	// Line 1403, Address: 0x1025bd8, Func Offset: 0x1f8
	// Line 1404, Address: 0x1025bdc, Func Offset: 0x1fc
	// Line 1408, Address: 0x1025bfc, Func Offset: 0x21c
	// Line 1415, Address: 0x1025c28, Func Offset: 0x248
	// Line 1422, Address: 0x1025c3c, Func Offset: 0x25c
	// Line 1423, Address: 0x1025c44, Func Offset: 0x264
	// Line 1424, Address: 0x1025c4c, Func Offset: 0x26c
	// Line 1425, Address: 0x1025c64, Func Offset: 0x284
	// Line 1426, Address: 0x1025c84, Func Offset: 0x2a4
	// Line 1430, Address: 0x1025c8c, Func Offset: 0x2ac
	// Line 1432, Address: 0x1025cbc, Func Offset: 0x2dc
	// Line 1433, Address: 0x1025cc8, Func Offset: 0x2e8
	// Line 1437, Address: 0x1025cd8, Func Offset: 0x2f8
	// Line 1438, Address: 0x1025ce4, Func Offset: 0x304
	// Line 1440, Address: 0x1025d04, Func Offset: 0x324
	// Line 1441, Address: 0x1025d3c, Func Offset: 0x35c
	// Line 1442, Address: 0x1025d5c, Func Offset: 0x37c
	// Line 1444, Address: 0x1025d80, Func Offset: 0x3a0
	// Line 1447, Address: 0x1025da4, Func Offset: 0x3c4
	// Line 1449, Address: 0x1025dc4, Func Offset: 0x3e4
	// Line 1451, Address: 0x1025dd8, Func Offset: 0x3f8
	// Line 1452, Address: 0x1025de4, Func Offset: 0x404
	// Line 1453, Address: 0x1025df4, Func Offset: 0x414
	// Line 1455, Address: 0x1025dfc, Func Offset: 0x41c
	// Func End, Address: 0x1025e24, Func Offset: 0x444
}

// 
// Start address: 0x1025e30
void scrollwrtc()
{
	// Line 1461, Address: 0x1025e30, Func Offset: 0
	// Func End, Address: 0x1025e38, Func Offset: 0x8
}

// 
// Start address: 0x1025e40
void scrollwrtz()
{
	// Line 1466, Address: 0x1025e40, Func Offset: 0
	// Func End, Address: 0x1025e48, Func Offset: 0x8
}

// 
// Start address: 0x1025e50
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1484, Address: 0x1025e50, Func Offset: 0
	// Line 1497, Address: 0x1025e78, Func Offset: 0x28
	// Line 1500, Address: 0x1025e98, Func Offset: 0x48
	// Line 1501, Address: 0x1025eac, Func Offset: 0x5c
	// Line 1502, Address: 0x1025ec0, Func Offset: 0x70
	// Line 1503, Address: 0x1025ed4, Func Offset: 0x84
	// Line 1505, Address: 0x1025ee8, Func Offset: 0x98
	// Line 1506, Address: 0x1025ef4, Func Offset: 0xa4
	// Line 1507, Address: 0x1025f08, Func Offset: 0xb8
	// Func End, Address: 0x1025f18, Func Offset: 0xc8
}

// 
// Start address: 0x1025f20
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1511, Address: 0x1025f20, Func Offset: 0
	// Line 1515, Address: 0x1025f48, Func Offset: 0x28
	// Line 1518, Address: 0x1025f68, Func Offset: 0x48
	// Line 1519, Address: 0x1025f7c, Func Offset: 0x5c
	// Line 1520, Address: 0x1025f90, Func Offset: 0x70
	// Line 1521, Address: 0x1025fa4, Func Offset: 0x84
	// Line 1523, Address: 0x1025fb8, Func Offset: 0x98
	// Line 1524, Address: 0x1025fc4, Func Offset: 0xa4
	// Line 1525, Address: 0x1025fd8, Func Offset: 0xb8
	// Func End, Address: 0x1025fe8, Func Offset: 0xc8
}

// 
// Start address: 0x1025ff0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1545, Address: 0x1025ff0, Func Offset: 0
	// Line 1549, Address: 0x1026018, Func Offset: 0x28
	// Line 1552, Address: 0x1026038, Func Offset: 0x48
	// Line 1553, Address: 0x102604c, Func Offset: 0x5c
	// Line 1554, Address: 0x102605c, Func Offset: 0x6c
	// Line 1555, Address: 0x1026070, Func Offset: 0x80
	// Line 1557, Address: 0x1026080, Func Offset: 0x90
	// Line 1558, Address: 0x102608c, Func Offset: 0x9c
	// Line 1559, Address: 0x10260a0, Func Offset: 0xb0
	// Func End, Address: 0x10260b0, Func Offset: 0xc0
}

// 
// Start address: 0x10260b0
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
	// Line 1578, Address: 0x10260b0, Func Offset: 0
	// Line 1584, Address: 0x10260e4, Func Offset: 0x34
	// Line 1586, Address: 0x10260f4, Func Offset: 0x44
	// Line 1587, Address: 0x10260f8, Func Offset: 0x48
	// Line 1588, Address: 0x1026100, Func Offset: 0x50
	// Line 1590, Address: 0x1026110, Func Offset: 0x60
	// Line 1592, Address: 0x1026114, Func Offset: 0x64
	// Line 1593, Address: 0x102611c, Func Offset: 0x6c
	// Line 1596, Address: 0x1026124, Func Offset: 0x74
	// Line 1597, Address: 0x102612c, Func Offset: 0x7c
	// Line 1598, Address: 0x1026138, Func Offset: 0x88
	// Line 1600, Address: 0x1026144, Func Offset: 0x94
	// Line 1601, Address: 0x102614c, Func Offset: 0x9c
	// Line 1602, Address: 0x1026154, Func Offset: 0xa4
	// Line 1603, Address: 0x102615c, Func Offset: 0xac
	// Line 1605, Address: 0x1026168, Func Offset: 0xb8
	// Line 1606, Address: 0x1026170, Func Offset: 0xc0
	// Line 1607, Address: 0x1026178, Func Offset: 0xc8
	// Line 1608, Address: 0x1026180, Func Offset: 0xd0
	// Line 1610, Address: 0x102618c, Func Offset: 0xdc
	// Line 1611, Address: 0x1026194, Func Offset: 0xe4
	// Line 1612, Address: 0x102619c, Func Offset: 0xec
	// Line 1615, Address: 0x10261a4, Func Offset: 0xf4
	// Line 1616, Address: 0x10261ac, Func Offset: 0xfc
	// Line 1619, Address: 0x10261b4, Func Offset: 0x104
	// Line 1620, Address: 0x10261f8, Func Offset: 0x148
	// Line 1621, Address: 0x102623c, Func Offset: 0x18c
	// Line 1622, Address: 0x1026280, Func Offset: 0x1d0
	// Line 1624, Address: 0x10262c4, Func Offset: 0x214
	// Func End, Address: 0x10262f4, Func Offset: 0x244
}

// 
// Start address: 0x1026300
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1642, Address: 0x1026300, Func Offset: 0
	// Line 1643, Address: 0x1026320, Func Offset: 0x20
	// Line 1644, Address: 0x1026340, Func Offset: 0x40
	// Func End, Address: 0x1026350, Func Offset: 0x50
}

// 
// Start address: 0x1026350
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1646, Address: 0x1026350, Func Offset: 0
	// Line 1647, Address: 0x1026370, Func Offset: 0x20
	// Line 1648, Address: 0x1026374, Func Offset: 0x24
	// Line 1649, Address: 0x1026394, Func Offset: 0x44
	// Func End, Address: 0x10263a4, Func Offset: 0x54
}

// 
// Start address: 0x10263b0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1656, Address: 0x10263b0, Func Offset: 0
	// Line 1662, Address: 0x10263e0, Func Offset: 0x30
	// Line 1663, Address: 0x10263f0, Func Offset: 0x40
	// Line 1669, Address: 0x1026400, Func Offset: 0x50
	// Line 1670, Address: 0x102641c, Func Offset: 0x6c
	// Line 1671, Address: 0x1026420, Func Offset: 0x70
	// Line 1672, Address: 0x102643c, Func Offset: 0x8c
	// Line 1673, Address: 0x1026440, Func Offset: 0x90
	// Line 1674, Address: 0x1026460, Func Offset: 0xb0
	// Line 1675, Address: 0x1026468, Func Offset: 0xb8
	// Line 1676, Address: 0x1026488, Func Offset: 0xd8
	// Line 1677, Address: 0x1026490, Func Offset: 0xe0
	// Line 1678, Address: 0x10264d8, Func Offset: 0x128
	// Line 1680, Address: 0x10264e4, Func Offset: 0x134
	// Line 1682, Address: 0x1026500, Func Offset: 0x150
	// Line 1687, Address: 0x1026508, Func Offset: 0x158
	// Line 1688, Address: 0x1026514, Func Offset: 0x164
	// Line 1691, Address: 0x1026520, Func Offset: 0x170
	// Line 1692, Address: 0x1026528, Func Offset: 0x178
	// Line 1693, Address: 0x1026548, Func Offset: 0x198
	// Line 1694, Address: 0x1026564, Func Offset: 0x1b4
	// Line 1695, Address: 0x102656c, Func Offset: 0x1bc
	// Line 1696, Address: 0x102658c, Func Offset: 0x1dc
	// Line 1698, Address: 0x10265a8, Func Offset: 0x1f8
	// Line 1699, Address: 0x10265b0, Func Offset: 0x200
	// Line 1700, Address: 0x10265b8, Func Offset: 0x208
	// Line 1701, Address: 0x10265c4, Func Offset: 0x214
	// Line 1702, Address: 0x10265dc, Func Offset: 0x22c
	// Line 1704, Address: 0x10265ec, Func Offset: 0x23c
	// Line 1707, Address: 0x10265f8, Func Offset: 0x248
	// Line 1708, Address: 0x1026600, Func Offset: 0x250
	// Line 1709, Address: 0x1026604, Func Offset: 0x254
	// Func End, Address: 0x1026624, Func Offset: 0x274
}

// 
// Start address: 0x1026630
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1729, Address: 0x1026630, Func Offset: 0
	// Line 1737, Address: 0x1026658, Func Offset: 0x28
	// Line 1738, Address: 0x10266bc, Func Offset: 0x8c
	// Line 1744, Address: 0x10266c4, Func Offset: 0x94
	// Line 1745, Address: 0x10266cc, Func Offset: 0x9c
	// Line 1746, Address: 0x10266ec, Func Offset: 0xbc
	// Line 1747, Address: 0x1026708, Func Offset: 0xd8
	// Line 1748, Address: 0x1026710, Func Offset: 0xe0
	// Line 1749, Address: 0x1026730, Func Offset: 0x100
	// Line 1752, Address: 0x102674c, Func Offset: 0x11c
	// Line 1753, Address: 0x1026754, Func Offset: 0x124
	// Line 1754, Address: 0x102675c, Func Offset: 0x12c
	// Line 1755, Address: 0x1026768, Func Offset: 0x138
	// Line 1756, Address: 0x1026780, Func Offset: 0x150
	// Line 1757, Address: 0x1026788, Func Offset: 0x158
	// Line 1762, Address: 0x1026798, Func Offset: 0x168
	// Line 1765, Address: 0x10267a4, Func Offset: 0x174
	// Line 1766, Address: 0x10267ac, Func Offset: 0x17c
	// Line 1767, Address: 0x10267b0, Func Offset: 0x180
	// Func End, Address: 0x10267cc, Func Offset: 0x19c
}

// 
// Start address: 0x10267d0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1781, Address: 0x10267d0, Func Offset: 0
	// Line 1788, Address: 0x10267ec, Func Offset: 0x1c
	// Line 1789, Address: 0x10267f0, Func Offset: 0x20
	// Line 1790, Address: 0x10267f8, Func Offset: 0x28
	// Line 1791, Address: 0x102681c, Func Offset: 0x4c
	// Line 1792, Address: 0x1026828, Func Offset: 0x58
	// Line 1793, Address: 0x1026840, Func Offset: 0x70
	// Line 1794, Address: 0x1026854, Func Offset: 0x84
	// Line 1799, Address: 0x102686c, Func Offset: 0x9c
	// Func End, Address: 0x1026884, Func Offset: 0xb4
}

// 
// Start address: 0x1026890
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1813, Address: 0x1026890, Func Offset: 0
	// Line 1814, Address: 0x102689c, Func Offset: 0xc
	// Line 1815, Address: 0x10268c8, Func Offset: 0x38
	// Line 1816, Address: 0x1026914, Func Offset: 0x84
	// Line 1817, Address: 0x1026940, Func Offset: 0xb0
	// Line 1819, Address: 0x102698c, Func Offset: 0xfc
	// Line 1825, Address: 0x1026998, Func Offset: 0x108
	// Line 1826, Address: 0x102699c, Func Offset: 0x10c
	// Func End, Address: 0x10269a8, Func Offset: 0x118
}

// 
// Start address: 0x10269b0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1843, Address: 0x10269b0, Func Offset: 0
	// Line 1844, Address: 0x10269cc, Func Offset: 0x1c
	// Line 1846, Address: 0x10269e8, Func Offset: 0x38
	// Func End, Address: 0x10269f8, Func Offset: 0x48
}

// 
// Start address: 0x1026a00
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1848, Address: 0x1026a00, Func Offset: 0
	// Line 1849, Address: 0x1026a1c, Func Offset: 0x1c
	// Line 1850, Address: 0x1026a20, Func Offset: 0x20
	// Line 1852, Address: 0x1026a3c, Func Offset: 0x3c
	// Func End, Address: 0x1026a4c, Func Offset: 0x4c
}

// 
// Start address: 0x1026a50
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1854, Address: 0x1026a50, Func Offset: 0
	// Line 1855, Address: 0x1026a64, Func Offset: 0x14
	// Line 1857, Address: 0x1026a80, Func Offset: 0x30
	// Func End, Address: 0x1026a90, Func Offset: 0x40
}

// 
// Start address: 0x1026a90
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1859, Address: 0x1026a90, Func Offset: 0
	// Line 1860, Address: 0x1026aac, Func Offset: 0x1c
	// Line 1862, Address: 0x1026ac8, Func Offset: 0x38
	// Func End, Address: 0x1026ad8, Func Offset: 0x48
}

// 
// Start address: 0x1026ae0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1864, Address: 0x1026ae0, Func Offset: 0
	// Line 1865, Address: 0x1026af8, Func Offset: 0x18
	// Line 1866, Address: 0x1026b08, Func Offset: 0x28
	// Line 1867, Address: 0x1026b18, Func Offset: 0x38
	// Line 1868, Address: 0x1026b24, Func Offset: 0x44
	// Line 1870, Address: 0x1026b30, Func Offset: 0x50
	// Line 1871, Address: 0x1026b5c, Func Offset: 0x7c
	// Line 1874, Address: 0x1026b88, Func Offset: 0xa8
	// Func End, Address: 0x1026b94, Func Offset: 0xb4
}

// 
// Start address: 0x1026ba0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1890, Address: 0x1026ba0, Func Offset: 0
	// Line 1895, Address: 0x1026bb8, Func Offset: 0x18
	// Line 1896, Address: 0x1026bc4, Func Offset: 0x24
	// Line 1897, Address: 0x1026bd0, Func Offset: 0x30
	// Line 1898, Address: 0x1026bd8, Func Offset: 0x38
	// Line 1899, Address: 0x1026bdc, Func Offset: 0x3c
	// Line 1900, Address: 0x1026bf4, Func Offset: 0x54
	// Line 1901, Address: 0x1026bfc, Func Offset: 0x5c
	// Func End, Address: 0x1026c1c, Func Offset: 0x7c
}

// 
// Start address: 0x1026c20
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1904, Address: 0x1026c20, Func Offset: 0
	// Line 1909, Address: 0x1026c38, Func Offset: 0x18
	// Line 1910, Address: 0x1026c44, Func Offset: 0x24
	// Line 1911, Address: 0x1026c50, Func Offset: 0x30
	// Line 1912, Address: 0x1026c58, Func Offset: 0x38
	// Line 1913, Address: 0x1026c5c, Func Offset: 0x3c
	// Line 1915, Address: 0x1026c6c, Func Offset: 0x4c
	// Func End, Address: 0x1026c8c, Func Offset: 0x6c
}

// 
// Start address: 0x1026c90
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1918, Address: 0x1026c90, Func Offset: 0
	// Line 1919, Address: 0x1026ca8, Func Offset: 0x18
	// Line 1920, Address: 0x1026cc8, Func Offset: 0x38
	// Func End, Address: 0x1026cd8, Func Offset: 0x48
}

// 
// Start address: 0x1026ce0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1925, Address: 0x1026ce0, Func Offset: 0
	// Line 1929, Address: 0x1026d00, Func Offset: 0x20
	// Line 1932, Address: 0x1026d1c, Func Offset: 0x3c
	// Line 1936, Address: 0x1026d44, Func Offset: 0x64
	// Line 1937, Address: 0x1026d50, Func Offset: 0x70
	// Line 1939, Address: 0x1026d78, Func Offset: 0x98
	// Func End, Address: 0x1026d88, Func Offset: 0xa8
}

// 
// Start address: 0x1026d90
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1945, Address: 0x1026d90, Func Offset: 0
	// Line 1948, Address: 0x1026dac, Func Offset: 0x1c
	// Line 1949, Address: 0x1026db4, Func Offset: 0x24
	// Line 1952, Address: 0x1026dbc, Func Offset: 0x2c
	// Line 1954, Address: 0x1026de0, Func Offset: 0x50
	// Line 1955, Address: 0x1026e00, Func Offset: 0x70
	// Line 1956, Address: 0x1026e08, Func Offset: 0x78
	// Line 1957, Address: 0x1026e2c, Func Offset: 0x9c
	// Func End, Address: 0x1026e48, Func Offset: 0xb8
}

// 
// Start address: 0x1026e50
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1983, Address: 0x1026e50, Func Offset: 0
	// Line 1988, Address: 0x1026e78, Func Offset: 0x28
	// Line 1989, Address: 0x1026e88, Func Offset: 0x38
	// Line 1991, Address: 0x1026ea4, Func Offset: 0x54
	// Line 1992, Address: 0x1026ec8, Func Offset: 0x78
	// Line 1993, Address: 0x1026ef0, Func Offset: 0xa0
	// Line 1994, Address: 0x1026efc, Func Offset: 0xac
	// Line 1995, Address: 0x1026f04, Func Offset: 0xb4
	// Line 1998, Address: 0x1026f20, Func Offset: 0xd0
	// Line 2002, Address: 0x1026f48, Func Offset: 0xf8
	// Line 2005, Address: 0x1026f50, Func Offset: 0x100
	// Line 2006, Address: 0x1026f54, Func Offset: 0x104
	// Line 2010, Address: 0x1026f70, Func Offset: 0x120
	// Line 2017, Address: 0x1026f98, Func Offset: 0x148
	// Func End, Address: 0x1026fb4, Func Offset: 0x164
}

// 
// Start address: 0x1026fc0
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
	// Line 2028, Address: 0x1026fc0, Func Offset: 0
	// Line 2029, Address: 0x1026fe0, Func Offset: 0x20
	// Line 2034, Address: 0x102700c, Func Offset: 0x4c
	// Line 2040, Address: 0x1027030, Func Offset: 0x70
	// Line 2041, Address: 0x1027034, Func Offset: 0x74
	// Line 2043, Address: 0x1027038, Func Offset: 0x78
	// Line 2044, Address: 0x1027040, Func Offset: 0x80
	// Line 2047, Address: 0x1027064, Func Offset: 0xa4
	// Line 2048, Address: 0x1027068, Func Offset: 0xa8
	// Line 2051, Address: 0x102708c, Func Offset: 0xcc
	// Line 2052, Address: 0x1027090, Func Offset: 0xd0
	// Line 2053, Address: 0x1027098, Func Offset: 0xd8
	// Line 2054, Address: 0x102709c, Func Offset: 0xdc
	// Line 2056, Address: 0x10270a0, Func Offset: 0xe0
	// Line 2057, Address: 0x10270a8, Func Offset: 0xe8
	// Line 2058, Address: 0x10270c8, Func Offset: 0x108
	// Line 2062, Address: 0x10270d4, Func Offset: 0x114
	// Line 2063, Address: 0x10270e8, Func Offset: 0x128
	// Line 2066, Address: 0x10270fc, Func Offset: 0x13c
	// Line 2067, Address: 0x102711c, Func Offset: 0x15c
	// Func End, Address: 0x1027144, Func Offset: 0x184
}

// 
// Start address: 0x1027150
void mapset()
{
	// Line 2072, Address: 0x1027150, Func Offset: 0
	// Func End, Address: 0x1027158, Func Offset: 0x8
}

// 
// Start address: 0x1027160
void divdevset()
{
	// Line 2076, Address: 0x1027160, Func Offset: 0
	// Func End, Address: 0x1027168, Func Offset: 0x8
}

// 
// Start address: 0x1027170
void enecginit()
{
	// Line 2080, Address: 0x1027170, Func Offset: 0
	// Func End, Address: 0x1027178, Func Offset: 0x8
}

// 
// Start address: 0x1027180
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2096, Address: 0x1027180, Func Offset: 0
	// Line 2100, Address: 0x10271a0, Func Offset: 0x20
	// Line 2101, Address: 0x10271b8, Func Offset: 0x38
	// Line 2102, Address: 0x10271c8, Func Offset: 0x48
	// Line 2103, Address: 0x10271d8, Func Offset: 0x58
	// Line 2104, Address: 0x10271e0, Func Offset: 0x60
	// Line 2106, Address: 0x10271e4, Func Offset: 0x64
	// Line 2107, Address: 0x10271f0, Func Offset: 0x70
	// Line 2108, Address: 0x1027208, Func Offset: 0x88
	// Line 2110, Address: 0x1027214, Func Offset: 0x94
	// Line 2111, Address: 0x1027220, Func Offset: 0xa0
	// Line 2112, Address: 0x102722c, Func Offset: 0xac
	// Func End, Address: 0x102724c, Func Offset: 0xcc
}

