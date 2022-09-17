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

typedef int(*type_11)(int, int, int, int, int);

typedef char type_0[7];
typedef short type_1[6];
typedef _anon13 type_2[20];
typedef _anon13 type_3[0];
typedef unsigned char type_4[4];
typedef short type_5[2];
typedef short type_6[2][8];
typedef unsigned short type_7[4];
typedef unsigned short type_8[4][1024];
typedef unsigned char type_9[2];
typedef unsigned char type_10[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[49];
typedef unsigned char type_16[64][8];
typedef short type_17[256];
typedef _anon2* type_18[8];
typedef _anon1 type_19[128];
typedef short type_20[2];
typedef short type_21[2][1];
typedef char type_22[9];
typedef _anon2* type_23[8];

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

unsigned char z81awrttbl[49];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
_anon1 actwk[128];
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
short endplpositbl[2][8];
short playpositbl[2][1];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon2 scra_v_posit;
_anon2 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
_anon2 scrb_h_posit;
_anon2 scrz_h_posit;
_anon2 scrc_h_posit;
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
_anon11 scrflaga;
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
unsigned char mapwkb[64][8];
_anon2 scrb_v_posiw;
_anon2 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

_anon1* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z81aline(short** ppHscw, char* pScrTbl, short AddrOffs, short LoopNum);
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
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase);
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6);
void mapwrt_z81a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();
void divdevset();
void enecginit();

// 
// Start address: 0x1027ce0
_anon1* main_chk()
{
	// Line 146, Address: 0x1027ce0, Func Offset: 0
	// Line 147, Address: 0x1027cf4, Func Offset: 0x14
	// Line 149, Address: 0x1027d04, Func Offset: 0x24
	// Line 151, Address: 0x1027d0c, Func Offset: 0x2c
	// Func End, Address: 0x1027d14, Func Offset: 0x34
}

// 
// Start address: 0x1027d20
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x1027d20, Func Offset: 0
	// Line 192, Address: 0x1027d2c, Func Offset: 0xc
	// Line 193, Address: 0x1027d40, Func Offset: 0x20
	// Line 194, Address: 0x1027d54, Func Offset: 0x34
	// Line 196, Address: 0x1027d5c, Func Offset: 0x3c
	// Line 197, Address: 0x1027d64, Func Offset: 0x44
	// Line 198, Address: 0x1027d70, Func Offset: 0x50
	// Line 199, Address: 0x1027d74, Func Offset: 0x54
	// Line 200, Address: 0x1027d88, Func Offset: 0x68
	// Line 201, Address: 0x1027d8c, Func Offset: 0x6c
	// Line 202, Address: 0x1027da0, Func Offset: 0x80
	// Line 203, Address: 0x1027da4, Func Offset: 0x84
	// Line 204, Address: 0x1027db8, Func Offset: 0x98
	// Line 205, Address: 0x1027dbc, Func Offset: 0x9c
	// Line 206, Address: 0x1027dd0, Func Offset: 0xb0
	// Line 207, Address: 0x1027df0, Func Offset: 0xd0
	// Line 208, Address: 0x1027df4, Func Offset: 0xd4
	// Line 209, Address: 0x1027e00, Func Offset: 0xe0
	// Line 211, Address: 0x1027e0c, Func Offset: 0xec
	// Line 212, Address: 0x1027e18, Func Offset: 0xf8
	// Line 214, Address: 0x1027e24, Func Offset: 0x104
	// Line 215, Address: 0x1027e2c, Func Offset: 0x10c
	// Func End, Address: 0x1027e40, Func Offset: 0x120
}

// 
// Start address: 0x1027e40
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x1027e40, Func Offset: 0
	// Line 267, Address: 0x1027e54, Func Offset: 0x14
	// Line 268, Address: 0x1027e64, Func Offset: 0x24
	// Line 269, Address: 0x1027e6c, Func Offset: 0x2c
	// Line 271, Address: 0x1027e7c, Func Offset: 0x3c
	// Line 272, Address: 0x1027e94, Func Offset: 0x54
	// Line 273, Address: 0x1027ea4, Func Offset: 0x64
	// Line 274, Address: 0x1027eac, Func Offset: 0x6c
	// Line 276, Address: 0x1027eb0, Func Offset: 0x70
	// Line 278, Address: 0x1027eb8, Func Offset: 0x78
	// Line 279, Address: 0x1027ed8, Func Offset: 0x98
	// Line 280, Address: 0x1027efc, Func Offset: 0xbc
	// Line 282, Address: 0x1027f04, Func Offset: 0xc4
	// Line 286, Address: 0x1027f24, Func Offset: 0xe4
	// Line 287, Address: 0x1027f38, Func Offset: 0xf8
	// Line 291, Address: 0x1027f4c, Func Offset: 0x10c
	// Line 292, Address: 0x1027f60, Func Offset: 0x120
	// Line 293, Address: 0x1027f6c, Func Offset: 0x12c
	// Line 294, Address: 0x1027f74, Func Offset: 0x134
	// Line 298, Address: 0x1027f78, Func Offset: 0x138
	// Line 299, Address: 0x1027f9c, Func Offset: 0x15c
	// Line 303, Address: 0x1027fac, Func Offset: 0x16c
	// Line 305, Address: 0x1027fb4, Func Offset: 0x174
	// Line 306, Address: 0x1027fc8, Func Offset: 0x188
	// Line 307, Address: 0x1027fd4, Func Offset: 0x194
	// Line 308, Address: 0x1027fdc, Func Offset: 0x19c
	// Line 312, Address: 0x1027fe0, Func Offset: 0x1a0
	// Line 313, Address: 0x1028004, Func Offset: 0x1c4
	// Line 317, Address: 0x1028014, Func Offset: 0x1d4
	// Line 319, Address: 0x102801c, Func Offset: 0x1dc
	// Line 322, Address: 0x102802c, Func Offset: 0x1ec
	// Line 323, Address: 0x102803c, Func Offset: 0x1fc
	// Line 324, Address: 0x102804c, Func Offset: 0x20c
	// Line 325, Address: 0x102805c, Func Offset: 0x21c
	// Line 326, Address: 0x102806c, Func Offset: 0x22c
	// Func End, Address: 0x1028088, Func Offset: 0x248
}

// 
// Start address: 0x1028090
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x1028090, Func Offset: 0
	// Line 350, Address: 0x102809c, Func Offset: 0xc
	// Line 351, Address: 0x10280a4, Func Offset: 0x14
	// Line 353, Address: 0x10280a8, Func Offset: 0x18
	// Line 354, Address: 0x10280b4, Func Offset: 0x24
	// Line 355, Address: 0x10280c0, Func Offset: 0x30
	// Line 356, Address: 0x10280cc, Func Offset: 0x3c
	// Line 358, Address: 0x10280d8, Func Offset: 0x48
	// Line 359, Address: 0x10280f4, Func Offset: 0x64
	// Line 361, Address: 0x1028100, Func Offset: 0x70
	// Line 362, Address: 0x102811c, Func Offset: 0x8c
	// Line 364, Address: 0x1028128, Func Offset: 0x98
	// Line 365, Address: 0x1028144, Func Offset: 0xb4
	// Line 366, Address: 0x1028168, Func Offset: 0xd8
	// Func End, Address: 0x1028174, Func Offset: 0xe4
}

