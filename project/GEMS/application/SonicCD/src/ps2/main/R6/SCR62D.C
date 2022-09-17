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

typedef int(*type_5)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned short type_2[4];
typedef unsigned short type_3[4][1024];
typedef unsigned char type_4[4];
typedef unsigned char type_6[2];
typedef unsigned char type_7[64];
typedef unsigned char type_8[64][8];
typedef unsigned char type_9[22];
typedef unsigned char type_10[49];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef short type_13[256];
typedef short type_14[6];
typedef _anon2* type_15[8];
typedef char type_16[9];
typedef _anon1 type_17[128];
typedef short type_18[2];
typedef short type_19[2][1];
typedef _anon2* type_20[8];

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
short playpositbl[2][1];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon2 scra_v_posit;
_anon2 scra_h_posit;
_anon1 actwk[128];
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
// Start address: 0x102ba20
void scr_set()
{
	short* pScrTbl;
	// Line 190, Address: 0x102ba20, Func Offset: 0
	// Line 193, Address: 0x102ba2c, Func Offset: 0xc
	// Line 194, Address: 0x102ba40, Func Offset: 0x20
	// Line 195, Address: 0x102ba54, Func Offset: 0x34
	// Line 197, Address: 0x102ba5c, Func Offset: 0x3c
	// Line 198, Address: 0x102ba64, Func Offset: 0x44
	// Line 199, Address: 0x102ba70, Func Offset: 0x50
	// Line 200, Address: 0x102ba74, Func Offset: 0x54
	// Line 201, Address: 0x102ba88, Func Offset: 0x68
	// Line 202, Address: 0x102ba8c, Func Offset: 0x6c
	// Line 203, Address: 0x102baa0, Func Offset: 0x80
	// Line 204, Address: 0x102baa4, Func Offset: 0x84
	// Line 205, Address: 0x102bab8, Func Offset: 0x98
	// Line 206, Address: 0x102babc, Func Offset: 0x9c
	// Line 207, Address: 0x102bad0, Func Offset: 0xb0
	// Line 208, Address: 0x102baf0, Func Offset: 0xd0
	// Line 209, Address: 0x102baf4, Func Offset: 0xd4
	// Line 210, Address: 0x102bb00, Func Offset: 0xe0
	// Line 212, Address: 0x102bb0c, Func Offset: 0xec
	// Line 213, Address: 0x102bb18, Func Offset: 0xf8
	// Line 215, Address: 0x102bb24, Func Offset: 0x104
	// Line 216, Address: 0x102bb2c, Func Offset: 0x10c
	// Func End, Address: 0x102bb40, Func Offset: 0x120
}

// 
// Start address: 0x102bb40
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 266, Address: 0x102bb40, Func Offset: 0
	// Line 269, Address: 0x102bb54, Func Offset: 0x14
	// Line 270, Address: 0x102bb64, Func Offset: 0x24
	// Line 271, Address: 0x102bb6c, Func Offset: 0x2c
	// Line 273, Address: 0x102bb7c, Func Offset: 0x3c
	// Line 274, Address: 0x102bb94, Func Offset: 0x54
	// Line 275, Address: 0x102bba4, Func Offset: 0x64
	// Line 276, Address: 0x102bbac, Func Offset: 0x6c
	// Line 278, Address: 0x102bbb0, Func Offset: 0x70
	// Line 292, Address: 0x102bbb8, Func Offset: 0x78
	// Line 293, Address: 0x102bbc0, Func Offset: 0x80
	// Line 294, Address: 0x102bbd4, Func Offset: 0x94
	// Line 298, Address: 0x102bbe8, Func Offset: 0xa8
	// Line 299, Address: 0x102bbfc, Func Offset: 0xbc
	// Line 300, Address: 0x102bc08, Func Offset: 0xc8
	// Line 301, Address: 0x102bc10, Func Offset: 0xd0
	// Line 305, Address: 0x102bc14, Func Offset: 0xd4
	// Line 306, Address: 0x102bc38, Func Offset: 0xf8
	// Line 310, Address: 0x102bc48, Func Offset: 0x108
	// Line 312, Address: 0x102bc50, Func Offset: 0x110
	// Line 313, Address: 0x102bc64, Func Offset: 0x124
	// Line 314, Address: 0x102bc70, Func Offset: 0x130
	// Line 315, Address: 0x102bc78, Func Offset: 0x138
	// Line 319, Address: 0x102bc7c, Func Offset: 0x13c
	// Line 320, Address: 0x102bca0, Func Offset: 0x160
	// Line 324, Address: 0x102bcb0, Func Offset: 0x170
	// Line 326, Address: 0x102bcb8, Func Offset: 0x178
	// Line 329, Address: 0x102bcc8, Func Offset: 0x188
	// Line 330, Address: 0x102bcd8, Func Offset: 0x198
	// Line 331, Address: 0x102bce8, Func Offset: 0x1a8
	// Line 332, Address: 0x102bcf8, Func Offset: 0x1b8
	// Line 333, Address: 0x102bd08, Func Offset: 0x1c8
	// Func End, Address: 0x102bd24, Func Offset: 0x1e4
}

// 
// Start address: 0x102bd30
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 354, Address: 0x102bd30, Func Offset: 0
	// Line 357, Address: 0x102bd3c, Func Offset: 0xc
	// Line 358, Address: 0x102bd44, Func Offset: 0x14
	// Line 360, Address: 0x102bd48, Func Offset: 0x18
	// Line 361, Address: 0x102bd54, Func Offset: 0x24
	// Line 362, Address: 0x102bd60, Func Offset: 0x30
	// Line 363, Address: 0x102bd6c, Func Offset: 0x3c
	// Line 365, Address: 0x102bd78, Func Offset: 0x48
	// Line 366, Address: 0x102bd94, Func Offset: 0x64
	// Line 368, Address: 0x102bda0, Func Offset: 0x70
	// Line 369, Address: 0x102bdbc, Func Offset: 0x8c
	// Line 371, Address: 0x102bdc8, Func Offset: 0x98
	// Line 372, Address: 0x102bde4, Func Offset: 0xb4
	// Line 373, Address: 0x102be08, Func Offset: 0xd8
	// Func End, Address: 0x102be14, Func Offset: 0xe4
}

