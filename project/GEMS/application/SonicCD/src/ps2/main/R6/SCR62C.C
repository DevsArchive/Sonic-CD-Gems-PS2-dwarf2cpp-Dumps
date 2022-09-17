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

typedef int(*type_5)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned short type_2[4];
typedef unsigned short type_3[4][1024];
typedef unsigned char type_4[4];
typedef unsigned char type_6[2];
typedef unsigned char type_7[64];
typedef unsigned char type_8[64][8];
typedef unsigned char type_9[22];
typedef unsigned char type_10[49];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef short type_13[256];
typedef short type_14[6];
typedef _anon2* type_15[8];
typedef char type_16[9];
typedef _anon1 type_17[128];
typedef short type_18[2];
typedef short type_19[2][1];
typedef _anon2* type_20[8];

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

unsigned char z81awrttbl[49];
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
void z61aline(short** ppHscw);
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
// Start address: 0x102c590
void scr_set()
{
	short* pScrTbl;
	// Line 190, Address: 0x102c590, Func Offset: 0
	// Line 193, Address: 0x102c59c, Func Offset: 0xc
	// Line 194, Address: 0x102c5b0, Func Offset: 0x20
	// Line 195, Address: 0x102c5c4, Func Offset: 0x34
	// Line 197, Address: 0x102c5cc, Func Offset: 0x3c
	// Line 198, Address: 0x102c5d4, Func Offset: 0x44
	// Line 199, Address: 0x102c5e0, Func Offset: 0x50
	// Line 200, Address: 0x102c5e4, Func Offset: 0x54
	// Line 201, Address: 0x102c5f8, Func Offset: 0x68
	// Line 202, Address: 0x102c5fc, Func Offset: 0x6c
	// Line 203, Address: 0x102c610, Func Offset: 0x80
	// Line 204, Address: 0x102c614, Func Offset: 0x84
	// Line 205, Address: 0x102c628, Func Offset: 0x98
	// Line 206, Address: 0x102c62c, Func Offset: 0x9c
	// Line 207, Address: 0x102c640, Func Offset: 0xb0
	// Line 208, Address: 0x102c660, Func Offset: 0xd0
	// Line 209, Address: 0x102c664, Func Offset: 0xd4
	// Line 210, Address: 0x102c670, Func Offset: 0xe0
	// Line 212, Address: 0x102c67c, Func Offset: 0xec
	// Line 213, Address: 0x102c688, Func Offset: 0xf8
	// Line 215, Address: 0x102c694, Func Offset: 0x104
	// Line 216, Address: 0x102c69c, Func Offset: 0x10c
	// Func End, Address: 0x102c6b0, Func Offset: 0x120
}

// 
// Start address: 0x102c6b0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 255, Address: 0x102c6b0, Func Offset: 0
	// Line 258, Address: 0x102c6c4, Func Offset: 0x14
	// Line 259, Address: 0x102c6d4, Func Offset: 0x24
	// Line 260, Address: 0x102c6dc, Func Offset: 0x2c
	// Line 262, Address: 0x102c6ec, Func Offset: 0x3c
	// Line 263, Address: 0x102c704, Func Offset: 0x54
	// Line 264, Address: 0x102c714, Func Offset: 0x64
	// Line 265, Address: 0x102c71c, Func Offset: 0x6c
	// Line 267, Address: 0x102c720, Func Offset: 0x70
	// Line 282, Address: 0x102c728, Func Offset: 0x78
	// Line 283, Address: 0x102c730, Func Offset: 0x80
	// Line 284, Address: 0x102c744, Func Offset: 0x94
	// Line 288, Address: 0x102c758, Func Offset: 0xa8
	// Line 289, Address: 0x102c76c, Func Offset: 0xbc
	// Line 290, Address: 0x102c778, Func Offset: 0xc8
	// Line 291, Address: 0x102c780, Func Offset: 0xd0
	// Line 295, Address: 0x102c784, Func Offset: 0xd4
	// Line 296, Address: 0x102c7a8, Func Offset: 0xf8
	// Line 300, Address: 0x102c7b8, Func Offset: 0x108
	// Line 302, Address: 0x102c7c0, Func Offset: 0x110
	// Line 303, Address: 0x102c7d4, Func Offset: 0x124
	// Line 304, Address: 0x102c7e0, Func Offset: 0x130
	// Line 305, Address: 0x102c7e8, Func Offset: 0x138
	// Line 309, Address: 0x102c7ec, Func Offset: 0x13c
	// Line 310, Address: 0x102c810, Func Offset: 0x160
	// Line 314, Address: 0x102c820, Func Offset: 0x170
	// Line 316, Address: 0x102c828, Func Offset: 0x178
	// Line 319, Address: 0x102c838, Func Offset: 0x188
	// Line 320, Address: 0x102c848, Func Offset: 0x198
	// Line 321, Address: 0x102c858, Func Offset: 0x1a8
	// Line 322, Address: 0x102c868, Func Offset: 0x1b8
	// Line 323, Address: 0x102c878, Func Offset: 0x1c8
	// Func End, Address: 0x102c894, Func Offset: 0x1e4
}

// 
// Start address: 0x102c8a0
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 344, Address: 0x102c8a0, Func Offset: 0
	// Line 347, Address: 0x102c8ac, Func Offset: 0xc
	// Line 348, Address: 0x102c8b4, Func Offset: 0x14
	// Line 350, Address: 0x102c8b8, Func Offset: 0x18
	// Line 351, Address: 0x102c8c4, Func Offset: 0x24
	// Line 352, Address: 0x102c8d0, Func Offset: 0x30
	// Line 353, Address: 0x102c8dc, Func Offset: 0x3c
	// Line 355, Address: 0x102c8e8, Func Offset: 0x48
	// Line 356, Address: 0x102c904, Func Offset: 0x64
	// Line 358, Address: 0x102c910, Func Offset: 0x70
	// Line 359, Address: 0x102c92c, Func Offset: 0x8c
	// Line 361, Address: 0x102c938, Func Offset: 0x98
	// Line 362, Address: 0x102c954, Func Offset: 0xb4
	// Line 363, Address: 0x102c978, Func Offset: 0xd8
	// Func End, Address: 0x102c984, Func Offset: 0xe4
}

