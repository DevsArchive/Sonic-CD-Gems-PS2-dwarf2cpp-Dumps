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

typedef int(*type_7)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned char type_2[4];
typedef short type_3[2];
typedef short type_4[2][8];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef unsigned char type_12[49];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef short type_15[256];
typedef _anon2* type_16[8];
typedef char type_17[17];
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
void z81aline(short** ppHscw);
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
// Start address: 0x102b400
_anon1* main_chk()
{
	// Line 146, Address: 0x102b400, Func Offset: 0
	// Line 147, Address: 0x102b414, Func Offset: 0x14
	// Line 149, Address: 0x102b424, Func Offset: 0x24
	// Line 151, Address: 0x102b42c, Func Offset: 0x2c
	// Func End, Address: 0x102b434, Func Offset: 0x34
}

// 
// Start address: 0x102b440
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x102b440, Func Offset: 0
	// Line 192, Address: 0x102b44c, Func Offset: 0xc
	// Line 193, Address: 0x102b460, Func Offset: 0x20
	// Line 194, Address: 0x102b474, Func Offset: 0x34
	// Line 196, Address: 0x102b47c, Func Offset: 0x3c
	// Line 197, Address: 0x102b484, Func Offset: 0x44
	// Line 198, Address: 0x102b490, Func Offset: 0x50
	// Line 199, Address: 0x102b494, Func Offset: 0x54
	// Line 200, Address: 0x102b4a8, Func Offset: 0x68
	// Line 201, Address: 0x102b4ac, Func Offset: 0x6c
	// Line 202, Address: 0x102b4c0, Func Offset: 0x80
	// Line 203, Address: 0x102b4c4, Func Offset: 0x84
	// Line 204, Address: 0x102b4d8, Func Offset: 0x98
	// Line 205, Address: 0x102b4dc, Func Offset: 0x9c
	// Line 206, Address: 0x102b4f0, Func Offset: 0xb0
	// Line 207, Address: 0x102b510, Func Offset: 0xd0
	// Line 208, Address: 0x102b514, Func Offset: 0xd4
	// Line 209, Address: 0x102b520, Func Offset: 0xe0
	// Line 211, Address: 0x102b52c, Func Offset: 0xec
	// Line 212, Address: 0x102b538, Func Offset: 0xf8
	// Line 214, Address: 0x102b544, Func Offset: 0x104
	// Line 215, Address: 0x102b54c, Func Offset: 0x10c
	// Func End, Address: 0x102b560, Func Offset: 0x120
}

// 
// Start address: 0x102b560
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x102b560, Func Offset: 0
	// Line 267, Address: 0x102b574, Func Offset: 0x14
	// Line 268, Address: 0x102b584, Func Offset: 0x24
	// Line 269, Address: 0x102b58c, Func Offset: 0x2c
	// Line 271, Address: 0x102b59c, Func Offset: 0x3c
	// Line 272, Address: 0x102b5b4, Func Offset: 0x54
	// Line 273, Address: 0x102b5c4, Func Offset: 0x64
	// Line 274, Address: 0x102b5cc, Func Offset: 0x6c
	// Line 276, Address: 0x102b5d0, Func Offset: 0x70
	// Line 278, Address: 0x102b5d8, Func Offset: 0x78
	// Line 279, Address: 0x102b5f8, Func Offset: 0x98
	// Line 280, Address: 0x102b61c, Func Offset: 0xbc
	// Line 282, Address: 0x102b624, Func Offset: 0xc4
	// Line 286, Address: 0x102b644, Func Offset: 0xe4
	// Line 287, Address: 0x102b658, Func Offset: 0xf8
	// Line 291, Address: 0x102b66c, Func Offset: 0x10c
	// Line 292, Address: 0x102b680, Func Offset: 0x120
	// Line 293, Address: 0x102b68c, Func Offset: 0x12c
	// Line 294, Address: 0x102b694, Func Offset: 0x134
	// Line 298, Address: 0x102b698, Func Offset: 0x138
	// Line 299, Address: 0x102b6bc, Func Offset: 0x15c
	// Line 303, Address: 0x102b6cc, Func Offset: 0x16c
	// Line 305, Address: 0x102b6d4, Func Offset: 0x174
	// Line 306, Address: 0x102b6e8, Func Offset: 0x188
	// Line 307, Address: 0x102b6f4, Func Offset: 0x194
	// Line 308, Address: 0x102b6fc, Func Offset: 0x19c
	// Line 312, Address: 0x102b700, Func Offset: 0x1a0
	// Line 313, Address: 0x102b724, Func Offset: 0x1c4
	// Line 317, Address: 0x102b734, Func Offset: 0x1d4
	// Line 319, Address: 0x102b73c, Func Offset: 0x1dc
	// Line 322, Address: 0x102b74c, Func Offset: 0x1ec
	// Line 323, Address: 0x102b75c, Func Offset: 0x1fc
	// Line 324, Address: 0x102b76c, Func Offset: 0x20c
	// Line 325, Address: 0x102b77c, Func Offset: 0x21c
	// Line 326, Address: 0x102b78c, Func Offset: 0x22c
	// Func End, Address: 0x102b7a8, Func Offset: 0x248
}

// 
// Start address: 0x102b7b0
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x102b7b0, Func Offset: 0
	// Line 350, Address: 0x102b7bc, Func Offset: 0xc
	// Line 351, Address: 0x102b7c4, Func Offset: 0x14
	// Line 353, Address: 0x102b7c8, Func Offset: 0x18
	// Line 354, Address: 0x102b7d4, Func Offset: 0x24
	// Line 355, Address: 0x102b7e0, Func Offset: 0x30
	// Line 356, Address: 0x102b7ec, Func Offset: 0x3c
	// Line 358, Address: 0x102b7f8, Func Offset: 0x48
	// Line 359, Address: 0x102b814, Func Offset: 0x64
	// Line 361, Address: 0x102b820, Func Offset: 0x70
	// Line 362, Address: 0x102b83c, Func Offset: 0x8c
	// Line 364, Address: 0x102b848, Func Offset: 0x98
	// Line 365, Address: 0x102b864, Func Offset: 0xb4
	// Line 366, Address: 0x102b888, Func Offset: 0xd8
	// Func End, Address: 0x102b894, Func Offset: 0xe4
}

