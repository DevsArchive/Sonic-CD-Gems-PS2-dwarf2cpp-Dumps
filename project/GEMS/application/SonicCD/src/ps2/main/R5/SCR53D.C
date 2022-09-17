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

typedef void(*type_11)(int, int);
typedef int(*type_17)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef char type_1[3];
typedef _anon13 type_2[0];
typedef short type_3[6];
typedef unsigned char type_4[4];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef short type_7[2];
typedef short type_8[2][8];
typedef unsigned char type_9[2];
typedef unsigned char type_10[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[65];
typedef unsigned char type_15[64];
typedef unsigned char type_16[64][8];
typedef short type_18[256];
typedef _anon2* type_19[8];
typedef _anon1 type_20[128];
typedef short type_21[9];
typedef short type_22[2];
typedef short type_23[2][1];
typedef char type_24[3];
typedef _anon2* type_25[8];

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

unsigned char z81awrttbl[65];
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
_anon2 scrz_h_posit;
_anon2 scrc_h_posit;
_anon2 scrb_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
unsigned char enkeino;
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
void(*ChangeTileBmp)(int, int);

_anon1* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z51dline(short** ppHscw);
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

// 
// Start address: 0x1020840
_anon1* main_chk()
{
	// Line 150, Address: 0x1020840, Func Offset: 0
	// Line 151, Address: 0x1020854, Func Offset: 0x14
	// Line 153, Address: 0x1020864, Func Offset: 0x24
	// Line 155, Address: 0x102086c, Func Offset: 0x2c
	// Func End, Address: 0x1020874, Func Offset: 0x34
}

// 
// Start address: 0x1020880
void scr_set()
{
	short* pScrTbl;
	// Line 193, Address: 0x1020880, Func Offset: 0
	// Line 196, Address: 0x102088c, Func Offset: 0xc
	// Line 197, Address: 0x10208a0, Func Offset: 0x20
	// Line 198, Address: 0x10208b4, Func Offset: 0x34
	// Line 200, Address: 0x10208bc, Func Offset: 0x3c
	// Line 201, Address: 0x10208c4, Func Offset: 0x44
	// Line 202, Address: 0x10208d0, Func Offset: 0x50
	// Line 203, Address: 0x10208d4, Func Offset: 0x54
	// Line 204, Address: 0x10208e8, Func Offset: 0x68
	// Line 205, Address: 0x10208ec, Func Offset: 0x6c
	// Line 206, Address: 0x1020900, Func Offset: 0x80
	// Line 207, Address: 0x1020904, Func Offset: 0x84
	// Line 208, Address: 0x1020918, Func Offset: 0x98
	// Line 209, Address: 0x102091c, Func Offset: 0x9c
	// Line 210, Address: 0x1020930, Func Offset: 0xb0
	// Line 211, Address: 0x1020950, Func Offset: 0xd0
	// Line 212, Address: 0x1020954, Func Offset: 0xd4
	// Line 213, Address: 0x1020960, Func Offset: 0xe0
	// Line 215, Address: 0x102096c, Func Offset: 0xec
	// Line 216, Address: 0x1020978, Func Offset: 0xf8
	// Line 218, Address: 0x1020984, Func Offset: 0x104
	// Line 219, Address: 0x102098c, Func Offset: 0x10c
	// Func End, Address: 0x10209a0, Func Offset: 0x120
}

// 
// Start address: 0x10209a0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 268, Address: 0x10209a0, Func Offset: 0
	// Line 271, Address: 0x10209b4, Func Offset: 0x14
	// Line 272, Address: 0x10209c4, Func Offset: 0x24
	// Line 273, Address: 0x10209cc, Func Offset: 0x2c
	// Line 275, Address: 0x10209dc, Func Offset: 0x3c
	// Line 276, Address: 0x10209f4, Func Offset: 0x54
	// Line 277, Address: 0x1020a04, Func Offset: 0x64
	// Line 278, Address: 0x1020a0c, Func Offset: 0x6c
	// Line 280, Address: 0x1020a10, Func Offset: 0x70
	// Line 282, Address: 0x1020a18, Func Offset: 0x78
	// Line 283, Address: 0x1020a38, Func Offset: 0x98
	// Line 284, Address: 0x1020a5c, Func Offset: 0xbc
	// Line 286, Address: 0x1020a64, Func Offset: 0xc4
	// Line 290, Address: 0x1020a84, Func Offset: 0xe4
	// Line 291, Address: 0x1020a98, Func Offset: 0xf8
	// Line 295, Address: 0x1020aac, Func Offset: 0x10c
	// Line 296, Address: 0x1020ac0, Func Offset: 0x120
	// Line 297, Address: 0x1020acc, Func Offset: 0x12c
	// Line 298, Address: 0x1020ad4, Func Offset: 0x134
	// Line 302, Address: 0x1020ad8, Func Offset: 0x138
	// Line 303, Address: 0x1020afc, Func Offset: 0x15c
	// Line 307, Address: 0x1020b0c, Func Offset: 0x16c
	// Line 309, Address: 0x1020b14, Func Offset: 0x174
	// Line 310, Address: 0x1020b28, Func Offset: 0x188
	// Line 311, Address: 0x1020b34, Func Offset: 0x194
	// Line 312, Address: 0x1020b3c, Func Offset: 0x19c
	// Line 316, Address: 0x1020b40, Func Offset: 0x1a0
	// Line 317, Address: 0x1020b64, Func Offset: 0x1c4
	// Line 321, Address: 0x1020b74, Func Offset: 0x1d4
	// Line 323, Address: 0x1020b7c, Func Offset: 0x1dc
	// Line 326, Address: 0x1020b8c, Func Offset: 0x1ec
	// Line 327, Address: 0x1020b9c, Func Offset: 0x1fc
	// Line 328, Address: 0x1020bac, Func Offset: 0x20c
	// Line 329, Address: 0x1020bbc, Func Offset: 0x21c
	// Line 330, Address: 0x1020bcc, Func Offset: 0x22c
	// Func End, Address: 0x1020be8, Func Offset: 0x248
}

// 
// Start address: 0x1020bf0
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 351, Address: 0x1020bf0, Func Offset: 0
	// Line 354, Address: 0x1020bfc, Func Offset: 0xc
	// Line 355, Address: 0x1020c04, Func Offset: 0x14
	// Line 357, Address: 0x1020c08, Func Offset: 0x18
	// Line 358, Address: 0x1020c14, Func Offset: 0x24
	// Line 360, Address: 0x1020c30, Func Offset: 0x40
	// Line 361, Address: 0x1020c3c, Func Offset: 0x4c
	// Line 362, Address: 0x1020c48, Func Offset: 0x58
	// Line 364, Address: 0x1020c54, Func Offset: 0x64
	// Line 365, Address: 0x1020c70, Func Offset: 0x80
	// Line 367, Address: 0x1020c7c, Func Offset: 0x8c
	// Line 368, Address: 0x1020c98, Func Offset: 0xa8
	// Line 370, Address: 0x1020ca4, Func Offset: 0xb4
	// Line 371, Address: 0x1020cb0, Func Offset: 0xc0
	// Line 372, Address: 0x1020cbc, Func Offset: 0xcc
	// Func End, Address: 0x1020cc8, Func Offset: 0xd8
}

