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

typedef int(*type_8)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned char type_2[4];
typedef short type_3[2];
typedef short type_4[2][8];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef char type_7[5];
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
// Start address: 0x101db60
_anon1* main_chk()
{
	// Line 146, Address: 0x101db60, Func Offset: 0
	// Line 147, Address: 0x101db74, Func Offset: 0x14
	// Line 149, Address: 0x101db84, Func Offset: 0x24
	// Line 151, Address: 0x101db8c, Func Offset: 0x2c
	// Func End, Address: 0x101db94, Func Offset: 0x34
}

// 
// Start address: 0x101dba0
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x101dba0, Func Offset: 0
	// Line 192, Address: 0x101dbac, Func Offset: 0xc
	// Line 193, Address: 0x101dbc0, Func Offset: 0x20
	// Line 194, Address: 0x101dbd4, Func Offset: 0x34
	// Line 196, Address: 0x101dbdc, Func Offset: 0x3c
	// Line 197, Address: 0x101dbe4, Func Offset: 0x44
	// Line 198, Address: 0x101dbf0, Func Offset: 0x50
	// Line 199, Address: 0x101dbf4, Func Offset: 0x54
	// Line 200, Address: 0x101dc08, Func Offset: 0x68
	// Line 201, Address: 0x101dc0c, Func Offset: 0x6c
	// Line 202, Address: 0x101dc20, Func Offset: 0x80
	// Line 203, Address: 0x101dc24, Func Offset: 0x84
	// Line 204, Address: 0x101dc38, Func Offset: 0x98
	// Line 205, Address: 0x101dc3c, Func Offset: 0x9c
	// Line 206, Address: 0x101dc50, Func Offset: 0xb0
	// Line 207, Address: 0x101dc70, Func Offset: 0xd0
	// Line 208, Address: 0x101dc74, Func Offset: 0xd4
	// Line 209, Address: 0x101dc80, Func Offset: 0xe0
	// Line 211, Address: 0x101dc8c, Func Offset: 0xec
	// Line 212, Address: 0x101dc98, Func Offset: 0xf8
	// Line 214, Address: 0x101dca4, Func Offset: 0x104
	// Line 215, Address: 0x101dcac, Func Offset: 0x10c
	// Func End, Address: 0x101dcc0, Func Offset: 0x120
}

// 
// Start address: 0x101dcc0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x101dcc0, Func Offset: 0
	// Line 267, Address: 0x101dcd4, Func Offset: 0x14
	// Line 268, Address: 0x101dce4, Func Offset: 0x24
	// Line 269, Address: 0x101dcec, Func Offset: 0x2c
	// Line 271, Address: 0x101dcfc, Func Offset: 0x3c
	// Line 272, Address: 0x101dd14, Func Offset: 0x54
	// Line 273, Address: 0x101dd24, Func Offset: 0x64
	// Line 274, Address: 0x101dd2c, Func Offset: 0x6c
	// Line 276, Address: 0x101dd30, Func Offset: 0x70
	// Line 278, Address: 0x101dd38, Func Offset: 0x78
	// Line 279, Address: 0x101dd58, Func Offset: 0x98
	// Line 280, Address: 0x101dd7c, Func Offset: 0xbc
	// Line 282, Address: 0x101dd84, Func Offset: 0xc4
	// Line 286, Address: 0x101dda4, Func Offset: 0xe4
	// Line 287, Address: 0x101ddb8, Func Offset: 0xf8
	// Line 291, Address: 0x101ddcc, Func Offset: 0x10c
	// Line 292, Address: 0x101dde0, Func Offset: 0x120
	// Line 293, Address: 0x101ddec, Func Offset: 0x12c
	// Line 294, Address: 0x101ddf4, Func Offset: 0x134
	// Line 298, Address: 0x101ddf8, Func Offset: 0x138
	// Line 299, Address: 0x101de1c, Func Offset: 0x15c
	// Line 303, Address: 0x101de2c, Func Offset: 0x16c
	// Line 305, Address: 0x101de34, Func Offset: 0x174
	// Line 306, Address: 0x101de48, Func Offset: 0x188
	// Line 307, Address: 0x101de54, Func Offset: 0x194
	// Line 308, Address: 0x101de5c, Func Offset: 0x19c
	// Line 312, Address: 0x101de60, Func Offset: 0x1a0
	// Line 313, Address: 0x101de84, Func Offset: 0x1c4
	// Line 317, Address: 0x101de94, Func Offset: 0x1d4
	// Line 319, Address: 0x101de9c, Func Offset: 0x1dc
	// Line 322, Address: 0x101deac, Func Offset: 0x1ec
	// Line 323, Address: 0x101debc, Func Offset: 0x1fc
	// Line 324, Address: 0x101decc, Func Offset: 0x20c
	// Line 325, Address: 0x101dedc, Func Offset: 0x21c
	// Line 326, Address: 0x101deec, Func Offset: 0x22c
	// Func End, Address: 0x101df08, Func Offset: 0x248
}

// 
// Start address: 0x101df10
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x101df10, Func Offset: 0
	// Line 350, Address: 0x101df1c, Func Offset: 0xc
	// Line 351, Address: 0x101df24, Func Offset: 0x14
	// Line 353, Address: 0x101df28, Func Offset: 0x18
	// Line 354, Address: 0x101df34, Func Offset: 0x24
	// Line 355, Address: 0x101df40, Func Offset: 0x30
	// Line 356, Address: 0x101df4c, Func Offset: 0x3c
	// Line 358, Address: 0x101df58, Func Offset: 0x48
	// Line 359, Address: 0x101df74, Func Offset: 0x64
	// Line 361, Address: 0x101df80, Func Offset: 0x70
	// Line 362, Address: 0x101df9c, Func Offset: 0x8c
	// Line 364, Address: 0x101dfa8, Func Offset: 0x98
	// Line 365, Address: 0x101dfc4, Func Offset: 0xb4
	// Line 366, Address: 0x101dfe8, Func Offset: 0xd8
	// Func End, Address: 0x101dff4, Func Offset: 0xe4
}

