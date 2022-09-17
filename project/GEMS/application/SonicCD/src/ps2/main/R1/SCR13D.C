typedef struct tagPOINT;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef void(*type_10)(void*, unsigned char, int);
typedef int(*type_14)(int, int, int, int, int);

typedef short type_0[256];
typedef unsigned char type_1[4];
typedef _anon0* type_2[8];
typedef short type_3[2];
typedef short type_4[2][1];
typedef _anon13 type_5[128];
typedef short type_6[6];
typedef _anon0* type_7[8];
typedef _anon11 type_8[20];
typedef _anon11 type_9[0];
typedef unsigned char type_11[4];
typedef short type_12[2];
typedef short type_13[2][8];
typedef unsigned short type_15[4];
typedef unsigned short type_16[4][1024];
typedef unsigned char type_17[33];
typedef unsigned char type_18[2];
typedef unsigned char type_19[64];
typedef unsigned char type_20[64][8];
typedef unsigned char type_21[22];
typedef int type_22[4];
typedef unsigned char type_23[64];
typedef unsigned char type_24[64][8];

struct tagPOINT
{
	int x;
	int y;
};

union _anon0
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon1
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

struct _anon2
{
	short l;
	short h;
};

struct _anon3
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon4
{
	short w;
	_anon5 b;
};

struct _anon5
{
	char l;
	char h;
};

union _anon6
{
	unsigned int l;
	_anon7 w;
	_anon8 b;
};

struct _anon7
{
	unsigned short l;
	unsigned short h;
};

struct _anon8
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon9
{
	unsigned short w;
	_anon10 b;
};

struct _anon10
{
	unsigned char l;
	unsigned char h;
};

struct _anon11
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon12
{
	unsigned char cnt;
	union
	{
		_anon11 spra[20];
		_anon11 spr[0];
	};
};

struct _anon13
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon12** patbase;
	_anon0 xposi;
	_anon0 yposi;
	_anon4 xspeed;
	_anon4 yspeed;
	_anon4 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon4 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon4 direc;
	_anon4 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

unsigned char z12dwrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon13 actwk[128];
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
_anon4 scr_timer;
_anon9 scr_die;
_anon9 zone_flag;
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
_anon4 demoflag;
short enddemono;
unsigned char plflag;
void(*sMemSet)(void*, unsigned char, int);
short hscrollwork[256];
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
_anon0 scrb_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
_anon0* lphscrollbuff;
_anon9 scrflagz;
_anon9 scrflagc;
_anon9 scrflagb;
_anon0 vscroll;
short scra_vz;
short scra_hz;
_anon9 scrflaga;
_anon4 scroll_start;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char limmoveflag;
_anon9 scrflagaw;
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon9 scrflagbw;
unsigned char mapwkb[64][8];
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon1 mapinittbl;

_anon13* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk);
void scrollb_hv(int xOffs, int yOffs);
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
void mapwrt_z11a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();
void divdevset();
void enecginit();

// 
// Start address: 0x1024550
_anon13* main_chk()
{
	// Line 150, Address: 0x1024550, Func Offset: 0
	// Line 151, Address: 0x1024564, Func Offset: 0x14
	// Line 153, Address: 0x1024574, Func Offset: 0x24
	// Line 155, Address: 0x102457c, Func Offset: 0x2c
	// Func End, Address: 0x1024584, Func Offset: 0x34
}

// 
// Start address: 0x1024590
void scr_set()
{
	short* pScrTbl;
	// Line 193, Address: 0x1024590, Func Offset: 0
	// Line 196, Address: 0x102459c, Func Offset: 0xc
	// Line 197, Address: 0x10245b0, Func Offset: 0x20
	// Line 198, Address: 0x10245c4, Func Offset: 0x34
	// Line 200, Address: 0x10245cc, Func Offset: 0x3c
	// Line 201, Address: 0x10245d4, Func Offset: 0x44
	// Line 202, Address: 0x10245e0, Func Offset: 0x50
	// Line 203, Address: 0x10245e4, Func Offset: 0x54
	// Line 204, Address: 0x10245f8, Func Offset: 0x68
	// Line 205, Address: 0x10245fc, Func Offset: 0x6c
	// Line 206, Address: 0x1024610, Func Offset: 0x80
	// Line 207, Address: 0x1024614, Func Offset: 0x84
	// Line 208, Address: 0x1024628, Func Offset: 0x98
	// Line 209, Address: 0x102462c, Func Offset: 0x9c
	// Line 210, Address: 0x1024640, Func Offset: 0xb0
	// Line 211, Address: 0x1024660, Func Offset: 0xd0
	// Line 212, Address: 0x1024664, Func Offset: 0xd4
	// Line 213, Address: 0x1024670, Func Offset: 0xe0
	// Line 215, Address: 0x102467c, Func Offset: 0xec
	// Line 216, Address: 0x1024688, Func Offset: 0xf8
	// Line 218, Address: 0x1024694, Func Offset: 0x104
	// Line 219, Address: 0x102469c, Func Offset: 0x10c
	// Func End, Address: 0x10246b0, Func Offset: 0x120
}

// 
// Start address: 0x10246b0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 268, Address: 0x10246b0, Func Offset: 0
	// Line 271, Address: 0x10246c4, Func Offset: 0x14
	// Line 272, Address: 0x10246d4, Func Offset: 0x24
	// Line 273, Address: 0x10246dc, Func Offset: 0x2c
	// Line 275, Address: 0x10246ec, Func Offset: 0x3c
	// Line 276, Address: 0x1024704, Func Offset: 0x54
	// Line 277, Address: 0x1024714, Func Offset: 0x64
	// Line 278, Address: 0x102471c, Func Offset: 0x6c
	// Line 280, Address: 0x1024720, Func Offset: 0x70
	// Line 282, Address: 0x1024728, Func Offset: 0x78
	// Line 283, Address: 0x1024748, Func Offset: 0x98
	// Line 284, Address: 0x102476c, Func Offset: 0xbc
	// Line 286, Address: 0x1024774, Func Offset: 0xc4
	// Line 290, Address: 0x1024794, Func Offset: 0xe4
	// Line 291, Address: 0x10247a8, Func Offset: 0xf8
	// Line 295, Address: 0x10247bc, Func Offset: 0x10c
	// Line 296, Address: 0x10247d0, Func Offset: 0x120
	// Line 297, Address: 0x10247dc, Func Offset: 0x12c
	// Line 298, Address: 0x10247e4, Func Offset: 0x134
	// Line 302, Address: 0x10247e8, Func Offset: 0x138
	// Line 303, Address: 0x102480c, Func Offset: 0x15c
	// Line 307, Address: 0x102481c, Func Offset: 0x16c
	// Line 309, Address: 0x1024824, Func Offset: 0x174
	// Line 310, Address: 0x1024838, Func Offset: 0x188
	// Line 311, Address: 0x1024844, Func Offset: 0x194
	// Line 312, Address: 0x102484c, Func Offset: 0x19c
	// Line 316, Address: 0x1024850, Func Offset: 0x1a0
	// Line 317, Address: 0x1024874, Func Offset: 0x1c4
	// Line 321, Address: 0x1024884, Func Offset: 0x1d4
	// Line 323, Address: 0x102488c, Func Offset: 0x1dc
	// Line 326, Address: 0x102489c, Func Offset: 0x1ec
	// Line 327, Address: 0x10248ac, Func Offset: 0x1fc
	// Line 328, Address: 0x10248bc, Func Offset: 0x20c
	// Line 329, Address: 0x10248cc, Func Offset: 0x21c
	// Line 330, Address: 0x10248dc, Func Offset: 0x22c
	// Func End, Address: 0x10248f8, Func Offset: 0x248
}

