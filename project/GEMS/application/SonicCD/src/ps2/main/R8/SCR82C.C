typedef struct _anon0;
typedef struct tagPOINT;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
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

typedef int(*type_8)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef char type_2[7];
typedef unsigned short type_3[4];
typedef unsigned short type_4[4][1024];
typedef short type_5[2];
typedef short type_6[2][1];
typedef unsigned char type_7[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef unsigned char type_12[33];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef char type_15[5];
typedef short type_16[256];
typedef short type_17[6];
typedef _anon3* type_18[8];
typedef _anon1 type_19[128];
typedef unsigned char type_20[4];
typedef short type_21[2];
typedef short type_22[2][8];
typedef _anon3* type_23[8];

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
	_anon3 xposi;
	_anon3 yposi;
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

struct _anon2
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

union _anon3
{
	int l;
	_anon4 w;
	_anon5 b;
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
_anon3* vblockwrtbtbl[8];
_anon3* mapwrt_tbl[8];
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
_anon3 scra_v_posit;
_anon3 scra_h_posit;
_anon1 actwk[128];
_anon6 demoflag;
short enddemono;
unsigned char plflag;
_anon3 scrb_h_posit;
_anon3 scrz_h_posit;
_anon3 scrc_h_posit;
_anon3 scrz_v_posit;
_anon3 scrc_v_posit;
_anon3 scrb_v_posit;
short hscrollwork[256];
_anon3* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon3 vscroll;
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
_anon3 scra_v_posiw;
_anon3 scra_h_posiw;
_anon11 scrflagbw;
unsigned char mapwkb[64][8];
_anon3 scrb_v_posiw;
_anon3 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon2 mapinittbl;

void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z82bline0(short** ppHscw);
void z82bline1(short** ppHscw);
void zonescrsetsub0(short yoffs, short yline, _anon3** pHscrbuf, short* pHscrwk);
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
void scrv_up_ch(_anon3 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon3 lSpd);
void scrv_move(_anon3 lSpd);
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
// Start address: 0x102b0f0
void scr_set()
{
	short* pScrTbl;
	// Line 173, Address: 0x102b0f0, Func Offset: 0
	// Line 176, Address: 0x102b0fc, Func Offset: 0xc
	// Line 177, Address: 0x102b110, Func Offset: 0x20
	// Line 178, Address: 0x102b124, Func Offset: 0x34
	// Line 180, Address: 0x102b12c, Func Offset: 0x3c
	// Line 181, Address: 0x102b134, Func Offset: 0x44
	// Line 182, Address: 0x102b140, Func Offset: 0x50
	// Line 183, Address: 0x102b144, Func Offset: 0x54
	// Line 184, Address: 0x102b158, Func Offset: 0x68
	// Line 185, Address: 0x102b15c, Func Offset: 0x6c
	// Line 186, Address: 0x102b170, Func Offset: 0x80
	// Line 187, Address: 0x102b174, Func Offset: 0x84
	// Line 188, Address: 0x102b188, Func Offset: 0x98
	// Line 189, Address: 0x102b18c, Func Offset: 0x9c
	// Line 190, Address: 0x102b1a0, Func Offset: 0xb0
	// Line 191, Address: 0x102b1c0, Func Offset: 0xd0
	// Line 192, Address: 0x102b1c4, Func Offset: 0xd4
	// Line 193, Address: 0x102b1d0, Func Offset: 0xe0
	// Line 195, Address: 0x102b1dc, Func Offset: 0xec
	// Line 196, Address: 0x102b1e8, Func Offset: 0xf8
	// Line 198, Address: 0x102b1f4, Func Offset: 0x104
	// Line 199, Address: 0x102b1fc, Func Offset: 0x10c
	// Func End, Address: 0x102b210, Func Offset: 0x120
}

// 
// Start address: 0x102b210
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 248, Address: 0x102b210, Func Offset: 0
	// Line 251, Address: 0x102b224, Func Offset: 0x14
	// Line 252, Address: 0x102b234, Func Offset: 0x24
	// Line 253, Address: 0x102b23c, Func Offset: 0x2c
	// Line 255, Address: 0x102b24c, Func Offset: 0x3c
	// Line 256, Address: 0x102b264, Func Offset: 0x54
	// Line 257, Address: 0x102b274, Func Offset: 0x64
	// Line 258, Address: 0x102b27c, Func Offset: 0x6c
	// Line 260, Address: 0x102b280, Func Offset: 0x70
	// Line 262, Address: 0x102b288, Func Offset: 0x78
	// Line 263, Address: 0x102b2a8, Func Offset: 0x98
	// Line 264, Address: 0x102b2cc, Func Offset: 0xbc
	// Line 266, Address: 0x102b2d4, Func Offset: 0xc4
	// Line 270, Address: 0x102b2f4, Func Offset: 0xe4
	// Line 271, Address: 0x102b308, Func Offset: 0xf8
	// Line 275, Address: 0x102b31c, Func Offset: 0x10c
	// Line 276, Address: 0x102b330, Func Offset: 0x120
	// Line 277, Address: 0x102b33c, Func Offset: 0x12c
	// Line 278, Address: 0x102b344, Func Offset: 0x134
	// Line 282, Address: 0x102b348, Func Offset: 0x138
	// Line 283, Address: 0x102b36c, Func Offset: 0x15c
	// Line 287, Address: 0x102b37c, Func Offset: 0x16c
	// Line 289, Address: 0x102b384, Func Offset: 0x174
	// Line 290, Address: 0x102b398, Func Offset: 0x188
	// Line 291, Address: 0x102b3a4, Func Offset: 0x194
	// Line 292, Address: 0x102b3ac, Func Offset: 0x19c
	// Line 296, Address: 0x102b3b0, Func Offset: 0x1a0
	// Line 297, Address: 0x102b3d4, Func Offset: 0x1c4
	// Line 301, Address: 0x102b3e4, Func Offset: 0x1d4
	// Line 303, Address: 0x102b3ec, Func Offset: 0x1dc
	// Line 306, Address: 0x102b3fc, Func Offset: 0x1ec
	// Line 307, Address: 0x102b40c, Func Offset: 0x1fc
	// Line 308, Address: 0x102b41c, Func Offset: 0x20c
	// Line 309, Address: 0x102b42c, Func Offset: 0x21c
	// Line 310, Address: 0x102b43c, Func Offset: 0x22c
	// Func End, Address: 0x102b458, Func Offset: 0x248
}

// 
// Start address: 0x102b460
void scrbinit(short sXpos, short sYpos)
{
	_anon3 lYwk;
	// Line 331, Address: 0x102b460, Func Offset: 0
	// Line 334, Address: 0x102b46c, Func Offset: 0xc
	// Line 335, Address: 0x102b474, Func Offset: 0x14
	// Line 337, Address: 0x102b478, Func Offset: 0x18
	// Line 338, Address: 0x102b484, Func Offset: 0x24
	// Line 339, Address: 0x102b490, Func Offset: 0x30
	// Line 340, Address: 0x102b49c, Func Offset: 0x3c
	// Line 342, Address: 0x102b4a8, Func Offset: 0x48
	// Line 343, Address: 0x102b4c4, Func Offset: 0x64
	// Line 345, Address: 0x102b4d0, Func Offset: 0x70
	// Line 346, Address: 0x102b4ec, Func Offset: 0x8c
	// Line 348, Address: 0x102b4f8, Func Offset: 0x98
	// Line 349, Address: 0x102b514, Func Offset: 0xb4
	// Line 350, Address: 0x102b538, Func Offset: 0xd8
	// Func End, Address: 0x102b544, Func Offset: 0xe4
}

// 
// Start address: 0x102b550
void scroll()
{
	_anon3 ldwk;
	_anon3* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 366, Address: 0x102b550, Func Offset: 0
	// Line 378, Address: 0x102b56c, Func Offset: 0x1c
	// Line 383, Address: 0x102b57c, Func Offset: 0x2c
	// Line 385, Address: 0x102b5a8, Func Offset: 0x58
	// Line 387, Address: 0x102b5b0, Func Offset: 0x60
	// Line 388, Address: 0x102b5b8, Func Offset: 0x68
	// Line 390, Address: 0x102b5c0, Func Offset: 0x70
	// Line 391, Address: 0x102b5d0, Func Offset: 0x80
	// Line 394, Address: 0x102b5e0, Func Offset: 0x90
	// Line 395, Address: 0x102b5f4, Func Offset: 0xa4
	// Line 397, Address: 0x102b604, Func Offset: 0xb4
	// Line 398, Address: 0x102b618, Func Offset: 0xc8
	// Line 400, Address: 0x102b628, Func Offset: 0xd8
	// Line 401, Address: 0x102b644, Func Offset: 0xf4
	// Line 403, Address: 0x102b654, Func Offset: 0x104
	// Line 406, Address: 0x102b668, Func Offset: 0x118
	// Line 408, Address: 0x102b678, Func Offset: 0x128
	// Line 410, Address: 0x102b6a0, Func Offset: 0x150
	// Line 411, Address: 0x102b6d8, Func Offset: 0x188
	// Line 413, Address: 0x102b6ec, Func Offset: 0x19c
	// Line 415, Address: 0x102b6f8, Func Offset: 0x1a8
	// Line 417, Address: 0x102b704, Func Offset: 0x1b4
	// Line 418, Address: 0x102b724, Func Offset: 0x1d4
	// Line 420, Address: 0x102b730, Func Offset: 0x1e0
	// Line 421, Address: 0x102b744, Func Offset: 0x1f4
	// Line 423, Address: 0x102b754, Func Offset: 0x204
	// Line 425, Address: 0x102b760, Func Offset: 0x210
	// Line 426, Address: 0x102b780, Func Offset: 0x230
	// Line 428, Address: 0x102b78c, Func Offset: 0x23c
	// Line 429, Address: 0x102b7a0, Func Offset: 0x250
	// Line 431, Address: 0x102b7b0, Func Offset: 0x260
	// Line 432, Address: 0x102b7bc, Func Offset: 0x26c
	// Line 433, Address: 0x102b7ec, Func Offset: 0x29c
	// Line 434, Address: 0x102b81c, Func Offset: 0x2cc
	// Line 435, Address: 0x102b838, Func Offset: 0x2e8
	// Func End, Address: 0x102b85c, Func Offset: 0x30c
}

// 
// Start address: 0x102b860
void z82bline0(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon3 ldwk;
	short wk;
	char z82bscrtbl0[7];
	// Line 440, Address: 0x102b860, Func Offset: 0
	// Line 449, Address: 0x102b878, Func Offset: 0x18
	// Line 450, Address: 0x102b89c, Func Offset: 0x3c
	// Line 451, Address: 0x102b8bc, Func Offset: 0x5c
	// Line 452, Address: 0x102b8dc, Func Offset: 0x7c
	// Line 454, Address: 0x102b8e8, Func Offset: 0x88
	// Line 456, Address: 0x102b8f4, Func Offset: 0x94
	// Line 458, Address: 0x102b914, Func Offset: 0xb4
	// Line 460, Address: 0x102b934, Func Offset: 0xd4
	// Line 461, Address: 0x102b940, Func Offset: 0xe0
	// Line 462, Address: 0x102b954, Func Offset: 0xf4
	// Line 464, Address: 0x102b960, Func Offset: 0x100
	// Line 465, Address: 0x102b984, Func Offset: 0x124
	// Line 466, Address: 0x102b990, Func Offset: 0x130
	// Line 467, Address: 0x102b9b4, Func Offset: 0x154
	// Line 468, Address: 0x102b9c0, Func Offset: 0x160
	// Func End, Address: 0x102b9dc, Func Offset: 0x17c
}

// 
// Start address: 0x102b9e0
void z82bline1(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon3 ldwk;
	short wk;
	char z82bscrtbl1[5];
	// Line 473, Address: 0x102b9e0, Func Offset: 0
	// Line 482, Address: 0x102b9f8, Func Offset: 0x18
	// Line 483, Address: 0x102ba1c, Func Offset: 0x3c
	// Line 484, Address: 0x102ba3c, Func Offset: 0x5c
	// Line 485, Address: 0x102ba5c, Func Offset: 0x7c
	// Line 486, Address: 0x102ba68, Func Offset: 0x88
	// Line 488, Address: 0x102ba7c, Func Offset: 0x9c
	// Line 490, Address: 0x102ba88, Func Offset: 0xa8
	// Line 492, Address: 0x102baa8, Func Offset: 0xc8
	// Line 494, Address: 0x102bac8, Func Offset: 0xe8
	// Line 495, Address: 0x102badc, Func Offset: 0xfc
	// Line 496, Address: 0x102bae8, Func Offset: 0x108
	// Line 498, Address: 0x102baf4, Func Offset: 0x114
	// Line 499, Address: 0x102bb18, Func Offset: 0x138
	// Line 500, Address: 0x102bb24, Func Offset: 0x144
	// Line 501, Address: 0x102bb48, Func Offset: 0x168
	// Line 502, Address: 0x102bb54, Func Offset: 0x174
	// Line 503, Address: 0x102bb68, Func Offset: 0x188
	// Func End, Address: 0x102bb84, Func Offset: 0x1a4
}

// 
// Start address: 0x102bb90
void zonescrsetsub0(short yoffs, short yline, _anon3** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon3 ldwk;
	// Line 524, Address: 0x102bb90, Func Offset: 0
	// Line 528, Address: 0x102bbac, Func Offset: 0x1c
	// Line 529, Address: 0x102bbb0, Func Offset: 0x20
	// Line 531, Address: 0x102bbd0, Func Offset: 0x40
	// Line 532, Address: 0x102bbec, Func Offset: 0x5c
	// Line 533, Address: 0x102bbf8, Func Offset: 0x68
	// Line 535, Address: 0x102bc04, Func Offset: 0x74
	// Line 536, Address: 0x102bc0c, Func Offset: 0x7c
	// Line 537, Address: 0x102bc1c, Func Offset: 0x8c
	// Line 538, Address: 0x102bc40, Func Offset: 0xb0
	// Line 539, Address: 0x102bc60, Func Offset: 0xd0
	// Func End, Address: 0x102bc74, Func Offset: 0xe4
}

// 
// Start address: 0x102bc80
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 645, Address: 0x102bc80, Func Offset: 0
	// Line 648, Address: 0x102bc90, Func Offset: 0x10
	// Line 649, Address: 0x102bca0, Func Offset: 0x20
	// Line 650, Address: 0x102bcac, Func Offset: 0x2c
	// Line 652, Address: 0x102bce4, Func Offset: 0x64
	// Line 653, Address: 0x102bcec, Func Offset: 0x6c
	// Line 654, Address: 0x102bd00, Func Offset: 0x80
	// Line 655, Address: 0x102bd20, Func Offset: 0xa0
	// Line 656, Address: 0x102bd34, Func Offset: 0xb4
	// Line 658, Address: 0x102bd3c, Func Offset: 0xbc
	// Line 663, Address: 0x102bd50, Func Offset: 0xd0
	// Func End, Address: 0x102bd64, Func Offset: 0xe4
}