// 
// Start address: 0x102c990
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
	// Line 379, Address: 0x102c990, Func Offset: 0
	// Line 391, Address: 0x102c9ac, Func Offset: 0x1c
	// Line 396, Address: 0x102c9bc, Func Offset: 0x2c
	// Line 398, Address: 0x102c9e8, Func Offset: 0x58
	// Line 400, Address: 0x102c9f0, Func Offset: 0x60
	// Line 401, Address: 0x102c9f8, Func Offset: 0x68
	// Line 403, Address: 0x102ca00, Func Offset: 0x70
	// Line 404, Address: 0x102ca10, Func Offset: 0x80
	// Line 407, Address: 0x102ca20, Func Offset: 0x90
	// Line 408, Address: 0x102ca34, Func Offset: 0xa4
	// Line 410, Address: 0x102ca44, Func Offset: 0xb4
	// Line 411, Address: 0x102ca58, Func Offset: 0xc8
	// Line 413, Address: 0x102ca68, Func Offset: 0xd8
	// Line 414, Address: 0x102ca84, Func Offset: 0xf4
	// Line 416, Address: 0x102ca94, Func Offset: 0x104
	// Line 419, Address: 0x102caa8, Func Offset: 0x118
	// Line 421, Address: 0x102cab8, Func Offset: 0x128
	// Line 423, Address: 0x102cae0, Func Offset: 0x150
	// Line 424, Address: 0x102cb18, Func Offset: 0x188
	// Line 426, Address: 0x102cb2c, Func Offset: 0x19c
	// Line 428, Address: 0x102cb38, Func Offset: 0x1a8
	// Line 430, Address: 0x102cb44, Func Offset: 0x1b4
	// Line 431, Address: 0x102cb64, Func Offset: 0x1d4
	// Line 433, Address: 0x102cb70, Func Offset: 0x1e0
	// Line 434, Address: 0x102cb84, Func Offset: 0x1f4
	// Line 436, Address: 0x102cb94, Func Offset: 0x204
	// Line 437, Address: 0x102cbb4, Func Offset: 0x224
	// Line 439, Address: 0x102cbc0, Func Offset: 0x230
	// Line 440, Address: 0x102cbd4, Func Offset: 0x244
	// Line 442, Address: 0x102cbe4, Func Offset: 0x254
	// Line 443, Address: 0x102cbf0, Func Offset: 0x260
	// Line 444, Address: 0x102cc20, Func Offset: 0x290
	// Line 445, Address: 0x102cc50, Func Offset: 0x2c0
	// Line 446, Address: 0x102cc6c, Func Offset: 0x2dc
	// Func End, Address: 0x102cc90, Func Offset: 0x300
}

// 
// Start address: 0x102cc90
void z61aline(short** ppHscw)
{
	char z81ascrtbl[9];
	int i;
	int j;
	short sXwk;
	short radwk;
	short sinwk;
	short coswk;
	short hwk;
	int lXwk;
	// Line 460, Address: 0x102cc90, Func Offset: 0
	// Line 461, Address: 0x102ccb4, Func Offset: 0x24
	// Line 469, Address: 0x102cce0, Func Offset: 0x50
	// Line 470, Address: 0x102cd04, Func Offset: 0x74
	// Line 471, Address: 0x102cd08, Func Offset: 0x78
	// Line 473, Address: 0x102cd18, Func Offset: 0x88
	// Line 475, Address: 0x102cd2c, Func Offset: 0x9c
	// Line 477, Address: 0x102cd38, Func Offset: 0xa8
	// Line 478, Address: 0x102cd4c, Func Offset: 0xbc
	// Line 479, Address: 0x102cda0, Func Offset: 0x110
	// Line 481, Address: 0x102cdb8, Func Offset: 0x128
	// Line 482, Address: 0x102cdcc, Func Offset: 0x13c
	// Line 483, Address: 0x102cdd8, Func Offset: 0x148
	// Line 485, Address: 0x102cde4, Func Offset: 0x154
	// Line 486, Address: 0x102cdf0, Func Offset: 0x160
	// Line 488, Address: 0x102cdfc, Func Offset: 0x16c
	// Line 489, Address: 0x102ce10, Func Offset: 0x180
	// Func End, Address: 0x102ce38, Func Offset: 0x1a8
}

// 
// Start address: 0x102ce40
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 510, Address: 0x102ce40, Func Offset: 0
	// Line 514, Address: 0x102ce5c, Func Offset: 0x1c
	// Line 515, Address: 0x102ce60, Func Offset: 0x20
	// Line 517, Address: 0x102ce80, Func Offset: 0x40
	// Line 518, Address: 0x102ce9c, Func Offset: 0x5c
	// Line 519, Address: 0x102cea8, Func Offset: 0x68
	// Line 521, Address: 0x102ceb4, Func Offset: 0x74
	// Line 522, Address: 0x102cebc, Func Offset: 0x7c
	// Line 523, Address: 0x102cecc, Func Offset: 0x8c
	// Line 524, Address: 0x102cef0, Func Offset: 0xb0
	// Line 525, Address: 0x102cf10, Func Offset: 0xd0
	// Func End, Address: 0x102cf24, Func Offset: 0xe4
}

// 
// Start address: 0x102cf30
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 631, Address: 0x102cf30, Func Offset: 0
	// Line 634, Address: 0x102cf40, Func Offset: 0x10
	// Line 635, Address: 0x102cf50, Func Offset: 0x20
	// Line 636, Address: 0x102cf5c, Func Offset: 0x2c
	// Line 638, Address: 0x102cf94, Func Offset: 0x64
	// Line 639, Address: 0x102cf9c, Func Offset: 0x6c
	// Line 640, Address: 0x102cfb0, Func Offset: 0x80
	// Line 641, Address: 0x102cfd0, Func Offset: 0xa0
	// Line 642, Address: 0x102cfe4, Func Offset: 0xb4
	// Line 644, Address: 0x102cfec, Func Offset: 0xbc
	// Line 649, Address: 0x102d000, Func Offset: 0xd0
	// Func End, Address: 0x102d014, Func Offset: 0xe4
}

// 
// Start address: 0x102d020
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 667, Address: 0x102d020, Func Offset: 0
	// Line 671, Address: 0x102d034, Func Offset: 0x14
	// Line 672, Address: 0x102d03c, Func Offset: 0x1c
	// Line 673, Address: 0x102d044, Func Offset: 0x24
	// Line 674, Address: 0x102d04c, Func Offset: 0x2c
	// Line 675, Address: 0x102d050, Func Offset: 0x30
	// Line 676, Address: 0x102d074, Func Offset: 0x54
	// Line 677, Address: 0x102d080, Func Offset: 0x60
	// Line 679, Address: 0x102d09c, Func Offset: 0x7c
	// Line 680, Address: 0x102d0a8, Func Offset: 0x88
	// Line 681, Address: 0x102d0bc, Func Offset: 0x9c
	// Line 682, Address: 0x102d0c8, Func Offset: 0xa8
	// Line 683, Address: 0x102d0ec, Func Offset: 0xcc
	// Line 685, Address: 0x102d0f4, Func Offset: 0xd4
	// Line 690, Address: 0x102d11c, Func Offset: 0xfc
	// Func End, Address: 0x102d130, Func Offset: 0x110
}

