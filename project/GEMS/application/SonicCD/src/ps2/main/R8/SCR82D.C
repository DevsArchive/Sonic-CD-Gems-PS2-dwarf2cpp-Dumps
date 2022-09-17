typedef struct tagPOINT;
typedef union _anon0;
typedef struct _anon1;
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

typedef int(*type_14)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon0* type_1[8];
typedef short type_2[6];
typedef _anon13 type_3[0];
typedef unsigned char type_4[4];
typedef short type_5[2];
typedef short type_6[2][8];
typedef char type_7[7];
typedef unsigned short type_8[4];
typedef unsigned short type_9[4][1024];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_15[64];
typedef unsigned char type_16[64][8];
typedef unsigned char type_17[33];
typedef short type_18[256];
typedef char type_19[7];
typedef _anon0* type_20[8];
typedef _anon2 type_21[128];
typedef short type_22[2];
typedef short type_23[2][1];

struct tagPOINT
{
	int x;
	int y;
};

union _anon0
{
	int l;
	_anon4 w;
	_anon5 b;
};

struct _anon1
{
	unsigned char cnt;
	union
	{
		_anon13 spra[20];
		_anon13 spr[0];
	};
};

struct _anon2
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon1** patbase;
	_anon0 xposi;
	_anon0 yposi;
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

unsigned char z81awrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
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
_anon0 scra_v_posit;
_anon0 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
_anon0 scrb_h_posit;
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
short hscrollwork[256];
_anon0* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon0 vscroll;
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
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon11 scrflagbw;
unsigned char mapwkb[64][8];
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
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
void z82bline0(short** ppHscw);
void z82bline1(short** ppHscw);
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk);
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
void scrv_up_ch(_anon0 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon0 lSpd);
void scrv_move(_anon0 lSpd);
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
// Start address: 0x102b300
_anon2* main_chk()
{
	// Line 151, Address: 0x102b300, Func Offset: 0
	// Line 152, Address: 0x102b314, Func Offset: 0x14
	// Line 154, Address: 0x102b324, Func Offset: 0x24
	// Line 156, Address: 0x102b32c, Func Offset: 0x2c
	// Func End, Address: 0x102b334, Func Offset: 0x34
}

// 
// Start address: 0x102b340
void scr_set()
{
	short* pScrTbl;
	// Line 194, Address: 0x102b340, Func Offset: 0
	// Line 197, Address: 0x102b34c, Func Offset: 0xc
	// Line 198, Address: 0x102b360, Func Offset: 0x20
	// Line 199, Address: 0x102b374, Func Offset: 0x34
	// Line 201, Address: 0x102b37c, Func Offset: 0x3c
	// Line 202, Address: 0x102b384, Func Offset: 0x44
	// Line 203, Address: 0x102b390, Func Offset: 0x50
	// Line 204, Address: 0x102b394, Func Offset: 0x54
	// Line 205, Address: 0x102b3a8, Func Offset: 0x68
	// Line 206, Address: 0x102b3ac, Func Offset: 0x6c
	// Line 207, Address: 0x102b3c0, Func Offset: 0x80
	// Line 208, Address: 0x102b3c4, Func Offset: 0x84
	// Line 209, Address: 0x102b3d8, Func Offset: 0x98
	// Line 210, Address: 0x102b3dc, Func Offset: 0x9c
	// Line 211, Address: 0x102b3f0, Func Offset: 0xb0
	// Line 212, Address: 0x102b410, Func Offset: 0xd0
	// Line 213, Address: 0x102b414, Func Offset: 0xd4
	// Line 214, Address: 0x102b420, Func Offset: 0xe0
	// Line 216, Address: 0x102b42c, Func Offset: 0xec
	// Line 217, Address: 0x102b438, Func Offset: 0xf8
	// Line 219, Address: 0x102b444, Func Offset: 0x104
	// Line 220, Address: 0x102b44c, Func Offset: 0x10c
	// Func End, Address: 0x102b460, Func Offset: 0x120
}

// 
// Start address: 0x102b460
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 269, Address: 0x102b460, Func Offset: 0
	// Line 272, Address: 0x102b474, Func Offset: 0x14
	// Line 273, Address: 0x102b484, Func Offset: 0x24
	// Line 274, Address: 0x102b48c, Func Offset: 0x2c
	// Line 276, Address: 0x102b49c, Func Offset: 0x3c
	// Line 277, Address: 0x102b4b4, Func Offset: 0x54
	// Line 278, Address: 0x102b4c4, Func Offset: 0x64
	// Line 279, Address: 0x102b4cc, Func Offset: 0x6c
	// Line 281, Address: 0x102b4d0, Func Offset: 0x70
	// Line 283, Address: 0x102b4d8, Func Offset: 0x78
	// Line 284, Address: 0x102b4f8, Func Offset: 0x98
	// Line 285, Address: 0x102b51c, Func Offset: 0xbc
	// Line 287, Address: 0x102b524, Func Offset: 0xc4
	// Line 291, Address: 0x102b544, Func Offset: 0xe4
	// Line 292, Address: 0x102b558, Func Offset: 0xf8
	// Line 296, Address: 0x102b56c, Func Offset: 0x10c
	// Line 297, Address: 0x102b580, Func Offset: 0x120
	// Line 298, Address: 0x102b58c, Func Offset: 0x12c
	// Line 299, Address: 0x102b594, Func Offset: 0x134
	// Line 303, Address: 0x102b598, Func Offset: 0x138
	// Line 304, Address: 0x102b5bc, Func Offset: 0x15c
	// Line 308, Address: 0x102b5cc, Func Offset: 0x16c
	// Line 310, Address: 0x102b5d4, Func Offset: 0x174
	// Line 311, Address: 0x102b5e8, Func Offset: 0x188
	// Line 312, Address: 0x102b5f4, Func Offset: 0x194
	// Line 313, Address: 0x102b5fc, Func Offset: 0x19c
	// Line 317, Address: 0x102b600, Func Offset: 0x1a0
	// Line 318, Address: 0x102b624, Func Offset: 0x1c4
	// Line 322, Address: 0x102b634, Func Offset: 0x1d4
	// Line 324, Address: 0x102b63c, Func Offset: 0x1dc
	// Line 327, Address: 0x102b64c, Func Offset: 0x1ec
	// Line 328, Address: 0x102b65c, Func Offset: 0x1fc
	// Line 329, Address: 0x102b66c, Func Offset: 0x20c
	// Line 330, Address: 0x102b67c, Func Offset: 0x21c
	// Line 331, Address: 0x102b68c, Func Offset: 0x22c
	// Func End, Address: 0x102b6a8, Func Offset: 0x248
}

