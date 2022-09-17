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
typedef _anon13 type_1[0];
typedef short type_2[6];
typedef char type_3[3];
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
typedef short type_21[2];
typedef short type_22[2][1];
typedef _anon2* type_23[8];

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
void z51cline(short** ppHscw);
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
// Start address: 0x101cb70
_anon1* main_chk()
{
	// Line 150, Address: 0x101cb70, Func Offset: 0
	// Line 151, Address: 0x101cb84, Func Offset: 0x14
	// Line 153, Address: 0x101cb94, Func Offset: 0x24
	// Line 155, Address: 0x101cb9c, Func Offset: 0x2c
	// Func End, Address: 0x101cba4, Func Offset: 0x34
}

// 
// Start address: 0x101cbb0
void scr_set()
{
	short* pScrTbl;
	// Line 193, Address: 0x101cbb0, Func Offset: 0
	// Line 196, Address: 0x101cbbc, Func Offset: 0xc
	// Line 197, Address: 0x101cbd0, Func Offset: 0x20
	// Line 198, Address: 0x101cbe4, Func Offset: 0x34
	// Line 200, Address: 0x101cbec, Func Offset: 0x3c
	// Line 201, Address: 0x101cbf4, Func Offset: 0x44
	// Line 202, Address: 0x101cc00, Func Offset: 0x50
	// Line 203, Address: 0x101cc04, Func Offset: 0x54
	// Line 204, Address: 0x101cc18, Func Offset: 0x68
	// Line 205, Address: 0x101cc1c, Func Offset: 0x6c
	// Line 206, Address: 0x101cc30, Func Offset: 0x80
	// Line 207, Address: 0x101cc34, Func Offset: 0x84
	// Line 208, Address: 0x101cc48, Func Offset: 0x98
	// Line 209, Address: 0x101cc4c, Func Offset: 0x9c
	// Line 210, Address: 0x101cc60, Func Offset: 0xb0
	// Line 211, Address: 0x101cc80, Func Offset: 0xd0
	// Line 212, Address: 0x101cc84, Func Offset: 0xd4
	// Line 213, Address: 0x101cc90, Func Offset: 0xe0
	// Line 215, Address: 0x101cc9c, Func Offset: 0xec
	// Line 216, Address: 0x101cca8, Func Offset: 0xf8
	// Line 218, Address: 0x101ccb4, Func Offset: 0x104
	// Line 219, Address: 0x101ccbc, Func Offset: 0x10c
	// Func End, Address: 0x101ccd0, Func Offset: 0x120
}

// 
// Start address: 0x101ccd0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 268, Address: 0x101ccd0, Func Offset: 0
	// Line 271, Address: 0x101cce4, Func Offset: 0x14
	// Line 272, Address: 0x101ccf4, Func Offset: 0x24
	// Line 273, Address: 0x101ccfc, Func Offset: 0x2c
	// Line 275, Address: 0x101cd0c, Func Offset: 0x3c
	// Line 276, Address: 0x101cd24, Func Offset: 0x54
	// Line 277, Address: 0x101cd34, Func Offset: 0x64
	// Line 278, Address: 0x101cd3c, Func Offset: 0x6c
	// Line 280, Address: 0x101cd40, Func Offset: 0x70
	// Line 282, Address: 0x101cd48, Func Offset: 0x78
	// Line 283, Address: 0x101cd68, Func Offset: 0x98
	// Line 284, Address: 0x101cd8c, Func Offset: 0xbc
	// Line 286, Address: 0x101cd94, Func Offset: 0xc4
	// Line 290, Address: 0x101cdb4, Func Offset: 0xe4
	// Line 291, Address: 0x101cdc8, Func Offset: 0xf8
	// Line 295, Address: 0x101cddc, Func Offset: 0x10c
	// Line 296, Address: 0x101cdf0, Func Offset: 0x120
	// Line 297, Address: 0x101cdfc, Func Offset: 0x12c
	// Line 298, Address: 0x101ce04, Func Offset: 0x134
	// Line 302, Address: 0x101ce08, Func Offset: 0x138
	// Line 303, Address: 0x101ce2c, Func Offset: 0x15c
	// Line 307, Address: 0x101ce3c, Func Offset: 0x16c
	// Line 309, Address: 0x101ce44, Func Offset: 0x174
	// Line 310, Address: 0x101ce58, Func Offset: 0x188
	// Line 311, Address: 0x101ce64, Func Offset: 0x194
	// Line 312, Address: 0x101ce6c, Func Offset: 0x19c
	// Line 316, Address: 0x101ce70, Func Offset: 0x1a0
	// Line 317, Address: 0x101ce94, Func Offset: 0x1c4
	// Line 321, Address: 0x101cea4, Func Offset: 0x1d4
	// Line 323, Address: 0x101ceac, Func Offset: 0x1dc
	// Line 326, Address: 0x101cebc, Func Offset: 0x1ec
	// Line 327, Address: 0x101cecc, Func Offset: 0x1fc
	// Line 328, Address: 0x101cedc, Func Offset: 0x20c
	// Line 329, Address: 0x101ceec, Func Offset: 0x21c
	// Line 330, Address: 0x101cefc, Func Offset: 0x22c
	// Func End, Address: 0x101cf18, Func Offset: 0x248
}

// 
// Start address: 0x101cf20
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 351, Address: 0x101cf20, Func Offset: 0
	// Line 354, Address: 0x101cf2c, Func Offset: 0xc
	// Line 355, Address: 0x101cf34, Func Offset: 0x14
	// Line 357, Address: 0x101cf38, Func Offset: 0x18
	// Line 359, Address: 0x101cf44, Func Offset: 0x24
	// Line 360, Address: 0x101cf50, Func Offset: 0x30
	// Line 361, Address: 0x101cf5c, Func Offset: 0x3c
	// Line 363, Address: 0x101cf68, Func Offset: 0x48
	// Line 364, Address: 0x101cf84, Func Offset: 0x64
	// Line 366, Address: 0x101cf90, Func Offset: 0x70
	// Line 367, Address: 0x101cfac, Func Offset: 0x8c
	// Line 369, Address: 0x101cfb8, Func Offset: 0x98
	// Line 370, Address: 0x101cfc4, Func Offset: 0xa4
	// Line 371, Address: 0x101cfe8, Func Offset: 0xc8
	// Func End, Address: 0x101cff4, Func Offset: 0xd4
}

