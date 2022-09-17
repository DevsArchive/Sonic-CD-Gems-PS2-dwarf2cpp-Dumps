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

typedef void(*type_7)(int, int);
typedef int(*type_11)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef char type_2[3];
typedef unsigned char* type_3[0];
typedef unsigned char type_4[4];
typedef short type_5[2];
typedef short type_6[2][8];
typedef char type_8[3];
typedef unsigned char type_9[49];
typedef char type_10[6];
typedef unsigned short type_12[4];
typedef unsigned short type_13[4][1024];
typedef _anon2* type_14[8];
typedef unsigned char type_15[2];
typedef unsigned char type_16[64];
typedef unsigned char type_17[64][8];
typedef unsigned char type_18[22];
typedef unsigned char type_19[64];
typedef unsigned char type_20[64][8];
typedef short type_21[256];
typedef char type_22[7];
typedef short type_23[9];
typedef short type_24[2];
typedef short type_25[2][1];
typedef char type_26[3];
typedef _anon2* type_27[8];
typedef unsigned char type_28[65];
typedef _anon1 type_29[128];
typedef char type_30[11];
typedef short type_31[6];
typedef short type_32[9];

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
short endplpositbl[2][8];
short playpositbl[2][1];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon6 demoflag;
short enddemono;
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
// Start address: 0x101afa0
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
	// Line 172, Address: 0x101afa0, Func Offset: 0
	// Line 173, Address: 0x101afc0, Func Offset: 0x20
	// Line 178, Address: 0x101afec, Func Offset: 0x4c
	// Line 184, Address: 0x101b010, Func Offset: 0x70
	// Line 188, Address: 0x101b020, Func Offset: 0x80
	// Line 189, Address: 0x101b024, Func Offset: 0x84
	// Line 191, Address: 0x101b028, Func Offset: 0x88
	// Line 192, Address: 0x101b030, Func Offset: 0x90
	// Line 195, Address: 0x101b054, Func Offset: 0xb4
	// Line 196, Address: 0x101b058, Func Offset: 0xb8
	// Line 199, Address: 0x101b07c, Func Offset: 0xdc
	// Line 204, Address: 0x101b090, Func Offset: 0xf0
	// Line 207, Address: 0x101b09c, Func Offset: 0xfc
	// Line 208, Address: 0x101b0a0, Func Offset: 0x100
	// Line 209, Address: 0x101b0ac, Func Offset: 0x10c
	// Line 210, Address: 0x101b0b0, Func Offset: 0x110
	// Line 211, Address: 0x101b0b4, Func Offset: 0x114
	// Line 212, Address: 0x101b0bc, Func Offset: 0x11c
	// Line 213, Address: 0x101b0c0, Func Offset: 0x120
	// Line 215, Address: 0x101b0c4, Func Offset: 0x124
	// Line 216, Address: 0x101b0cc, Func Offset: 0x12c
	// Line 217, Address: 0x101b0ec, Func Offset: 0x14c
	// Line 219, Address: 0x101b0f8, Func Offset: 0x158
	// Line 220, Address: 0x101b118, Func Offset: 0x178
	// Line 222, Address: 0x101b138, Func Offset: 0x198
	// Line 223, Address: 0x101b170, Func Offset: 0x1d0
	// Line 225, Address: 0x101b188, Func Offset: 0x1e8
	// Line 226, Address: 0x101b194, Func Offset: 0x1f4
	// Func End, Address: 0x101b1bc, Func Offset: 0x21c
}

// 
// Start address: 0x101b1c0
_anon1* main_chk()
{
	// Line 240, Address: 0x101b1c0, Func Offset: 0
	// Line 241, Address: 0x101b1d4, Func Offset: 0x14
	// Line 243, Address: 0x101b1e4, Func Offset: 0x24
	// Line 245, Address: 0x101b1ec, Func Offset: 0x2c
	// Func End, Address: 0x101b1f4, Func Offset: 0x34
}

// 
// Start address: 0x101b200
void scr_set()
{
	short* pScrTbl;
	// Line 283, Address: 0x101b200, Func Offset: 0
	// Line 286, Address: 0x101b20c, Func Offset: 0xc
	// Line 287, Address: 0x101b220, Func Offset: 0x20
	// Line 288, Address: 0x101b234, Func Offset: 0x34
	// Line 290, Address: 0x101b23c, Func Offset: 0x3c
	// Line 291, Address: 0x101b244, Func Offset: 0x44
	// Line 292, Address: 0x101b250, Func Offset: 0x50
	// Line 293, Address: 0x101b254, Func Offset: 0x54
	// Line 294, Address: 0x101b268, Func Offset: 0x68
	// Line 295, Address: 0x101b26c, Func Offset: 0x6c
	// Line 296, Address: 0x101b280, Func Offset: 0x80
	// Line 297, Address: 0x101b284, Func Offset: 0x84
	// Line 298, Address: 0x101b298, Func Offset: 0x98
	// Line 299, Address: 0x101b29c, Func Offset: 0x9c
	// Line 300, Address: 0x101b2b0, Func Offset: 0xb0
	// Line 301, Address: 0x101b2d0, Func Offset: 0xd0
	// Line 302, Address: 0x101b2d4, Func Offset: 0xd4
	// Line 303, Address: 0x101b2e0, Func Offset: 0xe0
	// Line 305, Address: 0x101b2ec, Func Offset: 0xec
	// Line 306, Address: 0x101b2f8, Func Offset: 0xf8
	// Line 308, Address: 0x101b304, Func Offset: 0x104
	// Line 309, Address: 0x101b30c, Func Offset: 0x10c
	// Func End, Address: 0x101b320, Func Offset: 0x120
}

// 
// Start address: 0x101b320
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 358, Address: 0x101b320, Func Offset: 0
	// Line 361, Address: 0x101b334, Func Offset: 0x14
	// Line 362, Address: 0x101b344, Func Offset: 0x24
	// Line 363, Address: 0x101b34c, Func Offset: 0x2c
	// Line 365, Address: 0x101b35c, Func Offset: 0x3c
	// Line 366, Address: 0x101b374, Func Offset: 0x54
	// Line 367, Address: 0x101b384, Func Offset: 0x64
	// Line 368, Address: 0x101b38c, Func Offset: 0x6c
	// Line 370, Address: 0x101b390, Func Offset: 0x70
	// Line 372, Address: 0x101b398, Func Offset: 0x78
	// Line 373, Address: 0x101b3b8, Func Offset: 0x98
	// Line 374, Address: 0x101b3dc, Func Offset: 0xbc
	// Line 376, Address: 0x101b3e4, Func Offset: 0xc4
	// Line 380, Address: 0x101b404, Func Offset: 0xe4
	// Line 381, Address: 0x101b418, Func Offset: 0xf8
	// Line 385, Address: 0x101b42c, Func Offset: 0x10c
	// Line 386, Address: 0x101b440, Func Offset: 0x120
	// Line 387, Address: 0x101b44c, Func Offset: 0x12c
	// Line 388, Address: 0x101b454, Func Offset: 0x134
	// Line 392, Address: 0x101b458, Func Offset: 0x138
	// Line 393, Address: 0x101b47c, Func Offset: 0x15c
	// Line 397, Address: 0x101b48c, Func Offset: 0x16c
	// Line 399, Address: 0x101b494, Func Offset: 0x174
	// Line 400, Address: 0x101b4a8, Func Offset: 0x188
	// Line 401, Address: 0x101b4b4, Func Offset: 0x194
	// Line 402, Address: 0x101b4bc, Func Offset: 0x19c
	// Line 406, Address: 0x101b4c0, Func Offset: 0x1a0
	// Line 407, Address: 0x101b4e4, Func Offset: 0x1c4
	// Line 411, Address: 0x101b4f4, Func Offset: 0x1d4
	// Line 413, Address: 0x101b4fc, Func Offset: 0x1dc
	// Line 416, Address: 0x101b50c, Func Offset: 0x1ec
	// Line 417, Address: 0x101b51c, Func Offset: 0x1fc
	// Line 418, Address: 0x101b52c, Func Offset: 0x20c
	// Line 419, Address: 0x101b53c, Func Offset: 0x21c
	// Line 420, Address: 0x101b54c, Func Offset: 0x22c
	// Func End, Address: 0x101b568, Func Offset: 0x248
}

