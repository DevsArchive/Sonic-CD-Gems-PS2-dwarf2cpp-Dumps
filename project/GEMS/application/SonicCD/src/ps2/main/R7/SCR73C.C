typedef struct _anon0;
typedef union _anon1;
typedef struct _anon2;
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

typedef int(*type_5)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned short type_2[6];
typedef int type_3[10];
typedef unsigned char type_4[65];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef int type_12[39];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef _anon1* type_15[8];
typedef short type_16[256];
typedef unsigned short type_17[2];
typedef _anon2 type_18[128];
typedef unsigned char type_19[4];
typedef _anon1* type_20[8];

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
_anon1* vblockwrtbtbl[8];
_anon1* mapwrt_tbl[8];
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
_anon1 scra_v_posit;
_anon1 scra_h_posit;
_anon2 actwk[128];
unsigned char plflag;
_anon1 scrb_h_posit;
_anon1 scrz_h_posit;
_anon1 scrc_h_posit;
_anon1 scrz_v_posit;
_anon1 scrc_v_posit;
_anon1 scrb_v_posit;
short hscrollwork[256];
_anon11 scrflagc;
_anon11 scrflagz;
_anon11 scrflagb;
_anon1 vscroll;
short scra_hz;
_anon11 scrflaga;
_anon6 scroll_start;
_anon1* lphscrollbuff;
short scra_vz;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon11 scrflagaw;
unsigned char mapwka[64][8];
_anon1 scra_v_posiw;
_anon1 scra_h_posiw;
_anon11 scrflagbw;
_anon1 scrb_v_posiw;
_anon1 scrb_h_posiw;
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
void scrv_up_ch(_anon1 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon1 lD1);
void scrv_move(_anon1 lD1);
void scrollb_hv(_anon1 lD4, _anon1 lD5);
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
// Start address: 0x1021eb0
void enecginit()
{
	// Line 124, Address: 0x1021eb0, Func Offset: 0
	// Func End, Address: 0x1021eb8, Func Offset: 0x8
}

// 
// Start address: 0x1021ec0
void divdevset()
{
	// Line 128, Address: 0x1021ec0, Func Offset: 0
	// Func End, Address: 0x1021ec8, Func Offset: 0x8
}

// 
// Start address: 0x1021ed0
void scr_set()
{
	int i;
	// Line 177, Address: 0x1021ed0, Func Offset: 0
	// Line 180, Address: 0x1021edc, Func Offset: 0xc
	// Line 182, Address: 0x1021f24, Func Offset: 0x54
	// Line 183, Address: 0x1021f28, Func Offset: 0x58
	// Line 184, Address: 0x1021f4c, Func Offset: 0x7c
	// Line 185, Address: 0x1021f68, Func Offset: 0x98
	// Line 186, Address: 0x1021f8c, Func Offset: 0xbc
	// Line 187, Address: 0x1021fa8, Func Offset: 0xd8
	// Line 188, Address: 0x1021fcc, Func Offset: 0xfc
	// Line 189, Address: 0x1021fe8, Func Offset: 0x118
	// Line 190, Address: 0x102200c, Func Offset: 0x13c
	// Line 191, Address: 0x1022028, Func Offset: 0x158
	// Line 193, Address: 0x102204c, Func Offset: 0x17c
	// Line 194, Address: 0x1022070, Func Offset: 0x1a0
	// Line 195, Address: 0x102207c, Func Offset: 0x1ac
	// Line 197, Address: 0x1022088, Func Offset: 0x1b8
	// Line 198, Address: 0x10220ac, Func Offset: 0x1dc
	// Line 200, Address: 0x10220b8, Func Offset: 0x1e8
	// Line 201, Address: 0x10220c0, Func Offset: 0x1f0
	// Func End, Address: 0x10220d4, Func Offset: 0x204
}

// 
// Start address: 0x10220e0
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 205, Address: 0x10220e0, Func Offset: 0
	// Line 206, Address: 0x10220f4, Func Offset: 0x14
	// Line 210, Address: 0x1022110, Func Offset: 0x30
	// Line 218, Address: 0x102213c, Func Offset: 0x5c
	// Line 220, Address: 0x1022150, Func Offset: 0x70
	// Line 221, Address: 0x1022158, Func Offset: 0x78
	// Line 222, Address: 0x1022168, Func Offset: 0x88
	// Line 223, Address: 0x1022178, Func Offset: 0x98
	// Line 224, Address: 0x102218c, Func Offset: 0xac
	// Line 228, Address: 0x1022194, Func Offset: 0xb4
	// Line 229, Address: 0x1022198, Func Offset: 0xb8
	// Line 230, Address: 0x10221bc, Func Offset: 0xdc
	// Line 233, Address: 0x10221e0, Func Offset: 0x100
	// Line 234, Address: 0x10221f4, Func Offset: 0x114
	// Line 235, Address: 0x1022200, Func Offset: 0x120
	// Line 237, Address: 0x1022208, Func Offset: 0x128
	// Line 241, Address: 0x102220c, Func Offset: 0x12c
	// Line 242, Address: 0x1022230, Func Offset: 0x150
	// Line 244, Address: 0x1022240, Func Offset: 0x160
	// Line 246, Address: 0x1022248, Func Offset: 0x168
	// Line 247, Address: 0x102225c, Func Offset: 0x17c
	// Line 248, Address: 0x1022268, Func Offset: 0x188
	// Line 250, Address: 0x1022270, Func Offset: 0x190
	// Line 253, Address: 0x1022274, Func Offset: 0x194
	// Line 254, Address: 0x1022298, Func Offset: 0x1b8
	// Line 257, Address: 0x10222a8, Func Offset: 0x1c8
	// Line 259, Address: 0x10222b0, Func Offset: 0x1d0
	// Line 261, Address: 0x10222c0, Func Offset: 0x1e0
	// Line 262, Address: 0x10222c4, Func Offset: 0x1e4
	// Line 263, Address: 0x10222dc, Func Offset: 0x1fc
	// Line 264, Address: 0x10222f4, Func Offset: 0x214
	// Line 265, Address: 0x102230c, Func Offset: 0x22c
	// Line 268, Address: 0x1022324, Func Offset: 0x244
	// Func End, Address: 0x1022340, Func Offset: 0x260
}

// 
// Start address: 0x1022340
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 272, Address: 0x1022340, Func Offset: 0
	// Line 276, Address: 0x102234c, Func Offset: 0xc
	// Line 277, Address: 0x1022350, Func Offset: 0x10
	// Line 278, Address: 0x1022358, Func Offset: 0x18
	// Line 279, Address: 0x1022368, Func Offset: 0x28
	// Line 280, Address: 0x1022374, Func Offset: 0x34
	// Line 282, Address: 0x1022380, Func Offset: 0x40
	// Line 283, Address: 0x10223b8, Func Offset: 0x78
	// Line 284, Address: 0x10223dc, Func Offset: 0x9c
	// Line 285, Address: 0x1022408, Func Offset: 0xc8
	// Func End, Address: 0x1022414, Func Offset: 0xd4
}