// 
// Start address: 0x102bd70
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon3 ldXwk;
	// Line 681, Address: 0x102bd70, Func Offset: 0
	// Line 685, Address: 0x102bd84, Func Offset: 0x14
	// Line 686, Address: 0x102bd8c, Func Offset: 0x1c
	// Line 687, Address: 0x102bd94, Func Offset: 0x24
	// Line 688, Address: 0x102bd9c, Func Offset: 0x2c
	// Line 689, Address: 0x102bda0, Func Offset: 0x30
	// Line 690, Address: 0x102bdc4, Func Offset: 0x54
	// Line 691, Address: 0x102bdd0, Func Offset: 0x60
	// Line 693, Address: 0x102bdec, Func Offset: 0x7c
	// Line 694, Address: 0x102bdf8, Func Offset: 0x88
	// Line 695, Address: 0x102be0c, Func Offset: 0x9c
	// Line 696, Address: 0x102be18, Func Offset: 0xa8
	// Line 697, Address: 0x102be3c, Func Offset: 0xcc
	// Line 699, Address: 0x102be44, Func Offset: 0xd4
	// Line 704, Address: 0x102be6c, Func Offset: 0xfc
	// Func End, Address: 0x102be80, Func Offset: 0x110
}

// 
// Start address: 0x102be80
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon3 ldXwk;
	// Line 722, Address: 0x102be80, Func Offset: 0
	// Line 726, Address: 0x102be94, Func Offset: 0x14
	// Line 727, Address: 0x102be9c, Func Offset: 0x1c
	// Line 728, Address: 0x102bea4, Func Offset: 0x24
	// Line 729, Address: 0x102beac, Func Offset: 0x2c
	// Line 730, Address: 0x102beb0, Func Offset: 0x30
	// Line 731, Address: 0x102bed4, Func Offset: 0x54
	// Line 732, Address: 0x102bee0, Func Offset: 0x60
	// Line 734, Address: 0x102befc, Func Offset: 0x7c
	// Line 735, Address: 0x102bf08, Func Offset: 0x88
	// Line 736, Address: 0x102bf1c, Func Offset: 0x9c
	// Line 737, Address: 0x102bf28, Func Offset: 0xa8
	// Line 738, Address: 0x102bf4c, Func Offset: 0xcc
	// Line 740, Address: 0x102bf54, Func Offset: 0xd4
	// Line 745, Address: 0x102bf7c, Func Offset: 0xfc
	// Func End, Address: 0x102bf90, Func Offset: 0x110
}

