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
// Start address: 0x102ba20
_anon2* main_chk()
{
	// Line 147, Address: 0x102ba20, Func Offset: 0
	// Line 148, Address: 0x102ba34, Func Offset: 0x14
	// Line 150, Address: 0x102ba44, Func Offset: 0x24
	// Line 152, Address: 0x102ba4c, Func Offset: 0x2c
	// Func End, Address: 0x102ba54, Func Offset: 0x34
}

// 
// Start address: 0x102ba60
void scr_set()
{
	short* pScrTbl;
	// Line 190, Address: 0x102ba60, Func Offset: 0
	// Line 193, Address: 0x102ba6c, Func Offset: 0xc
	// Line 194, Address: 0x102ba80, Func Offset: 0x20
	// Line 195, Address: 0x102ba94, Func Offset: 0x34
	// Line 197, Address: 0x102ba9c, Func Offset: 0x3c
	// Line 198, Address: 0x102baa4, Func Offset: 0x44
	// Line 199, Address: 0x102bab0, Func Offset: 0x50
	// Line 200, Address: 0x102bab4, Func Offset: 0x54
	// Line 201, Address: 0x102bac8, Func Offset: 0x68
	// Line 202, Address: 0x102bacc, Func Offset: 0x6c
	// Line 203, Address: 0x102bae0, Func Offset: 0x80
	// Line 204, Address: 0x102bae4, Func Offset: 0x84
	// Line 205, Address: 0x102baf8, Func Offset: 0x98
	// Line 206, Address: 0x102bafc, Func Offset: 0x9c
	// Line 207, Address: 0x102bb10, Func Offset: 0xb0
	// Line 208, Address: 0x102bb30, Func Offset: 0xd0
	// Line 209, Address: 0x102bb34, Func Offset: 0xd4
	// Line 210, Address: 0x102bb40, Func Offset: 0xe0
	// Line 212, Address: 0x102bb4c, Func Offset: 0xec
	// Line 213, Address: 0x102bb58, Func Offset: 0xf8
	// Line 215, Address: 0x102bb64, Func Offset: 0x104
	// Line 216, Address: 0x102bb6c, Func Offset: 0x10c
	// Func End, Address: 0x102bb80, Func Offset: 0x120
}

// 
// Start address: 0x102bb80
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 265, Address: 0x102bb80, Func Offset: 0
	// Line 268, Address: 0x102bb94, Func Offset: 0x14
	// Line 269, Address: 0x102bba4, Func Offset: 0x24
	// Line 270, Address: 0x102bbac, Func Offset: 0x2c
	// Line 272, Address: 0x102bbbc, Func Offset: 0x3c
	// Line 273, Address: 0x102bbd4, Func Offset: 0x54
	// Line 274, Address: 0x102bbe4, Func Offset: 0x64
	// Line 275, Address: 0x102bbec, Func Offset: 0x6c
	// Line 277, Address: 0x102bbf0, Func Offset: 0x70
	// Line 279, Address: 0x102bbf8, Func Offset: 0x78
	// Line 280, Address: 0x102bc18, Func Offset: 0x98
	// Line 281, Address: 0x102bc3c, Func Offset: 0xbc
	// Line 283, Address: 0x102bc44, Func Offset: 0xc4
	// Line 287, Address: 0x102bc64, Func Offset: 0xe4
	// Line 288, Address: 0x102bc78, Func Offset: 0xf8
	// Line 292, Address: 0x102bc8c, Func Offset: 0x10c
	// Line 293, Address: 0x102bca0, Func Offset: 0x120
	// Line 294, Address: 0x102bcac, Func Offset: 0x12c
	// Line 295, Address: 0x102bcb4, Func Offset: 0x134
	// Line 299, Address: 0x102bcb8, Func Offset: 0x138
	// Line 300, Address: 0x102bcdc, Func Offset: 0x15c
	// Line 304, Address: 0x102bcec, Func Offset: 0x16c
	// Line 306, Address: 0x102bcf4, Func Offset: 0x174
	// Line 307, Address: 0x102bd08, Func Offset: 0x188
	// Line 308, Address: 0x102bd14, Func Offset: 0x194
	// Line 309, Address: 0x102bd1c, Func Offset: 0x19c
	// Line 313, Address: 0x102bd20, Func Offset: 0x1a0
	// Line 314, Address: 0x102bd44, Func Offset: 0x1c4
	// Line 318, Address: 0x102bd54, Func Offset: 0x1d4
	// Line 320, Address: 0x102bd5c, Func Offset: 0x1dc
	// Line 323, Address: 0x102bd6c, Func Offset: 0x1ec
	// Line 324, Address: 0x102bd7c, Func Offset: 0x1fc
	// Line 325, Address: 0x102bd8c, Func Offset: 0x20c
	// Line 326, Address: 0x102bd9c, Func Offset: 0x21c
	// Line 327, Address: 0x102bdac, Func Offset: 0x22c
	// Func End, Address: 0x102bdc8, Func Offset: 0x248
}

// 
// Start address: 0x102bdd0
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 348, Address: 0x102bdd0, Func Offset: 0
	// Line 351, Address: 0x102bddc, Func Offset: 0xc
	// Line 352, Address: 0x102bde4, Func Offset: 0x14
	// Line 354, Address: 0x102bde8, Func Offset: 0x18
	// Line 355, Address: 0x102bdf4, Func Offset: 0x24
	// Line 356, Address: 0x102be00, Func Offset: 0x30
	// Line 357, Address: 0x102be0c, Func Offset: 0x3c
	// Line 359, Address: 0x102be18, Func Offset: 0x48
	// Line 360, Address: 0x102be34, Func Offset: 0x64
	// Line 362, Address: 0x102be40, Func Offset: 0x70
	// Line 363, Address: 0x102be5c, Func Offset: 0x8c
	// Line 365, Address: 0x102be68, Func Offset: 0x98
	// Line 366, Address: 0x102be84, Func Offset: 0xb4
	// Line 367, Address: 0x102bea8, Func Offset: 0xd8
	// Func End, Address: 0x102beb4, Func Offset: 0xe4
}