// 
// Start address: 0x101b570
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 441, Address: 0x101b570, Func Offset: 0
	// Line 444, Address: 0x101b57c, Func Offset: 0xc
	// Line 445, Address: 0x101b584, Func Offset: 0x14
	// Line 447, Address: 0x101b588, Func Offset: 0x18
	// Line 448, Address: 0x101b5a0, Func Offset: 0x30
	// Line 449, Address: 0x101b5ac, Func Offset: 0x3c
	// Line 450, Address: 0x101b5b4, Func Offset: 0x44
	// Line 451, Address: 0x101b5c0, Func Offset: 0x50
	// Line 453, Address: 0x101b5e0, Func Offset: 0x70
	// Line 454, Address: 0x101b5ec, Func Offset: 0x7c
	// Line 455, Address: 0x101b5f8, Func Offset: 0x88
	// Line 457, Address: 0x101b604, Func Offset: 0x94
	// Line 459, Address: 0x101b644, Func Offset: 0xd4
	// Line 460, Address: 0x101b660, Func Offset: 0xf0
	// Line 462, Address: 0x101b66c, Func Offset: 0xfc
	// Line 463, Address: 0x101b678, Func Offset: 0x108
	// Line 464, Address: 0x101b684, Func Offset: 0x114
	// Func End, Address: 0x101b690, Func Offset: 0x120
}

// 
// Start address: 0x101b690
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
	// Line 480, Address: 0x101b690, Func Offset: 0
	// Line 492, Address: 0x101b6ac, Func Offset: 0x1c
	// Line 497, Address: 0x101b6bc, Func Offset: 0x2c
	// Line 499, Address: 0x101b6e8, Func Offset: 0x58
	// Line 501, Address: 0x101b6f0, Func Offset: 0x60
	// Line 502, Address: 0x101b6f8, Func Offset: 0x68
	// Line 504, Address: 0x101b700, Func Offset: 0x70
	// Line 505, Address: 0x101b710, Func Offset: 0x80
	// Line 508, Address: 0x101b720, Func Offset: 0x90
	// Line 509, Address: 0x101b734, Func Offset: 0xa4
	// Line 511, Address: 0x101b744, Func Offset: 0xb4
	// Line 512, Address: 0x101b758, Func Offset: 0xc8
	// Line 514, Address: 0x101b768, Func Offset: 0xd8
	// Line 515, Address: 0x101b77c, Func Offset: 0xec
	// Line 516, Address: 0x101b784, Func Offset: 0xf4
	// Line 518, Address: 0x101b794, Func Offset: 0x104
	// Line 519, Address: 0x101b7a4, Func Offset: 0x114
	// Line 520, Address: 0x101b7bc, Func Offset: 0x12c
	// Line 521, Address: 0x101b7c0, Func Offset: 0x130
	// Line 523, Address: 0x101b7c8, Func Offset: 0x138
	// Line 524, Address: 0x101b7cc, Func Offset: 0x13c
	// Line 528, Address: 0x101b7dc, Func Offset: 0x14c
	// Line 530, Address: 0x101b7ec, Func Offset: 0x15c
	// Line 531, Address: 0x101b814, Func Offset: 0x184
	// Line 532, Address: 0x101b84c, Func Offset: 0x1bc
	// Line 534, Address: 0x101b860, Func Offset: 0x1d0
	// Line 536, Address: 0x101b86c, Func Offset: 0x1dc
	// Line 537, Address: 0x101b884, Func Offset: 0x1f4
	// Line 538, Address: 0x101b890, Func Offset: 0x200
	// Line 539, Address: 0x101b89c, Func Offset: 0x20c
	// Line 542, Address: 0x101b8a4, Func Offset: 0x214
	// Line 547, Address: 0x101b8c4, Func Offset: 0x234
	// Line 549, Address: 0x101b8d0, Func Offset: 0x240
	// Line 550, Address: 0x101b8e4, Func Offset: 0x254
	// Line 552, Address: 0x101b8f4, Func Offset: 0x264
	// Line 553, Address: 0x101b900, Func Offset: 0x270
	// Line 556, Address: 0x101b90c, Func Offset: 0x27c
	// Line 560, Address: 0x101b92c, Func Offset: 0x29c
	// Line 562, Address: 0x101b938, Func Offset: 0x2a8
	// Line 563, Address: 0x101b94c, Func Offset: 0x2bc
	// Line 567, Address: 0x101b95c, Func Offset: 0x2cc
	// Line 568, Address: 0x101b968, Func Offset: 0x2d8
	// Line 569, Address: 0x101b998, Func Offset: 0x308
	// Line 570, Address: 0x101b9c8, Func Offset: 0x338
	// Line 571, Address: 0x101b9e4, Func Offset: 0x354
	// Func End, Address: 0x101ba08, Func Offset: 0x378
}

// 
// Start address: 0x101ba10
void z51aline0(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl0[6];
	// Line 585, Address: 0x101ba10, Func Offset: 0
	// Line 590, Address: 0x101ba28, Func Offset: 0x18
	// Line 594, Address: 0x101ba5c, Func Offset: 0x4c
	// Line 595, Address: 0x101ba80, Func Offset: 0x70
	// Line 596, Address: 0x101ba9c, Func Offset: 0x8c
	// Line 598, Address: 0x101baa0, Func Offset: 0x90
	// Line 599, Address: 0x101baa4, Func Offset: 0x94
	// Line 601, Address: 0x101bab0, Func Offset: 0xa0
	// Line 603, Address: 0x101bac4, Func Offset: 0xb4
	// Line 605, Address: 0x101bad0, Func Offset: 0xc0
	// Line 607, Address: 0x101baf0, Func Offset: 0xe0
	// Line 609, Address: 0x101bb08, Func Offset: 0xf8
	// Line 610, Address: 0x101bb1c, Func Offset: 0x10c
	// Line 611, Address: 0x101bb28, Func Offset: 0x118
	// Line 613, Address: 0x101bb34, Func Offset: 0x124
	// Line 614, Address: 0x101bb58, Func Offset: 0x148
	// Line 615, Address: 0x101bb64, Func Offset: 0x154
	// Line 616, Address: 0x101bb88, Func Offset: 0x178
	// Line 617, Address: 0x101bb94, Func Offset: 0x184
	// Line 618, Address: 0x101bba8, Func Offset: 0x198
	// Func End, Address: 0x101bbc4, Func Offset: 0x1b4
}

// 
// Start address: 0x101bbd0
void z51aline1(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl1[7];
	// Line 632, Address: 0x101bbd0, Func Offset: 0
	// Line 637, Address: 0x101bbe8, Func Offset: 0x18
	// Line 641, Address: 0x101bc14, Func Offset: 0x44
	// Line 642, Address: 0x101bc38, Func Offset: 0x68
	// Line 643, Address: 0x101bc54, Func Offset: 0x84
	// Line 645, Address: 0x101bc58, Func Offset: 0x88
	// Line 646, Address: 0x101bc5c, Func Offset: 0x8c
	// Line 648, Address: 0x101bc68, Func Offset: 0x98
	// Line 650, Address: 0x101bc74, Func Offset: 0xa4
	// Line 652, Address: 0x101bc94, Func Offset: 0xc4
	// Line 654, Address: 0x101bcac, Func Offset: 0xdc
	// Line 655, Address: 0x101bcb8, Func Offset: 0xe8
	// Line 656, Address: 0x101bccc, Func Offset: 0xfc
	// Line 658, Address: 0x101bcd8, Func Offset: 0x108
	// Line 659, Address: 0x101bcfc, Func Offset: 0x12c
	// Line 660, Address: 0x101bd08, Func Offset: 0x138
	// Line 661, Address: 0x101bd2c, Func Offset: 0x15c
	// Line 662, Address: 0x101bd38, Func Offset: 0x168
	// Func End, Address: 0x101bd54, Func Offset: 0x184
}

