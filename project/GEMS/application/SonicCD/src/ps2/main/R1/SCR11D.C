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
typedef int type_3[4];
typedef _anon13 type_4[128];
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

unsigned char z11dwrttbl[33];
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
// Start address: 0x1025230
void enecginit()
{
	// Line 131, Address: 0x1025230, Func Offset: 0
	// Func End, Address: 0x1025238, Func Offset: 0x8
}

// 
// Start address: 0x1025240
void divdevset()
{
	// Line 136, Address: 0x1025240, Func Offset: 0
	// Func End, Address: 0x1025248, Func Offset: 0x8
}

// 
// Start address: 0x1025250
_anon13* main_chk()
{
	// Line 150, Address: 0x1025250, Func Offset: 0
	// Line 151, Address: 0x1025270, Func Offset: 0x20
	// Line 152, Address: 0x1025278, Func Offset: 0x28
	// Func End, Address: 0x1025280, Func Offset: 0x30
}

// 
// Start address: 0x1025280
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 163, Address: 0x1025280, Func Offset: 0
	// Line 164, Address: 0x102528c, Func Offset: 0xc
	// Line 169, Address: 0x10252c0, Func Offset: 0x40
	// Line 171, Address: 0x1025308, Func Offset: 0x88
	// Line 172, Address: 0x102530c, Func Offset: 0x8c
	// Line 173, Address: 0x1025328, Func Offset: 0xa8
	// Line 174, Address: 0x102533c, Func Offset: 0xbc
	// Line 175, Address: 0x1025358, Func Offset: 0xd8
	// Line 176, Address: 0x102536c, Func Offset: 0xec
	// Line 177, Address: 0x1025388, Func Offset: 0x108
	// Line 178, Address: 0x102539c, Func Offset: 0x11c
	// Line 179, Address: 0x10253b8, Func Offset: 0x138
	// Line 180, Address: 0x10253cc, Func Offset: 0x14c
	// Line 182, Address: 0x10253e8, Func Offset: 0x168
	// Line 183, Address: 0x102540c, Func Offset: 0x18c
	// Line 184, Address: 0x1025418, Func Offset: 0x198
	// Line 186, Address: 0x1025424, Func Offset: 0x1a4
	// Line 187, Address: 0x1025440, Func Offset: 0x1c0
	// Line 189, Address: 0x102544c, Func Offset: 0x1cc
	// Line 190, Address: 0x1025454, Func Offset: 0x1d4
	// Func End, Address: 0x1025468, Func Offset: 0x1e8
}

// 
// Start address: 0x1025470
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 201, Address: 0x1025470, Func Offset: 0
	// Line 202, Address: 0x1025484, Func Offset: 0x14
	// Line 203, Address: 0x10254a0, Func Offset: 0x30
	// Line 213, Address: 0x10254d4, Func Offset: 0x64
	// Line 218, Address: 0x1025500, Func Offset: 0x90
	// Line 219, Address: 0x1025510, Func Offset: 0xa0
	// Line 220, Address: 0x1025518, Func Offset: 0xa8
	// Line 221, Address: 0x1025528, Func Offset: 0xb8
	// Line 222, Address: 0x1025538, Func Offset: 0xc8
	// Line 223, Address: 0x102554c, Func Offset: 0xdc
	// Line 225, Address: 0x1025554, Func Offset: 0xe4
	// Line 226, Address: 0x1025574, Func Offset: 0x104
	// Line 227, Address: 0x10255a8, Func Offset: 0x138
	// Line 228, Address: 0x10255e0, Func Offset: 0x170
	// Line 230, Address: 0x10255e8, Func Offset: 0x178
	// Line 231, Address: 0x1025618, Func Offset: 0x1a8
	// Line 235, Address: 0x102564c, Func Offset: 0x1dc
	// Line 236, Address: 0x1025674, Func Offset: 0x204
	// Line 237, Address: 0x1025678, Func Offset: 0x208
	// Line 238, Address: 0x10256ac, Func Offset: 0x23c
	// Line 240, Address: 0x10256b4, Func Offset: 0x244
	// Line 241, Address: 0x10256dc, Func Offset: 0x26c
	// Line 242, Address: 0x10256e0, Func Offset: 0x270
	// Line 243, Address: 0x1025714, Func Offset: 0x2a4
	// Line 245, Address: 0x102571c, Func Offset: 0x2ac
	// Line 247, Address: 0x102572c, Func Offset: 0x2bc
	// Line 248, Address: 0x1025730, Func Offset: 0x2c0
	// Line 249, Address: 0x1025748, Func Offset: 0x2d8
	// Line 250, Address: 0x1025760, Func Offset: 0x2f0
	// Line 251, Address: 0x1025778, Func Offset: 0x308
	// Line 252, Address: 0x1025790, Func Offset: 0x320
	// Func End, Address: 0x10257ac, Func Offset: 0x33c
}

// 
// Start address: 0x10257b0
void scrbinit(short xWk, short yWk)
{
	_anon0 lYwk;
	// Line 264, Address: 0x10257b0, Func Offset: 0
	// Line 267, Address: 0x10257c0, Func Offset: 0x10
	// Line 268, Address: 0x10257c8, Func Offset: 0x18
	// Line 270, Address: 0x10257cc, Func Offset: 0x1c
	// Line 271, Address: 0x10257dc, Func Offset: 0x2c
	// Line 272, Address: 0x10257e8, Func Offset: 0x38
	// Line 273, Address: 0x1025828, Func Offset: 0x78
	// Line 275, Address: 0x1025868, Func Offset: 0xb8
	// Line 276, Address: 0x10258a0, Func Offset: 0xf0
	// Line 277, Address: 0x10258d8, Func Offset: 0x128
	// Line 279, Address: 0x1025918, Func Offset: 0x168
	// Line 280, Address: 0x1025938, Func Offset: 0x188
	// Func End, Address: 0x1025948, Func Offset: 0x198
}

