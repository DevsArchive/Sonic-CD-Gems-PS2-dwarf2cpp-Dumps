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
// Start address: 0x10280e0
_anon1* main_chk()
{
	// Line 146, Address: 0x10280e0, Func Offset: 0
	// Line 147, Address: 0x10280f4, Func Offset: 0x14
	// Line 149, Address: 0x1028104, Func Offset: 0x24
	// Line 151, Address: 0x102810c, Func Offset: 0x2c
	// Func End, Address: 0x1028114, Func Offset: 0x34
}

// 
// Start address: 0x1028120
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x1028120, Func Offset: 0
	// Line 192, Address: 0x102812c, Func Offset: 0xc
	// Line 193, Address: 0x1028140, Func Offset: 0x20
	// Line 194, Address: 0x1028154, Func Offset: 0x34
	// Line 196, Address: 0x102815c, Func Offset: 0x3c
	// Line 197, Address: 0x1028164, Func Offset: 0x44
	// Line 198, Address: 0x1028170, Func Offset: 0x50
	// Line 199, Address: 0x1028174, Func Offset: 0x54
	// Line 200, Address: 0x1028188, Func Offset: 0x68
	// Line 201, Address: 0x102818c, Func Offset: 0x6c
	// Line 202, Address: 0x10281a0, Func Offset: 0x80
	// Line 203, Address: 0x10281a4, Func Offset: 0x84
	// Line 204, Address: 0x10281b8, Func Offset: 0x98
	// Line 205, Address: 0x10281bc, Func Offset: 0x9c
	// Line 206, Address: 0x10281d0, Func Offset: 0xb0
	// Line 207, Address: 0x10281f0, Func Offset: 0xd0
	// Line 208, Address: 0x10281f4, Func Offset: 0xd4
	// Line 209, Address: 0x1028200, Func Offset: 0xe0
	// Line 211, Address: 0x102820c, Func Offset: 0xec
	// Line 212, Address: 0x1028218, Func Offset: 0xf8
	// Line 214, Address: 0x1028224, Func Offset: 0x104
	// Line 215, Address: 0x102822c, Func Offset: 0x10c
	// Func End, Address: 0x1028240, Func Offset: 0x120
}

// 
// Start address: 0x1028240
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x1028240, Func Offset: 0
	// Line 267, Address: 0x1028254, Func Offset: 0x14
	// Line 268, Address: 0x1028264, Func Offset: 0x24
	// Line 269, Address: 0x102826c, Func Offset: 0x2c
	// Line 271, Address: 0x102827c, Func Offset: 0x3c
	// Line 272, Address: 0x1028294, Func Offset: 0x54
	// Line 273, Address: 0x10282a4, Func Offset: 0x64
	// Line 274, Address: 0x10282ac, Func Offset: 0x6c
	// Line 276, Address: 0x10282b0, Func Offset: 0x70
	// Line 278, Address: 0x10282b8, Func Offset: 0x78
	// Line 279, Address: 0x10282d8, Func Offset: 0x98
	// Line 280, Address: 0x10282fc, Func Offset: 0xbc
	// Line 282, Address: 0x1028304, Func Offset: 0xc4
	// Line 286, Address: 0x1028324, Func Offset: 0xe4
	// Line 287, Address: 0x1028338, Func Offset: 0xf8
	// Line 291, Address: 0x102834c, Func Offset: 0x10c
	// Line 292, Address: 0x1028360, Func Offset: 0x120
	// Line 293, Address: 0x102836c, Func Offset: 0x12c
	// Line 294, Address: 0x1028374, Func Offset: 0x134
	// Line 298, Address: 0x1028378, Func Offset: 0x138
	// Line 299, Address: 0x102839c, Func Offset: 0x15c
	// Line 303, Address: 0x10283ac, Func Offset: 0x16c
	// Line 305, Address: 0x10283b4, Func Offset: 0x174
	// Line 306, Address: 0x10283c8, Func Offset: 0x188
	// Line 307, Address: 0x10283d4, Func Offset: 0x194
	// Line 308, Address: 0x10283dc, Func Offset: 0x19c
	// Line 312, Address: 0x10283e0, Func Offset: 0x1a0
	// Line 313, Address: 0x1028404, Func Offset: 0x1c4
	// Line 317, Address: 0x1028414, Func Offset: 0x1d4
	// Line 319, Address: 0x102841c, Func Offset: 0x1dc
	// Line 322, Address: 0x102842c, Func Offset: 0x1ec
	// Line 323, Address: 0x102843c, Func Offset: 0x1fc
	// Line 324, Address: 0x102844c, Func Offset: 0x20c
	// Line 325, Address: 0x102845c, Func Offset: 0x21c
	// Line 326, Address: 0x102846c, Func Offset: 0x22c
	// Func End, Address: 0x1028488, Func Offset: 0x248
}

// 
// Start address: 0x1028490
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x1028490, Func Offset: 0
	// Line 350, Address: 0x102849c, Func Offset: 0xc
	// Line 351, Address: 0x10284a4, Func Offset: 0x14
	// Line 353, Address: 0x10284a8, Func Offset: 0x18
	// Line 354, Address: 0x10284b4, Func Offset: 0x24
	// Line 355, Address: 0x10284c0, Func Offset: 0x30
	// Line 356, Address: 0x10284cc, Func Offset: 0x3c
	// Line 358, Address: 0x10284d8, Func Offset: 0x48
	// Line 359, Address: 0x10284f4, Func Offset: 0x64
	// Line 361, Address: 0x1028500, Func Offset: 0x70
	// Line 362, Address: 0x102851c, Func Offset: 0x8c
	// Line 364, Address: 0x1028528, Func Offset: 0x98
	// Line 365, Address: 0x1028544, Func Offset: 0xb4
	// Line 366, Address: 0x1028568, Func Offset: 0xd8
	// Func End, Address: 0x1028574, Func Offset: 0xe4
}