// 
// Start address: 0x101bd60
void z51aline2(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl2[11];
	// Line 676, Address: 0x101bd60, Func Offset: 0
	// Line 681, Address: 0x101bd78, Func Offset: 0x18
	// Line 685, Address: 0x101bda4, Func Offset: 0x44
	// Line 686, Address: 0x101bdc8, Func Offset: 0x68
	// Line 687, Address: 0x101bde4, Func Offset: 0x84
	// Line 689, Address: 0x101bde8, Func Offset: 0x88
	// Line 690, Address: 0x101bdec, Func Offset: 0x8c
	// Line 691, Address: 0x101bdf8, Func Offset: 0x98
	// Line 693, Address: 0x101be0c, Func Offset: 0xac
	// Line 695, Address: 0x101be18, Func Offset: 0xb8
	// Line 697, Address: 0x101be38, Func Offset: 0xd8
	// Line 699, Address: 0x101be50, Func Offset: 0xf0
	// Line 700, Address: 0x101be64, Func Offset: 0x104
	// Line 701, Address: 0x101be70, Func Offset: 0x110
	// Line 703, Address: 0x101be7c, Func Offset: 0x11c
	// Line 704, Address: 0x101bea0, Func Offset: 0x140
	// Line 705, Address: 0x101beac, Func Offset: 0x14c
	// Line 706, Address: 0x101bed0, Func Offset: 0x170
	// Line 707, Address: 0x101bedc, Func Offset: 0x17c
	// Line 708, Address: 0x101bef0, Func Offset: 0x190
	// Func End, Address: 0x101bf0c, Func Offset: 0x1ac
}

// 
// Start address: 0x101bf10
void z51aline3(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51ascrtbl3[3];
	// Line 722, Address: 0x101bf10, Func Offset: 0
	// Line 727, Address: 0x101bf28, Func Offset: 0x18
	// Line 731, Address: 0x101bf4c, Func Offset: 0x3c
	// Line 732, Address: 0x101bf70, Func Offset: 0x60
	// Line 733, Address: 0x101bf8c, Func Offset: 0x7c
	// Line 735, Address: 0x101bf90, Func Offset: 0x80
	// Line 736, Address: 0x101bf94, Func Offset: 0x84
	// Line 738, Address: 0x101bfa0, Func Offset: 0x90
	// Line 740, Address: 0x101bfac, Func Offset: 0x9c
	// Line 742, Address: 0x101bfcc, Func Offset: 0xbc
	// Line 744, Address: 0x101bfe4, Func Offset: 0xd4
	// Line 745, Address: 0x101bff0, Func Offset: 0xe0
	// Line 746, Address: 0x101c004, Func Offset: 0xf4
	// Line 748, Address: 0x101c010, Func Offset: 0x100
	// Line 749, Address: 0x101c034, Func Offset: 0x124
	// Line 750, Address: 0x101c040, Func Offset: 0x130
	// Line 751, Address: 0x101c064, Func Offset: 0x154
	// Line 752, Address: 0x101c070, Func Offset: 0x160
	// Func End, Address: 0x101c08c, Func Offset: 0x17c
}

// 
// Start address: 0x101c090
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 773, Address: 0x101c090, Func Offset: 0
	// Line 777, Address: 0x101c0ac, Func Offset: 0x1c
	// Line 778, Address: 0x101c0b0, Func Offset: 0x20
	// Line 780, Address: 0x101c0d0, Func Offset: 0x40
	// Line 781, Address: 0x101c0ec, Func Offset: 0x5c
	// Line 782, Address: 0x101c0f8, Func Offset: 0x68
	// Line 784, Address: 0x101c104, Func Offset: 0x74
	// Line 785, Address: 0x101c10c, Func Offset: 0x7c
	// Line 786, Address: 0x101c11c, Func Offset: 0x8c
	// Line 787, Address: 0x101c140, Func Offset: 0xb0
	// Line 788, Address: 0x101c160, Func Offset: 0xd0
	// Func End, Address: 0x101c174, Func Offset: 0xe4
}

// 
// Start address: 0x101c180
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 894, Address: 0x101c180, Func Offset: 0
	// Line 897, Address: 0x101c190, Func Offset: 0x10
	// Line 898, Address: 0x101c1a0, Func Offset: 0x20
	// Line 899, Address: 0x101c1ac, Func Offset: 0x2c
	// Line 901, Address: 0x101c1e4, Func Offset: 0x64
	// Line 902, Address: 0x101c1ec, Func Offset: 0x6c
	// Line 903, Address: 0x101c200, Func Offset: 0x80
	// Line 904, Address: 0x101c220, Func Offset: 0xa0
	// Line 905, Address: 0x101c234, Func Offset: 0xb4
	// Line 907, Address: 0x101c23c, Func Offset: 0xbc
	// Line 912, Address: 0x101c250, Func Offset: 0xd0
	// Func End, Address: 0x101c264, Func Offset: 0xe4
}

// 
// Start address: 0x101c270
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 930, Address: 0x101c270, Func Offset: 0
	// Line 934, Address: 0x101c284, Func Offset: 0x14
	// Line 935, Address: 0x101c28c, Func Offset: 0x1c
	// Line 936, Address: 0x101c294, Func Offset: 0x24
	// Line 937, Address: 0x101c29c, Func Offset: 0x2c
	// Line 938, Address: 0x101c2a0, Func Offset: 0x30
	// Line 939, Address: 0x101c2c4, Func Offset: 0x54
	// Line 940, Address: 0x101c2d0, Func Offset: 0x60
	// Line 942, Address: 0x101c2ec, Func Offset: 0x7c
	// Line 943, Address: 0x101c2f8, Func Offset: 0x88
	// Line 944, Address: 0x101c30c, Func Offset: 0x9c
	// Line 945, Address: 0x101c318, Func Offset: 0xa8
	// Line 946, Address: 0x101c33c, Func Offset: 0xcc
	// Line 948, Address: 0x101c344, Func Offset: 0xd4
	// Line 953, Address: 0x101c36c, Func Offset: 0xfc
	// Func End, Address: 0x101c380, Func Offset: 0x110
}

// 
// Start address: 0x101c380
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 971, Address: 0x101c380, Func Offset: 0
	// Line 975, Address: 0x101c394, Func Offset: 0x14
	// Line 976, Address: 0x101c39c, Func Offset: 0x1c
	// Line 977, Address: 0x101c3a4, Func Offset: 0x24
	// Line 978, Address: 0x101c3ac, Func Offset: 0x2c
	// Line 979, Address: 0x101c3b0, Func Offset: 0x30
	// Line 980, Address: 0x101c3d4, Func Offset: 0x54
	// Line 981, Address: 0x101c3e0, Func Offset: 0x60
	// Line 983, Address: 0x101c3fc, Func Offset: 0x7c
	// Line 984, Address: 0x101c408, Func Offset: 0x88
	// Line 985, Address: 0x101c41c, Func Offset: 0x9c
	// Line 986, Address: 0x101c428, Func Offset: 0xa8
	// Line 987, Address: 0x101c44c, Func Offset: 0xcc
	// Line 989, Address: 0x101c454, Func Offset: 0xd4
	// Line 994, Address: 0x101c47c, Func Offset: 0xfc
	// Func End, Address: 0x101c490, Func Offset: 0x110
}

// 
// Start address: 0x101c490
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 1012, Address: 0x101c490, Func Offset: 0
	// Line 1016, Address: 0x101c4a4, Func Offset: 0x14
	// Line 1017, Address: 0x101c4ac, Func Offset: 0x1c
	// Line 1018, Address: 0x101c4b4, Func Offset: 0x24
	// Line 1019, Address: 0x101c4bc, Func Offset: 0x2c
	// Line 1020, Address: 0x101c4c0, Func Offset: 0x30
	// Line 1021, Address: 0x101c4e4, Func Offset: 0x54
	// Line 1022, Address: 0x101c4f0, Func Offset: 0x60
	// Line 1024, Address: 0x101c50c, Func Offset: 0x7c
	// Line 1025, Address: 0x101c518, Func Offset: 0x88
	// Line 1026, Address: 0x101c52c, Func Offset: 0x9c
	// Line 1027, Address: 0x101c538, Func Offset: 0xa8
	// Line 1028, Address: 0x101c55c, Func Offset: 0xcc
	// Line 1030, Address: 0x101c564, Func Offset: 0xd4
	// Line 1035, Address: 0x101c58c, Func Offset: 0xfc
	// Func End, Address: 0x101c5a0, Func Offset: 0x110
}