// 
// Start address: 0x1025950
void scroll()
{
	short* pHScrollWork;
	_anon0* pHScrollBuff;
	int i;
	unsigned short wD0;
	unsigned short wD1;
	_anon0 lD2;
	int lD4;
	int lD5;
	short* psHscr;
	int scaddtbl[4];
	// Line 291, Address: 0x1025950, Func Offset: 0
	// Line 303, Address: 0x1025978, Func Offset: 0x28
	// Line 305, Address: 0x1025988, Func Offset: 0x38
	// Line 307, Address: 0x10259b4, Func Offset: 0x64
	// Line 309, Address: 0x10259bc, Func Offset: 0x6c
	// Line 310, Address: 0x10259c4, Func Offset: 0x74
	// Line 312, Address: 0x10259cc, Func Offset: 0x7c
	// Line 313, Address: 0x10259dc, Func Offset: 0x8c
	// Line 315, Address: 0x10259ec, Func Offset: 0x9c
	// Line 316, Address: 0x1025a0c, Func Offset: 0xbc
	// Line 318, Address: 0x1025a2c, Func Offset: 0xdc
	// Line 319, Address: 0x1025a48, Func Offset: 0xf8
	// Line 320, Address: 0x1025a60, Func Offset: 0x110
	// Line 322, Address: 0x1025a70, Func Offset: 0x120
	// Line 324, Address: 0x1025a98, Func Offset: 0x148
	// Line 325, Address: 0x1025ad0, Func Offset: 0x180
	// Line 327, Address: 0x1025ae4, Func Offset: 0x194
	// Line 328, Address: 0x1025af8, Func Offset: 0x1a8
	// Line 329, Address: 0x1025b00, Func Offset: 0x1b0
	// Line 330, Address: 0x1025b08, Func Offset: 0x1b8
	// Line 331, Address: 0x1025b28, Func Offset: 0x1d8
	// Line 332, Address: 0x1025b30, Func Offset: 0x1e0
	// Line 333, Address: 0x1025b38, Func Offset: 0x1e8
	// Line 334, Address: 0x1025b3c, Func Offset: 0x1ec
	// Line 336, Address: 0x1025b4c, Func Offset: 0x1fc
	// Line 338, Address: 0x1025b54, Func Offset: 0x204
	// Line 339, Address: 0x1025bac, Func Offset: 0x25c
	// Line 340, Address: 0x1025c04, Func Offset: 0x2b4
	// Line 342, Address: 0x1025c5c, Func Offset: 0x30c
	// Line 343, Address: 0x1025ca0, Func Offset: 0x350
	// Line 344, Address: 0x1025ce4, Func Offset: 0x394
	// Line 346, Address: 0x1025d28, Func Offset: 0x3d8
	// Line 348, Address: 0x1025d30, Func Offset: 0x3e0
	// Line 349, Address: 0x1025d58, Func Offset: 0x408
	// Line 350, Address: 0x1025d88, Func Offset: 0x438
	// Line 352, Address: 0x1025d90, Func Offset: 0x440
	// Line 353, Address: 0x1025db0, Func Offset: 0x460
	// Line 355, Address: 0x1025dc0, Func Offset: 0x470
	// Line 356, Address: 0x1025dd4, Func Offset: 0x484
	// Line 359, Address: 0x1025ddc, Func Offset: 0x48c
	// Line 360, Address: 0x1025dec, Func Offset: 0x49c
	// Line 362, Address: 0x1025df0, Func Offset: 0x4a0
	// Line 363, Address: 0x1025df8, Func Offset: 0x4a8
	// Line 364, Address: 0x1025dfc, Func Offset: 0x4ac
	// Line 365, Address: 0x1025e00, Func Offset: 0x4b0
	// Line 366, Address: 0x1025e04, Func Offset: 0x4b4
	// Line 367, Address: 0x1025e10, Func Offset: 0x4c0
	// Line 368, Address: 0x1025e38, Func Offset: 0x4e8
	// Func End, Address: 0x1025e68, Func Offset: 0x518
}

// 
// Start address: 0x1025e70
void scroll_h()
{
	unsigned short wD4;
	// Line 379, Address: 0x1025e70, Func Offset: 0
	// Line 382, Address: 0x1025e7c, Func Offset: 0xc
	// Line 383, Address: 0x1025e88, Func Offset: 0x18
	// Line 384, Address: 0x1025e90, Func Offset: 0x20
	// Line 385, Address: 0x1025ec4, Func Offset: 0x54
	// Line 386, Address: 0x1025ed8, Func Offset: 0x68
	// Line 387, Address: 0x1025f20, Func Offset: 0xb0
	// Line 389, Address: 0x1025f34, Func Offset: 0xc4
	// Func End, Address: 0x1025f48, Func Offset: 0xd8
}

// 
// Start address: 0x1025f50
void scrh_move()
{
	unsigned short wD0;
	// Line 392, Address: 0x1025f50, Func Offset: 0
	// Line 395, Address: 0x1025f5c, Func Offset: 0xc
	// Line 396, Address: 0x1025f9c, Func Offset: 0x4c
	// Line 397, Address: 0x1025fb4, Func Offset: 0x64
	// Line 398, Address: 0x1025fe0, Func Offset: 0x90
	// Line 399, Address: 0x1025fec, Func Offset: 0x9c
	// Func End, Address: 0x1026000, Func Offset: 0xb0
}

// 
// Start address: 0x1026000
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 402, Address: 0x1026000, Func Offset: 0
	// Line 405, Address: 0x102600c, Func Offset: 0xc
	// Line 406, Address: 0x1026034, Func Offset: 0x34
	// Line 407, Address: 0x102604c, Func Offset: 0x4c
	// Line 408, Address: 0x1026088, Func Offset: 0x88
	// Line 409, Address: 0x10260ac, Func Offset: 0xac
	// Line 410, Address: 0x10260dc, Func Offset: 0xdc
	// Line 411, Address: 0x10260e8, Func Offset: 0xe8
	// Line 412, Address: 0x10260f0, Func Offset: 0xf0
	// Func End, Address: 0x1026100, Func Offset: 0x100
}

// 
// Start address: 0x1026100
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 415, Address: 0x1026100, Func Offset: 0
	// Line 418, Address: 0x102610c, Func Offset: 0xc
	// Line 419, Address: 0x1026134, Func Offset: 0x34
	// Line 420, Address: 0x102614c, Func Offset: 0x4c
	// Line 421, Address: 0x1026188, Func Offset: 0x88
	// Line 422, Address: 0x10261ac, Func Offset: 0xac
	// Line 423, Address: 0x10261dc, Func Offset: 0xdc
	// Line 424, Address: 0x10261e8, Func Offset: 0xe8
	// Line 425, Address: 0x10261f0, Func Offset: 0xf0
	// Func End, Address: 0x1026200, Func Offset: 0x100
}

