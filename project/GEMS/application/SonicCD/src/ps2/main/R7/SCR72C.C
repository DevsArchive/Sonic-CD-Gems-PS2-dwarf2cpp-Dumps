typedef struct _anon0;
typedef struct _anon1;
typedef union _anon2;
typedef struct tagPOINT;
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

typedef int(*type_4)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned short type_2[6];
typedef unsigned char type_3[65];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef int type_7[10];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef unsigned char type_12[64];
typedef unsigned char type_13[64][8];
typedef _anon2* type_14[8];
typedef short type_15[256];
typedef int type_16[39];
typedef unsigned short type_17[2];
typedef _anon1 type_18[128];
typedef unsigned char type_19[4];
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

union _anon2
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
// Start address: 0x1024a50
void enecginit()
{
	// Line 123, Address: 0x1024a50, Func Offset: 0
	// Func End, Address: 0x1024a58, Func Offset: 0x8
}

// 
// Start address: 0x1024a60
void divdevset()
{
	// Line 127, Address: 0x1024a60, Func Offset: 0
	// Func End, Address: 0x1024a68, Func Offset: 0x8
}

// 
// Start address: 0x1024a70
void scr_set()
{
	int i;
	// Line 176, Address: 0x1024a70, Func Offset: 0
	// Line 179, Address: 0x1024a7c, Func Offset: 0xc
	// Line 181, Address: 0x1024ac4, Func Offset: 0x54
	// Line 182, Address: 0x1024ac8, Func Offset: 0x58
	// Line 183, Address: 0x1024aec, Func Offset: 0x7c
	// Line 184, Address: 0x1024b08, Func Offset: 0x98
	// Line 185, Address: 0x1024b2c, Func Offset: 0xbc
	// Line 186, Address: 0x1024b48, Func Offset: 0xd8
	// Line 187, Address: 0x1024b6c, Func Offset: 0xfc
	// Line 188, Address: 0x1024b88, Func Offset: 0x118
	// Line 189, Address: 0x1024bac, Func Offset: 0x13c
	// Line 190, Address: 0x1024bc8, Func Offset: 0x158
	// Line 192, Address: 0x1024bec, Func Offset: 0x17c
	// Line 193, Address: 0x1024c10, Func Offset: 0x1a0
	// Line 194, Address: 0x1024c1c, Func Offset: 0x1ac
	// Line 196, Address: 0x1024c28, Func Offset: 0x1b8
	// Line 197, Address: 0x1024c4c, Func Offset: 0x1dc
	// Line 199, Address: 0x1024c58, Func Offset: 0x1e8
	// Line 200, Address: 0x1024c60, Func Offset: 0x1f0
	// Func End, Address: 0x1024c74, Func Offset: 0x204
}

// 
// Start address: 0x1024c80
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 204, Address: 0x1024c80, Func Offset: 0
	// Line 205, Address: 0x1024c94, Func Offset: 0x14
	// Line 209, Address: 0x1024cb0, Func Offset: 0x30
	// Line 217, Address: 0x1024cdc, Func Offset: 0x5c
	// Line 219, Address: 0x1024cf0, Func Offset: 0x70
	// Line 220, Address: 0x1024cf8, Func Offset: 0x78
	// Line 221, Address: 0x1024d08, Func Offset: 0x88
	// Line 222, Address: 0x1024d18, Func Offset: 0x98
	// Line 223, Address: 0x1024d2c, Func Offset: 0xac
	// Line 227, Address: 0x1024d34, Func Offset: 0xb4
	// Line 228, Address: 0x1024d38, Func Offset: 0xb8
	// Line 229, Address: 0x1024d5c, Func Offset: 0xdc
	// Line 232, Address: 0x1024d80, Func Offset: 0x100
	// Line 233, Address: 0x1024d94, Func Offset: 0x114
	// Line 234, Address: 0x1024da0, Func Offset: 0x120
	// Line 236, Address: 0x1024da8, Func Offset: 0x128
	// Line 240, Address: 0x1024dac, Func Offset: 0x12c
	// Line 241, Address: 0x1024dd0, Func Offset: 0x150
	// Line 243, Address: 0x1024de0, Func Offset: 0x160
	// Line 245, Address: 0x1024de8, Func Offset: 0x168
	// Line 246, Address: 0x1024dfc, Func Offset: 0x17c
	// Line 247, Address: 0x1024e08, Func Offset: 0x188
	// Line 249, Address: 0x1024e10, Func Offset: 0x190
	// Line 252, Address: 0x1024e14, Func Offset: 0x194
	// Line 253, Address: 0x1024e38, Func Offset: 0x1b8
	// Line 256, Address: 0x1024e48, Func Offset: 0x1c8
	// Line 258, Address: 0x1024e50, Func Offset: 0x1d0
	// Line 260, Address: 0x1024e60, Func Offset: 0x1e0
	// Line 261, Address: 0x1024e64, Func Offset: 0x1e4
	// Line 262, Address: 0x1024e7c, Func Offset: 0x1fc
	// Line 263, Address: 0x1024e94, Func Offset: 0x214
	// Line 264, Address: 0x1024eac, Func Offset: 0x22c
	// Line 267, Address: 0x1024ec4, Func Offset: 0x244
	// Func End, Address: 0x1024ee0, Func Offset: 0x260
}

// 
// Start address: 0x1024ee0
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 271, Address: 0x1024ee0, Func Offset: 0
	// Line 275, Address: 0x1024eec, Func Offset: 0xc
	// Line 276, Address: 0x1024ef0, Func Offset: 0x10
	// Line 277, Address: 0x1024ef8, Func Offset: 0x18
	// Line 278, Address: 0x1024f10, Func Offset: 0x30
	// Line 279, Address: 0x1024f20, Func Offset: 0x40
	// Line 280, Address: 0x1024f2c, Func Offset: 0x4c
	// Line 282, Address: 0x1024f38, Func Offset: 0x58
	// Line 283, Address: 0x1024f5c, Func Offset: 0x7c
	// Line 284, Address: 0x1024f94, Func Offset: 0xb4
	// Line 285, Address: 0x1024fc0, Func Offset: 0xe0
	// Func End, Address: 0x1024fcc, Func Offset: 0xec
}

// 
// Start address: 0x1024fd0
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 289, Address: 0x1024fd0, Func Offset: 0
	// Line 294, Address: 0x1024fe0, Func Offset: 0x10
	// Line 297, Address: 0x1024ff0, Func Offset: 0x20
	// Line 298, Address: 0x102501c, Func Offset: 0x4c
	// Line 299, Address: 0x1025024, Func Offset: 0x54
	// Line 300, Address: 0x102502c, Func Offset: 0x5c
	// Line 302, Address: 0x1025034, Func Offset: 0x64
	// Line 303, Address: 0x1025044, Func Offset: 0x74
	// Line 307, Address: 0x1025054, Func Offset: 0x84
	// Line 308, Address: 0x102508c, Func Offset: 0xbc
	// Line 309, Address: 0x10250ac, Func Offset: 0xdc
	// Line 311, Address: 0x10250e4, Func Offset: 0x114
	// Line 312, Address: 0x10250e8, Func Offset: 0x118
	// Line 313, Address: 0x10250f4, Func Offset: 0x124
	// Line 314, Address: 0x1025118, Func Offset: 0x148
	// Line 316, Address: 0x1025124, Func Offset: 0x154
	// Line 317, Address: 0x1025134, Func Offset: 0x164
	// Line 318, Address: 0x1025144, Func Offset: 0x174
	// Line 319, Address: 0x1025154, Func Offset: 0x184
	// Line 320, Address: 0x1025188, Func Offset: 0x1b8
	// Line 321, Address: 0x1025190, Func Offset: 0x1c0
	// Line 323, Address: 0x1025198, Func Offset: 0x1c8
	// Line 326, Address: 0x102519c, Func Offset: 0x1cc
	// Line 328, Address: 0x10251ac, Func Offset: 0x1dc
	// Line 330, Address: 0x10251b8, Func Offset: 0x1e8
	// Line 331, Address: 0x10251e8, Func Offset: 0x218
	// Line 332, Address: 0x10251ec, Func Offset: 0x21c
	// Line 334, Address: 0x10251fc, Func Offset: 0x22c
	// Line 336, Address: 0x102520c, Func Offset: 0x23c
	// Line 338, Address: 0x1025218, Func Offset: 0x248
	// Line 339, Address: 0x1025248, Func Offset: 0x278
	// Line 340, Address: 0x102524c, Func Offset: 0x27c
	// Line 346, Address: 0x102525c, Func Offset: 0x28c
	// Line 347, Address: 0x1025268, Func Offset: 0x298
	// Line 348, Address: 0x1025274, Func Offset: 0x2a4
	// Line 349, Address: 0x1025280, Func Offset: 0x2b0
	// Line 350, Address: 0x10252b4, Func Offset: 0x2e4
	// Func End, Address: 0x10252cc, Func Offset: 0x2fc
}