// 
// Start address: 0x101c5a0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 1050, Address: 0x101c5a0, Func Offset: 0
	// Line 1054, Address: 0x101c5b0, Func Offset: 0x10
	// Line 1056, Address: 0x101c5c0, Func Offset: 0x20
	// Line 1057, Address: 0x101c5c8, Func Offset: 0x28
	// Line 1058, Address: 0x101c5fc, Func Offset: 0x5c
	// Line 1059, Address: 0x101c604, Func Offset: 0x64
	// Line 1060, Address: 0x101c618, Func Offset: 0x78
	// Line 1061, Address: 0x101c63c, Func Offset: 0x9c
	// Line 1062, Address: 0x101c650, Func Offset: 0xb0
	// Line 1063, Address: 0x101c658, Func Offset: 0xb8
	// Line 1068, Address: 0x101c66c, Func Offset: 0xcc
	// Func End, Address: 0x101c684, Func Offset: 0xe4
}

// 
// Start address: 0x101c690
void scrh_move()
{
	short xwk;
	// Line 1085, Address: 0x101c690, Func Offset: 0
	// Line 1088, Address: 0x101c698, Func Offset: 0x8
	// Line 1089, Address: 0x101c6e0, Func Offset: 0x50
	// Line 1091, Address: 0x101c6f0, Func Offset: 0x60
	// Line 1092, Address: 0x101c6f8, Func Offset: 0x68
	// Line 1093, Address: 0x101c700, Func Offset: 0x70
	// Line 1095, Address: 0x101c710, Func Offset: 0x80
	// Line 1096, Address: 0x101c724, Func Offset: 0x94
	// Line 1100, Address: 0x101c730, Func Offset: 0xa0
	// Line 1101, Address: 0x101c744, Func Offset: 0xb4
	// Line 1102, Address: 0x101c768, Func Offset: 0xd8
	// Line 1104, Address: 0x101c778, Func Offset: 0xe8
	// Line 1106, Address: 0x101c780, Func Offset: 0xf0
	// Line 1107, Address: 0x101c794, Func Offset: 0x104
	// Line 1111, Address: 0x101c7a0, Func Offset: 0x110
	// Line 1112, Address: 0x101c7b4, Func Offset: 0x124
	// Line 1113, Address: 0x101c7d8, Func Offset: 0x148
	// Line 1118, Address: 0x101c7e8, Func Offset: 0x158
	// Line 1119, Address: 0x101c818, Func Offset: 0x188
	// Line 1120, Address: 0x101c820, Func Offset: 0x190
	// Func End, Address: 0x101c830, Func Offset: 0x1a0
}

// 
// Start address: 0x101c830
void scroll_v()
{
	short ywk;
	// Line 1135, Address: 0x101c830, Func Offset: 0
	// Line 1138, Address: 0x101c83c, Func Offset: 0xc
	// Line 1139, Address: 0x101c870, Func Offset: 0x40
	// Line 1140, Address: 0x101c888, Func Offset: 0x58
	// Line 1144, Address: 0x101c894, Func Offset: 0x64
	// Line 1145, Address: 0x101c8ac, Func Offset: 0x7c
	// Line 1146, Address: 0x101c8b8, Func Offset: 0x88
	// Line 1147, Address: 0x101c8dc, Func Offset: 0xac
	// Line 1148, Address: 0x101c8f0, Func Offset: 0xc0
	// Line 1149, Address: 0x101c8fc, Func Offset: 0xcc
	// Line 1150, Address: 0x101c904, Func Offset: 0xd4
	// Line 1151, Address: 0x101c92c, Func Offset: 0xfc
	// Line 1152, Address: 0x101c954, Func Offset: 0x124
	// Line 1153, Address: 0x101c960, Func Offset: 0x130
	// Line 1155, Address: 0x101c968, Func Offset: 0x138
	// Line 1156, Address: 0x101c990, Func Offset: 0x160
	// Line 1157, Address: 0x101c9a0, Func Offset: 0x170
	// Line 1158, Address: 0x101c9a8, Func Offset: 0x178
	// Line 1163, Address: 0x101c9b0, Func Offset: 0x180
	// Line 1164, Address: 0x101c9dc, Func Offset: 0x1ac
	// Line 1165, Address: 0x101c9e8, Func Offset: 0x1b8
	// Line 1166, Address: 0x101c9f0, Func Offset: 0x1c0
	// Line 1167, Address: 0x101ca00, Func Offset: 0x1d0
	// Line 1168, Address: 0x101ca08, Func Offset: 0x1d8
	// Line 1173, Address: 0x101ca10, Func Offset: 0x1e0
	// Line 1174, Address: 0x101ca18, Func Offset: 0x1e8
	// Func End, Address: 0x101ca2c, Func Offset: 0x1fc
}

// 
// Start address: 0x101ca30
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 1188, Address: 0x101ca30, Func Offset: 0
	// Line 1191, Address: 0x101ca40, Func Offset: 0x10
	// Line 1192, Address: 0x101ca5c, Func Offset: 0x2c
	// Line 1193, Address: 0x101ca74, Func Offset: 0x44
	// Line 1194, Address: 0x101ca98, Func Offset: 0x68
	// Line 1195, Address: 0x101caa0, Func Offset: 0x70
	// Line 1199, Address: 0x101cab0, Func Offset: 0x80
	// Line 1200, Address: 0x101cac4, Func Offset: 0x94
	// Line 1201, Address: 0x101cad0, Func Offset: 0xa0
	// Line 1204, Address: 0x101cad8, Func Offset: 0xa8
	// Line 1205, Address: 0x101caf0, Func Offset: 0xc0
	// Line 1206, Address: 0x101cafc, Func Offset: 0xcc
	// Line 1207, Address: 0x101cb1c, Func Offset: 0xec
	// Line 1208, Address: 0x101cb28, Func Offset: 0xf8
	// Line 1209, Address: 0x101cb30, Func Offset: 0x100
	// Line 1211, Address: 0x101cb3c, Func Offset: 0x10c
	// Line 1213, Address: 0x101cb44, Func Offset: 0x114
	// Line 1214, Address: 0x101cb5c, Func Offset: 0x12c
	// Line 1215, Address: 0x101cb68, Func Offset: 0x138
	// Line 1216, Address: 0x101cb88, Func Offset: 0x158
	// Line 1217, Address: 0x101cb94, Func Offset: 0x164
	// Line 1218, Address: 0x101cb9c, Func Offset: 0x16c
	// Line 1221, Address: 0x101cba8, Func Offset: 0x178
	// Func End, Address: 0x101cbbc, Func Offset: 0x18c
}

// 
// Start address: 0x101cbc0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1235, Address: 0x101cbc0, Func Offset: 0
	// Line 1238, Address: 0x101cbd0, Func Offset: 0x10
	// Line 1240, Address: 0x101cbdc, Func Offset: 0x1c
	// Line 1241, Address: 0x101cbf4, Func Offset: 0x34
	// Line 1242, Address: 0x101cc00, Func Offset: 0x40
	// Line 1243, Address: 0x101cc20, Func Offset: 0x60
	// Line 1244, Address: 0x101cc2c, Func Offset: 0x6c
	// Line 1245, Address: 0x101cc34, Func Offset: 0x74
	// Line 1247, Address: 0x101cc40, Func Offset: 0x80
	// Func End, Address: 0x101cc54, Func Offset: 0x94
}

// 
// Start address: 0x101cc60
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1262, Address: 0x101cc60, Func Offset: 0
	// Line 1265, Address: 0x101cc6c, Func Offset: 0xc
	// Line 1266, Address: 0x101cc70, Func Offset: 0x10
	// Line 1267, Address: 0x101cc9c, Func Offset: 0x3c
	// Line 1268, Address: 0x101ccb0, Func Offset: 0x50
	// Line 1269, Address: 0x101ccbc, Func Offset: 0x5c
	// Line 1270, Address: 0x101ccc4, Func Offset: 0x64
	// Line 1272, Address: 0x101ccd0, Func Offset: 0x70
	// Func End, Address: 0x101cce0, Func Offset: 0x80
}