// 
// Start address: 0x1028180
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
	char z81bscrtbl1[7];
	char z81bscrtbl0[9];
	// Line 382, Address: 0x1028180, Func Offset: 0
	// Line 400, Address: 0x102819c, Func Offset: 0x1c
	// Line 405, Address: 0x10281ac, Func Offset: 0x2c
	// Line 407, Address: 0x10281d8, Func Offset: 0x58
	// Line 409, Address: 0x10281e0, Func Offset: 0x60
	// Line 410, Address: 0x10281e8, Func Offset: 0x68
	// Line 412, Address: 0x10281f0, Func Offset: 0x70
	// Line 413, Address: 0x1028200, Func Offset: 0x80
	// Line 416, Address: 0x1028210, Func Offset: 0x90
	// Line 417, Address: 0x1028224, Func Offset: 0xa4
	// Line 419, Address: 0x1028234, Func Offset: 0xb4
	// Line 420, Address: 0x1028248, Func Offset: 0xc8
	// Line 422, Address: 0x1028258, Func Offset: 0xd8
	// Line 423, Address: 0x1028274, Func Offset: 0xf4
	// Line 425, Address: 0x1028284, Func Offset: 0x104
	// Line 428, Address: 0x1028298, Func Offset: 0x118
	// Line 430, Address: 0x10282a8, Func Offset: 0x128
	// Line 432, Address: 0x10282d0, Func Offset: 0x150
	// Line 433, Address: 0x1028308, Func Offset: 0x188
	// Line 435, Address: 0x102831c, Func Offset: 0x19c
	// Line 437, Address: 0x1028328, Func Offset: 0x1a8
	// Line 439, Address: 0x1028344, Func Offset: 0x1c4
	// Line 440, Address: 0x1028364, Func Offset: 0x1e4
	// Line 442, Address: 0x1028370, Func Offset: 0x1f0
	// Line 443, Address: 0x1028384, Func Offset: 0x204
	// Line 445, Address: 0x1028394, Func Offset: 0x214
	// Line 446, Address: 0x10283b4, Func Offset: 0x234
	// Line 448, Address: 0x10283c0, Func Offset: 0x240
	// Line 449, Address: 0x10283d4, Func Offset: 0x254
	// Line 451, Address: 0x10283e4, Func Offset: 0x264
	// Line 453, Address: 0x1028400, Func Offset: 0x280
	// Line 454, Address: 0x1028420, Func Offset: 0x2a0
	// Line 456, Address: 0x102842c, Func Offset: 0x2ac
	// Line 457, Address: 0x1028440, Func Offset: 0x2c0
	// Line 459, Address: 0x1028450, Func Offset: 0x2d0
	// Line 460, Address: 0x1028470, Func Offset: 0x2f0
	// Line 462, Address: 0x102847c, Func Offset: 0x2fc
	// Line 463, Address: 0x1028490, Func Offset: 0x310
	// Line 465, Address: 0x10284a0, Func Offset: 0x320
	// Line 466, Address: 0x10284ac, Func Offset: 0x32c
	// Line 467, Address: 0x10284dc, Func Offset: 0x35c
	// Line 468, Address: 0x102850c, Func Offset: 0x38c
	// Line 469, Address: 0x1028528, Func Offset: 0x3a8
	// Func End, Address: 0x102854c, Func Offset: 0x3cc
}

// 
// Start address: 0x1028550
void z81aline(short** ppHscw, char* pScrTbl, short AddrOffs, short LoopNum)
{
	int i;
	int j;
	int lXwk;
	_anon2 ldwk;
	short wk;
	// Line 483, Address: 0x1028550, Func Offset: 0
	// Line 489, Address: 0x1028574, Func Offset: 0x24
	// Line 490, Address: 0x1028598, Func Offset: 0x48
	// Line 491, Address: 0x10285b8, Func Offset: 0x68
	// Line 492, Address: 0x10285d8, Func Offset: 0x88
	// Line 493, Address: 0x10285e4, Func Offset: 0x94
	// Line 495, Address: 0x1028608, Func Offset: 0xb8
	// Line 497, Address: 0x102861c, Func Offset: 0xcc
	// Line 499, Address: 0x102863c, Func Offset: 0xec
	// Line 501, Address: 0x1028658, Func Offset: 0x108
	// Line 502, Address: 0x102866c, Func Offset: 0x11c
	// Line 503, Address: 0x1028678, Func Offset: 0x128
	// Line 505, Address: 0x1028684, Func Offset: 0x134
	// Line 506, Address: 0x10286a8, Func Offset: 0x158
	// Line 507, Address: 0x10286b4, Func Offset: 0x164
	// Line 508, Address: 0x10286d8, Func Offset: 0x188
	// Line 510, Address: 0x10286e4, Func Offset: 0x194
	// Line 511, Address: 0x1028708, Func Offset: 0x1b8
	// Func End, Address: 0x1028724, Func Offset: 0x1d4
}

// 
// Start address: 0x1028730
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 532, Address: 0x1028730, Func Offset: 0
	// Line 536, Address: 0x102874c, Func Offset: 0x1c
	// Line 537, Address: 0x1028750, Func Offset: 0x20
	// Line 539, Address: 0x1028770, Func Offset: 0x40
	// Line 540, Address: 0x102878c, Func Offset: 0x5c
	// Line 541, Address: 0x1028798, Func Offset: 0x68
	// Line 543, Address: 0x10287a4, Func Offset: 0x74
	// Line 544, Address: 0x10287ac, Func Offset: 0x7c
	// Line 545, Address: 0x10287bc, Func Offset: 0x8c
	// Line 546, Address: 0x10287e0, Func Offset: 0xb0
	// Line 547, Address: 0x1028800, Func Offset: 0xd0
	// Func End, Address: 0x1028814, Func Offset: 0xe4
}

// 
// Start address: 0x1028820
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 653, Address: 0x1028820, Func Offset: 0
	// Line 656, Address: 0x1028830, Func Offset: 0x10
	// Line 657, Address: 0x1028840, Func Offset: 0x20
	// Line 658, Address: 0x102884c, Func Offset: 0x2c
	// Line 660, Address: 0x1028884, Func Offset: 0x64
	// Line 661, Address: 0x102888c, Func Offset: 0x6c
	// Line 662, Address: 0x10288a0, Func Offset: 0x80
	// Line 663, Address: 0x10288c0, Func Offset: 0xa0
	// Line 664, Address: 0x10288d4, Func Offset: 0xb4
	// Line 666, Address: 0x10288dc, Func Offset: 0xbc
	// Line 671, Address: 0x10288f0, Func Offset: 0xd0
	// Func End, Address: 0x1028904, Func Offset: 0xe4
}