// 
// Start address: 0x102b8a0
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
	// Line 382, Address: 0x102b8a0, Func Offset: 0
	// Line 394, Address: 0x102b8bc, Func Offset: 0x1c
	// Line 399, Address: 0x102b8cc, Func Offset: 0x2c
	// Line 401, Address: 0x102b8f8, Func Offset: 0x58
	// Line 403, Address: 0x102b900, Func Offset: 0x60
	// Line 404, Address: 0x102b908, Func Offset: 0x68
	// Line 406, Address: 0x102b910, Func Offset: 0x70
	// Line 407, Address: 0x102b920, Func Offset: 0x80
	// Line 410, Address: 0x102b930, Func Offset: 0x90
	// Line 411, Address: 0x102b944, Func Offset: 0xa4
	// Line 413, Address: 0x102b954, Func Offset: 0xb4
	// Line 414, Address: 0x102b968, Func Offset: 0xc8
	// Line 416, Address: 0x102b978, Func Offset: 0xd8
	// Line 417, Address: 0x102b994, Func Offset: 0xf4
	// Line 419, Address: 0x102b9a4, Func Offset: 0x104
	// Line 422, Address: 0x102b9b8, Func Offset: 0x118
	// Line 424, Address: 0x102b9c8, Func Offset: 0x128
	// Line 426, Address: 0x102b9f0, Func Offset: 0x150
	// Line 427, Address: 0x102ba28, Func Offset: 0x188
	// Line 429, Address: 0x102ba3c, Func Offset: 0x19c
	// Line 431, Address: 0x102ba48, Func Offset: 0x1a8
	// Line 433, Address: 0x102ba54, Func Offset: 0x1b4
	// Line 434, Address: 0x102ba74, Func Offset: 0x1d4
	// Line 436, Address: 0x102ba80, Func Offset: 0x1e0
	// Line 437, Address: 0x102ba94, Func Offset: 0x1f4
	// Line 439, Address: 0x102baa4, Func Offset: 0x204
	// Line 440, Address: 0x102bac4, Func Offset: 0x224
	// Line 442, Address: 0x102bad0, Func Offset: 0x230
	// Line 443, Address: 0x102bae4, Func Offset: 0x244
	// Line 445, Address: 0x102baf4, Func Offset: 0x254
	// Line 446, Address: 0x102bb14, Func Offset: 0x274
	// Line 448, Address: 0x102bb20, Func Offset: 0x280
	// Line 449, Address: 0x102bb34, Func Offset: 0x294
	// Line 451, Address: 0x102bb44, Func Offset: 0x2a4
	// Line 452, Address: 0x102bb64, Func Offset: 0x2c4
	// Line 454, Address: 0x102bb70, Func Offset: 0x2d0
	// Line 455, Address: 0x102bb84, Func Offset: 0x2e4
	// Line 457, Address: 0x102bb94, Func Offset: 0x2f4
	// Line 458, Address: 0x102bbb4, Func Offset: 0x314
	// Line 460, Address: 0x102bbc0, Func Offset: 0x320
	// Line 461, Address: 0x102bbd4, Func Offset: 0x334
	// Line 463, Address: 0x102bbe4, Func Offset: 0x344
	// Line 464, Address: 0x102bc04, Func Offset: 0x364
	// Line 466, Address: 0x102bc10, Func Offset: 0x370
	// Line 467, Address: 0x102bc24, Func Offset: 0x384
	// Line 469, Address: 0x102bc34, Func Offset: 0x394
	// Line 470, Address: 0x102bc54, Func Offset: 0x3b4
	// Line 472, Address: 0x102bc60, Func Offset: 0x3c0
	// Line 473, Address: 0x102bc74, Func Offset: 0x3d4
	// Line 475, Address: 0x102bc84, Func Offset: 0x3e4
	// Line 476, Address: 0x102bc90, Func Offset: 0x3f0
	// Line 477, Address: 0x102bcc0, Func Offset: 0x420
	// Line 478, Address: 0x102bcf0, Func Offset: 0x450
	// Line 479, Address: 0x102bd0c, Func Offset: 0x46c
	// Func End, Address: 0x102bd30, Func Offset: 0x490
}

// 
// Start address: 0x102bd30
void z81aline(short** ppHscw)
{
	char z81ascrtbl[17];
	int i;
	int j;
	_anon2 radwk;
	int lXwk;
	// Line 493, Address: 0x102bd30, Func Offset: 0
	// Line 494, Address: 0x102bd44, Func Offset: 0x14
	// Line 504, Address: 0x102bd70, Func Offset: 0x40
	// Line 505, Address: 0x102bd94, Func Offset: 0x64
	// Line 506, Address: 0x102bda0, Func Offset: 0x70
	// Line 507, Address: 0x102bda4, Func Offset: 0x74
	// Line 508, Address: 0x102bdbc, Func Offset: 0x8c
	// Line 511, Address: 0x102bdc0, Func Offset: 0x90
	// Line 513, Address: 0x102bdd4, Func Offset: 0xa4
	// Line 515, Address: 0x102bde0, Func Offset: 0xb0
	// Line 516, Address: 0x102bdf8, Func Offset: 0xc8
	// Line 517, Address: 0x102be0c, Func Offset: 0xdc
	// Line 518, Address: 0x102be30, Func Offset: 0x100
	// Line 520, Address: 0x102be3c, Func Offset: 0x10c
	// Line 521, Address: 0x102be60, Func Offset: 0x130
	// Line 522, Address: 0x102be6c, Func Offset: 0x13c
	// Line 523, Address: 0x102be90, Func Offset: 0x160
	// Line 525, Address: 0x102be9c, Func Offset: 0x16c
	// Line 526, Address: 0x102beb0, Func Offset: 0x180
	// Func End, Address: 0x102bec8, Func Offset: 0x198
}

// 
// Start address: 0x102bed0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 547, Address: 0x102bed0, Func Offset: 0
	// Line 551, Address: 0x102beec, Func Offset: 0x1c
	// Line 552, Address: 0x102bef0, Func Offset: 0x20
	// Line 554, Address: 0x102bf10, Func Offset: 0x40
	// Line 555, Address: 0x102bf2c, Func Offset: 0x5c
	// Line 556, Address: 0x102bf38, Func Offset: 0x68
	// Line 558, Address: 0x102bf44, Func Offset: 0x74
	// Line 559, Address: 0x102bf4c, Func Offset: 0x7c
	// Line 560, Address: 0x102bf5c, Func Offset: 0x8c
	// Line 561, Address: 0x102bf80, Func Offset: 0xb0
	// Line 562, Address: 0x102bfa0, Func Offset: 0xd0
	// Func End, Address: 0x102bfb4, Func Offset: 0xe4
}

// 
// Start address: 0x102bfc0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 668, Address: 0x102bfc0, Func Offset: 0
	// Line 671, Address: 0x102bfd0, Func Offset: 0x10
	// Line 672, Address: 0x102bfe0, Func Offset: 0x20
	// Line 673, Address: 0x102bfec, Func Offset: 0x2c
	// Line 675, Address: 0x102c024, Func Offset: 0x64
	// Line 676, Address: 0x102c02c, Func Offset: 0x6c
	// Line 677, Address: 0x102c040, Func Offset: 0x80
	// Line 678, Address: 0x102c060, Func Offset: 0xa0
	// Line 679, Address: 0x102c074, Func Offset: 0xb4
	// Line 681, Address: 0x102c07c, Func Offset: 0xbc
	// Line 686, Address: 0x102c090, Func Offset: 0xd0
	// Func End, Address: 0x102c0a4, Func Offset: 0xe4
}

