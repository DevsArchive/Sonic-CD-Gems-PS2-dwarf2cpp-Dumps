typedef struct tagPOINT;
typedef struct _anon0;
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
typedef unsigned short type_2[6];
typedef int type_3[2];
typedef unsigned short type_4[4];
typedef unsigned char type_5[65];
typedef unsigned short type_6[4][1024];
typedef unsigned char type_8[2];
typedef int type_9[12];
typedef unsigned char type_10[64];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef _anon2* type_15[8];
typedef short type_16[256];
typedef int type_17[37];
typedef unsigned short type_18[2];
typedef _anon1 type_19[128];
typedef unsigned char type_20[4];
typedef _anon2* type_21[8];

struct tagPOINT
{
	int x;
	int y;
};

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
unsigned short scr_dir_tbl[6];
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
_anon11 scr_die;
_anon6 scr_timer;
_anon11 zone_flag;
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
_anon11 scrflagc;
_anon11 scrflagz;
_anon11 scrflagb;
_anon2 vscroll;
short scra_hz;
_anon11 scrflaga;
_anon6 scroll_start;
_anon2* lphscrollbuff;
short scra_vz;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon11 scrflagaw;
unsigned char mapwka[64][8];
_anon2 scra_v_posiw;
_anon2 scra_h_posiw;
_anon11 scrflagbw;
_anon2 scrb_v_posiw;
_anon2 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

void enecginit();
void divdevset();
void scr_set();
void playposiset();
void scrbinit(short yWk, short xWk);
void scroll();
int z71aline(int hsCount);
int z71aline0(int hsCount);
int z71aline1(int hsCount);
void zonescrsetsub0(short VPosi, unsigned short offs);
void scroll_h();
void scrh_move();
void right_check(unsigned short wD0);
void left_check(unsigned short wD0);
void scroll_v();
void sv_move_main(unsigned short wD0);
void sv_move_main1(unsigned short wD0);
void sv_move_main2(unsigned short wD0);
void sv_move_sub2();
void sv_move_sub(unsigned short wD0);
void sv_move_minus(unsigned short wD1);
void scrv_up_ch(_anon2 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon2 lD1);
void scrv_move(_anon2 lD1);
void scrollb_hv(_anon2 lD4, _anon2 lD5);
void scrollb_v(unsigned short wD0);
void scrollb_h(int lD4, int flagb);
void scrollc_h(int lD4, int flagc);
void scrollz_h(int lD4, int flagz);
void scrollwrtadva();
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

// 
// Start address: 0x101f660
void enecginit()
{
	// Line 124, Address: 0x101f660, Func Offset: 0
	// Func End, Address: 0x101f668, Func Offset: 0x8
}

// 
// Start address: 0x101f670
void divdevset()
{
	// Line 128, Address: 0x101f670, Func Offset: 0
	// Func End, Address: 0x101f678, Func Offset: 0x8
}

// 
// Start address: 0x101f680
void scr_set()
{
	int i;
	// Line 177, Address: 0x101f680, Func Offset: 0
	// Line 180, Address: 0x101f68c, Func Offset: 0xc
	// Line 182, Address: 0x101f6d4, Func Offset: 0x54
	// Line 183, Address: 0x101f6d8, Func Offset: 0x58
	// Line 184, Address: 0x101f6fc, Func Offset: 0x7c
	// Line 185, Address: 0x101f718, Func Offset: 0x98
	// Line 186, Address: 0x101f73c, Func Offset: 0xbc
	// Line 187, Address: 0x101f758, Func Offset: 0xd8
	// Line 188, Address: 0x101f77c, Func Offset: 0xfc
	// Line 189, Address: 0x101f798, Func Offset: 0x118
	// Line 190, Address: 0x101f7bc, Func Offset: 0x13c
	// Line 191, Address: 0x101f7d8, Func Offset: 0x158
	// Line 193, Address: 0x101f7fc, Func Offset: 0x17c
	// Line 194, Address: 0x101f820, Func Offset: 0x1a0
	// Line 195, Address: 0x101f82c, Func Offset: 0x1ac
	// Line 197, Address: 0x101f838, Func Offset: 0x1b8
	// Line 198, Address: 0x101f85c, Func Offset: 0x1dc
	// Line 200, Address: 0x101f868, Func Offset: 0x1e8
	// Line 201, Address: 0x101f870, Func Offset: 0x1f0
	// Func End, Address: 0x101f884, Func Offset: 0x204
}

// 
// Start address: 0x101f890
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 205, Address: 0x101f890, Func Offset: 0
	// Line 206, Address: 0x101f8a4, Func Offset: 0x14
	// Line 210, Address: 0x101f8c0, Func Offset: 0x30
	// Line 218, Address: 0x101f8ec, Func Offset: 0x5c
	// Line 220, Address: 0x101f900, Func Offset: 0x70
	// Line 221, Address: 0x101f908, Func Offset: 0x78
	// Line 222, Address: 0x101f918, Func Offset: 0x88
	// Line 223, Address: 0x101f928, Func Offset: 0x98
	// Line 224, Address: 0x101f93c, Func Offset: 0xac
	// Line 228, Address: 0x101f944, Func Offset: 0xb4
	// Line 229, Address: 0x101f948, Func Offset: 0xb8
	// Line 230, Address: 0x101f96c, Func Offset: 0xdc
	// Line 233, Address: 0x101f990, Func Offset: 0x100
	// Line 234, Address: 0x101f9a4, Func Offset: 0x114
	// Line 235, Address: 0x101f9b0, Func Offset: 0x120
	// Line 237, Address: 0x101f9b8, Func Offset: 0x128
	// Line 241, Address: 0x101f9bc, Func Offset: 0x12c
	// Line 242, Address: 0x101f9e0, Func Offset: 0x150
	// Line 244, Address: 0x101f9f0, Func Offset: 0x160
	// Line 246, Address: 0x101f9f8, Func Offset: 0x168
	// Line 247, Address: 0x101fa0c, Func Offset: 0x17c
	// Line 248, Address: 0x101fa18, Func Offset: 0x188
	// Line 250, Address: 0x101fa20, Func Offset: 0x190
	// Line 253, Address: 0x101fa24, Func Offset: 0x194
	// Line 254, Address: 0x101fa48, Func Offset: 0x1b8
	// Line 257, Address: 0x101fa58, Func Offset: 0x1c8
	// Line 259, Address: 0x101fa60, Func Offset: 0x1d0
	// Line 261, Address: 0x101fa70, Func Offset: 0x1e0
	// Line 262, Address: 0x101fa74, Func Offset: 0x1e4
	// Line 263, Address: 0x101fa8c, Func Offset: 0x1fc
	// Line 264, Address: 0x101faa4, Func Offset: 0x214
	// Line 265, Address: 0x101fabc, Func Offset: 0x22c
	// Line 268, Address: 0x101fad4, Func Offset: 0x244
	// Func End, Address: 0x101faf0, Func Offset: 0x260
}

// 
// Start address: 0x101faf0
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 272, Address: 0x101faf0, Func Offset: 0
	// Line 276, Address: 0x101fafc, Func Offset: 0xc
	// Line 277, Address: 0x101fb00, Func Offset: 0x10
	// Line 278, Address: 0x101fb08, Func Offset: 0x18
	// Line 279, Address: 0x101fb20, Func Offset: 0x30
	// Line 280, Address: 0x101fb30, Func Offset: 0x40
	// Line 281, Address: 0x101fb3c, Func Offset: 0x4c
	// Line 283, Address: 0x101fb48, Func Offset: 0x58
	// Line 284, Address: 0x101fb6c, Func Offset: 0x7c
	// Line 285, Address: 0x101fb90, Func Offset: 0xa0
	// Line 286, Address: 0x101fbbc, Func Offset: 0xcc
	// Func End, Address: 0x101fbc8, Func Offset: 0xd8
}