// 
// Start address: 0x1028910
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 689, Address: 0x1028910, Func Offset: 0
	// Line 693, Address: 0x1028924, Func Offset: 0x14
	// Line 694, Address: 0x102892c, Func Offset: 0x1c
	// Line 695, Address: 0x1028934, Func Offset: 0x24
	// Line 696, Address: 0x102893c, Func Offset: 0x2c
	// Line 697, Address: 0x1028940, Func Offset: 0x30
	// Line 698, Address: 0x1028964, Func Offset: 0x54
	// Line 699, Address: 0x1028970, Func Offset: 0x60
	// Line 701, Address: 0x102898c, Func Offset: 0x7c
	// Line 702, Address: 0x1028998, Func Offset: 0x88
	// Line 703, Address: 0x10289ac, Func Offset: 0x9c
	// Line 704, Address: 0x10289b8, Func Offset: 0xa8
	// Line 705, Address: 0x10289dc, Func Offset: 0xcc
	// Line 707, Address: 0x10289e4, Func Offset: 0xd4
	// Line 712, Address: 0x1028a0c, Func Offset: 0xfc
	// Func End, Address: 0x1028a20, Func Offset: 0x110
}

// 
// Start address: 0x1028a20
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 730, Address: 0x1028a20, Func Offset: 0
	// Line 734, Address: 0x1028a34, Func Offset: 0x14
	// Line 735, Address: 0x1028a3c, Func Offset: 0x1c
	// Line 736, Address: 0x1028a44, Func Offset: 0x24
	// Line 737, Address: 0x1028a4c, Func Offset: 0x2c
	// Line 738, Address: 0x1028a50, Func Offset: 0x30
	// Line 739, Address: 0x1028a74, Func Offset: 0x54
	// Line 740, Address: 0x1028a80, Func Offset: 0x60
	// Line 742, Address: 0x1028a9c, Func Offset: 0x7c
	// Line 743, Address: 0x1028aa8, Func Offset: 0x88
	// Line 744, Address: 0x1028abc, Func Offset: 0x9c
	// Line 745, Address: 0x1028ac8, Func Offset: 0xa8
	// Line 746, Address: 0x1028aec, Func Offset: 0xcc
	// Line 748, Address: 0x1028af4, Func Offset: 0xd4
	// Line 753, Address: 0x1028b1c, Func Offset: 0xfc
	// Func End, Address: 0x1028b30, Func Offset: 0x110
}

// 
// Start address: 0x1028b30
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 771, Address: 0x1028b30, Func Offset: 0
	// Line 775, Address: 0x1028b44, Func Offset: 0x14
	// Line 776, Address: 0x1028b4c, Func Offset: 0x1c
	// Line 777, Address: 0x1028b54, Func Offset: 0x24
	// Line 778, Address: 0x1028b5c, Func Offset: 0x2c
	// Line 779, Address: 0x1028b60, Func Offset: 0x30
	// Line 780, Address: 0x1028b84, Func Offset: 0x54
	// Line 781, Address: 0x1028b90, Func Offset: 0x60
	// Line 783, Address: 0x1028bac, Func Offset: 0x7c
	// Line 784, Address: 0x1028bb8, Func Offset: 0x88
	// Line 785, Address: 0x1028bcc, Func Offset: 0x9c
	// Line 786, Address: 0x1028bd8, Func Offset: 0xa8
	// Line 787, Address: 0x1028bfc, Func Offset: 0xcc
	// Line 789, Address: 0x1028c04, Func Offset: 0xd4
	// Line 794, Address: 0x1028c2c, Func Offset: 0xfc
	// Func End, Address: 0x1028c40, Func Offset: 0x110
}

// 
// Start address: 0x1028c40
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 809, Address: 0x1028c40, Func Offset: 0
	// Line 813, Address: 0x1028c50, Func Offset: 0x10
	// Line 815, Address: 0x1028c60, Func Offset: 0x20
	// Line 816, Address: 0x1028c68, Func Offset: 0x28
	// Line 817, Address: 0x1028c9c, Func Offset: 0x5c
	// Line 818, Address: 0x1028ca4, Func Offset: 0x64
	// Line 819, Address: 0x1028cb8, Func Offset: 0x78
	// Line 820, Address: 0x1028cdc, Func Offset: 0x9c
	// Line 821, Address: 0x1028cf0, Func Offset: 0xb0
	// Line 822, Address: 0x1028cf8, Func Offset: 0xb8
	// Line 827, Address: 0x1028d0c, Func Offset: 0xcc
	// Func End, Address: 0x1028d24, Func Offset: 0xe4
}

// 
// Start address: 0x1028d30
void scrh_move()
{
	short xwk;
	// Line 844, Address: 0x1028d30, Func Offset: 0
	// Line 847, Address: 0x1028d38, Func Offset: 0x8
	// Line 848, Address: 0x1028d80, Func Offset: 0x50
	// Line 850, Address: 0x1028d90, Func Offset: 0x60
	// Line 851, Address: 0x1028d98, Func Offset: 0x68
	// Line 852, Address: 0x1028da0, Func Offset: 0x70
	// Line 854, Address: 0x1028db0, Func Offset: 0x80
	// Line 855, Address: 0x1028dc4, Func Offset: 0x94
	// Line 859, Address: 0x1028dd0, Func Offset: 0xa0
	// Line 860, Address: 0x1028de4, Func Offset: 0xb4
	// Line 861, Address: 0x1028e08, Func Offset: 0xd8
	// Line 863, Address: 0x1028e18, Func Offset: 0xe8
	// Line 865, Address: 0x1028e20, Func Offset: 0xf0
	// Line 866, Address: 0x1028e34, Func Offset: 0x104
	// Line 870, Address: 0x1028e40, Func Offset: 0x110
	// Line 871, Address: 0x1028e54, Func Offset: 0x124
	// Line 872, Address: 0x1028e78, Func Offset: 0x148
	// Line 877, Address: 0x1028e88, Func Offset: 0x158
	// Line 878, Address: 0x1028eb8, Func Offset: 0x188
	// Line 879, Address: 0x1028ec0, Func Offset: 0x190
	// Func End, Address: 0x1028ed0, Func Offset: 0x1a0
}

