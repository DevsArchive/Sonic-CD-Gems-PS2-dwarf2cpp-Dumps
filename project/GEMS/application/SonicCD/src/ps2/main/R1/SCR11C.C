typedef union _anon0;
typedef struct tagPOINT;
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

typedef int(*type_5)(int, int, int, int, int);
typedef void(*type_9)(void*, unsigned char, int);

typedef short type_0[256];
typedef unsigned short type_1[16];
typedef unsigned char type_2[4];
typedef _anon13 type_3[128];
typedef int type_4[4];
typedef unsigned char type_6[33];
typedef _anon11 type_7[20];
typedef _anon11 type_8[0];
typedef unsigned short type_10[6];
typedef _anon0* type_11[8];
typedef unsigned short type_12[4];
typedef unsigned short type_13[4][1024];
typedef unsigned char type_14[2];
typedef unsigned char type_15[64];
typedef unsigned char type_16[64][8];
typedef unsigned short type_17[2];
typedef unsigned char type_18[22];
typedef _anon0* type_19[8];
typedef unsigned char type_20[64];
typedef unsigned char type_21[64][8];

union _anon0
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct tagPOINT
{
	int x;
	int y;
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

unsigned char z11cwrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon13 actwk[128];
unsigned char main_play;
short scra_hline;
short scra_vline;
unsigned char scra_v_count;
unsigned char scra_h_count;
short scra_h_keep;
short scralim_left;
short scralim_n_down;
short scralim_down;
short scralim_n_up;
short scralim_up;
short scralim_n_right;
short scralim_right;
short scralim_n_left;
short scrar_no;
unsigned char scrh_flag;
unsigned char scrv_flag;
_anon9 scr_die;
_anon4 scr_timer;
_anon9 zone_flag;
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
_anon0 scrb_h_posit;
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
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
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon9 scrflagaw;
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
_anon9 scrflagbw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon1 mapinittbl;

void enecginit();
void divdevset();
_anon13* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
void scroll_h();
void scrh_move();
void right_check(unsigned short wD0);
void left_check(unsigned short wD0);
void scroll_v();
void sv_move_main(short wD0);
void sv_move_main1(short wD0);
void sv_move_main2(short wD0);
void sv_move_sub2();
void sv_move_sub(short wD0);
void sv_move_minus(short wD1);
void scrv_up_ch(_anon0 lD1);
void sv_move_plus(short wD1);
void scrv_down_ch(_anon0 lD1);
void scrv_move(_anon0 lD1);
void scrollb_hv(int lD4, int lD5);
void scrollc_h(int lD4, int flagc);
void scrollz_h(int lD4, int flagz);
void scrollwrtadva();
void scrollwrt();
void scrollwrtb(unsigned char* pScrFlag, unsigned char* pMapWk, int VramBase);
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
void mapwrt_z11c(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();

// 
// Start address: 0x1023ed0
void enecginit()
{
	// Line 131, Address: 0x1023ed0, Func Offset: 0
	// Func End, Address: 0x1023ed8, Func Offset: 0x8
}

// 
// Start address: 0x1023ee0
void divdevset()
{
	// Line 136, Address: 0x1023ee0, Func Offset: 0
	// Func End, Address: 0x1023ee8, Func Offset: 0x8
}

// 
// Start address: 0x1023ef0
_anon13* main_chk()
{
	// Line 150, Address: 0x1023ef0, Func Offset: 0
	// Line 151, Address: 0x1023f10, Func Offset: 0x20
	// Line 152, Address: 0x1023f18, Func Offset: 0x28
	// Func End, Address: 0x1023f20, Func Offset: 0x30
}

// 
// Start address: 0x1023f20
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 163, Address: 0x1023f20, Func Offset: 0
	// Line 164, Address: 0x1023f2c, Func Offset: 0xc
	// Line 169, Address: 0x1023f60, Func Offset: 0x40
	// Line 171, Address: 0x1023fa8, Func Offset: 0x88
	// Line 172, Address: 0x1023fac, Func Offset: 0x8c
	// Line 173, Address: 0x1023fc8, Func Offset: 0xa8
	// Line 174, Address: 0x1023fdc, Func Offset: 0xbc
	// Line 175, Address: 0x1023ff8, Func Offset: 0xd8
	// Line 176, Address: 0x102400c, Func Offset: 0xec
	// Line 177, Address: 0x1024028, Func Offset: 0x108
	// Line 178, Address: 0x102403c, Func Offset: 0x11c
	// Line 179, Address: 0x1024058, Func Offset: 0x138
	// Line 180, Address: 0x102406c, Func Offset: 0x14c
	// Line 182, Address: 0x1024088, Func Offset: 0x168
	// Line 183, Address: 0x10240ac, Func Offset: 0x18c
	// Line 184, Address: 0x10240b8, Func Offset: 0x198
	// Line 186, Address: 0x10240c4, Func Offset: 0x1a4
	// Line 187, Address: 0x10240e0, Func Offset: 0x1c0
	// Line 189, Address: 0x10240ec, Func Offset: 0x1cc
	// Line 190, Address: 0x10240f4, Func Offset: 0x1d4
	// Func End, Address: 0x1024108, Func Offset: 0x1e8
}

// 
// Start address: 0x1024110
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 201, Address: 0x1024110, Func Offset: 0
	// Line 202, Address: 0x1024124, Func Offset: 0x14
	// Line 203, Address: 0x1024140, Func Offset: 0x30
	// Line 213, Address: 0x1024174, Func Offset: 0x64
	// Line 218, Address: 0x10241a0, Func Offset: 0x90
	// Line 219, Address: 0x10241b0, Func Offset: 0xa0
	// Line 220, Address: 0x10241b8, Func Offset: 0xa8
	// Line 221, Address: 0x10241c8, Func Offset: 0xb8
	// Line 222, Address: 0x10241d8, Func Offset: 0xc8
	// Line 223, Address: 0x10241ec, Func Offset: 0xdc
	// Line 225, Address: 0x10241f4, Func Offset: 0xe4
	// Line 226, Address: 0x1024214, Func Offset: 0x104
	// Line 227, Address: 0x1024248, Func Offset: 0x138
	// Line 228, Address: 0x1024280, Func Offset: 0x170
	// Line 230, Address: 0x1024288, Func Offset: 0x178
	// Line 231, Address: 0x10242b8, Func Offset: 0x1a8
	// Line 235, Address: 0x10242ec, Func Offset: 0x1dc
	// Line 236, Address: 0x1024314, Func Offset: 0x204
	// Line 237, Address: 0x1024318, Func Offset: 0x208
	// Line 238, Address: 0x102434c, Func Offset: 0x23c
	// Line 240, Address: 0x1024354, Func Offset: 0x244
	// Line 241, Address: 0x102437c, Func Offset: 0x26c
	// Line 242, Address: 0x1024380, Func Offset: 0x270
	// Line 243, Address: 0x10243b4, Func Offset: 0x2a4
	// Line 245, Address: 0x10243bc, Func Offset: 0x2ac
	// Line 247, Address: 0x10243cc, Func Offset: 0x2bc
	// Line 248, Address: 0x10243d0, Func Offset: 0x2c0
	// Line 249, Address: 0x10243e8, Func Offset: 0x2d8
	// Line 250, Address: 0x1024400, Func Offset: 0x2f0
	// Line 251, Address: 0x1024418, Func Offset: 0x308
	// Line 252, Address: 0x1024430, Func Offset: 0x320
	// Func End, Address: 0x102444c, Func Offset: 0x33c
}

