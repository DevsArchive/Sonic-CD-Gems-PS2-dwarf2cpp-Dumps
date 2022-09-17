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
typedef char type_2[10];
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
// Start address: 0x101f7e0
_anon2* main_chk()
{
	// Line 146, Address: 0x101f7e0, Func Offset: 0
	// Line 147, Address: 0x101f7f4, Func Offset: 0x14
	// Line 149, Address: 0x101f804, Func Offset: 0x24
	// Line 151, Address: 0x101f80c, Func Offset: 0x2c
	// Func End, Address: 0x101f814, Func Offset: 0x34
}

// 
// Start address: 0x101f820
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x101f820, Func Offset: 0
	// Line 192, Address: 0x101f82c, Func Offset: 0xc
	// Line 193, Address: 0x101f840, Func Offset: 0x20
	// Line 194, Address: 0x101f854, Func Offset: 0x34
	// Line 196, Address: 0x101f85c, Func Offset: 0x3c
	// Line 197, Address: 0x101f864, Func Offset: 0x44
	// Line 198, Address: 0x101f870, Func Offset: 0x50
	// Line 199, Address: 0x101f874, Func Offset: 0x54
	// Line 200, Address: 0x101f888, Func Offset: 0x68
	// Line 201, Address: 0x101f88c, Func Offset: 0x6c
	// Line 202, Address: 0x101f8a0, Func Offset: 0x80
	// Line 203, Address: 0x101f8a4, Func Offset: 0x84
	// Line 204, Address: 0x101f8b8, Func Offset: 0x98
	// Line 205, Address: 0x101f8bc, Func Offset: 0x9c
	// Line 206, Address: 0x101f8d0, Func Offset: 0xb0
	// Line 207, Address: 0x101f8f0, Func Offset: 0xd0
	// Line 208, Address: 0x101f8f4, Func Offset: 0xd4
	// Line 209, Address: 0x101f900, Func Offset: 0xe0
	// Line 211, Address: 0x101f90c, Func Offset: 0xec
	// Line 212, Address: 0x101f918, Func Offset: 0xf8
	// Line 214, Address: 0x101f924, Func Offset: 0x104
	// Line 215, Address: 0x101f92c, Func Offset: 0x10c
	// Func End, Address: 0x101f940, Func Offset: 0x120
}

// 
// Start address: 0x101f940
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x101f940, Func Offset: 0
	// Line 267, Address: 0x101f954, Func Offset: 0x14
	// Line 268, Address: 0x101f964, Func Offset: 0x24
	// Line 269, Address: 0x101f96c, Func Offset: 0x2c
	// Line 271, Address: 0x101f97c, Func Offset: 0x3c
	// Line 272, Address: 0x101f994, Func Offset: 0x54
	// Line 273, Address: 0x101f9a4, Func Offset: 0x64
	// Line 274, Address: 0x101f9ac, Func Offset: 0x6c
	// Line 276, Address: 0x101f9b0, Func Offset: 0x70
	// Line 278, Address: 0x101f9b8, Func Offset: 0x78
	// Line 279, Address: 0x101f9d8, Func Offset: 0x98
	// Line 280, Address: 0x101f9fc, Func Offset: 0xbc
	// Line 282, Address: 0x101fa04, Func Offset: 0xc4
	// Line 286, Address: 0x101fa24, Func Offset: 0xe4
	// Line 287, Address: 0x101fa38, Func Offset: 0xf8
	// Line 291, Address: 0x101fa4c, Func Offset: 0x10c
	// Line 292, Address: 0x101fa60, Func Offset: 0x120
	// Line 293, Address: 0x101fa6c, Func Offset: 0x12c
	// Line 294, Address: 0x101fa74, Func Offset: 0x134
	// Line 298, Address: 0x101fa78, Func Offset: 0x138
	// Line 299, Address: 0x101fa9c, Func Offset: 0x15c
	// Line 303, Address: 0x101faac, Func Offset: 0x16c
	// Line 305, Address: 0x101fab4, Func Offset: 0x174
	// Line 306, Address: 0x101fac8, Func Offset: 0x188
	// Line 307, Address: 0x101fad4, Func Offset: 0x194
	// Line 308, Address: 0x101fadc, Func Offset: 0x19c
	// Line 312, Address: 0x101fae0, Func Offset: 0x1a0
	// Line 313, Address: 0x101fb04, Func Offset: 0x1c4
	// Line 317, Address: 0x101fb14, Func Offset: 0x1d4
	// Line 319, Address: 0x101fb1c, Func Offset: 0x1dc
	// Line 322, Address: 0x101fb2c, Func Offset: 0x1ec
	// Line 323, Address: 0x101fb3c, Func Offset: 0x1fc
	// Line 324, Address: 0x101fb4c, Func Offset: 0x20c
	// Line 325, Address: 0x101fb5c, Func Offset: 0x21c
	// Line 326, Address: 0x101fb6c, Func Offset: 0x22c
	// Func End, Address: 0x101fb88, Func Offset: 0x248
}

// 
// Start address: 0x101fb90
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 347, Address: 0x101fb90, Func Offset: 0
	// Line 350, Address: 0x101fb9c, Func Offset: 0xc
	// Line 351, Address: 0x101fba4, Func Offset: 0x14
	// Line 353, Address: 0x101fba8, Func Offset: 0x18
	// Line 354, Address: 0x101fbb4, Func Offset: 0x24
	// Line 355, Address: 0x101fbc0, Func Offset: 0x30
	// Line 356, Address: 0x101fbcc, Func Offset: 0x3c
	// Line 358, Address: 0x101fbd8, Func Offset: 0x48
	// Line 359, Address: 0x101fbf4, Func Offset: 0x64
	// Line 361, Address: 0x101fc00, Func Offset: 0x70
	// Line 362, Address: 0x101fc1c, Func Offset: 0x8c
	// Line 364, Address: 0x101fc28, Func Offset: 0x98
	// Line 365, Address: 0x101fc44, Func Offset: 0xb4
	// Line 366, Address: 0x101fc68, Func Offset: 0xd8
	// Func End, Address: 0x101fc74, Func Offset: 0xe4
}