// 
// Start address: 0x1028ed0
void scroll_v()
{
	short ywk;
	// Line 894, Address: 0x1028ed0, Func Offset: 0
	// Line 897, Address: 0x1028edc, Func Offset: 0xc
	// Line 898, Address: 0x1028f10, Func Offset: 0x40
	// Line 899, Address: 0x1028f28, Func Offset: 0x58
	// Line 903, Address: 0x1028f34, Func Offset: 0x64
	// Line 904, Address: 0x1028f4c, Func Offset: 0x7c
	// Line 905, Address: 0x1028f58, Func Offset: 0x88
	// Line 906, Address: 0x1028f7c, Func Offset: 0xac
	// Line 907, Address: 0x1028f90, Func Offset: 0xc0
	// Line 908, Address: 0x1028f9c, Func Offset: 0xcc
	// Line 909, Address: 0x1028fa4, Func Offset: 0xd4
	// Line 910, Address: 0x1028fcc, Func Offset: 0xfc
	// Line 911, Address: 0x1028ff4, Func Offset: 0x124
	// Line 912, Address: 0x1029000, Func Offset: 0x130
	// Line 914, Address: 0x1029008, Func Offset: 0x138
	// Line 915, Address: 0x1029030, Func Offset: 0x160
	// Line 916, Address: 0x1029040, Func Offset: 0x170
	// Line 917, Address: 0x1029048, Func Offset: 0x178
	// Line 922, Address: 0x1029050, Func Offset: 0x180
	// Line 923, Address: 0x102907c, Func Offset: 0x1ac
	// Line 924, Address: 0x1029088, Func Offset: 0x1b8
	// Line 925, Address: 0x1029090, Func Offset: 0x1c0
	// Line 926, Address: 0x10290a0, Func Offset: 0x1d0
	// Line 927, Address: 0x10290a8, Func Offset: 0x1d8
	// Line 932, Address: 0x10290b0, Func Offset: 0x1e0
	// Line 933, Address: 0x10290b8, Func Offset: 0x1e8
	// Func End, Address: 0x10290cc, Func Offset: 0x1fc
}

// 
// Start address: 0x10290d0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 947, Address: 0x10290d0, Func Offset: 0
	// Line 950, Address: 0x10290e0, Func Offset: 0x10
	// Line 951, Address: 0x10290fc, Func Offset: 0x2c
	// Line 952, Address: 0x1029114, Func Offset: 0x44
	// Line 953, Address: 0x1029138, Func Offset: 0x68
	// Line 954, Address: 0x1029140, Func Offset: 0x70
	// Line 958, Address: 0x1029150, Func Offset: 0x80
	// Line 959, Address: 0x1029164, Func Offset: 0x94
	// Line 960, Address: 0x1029170, Func Offset: 0xa0
	// Line 963, Address: 0x1029178, Func Offset: 0xa8
	// Line 964, Address: 0x1029190, Func Offset: 0xc0
	// Line 965, Address: 0x102919c, Func Offset: 0xcc
	// Line 966, Address: 0x10291bc, Func Offset: 0xec
	// Line 967, Address: 0x10291c8, Func Offset: 0xf8
	// Line 968, Address: 0x10291d0, Func Offset: 0x100
	// Line 970, Address: 0x10291dc, Func Offset: 0x10c
	// Line 972, Address: 0x10291e4, Func Offset: 0x114
	// Line 973, Address: 0x10291fc, Func Offset: 0x12c
	// Line 974, Address: 0x1029208, Func Offset: 0x138
	// Line 975, Address: 0x1029228, Func Offset: 0x158
	// Line 976, Address: 0x1029234, Func Offset: 0x164
	// Line 977, Address: 0x102923c, Func Offset: 0x16c
	// Line 980, Address: 0x1029248, Func Offset: 0x178
	// Func End, Address: 0x102925c, Func Offset: 0x18c
}

// 
// Start address: 0x1029260
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 994, Address: 0x1029260, Func Offset: 0
	// Line 997, Address: 0x1029270, Func Offset: 0x10
	// Line 999, Address: 0x102927c, Func Offset: 0x1c
	// Line 1000, Address: 0x1029294, Func Offset: 0x34
	// Line 1001, Address: 0x10292a0, Func Offset: 0x40
	// Line 1002, Address: 0x10292c0, Func Offset: 0x60
	// Line 1003, Address: 0x10292cc, Func Offset: 0x6c
	// Line 1004, Address: 0x10292d4, Func Offset: 0x74
	// Line 1006, Address: 0x10292e0, Func Offset: 0x80
	// Func End, Address: 0x10292f4, Func Offset: 0x94
}

// 
// Start address: 0x1029300
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1021, Address: 0x1029300, Func Offset: 0
	// Line 1024, Address: 0x102930c, Func Offset: 0xc
	// Line 1025, Address: 0x1029310, Func Offset: 0x10
	// Line 1026, Address: 0x102933c, Func Offset: 0x3c
	// Line 1027, Address: 0x1029350, Func Offset: 0x50
	// Line 1028, Address: 0x102935c, Func Offset: 0x5c
	// Line 1029, Address: 0x1029364, Func Offset: 0x64
	// Line 1031, Address: 0x1029370, Func Offset: 0x70
	// Func End, Address: 0x1029380, Func Offset: 0x80
}

// 
// Start address: 0x1029380
void sv_move_sub2()
{
	// Line 1035, Address: 0x1029380, Func Offset: 0
	// Line 1036, Address: 0x1029388, Func Offset: 0x8
	// Line 1038, Address: 0x1029390, Func Offset: 0x10
	// Line 1039, Address: 0x102939c, Func Offset: 0x1c
	// Func End, Address: 0x10293ac, Func Offset: 0x2c
}

// 
// Start address: 0x10293b0
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1053, Address: 0x10293b0, Func Offset: 0
	// Line 1056, Address: 0x10293bc, Func Offset: 0xc
	// Line 1057, Address: 0x10293e0, Func Offset: 0x30
	// Line 1058, Address: 0x1029404, Func Offset: 0x54
	// Line 1059, Address: 0x1029410, Func Offset: 0x60
	// Func End, Address: 0x1029420, Func Offset: 0x70
}

// 
// Start address: 0x1029420
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1074, Address: 0x1029420, Func Offset: 0
	// Line 1075, Address: 0x102942c, Func Offset: 0xc
	// Line 1076, Address: 0x1029454, Func Offset: 0x34
	// Line 1078, Address: 0x102946c, Func Offset: 0x4c
	// Line 1079, Address: 0x1029478, Func Offset: 0x58
	// Line 1080, Address: 0x1029480, Func Offset: 0x60
	// Line 1081, Address: 0x102948c, Func Offset: 0x6c
	// Line 1082, Address: 0x10294a0, Func Offset: 0x80
	// Line 1083, Address: 0x10294b4, Func Offset: 0x94
	// Line 1087, Address: 0x10294c8, Func Offset: 0xa8
	// Line 1088, Address: 0x10294d4, Func Offset: 0xb4
	// Func End, Address: 0x10294e4, Func Offset: 0xc4
}

