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
typedef unsigned char type_17[22];
typedef unsigned short type_18[2];
typedef _anon0* type_19[8];
typedef unsigned char type_20[64];
typedef unsigned char type_21[64][8];

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

unsigned char z11bwrttbl[33];
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
_anon9 zone_flag;
_anon4 scr_timer;
_anon9 scr_die;
unsigned char scrv_flag;
unsigned char scrh_flag;
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
_anon0 scrc_h_posit;
_anon0 scrz_h_posit;
_anon0 scrb_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
_anon0* lphscrollbuff;
_anon9 scrflagc;
_anon9 scrflagz;
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
void mapwrt_z11b(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();

// 
// Start address: 0x1025f00
void enecginit()
{
	// Line 132, Address: 0x1025f00, Func Offset: 0
	// Func End, Address: 0x1025f08, Func Offset: 0x8
}

// 
// Start address: 0x1025f10
void divdevset()
{
	// Line 137, Address: 0x1025f10, Func Offset: 0
	// Func End, Address: 0x1025f18, Func Offset: 0x8
}

// 
// Start address: 0x1025f20
_anon13* main_chk()
{
	// Line 151, Address: 0x1025f20, Func Offset: 0
	// Line 152, Address: 0x1025f40, Func Offset: 0x20
	// Line 153, Address: 0x1025f48, Func Offset: 0x28
	// Func End, Address: 0x1025f50, Func Offset: 0x30
}

// 
// Start address: 0x1025f50
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 164, Address: 0x1025f50, Func Offset: 0
	// Line 165, Address: 0x1025f5c, Func Offset: 0xc
	// Line 170, Address: 0x1025f90, Func Offset: 0x40
	// Line 171, Address: 0x1025f98, Func Offset: 0x48
	// Line 172, Address: 0x1025fa0, Func Offset: 0x50
	// Line 173, Address: 0x1025fa8, Func Offset: 0x58
	// Line 174, Address: 0x1025fb0, Func Offset: 0x60
	// Line 176, Address: 0x1025fb8, Func Offset: 0x68
	// Line 177, Address: 0x1025fbc, Func Offset: 0x6c
	// Line 178, Address: 0x1025fd8, Func Offset: 0x88
	// Line 179, Address: 0x1025fec, Func Offset: 0x9c
	// Line 180, Address: 0x1026008, Func Offset: 0xb8
	// Line 181, Address: 0x102601c, Func Offset: 0xcc
	// Line 182, Address: 0x1026038, Func Offset: 0xe8
	// Line 183, Address: 0x102604c, Func Offset: 0xfc
	// Line 184, Address: 0x1026068, Func Offset: 0x118
	// Line 185, Address: 0x102607c, Func Offset: 0x12c
	// Line 187, Address: 0x1026098, Func Offset: 0x148
	// Line 188, Address: 0x10260bc, Func Offset: 0x16c
	// Line 189, Address: 0x10260c8, Func Offset: 0x178
	// Line 191, Address: 0x10260d4, Func Offset: 0x184
	// Line 192, Address: 0x10260f0, Func Offset: 0x1a0
	// Line 194, Address: 0x10260fc, Func Offset: 0x1ac
	// Line 195, Address: 0x1026104, Func Offset: 0x1b4
	// Func End, Address: 0x1026118, Func Offset: 0x1c8
}

// 
// Start address: 0x1026120
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 206, Address: 0x1026120, Func Offset: 0
	// Line 207, Address: 0x1026134, Func Offset: 0x14
	// Line 208, Address: 0x1026150, Func Offset: 0x30
	// Line 218, Address: 0x1026184, Func Offset: 0x64
	// Line 223, Address: 0x10261b0, Func Offset: 0x90
	// Line 224, Address: 0x10261c0, Func Offset: 0xa0
	// Line 225, Address: 0x10261c8, Func Offset: 0xa8
	// Line 226, Address: 0x10261d8, Func Offset: 0xb8
	// Line 227, Address: 0x10261e8, Func Offset: 0xc8
	// Line 228, Address: 0x10261fc, Func Offset: 0xdc
	// Line 230, Address: 0x1026204, Func Offset: 0xe4
	// Line 231, Address: 0x102621c, Func Offset: 0xfc
	// Line 232, Address: 0x1026250, Func Offset: 0x130
	// Line 233, Address: 0x1026288, Func Offset: 0x168
	// Line 235, Address: 0x1026290, Func Offset: 0x170
	// Line 236, Address: 0x10262c0, Func Offset: 0x1a0
	// Line 240, Address: 0x10262f4, Func Offset: 0x1d4
	// Line 241, Address: 0x102631c, Func Offset: 0x1fc
	// Line 242, Address: 0x1026320, Func Offset: 0x200
	// Line 243, Address: 0x1026354, Func Offset: 0x234
	// Line 245, Address: 0x102635c, Func Offset: 0x23c
	// Line 246, Address: 0x1026384, Func Offset: 0x264
	// Line 247, Address: 0x1026388, Func Offset: 0x268
	// Line 248, Address: 0x10263bc, Func Offset: 0x29c
	// Line 250, Address: 0x10263c4, Func Offset: 0x2a4
	// Line 252, Address: 0x10263d4, Func Offset: 0x2b4
	// Line 253, Address: 0x10263d8, Func Offset: 0x2b8
	// Line 254, Address: 0x10263f0, Func Offset: 0x2d0
	// Line 255, Address: 0x1026408, Func Offset: 0x2e8
	// Line 256, Address: 0x1026420, Func Offset: 0x300
	// Line 257, Address: 0x1026438, Func Offset: 0x318
	// Func End, Address: 0x1026454, Func Offset: 0x334
}

// 
// Start address: 0x1026460
void scrbinit(short xWk, short yWk)
{
	_anon0 lYwk;
	// Line 269, Address: 0x1026460, Func Offset: 0
	// Line 272, Address: 0x1026470, Func Offset: 0x10
	// Line 273, Address: 0x1026478, Func Offset: 0x18
	// Line 275, Address: 0x102647c, Func Offset: 0x1c
	// Line 276, Address: 0x102648c, Func Offset: 0x2c
	// Line 277, Address: 0x1026498, Func Offset: 0x38
	// Line 278, Address: 0x10264a4, Func Offset: 0x44
	// Line 280, Address: 0x10264b0, Func Offset: 0x50
	// Line 281, Address: 0x10264e8, Func Offset: 0x88
	// Line 282, Address: 0x1026520, Func Offset: 0xc0
	// Line 284, Address: 0x1026560, Func Offset: 0x100
	// Line 285, Address: 0x1026580, Func Offset: 0x120
	// Func End, Address: 0x1026590, Func Offset: 0x130
}