// 
// Start address: 0x102be20
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
	// Line 389, Address: 0x102be20, Func Offset: 0
	// Line 401, Address: 0x102be3c, Func Offset: 0x1c
	// Line 406, Address: 0x102be4c, Func Offset: 0x2c
	// Line 408, Address: 0x102be78, Func Offset: 0x58
	// Line 410, Address: 0x102be80, Func Offset: 0x60
	// Line 411, Address: 0x102be88, Func Offset: 0x68
	// Line 413, Address: 0x102be90, Func Offset: 0x70
	// Line 414, Address: 0x102bea0, Func Offset: 0x80
	// Line 417, Address: 0x102beb0, Func Offset: 0x90
	// Line 418, Address: 0x102bec4, Func Offset: 0xa4
	// Line 420, Address: 0x102bed4, Func Offset: 0xb4
	// Line 421, Address: 0x102bee8, Func Offset: 0xc8
	// Line 423, Address: 0x102bef8, Func Offset: 0xd8
	// Line 424, Address: 0x102bf14, Func Offset: 0xf4
	// Line 426, Address: 0x102bf24, Func Offset: 0x104
	// Line 429, Address: 0x102bf38, Func Offset: 0x118
	// Line 431, Address: 0x102bf48, Func Offset: 0x128
	// Line 433, Address: 0x102bf70, Func Offset: 0x150
	// Line 434, Address: 0x102bfa8, Func Offset: 0x188
	// Line 436, Address: 0x102bfbc, Func Offset: 0x19c
	// Line 438, Address: 0x102bfc8, Func Offset: 0x1a8
	// Line 440, Address: 0x102bfd4, Func Offset: 0x1b4
	// Line 441, Address: 0x102bff4, Func Offset: 0x1d4
	// Line 443, Address: 0x102c000, Func Offset: 0x1e0
	// Line 444, Address: 0x102c014, Func Offset: 0x1f4
	// Line 446, Address: 0x102c024, Func Offset: 0x204
	// Line 447, Address: 0x102c044, Func Offset: 0x224
	// Line 449, Address: 0x102c050, Func Offset: 0x230
	// Line 450, Address: 0x102c064, Func Offset: 0x244
	// Line 452, Address: 0x102c074, Func Offset: 0x254
	// Line 453, Address: 0x102c080, Func Offset: 0x260
	// Line 454, Address: 0x102c0b0, Func Offset: 0x290
	// Line 455, Address: 0x102c0e0, Func Offset: 0x2c0
	// Line 456, Address: 0x102c0fc, Func Offset: 0x2dc
	// Func End, Address: 0x102c120, Func Offset: 0x300
}

// 
// Start address: 0x102c120
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
	// Line 470, Address: 0x102c120, Func Offset: 0
	// Line 471, Address: 0x102c144, Func Offset: 0x24
	// Line 479, Address: 0x102c170, Func Offset: 0x50
	// Line 480, Address: 0x102c194, Func Offset: 0x74
	// Line 481, Address: 0x102c198, Func Offset: 0x78
	// Line 483, Address: 0x102c1a8, Func Offset: 0x88
	// Line 485, Address: 0x102c1bc, Func Offset: 0x9c
	// Line 487, Address: 0x102c1c8, Func Offset: 0xa8
	// Line 488, Address: 0x102c1dc, Func Offset: 0xbc
	// Line 489, Address: 0x102c230, Func Offset: 0x110
	// Line 491, Address: 0x102c248, Func Offset: 0x128
	// Line 492, Address: 0x102c25c, Func Offset: 0x13c
	// Line 493, Address: 0x102c268, Func Offset: 0x148
	// Line 495, Address: 0x102c274, Func Offset: 0x154
	// Line 496, Address: 0x102c280, Func Offset: 0x160
	// Line 498, Address: 0x102c28c, Func Offset: 0x16c
	// Line 499, Address: 0x102c2a0, Func Offset: 0x180
	// Func End, Address: 0x102c2c8, Func Offset: 0x1a8
}

// 
// Start address: 0x102c2d0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 520, Address: 0x102c2d0, Func Offset: 0
	// Line 524, Address: 0x102c2ec, Func Offset: 0x1c
	// Line 525, Address: 0x102c2f0, Func Offset: 0x20
	// Line 527, Address: 0x102c310, Func Offset: 0x40
	// Line 528, Address: 0x102c32c, Func Offset: 0x5c
	// Line 529, Address: 0x102c338, Func Offset: 0x68
	// Line 531, Address: 0x102c344, Func Offset: 0x74
	// Line 532, Address: 0x102c34c, Func Offset: 0x7c
	// Line 533, Address: 0x102c35c, Func Offset: 0x8c
	// Line 534, Address: 0x102c380, Func Offset: 0xb0
	// Line 535, Address: 0x102c3a0, Func Offset: 0xd0
	// Func End, Address: 0x102c3b4, Func Offset: 0xe4
}

// 
// Start address: 0x102c3c0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 641, Address: 0x102c3c0, Func Offset: 0
	// Line 644, Address: 0x102c3d0, Func Offset: 0x10
	// Line 645, Address: 0x102c3e0, Func Offset: 0x20
	// Line 646, Address: 0x102c3ec, Func Offset: 0x2c
	// Line 648, Address: 0x102c424, Func Offset: 0x64
	// Line 649, Address: 0x102c42c, Func Offset: 0x6c
	// Line 650, Address: 0x102c440, Func Offset: 0x80
	// Line 651, Address: 0x102c460, Func Offset: 0xa0
	// Line 652, Address: 0x102c474, Func Offset: 0xb4
	// Line 654, Address: 0x102c47c, Func Offset: 0xbc
	// Line 659, Address: 0x102c490, Func Offset: 0xd0
	// Func End, Address: 0x102c4a4, Func Offset: 0xe4
}

// 
// Start address: 0x102c4b0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 677, Address: 0x102c4b0, Func Offset: 0
	// Line 681, Address: 0x102c4c4, Func Offset: 0x14
	// Line 682, Address: 0x102c4cc, Func Offset: 0x1c
	// Line 683, Address: 0x102c4d4, Func Offset: 0x24
	// Line 684, Address: 0x102c4dc, Func Offset: 0x2c
	// Line 685, Address: 0x102c4e0, Func Offset: 0x30
	// Line 686, Address: 0x102c504, Func Offset: 0x54
	// Line 687, Address: 0x102c510, Func Offset: 0x60
	// Line 689, Address: 0x102c52c, Func Offset: 0x7c
	// Line 690, Address: 0x102c538, Func Offset: 0x88
	// Line 691, Address: 0x102c54c, Func Offset: 0x9c
	// Line 692, Address: 0x102c558, Func Offset: 0xa8
	// Line 693, Address: 0x102c57c, Func Offset: 0xcc
	// Line 695, Address: 0x102c584, Func Offset: 0xd4
	// Line 700, Address: 0x102c5ac, Func Offset: 0xfc
	// Func End, Address: 0x102c5c0, Func Offset: 0x110
}