// 
// Start address: 0x102bf90
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon3 ldXwk;
	// Line 763, Address: 0x102bf90, Func Offset: 0
	// Line 767, Address: 0x102bfa4, Func Offset: 0x14
	// Line 768, Address: 0x102bfac, Func Offset: 0x1c
	// Line 769, Address: 0x102bfb4, Func Offset: 0x24
	// Line 770, Address: 0x102bfbc, Func Offset: 0x2c
	// Line 771, Address: 0x102bfc0, Func Offset: 0x30
	// Line 772, Address: 0x102bfe4, Func Offset: 0x54
	// Line 773, Address: 0x102bff0, Func Offset: 0x60
	// Line 775, Address: 0x102c00c, Func Offset: 0x7c
	// Line 776, Address: 0x102c018, Func Offset: 0x88
	// Line 777, Address: 0x102c02c, Func Offset: 0x9c
	// Line 778, Address: 0x102c038, Func Offset: 0xa8
	// Line 779, Address: 0x102c05c, Func Offset: 0xcc
	// Line 781, Address: 0x102c064, Func Offset: 0xd4
	// Line 786, Address: 0x102c08c, Func Offset: 0xfc
	// Func End, Address: 0x102c0a0, Func Offset: 0x110
}

// 
// Start address: 0x102c0a0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 801, Address: 0x102c0a0, Func Offset: 0
	// Line 805, Address: 0x102c0b0, Func Offset: 0x10
	// Line 807, Address: 0x102c0c0, Func Offset: 0x20
	// Line 808, Address: 0x102c0c8, Func Offset: 0x28
	// Line 809, Address: 0x102c0fc, Func Offset: 0x5c
	// Line 810, Address: 0x102c104, Func Offset: 0x64
	// Line 811, Address: 0x102c118, Func Offset: 0x78
	// Line 812, Address: 0x102c13c, Func Offset: 0x9c
	// Line 813, Address: 0x102c150, Func Offset: 0xb0
	// Line 814, Address: 0x102c158, Func Offset: 0xb8
	// Line 819, Address: 0x102c16c, Func Offset: 0xcc
	// Func End, Address: 0x102c184, Func Offset: 0xe4
}

// 
// Start address: 0x102c190
void scrh_move()
{
	short xwk;
	// Line 836, Address: 0x102c190, Func Offset: 0
	// Line 839, Address: 0x102c198, Func Offset: 0x8
	// Line 840, Address: 0x102c1e0, Func Offset: 0x50
	// Line 842, Address: 0x102c1f0, Func Offset: 0x60
	// Line 843, Address: 0x102c1f8, Func Offset: 0x68
	// Line 844, Address: 0x102c200, Func Offset: 0x70
	// Line 846, Address: 0x102c210, Func Offset: 0x80
	// Line 847, Address: 0x102c224, Func Offset: 0x94
	// Line 851, Address: 0x102c230, Func Offset: 0xa0
	// Line 852, Address: 0x102c244, Func Offset: 0xb4
	// Line 853, Address: 0x102c268, Func Offset: 0xd8
	// Line 855, Address: 0x102c278, Func Offset: 0xe8
	// Line 857, Address: 0x102c280, Func Offset: 0xf0
	// Line 858, Address: 0x102c294, Func Offset: 0x104
	// Line 862, Address: 0x102c2a0, Func Offset: 0x110
	// Line 863, Address: 0x102c2b4, Func Offset: 0x124
	// Line 864, Address: 0x102c2d8, Func Offset: 0x148
	// Line 869, Address: 0x102c2e8, Func Offset: 0x158
	// Line 870, Address: 0x102c318, Func Offset: 0x188
	// Line 871, Address: 0x102c320, Func Offset: 0x190
	// Func End, Address: 0x102c330, Func Offset: 0x1a0
}