// 
// Start address: 0x101fbd0
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 290, Address: 0x101fbd0, Func Offset: 0
	// Line 295, Address: 0x101fbe0, Func Offset: 0x10
	// Line 298, Address: 0x101fbf0, Func Offset: 0x20
	// Line 299, Address: 0x101fc1c, Func Offset: 0x4c
	// Line 300, Address: 0x101fc24, Func Offset: 0x54
	// Line 301, Address: 0x101fc2c, Func Offset: 0x5c
	// Line 303, Address: 0x101fc34, Func Offset: 0x64
	// Line 304, Address: 0x101fc44, Func Offset: 0x74
	// Line 308, Address: 0x101fc54, Func Offset: 0x84
	// Line 309, Address: 0x101fc74, Func Offset: 0xa4
	// Line 310, Address: 0x101fc94, Func Offset: 0xc4
	// Line 312, Address: 0x101fccc, Func Offset: 0xfc
	// Line 313, Address: 0x101fcd0, Func Offset: 0x100
	// Line 314, Address: 0x101fcdc, Func Offset: 0x10c
	// Line 315, Address: 0x101fd00, Func Offset: 0x130
	// Line 317, Address: 0x101fd0c, Func Offset: 0x13c
	// Line 318, Address: 0x101fd1c, Func Offset: 0x14c
	// Line 319, Address: 0x101fd2c, Func Offset: 0x15c
	// Line 320, Address: 0x101fd3c, Func Offset: 0x16c
	// Line 321, Address: 0x101fd70, Func Offset: 0x1a0
	// Line 322, Address: 0x101fd78, Func Offset: 0x1a8
	// Line 324, Address: 0x101fd80, Func Offset: 0x1b0
	// Line 327, Address: 0x101fd84, Func Offset: 0x1b4
	// Line 329, Address: 0x101fd94, Func Offset: 0x1c4
	// Line 331, Address: 0x101fda0, Func Offset: 0x1d0
	// Line 332, Address: 0x101fdd0, Func Offset: 0x200
	// Line 333, Address: 0x101fdd4, Func Offset: 0x204
	// Line 335, Address: 0x101fde4, Func Offset: 0x214
	// Line 337, Address: 0x101fdf4, Func Offset: 0x224
	// Line 339, Address: 0x101fe00, Func Offset: 0x230
	// Line 340, Address: 0x101fe30, Func Offset: 0x260
	// Line 341, Address: 0x101fe34, Func Offset: 0x264
	// Line 343, Address: 0x101fe44, Func Offset: 0x274
	// Line 347, Address: 0x101fe54, Func Offset: 0x284
	// Line 348, Address: 0x101fe60, Func Offset: 0x290
	// Line 349, Address: 0x101fe6c, Func Offset: 0x29c
	// Line 350, Address: 0x101fe78, Func Offset: 0x2a8
	// Line 351, Address: 0x101feac, Func Offset: 0x2dc
	// Func End, Address: 0x101fec4, Func Offset: 0x2f4
}

// 
// Start address: 0x101fed0
int z71aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl[37];
	// Line 355, Address: 0x101fed0, Func Offset: 0
	// Line 359, Address: 0x101fee4, Func Offset: 0x14
	// Line 367, Address: 0x101ff10, Func Offset: 0x40
	// Line 368, Address: 0x101ff34, Func Offset: 0x64
	// Line 369, Address: 0x101ff38, Func Offset: 0x68
	// Line 370, Address: 0x101ff50, Func Offset: 0x80
	// Line 371, Address: 0x101ff54, Func Offset: 0x84
	// Line 372, Address: 0x101ff58, Func Offset: 0x88
	// Line 373, Address: 0x101ff64, Func Offset: 0x94
	// Line 374, Address: 0x101ff70, Func Offset: 0xa0
	// Line 377, Address: 0x101ff7c, Func Offset: 0xac
	// Line 380, Address: 0x101ff88, Func Offset: 0xb8
	// Line 381, Address: 0x101ff94, Func Offset: 0xc4
	// Line 382, Address: 0x101ffc4, Func Offset: 0xf4
	// Line 383, Address: 0x101ffe8, Func Offset: 0x118
	// Line 384, Address: 0x102000c, Func Offset: 0x13c
	// Line 385, Address: 0x1020018, Func Offset: 0x148
	// Line 386, Address: 0x102003c, Func Offset: 0x16c
	// Line 387, Address: 0x102004c, Func Offset: 0x17c
	// Line 388, Address: 0x1020058, Func Offset: 0x188
	// Line 389, Address: 0x102005c, Func Offset: 0x18c
	// Func End, Address: 0x1020074, Func Offset: 0x1a4
}

// 
// Start address: 0x1020080
int z71aline0(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl0[12];
	// Line 392, Address: 0x1020080, Func Offset: 0
	// Line 396, Address: 0x1020094, Func Offset: 0x14
	// Line 402, Address: 0x10200c8, Func Offset: 0x48
	// Line 403, Address: 0x10200ec, Func Offset: 0x6c
	// Line 404, Address: 0x10200f0, Func Offset: 0x70
	// Line 405, Address: 0x1020108, Func Offset: 0x88
	// Line 406, Address: 0x102010c, Func Offset: 0x8c
	// Line 407, Address: 0x1020110, Func Offset: 0x90
	// Line 408, Address: 0x102011c, Func Offset: 0x9c
	// Line 411, Address: 0x1020128, Func Offset: 0xa8
	// Line 414, Address: 0x1020134, Func Offset: 0xb4
	// Line 415, Address: 0x1020164, Func Offset: 0xe4
	// Line 416, Address: 0x1020170, Func Offset: 0xf0
	// Line 417, Address: 0x1020194, Func Offset: 0x114
	// Line 418, Address: 0x10201b8, Func Offset: 0x138
	// Line 419, Address: 0x10201c4, Func Offset: 0x144
	// Line 420, Address: 0x10201e8, Func Offset: 0x168
	// Line 421, Address: 0x10201f8, Func Offset: 0x178
	// Line 422, Address: 0x10201fc, Func Offset: 0x17c
	// Func End, Address: 0x1020214, Func Offset: 0x194
}

// 
// Start address: 0x1020220
int z71aline1(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl1[2];
	// Line 425, Address: 0x1020220, Func Offset: 0
	// Line 429, Address: 0x1020234, Func Offset: 0x14
	// Line 434, Address: 0x1020250, Func Offset: 0x30
	// Line 435, Address: 0x1020274, Func Offset: 0x54
	// Line 436, Address: 0x1020278, Func Offset: 0x58
	// Line 437, Address: 0x1020294, Func Offset: 0x74
	// Line 438, Address: 0x1020298, Func Offset: 0x78
	// Line 439, Address: 0x102029c, Func Offset: 0x7c
	// Line 440, Address: 0x10202a8, Func Offset: 0x88
	// Line 443, Address: 0x10202b4, Func Offset: 0x94
	// Line 446, Address: 0x10202c0, Func Offset: 0xa0
	// Line 447, Address: 0x10202f0, Func Offset: 0xd0
	// Line 448, Address: 0x10202fc, Func Offset: 0xdc
	// Line 449, Address: 0x1020320, Func Offset: 0x100
	// Line 450, Address: 0x1020344, Func Offset: 0x124
	// Line 451, Address: 0x1020350, Func Offset: 0x130
	// Line 452, Address: 0x1020374, Func Offset: 0x154
	// Line 453, Address: 0x1020384, Func Offset: 0x164
	// Line 454, Address: 0x1020388, Func Offset: 0x168
	// Func End, Address: 0x10203a0, Func Offset: 0x180
}