// 
// Start address: 0x102bec0
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
	// Line 383, Address: 0x102bec0, Func Offset: 0
	// Line 395, Address: 0x102bedc, Func Offset: 0x1c
	// Line 400, Address: 0x102beec, Func Offset: 0x2c
	// Line 402, Address: 0x102bf18, Func Offset: 0x58
	// Line 404, Address: 0x102bf20, Func Offset: 0x60
	// Line 405, Address: 0x102bf28, Func Offset: 0x68
	// Line 407, Address: 0x102bf30, Func Offset: 0x70
	// Line 408, Address: 0x102bf40, Func Offset: 0x80
	// Line 411, Address: 0x102bf50, Func Offset: 0x90
	// Line 412, Address: 0x102bf64, Func Offset: 0xa4
	// Line 414, Address: 0x102bf74, Func Offset: 0xb4
	// Line 415, Address: 0x102bf88, Func Offset: 0xc8
	// Line 417, Address: 0x102bf98, Func Offset: 0xd8
	// Line 418, Address: 0x102bfb4, Func Offset: 0xf4
	// Line 420, Address: 0x102bfc4, Func Offset: 0x104
	// Line 423, Address: 0x102bfd8, Func Offset: 0x118
	// Line 425, Address: 0x102bfe8, Func Offset: 0x128
	// Line 427, Address: 0x102c010, Func Offset: 0x150
	// Line 428, Address: 0x102c048, Func Offset: 0x188
	// Line 430, Address: 0x102c05c, Func Offset: 0x19c
	// Line 432, Address: 0x102c068, Func Offset: 0x1a8
	// Line 434, Address: 0x102c074, Func Offset: 0x1b4
	// Line 435, Address: 0x102c094, Func Offset: 0x1d4
	// Line 437, Address: 0x102c0a0, Func Offset: 0x1e0
	// Line 438, Address: 0x102c0b4, Func Offset: 0x1f4
	// Line 440, Address: 0x102c0c4, Func Offset: 0x204
	// Line 441, Address: 0x102c0e4, Func Offset: 0x224
	// Line 443, Address: 0x102c0f0, Func Offset: 0x230
	// Line 444, Address: 0x102c104, Func Offset: 0x244
	// Line 446, Address: 0x102c114, Func Offset: 0x254
	// Line 447, Address: 0x102c120, Func Offset: 0x260
	// Line 448, Address: 0x102c150, Func Offset: 0x290
	// Line 449, Address: 0x102c180, Func Offset: 0x2c0
	// Line 450, Address: 0x102c19c, Func Offset: 0x2dc
	// Func End, Address: 0x102c1c0, Func Offset: 0x300
}

// 
// Start address: 0x102c1c0
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
	int lHwk;
	// Line 464, Address: 0x102c1c0, Func Offset: 0
	// Line 465, Address: 0x102c1e8, Func Offset: 0x28
	// Line 472, Address: 0x102c214, Func Offset: 0x54
	// Line 473, Address: 0x102c238, Func Offset: 0x78
	// Line 474, Address: 0x102c23c, Func Offset: 0x7c
	// Line 476, Address: 0x102c24c, Func Offset: 0x8c
	// Line 478, Address: 0x102c260, Func Offset: 0xa0
	// Line 480, Address: 0x102c26c, Func Offset: 0xac
	// Line 481, Address: 0x102c280, Func Offset: 0xc0
	// Line 482, Address: 0x102c298, Func Offset: 0xd8
	// Line 483, Address: 0x102c29c, Func Offset: 0xdc
	// Line 484, Address: 0x102c2bc, Func Offset: 0xfc
	// Line 486, Address: 0x102c2d4, Func Offset: 0x114
	// Line 487, Address: 0x102c2e8, Func Offset: 0x128
	// Line 488, Address: 0x102c2f4, Func Offset: 0x134
	// Line 490, Address: 0x102c300, Func Offset: 0x140
	// Line 491, Address: 0x102c30c, Func Offset: 0x14c
	// Line 493, Address: 0x102c318, Func Offset: 0x158
	// Line 494, Address: 0x102c32c, Func Offset: 0x16c
	// Func End, Address: 0x102c358, Func Offset: 0x198
}

// 
// Start address: 0x102c360
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 515, Address: 0x102c360, Func Offset: 0
	// Line 519, Address: 0x102c37c, Func Offset: 0x1c
	// Line 520, Address: 0x102c380, Func Offset: 0x20
	// Line 522, Address: 0x102c3a0, Func Offset: 0x40
	// Line 523, Address: 0x102c3bc, Func Offset: 0x5c
	// Line 524, Address: 0x102c3c8, Func Offset: 0x68
	// Line 526, Address: 0x102c3d4, Func Offset: 0x74
	// Line 527, Address: 0x102c3dc, Func Offset: 0x7c
	// Line 528, Address: 0x102c3ec, Func Offset: 0x8c
	// Line 529, Address: 0x102c410, Func Offset: 0xb0
	// Line 530, Address: 0x102c430, Func Offset: 0xd0
	// Func End, Address: 0x102c444, Func Offset: 0xe4
}

// 
// Start address: 0x102c450
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 636, Address: 0x102c450, Func Offset: 0
	// Line 639, Address: 0x102c460, Func Offset: 0x10
	// Line 640, Address: 0x102c470, Func Offset: 0x20
	// Line 641, Address: 0x102c47c, Func Offset: 0x2c
	// Line 643, Address: 0x102c4b4, Func Offset: 0x64
	// Line 644, Address: 0x102c4bc, Func Offset: 0x6c
	// Line 645, Address: 0x102c4d0, Func Offset: 0x80
	// Line 646, Address: 0x102c4f0, Func Offset: 0xa0
	// Line 647, Address: 0x102c504, Func Offset: 0xb4
	// Line 649, Address: 0x102c50c, Func Offset: 0xbc
	// Line 654, Address: 0x102c520, Func Offset: 0xd0
	// Func End, Address: 0x102c534, Func Offset: 0xe4
}

// 
// Start address: 0x102c540
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 672, Address: 0x102c540, Func Offset: 0
	// Line 676, Address: 0x102c554, Func Offset: 0x14
	// Line 677, Address: 0x102c55c, Func Offset: 0x1c
	// Line 678, Address: 0x102c564, Func Offset: 0x24
	// Line 679, Address: 0x102c56c, Func Offset: 0x2c
	// Line 680, Address: 0x102c570, Func Offset: 0x30
	// Line 681, Address: 0x102c594, Func Offset: 0x54
	// Line 682, Address: 0x102c5a0, Func Offset: 0x60
	// Line 684, Address: 0x102c5bc, Func Offset: 0x7c
	// Line 685, Address: 0x102c5c8, Func Offset: 0x88
	// Line 686, Address: 0x102c5dc, Func Offset: 0x9c
	// Line 687, Address: 0x102c5e8, Func Offset: 0xa8
	// Line 688, Address: 0x102c60c, Func Offset: 0xcc
	// Line 690, Address: 0x102c614, Func Offset: 0xd4
	// Line 695, Address: 0x102c63c, Func Offset: 0xfc
	// Func End, Address: 0x102c650, Func Offset: 0x110
}