// 
// Start address: 0x1026590
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
	// Line 296, Address: 0x1026590, Func Offset: 0
	// Line 308, Address: 0x10265b8, Func Offset: 0x28
	// Line 310, Address: 0x10265c8, Func Offset: 0x38
	// Line 311, Address: 0x10265d0, Func Offset: 0x40
	// Line 312, Address: 0x10265d8, Func Offset: 0x48
	// Line 313, Address: 0x10265e0, Func Offset: 0x50
	// Line 315, Address: 0x10265e8, Func Offset: 0x58
	// Line 317, Address: 0x10265f0, Func Offset: 0x60
	// Line 318, Address: 0x10265f8, Func Offset: 0x68
	// Line 320, Address: 0x1026600, Func Offset: 0x70
	// Line 321, Address: 0x1026610, Func Offset: 0x80
	// Line 323, Address: 0x1026620, Func Offset: 0x90
	// Line 324, Address: 0x1026640, Func Offset: 0xb0
	// Line 326, Address: 0x1026668, Func Offset: 0xd8
	// Line 327, Address: 0x102667c, Func Offset: 0xec
	// Line 328, Address: 0x1026694, Func Offset: 0x104
	// Line 330, Address: 0x10266a4, Func Offset: 0x114
	// Line 331, Address: 0x10266b4, Func Offset: 0x124
	// Line 332, Address: 0x10266c4, Func Offset: 0x134
	// Line 334, Address: 0x10266d4, Func Offset: 0x144
	// Line 335, Address: 0x102670c, Func Offset: 0x17c
	// Line 336, Address: 0x1026714, Func Offset: 0x184
	// Line 338, Address: 0x102671c, Func Offset: 0x18c
	// Line 339, Address: 0x1026730, Func Offset: 0x1a0
	// Line 340, Address: 0x1026738, Func Offset: 0x1a8
	// Line 341, Address: 0x1026740, Func Offset: 0x1b0
	// Line 342, Address: 0x1026760, Func Offset: 0x1d0
	// Line 343, Address: 0x1026768, Func Offset: 0x1d8
	// Line 344, Address: 0x1026770, Func Offset: 0x1e0
	// Line 345, Address: 0x1026774, Func Offset: 0x1e4
	// Line 347, Address: 0x1026784, Func Offset: 0x1f4
	// Line 349, Address: 0x102678c, Func Offset: 0x1fc
	// Line 350, Address: 0x10267e4, Func Offset: 0x254
	// Line 351, Address: 0x102683c, Func Offset: 0x2ac
	// Line 352, Address: 0x1026894, Func Offset: 0x304
	// Line 354, Address: 0x10268ec, Func Offset: 0x35c
	// Line 355, Address: 0x1026930, Func Offset: 0x3a0
	// Line 357, Address: 0x1026974, Func Offset: 0x3e4
	// Line 359, Address: 0x102697c, Func Offset: 0x3ec
	// Line 360, Address: 0x10269a4, Func Offset: 0x414
	// Line 361, Address: 0x10269ac, Func Offset: 0x41c
	// Line 363, Address: 0x10269dc, Func Offset: 0x44c
	// Line 364, Address: 0x10269f8, Func Offset: 0x468
	// Line 367, Address: 0x1026a00, Func Offset: 0x470
	// Line 369, Address: 0x1026a04, Func Offset: 0x474
	// Line 371, Address: 0x1026a14, Func Offset: 0x484
	// Line 372, Address: 0x1026a1c, Func Offset: 0x48c
	// Line 373, Address: 0x1026a20, Func Offset: 0x490
	// Line 374, Address: 0x1026a24, Func Offset: 0x494
	// Line 375, Address: 0x1026a28, Func Offset: 0x498
	// Line 376, Address: 0x1026a38, Func Offset: 0x4a8
	// Line 377, Address: 0x1026a60, Func Offset: 0x4d0
	// Func End, Address: 0x1026a90, Func Offset: 0x500
}

// 
// Start address: 0x1026a90
void scroll_h()
{
	unsigned short wD4;
	// Line 388, Address: 0x1026a90, Func Offset: 0
	// Line 391, Address: 0x1026a9c, Func Offset: 0xc
	// Line 392, Address: 0x1026aa8, Func Offset: 0x18
	// Line 393, Address: 0x1026ab0, Func Offset: 0x20
	// Line 394, Address: 0x1026ae4, Func Offset: 0x54
	// Line 395, Address: 0x1026af8, Func Offset: 0x68
	// Line 396, Address: 0x1026b40, Func Offset: 0xb0
	// Line 398, Address: 0x1026b54, Func Offset: 0xc4
	// Func End, Address: 0x1026b68, Func Offset: 0xd8
}

// 
// Start address: 0x1026b70
void scrh_move()
{
	unsigned short wD0;
	// Line 401, Address: 0x1026b70, Func Offset: 0
	// Line 404, Address: 0x1026b7c, Func Offset: 0xc
	// Line 405, Address: 0x1026bbc, Func Offset: 0x4c
	// Line 406, Address: 0x1026bd4, Func Offset: 0x64
	// Line 407, Address: 0x1026c00, Func Offset: 0x90
	// Line 408, Address: 0x1026c0c, Func Offset: 0x9c
	// Func End, Address: 0x1026c20, Func Offset: 0xb0
}

// 
// Start address: 0x1026c20
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 411, Address: 0x1026c20, Func Offset: 0
	// Line 414, Address: 0x1026c2c, Func Offset: 0xc
	// Line 415, Address: 0x1026c54, Func Offset: 0x34
	// Line 416, Address: 0x1026c6c, Func Offset: 0x4c
	// Line 417, Address: 0x1026ca8, Func Offset: 0x88
	// Line 418, Address: 0x1026ccc, Func Offset: 0xac
	// Line 419, Address: 0x1026cfc, Func Offset: 0xdc
	// Line 420, Address: 0x1026d08, Func Offset: 0xe8
	// Line 421, Address: 0x1026d10, Func Offset: 0xf0
	// Func End, Address: 0x1026d20, Func Offset: 0x100
}