// 
// Start address: 0x1024450
void scrbinit(short xWk, short yWk)
{
	_anon0 lYwk;
	// Line 264, Address: 0x1024450, Func Offset: 0
	// Line 267, Address: 0x1024460, Func Offset: 0x10
	// Line 268, Address: 0x1024468, Func Offset: 0x18
	// Line 270, Address: 0x102446c, Func Offset: 0x1c
	// Line 271, Address: 0x102447c, Func Offset: 0x2c
	// Line 272, Address: 0x1024488, Func Offset: 0x38
	// Line 273, Address: 0x10244c8, Func Offset: 0x78
	// Line 275, Address: 0x1024508, Func Offset: 0xb8
	// Line 276, Address: 0x1024540, Func Offset: 0xf0
	// Line 277, Address: 0x1024578, Func Offset: 0x128
	// Line 279, Address: 0x10245b8, Func Offset: 0x168
	// Line 280, Address: 0x10245d8, Func Offset: 0x188
	// Func End, Address: 0x10245e8, Func Offset: 0x198
}

// 
// Start address: 0x10245f0
void scroll()
{
	short* pHScrollWork;
	_anon0* pHScrollBuff;
	int i;
	unsigned short wD0;
	unsigned short wD1;
	unsigned short wD3;
	_anon0 lD2;
	_anon0 lD3;
	int lD4;
	int lD5;
	short* psHscr;
	int scaddtbl[4];
	// Line 291, Address: 0x10245f0, Func Offset: 0
	// Line 303, Address: 0x102461c, Func Offset: 0x2c
	// Line 305, Address: 0x102462c, Func Offset: 0x3c
	// Line 307, Address: 0x1024658, Func Offset: 0x68
	// Line 309, Address: 0x1024660, Func Offset: 0x70
	// Line 310, Address: 0x1024668, Func Offset: 0x78
	// Line 312, Address: 0x1024670, Func Offset: 0x80
	// Line 313, Address: 0x1024680, Func Offset: 0x90
	// Line 315, Address: 0x1024690, Func Offset: 0xa0
	// Line 316, Address: 0x10246b0, Func Offset: 0xc0
	// Line 318, Address: 0x10246d0, Func Offset: 0xe0
	// Line 319, Address: 0x10246ec, Func Offset: 0xfc
	// Line 320, Address: 0x1024704, Func Offset: 0x114
	// Line 322, Address: 0x1024714, Func Offset: 0x124
	// Line 323, Address: 0x1024724, Func Offset: 0x134
	// Line 324, Address: 0x1024734, Func Offset: 0x144
	// Line 326, Address: 0x1024744, Func Offset: 0x154
	// Line 327, Address: 0x102477c, Func Offset: 0x18c
	// Line 329, Address: 0x1024790, Func Offset: 0x1a0
	// Line 330, Address: 0x10247a4, Func Offset: 0x1b4
	// Line 331, Address: 0x10247ac, Func Offset: 0x1bc
	// Line 332, Address: 0x10247b4, Func Offset: 0x1c4
	// Line 333, Address: 0x10247d4, Func Offset: 0x1e4
	// Line 334, Address: 0x10247dc, Func Offset: 0x1ec
	// Line 335, Address: 0x10247e4, Func Offset: 0x1f4
	// Line 336, Address: 0x10247e8, Func Offset: 0x1f8
	// Line 338, Address: 0x10247f8, Func Offset: 0x208
	// Line 340, Address: 0x1024800, Func Offset: 0x210
	// Line 341, Address: 0x1024858, Func Offset: 0x268
	// Line 342, Address: 0x10248b0, Func Offset: 0x2c0
	// Line 343, Address: 0x1024908, Func Offset: 0x318
	// Line 345, Address: 0x1024960, Func Offset: 0x370
	// Line 346, Address: 0x10249a4, Func Offset: 0x3b4
	// Line 347, Address: 0x10249e8, Func Offset: 0x3f8
	// Line 349, Address: 0x1024a2c, Func Offset: 0x43c
	// Line 351, Address: 0x1024a34, Func Offset: 0x444
	// Line 352, Address: 0x1024a38, Func Offset: 0x448
	// Line 353, Address: 0x1024a60, Func Offset: 0x470
	// Line 354, Address: 0x1024a74, Func Offset: 0x484
	// Line 355, Address: 0x1024a88, Func Offset: 0x498
	// Line 356, Address: 0x1024a94, Func Offset: 0x4a4
	// Line 357, Address: 0x1024a9c, Func Offset: 0x4ac
	// Line 359, Address: 0x1024acc, Func Offset: 0x4dc
	// Line 360, Address: 0x1024aec, Func Offset: 0x4fc
	// Line 362, Address: 0x1024afc, Func Offset: 0x50c
	// Line 363, Address: 0x1024b10, Func Offset: 0x520
	// Line 366, Address: 0x1024b18, Func Offset: 0x528
	// Line 367, Address: 0x1024b28, Func Offset: 0x538
	// Line 369, Address: 0x1024b2c, Func Offset: 0x53c
	// Line 370, Address: 0x1024b34, Func Offset: 0x544
	// Line 371, Address: 0x1024b38, Func Offset: 0x548
	// Line 372, Address: 0x1024b3c, Func Offset: 0x54c
	// Line 373, Address: 0x1024b40, Func Offset: 0x550
	// Line 374, Address: 0x1024b4c, Func Offset: 0x55c
	// Line 377, Address: 0x1024b74, Func Offset: 0x584
	// Line 378, Address: 0x1024bbc, Func Offset: 0x5cc
	// Line 379, Address: 0x1024bc0, Func Offset: 0x5d0
	// Line 380, Address: 0x1024bc4, Func Offset: 0x5d4
	// Line 382, Address: 0x1024bd4, Func Offset: 0x5e4
	// Line 383, Address: 0x1024bd8, Func Offset: 0x5e8
	// Line 384, Address: 0x1024bf4, Func Offset: 0x604
	// Line 385, Address: 0x1024bf8, Func Offset: 0x608
	// Line 386, Address: 0x1024c08, Func Offset: 0x618
	// Line 387, Address: 0x1024c30, Func Offset: 0x640
	// Func End, Address: 0x1024c64, Func Offset: 0x674
}

