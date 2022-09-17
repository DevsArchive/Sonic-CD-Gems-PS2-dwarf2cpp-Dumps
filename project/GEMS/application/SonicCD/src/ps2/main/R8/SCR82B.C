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
typedef char type_7[8];
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
typedef char type_19[12];
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
// Start address: 0x102ad50
_anon2* main_chk()
{
	// Line 151, Address: 0x102ad50, Func Offset: 0
	// Line 152, Address: 0x102ad64, Func Offset: 0x14
	// Line 154, Address: 0x102ad74, Func Offset: 0x24
	// Line 156, Address: 0x102ad7c, Func Offset: 0x2c
	// Func End, Address: 0x102ad84, Func Offset: 0x34
}

// 
// Start address: 0x102ad90
void scr_set()
{
	short* pScrTbl;
	// Line 194, Address: 0x102ad90, Func Offset: 0
	// Line 197, Address: 0x102ad9c, Func Offset: 0xc
	// Line 198, Address: 0x102adb0, Func Offset: 0x20
	// Line 199, Address: 0x102adc4, Func Offset: 0x34
	// Line 201, Address: 0x102adcc, Func Offset: 0x3c
	// Line 202, Address: 0x102add4, Func Offset: 0x44
	// Line 203, Address: 0x102ade0, Func Offset: 0x50
	// Line 204, Address: 0x102ade4, Func Offset: 0x54
	// Line 205, Address: 0x102adf8, Func Offset: 0x68
	// Line 206, Address: 0x102adfc, Func Offset: 0x6c
	// Line 207, Address: 0x102ae10, Func Offset: 0x80
	// Line 208, Address: 0x102ae14, Func Offset: 0x84
	// Line 209, Address: 0x102ae28, Func Offset: 0x98
	// Line 210, Address: 0x102ae2c, Func Offset: 0x9c
	// Line 211, Address: 0x102ae40, Func Offset: 0xb0
	// Line 212, Address: 0x102ae60, Func Offset: 0xd0
	// Line 213, Address: 0x102ae64, Func Offset: 0xd4
	// Line 214, Address: 0x102ae70, Func Offset: 0xe0
	// Line 216, Address: 0x102ae7c, Func Offset: 0xec
	// Line 217, Address: 0x102ae88, Func Offset: 0xf8
	// Line 219, Address: 0x102ae94, Func Offset: 0x104
	// Line 220, Address: 0x102ae9c, Func Offset: 0x10c
	// Func End, Address: 0x102aeb0, Func Offset: 0x120
}

// 
// Start address: 0x102aeb0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 269, Address: 0x102aeb0, Func Offset: 0
	// Line 272, Address: 0x102aec4, Func Offset: 0x14
	// Line 273, Address: 0x102aed4, Func Offset: 0x24
	// Line 274, Address: 0x102aedc, Func Offset: 0x2c
	// Line 276, Address: 0x102aeec, Func Offset: 0x3c
	// Line 277, Address: 0x102af04, Func Offset: 0x54
	// Line 278, Address: 0x102af14, Func Offset: 0x64
	// Line 279, Address: 0x102af1c, Func Offset: 0x6c
	// Line 281, Address: 0x102af20, Func Offset: 0x70
	// Line 283, Address: 0x102af28, Func Offset: 0x78
	// Line 284, Address: 0x102af48, Func Offset: 0x98
	// Line 285, Address: 0x102af6c, Func Offset: 0xbc
	// Line 287, Address: 0x102af74, Func Offset: 0xc4
	// Line 291, Address: 0x102af94, Func Offset: 0xe4
	// Line 292, Address: 0x102afa8, Func Offset: 0xf8
	// Line 296, Address: 0x102afbc, Func Offset: 0x10c
	// Line 297, Address: 0x102afd0, Func Offset: 0x120
	// Line 298, Address: 0x102afdc, Func Offset: 0x12c
	// Line 299, Address: 0x102afe4, Func Offset: 0x134
	// Line 303, Address: 0x102afe8, Func Offset: 0x138
	// Line 304, Address: 0x102b00c, Func Offset: 0x15c
	// Line 308, Address: 0x102b01c, Func Offset: 0x16c
	// Line 310, Address: 0x102b024, Func Offset: 0x174
	// Line 311, Address: 0x102b038, Func Offset: 0x188
	// Line 312, Address: 0x102b044, Func Offset: 0x194
	// Line 313, Address: 0x102b04c, Func Offset: 0x19c
	// Line 317, Address: 0x102b050, Func Offset: 0x1a0
	// Line 318, Address: 0x102b074, Func Offset: 0x1c4
	// Line 322, Address: 0x102b084, Func Offset: 0x1d4
	// Line 324, Address: 0x102b08c, Func Offset: 0x1dc
	// Line 327, Address: 0x102b09c, Func Offset: 0x1ec
	// Line 328, Address: 0x102b0ac, Func Offset: 0x1fc
	// Line 329, Address: 0x102b0bc, Func Offset: 0x20c
	// Line 330, Address: 0x102b0cc, Func Offset: 0x21c
	// Line 331, Address: 0x102b0dc, Func Offset: 0x22c
	// Func End, Address: 0x102b0f8, Func Offset: 0x248
}

// 
// Start address: 0x102b100
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 352, Address: 0x102b100, Func Offset: 0
	// Line 355, Address: 0x102b10c, Func Offset: 0xc
	// Line 356, Address: 0x102b114, Func Offset: 0x14
	// Line 358, Address: 0x102b118, Func Offset: 0x18
	// Line 359, Address: 0x102b124, Func Offset: 0x24
	// Line 360, Address: 0x102b130, Func Offset: 0x30
	// Line 361, Address: 0x102b13c, Func Offset: 0x3c
	// Line 363, Address: 0x102b148, Func Offset: 0x48
	// Line 364, Address: 0x102b164, Func Offset: 0x64
	// Line 366, Address: 0x102b170, Func Offset: 0x70
	// Line 367, Address: 0x102b18c, Func Offset: 0x8c
	// Line 369, Address: 0x102b198, Func Offset: 0x98
	// Line 370, Address: 0x102b1b4, Func Offset: 0xb4
	// Line 371, Address: 0x102b1d8, Func Offset: 0xd8
	// Func End, Address: 0x102b1e4, Func Offset: 0xe4
}