// 
// Start address: 0x102c0b0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 704, Address: 0x102c0b0, Func Offset: 0
	// Line 708, Address: 0x102c0c4, Func Offset: 0x14
	// Line 709, Address: 0x102c0cc, Func Offset: 0x1c
	// Line 710, Address: 0x102c0d4, Func Offset: 0x24
	// Line 711, Address: 0x102c0dc, Func Offset: 0x2c
	// Line 712, Address: 0x102c0e0, Func Offset: 0x30
	// Line 713, Address: 0x102c104, Func Offset: 0x54
	// Line 714, Address: 0x102c110, Func Offset: 0x60
	// Line 716, Address: 0x102c12c, Func Offset: 0x7c
	// Line 717, Address: 0x102c138, Func Offset: 0x88
	// Line 718, Address: 0x102c14c, Func Offset: 0x9c
	// Line 719, Address: 0x102c158, Func Offset: 0xa8
	// Line 720, Address: 0x102c17c, Func Offset: 0xcc
	// Line 722, Address: 0x102c184, Func Offset: 0xd4
	// Line 727, Address: 0x102c1ac, Func Offset: 0xfc
	// Func End, Address: 0x102c1c0, Func Offset: 0x110
}

// 
// Start address: 0x102c1c0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 745, Address: 0x102c1c0, Func Offset: 0
	// Line 749, Address: 0x102c1d4, Func Offset: 0x14
	// Line 750, Address: 0x102c1dc, Func Offset: 0x1c
	// Line 751, Address: 0x102c1e4, Func Offset: 0x24
	// Line 752, Address: 0x102c1ec, Func Offset: 0x2c
	// Line 753, Address: 0x102c1f0, Func Offset: 0x30
	// Line 754, Address: 0x102c214, Func Offset: 0x54
	// Line 755, Address: 0x102c220, Func Offset: 0x60
	// Line 757, Address: 0x102c23c, Func Offset: 0x7c
	// Line 758, Address: 0x102c248, Func Offset: 0x88
	// Line 759, Address: 0x102c25c, Func Offset: 0x9c
	// Line 760, Address: 0x102c268, Func Offset: 0xa8
	// Line 761, Address: 0x102c28c, Func Offset: 0xcc
	// Line 763, Address: 0x102c294, Func Offset: 0xd4
	// Line 768, Address: 0x102c2bc, Func Offset: 0xfc
	// Func End, Address: 0x102c2d0, Func Offset: 0x110
}

// 
// Start address: 0x102c2d0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 786, Address: 0x102c2d0, Func Offset: 0
	// Line 790, Address: 0x102c2e4, Func Offset: 0x14
	// Line 791, Address: 0x102c2ec, Func Offset: 0x1c
	// Line 792, Address: 0x102c2f4, Func Offset: 0x24
	// Line 793, Address: 0x102c2fc, Func Offset: 0x2c
	// Line 794, Address: 0x102c300, Func Offset: 0x30
	// Line 795, Address: 0x102c324, Func Offset: 0x54
	// Line 796, Address: 0x102c330, Func Offset: 0x60
	// Line 798, Address: 0x102c34c, Func Offset: 0x7c
	// Line 799, Address: 0x102c358, Func Offset: 0x88
	// Line 800, Address: 0x102c36c, Func Offset: 0x9c
	// Line 801, Address: 0x102c378, Func Offset: 0xa8
	// Line 802, Address: 0x102c39c, Func Offset: 0xcc
	// Line 804, Address: 0x102c3a4, Func Offset: 0xd4
	// Line 809, Address: 0x102c3cc, Func Offset: 0xfc
	// Func End, Address: 0x102c3e0, Func Offset: 0x110
}

// 
// Start address: 0x102c3e0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 824, Address: 0x102c3e0, Func Offset: 0
	// Line 828, Address: 0x102c3f0, Func Offset: 0x10
	// Line 830, Address: 0x102c400, Func Offset: 0x20
	// Line 831, Address: 0x102c408, Func Offset: 0x28
	// Line 832, Address: 0x102c43c, Func Offset: 0x5c
	// Line 833, Address: 0x102c444, Func Offset: 0x64
	// Line 834, Address: 0x102c458, Func Offset: 0x78
	// Line 835, Address: 0x102c47c, Func Offset: 0x9c
	// Line 836, Address: 0x102c490, Func Offset: 0xb0
	// Line 837, Address: 0x102c498, Func Offset: 0xb8
	// Line 842, Address: 0x102c4ac, Func Offset: 0xcc
	// Func End, Address: 0x102c4c4, Func Offset: 0xe4
}

// 
// Start address: 0x102c4d0
void scrh_move()
{
	short xwk;
	// Line 859, Address: 0x102c4d0, Func Offset: 0
	// Line 862, Address: 0x102c4d8, Func Offset: 0x8
	// Line 863, Address: 0x102c520, Func Offset: 0x50
	// Line 865, Address: 0x102c530, Func Offset: 0x60
	// Line 866, Address: 0x102c538, Func Offset: 0x68
	// Line 867, Address: 0x102c540, Func Offset: 0x70
	// Line 869, Address: 0x102c550, Func Offset: 0x80
	// Line 870, Address: 0x102c564, Func Offset: 0x94
	// Line 874, Address: 0x102c570, Func Offset: 0xa0
	// Line 875, Address: 0x102c584, Func Offset: 0xb4
	// Line 876, Address: 0x102c5a8, Func Offset: 0xd8
	// Line 878, Address: 0x102c5b8, Func Offset: 0xe8
	// Line 880, Address: 0x102c5c0, Func Offset: 0xf0
	// Line 881, Address: 0x102c5d4, Func Offset: 0x104
	// Line 885, Address: 0x102c5e0, Func Offset: 0x110
	// Line 886, Address: 0x102c5f4, Func Offset: 0x124
	// Line 887, Address: 0x102c618, Func Offset: 0x148
	// Line 892, Address: 0x102c628, Func Offset: 0x158
	// Line 893, Address: 0x102c658, Func Offset: 0x188
	// Line 894, Address: 0x102c660, Func Offset: 0x190
	// Func End, Address: 0x102c670, Func Offset: 0x1a0
}