// 
// Start address: 0x1026200
void scroll_v()
{
	short wD0;
	// Line 436, Address: 0x1026200, Func Offset: 0
	// Line 439, Address: 0x102620c, Func Offset: 0xc
	// Line 440, Address: 0x1026240, Func Offset: 0x40
	// Line 441, Address: 0x1026264, Func Offset: 0x64
	// Line 442, Address: 0x102627c, Func Offset: 0x7c
	// Line 443, Address: 0x1026288, Func Offset: 0x88
	// Line 444, Address: 0x10262ac, Func Offset: 0xac
	// Line 445, Address: 0x10262c0, Func Offset: 0xc0
	// Line 446, Address: 0x10262cc, Func Offset: 0xcc
	// Line 448, Address: 0x10262d4, Func Offset: 0xd4
	// Line 449, Address: 0x10262fc, Func Offset: 0xfc
	// Line 450, Address: 0x1026324, Func Offset: 0x124
	// Line 451, Address: 0x1026330, Func Offset: 0x130
	// Line 454, Address: 0x1026338, Func Offset: 0x138
	// Line 455, Address: 0x1026360, Func Offset: 0x160
	// Line 456, Address: 0x1026370, Func Offset: 0x170
	// Line 457, Address: 0x1026378, Func Offset: 0x178
	// Line 462, Address: 0x1026380, Func Offset: 0x180
	// Line 463, Address: 0x10263ac, Func Offset: 0x1ac
	// Line 464, Address: 0x10263b8, Func Offset: 0x1b8
	// Line 466, Address: 0x10263c0, Func Offset: 0x1c0
	// Line 467, Address: 0x10263d0, Func Offset: 0x1d0
	// Line 468, Address: 0x10263d8, Func Offset: 0x1d8
	// Line 471, Address: 0x10263e0, Func Offset: 0x1e0
	// Line 472, Address: 0x10263e8, Func Offset: 0x1e8
	// Func End, Address: 0x10263fc, Func Offset: 0x1fc
}

// 
// Start address: 0x1026400
void sv_move_main(short wD0)
{
	short wD1;
	// Line 475, Address: 0x1026400, Func Offset: 0
	// Line 478, Address: 0x1026410, Func Offset: 0x10
	// Line 480, Address: 0x1026440, Func Offset: 0x40
	// Line 481, Address: 0x1026450, Func Offset: 0x50
	// Line 482, Address: 0x102646c, Func Offset: 0x6c
	// Line 483, Address: 0x1026480, Func Offset: 0x80
	// Line 484, Address: 0x102648c, Func Offset: 0x8c
	// Line 486, Address: 0x1026494, Func Offset: 0x94
	// Line 487, Address: 0x10264c0, Func Offset: 0xc0
	// Line 488, Address: 0x10264ec, Func Offset: 0xec
	// Line 490, Address: 0x10264f8, Func Offset: 0xf8
	// Func End, Address: 0x102650c, Func Offset: 0x10c
}

// 
// Start address: 0x1026510
void sv_move_main1(short wD0)
{
	// Line 493, Address: 0x1026510, Func Offset: 0
	// Line 494, Address: 0x102651c, Func Offset: 0xc
	// Line 495, Address: 0x1026548, Func Offset: 0x38
	// Line 496, Address: 0x1026574, Func Offset: 0x64
	// Line 497, Address: 0x1026580, Func Offset: 0x70
	// Func End, Address: 0x1026590, Func Offset: 0x80
}

// 
// Start address: 0x1026590
void sv_move_main2(short wD0)
{
	// Line 500, Address: 0x1026590, Func Offset: 0
	// Line 501, Address: 0x102659c, Func Offset: 0xc
	// Line 502, Address: 0x10265c8, Func Offset: 0x38
	// Line 503, Address: 0x10265f4, Func Offset: 0x64
	// Line 504, Address: 0x1026600, Func Offset: 0x70
	// Func End, Address: 0x1026610, Func Offset: 0x80
}

// 
// Start address: 0x1026610
void sv_move_sub2()
{
	// Line 507, Address: 0x1026610, Func Offset: 0
	// Line 508, Address: 0x1026618, Func Offset: 0x8
	// Line 509, Address: 0x1026620, Func Offset: 0x10
	// Line 510, Address: 0x102662c, Func Offset: 0x1c
	// Func End, Address: 0x102663c, Func Offset: 0x2c
}

// 
// Start address: 0x1026640
void sv_move_sub(short wD0)
{
	_anon0 lD1;
	// Line 513, Address: 0x1026640, Func Offset: 0
	// Line 516, Address: 0x102664c, Func Offset: 0xc
	// Line 517, Address: 0x1026650, Func Offset: 0x10
	// Line 518, Address: 0x102667c, Func Offset: 0x3c
	// Line 519, Address: 0x10266a4, Func Offset: 0x64
	// Line 520, Address: 0x10266b0, Func Offset: 0x70
	// Func End, Address: 0x10266c0, Func Offset: 0x80
}

// 
// Start address: 0x10266c0
void sv_move_minus(short wD1)
{
	_anon0 lD1;
	short wk;
	// Line 523, Address: 0x10266c0, Func Offset: 0
	// Line 527, Address: 0x10266d0, Func Offset: 0x10
	// Line 529, Address: 0x10266f4, Func Offset: 0x34
	// Line 530, Address: 0x1026700, Func Offset: 0x40
	// Line 531, Address: 0x1026708, Func Offset: 0x48
	// Line 532, Address: 0x102670c, Func Offset: 0x4c
	// Line 533, Address: 0x1026718, Func Offset: 0x58
	// Func End, Address: 0x102672c, Func Offset: 0x6c
}

