typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPOINT;
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

typedef int(*type_3)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned char type_2[4];
typedef unsigned short type_4[4];
typedef unsigned short type_5[4][1024];
typedef unsigned char type_6[33];
typedef unsigned char type_7[2];
typedef unsigned char type_8[64];
typedef unsigned char type_9[64][8];
typedef unsigned char type_10[22];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef short type_13[6];
typedef short type_14[256];
typedef _anon2* type_15[8];
typedef _anon1 type_16[128];
typedef short type_17[2];
typedef short type_18[2][1];
typedef _anon2* type_19[8];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
	};
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

struct tagPOINT
{
	int x;
	int y;
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

unsigned char z81awrttbl[33];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
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
_anon2 scra_v_posit;
_anon2 scra_h_posit;
_anon1 actwk[128];
_anon6 demoflag;
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

void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
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
// Start address: 0x102ba50
void scr_set()
{
	short* pScrTbl;
	// Line 166, Address: 0x102ba50, Func Offset: 0
	// Line 169, Address: 0x102ba5c, Func Offset: 0xc
	// Line 170, Address: 0x102ba70, Func Offset: 0x20
	// Line 171, Address: 0x102ba84, Func Offset: 0x34
	// Line 173, Address: 0x102ba8c, Func Offset: 0x3c
	// Line 174, Address: 0x102ba94, Func Offset: 0x44
	// Line 175, Address: 0x102baa0, Func Offset: 0x50
	// Line 176, Address: 0x102baa4, Func Offset: 0x54
	// Line 177, Address: 0x102bab8, Func Offset: 0x68
	// Line 178, Address: 0x102babc, Func Offset: 0x6c
	// Line 179, Address: 0x102bad0, Func Offset: 0x80
	// Line 180, Address: 0x102bad4, Func Offset: 0x84
	// Line 181, Address: 0x102bae8, Func Offset: 0x98
	// Line 182, Address: 0x102baec, Func Offset: 0x9c
	// Line 183, Address: 0x102bb00, Func Offset: 0xb0
	// Line 184, Address: 0x102bb20, Func Offset: 0xd0
	// Line 185, Address: 0x102bb24, Func Offset: 0xd4
	// Line 186, Address: 0x102bb30, Func Offset: 0xe0
	// Line 188, Address: 0x102bb3c, Func Offset: 0xec
	// Line 189, Address: 0x102bb48, Func Offset: 0xf8
	// Line 191, Address: 0x102bb54, Func Offset: 0x104
	// Line 192, Address: 0x102bb5c, Func Offset: 0x10c
	// Func End, Address: 0x102bb70, Func Offset: 0x120
}

// 
// Start address: 0x102bb70
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 230, Address: 0x102bb70, Func Offset: 0
	// Line 233, Address: 0x102bb84, Func Offset: 0x14
	// Line 234, Address: 0x102bb94, Func Offset: 0x24
	// Line 235, Address: 0x102bb9c, Func Offset: 0x2c
	// Line 237, Address: 0x102bbac, Func Offset: 0x3c
	// Line 238, Address: 0x102bbc4, Func Offset: 0x54
	// Line 239, Address: 0x102bbd4, Func Offset: 0x64
	// Line 240, Address: 0x102bbdc, Func Offset: 0x6c
	// Line 242, Address: 0x102bbe0, Func Offset: 0x70
	// Line 244, Address: 0x102bbe8, Func Offset: 0x78
	// Line 245, Address: 0x102bc08, Func Offset: 0x98
	// Line 246, Address: 0x102bc1c, Func Offset: 0xac
	// Line 250, Address: 0x102bc30, Func Offset: 0xc0
	// Line 251, Address: 0x102bc44, Func Offset: 0xd4
	// Line 252, Address: 0x102bc50, Func Offset: 0xe0
	// Line 253, Address: 0x102bc58, Func Offset: 0xe8
	// Line 257, Address: 0x102bc5c, Func Offset: 0xec
	// Line 258, Address: 0x102bc80, Func Offset: 0x110
	// Line 262, Address: 0x102bc90, Func Offset: 0x120
	// Line 264, Address: 0x102bc98, Func Offset: 0x128
	// Line 265, Address: 0x102bcac, Func Offset: 0x13c
	// Line 266, Address: 0x102bcb8, Func Offset: 0x148
	// Line 267, Address: 0x102bcc0, Func Offset: 0x150
	// Line 271, Address: 0x102bcc4, Func Offset: 0x154
	// Line 272, Address: 0x102bce8, Func Offset: 0x178
	// Line 276, Address: 0x102bcf8, Func Offset: 0x188
	// Line 278, Address: 0x102bd00, Func Offset: 0x190
	// Line 281, Address: 0x102bd10, Func Offset: 0x1a0
	// Line 282, Address: 0x102bd20, Func Offset: 0x1b0
	// Line 283, Address: 0x102bd30, Func Offset: 0x1c0
	// Line 284, Address: 0x102bd40, Func Offset: 0x1d0
	// Line 285, Address: 0x102bd50, Func Offset: 0x1e0
	// Func End, Address: 0x102bd6c, Func Offset: 0x1fc
}

// 
// Start address: 0x102bd70
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 306, Address: 0x102bd70, Func Offset: 0
	// Line 309, Address: 0x102bd7c, Func Offset: 0xc
	// Line 310, Address: 0x102bd84, Func Offset: 0x14
	// Line 312, Address: 0x102bd88, Func Offset: 0x18
	// Line 313, Address: 0x102bd94, Func Offset: 0x24
	// Line 314, Address: 0x102bda0, Func Offset: 0x30
	// Line 315, Address: 0x102bdac, Func Offset: 0x3c
	// Line 317, Address: 0x102bdb8, Func Offset: 0x48
	// Line 319, Address: 0x102bdd8, Func Offset: 0x68
	// Line 320, Address: 0x102bdf4, Func Offset: 0x84
	// Line 322, Address: 0x102be1c, Func Offset: 0xac
	// Line 323, Address: 0x102be38, Func Offset: 0xc8
	// Line 324, Address: 0x102be58, Func Offset: 0xe8
	// Func End, Address: 0x102be64, Func Offset: 0xf4
}

