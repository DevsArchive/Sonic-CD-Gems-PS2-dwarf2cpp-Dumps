typedef struct _anon0;
typedef union _anon1;
typedef struct tagPOINT;
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

typedef int(*type_8)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef char type_2[9];
typedef unsigned char type_3[4];
typedef short type_4[2];
typedef short type_5[2][8];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef unsigned char type_9[2];
typedef unsigned char type_10[64];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[49];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef short type_16[256];
typedef _anon1* type_17[8];
typedef _anon2 type_18[128];
typedef short type_19[2];
typedef short type_20[2][1];
typedef _anon1* type_21[8];
typedef short type_22[6];

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

struct tagPOINT
{
	int x;
	int y;
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

unsigned char z81awrttbl[49];
_anon1* vblockwrtbtbl[8];
_anon1* mapwrt_tbl[8];
_anon2 actwk[128];
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
_anon1 scra_v_posit;
_anon1 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
_anon1 scrb_h_posit;
_anon1 scrz_h_posit;
_anon1 scrc_h_posit;
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
_anon1 scra_v_posiw;
_anon1 scra_h_posiw;
_anon11 scrflagbw;
unsigned char mapwkb[64][8];
_anon1 scrb_v_posiw;
_anon1 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

_anon2* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z61aline(short** ppHscw);
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
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase);
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6);
void mapwrt_z81a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();
void divdevset();
void enecginit();

// 
// Start address: 0x1029a70
_anon2* main_chk()
{
	// Line 147, Address: 0x1029a70, Func Offset: 0
	// Line 148, Address: 0x1029a84, Func Offset: 0x14
	// Line 150, Address: 0x1029a94, Func Offset: 0x24
	// Line 152, Address: 0x1029a9c, Func Offset: 0x2c
	// Func End, Address: 0x1029aa4, Func Offset: 0x34
}

// 
// Start address: 0x1029ab0
void scr_set()
{
	short* pScrTbl;
	// Line 190, Address: 0x1029ab0, Func Offset: 0
	// Line 193, Address: 0x1029abc, Func Offset: 0xc
	// Line 194, Address: 0x1029ad0, Func Offset: 0x20
	// Line 195, Address: 0x1029ae4, Func Offset: 0x34
	// Line 197, Address: 0x1029aec, Func Offset: 0x3c
	// Line 198, Address: 0x1029af4, Func Offset: 0x44
	// Line 199, Address: 0x1029b00, Func Offset: 0x50
	// Line 200, Address: 0x1029b04, Func Offset: 0x54
	// Line 201, Address: 0x1029b18, Func Offset: 0x68
	// Line 202, Address: 0x1029b1c, Func Offset: 0x6c
	// Line 203, Address: 0x1029b30, Func Offset: 0x80
	// Line 204, Address: 0x1029b34, Func Offset: 0x84
	// Line 205, Address: 0x1029b48, Func Offset: 0x98
	// Line 206, Address: 0x1029b4c, Func Offset: 0x9c
	// Line 207, Address: 0x1029b60, Func Offset: 0xb0
	// Line 208, Address: 0x1029b80, Func Offset: 0xd0
	// Line 209, Address: 0x1029b84, Func Offset: 0xd4
	// Line 210, Address: 0x1029b90, Func Offset: 0xe0
	// Line 212, Address: 0x1029b9c, Func Offset: 0xec
	// Line 213, Address: 0x1029ba8, Func Offset: 0xf8
	// Line 215, Address: 0x1029bb4, Func Offset: 0x104
	// Line 216, Address: 0x1029bbc, Func Offset: 0x10c
	// Func End, Address: 0x1029bd0, Func Offset: 0x120
}

// 
// Start address: 0x1029bd0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 265, Address: 0x1029bd0, Func Offset: 0
	// Line 268, Address: 0x1029be4, Func Offset: 0x14
	// Line 269, Address: 0x1029bf4, Func Offset: 0x24
	// Line 270, Address: 0x1029bfc, Func Offset: 0x2c
	// Line 272, Address: 0x1029c0c, Func Offset: 0x3c
	// Line 273, Address: 0x1029c24, Func Offset: 0x54
	// Line 274, Address: 0x1029c34, Func Offset: 0x64
	// Line 275, Address: 0x1029c3c, Func Offset: 0x6c
	// Line 277, Address: 0x1029c40, Func Offset: 0x70
	// Line 279, Address: 0x1029c48, Func Offset: 0x78
	// Line 280, Address: 0x1029c68, Func Offset: 0x98
	// Line 281, Address: 0x1029c8c, Func Offset: 0xbc
	// Line 283, Address: 0x1029c94, Func Offset: 0xc4
	// Line 287, Address: 0x1029cb4, Func Offset: 0xe4
	// Line 288, Address: 0x1029cc8, Func Offset: 0xf8
	// Line 292, Address: 0x1029cdc, Func Offset: 0x10c
	// Line 293, Address: 0x1029cf0, Func Offset: 0x120
	// Line 294, Address: 0x1029cfc, Func Offset: 0x12c
	// Line 295, Address: 0x1029d04, Func Offset: 0x134
	// Line 299, Address: 0x1029d08, Func Offset: 0x138
	// Line 300, Address: 0x1029d2c, Func Offset: 0x15c
	// Line 304, Address: 0x1029d3c, Func Offset: 0x16c
	// Line 306, Address: 0x1029d44, Func Offset: 0x174
	// Line 307, Address: 0x1029d58, Func Offset: 0x188
	// Line 308, Address: 0x1029d64, Func Offset: 0x194
	// Line 309, Address: 0x1029d6c, Func Offset: 0x19c
	// Line 313, Address: 0x1029d70, Func Offset: 0x1a0
	// Line 314, Address: 0x1029d94, Func Offset: 0x1c4
	// Line 318, Address: 0x1029da4, Func Offset: 0x1d4
	// Line 320, Address: 0x1029dac, Func Offset: 0x1dc
	// Line 323, Address: 0x1029dbc, Func Offset: 0x1ec
	// Line 324, Address: 0x1029dcc, Func Offset: 0x1fc
	// Line 325, Address: 0x1029ddc, Func Offset: 0x20c
	// Line 326, Address: 0x1029dec, Func Offset: 0x21c
	// Line 327, Address: 0x1029dfc, Func Offset: 0x22c
	// Func End, Address: 0x1029e18, Func Offset: 0x248
}