// 
// Start address: 0x10294f0
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1102, Address: 0x10294f0, Func Offset: 0
	// Line 1105, Address: 0x10294fc, Func Offset: 0xc
	// Line 1106, Address: 0x102951c, Func Offset: 0x2c
	// Line 1107, Address: 0x1029540, Func Offset: 0x50
	// Line 1108, Address: 0x102954c, Func Offset: 0x5c
	// Func End, Address: 0x102955c, Func Offset: 0x6c
}

// 
// Start address: 0x1029560
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1123, Address: 0x1029560, Func Offset: 0
	// Line 1124, Address: 0x102956c, Func Offset: 0xc
	// Line 1125, Address: 0x1029594, Func Offset: 0x34
	// Line 1127, Address: 0x10295ac, Func Offset: 0x4c
	// Line 1128, Address: 0x10295b8, Func Offset: 0x58
	// Line 1129, Address: 0x10295c0, Func Offset: 0x60
	// Line 1130, Address: 0x10295cc, Func Offset: 0x6c
	// Line 1131, Address: 0x10295e0, Func Offset: 0x80
	// Line 1132, Address: 0x10295f4, Func Offset: 0x94
	// Line 1136, Address: 0x1029608, Func Offset: 0xa8
	// Line 1137, Address: 0x1029614, Func Offset: 0xb4
	// Func End, Address: 0x1029624, Func Offset: 0xc4
}

// 
// Start address: 0x1029630
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1154, Address: 0x1029630, Func Offset: 0
	// Line 1158, Address: 0x1029640, Func Offset: 0x10
	// Line 1159, Address: 0x1029650, Func Offset: 0x20
	// Line 1160, Address: 0x1029674, Func Offset: 0x44
	// Line 1161, Address: 0x1029688, Func Offset: 0x58
	// Line 1162, Address: 0x10296a0, Func Offset: 0x70
	// Line 1164, Address: 0x10296ac, Func Offset: 0x7c
	// Line 1166, Address: 0x10296b8, Func Offset: 0x88
	// Line 1167, Address: 0x10296f4, Func Offset: 0xc4
	// Line 1168, Address: 0x10296fc, Func Offset: 0xcc
	// Line 1169, Address: 0x1029710, Func Offset: 0xe0
	// Line 1170, Address: 0x102973c, Func Offset: 0x10c
	// Line 1171, Address: 0x102974c, Func Offset: 0x11c
	// Line 1172, Address: 0x1029760, Func Offset: 0x130
	// Line 1173, Address: 0x1029768, Func Offset: 0x138
	// Line 1178, Address: 0x102977c, Func Offset: 0x14c
	// Func End, Address: 0x1029790, Func Offset: 0x160
}

// 
// Start address: 0x1029790
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
	// Line 1196, Address: 0x1029790, Func Offset: 0
	// Line 1205, Address: 0x10297b0, Func Offset: 0x20
	// Line 1206, Address: 0x10297b4, Func Offset: 0x24
	// Line 1207, Address: 0x10297c0, Func Offset: 0x30
	// Line 1208, Address: 0x10297cc, Func Offset: 0x3c
	// Line 1209, Address: 0x10297d4, Func Offset: 0x44
	// Line 1210, Address: 0x10297dc, Func Offset: 0x4c
	// Line 1212, Address: 0x10297f0, Func Offset: 0x60
	// Line 1213, Address: 0x10297f4, Func Offset: 0x64
	// Line 1214, Address: 0x1029800, Func Offset: 0x70
	// Line 1215, Address: 0x102980c, Func Offset: 0x7c
	// Line 1216, Address: 0x1029814, Func Offset: 0x84
	// Line 1218, Address: 0x102981c, Func Offset: 0x8c
	// Line 1219, Address: 0x1029828, Func Offset: 0x98
	// Line 1220, Address: 0x102983c, Func Offset: 0xac
	// Line 1222, Address: 0x1029848, Func Offset: 0xb8
	// Line 1223, Address: 0x1029850, Func Offset: 0xc0
	// Line 1225, Address: 0x1029858, Func Offset: 0xc8
	// Line 1227, Address: 0x1029878, Func Offset: 0xe8
	// Line 1233, Address: 0x10298a4, Func Offset: 0x114
	// Line 1234, Address: 0x10298b8, Func Offset: 0x128
	// Line 1236, Address: 0x10298c4, Func Offset: 0x134
	// Line 1237, Address: 0x10298cc, Func Offset: 0x13c
	// Line 1238, Address: 0x10298d4, Func Offset: 0x144
	// Line 1240, Address: 0x10298f4, Func Offset: 0x164
	// Line 1246, Address: 0x1029920, Func Offset: 0x190
	// Line 1247, Address: 0x1029934, Func Offset: 0x1a4
	// Line 1249, Address: 0x1029940, Func Offset: 0x1b0
	// Line 1250, Address: 0x1029948, Func Offset: 0x1b8
	// Line 1251, Address: 0x1029950, Func Offset: 0x1c0
	// Line 1253, Address: 0x1029970, Func Offset: 0x1e0
	// Line 1259, Address: 0x102999c, Func Offset: 0x20c
	// Line 1260, Address: 0x10299b0, Func Offset: 0x220
	// Line 1262, Address: 0x10299bc, Func Offset: 0x22c
	// Line 1263, Address: 0x10299c4, Func Offset: 0x234
	// Line 1264, Address: 0x10299cc, Func Offset: 0x23c
	// Line 1266, Address: 0x10299ec, Func Offset: 0x25c
	// Line 1275, Address: 0x1029a18, Func Offset: 0x288
	// Func End, Address: 0x1029a40, Func Offset: 0x2b0
}