// 
// Start address: 0x10203a0
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	int i;
	int j;
	// Line 458, Address: 0x10203a0, Func Offset: 0
	// Line 466, Address: 0x10203b8, Func Offset: 0x18
	// Line 475, Address: 0x10203c0, Func Offset: 0x20
	// Line 476, Address: 0x10203cc, Func Offset: 0x2c
	// Line 477, Address: 0x10203d0, Func Offset: 0x30
	// Line 479, Address: 0x10203f8, Func Offset: 0x58
	// Line 480, Address: 0x1020404, Func Offset: 0x64
	// Line 482, Address: 0x102040c, Func Offset: 0x6c
	// Line 483, Address: 0x1020414, Func Offset: 0x74
	// Line 484, Address: 0x1020418, Func Offset: 0x78
	// Line 485, Address: 0x102041c, Func Offset: 0x7c
	// Line 486, Address: 0x1020428, Func Offset: 0x88
	// Line 488, Address: 0x1020434, Func Offset: 0x94
	// Line 489, Address: 0x102045c, Func Offset: 0xbc
	// Line 491, Address: 0x1020468, Func Offset: 0xc8
	// Line 492, Address: 0x1020470, Func Offset: 0xd0
	// Line 493, Address: 0x1020474, Func Offset: 0xd4
	// Line 494, Address: 0x1020484, Func Offset: 0xe4
	// Line 495, Address: 0x1020494, Func Offset: 0xf4
	// Func End, Address: 0x10204ac, Func Offset: 0x10c
}

// 
// Start address: 0x10204b0
void scroll_h()
{
	unsigned short wD4;
	// Line 507, Address: 0x10204b0, Func Offset: 0
	// Line 510, Address: 0x10204bc, Func Offset: 0xc
	// Line 511, Address: 0x10204c8, Func Offset: 0x18
	// Line 512, Address: 0x10204d0, Func Offset: 0x20
	// Line 513, Address: 0x1020504, Func Offset: 0x54
	// Line 514, Address: 0x1020518, Func Offset: 0x68
	// Line 515, Address: 0x1020544, Func Offset: 0x94
	// Line 516, Address: 0x1020558, Func Offset: 0xa8
	// Line 519, Address: 0x1020560, Func Offset: 0xb0
	// Line 524, Address: 0x1020574, Func Offset: 0xc4
	// Func End, Address: 0x1020588, Func Offset: 0xd8
}

// 
// Start address: 0x1020590
void scrh_move()
{
	unsigned short wD0;
	// Line 526, Address: 0x1020590, Func Offset: 0
	// Line 529, Address: 0x102059c, Func Offset: 0xc
	// Line 530, Address: 0x10205a8, Func Offset: 0x18
	// Line 531, Address: 0x10205bc, Func Offset: 0x2c
	// Line 532, Address: 0x10205d0, Func Offset: 0x40
	// Line 534, Address: 0x10205dc, Func Offset: 0x4c
	// Line 535, Address: 0x10205e4, Func Offset: 0x54
	// Line 536, Address: 0x10205ec, Func Offset: 0x5c
	// Line 537, Address: 0x1020604, Func Offset: 0x74
	// Line 538, Address: 0x1020610, Func Offset: 0x80
	// Line 540, Address: 0x1020618, Func Offset: 0x88
	// Line 543, Address: 0x1020624, Func Offset: 0x94
	// Func End, Address: 0x1020638, Func Offset: 0xa8
}

// 
// Start address: 0x1020640
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 546, Address: 0x1020640, Func Offset: 0
	// Line 549, Address: 0x102064c, Func Offset: 0xc
	// Line 550, Address: 0x102066c, Func Offset: 0x2c
	// Line 553, Address: 0x1020674, Func Offset: 0x34
	// Line 554, Address: 0x102068c, Func Offset: 0x4c
	// Line 555, Address: 0x10206bc, Func Offset: 0x7c
	// Line 558, Address: 0x10206c8, Func Offset: 0x88
	// Line 559, Address: 0x10206d0, Func Offset: 0x90
	// Line 560, Address: 0x10206e4, Func Offset: 0xa4
	// Line 561, Address: 0x1020714, Func Offset: 0xd4
	// Line 562, Address: 0x1020720, Func Offset: 0xe0
	// Line 564, Address: 0x1020728, Func Offset: 0xe8
	// Func End, Address: 0x1020738, Func Offset: 0xf8
}

// 
// Start address: 0x1020740
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 567, Address: 0x1020740, Func Offset: 0
	// Line 570, Address: 0x102074c, Func Offset: 0xc
	// Line 571, Address: 0x102076c, Func Offset: 0x2c
	// Line 574, Address: 0x1020774, Func Offset: 0x34
	// Line 575, Address: 0x102078c, Func Offset: 0x4c
	// Line 576, Address: 0x10207bc, Func Offset: 0x7c
	// Line 579, Address: 0x10207c8, Func Offset: 0x88
	// Line 580, Address: 0x10207d0, Func Offset: 0x90
	// Line 581, Address: 0x10207e4, Func Offset: 0xa4
	// Line 582, Address: 0x1020814, Func Offset: 0xd4
	// Line 583, Address: 0x1020820, Func Offset: 0xe0
	// Line 585, Address: 0x1020828, Func Offset: 0xe8
	// Func End, Address: 0x1020838, Func Offset: 0xf8
}

// 
// Start address: 0x1020840
void scroll_v()
{
	unsigned short wD0;
	// Line 604, Address: 0x1020840, Func Offset: 0
	// Line 607, Address: 0x102084c, Func Offset: 0xc
	// Line 608, Address: 0x1020878, Func Offset: 0x38
	// Line 609, Address: 0x1020890, Func Offset: 0x50
	// Line 612, Address: 0x1020898, Func Offset: 0x58
	// Line 613, Address: 0x10208b0, Func Offset: 0x70
	// Line 614, Address: 0x10208b8, Func Offset: 0x78
	// Line 615, Address: 0x10208d8, Func Offset: 0x98
	// Line 616, Address: 0x10208ec, Func Offset: 0xac
	// Line 617, Address: 0x10208f8, Func Offset: 0xb8
	// Line 619, Address: 0x1020900, Func Offset: 0xc0
	// Line 620, Address: 0x1020914, Func Offset: 0xd4
	// Line 621, Address: 0x1020924, Func Offset: 0xe4
	// Line 622, Address: 0x102092c, Func Offset: 0xec
	// Line 623, Address: 0x1020938, Func Offset: 0xf8
	// Line 625, Address: 0x1020940, Func Offset: 0x100
	// Line 626, Address: 0x1020948, Func Offset: 0x108
	// Line 627, Address: 0x102095c, Func Offset: 0x11c
	// Line 628, Address: 0x1020964, Func Offset: 0x124
	// Line 634, Address: 0x102096c, Func Offset: 0x12c
	// Line 635, Address: 0x1020980, Func Offset: 0x140
	// Line 636, Address: 0x1020988, Func Offset: 0x148
	// Line 637, Address: 0x1020994, Func Offset: 0x154
	// Line 639, Address: 0x102099c, Func Offset: 0x15c
	// Line 640, Address: 0x10209b0, Func Offset: 0x170
	// Line 641, Address: 0x10209b8, Func Offset: 0x178
	// Line 646, Address: 0x10209c0, Func Offset: 0x180
	// Line 648, Address: 0x10209c8, Func Offset: 0x188
	// Func End, Address: 0x10209dc, Func Offset: 0x19c
}

// 
// Start address: 0x10209e0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 654, Address: 0x10209e0, Func Offset: 0
	// Line 657, Address: 0x10209f0, Func Offset: 0x10
	// Line 658, Address: 0x1020a0c, Func Offset: 0x2c
	// Line 659, Address: 0x1020a18, Func Offset: 0x38
	// Line 662, Address: 0x1020a20, Func Offset: 0x40
	// Line 663, Address: 0x1020a2c, Func Offset: 0x4c
	// Line 664, Address: 0x1020a44, Func Offset: 0x64
	// Line 667, Address: 0x1020a60, Func Offset: 0x80
	// Line 668, Address: 0x1020a70, Func Offset: 0x90
	// Line 669, Address: 0x1020a7c, Func Offset: 0x9c
	// Line 671, Address: 0x1020a84, Func Offset: 0xa4
	// Line 672, Address: 0x1020aa4, Func Offset: 0xc4
	// Line 673, Address: 0x1020ab0, Func Offset: 0xd0
	// Line 674, Address: 0x1020ab8, Func Offset: 0xd8
	// Line 675, Address: 0x1020ad8, Func Offset: 0xf8
	// Line 676, Address: 0x1020ae4, Func Offset: 0x104
	// Line 678, Address: 0x1020aec, Func Offset: 0x10c
	// Line 682, Address: 0x1020af8, Func Offset: 0x118
	// Func End, Address: 0x1020b0c, Func Offset: 0x12c
}

