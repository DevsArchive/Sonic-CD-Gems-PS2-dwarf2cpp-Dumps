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

typedef int(*type_7)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned char type_2[4];
typedef short type_3[2];
typedef short type_4[2][8];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef unsigned char type_12[49];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef short type_15[256];
typedef _anon2* type_16[8];
typedef _anon1 type_17[128];
typedef short type_18[2];
typedef short type_19[2][1];
typedef _anon2* type_20[8];
typedef char type_21[17];
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
// Start address: 0x102b070
_anon1* main_chk()
{
	// Line 146, Address: 0x102b070, Func Offset: 0
	// Line 147, Address: 0x102b084, Func Offset: 0x14
	// Line 149, Address: 0x102b094, Func Offset: 0x24
	// Line 151, Address: 0x102b09c, Func Offset: 0x2c
	// Func End, Address: 0x102b0a4, Func Offset: 0x34
}

// 
// Start address: 0x102b0b0
void scr_set()
{
	short* pScrTbl;
	// Line 189, Address: 0x102b0b0, Func Offset: 0
	// Line 192, Address: 0x102b0bc, Func Offset: 0xc
	// Line 193, Address: 0x102b0d0, Func Offset: 0x20
	// Line 194, Address: 0x102b0e4, Func Offset: 0x34
	// Line 196, Address: 0x102b0ec, Func Offset: 0x3c
	// Line 197, Address: 0x102b0f4, Func Offset: 0x44
	// Line 198, Address: 0x102b100, Func Offset: 0x50
	// Line 199, Address: 0x102b104, Func Offset: 0x54
	// Line 200, Address: 0x102b118, Func Offset: 0x68
	// Line 201, Address: 0x102b11c, Func Offset: 0x6c
	// Line 202, Address: 0x102b130, Func Offset: 0x80
	// Line 203, Address: 0x102b134, Func Offset: 0x84
	// Line 204, Address: 0x102b148, Func Offset: 0x98
	// Line 205, Address: 0x102b14c, Func Offset: 0x9c
	// Line 206, Address: 0x102b160, Func Offset: 0xb0
	// Line 207, Address: 0x102b180, Func Offset: 0xd0
	// Line 208, Address: 0x102b184, Func Offset: 0xd4
	// Line 209, Address: 0x102b190, Func Offset: 0xe0
	// Line 211, Address: 0x102b19c, Func Offset: 0xec
	// Line 212, Address: 0x102b1a8, Func Offset: 0xf8
	// Line 214, Address: 0x102b1b4, Func Offset: 0x104
	// Line 215, Address: 0x102b1bc, Func Offset: 0x10c
	// Func End, Address: 0x102b1d0, Func Offset: 0x120
}

// 
// Start address: 0x102b1d0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 264, Address: 0x102b1d0, Func Offset: 0
	// Line 267, Address: 0x102b1e4, Func Offset: 0x14
	// Line 268, Address: 0x102b1f4, Func Offset: 0x24
	// Line 269, Address: 0x102b1fc, Func Offset: 0x2c
	// Line 271, Address: 0x102b20c, Func Offset: 0x3c
	// Line 272, Address: 0x102b224, Func Offset: 0x54
	// Line 273, Address: 0x102b234, Func Offset: 0x64
	// Line 274, Address: 0x102b23c, Func Offset: 0x6c
	// Line 276, Address: 0x102b240, Func Offset: 0x70
	// Line 278, Address: 0x102b248, Func Offset: 0x78
	// Line 279, Address: 0x102b268, Func Offset: 0x98
	// Line 280, Address: 0x102b28c, Func Offset: 0xbc
	// Line 282, Address: 0x102b294, Func Offset: 0xc4
	// Line 286, Address: 0x102b2b4, Func Offset: 0xe4
	// Line 287, Address: 0x102b2c8, Func Offset: 0xf8
	// Line 291, Address: 0x102b2dc, Func Offset: 0x10c
	// Line 292, Address: 0x102b2f0, Func Offset: 0x120
	// Line 293, Address: 0x102b2fc, Func Offset: 0x12c
	// Line 294, Address: 0x102b304, Func Offset: 0x134
	// Line 298, Address: 0x102b308, Func Offset: 0x138
	// Line 299, Address: 0x102b32c, Func Offset: 0x15c
	// Line 303, Address: 0x102b33c, Func Offset: 0x16c
	// Line 305, Address: 0x102b344, Func Offset: 0x174
	// Line 306, Address: 0x102b358, Func Offset: 0x188
	// Line 307, Address: 0x102b364, Func Offset: 0x194
	// Line 308, Address: 0x102b36c, Func Offset: 0x19c
	// Line 312, Address: 0x102b370, Func Offset: 0x1a0
	// Line 313, Address: 0x102b394, Func Offset: 0x1c4
	// Line 317, Address: 0x102b3a4, Func Offset: 0x1d4
	// Line 319, Address: 0x102b3ac, Func Offset: 0x1dc
	// Line 322, Address: 0x102b3bc, Func Offset: 0x1ec
	// Line 323, Address: 0x102b3cc, Func Offset: 0x1fc
	// Line 324, Address: 0x102b3dc, Func Offset: 0x20c
	// Line 325, Address: 0x102b3ec, Func Offset: 0x21c
	// Line 326, Address: 0x102b3fc, Func Offset: 0x22c
	// Func End, Address: 0x102b418, Func Offset: 0x248
}

// 
// Start address: 0x102b420
void scrbinit(short sXpos, short sYpos)
{
	_anon2 lYwk;
	// Line 347, Address: 0x102b420, Func Offset: 0
	// Line 350, Address: 0x102b42c, Func Offset: 0xc
	// Line 351, Address: 0x102b434, Func Offset: 0x14
	// Line 353, Address: 0x102b438, Func Offset: 0x18
	// Line 354, Address: 0x102b444, Func Offset: 0x24
	// Line 355, Address: 0x102b450, Func Offset: 0x30
	// Line 356, Address: 0x102b45c, Func Offset: 0x3c
	// Line 358, Address: 0x102b468, Func Offset: 0x48
	// Line 359, Address: 0x102b484, Func Offset: 0x64
	// Line 361, Address: 0x102b490, Func Offset: 0x70
	// Line 362, Address: 0x102b4ac, Func Offset: 0x8c
	// Line 364, Address: 0x102b4b8, Func Offset: 0x98
	// Line 365, Address: 0x102b4d4, Func Offset: 0xb4
	// Line 366, Address: 0x102b4f8, Func Offset: 0xd8
	// Func End, Address: 0x102b504, Func Offset: 0xe4
}