// 
// Start address: 0x102b1f0
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
	// Line 387, Address: 0x102b1f0, Func Offset: 0
	// Line 399, Address: 0x102b20c, Func Offset: 0x1c
	// Line 404, Address: 0x102b21c, Func Offset: 0x2c
	// Line 406, Address: 0x102b248, Func Offset: 0x58
	// Line 408, Address: 0x102b250, Func Offset: 0x60
	// Line 409, Address: 0x102b258, Func Offset: 0x68
	// Line 411, Address: 0x102b260, Func Offset: 0x70
	// Line 412, Address: 0x102b270, Func Offset: 0x80
	// Line 415, Address: 0x102b280, Func Offset: 0x90
	// Line 416, Address: 0x102b294, Func Offset: 0xa4
	// Line 418, Address: 0x102b2a4, Func Offset: 0xb4
	// Line 419, Address: 0x102b2b8, Func Offset: 0xc8
	// Line 421, Address: 0x102b2c8, Func Offset: 0xd8
	// Line 422, Address: 0x102b2e4, Func Offset: 0xf4
	// Line 424, Address: 0x102b2f4, Func Offset: 0x104
	// Line 427, Address: 0x102b308, Func Offset: 0x118
	// Line 429, Address: 0x102b318, Func Offset: 0x128
	// Line 431, Address: 0x102b340, Func Offset: 0x150
	// Line 432, Address: 0x102b378, Func Offset: 0x188
	// Line 434, Address: 0x102b38c, Func Offset: 0x19c
	// Line 436, Address: 0x102b398, Func Offset: 0x1a8
	// Line 438, Address: 0x102b3a4, Func Offset: 0x1b4
	// Line 439, Address: 0x102b3c4, Func Offset: 0x1d4
	// Line 441, Address: 0x102b3d0, Func Offset: 0x1e0
	// Line 442, Address: 0x102b3e4, Func Offset: 0x1f4
	// Line 444, Address: 0x102b3f4, Func Offset: 0x204
	// Line 446, Address: 0x102b400, Func Offset: 0x210
	// Line 447, Address: 0x102b420, Func Offset: 0x230
	// Line 449, Address: 0x102b42c, Func Offset: 0x23c
	// Line 450, Address: 0x102b440, Func Offset: 0x250
	// Line 452, Address: 0x102b450, Func Offset: 0x260
	// Line 453, Address: 0x102b470, Func Offset: 0x280
	// Line 455, Address: 0x102b47c, Func Offset: 0x28c
	// Line 456, Address: 0x102b490, Func Offset: 0x2a0
	// Line 458, Address: 0x102b4a0, Func Offset: 0x2b0
	// Line 459, Address: 0x102b4ac, Func Offset: 0x2bc
	// Line 460, Address: 0x102b4dc, Func Offset: 0x2ec
	// Line 461, Address: 0x102b50c, Func Offset: 0x31c
	// Line 462, Address: 0x102b528, Func Offset: 0x338
	// Func End, Address: 0x102b54c, Func Offset: 0x35c
}

// 
// Start address: 0x102b550
void z82bline0(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon0 ldwk;
	short wk;
	char z82bscrtbl0[8];
	// Line 467, Address: 0x102b550, Func Offset: 0
	// Line 476, Address: 0x102b568, Func Offset: 0x18
	// Line 477, Address: 0x102b58c, Func Offset: 0x3c
	// Line 478, Address: 0x102b59c, Func Offset: 0x4c
	// Line 479, Address: 0x102b5bc, Func Offset: 0x6c
	// Line 481, Address: 0x102b5c8, Func Offset: 0x78
	// Line 483, Address: 0x102b5d4, Func Offset: 0x84
	// Line 485, Address: 0x102b5f4, Func Offset: 0xa4
	// Line 487, Address: 0x102b614, Func Offset: 0xc4
	// Line 488, Address: 0x102b620, Func Offset: 0xd0
	// Line 489, Address: 0x102b634, Func Offset: 0xe4
	// Line 491, Address: 0x102b640, Func Offset: 0xf0
	// Line 492, Address: 0x102b664, Func Offset: 0x114
	// Line 493, Address: 0x102b670, Func Offset: 0x120
	// Line 494, Address: 0x102b694, Func Offset: 0x144
	// Line 495, Address: 0x102b6a0, Func Offset: 0x150
	// Func End, Address: 0x102b6bc, Func Offset: 0x16c
}

// 
// Start address: 0x102b6c0
void z82bline1(short** ppHscw)
{
	int i;
	int j;
	int lXwk;
	_anon0 ldwk;
	short wk;
	char z82bscrtbl1[12];
	// Line 500, Address: 0x102b6c0, Func Offset: 0
	// Line 509, Address: 0x102b6d8, Func Offset: 0x18
	// Line 510, Address: 0x102b6fc, Func Offset: 0x3c
	// Line 511, Address: 0x102b71c, Func Offset: 0x5c
	// Line 512, Address: 0x102b73c, Func Offset: 0x7c
	// Line 513, Address: 0x102b748, Func Offset: 0x88
	// Line 515, Address: 0x102b75c, Func Offset: 0x9c
	// Line 517, Address: 0x102b768, Func Offset: 0xa8
	// Line 519, Address: 0x102b788, Func Offset: 0xc8
	// Line 521, Address: 0x102b7a8, Func Offset: 0xe8
	// Line 522, Address: 0x102b7bc, Func Offset: 0xfc
	// Line 523, Address: 0x102b7c8, Func Offset: 0x108
	// Line 525, Address: 0x102b7d4, Func Offset: 0x114
	// Line 526, Address: 0x102b7f8, Func Offset: 0x138
	// Line 527, Address: 0x102b804, Func Offset: 0x144
	// Line 528, Address: 0x102b828, Func Offset: 0x168
	// Line 529, Address: 0x102b834, Func Offset: 0x174
	// Line 530, Address: 0x102b848, Func Offset: 0x188
	// Func End, Address: 0x102b864, Func Offset: 0x1a4
}

// 
// Start address: 0x102b870
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 551, Address: 0x102b870, Func Offset: 0
	// Line 555, Address: 0x102b88c, Func Offset: 0x1c
	// Line 556, Address: 0x102b890, Func Offset: 0x20
	// Line 558, Address: 0x102b8b0, Func Offset: 0x40
	// Line 559, Address: 0x102b8cc, Func Offset: 0x5c
	// Line 560, Address: 0x102b8d8, Func Offset: 0x68
	// Line 562, Address: 0x102b8e4, Func Offset: 0x74
	// Line 563, Address: 0x102b8ec, Func Offset: 0x7c
	// Line 564, Address: 0x102b8fc, Func Offset: 0x8c
	// Line 565, Address: 0x102b920, Func Offset: 0xb0
	// Line 566, Address: 0x102b940, Func Offset: 0xd0
	// Func End, Address: 0x102b954, Func Offset: 0xe4
}

// 
// Start address: 0x102b960
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 672, Address: 0x102b960, Func Offset: 0
	// Line 675, Address: 0x102b970, Func Offset: 0x10
	// Line 676, Address: 0x102b980, Func Offset: 0x20
	// Line 677, Address: 0x102b98c, Func Offset: 0x2c
	// Line 679, Address: 0x102b9c4, Func Offset: 0x64
	// Line 680, Address: 0x102b9cc, Func Offset: 0x6c
	// Line 681, Address: 0x102b9e0, Func Offset: 0x80
	// Line 682, Address: 0x102ba00, Func Offset: 0xa0
	// Line 683, Address: 0x102ba14, Func Offset: 0xb4
	// Line 685, Address: 0x102ba1c, Func Offset: 0xbc
	// Line 690, Address: 0x102ba30, Func Offset: 0xd0
	// Func End, Address: 0x102ba44, Func Offset: 0xe4
}