// 
// Start address: 0x102be70
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
	// Line 340, Address: 0x102be70, Func Offset: 0
	// Line 352, Address: 0x102be90, Func Offset: 0x20
	// Line 357, Address: 0x102bea0, Func Offset: 0x30
	// Line 359, Address: 0x102becc, Func Offset: 0x5c
	// Line 361, Address: 0x102bed4, Func Offset: 0x64
	// Line 362, Address: 0x102bedc, Func Offset: 0x6c
	// Line 364, Address: 0x102bee4, Func Offset: 0x74
	// Line 365, Address: 0x102bef4, Func Offset: 0x84
	// Line 368, Address: 0x102bf04, Func Offset: 0x94
	// Line 369, Address: 0x102bf20, Func Offset: 0xb0
	// Line 371, Address: 0x102bf30, Func Offset: 0xc0
	// Line 372, Address: 0x102bf44, Func Offset: 0xd4
	// Line 374, Address: 0x102bf54, Func Offset: 0xe4
	// Line 375, Address: 0x102bf68, Func Offset: 0xf8
	// Line 377, Address: 0x102bf78, Func Offset: 0x108
	// Line 380, Address: 0x102bf8c, Func Offset: 0x11c
	// Line 382, Address: 0x102bf9c, Func Offset: 0x12c
	// Line 384, Address: 0x102bfc4, Func Offset: 0x154
	// Line 385, Address: 0x102bffc, Func Offset: 0x18c
	// Line 387, Address: 0x102c010, Func Offset: 0x1a0
	// Line 389, Address: 0x102c018, Func Offset: 0x1a8
	// Line 390, Address: 0x102c038, Func Offset: 0x1c8
	// Line 392, Address: 0x102c044, Func Offset: 0x1d4
	// Line 393, Address: 0x102c054, Func Offset: 0x1e4
	// Line 395, Address: 0x102c064, Func Offset: 0x1f4
	// Line 396, Address: 0x102c084, Func Offset: 0x214
	// Line 398, Address: 0x102c090, Func Offset: 0x220
	// Line 399, Address: 0x102c0a0, Func Offset: 0x230
	// Line 401, Address: 0x102c0b0, Func Offset: 0x240
	// Line 402, Address: 0x102c0d0, Func Offset: 0x260
	// Line 404, Address: 0x102c0dc, Func Offset: 0x26c
	// Line 405, Address: 0x102c0ec, Func Offset: 0x27c
	// Line 407, Address: 0x102c0fc, Func Offset: 0x28c
	// Line 408, Address: 0x102c108, Func Offset: 0x298
	// Line 409, Address: 0x102c138, Func Offset: 0x2c8
	// Line 410, Address: 0x102c168, Func Offset: 0x2f8
	// Line 411, Address: 0x102c184, Func Offset: 0x314
	// Func End, Address: 0x102c1ac, Func Offset: 0x33c
}

// 
// Start address: 0x102c1b0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 432, Address: 0x102c1b0, Func Offset: 0
	// Line 436, Address: 0x102c1cc, Func Offset: 0x1c
	// Line 437, Address: 0x102c1d0, Func Offset: 0x20
	// Line 439, Address: 0x102c1f0, Func Offset: 0x40
	// Line 440, Address: 0x102c20c, Func Offset: 0x5c
	// Line 441, Address: 0x102c218, Func Offset: 0x68
	// Line 443, Address: 0x102c224, Func Offset: 0x74
	// Line 444, Address: 0x102c22c, Func Offset: 0x7c
	// Line 445, Address: 0x102c23c, Func Offset: 0x8c
	// Line 446, Address: 0x102c260, Func Offset: 0xb0
	// Line 447, Address: 0x102c280, Func Offset: 0xd0
	// Func End, Address: 0x102c294, Func Offset: 0xe4
}

// 
// Start address: 0x102c2a0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 553, Address: 0x102c2a0, Func Offset: 0
	// Line 556, Address: 0x102c2b0, Func Offset: 0x10
	// Line 557, Address: 0x102c2c0, Func Offset: 0x20
	// Line 558, Address: 0x102c2cc, Func Offset: 0x2c
	// Line 560, Address: 0x102c304, Func Offset: 0x64
	// Line 561, Address: 0x102c30c, Func Offset: 0x6c
	// Line 562, Address: 0x102c320, Func Offset: 0x80
	// Line 563, Address: 0x102c340, Func Offset: 0xa0
	// Line 564, Address: 0x102c354, Func Offset: 0xb4
	// Line 566, Address: 0x102c35c, Func Offset: 0xbc
	// Line 571, Address: 0x102c370, Func Offset: 0xd0
	// Func End, Address: 0x102c384, Func Offset: 0xe4
}

// 
// Start address: 0x102c390
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 589, Address: 0x102c390, Func Offset: 0
	// Line 593, Address: 0x102c3a4, Func Offset: 0x14
	// Line 594, Address: 0x102c3ac, Func Offset: 0x1c
	// Line 595, Address: 0x102c3b4, Func Offset: 0x24
	// Line 596, Address: 0x102c3bc, Func Offset: 0x2c
	// Line 597, Address: 0x102c3c0, Func Offset: 0x30
	// Line 598, Address: 0x102c3e4, Func Offset: 0x54
	// Line 599, Address: 0x102c3f0, Func Offset: 0x60
	// Line 601, Address: 0x102c40c, Func Offset: 0x7c
	// Line 602, Address: 0x102c418, Func Offset: 0x88
	// Line 603, Address: 0x102c42c, Func Offset: 0x9c
	// Line 604, Address: 0x102c438, Func Offset: 0xa8
	// Line 605, Address: 0x102c45c, Func Offset: 0xcc
	// Line 607, Address: 0x102c464, Func Offset: 0xd4
	// Line 612, Address: 0x102c48c, Func Offset: 0xfc
	// Func End, Address: 0x102c4a0, Func Offset: 0x110
}

// 
// Start address: 0x102c4a0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 630, Address: 0x102c4a0, Func Offset: 0
	// Line 634, Address: 0x102c4b4, Func Offset: 0x14
	// Line 635, Address: 0x102c4bc, Func Offset: 0x1c
	// Line 636, Address: 0x102c4c4, Func Offset: 0x24
	// Line 637, Address: 0x102c4cc, Func Offset: 0x2c
	// Line 638, Address: 0x102c4d0, Func Offset: 0x30
	// Line 639, Address: 0x102c4f4, Func Offset: 0x54
	// Line 640, Address: 0x102c500, Func Offset: 0x60
	// Line 642, Address: 0x102c51c, Func Offset: 0x7c
	// Line 643, Address: 0x102c528, Func Offset: 0x88
	// Line 644, Address: 0x102c53c, Func Offset: 0x9c
	// Line 645, Address: 0x102c548, Func Offset: 0xa8
	// Line 646, Address: 0x102c56c, Func Offset: 0xcc
	// Line 648, Address: 0x102c574, Func Offset: 0xd4
	// Line 653, Address: 0x102c59c, Func Offset: 0xfc
	// Func End, Address: 0x102c5b0, Func Offset: 0x110
}