// 
// Start address: 0x102b6b0
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 352, Address: 0x102b6b0, Func Offset: 0
	// Line 355, Address: 0x102b6bc, Func Offset: 0xc
	// Line 356, Address: 0x102b6c4, Func Offset: 0x14
	// Line 358, Address: 0x102b6c8, Func Offset: 0x18
	// Line 359, Address: 0x102b6d4, Func Offset: 0x24
	// Line 360, Address: 0x102b6e0, Func Offset: 0x30
	// Line 361, Address: 0x102b6ec, Func Offset: 0x3c
	// Line 363, Address: 0x102b6f8, Func Offset: 0x48
	// Line 364, Address: 0x102b714, Func Offset: 0x64
	// Line 366, Address: 0x102b720, Func Offset: 0x70
	// Line 367, Address: 0x102b73c, Func Offset: 0x8c
	// Line 369, Address: 0x102b748, Func Offset: 0x98
	// Line 370, Address: 0x102b764, Func Offset: 0xb4
	// Line 371, Address: 0x102b788, Func Offset: 0xd8
	// Func End, Address: 0x102b794, Func Offset: 0xe4
}

// 
// Start address: 0x102b7a0
void scroll()
{
	_anon0 ldwk;
	_anon0* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 387, Address: 0x102b7a0, Func Offset: 0
	// Line 399, Address: 0x102b7bc, Func Offset: 0x1c
	// Line 404, Address: 0x102b7cc, Func Offset: 0x2c
	// Line 406, Address: 0x102b7f8, Func Offset: 0x58
	// Line 408, Address: 0x102b800, Func Offset: 0x60
	// Line 409, Address: 0x102b808, Func Offset: 0x68
	// Line 411, Address: 0x102b810, Func Offset: 0x70
	// Line 412, Address: 0x102b820, Func Offset: 0x80
	// Line 415, Address: 0x102b830, Func Offset: 0x90
	// Line 416, Address: 0x102b844, Func Offset: 0xa4
	// Line 418, Address: 0x102b854, Func Offset: 0xb4
	// Line 419, Address: 0x102b868, Func Offset: 0xc8
	// Line 421, Address: 0x102b878, Func Offset: 0xd8
	// Line 422, Address: 0x102b894, Func Offset: 0xf4
	// Line 424, Address: 0x102b8a4, Func Offset: 0x104
	// Line 427, Address: 0x102b8b8, Func Offset: 0x118
	// Line 429, Address: 0x102b8c8, Func Offset: 0x128
	// Line 431, Address: 0x102b8f0, Func Offset: 0x150
	// Line 432, Address: 0x102b928, Func Offset: 0x188
	// Line 434, Address: 0x102b93c, Func Offset: 0x19c
	// Line 436, Address: 0x102b948, Func Offset: 0x1a8
	// Line 437, Address: 0x102b968, Func Offset: 0x1c8
	// Line 439, Address: 0x102b974, Func Offset: 0x1d4
	// Line 440, Address: 0x102b988, Func Offset: 0x1e8
	// Line 442, Address: 0x102b998, Func Offset: 0x1f8
	// Line 444, Address: 0x102b9a4, Func Offset: 0x204
	// Line 445, Address: 0x102b9c4, Func Offset: 0x224
	// Line 447, Address: 0x102b9d0, Func Offset: 0x230
	// Line 448, Address: 0x102b9e4, Func Offset: 0x244
	// Line 450, Address: 0x102b9f4, Func Offset: 0x254
	// Line 452, Address: 0x102ba00, Func Offset: 0x260
	// Line 453, Address: 0x102ba20, Func Offset: 0x280
	// Line 455, Address: 0x102ba2c, Func Offset: 0x28c
	// Line 456, Address: 0x102ba40, Func Offset: 0x2a0
	// Line 458, Address: 0x102ba50, Func Offset: 0x2b0
	// Line 459, Address: 0x102ba5c, Func Offset: 0x2bc
	// Line 460, Address: 0x102ba8c, Func Offset: 0x2ec
	// Line 461, Address: 0x102babc, Func Offset: 0x31c
	// Line 462, Address: 0x102bad8, Func Offset: 0x338
	// Func End, Address: 0x102bafc, Func Offset: 0x35c
}

// 
// Start address: 0x102bb00
void z82bline0(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon0 ldwk;
	short wk;
	char z82bscrtbl0[7];
	// Line 467, Address: 0x102bb00, Func Offset: 0
	// Line 476, Address: 0x102bb18, Func Offset: 0x18
	// Line 477, Address: 0x102bb3c, Func Offset: 0x3c
	// Line 478, Address: 0x102bb5c, Func Offset: 0x5c
	// Line 479, Address: 0x102bb7c, Func Offset: 0x7c
	// Line 481, Address: 0x102bb88, Func Offset: 0x88
	// Line 483, Address: 0x102bb94, Func Offset: 0x94
	// Line 485, Address: 0x102bbb4, Func Offset: 0xb4
	// Line 487, Address: 0x102bbd4, Func Offset: 0xd4
	// Line 488, Address: 0x102bbe0, Func Offset: 0xe0
	// Line 489, Address: 0x102bbf4, Func Offset: 0xf4
	// Line 491, Address: 0x102bc00, Func Offset: 0x100
	// Line 492, Address: 0x102bc24, Func Offset: 0x124
	// Line 493, Address: 0x102bc30, Func Offset: 0x130
	// Line 494, Address: 0x102bc54, Func Offset: 0x154
	// Line 495, Address: 0x102bc60, Func Offset: 0x160
	// Func End, Address: 0x102bc7c, Func Offset: 0x17c
}

// 
// Start address: 0x102bc80
void z82bline1(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon0 ldwk;
	short wk;
	char z82bscrtbl1[7];
	// Line 500, Address: 0x102bc80, Func Offset: 0
	// Line 509, Address: 0x102bc98, Func Offset: 0x18
	// Line 510, Address: 0x102bcbc, Func Offset: 0x3c
	// Line 511, Address: 0x102bcdc, Func Offset: 0x5c
	// Line 512, Address: 0x102bcfc, Func Offset: 0x7c
	// Line 513, Address: 0x102bd08, Func Offset: 0x88
	// Line 515, Address: 0x102bd1c, Func Offset: 0x9c
	// Line 517, Address: 0x102bd28, Func Offset: 0xa8
	// Line 519, Address: 0x102bd48, Func Offset: 0xc8
	// Line 521, Address: 0x102bd68, Func Offset: 0xe8
	// Line 522, Address: 0x102bd7c, Func Offset: 0xfc
	// Line 523, Address: 0x102bd88, Func Offset: 0x108
	// Line 525, Address: 0x102bd94, Func Offset: 0x114
	// Line 526, Address: 0x102bdb8, Func Offset: 0x138
	// Line 527, Address: 0x102bdc4, Func Offset: 0x144
	// Line 528, Address: 0x102bde8, Func Offset: 0x168
	// Line 529, Address: 0x102bdf4, Func Offset: 0x174
	// Line 530, Address: 0x102be08, Func Offset: 0x188
	// Func End, Address: 0x102be24, Func Offset: 0x1a4
}