// 
// Start address: 0x1024c70
void scroll_h()
{
	unsigned short wD4;
	// Line 398, Address: 0x1024c70, Func Offset: 0
	// Line 401, Address: 0x1024c7c, Func Offset: 0xc
	// Line 402, Address: 0x1024c88, Func Offset: 0x18
	// Line 403, Address: 0x1024c90, Func Offset: 0x20
	// Line 404, Address: 0x1024cc4, Func Offset: 0x54
	// Line 405, Address: 0x1024cd8, Func Offset: 0x68
	// Line 406, Address: 0x1024d20, Func Offset: 0xb0
	// Line 408, Address: 0x1024d34, Func Offset: 0xc4
	// Func End, Address: 0x1024d48, Func Offset: 0xd8
}

// 
// Start address: 0x1024d50
void scrh_move()
{
	unsigned short wD0;
	// Line 411, Address: 0x1024d50, Func Offset: 0
	// Line 414, Address: 0x1024d5c, Func Offset: 0xc
	// Line 415, Address: 0x1024d9c, Func Offset: 0x4c
	// Line 416, Address: 0x1024db4, Func Offset: 0x64
	// Line 417, Address: 0x1024de0, Func Offset: 0x90
	// Line 418, Address: 0x1024dec, Func Offset: 0x9c
	// Func End, Address: 0x1024e00, Func Offset: 0xb0
}

// 
// Start address: 0x1024e00
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 421, Address: 0x1024e00, Func Offset: 0
	// Line 424, Address: 0x1024e0c, Func Offset: 0xc
	// Line 425, Address: 0x1024e34, Func Offset: 0x34
	// Line 426, Address: 0x1024e4c, Func Offset: 0x4c
	// Line 427, Address: 0x1024e88, Func Offset: 0x88
	// Line 428, Address: 0x1024eac, Func Offset: 0xac
	// Line 429, Address: 0x1024edc, Func Offset: 0xdc
	// Line 430, Address: 0x1024ee8, Func Offset: 0xe8
	// Line 431, Address: 0x1024ef0, Func Offset: 0xf0
	// Func End, Address: 0x1024f00, Func Offset: 0x100
}

// 
// Start address: 0x1024f00
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 434, Address: 0x1024f00, Func Offset: 0
	// Line 437, Address: 0x1024f0c, Func Offset: 0xc
	// Line 438, Address: 0x1024f34, Func Offset: 0x34
	// Line 439, Address: 0x1024f4c, Func Offset: 0x4c
	// Line 440, Address: 0x1024f88, Func Offset: 0x88
	// Line 441, Address: 0x1024fac, Func Offset: 0xac
	// Line 442, Address: 0x1024fdc, Func Offset: 0xdc
	// Line 443, Address: 0x1024fe8, Func Offset: 0xe8
	// Line 444, Address: 0x1024ff0, Func Offset: 0xf0
	// Func End, Address: 0x1025000, Func Offset: 0x100
}

// 
// Start address: 0x1025000
void scroll_v()
{
	short wD0;
	// Line 455, Address: 0x1025000, Func Offset: 0
	// Line 458, Address: 0x102500c, Func Offset: 0xc
	// Line 459, Address: 0x1025040, Func Offset: 0x40
	// Line 460, Address: 0x1025064, Func Offset: 0x64
	// Line 461, Address: 0x102507c, Func Offset: 0x7c
	// Line 462, Address: 0x1025088, Func Offset: 0x88
	// Line 463, Address: 0x10250ac, Func Offset: 0xac
	// Line 464, Address: 0x10250c0, Func Offset: 0xc0
	// Line 465, Address: 0x10250cc, Func Offset: 0xcc
	// Line 467, Address: 0x10250d4, Func Offset: 0xd4
	// Line 468, Address: 0x10250fc, Func Offset: 0xfc
	// Line 469, Address: 0x1025124, Func Offset: 0x124
	// Line 470, Address: 0x1025130, Func Offset: 0x130
	// Line 473, Address: 0x1025138, Func Offset: 0x138
	// Line 474, Address: 0x1025160, Func Offset: 0x160
	// Line 475, Address: 0x1025170, Func Offset: 0x170
	// Line 476, Address: 0x1025178, Func Offset: 0x178
	// Line 481, Address: 0x1025180, Func Offset: 0x180
	// Line 482, Address: 0x10251ac, Func Offset: 0x1ac
	// Line 483, Address: 0x10251b8, Func Offset: 0x1b8
	// Line 485, Address: 0x10251c0, Func Offset: 0x1c0
	// Line 486, Address: 0x10251d0, Func Offset: 0x1d0
	// Line 487, Address: 0x10251d8, Func Offset: 0x1d8
	// Line 490, Address: 0x10251e0, Func Offset: 0x1e0
	// Line 491, Address: 0x10251e8, Func Offset: 0x1e8
	// Func End, Address: 0x10251fc, Func Offset: 0x1fc
}

// 
// Start address: 0x1025200
void sv_move_main(short wD0)
{
	short wD1;
	// Line 494, Address: 0x1025200, Func Offset: 0
	// Line 497, Address: 0x1025210, Func Offset: 0x10
	// Line 499, Address: 0x1025240, Func Offset: 0x40
	// Line 500, Address: 0x1025250, Func Offset: 0x50
	// Line 501, Address: 0x102526c, Func Offset: 0x6c
	// Line 502, Address: 0x1025280, Func Offset: 0x80
	// Line 503, Address: 0x102528c, Func Offset: 0x8c
	// Line 505, Address: 0x1025294, Func Offset: 0x94
	// Line 506, Address: 0x10252c0, Func Offset: 0xc0
	// Line 507, Address: 0x10252ec, Func Offset: 0xec
	// Line 509, Address: 0x10252f8, Func Offset: 0xf8
	// Func End, Address: 0x102530c, Func Offset: 0x10c
}

// 
// Start address: 0x1025310
void sv_move_main1(short wD0)
{
	// Line 512, Address: 0x1025310, Func Offset: 0
	// Line 513, Address: 0x102531c, Func Offset: 0xc
	// Line 514, Address: 0x1025348, Func Offset: 0x38
	// Line 515, Address: 0x1025374, Func Offset: 0x64
	// Line 516, Address: 0x1025380, Func Offset: 0x70
	// Func End, Address: 0x1025390, Func Offset: 0x80
}