// 
// Start address: 0x101e000
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
	// Line 382, Address: 0x101e000, Func Offset: 0
	// Line 394, Address: 0x101e01c, Func Offset: 0x1c
	// Line 399, Address: 0x101e02c, Func Offset: 0x2c
	// Line 401, Address: 0x101e058, Func Offset: 0x58
	// Line 403, Address: 0x101e060, Func Offset: 0x60
	// Line 404, Address: 0x101e068, Func Offset: 0x68
	// Line 406, Address: 0x101e070, Func Offset: 0x70
	// Line 407, Address: 0x101e080, Func Offset: 0x80
	// Line 410, Address: 0x101e090, Func Offset: 0x90
	// Line 411, Address: 0x101e0a4, Func Offset: 0xa4
	// Line 413, Address: 0x101e0b4, Func Offset: 0xb4
	// Line 414, Address: 0x101e0c8, Func Offset: 0xc8
	// Line 416, Address: 0x101e0d8, Func Offset: 0xd8
	// Line 417, Address: 0x101e0f4, Func Offset: 0xf4
	// Line 419, Address: 0x101e104, Func Offset: 0x104
	// Line 422, Address: 0x101e118, Func Offset: 0x118
	// Line 424, Address: 0x101e128, Func Offset: 0x128
	// Line 426, Address: 0x101e150, Func Offset: 0x150
	// Line 427, Address: 0x101e188, Func Offset: 0x188
	// Line 429, Address: 0x101e19c, Func Offset: 0x19c
	// Line 431, Address: 0x101e1a8, Func Offset: 0x1a8
	// Line 433, Address: 0x101e1b4, Func Offset: 0x1b4
	// Line 434, Address: 0x101e1d4, Func Offset: 0x1d4
	// Line 436, Address: 0x101e1e0, Func Offset: 0x1e0
	// Line 437, Address: 0x101e1f4, Func Offset: 0x1f4
	// Line 439, Address: 0x101e204, Func Offset: 0x204
	// Line 440, Address: 0x101e224, Func Offset: 0x224
	// Line 442, Address: 0x101e230, Func Offset: 0x230
	// Line 443, Address: 0x101e244, Func Offset: 0x244
	// Line 445, Address: 0x101e254, Func Offset: 0x254
	// Line 447, Address: 0x101e260, Func Offset: 0x260
	// Line 448, Address: 0x101e280, Func Offset: 0x280
	// Line 450, Address: 0x101e28c, Func Offset: 0x28c
	// Line 451, Address: 0x101e2a0, Func Offset: 0x2a0
	// Line 453, Address: 0x101e2b0, Func Offset: 0x2b0
	// Line 454, Address: 0x101e2d0, Func Offset: 0x2d0
	// Line 456, Address: 0x101e2dc, Func Offset: 0x2dc
	// Line 457, Address: 0x101e2f0, Func Offset: 0x2f0
	// Line 459, Address: 0x101e300, Func Offset: 0x300
	// Line 460, Address: 0x101e30c, Func Offset: 0x30c
	// Line 461, Address: 0x101e33c, Func Offset: 0x33c
	// Line 462, Address: 0x101e36c, Func Offset: 0x36c
	// Line 463, Address: 0x101e388, Func Offset: 0x388
	// Func End, Address: 0x101e3ac, Func Offset: 0x3ac
}

// 
// Start address: 0x101e3b0
void z81aline(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon2 ldwk;
	short wk;
	char z81ascrtbl[5];
	// Line 477, Address: 0x101e3b0, Func Offset: 0
	// Line 486, Address: 0x101e3c8, Func Offset: 0x18
	// Line 487, Address: 0x101e3ec, Func Offset: 0x3c
	// Line 488, Address: 0x101e40c, Func Offset: 0x5c
	// Line 489, Address: 0x101e42c, Func Offset: 0x7c
	// Line 490, Address: 0x101e438, Func Offset: 0x88
	// Line 492, Address: 0x101e44c, Func Offset: 0x9c
	// Line 494, Address: 0x101e458, Func Offset: 0xa8
	// Line 496, Address: 0x101e478, Func Offset: 0xc8
	// Line 498, Address: 0x101e498, Func Offset: 0xe8
	// Line 499, Address: 0x101e4ac, Func Offset: 0xfc
	// Line 500, Address: 0x101e4b8, Func Offset: 0x108
	// Line 502, Address: 0x101e4c4, Func Offset: 0x114
	// Line 503, Address: 0x101e4e8, Func Offset: 0x138
	// Line 504, Address: 0x101e4f4, Func Offset: 0x144
	// Line 505, Address: 0x101e518, Func Offset: 0x168
	// Line 507, Address: 0x101e524, Func Offset: 0x174
	// Line 508, Address: 0x101e538, Func Offset: 0x188
	// Func End, Address: 0x101e554, Func Offset: 0x1a4
}

// 
// Start address: 0x101e560
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 529, Address: 0x101e560, Func Offset: 0
	// Line 533, Address: 0x101e57c, Func Offset: 0x1c
	// Line 534, Address: 0x101e580, Func Offset: 0x20
	// Line 536, Address: 0x101e5a0, Func Offset: 0x40
	// Line 537, Address: 0x101e5bc, Func Offset: 0x5c
	// Line 538, Address: 0x101e5c8, Func Offset: 0x68
	// Line 540, Address: 0x101e5d4, Func Offset: 0x74
	// Line 541, Address: 0x101e5dc, Func Offset: 0x7c
	// Line 542, Address: 0x101e5ec, Func Offset: 0x8c
	// Line 543, Address: 0x101e610, Func Offset: 0xb0
	// Line 544, Address: 0x101e630, Func Offset: 0xd0
	// Func End, Address: 0x101e644, Func Offset: 0xe4
}

// 
// Start address: 0x101e650
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 650, Address: 0x101e650, Func Offset: 0
	// Line 653, Address: 0x101e660, Func Offset: 0x10
	// Line 654, Address: 0x101e670, Func Offset: 0x20
	// Line 655, Address: 0x101e67c, Func Offset: 0x2c
	// Line 657, Address: 0x101e6b4, Func Offset: 0x64
	// Line 658, Address: 0x101e6bc, Func Offset: 0x6c
	// Line 659, Address: 0x101e6d0, Func Offset: 0x80
	// Line 660, Address: 0x101e6f0, Func Offset: 0xa0
	// Line 661, Address: 0x101e704, Func Offset: 0xb4
	// Line 663, Address: 0x101e70c, Func Offset: 0xbc
	// Line 668, Address: 0x101e720, Func Offset: 0xd0
	// Func End, Address: 0x101e734, Func Offset: 0xe4
}

// 
// Start address: 0x101e740
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 686, Address: 0x101e740, Func Offset: 0
	// Line 690, Address: 0x101e754, Func Offset: 0x14
	// Line 691, Address: 0x101e75c, Func Offset: 0x1c
	// Line 692, Address: 0x101e764, Func Offset: 0x24
	// Line 693, Address: 0x101e76c, Func Offset: 0x2c
	// Line 694, Address: 0x101e770, Func Offset: 0x30
	// Line 695, Address: 0x101e794, Func Offset: 0x54
	// Line 696, Address: 0x101e7a0, Func Offset: 0x60
	// Line 698, Address: 0x101e7bc, Func Offset: 0x7c
	// Line 699, Address: 0x101e7c8, Func Offset: 0x88
	// Line 700, Address: 0x101e7dc, Func Offset: 0x9c
	// Line 701, Address: 0x101e7e8, Func Offset: 0xa8
	// Line 702, Address: 0x101e80c, Func Offset: 0xcc
	// Line 704, Address: 0x101e814, Func Offset: 0xd4
	// Line 709, Address: 0x101e83c, Func Offset: 0xfc
	// Func End, Address: 0x101e850, Func Offset: 0x110
}

