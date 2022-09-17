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
// Start address: 0x102ba50
_anon1* main_chk()
{
	// Line 146, Address: 0x102ba50, Func Offset: 0
	// Line 147, Address: 0x102ba64, Func Offset: 0x14
	// Line 149, Address: 0x102ba74, Func Offset: 0x24
	// Line 151, Address: 0x102ba7c, Func Offset: 0x2c
	// Func End, Address: 0x102ba84, Func Offset: 0x34
}

// 
// Start address: 0x102ba90
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x102ba90, Func Offset: 0
	// Line 192, Address: 0x102ba9c, Func Offset: 0xc
	// Line 193, Address: 0x102bab0, Func Offset: 0x20
	// Line 194, Address: 0x102bac4, Func Offset: 0x34
	// Line 196, Address: 0x102bacc, Func Offset: 0x3c
	// Line 197, Address: 0x102bad4, Func Offset: 0x44
	// Line 198, Address: 0x102bae0, Func Offset: 0x50
	// Line 199, Address: 0x102bae4, Func Offset: 0x54
	// Line 200, Address: 0x102baf8, Func Offset: 0x68
	// Line 201, Address: 0x102bafc, Func Offset: 0x6c
	// Line 202, Address: 0x102bb10, Func Offset: 0x80
	// Line 203, Address: 0x102bb14, Func Offset: 0x84
	// Line 204, Address: 0x102bb28, Func Offset: 0x98
	// Line 205, Address: 0x102bb2c, Func Offset: 0x9c
	// Line 206, Address: 0x102bb40, Func Offset: 0xb0
	// Line 207, Address: 0x102bb60, Func Offset: 0xd0
	// Line 208, Address: 0x102bb64, Func Offset: 0xd4
	// Line 209, Address: 0x102bb70, Func Offset: 0xe0
	// Line 211, Address: 0x102bb7c, Func Offset: 0xec
	// Line 212, Address: 0x102bb88, Func Offset: 0xf8
	// Line 214, Address: 0x102bb94, Func Offset: 0x104
	// Line 215, Address: 0x102bb9c, Func Offset: 0x10c
	// Func End, Address: 0x102bbb0, Func Offset: 0x120
}

// 
// Start address: 0x102bbb0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x102bbb0, Func Offset: 0
	// Line 267, Address: 0x102bbc4, Func Offset: 0x14
	// Line 268, Address: 0x102bbd4, Func Offset: 0x24
	// Line 269, Address: 0x102bbdc, Func Offset: 0x2c
	// Line 271, Address: 0x102bbec, Func Offset: 0x3c
	// Line 272, Address: 0x102bc04, Func Offset: 0x54
	// Line 273, Address: 0x102bc14, Func Offset: 0x64
	// Line 274, Address: 0x102bc1c, Func Offset: 0x6c
	// Line 276, Address: 0x102bc20, Func Offset: 0x70
	// Line 278, Address: 0x102bc28, Func Offset: 0x78
	// Line 279, Address: 0x102bc48, Func Offset: 0x98
	// Line 280, Address: 0x102bc6c, Func Offset: 0xbc
	// Line 282, Address: 0x102bc74, Func Offset: 0xc4
	// Line 286, Address: 0x102bc94, Func Offset: 0xe4
	// Line 287, Address: 0x102bca8, Func Offset: 0xf8
	// Line 291, Address: 0x102bcbc, Func Offset: 0x10c
	// Line 292, Address: 0x102bcd0, Func Offset: 0x120
	// Line 293, Address: 0x102bcdc, Func Offset: 0x12c
	// Line 294, Address: 0x102bce4, Func Offset: 0x134
	// Line 298, Address: 0x102bce8, Func Offset: 0x138
	// Line 299, Address: 0x102bd0c, Func Offset: 0x15c
	// Line 303, Address: 0x102bd1c, Func Offset: 0x16c
	// Line 305, Address: 0x102bd24, Func Offset: 0x174
	// Line 306, Address: 0x102bd38, Func Offset: 0x188
	// Line 307, Address: 0x102bd44, Func Offset: 0x194
	// Line 308, Address: 0x102bd4c, Func Offset: 0x19c
	// Line 312, Address: 0x102bd50, Func Offset: 0x1a0
	// Line 313, Address: 0x102bd74, Func Offset: 0x1c4
	// Line 317, Address: 0x102bd84, Func Offset: 0x1d4
	// Line 319, Address: 0x102bd8c, Func Offset: 0x1dc
	// Line 322, Address: 0x102bd9c, Func Offset: 0x1ec
	// Line 323, Address: 0x102bdac, Func Offset: 0x1fc
	// Line 324, Address: 0x102bdbc, Func Offset: 0x20c
	// Line 325, Address: 0x102bdcc, Func Offset: 0x21c
	// Line 326, Address: 0x102bddc, Func Offset: 0x22c
	// Func End, Address: 0x102bdf8, Func Offset: 0x248
}

// 
// Start address: 0x102be00
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x102be00, Func Offset: 0
	// Line 350, Address: 0x102be0c, Func Offset: 0xc
	// Line 351, Address: 0x102be14, Func Offset: 0x14
	// Line 353, Address: 0x102be18, Func Offset: 0x18
	// Line 354, Address: 0x102be24, Func Offset: 0x24
	// Line 355, Address: 0x102be30, Func Offset: 0x30
	// Line 356, Address: 0x102be3c, Func Offset: 0x3c
	// Line 358, Address: 0x102be48, Func Offset: 0x48
	// Line 359, Address: 0x102be64, Func Offset: 0x64
	// Line 361, Address: 0x102be70, Func Offset: 0x70
	// Line 362, Address: 0x102be8c, Func Offset: 0x8c
	// Line 364, Address: 0x102be98, Func Offset: 0x98
	// Line 365, Address: 0x102beb4, Func Offset: 0xb4
	// Line 366, Address: 0x102bed8, Func Offset: 0xd8
	// Func End, Address: 0x102bee4, Func Offset: 0xe4
}