// 
// Start address: 0x1026730
void scrv_up_ch(_anon0 lD1)
{
	// Line 536, Address: 0x1026730, Func Offset: 0
	// Line 537, Address: 0x102673c, Func Offset: 0xc
	// Line 538, Address: 0x1026764, Func Offset: 0x34
	// Line 539, Address: 0x102677c, Func Offset: 0x4c
	// Line 540, Address: 0x1026788, Func Offset: 0x58
	// Line 542, Address: 0x1026790, Func Offset: 0x60
	// Line 543, Address: 0x102679c, Func Offset: 0x6c
	// Line 544, Address: 0x10267b0, Func Offset: 0x80
	// Line 545, Address: 0x10267c4, Func Offset: 0x94
	// Line 548, Address: 0x10267d8, Func Offset: 0xa8
	// Line 549, Address: 0x10267e4, Func Offset: 0xb4
	// Func End, Address: 0x10267f4, Func Offset: 0xc4
}

// 
// Start address: 0x1026800
void sv_move_plus(short wD1)
{
	_anon0 lD1;
	short wk;
	// Line 552, Address: 0x1026800, Func Offset: 0
	// Line 556, Address: 0x1026810, Func Offset: 0x10
	// Line 558, Address: 0x1026830, Func Offset: 0x30
	// Line 559, Address: 0x102683c, Func Offset: 0x3c
	// Line 560, Address: 0x1026844, Func Offset: 0x44
	// Line 561, Address: 0x1026848, Func Offset: 0x48
	// Line 562, Address: 0x1026854, Func Offset: 0x54
	// Func End, Address: 0x1026868, Func Offset: 0x68
}

// 
// Start address: 0x1026870
void scrv_down_ch(_anon0 lD1)
{
	// Line 565, Address: 0x1026870, Func Offset: 0
	// Line 566, Address: 0x102687c, Func Offset: 0xc
	// Line 567, Address: 0x10268a4, Func Offset: 0x34
	// Line 568, Address: 0x10268c8, Func Offset: 0x58
	// Line 569, Address: 0x10268d4, Func Offset: 0x64
	// Line 571, Address: 0x10268dc, Func Offset: 0x6c
	// Line 572, Address: 0x10268f0, Func Offset: 0x80
	// Line 573, Address: 0x1026904, Func Offset: 0x94
	// Line 576, Address: 0x1026918, Func Offset: 0xa8
	// Line 577, Address: 0x1026924, Func Offset: 0xb4
	// Func End, Address: 0x1026934, Func Offset: 0xc4
}

// 
// Start address: 0x1026940
void scrv_move(_anon0 lD1)
{
	short wD4;
	short wk;
	_anon6 dwk;
	// Line 580, Address: 0x1026940, Func Offset: 0
	// Line 584, Address: 0x1026950, Func Offset: 0x10
	// Line 586, Address: 0x1026960, Func Offset: 0x20
	// Line 587, Address: 0x102696c, Func Offset: 0x2c
	// Line 588, Address: 0x1026974, Func Offset: 0x34
	// Line 590, Address: 0x1026978, Func Offset: 0x38
	// Line 591, Address: 0x102698c, Func Offset: 0x4c
	// Line 592, Address: 0x10269a4, Func Offset: 0x64
	// Line 594, Address: 0x10269b0, Func Offset: 0x70
	// Line 596, Address: 0x10269bc, Func Offset: 0x7c
	// Line 597, Address: 0x10269f8, Func Offset: 0xb8
	// Line 598, Address: 0x1026a00, Func Offset: 0xc0
	// Line 599, Address: 0x1026a14, Func Offset: 0xd4
	// Line 600, Address: 0x1026a40, Func Offset: 0x100
	// Line 601, Address: 0x1026a6c, Func Offset: 0x12c
	// Line 603, Address: 0x1026a80, Func Offset: 0x140
	// Func End, Address: 0x1026a94, Func Offset: 0x154
}

// 
// Start address: 0x1026aa0
void scrollb_hv(int lD4, int lD5)
{
	int lD0;
	int lD1;
	_anon0 lD2;
	// Line 615, Address: 0x1026aa0, Func Offset: 0
	// Line 619, Address: 0x1026ab4, Func Offset: 0x14
	// Line 620, Address: 0x1026abc, Func Offset: 0x1c
	// Line 621, Address: 0x1026ad0, Func Offset: 0x30
	// Line 622, Address: 0x1026b00, Func Offset: 0x60
	// Line 623, Address: 0x1026b14, Func Offset: 0x74
	// Line 624, Address: 0x1026b3c, Func Offset: 0x9c
	// Line 626, Address: 0x1026b50, Func Offset: 0xb0
	// Line 627, Address: 0x1026b58, Func Offset: 0xb8
	// Line 628, Address: 0x1026b6c, Func Offset: 0xcc
	// Line 629, Address: 0x1026b9c, Func Offset: 0xfc
	// Line 630, Address: 0x1026bb0, Func Offset: 0x110
	// Line 631, Address: 0x1026bd8, Func Offset: 0x138
	// Line 633, Address: 0x1026bec, Func Offset: 0x14c
	// Func End, Address: 0x1026c00, Func Offset: 0x160
}

// 
// Start address: 0x1026c00
void scrollc_h(int lD4, int flagc)
{
	_anon0 lD0;
	_anon0 lD2;
	// Line 696, Address: 0x1026c00, Func Offset: 0
	// Line 699, Address: 0x1026c0c, Func Offset: 0xc
	// Line 700, Address: 0x1026c18, Func Offset: 0x18
	// Line 701, Address: 0x1026c28, Func Offset: 0x28
	// Line 702, Address: 0x1026c34, Func Offset: 0x34
	// Line 703, Address: 0x1026c40, Func Offset: 0x40
	// Line 704, Address: 0x1026c64, Func Offset: 0x64
	// Line 705, Address: 0x1026c78, Func Offset: 0x78
	// Line 706, Address: 0x1026c88, Func Offset: 0x88
	// Line 707, Address: 0x1026cc0, Func Offset: 0xc0
	// Line 709, Address: 0x1026ce0, Func Offset: 0xe0
	// Func End, Address: 0x1026cec, Func Offset: 0xec
}