// 
// Start address: 0x101e850
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 727, Address: 0x101e850, Func Offset: 0
	// Line 731, Address: 0x101e864, Func Offset: 0x14
	// Line 732, Address: 0x101e86c, Func Offset: 0x1c
	// Line 733, Address: 0x101e874, Func Offset: 0x24
	// Line 734, Address: 0x101e87c, Func Offset: 0x2c
	// Line 735, Address: 0x101e880, Func Offset: 0x30
	// Line 736, Address: 0x101e8a4, Func Offset: 0x54
	// Line 737, Address: 0x101e8b0, Func Offset: 0x60
	// Line 739, Address: 0x101e8cc, Func Offset: 0x7c
	// Line 740, Address: 0x101e8d8, Func Offset: 0x88
	// Line 741, Address: 0x101e8ec, Func Offset: 0x9c
	// Line 742, Address: 0x101e8f8, Func Offset: 0xa8
	// Line 743, Address: 0x101e91c, Func Offset: 0xcc
	// Line 745, Address: 0x101e924, Func Offset: 0xd4
	// Line 750, Address: 0x101e94c, Func Offset: 0xfc
	// Func End, Address: 0x101e960, Func Offset: 0x110
}

// 
// Start address: 0x101e960
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 768, Address: 0x101e960, Func Offset: 0
	// Line 772, Address: 0x101e974, Func Offset: 0x14
	// Line 773, Address: 0x101e97c, Func Offset: 0x1c
	// Line 774, Address: 0x101e984, Func Offset: 0x24
	// Line 775, Address: 0x101e98c, Func Offset: 0x2c
	// Line 776, Address: 0x101e990, Func Offset: 0x30
	// Line 777, Address: 0x101e9b4, Func Offset: 0x54
	// Line 778, Address: 0x101e9c0, Func Offset: 0x60
	// Line 780, Address: 0x101e9dc, Func Offset: 0x7c
	// Line 781, Address: 0x101e9e8, Func Offset: 0x88
	// Line 782, Address: 0x101e9fc, Func Offset: 0x9c
	// Line 783, Address: 0x101ea08, Func Offset: 0xa8
	// Line 784, Address: 0x101ea2c, Func Offset: 0xcc
	// Line 786, Address: 0x101ea34, Func Offset: 0xd4
	// Line 791, Address: 0x101ea5c, Func Offset: 0xfc
	// Func End, Address: 0x101ea70, Func Offset: 0x110
}

// 
// Start address: 0x101ea70
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 806, Address: 0x101ea70, Func Offset: 0
	// Line 810, Address: 0x101ea80, Func Offset: 0x10
	// Line 812, Address: 0x101ea90, Func Offset: 0x20
	// Line 813, Address: 0x101ea98, Func Offset: 0x28
	// Line 814, Address: 0x101eacc, Func Offset: 0x5c
	// Line 815, Address: 0x101ead4, Func Offset: 0x64
	// Line 816, Address: 0x101eae8, Func Offset: 0x78
	// Line 817, Address: 0x101eb0c, Func Offset: 0x9c
	// Line 818, Address: 0x101eb20, Func Offset: 0xb0
	// Line 819, Address: 0x101eb28, Func Offset: 0xb8
	// Line 824, Address: 0x101eb3c, Func Offset: 0xcc
	// Func End, Address: 0x101eb54, Func Offset: 0xe4
}

// 
// Start address: 0x101eb60
void scrh_move()
{
	short xwk;
	// Line 841, Address: 0x101eb60, Func Offset: 0
	// Line 844, Address: 0x101eb68, Func Offset: 0x8
	// Line 845, Address: 0x101ebb0, Func Offset: 0x50
	// Line 847, Address: 0x101ebc0, Func Offset: 0x60
	// Line 848, Address: 0x101ebc8, Func Offset: 0x68
	// Line 849, Address: 0x101ebd0, Func Offset: 0x70
	// Line 851, Address: 0x101ebe0, Func Offset: 0x80
	// Line 852, Address: 0x101ebf4, Func Offset: 0x94
	// Line 856, Address: 0x101ec00, Func Offset: 0xa0
	// Line 857, Address: 0x101ec14, Func Offset: 0xb4
	// Line 858, Address: 0x101ec38, Func Offset: 0xd8
	// Line 860, Address: 0x101ec48, Func Offset: 0xe8
	// Line 862, Address: 0x101ec50, Func Offset: 0xf0
	// Line 863, Address: 0x101ec64, Func Offset: 0x104
	// Line 867, Address: 0x101ec70, Func Offset: 0x110
	// Line 868, Address: 0x101ec84, Func Offset: 0x124
	// Line 869, Address: 0x101eca8, Func Offset: 0x148
	// Line 874, Address: 0x101ecb8, Func Offset: 0x158
	// Line 875, Address: 0x101ece8, Func Offset: 0x188
	// Line 876, Address: 0x101ecf0, Func Offset: 0x190
	// Func End, Address: 0x101ed00, Func Offset: 0x1a0
}

// 
// Start address: 0x101ed00
void scroll_v()
{
	short ywk;
	// Line 891, Address: 0x101ed00, Func Offset: 0
	// Line 894, Address: 0x101ed0c, Func Offset: 0xc
	// Line 895, Address: 0x101ed40, Func Offset: 0x40
	// Line 896, Address: 0x101ed58, Func Offset: 0x58
	// Line 900, Address: 0x101ed64, Func Offset: 0x64
	// Line 901, Address: 0x101ed7c, Func Offset: 0x7c
	// Line 902, Address: 0x101ed88, Func Offset: 0x88
	// Line 903, Address: 0x101edac, Func Offset: 0xac
	// Line 904, Address: 0x101edc0, Func Offset: 0xc0
	// Line 905, Address: 0x101edcc, Func Offset: 0xcc
	// Line 906, Address: 0x101edd4, Func Offset: 0xd4
	// Line 907, Address: 0x101edfc, Func Offset: 0xfc
	// Line 908, Address: 0x101ee24, Func Offset: 0x124
	// Line 909, Address: 0x101ee30, Func Offset: 0x130
	// Line 911, Address: 0x101ee38, Func Offset: 0x138
	// Line 912, Address: 0x101ee60, Func Offset: 0x160
	// Line 913, Address: 0x101ee70, Func Offset: 0x170
	// Line 914, Address: 0x101ee78, Func Offset: 0x178
	// Line 919, Address: 0x101ee80, Func Offset: 0x180
	// Line 920, Address: 0x101eeac, Func Offset: 0x1ac
	// Line 921, Address: 0x101eeb8, Func Offset: 0x1b8
	// Line 922, Address: 0x101eec0, Func Offset: 0x1c0
	// Line 923, Address: 0x101eed0, Func Offset: 0x1d0
	// Line 924, Address: 0x101eed8, Func Offset: 0x1d8
	// Line 929, Address: 0x101eee0, Func Offset: 0x1e0
	// Line 930, Address: 0x101eee8, Func Offset: 0x1e8
	// Func End, Address: 0x101eefc, Func Offset: 0x1fc
}