// 
// Start address: 0x102c5c0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 718, Address: 0x102c5c0, Func Offset: 0
	// Line 722, Address: 0x102c5d4, Func Offset: 0x14
	// Line 723, Address: 0x102c5dc, Func Offset: 0x1c
	// Line 724, Address: 0x102c5e4, Func Offset: 0x24
	// Line 725, Address: 0x102c5ec, Func Offset: 0x2c
	// Line 726, Address: 0x102c5f0, Func Offset: 0x30
	// Line 727, Address: 0x102c614, Func Offset: 0x54
	// Line 728, Address: 0x102c620, Func Offset: 0x60
	// Line 730, Address: 0x102c63c, Func Offset: 0x7c
	// Line 731, Address: 0x102c648, Func Offset: 0x88
	// Line 732, Address: 0x102c65c, Func Offset: 0x9c
	// Line 733, Address: 0x102c668, Func Offset: 0xa8
	// Line 734, Address: 0x102c68c, Func Offset: 0xcc
	// Line 736, Address: 0x102c694, Func Offset: 0xd4
	// Line 741, Address: 0x102c6bc, Func Offset: 0xfc
	// Func End, Address: 0x102c6d0, Func Offset: 0x110
}

// 
// Start address: 0x102c6d0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 759, Address: 0x102c6d0, Func Offset: 0
	// Line 763, Address: 0x102c6e4, Func Offset: 0x14
	// Line 764, Address: 0x102c6ec, Func Offset: 0x1c
	// Line 765, Address: 0x102c6f4, Func Offset: 0x24
	// Line 766, Address: 0x102c6fc, Func Offset: 0x2c
	// Line 767, Address: 0x102c700, Func Offset: 0x30
	// Line 768, Address: 0x102c724, Func Offset: 0x54
	// Line 769, Address: 0x102c730, Func Offset: 0x60
	// Line 771, Address: 0x102c74c, Func Offset: 0x7c
	// Line 772, Address: 0x102c758, Func Offset: 0x88
	// Line 773, Address: 0x102c76c, Func Offset: 0x9c
	// Line 774, Address: 0x102c778, Func Offset: 0xa8
	// Line 775, Address: 0x102c79c, Func Offset: 0xcc
	// Line 777, Address: 0x102c7a4, Func Offset: 0xd4
	// Line 782, Address: 0x102c7cc, Func Offset: 0xfc
	// Func End, Address: 0x102c7e0, Func Offset: 0x110
}

// 
// Start address: 0x102c7e0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 797, Address: 0x102c7e0, Func Offset: 0
	// Line 801, Address: 0x102c7f0, Func Offset: 0x10
	// Line 803, Address: 0x102c800, Func Offset: 0x20
	// Line 804, Address: 0x102c808, Func Offset: 0x28
	// Line 805, Address: 0x102c83c, Func Offset: 0x5c
	// Line 806, Address: 0x102c844, Func Offset: 0x64
	// Line 807, Address: 0x102c858, Func Offset: 0x78
	// Line 808, Address: 0x102c87c, Func Offset: 0x9c
	// Line 809, Address: 0x102c890, Func Offset: 0xb0
	// Line 810, Address: 0x102c898, Func Offset: 0xb8
	// Line 815, Address: 0x102c8ac, Func Offset: 0xcc
	// Func End, Address: 0x102c8c4, Func Offset: 0xe4
}

// 
// Start address: 0x102c8d0
void scrh_move()
{
	short xwk;
	// Line 832, Address: 0x102c8d0, Func Offset: 0
	// Line 835, Address: 0x102c8d8, Func Offset: 0x8
	// Line 836, Address: 0x102c920, Func Offset: 0x50
	// Line 838, Address: 0x102c930, Func Offset: 0x60
	// Line 839, Address: 0x102c938, Func Offset: 0x68
	// Line 840, Address: 0x102c940, Func Offset: 0x70
	// Line 842, Address: 0x102c950, Func Offset: 0x80
	// Line 843, Address: 0x102c964, Func Offset: 0x94
	// Line 847, Address: 0x102c970, Func Offset: 0xa0
	// Line 848, Address: 0x102c984, Func Offset: 0xb4
	// Line 849, Address: 0x102c9a8, Func Offset: 0xd8
	// Line 851, Address: 0x102c9b8, Func Offset: 0xe8
	// Line 853, Address: 0x102c9c0, Func Offset: 0xf0
	// Line 854, Address: 0x102c9d4, Func Offset: 0x104
	// Line 858, Address: 0x102c9e0, Func Offset: 0x110
	// Line 859, Address: 0x102c9f4, Func Offset: 0x124
	// Line 860, Address: 0x102ca18, Func Offset: 0x148
	// Line 865, Address: 0x102ca28, Func Offset: 0x158
	// Line 866, Address: 0x102ca58, Func Offset: 0x188
	// Line 867, Address: 0x102ca60, Func Offset: 0x190
	// Func End, Address: 0x102ca70, Func Offset: 0x1a0
}

// 
// Start address: 0x102ca70
void scroll_v()
{
	short ywk;
	// Line 882, Address: 0x102ca70, Func Offset: 0
	// Line 885, Address: 0x102ca7c, Func Offset: 0xc
	// Line 886, Address: 0x102cab0, Func Offset: 0x40
	// Line 887, Address: 0x102cac8, Func Offset: 0x58
	// Line 891, Address: 0x102cad4, Func Offset: 0x64
	// Line 892, Address: 0x102caec, Func Offset: 0x7c
	// Line 893, Address: 0x102caf8, Func Offset: 0x88
	// Line 894, Address: 0x102cb1c, Func Offset: 0xac
	// Line 895, Address: 0x102cb30, Func Offset: 0xc0
	// Line 896, Address: 0x102cb3c, Func Offset: 0xcc
	// Line 897, Address: 0x102cb44, Func Offset: 0xd4
	// Line 898, Address: 0x102cb6c, Func Offset: 0xfc
	// Line 899, Address: 0x102cb94, Func Offset: 0x124
	// Line 900, Address: 0x102cba0, Func Offset: 0x130
	// Line 902, Address: 0x102cba8, Func Offset: 0x138
	// Line 903, Address: 0x102cbd0, Func Offset: 0x160
	// Line 904, Address: 0x102cbe0, Func Offset: 0x170
	// Line 905, Address: 0x102cbe8, Func Offset: 0x178
	// Line 910, Address: 0x102cbf0, Func Offset: 0x180
	// Line 911, Address: 0x102cc1c, Func Offset: 0x1ac
	// Line 912, Address: 0x102cc28, Func Offset: 0x1b8
	// Line 913, Address: 0x102cc30, Func Offset: 0x1c0
	// Line 914, Address: 0x102cc40, Func Offset: 0x1d0
	// Line 915, Address: 0x102cc48, Func Offset: 0x1d8
	// Line 920, Address: 0x102cc50, Func Offset: 0x1e0
	// Line 921, Address: 0x102cc58, Func Offset: 0x1e8
	// Func End, Address: 0x102cc6c, Func Offset: 0x1fc
}