// 
// Start address: 0x1029e20
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 348, Address: 0x1029e20, Func Offset: 0
	// Line 351, Address: 0x1029e2c, Func Offset: 0xc
	// Line 352, Address: 0x1029e34, Func Offset: 0x14
	// Line 354, Address: 0x1029e38, Func Offset: 0x18
	// Line 355, Address: 0x1029e44, Func Offset: 0x24
	// Line 356, Address: 0x1029e50, Func Offset: 0x30
	// Line 357, Address: 0x1029e5c, Func Offset: 0x3c
	// Line 359, Address: 0x1029e68, Func Offset: 0x48
	// Line 360, Address: 0x1029e84, Func Offset: 0x64
	// Line 362, Address: 0x1029e90, Func Offset: 0x70
	// Line 363, Address: 0x1029eac, Func Offset: 0x8c
	// Line 365, Address: 0x1029eb8, Func Offset: 0x98
	// Line 366, Address: 0x1029ed4, Func Offset: 0xb4
	// Line 367, Address: 0x1029ef8, Func Offset: 0xd8
	// Func End, Address: 0x1029f04, Func Offset: 0xe4
}

// 
// Start address: 0x1029f10
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
	// Line 383, Address: 0x1029f10, Func Offset: 0
	// Line 395, Address: 0x1029f2c, Func Offset: 0x1c
	// Line 400, Address: 0x1029f3c, Func Offset: 0x2c
	// Line 402, Address: 0x1029f68, Func Offset: 0x58
	// Line 404, Address: 0x1029f70, Func Offset: 0x60
	// Line 405, Address: 0x1029f78, Func Offset: 0x68
	// Line 407, Address: 0x1029f80, Func Offset: 0x70
	// Line 408, Address: 0x1029f90, Func Offset: 0x80
	// Line 411, Address: 0x1029fa0, Func Offset: 0x90
	// Line 412, Address: 0x1029fb4, Func Offset: 0xa4
	// Line 414, Address: 0x1029fc4, Func Offset: 0xb4
	// Line 415, Address: 0x1029fd8, Func Offset: 0xc8
	// Line 417, Address: 0x1029fe8, Func Offset: 0xd8
	// Line 418, Address: 0x102a004, Func Offset: 0xf4
	// Line 420, Address: 0x102a014, Func Offset: 0x104
	// Line 423, Address: 0x102a028, Func Offset: 0x118
	// Line 425, Address: 0x102a038, Func Offset: 0x128
	// Line 427, Address: 0x102a060, Func Offset: 0x150
	// Line 428, Address: 0x102a098, Func Offset: 0x188
	// Line 430, Address: 0x102a0ac, Func Offset: 0x19c
	// Line 432, Address: 0x102a0b8, Func Offset: 0x1a8
	// Line 434, Address: 0x102a0c4, Func Offset: 0x1b4
	// Line 435, Address: 0x102a0e4, Func Offset: 0x1d4
	// Line 437, Address: 0x102a0f0, Func Offset: 0x1e0
	// Line 438, Address: 0x102a104, Func Offset: 0x1f4
	// Line 440, Address: 0x102a114, Func Offset: 0x204
	// Line 441, Address: 0x102a134, Func Offset: 0x224
	// Line 443, Address: 0x102a140, Func Offset: 0x230
	// Line 444, Address: 0x102a154, Func Offset: 0x244
	// Line 446, Address: 0x102a164, Func Offset: 0x254
	// Line 447, Address: 0x102a170, Func Offset: 0x260
	// Line 448, Address: 0x102a1a0, Func Offset: 0x290
	// Line 449, Address: 0x102a1d0, Func Offset: 0x2c0
	// Line 450, Address: 0x102a1ec, Func Offset: 0x2dc
	// Func End, Address: 0x102a210, Func Offset: 0x300
}

// 
// Start address: 0x102a210
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
	int lHwk;
	// Line 464, Address: 0x102a210, Func Offset: 0
	// Line 465, Address: 0x102a238, Func Offset: 0x28
	// Line 472, Address: 0x102a264, Func Offset: 0x54
	// Line 473, Address: 0x102a288, Func Offset: 0x78
	// Line 474, Address: 0x102a28c, Func Offset: 0x7c
	// Line 476, Address: 0x102a29c, Func Offset: 0x8c
	// Line 478, Address: 0x102a2b0, Func Offset: 0xa0
	// Line 480, Address: 0x102a2bc, Func Offset: 0xac
	// Line 481, Address: 0x102a2d0, Func Offset: 0xc0
	// Line 482, Address: 0x102a2e8, Func Offset: 0xd8
	// Line 483, Address: 0x102a2ec, Func Offset: 0xdc
	// Line 484, Address: 0x102a30c, Func Offset: 0xfc
	// Line 486, Address: 0x102a324, Func Offset: 0x114
	// Line 487, Address: 0x102a338, Func Offset: 0x128
	// Line 488, Address: 0x102a344, Func Offset: 0x134
	// Line 490, Address: 0x102a350, Func Offset: 0x140
	// Line 491, Address: 0x102a35c, Func Offset: 0x14c
	// Line 493, Address: 0x102a368, Func Offset: 0x158
	// Line 494, Address: 0x102a37c, Func Offset: 0x16c
	// Func End, Address: 0x102a3a8, Func Offset: 0x198
}

// 
// Start address: 0x102a3b0
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 515, Address: 0x102a3b0, Func Offset: 0
	// Line 519, Address: 0x102a3cc, Func Offset: 0x1c
	// Line 520, Address: 0x102a3d0, Func Offset: 0x20
	// Line 522, Address: 0x102a3f0, Func Offset: 0x40
	// Line 523, Address: 0x102a40c, Func Offset: 0x5c
	// Line 524, Address: 0x102a418, Func Offset: 0x68
	// Line 526, Address: 0x102a424, Func Offset: 0x74
	// Line 527, Address: 0x102a42c, Func Offset: 0x7c
	// Line 528, Address: 0x102a43c, Func Offset: 0x8c
	// Line 529, Address: 0x102a460, Func Offset: 0xb0
	// Line 530, Address: 0x102a480, Func Offset: 0xd0
	// Func End, Address: 0x102a494, Func Offset: 0xe4
}

// 
// Start address: 0x102a4a0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 636, Address: 0x102a4a0, Func Offset: 0
	// Line 639, Address: 0x102a4b0, Func Offset: 0x10
	// Line 640, Address: 0x102a4c0, Func Offset: 0x20
	// Line 641, Address: 0x102a4cc, Func Offset: 0x2c
	// Line 643, Address: 0x102a504, Func Offset: 0x64
	// Line 644, Address: 0x102a50c, Func Offset: 0x6c
	// Line 645, Address: 0x102a520, Func Offset: 0x80
	// Line 646, Address: 0x102a540, Func Offset: 0xa0
	// Line 647, Address: 0x102a554, Func Offset: 0xb4
	// Line 649, Address: 0x102a55c, Func Offset: 0xbc
	// Line 654, Address: 0x102a570, Func Offset: 0xd0
	// Func End, Address: 0x102a584, Func Offset: 0xe4
}