// 
// Start address: 0x101ef00
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 944, Address: 0x101ef00, Func Offset: 0
	// Line 947, Address: 0x101ef10, Func Offset: 0x10
	// Line 948, Address: 0x101ef2c, Func Offset: 0x2c
	// Line 949, Address: 0x101ef44, Func Offset: 0x44
	// Line 950, Address: 0x101ef68, Func Offset: 0x68
	// Line 951, Address: 0x101ef70, Func Offset: 0x70
	// Line 955, Address: 0x101ef80, Func Offset: 0x80
	// Line 956, Address: 0x101ef94, Func Offset: 0x94
	// Line 957, Address: 0x101efa0, Func Offset: 0xa0
	// Line 960, Address: 0x101efa8, Func Offset: 0xa8
	// Line 961, Address: 0x101efc0, Func Offset: 0xc0
	// Line 962, Address: 0x101efcc, Func Offset: 0xcc
	// Line 963, Address: 0x101efec, Func Offset: 0xec
	// Line 964, Address: 0x101eff8, Func Offset: 0xf8
	// Line 965, Address: 0x101f000, Func Offset: 0x100
	// Line 967, Address: 0x101f00c, Func Offset: 0x10c
	// Line 969, Address: 0x101f014, Func Offset: 0x114
	// Line 970, Address: 0x101f02c, Func Offset: 0x12c
	// Line 971, Address: 0x101f038, Func Offset: 0x138
	// Line 972, Address: 0x101f058, Func Offset: 0x158
	// Line 973, Address: 0x101f064, Func Offset: 0x164
	// Line 974, Address: 0x101f06c, Func Offset: 0x16c
	// Line 977, Address: 0x101f078, Func Offset: 0x178
	// Func End, Address: 0x101f08c, Func Offset: 0x18c
}

// 
// Start address: 0x101f090
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 991, Address: 0x101f090, Func Offset: 0
	// Line 994, Address: 0x101f0a0, Func Offset: 0x10
	// Line 996, Address: 0x101f0ac, Func Offset: 0x1c
	// Line 997, Address: 0x101f0c4, Func Offset: 0x34
	// Line 998, Address: 0x101f0d0, Func Offset: 0x40
	// Line 999, Address: 0x101f0f0, Func Offset: 0x60
	// Line 1000, Address: 0x101f0fc, Func Offset: 0x6c
	// Line 1001, Address: 0x101f104, Func Offset: 0x74
	// Line 1003, Address: 0x101f110, Func Offset: 0x80
	// Func End, Address: 0x101f124, Func Offset: 0x94
}

// 
// Start address: 0x101f130
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1018, Address: 0x101f130, Func Offset: 0
	// Line 1021, Address: 0x101f13c, Func Offset: 0xc
	// Line 1022, Address: 0x101f140, Func Offset: 0x10
	// Line 1023, Address: 0x101f16c, Func Offset: 0x3c
	// Line 1024, Address: 0x101f180, Func Offset: 0x50
	// Line 1025, Address: 0x101f18c, Func Offset: 0x5c
	// Line 1026, Address: 0x101f194, Func Offset: 0x64
	// Line 1028, Address: 0x101f1a0, Func Offset: 0x70
	// Func End, Address: 0x101f1b0, Func Offset: 0x80
}

// 
// Start address: 0x101f1b0
void sv_move_sub2()
{
	// Line 1032, Address: 0x101f1b0, Func Offset: 0
	// Line 1033, Address: 0x101f1b8, Func Offset: 0x8
	// Line 1035, Address: 0x101f1c0, Func Offset: 0x10
	// Line 1036, Address: 0x101f1cc, Func Offset: 0x1c
	// Func End, Address: 0x101f1dc, Func Offset: 0x2c
}

// 
// Start address: 0x101f1e0
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1050, Address: 0x101f1e0, Func Offset: 0
	// Line 1053, Address: 0x101f1ec, Func Offset: 0xc
	// Line 1054, Address: 0x101f210, Func Offset: 0x30
	// Line 1055, Address: 0x101f234, Func Offset: 0x54
	// Line 1056, Address: 0x101f240, Func Offset: 0x60
	// Func End, Address: 0x101f250, Func Offset: 0x70
}

// 
// Start address: 0x101f250
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1071, Address: 0x101f250, Func Offset: 0
	// Line 1072, Address: 0x101f25c, Func Offset: 0xc
	// Line 1073, Address: 0x101f284, Func Offset: 0x34
	// Line 1075, Address: 0x101f29c, Func Offset: 0x4c
	// Line 1076, Address: 0x101f2a8, Func Offset: 0x58
	// Line 1077, Address: 0x101f2b0, Func Offset: 0x60
	// Line 1078, Address: 0x101f2bc, Func Offset: 0x6c
	// Line 1079, Address: 0x101f2d0, Func Offset: 0x80
	// Line 1080, Address: 0x101f2e4, Func Offset: 0x94
	// Line 1084, Address: 0x101f2f8, Func Offset: 0xa8
	// Line 1085, Address: 0x101f304, Func Offset: 0xb4
	// Func End, Address: 0x101f314, Func Offset: 0xc4
}

// 
// Start address: 0x101f320
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1099, Address: 0x101f320, Func Offset: 0
	// Line 1102, Address: 0x101f32c, Func Offset: 0xc
	// Line 1103, Address: 0x101f34c, Func Offset: 0x2c
	// Line 1104, Address: 0x101f370, Func Offset: 0x50
	// Line 1105, Address: 0x101f37c, Func Offset: 0x5c
	// Func End, Address: 0x101f38c, Func Offset: 0x6c
}