// 
// Start address: 0x1020cd0
void scroll()
{
	_anon2 ldwk;
	_anon2* pHscrbuf;
	_anon2 ldwk2;
	_anon2 ldwk3;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	short sYline;
	short sYnumsv;
	// Line 388, Address: 0x1020cd0, Func Offset: 0
	// Line 400, Address: 0x1020cf4, Func Offset: 0x24
	// Line 405, Address: 0x1020d04, Func Offset: 0x34
	// Line 407, Address: 0x1020d30, Func Offset: 0x60
	// Line 409, Address: 0x1020d38, Func Offset: 0x68
	// Line 410, Address: 0x1020d40, Func Offset: 0x70
	// Line 412, Address: 0x1020d48, Func Offset: 0x78
	// Line 413, Address: 0x1020d58, Func Offset: 0x88
	// Line 416, Address: 0x1020d68, Func Offset: 0x98
	// Line 417, Address: 0x1020d7c, Func Offset: 0xac
	// Line 419, Address: 0x1020d8c, Func Offset: 0xbc
	// Line 420, Address: 0x1020da0, Func Offset: 0xd0
	// Line 422, Address: 0x1020db0, Func Offset: 0xe0
	// Line 423, Address: 0x1020dc4, Func Offset: 0xf4
	// Line 425, Address: 0x1020dd4, Func Offset: 0x104
	// Line 426, Address: 0x1020de8, Func Offset: 0x118
	// Line 429, Address: 0x1020df8, Func Offset: 0x128
	// Line 431, Address: 0x1020e08, Func Offset: 0x138
	// Line 432, Address: 0x1020e30, Func Offset: 0x160
	// Line 433, Address: 0x1020e68, Func Offset: 0x198
	// Line 435, Address: 0x1020e7c, Func Offset: 0x1ac
	// Line 436, Address: 0x1020e88, Func Offset: 0x1b8
	// Line 439, Address: 0x1020ea8, Func Offset: 0x1d8
	// Line 453, Address: 0x1020eb4, Func Offset: 0x1e4
	// Line 454, Address: 0x1020ed4, Func Offset: 0x204
	// Line 455, Address: 0x1020ee0, Func Offset: 0x210
	// Line 456, Address: 0x1020ef4, Func Offset: 0x224
	// Line 459, Address: 0x1020f04, Func Offset: 0x234
	// Line 460, Address: 0x1020f10, Func Offset: 0x240
	// Line 461, Address: 0x1020f40, Func Offset: 0x270
	// Line 462, Address: 0x1020f4c, Func Offset: 0x27c
	// Line 463, Address: 0x1020f58, Func Offset: 0x288
	// Line 465, Address: 0x1020f70, Func Offset: 0x2a0
	// Line 467, Address: 0x1020f7c, Func Offset: 0x2ac
	// Line 468, Address: 0x1020f88, Func Offset: 0x2b8
	// Line 469, Address: 0x1020fb8, Func Offset: 0x2e8
	// Line 470, Address: 0x1020fd4, Func Offset: 0x304
	// Line 471, Address: 0x1020fdc, Func Offset: 0x30c
	// Line 472, Address: 0x1021014, Func Offset: 0x344
	// Line 473, Address: 0x1021028, Func Offset: 0x358
	// Line 477, Address: 0x1021034, Func Offset: 0x364
	// Line 478, Address: 0x1021040, Func Offset: 0x370
	// Line 479, Address: 0x1021070, Func Offset: 0x3a0
	// Line 485, Address: 0x102108c, Func Offset: 0x3bc
	// Line 486, Address: 0x10210a4, Func Offset: 0x3d4
	// Line 487, Address: 0x10210b0, Func Offset: 0x3e0
	// Line 488, Address: 0x10210bc, Func Offset: 0x3ec
	// Line 489, Address: 0x10210cc, Func Offset: 0x3fc
	// Line 490, Address: 0x10210fc, Func Offset: 0x42c
	// Line 491, Address: 0x1021100, Func Offset: 0x430
	// Line 493, Address: 0x1021108, Func Offset: 0x438
	// Line 495, Address: 0x1021130, Func Offset: 0x460
	// Line 496, Address: 0x102114c, Func Offset: 0x47c
	// Line 497, Address: 0x1021158, Func Offset: 0x488
	// Line 498, Address: 0x1021164, Func Offset: 0x494
	// Line 499, Address: 0x1021188, Func Offset: 0x4b8
	// Line 500, Address: 0x1021198, Func Offset: 0x4c8
	// Line 501, Address: 0x10211bc, Func Offset: 0x4ec
	// Line 505, Address: 0x10211d8, Func Offset: 0x508
	// Func End, Address: 0x1021204, Func Offset: 0x534
}

// 
// Start address: 0x1021210
void z51dline(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51dscrtbl[3];
	// Line 519, Address: 0x1021210, Func Offset: 0
	// Line 524, Address: 0x1021228, Func Offset: 0x18
	// Line 528, Address: 0x102124c, Func Offset: 0x3c
	// Line 529, Address: 0x1021270, Func Offset: 0x60
	// Line 530, Address: 0x102128c, Func Offset: 0x7c
	// Line 532, Address: 0x1021290, Func Offset: 0x80
	// Line 533, Address: 0x1021294, Func Offset: 0x84
	// Line 534, Address: 0x10212a0, Func Offset: 0x90
	// Line 536, Address: 0x10212b4, Func Offset: 0xa4
	// Line 538, Address: 0x10212c0, Func Offset: 0xb0
	// Line 540, Address: 0x10212e0, Func Offset: 0xd0
	// Line 542, Address: 0x10212f8, Func Offset: 0xe8
	// Line 543, Address: 0x102130c, Func Offset: 0xfc
	// Line 544, Address: 0x1021318, Func Offset: 0x108
	// Line 546, Address: 0x1021324, Func Offset: 0x114
	// Line 547, Address: 0x1021348, Func Offset: 0x138
	// Line 548, Address: 0x1021354, Func Offset: 0x144
	// Line 549, Address: 0x1021378, Func Offset: 0x168
	// Line 551, Address: 0x1021384, Func Offset: 0x174
	// Line 552, Address: 0x1021398, Func Offset: 0x188
	// Func End, Address: 0x10213b4, Func Offset: 0x1a4
}

// 
// Start address: 0x10213c0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 573, Address: 0x10213c0, Func Offset: 0
	// Line 577, Address: 0x10213dc, Func Offset: 0x1c
	// Line 579, Address: 0x10213e0, Func Offset: 0x20
	// Line 580, Address: 0x10213fc, Func Offset: 0x3c
	// Line 581, Address: 0x1021408, Func Offset: 0x48
	// Line 583, Address: 0x1021414, Func Offset: 0x54
	// Line 584, Address: 0x102141c, Func Offset: 0x5c
	// Line 585, Address: 0x102142c, Func Offset: 0x6c
	// Line 586, Address: 0x1021450, Func Offset: 0x90
	// Line 587, Address: 0x1021470, Func Offset: 0xb0
	// Func End, Address: 0x1021484, Func Offset: 0xc4
}