// 
// Start address: 0x101fc80
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
	// Line 382, Address: 0x101fc80, Func Offset: 0
	// Line 394, Address: 0x101fc9c, Func Offset: 0x1c
	// Line 399, Address: 0x101fcac, Func Offset: 0x2c
	// Line 401, Address: 0x101fcd8, Func Offset: 0x58
	// Line 403, Address: 0x101fce0, Func Offset: 0x60
	// Line 404, Address: 0x101fce8, Func Offset: 0x68
	// Line 406, Address: 0x101fcf0, Func Offset: 0x70
	// Line 407, Address: 0x101fd00, Func Offset: 0x80
	// Line 410, Address: 0x101fd10, Func Offset: 0x90
	// Line 411, Address: 0x101fd24, Func Offset: 0xa4
	// Line 413, Address: 0x101fd34, Func Offset: 0xb4
	// Line 414, Address: 0x101fd48, Func Offset: 0xc8
	// Line 416, Address: 0x101fd58, Func Offset: 0xd8
	// Line 417, Address: 0x101fd74, Func Offset: 0xf4
	// Line 419, Address: 0x101fd84, Func Offset: 0x104
	// Line 422, Address: 0x101fd98, Func Offset: 0x118
	// Line 424, Address: 0x101fda8, Func Offset: 0x128
	// Line 426, Address: 0x101fdd0, Func Offset: 0x150
	// Line 427, Address: 0x101fe08, Func Offset: 0x188
	// Line 429, Address: 0x101fe1c, Func Offset: 0x19c
	// Line 431, Address: 0x101fe28, Func Offset: 0x1a8
	// Line 433, Address: 0x101fe34, Func Offset: 0x1b4
	// Line 434, Address: 0x101fe54, Func Offset: 0x1d4
	// Line 436, Address: 0x101fe60, Func Offset: 0x1e0
	// Line 437, Address: 0x101fe74, Func Offset: 0x1f4
	// Line 439, Address: 0x101fe84, Func Offset: 0x204
	// Line 440, Address: 0x101fea4, Func Offset: 0x224
	// Line 442, Address: 0x101feb0, Func Offset: 0x230
	// Line 443, Address: 0x101fec4, Func Offset: 0x244
	// Line 445, Address: 0x101fed4, Func Offset: 0x254
	// Line 446, Address: 0x101fee0, Func Offset: 0x260
	// Line 447, Address: 0x101ff10, Func Offset: 0x290
	// Line 448, Address: 0x101ff40, Func Offset: 0x2c0
	// Line 449, Address: 0x101ff5c, Func Offset: 0x2dc
	// Func End, Address: 0x101ff80, Func Offset: 0x300
}

// 
// Start address: 0x101ff80
void z61aline(short** ppHscw)
{
	char z81ascrtbl[10];
	int i;
	int j;
	short sXwk;
	short radwk;
	short sinwk;
	short coswk;
	short hwk;
	int lXwk;
	int lHwk;
	// Line 463, Address: 0x101ff80, Func Offset: 0
	// Line 464, Address: 0x101ffa8, Func Offset: 0x28
	// Line 471, Address: 0x101ffdc, Func Offset: 0x5c
	// Line 472, Address: 0x1020000, Func Offset: 0x80
	// Line 473, Address: 0x1020004, Func Offset: 0x84
	// Line 475, Address: 0x1020014, Func Offset: 0x94
	// Line 477, Address: 0x1020028, Func Offset: 0xa8
	// Line 479, Address: 0x1020034, Func Offset: 0xb4
	// Line 480, Address: 0x1020048, Func Offset: 0xc8
	// Line 481, Address: 0x1020060, Func Offset: 0xe0
	// Line 482, Address: 0x1020064, Func Offset: 0xe4
	// Line 483, Address: 0x1020084, Func Offset: 0x104
	// Line 485, Address: 0x102009c, Func Offset: 0x11c
	// Line 486, Address: 0x10200b0, Func Offset: 0x130
	// Line 487, Address: 0x10200bc, Func Offset: 0x13c
	// Line 489, Address: 0x10200c8, Func Offset: 0x148
	// Line 490, Address: 0x10200d4, Func Offset: 0x154
	// Line 492, Address: 0x10200e0, Func Offset: 0x160
	// Line 493, Address: 0x10200f4, Func Offset: 0x174
	// Func End, Address: 0x1020120, Func Offset: 0x1a0
}

// 
// Start address: 0x1020120
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 514, Address: 0x1020120, Func Offset: 0
	// Line 518, Address: 0x102013c, Func Offset: 0x1c
	// Line 519, Address: 0x1020140, Func Offset: 0x20
	// Line 521, Address: 0x1020160, Func Offset: 0x40
	// Line 522, Address: 0x102017c, Func Offset: 0x5c
	// Line 523, Address: 0x1020188, Func Offset: 0x68
	// Line 525, Address: 0x1020194, Func Offset: 0x74
	// Line 526, Address: 0x102019c, Func Offset: 0x7c
	// Line 527, Address: 0x10201ac, Func Offset: 0x8c
	// Line 528, Address: 0x10201d0, Func Offset: 0xb0
	// Line 529, Address: 0x10201f0, Func Offset: 0xd0
	// Func End, Address: 0x1020204, Func Offset: 0xe4
}

// 
// Start address: 0x1020210
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 635, Address: 0x1020210, Func Offset: 0
	// Line 638, Address: 0x1020220, Func Offset: 0x10
	// Line 639, Address: 0x1020230, Func Offset: 0x20
	// Line 640, Address: 0x102023c, Func Offset: 0x2c
	// Line 642, Address: 0x1020274, Func Offset: 0x64
	// Line 643, Address: 0x102027c, Func Offset: 0x6c
	// Line 644, Address: 0x1020290, Func Offset: 0x80
	// Line 645, Address: 0x10202b0, Func Offset: 0xa0
	// Line 646, Address: 0x10202c4, Func Offset: 0xb4
	// Line 648, Address: 0x10202cc, Func Offset: 0xbc
	// Line 653, Address: 0x10202e0, Func Offset: 0xd0
	// Func End, Address: 0x10202f4, Func Offset: 0xe4
}

// 
// Start address: 0x1020300
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 671, Address: 0x1020300, Func Offset: 0
	// Line 675, Address: 0x1020314, Func Offset: 0x14
	// Line 676, Address: 0x102031c, Func Offset: 0x1c
	// Line 677, Address: 0x1020324, Func Offset: 0x24
	// Line 678, Address: 0x102032c, Func Offset: 0x2c
	// Line 679, Address: 0x1020330, Func Offset: 0x30
	// Line 680, Address: 0x1020354, Func Offset: 0x54
	// Line 681, Address: 0x1020360, Func Offset: 0x60
	// Line 683, Address: 0x102037c, Func Offset: 0x7c
	// Line 684, Address: 0x1020388, Func Offset: 0x88
	// Line 685, Address: 0x102039c, Func Offset: 0x9c
	// Line 686, Address: 0x10203a8, Func Offset: 0xa8
	// Line 687, Address: 0x10203cc, Func Offset: 0xcc
	// Line 689, Address: 0x10203d4, Func Offset: 0xd4
	// Line 694, Address: 0x10203fc, Func Offset: 0xfc
	// Func End, Address: 0x1020410, Func Offset: 0x110
}