// 
// Start address: 0x1020b10
void sv_move_main1(unsigned short wD0)
{
	// Line 686, Address: 0x1020b10, Func Offset: 0
	// Line 688, Address: 0x1020b1c, Func Offset: 0xc
	// Line 689, Address: 0x1020b3c, Func Offset: 0x2c
	// Line 690, Address: 0x1020b48, Func Offset: 0x38
	// Line 691, Address: 0x1020b50, Func Offset: 0x40
	// Line 692, Address: 0x1020b70, Func Offset: 0x60
	// Line 693, Address: 0x1020b7c, Func Offset: 0x6c
	// Line 695, Address: 0x1020b84, Func Offset: 0x74
	// Line 698, Address: 0x1020b90, Func Offset: 0x80
	// Func End, Address: 0x1020ba0, Func Offset: 0x90
}

// 
// Start address: 0x1020ba0
void sv_move_main2(unsigned short wD0)
{
	// Line 701, Address: 0x1020ba0, Func Offset: 0
	// Line 703, Address: 0x1020bac, Func Offset: 0xc
	// Line 704, Address: 0x1020bcc, Func Offset: 0x2c
	// Line 705, Address: 0x1020bd8, Func Offset: 0x38
	// Line 706, Address: 0x1020be0, Func Offset: 0x40
	// Line 707, Address: 0x1020c00, Func Offset: 0x60
	// Line 708, Address: 0x1020c0c, Func Offset: 0x6c
	// Line 710, Address: 0x1020c14, Func Offset: 0x74
	// Line 713, Address: 0x1020c20, Func Offset: 0x80
	// Func End, Address: 0x1020c30, Func Offset: 0x90
}

// 
// Start address: 0x1020c30
void sv_move_sub2()
{
	// Line 716, Address: 0x1020c30, Func Offset: 0
	// Line 717, Address: 0x1020c38, Func Offset: 0x8
	// Line 718, Address: 0x1020c40, Func Offset: 0x10
	// Line 719, Address: 0x1020c4c, Func Offset: 0x1c
	// Func End, Address: 0x1020c5c, Func Offset: 0x2c
}

// 
// Start address: 0x1020c60
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 722, Address: 0x1020c60, Func Offset: 0
	// Line 725, Address: 0x1020c6c, Func Offset: 0xc
	// Line 726, Address: 0x1020c70, Func Offset: 0x10
	// Line 727, Address: 0x1020c78, Func Offset: 0x18
	// Line 728, Address: 0x1020c94, Func Offset: 0x34
	// Line 729, Address: 0x1020cb0, Func Offset: 0x50
	// Line 730, Address: 0x1020cbc, Func Offset: 0x5c
	// Line 732, Address: 0x1020cc4, Func Offset: 0x64
	// Line 735, Address: 0x1020cd0, Func Offset: 0x70
	// Func End, Address: 0x1020ce0, Func Offset: 0x80
}

// 
// Start address: 0x1020ce0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 740, Address: 0x1020ce0, Func Offset: 0
	// Line 744, Address: 0x1020cf0, Func Offset: 0x10
	// Line 745, Address: 0x1020d0c, Func Offset: 0x2c
	// Line 746, Address: 0x1020d18, Func Offset: 0x38
	// Line 748, Address: 0x1020d2c, Func Offset: 0x4c
	// Line 749, Address: 0x1020d34, Func Offset: 0x54
	// Line 750, Address: 0x1020d3c, Func Offset: 0x5c
	// Line 751, Address: 0x1020d40, Func Offset: 0x60
	// Line 752, Address: 0x1020d4c, Func Offset: 0x6c
	// Func End, Address: 0x1020d60, Func Offset: 0x80
}

// 
// Start address: 0x1020d60
void scrv_up_ch(_anon2 lD1)
{
	// Line 756, Address: 0x1020d60, Func Offset: 0
	// Line 757, Address: 0x1020d6c, Func Offset: 0xc
	// Line 758, Address: 0x1020d94, Func Offset: 0x34
	// Line 759, Address: 0x1020dac, Func Offset: 0x4c
	// Line 760, Address: 0x1020db8, Func Offset: 0x58
	// Line 761, Address: 0x1020dcc, Func Offset: 0x6c
	// Line 762, Address: 0x1020de0, Func Offset: 0x80
	// Line 763, Address: 0x1020df4, Func Offset: 0x94
	// Line 766, Address: 0x1020dfc, Func Offset: 0x9c
	// Line 769, Address: 0x1020e08, Func Offset: 0xa8
	// Line 771, Address: 0x1020e14, Func Offset: 0xb4
	// Func End, Address: 0x1020e24, Func Offset: 0xc4
}

// 
// Start address: 0x1020e30
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 777, Address: 0x1020e30, Func Offset: 0
	// Line 781, Address: 0x1020e40, Func Offset: 0x10
	// Line 782, Address: 0x1020e44, Func Offset: 0x14
	// Line 783, Address: 0x1020e4c, Func Offset: 0x1c
	// Line 784, Address: 0x1020e58, Func Offset: 0x28
	// Line 786, Address: 0x1020e6c, Func Offset: 0x3c
	// Line 787, Address: 0x1020e74, Func Offset: 0x44
	// Line 788, Address: 0x1020e7c, Func Offset: 0x4c
	// Line 790, Address: 0x1020e80, Func Offset: 0x50
	// Line 792, Address: 0x1020e8c, Func Offset: 0x5c
	// Func End, Address: 0x1020ea0, Func Offset: 0x70
}

// 
// Start address: 0x1020ea0
void scrv_down_ch(_anon2 lD1)
{
	// Line 796, Address: 0x1020ea0, Func Offset: 0
	// Line 797, Address: 0x1020eac, Func Offset: 0xc
	// Line 798, Address: 0x1020ed4, Func Offset: 0x34
	// Line 799, Address: 0x1020ee0, Func Offset: 0x40
	// Line 800, Address: 0x1020ef4, Func Offset: 0x54
	// Line 801, Address: 0x1020f08, Func Offset: 0x68
	// Line 802, Address: 0x1020f1c, Func Offset: 0x7c
	// Line 803, Address: 0x1020f30, Func Offset: 0x90
	// Line 805, Address: 0x1020f38, Func Offset: 0x98
	// Line 808, Address: 0x1020f44, Func Offset: 0xa4
	// Line 810, Address: 0x1020f50, Func Offset: 0xb0
	// Func End, Address: 0x1020f60, Func Offset: 0xc0
}

// 
// Start address: 0x1020f60
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 813, Address: 0x1020f60, Func Offset: 0
	// Line 816, Address: 0x1020f70, Func Offset: 0x10
	// Line 818, Address: 0x1020f7c, Func Offset: 0x1c
	// Line 819, Address: 0x1020f84, Func Offset: 0x24
	// Line 820, Address: 0x1020f8c, Func Offset: 0x2c
	// Line 822, Address: 0x1020f90, Func Offset: 0x30
	// Line 823, Address: 0x1020fb8, Func Offset: 0x58
	// Line 826, Address: 0x1020fc4, Func Offset: 0x64
	// Line 827, Address: 0x1020ff8, Func Offset: 0x98
	// Line 828, Address: 0x102100c, Func Offset: 0xac
	// Line 830, Address: 0x1021038, Func Offset: 0xd8
	// Line 831, Address: 0x102104c, Func Offset: 0xec
	// Line 833, Address: 0x1021054, Func Offset: 0xf4
	// Line 838, Address: 0x1021068, Func Offset: 0x108
	// Func End, Address: 0x102107c, Func Offset: 0x11c
}