// 
// Start address: 0x102cc70
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 935, Address: 0x102cc70, Func Offset: 0
	// Line 938, Address: 0x102cc80, Func Offset: 0x10
	// Line 939, Address: 0x102cc9c, Func Offset: 0x2c
	// Line 940, Address: 0x102ccb4, Func Offset: 0x44
	// Line 941, Address: 0x102ccd8, Func Offset: 0x68
	// Line 942, Address: 0x102cce0, Func Offset: 0x70
	// Line 946, Address: 0x102ccf0, Func Offset: 0x80
	// Line 947, Address: 0x102cd04, Func Offset: 0x94
	// Line 948, Address: 0x102cd10, Func Offset: 0xa0
	// Line 951, Address: 0x102cd18, Func Offset: 0xa8
	// Line 952, Address: 0x102cd30, Func Offset: 0xc0
	// Line 953, Address: 0x102cd3c, Func Offset: 0xcc
	// Line 954, Address: 0x102cd5c, Func Offset: 0xec
	// Line 955, Address: 0x102cd68, Func Offset: 0xf8
	// Line 956, Address: 0x102cd70, Func Offset: 0x100
	// Line 958, Address: 0x102cd7c, Func Offset: 0x10c
	// Line 960, Address: 0x102cd84, Func Offset: 0x114
	// Line 961, Address: 0x102cd9c, Func Offset: 0x12c
	// Line 962, Address: 0x102cda8, Func Offset: 0x138
	// Line 963, Address: 0x102cdc8, Func Offset: 0x158
	// Line 964, Address: 0x102cdd4, Func Offset: 0x164
	// Line 965, Address: 0x102cddc, Func Offset: 0x16c
	// Line 968, Address: 0x102cde8, Func Offset: 0x178
	// Func End, Address: 0x102cdfc, Func Offset: 0x18c
}

// 
// Start address: 0x102ce00
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 982, Address: 0x102ce00, Func Offset: 0
	// Line 985, Address: 0x102ce10, Func Offset: 0x10
	// Line 987, Address: 0x102ce1c, Func Offset: 0x1c
	// Line 988, Address: 0x102ce34, Func Offset: 0x34
	// Line 989, Address: 0x102ce40, Func Offset: 0x40
	// Line 990, Address: 0x102ce60, Func Offset: 0x60
	// Line 991, Address: 0x102ce6c, Func Offset: 0x6c
	// Line 992, Address: 0x102ce74, Func Offset: 0x74
	// Line 994, Address: 0x102ce80, Func Offset: 0x80
	// Func End, Address: 0x102ce94, Func Offset: 0x94
}

// 
// Start address: 0x102cea0
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1009, Address: 0x102cea0, Func Offset: 0
	// Line 1012, Address: 0x102ceac, Func Offset: 0xc
	// Line 1013, Address: 0x102ced8, Func Offset: 0x38
	// Line 1014, Address: 0x102ceec, Func Offset: 0x4c
	// Line 1015, Address: 0x102cef8, Func Offset: 0x58
	// Line 1016, Address: 0x102cf00, Func Offset: 0x60
	// Line 1018, Address: 0x102cf0c, Func Offset: 0x6c
	// Func End, Address: 0x102cf1c, Func Offset: 0x7c
}

// 
// Start address: 0x102cf20
void sv_move_sub2()
{
	// Line 1022, Address: 0x102cf20, Func Offset: 0
	// Line 1023, Address: 0x102cf28, Func Offset: 0x8
	// Line 1025, Address: 0x102cf30, Func Offset: 0x10
	// Line 1026, Address: 0x102cf3c, Func Offset: 0x1c
	// Func End, Address: 0x102cf4c, Func Offset: 0x2c
}

// 
// Start address: 0x102cf50
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1040, Address: 0x102cf50, Func Offset: 0
	// Line 1043, Address: 0x102cf5c, Func Offset: 0xc
	// Line 1044, Address: 0x102cf80, Func Offset: 0x30
	// Line 1045, Address: 0x102cfa4, Func Offset: 0x54
	// Line 1046, Address: 0x102cfb0, Func Offset: 0x60
	// Func End, Address: 0x102cfc0, Func Offset: 0x70
}

// 
// Start address: 0x102cfc0
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1061, Address: 0x102cfc0, Func Offset: 0
	// Line 1062, Address: 0x102cfcc, Func Offset: 0xc
	// Line 1063, Address: 0x102cff4, Func Offset: 0x34
	// Line 1065, Address: 0x102d00c, Func Offset: 0x4c
	// Line 1066, Address: 0x102d018, Func Offset: 0x58
	// Line 1067, Address: 0x102d020, Func Offset: 0x60
	// Line 1068, Address: 0x102d02c, Func Offset: 0x6c
	// Line 1069, Address: 0x102d040, Func Offset: 0x80
	// Line 1070, Address: 0x102d054, Func Offset: 0x94
	// Line 1074, Address: 0x102d068, Func Offset: 0xa8
	// Line 1075, Address: 0x102d074, Func Offset: 0xb4
	// Func End, Address: 0x102d084, Func Offset: 0xc4
}

// 
// Start address: 0x102d090
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1089, Address: 0x102d090, Func Offset: 0
	// Line 1092, Address: 0x102d09c, Func Offset: 0xc
	// Line 1093, Address: 0x102d0bc, Func Offset: 0x2c
	// Line 1094, Address: 0x102d0e0, Func Offset: 0x50
	// Line 1095, Address: 0x102d0ec, Func Offset: 0x5c
	// Func End, Address: 0x102d0fc, Func Offset: 0x6c
}

// 
// Start address: 0x102d100
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1110, Address: 0x102d100, Func Offset: 0
	// Line 1111, Address: 0x102d10c, Func Offset: 0xc
	// Line 1112, Address: 0x102d134, Func Offset: 0x34
	// Line 1114, Address: 0x102d14c, Func Offset: 0x4c
	// Line 1115, Address: 0x102d158, Func Offset: 0x58
	// Line 1116, Address: 0x102d160, Func Offset: 0x60
	// Line 1117, Address: 0x102d16c, Func Offset: 0x6c
	// Line 1118, Address: 0x102d180, Func Offset: 0x80
	// Line 1119, Address: 0x102d194, Func Offset: 0x94
	// Line 1123, Address: 0x102d1a8, Func Offset: 0xa8
	// Line 1124, Address: 0x102d1b4, Func Offset: 0xb4
	// Func End, Address: 0x102d1c4, Func Offset: 0xc4
}

