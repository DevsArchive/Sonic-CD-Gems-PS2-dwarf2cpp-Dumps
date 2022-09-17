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
typedef _anon2* type_17[8];
typedef _anon1 type_18[128];
typedef short type_19[2];
typedef short type_20[2][1];
typedef _anon2* type_21[8];
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
// Start address: 0x102e0e0
_anon1* main_chk()
{
	// Line 146, Address: 0x102e0e0, Func Offset: 0
	// Line 147, Address: 0x102e0f4, Func Offset: 0x14
	// Line 149, Address: 0x102e104, Func Offset: 0x24
	// Line 151, Address: 0x102e10c, Func Offset: 0x2c
	// Func End, Address: 0x102e114, Func Offset: 0x34
}

// 
// Start address: 0x102e120
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x102e120, Func Offset: 0
	// Line 192, Address: 0x102e12c, Func Offset: 0xc
	// Line 193, Address: 0x102e140, Func Offset: 0x20
	// Line 194, Address: 0x102e154, Func Offset: 0x34
	// Line 196, Address: 0x102e15c, Func Offset: 0x3c
	// Line 197, Address: 0x102e164, Func Offset: 0x44
	// Line 198, Address: 0x102e170, Func Offset: 0x50
	// Line 199, Address: 0x102e174, Func Offset: 0x54
	// Line 200, Address: 0x102e188, Func Offset: 0x68
	// Line 201, Address: 0x102e18c, Func Offset: 0x6c
	// Line 202, Address: 0x102e1a0, Func Offset: 0x80
	// Line 203, Address: 0x102e1a4, Func Offset: 0x84
	// Line 204, Address: 0x102e1b8, Func Offset: 0x98
	// Line 205, Address: 0x102e1bc, Func Offset: 0x9c
	// Line 206, Address: 0x102e1d0, Func Offset: 0xb0
	// Line 207, Address: 0x102e1f0, Func Offset: 0xd0
	// Line 208, Address: 0x102e1f4, Func Offset: 0xd4
	// Line 209, Address: 0x102e200, Func Offset: 0xe0
	// Line 211, Address: 0x102e20c, Func Offset: 0xec
	// Line 212, Address: 0x102e218, Func Offset: 0xf8
	// Line 214, Address: 0x102e224, Func Offset: 0x104
	// Line 215, Address: 0x102e22c, Func Offset: 0x10c
	// Func End, Address: 0x102e240, Func Offset: 0x120
}

// 
// Start address: 0x102e240
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x102e240, Func Offset: 0
	// Line 267, Address: 0x102e254, Func Offset: 0x14
	// Line 268, Address: 0x102e264, Func Offset: 0x24
	// Line 269, Address: 0x102e26c, Func Offset: 0x2c
	// Line 271, Address: 0x102e27c, Func Offset: 0x3c
	// Line 272, Address: 0x102e294, Func Offset: 0x54
	// Line 273, Address: 0x102e2a4, Func Offset: 0x64
	// Line 274, Address: 0x102e2ac, Func Offset: 0x6c
	// Line 276, Address: 0x102e2b0, Func Offset: 0x70
	// Line 278, Address: 0x102e2b8, Func Offset: 0x78
	// Line 279, Address: 0x102e2d8, Func Offset: 0x98
	// Line 280, Address: 0x102e2fc, Func Offset: 0xbc
	// Line 282, Address: 0x102e304, Func Offset: 0xc4
	// Line 286, Address: 0x102e324, Func Offset: 0xe4
	// Line 287, Address: 0x102e338, Func Offset: 0xf8
	// Line 291, Address: 0x102e34c, Func Offset: 0x10c
	// Line 292, Address: 0x102e360, Func Offset: 0x120
	// Line 293, Address: 0x102e36c, Func Offset: 0x12c
	// Line 294, Address: 0x102e374, Func Offset: 0x134
	// Line 298, Address: 0x102e378, Func Offset: 0x138
	// Line 299, Address: 0x102e39c, Func Offset: 0x15c
	// Line 303, Address: 0x102e3ac, Func Offset: 0x16c
	// Line 305, Address: 0x102e3b4, Func Offset: 0x174
	// Line 306, Address: 0x102e3c8, Func Offset: 0x188
	// Line 307, Address: 0x102e3d4, Func Offset: 0x194
	// Line 308, Address: 0x102e3dc, Func Offset: 0x19c
	// Line 312, Address: 0x102e3e0, Func Offset: 0x1a0
	// Line 313, Address: 0x102e404, Func Offset: 0x1c4
	// Line 317, Address: 0x102e414, Func Offset: 0x1d4
	// Line 319, Address: 0x102e41c, Func Offset: 0x1dc
	// Line 322, Address: 0x102e42c, Func Offset: 0x1ec
	// Line 323, Address: 0x102e43c, Func Offset: 0x1fc
	// Line 324, Address: 0x102e44c, Func Offset: 0x20c
	// Line 325, Address: 0x102e45c, Func Offset: 0x21c
	// Line 326, Address: 0x102e46c, Func Offset: 0x22c
	// Func End, Address: 0x102e488, Func Offset: 0x248
}

// 
// Start address: 0x102e490
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x102e490, Func Offset: 0
	// Line 350, Address: 0x102e49c, Func Offset: 0xc
	// Line 351, Address: 0x102e4a4, Func Offset: 0x14
	// Line 353, Address: 0x102e4a8, Func Offset: 0x18
	// Line 354, Address: 0x102e4b4, Func Offset: 0x24
	// Line 355, Address: 0x102e4c0, Func Offset: 0x30
	// Line 356, Address: 0x102e4cc, Func Offset: 0x3c
	// Line 358, Address: 0x102e4d8, Func Offset: 0x48
	// Line 359, Address: 0x102e4f4, Func Offset: 0x64
	// Line 361, Address: 0x102e500, Func Offset: 0x70
	// Line 362, Address: 0x102e51c, Func Offset: 0x8c
	// Line 364, Address: 0x102e528, Func Offset: 0x98
	// Line 365, Address: 0x102e544, Func Offset: 0xb4
	// Line 366, Address: 0x102e568, Func Offset: 0xd8
	// Func End, Address: 0x102e574, Func Offset: 0xe4
}