// 
// Start address: 0x101cce0
void sv_move_sub2()
{
	// Line 1276, Address: 0x101cce0, Func Offset: 0
	// Line 1277, Address: 0x101cce8, Func Offset: 0x8
	// Line 1279, Address: 0x101ccf0, Func Offset: 0x10
	// Line 1280, Address: 0x101ccfc, Func Offset: 0x1c
	// Func End, Address: 0x101cd0c, Func Offset: 0x2c
}

// 
// Start address: 0x101cd10
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1294, Address: 0x101cd10, Func Offset: 0
	// Line 1297, Address: 0x101cd1c, Func Offset: 0xc
	// Line 1298, Address: 0x101cd40, Func Offset: 0x30
	// Line 1299, Address: 0x101cd64, Func Offset: 0x54
	// Line 1300, Address: 0x101cd70, Func Offset: 0x60
	// Func End, Address: 0x101cd80, Func Offset: 0x70
}

// 
// Start address: 0x101cd80
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1315, Address: 0x101cd80, Func Offset: 0
	// Line 1316, Address: 0x101cd8c, Func Offset: 0xc
	// Line 1317, Address: 0x101cdb4, Func Offset: 0x34
	// Line 1319, Address: 0x101cdcc, Func Offset: 0x4c
	// Line 1320, Address: 0x101cdd8, Func Offset: 0x58
	// Line 1321, Address: 0x101cde0, Func Offset: 0x60
	// Line 1322, Address: 0x101cdec, Func Offset: 0x6c
	// Line 1323, Address: 0x101ce00, Func Offset: 0x80
	// Line 1324, Address: 0x101ce14, Func Offset: 0x94
	// Line 1328, Address: 0x101ce28, Func Offset: 0xa8
	// Line 1329, Address: 0x101ce34, Func Offset: 0xb4
	// Func End, Address: 0x101ce44, Func Offset: 0xc4
}

// 
// Start address: 0x101ce50
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1343, Address: 0x101ce50, Func Offset: 0
	// Line 1346, Address: 0x101ce5c, Func Offset: 0xc
	// Line 1347, Address: 0x101ce7c, Func Offset: 0x2c
	// Line 1348, Address: 0x101cea0, Func Offset: 0x50
	// Line 1349, Address: 0x101ceac, Func Offset: 0x5c
	// Func End, Address: 0x101cebc, Func Offset: 0x6c
}

// 
// Start address: 0x101cec0
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1364, Address: 0x101cec0, Func Offset: 0
	// Line 1365, Address: 0x101cecc, Func Offset: 0xc
	// Line 1366, Address: 0x101cef4, Func Offset: 0x34
	// Line 1368, Address: 0x101cf0c, Func Offset: 0x4c
	// Line 1369, Address: 0x101cf18, Func Offset: 0x58
	// Line 1370, Address: 0x101cf20, Func Offset: 0x60
	// Line 1371, Address: 0x101cf2c, Func Offset: 0x6c
	// Line 1372, Address: 0x101cf40, Func Offset: 0x80
	// Line 1373, Address: 0x101cf54, Func Offset: 0x94
	// Line 1377, Address: 0x101cf68, Func Offset: 0xa8
	// Line 1378, Address: 0x101cf74, Func Offset: 0xb4
	// Func End, Address: 0x101cf84, Func Offset: 0xc4
}

// 
// Start address: 0x101cf90
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1395, Address: 0x101cf90, Func Offset: 0
	// Line 1399, Address: 0x101cfa0, Func Offset: 0x10
	// Line 1400, Address: 0x101cfb0, Func Offset: 0x20
	// Line 1401, Address: 0x101cfd4, Func Offset: 0x44
	// Line 1402, Address: 0x101cfe8, Func Offset: 0x58
	// Line 1403, Address: 0x101d000, Func Offset: 0x70
	// Line 1405, Address: 0x101d00c, Func Offset: 0x7c
	// Line 1407, Address: 0x101d018, Func Offset: 0x88
	// Line 1408, Address: 0x101d054, Func Offset: 0xc4
	// Line 1409, Address: 0x101d05c, Func Offset: 0xcc
	// Line 1410, Address: 0x101d070, Func Offset: 0xe0
	// Line 1411, Address: 0x101d09c, Func Offset: 0x10c
	// Line 1412, Address: 0x101d0ac, Func Offset: 0x11c
	// Line 1413, Address: 0x101d0c0, Func Offset: 0x130
	// Line 1414, Address: 0x101d0c8, Func Offset: 0x138
	// Line 1419, Address: 0x101d0dc, Func Offset: 0x14c
	// Func End, Address: 0x101d0f0, Func Offset: 0x160
}

// 
// Start address: 0x101d0f0
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
	// Line 1437, Address: 0x101d0f0, Func Offset: 0
	// Line 1446, Address: 0x101d110, Func Offset: 0x20
	// Line 1447, Address: 0x101d114, Func Offset: 0x24
	// Line 1448, Address: 0x101d120, Func Offset: 0x30
	// Line 1449, Address: 0x101d12c, Func Offset: 0x3c
	// Line 1450, Address: 0x101d134, Func Offset: 0x44
	// Line 1451, Address: 0x101d13c, Func Offset: 0x4c
	// Line 1453, Address: 0x101d150, Func Offset: 0x60
	// Line 1454, Address: 0x101d154, Func Offset: 0x64
	// Line 1455, Address: 0x101d160, Func Offset: 0x70
	// Line 1456, Address: 0x101d16c, Func Offset: 0x7c
	// Line 1457, Address: 0x101d174, Func Offset: 0x84
	// Line 1459, Address: 0x101d17c, Func Offset: 0x8c
	// Line 1460, Address: 0x101d188, Func Offset: 0x98
	// Line 1461, Address: 0x101d19c, Func Offset: 0xac
	// Line 1463, Address: 0x101d1a8, Func Offset: 0xb8
	// Line 1464, Address: 0x101d1b0, Func Offset: 0xc0
	// Line 1466, Address: 0x101d1b8, Func Offset: 0xc8
	// Line 1468, Address: 0x101d1d8, Func Offset: 0xe8
	// Line 1474, Address: 0x101d204, Func Offset: 0x114
	// Line 1475, Address: 0x101d218, Func Offset: 0x128
	// Line 1477, Address: 0x101d224, Func Offset: 0x134
	// Line 1478, Address: 0x101d22c, Func Offset: 0x13c
	// Line 1479, Address: 0x101d234, Func Offset: 0x144
	// Line 1481, Address: 0x101d254, Func Offset: 0x164
	// Line 1487, Address: 0x101d280, Func Offset: 0x190
	// Line 1488, Address: 0x101d294, Func Offset: 0x1a4
	// Line 1490, Address: 0x101d2a0, Func Offset: 0x1b0
	// Line 1491, Address: 0x101d2a8, Func Offset: 0x1b8
	// Line 1492, Address: 0x101d2b0, Func Offset: 0x1c0
	// Line 1494, Address: 0x101d2d0, Func Offset: 0x1e0
	// Line 1500, Address: 0x101d2fc, Func Offset: 0x20c
	// Line 1501, Address: 0x101d310, Func Offset: 0x220
	// Line 1503, Address: 0x101d31c, Func Offset: 0x22c
	// Line 1504, Address: 0x101d324, Func Offset: 0x234
	// Line 1505, Address: 0x101d32c, Func Offset: 0x23c
	// Line 1507, Address: 0x101d34c, Func Offset: 0x25c
	// Line 1516, Address: 0x101d378, Func Offset: 0x288
	// Func End, Address: 0x101d3a0, Func Offset: 0x2b0
}