// 
// Start address: 0x102d1d0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1141, Address: 0x102d1d0, Func Offset: 0
	// Line 1145, Address: 0x102d1e0, Func Offset: 0x10
	// Line 1146, Address: 0x102d1f0, Func Offset: 0x20
	// Line 1147, Address: 0x102d214, Func Offset: 0x44
	// Line 1148, Address: 0x102d228, Func Offset: 0x58
	// Line 1149, Address: 0x102d240, Func Offset: 0x70
	// Line 1151, Address: 0x102d24c, Func Offset: 0x7c
	// Line 1153, Address: 0x102d258, Func Offset: 0x88
	// Line 1154, Address: 0x102d294, Func Offset: 0xc4
	// Line 1155, Address: 0x102d29c, Func Offset: 0xcc
	// Line 1156, Address: 0x102d2b0, Func Offset: 0xe0
	// Line 1157, Address: 0x102d2dc, Func Offset: 0x10c
	// Line 1158, Address: 0x102d2ec, Func Offset: 0x11c
	// Line 1159, Address: 0x102d300, Func Offset: 0x130
	// Line 1160, Address: 0x102d308, Func Offset: 0x138
	// Line 1165, Address: 0x102d31c, Func Offset: 0x14c
	// Func End, Address: 0x102d330, Func Offset: 0x160
}

// 
// Start address: 0x102d330
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
	// Line 1183, Address: 0x102d330, Func Offset: 0
	// Line 1192, Address: 0x102d350, Func Offset: 0x20
	// Line 1193, Address: 0x102d354, Func Offset: 0x24
	// Line 1194, Address: 0x102d360, Func Offset: 0x30
	// Line 1195, Address: 0x102d36c, Func Offset: 0x3c
	// Line 1196, Address: 0x102d374, Func Offset: 0x44
	// Line 1197, Address: 0x102d37c, Func Offset: 0x4c
	// Line 1199, Address: 0x102d390, Func Offset: 0x60
	// Line 1200, Address: 0x102d394, Func Offset: 0x64
	// Line 1201, Address: 0x102d3a0, Func Offset: 0x70
	// Line 1202, Address: 0x102d3ac, Func Offset: 0x7c
	// Line 1203, Address: 0x102d3b4, Func Offset: 0x84
	// Line 1205, Address: 0x102d3bc, Func Offset: 0x8c
	// Line 1206, Address: 0x102d3c8, Func Offset: 0x98
	// Line 1207, Address: 0x102d3dc, Func Offset: 0xac
	// Line 1209, Address: 0x102d3e8, Func Offset: 0xb8
	// Line 1210, Address: 0x102d3f0, Func Offset: 0xc0
	// Line 1212, Address: 0x102d3f8, Func Offset: 0xc8
	// Line 1214, Address: 0x102d418, Func Offset: 0xe8
	// Line 1220, Address: 0x102d444, Func Offset: 0x114
	// Line 1221, Address: 0x102d458, Func Offset: 0x128
	// Line 1223, Address: 0x102d464, Func Offset: 0x134
	// Line 1224, Address: 0x102d46c, Func Offset: 0x13c
	// Line 1225, Address: 0x102d474, Func Offset: 0x144
	// Line 1227, Address: 0x102d494, Func Offset: 0x164
	// Line 1233, Address: 0x102d4c0, Func Offset: 0x190
	// Line 1234, Address: 0x102d4d4, Func Offset: 0x1a4
	// Line 1236, Address: 0x102d4e0, Func Offset: 0x1b0
	// Line 1237, Address: 0x102d4e8, Func Offset: 0x1b8
	// Line 1238, Address: 0x102d4f0, Func Offset: 0x1c0
	// Line 1240, Address: 0x102d510, Func Offset: 0x1e0
	// Line 1246, Address: 0x102d53c, Func Offset: 0x20c
	// Line 1247, Address: 0x102d550, Func Offset: 0x220
	// Line 1249, Address: 0x102d55c, Func Offset: 0x22c
	// Line 1250, Address: 0x102d564, Func Offset: 0x234
	// Line 1251, Address: 0x102d56c, Func Offset: 0x23c
	// Line 1253, Address: 0x102d58c, Func Offset: 0x25c
	// Line 1262, Address: 0x102d5b8, Func Offset: 0x288
	// Func End, Address: 0x102d5e0, Func Offset: 0x2b0
}

// 
// Start address: 0x102d5e0
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
	// Line 1279, Address: 0x102d5e0, Func Offset: 0
	// Line 1290, Address: 0x102d60c, Func Offset: 0x2c
	// Line 1292, Address: 0x102d614, Func Offset: 0x34
	// Line 1293, Address: 0x102d62c, Func Offset: 0x4c
	// Line 1294, Address: 0x102d640, Func Offset: 0x60
	// Line 1296, Address: 0x102d648, Func Offset: 0x68
	// Line 1298, Address: 0x102d65c, Func Offset: 0x7c
	// Line 1299, Address: 0x102d674, Func Offset: 0x94
	// Line 1300, Address: 0x102d688, Func Offset: 0xa8
	// Line 1301, Address: 0x102d690, Func Offset: 0xb0
	// Line 1303, Address: 0x102d698, Func Offset: 0xb8
	// Line 1304, Address: 0x102d6ac, Func Offset: 0xcc
	// Line 1309, Address: 0x102d6b4, Func Offset: 0xd4
	// Line 1310, Address: 0x102d704, Func Offset: 0x124
	// Line 1311, Address: 0x102d70c, Func Offset: 0x12c
	// Line 1317, Address: 0x102d72c, Func Offset: 0x14c
	// Line 1318, Address: 0x102d74c, Func Offset: 0x16c
	// Line 1319, Address: 0x102d770, Func Offset: 0x190
	// Line 1320, Address: 0x102d77c, Func Offset: 0x19c
	// Line 1321, Address: 0x102d784, Func Offset: 0x1a4
	// Line 1323, Address: 0x102d7a4, Func Offset: 0x1c4
	// Line 1327, Address: 0x102d7d0, Func Offset: 0x1f0
	// Line 1330, Address: 0x102d7d8, Func Offset: 0x1f8
	// Line 1331, Address: 0x102d7dc, Func Offset: 0x1fc
	// Line 1335, Address: 0x102d7fc, Func Offset: 0x21c
	// Line 1342, Address: 0x102d828, Func Offset: 0x248
	// Line 1349, Address: 0x102d83c, Func Offset: 0x25c
	// Line 1350, Address: 0x102d844, Func Offset: 0x264
	// Line 1351, Address: 0x102d84c, Func Offset: 0x26c
	// Line 1352, Address: 0x102d864, Func Offset: 0x284
	// Line 1353, Address: 0x102d884, Func Offset: 0x2a4
	// Line 1357, Address: 0x102d88c, Func Offset: 0x2ac
	// Line 1359, Address: 0x102d8bc, Func Offset: 0x2dc
	// Line 1360, Address: 0x102d8c8, Func Offset: 0x2e8
	// Line 1364, Address: 0x102d8d8, Func Offset: 0x2f8
	// Line 1365, Address: 0x102d8e4, Func Offset: 0x304
	// Line 1366, Address: 0x102d904, Func Offset: 0x324
	// Line 1367, Address: 0x102d93c, Func Offset: 0x35c
	// Line 1368, Address: 0x102d95c, Func Offset: 0x37c
	// Line 1370, Address: 0x102d980, Func Offset: 0x3a0
	// Line 1373, Address: 0x102d9a4, Func Offset: 0x3c4
	// Line 1375, Address: 0x102d9c4, Func Offset: 0x3e4
	// Line 1377, Address: 0x102d9d8, Func Offset: 0x3f8
	// Line 1378, Address: 0x102d9e4, Func Offset: 0x404
	// Line 1379, Address: 0x102d9f4, Func Offset: 0x414
	// Line 1381, Address: 0x102d9fc, Func Offset: 0x41c
	// Func End, Address: 0x102da24, Func Offset: 0x444
}