// 
// Start address: 0x102bef0
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
	// Line 382, Address: 0x102bef0, Func Offset: 0
	// Line 394, Address: 0x102bf0c, Func Offset: 0x1c
	// Line 399, Address: 0x102bf1c, Func Offset: 0x2c
	// Line 401, Address: 0x102bf48, Func Offset: 0x58
	// Line 403, Address: 0x102bf50, Func Offset: 0x60
	// Line 404, Address: 0x102bf58, Func Offset: 0x68
	// Line 406, Address: 0x102bf60, Func Offset: 0x70
	// Line 407, Address: 0x102bf70, Func Offset: 0x80
	// Line 410, Address: 0x102bf80, Func Offset: 0x90
	// Line 411, Address: 0x102bf94, Func Offset: 0xa4
	// Line 413, Address: 0x102bfa4, Func Offset: 0xb4
	// Line 414, Address: 0x102bfb8, Func Offset: 0xc8
	// Line 416, Address: 0x102bfc8, Func Offset: 0xd8
	// Line 417, Address: 0x102bfe4, Func Offset: 0xf4
	// Line 419, Address: 0x102bff4, Func Offset: 0x104
	// Line 422, Address: 0x102c008, Func Offset: 0x118
	// Line 424, Address: 0x102c018, Func Offset: 0x128
	// Line 426, Address: 0x102c040, Func Offset: 0x150
	// Line 427, Address: 0x102c078, Func Offset: 0x188
	// Line 429, Address: 0x102c08c, Func Offset: 0x19c
	// Line 431, Address: 0x102c098, Func Offset: 0x1a8
	// Line 433, Address: 0x102c0a4, Func Offset: 0x1b4
	// Line 434, Address: 0x102c0c4, Func Offset: 0x1d4
	// Line 436, Address: 0x102c0d0, Func Offset: 0x1e0
	// Line 437, Address: 0x102c0e4, Func Offset: 0x1f4
	// Line 439, Address: 0x102c0f4, Func Offset: 0x204
	// Line 440, Address: 0x102c114, Func Offset: 0x224
	// Line 442, Address: 0x102c120, Func Offset: 0x230
	// Line 443, Address: 0x102c134, Func Offset: 0x244
	// Line 445, Address: 0x102c144, Func Offset: 0x254
	// Line 446, Address: 0x102c150, Func Offset: 0x260
	// Line 447, Address: 0x102c180, Func Offset: 0x290
	// Line 448, Address: 0x102c1b0, Func Offset: 0x2c0
	// Line 449, Address: 0x102c1cc, Func Offset: 0x2dc
	// Func End, Address: 0x102c1f0, Func Offset: 0x300
}

// 
// Start address: 0x102c1f0
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
	// Line 463, Address: 0x102c1f0, Func Offset: 0
	// Line 464, Address: 0x102c214, Func Offset: 0x24
	// Line 472, Address: 0x102c240, Func Offset: 0x50
	// Line 473, Address: 0x102c264, Func Offset: 0x74
	// Line 474, Address: 0x102c268, Func Offset: 0x78
	// Line 476, Address: 0x102c278, Func Offset: 0x88
	// Line 478, Address: 0x102c28c, Func Offset: 0x9c
	// Line 480, Address: 0x102c298, Func Offset: 0xa8
	// Line 481, Address: 0x102c2ac, Func Offset: 0xbc
	// Line 482, Address: 0x102c300, Func Offset: 0x110
	// Line 484, Address: 0x102c318, Func Offset: 0x128
	// Line 485, Address: 0x102c32c, Func Offset: 0x13c
	// Line 486, Address: 0x102c338, Func Offset: 0x148
	// Line 488, Address: 0x102c344, Func Offset: 0x154
	// Line 489, Address: 0x102c350, Func Offset: 0x160
	// Line 491, Address: 0x102c35c, Func Offset: 0x16c
	// Line 492, Address: 0x102c370, Func Offset: 0x180
	// Func End, Address: 0x102c398, Func Offset: 0x1a8
}

// 
// Start address: 0x102c3a0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 513, Address: 0x102c3a0, Func Offset: 0
	// Line 517, Address: 0x102c3bc, Func Offset: 0x1c
	// Line 518, Address: 0x102c3c0, Func Offset: 0x20
	// Line 520, Address: 0x102c3e0, Func Offset: 0x40
	// Line 521, Address: 0x102c3fc, Func Offset: 0x5c
	// Line 522, Address: 0x102c408, Func Offset: 0x68
	// Line 524, Address: 0x102c414, Func Offset: 0x74
	// Line 525, Address: 0x102c41c, Func Offset: 0x7c
	// Line 526, Address: 0x102c42c, Func Offset: 0x8c
	// Line 527, Address: 0x102c450, Func Offset: 0xb0
	// Line 528, Address: 0x102c470, Func Offset: 0xd0
	// Func End, Address: 0x102c484, Func Offset: 0xe4
}

// 
// Start address: 0x102c490
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 634, Address: 0x102c490, Func Offset: 0
	// Line 637, Address: 0x102c4a0, Func Offset: 0x10
	// Line 638, Address: 0x102c4b0, Func Offset: 0x20
	// Line 639, Address: 0x102c4bc, Func Offset: 0x2c
	// Line 641, Address: 0x102c4f4, Func Offset: 0x64
	// Line 642, Address: 0x102c4fc, Func Offset: 0x6c
	// Line 643, Address: 0x102c510, Func Offset: 0x80
	// Line 644, Address: 0x102c530, Func Offset: 0xa0
	// Line 645, Address: 0x102c544, Func Offset: 0xb4
	// Line 647, Address: 0x102c54c, Func Offset: 0xbc
	// Line 652, Address: 0x102c560, Func Offset: 0xd0
	// Func End, Address: 0x102c574, Func Offset: 0xe4
}

// 
// Start address: 0x102c580
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 670, Address: 0x102c580, Func Offset: 0
	// Line 674, Address: 0x102c594, Func Offset: 0x14
	// Line 675, Address: 0x102c59c, Func Offset: 0x1c
	// Line 676, Address: 0x102c5a4, Func Offset: 0x24
	// Line 677, Address: 0x102c5ac, Func Offset: 0x2c
	// Line 678, Address: 0x102c5b0, Func Offset: 0x30
	// Line 679, Address: 0x102c5d4, Func Offset: 0x54
	// Line 680, Address: 0x102c5e0, Func Offset: 0x60
	// Line 682, Address: 0x102c5fc, Func Offset: 0x7c
	// Line 683, Address: 0x102c608, Func Offset: 0x88
	// Line 684, Address: 0x102c61c, Func Offset: 0x9c
	// Line 685, Address: 0x102c628, Func Offset: 0xa8
	// Line 686, Address: 0x102c64c, Func Offset: 0xcc
	// Line 688, Address: 0x102c654, Func Offset: 0xd4
	// Line 693, Address: 0x102c67c, Func Offset: 0xfc
	// Func End, Address: 0x102c690, Func Offset: 0x110
}