// 
// Start address: 0x102c5b0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 671, Address: 0x102c5b0, Func Offset: 0
	// Line 675, Address: 0x102c5c4, Func Offset: 0x14
	// Line 676, Address: 0x102c5cc, Func Offset: 0x1c
	// Line 677, Address: 0x102c5d4, Func Offset: 0x24
	// Line 678, Address: 0x102c5dc, Func Offset: 0x2c
	// Line 679, Address: 0x102c5e0, Func Offset: 0x30
	// Line 680, Address: 0x102c604, Func Offset: 0x54
	// Line 681, Address: 0x102c610, Func Offset: 0x60
	// Line 683, Address: 0x102c62c, Func Offset: 0x7c
	// Line 684, Address: 0x102c638, Func Offset: 0x88
	// Line 685, Address: 0x102c64c, Func Offset: 0x9c
	// Line 686, Address: 0x102c658, Func Offset: 0xa8
	// Line 687, Address: 0x102c67c, Func Offset: 0xcc
	// Line 689, Address: 0x102c684, Func Offset: 0xd4
	// Line 694, Address: 0x102c6ac, Func Offset: 0xfc
	// Func End, Address: 0x102c6c0, Func Offset: 0x110
}

// 
// Start address: 0x102c6c0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 709, Address: 0x102c6c0, Func Offset: 0
	// Line 713, Address: 0x102c6d0, Func Offset: 0x10
	// Line 715, Address: 0x102c6e0, Func Offset: 0x20
	// Line 716, Address: 0x102c6e8, Func Offset: 0x28
	// Line 717, Address: 0x102c71c, Func Offset: 0x5c
	// Line 718, Address: 0x102c724, Func Offset: 0x64
	// Line 719, Address: 0x102c738, Func Offset: 0x78
	// Line 720, Address: 0x102c75c, Func Offset: 0x9c
	// Line 721, Address: 0x102c770, Func Offset: 0xb0
	// Line 722, Address: 0x102c778, Func Offset: 0xb8
	// Line 727, Address: 0x102c78c, Func Offset: 0xcc
	// Func End, Address: 0x102c7a4, Func Offset: 0xe4
}

// 
// Start address: 0x102c7b0
void scrh_move()
{
	short xwk;
	// Line 744, Address: 0x102c7b0, Func Offset: 0
	// Line 747, Address: 0x102c7b8, Func Offset: 0x8
	// Line 748, Address: 0x102c800, Func Offset: 0x50
	// Line 750, Address: 0x102c810, Func Offset: 0x60
	// Line 751, Address: 0x102c818, Func Offset: 0x68
	// Line 752, Address: 0x102c820, Func Offset: 0x70
	// Line 754, Address: 0x102c830, Func Offset: 0x80
	// Line 755, Address: 0x102c844, Func Offset: 0x94
	// Line 759, Address: 0x102c850, Func Offset: 0xa0
	// Line 760, Address: 0x102c864, Func Offset: 0xb4
	// Line 761, Address: 0x102c888, Func Offset: 0xd8
	// Line 763, Address: 0x102c898, Func Offset: 0xe8
	// Line 765, Address: 0x102c8a0, Func Offset: 0xf0
	// Line 766, Address: 0x102c8b4, Func Offset: 0x104
	// Line 770, Address: 0x102c8c0, Func Offset: 0x110
	// Line 771, Address: 0x102c8d4, Func Offset: 0x124
	// Line 772, Address: 0x102c8f8, Func Offset: 0x148
	// Line 777, Address: 0x102c908, Func Offset: 0x158
	// Line 778, Address: 0x102c938, Func Offset: 0x188
	// Line 779, Address: 0x102c940, Func Offset: 0x190
	// Func End, Address: 0x102c950, Func Offset: 0x1a0
}

// 
// Start address: 0x102c950
void scroll_v()
{
	short ywk;
	// Line 794, Address: 0x102c950, Func Offset: 0
	// Line 797, Address: 0x102c95c, Func Offset: 0xc
	// Line 798, Address: 0x102c990, Func Offset: 0x40
	// Line 799, Address: 0x102c9a8, Func Offset: 0x58
	// Line 803, Address: 0x102c9b4, Func Offset: 0x64
	// Line 804, Address: 0x102c9cc, Func Offset: 0x7c
	// Line 805, Address: 0x102c9d8, Func Offset: 0x88
	// Line 806, Address: 0x102c9fc, Func Offset: 0xac
	// Line 807, Address: 0x102ca10, Func Offset: 0xc0
	// Line 808, Address: 0x102ca1c, Func Offset: 0xcc
	// Line 809, Address: 0x102ca24, Func Offset: 0xd4
	// Line 810, Address: 0x102ca4c, Func Offset: 0xfc
	// Line 811, Address: 0x102ca74, Func Offset: 0x124
	// Line 812, Address: 0x102ca80, Func Offset: 0x130
	// Line 814, Address: 0x102ca88, Func Offset: 0x138
	// Line 815, Address: 0x102cab0, Func Offset: 0x160
	// Line 816, Address: 0x102cac0, Func Offset: 0x170
	// Line 817, Address: 0x102cac8, Func Offset: 0x178
	// Line 822, Address: 0x102cad0, Func Offset: 0x180
	// Line 823, Address: 0x102cafc, Func Offset: 0x1ac
	// Line 824, Address: 0x102cb08, Func Offset: 0x1b8
	// Line 825, Address: 0x102cb10, Func Offset: 0x1c0
	// Line 826, Address: 0x102cb20, Func Offset: 0x1d0
	// Line 827, Address: 0x102cb28, Func Offset: 0x1d8
	// Line 832, Address: 0x102cb30, Func Offset: 0x1e0
	// Line 833, Address: 0x102cb38, Func Offset: 0x1e8
	// Func End, Address: 0x102cb4c, Func Offset: 0x1fc
}