// 
// Start address: 0x101d000
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
	// Line 387, Address: 0x101d000, Func Offset: 0
	// Line 399, Address: 0x101d01c, Func Offset: 0x1c
	// Line 404, Address: 0x101d02c, Func Offset: 0x2c
	// Line 406, Address: 0x101d058, Func Offset: 0x58
	// Line 408, Address: 0x101d060, Func Offset: 0x60
	// Line 409, Address: 0x101d068, Func Offset: 0x68
	// Line 411, Address: 0x101d070, Func Offset: 0x70
	// Line 412, Address: 0x101d080, Func Offset: 0x80
	// Line 415, Address: 0x101d090, Func Offset: 0x90
	// Line 416, Address: 0x101d0ac, Func Offset: 0xac
	// Line 418, Address: 0x101d0bc, Func Offset: 0xbc
	// Line 419, Address: 0x101d0d0, Func Offset: 0xd0
	// Line 421, Address: 0x101d0e0, Func Offset: 0xe0
	// Line 422, Address: 0x101d0f4, Func Offset: 0xf4
	// Line 424, Address: 0x101d104, Func Offset: 0x104
	// Line 427, Address: 0x101d118, Func Offset: 0x118
	// Line 429, Address: 0x101d128, Func Offset: 0x128
	// Line 430, Address: 0x101d150, Func Offset: 0x150
	// Line 431, Address: 0x101d188, Func Offset: 0x188
	// Line 433, Address: 0x101d19c, Func Offset: 0x19c
	// Line 436, Address: 0x101d1a8, Func Offset: 0x1a8
	// Line 437, Address: 0x101d1c8, Func Offset: 0x1c8
	// Line 439, Address: 0x101d1d4, Func Offset: 0x1d4
	// Line 440, Address: 0x101d1e8, Func Offset: 0x1e8
	// Line 441, Address: 0x101d1f8, Func Offset: 0x1f8
	// Line 444, Address: 0x101d204, Func Offset: 0x204
	// Line 445, Address: 0x101d210, Func Offset: 0x210
	// Line 446, Address: 0x101d240, Func Offset: 0x240
	// Line 447, Address: 0x101d270, Func Offset: 0x270
	// Line 448, Address: 0x101d28c, Func Offset: 0x28c
	// Func End, Address: 0x101d2b0, Func Offset: 0x2b0
}

// 
// Start address: 0x101d2b0
void z51cline(short** ppHscw)
{
	int lHwk;
	_anon2 ldHposwk;
	int i;
	int j;
	short wk;
	char z51cscrtbl[3];
	// Line 462, Address: 0x101d2b0, Func Offset: 0
	// Line 467, Address: 0x101d2c8, Func Offset: 0x18
	// Line 471, Address: 0x101d2ec, Func Offset: 0x3c
	// Line 472, Address: 0x101d310, Func Offset: 0x60
	// Line 473, Address: 0x101d32c, Func Offset: 0x7c
	// Line 475, Address: 0x101d330, Func Offset: 0x80
	// Line 476, Address: 0x101d334, Func Offset: 0x84
	// Line 478, Address: 0x101d340, Func Offset: 0x90
	// Line 480, Address: 0x101d34c, Func Offset: 0x9c
	// Line 482, Address: 0x101d36c, Func Offset: 0xbc
	// Line 484, Address: 0x101d384, Func Offset: 0xd4
	// Line 485, Address: 0x101d390, Func Offset: 0xe0
	// Line 486, Address: 0x101d3a4, Func Offset: 0xf4
	// Line 488, Address: 0x101d3b0, Func Offset: 0x100
	// Line 489, Address: 0x101d3d4, Func Offset: 0x124
	// Line 490, Address: 0x101d3e0, Func Offset: 0x130
	// Line 491, Address: 0x101d404, Func Offset: 0x154
	// Line 492, Address: 0x101d410, Func Offset: 0x160
	// Func End, Address: 0x101d42c, Func Offset: 0x17c
}

// 
// Start address: 0x101d430
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 513, Address: 0x101d430, Func Offset: 0
	// Line 517, Address: 0x101d44c, Func Offset: 0x1c
	// Line 519, Address: 0x101d450, Func Offset: 0x20
	// Line 520, Address: 0x101d46c, Func Offset: 0x3c
	// Line 521, Address: 0x101d478, Func Offset: 0x48
	// Line 523, Address: 0x101d484, Func Offset: 0x54
	// Line 524, Address: 0x101d48c, Func Offset: 0x5c
	// Line 525, Address: 0x101d49c, Func Offset: 0x6c
	// Line 526, Address: 0x101d4c0, Func Offset: 0x90
	// Line 527, Address: 0x101d4e0, Func Offset: 0xb0
	// Func End, Address: 0x101d4f4, Func Offset: 0xc4
}

// 
// Start address: 0x101d500
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 633, Address: 0x101d500, Func Offset: 0
	// Line 636, Address: 0x101d510, Func Offset: 0x10
	// Line 637, Address: 0x101d520, Func Offset: 0x20
	// Line 638, Address: 0x101d52c, Func Offset: 0x2c
	// Line 640, Address: 0x101d564, Func Offset: 0x64
	// Line 641, Address: 0x101d56c, Func Offset: 0x6c
	// Line 642, Address: 0x101d580, Func Offset: 0x80
	// Line 643, Address: 0x101d5a0, Func Offset: 0xa0
	// Line 644, Address: 0x101d5b4, Func Offset: 0xb4
	// Line 646, Address: 0x101d5bc, Func Offset: 0xbc
	// Line 651, Address: 0x101d5d0, Func Offset: 0xd0
	// Func End, Address: 0x101d5e4, Func Offset: 0xe4
}

// 
// Start address: 0x101d5f0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 669, Address: 0x101d5f0, Func Offset: 0
	// Line 673, Address: 0x101d604, Func Offset: 0x14
	// Line 674, Address: 0x101d60c, Func Offset: 0x1c
	// Line 675, Address: 0x101d614, Func Offset: 0x24
	// Line 676, Address: 0x101d61c, Func Offset: 0x2c
	// Line 677, Address: 0x101d620, Func Offset: 0x30
	// Line 678, Address: 0x101d644, Func Offset: 0x54
	// Line 679, Address: 0x101d650, Func Offset: 0x60
	// Line 681, Address: 0x101d66c, Func Offset: 0x7c
	// Line 682, Address: 0x101d678, Func Offset: 0x88
	// Line 683, Address: 0x101d68c, Func Offset: 0x9c
	// Line 684, Address: 0x101d698, Func Offset: 0xa8
	// Line 685, Address: 0x101d6bc, Func Offset: 0xcc
	// Line 687, Address: 0x101d6c4, Func Offset: 0xd4
	// Line 692, Address: 0x101d6ec, Func Offset: 0xfc
	// Func End, Address: 0x101d700, Func Offset: 0x110
}