// 
// Start address: 0x102be30
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 551, Address: 0x102be30, Func Offset: 0
	// Line 555, Address: 0x102be4c, Func Offset: 0x1c
	// Line 556, Address: 0x102be50, Func Offset: 0x20
	// Line 558, Address: 0x102be70, Func Offset: 0x40
	// Line 559, Address: 0x102be8c, Func Offset: 0x5c
	// Line 560, Address: 0x102be98, Func Offset: 0x68
	// Line 562, Address: 0x102bea4, Func Offset: 0x74
	// Line 563, Address: 0x102beac, Func Offset: 0x7c
	// Line 564, Address: 0x102bebc, Func Offset: 0x8c
	// Line 565, Address: 0x102bee0, Func Offset: 0xb0
	// Line 566, Address: 0x102bf00, Func Offset: 0xd0
	// Func End, Address: 0x102bf14, Func Offset: 0xe4
}

// 
// Start address: 0x102bf20
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 672, Address: 0x102bf20, Func Offset: 0
	// Line 675, Address: 0x102bf30, Func Offset: 0x10
	// Line 676, Address: 0x102bf40, Func Offset: 0x20
	// Line 677, Address: 0x102bf4c, Func Offset: 0x2c
	// Line 679, Address: 0x102bf84, Func Offset: 0x64
	// Line 680, Address: 0x102bf8c, Func Offset: 0x6c
	// Line 681, Address: 0x102bfa0, Func Offset: 0x80
	// Line 682, Address: 0x102bfc0, Func Offset: 0xa0
	// Line 683, Address: 0x102bfd4, Func Offset: 0xb4
	// Line 685, Address: 0x102bfdc, Func Offset: 0xbc
	// Line 690, Address: 0x102bff0, Func Offset: 0xd0
	// Func End, Address: 0x102c004, Func Offset: 0xe4
}

// 
// Start address: 0x102c010
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 708, Address: 0x102c010, Func Offset: 0
	// Line 712, Address: 0x102c024, Func Offset: 0x14
	// Line 713, Address: 0x102c02c, Func Offset: 0x1c
	// Line 714, Address: 0x102c034, Func Offset: 0x24
	// Line 715, Address: 0x102c03c, Func Offset: 0x2c
	// Line 716, Address: 0x102c040, Func Offset: 0x30
	// Line 717, Address: 0x102c064, Func Offset: 0x54
	// Line 718, Address: 0x102c070, Func Offset: 0x60
	// Line 720, Address: 0x102c08c, Func Offset: 0x7c
	// Line 721, Address: 0x102c098, Func Offset: 0x88
	// Line 722, Address: 0x102c0ac, Func Offset: 0x9c
	// Line 723, Address: 0x102c0b8, Func Offset: 0xa8
	// Line 724, Address: 0x102c0dc, Func Offset: 0xcc
	// Line 726, Address: 0x102c0e4, Func Offset: 0xd4
	// Line 731, Address: 0x102c10c, Func Offset: 0xfc
	// Func End, Address: 0x102c120, Func Offset: 0x110
}

// 
// Start address: 0x102c120
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 749, Address: 0x102c120, Func Offset: 0
	// Line 753, Address: 0x102c134, Func Offset: 0x14
	// Line 754, Address: 0x102c13c, Func Offset: 0x1c
	// Line 755, Address: 0x102c144, Func Offset: 0x24
	// Line 756, Address: 0x102c14c, Func Offset: 0x2c
	// Line 757, Address: 0x102c150, Func Offset: 0x30
	// Line 758, Address: 0x102c174, Func Offset: 0x54
	// Line 759, Address: 0x102c180, Func Offset: 0x60
	// Line 761, Address: 0x102c19c, Func Offset: 0x7c
	// Line 762, Address: 0x102c1a8, Func Offset: 0x88
	// Line 763, Address: 0x102c1bc, Func Offset: 0x9c
	// Line 764, Address: 0x102c1c8, Func Offset: 0xa8
	// Line 765, Address: 0x102c1ec, Func Offset: 0xcc
	// Line 767, Address: 0x102c1f4, Func Offset: 0xd4
	// Line 772, Address: 0x102c21c, Func Offset: 0xfc
	// Func End, Address: 0x102c230, Func Offset: 0x110
}

// 
// Start address: 0x102c230
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 790, Address: 0x102c230, Func Offset: 0
	// Line 794, Address: 0x102c244, Func Offset: 0x14
	// Line 795, Address: 0x102c24c, Func Offset: 0x1c
	// Line 796, Address: 0x102c254, Func Offset: 0x24
	// Line 797, Address: 0x102c25c, Func Offset: 0x2c
	// Line 798, Address: 0x102c260, Func Offset: 0x30
	// Line 799, Address: 0x102c284, Func Offset: 0x54
	// Line 800, Address: 0x102c290, Func Offset: 0x60
	// Line 802, Address: 0x102c2ac, Func Offset: 0x7c
	// Line 803, Address: 0x102c2b8, Func Offset: 0x88
	// Line 804, Address: 0x102c2cc, Func Offset: 0x9c
	// Line 805, Address: 0x102c2d8, Func Offset: 0xa8
	// Line 806, Address: 0x102c2fc, Func Offset: 0xcc
	// Line 808, Address: 0x102c304, Func Offset: 0xd4
	// Line 813, Address: 0x102c32c, Func Offset: 0xfc
	// Func End, Address: 0x102c340, Func Offset: 0x110
}

// 
// Start address: 0x102c340
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 828, Address: 0x102c340, Func Offset: 0
	// Line 832, Address: 0x102c350, Func Offset: 0x10
	// Line 834, Address: 0x102c360, Func Offset: 0x20
	// Line 835, Address: 0x102c368, Func Offset: 0x28
	// Line 836, Address: 0x102c39c, Func Offset: 0x5c
	// Line 837, Address: 0x102c3a4, Func Offset: 0x64
	// Line 838, Address: 0x102c3b8, Func Offset: 0x78
	// Line 839, Address: 0x102c3dc, Func Offset: 0x9c
	// Line 840, Address: 0x102c3f0, Func Offset: 0xb0
	// Line 841, Address: 0x102c3f8, Func Offset: 0xb8
	// Line 846, Address: 0x102c40c, Func Offset: 0xcc
	// Func End, Address: 0x102c424, Func Offset: 0xe4
}

// 
// Start address: 0x102c430
void scrh_move()
{
	short xwk;
	// Line 863, Address: 0x102c430, Func Offset: 0
	// Line 866, Address: 0x102c438, Func Offset: 0x8
	// Line 867, Address: 0x102c480, Func Offset: 0x50
	// Line 869, Address: 0x102c490, Func Offset: 0x60
	// Line 870, Address: 0x102c498, Func Offset: 0x68
	// Line 871, Address: 0x102c4a0, Func Offset: 0x70
	// Line 873, Address: 0x102c4b0, Func Offset: 0x80
	// Line 874, Address: 0x102c4c4, Func Offset: 0x94
	// Line 878, Address: 0x102c4d0, Func Offset: 0xa0
	// Line 879, Address: 0x102c4e4, Func Offset: 0xb4
	// Line 880, Address: 0x102c508, Func Offset: 0xd8
	// Line 882, Address: 0x102c518, Func Offset: 0xe8
	// Line 884, Address: 0x102c520, Func Offset: 0xf0
	// Line 885, Address: 0x102c534, Func Offset: 0x104
	// Line 889, Address: 0x102c540, Func Offset: 0x110
	// Line 890, Address: 0x102c554, Func Offset: 0x124
	// Line 891, Address: 0x102c578, Func Offset: 0x148
	// Line 896, Address: 0x102c588, Func Offset: 0x158
	// Line 897, Address: 0x102c5b8, Func Offset: 0x188
	// Line 898, Address: 0x102c5c0, Func Offset: 0x190
	// Func End, Address: 0x102c5d0, Func Offset: 0x1a0
}