// 
// Start address: 0x1028580
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
	// Line 382, Address: 0x1028580, Func Offset: 0
	// Line 394, Address: 0x102859c, Func Offset: 0x1c
	// Line 399, Address: 0x10285ac, Func Offset: 0x2c
	// Line 401, Address: 0x10285d8, Func Offset: 0x58
	// Line 403, Address: 0x10285e0, Func Offset: 0x60
	// Line 404, Address: 0x10285e8, Func Offset: 0x68
	// Line 406, Address: 0x10285f0, Func Offset: 0x70
	// Line 407, Address: 0x1028600, Func Offset: 0x80
	// Line 410, Address: 0x1028610, Func Offset: 0x90
	// Line 411, Address: 0x1028624, Func Offset: 0xa4
	// Line 413, Address: 0x1028634, Func Offset: 0xb4
	// Line 414, Address: 0x1028648, Func Offset: 0xc8
	// Line 416, Address: 0x1028658, Func Offset: 0xd8
	// Line 417, Address: 0x1028674, Func Offset: 0xf4
	// Line 419, Address: 0x1028684, Func Offset: 0x104
	// Line 422, Address: 0x1028698, Func Offset: 0x118
	// Line 424, Address: 0x10286a8, Func Offset: 0x128
	// Line 426, Address: 0x10286d0, Func Offset: 0x150
	// Line 427, Address: 0x1028708, Func Offset: 0x188
	// Line 429, Address: 0x102871c, Func Offset: 0x19c
	// Line 431, Address: 0x1028728, Func Offset: 0x1a8
	// Line 433, Address: 0x1028734, Func Offset: 0x1b4
	// Line 434, Address: 0x1028754, Func Offset: 0x1d4
	// Line 436, Address: 0x1028760, Func Offset: 0x1e0
	// Line 437, Address: 0x1028774, Func Offset: 0x1f4
	// Line 439, Address: 0x1028784, Func Offset: 0x204
	// Line 440, Address: 0x10287a4, Func Offset: 0x224
	// Line 442, Address: 0x10287b0, Func Offset: 0x230
	// Line 443, Address: 0x10287c4, Func Offset: 0x244
	// Line 445, Address: 0x10287d4, Func Offset: 0x254
	// Line 447, Address: 0x10287e0, Func Offset: 0x260
	// Line 448, Address: 0x1028800, Func Offset: 0x280
	// Line 450, Address: 0x102880c, Func Offset: 0x28c
	// Line 451, Address: 0x1028820, Func Offset: 0x2a0
	// Line 453, Address: 0x1028830, Func Offset: 0x2b0
	// Line 454, Address: 0x1028850, Func Offset: 0x2d0
	// Line 456, Address: 0x102885c, Func Offset: 0x2dc
	// Line 457, Address: 0x1028870, Func Offset: 0x2f0
	// Line 459, Address: 0x1028880, Func Offset: 0x300
	// Line 460, Address: 0x102888c, Func Offset: 0x30c
	// Line 461, Address: 0x10288bc, Func Offset: 0x33c
	// Line 462, Address: 0x10288ec, Func Offset: 0x36c
	// Line 463, Address: 0x1028908, Func Offset: 0x388
	// Func End, Address: 0x102892c, Func Offset: 0x3ac
}

// 
// Start address: 0x1028930
void z81aline(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon2 ldwk;
	short wk;
	char z81ascrtbl[5];
	// Line 477, Address: 0x1028930, Func Offset: 0
	// Line 486, Address: 0x1028948, Func Offset: 0x18
	// Line 487, Address: 0x102896c, Func Offset: 0x3c
	// Line 488, Address: 0x102898c, Func Offset: 0x5c
	// Line 489, Address: 0x10289ac, Func Offset: 0x7c
	// Line 490, Address: 0x10289b8, Func Offset: 0x88
	// Line 492, Address: 0x10289cc, Func Offset: 0x9c
	// Line 494, Address: 0x10289d8, Func Offset: 0xa8
	// Line 496, Address: 0x10289f8, Func Offset: 0xc8
	// Line 498, Address: 0x1028a18, Func Offset: 0xe8
	// Line 499, Address: 0x1028a2c, Func Offset: 0xfc
	// Line 500, Address: 0x1028a38, Func Offset: 0x108
	// Line 502, Address: 0x1028a44, Func Offset: 0x114
	// Line 503, Address: 0x1028a68, Func Offset: 0x138
	// Line 504, Address: 0x1028a74, Func Offset: 0x144
	// Line 505, Address: 0x1028a98, Func Offset: 0x168
	// Line 507, Address: 0x1028aa4, Func Offset: 0x174
	// Line 508, Address: 0x1028ab8, Func Offset: 0x188
	// Func End, Address: 0x1028ad4, Func Offset: 0x1a4
}

// 
// Start address: 0x1028ae0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 529, Address: 0x1028ae0, Func Offset: 0
	// Line 533, Address: 0x1028afc, Func Offset: 0x1c
	// Line 534, Address: 0x1028b00, Func Offset: 0x20
	// Line 536, Address: 0x1028b20, Func Offset: 0x40
	// Line 537, Address: 0x1028b3c, Func Offset: 0x5c
	// Line 538, Address: 0x1028b48, Func Offset: 0x68
	// Line 540, Address: 0x1028b54, Func Offset: 0x74
	// Line 541, Address: 0x1028b5c, Func Offset: 0x7c
	// Line 542, Address: 0x1028b6c, Func Offset: 0x8c
	// Line 543, Address: 0x1028b90, Func Offset: 0xb0
	// Line 544, Address: 0x1028bb0, Func Offset: 0xd0
	// Func End, Address: 0x1028bc4, Func Offset: 0xe4
}

// 
// Start address: 0x1028bd0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 650, Address: 0x1028bd0, Func Offset: 0
	// Line 653, Address: 0x1028be0, Func Offset: 0x10
	// Line 654, Address: 0x1028bf0, Func Offset: 0x20
	// Line 655, Address: 0x1028bfc, Func Offset: 0x2c
	// Line 657, Address: 0x1028c34, Func Offset: 0x64
	// Line 658, Address: 0x1028c3c, Func Offset: 0x6c
	// Line 659, Address: 0x1028c50, Func Offset: 0x80
	// Line 660, Address: 0x1028c70, Func Offset: 0xa0
	// Line 661, Address: 0x1028c84, Func Offset: 0xb4
	// Line 663, Address: 0x1028c8c, Func Offset: 0xbc
	// Line 668, Address: 0x1028ca0, Func Offset: 0xd0
	// Func End, Address: 0x1028cb4, Func Offset: 0xe4
}

// 
// Start address: 0x1028cc0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 686, Address: 0x1028cc0, Func Offset: 0
	// Line 690, Address: 0x1028cd4, Func Offset: 0x14
	// Line 691, Address: 0x1028cdc, Func Offset: 0x1c
	// Line 692, Address: 0x1028ce4, Func Offset: 0x24
	// Line 693, Address: 0x1028cec, Func Offset: 0x2c
	// Line 694, Address: 0x1028cf0, Func Offset: 0x30
	// Line 695, Address: 0x1028d14, Func Offset: 0x54
	// Line 696, Address: 0x1028d20, Func Offset: 0x60
	// Line 698, Address: 0x1028d3c, Func Offset: 0x7c
	// Line 699, Address: 0x1028d48, Func Offset: 0x88
	// Line 700, Address: 0x1028d5c, Func Offset: 0x9c
	// Line 701, Address: 0x1028d68, Func Offset: 0xa8
	// Line 702, Address: 0x1028d8c, Func Offset: 0xcc
	// Line 704, Address: 0x1028d94, Func Offset: 0xd4
	// Line 709, Address: 0x1028dbc, Func Offset: 0xfc
	// Func End, Address: 0x1028dd0, Func Offset: 0x110
}