// 
// Start address: 0x102ba50
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 708, Address: 0x102ba50, Func Offset: 0
	// Line 712, Address: 0x102ba64, Func Offset: 0x14
	// Line 713, Address: 0x102ba6c, Func Offset: 0x1c
	// Line 714, Address: 0x102ba74, Func Offset: 0x24
	// Line 715, Address: 0x102ba7c, Func Offset: 0x2c
	// Line 716, Address: 0x102ba80, Func Offset: 0x30
	// Line 717, Address: 0x102baa4, Func Offset: 0x54
	// Line 718, Address: 0x102bab0, Func Offset: 0x60
	// Line 720, Address: 0x102bacc, Func Offset: 0x7c
	// Line 721, Address: 0x102bad8, Func Offset: 0x88
	// Line 722, Address: 0x102baec, Func Offset: 0x9c
	// Line 723, Address: 0x102baf8, Func Offset: 0xa8
	// Line 724, Address: 0x102bb1c, Func Offset: 0xcc
	// Line 726, Address: 0x102bb24, Func Offset: 0xd4
	// Line 731, Address: 0x102bb4c, Func Offset: 0xfc
	// Func End, Address: 0x102bb60, Func Offset: 0x110
}

// 
// Start address: 0x102bb60
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 749, Address: 0x102bb60, Func Offset: 0
	// Line 753, Address: 0x102bb74, Func Offset: 0x14
	// Line 754, Address: 0x102bb7c, Func Offset: 0x1c
	// Line 755, Address: 0x102bb84, Func Offset: 0x24
	// Line 756, Address: 0x102bb8c, Func Offset: 0x2c
	// Line 757, Address: 0x102bb90, Func Offset: 0x30
	// Line 758, Address: 0x102bbb4, Func Offset: 0x54
	// Line 759, Address: 0x102bbc0, Func Offset: 0x60
	// Line 761, Address: 0x102bbdc, Func Offset: 0x7c
	// Line 762, Address: 0x102bbe8, Func Offset: 0x88
	// Line 763, Address: 0x102bbfc, Func Offset: 0x9c
	// Line 764, Address: 0x102bc08, Func Offset: 0xa8
	// Line 765, Address: 0x102bc2c, Func Offset: 0xcc
	// Line 767, Address: 0x102bc34, Func Offset: 0xd4
	// Line 772, Address: 0x102bc5c, Func Offset: 0xfc
	// Func End, Address: 0x102bc70, Func Offset: 0x110
}

// 
// Start address: 0x102bc70
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	// Line 790, Address: 0x102bc70, Func Offset: 0
	// Line 794, Address: 0x102bc84, Func Offset: 0x14
	// Line 795, Address: 0x102bc8c, Func Offset: 0x1c
	// Line 796, Address: 0x102bc94, Func Offset: 0x24
	// Line 797, Address: 0x102bc9c, Func Offset: 0x2c
	// Line 798, Address: 0x102bca0, Func Offset: 0x30
	// Line 799, Address: 0x102bcc4, Func Offset: 0x54
	// Line 800, Address: 0x102bcd0, Func Offset: 0x60
	// Line 802, Address: 0x102bcec, Func Offset: 0x7c
	// Line 803, Address: 0x102bcf8, Func Offset: 0x88
	// Line 804, Address: 0x102bd0c, Func Offset: 0x9c
	// Line 805, Address: 0x102bd18, Func Offset: 0xa8
	// Line 806, Address: 0x102bd3c, Func Offset: 0xcc
	// Line 808, Address: 0x102bd44, Func Offset: 0xd4
	// Line 813, Address: 0x102bd6c, Func Offset: 0xfc
	// Func End, Address: 0x102bd80, Func Offset: 0x110
}

// 
// Start address: 0x102bd80
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 828, Address: 0x102bd80, Func Offset: 0
	// Line 832, Address: 0x102bd90, Func Offset: 0x10
	// Line 834, Address: 0x102bda0, Func Offset: 0x20
	// Line 835, Address: 0x102bda8, Func Offset: 0x28
	// Line 836, Address: 0x102bddc, Func Offset: 0x5c
	// Line 837, Address: 0x102bde4, Func Offset: 0x64
	// Line 838, Address: 0x102bdf8, Func Offset: 0x78
	// Line 839, Address: 0x102be1c, Func Offset: 0x9c
	// Line 840, Address: 0x102be30, Func Offset: 0xb0
	// Line 841, Address: 0x102be38, Func Offset: 0xb8
	// Line 846, Address: 0x102be4c, Func Offset: 0xcc
	// Func End, Address: 0x102be64, Func Offset: 0xe4
}

// 
// Start address: 0x102be70
void scrh_move()
{
	short xwk;
	// Line 863, Address: 0x102be70, Func Offset: 0
	// Line 866, Address: 0x102be78, Func Offset: 0x8
	// Line 867, Address: 0x102bec0, Func Offset: 0x50
	// Line 869, Address: 0x102bed0, Func Offset: 0x60
	// Line 870, Address: 0x102bed8, Func Offset: 0x68
	// Line 871, Address: 0x102bee0, Func Offset: 0x70
	// Line 873, Address: 0x102bef0, Func Offset: 0x80
	// Line 874, Address: 0x102bf04, Func Offset: 0x94
	// Line 878, Address: 0x102bf10, Func Offset: 0xa0
	// Line 879, Address: 0x102bf24, Func Offset: 0xb4
	// Line 880, Address: 0x102bf48, Func Offset: 0xd8
	// Line 882, Address: 0x102bf58, Func Offset: 0xe8
	// Line 884, Address: 0x102bf60, Func Offset: 0xf0
	// Line 885, Address: 0x102bf74, Func Offset: 0x104
	// Line 889, Address: 0x102bf80, Func Offset: 0x110
	// Line 890, Address: 0x102bf94, Func Offset: 0x124
	// Line 891, Address: 0x102bfb8, Func Offset: 0x148
	// Line 896, Address: 0x102bfc8, Func Offset: 0x158
	// Line 897, Address: 0x102bff8, Func Offset: 0x188
	// Line 898, Address: 0x102c000, Func Offset: 0x190
	// Func End, Address: 0x102c010, Func Offset: 0x1a0
}