// 
// Start address: 0x1021490
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 693, Address: 0x1021490, Func Offset: 0
	// Line 696, Address: 0x10214a0, Func Offset: 0x10
	// Line 697, Address: 0x10214b0, Func Offset: 0x20
	// Line 698, Address: 0x10214bc, Func Offset: 0x2c
	// Line 700, Address: 0x10214f4, Func Offset: 0x64
	// Line 701, Address: 0x10214fc, Func Offset: 0x6c
	// Line 702, Address: 0x1021510, Func Offset: 0x80
	// Line 703, Address: 0x1021530, Func Offset: 0xa0
	// Line 704, Address: 0x1021544, Func Offset: 0xb4
	// Line 706, Address: 0x102154c, Func Offset: 0xbc
	// Line 711, Address: 0x1021560, Func Offset: 0xd0
	// Func End, Address: 0x1021574, Func Offset: 0xe4
}

// 
// Start address: 0x1021580
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 729, Address: 0x1021580, Func Offset: 0
	// Line 733, Address: 0x1021594, Func Offset: 0x14
	// Line 734, Address: 0x102159c, Func Offset: 0x1c
	// Line 735, Address: 0x10215a4, Func Offset: 0x24
	// Line 736, Address: 0x10215ac, Func Offset: 0x2c
	// Line 737, Address: 0x10215b0, Func Offset: 0x30
	// Line 738, Address: 0x10215d4, Func Offset: 0x54
	// Line 739, Address: 0x10215e0, Func Offset: 0x60
	// Line 741, Address: 0x10215fc, Func Offset: 0x7c
	// Line 742, Address: 0x1021608, Func Offset: 0x88
	// Line 743, Address: 0x102161c, Func Offset: 0x9c
	// Line 744, Address: 0x1021628, Func Offset: 0xa8
	// Line 745, Address: 0x102164c, Func Offset: 0xcc
	// Line 747, Address: 0x1021654, Func Offset: 0xd4
	// Line 752, Address: 0x102167c, Func Offset: 0xfc
	// Func End, Address: 0x1021690, Func Offset: 0x110
}

// 
// Start address: 0x1021690
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 770, Address: 0x1021690, Func Offset: 0
	// Line 774, Address: 0x10216a4, Func Offset: 0x14
	// Line 775, Address: 0x10216ac, Func Offset: 0x1c
	// Line 776, Address: 0x10216b4, Func Offset: 0x24
	// Line 777, Address: 0x10216bc, Func Offset: 0x2c
	// Line 778, Address: 0x10216c0, Func Offset: 0x30
	// Line 779, Address: 0x10216e4, Func Offset: 0x54
	// Line 780, Address: 0x10216f0, Func Offset: 0x60
	// Line 782, Address: 0x102170c, Func Offset: 0x7c
	// Line 783, Address: 0x1021718, Func Offset: 0x88
	// Line 784, Address: 0x102172c, Func Offset: 0x9c
	// Line 785, Address: 0x1021738, Func Offset: 0xa8
	// Line 786, Address: 0x102175c, Func Offset: 0xcc
	// Line 788, Address: 0x1021764, Func Offset: 0xd4
	// Line 793, Address: 0x102178c, Func Offset: 0xfc
	// Func End, Address: 0x10217a0, Func Offset: 0x110
}

// 
// Start address: 0x10217a0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 811, Address: 0x10217a0, Func Offset: 0
	// Line 815, Address: 0x10217b4, Func Offset: 0x14
	// Line 816, Address: 0x10217bc, Func Offset: 0x1c
	// Line 817, Address: 0x10217c4, Func Offset: 0x24
	// Line 818, Address: 0x10217cc, Func Offset: 0x2c
	// Line 819, Address: 0x10217d0, Func Offset: 0x30
	// Line 820, Address: 0x10217f4, Func Offset: 0x54
	// Line 821, Address: 0x1021800, Func Offset: 0x60
	// Line 823, Address: 0x102181c, Func Offset: 0x7c
	// Line 824, Address: 0x1021828, Func Offset: 0x88
	// Line 825, Address: 0x102183c, Func Offset: 0x9c
	// Line 826, Address: 0x1021848, Func Offset: 0xa8
	// Line 827, Address: 0x102186c, Func Offset: 0xcc
	// Line 829, Address: 0x1021874, Func Offset: 0xd4
	// Line 834, Address: 0x102189c, Func Offset: 0xfc
	// Func End, Address: 0x10218b0, Func Offset: 0x110
}

// 
// Start address: 0x10218b0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 849, Address: 0x10218b0, Func Offset: 0
	// Line 853, Address: 0x10218c0, Func Offset: 0x10
	// Line 855, Address: 0x10218d0, Func Offset: 0x20
	// Line 856, Address: 0x10218d8, Func Offset: 0x28
	// Line 857, Address: 0x102190c, Func Offset: 0x5c
	// Line 858, Address: 0x1021914, Func Offset: 0x64
	// Line 859, Address: 0x1021928, Func Offset: 0x78
	// Line 860, Address: 0x102194c, Func Offset: 0x9c
	// Line 861, Address: 0x1021960, Func Offset: 0xb0
	// Line 862, Address: 0x1021968, Func Offset: 0xb8
	// Line 867, Address: 0x102197c, Func Offset: 0xcc
	// Func End, Address: 0x1021994, Func Offset: 0xe4
}

// 
// Start address: 0x10219a0
void scrh_move()
{
	short xwk;
	// Line 884, Address: 0x10219a0, Func Offset: 0
	// Line 887, Address: 0x10219a8, Func Offset: 0x8
	// Line 888, Address: 0x10219f0, Func Offset: 0x50
	// Line 890, Address: 0x1021a00, Func Offset: 0x60
	// Line 891, Address: 0x1021a08, Func Offset: 0x68
	// Line 892, Address: 0x1021a10, Func Offset: 0x70
	// Line 894, Address: 0x1021a20, Func Offset: 0x80
	// Line 895, Address: 0x1021a34, Func Offset: 0x94
	// Line 899, Address: 0x1021a40, Func Offset: 0xa0
	// Line 900, Address: 0x1021a54, Func Offset: 0xb4
	// Line 901, Address: 0x1021a78, Func Offset: 0xd8
	// Line 903, Address: 0x1021a88, Func Offset: 0xe8
	// Line 905, Address: 0x1021a90, Func Offset: 0xf0
	// Line 906, Address: 0x1021aa4, Func Offset: 0x104
	// Line 910, Address: 0x1021ab0, Func Offset: 0x110
	// Line 911, Address: 0x1021ac4, Func Offset: 0x124
	// Line 912, Address: 0x1021ae8, Func Offset: 0x148
	// Line 917, Address: 0x1021af8, Func Offset: 0x158
	// Line 918, Address: 0x1021b28, Func Offset: 0x188
	// Line 919, Address: 0x1021b30, Func Offset: 0x190
	// Func End, Address: 0x1021b40, Func Offset: 0x1a0
}