// 
// Start address: 0x1028dd0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 727, Address: 0x1028dd0, Func Offset: 0
	// Line 731, Address: 0x1028de4, Func Offset: 0x14
	// Line 732, Address: 0x1028dec, Func Offset: 0x1c
	// Line 733, Address: 0x1028df4, Func Offset: 0x24
	// Line 734, Address: 0x1028dfc, Func Offset: 0x2c
	// Line 735, Address: 0x1028e00, Func Offset: 0x30
	// Line 736, Address: 0x1028e24, Func Offset: 0x54
	// Line 737, Address: 0x1028e30, Func Offset: 0x60
	// Line 739, Address: 0x1028e4c, Func Offset: 0x7c
	// Line 740, Address: 0x1028e58, Func Offset: 0x88
	// Line 741, Address: 0x1028e6c, Func Offset: 0x9c
	// Line 742, Address: 0x1028e78, Func Offset: 0xa8
	// Line 743, Address: 0x1028e9c, Func Offset: 0xcc
	// Line 745, Address: 0x1028ea4, Func Offset: 0xd4
	// Line 750, Address: 0x1028ecc, Func Offset: 0xfc
	// Func End, Address: 0x1028ee0, Func Offset: 0x110
}

// 
// Start address: 0x1028ee0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 768, Address: 0x1028ee0, Func Offset: 0
	// Line 772, Address: 0x1028ef4, Func Offset: 0x14
	// Line 773, Address: 0x1028efc, Func Offset: 0x1c
	// Line 774, Address: 0x1028f04, Func Offset: 0x24
	// Line 775, Address: 0x1028f0c, Func Offset: 0x2c
	// Line 776, Address: 0x1028f10, Func Offset: 0x30
	// Line 777, Address: 0x1028f34, Func Offset: 0x54
	// Line 778, Address: 0x1028f40, Func Offset: 0x60
	// Line 780, Address: 0x1028f5c, Func Offset: 0x7c
	// Line 781, Address: 0x1028f68, Func Offset: 0x88
	// Line 782, Address: 0x1028f7c, Func Offset: 0x9c
	// Line 783, Address: 0x1028f88, Func Offset: 0xa8
	// Line 784, Address: 0x1028fac, Func Offset: 0xcc
	// Line 786, Address: 0x1028fb4, Func Offset: 0xd4
	// Line 791, Address: 0x1028fdc, Func Offset: 0xfc
	// Func End, Address: 0x1028ff0, Func Offset: 0x110
}

// 
// Start address: 0x1028ff0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 806, Address: 0x1028ff0, Func Offset: 0
	// Line 810, Address: 0x1029000, Func Offset: 0x10
	// Line 812, Address: 0x1029010, Func Offset: 0x20
	// Line 813, Address: 0x1029018, Func Offset: 0x28
	// Line 814, Address: 0x102904c, Func Offset: 0x5c
	// Line 815, Address: 0x1029054, Func Offset: 0x64
	// Line 816, Address: 0x1029068, Func Offset: 0x78
	// Line 817, Address: 0x102908c, Func Offset: 0x9c
	// Line 818, Address: 0x10290a0, Func Offset: 0xb0
	// Line 819, Address: 0x10290a8, Func Offset: 0xb8
	// Line 824, Address: 0x10290bc, Func Offset: 0xcc
	// Func End, Address: 0x10290d4, Func Offset: 0xe4
}

// 
// Start address: 0x10290e0
void scrh_move()
{
	short xwk;
	// Line 841, Address: 0x10290e0, Func Offset: 0
	// Line 844, Address: 0x10290e8, Func Offset: 0x8
	// Line 845, Address: 0x1029130, Func Offset: 0x50
	// Line 847, Address: 0x1029140, Func Offset: 0x60
	// Line 848, Address: 0x1029148, Func Offset: 0x68
	// Line 849, Address: 0x1029150, Func Offset: 0x70
	// Line 851, Address: 0x1029160, Func Offset: 0x80
	// Line 852, Address: 0x1029174, Func Offset: 0x94
	// Line 856, Address: 0x1029180, Func Offset: 0xa0
	// Line 857, Address: 0x1029194, Func Offset: 0xb4
	// Line 858, Address: 0x10291b8, Func Offset: 0xd8
	// Line 860, Address: 0x10291c8, Func Offset: 0xe8
	// Line 862, Address: 0x10291d0, Func Offset: 0xf0
	// Line 863, Address: 0x10291e4, Func Offset: 0x104
	// Line 867, Address: 0x10291f0, Func Offset: 0x110
	// Line 868, Address: 0x1029204, Func Offset: 0x124
	// Line 869, Address: 0x1029228, Func Offset: 0x148
	// Line 874, Address: 0x1029238, Func Offset: 0x158
	// Line 875, Address: 0x1029268, Func Offset: 0x188
	// Line 876, Address: 0x1029270, Func Offset: 0x190
	// Func End, Address: 0x1029280, Func Offset: 0x1a0
}

// 
// Start address: 0x1029280
void scroll_v()
{
	short ywk;
	// Line 891, Address: 0x1029280, Func Offset: 0
	// Line 894, Address: 0x102928c, Func Offset: 0xc
	// Line 895, Address: 0x10292c0, Func Offset: 0x40
	// Line 896, Address: 0x10292d8, Func Offset: 0x58
	// Line 900, Address: 0x10292e4, Func Offset: 0x64
	// Line 901, Address: 0x10292fc, Func Offset: 0x7c
	// Line 902, Address: 0x1029308, Func Offset: 0x88
	// Line 903, Address: 0x102932c, Func Offset: 0xac
	// Line 904, Address: 0x1029340, Func Offset: 0xc0
	// Line 905, Address: 0x102934c, Func Offset: 0xcc
	// Line 906, Address: 0x1029354, Func Offset: 0xd4
	// Line 907, Address: 0x102937c, Func Offset: 0xfc
	// Line 908, Address: 0x10293a4, Func Offset: 0x124
	// Line 909, Address: 0x10293b0, Func Offset: 0x130
	// Line 911, Address: 0x10293b8, Func Offset: 0x138
	// Line 912, Address: 0x10293e0, Func Offset: 0x160
	// Line 913, Address: 0x10293f0, Func Offset: 0x170
	// Line 914, Address: 0x10293f8, Func Offset: 0x178
	// Line 919, Address: 0x1029400, Func Offset: 0x180
	// Line 920, Address: 0x102942c, Func Offset: 0x1ac
	// Line 921, Address: 0x1029438, Func Offset: 0x1b8
	// Line 922, Address: 0x1029440, Func Offset: 0x1c0
	// Line 923, Address: 0x1029450, Func Offset: 0x1d0
	// Line 924, Address: 0x1029458, Func Offset: 0x1d8
	// Line 929, Address: 0x1029460, Func Offset: 0x1e0
	// Line 930, Address: 0x1029468, Func Offset: 0x1e8
	// Func End, Address: 0x102947c, Func Offset: 0x1fc
}