// 
// Start address: 0x102cb50
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 847, Address: 0x102cb50, Func Offset: 0
	// Line 850, Address: 0x102cb60, Func Offset: 0x10
	// Line 851, Address: 0x102cb7c, Func Offset: 0x2c
	// Line 852, Address: 0x102cb94, Func Offset: 0x44
	// Line 853, Address: 0x102cbb8, Func Offset: 0x68
	// Line 854, Address: 0x102cbc0, Func Offset: 0x70
	// Line 858, Address: 0x102cbd0, Func Offset: 0x80
	// Line 859, Address: 0x102cbe4, Func Offset: 0x94
	// Line 860, Address: 0x102cbf0, Func Offset: 0xa0
	// Line 863, Address: 0x102cbf8, Func Offset: 0xa8
	// Line 864, Address: 0x102cc10, Func Offset: 0xc0
	// Line 865, Address: 0x102cc1c, Func Offset: 0xcc
	// Line 866, Address: 0x102cc3c, Func Offset: 0xec
	// Line 867, Address: 0x102cc48, Func Offset: 0xf8
	// Line 868, Address: 0x102cc50, Func Offset: 0x100
	// Line 870, Address: 0x102cc5c, Func Offset: 0x10c
	// Line 872, Address: 0x102cc64, Func Offset: 0x114
	// Line 873, Address: 0x102cc7c, Func Offset: 0x12c
	// Line 874, Address: 0x102cc88, Func Offset: 0x138
	// Line 875, Address: 0x102cca8, Func Offset: 0x158
	// Line 876, Address: 0x102ccb4, Func Offset: 0x164
	// Line 877, Address: 0x102ccbc, Func Offset: 0x16c
	// Line 880, Address: 0x102ccc8, Func Offset: 0x178
	// Func End, Address: 0x102ccdc, Func Offset: 0x18c
}

// 
// Start address: 0x102cce0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 894, Address: 0x102cce0, Func Offset: 0
	// Line 897, Address: 0x102ccf0, Func Offset: 0x10
	// Line 899, Address: 0x102ccfc, Func Offset: 0x1c
	// Line 900, Address: 0x102cd14, Func Offset: 0x34
	// Line 901, Address: 0x102cd20, Func Offset: 0x40
	// Line 902, Address: 0x102cd40, Func Offset: 0x60
	// Line 903, Address: 0x102cd4c, Func Offset: 0x6c
	// Line 904, Address: 0x102cd54, Func Offset: 0x74
	// Line 906, Address: 0x102cd60, Func Offset: 0x80
	// Func End, Address: 0x102cd74, Func Offset: 0x94
}

// 
// Start address: 0x102cd80
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 921, Address: 0x102cd80, Func Offset: 0
	// Line 924, Address: 0x102cd8c, Func Offset: 0xc
	// Line 925, Address: 0x102cd90, Func Offset: 0x10
	// Line 926, Address: 0x102cdbc, Func Offset: 0x3c
	// Line 927, Address: 0x102cdd0, Func Offset: 0x50
	// Line 928, Address: 0x102cddc, Func Offset: 0x5c
	// Line 929, Address: 0x102cde4, Func Offset: 0x64
	// Line 931, Address: 0x102cdf0, Func Offset: 0x70
	// Func End, Address: 0x102ce00, Func Offset: 0x80
}

// 
// Start address: 0x102ce00
void sv_move_sub2()
{
	// Line 935, Address: 0x102ce00, Func Offset: 0
	// Line 936, Address: 0x102ce08, Func Offset: 0x8
	// Line 938, Address: 0x102ce10, Func Offset: 0x10
	// Line 939, Address: 0x102ce1c, Func Offset: 0x1c
	// Func End, Address: 0x102ce2c, Func Offset: 0x2c
}

// 
// Start address: 0x102ce30
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 953, Address: 0x102ce30, Func Offset: 0
	// Line 956, Address: 0x102ce3c, Func Offset: 0xc
	// Line 957, Address: 0x102ce60, Func Offset: 0x30
	// Line 958, Address: 0x102ce84, Func Offset: 0x54
	// Line 959, Address: 0x102ce90, Func Offset: 0x60
	// Func End, Address: 0x102cea0, Func Offset: 0x70
}

// 
// Start address: 0x102cea0
void scrv_up_ch(_anon2 lSpd)
{
	// Line 974, Address: 0x102cea0, Func Offset: 0
	// Line 975, Address: 0x102ceac, Func Offset: 0xc
	// Line 976, Address: 0x102ced4, Func Offset: 0x34
	// Line 978, Address: 0x102ceec, Func Offset: 0x4c
	// Line 979, Address: 0x102cef8, Func Offset: 0x58
	// Line 980, Address: 0x102cf00, Func Offset: 0x60
	// Line 981, Address: 0x102cf0c, Func Offset: 0x6c
	// Line 982, Address: 0x102cf20, Func Offset: 0x80
	// Line 983, Address: 0x102cf34, Func Offset: 0x94
	// Line 987, Address: 0x102cf48, Func Offset: 0xa8
	// Line 988, Address: 0x102cf54, Func Offset: 0xb4
	// Func End, Address: 0x102cf64, Func Offset: 0xc4
}

// 
// Start address: 0x102cf70
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1002, Address: 0x102cf70, Func Offset: 0
	// Line 1005, Address: 0x102cf7c, Func Offset: 0xc
	// Line 1006, Address: 0x102cf9c, Func Offset: 0x2c
	// Line 1007, Address: 0x102cfc0, Func Offset: 0x50
	// Line 1008, Address: 0x102cfcc, Func Offset: 0x5c
	// Func End, Address: 0x102cfdc, Func Offset: 0x6c
}

// 
// Start address: 0x102cfe0
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1023, Address: 0x102cfe0, Func Offset: 0
	// Line 1024, Address: 0x102cfec, Func Offset: 0xc
	// Line 1025, Address: 0x102d014, Func Offset: 0x34
	// Line 1027, Address: 0x102d02c, Func Offset: 0x4c
	// Line 1028, Address: 0x102d038, Func Offset: 0x58
	// Line 1029, Address: 0x102d040, Func Offset: 0x60
	// Line 1030, Address: 0x102d04c, Func Offset: 0x6c
	// Line 1031, Address: 0x102d060, Func Offset: 0x80
	// Line 1032, Address: 0x102d074, Func Offset: 0x94
	// Line 1036, Address: 0x102d088, Func Offset: 0xa8
	// Line 1037, Address: 0x102d094, Func Offset: 0xb4
	// Func End, Address: 0x102d0a4, Func Offset: 0xc4
}