// 
// Start address: 0x102c670
void scroll_v()
{
	short ywk;
	// Line 909, Address: 0x102c670, Func Offset: 0
	// Line 912, Address: 0x102c67c, Func Offset: 0xc
	// Line 913, Address: 0x102c6b0, Func Offset: 0x40
	// Line 914, Address: 0x102c6c8, Func Offset: 0x58
	// Line 918, Address: 0x102c6d4, Func Offset: 0x64
	// Line 919, Address: 0x102c6ec, Func Offset: 0x7c
	// Line 920, Address: 0x102c6f8, Func Offset: 0x88
	// Line 921, Address: 0x102c71c, Func Offset: 0xac
	// Line 922, Address: 0x102c730, Func Offset: 0xc0
	// Line 923, Address: 0x102c73c, Func Offset: 0xcc
	// Line 924, Address: 0x102c744, Func Offset: 0xd4
	// Line 925, Address: 0x102c76c, Func Offset: 0xfc
	// Line 926, Address: 0x102c794, Func Offset: 0x124
	// Line 927, Address: 0x102c7a0, Func Offset: 0x130
	// Line 929, Address: 0x102c7a8, Func Offset: 0x138
	// Line 930, Address: 0x102c7d0, Func Offset: 0x160
	// Line 931, Address: 0x102c7e0, Func Offset: 0x170
	// Line 932, Address: 0x102c7e8, Func Offset: 0x178
	// Line 937, Address: 0x102c7f0, Func Offset: 0x180
	// Line 938, Address: 0x102c81c, Func Offset: 0x1ac
	// Line 939, Address: 0x102c828, Func Offset: 0x1b8
	// Line 940, Address: 0x102c830, Func Offset: 0x1c0
	// Line 941, Address: 0x102c840, Func Offset: 0x1d0
	// Line 942, Address: 0x102c848, Func Offset: 0x1d8
	// Line 947, Address: 0x102c850, Func Offset: 0x1e0
	// Line 948, Address: 0x102c858, Func Offset: 0x1e8
	// Func End, Address: 0x102c86c, Func Offset: 0x1fc
}

// 
// Start address: 0x102c870
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 962, Address: 0x102c870, Func Offset: 0
	// Line 965, Address: 0x102c880, Func Offset: 0x10
	// Line 966, Address: 0x102c89c, Func Offset: 0x2c
	// Line 967, Address: 0x102c8b4, Func Offset: 0x44
	// Line 968, Address: 0x102c8d8, Func Offset: 0x68
	// Line 969, Address: 0x102c8e0, Func Offset: 0x70
	// Line 973, Address: 0x102c8f0, Func Offset: 0x80
	// Line 974, Address: 0x102c904, Func Offset: 0x94
	// Line 975, Address: 0x102c910, Func Offset: 0xa0
	// Line 978, Address: 0x102c918, Func Offset: 0xa8
	// Line 979, Address: 0x102c930, Func Offset: 0xc0
	// Line 980, Address: 0x102c93c, Func Offset: 0xcc
	// Line 981, Address: 0x102c95c, Func Offset: 0xec
	// Line 982, Address: 0x102c968, Func Offset: 0xf8
	// Line 983, Address: 0x102c970, Func Offset: 0x100
	// Line 985, Address: 0x102c97c, Func Offset: 0x10c
	// Line 987, Address: 0x102c984, Func Offset: 0x114
	// Line 988, Address: 0x102c99c, Func Offset: 0x12c
	// Line 989, Address: 0x102c9a8, Func Offset: 0x138
	// Line 990, Address: 0x102c9c8, Func Offset: 0x158
	// Line 991, Address: 0x102c9d4, Func Offset: 0x164
	// Line 992, Address: 0x102c9dc, Func Offset: 0x16c
	// Line 995, Address: 0x102c9e8, Func Offset: 0x178
	// Func End, Address: 0x102c9fc, Func Offset: 0x18c
}

// 
// Start address: 0x102ca00
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1009, Address: 0x102ca00, Func Offset: 0
	// Line 1012, Address: 0x102ca10, Func Offset: 0x10
	// Line 1014, Address: 0x102ca1c, Func Offset: 0x1c
	// Line 1015, Address: 0x102ca34, Func Offset: 0x34
	// Line 1016, Address: 0x102ca40, Func Offset: 0x40
	// Line 1017, Address: 0x102ca60, Func Offset: 0x60
	// Line 1018, Address: 0x102ca6c, Func Offset: 0x6c
	// Line 1019, Address: 0x102ca74, Func Offset: 0x74
	// Line 1021, Address: 0x102ca80, Func Offset: 0x80
	// Func End, Address: 0x102ca94, Func Offset: 0x94
}

// 
// Start address: 0x102caa0
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1036, Address: 0x102caa0, Func Offset: 0
	// Line 1039, Address: 0x102caac, Func Offset: 0xc
	// Line 1040, Address: 0x102cad8, Func Offset: 0x38
	// Line 1041, Address: 0x102caec, Func Offset: 0x4c
	// Line 1042, Address: 0x102caf8, Func Offset: 0x58
	// Line 1043, Address: 0x102cb00, Func Offset: 0x60
	// Line 1045, Address: 0x102cb0c, Func Offset: 0x6c
	// Func End, Address: 0x102cb1c, Func Offset: 0x7c
}

// 
// Start address: 0x102cb20
void sv_move_sub2()
{
	// Line 1049, Address: 0x102cb20, Func Offset: 0
	// Line 1050, Address: 0x102cb28, Func Offset: 0x8
	// Line 1052, Address: 0x102cb30, Func Offset: 0x10
	// Line 1053, Address: 0x102cb3c, Func Offset: 0x1c
	// Func End, Address: 0x102cb4c, Func Offset: 0x2c
}

// 
// Start address: 0x102cb50
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1067, Address: 0x102cb50, Func Offset: 0
	// Line 1070, Address: 0x102cb5c, Func Offset: 0xc
	// Line 1071, Address: 0x102cb80, Func Offset: 0x30
	// Line 1072, Address: 0x102cba4, Func Offset: 0x54
	// Line 1073, Address: 0x102cbb0, Func Offset: 0x60
	// Func End, Address: 0x102cbc0, Func Offset: 0x70
}

// 
// Start address: 0x102cbc0
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1088, Address: 0x102cbc0, Func Offset: 0
	// Line 1089, Address: 0x102cbcc, Func Offset: 0xc
	// Line 1090, Address: 0x102cbf4, Func Offset: 0x34
	// Line 1092, Address: 0x102cc0c, Func Offset: 0x4c
	// Line 1093, Address: 0x102cc18, Func Offset: 0x58
	// Line 1094, Address: 0x102cc20, Func Offset: 0x60
	// Line 1095, Address: 0x102cc2c, Func Offset: 0x6c
	// Line 1096, Address: 0x102cc40, Func Offset: 0x80
	// Line 1097, Address: 0x102cc54, Func Offset: 0x94
	// Line 1101, Address: 0x102cc68, Func Offset: 0xa8
	// Line 1102, Address: 0x102cc74, Func Offset: 0xb4
	// Func End, Address: 0x102cc84, Func Offset: 0xc4
}