// 
// Start address: 0x10252d0
int z71aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl[39];
	// Line 354, Address: 0x10252d0, Func Offset: 0
	// Line 358, Address: 0x10252e4, Func Offset: 0x14
	// Line 366, Address: 0x1025310, Func Offset: 0x40
	// Line 367, Address: 0x1025334, Func Offset: 0x64
	// Line 368, Address: 0x1025338, Func Offset: 0x68
	// Line 369, Address: 0x1025350, Func Offset: 0x80
	// Line 370, Address: 0x1025354, Func Offset: 0x84
	// Line 371, Address: 0x1025358, Func Offset: 0x88
	// Line 372, Address: 0x1025364, Func Offset: 0x94
	// Line 373, Address: 0x1025370, Func Offset: 0xa0
	// Line 376, Address: 0x102537c, Func Offset: 0xac
	// Line 379, Address: 0x1025388, Func Offset: 0xb8
	// Line 380, Address: 0x1025394, Func Offset: 0xc4
	// Line 381, Address: 0x10253c4, Func Offset: 0xf4
	// Line 382, Address: 0x10253e8, Func Offset: 0x118
	// Line 383, Address: 0x102540c, Func Offset: 0x13c
	// Line 384, Address: 0x1025418, Func Offset: 0x148
	// Line 385, Address: 0x102543c, Func Offset: 0x16c
	// Line 386, Address: 0x102544c, Func Offset: 0x17c
	// Line 387, Address: 0x1025458, Func Offset: 0x188
	// Line 388, Address: 0x102545c, Func Offset: 0x18c
	// Func End, Address: 0x1025474, Func Offset: 0x1a4
}

// 
// Start address: 0x1025480
int z71aline0(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl0[10];
	// Line 391, Address: 0x1025480, Func Offset: 0
	// Line 395, Address: 0x1025494, Func Offset: 0x14
	// Line 401, Address: 0x10254c8, Func Offset: 0x48
	// Line 402, Address: 0x10254ec, Func Offset: 0x6c
	// Line 403, Address: 0x10254f0, Func Offset: 0x70
	// Line 404, Address: 0x1025508, Func Offset: 0x88
	// Line 405, Address: 0x102550c, Func Offset: 0x8c
	// Line 406, Address: 0x1025510, Func Offset: 0x90
	// Line 407, Address: 0x102551c, Func Offset: 0x9c
	// Line 408, Address: 0x1025540, Func Offset: 0xc0
	// Line 409, Address: 0x102554c, Func Offset: 0xcc
	// Line 410, Address: 0x1025570, Func Offset: 0xf0
	// Line 413, Address: 0x102557c, Func Offset: 0xfc
	// Line 416, Address: 0x1025588, Func Offset: 0x108
	// Line 417, Address: 0x10255b8, Func Offset: 0x138
	// Line 418, Address: 0x10255c4, Func Offset: 0x144
	// Line 419, Address: 0x10255e8, Func Offset: 0x168
	// Line 420, Address: 0x102560c, Func Offset: 0x18c
	// Line 421, Address: 0x1025618, Func Offset: 0x198
	// Line 422, Address: 0x102563c, Func Offset: 0x1bc
	// Line 423, Address: 0x102564c, Func Offset: 0x1cc
	// Line 424, Address: 0x1025650, Func Offset: 0x1d0
	// Func End, Address: 0x1025668, Func Offset: 0x1e8
}

// 
// Start address: 0x1025670
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	int i;
	int j;
	// Line 429, Address: 0x1025670, Func Offset: 0
	// Line 437, Address: 0x1025688, Func Offset: 0x18
	// Line 446, Address: 0x1025690, Func Offset: 0x20
	// Line 447, Address: 0x102569c, Func Offset: 0x2c
	// Line 448, Address: 0x10256a0, Func Offset: 0x30
	// Line 450, Address: 0x10256c8, Func Offset: 0x58
	// Line 451, Address: 0x10256d4, Func Offset: 0x64
	// Line 453, Address: 0x10256dc, Func Offset: 0x6c
	// Line 454, Address: 0x10256e4, Func Offset: 0x74
	// Line 455, Address: 0x10256e8, Func Offset: 0x78
	// Line 456, Address: 0x10256ec, Func Offset: 0x7c
	// Line 457, Address: 0x10256f8, Func Offset: 0x88
	// Line 459, Address: 0x1025704, Func Offset: 0x94
	// Line 460, Address: 0x102572c, Func Offset: 0xbc
	// Line 462, Address: 0x1025738, Func Offset: 0xc8
	// Line 463, Address: 0x1025740, Func Offset: 0xd0
	// Line 464, Address: 0x1025744, Func Offset: 0xd4
	// Line 465, Address: 0x1025754, Func Offset: 0xe4
	// Line 466, Address: 0x1025764, Func Offset: 0xf4
	// Func End, Address: 0x102577c, Func Offset: 0x10c
}

// 
// Start address: 0x1025780
void scroll_h()
{
	unsigned short wD4;
	// Line 478, Address: 0x1025780, Func Offset: 0
	// Line 481, Address: 0x102578c, Func Offset: 0xc
	// Line 482, Address: 0x1025798, Func Offset: 0x18
	// Line 483, Address: 0x10257a0, Func Offset: 0x20
	// Line 484, Address: 0x10257d4, Func Offset: 0x54
	// Line 485, Address: 0x10257e8, Func Offset: 0x68
	// Line 486, Address: 0x1025814, Func Offset: 0x94
	// Line 487, Address: 0x1025828, Func Offset: 0xa8
	// Line 490, Address: 0x1025830, Func Offset: 0xb0
	// Line 495, Address: 0x1025844, Func Offset: 0xc4
	// Func End, Address: 0x1025858, Func Offset: 0xd8
}

// 
// Start address: 0x1025860
void scrh_move()
{
	unsigned short wD0;
	// Line 497, Address: 0x1025860, Func Offset: 0
	// Line 500, Address: 0x102586c, Func Offset: 0xc
	// Line 501, Address: 0x1025878, Func Offset: 0x18
	// Line 502, Address: 0x102588c, Func Offset: 0x2c
	// Line 503, Address: 0x10258a0, Func Offset: 0x40
	// Line 505, Address: 0x10258ac, Func Offset: 0x4c
	// Line 506, Address: 0x10258b4, Func Offset: 0x54
	// Line 507, Address: 0x10258bc, Func Offset: 0x5c
	// Line 508, Address: 0x10258d4, Func Offset: 0x74
	// Line 509, Address: 0x10258e0, Func Offset: 0x80
	// Line 511, Address: 0x10258e8, Func Offset: 0x88
	// Line 514, Address: 0x10258f4, Func Offset: 0x94
	// Func End, Address: 0x1025908, Func Offset: 0xa8
}