// 
// Start address: 0x1021080
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 842, Address: 0x1021080, Func Offset: 0
	// Line 845, Address: 0x102108c, Func Offset: 0xc
	// Line 846, Address: 0x102109c, Func Offset: 0x1c
	// Line 847, Address: 0x10210ac, Func Offset: 0x2c
	// Line 849, Address: 0x10210b8, Func Offset: 0x38
	// Line 851, Address: 0x10210ec, Func Offset: 0x6c
	// Line 852, Address: 0x1021100, Func Offset: 0x80
	// Line 853, Address: 0x1021110, Func Offset: 0x90
	// Line 854, Address: 0x1021124, Func Offset: 0xa4
	// Line 855, Address: 0x1021138, Func Offset: 0xb8
	// Line 858, Address: 0x1021140, Func Offset: 0xc0
	// Line 863, Address: 0x1021154, Func Offset: 0xd4
	// Line 864, Address: 0x1021164, Func Offset: 0xe4
	// Line 865, Address: 0x1021174, Func Offset: 0xf4
	// Line 866, Address: 0x102118c, Func Offset: 0x10c
	// Line 868, Address: 0x1021198, Func Offset: 0x118
	// Line 870, Address: 0x10211cc, Func Offset: 0x14c
	// Line 871, Address: 0x10211e0, Func Offset: 0x160
	// Line 872, Address: 0x10211f0, Func Offset: 0x170
	// Line 873, Address: 0x1021204, Func Offset: 0x184
	// Line 874, Address: 0x1021218, Func Offset: 0x198
	// Line 877, Address: 0x1021220, Func Offset: 0x1a0
	// Line 882, Address: 0x1021234, Func Offset: 0x1b4
	// Func End, Address: 0x1021240, Func Offset: 0x1c0
}

// 
// Start address: 0x1021240
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 889, Address: 0x1021240, Func Offset: 0
	// Line 892, Address: 0x102124c, Func Offset: 0xc
	// Line 893, Address: 0x1021258, Func Offset: 0x18
	// Line 895, Address: 0x1021264, Func Offset: 0x24
	// Line 896, Address: 0x1021290, Func Offset: 0x50
	// Line 897, Address: 0x10212a4, Func Offset: 0x64
	// Line 898, Address: 0x10212d4, Func Offset: 0x94
	// Line 899, Address: 0x10212e8, Func Offset: 0xa8
	// Line 902, Address: 0x10212f0, Func Offset: 0xb0
	// Line 907, Address: 0x1021304, Func Offset: 0xc4
	// Func End, Address: 0x1021314, Func Offset: 0xd4
}

// 
// Start address: 0x1021320
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 911, Address: 0x1021320, Func Offset: 0
	// Line 915, Address: 0x1021330, Func Offset: 0x10
	// Line 916, Address: 0x102133c, Func Offset: 0x1c
	// Line 917, Address: 0x102134c, Func Offset: 0x2c
	// Line 919, Address: 0x1021358, Func Offset: 0x38
	// Line 920, Address: 0x1021360, Func Offset: 0x40
	// Line 921, Address: 0x1021368, Func Offset: 0x48
	// Line 923, Address: 0x1021374, Func Offset: 0x54
	// Line 924, Address: 0x1021380, Func Offset: 0x60
	// Line 925, Address: 0x1021394, Func Offset: 0x74
	// Line 926, Address: 0x10213a0, Func Offset: 0x80
	// Line 927, Address: 0x10213b4, Func Offset: 0x94
	// Line 928, Address: 0x10213c4, Func Offset: 0xa4
	// Line 929, Address: 0x10213d8, Func Offset: 0xb8
	// Line 930, Address: 0x10213f4, Func Offset: 0xd4
	// Line 933, Address: 0x10213fc, Func Offset: 0xdc
	// Line 938, Address: 0x102141c, Func Offset: 0xfc
	// Func End, Address: 0x102142c, Func Offset: 0x10c
}

// 
// Start address: 0x1021430
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 941, Address: 0x1021430, Func Offset: 0
	// Line 945, Address: 0x1021440, Func Offset: 0x10
	// Line 946, Address: 0x102144c, Func Offset: 0x1c
	// Line 947, Address: 0x102145c, Func Offset: 0x2c
	// Line 949, Address: 0x1021468, Func Offset: 0x38
	// Line 950, Address: 0x1021470, Func Offset: 0x40
	// Line 951, Address: 0x1021478, Func Offset: 0x48
	// Line 953, Address: 0x1021484, Func Offset: 0x54
	// Line 954, Address: 0x1021490, Func Offset: 0x60
	// Line 955, Address: 0x10214a4, Func Offset: 0x74
	// Line 956, Address: 0x10214b0, Func Offset: 0x80
	// Line 957, Address: 0x10214c4, Func Offset: 0x94
	// Line 958, Address: 0x10214d4, Func Offset: 0xa4
	// Line 959, Address: 0x10214e8, Func Offset: 0xb8
	// Line 960, Address: 0x1021504, Func Offset: 0xd4
	// Line 963, Address: 0x102150c, Func Offset: 0xdc
	// Line 968, Address: 0x102152c, Func Offset: 0xfc
	// Func End, Address: 0x102153c, Func Offset: 0x10c
}

// 
// Start address: 0x1021540
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 980, Address: 0x1021540, Func Offset: 0
	// Line 984, Address: 0x1021550, Func Offset: 0x10
	// Line 985, Address: 0x102155c, Func Offset: 0x1c
	// Line 986, Address: 0x102156c, Func Offset: 0x2c
	// Line 988, Address: 0x1021578, Func Offset: 0x38
	// Line 989, Address: 0x1021580, Func Offset: 0x40
	// Line 990, Address: 0x1021588, Func Offset: 0x48
	// Line 992, Address: 0x1021594, Func Offset: 0x54
	// Line 993, Address: 0x10215a0, Func Offset: 0x60
	// Line 994, Address: 0x10215b4, Func Offset: 0x74
	// Line 995, Address: 0x10215c0, Func Offset: 0x80
	// Line 996, Address: 0x10215d4, Func Offset: 0x94
	// Line 997, Address: 0x10215e4, Func Offset: 0xa4
	// Line 998, Address: 0x10215f8, Func Offset: 0xb8
	// Line 999, Address: 0x1021614, Func Offset: 0xd4
	// Line 1002, Address: 0x102161c, Func Offset: 0xdc
	// Line 1007, Address: 0x102163c, Func Offset: 0xfc
	// Func End, Address: 0x102164c, Func Offset: 0x10c
}

// 
// Start address: 0x1021650
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1021, Address: 0x1021650, Func Offset: 0
	// Line 1027, Address: 0x102166c, Func Offset: 0x1c
	// Line 1028, Address: 0x1021670, Func Offset: 0x20
	// Line 1029, Address: 0x102167c, Func Offset: 0x2c
	// Line 1030, Address: 0x1021688, Func Offset: 0x38
	// Line 1031, Address: 0x1021690, Func Offset: 0x40
	// Line 1032, Address: 0x1021698, Func Offset: 0x48
	// Line 1034, Address: 0x10216ac, Func Offset: 0x5c
	// Line 1035, Address: 0x10216b8, Func Offset: 0x68
	// Line 1036, Address: 0x10216c4, Func Offset: 0x74
	// Line 1037, Address: 0x10216cc, Func Offset: 0x7c
	// Line 1039, Address: 0x10216d4, Func Offset: 0x84
	// Func End, Address: 0x10216f8, Func Offset: 0xa8
}