// 
// Start address: 0x102cc90
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1116, Address: 0x102cc90, Func Offset: 0
	// Line 1119, Address: 0x102cc9c, Func Offset: 0xc
	// Line 1120, Address: 0x102ccbc, Func Offset: 0x2c
	// Line 1121, Address: 0x102cce0, Func Offset: 0x50
	// Line 1122, Address: 0x102ccec, Func Offset: 0x5c
	// Func End, Address: 0x102ccfc, Func Offset: 0x6c
}

// 
// Start address: 0x102cd00
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1137, Address: 0x102cd00, Func Offset: 0
	// Line 1138, Address: 0x102cd0c, Func Offset: 0xc
	// Line 1139, Address: 0x102cd34, Func Offset: 0x34
	// Line 1141, Address: 0x102cd4c, Func Offset: 0x4c
	// Line 1142, Address: 0x102cd58, Func Offset: 0x58
	// Line 1143, Address: 0x102cd60, Func Offset: 0x60
	// Line 1144, Address: 0x102cd6c, Func Offset: 0x6c
	// Line 1145, Address: 0x102cd80, Func Offset: 0x80
	// Line 1146, Address: 0x102cd94, Func Offset: 0x94
	// Line 1150, Address: 0x102cda8, Func Offset: 0xa8
	// Line 1151, Address: 0x102cdb4, Func Offset: 0xb4
	// Func End, Address: 0x102cdc4, Func Offset: 0xc4
}

// 
// Start address: 0x102cdd0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1168, Address: 0x102cdd0, Func Offset: 0
	// Line 1172, Address: 0x102cde0, Func Offset: 0x10
	// Line 1173, Address: 0x102cdf0, Func Offset: 0x20
	// Line 1174, Address: 0x102ce14, Func Offset: 0x44
	// Line 1175, Address: 0x102ce28, Func Offset: 0x58
	// Line 1176, Address: 0x102ce40, Func Offset: 0x70
	// Line 1178, Address: 0x102ce4c, Func Offset: 0x7c
	// Line 1180, Address: 0x102ce58, Func Offset: 0x88
	// Line 1181, Address: 0x102ce94, Func Offset: 0xc4
	// Line 1182, Address: 0x102ce9c, Func Offset: 0xcc
	// Line 1183, Address: 0x102ceb0, Func Offset: 0xe0
	// Line 1184, Address: 0x102cedc, Func Offset: 0x10c
	// Line 1185, Address: 0x102ceec, Func Offset: 0x11c
	// Line 1186, Address: 0x102cf00, Func Offset: 0x130
	// Line 1187, Address: 0x102cf08, Func Offset: 0x138
	// Line 1192, Address: 0x102cf1c, Func Offset: 0x14c
	// Func End, Address: 0x102cf30, Func Offset: 0x160
}

// 
// Start address: 0x102cf30
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
	// Line 1210, Address: 0x102cf30, Func Offset: 0
	// Line 1219, Address: 0x102cf50, Func Offset: 0x20
	// Line 1220, Address: 0x102cf54, Func Offset: 0x24
	// Line 1221, Address: 0x102cf60, Func Offset: 0x30
	// Line 1222, Address: 0x102cf6c, Func Offset: 0x3c
	// Line 1223, Address: 0x102cf74, Func Offset: 0x44
	// Line 1224, Address: 0x102cf7c, Func Offset: 0x4c
	// Line 1226, Address: 0x102cf90, Func Offset: 0x60
	// Line 1227, Address: 0x102cf94, Func Offset: 0x64
	// Line 1228, Address: 0x102cfa0, Func Offset: 0x70
	// Line 1229, Address: 0x102cfac, Func Offset: 0x7c
	// Line 1230, Address: 0x102cfb4, Func Offset: 0x84
	// Line 1232, Address: 0x102cfbc, Func Offset: 0x8c
	// Line 1233, Address: 0x102cfc8, Func Offset: 0x98
	// Line 1234, Address: 0x102cfdc, Func Offset: 0xac
	// Line 1236, Address: 0x102cfe8, Func Offset: 0xb8
	// Line 1237, Address: 0x102cff0, Func Offset: 0xc0
	// Line 1239, Address: 0x102cff8, Func Offset: 0xc8
	// Line 1241, Address: 0x102d018, Func Offset: 0xe8
	// Line 1247, Address: 0x102d044, Func Offset: 0x114
	// Line 1248, Address: 0x102d058, Func Offset: 0x128
	// Line 1250, Address: 0x102d064, Func Offset: 0x134
	// Line 1251, Address: 0x102d06c, Func Offset: 0x13c
	// Line 1252, Address: 0x102d074, Func Offset: 0x144
	// Line 1254, Address: 0x102d094, Func Offset: 0x164
	// Line 1260, Address: 0x102d0c0, Func Offset: 0x190
	// Line 1261, Address: 0x102d0d4, Func Offset: 0x1a4
	// Line 1263, Address: 0x102d0e0, Func Offset: 0x1b0
	// Line 1264, Address: 0x102d0e8, Func Offset: 0x1b8
	// Line 1265, Address: 0x102d0f0, Func Offset: 0x1c0
	// Line 1267, Address: 0x102d110, Func Offset: 0x1e0
	// Line 1273, Address: 0x102d13c, Func Offset: 0x20c
	// Line 1274, Address: 0x102d150, Func Offset: 0x220
	// Line 1276, Address: 0x102d15c, Func Offset: 0x22c
	// Line 1277, Address: 0x102d164, Func Offset: 0x234
	// Line 1278, Address: 0x102d16c, Func Offset: 0x23c
	// Line 1280, Address: 0x102d18c, Func Offset: 0x25c
	// Line 1289, Address: 0x102d1b8, Func Offset: 0x288
	// Func End, Address: 0x102d1e0, Func Offset: 0x2b0
}