// 
// Start address: 0x1024900
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 351, Address: 0x1024900, Func Offset: 0
	// Line 354, Address: 0x1024910, Func Offset: 0x10
	// Line 355, Address: 0x1024918, Func Offset: 0x18
	// Line 357, Address: 0x102491c, Func Offset: 0x1c
	// Line 358, Address: 0x1024930, Func Offset: 0x30
	// Line 359, Address: 0x102493c, Func Offset: 0x3c
	// Line 360, Address: 0x1024948, Func Offset: 0x48
	// Line 362, Address: 0x1024954, Func Offset: 0x54
	// Line 363, Address: 0x1024960, Func Offset: 0x60
	// Line 365, Address: 0x102496c, Func Offset: 0x6c
	// Line 366, Address: 0x1024978, Func Offset: 0x78
	// Line 368, Address: 0x102499c, Func Offset: 0x9c
	// Line 369, Address: 0x10249a8, Func Offset: 0xa8
	// Line 370, Address: 0x10249cc, Func Offset: 0xcc
	// Line 371, Address: 0x10249ec, Func Offset: 0xec
	// Func End, Address: 0x10249fc, Func Offset: 0xfc
}

// 
// Start address: 0x1024a00
void scroll()
{
	_anon0 ldwk;
	_anon0 ldwk2;
	_anon0* pHscrbuf;
	int i;
	int j;
	int lXwk;
	int lYwk;
	short sYline;
	short sYnum;
	short* psHscr;
	short* psHscw;
	short wk;
	short wk;
	unsigned char z12d_cnttbl[4];
	int scaddtbl[4];
	// Line 387, Address: 0x1024a00, Func Offset: 0
	// Line 399, Address: 0x1024a2c, Func Offset: 0x2c
	// Line 404, Address: 0x1024a3c, Func Offset: 0x3c
	// Line 406, Address: 0x1024a68, Func Offset: 0x68
	// Line 408, Address: 0x1024a70, Func Offset: 0x70
	// Line 409, Address: 0x1024a78, Func Offset: 0x78
	// Line 411, Address: 0x1024a80, Func Offset: 0x80
	// Line 412, Address: 0x1024a90, Func Offset: 0x90
	// Line 415, Address: 0x1024aa0, Func Offset: 0xa0
	// Line 416, Address: 0x1024abc, Func Offset: 0xbc
	// Line 418, Address: 0x1024acc, Func Offset: 0xcc
	// Line 419, Address: 0x1024ae8, Func Offset: 0xe8
	// Line 421, Address: 0x1024af8, Func Offset: 0xf8
	// Line 422, Address: 0x1024b0c, Func Offset: 0x10c
	// Line 423, Address: 0x1024b2c, Func Offset: 0x12c
	// Line 424, Address: 0x1024b3c, Func Offset: 0x13c
	// Line 426, Address: 0x1024b64, Func Offset: 0x164
	// Line 427, Address: 0x1024b9c, Func Offset: 0x19c
	// Line 429, Address: 0x1024bb0, Func Offset: 0x1b0
	// Line 430, Address: 0x1024bc4, Func Offset: 0x1c4
	// Line 431, Address: 0x1024bcc, Func Offset: 0x1cc
	// Line 432, Address: 0x1024bd4, Func Offset: 0x1d4
	// Line 433, Address: 0x1024bf4, Func Offset: 0x1f4
	// Line 434, Address: 0x1024bfc, Func Offset: 0x1fc
	// Line 435, Address: 0x1024c04, Func Offset: 0x204
	// Line 436, Address: 0x1024c08, Func Offset: 0x208
	// Line 438, Address: 0x1024c18, Func Offset: 0x218
	// Line 439, Address: 0x1024c38, Func Offset: 0x238
	// Line 440, Address: 0x1024c50, Func Offset: 0x250
	// Line 441, Address: 0x1024c58, Func Offset: 0x258
	// Line 443, Address: 0x1024c60, Func Offset: 0x260
	// Line 445, Address: 0x1024c6c, Func Offset: 0x26c
	// Line 446, Address: 0x1024c74, Func Offset: 0x274
	// Line 447, Address: 0x1024c78, Func Offset: 0x278
	// Line 448, Address: 0x1024c80, Func Offset: 0x280
	// Line 449, Address: 0x1024c84, Func Offset: 0x284
	// Line 450, Address: 0x1024c9c, Func Offset: 0x29c
	// Line 452, Address: 0x1024ccc, Func Offset: 0x2cc
	// Line 454, Address: 0x1024ce8, Func Offset: 0x2e8
	// Line 455, Address: 0x1024cf0, Func Offset: 0x2f0
	// Line 456, Address: 0x1024cf4, Func Offset: 0x2f4
	// Line 457, Address: 0x1024d04, Func Offset: 0x304
	// Line 459, Address: 0x1024d10, Func Offset: 0x310
	// Line 461, Address: 0x1024d30, Func Offset: 0x330
	// Line 463, Address: 0x1024d3c, Func Offset: 0x33c
	// Line 464, Address: 0x1024d44, Func Offset: 0x344
	// Line 465, Address: 0x1024d48, Func Offset: 0x348
	// Line 467, Address: 0x1024d58, Func Offset: 0x358
	// Line 468, Address: 0x1024d78, Func Offset: 0x378
	// Line 470, Address: 0x1024d84, Func Offset: 0x384
	// Line 471, Address: 0x1024d8c, Func Offset: 0x38c
	// Line 472, Address: 0x1024d90, Func Offset: 0x390
	// Line 474, Address: 0x1024da0, Func Offset: 0x3a0
	// Line 475, Address: 0x1024dc0, Func Offset: 0x3c0
	// Line 477, Address: 0x1024dcc, Func Offset: 0x3cc
	// Line 478, Address: 0x1024dd4, Func Offset: 0x3d4
	// Line 479, Address: 0x1024dd8, Func Offset: 0x3d8
	// Line 481, Address: 0x1024de8, Func Offset: 0x3e8
	// Line 482, Address: 0x1024df4, Func Offset: 0x3f4
	// Line 483, Address: 0x1024e24, Func Offset: 0x424
	// Line 484, Address: 0x1024e58, Func Offset: 0x458
	// Line 485, Address: 0x1024e64, Func Offset: 0x464
	// Line 486, Address: 0x1024e80, Func Offset: 0x480
	// Func End, Address: 0x1024eb4, Func Offset: 0x4b4
}