// 
// Start address: 0x1021700
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
	// Line 1052, Address: 0x1021700, Func Offset: 0
	// Line 1061, Address: 0x1021720, Func Offset: 0x20
	// Line 1062, Address: 0x1021724, Func Offset: 0x24
	// Line 1063, Address: 0x1021730, Func Offset: 0x30
	// Line 1064, Address: 0x102173c, Func Offset: 0x3c
	// Line 1065, Address: 0x1021744, Func Offset: 0x44
	// Line 1066, Address: 0x102174c, Func Offset: 0x4c
	// Line 1068, Address: 0x1021760, Func Offset: 0x60
	// Line 1069, Address: 0x1021764, Func Offset: 0x64
	// Line 1070, Address: 0x1021770, Func Offset: 0x70
	// Line 1071, Address: 0x102177c, Func Offset: 0x7c
	// Line 1072, Address: 0x1021784, Func Offset: 0x84
	// Line 1074, Address: 0x102178c, Func Offset: 0x8c
	// Line 1075, Address: 0x1021798, Func Offset: 0x98
	// Line 1076, Address: 0x10217ac, Func Offset: 0xac
	// Line 1078, Address: 0x10217b8, Func Offset: 0xb8
	// Line 1079, Address: 0x10217c0, Func Offset: 0xc0
	// Line 1081, Address: 0x10217c8, Func Offset: 0xc8
	// Line 1083, Address: 0x10217e8, Func Offset: 0xe8
	// Line 1089, Address: 0x1021814, Func Offset: 0x114
	// Line 1090, Address: 0x1021828, Func Offset: 0x128
	// Line 1092, Address: 0x1021834, Func Offset: 0x134
	// Line 1093, Address: 0x102183c, Func Offset: 0x13c
	// Line 1094, Address: 0x1021844, Func Offset: 0x144
	// Line 1096, Address: 0x1021864, Func Offset: 0x164
	// Line 1102, Address: 0x1021890, Func Offset: 0x190
	// Line 1103, Address: 0x10218a4, Func Offset: 0x1a4
	// Line 1105, Address: 0x10218b0, Func Offset: 0x1b0
	// Line 1106, Address: 0x10218b8, Func Offset: 0x1b8
	// Line 1107, Address: 0x10218c0, Func Offset: 0x1c0
	// Line 1109, Address: 0x10218e0, Func Offset: 0x1e0
	// Line 1115, Address: 0x102190c, Func Offset: 0x20c
	// Line 1116, Address: 0x1021920, Func Offset: 0x220
	// Line 1118, Address: 0x102192c, Func Offset: 0x22c
	// Line 1119, Address: 0x1021934, Func Offset: 0x234
	// Line 1120, Address: 0x102193c, Func Offset: 0x23c
	// Line 1122, Address: 0x102195c, Func Offset: 0x25c
	// Line 1131, Address: 0x1021988, Func Offset: 0x288
	// Func End, Address: 0x10219b0, Func Offset: 0x2b0
}

// 
// Start address: 0x10219b0
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
	// Line 1148, Address: 0x10219b0, Func Offset: 0
	// Line 1159, Address: 0x10219dc, Func Offset: 0x2c
	// Line 1161, Address: 0x10219e4, Func Offset: 0x34
	// Line 1162, Address: 0x10219fc, Func Offset: 0x4c
	// Line 1163, Address: 0x1021a10, Func Offset: 0x60
	// Line 1165, Address: 0x1021a18, Func Offset: 0x68
	// Line 1167, Address: 0x1021a2c, Func Offset: 0x7c
	// Line 1168, Address: 0x1021a44, Func Offset: 0x94
	// Line 1169, Address: 0x1021a58, Func Offset: 0xa8
	// Line 1170, Address: 0x1021a60, Func Offset: 0xb0
	// Line 1172, Address: 0x1021a68, Func Offset: 0xb8
	// Line 1173, Address: 0x1021a7c, Func Offset: 0xcc
	// Line 1178, Address: 0x1021a84, Func Offset: 0xd4
	// Line 1179, Address: 0x1021ad4, Func Offset: 0x124
	// Line 1180, Address: 0x1021adc, Func Offset: 0x12c
	// Line 1186, Address: 0x1021afc, Func Offset: 0x14c
	// Line 1187, Address: 0x1021b1c, Func Offset: 0x16c
	// Line 1188, Address: 0x1021b40, Func Offset: 0x190
	// Line 1189, Address: 0x1021b4c, Func Offset: 0x19c
	// Line 1190, Address: 0x1021b54, Func Offset: 0x1a4
	// Line 1192, Address: 0x1021b74, Func Offset: 0x1c4
	// Line 1196, Address: 0x1021ba0, Func Offset: 0x1f0
	// Line 1199, Address: 0x1021ba8, Func Offset: 0x1f8
	// Line 1200, Address: 0x1021bac, Func Offset: 0x1fc
	// Line 1204, Address: 0x1021bcc, Func Offset: 0x21c
	// Line 1211, Address: 0x1021bf8, Func Offset: 0x248
	// Line 1218, Address: 0x1021c0c, Func Offset: 0x25c
	// Line 1219, Address: 0x1021c14, Func Offset: 0x264
	// Line 1220, Address: 0x1021c1c, Func Offset: 0x26c
	// Line 1221, Address: 0x1021c34, Func Offset: 0x284
	// Line 1222, Address: 0x1021c54, Func Offset: 0x2a4
	// Line 1226, Address: 0x1021c5c, Func Offset: 0x2ac
	// Line 1228, Address: 0x1021c8c, Func Offset: 0x2dc
	// Line 1229, Address: 0x1021c98, Func Offset: 0x2e8
	// Line 1233, Address: 0x1021ca8, Func Offset: 0x2f8
	// Line 1234, Address: 0x1021cb4, Func Offset: 0x304
	// Line 1235, Address: 0x1021cd4, Func Offset: 0x324
	// Line 1236, Address: 0x1021ce0, Func Offset: 0x330
	// Line 1237, Address: 0x1021d0c, Func Offset: 0x35c
	// Line 1238, Address: 0x1021d2c, Func Offset: 0x37c
	// Line 1240, Address: 0x1021d50, Func Offset: 0x3a0
	// Line 1243, Address: 0x1021d74, Func Offset: 0x3c4
	// Line 1245, Address: 0x1021d94, Func Offset: 0x3e4
	// Line 1248, Address: 0x1021da8, Func Offset: 0x3f8
	// Line 1249, Address: 0x1021db4, Func Offset: 0x404
	// Line 1250, Address: 0x1021dc4, Func Offset: 0x414
	// Line 1252, Address: 0x1021dcc, Func Offset: 0x41c
	// Func End, Address: 0x1021df4, Func Offset: 0x444
}

// 
// Start address: 0x1021e00
void scrollwrtc()
{
	// Line 1258, Address: 0x1021e00, Func Offset: 0
	// Func End, Address: 0x1021e08, Func Offset: 0x8
}

// 
// Start address: 0x1021e10
void scrollwrtz()
{
	// Line 1263, Address: 0x1021e10, Func Offset: 0
	// Func End, Address: 0x1021e18, Func Offset: 0x8
}

// 
// Start address: 0x1021e20
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1281, Address: 0x1021e20, Func Offset: 0
	// Line 1294, Address: 0x1021e48, Func Offset: 0x28
	// Line 1297, Address: 0x1021e68, Func Offset: 0x48
	// Line 1298, Address: 0x1021e7c, Func Offset: 0x5c
	// Line 1299, Address: 0x1021e90, Func Offset: 0x70
	// Line 1300, Address: 0x1021ea4, Func Offset: 0x84
	// Line 1302, Address: 0x1021eb8, Func Offset: 0x98
	// Line 1303, Address: 0x1021ec4, Func Offset: 0xa4
	// Line 1304, Address: 0x1021ed8, Func Offset: 0xb8
	// Func End, Address: 0x1021ee8, Func Offset: 0xc8
}

// 
// Start address: 0x1021ef0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1308, Address: 0x1021ef0, Func Offset: 0
	// Line 1312, Address: 0x1021f18, Func Offset: 0x28
	// Line 1315, Address: 0x1021f38, Func Offset: 0x48
	// Line 1316, Address: 0x1021f4c, Func Offset: 0x5c
	// Line 1317, Address: 0x1021f60, Func Offset: 0x70
	// Line 1318, Address: 0x1021f74, Func Offset: 0x84
	// Line 1320, Address: 0x1021f88, Func Offset: 0x98
	// Line 1321, Address: 0x1021f94, Func Offset: 0xa4
	// Line 1322, Address: 0x1021fa8, Func Offset: 0xb8
	// Func End, Address: 0x1021fb8, Func Offset: 0xc8
}