// 
// Start address: 0x102c330
void scroll_v()
{
	short ywk;
	// Line 886, Address: 0x102c330, Func Offset: 0
	// Line 889, Address: 0x102c33c, Func Offset: 0xc
	// Line 890, Address: 0x102c370, Func Offset: 0x40
	// Line 891, Address: 0x102c388, Func Offset: 0x58
	// Line 895, Address: 0x102c394, Func Offset: 0x64
	// Line 896, Address: 0x102c3ac, Func Offset: 0x7c
	// Line 897, Address: 0x102c3b8, Func Offset: 0x88
	// Line 898, Address: 0x102c3dc, Func Offset: 0xac
	// Line 899, Address: 0x102c3f0, Func Offset: 0xc0
	// Line 900, Address: 0x102c3fc, Func Offset: 0xcc
	// Line 901, Address: 0x102c404, Func Offset: 0xd4
	// Line 902, Address: 0x102c42c, Func Offset: 0xfc
	// Line 903, Address: 0x102c454, Func Offset: 0x124
	// Line 904, Address: 0x102c460, Func Offset: 0x130
	// Line 906, Address: 0x102c468, Func Offset: 0x138
	// Line 907, Address: 0x102c490, Func Offset: 0x160
	// Line 908, Address: 0x102c4a0, Func Offset: 0x170
	// Line 909, Address: 0x102c4a8, Func Offset: 0x178
	// Line 914, Address: 0x102c4b0, Func Offset: 0x180
	// Line 915, Address: 0x102c4dc, Func Offset: 0x1ac
	// Line 916, Address: 0x102c4e8, Func Offset: 0x1b8
	// Line 917, Address: 0x102c4f0, Func Offset: 0x1c0
	// Line 918, Address: 0x102c500, Func Offset: 0x1d0
	// Line 919, Address: 0x102c508, Func Offset: 0x1d8
	// Line 924, Address: 0x102c510, Func Offset: 0x1e0
	// Line 925, Address: 0x102c518, Func Offset: 0x1e8
	// Func End, Address: 0x102c52c, Func Offset: 0x1fc
}

// 
// Start address: 0x102c530
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 939, Address: 0x102c530, Func Offset: 0
	// Line 942, Address: 0x102c540, Func Offset: 0x10
	// Line 943, Address: 0x102c55c, Func Offset: 0x2c
	// Line 944, Address: 0x102c574, Func Offset: 0x44
	// Line 945, Address: 0x102c598, Func Offset: 0x68
	// Line 946, Address: 0x102c5a0, Func Offset: 0x70
	// Line 950, Address: 0x102c5b0, Func Offset: 0x80
	// Line 951, Address: 0x102c5c4, Func Offset: 0x94
	// Line 952, Address: 0x102c5d0, Func Offset: 0xa0
	// Line 955, Address: 0x102c5d8, Func Offset: 0xa8
	// Line 956, Address: 0x102c5f0, Func Offset: 0xc0
	// Line 957, Address: 0x102c5fc, Func Offset: 0xcc
	// Line 958, Address: 0x102c61c, Func Offset: 0xec
	// Line 959, Address: 0x102c628, Func Offset: 0xf8
	// Line 960, Address: 0x102c630, Func Offset: 0x100
	// Line 962, Address: 0x102c63c, Func Offset: 0x10c
	// Line 964, Address: 0x102c644, Func Offset: 0x114
	// Line 965, Address: 0x102c65c, Func Offset: 0x12c
	// Line 966, Address: 0x102c668, Func Offset: 0x138
	// Line 967, Address: 0x102c688, Func Offset: 0x158
	// Line 968, Address: 0x102c694, Func Offset: 0x164
	// Line 969, Address: 0x102c69c, Func Offset: 0x16c
	// Line 972, Address: 0x102c6a8, Func Offset: 0x178
	// Func End, Address: 0x102c6bc, Func Offset: 0x18c
}

// 
// Start address: 0x102c6c0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 986, Address: 0x102c6c0, Func Offset: 0
	// Line 989, Address: 0x102c6d0, Func Offset: 0x10
	// Line 991, Address: 0x102c6dc, Func Offset: 0x1c
	// Line 992, Address: 0x102c6f4, Func Offset: 0x34
	// Line 993, Address: 0x102c700, Func Offset: 0x40
	// Line 994, Address: 0x102c720, Func Offset: 0x60
	// Line 995, Address: 0x102c72c, Func Offset: 0x6c
	// Line 996, Address: 0x102c734, Func Offset: 0x74
	// Line 998, Address: 0x102c740, Func Offset: 0x80
	// Func End, Address: 0x102c754, Func Offset: 0x94
}

// 
// Start address: 0x102c760
void sv_move_sub(short yPos)
{
	_anon3 lSpd;
	// Line 1013, Address: 0x102c760, Func Offset: 0
	// Line 1016, Address: 0x102c76c, Func Offset: 0xc
	// Line 1017, Address: 0x102c770, Func Offset: 0x10
	// Line 1018, Address: 0x102c79c, Func Offset: 0x3c
	// Line 1019, Address: 0x102c7b0, Func Offset: 0x50
	// Line 1020, Address: 0x102c7bc, Func Offset: 0x5c
	// Line 1021, Address: 0x102c7c4, Func Offset: 0x64
	// Line 1023, Address: 0x102c7d0, Func Offset: 0x70
	// Func End, Address: 0x102c7e0, Func Offset: 0x80
}

// 
// Start address: 0x102c7e0
void sv_move_sub2()
{
	// Line 1027, Address: 0x102c7e0, Func Offset: 0
	// Line 1028, Address: 0x102c7e8, Func Offset: 0x8
	// Line 1030, Address: 0x102c7f0, Func Offset: 0x10
	// Line 1031, Address: 0x102c7fc, Func Offset: 0x1c
	// Func End, Address: 0x102c80c, Func Offset: 0x2c
}

// 
// Start address: 0x102c810
void sv_move_minus(short speed)
{
	_anon3 lSpd;
	// Line 1045, Address: 0x102c810, Func Offset: 0
	// Line 1048, Address: 0x102c81c, Func Offset: 0xc
	// Line 1049, Address: 0x102c840, Func Offset: 0x30
	// Line 1050, Address: 0x102c864, Func Offset: 0x54
	// Line 1051, Address: 0x102c870, Func Offset: 0x60
	// Func End, Address: 0x102c880, Func Offset: 0x70
}

// 
// Start address: 0x102c880
void scrv_up_ch(_anon3 lSpd)
{
	// Line 1066, Address: 0x102c880, Func Offset: 0
	// Line 1067, Address: 0x102c88c, Func Offset: 0xc
	// Line 1068, Address: 0x102c8b4, Func Offset: 0x34
	// Line 1070, Address: 0x102c8cc, Func Offset: 0x4c
	// Line 1071, Address: 0x102c8d8, Func Offset: 0x58
	// Line 1072, Address: 0x102c8e0, Func Offset: 0x60
	// Line 1073, Address: 0x102c8ec, Func Offset: 0x6c
	// Line 1074, Address: 0x102c900, Func Offset: 0x80
	// Line 1075, Address: 0x102c914, Func Offset: 0x94
	// Line 1079, Address: 0x102c928, Func Offset: 0xa8
	// Line 1080, Address: 0x102c934, Func Offset: 0xb4
	// Func End, Address: 0x102c944, Func Offset: 0xc4
}