// 
// Start address: 0x1021b40
void scroll_v()
{
	short ywk;
	// Line 934, Address: 0x1021b40, Func Offset: 0
	// Line 937, Address: 0x1021b4c, Func Offset: 0xc
	// Line 938, Address: 0x1021b80, Func Offset: 0x40
	// Line 939, Address: 0x1021b98, Func Offset: 0x58
	// Line 943, Address: 0x1021ba4, Func Offset: 0x64
	// Line 944, Address: 0x1021bbc, Func Offset: 0x7c
	// Line 945, Address: 0x1021bc8, Func Offset: 0x88
	// Line 946, Address: 0x1021bec, Func Offset: 0xac
	// Line 947, Address: 0x1021c00, Func Offset: 0xc0
	// Line 948, Address: 0x1021c0c, Func Offset: 0xcc
	// Line 949, Address: 0x1021c14, Func Offset: 0xd4
	// Line 950, Address: 0x1021c3c, Func Offset: 0xfc
	// Line 951, Address: 0x1021c64, Func Offset: 0x124
	// Line 952, Address: 0x1021c70, Func Offset: 0x130
	// Line 954, Address: 0x1021c78, Func Offset: 0x138
	// Line 955, Address: 0x1021ca0, Func Offset: 0x160
	// Line 956, Address: 0x1021cb0, Func Offset: 0x170
	// Line 957, Address: 0x1021cb8, Func Offset: 0x178
	// Line 962, Address: 0x1021cc0, Func Offset: 0x180
	// Line 963, Address: 0x1021cec, Func Offset: 0x1ac
	// Line 964, Address: 0x1021cf8, Func Offset: 0x1b8
	// Line 965, Address: 0x1021d00, Func Offset: 0x1c0
	// Line 966, Address: 0x1021d10, Func Offset: 0x1d0
	// Line 967, Address: 0x1021d18, Func Offset: 0x1d8
	// Line 972, Address: 0x1021d20, Func Offset: 0x1e0
	// Line 973, Address: 0x1021d28, Func Offset: 0x1e8
	// Func End, Address: 0x1021d3c, Func Offset: 0x1fc
}

// 
// Start address: 0x1021d40
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 987, Address: 0x1021d40, Func Offset: 0
	// Line 990, Address: 0x1021d50, Func Offset: 0x10
	// Line 991, Address: 0x1021d6c, Func Offset: 0x2c
	// Line 992, Address: 0x1021d84, Func Offset: 0x44
	// Line 993, Address: 0x1021da8, Func Offset: 0x68
	// Line 994, Address: 0x1021db0, Func Offset: 0x70
	// Line 998, Address: 0x1021dc0, Func Offset: 0x80
	// Line 999, Address: 0x1021dd4, Func Offset: 0x94
	// Line 1000, Address: 0x1021de0, Func Offset: 0xa0
	// Line 1003, Address: 0x1021de8, Func Offset: 0xa8
	// Line 1004, Address: 0x1021e00, Func Offset: 0xc0
	// Line 1005, Address: 0x1021e0c, Func Offset: 0xcc
	// Line 1006, Address: 0x1021e2c, Func Offset: 0xec
	// Line 1007, Address: 0x1021e38, Func Offset: 0xf8
	// Line 1008, Address: 0x1021e40, Func Offset: 0x100
	// Line 1010, Address: 0x1021e4c, Func Offset: 0x10c
	// Line 1012, Address: 0x1021e54, Func Offset: 0x114
	// Line 1013, Address: 0x1021e6c, Func Offset: 0x12c
	// Line 1014, Address: 0x1021e78, Func Offset: 0x138
	// Line 1015, Address: 0x1021e98, Func Offset: 0x158
	// Line 1016, Address: 0x1021ea4, Func Offset: 0x164
	// Line 1017, Address: 0x1021eac, Func Offset: 0x16c
	// Line 1020, Address: 0x1021eb8, Func Offset: 0x178
	// Func End, Address: 0x1021ecc, Func Offset: 0x18c
}

// 
// Start address: 0x1021ed0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1034, Address: 0x1021ed0, Func Offset: 0
	// Line 1037, Address: 0x1021ee0, Func Offset: 0x10
	// Line 1039, Address: 0x1021eec, Func Offset: 0x1c
	// Line 1040, Address: 0x1021f04, Func Offset: 0x34
	// Line 1041, Address: 0x1021f10, Func Offset: 0x40
	// Line 1042, Address: 0x1021f30, Func Offset: 0x60
	// Line 1043, Address: 0x1021f3c, Func Offset: 0x6c
	// Line 1044, Address: 0x1021f44, Func Offset: 0x74
	// Line 1046, Address: 0x1021f50, Func Offset: 0x80
	// Func End, Address: 0x1021f64, Func Offset: 0x94
}

// 
// Start address: 0x1021f70
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1061, Address: 0x1021f70, Func Offset: 0
	// Line 1064, Address: 0x1021f7c, Func Offset: 0xc
	// Line 1065, Address: 0x1021f80, Func Offset: 0x10
	// Line 1066, Address: 0x1021fac, Func Offset: 0x3c
	// Line 1067, Address: 0x1021fc0, Func Offset: 0x50
	// Line 1068, Address: 0x1021fcc, Func Offset: 0x5c
	// Line 1069, Address: 0x1021fd4, Func Offset: 0x64
	// Line 1071, Address: 0x1021fe0, Func Offset: 0x70
	// Func End, Address: 0x1021ff0, Func Offset: 0x80
}

// 
// Start address: 0x1021ff0
void sv_move_sub2()
{
	// Line 1075, Address: 0x1021ff0, Func Offset: 0
	// Line 1076, Address: 0x1021ff8, Func Offset: 0x8
	// Line 1078, Address: 0x1022000, Func Offset: 0x10
	// Line 1079, Address: 0x102200c, Func Offset: 0x1c
	// Func End, Address: 0x102201c, Func Offset: 0x2c
}

// 
// Start address: 0x1022020
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1093, Address: 0x1022020, Func Offset: 0
	// Line 1096, Address: 0x102202c, Func Offset: 0xc
	// Line 1097, Address: 0x1022050, Func Offset: 0x30
	// Line 1098, Address: 0x1022074, Func Offset: 0x54
	// Line 1099, Address: 0x1022080, Func Offset: 0x60
	// Func End, Address: 0x1022090, Func Offset: 0x70
}

// 
// Start address: 0x1022090
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1114, Address: 0x1022090, Func Offset: 0
	// Line 1115, Address: 0x102209c, Func Offset: 0xc
	// Line 1116, Address: 0x10220c4, Func Offset: 0x34
	// Line 1118, Address: 0x10220dc, Func Offset: 0x4c
	// Line 1119, Address: 0x10220e8, Func Offset: 0x58
	// Line 1120, Address: 0x10220f0, Func Offset: 0x60
	// Line 1121, Address: 0x10220fc, Func Offset: 0x6c
	// Line 1122, Address: 0x1022110, Func Offset: 0x80
	// Line 1123, Address: 0x1022124, Func Offset: 0x94
	// Line 1127, Address: 0x1022138, Func Offset: 0xa8
	// Line 1128, Address: 0x1022144, Func Offset: 0xb4
	// Func End, Address: 0x1022154, Func Offset: 0xc4
}