// 
// Start address: 0x1024ec0
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 507, Address: 0x1024ec0, Func Offset: 0
	// Line 511, Address: 0x1024edc, Func Offset: 0x1c
	// Line 512, Address: 0x1024ee0, Func Offset: 0x20
	// Line 513, Address: 0x1024efc, Func Offset: 0x3c
	// Line 514, Address: 0x1024f08, Func Offset: 0x48
	// Line 516, Address: 0x1024f14, Func Offset: 0x54
	// Line 517, Address: 0x1024f1c, Func Offset: 0x5c
	// Line 518, Address: 0x1024f2c, Func Offset: 0x6c
	// Line 519, Address: 0x1024f50, Func Offset: 0x90
	// Line 520, Address: 0x1024f70, Func Offset: 0xb0
	// Func End, Address: 0x1024f84, Func Offset: 0xc4
}

// 
// Start address: 0x1024f90
void scrollb_hv(int xOffs, int yOffs)
{
	int lwk;
	int lsv;
	_anon0 ldwk;
	// Line 542, Address: 0x1024f90, Func Offset: 0
	// Line 546, Address: 0x1024fa4, Func Offset: 0x14
	// Line 547, Address: 0x1024fac, Func Offset: 0x1c
	// Line 548, Address: 0x1024fc0, Func Offset: 0x30
	// Line 549, Address: 0x1024ff0, Func Offset: 0x60
	// Line 550, Address: 0x1025004, Func Offset: 0x74
	// Line 551, Address: 0x1025010, Func Offset: 0x80
	// Line 552, Address: 0x1025024, Func Offset: 0x94
	// Line 554, Address: 0x102502c, Func Offset: 0x9c
	// Line 559, Address: 0x1025040, Func Offset: 0xb0
	// Line 560, Address: 0x1025048, Func Offset: 0xb8
	// Line 561, Address: 0x102505c, Func Offset: 0xcc
	// Line 562, Address: 0x102508c, Func Offset: 0xfc
	// Line 563, Address: 0x10250a0, Func Offset: 0x110
	// Line 564, Address: 0x10250ac, Func Offset: 0x11c
	// Line 565, Address: 0x10250c0, Func Offset: 0x130
	// Line 567, Address: 0x10250c8, Func Offset: 0x138
	// Line 572, Address: 0x10250dc, Func Offset: 0x14c
	// Func End, Address: 0x10250f0, Func Offset: 0x160
}

// 
// Start address: 0x10250f0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	short wk;
	// Line 703, Address: 0x10250f0, Func Offset: 0
	// Line 707, Address: 0x1025108, Func Offset: 0x18
	// Line 708, Address: 0x1025110, Func Offset: 0x20
	// Line 709, Address: 0x1025118, Func Offset: 0x28
	// Line 710, Address: 0x1025120, Func Offset: 0x30
	// Line 711, Address: 0x1025124, Func Offset: 0x34
	// Line 712, Address: 0x102513c, Func Offset: 0x4c
	// Line 713, Address: 0x1025148, Func Offset: 0x58
	// Line 715, Address: 0x1025164, Func Offset: 0x74
	// Line 716, Address: 0x1025170, Func Offset: 0x80
	// Line 717, Address: 0x1025184, Func Offset: 0x94
	// Line 718, Address: 0x1025190, Func Offset: 0xa0
	// Line 719, Address: 0x10251b4, Func Offset: 0xc4
	// Line 721, Address: 0x10251bc, Func Offset: 0xcc
	// Line 726, Address: 0x10251e4, Func Offset: 0xf4
	// Func End, Address: 0x10251fc, Func Offset: 0x10c
}

// 
// Start address: 0x1025200
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	short wk;
	// Line 744, Address: 0x1025200, Func Offset: 0
	// Line 748, Address: 0x1025218, Func Offset: 0x18
	// Line 749, Address: 0x1025220, Func Offset: 0x20
	// Line 750, Address: 0x1025228, Func Offset: 0x28
	// Line 751, Address: 0x1025230, Func Offset: 0x30
	// Line 752, Address: 0x1025234, Func Offset: 0x34
	// Line 753, Address: 0x102524c, Func Offset: 0x4c
	// Line 754, Address: 0x1025258, Func Offset: 0x58
	// Line 756, Address: 0x1025274, Func Offset: 0x74
	// Line 757, Address: 0x1025280, Func Offset: 0x80
	// Line 758, Address: 0x1025294, Func Offset: 0x94
	// Line 759, Address: 0x10252a0, Func Offset: 0xa0
	// Line 760, Address: 0x10252c4, Func Offset: 0xc4
	// Line 762, Address: 0x10252cc, Func Offset: 0xcc
	// Line 767, Address: 0x10252f4, Func Offset: 0xf4
	// Func End, Address: 0x102530c, Func Offset: 0x10c
}

// 
// Start address: 0x1025310
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 782, Address: 0x1025310, Func Offset: 0
	// Line 786, Address: 0x1025320, Func Offset: 0x10
	// Line 788, Address: 0x1025330, Func Offset: 0x20
	// Line 789, Address: 0x1025338, Func Offset: 0x28
	// Line 790, Address: 0x102536c, Func Offset: 0x5c
	// Line 791, Address: 0x1025374, Func Offset: 0x64
	// Line 792, Address: 0x1025388, Func Offset: 0x78
	// Line 793, Address: 0x10253ac, Func Offset: 0x9c
	// Line 794, Address: 0x10253c0, Func Offset: 0xb0
	// Line 795, Address: 0x10253c8, Func Offset: 0xb8
	// Line 800, Address: 0x10253dc, Func Offset: 0xcc
	// Func End, Address: 0x10253f4, Func Offset: 0xe4
}

// 
// Start address: 0x1025400
void scrh_move()
{
	short xwk;
	// Line 817, Address: 0x1025400, Func Offset: 0
	// Line 820, Address: 0x1025408, Func Offset: 0x8
	// Line 821, Address: 0x1025450, Func Offset: 0x50
	// Line 823, Address: 0x1025460, Func Offset: 0x60
	// Line 824, Address: 0x1025468, Func Offset: 0x68
	// Line 825, Address: 0x1025470, Func Offset: 0x70
	// Line 827, Address: 0x1025480, Func Offset: 0x80
	// Line 828, Address: 0x1025494, Func Offset: 0x94
	// Line 832, Address: 0x10254a0, Func Offset: 0xa0
	// Line 833, Address: 0x10254b4, Func Offset: 0xb4
	// Line 834, Address: 0x10254d8, Func Offset: 0xd8
	// Line 836, Address: 0x10254e8, Func Offset: 0xe8
	// Line 838, Address: 0x10254f0, Func Offset: 0xf0
	// Line 839, Address: 0x1025504, Func Offset: 0x104
	// Line 843, Address: 0x1025510, Func Offset: 0x110
	// Line 844, Address: 0x1025524, Func Offset: 0x124
	// Line 845, Address: 0x1025548, Func Offset: 0x148
	// Line 850, Address: 0x1025558, Func Offset: 0x158
	// Line 851, Address: 0x1025588, Func Offset: 0x188
	// Line 852, Address: 0x1025590, Func Offset: 0x190
	// Func End, Address: 0x10255a0, Func Offset: 0x1a0
}