// 
// Start address: 0x101f390
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1120, Address: 0x101f390, Func Offset: 0
	// Line 1121, Address: 0x101f39c, Func Offset: 0xc
	// Line 1122, Address: 0x101f3c4, Func Offset: 0x34
	// Line 1124, Address: 0x101f3dc, Func Offset: 0x4c
	// Line 1125, Address: 0x101f3e8, Func Offset: 0x58
	// Line 1126, Address: 0x101f3f0, Func Offset: 0x60
	// Line 1127, Address: 0x101f3fc, Func Offset: 0x6c
	// Line 1128, Address: 0x101f410, Func Offset: 0x80
	// Line 1129, Address: 0x101f424, Func Offset: 0x94
	// Line 1133, Address: 0x101f438, Func Offset: 0xa8
	// Line 1134, Address: 0x101f444, Func Offset: 0xb4
	// Func End, Address: 0x101f454, Func Offset: 0xc4
}

// 
// Start address: 0x101f460
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1151, Address: 0x101f460, Func Offset: 0
	// Line 1155, Address: 0x101f470, Func Offset: 0x10
	// Line 1156, Address: 0x101f480, Func Offset: 0x20
	// Line 1157, Address: 0x101f4a4, Func Offset: 0x44
	// Line 1158, Address: 0x101f4b8, Func Offset: 0x58
	// Line 1159, Address: 0x101f4d0, Func Offset: 0x70
	// Line 1161, Address: 0x101f4dc, Func Offset: 0x7c
	// Line 1163, Address: 0x101f4e8, Func Offset: 0x88
	// Line 1164, Address: 0x101f524, Func Offset: 0xc4
	// Line 1165, Address: 0x101f52c, Func Offset: 0xcc
	// Line 1166, Address: 0x101f540, Func Offset: 0xe0
	// Line 1167, Address: 0x101f56c, Func Offset: 0x10c
	// Line 1168, Address: 0x101f57c, Func Offset: 0x11c
	// Line 1169, Address: 0x101f590, Func Offset: 0x130
	// Line 1170, Address: 0x101f598, Func Offset: 0x138
	// Line 1175, Address: 0x101f5ac, Func Offset: 0x14c
	// Func End, Address: 0x101f5c0, Func Offset: 0x160
}

// 
// Start address: 0x101f5c0
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
	// Line 1193, Address: 0x101f5c0, Func Offset: 0
	// Line 1202, Address: 0x101f5e0, Func Offset: 0x20
	// Line 1203, Address: 0x101f5e4, Func Offset: 0x24
	// Line 1204, Address: 0x101f5f0, Func Offset: 0x30
	// Line 1205, Address: 0x101f5fc, Func Offset: 0x3c
	// Line 1206, Address: 0x101f604, Func Offset: 0x44
	// Line 1207, Address: 0x101f60c, Func Offset: 0x4c
	// Line 1209, Address: 0x101f620, Func Offset: 0x60
	// Line 1210, Address: 0x101f624, Func Offset: 0x64
	// Line 1211, Address: 0x101f630, Func Offset: 0x70
	// Line 1212, Address: 0x101f63c, Func Offset: 0x7c
	// Line 1213, Address: 0x101f644, Func Offset: 0x84
	// Line 1215, Address: 0x101f64c, Func Offset: 0x8c
	// Line 1216, Address: 0x101f658, Func Offset: 0x98
	// Line 1217, Address: 0x101f66c, Func Offset: 0xac
	// Line 1219, Address: 0x101f678, Func Offset: 0xb8
	// Line 1220, Address: 0x101f680, Func Offset: 0xc0
	// Line 1222, Address: 0x101f688, Func Offset: 0xc8
	// Line 1224, Address: 0x101f6a8, Func Offset: 0xe8
	// Line 1230, Address: 0x101f6d4, Func Offset: 0x114
	// Line 1231, Address: 0x101f6e8, Func Offset: 0x128
	// Line 1233, Address: 0x101f6f4, Func Offset: 0x134
	// Line 1234, Address: 0x101f6fc, Func Offset: 0x13c
	// Line 1235, Address: 0x101f704, Func Offset: 0x144
	// Line 1237, Address: 0x101f724, Func Offset: 0x164
	// Line 1243, Address: 0x101f750, Func Offset: 0x190
	// Line 1244, Address: 0x101f764, Func Offset: 0x1a4
	// Line 1246, Address: 0x101f770, Func Offset: 0x1b0
	// Line 1247, Address: 0x101f778, Func Offset: 0x1b8
	// Line 1248, Address: 0x101f780, Func Offset: 0x1c0
	// Line 1250, Address: 0x101f7a0, Func Offset: 0x1e0
	// Line 1256, Address: 0x101f7cc, Func Offset: 0x20c
	// Line 1257, Address: 0x101f7e0, Func Offset: 0x220
	// Line 1259, Address: 0x101f7ec, Func Offset: 0x22c
	// Line 1260, Address: 0x101f7f4, Func Offset: 0x234
	// Line 1261, Address: 0x101f7fc, Func Offset: 0x23c
	// Line 1263, Address: 0x101f81c, Func Offset: 0x25c
	// Line 1272, Address: 0x101f848, Func Offset: 0x288
	// Func End, Address: 0x101f870, Func Offset: 0x2b0
}