// 
// Start address: 0x102c690
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 711, Address: 0x102c690, Func Offset: 0
	// Line 715, Address: 0x102c6a4, Func Offset: 0x14
	// Line 716, Address: 0x102c6ac, Func Offset: 0x1c
	// Line 717, Address: 0x102c6b4, Func Offset: 0x24
	// Line 718, Address: 0x102c6bc, Func Offset: 0x2c
	// Line 719, Address: 0x102c6c0, Func Offset: 0x30
	// Line 720, Address: 0x102c6e4, Func Offset: 0x54
	// Line 721, Address: 0x102c6f0, Func Offset: 0x60
	// Line 723, Address: 0x102c70c, Func Offset: 0x7c
	// Line 724, Address: 0x102c718, Func Offset: 0x88
	// Line 725, Address: 0x102c72c, Func Offset: 0x9c
	// Line 726, Address: 0x102c738, Func Offset: 0xa8
	// Line 727, Address: 0x102c75c, Func Offset: 0xcc
	// Line 729, Address: 0x102c764, Func Offset: 0xd4
	// Line 734, Address: 0x102c78c, Func Offset: 0xfc
	// Func End, Address: 0x102c7a0, Func Offset: 0x110
}

// 
// Start address: 0x102c7a0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 752, Address: 0x102c7a0, Func Offset: 0
	// Line 756, Address: 0x102c7b4, Func Offset: 0x14
	// Line 757, Address: 0x102c7bc, Func Offset: 0x1c
	// Line 758, Address: 0x102c7c4, Func Offset: 0x24
	// Line 759, Address: 0x102c7cc, Func Offset: 0x2c
	// Line 760, Address: 0x102c7d0, Func Offset: 0x30
	// Line 761, Address: 0x102c7f4, Func Offset: 0x54
	// Line 762, Address: 0x102c800, Func Offset: 0x60
	// Line 764, Address: 0x102c81c, Func Offset: 0x7c
	// Line 765, Address: 0x102c828, Func Offset: 0x88
	// Line 766, Address: 0x102c83c, Func Offset: 0x9c
	// Line 767, Address: 0x102c848, Func Offset: 0xa8
	// Line 768, Address: 0x102c86c, Func Offset: 0xcc
	// Line 770, Address: 0x102c874, Func Offset: 0xd4
	// Line 775, Address: 0x102c89c, Func Offset: 0xfc
	// Func End, Address: 0x102c8b0, Func Offset: 0x110
}

// 
// Start address: 0x102c8b0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 790, Address: 0x102c8b0, Func Offset: 0
	// Line 794, Address: 0x102c8c0, Func Offset: 0x10
	// Line 796, Address: 0x102c8d0, Func Offset: 0x20
	// Line 797, Address: 0x102c8d8, Func Offset: 0x28
	// Line 798, Address: 0x102c90c, Func Offset: 0x5c
	// Line 799, Address: 0x102c914, Func Offset: 0x64
	// Line 800, Address: 0x102c928, Func Offset: 0x78
	// Line 801, Address: 0x102c94c, Func Offset: 0x9c
	// Line 802, Address: 0x102c960, Func Offset: 0xb0
	// Line 803, Address: 0x102c968, Func Offset: 0xb8
	// Line 808, Address: 0x102c97c, Func Offset: 0xcc
	// Func End, Address: 0x102c994, Func Offset: 0xe4
}

// 
// Start address: 0x102c9a0
void scrh_move()
{
	short xwk;
	// Line 825, Address: 0x102c9a0, Func Offset: 0
	// Line 828, Address: 0x102c9a8, Func Offset: 0x8
	// Line 829, Address: 0x102c9f0, Func Offset: 0x50
	// Line 831, Address: 0x102ca00, Func Offset: 0x60
	// Line 832, Address: 0x102ca08, Func Offset: 0x68
	// Line 833, Address: 0x102ca10, Func Offset: 0x70
	// Line 835, Address: 0x102ca20, Func Offset: 0x80
	// Line 836, Address: 0x102ca34, Func Offset: 0x94
	// Line 840, Address: 0x102ca40, Func Offset: 0xa0
	// Line 841, Address: 0x102ca54, Func Offset: 0xb4
	// Line 842, Address: 0x102ca78, Func Offset: 0xd8
	// Line 844, Address: 0x102ca88, Func Offset: 0xe8
	// Line 846, Address: 0x102ca90, Func Offset: 0xf0
	// Line 847, Address: 0x102caa4, Func Offset: 0x104
	// Line 851, Address: 0x102cab0, Func Offset: 0x110
	// Line 852, Address: 0x102cac4, Func Offset: 0x124
	// Line 853, Address: 0x102cae8, Func Offset: 0x148
	// Line 858, Address: 0x102caf8, Func Offset: 0x158
	// Line 859, Address: 0x102cb28, Func Offset: 0x188
	// Line 860, Address: 0x102cb30, Func Offset: 0x190
	// Func End, Address: 0x102cb40, Func Offset: 0x1a0
}

// 
// Start address: 0x102cb40
void scroll_v()
{
	short ywk;
	// Line 875, Address: 0x102cb40, Func Offset: 0
	// Line 878, Address: 0x102cb4c, Func Offset: 0xc
	// Line 879, Address: 0x102cb80, Func Offset: 0x40
	// Line 880, Address: 0x102cb98, Func Offset: 0x58
	// Line 884, Address: 0x102cba4, Func Offset: 0x64
	// Line 885, Address: 0x102cbbc, Func Offset: 0x7c
	// Line 886, Address: 0x102cbc8, Func Offset: 0x88
	// Line 887, Address: 0x102cbec, Func Offset: 0xac
	// Line 888, Address: 0x102cc00, Func Offset: 0xc0
	// Line 889, Address: 0x102cc0c, Func Offset: 0xcc
	// Line 890, Address: 0x102cc14, Func Offset: 0xd4
	// Line 891, Address: 0x102cc3c, Func Offset: 0xfc
	// Line 892, Address: 0x102cc64, Func Offset: 0x124
	// Line 893, Address: 0x102cc70, Func Offset: 0x130
	// Line 895, Address: 0x102cc78, Func Offset: 0x138
	// Line 896, Address: 0x102cca0, Func Offset: 0x160
	// Line 897, Address: 0x102ccb0, Func Offset: 0x170
	// Line 898, Address: 0x102ccb8, Func Offset: 0x178
	// Line 903, Address: 0x102ccc0, Func Offset: 0x180
	// Line 904, Address: 0x102ccec, Func Offset: 0x1ac
	// Line 905, Address: 0x102ccf8, Func Offset: 0x1b8
	// Line 906, Address: 0x102cd00, Func Offset: 0x1c0
	// Line 907, Address: 0x102cd10, Func Offset: 0x1d0
	// Line 908, Address: 0x102cd18, Func Offset: 0x1d8
	// Line 913, Address: 0x102cd20, Func Offset: 0x1e0
	// Line 914, Address: 0x102cd28, Func Offset: 0x1e8
	// Func End, Address: 0x102cd3c, Func Offset: 0x1fc
}