// 
// Start address: 0x102c5d0
void scroll_v()
{
	short ywk;
	// Line 913, Address: 0x102c5d0, Func Offset: 0
	// Line 916, Address: 0x102c5dc, Func Offset: 0xc
	// Line 917, Address: 0x102c610, Func Offset: 0x40
	// Line 918, Address: 0x102c628, Func Offset: 0x58
	// Line 922, Address: 0x102c634, Func Offset: 0x64
	// Line 923, Address: 0x102c64c, Func Offset: 0x7c
	// Line 924, Address: 0x102c658, Func Offset: 0x88
	// Line 925, Address: 0x102c67c, Func Offset: 0xac
	// Line 926, Address: 0x102c690, Func Offset: 0xc0
	// Line 927, Address: 0x102c69c, Func Offset: 0xcc
	// Line 928, Address: 0x102c6a4, Func Offset: 0xd4
	// Line 929, Address: 0x102c6cc, Func Offset: 0xfc
	// Line 930, Address: 0x102c6f4, Func Offset: 0x124
	// Line 931, Address: 0x102c700, Func Offset: 0x130
	// Line 933, Address: 0x102c708, Func Offset: 0x138
	// Line 934, Address: 0x102c730, Func Offset: 0x160
	// Line 935, Address: 0x102c740, Func Offset: 0x170
	// Line 936, Address: 0x102c748, Func Offset: 0x178
	// Line 941, Address: 0x102c750, Func Offset: 0x180
	// Line 942, Address: 0x102c77c, Func Offset: 0x1ac
	// Line 943, Address: 0x102c788, Func Offset: 0x1b8
	// Line 944, Address: 0x102c790, Func Offset: 0x1c0
	// Line 945, Address: 0x102c7a0, Func Offset: 0x1d0
	// Line 946, Address: 0x102c7a8, Func Offset: 0x1d8
	// Line 951, Address: 0x102c7b0, Func Offset: 0x1e0
	// Line 952, Address: 0x102c7b8, Func Offset: 0x1e8
	// Func End, Address: 0x102c7cc, Func Offset: 0x1fc
}

// 
// Start address: 0x102c7d0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 966, Address: 0x102c7d0, Func Offset: 0
	// Line 969, Address: 0x102c7e0, Func Offset: 0x10
	// Line 970, Address: 0x102c7fc, Func Offset: 0x2c
	// Line 971, Address: 0x102c814, Func Offset: 0x44
	// Line 972, Address: 0x102c838, Func Offset: 0x68
	// Line 973, Address: 0x102c840, Func Offset: 0x70
	// Line 977, Address: 0x102c850, Func Offset: 0x80
	// Line 978, Address: 0x102c864, Func Offset: 0x94
	// Line 979, Address: 0x102c870, Func Offset: 0xa0
	// Line 982, Address: 0x102c878, Func Offset: 0xa8
	// Line 983, Address: 0x102c890, Func Offset: 0xc0
	// Line 984, Address: 0x102c89c, Func Offset: 0xcc
	// Line 985, Address: 0x102c8bc, Func Offset: 0xec
	// Line 986, Address: 0x102c8c8, Func Offset: 0xf8
	// Line 987, Address: 0x102c8d0, Func Offset: 0x100
	// Line 989, Address: 0x102c8dc, Func Offset: 0x10c
	// Line 991, Address: 0x102c8e4, Func Offset: 0x114
	// Line 992, Address: 0x102c8fc, Func Offset: 0x12c
	// Line 993, Address: 0x102c908, Func Offset: 0x138
	// Line 994, Address: 0x102c928, Func Offset: 0x158
	// Line 995, Address: 0x102c934, Func Offset: 0x164
	// Line 996, Address: 0x102c93c, Func Offset: 0x16c
	// Line 999, Address: 0x102c948, Func Offset: 0x178
	// Func End, Address: 0x102c95c, Func Offset: 0x18c
}

// 
// Start address: 0x102c960
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1013, Address: 0x102c960, Func Offset: 0
	// Line 1016, Address: 0x102c970, Func Offset: 0x10
	// Line 1018, Address: 0x102c97c, Func Offset: 0x1c
	// Line 1019, Address: 0x102c994, Func Offset: 0x34
	// Line 1020, Address: 0x102c9a0, Func Offset: 0x40
	// Line 1021, Address: 0x102c9c0, Func Offset: 0x60
	// Line 1022, Address: 0x102c9cc, Func Offset: 0x6c
	// Line 1023, Address: 0x102c9d4, Func Offset: 0x74
	// Line 1025, Address: 0x102c9e0, Func Offset: 0x80
	// Func End, Address: 0x102c9f4, Func Offset: 0x94
}

// 
// Start address: 0x102ca00
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 1040, Address: 0x102ca00, Func Offset: 0
	// Line 1043, Address: 0x102ca0c, Func Offset: 0xc
	// Line 1044, Address: 0x102ca10, Func Offset: 0x10
	// Line 1045, Address: 0x102ca3c, Func Offset: 0x3c
	// Line 1046, Address: 0x102ca50, Func Offset: 0x50
	// Line 1047, Address: 0x102ca5c, Func Offset: 0x5c
	// Line 1048, Address: 0x102ca64, Func Offset: 0x64
	// Line 1050, Address: 0x102ca70, Func Offset: 0x70
	// Func End, Address: 0x102ca80, Func Offset: 0x80
}

// 
// Start address: 0x102ca80
void sv_move_sub2()
{
	// Line 1054, Address: 0x102ca80, Func Offset: 0
	// Line 1055, Address: 0x102ca88, Func Offset: 0x8
	// Line 1057, Address: 0x102ca90, Func Offset: 0x10
	// Line 1058, Address: 0x102ca9c, Func Offset: 0x1c
	// Func End, Address: 0x102caac, Func Offset: 0x2c
}

// 
// Start address: 0x102cab0
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	// Line 1072, Address: 0x102cab0, Func Offset: 0
	// Line 1075, Address: 0x102cabc, Func Offset: 0xc
	// Line 1076, Address: 0x102cae0, Func Offset: 0x30
	// Line 1077, Address: 0x102cb04, Func Offset: 0x54
	// Line 1078, Address: 0x102cb10, Func Offset: 0x60
	// Func End, Address: 0x102cb20, Func Offset: 0x70
}