// 
// Start address: 0x1026cf0
void scrollz_h(int lD4, int flagz)
{
	_anon0 lD0;
	_anon0 lD2;
	// Line 721, Address: 0x1026cf0, Func Offset: 0
	// Line 724, Address: 0x1026cfc, Func Offset: 0xc
	// Line 725, Address: 0x1026d08, Func Offset: 0x18
	// Line 726, Address: 0x1026d18, Func Offset: 0x28
	// Line 727, Address: 0x1026d24, Func Offset: 0x34
	// Line 728, Address: 0x1026d30, Func Offset: 0x40
	// Line 729, Address: 0x1026d54, Func Offset: 0x64
	// Line 730, Address: 0x1026d68, Func Offset: 0x78
	// Line 731, Address: 0x1026d78, Func Offset: 0x88
	// Line 732, Address: 0x1026db0, Func Offset: 0xc0
	// Line 734, Address: 0x1026dd0, Func Offset: 0xe0
	// Func End, Address: 0x1026ddc, Func Offset: 0xec
}

// 
// Start address: 0x1026de0
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 745, Address: 0x1026de0, Func Offset: 0
	// Line 751, Address: 0x1026dfc, Func Offset: 0x1c
	// Line 752, Address: 0x1026e04, Func Offset: 0x24
	// Line 753, Address: 0x1026e10, Func Offset: 0x30
	// Line 754, Address: 0x1026e1c, Func Offset: 0x3c
	// Line 755, Address: 0x1026e24, Func Offset: 0x44
	// Line 756, Address: 0x1026e28, Func Offset: 0x48
	// Line 762, Address: 0x1026e3c, Func Offset: 0x5c
	// Func End, Address: 0x1026e60, Func Offset: 0x80
}

// 
// Start address: 0x1026e60
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
	// Line 773, Address: 0x1026e60, Func Offset: 0
	// Line 782, Address: 0x1026e80, Func Offset: 0x20
	// Line 783, Address: 0x1026e88, Func Offset: 0x28
	// Line 784, Address: 0x1026e94, Func Offset: 0x34
	// Line 785, Address: 0x1026ea0, Func Offset: 0x40
	// Line 786, Address: 0x1026ea8, Func Offset: 0x48
	// Line 787, Address: 0x1026eac, Func Offset: 0x4c
	// Line 799, Address: 0x1026ec0, Func Offset: 0x60
	// Line 800, Address: 0x1026ec8, Func Offset: 0x68
	// Line 801, Address: 0x1026ed4, Func Offset: 0x74
	// Line 802, Address: 0x1026ee0, Func Offset: 0x80
	// Line 803, Address: 0x1026ee8, Func Offset: 0x88
	// Line 805, Address: 0x1026eec, Func Offset: 0x8c
	// Line 806, Address: 0x1026ef8, Func Offset: 0x98
	// Line 807, Address: 0x1026f0c, Func Offset: 0xac
	// Line 809, Address: 0x1026f18, Func Offset: 0xb8
	// Line 810, Address: 0x1026f20, Func Offset: 0xc0
	// Line 811, Address: 0x1026f28, Func Offset: 0xc8
	// Line 812, Address: 0x1026f48, Func Offset: 0xe8
	// Line 814, Address: 0x1026f74, Func Offset: 0x114
	// Line 815, Address: 0x1026f88, Func Offset: 0x128
	// Line 817, Address: 0x1026f94, Func Offset: 0x134
	// Line 818, Address: 0x1026f9c, Func Offset: 0x13c
	// Line 819, Address: 0x1026fa4, Func Offset: 0x144
	// Line 820, Address: 0x1026fc4, Func Offset: 0x164
	// Line 822, Address: 0x1026ff0, Func Offset: 0x190
	// Line 823, Address: 0x1027004, Func Offset: 0x1a4
	// Line 825, Address: 0x1027010, Func Offset: 0x1b0
	// Line 826, Address: 0x1027018, Func Offset: 0x1b8
	// Line 827, Address: 0x1027020, Func Offset: 0x1c0
	// Line 828, Address: 0x1027040, Func Offset: 0x1e0
	// Line 830, Address: 0x102706c, Func Offset: 0x20c
	// Line 831, Address: 0x1027080, Func Offset: 0x220
	// Line 833, Address: 0x102708c, Func Offset: 0x22c
	// Line 834, Address: 0x1027094, Func Offset: 0x234
	// Line 835, Address: 0x102709c, Func Offset: 0x23c
	// Line 836, Address: 0x10270bc, Func Offset: 0x25c
	// Line 839, Address: 0x10270e8, Func Offset: 0x288
	// Func End, Address: 0x1027110, Func Offset: 0x2b0
}

// 
// Start address: 0x1027110
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
	// Line 853, Address: 0x1027110, Func Offset: 0
	// Line 864, Address: 0x102713c, Func Offset: 0x2c
	// Line 866, Address: 0x1027144, Func Offset: 0x34
	// Line 867, Address: 0x102715c, Func Offset: 0x4c
	// Line 868, Address: 0x1027170, Func Offset: 0x60
	// Line 870, Address: 0x1027178, Func Offset: 0x68
	// Line 872, Address: 0x102718c, Func Offset: 0x7c
	// Line 873, Address: 0x10271a4, Func Offset: 0x94
	// Line 874, Address: 0x10271b8, Func Offset: 0xa8
	// Line 875, Address: 0x10271c0, Func Offset: 0xb0
	// Line 877, Address: 0x10271c8, Func Offset: 0xb8
	// Line 878, Address: 0x10271dc, Func Offset: 0xcc
	// Line 883, Address: 0x10271e4, Func Offset: 0xd4
	// Line 884, Address: 0x1027234, Func Offset: 0x124
	// Line 885, Address: 0x102723c, Func Offset: 0x12c
	// Line 886, Address: 0x102725c, Func Offset: 0x14c
	// Line 887, Address: 0x102727c, Func Offset: 0x16c
	// Line 888, Address: 0x10272a0, Func Offset: 0x190
	// Line 889, Address: 0x10272ac, Func Offset: 0x19c
	// Line 890, Address: 0x10272b4, Func Offset: 0x1a4
	// Line 892, Address: 0x10272d4, Func Offset: 0x1c4
	// Line 896, Address: 0x1027300, Func Offset: 0x1f0
	// Line 899, Address: 0x1027308, Func Offset: 0x1f8
	// Line 900, Address: 0x102730c, Func Offset: 0x1fc
	// Line 904, Address: 0x102732c, Func Offset: 0x21c
	// Line 911, Address: 0x1027358, Func Offset: 0x248
	// Line 918, Address: 0x102736c, Func Offset: 0x25c
	// Line 919, Address: 0x1027374, Func Offset: 0x264
	// Line 920, Address: 0x102737c, Func Offset: 0x26c
	// Line 921, Address: 0x1027394, Func Offset: 0x284
	// Line 922, Address: 0x10273b4, Func Offset: 0x2a4
	// Line 926, Address: 0x10273bc, Func Offset: 0x2ac
	// Line 928, Address: 0x10273ec, Func Offset: 0x2dc
	// Line 929, Address: 0x10273f8, Func Offset: 0x2e8
	// Line 933, Address: 0x1027408, Func Offset: 0x2f8
	// Line 934, Address: 0x1027414, Func Offset: 0x304
	// Line 935, Address: 0x1027434, Func Offset: 0x324
	// Line 936, Address: 0x1027440, Func Offset: 0x330
	// Line 937, Address: 0x102746c, Func Offset: 0x35c
	// Line 938, Address: 0x102748c, Func Offset: 0x37c
	// Line 940, Address: 0x10274b0, Func Offset: 0x3a0
	// Line 943, Address: 0x10274d4, Func Offset: 0x3c4
	// Line 945, Address: 0x10274f4, Func Offset: 0x3e4
	// Line 948, Address: 0x1027508, Func Offset: 0x3f8
	// Line 949, Address: 0x1027514, Func Offset: 0x404
	// Line 950, Address: 0x1027524, Func Offset: 0x414
	// Line 952, Address: 0x102752c, Func Offset: 0x41c
	// Func End, Address: 0x1027554, Func Offset: 0x444
}