// 
// Start address: 0x102d130
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 708, Address: 0x102d130, Func Offset: 0
	// Line 712, Address: 0x102d144, Func Offset: 0x14
	// Line 713, Address: 0x102d14c, Func Offset: 0x1c
	// Line 714, Address: 0x102d154, Func Offset: 0x24
	// Line 715, Address: 0x102d15c, Func Offset: 0x2c
	// Line 716, Address: 0x102d160, Func Offset: 0x30
	// Line 717, Address: 0x102d184, Func Offset: 0x54
	// Line 718, Address: 0x102d190, Func Offset: 0x60
	// Line 720, Address: 0x102d1ac, Func Offset: 0x7c
	// Line 721, Address: 0x102d1b8, Func Offset: 0x88
	// Line 722, Address: 0x102d1cc, Func Offset: 0x9c
	// Line 723, Address: 0x102d1d8, Func Offset: 0xa8
	// Line 724, Address: 0x102d1fc, Func Offset: 0xcc
	// Line 726, Address: 0x102d204, Func Offset: 0xd4
	// Line 731, Address: 0x102d22c, Func Offset: 0xfc
	// Func End, Address: 0x102d240, Func Offset: 0x110
}

// 
// Start address: 0x102d240
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 749, Address: 0x102d240, Func Offset: 0
	// Line 753, Address: 0x102d254, Func Offset: 0x14
	// Line 754, Address: 0x102d25c, Func Offset: 0x1c
	// Line 755, Address: 0x102d264, Func Offset: 0x24
	// Line 756, Address: 0x102d26c, Func Offset: 0x2c
	// Line 757, Address: 0x102d270, Func Offset: 0x30
	// Line 758, Address: 0x102d294, Func Offset: 0x54
	// Line 759, Address: 0x102d2a0, Func Offset: 0x60
	// Line 761, Address: 0x102d2bc, Func Offset: 0x7c
	// Line 762, Address: 0x102d2c8, Func Offset: 0x88
	// Line 763, Address: 0x102d2dc, Func Offset: 0x9c
	// Line 764, Address: 0x102d2e8, Func Offset: 0xa8
	// Line 765, Address: 0x102d30c, Func Offset: 0xcc
	// Line 767, Address: 0x102d314, Func Offset: 0xd4
	// Line 772, Address: 0x102d33c, Func Offset: 0xfc
	// Func End, Address: 0x102d350, Func Offset: 0x110
}

// 
// Start address: 0x102d350
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 787, Address: 0x102d350, Func Offset: 0
	// Line 791, Address: 0x102d360, Func Offset: 0x10
	// Line 793, Address: 0x102d370, Func Offset: 0x20
	// Line 794, Address: 0x102d378, Func Offset: 0x28
	// Line 795, Address: 0x102d3ac, Func Offset: 0x5c
	// Line 796, Address: 0x102d3b4, Func Offset: 0x64
	// Line 797, Address: 0x102d3c8, Func Offset: 0x78
	// Line 798, Address: 0x102d3ec, Func Offset: 0x9c
	// Line 799, Address: 0x102d400, Func Offset: 0xb0
	// Line 800, Address: 0x102d408, Func Offset: 0xb8
	// Line 805, Address: 0x102d41c, Func Offset: 0xcc
	// Func End, Address: 0x102d434, Func Offset: 0xe4
}

// 
// Start address: 0x102d440
void scrh_move()
{
	short xwk;
	// Line 822, Address: 0x102d440, Func Offset: 0
	// Line 825, Address: 0x102d448, Func Offset: 0x8
	// Line 826, Address: 0x102d490, Func Offset: 0x50
	// Line 828, Address: 0x102d4a0, Func Offset: 0x60
	// Line 829, Address: 0x102d4a8, Func Offset: 0x68
	// Line 830, Address: 0x102d4b0, Func Offset: 0x70
	// Line 832, Address: 0x102d4c0, Func Offset: 0x80
	// Line 833, Address: 0x102d4d4, Func Offset: 0x94
	// Line 837, Address: 0x102d4e0, Func Offset: 0xa0
	// Line 838, Address: 0x102d4f4, Func Offset: 0xb4
	// Line 839, Address: 0x102d518, Func Offset: 0xd8
	// Line 841, Address: 0x102d528, Func Offset: 0xe8
	// Line 843, Address: 0x102d530, Func Offset: 0xf0
	// Line 844, Address: 0x102d544, Func Offset: 0x104
	// Line 848, Address: 0x102d550, Func Offset: 0x110
	// Line 849, Address: 0x102d564, Func Offset: 0x124
	// Line 850, Address: 0x102d588, Func Offset: 0x148
	// Line 855, Address: 0x102d598, Func Offset: 0x158
	// Line 856, Address: 0x102d5c8, Func Offset: 0x188
	// Line 857, Address: 0x102d5d0, Func Offset: 0x190
	// Func End, Address: 0x102d5e0, Func Offset: 0x1a0
}

// 
// Start address: 0x102d5e0
void scroll_v()
{
	short ywk;
	// Line 872, Address: 0x102d5e0, Func Offset: 0
	// Line 875, Address: 0x102d5ec, Func Offset: 0xc
	// Line 876, Address: 0x102d620, Func Offset: 0x40
	// Line 877, Address: 0x102d638, Func Offset: 0x58
	// Line 881, Address: 0x102d644, Func Offset: 0x64
	// Line 882, Address: 0x102d65c, Func Offset: 0x7c
	// Line 883, Address: 0x102d668, Func Offset: 0x88
	// Line 884, Address: 0x102d68c, Func Offset: 0xac
	// Line 885, Address: 0x102d6a0, Func Offset: 0xc0
	// Line 886, Address: 0x102d6ac, Func Offset: 0xcc
	// Line 887, Address: 0x102d6b4, Func Offset: 0xd4
	// Line 888, Address: 0x102d6dc, Func Offset: 0xfc
	// Line 889, Address: 0x102d704, Func Offset: 0x124
	// Line 890, Address: 0x102d710, Func Offset: 0x130
	// Line 892, Address: 0x102d718, Func Offset: 0x138
	// Line 893, Address: 0x102d740, Func Offset: 0x160
	// Line 894, Address: 0x102d750, Func Offset: 0x170
	// Line 895, Address: 0x102d758, Func Offset: 0x178
	// Line 900, Address: 0x102d760, Func Offset: 0x180
	// Line 901, Address: 0x102d78c, Func Offset: 0x1ac
	// Line 902, Address: 0x102d798, Func Offset: 0x1b8
	// Line 903, Address: 0x102d7a0, Func Offset: 0x1c0
	// Line 904, Address: 0x102d7b0, Func Offset: 0x1d0
	// Line 905, Address: 0x102d7b8, Func Offset: 0x1d8
	// Line 910, Address: 0x102d7c0, Func Offset: 0x1e0
	// Line 911, Address: 0x102d7c8, Func Offset: 0x1e8
	// Func End, Address: 0x102d7dc, Func Offset: 0x1fc
}