// 
// Start address: 0x101d700
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 710, Address: 0x101d700, Func Offset: 0
	// Line 714, Address: 0x101d714, Func Offset: 0x14
	// Line 715, Address: 0x101d71c, Func Offset: 0x1c
	// Line 716, Address: 0x101d724, Func Offset: 0x24
	// Line 717, Address: 0x101d72c, Func Offset: 0x2c
	// Line 718, Address: 0x101d730, Func Offset: 0x30
	// Line 719, Address: 0x101d754, Func Offset: 0x54
	// Line 720, Address: 0x101d760, Func Offset: 0x60
	// Line 722, Address: 0x101d77c, Func Offset: 0x7c
	// Line 723, Address: 0x101d788, Func Offset: 0x88
	// Line 724, Address: 0x101d79c, Func Offset: 0x9c
	// Line 725, Address: 0x101d7a8, Func Offset: 0xa8
	// Line 726, Address: 0x101d7cc, Func Offset: 0xcc
	// Line 728, Address: 0x101d7d4, Func Offset: 0xd4
	// Line 733, Address: 0x101d7fc, Func Offset: 0xfc
	// Func End, Address: 0x101d810, Func Offset: 0x110
}

// 
// Start address: 0x101d810
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 751, Address: 0x101d810, Func Offset: 0
	// Line 755, Address: 0x101d824, Func Offset: 0x14
	// Line 756, Address: 0x101d82c, Func Offset: 0x1c
	// Line 757, Address: 0x101d834, Func Offset: 0x24
	// Line 758, Address: 0x101d83c, Func Offset: 0x2c
	// Line 759, Address: 0x101d840, Func Offset: 0x30
	// Line 760, Address: 0x101d864, Func Offset: 0x54
	// Line 761, Address: 0x101d870, Func Offset: 0x60
	// Line 763, Address: 0x101d88c, Func Offset: 0x7c
	// Line 764, Address: 0x101d898, Func Offset: 0x88
	// Line 765, Address: 0x101d8ac, Func Offset: 0x9c
	// Line 766, Address: 0x101d8b8, Func Offset: 0xa8
	// Line 767, Address: 0x101d8dc, Func Offset: 0xcc
	// Line 769, Address: 0x101d8e4, Func Offset: 0xd4
	// Line 774, Address: 0x101d90c, Func Offset: 0xfc
	// Func End, Address: 0x101d920, Func Offset: 0x110
}

// 
// Start address: 0x101d920
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 789, Address: 0x101d920, Func Offset: 0
	// Line 793, Address: 0x101d930, Func Offset: 0x10
	// Line 795, Address: 0x101d940, Func Offset: 0x20
	// Line 796, Address: 0x101d948, Func Offset: 0x28
	// Line 797, Address: 0x101d97c, Func Offset: 0x5c
	// Line 798, Address: 0x101d984, Func Offset: 0x64
	// Line 799, Address: 0x101d998, Func Offset: 0x78
	// Line 800, Address: 0x101d9bc, Func Offset: 0x9c
	// Line 801, Address: 0x101d9d0, Func Offset: 0xb0
	// Line 802, Address: 0x101d9d8, Func Offset: 0xb8
	// Line 807, Address: 0x101d9ec, Func Offset: 0xcc
	// Func End, Address: 0x101da04, Func Offset: 0xe4
}

// 
// Start address: 0x101da10
void scrh_move()
{
	short xwk;
	// Line 824, Address: 0x101da10, Func Offset: 0
	// Line 827, Address: 0x101da18, Func Offset: 0x8
	// Line 828, Address: 0x101da60, Func Offset: 0x50
	// Line 830, Address: 0x101da70, Func Offset: 0x60
	// Line 831, Address: 0x101da78, Func Offset: 0x68
	// Line 832, Address: 0x101da80, Func Offset: 0x70
	// Line 834, Address: 0x101da90, Func Offset: 0x80
	// Line 835, Address: 0x101daa4, Func Offset: 0x94
	// Line 839, Address: 0x101dab0, Func Offset: 0xa0
	// Line 840, Address: 0x101dac4, Func Offset: 0xb4
	// Line 841, Address: 0x101dae8, Func Offset: 0xd8
	// Line 843, Address: 0x101daf8, Func Offset: 0xe8
	// Line 845, Address: 0x101db00, Func Offset: 0xf0
	// Line 846, Address: 0x101db14, Func Offset: 0x104
	// Line 850, Address: 0x101db20, Func Offset: 0x110
	// Line 851, Address: 0x101db34, Func Offset: 0x124
	// Line 852, Address: 0x101db58, Func Offset: 0x148
	// Line 857, Address: 0x101db68, Func Offset: 0x158
	// Line 858, Address: 0x101db98, Func Offset: 0x188
	// Line 859, Address: 0x101dba0, Func Offset: 0x190
	// Func End, Address: 0x101dbb0, Func Offset: 0x1a0
}

// 
// Start address: 0x101dbb0
void scroll_v()
{
	short ywk;
	// Line 874, Address: 0x101dbb0, Func Offset: 0
	// Line 877, Address: 0x101dbbc, Func Offset: 0xc
	// Line 878, Address: 0x101dbf0, Func Offset: 0x40
	// Line 879, Address: 0x101dc08, Func Offset: 0x58
	// Line 883, Address: 0x101dc14, Func Offset: 0x64
	// Line 884, Address: 0x101dc2c, Func Offset: 0x7c
	// Line 885, Address: 0x101dc38, Func Offset: 0x88
	// Line 886, Address: 0x101dc5c, Func Offset: 0xac
	// Line 887, Address: 0x101dc70, Func Offset: 0xc0
	// Line 888, Address: 0x101dc7c, Func Offset: 0xcc
	// Line 889, Address: 0x101dc84, Func Offset: 0xd4
	// Line 890, Address: 0x101dcac, Func Offset: 0xfc
	// Line 891, Address: 0x101dcd4, Func Offset: 0x124
	// Line 892, Address: 0x101dce0, Func Offset: 0x130
	// Line 894, Address: 0x101dce8, Func Offset: 0x138
	// Line 895, Address: 0x101dd10, Func Offset: 0x160
	// Line 896, Address: 0x101dd20, Func Offset: 0x170
	// Line 897, Address: 0x101dd28, Func Offset: 0x178
	// Line 902, Address: 0x101dd30, Func Offset: 0x180
	// Line 903, Address: 0x101dd5c, Func Offset: 0x1ac
	// Line 904, Address: 0x101dd68, Func Offset: 0x1b8
	// Line 905, Address: 0x101dd70, Func Offset: 0x1c0
	// Line 906, Address: 0x101dd80, Func Offset: 0x1d0
	// Line 907, Address: 0x101dd88, Func Offset: 0x1d8
	// Line 912, Address: 0x101dd90, Func Offset: 0x1e0
	// Line 913, Address: 0x101dd98, Func Offset: 0x1e8
	// Func End, Address: 0x101ddac, Func Offset: 0x1fc
}