// 
// Start address: 0x1027560
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 979, Address: 0x1027560, Func Offset: 0
	// Line 992, Address: 0x1027588, Func Offset: 0x28
	// Line 995, Address: 0x10275a8, Func Offset: 0x48
	// Line 996, Address: 0x10275bc, Func Offset: 0x5c
	// Line 997, Address: 0x10275d0, Func Offset: 0x70
	// Line 998, Address: 0x10275e4, Func Offset: 0x84
	// Line 1000, Address: 0x10275f8, Func Offset: 0x98
	// Line 1001, Address: 0x1027604, Func Offset: 0xa4
	// Line 1002, Address: 0x1027618, Func Offset: 0xb8
	// Func End, Address: 0x1027628, Func Offset: 0xc8
}

// 
// Start address: 0x1027630
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1006, Address: 0x1027630, Func Offset: 0
	// Line 1010, Address: 0x1027658, Func Offset: 0x28
	// Line 1013, Address: 0x1027678, Func Offset: 0x48
	// Line 1014, Address: 0x102768c, Func Offset: 0x5c
	// Line 1015, Address: 0x10276a0, Func Offset: 0x70
	// Line 1016, Address: 0x10276b4, Func Offset: 0x84
	// Line 1018, Address: 0x10276c8, Func Offset: 0x98
	// Line 1019, Address: 0x10276d4, Func Offset: 0xa4
	// Line 1020, Address: 0x10276e8, Func Offset: 0xb8
	// Func End, Address: 0x10276f8, Func Offset: 0xc8
}

// 
// Start address: 0x1027700
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1036, Address: 0x1027700, Func Offset: 0
	// Line 1040, Address: 0x1027728, Func Offset: 0x28
	// Line 1041, Address: 0x1027748, Func Offset: 0x48
	// Line 1042, Address: 0x102775c, Func Offset: 0x5c
	// Line 1043, Address: 0x102776c, Func Offset: 0x6c
	// Line 1044, Address: 0x1027790, Func Offset: 0x90
	// Line 1045, Address: 0x102779c, Func Offset: 0x9c
	// Line 1046, Address: 0x10277b0, Func Offset: 0xb0
	// Func End, Address: 0x10277c0, Func Offset: 0xc0
}

// 
// Start address: 0x10277c0
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
	// Line 1064, Address: 0x10277c0, Func Offset: 0
	// Line 1070, Address: 0x10277f4, Func Offset: 0x34
	// Line 1071, Address: 0x1027810, Func Offset: 0x50
	// Line 1072, Address: 0x1027824, Func Offset: 0x64
	// Line 1073, Address: 0x102782c, Func Offset: 0x6c
	// Line 1075, Address: 0x1027834, Func Offset: 0x74
	// Line 1076, Address: 0x102783c, Func Offset: 0x7c
	// Line 1077, Address: 0x1027848, Func Offset: 0x88
	// Line 1078, Address: 0x1027854, Func Offset: 0x94
	// Line 1079, Address: 0x1027858, Func Offset: 0x98
	// Line 1080, Address: 0x102785c, Func Offset: 0x9c
	// Line 1081, Address: 0x1027860, Func Offset: 0xa0
	// Line 1082, Address: 0x1027864, Func Offset: 0xa4
	// Line 1083, Address: 0x102786c, Func Offset: 0xac
	// Line 1084, Address: 0x1027878, Func Offset: 0xb8
	// Line 1085, Address: 0x102787c, Func Offset: 0xbc
	// Line 1086, Address: 0x1027880, Func Offset: 0xc0
	// Line 1087, Address: 0x1027884, Func Offset: 0xc4
	// Line 1088, Address: 0x1027888, Func Offset: 0xc8
	// Line 1089, Address: 0x1027890, Func Offset: 0xd0
	// Line 1090, Address: 0x102789c, Func Offset: 0xdc
	// Line 1091, Address: 0x10278a0, Func Offset: 0xe0
	// Line 1092, Address: 0x10278a4, Func Offset: 0xe4
	// Line 1093, Address: 0x10278a8, Func Offset: 0xe8
	// Line 1094, Address: 0x10278ac, Func Offset: 0xec
	// Line 1096, Address: 0x10278b4, Func Offset: 0xf4
	// Line 1097, Address: 0x10278b8, Func Offset: 0xf8
	// Line 1098, Address: 0x10278bc, Func Offset: 0xfc
	// Line 1099, Address: 0x10278c0, Func Offset: 0x100
	// Line 1102, Address: 0x10278c4, Func Offset: 0x104
	// Line 1103, Address: 0x1027908, Func Offset: 0x148
	// Line 1104, Address: 0x102794c, Func Offset: 0x18c
	// Line 1105, Address: 0x1027990, Func Offset: 0x1d0
	// Line 1106, Address: 0x10279d4, Func Offset: 0x214
	// Func End, Address: 0x1027a04, Func Offset: 0x244
}