// 
// Start address: 0x102a590
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 672, Address: 0x102a590, Func Offset: 0
	// Line 676, Address: 0x102a5a4, Func Offset: 0x14
	// Line 677, Address: 0x102a5ac, Func Offset: 0x1c
	// Line 678, Address: 0x102a5b4, Func Offset: 0x24
	// Line 679, Address: 0x102a5bc, Func Offset: 0x2c
	// Line 680, Address: 0x102a5c0, Func Offset: 0x30
	// Line 681, Address: 0x102a5e4, Func Offset: 0x54
	// Line 682, Address: 0x102a5f0, Func Offset: 0x60
	// Line 684, Address: 0x102a60c, Func Offset: 0x7c
	// Line 685, Address: 0x102a618, Func Offset: 0x88
	// Line 686, Address: 0x102a62c, Func Offset: 0x9c
	// Line 687, Address: 0x102a638, Func Offset: 0xa8
	// Line 688, Address: 0x102a65c, Func Offset: 0xcc
	// Line 690, Address: 0x102a664, Func Offset: 0xd4
	// Line 695, Address: 0x102a68c, Func Offset: 0xfc
	// Func End, Address: 0x102a6a0, Func Offset: 0x110
}

// 
// Start address: 0x102a6a0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 713, Address: 0x102a6a0, Func Offset: 0
	// Line 717, Address: 0x102a6b4, Func Offset: 0x14
	// Line 718, Address: 0x102a6bc, Func Offset: 0x1c
	// Line 719, Address: 0x102a6c4, Func Offset: 0x24
	// Line 720, Address: 0x102a6cc, Func Offset: 0x2c
	// Line 721, Address: 0x102a6d0, Func Offset: 0x30
	// Line 722, Address: 0x102a6f4, Func Offset: 0x54
	// Line 723, Address: 0x102a700, Func Offset: 0x60
	// Line 725, Address: 0x102a71c, Func Offset: 0x7c
	// Line 726, Address: 0x102a728, Func Offset: 0x88
	// Line 727, Address: 0x102a73c, Func Offset: 0x9c
	// Line 728, Address: 0x102a748, Func Offset: 0xa8
	// Line 729, Address: 0x102a76c, Func Offset: 0xcc
	// Line 731, Address: 0x102a774, Func Offset: 0xd4
	// Line 736, Address: 0x102a79c, Func Offset: 0xfc
	// Func End, Address: 0x102a7b0, Func Offset: 0x110
}

// 
// Start address: 0x102a7b0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 754, Address: 0x102a7b0, Func Offset: 0
	// Line 758, Address: 0x102a7c4, Func Offset: 0x14
	// Line 759, Address: 0x102a7cc, Func Offset: 0x1c
	// Line 760, Address: 0x102a7d4, Func Offset: 0x24
	// Line 761, Address: 0x102a7dc, Func Offset: 0x2c
	// Line 762, Address: 0x102a7e0, Func Offset: 0x30
	// Line 763, Address: 0x102a804, Func Offset: 0x54
	// Line 764, Address: 0x102a810, Func Offset: 0x60
	// Line 766, Address: 0x102a82c, Func Offset: 0x7c
	// Line 767, Address: 0x102a838, Func Offset: 0x88
	// Line 768, Address: 0x102a84c, Func Offset: 0x9c
	// Line 769, Address: 0x102a858, Func Offset: 0xa8
	// Line 770, Address: 0x102a87c, Func Offset: 0xcc
	// Line 772, Address: 0x102a884, Func Offset: 0xd4
	// Line 777, Address: 0x102a8ac, Func Offset: 0xfc
	// Func End, Address: 0x102a8c0, Func Offset: 0x110
}

// 
// Start address: 0x102a8c0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 792, Address: 0x102a8c0, Func Offset: 0
	// Line 796, Address: 0x102a8d0, Func Offset: 0x10
	// Line 798, Address: 0x102a8e0, Func Offset: 0x20
	// Line 799, Address: 0x102a8e8, Func Offset: 0x28
	// Line 800, Address: 0x102a91c, Func Offset: 0x5c
	// Line 801, Address: 0x102a924, Func Offset: 0x64
	// Line 802, Address: 0x102a938, Func Offset: 0x78
	// Line 803, Address: 0x102a95c, Func Offset: 0x9c
	// Line 804, Address: 0x102a970, Func Offset: 0xb0
	// Line 805, Address: 0x102a978, Func Offset: 0xb8
	// Line 810, Address: 0x102a98c, Func Offset: 0xcc
	// Func End, Address: 0x102a9a4, Func Offset: 0xe4
}

// 
// Start address: 0x102a9b0
void scrh_move()
{
	short xwk;
	// Line 827, Address: 0x102a9b0, Func Offset: 0
	// Line 830, Address: 0x102a9b8, Func Offset: 0x8
	// Line 831, Address: 0x102aa00, Func Offset: 0x50
	// Line 833, Address: 0x102aa10, Func Offset: 0x60
	// Line 834, Address: 0x102aa18, Func Offset: 0x68
	// Line 835, Address: 0x102aa20, Func Offset: 0x70
	// Line 837, Address: 0x102aa30, Func Offset: 0x80
	// Line 838, Address: 0x102aa44, Func Offset: 0x94
	// Line 842, Address: 0x102aa50, Func Offset: 0xa0
	// Line 843, Address: 0x102aa64, Func Offset: 0xb4
	// Line 844, Address: 0x102aa88, Func Offset: 0xd8
	// Line 846, Address: 0x102aa98, Func Offset: 0xe8
	// Line 848, Address: 0x102aaa0, Func Offset: 0xf0
	// Line 849, Address: 0x102aab4, Func Offset: 0x104
	// Line 853, Address: 0x102aac0, Func Offset: 0x110
	// Line 854, Address: 0x102aad4, Func Offset: 0x124
	// Line 855, Address: 0x102aaf8, Func Offset: 0x148
	// Line 860, Address: 0x102ab08, Func Offset: 0x158
	// Line 861, Address: 0x102ab38, Func Offset: 0x188
	// Line 862, Address: 0x102ab40, Func Offset: 0x190
	// Func End, Address: 0x102ab50, Func Offset: 0x1a0
}