// 
// Start address: 0x102c650
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 713, Address: 0x102c650, Func Offset: 0
	// Line 717, Address: 0x102c664, Func Offset: 0x14
	// Line 718, Address: 0x102c66c, Func Offset: 0x1c
	// Line 719, Address: 0x102c674, Func Offset: 0x24
	// Line 720, Address: 0x102c67c, Func Offset: 0x2c
	// Line 721, Address: 0x102c680, Func Offset: 0x30
	// Line 722, Address: 0x102c6a4, Func Offset: 0x54
	// Line 723, Address: 0x102c6b0, Func Offset: 0x60
	// Line 725, Address: 0x102c6cc, Func Offset: 0x7c
	// Line 726, Address: 0x102c6d8, Func Offset: 0x88
	// Line 727, Address: 0x102c6ec, Func Offset: 0x9c
	// Line 728, Address: 0x102c6f8, Func Offset: 0xa8
	// Line 729, Address: 0x102c71c, Func Offset: 0xcc
	// Line 731, Address: 0x102c724, Func Offset: 0xd4
	// Line 736, Address: 0x102c74c, Func Offset: 0xfc
	// Func End, Address: 0x102c760, Func Offset: 0x110
}

// 
// Start address: 0x102c760
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 754, Address: 0x102c760, Func Offset: 0
	// Line 758, Address: 0x102c774, Func Offset: 0x14
	// Line 759, Address: 0x102c77c, Func Offset: 0x1c
	// Line 760, Address: 0x102c784, Func Offset: 0x24
	// Line 761, Address: 0x102c78c, Func Offset: 0x2c
	// Line 762, Address: 0x102c790, Func Offset: 0x30
	// Line 763, Address: 0x102c7b4, Func Offset: 0x54
	// Line 764, Address: 0x102c7c0, Func Offset: 0x60
	// Line 766, Address: 0x102c7dc, Func Offset: 0x7c
	// Line 767, Address: 0x102c7e8, Func Offset: 0x88
	// Line 768, Address: 0x102c7fc, Func Offset: 0x9c
	// Line 769, Address: 0x102c808, Func Offset: 0xa8
	// Line 770, Address: 0x102c82c, Func Offset: 0xcc
	// Line 772, Address: 0x102c834, Func Offset: 0xd4
	// Line 777, Address: 0x102c85c, Func Offset: 0xfc
	// Func End, Address: 0x102c870, Func Offset: 0x110
}

// 
// Start address: 0x102c870
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 792, Address: 0x102c870, Func Offset: 0
	// Line 796, Address: 0x102c880, Func Offset: 0x10
	// Line 798, Address: 0x102c890, Func Offset: 0x20
	// Line 799, Address: 0x102c898, Func Offset: 0x28
	// Line 800, Address: 0x102c8cc, Func Offset: 0x5c
	// Line 801, Address: 0x102c8d4, Func Offset: 0x64
	// Line 802, Address: 0x102c8e8, Func Offset: 0x78
	// Line 803, Address: 0x102c90c, Func Offset: 0x9c
	// Line 804, Address: 0x102c920, Func Offset: 0xb0
	// Line 805, Address: 0x102c928, Func Offset: 0xb8
	// Line 810, Address: 0x102c93c, Func Offset: 0xcc
	// Func End, Address: 0x102c954, Func Offset: 0xe4
}

// 
// Start address: 0x102c960
void scrh_move()
{
	short xwk;
	// Line 827, Address: 0x102c960, Func Offset: 0
	// Line 830, Address: 0x102c968, Func Offset: 0x8
	// Line 831, Address: 0x102c9b0, Func Offset: 0x50
	// Line 833, Address: 0x102c9c0, Func Offset: 0x60
	// Line 834, Address: 0x102c9c8, Func Offset: 0x68
	// Line 835, Address: 0x102c9d0, Func Offset: 0x70
	// Line 837, Address: 0x102c9e0, Func Offset: 0x80
	// Line 838, Address: 0x102c9f4, Func Offset: 0x94
	// Line 842, Address: 0x102ca00, Func Offset: 0xa0
	// Line 843, Address: 0x102ca14, Func Offset: 0xb4
	// Line 844, Address: 0x102ca38, Func Offset: 0xd8
	// Line 846, Address: 0x102ca48, Func Offset: 0xe8
	// Line 848, Address: 0x102ca50, Func Offset: 0xf0
	// Line 849, Address: 0x102ca64, Func Offset: 0x104
	// Line 853, Address: 0x102ca70, Func Offset: 0x110
	// Line 854, Address: 0x102ca84, Func Offset: 0x124
	// Line 855, Address: 0x102caa8, Func Offset: 0x148
	// Line 860, Address: 0x102cab8, Func Offset: 0x158
	// Line 861, Address: 0x102cae8, Func Offset: 0x188
	// Line 862, Address: 0x102caf0, Func Offset: 0x190
	// Func End, Address: 0x102cb00, Func Offset: 0x1a0
}

// 
// Start address: 0x102cb00
void scroll_v()
{
	short ywk;
	// Line 877, Address: 0x102cb00, Func Offset: 0
	// Line 880, Address: 0x102cb0c, Func Offset: 0xc
	// Line 881, Address: 0x102cb40, Func Offset: 0x40
	// Line 882, Address: 0x102cb58, Func Offset: 0x58
	// Line 886, Address: 0x102cb64, Func Offset: 0x64
	// Line 887, Address: 0x102cb7c, Func Offset: 0x7c
	// Line 888, Address: 0x102cb88, Func Offset: 0x88
	// Line 889, Address: 0x102cbac, Func Offset: 0xac
	// Line 890, Address: 0x102cbc0, Func Offset: 0xc0
	// Line 891, Address: 0x102cbcc, Func Offset: 0xcc
	// Line 892, Address: 0x102cbd4, Func Offset: 0xd4
	// Line 893, Address: 0x102cbfc, Func Offset: 0xfc
	// Line 894, Address: 0x102cc24, Func Offset: 0x124
	// Line 895, Address: 0x102cc30, Func Offset: 0x130
	// Line 897, Address: 0x102cc38, Func Offset: 0x138
	// Line 898, Address: 0x102cc60, Func Offset: 0x160
	// Line 899, Address: 0x102cc70, Func Offset: 0x170
	// Line 900, Address: 0x102cc78, Func Offset: 0x178
	// Line 905, Address: 0x102cc80, Func Offset: 0x180
	// Line 906, Address: 0x102ccac, Func Offset: 0x1ac
	// Line 907, Address: 0x102ccb8, Func Offset: 0x1b8
	// Line 908, Address: 0x102ccc0, Func Offset: 0x1c0
	// Line 909, Address: 0x102ccd0, Func Offset: 0x1d0
	// Line 910, Address: 0x102ccd8, Func Offset: 0x1d8
	// Line 915, Address: 0x102cce0, Func Offset: 0x1e0
	// Line 916, Address: 0x102cce8, Func Offset: 0x1e8
	// Func End, Address: 0x102ccfc, Func Offset: 0x1fc
}