// 
// Start address: 0x102d7e0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 925, Address: 0x102d7e0, Func Offset: 0
	// Line 928, Address: 0x102d7f0, Func Offset: 0x10
	// Line 929, Address: 0x102d80c, Func Offset: 0x2c
	// Line 930, Address: 0x102d824, Func Offset: 0x44
	// Line 931, Address: 0x102d848, Func Offset: 0x68
	// Line 932, Address: 0x102d850, Func Offset: 0x70
	// Line 936, Address: 0x102d860, Func Offset: 0x80
	// Line 937, Address: 0x102d874, Func Offset: 0x94
	// Line 938, Address: 0x102d880, Func Offset: 0xa0
	// Line 941, Address: 0x102d888, Func Offset: 0xa8
	// Line 942, Address: 0x102d8a0, Func Offset: 0xc0
	// Line 943, Address: 0x102d8ac, Func Offset: 0xcc
	// Line 944, Address: 0x102d8cc, Func Offset: 0xec
	// Line 945, Address: 0x102d8d8, Func Offset: 0xf8
	// Line 946, Address: 0x102d8e0, Func Offset: 0x100
	// Line 948, Address: 0x102d8ec, Func Offset: 0x10c
	// Line 950, Address: 0x102d8f4, Func Offset: 0x114
	// Line 951, Address: 0x102d90c, Func Offset: 0x12c
	// Line 952, Address: 0x102d918, Func Offset: 0x138
	// Line 953, Address: 0x102d938, Func Offset: 0x158
	// Line 954, Address: 0x102d944, Func Offset: 0x164
	// Line 955, Address: 0x102d94c, Func Offset: 0x16c
	// Line 958, Address: 0x102d958, Func Offset: 0x178
	// Func End, Address: 0x102d96c, Func Offset: 0x18c
}

// 
// Start address: 0x102d970
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 972, Address: 0x102d970, Func Offset: 0
	// Line 975, Address: 0x102d980, Func Offset: 0x10
	// Line 977, Address: 0x102d98c, Func Offset: 0x1c
	// Line 978, Address: 0x102d9a4, Func Offset: 0x34
	// Line 979, Address: 0x102d9b0, Func Offset: 0x40
	// Line 980, Address: 0x102d9d0, Func Offset: 0x60
	// Line 981, Address: 0x102d9dc, Func Offset: 0x6c
	// Line 982, Address: 0x102d9e4, Func Offset: 0x74
	// Line 984, Address: 0x102d9f0, Func Offset: 0x80
	// Func End, Address: 0x102da04, Func Offset: 0x94
}

// 
// Start address: 0x102da10
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 999, Address: 0x102da10, Func Offset: 0
	// Line 1002, Address: 0x102da1c, Func Offset: 0xc
	// Line 1003, Address: 0x102da48, Func Offset: 0x38
	// Line 1004, Address: 0x102da5c, Func Offset: 0x4c
	// Line 1005, Address: 0x102da68, Func Offset: 0x58
	// Line 1006, Address: 0x102da70, Func Offset: 0x60
	// Line 1008, Address: 0x102da7c, Func Offset: 0x6c
	// Func End, Address: 0x102da8c, Func Offset: 0x7c
}

// 
// Start address: 0x102da90
void sv_move_sub2()
{
	// Line 1012, Address: 0x102da90, Func Offset: 0
	// Line 1013, Address: 0x102da98, Func Offset: 0x8
	// Line 1015, Address: 0x102daa0, Func Offset: 0x10
	// Line 1016, Address: 0x102daac, Func Offset: 0x1c
	// Func End, Address: 0x102dabc, Func Offset: 0x2c
}

// 
// Start address: 0x102dac0
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1030, Address: 0x102dac0, Func Offset: 0
	// Line 1033, Address: 0x102dacc, Func Offset: 0xc
	// Line 1034, Address: 0x102daf0, Func Offset: 0x30
	// Line 1035, Address: 0x102db14, Func Offset: 0x54
	// Line 1036, Address: 0x102db20, Func Offset: 0x60
	// Func End, Address: 0x102db30, Func Offset: 0x70
}

// 
// Start address: 0x102db30
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1051, Address: 0x102db30, Func Offset: 0
	// Line 1052, Address: 0x102db3c, Func Offset: 0xc
	// Line 1053, Address: 0x102db64, Func Offset: 0x34
	// Line 1055, Address: 0x102db7c, Func Offset: 0x4c
	// Line 1056, Address: 0x102db88, Func Offset: 0x58
	// Line 1057, Address: 0x102db90, Func Offset: 0x60
	// Line 1058, Address: 0x102db9c, Func Offset: 0x6c
	// Line 1059, Address: 0x102dbb0, Func Offset: 0x80
	// Line 1060, Address: 0x102dbc4, Func Offset: 0x94
	// Line 1064, Address: 0x102dbd8, Func Offset: 0xa8
	// Line 1065, Address: 0x102dbe4, Func Offset: 0xb4
	// Func End, Address: 0x102dbf4, Func Offset: 0xc4
}

// 
// Start address: 0x102dc00
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1079, Address: 0x102dc00, Func Offset: 0
	// Line 1082, Address: 0x102dc0c, Func Offset: 0xc
	// Line 1083, Address: 0x102dc2c, Func Offset: 0x2c
	// Line 1084, Address: 0x102dc50, Func Offset: 0x50
	// Line 1085, Address: 0x102dc5c, Func Offset: 0x5c
	// Func End, Address: 0x102dc6c, Func Offset: 0x6c
}

// 
// Start address: 0x102dc70
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1100, Address: 0x102dc70, Func Offset: 0
	// Line 1101, Address: 0x102dc7c, Func Offset: 0xc
	// Line 1102, Address: 0x102dca4, Func Offset: 0x34
	// Line 1104, Address: 0x102dcbc, Func Offset: 0x4c
	// Line 1105, Address: 0x102dcc8, Func Offset: 0x58
	// Line 1106, Address: 0x102dcd0, Func Offset: 0x60
	// Line 1107, Address: 0x102dcdc, Func Offset: 0x6c
	// Line 1108, Address: 0x102dcf0, Func Offset: 0x80
	// Line 1109, Address: 0x102dd04, Func Offset: 0x94
	// Line 1113, Address: 0x102dd18, Func Offset: 0xa8
	// Line 1114, Address: 0x102dd24, Func Offset: 0xb4
	// Func End, Address: 0x102dd34, Func Offset: 0xc4
}