// 
// Start address: 0x1025910
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 517, Address: 0x1025910, Func Offset: 0
	// Line 520, Address: 0x102591c, Func Offset: 0xc
	// Line 521, Address: 0x102593c, Func Offset: 0x2c
	// Line 524, Address: 0x1025944, Func Offset: 0x34
	// Line 525, Address: 0x102595c, Func Offset: 0x4c
	// Line 526, Address: 0x102598c, Func Offset: 0x7c
	// Line 529, Address: 0x1025998, Func Offset: 0x88
	// Line 530, Address: 0x10259a0, Func Offset: 0x90
	// Line 531, Address: 0x10259b4, Func Offset: 0xa4
	// Line 532, Address: 0x10259e4, Func Offset: 0xd4
	// Line 533, Address: 0x10259f0, Func Offset: 0xe0
	// Line 535, Address: 0x10259f8, Func Offset: 0xe8
	// Func End, Address: 0x1025a08, Func Offset: 0xf8
}

// 
// Start address: 0x1025a10
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 538, Address: 0x1025a10, Func Offset: 0
	// Line 541, Address: 0x1025a1c, Func Offset: 0xc
	// Line 542, Address: 0x1025a3c, Func Offset: 0x2c
	// Line 545, Address: 0x1025a44, Func Offset: 0x34
	// Line 546, Address: 0x1025a5c, Func Offset: 0x4c
	// Line 547, Address: 0x1025a8c, Func Offset: 0x7c
	// Line 550, Address: 0x1025a98, Func Offset: 0x88
	// Line 551, Address: 0x1025aa0, Func Offset: 0x90
	// Line 552, Address: 0x1025ab4, Func Offset: 0xa4
	// Line 553, Address: 0x1025ae4, Func Offset: 0xd4
	// Line 554, Address: 0x1025af0, Func Offset: 0xe0
	// Line 556, Address: 0x1025af8, Func Offset: 0xe8
	// Func End, Address: 0x1025b08, Func Offset: 0xf8
}

// 
// Start address: 0x1025b10
void scroll_v()
{
	unsigned short wD0;
	// Line 575, Address: 0x1025b10, Func Offset: 0
	// Line 578, Address: 0x1025b1c, Func Offset: 0xc
	// Line 579, Address: 0x1025b48, Func Offset: 0x38
	// Line 580, Address: 0x1025b60, Func Offset: 0x50
	// Line 583, Address: 0x1025b68, Func Offset: 0x58
	// Line 584, Address: 0x1025b80, Func Offset: 0x70
	// Line 585, Address: 0x1025b88, Func Offset: 0x78
	// Line 586, Address: 0x1025ba8, Func Offset: 0x98
	// Line 587, Address: 0x1025bbc, Func Offset: 0xac
	// Line 588, Address: 0x1025bc8, Func Offset: 0xb8
	// Line 590, Address: 0x1025bd0, Func Offset: 0xc0
	// Line 591, Address: 0x1025be4, Func Offset: 0xd4
	// Line 592, Address: 0x1025bf4, Func Offset: 0xe4
	// Line 593, Address: 0x1025bfc, Func Offset: 0xec
	// Line 594, Address: 0x1025c08, Func Offset: 0xf8
	// Line 596, Address: 0x1025c10, Func Offset: 0x100
	// Line 597, Address: 0x1025c18, Func Offset: 0x108
	// Line 598, Address: 0x1025c2c, Func Offset: 0x11c
	// Line 599, Address: 0x1025c34, Func Offset: 0x124
	// Line 605, Address: 0x1025c3c, Func Offset: 0x12c
	// Line 606, Address: 0x1025c50, Func Offset: 0x140
	// Line 607, Address: 0x1025c58, Func Offset: 0x148
	// Line 608, Address: 0x1025c64, Func Offset: 0x154
	// Line 610, Address: 0x1025c6c, Func Offset: 0x15c
	// Line 611, Address: 0x1025c80, Func Offset: 0x170
	// Line 612, Address: 0x1025c88, Func Offset: 0x178
	// Line 617, Address: 0x1025c90, Func Offset: 0x180
	// Line 619, Address: 0x1025c98, Func Offset: 0x188
	// Func End, Address: 0x1025cac, Func Offset: 0x19c
}

// 
// Start address: 0x1025cb0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 625, Address: 0x1025cb0, Func Offset: 0
	// Line 628, Address: 0x1025cc0, Func Offset: 0x10
	// Line 629, Address: 0x1025cdc, Func Offset: 0x2c
	// Line 630, Address: 0x1025ce8, Func Offset: 0x38
	// Line 633, Address: 0x1025cf0, Func Offset: 0x40
	// Line 634, Address: 0x1025cfc, Func Offset: 0x4c
	// Line 635, Address: 0x1025d14, Func Offset: 0x64
	// Line 638, Address: 0x1025d30, Func Offset: 0x80
	// Line 639, Address: 0x1025d40, Func Offset: 0x90
	// Line 640, Address: 0x1025d4c, Func Offset: 0x9c
	// Line 642, Address: 0x1025d54, Func Offset: 0xa4
	// Line 643, Address: 0x1025d74, Func Offset: 0xc4
	// Line 644, Address: 0x1025d80, Func Offset: 0xd0
	// Line 645, Address: 0x1025d88, Func Offset: 0xd8
	// Line 646, Address: 0x1025da8, Func Offset: 0xf8
	// Line 647, Address: 0x1025db4, Func Offset: 0x104
	// Line 649, Address: 0x1025dbc, Func Offset: 0x10c
	// Line 653, Address: 0x1025dc8, Func Offset: 0x118
	// Func End, Address: 0x1025ddc, Func Offset: 0x12c
}

// 
// Start address: 0x1025de0
void sv_move_main1(unsigned short wD0)
{
	// Line 657, Address: 0x1025de0, Func Offset: 0
	// Line 659, Address: 0x1025dec, Func Offset: 0xc
	// Line 660, Address: 0x1025e0c, Func Offset: 0x2c
	// Line 661, Address: 0x1025e18, Func Offset: 0x38
	// Line 662, Address: 0x1025e20, Func Offset: 0x40
	// Line 663, Address: 0x1025e40, Func Offset: 0x60
	// Line 664, Address: 0x1025e4c, Func Offset: 0x6c
	// Line 666, Address: 0x1025e54, Func Offset: 0x74
	// Line 669, Address: 0x1025e60, Func Offset: 0x80
	// Func End, Address: 0x1025e70, Func Offset: 0x90
}

// 
// Start address: 0x1025e70
void sv_move_main2(unsigned short wD0)
{
	// Line 672, Address: 0x1025e70, Func Offset: 0
	// Line 674, Address: 0x1025e7c, Func Offset: 0xc
	// Line 675, Address: 0x1025e9c, Func Offset: 0x2c
	// Line 676, Address: 0x1025ea8, Func Offset: 0x38
	// Line 677, Address: 0x1025eb0, Func Offset: 0x40
	// Line 678, Address: 0x1025ed0, Func Offset: 0x60
	// Line 679, Address: 0x1025edc, Func Offset: 0x6c
	// Line 681, Address: 0x1025ee4, Func Offset: 0x74
	// Line 684, Address: 0x1025ef0, Func Offset: 0x80
	// Func End, Address: 0x1025f00, Func Offset: 0x90
}