// 
// Start address: 0x1029480
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 944, Address: 0x1029480, Func Offset: 0
	// Line 947, Address: 0x1029490, Func Offset: 0x10
	// Line 948, Address: 0x10294ac, Func Offset: 0x2c
	// Line 949, Address: 0x10294c4, Func Offset: 0x44
	// Line 950, Address: 0x10294e8, Func Offset: 0x68
	// Line 951, Address: 0x10294f0, Func Offset: 0x70
	// Line 955, Address: 0x1029500, Func Offset: 0x80
	// Line 956, Address: 0x1029514, Func Offset: 0x94
	// Line 957, Address: 0x1029520, Func Offset: 0xa0
	// Line 960, Address: 0x1029528, Func Offset: 0xa8
	// Line 961, Address: 0x1029540, Func Offset: 0xc0
	// Line 962, Address: 0x102954c, Func Offset: 0xcc
	// Line 963, Address: 0x102956c, Func Offset: 0xec
	// Line 964, Address: 0x1029578, Func Offset: 0xf8
	// Line 965, Address: 0x1029580, Func Offset: 0x100
	// Line 967, Address: 0x102958c, Func Offset: 0x10c
	// Line 969, Address: 0x1029594, Func Offset: 0x114
	// Line 970, Address: 0x10295ac, Func Offset: 0x12c
	// Line 971, Address: 0x10295b8, Func Offset: 0x138
	// Line 972, Address: 0x10295d8, Func Offset: 0x158
	// Line 973, Address: 0x10295e4, Func Offset: 0x164
	// Line 974, Address: 0x10295ec, Func Offset: 0x16c
	// Line 977, Address: 0x10295f8, Func Offset: 0x178
	// Func End, Address: 0x102960c, Func Offset: 0x18c
}

// 
// Start address: 0x1029610
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 991, Address: 0x1029610, Func Offset: 0
	// Line 994, Address: 0x1029620, Func Offset: 0x10
	// Line 996, Address: 0x102962c, Func Offset: 0x1c
	// Line 997, Address: 0x1029644, Func Offset: 0x34
	// Line 998, Address: 0x1029650, Func Offset: 0x40
	// Line 999, Address: 0x1029670, Func Offset: 0x60
	// Line 1000, Address: 0x102967c, Func Offset: 0x6c
	// Line 1001, Address: 0x1029684, Func Offset: 0x74
	// Line 1003, Address: 0x1029690, Func Offset: 0x80
	// Func End, Address: 0x10296a4, Func Offset: 0x94
}

// 
// Start address: 0x10296b0
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1018, Address: 0x10296b0, Func Offset: 0
	// Line 1021, Address: 0x10296bc, Func Offset: 0xc
	// Line 1022, Address: 0x10296c0, Func Offset: 0x10
	// Line 1023, Address: 0x10296ec, Func Offset: 0x3c
	// Line 1024, Address: 0x1029700, Func Offset: 0x50
	// Line 1025, Address: 0x102970c, Func Offset: 0x5c
	// Line 1026, Address: 0x1029714, Func Offset: 0x64
	// Line 1028, Address: 0x1029720, Func Offset: 0x70
	// Func End, Address: 0x1029730, Func Offset: 0x80
}

// 
// Start address: 0x1029730
void sv_move_sub2()
{
	// Line 1032, Address: 0x1029730, Func Offset: 0
	// Line 1033, Address: 0x1029738, Func Offset: 0x8
	// Line 1035, Address: 0x1029740, Func Offset: 0x10
	// Line 1036, Address: 0x102974c, Func Offset: 0x1c
	// Func End, Address: 0x102975c, Func Offset: 0x2c
}

// 
// Start address: 0x1029760
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1050, Address: 0x1029760, Func Offset: 0
	// Line 1053, Address: 0x102976c, Func Offset: 0xc
	// Line 1054, Address: 0x1029790, Func Offset: 0x30
	// Line 1055, Address: 0x10297b4, Func Offset: 0x54
	// Line 1056, Address: 0x10297c0, Func Offset: 0x60
	// Func End, Address: 0x10297d0, Func Offset: 0x70
}

// 
// Start address: 0x10297d0
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1071, Address: 0x10297d0, Func Offset: 0
	// Line 1072, Address: 0x10297dc, Func Offset: 0xc
	// Line 1073, Address: 0x1029804, Func Offset: 0x34
	// Line 1075, Address: 0x102981c, Func Offset: 0x4c
	// Line 1076, Address: 0x1029828, Func Offset: 0x58
	// Line 1077, Address: 0x1029830, Func Offset: 0x60
	// Line 1078, Address: 0x102983c, Func Offset: 0x6c
	// Line 1079, Address: 0x1029850, Func Offset: 0x80
	// Line 1080, Address: 0x1029864, Func Offset: 0x94
	// Line 1084, Address: 0x1029878, Func Offset: 0xa8
	// Line 1085, Address: 0x1029884, Func Offset: 0xb4
	// Func End, Address: 0x1029894, Func Offset: 0xc4
}

// 
// Start address: 0x10298a0
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1099, Address: 0x10298a0, Func Offset: 0
	// Line 1102, Address: 0x10298ac, Func Offset: 0xc
	// Line 1103, Address: 0x10298cc, Func Offset: 0x2c
	// Line 1104, Address: 0x10298f0, Func Offset: 0x50
	// Line 1105, Address: 0x10298fc, Func Offset: 0x5c
	// Func End, Address: 0x102990c, Func Offset: 0x6c
}

// 
// Start address: 0x1029910
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1120, Address: 0x1029910, Func Offset: 0
	// Line 1121, Address: 0x102991c, Func Offset: 0xc
	// Line 1122, Address: 0x1029944, Func Offset: 0x34
	// Line 1124, Address: 0x102995c, Func Offset: 0x4c
	// Line 1125, Address: 0x1029968, Func Offset: 0x58
	// Line 1126, Address: 0x1029970, Func Offset: 0x60
	// Line 1127, Address: 0x102997c, Func Offset: 0x6c
	// Line 1128, Address: 0x1029990, Func Offset: 0x80
	// Line 1129, Address: 0x10299a4, Func Offset: 0x94
	// Line 1133, Address: 0x10299b8, Func Offset: 0xa8
	// Line 1134, Address: 0x10299c4, Func Offset: 0xb4
	// Func End, Address: 0x10299d4, Func Offset: 0xc4
}