// 
// Start address: 0x102cd40
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 928, Address: 0x102cd40, Func Offset: 0
	// Line 931, Address: 0x102cd50, Func Offset: 0x10
	// Line 932, Address: 0x102cd6c, Func Offset: 0x2c
	// Line 933, Address: 0x102cd84, Func Offset: 0x44
	// Line 934, Address: 0x102cda8, Func Offset: 0x68
	// Line 935, Address: 0x102cdb0, Func Offset: 0x70
	// Line 939, Address: 0x102cdc0, Func Offset: 0x80
	// Line 940, Address: 0x102cdd4, Func Offset: 0x94
	// Line 941, Address: 0x102cde0, Func Offset: 0xa0
	// Line 944, Address: 0x102cde8, Func Offset: 0xa8
	// Line 945, Address: 0x102ce00, Func Offset: 0xc0
	// Line 946, Address: 0x102ce0c, Func Offset: 0xcc
	// Line 947, Address: 0x102ce2c, Func Offset: 0xec
	// Line 948, Address: 0x102ce38, Func Offset: 0xf8
	// Line 949, Address: 0x102ce40, Func Offset: 0x100
	// Line 951, Address: 0x102ce4c, Func Offset: 0x10c
	// Line 953, Address: 0x102ce54, Func Offset: 0x114
	// Line 954, Address: 0x102ce6c, Func Offset: 0x12c
	// Line 955, Address: 0x102ce78, Func Offset: 0x138
	// Line 956, Address: 0x102ce98, Func Offset: 0x158
	// Line 957, Address: 0x102cea4, Func Offset: 0x164
	// Line 958, Address: 0x102ceac, Func Offset: 0x16c
	// Line 961, Address: 0x102ceb8, Func Offset: 0x178
	// Func End, Address: 0x102cecc, Func Offset: 0x18c
}

// 
// Start address: 0x102ced0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 975, Address: 0x102ced0, Func Offset: 0
	// Line 978, Address: 0x102cee0, Func Offset: 0x10
	// Line 980, Address: 0x102ceec, Func Offset: 0x1c
	// Line 981, Address: 0x102cf04, Func Offset: 0x34
	// Line 982, Address: 0x102cf10, Func Offset: 0x40
	// Line 983, Address: 0x102cf30, Func Offset: 0x60
	// Line 984, Address: 0x102cf3c, Func Offset: 0x6c
	// Line 985, Address: 0x102cf44, Func Offset: 0x74
	// Line 987, Address: 0x102cf50, Func Offset: 0x80
	// Func End, Address: 0x102cf64, Func Offset: 0x94
}

// 
// Start address: 0x102cf70
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1002, Address: 0x102cf70, Func Offset: 0
	// Line 1005, Address: 0x102cf7c, Func Offset: 0xc
	// Line 1006, Address: 0x102cfa8, Func Offset: 0x38
	// Line 1007, Address: 0x102cfbc, Func Offset: 0x4c
	// Line 1008, Address: 0x102cfc8, Func Offset: 0x58
	// Line 1009, Address: 0x102cfd0, Func Offset: 0x60
	// Line 1011, Address: 0x102cfdc, Func Offset: 0x6c
	// Func End, Address: 0x102cfec, Func Offset: 0x7c
}

// 
// Start address: 0x102cff0
void sv_move_sub2()
{
	// Line 1015, Address: 0x102cff0, Func Offset: 0
	// Line 1016, Address: 0x102cff8, Func Offset: 0x8
	// Line 1018, Address: 0x102d000, Func Offset: 0x10
	// Line 1019, Address: 0x102d00c, Func Offset: 0x1c
	// Func End, Address: 0x102d01c, Func Offset: 0x2c
}

// 
// Start address: 0x102d020
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1033, Address: 0x102d020, Func Offset: 0
	// Line 1036, Address: 0x102d02c, Func Offset: 0xc
	// Line 1037, Address: 0x102d050, Func Offset: 0x30
	// Line 1038, Address: 0x102d074, Func Offset: 0x54
	// Line 1039, Address: 0x102d080, Func Offset: 0x60
	// Func End, Address: 0x102d090, Func Offset: 0x70
}

// 
// Start address: 0x102d090
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1054, Address: 0x102d090, Func Offset: 0
	// Line 1055, Address: 0x102d09c, Func Offset: 0xc
	// Line 1056, Address: 0x102d0c4, Func Offset: 0x34
	// Line 1058, Address: 0x102d0dc, Func Offset: 0x4c
	// Line 1059, Address: 0x102d0e8, Func Offset: 0x58
	// Line 1060, Address: 0x102d0f0, Func Offset: 0x60
	// Line 1061, Address: 0x102d0fc, Func Offset: 0x6c
	// Line 1062, Address: 0x102d110, Func Offset: 0x80
	// Line 1063, Address: 0x102d124, Func Offset: 0x94
	// Line 1067, Address: 0x102d138, Func Offset: 0xa8
	// Line 1068, Address: 0x102d144, Func Offset: 0xb4
	// Func End, Address: 0x102d154, Func Offset: 0xc4
}

// 
// Start address: 0x102d160
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1082, Address: 0x102d160, Func Offset: 0
	// Line 1085, Address: 0x102d16c, Func Offset: 0xc
	// Line 1086, Address: 0x102d18c, Func Offset: 0x2c
	// Line 1087, Address: 0x102d1b0, Func Offset: 0x50
	// Line 1088, Address: 0x102d1bc, Func Offset: 0x5c
	// Func End, Address: 0x102d1cc, Func Offset: 0x6c
}

// 
// Start address: 0x102d1d0
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1103, Address: 0x102d1d0, Func Offset: 0
	// Line 1104, Address: 0x102d1dc, Func Offset: 0xc
	// Line 1105, Address: 0x102d204, Func Offset: 0x34
	// Line 1107, Address: 0x102d21c, Func Offset: 0x4c
	// Line 1108, Address: 0x102d228, Func Offset: 0x58
	// Line 1109, Address: 0x102d230, Func Offset: 0x60
	// Line 1110, Address: 0x102d23c, Func Offset: 0x6c
	// Line 1111, Address: 0x102d250, Func Offset: 0x80
	// Line 1112, Address: 0x102d264, Func Offset: 0x94
	// Line 1116, Address: 0x102d278, Func Offset: 0xa8
	// Line 1117, Address: 0x102d284, Func Offset: 0xb4
	// Func End, Address: 0x102d294, Func Offset: 0xc4
}