// 
// Start address: 0x102c010
void scroll_v()
{
	short ywk;
	// Line 913, Address: 0x102c010, Func Offset: 0
	// Line 916, Address: 0x102c01c, Func Offset: 0xc
	// Line 917, Address: 0x102c050, Func Offset: 0x40
	// Line 918, Address: 0x102c068, Func Offset: 0x58
	// Line 922, Address: 0x102c074, Func Offset: 0x64
	// Line 923, Address: 0x102c08c, Func Offset: 0x7c
	// Line 924, Address: 0x102c098, Func Offset: 0x88
	// Line 925, Address: 0x102c0bc, Func Offset: 0xac
	// Line 926, Address: 0x102c0d0, Func Offset: 0xc0
	// Line 927, Address: 0x102c0dc, Func Offset: 0xcc
	// Line 928, Address: 0x102c0e4, Func Offset: 0xd4
	// Line 929, Address: 0x102c10c, Func Offset: 0xfc
	// Line 930, Address: 0x102c134, Func Offset: 0x124
	// Line 931, Address: 0x102c140, Func Offset: 0x130
	// Line 933, Address: 0x102c148, Func Offset: 0x138
	// Line 934, Address: 0x102c170, Func Offset: 0x160
	// Line 935, Address: 0x102c180, Func Offset: 0x170
	// Line 936, Address: 0x102c188, Func Offset: 0x178
	// Line 941, Address: 0x102c190, Func Offset: 0x180
	// Line 942, Address: 0x102c1bc, Func Offset: 0x1ac
	// Line 943, Address: 0x102c1c8, Func Offset: 0x1b8
	// Line 944, Address: 0x102c1d0, Func Offset: 0x1c0
	// Line 945, Address: 0x102c1e0, Func Offset: 0x1d0
	// Line 946, Address: 0x102c1e8, Func Offset: 0x1d8
	// Line 951, Address: 0x102c1f0, Func Offset: 0x1e0
	// Line 952, Address: 0x102c1f8, Func Offset: 0x1e8
	// Func End, Address: 0x102c20c, Func Offset: 0x1fc
}

// 
// Start address: 0x102c210
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 966, Address: 0x102c210, Func Offset: 0
	// Line 969, Address: 0x102c220, Func Offset: 0x10
	// Line 970, Address: 0x102c23c, Func Offset: 0x2c
	// Line 971, Address: 0x102c254, Func Offset: 0x44
	// Line 972, Address: 0x102c278, Func Offset: 0x68
	// Line 973, Address: 0x102c280, Func Offset: 0x70
	// Line 977, Address: 0x102c290, Func Offset: 0x80
	// Line 978, Address: 0x102c2a4, Func Offset: 0x94
	// Line 979, Address: 0x102c2b0, Func Offset: 0xa0
	// Line 982, Address: 0x102c2b8, Func Offset: 0xa8
	// Line 983, Address: 0x102c2d0, Func Offset: 0xc0
	// Line 984, Address: 0x102c2dc, Func Offset: 0xcc
	// Line 985, Address: 0x102c2fc, Func Offset: 0xec
	// Line 986, Address: 0x102c308, Func Offset: 0xf8
	// Line 987, Address: 0x102c310, Func Offset: 0x100
	// Line 989, Address: 0x102c31c, Func Offset: 0x10c
	// Line 991, Address: 0x102c324, Func Offset: 0x114
	// Line 992, Address: 0x102c33c, Func Offset: 0x12c
	// Line 993, Address: 0x102c348, Func Offset: 0x138
	// Line 994, Address: 0x102c368, Func Offset: 0x158
	// Line 995, Address: 0x102c374, Func Offset: 0x164
	// Line 996, Address: 0x102c37c, Func Offset: 0x16c
	// Line 999, Address: 0x102c388, Func Offset: 0x178
	// Func End, Address: 0x102c39c, Func Offset: 0x18c
}

// 
// Start address: 0x102c3a0
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1013, Address: 0x102c3a0, Func Offset: 0
	// Line 1016, Address: 0x102c3b0, Func Offset: 0x10
	// Line 1018, Address: 0x102c3bc, Func Offset: 0x1c
	// Line 1019, Address: 0x102c3d4, Func Offset: 0x34
	// Line 1020, Address: 0x102c3e0, Func Offset: 0x40
	// Line 1021, Address: 0x102c400, Func Offset: 0x60
	// Line 1022, Address: 0x102c40c, Func Offset: 0x6c
	// Line 1023, Address: 0x102c414, Func Offset: 0x74
	// Line 1025, Address: 0x102c420, Func Offset: 0x80
	// Func End, Address: 0x102c434, Func Offset: 0x94
}

// 
// Start address: 0x102c440
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 1040, Address: 0x102c440, Func Offset: 0
	// Line 1043, Address: 0x102c44c, Func Offset: 0xc
	// Line 1044, Address: 0x102c450, Func Offset: 0x10
	// Line 1045, Address: 0x102c47c, Func Offset: 0x3c
	// Line 1046, Address: 0x102c490, Func Offset: 0x50
	// Line 1047, Address: 0x102c49c, Func Offset: 0x5c
	// Line 1048, Address: 0x102c4a4, Func Offset: 0x64
	// Line 1050, Address: 0x102c4b0, Func Offset: 0x70
	// Func End, Address: 0x102c4c0, Func Offset: 0x80
}

// 
// Start address: 0x102c4c0
void sv_move_sub2()
{
	// Line 1054, Address: 0x102c4c0, Func Offset: 0
	// Line 1055, Address: 0x102c4c8, Func Offset: 0x8
	// Line 1057, Address: 0x102c4d0, Func Offset: 0x10
	// Line 1058, Address: 0x102c4dc, Func Offset: 0x1c
	// Func End, Address: 0x102c4ec, Func Offset: 0x2c
}

// 
// Start address: 0x102c4f0
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	// Line 1072, Address: 0x102c4f0, Func Offset: 0
	// Line 1075, Address: 0x102c4fc, Func Offset: 0xc
	// Line 1076, Address: 0x102c520, Func Offset: 0x30
	// Line 1077, Address: 0x102c544, Func Offset: 0x54
	// Line 1078, Address: 0x102c550, Func Offset: 0x60
	// Func End, Address: 0x102c560, Func Offset: 0x70
}

// 
// Start address: 0x102c560
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1093, Address: 0x102c560, Func Offset: 0
	// Line 1094, Address: 0x102c56c, Func Offset: 0xc
	// Line 1095, Address: 0x102c594, Func Offset: 0x34
	// Line 1097, Address: 0x102c5ac, Func Offset: 0x4c
	// Line 1098, Address: 0x102c5b8, Func Offset: 0x58
	// Line 1099, Address: 0x102c5c0, Func Offset: 0x60
	// Line 1100, Address: 0x102c5cc, Func Offset: 0x6c
	// Line 1101, Address: 0x102c5e0, Func Offset: 0x80
	// Line 1102, Address: 0x102c5f4, Func Offset: 0x94
	// Line 1106, Address: 0x102c608, Func Offset: 0xa8
	// Line 1107, Address: 0x102c614, Func Offset: 0xb4
	// Func End, Address: 0x102c624, Func Offset: 0xc4
}