// 
// Start address: 0x10299e0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1151, Address: 0x10299e0, Func Offset: 0
	// Line 1155, Address: 0x10299f0, Func Offset: 0x10
	// Line 1156, Address: 0x1029a00, Func Offset: 0x20
	// Line 1157, Address: 0x1029a24, Func Offset: 0x44
	// Line 1158, Address: 0x1029a38, Func Offset: 0x58
	// Line 1159, Address: 0x1029a50, Func Offset: 0x70
	// Line 1161, Address: 0x1029a5c, Func Offset: 0x7c
	// Line 1163, Address: 0x1029a68, Func Offset: 0x88
	// Line 1164, Address: 0x1029aa4, Func Offset: 0xc4
	// Line 1165, Address: 0x1029aac, Func Offset: 0xcc
	// Line 1166, Address: 0x1029ac0, Func Offset: 0xe0
	// Line 1167, Address: 0x1029aec, Func Offset: 0x10c
	// Line 1168, Address: 0x1029afc, Func Offset: 0x11c
	// Line 1169, Address: 0x1029b10, Func Offset: 0x130
	// Line 1170, Address: 0x1029b18, Func Offset: 0x138
	// Line 1175, Address: 0x1029b2c, Func Offset: 0x14c
	// Func End, Address: 0x1029b40, Func Offset: 0x160
}

// 
// Start address: 0x1029b40
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
	// Line 1193, Address: 0x1029b40, Func Offset: 0
	// Line 1202, Address: 0x1029b60, Func Offset: 0x20
	// Line 1203, Address: 0x1029b64, Func Offset: 0x24
	// Line 1204, Address: 0x1029b70, Func Offset: 0x30
	// Line 1205, Address: 0x1029b7c, Func Offset: 0x3c
	// Line 1206, Address: 0x1029b84, Func Offset: 0x44
	// Line 1207, Address: 0x1029b8c, Func Offset: 0x4c
	// Line 1209, Address: 0x1029ba0, Func Offset: 0x60
	// Line 1210, Address: 0x1029ba4, Func Offset: 0x64
	// Line 1211, Address: 0x1029bb0, Func Offset: 0x70
	// Line 1212, Address: 0x1029bbc, Func Offset: 0x7c
	// Line 1213, Address: 0x1029bc4, Func Offset: 0x84
	// Line 1215, Address: 0x1029bcc, Func Offset: 0x8c
	// Line 1216, Address: 0x1029bd8, Func Offset: 0x98
	// Line 1217, Address: 0x1029bec, Func Offset: 0xac
	// Line 1219, Address: 0x1029bf8, Func Offset: 0xb8
	// Line 1220, Address: 0x1029c00, Func Offset: 0xc0
	// Line 1222, Address: 0x1029c08, Func Offset: 0xc8
	// Line 1224, Address: 0x1029c28, Func Offset: 0xe8
	// Line 1230, Address: 0x1029c54, Func Offset: 0x114
	// Line 1231, Address: 0x1029c68, Func Offset: 0x128
	// Line 1233, Address: 0x1029c74, Func Offset: 0x134
	// Line 1234, Address: 0x1029c7c, Func Offset: 0x13c
	// Line 1235, Address: 0x1029c84, Func Offset: 0x144
	// Line 1237, Address: 0x1029ca4, Func Offset: 0x164
	// Line 1243, Address: 0x1029cd0, Func Offset: 0x190
	// Line 1244, Address: 0x1029ce4, Func Offset: 0x1a4
	// Line 1246, Address: 0x1029cf0, Func Offset: 0x1b0
	// Line 1247, Address: 0x1029cf8, Func Offset: 0x1b8
	// Line 1248, Address: 0x1029d00, Func Offset: 0x1c0
	// Line 1250, Address: 0x1029d20, Func Offset: 0x1e0
	// Line 1256, Address: 0x1029d4c, Func Offset: 0x20c
	// Line 1257, Address: 0x1029d60, Func Offset: 0x220
	// Line 1259, Address: 0x1029d6c, Func Offset: 0x22c
	// Line 1260, Address: 0x1029d74, Func Offset: 0x234
	// Line 1261, Address: 0x1029d7c, Func Offset: 0x23c
	// Line 1263, Address: 0x1029d9c, Func Offset: 0x25c
	// Line 1272, Address: 0x1029dc8, Func Offset: 0x288
	// Func End, Address: 0x1029df0, Func Offset: 0x2b0
}