// 
// Start address: 0x10255a0
void scroll_v()
{
	short ywk;
	// Line 867, Address: 0x10255a0, Func Offset: 0
	// Line 870, Address: 0x10255ac, Func Offset: 0xc
	// Line 871, Address: 0x10255e0, Func Offset: 0x40
	// Line 872, Address: 0x10255f8, Func Offset: 0x58
	// Line 876, Address: 0x1025604, Func Offset: 0x64
	// Line 877, Address: 0x102561c, Func Offset: 0x7c
	// Line 878, Address: 0x1025628, Func Offset: 0x88
	// Line 879, Address: 0x102564c, Func Offset: 0xac
	// Line 880, Address: 0x1025660, Func Offset: 0xc0
	// Line 881, Address: 0x102566c, Func Offset: 0xcc
	// Line 882, Address: 0x1025674, Func Offset: 0xd4
	// Line 883, Address: 0x102569c, Func Offset: 0xfc
	// Line 884, Address: 0x10256c4, Func Offset: 0x124
	// Line 885, Address: 0x10256d0, Func Offset: 0x130
	// Line 887, Address: 0x10256d8, Func Offset: 0x138
	// Line 888, Address: 0x1025700, Func Offset: 0x160
	// Line 889, Address: 0x1025710, Func Offset: 0x170
	// Line 890, Address: 0x1025718, Func Offset: 0x178
	// Line 895, Address: 0x1025720, Func Offset: 0x180
	// Line 896, Address: 0x102574c, Func Offset: 0x1ac
	// Line 897, Address: 0x1025758, Func Offset: 0x1b8
	// Line 898, Address: 0x1025760, Func Offset: 0x1c0
	// Line 899, Address: 0x1025770, Func Offset: 0x1d0
	// Line 900, Address: 0x1025778, Func Offset: 0x1d8
	// Line 905, Address: 0x1025780, Func Offset: 0x1e0
	// Line 906, Address: 0x1025788, Func Offset: 0x1e8
	// Func End, Address: 0x102579c, Func Offset: 0x1fc
}

// 
// Start address: 0x10257a0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 920, Address: 0x10257a0, Func Offset: 0
	// Line 923, Address: 0x10257b0, Func Offset: 0x10
	// Line 924, Address: 0x10257cc, Func Offset: 0x2c
	// Line 925, Address: 0x10257e4, Func Offset: 0x44
	// Line 926, Address: 0x1025808, Func Offset: 0x68
	// Line 927, Address: 0x1025810, Func Offset: 0x70
	// Line 931, Address: 0x1025820, Func Offset: 0x80
	// Line 932, Address: 0x1025834, Func Offset: 0x94
	// Line 933, Address: 0x1025840, Func Offset: 0xa0
	// Line 936, Address: 0x1025848, Func Offset: 0xa8
	// Line 937, Address: 0x1025860, Func Offset: 0xc0
	// Line 938, Address: 0x102586c, Func Offset: 0xcc
	// Line 939, Address: 0x102588c, Func Offset: 0xec
	// Line 940, Address: 0x1025898, Func Offset: 0xf8
	// Line 941, Address: 0x10258a0, Func Offset: 0x100
	// Line 943, Address: 0x10258ac, Func Offset: 0x10c
	// Line 945, Address: 0x10258b4, Func Offset: 0x114
	// Line 946, Address: 0x10258cc, Func Offset: 0x12c
	// Line 947, Address: 0x10258d8, Func Offset: 0x138
	// Line 948, Address: 0x10258f8, Func Offset: 0x158
	// Line 949, Address: 0x1025904, Func Offset: 0x164
	// Line 950, Address: 0x102590c, Func Offset: 0x16c
	// Line 953, Address: 0x1025918, Func Offset: 0x178
	// Func End, Address: 0x102592c, Func Offset: 0x18c
}

// 
// Start address: 0x1025930
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 967, Address: 0x1025930, Func Offset: 0
	// Line 970, Address: 0x1025940, Func Offset: 0x10
	// Line 972, Address: 0x102594c, Func Offset: 0x1c
	// Line 973, Address: 0x1025964, Func Offset: 0x34
	// Line 974, Address: 0x1025970, Func Offset: 0x40
	// Line 975, Address: 0x1025990, Func Offset: 0x60
	// Line 976, Address: 0x102599c, Func Offset: 0x6c
	// Line 977, Address: 0x10259a4, Func Offset: 0x74
	// Line 979, Address: 0x10259b0, Func Offset: 0x80
	// Func End, Address: 0x10259c4, Func Offset: 0x94
}

// 
// Start address: 0x10259d0
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 994, Address: 0x10259d0, Func Offset: 0
	// Line 997, Address: 0x10259dc, Func Offset: 0xc
	// Line 998, Address: 0x10259e0, Func Offset: 0x10
	// Line 999, Address: 0x1025a0c, Func Offset: 0x3c
	// Line 1000, Address: 0x1025a20, Func Offset: 0x50
	// Line 1001, Address: 0x1025a2c, Func Offset: 0x5c
	// Line 1002, Address: 0x1025a34, Func Offset: 0x64
	// Line 1004, Address: 0x1025a40, Func Offset: 0x70
	// Func End, Address: 0x1025a50, Func Offset: 0x80
}

// 
// Start address: 0x1025a50
void sv_move_sub2()
{
	// Line 1008, Address: 0x1025a50, Func Offset: 0
	// Line 1009, Address: 0x1025a58, Func Offset: 0x8
	// Line 1011, Address: 0x1025a60, Func Offset: 0x10
	// Line 1012, Address: 0x1025a6c, Func Offset: 0x1c
	// Func End, Address: 0x1025a7c, Func Offset: 0x2c
}

// 
// Start address: 0x1025a80
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	short wk;
	// Line 1026, Address: 0x1025a80, Func Offset: 0
	// Line 1029, Address: 0x1025a90, Func Offset: 0x10
	// Line 1030, Address: 0x1025ab4, Func Offset: 0x34
	// Line 1031, Address: 0x1025acc, Func Offset: 0x4c
	// Line 1032, Address: 0x1025ad8, Func Offset: 0x58
	// Func End, Address: 0x1025aec, Func Offset: 0x6c
}