// 
// Start address: 0x102dd40
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1131, Address: 0x102dd40, Func Offset: 0
	// Line 1135, Address: 0x102dd50, Func Offset: 0x10
	// Line 1136, Address: 0x102dd60, Func Offset: 0x20
	// Line 1137, Address: 0x102dd84, Func Offset: 0x44
	// Line 1138, Address: 0x102dd98, Func Offset: 0x58
	// Line 1139, Address: 0x102ddb0, Func Offset: 0x70
	// Line 1141, Address: 0x102ddbc, Func Offset: 0x7c
	// Line 1143, Address: 0x102ddc8, Func Offset: 0x88
	// Line 1144, Address: 0x102de04, Func Offset: 0xc4
	// Line 1145, Address: 0x102de0c, Func Offset: 0xcc
	// Line 1146, Address: 0x102de20, Func Offset: 0xe0
	// Line 1147, Address: 0x102de4c, Func Offset: 0x10c
	// Line 1148, Address: 0x102de5c, Func Offset: 0x11c
	// Line 1149, Address: 0x102de70, Func Offset: 0x130
	// Line 1150, Address: 0x102de78, Func Offset: 0x138
	// Line 1155, Address: 0x102de8c, Func Offset: 0x14c
	// Func End, Address: 0x102dea0, Func Offset: 0x160
}

// 
// Start address: 0x102dea0
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
	// Line 1173, Address: 0x102dea0, Func Offset: 0
	// Line 1182, Address: 0x102dec0, Func Offset: 0x20
	// Line 1183, Address: 0x102dec4, Func Offset: 0x24
	// Line 1184, Address: 0x102ded0, Func Offset: 0x30
	// Line 1185, Address: 0x102dedc, Func Offset: 0x3c
	// Line 1186, Address: 0x102dee4, Func Offset: 0x44
	// Line 1187, Address: 0x102deec, Func Offset: 0x4c
	// Line 1189, Address: 0x102df00, Func Offset: 0x60
	// Line 1190, Address: 0x102df04, Func Offset: 0x64
	// Line 1191, Address: 0x102df10, Func Offset: 0x70
	// Line 1192, Address: 0x102df1c, Func Offset: 0x7c
	// Line 1193, Address: 0x102df24, Func Offset: 0x84
	// Line 1195, Address: 0x102df2c, Func Offset: 0x8c
	// Line 1196, Address: 0x102df38, Func Offset: 0x98
	// Line 1197, Address: 0x102df4c, Func Offset: 0xac
	// Line 1199, Address: 0x102df58, Func Offset: 0xb8
	// Line 1200, Address: 0x102df60, Func Offset: 0xc0
	// Line 1202, Address: 0x102df68, Func Offset: 0xc8
	// Line 1204, Address: 0x102df88, Func Offset: 0xe8
	// Line 1210, Address: 0x102dfb4, Func Offset: 0x114
	// Line 1211, Address: 0x102dfc8, Func Offset: 0x128
	// Line 1213, Address: 0x102dfd4, Func Offset: 0x134
	// Line 1214, Address: 0x102dfdc, Func Offset: 0x13c
	// Line 1215, Address: 0x102dfe4, Func Offset: 0x144
	// Line 1217, Address: 0x102e004, Func Offset: 0x164
	// Line 1223, Address: 0x102e030, Func Offset: 0x190
	// Line 1224, Address: 0x102e044, Func Offset: 0x1a4
	// Line 1226, Address: 0x102e050, Func Offset: 0x1b0
	// Line 1227, Address: 0x102e058, Func Offset: 0x1b8
	// Line 1228, Address: 0x102e060, Func Offset: 0x1c0
	// Line 1230, Address: 0x102e080, Func Offset: 0x1e0
	// Line 1236, Address: 0x102e0ac, Func Offset: 0x20c
	// Line 1237, Address: 0x102e0c0, Func Offset: 0x220
	// Line 1239, Address: 0x102e0cc, Func Offset: 0x22c
	// Line 1240, Address: 0x102e0d4, Func Offset: 0x234
	// Line 1241, Address: 0x102e0dc, Func Offset: 0x23c
	// Line 1243, Address: 0x102e0fc, Func Offset: 0x25c
	// Line 1252, Address: 0x102e128, Func Offset: 0x288
	// Func End, Address: 0x102e150, Func Offset: 0x2b0
}

// 
// Start address: 0x102e150
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
	// Line 1269, Address: 0x102e150, Func Offset: 0
	// Line 1280, Address: 0x102e17c, Func Offset: 0x2c
	// Line 1282, Address: 0x102e184, Func Offset: 0x34
	// Line 1283, Address: 0x102e19c, Func Offset: 0x4c
	// Line 1284, Address: 0x102e1b0, Func Offset: 0x60
	// Line 1286, Address: 0x102e1b8, Func Offset: 0x68
	// Line 1288, Address: 0x102e1cc, Func Offset: 0x7c
	// Line 1289, Address: 0x102e1e4, Func Offset: 0x94
	// Line 1290, Address: 0x102e1f8, Func Offset: 0xa8
	// Line 1291, Address: 0x102e200, Func Offset: 0xb0
	// Line 1293, Address: 0x102e208, Func Offset: 0xb8
	// Line 1294, Address: 0x102e21c, Func Offset: 0xcc
	// Line 1299, Address: 0x102e224, Func Offset: 0xd4
	// Line 1300, Address: 0x102e274, Func Offset: 0x124
	// Line 1301, Address: 0x102e27c, Func Offset: 0x12c
	// Line 1307, Address: 0x102e29c, Func Offset: 0x14c
	// Line 1308, Address: 0x102e2bc, Func Offset: 0x16c
	// Line 1309, Address: 0x102e2e0, Func Offset: 0x190
	// Line 1310, Address: 0x102e2ec, Func Offset: 0x19c
	// Line 1311, Address: 0x102e2f4, Func Offset: 0x1a4
	// Line 1313, Address: 0x102e314, Func Offset: 0x1c4
	// Line 1317, Address: 0x102e340, Func Offset: 0x1f0
	// Line 1320, Address: 0x102e348, Func Offset: 0x1f8
	// Line 1321, Address: 0x102e34c, Func Offset: 0x1fc
	// Line 1325, Address: 0x102e36c, Func Offset: 0x21c
	// Line 1332, Address: 0x102e398, Func Offset: 0x248
	// Line 1339, Address: 0x102e3ac, Func Offset: 0x25c
	// Line 1340, Address: 0x102e3b4, Func Offset: 0x264
	// Line 1341, Address: 0x102e3bc, Func Offset: 0x26c
	// Line 1342, Address: 0x102e3d4, Func Offset: 0x284
	// Line 1343, Address: 0x102e3f4, Func Offset: 0x2a4
	// Line 1347, Address: 0x102e3fc, Func Offset: 0x2ac
	// Line 1349, Address: 0x102e42c, Func Offset: 0x2dc
	// Line 1350, Address: 0x102e438, Func Offset: 0x2e8
	// Line 1354, Address: 0x102e448, Func Offset: 0x2f8
	// Line 1355, Address: 0x102e454, Func Offset: 0x304
	// Line 1356, Address: 0x102e474, Func Offset: 0x324
	// Line 1357, Address: 0x102e4ac, Func Offset: 0x35c
	// Line 1358, Address: 0x102e4cc, Func Offset: 0x37c
	// Line 1360, Address: 0x102e4f0, Func Offset: 0x3a0
	// Line 1363, Address: 0x102e514, Func Offset: 0x3c4
	// Line 1365, Address: 0x102e534, Func Offset: 0x3e4
	// Line 1367, Address: 0x102e548, Func Offset: 0x3f8
	// Line 1368, Address: 0x102e554, Func Offset: 0x404
	// Line 1369, Address: 0x102e564, Func Offset: 0x414
	// Line 1371, Address: 0x102e56c, Func Offset: 0x41c
	// Func End, Address: 0x102e594, Func Offset: 0x444
}