// 
// Start address: 0x1020410
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 712, Address: 0x1020410, Func Offset: 0
	// Line 716, Address: 0x1020424, Func Offset: 0x14
	// Line 717, Address: 0x102042c, Func Offset: 0x1c
	// Line 718, Address: 0x1020434, Func Offset: 0x24
	// Line 719, Address: 0x102043c, Func Offset: 0x2c
	// Line 720, Address: 0x1020440, Func Offset: 0x30
	// Line 721, Address: 0x1020464, Func Offset: 0x54
	// Line 722, Address: 0x1020470, Func Offset: 0x60
	// Line 724, Address: 0x102048c, Func Offset: 0x7c
	// Line 725, Address: 0x1020498, Func Offset: 0x88
	// Line 726, Address: 0x10204ac, Func Offset: 0x9c
	// Line 727, Address: 0x10204b8, Func Offset: 0xa8
	// Line 728, Address: 0x10204dc, Func Offset: 0xcc
	// Line 730, Address: 0x10204e4, Func Offset: 0xd4
	// Line 735, Address: 0x102050c, Func Offset: 0xfc
	// Func End, Address: 0x1020520, Func Offset: 0x110
}

// 
// Start address: 0x1020520
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 753, Address: 0x1020520, Func Offset: 0
	// Line 757, Address: 0x1020534, Func Offset: 0x14
	// Line 758, Address: 0x102053c, Func Offset: 0x1c
	// Line 759, Address: 0x1020544, Func Offset: 0x24
	// Line 760, Address: 0x102054c, Func Offset: 0x2c
	// Line 761, Address: 0x1020550, Func Offset: 0x30
	// Line 762, Address: 0x1020574, Func Offset: 0x54
	// Line 763, Address: 0x1020580, Func Offset: 0x60
	// Line 765, Address: 0x102059c, Func Offset: 0x7c
	// Line 766, Address: 0x10205a8, Func Offset: 0x88
	// Line 767, Address: 0x10205bc, Func Offset: 0x9c
	// Line 768, Address: 0x10205c8, Func Offset: 0xa8
	// Line 769, Address: 0x10205ec, Func Offset: 0xcc
	// Line 771, Address: 0x10205f4, Func Offset: 0xd4
	// Line 776, Address: 0x102061c, Func Offset: 0xfc
	// Func End, Address: 0x1020630, Func Offset: 0x110
}

// 
// Start address: 0x1020630
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 791, Address: 0x1020630, Func Offset: 0
	// Line 795, Address: 0x1020640, Func Offset: 0x10
	// Line 797, Address: 0x1020650, Func Offset: 0x20
	// Line 798, Address: 0x1020658, Func Offset: 0x28
	// Line 799, Address: 0x102068c, Func Offset: 0x5c
	// Line 800, Address: 0x1020694, Func Offset: 0x64
	// Line 801, Address: 0x10206a8, Func Offset: 0x78
	// Line 802, Address: 0x10206cc, Func Offset: 0x9c
	// Line 803, Address: 0x10206e0, Func Offset: 0xb0
	// Line 804, Address: 0x10206e8, Func Offset: 0xb8
	// Line 809, Address: 0x10206fc, Func Offset: 0xcc
	// Func End, Address: 0x1020714, Func Offset: 0xe4
}

// 
// Start address: 0x1020720
void scrh_move()
{
	short xwk;
	// Line 826, Address: 0x1020720, Func Offset: 0
	// Line 829, Address: 0x1020728, Func Offset: 0x8
	// Line 830, Address: 0x1020770, Func Offset: 0x50
	// Line 832, Address: 0x1020780, Func Offset: 0x60
	// Line 833, Address: 0x1020788, Func Offset: 0x68
	// Line 834, Address: 0x1020790, Func Offset: 0x70
	// Line 836, Address: 0x10207a0, Func Offset: 0x80
	// Line 837, Address: 0x10207b4, Func Offset: 0x94
	// Line 841, Address: 0x10207c0, Func Offset: 0xa0
	// Line 842, Address: 0x10207d4, Func Offset: 0xb4
	// Line 843, Address: 0x10207f8, Func Offset: 0xd8
	// Line 845, Address: 0x1020808, Func Offset: 0xe8
	// Line 847, Address: 0x1020810, Func Offset: 0xf0
	// Line 848, Address: 0x1020824, Func Offset: 0x104
	// Line 852, Address: 0x1020830, Func Offset: 0x110
	// Line 853, Address: 0x1020844, Func Offset: 0x124
	// Line 854, Address: 0x1020868, Func Offset: 0x148
	// Line 859, Address: 0x1020878, Func Offset: 0x158
	// Line 860, Address: 0x10208a8, Func Offset: 0x188
	// Line 861, Address: 0x10208b0, Func Offset: 0x190
	// Func End, Address: 0x10208c0, Func Offset: 0x1a0
}

// 
// Start address: 0x10208c0
void scroll_v()
{
	short ywk;
	// Line 876, Address: 0x10208c0, Func Offset: 0
	// Line 879, Address: 0x10208cc, Func Offset: 0xc
	// Line 880, Address: 0x1020900, Func Offset: 0x40
	// Line 881, Address: 0x1020918, Func Offset: 0x58
	// Line 885, Address: 0x1020924, Func Offset: 0x64
	// Line 886, Address: 0x102093c, Func Offset: 0x7c
	// Line 887, Address: 0x1020948, Func Offset: 0x88
	// Line 888, Address: 0x102096c, Func Offset: 0xac
	// Line 889, Address: 0x1020980, Func Offset: 0xc0
	// Line 890, Address: 0x102098c, Func Offset: 0xcc
	// Line 891, Address: 0x1020994, Func Offset: 0xd4
	// Line 892, Address: 0x10209bc, Func Offset: 0xfc
	// Line 893, Address: 0x10209e4, Func Offset: 0x124
	// Line 894, Address: 0x10209f0, Func Offset: 0x130
	// Line 896, Address: 0x10209f8, Func Offset: 0x138
	// Line 897, Address: 0x1020a20, Func Offset: 0x160
	// Line 898, Address: 0x1020a30, Func Offset: 0x170
	// Line 899, Address: 0x1020a38, Func Offset: 0x178
	// Line 904, Address: 0x1020a40, Func Offset: 0x180
	// Line 905, Address: 0x1020a6c, Func Offset: 0x1ac
	// Line 906, Address: 0x1020a78, Func Offset: 0x1b8
	// Line 907, Address: 0x1020a80, Func Offset: 0x1c0
	// Line 908, Address: 0x1020a90, Func Offset: 0x1d0
	// Line 909, Address: 0x1020a98, Func Offset: 0x1d8
	// Line 914, Address: 0x1020aa0, Func Offset: 0x1e0
	// Line 915, Address: 0x1020aa8, Func Offset: 0x1e8
	// Func End, Address: 0x1020abc, Func Offset: 0x1fc
}