// 
// Start address: 0x101d3a0
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
	// Line 1533, Address: 0x101d3a0, Func Offset: 0
	// Line 1544, Address: 0x101d3cc, Func Offset: 0x2c
	// Line 1546, Address: 0x101d3d4, Func Offset: 0x34
	// Line 1547, Address: 0x101d3ec, Func Offset: 0x4c
	// Line 1548, Address: 0x101d400, Func Offset: 0x60
	// Line 1550, Address: 0x101d408, Func Offset: 0x68
	// Line 1552, Address: 0x101d41c, Func Offset: 0x7c
	// Line 1553, Address: 0x101d434, Func Offset: 0x94
	// Line 1554, Address: 0x101d448, Func Offset: 0xa8
	// Line 1555, Address: 0x101d450, Func Offset: 0xb0
	// Line 1557, Address: 0x101d458, Func Offset: 0xb8
	// Line 1558, Address: 0x101d46c, Func Offset: 0xcc
	// Line 1562, Address: 0x101d474, Func Offset: 0xd4
	// Line 1563, Address: 0x101d4c4, Func Offset: 0x124
	// Line 1564, Address: 0x101d4cc, Func Offset: 0x12c
	// Line 1566, Address: 0x101d4e4, Func Offset: 0x144
	// Line 1567, Address: 0x101d50c, Func Offset: 0x16c
	// Line 1568, Address: 0x101d514, Func Offset: 0x174
	// Line 1575, Address: 0x101d534, Func Offset: 0x194
	// Line 1576, Address: 0x101d554, Func Offset: 0x1b4
	// Line 1577, Address: 0x101d578, Func Offset: 0x1d8
	// Line 1578, Address: 0x101d584, Func Offset: 0x1e4
	// Line 1579, Address: 0x101d58c, Func Offset: 0x1ec
	// Line 1581, Address: 0x101d5ac, Func Offset: 0x20c
	// Line 1585, Address: 0x101d5d8, Func Offset: 0x238
	// Line 1588, Address: 0x101d5e0, Func Offset: 0x240
	// Line 1589, Address: 0x101d5e4, Func Offset: 0x244
	// Line 1593, Address: 0x101d604, Func Offset: 0x264
	// Line 1600, Address: 0x101d630, Func Offset: 0x290
	// Line 1607, Address: 0x101d644, Func Offset: 0x2a4
	// Line 1608, Address: 0x101d64c, Func Offset: 0x2ac
	// Line 1609, Address: 0x101d654, Func Offset: 0x2b4
	// Line 1610, Address: 0x101d66c, Func Offset: 0x2cc
	// Line 1611, Address: 0x101d68c, Func Offset: 0x2ec
	// Line 1615, Address: 0x101d694, Func Offset: 0x2f4
	// Line 1617, Address: 0x101d6c4, Func Offset: 0x324
	// Line 1618, Address: 0x101d6d0, Func Offset: 0x330
	// Line 1622, Address: 0x101d6e0, Func Offset: 0x340
	// Line 1623, Address: 0x101d6ec, Func Offset: 0x34c
	// Line 1624, Address: 0x101d704, Func Offset: 0x364
	// Line 1625, Address: 0x101d724, Func Offset: 0x384
	// Line 1626, Address: 0x101d72c, Func Offset: 0x38c
	// Line 1629, Address: 0x101d74c, Func Offset: 0x3ac
	// Line 1630, Address: 0x101d784, Func Offset: 0x3e4
	// Line 1631, Address: 0x101d7a4, Func Offset: 0x404
	// Line 1633, Address: 0x101d7c8, Func Offset: 0x428
	// Line 1636, Address: 0x101d7ec, Func Offset: 0x44c
	// Line 1638, Address: 0x101d80c, Func Offset: 0x46c
	// Line 1640, Address: 0x101d820, Func Offset: 0x480
	// Line 1641, Address: 0x101d82c, Func Offset: 0x48c
	// Line 1642, Address: 0x101d83c, Func Offset: 0x49c
	// Line 1644, Address: 0x101d844, Func Offset: 0x4a4
	// Func End, Address: 0x101d86c, Func Offset: 0x4cc
}

// 
// Start address: 0x101d870
void scrollwrtc()
{
	// Line 1650, Address: 0x101d870, Func Offset: 0
	// Func End, Address: 0x101d878, Func Offset: 0x8
}

// 
// Start address: 0x101d880
void scrollwrtz()
{
	// Line 1655, Address: 0x101d880, Func Offset: 0
	// Func End, Address: 0x101d888, Func Offset: 0x8
}

// 
// Start address: 0x101d890
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1673, Address: 0x101d890, Func Offset: 0
	// Line 1686, Address: 0x101d8b8, Func Offset: 0x28
	// Line 1689, Address: 0x101d8d8, Func Offset: 0x48
	// Line 1690, Address: 0x101d8ec, Func Offset: 0x5c
	// Line 1691, Address: 0x101d900, Func Offset: 0x70
	// Line 1692, Address: 0x101d914, Func Offset: 0x84
	// Line 1694, Address: 0x101d928, Func Offset: 0x98
	// Line 1695, Address: 0x101d934, Func Offset: 0xa4
	// Line 1696, Address: 0x101d948, Func Offset: 0xb8
	// Func End, Address: 0x101d958, Func Offset: 0xc8
}

// 
// Start address: 0x101d960
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1700, Address: 0x101d960, Func Offset: 0
	// Line 1704, Address: 0x101d988, Func Offset: 0x28
	// Line 1707, Address: 0x101d9a8, Func Offset: 0x48
	// Line 1708, Address: 0x101d9bc, Func Offset: 0x5c
	// Line 1709, Address: 0x101d9d0, Func Offset: 0x70
	// Line 1710, Address: 0x101d9e4, Func Offset: 0x84
	// Line 1712, Address: 0x101d9f8, Func Offset: 0x98
	// Line 1713, Address: 0x101da04, Func Offset: 0xa4
	// Line 1714, Address: 0x101da18, Func Offset: 0xb8
	// Func End, Address: 0x101da28, Func Offset: 0xc8
}

// 
// Start address: 0x101da30
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1734, Address: 0x101da30, Func Offset: 0
	// Line 1738, Address: 0x101da58, Func Offset: 0x28
	// Line 1741, Address: 0x101da78, Func Offset: 0x48
	// Line 1742, Address: 0x101da8c, Func Offset: 0x5c
	// Line 1743, Address: 0x101da9c, Func Offset: 0x6c
	// Line 1744, Address: 0x101dab0, Func Offset: 0x80
	// Line 1746, Address: 0x101dac0, Func Offset: 0x90
	// Line 1747, Address: 0x101dacc, Func Offset: 0x9c
	// Line 1748, Address: 0x101dae0, Func Offset: 0xb0
	// Func End, Address: 0x101daf0, Func Offset: 0xc0
}

// 
// Start address: 0x101daf0
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
	// Line 1767, Address: 0x101daf0, Func Offset: 0
	// Line 1773, Address: 0x101db24, Func Offset: 0x34
	// Line 1775, Address: 0x101db34, Func Offset: 0x44
	// Line 1776, Address: 0x101db38, Func Offset: 0x48
	// Line 1777, Address: 0x101db40, Func Offset: 0x50
	// Line 1779, Address: 0x101db50, Func Offset: 0x60
	// Line 1781, Address: 0x101db54, Func Offset: 0x64
	// Line 1782, Address: 0x101db5c, Func Offset: 0x6c
	// Line 1785, Address: 0x101db64, Func Offset: 0x74
	// Line 1786, Address: 0x101db6c, Func Offset: 0x7c
	// Line 1787, Address: 0x101db78, Func Offset: 0x88
	// Line 1789, Address: 0x101db84, Func Offset: 0x94
	// Line 1790, Address: 0x101db8c, Func Offset: 0x9c
	// Line 1791, Address: 0x101db94, Func Offset: 0xa4
	// Line 1792, Address: 0x101db9c, Func Offset: 0xac
	// Line 1794, Address: 0x101dba8, Func Offset: 0xb8
	// Line 1795, Address: 0x101dbb0, Func Offset: 0xc0
	// Line 1796, Address: 0x101dbb8, Func Offset: 0xc8
	// Line 1797, Address: 0x101dbc0, Func Offset: 0xd0
	// Line 1799, Address: 0x101dbcc, Func Offset: 0xdc
	// Line 1800, Address: 0x101dbd4, Func Offset: 0xe4
	// Line 1801, Address: 0x101dbdc, Func Offset: 0xec
	// Line 1804, Address: 0x101dbe4, Func Offset: 0xf4
	// Line 1805, Address: 0x101dbec, Func Offset: 0xfc
	// Line 1808, Address: 0x101dbf4, Func Offset: 0x104
	// Line 1809, Address: 0x101dc38, Func Offset: 0x148
	// Line 1810, Address: 0x101dc7c, Func Offset: 0x18c
	// Line 1811, Address: 0x101dcc0, Func Offset: 0x1d0
	// Line 1813, Address: 0x101dd04, Func Offset: 0x214
	// Func End, Address: 0x101dd34, Func Offset: 0x244
}