// 
// Start address: 0x102cb20
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1093, Address: 0x102cb20, Func Offset: 0
	// Line 1094, Address: 0x102cb2c, Func Offset: 0xc
	// Line 1095, Address: 0x102cb54, Func Offset: 0x34
	// Line 1097, Address: 0x102cb6c, Func Offset: 0x4c
	// Line 1098, Address: 0x102cb78, Func Offset: 0x58
	// Line 1099, Address: 0x102cb80, Func Offset: 0x60
	// Line 1100, Address: 0x102cb8c, Func Offset: 0x6c
	// Line 1101, Address: 0x102cba0, Func Offset: 0x80
	// Line 1102, Address: 0x102cbb4, Func Offset: 0x94
	// Line 1106, Address: 0x102cbc8, Func Offset: 0xa8
	// Line 1107, Address: 0x102cbd4, Func Offset: 0xb4
	// Func End, Address: 0x102cbe4, Func Offset: 0xc4
}

// 
// Start address: 0x102cbf0
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	// Line 1121, Address: 0x102cbf0, Func Offset: 0
	// Line 1124, Address: 0x102cbfc, Func Offset: 0xc
	// Line 1125, Address: 0x102cc1c, Func Offset: 0x2c
	// Line 1126, Address: 0x102cc40, Func Offset: 0x50
	// Line 1127, Address: 0x102cc4c, Func Offset: 0x5c
	// Func End, Address: 0x102cc5c, Func Offset: 0x6c
}

// 
// Start address: 0x102cc60
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1142, Address: 0x102cc60, Func Offset: 0
	// Line 1143, Address: 0x102cc6c, Func Offset: 0xc
	// Line 1144, Address: 0x102cc94, Func Offset: 0x34
	// Line 1146, Address: 0x102ccac, Func Offset: 0x4c
	// Line 1147, Address: 0x102ccb8, Func Offset: 0x58
	// Line 1148, Address: 0x102ccc0, Func Offset: 0x60
	// Line 1149, Address: 0x102cccc, Func Offset: 0x6c
	// Line 1150, Address: 0x102cce0, Func Offset: 0x80
	// Line 1151, Address: 0x102ccf4, Func Offset: 0x94
	// Line 1155, Address: 0x102cd08, Func Offset: 0xa8
	// Line 1156, Address: 0x102cd14, Func Offset: 0xb4
	// Func End, Address: 0x102cd24, Func Offset: 0xc4
}

// 
// Start address: 0x102cd30
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1173, Address: 0x102cd30, Func Offset: 0
	// Line 1177, Address: 0x102cd40, Func Offset: 0x10
	// Line 1178, Address: 0x102cd50, Func Offset: 0x20
	// Line 1179, Address: 0x102cd74, Func Offset: 0x44
	// Line 1180, Address: 0x102cd88, Func Offset: 0x58
	// Line 1181, Address: 0x102cda0, Func Offset: 0x70
	// Line 1183, Address: 0x102cdac, Func Offset: 0x7c
	// Line 1185, Address: 0x102cdb8, Func Offset: 0x88
	// Line 1186, Address: 0x102cdf4, Func Offset: 0xc4
	// Line 1187, Address: 0x102cdfc, Func Offset: 0xcc
	// Line 1188, Address: 0x102ce10, Func Offset: 0xe0
	// Line 1189, Address: 0x102ce3c, Func Offset: 0x10c
	// Line 1190, Address: 0x102ce4c, Func Offset: 0x11c
	// Line 1191, Address: 0x102ce60, Func Offset: 0x130
	// Line 1192, Address: 0x102ce68, Func Offset: 0x138
	// Line 1197, Address: 0x102ce7c, Func Offset: 0x14c
	// Func End, Address: 0x102ce90, Func Offset: 0x160
}

// 
// Start address: 0x102ce90
void scrollwrt()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	_anon0 lD4;
	unsigned short wD5;
	// Line 1215, Address: 0x102ce90, Func Offset: 0
	// Line 1224, Address: 0x102ceb0, Func Offset: 0x20
	// Line 1225, Address: 0x102ceb4, Func Offset: 0x24
	// Line 1226, Address: 0x102cec0, Func Offset: 0x30
	// Line 1227, Address: 0x102cecc, Func Offset: 0x3c
	// Line 1228, Address: 0x102ced4, Func Offset: 0x44
	// Line 1229, Address: 0x102cedc, Func Offset: 0x4c
	// Line 1231, Address: 0x102cef0, Func Offset: 0x60
	// Line 1232, Address: 0x102cef4, Func Offset: 0x64
	// Line 1233, Address: 0x102cf00, Func Offset: 0x70
	// Line 1234, Address: 0x102cf0c, Func Offset: 0x7c
	// Line 1235, Address: 0x102cf14, Func Offset: 0x84
	// Line 1237, Address: 0x102cf1c, Func Offset: 0x8c
	// Line 1238, Address: 0x102cf28, Func Offset: 0x98
	// Line 1239, Address: 0x102cf3c, Func Offset: 0xac
	// Line 1241, Address: 0x102cf48, Func Offset: 0xb8
	// Line 1242, Address: 0x102cf50, Func Offset: 0xc0
	// Line 1244, Address: 0x102cf58, Func Offset: 0xc8
	// Line 1246, Address: 0x102cf78, Func Offset: 0xe8
	// Line 1252, Address: 0x102cfa4, Func Offset: 0x114
	// Line 1253, Address: 0x102cfb8, Func Offset: 0x128
	// Line 1255, Address: 0x102cfc4, Func Offset: 0x134
	// Line 1256, Address: 0x102cfcc, Func Offset: 0x13c
	// Line 1257, Address: 0x102cfd4, Func Offset: 0x144
	// Line 1259, Address: 0x102cff4, Func Offset: 0x164
	// Line 1265, Address: 0x102d020, Func Offset: 0x190
	// Line 1266, Address: 0x102d034, Func Offset: 0x1a4
	// Line 1268, Address: 0x102d040, Func Offset: 0x1b0
	// Line 1269, Address: 0x102d048, Func Offset: 0x1b8
	// Line 1270, Address: 0x102d050, Func Offset: 0x1c0
	// Line 1272, Address: 0x102d070, Func Offset: 0x1e0
	// Line 1278, Address: 0x102d09c, Func Offset: 0x20c
	// Line 1279, Address: 0x102d0b0, Func Offset: 0x220
	// Line 1281, Address: 0x102d0bc, Func Offset: 0x22c
	// Line 1282, Address: 0x102d0c4, Func Offset: 0x234
	// Line 1283, Address: 0x102d0cc, Func Offset: 0x23c
	// Line 1285, Address: 0x102d0ec, Func Offset: 0x25c
	// Line 1294, Address: 0x102d118, Func Offset: 0x288
	// Func End, Address: 0x102d140, Func Offset: 0x2b0
}