// 
// Start address: 0x1020ac0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 929, Address: 0x1020ac0, Func Offset: 0
	// Line 932, Address: 0x1020ad0, Func Offset: 0x10
	// Line 933, Address: 0x1020aec, Func Offset: 0x2c
	// Line 934, Address: 0x1020b04, Func Offset: 0x44
	// Line 935, Address: 0x1020b28, Func Offset: 0x68
	// Line 936, Address: 0x1020b30, Func Offset: 0x70
	// Line 940, Address: 0x1020b40, Func Offset: 0x80
	// Line 941, Address: 0x1020b54, Func Offset: 0x94
	// Line 942, Address: 0x1020b60, Func Offset: 0xa0
	// Line 945, Address: 0x1020b68, Func Offset: 0xa8
	// Line 946, Address: 0x1020b80, Func Offset: 0xc0
	// Line 947, Address: 0x1020b8c, Func Offset: 0xcc
	// Line 948, Address: 0x1020bac, Func Offset: 0xec
	// Line 949, Address: 0x1020bb8, Func Offset: 0xf8
	// Line 950, Address: 0x1020bc0, Func Offset: 0x100
	// Line 952, Address: 0x1020bcc, Func Offset: 0x10c
	// Line 954, Address: 0x1020bd4, Func Offset: 0x114
	// Line 955, Address: 0x1020bec, Func Offset: 0x12c
	// Line 956, Address: 0x1020bf8, Func Offset: 0x138
	// Line 957, Address: 0x1020c18, Func Offset: 0x158
	// Line 958, Address: 0x1020c24, Func Offset: 0x164
	// Line 959, Address: 0x1020c2c, Func Offset: 0x16c
	// Line 962, Address: 0x1020c38, Func Offset: 0x178
	// Func End, Address: 0x1020c4c, Func Offset: 0x18c
}

// 
// Start address: 0x1020c50
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 976, Address: 0x1020c50, Func Offset: 0
	// Line 979, Address: 0x1020c60, Func Offset: 0x10
	// Line 981, Address: 0x1020c6c, Func Offset: 0x1c
	// Line 982, Address: 0x1020c84, Func Offset: 0x34
	// Line 983, Address: 0x1020c90, Func Offset: 0x40
	// Line 984, Address: 0x1020cb0, Func Offset: 0x60
	// Line 985, Address: 0x1020cbc, Func Offset: 0x6c
	// Line 986, Address: 0x1020cc4, Func Offset: 0x74
	// Line 988, Address: 0x1020cd0, Func Offset: 0x80
	// Func End, Address: 0x1020ce4, Func Offset: 0x94
}

// 
// Start address: 0x1020cf0
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1003, Address: 0x1020cf0, Func Offset: 0
	// Line 1006, Address: 0x1020cfc, Func Offset: 0xc
	// Line 1007, Address: 0x1020d28, Func Offset: 0x38
	// Line 1008, Address: 0x1020d3c, Func Offset: 0x4c
	// Line 1009, Address: 0x1020d48, Func Offset: 0x58
	// Line 1010, Address: 0x1020d50, Func Offset: 0x60
	// Line 1012, Address: 0x1020d5c, Func Offset: 0x6c
	// Func End, Address: 0x1020d6c, Func Offset: 0x7c
}

// 
// Start address: 0x1020d70
void sv_move_sub2()
{
	// Line 1016, Address: 0x1020d70, Func Offset: 0
	// Line 1017, Address: 0x1020d78, Func Offset: 0x8
	// Line 1019, Address: 0x1020d80, Func Offset: 0x10
	// Line 1020, Address: 0x1020d8c, Func Offset: 0x1c
	// Func End, Address: 0x1020d9c, Func Offset: 0x2c
}

// 
// Start address: 0x1020da0
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1034, Address: 0x1020da0, Func Offset: 0
	// Line 1037, Address: 0x1020dac, Func Offset: 0xc
	// Line 1038, Address: 0x1020dd0, Func Offset: 0x30
	// Line 1039, Address: 0x1020df4, Func Offset: 0x54
	// Line 1040, Address: 0x1020e00, Func Offset: 0x60
	// Func End, Address: 0x1020e10, Func Offset: 0x70
}

// 
// Start address: 0x1020e10
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1055, Address: 0x1020e10, Func Offset: 0
	// Line 1056, Address: 0x1020e1c, Func Offset: 0xc
	// Line 1057, Address: 0x1020e44, Func Offset: 0x34
	// Line 1059, Address: 0x1020e5c, Func Offset: 0x4c
	// Line 1060, Address: 0x1020e68, Func Offset: 0x58
	// Line 1061, Address: 0x1020e70, Func Offset: 0x60
	// Line 1062, Address: 0x1020e7c, Func Offset: 0x6c
	// Line 1063, Address: 0x1020e90, Func Offset: 0x80
	// Line 1064, Address: 0x1020ea4, Func Offset: 0x94
	// Line 1068, Address: 0x1020eb8, Func Offset: 0xa8
	// Line 1069, Address: 0x1020ec4, Func Offset: 0xb4
	// Func End, Address: 0x1020ed4, Func Offset: 0xc4
}

// 
// Start address: 0x1020ee0
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1083, Address: 0x1020ee0, Func Offset: 0
	// Line 1086, Address: 0x1020eec, Func Offset: 0xc
	// Line 1087, Address: 0x1020f0c, Func Offset: 0x2c
	// Line 1088, Address: 0x1020f30, Func Offset: 0x50
	// Line 1089, Address: 0x1020f3c, Func Offset: 0x5c
	// Func End, Address: 0x1020f4c, Func Offset: 0x6c
}