// 
// Start address: 0x1027a10
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1125, Address: 0x1027a10, Func Offset: 0
	// Line 1126, Address: 0x1027a30, Func Offset: 0x20
	// Line 1127, Address: 0x1027a50, Func Offset: 0x40
	// Func End, Address: 0x1027a60, Func Offset: 0x50
}

// 
// Start address: 0x1027a60
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1130, Address: 0x1027a60, Func Offset: 0
	// Line 1131, Address: 0x1027a80, Func Offset: 0x20
	// Line 1132, Address: 0x1027a84, Func Offset: 0x24
	// Line 1133, Address: 0x1027aa4, Func Offset: 0x44
	// Func End, Address: 0x1027ab4, Func Offset: 0x54
}

// 
// Start address: 0x1027ac0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1136, Address: 0x1027ac0, Func Offset: 0
	// Line 1142, Address: 0x1027af0, Func Offset: 0x30
	// Line 1143, Address: 0x1027b00, Func Offset: 0x40
	// Line 1146, Address: 0x1027b10, Func Offset: 0x50
	// Line 1147, Address: 0x1027b30, Func Offset: 0x70
	// Line 1148, Address: 0x1027b50, Func Offset: 0x90
	// Line 1149, Address: 0x1027b78, Func Offset: 0xb8
	// Line 1150, Address: 0x1027ba0, Func Offset: 0xe0
	// Line 1151, Address: 0x1027be8, Func Offset: 0x128
	// Line 1153, Address: 0x1027bf4, Func Offset: 0x134
	// Line 1155, Address: 0x1027c10, Func Offset: 0x150
	// Line 1156, Address: 0x1027c18, Func Offset: 0x158
	// Line 1157, Address: 0x1027c24, Func Offset: 0x164
	// Line 1159, Address: 0x1027c30, Func Offset: 0x170
	// Line 1160, Address: 0x1027c38, Func Offset: 0x178
	// Line 1161, Address: 0x1027c58, Func Offset: 0x198
	// Line 1162, Address: 0x1027c74, Func Offset: 0x1b4
	// Line 1163, Address: 0x1027c7c, Func Offset: 0x1bc
	// Line 1164, Address: 0x1027c9c, Func Offset: 0x1dc
	// Line 1166, Address: 0x1027cb8, Func Offset: 0x1f8
	// Line 1167, Address: 0x1027cc0, Func Offset: 0x200
	// Line 1168, Address: 0x1027cc8, Func Offset: 0x208
	// Line 1169, Address: 0x1027cd4, Func Offset: 0x214
	// Line 1170, Address: 0x1027cec, Func Offset: 0x22c
	// Line 1172, Address: 0x1027cfc, Func Offset: 0x23c
	// Line 1174, Address: 0x1027d08, Func Offset: 0x248
	// Line 1175, Address: 0x1027d10, Func Offset: 0x250
	// Line 1176, Address: 0x1027d14, Func Offset: 0x254
	// Func End, Address: 0x1027d34, Func Offset: 0x274
}

// 
// Start address: 0x1027d40
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1192, Address: 0x1027d40, Func Offset: 0
	// Line 1197, Address: 0x1027d68, Func Offset: 0x28
	// Line 1198, Address: 0x1027dcc, Func Offset: 0x8c
	// Line 1199, Address: 0x1027dd4, Func Offset: 0x94
	// Line 1200, Address: 0x1027ddc, Func Offset: 0x9c
	// Line 1201, Address: 0x1027dfc, Func Offset: 0xbc
	// Line 1202, Address: 0x1027e18, Func Offset: 0xd8
	// Line 1203, Address: 0x1027e20, Func Offset: 0xe0
	// Line 1204, Address: 0x1027e40, Func Offset: 0x100
	// Line 1206, Address: 0x1027e5c, Func Offset: 0x11c
	// Line 1207, Address: 0x1027e64, Func Offset: 0x124
	// Line 1208, Address: 0x1027e6c, Func Offset: 0x12c
	// Line 1209, Address: 0x1027e78, Func Offset: 0x138
	// Line 1210, Address: 0x1027e90, Func Offset: 0x150
	// Line 1211, Address: 0x1027e98, Func Offset: 0x158
	// Line 1213, Address: 0x1027ea8, Func Offset: 0x168
	// Line 1215, Address: 0x1027eb4, Func Offset: 0x174
	// Line 1216, Address: 0x1027ebc, Func Offset: 0x17c
	// Line 1217, Address: 0x1027ec0, Func Offset: 0x180
	// Func End, Address: 0x1027edc, Func Offset: 0x19c
}

// 
// Start address: 0x1027ee0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1231, Address: 0x1027ee0, Func Offset: 0
	// Line 1238, Address: 0x1027efc, Func Offset: 0x1c
	// Line 1239, Address: 0x1027f00, Func Offset: 0x20
	// Line 1240, Address: 0x1027f08, Func Offset: 0x28
	// Line 1241, Address: 0x1027f2c, Func Offset: 0x4c
	// Line 1242, Address: 0x1027f38, Func Offset: 0x58
	// Line 1243, Address: 0x1027f50, Func Offset: 0x70
	// Line 1244, Address: 0x1027f64, Func Offset: 0x84
	// Line 1247, Address: 0x1027f7c, Func Offset: 0x9c
	// Func End, Address: 0x1027f94, Func Offset: 0xb4
}

// 
// Start address: 0x1027fa0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1259, Address: 0x1027fa0, Func Offset: 0
	// Line 1260, Address: 0x1027fac, Func Offset: 0xc
	// Line 1261, Address: 0x1027fd8, Func Offset: 0x38
	// Line 1262, Address: 0x1028024, Func Offset: 0x84
	// Line 1263, Address: 0x1028050, Func Offset: 0xb0
	// Line 1267, Address: 0x10280a8, Func Offset: 0x108
	// Line 1268, Address: 0x10280ac, Func Offset: 0x10c
	// Func End, Address: 0x10280b8, Func Offset: 0x118
}