// 
// Start address: 0x102d0b0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1054, Address: 0x102d0b0, Func Offset: 0
	// Line 1058, Address: 0x102d0c0, Func Offset: 0x10
	// Line 1059, Address: 0x102d0d0, Func Offset: 0x20
	// Line 1060, Address: 0x102d0f4, Func Offset: 0x44
	// Line 1061, Address: 0x102d108, Func Offset: 0x58
	// Line 1062, Address: 0x102d120, Func Offset: 0x70
	// Line 1064, Address: 0x102d12c, Func Offset: 0x7c
	// Line 1066, Address: 0x102d138, Func Offset: 0x88
	// Line 1067, Address: 0x102d174, Func Offset: 0xc4
	// Line 1068, Address: 0x102d17c, Func Offset: 0xcc
	// Line 1069, Address: 0x102d190, Func Offset: 0xe0
	// Line 1070, Address: 0x102d1bc, Func Offset: 0x10c
	// Line 1071, Address: 0x102d1cc, Func Offset: 0x11c
	// Line 1072, Address: 0x102d1e0, Func Offset: 0x130
	// Line 1073, Address: 0x102d1e8, Func Offset: 0x138
	// Line 1078, Address: 0x102d1fc, Func Offset: 0x14c
	// Func End, Address: 0x102d210, Func Offset: 0x160
}

// 
// Start address: 0x102d210
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
	// Line 1096, Address: 0x102d210, Func Offset: 0
	// Line 1105, Address: 0x102d230, Func Offset: 0x20
	// Line 1106, Address: 0x102d234, Func Offset: 0x24
	// Line 1107, Address: 0x102d240, Func Offset: 0x30
	// Line 1108, Address: 0x102d24c, Func Offset: 0x3c
	// Line 1109, Address: 0x102d254, Func Offset: 0x44
	// Line 1110, Address: 0x102d25c, Func Offset: 0x4c
	// Line 1112, Address: 0x102d270, Func Offset: 0x60
	// Line 1113, Address: 0x102d274, Func Offset: 0x64
	// Line 1114, Address: 0x102d280, Func Offset: 0x70
	// Line 1115, Address: 0x102d28c, Func Offset: 0x7c
	// Line 1116, Address: 0x102d294, Func Offset: 0x84
	// Line 1118, Address: 0x102d29c, Func Offset: 0x8c
	// Line 1119, Address: 0x102d2a8, Func Offset: 0x98
	// Line 1120, Address: 0x102d2bc, Func Offset: 0xac
	// Line 1122, Address: 0x102d2c8, Func Offset: 0xb8
	// Line 1123, Address: 0x102d2d0, Func Offset: 0xc0
	// Line 1125, Address: 0x102d2d8, Func Offset: 0xc8
	// Line 1127, Address: 0x102d2f8, Func Offset: 0xe8
	// Line 1133, Address: 0x102d324, Func Offset: 0x114
	// Line 1134, Address: 0x102d338, Func Offset: 0x128
	// Line 1136, Address: 0x102d344, Func Offset: 0x134
	// Line 1137, Address: 0x102d34c, Func Offset: 0x13c
	// Line 1138, Address: 0x102d354, Func Offset: 0x144
	// Line 1140, Address: 0x102d374, Func Offset: 0x164
	// Line 1146, Address: 0x102d3a0, Func Offset: 0x190
	// Line 1147, Address: 0x102d3b4, Func Offset: 0x1a4
	// Line 1149, Address: 0x102d3c0, Func Offset: 0x1b0
	// Line 1150, Address: 0x102d3c8, Func Offset: 0x1b8
	// Line 1151, Address: 0x102d3d0, Func Offset: 0x1c0
	// Line 1153, Address: 0x102d3f0, Func Offset: 0x1e0
	// Line 1159, Address: 0x102d41c, Func Offset: 0x20c
	// Line 1160, Address: 0x102d430, Func Offset: 0x220
	// Line 1162, Address: 0x102d43c, Func Offset: 0x22c
	// Line 1163, Address: 0x102d444, Func Offset: 0x234
	// Line 1164, Address: 0x102d44c, Func Offset: 0x23c
	// Line 1166, Address: 0x102d46c, Func Offset: 0x25c
	// Line 1175, Address: 0x102d498, Func Offset: 0x288
	// Func End, Address: 0x102d4c0, Func Offset: 0x2b0
}

// 
// Start address: 0x102d4c0
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
	// Line 1192, Address: 0x102d4c0, Func Offset: 0
	// Line 1203, Address: 0x102d4ec, Func Offset: 0x2c
	// Line 1205, Address: 0x102d4f4, Func Offset: 0x34
	// Line 1206, Address: 0x102d50c, Func Offset: 0x4c
	// Line 1207, Address: 0x102d520, Func Offset: 0x60
	// Line 1209, Address: 0x102d528, Func Offset: 0x68
	// Line 1211, Address: 0x102d53c, Func Offset: 0x7c
	// Line 1212, Address: 0x102d554, Func Offset: 0x94
	// Line 1213, Address: 0x102d568, Func Offset: 0xa8
	// Line 1214, Address: 0x102d570, Func Offset: 0xb0
	// Line 1216, Address: 0x102d578, Func Offset: 0xb8
	// Line 1217, Address: 0x102d58c, Func Offset: 0xcc
	// Line 1222, Address: 0x102d594, Func Offset: 0xd4
	// Line 1223, Address: 0x102d5e4, Func Offset: 0x124
	// Line 1224, Address: 0x102d5ec, Func Offset: 0x12c
	// Line 1230, Address: 0x102d60c, Func Offset: 0x14c
	// Line 1231, Address: 0x102d62c, Func Offset: 0x16c
	// Line 1232, Address: 0x102d650, Func Offset: 0x190
	// Line 1233, Address: 0x102d65c, Func Offset: 0x19c
	// Line 1234, Address: 0x102d664, Func Offset: 0x1a4
	// Line 1236, Address: 0x102d684, Func Offset: 0x1c4
	// Line 1240, Address: 0x102d6b0, Func Offset: 0x1f0
	// Line 1243, Address: 0x102d6b8, Func Offset: 0x1f8
	// Line 1244, Address: 0x102d6bc, Func Offset: 0x1fc
	// Line 1248, Address: 0x102d6dc, Func Offset: 0x21c
	// Line 1255, Address: 0x102d708, Func Offset: 0x248
	// Line 1262, Address: 0x102d71c, Func Offset: 0x25c
	// Line 1263, Address: 0x102d724, Func Offset: 0x264
	// Line 1264, Address: 0x102d72c, Func Offset: 0x26c
	// Line 1265, Address: 0x102d744, Func Offset: 0x284
	// Line 1266, Address: 0x102d764, Func Offset: 0x2a4
	// Line 1270, Address: 0x102d76c, Func Offset: 0x2ac
	// Line 1272, Address: 0x102d79c, Func Offset: 0x2dc
	// Line 1273, Address: 0x102d7a8, Func Offset: 0x2e8
	// Line 1277, Address: 0x102d7b8, Func Offset: 0x2f8
	// Line 1278, Address: 0x102d7c4, Func Offset: 0x304
	// Line 1279, Address: 0x102d7e4, Func Offset: 0x324
	// Line 1280, Address: 0x102d81c, Func Offset: 0x35c
	// Line 1281, Address: 0x102d83c, Func Offset: 0x37c
	// Line 1283, Address: 0x102d860, Func Offset: 0x3a0
	// Line 1286, Address: 0x102d884, Func Offset: 0x3c4
	// Line 1288, Address: 0x102d8a4, Func Offset: 0x3e4
	// Line 1290, Address: 0x102d8b8, Func Offset: 0x3f8
	// Line 1291, Address: 0x102d8c4, Func Offset: 0x404
	// Line 1292, Address: 0x102d8d4, Func Offset: 0x414
	// Line 1294, Address: 0x102d8dc, Func Offset: 0x41c
	// Func End, Address: 0x102d904, Func Offset: 0x444
}