// 
// Start address: 0x102c950
void sv_move_plus(short sSpd)
{
	_anon3 lSpd;
	// Line 1094, Address: 0x102c950, Func Offset: 0
	// Line 1097, Address: 0x102c95c, Func Offset: 0xc
	// Line 1098, Address: 0x102c97c, Func Offset: 0x2c
	// Line 1099, Address: 0x102c9a0, Func Offset: 0x50
	// Line 1100, Address: 0x102c9ac, Func Offset: 0x5c
	// Func End, Address: 0x102c9bc, Func Offset: 0x6c
}

// 
// Start address: 0x102c9c0
void scrv_down_ch(_anon3 lSpd)
{
	// Line 1115, Address: 0x102c9c0, Func Offset: 0
	// Line 1116, Address: 0x102c9cc, Func Offset: 0xc
	// Line 1117, Address: 0x102c9f4, Func Offset: 0x34
	// Line 1119, Address: 0x102ca0c, Func Offset: 0x4c
	// Line 1120, Address: 0x102ca18, Func Offset: 0x58
	// Line 1121, Address: 0x102ca20, Func Offset: 0x60
	// Line 1122, Address: 0x102ca2c, Func Offset: 0x6c
	// Line 1123, Address: 0x102ca40, Func Offset: 0x80
	// Line 1124, Address: 0x102ca54, Func Offset: 0x94
	// Line 1128, Address: 0x102ca68, Func Offset: 0xa8
	// Line 1129, Address: 0x102ca74, Func Offset: 0xb4
	// Func End, Address: 0x102ca84, Func Offset: 0xc4
}

// 
// Start address: 0x102ca90
void scrv_move(_anon3 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1146, Address: 0x102ca90, Func Offset: 0
	// Line 1150, Address: 0x102caa0, Func Offset: 0x10
	// Line 1151, Address: 0x102cab0, Func Offset: 0x20
	// Line 1152, Address: 0x102cad4, Func Offset: 0x44
	// Line 1153, Address: 0x102cae8, Func Offset: 0x58
	// Line 1154, Address: 0x102cb00, Func Offset: 0x70
	// Line 1156, Address: 0x102cb0c, Func Offset: 0x7c
	// Line 1158, Address: 0x102cb18, Func Offset: 0x88
	// Line 1159, Address: 0x102cb54, Func Offset: 0xc4
	// Line 1160, Address: 0x102cb5c, Func Offset: 0xcc
	// Line 1161, Address: 0x102cb70, Func Offset: 0xe0
	// Line 1162, Address: 0x102cb9c, Func Offset: 0x10c
	// Line 1163, Address: 0x102cbac, Func Offset: 0x11c
	// Line 1164, Address: 0x102cbc0, Func Offset: 0x130
	// Line 1165, Address: 0x102cbc8, Func Offset: 0x138
	// Line 1170, Address: 0x102cbdc, Func Offset: 0x14c
	// Func End, Address: 0x102cbf0, Func Offset: 0x160
}

// 
// Start address: 0x102cbf0
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon3 lD4;
	unsigned short wD5;
	// Line 1188, Address: 0x102cbf0, Func Offset: 0
	// Line 1197, Address: 0x102cc10, Func Offset: 0x20
	// Line 1198, Address: 0x102cc14, Func Offset: 0x24
	// Line 1199, Address: 0x102cc20, Func Offset: 0x30
	// Line 1200, Address: 0x102cc2c, Func Offset: 0x3c
	// Line 1201, Address: 0x102cc34, Func Offset: 0x44
	// Line 1202, Address: 0x102cc3c, Func Offset: 0x4c
	// Line 1204, Address: 0x102cc50, Func Offset: 0x60
	// Line 1205, Address: 0x102cc54, Func Offset: 0x64
	// Line 1206, Address: 0x102cc60, Func Offset: 0x70
	// Line 1207, Address: 0x102cc6c, Func Offset: 0x7c
	// Line 1208, Address: 0x102cc74, Func Offset: 0x84
	// Line 1210, Address: 0x102cc7c, Func Offset: 0x8c
	// Line 1211, Address: 0x102cc88, Func Offset: 0x98
	// Line 1212, Address: 0x102cc9c, Func Offset: 0xac
	// Line 1214, Address: 0x102cca8, Func Offset: 0xb8
	// Line 1215, Address: 0x102ccb0, Func Offset: 0xc0
	// Line 1217, Address: 0x102ccb8, Func Offset: 0xc8
	// Line 1219, Address: 0x102ccd8, Func Offset: 0xe8
	// Line 1225, Address: 0x102cd04, Func Offset: 0x114
	// Line 1226, Address: 0x102cd18, Func Offset: 0x128
	// Line 1228, Address: 0x102cd24, Func Offset: 0x134
	// Line 1229, Address: 0x102cd2c, Func Offset: 0x13c
	// Line 1230, Address: 0x102cd34, Func Offset: 0x144
	// Line 1232, Address: 0x102cd54, Func Offset: 0x164
	// Line 1238, Address: 0x102cd80, Func Offset: 0x190
	// Line 1239, Address: 0x102cd94, Func Offset: 0x1a4
	// Line 1241, Address: 0x102cda0, Func Offset: 0x1b0
	// Line 1242, Address: 0x102cda8, Func Offset: 0x1b8
	// Line 1243, Address: 0x102cdb0, Func Offset: 0x1c0
	// Line 1245, Address: 0x102cdd0, Func Offset: 0x1e0
	// Line 1251, Address: 0x102cdfc, Func Offset: 0x20c
	// Line 1252, Address: 0x102ce10, Func Offset: 0x220
	// Line 1254, Address: 0x102ce1c, Func Offset: 0x22c
	// Line 1255, Address: 0x102ce24, Func Offset: 0x234
	// Line 1256, Address: 0x102ce2c, Func Offset: 0x23c
	// Line 1258, Address: 0x102ce4c, Func Offset: 0x25c
	// Line 1267, Address: 0x102ce78, Func Offset: 0x288
	// Func End, Address: 0x102cea0, Func Offset: 0x2b0
}