// 
// Start address: 0x1022420
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 289, Address: 0x1022420, Func Offset: 0
	// Line 294, Address: 0x1022430, Func Offset: 0x10
	// Line 297, Address: 0x1022440, Func Offset: 0x20
	// Line 298, Address: 0x102246c, Func Offset: 0x4c
	// Line 299, Address: 0x1022474, Func Offset: 0x54
	// Line 300, Address: 0x102247c, Func Offset: 0x5c
	// Line 302, Address: 0x1022484, Func Offset: 0x64
	// Line 303, Address: 0x1022494, Func Offset: 0x74
	// Line 307, Address: 0x10224a4, Func Offset: 0x84
	// Line 308, Address: 0x10224c4, Func Offset: 0xa4
	// Line 309, Address: 0x10224fc, Func Offset: 0xdc
	// Line 311, Address: 0x1022534, Func Offset: 0x114
	// Line 312, Address: 0x1022538, Func Offset: 0x118
	// Line 314, Address: 0x1022544, Func Offset: 0x124
	// Line 316, Address: 0x1022550, Func Offset: 0x130
	// Line 317, Address: 0x1022560, Func Offset: 0x140
	// Line 318, Address: 0x1022570, Func Offset: 0x150
	// Line 319, Address: 0x1022580, Func Offset: 0x160
	// Line 320, Address: 0x10225b4, Func Offset: 0x194
	// Line 321, Address: 0x10225bc, Func Offset: 0x19c
	// Line 323, Address: 0x10225c4, Func Offset: 0x1a4
	// Line 326, Address: 0x10225c8, Func Offset: 0x1a8
	// Line 328, Address: 0x10225d8, Func Offset: 0x1b8
	// Line 330, Address: 0x10225e4, Func Offset: 0x1c4
	// Line 331, Address: 0x1022614, Func Offset: 0x1f4
	// Line 332, Address: 0x1022618, Func Offset: 0x1f8
	// Line 334, Address: 0x1022628, Func Offset: 0x208
	// Line 336, Address: 0x1022638, Func Offset: 0x218
	// Line 338, Address: 0x1022644, Func Offset: 0x224
	// Line 339, Address: 0x1022674, Func Offset: 0x254
	// Line 340, Address: 0x1022678, Func Offset: 0x258
	// Line 346, Address: 0x1022688, Func Offset: 0x268
	// Line 347, Address: 0x1022694, Func Offset: 0x274
	// Line 348, Address: 0x10226a0, Func Offset: 0x280
	// Line 349, Address: 0x10226ac, Func Offset: 0x28c
	// Line 350, Address: 0x10226e0, Func Offset: 0x2c0
	// Func End, Address: 0x10226f8, Func Offset: 0x2d8
}

// 
// Start address: 0x1022700
int z71aline(int hsCount)
{
	int temp;
	_anon1 data;
	int i;
	int j;
	int z71ascrtbl[39];
	// Line 354, Address: 0x1022700, Func Offset: 0
	// Line 358, Address: 0x1022714, Func Offset: 0x14
	// Line 366, Address: 0x1022740, Func Offset: 0x40
	// Line 367, Address: 0x1022768, Func Offset: 0x68
	// Line 368, Address: 0x102276c, Func Offset: 0x6c
	// Line 369, Address: 0x1022784, Func Offset: 0x84
	// Line 370, Address: 0x1022788, Func Offset: 0x88
	// Line 371, Address: 0x102278c, Func Offset: 0x8c
	// Line 372, Address: 0x1022798, Func Offset: 0x98
	// Line 373, Address: 0x10227a4, Func Offset: 0xa4
	// Line 376, Address: 0x10227b0, Func Offset: 0xb0
	// Line 379, Address: 0x10227bc, Func Offset: 0xbc
	// Line 380, Address: 0x10227c8, Func Offset: 0xc8
	// Line 381, Address: 0x10227f8, Func Offset: 0xf8
	// Line 382, Address: 0x102281c, Func Offset: 0x11c
	// Line 383, Address: 0x1022840, Func Offset: 0x140
	// Line 384, Address: 0x102284c, Func Offset: 0x14c
	// Line 385, Address: 0x1022870, Func Offset: 0x170
	// Line 386, Address: 0x1022880, Func Offset: 0x180
	// Line 387, Address: 0x102288c, Func Offset: 0x18c
	// Line 388, Address: 0x1022890, Func Offset: 0x190
	// Func End, Address: 0x10228a8, Func Offset: 0x1a8
}

// 
// Start address: 0x10228b0
int z71aline0(int hsCount)
{
	int temp;
	_anon1 data;
	int i;
	int j;
	int z71ascrtbl0[10];
	// Line 391, Address: 0x10228b0, Func Offset: 0
	// Line 395, Address: 0x10228c4, Func Offset: 0x14
	// Line 401, Address: 0x10228f8, Func Offset: 0x48
	// Line 402, Address: 0x102291c, Func Offset: 0x6c
	// Line 403, Address: 0x1022920, Func Offset: 0x70
	// Line 404, Address: 0x1022938, Func Offset: 0x88
	// Line 405, Address: 0x102293c, Func Offset: 0x8c
	// Line 406, Address: 0x1022940, Func Offset: 0x90
	// Line 407, Address: 0x102294c, Func Offset: 0x9c
	// Line 408, Address: 0x1022970, Func Offset: 0xc0
	// Line 409, Address: 0x102297c, Func Offset: 0xcc
	// Line 410, Address: 0x10229a0, Func Offset: 0xf0
	// Line 413, Address: 0x10229ac, Func Offset: 0xfc
	// Line 416, Address: 0x10229b8, Func Offset: 0x108
	// Line 417, Address: 0x10229e8, Func Offset: 0x138
	// Line 418, Address: 0x10229f4, Func Offset: 0x144
	// Line 419, Address: 0x1022a18, Func Offset: 0x168
	// Line 420, Address: 0x1022a3c, Func Offset: 0x18c
	// Line 421, Address: 0x1022a48, Func Offset: 0x198
	// Line 422, Address: 0x1022a6c, Func Offset: 0x1bc
	// Line 423, Address: 0x1022a7c, Func Offset: 0x1cc
	// Line 424, Address: 0x1022a80, Func Offset: 0x1d0
	// Func End, Address: 0x1022a98, Func Offset: 0x1e8
}

// 
// Start address: 0x1022aa0
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon1* pHScrollBuff;
	_anon1 hsw;
	int i;
	int j;
	// Line 429, Address: 0x1022aa0, Func Offset: 0
	// Line 437, Address: 0x1022ab8, Func Offset: 0x18
	// Line 446, Address: 0x1022ac0, Func Offset: 0x20
	// Line 447, Address: 0x1022acc, Func Offset: 0x2c
	// Line 448, Address: 0x1022ad0, Func Offset: 0x30
	// Line 450, Address: 0x1022af8, Func Offset: 0x58
	// Line 451, Address: 0x1022b04, Func Offset: 0x64
	// Line 453, Address: 0x1022b0c, Func Offset: 0x6c
	// Line 454, Address: 0x1022b14, Func Offset: 0x74
	// Line 455, Address: 0x1022b18, Func Offset: 0x78
	// Line 456, Address: 0x1022b1c, Func Offset: 0x7c
	// Line 457, Address: 0x1022b28, Func Offset: 0x88
	// Line 459, Address: 0x1022b34, Func Offset: 0x94
	// Line 460, Address: 0x1022b5c, Func Offset: 0xbc
	// Line 462, Address: 0x1022b68, Func Offset: 0xc8
	// Line 463, Address: 0x1022b70, Func Offset: 0xd0
	// Line 464, Address: 0x1022b74, Func Offset: 0xd4
	// Line 465, Address: 0x1022b84, Func Offset: 0xe4
	// Line 466, Address: 0x1022b94, Func Offset: 0xf4
	// Func End, Address: 0x1022bac, Func Offset: 0x10c
}

// 
// Start address: 0x1022bb0
void scroll_h()
{
	unsigned short wD4;
	// Line 478, Address: 0x1022bb0, Func Offset: 0
	// Line 481, Address: 0x1022bbc, Func Offset: 0xc
	// Line 482, Address: 0x1022bc8, Func Offset: 0x18
	// Line 483, Address: 0x1022bd0, Func Offset: 0x20
	// Line 484, Address: 0x1022c04, Func Offset: 0x54
	// Line 485, Address: 0x1022c18, Func Offset: 0x68
	// Line 486, Address: 0x1022c44, Func Offset: 0x94
	// Line 487, Address: 0x1022c58, Func Offset: 0xa8
	// Line 490, Address: 0x1022c60, Func Offset: 0xb0
	// Line 495, Address: 0x1022c74, Func Offset: 0xc4
	// Func End, Address: 0x1022c88, Func Offset: 0xd8
}