// 
// Start address: 0x102ab50
void scroll_v()
{
	short ywk;
	// Line 877, Address: 0x102ab50, Func Offset: 0
	// Line 880, Address: 0x102ab5c, Func Offset: 0xc
	// Line 881, Address: 0x102ab90, Func Offset: 0x40
	// Line 882, Address: 0x102aba8, Func Offset: 0x58
	// Line 886, Address: 0x102abb4, Func Offset: 0x64
	// Line 887, Address: 0x102abcc, Func Offset: 0x7c
	// Line 888, Address: 0x102abd8, Func Offset: 0x88
	// Line 889, Address: 0x102abfc, Func Offset: 0xac
	// Line 890, Address: 0x102ac10, Func Offset: 0xc0
	// Line 891, Address: 0x102ac1c, Func Offset: 0xcc
	// Line 892, Address: 0x102ac24, Func Offset: 0xd4
	// Line 893, Address: 0x102ac4c, Func Offset: 0xfc
	// Line 894, Address: 0x102ac74, Func Offset: 0x124
	// Line 895, Address: 0x102ac80, Func Offset: 0x130
	// Line 897, Address: 0x102ac88, Func Offset: 0x138
	// Line 898, Address: 0x102acb0, Func Offset: 0x160
	// Line 899, Address: 0x102acc0, Func Offset: 0x170
	// Line 900, Address: 0x102acc8, Func Offset: 0x178
	// Line 905, Address: 0x102acd0, Func Offset: 0x180
	// Line 906, Address: 0x102acfc, Func Offset: 0x1ac
	// Line 907, Address: 0x102ad08, Func Offset: 0x1b8
	// Line 908, Address: 0x102ad10, Func Offset: 0x1c0
	// Line 909, Address: 0x102ad20, Func Offset: 0x1d0
	// Line 910, Address: 0x102ad28, Func Offset: 0x1d8
	// Line 915, Address: 0x102ad30, Func Offset: 0x1e0
	// Line 916, Address: 0x102ad38, Func Offset: 0x1e8
	// Func End, Address: 0x102ad4c, Func Offset: 0x1fc
}

// 
// Start address: 0x102ad50
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 930, Address: 0x102ad50, Func Offset: 0
	// Line 933, Address: 0x102ad60, Func Offset: 0x10
	// Line 934, Address: 0x102ad7c, Func Offset: 0x2c
	// Line 935, Address: 0x102ad94, Func Offset: 0x44
	// Line 936, Address: 0x102adb8, Func Offset: 0x68
	// Line 937, Address: 0x102adc0, Func Offset: 0x70
	// Line 941, Address: 0x102add0, Func Offset: 0x80
	// Line 942, Address: 0x102ade4, Func Offset: 0x94
	// Line 943, Address: 0x102adf0, Func Offset: 0xa0
	// Line 946, Address: 0x102adf8, Func Offset: 0xa8
	// Line 947, Address: 0x102ae10, Func Offset: 0xc0
	// Line 948, Address: 0x102ae1c, Func Offset: 0xcc
	// Line 949, Address: 0x102ae3c, Func Offset: 0xec
	// Line 950, Address: 0x102ae48, Func Offset: 0xf8
	// Line 951, Address: 0x102ae50, Func Offset: 0x100
	// Line 953, Address: 0x102ae5c, Func Offset: 0x10c
	// Line 955, Address: 0x102ae64, Func Offset: 0x114
	// Line 956, Address: 0x102ae7c, Func Offset: 0x12c
	// Line 957, Address: 0x102ae88, Func Offset: 0x138
	// Line 958, Address: 0x102aea8, Func Offset: 0x158
	// Line 959, Address: 0x102aeb4, Func Offset: 0x164
	// Line 960, Address: 0x102aebc, Func Offset: 0x16c
	// Line 963, Address: 0x102aec8, Func Offset: 0x178
	// Func End, Address: 0x102aedc, Func Offset: 0x18c
}

// 
// Start address: 0x102aee0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 977, Address: 0x102aee0, Func Offset: 0
	// Line 980, Address: 0x102aef0, Func Offset: 0x10
	// Line 982, Address: 0x102aefc, Func Offset: 0x1c
	// Line 983, Address: 0x102af14, Func Offset: 0x34
	// Line 984, Address: 0x102af20, Func Offset: 0x40
	// Line 985, Address: 0x102af40, Func Offset: 0x60
	// Line 986, Address: 0x102af4c, Func Offset: 0x6c
	// Line 987, Address: 0x102af54, Func Offset: 0x74
	// Line 989, Address: 0x102af60, Func Offset: 0x80
	// Func End, Address: 0x102af74, Func Offset: 0x94
}

// 
// Start address: 0x102af80
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1004, Address: 0x102af80, Func Offset: 0
	// Line 1007, Address: 0x102af8c, Func Offset: 0xc
	// Line 1008, Address: 0x102afb8, Func Offset: 0x38
	// Line 1009, Address: 0x102afcc, Func Offset: 0x4c
	// Line 1010, Address: 0x102afd8, Func Offset: 0x58
	// Line 1011, Address: 0x102afe0, Func Offset: 0x60
	// Line 1013, Address: 0x102afec, Func Offset: 0x6c
	// Func End, Address: 0x102affc, Func Offset: 0x7c
}

// 
// Start address: 0x102b000
void sv_move_sub2()
{
	// Line 1017, Address: 0x102b000, Func Offset: 0
	// Line 1018, Address: 0x102b008, Func Offset: 0x8
	// Line 1020, Address: 0x102b010, Func Offset: 0x10
	// Line 1021, Address: 0x102b01c, Func Offset: 0x1c
	// Func End, Address: 0x102b02c, Func Offset: 0x2c
}

// 
// Start address: 0x102b030
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1035, Address: 0x102b030, Func Offset: 0
	// Line 1038, Address: 0x102b03c, Func Offset: 0xc
	// Line 1039, Address: 0x102b060, Func Offset: 0x30
	// Line 1040, Address: 0x102b084, Func Offset: 0x54
	// Line 1041, Address: 0x102b090, Func Offset: 0x60
	// Func End, Address: 0x102b0a0, Func Offset: 0x70
}

// 
// Start address: 0x102b0a0
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1056, Address: 0x102b0a0, Func Offset: 0
	// Line 1057, Address: 0x102b0ac, Func Offset: 0xc
	// Line 1058, Address: 0x102b0d4, Func Offset: 0x34
	// Line 1060, Address: 0x102b0ec, Func Offset: 0x4c
	// Line 1061, Address: 0x102b0f8, Func Offset: 0x58
	// Line 1062, Address: 0x102b100, Func Offset: 0x60
	// Line 1063, Address: 0x102b10c, Func Offset: 0x6c
	// Line 1064, Address: 0x102b120, Func Offset: 0x80
	// Line 1065, Address: 0x102b134, Func Offset: 0x94
	// Line 1069, Address: 0x102b148, Func Offset: 0xa8
	// Line 1070, Address: 0x102b154, Func Offset: 0xb4
	// Func End, Address: 0x102b164, Func Offset: 0xc4
}

// 
// Start address: 0x102b170
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1084, Address: 0x102b170, Func Offset: 0
	// Line 1087, Address: 0x102b17c, Func Offset: 0xc
	// Line 1088, Address: 0x102b19c, Func Offset: 0x2c
	// Line 1089, Address: 0x102b1c0, Func Offset: 0x50
	// Line 1090, Address: 0x102b1cc, Func Offset: 0x5c
	// Func End, Address: 0x102b1dc, Func Offset: 0x6c
}