// 
// Start address: 0x102cd00
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 930, Address: 0x102cd00, Func Offset: 0
	// Line 933, Address: 0x102cd10, Func Offset: 0x10
	// Line 934, Address: 0x102cd2c, Func Offset: 0x2c
	// Line 935, Address: 0x102cd44, Func Offset: 0x44
	// Line 936, Address: 0x102cd68, Func Offset: 0x68
	// Line 937, Address: 0x102cd70, Func Offset: 0x70
	// Line 941, Address: 0x102cd80, Func Offset: 0x80
	// Line 942, Address: 0x102cd94, Func Offset: 0x94
	// Line 943, Address: 0x102cda0, Func Offset: 0xa0
	// Line 946, Address: 0x102cda8, Func Offset: 0xa8
	// Line 947, Address: 0x102cdc0, Func Offset: 0xc0
	// Line 948, Address: 0x102cdcc, Func Offset: 0xcc
	// Line 949, Address: 0x102cdec, Func Offset: 0xec
	// Line 950, Address: 0x102cdf8, Func Offset: 0xf8
	// Line 951, Address: 0x102ce00, Func Offset: 0x100
	// Line 953, Address: 0x102ce0c, Func Offset: 0x10c
	// Line 955, Address: 0x102ce14, Func Offset: 0x114
	// Line 956, Address: 0x102ce2c, Func Offset: 0x12c
	// Line 957, Address: 0x102ce38, Func Offset: 0x138
	// Line 958, Address: 0x102ce58, Func Offset: 0x158
	// Line 959, Address: 0x102ce64, Func Offset: 0x164
	// Line 960, Address: 0x102ce6c, Func Offset: 0x16c
	// Line 963, Address: 0x102ce78, Func Offset: 0x178
	// Func End, Address: 0x102ce8c, Func Offset: 0x18c
}

// 
// Start address: 0x102ce90
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 977, Address: 0x102ce90, Func Offset: 0
	// Line 980, Address: 0x102cea0, Func Offset: 0x10
	// Line 982, Address: 0x102ceac, Func Offset: 0x1c
	// Line 983, Address: 0x102cec4, Func Offset: 0x34
	// Line 984, Address: 0x102ced0, Func Offset: 0x40
	// Line 985, Address: 0x102cef0, Func Offset: 0x60
	// Line 986, Address: 0x102cefc, Func Offset: 0x6c
	// Line 987, Address: 0x102cf04, Func Offset: 0x74
	// Line 989, Address: 0x102cf10, Func Offset: 0x80
	// Func End, Address: 0x102cf24, Func Offset: 0x94
}

// 
// Start address: 0x102cf30
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1004, Address: 0x102cf30, Func Offset: 0
	// Line 1007, Address: 0x102cf3c, Func Offset: 0xc
	// Line 1008, Address: 0x102cf68, Func Offset: 0x38
	// Line 1009, Address: 0x102cf7c, Func Offset: 0x4c
	// Line 1010, Address: 0x102cf88, Func Offset: 0x58
	// Line 1011, Address: 0x102cf90, Func Offset: 0x60
	// Line 1013, Address: 0x102cf9c, Func Offset: 0x6c
	// Func End, Address: 0x102cfac, Func Offset: 0x7c
}

// 
// Start address: 0x102cfb0
void sv_move_sub2()
{
	// Line 1017, Address: 0x102cfb0, Func Offset: 0
	// Line 1018, Address: 0x102cfb8, Func Offset: 0x8
	// Line 1020, Address: 0x102cfc0, Func Offset: 0x10
	// Line 1021, Address: 0x102cfcc, Func Offset: 0x1c
	// Func End, Address: 0x102cfdc, Func Offset: 0x2c
}

// 
// Start address: 0x102cfe0
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1035, Address: 0x102cfe0, Func Offset: 0
	// Line 1038, Address: 0x102cfec, Func Offset: 0xc
	// Line 1039, Address: 0x102d010, Func Offset: 0x30
	// Line 1040, Address: 0x102d034, Func Offset: 0x54
	// Line 1041, Address: 0x102d040, Func Offset: 0x60
	// Func End, Address: 0x102d050, Func Offset: 0x70
}

// 
// Start address: 0x102d050
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1056, Address: 0x102d050, Func Offset: 0
	// Line 1057, Address: 0x102d05c, Func Offset: 0xc
	// Line 1058, Address: 0x102d084, Func Offset: 0x34
	// Line 1060, Address: 0x102d09c, Func Offset: 0x4c
	// Line 1061, Address: 0x102d0a8, Func Offset: 0x58
	// Line 1062, Address: 0x102d0b0, Func Offset: 0x60
	// Line 1063, Address: 0x102d0bc, Func Offset: 0x6c
	// Line 1064, Address: 0x102d0d0, Func Offset: 0x80
	// Line 1065, Address: 0x102d0e4, Func Offset: 0x94
	// Line 1069, Address: 0x102d0f8, Func Offset: 0xa8
	// Line 1070, Address: 0x102d104, Func Offset: 0xb4
	// Func End, Address: 0x102d114, Func Offset: 0xc4
}

// 
// Start address: 0x102d120
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1084, Address: 0x102d120, Func Offset: 0
	// Line 1087, Address: 0x102d12c, Func Offset: 0xc
	// Line 1088, Address: 0x102d14c, Func Offset: 0x2c
	// Line 1089, Address: 0x102d170, Func Offset: 0x50
	// Line 1090, Address: 0x102d17c, Func Offset: 0x5c
	// Func End, Address: 0x102d18c, Func Offset: 0x6c
}

// 
// Start address: 0x102d190
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1105, Address: 0x102d190, Func Offset: 0
	// Line 1106, Address: 0x102d19c, Func Offset: 0xc
	// Line 1107, Address: 0x102d1c4, Func Offset: 0x34
	// Line 1109, Address: 0x102d1dc, Func Offset: 0x4c
	// Line 1110, Address: 0x102d1e8, Func Offset: 0x58
	// Line 1111, Address: 0x102d1f0, Func Offset: 0x60
	// Line 1112, Address: 0x102d1fc, Func Offset: 0x6c
	// Line 1113, Address: 0x102d210, Func Offset: 0x80
	// Line 1114, Address: 0x102d224, Func Offset: 0x94
	// Line 1118, Address: 0x102d238, Func Offset: 0xa8
	// Line 1119, Address: 0x102d244, Func Offset: 0xb4
	// Func End, Address: 0x102d254, Func Offset: 0xc4
}