// 
// Start address: 0x101ddb0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 927, Address: 0x101ddb0, Func Offset: 0
	// Line 930, Address: 0x101ddc0, Func Offset: 0x10
	// Line 931, Address: 0x101dddc, Func Offset: 0x2c
	// Line 932, Address: 0x101ddf4, Func Offset: 0x44
	// Line 933, Address: 0x101de18, Func Offset: 0x68
	// Line 934, Address: 0x101de20, Func Offset: 0x70
	// Line 938, Address: 0x101de30, Func Offset: 0x80
	// Line 939, Address: 0x101de44, Func Offset: 0x94
	// Line 940, Address: 0x101de50, Func Offset: 0xa0
	// Line 943, Address: 0x101de58, Func Offset: 0xa8
	// Line 944, Address: 0x101de70, Func Offset: 0xc0
	// Line 945, Address: 0x101de7c, Func Offset: 0xcc
	// Line 946, Address: 0x101de9c, Func Offset: 0xec
	// Line 947, Address: 0x101dea8, Func Offset: 0xf8
	// Line 948, Address: 0x101deb0, Func Offset: 0x100
	// Line 950, Address: 0x101debc, Func Offset: 0x10c
	// Line 952, Address: 0x101dec4, Func Offset: 0x114
	// Line 953, Address: 0x101dedc, Func Offset: 0x12c
	// Line 954, Address: 0x101dee8, Func Offset: 0x138
	// Line 955, Address: 0x101df08, Func Offset: 0x158
	// Line 956, Address: 0x101df14, Func Offset: 0x164
	// Line 957, Address: 0x101df1c, Func Offset: 0x16c
	// Line 960, Address: 0x101df28, Func Offset: 0x178
	// Func End, Address: 0x101df3c, Func Offset: 0x18c
}

// 
// Start address: 0x101df40
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 974, Address: 0x101df40, Func Offset: 0
	// Line 977, Address: 0x101df50, Func Offset: 0x10
	// Line 979, Address: 0x101df5c, Func Offset: 0x1c
	// Line 980, Address: 0x101df74, Func Offset: 0x34
	// Line 981, Address: 0x101df80, Func Offset: 0x40
	// Line 982, Address: 0x101dfa0, Func Offset: 0x60
	// Line 983, Address: 0x101dfac, Func Offset: 0x6c
	// Line 984, Address: 0x101dfb4, Func Offset: 0x74
	// Line 986, Address: 0x101dfc0, Func Offset: 0x80
	// Func End, Address: 0x101dfd4, Func Offset: 0x94
}

// 
// Start address: 0x101dfe0
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1001, Address: 0x101dfe0, Func Offset: 0
	// Line 1004, Address: 0x101dfec, Func Offset: 0xc
	// Line 1005, Address: 0x101dff0, Func Offset: 0x10
	// Line 1006, Address: 0x101e01c, Func Offset: 0x3c
	// Line 1007, Address: 0x101e030, Func Offset: 0x50
	// Line 1008, Address: 0x101e03c, Func Offset: 0x5c
	// Line 1009, Address: 0x101e044, Func Offset: 0x64
	// Line 1011, Address: 0x101e050, Func Offset: 0x70
	// Func End, Address: 0x101e060, Func Offset: 0x80
}

// 
// Start address: 0x101e060
void sv_move_sub2()
{
	// Line 1015, Address: 0x101e060, Func Offset: 0
	// Line 1016, Address: 0x101e068, Func Offset: 0x8
	// Line 1018, Address: 0x101e070, Func Offset: 0x10
	// Line 1019, Address: 0x101e07c, Func Offset: 0x1c
	// Func End, Address: 0x101e08c, Func Offset: 0x2c
}

// 
// Start address: 0x101e090
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1033, Address: 0x101e090, Func Offset: 0
	// Line 1036, Address: 0x101e09c, Func Offset: 0xc
	// Line 1037, Address: 0x101e0c0, Func Offset: 0x30
	// Line 1038, Address: 0x101e0e4, Func Offset: 0x54
	// Line 1039, Address: 0x101e0f0, Func Offset: 0x60
	// Func End, Address: 0x101e100, Func Offset: 0x70
}

// 
// Start address: 0x101e100
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1054, Address: 0x101e100, Func Offset: 0
	// Line 1055, Address: 0x101e10c, Func Offset: 0xc
	// Line 1056, Address: 0x101e134, Func Offset: 0x34
	// Line 1058, Address: 0x101e14c, Func Offset: 0x4c
	// Line 1059, Address: 0x101e158, Func Offset: 0x58
	// Line 1060, Address: 0x101e160, Func Offset: 0x60
	// Line 1061, Address: 0x101e16c, Func Offset: 0x6c
	// Line 1062, Address: 0x101e180, Func Offset: 0x80
	// Line 1063, Address: 0x101e194, Func Offset: 0x94
	// Line 1067, Address: 0x101e1a8, Func Offset: 0xa8
	// Line 1068, Address: 0x101e1b4, Func Offset: 0xb4
	// Func End, Address: 0x101e1c4, Func Offset: 0xc4
}

// 
// Start address: 0x101e1d0
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1082, Address: 0x101e1d0, Func Offset: 0
	// Line 1085, Address: 0x101e1dc, Func Offset: 0xc
	// Line 1086, Address: 0x101e1fc, Func Offset: 0x2c
	// Line 1087, Address: 0x101e220, Func Offset: 0x50
	// Line 1088, Address: 0x101e22c, Func Offset: 0x5c
	// Func End, Address: 0x101e23c, Func Offset: 0x6c
}

// 
// Start address: 0x101e240
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1103, Address: 0x101e240, Func Offset: 0
	// Line 1104, Address: 0x101e24c, Func Offset: 0xc
	// Line 1105, Address: 0x101e274, Func Offset: 0x34
	// Line 1107, Address: 0x101e28c, Func Offset: 0x4c
	// Line 1108, Address: 0x101e298, Func Offset: 0x58
	// Line 1109, Address: 0x101e2a0, Func Offset: 0x60
	// Line 1110, Address: 0x101e2ac, Func Offset: 0x6c
	// Line 1111, Address: 0x101e2c0, Func Offset: 0x80
	// Line 1112, Address: 0x101e2d4, Func Offset: 0x94
	// Line 1116, Address: 0x101e2e8, Func Offset: 0xa8
	// Line 1117, Address: 0x101e2f4, Func Offset: 0xb4
	// Func End, Address: 0x101e304, Func Offset: 0xc4
}