// 
// Start address: 0x1025390
void sv_move_main2(short wD0)
{
	// Line 519, Address: 0x1025390, Func Offset: 0
	// Line 520, Address: 0x102539c, Func Offset: 0xc
	// Line 521, Address: 0x10253c8, Func Offset: 0x38
	// Line 522, Address: 0x10253f4, Func Offset: 0x64
	// Line 523, Address: 0x1025400, Func Offset: 0x70
	// Func End, Address: 0x1025410, Func Offset: 0x80
}

// 
// Start address: 0x1025410
void sv_move_sub2()
{
	// Line 526, Address: 0x1025410, Func Offset: 0
	// Line 527, Address: 0x1025418, Func Offset: 0x8
	// Line 528, Address: 0x1025420, Func Offset: 0x10
	// Line 529, Address: 0x102542c, Func Offset: 0x1c
	// Func End, Address: 0x102543c, Func Offset: 0x2c
}

// 
// Start address: 0x1025440
void sv_move_sub(short wD0)
{
	_anon0 lD1;
	// Line 532, Address: 0x1025440, Func Offset: 0
	// Line 535, Address: 0x102544c, Func Offset: 0xc
	// Line 536, Address: 0x1025450, Func Offset: 0x10
	// Line 537, Address: 0x102547c, Func Offset: 0x3c
	// Line 538, Address: 0x10254a4, Func Offset: 0x64
	// Line 539, Address: 0x10254b0, Func Offset: 0x70
	// Func End, Address: 0x10254c0, Func Offset: 0x80
}

// 
// Start address: 0x10254c0
void sv_move_minus(short wD1)
{
	_anon0 lD1;
	short wk;
	// Line 542, Address: 0x10254c0, Func Offset: 0
	// Line 546, Address: 0x10254d0, Func Offset: 0x10
	// Line 548, Address: 0x10254f4, Func Offset: 0x34
	// Line 549, Address: 0x1025500, Func Offset: 0x40
	// Line 550, Address: 0x1025508, Func Offset: 0x48
	// Line 551, Address: 0x102550c, Func Offset: 0x4c
	// Line 552, Address: 0x1025518, Func Offset: 0x58
	// Func End, Address: 0x102552c, Func Offset: 0x6c
}

// 
// Start address: 0x1025530
void scrv_up_ch(_anon0 lD1)
{
	// Line 555, Address: 0x1025530, Func Offset: 0
	// Line 556, Address: 0x102553c, Func Offset: 0xc
	// Line 557, Address: 0x1025564, Func Offset: 0x34
	// Line 558, Address: 0x102557c, Func Offset: 0x4c
	// Line 559, Address: 0x1025588, Func Offset: 0x58
	// Line 561, Address: 0x1025590, Func Offset: 0x60
	// Line 562, Address: 0x102559c, Func Offset: 0x6c
	// Line 563, Address: 0x10255b0, Func Offset: 0x80
	// Line 564, Address: 0x10255c4, Func Offset: 0x94
	// Line 567, Address: 0x10255d8, Func Offset: 0xa8
	// Line 568, Address: 0x10255e4, Func Offset: 0xb4
	// Func End, Address: 0x10255f4, Func Offset: 0xc4
}

// 
// Start address: 0x1025600
void sv_move_plus(short wD1)
{
	_anon0 lD1;
	short wk;
	// Line 571, Address: 0x1025600, Func Offset: 0
	// Line 575, Address: 0x1025610, Func Offset: 0x10
	// Line 577, Address: 0x1025630, Func Offset: 0x30
	// Line 578, Address: 0x102563c, Func Offset: 0x3c
	// Line 579, Address: 0x1025644, Func Offset: 0x44
	// Line 580, Address: 0x1025648, Func Offset: 0x48
	// Line 581, Address: 0x1025654, Func Offset: 0x54
	// Func End, Address: 0x1025668, Func Offset: 0x68
}

// 
// Start address: 0x1025670
void scrv_down_ch(_anon0 lD1)
{
	// Line 584, Address: 0x1025670, Func Offset: 0
	// Line 585, Address: 0x102567c, Func Offset: 0xc
	// Line 586, Address: 0x10256a4, Func Offset: 0x34
	// Line 587, Address: 0x10256c8, Func Offset: 0x58
	// Line 588, Address: 0x10256d4, Func Offset: 0x64
	// Line 590, Address: 0x10256dc, Func Offset: 0x6c
	// Line 591, Address: 0x10256f0, Func Offset: 0x80
	// Line 592, Address: 0x1025704, Func Offset: 0x94
	// Line 595, Address: 0x1025718, Func Offset: 0xa8
	// Line 596, Address: 0x1025724, Func Offset: 0xb4
	// Func End, Address: 0x1025734, Func Offset: 0xc4
}

// 
// Start address: 0x1025740
void scrv_move(_anon0 lD1)
{
	short wD4;
	short wk;
	_anon6 dwk;
	// Line 599, Address: 0x1025740, Func Offset: 0
	// Line 603, Address: 0x1025750, Func Offset: 0x10
	// Line 605, Address: 0x1025760, Func Offset: 0x20
	// Line 606, Address: 0x102576c, Func Offset: 0x2c
	// Line 607, Address: 0x1025774, Func Offset: 0x34
	// Line 609, Address: 0x1025778, Func Offset: 0x38
	// Line 610, Address: 0x102578c, Func Offset: 0x4c
	// Line 611, Address: 0x10257a4, Func Offset: 0x64
	// Line 613, Address: 0x10257b0, Func Offset: 0x70
	// Line 615, Address: 0x10257bc, Func Offset: 0x7c
	// Line 616, Address: 0x10257f8, Func Offset: 0xb8
	// Line 617, Address: 0x1025800, Func Offset: 0xc0
	// Line 618, Address: 0x1025814, Func Offset: 0xd4
	// Line 619, Address: 0x1025840, Func Offset: 0x100
	// Line 620, Address: 0x102586c, Func Offset: 0x12c
	// Line 622, Address: 0x1025880, Func Offset: 0x140
	// Func End, Address: 0x1025894, Func Offset: 0x154
}

// 
// Start address: 0x10258a0
void scrollb_hv(int lD4, int lD5)
{
	int lD0;
	int lD1;
	_anon0 lD2;
	// Line 634, Address: 0x10258a0, Func Offset: 0
	// Line 638, Address: 0x10258b4, Func Offset: 0x14
	// Line 639, Address: 0x10258bc, Func Offset: 0x1c
	// Line 640, Address: 0x10258d0, Func Offset: 0x30
	// Line 641, Address: 0x1025900, Func Offset: 0x60
	// Line 642, Address: 0x1025914, Func Offset: 0x74
	// Line 643, Address: 0x102593c, Func Offset: 0x9c
	// Line 645, Address: 0x1025950, Func Offset: 0xb0
	// Line 646, Address: 0x1025958, Func Offset: 0xb8
	// Line 647, Address: 0x102596c, Func Offset: 0xcc
	// Line 648, Address: 0x102599c, Func Offset: 0xfc
	// Line 649, Address: 0x10259b0, Func Offset: 0x110
	// Line 650, Address: 0x10259d8, Func Offset: 0x138
	// Line 652, Address: 0x10259ec, Func Offset: 0x14c
	// Func End, Address: 0x1025a00, Func Offset: 0x160
}