// 
// Start address: 0x102da30
void scrollwrtc()
{
	// Line 1387, Address: 0x102da30, Func Offset: 0
	// Func End, Address: 0x102da38, Func Offset: 0x8
}

// 
// Start address: 0x102da40
void scrollwrtz()
{
	// Line 1392, Address: 0x102da40, Func Offset: 0
	// Func End, Address: 0x102da48, Func Offset: 0x8
}

// 
// Start address: 0x102da50
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1410, Address: 0x102da50, Func Offset: 0
	// Line 1423, Address: 0x102da78, Func Offset: 0x28
	// Line 1426, Address: 0x102da98, Func Offset: 0x48
	// Line 1427, Address: 0x102daac, Func Offset: 0x5c
	// Line 1428, Address: 0x102dac0, Func Offset: 0x70
	// Line 1429, Address: 0x102dad4, Func Offset: 0x84
	// Line 1431, Address: 0x102dae8, Func Offset: 0x98
	// Line 1432, Address: 0x102daf4, Func Offset: 0xa4
	// Line 1433, Address: 0x102db08, Func Offset: 0xb8
	// Func End, Address: 0x102db18, Func Offset: 0xc8
}

// 
// Start address: 0x102db20
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1437, Address: 0x102db20, Func Offset: 0
	// Line 1441, Address: 0x102db48, Func Offset: 0x28
	// Line 1444, Address: 0x102db68, Func Offset: 0x48
	// Line 1445, Address: 0x102db7c, Func Offset: 0x5c
	// Line 1446, Address: 0x102db90, Func Offset: 0x70
	// Line 1447, Address: 0x102dba4, Func Offset: 0x84
	// Line 1449, Address: 0x102dbb8, Func Offset: 0x98
	// Line 1450, Address: 0x102dbc4, Func Offset: 0xa4
	// Line 1451, Address: 0x102dbd8, Func Offset: 0xb8
	// Func End, Address: 0x102dbe8, Func Offset: 0xc8
}

// 
// Start address: 0x102dbf0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1471, Address: 0x102dbf0, Func Offset: 0
	// Line 1475, Address: 0x102dc18, Func Offset: 0x28
	// Line 1478, Address: 0x102dc38, Func Offset: 0x48
	// Line 1479, Address: 0x102dc4c, Func Offset: 0x5c
	// Line 1480, Address: 0x102dc5c, Func Offset: 0x6c
	// Line 1481, Address: 0x102dc70, Func Offset: 0x80
	// Line 1483, Address: 0x102dc80, Func Offset: 0x90
	// Line 1484, Address: 0x102dc8c, Func Offset: 0x9c
	// Line 1485, Address: 0x102dca0, Func Offset: 0xb0
	// Func End, Address: 0x102dcb0, Func Offset: 0xc0
}

// 
// Start address: 0x102dcb0
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
	// Line 1504, Address: 0x102dcb0, Func Offset: 0
	// Line 1510, Address: 0x102dce4, Func Offset: 0x34
	// Line 1512, Address: 0x102dcf4, Func Offset: 0x44
	// Line 1513, Address: 0x102dcf8, Func Offset: 0x48
	// Line 1514, Address: 0x102dd00, Func Offset: 0x50
	// Line 1516, Address: 0x102dd10, Func Offset: 0x60
	// Line 1518, Address: 0x102dd14, Func Offset: 0x64
	// Line 1519, Address: 0x102dd1c, Func Offset: 0x6c
	// Line 1522, Address: 0x102dd24, Func Offset: 0x74
	// Line 1523, Address: 0x102dd2c, Func Offset: 0x7c
	// Line 1524, Address: 0x102dd38, Func Offset: 0x88
	// Line 1526, Address: 0x102dd44, Func Offset: 0x94
	// Line 1527, Address: 0x102dd4c, Func Offset: 0x9c
	// Line 1528, Address: 0x102dd54, Func Offset: 0xa4
	// Line 1529, Address: 0x102dd5c, Func Offset: 0xac
	// Line 1531, Address: 0x102dd68, Func Offset: 0xb8
	// Line 1532, Address: 0x102dd70, Func Offset: 0xc0
	// Line 1533, Address: 0x102dd78, Func Offset: 0xc8
	// Line 1534, Address: 0x102dd80, Func Offset: 0xd0
	// Line 1536, Address: 0x102dd8c, Func Offset: 0xdc
	// Line 1537, Address: 0x102dd94, Func Offset: 0xe4
	// Line 1538, Address: 0x102dd9c, Func Offset: 0xec
	// Line 1541, Address: 0x102dda4, Func Offset: 0xf4
	// Line 1542, Address: 0x102ddac, Func Offset: 0xfc
	// Line 1545, Address: 0x102ddb4, Func Offset: 0x104
	// Line 1546, Address: 0x102ddf8, Func Offset: 0x148
	// Line 1547, Address: 0x102de3c, Func Offset: 0x18c
	// Line 1548, Address: 0x102de80, Func Offset: 0x1d0
	// Line 1550, Address: 0x102dec4, Func Offset: 0x214
	// Func End, Address: 0x102def4, Func Offset: 0x244
}