// 
// Start address: 0x1026d20
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 424, Address: 0x1026d20, Func Offset: 0
	// Line 427, Address: 0x1026d2c, Func Offset: 0xc
	// Line 428, Address: 0x1026d54, Func Offset: 0x34
	// Line 429, Address: 0x1026d6c, Func Offset: 0x4c
	// Line 430, Address: 0x1026da8, Func Offset: 0x88
	// Line 431, Address: 0x1026dcc, Func Offset: 0xac
	// Line 432, Address: 0x1026dfc, Func Offset: 0xdc
	// Line 433, Address: 0x1026e08, Func Offset: 0xe8
	// Line 434, Address: 0x1026e10, Func Offset: 0xf0
	// Func End, Address: 0x1026e20, Func Offset: 0x100
}

// 
// Start address: 0x1026e20
void scroll_v()
{
	short wD0;
	// Line 445, Address: 0x1026e20, Func Offset: 0
	// Line 448, Address: 0x1026e2c, Func Offset: 0xc
	// Line 449, Address: 0x1026e60, Func Offset: 0x40
	// Line 450, Address: 0x1026e84, Func Offset: 0x64
	// Line 451, Address: 0x1026e9c, Func Offset: 0x7c
	// Line 452, Address: 0x1026ea8, Func Offset: 0x88
	// Line 453, Address: 0x1026ecc, Func Offset: 0xac
	// Line 454, Address: 0x1026ee0, Func Offset: 0xc0
	// Line 455, Address: 0x1026eec, Func Offset: 0xcc
	// Line 457, Address: 0x1026ef4, Func Offset: 0xd4
	// Line 458, Address: 0x1026f1c, Func Offset: 0xfc
	// Line 459, Address: 0x1026f44, Func Offset: 0x124
	// Line 460, Address: 0x1026f50, Func Offset: 0x130
	// Line 463, Address: 0x1026f58, Func Offset: 0x138
	// Line 464, Address: 0x1026f80, Func Offset: 0x160
	// Line 465, Address: 0x1026f90, Func Offset: 0x170
	// Line 466, Address: 0x1026f98, Func Offset: 0x178
	// Line 471, Address: 0x1026fa0, Func Offset: 0x180
	// Line 472, Address: 0x1026fcc, Func Offset: 0x1ac
	// Line 473, Address: 0x1026fd8, Func Offset: 0x1b8
	// Line 475, Address: 0x1026fe0, Func Offset: 0x1c0
	// Line 476, Address: 0x1026ff0, Func Offset: 0x1d0
	// Line 477, Address: 0x1026ff8, Func Offset: 0x1d8
	// Line 480, Address: 0x1027000, Func Offset: 0x1e0
	// Line 481, Address: 0x1027008, Func Offset: 0x1e8
	// Func End, Address: 0x102701c, Func Offset: 0x1fc
}

// 
// Start address: 0x1027020
void sv_move_main(short wD0)
{
	short wD1;
	// Line 484, Address: 0x1027020, Func Offset: 0
	// Line 487, Address: 0x1027030, Func Offset: 0x10
	// Line 489, Address: 0x1027060, Func Offset: 0x40
	// Line 490, Address: 0x1027070, Func Offset: 0x50
	// Line 491, Address: 0x102708c, Func Offset: 0x6c
	// Line 492, Address: 0x10270a0, Func Offset: 0x80
	// Line 493, Address: 0x10270ac, Func Offset: 0x8c
	// Line 495, Address: 0x10270b4, Func Offset: 0x94
	// Line 496, Address: 0x10270e0, Func Offset: 0xc0
	// Line 497, Address: 0x102710c, Func Offset: 0xec
	// Line 499, Address: 0x1027118, Func Offset: 0xf8
	// Func End, Address: 0x102712c, Func Offset: 0x10c
}

// 
// Start address: 0x1027130
void sv_move_main1(short wD0)
{
	// Line 502, Address: 0x1027130, Func Offset: 0
	// Line 503, Address: 0x102713c, Func Offset: 0xc
	// Line 504, Address: 0x1027168, Func Offset: 0x38
	// Line 505, Address: 0x1027194, Func Offset: 0x64
	// Line 506, Address: 0x10271a0, Func Offset: 0x70
	// Func End, Address: 0x10271b0, Func Offset: 0x80
}

// 
// Start address: 0x10271b0
void sv_move_main2(short wD0)
{
	// Line 509, Address: 0x10271b0, Func Offset: 0
	// Line 510, Address: 0x10271bc, Func Offset: 0xc
	// Line 511, Address: 0x10271e8, Func Offset: 0x38
	// Line 512, Address: 0x1027214, Func Offset: 0x64
	// Line 513, Address: 0x1027220, Func Offset: 0x70
	// Func End, Address: 0x1027230, Func Offset: 0x80
}

// 
// Start address: 0x1027230
void sv_move_sub2()
{
	// Line 516, Address: 0x1027230, Func Offset: 0
	// Line 517, Address: 0x1027238, Func Offset: 0x8
	// Line 518, Address: 0x1027240, Func Offset: 0x10
	// Line 519, Address: 0x102724c, Func Offset: 0x1c
	// Func End, Address: 0x102725c, Func Offset: 0x2c
}

// 
// Start address: 0x1027260
void sv_move_sub(short wD0)
{
	_anon0 lD1;
	// Line 522, Address: 0x1027260, Func Offset: 0
	// Line 525, Address: 0x102726c, Func Offset: 0xc
	// Line 526, Address: 0x1027270, Func Offset: 0x10
	// Line 527, Address: 0x102729c, Func Offset: 0x3c
	// Line 528, Address: 0x10272c4, Func Offset: 0x64
	// Line 529, Address: 0x10272d0, Func Offset: 0x70
	// Func End, Address: 0x10272e0, Func Offset: 0x80
}

// 
// Start address: 0x10272e0
void sv_move_minus(short wD1)
{
	_anon0 lD1;
	short wk;
	// Line 532, Address: 0x10272e0, Func Offset: 0
	// Line 536, Address: 0x10272f0, Func Offset: 0x10
	// Line 538, Address: 0x1027314, Func Offset: 0x34
	// Line 539, Address: 0x1027320, Func Offset: 0x40
	// Line 540, Address: 0x1027328, Func Offset: 0x48
	// Line 541, Address: 0x102732c, Func Offset: 0x4c
	// Line 542, Address: 0x1027338, Func Offset: 0x58
	// Func End, Address: 0x102734c, Func Offset: 0x6c
}