// 
// Start address: 0x1025a00
void scrollc_h(int lD4, int flagc)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 726, Address: 0x1025a00, Func Offset: 0
	// Line 730, Address: 0x1025a10, Func Offset: 0x10
	// Line 731, Address: 0x1025a1c, Func Offset: 0x1c
	// Line 732, Address: 0x1025a2c, Func Offset: 0x2c
	// Line 734, Address: 0x1025a38, Func Offset: 0x38
	// Line 735, Address: 0x1025a40, Func Offset: 0x40
	// Line 736, Address: 0x1025a48, Func Offset: 0x48
	// Line 738, Address: 0x1025a54, Func Offset: 0x54
	// Line 739, Address: 0x1025a60, Func Offset: 0x60
	// Line 740, Address: 0x1025a74, Func Offset: 0x74
	// Line 745, Address: 0x1025a80, Func Offset: 0x80
	// Line 746, Address: 0x1025a94, Func Offset: 0x94
	// Line 747, Address: 0x1025aa4, Func Offset: 0xa4
	// Line 748, Address: 0x1025adc, Func Offset: 0xdc
	// Line 750, Address: 0x1025afc, Func Offset: 0xfc
	// Func End, Address: 0x1025b0c, Func Offset: 0x10c
}

// 
// Start address: 0x1025b10
void scrollz_h(int lD4, int flagz)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 762, Address: 0x1025b10, Func Offset: 0
	// Line 766, Address: 0x1025b20, Func Offset: 0x10
	// Line 767, Address: 0x1025b2c, Func Offset: 0x1c
	// Line 768, Address: 0x1025b3c, Func Offset: 0x2c
	// Line 770, Address: 0x1025b48, Func Offset: 0x38
	// Line 771, Address: 0x1025b50, Func Offset: 0x40
	// Line 772, Address: 0x1025b58, Func Offset: 0x48
	// Line 774, Address: 0x1025b64, Func Offset: 0x54
	// Line 775, Address: 0x1025b70, Func Offset: 0x60
	// Line 776, Address: 0x1025b84, Func Offset: 0x74
	// Line 781, Address: 0x1025b90, Func Offset: 0x80
	// Line 782, Address: 0x1025ba4, Func Offset: 0x94
	// Line 783, Address: 0x1025bb4, Func Offset: 0xa4
	// Line 784, Address: 0x1025be4, Func Offset: 0xd4
	// Line 786, Address: 0x1025c04, Func Offset: 0xf4
	// Func End, Address: 0x1025c14, Func Offset: 0x104
}

// 
// Start address: 0x1025c20
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 797, Address: 0x1025c20, Func Offset: 0
	// Line 803, Address: 0x1025c3c, Func Offset: 0x1c
	// Line 804, Address: 0x1025c44, Func Offset: 0x24
	// Line 805, Address: 0x1025c50, Func Offset: 0x30
	// Line 806, Address: 0x1025c5c, Func Offset: 0x3c
	// Line 807, Address: 0x1025c64, Func Offset: 0x44
	// Line 808, Address: 0x1025c68, Func Offset: 0x48
	// Line 814, Address: 0x1025c7c, Func Offset: 0x5c
	// Func End, Address: 0x1025ca0, Func Offset: 0x80
}

// 
// Start address: 0x1025ca0
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
	// Line 825, Address: 0x1025ca0, Func Offset: 0
	// Line 834, Address: 0x1025cc0, Func Offset: 0x20
	// Line 835, Address: 0x1025cc8, Func Offset: 0x28
	// Line 836, Address: 0x1025cd4, Func Offset: 0x34
	// Line 837, Address: 0x1025ce0, Func Offset: 0x40
	// Line 838, Address: 0x1025ce8, Func Offset: 0x48
	// Line 839, Address: 0x1025cec, Func Offset: 0x4c
	// Line 851, Address: 0x1025d00, Func Offset: 0x60
	// Line 852, Address: 0x1025d08, Func Offset: 0x68
	// Line 853, Address: 0x1025d14, Func Offset: 0x74
	// Line 854, Address: 0x1025d20, Func Offset: 0x80
	// Line 855, Address: 0x1025d28, Func Offset: 0x88
	// Line 857, Address: 0x1025d2c, Func Offset: 0x8c
	// Line 858, Address: 0x1025d38, Func Offset: 0x98
	// Line 859, Address: 0x1025d4c, Func Offset: 0xac
	// Line 861, Address: 0x1025d58, Func Offset: 0xb8
	// Line 862, Address: 0x1025d60, Func Offset: 0xc0
	// Line 863, Address: 0x1025d68, Func Offset: 0xc8
	// Line 864, Address: 0x1025d88, Func Offset: 0xe8
	// Line 866, Address: 0x1025db4, Func Offset: 0x114
	// Line 867, Address: 0x1025dc8, Func Offset: 0x128
	// Line 869, Address: 0x1025dd4, Func Offset: 0x134
	// Line 870, Address: 0x1025ddc, Func Offset: 0x13c
	// Line 871, Address: 0x1025de4, Func Offset: 0x144
	// Line 872, Address: 0x1025e04, Func Offset: 0x164
	// Line 874, Address: 0x1025e30, Func Offset: 0x190
	// Line 875, Address: 0x1025e44, Func Offset: 0x1a4
	// Line 877, Address: 0x1025e50, Func Offset: 0x1b0
	// Line 878, Address: 0x1025e58, Func Offset: 0x1b8
	// Line 879, Address: 0x1025e60, Func Offset: 0x1c0
	// Line 880, Address: 0x1025e80, Func Offset: 0x1e0
	// Line 882, Address: 0x1025eac, Func Offset: 0x20c
	// Line 883, Address: 0x1025ec0, Func Offset: 0x220
	// Line 885, Address: 0x1025ecc, Func Offset: 0x22c
	// Line 886, Address: 0x1025ed4, Func Offset: 0x234
	// Line 887, Address: 0x1025edc, Func Offset: 0x23c
	// Line 888, Address: 0x1025efc, Func Offset: 0x25c
	// Line 891, Address: 0x1025f28, Func Offset: 0x288
	// Func End, Address: 0x1025f50, Func Offset: 0x2b0
}