// 
// Start address: 0x102e580
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
	// Line 382, Address: 0x102e580, Func Offset: 0
	// Line 394, Address: 0x102e59c, Func Offset: 0x1c
	// Line 399, Address: 0x102e5ac, Func Offset: 0x2c
	// Line 401, Address: 0x102e5d8, Func Offset: 0x58
	// Line 403, Address: 0x102e5e0, Func Offset: 0x60
	// Line 404, Address: 0x102e5e8, Func Offset: 0x68
	// Line 406, Address: 0x102e5f0, Func Offset: 0x70
	// Line 407, Address: 0x102e600, Func Offset: 0x80
	// Line 410, Address: 0x102e610, Func Offset: 0x90
	// Line 411, Address: 0x102e624, Func Offset: 0xa4
	// Line 413, Address: 0x102e634, Func Offset: 0xb4
	// Line 414, Address: 0x102e648, Func Offset: 0xc8
	// Line 416, Address: 0x102e658, Func Offset: 0xd8
	// Line 417, Address: 0x102e674, Func Offset: 0xf4
	// Line 419, Address: 0x102e684, Func Offset: 0x104
	// Line 422, Address: 0x102e698, Func Offset: 0x118
	// Line 424, Address: 0x102e6a8, Func Offset: 0x128
	// Line 426, Address: 0x102e6d0, Func Offset: 0x150
	// Line 427, Address: 0x102e708, Func Offset: 0x188
	// Line 429, Address: 0x102e71c, Func Offset: 0x19c
	// Line 431, Address: 0x102e728, Func Offset: 0x1a8
	// Line 433, Address: 0x102e734, Func Offset: 0x1b4
	// Line 434, Address: 0x102e754, Func Offset: 0x1d4
	// Line 436, Address: 0x102e760, Func Offset: 0x1e0
	// Line 437, Address: 0x102e774, Func Offset: 0x1f4
	// Line 439, Address: 0x102e784, Func Offset: 0x204
	// Line 440, Address: 0x102e7a4, Func Offset: 0x224
	// Line 442, Address: 0x102e7b0, Func Offset: 0x230
	// Line 443, Address: 0x102e7c4, Func Offset: 0x244
	// Line 445, Address: 0x102e7d4, Func Offset: 0x254
	// Line 446, Address: 0x102e7e0, Func Offset: 0x260
	// Line 447, Address: 0x102e810, Func Offset: 0x290
	// Line 448, Address: 0x102e840, Func Offset: 0x2c0
	// Line 449, Address: 0x102e85c, Func Offset: 0x2dc
	// Func End, Address: 0x102e880, Func Offset: 0x300
}

// 
// Start address: 0x102e880
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
	// Line 463, Address: 0x102e880, Func Offset: 0
	// Line 464, Address: 0x102e8a4, Func Offset: 0x24
	// Line 472, Address: 0x102e8d0, Func Offset: 0x50
	// Line 473, Address: 0x102e8f4, Func Offset: 0x74
	// Line 474, Address: 0x102e8f8, Func Offset: 0x78
	// Line 476, Address: 0x102e908, Func Offset: 0x88
	// Line 478, Address: 0x102e91c, Func Offset: 0x9c
	// Line 480, Address: 0x102e928, Func Offset: 0xa8
	// Line 481, Address: 0x102e93c, Func Offset: 0xbc
	// Line 482, Address: 0x102e990, Func Offset: 0x110
	// Line 484, Address: 0x102e9a8, Func Offset: 0x128
	// Line 485, Address: 0x102e9bc, Func Offset: 0x13c
	// Line 486, Address: 0x102e9c8, Func Offset: 0x148
	// Line 488, Address: 0x102e9d4, Func Offset: 0x154
	// Line 489, Address: 0x102e9e0, Func Offset: 0x160
	// Line 491, Address: 0x102e9ec, Func Offset: 0x16c
	// Line 492, Address: 0x102ea00, Func Offset: 0x180
	// Func End, Address: 0x102ea28, Func Offset: 0x1a8
}

// 
// Start address: 0x102ea30
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 513, Address: 0x102ea30, Func Offset: 0
	// Line 517, Address: 0x102ea4c, Func Offset: 0x1c
	// Line 518, Address: 0x102ea50, Func Offset: 0x20
	// Line 520, Address: 0x102ea70, Func Offset: 0x40
	// Line 521, Address: 0x102ea8c, Func Offset: 0x5c
	// Line 522, Address: 0x102ea98, Func Offset: 0x68
	// Line 524, Address: 0x102eaa4, Func Offset: 0x74
	// Line 525, Address: 0x102eaac, Func Offset: 0x7c
	// Line 526, Address: 0x102eabc, Func Offset: 0x8c
	// Line 527, Address: 0x102eae0, Func Offset: 0xb0
	// Line 528, Address: 0x102eb00, Func Offset: 0xd0
	// Func End, Address: 0x102eb14, Func Offset: 0xe4
}

// 
// Start address: 0x102eb20
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 634, Address: 0x102eb20, Func Offset: 0
	// Line 637, Address: 0x102eb30, Func Offset: 0x10
	// Line 638, Address: 0x102eb40, Func Offset: 0x20
	// Line 639, Address: 0x102eb4c, Func Offset: 0x2c
	// Line 641, Address: 0x102eb84, Func Offset: 0x64
	// Line 642, Address: 0x102eb8c, Func Offset: 0x6c
	// Line 643, Address: 0x102eba0, Func Offset: 0x80
	// Line 644, Address: 0x102ebc0, Func Offset: 0xa0
	// Line 645, Address: 0x102ebd4, Func Offset: 0xb4
	// Line 647, Address: 0x102ebdc, Func Offset: 0xbc
	// Line 652, Address: 0x102ebf0, Func Offset: 0xd0
	// Func End, Address: 0x102ec04, Func Offset: 0xe4
}

// 
// Start address: 0x102ec10
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 670, Address: 0x102ec10, Func Offset: 0
	// Line 674, Address: 0x102ec24, Func Offset: 0x14
	// Line 675, Address: 0x102ec2c, Func Offset: 0x1c
	// Line 676, Address: 0x102ec34, Func Offset: 0x24
	// Line 677, Address: 0x102ec3c, Func Offset: 0x2c
	// Line 678, Address: 0x102ec40, Func Offset: 0x30
	// Line 679, Address: 0x102ec64, Func Offset: 0x54
	// Line 680, Address: 0x102ec70, Func Offset: 0x60
	// Line 682, Address: 0x102ec8c, Func Offset: 0x7c
	// Line 683, Address: 0x102ec98, Func Offset: 0x88
	// Line 684, Address: 0x102ecac, Func Offset: 0x9c
	// Line 685, Address: 0x102ecb8, Func Offset: 0xa8
	// Line 686, Address: 0x102ecdc, Func Offset: 0xcc
	// Line 688, Address: 0x102ece4, Func Offset: 0xd4
	// Line 693, Address: 0x102ed0c, Func Offset: 0xfc
	// Func End, Address: 0x102ed20, Func Offset: 0x110
}