// 
// Start address: 0x1022c90
void scrh_move()
{
	unsigned short wD0;
	// Line 497, Address: 0x1022c90, Func Offset: 0
	// Line 500, Address: 0x1022c9c, Func Offset: 0xc
	// Line 501, Address: 0x1022ca8, Func Offset: 0x18
	// Line 502, Address: 0x1022cbc, Func Offset: 0x2c
	// Line 503, Address: 0x1022cd0, Func Offset: 0x40
	// Line 505, Address: 0x1022cdc, Func Offset: 0x4c
	// Line 506, Address: 0x1022ce4, Func Offset: 0x54
	// Line 507, Address: 0x1022cec, Func Offset: 0x5c
	// Line 508, Address: 0x1022d04, Func Offset: 0x74
	// Line 509, Address: 0x1022d10, Func Offset: 0x80
	// Line 511, Address: 0x1022d18, Func Offset: 0x88
	// Line 514, Address: 0x1022d24, Func Offset: 0x94
	// Func End, Address: 0x1022d38, Func Offset: 0xa8
}

// 
// Start address: 0x1022d40
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 517, Address: 0x1022d40, Func Offset: 0
	// Line 520, Address: 0x1022d4c, Func Offset: 0xc
	// Line 521, Address: 0x1022d6c, Func Offset: 0x2c
	// Line 524, Address: 0x1022d74, Func Offset: 0x34
	// Line 525, Address: 0x1022d8c, Func Offset: 0x4c
	// Line 526, Address: 0x1022dbc, Func Offset: 0x7c
	// Line 529, Address: 0x1022dc8, Func Offset: 0x88
	// Line 530, Address: 0x1022dd0, Func Offset: 0x90
	// Line 531, Address: 0x1022de4, Func Offset: 0xa4
	// Line 532, Address: 0x1022e14, Func Offset: 0xd4
	// Line 533, Address: 0x1022e20, Func Offset: 0xe0
	// Line 535, Address: 0x1022e28, Func Offset: 0xe8
	// Func End, Address: 0x1022e38, Func Offset: 0xf8
}

// 
// Start address: 0x1022e40
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 538, Address: 0x1022e40, Func Offset: 0
	// Line 541, Address: 0x1022e4c, Func Offset: 0xc
	// Line 542, Address: 0x1022e6c, Func Offset: 0x2c
	// Line 545, Address: 0x1022e74, Func Offset: 0x34
	// Line 546, Address: 0x1022e8c, Func Offset: 0x4c
	// Line 547, Address: 0x1022ebc, Func Offset: 0x7c
	// Line 550, Address: 0x1022ec8, Func Offset: 0x88
	// Line 551, Address: 0x1022ed0, Func Offset: 0x90
	// Line 552, Address: 0x1022ee4, Func Offset: 0xa4
	// Line 553, Address: 0x1022f14, Func Offset: 0xd4
	// Line 554, Address: 0x1022f20, Func Offset: 0xe0
	// Line 556, Address: 0x1022f28, Func Offset: 0xe8
	// Func End, Address: 0x1022f38, Func Offset: 0xf8
}

// 
// Start address: 0x1022f40
void scroll_v()
{
	unsigned short wD0;
	// Line 575, Address: 0x1022f40, Func Offset: 0
	// Line 578, Address: 0x1022f4c, Func Offset: 0xc
	// Line 579, Address: 0x1022f78, Func Offset: 0x38
	// Line 580, Address: 0x1022f90, Func Offset: 0x50
	// Line 583, Address: 0x1022f98, Func Offset: 0x58
	// Line 584, Address: 0x1022fb0, Func Offset: 0x70
	// Line 585, Address: 0x1022fb8, Func Offset: 0x78
	// Line 586, Address: 0x1022fd8, Func Offset: 0x98
	// Line 587, Address: 0x1022fec, Func Offset: 0xac
	// Line 588, Address: 0x1022ff8, Func Offset: 0xb8
	// Line 590, Address: 0x1023000, Func Offset: 0xc0
	// Line 591, Address: 0x1023014, Func Offset: 0xd4
	// Line 592, Address: 0x1023024, Func Offset: 0xe4
	// Line 593, Address: 0x102302c, Func Offset: 0xec
	// Line 594, Address: 0x1023038, Func Offset: 0xf8
	// Line 596, Address: 0x1023040, Func Offset: 0x100
	// Line 597, Address: 0x1023048, Func Offset: 0x108
	// Line 598, Address: 0x102305c, Func Offset: 0x11c
	// Line 599, Address: 0x1023064, Func Offset: 0x124
	// Line 605, Address: 0x102306c, Func Offset: 0x12c
	// Line 606, Address: 0x1023080, Func Offset: 0x140
	// Line 607, Address: 0x1023088, Func Offset: 0x148
	// Line 608, Address: 0x1023094, Func Offset: 0x154
	// Line 610, Address: 0x102309c, Func Offset: 0x15c
	// Line 611, Address: 0x10230b0, Func Offset: 0x170
	// Line 612, Address: 0x10230b8, Func Offset: 0x178
	// Line 617, Address: 0x10230c0, Func Offset: 0x180
	// Line 619, Address: 0x10230c8, Func Offset: 0x188
	// Func End, Address: 0x10230dc, Func Offset: 0x19c
}

// 
// Start address: 0x10230e0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 625, Address: 0x10230e0, Func Offset: 0
	// Line 628, Address: 0x10230f0, Func Offset: 0x10
	// Line 629, Address: 0x102310c, Func Offset: 0x2c
	// Line 630, Address: 0x1023118, Func Offset: 0x38
	// Line 633, Address: 0x1023120, Func Offset: 0x40
	// Line 634, Address: 0x102312c, Func Offset: 0x4c
	// Line 635, Address: 0x1023144, Func Offset: 0x64
	// Line 638, Address: 0x1023160, Func Offset: 0x80
	// Line 639, Address: 0x1023170, Func Offset: 0x90
	// Line 640, Address: 0x102317c, Func Offset: 0x9c
	// Line 642, Address: 0x1023184, Func Offset: 0xa4
	// Line 643, Address: 0x10231a4, Func Offset: 0xc4
	// Line 644, Address: 0x10231b0, Func Offset: 0xd0
	// Line 645, Address: 0x10231b8, Func Offset: 0xd8
	// Line 646, Address: 0x10231d8, Func Offset: 0xf8
	// Line 647, Address: 0x10231e4, Func Offset: 0x104
	// Line 649, Address: 0x10231ec, Func Offset: 0x10c
	// Line 653, Address: 0x10231f8, Func Offset: 0x118
	// Func End, Address: 0x102320c, Func Offset: 0x12c
}

// 
// Start address: 0x1023210
void sv_move_main1(unsigned short wD0)
{
	// Line 657, Address: 0x1023210, Func Offset: 0
	// Line 659, Address: 0x102321c, Func Offset: 0xc
	// Line 660, Address: 0x102323c, Func Offset: 0x2c
	// Line 661, Address: 0x1023248, Func Offset: 0x38
	// Line 662, Address: 0x1023250, Func Offset: 0x40
	// Line 663, Address: 0x1023270, Func Offset: 0x60
	// Line 664, Address: 0x102327c, Func Offset: 0x6c
	// Line 666, Address: 0x1023284, Func Offset: 0x74
	// Line 669, Address: 0x1023290, Func Offset: 0x80
	// Func End, Address: 0x10232a0, Func Offset: 0x90
}