// 
// Start address: 0x1025f00
void sv_move_sub2()
{
	// Line 687, Address: 0x1025f00, Func Offset: 0
	// Line 688, Address: 0x1025f08, Func Offset: 0x8
	// Line 689, Address: 0x1025f10, Func Offset: 0x10
	// Line 690, Address: 0x1025f1c, Func Offset: 0x1c
	// Func End, Address: 0x1025f2c, Func Offset: 0x2c
}

// 
// Start address: 0x1025f30
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 693, Address: 0x1025f30, Func Offset: 0
	// Line 696, Address: 0x1025f3c, Func Offset: 0xc
	// Line 697, Address: 0x1025f40, Func Offset: 0x10
	// Line 698, Address: 0x1025f48, Func Offset: 0x18
	// Line 699, Address: 0x1025f64, Func Offset: 0x34
	// Line 700, Address: 0x1025f80, Func Offset: 0x50
	// Line 701, Address: 0x1025f8c, Func Offset: 0x5c
	// Line 703, Address: 0x1025f94, Func Offset: 0x64
	// Line 706, Address: 0x1025fa0, Func Offset: 0x70
	// Func End, Address: 0x1025fb0, Func Offset: 0x80
}

// 
// Start address: 0x1025fb0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 711, Address: 0x1025fb0, Func Offset: 0
	// Line 715, Address: 0x1025fc0, Func Offset: 0x10
	// Line 716, Address: 0x1025fdc, Func Offset: 0x2c
	// Line 717, Address: 0x1025fe8, Func Offset: 0x38
	// Line 719, Address: 0x1025ffc, Func Offset: 0x4c
	// Line 720, Address: 0x1026004, Func Offset: 0x54
	// Line 721, Address: 0x102600c, Func Offset: 0x5c
	// Line 722, Address: 0x1026010, Func Offset: 0x60
	// Line 723, Address: 0x102601c, Func Offset: 0x6c
	// Func End, Address: 0x1026030, Func Offset: 0x80
}

// 
// Start address: 0x1026030
void scrv_up_ch(_anon2 lD1)
{
	// Line 727, Address: 0x1026030, Func Offset: 0
	// Line 728, Address: 0x102603c, Func Offset: 0xc
	// Line 729, Address: 0x1026064, Func Offset: 0x34
	// Line 730, Address: 0x102607c, Func Offset: 0x4c
	// Line 731, Address: 0x1026088, Func Offset: 0x58
	// Line 732, Address: 0x102609c, Func Offset: 0x6c
	// Line 733, Address: 0x10260b0, Func Offset: 0x80
	// Line 734, Address: 0x10260c4, Func Offset: 0x94
	// Line 737, Address: 0x10260cc, Func Offset: 0x9c
	// Line 740, Address: 0x10260d8, Func Offset: 0xa8
	// Line 742, Address: 0x10260e4, Func Offset: 0xb4
	// Func End, Address: 0x10260f4, Func Offset: 0xc4
}

// 
// Start address: 0x1026100
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 748, Address: 0x1026100, Func Offset: 0
	// Line 752, Address: 0x1026110, Func Offset: 0x10
	// Line 753, Address: 0x1026114, Func Offset: 0x14
	// Line 754, Address: 0x102611c, Func Offset: 0x1c
	// Line 755, Address: 0x1026128, Func Offset: 0x28
	// Line 757, Address: 0x102613c, Func Offset: 0x3c
	// Line 758, Address: 0x1026144, Func Offset: 0x44
	// Line 759, Address: 0x102614c, Func Offset: 0x4c
	// Line 761, Address: 0x1026150, Func Offset: 0x50
	// Line 763, Address: 0x102615c, Func Offset: 0x5c
	// Func End, Address: 0x1026170, Func Offset: 0x70
}

// 
// Start address: 0x1026170
void scrv_down_ch(_anon2 lD1)
{
	// Line 767, Address: 0x1026170, Func Offset: 0
	// Line 768, Address: 0x102617c, Func Offset: 0xc
	// Line 769, Address: 0x10261a4, Func Offset: 0x34
	// Line 770, Address: 0x10261b0, Func Offset: 0x40
	// Line 771, Address: 0x10261c4, Func Offset: 0x54
	// Line 772, Address: 0x10261d8, Func Offset: 0x68
	// Line 773, Address: 0x10261ec, Func Offset: 0x7c
	// Line 774, Address: 0x1026200, Func Offset: 0x90
	// Line 776, Address: 0x1026208, Func Offset: 0x98
	// Line 779, Address: 0x1026214, Func Offset: 0xa4
	// Line 781, Address: 0x1026220, Func Offset: 0xb0
	// Func End, Address: 0x1026230, Func Offset: 0xc0
}

// 
// Start address: 0x1026230
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 784, Address: 0x1026230, Func Offset: 0
	// Line 787, Address: 0x1026240, Func Offset: 0x10
	// Line 789, Address: 0x102624c, Func Offset: 0x1c
	// Line 790, Address: 0x1026254, Func Offset: 0x24
	// Line 791, Address: 0x102625c, Func Offset: 0x2c
	// Line 793, Address: 0x1026260, Func Offset: 0x30
	// Line 794, Address: 0x1026288, Func Offset: 0x58
	// Line 797, Address: 0x1026294, Func Offset: 0x64
	// Line 798, Address: 0x10262c8, Func Offset: 0x98
	// Line 799, Address: 0x10262dc, Func Offset: 0xac
	// Line 801, Address: 0x1026308, Func Offset: 0xd8
	// Line 802, Address: 0x102631c, Func Offset: 0xec
	// Line 804, Address: 0x1026324, Func Offset: 0xf4
	// Line 809, Address: 0x1026338, Func Offset: 0x108
	// Func End, Address: 0x102634c, Func Offset: 0x11c
}

// 
// Start address: 0x1026350
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 813, Address: 0x1026350, Func Offset: 0
	// Line 816, Address: 0x102635c, Func Offset: 0xc
	// Line 817, Address: 0x102636c, Func Offset: 0x1c
	// Line 818, Address: 0x102637c, Func Offset: 0x2c
	// Line 820, Address: 0x1026388, Func Offset: 0x38
	// Line 822, Address: 0x10263bc, Func Offset: 0x6c
	// Line 823, Address: 0x10263d0, Func Offset: 0x80
	// Line 824, Address: 0x10263e0, Func Offset: 0x90
	// Line 825, Address: 0x10263f4, Func Offset: 0xa4
	// Line 826, Address: 0x1026408, Func Offset: 0xb8
	// Line 829, Address: 0x1026410, Func Offset: 0xc0
	// Line 834, Address: 0x1026424, Func Offset: 0xd4
	// Line 835, Address: 0x1026434, Func Offset: 0xe4
	// Line 836, Address: 0x1026444, Func Offset: 0xf4
	// Line 837, Address: 0x102645c, Func Offset: 0x10c
	// Line 839, Address: 0x1026468, Func Offset: 0x118
	// Line 841, Address: 0x102649c, Func Offset: 0x14c
	// Line 842, Address: 0x10264b0, Func Offset: 0x160
	// Line 843, Address: 0x10264c0, Func Offset: 0x170
	// Line 844, Address: 0x10264d4, Func Offset: 0x184
	// Line 845, Address: 0x10264e8, Func Offset: 0x198
	// Line 848, Address: 0x10264f0, Func Offset: 0x1a0
	// Line 853, Address: 0x1026504, Func Offset: 0x1b4
	// Func End, Address: 0x1026510, Func Offset: 0x1c0
}