// 
// Start address: 0x102cea0
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon3 lD4;
	int WrtTblCnt;
	unsigned short wD0;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1284, Address: 0x102cea0, Func Offset: 0
	// Line 1295, Address: 0x102cecc, Func Offset: 0x2c
	// Line 1297, Address: 0x102ced4, Func Offset: 0x34
	// Line 1298, Address: 0x102ceec, Func Offset: 0x4c
	// Line 1299, Address: 0x102cf00, Func Offset: 0x60
	// Line 1301, Address: 0x102cf08, Func Offset: 0x68
	// Line 1303, Address: 0x102cf1c, Func Offset: 0x7c
	// Line 1304, Address: 0x102cf34, Func Offset: 0x94
	// Line 1305, Address: 0x102cf48, Func Offset: 0xa8
	// Line 1306, Address: 0x102cf50, Func Offset: 0xb0
	// Line 1308, Address: 0x102cf58, Func Offset: 0xb8
	// Line 1309, Address: 0x102cf6c, Func Offset: 0xcc
	// Line 1314, Address: 0x102cf74, Func Offset: 0xd4
	// Line 1315, Address: 0x102cfc4, Func Offset: 0x124
	// Line 1316, Address: 0x102cfcc, Func Offset: 0x12c
	// Line 1322, Address: 0x102cfec, Func Offset: 0x14c
	// Line 1323, Address: 0x102d00c, Func Offset: 0x16c
	// Line 1324, Address: 0x102d030, Func Offset: 0x190
	// Line 1325, Address: 0x102d03c, Func Offset: 0x19c
	// Line 1326, Address: 0x102d044, Func Offset: 0x1a4
	// Line 1328, Address: 0x102d064, Func Offset: 0x1c4
	// Line 1332, Address: 0x102d090, Func Offset: 0x1f0
	// Line 1335, Address: 0x102d098, Func Offset: 0x1f8
	// Line 1336, Address: 0x102d09c, Func Offset: 0x1fc
	// Line 1340, Address: 0x102d0bc, Func Offset: 0x21c
	// Line 1347, Address: 0x102d0e8, Func Offset: 0x248
	// Line 1354, Address: 0x102d0fc, Func Offset: 0x25c
	// Line 1355, Address: 0x102d104, Func Offset: 0x264
	// Line 1356, Address: 0x102d10c, Func Offset: 0x26c
	// Line 1357, Address: 0x102d124, Func Offset: 0x284
	// Line 1358, Address: 0x102d144, Func Offset: 0x2a4
	// Line 1362, Address: 0x102d14c, Func Offset: 0x2ac
	// Line 1364, Address: 0x102d17c, Func Offset: 0x2dc
	// Line 1365, Address: 0x102d188, Func Offset: 0x2e8
	// Line 1369, Address: 0x102d198, Func Offset: 0x2f8
	// Line 1370, Address: 0x102d1a4, Func Offset: 0x304
	// Line 1371, Address: 0x102d1c4, Func Offset: 0x324
	// Line 1372, Address: 0x102d1fc, Func Offset: 0x35c
	// Line 1373, Address: 0x102d21c, Func Offset: 0x37c
	// Line 1375, Address: 0x102d240, Func Offset: 0x3a0
	// Line 1378, Address: 0x102d264, Func Offset: 0x3c4
	// Line 1380, Address: 0x102d284, Func Offset: 0x3e4
	// Line 1382, Address: 0x102d298, Func Offset: 0x3f8
	// Line 1383, Address: 0x102d2a4, Func Offset: 0x404
	// Line 1384, Address: 0x102d2b4, Func Offset: 0x414
	// Line 1386, Address: 0x102d2bc, Func Offset: 0x41c
	// Func End, Address: 0x102d2e4, Func Offset: 0x444
}

// 
// Start address: 0x102d2f0
void scrollwrtc()
{
	// Line 1392, Address: 0x102d2f0, Func Offset: 0
	// Func End, Address: 0x102d2f8, Func Offset: 0x8
}

// 
// Start address: 0x102d300
void scrollwrtz()
{
	// Line 1397, Address: 0x102d300, Func Offset: 0
	// Func End, Address: 0x102d308, Func Offset: 0x8
}

// 
// Start address: 0x102d310
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1415, Address: 0x102d310, Func Offset: 0
	// Line 1428, Address: 0x102d338, Func Offset: 0x28
	// Line 1431, Address: 0x102d358, Func Offset: 0x48
	// Line 1432, Address: 0x102d36c, Func Offset: 0x5c
	// Line 1433, Address: 0x102d380, Func Offset: 0x70
	// Line 1434, Address: 0x102d394, Func Offset: 0x84
	// Line 1436, Address: 0x102d3a8, Func Offset: 0x98
	// Line 1437, Address: 0x102d3b4, Func Offset: 0xa4
	// Line 1438, Address: 0x102d3c8, Func Offset: 0xb8
	// Func End, Address: 0x102d3d8, Func Offset: 0xc8
}

// 
// Start address: 0x102d3e0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1442, Address: 0x102d3e0, Func Offset: 0
	// Line 1446, Address: 0x102d408, Func Offset: 0x28
	// Line 1449, Address: 0x102d428, Func Offset: 0x48
	// Line 1450, Address: 0x102d43c, Func Offset: 0x5c
	// Line 1451, Address: 0x102d450, Func Offset: 0x70
	// Line 1452, Address: 0x102d464, Func Offset: 0x84
	// Line 1454, Address: 0x102d478, Func Offset: 0x98
	// Line 1455, Address: 0x102d484, Func Offset: 0xa4
	// Line 1456, Address: 0x102d498, Func Offset: 0xb8
	// Func End, Address: 0x102d4a8, Func Offset: 0xc8
}

// 
// Start address: 0x102d4b0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1476, Address: 0x102d4b0, Func Offset: 0
	// Line 1480, Address: 0x102d4d8, Func Offset: 0x28
	// Line 1483, Address: 0x102d4f8, Func Offset: 0x48
	// Line 1484, Address: 0x102d50c, Func Offset: 0x5c
	// Line 1485, Address: 0x102d51c, Func Offset: 0x6c
	// Line 1486, Address: 0x102d530, Func Offset: 0x80
	// Line 1488, Address: 0x102d540, Func Offset: 0x90
	// Line 1489, Address: 0x102d54c, Func Offset: 0x9c
	// Line 1490, Address: 0x102d560, Func Offset: 0xb0
	// Func End, Address: 0x102d570, Func Offset: 0xc0
}

// 
// Start address: 0x102d570
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
	// Line 1509, Address: 0x102d570, Func Offset: 0
	// Line 1515, Address: 0x102d5a4, Func Offset: 0x34
	// Line 1517, Address: 0x102d5b4, Func Offset: 0x44
	// Line 1518, Address: 0x102d5b8, Func Offset: 0x48
	// Line 1519, Address: 0x102d5c0, Func Offset: 0x50
	// Line 1521, Address: 0x102d5d0, Func Offset: 0x60
	// Line 1523, Address: 0x102d5d4, Func Offset: 0x64
	// Line 1524, Address: 0x102d5dc, Func Offset: 0x6c
	// Line 1527, Address: 0x102d5e4, Func Offset: 0x74
	// Line 1528, Address: 0x102d5ec, Func Offset: 0x7c
	// Line 1529, Address: 0x102d5f8, Func Offset: 0x88
	// Line 1531, Address: 0x102d604, Func Offset: 0x94
	// Line 1532, Address: 0x102d60c, Func Offset: 0x9c
	// Line 1533, Address: 0x102d614, Func Offset: 0xa4
	// Line 1534, Address: 0x102d61c, Func Offset: 0xac
	// Line 1536, Address: 0x102d628, Func Offset: 0xb8
	// Line 1537, Address: 0x102d630, Func Offset: 0xc0
	// Line 1538, Address: 0x102d638, Func Offset: 0xc8
	// Line 1539, Address: 0x102d640, Func Offset: 0xd0
	// Line 1541, Address: 0x102d64c, Func Offset: 0xdc
	// Line 1542, Address: 0x102d654, Func Offset: 0xe4
	// Line 1543, Address: 0x102d65c, Func Offset: 0xec
	// Line 1546, Address: 0x102d664, Func Offset: 0xf4
	// Line 1547, Address: 0x102d66c, Func Offset: 0xfc
	// Line 1550, Address: 0x102d674, Func Offset: 0x104
	// Line 1551, Address: 0x102d6b8, Func Offset: 0x148
	// Line 1552, Address: 0x102d6fc, Func Offset: 0x18c
	// Line 1553, Address: 0x102d740, Func Offset: 0x1d0
	// Line 1555, Address: 0x102d784, Func Offset: 0x214
	// Func End, Address: 0x102d7b4, Func Offset: 0x244
}