// 
// Start address: 0x10232a0
void sv_move_main2(unsigned short wD0)
{
	// Line 672, Address: 0x10232a0, Func Offset: 0
	// Line 674, Address: 0x10232ac, Func Offset: 0xc
	// Line 675, Address: 0x10232cc, Func Offset: 0x2c
	// Line 676, Address: 0x10232d8, Func Offset: 0x38
	// Line 677, Address: 0x10232e0, Func Offset: 0x40
	// Line 678, Address: 0x1023300, Func Offset: 0x60
	// Line 679, Address: 0x102330c, Func Offset: 0x6c
	// Line 681, Address: 0x1023314, Func Offset: 0x74
	// Line 684, Address: 0x1023320, Func Offset: 0x80
	// Func End, Address: 0x1023330, Func Offset: 0x90
}

// 
// Start address: 0x1023330
void sv_move_sub2()
{
	// Line 687, Address: 0x1023330, Func Offset: 0
	// Line 688, Address: 0x1023338, Func Offset: 0x8
	// Line 689, Address: 0x1023340, Func Offset: 0x10
	// Line 690, Address: 0x102334c, Func Offset: 0x1c
	// Func End, Address: 0x102335c, Func Offset: 0x2c
}

// 
// Start address: 0x1023360
void sv_move_sub(unsigned short wD0)
{
	_anon1 lD1;
	// Line 693, Address: 0x1023360, Func Offset: 0
	// Line 696, Address: 0x102336c, Func Offset: 0xc
	// Line 697, Address: 0x1023370, Func Offset: 0x10
	// Line 698, Address: 0x1023378, Func Offset: 0x18
	// Line 699, Address: 0x1023394, Func Offset: 0x34
	// Line 700, Address: 0x10233b0, Func Offset: 0x50
	// Line 701, Address: 0x10233bc, Func Offset: 0x5c
	// Line 703, Address: 0x10233c4, Func Offset: 0x64
	// Line 706, Address: 0x10233d0, Func Offset: 0x70
	// Func End, Address: 0x10233e0, Func Offset: 0x80
}

// 
// Start address: 0x10233e0
void sv_move_minus(unsigned short wD1)
{
	_anon1 lD1;
	unsigned short wk;
	// Line 711, Address: 0x10233e0, Func Offset: 0
	// Line 715, Address: 0x10233f0, Func Offset: 0x10
	// Line 716, Address: 0x102340c, Func Offset: 0x2c
	// Line 717, Address: 0x1023418, Func Offset: 0x38
	// Line 719, Address: 0x102342c, Func Offset: 0x4c
	// Line 720, Address: 0x1023434, Func Offset: 0x54
	// Line 721, Address: 0x102343c, Func Offset: 0x5c
	// Line 722, Address: 0x1023440, Func Offset: 0x60
	// Line 723, Address: 0x102344c, Func Offset: 0x6c
	// Func End, Address: 0x1023460, Func Offset: 0x80
}

// 
// Start address: 0x1023460
void scrv_up_ch(_anon1 lD1)
{
	// Line 727, Address: 0x1023460, Func Offset: 0
	// Line 728, Address: 0x102346c, Func Offset: 0xc
	// Line 729, Address: 0x1023494, Func Offset: 0x34
	// Line 730, Address: 0x10234ac, Func Offset: 0x4c
	// Line 731, Address: 0x10234b8, Func Offset: 0x58
	// Line 732, Address: 0x10234cc, Func Offset: 0x6c
	// Line 733, Address: 0x10234e0, Func Offset: 0x80
	// Line 734, Address: 0x10234f4, Func Offset: 0x94
	// Line 737, Address: 0x10234fc, Func Offset: 0x9c
	// Line 740, Address: 0x1023508, Func Offset: 0xa8
	// Line 742, Address: 0x1023514, Func Offset: 0xb4
	// Func End, Address: 0x1023524, Func Offset: 0xc4
}

// 
// Start address: 0x1023530
void sv_move_plus(unsigned short wD1)
{
	_anon1 lD1;
	unsigned short wk;
	// Line 748, Address: 0x1023530, Func Offset: 0
	// Line 752, Address: 0x1023540, Func Offset: 0x10
	// Line 753, Address: 0x1023544, Func Offset: 0x14
	// Line 754, Address: 0x102354c, Func Offset: 0x1c
	// Line 755, Address: 0x1023558, Func Offset: 0x28
	// Line 757, Address: 0x102356c, Func Offset: 0x3c
	// Line 758, Address: 0x1023574, Func Offset: 0x44
	// Line 759, Address: 0x102357c, Func Offset: 0x4c
	// Line 761, Address: 0x1023580, Func Offset: 0x50
	// Line 763, Address: 0x102358c, Func Offset: 0x5c
	// Func End, Address: 0x10235a0, Func Offset: 0x70
}

// 
// Start address: 0x10235a0
void scrv_down_ch(_anon1 lD1)
{
	// Line 767, Address: 0x10235a0, Func Offset: 0
	// Line 768, Address: 0x10235ac, Func Offset: 0xc
	// Line 769, Address: 0x10235d4, Func Offset: 0x34
	// Line 770, Address: 0x10235e0, Func Offset: 0x40
	// Line 771, Address: 0x10235f4, Func Offset: 0x54
	// Line 772, Address: 0x1023608, Func Offset: 0x68
	// Line 773, Address: 0x102361c, Func Offset: 0x7c
	// Line 774, Address: 0x1023630, Func Offset: 0x90
	// Line 776, Address: 0x1023638, Func Offset: 0x98
	// Line 779, Address: 0x1023644, Func Offset: 0xa4
	// Line 781, Address: 0x1023650, Func Offset: 0xb0
	// Func End, Address: 0x1023660, Func Offset: 0xc0
}

// 
// Start address: 0x1023660
void scrv_move(_anon1 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 784, Address: 0x1023660, Func Offset: 0
	// Line 787, Address: 0x1023670, Func Offset: 0x10
	// Line 789, Address: 0x102367c, Func Offset: 0x1c
	// Line 790, Address: 0x1023684, Func Offset: 0x24
	// Line 791, Address: 0x102368c, Func Offset: 0x2c
	// Line 793, Address: 0x1023690, Func Offset: 0x30
	// Line 794, Address: 0x10236b8, Func Offset: 0x58
	// Line 797, Address: 0x10236c4, Func Offset: 0x64
	// Line 798, Address: 0x10236f8, Func Offset: 0x98
	// Line 799, Address: 0x102370c, Func Offset: 0xac
	// Line 801, Address: 0x1023738, Func Offset: 0xd8
	// Line 802, Address: 0x102374c, Func Offset: 0xec
	// Line 804, Address: 0x1023754, Func Offset: 0xf4
	// Line 809, Address: 0x1023768, Func Offset: 0x108
	// Func End, Address: 0x102377c, Func Offset: 0x11c
}

// 
// Start address: 0x1023780
void scrollb_hv(_anon1 lD4, _anon1 lD5)
{
	_anon1 lD0;
	_anon1 lD2;
	_anon1 lD3;
	// Line 813, Address: 0x1023780, Func Offset: 0
	// Line 816, Address: 0x102378c, Func Offset: 0xc
	// Line 817, Address: 0x102379c, Func Offset: 0x1c
	// Line 818, Address: 0x10237ac, Func Offset: 0x2c
	// Line 820, Address: 0x10237b8, Func Offset: 0x38
	// Line 822, Address: 0x10237ec, Func Offset: 0x6c
	// Line 823, Address: 0x1023800, Func Offset: 0x80
	// Line 824, Address: 0x1023810, Func Offset: 0x90
	// Line 825, Address: 0x1023824, Func Offset: 0xa4
	// Line 826, Address: 0x1023838, Func Offset: 0xb8
	// Line 829, Address: 0x1023840, Func Offset: 0xc0
	// Line 834, Address: 0x1023854, Func Offset: 0xd4
	// Line 835, Address: 0x1023864, Func Offset: 0xe4
	// Line 836, Address: 0x1023874, Func Offset: 0xf4
	// Line 837, Address: 0x102388c, Func Offset: 0x10c
	// Line 839, Address: 0x1023898, Func Offset: 0x118
	// Line 841, Address: 0x10238cc, Func Offset: 0x14c
	// Line 842, Address: 0x10238e0, Func Offset: 0x160
	// Line 843, Address: 0x10238f0, Func Offset: 0x170
	// Line 844, Address: 0x1023904, Func Offset: 0x184
	// Line 845, Address: 0x1023918, Func Offset: 0x198
	// Line 848, Address: 0x1023920, Func Offset: 0x1a0
	// Line 853, Address: 0x1023934, Func Offset: 0x1b4
	// Func End, Address: 0x1023940, Func Offset: 0x1c0
}