// 
// Start address: 0x1021fc0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1342, Address: 0x1021fc0, Func Offset: 0
	// Line 1346, Address: 0x1021fe8, Func Offset: 0x28
	// Line 1349, Address: 0x1022008, Func Offset: 0x48
	// Line 1350, Address: 0x102201c, Func Offset: 0x5c
	// Line 1351, Address: 0x102202c, Func Offset: 0x6c
	// Line 1352, Address: 0x1022040, Func Offset: 0x80
	// Line 1354, Address: 0x1022050, Func Offset: 0x90
	// Line 1355, Address: 0x102205c, Func Offset: 0x9c
	// Line 1356, Address: 0x1022070, Func Offset: 0xb0
	// Func End, Address: 0x1022080, Func Offset: 0xc0
}

// 
// Start address: 0x1022080
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
	// Line 1375, Address: 0x1022080, Func Offset: 0
	// Line 1376, Address: 0x10220b4, Func Offset: 0x34
	// Line 1381, Address: 0x10220b8, Func Offset: 0x38
	// Line 1383, Address: 0x10220c8, Func Offset: 0x48
	// Line 1384, Address: 0x10220cc, Func Offset: 0x4c
	// Line 1385, Address: 0x10220d4, Func Offset: 0x54
	// Line 1387, Address: 0x10220e4, Func Offset: 0x64
	// Line 1389, Address: 0x10220e8, Func Offset: 0x68
	// Line 1390, Address: 0x10220f0, Func Offset: 0x70
	// Line 1393, Address: 0x10220f8, Func Offset: 0x78
	// Line 1394, Address: 0x1022100, Func Offset: 0x80
	// Line 1395, Address: 0x102210c, Func Offset: 0x8c
	// Line 1397, Address: 0x1022118, Func Offset: 0x98
	// Line 1398, Address: 0x1022120, Func Offset: 0xa0
	// Line 1399, Address: 0x1022128, Func Offset: 0xa8
	// Line 1400, Address: 0x1022130, Func Offset: 0xb0
	// Line 1402, Address: 0x102213c, Func Offset: 0xbc
	// Line 1403, Address: 0x1022144, Func Offset: 0xc4
	// Line 1404, Address: 0x102214c, Func Offset: 0xcc
	// Line 1405, Address: 0x1022154, Func Offset: 0xd4
	// Line 1407, Address: 0x1022160, Func Offset: 0xe0
	// Line 1408, Address: 0x1022168, Func Offset: 0xe8
	// Line 1409, Address: 0x1022170, Func Offset: 0xf0
	// Line 1412, Address: 0x1022178, Func Offset: 0xf8
	// Line 1413, Address: 0x1022180, Func Offset: 0x100
	// Line 1416, Address: 0x1022188, Func Offset: 0x108
	// Line 1417, Address: 0x10221cc, Func Offset: 0x14c
	// Line 1418, Address: 0x1022210, Func Offset: 0x190
	// Line 1419, Address: 0x1022254, Func Offset: 0x1d4
	// Line 1421, Address: 0x1022298, Func Offset: 0x218
	// Func End, Address: 0x10222c8, Func Offset: 0x248
}

// 
// Start address: 0x10222d0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1439, Address: 0x10222d0, Func Offset: 0
	// Line 1440, Address: 0x10222f0, Func Offset: 0x20
	// Line 1441, Address: 0x1022310, Func Offset: 0x40
	// Func End, Address: 0x1022320, Func Offset: 0x50
}

// 
// Start address: 0x1022320
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1443, Address: 0x1022320, Func Offset: 0
	// Line 1444, Address: 0x1022340, Func Offset: 0x20
	// Line 1445, Address: 0x1022344, Func Offset: 0x24
	// Line 1446, Address: 0x1022364, Func Offset: 0x44
	// Func End, Address: 0x1022374, Func Offset: 0x54
}

// 
// Start address: 0x1022380
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1453, Address: 0x1022380, Func Offset: 0
	// Line 1459, Address: 0x10223b0, Func Offset: 0x30
	// Line 1460, Address: 0x10223c0, Func Offset: 0x40
	// Line 1466, Address: 0x10223d0, Func Offset: 0x50
	// Line 1467, Address: 0x10223ec, Func Offset: 0x6c
	// Line 1468, Address: 0x10223f0, Func Offset: 0x70
	// Line 1469, Address: 0x102240c, Func Offset: 0x8c
	// Line 1470, Address: 0x1022410, Func Offset: 0x90
	// Line 1471, Address: 0x1022430, Func Offset: 0xb0
	// Line 1472, Address: 0x1022438, Func Offset: 0xb8
	// Line 1473, Address: 0x1022458, Func Offset: 0xd8
	// Line 1474, Address: 0x1022460, Func Offset: 0xe0
	// Line 1475, Address: 0x10224a8, Func Offset: 0x128
	// Line 1477, Address: 0x10224b4, Func Offset: 0x134
	// Line 1479, Address: 0x10224d0, Func Offset: 0x150
	// Line 1484, Address: 0x10224d8, Func Offset: 0x158
	// Line 1485, Address: 0x10224e4, Func Offset: 0x164
	// Line 1488, Address: 0x10224f0, Func Offset: 0x170
	// Line 1489, Address: 0x10224f8, Func Offset: 0x178
	// Line 1490, Address: 0x1022518, Func Offset: 0x198
	// Line 1491, Address: 0x1022534, Func Offset: 0x1b4
	// Line 1492, Address: 0x102253c, Func Offset: 0x1bc
	// Line 1493, Address: 0x102255c, Func Offset: 0x1dc
	// Line 1495, Address: 0x1022578, Func Offset: 0x1f8
	// Line 1496, Address: 0x1022580, Func Offset: 0x200
	// Line 1497, Address: 0x1022588, Func Offset: 0x208
	// Line 1498, Address: 0x1022594, Func Offset: 0x214
	// Line 1499, Address: 0x10225ac, Func Offset: 0x22c
	// Line 1501, Address: 0x10225bc, Func Offset: 0x23c
	// Line 1504, Address: 0x10225c8, Func Offset: 0x248
	// Line 1505, Address: 0x10225d0, Func Offset: 0x250
	// Line 1506, Address: 0x10225d4, Func Offset: 0x254
	// Func End, Address: 0x10225f4, Func Offset: 0x274
}

// 
// Start address: 0x1022600
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1526, Address: 0x1022600, Func Offset: 0
	// Line 1534, Address: 0x1022628, Func Offset: 0x28
	// Line 1535, Address: 0x102268c, Func Offset: 0x8c
	// Line 1541, Address: 0x1022694, Func Offset: 0x94
	// Line 1542, Address: 0x102269c, Func Offset: 0x9c
	// Line 1543, Address: 0x10226bc, Func Offset: 0xbc
	// Line 1544, Address: 0x10226d8, Func Offset: 0xd8
	// Line 1545, Address: 0x10226e0, Func Offset: 0xe0
	// Line 1546, Address: 0x1022700, Func Offset: 0x100
	// Line 1549, Address: 0x102271c, Func Offset: 0x11c
	// Line 1550, Address: 0x1022724, Func Offset: 0x124
	// Line 1551, Address: 0x102272c, Func Offset: 0x12c
	// Line 1552, Address: 0x1022738, Func Offset: 0x138
	// Line 1553, Address: 0x1022750, Func Offset: 0x150
	// Line 1554, Address: 0x1022758, Func Offset: 0x158
	// Line 1559, Address: 0x1022768, Func Offset: 0x168
	// Line 1562, Address: 0x1022774, Func Offset: 0x174
	// Line 1563, Address: 0x102277c, Func Offset: 0x17c
	// Line 1564, Address: 0x1022780, Func Offset: 0x180
	// Func End, Address: 0x102279c, Func Offset: 0x19c
}