// 
// Start address: 0x1026510
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 860, Address: 0x1026510, Func Offset: 0
	// Line 863, Address: 0x102651c, Func Offset: 0xc
	// Line 864, Address: 0x1026528, Func Offset: 0x18
	// Line 866, Address: 0x1026534, Func Offset: 0x24
	// Line 867, Address: 0x1026560, Func Offset: 0x50
	// Line 868, Address: 0x1026574, Func Offset: 0x64
	// Line 869, Address: 0x10265a4, Func Offset: 0x94
	// Line 870, Address: 0x10265b8, Func Offset: 0xa8
	// Line 873, Address: 0x10265c0, Func Offset: 0xb0
	// Line 878, Address: 0x10265d4, Func Offset: 0xc4
	// Func End, Address: 0x10265e4, Func Offset: 0xd4
}

// 
// Start address: 0x10265f0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 882, Address: 0x10265f0, Func Offset: 0
	// Line 886, Address: 0x1026600, Func Offset: 0x10
	// Line 887, Address: 0x102660c, Func Offset: 0x1c
	// Line 888, Address: 0x102661c, Func Offset: 0x2c
	// Line 890, Address: 0x1026628, Func Offset: 0x38
	// Line 891, Address: 0x1026630, Func Offset: 0x40
	// Line 892, Address: 0x1026638, Func Offset: 0x48
	// Line 894, Address: 0x1026644, Func Offset: 0x54
	// Line 895, Address: 0x1026650, Func Offset: 0x60
	// Line 896, Address: 0x1026664, Func Offset: 0x74
	// Line 897, Address: 0x1026670, Func Offset: 0x80
	// Line 898, Address: 0x1026684, Func Offset: 0x94
	// Line 899, Address: 0x1026694, Func Offset: 0xa4
	// Line 900, Address: 0x10266a8, Func Offset: 0xb8
	// Line 901, Address: 0x10266c4, Func Offset: 0xd4
	// Line 904, Address: 0x10266cc, Func Offset: 0xdc
	// Line 909, Address: 0x10266ec, Func Offset: 0xfc
	// Func End, Address: 0x10266fc, Func Offset: 0x10c
}

// 
// Start address: 0x1026700
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 912, Address: 0x1026700, Func Offset: 0
	// Line 916, Address: 0x1026710, Func Offset: 0x10
	// Line 917, Address: 0x102671c, Func Offset: 0x1c
	// Line 918, Address: 0x102672c, Func Offset: 0x2c
	// Line 920, Address: 0x1026738, Func Offset: 0x38
	// Line 921, Address: 0x1026740, Func Offset: 0x40
	// Line 922, Address: 0x1026748, Func Offset: 0x48
	// Line 924, Address: 0x1026754, Func Offset: 0x54
	// Line 925, Address: 0x1026760, Func Offset: 0x60
	// Line 926, Address: 0x1026774, Func Offset: 0x74
	// Line 927, Address: 0x1026780, Func Offset: 0x80
	// Line 928, Address: 0x1026794, Func Offset: 0x94
	// Line 929, Address: 0x10267a4, Func Offset: 0xa4
	// Line 930, Address: 0x10267b8, Func Offset: 0xb8
	// Line 931, Address: 0x10267d4, Func Offset: 0xd4
	// Line 934, Address: 0x10267dc, Func Offset: 0xdc
	// Line 939, Address: 0x10267fc, Func Offset: 0xfc
	// Func End, Address: 0x102680c, Func Offset: 0x10c
}

// 
// Start address: 0x1026810
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 951, Address: 0x1026810, Func Offset: 0
	// Line 955, Address: 0x1026820, Func Offset: 0x10
	// Line 956, Address: 0x102682c, Func Offset: 0x1c
	// Line 957, Address: 0x102683c, Func Offset: 0x2c
	// Line 959, Address: 0x1026848, Func Offset: 0x38
	// Line 960, Address: 0x1026850, Func Offset: 0x40
	// Line 961, Address: 0x1026858, Func Offset: 0x48
	// Line 963, Address: 0x1026864, Func Offset: 0x54
	// Line 964, Address: 0x1026870, Func Offset: 0x60
	// Line 965, Address: 0x1026884, Func Offset: 0x74
	// Line 966, Address: 0x1026890, Func Offset: 0x80
	// Line 967, Address: 0x10268a4, Func Offset: 0x94
	// Line 968, Address: 0x10268b4, Func Offset: 0xa4
	// Line 969, Address: 0x10268c8, Func Offset: 0xb8
	// Line 970, Address: 0x10268e4, Func Offset: 0xd4
	// Line 973, Address: 0x10268ec, Func Offset: 0xdc
	// Line 978, Address: 0x102690c, Func Offset: 0xfc
	// Func End, Address: 0x102691c, Func Offset: 0x10c
}

// 
// Start address: 0x1026920
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 992, Address: 0x1026920, Func Offset: 0
	// Line 998, Address: 0x102693c, Func Offset: 0x1c
	// Line 999, Address: 0x1026940, Func Offset: 0x20
	// Line 1000, Address: 0x102694c, Func Offset: 0x2c
	// Line 1001, Address: 0x1026958, Func Offset: 0x38
	// Line 1002, Address: 0x1026960, Func Offset: 0x40
	// Line 1003, Address: 0x1026968, Func Offset: 0x48
	// Line 1005, Address: 0x102697c, Func Offset: 0x5c
	// Line 1006, Address: 0x1026988, Func Offset: 0x68
	// Line 1007, Address: 0x1026994, Func Offset: 0x74
	// Line 1008, Address: 0x102699c, Func Offset: 0x7c
	// Line 1010, Address: 0x10269a4, Func Offset: 0x84
	// Func End, Address: 0x10269c8, Func Offset: 0xa8
}

// 
// Start address: 0x10269d0
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
	// Line 1023, Address: 0x10269d0, Func Offset: 0
	// Line 1032, Address: 0x10269f0, Func Offset: 0x20
	// Line 1033, Address: 0x10269f4, Func Offset: 0x24
	// Line 1034, Address: 0x1026a00, Func Offset: 0x30
	// Line 1035, Address: 0x1026a0c, Func Offset: 0x3c
	// Line 1036, Address: 0x1026a14, Func Offset: 0x44
	// Line 1037, Address: 0x1026a1c, Func Offset: 0x4c
	// Line 1039, Address: 0x1026a30, Func Offset: 0x60
	// Line 1040, Address: 0x1026a34, Func Offset: 0x64
	// Line 1041, Address: 0x1026a40, Func Offset: 0x70
	// Line 1042, Address: 0x1026a4c, Func Offset: 0x7c
	// Line 1043, Address: 0x1026a54, Func Offset: 0x84
	// Line 1045, Address: 0x1026a5c, Func Offset: 0x8c
	// Line 1046, Address: 0x1026a68, Func Offset: 0x98
	// Line 1047, Address: 0x1026a7c, Func Offset: 0xac
	// Line 1049, Address: 0x1026a88, Func Offset: 0xb8
	// Line 1050, Address: 0x1026a90, Func Offset: 0xc0
	// Line 1052, Address: 0x1026a98, Func Offset: 0xc8
	// Line 1054, Address: 0x1026ab8, Func Offset: 0xe8
	// Line 1060, Address: 0x1026ae4, Func Offset: 0x114
	// Line 1061, Address: 0x1026af8, Func Offset: 0x128
	// Line 1063, Address: 0x1026b04, Func Offset: 0x134
	// Line 1064, Address: 0x1026b0c, Func Offset: 0x13c
	// Line 1065, Address: 0x1026b14, Func Offset: 0x144
	// Line 1067, Address: 0x1026b34, Func Offset: 0x164
	// Line 1073, Address: 0x1026b60, Func Offset: 0x190
	// Line 1074, Address: 0x1026b74, Func Offset: 0x1a4
	// Line 1076, Address: 0x1026b80, Func Offset: 0x1b0
	// Line 1077, Address: 0x1026b88, Func Offset: 0x1b8
	// Line 1078, Address: 0x1026b90, Func Offset: 0x1c0
	// Line 1080, Address: 0x1026bb0, Func Offset: 0x1e0
	// Line 1086, Address: 0x1026bdc, Func Offset: 0x20c
	// Line 1087, Address: 0x1026bf0, Func Offset: 0x220
	// Line 1089, Address: 0x1026bfc, Func Offset: 0x22c
	// Line 1090, Address: 0x1026c04, Func Offset: 0x234
	// Line 1091, Address: 0x1026c0c, Func Offset: 0x23c
	// Line 1093, Address: 0x1026c2c, Func Offset: 0x25c
	// Line 1102, Address: 0x1026c58, Func Offset: 0x288
	// Func End, Address: 0x1026c80, Func Offset: 0x2b0
}