// 
// Start address: 0x1023940
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 860, Address: 0x1023940, Func Offset: 0
	// Line 863, Address: 0x102394c, Func Offset: 0xc
	// Line 864, Address: 0x1023958, Func Offset: 0x18
	// Line 866, Address: 0x1023964, Func Offset: 0x24
	// Line 867, Address: 0x1023990, Func Offset: 0x50
	// Line 868, Address: 0x10239a4, Func Offset: 0x64
	// Line 869, Address: 0x10239d4, Func Offset: 0x94
	// Line 870, Address: 0x10239e8, Func Offset: 0xa8
	// Line 873, Address: 0x10239f0, Func Offset: 0xb0
	// Line 878, Address: 0x1023a04, Func Offset: 0xc4
	// Func End, Address: 0x1023a14, Func Offset: 0xd4
}

// 
// Start address: 0x1023a20
void scrollb_h(int lD4, int flagb)
{
	_anon1 lD0;
	_anon1 lD1;
	_anon1 lD2;
	unsigned char bD3;
	// Line 882, Address: 0x1023a20, Func Offset: 0
	// Line 886, Address: 0x1023a30, Func Offset: 0x10
	// Line 887, Address: 0x1023a3c, Func Offset: 0x1c
	// Line 888, Address: 0x1023a4c, Func Offset: 0x2c
	// Line 890, Address: 0x1023a58, Func Offset: 0x38
	// Line 891, Address: 0x1023a60, Func Offset: 0x40
	// Line 892, Address: 0x1023a68, Func Offset: 0x48
	// Line 894, Address: 0x1023a74, Func Offset: 0x54
	// Line 895, Address: 0x1023a80, Func Offset: 0x60
	// Line 896, Address: 0x1023a94, Func Offset: 0x74
	// Line 897, Address: 0x1023aa0, Func Offset: 0x80
	// Line 898, Address: 0x1023ab4, Func Offset: 0x94
	// Line 899, Address: 0x1023ac4, Func Offset: 0xa4
	// Line 900, Address: 0x1023ad8, Func Offset: 0xb8
	// Line 901, Address: 0x1023af4, Func Offset: 0xd4
	// Line 904, Address: 0x1023afc, Func Offset: 0xdc
	// Line 909, Address: 0x1023b1c, Func Offset: 0xfc
	// Func End, Address: 0x1023b2c, Func Offset: 0x10c
}

// 
// Start address: 0x1023b30
void scrollc_h(int lD4, int flagc)
{
	_anon1 lD0;
	_anon1 lD1;
	_anon1 lD2;
	unsigned char bD3;
	// Line 912, Address: 0x1023b30, Func Offset: 0
	// Line 916, Address: 0x1023b40, Func Offset: 0x10
	// Line 917, Address: 0x1023b4c, Func Offset: 0x1c
	// Line 918, Address: 0x1023b5c, Func Offset: 0x2c
	// Line 920, Address: 0x1023b68, Func Offset: 0x38
	// Line 921, Address: 0x1023b70, Func Offset: 0x40
	// Line 922, Address: 0x1023b78, Func Offset: 0x48
	// Line 924, Address: 0x1023b84, Func Offset: 0x54
	// Line 925, Address: 0x1023b90, Func Offset: 0x60
	// Line 926, Address: 0x1023ba4, Func Offset: 0x74
	// Line 927, Address: 0x1023bb0, Func Offset: 0x80
	// Line 928, Address: 0x1023bc4, Func Offset: 0x94
	// Line 929, Address: 0x1023bd4, Func Offset: 0xa4
	// Line 930, Address: 0x1023be8, Func Offset: 0xb8
	// Line 931, Address: 0x1023c04, Func Offset: 0xd4
	// Line 934, Address: 0x1023c0c, Func Offset: 0xdc
	// Line 939, Address: 0x1023c2c, Func Offset: 0xfc
	// Func End, Address: 0x1023c3c, Func Offset: 0x10c
}

// 
// Start address: 0x1023c40
void scrollz_h(int lD4, int flagz)
{
	_anon1 lD0;
	_anon1 lD1;
	_anon1 lD2;
	unsigned char bD3;
	// Line 951, Address: 0x1023c40, Func Offset: 0
	// Line 955, Address: 0x1023c50, Func Offset: 0x10
	// Line 956, Address: 0x1023c5c, Func Offset: 0x1c
	// Line 957, Address: 0x1023c6c, Func Offset: 0x2c
	// Line 959, Address: 0x1023c78, Func Offset: 0x38
	// Line 960, Address: 0x1023c80, Func Offset: 0x40
	// Line 961, Address: 0x1023c88, Func Offset: 0x48
	// Line 963, Address: 0x1023c94, Func Offset: 0x54
	// Line 964, Address: 0x1023ca0, Func Offset: 0x60
	// Line 965, Address: 0x1023cb4, Func Offset: 0x74
	// Line 966, Address: 0x1023cc0, Func Offset: 0x80
	// Line 967, Address: 0x1023cd4, Func Offset: 0x94
	// Line 968, Address: 0x1023ce4, Func Offset: 0xa4
	// Line 969, Address: 0x1023cf8, Func Offset: 0xb8
	// Line 970, Address: 0x1023d14, Func Offset: 0xd4
	// Line 973, Address: 0x1023d1c, Func Offset: 0xdc
	// Line 978, Address: 0x1023d3c, Func Offset: 0xfc
	// Func End, Address: 0x1023d4c, Func Offset: 0x10c
}

// 
// Start address: 0x1023d50
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 992, Address: 0x1023d50, Func Offset: 0
	// Line 998, Address: 0x1023d6c, Func Offset: 0x1c
	// Line 999, Address: 0x1023d70, Func Offset: 0x20
	// Line 1000, Address: 0x1023d7c, Func Offset: 0x2c
	// Line 1001, Address: 0x1023d88, Func Offset: 0x38
	// Line 1002, Address: 0x1023d90, Func Offset: 0x40
	// Line 1003, Address: 0x1023d98, Func Offset: 0x48
	// Line 1005, Address: 0x1023dac, Func Offset: 0x5c
	// Line 1006, Address: 0x1023db8, Func Offset: 0x68
	// Line 1007, Address: 0x1023dc4, Func Offset: 0x74
	// Line 1008, Address: 0x1023dcc, Func Offset: 0x7c
	// Line 1010, Address: 0x1023dd4, Func Offset: 0x84
	// Func End, Address: 0x1023df8, Func Offset: 0xa8
}