// 
// Start address: 0x1029df0
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
	// Line 1289, Address: 0x1029df0, Func Offset: 0
	// Line 1300, Address: 0x1029e1c, Func Offset: 0x2c
	// Line 1302, Address: 0x1029e24, Func Offset: 0x34
	// Line 1303, Address: 0x1029e3c, Func Offset: 0x4c
	// Line 1304, Address: 0x1029e50, Func Offset: 0x60
	// Line 1306, Address: 0x1029e58, Func Offset: 0x68
	// Line 1308, Address: 0x1029e6c, Func Offset: 0x7c
	// Line 1309, Address: 0x1029e84, Func Offset: 0x94
	// Line 1310, Address: 0x1029e98, Func Offset: 0xa8
	// Line 1311, Address: 0x1029ea0, Func Offset: 0xb0
	// Line 1313, Address: 0x1029ea8, Func Offset: 0xb8
	// Line 1314, Address: 0x1029ebc, Func Offset: 0xcc
	// Line 1319, Address: 0x1029ec4, Func Offset: 0xd4
	// Line 1320, Address: 0x1029f14, Func Offset: 0x124
	// Line 1321, Address: 0x1029f1c, Func Offset: 0x12c
	// Line 1327, Address: 0x1029f3c, Func Offset: 0x14c
	// Line 1328, Address: 0x1029f5c, Func Offset: 0x16c
	// Line 1329, Address: 0x1029f80, Func Offset: 0x190
	// Line 1330, Address: 0x1029f8c, Func Offset: 0x19c
	// Line 1331, Address: 0x1029f94, Func Offset: 0x1a4
	// Line 1333, Address: 0x1029fb4, Func Offset: 0x1c4
	// Line 1337, Address: 0x1029fe0, Func Offset: 0x1f0
	// Line 1340, Address: 0x1029fe8, Func Offset: 0x1f8
	// Line 1341, Address: 0x1029fec, Func Offset: 0x1fc
	// Line 1345, Address: 0x102a00c, Func Offset: 0x21c
	// Line 1352, Address: 0x102a038, Func Offset: 0x248
	// Line 1359, Address: 0x102a04c, Func Offset: 0x25c
	// Line 1360, Address: 0x102a054, Func Offset: 0x264
	// Line 1361, Address: 0x102a05c, Func Offset: 0x26c
	// Line 1362, Address: 0x102a074, Func Offset: 0x284
	// Line 1363, Address: 0x102a094, Func Offset: 0x2a4
	// Line 1367, Address: 0x102a09c, Func Offset: 0x2ac
	// Line 1369, Address: 0x102a0cc, Func Offset: 0x2dc
	// Line 1370, Address: 0x102a0d8, Func Offset: 0x2e8
	// Line 1374, Address: 0x102a0e8, Func Offset: 0x2f8
	// Line 1375, Address: 0x102a0f4, Func Offset: 0x304
	// Line 1376, Address: 0x102a114, Func Offset: 0x324
	// Line 1377, Address: 0x102a14c, Func Offset: 0x35c
	// Line 1378, Address: 0x102a16c, Func Offset: 0x37c
	// Line 1380, Address: 0x102a190, Func Offset: 0x3a0
	// Line 1383, Address: 0x102a1b4, Func Offset: 0x3c4
	// Line 1385, Address: 0x102a1d4, Func Offset: 0x3e4
	// Line 1387, Address: 0x102a1e8, Func Offset: 0x3f8
	// Line 1388, Address: 0x102a1f4, Func Offset: 0x404
	// Line 1389, Address: 0x102a204, Func Offset: 0x414
	// Line 1391, Address: 0x102a20c, Func Offset: 0x41c
	// Func End, Address: 0x102a234, Func Offset: 0x444
}

// 
// Start address: 0x102a240
void scrollwrtc()
{
	// Line 1397, Address: 0x102a240, Func Offset: 0
	// Func End, Address: 0x102a248, Func Offset: 0x8
}

// 
// Start address: 0x102a250
void scrollwrtz()
{
	// Line 1402, Address: 0x102a250, Func Offset: 0
	// Func End, Address: 0x102a258, Func Offset: 0x8
}

// 
// Start address: 0x102a260
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1420, Address: 0x102a260, Func Offset: 0
	// Line 1433, Address: 0x102a288, Func Offset: 0x28
	// Line 1436, Address: 0x102a2a8, Func Offset: 0x48
	// Line 1437, Address: 0x102a2bc, Func Offset: 0x5c
	// Line 1438, Address: 0x102a2d0, Func Offset: 0x70
	// Line 1439, Address: 0x102a2e4, Func Offset: 0x84
	// Line 1441, Address: 0x102a2f8, Func Offset: 0x98
	// Line 1442, Address: 0x102a304, Func Offset: 0xa4
	// Line 1443, Address: 0x102a318, Func Offset: 0xb8
	// Func End, Address: 0x102a328, Func Offset: 0xc8
}

// 
// Start address: 0x102a330
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1447, Address: 0x102a330, Func Offset: 0
	// Line 1451, Address: 0x102a358, Func Offset: 0x28
	// Line 1454, Address: 0x102a378, Func Offset: 0x48
	// Line 1455, Address: 0x102a38c, Func Offset: 0x5c
	// Line 1456, Address: 0x102a3a0, Func Offset: 0x70
	// Line 1457, Address: 0x102a3b4, Func Offset: 0x84
	// Line 1459, Address: 0x102a3c8, Func Offset: 0x98
	// Line 1460, Address: 0x102a3d4, Func Offset: 0xa4
	// Line 1461, Address: 0x102a3e8, Func Offset: 0xb8
	// Func End, Address: 0x102a3f8, Func Offset: 0xc8
}

// 
// Start address: 0x102a400
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1481, Address: 0x102a400, Func Offset: 0
	// Line 1485, Address: 0x102a428, Func Offset: 0x28
	// Line 1488, Address: 0x102a448, Func Offset: 0x48
	// Line 1489, Address: 0x102a45c, Func Offset: 0x5c
	// Line 1490, Address: 0x102a46c, Func Offset: 0x6c
	// Line 1491, Address: 0x102a480, Func Offset: 0x80
	// Line 1493, Address: 0x102a490, Func Offset: 0x90
	// Line 1494, Address: 0x102a49c, Func Offset: 0x9c
	// Line 1495, Address: 0x102a4b0, Func Offset: 0xb0
	// Func End, Address: 0x102a4c0, Func Offset: 0xc0
}

// 
// Start address: 0x102a4c0
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
	// Line 1514, Address: 0x102a4c0, Func Offset: 0
	// Line 1520, Address: 0x102a4f4, Func Offset: 0x34
	// Line 1522, Address: 0x102a504, Func Offset: 0x44
	// Line 1523, Address: 0x102a508, Func Offset: 0x48
	// Line 1524, Address: 0x102a510, Func Offset: 0x50
	// Line 1526, Address: 0x102a520, Func Offset: 0x60
	// Line 1528, Address: 0x102a524, Func Offset: 0x64
	// Line 1529, Address: 0x102a52c, Func Offset: 0x6c
	// Line 1532, Address: 0x102a534, Func Offset: 0x74
	// Line 1533, Address: 0x102a53c, Func Offset: 0x7c
	// Line 1534, Address: 0x102a548, Func Offset: 0x88
	// Line 1536, Address: 0x102a554, Func Offset: 0x94
	// Line 1537, Address: 0x102a55c, Func Offset: 0x9c
	// Line 1538, Address: 0x102a564, Func Offset: 0xa4
	// Line 1539, Address: 0x102a56c, Func Offset: 0xac
	// Line 1541, Address: 0x102a578, Func Offset: 0xb8
	// Line 1542, Address: 0x102a580, Func Offset: 0xc0
	// Line 1543, Address: 0x102a588, Func Offset: 0xc8
	// Line 1544, Address: 0x102a590, Func Offset: 0xd0
	// Line 1546, Address: 0x102a59c, Func Offset: 0xdc
	// Line 1547, Address: 0x102a5a4, Func Offset: 0xe4
	// Line 1548, Address: 0x102a5ac, Func Offset: 0xec
	// Line 1551, Address: 0x102a5b4, Func Offset: 0xf4
	// Line 1552, Address: 0x102a5bc, Func Offset: 0xfc
	// Line 1555, Address: 0x102a5c4, Func Offset: 0x104
	// Line 1556, Address: 0x102a608, Func Offset: 0x148
	// Line 1557, Address: 0x102a64c, Func Offset: 0x18c
	// Line 1558, Address: 0x102a690, Func Offset: 0x1d0
	// Line 1560, Address: 0x102a6d4, Func Offset: 0x214
	// Func End, Address: 0x102a704, Func Offset: 0x244
}