// 
// Start address: 0x1027350
void scrv_up_ch(_anon0 lD1)
{
	// Line 545, Address: 0x1027350, Func Offset: 0
	// Line 546, Address: 0x102735c, Func Offset: 0xc
	// Line 547, Address: 0x1027384, Func Offset: 0x34
	// Line 548, Address: 0x102739c, Func Offset: 0x4c
	// Line 549, Address: 0x10273a8, Func Offset: 0x58
	// Line 551, Address: 0x10273b0, Func Offset: 0x60
	// Line 552, Address: 0x10273bc, Func Offset: 0x6c
	// Line 553, Address: 0x10273d0, Func Offset: 0x80
	// Line 554, Address: 0x10273e4, Func Offset: 0x94
	// Line 557, Address: 0x10273f8, Func Offset: 0xa8
	// Line 558, Address: 0x1027404, Func Offset: 0xb4
	// Func End, Address: 0x1027414, Func Offset: 0xc4
}

// 
// Start address: 0x1027420
void sv_move_plus(short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 561, Address: 0x1027420, Func Offset: 0
	// Line 565, Address: 0x1027430, Func Offset: 0x10
	// Line 567, Address: 0x1027450, Func Offset: 0x30
	// Line 568, Address: 0x1027458, Func Offset: 0x38
	// Line 569, Address: 0x1027460, Func Offset: 0x40
	// Line 570, Address: 0x1027464, Func Offset: 0x44
	// Line 571, Address: 0x1027470, Func Offset: 0x50
	// Func End, Address: 0x1027484, Func Offset: 0x64
}

// 
// Start address: 0x1027490
void scrv_down_ch(_anon0 lD1)
{
	// Line 574, Address: 0x1027490, Func Offset: 0
	// Line 575, Address: 0x102749c, Func Offset: 0xc
	// Line 576, Address: 0x10274c4, Func Offset: 0x34
	// Line 577, Address: 0x10274e8, Func Offset: 0x58
	// Line 578, Address: 0x10274f4, Func Offset: 0x64
	// Line 580, Address: 0x10274fc, Func Offset: 0x6c
	// Line 581, Address: 0x1027510, Func Offset: 0x80
	// Line 582, Address: 0x1027524, Func Offset: 0x94
	// Line 585, Address: 0x1027538, Func Offset: 0xa8
	// Line 586, Address: 0x1027544, Func Offset: 0xb4
	// Func End, Address: 0x1027554, Func Offset: 0xc4
}

// 
// Start address: 0x1027560
void scrv_move(_anon0 lD1)
{
	short wD4;
	short wk;
	_anon6 dwk;
	// Line 589, Address: 0x1027560, Func Offset: 0
	// Line 593, Address: 0x1027570, Func Offset: 0x10
	// Line 595, Address: 0x1027580, Func Offset: 0x20
	// Line 596, Address: 0x102758c, Func Offset: 0x2c
	// Line 597, Address: 0x1027594, Func Offset: 0x34
	// Line 599, Address: 0x1027598, Func Offset: 0x38
	// Line 600, Address: 0x10275ac, Func Offset: 0x4c
	// Line 601, Address: 0x10275c4, Func Offset: 0x64
	// Line 603, Address: 0x10275d0, Func Offset: 0x70
	// Line 605, Address: 0x10275dc, Func Offset: 0x7c
	// Line 606, Address: 0x1027618, Func Offset: 0xb8
	// Line 607, Address: 0x1027620, Func Offset: 0xc0
	// Line 608, Address: 0x1027634, Func Offset: 0xd4
	// Line 609, Address: 0x1027660, Func Offset: 0x100
	// Line 610, Address: 0x102768c, Func Offset: 0x12c
	// Line 612, Address: 0x10276a0, Func Offset: 0x140
	// Func End, Address: 0x10276b4, Func Offset: 0x154
}

// 
// Start address: 0x10276c0
void scrollb_hv(int lD4, int lD5)
{
	int lD0;
	int lD1;
	_anon0 lD2;
	// Line 624, Address: 0x10276c0, Func Offset: 0
	// Line 628, Address: 0x10276d4, Func Offset: 0x14
	// Line 629, Address: 0x10276dc, Func Offset: 0x1c
	// Line 630, Address: 0x10276f0, Func Offset: 0x30
	// Line 631, Address: 0x1027720, Func Offset: 0x60
	// Line 632, Address: 0x1027734, Func Offset: 0x74
	// Line 633, Address: 0x102775c, Func Offset: 0x9c
	// Line 635, Address: 0x1027770, Func Offset: 0xb0
	// Line 636, Address: 0x1027778, Func Offset: 0xb8
	// Line 637, Address: 0x102778c, Func Offset: 0xcc
	// Line 638, Address: 0x10277bc, Func Offset: 0xfc
	// Line 639, Address: 0x10277d0, Func Offset: 0x110
	// Line 640, Address: 0x10277f8, Func Offset: 0x138
	// Line 642, Address: 0x102780c, Func Offset: 0x14c
	// Func End, Address: 0x1027820, Func Offset: 0x160
}

// 
// Start address: 0x1027820
void scrollc_h(int lD4, int flagc)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 716, Address: 0x1027820, Func Offset: 0
	// Line 720, Address: 0x1027830, Func Offset: 0x10
	// Line 721, Address: 0x102783c, Func Offset: 0x1c
	// Line 722, Address: 0x102784c, Func Offset: 0x2c
	// Line 724, Address: 0x1027858, Func Offset: 0x38
	// Line 725, Address: 0x1027860, Func Offset: 0x40
	// Line 726, Address: 0x1027868, Func Offset: 0x48
	// Line 728, Address: 0x1027874, Func Offset: 0x54
	// Line 729, Address: 0x1027880, Func Offset: 0x60
	// Line 730, Address: 0x1027894, Func Offset: 0x74
	// Line 735, Address: 0x10278a0, Func Offset: 0x80
	// Line 736, Address: 0x10278b4, Func Offset: 0x94
	// Line 737, Address: 0x10278c4, Func Offset: 0xa4
	// Line 738, Address: 0x10278fc, Func Offset: 0xdc
	// Line 740, Address: 0x102791c, Func Offset: 0xfc
	// Func End, Address: 0x102792c, Func Offset: 0x10c
}