// 
// Start address: 0x102b1e0
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1105, Address: 0x102b1e0, Func Offset: 0
	// Line 1106, Address: 0x102b1ec, Func Offset: 0xc
	// Line 1107, Address: 0x102b214, Func Offset: 0x34
	// Line 1109, Address: 0x102b22c, Func Offset: 0x4c
	// Line 1110, Address: 0x102b238, Func Offset: 0x58
	// Line 1111, Address: 0x102b240, Func Offset: 0x60
	// Line 1112, Address: 0x102b24c, Func Offset: 0x6c
	// Line 1113, Address: 0x102b260, Func Offset: 0x80
	// Line 1114, Address: 0x102b274, Func Offset: 0x94
	// Line 1118, Address: 0x102b288, Func Offset: 0xa8
	// Line 1119, Address: 0x102b294, Func Offset: 0xb4
	// Func End, Address: 0x102b2a4, Func Offset: 0xc4
}

// 
// Start address: 0x102b2b0
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1136, Address: 0x102b2b0, Func Offset: 0
	// Line 1140, Address: 0x102b2c0, Func Offset: 0x10
	// Line 1141, Address: 0x102b2d0, Func Offset: 0x20
	// Line 1142, Address: 0x102b2f4, Func Offset: 0x44
	// Line 1143, Address: 0x102b308, Func Offset: 0x58
	// Line 1144, Address: 0x102b320, Func Offset: 0x70
	// Line 1146, Address: 0x102b32c, Func Offset: 0x7c
	// Line 1148, Address: 0x102b338, Func Offset: 0x88
	// Line 1149, Address: 0x102b374, Func Offset: 0xc4
	// Line 1150, Address: 0x102b37c, Func Offset: 0xcc
	// Line 1151, Address: 0x102b390, Func Offset: 0xe0
	// Line 1152, Address: 0x102b3bc, Func Offset: 0x10c
	// Line 1153, Address: 0x102b3cc, Func Offset: 0x11c
	// Line 1154, Address: 0x102b3e0, Func Offset: 0x130
	// Line 1155, Address: 0x102b3e8, Func Offset: 0x138
	// Line 1160, Address: 0x102b3fc, Func Offset: 0x14c
	// Func End, Address: 0x102b410, Func Offset: 0x160
}

// 
// Start address: 0x102b410
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
	// Line 1178, Address: 0x102b410, Func Offset: 0
	// Line 1187, Address: 0x102b430, Func Offset: 0x20
	// Line 1188, Address: 0x102b434, Func Offset: 0x24
	// Line 1189, Address: 0x102b440, Func Offset: 0x30
	// Line 1190, Address: 0x102b44c, Func Offset: 0x3c
	// Line 1191, Address: 0x102b454, Func Offset: 0x44
	// Line 1192, Address: 0x102b45c, Func Offset: 0x4c
	// Line 1194, Address: 0x102b470, Func Offset: 0x60
	// Line 1195, Address: 0x102b474, Func Offset: 0x64
	// Line 1196, Address: 0x102b480, Func Offset: 0x70
	// Line 1197, Address: 0x102b48c, Func Offset: 0x7c
	// Line 1198, Address: 0x102b494, Func Offset: 0x84
	// Line 1200, Address: 0x102b49c, Func Offset: 0x8c
	// Line 1201, Address: 0x102b4a8, Func Offset: 0x98
	// Line 1202, Address: 0x102b4bc, Func Offset: 0xac
	// Line 1204, Address: 0x102b4c8, Func Offset: 0xb8
	// Line 1205, Address: 0x102b4d0, Func Offset: 0xc0
	// Line 1207, Address: 0x102b4d8, Func Offset: 0xc8
	// Line 1209, Address: 0x102b4f8, Func Offset: 0xe8
	// Line 1215, Address: 0x102b524, Func Offset: 0x114
	// Line 1216, Address: 0x102b538, Func Offset: 0x128
	// Line 1218, Address: 0x102b544, Func Offset: 0x134
	// Line 1219, Address: 0x102b54c, Func Offset: 0x13c
	// Line 1220, Address: 0x102b554, Func Offset: 0x144
	// Line 1222, Address: 0x102b574, Func Offset: 0x164
	// Line 1228, Address: 0x102b5a0, Func Offset: 0x190
	// Line 1229, Address: 0x102b5b4, Func Offset: 0x1a4
	// Line 1231, Address: 0x102b5c0, Func Offset: 0x1b0
	// Line 1232, Address: 0x102b5c8, Func Offset: 0x1b8
	// Line 1233, Address: 0x102b5d0, Func Offset: 0x1c0
	// Line 1235, Address: 0x102b5f0, Func Offset: 0x1e0
	// Line 1241, Address: 0x102b61c, Func Offset: 0x20c
	// Line 1242, Address: 0x102b630, Func Offset: 0x220
	// Line 1244, Address: 0x102b63c, Func Offset: 0x22c
	// Line 1245, Address: 0x102b644, Func Offset: 0x234
	// Line 1246, Address: 0x102b64c, Func Offset: 0x23c
	// Line 1248, Address: 0x102b66c, Func Offset: 0x25c
	// Line 1257, Address: 0x102b698, Func Offset: 0x288
	// Func End, Address: 0x102b6c0, Func Offset: 0x2b0
}