// 
// Start address: 0x102b510
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
	// Line 382, Address: 0x102b510, Func Offset: 0
	// Line 394, Address: 0x102b52c, Func Offset: 0x1c
	// Line 399, Address: 0x102b53c, Func Offset: 0x2c
	// Line 401, Address: 0x102b568, Func Offset: 0x58
	// Line 403, Address: 0x102b570, Func Offset: 0x60
	// Line 404, Address: 0x102b578, Func Offset: 0x68
	// Line 406, Address: 0x102b580, Func Offset: 0x70
	// Line 407, Address: 0x102b590, Func Offset: 0x80
	// Line 410, Address: 0x102b5a0, Func Offset: 0x90
	// Line 411, Address: 0x102b5b4, Func Offset: 0xa4
	// Line 413, Address: 0x102b5c4, Func Offset: 0xb4
	// Line 414, Address: 0x102b5d8, Func Offset: 0xc8
	// Line 416, Address: 0x102b5e8, Func Offset: 0xd8
	// Line 417, Address: 0x102b604, Func Offset: 0xf4
	// Line 419, Address: 0x102b614, Func Offset: 0x104
	// Line 422, Address: 0x102b628, Func Offset: 0x118
	// Line 424, Address: 0x102b638, Func Offset: 0x128
	// Line 426, Address: 0x102b660, Func Offset: 0x150
	// Line 427, Address: 0x102b698, Func Offset: 0x188
	// Line 429, Address: 0x102b6ac, Func Offset: 0x19c
	// Line 431, Address: 0x102b6b8, Func Offset: 0x1a8
	// Line 433, Address: 0x102b6c4, Func Offset: 0x1b4
	// Line 434, Address: 0x102b6e4, Func Offset: 0x1d4
	// Line 436, Address: 0x102b6f0, Func Offset: 0x1e0
	// Line 437, Address: 0x102b704, Func Offset: 0x1f4
	// Line 439, Address: 0x102b714, Func Offset: 0x204
	// Line 440, Address: 0x102b734, Func Offset: 0x224
	// Line 442, Address: 0x102b740, Func Offset: 0x230
	// Line 443, Address: 0x102b754, Func Offset: 0x244
	// Line 445, Address: 0x102b764, Func Offset: 0x254
	// Line 446, Address: 0x102b784, Func Offset: 0x274
	// Line 448, Address: 0x102b790, Func Offset: 0x280
	// Line 449, Address: 0x102b7a4, Func Offset: 0x294
	// Line 451, Address: 0x102b7b4, Func Offset: 0x2a4
	// Line 452, Address: 0x102b7d4, Func Offset: 0x2c4
	// Line 454, Address: 0x102b7e0, Func Offset: 0x2d0
	// Line 455, Address: 0x102b7f4, Func Offset: 0x2e4
	// Line 457, Address: 0x102b804, Func Offset: 0x2f4
	// Line 458, Address: 0x102b824, Func Offset: 0x314
	// Line 460, Address: 0x102b830, Func Offset: 0x320
	// Line 461, Address: 0x102b844, Func Offset: 0x334
	// Line 463, Address: 0x102b854, Func Offset: 0x344
	// Line 464, Address: 0x102b874, Func Offset: 0x364
	// Line 466, Address: 0x102b880, Func Offset: 0x370
	// Line 467, Address: 0x102b894, Func Offset: 0x384
	// Line 469, Address: 0x102b8a4, Func Offset: 0x394
	// Line 470, Address: 0x102b8c4, Func Offset: 0x3b4
	// Line 472, Address: 0x102b8d0, Func Offset: 0x3c0
	// Line 473, Address: 0x102b8e4, Func Offset: 0x3d4
	// Line 475, Address: 0x102b8f4, Func Offset: 0x3e4
	// Line 476, Address: 0x102b914, Func Offset: 0x404
	// Line 478, Address: 0x102b920, Func Offset: 0x410
	// Line 479, Address: 0x102b934, Func Offset: 0x424
	// Line 481, Address: 0x102b944, Func Offset: 0x434
	// Line 482, Address: 0x102b964, Func Offset: 0x454
	// Line 484, Address: 0x102b970, Func Offset: 0x460
	// Line 485, Address: 0x102b984, Func Offset: 0x474
	// Line 487, Address: 0x102b994, Func Offset: 0x484
	// Line 488, Address: 0x102b9a0, Func Offset: 0x490
	// Line 489, Address: 0x102b9d0, Func Offset: 0x4c0
	// Line 490, Address: 0x102ba00, Func Offset: 0x4f0
	// Line 491, Address: 0x102ba1c, Func Offset: 0x50c
	// Func End, Address: 0x102ba40, Func Offset: 0x530
}

// 
// Start address: 0x102ba40
void z81aline(short** ppHscw)
{
	char z81ascrtbl[17];
	int i;
	int j;
	_anon2 radwk;
	int lXwk;
	// Line 505, Address: 0x102ba40, Func Offset: 0
	// Line 506, Address: 0x102ba54, Func Offset: 0x14
	// Line 514, Address: 0x102ba80, Func Offset: 0x40
	// Line 515, Address: 0x102baa4, Func Offset: 0x64
	// Line 516, Address: 0x102bab0, Func Offset: 0x70
	// Line 517, Address: 0x102bab4, Func Offset: 0x74
	// Line 518, Address: 0x102bacc, Func Offset: 0x8c
	// Line 521, Address: 0x102bad0, Func Offset: 0x90
	// Line 523, Address: 0x102bae4, Func Offset: 0xa4
	// Line 525, Address: 0x102baf0, Func Offset: 0xb0
	// Line 526, Address: 0x102bb08, Func Offset: 0xc8
	// Line 527, Address: 0x102bb1c, Func Offset: 0xdc
	// Line 528, Address: 0x102bb40, Func Offset: 0x100
	// Line 530, Address: 0x102bb4c, Func Offset: 0x10c
	// Line 531, Address: 0x102bb70, Func Offset: 0x130
	// Line 532, Address: 0x102bb7c, Func Offset: 0x13c
	// Line 533, Address: 0x102bba0, Func Offset: 0x160
	// Line 535, Address: 0x102bbac, Func Offset: 0x16c
	// Line 536, Address: 0x102bbc0, Func Offset: 0x180
	// Func End, Address: 0x102bbd8, Func Offset: 0x198
}

// 
// Start address: 0x102bbe0
void zonescrsetsub0(short yoffs, short yline, _anon2** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon2 ldwk;
	// Line 557, Address: 0x102bbe0, Func Offset: 0
	// Line 561, Address: 0x102bbfc, Func Offset: 0x1c
	// Line 562, Address: 0x102bc00, Func Offset: 0x20
	// Line 564, Address: 0x102bc20, Func Offset: 0x40
	// Line 565, Address: 0x102bc3c, Func Offset: 0x5c
	// Line 566, Address: 0x102bc48, Func Offset: 0x68
	// Line 568, Address: 0x102bc54, Func Offset: 0x74
	// Line 569, Address: 0x102bc5c, Func Offset: 0x7c
	// Line 570, Address: 0x102bc6c, Func Offset: 0x8c
	// Line 571, Address: 0x102bc90, Func Offset: 0xb0
	// Line 590, Address: 0x102bcb0, Func Offset: 0xd0
	// Func End, Address: 0x102bcc4, Func Offset: 0xe4
}