// 
// Start address: 0x1025af0
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1047, Address: 0x1025af0, Func Offset: 0
	// Line 1048, Address: 0x1025afc, Func Offset: 0xc
	// Line 1049, Address: 0x1025b24, Func Offset: 0x34
	// Line 1051, Address: 0x1025b3c, Func Offset: 0x4c
	// Line 1052, Address: 0x1025b48, Func Offset: 0x58
	// Line 1053, Address: 0x1025b50, Func Offset: 0x60
	// Line 1054, Address: 0x1025b5c, Func Offset: 0x6c
	// Line 1055, Address: 0x1025b70, Func Offset: 0x80
	// Line 1056, Address: 0x1025b84, Func Offset: 0x94
	// Line 1060, Address: 0x1025b98, Func Offset: 0xa8
	// Line 1061, Address: 0x1025ba4, Func Offset: 0xb4
	// Func End, Address: 0x1025bb4, Func Offset: 0xc4
}

// 
// Start address: 0x1025bc0
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	short wk;
	// Line 1075, Address: 0x1025bc0, Func Offset: 0
	// Line 1078, Address: 0x1025bd0, Func Offset: 0x10
	// Line 1079, Address: 0x1025bf0, Func Offset: 0x30
	// Line 1080, Address: 0x1025c08, Func Offset: 0x48
	// Line 1081, Address: 0x1025c14, Func Offset: 0x54
	// Func End, Address: 0x1025c28, Func Offset: 0x68
}

// 
// Start address: 0x1025c30
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1096, Address: 0x1025c30, Func Offset: 0
	// Line 1097, Address: 0x1025c3c, Func Offset: 0xc
	// Line 1098, Address: 0x1025c64, Func Offset: 0x34
	// Line 1100, Address: 0x1025c7c, Func Offset: 0x4c
	// Line 1101, Address: 0x1025c88, Func Offset: 0x58
	// Line 1102, Address: 0x1025c90, Func Offset: 0x60
	// Line 1103, Address: 0x1025c9c, Func Offset: 0x6c
	// Line 1104, Address: 0x1025cb0, Func Offset: 0x80
	// Line 1105, Address: 0x1025cc4, Func Offset: 0x94
	// Line 1109, Address: 0x1025cd8, Func Offset: 0xa8
	// Line 1110, Address: 0x1025ce4, Func Offset: 0xb4
	// Func End, Address: 0x1025cf4, Func Offset: 0xc4
}

// 
// Start address: 0x1025d00
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon6 spdwk;
	short wk;
	// Line 1127, Address: 0x1025d00, Func Offset: 0
	// Line 1131, Address: 0x1025d14, Func Offset: 0x14
	// Line 1132, Address: 0x1025d24, Func Offset: 0x24
	// Line 1133, Address: 0x1025d3c, Func Offset: 0x3c
	// Line 1134, Address: 0x1025d50, Func Offset: 0x50
	// Line 1135, Address: 0x1025d68, Func Offset: 0x68
	// Line 1137, Address: 0x1025d74, Func Offset: 0x74
	// Line 1139, Address: 0x1025d80, Func Offset: 0x80
	// Line 1140, Address: 0x1025dbc, Func Offset: 0xbc
	// Line 1141, Address: 0x1025dc4, Func Offset: 0xc4
	// Line 1142, Address: 0x1025dd8, Func Offset: 0xd8
	// Line 1143, Address: 0x1025e04, Func Offset: 0x104
	// Line 1144, Address: 0x1025e14, Func Offset: 0x114
	// Line 1145, Address: 0x1025e28, Func Offset: 0x128
	// Line 1146, Address: 0x1025e30, Func Offset: 0x130
	// Line 1151, Address: 0x1025e44, Func Offset: 0x144
	// Func End, Address: 0x1025e5c, Func Offset: 0x15c
}

// 
// Start address: 0x1025e60
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
	// Line 1169, Address: 0x1025e60, Func Offset: 0
	// Line 1178, Address: 0x1025e80, Func Offset: 0x20
	// Line 1179, Address: 0x1025e84, Func Offset: 0x24
	// Line 1180, Address: 0x1025e90, Func Offset: 0x30
	// Line 1181, Address: 0x1025e9c, Func Offset: 0x3c
	// Line 1182, Address: 0x1025ea4, Func Offset: 0x44
	// Line 1183, Address: 0x1025eac, Func Offset: 0x4c
	// Line 1185, Address: 0x1025ec0, Func Offset: 0x60
	// Line 1186, Address: 0x1025ec4, Func Offset: 0x64
	// Line 1187, Address: 0x1025ed0, Func Offset: 0x70
	// Line 1188, Address: 0x1025edc, Func Offset: 0x7c
	// Line 1189, Address: 0x1025ee4, Func Offset: 0x84
	// Line 1191, Address: 0x1025eec, Func Offset: 0x8c
	// Line 1192, Address: 0x1025ef8, Func Offset: 0x98
	// Line 1193, Address: 0x1025f0c, Func Offset: 0xac
	// Line 1195, Address: 0x1025f18, Func Offset: 0xb8
	// Line 1196, Address: 0x1025f20, Func Offset: 0xc0
	// Line 1198, Address: 0x1025f28, Func Offset: 0xc8
	// Line 1200, Address: 0x1025f48, Func Offset: 0xe8
	// Line 1206, Address: 0x1025f74, Func Offset: 0x114
	// Line 1207, Address: 0x1025f88, Func Offset: 0x128
	// Line 1209, Address: 0x1025f94, Func Offset: 0x134
	// Line 1210, Address: 0x1025f9c, Func Offset: 0x13c
	// Line 1211, Address: 0x1025fa4, Func Offset: 0x144
	// Line 1213, Address: 0x1025fc4, Func Offset: 0x164
	// Line 1219, Address: 0x1025ff0, Func Offset: 0x190
	// Line 1220, Address: 0x1026004, Func Offset: 0x1a4
	// Line 1222, Address: 0x1026010, Func Offset: 0x1b0
	// Line 1223, Address: 0x1026018, Func Offset: 0x1b8
	// Line 1224, Address: 0x1026020, Func Offset: 0x1c0
	// Line 1226, Address: 0x1026040, Func Offset: 0x1e0
	// Line 1232, Address: 0x102606c, Func Offset: 0x20c
	// Line 1233, Address: 0x1026080, Func Offset: 0x220
	// Line 1235, Address: 0x102608c, Func Offset: 0x22c
	// Line 1236, Address: 0x1026094, Func Offset: 0x234
	// Line 1237, Address: 0x102609c, Func Offset: 0x23c
	// Line 1239, Address: 0x10260bc, Func Offset: 0x25c
	// Line 1248, Address: 0x10260e8, Func Offset: 0x288
	// Func End, Address: 0x1026110, Func Offset: 0x2b0
}