// 
// Start address: 0x1020f50
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1104, Address: 0x1020f50, Func Offset: 0
	// Line 1105, Address: 0x1020f5c, Func Offset: 0xc
	// Line 1106, Address: 0x1020f84, Func Offset: 0x34
	// Line 1108, Address: 0x1020f9c, Func Offset: 0x4c
	// Line 1109, Address: 0x1020fa8, Func Offset: 0x58
	// Line 1110, Address: 0x1020fb0, Func Offset: 0x60
	// Line 1111, Address: 0x1020fbc, Func Offset: 0x6c
	// Line 1112, Address: 0x1020fd0, Func Offset: 0x80
	// Line 1113, Address: 0x1020fe4, Func Offset: 0x94
	// Line 1117, Address: 0x1020ff8, Func Offset: 0xa8
	// Line 1118, Address: 0x1021004, Func Offset: 0xb4
	// Func End, Address: 0x1021014, Func Offset: 0xc4
}

// 
// Start address: 0x1021020
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1135, Address: 0x1021020, Func Offset: 0
	// Line 1139, Address: 0x1021030, Func Offset: 0x10
	// Line 1140, Address: 0x1021040, Func Offset: 0x20
	// Line 1141, Address: 0x1021064, Func Offset: 0x44
	// Line 1142, Address: 0x1021078, Func Offset: 0x58
	// Line 1143, Address: 0x1021090, Func Offset: 0x70
	// Line 1145, Address: 0x102109c, Func Offset: 0x7c
	// Line 1147, Address: 0x10210a8, Func Offset: 0x88
	// Line 1148, Address: 0x10210e4, Func Offset: 0xc4
	// Line 1149, Address: 0x10210ec, Func Offset: 0xcc
	// Line 1150, Address: 0x1021100, Func Offset: 0xe0
	// Line 1151, Address: 0x102112c, Func Offset: 0x10c
	// Line 1152, Address: 0x102113c, Func Offset: 0x11c
	// Line 1153, Address: 0x1021150, Func Offset: 0x130
	// Line 1154, Address: 0x1021158, Func Offset: 0x138
	// Line 1159, Address: 0x102116c, Func Offset: 0x14c
	// Func End, Address: 0x1021180, Func Offset: 0x160
}

// 
// Start address: 0x1021180
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
	// Line 1177, Address: 0x1021180, Func Offset: 0
	// Line 1186, Address: 0x10211a0, Func Offset: 0x20
	// Line 1187, Address: 0x10211a4, Func Offset: 0x24
	// Line 1188, Address: 0x10211b0, Func Offset: 0x30
	// Line 1189, Address: 0x10211bc, Func Offset: 0x3c
	// Line 1190, Address: 0x10211c4, Func Offset: 0x44
	// Line 1191, Address: 0x10211cc, Func Offset: 0x4c
	// Line 1193, Address: 0x10211e0, Func Offset: 0x60
	// Line 1194, Address: 0x10211e4, Func Offset: 0x64
	// Line 1195, Address: 0x10211f0, Func Offset: 0x70
	// Line 1196, Address: 0x10211fc, Func Offset: 0x7c
	// Line 1197, Address: 0x1021204, Func Offset: 0x84
	// Line 1199, Address: 0x102120c, Func Offset: 0x8c
	// Line 1200, Address: 0x1021218, Func Offset: 0x98
	// Line 1201, Address: 0x102122c, Func Offset: 0xac
	// Line 1203, Address: 0x1021238, Func Offset: 0xb8
	// Line 1204, Address: 0x1021240, Func Offset: 0xc0
	// Line 1206, Address: 0x1021248, Func Offset: 0xc8
	// Line 1208, Address: 0x1021268, Func Offset: 0xe8
	// Line 1214, Address: 0x1021294, Func Offset: 0x114
	// Line 1215, Address: 0x10212a8, Func Offset: 0x128
	// Line 1217, Address: 0x10212b4, Func Offset: 0x134
	// Line 1218, Address: 0x10212bc, Func Offset: 0x13c
	// Line 1219, Address: 0x10212c4, Func Offset: 0x144
	// Line 1221, Address: 0x10212e4, Func Offset: 0x164
	// Line 1227, Address: 0x1021310, Func Offset: 0x190
	// Line 1228, Address: 0x1021324, Func Offset: 0x1a4
	// Line 1230, Address: 0x1021330, Func Offset: 0x1b0
	// Line 1231, Address: 0x1021338, Func Offset: 0x1b8
	// Line 1232, Address: 0x1021340, Func Offset: 0x1c0
	// Line 1234, Address: 0x1021360, Func Offset: 0x1e0
	// Line 1240, Address: 0x102138c, Func Offset: 0x20c
	// Line 1241, Address: 0x10213a0, Func Offset: 0x220
	// Line 1243, Address: 0x10213ac, Func Offset: 0x22c
	// Line 1244, Address: 0x10213b4, Func Offset: 0x234
	// Line 1245, Address: 0x10213bc, Func Offset: 0x23c
	// Line 1247, Address: 0x10213dc, Func Offset: 0x25c
	// Line 1256, Address: 0x1021408, Func Offset: 0x288
	// Func End, Address: 0x1021430, Func Offset: 0x2b0
}

// 
// Start address: 0x1021430
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
	// Line 1273, Address: 0x1021430, Func Offset: 0
	// Line 1284, Address: 0x102145c, Func Offset: 0x2c
	// Line 1286, Address: 0x1021464, Func Offset: 0x34
	// Line 1287, Address: 0x102147c, Func Offset: 0x4c
	// Line 1288, Address: 0x1021490, Func Offset: 0x60
	// Line 1290, Address: 0x1021498, Func Offset: 0x68
	// Line 1292, Address: 0x10214ac, Func Offset: 0x7c
	// Line 1293, Address: 0x10214c4, Func Offset: 0x94
	// Line 1294, Address: 0x10214d8, Func Offset: 0xa8
	// Line 1295, Address: 0x10214e0, Func Offset: 0xb0
	// Line 1297, Address: 0x10214e8, Func Offset: 0xb8
	// Line 1298, Address: 0x10214fc, Func Offset: 0xcc
	// Line 1303, Address: 0x1021504, Func Offset: 0xd4
	// Line 1304, Address: 0x1021554, Func Offset: 0x124
	// Line 1305, Address: 0x102155c, Func Offset: 0x12c
	// Line 1311, Address: 0x102157c, Func Offset: 0x14c
	// Line 1312, Address: 0x102159c, Func Offset: 0x16c
	// Line 1313, Address: 0x10215c0, Func Offset: 0x190
	// Line 1314, Address: 0x10215cc, Func Offset: 0x19c
	// Line 1315, Address: 0x10215d4, Func Offset: 0x1a4
	// Line 1317, Address: 0x10215f4, Func Offset: 0x1c4
	// Line 1321, Address: 0x1021620, Func Offset: 0x1f0
	// Line 1324, Address: 0x1021628, Func Offset: 0x1f8
	// Line 1325, Address: 0x102162c, Func Offset: 0x1fc
	// Line 1329, Address: 0x102164c, Func Offset: 0x21c
	// Line 1336, Address: 0x1021678, Func Offset: 0x248
	// Line 1343, Address: 0x102168c, Func Offset: 0x25c
	// Line 1344, Address: 0x1021694, Func Offset: 0x264
	// Line 1345, Address: 0x102169c, Func Offset: 0x26c
	// Line 1346, Address: 0x10216b4, Func Offset: 0x284
	// Line 1347, Address: 0x10216d4, Func Offset: 0x2a4
	// Line 1351, Address: 0x10216dc, Func Offset: 0x2ac
	// Line 1353, Address: 0x102170c, Func Offset: 0x2dc
	// Line 1354, Address: 0x1021718, Func Offset: 0x2e8
	// Line 1358, Address: 0x1021728, Func Offset: 0x2f8
	// Line 1359, Address: 0x1021734, Func Offset: 0x304
	// Line 1360, Address: 0x1021754, Func Offset: 0x324
	// Line 1361, Address: 0x102178c, Func Offset: 0x35c
	// Line 1362, Address: 0x10217ac, Func Offset: 0x37c
	// Line 1364, Address: 0x10217d0, Func Offset: 0x3a0
	// Line 1367, Address: 0x10217f4, Func Offset: 0x3c4
	// Line 1369, Address: 0x1021814, Func Offset: 0x3e4
	// Line 1371, Address: 0x1021828, Func Offset: 0x3f8
	// Line 1372, Address: 0x1021834, Func Offset: 0x404
	// Line 1373, Address: 0x1021844, Func Offset: 0x414
	// Line 1375, Address: 0x102184c, Func Offset: 0x41c
	// Func End, Address: 0x1021874, Func Offset: 0x444
}