// 
// Start address: 0x102bcd0
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 696, Address: 0x102bcd0, Func Offset: 0
	// Line 699, Address: 0x102bce0, Func Offset: 0x10
	// Line 700, Address: 0x102bcf0, Func Offset: 0x20
	// Line 701, Address: 0x102bcfc, Func Offset: 0x2c
	// Line 703, Address: 0x102bd34, Func Offset: 0x64
	// Line 704, Address: 0x102bd3c, Func Offset: 0x6c
	// Line 705, Address: 0x102bd50, Func Offset: 0x80
	// Line 706, Address: 0x102bd70, Func Offset: 0xa0
	// Line 707, Address: 0x102bd84, Func Offset: 0xb4
	// Line 709, Address: 0x102bd8c, Func Offset: 0xbc
	// Line 714, Address: 0x102bda0, Func Offset: 0xd0
	// Func End, Address: 0x102bdb4, Func Offset: 0xe4
}

// 
// Start address: 0x102bdc0
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 732, Address: 0x102bdc0, Func Offset: 0
	// Line 736, Address: 0x102bdd4, Func Offset: 0x14
	// Line 737, Address: 0x102bddc, Func Offset: 0x1c
	// Line 738, Address: 0x102bde4, Func Offset: 0x24
	// Line 739, Address: 0x102bdec, Func Offset: 0x2c
	// Line 740, Address: 0x102bdf0, Func Offset: 0x30
	// Line 741, Address: 0x102be14, Func Offset: 0x54
	// Line 742, Address: 0x102be20, Func Offset: 0x60
	// Line 744, Address: 0x102be3c, Func Offset: 0x7c
	// Line 745, Address: 0x102be48, Func Offset: 0x88
	// Line 746, Address: 0x102be5c, Func Offset: 0x9c
	// Line 747, Address: 0x102be68, Func Offset: 0xa8
	// Line 748, Address: 0x102be8c, Func Offset: 0xcc
	// Line 750, Address: 0x102be94, Func Offset: 0xd4
	// Line 755, Address: 0x102bebc, Func Offset: 0xfc
	// Func End, Address: 0x102bed0, Func Offset: 0x110
}

// 
// Start address: 0x102bed0
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 773, Address: 0x102bed0, Func Offset: 0
	// Line 777, Address: 0x102bee4, Func Offset: 0x14
	// Line 778, Address: 0x102beec, Func Offset: 0x1c
	// Line 779, Address: 0x102bef4, Func Offset: 0x24
	// Line 780, Address: 0x102befc, Func Offset: 0x2c
	// Line 781, Address: 0x102bf00, Func Offset: 0x30
	// Line 782, Address: 0x102bf24, Func Offset: 0x54
	// Line 783, Address: 0x102bf30, Func Offset: 0x60
	// Line 785, Address: 0x102bf4c, Func Offset: 0x7c
	// Line 786, Address: 0x102bf58, Func Offset: 0x88
	// Line 787, Address: 0x102bf6c, Func Offset: 0x9c
	// Line 788, Address: 0x102bf78, Func Offset: 0xa8
	// Line 789, Address: 0x102bf9c, Func Offset: 0xcc
	// Line 791, Address: 0x102bfa4, Func Offset: 0xd4
	// Line 796, Address: 0x102bfcc, Func Offset: 0xfc
	// Func End, Address: 0x102bfe0, Func Offset: 0x110
}

// 
// Start address: 0x102bfe0
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon2 ldXwk;
	// Line 814, Address: 0x102bfe0, Func Offset: 0
	// Line 818, Address: 0x102bff4, Func Offset: 0x14
	// Line 819, Address: 0x102bffc, Func Offset: 0x1c
	// Line 820, Address: 0x102c004, Func Offset: 0x24
	// Line 821, Address: 0x102c00c, Func Offset: 0x2c
	// Line 822, Address: 0x102c010, Func Offset: 0x30
	// Line 823, Address: 0x102c034, Func Offset: 0x54
	// Line 824, Address: 0x102c040, Func Offset: 0x60
	// Line 826, Address: 0x102c05c, Func Offset: 0x7c
	// Line 827, Address: 0x102c068, Func Offset: 0x88
	// Line 828, Address: 0x102c07c, Func Offset: 0x9c
	// Line 829, Address: 0x102c088, Func Offset: 0xa8
	// Line 830, Address: 0x102c0ac, Func Offset: 0xcc
	// Line 832, Address: 0x102c0b4, Func Offset: 0xd4
	// Line 837, Address: 0x102c0dc, Func Offset: 0xfc
	// Func End, Address: 0x102c0f0, Func Offset: 0x110
}

// 
// Start address: 0x102c0f0
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 852, Address: 0x102c0f0, Func Offset: 0
	// Line 856, Address: 0x102c100, Func Offset: 0x10
	// Line 858, Address: 0x102c110, Func Offset: 0x20
	// Line 859, Address: 0x102c118, Func Offset: 0x28
	// Line 860, Address: 0x102c14c, Func Offset: 0x5c
	// Line 861, Address: 0x102c154, Func Offset: 0x64
	// Line 862, Address: 0x102c168, Func Offset: 0x78
	// Line 863, Address: 0x102c18c, Func Offset: 0x9c
	// Line 864, Address: 0x102c1a0, Func Offset: 0xb0
	// Line 865, Address: 0x102c1a8, Func Offset: 0xb8
	// Line 870, Address: 0x102c1bc, Func Offset: 0xcc
	// Func End, Address: 0x102c1d4, Func Offset: 0xe4
}

// 
// Start address: 0x102c1e0
void scrh_move()
{
	short xwk;
	// Line 887, Address: 0x102c1e0, Func Offset: 0
	// Line 890, Address: 0x102c1e8, Func Offset: 0x8
	// Line 891, Address: 0x102c230, Func Offset: 0x50
	// Line 893, Address: 0x102c240, Func Offset: 0x60
	// Line 894, Address: 0x102c248, Func Offset: 0x68
	// Line 895, Address: 0x102c250, Func Offset: 0x70
	// Line 897, Address: 0x102c260, Func Offset: 0x80
	// Line 898, Address: 0x102c274, Func Offset: 0x94
	// Line 902, Address: 0x102c280, Func Offset: 0xa0
	// Line 903, Address: 0x102c294, Func Offset: 0xb4
	// Line 904, Address: 0x102c2b8, Func Offset: 0xd8
	// Line 906, Address: 0x102c2c8, Func Offset: 0xe8
	// Line 908, Address: 0x102c2d0, Func Offset: 0xf0
	// Line 909, Address: 0x102c2e4, Func Offset: 0x104
	// Line 913, Address: 0x102c2f0, Func Offset: 0x110
	// Line 914, Address: 0x102c304, Func Offset: 0x124
	// Line 915, Address: 0x102c328, Func Offset: 0x148
	// Line 920, Address: 0x102c338, Func Offset: 0x158
	// Line 921, Address: 0x102c368, Func Offset: 0x188
	// Line 922, Address: 0x102c370, Func Offset: 0x190
	// Func End, Address: 0x102c380, Func Offset: 0x1a0
}