// 
// Start address: 0x102d260
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1136, Address: 0x102d260, Func Offset: 0
	// Line 1140, Address: 0x102d270, Func Offset: 0x10
	// Line 1141, Address: 0x102d280, Func Offset: 0x20
	// Line 1142, Address: 0x102d2a4, Func Offset: 0x44
	// Line 1143, Address: 0x102d2b8, Func Offset: 0x58
	// Line 1144, Address: 0x102d2d0, Func Offset: 0x70
	// Line 1146, Address: 0x102d2dc, Func Offset: 0x7c
	// Line 1148, Address: 0x102d2e8, Func Offset: 0x88
	// Line 1149, Address: 0x102d324, Func Offset: 0xc4
	// Line 1150, Address: 0x102d32c, Func Offset: 0xcc
	// Line 1151, Address: 0x102d340, Func Offset: 0xe0
	// Line 1152, Address: 0x102d36c, Func Offset: 0x10c
	// Line 1153, Address: 0x102d37c, Func Offset: 0x11c
	// Line 1154, Address: 0x102d390, Func Offset: 0x130
	// Line 1155, Address: 0x102d398, Func Offset: 0x138
	// Line 1160, Address: 0x102d3ac, Func Offset: 0x14c
	// Func End, Address: 0x102d3c0, Func Offset: 0x160
}

// 
// Start address: 0x102d3c0
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
	// Line 1178, Address: 0x102d3c0, Func Offset: 0
	// Line 1187, Address: 0x102d3e0, Func Offset: 0x20
	// Line 1188, Address: 0x102d3e4, Func Offset: 0x24
	// Line 1189, Address: 0x102d3f0, Func Offset: 0x30
	// Line 1190, Address: 0x102d3fc, Func Offset: 0x3c
	// Line 1191, Address: 0x102d404, Func Offset: 0x44
	// Line 1192, Address: 0x102d40c, Func Offset: 0x4c
	// Line 1194, Address: 0x102d420, Func Offset: 0x60
	// Line 1195, Address: 0x102d424, Func Offset: 0x64
	// Line 1196, Address: 0x102d430, Func Offset: 0x70
	// Line 1197, Address: 0x102d43c, Func Offset: 0x7c
	// Line 1198, Address: 0x102d444, Func Offset: 0x84
	// Line 1200, Address: 0x102d44c, Func Offset: 0x8c
	// Line 1201, Address: 0x102d458, Func Offset: 0x98
	// Line 1202, Address: 0x102d46c, Func Offset: 0xac
	// Line 1204, Address: 0x102d478, Func Offset: 0xb8
	// Line 1205, Address: 0x102d480, Func Offset: 0xc0
	// Line 1207, Address: 0x102d488, Func Offset: 0xc8
	// Line 1209, Address: 0x102d4a8, Func Offset: 0xe8
	// Line 1215, Address: 0x102d4d4, Func Offset: 0x114
	// Line 1216, Address: 0x102d4e8, Func Offset: 0x128
	// Line 1218, Address: 0x102d4f4, Func Offset: 0x134
	// Line 1219, Address: 0x102d4fc, Func Offset: 0x13c
	// Line 1220, Address: 0x102d504, Func Offset: 0x144
	// Line 1222, Address: 0x102d524, Func Offset: 0x164
	// Line 1228, Address: 0x102d550, Func Offset: 0x190
	// Line 1229, Address: 0x102d564, Func Offset: 0x1a4
	// Line 1231, Address: 0x102d570, Func Offset: 0x1b0
	// Line 1232, Address: 0x102d578, Func Offset: 0x1b8
	// Line 1233, Address: 0x102d580, Func Offset: 0x1c0
	// Line 1235, Address: 0x102d5a0, Func Offset: 0x1e0
	// Line 1241, Address: 0x102d5cc, Func Offset: 0x20c
	// Line 1242, Address: 0x102d5e0, Func Offset: 0x220
	// Line 1244, Address: 0x102d5ec, Func Offset: 0x22c
	// Line 1245, Address: 0x102d5f4, Func Offset: 0x234
	// Line 1246, Address: 0x102d5fc, Func Offset: 0x23c
	// Line 1248, Address: 0x102d61c, Func Offset: 0x25c
	// Line 1257, Address: 0x102d648, Func Offset: 0x288
	// Func End, Address: 0x102d670, Func Offset: 0x2b0
}

// 
// Start address: 0x102d670
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
	// Line 1274, Address: 0x102d670, Func Offset: 0
	// Line 1285, Address: 0x102d69c, Func Offset: 0x2c
	// Line 1287, Address: 0x102d6a4, Func Offset: 0x34
	// Line 1288, Address: 0x102d6bc, Func Offset: 0x4c
	// Line 1289, Address: 0x102d6d0, Func Offset: 0x60
	// Line 1291, Address: 0x102d6d8, Func Offset: 0x68
	// Line 1293, Address: 0x102d6ec, Func Offset: 0x7c
	// Line 1294, Address: 0x102d704, Func Offset: 0x94
	// Line 1295, Address: 0x102d718, Func Offset: 0xa8
	// Line 1296, Address: 0x102d720, Func Offset: 0xb0
	// Line 1298, Address: 0x102d728, Func Offset: 0xb8
	// Line 1299, Address: 0x102d73c, Func Offset: 0xcc
	// Line 1304, Address: 0x102d744, Func Offset: 0xd4
	// Line 1305, Address: 0x102d794, Func Offset: 0x124
	// Line 1306, Address: 0x102d79c, Func Offset: 0x12c
	// Line 1312, Address: 0x102d7bc, Func Offset: 0x14c
	// Line 1313, Address: 0x102d7dc, Func Offset: 0x16c
	// Line 1314, Address: 0x102d800, Func Offset: 0x190
	// Line 1315, Address: 0x102d80c, Func Offset: 0x19c
	// Line 1316, Address: 0x102d814, Func Offset: 0x1a4
	// Line 1318, Address: 0x102d834, Func Offset: 0x1c4
	// Line 1322, Address: 0x102d860, Func Offset: 0x1f0
	// Line 1325, Address: 0x102d868, Func Offset: 0x1f8
	// Line 1326, Address: 0x102d86c, Func Offset: 0x1fc
	// Line 1330, Address: 0x102d88c, Func Offset: 0x21c
	// Line 1337, Address: 0x102d8b8, Func Offset: 0x248
	// Line 1344, Address: 0x102d8cc, Func Offset: 0x25c
	// Line 1345, Address: 0x102d8d4, Func Offset: 0x264
	// Line 1346, Address: 0x102d8dc, Func Offset: 0x26c
	// Line 1347, Address: 0x102d8f4, Func Offset: 0x284
	// Line 1348, Address: 0x102d914, Func Offset: 0x2a4
	// Line 1352, Address: 0x102d91c, Func Offset: 0x2ac
	// Line 1354, Address: 0x102d94c, Func Offset: 0x2dc
	// Line 1355, Address: 0x102d958, Func Offset: 0x2e8
	// Line 1359, Address: 0x102d968, Func Offset: 0x2f8
	// Line 1360, Address: 0x102d974, Func Offset: 0x304
	// Line 1361, Address: 0x102d994, Func Offset: 0x324
	// Line 1362, Address: 0x102d9cc, Func Offset: 0x35c
	// Line 1363, Address: 0x102d9ec, Func Offset: 0x37c
	// Line 1365, Address: 0x102da10, Func Offset: 0x3a0
	// Line 1368, Address: 0x102da34, Func Offset: 0x3c4
	// Line 1370, Address: 0x102da54, Func Offset: 0x3e4
	// Line 1372, Address: 0x102da68, Func Offset: 0x3f8
	// Line 1373, Address: 0x102da74, Func Offset: 0x404
	// Line 1374, Address: 0x102da84, Func Offset: 0x414
	// Line 1376, Address: 0x102da8c, Func Offset: 0x41c
	// Func End, Address: 0x102dab4, Func Offset: 0x444
}