// 
// Start address: 0x101e310
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1134, Address: 0x101e310, Func Offset: 0
	// Line 1138, Address: 0x101e320, Func Offset: 0x10
	// Line 1139, Address: 0x101e330, Func Offset: 0x20
	// Line 1140, Address: 0x101e354, Func Offset: 0x44
	// Line 1141, Address: 0x101e368, Func Offset: 0x58
	// Line 1142, Address: 0x101e380, Func Offset: 0x70
	// Line 1144, Address: 0x101e38c, Func Offset: 0x7c
	// Line 1146, Address: 0x101e398, Func Offset: 0x88
	// Line 1147, Address: 0x101e3d4, Func Offset: 0xc4
	// Line 1148, Address: 0x101e3dc, Func Offset: 0xcc
	// Line 1149, Address: 0x101e3f0, Func Offset: 0xe0
	// Line 1150, Address: 0x101e41c, Func Offset: 0x10c
	// Line 1151, Address: 0x101e42c, Func Offset: 0x11c
	// Line 1152, Address: 0x101e440, Func Offset: 0x130
	// Line 1153, Address: 0x101e448, Func Offset: 0x138
	// Line 1158, Address: 0x101e45c, Func Offset: 0x14c
	// Func End, Address: 0x101e470, Func Offset: 0x160
}

// 
// Start address: 0x101e470
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
	// Line 1176, Address: 0x101e470, Func Offset: 0
	// Line 1185, Address: 0x101e490, Func Offset: 0x20
	// Line 1186, Address: 0x101e494, Func Offset: 0x24
	// Line 1187, Address: 0x101e4a0, Func Offset: 0x30
	// Line 1188, Address: 0x101e4ac, Func Offset: 0x3c
	// Line 1189, Address: 0x101e4b4, Func Offset: 0x44
	// Line 1190, Address: 0x101e4bc, Func Offset: 0x4c
	// Line 1192, Address: 0x101e4d0, Func Offset: 0x60
	// Line 1193, Address: 0x101e4d4, Func Offset: 0x64
	// Line 1194, Address: 0x101e4e0, Func Offset: 0x70
	// Line 1195, Address: 0x101e4ec, Func Offset: 0x7c
	// Line 1196, Address: 0x101e4f4, Func Offset: 0x84
	// Line 1198, Address: 0x101e4fc, Func Offset: 0x8c
	// Line 1199, Address: 0x101e508, Func Offset: 0x98
	// Line 1200, Address: 0x101e51c, Func Offset: 0xac
	// Line 1202, Address: 0x101e528, Func Offset: 0xb8
	// Line 1203, Address: 0x101e530, Func Offset: 0xc0
	// Line 1205, Address: 0x101e538, Func Offset: 0xc8
	// Line 1207, Address: 0x101e558, Func Offset: 0xe8
	// Line 1213, Address: 0x101e584, Func Offset: 0x114
	// Line 1214, Address: 0x101e598, Func Offset: 0x128
	// Line 1216, Address: 0x101e5a4, Func Offset: 0x134
	// Line 1217, Address: 0x101e5ac, Func Offset: 0x13c
	// Line 1218, Address: 0x101e5b4, Func Offset: 0x144
	// Line 1220, Address: 0x101e5d4, Func Offset: 0x164
	// Line 1226, Address: 0x101e600, Func Offset: 0x190
	// Line 1227, Address: 0x101e614, Func Offset: 0x1a4
	// Line 1229, Address: 0x101e620, Func Offset: 0x1b0
	// Line 1230, Address: 0x101e628, Func Offset: 0x1b8
	// Line 1231, Address: 0x101e630, Func Offset: 0x1c0
	// Line 1233, Address: 0x101e650, Func Offset: 0x1e0
	// Line 1239, Address: 0x101e67c, Func Offset: 0x20c
	// Line 1240, Address: 0x101e690, Func Offset: 0x220
	// Line 1242, Address: 0x101e69c, Func Offset: 0x22c
	// Line 1243, Address: 0x101e6a4, Func Offset: 0x234
	// Line 1244, Address: 0x101e6ac, Func Offset: 0x23c
	// Line 1246, Address: 0x101e6cc, Func Offset: 0x25c
	// Line 1255, Address: 0x101e6f8, Func Offset: 0x288
	// Func End, Address: 0x101e720, Func Offset: 0x2b0
}

// 
// Start address: 0x101e720
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
	// Line 1272, Address: 0x101e720, Func Offset: 0
	// Line 1283, Address: 0x101e74c, Func Offset: 0x2c
	// Line 1285, Address: 0x101e754, Func Offset: 0x34
	// Line 1286, Address: 0x101e76c, Func Offset: 0x4c
	// Line 1287, Address: 0x101e780, Func Offset: 0x60
	// Line 1289, Address: 0x101e788, Func Offset: 0x68
	// Line 1291, Address: 0x101e79c, Func Offset: 0x7c
	// Line 1292, Address: 0x101e7b4, Func Offset: 0x94
	// Line 1293, Address: 0x101e7c8, Func Offset: 0xa8
	// Line 1294, Address: 0x101e7d0, Func Offset: 0xb0
	// Line 1296, Address: 0x101e7d8, Func Offset: 0xb8
	// Line 1297, Address: 0x101e7ec, Func Offset: 0xcc
	// Line 1302, Address: 0x101e7f4, Func Offset: 0xd4
	// Line 1303, Address: 0x101e844, Func Offset: 0x124
	// Line 1304, Address: 0x101e84c, Func Offset: 0x12c
	// Line 1310, Address: 0x101e86c, Func Offset: 0x14c
	// Line 1311, Address: 0x101e88c, Func Offset: 0x16c
	// Line 1312, Address: 0x101e8b0, Func Offset: 0x190
	// Line 1313, Address: 0x101e8bc, Func Offset: 0x19c
	// Line 1314, Address: 0x101e8c4, Func Offset: 0x1a4
	// Line 1316, Address: 0x101e8e4, Func Offset: 0x1c4
	// Line 1320, Address: 0x101e910, Func Offset: 0x1f0
	// Line 1323, Address: 0x101e918, Func Offset: 0x1f8
	// Line 1324, Address: 0x101e91c, Func Offset: 0x1fc
	// Line 1328, Address: 0x101e93c, Func Offset: 0x21c
	// Line 1335, Address: 0x101e968, Func Offset: 0x248
	// Line 1342, Address: 0x101e97c, Func Offset: 0x25c
	// Line 1343, Address: 0x101e984, Func Offset: 0x264
	// Line 1344, Address: 0x101e98c, Func Offset: 0x26c
	// Line 1345, Address: 0x101e9a4, Func Offset: 0x284
	// Line 1346, Address: 0x101e9c4, Func Offset: 0x2a4
	// Line 1350, Address: 0x101e9cc, Func Offset: 0x2ac
	// Line 1352, Address: 0x101e9fc, Func Offset: 0x2dc
	// Line 1353, Address: 0x101ea08, Func Offset: 0x2e8
	// Line 1357, Address: 0x101ea18, Func Offset: 0x2f8
	// Line 1358, Address: 0x101ea24, Func Offset: 0x304
	// Line 1360, Address: 0x101ea44, Func Offset: 0x324
	// Line 1361, Address: 0x101ea7c, Func Offset: 0x35c
	// Line 1362, Address: 0x101ea9c, Func Offset: 0x37c
	// Line 1364, Address: 0x101eac0, Func Offset: 0x3a0
	// Line 1367, Address: 0x101eae4, Func Offset: 0x3c4
	// Line 1369, Address: 0x101eb04, Func Offset: 0x3e4
	// Line 1371, Address: 0x101eb18, Func Offset: 0x3f8
	// Line 1372, Address: 0x101eb24, Func Offset: 0x404
	// Line 1373, Address: 0x101eb34, Func Offset: 0x414
	// Line 1375, Address: 0x101eb3c, Func Offset: 0x41c
	// Func End, Address: 0x101eb64, Func Offset: 0x444
}