// 
// Start address: 0x1023e00
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
	// Line 1023, Address: 0x1023e00, Func Offset: 0
	// Line 1032, Address: 0x1023e20, Func Offset: 0x20
	// Line 1033, Address: 0x1023e24, Func Offset: 0x24
	// Line 1034, Address: 0x1023e30, Func Offset: 0x30
	// Line 1035, Address: 0x1023e3c, Func Offset: 0x3c
	// Line 1036, Address: 0x1023e44, Func Offset: 0x44
	// Line 1037, Address: 0x1023e4c, Func Offset: 0x4c
	// Line 1039, Address: 0x1023e60, Func Offset: 0x60
	// Line 1040, Address: 0x1023e64, Func Offset: 0x64
	// Line 1041, Address: 0x1023e70, Func Offset: 0x70
	// Line 1042, Address: 0x1023e7c, Func Offset: 0x7c
	// Line 1043, Address: 0x1023e84, Func Offset: 0x84
	// Line 1045, Address: 0x1023e8c, Func Offset: 0x8c
	// Line 1046, Address: 0x1023e98, Func Offset: 0x98
	// Line 1047, Address: 0x1023eac, Func Offset: 0xac
	// Line 1049, Address: 0x1023eb8, Func Offset: 0xb8
	// Line 1050, Address: 0x1023ec0, Func Offset: 0xc0
	// Line 1052, Address: 0x1023ec8, Func Offset: 0xc8
	// Line 1054, Address: 0x1023ee8, Func Offset: 0xe8
	// Line 1060, Address: 0x1023f14, Func Offset: 0x114
	// Line 1061, Address: 0x1023f28, Func Offset: 0x128
	// Line 1063, Address: 0x1023f34, Func Offset: 0x134
	// Line 1064, Address: 0x1023f3c, Func Offset: 0x13c
	// Line 1065, Address: 0x1023f44, Func Offset: 0x144
	// Line 1067, Address: 0x1023f64, Func Offset: 0x164
	// Line 1073, Address: 0x1023f90, Func Offset: 0x190
	// Line 1074, Address: 0x1023fa4, Func Offset: 0x1a4
	// Line 1076, Address: 0x1023fb0, Func Offset: 0x1b0
	// Line 1077, Address: 0x1023fb8, Func Offset: 0x1b8
	// Line 1078, Address: 0x1023fc0, Func Offset: 0x1c0
	// Line 1080, Address: 0x1023fe0, Func Offset: 0x1e0
	// Line 1086, Address: 0x102400c, Func Offset: 0x20c
	// Line 1087, Address: 0x1024020, Func Offset: 0x220
	// Line 1089, Address: 0x102402c, Func Offset: 0x22c
	// Line 1090, Address: 0x1024034, Func Offset: 0x234
	// Line 1091, Address: 0x102403c, Func Offset: 0x23c
	// Line 1093, Address: 0x102405c, Func Offset: 0x25c
	// Line 1102, Address: 0x1024088, Func Offset: 0x288
	// Func End, Address: 0x10240b0, Func Offset: 0x2b0
}

// 
// Start address: 0x10240b0
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
	// Line 1119, Address: 0x10240b0, Func Offset: 0
	// Line 1130, Address: 0x10240dc, Func Offset: 0x2c
	// Line 1132, Address: 0x10240e4, Func Offset: 0x34
	// Line 1133, Address: 0x10240fc, Func Offset: 0x4c
	// Line 1134, Address: 0x1024110, Func Offset: 0x60
	// Line 1136, Address: 0x1024118, Func Offset: 0x68
	// Line 1138, Address: 0x102412c, Func Offset: 0x7c
	// Line 1139, Address: 0x1024144, Func Offset: 0x94
	// Line 1140, Address: 0x1024158, Func Offset: 0xa8
	// Line 1141, Address: 0x1024160, Func Offset: 0xb0
	// Line 1143, Address: 0x1024168, Func Offset: 0xb8
	// Line 1144, Address: 0x102417c, Func Offset: 0xcc
	// Line 1149, Address: 0x1024184, Func Offset: 0xd4
	// Line 1150, Address: 0x10241d4, Func Offset: 0x124
	// Line 1151, Address: 0x10241dc, Func Offset: 0x12c
	// Line 1157, Address: 0x10241fc, Func Offset: 0x14c
	// Line 1158, Address: 0x102421c, Func Offset: 0x16c
	// Line 1159, Address: 0x1024240, Func Offset: 0x190
	// Line 1160, Address: 0x102424c, Func Offset: 0x19c
	// Line 1161, Address: 0x1024254, Func Offset: 0x1a4
	// Line 1163, Address: 0x1024274, Func Offset: 0x1c4
	// Line 1167, Address: 0x10242a0, Func Offset: 0x1f0
	// Line 1170, Address: 0x10242a8, Func Offset: 0x1f8
	// Line 1171, Address: 0x10242ac, Func Offset: 0x1fc
	// Line 1175, Address: 0x10242cc, Func Offset: 0x21c
	// Line 1182, Address: 0x10242f8, Func Offset: 0x248
	// Line 1189, Address: 0x102430c, Func Offset: 0x25c
	// Line 1190, Address: 0x1024314, Func Offset: 0x264
	// Line 1191, Address: 0x102431c, Func Offset: 0x26c
	// Line 1192, Address: 0x1024334, Func Offset: 0x284
	// Line 1193, Address: 0x1024354, Func Offset: 0x2a4
	// Line 1197, Address: 0x102435c, Func Offset: 0x2ac
	// Line 1199, Address: 0x102438c, Func Offset: 0x2dc
	// Line 1200, Address: 0x1024398, Func Offset: 0x2e8
	// Line 1204, Address: 0x10243a8, Func Offset: 0x2f8
	// Line 1205, Address: 0x10243b4, Func Offset: 0x304
	// Line 1206, Address: 0x10243d4, Func Offset: 0x324
	// Line 1207, Address: 0x10243e0, Func Offset: 0x330
	// Line 1208, Address: 0x102440c, Func Offset: 0x35c
	// Line 1209, Address: 0x102442c, Func Offset: 0x37c
	// Line 1211, Address: 0x1024450, Func Offset: 0x3a0
	// Line 1214, Address: 0x1024474, Func Offset: 0x3c4
	// Line 1216, Address: 0x1024494, Func Offset: 0x3e4
	// Line 1219, Address: 0x10244a8, Func Offset: 0x3f8
	// Line 1220, Address: 0x10244b4, Func Offset: 0x404
	// Line 1221, Address: 0x10244c4, Func Offset: 0x414
	// Line 1223, Address: 0x10244cc, Func Offset: 0x41c
	// Func End, Address: 0x10244f4, Func Offset: 0x444
}

// 
// Start address: 0x1024500
void scrollwrtc()
{
	// Line 1229, Address: 0x1024500, Func Offset: 0
	// Func End, Address: 0x1024508, Func Offset: 0x8
}

// 
// Start address: 0x1024510
void scrollwrtz()
{
	// Line 1234, Address: 0x1024510, Func Offset: 0
	// Func End, Address: 0x1024518, Func Offset: 0x8
}

// 
// Start address: 0x1024520
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1252, Address: 0x1024520, Func Offset: 0
	// Line 1265, Address: 0x1024548, Func Offset: 0x28
	// Line 1268, Address: 0x1024568, Func Offset: 0x48
	// Line 1269, Address: 0x102457c, Func Offset: 0x5c
	// Line 1270, Address: 0x1024590, Func Offset: 0x70
	// Line 1271, Address: 0x10245a4, Func Offset: 0x84
	// Line 1273, Address: 0x10245b8, Func Offset: 0x98
	// Line 1274, Address: 0x10245c4, Func Offset: 0xa4
	// Line 1275, Address: 0x10245d8, Func Offset: 0xb8
	// Func End, Address: 0x10245e8, Func Offset: 0xc8
}

// 
// Start address: 0x10245f0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1279, Address: 0x10245f0, Func Offset: 0
	// Line 1283, Address: 0x1024618, Func Offset: 0x28
	// Line 1286, Address: 0x1024638, Func Offset: 0x48
	// Line 1287, Address: 0x102464c, Func Offset: 0x5c
	// Line 1288, Address: 0x1024660, Func Offset: 0x70
	// Line 1289, Address: 0x1024674, Func Offset: 0x84
	// Line 1291, Address: 0x1024688, Func Offset: 0x98
	// Line 1292, Address: 0x1024694, Func Offset: 0xa4
	// Line 1293, Address: 0x10246a8, Func Offset: 0xb8
	// Func End, Address: 0x10246b8, Func Offset: 0xc8
}