// 
// Start address: 0x1021880
void scrollwrtc()
{
	// Line 1381, Address: 0x1021880, Func Offset: 0
	// Func End, Address: 0x1021888, Func Offset: 0x8
}

// 
// Start address: 0x1021890
void scrollwrtz()
{
	// Line 1386, Address: 0x1021890, Func Offset: 0
	// Func End, Address: 0x1021898, Func Offset: 0x8
}

// 
// Start address: 0x10218a0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1404, Address: 0x10218a0, Func Offset: 0
	// Line 1417, Address: 0x10218c8, Func Offset: 0x28
	// Line 1420, Address: 0x10218e8, Func Offset: 0x48
	// Line 1421, Address: 0x10218fc, Func Offset: 0x5c
	// Line 1422, Address: 0x1021910, Func Offset: 0x70
	// Line 1423, Address: 0x1021924, Func Offset: 0x84
	// Line 1425, Address: 0x1021938, Func Offset: 0x98
	// Line 1426, Address: 0x1021944, Func Offset: 0xa4
	// Line 1427, Address: 0x1021958, Func Offset: 0xb8
	// Func End, Address: 0x1021968, Func Offset: 0xc8
}

// 
// Start address: 0x1021970
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1431, Address: 0x1021970, Func Offset: 0
	// Line 1435, Address: 0x1021998, Func Offset: 0x28
	// Line 1438, Address: 0x10219b8, Func Offset: 0x48
	// Line 1439, Address: 0x10219cc, Func Offset: 0x5c
	// Line 1440, Address: 0x10219e0, Func Offset: 0x70
	// Line 1441, Address: 0x10219f4, Func Offset: 0x84
	// Line 1443, Address: 0x1021a08, Func Offset: 0x98
	// Line 1444, Address: 0x1021a14, Func Offset: 0xa4
	// Line 1445, Address: 0x1021a28, Func Offset: 0xb8
	// Func End, Address: 0x1021a38, Func Offset: 0xc8
}

// 
// Start address: 0x1021a40
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1465, Address: 0x1021a40, Func Offset: 0
	// Line 1469, Address: 0x1021a68, Func Offset: 0x28
	// Line 1472, Address: 0x1021a88, Func Offset: 0x48
	// Line 1473, Address: 0x1021a9c, Func Offset: 0x5c
	// Line 1474, Address: 0x1021aac, Func Offset: 0x6c
	// Line 1475, Address: 0x1021ac0, Func Offset: 0x80
	// Line 1477, Address: 0x1021ad0, Func Offset: 0x90
	// Line 1478, Address: 0x1021adc, Func Offset: 0x9c
	// Line 1479, Address: 0x1021af0, Func Offset: 0xb0
	// Func End, Address: 0x1021b00, Func Offset: 0xc0
}

// 
// Start address: 0x1021b00
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
	// Line 1498, Address: 0x1021b00, Func Offset: 0
	// Line 1504, Address: 0x1021b34, Func Offset: 0x34
	// Line 1506, Address: 0x1021b44, Func Offset: 0x44
	// Line 1507, Address: 0x1021b48, Func Offset: 0x48
	// Line 1508, Address: 0x1021b50, Func Offset: 0x50
	// Line 1510, Address: 0x1021b60, Func Offset: 0x60
	// Line 1512, Address: 0x1021b64, Func Offset: 0x64
	// Line 1513, Address: 0x1021b6c, Func Offset: 0x6c
	// Line 1516, Address: 0x1021b74, Func Offset: 0x74
	// Line 1517, Address: 0x1021b7c, Func Offset: 0x7c
	// Line 1518, Address: 0x1021b88, Func Offset: 0x88
	// Line 1520, Address: 0x1021b94, Func Offset: 0x94
	// Line 1521, Address: 0x1021b9c, Func Offset: 0x9c
	// Line 1522, Address: 0x1021ba4, Func Offset: 0xa4
	// Line 1523, Address: 0x1021bac, Func Offset: 0xac
	// Line 1525, Address: 0x1021bb8, Func Offset: 0xb8
	// Line 1526, Address: 0x1021bc0, Func Offset: 0xc0
	// Line 1527, Address: 0x1021bc8, Func Offset: 0xc8
	// Line 1528, Address: 0x1021bd0, Func Offset: 0xd0
	// Line 1530, Address: 0x1021bdc, Func Offset: 0xdc
	// Line 1531, Address: 0x1021be4, Func Offset: 0xe4
	// Line 1532, Address: 0x1021bec, Func Offset: 0xec
	// Line 1535, Address: 0x1021bf4, Func Offset: 0xf4
	// Line 1536, Address: 0x1021bfc, Func Offset: 0xfc
	// Line 1539, Address: 0x1021c04, Func Offset: 0x104
	// Line 1540, Address: 0x1021c48, Func Offset: 0x148
	// Line 1541, Address: 0x1021c8c, Func Offset: 0x18c
	// Line 1542, Address: 0x1021cd0, Func Offset: 0x1d0
	// Line 1544, Address: 0x1021d14, Func Offset: 0x214
	// Func End, Address: 0x1021d44, Func Offset: 0x244
}