// 
// Start address: 0x102d2a0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1134, Address: 0x102d2a0, Func Offset: 0
	// Line 1138, Address: 0x102d2b0, Func Offset: 0x10
	// Line 1139, Address: 0x102d2c0, Func Offset: 0x20
	// Line 1140, Address: 0x102d2e4, Func Offset: 0x44
	// Line 1141, Address: 0x102d2f8, Func Offset: 0x58
	// Line 1142, Address: 0x102d310, Func Offset: 0x70
	// Line 1144, Address: 0x102d31c, Func Offset: 0x7c
	// Line 1146, Address: 0x102d328, Func Offset: 0x88
	// Line 1147, Address: 0x102d364, Func Offset: 0xc4
	// Line 1148, Address: 0x102d36c, Func Offset: 0xcc
	// Line 1149, Address: 0x102d380, Func Offset: 0xe0
	// Line 1150, Address: 0x102d3ac, Func Offset: 0x10c
	// Line 1151, Address: 0x102d3bc, Func Offset: 0x11c
	// Line 1152, Address: 0x102d3d0, Func Offset: 0x130
	// Line 1153, Address: 0x102d3d8, Func Offset: 0x138
	// Line 1158, Address: 0x102d3ec, Func Offset: 0x14c
	// Func End, Address: 0x102d400, Func Offset: 0x160
}

// 
// Start address: 0x102d400
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
	// Line 1176, Address: 0x102d400, Func Offset: 0
	// Line 1185, Address: 0x102d420, Func Offset: 0x20
	// Line 1186, Address: 0x102d424, Func Offset: 0x24
	// Line 1187, Address: 0x102d430, Func Offset: 0x30
	// Line 1188, Address: 0x102d43c, Func Offset: 0x3c
	// Line 1189, Address: 0x102d444, Func Offset: 0x44
	// Line 1190, Address: 0x102d44c, Func Offset: 0x4c
	// Line 1192, Address: 0x102d460, Func Offset: 0x60
	// Line 1193, Address: 0x102d464, Func Offset: 0x64
	// Line 1194, Address: 0x102d470, Func Offset: 0x70
	// Line 1195, Address: 0x102d47c, Func Offset: 0x7c
	// Line 1196, Address: 0x102d484, Func Offset: 0x84
	// Line 1198, Address: 0x102d48c, Func Offset: 0x8c
	// Line 1199, Address: 0x102d498, Func Offset: 0x98
	// Line 1200, Address: 0x102d4ac, Func Offset: 0xac
	// Line 1202, Address: 0x102d4b8, Func Offset: 0xb8
	// Line 1203, Address: 0x102d4c0, Func Offset: 0xc0
	// Line 1205, Address: 0x102d4c8, Func Offset: 0xc8
	// Line 1207, Address: 0x102d4e8, Func Offset: 0xe8
	// Line 1213, Address: 0x102d514, Func Offset: 0x114
	// Line 1214, Address: 0x102d528, Func Offset: 0x128
	// Line 1216, Address: 0x102d534, Func Offset: 0x134
	// Line 1217, Address: 0x102d53c, Func Offset: 0x13c
	// Line 1218, Address: 0x102d544, Func Offset: 0x144
	// Line 1220, Address: 0x102d564, Func Offset: 0x164
	// Line 1226, Address: 0x102d590, Func Offset: 0x190
	// Line 1227, Address: 0x102d5a4, Func Offset: 0x1a4
	// Line 1229, Address: 0x102d5b0, Func Offset: 0x1b0
	// Line 1230, Address: 0x102d5b8, Func Offset: 0x1b8
	// Line 1231, Address: 0x102d5c0, Func Offset: 0x1c0
	// Line 1233, Address: 0x102d5e0, Func Offset: 0x1e0
	// Line 1239, Address: 0x102d60c, Func Offset: 0x20c
	// Line 1240, Address: 0x102d620, Func Offset: 0x220
	// Line 1242, Address: 0x102d62c, Func Offset: 0x22c
	// Line 1243, Address: 0x102d634, Func Offset: 0x234
	// Line 1244, Address: 0x102d63c, Func Offset: 0x23c
	// Line 1246, Address: 0x102d65c, Func Offset: 0x25c
	// Line 1255, Address: 0x102d688, Func Offset: 0x288
	// Func End, Address: 0x102d6b0, Func Offset: 0x2b0
}

// 
// Start address: 0x102d6b0
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
	// Line 1272, Address: 0x102d6b0, Func Offset: 0
	// Line 1283, Address: 0x102d6dc, Func Offset: 0x2c
	// Line 1285, Address: 0x102d6e4, Func Offset: 0x34
	// Line 1286, Address: 0x102d6fc, Func Offset: 0x4c
	// Line 1287, Address: 0x102d710, Func Offset: 0x60
	// Line 1289, Address: 0x102d718, Func Offset: 0x68
	// Line 1291, Address: 0x102d72c, Func Offset: 0x7c
	// Line 1292, Address: 0x102d744, Func Offset: 0x94
	// Line 1293, Address: 0x102d758, Func Offset: 0xa8
	// Line 1294, Address: 0x102d760, Func Offset: 0xb0
	// Line 1296, Address: 0x102d768, Func Offset: 0xb8
	// Line 1297, Address: 0x102d77c, Func Offset: 0xcc
	// Line 1302, Address: 0x102d784, Func Offset: 0xd4
	// Line 1303, Address: 0x102d7d4, Func Offset: 0x124
	// Line 1304, Address: 0x102d7dc, Func Offset: 0x12c
	// Line 1310, Address: 0x102d7fc, Func Offset: 0x14c
	// Line 1311, Address: 0x102d81c, Func Offset: 0x16c
	// Line 1312, Address: 0x102d840, Func Offset: 0x190
	// Line 1313, Address: 0x102d84c, Func Offset: 0x19c
	// Line 1314, Address: 0x102d854, Func Offset: 0x1a4
	// Line 1316, Address: 0x102d874, Func Offset: 0x1c4
	// Line 1320, Address: 0x102d8a0, Func Offset: 0x1f0
	// Line 1323, Address: 0x102d8a8, Func Offset: 0x1f8
	// Line 1324, Address: 0x102d8ac, Func Offset: 0x1fc
	// Line 1328, Address: 0x102d8cc, Func Offset: 0x21c
	// Line 1335, Address: 0x102d8f8, Func Offset: 0x248
	// Line 1342, Address: 0x102d90c, Func Offset: 0x25c
	// Line 1343, Address: 0x102d914, Func Offset: 0x264
	// Line 1344, Address: 0x102d91c, Func Offset: 0x26c
	// Line 1345, Address: 0x102d934, Func Offset: 0x284
	// Line 1346, Address: 0x102d954, Func Offset: 0x2a4
	// Line 1350, Address: 0x102d95c, Func Offset: 0x2ac
	// Line 1352, Address: 0x102d98c, Func Offset: 0x2dc
	// Line 1353, Address: 0x102d998, Func Offset: 0x2e8
	// Line 1357, Address: 0x102d9a8, Func Offset: 0x2f8
	// Line 1358, Address: 0x102d9b4, Func Offset: 0x304
	// Line 1359, Address: 0x102d9d4, Func Offset: 0x324
	// Line 1360, Address: 0x102da0c, Func Offset: 0x35c
	// Line 1361, Address: 0x102da2c, Func Offset: 0x37c
	// Line 1363, Address: 0x102da50, Func Offset: 0x3a0
	// Line 1366, Address: 0x102da74, Func Offset: 0x3c4
	// Line 1368, Address: 0x102da94, Func Offset: 0x3e4
	// Line 1370, Address: 0x102daa8, Func Offset: 0x3f8
	// Line 1371, Address: 0x102dab4, Func Offset: 0x404
	// Line 1372, Address: 0x102dac4, Func Offset: 0x414
	// Line 1374, Address: 0x102dacc, Func Offset: 0x41c
	// Func End, Address: 0x102daf4, Func Offset: 0x444
}