// 
// Start address: 0x102ed20
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 711, Address: 0x102ed20, Func Offset: 0
	// Line 715, Address: 0x102ed34, Func Offset: 0x14
	// Line 716, Address: 0x102ed3c, Func Offset: 0x1c
	// Line 717, Address: 0x102ed44, Func Offset: 0x24
	// Line 718, Address: 0x102ed4c, Func Offset: 0x2c
	// Line 719, Address: 0x102ed50, Func Offset: 0x30
	// Line 720, Address: 0x102ed74, Func Offset: 0x54
	// Line 721, Address: 0x102ed80, Func Offset: 0x60
	// Line 723, Address: 0x102ed9c, Func Offset: 0x7c
	// Line 724, Address: 0x102eda8, Func Offset: 0x88
	// Line 725, Address: 0x102edbc, Func Offset: 0x9c
	// Line 726, Address: 0x102edc8, Func Offset: 0xa8
	// Line 727, Address: 0x102edec, Func Offset: 0xcc
	// Line 729, Address: 0x102edf4, Func Offset: 0xd4
	// Line 734, Address: 0x102ee1c, Func Offset: 0xfc
	// Func End, Address: 0x102ee30, Func Offset: 0x110
}

// 
// Start address: 0x102ee30
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 752, Address: 0x102ee30, Func Offset: 0
	// Line 756, Address: 0x102ee44, Func Offset: 0x14
	// Line 757, Address: 0x102ee4c, Func Offset: 0x1c
	// Line 758, Address: 0x102ee54, Func Offset: 0x24
	// Line 759, Address: 0x102ee5c, Func Offset: 0x2c
	// Line 760, Address: 0x102ee60, Func Offset: 0x30
	// Line 761, Address: 0x102ee84, Func Offset: 0x54
	// Line 762, Address: 0x102ee90, Func Offset: 0x60
	// Line 764, Address: 0x102eeac, Func Offset: 0x7c
	// Line 765, Address: 0x102eeb8, Func Offset: 0x88
	// Line 766, Address: 0x102eecc, Func Offset: 0x9c
	// Line 767, Address: 0x102eed8, Func Offset: 0xa8
	// Line 768, Address: 0x102eefc, Func Offset: 0xcc
	// Line 770, Address: 0x102ef04, Func Offset: 0xd4
	// Line 775, Address: 0x102ef2c, Func Offset: 0xfc
	// Func End, Address: 0x102ef40, Func Offset: 0x110
}

// 
// Start address: 0x102ef40
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 790, Address: 0x102ef40, Func Offset: 0
	// Line 794, Address: 0x102ef50, Func Offset: 0x10
	// Line 796, Address: 0x102ef60, Func Offset: 0x20
	// Line 797, Address: 0x102ef68, Func Offset: 0x28
	// Line 798, Address: 0x102ef9c, Func Offset: 0x5c
	// Line 799, Address: 0x102efa4, Func Offset: 0x64
	// Line 800, Address: 0x102efb8, Func Offset: 0x78
	// Line 801, Address: 0x102efdc, Func Offset: 0x9c
	// Line 802, Address: 0x102eff0, Func Offset: 0xb0
	// Line 803, Address: 0x102eff8, Func Offset: 0xb8
	// Line 808, Address: 0x102f00c, Func Offset: 0xcc
	// Func End, Address: 0x102f024, Func Offset: 0xe4
}

// 
// Start address: 0x102f030
void scrh_move()
{
	short xwk;
	// Line 825, Address: 0x102f030, Func Offset: 0
	// Line 828, Address: 0x102f038, Func Offset: 0x8
	// Line 829, Address: 0x102f080, Func Offset: 0x50
	// Line 831, Address: 0x102f090, Func Offset: 0x60
	// Line 832, Address: 0x102f098, Func Offset: 0x68
	// Line 833, Address: 0x102f0a0, Func Offset: 0x70
	// Line 835, Address: 0x102f0b0, Func Offset: 0x80
	// Line 836, Address: 0x102f0c4, Func Offset: 0x94
	// Line 840, Address: 0x102f0d0, Func Offset: 0xa0
	// Line 841, Address: 0x102f0e4, Func Offset: 0xb4
	// Line 842, Address: 0x102f108, Func Offset: 0xd8
	// Line 844, Address: 0x102f118, Func Offset: 0xe8
	// Line 846, Address: 0x102f120, Func Offset: 0xf0
	// Line 847, Address: 0x102f134, Func Offset: 0x104
	// Line 851, Address: 0x102f140, Func Offset: 0x110
	// Line 852, Address: 0x102f154, Func Offset: 0x124
	// Line 853, Address: 0x102f178, Func Offset: 0x148
	// Line 858, Address: 0x102f188, Func Offset: 0x158
	// Line 859, Address: 0x102f1b8, Func Offset: 0x188
	// Line 860, Address: 0x102f1c0, Func Offset: 0x190
	// Func End, Address: 0x102f1d0, Func Offset: 0x1a0
}

// 
// Start address: 0x102f1d0
void scroll_v()
{
	short ywk;
	// Line 875, Address: 0x102f1d0, Func Offset: 0
	// Line 878, Address: 0x102f1dc, Func Offset: 0xc
	// Line 879, Address: 0x102f210, Func Offset: 0x40
	// Line 880, Address: 0x102f228, Func Offset: 0x58
	// Line 884, Address: 0x102f234, Func Offset: 0x64
	// Line 885, Address: 0x102f24c, Func Offset: 0x7c
	// Line 886, Address: 0x102f258, Func Offset: 0x88
	// Line 887, Address: 0x102f27c, Func Offset: 0xac
	// Line 888, Address: 0x102f290, Func Offset: 0xc0
	// Line 889, Address: 0x102f29c, Func Offset: 0xcc
	// Line 890, Address: 0x102f2a4, Func Offset: 0xd4
	// Line 891, Address: 0x102f2cc, Func Offset: 0xfc
	// Line 892, Address: 0x102f2f4, Func Offset: 0x124
	// Line 893, Address: 0x102f300, Func Offset: 0x130
	// Line 895, Address: 0x102f308, Func Offset: 0x138
	// Line 896, Address: 0x102f330, Func Offset: 0x160
	// Line 897, Address: 0x102f340, Func Offset: 0x170
	// Line 898, Address: 0x102f348, Func Offset: 0x178
	// Line 903, Address: 0x102f350, Func Offset: 0x180
	// Line 904, Address: 0x102f37c, Func Offset: 0x1ac
	// Line 905, Address: 0x102f388, Func Offset: 0x1b8
	// Line 906, Address: 0x102f390, Func Offset: 0x1c0
	// Line 907, Address: 0x102f3a0, Func Offset: 0x1d0
	// Line 908, Address: 0x102f3a8, Func Offset: 0x1d8
	// Line 913, Address: 0x102f3b0, Func Offset: 0x1e0
	// Line 914, Address: 0x102f3b8, Func Offset: 0x1e8
	// Func End, Address: 0x102f3cc, Func Offset: 0x1fc
}