// 
// Start address: 0x1029a40
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
	// Line 1292, Address: 0x1029a40, Func Offset: 0
	// Line 1303, Address: 0x1029a6c, Func Offset: 0x2c
	// Line 1305, Address: 0x1029a74, Func Offset: 0x34
	// Line 1306, Address: 0x1029a8c, Func Offset: 0x4c
	// Line 1307, Address: 0x1029aa0, Func Offset: 0x60
	// Line 1309, Address: 0x1029aa8, Func Offset: 0x68
	// Line 1311, Address: 0x1029abc, Func Offset: 0x7c
	// Line 1312, Address: 0x1029ad4, Func Offset: 0x94
	// Line 1313, Address: 0x1029ae8, Func Offset: 0xa8
	// Line 1314, Address: 0x1029af0, Func Offset: 0xb0
	// Line 1316, Address: 0x1029af8, Func Offset: 0xb8
	// Line 1317, Address: 0x1029b0c, Func Offset: 0xcc
	// Line 1322, Address: 0x1029b14, Func Offset: 0xd4
	// Line 1323, Address: 0x1029b64, Func Offset: 0x124
	// Line 1324, Address: 0x1029b6c, Func Offset: 0x12c
	// Line 1330, Address: 0x1029b8c, Func Offset: 0x14c
	// Line 1331, Address: 0x1029bac, Func Offset: 0x16c
	// Line 1332, Address: 0x1029bd0, Func Offset: 0x190
	// Line 1333, Address: 0x1029bdc, Func Offset: 0x19c
	// Line 1334, Address: 0x1029be4, Func Offset: 0x1a4
	// Line 1336, Address: 0x1029c04, Func Offset: 0x1c4
	// Line 1340, Address: 0x1029c30, Func Offset: 0x1f0
	// Line 1343, Address: 0x1029c38, Func Offset: 0x1f8
	// Line 1344, Address: 0x1029c3c, Func Offset: 0x1fc
	// Line 1348, Address: 0x1029c5c, Func Offset: 0x21c
	// Line 1355, Address: 0x1029c88, Func Offset: 0x248
	// Line 1362, Address: 0x1029c9c, Func Offset: 0x25c
	// Line 1363, Address: 0x1029ca4, Func Offset: 0x264
	// Line 1364, Address: 0x1029cac, Func Offset: 0x26c
	// Line 1365, Address: 0x1029cc4, Func Offset: 0x284
	// Line 1366, Address: 0x1029ce4, Func Offset: 0x2a4
	// Line 1370, Address: 0x1029cec, Func Offset: 0x2ac
	// Line 1372, Address: 0x1029d1c, Func Offset: 0x2dc
	// Line 1373, Address: 0x1029d28, Func Offset: 0x2e8
	// Line 1377, Address: 0x1029d38, Func Offset: 0x2f8
	// Line 1378, Address: 0x1029d44, Func Offset: 0x304
	// Line 1379, Address: 0x1029d64, Func Offset: 0x324
	// Line 1380, Address: 0x1029d9c, Func Offset: 0x35c
	// Line 1381, Address: 0x1029dbc, Func Offset: 0x37c
	// Line 1383, Address: 0x1029de0, Func Offset: 0x3a0
	// Line 1386, Address: 0x1029e04, Func Offset: 0x3c4
	// Line 1388, Address: 0x1029e24, Func Offset: 0x3e4
	// Line 1390, Address: 0x1029e38, Func Offset: 0x3f8
	// Line 1391, Address: 0x1029e44, Func Offset: 0x404
	// Line 1392, Address: 0x1029e54, Func Offset: 0x414
	// Line 1394, Address: 0x1029e5c, Func Offset: 0x41c
	// Func End, Address: 0x1029e84, Func Offset: 0x444
}

// 
// Start address: 0x1029e90
void scrollwrtc()
{
	// Line 1400, Address: 0x1029e90, Func Offset: 0
	// Func End, Address: 0x1029e98, Func Offset: 0x8
}

// 
// Start address: 0x1029ea0
void scrollwrtz()
{
	// Line 1405, Address: 0x1029ea0, Func Offset: 0
	// Func End, Address: 0x1029ea8, Func Offset: 0x8
}

// 
// Start address: 0x1029eb0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1423, Address: 0x1029eb0, Func Offset: 0
	// Line 1436, Address: 0x1029ed8, Func Offset: 0x28
	// Line 1439, Address: 0x1029ef8, Func Offset: 0x48
	// Line 1440, Address: 0x1029f0c, Func Offset: 0x5c
	// Line 1441, Address: 0x1029f20, Func Offset: 0x70
	// Line 1442, Address: 0x1029f34, Func Offset: 0x84
	// Line 1444, Address: 0x1029f48, Func Offset: 0x98
	// Line 1445, Address: 0x1029f54, Func Offset: 0xa4
	// Line 1446, Address: 0x1029f68, Func Offset: 0xb8
	// Func End, Address: 0x1029f78, Func Offset: 0xc8
}

// 
// Start address: 0x1029f80
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1450, Address: 0x1029f80, Func Offset: 0
	// Line 1454, Address: 0x1029fa8, Func Offset: 0x28
	// Line 1457, Address: 0x1029fc8, Func Offset: 0x48
	// Line 1458, Address: 0x1029fdc, Func Offset: 0x5c
	// Line 1459, Address: 0x1029ff0, Func Offset: 0x70
	// Line 1460, Address: 0x102a004, Func Offset: 0x84
	// Line 1462, Address: 0x102a018, Func Offset: 0x98
	// Line 1463, Address: 0x102a024, Func Offset: 0xa4
	// Line 1464, Address: 0x102a038, Func Offset: 0xb8
	// Func End, Address: 0x102a048, Func Offset: 0xc8
}

// 
// Start address: 0x102a050
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1484, Address: 0x102a050, Func Offset: 0
	// Line 1488, Address: 0x102a078, Func Offset: 0x28
	// Line 1491, Address: 0x102a098, Func Offset: 0x48
	// Line 1492, Address: 0x102a0ac, Func Offset: 0x5c
	// Line 1493, Address: 0x102a0bc, Func Offset: 0x6c
	// Line 1494, Address: 0x102a0d0, Func Offset: 0x80
	// Line 1496, Address: 0x102a0e0, Func Offset: 0x90
	// Line 1497, Address: 0x102a0ec, Func Offset: 0x9c
	// Line 1498, Address: 0x102a100, Func Offset: 0xb0
	// Func End, Address: 0x102a110, Func Offset: 0xc0
}

// 
// Start address: 0x102a110
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
	// Line 1517, Address: 0x102a110, Func Offset: 0
	// Line 1523, Address: 0x102a144, Func Offset: 0x34
	// Line 1525, Address: 0x102a154, Func Offset: 0x44
	// Line 1526, Address: 0x102a158, Func Offset: 0x48
	// Line 1527, Address: 0x102a160, Func Offset: 0x50
	// Line 1529, Address: 0x102a170, Func Offset: 0x60
	// Line 1531, Address: 0x102a174, Func Offset: 0x64
	// Line 1532, Address: 0x102a17c, Func Offset: 0x6c
	// Line 1535, Address: 0x102a184, Func Offset: 0x74
	// Line 1536, Address: 0x102a18c, Func Offset: 0x7c
	// Line 1537, Address: 0x102a198, Func Offset: 0x88
	// Line 1539, Address: 0x102a1a4, Func Offset: 0x94
	// Line 1540, Address: 0x102a1ac, Func Offset: 0x9c
	// Line 1541, Address: 0x102a1b4, Func Offset: 0xa4
	// Line 1542, Address: 0x102a1bc, Func Offset: 0xac
	// Line 1544, Address: 0x102a1c8, Func Offset: 0xb8
	// Line 1545, Address: 0x102a1d0, Func Offset: 0xc0
	// Line 1546, Address: 0x102a1d8, Func Offset: 0xc8
	// Line 1547, Address: 0x102a1e0, Func Offset: 0xd0
	// Line 1549, Address: 0x102a1ec, Func Offset: 0xdc
	// Line 1550, Address: 0x102a1f4, Func Offset: 0xe4
	// Line 1551, Address: 0x102a1fc, Func Offset: 0xec
	// Line 1554, Address: 0x102a204, Func Offset: 0xf4
	// Line 1555, Address: 0x102a20c, Func Offset: 0xfc
	// Line 1558, Address: 0x102a214, Func Offset: 0x104
	// Line 1559, Address: 0x102a258, Func Offset: 0x148
	// Line 1560, Address: 0x102a29c, Func Offset: 0x18c
	// Line 1561, Address: 0x102a2e0, Func Offset: 0x1d0
	// Line 1563, Address: 0x102a324, Func Offset: 0x214
	// Func End, Address: 0x102a354, Func Offset: 0x244
}