// 
// Start address: 0x101f870
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
	// Line 1289, Address: 0x101f870, Func Offset: 0
	// Line 1300, Address: 0x101f89c, Func Offset: 0x2c
	// Line 1302, Address: 0x101f8a4, Func Offset: 0x34
	// Line 1303, Address: 0x101f8bc, Func Offset: 0x4c
	// Line 1304, Address: 0x101f8d0, Func Offset: 0x60
	// Line 1306, Address: 0x101f8d8, Func Offset: 0x68
	// Line 1308, Address: 0x101f8ec, Func Offset: 0x7c
	// Line 1309, Address: 0x101f904, Func Offset: 0x94
	// Line 1310, Address: 0x101f918, Func Offset: 0xa8
	// Line 1311, Address: 0x101f920, Func Offset: 0xb0
	// Line 1313, Address: 0x101f928, Func Offset: 0xb8
	// Line 1314, Address: 0x101f93c, Func Offset: 0xcc
	// Line 1319, Address: 0x101f944, Func Offset: 0xd4
	// Line 1320, Address: 0x101f994, Func Offset: 0x124
	// Line 1321, Address: 0x101f99c, Func Offset: 0x12c
	// Line 1327, Address: 0x101f9bc, Func Offset: 0x14c
	// Line 1328, Address: 0x101f9dc, Func Offset: 0x16c
	// Line 1329, Address: 0x101fa00, Func Offset: 0x190
	// Line 1330, Address: 0x101fa0c, Func Offset: 0x19c
	// Line 1331, Address: 0x101fa14, Func Offset: 0x1a4
	// Line 1333, Address: 0x101fa34, Func Offset: 0x1c4
	// Line 1337, Address: 0x101fa60, Func Offset: 0x1f0
	// Line 1340, Address: 0x101fa68, Func Offset: 0x1f8
	// Line 1341, Address: 0x101fa6c, Func Offset: 0x1fc
	// Line 1345, Address: 0x101fa8c, Func Offset: 0x21c
	// Line 1352, Address: 0x101fab8, Func Offset: 0x248
	// Line 1359, Address: 0x101facc, Func Offset: 0x25c
	// Line 1360, Address: 0x101fad4, Func Offset: 0x264
	// Line 1361, Address: 0x101fadc, Func Offset: 0x26c
	// Line 1362, Address: 0x101faf4, Func Offset: 0x284
	// Line 1363, Address: 0x101fb14, Func Offset: 0x2a4
	// Line 1367, Address: 0x101fb1c, Func Offset: 0x2ac
	// Line 1369, Address: 0x101fb4c, Func Offset: 0x2dc
	// Line 1370, Address: 0x101fb58, Func Offset: 0x2e8
	// Line 1374, Address: 0x101fb68, Func Offset: 0x2f8
	// Line 1375, Address: 0x101fb74, Func Offset: 0x304
	// Line 1376, Address: 0x101fb94, Func Offset: 0x324
	// Line 1377, Address: 0x101fbcc, Func Offset: 0x35c
	// Line 1378, Address: 0x101fbec, Func Offset: 0x37c
	// Line 1380, Address: 0x101fc10, Func Offset: 0x3a0
	// Line 1383, Address: 0x101fc34, Func Offset: 0x3c4
	// Line 1385, Address: 0x101fc54, Func Offset: 0x3e4
	// Line 1387, Address: 0x101fc68, Func Offset: 0x3f8
	// Line 1388, Address: 0x101fc74, Func Offset: 0x404
	// Line 1389, Address: 0x101fc84, Func Offset: 0x414
	// Line 1391, Address: 0x101fc8c, Func Offset: 0x41c
	// Func End, Address: 0x101fcb4, Func Offset: 0x444
}

// 
// Start address: 0x101fcc0
void scrollwrtc()
{
	// Line 1397, Address: 0x101fcc0, Func Offset: 0
	// Func End, Address: 0x101fcc8, Func Offset: 0x8
}

// 
// Start address: 0x101fcd0
void scrollwrtz()
{
	// Line 1402, Address: 0x101fcd0, Func Offset: 0
	// Func End, Address: 0x101fcd8, Func Offset: 0x8
}

// 
// Start address: 0x101fce0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1420, Address: 0x101fce0, Func Offset: 0
	// Line 1433, Address: 0x101fd08, Func Offset: 0x28
	// Line 1436, Address: 0x101fd28, Func Offset: 0x48
	// Line 1437, Address: 0x101fd3c, Func Offset: 0x5c
	// Line 1438, Address: 0x101fd50, Func Offset: 0x70
	// Line 1439, Address: 0x101fd64, Func Offset: 0x84
	// Line 1441, Address: 0x101fd78, Func Offset: 0x98
	// Line 1442, Address: 0x101fd84, Func Offset: 0xa4
	// Line 1443, Address: 0x101fd98, Func Offset: 0xb8
	// Func End, Address: 0x101fda8, Func Offset: 0xc8
}

// 
// Start address: 0x101fdb0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1447, Address: 0x101fdb0, Func Offset: 0
	// Line 1451, Address: 0x101fdd8, Func Offset: 0x28
	// Line 1454, Address: 0x101fdf8, Func Offset: 0x48
	// Line 1455, Address: 0x101fe0c, Func Offset: 0x5c
	// Line 1456, Address: 0x101fe20, Func Offset: 0x70
	// Line 1457, Address: 0x101fe34, Func Offset: 0x84
	// Line 1459, Address: 0x101fe48, Func Offset: 0x98
	// Line 1460, Address: 0x101fe54, Func Offset: 0xa4
	// Line 1461, Address: 0x101fe68, Func Offset: 0xb8
	// Func End, Address: 0x101fe78, Func Offset: 0xc8
}

// 
// Start address: 0x101fe80
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1481, Address: 0x101fe80, Func Offset: 0
	// Line 1485, Address: 0x101fea8, Func Offset: 0x28
	// Line 1488, Address: 0x101fec8, Func Offset: 0x48
	// Line 1489, Address: 0x101fedc, Func Offset: 0x5c
	// Line 1490, Address: 0x101feec, Func Offset: 0x6c
	// Line 1491, Address: 0x101ff00, Func Offset: 0x80
	// Line 1493, Address: 0x101ff10, Func Offset: 0x90
	// Line 1494, Address: 0x101ff1c, Func Offset: 0x9c
	// Line 1495, Address: 0x101ff30, Func Offset: 0xb0
	// Func End, Address: 0x101ff40, Func Offset: 0xc0
}

// 
// Start address: 0x101ff40
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
	// Line 1514, Address: 0x101ff40, Func Offset: 0
	// Line 1520, Address: 0x101ff74, Func Offset: 0x34
	// Line 1522, Address: 0x101ff84, Func Offset: 0x44
	// Line 1523, Address: 0x101ff88, Func Offset: 0x48
	// Line 1524, Address: 0x101ff90, Func Offset: 0x50
	// Line 1526, Address: 0x101ffa0, Func Offset: 0x60
	// Line 1528, Address: 0x101ffa4, Func Offset: 0x64
	// Line 1529, Address: 0x101ffac, Func Offset: 0x6c
	// Line 1532, Address: 0x101ffb4, Func Offset: 0x74
	// Line 1533, Address: 0x101ffbc, Func Offset: 0x7c
	// Line 1534, Address: 0x101ffc8, Func Offset: 0x88
	// Line 1536, Address: 0x101ffd4, Func Offset: 0x94
	// Line 1537, Address: 0x101ffdc, Func Offset: 0x9c
	// Line 1538, Address: 0x101ffe4, Func Offset: 0xa4
	// Line 1539, Address: 0x101ffec, Func Offset: 0xac
	// Line 1541, Address: 0x101fff8, Func Offset: 0xb8
	// Line 1542, Address: 0x1020000, Func Offset: 0xc0
	// Line 1543, Address: 0x1020008, Func Offset: 0xc8
	// Line 1544, Address: 0x1020010, Func Offset: 0xd0
	// Line 1546, Address: 0x102001c, Func Offset: 0xdc
	// Line 1547, Address: 0x1020024, Func Offset: 0xe4
	// Line 1548, Address: 0x102002c, Func Offset: 0xec
	// Line 1551, Address: 0x1020034, Func Offset: 0xf4
	// Line 1552, Address: 0x102003c, Func Offset: 0xfc
	// Line 1555, Address: 0x1020044, Func Offset: 0x104
	// Line 1556, Address: 0x1020088, Func Offset: 0x148
	// Line 1557, Address: 0x10200cc, Func Offset: 0x18c
	// Line 1558, Address: 0x1020110, Func Offset: 0x1d0
	// Line 1560, Address: 0x1020154, Func Offset: 0x214
	// Func End, Address: 0x1020184, Func Offset: 0x244
}