// 
// Start address: 0x1021d50
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1562, Address: 0x1021d50, Func Offset: 0
	// Line 1563, Address: 0x1021d70, Func Offset: 0x20
	// Line 1564, Address: 0x1021d90, Func Offset: 0x40
	// Func End, Address: 0x1021da0, Func Offset: 0x50
}

// 
// Start address: 0x1021da0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1566, Address: 0x1021da0, Func Offset: 0
	// Line 1567, Address: 0x1021dc0, Func Offset: 0x20
	// Line 1568, Address: 0x1021dc4, Func Offset: 0x24
	// Line 1569, Address: 0x1021de4, Func Offset: 0x44
	// Func End, Address: 0x1021df4, Func Offset: 0x54
}

// 
// Start address: 0x1021e00
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1576, Address: 0x1021e00, Func Offset: 0
	// Line 1582, Address: 0x1021e30, Func Offset: 0x30
	// Line 1583, Address: 0x1021e40, Func Offset: 0x40
	// Line 1589, Address: 0x1021e50, Func Offset: 0x50
	// Line 1590, Address: 0x1021e6c, Func Offset: 0x6c
	// Line 1591, Address: 0x1021e70, Func Offset: 0x70
	// Line 1592, Address: 0x1021e8c, Func Offset: 0x8c
	// Line 1593, Address: 0x1021e90, Func Offset: 0x90
	// Line 1594, Address: 0x1021eb0, Func Offset: 0xb0
	// Line 1595, Address: 0x1021eb8, Func Offset: 0xb8
	// Line 1596, Address: 0x1021ed8, Func Offset: 0xd8
	// Line 1597, Address: 0x1021ee0, Func Offset: 0xe0
	// Line 1598, Address: 0x1021f28, Func Offset: 0x128
	// Line 1600, Address: 0x1021f34, Func Offset: 0x134
	// Line 1602, Address: 0x1021f50, Func Offset: 0x150
	// Line 1607, Address: 0x1021f58, Func Offset: 0x158
	// Line 1608, Address: 0x1021f64, Func Offset: 0x164
	// Line 1611, Address: 0x1021f70, Func Offset: 0x170
	// Line 1612, Address: 0x1021f78, Func Offset: 0x178
	// Line 1613, Address: 0x1021f98, Func Offset: 0x198
	// Line 1614, Address: 0x1021fb4, Func Offset: 0x1b4
	// Line 1615, Address: 0x1021fbc, Func Offset: 0x1bc
	// Line 1616, Address: 0x1021fdc, Func Offset: 0x1dc
	// Line 1618, Address: 0x1021ff8, Func Offset: 0x1f8
	// Line 1619, Address: 0x1022000, Func Offset: 0x200
	// Line 1620, Address: 0x1022008, Func Offset: 0x208
	// Line 1621, Address: 0x1022014, Func Offset: 0x214
	// Line 1622, Address: 0x102202c, Func Offset: 0x22c
	// Line 1624, Address: 0x102203c, Func Offset: 0x23c
	// Line 1627, Address: 0x1022048, Func Offset: 0x248
	// Line 1628, Address: 0x1022050, Func Offset: 0x250
	// Line 1629, Address: 0x1022054, Func Offset: 0x254
	// Func End, Address: 0x1022074, Func Offset: 0x274
}

// 
// Start address: 0x1022080
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1649, Address: 0x1022080, Func Offset: 0
	// Line 1657, Address: 0x10220a8, Func Offset: 0x28
	// Line 1658, Address: 0x102210c, Func Offset: 0x8c
	// Line 1664, Address: 0x1022114, Func Offset: 0x94
	// Line 1665, Address: 0x102211c, Func Offset: 0x9c
	// Line 1666, Address: 0x102213c, Func Offset: 0xbc
	// Line 1667, Address: 0x1022158, Func Offset: 0xd8
	// Line 1668, Address: 0x1022160, Func Offset: 0xe0
	// Line 1669, Address: 0x1022180, Func Offset: 0x100
	// Line 1672, Address: 0x102219c, Func Offset: 0x11c
	// Line 1673, Address: 0x10221a4, Func Offset: 0x124
	// Line 1674, Address: 0x10221ac, Func Offset: 0x12c
	// Line 1675, Address: 0x10221b8, Func Offset: 0x138
	// Line 1676, Address: 0x10221d0, Func Offset: 0x150
	// Line 1677, Address: 0x10221d8, Func Offset: 0x158
	// Line 1682, Address: 0x10221e8, Func Offset: 0x168
	// Line 1685, Address: 0x10221f4, Func Offset: 0x174
	// Line 1686, Address: 0x10221fc, Func Offset: 0x17c
	// Line 1687, Address: 0x1022200, Func Offset: 0x180
	// Func End, Address: 0x102221c, Func Offset: 0x19c
}

// 
// Start address: 0x1022220
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1701, Address: 0x1022220, Func Offset: 0
	// Line 1708, Address: 0x102223c, Func Offset: 0x1c
	// Line 1709, Address: 0x1022240, Func Offset: 0x20
	// Line 1710, Address: 0x1022248, Func Offset: 0x28
	// Line 1711, Address: 0x102226c, Func Offset: 0x4c
	// Line 1712, Address: 0x1022278, Func Offset: 0x58
	// Line 1713, Address: 0x1022290, Func Offset: 0x70
	// Line 1714, Address: 0x10222a4, Func Offset: 0x84
	// Line 1719, Address: 0x10222bc, Func Offset: 0x9c
	// Func End, Address: 0x10222d4, Func Offset: 0xb4
}

// 
// Start address: 0x10222e0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1733, Address: 0x10222e0, Func Offset: 0
	// Line 1734, Address: 0x10222ec, Func Offset: 0xc
	// Line 1735, Address: 0x1022318, Func Offset: 0x38
	// Line 1736, Address: 0x1022364, Func Offset: 0x84
	// Line 1737, Address: 0x1022390, Func Offset: 0xb0
	// Line 1739, Address: 0x10223dc, Func Offset: 0xfc
	// Line 1745, Address: 0x10223e8, Func Offset: 0x108
	// Line 1746, Address: 0x10223ec, Func Offset: 0x10c
	// Func End, Address: 0x10223f8, Func Offset: 0x118
}