// 
// Start address: 0x102f3d0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 928, Address: 0x102f3d0, Func Offset: 0
	// Line 931, Address: 0x102f3e0, Func Offset: 0x10
	// Line 932, Address: 0x102f3fc, Func Offset: 0x2c
	// Line 933, Address: 0x102f414, Func Offset: 0x44
	// Line 934, Address: 0x102f438, Func Offset: 0x68
	// Line 935, Address: 0x102f440, Func Offset: 0x70
	// Line 939, Address: 0x102f450, Func Offset: 0x80
	// Line 940, Address: 0x102f464, Func Offset: 0x94
	// Line 941, Address: 0x102f470, Func Offset: 0xa0
	// Line 944, Address: 0x102f478, Func Offset: 0xa8
	// Line 945, Address: 0x102f490, Func Offset: 0xc0
	// Line 946, Address: 0x102f49c, Func Offset: 0xcc
	// Line 947, Address: 0x102f4bc, Func Offset: 0xec
	// Line 948, Address: 0x102f4c8, Func Offset: 0xf8
	// Line 949, Address: 0x102f4d0, Func Offset: 0x100
	// Line 951, Address: 0x102f4dc, Func Offset: 0x10c
	// Line 953, Address: 0x102f4e4, Func Offset: 0x114
	// Line 954, Address: 0x102f4fc, Func Offset: 0x12c
	// Line 955, Address: 0x102f508, Func Offset: 0x138
	// Line 956, Address: 0x102f528, Func Offset: 0x158
	// Line 957, Address: 0x102f534, Func Offset: 0x164
	// Line 958, Address: 0x102f53c, Func Offset: 0x16c
	// Line 961, Address: 0x102f548, Func Offset: 0x178
	// Func End, Address: 0x102f55c, Func Offset: 0x18c
}

// 
// Start address: 0x102f560
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 975, Address: 0x102f560, Func Offset: 0
	// Line 978, Address: 0x102f570, Func Offset: 0x10
	// Line 980, Address: 0x102f57c, Func Offset: 0x1c
	// Line 981, Address: 0x102f594, Func Offset: 0x34
	// Line 982, Address: 0x102f5a0, Func Offset: 0x40
	// Line 983, Address: 0x102f5c0, Func Offset: 0x60
	// Line 984, Address: 0x102f5cc, Func Offset: 0x6c
	// Line 985, Address: 0x102f5d4, Func Offset: 0x74
	// Line 987, Address: 0x102f5e0, Func Offset: 0x80
	// Func End, Address: 0x102f5f4, Func Offset: 0x94
}

// 
// Start address: 0x102f600
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1002, Address: 0x102f600, Func Offset: 0
	// Line 1005, Address: 0x102f60c, Func Offset: 0xc
	// Line 1006, Address: 0x102f638, Func Offset: 0x38
	// Line 1007, Address: 0x102f64c, Func Offset: 0x4c
	// Line 1008, Address: 0x102f658, Func Offset: 0x58
	// Line 1009, Address: 0x102f660, Func Offset: 0x60
	// Line 1011, Address: 0x102f66c, Func Offset: 0x6c
	// Func End, Address: 0x102f67c, Func Offset: 0x7c
}

// 
// Start address: 0x102f680
void sv_move_sub2()
{
	// Line 1015, Address: 0x102f680, Func Offset: 0
	// Line 1016, Address: 0x102f688, Func Offset: 0x8
	// Line 1018, Address: 0x102f690, Func Offset: 0x10
	// Line 1019, Address: 0x102f69c, Func Offset: 0x1c
	// Func End, Address: 0x102f6ac, Func Offset: 0x2c
}

// 
// Start address: 0x102f6b0
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1033, Address: 0x102f6b0, Func Offset: 0
	// Line 1036, Address: 0x102f6bc, Func Offset: 0xc
	// Line 1037, Address: 0x102f6e0, Func Offset: 0x30
	// Line 1038, Address: 0x102f704, Func Offset: 0x54
	// Line 1039, Address: 0x102f710, Func Offset: 0x60
	// Func End, Address: 0x102f720, Func Offset: 0x70
}

// 
// Start address: 0x102f720
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1054, Address: 0x102f720, Func Offset: 0
	// Line 1055, Address: 0x102f72c, Func Offset: 0xc
	// Line 1056, Address: 0x102f754, Func Offset: 0x34
	// Line 1058, Address: 0x102f76c, Func Offset: 0x4c
	// Line 1059, Address: 0x102f778, Func Offset: 0x58
	// Line 1060, Address: 0x102f780, Func Offset: 0x60
	// Line 1061, Address: 0x102f78c, Func Offset: 0x6c
	// Line 1062, Address: 0x102f7a0, Func Offset: 0x80
	// Line 1063, Address: 0x102f7b4, Func Offset: 0x94
	// Line 1067, Address: 0x102f7c8, Func Offset: 0xa8
	// Line 1068, Address: 0x102f7d4, Func Offset: 0xb4
	// Func End, Address: 0x102f7e4, Func Offset: 0xc4
}

// 
// Start address: 0x102f7f0
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1082, Address: 0x102f7f0, Func Offset: 0
	// Line 1085, Address: 0x102f7fc, Func Offset: 0xc
	// Line 1086, Address: 0x102f81c, Func Offset: 0x2c
	// Line 1087, Address: 0x102f840, Func Offset: 0x50
	// Line 1088, Address: 0x102f84c, Func Offset: 0x5c
	// Func End, Address: 0x102f85c, Func Offset: 0x6c
}

// 
// Start address: 0x102f860
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1103, Address: 0x102f860, Func Offset: 0
	// Line 1104, Address: 0x102f86c, Func Offset: 0xc
	// Line 1105, Address: 0x102f894, Func Offset: 0x34
	// Line 1107, Address: 0x102f8ac, Func Offset: 0x4c
	// Line 1108, Address: 0x102f8b8, Func Offset: 0x58
	// Line 1109, Address: 0x102f8c0, Func Offset: 0x60
	// Line 1110, Address: 0x102f8cc, Func Offset: 0x6c
	// Line 1111, Address: 0x102f8e0, Func Offset: 0x80
	// Line 1112, Address: 0x102f8f4, Func Offset: 0x94
	// Line 1116, Address: 0x102f908, Func Offset: 0xa8
	// Line 1117, Address: 0x102f914, Func Offset: 0xb4
	// Func End, Address: 0x102f924, Func Offset: 0xc4
}