// 
// Start address: 0x102df00
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1567, Address: 0x102df00, Func Offset: 0
	// Line 1568, Address: 0x102df20, Func Offset: 0x20
	// Line 1569, Address: 0x102df40, Func Offset: 0x40
	// Func End, Address: 0x102df50, Func Offset: 0x50
}

// 
// Start address: 0x102df50
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1571, Address: 0x102df50, Func Offset: 0
	// Line 1572, Address: 0x102df70, Func Offset: 0x20
	// Line 1573, Address: 0x102df74, Func Offset: 0x24
	// Line 1574, Address: 0x102df94, Func Offset: 0x44
	// Func End, Address: 0x102dfa4, Func Offset: 0x54
}

// 
// Start address: 0x102dfb0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1581, Address: 0x102dfb0, Func Offset: 0
	// Line 1587, Address: 0x102dfe0, Func Offset: 0x30
	// Line 1588, Address: 0x102dff0, Func Offset: 0x40
	// Line 1594, Address: 0x102e000, Func Offset: 0x50
	// Line 1595, Address: 0x102e01c, Func Offset: 0x6c
	// Line 1596, Address: 0x102e020, Func Offset: 0x70
	// Line 1597, Address: 0x102e03c, Func Offset: 0x8c
	// Line 1598, Address: 0x102e040, Func Offset: 0x90
	// Line 1599, Address: 0x102e060, Func Offset: 0xb0
	// Line 1600, Address: 0x102e068, Func Offset: 0xb8
	// Line 1601, Address: 0x102e088, Func Offset: 0xd8
	// Line 1602, Address: 0x102e090, Func Offset: 0xe0
	// Line 1603, Address: 0x102e0d8, Func Offset: 0x128
	// Line 1605, Address: 0x102e0e4, Func Offset: 0x134
	// Line 1607, Address: 0x102e100, Func Offset: 0x150
	// Line 1612, Address: 0x102e108, Func Offset: 0x158
	// Line 1613, Address: 0x102e114, Func Offset: 0x164
	// Line 1616, Address: 0x102e120, Func Offset: 0x170
	// Line 1617, Address: 0x102e128, Func Offset: 0x178
	// Line 1618, Address: 0x102e148, Func Offset: 0x198
	// Line 1619, Address: 0x102e164, Func Offset: 0x1b4
	// Line 1620, Address: 0x102e16c, Func Offset: 0x1bc
	// Line 1621, Address: 0x102e18c, Func Offset: 0x1dc
	// Line 1623, Address: 0x102e1a8, Func Offset: 0x1f8
	// Line 1624, Address: 0x102e1b0, Func Offset: 0x200
	// Line 1625, Address: 0x102e1b8, Func Offset: 0x208
	// Line 1626, Address: 0x102e1c4, Func Offset: 0x214
	// Line 1627, Address: 0x102e1dc, Func Offset: 0x22c
	// Line 1629, Address: 0x102e1ec, Func Offset: 0x23c
	// Line 1632, Address: 0x102e1f8, Func Offset: 0x248
	// Line 1633, Address: 0x102e200, Func Offset: 0x250
	// Line 1634, Address: 0x102e204, Func Offset: 0x254
	// Func End, Address: 0x102e224, Func Offset: 0x274
}

// 
// Start address: 0x102e230
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1654, Address: 0x102e230, Func Offset: 0
	// Line 1662, Address: 0x102e258, Func Offset: 0x28
	// Line 1663, Address: 0x102e2bc, Func Offset: 0x8c
	// Line 1669, Address: 0x102e2c4, Func Offset: 0x94
	// Line 1670, Address: 0x102e2cc, Func Offset: 0x9c
	// Line 1671, Address: 0x102e2ec, Func Offset: 0xbc
	// Line 1672, Address: 0x102e308, Func Offset: 0xd8
	// Line 1673, Address: 0x102e310, Func Offset: 0xe0
	// Line 1674, Address: 0x102e330, Func Offset: 0x100
	// Line 1677, Address: 0x102e34c, Func Offset: 0x11c
	// Line 1678, Address: 0x102e354, Func Offset: 0x124
	// Line 1679, Address: 0x102e35c, Func Offset: 0x12c
	// Line 1680, Address: 0x102e368, Func Offset: 0x138
	// Line 1681, Address: 0x102e380, Func Offset: 0x150
	// Line 1682, Address: 0x102e388, Func Offset: 0x158
	// Line 1687, Address: 0x102e398, Func Offset: 0x168
	// Line 1690, Address: 0x102e3a4, Func Offset: 0x174
	// Line 1691, Address: 0x102e3ac, Func Offset: 0x17c
	// Line 1692, Address: 0x102e3b0, Func Offset: 0x180
	// Func End, Address: 0x102e3cc, Func Offset: 0x19c
}

// 
// Start address: 0x102e3d0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1706, Address: 0x102e3d0, Func Offset: 0
	// Line 1713, Address: 0x102e3ec, Func Offset: 0x1c
	// Line 1714, Address: 0x102e3f0, Func Offset: 0x20
	// Line 1715, Address: 0x102e3f8, Func Offset: 0x28
	// Line 1716, Address: 0x102e41c, Func Offset: 0x4c
	// Line 1717, Address: 0x102e428, Func Offset: 0x58
	// Line 1718, Address: 0x102e440, Func Offset: 0x70
	// Line 1719, Address: 0x102e454, Func Offset: 0x84
	// Line 1724, Address: 0x102e46c, Func Offset: 0x9c
	// Func End, Address: 0x102e484, Func Offset: 0xb4
}

// 
// Start address: 0x102e490
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1738, Address: 0x102e490, Func Offset: 0
	// Line 1739, Address: 0x102e49c, Func Offset: 0xc
	// Line 1740, Address: 0x102e4c8, Func Offset: 0x38
	// Line 1741, Address: 0x102e514, Func Offset: 0x84
	// Line 1742, Address: 0x102e540, Func Offset: 0xb0
	// Line 1744, Address: 0x102e58c, Func Offset: 0xfc
	// Line 1750, Address: 0x102e598, Func Offset: 0x108
	// Line 1751, Address: 0x102e59c, Func Offset: 0x10c
	// Func End, Address: 0x102e5a8, Func Offset: 0x118
}

// 
// Start address: 0x102e5b0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1768, Address: 0x102e5b0, Func Offset: 0
	// Line 1769, Address: 0x102e5cc, Func Offset: 0x1c
	// Line 1771, Address: 0x102e5e8, Func Offset: 0x38
	// Func End, Address: 0x102e5f8, Func Offset: 0x48
}