// 
// Start address: 0x1022400
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1763, Address: 0x1022400, Func Offset: 0
	// Line 1764, Address: 0x102241c, Func Offset: 0x1c
	// Line 1766, Address: 0x1022438, Func Offset: 0x38
	// Func End, Address: 0x1022448, Func Offset: 0x48
}

// 
// Start address: 0x1022450
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1768, Address: 0x1022450, Func Offset: 0
	// Line 1769, Address: 0x102246c, Func Offset: 0x1c
	// Line 1770, Address: 0x1022470, Func Offset: 0x20
	// Line 1772, Address: 0x102248c, Func Offset: 0x3c
	// Func End, Address: 0x102249c, Func Offset: 0x4c
}

// 
// Start address: 0x10224a0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1774, Address: 0x10224a0, Func Offset: 0
	// Line 1775, Address: 0x10224b4, Func Offset: 0x14
	// Line 1777, Address: 0x10224d0, Func Offset: 0x30
	// Func End, Address: 0x10224e0, Func Offset: 0x40
}

// 
// Start address: 0x10224e0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x10224e0, Func Offset: 0
	// Line 1780, Address: 0x10224fc, Func Offset: 0x1c
	// Line 1782, Address: 0x1022518, Func Offset: 0x38
	// Func End, Address: 0x1022528, Func Offset: 0x48
}

// 
// Start address: 0x1022530
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1784, Address: 0x1022530, Func Offset: 0
	// Line 1785, Address: 0x1022548, Func Offset: 0x18
	// Line 1786, Address: 0x1022558, Func Offset: 0x28
	// Line 1787, Address: 0x1022568, Func Offset: 0x38
	// Line 1788, Address: 0x1022574, Func Offset: 0x44
	// Line 1790, Address: 0x1022580, Func Offset: 0x50
	// Line 1791, Address: 0x10225ac, Func Offset: 0x7c
	// Line 1794, Address: 0x10225d8, Func Offset: 0xa8
	// Func End, Address: 0x10225e4, Func Offset: 0xb4
}

// 
// Start address: 0x10225f0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1810, Address: 0x10225f0, Func Offset: 0
	// Line 1817, Address: 0x1022608, Func Offset: 0x18
	// Line 1818, Address: 0x1022614, Func Offset: 0x24
	// Line 1819, Address: 0x1022620, Func Offset: 0x30
	// Line 1820, Address: 0x1022628, Func Offset: 0x38
	// Line 1821, Address: 0x102262c, Func Offset: 0x3c
	// Line 1825, Address: 0x1022644, Func Offset: 0x54
	// Line 1826, Address: 0x102264c, Func Offset: 0x5c
	// Line 1827, Address: 0x1022650, Func Offset: 0x60
	// Line 1829, Address: 0x1022660, Func Offset: 0x70
	// Func End, Address: 0x1022680, Func Offset: 0x90
}

// 
// Start address: 0x1022680
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1832, Address: 0x1022680, Func Offset: 0
	// Line 1833, Address: 0x1022698, Func Offset: 0x18
	// Line 1834, Address: 0x10226b8, Func Offset: 0x38
	// Func End, Address: 0x10226c8, Func Offset: 0x48
}

// 
// Start address: 0x10226d0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1839, Address: 0x10226d0, Func Offset: 0
	// Line 1843, Address: 0x10226f0, Func Offset: 0x20
	// Line 1846, Address: 0x102270c, Func Offset: 0x3c
	// Line 1850, Address: 0x1022734, Func Offset: 0x64
	// Line 1851, Address: 0x1022740, Func Offset: 0x70
	// Line 1853, Address: 0x1022768, Func Offset: 0x98
	// Func End, Address: 0x1022778, Func Offset: 0xa8
}

// 
// Start address: 0x1022780
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1859, Address: 0x1022780, Func Offset: 0
	// Line 1862, Address: 0x102279c, Func Offset: 0x1c
	// Line 1863, Address: 0x10227a4, Func Offset: 0x24
	// Line 1866, Address: 0x10227ac, Func Offset: 0x2c
	// Line 1868, Address: 0x10227d0, Func Offset: 0x50
	// Line 1869, Address: 0x10227f0, Func Offset: 0x70
	// Line 1870, Address: 0x10227f8, Func Offset: 0x78
	// Line 1871, Address: 0x102281c, Func Offset: 0x9c
	// Func End, Address: 0x1022838, Func Offset: 0xb8
}

// 
// Start address: 0x1022840
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1897, Address: 0x1022840, Func Offset: 0
	// Line 1902, Address: 0x1022868, Func Offset: 0x28
	// Line 1903, Address: 0x1022878, Func Offset: 0x38
	// Line 1905, Address: 0x1022894, Func Offset: 0x54
	// Line 1906, Address: 0x10228b8, Func Offset: 0x78
	// Line 1907, Address: 0x10228e0, Func Offset: 0xa0
	// Line 1908, Address: 0x10228ec, Func Offset: 0xac
	// Line 1909, Address: 0x10228f4, Func Offset: 0xb4
	// Line 1912, Address: 0x1022910, Func Offset: 0xd0
	// Line 1916, Address: 0x1022938, Func Offset: 0xf8
	// Line 1919, Address: 0x1022940, Func Offset: 0x100
	// Line 1920, Address: 0x1022944, Func Offset: 0x104
	// Line 1924, Address: 0x1022960, Func Offset: 0x120
	// Line 1931, Address: 0x1022988, Func Offset: 0x148
	// Func End, Address: 0x10229a4, Func Offset: 0x164
}

// 
// Start address: 0x10229b0
void mapinit()
{
	// Line 1942, Address: 0x10229b0, Func Offset: 0
	// Line 1944, Address: 0x10229b8, Func Offset: 0x8
	// Line 1945, Address: 0x10229cc, Func Offset: 0x1c
	// Line 1948, Address: 0x10229e0, Func Offset: 0x30
	// Line 1949, Address: 0x1022a00, Func Offset: 0x50
	// Func End, Address: 0x1022a10, Func Offset: 0x60
}

// 
// Start address: 0x1022a10
void mapset()
{
	// Line 1954, Address: 0x1022a10, Func Offset: 0
	// Func End, Address: 0x1022a18, Func Offset: 0x8
}

// 
// Start address: 0x1022a20
void divdevset()
{
	// Line 1958, Address: 0x1022a20, Func Offset: 0
	// Func End, Address: 0x1022a28, Func Offset: 0x8
}

// 
// Start address: 0x1022a30
void enecginit()
{
	// Line 1962, Address: 0x1022a30, Func Offset: 0
	// Func End, Address: 0x1022a38, Func Offset: 0x8
}