// 
// Start address: 0x102b6c0
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
	// Line 1274, Address: 0x102b6c0, Func Offset: 0
	// Line 1285, Address: 0x102b6ec, Func Offset: 0x2c
	// Line 1287, Address: 0x102b6f4, Func Offset: 0x34
	// Line 1288, Address: 0x102b70c, Func Offset: 0x4c
	// Line 1289, Address: 0x102b720, Func Offset: 0x60
	// Line 1291, Address: 0x102b728, Func Offset: 0x68
	// Line 1293, Address: 0x102b73c, Func Offset: 0x7c
	// Line 1294, Address: 0x102b754, Func Offset: 0x94
	// Line 1295, Address: 0x102b768, Func Offset: 0xa8
	// Line 1296, Address: 0x102b770, Func Offset: 0xb0
	// Line 1298, Address: 0x102b778, Func Offset: 0xb8
	// Line 1299, Address: 0x102b78c, Func Offset: 0xcc
	// Line 1304, Address: 0x102b794, Func Offset: 0xd4
	// Line 1305, Address: 0x102b7e4, Func Offset: 0x124
	// Line 1306, Address: 0x102b7ec, Func Offset: 0x12c
	// Line 1312, Address: 0x102b80c, Func Offset: 0x14c
	// Line 1313, Address: 0x102b82c, Func Offset: 0x16c
	// Line 1314, Address: 0x102b850, Func Offset: 0x190
	// Line 1315, Address: 0x102b85c, Func Offset: 0x19c
	// Line 1316, Address: 0x102b864, Func Offset: 0x1a4
	// Line 1318, Address: 0x102b884, Func Offset: 0x1c4
	// Line 1322, Address: 0x102b8b0, Func Offset: 0x1f0
	// Line 1325, Address: 0x102b8b8, Func Offset: 0x1f8
	// Line 1326, Address: 0x102b8bc, Func Offset: 0x1fc
	// Line 1330, Address: 0x102b8dc, Func Offset: 0x21c
	// Line 1337, Address: 0x102b908, Func Offset: 0x248
	// Line 1344, Address: 0x102b91c, Func Offset: 0x25c
	// Line 1345, Address: 0x102b924, Func Offset: 0x264
	// Line 1346, Address: 0x102b92c, Func Offset: 0x26c
	// Line 1347, Address: 0x102b944, Func Offset: 0x284
	// Line 1348, Address: 0x102b964, Func Offset: 0x2a4
	// Line 1352, Address: 0x102b96c, Func Offset: 0x2ac
	// Line 1354, Address: 0x102b99c, Func Offset: 0x2dc
	// Line 1355, Address: 0x102b9a8, Func Offset: 0x2e8
	// Line 1359, Address: 0x102b9b8, Func Offset: 0x2f8
	// Line 1360, Address: 0x102b9c4, Func Offset: 0x304
	// Line 1361, Address: 0x102b9e4, Func Offset: 0x324
	// Line 1362, Address: 0x102ba1c, Func Offset: 0x35c
	// Line 1363, Address: 0x102ba3c, Func Offset: 0x37c
	// Line 1365, Address: 0x102ba60, Func Offset: 0x3a0
	// Line 1368, Address: 0x102ba84, Func Offset: 0x3c4
	// Line 1370, Address: 0x102baa4, Func Offset: 0x3e4
	// Line 1372, Address: 0x102bab8, Func Offset: 0x3f8
	// Line 1373, Address: 0x102bac4, Func Offset: 0x404
	// Line 1374, Address: 0x102bad4, Func Offset: 0x414
	// Line 1376, Address: 0x102badc, Func Offset: 0x41c
	// Func End, Address: 0x102bb04, Func Offset: 0x444
}

// 
// Start address: 0x102bb10
void scrollwrtc()
{
	// Line 1382, Address: 0x102bb10, Func Offset: 0
	// Func End, Address: 0x102bb18, Func Offset: 0x8
}

// 
// Start address: 0x102bb20
void scrollwrtz()
{
	// Line 1387, Address: 0x102bb20, Func Offset: 0
	// Func End, Address: 0x102bb28, Func Offset: 0x8
}

// 
// Start address: 0x102bb30
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1405, Address: 0x102bb30, Func Offset: 0
	// Line 1418, Address: 0x102bb58, Func Offset: 0x28
	// Line 1421, Address: 0x102bb78, Func Offset: 0x48
	// Line 1422, Address: 0x102bb8c, Func Offset: 0x5c
	// Line 1423, Address: 0x102bba0, Func Offset: 0x70
	// Line 1424, Address: 0x102bbb4, Func Offset: 0x84
	// Line 1426, Address: 0x102bbc8, Func Offset: 0x98
	// Line 1427, Address: 0x102bbd4, Func Offset: 0xa4
	// Line 1428, Address: 0x102bbe8, Func Offset: 0xb8
	// Func End, Address: 0x102bbf8, Func Offset: 0xc8
}

// 
// Start address: 0x102bc00
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1432, Address: 0x102bc00, Func Offset: 0
	// Line 1436, Address: 0x102bc28, Func Offset: 0x28
	// Line 1439, Address: 0x102bc48, Func Offset: 0x48
	// Line 1440, Address: 0x102bc5c, Func Offset: 0x5c
	// Line 1441, Address: 0x102bc70, Func Offset: 0x70
	// Line 1442, Address: 0x102bc84, Func Offset: 0x84
	// Line 1444, Address: 0x102bc98, Func Offset: 0x98
	// Line 1445, Address: 0x102bca4, Func Offset: 0xa4
	// Line 1446, Address: 0x102bcb8, Func Offset: 0xb8
	// Func End, Address: 0x102bcc8, Func Offset: 0xc8
}

// 
// Start address: 0x102bcd0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1466, Address: 0x102bcd0, Func Offset: 0
	// Line 1470, Address: 0x102bcf8, Func Offset: 0x28
	// Line 1473, Address: 0x102bd18, Func Offset: 0x48
	// Line 1474, Address: 0x102bd2c, Func Offset: 0x5c
	// Line 1475, Address: 0x102bd3c, Func Offset: 0x6c
	// Line 1476, Address: 0x102bd50, Func Offset: 0x80
	// Line 1478, Address: 0x102bd60, Func Offset: 0x90
	// Line 1479, Address: 0x102bd6c, Func Offset: 0x9c
	// Line 1480, Address: 0x102bd80, Func Offset: 0xb0
	// Func End, Address: 0x102bd90, Func Offset: 0xc0
}

// 
// Start address: 0x102bd90
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
	// Line 1499, Address: 0x102bd90, Func Offset: 0
	// Line 1505, Address: 0x102bdc4, Func Offset: 0x34
	// Line 1507, Address: 0x102bdd4, Func Offset: 0x44
	// Line 1508, Address: 0x102bdd8, Func Offset: 0x48
	// Line 1509, Address: 0x102bde0, Func Offset: 0x50
	// Line 1511, Address: 0x102bdf0, Func Offset: 0x60
	// Line 1513, Address: 0x102bdf4, Func Offset: 0x64
	// Line 1514, Address: 0x102bdfc, Func Offset: 0x6c
	// Line 1517, Address: 0x102be04, Func Offset: 0x74
	// Line 1518, Address: 0x102be0c, Func Offset: 0x7c
	// Line 1519, Address: 0x102be18, Func Offset: 0x88
	// Line 1521, Address: 0x102be24, Func Offset: 0x94
	// Line 1522, Address: 0x102be2c, Func Offset: 0x9c
	// Line 1523, Address: 0x102be34, Func Offset: 0xa4
	// Line 1524, Address: 0x102be3c, Func Offset: 0xac
	// Line 1526, Address: 0x102be48, Func Offset: 0xb8
	// Line 1527, Address: 0x102be50, Func Offset: 0xc0
	// Line 1528, Address: 0x102be58, Func Offset: 0xc8
	// Line 1529, Address: 0x102be60, Func Offset: 0xd0
	// Line 1531, Address: 0x102be6c, Func Offset: 0xdc
	// Line 1532, Address: 0x102be74, Func Offset: 0xe4
	// Line 1533, Address: 0x102be7c, Func Offset: 0xec
	// Line 1536, Address: 0x102be84, Func Offset: 0xf4
	// Line 1537, Address: 0x102be8c, Func Offset: 0xfc
	// Line 1540, Address: 0x102be94, Func Offset: 0x104
	// Line 1541, Address: 0x102bed8, Func Offset: 0x148
	// Line 1542, Address: 0x102bf1c, Func Offset: 0x18c
	// Line 1543, Address: 0x102bf60, Func Offset: 0x1d0
	// Line 1545, Address: 0x102bfa4, Func Offset: 0x214
	// Func End, Address: 0x102bfd4, Func Offset: 0x244
}