// 
// Start address: 0x102d7c0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1573, Address: 0x102d7c0, Func Offset: 0
	// Line 1574, Address: 0x102d7e0, Func Offset: 0x20
	// Line 1575, Address: 0x102d800, Func Offset: 0x40
	// Func End, Address: 0x102d810, Func Offset: 0x50
}

// 
// Start address: 0x102d810
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1577, Address: 0x102d810, Func Offset: 0
	// Line 1578, Address: 0x102d830, Func Offset: 0x20
	// Line 1579, Address: 0x102d834, Func Offset: 0x24
	// Line 1580, Address: 0x102d854, Func Offset: 0x44
	// Func End, Address: 0x102d864, Func Offset: 0x54
}

// 
// Start address: 0x102d870
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1587, Address: 0x102d870, Func Offset: 0
	// Line 1593, Address: 0x102d8a0, Func Offset: 0x30
	// Line 1594, Address: 0x102d8b0, Func Offset: 0x40
	// Line 1600, Address: 0x102d8c0, Func Offset: 0x50
	// Line 1601, Address: 0x102d8dc, Func Offset: 0x6c
	// Line 1602, Address: 0x102d8e0, Func Offset: 0x70
	// Line 1603, Address: 0x102d8fc, Func Offset: 0x8c
	// Line 1604, Address: 0x102d900, Func Offset: 0x90
	// Line 1605, Address: 0x102d920, Func Offset: 0xb0
	// Line 1606, Address: 0x102d928, Func Offset: 0xb8
	// Line 1607, Address: 0x102d948, Func Offset: 0xd8
	// Line 1608, Address: 0x102d950, Func Offset: 0xe0
	// Line 1609, Address: 0x102d998, Func Offset: 0x128
	// Line 1611, Address: 0x102d9a4, Func Offset: 0x134
	// Line 1613, Address: 0x102d9c0, Func Offset: 0x150
	// Line 1618, Address: 0x102d9c8, Func Offset: 0x158
	// Line 1619, Address: 0x102d9d4, Func Offset: 0x164
	// Line 1622, Address: 0x102d9e0, Func Offset: 0x170
	// Line 1623, Address: 0x102d9e8, Func Offset: 0x178
	// Line 1624, Address: 0x102da08, Func Offset: 0x198
	// Line 1625, Address: 0x102da24, Func Offset: 0x1b4
	// Line 1626, Address: 0x102da2c, Func Offset: 0x1bc
	// Line 1627, Address: 0x102da4c, Func Offset: 0x1dc
	// Line 1629, Address: 0x102da68, Func Offset: 0x1f8
	// Line 1630, Address: 0x102da70, Func Offset: 0x200
	// Line 1631, Address: 0x102da78, Func Offset: 0x208
	// Line 1632, Address: 0x102da84, Func Offset: 0x214
	// Line 1633, Address: 0x102da9c, Func Offset: 0x22c
	// Line 1635, Address: 0x102daac, Func Offset: 0x23c
	// Line 1638, Address: 0x102dab8, Func Offset: 0x248
	// Line 1639, Address: 0x102dac0, Func Offset: 0x250
	// Line 1640, Address: 0x102dac4, Func Offset: 0x254
	// Func End, Address: 0x102dae4, Func Offset: 0x274
}

// 
// Start address: 0x102daf0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1660, Address: 0x102daf0, Func Offset: 0
	// Line 1668, Address: 0x102db18, Func Offset: 0x28
	// Line 1669, Address: 0x102db7c, Func Offset: 0x8c
	// Line 1675, Address: 0x102db84, Func Offset: 0x94
	// Line 1676, Address: 0x102db8c, Func Offset: 0x9c
	// Line 1677, Address: 0x102dbac, Func Offset: 0xbc
	// Line 1678, Address: 0x102dbc8, Func Offset: 0xd8
	// Line 1679, Address: 0x102dbd0, Func Offset: 0xe0
	// Line 1680, Address: 0x102dbf0, Func Offset: 0x100
	// Line 1683, Address: 0x102dc0c, Func Offset: 0x11c
	// Line 1684, Address: 0x102dc14, Func Offset: 0x124
	// Line 1685, Address: 0x102dc1c, Func Offset: 0x12c
	// Line 1686, Address: 0x102dc28, Func Offset: 0x138
	// Line 1687, Address: 0x102dc40, Func Offset: 0x150
	// Line 1688, Address: 0x102dc48, Func Offset: 0x158
	// Line 1693, Address: 0x102dc58, Func Offset: 0x168
	// Line 1696, Address: 0x102dc64, Func Offset: 0x174
	// Line 1697, Address: 0x102dc6c, Func Offset: 0x17c
	// Line 1698, Address: 0x102dc70, Func Offset: 0x180
	// Func End, Address: 0x102dc8c, Func Offset: 0x19c
}

// 
// Start address: 0x102dc90
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1712, Address: 0x102dc90, Func Offset: 0
	// Line 1719, Address: 0x102dcac, Func Offset: 0x1c
	// Line 1720, Address: 0x102dcb0, Func Offset: 0x20
	// Line 1721, Address: 0x102dcb8, Func Offset: 0x28
	// Line 1722, Address: 0x102dcdc, Func Offset: 0x4c
	// Line 1723, Address: 0x102dce8, Func Offset: 0x58
	// Line 1724, Address: 0x102dd00, Func Offset: 0x70
	// Line 1725, Address: 0x102dd14, Func Offset: 0x84
	// Line 1730, Address: 0x102dd2c, Func Offset: 0x9c
	// Func End, Address: 0x102dd44, Func Offset: 0xb4
}

// 
// Start address: 0x102dd50
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1744, Address: 0x102dd50, Func Offset: 0
	// Line 1745, Address: 0x102dd5c, Func Offset: 0xc
	// Line 1746, Address: 0x102dd88, Func Offset: 0x38
	// Line 1747, Address: 0x102ddd4, Func Offset: 0x84
	// Line 1748, Address: 0x102de00, Func Offset: 0xb0
	// Line 1750, Address: 0x102de4c, Func Offset: 0xfc
	// Line 1756, Address: 0x102de58, Func Offset: 0x108
	// Line 1757, Address: 0x102de5c, Func Offset: 0x10c
	// Func End, Address: 0x102de68, Func Offset: 0x118
}