// 
// Start address: 0x102f930
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1134, Address: 0x102f930, Func Offset: 0
	// Line 1138, Address: 0x102f940, Func Offset: 0x10
	// Line 1139, Address: 0x102f950, Func Offset: 0x20
	// Line 1140, Address: 0x102f974, Func Offset: 0x44
	// Line 1141, Address: 0x102f988, Func Offset: 0x58
	// Line 1142, Address: 0x102f9a0, Func Offset: 0x70
	// Line 1144, Address: 0x102f9ac, Func Offset: 0x7c
	// Line 1146, Address: 0x102f9b8, Func Offset: 0x88
	// Line 1147, Address: 0x102f9f4, Func Offset: 0xc4
	// Line 1148, Address: 0x102f9fc, Func Offset: 0xcc
	// Line 1149, Address: 0x102fa10, Func Offset: 0xe0
	// Line 1150, Address: 0x102fa3c, Func Offset: 0x10c
	// Line 1151, Address: 0x102fa4c, Func Offset: 0x11c
	// Line 1152, Address: 0x102fa60, Func Offset: 0x130
	// Line 1153, Address: 0x102fa68, Func Offset: 0x138
	// Line 1158, Address: 0x102fa7c, Func Offset: 0x14c
	// Func End, Address: 0x102fa90, Func Offset: 0x160
}

// 
// Start address: 0x102fa90
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
	// Line 1176, Address: 0x102fa90, Func Offset: 0
	// Line 1185, Address: 0x102fab0, Func Offset: 0x20
	// Line 1186, Address: 0x102fab4, Func Offset: 0x24
	// Line 1187, Address: 0x102fac0, Func Offset: 0x30
	// Line 1188, Address: 0x102facc, Func Offset: 0x3c
	// Line 1189, Address: 0x102fad4, Func Offset: 0x44
	// Line 1190, Address: 0x102fadc, Func Offset: 0x4c
	// Line 1192, Address: 0x102faf0, Func Offset: 0x60
	// Line 1193, Address: 0x102faf4, Func Offset: 0x64
	// Line 1194, Address: 0x102fb00, Func Offset: 0x70
	// Line 1195, Address: 0x102fb0c, Func Offset: 0x7c
	// Line 1196, Address: 0x102fb14, Func Offset: 0x84
	// Line 1198, Address: 0x102fb1c, Func Offset: 0x8c
	// Line 1199, Address: 0x102fb28, Func Offset: 0x98
	// Line 1200, Address: 0x102fb3c, Func Offset: 0xac
	// Line 1202, Address: 0x102fb48, Func Offset: 0xb8
	// Line 1203, Address: 0x102fb50, Func Offset: 0xc0
	// Line 1205, Address: 0x102fb58, Func Offset: 0xc8
	// Line 1207, Address: 0x102fb78, Func Offset: 0xe8
	// Line 1213, Address: 0x102fba4, Func Offset: 0x114
	// Line 1214, Address: 0x102fbb8, Func Offset: 0x128
	// Line 1216, Address: 0x102fbc4, Func Offset: 0x134
	// Line 1217, Address: 0x102fbcc, Func Offset: 0x13c
	// Line 1218, Address: 0x102fbd4, Func Offset: 0x144
	// Line 1220, Address: 0x102fbf4, Func Offset: 0x164
	// Line 1226, Address: 0x102fc20, Func Offset: 0x190
	// Line 1227, Address: 0x102fc34, Func Offset: 0x1a4
	// Line 1229, Address: 0x102fc40, Func Offset: 0x1b0
	// Line 1230, Address: 0x102fc48, Func Offset: 0x1b8
	// Line 1231, Address: 0x102fc50, Func Offset: 0x1c0
	// Line 1233, Address: 0x102fc70, Func Offset: 0x1e0
	// Line 1239, Address: 0x102fc9c, Func Offset: 0x20c
	// Line 1240, Address: 0x102fcb0, Func Offset: 0x220
	// Line 1242, Address: 0x102fcbc, Func Offset: 0x22c
	// Line 1243, Address: 0x102fcc4, Func Offset: 0x234
	// Line 1244, Address: 0x102fccc, Func Offset: 0x23c
	// Line 1246, Address: 0x102fcec, Func Offset: 0x25c
	// Line 1255, Address: 0x102fd18, Func Offset: 0x288
	// Func End, Address: 0x102fd40, Func Offset: 0x2b0
}

// 
// Start address: 0x102fd40
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
	// Line 1272, Address: 0x102fd40, Func Offset: 0
	// Line 1283, Address: 0x102fd6c, Func Offset: 0x2c
	// Line 1285, Address: 0x102fd74, Func Offset: 0x34
	// Line 1286, Address: 0x102fd8c, Func Offset: 0x4c
	// Line 1287, Address: 0x102fda0, Func Offset: 0x60
	// Line 1289, Address: 0x102fda8, Func Offset: 0x68
	// Line 1291, Address: 0x102fdbc, Func Offset: 0x7c
	// Line 1292, Address: 0x102fdd4, Func Offset: 0x94
	// Line 1293, Address: 0x102fde8, Func Offset: 0xa8
	// Line 1294, Address: 0x102fdf0, Func Offset: 0xb0
	// Line 1296, Address: 0x102fdf8, Func Offset: 0xb8
	// Line 1297, Address: 0x102fe0c, Func Offset: 0xcc
	// Line 1302, Address: 0x102fe14, Func Offset: 0xd4
	// Line 1303, Address: 0x102fe64, Func Offset: 0x124
	// Line 1304, Address: 0x102fe6c, Func Offset: 0x12c
	// Line 1310, Address: 0x102fe8c, Func Offset: 0x14c
	// Line 1311, Address: 0x102feac, Func Offset: 0x16c
	// Line 1312, Address: 0x102fed0, Func Offset: 0x190
	// Line 1313, Address: 0x102fedc, Func Offset: 0x19c
	// Line 1314, Address: 0x102fee4, Func Offset: 0x1a4
	// Line 1316, Address: 0x102ff04, Func Offset: 0x1c4
	// Line 1320, Address: 0x102ff30, Func Offset: 0x1f0
	// Line 1323, Address: 0x102ff38, Func Offset: 0x1f8
	// Line 1324, Address: 0x102ff3c, Func Offset: 0x1fc
	// Line 1328, Address: 0x102ff5c, Func Offset: 0x21c
	// Line 1335, Address: 0x102ff88, Func Offset: 0x248
	// Line 1342, Address: 0x102ff9c, Func Offset: 0x25c
	// Line 1343, Address: 0x102ffa4, Func Offset: 0x264
	// Line 1344, Address: 0x102ffac, Func Offset: 0x26c
	// Line 1345, Address: 0x102ffc4, Func Offset: 0x284
	// Line 1346, Address: 0x102ffe4, Func Offset: 0x2a4
	// Line 1350, Address: 0x102ffec, Func Offset: 0x2ac
	// Line 1352, Address: 0x103001c, Func Offset: 0x2dc
	// Line 1353, Address: 0x1030028, Func Offset: 0x2e8
	// Line 1357, Address: 0x1030038, Func Offset: 0x2f8
	// Line 1358, Address: 0x1030044, Func Offset: 0x304
	// Line 1359, Address: 0x1030064, Func Offset: 0x324
	// Line 1360, Address: 0x103009c, Func Offset: 0x35c
	// Line 1361, Address: 0x10300bc, Func Offset: 0x37c
	// Line 1363, Address: 0x10300e0, Func Offset: 0x3a0
	// Line 1366, Address: 0x1030104, Func Offset: 0x3c4
	// Line 1368, Address: 0x1030124, Func Offset: 0x3e4
	// Line 1370, Address: 0x1030138, Func Offset: 0x3f8
	// Line 1371, Address: 0x1030144, Func Offset: 0x404
	// Line 1372, Address: 0x1030154, Func Offset: 0x414
	// Line 1374, Address: 0x103015c, Func Offset: 0x41c
	// Func End, Address: 0x1030184, Func Offset: 0x444
}