// 
// Start address: 0x1020190
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1578, Address: 0x1020190, Func Offset: 0
	// Line 1579, Address: 0x10201b0, Func Offset: 0x20
	// Line 1580, Address: 0x10201d0, Func Offset: 0x40
	// Func End, Address: 0x10201e0, Func Offset: 0x50
}

// 
// Start address: 0x10201e0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1582, Address: 0x10201e0, Func Offset: 0
	// Line 1583, Address: 0x1020200, Func Offset: 0x20
	// Line 1584, Address: 0x1020204, Func Offset: 0x24
	// Line 1585, Address: 0x1020224, Func Offset: 0x44
	// Func End, Address: 0x1020234, Func Offset: 0x54
}

// 
// Start address: 0x1020240
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1592, Address: 0x1020240, Func Offset: 0
	// Line 1598, Address: 0x1020270, Func Offset: 0x30
	// Line 1599, Address: 0x1020280, Func Offset: 0x40
	// Line 1605, Address: 0x1020290, Func Offset: 0x50
	// Line 1606, Address: 0x10202ac, Func Offset: 0x6c
	// Line 1607, Address: 0x10202b0, Func Offset: 0x70
	// Line 1608, Address: 0x10202cc, Func Offset: 0x8c
	// Line 1609, Address: 0x10202d0, Func Offset: 0x90
	// Line 1610, Address: 0x10202f0, Func Offset: 0xb0
	// Line 1611, Address: 0x10202f8, Func Offset: 0xb8
	// Line 1612, Address: 0x1020318, Func Offset: 0xd8
	// Line 1613, Address: 0x1020320, Func Offset: 0xe0
	// Line 1614, Address: 0x1020368, Func Offset: 0x128
	// Line 1616, Address: 0x1020374, Func Offset: 0x134
	// Line 1618, Address: 0x1020390, Func Offset: 0x150
	// Line 1623, Address: 0x1020398, Func Offset: 0x158
	// Line 1624, Address: 0x10203a4, Func Offset: 0x164
	// Line 1627, Address: 0x10203b0, Func Offset: 0x170
	// Line 1628, Address: 0x10203b8, Func Offset: 0x178
	// Line 1629, Address: 0x10203d8, Func Offset: 0x198
	// Line 1630, Address: 0x10203f4, Func Offset: 0x1b4
	// Line 1631, Address: 0x10203fc, Func Offset: 0x1bc
	// Line 1632, Address: 0x102041c, Func Offset: 0x1dc
	// Line 1634, Address: 0x1020438, Func Offset: 0x1f8
	// Line 1635, Address: 0x1020440, Func Offset: 0x200
	// Line 1636, Address: 0x1020448, Func Offset: 0x208
	// Line 1637, Address: 0x1020454, Func Offset: 0x214
	// Line 1638, Address: 0x102046c, Func Offset: 0x22c
	// Line 1640, Address: 0x102047c, Func Offset: 0x23c
	// Line 1643, Address: 0x1020488, Func Offset: 0x248
	// Line 1644, Address: 0x1020490, Func Offset: 0x250
	// Line 1645, Address: 0x1020494, Func Offset: 0x254
	// Func End, Address: 0x10204b4, Func Offset: 0x274
}

// 
// Start address: 0x10204c0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1665, Address: 0x10204c0, Func Offset: 0
	// Line 1673, Address: 0x10204e8, Func Offset: 0x28
	// Line 1674, Address: 0x102054c, Func Offset: 0x8c
	// Line 1680, Address: 0x1020554, Func Offset: 0x94
	// Line 1681, Address: 0x102055c, Func Offset: 0x9c
	// Line 1682, Address: 0x102057c, Func Offset: 0xbc
	// Line 1683, Address: 0x1020598, Func Offset: 0xd8
	// Line 1684, Address: 0x10205a0, Func Offset: 0xe0
	// Line 1685, Address: 0x10205c0, Func Offset: 0x100
	// Line 1688, Address: 0x10205dc, Func Offset: 0x11c
	// Line 1689, Address: 0x10205e4, Func Offset: 0x124
	// Line 1690, Address: 0x10205ec, Func Offset: 0x12c
	// Line 1691, Address: 0x10205f8, Func Offset: 0x138
	// Line 1692, Address: 0x1020610, Func Offset: 0x150
	// Line 1693, Address: 0x1020618, Func Offset: 0x158
	// Line 1698, Address: 0x1020628, Func Offset: 0x168
	// Line 1701, Address: 0x1020634, Func Offset: 0x174
	// Line 1702, Address: 0x102063c, Func Offset: 0x17c
	// Line 1703, Address: 0x1020640, Func Offset: 0x180
	// Func End, Address: 0x102065c, Func Offset: 0x19c
}

// 
// Start address: 0x1020660
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1717, Address: 0x1020660, Func Offset: 0
	// Line 1724, Address: 0x102067c, Func Offset: 0x1c
	// Line 1725, Address: 0x1020680, Func Offset: 0x20
	// Line 1726, Address: 0x1020688, Func Offset: 0x28
	// Line 1727, Address: 0x10206ac, Func Offset: 0x4c
	// Line 1728, Address: 0x10206b8, Func Offset: 0x58
	// Line 1729, Address: 0x10206d0, Func Offset: 0x70
	// Line 1730, Address: 0x10206e4, Func Offset: 0x84
	// Line 1735, Address: 0x10206fc, Func Offset: 0x9c
	// Func End, Address: 0x1020714, Func Offset: 0xb4
}

// 
// Start address: 0x1020720
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1749, Address: 0x1020720, Func Offset: 0
	// Line 1750, Address: 0x102072c, Func Offset: 0xc
	// Line 1751, Address: 0x1020758, Func Offset: 0x38
	// Line 1752, Address: 0x10207a4, Func Offset: 0x84
	// Line 1753, Address: 0x10207d0, Func Offset: 0xb0
	// Line 1755, Address: 0x102081c, Func Offset: 0xfc
	// Line 1761, Address: 0x1020828, Func Offset: 0x108
	// Line 1762, Address: 0x102082c, Func Offset: 0x10c
	// Func End, Address: 0x1020838, Func Offset: 0x118
}

// 
// Start address: 0x1020840
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x1020840, Func Offset: 0
	// Line 1780, Address: 0x102085c, Func Offset: 0x1c
	// Line 1782, Address: 0x1020878, Func Offset: 0x38
	// Func End, Address: 0x1020888, Func Offset: 0x48
}