// 
// Start address: 0x1025f50
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
	// Line 905, Address: 0x1025f50, Func Offset: 0
	// Line 916, Address: 0x1025f7c, Func Offset: 0x2c
	// Line 918, Address: 0x1025f84, Func Offset: 0x34
	// Line 919, Address: 0x1025f9c, Func Offset: 0x4c
	// Line 920, Address: 0x1025fb0, Func Offset: 0x60
	// Line 922, Address: 0x1025fb8, Func Offset: 0x68
	// Line 924, Address: 0x1025fcc, Func Offset: 0x7c
	// Line 925, Address: 0x1025fe4, Func Offset: 0x94
	// Line 926, Address: 0x1025ff8, Func Offset: 0xa8
	// Line 927, Address: 0x1026000, Func Offset: 0xb0
	// Line 929, Address: 0x1026008, Func Offset: 0xb8
	// Line 930, Address: 0x102601c, Func Offset: 0xcc
	// Line 935, Address: 0x1026024, Func Offset: 0xd4
	// Line 936, Address: 0x1026074, Func Offset: 0x124
	// Line 937, Address: 0x102607c, Func Offset: 0x12c
	// Line 938, Address: 0x102609c, Func Offset: 0x14c
	// Line 939, Address: 0x10260bc, Func Offset: 0x16c
	// Line 940, Address: 0x10260e0, Func Offset: 0x190
	// Line 941, Address: 0x10260ec, Func Offset: 0x19c
	// Line 942, Address: 0x10260f4, Func Offset: 0x1a4
	// Line 944, Address: 0x1026114, Func Offset: 0x1c4
	// Line 948, Address: 0x1026140, Func Offset: 0x1f0
	// Line 951, Address: 0x1026148, Func Offset: 0x1f8
	// Line 952, Address: 0x102614c, Func Offset: 0x1fc
	// Line 956, Address: 0x102616c, Func Offset: 0x21c
	// Line 963, Address: 0x1026198, Func Offset: 0x248
	// Line 970, Address: 0x10261ac, Func Offset: 0x25c
	// Line 971, Address: 0x10261b4, Func Offset: 0x264
	// Line 972, Address: 0x10261bc, Func Offset: 0x26c
	// Line 973, Address: 0x10261d4, Func Offset: 0x284
	// Line 974, Address: 0x10261f4, Func Offset: 0x2a4
	// Line 978, Address: 0x10261fc, Func Offset: 0x2ac
	// Line 980, Address: 0x102622c, Func Offset: 0x2dc
	// Line 981, Address: 0x1026238, Func Offset: 0x2e8
	// Line 985, Address: 0x1026248, Func Offset: 0x2f8
	// Line 986, Address: 0x1026254, Func Offset: 0x304
	// Line 987, Address: 0x1026274, Func Offset: 0x324
	// Line 988, Address: 0x1026280, Func Offset: 0x330
	// Line 989, Address: 0x10262ac, Func Offset: 0x35c
	// Line 990, Address: 0x10262cc, Func Offset: 0x37c
	// Line 992, Address: 0x10262f0, Func Offset: 0x3a0
	// Line 995, Address: 0x1026314, Func Offset: 0x3c4
	// Line 997, Address: 0x1026334, Func Offset: 0x3e4
	// Line 1000, Address: 0x1026348, Func Offset: 0x3f8
	// Line 1001, Address: 0x1026354, Func Offset: 0x404
	// Line 1002, Address: 0x1026364, Func Offset: 0x414
	// Line 1004, Address: 0x102636c, Func Offset: 0x41c
	// Func End, Address: 0x1026394, Func Offset: 0x444
}

// 
// Start address: 0x10263a0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1031, Address: 0x10263a0, Func Offset: 0
	// Line 1044, Address: 0x10263c8, Func Offset: 0x28
	// Line 1047, Address: 0x10263e8, Func Offset: 0x48
	// Line 1048, Address: 0x10263fc, Func Offset: 0x5c
	// Line 1049, Address: 0x1026410, Func Offset: 0x70
	// Line 1050, Address: 0x1026424, Func Offset: 0x84
	// Line 1052, Address: 0x1026438, Func Offset: 0x98
	// Line 1053, Address: 0x1026444, Func Offset: 0xa4
	// Line 1054, Address: 0x1026458, Func Offset: 0xb8
	// Func End, Address: 0x1026468, Func Offset: 0xc8
}

// 
// Start address: 0x1026470
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1058, Address: 0x1026470, Func Offset: 0
	// Line 1062, Address: 0x1026498, Func Offset: 0x28
	// Line 1065, Address: 0x10264b8, Func Offset: 0x48
	// Line 1066, Address: 0x10264cc, Func Offset: 0x5c
	// Line 1067, Address: 0x10264e0, Func Offset: 0x70
	// Line 1068, Address: 0x10264f4, Func Offset: 0x84
	// Line 1070, Address: 0x1026508, Func Offset: 0x98
	// Line 1071, Address: 0x1026514, Func Offset: 0xa4
	// Line 1072, Address: 0x1026528, Func Offset: 0xb8
	// Func End, Address: 0x1026538, Func Offset: 0xc8
}

// 
// Start address: 0x1026540
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1088, Address: 0x1026540, Func Offset: 0
	// Line 1092, Address: 0x1026568, Func Offset: 0x28
	// Line 1093, Address: 0x1026588, Func Offset: 0x48
	// Line 1094, Address: 0x102659c, Func Offset: 0x5c
	// Line 1095, Address: 0x10265ac, Func Offset: 0x6c
	// Line 1096, Address: 0x10265d0, Func Offset: 0x90
	// Line 1097, Address: 0x10265dc, Func Offset: 0x9c
	// Line 1098, Address: 0x10265f0, Func Offset: 0xb0
	// Func End, Address: 0x1026600, Func Offset: 0xc0
}