// 
// Start address: 0x102d1e0
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
	// Line 1306, Address: 0x102d1e0, Func Offset: 0
	// Line 1317, Address: 0x102d20c, Func Offset: 0x2c
	// Line 1319, Address: 0x102d214, Func Offset: 0x34
	// Line 1320, Address: 0x102d22c, Func Offset: 0x4c
	// Line 1321, Address: 0x102d240, Func Offset: 0x60
	// Line 1323, Address: 0x102d248, Func Offset: 0x68
	// Line 1325, Address: 0x102d25c, Func Offset: 0x7c
	// Line 1326, Address: 0x102d274, Func Offset: 0x94
	// Line 1327, Address: 0x102d288, Func Offset: 0xa8
	// Line 1328, Address: 0x102d290, Func Offset: 0xb0
	// Line 1330, Address: 0x102d298, Func Offset: 0xb8
	// Line 1331, Address: 0x102d2ac, Func Offset: 0xcc
	// Line 1336, Address: 0x102d2b4, Func Offset: 0xd4
	// Line 1337, Address: 0x102d304, Func Offset: 0x124
	// Line 1338, Address: 0x102d30c, Func Offset: 0x12c
	// Line 1344, Address: 0x102d32c, Func Offset: 0x14c
	// Line 1345, Address: 0x102d34c, Func Offset: 0x16c
	// Line 1346, Address: 0x102d370, Func Offset: 0x190
	// Line 1347, Address: 0x102d37c, Func Offset: 0x19c
	// Line 1348, Address: 0x102d384, Func Offset: 0x1a4
	// Line 1350, Address: 0x102d3a4, Func Offset: 0x1c4
	// Line 1354, Address: 0x102d3d0, Func Offset: 0x1f0
	// Line 1357, Address: 0x102d3d8, Func Offset: 0x1f8
	// Line 1358, Address: 0x102d3dc, Func Offset: 0x1fc
	// Line 1362, Address: 0x102d3fc, Func Offset: 0x21c
	// Line 1369, Address: 0x102d428, Func Offset: 0x248
	// Line 1376, Address: 0x102d43c, Func Offset: 0x25c
	// Line 1377, Address: 0x102d444, Func Offset: 0x264
	// Line 1378, Address: 0x102d44c, Func Offset: 0x26c
	// Line 1379, Address: 0x102d464, Func Offset: 0x284
	// Line 1380, Address: 0x102d484, Func Offset: 0x2a4
	// Line 1384, Address: 0x102d48c, Func Offset: 0x2ac
	// Line 1386, Address: 0x102d4bc, Func Offset: 0x2dc
	// Line 1387, Address: 0x102d4c8, Func Offset: 0x2e8
	// Line 1391, Address: 0x102d4d8, Func Offset: 0x2f8
	// Line 1392, Address: 0x102d4e4, Func Offset: 0x304
	// Line 1393, Address: 0x102d504, Func Offset: 0x324
	// Line 1394, Address: 0x102d53c, Func Offset: 0x35c
	// Line 1395, Address: 0x102d55c, Func Offset: 0x37c
	// Line 1397, Address: 0x102d580, Func Offset: 0x3a0
	// Line 1400, Address: 0x102d5a4, Func Offset: 0x3c4
	// Line 1402, Address: 0x102d5c4, Func Offset: 0x3e4
	// Line 1404, Address: 0x102d5d8, Func Offset: 0x3f8
	// Line 1405, Address: 0x102d5e4, Func Offset: 0x404
	// Line 1406, Address: 0x102d5f4, Func Offset: 0x414
	// Line 1408, Address: 0x102d5fc, Func Offset: 0x41c
	// Func End, Address: 0x102d624, Func Offset: 0x444
}

// 
// Start address: 0x102d630
void scrollwrtc()
{
	// Line 1414, Address: 0x102d630, Func Offset: 0
	// Func End, Address: 0x102d638, Func Offset: 0x8
}

// 
// Start address: 0x102d640
void scrollwrtz()
{
	// Line 1419, Address: 0x102d640, Func Offset: 0
	// Func End, Address: 0x102d648, Func Offset: 0x8
}

// 
// Start address: 0x102d650
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1437, Address: 0x102d650, Func Offset: 0
	// Line 1450, Address: 0x102d678, Func Offset: 0x28
	// Line 1453, Address: 0x102d698, Func Offset: 0x48
	// Line 1454, Address: 0x102d6ac, Func Offset: 0x5c
	// Line 1455, Address: 0x102d6c0, Func Offset: 0x70
	// Line 1456, Address: 0x102d6d4, Func Offset: 0x84
	// Line 1458, Address: 0x102d6e8, Func Offset: 0x98
	// Line 1459, Address: 0x102d6f4, Func Offset: 0xa4
	// Line 1460, Address: 0x102d708, Func Offset: 0xb8
	// Func End, Address: 0x102d718, Func Offset: 0xc8
}

// 
// Start address: 0x102d720
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1464, Address: 0x102d720, Func Offset: 0
	// Line 1468, Address: 0x102d748, Func Offset: 0x28
	// Line 1471, Address: 0x102d768, Func Offset: 0x48
	// Line 1472, Address: 0x102d77c, Func Offset: 0x5c
	// Line 1473, Address: 0x102d790, Func Offset: 0x70
	// Line 1474, Address: 0x102d7a4, Func Offset: 0x84
	// Line 1476, Address: 0x102d7b8, Func Offset: 0x98
	// Line 1477, Address: 0x102d7c4, Func Offset: 0xa4
	// Line 1478, Address: 0x102d7d8, Func Offset: 0xb8
	// Func End, Address: 0x102d7e8, Func Offset: 0xc8
}

// 
// Start address: 0x102d7f0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1498, Address: 0x102d7f0, Func Offset: 0
	// Line 1502, Address: 0x102d818, Func Offset: 0x28
	// Line 1505, Address: 0x102d838, Func Offset: 0x48
	// Line 1506, Address: 0x102d84c, Func Offset: 0x5c
	// Line 1507, Address: 0x102d85c, Func Offset: 0x6c
	// Line 1508, Address: 0x102d870, Func Offset: 0x80
	// Line 1510, Address: 0x102d880, Func Offset: 0x90
	// Line 1511, Address: 0x102d88c, Func Offset: 0x9c
	// Line 1512, Address: 0x102d8a0, Func Offset: 0xb0
	// Func End, Address: 0x102d8b0, Func Offset: 0xc0
}

// 
// Start address: 0x102d8b0
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
	// Line 1531, Address: 0x102d8b0, Func Offset: 0
	// Line 1537, Address: 0x102d8e4, Func Offset: 0x34
	// Line 1539, Address: 0x102d8f4, Func Offset: 0x44
	// Line 1540, Address: 0x102d8f8, Func Offset: 0x48
	// Line 1541, Address: 0x102d900, Func Offset: 0x50
	// Line 1543, Address: 0x102d910, Func Offset: 0x60
	// Line 1545, Address: 0x102d914, Func Offset: 0x64
	// Line 1546, Address: 0x102d91c, Func Offset: 0x6c
	// Line 1549, Address: 0x102d924, Func Offset: 0x74
	// Line 1550, Address: 0x102d92c, Func Offset: 0x7c
	// Line 1551, Address: 0x102d938, Func Offset: 0x88
	// Line 1553, Address: 0x102d944, Func Offset: 0x94
	// Line 1554, Address: 0x102d94c, Func Offset: 0x9c
	// Line 1555, Address: 0x102d954, Func Offset: 0xa4
	// Line 1556, Address: 0x102d95c, Func Offset: 0xac
	// Line 1558, Address: 0x102d968, Func Offset: 0xb8
	// Line 1559, Address: 0x102d970, Func Offset: 0xc0
	// Line 1560, Address: 0x102d978, Func Offset: 0xc8
	// Line 1561, Address: 0x102d980, Func Offset: 0xd0
	// Line 1563, Address: 0x102d98c, Func Offset: 0xdc
	// Line 1564, Address: 0x102d994, Func Offset: 0xe4
	// Line 1565, Address: 0x102d99c, Func Offset: 0xec
	// Line 1568, Address: 0x102d9a4, Func Offset: 0xf4
	// Line 1569, Address: 0x102d9ac, Func Offset: 0xfc
	// Line 1572, Address: 0x102d9b4, Func Offset: 0x104
	// Line 1573, Address: 0x102d9f8, Func Offset: 0x148
	// Line 1574, Address: 0x102da3c, Func Offset: 0x18c
	// Line 1575, Address: 0x102da80, Func Offset: 0x1d0
	// Line 1577, Address: 0x102dac4, Func Offset: 0x214
	// Func End, Address: 0x102daf4, Func Offset: 0x244
}