// 
// Start address: 0x102e5a0
void scrollwrtc()
{
	// Line 1377, Address: 0x102e5a0, Func Offset: 0
	// Func End, Address: 0x102e5a8, Func Offset: 0x8
}

// 
// Start address: 0x102e5b0
void scrollwrtz()
{
	// Line 1382, Address: 0x102e5b0, Func Offset: 0
	// Func End, Address: 0x102e5b8, Func Offset: 0x8
}

// 
// Start address: 0x102e5c0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1400, Address: 0x102e5c0, Func Offset: 0
	// Line 1413, Address: 0x102e5e8, Func Offset: 0x28
	// Line 1416, Address: 0x102e608, Func Offset: 0x48
	// Line 1417, Address: 0x102e61c, Func Offset: 0x5c
	// Line 1418, Address: 0x102e630, Func Offset: 0x70
	// Line 1419, Address: 0x102e644, Func Offset: 0x84
	// Line 1421, Address: 0x102e658, Func Offset: 0x98
	// Line 1422, Address: 0x102e664, Func Offset: 0xa4
	// Line 1423, Address: 0x102e678, Func Offset: 0xb8
	// Func End, Address: 0x102e688, Func Offset: 0xc8
}

// 
// Start address: 0x102e690
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1427, Address: 0x102e690, Func Offset: 0
	// Line 1431, Address: 0x102e6b8, Func Offset: 0x28
	// Line 1434, Address: 0x102e6d8, Func Offset: 0x48
	// Line 1435, Address: 0x102e6ec, Func Offset: 0x5c
	// Line 1436, Address: 0x102e700, Func Offset: 0x70
	// Line 1437, Address: 0x102e714, Func Offset: 0x84
	// Line 1439, Address: 0x102e728, Func Offset: 0x98
	// Line 1440, Address: 0x102e734, Func Offset: 0xa4
	// Line 1441, Address: 0x102e748, Func Offset: 0xb8
	// Func End, Address: 0x102e758, Func Offset: 0xc8
}

// 
// Start address: 0x102e760
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1461, Address: 0x102e760, Func Offset: 0
	// Line 1465, Address: 0x102e788, Func Offset: 0x28
	// Line 1468, Address: 0x102e7a8, Func Offset: 0x48
	// Line 1469, Address: 0x102e7bc, Func Offset: 0x5c
	// Line 1470, Address: 0x102e7cc, Func Offset: 0x6c
	// Line 1471, Address: 0x102e7e0, Func Offset: 0x80
	// Line 1473, Address: 0x102e7f0, Func Offset: 0x90
	// Line 1474, Address: 0x102e7fc, Func Offset: 0x9c
	// Line 1475, Address: 0x102e810, Func Offset: 0xb0
	// Func End, Address: 0x102e820, Func Offset: 0xc0
}

// 
// Start address: 0x102e820
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
	// Line 1494, Address: 0x102e820, Func Offset: 0
	// Line 1500, Address: 0x102e854, Func Offset: 0x34
	// Line 1502, Address: 0x102e864, Func Offset: 0x44
	// Line 1503, Address: 0x102e868, Func Offset: 0x48
	// Line 1504, Address: 0x102e870, Func Offset: 0x50
	// Line 1506, Address: 0x102e880, Func Offset: 0x60
	// Line 1508, Address: 0x102e884, Func Offset: 0x64
	// Line 1509, Address: 0x102e88c, Func Offset: 0x6c
	// Line 1512, Address: 0x102e894, Func Offset: 0x74
	// Line 1513, Address: 0x102e89c, Func Offset: 0x7c
	// Line 1514, Address: 0x102e8a8, Func Offset: 0x88
	// Line 1516, Address: 0x102e8b4, Func Offset: 0x94
	// Line 1517, Address: 0x102e8bc, Func Offset: 0x9c
	// Line 1518, Address: 0x102e8c4, Func Offset: 0xa4
	// Line 1519, Address: 0x102e8cc, Func Offset: 0xac
	// Line 1521, Address: 0x102e8d8, Func Offset: 0xb8
	// Line 1522, Address: 0x102e8e0, Func Offset: 0xc0
	// Line 1523, Address: 0x102e8e8, Func Offset: 0xc8
	// Line 1524, Address: 0x102e8f0, Func Offset: 0xd0
	// Line 1526, Address: 0x102e8fc, Func Offset: 0xdc
	// Line 1527, Address: 0x102e904, Func Offset: 0xe4
	// Line 1528, Address: 0x102e90c, Func Offset: 0xec
	// Line 1531, Address: 0x102e914, Func Offset: 0xf4
	// Line 1532, Address: 0x102e91c, Func Offset: 0xfc
	// Line 1535, Address: 0x102e924, Func Offset: 0x104
	// Line 1536, Address: 0x102e968, Func Offset: 0x148
	// Line 1537, Address: 0x102e9ac, Func Offset: 0x18c
	// Line 1538, Address: 0x102e9f0, Func Offset: 0x1d0
	// Line 1540, Address: 0x102ea34, Func Offset: 0x214
	// Func End, Address: 0x102ea64, Func Offset: 0x244
}