// 
// Start address: 0x102c380
void scroll_v()
{
	short ywk;
	// Line 937, Address: 0x102c380, Func Offset: 0
	// Line 940, Address: 0x102c38c, Func Offset: 0xc
	// Line 941, Address: 0x102c3c0, Func Offset: 0x40
	// Line 942, Address: 0x102c3d8, Func Offset: 0x58
	// Line 946, Address: 0x102c3e4, Func Offset: 0x64
	// Line 947, Address: 0x102c3fc, Func Offset: 0x7c
	// Line 948, Address: 0x102c408, Func Offset: 0x88
	// Line 949, Address: 0x102c42c, Func Offset: 0xac
	// Line 950, Address: 0x102c440, Func Offset: 0xc0
	// Line 951, Address: 0x102c44c, Func Offset: 0xcc
	// Line 952, Address: 0x102c454, Func Offset: 0xd4
	// Line 953, Address: 0x102c47c, Func Offset: 0xfc
	// Line 954, Address: 0x102c4a4, Func Offset: 0x124
	// Line 955, Address: 0x102c4b0, Func Offset: 0x130
	// Line 957, Address: 0x102c4b8, Func Offset: 0x138
	// Line 958, Address: 0x102c4e0, Func Offset: 0x160
	// Line 959, Address: 0x102c4f0, Func Offset: 0x170
	// Line 960, Address: 0x102c4f8, Func Offset: 0x178
	// Line 965, Address: 0x102c500, Func Offset: 0x180
	// Line 966, Address: 0x102c52c, Func Offset: 0x1ac
	// Line 967, Address: 0x102c538, Func Offset: 0x1b8
	// Line 968, Address: 0x102c540, Func Offset: 0x1c0
	// Line 969, Address: 0x102c550, Func Offset: 0x1d0
	// Line 970, Address: 0x102c558, Func Offset: 0x1d8
	// Line 975, Address: 0x102c560, Func Offset: 0x1e0
	// Line 976, Address: 0x102c568, Func Offset: 0x1e8
	// Func End, Address: 0x102c57c, Func Offset: 0x1fc
}

// 
// Start address: 0x102c580
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 990, Address: 0x102c580, Func Offset: 0
	// Line 993, Address: 0x102c590, Func Offset: 0x10
	// Line 994, Address: 0x102c5ac, Func Offset: 0x2c
	// Line 995, Address: 0x102c5c4, Func Offset: 0x44
	// Line 996, Address: 0x102c5e8, Func Offset: 0x68
	// Line 997, Address: 0x102c5f0, Func Offset: 0x70
	// Line 1001, Address: 0x102c600, Func Offset: 0x80
	// Line 1002, Address: 0x102c614, Func Offset: 0x94
	// Line 1003, Address: 0x102c620, Func Offset: 0xa0
	// Line 1006, Address: 0x102c628, Func Offset: 0xa8
	// Line 1007, Address: 0x102c640, Func Offset: 0xc0
	// Line 1008, Address: 0x102c64c, Func Offset: 0xcc
	// Line 1009, Address: 0x102c66c, Func Offset: 0xec
	// Line 1010, Address: 0x102c678, Func Offset: 0xf8
	// Line 1011, Address: 0x102c680, Func Offset: 0x100
	// Line 1013, Address: 0x102c68c, Func Offset: 0x10c
	// Line 1015, Address: 0x102c694, Func Offset: 0x114
	// Line 1016, Address: 0x102c6ac, Func Offset: 0x12c
	// Line 1017, Address: 0x102c6b8, Func Offset: 0x138
	// Line 1018, Address: 0x102c6d8, Func Offset: 0x158
	// Line 1019, Address: 0x102c6e4, Func Offset: 0x164
	// Line 1020, Address: 0x102c6ec, Func Offset: 0x16c
	// Line 1023, Address: 0x102c6f8, Func Offset: 0x178
	// Func End, Address: 0x102c70c, Func Offset: 0x18c
}

// 
// Start address: 0x102c710
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1037, Address: 0x102c710, Func Offset: 0
	// Line 1040, Address: 0x102c720, Func Offset: 0x10
	// Line 1042, Address: 0x102c72c, Func Offset: 0x1c
	// Line 1043, Address: 0x102c744, Func Offset: 0x34
	// Line 1044, Address: 0x102c750, Func Offset: 0x40
	// Line 1045, Address: 0x102c770, Func Offset: 0x60
	// Line 1046, Address: 0x102c77c, Func Offset: 0x6c
	// Line 1047, Address: 0x102c784, Func Offset: 0x74
	// Line 1049, Address: 0x102c790, Func Offset: 0x80
	// Func End, Address: 0x102c7a4, Func Offset: 0x94
}

// 
// Start address: 0x102c7b0
void sv_move_sub(short yPos)
{
	_anon2 lSpd;
	// Line 1064, Address: 0x102c7b0, Func Offset: 0
	// Line 1067, Address: 0x102c7bc, Func Offset: 0xc
	// Line 1068, Address: 0x102c7e8, Func Offset: 0x38
	// Line 1069, Address: 0x102c7fc, Func Offset: 0x4c
	// Line 1070, Address: 0x102c808, Func Offset: 0x58
	// Line 1071, Address: 0x102c810, Func Offset: 0x60
	// Line 1073, Address: 0x102c81c, Func Offset: 0x6c
	// Func End, Address: 0x102c82c, Func Offset: 0x7c
}

// 
// Start address: 0x102c830
void sv_move_sub2()
{
	// Line 1077, Address: 0x102c830, Func Offset: 0
	// Line 1078, Address: 0x102c838, Func Offset: 0x8
	// Line 1080, Address: 0x102c840, Func Offset: 0x10
	// Line 1081, Address: 0x102c84c, Func Offset: 0x1c
	// Func End, Address: 0x102c85c, Func Offset: 0x2c
}

// 
// Start address: 0x102c860
void sv_move_minus(short speed)
{
	_anon2 lSpd;
	// Line 1095, Address: 0x102c860, Func Offset: 0
	// Line 1098, Address: 0x102c86c, Func Offset: 0xc
	// Line 1099, Address: 0x102c890, Func Offset: 0x30
	// Line 1100, Address: 0x102c8b4, Func Offset: 0x54
	// Line 1101, Address: 0x102c8c0, Func Offset: 0x60
	// Func End, Address: 0x102c8d0, Func Offset: 0x70
}

// 
// Start address: 0x102c8d0
void scrv_up_ch(_anon2 lSpd)
{
	// Line 1116, Address: 0x102c8d0, Func Offset: 0
	// Line 1117, Address: 0x102c8dc, Func Offset: 0xc
	// Line 1118, Address: 0x102c904, Func Offset: 0x34
	// Line 1120, Address: 0x102c91c, Func Offset: 0x4c
	// Line 1121, Address: 0x102c928, Func Offset: 0x58
	// Line 1122, Address: 0x102c930, Func Offset: 0x60
	// Line 1123, Address: 0x102c93c, Func Offset: 0x6c
	// Line 1124, Address: 0x102c950, Func Offset: 0x80
	// Line 1125, Address: 0x102c964, Func Offset: 0x94
	// Line 1129, Address: 0x102c978, Func Offset: 0xa8
	// Line 1130, Address: 0x102c984, Func Offset: 0xb4
	// Func End, Address: 0x102c994, Func Offset: 0xc4
}