// 
// Start address: 0x102d140
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon0 lD4;
	int WrtTblCnt;
	unsigned short wD0;
	unsigned short wD5;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1311, Address: 0x102d140, Func Offset: 0
	// Line 1322, Address: 0x102d16c, Func Offset: 0x2c
	// Line 1324, Address: 0x102d174, Func Offset: 0x34
	// Line 1325, Address: 0x102d18c, Func Offset: 0x4c
	// Line 1326, Address: 0x102d1a0, Func Offset: 0x60
	// Line 1328, Address: 0x102d1a8, Func Offset: 0x68
	// Line 1330, Address: 0x102d1bc, Func Offset: 0x7c
	// Line 1331, Address: 0x102d1d4, Func Offset: 0x94
	// Line 1332, Address: 0x102d1e8, Func Offset: 0xa8
	// Line 1333, Address: 0x102d1f0, Func Offset: 0xb0
	// Line 1335, Address: 0x102d1f8, Func Offset: 0xb8
	// Line 1336, Address: 0x102d20c, Func Offset: 0xcc
	// Line 1341, Address: 0x102d214, Func Offset: 0xd4
	// Line 1342, Address: 0x102d264, Func Offset: 0x124
	// Line 1343, Address: 0x102d26c, Func Offset: 0x12c
	// Line 1349, Address: 0x102d28c, Func Offset: 0x14c
	// Line 1350, Address: 0x102d2ac, Func Offset: 0x16c
	// Line 1351, Address: 0x102d2d0, Func Offset: 0x190
	// Line 1352, Address: 0x102d2dc, Func Offset: 0x19c
	// Line 1353, Address: 0x102d2e4, Func Offset: 0x1a4
	// Line 1355, Address: 0x102d304, Func Offset: 0x1c4
	// Line 1359, Address: 0x102d330, Func Offset: 0x1f0
	// Line 1362, Address: 0x102d338, Func Offset: 0x1f8
	// Line 1363, Address: 0x102d33c, Func Offset: 0x1fc
	// Line 1367, Address: 0x102d35c, Func Offset: 0x21c
	// Line 1374, Address: 0x102d388, Func Offset: 0x248
	// Line 1381, Address: 0x102d39c, Func Offset: 0x25c
	// Line 1382, Address: 0x102d3a4, Func Offset: 0x264
	// Line 1383, Address: 0x102d3ac, Func Offset: 0x26c
	// Line 1384, Address: 0x102d3c4, Func Offset: 0x284
	// Line 1385, Address: 0x102d3e4, Func Offset: 0x2a4
	// Line 1389, Address: 0x102d3ec, Func Offset: 0x2ac
	// Line 1391, Address: 0x102d41c, Func Offset: 0x2dc
	// Line 1392, Address: 0x102d428, Func Offset: 0x2e8
	// Line 1396, Address: 0x102d438, Func Offset: 0x2f8
	// Line 1397, Address: 0x102d444, Func Offset: 0x304
	// Line 1398, Address: 0x102d464, Func Offset: 0x324
	// Line 1399, Address: 0x102d49c, Func Offset: 0x35c
	// Line 1400, Address: 0x102d4bc, Func Offset: 0x37c
	// Line 1402, Address: 0x102d4e0, Func Offset: 0x3a0
	// Line 1405, Address: 0x102d504, Func Offset: 0x3c4
	// Line 1407, Address: 0x102d524, Func Offset: 0x3e4
	// Line 1409, Address: 0x102d538, Func Offset: 0x3f8
	// Line 1410, Address: 0x102d544, Func Offset: 0x404
	// Line 1411, Address: 0x102d554, Func Offset: 0x414
	// Line 1413, Address: 0x102d55c, Func Offset: 0x41c
	// Func End, Address: 0x102d584, Func Offset: 0x444
}

// 
// Start address: 0x102d590
void scrollwrtc()
{
	// Line 1419, Address: 0x102d590, Func Offset: 0
	// Func End, Address: 0x102d598, Func Offset: 0x8
}

// 
// Start address: 0x102d5a0
void scrollwrtz()
{
	// Line 1424, Address: 0x102d5a0, Func Offset: 0
	// Func End, Address: 0x102d5a8, Func Offset: 0x8
}

// 
// Start address: 0x102d5b0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1442, Address: 0x102d5b0, Func Offset: 0
	// Line 1455, Address: 0x102d5d8, Func Offset: 0x28
	// Line 1458, Address: 0x102d5f8, Func Offset: 0x48
	// Line 1459, Address: 0x102d60c, Func Offset: 0x5c
	// Line 1460, Address: 0x102d620, Func Offset: 0x70
	// Line 1461, Address: 0x102d634, Func Offset: 0x84
	// Line 1463, Address: 0x102d648, Func Offset: 0x98
	// Line 1464, Address: 0x102d654, Func Offset: 0xa4
	// Line 1465, Address: 0x102d668, Func Offset: 0xb8
	// Func End, Address: 0x102d678, Func Offset: 0xc8
}

// 
// Start address: 0x102d680
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1469, Address: 0x102d680, Func Offset: 0
	// Line 1473, Address: 0x102d6a8, Func Offset: 0x28
	// Line 1476, Address: 0x102d6c8, Func Offset: 0x48
	// Line 1477, Address: 0x102d6dc, Func Offset: 0x5c
	// Line 1478, Address: 0x102d6f0, Func Offset: 0x70
	// Line 1479, Address: 0x102d704, Func Offset: 0x84
	// Line 1481, Address: 0x102d718, Func Offset: 0x98
	// Line 1482, Address: 0x102d724, Func Offset: 0xa4
	// Line 1483, Address: 0x102d738, Func Offset: 0xb8
	// Func End, Address: 0x102d748, Func Offset: 0xc8
}

// 
// Start address: 0x102d750
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1503, Address: 0x102d750, Func Offset: 0
	// Line 1507, Address: 0x102d778, Func Offset: 0x28
	// Line 1510, Address: 0x102d798, Func Offset: 0x48
	// Line 1511, Address: 0x102d7ac, Func Offset: 0x5c
	// Line 1512, Address: 0x102d7bc, Func Offset: 0x6c
	// Line 1513, Address: 0x102d7d0, Func Offset: 0x80
	// Line 1515, Address: 0x102d7e0, Func Offset: 0x90
	// Line 1516, Address: 0x102d7ec, Func Offset: 0x9c
	// Line 1517, Address: 0x102d800, Func Offset: 0xb0
	// Func End, Address: 0x102d810, Func Offset: 0xc0
}

// 
// Start address: 0x102d810
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
	// Line 1536, Address: 0x102d810, Func Offset: 0
	// Line 1542, Address: 0x102d844, Func Offset: 0x34
	// Line 1544, Address: 0x102d854, Func Offset: 0x44
	// Line 1545, Address: 0x102d858, Func Offset: 0x48
	// Line 1546, Address: 0x102d860, Func Offset: 0x50
	// Line 1548, Address: 0x102d870, Func Offset: 0x60
	// Line 1550, Address: 0x102d874, Func Offset: 0x64
	// Line 1551, Address: 0x102d87c, Func Offset: 0x6c
	// Line 1554, Address: 0x102d884, Func Offset: 0x74
	// Line 1555, Address: 0x102d88c, Func Offset: 0x7c
	// Line 1556, Address: 0x102d898, Func Offset: 0x88
	// Line 1558, Address: 0x102d8a4, Func Offset: 0x94
	// Line 1559, Address: 0x102d8ac, Func Offset: 0x9c
	// Line 1560, Address: 0x102d8b4, Func Offset: 0xa4
	// Line 1561, Address: 0x102d8bc, Func Offset: 0xac
	// Line 1563, Address: 0x102d8c8, Func Offset: 0xb8
	// Line 1564, Address: 0x102d8d0, Func Offset: 0xc0
	// Line 1565, Address: 0x102d8d8, Func Offset: 0xc8
	// Line 1566, Address: 0x102d8e0, Func Offset: 0xd0
	// Line 1568, Address: 0x102d8ec, Func Offset: 0xdc
	// Line 1569, Address: 0x102d8f4, Func Offset: 0xe4
	// Line 1570, Address: 0x102d8fc, Func Offset: 0xec
	// Line 1573, Address: 0x102d904, Func Offset: 0xf4
	// Line 1574, Address: 0x102d90c, Func Offset: 0xfc
	// Line 1577, Address: 0x102d914, Func Offset: 0x104
	// Line 1578, Address: 0x102d958, Func Offset: 0x148
	// Line 1579, Address: 0x102d99c, Func Offset: 0x18c
	// Line 1580, Address: 0x102d9e0, Func Offset: 0x1d0
	// Line 1582, Address: 0x102da24, Func Offset: 0x214
	// Func End, Address: 0x102da54, Func Offset: 0x244
}