// 
// Start address: 0x1020890
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1784, Address: 0x1020890, Func Offset: 0
	// Line 1785, Address: 0x10208ac, Func Offset: 0x1c
	// Line 1786, Address: 0x10208b0, Func Offset: 0x20
	// Line 1788, Address: 0x10208cc, Func Offset: 0x3c
	// Func End, Address: 0x10208dc, Func Offset: 0x4c
}

// 
// Start address: 0x10208e0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1790, Address: 0x10208e0, Func Offset: 0
	// Line 1791, Address: 0x10208f4, Func Offset: 0x14
	// Line 1793, Address: 0x1020910, Func Offset: 0x30
	// Func End, Address: 0x1020920, Func Offset: 0x40
}

// 
// Start address: 0x1020920
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1795, Address: 0x1020920, Func Offset: 0
	// Line 1796, Address: 0x102093c, Func Offset: 0x1c
	// Line 1798, Address: 0x1020958, Func Offset: 0x38
	// Func End, Address: 0x1020968, Func Offset: 0x48
}

// 
// Start address: 0x1020970
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1800, Address: 0x1020970, Func Offset: 0
	// Line 1801, Address: 0x1020988, Func Offset: 0x18
	// Line 1802, Address: 0x1020998, Func Offset: 0x28
	// Line 1803, Address: 0x10209a8, Func Offset: 0x38
	// Line 1804, Address: 0x10209b4, Func Offset: 0x44
	// Line 1806, Address: 0x10209c0, Func Offset: 0x50
	// Line 1807, Address: 0x10209ec, Func Offset: 0x7c
	// Line 1810, Address: 0x1020a18, Func Offset: 0xa8
	// Func End, Address: 0x1020a24, Func Offset: 0xb4
}

// 
// Start address: 0x1020a30
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1826, Address: 0x1020a30, Func Offset: 0
	// Line 1833, Address: 0x1020a48, Func Offset: 0x18
	// Line 1834, Address: 0x1020a54, Func Offset: 0x24
	// Line 1835, Address: 0x1020a60, Func Offset: 0x30
	// Line 1836, Address: 0x1020a68, Func Offset: 0x38
	// Line 1837, Address: 0x1020a6c, Func Offset: 0x3c
	// Line 1841, Address: 0x1020a84, Func Offset: 0x54
	// Line 1842, Address: 0x1020a8c, Func Offset: 0x5c
	// Line 1843, Address: 0x1020a90, Func Offset: 0x60
	// Line 1845, Address: 0x1020aa0, Func Offset: 0x70
	// Func End, Address: 0x1020ac0, Func Offset: 0x90
}

// 
// Start address: 0x1020ac0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1848, Address: 0x1020ac0, Func Offset: 0
	// Line 1849, Address: 0x1020ad8, Func Offset: 0x18
	// Line 1850, Address: 0x1020af8, Func Offset: 0x38
	// Func End, Address: 0x1020b08, Func Offset: 0x48
}

// 
// Start address: 0x1020b10
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1855, Address: 0x1020b10, Func Offset: 0
	// Line 1859, Address: 0x1020b30, Func Offset: 0x20
	// Line 1862, Address: 0x1020b4c, Func Offset: 0x3c
	// Line 1866, Address: 0x1020b74, Func Offset: 0x64
	// Line 1867, Address: 0x1020b80, Func Offset: 0x70
	// Line 1869, Address: 0x1020ba8, Func Offset: 0x98
	// Func End, Address: 0x1020bb8, Func Offset: 0xa8
}

// 
// Start address: 0x1020bc0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1875, Address: 0x1020bc0, Func Offset: 0
	// Line 1878, Address: 0x1020bdc, Func Offset: 0x1c
	// Line 1879, Address: 0x1020be4, Func Offset: 0x24
	// Line 1882, Address: 0x1020bec, Func Offset: 0x2c
	// Line 1884, Address: 0x1020c10, Func Offset: 0x50
	// Line 1885, Address: 0x1020c30, Func Offset: 0x70
	// Line 1886, Address: 0x1020c38, Func Offset: 0x78
	// Line 1887, Address: 0x1020c5c, Func Offset: 0x9c
	// Func End, Address: 0x1020c78, Func Offset: 0xb8
}

// 
// Start address: 0x1020c80
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1913, Address: 0x1020c80, Func Offset: 0
	// Line 1918, Address: 0x1020ca8, Func Offset: 0x28
	// Line 1919, Address: 0x1020cb8, Func Offset: 0x38
	// Line 1921, Address: 0x1020cd4, Func Offset: 0x54
	// Line 1922, Address: 0x1020cf8, Func Offset: 0x78
	// Line 1923, Address: 0x1020d20, Func Offset: 0xa0
	// Line 1924, Address: 0x1020d2c, Func Offset: 0xac
	// Line 1925, Address: 0x1020d34, Func Offset: 0xb4
	// Line 1928, Address: 0x1020d50, Func Offset: 0xd0
	// Line 1932, Address: 0x1020d78, Func Offset: 0xf8
	// Line 1935, Address: 0x1020d80, Func Offset: 0x100
	// Line 1936, Address: 0x1020d84, Func Offset: 0x104
	// Line 1940, Address: 0x1020da0, Func Offset: 0x120
	// Line 1947, Address: 0x1020dc8, Func Offset: 0x148
	// Func End, Address: 0x1020de4, Func Offset: 0x164
}

// 
// Start address: 0x1020df0
void mapinit()
{
	// Line 1958, Address: 0x1020df0, Func Offset: 0
	// Line 1960, Address: 0x1020df8, Func Offset: 0x8
	// Line 1961, Address: 0x1020e0c, Func Offset: 0x1c
	// Line 1963, Address: 0x1020e20, Func Offset: 0x30
	// Line 1964, Address: 0x1020e38, Func Offset: 0x48
	// Line 1965, Address: 0x1020e58, Func Offset: 0x68
	// Func End, Address: 0x1020e68, Func Offset: 0x78
}

// 
// Start address: 0x1020e70
void mapset()
{
	// Line 1970, Address: 0x1020e70, Func Offset: 0
	// Func End, Address: 0x1020e78, Func Offset: 0x8
}

// 
// Start address: 0x1020e80
void divdevset()
{
	// Line 1974, Address: 0x1020e80, Func Offset: 0
	// Func End, Address: 0x1020e88, Func Offset: 0x8
}

// 
// Start address: 0x1020e90
void enecginit()
{
	// Line 1978, Address: 0x1020e90, Func Offset: 0
	// Func End, Address: 0x1020e98, Func Offset: 0x8
}