// 
// Start address: 0x102ea70
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1557, Address: 0x102ea70, Func Offset: 0
	// Line 1558, Address: 0x102ea90, Func Offset: 0x20
	// Line 1559, Address: 0x102eab0, Func Offset: 0x40
	// Func End, Address: 0x102eac0, Func Offset: 0x50
}

// 
// Start address: 0x102eac0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1561, Address: 0x102eac0, Func Offset: 0
	// Line 1562, Address: 0x102eae0, Func Offset: 0x20
	// Line 1563, Address: 0x102eae4, Func Offset: 0x24
	// Line 1564, Address: 0x102eb04, Func Offset: 0x44
	// Func End, Address: 0x102eb14, Func Offset: 0x54
}

// 
// Start address: 0x102eb20
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1571, Address: 0x102eb20, Func Offset: 0
	// Line 1577, Address: 0x102eb50, Func Offset: 0x30
	// Line 1578, Address: 0x102eb60, Func Offset: 0x40
	// Line 1584, Address: 0x102eb70, Func Offset: 0x50
	// Line 1585, Address: 0x102eb8c, Func Offset: 0x6c
	// Line 1586, Address: 0x102eb90, Func Offset: 0x70
	// Line 1587, Address: 0x102ebac, Func Offset: 0x8c
	// Line 1588, Address: 0x102ebb0, Func Offset: 0x90
	// Line 1589, Address: 0x102ebd0, Func Offset: 0xb0
	// Line 1590, Address: 0x102ebd8, Func Offset: 0xb8
	// Line 1591, Address: 0x102ebf8, Func Offset: 0xd8
	// Line 1592, Address: 0x102ec00, Func Offset: 0xe0
	// Line 1593, Address: 0x102ec48, Func Offset: 0x128
	// Line 1595, Address: 0x102ec54, Func Offset: 0x134
	// Line 1597, Address: 0x102ec70, Func Offset: 0x150
	// Line 1602, Address: 0x102ec78, Func Offset: 0x158
	// Line 1603, Address: 0x102ec84, Func Offset: 0x164
	// Line 1606, Address: 0x102ec90, Func Offset: 0x170
	// Line 1607, Address: 0x102ec98, Func Offset: 0x178
	// Line 1608, Address: 0x102ecb8, Func Offset: 0x198
	// Line 1609, Address: 0x102ecd4, Func Offset: 0x1b4
	// Line 1610, Address: 0x102ecdc, Func Offset: 0x1bc
	// Line 1611, Address: 0x102ecfc, Func Offset: 0x1dc
	// Line 1613, Address: 0x102ed18, Func Offset: 0x1f8
	// Line 1614, Address: 0x102ed20, Func Offset: 0x200
	// Line 1615, Address: 0x102ed28, Func Offset: 0x208
	// Line 1616, Address: 0x102ed34, Func Offset: 0x214
	// Line 1617, Address: 0x102ed4c, Func Offset: 0x22c
	// Line 1619, Address: 0x102ed5c, Func Offset: 0x23c
	// Line 1622, Address: 0x102ed68, Func Offset: 0x248
	// Line 1623, Address: 0x102ed70, Func Offset: 0x250
	// Line 1624, Address: 0x102ed74, Func Offset: 0x254
	// Func End, Address: 0x102ed94, Func Offset: 0x274
}

// 
// Start address: 0x102eda0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1644, Address: 0x102eda0, Func Offset: 0
	// Line 1652, Address: 0x102edc8, Func Offset: 0x28
	// Line 1653, Address: 0x102ee2c, Func Offset: 0x8c
	// Line 1659, Address: 0x102ee34, Func Offset: 0x94
	// Line 1660, Address: 0x102ee3c, Func Offset: 0x9c
	// Line 1661, Address: 0x102ee5c, Func Offset: 0xbc
	// Line 1662, Address: 0x102ee78, Func Offset: 0xd8
	// Line 1663, Address: 0x102ee80, Func Offset: 0xe0
	// Line 1664, Address: 0x102eea0, Func Offset: 0x100
	// Line 1667, Address: 0x102eebc, Func Offset: 0x11c
	// Line 1668, Address: 0x102eec4, Func Offset: 0x124
	// Line 1669, Address: 0x102eecc, Func Offset: 0x12c
	// Line 1670, Address: 0x102eed8, Func Offset: 0x138
	// Line 1671, Address: 0x102eef0, Func Offset: 0x150
	// Line 1672, Address: 0x102eef8, Func Offset: 0x158
	// Line 1677, Address: 0x102ef08, Func Offset: 0x168
	// Line 1680, Address: 0x102ef14, Func Offset: 0x174
	// Line 1681, Address: 0x102ef1c, Func Offset: 0x17c
	// Line 1682, Address: 0x102ef20, Func Offset: 0x180
	// Func End, Address: 0x102ef3c, Func Offset: 0x19c
}

// 
// Start address: 0x102ef40
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1696, Address: 0x102ef40, Func Offset: 0
	// Line 1703, Address: 0x102ef5c, Func Offset: 0x1c
	// Line 1704, Address: 0x102ef60, Func Offset: 0x20
	// Line 1705, Address: 0x102ef68, Func Offset: 0x28
	// Line 1706, Address: 0x102ef8c, Func Offset: 0x4c
	// Line 1707, Address: 0x102ef98, Func Offset: 0x58
	// Line 1708, Address: 0x102efb0, Func Offset: 0x70
	// Line 1709, Address: 0x102efc4, Func Offset: 0x84
	// Line 1714, Address: 0x102efdc, Func Offset: 0x9c
	// Func End, Address: 0x102eff4, Func Offset: 0xb4
}

// 
// Start address: 0x102f000
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1728, Address: 0x102f000, Func Offset: 0
	// Line 1729, Address: 0x102f00c, Func Offset: 0xc
	// Line 1730, Address: 0x102f038, Func Offset: 0x38
	// Line 1731, Address: 0x102f084, Func Offset: 0x84
	// Line 1732, Address: 0x102f0b0, Func Offset: 0xb0
	// Line 1734, Address: 0x102f0fc, Func Offset: 0xfc
	// Line 1740, Address: 0x102f108, Func Offset: 0x108
	// Line 1741, Address: 0x102f10c, Func Offset: 0x10c
	// Func End, Address: 0x102f118, Func Offset: 0x118
}