// 
// Start address: 0x1027930
void scrollz_h(int lD4, int flagz)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 752, Address: 0x1027930, Func Offset: 0
	// Line 756, Address: 0x1027940, Func Offset: 0x10
	// Line 757, Address: 0x102794c, Func Offset: 0x1c
	// Line 758, Address: 0x102795c, Func Offset: 0x2c
	// Line 760, Address: 0x1027968, Func Offset: 0x38
	// Line 761, Address: 0x1027970, Func Offset: 0x40
	// Line 762, Address: 0x1027978, Func Offset: 0x48
	// Line 764, Address: 0x1027984, Func Offset: 0x54
	// Line 765, Address: 0x1027990, Func Offset: 0x60
	// Line 766, Address: 0x10279a4, Func Offset: 0x74
	// Line 771, Address: 0x10279b0, Func Offset: 0x80
	// Line 772, Address: 0x10279c4, Func Offset: 0x94
	// Line 773, Address: 0x10279d4, Func Offset: 0xa4
	// Line 774, Address: 0x1027a0c, Func Offset: 0xdc
	// Line 776, Address: 0x1027a2c, Func Offset: 0xfc
	// Func End, Address: 0x1027a3c, Func Offset: 0x10c
}

// 
// Start address: 0x1027a40
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 787, Address: 0x1027a40, Func Offset: 0
	// Line 793, Address: 0x1027a5c, Func Offset: 0x1c
	// Line 794, Address: 0x1027a64, Func Offset: 0x24
	// Line 795, Address: 0x1027a70, Func Offset: 0x30
	// Line 796, Address: 0x1027a7c, Func Offset: 0x3c
	// Line 797, Address: 0x1027a84, Func Offset: 0x44
	// Line 798, Address: 0x1027a88, Func Offset: 0x48
	// Line 804, Address: 0x1027a9c, Func Offset: 0x5c
	// Func End, Address: 0x1027ac0, Func Offset: 0x80
}

// 
// Start address: 0x1027ac0
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
	// Line 815, Address: 0x1027ac0, Func Offset: 0
	// Line 824, Address: 0x1027ae0, Func Offset: 0x20
	// Line 825, Address: 0x1027ae8, Func Offset: 0x28
	// Line 826, Address: 0x1027af4, Func Offset: 0x34
	// Line 827, Address: 0x1027b00, Func Offset: 0x40
	// Line 828, Address: 0x1027b08, Func Offset: 0x48
	// Line 829, Address: 0x1027b0c, Func Offset: 0x4c
	// Line 831, Address: 0x1027b20, Func Offset: 0x60
	// Line 832, Address: 0x1027b28, Func Offset: 0x68
	// Line 833, Address: 0x1027b34, Func Offset: 0x74
	// Line 834, Address: 0x1027b40, Func Offset: 0x80
	// Line 835, Address: 0x1027b48, Func Offset: 0x88
	// Line 837, Address: 0x1027b4c, Func Offset: 0x8c
	// Line 838, Address: 0x1027b58, Func Offset: 0x98
	// Line 839, Address: 0x1027b6c, Func Offset: 0xac
	// Line 841, Address: 0x1027b78, Func Offset: 0xb8
	// Line 842, Address: 0x1027b80, Func Offset: 0xc0
	// Line 843, Address: 0x1027b88, Func Offset: 0xc8
	// Line 844, Address: 0x1027ba8, Func Offset: 0xe8
	// Line 846, Address: 0x1027bd4, Func Offset: 0x114
	// Line 847, Address: 0x1027be8, Func Offset: 0x128
	// Line 849, Address: 0x1027bf4, Func Offset: 0x134
	// Line 850, Address: 0x1027bfc, Func Offset: 0x13c
	// Line 851, Address: 0x1027c04, Func Offset: 0x144
	// Line 852, Address: 0x1027c24, Func Offset: 0x164
	// Line 854, Address: 0x1027c50, Func Offset: 0x190
	// Line 855, Address: 0x1027c64, Func Offset: 0x1a4
	// Line 857, Address: 0x1027c70, Func Offset: 0x1b0
	// Line 858, Address: 0x1027c78, Func Offset: 0x1b8
	// Line 859, Address: 0x1027c80, Func Offset: 0x1c0
	// Line 860, Address: 0x1027ca0, Func Offset: 0x1e0
	// Line 862, Address: 0x1027ccc, Func Offset: 0x20c
	// Line 863, Address: 0x1027ce0, Func Offset: 0x220
	// Line 865, Address: 0x1027cec, Func Offset: 0x22c
	// Line 866, Address: 0x1027cf4, Func Offset: 0x234
	// Line 867, Address: 0x1027cfc, Func Offset: 0x23c
	// Line 868, Address: 0x1027d1c, Func Offset: 0x25c
	// Line 871, Address: 0x1027d48, Func Offset: 0x288
	// Func End, Address: 0x1027d70, Func Offset: 0x2b0
}