// 
// Start address: 0x102da60
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1600, Address: 0x102da60, Func Offset: 0
	// Line 1601, Address: 0x102da80, Func Offset: 0x20
	// Line 1602, Address: 0x102daa0, Func Offset: 0x40
	// Func End, Address: 0x102dab0, Func Offset: 0x50
}

// 
// Start address: 0x102dab0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1604, Address: 0x102dab0, Func Offset: 0
	// Line 1605, Address: 0x102dad0, Func Offset: 0x20
	// Line 1606, Address: 0x102dad4, Func Offset: 0x24
	// Line 1607, Address: 0x102daf4, Func Offset: 0x44
	// Func End, Address: 0x102db04, Func Offset: 0x54
}

// 
// Start address: 0x102db10
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1614, Address: 0x102db10, Func Offset: 0
	// Line 1620, Address: 0x102db40, Func Offset: 0x30
	// Line 1621, Address: 0x102db50, Func Offset: 0x40
	// Line 1627, Address: 0x102db60, Func Offset: 0x50
	// Line 1628, Address: 0x102db7c, Func Offset: 0x6c
	// Line 1629, Address: 0x102db80, Func Offset: 0x70
	// Line 1630, Address: 0x102db9c, Func Offset: 0x8c
	// Line 1631, Address: 0x102dba0, Func Offset: 0x90
	// Line 1632, Address: 0x102dbc0, Func Offset: 0xb0
	// Line 1633, Address: 0x102dbc8, Func Offset: 0xb8
	// Line 1634, Address: 0x102dbe8, Func Offset: 0xd8
	// Line 1635, Address: 0x102dbf0, Func Offset: 0xe0
	// Line 1636, Address: 0x102dc38, Func Offset: 0x128
	// Line 1638, Address: 0x102dc44, Func Offset: 0x134
	// Line 1640, Address: 0x102dc60, Func Offset: 0x150
	// Line 1645, Address: 0x102dc68, Func Offset: 0x158
	// Line 1646, Address: 0x102dc74, Func Offset: 0x164
	// Line 1649, Address: 0x102dc80, Func Offset: 0x170
	// Line 1650, Address: 0x102dc88, Func Offset: 0x178
	// Line 1651, Address: 0x102dca8, Func Offset: 0x198
	// Line 1652, Address: 0x102dcc4, Func Offset: 0x1b4
	// Line 1653, Address: 0x102dccc, Func Offset: 0x1bc
	// Line 1654, Address: 0x102dcec, Func Offset: 0x1dc
	// Line 1656, Address: 0x102dd08, Func Offset: 0x1f8
	// Line 1657, Address: 0x102dd10, Func Offset: 0x200
	// Line 1658, Address: 0x102dd18, Func Offset: 0x208
	// Line 1659, Address: 0x102dd24, Func Offset: 0x214
	// Line 1660, Address: 0x102dd3c, Func Offset: 0x22c
	// Line 1662, Address: 0x102dd4c, Func Offset: 0x23c
	// Line 1665, Address: 0x102dd58, Func Offset: 0x248
	// Line 1666, Address: 0x102dd60, Func Offset: 0x250
	// Line 1667, Address: 0x102dd64, Func Offset: 0x254
	// Func End, Address: 0x102dd84, Func Offset: 0x274
}

// 
// Start address: 0x102dd90
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1687, Address: 0x102dd90, Func Offset: 0
	// Line 1695, Address: 0x102ddb8, Func Offset: 0x28
	// Line 1696, Address: 0x102de1c, Func Offset: 0x8c
	// Line 1702, Address: 0x102de24, Func Offset: 0x94
	// Line 1703, Address: 0x102de2c, Func Offset: 0x9c
	// Line 1704, Address: 0x102de4c, Func Offset: 0xbc
	// Line 1705, Address: 0x102de68, Func Offset: 0xd8
	// Line 1706, Address: 0x102de70, Func Offset: 0xe0
	// Line 1707, Address: 0x102de90, Func Offset: 0x100
	// Line 1710, Address: 0x102deac, Func Offset: 0x11c
	// Line 1711, Address: 0x102deb4, Func Offset: 0x124
	// Line 1712, Address: 0x102debc, Func Offset: 0x12c
	// Line 1713, Address: 0x102dec8, Func Offset: 0x138
	// Line 1714, Address: 0x102dee0, Func Offset: 0x150
	// Line 1715, Address: 0x102dee8, Func Offset: 0x158
	// Line 1720, Address: 0x102def8, Func Offset: 0x168
	// Line 1723, Address: 0x102df04, Func Offset: 0x174
	// Line 1724, Address: 0x102df0c, Func Offset: 0x17c
	// Line 1725, Address: 0x102df10, Func Offset: 0x180
	// Func End, Address: 0x102df2c, Func Offset: 0x19c
}

// 
// Start address: 0x102df30
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1739, Address: 0x102df30, Func Offset: 0
	// Line 1746, Address: 0x102df4c, Func Offset: 0x1c
	// Line 1747, Address: 0x102df50, Func Offset: 0x20
	// Line 1748, Address: 0x102df58, Func Offset: 0x28
	// Line 1749, Address: 0x102df7c, Func Offset: 0x4c
	// Line 1750, Address: 0x102df88, Func Offset: 0x58
	// Line 1751, Address: 0x102dfa0, Func Offset: 0x70
	// Line 1752, Address: 0x102dfb4, Func Offset: 0x84
	// Line 1757, Address: 0x102dfcc, Func Offset: 0x9c
	// Func End, Address: 0x102dfe4, Func Offset: 0xb4
}

// 
// Start address: 0x102dff0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1771, Address: 0x102dff0, Func Offset: 0
	// Line 1772, Address: 0x102dffc, Func Offset: 0xc
	// Line 1773, Address: 0x102e028, Func Offset: 0x38
	// Line 1774, Address: 0x102e074, Func Offset: 0x84
	// Line 1775, Address: 0x102e0a0, Func Offset: 0xb0
	// Line 1777, Address: 0x102e0ec, Func Offset: 0xfc
	// Line 1783, Address: 0x102e0f8, Func Offset: 0x108
	// Line 1784, Address: 0x102e0fc, Func Offset: 0x10c
	// Func End, Address: 0x102e108, Func Offset: 0x118
}