// 
// Start address: 0x10280c0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1283, Address: 0x10280c0, Func Offset: 0
	// Line 1284, Address: 0x10280dc, Func Offset: 0x1c
	// Line 1285, Address: 0x10280f8, Func Offset: 0x38
	// Func End, Address: 0x1028108, Func Offset: 0x48
}

// 
// Start address: 0x1028110
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1288, Address: 0x1028110, Func Offset: 0
	// Line 1289, Address: 0x102812c, Func Offset: 0x1c
	// Line 1290, Address: 0x1028130, Func Offset: 0x20
	// Line 1291, Address: 0x102814c, Func Offset: 0x3c
	// Func End, Address: 0x102815c, Func Offset: 0x4c
}

// 
// Start address: 0x1028160
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1294, Address: 0x1028160, Func Offset: 0
	// Line 1295, Address: 0x1028174, Func Offset: 0x14
	// Line 1296, Address: 0x1028190, Func Offset: 0x30
	// Func End, Address: 0x10281a0, Func Offset: 0x40
}

// 
// Start address: 0x10281a0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1299, Address: 0x10281a0, Func Offset: 0
	// Line 1300, Address: 0x10281bc, Func Offset: 0x1c
	// Line 1301, Address: 0x10281d8, Func Offset: 0x38
	// Func End, Address: 0x10281e8, Func Offset: 0x48
}

// 
// Start address: 0x10281f0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1304, Address: 0x10281f0, Func Offset: 0
	// Line 1305, Address: 0x1028208, Func Offset: 0x18
	// Line 1306, Address: 0x1028218, Func Offset: 0x28
	// Line 1307, Address: 0x1028228, Func Offset: 0x38
	// Line 1308, Address: 0x1028234, Func Offset: 0x44
	// Line 1310, Address: 0x1028240, Func Offset: 0x50
	// Line 1311, Address: 0x102826c, Func Offset: 0x7c
	// Line 1313, Address: 0x1028298, Func Offset: 0xa8
	// Func End, Address: 0x10282a4, Func Offset: 0xb4
}

// 
// Start address: 0x10282b0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1327, Address: 0x10282b0, Func Offset: 0
	// Line 1332, Address: 0x10282c8, Func Offset: 0x18
	// Line 1333, Address: 0x10282d4, Func Offset: 0x24
	// Line 1334, Address: 0x10282e0, Func Offset: 0x30
	// Line 1335, Address: 0x10282e8, Func Offset: 0x38
	// Line 1336, Address: 0x10282ec, Func Offset: 0x3c
	// Line 1340, Address: 0x1028304, Func Offset: 0x54
	// Line 1341, Address: 0x102830c, Func Offset: 0x5c
	// Line 1342, Address: 0x1028310, Func Offset: 0x60
	// Line 1343, Address: 0x1028320, Func Offset: 0x70
	// Func End, Address: 0x1028340, Func Offset: 0x90
}

// 
// Start address: 0x1028340
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1346, Address: 0x1028340, Func Offset: 0
	// Line 1347, Address: 0x1028358, Func Offset: 0x18
	// Line 1348, Address: 0x1028378, Func Offset: 0x38
	// Func End, Address: 0x1028388, Func Offset: 0x48
}

// 
// Start address: 0x1028390
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1351, Address: 0x1028390, Func Offset: 0
	// Line 1355, Address: 0x10283b0, Func Offset: 0x20
	// Line 1356, Address: 0x10283cc, Func Offset: 0x3c
	// Line 1357, Address: 0x10283f4, Func Offset: 0x64
	// Line 1358, Address: 0x1028400, Func Offset: 0x70
	// Line 1359, Address: 0x1028428, Func Offset: 0x98
	// Func End, Address: 0x1028438, Func Offset: 0xa8
}

// 
// Start address: 0x1028440
void mapwrt_z11c(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1362, Address: 0x1028440, Func Offset: 0
	// Line 1365, Address: 0x102845c, Func Offset: 0x1c
	// Line 1366, Address: 0x1028464, Func Offset: 0x24
	// Line 1369, Address: 0x102846c, Func Offset: 0x2c
	// Line 1370, Address: 0x1028490, Func Offset: 0x50
	// Line 1371, Address: 0x10284b0, Func Offset: 0x70
	// Line 1372, Address: 0x10284b8, Func Offset: 0x78
	// Line 1373, Address: 0x10284dc, Func Offset: 0x9c
	// Func End, Address: 0x10284f8, Func Offset: 0xb8
}

// 
// Start address: 0x1028500
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1389, Address: 0x1028500, Func Offset: 0
	// Line 1394, Address: 0x1028528, Func Offset: 0x28
	// Line 1395, Address: 0x1028538, Func Offset: 0x38
	// Line 1396, Address: 0x1028554, Func Offset: 0x54
	// Line 1397, Address: 0x1028578, Func Offset: 0x78
	// Line 1398, Address: 0x10285a0, Func Offset: 0xa0
	// Line 1399, Address: 0x10285ac, Func Offset: 0xac
	// Line 1400, Address: 0x10285b4, Func Offset: 0xb4
	// Line 1401, Address: 0x10285d0, Func Offset: 0xd0
	// Line 1402, Address: 0x10285f8, Func Offset: 0xf8
	// Line 1404, Address: 0x1028600, Func Offset: 0x100
	// Line 1405, Address: 0x1028604, Func Offset: 0x104
	// Line 1406, Address: 0x1028620, Func Offset: 0x120
	// Line 1408, Address: 0x1028648, Func Offset: 0x148
	// Func End, Address: 0x1028664, Func Offset: 0x164
}

// 
// Start address: 0x1028670
void mapinit()
{
	// Line 1419, Address: 0x1028670, Func Offset: 0
	// Line 1421, Address: 0x1028678, Func Offset: 0x8
	// Line 1422, Address: 0x102868c, Func Offset: 0x1c
	// Line 1424, Address: 0x10286a0, Func Offset: 0x30
	// Line 1425, Address: 0x10286b8, Func Offset: 0x48
	// Line 1426, Address: 0x10286d8, Func Offset: 0x68
	// Func End, Address: 0x10286e8, Func Offset: 0x78
}