// 
// Start address: 0x1026c80
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
	// Line 1119, Address: 0x1026c80, Func Offset: 0
	// Line 1130, Address: 0x1026cac, Func Offset: 0x2c
	// Line 1132, Address: 0x1026cb4, Func Offset: 0x34
	// Line 1133, Address: 0x1026ccc, Func Offset: 0x4c
	// Line 1134, Address: 0x1026ce0, Func Offset: 0x60
	// Line 1136, Address: 0x1026ce8, Func Offset: 0x68
	// Line 1138, Address: 0x1026cfc, Func Offset: 0x7c
	// Line 1139, Address: 0x1026d14, Func Offset: 0x94
	// Line 1140, Address: 0x1026d28, Func Offset: 0xa8
	// Line 1141, Address: 0x1026d30, Func Offset: 0xb0
	// Line 1143, Address: 0x1026d38, Func Offset: 0xb8
	// Line 1144, Address: 0x1026d4c, Func Offset: 0xcc
	// Line 1149, Address: 0x1026d54, Func Offset: 0xd4
	// Line 1150, Address: 0x1026da4, Func Offset: 0x124
	// Line 1151, Address: 0x1026dac, Func Offset: 0x12c
	// Line 1157, Address: 0x1026dcc, Func Offset: 0x14c
	// Line 1158, Address: 0x1026dec, Func Offset: 0x16c
	// Line 1159, Address: 0x1026e10, Func Offset: 0x190
	// Line 1160, Address: 0x1026e1c, Func Offset: 0x19c
	// Line 1161, Address: 0x1026e24, Func Offset: 0x1a4
	// Line 1163, Address: 0x1026e44, Func Offset: 0x1c4
	// Line 1167, Address: 0x1026e70, Func Offset: 0x1f0
	// Line 1170, Address: 0x1026e78, Func Offset: 0x1f8
	// Line 1171, Address: 0x1026e7c, Func Offset: 0x1fc
	// Line 1175, Address: 0x1026e9c, Func Offset: 0x21c
	// Line 1182, Address: 0x1026ec8, Func Offset: 0x248
	// Line 1189, Address: 0x1026edc, Func Offset: 0x25c
	// Line 1190, Address: 0x1026ee4, Func Offset: 0x264
	// Line 1191, Address: 0x1026eec, Func Offset: 0x26c
	// Line 1192, Address: 0x1026f04, Func Offset: 0x284
	// Line 1193, Address: 0x1026f24, Func Offset: 0x2a4
	// Line 1197, Address: 0x1026f2c, Func Offset: 0x2ac
	// Line 1199, Address: 0x1026f5c, Func Offset: 0x2dc
	// Line 1200, Address: 0x1026f68, Func Offset: 0x2e8
	// Line 1204, Address: 0x1026f78, Func Offset: 0x2f8
	// Line 1205, Address: 0x1026f84, Func Offset: 0x304
	// Line 1206, Address: 0x1026fa4, Func Offset: 0x324
	// Line 1207, Address: 0x1026fb0, Func Offset: 0x330
	// Line 1208, Address: 0x1026fdc, Func Offset: 0x35c
	// Line 1209, Address: 0x1026ffc, Func Offset: 0x37c
	// Line 1211, Address: 0x1027020, Func Offset: 0x3a0
	// Line 1214, Address: 0x1027044, Func Offset: 0x3c4
	// Line 1216, Address: 0x1027064, Func Offset: 0x3e4
	// Line 1219, Address: 0x1027078, Func Offset: 0x3f8
	// Line 1220, Address: 0x1027084, Func Offset: 0x404
	// Line 1221, Address: 0x1027094, Func Offset: 0x414
	// Line 1223, Address: 0x102709c, Func Offset: 0x41c
	// Func End, Address: 0x10270c4, Func Offset: 0x444
}

// 
// Start address: 0x10270d0
void scrollwrtc()
{
	// Line 1229, Address: 0x10270d0, Func Offset: 0
	// Func End, Address: 0x10270d8, Func Offset: 0x8
}

// 
// Start address: 0x10270e0
void scrollwrtz()
{
	// Line 1234, Address: 0x10270e0, Func Offset: 0
	// Func End, Address: 0x10270e8, Func Offset: 0x8
}

// 
// Start address: 0x10270f0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1252, Address: 0x10270f0, Func Offset: 0
	// Line 1265, Address: 0x1027118, Func Offset: 0x28
	// Line 1268, Address: 0x1027138, Func Offset: 0x48
	// Line 1269, Address: 0x102714c, Func Offset: 0x5c
	// Line 1270, Address: 0x1027160, Func Offset: 0x70
	// Line 1271, Address: 0x1027174, Func Offset: 0x84
	// Line 1273, Address: 0x1027188, Func Offset: 0x98
	// Line 1274, Address: 0x1027194, Func Offset: 0xa4
	// Line 1275, Address: 0x10271a8, Func Offset: 0xb8
	// Func End, Address: 0x10271b8, Func Offset: 0xc8
}

// 
// Start address: 0x10271c0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1279, Address: 0x10271c0, Func Offset: 0
	// Line 1283, Address: 0x10271e8, Func Offset: 0x28
	// Line 1286, Address: 0x1027208, Func Offset: 0x48
	// Line 1287, Address: 0x102721c, Func Offset: 0x5c
	// Line 1288, Address: 0x1027230, Func Offset: 0x70
	// Line 1289, Address: 0x1027244, Func Offset: 0x84
	// Line 1291, Address: 0x1027258, Func Offset: 0x98
	// Line 1292, Address: 0x1027264, Func Offset: 0xa4
	// Line 1293, Address: 0x1027278, Func Offset: 0xb8
	// Func End, Address: 0x1027288, Func Offset: 0xc8
}

// 
// Start address: 0x1027290
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1313, Address: 0x1027290, Func Offset: 0
	// Line 1317, Address: 0x10272b8, Func Offset: 0x28
	// Line 1320, Address: 0x10272d8, Func Offset: 0x48
	// Line 1321, Address: 0x10272ec, Func Offset: 0x5c
	// Line 1322, Address: 0x10272fc, Func Offset: 0x6c
	// Line 1323, Address: 0x1027310, Func Offset: 0x80
	// Line 1325, Address: 0x1027320, Func Offset: 0x90
	// Line 1326, Address: 0x102732c, Func Offset: 0x9c
	// Line 1327, Address: 0x1027340, Func Offset: 0xb0
	// Func End, Address: 0x1027350, Func Offset: 0xc0
}