// 
// Start address: 0x102c630
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	// Line 1121, Address: 0x102c630, Func Offset: 0
	// Line 1124, Address: 0x102c63c, Func Offset: 0xc
	// Line 1125, Address: 0x102c65c, Func Offset: 0x2c
	// Line 1126, Address: 0x102c680, Func Offset: 0x50
	// Line 1127, Address: 0x102c68c, Func Offset: 0x5c
	// Func End, Address: 0x102c69c, Func Offset: 0x6c
}

// 
// Start address: 0x102c6a0
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1142, Address: 0x102c6a0, Func Offset: 0
	// Line 1143, Address: 0x102c6ac, Func Offset: 0xc
	// Line 1144, Address: 0x102c6d4, Func Offset: 0x34
	// Line 1146, Address: 0x102c6ec, Func Offset: 0x4c
	// Line 1147, Address: 0x102c6f8, Func Offset: 0x58
	// Line 1148, Address: 0x102c700, Func Offset: 0x60
	// Line 1149, Address: 0x102c70c, Func Offset: 0x6c
	// Line 1150, Address: 0x102c720, Func Offset: 0x80
	// Line 1151, Address: 0x102c734, Func Offset: 0x94
	// Line 1155, Address: 0x102c748, Func Offset: 0xa8
	// Line 1156, Address: 0x102c754, Func Offset: 0xb4
	// Func End, Address: 0x102c764, Func Offset: 0xc4
}

// 
// Start address: 0x102c770
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1173, Address: 0x102c770, Func Offset: 0
	// Line 1177, Address: 0x102c780, Func Offset: 0x10
	// Line 1178, Address: 0x102c790, Func Offset: 0x20
	// Line 1179, Address: 0x102c7b4, Func Offset: 0x44
	// Line 1180, Address: 0x102c7c8, Func Offset: 0x58
	// Line 1181, Address: 0x102c7e0, Func Offset: 0x70
	// Line 1183, Address: 0x102c7ec, Func Offset: 0x7c
	// Line 1185, Address: 0x102c7f8, Func Offset: 0x88
	// Line 1186, Address: 0x102c834, Func Offset: 0xc4
	// Line 1187, Address: 0x102c83c, Func Offset: 0xcc
	// Line 1188, Address: 0x102c850, Func Offset: 0xe0
	// Line 1189, Address: 0x102c87c, Func Offset: 0x10c
	// Line 1190, Address: 0x102c88c, Func Offset: 0x11c
	// Line 1191, Address: 0x102c8a0, Func Offset: 0x130
	// Line 1192, Address: 0x102c8a8, Func Offset: 0x138
	// Line 1197, Address: 0x102c8bc, Func Offset: 0x14c
	// Func End, Address: 0x102c8d0, Func Offset: 0x160
}

// 
// Start address: 0x102c8d0
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
	// Line 1215, Address: 0x102c8d0, Func Offset: 0
	// Line 1224, Address: 0x102c8f0, Func Offset: 0x20
	// Line 1225, Address: 0x102c8f4, Func Offset: 0x24
	// Line 1226, Address: 0x102c900, Func Offset: 0x30
	// Line 1227, Address: 0x102c90c, Func Offset: 0x3c
	// Line 1228, Address: 0x102c914, Func Offset: 0x44
	// Line 1229, Address: 0x102c91c, Func Offset: 0x4c
	// Line 1231, Address: 0x102c930, Func Offset: 0x60
	// Line 1232, Address: 0x102c934, Func Offset: 0x64
	// Line 1233, Address: 0x102c940, Func Offset: 0x70
	// Line 1234, Address: 0x102c94c, Func Offset: 0x7c
	// Line 1235, Address: 0x102c954, Func Offset: 0x84
	// Line 1237, Address: 0x102c95c, Func Offset: 0x8c
	// Line 1238, Address: 0x102c968, Func Offset: 0x98
	// Line 1239, Address: 0x102c97c, Func Offset: 0xac
	// Line 1241, Address: 0x102c988, Func Offset: 0xb8
	// Line 1242, Address: 0x102c990, Func Offset: 0xc0
	// Line 1244, Address: 0x102c998, Func Offset: 0xc8
	// Line 1246, Address: 0x102c9b8, Func Offset: 0xe8
	// Line 1252, Address: 0x102c9e4, Func Offset: 0x114
	// Line 1253, Address: 0x102c9f8, Func Offset: 0x128
	// Line 1255, Address: 0x102ca04, Func Offset: 0x134
	// Line 1256, Address: 0x102ca0c, Func Offset: 0x13c
	// Line 1257, Address: 0x102ca14, Func Offset: 0x144
	// Line 1259, Address: 0x102ca34, Func Offset: 0x164
	// Line 1265, Address: 0x102ca60, Func Offset: 0x190
	// Line 1266, Address: 0x102ca74, Func Offset: 0x1a4
	// Line 1268, Address: 0x102ca80, Func Offset: 0x1b0
	// Line 1269, Address: 0x102ca88, Func Offset: 0x1b8
	// Line 1270, Address: 0x102ca90, Func Offset: 0x1c0
	// Line 1272, Address: 0x102cab0, Func Offset: 0x1e0
	// Line 1278, Address: 0x102cadc, Func Offset: 0x20c
	// Line 1279, Address: 0x102caf0, Func Offset: 0x220
	// Line 1281, Address: 0x102cafc, Func Offset: 0x22c
	// Line 1282, Address: 0x102cb04, Func Offset: 0x234
	// Line 1283, Address: 0x102cb0c, Func Offset: 0x23c
	// Line 1285, Address: 0x102cb2c, Func Offset: 0x25c
	// Line 1294, Address: 0x102cb58, Func Offset: 0x288
	// Func End, Address: 0x102cb80, Func Offset: 0x2b0
}