// 
// Start address: 0x10227a0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1578, Address: 0x10227a0, Func Offset: 0
	// Line 1585, Address: 0x10227bc, Func Offset: 0x1c
	// Line 1586, Address: 0x10227c0, Func Offset: 0x20
	// Line 1587, Address: 0x10227c8, Func Offset: 0x28
	// Line 1588, Address: 0x10227ec, Func Offset: 0x4c
	// Line 1589, Address: 0x10227f8, Func Offset: 0x58
	// Line 1590, Address: 0x1022810, Func Offset: 0x70
	// Line 1591, Address: 0x1022824, Func Offset: 0x84
	// Line 1596, Address: 0x102283c, Func Offset: 0x9c
	// Func End, Address: 0x1022854, Func Offset: 0xb4
}

// 
// Start address: 0x1022860
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1610, Address: 0x1022860, Func Offset: 0
	// Line 1611, Address: 0x102286c, Func Offset: 0xc
	// Line 1612, Address: 0x1022898, Func Offset: 0x38
	// Line 1613, Address: 0x10228e4, Func Offset: 0x84
	// Line 1614, Address: 0x1022910, Func Offset: 0xb0
	// Line 1616, Address: 0x102295c, Func Offset: 0xfc
	// Line 1622, Address: 0x1022968, Func Offset: 0x108
	// Line 1623, Address: 0x102296c, Func Offset: 0x10c
	// Func End, Address: 0x1022978, Func Offset: 0x118
}

// 
// Start address: 0x1022980
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1640, Address: 0x1022980, Func Offset: 0
	// Line 1641, Address: 0x102299c, Func Offset: 0x1c
	// Line 1643, Address: 0x10229b8, Func Offset: 0x38
	// Func End, Address: 0x10229c8, Func Offset: 0x48
}

// 
// Start address: 0x10229d0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1645, Address: 0x10229d0, Func Offset: 0
	// Line 1646, Address: 0x10229ec, Func Offset: 0x1c
	// Line 1647, Address: 0x10229f0, Func Offset: 0x20
	// Line 1649, Address: 0x1022a0c, Func Offset: 0x3c
	// Func End, Address: 0x1022a1c, Func Offset: 0x4c
}

// 
// Start address: 0x1022a20
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1651, Address: 0x1022a20, Func Offset: 0
	// Line 1652, Address: 0x1022a34, Func Offset: 0x14
	// Line 1654, Address: 0x1022a50, Func Offset: 0x30
	// Func End, Address: 0x1022a60, Func Offset: 0x40
}

// 
// Start address: 0x1022a60
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1656, Address: 0x1022a60, Func Offset: 0
	// Line 1657, Address: 0x1022a7c, Func Offset: 0x1c
	// Line 1659, Address: 0x1022a98, Func Offset: 0x38
	// Func End, Address: 0x1022aa8, Func Offset: 0x48
}

// 
// Start address: 0x1022ab0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1661, Address: 0x1022ab0, Func Offset: 0
	// Line 1662, Address: 0x1022ac8, Func Offset: 0x18
	// Line 1663, Address: 0x1022ad8, Func Offset: 0x28
	// Line 1664, Address: 0x1022ae8, Func Offset: 0x38
	// Line 1665, Address: 0x1022af4, Func Offset: 0x44
	// Line 1667, Address: 0x1022b00, Func Offset: 0x50
	// Line 1668, Address: 0x1022b2c, Func Offset: 0x7c
	// Line 1671, Address: 0x1022b58, Func Offset: 0xa8
	// Func End, Address: 0x1022b64, Func Offset: 0xb4
}

// 
// Start address: 0x1022b70
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1687, Address: 0x1022b70, Func Offset: 0
	// Line 1692, Address: 0x1022b88, Func Offset: 0x18
	// Line 1693, Address: 0x1022b94, Func Offset: 0x24
	// Line 1694, Address: 0x1022ba0, Func Offset: 0x30
	// Line 1695, Address: 0x1022ba8, Func Offset: 0x38
	// Line 1696, Address: 0x1022bac, Func Offset: 0x3c
	// Line 1700, Address: 0x1022bc4, Func Offset: 0x54
	// Line 1701, Address: 0x1022bcc, Func Offset: 0x5c
	// Line 1702, Address: 0x1022bd0, Func Offset: 0x60
	// Line 1704, Address: 0x1022be0, Func Offset: 0x70
	// Func End, Address: 0x1022c00, Func Offset: 0x90
}

// 
// Start address: 0x1022c00
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1707, Address: 0x1022c00, Func Offset: 0
	// Line 1708, Address: 0x1022c18, Func Offset: 0x18
	// Line 1709, Address: 0x1022c38, Func Offset: 0x38
	// Func End, Address: 0x1022c48, Func Offset: 0x48
}

// 
// Start address: 0x1022c50
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1714, Address: 0x1022c50, Func Offset: 0
	// Line 1718, Address: 0x1022c70, Func Offset: 0x20
	// Line 1721, Address: 0x1022c8c, Func Offset: 0x3c
	// Line 1725, Address: 0x1022cb4, Func Offset: 0x64
	// Line 1726, Address: 0x1022cc0, Func Offset: 0x70
	// Line 1728, Address: 0x1022ce8, Func Offset: 0x98
	// Func End, Address: 0x1022cf8, Func Offset: 0xa8
}

// 
// Start address: 0x1022d00
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	// Line 1734, Address: 0x1022d00, Func Offset: 0
	// Line 1739, Address: 0x1022d1c, Func Offset: 0x1c
	// Line 1740, Address: 0x1022d24, Func Offset: 0x24
	// Line 1743, Address: 0x1022d2c, Func Offset: 0x2c
	// Line 1744, Address: 0x1022d30, Func Offset: 0x30
	// Line 1745, Address: 0x1022d3c, Func Offset: 0x3c
	// Line 1746, Address: 0x1022d48, Func Offset: 0x48
	// Line 1747, Address: 0x1022d5c, Func Offset: 0x5c
	// Line 1748, Address: 0x1022d7c, Func Offset: 0x7c
	// Line 1749, Address: 0x1022d84, Func Offset: 0x84
	// Line 1750, Address: 0x1022da8, Func Offset: 0xa8
	// Func End, Address: 0x1022dc4, Func Offset: 0xc4
}

// 
// Start address: 0x1022dd0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1772, Address: 0x1022dd0, Func Offset: 0
	// Line 1777, Address: 0x1022df8, Func Offset: 0x28
	// Line 1778, Address: 0x1022e08, Func Offset: 0x38
	// Line 1780, Address: 0x1022e24, Func Offset: 0x54
	// Line 1781, Address: 0x1022e48, Func Offset: 0x78
	// Line 1782, Address: 0x1022e70, Func Offset: 0xa0
	// Line 1783, Address: 0x1022e7c, Func Offset: 0xac
	// Line 1784, Address: 0x1022e84, Func Offset: 0xb4
	// Line 1787, Address: 0x1022ea0, Func Offset: 0xd0
	// Line 1791, Address: 0x1022ec8, Func Offset: 0xf8
	// Line 1794, Address: 0x1022ed0, Func Offset: 0x100
	// Line 1795, Address: 0x1022ed4, Func Offset: 0x104
	// Line 1799, Address: 0x1022ef0, Func Offset: 0x120
	// Line 1806, Address: 0x1022f18, Func Offset: 0x148
	// Func End, Address: 0x1022f34, Func Offset: 0x164
}

// 
// Start address: 0x1022f40
void mapinit()
{
	// Line 1810, Address: 0x1022f40, Func Offset: 0
	// Line 1812, Address: 0x1022f48, Func Offset: 0x8
	// Line 1813, Address: 0x1022f5c, Func Offset: 0x1c
	// Line 1815, Address: 0x1022f70, Func Offset: 0x30
	// Line 1816, Address: 0x1022f88, Func Offset: 0x48
	// Line 1817, Address: 0x1022fa8, Func Offset: 0x68
	// Func End, Address: 0x1022fb8, Func Offset: 0x78
}

// 
// Start address: 0x1022fc0
void mapset()
{
	// Line 1828, Address: 0x1022fc0, Func Offset: 0
	// Func End, Address: 0x1022fc8, Func Offset: 0x8
}