// 
// Start address: 0x102c9a0
void sv_move_plus(short sSpd)
{
	_anon2 lSpd;
	// Line 1144, Address: 0x102c9a0, Func Offset: 0
	// Line 1147, Address: 0x102c9ac, Func Offset: 0xc
	// Line 1148, Address: 0x102c9cc, Func Offset: 0x2c
	// Line 1149, Address: 0x102c9f0, Func Offset: 0x50
	// Line 1150, Address: 0x102c9fc, Func Offset: 0x5c
	// Func End, Address: 0x102ca0c, Func Offset: 0x6c
}

// 
// Start address: 0x102ca10
void scrv_down_ch(_anon2 lSpd)
{
	// Line 1165, Address: 0x102ca10, Func Offset: 0
	// Line 1166, Address: 0x102ca1c, Func Offset: 0xc
	// Line 1167, Address: 0x102ca44, Func Offset: 0x34
	// Line 1169, Address: 0x102ca5c, Func Offset: 0x4c
	// Line 1170, Address: 0x102ca68, Func Offset: 0x58
	// Line 1171, Address: 0x102ca70, Func Offset: 0x60
	// Line 1172, Address: 0x102ca7c, Func Offset: 0x6c
	// Line 1173, Address: 0x102ca90, Func Offset: 0x80
	// Line 1174, Address: 0x102caa4, Func Offset: 0x94
	// Line 1178, Address: 0x102cab8, Func Offset: 0xa8
	// Line 1179, Address: 0x102cac4, Func Offset: 0xb4
	// Func End, Address: 0x102cad4, Func Offset: 0xc4
}

// 
// Start address: 0x102cae0
void scrv_move(_anon2 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1196, Address: 0x102cae0, Func Offset: 0
	// Line 1200, Address: 0x102caf0, Func Offset: 0x10
	// Line 1201, Address: 0x102cb00, Func Offset: 0x20
	// Line 1202, Address: 0x102cb24, Func Offset: 0x44
	// Line 1203, Address: 0x102cb38, Func Offset: 0x58
	// Line 1204, Address: 0x102cb50, Func Offset: 0x70
	// Line 1206, Address: 0x102cb5c, Func Offset: 0x7c
	// Line 1208, Address: 0x102cb68, Func Offset: 0x88
	// Line 1209, Address: 0x102cba4, Func Offset: 0xc4
	// Line 1210, Address: 0x102cbac, Func Offset: 0xcc
	// Line 1211, Address: 0x102cbc0, Func Offset: 0xe0
	// Line 1212, Address: 0x102cbec, Func Offset: 0x10c
	// Line 1213, Address: 0x102cbfc, Func Offset: 0x11c
	// Line 1214, Address: 0x102cc10, Func Offset: 0x130
	// Line 1215, Address: 0x102cc18, Func Offset: 0x138
	// Line 1220, Address: 0x102cc2c, Func Offset: 0x14c
	// Func End, Address: 0x102cc40, Func Offset: 0x160
}

// 
// Start address: 0x102cc40
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
	// Line 1238, Address: 0x102cc40, Func Offset: 0
	// Line 1247, Address: 0x102cc60, Func Offset: 0x20
	// Line 1248, Address: 0x102cc64, Func Offset: 0x24
	// Line 1249, Address: 0x102cc70, Func Offset: 0x30
	// Line 1250, Address: 0x102cc7c, Func Offset: 0x3c
	// Line 1251, Address: 0x102cc84, Func Offset: 0x44
	// Line 1252, Address: 0x102cc8c, Func Offset: 0x4c
	// Line 1254, Address: 0x102cca0, Func Offset: 0x60
	// Line 1255, Address: 0x102cca4, Func Offset: 0x64
	// Line 1256, Address: 0x102ccb0, Func Offset: 0x70
	// Line 1257, Address: 0x102ccbc, Func Offset: 0x7c
	// Line 1258, Address: 0x102ccc4, Func Offset: 0x84
	// Line 1260, Address: 0x102cccc, Func Offset: 0x8c
	// Line 1261, Address: 0x102ccd8, Func Offset: 0x98
	// Line 1262, Address: 0x102ccec, Func Offset: 0xac
	// Line 1264, Address: 0x102ccf8, Func Offset: 0xb8
	// Line 1265, Address: 0x102cd00, Func Offset: 0xc0
	// Line 1267, Address: 0x102cd08, Func Offset: 0xc8
	// Line 1269, Address: 0x102cd28, Func Offset: 0xe8
	// Line 1275, Address: 0x102cd54, Func Offset: 0x114
	// Line 1276, Address: 0x102cd68, Func Offset: 0x128
	// Line 1278, Address: 0x102cd74, Func Offset: 0x134
	// Line 1279, Address: 0x102cd7c, Func Offset: 0x13c
	// Line 1280, Address: 0x102cd84, Func Offset: 0x144
	// Line 1282, Address: 0x102cda4, Func Offset: 0x164
	// Line 1288, Address: 0x102cdd0, Func Offset: 0x190
	// Line 1289, Address: 0x102cde4, Func Offset: 0x1a4
	// Line 1291, Address: 0x102cdf0, Func Offset: 0x1b0
	// Line 1292, Address: 0x102cdf8, Func Offset: 0x1b8
	// Line 1293, Address: 0x102ce00, Func Offset: 0x1c0
	// Line 1295, Address: 0x102ce20, Func Offset: 0x1e0
	// Line 1301, Address: 0x102ce4c, Func Offset: 0x20c
	// Line 1302, Address: 0x102ce60, Func Offset: 0x220
	// Line 1304, Address: 0x102ce6c, Func Offset: 0x22c
	// Line 1305, Address: 0x102ce74, Func Offset: 0x234
	// Line 1306, Address: 0x102ce7c, Func Offset: 0x23c
	// Line 1308, Address: 0x102ce9c, Func Offset: 0x25c
	// Line 1317, Address: 0x102cec8, Func Offset: 0x288
	// Func End, Address: 0x102cef0, Func Offset: 0x2b0
}