// 
// Start address: 0x1026600
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
	// Line 1116, Address: 0x1026600, Func Offset: 0
	// Line 1122, Address: 0x1026634, Func Offset: 0x34
	// Line 1123, Address: 0x1026650, Func Offset: 0x50
	// Line 1124, Address: 0x1026664, Func Offset: 0x64
	// Line 1125, Address: 0x102666c, Func Offset: 0x6c
	// Line 1127, Address: 0x1026674, Func Offset: 0x74
	// Line 1128, Address: 0x102667c, Func Offset: 0x7c
	// Line 1129, Address: 0x1026688, Func Offset: 0x88
	// Line 1130, Address: 0x1026694, Func Offset: 0x94
	// Line 1131, Address: 0x1026698, Func Offset: 0x98
	// Line 1132, Address: 0x102669c, Func Offset: 0x9c
	// Line 1133, Address: 0x10266a0, Func Offset: 0xa0
	// Line 1134, Address: 0x10266a4, Func Offset: 0xa4
	// Line 1135, Address: 0x10266ac, Func Offset: 0xac
	// Line 1136, Address: 0x10266b8, Func Offset: 0xb8
	// Line 1137, Address: 0x10266bc, Func Offset: 0xbc
	// Line 1138, Address: 0x10266c0, Func Offset: 0xc0
	// Line 1139, Address: 0x10266c4, Func Offset: 0xc4
	// Line 1140, Address: 0x10266c8, Func Offset: 0xc8
	// Line 1141, Address: 0x10266d0, Func Offset: 0xd0
	// Line 1142, Address: 0x10266dc, Func Offset: 0xdc
	// Line 1143, Address: 0x10266e0, Func Offset: 0xe0
	// Line 1144, Address: 0x10266e4, Func Offset: 0xe4
	// Line 1145, Address: 0x10266e8, Func Offset: 0xe8
	// Line 1146, Address: 0x10266ec, Func Offset: 0xec
	// Line 1148, Address: 0x10266f4, Func Offset: 0xf4
	// Line 1149, Address: 0x10266f8, Func Offset: 0xf8
	// Line 1150, Address: 0x10266fc, Func Offset: 0xfc
	// Line 1151, Address: 0x1026700, Func Offset: 0x100
	// Line 1154, Address: 0x1026704, Func Offset: 0x104
	// Line 1155, Address: 0x1026748, Func Offset: 0x148
	// Line 1156, Address: 0x102678c, Func Offset: 0x18c
	// Line 1157, Address: 0x10267d0, Func Offset: 0x1d0
	// Line 1158, Address: 0x1026814, Func Offset: 0x214
	// Func End, Address: 0x1026844, Func Offset: 0x244
}

// 
// Start address: 0x1026850
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1177, Address: 0x1026850, Func Offset: 0
	// Line 1178, Address: 0x1026870, Func Offset: 0x20
	// Line 1179, Address: 0x1026890, Func Offset: 0x40
	// Func End, Address: 0x10268a0, Func Offset: 0x50
}

// 
// Start address: 0x10268a0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1182, Address: 0x10268a0, Func Offset: 0
	// Line 1183, Address: 0x10268c0, Func Offset: 0x20
	// Line 1184, Address: 0x10268c4, Func Offset: 0x24
	// Line 1185, Address: 0x10268e4, Func Offset: 0x44
	// Func End, Address: 0x10268f4, Func Offset: 0x54
}

// 
// Start address: 0x1026900
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1188, Address: 0x1026900, Func Offset: 0
	// Line 1194, Address: 0x1026930, Func Offset: 0x30
	// Line 1195, Address: 0x1026940, Func Offset: 0x40
	// Line 1198, Address: 0x1026950, Func Offset: 0x50
	// Line 1199, Address: 0x1026970, Func Offset: 0x70
	// Line 1200, Address: 0x1026990, Func Offset: 0x90
	// Line 1201, Address: 0x10269b8, Func Offset: 0xb8
	// Line 1202, Address: 0x10269e0, Func Offset: 0xe0
	// Line 1203, Address: 0x1026a28, Func Offset: 0x128
	// Line 1205, Address: 0x1026a34, Func Offset: 0x134
	// Line 1207, Address: 0x1026a50, Func Offset: 0x150
	// Line 1208, Address: 0x1026a58, Func Offset: 0x158
	// Line 1209, Address: 0x1026a64, Func Offset: 0x164
	// Line 1211, Address: 0x1026a70, Func Offset: 0x170
	// Line 1212, Address: 0x1026a78, Func Offset: 0x178
	// Line 1213, Address: 0x1026a98, Func Offset: 0x198
	// Line 1214, Address: 0x1026ab4, Func Offset: 0x1b4
	// Line 1215, Address: 0x1026abc, Func Offset: 0x1bc
	// Line 1216, Address: 0x1026adc, Func Offset: 0x1dc
	// Line 1218, Address: 0x1026af8, Func Offset: 0x1f8
	// Line 1219, Address: 0x1026b00, Func Offset: 0x200
	// Line 1220, Address: 0x1026b08, Func Offset: 0x208
	// Line 1221, Address: 0x1026b14, Func Offset: 0x214
	// Line 1222, Address: 0x1026b2c, Func Offset: 0x22c
	// Line 1224, Address: 0x1026b3c, Func Offset: 0x23c
	// Line 1226, Address: 0x1026b48, Func Offset: 0x248
	// Line 1227, Address: 0x1026b50, Func Offset: 0x250
	// Line 1228, Address: 0x1026b54, Func Offset: 0x254
	// Func End, Address: 0x1026b74, Func Offset: 0x274
}

// 
// Start address: 0x1026b80
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1244, Address: 0x1026b80, Func Offset: 0
	// Line 1249, Address: 0x1026ba8, Func Offset: 0x28
	// Line 1250, Address: 0x1026c0c, Func Offset: 0x8c
	// Line 1251, Address: 0x1026c14, Func Offset: 0x94
	// Line 1252, Address: 0x1026c1c, Func Offset: 0x9c
	// Line 1253, Address: 0x1026c3c, Func Offset: 0xbc
	// Line 1254, Address: 0x1026c58, Func Offset: 0xd8
	// Line 1255, Address: 0x1026c60, Func Offset: 0xe0
	// Line 1256, Address: 0x1026c80, Func Offset: 0x100
	// Line 1258, Address: 0x1026c9c, Func Offset: 0x11c
	// Line 1259, Address: 0x1026ca4, Func Offset: 0x124
	// Line 1260, Address: 0x1026cac, Func Offset: 0x12c
	// Line 1261, Address: 0x1026cb8, Func Offset: 0x138
	// Line 1262, Address: 0x1026cd0, Func Offset: 0x150
	// Line 1263, Address: 0x1026cd8, Func Offset: 0x158
	// Line 1265, Address: 0x1026ce8, Func Offset: 0x168
	// Line 1267, Address: 0x1026cf4, Func Offset: 0x174
	// Line 1268, Address: 0x1026cfc, Func Offset: 0x17c
	// Line 1269, Address: 0x1026d00, Func Offset: 0x180
	// Func End, Address: 0x1026d1c, Func Offset: 0x19c
}

// 
// Start address: 0x1026d20
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1283, Address: 0x1026d20, Func Offset: 0
	// Line 1290, Address: 0x1026d3c, Func Offset: 0x1c
	// Line 1291, Address: 0x1026d40, Func Offset: 0x20
	// Line 1292, Address: 0x1026d48, Func Offset: 0x28
	// Line 1293, Address: 0x1026d6c, Func Offset: 0x4c
	// Line 1294, Address: 0x1026d78, Func Offset: 0x58
	// Line 1295, Address: 0x1026d90, Func Offset: 0x70
	// Line 1296, Address: 0x1026da4, Func Offset: 0x84
	// Line 1299, Address: 0x1026dbc, Func Offset: 0x9c
	// Func End, Address: 0x1026dd4, Func Offset: 0xb4
}