// 
// Start address: 0x1030190
void scrollwrtc()
{
	// Line 1380, Address: 0x1030190, Func Offset: 0
	// Func End, Address: 0x1030198, Func Offset: 0x8
}

// 
// Start address: 0x10301a0
void scrollwrtz()
{
	// Line 1385, Address: 0x10301a0, Func Offset: 0
	// Func End, Address: 0x10301a8, Func Offset: 0x8
}

// 
// Start address: 0x10301b0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1403, Address: 0x10301b0, Func Offset: 0
	// Line 1416, Address: 0x10301d8, Func Offset: 0x28
	// Line 1419, Address: 0x10301f8, Func Offset: 0x48
	// Line 1420, Address: 0x103020c, Func Offset: 0x5c
	// Line 1421, Address: 0x1030220, Func Offset: 0x70
	// Line 1422, Address: 0x1030234, Func Offset: 0x84
	// Line 1424, Address: 0x1030248, Func Offset: 0x98
	// Line 1425, Address: 0x1030254, Func Offset: 0xa4
	// Line 1426, Address: 0x1030268, Func Offset: 0xb8
	// Func End, Address: 0x1030278, Func Offset: 0xc8
}

// 
// Start address: 0x1030280
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1430, Address: 0x1030280, Func Offset: 0
	// Line 1434, Address: 0x10302a8, Func Offset: 0x28
	// Line 1437, Address: 0x10302c8, Func Offset: 0x48
	// Line 1438, Address: 0x10302dc, Func Offset: 0x5c
	// Line 1439, Address: 0x10302f0, Func Offset: 0x70
	// Line 1440, Address: 0x1030304, Func Offset: 0x84
	// Line 1442, Address: 0x1030318, Func Offset: 0x98
	// Line 1443, Address: 0x1030324, Func Offset: 0xa4
	// Line 1444, Address: 0x1030338, Func Offset: 0xb8
	// Func End, Address: 0x1030348, Func Offset: 0xc8
}

// 
// Start address: 0x1030350
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1464, Address: 0x1030350, Func Offset: 0
	// Line 1468, Address: 0x1030378, Func Offset: 0x28
	// Line 1471, Address: 0x1030398, Func Offset: 0x48
	// Line 1472, Address: 0x10303ac, Func Offset: 0x5c
	// Line 1473, Address: 0x10303bc, Func Offset: 0x6c
	// Line 1474, Address: 0x10303d0, Func Offset: 0x80
	// Line 1476, Address: 0x10303e0, Func Offset: 0x90
	// Line 1477, Address: 0x10303ec, Func Offset: 0x9c
	// Line 1478, Address: 0x1030400, Func Offset: 0xb0
	// Func End, Address: 0x1030410, Func Offset: 0xc0
}

// 
// Start address: 0x1030410
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
	// Line 1497, Address: 0x1030410, Func Offset: 0
	// Line 1503, Address: 0x1030444, Func Offset: 0x34
	// Line 1505, Address: 0x1030454, Func Offset: 0x44
	// Line 1506, Address: 0x1030458, Func Offset: 0x48
	// Line 1507, Address: 0x1030460, Func Offset: 0x50
	// Line 1509, Address: 0x1030470, Func Offset: 0x60
	// Line 1511, Address: 0x1030474, Func Offset: 0x64
	// Line 1512, Address: 0x103047c, Func Offset: 0x6c
	// Line 1515, Address: 0x1030484, Func Offset: 0x74
	// Line 1516, Address: 0x103048c, Func Offset: 0x7c
	// Line 1517, Address: 0x1030498, Func Offset: 0x88
	// Line 1519, Address: 0x10304a4, Func Offset: 0x94
	// Line 1520, Address: 0x10304ac, Func Offset: 0x9c
	// Line 1521, Address: 0x10304b4, Func Offset: 0xa4
	// Line 1522, Address: 0x10304bc, Func Offset: 0xac
	// Line 1524, Address: 0x10304c8, Func Offset: 0xb8
	// Line 1525, Address: 0x10304d0, Func Offset: 0xc0
	// Line 1526, Address: 0x10304d8, Func Offset: 0xc8
	// Line 1527, Address: 0x10304e0, Func Offset: 0xd0
	// Line 1529, Address: 0x10304ec, Func Offset: 0xdc
	// Line 1530, Address: 0x10304f4, Func Offset: 0xe4
	// Line 1531, Address: 0x10304fc, Func Offset: 0xec
	// Line 1534, Address: 0x1030504, Func Offset: 0xf4
	// Line 1535, Address: 0x103050c, Func Offset: 0xfc
	// Line 1538, Address: 0x1030514, Func Offset: 0x104
	// Line 1539, Address: 0x1030558, Func Offset: 0x148
	// Line 1540, Address: 0x103059c, Func Offset: 0x18c
	// Line 1541, Address: 0x10305e0, Func Offset: 0x1d0
	// Line 1543, Address: 0x1030624, Func Offset: 0x214
	// Func End, Address: 0x1030654, Func Offset: 0x244
}