// 
// Start address: 0x102a360
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1581, Address: 0x102a360, Func Offset: 0
	// Line 1582, Address: 0x102a380, Func Offset: 0x20
	// Line 1583, Address: 0x102a3a0, Func Offset: 0x40
	// Func End, Address: 0x102a3b0, Func Offset: 0x50
}

// 
// Start address: 0x102a3b0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1585, Address: 0x102a3b0, Func Offset: 0
	// Line 1586, Address: 0x102a3d0, Func Offset: 0x20
	// Line 1587, Address: 0x102a3d4, Func Offset: 0x24
	// Line 1588, Address: 0x102a3f4, Func Offset: 0x44
	// Func End, Address: 0x102a404, Func Offset: 0x54
}

// 
// Start address: 0x102a410
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1595, Address: 0x102a410, Func Offset: 0
	// Line 1601, Address: 0x102a440, Func Offset: 0x30
	// Line 1602, Address: 0x102a450, Func Offset: 0x40
	// Line 1608, Address: 0x102a460, Func Offset: 0x50
	// Line 1609, Address: 0x102a47c, Func Offset: 0x6c
	// Line 1610, Address: 0x102a480, Func Offset: 0x70
	// Line 1611, Address: 0x102a49c, Func Offset: 0x8c
	// Line 1612, Address: 0x102a4a0, Func Offset: 0x90
	// Line 1613, Address: 0x102a4c0, Func Offset: 0xb0
	// Line 1614, Address: 0x102a4c8, Func Offset: 0xb8
	// Line 1615, Address: 0x102a4e8, Func Offset: 0xd8
	// Line 1616, Address: 0x102a4f0, Func Offset: 0xe0
	// Line 1617, Address: 0x102a538, Func Offset: 0x128
	// Line 1619, Address: 0x102a544, Func Offset: 0x134
	// Line 1621, Address: 0x102a560, Func Offset: 0x150
	// Line 1626, Address: 0x102a568, Func Offset: 0x158
	// Line 1627, Address: 0x102a574, Func Offset: 0x164
	// Line 1630, Address: 0x102a580, Func Offset: 0x170
	// Line 1631, Address: 0x102a588, Func Offset: 0x178
	// Line 1632, Address: 0x102a5a8, Func Offset: 0x198
	// Line 1633, Address: 0x102a5c4, Func Offset: 0x1b4
	// Line 1634, Address: 0x102a5cc, Func Offset: 0x1bc
	// Line 1635, Address: 0x102a5ec, Func Offset: 0x1dc
	// Line 1637, Address: 0x102a608, Func Offset: 0x1f8
	// Line 1638, Address: 0x102a610, Func Offset: 0x200
	// Line 1639, Address: 0x102a618, Func Offset: 0x208
	// Line 1640, Address: 0x102a624, Func Offset: 0x214
	// Line 1641, Address: 0x102a63c, Func Offset: 0x22c
	// Line 1643, Address: 0x102a64c, Func Offset: 0x23c
	// Line 1646, Address: 0x102a658, Func Offset: 0x248
	// Line 1647, Address: 0x102a660, Func Offset: 0x250
	// Line 1648, Address: 0x102a664, Func Offset: 0x254
	// Func End, Address: 0x102a684, Func Offset: 0x274
}

// 
// Start address: 0x102a690
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1668, Address: 0x102a690, Func Offset: 0
	// Line 1676, Address: 0x102a6b8, Func Offset: 0x28
	// Line 1677, Address: 0x102a71c, Func Offset: 0x8c
	// Line 1683, Address: 0x102a724, Func Offset: 0x94
	// Line 1684, Address: 0x102a72c, Func Offset: 0x9c
	// Line 1685, Address: 0x102a74c, Func Offset: 0xbc
	// Line 1686, Address: 0x102a768, Func Offset: 0xd8
	// Line 1687, Address: 0x102a770, Func Offset: 0xe0
	// Line 1688, Address: 0x102a790, Func Offset: 0x100
	// Line 1691, Address: 0x102a7ac, Func Offset: 0x11c
	// Line 1692, Address: 0x102a7b4, Func Offset: 0x124
	// Line 1693, Address: 0x102a7bc, Func Offset: 0x12c
	// Line 1694, Address: 0x102a7c8, Func Offset: 0x138
	// Line 1695, Address: 0x102a7e0, Func Offset: 0x150
	// Line 1696, Address: 0x102a7e8, Func Offset: 0x158
	// Line 1701, Address: 0x102a7f8, Func Offset: 0x168
	// Line 1704, Address: 0x102a804, Func Offset: 0x174
	// Line 1705, Address: 0x102a80c, Func Offset: 0x17c
	// Line 1706, Address: 0x102a810, Func Offset: 0x180
	// Func End, Address: 0x102a82c, Func Offset: 0x19c
}

// 
// Start address: 0x102a830
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1720, Address: 0x102a830, Func Offset: 0
	// Line 1727, Address: 0x102a84c, Func Offset: 0x1c
	// Line 1728, Address: 0x102a850, Func Offset: 0x20
	// Line 1729, Address: 0x102a858, Func Offset: 0x28
	// Line 1730, Address: 0x102a87c, Func Offset: 0x4c
	// Line 1731, Address: 0x102a888, Func Offset: 0x58
	// Line 1732, Address: 0x102a8a0, Func Offset: 0x70
	// Line 1733, Address: 0x102a8b4, Func Offset: 0x84
	// Line 1738, Address: 0x102a8cc, Func Offset: 0x9c
	// Func End, Address: 0x102a8e4, Func Offset: 0xb4
}

// 
// Start address: 0x102a8f0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1752, Address: 0x102a8f0, Func Offset: 0
	// Line 1753, Address: 0x102a8fc, Func Offset: 0xc
	// Line 1754, Address: 0x102a928, Func Offset: 0x38
	// Line 1755, Address: 0x102a974, Func Offset: 0x84
	// Line 1756, Address: 0x102a9a0, Func Offset: 0xb0
	// Line 1758, Address: 0x102a9ec, Func Offset: 0xfc
	// Line 1764, Address: 0x102a9f8, Func Offset: 0x108
	// Line 1765, Address: 0x102a9fc, Func Offset: 0x10c
	// Func End, Address: 0x102aa08, Func Offset: 0x118
}