// 
// Start address: 0x1026de0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1311, Address: 0x1026de0, Func Offset: 0
	// Line 1312, Address: 0x1026dec, Func Offset: 0xc
	// Line 1313, Address: 0x1026e18, Func Offset: 0x38
	// Line 1314, Address: 0x1026e64, Func Offset: 0x84
	// Line 1315, Address: 0x1026e90, Func Offset: 0xb0
	// Line 1319, Address: 0x1026ee8, Func Offset: 0x108
	// Line 1320, Address: 0x1026eec, Func Offset: 0x10c
	// Func End, Address: 0x1026ef8, Func Offset: 0x118
}

// 
// Start address: 0x1026f00
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1335, Address: 0x1026f00, Func Offset: 0
	// Line 1336, Address: 0x1026f1c, Func Offset: 0x1c
	// Line 1337, Address: 0x1026f38, Func Offset: 0x38
	// Func End, Address: 0x1026f48, Func Offset: 0x48
}

// 
// Start address: 0x1026f50
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1340, Address: 0x1026f50, Func Offset: 0
	// Line 1341, Address: 0x1026f6c, Func Offset: 0x1c
	// Line 1342, Address: 0x1026f70, Func Offset: 0x20
	// Line 1343, Address: 0x1026f8c, Func Offset: 0x3c
	// Func End, Address: 0x1026f9c, Func Offset: 0x4c
}

// 
// Start address: 0x1026fa0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1346, Address: 0x1026fa0, Func Offset: 0
	// Line 1347, Address: 0x1026fb4, Func Offset: 0x14
	// Line 1348, Address: 0x1026fd0, Func Offset: 0x30
	// Func End, Address: 0x1026fe0, Func Offset: 0x40
}

// 
// Start address: 0x1026fe0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1351, Address: 0x1026fe0, Func Offset: 0
	// Line 1352, Address: 0x1026ffc, Func Offset: 0x1c
	// Line 1353, Address: 0x1027018, Func Offset: 0x38
	// Func End, Address: 0x1027028, Func Offset: 0x48
}

// 
// Start address: 0x1027030
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1356, Address: 0x1027030, Func Offset: 0
	// Line 1357, Address: 0x1027048, Func Offset: 0x18
	// Line 1358, Address: 0x1027058, Func Offset: 0x28
	// Line 1359, Address: 0x1027068, Func Offset: 0x38
	// Line 1360, Address: 0x1027074, Func Offset: 0x44
	// Line 1362, Address: 0x1027080, Func Offset: 0x50
	// Line 1363, Address: 0x10270ac, Func Offset: 0x7c
	// Line 1365, Address: 0x10270d8, Func Offset: 0xa8
	// Func End, Address: 0x10270e4, Func Offset: 0xb4
}

// 
// Start address: 0x10270f0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1379, Address: 0x10270f0, Func Offset: 0
	// Line 1384, Address: 0x1027108, Func Offset: 0x18
	// Line 1385, Address: 0x1027114, Func Offset: 0x24
	// Line 1386, Address: 0x1027120, Func Offset: 0x30
	// Line 1387, Address: 0x1027128, Func Offset: 0x38
	// Line 1388, Address: 0x102712c, Func Offset: 0x3c
	// Line 1392, Address: 0x1027144, Func Offset: 0x54
	// Line 1393, Address: 0x102714c, Func Offset: 0x5c
	// Line 1394, Address: 0x1027150, Func Offset: 0x60
	// Line 1395, Address: 0x1027160, Func Offset: 0x70
	// Func End, Address: 0x1027180, Func Offset: 0x90
}

// 
// Start address: 0x1027180
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1398, Address: 0x1027180, Func Offset: 0
	// Line 1399, Address: 0x1027198, Func Offset: 0x18
	// Line 1400, Address: 0x10271b8, Func Offset: 0x38
	// Func End, Address: 0x10271c8, Func Offset: 0x48
}

// 
// Start address: 0x10271d0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1403, Address: 0x10271d0, Func Offset: 0
	// Line 1407, Address: 0x10271f0, Func Offset: 0x20
	// Line 1408, Address: 0x102720c, Func Offset: 0x3c
	// Line 1409, Address: 0x1027234, Func Offset: 0x64
	// Line 1410, Address: 0x1027240, Func Offset: 0x70
	// Line 1411, Address: 0x1027268, Func Offset: 0x98
	// Func End, Address: 0x1027278, Func Offset: 0xa8
}

// 
// Start address: 0x1027280
void mapwrt_z11c(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1414, Address: 0x1027280, Func Offset: 0
	// Line 1417, Address: 0x102729c, Func Offset: 0x1c
	// Line 1418, Address: 0x10272a4, Func Offset: 0x24
	// Line 1421, Address: 0x10272ac, Func Offset: 0x2c
	// Line 1422, Address: 0x10272d0, Func Offset: 0x50
	// Line 1423, Address: 0x10272f0, Func Offset: 0x70
	// Line 1424, Address: 0x10272f8, Func Offset: 0x78
	// Line 1425, Address: 0x102731c, Func Offset: 0x9c
	// Func End, Address: 0x1027338, Func Offset: 0xb8
}

// 
// Start address: 0x1027340
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1441, Address: 0x1027340, Func Offset: 0
	// Line 1446, Address: 0x1027368, Func Offset: 0x28
	// Line 1447, Address: 0x1027378, Func Offset: 0x38
	// Line 1448, Address: 0x1027394, Func Offset: 0x54
	// Line 1449, Address: 0x10273b8, Func Offset: 0x78
	// Line 1450, Address: 0x10273e0, Func Offset: 0xa0
	// Line 1451, Address: 0x10273ec, Func Offset: 0xac
	// Line 1452, Address: 0x10273f4, Func Offset: 0xb4
	// Line 1453, Address: 0x1027410, Func Offset: 0xd0
	// Line 1454, Address: 0x1027438, Func Offset: 0xf8
	// Line 1456, Address: 0x1027440, Func Offset: 0x100
	// Line 1457, Address: 0x1027444, Func Offset: 0x104
	// Line 1458, Address: 0x1027460, Func Offset: 0x120
	// Line 1460, Address: 0x1027488, Func Offset: 0x148
	// Func End, Address: 0x10274a4, Func Offset: 0x164
}

// 
// Start address: 0x10274b0
void mapinit()
{
	// Line 1471, Address: 0x10274b0, Func Offset: 0
	// Line 1473, Address: 0x10274b8, Func Offset: 0x8
	// Line 1474, Address: 0x10274cc, Func Offset: 0x1c
	// Line 1476, Address: 0x10274e0, Func Offset: 0x30
	// Line 1477, Address: 0x10274f8, Func Offset: 0x48
	// Line 1478, Address: 0x1027518, Func Offset: 0x68
	// Func End, Address: 0x1027528, Func Offset: 0x78
}