// 
// Start address: 0x102a710
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1578, Address: 0x102a710, Func Offset: 0
	// Line 1579, Address: 0x102a730, Func Offset: 0x20
	// Line 1580, Address: 0x102a750, Func Offset: 0x40
	// Func End, Address: 0x102a760, Func Offset: 0x50
}

// 
// Start address: 0x102a760
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1582, Address: 0x102a760, Func Offset: 0
	// Line 1583, Address: 0x102a780, Func Offset: 0x20
	// Line 1584, Address: 0x102a784, Func Offset: 0x24
	// Line 1585, Address: 0x102a7a4, Func Offset: 0x44
	// Func End, Address: 0x102a7b4, Func Offset: 0x54
}

// 
// Start address: 0x102a7c0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1592, Address: 0x102a7c0, Func Offset: 0
	// Line 1598, Address: 0x102a7f0, Func Offset: 0x30
	// Line 1599, Address: 0x102a800, Func Offset: 0x40
	// Line 1605, Address: 0x102a810, Func Offset: 0x50
	// Line 1606, Address: 0x102a82c, Func Offset: 0x6c
	// Line 1607, Address: 0x102a830, Func Offset: 0x70
	// Line 1608, Address: 0x102a84c, Func Offset: 0x8c
	// Line 1609, Address: 0x102a850, Func Offset: 0x90
	// Line 1610, Address: 0x102a870, Func Offset: 0xb0
	// Line 1611, Address: 0x102a878, Func Offset: 0xb8
	// Line 1612, Address: 0x102a898, Func Offset: 0xd8
	// Line 1613, Address: 0x102a8a0, Func Offset: 0xe0
	// Line 1614, Address: 0x102a8e8, Func Offset: 0x128
	// Line 1616, Address: 0x102a8f4, Func Offset: 0x134
	// Line 1618, Address: 0x102a910, Func Offset: 0x150
	// Line 1623, Address: 0x102a918, Func Offset: 0x158
	// Line 1624, Address: 0x102a924, Func Offset: 0x164
	// Line 1627, Address: 0x102a930, Func Offset: 0x170
	// Line 1628, Address: 0x102a938, Func Offset: 0x178
	// Line 1629, Address: 0x102a958, Func Offset: 0x198
	// Line 1630, Address: 0x102a974, Func Offset: 0x1b4
	// Line 1631, Address: 0x102a97c, Func Offset: 0x1bc
	// Line 1632, Address: 0x102a99c, Func Offset: 0x1dc
	// Line 1634, Address: 0x102a9b8, Func Offset: 0x1f8
	// Line 1635, Address: 0x102a9c0, Func Offset: 0x200
	// Line 1636, Address: 0x102a9c8, Func Offset: 0x208
	// Line 1637, Address: 0x102a9d4, Func Offset: 0x214
	// Line 1638, Address: 0x102a9ec, Func Offset: 0x22c
	// Line 1640, Address: 0x102a9fc, Func Offset: 0x23c
	// Line 1643, Address: 0x102aa08, Func Offset: 0x248
	// Line 1644, Address: 0x102aa10, Func Offset: 0x250
	// Line 1645, Address: 0x102aa14, Func Offset: 0x254
	// Func End, Address: 0x102aa34, Func Offset: 0x274
}

// 
// Start address: 0x102aa40
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1665, Address: 0x102aa40, Func Offset: 0
	// Line 1673, Address: 0x102aa68, Func Offset: 0x28
	// Line 1674, Address: 0x102aacc, Func Offset: 0x8c
	// Line 1680, Address: 0x102aad4, Func Offset: 0x94
	// Line 1681, Address: 0x102aadc, Func Offset: 0x9c
	// Line 1682, Address: 0x102aafc, Func Offset: 0xbc
	// Line 1683, Address: 0x102ab18, Func Offset: 0xd8
	// Line 1684, Address: 0x102ab20, Func Offset: 0xe0
	// Line 1685, Address: 0x102ab40, Func Offset: 0x100
	// Line 1688, Address: 0x102ab5c, Func Offset: 0x11c
	// Line 1689, Address: 0x102ab64, Func Offset: 0x124
	// Line 1690, Address: 0x102ab6c, Func Offset: 0x12c
	// Line 1691, Address: 0x102ab78, Func Offset: 0x138
	// Line 1692, Address: 0x102ab90, Func Offset: 0x150
	// Line 1693, Address: 0x102ab98, Func Offset: 0x158
	// Line 1698, Address: 0x102aba8, Func Offset: 0x168
	// Line 1701, Address: 0x102abb4, Func Offset: 0x174
	// Line 1702, Address: 0x102abbc, Func Offset: 0x17c
	// Line 1703, Address: 0x102abc0, Func Offset: 0x180
	// Func End, Address: 0x102abdc, Func Offset: 0x19c
}

// 
// Start address: 0x102abe0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1717, Address: 0x102abe0, Func Offset: 0
	// Line 1724, Address: 0x102abfc, Func Offset: 0x1c
	// Line 1725, Address: 0x102ac00, Func Offset: 0x20
	// Line 1726, Address: 0x102ac08, Func Offset: 0x28
	// Line 1727, Address: 0x102ac2c, Func Offset: 0x4c
	// Line 1728, Address: 0x102ac38, Func Offset: 0x58
	// Line 1729, Address: 0x102ac50, Func Offset: 0x70
	// Line 1730, Address: 0x102ac64, Func Offset: 0x84
	// Line 1735, Address: 0x102ac7c, Func Offset: 0x9c
	// Func End, Address: 0x102ac94, Func Offset: 0xb4
}

// 
// Start address: 0x102aca0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1749, Address: 0x102aca0, Func Offset: 0
	// Line 1750, Address: 0x102acac, Func Offset: 0xc
	// Line 1751, Address: 0x102acd8, Func Offset: 0x38
	// Line 1752, Address: 0x102ad24, Func Offset: 0x84
	// Line 1753, Address: 0x102ad50, Func Offset: 0xb0
	// Line 1755, Address: 0x102ad9c, Func Offset: 0xfc
	// Line 1761, Address: 0x102ada8, Func Offset: 0x108
	// Line 1762, Address: 0x102adac, Func Offset: 0x10c
	// Func End, Address: 0x102adb8, Func Offset: 0x118
}