// 
// Start address: 0x102cef0
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
	// Line 1334, Address: 0x102cef0, Func Offset: 0
	// Line 1345, Address: 0x102cf1c, Func Offset: 0x2c
	// Line 1347, Address: 0x102cf24, Func Offset: 0x34
	// Line 1348, Address: 0x102cf3c, Func Offset: 0x4c
	// Line 1349, Address: 0x102cf50, Func Offset: 0x60
	// Line 1351, Address: 0x102cf58, Func Offset: 0x68
	// Line 1353, Address: 0x102cf6c, Func Offset: 0x7c
	// Line 1354, Address: 0x102cf84, Func Offset: 0x94
	// Line 1355, Address: 0x102cf98, Func Offset: 0xa8
	// Line 1356, Address: 0x102cfa0, Func Offset: 0xb0
	// Line 1358, Address: 0x102cfa8, Func Offset: 0xb8
	// Line 1359, Address: 0x102cfbc, Func Offset: 0xcc
	// Line 1364, Address: 0x102cfc4, Func Offset: 0xd4
	// Line 1365, Address: 0x102d014, Func Offset: 0x124
	// Line 1366, Address: 0x102d01c, Func Offset: 0x12c
	// Line 1372, Address: 0x102d03c, Func Offset: 0x14c
	// Line 1373, Address: 0x102d05c, Func Offset: 0x16c
	// Line 1374, Address: 0x102d080, Func Offset: 0x190
	// Line 1375, Address: 0x102d08c, Func Offset: 0x19c
	// Line 1376, Address: 0x102d094, Func Offset: 0x1a4
	// Line 1378, Address: 0x102d0b4, Func Offset: 0x1c4
	// Line 1382, Address: 0x102d0e0, Func Offset: 0x1f0
	// Line 1385, Address: 0x102d0e8, Func Offset: 0x1f8
	// Line 1386, Address: 0x102d0ec, Func Offset: 0x1fc
	// Line 1390, Address: 0x102d10c, Func Offset: 0x21c
	// Line 1397, Address: 0x102d138, Func Offset: 0x248
	// Line 1404, Address: 0x102d14c, Func Offset: 0x25c
	// Line 1405, Address: 0x102d154, Func Offset: 0x264
	// Line 1406, Address: 0x102d15c, Func Offset: 0x26c
	// Line 1407, Address: 0x102d174, Func Offset: 0x284
	// Line 1408, Address: 0x102d194, Func Offset: 0x2a4
	// Line 1412, Address: 0x102d19c, Func Offset: 0x2ac
	// Line 1414, Address: 0x102d1cc, Func Offset: 0x2dc
	// Line 1415, Address: 0x102d1d8, Func Offset: 0x2e8
	// Line 1419, Address: 0x102d1e8, Func Offset: 0x2f8
	// Line 1420, Address: 0x102d1f4, Func Offset: 0x304
	// Line 1421, Address: 0x102d214, Func Offset: 0x324
	// Line 1422, Address: 0x102d24c, Func Offset: 0x35c
	// Line 1423, Address: 0x102d26c, Func Offset: 0x37c
	// Line 1425, Address: 0x102d290, Func Offset: 0x3a0
	// Line 1428, Address: 0x102d2b4, Func Offset: 0x3c4
	// Line 1430, Address: 0x102d2d4, Func Offset: 0x3e4
	// Line 1432, Address: 0x102d2e8, Func Offset: 0x3f8
	// Line 1433, Address: 0x102d2f4, Func Offset: 0x404
	// Line 1434, Address: 0x102d304, Func Offset: 0x414
	// Line 1436, Address: 0x102d30c, Func Offset: 0x41c
	// Func End, Address: 0x102d334, Func Offset: 0x444
}

// 
// Start address: 0x102d340
void scrollwrtc()
{
	// Line 1442, Address: 0x102d340, Func Offset: 0
	// Func End, Address: 0x102d348, Func Offset: 0x8
}

// 
// Start address: 0x102d350
void scrollwrtz()
{
	// Line 1447, Address: 0x102d350, Func Offset: 0
	// Func End, Address: 0x102d358, Func Offset: 0x8
}

// 
// Start address: 0x102d360
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1465, Address: 0x102d360, Func Offset: 0
	// Line 1478, Address: 0x102d388, Func Offset: 0x28
	// Line 1481, Address: 0x102d3a8, Func Offset: 0x48
	// Line 1482, Address: 0x102d3bc, Func Offset: 0x5c
	// Line 1483, Address: 0x102d3d0, Func Offset: 0x70
	// Line 1484, Address: 0x102d3e4, Func Offset: 0x84
	// Line 1486, Address: 0x102d3f8, Func Offset: 0x98
	// Line 1487, Address: 0x102d404, Func Offset: 0xa4
	// Line 1488, Address: 0x102d418, Func Offset: 0xb8
	// Func End, Address: 0x102d428, Func Offset: 0xc8
}

// 
// Start address: 0x102d430
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1492, Address: 0x102d430, Func Offset: 0
	// Line 1496, Address: 0x102d458, Func Offset: 0x28
	// Line 1499, Address: 0x102d478, Func Offset: 0x48
	// Line 1500, Address: 0x102d48c, Func Offset: 0x5c
	// Line 1501, Address: 0x102d4a0, Func Offset: 0x70
	// Line 1502, Address: 0x102d4b4, Func Offset: 0x84
	// Line 1504, Address: 0x102d4c8, Func Offset: 0x98
	// Line 1505, Address: 0x102d4d4, Func Offset: 0xa4
	// Line 1506, Address: 0x102d4e8, Func Offset: 0xb8
	// Func End, Address: 0x102d4f8, Func Offset: 0xc8
}

// 
// Start address: 0x102d500
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1526, Address: 0x102d500, Func Offset: 0
	// Line 1530, Address: 0x102d528, Func Offset: 0x28
	// Line 1533, Address: 0x102d548, Func Offset: 0x48
	// Line 1534, Address: 0x102d55c, Func Offset: 0x5c
	// Line 1535, Address: 0x102d56c, Func Offset: 0x6c
	// Line 1536, Address: 0x102d580, Func Offset: 0x80
	// Line 1538, Address: 0x102d590, Func Offset: 0x90
	// Line 1539, Address: 0x102d59c, Func Offset: 0x9c
	// Line 1540, Address: 0x102d5b0, Func Offset: 0xb0
	// Func End, Address: 0x102d5c0, Func Offset: 0xc0
}

// 
// Start address: 0x102d5c0
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
	// Line 1559, Address: 0x102d5c0, Func Offset: 0
	// Line 1565, Address: 0x102d5f4, Func Offset: 0x34
	// Line 1567, Address: 0x102d604, Func Offset: 0x44
	// Line 1568, Address: 0x102d608, Func Offset: 0x48
	// Line 1569, Address: 0x102d610, Func Offset: 0x50
	// Line 1571, Address: 0x102d620, Func Offset: 0x60
	// Line 1573, Address: 0x102d624, Func Offset: 0x64
	// Line 1574, Address: 0x102d62c, Func Offset: 0x6c
	// Line 1577, Address: 0x102d634, Func Offset: 0x74
	// Line 1578, Address: 0x102d63c, Func Offset: 0x7c
	// Line 1579, Address: 0x102d648, Func Offset: 0x88
	// Line 1581, Address: 0x102d654, Func Offset: 0x94
	// Line 1582, Address: 0x102d65c, Func Offset: 0x9c
	// Line 1583, Address: 0x102d664, Func Offset: 0xa4
	// Line 1584, Address: 0x102d66c, Func Offset: 0xac
	// Line 1586, Address: 0x102d678, Func Offset: 0xb8
	// Line 1587, Address: 0x102d680, Func Offset: 0xc0
	// Line 1588, Address: 0x102d688, Func Offset: 0xc8
	// Line 1589, Address: 0x102d690, Func Offset: 0xd0
	// Line 1591, Address: 0x102d69c, Func Offset: 0xdc
	// Line 1592, Address: 0x102d6a4, Func Offset: 0xe4
	// Line 1593, Address: 0x102d6ac, Func Offset: 0xec
	// Line 1596, Address: 0x102d6b4, Func Offset: 0xf4
	// Line 1597, Address: 0x102d6bc, Func Offset: 0xfc
	// Line 1600, Address: 0x102d6c4, Func Offset: 0x104
	// Line 1601, Address: 0x102d708, Func Offset: 0x148
	// Line 1602, Address: 0x102d74c, Func Offset: 0x18c
	// Line 1603, Address: 0x102d790, Func Offset: 0x1d0
	// Line 1605, Address: 0x102d7d4, Func Offset: 0x214
	// Func End, Address: 0x102d804, Func Offset: 0x244
}