// 
// Start address: 0x102aa10
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1782, Address: 0x102aa10, Func Offset: 0
	// Line 1783, Address: 0x102aa2c, Func Offset: 0x1c
	// Line 1785, Address: 0x102aa48, Func Offset: 0x38
	// Func End, Address: 0x102aa58, Func Offset: 0x48
}

// 
// Start address: 0x102aa60
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1787, Address: 0x102aa60, Func Offset: 0
	// Line 1788, Address: 0x102aa7c, Func Offset: 0x1c
	// Line 1789, Address: 0x102aa80, Func Offset: 0x20
	// Line 1791, Address: 0x102aa9c, Func Offset: 0x3c
	// Func End, Address: 0x102aaac, Func Offset: 0x4c
}

// 
// Start address: 0x102aab0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1793, Address: 0x102aab0, Func Offset: 0
	// Line 1794, Address: 0x102aac4, Func Offset: 0x14
	// Line 1796, Address: 0x102aae0, Func Offset: 0x30
	// Func End, Address: 0x102aaf0, Func Offset: 0x40
}

// 
// Start address: 0x102aaf0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1798, Address: 0x102aaf0, Func Offset: 0
	// Line 1799, Address: 0x102ab0c, Func Offset: 0x1c
	// Line 1801, Address: 0x102ab28, Func Offset: 0x38
	// Func End, Address: 0x102ab38, Func Offset: 0x48
}

// 
// Start address: 0x102ab40
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1803, Address: 0x102ab40, Func Offset: 0
	// Line 1804, Address: 0x102ab58, Func Offset: 0x18
	// Line 1805, Address: 0x102ab68, Func Offset: 0x28
	// Line 1806, Address: 0x102ab78, Func Offset: 0x38
	// Line 1807, Address: 0x102ab84, Func Offset: 0x44
	// Line 1809, Address: 0x102ab90, Func Offset: 0x50
	// Line 1810, Address: 0x102abbc, Func Offset: 0x7c
	// Line 1813, Address: 0x102abe8, Func Offset: 0xa8
	// Func End, Address: 0x102abf4, Func Offset: 0xb4
}

// 
// Start address: 0x102ac00
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1829, Address: 0x102ac00, Func Offset: 0
	// Line 1836, Address: 0x102ac18, Func Offset: 0x18
	// Line 1837, Address: 0x102ac24, Func Offset: 0x24
	// Line 1838, Address: 0x102ac30, Func Offset: 0x30
	// Line 1839, Address: 0x102ac38, Func Offset: 0x38
	// Line 1840, Address: 0x102ac3c, Func Offset: 0x3c
	// Line 1844, Address: 0x102ac54, Func Offset: 0x54
	// Line 1845, Address: 0x102ac5c, Func Offset: 0x5c
	// Line 1846, Address: 0x102ac60, Func Offset: 0x60
	// Line 1848, Address: 0x102ac70, Func Offset: 0x70
	// Func End, Address: 0x102ac90, Func Offset: 0x90
}

// 
// Start address: 0x102ac90
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1851, Address: 0x102ac90, Func Offset: 0
	// Line 1852, Address: 0x102aca8, Func Offset: 0x18
	// Line 1853, Address: 0x102acc8, Func Offset: 0x38
	// Func End, Address: 0x102acd8, Func Offset: 0x48
}

// 
// Start address: 0x102ace0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1858, Address: 0x102ace0, Func Offset: 0
	// Line 1862, Address: 0x102ad00, Func Offset: 0x20
	// Line 1865, Address: 0x102ad1c, Func Offset: 0x3c
	// Line 1869, Address: 0x102ad44, Func Offset: 0x64
	// Line 1870, Address: 0x102ad50, Func Offset: 0x70
	// Line 1872, Address: 0x102ad78, Func Offset: 0x98
	// Func End, Address: 0x102ad88, Func Offset: 0xa8
}

// 
// Start address: 0x102ad90
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1878, Address: 0x102ad90, Func Offset: 0
	// Line 1881, Address: 0x102adac, Func Offset: 0x1c
	// Line 1882, Address: 0x102adb4, Func Offset: 0x24
	// Line 1885, Address: 0x102adbc, Func Offset: 0x2c
	// Line 1887, Address: 0x102ade0, Func Offset: 0x50
	// Line 1888, Address: 0x102ae00, Func Offset: 0x70
	// Line 1889, Address: 0x102ae08, Func Offset: 0x78
	// Line 1890, Address: 0x102ae2c, Func Offset: 0x9c
	// Func End, Address: 0x102ae48, Func Offset: 0xb8
}

// 
// Start address: 0x102ae50
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1916, Address: 0x102ae50, Func Offset: 0
	// Line 1921, Address: 0x102ae78, Func Offset: 0x28
	// Line 1922, Address: 0x102ae88, Func Offset: 0x38
	// Line 1924, Address: 0x102aea4, Func Offset: 0x54
	// Line 1925, Address: 0x102aec8, Func Offset: 0x78
	// Line 1926, Address: 0x102aef0, Func Offset: 0xa0
	// Line 1927, Address: 0x102aefc, Func Offset: 0xac
	// Line 1928, Address: 0x102af04, Func Offset: 0xb4
	// Line 1931, Address: 0x102af20, Func Offset: 0xd0
	// Line 1935, Address: 0x102af48, Func Offset: 0xf8
	// Line 1938, Address: 0x102af50, Func Offset: 0x100
	// Line 1939, Address: 0x102af54, Func Offset: 0x104
	// Line 1943, Address: 0x102af70, Func Offset: 0x120
	// Line 1950, Address: 0x102af98, Func Offset: 0x148
	// Func End, Address: 0x102afb4, Func Offset: 0x164
}

// 
// Start address: 0x102afc0
void mapinit()
{
	// Line 1961, Address: 0x102afc0, Func Offset: 0
	// Line 1963, Address: 0x102afc8, Func Offset: 0x8
	// Line 1964, Address: 0x102afdc, Func Offset: 0x1c
	// Line 1966, Address: 0x102aff0, Func Offset: 0x30
	// Line 1967, Address: 0x102b008, Func Offset: 0x48
	// Line 1968, Address: 0x102b028, Func Offset: 0x68
	// Func End, Address: 0x102b038, Func Offset: 0x78
}

// 
// Start address: 0x102b040
void mapset()
{
	// Line 1973, Address: 0x102b040, Func Offset: 0
	// Func End, Address: 0x102b048, Func Offset: 0x8
}

// 
// Start address: 0x102b050
void divdevset()
{
	// Line 1977, Address: 0x102b050, Func Offset: 0
	// Func End, Address: 0x102b058, Func Offset: 0x8
}

// 
// Start address: 0x102b060
void enecginit()
{
	// Line 1981, Address: 0x102b060, Func Offset: 0
	// Func End, Address: 0x102b068, Func Offset: 0x8
}