// 
// Start address: 0x101dd40
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1831, Address: 0x101dd40, Func Offset: 0
	// Line 1832, Address: 0x101dd60, Func Offset: 0x20
	// Line 1833, Address: 0x101dd80, Func Offset: 0x40
	// Func End, Address: 0x101dd90, Func Offset: 0x50
}

// 
// Start address: 0x101dd90
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1835, Address: 0x101dd90, Func Offset: 0
	// Line 1836, Address: 0x101ddb0, Func Offset: 0x20
	// Line 1837, Address: 0x101ddb4, Func Offset: 0x24
	// Line 1838, Address: 0x101ddd4, Func Offset: 0x44
	// Func End, Address: 0x101dde4, Func Offset: 0x54
}

// 
// Start address: 0x101ddf0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1845, Address: 0x101ddf0, Func Offset: 0
	// Line 1851, Address: 0x101de20, Func Offset: 0x30
	// Line 1852, Address: 0x101de30, Func Offset: 0x40
	// Line 1858, Address: 0x101de40, Func Offset: 0x50
	// Line 1859, Address: 0x101de5c, Func Offset: 0x6c
	// Line 1860, Address: 0x101de60, Func Offset: 0x70
	// Line 1861, Address: 0x101de7c, Func Offset: 0x8c
	// Line 1862, Address: 0x101de80, Func Offset: 0x90
	// Line 1863, Address: 0x101dea0, Func Offset: 0xb0
	// Line 1864, Address: 0x101dea8, Func Offset: 0xb8
	// Line 1865, Address: 0x101dec8, Func Offset: 0xd8
	// Line 1866, Address: 0x101ded0, Func Offset: 0xe0
	// Line 1867, Address: 0x101df18, Func Offset: 0x128
	// Line 1869, Address: 0x101df24, Func Offset: 0x134
	// Line 1871, Address: 0x101df40, Func Offset: 0x150
	// Line 1876, Address: 0x101df48, Func Offset: 0x158
	// Line 1877, Address: 0x101df54, Func Offset: 0x164
	// Line 1880, Address: 0x101df60, Func Offset: 0x170
	// Line 1881, Address: 0x101df68, Func Offset: 0x178
	// Line 1882, Address: 0x101df88, Func Offset: 0x198
	// Line 1883, Address: 0x101dfa4, Func Offset: 0x1b4
	// Line 1884, Address: 0x101dfac, Func Offset: 0x1bc
	// Line 1885, Address: 0x101dfcc, Func Offset: 0x1dc
	// Line 1887, Address: 0x101dfe8, Func Offset: 0x1f8
	// Line 1888, Address: 0x101dff0, Func Offset: 0x200
	// Line 1889, Address: 0x101dff8, Func Offset: 0x208
	// Line 1890, Address: 0x101e004, Func Offset: 0x214
	// Line 1891, Address: 0x101e01c, Func Offset: 0x22c
	// Line 1893, Address: 0x101e02c, Func Offset: 0x23c
	// Line 1896, Address: 0x101e038, Func Offset: 0x248
	// Line 1897, Address: 0x101e040, Func Offset: 0x250
	// Line 1898, Address: 0x101e044, Func Offset: 0x254
	// Func End, Address: 0x101e064, Func Offset: 0x274
}

// 
// Start address: 0x101e070
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1918, Address: 0x101e070, Func Offset: 0
	// Line 1926, Address: 0x101e098, Func Offset: 0x28
	// Line 1927, Address: 0x101e0fc, Func Offset: 0x8c
	// Line 1933, Address: 0x101e104, Func Offset: 0x94
	// Line 1934, Address: 0x101e10c, Func Offset: 0x9c
	// Line 1935, Address: 0x101e12c, Func Offset: 0xbc
	// Line 1936, Address: 0x101e148, Func Offset: 0xd8
	// Line 1937, Address: 0x101e150, Func Offset: 0xe0
	// Line 1938, Address: 0x101e170, Func Offset: 0x100
	// Line 1941, Address: 0x101e18c, Func Offset: 0x11c
	// Line 1942, Address: 0x101e194, Func Offset: 0x124
	// Line 1943, Address: 0x101e19c, Func Offset: 0x12c
	// Line 1944, Address: 0x101e1a8, Func Offset: 0x138
	// Line 1945, Address: 0x101e1c0, Func Offset: 0x150
	// Line 1946, Address: 0x101e1c8, Func Offset: 0x158
	// Line 1951, Address: 0x101e1d8, Func Offset: 0x168
	// Line 1954, Address: 0x101e1e4, Func Offset: 0x174
	// Line 1955, Address: 0x101e1ec, Func Offset: 0x17c
	// Line 1956, Address: 0x101e1f0, Func Offset: 0x180
	// Func End, Address: 0x101e20c, Func Offset: 0x19c
}

// 
// Start address: 0x101e210
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1970, Address: 0x101e210, Func Offset: 0
	// Line 1977, Address: 0x101e22c, Func Offset: 0x1c
	// Line 1978, Address: 0x101e230, Func Offset: 0x20
	// Line 1979, Address: 0x101e238, Func Offset: 0x28
	// Line 1980, Address: 0x101e25c, Func Offset: 0x4c
	// Line 1981, Address: 0x101e268, Func Offset: 0x58
	// Line 1982, Address: 0x101e280, Func Offset: 0x70
	// Line 1983, Address: 0x101e294, Func Offset: 0x84
	// Line 1988, Address: 0x101e2ac, Func Offset: 0x9c
	// Func End, Address: 0x101e2c4, Func Offset: 0xb4
}

// 
// Start address: 0x101e2d0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 2002, Address: 0x101e2d0, Func Offset: 0
	// Line 2003, Address: 0x101e2dc, Func Offset: 0xc
	// Line 2004, Address: 0x101e308, Func Offset: 0x38
	// Line 2005, Address: 0x101e354, Func Offset: 0x84
	// Line 2006, Address: 0x101e380, Func Offset: 0xb0
	// Line 2008, Address: 0x101e3cc, Func Offset: 0xfc
	// Line 2014, Address: 0x101e3d8, Func Offset: 0x108
	// Line 2015, Address: 0x101e3dc, Func Offset: 0x10c
	// Func End, Address: 0x101e3e8, Func Offset: 0x118
}

// 
// Start address: 0x101e3f0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2032, Address: 0x101e3f0, Func Offset: 0
	// Line 2033, Address: 0x101e40c, Func Offset: 0x1c
	// Line 2035, Address: 0x101e428, Func Offset: 0x38
	// Func End, Address: 0x101e438, Func Offset: 0x48
}

// 
// Start address: 0x101e440
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2037, Address: 0x101e440, Func Offset: 0
	// Line 2038, Address: 0x101e45c, Func Offset: 0x1c
	// Line 2039, Address: 0x101e460, Func Offset: 0x20
	// Line 2041, Address: 0x101e47c, Func Offset: 0x3c
	// Func End, Address: 0x101e48c, Func Offset: 0x4c
}

// 
// Start address: 0x101e490
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2043, Address: 0x101e490, Func Offset: 0
	// Line 2044, Address: 0x101e4a4, Func Offset: 0x14
	// Line 2046, Address: 0x101e4c0, Func Offset: 0x30
	// Func End, Address: 0x101e4d0, Func Offset: 0x40
}

// 
// Start address: 0x101e4d0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2048, Address: 0x101e4d0, Func Offset: 0
	// Line 2049, Address: 0x101e4ec, Func Offset: 0x1c
	// Line 2051, Address: 0x101e508, Func Offset: 0x38
	// Func End, Address: 0x101e518, Func Offset: 0x48
}