// 
// Start address: 0x10246c0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1313, Address: 0x10246c0, Func Offset: 0
	// Line 1317, Address: 0x10246e8, Func Offset: 0x28
	// Line 1320, Address: 0x1024708, Func Offset: 0x48
	// Line 1321, Address: 0x102471c, Func Offset: 0x5c
	// Line 1322, Address: 0x102472c, Func Offset: 0x6c
	// Line 1323, Address: 0x1024740, Func Offset: 0x80
	// Line 1325, Address: 0x1024750, Func Offset: 0x90
	// Line 1326, Address: 0x102475c, Func Offset: 0x9c
	// Line 1327, Address: 0x1024770, Func Offset: 0xb0
	// Func End, Address: 0x1024780, Func Offset: 0xc0
}

// 
// Start address: 0x1024780
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
	// Line 1346, Address: 0x1024780, Func Offset: 0
	// Line 1347, Address: 0x10247b4, Func Offset: 0x34
	// Line 1352, Address: 0x10247b8, Func Offset: 0x38
	// Line 1354, Address: 0x10247c8, Func Offset: 0x48
	// Line 1355, Address: 0x10247cc, Func Offset: 0x4c
	// Line 1356, Address: 0x10247d4, Func Offset: 0x54
	// Line 1358, Address: 0x10247e4, Func Offset: 0x64
	// Line 1360, Address: 0x10247e8, Func Offset: 0x68
	// Line 1361, Address: 0x10247f0, Func Offset: 0x70
	// Line 1364, Address: 0x10247f8, Func Offset: 0x78
	// Line 1365, Address: 0x1024800, Func Offset: 0x80
	// Line 1366, Address: 0x102480c, Func Offset: 0x8c
	// Line 1368, Address: 0x1024818, Func Offset: 0x98
	// Line 1369, Address: 0x1024820, Func Offset: 0xa0
	// Line 1370, Address: 0x1024828, Func Offset: 0xa8
	// Line 1371, Address: 0x1024830, Func Offset: 0xb0
	// Line 1373, Address: 0x102483c, Func Offset: 0xbc
	// Line 1374, Address: 0x1024844, Func Offset: 0xc4
	// Line 1375, Address: 0x102484c, Func Offset: 0xcc
	// Line 1376, Address: 0x1024854, Func Offset: 0xd4
	// Line 1378, Address: 0x1024860, Func Offset: 0xe0
	// Line 1379, Address: 0x1024868, Func Offset: 0xe8
	// Line 1380, Address: 0x1024870, Func Offset: 0xf0
	// Line 1383, Address: 0x1024878, Func Offset: 0xf8
	// Line 1384, Address: 0x1024880, Func Offset: 0x100
	// Line 1387, Address: 0x1024888, Func Offset: 0x108
	// Line 1388, Address: 0x10248cc, Func Offset: 0x14c
	// Line 1389, Address: 0x1024910, Func Offset: 0x190
	// Line 1390, Address: 0x1024954, Func Offset: 0x1d4
	// Line 1392, Address: 0x1024998, Func Offset: 0x218
	// Func End, Address: 0x10249c8, Func Offset: 0x248
}

// 
// Start address: 0x10249d0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1410, Address: 0x10249d0, Func Offset: 0
	// Line 1411, Address: 0x10249f0, Func Offset: 0x20
	// Line 1412, Address: 0x1024a10, Func Offset: 0x40
	// Func End, Address: 0x1024a20, Func Offset: 0x50
}

// 
// Start address: 0x1024a20
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1414, Address: 0x1024a20, Func Offset: 0
	// Line 1415, Address: 0x1024a40, Func Offset: 0x20
	// Line 1416, Address: 0x1024a44, Func Offset: 0x24
	// Line 1417, Address: 0x1024a64, Func Offset: 0x44
	// Func End, Address: 0x1024a74, Func Offset: 0x54
}

// 
// Start address: 0x1024a80
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1424, Address: 0x1024a80, Func Offset: 0
	// Line 1430, Address: 0x1024ab0, Func Offset: 0x30
	// Line 1431, Address: 0x1024ac0, Func Offset: 0x40
	// Line 1437, Address: 0x1024ad0, Func Offset: 0x50
	// Line 1438, Address: 0x1024aec, Func Offset: 0x6c
	// Line 1439, Address: 0x1024af0, Func Offset: 0x70
	// Line 1440, Address: 0x1024b0c, Func Offset: 0x8c
	// Line 1441, Address: 0x1024b10, Func Offset: 0x90
	// Line 1442, Address: 0x1024b30, Func Offset: 0xb0
	// Line 1443, Address: 0x1024b38, Func Offset: 0xb8
	// Line 1444, Address: 0x1024b58, Func Offset: 0xd8
	// Line 1445, Address: 0x1024b60, Func Offset: 0xe0
	// Line 1446, Address: 0x1024ba8, Func Offset: 0x128
	// Line 1448, Address: 0x1024bb4, Func Offset: 0x134
	// Line 1450, Address: 0x1024bd0, Func Offset: 0x150
	// Line 1455, Address: 0x1024bd8, Func Offset: 0x158
	// Line 1456, Address: 0x1024be4, Func Offset: 0x164
	// Line 1459, Address: 0x1024bf0, Func Offset: 0x170
	// Line 1460, Address: 0x1024bf8, Func Offset: 0x178
	// Line 1461, Address: 0x1024c18, Func Offset: 0x198
	// Line 1462, Address: 0x1024c34, Func Offset: 0x1b4
	// Line 1463, Address: 0x1024c3c, Func Offset: 0x1bc
	// Line 1464, Address: 0x1024c5c, Func Offset: 0x1dc
	// Line 1466, Address: 0x1024c78, Func Offset: 0x1f8
	// Line 1467, Address: 0x1024c80, Func Offset: 0x200
	// Line 1468, Address: 0x1024c88, Func Offset: 0x208
	// Line 1469, Address: 0x1024c94, Func Offset: 0x214
	// Line 1470, Address: 0x1024cac, Func Offset: 0x22c
	// Line 1472, Address: 0x1024cbc, Func Offset: 0x23c
	// Line 1475, Address: 0x1024cc8, Func Offset: 0x248
	// Line 1476, Address: 0x1024cd0, Func Offset: 0x250
	// Line 1477, Address: 0x1024cd4, Func Offset: 0x254
	// Func End, Address: 0x1024cf4, Func Offset: 0x274
}

// 
// Start address: 0x1024d00
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1497, Address: 0x1024d00, Func Offset: 0
	// Line 1505, Address: 0x1024d28, Func Offset: 0x28
	// Line 1506, Address: 0x1024d8c, Func Offset: 0x8c
	// Line 1512, Address: 0x1024d94, Func Offset: 0x94
	// Line 1513, Address: 0x1024d9c, Func Offset: 0x9c
	// Line 1514, Address: 0x1024dbc, Func Offset: 0xbc
	// Line 1515, Address: 0x1024dd8, Func Offset: 0xd8
	// Line 1516, Address: 0x1024de0, Func Offset: 0xe0
	// Line 1517, Address: 0x1024e00, Func Offset: 0x100
	// Line 1520, Address: 0x1024e1c, Func Offset: 0x11c
	// Line 1521, Address: 0x1024e24, Func Offset: 0x124
	// Line 1522, Address: 0x1024e2c, Func Offset: 0x12c
	// Line 1523, Address: 0x1024e38, Func Offset: 0x138
	// Line 1524, Address: 0x1024e50, Func Offset: 0x150
	// Line 1525, Address: 0x1024e58, Func Offset: 0x158
	// Line 1530, Address: 0x1024e68, Func Offset: 0x168
	// Line 1533, Address: 0x1024e74, Func Offset: 0x174
	// Line 1534, Address: 0x1024e7c, Func Offset: 0x17c
	// Line 1535, Address: 0x1024e80, Func Offset: 0x180
	// Func End, Address: 0x1024e9c, Func Offset: 0x19c
}