// 
// Start address: 0x1030660
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1561, Address: 0x1030660, Func Offset: 0
	// Line 1562, Address: 0x1030680, Func Offset: 0x20
	// Line 1563, Address: 0x10306a0, Func Offset: 0x40
	// Func End, Address: 0x10306b0, Func Offset: 0x50
}

// 
// Start address: 0x10306b0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1565, Address: 0x10306b0, Func Offset: 0
	// Line 1566, Address: 0x10306d0, Func Offset: 0x20
	// Line 1567, Address: 0x10306d4, Func Offset: 0x24
	// Line 1568, Address: 0x10306f4, Func Offset: 0x44
	// Func End, Address: 0x1030704, Func Offset: 0x54
}

// 
// Start address: 0x1030710
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1575, Address: 0x1030710, Func Offset: 0
	// Line 1581, Address: 0x1030740, Func Offset: 0x30
	// Line 1582, Address: 0x1030750, Func Offset: 0x40
	// Line 1588, Address: 0x1030760, Func Offset: 0x50
	// Line 1589, Address: 0x103077c, Func Offset: 0x6c
	// Line 1590, Address: 0x1030780, Func Offset: 0x70
	// Line 1591, Address: 0x103079c, Func Offset: 0x8c
	// Line 1592, Address: 0x10307a0, Func Offset: 0x90
	// Line 1593, Address: 0x10307c0, Func Offset: 0xb0
	// Line 1594, Address: 0x10307c8, Func Offset: 0xb8
	// Line 1595, Address: 0x10307e8, Func Offset: 0xd8
	// Line 1596, Address: 0x10307f0, Func Offset: 0xe0
	// Line 1597, Address: 0x1030838, Func Offset: 0x128
	// Line 1599, Address: 0x1030844, Func Offset: 0x134
	// Line 1601, Address: 0x1030860, Func Offset: 0x150
	// Line 1606, Address: 0x1030868, Func Offset: 0x158
	// Line 1607, Address: 0x1030874, Func Offset: 0x164
	// Line 1610, Address: 0x1030880, Func Offset: 0x170
	// Line 1611, Address: 0x1030888, Func Offset: 0x178
	// Line 1612, Address: 0x10308a8, Func Offset: 0x198
	// Line 1613, Address: 0x10308c4, Func Offset: 0x1b4
	// Line 1614, Address: 0x10308cc, Func Offset: 0x1bc
	// Line 1615, Address: 0x10308ec, Func Offset: 0x1dc
	// Line 1617, Address: 0x1030908, Func Offset: 0x1f8
	// Line 1618, Address: 0x1030910, Func Offset: 0x200
	// Line 1619, Address: 0x1030918, Func Offset: 0x208
	// Line 1620, Address: 0x1030924, Func Offset: 0x214
	// Line 1621, Address: 0x103093c, Func Offset: 0x22c
	// Line 1623, Address: 0x103094c, Func Offset: 0x23c
	// Line 1626, Address: 0x1030958, Func Offset: 0x248
	// Line 1627, Address: 0x1030960, Func Offset: 0x250
	// Line 1628, Address: 0x1030964, Func Offset: 0x254
	// Func End, Address: 0x1030984, Func Offset: 0x274
}

// 
// Start address: 0x1030990
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1648, Address: 0x1030990, Func Offset: 0
	// Line 1656, Address: 0x10309b8, Func Offset: 0x28
	// Line 1657, Address: 0x1030a1c, Func Offset: 0x8c
	// Line 1663, Address: 0x1030a24, Func Offset: 0x94
	// Line 1664, Address: 0x1030a2c, Func Offset: 0x9c
	// Line 1665, Address: 0x1030a4c, Func Offset: 0xbc
	// Line 1666, Address: 0x1030a68, Func Offset: 0xd8
	// Line 1667, Address: 0x1030a70, Func Offset: 0xe0
	// Line 1668, Address: 0x1030a90, Func Offset: 0x100
	// Line 1671, Address: 0x1030aac, Func Offset: 0x11c
	// Line 1672, Address: 0x1030ab4, Func Offset: 0x124
	// Line 1673, Address: 0x1030abc, Func Offset: 0x12c
	// Line 1674, Address: 0x1030ac8, Func Offset: 0x138
	// Line 1675, Address: 0x1030ae0, Func Offset: 0x150
	// Line 1676, Address: 0x1030ae8, Func Offset: 0x158
	// Line 1681, Address: 0x1030af8, Func Offset: 0x168
	// Line 1684, Address: 0x1030b04, Func Offset: 0x174
	// Line 1685, Address: 0x1030b0c, Func Offset: 0x17c
	// Line 1686, Address: 0x1030b10, Func Offset: 0x180
	// Func End, Address: 0x1030b2c, Func Offset: 0x19c
}

// 
// Start address: 0x1030b30
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1700, Address: 0x1030b30, Func Offset: 0
	// Line 1707, Address: 0x1030b4c, Func Offset: 0x1c
	// Line 1708, Address: 0x1030b50, Func Offset: 0x20
	// Line 1709, Address: 0x1030b58, Func Offset: 0x28
	// Line 1710, Address: 0x1030b7c, Func Offset: 0x4c
	// Line 1711, Address: 0x1030b88, Func Offset: 0x58
	// Line 1712, Address: 0x1030ba0, Func Offset: 0x70
	// Line 1713, Address: 0x1030bb4, Func Offset: 0x84
	// Line 1718, Address: 0x1030bcc, Func Offset: 0x9c
	// Func End, Address: 0x1030be4, Func Offset: 0xb4
}

// 
// Start address: 0x1030bf0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1732, Address: 0x1030bf0, Func Offset: 0
	// Line 1733, Address: 0x1030bfc, Func Offset: 0xc
	// Line 1734, Address: 0x1030c28, Func Offset: 0x38
	// Line 1735, Address: 0x1030c74, Func Offset: 0x84
	// Line 1736, Address: 0x1030ca0, Func Offset: 0xb0
	// Line 1738, Address: 0x1030cec, Func Offset: 0xfc
	// Line 1744, Address: 0x1030cf8, Func Offset: 0x108
	// Line 1745, Address: 0x1030cfc, Func Offset: 0x10c
	// Func End, Address: 0x1030d08, Func Offset: 0x118
}