// 
// Start address: 0x101eb70
void scrollwrtc()
{
	// Line 1381, Address: 0x101eb70, Func Offset: 0
	// Func End, Address: 0x101eb78, Func Offset: 0x8
}

// 
// Start address: 0x101eb80
void scrollwrtz()
{
	// Line 1386, Address: 0x101eb80, Func Offset: 0
	// Func End, Address: 0x101eb88, Func Offset: 0x8
}

// 
// Start address: 0x101eb90
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1404, Address: 0x101eb90, Func Offset: 0
	// Line 1417, Address: 0x101ebb8, Func Offset: 0x28
	// Line 1420, Address: 0x101ebd8, Func Offset: 0x48
	// Line 1421, Address: 0x101ebec, Func Offset: 0x5c
	// Line 1422, Address: 0x101ec00, Func Offset: 0x70
	// Line 1423, Address: 0x101ec14, Func Offset: 0x84
	// Line 1425, Address: 0x101ec28, Func Offset: 0x98
	// Line 1426, Address: 0x101ec34, Func Offset: 0xa4
	// Line 1427, Address: 0x101ec48, Func Offset: 0xb8
	// Func End, Address: 0x101ec58, Func Offset: 0xc8
}

// 
// Start address: 0x101ec60
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1431, Address: 0x101ec60, Func Offset: 0
	// Line 1435, Address: 0x101ec88, Func Offset: 0x28
	// Line 1438, Address: 0x101eca8, Func Offset: 0x48
	// Line 1439, Address: 0x101ecbc, Func Offset: 0x5c
	// Line 1440, Address: 0x101ecd0, Func Offset: 0x70
	// Line 1441, Address: 0x101ece4, Func Offset: 0x84
	// Line 1443, Address: 0x101ecf8, Func Offset: 0x98
	// Line 1444, Address: 0x101ed04, Func Offset: 0xa4
	// Line 1445, Address: 0x101ed18, Func Offset: 0xb8
	// Func End, Address: 0x101ed28, Func Offset: 0xc8
}

// 
// Start address: 0x101ed30
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1465, Address: 0x101ed30, Func Offset: 0
	// Line 1469, Address: 0x101ed58, Func Offset: 0x28
	// Line 1472, Address: 0x101ed78, Func Offset: 0x48
	// Line 1473, Address: 0x101ed8c, Func Offset: 0x5c
	// Line 1474, Address: 0x101ed9c, Func Offset: 0x6c
	// Line 1475, Address: 0x101edb0, Func Offset: 0x80
	// Line 1477, Address: 0x101edc0, Func Offset: 0x90
	// Line 1478, Address: 0x101edcc, Func Offset: 0x9c
	// Line 1479, Address: 0x101ede0, Func Offset: 0xb0
	// Func End, Address: 0x101edf0, Func Offset: 0xc0
}

// 
// Start address: 0x101edf0
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
	// Line 1498, Address: 0x101edf0, Func Offset: 0
	// Line 1504, Address: 0x101ee24, Func Offset: 0x34
	// Line 1506, Address: 0x101ee34, Func Offset: 0x44
	// Line 1507, Address: 0x101ee38, Func Offset: 0x48
	// Line 1508, Address: 0x101ee40, Func Offset: 0x50
	// Line 1510, Address: 0x101ee50, Func Offset: 0x60
	// Line 1512, Address: 0x101ee54, Func Offset: 0x64
	// Line 1513, Address: 0x101ee5c, Func Offset: 0x6c
	// Line 1516, Address: 0x101ee64, Func Offset: 0x74
	// Line 1517, Address: 0x101ee6c, Func Offset: 0x7c
	// Line 1518, Address: 0x101ee78, Func Offset: 0x88
	// Line 1520, Address: 0x101ee84, Func Offset: 0x94
	// Line 1521, Address: 0x101ee8c, Func Offset: 0x9c
	// Line 1522, Address: 0x101ee94, Func Offset: 0xa4
	// Line 1523, Address: 0x101ee9c, Func Offset: 0xac
	// Line 1525, Address: 0x101eea8, Func Offset: 0xb8
	// Line 1526, Address: 0x101eeb0, Func Offset: 0xc0
	// Line 1527, Address: 0x101eeb8, Func Offset: 0xc8
	// Line 1528, Address: 0x101eec0, Func Offset: 0xd0
	// Line 1530, Address: 0x101eecc, Func Offset: 0xdc
	// Line 1531, Address: 0x101eed4, Func Offset: 0xe4
	// Line 1532, Address: 0x101eedc, Func Offset: 0xec
	// Line 1535, Address: 0x101eee4, Func Offset: 0xf4
	// Line 1536, Address: 0x101eeec, Func Offset: 0xfc
	// Line 1539, Address: 0x101eef4, Func Offset: 0x104
	// Line 1540, Address: 0x101ef38, Func Offset: 0x148
	// Line 1541, Address: 0x101ef7c, Func Offset: 0x18c
	// Line 1542, Address: 0x101efc0, Func Offset: 0x1d0
	// Line 1544, Address: 0x101f004, Func Offset: 0x214
	// Func End, Address: 0x101f034, Func Offset: 0x244
}

// 
// Start address: 0x101f040
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1562, Address: 0x101f040, Func Offset: 0
	// Line 1563, Address: 0x101f060, Func Offset: 0x20
	// Line 1564, Address: 0x101f080, Func Offset: 0x40
	// Func End, Address: 0x101f090, Func Offset: 0x50
}

// 
// Start address: 0x101f090
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1566, Address: 0x101f090, Func Offset: 0
	// Line 1567, Address: 0x101f0b0, Func Offset: 0x20
	// Line 1568, Address: 0x101f0b4, Func Offset: 0x24
	// Line 1569, Address: 0x101f0d4, Func Offset: 0x44
	// Func End, Address: 0x101f0e4, Func Offset: 0x54
}