// 
// Start address: 0x1027350
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
	// Line 1346, Address: 0x1027350, Func Offset: 0
	// Line 1347, Address: 0x1027384, Func Offset: 0x34
	// Line 1352, Address: 0x1027388, Func Offset: 0x38
	// Line 1354, Address: 0x1027398, Func Offset: 0x48
	// Line 1355, Address: 0x102739c, Func Offset: 0x4c
	// Line 1356, Address: 0x10273a4, Func Offset: 0x54
	// Line 1358, Address: 0x10273b4, Func Offset: 0x64
	// Line 1360, Address: 0x10273b8, Func Offset: 0x68
	// Line 1361, Address: 0x10273c0, Func Offset: 0x70
	// Line 1364, Address: 0x10273c8, Func Offset: 0x78
	// Line 1365, Address: 0x10273d0, Func Offset: 0x80
	// Line 1366, Address: 0x10273dc, Func Offset: 0x8c
	// Line 1368, Address: 0x10273e8, Func Offset: 0x98
	// Line 1369, Address: 0x10273f0, Func Offset: 0xa0
	// Line 1370, Address: 0x10273f8, Func Offset: 0xa8
	// Line 1371, Address: 0x1027400, Func Offset: 0xb0
	// Line 1373, Address: 0x102740c, Func Offset: 0xbc
	// Line 1374, Address: 0x1027414, Func Offset: 0xc4
	// Line 1375, Address: 0x102741c, Func Offset: 0xcc
	// Line 1376, Address: 0x1027424, Func Offset: 0xd4
	// Line 1378, Address: 0x1027430, Func Offset: 0xe0
	// Line 1379, Address: 0x1027438, Func Offset: 0xe8
	// Line 1380, Address: 0x1027440, Func Offset: 0xf0
	// Line 1383, Address: 0x1027448, Func Offset: 0xf8
	// Line 1384, Address: 0x1027450, Func Offset: 0x100
	// Line 1387, Address: 0x1027458, Func Offset: 0x108
	// Line 1388, Address: 0x102749c, Func Offset: 0x14c
	// Line 1389, Address: 0x10274e0, Func Offset: 0x190
	// Line 1390, Address: 0x1027524, Func Offset: 0x1d4
	// Line 1392, Address: 0x1027568, Func Offset: 0x218
	// Func End, Address: 0x1027598, Func Offset: 0x248
}

// 
// Start address: 0x10275a0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1410, Address: 0x10275a0, Func Offset: 0
	// Line 1411, Address: 0x10275c0, Func Offset: 0x20
	// Line 1412, Address: 0x10275e0, Func Offset: 0x40
	// Func End, Address: 0x10275f0, Func Offset: 0x50
}

// 
// Start address: 0x10275f0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1414, Address: 0x10275f0, Func Offset: 0
	// Line 1415, Address: 0x1027610, Func Offset: 0x20
	// Line 1416, Address: 0x1027614, Func Offset: 0x24
	// Line 1417, Address: 0x1027634, Func Offset: 0x44
	// Func End, Address: 0x1027644, Func Offset: 0x54
}

// 
// Start address: 0x1027650
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1424, Address: 0x1027650, Func Offset: 0
	// Line 1430, Address: 0x1027680, Func Offset: 0x30
	// Line 1431, Address: 0x1027690, Func Offset: 0x40
	// Line 1437, Address: 0x10276a0, Func Offset: 0x50
	// Line 1438, Address: 0x10276bc, Func Offset: 0x6c
	// Line 1439, Address: 0x10276c0, Func Offset: 0x70
	// Line 1440, Address: 0x10276dc, Func Offset: 0x8c
	// Line 1441, Address: 0x10276e0, Func Offset: 0x90
	// Line 1442, Address: 0x1027700, Func Offset: 0xb0
	// Line 1443, Address: 0x1027708, Func Offset: 0xb8
	// Line 1444, Address: 0x1027728, Func Offset: 0xd8
	// Line 1445, Address: 0x1027730, Func Offset: 0xe0
	// Line 1446, Address: 0x1027778, Func Offset: 0x128
	// Line 1448, Address: 0x1027784, Func Offset: 0x134
	// Line 1450, Address: 0x10277a0, Func Offset: 0x150
	// Line 1455, Address: 0x10277a8, Func Offset: 0x158
	// Line 1456, Address: 0x10277b4, Func Offset: 0x164
	// Line 1459, Address: 0x10277c0, Func Offset: 0x170
	// Line 1460, Address: 0x10277c8, Func Offset: 0x178
	// Line 1461, Address: 0x10277e8, Func Offset: 0x198
	// Line 1462, Address: 0x1027804, Func Offset: 0x1b4
	// Line 1463, Address: 0x102780c, Func Offset: 0x1bc
	// Line 1464, Address: 0x102782c, Func Offset: 0x1dc
	// Line 1466, Address: 0x1027848, Func Offset: 0x1f8
	// Line 1467, Address: 0x1027850, Func Offset: 0x200
	// Line 1468, Address: 0x1027858, Func Offset: 0x208
	// Line 1469, Address: 0x1027864, Func Offset: 0x214
	// Line 1470, Address: 0x102787c, Func Offset: 0x22c
	// Line 1472, Address: 0x102788c, Func Offset: 0x23c
	// Line 1475, Address: 0x1027898, Func Offset: 0x248
	// Line 1476, Address: 0x10278a0, Func Offset: 0x250
	// Line 1477, Address: 0x10278a4, Func Offset: 0x254
	// Func End, Address: 0x10278c4, Func Offset: 0x274
}

// 
// Start address: 0x10278d0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1497, Address: 0x10278d0, Func Offset: 0
	// Line 1505, Address: 0x10278f8, Func Offset: 0x28
	// Line 1506, Address: 0x102795c, Func Offset: 0x8c
	// Line 1512, Address: 0x1027964, Func Offset: 0x94
	// Line 1513, Address: 0x102796c, Func Offset: 0x9c
	// Line 1514, Address: 0x102798c, Func Offset: 0xbc
	// Line 1515, Address: 0x10279a8, Func Offset: 0xd8
	// Line 1516, Address: 0x10279b0, Func Offset: 0xe0
	// Line 1517, Address: 0x10279d0, Func Offset: 0x100
	// Line 1520, Address: 0x10279ec, Func Offset: 0x11c
	// Line 1521, Address: 0x10279f4, Func Offset: 0x124
	// Line 1522, Address: 0x10279fc, Func Offset: 0x12c
	// Line 1523, Address: 0x1027a08, Func Offset: 0x138
	// Line 1524, Address: 0x1027a20, Func Offset: 0x150
	// Line 1525, Address: 0x1027a28, Func Offset: 0x158
	// Line 1530, Address: 0x1027a38, Func Offset: 0x168
	// Line 1533, Address: 0x1027a44, Func Offset: 0x174
	// Line 1534, Address: 0x1027a4c, Func Offset: 0x17c
	// Line 1535, Address: 0x1027a50, Func Offset: 0x180
	// Func End, Address: 0x1027a6c, Func Offset: 0x19c
}

// 
// Start address: 0x1027a70
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1549, Address: 0x1027a70, Func Offset: 0
	// Line 1556, Address: 0x1027a8c, Func Offset: 0x1c
	// Line 1557, Address: 0x1027a90, Func Offset: 0x20
	// Line 1558, Address: 0x1027a98, Func Offset: 0x28
	// Line 1559, Address: 0x1027abc, Func Offset: 0x4c
	// Line 1560, Address: 0x1027ac8, Func Offset: 0x58
	// Line 1561, Address: 0x1027ae0, Func Offset: 0x70
	// Line 1562, Address: 0x1027af4, Func Offset: 0x84
	// Line 1567, Address: 0x1027b0c, Func Offset: 0x9c
	// Func End, Address: 0x1027b24, Func Offset: 0xb4
}