// 
// Start address: 0x102e110
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1801, Address: 0x102e110, Func Offset: 0
	// Line 1802, Address: 0x102e12c, Func Offset: 0x1c
	// Line 1804, Address: 0x102e148, Func Offset: 0x38
	// Func End, Address: 0x102e158, Func Offset: 0x48
}

// 
// Start address: 0x102e160
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1806, Address: 0x102e160, Func Offset: 0
	// Line 1807, Address: 0x102e17c, Func Offset: 0x1c
	// Line 1808, Address: 0x102e180, Func Offset: 0x20
	// Line 1810, Address: 0x102e19c, Func Offset: 0x3c
	// Func End, Address: 0x102e1ac, Func Offset: 0x4c
}

// 
// Start address: 0x102e1b0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1812, Address: 0x102e1b0, Func Offset: 0
	// Line 1813, Address: 0x102e1c4, Func Offset: 0x14
	// Line 1815, Address: 0x102e1e0, Func Offset: 0x30
	// Func End, Address: 0x102e1f0, Func Offset: 0x40
}

// 
// Start address: 0x102e1f0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1817, Address: 0x102e1f0, Func Offset: 0
	// Line 1818, Address: 0x102e20c, Func Offset: 0x1c
	// Line 1820, Address: 0x102e228, Func Offset: 0x38
	// Func End, Address: 0x102e238, Func Offset: 0x48
}

// 
// Start address: 0x102e240
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1822, Address: 0x102e240, Func Offset: 0
	// Line 1823, Address: 0x102e258, Func Offset: 0x18
	// Line 1824, Address: 0x102e268, Func Offset: 0x28
	// Line 1825, Address: 0x102e278, Func Offset: 0x38
	// Line 1826, Address: 0x102e284, Func Offset: 0x44
	// Line 1828, Address: 0x102e290, Func Offset: 0x50
	// Line 1829, Address: 0x102e2bc, Func Offset: 0x7c
	// Line 1832, Address: 0x102e2e8, Func Offset: 0xa8
	// Func End, Address: 0x102e2f4, Func Offset: 0xb4
}

// 
// Start address: 0x102e300
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1848, Address: 0x102e300, Func Offset: 0
	// Line 1855, Address: 0x102e318, Func Offset: 0x18
	// Line 1856, Address: 0x102e324, Func Offset: 0x24
	// Line 1857, Address: 0x102e330, Func Offset: 0x30
	// Line 1858, Address: 0x102e338, Func Offset: 0x38
	// Line 1859, Address: 0x102e33c, Func Offset: 0x3c
	// Line 1863, Address: 0x102e354, Func Offset: 0x54
	// Line 1864, Address: 0x102e35c, Func Offset: 0x5c
	// Line 1865, Address: 0x102e360, Func Offset: 0x60
	// Line 1867, Address: 0x102e370, Func Offset: 0x70
	// Func End, Address: 0x102e390, Func Offset: 0x90
}

// 
// Start address: 0x102e390
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1870, Address: 0x102e390, Func Offset: 0
	// Line 1871, Address: 0x102e3a8, Func Offset: 0x18
	// Line 1872, Address: 0x102e3c8, Func Offset: 0x38
	// Func End, Address: 0x102e3d8, Func Offset: 0x48
}

// 
// Start address: 0x102e3e0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1877, Address: 0x102e3e0, Func Offset: 0
	// Line 1881, Address: 0x102e400, Func Offset: 0x20
	// Line 1884, Address: 0x102e41c, Func Offset: 0x3c
	// Line 1888, Address: 0x102e444, Func Offset: 0x64
	// Line 1889, Address: 0x102e450, Func Offset: 0x70
	// Line 1891, Address: 0x102e478, Func Offset: 0x98
	// Func End, Address: 0x102e488, Func Offset: 0xa8
}

// 
// Start address: 0x102e490
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1897, Address: 0x102e490, Func Offset: 0
	// Line 1900, Address: 0x102e4ac, Func Offset: 0x1c
	// Line 1901, Address: 0x102e4b4, Func Offset: 0x24
	// Line 1904, Address: 0x102e4bc, Func Offset: 0x2c
	// Line 1906, Address: 0x102e4e0, Func Offset: 0x50
	// Line 1907, Address: 0x102e500, Func Offset: 0x70
	// Line 1908, Address: 0x102e508, Func Offset: 0x78
	// Line 1909, Address: 0x102e52c, Func Offset: 0x9c
	// Func End, Address: 0x102e548, Func Offset: 0xb8
}

// 
// Start address: 0x102e550
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1935, Address: 0x102e550, Func Offset: 0
	// Line 1940, Address: 0x102e578, Func Offset: 0x28
	// Line 1941, Address: 0x102e588, Func Offset: 0x38
	// Line 1943, Address: 0x102e5a4, Func Offset: 0x54
	// Line 1944, Address: 0x102e5c8, Func Offset: 0x78
	// Line 1945, Address: 0x102e5f0, Func Offset: 0xa0
	// Line 1946, Address: 0x102e5fc, Func Offset: 0xac
	// Line 1947, Address: 0x102e604, Func Offset: 0xb4
	// Line 1950, Address: 0x102e620, Func Offset: 0xd0
	// Line 1954, Address: 0x102e648, Func Offset: 0xf8
	// Line 1957, Address: 0x102e650, Func Offset: 0x100
	// Line 1958, Address: 0x102e654, Func Offset: 0x104
	// Line 1962, Address: 0x102e670, Func Offset: 0x120
	// Line 1969, Address: 0x102e698, Func Offset: 0x148
	// Func End, Address: 0x102e6b4, Func Offset: 0x164
}

// 
// Start address: 0x102e6c0
void mapinit()
{
	// Line 1980, Address: 0x102e6c0, Func Offset: 0
	// Line 1982, Address: 0x102e6c8, Func Offset: 0x8
	// Line 1983, Address: 0x102e6dc, Func Offset: 0x1c
	// Line 1985, Address: 0x102e6f0, Func Offset: 0x30
	// Line 1986, Address: 0x102e708, Func Offset: 0x48
	// Line 1987, Address: 0x102e728, Func Offset: 0x68
	// Func End, Address: 0x102e738, Func Offset: 0x78
}

// 
// Start address: 0x102e740
void mapset()
{
	// Line 1992, Address: 0x102e740, Func Offset: 0
	// Func End, Address: 0x102e748, Func Offset: 0x8
}

// 
// Start address: 0x102e750
void divdevset()
{
	// Line 1996, Address: 0x102e750, Func Offset: 0
	// Func End, Address: 0x102e758, Func Offset: 0x8
}

// 
// Start address: 0x102e760
void enecginit()
{
	// Line 2000, Address: 0x102e760, Func Offset: 0
	// Func End, Address: 0x102e768, Func Offset: 0x8
}