// 
// Start address: 0x102db00
void scrollwrtc()
{
	// Line 1380, Address: 0x102db00, Func Offset: 0
	// Func End, Address: 0x102db08, Func Offset: 0x8
}

// 
// Start address: 0x102db10
void scrollwrtz()
{
	// Line 1385, Address: 0x102db10, Func Offset: 0
	// Func End, Address: 0x102db18, Func Offset: 0x8
}

// 
// Start address: 0x102db20
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1403, Address: 0x102db20, Func Offset: 0
	// Line 1416, Address: 0x102db48, Func Offset: 0x28
	// Line 1419, Address: 0x102db68, Func Offset: 0x48
	// Line 1420, Address: 0x102db7c, Func Offset: 0x5c
	// Line 1421, Address: 0x102db90, Func Offset: 0x70
	// Line 1422, Address: 0x102dba4, Func Offset: 0x84
	// Line 1424, Address: 0x102dbb8, Func Offset: 0x98
	// Line 1425, Address: 0x102dbc4, Func Offset: 0xa4
	// Line 1426, Address: 0x102dbd8, Func Offset: 0xb8
	// Func End, Address: 0x102dbe8, Func Offset: 0xc8
}

// 
// Start address: 0x102dbf0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1430, Address: 0x102dbf0, Func Offset: 0
	// Line 1434, Address: 0x102dc18, Func Offset: 0x28
	// Line 1437, Address: 0x102dc38, Func Offset: 0x48
	// Line 1438, Address: 0x102dc4c, Func Offset: 0x5c
	// Line 1439, Address: 0x102dc60, Func Offset: 0x70
	// Line 1440, Address: 0x102dc74, Func Offset: 0x84
	// Line 1442, Address: 0x102dc88, Func Offset: 0x98
	// Line 1443, Address: 0x102dc94, Func Offset: 0xa4
	// Line 1444, Address: 0x102dca8, Func Offset: 0xb8
	// Func End, Address: 0x102dcb8, Func Offset: 0xc8
}

// 
// Start address: 0x102dcc0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1464, Address: 0x102dcc0, Func Offset: 0
	// Line 1468, Address: 0x102dce8, Func Offset: 0x28
	// Line 1471, Address: 0x102dd08, Func Offset: 0x48
	// Line 1472, Address: 0x102dd1c, Func Offset: 0x5c
	// Line 1473, Address: 0x102dd2c, Func Offset: 0x6c
	// Line 1474, Address: 0x102dd40, Func Offset: 0x80
	// Line 1476, Address: 0x102dd50, Func Offset: 0x90
	// Line 1477, Address: 0x102dd5c, Func Offset: 0x9c
	// Line 1478, Address: 0x102dd70, Func Offset: 0xb0
	// Func End, Address: 0x102dd80, Func Offset: 0xc0
}

// 
// Start address: 0x102dd80
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
	// Line 1497, Address: 0x102dd80, Func Offset: 0
	// Line 1503, Address: 0x102ddb4, Func Offset: 0x34
	// Line 1505, Address: 0x102ddc4, Func Offset: 0x44
	// Line 1506, Address: 0x102ddc8, Func Offset: 0x48
	// Line 1507, Address: 0x102ddd0, Func Offset: 0x50
	// Line 1509, Address: 0x102dde0, Func Offset: 0x60
	// Line 1511, Address: 0x102dde4, Func Offset: 0x64
	// Line 1512, Address: 0x102ddec, Func Offset: 0x6c
	// Line 1515, Address: 0x102ddf4, Func Offset: 0x74
	// Line 1516, Address: 0x102ddfc, Func Offset: 0x7c
	// Line 1517, Address: 0x102de08, Func Offset: 0x88
	// Line 1519, Address: 0x102de14, Func Offset: 0x94
	// Line 1520, Address: 0x102de1c, Func Offset: 0x9c
	// Line 1521, Address: 0x102de24, Func Offset: 0xa4
	// Line 1522, Address: 0x102de2c, Func Offset: 0xac
	// Line 1524, Address: 0x102de38, Func Offset: 0xb8
	// Line 1525, Address: 0x102de40, Func Offset: 0xc0
	// Line 1526, Address: 0x102de48, Func Offset: 0xc8
	// Line 1527, Address: 0x102de50, Func Offset: 0xd0
	// Line 1529, Address: 0x102de5c, Func Offset: 0xdc
	// Line 1530, Address: 0x102de64, Func Offset: 0xe4
	// Line 1531, Address: 0x102de6c, Func Offset: 0xec
	// Line 1534, Address: 0x102de74, Func Offset: 0xf4
	// Line 1535, Address: 0x102de7c, Func Offset: 0xfc
	// Line 1538, Address: 0x102de84, Func Offset: 0x104
	// Line 1539, Address: 0x102dec8, Func Offset: 0x148
	// Line 1540, Address: 0x102df0c, Func Offset: 0x18c
	// Line 1541, Address: 0x102df50, Func Offset: 0x1d0
	// Line 1543, Address: 0x102df94, Func Offset: 0x214
	// Func End, Address: 0x102dfc4, Func Offset: 0x244
}