// 
// Start address: 0x102cb80
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
	// Line 1311, Address: 0x102cb80, Func Offset: 0
	// Line 1322, Address: 0x102cbac, Func Offset: 0x2c
	// Line 1324, Address: 0x102cbb4, Func Offset: 0x34
	// Line 1325, Address: 0x102cbcc, Func Offset: 0x4c
	// Line 1326, Address: 0x102cbe0, Func Offset: 0x60
	// Line 1328, Address: 0x102cbe8, Func Offset: 0x68
	// Line 1330, Address: 0x102cbfc, Func Offset: 0x7c
	// Line 1331, Address: 0x102cc14, Func Offset: 0x94
	// Line 1332, Address: 0x102cc28, Func Offset: 0xa8
	// Line 1333, Address: 0x102cc30, Func Offset: 0xb0
	// Line 1335, Address: 0x102cc38, Func Offset: 0xb8
	// Line 1336, Address: 0x102cc4c, Func Offset: 0xcc
	// Line 1341, Address: 0x102cc54, Func Offset: 0xd4
	// Line 1342, Address: 0x102cca4, Func Offset: 0x124
	// Line 1343, Address: 0x102ccac, Func Offset: 0x12c
	// Line 1349, Address: 0x102cccc, Func Offset: 0x14c
	// Line 1350, Address: 0x102ccec, Func Offset: 0x16c
	// Line 1351, Address: 0x102cd10, Func Offset: 0x190
	// Line 1352, Address: 0x102cd1c, Func Offset: 0x19c
	// Line 1353, Address: 0x102cd24, Func Offset: 0x1a4
	// Line 1355, Address: 0x102cd44, Func Offset: 0x1c4
	// Line 1359, Address: 0x102cd70, Func Offset: 0x1f0
	// Line 1362, Address: 0x102cd78, Func Offset: 0x1f8
	// Line 1363, Address: 0x102cd7c, Func Offset: 0x1fc
	// Line 1367, Address: 0x102cd9c, Func Offset: 0x21c
	// Line 1374, Address: 0x102cdc8, Func Offset: 0x248
	// Line 1381, Address: 0x102cddc, Func Offset: 0x25c
	// Line 1382, Address: 0x102cde4, Func Offset: 0x264
	// Line 1383, Address: 0x102cdec, Func Offset: 0x26c
	// Line 1384, Address: 0x102ce04, Func Offset: 0x284
	// Line 1385, Address: 0x102ce24, Func Offset: 0x2a4
	// Line 1389, Address: 0x102ce2c, Func Offset: 0x2ac
	// Line 1391, Address: 0x102ce5c, Func Offset: 0x2dc
	// Line 1392, Address: 0x102ce68, Func Offset: 0x2e8
	// Line 1396, Address: 0x102ce78, Func Offset: 0x2f8
	// Line 1397, Address: 0x102ce84, Func Offset: 0x304
	// Line 1398, Address: 0x102cea4, Func Offset: 0x324
	// Line 1399, Address: 0x102cedc, Func Offset: 0x35c
	// Line 1400, Address: 0x102cefc, Func Offset: 0x37c
	// Line 1402, Address: 0x102cf20, Func Offset: 0x3a0
	// Line 1405, Address: 0x102cf44, Func Offset: 0x3c4
	// Line 1407, Address: 0x102cf64, Func Offset: 0x3e4
	// Line 1409, Address: 0x102cf78, Func Offset: 0x3f8
	// Line 1410, Address: 0x102cf84, Func Offset: 0x404
	// Line 1411, Address: 0x102cf94, Func Offset: 0x414
	// Line 1413, Address: 0x102cf9c, Func Offset: 0x41c
	// Func End, Address: 0x102cfc4, Func Offset: 0x444
}

// 
// Start address: 0x102cfd0
void scrollwrtc()
{
	// Line 1419, Address: 0x102cfd0, Func Offset: 0
	// Func End, Address: 0x102cfd8, Func Offset: 0x8
}

// 
// Start address: 0x102cfe0
void scrollwrtz()
{
	// Line 1424, Address: 0x102cfe0, Func Offset: 0
	// Func End, Address: 0x102cfe8, Func Offset: 0x8
}

// 
// Start address: 0x102cff0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1442, Address: 0x102cff0, Func Offset: 0
	// Line 1455, Address: 0x102d018, Func Offset: 0x28
	// Line 1458, Address: 0x102d038, Func Offset: 0x48
	// Line 1459, Address: 0x102d04c, Func Offset: 0x5c
	// Line 1460, Address: 0x102d060, Func Offset: 0x70
	// Line 1461, Address: 0x102d074, Func Offset: 0x84
	// Line 1463, Address: 0x102d088, Func Offset: 0x98
	// Line 1464, Address: 0x102d094, Func Offset: 0xa4
	// Line 1465, Address: 0x102d0a8, Func Offset: 0xb8
	// Func End, Address: 0x102d0b8, Func Offset: 0xc8
}

// 
// Start address: 0x102d0c0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1469, Address: 0x102d0c0, Func Offset: 0
	// Line 1473, Address: 0x102d0e8, Func Offset: 0x28
	// Line 1476, Address: 0x102d108, Func Offset: 0x48
	// Line 1477, Address: 0x102d11c, Func Offset: 0x5c
	// Line 1478, Address: 0x102d130, Func Offset: 0x70
	// Line 1479, Address: 0x102d144, Func Offset: 0x84
	// Line 1481, Address: 0x102d158, Func Offset: 0x98
	// Line 1482, Address: 0x102d164, Func Offset: 0xa4
	// Line 1483, Address: 0x102d178, Func Offset: 0xb8
	// Func End, Address: 0x102d188, Func Offset: 0xc8
}

// 
// Start address: 0x102d190
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1503, Address: 0x102d190, Func Offset: 0
	// Line 1507, Address: 0x102d1b8, Func Offset: 0x28
	// Line 1510, Address: 0x102d1d8, Func Offset: 0x48
	// Line 1511, Address: 0x102d1ec, Func Offset: 0x5c
	// Line 1512, Address: 0x102d1fc, Func Offset: 0x6c
	// Line 1513, Address: 0x102d210, Func Offset: 0x80
	// Line 1515, Address: 0x102d220, Func Offset: 0x90
	// Line 1516, Address: 0x102d22c, Func Offset: 0x9c
	// Line 1517, Address: 0x102d240, Func Offset: 0xb0
	// Func End, Address: 0x102d250, Func Offset: 0xc0
}

// 
// Start address: 0x102d250
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
	// Line 1536, Address: 0x102d250, Func Offset: 0
	// Line 1542, Address: 0x102d284, Func Offset: 0x34
	// Line 1544, Address: 0x102d294, Func Offset: 0x44
	// Line 1545, Address: 0x102d298, Func Offset: 0x48
	// Line 1546, Address: 0x102d2a0, Func Offset: 0x50
	// Line 1548, Address: 0x102d2b0, Func Offset: 0x60
	// Line 1550, Address: 0x102d2b4, Func Offset: 0x64
	// Line 1551, Address: 0x102d2bc, Func Offset: 0x6c
	// Line 1554, Address: 0x102d2c4, Func Offset: 0x74
	// Line 1555, Address: 0x102d2cc, Func Offset: 0x7c
	// Line 1556, Address: 0x102d2d8, Func Offset: 0x88
	// Line 1558, Address: 0x102d2e4, Func Offset: 0x94
	// Line 1559, Address: 0x102d2ec, Func Offset: 0x9c
	// Line 1560, Address: 0x102d2f4, Func Offset: 0xa4
	// Line 1561, Address: 0x102d2fc, Func Offset: 0xac
	// Line 1563, Address: 0x102d308, Func Offset: 0xb8
	// Line 1564, Address: 0x102d310, Func Offset: 0xc0
	// Line 1565, Address: 0x102d318, Func Offset: 0xc8
	// Line 1566, Address: 0x102d320, Func Offset: 0xd0
	// Line 1568, Address: 0x102d32c, Func Offset: 0xdc
	// Line 1569, Address: 0x102d334, Func Offset: 0xe4
	// Line 1570, Address: 0x102d33c, Func Offset: 0xec
	// Line 1573, Address: 0x102d344, Func Offset: 0xf4
	// Line 1574, Address: 0x102d34c, Func Offset: 0xfc
	// Line 1577, Address: 0x102d354, Func Offset: 0x104
	// Line 1578, Address: 0x102d398, Func Offset: 0x148
	// Line 1579, Address: 0x102d3dc, Func Offset: 0x18c
	// Line 1580, Address: 0x102d420, Func Offset: 0x1d0
	// Line 1582, Address: 0x102d464, Func Offset: 0x214
	// Func End, Address: 0x102d494, Func Offset: 0x244
}