// 
// Start address: 0x101f0f0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1576, Address: 0x101f0f0, Func Offset: 0
	// Line 1582, Address: 0x101f120, Func Offset: 0x30
	// Line 1583, Address: 0x101f130, Func Offset: 0x40
	// Line 1589, Address: 0x101f140, Func Offset: 0x50
	// Line 1590, Address: 0x101f15c, Func Offset: 0x6c
	// Line 1591, Address: 0x101f160, Func Offset: 0x70
	// Line 1592, Address: 0x101f17c, Func Offset: 0x8c
	// Line 1593, Address: 0x101f180, Func Offset: 0x90
	// Line 1594, Address: 0x101f1a0, Func Offset: 0xb0
	// Line 1595, Address: 0x101f1a8, Func Offset: 0xb8
	// Line 1596, Address: 0x101f1c8, Func Offset: 0xd8
	// Line 1597, Address: 0x101f1d0, Func Offset: 0xe0
	// Line 1598, Address: 0x101f218, Func Offset: 0x128
	// Line 1600, Address: 0x101f224, Func Offset: 0x134
	// Line 1602, Address: 0x101f240, Func Offset: 0x150
	// Line 1607, Address: 0x101f248, Func Offset: 0x158
	// Line 1608, Address: 0x101f254, Func Offset: 0x164
	// Line 1611, Address: 0x101f260, Func Offset: 0x170
	// Line 1612, Address: 0x101f268, Func Offset: 0x178
	// Line 1613, Address: 0x101f288, Func Offset: 0x198
	// Line 1614, Address: 0x101f2a4, Func Offset: 0x1b4
	// Line 1615, Address: 0x101f2ac, Func Offset: 0x1bc
	// Line 1616, Address: 0x101f2cc, Func Offset: 0x1dc
	// Line 1618, Address: 0x101f2e8, Func Offset: 0x1f8
	// Line 1619, Address: 0x101f2f0, Func Offset: 0x200
	// Line 1620, Address: 0x101f2f8, Func Offset: 0x208
	// Line 1621, Address: 0x101f304, Func Offset: 0x214
	// Line 1622, Address: 0x101f31c, Func Offset: 0x22c
	// Line 1624, Address: 0x101f32c, Func Offset: 0x23c
	// Line 1627, Address: 0x101f338, Func Offset: 0x248
	// Line 1628, Address: 0x101f340, Func Offset: 0x250
	// Line 1629, Address: 0x101f344, Func Offset: 0x254
	// Func End, Address: 0x101f364, Func Offset: 0x274
}

// 
// Start address: 0x101f370
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1649, Address: 0x101f370, Func Offset: 0
	// Line 1657, Address: 0x101f398, Func Offset: 0x28
	// Line 1658, Address: 0x101f3fc, Func Offset: 0x8c
	// Line 1664, Address: 0x101f404, Func Offset: 0x94
	// Line 1665, Address: 0x101f40c, Func Offset: 0x9c
	// Line 1666, Address: 0x101f42c, Func Offset: 0xbc
	// Line 1667, Address: 0x101f448, Func Offset: 0xd8
	// Line 1668, Address: 0x101f450, Func Offset: 0xe0
	// Line 1669, Address: 0x101f470, Func Offset: 0x100
	// Line 1672, Address: 0x101f48c, Func Offset: 0x11c
	// Line 1673, Address: 0x101f494, Func Offset: 0x124
	// Line 1674, Address: 0x101f49c, Func Offset: 0x12c
	// Line 1675, Address: 0x101f4a8, Func Offset: 0x138
	// Line 1676, Address: 0x101f4c0, Func Offset: 0x150
	// Line 1677, Address: 0x101f4c8, Func Offset: 0x158
	// Line 1682, Address: 0x101f4d8, Func Offset: 0x168
	// Line 1685, Address: 0x101f4e4, Func Offset: 0x174
	// Line 1686, Address: 0x101f4ec, Func Offset: 0x17c
	// Line 1687, Address: 0x101f4f0, Func Offset: 0x180
	// Func End, Address: 0x101f50c, Func Offset: 0x19c
}

// 
// Start address: 0x101f510
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1701, Address: 0x101f510, Func Offset: 0
	// Line 1708, Address: 0x101f52c, Func Offset: 0x1c
	// Line 1709, Address: 0x101f530, Func Offset: 0x20
	// Line 1710, Address: 0x101f538, Func Offset: 0x28
	// Line 1711, Address: 0x101f55c, Func Offset: 0x4c
	// Line 1712, Address: 0x101f568, Func Offset: 0x58
	// Line 1713, Address: 0x101f580, Func Offset: 0x70
	// Line 1714, Address: 0x101f594, Func Offset: 0x84
	// Line 1719, Address: 0x101f5ac, Func Offset: 0x9c
	// Func End, Address: 0x101f5c4, Func Offset: 0xb4
}

// 
// Start address: 0x101f5d0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1733, Address: 0x101f5d0, Func Offset: 0
	// Line 1734, Address: 0x101f5dc, Func Offset: 0xc
	// Line 1735, Address: 0x101f608, Func Offset: 0x38
	// Line 1736, Address: 0x101f654, Func Offset: 0x84
	// Line 1737, Address: 0x101f680, Func Offset: 0xb0
	// Line 1739, Address: 0x101f6cc, Func Offset: 0xfc
	// Line 1745, Address: 0x101f6d8, Func Offset: 0x108
	// Line 1746, Address: 0x101f6dc, Func Offset: 0x10c
	// Func End, Address: 0x101f6e8, Func Offset: 0x118
}

// 
// Start address: 0x101f6f0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1763, Address: 0x101f6f0, Func Offset: 0
	// Line 1764, Address: 0x101f70c, Func Offset: 0x1c
	// Line 1766, Address: 0x101f728, Func Offset: 0x38
	// Func End, Address: 0x101f738, Func Offset: 0x48
}

// 
// Start address: 0x101f740
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1768, Address: 0x101f740, Func Offset: 0
	// Line 1769, Address: 0x101f75c, Func Offset: 0x1c
	// Line 1770, Address: 0x101f760, Func Offset: 0x20
	// Line 1772, Address: 0x101f77c, Func Offset: 0x3c
	// Func End, Address: 0x101f78c, Func Offset: 0x4c
}

// 
// Start address: 0x101f790
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1774, Address: 0x101f790, Func Offset: 0
	// Line 1775, Address: 0x101f7a4, Func Offset: 0x14
	// Line 1777, Address: 0x101f7c0, Func Offset: 0x30
	// Func End, Address: 0x101f7d0, Func Offset: 0x40
}