// 
// Start address: 0x102dfd0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1560, Address: 0x102dfd0, Func Offset: 0
	// Line 1561, Address: 0x102dff0, Func Offset: 0x20
	// Line 1562, Address: 0x102e010, Func Offset: 0x40
	// Func End, Address: 0x102e020, Func Offset: 0x50
}

// 
// Start address: 0x102e020
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1564, Address: 0x102e020, Func Offset: 0
	// Line 1565, Address: 0x102e040, Func Offset: 0x20
	// Line 1566, Address: 0x102e044, Func Offset: 0x24
	// Line 1567, Address: 0x102e064, Func Offset: 0x44
	// Func End, Address: 0x102e074, Func Offset: 0x54
}

// 
// Start address: 0x102e080
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1574, Address: 0x102e080, Func Offset: 0
	// Line 1580, Address: 0x102e0b0, Func Offset: 0x30
	// Line 1581, Address: 0x102e0c0, Func Offset: 0x40
	// Line 1587, Address: 0x102e0d0, Func Offset: 0x50
	// Line 1588, Address: 0x102e0ec, Func Offset: 0x6c
	// Line 1589, Address: 0x102e0f0, Func Offset: 0x70
	// Line 1590, Address: 0x102e10c, Func Offset: 0x8c
	// Line 1591, Address: 0x102e110, Func Offset: 0x90
	// Line 1592, Address: 0x102e130, Func Offset: 0xb0
	// Line 1593, Address: 0x102e138, Func Offset: 0xb8
	// Line 1594, Address: 0x102e158, Func Offset: 0xd8
	// Line 1595, Address: 0x102e160, Func Offset: 0xe0
	// Line 1596, Address: 0x102e1a8, Func Offset: 0x128
	// Line 1598, Address: 0x102e1b4, Func Offset: 0x134
	// Line 1600, Address: 0x102e1d0, Func Offset: 0x150
	// Line 1605, Address: 0x102e1d8, Func Offset: 0x158
	// Line 1606, Address: 0x102e1e4, Func Offset: 0x164
	// Line 1609, Address: 0x102e1f0, Func Offset: 0x170
	// Line 1610, Address: 0x102e1f8, Func Offset: 0x178
	// Line 1611, Address: 0x102e218, Func Offset: 0x198
	// Line 1612, Address: 0x102e234, Func Offset: 0x1b4
	// Line 1613, Address: 0x102e23c, Func Offset: 0x1bc
	// Line 1614, Address: 0x102e25c, Func Offset: 0x1dc
	// Line 1616, Address: 0x102e278, Func Offset: 0x1f8
	// Line 1617, Address: 0x102e280, Func Offset: 0x200
	// Line 1618, Address: 0x102e288, Func Offset: 0x208
	// Line 1619, Address: 0x102e294, Func Offset: 0x214
	// Line 1620, Address: 0x102e2ac, Func Offset: 0x22c
	// Line 1622, Address: 0x102e2bc, Func Offset: 0x23c
	// Line 1625, Address: 0x102e2c8, Func Offset: 0x248
	// Line 1626, Address: 0x102e2d0, Func Offset: 0x250
	// Line 1627, Address: 0x102e2d4, Func Offset: 0x254
	// Func End, Address: 0x102e2f4, Func Offset: 0x274
}

// 
// Start address: 0x102e300
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1647, Address: 0x102e300, Func Offset: 0
	// Line 1655, Address: 0x102e328, Func Offset: 0x28
	// Line 1656, Address: 0x102e38c, Func Offset: 0x8c
	// Line 1662, Address: 0x102e394, Func Offset: 0x94
	// Line 1663, Address: 0x102e39c, Func Offset: 0x9c
	// Line 1664, Address: 0x102e3bc, Func Offset: 0xbc
	// Line 1665, Address: 0x102e3d8, Func Offset: 0xd8
	// Line 1666, Address: 0x102e3e0, Func Offset: 0xe0
	// Line 1667, Address: 0x102e400, Func Offset: 0x100
	// Line 1670, Address: 0x102e41c, Func Offset: 0x11c
	// Line 1671, Address: 0x102e424, Func Offset: 0x124
	// Line 1672, Address: 0x102e42c, Func Offset: 0x12c
	// Line 1673, Address: 0x102e438, Func Offset: 0x138
	// Line 1674, Address: 0x102e450, Func Offset: 0x150
	// Line 1675, Address: 0x102e458, Func Offset: 0x158
	// Line 1680, Address: 0x102e468, Func Offset: 0x168
	// Line 1683, Address: 0x102e474, Func Offset: 0x174
	// Line 1684, Address: 0x102e47c, Func Offset: 0x17c
	// Line 1685, Address: 0x102e480, Func Offset: 0x180
	// Func End, Address: 0x102e49c, Func Offset: 0x19c
}

// 
// Start address: 0x102e4a0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1699, Address: 0x102e4a0, Func Offset: 0
	// Line 1706, Address: 0x102e4bc, Func Offset: 0x1c
	// Line 1707, Address: 0x102e4c0, Func Offset: 0x20
	// Line 1708, Address: 0x102e4c8, Func Offset: 0x28
	// Line 1709, Address: 0x102e4ec, Func Offset: 0x4c
	// Line 1710, Address: 0x102e4f8, Func Offset: 0x58
	// Line 1711, Address: 0x102e510, Func Offset: 0x70
	// Line 1712, Address: 0x102e524, Func Offset: 0x84
	// Line 1717, Address: 0x102e53c, Func Offset: 0x9c
	// Func End, Address: 0x102e554, Func Offset: 0xb4
}

// 
// Start address: 0x102e560
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1731, Address: 0x102e560, Func Offset: 0
	// Line 1732, Address: 0x102e56c, Func Offset: 0xc
	// Line 1733, Address: 0x102e598, Func Offset: 0x38
	// Line 1734, Address: 0x102e5e4, Func Offset: 0x84
	// Line 1735, Address: 0x102e610, Func Offset: 0xb0
	// Line 1737, Address: 0x102e65c, Func Offset: 0xfc
	// Line 1743, Address: 0x102e668, Func Offset: 0x108
	// Line 1744, Address: 0x102e66c, Func Offset: 0x10c
	// Func End, Address: 0x102e678, Func Offset: 0x118
}

// 
// Start address: 0x102e680
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1761, Address: 0x102e680, Func Offset: 0
	// Line 1762, Address: 0x102e69c, Func Offset: 0x1c
	// Line 1764, Address: 0x102e6b8, Func Offset: 0x38
	// Func End, Address: 0x102e6c8, Func Offset: 0x48
}