// 
// Start address: 0x102d4a0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1600, Address: 0x102d4a0, Func Offset: 0
	// Line 1601, Address: 0x102d4c0, Func Offset: 0x20
	// Line 1602, Address: 0x102d4e0, Func Offset: 0x40
	// Func End, Address: 0x102d4f0, Func Offset: 0x50
}

// 
// Start address: 0x102d4f0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1604, Address: 0x102d4f0, Func Offset: 0
	// Line 1605, Address: 0x102d510, Func Offset: 0x20
	// Line 1606, Address: 0x102d514, Func Offset: 0x24
	// Line 1607, Address: 0x102d534, Func Offset: 0x44
	// Func End, Address: 0x102d544, Func Offset: 0x54
}

// 
// Start address: 0x102d550
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1614, Address: 0x102d550, Func Offset: 0
	// Line 1620, Address: 0x102d580, Func Offset: 0x30
	// Line 1621, Address: 0x102d590, Func Offset: 0x40
	// Line 1627, Address: 0x102d5a0, Func Offset: 0x50
	// Line 1628, Address: 0x102d5bc, Func Offset: 0x6c
	// Line 1629, Address: 0x102d5c0, Func Offset: 0x70
	// Line 1630, Address: 0x102d5dc, Func Offset: 0x8c
	// Line 1631, Address: 0x102d5e0, Func Offset: 0x90
	// Line 1632, Address: 0x102d600, Func Offset: 0xb0
	// Line 1633, Address: 0x102d608, Func Offset: 0xb8
	// Line 1634, Address: 0x102d628, Func Offset: 0xd8
	// Line 1635, Address: 0x102d630, Func Offset: 0xe0
	// Line 1636, Address: 0x102d678, Func Offset: 0x128
	// Line 1638, Address: 0x102d684, Func Offset: 0x134
	// Line 1640, Address: 0x102d6a0, Func Offset: 0x150
	// Line 1645, Address: 0x102d6a8, Func Offset: 0x158
	// Line 1646, Address: 0x102d6b4, Func Offset: 0x164
	// Line 1649, Address: 0x102d6c0, Func Offset: 0x170
	// Line 1650, Address: 0x102d6c8, Func Offset: 0x178
	// Line 1651, Address: 0x102d6e8, Func Offset: 0x198
	// Line 1652, Address: 0x102d704, Func Offset: 0x1b4
	// Line 1653, Address: 0x102d70c, Func Offset: 0x1bc
	// Line 1654, Address: 0x102d72c, Func Offset: 0x1dc
	// Line 1656, Address: 0x102d748, Func Offset: 0x1f8
	// Line 1657, Address: 0x102d750, Func Offset: 0x200
	// Line 1658, Address: 0x102d758, Func Offset: 0x208
	// Line 1659, Address: 0x102d764, Func Offset: 0x214
	// Line 1660, Address: 0x102d77c, Func Offset: 0x22c
	// Line 1662, Address: 0x102d78c, Func Offset: 0x23c
	// Line 1665, Address: 0x102d798, Func Offset: 0x248
	// Line 1666, Address: 0x102d7a0, Func Offset: 0x250
	// Line 1667, Address: 0x102d7a4, Func Offset: 0x254
	// Func End, Address: 0x102d7c4, Func Offset: 0x274
}

// 
// Start address: 0x102d7d0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1687, Address: 0x102d7d0, Func Offset: 0
	// Line 1695, Address: 0x102d7f8, Func Offset: 0x28
	// Line 1696, Address: 0x102d85c, Func Offset: 0x8c
	// Line 1702, Address: 0x102d864, Func Offset: 0x94
	// Line 1703, Address: 0x102d86c, Func Offset: 0x9c
	// Line 1704, Address: 0x102d88c, Func Offset: 0xbc
	// Line 1705, Address: 0x102d8a8, Func Offset: 0xd8
	// Line 1706, Address: 0x102d8b0, Func Offset: 0xe0
	// Line 1707, Address: 0x102d8d0, Func Offset: 0x100
	// Line 1710, Address: 0x102d8ec, Func Offset: 0x11c
	// Line 1711, Address: 0x102d8f4, Func Offset: 0x124
	// Line 1712, Address: 0x102d8fc, Func Offset: 0x12c
	// Line 1713, Address: 0x102d908, Func Offset: 0x138
	// Line 1714, Address: 0x102d920, Func Offset: 0x150
	// Line 1715, Address: 0x102d928, Func Offset: 0x158
	// Line 1720, Address: 0x102d938, Func Offset: 0x168
	// Line 1723, Address: 0x102d944, Func Offset: 0x174
	// Line 1724, Address: 0x102d94c, Func Offset: 0x17c
	// Line 1725, Address: 0x102d950, Func Offset: 0x180
	// Func End, Address: 0x102d96c, Func Offset: 0x19c
}

// 
// Start address: 0x102d970
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1739, Address: 0x102d970, Func Offset: 0
	// Line 1746, Address: 0x102d98c, Func Offset: 0x1c
	// Line 1747, Address: 0x102d990, Func Offset: 0x20
	// Line 1748, Address: 0x102d998, Func Offset: 0x28
	// Line 1749, Address: 0x102d9bc, Func Offset: 0x4c
	// Line 1750, Address: 0x102d9c8, Func Offset: 0x58
	// Line 1751, Address: 0x102d9e0, Func Offset: 0x70
	// Line 1752, Address: 0x102d9f4, Func Offset: 0x84
	// Line 1757, Address: 0x102da0c, Func Offset: 0x9c
	// Func End, Address: 0x102da24, Func Offset: 0xb4
}

// 
// Start address: 0x102da30
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1771, Address: 0x102da30, Func Offset: 0
	// Line 1772, Address: 0x102da3c, Func Offset: 0xc
	// Line 1773, Address: 0x102da68, Func Offset: 0x38
	// Line 1774, Address: 0x102dab4, Func Offset: 0x84
	// Line 1775, Address: 0x102dae0, Func Offset: 0xb0
	// Line 1777, Address: 0x102db2c, Func Offset: 0xfc
	// Line 1783, Address: 0x102db38, Func Offset: 0x108
	// Line 1784, Address: 0x102db3c, Func Offset: 0x10c
	// Func End, Address: 0x102db48, Func Offset: 0x118
}