// 
// Start address: 0x1024ea0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1549, Address: 0x1024ea0, Func Offset: 0
	// Line 1556, Address: 0x1024ebc, Func Offset: 0x1c
	// Line 1557, Address: 0x1024ec0, Func Offset: 0x20
	// Line 1558, Address: 0x1024ec8, Func Offset: 0x28
	// Line 1559, Address: 0x1024eec, Func Offset: 0x4c
	// Line 1560, Address: 0x1024ef8, Func Offset: 0x58
	// Line 1561, Address: 0x1024f10, Func Offset: 0x70
	// Line 1562, Address: 0x1024f24, Func Offset: 0x84
	// Line 1567, Address: 0x1024f3c, Func Offset: 0x9c
	// Func End, Address: 0x1024f54, Func Offset: 0xb4
}

// 
// Start address: 0x1024f60
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1581, Address: 0x1024f60, Func Offset: 0
	// Line 1582, Address: 0x1024f6c, Func Offset: 0xc
	// Line 1583, Address: 0x1024f98, Func Offset: 0x38
	// Line 1584, Address: 0x1024fe4, Func Offset: 0x84
	// Line 1585, Address: 0x1025010, Func Offset: 0xb0
	// Line 1587, Address: 0x102505c, Func Offset: 0xfc
	// Line 1593, Address: 0x1025068, Func Offset: 0x108
	// Line 1594, Address: 0x102506c, Func Offset: 0x10c
	// Func End, Address: 0x1025078, Func Offset: 0x118
}

// 
// Start address: 0x1025080
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1611, Address: 0x1025080, Func Offset: 0
	// Line 1612, Address: 0x102509c, Func Offset: 0x1c
	// Line 1614, Address: 0x10250b8, Func Offset: 0x38
	// Func End, Address: 0x10250c8, Func Offset: 0x48
}

// 
// Start address: 0x10250d0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1616, Address: 0x10250d0, Func Offset: 0
	// Line 1617, Address: 0x10250ec, Func Offset: 0x1c
	// Line 1618, Address: 0x10250f0, Func Offset: 0x20
	// Line 1620, Address: 0x102510c, Func Offset: 0x3c
	// Func End, Address: 0x102511c, Func Offset: 0x4c
}

// 
// Start address: 0x1025120
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1622, Address: 0x1025120, Func Offset: 0
	// Line 1623, Address: 0x1025134, Func Offset: 0x14
	// Line 1625, Address: 0x1025150, Func Offset: 0x30
	// Func End, Address: 0x1025160, Func Offset: 0x40
}

// 
// Start address: 0x1025160
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1627, Address: 0x1025160, Func Offset: 0
	// Line 1628, Address: 0x102517c, Func Offset: 0x1c
	// Line 1630, Address: 0x1025198, Func Offset: 0x38
	// Func End, Address: 0x10251a8, Func Offset: 0x48
}

// 
// Start address: 0x10251b0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1632, Address: 0x10251b0, Func Offset: 0
	// Line 1633, Address: 0x10251c8, Func Offset: 0x18
	// Line 1634, Address: 0x10251d8, Func Offset: 0x28
	// Line 1635, Address: 0x10251e8, Func Offset: 0x38
	// Line 1636, Address: 0x10251f4, Func Offset: 0x44
	// Line 1638, Address: 0x1025200, Func Offset: 0x50
	// Line 1639, Address: 0x102522c, Func Offset: 0x7c
	// Line 1642, Address: 0x1025258, Func Offset: 0xa8
	// Func End, Address: 0x1025264, Func Offset: 0xb4
}

// 
// Start address: 0x1025270
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1658, Address: 0x1025270, Func Offset: 0
	// Line 1663, Address: 0x1025288, Func Offset: 0x18
	// Line 1664, Address: 0x1025294, Func Offset: 0x24
	// Line 1665, Address: 0x10252a0, Func Offset: 0x30
	// Line 1666, Address: 0x10252a8, Func Offset: 0x38
	// Line 1667, Address: 0x10252ac, Func Offset: 0x3c
	// Line 1671, Address: 0x10252c4, Func Offset: 0x54
	// Line 1672, Address: 0x10252cc, Func Offset: 0x5c
	// Line 1673, Address: 0x10252d0, Func Offset: 0x60
	// Line 1675, Address: 0x10252e0, Func Offset: 0x70
	// Func End, Address: 0x1025300, Func Offset: 0x90
}

// 
// Start address: 0x1025300
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1678, Address: 0x1025300, Func Offset: 0
	// Line 1679, Address: 0x1025318, Func Offset: 0x18
	// Line 1680, Address: 0x1025338, Func Offset: 0x38
	// Func End, Address: 0x1025348, Func Offset: 0x48
}

// 
// Start address: 0x1025350
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1685, Address: 0x1025350, Func Offset: 0
	// Line 1689, Address: 0x1025370, Func Offset: 0x20
	// Line 1692, Address: 0x102538c, Func Offset: 0x3c
	// Line 1696, Address: 0x10253b4, Func Offset: 0x64
	// Line 1697, Address: 0x10253c0, Func Offset: 0x70
	// Line 1699, Address: 0x10253e8, Func Offset: 0x98
	// Func End, Address: 0x10253f8, Func Offset: 0xa8
}

// 
// Start address: 0x1025400
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon1 temp;
	// Line 1705, Address: 0x1025400, Func Offset: 0
	// Line 1710, Address: 0x102541c, Func Offset: 0x1c
	// Line 1711, Address: 0x1025424, Func Offset: 0x24
	// Line 1714, Address: 0x102542c, Func Offset: 0x2c
	// Line 1715, Address: 0x1025430, Func Offset: 0x30
	// Line 1716, Address: 0x102543c, Func Offset: 0x3c
	// Line 1717, Address: 0x1025448, Func Offset: 0x48
	// Line 1718, Address: 0x102545c, Func Offset: 0x5c
	// Line 1719, Address: 0x102547c, Func Offset: 0x7c
	// Line 1720, Address: 0x1025484, Func Offset: 0x84
	// Line 1721, Address: 0x10254a8, Func Offset: 0xa8
	// Func End, Address: 0x10254c4, Func Offset: 0xc4
}

// 
// Start address: 0x10254d0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1743, Address: 0x10254d0, Func Offset: 0
	// Line 1748, Address: 0x10254f8, Func Offset: 0x28
	// Line 1749, Address: 0x1025508, Func Offset: 0x38
	// Line 1751, Address: 0x1025524, Func Offset: 0x54
	// Line 1752, Address: 0x1025548, Func Offset: 0x78
	// Line 1753, Address: 0x1025570, Func Offset: 0xa0
	// Line 1754, Address: 0x102557c, Func Offset: 0xac
	// Line 1755, Address: 0x1025584, Func Offset: 0xb4
	// Line 1758, Address: 0x10255a0, Func Offset: 0xd0
	// Line 1762, Address: 0x10255c8, Func Offset: 0xf8
	// Line 1765, Address: 0x10255d0, Func Offset: 0x100
	// Line 1766, Address: 0x10255d4, Func Offset: 0x104
	// Line 1770, Address: 0x10255f0, Func Offset: 0x120
	// Line 1777, Address: 0x1025618, Func Offset: 0x148
	// Func End, Address: 0x1025634, Func Offset: 0x164
}

// 
// Start address: 0x1025640
void mapinit()
{
	// Line 1781, Address: 0x1025640, Func Offset: 0
	// Line 1783, Address: 0x1025648, Func Offset: 0x8
	// Line 1784, Address: 0x102565c, Func Offset: 0x1c
	// Line 1787, Address: 0x1025670, Func Offset: 0x30
	// Line 1788, Address: 0x1025690, Func Offset: 0x50
	// Func End, Address: 0x10256a0, Func Offset: 0x60
}

// 
// Start address: 0x10256a0
void mapset()
{
	// Line 1799, Address: 0x10256a0, Func Offset: 0
	// Func End, Address: 0x10256a8, Func Offset: 0x8
}