// 
// Start address: 0x1022160
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1142, Address: 0x1022160, Func Offset: 0
	// Line 1145, Address: 0x102216c, Func Offset: 0xc
	// Line 1146, Address: 0x102218c, Func Offset: 0x2c
	// Line 1147, Address: 0x10221b0, Func Offset: 0x50
	// Line 1148, Address: 0x10221bc, Func Offset: 0x5c
	// Func End, Address: 0x10221cc, Func Offset: 0x6c
}

// 
// Start address: 0x10221d0
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1163, Address: 0x10221d0, Func Offset: 0
	// Line 1164, Address: 0x10221dc, Func Offset: 0xc
	// Line 1165, Address: 0x1022204, Func Offset: 0x34
	// Line 1167, Address: 0x102221c, Func Offset: 0x4c
	// Line 1168, Address: 0x1022228, Func Offset: 0x58
	// Line 1169, Address: 0x1022230, Func Offset: 0x60
	// Line 1170, Address: 0x102223c, Func Offset: 0x6c
	// Line 1171, Address: 0x1022250, Func Offset: 0x80
	// Line 1172, Address: 0x1022264, Func Offset: 0x94
	// Line 1176, Address: 0x1022278, Func Offset: 0xa8
	// Line 1177, Address: 0x1022284, Func Offset: 0xb4
	// Func End, Address: 0x1022294, Func Offset: 0xc4
}

// 
// Start address: 0x10222a0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1194, Address: 0x10222a0, Func Offset: 0
	// Line 1198, Address: 0x10222b0, Func Offset: 0x10
	// Line 1199, Address: 0x10222c0, Func Offset: 0x20
	// Line 1200, Address: 0x10222e4, Func Offset: 0x44
	// Line 1201, Address: 0x10222f8, Func Offset: 0x58
	// Line 1202, Address: 0x1022310, Func Offset: 0x70
	// Line 1204, Address: 0x102231c, Func Offset: 0x7c
	// Line 1206, Address: 0x1022328, Func Offset: 0x88
	// Line 1207, Address: 0x1022364, Func Offset: 0xc4
	// Line 1208, Address: 0x102236c, Func Offset: 0xcc
	// Line 1209, Address: 0x1022380, Func Offset: 0xe0
	// Line 1210, Address: 0x10223ac, Func Offset: 0x10c
	// Line 1211, Address: 0x10223bc, Func Offset: 0x11c
	// Line 1212, Address: 0x10223d0, Func Offset: 0x130
	// Line 1213, Address: 0x10223d8, Func Offset: 0x138
	// Line 1218, Address: 0x10223ec, Func Offset: 0x14c
	// Func End, Address: 0x1022400, Func Offset: 0x160
}

// 
// Start address: 0x1022400
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
	// Line 1236, Address: 0x1022400, Func Offset: 0
	// Line 1245, Address: 0x1022420, Func Offset: 0x20
	// Line 1246, Address: 0x1022424, Func Offset: 0x24
	// Line 1247, Address: 0x1022430, Func Offset: 0x30
	// Line 1248, Address: 0x102243c, Func Offset: 0x3c
	// Line 1249, Address: 0x1022444, Func Offset: 0x44
	// Line 1250, Address: 0x102244c, Func Offset: 0x4c
	// Line 1252, Address: 0x1022460, Func Offset: 0x60
	// Line 1253, Address: 0x1022464, Func Offset: 0x64
	// Line 1254, Address: 0x1022470, Func Offset: 0x70
	// Line 1255, Address: 0x102247c, Func Offset: 0x7c
	// Line 1256, Address: 0x1022484, Func Offset: 0x84
	// Line 1258, Address: 0x102248c, Func Offset: 0x8c
	// Line 1259, Address: 0x1022498, Func Offset: 0x98
	// Line 1260, Address: 0x10224ac, Func Offset: 0xac
	// Line 1262, Address: 0x10224b8, Func Offset: 0xb8
	// Line 1263, Address: 0x10224c0, Func Offset: 0xc0
	// Line 1265, Address: 0x10224c8, Func Offset: 0xc8
	// Line 1267, Address: 0x10224e8, Func Offset: 0xe8
	// Line 1273, Address: 0x1022514, Func Offset: 0x114
	// Line 1274, Address: 0x1022528, Func Offset: 0x128
	// Line 1276, Address: 0x1022534, Func Offset: 0x134
	// Line 1277, Address: 0x102253c, Func Offset: 0x13c
	// Line 1278, Address: 0x1022544, Func Offset: 0x144
	// Line 1280, Address: 0x1022564, Func Offset: 0x164
	// Line 1286, Address: 0x1022590, Func Offset: 0x190
	// Line 1287, Address: 0x10225a4, Func Offset: 0x1a4
	// Line 1289, Address: 0x10225b0, Func Offset: 0x1b0
	// Line 1290, Address: 0x10225b8, Func Offset: 0x1b8
	// Line 1291, Address: 0x10225c0, Func Offset: 0x1c0
	// Line 1293, Address: 0x10225e0, Func Offset: 0x1e0
	// Line 1299, Address: 0x102260c, Func Offset: 0x20c
	// Line 1300, Address: 0x1022620, Func Offset: 0x220
	// Line 1302, Address: 0x102262c, Func Offset: 0x22c
	// Line 1303, Address: 0x1022634, Func Offset: 0x234
	// Line 1304, Address: 0x102263c, Func Offset: 0x23c
	// Line 1306, Address: 0x102265c, Func Offset: 0x25c
	// Line 1315, Address: 0x1022688, Func Offset: 0x288
	// Func End, Address: 0x10226b0, Func Offset: 0x2b0
}