// 
// Start address: 0x1026110
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase)
{
	_anon0 lD4;
	int WrtTblCnt;
	unsigned short wD5;
	short wD0;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	tagPOINT TilePoint;
	int BlkIndex;
	int i;
	// Line 1265, Address: 0x1026110, Func Offset: 0
	// Line 1277, Address: 0x102613c, Func Offset: 0x2c
	// Line 1279, Address: 0x1026144, Func Offset: 0x34
	// Line 1280, Address: 0x102615c, Func Offset: 0x4c
	// Line 1281, Address: 0x1026170, Func Offset: 0x60
	// Line 1283, Address: 0x1026178, Func Offset: 0x68
	// Line 1285, Address: 0x102618c, Func Offset: 0x7c
	// Line 1286, Address: 0x10261a4, Func Offset: 0x94
	// Line 1287, Address: 0x10261b8, Func Offset: 0xa8
	// Line 1288, Address: 0x10261c0, Func Offset: 0xb0
	// Line 1290, Address: 0x10261c8, Func Offset: 0xb8
	// Line 1291, Address: 0x10261dc, Func Offset: 0xcc
	// Line 1296, Address: 0x10261e4, Func Offset: 0xd4
	// Line 1297, Address: 0x102623c, Func Offset: 0x12c
	// Line 1303, Address: 0x1026264, Func Offset: 0x154
	// Line 1304, Address: 0x1026288, Func Offset: 0x178
	// Line 1305, Address: 0x10262b0, Func Offset: 0x1a0
	// Line 1306, Address: 0x10262c0, Func Offset: 0x1b0
	// Line 1307, Address: 0x10262c8, Func Offset: 0x1b8
	// Line 1309, Address: 0x10262e8, Func Offset: 0x1d8
	// Line 1313, Address: 0x1026314, Func Offset: 0x204
	// Line 1316, Address: 0x102631c, Func Offset: 0x20c
	// Line 1317, Address: 0x1026320, Func Offset: 0x210
	// Line 1321, Address: 0x1026340, Func Offset: 0x230
	// Line 1328, Address: 0x102636c, Func Offset: 0x25c
	// Line 1335, Address: 0x1026380, Func Offset: 0x270
	// Line 1336, Address: 0x1026388, Func Offset: 0x278
	// Line 1337, Address: 0x1026390, Func Offset: 0x280
	// Line 1338, Address: 0x10263a8, Func Offset: 0x298
	// Line 1339, Address: 0x10263c8, Func Offset: 0x2b8
	// Line 1343, Address: 0x10263d0, Func Offset: 0x2c0
	// Line 1345, Address: 0x1026400, Func Offset: 0x2f0
	// Line 1346, Address: 0x102640c, Func Offset: 0x2fc
	// Line 1350, Address: 0x102641c, Func Offset: 0x30c
	// Line 1351, Address: 0x1026428, Func Offset: 0x318
	// Line 1352, Address: 0x102644c, Func Offset: 0x33c
	// Line 1353, Address: 0x102647c, Func Offset: 0x36c
	// Line 1354, Address: 0x10264a0, Func Offset: 0x390
	// Line 1356, Address: 0x10264c8, Func Offset: 0x3b8
	// Line 1359, Address: 0x10264ec, Func Offset: 0x3dc
	// Line 1361, Address: 0x102650c, Func Offset: 0x3fc
	// Line 1363, Address: 0x1026520, Func Offset: 0x410
	// Line 1364, Address: 0x102652c, Func Offset: 0x41c
	// Line 1365, Address: 0x102653c, Func Offset: 0x42c
	// Line 1367, Address: 0x1026544, Func Offset: 0x434
	// Func End, Address: 0x102656c, Func Offset: 0x45c
}

// 
// Start address: 0x1026570
void scrollwrtc()
{
	// Line 1373, Address: 0x1026570, Func Offset: 0
	// Func End, Address: 0x1026578, Func Offset: 0x8
}

// 
// Start address: 0x1026580
void scrollwrtz()
{
	// Line 1378, Address: 0x1026580, Func Offset: 0
	// Func End, Address: 0x1026588, Func Offset: 0x8
}

// 
// Start address: 0x1026590
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1396, Address: 0x1026590, Func Offset: 0
	// Line 1409, Address: 0x10265b8, Func Offset: 0x28
	// Line 1412, Address: 0x10265d8, Func Offset: 0x48
	// Line 1413, Address: 0x10265ec, Func Offset: 0x5c
	// Line 1414, Address: 0x1026600, Func Offset: 0x70
	// Line 1415, Address: 0x1026614, Func Offset: 0x84
	// Line 1417, Address: 0x1026628, Func Offset: 0x98
	// Line 1418, Address: 0x1026634, Func Offset: 0xa4
	// Line 1419, Address: 0x1026648, Func Offset: 0xb8
	// Func End, Address: 0x1026658, Func Offset: 0xc8
}

// 
// Start address: 0x1026660
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1423, Address: 0x1026660, Func Offset: 0
	// Line 1427, Address: 0x1026688, Func Offset: 0x28
	// Line 1430, Address: 0x10266a8, Func Offset: 0x48
	// Line 1431, Address: 0x10266bc, Func Offset: 0x5c
	// Line 1432, Address: 0x10266d0, Func Offset: 0x70
	// Line 1433, Address: 0x10266e4, Func Offset: 0x84
	// Line 1435, Address: 0x10266f8, Func Offset: 0x98
	// Line 1436, Address: 0x1026704, Func Offset: 0xa4
	// Line 1437, Address: 0x1026718, Func Offset: 0xb8
	// Func End, Address: 0x1026728, Func Offset: 0xc8
}

// 
// Start address: 0x1026730
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1457, Address: 0x1026730, Func Offset: 0
	// Line 1461, Address: 0x1026758, Func Offset: 0x28
	// Line 1464, Address: 0x1026778, Func Offset: 0x48
	// Line 1465, Address: 0x102678c, Func Offset: 0x5c
	// Line 1466, Address: 0x102679c, Func Offset: 0x6c
	// Line 1467, Address: 0x10267b0, Func Offset: 0x80
	// Line 1469, Address: 0x10267c0, Func Offset: 0x90
	// Line 1470, Address: 0x10267cc, Func Offset: 0x9c
	// Line 1471, Address: 0x10267e0, Func Offset: 0xb0
	// Func End, Address: 0x10267f0, Func Offset: 0xc0
}

// 
// Start address: 0x10267f0
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
	// Line 1490, Address: 0x10267f0, Func Offset: 0
	// Line 1496, Address: 0x1026824, Func Offset: 0x34
	// Line 1498, Address: 0x1026834, Func Offset: 0x44
	// Line 1499, Address: 0x1026838, Func Offset: 0x48
	// Line 1500, Address: 0x1026840, Func Offset: 0x50
	// Line 1502, Address: 0x1026850, Func Offset: 0x60
	// Line 1504, Address: 0x1026854, Func Offset: 0x64
	// Line 1505, Address: 0x102685c, Func Offset: 0x6c
	// Line 1508, Address: 0x1026864, Func Offset: 0x74
	// Line 1509, Address: 0x102686c, Func Offset: 0x7c
	// Line 1510, Address: 0x1026878, Func Offset: 0x88
	// Line 1512, Address: 0x1026884, Func Offset: 0x94
	// Line 1513, Address: 0x102688c, Func Offset: 0x9c
	// Line 1514, Address: 0x1026894, Func Offset: 0xa4
	// Line 1515, Address: 0x102689c, Func Offset: 0xac
	// Line 1517, Address: 0x10268a8, Func Offset: 0xb8
	// Line 1518, Address: 0x10268b0, Func Offset: 0xc0
	// Line 1519, Address: 0x10268b8, Func Offset: 0xc8
	// Line 1520, Address: 0x10268c0, Func Offset: 0xd0
	// Line 1522, Address: 0x10268cc, Func Offset: 0xdc
	// Line 1523, Address: 0x10268d4, Func Offset: 0xe4
	// Line 1524, Address: 0x10268dc, Func Offset: 0xec
	// Line 1527, Address: 0x10268e4, Func Offset: 0xf4
	// Line 1528, Address: 0x10268ec, Func Offset: 0xfc
	// Line 1531, Address: 0x10268f4, Func Offset: 0x104
	// Line 1532, Address: 0x1026938, Func Offset: 0x148
	// Line 1533, Address: 0x102697c, Func Offset: 0x18c
	// Line 1534, Address: 0x10269c0, Func Offset: 0x1d0
	// Line 1536, Address: 0x1026a04, Func Offset: 0x214
	// Func End, Address: 0x1026a34, Func Offset: 0x244
}