// 
// Start address: 0x102de70
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1774, Address: 0x102de70, Func Offset: 0
	// Line 1775, Address: 0x102de8c, Func Offset: 0x1c
	// Line 1777, Address: 0x102dea8, Func Offset: 0x38
	// Func End, Address: 0x102deb8, Func Offset: 0x48
}

// 
// Start address: 0x102dec0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x102dec0, Func Offset: 0
	// Line 1780, Address: 0x102dedc, Func Offset: 0x1c
	// Line 1781, Address: 0x102dee0, Func Offset: 0x20
	// Line 1783, Address: 0x102defc, Func Offset: 0x3c
	// Func End, Address: 0x102df0c, Func Offset: 0x4c
}

// 
// Start address: 0x102df10
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1785, Address: 0x102df10, Func Offset: 0
	// Line 1786, Address: 0x102df24, Func Offset: 0x14
	// Line 1788, Address: 0x102df40, Func Offset: 0x30
	// Func End, Address: 0x102df50, Func Offset: 0x40
}

// 
// Start address: 0x102df50
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1790, Address: 0x102df50, Func Offset: 0
	// Line 1791, Address: 0x102df6c, Func Offset: 0x1c
	// Line 1793, Address: 0x102df88, Func Offset: 0x38
	// Func End, Address: 0x102df98, Func Offset: 0x48
}

// 
// Start address: 0x102dfa0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1795, Address: 0x102dfa0, Func Offset: 0
	// Line 1796, Address: 0x102dfb8, Func Offset: 0x18
	// Line 1797, Address: 0x102dfc8, Func Offset: 0x28
	// Line 1798, Address: 0x102dfd8, Func Offset: 0x38
	// Line 1799, Address: 0x102dfe4, Func Offset: 0x44
	// Line 1801, Address: 0x102dff0, Func Offset: 0x50
	// Line 1802, Address: 0x102e01c, Func Offset: 0x7c
	// Line 1805, Address: 0x102e048, Func Offset: 0xa8
	// Func End, Address: 0x102e054, Func Offset: 0xb4
}

// 
// Start address: 0x102e060
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1821, Address: 0x102e060, Func Offset: 0
	// Line 1828, Address: 0x102e078, Func Offset: 0x18
	// Line 1829, Address: 0x102e084, Func Offset: 0x24
	// Line 1830, Address: 0x102e090, Func Offset: 0x30
	// Line 1831, Address: 0x102e098, Func Offset: 0x38
	// Line 1832, Address: 0x102e09c, Func Offset: 0x3c
	// Line 1836, Address: 0x102e0b4, Func Offset: 0x54
	// Line 1837, Address: 0x102e0bc, Func Offset: 0x5c
	// Line 1838, Address: 0x102e0c0, Func Offset: 0x60
	// Line 1840, Address: 0x102e0d0, Func Offset: 0x70
	// Func End, Address: 0x102e0f0, Func Offset: 0x90
}

// 
// Start address: 0x102e0f0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1843, Address: 0x102e0f0, Func Offset: 0
	// Line 1844, Address: 0x102e108, Func Offset: 0x18
	// Line 1845, Address: 0x102e128, Func Offset: 0x38
	// Func End, Address: 0x102e138, Func Offset: 0x48
}

// 
// Start address: 0x102e140
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1850, Address: 0x102e140, Func Offset: 0
	// Line 1854, Address: 0x102e160, Func Offset: 0x20
	// Line 1857, Address: 0x102e17c, Func Offset: 0x3c
	// Line 1861, Address: 0x102e1a4, Func Offset: 0x64
	// Line 1862, Address: 0x102e1b0, Func Offset: 0x70
	// Line 1864, Address: 0x102e1d8, Func Offset: 0x98
	// Func End, Address: 0x102e1e8, Func Offset: 0xa8
}

// 
// Start address: 0x102e1f0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1870, Address: 0x102e1f0, Func Offset: 0
	// Line 1873, Address: 0x102e20c, Func Offset: 0x1c
	// Line 1874, Address: 0x102e214, Func Offset: 0x24
	// Line 1877, Address: 0x102e21c, Func Offset: 0x2c
	// Line 1879, Address: 0x102e240, Func Offset: 0x50
	// Line 1880, Address: 0x102e260, Func Offset: 0x70
	// Line 1881, Address: 0x102e268, Func Offset: 0x78
	// Line 1882, Address: 0x102e28c, Func Offset: 0x9c
	// Func End, Address: 0x102e2a8, Func Offset: 0xb8
}

// 
// Start address: 0x102e2b0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1908, Address: 0x102e2b0, Func Offset: 0
	// Line 1913, Address: 0x102e2d8, Func Offset: 0x28
	// Line 1914, Address: 0x102e2e8, Func Offset: 0x38
	// Line 1916, Address: 0x102e304, Func Offset: 0x54
	// Line 1917, Address: 0x102e328, Func Offset: 0x78
	// Line 1918, Address: 0x102e350, Func Offset: 0xa0
	// Line 1919, Address: 0x102e35c, Func Offset: 0xac
	// Line 1920, Address: 0x102e364, Func Offset: 0xb4
	// Line 1923, Address: 0x102e380, Func Offset: 0xd0
	// Line 1927, Address: 0x102e3a8, Func Offset: 0xf8
	// Line 1930, Address: 0x102e3b0, Func Offset: 0x100
	// Line 1931, Address: 0x102e3b4, Func Offset: 0x104
	// Line 1935, Address: 0x102e3d0, Func Offset: 0x120
	// Line 1942, Address: 0x102e3f8, Func Offset: 0x148
	// Func End, Address: 0x102e414, Func Offset: 0x164
}

// 
// Start address: 0x102e420
void mapinit()
{
	// Line 1953, Address: 0x102e420, Func Offset: 0
	// Line 1955, Address: 0x102e428, Func Offset: 0x8
	// Line 1956, Address: 0x102e43c, Func Offset: 0x1c
	// Line 1958, Address: 0x102e450, Func Offset: 0x30
	// Line 1959, Address: 0x102e468, Func Offset: 0x48
	// Line 1960, Address: 0x102e488, Func Offset: 0x68
	// Func End, Address: 0x102e498, Func Offset: 0x78
}

// 
// Start address: 0x102e4a0
void mapset()
{
	// Line 1965, Address: 0x102e4a0, Func Offset: 0
	// Func End, Address: 0x102e4a8, Func Offset: 0x8
}

// 
// Start address: 0x102e4b0
void divdevset()
{
	// Line 1969, Address: 0x102e4b0, Func Offset: 0
	// Func End, Address: 0x102e4b8, Func Offset: 0x8
}

// 
// Start address: 0x102e4c0
void enecginit()
{
	// Line 1973, Address: 0x102e4c0, Func Offset: 0
	// Func End, Address: 0x102e4c8, Func Offset: 0x8
}