// 
// Start address: 0x102dac0
void scrollwrtc()
{
	// Line 1382, Address: 0x102dac0, Func Offset: 0
	// Func End, Address: 0x102dac8, Func Offset: 0x8
}

// 
// Start address: 0x102dad0
void scrollwrtz()
{
	// Line 1387, Address: 0x102dad0, Func Offset: 0
	// Func End, Address: 0x102dad8, Func Offset: 0x8
}

// 
// Start address: 0x102dae0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1405, Address: 0x102dae0, Func Offset: 0
	// Line 1418, Address: 0x102db08, Func Offset: 0x28
	// Line 1421, Address: 0x102db28, Func Offset: 0x48
	// Line 1422, Address: 0x102db3c, Func Offset: 0x5c
	// Line 1423, Address: 0x102db50, Func Offset: 0x70
	// Line 1424, Address: 0x102db64, Func Offset: 0x84
	// Line 1426, Address: 0x102db78, Func Offset: 0x98
	// Line 1427, Address: 0x102db84, Func Offset: 0xa4
	// Line 1428, Address: 0x102db98, Func Offset: 0xb8
	// Func End, Address: 0x102dba8, Func Offset: 0xc8
}

// 
// Start address: 0x102dbb0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1432, Address: 0x102dbb0, Func Offset: 0
	// Line 1436, Address: 0x102dbd8, Func Offset: 0x28
	// Line 1439, Address: 0x102dbf8, Func Offset: 0x48
	// Line 1440, Address: 0x102dc0c, Func Offset: 0x5c
	// Line 1441, Address: 0x102dc20, Func Offset: 0x70
	// Line 1442, Address: 0x102dc34, Func Offset: 0x84
	// Line 1444, Address: 0x102dc48, Func Offset: 0x98
	// Line 1445, Address: 0x102dc54, Func Offset: 0xa4
	// Line 1446, Address: 0x102dc68, Func Offset: 0xb8
	// Func End, Address: 0x102dc78, Func Offset: 0xc8
}

// 
// Start address: 0x102dc80
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1466, Address: 0x102dc80, Func Offset: 0
	// Line 1470, Address: 0x102dca8, Func Offset: 0x28
	// Line 1473, Address: 0x102dcc8, Func Offset: 0x48
	// Line 1474, Address: 0x102dcdc, Func Offset: 0x5c
	// Line 1475, Address: 0x102dcec, Func Offset: 0x6c
	// Line 1476, Address: 0x102dd00, Func Offset: 0x80
	// Line 1478, Address: 0x102dd10, Func Offset: 0x90
	// Line 1479, Address: 0x102dd1c, Func Offset: 0x9c
	// Line 1480, Address: 0x102dd30, Func Offset: 0xb0
	// Func End, Address: 0x102dd40, Func Offset: 0xc0
}

// 
// Start address: 0x102dd40
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
	// Line 1499, Address: 0x102dd40, Func Offset: 0
	// Line 1505, Address: 0x102dd74, Func Offset: 0x34
	// Line 1507, Address: 0x102dd84, Func Offset: 0x44
	// Line 1508, Address: 0x102dd88, Func Offset: 0x48
	// Line 1509, Address: 0x102dd90, Func Offset: 0x50
	// Line 1511, Address: 0x102dda0, Func Offset: 0x60
	// Line 1513, Address: 0x102dda4, Func Offset: 0x64
	// Line 1514, Address: 0x102ddac, Func Offset: 0x6c
	// Line 1517, Address: 0x102ddb4, Func Offset: 0x74
	// Line 1518, Address: 0x102ddbc, Func Offset: 0x7c
	// Line 1519, Address: 0x102ddc8, Func Offset: 0x88
	// Line 1521, Address: 0x102ddd4, Func Offset: 0x94
	// Line 1522, Address: 0x102dddc, Func Offset: 0x9c
	// Line 1523, Address: 0x102dde4, Func Offset: 0xa4
	// Line 1524, Address: 0x102ddec, Func Offset: 0xac
	// Line 1526, Address: 0x102ddf8, Func Offset: 0xb8
	// Line 1527, Address: 0x102de00, Func Offset: 0xc0
	// Line 1528, Address: 0x102de08, Func Offset: 0xc8
	// Line 1529, Address: 0x102de10, Func Offset: 0xd0
	// Line 1531, Address: 0x102de1c, Func Offset: 0xdc
	// Line 1532, Address: 0x102de24, Func Offset: 0xe4
	// Line 1533, Address: 0x102de2c, Func Offset: 0xec
	// Line 1536, Address: 0x102de34, Func Offset: 0xf4
	// Line 1537, Address: 0x102de3c, Func Offset: 0xfc
	// Line 1540, Address: 0x102de44, Func Offset: 0x104
	// Line 1541, Address: 0x102de88, Func Offset: 0x148
	// Line 1542, Address: 0x102decc, Func Offset: 0x18c
	// Line 1543, Address: 0x102df10, Func Offset: 0x1d0
	// Line 1545, Address: 0x102df54, Func Offset: 0x214
	// Func End, Address: 0x102df84, Func Offset: 0x244
}