// 
// Start address: 0x1030d10
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1762, Address: 0x1030d10, Func Offset: 0
	// Line 1763, Address: 0x1030d2c, Func Offset: 0x1c
	// Line 1765, Address: 0x1030d48, Func Offset: 0x38
	// Func End, Address: 0x1030d58, Func Offset: 0x48
}

// 
// Start address: 0x1030d60
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1767, Address: 0x1030d60, Func Offset: 0
	// Line 1768, Address: 0x1030d7c, Func Offset: 0x1c
	// Line 1769, Address: 0x1030d80, Func Offset: 0x20
	// Line 1771, Address: 0x1030d9c, Func Offset: 0x3c
	// Func End, Address: 0x1030dac, Func Offset: 0x4c
}

// 
// Start address: 0x1030db0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1773, Address: 0x1030db0, Func Offset: 0
	// Line 1774, Address: 0x1030dc4, Func Offset: 0x14
	// Line 1776, Address: 0x1030de0, Func Offset: 0x30
	// Func End, Address: 0x1030df0, Func Offset: 0x40
}

// 
// Start address: 0x1030df0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1778, Address: 0x1030df0, Func Offset: 0
	// Line 1779, Address: 0x1030e0c, Func Offset: 0x1c
	// Line 1781, Address: 0x1030e28, Func Offset: 0x38
	// Func End, Address: 0x1030e38, Func Offset: 0x48
}

// 
// Start address: 0x1030e40
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1783, Address: 0x1030e40, Func Offset: 0
	// Line 1784, Address: 0x1030e58, Func Offset: 0x18
	// Line 1785, Address: 0x1030e68, Func Offset: 0x28
	// Line 1786, Address: 0x1030e78, Func Offset: 0x38
	// Line 1787, Address: 0x1030e84, Func Offset: 0x44
	// Line 1789, Address: 0x1030e90, Func Offset: 0x50
	// Line 1790, Address: 0x1030ebc, Func Offset: 0x7c
	// Line 1793, Address: 0x1030ee8, Func Offset: 0xa8
	// Func End, Address: 0x1030ef4, Func Offset: 0xb4
}

// 
// Start address: 0x1030f00
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1809, Address: 0x1030f00, Func Offset: 0
	// Line 1816, Address: 0x1030f18, Func Offset: 0x18
	// Line 1817, Address: 0x1030f24, Func Offset: 0x24
	// Line 1818, Address: 0x1030f30, Func Offset: 0x30
	// Line 1819, Address: 0x1030f38, Func Offset: 0x38
	// Line 1820, Address: 0x1030f3c, Func Offset: 0x3c
	// Line 1824, Address: 0x1030f54, Func Offset: 0x54
	// Line 1825, Address: 0x1030f5c, Func Offset: 0x5c
	// Line 1826, Address: 0x1030f60, Func Offset: 0x60
	// Line 1828, Address: 0x1030f70, Func Offset: 0x70
	// Func End, Address: 0x1030f90, Func Offset: 0x90
}

// 
// Start address: 0x1030f90
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1831, Address: 0x1030f90, Func Offset: 0
	// Line 1832, Address: 0x1030fa8, Func Offset: 0x18
	// Line 1833, Address: 0x1030fc8, Func Offset: 0x38
	// Func End, Address: 0x1030fd8, Func Offset: 0x48
}

// 
// Start address: 0x1030fe0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1838, Address: 0x1030fe0, Func Offset: 0
	// Line 1842, Address: 0x1031000, Func Offset: 0x20
	// Line 1845, Address: 0x103101c, Func Offset: 0x3c
	// Line 1849, Address: 0x1031044, Func Offset: 0x64
	// Line 1850, Address: 0x1031050, Func Offset: 0x70
	// Line 1852, Address: 0x1031078, Func Offset: 0x98
	// Func End, Address: 0x1031088, Func Offset: 0xa8
}

// 
// Start address: 0x1031090
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1858, Address: 0x1031090, Func Offset: 0
	// Line 1861, Address: 0x10310ac, Func Offset: 0x1c
	// Line 1862, Address: 0x10310b4, Func Offset: 0x24
	// Line 1865, Address: 0x10310bc, Func Offset: 0x2c
	// Line 1867, Address: 0x10310e0, Func Offset: 0x50
	// Line 1868, Address: 0x1031100, Func Offset: 0x70
	// Line 1869, Address: 0x1031108, Func Offset: 0x78
	// Line 1870, Address: 0x103112c, Func Offset: 0x9c
	// Func End, Address: 0x1031148, Func Offset: 0xb8
}

// 
// Start address: 0x1031150
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1896, Address: 0x1031150, Func Offset: 0
	// Line 1901, Address: 0x1031178, Func Offset: 0x28
	// Line 1902, Address: 0x1031188, Func Offset: 0x38
	// Line 1904, Address: 0x10311a4, Func Offset: 0x54
	// Line 1905, Address: 0x10311c8, Func Offset: 0x78
	// Line 1906, Address: 0x10311f0, Func Offset: 0xa0
	// Line 1907, Address: 0x10311fc, Func Offset: 0xac
	// Line 1908, Address: 0x1031204, Func Offset: 0xb4
	// Line 1911, Address: 0x1031220, Func Offset: 0xd0
	// Line 1915, Address: 0x1031248, Func Offset: 0xf8
	// Line 1918, Address: 0x1031250, Func Offset: 0x100
	// Line 1919, Address: 0x1031254, Func Offset: 0x104
	// Line 1923, Address: 0x1031270, Func Offset: 0x120
	// Line 1930, Address: 0x1031298, Func Offset: 0x148
	// Func End, Address: 0x10312b4, Func Offset: 0x164
}

// 
// Start address: 0x10312c0
void mapinit()
{
	// Line 1941, Address: 0x10312c0, Func Offset: 0
	// Line 1943, Address: 0x10312c8, Func Offset: 0x8
	// Line 1944, Address: 0x10312dc, Func Offset: 0x1c
	// Line 1947, Address: 0x10312f0, Func Offset: 0x30
	// Line 1948, Address: 0x1031310, Func Offset: 0x50
	// Func End, Address: 0x1031320, Func Offset: 0x60
}

// 
// Start address: 0x1031320
void mapset()
{
	// Line 1953, Address: 0x1031320, Func Offset: 0
	// Func End, Address: 0x1031328, Func Offset: 0x8
}

// 
// Start address: 0x1031330
void divdevset()
{
	// Line 1957, Address: 0x1031330, Func Offset: 0
	// Func End, Address: 0x1031338, Func Offset: 0x8
}

// 
// Start address: 0x1031340
void enecginit()
{
	// Line 1961, Address: 0x1031340, Func Offset: 0
	// Func End, Address: 0x1031348, Func Offset: 0x8
}