// 
// Start address: 0x102d810
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1622, Address: 0x102d810, Func Offset: 0
	// Line 1623, Address: 0x102d830, Func Offset: 0x20
	// Line 1624, Address: 0x102d850, Func Offset: 0x40
	// Func End, Address: 0x102d860, Func Offset: 0x50
}

// 
// Start address: 0x102d860
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1626, Address: 0x102d860, Func Offset: 0
	// Line 1627, Address: 0x102d880, Func Offset: 0x20
	// Line 1628, Address: 0x102d884, Func Offset: 0x24
	// Line 1629, Address: 0x102d8a4, Func Offset: 0x44
	// Func End, Address: 0x102d8b4, Func Offset: 0x54
}

// 
// Start address: 0x102d8c0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1636, Address: 0x102d8c0, Func Offset: 0
	// Line 1642, Address: 0x102d8f0, Func Offset: 0x30
	// Line 1643, Address: 0x102d900, Func Offset: 0x40
	// Line 1649, Address: 0x102d910, Func Offset: 0x50
	// Line 1650, Address: 0x102d92c, Func Offset: 0x6c
	// Line 1651, Address: 0x102d930, Func Offset: 0x70
	// Line 1652, Address: 0x102d94c, Func Offset: 0x8c
	// Line 1653, Address: 0x102d950, Func Offset: 0x90
	// Line 1654, Address: 0x102d970, Func Offset: 0xb0
	// Line 1655, Address: 0x102d978, Func Offset: 0xb8
	// Line 1656, Address: 0x102d998, Func Offset: 0xd8
	// Line 1657, Address: 0x102d9a0, Func Offset: 0xe0
	// Line 1658, Address: 0x102d9e8, Func Offset: 0x128
	// Line 1660, Address: 0x102d9f4, Func Offset: 0x134
	// Line 1662, Address: 0x102da10, Func Offset: 0x150
	// Line 1667, Address: 0x102da18, Func Offset: 0x158
	// Line 1668, Address: 0x102da24, Func Offset: 0x164
	// Line 1671, Address: 0x102da30, Func Offset: 0x170
	// Line 1672, Address: 0x102da38, Func Offset: 0x178
	// Line 1673, Address: 0x102da58, Func Offset: 0x198
	// Line 1674, Address: 0x102da74, Func Offset: 0x1b4
	// Line 1675, Address: 0x102da7c, Func Offset: 0x1bc
	// Line 1676, Address: 0x102da9c, Func Offset: 0x1dc
	// Line 1678, Address: 0x102dab8, Func Offset: 0x1f8
	// Line 1679, Address: 0x102dac0, Func Offset: 0x200
	// Line 1680, Address: 0x102dac8, Func Offset: 0x208
	// Line 1681, Address: 0x102dad4, Func Offset: 0x214
	// Line 1682, Address: 0x102daec, Func Offset: 0x22c
	// Line 1684, Address: 0x102dafc, Func Offset: 0x23c
	// Line 1687, Address: 0x102db08, Func Offset: 0x248
	// Line 1688, Address: 0x102db10, Func Offset: 0x250
	// Line 1689, Address: 0x102db14, Func Offset: 0x254
	// Func End, Address: 0x102db34, Func Offset: 0x274
}

// 
// Start address: 0x102db40
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1709, Address: 0x102db40, Func Offset: 0
	// Line 1717, Address: 0x102db68, Func Offset: 0x28
	// Line 1718, Address: 0x102dbcc, Func Offset: 0x8c
	// Line 1724, Address: 0x102dbd4, Func Offset: 0x94
	// Line 1725, Address: 0x102dbdc, Func Offset: 0x9c
	// Line 1726, Address: 0x102dbfc, Func Offset: 0xbc
	// Line 1727, Address: 0x102dc18, Func Offset: 0xd8
	// Line 1728, Address: 0x102dc20, Func Offset: 0xe0
	// Line 1729, Address: 0x102dc40, Func Offset: 0x100
	// Line 1732, Address: 0x102dc5c, Func Offset: 0x11c
	// Line 1733, Address: 0x102dc64, Func Offset: 0x124
	// Line 1734, Address: 0x102dc6c, Func Offset: 0x12c
	// Line 1735, Address: 0x102dc78, Func Offset: 0x138
	// Line 1736, Address: 0x102dc90, Func Offset: 0x150
	// Line 1737, Address: 0x102dc98, Func Offset: 0x158
	// Line 1742, Address: 0x102dca8, Func Offset: 0x168
	// Line 1745, Address: 0x102dcb4, Func Offset: 0x174
	// Line 1746, Address: 0x102dcbc, Func Offset: 0x17c
	// Line 1747, Address: 0x102dcc0, Func Offset: 0x180
	// Func End, Address: 0x102dcdc, Func Offset: 0x19c
}

// 
// Start address: 0x102dce0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1761, Address: 0x102dce0, Func Offset: 0
	// Line 1768, Address: 0x102dcfc, Func Offset: 0x1c
	// Line 1769, Address: 0x102dd00, Func Offset: 0x20
	// Line 1770, Address: 0x102dd08, Func Offset: 0x28
	// Line 1771, Address: 0x102dd2c, Func Offset: 0x4c
	// Line 1772, Address: 0x102dd38, Func Offset: 0x58
	// Line 1773, Address: 0x102dd50, Func Offset: 0x70
	// Line 1774, Address: 0x102dd64, Func Offset: 0x84
	// Line 1779, Address: 0x102dd7c, Func Offset: 0x9c
	// Func End, Address: 0x102dd94, Func Offset: 0xb4
}

// 
// Start address: 0x102dda0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1793, Address: 0x102dda0, Func Offset: 0
	// Line 1794, Address: 0x102ddac, Func Offset: 0xc
	// Line 1795, Address: 0x102ddd8, Func Offset: 0x38
	// Line 1796, Address: 0x102de24, Func Offset: 0x84
	// Line 1797, Address: 0x102de50, Func Offset: 0xb0
	// Line 1799, Address: 0x102de9c, Func Offset: 0xfc
	// Line 1805, Address: 0x102dea8, Func Offset: 0x108
	// Line 1806, Address: 0x102deac, Func Offset: 0x10c
	// Func End, Address: 0x102deb8, Func Offset: 0x118
}