// 
// Start address: 0x101e520
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 2053, Address: 0x101e520, Func Offset: 0
	// Line 2054, Address: 0x101e538, Func Offset: 0x18
	// Line 2055, Address: 0x101e548, Func Offset: 0x28
	// Line 2056, Address: 0x101e558, Func Offset: 0x38
	// Line 2057, Address: 0x101e564, Func Offset: 0x44
	// Line 2059, Address: 0x101e570, Func Offset: 0x50
	// Line 2060, Address: 0x101e59c, Func Offset: 0x7c
	// Line 2063, Address: 0x101e5c8, Func Offset: 0xa8
	// Func End, Address: 0x101e5d4, Func Offset: 0xb4
}

// 
// Start address: 0x101e5e0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2079, Address: 0x101e5e0, Func Offset: 0
	// Line 2084, Address: 0x101e5f8, Func Offset: 0x18
	// Line 2085, Address: 0x101e604, Func Offset: 0x24
	// Line 2086, Address: 0x101e610, Func Offset: 0x30
	// Line 2087, Address: 0x101e618, Func Offset: 0x38
	// Line 2088, Address: 0x101e61c, Func Offset: 0x3c
	// Line 2090, Address: 0x101e634, Func Offset: 0x54
	// Line 2091, Address: 0x101e63c, Func Offset: 0x5c
	// Func End, Address: 0x101e65c, Func Offset: 0x7c
}

// 
// Start address: 0x101e660
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 2095, Address: 0x101e660, Func Offset: 0
	// Line 2100, Address: 0x101e678, Func Offset: 0x18
	// Line 2101, Address: 0x101e684, Func Offset: 0x24
	// Line 2102, Address: 0x101e690, Func Offset: 0x30
	// Line 2103, Address: 0x101e698, Func Offset: 0x38
	// Line 2104, Address: 0x101e69c, Func Offset: 0x3c
	// Line 2106, Address: 0x101e6ac, Func Offset: 0x4c
	// Func End, Address: 0x101e6cc, Func Offset: 0x6c
}

// 
// Start address: 0x101e6d0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 2109, Address: 0x101e6d0, Func Offset: 0
	// Line 2110, Address: 0x101e6e8, Func Offset: 0x18
	// Line 2111, Address: 0x101e708, Func Offset: 0x38
	// Func End, Address: 0x101e718, Func Offset: 0x48
}

// 
// Start address: 0x101e720
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 2116, Address: 0x101e720, Func Offset: 0
	// Line 2120, Address: 0x101e740, Func Offset: 0x20
	// Line 2123, Address: 0x101e75c, Func Offset: 0x3c
	// Line 2127, Address: 0x101e784, Func Offset: 0x64
	// Line 2128, Address: 0x101e790, Func Offset: 0x70
	// Line 2130, Address: 0x101e7b8, Func Offset: 0x98
	// Func End, Address: 0x101e7c8, Func Offset: 0xa8
}

// 
// Start address: 0x101e7d0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 2136, Address: 0x101e7d0, Func Offset: 0
	// Line 2139, Address: 0x101e7ec, Func Offset: 0x1c
	// Line 2140, Address: 0x101e7f4, Func Offset: 0x24
	// Line 2143, Address: 0x101e7fc, Func Offset: 0x2c
	// Line 2145, Address: 0x101e820, Func Offset: 0x50
	// Line 2146, Address: 0x101e838, Func Offset: 0x68
	// Line 2147, Address: 0x101e858, Func Offset: 0x88
	// Line 2148, Address: 0x101e860, Func Offset: 0x90
	// Line 2150, Address: 0x101e880, Func Offset: 0xb0
	// Line 2151, Address: 0x101e888, Func Offset: 0xb8
	// Line 2152, Address: 0x101e8ac, Func Offset: 0xdc
	// Func End, Address: 0x101e8c8, Func Offset: 0xf8
}

// 
// Start address: 0x101e8d0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 2178, Address: 0x101e8d0, Func Offset: 0
	// Line 2183, Address: 0x101e8f8, Func Offset: 0x28
	// Line 2185, Address: 0x101e92c, Func Offset: 0x5c
	// Line 2187, Address: 0x101e954, Func Offset: 0x84
	// Line 2188, Address: 0x101e978, Func Offset: 0xa8
	// Line 2189, Address: 0x101e9a0, Func Offset: 0xd0
	// Line 2190, Address: 0x101e9ac, Func Offset: 0xdc
	// Line 2191, Address: 0x101e9b4, Func Offset: 0xe4
	// Line 2194, Address: 0x101e9d0, Func Offset: 0x100
	// Line 2198, Address: 0x101e9f8, Func Offset: 0x128
	// Line 2201, Address: 0x101ea00, Func Offset: 0x130
	// Line 2202, Address: 0x101ea04, Func Offset: 0x134
	// Line 2206, Address: 0x101ea20, Func Offset: 0x150
	// Line 2213, Address: 0x101ea48, Func Offset: 0x178
	// Func End, Address: 0x101ea64, Func Offset: 0x194
}

// 
// Start address: 0x101ea70
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
	// Line 2224, Address: 0x101ea70, Func Offset: 0
	// Line 2225, Address: 0x101ea90, Func Offset: 0x20
	// Line 2230, Address: 0x101eabc, Func Offset: 0x4c
	// Line 2236, Address: 0x101eae0, Func Offset: 0x70
	// Line 2237, Address: 0x101eae4, Func Offset: 0x74
	// Line 2239, Address: 0x101eae8, Func Offset: 0x78
	// Line 2240, Address: 0x101eaf0, Func Offset: 0x80
	// Line 2243, Address: 0x101eb14, Func Offset: 0xa4
	// Line 2244, Address: 0x101eb18, Func Offset: 0xa8
	// Line 2247, Address: 0x101eb3c, Func Offset: 0xcc
	// Line 2248, Address: 0x101eb40, Func Offset: 0xd0
	// Line 2249, Address: 0x101eb48, Func Offset: 0xd8
	// Line 2250, Address: 0x101eb4c, Func Offset: 0xdc
	// Line 2252, Address: 0x101eb50, Func Offset: 0xe0
	// Line 2253, Address: 0x101eb58, Func Offset: 0xe8
	// Line 2254, Address: 0x101eb78, Func Offset: 0x108
	// Line 2258, Address: 0x101eb84, Func Offset: 0x114
	// Line 2259, Address: 0x101eb98, Func Offset: 0x128
	// Line 2262, Address: 0x101ebac, Func Offset: 0x13c
	// Line 2263, Address: 0x101ebcc, Func Offset: 0x15c
	// Func End, Address: 0x101ebf4, Func Offset: 0x184
}

// 
// Start address: 0x101ec00
void mapset()
{
	// Line 2268, Address: 0x101ec00, Func Offset: 0
	// Func End, Address: 0x101ec08, Func Offset: 0x8
}

// 
// Start address: 0x101ec10
void divdevset()
{
	// Line 2272, Address: 0x101ec10, Func Offset: 0
	// Func End, Address: 0x101ec18, Func Offset: 0x8
}

// 
// Start address: 0x101ec20
void enecginit()
{
	// Line 2276, Address: 0x101ec20, Func Offset: 0
	// Func End, Address: 0x101ec28, Func Offset: 0x8
}

// 
// Start address: 0x101ec30
void mapset2(unsigned char* pMapDst, int idx)
{
	int h;
	int v;
	int hwk;
	unsigned char* pZonetbl;
	unsigned char* pMapwk;
	// Line 2292, Address: 0x101ec30, Func Offset: 0
	// Line 2296, Address: 0x101ec50, Func Offset: 0x20
	// Line 2297, Address: 0x101ec68, Func Offset: 0x38
	// Line 2298, Address: 0x101ec78, Func Offset: 0x48
	// Line 2299, Address: 0x101ec88, Func Offset: 0x58
	// Line 2300, Address: 0x101ec90, Func Offset: 0x60
	// Line 2302, Address: 0x101ec94, Func Offset: 0x64
	// Line 2303, Address: 0x101eca0, Func Offset: 0x70
	// Line 2304, Address: 0x101ecb8, Func Offset: 0x88
	// Line 2306, Address: 0x101ecc4, Func Offset: 0x94
	// Line 2307, Address: 0x101ecd0, Func Offset: 0xa0
	// Line 2308, Address: 0x101ecdc, Func Offset: 0xac
	// Func End, Address: 0x101ecfc, Func Offset: 0xcc
}