// 
// Start address: 0x102d910
void scrollwrtc()
{
	// Line 1300, Address: 0x102d910, Func Offset: 0
	// Func End, Address: 0x102d918, Func Offset: 0x8
}

// 
// Start address: 0x102d920
void scrollwrtz()
{
	// Line 1305, Address: 0x102d920, Func Offset: 0
	// Func End, Address: 0x102d928, Func Offset: 0x8
}

// 
// Start address: 0x102d930
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1323, Address: 0x102d930, Func Offset: 0
	// Line 1336, Address: 0x102d958, Func Offset: 0x28
	// Line 1339, Address: 0x102d978, Func Offset: 0x48
	// Line 1340, Address: 0x102d98c, Func Offset: 0x5c
	// Line 1341, Address: 0x102d9a0, Func Offset: 0x70
	// Line 1342, Address: 0x102d9b4, Func Offset: 0x84
	// Line 1344, Address: 0x102d9c8, Func Offset: 0x98
	// Line 1345, Address: 0x102d9d4, Func Offset: 0xa4
	// Line 1346, Address: 0x102d9e8, Func Offset: 0xb8
	// Func End, Address: 0x102d9f8, Func Offset: 0xc8
}

// 
// Start address: 0x102da00
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1350, Address: 0x102da00, Func Offset: 0
	// Line 1354, Address: 0x102da28, Func Offset: 0x28
	// Line 1357, Address: 0x102da48, Func Offset: 0x48
	// Line 1358, Address: 0x102da5c, Func Offset: 0x5c
	// Line 1359, Address: 0x102da70, Func Offset: 0x70
	// Line 1360, Address: 0x102da84, Func Offset: 0x84
	// Line 1362, Address: 0x102da98, Func Offset: 0x98
	// Line 1363, Address: 0x102daa4, Func Offset: 0xa4
	// Line 1364, Address: 0x102dab8, Func Offset: 0xb8
	// Func End, Address: 0x102dac8, Func Offset: 0xc8
}

// 
// Start address: 0x102dad0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1384, Address: 0x102dad0, Func Offset: 0
	// Line 1388, Address: 0x102daf8, Func Offset: 0x28
	// Line 1391, Address: 0x102db18, Func Offset: 0x48
	// Line 1392, Address: 0x102db2c, Func Offset: 0x5c
	// Line 1393, Address: 0x102db3c, Func Offset: 0x6c
	// Line 1394, Address: 0x102db50, Func Offset: 0x80
	// Line 1396, Address: 0x102db60, Func Offset: 0x90
	// Line 1397, Address: 0x102db6c, Func Offset: 0x9c
	// Line 1398, Address: 0x102db80, Func Offset: 0xb0
	// Func End, Address: 0x102db90, Func Offset: 0xc0
}

// 
// Start address: 0x102db90
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
	// Line 1417, Address: 0x102db90, Func Offset: 0
	// Line 1423, Address: 0x102dbc4, Func Offset: 0x34
	// Line 1425, Address: 0x102dbd4, Func Offset: 0x44
	// Line 1426, Address: 0x102dbd8, Func Offset: 0x48
	// Line 1427, Address: 0x102dbe0, Func Offset: 0x50
	// Line 1429, Address: 0x102dbf0, Func Offset: 0x60
	// Line 1431, Address: 0x102dbf4, Func Offset: 0x64
	// Line 1432, Address: 0x102dbfc, Func Offset: 0x6c
	// Line 1435, Address: 0x102dc04, Func Offset: 0x74
	// Line 1436, Address: 0x102dc0c, Func Offset: 0x7c
	// Line 1437, Address: 0x102dc18, Func Offset: 0x88
	// Line 1439, Address: 0x102dc24, Func Offset: 0x94
	// Line 1440, Address: 0x102dc2c, Func Offset: 0x9c
	// Line 1441, Address: 0x102dc34, Func Offset: 0xa4
	// Line 1442, Address: 0x102dc3c, Func Offset: 0xac
	// Line 1444, Address: 0x102dc48, Func Offset: 0xb8
	// Line 1445, Address: 0x102dc50, Func Offset: 0xc0
	// Line 1446, Address: 0x102dc58, Func Offset: 0xc8
	// Line 1447, Address: 0x102dc60, Func Offset: 0xd0
	// Line 1449, Address: 0x102dc6c, Func Offset: 0xdc
	// Line 1450, Address: 0x102dc74, Func Offset: 0xe4
	// Line 1451, Address: 0x102dc7c, Func Offset: 0xec
	// Line 1454, Address: 0x102dc84, Func Offset: 0xf4
	// Line 1455, Address: 0x102dc8c, Func Offset: 0xfc
	// Line 1458, Address: 0x102dc94, Func Offset: 0x104
	// Line 1459, Address: 0x102dcd8, Func Offset: 0x148
	// Line 1460, Address: 0x102dd1c, Func Offset: 0x18c
	// Line 1461, Address: 0x102dd60, Func Offset: 0x1d0
	// Line 1463, Address: 0x102dda4, Func Offset: 0x214
	// Func End, Address: 0x102ddd4, Func Offset: 0x244
}