// 
// Start address: 0x102df90
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1562, Address: 0x102df90, Func Offset: 0
	// Line 1563, Address: 0x102dfb0, Func Offset: 0x20
	// Line 1564, Address: 0x102dfd0, Func Offset: 0x40
	// Func End, Address: 0x102dfe0, Func Offset: 0x50
}

// 
// Start address: 0x102dfe0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1566, Address: 0x102dfe0, Func Offset: 0
	// Line 1567, Address: 0x102e000, Func Offset: 0x20
	// Line 1568, Address: 0x102e004, Func Offset: 0x24
	// Line 1569, Address: 0x102e024, Func Offset: 0x44
	// Func End, Address: 0x102e034, Func Offset: 0x54
}

// 
// Start address: 0x102e040
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1576, Address: 0x102e040, Func Offset: 0
	// Line 1582, Address: 0x102e070, Func Offset: 0x30
	// Line 1583, Address: 0x102e080, Func Offset: 0x40
	// Line 1589, Address: 0x102e090, Func Offset: 0x50
	// Line 1590, Address: 0x102e0ac, Func Offset: 0x6c
	// Line 1591, Address: 0x102e0b0, Func Offset: 0x70
	// Line 1592, Address: 0x102e0cc, Func Offset: 0x8c
	// Line 1593, Address: 0x102e0d0, Func Offset: 0x90
	// Line 1594, Address: 0x102e0f0, Func Offset: 0xb0
	// Line 1595, Address: 0x102e0f8, Func Offset: 0xb8
	// Line 1596, Address: 0x102e118, Func Offset: 0xd8
	// Line 1597, Address: 0x102e120, Func Offset: 0xe0
	// Line 1598, Address: 0x102e168, Func Offset: 0x128
	// Line 1600, Address: 0x102e174, Func Offset: 0x134
	// Line 1602, Address: 0x102e190, Func Offset: 0x150
	// Line 1607, Address: 0x102e198, Func Offset: 0x158
	// Line 1608, Address: 0x102e1a4, Func Offset: 0x164
	// Line 1611, Address: 0x102e1b0, Func Offset: 0x170
	// Line 1612, Address: 0x102e1b8, Func Offset: 0x178
	// Line 1613, Address: 0x102e1d8, Func Offset: 0x198
	// Line 1614, Address: 0x102e1f4, Func Offset: 0x1b4
	// Line 1615, Address: 0x102e1fc, Func Offset: 0x1bc
	// Line 1616, Address: 0x102e21c, Func Offset: 0x1dc
	// Line 1618, Address: 0x102e238, Func Offset: 0x1f8
	// Line 1619, Address: 0x102e240, Func Offset: 0x200
	// Line 1620, Address: 0x102e248, Func Offset: 0x208
	// Line 1621, Address: 0x102e254, Func Offset: 0x214
	// Line 1622, Address: 0x102e26c, Func Offset: 0x22c
	// Line 1624, Address: 0x102e27c, Func Offset: 0x23c
	// Line 1627, Address: 0x102e288, Func Offset: 0x248
	// Line 1628, Address: 0x102e290, Func Offset: 0x250
	// Line 1629, Address: 0x102e294, Func Offset: 0x254
	// Func End, Address: 0x102e2b4, Func Offset: 0x274
}

// 
// Start address: 0x102e2c0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1649, Address: 0x102e2c0, Func Offset: 0
	// Line 1657, Address: 0x102e2e8, Func Offset: 0x28
	// Line 1658, Address: 0x102e34c, Func Offset: 0x8c
	// Line 1664, Address: 0x102e354, Func Offset: 0x94
	// Line 1665, Address: 0x102e35c, Func Offset: 0x9c
	// Line 1666, Address: 0x102e37c, Func Offset: 0xbc
	// Line 1667, Address: 0x102e398, Func Offset: 0xd8
	// Line 1668, Address: 0x102e3a0, Func Offset: 0xe0
	// Line 1669, Address: 0x102e3c0, Func Offset: 0x100
	// Line 1672, Address: 0x102e3dc, Func Offset: 0x11c
	// Line 1673, Address: 0x102e3e4, Func Offset: 0x124
	// Line 1674, Address: 0x102e3ec, Func Offset: 0x12c
	// Line 1675, Address: 0x102e3f8, Func Offset: 0x138
	// Line 1676, Address: 0x102e410, Func Offset: 0x150
	// Line 1677, Address: 0x102e418, Func Offset: 0x158
	// Line 1682, Address: 0x102e428, Func Offset: 0x168
	// Line 1685, Address: 0x102e434, Func Offset: 0x174
	// Line 1686, Address: 0x102e43c, Func Offset: 0x17c
	// Line 1687, Address: 0x102e440, Func Offset: 0x180
	// Func End, Address: 0x102e45c, Func Offset: 0x19c
}

// 
// Start address: 0x102e460
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1701, Address: 0x102e460, Func Offset: 0
	// Line 1708, Address: 0x102e47c, Func Offset: 0x1c
	// Line 1709, Address: 0x102e480, Func Offset: 0x20
	// Line 1710, Address: 0x102e488, Func Offset: 0x28
	// Line 1711, Address: 0x102e4ac, Func Offset: 0x4c
	// Line 1712, Address: 0x102e4b8, Func Offset: 0x58
	// Line 1713, Address: 0x102e4d0, Func Offset: 0x70
	// Line 1714, Address: 0x102e4e4, Func Offset: 0x84
	// Line 1719, Address: 0x102e4fc, Func Offset: 0x9c
	// Func End, Address: 0x102e514, Func Offset: 0xb4
}

// 
// Start address: 0x102e520
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1733, Address: 0x102e520, Func Offset: 0
	// Line 1734, Address: 0x102e52c, Func Offset: 0xc
	// Line 1735, Address: 0x102e558, Func Offset: 0x38
	// Line 1736, Address: 0x102e5a4, Func Offset: 0x84
	// Line 1737, Address: 0x102e5d0, Func Offset: 0xb0
	// Line 1739, Address: 0x102e61c, Func Offset: 0xfc
	// Line 1745, Address: 0x102e628, Func Offset: 0x108
	// Line 1746, Address: 0x102e62c, Func Offset: 0x10c
	// Func End, Address: 0x102e638, Func Offset: 0x118
}

// 
// Start address: 0x102e640
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1763, Address: 0x102e640, Func Offset: 0
	// Line 1764, Address: 0x102e65c, Func Offset: 0x1c
	// Line 1766, Address: 0x102e678, Func Offset: 0x38
	// Func End, Address: 0x102e688, Func Offset: 0x48
}