// 
// Start address: 0x102db00
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1594, Address: 0x102db00, Func Offset: 0
	// Line 1595, Address: 0x102db20, Func Offset: 0x20
	// Line 1596, Address: 0x102db40, Func Offset: 0x40
	// Func End, Address: 0x102db50, Func Offset: 0x50
}

// 
// Start address: 0x102db50
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1598, Address: 0x102db50, Func Offset: 0
	// Line 1599, Address: 0x102db70, Func Offset: 0x20
	// Line 1600, Address: 0x102db74, Func Offset: 0x24
	// Line 1601, Address: 0x102db94, Func Offset: 0x44
	// Func End, Address: 0x102dba4, Func Offset: 0x54
}

// 
// Start address: 0x102dbb0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1608, Address: 0x102dbb0, Func Offset: 0
	// Line 1614, Address: 0x102dbe0, Func Offset: 0x30
	// Line 1615, Address: 0x102dbf0, Func Offset: 0x40
	// Line 1621, Address: 0x102dc00, Func Offset: 0x50
	// Line 1622, Address: 0x102dc1c, Func Offset: 0x6c
	// Line 1623, Address: 0x102dc20, Func Offset: 0x70
	// Line 1624, Address: 0x102dc3c, Func Offset: 0x8c
	// Line 1625, Address: 0x102dc40, Func Offset: 0x90
	// Line 1626, Address: 0x102dc60, Func Offset: 0xb0
	// Line 1627, Address: 0x102dc68, Func Offset: 0xb8
	// Line 1628, Address: 0x102dc88, Func Offset: 0xd8
	// Line 1629, Address: 0x102dc90, Func Offset: 0xe0
	// Line 1630, Address: 0x102dcd8, Func Offset: 0x128
	// Line 1632, Address: 0x102dce4, Func Offset: 0x134
	// Line 1634, Address: 0x102dd00, Func Offset: 0x150
	// Line 1639, Address: 0x102dd08, Func Offset: 0x158
	// Line 1640, Address: 0x102dd14, Func Offset: 0x164
	// Line 1643, Address: 0x102dd20, Func Offset: 0x170
	// Line 1644, Address: 0x102dd28, Func Offset: 0x178
	// Line 1645, Address: 0x102dd48, Func Offset: 0x198
	// Line 1646, Address: 0x102dd64, Func Offset: 0x1b4
	// Line 1647, Address: 0x102dd6c, Func Offset: 0x1bc
	// Line 1648, Address: 0x102dd8c, Func Offset: 0x1dc
	// Line 1650, Address: 0x102dda8, Func Offset: 0x1f8
	// Line 1651, Address: 0x102ddb0, Func Offset: 0x200
	// Line 1652, Address: 0x102ddb8, Func Offset: 0x208
	// Line 1653, Address: 0x102ddc4, Func Offset: 0x214
	// Line 1654, Address: 0x102dddc, Func Offset: 0x22c
	// Line 1656, Address: 0x102ddec, Func Offset: 0x23c
	// Line 1659, Address: 0x102ddf8, Func Offset: 0x248
	// Line 1660, Address: 0x102de00, Func Offset: 0x250
	// Line 1661, Address: 0x102de04, Func Offset: 0x254
	// Func End, Address: 0x102de24, Func Offset: 0x274
}

// 
// Start address: 0x102de30
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1681, Address: 0x102de30, Func Offset: 0
	// Line 1689, Address: 0x102de58, Func Offset: 0x28
	// Line 1690, Address: 0x102debc, Func Offset: 0x8c
	// Line 1696, Address: 0x102dec4, Func Offset: 0x94
	// Line 1697, Address: 0x102decc, Func Offset: 0x9c
	// Line 1698, Address: 0x102deec, Func Offset: 0xbc
	// Line 1699, Address: 0x102df08, Func Offset: 0xd8
	// Line 1700, Address: 0x102df10, Func Offset: 0xe0
	// Line 1701, Address: 0x102df30, Func Offset: 0x100
	// Line 1704, Address: 0x102df4c, Func Offset: 0x11c
	// Line 1705, Address: 0x102df54, Func Offset: 0x124
	// Line 1706, Address: 0x102df5c, Func Offset: 0x12c
	// Line 1707, Address: 0x102df68, Func Offset: 0x138
	// Line 1708, Address: 0x102df80, Func Offset: 0x150
	// Line 1709, Address: 0x102df88, Func Offset: 0x158
	// Line 1714, Address: 0x102df98, Func Offset: 0x168
	// Line 1717, Address: 0x102dfa4, Func Offset: 0x174
	// Line 1718, Address: 0x102dfac, Func Offset: 0x17c
	// Line 1719, Address: 0x102dfb0, Func Offset: 0x180
	// Func End, Address: 0x102dfcc, Func Offset: 0x19c
}

// 
// Start address: 0x102dfd0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1733, Address: 0x102dfd0, Func Offset: 0
	// Line 1740, Address: 0x102dfec, Func Offset: 0x1c
	// Line 1741, Address: 0x102dff0, Func Offset: 0x20
	// Line 1742, Address: 0x102dff8, Func Offset: 0x28
	// Line 1743, Address: 0x102e01c, Func Offset: 0x4c
	// Line 1744, Address: 0x102e028, Func Offset: 0x58
	// Line 1745, Address: 0x102e040, Func Offset: 0x70
	// Line 1746, Address: 0x102e054, Func Offset: 0x84
	// Line 1751, Address: 0x102e06c, Func Offset: 0x9c
	// Func End, Address: 0x102e084, Func Offset: 0xb4
}

// 
// Start address: 0x102e090
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1765, Address: 0x102e090, Func Offset: 0
	// Line 1766, Address: 0x102e09c, Func Offset: 0xc
	// Line 1767, Address: 0x102e0c8, Func Offset: 0x38
	// Line 1768, Address: 0x102e114, Func Offset: 0x84
	// Line 1769, Address: 0x102e140, Func Offset: 0xb0
	// Line 1771, Address: 0x102e18c, Func Offset: 0xfc
	// Line 1777, Address: 0x102e198, Func Offset: 0x108
	// Line 1778, Address: 0x102e19c, Func Offset: 0x10c
	// Func End, Address: 0x102e1a8, Func Offset: 0x118
}