// 
// Start address: 0x102bfe0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1563, Address: 0x102bfe0, Func Offset: 0
	// Line 1564, Address: 0x102c000, Func Offset: 0x20
	// Line 1565, Address: 0x102c020, Func Offset: 0x40
	// Func End, Address: 0x102c030, Func Offset: 0x50
}

// 
// Start address: 0x102c030
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1567, Address: 0x102c030, Func Offset: 0
	// Line 1568, Address: 0x102c050, Func Offset: 0x20
	// Line 1569, Address: 0x102c054, Func Offset: 0x24
	// Line 1570, Address: 0x102c074, Func Offset: 0x44
	// Func End, Address: 0x102c084, Func Offset: 0x54
}

// 
// Start address: 0x102c090
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1577, Address: 0x102c090, Func Offset: 0
	// Line 1583, Address: 0x102c0c0, Func Offset: 0x30
	// Line 1584, Address: 0x102c0d0, Func Offset: 0x40
	// Line 1590, Address: 0x102c0e0, Func Offset: 0x50
	// Line 1591, Address: 0x102c0fc, Func Offset: 0x6c
	// Line 1592, Address: 0x102c100, Func Offset: 0x70
	// Line 1593, Address: 0x102c11c, Func Offset: 0x8c
	// Line 1594, Address: 0x102c120, Func Offset: 0x90
	// Line 1595, Address: 0x102c140, Func Offset: 0xb0
	// Line 1596, Address: 0x102c148, Func Offset: 0xb8
	// Line 1597, Address: 0x102c168, Func Offset: 0xd8
	// Line 1598, Address: 0x102c170, Func Offset: 0xe0
	// Line 1599, Address: 0x102c1b8, Func Offset: 0x128
	// Line 1601, Address: 0x102c1c4, Func Offset: 0x134
	// Line 1603, Address: 0x102c1e0, Func Offset: 0x150
	// Line 1608, Address: 0x102c1e8, Func Offset: 0x158
	// Line 1609, Address: 0x102c1f4, Func Offset: 0x164
	// Line 1612, Address: 0x102c200, Func Offset: 0x170
	// Line 1613, Address: 0x102c208, Func Offset: 0x178
	// Line 1614, Address: 0x102c228, Func Offset: 0x198
	// Line 1615, Address: 0x102c244, Func Offset: 0x1b4
	// Line 1616, Address: 0x102c24c, Func Offset: 0x1bc
	// Line 1617, Address: 0x102c26c, Func Offset: 0x1dc
	// Line 1619, Address: 0x102c288, Func Offset: 0x1f8
	// Line 1620, Address: 0x102c290, Func Offset: 0x200
	// Line 1621, Address: 0x102c298, Func Offset: 0x208
	// Line 1622, Address: 0x102c2a4, Func Offset: 0x214
	// Line 1623, Address: 0x102c2bc, Func Offset: 0x22c
	// Line 1625, Address: 0x102c2cc, Func Offset: 0x23c
	// Line 1628, Address: 0x102c2d8, Func Offset: 0x248
	// Line 1629, Address: 0x102c2e0, Func Offset: 0x250
	// Line 1630, Address: 0x102c2e4, Func Offset: 0x254
	// Func End, Address: 0x102c304, Func Offset: 0x274
}

// 
// Start address: 0x102c310
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1650, Address: 0x102c310, Func Offset: 0
	// Line 1658, Address: 0x102c338, Func Offset: 0x28
	// Line 1659, Address: 0x102c39c, Func Offset: 0x8c
	// Line 1665, Address: 0x102c3a4, Func Offset: 0x94
	// Line 1666, Address: 0x102c3ac, Func Offset: 0x9c
	// Line 1667, Address: 0x102c3cc, Func Offset: 0xbc
	// Line 1668, Address: 0x102c3e8, Func Offset: 0xd8
	// Line 1669, Address: 0x102c3f0, Func Offset: 0xe0
	// Line 1670, Address: 0x102c410, Func Offset: 0x100
	// Line 1673, Address: 0x102c42c, Func Offset: 0x11c
	// Line 1674, Address: 0x102c434, Func Offset: 0x124
	// Line 1675, Address: 0x102c43c, Func Offset: 0x12c
	// Line 1676, Address: 0x102c448, Func Offset: 0x138
	// Line 1677, Address: 0x102c460, Func Offset: 0x150
	// Line 1678, Address: 0x102c468, Func Offset: 0x158
	// Line 1683, Address: 0x102c478, Func Offset: 0x168
	// Line 1686, Address: 0x102c484, Func Offset: 0x174
	// Line 1687, Address: 0x102c48c, Func Offset: 0x17c
	// Line 1688, Address: 0x102c490, Func Offset: 0x180
	// Func End, Address: 0x102c4ac, Func Offset: 0x19c
}

// 
// Start address: 0x102c4b0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1702, Address: 0x102c4b0, Func Offset: 0
	// Line 1709, Address: 0x102c4cc, Func Offset: 0x1c
	// Line 1710, Address: 0x102c4d0, Func Offset: 0x20
	// Line 1711, Address: 0x102c4d8, Func Offset: 0x28
	// Line 1712, Address: 0x102c4fc, Func Offset: 0x4c
	// Line 1713, Address: 0x102c508, Func Offset: 0x58
	// Line 1714, Address: 0x102c520, Func Offset: 0x70
	// Line 1715, Address: 0x102c534, Func Offset: 0x84
	// Line 1720, Address: 0x102c54c, Func Offset: 0x9c
	// Func End, Address: 0x102c564, Func Offset: 0xb4
}

// 
// Start address: 0x102c570
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1734, Address: 0x102c570, Func Offset: 0
	// Line 1735, Address: 0x102c57c, Func Offset: 0xc
	// Line 1736, Address: 0x102c5a8, Func Offset: 0x38
	// Line 1737, Address: 0x102c5f4, Func Offset: 0x84
	// Line 1738, Address: 0x102c620, Func Offset: 0xb0
	// Line 1740, Address: 0x102c66c, Func Offset: 0xfc
	// Line 1746, Address: 0x102c678, Func Offset: 0x108
	// Line 1747, Address: 0x102c67c, Func Offset: 0x10c
	// Func End, Address: 0x102c688, Func Offset: 0x118
}