// 
// Start address: 0x102db50
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1801, Address: 0x102db50, Func Offset: 0
	// Line 1802, Address: 0x102db6c, Func Offset: 0x1c
	// Line 1804, Address: 0x102db88, Func Offset: 0x38
	// Func End, Address: 0x102db98, Func Offset: 0x48
}

// 
// Start address: 0x102dba0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1806, Address: 0x102dba0, Func Offset: 0
	// Line 1807, Address: 0x102dbbc, Func Offset: 0x1c
	// Line 1808, Address: 0x102dbc0, Func Offset: 0x20
	// Line 1810, Address: 0x102dbdc, Func Offset: 0x3c
	// Func End, Address: 0x102dbec, Func Offset: 0x4c
}

// 
// Start address: 0x102dbf0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1812, Address: 0x102dbf0, Func Offset: 0
	// Line 1813, Address: 0x102dc04, Func Offset: 0x14
	// Line 1815, Address: 0x102dc20, Func Offset: 0x30
	// Func End, Address: 0x102dc30, Func Offset: 0x40
}

// 
// Start address: 0x102dc30
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1817, Address: 0x102dc30, Func Offset: 0
	// Line 1818, Address: 0x102dc4c, Func Offset: 0x1c
	// Line 1820, Address: 0x102dc68, Func Offset: 0x38
	// Func End, Address: 0x102dc78, Func Offset: 0x48
}

// 
// Start address: 0x102dc80
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1822, Address: 0x102dc80, Func Offset: 0
	// Line 1823, Address: 0x102dc98, Func Offset: 0x18
	// Line 1824, Address: 0x102dca8, Func Offset: 0x28
	// Line 1825, Address: 0x102dcb8, Func Offset: 0x38
	// Line 1826, Address: 0x102dcc4, Func Offset: 0x44
	// Line 1828, Address: 0x102dcd0, Func Offset: 0x50
	// Line 1829, Address: 0x102dcfc, Func Offset: 0x7c
	// Line 1832, Address: 0x102dd28, Func Offset: 0xa8
	// Func End, Address: 0x102dd34, Func Offset: 0xb4
}

// 
// Start address: 0x102dd40
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1848, Address: 0x102dd40, Func Offset: 0
	// Line 1855, Address: 0x102dd58, Func Offset: 0x18
	// Line 1856, Address: 0x102dd64, Func Offset: 0x24
	// Line 1857, Address: 0x102dd70, Func Offset: 0x30
	// Line 1858, Address: 0x102dd78, Func Offset: 0x38
	// Line 1859, Address: 0x102dd7c, Func Offset: 0x3c
	// Line 1863, Address: 0x102dd94, Func Offset: 0x54
	// Line 1864, Address: 0x102dd9c, Func Offset: 0x5c
	// Line 1865, Address: 0x102dda0, Func Offset: 0x60
	// Line 1867, Address: 0x102ddb0, Func Offset: 0x70
	// Func End, Address: 0x102ddd0, Func Offset: 0x90
}

// 
// Start address: 0x102ddd0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1870, Address: 0x102ddd0, Func Offset: 0
	// Line 1871, Address: 0x102dde8, Func Offset: 0x18
	// Line 1872, Address: 0x102de08, Func Offset: 0x38
	// Func End, Address: 0x102de18, Func Offset: 0x48
}

// 
// Start address: 0x102de20
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1877, Address: 0x102de20, Func Offset: 0
	// Line 1881, Address: 0x102de40, Func Offset: 0x20
	// Line 1884, Address: 0x102de5c, Func Offset: 0x3c
	// Line 1888, Address: 0x102de84, Func Offset: 0x64
	// Line 1889, Address: 0x102de90, Func Offset: 0x70
	// Line 1891, Address: 0x102deb8, Func Offset: 0x98
	// Func End, Address: 0x102dec8, Func Offset: 0xa8
}

// 
// Start address: 0x102ded0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1897, Address: 0x102ded0, Func Offset: 0
	// Line 1900, Address: 0x102deec, Func Offset: 0x1c
	// Line 1901, Address: 0x102def4, Func Offset: 0x24
	// Line 1904, Address: 0x102defc, Func Offset: 0x2c
	// Line 1906, Address: 0x102df20, Func Offset: 0x50
	// Line 1907, Address: 0x102df40, Func Offset: 0x70
	// Line 1908, Address: 0x102df48, Func Offset: 0x78
	// Line 1909, Address: 0x102df6c, Func Offset: 0x9c
	// Func End, Address: 0x102df88, Func Offset: 0xb8
}

// 
// Start address: 0x102df90
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1935, Address: 0x102df90, Func Offset: 0
	// Line 1940, Address: 0x102dfb8, Func Offset: 0x28
	// Line 1941, Address: 0x102dfc8, Func Offset: 0x38
	// Line 1943, Address: 0x102dfe4, Func Offset: 0x54
	// Line 1944, Address: 0x102e008, Func Offset: 0x78
	// Line 1945, Address: 0x102e030, Func Offset: 0xa0
	// Line 1946, Address: 0x102e03c, Func Offset: 0xac
	// Line 1947, Address: 0x102e044, Func Offset: 0xb4
	// Line 1950, Address: 0x102e060, Func Offset: 0xd0
	// Line 1954, Address: 0x102e088, Func Offset: 0xf8
	// Line 1957, Address: 0x102e090, Func Offset: 0x100
	// Line 1958, Address: 0x102e094, Func Offset: 0x104
	// Line 1962, Address: 0x102e0b0, Func Offset: 0x120
	// Line 1969, Address: 0x102e0d8, Func Offset: 0x148
	// Func End, Address: 0x102e0f4, Func Offset: 0x164
}

// 
// Start address: 0x102e100
void mapinit()
{
	// Line 1980, Address: 0x102e100, Func Offset: 0
	// Line 1982, Address: 0x102e108, Func Offset: 0x8
	// Line 1983, Address: 0x102e11c, Func Offset: 0x1c
	// Line 1985, Address: 0x102e130, Func Offset: 0x30
	// Line 1986, Address: 0x102e148, Func Offset: 0x48
	// Line 1987, Address: 0x102e168, Func Offset: 0x68
	// Func End, Address: 0x102e178, Func Offset: 0x78
}

// 
// Start address: 0x102e180
void mapset()
{
	// Line 1992, Address: 0x102e180, Func Offset: 0
	// Func End, Address: 0x102e188, Func Offset: 0x8
}

// 
// Start address: 0x102e190
void divdevset()
{
	// Line 1996, Address: 0x102e190, Func Offset: 0
	// Func End, Address: 0x102e198, Func Offset: 0x8
}

// 
// Start address: 0x102e1a0
void enecginit()
{
	// Line 2000, Address: 0x102e1a0, Func Offset: 0
	// Func End, Address: 0x102e1a8, Func Offset: 0x8
}