// 
// Start address: 0x1027d70
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
	// Line 885, Address: 0x1027d70, Func Offset: 0
	// Line 896, Address: 0x1027d9c, Func Offset: 0x2c
	// Line 898, Address: 0x1027da4, Func Offset: 0x34
	// Line 899, Address: 0x1027dbc, Func Offset: 0x4c
	// Line 900, Address: 0x1027dd0, Func Offset: 0x60
	// Line 902, Address: 0x1027dd8, Func Offset: 0x68
	// Line 904, Address: 0x1027dec, Func Offset: 0x7c
	// Line 905, Address: 0x1027e04, Func Offset: 0x94
	// Line 906, Address: 0x1027e18, Func Offset: 0xa8
	// Line 907, Address: 0x1027e20, Func Offset: 0xb0
	// Line 909, Address: 0x1027e28, Func Offset: 0xb8
	// Line 910, Address: 0x1027e3c, Func Offset: 0xcc
	// Line 915, Address: 0x1027e44, Func Offset: 0xd4
	// Line 916, Address: 0x1027e94, Func Offset: 0x124
	// Line 917, Address: 0x1027e9c, Func Offset: 0x12c
	// Line 918, Address: 0x1027ebc, Func Offset: 0x14c
	// Line 919, Address: 0x1027edc, Func Offset: 0x16c
	// Line 920, Address: 0x1027f00, Func Offset: 0x190
	// Line 921, Address: 0x1027f0c, Func Offset: 0x19c
	// Line 922, Address: 0x1027f14, Func Offset: 0x1a4
	// Line 924, Address: 0x1027f34, Func Offset: 0x1c4
	// Line 928, Address: 0x1027f60, Func Offset: 0x1f0
	// Line 931, Address: 0x1027f68, Func Offset: 0x1f8
	// Line 932, Address: 0x1027f6c, Func Offset: 0x1fc
	// Line 936, Address: 0x1027f8c, Func Offset: 0x21c
	// Line 943, Address: 0x1027fb8, Func Offset: 0x248
	// Line 950, Address: 0x1027fcc, Func Offset: 0x25c
	// Line 951, Address: 0x1027fd4, Func Offset: 0x264
	// Line 952, Address: 0x1027fdc, Func Offset: 0x26c
	// Line 953, Address: 0x1027ff4, Func Offset: 0x284
	// Line 954, Address: 0x1028014, Func Offset: 0x2a4
	// Line 958, Address: 0x102801c, Func Offset: 0x2ac
	// Line 960, Address: 0x102804c, Func Offset: 0x2dc
	// Line 961, Address: 0x1028058, Func Offset: 0x2e8
	// Line 965, Address: 0x1028068, Func Offset: 0x2f8
	// Line 966, Address: 0x1028074, Func Offset: 0x304
	// Line 967, Address: 0x1028094, Func Offset: 0x324
	// Line 968, Address: 0x10280a0, Func Offset: 0x330
	// Line 969, Address: 0x10280cc, Func Offset: 0x35c
	// Line 970, Address: 0x10280ec, Func Offset: 0x37c
	// Line 972, Address: 0x1028110, Func Offset: 0x3a0
	// Line 975, Address: 0x1028134, Func Offset: 0x3c4
	// Line 977, Address: 0x1028154, Func Offset: 0x3e4
	// Line 980, Address: 0x1028168, Func Offset: 0x3f8
	// Line 981, Address: 0x1028174, Func Offset: 0x404
	// Line 982, Address: 0x1028184, Func Offset: 0x414
	// Line 984, Address: 0x102818c, Func Offset: 0x41c
	// Func End, Address: 0x10281b4, Func Offset: 0x444
}

// 
// Start address: 0x10281c0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1011, Address: 0x10281c0, Func Offset: 0
	// Line 1024, Address: 0x10281e8, Func Offset: 0x28
	// Line 1027, Address: 0x1028208, Func Offset: 0x48
	// Line 1028, Address: 0x102821c, Func Offset: 0x5c
	// Line 1029, Address: 0x1028230, Func Offset: 0x70
	// Line 1030, Address: 0x1028244, Func Offset: 0x84
	// Line 1032, Address: 0x1028258, Func Offset: 0x98
	// Line 1033, Address: 0x1028264, Func Offset: 0xa4
	// Line 1034, Address: 0x1028278, Func Offset: 0xb8
	// Func End, Address: 0x1028288, Func Offset: 0xc8
}

// 
// Start address: 0x1028290
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1038, Address: 0x1028290, Func Offset: 0
	// Line 1042, Address: 0x10282b8, Func Offset: 0x28
	// Line 1045, Address: 0x10282d8, Func Offset: 0x48
	// Line 1046, Address: 0x10282ec, Func Offset: 0x5c
	// Line 1047, Address: 0x1028300, Func Offset: 0x70
	// Line 1048, Address: 0x1028314, Func Offset: 0x84
	// Line 1050, Address: 0x1028328, Func Offset: 0x98
	// Line 1051, Address: 0x1028334, Func Offset: 0xa4
	// Line 1052, Address: 0x1028348, Func Offset: 0xb8
	// Func End, Address: 0x1028358, Func Offset: 0xc8
}

// 
// Start address: 0x1028360
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1068, Address: 0x1028360, Func Offset: 0
	// Line 1072, Address: 0x1028388, Func Offset: 0x28
	// Line 1073, Address: 0x10283a8, Func Offset: 0x48
	// Line 1074, Address: 0x10283bc, Func Offset: 0x5c
	// Line 1075, Address: 0x10283cc, Func Offset: 0x6c
	// Line 1076, Address: 0x10283f0, Func Offset: 0x90
	// Line 1077, Address: 0x10283fc, Func Offset: 0x9c
	// Line 1078, Address: 0x1028410, Func Offset: 0xb0
	// Func End, Address: 0x1028420, Func Offset: 0xc0
}

// 
// Start address: 0x1028420
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
	// Line 1096, Address: 0x1028420, Func Offset: 0
	// Line 1102, Address: 0x1028454, Func Offset: 0x34
	// Line 1103, Address: 0x1028470, Func Offset: 0x50
	// Line 1104, Address: 0x1028484, Func Offset: 0x64
	// Line 1105, Address: 0x102848c, Func Offset: 0x6c
	// Line 1107, Address: 0x1028494, Func Offset: 0x74
	// Line 1108, Address: 0x102849c, Func Offset: 0x7c
	// Line 1109, Address: 0x10284a8, Func Offset: 0x88
	// Line 1110, Address: 0x10284b4, Func Offset: 0x94
	// Line 1111, Address: 0x10284b8, Func Offset: 0x98
	// Line 1112, Address: 0x10284bc, Func Offset: 0x9c
	// Line 1113, Address: 0x10284c0, Func Offset: 0xa0
	// Line 1114, Address: 0x10284c4, Func Offset: 0xa4
	// Line 1115, Address: 0x10284cc, Func Offset: 0xac
	// Line 1116, Address: 0x10284d8, Func Offset: 0xb8
	// Line 1117, Address: 0x10284dc, Func Offset: 0xbc
	// Line 1118, Address: 0x10284e0, Func Offset: 0xc0
	// Line 1119, Address: 0x10284e4, Func Offset: 0xc4
	// Line 1120, Address: 0x10284e8, Func Offset: 0xc8
	// Line 1121, Address: 0x10284f0, Func Offset: 0xd0
	// Line 1122, Address: 0x10284fc, Func Offset: 0xdc
	// Line 1123, Address: 0x1028500, Func Offset: 0xe0
	// Line 1124, Address: 0x1028504, Func Offset: 0xe4
	// Line 1125, Address: 0x1028508, Func Offset: 0xe8
	// Line 1126, Address: 0x102850c, Func Offset: 0xec
	// Line 1128, Address: 0x1028514, Func Offset: 0xf4
	// Line 1129, Address: 0x1028518, Func Offset: 0xf8
	// Line 1130, Address: 0x102851c, Func Offset: 0xfc
	// Line 1131, Address: 0x1028520, Func Offset: 0x100
	// Line 1134, Address: 0x1028524, Func Offset: 0x104
	// Line 1135, Address: 0x1028568, Func Offset: 0x148
	// Line 1136, Address: 0x10285ac, Func Offset: 0x18c
	// Line 1137, Address: 0x10285f0, Func Offset: 0x1d0
	// Line 1138, Address: 0x1028634, Func Offset: 0x214
	// Func End, Address: 0x1028664, Func Offset: 0x244
}