// 
// Start address: 0x10226b0
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
	// Line 1332, Address: 0x10226b0, Func Offset: 0
	// Line 1343, Address: 0x10226dc, Func Offset: 0x2c
	// Line 1345, Address: 0x10226e4, Func Offset: 0x34
	// Line 1346, Address: 0x10226fc, Func Offset: 0x4c
	// Line 1347, Address: 0x1022710, Func Offset: 0x60
	// Line 1349, Address: 0x1022718, Func Offset: 0x68
	// Line 1351, Address: 0x102272c, Func Offset: 0x7c
	// Line 1352, Address: 0x1022744, Func Offset: 0x94
	// Line 1353, Address: 0x1022758, Func Offset: 0xa8
	// Line 1354, Address: 0x1022760, Func Offset: 0xb0
	// Line 1356, Address: 0x1022768, Func Offset: 0xb8
	// Line 1357, Address: 0x102277c, Func Offset: 0xcc
	// Line 1362, Address: 0x1022784, Func Offset: 0xd4
	// Line 1363, Address: 0x10227d4, Func Offset: 0x124
	// Line 1364, Address: 0x10227dc, Func Offset: 0x12c
	// Line 1370, Address: 0x10227fc, Func Offset: 0x14c
	// Line 1371, Address: 0x102281c, Func Offset: 0x16c
	// Line 1372, Address: 0x1022840, Func Offset: 0x190
	// Line 1373, Address: 0x102284c, Func Offset: 0x19c
	// Line 1374, Address: 0x1022854, Func Offset: 0x1a4
	// Line 1376, Address: 0x1022874, Func Offset: 0x1c4
	// Line 1380, Address: 0x10228a0, Func Offset: 0x1f0
	// Line 1383, Address: 0x10228a8, Func Offset: 0x1f8
	// Line 1384, Address: 0x10228ac, Func Offset: 0x1fc
	// Line 1388, Address: 0x10228cc, Func Offset: 0x21c
	// Line 1395, Address: 0x10228f8, Func Offset: 0x248
	// Line 1402, Address: 0x102290c, Func Offset: 0x25c
	// Line 1403, Address: 0x1022914, Func Offset: 0x264
	// Line 1404, Address: 0x102291c, Func Offset: 0x26c
	// Line 1405, Address: 0x1022934, Func Offset: 0x284
	// Line 1406, Address: 0x1022954, Func Offset: 0x2a4
	// Line 1410, Address: 0x102295c, Func Offset: 0x2ac
	// Line 1412, Address: 0x102298c, Func Offset: 0x2dc
	// Line 1413, Address: 0x1022998, Func Offset: 0x2e8
	// Line 1417, Address: 0x10229a8, Func Offset: 0x2f8
	// Line 1418, Address: 0x10229b4, Func Offset: 0x304
	// Line 1420, Address: 0x10229d4, Func Offset: 0x324
	// Line 1421, Address: 0x1022a0c, Func Offset: 0x35c
	// Line 1422, Address: 0x1022a2c, Func Offset: 0x37c
	// Line 1424, Address: 0x1022a50, Func Offset: 0x3a0
	// Line 1427, Address: 0x1022a74, Func Offset: 0x3c4
	// Line 1429, Address: 0x1022a94, Func Offset: 0x3e4
	// Line 1431, Address: 0x1022aa8, Func Offset: 0x3f8
	// Line 1432, Address: 0x1022ab4, Func Offset: 0x404
	// Line 1433, Address: 0x1022ac4, Func Offset: 0x414
	// Line 1435, Address: 0x1022acc, Func Offset: 0x41c
	// Func End, Address: 0x1022af4, Func Offset: 0x444
}

// 
// Start address: 0x1022b00
void scrollwrtc()
{
	// Line 1441, Address: 0x1022b00, Func Offset: 0
	// Func End, Address: 0x1022b08, Func Offset: 0x8
}

// 
// Start address: 0x1022b10
void scrollwrtz()
{
	// Line 1446, Address: 0x1022b10, Func Offset: 0
	// Func End, Address: 0x1022b18, Func Offset: 0x8
}

// 
// Start address: 0x1022b20
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1464, Address: 0x1022b20, Func Offset: 0
	// Line 1477, Address: 0x1022b48, Func Offset: 0x28
	// Line 1480, Address: 0x1022b68, Func Offset: 0x48
	// Line 1481, Address: 0x1022b7c, Func Offset: 0x5c
	// Line 1482, Address: 0x1022b90, Func Offset: 0x70
	// Line 1483, Address: 0x1022ba4, Func Offset: 0x84
	// Line 1485, Address: 0x1022bb8, Func Offset: 0x98
	// Line 1486, Address: 0x1022bc4, Func Offset: 0xa4
	// Line 1487, Address: 0x1022bd8, Func Offset: 0xb8
	// Func End, Address: 0x1022be8, Func Offset: 0xc8
}

// 
// Start address: 0x1022bf0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1491, Address: 0x1022bf0, Func Offset: 0
	// Line 1495, Address: 0x1022c18, Func Offset: 0x28
	// Line 1498, Address: 0x1022c38, Func Offset: 0x48
	// Line 1499, Address: 0x1022c4c, Func Offset: 0x5c
	// Line 1500, Address: 0x1022c60, Func Offset: 0x70
	// Line 1501, Address: 0x1022c74, Func Offset: 0x84
	// Line 1503, Address: 0x1022c88, Func Offset: 0x98
	// Line 1504, Address: 0x1022c94, Func Offset: 0xa4
	// Line 1505, Address: 0x1022ca8, Func Offset: 0xb8
	// Func End, Address: 0x1022cb8, Func Offset: 0xc8
}

// 
// Start address: 0x1022cc0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1525, Address: 0x1022cc0, Func Offset: 0
	// Line 1529, Address: 0x1022ce8, Func Offset: 0x28
	// Line 1532, Address: 0x1022d08, Func Offset: 0x48
	// Line 1533, Address: 0x1022d1c, Func Offset: 0x5c
	// Line 1534, Address: 0x1022d2c, Func Offset: 0x6c
	// Line 1535, Address: 0x1022d40, Func Offset: 0x80
	// Line 1537, Address: 0x1022d50, Func Offset: 0x90
	// Line 1538, Address: 0x1022d5c, Func Offset: 0x9c
	// Line 1539, Address: 0x1022d70, Func Offset: 0xb0
	// Func End, Address: 0x1022d80, Func Offset: 0xc0
}

// 
// Start address: 0x1022d80
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
	// Line 1558, Address: 0x1022d80, Func Offset: 0
	// Line 1564, Address: 0x1022db4, Func Offset: 0x34
	// Line 1566, Address: 0x1022dc4, Func Offset: 0x44
	// Line 1567, Address: 0x1022dc8, Func Offset: 0x48
	// Line 1568, Address: 0x1022dd0, Func Offset: 0x50
	// Line 1570, Address: 0x1022de0, Func Offset: 0x60
	// Line 1572, Address: 0x1022de4, Func Offset: 0x64
	// Line 1573, Address: 0x1022dec, Func Offset: 0x6c
	// Line 1576, Address: 0x1022df4, Func Offset: 0x74
	// Line 1577, Address: 0x1022dfc, Func Offset: 0x7c
	// Line 1578, Address: 0x1022e08, Func Offset: 0x88
	// Line 1580, Address: 0x1022e14, Func Offset: 0x94
	// Line 1581, Address: 0x1022e1c, Func Offset: 0x9c
	// Line 1582, Address: 0x1022e24, Func Offset: 0xa4
	// Line 1583, Address: 0x1022e2c, Func Offset: 0xac
	// Line 1585, Address: 0x1022e38, Func Offset: 0xb8
	// Line 1586, Address: 0x1022e40, Func Offset: 0xc0
	// Line 1587, Address: 0x1022e48, Func Offset: 0xc8
	// Line 1588, Address: 0x1022e50, Func Offset: 0xd0
	// Line 1590, Address: 0x1022e5c, Func Offset: 0xdc
	// Line 1591, Address: 0x1022e64, Func Offset: 0xe4
	// Line 1592, Address: 0x1022e6c, Func Offset: 0xec
	// Line 1595, Address: 0x1022e74, Func Offset: 0xf4
	// Line 1596, Address: 0x1022e7c, Func Offset: 0xfc
	// Line 1599, Address: 0x1022e84, Func Offset: 0x104
	// Line 1600, Address: 0x1022ec8, Func Offset: 0x148
	// Line 1601, Address: 0x1022f0c, Func Offset: 0x18c
	// Line 1602, Address: 0x1022f50, Func Offset: 0x1d0
	// Line 1604, Address: 0x1022f94, Func Offset: 0x214
	// Func End, Address: 0x1022fc4, Func Offset: 0x244
}