// 
// Start address: 0x101f7d0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x101f7d0, Func Offset: 0
	// Line 1780, Address: 0x101f7ec, Func Offset: 0x1c
	// Line 1782, Address: 0x101f808, Func Offset: 0x38
	// Func End, Address: 0x101f818, Func Offset: 0x48
}

// 
// Start address: 0x101f820
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1784, Address: 0x101f820, Func Offset: 0
	// Line 1785, Address: 0x101f838, Func Offset: 0x18
	// Line 1786, Address: 0x101f848, Func Offset: 0x28
	// Line 1787, Address: 0x101f858, Func Offset: 0x38
	// Line 1788, Address: 0x101f864, Func Offset: 0x44
	// Line 1790, Address: 0x101f870, Func Offset: 0x50
	// Line 1791, Address: 0x101f89c, Func Offset: 0x7c
	// Line 1794, Address: 0x101f8c8, Func Offset: 0xa8
	// Func End, Address: 0x101f8d4, Func Offset: 0xb4
}

// 
// Start address: 0x101f8e0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1810, Address: 0x101f8e0, Func Offset: 0
	// Line 1815, Address: 0x101f8f8, Func Offset: 0x18
	// Line 1816, Address: 0x101f904, Func Offset: 0x24
	// Line 1817, Address: 0x101f910, Func Offset: 0x30
	// Line 1818, Address: 0x101f918, Func Offset: 0x38
	// Line 1819, Address: 0x101f91c, Func Offset: 0x3c
	// Line 1820, Address: 0x101f934, Func Offset: 0x54
	// Line 1821, Address: 0x101f93c, Func Offset: 0x5c
	// Func End, Address: 0x101f95c, Func Offset: 0x7c
}

// 
// Start address: 0x101f960
void mapwrtb()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1824, Address: 0x101f960, Func Offset: 0
	// Line 1829, Address: 0x101f978, Func Offset: 0x18
	// Line 1830, Address: 0x101f984, Func Offset: 0x24
	// Line 1831, Address: 0x101f990, Func Offset: 0x30
	// Line 1832, Address: 0x101f998, Func Offset: 0x38
	// Line 1833, Address: 0x101f99c, Func Offset: 0x3c
	// Line 1835, Address: 0x101f9ac, Func Offset: 0x4c
	// Func End, Address: 0x101f9cc, Func Offset: 0x6c
}

// 
// Start address: 0x101f9d0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1838, Address: 0x101f9d0, Func Offset: 0
	// Line 1839, Address: 0x101f9e8, Func Offset: 0x18
	// Line 1840, Address: 0x101fa08, Func Offset: 0x38
	// Func End, Address: 0x101fa18, Func Offset: 0x48
}

// 
// Start address: 0x101fa20
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1845, Address: 0x101fa20, Func Offset: 0
	// Line 1849, Address: 0x101fa40, Func Offset: 0x20
	// Line 1852, Address: 0x101fa5c, Func Offset: 0x3c
	// Line 1856, Address: 0x101fa84, Func Offset: 0x64
	// Line 1857, Address: 0x101fa90, Func Offset: 0x70
	// Line 1859, Address: 0x101fab8, Func Offset: 0x98
	// Func End, Address: 0x101fac8, Func Offset: 0xa8
}

// 
// Start address: 0x101fad0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1865, Address: 0x101fad0, Func Offset: 0
	// Line 1868, Address: 0x101faec, Func Offset: 0x1c
	// Line 1869, Address: 0x101faf4, Func Offset: 0x24
	// Line 1872, Address: 0x101fafc, Func Offset: 0x2c
	// Line 1874, Address: 0x101fb20, Func Offset: 0x50
	// Line 1875, Address: 0x101fb40, Func Offset: 0x70
	// Line 1876, Address: 0x101fb48, Func Offset: 0x78
	// Line 1877, Address: 0x101fb6c, Func Offset: 0x9c
	// Func End, Address: 0x101fb88, Func Offset: 0xb8
}

// 
// Start address: 0x101fb90
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1903, Address: 0x101fb90, Func Offset: 0
	// Line 1908, Address: 0x101fbb8, Func Offset: 0x28
	// Line 1909, Address: 0x101fbc8, Func Offset: 0x38
	// Line 1911, Address: 0x101fbe4, Func Offset: 0x54
	// Line 1912, Address: 0x101fc08, Func Offset: 0x78
	// Line 1913, Address: 0x101fc30, Func Offset: 0xa0
	// Line 1914, Address: 0x101fc3c, Func Offset: 0xac
	// Line 1915, Address: 0x101fc44, Func Offset: 0xb4
	// Line 1918, Address: 0x101fc60, Func Offset: 0xd0
	// Line 1922, Address: 0x101fc88, Func Offset: 0xf8
	// Line 1925, Address: 0x101fc90, Func Offset: 0x100
	// Line 1926, Address: 0x101fc94, Func Offset: 0x104
	// Line 1930, Address: 0x101fcb0, Func Offset: 0x120
	// Line 1937, Address: 0x101fcd8, Func Offset: 0x148
	// Func End, Address: 0x101fcf4, Func Offset: 0x164
}

// 
// Start address: 0x101fd00
void mapinit()
{
	int i;
	int BmpNo;
	int TileNo;
	// Line 1948, Address: 0x101fd00, Func Offset: 0
	// Line 1952, Address: 0x101fd14, Func Offset: 0x14
	// Line 1953, Address: 0x101fd18, Func Offset: 0x18
	// Line 1954, Address: 0x101fd1c, Func Offset: 0x1c
	// Line 1955, Address: 0x101fd20, Func Offset: 0x20
	// Line 1956, Address: 0x101fd28, Func Offset: 0x28
	// Line 1957, Address: 0x101fd48, Func Offset: 0x48
	// Line 1960, Address: 0x101fd54, Func Offset: 0x54
	// Line 1961, Address: 0x101fd68, Func Offset: 0x68
	// Line 1964, Address: 0x101fd7c, Func Offset: 0x7c
	// Line 1965, Address: 0x101fd9c, Func Offset: 0x9c
	// Func End, Address: 0x101fdb8, Func Offset: 0xb8
}

// 
// Start address: 0x101fdc0
void mapset()
{
	// Line 1970, Address: 0x101fdc0, Func Offset: 0
	// Func End, Address: 0x101fdc8, Func Offset: 0x8
}

// 
// Start address: 0x101fdd0
void divdevset()
{
	// Line 1974, Address: 0x101fdd0, Func Offset: 0
	// Func End, Address: 0x101fdd8, Func Offset: 0x8
}

// 
// Start address: 0x101fde0
void enecginit()
{
	// Line 1978, Address: 0x101fde0, Func Offset: 0
	// Func End, Address: 0x101fde8, Func Offset: 0x8
}