// 
// Start address: 0x102c690
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1764, Address: 0x102c690, Func Offset: 0
	// Line 1765, Address: 0x102c6ac, Func Offset: 0x1c
	// Line 1767, Address: 0x102c6c8, Func Offset: 0x38
	// Func End, Address: 0x102c6d8, Func Offset: 0x48
}

// 
// Start address: 0x102c6e0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1769, Address: 0x102c6e0, Func Offset: 0
	// Line 1770, Address: 0x102c6fc, Func Offset: 0x1c
	// Line 1771, Address: 0x102c700, Func Offset: 0x20
	// Line 1773, Address: 0x102c71c, Func Offset: 0x3c
	// Func End, Address: 0x102c72c, Func Offset: 0x4c
}

// 
// Start address: 0x102c730
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1775, Address: 0x102c730, Func Offset: 0
	// Line 1776, Address: 0x102c744, Func Offset: 0x14
	// Line 1778, Address: 0x102c760, Func Offset: 0x30
	// Func End, Address: 0x102c770, Func Offset: 0x40
}

// 
// Start address: 0x102c770
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1780, Address: 0x102c770, Func Offset: 0
	// Line 1781, Address: 0x102c78c, Func Offset: 0x1c
	// Line 1783, Address: 0x102c7a8, Func Offset: 0x38
	// Func End, Address: 0x102c7b8, Func Offset: 0x48
}

// 
// Start address: 0x102c7c0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1785, Address: 0x102c7c0, Func Offset: 0
	// Line 1786, Address: 0x102c7d8, Func Offset: 0x18
	// Line 1787, Address: 0x102c7e8, Func Offset: 0x28
	// Line 1788, Address: 0x102c7f8, Func Offset: 0x38
	// Line 1789, Address: 0x102c804, Func Offset: 0x44
	// Line 1791, Address: 0x102c810, Func Offset: 0x50
	// Line 1792, Address: 0x102c83c, Func Offset: 0x7c
	// Line 1795, Address: 0x102c868, Func Offset: 0xa8
	// Func End, Address: 0x102c874, Func Offset: 0xb4
}

// 
// Start address: 0x102c880
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1811, Address: 0x102c880, Func Offset: 0
	// Line 1818, Address: 0x102c898, Func Offset: 0x18
	// Line 1819, Address: 0x102c8a4, Func Offset: 0x24
	// Line 1820, Address: 0x102c8b0, Func Offset: 0x30
	// Line 1821, Address: 0x102c8b8, Func Offset: 0x38
	// Line 1822, Address: 0x102c8bc, Func Offset: 0x3c
	// Line 1826, Address: 0x102c8d4, Func Offset: 0x54
	// Line 1827, Address: 0x102c8dc, Func Offset: 0x5c
	// Line 1828, Address: 0x102c8e0, Func Offset: 0x60
	// Line 1830, Address: 0x102c8f0, Func Offset: 0x70
	// Func End, Address: 0x102c910, Func Offset: 0x90
}

// 
// Start address: 0x102c910
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1833, Address: 0x102c910, Func Offset: 0
	// Line 1834, Address: 0x102c928, Func Offset: 0x18
	// Line 1835, Address: 0x102c948, Func Offset: 0x38
	// Func End, Address: 0x102c958, Func Offset: 0x48
}

// 
// Start address: 0x102c960
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1840, Address: 0x102c960, Func Offset: 0
	// Line 1844, Address: 0x102c980, Func Offset: 0x20
	// Line 1847, Address: 0x102c99c, Func Offset: 0x3c
	// Line 1851, Address: 0x102c9c4, Func Offset: 0x64
	// Line 1852, Address: 0x102c9d0, Func Offset: 0x70
	// Line 1854, Address: 0x102c9f8, Func Offset: 0x98
	// Func End, Address: 0x102ca08, Func Offset: 0xa8
}

// 
// Start address: 0x102ca10
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1860, Address: 0x102ca10, Func Offset: 0
	// Line 1863, Address: 0x102ca2c, Func Offset: 0x1c
	// Line 1864, Address: 0x102ca34, Func Offset: 0x24
	// Line 1867, Address: 0x102ca3c, Func Offset: 0x2c
	// Line 1869, Address: 0x102ca60, Func Offset: 0x50
	// Line 1870, Address: 0x102ca80, Func Offset: 0x70
	// Line 1871, Address: 0x102ca88, Func Offset: 0x78
	// Line 1872, Address: 0x102caac, Func Offset: 0x9c
	// Func End, Address: 0x102cac8, Func Offset: 0xb8
}

// 
// Start address: 0x102cad0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1898, Address: 0x102cad0, Func Offset: 0
	// Line 1903, Address: 0x102caf8, Func Offset: 0x28
	// Line 1904, Address: 0x102cb08, Func Offset: 0x38
	// Line 1906, Address: 0x102cb24, Func Offset: 0x54
	// Line 1907, Address: 0x102cb48, Func Offset: 0x78
	// Line 1908, Address: 0x102cb70, Func Offset: 0xa0
	// Line 1909, Address: 0x102cb7c, Func Offset: 0xac
	// Line 1910, Address: 0x102cb84, Func Offset: 0xb4
	// Line 1913, Address: 0x102cba0, Func Offset: 0xd0
	// Line 1917, Address: 0x102cbc8, Func Offset: 0xf8
	// Line 1920, Address: 0x102cbd0, Func Offset: 0x100
	// Line 1921, Address: 0x102cbd4, Func Offset: 0x104
	// Line 1925, Address: 0x102cbf0, Func Offset: 0x120
	// Line 1932, Address: 0x102cc18, Func Offset: 0x148
	// Func End, Address: 0x102cc34, Func Offset: 0x164
}

// 
// Start address: 0x102cc40
void mapinit()
{
	// Line 1943, Address: 0x102cc40, Func Offset: 0
	// Line 1945, Address: 0x102cc48, Func Offset: 0x8
	// Line 1946, Address: 0x102cc5c, Func Offset: 0x1c
	// Line 1949, Address: 0x102cc70, Func Offset: 0x30
	// Line 1950, Address: 0x102cc90, Func Offset: 0x50
	// Func End, Address: 0x102cca0, Func Offset: 0x60
}

// 
// Start address: 0x102cca0
void mapset()
{
	// Line 1955, Address: 0x102cca0, Func Offset: 0
	// Func End, Address: 0x102cca8, Func Offset: 0x8
}

// 
// Start address: 0x102ccb0
void divdevset()
{
	// Line 1959, Address: 0x102ccb0, Func Offset: 0
	// Func End, Address: 0x102ccb8, Func Offset: 0x8
}

// 
// Start address: 0x102ccc0
void enecginit()
{
	// Line 1963, Address: 0x102ccc0, Func Offset: 0
	// Func End, Address: 0x102ccc8, Func Offset: 0x8
}