// 
// Start address: 0x102e690
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1768, Address: 0x102e690, Func Offset: 0
	// Line 1769, Address: 0x102e6ac, Func Offset: 0x1c
	// Line 1770, Address: 0x102e6b0, Func Offset: 0x20
	// Line 1772, Address: 0x102e6cc, Func Offset: 0x3c
	// Func End, Address: 0x102e6dc, Func Offset: 0x4c
}

// 
// Start address: 0x102e6e0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1774, Address: 0x102e6e0, Func Offset: 0
	// Line 1775, Address: 0x102e6f4, Func Offset: 0x14
	// Line 1777, Address: 0x102e710, Func Offset: 0x30
	// Func End, Address: 0x102e720, Func Offset: 0x40
}

// 
// Start address: 0x102e720
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1779, Address: 0x102e720, Func Offset: 0
	// Line 1780, Address: 0x102e73c, Func Offset: 0x1c
	// Line 1782, Address: 0x102e758, Func Offset: 0x38
	// Func End, Address: 0x102e768, Func Offset: 0x48
}

// 
// Start address: 0x102e770
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1784, Address: 0x102e770, Func Offset: 0
	// Line 1785, Address: 0x102e788, Func Offset: 0x18
	// Line 1786, Address: 0x102e798, Func Offset: 0x28
	// Line 1787, Address: 0x102e7a8, Func Offset: 0x38
	// Line 1788, Address: 0x102e7b4, Func Offset: 0x44
	// Line 1790, Address: 0x102e7c0, Func Offset: 0x50
	// Line 1791, Address: 0x102e7ec, Func Offset: 0x7c
	// Line 1794, Address: 0x102e818, Func Offset: 0xa8
	// Func End, Address: 0x102e824, Func Offset: 0xb4
}

// 
// Start address: 0x102e830
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1810, Address: 0x102e830, Func Offset: 0
	// Line 1817, Address: 0x102e848, Func Offset: 0x18
	// Line 1818, Address: 0x102e854, Func Offset: 0x24
	// Line 1819, Address: 0x102e860, Func Offset: 0x30
	// Line 1820, Address: 0x102e868, Func Offset: 0x38
	// Line 1821, Address: 0x102e86c, Func Offset: 0x3c
	// Line 1825, Address: 0x102e884, Func Offset: 0x54
	// Line 1826, Address: 0x102e88c, Func Offset: 0x5c
	// Line 1827, Address: 0x102e890, Func Offset: 0x60
	// Line 1829, Address: 0x102e8a0, Func Offset: 0x70
	// Func End, Address: 0x102e8c0, Func Offset: 0x90
}

// 
// Start address: 0x102e8c0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1832, Address: 0x102e8c0, Func Offset: 0
	// Line 1833, Address: 0x102e8d8, Func Offset: 0x18
	// Line 1834, Address: 0x102e8f8, Func Offset: 0x38
	// Func End, Address: 0x102e908, Func Offset: 0x48
}

// 
// Start address: 0x102e910
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1839, Address: 0x102e910, Func Offset: 0
	// Line 1843, Address: 0x102e930, Func Offset: 0x20
	// Line 1846, Address: 0x102e94c, Func Offset: 0x3c
	// Line 1850, Address: 0x102e974, Func Offset: 0x64
	// Line 1851, Address: 0x102e980, Func Offset: 0x70
	// Line 1853, Address: 0x102e9a8, Func Offset: 0x98
	// Func End, Address: 0x102e9b8, Func Offset: 0xa8
}

// 
// Start address: 0x102e9c0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1859, Address: 0x102e9c0, Func Offset: 0
	// Line 1862, Address: 0x102e9dc, Func Offset: 0x1c
	// Line 1863, Address: 0x102e9e4, Func Offset: 0x24
	// Line 1866, Address: 0x102e9ec, Func Offset: 0x2c
	// Line 1868, Address: 0x102ea10, Func Offset: 0x50
	// Line 1869, Address: 0x102ea30, Func Offset: 0x70
	// Line 1870, Address: 0x102ea38, Func Offset: 0x78
	// Line 1871, Address: 0x102ea5c, Func Offset: 0x9c
	// Func End, Address: 0x102ea78, Func Offset: 0xb8
}

// 
// Start address: 0x102ea80
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1897, Address: 0x102ea80, Func Offset: 0
	// Line 1902, Address: 0x102eaa8, Func Offset: 0x28
	// Line 1903, Address: 0x102eab8, Func Offset: 0x38
	// Line 1905, Address: 0x102ead4, Func Offset: 0x54
	// Line 1906, Address: 0x102eaf8, Func Offset: 0x78
	// Line 1907, Address: 0x102eb20, Func Offset: 0xa0
	// Line 1908, Address: 0x102eb2c, Func Offset: 0xac
	// Line 1909, Address: 0x102eb34, Func Offset: 0xb4
	// Line 1912, Address: 0x102eb50, Func Offset: 0xd0
	// Line 1916, Address: 0x102eb78, Func Offset: 0xf8
	// Line 1919, Address: 0x102eb80, Func Offset: 0x100
	// Line 1920, Address: 0x102eb84, Func Offset: 0x104
	// Line 1924, Address: 0x102eba0, Func Offset: 0x120
	// Line 1931, Address: 0x102ebc8, Func Offset: 0x148
	// Func End, Address: 0x102ebe4, Func Offset: 0x164
}

// 
// Start address: 0x102ebf0
void mapinit()
{
	// Line 1942, Address: 0x102ebf0, Func Offset: 0
	// Line 1944, Address: 0x102ebf8, Func Offset: 0x8
	// Line 1945, Address: 0x102ec0c, Func Offset: 0x1c
	// Line 1948, Address: 0x102ec20, Func Offset: 0x30
	// Line 1949, Address: 0x102ec40, Func Offset: 0x50
	// Func End, Address: 0x102ec50, Func Offset: 0x60
}

// 
// Start address: 0x102ec50
void mapset()
{
	// Line 1954, Address: 0x102ec50, Func Offset: 0
	// Func End, Address: 0x102ec58, Func Offset: 0x8
}

// 
// Start address: 0x102ec60
void divdevset()
{
	// Line 1958, Address: 0x102ec60, Func Offset: 0
	// Func End, Address: 0x102ec68, Func Offset: 0x8
}

// 
// Start address: 0x102ec70
void enecginit()
{
	// Line 1962, Address: 0x102ec70, Func Offset: 0
	// Func End, Address: 0x102ec78, Func Offset: 0x8
}