// 
// Start address: 0x1028670
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1157, Address: 0x1028670, Func Offset: 0
	// Line 1158, Address: 0x1028690, Func Offset: 0x20
	// Line 1159, Address: 0x10286b0, Func Offset: 0x40
	// Func End, Address: 0x10286c0, Func Offset: 0x50
}

// 
// Start address: 0x10286c0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1162, Address: 0x10286c0, Func Offset: 0
	// Line 1163, Address: 0x10286e0, Func Offset: 0x20
	// Line 1164, Address: 0x10286e4, Func Offset: 0x24
	// Line 1165, Address: 0x1028704, Func Offset: 0x44
	// Func End, Address: 0x1028714, Func Offset: 0x54
}

// 
// Start address: 0x1028720
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1168, Address: 0x1028720, Func Offset: 0
	// Line 1174, Address: 0x1028750, Func Offset: 0x30
	// Line 1175, Address: 0x1028760, Func Offset: 0x40
	// Line 1178, Address: 0x1028770, Func Offset: 0x50
	// Line 1179, Address: 0x1028790, Func Offset: 0x70
	// Line 1180, Address: 0x10287b0, Func Offset: 0x90
	// Line 1181, Address: 0x10287d8, Func Offset: 0xb8
	// Line 1182, Address: 0x1028800, Func Offset: 0xe0
	// Line 1183, Address: 0x1028848, Func Offset: 0x128
	// Line 1185, Address: 0x1028854, Func Offset: 0x134
	// Line 1187, Address: 0x1028870, Func Offset: 0x150
	// Line 1188, Address: 0x1028878, Func Offset: 0x158
	// Line 1189, Address: 0x1028884, Func Offset: 0x164
	// Line 1191, Address: 0x1028890, Func Offset: 0x170
	// Line 1192, Address: 0x1028898, Func Offset: 0x178
	// Line 1193, Address: 0x10288b8, Func Offset: 0x198
	// Line 1194, Address: 0x10288d4, Func Offset: 0x1b4
	// Line 1195, Address: 0x10288dc, Func Offset: 0x1bc
	// Line 1196, Address: 0x10288fc, Func Offset: 0x1dc
	// Line 1198, Address: 0x1028918, Func Offset: 0x1f8
	// Line 1199, Address: 0x1028920, Func Offset: 0x200
	// Line 1200, Address: 0x1028928, Func Offset: 0x208
	// Line 1201, Address: 0x1028934, Func Offset: 0x214
	// Line 1202, Address: 0x102894c, Func Offset: 0x22c
	// Line 1204, Address: 0x102895c, Func Offset: 0x23c
	// Line 1206, Address: 0x1028968, Func Offset: 0x248
	// Line 1207, Address: 0x1028970, Func Offset: 0x250
	// Line 1208, Address: 0x1028974, Func Offset: 0x254
	// Func End, Address: 0x1028994, Func Offset: 0x274
}

// 
// Start address: 0x10289a0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1224, Address: 0x10289a0, Func Offset: 0
	// Line 1229, Address: 0x10289c8, Func Offset: 0x28
	// Line 1230, Address: 0x1028a2c, Func Offset: 0x8c
	// Line 1231, Address: 0x1028a34, Func Offset: 0x94
	// Line 1232, Address: 0x1028a3c, Func Offset: 0x9c
	// Line 1233, Address: 0x1028a5c, Func Offset: 0xbc
	// Line 1234, Address: 0x1028a78, Func Offset: 0xd8
	// Line 1235, Address: 0x1028a80, Func Offset: 0xe0
	// Line 1236, Address: 0x1028aa0, Func Offset: 0x100
	// Line 1238, Address: 0x1028abc, Func Offset: 0x11c
	// Line 1239, Address: 0x1028ac4, Func Offset: 0x124
	// Line 1240, Address: 0x1028acc, Func Offset: 0x12c
	// Line 1241, Address: 0x1028ad8, Func Offset: 0x138
	// Line 1242, Address: 0x1028af0, Func Offset: 0x150
	// Line 1243, Address: 0x1028af8, Func Offset: 0x158
	// Line 1245, Address: 0x1028b08, Func Offset: 0x168
	// Line 1247, Address: 0x1028b14, Func Offset: 0x174
	// Line 1248, Address: 0x1028b1c, Func Offset: 0x17c
	// Line 1249, Address: 0x1028b20, Func Offset: 0x180
	// Func End, Address: 0x1028b3c, Func Offset: 0x19c
}

// 
// Start address: 0x1028b40
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1263, Address: 0x1028b40, Func Offset: 0
	// Line 1270, Address: 0x1028b5c, Func Offset: 0x1c
	// Line 1271, Address: 0x1028b60, Func Offset: 0x20
	// Line 1272, Address: 0x1028b68, Func Offset: 0x28
	// Line 1273, Address: 0x1028b8c, Func Offset: 0x4c
	// Line 1274, Address: 0x1028b98, Func Offset: 0x58
	// Line 1275, Address: 0x1028bb0, Func Offset: 0x70
	// Line 1276, Address: 0x1028bc4, Func Offset: 0x84
	// Line 1279, Address: 0x1028bdc, Func Offset: 0x9c
	// Func End, Address: 0x1028bf4, Func Offset: 0xb4
}

// 
// Start address: 0x1028c00
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1291, Address: 0x1028c00, Func Offset: 0
	// Line 1292, Address: 0x1028c0c, Func Offset: 0xc
	// Line 1293, Address: 0x1028c38, Func Offset: 0x38
	// Line 1294, Address: 0x1028c84, Func Offset: 0x84
	// Line 1295, Address: 0x1028cb0, Func Offset: 0xb0
	// Line 1299, Address: 0x1028d08, Func Offset: 0x108
	// Line 1300, Address: 0x1028d0c, Func Offset: 0x10c
	// Func End, Address: 0x1028d18, Func Offset: 0x118
}