// 
// Start address: 0x102dde0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1481, Address: 0x102dde0, Func Offset: 0
	// Line 1482, Address: 0x102de00, Func Offset: 0x20
	// Line 1483, Address: 0x102de20, Func Offset: 0x40
	// Func End, Address: 0x102de30, Func Offset: 0x50
}

// 
// Start address: 0x102de30
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1485, Address: 0x102de30, Func Offset: 0
	// Line 1486, Address: 0x102de50, Func Offset: 0x20
	// Line 1487, Address: 0x102de54, Func Offset: 0x24
	// Line 1488, Address: 0x102de74, Func Offset: 0x44
	// Func End, Address: 0x102de84, Func Offset: 0x54
}

// 
// Start address: 0x102de90
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1495, Address: 0x102de90, Func Offset: 0
	// Line 1501, Address: 0x102dec0, Func Offset: 0x30
	// Line 1502, Address: 0x102ded0, Func Offset: 0x40
	// Line 1508, Address: 0x102dee0, Func Offset: 0x50
	// Line 1509, Address: 0x102defc, Func Offset: 0x6c
	// Line 1510, Address: 0x102df00, Func Offset: 0x70
	// Line 1511, Address: 0x102df1c, Func Offset: 0x8c
	// Line 1512, Address: 0x102df20, Func Offset: 0x90
	// Line 1513, Address: 0x102df40, Func Offset: 0xb0
	// Line 1514, Address: 0x102df48, Func Offset: 0xb8
	// Line 1515, Address: 0x102df68, Func Offset: 0xd8
	// Line 1516, Address: 0x102df70, Func Offset: 0xe0
	// Line 1517, Address: 0x102dfb8, Func Offset: 0x128
	// Line 1519, Address: 0x102dfc4, Func Offset: 0x134
	// Line 1521, Address: 0x102dfe0, Func Offset: 0x150
	// Line 1526, Address: 0x102dfe8, Func Offset: 0x158
	// Line 1527, Address: 0x102dff4, Func Offset: 0x164
	// Line 1530, Address: 0x102e000, Func Offset: 0x170
	// Line 1531, Address: 0x102e008, Func Offset: 0x178
	// Line 1532, Address: 0x102e028, Func Offset: 0x198
	// Line 1533, Address: 0x102e044, Func Offset: 0x1b4
	// Line 1534, Address: 0x102e04c, Func Offset: 0x1bc
	// Line 1535, Address: 0x102e06c, Func Offset: 0x1dc
	// Line 1537, Address: 0x102e088, Func Offset: 0x1f8
	// Line 1538, Address: 0x102e090, Func Offset: 0x200
	// Line 1539, Address: 0x102e098, Func Offset: 0x208
	// Line 1540, Address: 0x102e0a4, Func Offset: 0x214
	// Line 1541, Address: 0x102e0bc, Func Offset: 0x22c
	// Line 1543, Address: 0x102e0cc, Func Offset: 0x23c
	// Line 1546, Address: 0x102e0d8, Func Offset: 0x248
	// Line 1547, Address: 0x102e0e0, Func Offset: 0x250
	// Line 1548, Address: 0x102e0e4, Func Offset: 0x254
	// Func End, Address: 0x102e104, Func Offset: 0x274
}

// 
// Start address: 0x102e110
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1568, Address: 0x102e110, Func Offset: 0
	// Line 1576, Address: 0x102e138, Func Offset: 0x28
	// Line 1577, Address: 0x102e19c, Func Offset: 0x8c
	// Line 1583, Address: 0x102e1a4, Func Offset: 0x94
	// Line 1584, Address: 0x102e1ac, Func Offset: 0x9c
	// Line 1585, Address: 0x102e1cc, Func Offset: 0xbc
	// Line 1586, Address: 0x102e1e8, Func Offset: 0xd8
	// Line 1587, Address: 0x102e1f0, Func Offset: 0xe0
	// Line 1588, Address: 0x102e210, Func Offset: 0x100
	// Line 1591, Address: 0x102e22c, Func Offset: 0x11c
	// Line 1592, Address: 0x102e234, Func Offset: 0x124
	// Line 1593, Address: 0x102e23c, Func Offset: 0x12c
	// Line 1594, Address: 0x102e248, Func Offset: 0x138
	// Line 1595, Address: 0x102e260, Func Offset: 0x150
	// Line 1596, Address: 0x102e268, Func Offset: 0x158
	// Line 1601, Address: 0x102e278, Func Offset: 0x168
	// Line 1604, Address: 0x102e284, Func Offset: 0x174
	// Line 1605, Address: 0x102e28c, Func Offset: 0x17c
	// Line 1606, Address: 0x102e290, Func Offset: 0x180
	// Func End, Address: 0x102e2ac, Func Offset: 0x19c
}

// 
// Start address: 0x102e2b0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1620, Address: 0x102e2b0, Func Offset: 0
	// Line 1627, Address: 0x102e2cc, Func Offset: 0x1c
	// Line 1628, Address: 0x102e2d0, Func Offset: 0x20
	// Line 1629, Address: 0x102e2d8, Func Offset: 0x28
	// Line 1631, Address: 0x102e2fc, Func Offset: 0x4c
	// Line 1632, Address: 0x102e314, Func Offset: 0x64
	// Line 1633, Address: 0x102e328, Func Offset: 0x78
	// Line 1638, Address: 0x102e340, Func Offset: 0x90
	// Func End, Address: 0x102e358, Func Offset: 0xa8
}

// 
// Start address: 0x102e360
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1652, Address: 0x102e360, Func Offset: 0
	// Line 1653, Address: 0x102e36c, Func Offset: 0xc
	// Line 1654, Address: 0x102e3a0, Func Offset: 0x40
	// Line 1655, Address: 0x102e3ec, Func Offset: 0x8c
	// Line 1656, Address: 0x102e420, Func Offset: 0xc0
	// Line 1658, Address: 0x102e46c, Func Offset: 0x10c
	// Line 1664, Address: 0x102e478, Func Offset: 0x118
	// Line 1665, Address: 0x102e47c, Func Offset: 0x11c
	// Func End, Address: 0x102e488, Func Offset: 0x128
}

// 
// Start address: 0x102e490
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1682, Address: 0x102e490, Func Offset: 0
	// Line 1683, Address: 0x102e4ac, Func Offset: 0x1c
	// Line 1685, Address: 0x102e4c8, Func Offset: 0x38
	// Func End, Address: 0x102e4d8, Func Offset: 0x48
}