// 
// Start address: 0x102e6d0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1766, Address: 0x102e6d0, Func Offset: 0
	// Line 1767, Address: 0x102e6ec, Func Offset: 0x1c
	// Line 1768, Address: 0x102e6f0, Func Offset: 0x20
	// Line 1770, Address: 0x102e70c, Func Offset: 0x3c
	// Func End, Address: 0x102e71c, Func Offset: 0x4c
}

// 
// Start address: 0x102e720
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1772, Address: 0x102e720, Func Offset: 0
	// Line 1773, Address: 0x102e734, Func Offset: 0x14
	// Line 1775, Address: 0x102e750, Func Offset: 0x30
	// Func End, Address: 0x102e760, Func Offset: 0x40
}

// 
// Start address: 0x102e760
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1777, Address: 0x102e760, Func Offset: 0
	// Line 1778, Address: 0x102e77c, Func Offset: 0x1c
	// Line 1780, Address: 0x102e798, Func Offset: 0x38
	// Func End, Address: 0x102e7a8, Func Offset: 0x48
}

// 
// Start address: 0x102e7b0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1782, Address: 0x102e7b0, Func Offset: 0
	// Line 1783, Address: 0x102e7c8, Func Offset: 0x18
	// Line 1784, Address: 0x102e7d8, Func Offset: 0x28
	// Line 1785, Address: 0x102e7e8, Func Offset: 0x38
	// Line 1786, Address: 0x102e7f4, Func Offset: 0x44
	// Line 1788, Address: 0x102e800, Func Offset: 0x50
	// Line 1789, Address: 0x102e82c, Func Offset: 0x7c
	// Line 1792, Address: 0x102e858, Func Offset: 0xa8
	// Func End, Address: 0x102e864, Func Offset: 0xb4
}

// 
// Start address: 0x102e870
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1808, Address: 0x102e870, Func Offset: 0
	// Line 1815, Address: 0x102e888, Func Offset: 0x18
	// Line 1816, Address: 0x102e894, Func Offset: 0x24
	// Line 1817, Address: 0x102e8a0, Func Offset: 0x30
	// Line 1818, Address: 0x102e8a8, Func Offset: 0x38
	// Line 1819, Address: 0x102e8ac, Func Offset: 0x3c
	// Line 1823, Address: 0x102e8c4, Func Offset: 0x54
	// Line 1824, Address: 0x102e8cc, Func Offset: 0x5c
	// Line 1825, Address: 0x102e8d0, Func Offset: 0x60
	// Line 1827, Address: 0x102e8e0, Func Offset: 0x70
	// Func End, Address: 0x102e900, Func Offset: 0x90
}

// 
// Start address: 0x102e900
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1830, Address: 0x102e900, Func Offset: 0
	// Line 1831, Address: 0x102e918, Func Offset: 0x18
	// Line 1832, Address: 0x102e938, Func Offset: 0x38
	// Func End, Address: 0x102e948, Func Offset: 0x48
}

// 
// Start address: 0x102e950
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1837, Address: 0x102e950, Func Offset: 0
	// Line 1841, Address: 0x102e970, Func Offset: 0x20
	// Line 1844, Address: 0x102e98c, Func Offset: 0x3c
	// Line 1848, Address: 0x102e9b4, Func Offset: 0x64
	// Line 1849, Address: 0x102e9c0, Func Offset: 0x70
	// Line 1851, Address: 0x102e9e8, Func Offset: 0x98
	// Func End, Address: 0x102e9f8, Func Offset: 0xa8
}

// 
// Start address: 0x102ea00
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1857, Address: 0x102ea00, Func Offset: 0
	// Line 1860, Address: 0x102ea1c, Func Offset: 0x1c
	// Line 1861, Address: 0x102ea24, Func Offset: 0x24
	// Line 1864, Address: 0x102ea2c, Func Offset: 0x2c
	// Line 1866, Address: 0x102ea50, Func Offset: 0x50
	// Line 1867, Address: 0x102ea70, Func Offset: 0x70
	// Line 1868, Address: 0x102ea78, Func Offset: 0x78
	// Line 1869, Address: 0x102ea9c, Func Offset: 0x9c
	// Func End, Address: 0x102eab8, Func Offset: 0xb8
}

// 
// Start address: 0x102eac0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1895, Address: 0x102eac0, Func Offset: 0
	// Line 1900, Address: 0x102eae8, Func Offset: 0x28
	// Line 1901, Address: 0x102eaf8, Func Offset: 0x38
	// Line 1903, Address: 0x102eb14, Func Offset: 0x54
	// Line 1904, Address: 0x102eb38, Func Offset: 0x78
	// Line 1905, Address: 0x102eb60, Func Offset: 0xa0
	// Line 1906, Address: 0x102eb6c, Func Offset: 0xac
	// Line 1907, Address: 0x102eb74, Func Offset: 0xb4
	// Line 1910, Address: 0x102eb90, Func Offset: 0xd0
	// Line 1914, Address: 0x102ebb8, Func Offset: 0xf8
	// Line 1917, Address: 0x102ebc0, Func Offset: 0x100
	// Line 1918, Address: 0x102ebc4, Func Offset: 0x104
	// Line 1922, Address: 0x102ebe0, Func Offset: 0x120
	// Line 1929, Address: 0x102ec08, Func Offset: 0x148
	// Func End, Address: 0x102ec24, Func Offset: 0x164
}

// 
// Start address: 0x102ec30
void mapinit()
{
	// Line 1940, Address: 0x102ec30, Func Offset: 0
	// Line 1942, Address: 0x102ec38, Func Offset: 0x8
	// Line 1943, Address: 0x102ec4c, Func Offset: 0x1c
	// Line 1946, Address: 0x102ec60, Func Offset: 0x30
	// Line 1947, Address: 0x102ec80, Func Offset: 0x50
	// Func End, Address: 0x102ec90, Func Offset: 0x60
}

// 
// Start address: 0x102ec90
void mapset()
{
	// Line 1952, Address: 0x102ec90, Func Offset: 0
	// Func End, Address: 0x102ec98, Func Offset: 0x8
}

// 
// Start address: 0x102eca0
void divdevset()
{
	// Line 1956, Address: 0x102eca0, Func Offset: 0
	// Func End, Address: 0x102eca8, Func Offset: 0x8
}

// 
// Start address: 0x102ecb0
void enecginit()
{
	// Line 1960, Address: 0x102ecb0, Func Offset: 0
	// Func End, Address: 0x102ecb8, Func Offset: 0x8
}