// 
// Start address: 0x1022fd0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1622, Address: 0x1022fd0, Func Offset: 0
	// Line 1623, Address: 0x1022ff0, Func Offset: 0x20
	// Line 1624, Address: 0x1023010, Func Offset: 0x40
	// Func End, Address: 0x1023020, Func Offset: 0x50
}

// 
// Start address: 0x1023020
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1626, Address: 0x1023020, Func Offset: 0
	// Line 1627, Address: 0x1023040, Func Offset: 0x20
	// Line 1628, Address: 0x1023044, Func Offset: 0x24
	// Line 1629, Address: 0x1023064, Func Offset: 0x44
	// Func End, Address: 0x1023074, Func Offset: 0x54
}

// 
// Start address: 0x1023080
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1636, Address: 0x1023080, Func Offset: 0
	// Line 1642, Address: 0x10230b0, Func Offset: 0x30
	// Line 1643, Address: 0x10230c0, Func Offset: 0x40
	// Line 1649, Address: 0x10230d0, Func Offset: 0x50
	// Line 1650, Address: 0x10230ec, Func Offset: 0x6c
	// Line 1651, Address: 0x10230f0, Func Offset: 0x70
	// Line 1652, Address: 0x102310c, Func Offset: 0x8c
	// Line 1653, Address: 0x1023110, Func Offset: 0x90
	// Line 1654, Address: 0x1023130, Func Offset: 0xb0
	// Line 1655, Address: 0x1023138, Func Offset: 0xb8
	// Line 1656, Address: 0x1023158, Func Offset: 0xd8
	// Line 1657, Address: 0x1023160, Func Offset: 0xe0
	// Line 1658, Address: 0x10231a8, Func Offset: 0x128
	// Line 1660, Address: 0x10231b4, Func Offset: 0x134
	// Line 1662, Address: 0x10231d0, Func Offset: 0x150
	// Line 1667, Address: 0x10231d8, Func Offset: 0x158
	// Line 1668, Address: 0x10231e4, Func Offset: 0x164
	// Line 1671, Address: 0x10231f0, Func Offset: 0x170
	// Line 1672, Address: 0x10231f8, Func Offset: 0x178
	// Line 1673, Address: 0x1023218, Func Offset: 0x198
	// Line 1674, Address: 0x1023234, Func Offset: 0x1b4
	// Line 1675, Address: 0x102323c, Func Offset: 0x1bc
	// Line 1676, Address: 0x102325c, Func Offset: 0x1dc
	// Line 1678, Address: 0x1023278, Func Offset: 0x1f8
	// Line 1679, Address: 0x1023280, Func Offset: 0x200
	// Line 1680, Address: 0x1023288, Func Offset: 0x208
	// Line 1681, Address: 0x1023294, Func Offset: 0x214
	// Line 1682, Address: 0x10232ac, Func Offset: 0x22c
	// Line 1684, Address: 0x10232bc, Func Offset: 0x23c
	// Line 1687, Address: 0x10232c8, Func Offset: 0x248
	// Line 1688, Address: 0x10232d0, Func Offset: 0x250
	// Line 1689, Address: 0x10232d4, Func Offset: 0x254
	// Func End, Address: 0x10232f4, Func Offset: 0x274
}

// 
// Start address: 0x1023300
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1709, Address: 0x1023300, Func Offset: 0
	// Line 1717, Address: 0x1023328, Func Offset: 0x28
	// Line 1718, Address: 0x102338c, Func Offset: 0x8c
	// Line 1724, Address: 0x1023394, Func Offset: 0x94
	// Line 1725, Address: 0x102339c, Func Offset: 0x9c
	// Line 1726, Address: 0x10233bc, Func Offset: 0xbc
	// Line 1727, Address: 0x10233d8, Func Offset: 0xd8
	// Line 1728, Address: 0x10233e0, Func Offset: 0xe0
	// Line 1729, Address: 0x1023400, Func Offset: 0x100
	// Line 1732, Address: 0x102341c, Func Offset: 0x11c
	// Line 1733, Address: 0x1023424, Func Offset: 0x124
	// Line 1734, Address: 0x102342c, Func Offset: 0x12c
	// Line 1735, Address: 0x1023438, Func Offset: 0x138
	// Line 1736, Address: 0x1023450, Func Offset: 0x150
	// Line 1737, Address: 0x1023458, Func Offset: 0x158
	// Line 1742, Address: 0x1023468, Func Offset: 0x168
	// Line 1745, Address: 0x1023474, Func Offset: 0x174
	// Line 1746, Address: 0x102347c, Func Offset: 0x17c
	// Line 1747, Address: 0x1023480, Func Offset: 0x180
	// Func End, Address: 0x102349c, Func Offset: 0x19c
}

// 
// Start address: 0x10234a0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1761, Address: 0x10234a0, Func Offset: 0
	// Line 1768, Address: 0x10234bc, Func Offset: 0x1c
	// Line 1769, Address: 0x10234c0, Func Offset: 0x20
	// Line 1770, Address: 0x10234c8, Func Offset: 0x28
	// Line 1771, Address: 0x10234ec, Func Offset: 0x4c
	// Line 1772, Address: 0x10234f8, Func Offset: 0x58
	// Line 1773, Address: 0x1023510, Func Offset: 0x70
	// Line 1774, Address: 0x1023524, Func Offset: 0x84
	// Line 1779, Address: 0x102353c, Func Offset: 0x9c
	// Func End, Address: 0x1023554, Func Offset: 0xb4
}

// 
// Start address: 0x1023560
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1793, Address: 0x1023560, Func Offset: 0
	// Line 1794, Address: 0x102356c, Func Offset: 0xc
	// Line 1795, Address: 0x1023598, Func Offset: 0x38
	// Line 1796, Address: 0x10235e4, Func Offset: 0x84
	// Line 1797, Address: 0x1023610, Func Offset: 0xb0
	// Line 1799, Address: 0x102365c, Func Offset: 0xfc
	// Line 1805, Address: 0x1023668, Func Offset: 0x108
	// Line 1806, Address: 0x102366c, Func Offset: 0x10c
	// Func End, Address: 0x1023678, Func Offset: 0x118
}

// 
// Start address: 0x1023680
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1823, Address: 0x1023680, Func Offset: 0
	// Line 1824, Address: 0x102369c, Func Offset: 0x1c
	// Line 1826, Address: 0x10236b8, Func Offset: 0x38
	// Func End, Address: 0x10236c8, Func Offset: 0x48
}

// 
// Start address: 0x10236d0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1828, Address: 0x10236d0, Func Offset: 0
	// Line 1829, Address: 0x10236ec, Func Offset: 0x1c
	// Line 1830, Address: 0x10236f0, Func Offset: 0x20
	// Line 1832, Address: 0x102370c, Func Offset: 0x3c
	// Func End, Address: 0x102371c, Func Offset: 0x4c
}

// 
// Start address: 0x1023720
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1834, Address: 0x1023720, Func Offset: 0
	// Line 1835, Address: 0x1023734, Func Offset: 0x14
	// Line 1837, Address: 0x1023750, Func Offset: 0x30
	// Func End, Address: 0x1023760, Func Offset: 0x40
}