// 
// Start address: 0x1027b30
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1581, Address: 0x1027b30, Func Offset: 0
	// Line 1582, Address: 0x1027b3c, Func Offset: 0xc
	// Line 1583, Address: 0x1027b68, Func Offset: 0x38
	// Line 1584, Address: 0x1027bb4, Func Offset: 0x84
	// Line 1585, Address: 0x1027be0, Func Offset: 0xb0
	// Line 1587, Address: 0x1027c2c, Func Offset: 0xfc
	// Line 1593, Address: 0x1027c38, Func Offset: 0x108
	// Line 1594, Address: 0x1027c3c, Func Offset: 0x10c
	// Func End, Address: 0x1027c48, Func Offset: 0x118
}

// 
// Start address: 0x1027c50
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1611, Address: 0x1027c50, Func Offset: 0
	// Line 1612, Address: 0x1027c6c, Func Offset: 0x1c
	// Line 1614, Address: 0x1027c88, Func Offset: 0x38
	// Func End, Address: 0x1027c98, Func Offset: 0x48
}

// 
// Start address: 0x1027ca0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1616, Address: 0x1027ca0, Func Offset: 0
	// Line 1617, Address: 0x1027cbc, Func Offset: 0x1c
	// Line 1618, Address: 0x1027cc0, Func Offset: 0x20
	// Line 1620, Address: 0x1027cdc, Func Offset: 0x3c
	// Func End, Address: 0x1027cec, Func Offset: 0x4c
}

// 
// Start address: 0x1027cf0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1622, Address: 0x1027cf0, Func Offset: 0
	// Line 1623, Address: 0x1027d04, Func Offset: 0x14
	// Line 1625, Address: 0x1027d20, Func Offset: 0x30
	// Func End, Address: 0x1027d30, Func Offset: 0x40
}

// 
// Start address: 0x1027d30
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1627, Address: 0x1027d30, Func Offset: 0
	// Line 1628, Address: 0x1027d4c, Func Offset: 0x1c
	// Line 1630, Address: 0x1027d68, Func Offset: 0x38
	// Func End, Address: 0x1027d78, Func Offset: 0x48
}

// 
// Start address: 0x1027d80
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1632, Address: 0x1027d80, Func Offset: 0
	// Line 1633, Address: 0x1027d98, Func Offset: 0x18
	// Line 1634, Address: 0x1027da8, Func Offset: 0x28
	// Line 1635, Address: 0x1027db8, Func Offset: 0x38
	// Line 1636, Address: 0x1027dc4, Func Offset: 0x44
	// Line 1638, Address: 0x1027dd0, Func Offset: 0x50
	// Line 1639, Address: 0x1027dfc, Func Offset: 0x7c
	// Line 1642, Address: 0x1027e28, Func Offset: 0xa8
	// Func End, Address: 0x1027e34, Func Offset: 0xb4
}

// 
// Start address: 0x1027e40
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1658, Address: 0x1027e40, Func Offset: 0
	// Line 1663, Address: 0x1027e58, Func Offset: 0x18
	// Line 1664, Address: 0x1027e64, Func Offset: 0x24
	// Line 1665, Address: 0x1027e70, Func Offset: 0x30
	// Line 1666, Address: 0x1027e78, Func Offset: 0x38
	// Line 1667, Address: 0x1027e7c, Func Offset: 0x3c
	// Line 1671, Address: 0x1027e94, Func Offset: 0x54
	// Line 1672, Address: 0x1027e9c, Func Offset: 0x5c
	// Line 1673, Address: 0x1027ea0, Func Offset: 0x60
	// Line 1675, Address: 0x1027eb0, Func Offset: 0x70
	// Func End, Address: 0x1027ed0, Func Offset: 0x90
}

// 
// Start address: 0x1027ed0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1678, Address: 0x1027ed0, Func Offset: 0
	// Line 1679, Address: 0x1027ee8, Func Offset: 0x18
	// Line 1680, Address: 0x1027f08, Func Offset: 0x38
	// Func End, Address: 0x1027f18, Func Offset: 0x48
}

// 
// Start address: 0x1027f20
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1685, Address: 0x1027f20, Func Offset: 0
	// Line 1689, Address: 0x1027f40, Func Offset: 0x20
	// Line 1692, Address: 0x1027f5c, Func Offset: 0x3c
	// Line 1696, Address: 0x1027f84, Func Offset: 0x64
	// Line 1697, Address: 0x1027f90, Func Offset: 0x70
	// Line 1699, Address: 0x1027fb8, Func Offset: 0x98
	// Func End, Address: 0x1027fc8, Func Offset: 0xa8
}

// 
// Start address: 0x1027fd0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	// Line 1705, Address: 0x1027fd0, Func Offset: 0
	// Line 1710, Address: 0x1027fec, Func Offset: 0x1c
	// Line 1711, Address: 0x1027ff4, Func Offset: 0x24
	// Line 1714, Address: 0x1027ffc, Func Offset: 0x2c
	// Line 1715, Address: 0x1028000, Func Offset: 0x30
	// Line 1716, Address: 0x102800c, Func Offset: 0x3c
	// Line 1717, Address: 0x1028018, Func Offset: 0x48
	// Line 1718, Address: 0x102802c, Func Offset: 0x5c
	// Line 1719, Address: 0x102804c, Func Offset: 0x7c
	// Line 1720, Address: 0x1028054, Func Offset: 0x84
	// Line 1721, Address: 0x1028078, Func Offset: 0xa8
	// Func End, Address: 0x1028094, Func Offset: 0xc4
}

// 
// Start address: 0x10280a0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1743, Address: 0x10280a0, Func Offset: 0
	// Line 1748, Address: 0x10280c8, Func Offset: 0x28
	// Line 1749, Address: 0x10280d8, Func Offset: 0x38
	// Line 1751, Address: 0x10280f4, Func Offset: 0x54
	// Line 1752, Address: 0x1028118, Func Offset: 0x78
	// Line 1753, Address: 0x1028140, Func Offset: 0xa0
	// Line 1754, Address: 0x102814c, Func Offset: 0xac
	// Line 1755, Address: 0x1028154, Func Offset: 0xb4
	// Line 1758, Address: 0x1028170, Func Offset: 0xd0
	// Line 1762, Address: 0x1028198, Func Offset: 0xf8
	// Line 1765, Address: 0x10281a0, Func Offset: 0x100
	// Line 1766, Address: 0x10281a4, Func Offset: 0x104
	// Line 1770, Address: 0x10281c0, Func Offset: 0x120
	// Line 1777, Address: 0x10281e8, Func Offset: 0x148
	// Func End, Address: 0x1028204, Func Offset: 0x164
}

// 
// Start address: 0x1028210
void mapinit()
{
	// Line 1781, Address: 0x1028210, Func Offset: 0
	// Line 1783, Address: 0x1028218, Func Offset: 0x8
	// Line 1784, Address: 0x102822c, Func Offset: 0x1c
	// Line 1787, Address: 0x1028240, Func Offset: 0x30
	// Line 1788, Address: 0x1028260, Func Offset: 0x50
	// Func End, Address: 0x1028270, Func Offset: 0x60
}

// 
// Start address: 0x1028270
void mapset()
{
	// Line 1799, Address: 0x1028270, Func Offset: 0
	// Func End, Address: 0x1028278, Func Offset: 0x8
}