// 
// Start address: 0x1026a40
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1554, Address: 0x1026a40, Func Offset: 0
	// Line 1555, Address: 0x1026a60, Func Offset: 0x20
	// Line 1556, Address: 0x1026a80, Func Offset: 0x40
	// Func End, Address: 0x1026a90, Func Offset: 0x50
}

// 
// Start address: 0x1026a90
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1558, Address: 0x1026a90, Func Offset: 0
	// Line 1559, Address: 0x1026ab0, Func Offset: 0x20
	// Line 1560, Address: 0x1026ab4, Func Offset: 0x24
	// Line 1561, Address: 0x1026ad4, Func Offset: 0x44
	// Func End, Address: 0x1026ae4, Func Offset: 0x54
}

// 
// Start address: 0x1026af0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1568, Address: 0x1026af0, Func Offset: 0
	// Line 1574, Address: 0x1026b20, Func Offset: 0x30
	// Line 1575, Address: 0x1026b30, Func Offset: 0x40
	// Line 1581, Address: 0x1026b40, Func Offset: 0x50
	// Line 1582, Address: 0x1026b5c, Func Offset: 0x6c
	// Line 1583, Address: 0x1026b60, Func Offset: 0x70
	// Line 1584, Address: 0x1026b7c, Func Offset: 0x8c
	// Line 1585, Address: 0x1026b80, Func Offset: 0x90
	// Line 1586, Address: 0x1026ba0, Func Offset: 0xb0
	// Line 1587, Address: 0x1026ba8, Func Offset: 0xb8
	// Line 1588, Address: 0x1026bc8, Func Offset: 0xd8
	// Line 1589, Address: 0x1026bd0, Func Offset: 0xe0
	// Line 1590, Address: 0x1026c18, Func Offset: 0x128
	// Line 1592, Address: 0x1026c24, Func Offset: 0x134
	// Line 1594, Address: 0x1026c40, Func Offset: 0x150
	// Line 1599, Address: 0x1026c48, Func Offset: 0x158
	// Line 1600, Address: 0x1026c54, Func Offset: 0x164
	// Line 1603, Address: 0x1026c60, Func Offset: 0x170
	// Line 1604, Address: 0x1026c68, Func Offset: 0x178
	// Line 1605, Address: 0x1026c88, Func Offset: 0x198
	// Line 1606, Address: 0x1026ca4, Func Offset: 0x1b4
	// Line 1607, Address: 0x1026cac, Func Offset: 0x1bc
	// Line 1608, Address: 0x1026ccc, Func Offset: 0x1dc
	// Line 1610, Address: 0x1026ce8, Func Offset: 0x1f8
	// Line 1611, Address: 0x1026cf0, Func Offset: 0x200
	// Line 1612, Address: 0x1026cf8, Func Offset: 0x208
	// Line 1613, Address: 0x1026d04, Func Offset: 0x214
	// Line 1614, Address: 0x1026d1c, Func Offset: 0x22c
	// Line 1616, Address: 0x1026d2c, Func Offset: 0x23c
	// Line 1619, Address: 0x1026d38, Func Offset: 0x248
	// Line 1620, Address: 0x1026d40, Func Offset: 0x250
	// Line 1621, Address: 0x1026d44, Func Offset: 0x254
	// Func End, Address: 0x1026d64, Func Offset: 0x274
}

// 
// Start address: 0x1026d70
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1641, Address: 0x1026d70, Func Offset: 0
	// Line 1649, Address: 0x1026d98, Func Offset: 0x28
	// Line 1650, Address: 0x1026dfc, Func Offset: 0x8c
	// Line 1656, Address: 0x1026e04, Func Offset: 0x94
	// Line 1657, Address: 0x1026e0c, Func Offset: 0x9c
	// Line 1658, Address: 0x1026e2c, Func Offset: 0xbc
	// Line 1659, Address: 0x1026e48, Func Offset: 0xd8
	// Line 1660, Address: 0x1026e50, Func Offset: 0xe0
	// Line 1661, Address: 0x1026e70, Func Offset: 0x100
	// Line 1664, Address: 0x1026e8c, Func Offset: 0x11c
	// Line 1665, Address: 0x1026e94, Func Offset: 0x124
	// Line 1666, Address: 0x1026e9c, Func Offset: 0x12c
	// Line 1667, Address: 0x1026ea8, Func Offset: 0x138
	// Line 1668, Address: 0x1026ec0, Func Offset: 0x150
	// Line 1669, Address: 0x1026ec8, Func Offset: 0x158
	// Line 1674, Address: 0x1026ed8, Func Offset: 0x168
	// Line 1677, Address: 0x1026ee4, Func Offset: 0x174
	// Line 1678, Address: 0x1026eec, Func Offset: 0x17c
	// Line 1679, Address: 0x1026ef0, Func Offset: 0x180
	// Func End, Address: 0x1026f0c, Func Offset: 0x19c
}

// 
// Start address: 0x1026f10
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1693, Address: 0x1026f10, Func Offset: 0
	// Line 1700, Address: 0x1026f2c, Func Offset: 0x1c
	// Line 1701, Address: 0x1026f30, Func Offset: 0x20
	// Line 1702, Address: 0x1026f38, Func Offset: 0x28
	// Line 1703, Address: 0x1026f5c, Func Offset: 0x4c
	// Line 1704, Address: 0x1026f68, Func Offset: 0x58
	// Line 1705, Address: 0x1026f80, Func Offset: 0x70
	// Line 1706, Address: 0x1026f94, Func Offset: 0x84
	// Line 1711, Address: 0x1026fac, Func Offset: 0x9c
	// Func End, Address: 0x1026fc4, Func Offset: 0xb4
}