// 
// Start address: 0x102e1b0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1795, Address: 0x102e1b0, Func Offset: 0
	// Line 1796, Address: 0x102e1cc, Func Offset: 0x1c
	// Line 1798, Address: 0x102e1e8, Func Offset: 0x38
	// Func End, Address: 0x102e1f8, Func Offset: 0x48
}

// 
// Start address: 0x102e200
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1800, Address: 0x102e200, Func Offset: 0
	// Line 1801, Address: 0x102e21c, Func Offset: 0x1c
	// Line 1802, Address: 0x102e220, Func Offset: 0x20
	// Line 1804, Address: 0x102e23c, Func Offset: 0x3c
	// Func End, Address: 0x102e24c, Func Offset: 0x4c
}

// 
// Start address: 0x102e250
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1806, Address: 0x102e250, Func Offset: 0
	// Line 1807, Address: 0x102e264, Func Offset: 0x14
	// Line 1809, Address: 0x102e280, Func Offset: 0x30
	// Func End, Address: 0x102e290, Func Offset: 0x40
}

// 
// Start address: 0x102e290
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1811, Address: 0x102e290, Func Offset: 0
	// Line 1812, Address: 0x102e2ac, Func Offset: 0x1c
	// Line 1814, Address: 0x102e2c8, Func Offset: 0x38
	// Func End, Address: 0x102e2d8, Func Offset: 0x48
}

// 
// Start address: 0x102e2e0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1816, Address: 0x102e2e0, Func Offset: 0
	// Line 1817, Address: 0x102e2f8, Func Offset: 0x18
	// Line 1818, Address: 0x102e308, Func Offset: 0x28
	// Line 1819, Address: 0x102e318, Func Offset: 0x38
	// Line 1820, Address: 0x102e324, Func Offset: 0x44
	// Line 1822, Address: 0x102e330, Func Offset: 0x50
	// Line 1823, Address: 0x102e35c, Func Offset: 0x7c
	// Line 1826, Address: 0x102e388, Func Offset: 0xa8
	// Func End, Address: 0x102e394, Func Offset: 0xb4
}

// 
// Start address: 0x102e3a0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1842, Address: 0x102e3a0, Func Offset: 0
	// Line 1849, Address: 0x102e3b8, Func Offset: 0x18
	// Line 1850, Address: 0x102e3c4, Func Offset: 0x24
	// Line 1851, Address: 0x102e3d0, Func Offset: 0x30
	// Line 1852, Address: 0x102e3d8, Func Offset: 0x38
	// Line 1853, Address: 0x102e3dc, Func Offset: 0x3c
	// Line 1857, Address: 0x102e3f4, Func Offset: 0x54
	// Line 1858, Address: 0x102e3fc, Func Offset: 0x5c
	// Line 1859, Address: 0x102e400, Func Offset: 0x60
	// Line 1861, Address: 0x102e410, Func Offset: 0x70
	// Func End, Address: 0x102e430, Func Offset: 0x90
}

// 
// Start address: 0x102e430
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1864, Address: 0x102e430, Func Offset: 0
	// Line 1865, Address: 0x102e448, Func Offset: 0x18
	// Line 1866, Address: 0x102e468, Func Offset: 0x38
	// Func End, Address: 0x102e478, Func Offset: 0x48
}

// 
// Start address: 0x102e480
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1871, Address: 0x102e480, Func Offset: 0
	// Line 1875, Address: 0x102e4a0, Func Offset: 0x20
	// Line 1878, Address: 0x102e4bc, Func Offset: 0x3c
	// Line 1882, Address: 0x102e4e4, Func Offset: 0x64
	// Line 1883, Address: 0x102e4f0, Func Offset: 0x70
	// Line 1885, Address: 0x102e518, Func Offset: 0x98
	// Func End, Address: 0x102e528, Func Offset: 0xa8
}

// 
// Start address: 0x102e530
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1891, Address: 0x102e530, Func Offset: 0
	// Line 1894, Address: 0x102e54c, Func Offset: 0x1c
	// Line 1895, Address: 0x102e554, Func Offset: 0x24
	// Line 1898, Address: 0x102e55c, Func Offset: 0x2c
	// Line 1900, Address: 0x102e580, Func Offset: 0x50
	// Line 1901, Address: 0x102e5a0, Func Offset: 0x70
	// Line 1902, Address: 0x102e5a8, Func Offset: 0x78
	// Line 1903, Address: 0x102e5cc, Func Offset: 0x9c
	// Func End, Address: 0x102e5e8, Func Offset: 0xb8
}

// 
// Start address: 0x102e5f0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1929, Address: 0x102e5f0, Func Offset: 0
	// Line 1934, Address: 0x102e618, Func Offset: 0x28
	// Line 1935, Address: 0x102e628, Func Offset: 0x38
	// Line 1937, Address: 0x102e644, Func Offset: 0x54
	// Line 1938, Address: 0x102e668, Func Offset: 0x78
	// Line 1939, Address: 0x102e690, Func Offset: 0xa0
	// Line 1940, Address: 0x102e69c, Func Offset: 0xac
	// Line 1941, Address: 0x102e6a4, Func Offset: 0xb4
	// Line 1944, Address: 0x102e6c0, Func Offset: 0xd0
	// Line 1948, Address: 0x102e6e8, Func Offset: 0xf8
	// Line 1951, Address: 0x102e6f0, Func Offset: 0x100
	// Line 1952, Address: 0x102e6f4, Func Offset: 0x104
	// Line 1956, Address: 0x102e710, Func Offset: 0x120
	// Line 1963, Address: 0x102e738, Func Offset: 0x148
	// Func End, Address: 0x102e754, Func Offset: 0x164
}

// 
// Start address: 0x102e760
void mapinit()
{
	// Line 1974, Address: 0x102e760, Func Offset: 0
	// Line 1976, Address: 0x102e768, Func Offset: 0x8
	// Line 1977, Address: 0x102e77c, Func Offset: 0x1c
	// Line 1980, Address: 0x102e790, Func Offset: 0x30
	// Line 1981, Address: 0x102e7b0, Func Offset: 0x50
	// Func End, Address: 0x102e7c0, Func Offset: 0x60
}

// 
// Start address: 0x102e7c0
void mapset()
{
	// Line 1986, Address: 0x102e7c0, Func Offset: 0
	// Func End, Address: 0x102e7c8, Func Offset: 0x8
}

// 
// Start address: 0x102e7d0
void divdevset()
{
	// Line 1990, Address: 0x102e7d0, Func Offset: 0
	// Func End, Address: 0x102e7d8, Func Offset: 0x8
}

// 
// Start address: 0x102e7e0
void enecginit()
{
	// Line 1994, Address: 0x102e7e0, Func Offset: 0
	// Func End, Address: 0x102e7e8, Func Offset: 0x8
}