// 
// Start address: 0x102dec0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1823, Address: 0x102dec0, Func Offset: 0
	// Line 1824, Address: 0x102dedc, Func Offset: 0x1c
	// Line 1826, Address: 0x102def8, Func Offset: 0x38
	// Func End, Address: 0x102df08, Func Offset: 0x48
}

// 
// Start address: 0x102df10
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1828, Address: 0x102df10, Func Offset: 0
	// Line 1829, Address: 0x102df2c, Func Offset: 0x1c
	// Line 1830, Address: 0x102df30, Func Offset: 0x20
	// Line 1832, Address: 0x102df4c, Func Offset: 0x3c
	// Func End, Address: 0x102df5c, Func Offset: 0x4c
}

// 
// Start address: 0x102df60
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1834, Address: 0x102df60, Func Offset: 0
	// Line 1835, Address: 0x102df74, Func Offset: 0x14
	// Line 1837, Address: 0x102df90, Func Offset: 0x30
	// Func End, Address: 0x102dfa0, Func Offset: 0x40
}

// 
// Start address: 0x102dfa0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1839, Address: 0x102dfa0, Func Offset: 0
	// Line 1840, Address: 0x102dfbc, Func Offset: 0x1c
	// Line 1842, Address: 0x102dfd8, Func Offset: 0x38
	// Func End, Address: 0x102dfe8, Func Offset: 0x48
}

// 
// Start address: 0x102dff0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1844, Address: 0x102dff0, Func Offset: 0
	// Line 1845, Address: 0x102e008, Func Offset: 0x18
	// Line 1846, Address: 0x102e018, Func Offset: 0x28
	// Line 1847, Address: 0x102e028, Func Offset: 0x38
	// Line 1848, Address: 0x102e034, Func Offset: 0x44
	// Line 1850, Address: 0x102e040, Func Offset: 0x50
	// Line 1851, Address: 0x102e06c, Func Offset: 0x7c
	// Line 1854, Address: 0x102e098, Func Offset: 0xa8
	// Func End, Address: 0x102e0a4, Func Offset: 0xb4
}

// 
// Start address: 0x102e0b0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1870, Address: 0x102e0b0, Func Offset: 0
	// Line 1877, Address: 0x102e0c8, Func Offset: 0x18
	// Line 1878, Address: 0x102e0d4, Func Offset: 0x24
	// Line 1879, Address: 0x102e0e0, Func Offset: 0x30
	// Line 1880, Address: 0x102e0e8, Func Offset: 0x38
	// Line 1881, Address: 0x102e0ec, Func Offset: 0x3c
	// Line 1885, Address: 0x102e104, Func Offset: 0x54
	// Line 1886, Address: 0x102e10c, Func Offset: 0x5c
	// Line 1887, Address: 0x102e110, Func Offset: 0x60
	// Line 1889, Address: 0x102e120, Func Offset: 0x70
	// Func End, Address: 0x102e140, Func Offset: 0x90
}

// 
// Start address: 0x102e140
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1892, Address: 0x102e140, Func Offset: 0
	// Line 1893, Address: 0x102e158, Func Offset: 0x18
	// Line 1894, Address: 0x102e178, Func Offset: 0x38
	// Func End, Address: 0x102e188, Func Offset: 0x48
}

// 
// Start address: 0x102e190
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1899, Address: 0x102e190, Func Offset: 0
	// Line 1903, Address: 0x102e1b0, Func Offset: 0x20
	// Line 1906, Address: 0x102e1cc, Func Offset: 0x3c
	// Line 1910, Address: 0x102e1f4, Func Offset: 0x64
	// Line 1911, Address: 0x102e200, Func Offset: 0x70
	// Line 1913, Address: 0x102e228, Func Offset: 0x98
	// Func End, Address: 0x102e238, Func Offset: 0xa8
}

// 
// Start address: 0x102e240
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1919, Address: 0x102e240, Func Offset: 0
	// Line 1922, Address: 0x102e25c, Func Offset: 0x1c
	// Line 1923, Address: 0x102e264, Func Offset: 0x24
	// Line 1926, Address: 0x102e26c, Func Offset: 0x2c
	// Line 1928, Address: 0x102e290, Func Offset: 0x50
	// Line 1929, Address: 0x102e2b0, Func Offset: 0x70
	// Line 1930, Address: 0x102e2b8, Func Offset: 0x78
	// Line 1931, Address: 0x102e2dc, Func Offset: 0x9c
	// Func End, Address: 0x102e2f8, Func Offset: 0xb8
}

// 
// Start address: 0x102e300
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1957, Address: 0x102e300, Func Offset: 0
	// Line 1962, Address: 0x102e328, Func Offset: 0x28
	// Line 1963, Address: 0x102e338, Func Offset: 0x38
	// Line 1965, Address: 0x102e354, Func Offset: 0x54
	// Line 1966, Address: 0x102e378, Func Offset: 0x78
	// Line 1967, Address: 0x102e3a0, Func Offset: 0xa0
	// Line 1968, Address: 0x102e3ac, Func Offset: 0xac
	// Line 1969, Address: 0x102e3b4, Func Offset: 0xb4
	// Line 1972, Address: 0x102e3d0, Func Offset: 0xd0
	// Line 1976, Address: 0x102e3f8, Func Offset: 0xf8
	// Line 1979, Address: 0x102e400, Func Offset: 0x100
	// Line 1980, Address: 0x102e404, Func Offset: 0x104
	// Line 1984, Address: 0x102e420, Func Offset: 0x120
	// Line 1991, Address: 0x102e448, Func Offset: 0x148
	// Func End, Address: 0x102e464, Func Offset: 0x164
}

// 
// Start address: 0x102e470
void mapinit()
{
	// Line 2002, Address: 0x102e470, Func Offset: 0
	// Line 2004, Address: 0x102e478, Func Offset: 0x8
	// Line 2005, Address: 0x102e48c, Func Offset: 0x1c
	// Line 2008, Address: 0x102e4a0, Func Offset: 0x30
	// Line 2009, Address: 0x102e4c0, Func Offset: 0x50
	// Func End, Address: 0x102e4d0, Func Offset: 0x60
}

// 
// Start address: 0x102e4d0
void mapset()
{
	// Line 2014, Address: 0x102e4d0, Func Offset: 0
	// Func End, Address: 0x102e4d8, Func Offset: 0x8
}

// 
// Start address: 0x102e4e0
void divdevset()
{
	// Line 2018, Address: 0x102e4e0, Func Offset: 0
	// Func End, Address: 0x102e4e8, Func Offset: 0x8
}

// 
// Start address: 0x102e4f0
void enecginit()
{
	// Line 2022, Address: 0x102e4f0, Func Offset: 0
	// Func End, Address: 0x102e4f8, Func Offset: 0x8
}