// 
// Start address: 0x1026fd0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1725, Address: 0x1026fd0, Func Offset: 0
	// Line 1726, Address: 0x1026fdc, Func Offset: 0xc
	// Line 1727, Address: 0x1027008, Func Offset: 0x38
	// Line 1728, Address: 0x1027054, Func Offset: 0x84
	// Line 1729, Address: 0x1027080, Func Offset: 0xb0
	// Line 1731, Address: 0x10270cc, Func Offset: 0xfc
	// Line 1737, Address: 0x10270d8, Func Offset: 0x108
	// Line 1738, Address: 0x10270dc, Func Offset: 0x10c
	// Func End, Address: 0x10270e8, Func Offset: 0x118
}

// 
// Start address: 0x10270f0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1755, Address: 0x10270f0, Func Offset: 0
	// Line 1756, Address: 0x102710c, Func Offset: 0x1c
	// Line 1758, Address: 0x1027128, Func Offset: 0x38
	// Func End, Address: 0x1027138, Func Offset: 0x48
}

// 
// Start address: 0x1027140
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1760, Address: 0x1027140, Func Offset: 0
	// Line 1761, Address: 0x102715c, Func Offset: 0x1c
	// Line 1762, Address: 0x1027160, Func Offset: 0x20
	// Line 1764, Address: 0x102717c, Func Offset: 0x3c
	// Func End, Address: 0x102718c, Func Offset: 0x4c
}

// 
// Start address: 0x1027190
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1766, Address: 0x1027190, Func Offset: 0
	// Line 1767, Address: 0x10271a4, Func Offset: 0x14
	// Line 1769, Address: 0x10271c0, Func Offset: 0x30
	// Func End, Address: 0x10271d0, Func Offset: 0x40
}

// 
// Start address: 0x10271d0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1771, Address: 0x10271d0, Func Offset: 0
	// Line 1772, Address: 0x10271ec, Func Offset: 0x1c
	// Line 1774, Address: 0x1027208, Func Offset: 0x38
	// Func End, Address: 0x1027218, Func Offset: 0x48
}

// 
// Start address: 0x1027220
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1776, Address: 0x1027220, Func Offset: 0
	// Line 1777, Address: 0x1027238, Func Offset: 0x18
	// Line 1778, Address: 0x1027248, Func Offset: 0x28
	// Line 1779, Address: 0x1027258, Func Offset: 0x38
	// Line 1780, Address: 0x1027264, Func Offset: 0x44
	// Line 1782, Address: 0x1027270, Func Offset: 0x50
	// Line 1783, Address: 0x102729c, Func Offset: 0x7c
	// Line 1786, Address: 0x10272c8, Func Offset: 0xa8
	// Func End, Address: 0x10272d4, Func Offset: 0xb4
}

// 
// Start address: 0x10272e0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1802, Address: 0x10272e0, Func Offset: 0
	// Line 1807, Address: 0x10272f8, Func Offset: 0x18
	// Line 1808, Address: 0x1027304, Func Offset: 0x24
	// Line 1809, Address: 0x1027310, Func Offset: 0x30
	// Line 1810, Address: 0x1027318, Func Offset: 0x38
	// Line 1811, Address: 0x102731c, Func Offset: 0x3c
	// Line 1815, Address: 0x1027334, Func Offset: 0x54
	// Line 1816, Address: 0x102733c, Func Offset: 0x5c
	// Line 1817, Address: 0x1027340, Func Offset: 0x60
	// Line 1819, Address: 0x1027350, Func Offset: 0x70
	// Func End, Address: 0x1027370, Func Offset: 0x90
}

// 
// Start address: 0x1027370
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1822, Address: 0x1027370, Func Offset: 0
	// Line 1823, Address: 0x1027388, Func Offset: 0x18
	// Line 1824, Address: 0x10273a8, Func Offset: 0x38
	// Func End, Address: 0x10273b8, Func Offset: 0x48
}

// 
// Start address: 0x10273c0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1829, Address: 0x10273c0, Func Offset: 0
	// Line 1833, Address: 0x10273e0, Func Offset: 0x20
	// Line 1836, Address: 0x10273fc, Func Offset: 0x3c
	// Line 1840, Address: 0x1027424, Func Offset: 0x64
	// Line 1841, Address: 0x1027430, Func Offset: 0x70
	// Line 1843, Address: 0x1027458, Func Offset: 0x98
	// Func End, Address: 0x1027468, Func Offset: 0xa8
}

// 
// Start address: 0x1027470
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1849, Address: 0x1027470, Func Offset: 0
	// Line 1852, Address: 0x102748c, Func Offset: 0x1c
	// Line 1853, Address: 0x1027494, Func Offset: 0x24
	// Line 1856, Address: 0x102749c, Func Offset: 0x2c
	// Line 1858, Address: 0x10274c0, Func Offset: 0x50
	// Line 1859, Address: 0x10274e0, Func Offset: 0x70
	// Line 1860, Address: 0x10274e8, Func Offset: 0x78
	// Line 1861, Address: 0x102750c, Func Offset: 0x9c
	// Func End, Address: 0x1027528, Func Offset: 0xb8
}

// 
// Start address: 0x1027530
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1887, Address: 0x1027530, Func Offset: 0
	// Line 1892, Address: 0x1027558, Func Offset: 0x28
	// Line 1893, Address: 0x1027568, Func Offset: 0x38
	// Line 1895, Address: 0x1027584, Func Offset: 0x54
	// Line 1896, Address: 0x10275a8, Func Offset: 0x78
	// Line 1897, Address: 0x10275d0, Func Offset: 0xa0
	// Line 1898, Address: 0x10275dc, Func Offset: 0xac
	// Line 1899, Address: 0x10275e4, Func Offset: 0xb4
	// Line 1902, Address: 0x1027600, Func Offset: 0xd0
	// Line 1906, Address: 0x1027628, Func Offset: 0xf8
	// Line 1909, Address: 0x1027630, Func Offset: 0x100
	// Line 1910, Address: 0x1027634, Func Offset: 0x104
	// Line 1914, Address: 0x1027650, Func Offset: 0x120
	// Line 1921, Address: 0x1027678, Func Offset: 0x148
	// Func End, Address: 0x1027694, Func Offset: 0x164
}

// 
// Start address: 0x10276a0
void mapinit()
{
	// Line 1932, Address: 0x10276a0, Func Offset: 0
	// Line 1934, Address: 0x10276a8, Func Offset: 0x8
	// Line 1935, Address: 0x10276bc, Func Offset: 0x1c
	// Line 1938, Address: 0x10276d0, Func Offset: 0x30
	// Line 1939, Address: 0x10276f0, Func Offset: 0x50
	// Func End, Address: 0x1027700, Func Offset: 0x60
}

// 
// Start address: 0x1027700
void mapset()
{
	// Line 1944, Address: 0x1027700, Func Offset: 0
	// Func End, Address: 0x1027708, Func Offset: 0x8
}

// 
// Start address: 0x1027710
void divdevset()
{
	// Line 1948, Address: 0x1027710, Func Offset: 0
	// Func End, Address: 0x1027718, Func Offset: 0x8
}

// 
// Start address: 0x1027720
void enecginit()
{
	// Line 1952, Address: 0x1027720, Func Offset: 0
	// Func End, Address: 0x1027728, Func Offset: 0x8
}