// 
// Start address: 0x1028d20
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1315, Address: 0x1028d20, Func Offset: 0
	// Line 1316, Address: 0x1028d3c, Func Offset: 0x1c
	// Line 1317, Address: 0x1028d58, Func Offset: 0x38
	// Func End, Address: 0x1028d68, Func Offset: 0x48
}

// 
// Start address: 0x1028d70
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1320, Address: 0x1028d70, Func Offset: 0
	// Line 1321, Address: 0x1028d8c, Func Offset: 0x1c
	// Line 1322, Address: 0x1028d90, Func Offset: 0x20
	// Line 1323, Address: 0x1028dac, Func Offset: 0x3c
	// Func End, Address: 0x1028dbc, Func Offset: 0x4c
}

// 
// Start address: 0x1028dc0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1326, Address: 0x1028dc0, Func Offset: 0
	// Line 1327, Address: 0x1028dd4, Func Offset: 0x14
	// Line 1328, Address: 0x1028df0, Func Offset: 0x30
	// Func End, Address: 0x1028e00, Func Offset: 0x40
}

// 
// Start address: 0x1028e00
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1331, Address: 0x1028e00, Func Offset: 0
	// Line 1332, Address: 0x1028e1c, Func Offset: 0x1c
	// Line 1333, Address: 0x1028e38, Func Offset: 0x38
	// Func End, Address: 0x1028e48, Func Offset: 0x48
}

// 
// Start address: 0x1028e50
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1336, Address: 0x1028e50, Func Offset: 0
	// Line 1337, Address: 0x1028e68, Func Offset: 0x18
	// Line 1338, Address: 0x1028e78, Func Offset: 0x28
	// Line 1339, Address: 0x1028e88, Func Offset: 0x38
	// Line 1340, Address: 0x1028e94, Func Offset: 0x44
	// Line 1342, Address: 0x1028ea0, Func Offset: 0x50
	// Line 1343, Address: 0x1028ecc, Func Offset: 0x7c
	// Line 1345, Address: 0x1028ef8, Func Offset: 0xa8
	// Func End, Address: 0x1028f04, Func Offset: 0xb4
}

// 
// Start address: 0x1028f10
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1359, Address: 0x1028f10, Func Offset: 0
	// Line 1364, Address: 0x1028f28, Func Offset: 0x18
	// Line 1365, Address: 0x1028f34, Func Offset: 0x24
	// Line 1366, Address: 0x1028f40, Func Offset: 0x30
	// Line 1367, Address: 0x1028f48, Func Offset: 0x38
	// Line 1368, Address: 0x1028f4c, Func Offset: 0x3c
	// Line 1372, Address: 0x1028f64, Func Offset: 0x54
	// Line 1373, Address: 0x1028f6c, Func Offset: 0x5c
	// Line 1374, Address: 0x1028f70, Func Offset: 0x60
	// Line 1375, Address: 0x1028f80, Func Offset: 0x70
	// Func End, Address: 0x1028fa0, Func Offset: 0x90
}

// 
// Start address: 0x1028fa0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1378, Address: 0x1028fa0, Func Offset: 0
	// Line 1379, Address: 0x1028fb8, Func Offset: 0x18
	// Line 1380, Address: 0x1028fd8, Func Offset: 0x38
	// Func End, Address: 0x1028fe8, Func Offset: 0x48
}

// 
// Start address: 0x1028ff0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1383, Address: 0x1028ff0, Func Offset: 0
	// Line 1387, Address: 0x1029010, Func Offset: 0x20
	// Line 1388, Address: 0x102902c, Func Offset: 0x3c
	// Line 1389, Address: 0x1029054, Func Offset: 0x64
	// Line 1390, Address: 0x1029060, Func Offset: 0x70
	// Line 1391, Address: 0x1029088, Func Offset: 0x98
	// Func End, Address: 0x1029098, Func Offset: 0xa8
}

// 
// Start address: 0x10290a0
void mapwrt_z11b(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1394, Address: 0x10290a0, Func Offset: 0
	// Line 1397, Address: 0x10290bc, Func Offset: 0x1c
	// Line 1398, Address: 0x10290c4, Func Offset: 0x24
	// Line 1401, Address: 0x10290cc, Func Offset: 0x2c
	// Line 1402, Address: 0x10290f0, Func Offset: 0x50
	// Line 1403, Address: 0x1029110, Func Offset: 0x70
	// Line 1404, Address: 0x1029118, Func Offset: 0x78
	// Line 1405, Address: 0x102913c, Func Offset: 0x9c
	// Func End, Address: 0x1029158, Func Offset: 0xb8
}

// 
// Start address: 0x1029160
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1421, Address: 0x1029160, Func Offset: 0
	// Line 1426, Address: 0x1029188, Func Offset: 0x28
	// Line 1427, Address: 0x1029198, Func Offset: 0x38
	// Line 1428, Address: 0x10291b4, Func Offset: 0x54
	// Line 1429, Address: 0x10291d8, Func Offset: 0x78
	// Line 1430, Address: 0x1029200, Func Offset: 0xa0
	// Line 1431, Address: 0x102920c, Func Offset: 0xac
	// Line 1432, Address: 0x1029214, Func Offset: 0xb4
	// Line 1433, Address: 0x1029230, Func Offset: 0xd0
	// Line 1434, Address: 0x1029258, Func Offset: 0xf8
	// Line 1436, Address: 0x1029260, Func Offset: 0x100
	// Line 1437, Address: 0x1029264, Func Offset: 0x104
	// Line 1438, Address: 0x1029280, Func Offset: 0x120
	// Line 1440, Address: 0x10292a8, Func Offset: 0x148
	// Func End, Address: 0x10292c4, Func Offset: 0x164
}

// 
// Start address: 0x10292d0
void mapinit()
{
	// Line 1451, Address: 0x10292d0, Func Offset: 0
	// Line 1453, Address: 0x10292d8, Func Offset: 0x8
	// Line 1454, Address: 0x10292ec, Func Offset: 0x1c
	// Line 1456, Address: 0x1029300, Func Offset: 0x30
	// Line 1457, Address: 0x1029318, Func Offset: 0x48
	// Line 1458, Address: 0x1029338, Func Offset: 0x68
	// Func End, Address: 0x1029348, Func Offset: 0x78
}