// 
// Start address: 0x102e600
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1773, Address: 0x102e600, Func Offset: 0
	// Line 1774, Address: 0x102e61c, Func Offset: 0x1c
	// Line 1775, Address: 0x102e620, Func Offset: 0x20
	// Line 1777, Address: 0x102e63c, Func Offset: 0x3c
	// Func End, Address: 0x102e64c, Func Offset: 0x4c
}

// 
// Start address: 0x102e650
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x102e650, Func Offset: 0
	// Line 1780, Address: 0x102e664, Func Offset: 0x14
	// Line 1782, Address: 0x102e680, Func Offset: 0x30
	// Func End, Address: 0x102e690, Func Offset: 0x40
}

// 
// Start address: 0x102e690
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1784, Address: 0x102e690, Func Offset: 0
	// Line 1785, Address: 0x102e6ac, Func Offset: 0x1c
	// Line 1787, Address: 0x102e6c8, Func Offset: 0x38
	// Func End, Address: 0x102e6d8, Func Offset: 0x48
}

// 
// Start address: 0x102e6e0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1789, Address: 0x102e6e0, Func Offset: 0
	// Line 1790, Address: 0x102e6f8, Func Offset: 0x18
	// Line 1791, Address: 0x102e708, Func Offset: 0x28
	// Line 1792, Address: 0x102e718, Func Offset: 0x38
	// Line 1793, Address: 0x102e724, Func Offset: 0x44
	// Line 1795, Address: 0x102e730, Func Offset: 0x50
	// Line 1796, Address: 0x102e75c, Func Offset: 0x7c
	// Line 1799, Address: 0x102e788, Func Offset: 0xa8
	// Func End, Address: 0x102e794, Func Offset: 0xb4
}

// 
// Start address: 0x102e7a0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1815, Address: 0x102e7a0, Func Offset: 0
	// Line 1822, Address: 0x102e7b8, Func Offset: 0x18
	// Line 1823, Address: 0x102e7c4, Func Offset: 0x24
	// Line 1824, Address: 0x102e7d0, Func Offset: 0x30
	// Line 1825, Address: 0x102e7d8, Func Offset: 0x38
	// Line 1826, Address: 0x102e7dc, Func Offset: 0x3c
	// Line 1830, Address: 0x102e7f4, Func Offset: 0x54
	// Line 1831, Address: 0x102e7fc, Func Offset: 0x5c
	// Line 1832, Address: 0x102e800, Func Offset: 0x60
	// Line 1834, Address: 0x102e810, Func Offset: 0x70
	// Func End, Address: 0x102e830, Func Offset: 0x90
}

// 
// Start address: 0x102e830
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1837, Address: 0x102e830, Func Offset: 0
	// Line 1838, Address: 0x102e848, Func Offset: 0x18
	// Line 1839, Address: 0x102e868, Func Offset: 0x38
	// Func End, Address: 0x102e878, Func Offset: 0x48
}

// 
// Start address: 0x102e880
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1844, Address: 0x102e880, Func Offset: 0
	// Line 1848, Address: 0x102e8a0, Func Offset: 0x20
	// Line 1851, Address: 0x102e8bc, Func Offset: 0x3c
	// Line 1855, Address: 0x102e8e4, Func Offset: 0x64
	// Line 1856, Address: 0x102e8f0, Func Offset: 0x70
	// Line 1858, Address: 0x102e918, Func Offset: 0x98
	// Func End, Address: 0x102e928, Func Offset: 0xa8
}

// 
// Start address: 0x102e930
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1864, Address: 0x102e930, Func Offset: 0
	// Line 1867, Address: 0x102e94c, Func Offset: 0x1c
	// Line 1868, Address: 0x102e954, Func Offset: 0x24
	// Line 1871, Address: 0x102e95c, Func Offset: 0x2c
	// Line 1873, Address: 0x102e980, Func Offset: 0x50
	// Line 1874, Address: 0x102e9a0, Func Offset: 0x70
	// Line 1875, Address: 0x102e9a8, Func Offset: 0x78
	// Line 1876, Address: 0x102e9cc, Func Offset: 0x9c
	// Func End, Address: 0x102e9e8, Func Offset: 0xb8
}

// 
// Start address: 0x102e9f0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1902, Address: 0x102e9f0, Func Offset: 0
	// Line 1907, Address: 0x102ea18, Func Offset: 0x28
	// Line 1908, Address: 0x102ea28, Func Offset: 0x38
	// Line 1910, Address: 0x102ea44, Func Offset: 0x54
	// Line 1911, Address: 0x102ea68, Func Offset: 0x78
	// Line 1912, Address: 0x102ea90, Func Offset: 0xa0
	// Line 1913, Address: 0x102ea9c, Func Offset: 0xac
	// Line 1914, Address: 0x102eaa4, Func Offset: 0xb4
	// Line 1917, Address: 0x102eac0, Func Offset: 0xd0
	// Line 1921, Address: 0x102eae8, Func Offset: 0xf8
	// Line 1924, Address: 0x102eaf0, Func Offset: 0x100
	// Line 1925, Address: 0x102eaf4, Func Offset: 0x104
	// Line 1929, Address: 0x102eb10, Func Offset: 0x120
	// Line 1936, Address: 0x102eb38, Func Offset: 0x148
	// Func End, Address: 0x102eb54, Func Offset: 0x164
}

// 
// Start address: 0x102eb60
void mapinit()
{
	// Line 1947, Address: 0x102eb60, Func Offset: 0
	// Line 1949, Address: 0x102eb68, Func Offset: 0x8
	// Line 1950, Address: 0x102eb7c, Func Offset: 0x1c
	// Line 1953, Address: 0x102eb90, Func Offset: 0x30
	// Line 1954, Address: 0x102ebb0, Func Offset: 0x50
	// Func End, Address: 0x102ebc0, Func Offset: 0x60
}

// 
// Start address: 0x102ebc0
void mapset()
{
	// Line 1959, Address: 0x102ebc0, Func Offset: 0
	// Func End, Address: 0x102ebc8, Func Offset: 0x8
}

// 
// Start address: 0x102ebd0
void divdevset()
{
	// Line 1963, Address: 0x102ebd0, Func Offset: 0
	// Func End, Address: 0x102ebd8, Func Offset: 0x8
}

// 
// Start address: 0x102ebe0
void enecginit()
{
	// Line 1967, Address: 0x102ebe0, Func Offset: 0
	// Func End, Address: 0x102ebe8, Func Offset: 0x8
}