// 
// Start address: 0x1023760
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1839, Address: 0x1023760, Func Offset: 0
	// Line 1840, Address: 0x102377c, Func Offset: 0x1c
	// Line 1842, Address: 0x1023798, Func Offset: 0x38
	// Func End, Address: 0x10237a8, Func Offset: 0x48
}

// 
// Start address: 0x10237b0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1844, Address: 0x10237b0, Func Offset: 0
	// Line 1845, Address: 0x10237c8, Func Offset: 0x18
	// Line 1846, Address: 0x10237d8, Func Offset: 0x28
	// Line 1847, Address: 0x10237e8, Func Offset: 0x38
	// Line 1848, Address: 0x10237f4, Func Offset: 0x44
	// Line 1850, Address: 0x1023800, Func Offset: 0x50
	// Line 1851, Address: 0x102382c, Func Offset: 0x7c
	// Line 1854, Address: 0x1023858, Func Offset: 0xa8
	// Func End, Address: 0x1023864, Func Offset: 0xb4
}

// 
// Start address: 0x1023870
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1870, Address: 0x1023870, Func Offset: 0
	// Line 1875, Address: 0x1023888, Func Offset: 0x18
	// Line 1876, Address: 0x1023894, Func Offset: 0x24
	// Line 1877, Address: 0x10238a0, Func Offset: 0x30
	// Line 1878, Address: 0x10238a8, Func Offset: 0x38
	// Line 1879, Address: 0x10238ac, Func Offset: 0x3c
	// Line 1880, Address: 0x10238c4, Func Offset: 0x54
	// Line 1881, Address: 0x10238cc, Func Offset: 0x5c
	// Func End, Address: 0x10238ec, Func Offset: 0x7c
}

// 
// Start address: 0x10238f0
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1884, Address: 0x10238f0, Func Offset: 0
	// Line 1889, Address: 0x1023908, Func Offset: 0x18
	// Line 1890, Address: 0x1023914, Func Offset: 0x24
	// Line 1891, Address: 0x1023920, Func Offset: 0x30
	// Line 1892, Address: 0x1023928, Func Offset: 0x38
	// Line 1893, Address: 0x102392c, Func Offset: 0x3c
	// Line 1895, Address: 0x102393c, Func Offset: 0x4c
	// Func End, Address: 0x102395c, Func Offset: 0x6c
}

// 
// Start address: 0x1023960
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1898, Address: 0x1023960, Func Offset: 0
	// Line 1899, Address: 0x1023978, Func Offset: 0x18
	// Line 1900, Address: 0x1023998, Func Offset: 0x38
	// Func End, Address: 0x10239a8, Func Offset: 0x48
}

// 
// Start address: 0x10239b0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1905, Address: 0x10239b0, Func Offset: 0
	// Line 1909, Address: 0x10239d0, Func Offset: 0x20
	// Line 1912, Address: 0x10239ec, Func Offset: 0x3c
	// Line 1916, Address: 0x1023a14, Func Offset: 0x64
	// Line 1917, Address: 0x1023a20, Func Offset: 0x70
	// Line 1919, Address: 0x1023a48, Func Offset: 0x98
	// Func End, Address: 0x1023a58, Func Offset: 0xa8
}

// 
// Start address: 0x1023a60
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1925, Address: 0x1023a60, Func Offset: 0
	// Line 1928, Address: 0x1023a7c, Func Offset: 0x1c
	// Line 1929, Address: 0x1023a84, Func Offset: 0x24
	// Line 1932, Address: 0x1023a8c, Func Offset: 0x2c
	// Line 1934, Address: 0x1023ab0, Func Offset: 0x50
	// Line 1935, Address: 0x1023ad0, Func Offset: 0x70
	// Line 1936, Address: 0x1023ad8, Func Offset: 0x78
	// Line 1937, Address: 0x1023afc, Func Offset: 0x9c
	// Func End, Address: 0x1023b18, Func Offset: 0xb8
}

// 
// Start address: 0x1023b20
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1963, Address: 0x1023b20, Func Offset: 0
	// Line 1968, Address: 0x1023b48, Func Offset: 0x28
	// Line 1969, Address: 0x1023b58, Func Offset: 0x38
	// Line 1971, Address: 0x1023b74, Func Offset: 0x54
	// Line 1972, Address: 0x1023b98, Func Offset: 0x78
	// Line 1973, Address: 0x1023bc0, Func Offset: 0xa0
	// Line 1974, Address: 0x1023bcc, Func Offset: 0xac
	// Line 1975, Address: 0x1023bd4, Func Offset: 0xb4
	// Line 1978, Address: 0x1023bf0, Func Offset: 0xd0
	// Line 1982, Address: 0x1023c18, Func Offset: 0xf8
	// Line 1985, Address: 0x1023c20, Func Offset: 0x100
	// Line 1986, Address: 0x1023c24, Func Offset: 0x104
	// Line 1990, Address: 0x1023c40, Func Offset: 0x120
	// Line 1997, Address: 0x1023c68, Func Offset: 0x148
	// Func End, Address: 0x1023c84, Func Offset: 0x164
}

// 
// Start address: 0x1023c90
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
	// Line 2008, Address: 0x1023c90, Func Offset: 0
	// Line 2009, Address: 0x1023cb0, Func Offset: 0x20
	// Line 2014, Address: 0x1023cdc, Func Offset: 0x4c
	// Line 2020, Address: 0x1023d00, Func Offset: 0x70
	// Line 2021, Address: 0x1023d04, Func Offset: 0x74
	// Line 2023, Address: 0x1023d08, Func Offset: 0x78
	// Line 2024, Address: 0x1023d10, Func Offset: 0x80
	// Line 2027, Address: 0x1023d34, Func Offset: 0xa4
	// Line 2028, Address: 0x1023d38, Func Offset: 0xa8
	// Line 2031, Address: 0x1023d5c, Func Offset: 0xcc
	// Line 2032, Address: 0x1023d60, Func Offset: 0xd0
	// Line 2033, Address: 0x1023d68, Func Offset: 0xd8
	// Line 2034, Address: 0x1023d6c, Func Offset: 0xdc
	// Line 2036, Address: 0x1023d70, Func Offset: 0xe0
	// Line 2037, Address: 0x1023d78, Func Offset: 0xe8
	// Line 2038, Address: 0x1023d98, Func Offset: 0x108
	// Line 2042, Address: 0x1023da4, Func Offset: 0x114
	// Line 2043, Address: 0x1023db8, Func Offset: 0x128
	// Line 2046, Address: 0x1023dcc, Func Offset: 0x13c
	// Line 2047, Address: 0x1023dec, Func Offset: 0x15c
	// Func End, Address: 0x1023e14, Func Offset: 0x184
}

// 
// Start address: 0x1023e20
void mapset()
{
	// Line 2052, Address: 0x1023e20, Func Offset: 0
	// Func End, Address: 0x1023e28, Func Offset: 0x8
}

// 
// Start address: 0x1023e30
void divdevset()
{
	// Line 2056, Address: 0x1023e30, Func Offset: 0
	// Func End, Address: 0x1023e38, Func Offset: 0x8
}

// 
// Start address: 0x1023e40
void enecginit()
{
	// Line 2060, Address: 0x1023e40, Func Offset: 0
	// Func End, Address: 0x1023e48, Func Offset: 0x8
}