// 
// Start address: 0x102adc0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x102adc0, Func Offset: 0
	// Line 1780, Address: 0x102addc, Func Offset: 0x1c
	// Line 1782, Address: 0x102adf8, Func Offset: 0x38
	// Func End, Address: 0x102ae08, Func Offset: 0x48
}

// 
// Start address: 0x102ae10
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1784, Address: 0x102ae10, Func Offset: 0
	// Line 1785, Address: 0x102ae2c, Func Offset: 0x1c
	// Line 1786, Address: 0x102ae30, Func Offset: 0x20
	// Line 1788, Address: 0x102ae4c, Func Offset: 0x3c
	// Func End, Address: 0x102ae5c, Func Offset: 0x4c
}

// 
// Start address: 0x102ae60
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1790, Address: 0x102ae60, Func Offset: 0
	// Line 1791, Address: 0x102ae74, Func Offset: 0x14
	// Line 1793, Address: 0x102ae90, Func Offset: 0x30
	// Func End, Address: 0x102aea0, Func Offset: 0x40
}

// 
// Start address: 0x102aea0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1795, Address: 0x102aea0, Func Offset: 0
	// Line 1796, Address: 0x102aebc, Func Offset: 0x1c
	// Line 1798, Address: 0x102aed8, Func Offset: 0x38
	// Func End, Address: 0x102aee8, Func Offset: 0x48
}

// 
// Start address: 0x102aef0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1800, Address: 0x102aef0, Func Offset: 0
	// Line 1801, Address: 0x102af08, Func Offset: 0x18
	// Line 1802, Address: 0x102af18, Func Offset: 0x28
	// Line 1803, Address: 0x102af28, Func Offset: 0x38
	// Line 1804, Address: 0x102af34, Func Offset: 0x44
	// Line 1806, Address: 0x102af40, Func Offset: 0x50
	// Line 1807, Address: 0x102af6c, Func Offset: 0x7c
	// Line 1810, Address: 0x102af98, Func Offset: 0xa8
	// Func End, Address: 0x102afa4, Func Offset: 0xb4
}

// 
// Start address: 0x102afb0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1826, Address: 0x102afb0, Func Offset: 0
	// Line 1833, Address: 0x102afc8, Func Offset: 0x18
	// Line 1834, Address: 0x102afd4, Func Offset: 0x24
	// Line 1835, Address: 0x102afe0, Func Offset: 0x30
	// Line 1836, Address: 0x102afe8, Func Offset: 0x38
	// Line 1837, Address: 0x102afec, Func Offset: 0x3c
	// Line 1841, Address: 0x102b004, Func Offset: 0x54
	// Line 1842, Address: 0x102b00c, Func Offset: 0x5c
	// Line 1843, Address: 0x102b010, Func Offset: 0x60
	// Line 1845, Address: 0x102b020, Func Offset: 0x70
	// Func End, Address: 0x102b040, Func Offset: 0x90
}

// 
// Start address: 0x102b040
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1848, Address: 0x102b040, Func Offset: 0
	// Line 1849, Address: 0x102b058, Func Offset: 0x18
	// Line 1850, Address: 0x102b078, Func Offset: 0x38
	// Func End, Address: 0x102b088, Func Offset: 0x48
}

// 
// Start address: 0x102b090
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1855, Address: 0x102b090, Func Offset: 0
	// Line 1859, Address: 0x102b0b0, Func Offset: 0x20
	// Line 1862, Address: 0x102b0cc, Func Offset: 0x3c
	// Line 1866, Address: 0x102b0f4, Func Offset: 0x64
	// Line 1867, Address: 0x102b100, Func Offset: 0x70
	// Line 1869, Address: 0x102b128, Func Offset: 0x98
	// Func End, Address: 0x102b138, Func Offset: 0xa8
}

// 
// Start address: 0x102b140
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1875, Address: 0x102b140, Func Offset: 0
	// Line 1878, Address: 0x102b15c, Func Offset: 0x1c
	// Line 1879, Address: 0x102b164, Func Offset: 0x24
	// Line 1882, Address: 0x102b16c, Func Offset: 0x2c
	// Line 1884, Address: 0x102b190, Func Offset: 0x50
	// Line 1885, Address: 0x102b1b0, Func Offset: 0x70
	// Line 1886, Address: 0x102b1b8, Func Offset: 0x78
	// Line 1887, Address: 0x102b1dc, Func Offset: 0x9c
	// Func End, Address: 0x102b1f8, Func Offset: 0xb8
}

// 
// Start address: 0x102b200
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1913, Address: 0x102b200, Func Offset: 0
	// Line 1918, Address: 0x102b228, Func Offset: 0x28
	// Line 1919, Address: 0x102b238, Func Offset: 0x38
	// Line 1921, Address: 0x102b254, Func Offset: 0x54
	// Line 1922, Address: 0x102b278, Func Offset: 0x78
	// Line 1923, Address: 0x102b2a0, Func Offset: 0xa0
	// Line 1924, Address: 0x102b2ac, Func Offset: 0xac
	// Line 1925, Address: 0x102b2b4, Func Offset: 0xb4
	// Line 1928, Address: 0x102b2d0, Func Offset: 0xd0
	// Line 1932, Address: 0x102b2f8, Func Offset: 0xf8
	// Line 1935, Address: 0x102b300, Func Offset: 0x100
	// Line 1936, Address: 0x102b304, Func Offset: 0x104
	// Line 1940, Address: 0x102b320, Func Offset: 0x120
	// Line 1947, Address: 0x102b348, Func Offset: 0x148
	// Func End, Address: 0x102b364, Func Offset: 0x164
}

// 
// Start address: 0x102b370
void mapinit()
{
	// Line 1958, Address: 0x102b370, Func Offset: 0
	// Line 1960, Address: 0x102b378, Func Offset: 0x8
	// Line 1961, Address: 0x102b38c, Func Offset: 0x1c
	// Line 1963, Address: 0x102b3a0, Func Offset: 0x30
	// Line 1964, Address: 0x102b3b8, Func Offset: 0x48
	// Line 1965, Address: 0x102b3d8, Func Offset: 0x68
	// Func End, Address: 0x102b3e8, Func Offset: 0x78
}

// 
// Start address: 0x102b3f0
void mapset()
{
	// Line 1970, Address: 0x102b3f0, Func Offset: 0
	// Func End, Address: 0x102b3f8, Func Offset: 0x8
}

// 
// Start address: 0x102b400
void divdevset()
{
	// Line 1974, Address: 0x102b400, Func Offset: 0
	// Func End, Address: 0x102b408, Func Offset: 0x8
}

// 
// Start address: 0x102b410
void enecginit()
{
	// Line 1978, Address: 0x102b410, Func Offset: 0
	// Func End, Address: 0x102b418, Func Offset: 0x8
}