// 
// Start address: 0x102e4e0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1687, Address: 0x102e4e0, Func Offset: 0
	// Line 1688, Address: 0x102e4fc, Func Offset: 0x1c
	// Line 1689, Address: 0x102e500, Func Offset: 0x20
	// Line 1691, Address: 0x102e51c, Func Offset: 0x3c
	// Func End, Address: 0x102e52c, Func Offset: 0x4c
}

// 
// Start address: 0x102e530
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1693, Address: 0x102e530, Func Offset: 0
	// Line 1694, Address: 0x102e544, Func Offset: 0x14
	// Line 1696, Address: 0x102e560, Func Offset: 0x30
	// Func End, Address: 0x102e570, Func Offset: 0x40
}

// 
// Start address: 0x102e570
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1698, Address: 0x102e570, Func Offset: 0
	// Line 1699, Address: 0x102e58c, Func Offset: 0x1c
	// Line 1701, Address: 0x102e5a8, Func Offset: 0x38
	// Func End, Address: 0x102e5b8, Func Offset: 0x48
}

// 
// Start address: 0x102e5c0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1703, Address: 0x102e5c0, Func Offset: 0
	// Line 1704, Address: 0x102e5d8, Func Offset: 0x18
	// Line 1705, Address: 0x102e5e8, Func Offset: 0x28
	// Line 1706, Address: 0x102e5f8, Func Offset: 0x38
	// Line 1707, Address: 0x102e604, Func Offset: 0x44
	// Line 1709, Address: 0x102e610, Func Offset: 0x50
	// Line 1710, Address: 0x102e63c, Func Offset: 0x7c
	// Line 1713, Address: 0x102e668, Func Offset: 0xa8
	// Func End, Address: 0x102e674, Func Offset: 0xb4
}

// 
// Start address: 0x102e680
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1729, Address: 0x102e680, Func Offset: 0
	// Line 1736, Address: 0x102e698, Func Offset: 0x18
	// Line 1737, Address: 0x102e6a4, Func Offset: 0x24
	// Line 1738, Address: 0x102e6b0, Func Offset: 0x30
	// Line 1739, Address: 0x102e6b8, Func Offset: 0x38
	// Line 1740, Address: 0x102e6bc, Func Offset: 0x3c
	// Line 1744, Address: 0x102e6d4, Func Offset: 0x54
	// Line 1745, Address: 0x102e6dc, Func Offset: 0x5c
	// Line 1746, Address: 0x102e6e0, Func Offset: 0x60
	// Line 1748, Address: 0x102e6f0, Func Offset: 0x70
	// Func End, Address: 0x102e710, Func Offset: 0x90
}

// 
// Start address: 0x102e710
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1751, Address: 0x102e710, Func Offset: 0
	// Line 1752, Address: 0x102e728, Func Offset: 0x18
	// Line 1753, Address: 0x102e748, Func Offset: 0x38
	// Func End, Address: 0x102e758, Func Offset: 0x48
}

// 
// Start address: 0x102e760
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1758, Address: 0x102e760, Func Offset: 0
	// Line 1762, Address: 0x102e780, Func Offset: 0x20
	// Line 1765, Address: 0x102e79c, Func Offset: 0x3c
	// Line 1769, Address: 0x102e7c4, Func Offset: 0x64
	// Line 1770, Address: 0x102e7d0, Func Offset: 0x70
	// Line 1772, Address: 0x102e7f8, Func Offset: 0x98
	// Func End, Address: 0x102e808, Func Offset: 0xa8
}

// 
// Start address: 0x102e810
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1778, Address: 0x102e810, Func Offset: 0
	// Line 1781, Address: 0x102e82c, Func Offset: 0x1c
	// Line 1782, Address: 0x102e834, Func Offset: 0x24
	// Line 1785, Address: 0x102e83c, Func Offset: 0x2c
	// Line 1787, Address: 0x102e860, Func Offset: 0x50
	// Line 1788, Address: 0x102e880, Func Offset: 0x70
	// Line 1789, Address: 0x102e888, Func Offset: 0x78
	// Line 1790, Address: 0x102e8ac, Func Offset: 0x9c
	// Func End, Address: 0x102e8c8, Func Offset: 0xb8
}

// 
// Start address: 0x102e8d0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1816, Address: 0x102e8d0, Func Offset: 0
	// Line 1821, Address: 0x102e8f8, Func Offset: 0x28
	// Line 1822, Address: 0x102e908, Func Offset: 0x38
	// Line 1824, Address: 0x102e924, Func Offset: 0x54
	// Line 1825, Address: 0x102e948, Func Offset: 0x78
	// Line 1826, Address: 0x102e970, Func Offset: 0xa0
	// Line 1827, Address: 0x102e97c, Func Offset: 0xac
	// Line 1828, Address: 0x102e984, Func Offset: 0xb4
	// Line 1831, Address: 0x102e9a0, Func Offset: 0xd0
	// Line 1835, Address: 0x102e9c8, Func Offset: 0xf8
	// Line 1838, Address: 0x102e9d0, Func Offset: 0x100
	// Line 1839, Address: 0x102e9d4, Func Offset: 0x104
	// Line 1843, Address: 0x102e9f0, Func Offset: 0x120
	// Line 1850, Address: 0x102ea18, Func Offset: 0x148
	// Func End, Address: 0x102ea34, Func Offset: 0x164
}

// 
// Start address: 0x102ea40
void mapinit()
{
	// Line 1861, Address: 0x102ea40, Func Offset: 0
	// Line 1863, Address: 0x102ea48, Func Offset: 0x8
	// Line 1864, Address: 0x102ea5c, Func Offset: 0x1c
	// Line 1866, Address: 0x102ea70, Func Offset: 0x30
	// Line 1867, Address: 0x102ea88, Func Offset: 0x48
	// Line 1868, Address: 0x102eaa8, Func Offset: 0x68
	// Func End, Address: 0x102eab8, Func Offset: 0x78
}

// 
// Start address: 0x102eac0
void mapset()
{
	// Line 1873, Address: 0x102eac0, Func Offset: 0
	// Func End, Address: 0x102eac8, Func Offset: 0x8
}

// 
// Start address: 0x102ead0
void divdevset()
{
	// Line 1877, Address: 0x102ead0, Func Offset: 0
	// Func End, Address: 0x102ead8, Func Offset: 0x8
}

// 
// Start address: 0x102eae0
void enecginit()
{
	// Line 1881, Address: 0x102eae0, Func Offset: 0
	// Func End, Address: 0x102eae8, Func Offset: 0x8
}