// 
// Start address: 0x102f120
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1758, Address: 0x102f120, Func Offset: 0
	// Line 1759, Address: 0x102f13c, Func Offset: 0x1c
	// Line 1761, Address: 0x102f158, Func Offset: 0x38
	// Func End, Address: 0x102f168, Func Offset: 0x48
}

// 
// Start address: 0x102f170
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1763, Address: 0x102f170, Func Offset: 0
	// Line 1764, Address: 0x102f18c, Func Offset: 0x1c
	// Line 1765, Address: 0x102f190, Func Offset: 0x20
	// Line 1767, Address: 0x102f1ac, Func Offset: 0x3c
	// Func End, Address: 0x102f1bc, Func Offset: 0x4c
}

// 
// Start address: 0x102f1c0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1769, Address: 0x102f1c0, Func Offset: 0
	// Line 1770, Address: 0x102f1d4, Func Offset: 0x14
	// Line 1772, Address: 0x102f1f0, Func Offset: 0x30
	// Func End, Address: 0x102f200, Func Offset: 0x40
}

// 
// Start address: 0x102f200
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1774, Address: 0x102f200, Func Offset: 0
	// Line 1775, Address: 0x102f21c, Func Offset: 0x1c
	// Line 1777, Address: 0x102f238, Func Offset: 0x38
	// Func End, Address: 0x102f248, Func Offset: 0x48
}

// 
// Start address: 0x102f250
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x102f250, Func Offset: 0
	// Line 1780, Address: 0x102f268, Func Offset: 0x18
	// Line 1781, Address: 0x102f278, Func Offset: 0x28
	// Line 1782, Address: 0x102f288, Func Offset: 0x38
	// Line 1783, Address: 0x102f294, Func Offset: 0x44
	// Line 1785, Address: 0x102f2a0, Func Offset: 0x50
	// Line 1786, Address: 0x102f2cc, Func Offset: 0x7c
	// Line 1789, Address: 0x102f2f8, Func Offset: 0xa8
	// Func End, Address: 0x102f304, Func Offset: 0xb4
}

// 
// Start address: 0x102f310
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1805, Address: 0x102f310, Func Offset: 0
	// Line 1812, Address: 0x102f328, Func Offset: 0x18
	// Line 1813, Address: 0x102f334, Func Offset: 0x24
	// Line 1814, Address: 0x102f340, Func Offset: 0x30
	// Line 1815, Address: 0x102f348, Func Offset: 0x38
	// Line 1816, Address: 0x102f34c, Func Offset: 0x3c
	// Line 1820, Address: 0x102f364, Func Offset: 0x54
	// Line 1821, Address: 0x102f36c, Func Offset: 0x5c
	// Line 1822, Address: 0x102f370, Func Offset: 0x60
	// Line 1824, Address: 0x102f380, Func Offset: 0x70
	// Func End, Address: 0x102f3a0, Func Offset: 0x90
}

// 
// Start address: 0x102f3a0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1827, Address: 0x102f3a0, Func Offset: 0
	// Line 1828, Address: 0x102f3b8, Func Offset: 0x18
	// Line 1829, Address: 0x102f3d8, Func Offset: 0x38
	// Func End, Address: 0x102f3e8, Func Offset: 0x48
}

// 
// Start address: 0x102f3f0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1834, Address: 0x102f3f0, Func Offset: 0
	// Line 1838, Address: 0x102f410, Func Offset: 0x20
	// Line 1841, Address: 0x102f42c, Func Offset: 0x3c
	// Line 1845, Address: 0x102f454, Func Offset: 0x64
	// Line 1846, Address: 0x102f460, Func Offset: 0x70
	// Line 1848, Address: 0x102f488, Func Offset: 0x98
	// Func End, Address: 0x102f498, Func Offset: 0xa8
}

// 
// Start address: 0x102f4a0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1854, Address: 0x102f4a0, Func Offset: 0
	// Line 1857, Address: 0x102f4bc, Func Offset: 0x1c
	// Line 1858, Address: 0x102f4c4, Func Offset: 0x24
	// Line 1861, Address: 0x102f4cc, Func Offset: 0x2c
	// Line 1863, Address: 0x102f4f0, Func Offset: 0x50
	// Line 1864, Address: 0x102f510, Func Offset: 0x70
	// Line 1865, Address: 0x102f518, Func Offset: 0x78
	// Line 1866, Address: 0x102f53c, Func Offset: 0x9c
	// Func End, Address: 0x102f558, Func Offset: 0xb8
}

// 
// Start address: 0x102f560
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1892, Address: 0x102f560, Func Offset: 0
	// Line 1897, Address: 0x102f588, Func Offset: 0x28
	// Line 1898, Address: 0x102f598, Func Offset: 0x38
	// Line 1900, Address: 0x102f5b4, Func Offset: 0x54
	// Line 1901, Address: 0x102f5d8, Func Offset: 0x78
	// Line 1902, Address: 0x102f600, Func Offset: 0xa0
	// Line 1903, Address: 0x102f60c, Func Offset: 0xac
	// Line 1904, Address: 0x102f614, Func Offset: 0xb4
	// Line 1907, Address: 0x102f630, Func Offset: 0xd0
	// Line 1911, Address: 0x102f658, Func Offset: 0xf8
	// Line 1914, Address: 0x102f660, Func Offset: 0x100
	// Line 1915, Address: 0x102f664, Func Offset: 0x104
	// Line 1919, Address: 0x102f680, Func Offset: 0x120
	// Line 1926, Address: 0x102f6a8, Func Offset: 0x148
	// Func End, Address: 0x102f6c4, Func Offset: 0x164
}

// 
// Start address: 0x102f6d0
void mapinit()
{
	// Line 1937, Address: 0x102f6d0, Func Offset: 0
	// Line 1939, Address: 0x102f6d8, Func Offset: 0x8
	// Line 1940, Address: 0x102f6ec, Func Offset: 0x1c
	// Line 1943, Address: 0x102f700, Func Offset: 0x30
	// Line 1944, Address: 0x102f720, Func Offset: 0x50
	// Func End, Address: 0x102f730, Func Offset: 0x60
}

// 
// Start address: 0x102f730
void mapset()
{
	// Line 1949, Address: 0x102f730, Func Offset: 0
	// Func End, Address: 0x102f738, Func Offset: 0x8
}

// 
// Start address: 0x102f740
void divdevset()
{
	// Line 1953, Address: 0x102f740, Func Offset: 0
	// Func End, Address: 0x102f748, Func Offset: 0x8
}

// 
// Start address: 0x102f750
void enecginit()
{
	// Line 1957, Address: 0x102f750, Func Offset: 0
	// Func End, Address: 0x102f758, Func Offset: 0x8
}

