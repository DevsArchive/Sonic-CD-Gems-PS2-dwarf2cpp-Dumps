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
// Start address: 0x1024e20
void enecginit()
{
	// Line 124, Address: 0x1024e20, Func Offset: 0
	// Func End, Address: 0x1024e28, Func Offset: 0x8
}

// 
// Start address: 0x1024e30
void divdevset()
{
	// Line 128, Address: 0x1024e30, Func Offset: 0
	// Func End, Address: 0x1024e38, Func Offset: 0x8
}

// 
// Start address: 0x1024e40
void scr_set()
{
	int i;
	// Line 177, Address: 0x1024e40, Func Offset: 0
	// Line 180, Address: 0x1024e4c, Func Offset: 0xc
	// Line 182, Address: 0x1024e94, Func Offset: 0x54
	// Line 183, Address: 0x1024e98, Func Offset: 0x58
	// Line 184, Address: 0x1024ebc, Func Offset: 0x7c
	// Line 185, Address: 0x1024ed8, Func Offset: 0x98
	// Line 186, Address: 0x1024efc, Func Offset: 0xbc
	// Line 187, Address: 0x1024f18, Func Offset: 0xd8
	// Line 188, Address: 0x1024f3c, Func Offset: 0xfc
	// Line 189, Address: 0x1024f58, Func Offset: 0x118
	// Line 190, Address: 0x1024f7c, Func Offset: 0x13c
	// Line 191, Address: 0x1024f98, Func Offset: 0x158
	// Line 193, Address: 0x1024fbc, Func Offset: 0x17c
	// Line 194, Address: 0x1024fe0, Func Offset: 0x1a0
	// Line 195, Address: 0x1024fec, Func Offset: 0x1ac
	// Line 197, Address: 0x1024ff8, Func Offset: 0x1b8
	// Line 198, Address: 0x102501c, Func Offset: 0x1dc
	// Line 200, Address: 0x1025028, Func Offset: 0x1e8
	// Line 201, Address: 0x1025030, Func Offset: 0x1f0
	// Func End, Address: 0x1025044, Func Offset: 0x204
}

// 
// Start address: 0x1025050
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 205, Address: 0x1025050, Func Offset: 0
	// Line 206, Address: 0x1025064, Func Offset: 0x14
	// Line 210, Address: 0x1025080, Func Offset: 0x30
	// Line 218, Address: 0x10250ac, Func Offset: 0x5c
	// Line 220, Address: 0x10250c0, Func Offset: 0x70
	// Line 221, Address: 0x10250c8, Func Offset: 0x78
	// Line 222, Address: 0x10250d8, Func Offset: 0x88
	// Line 223, Address: 0x10250e8, Func Offset: 0x98
	// Line 224, Address: 0x10250fc, Func Offset: 0xac
	// Line 228, Address: 0x1025104, Func Offset: 0xb4
	// Line 229, Address: 0x1025108, Func Offset: 0xb8
	// Line 230, Address: 0x102512c, Func Offset: 0xdc
	// Line 233, Address: 0x1025150, Func Offset: 0x100
	// Line 234, Address: 0x1025164, Func Offset: 0x114
	// Line 235, Address: 0x1025170, Func Offset: 0x120
	// Line 237, Address: 0x1025178, Func Offset: 0x128
	// Line 241, Address: 0x102517c, Func Offset: 0x12c
	// Line 242, Address: 0x10251a0, Func Offset: 0x150
	// Line 244, Address: 0x10251b0, Func Offset: 0x160
	// Line 246, Address: 0x10251b8, Func Offset: 0x168
	// Line 247, Address: 0x10251cc, Func Offset: 0x17c
	// Line 248, Address: 0x10251d8, Func Offset: 0x188
	// Line 250, Address: 0x10251e0, Func Offset: 0x190
	// Line 253, Address: 0x10251e4, Func Offset: 0x194
	// Line 254, Address: 0x1025208, Func Offset: 0x1b8
	// Line 257, Address: 0x1025218, Func Offset: 0x1c8
	// Line 259, Address: 0x1025220, Func Offset: 0x1d0
	// Line 261, Address: 0x1025230, Func Offset: 0x1e0
	// Line 262, Address: 0x1025234, Func Offset: 0x1e4
	// Line 263, Address: 0x102524c, Func Offset: 0x1fc
	// Line 264, Address: 0x1025264, Func Offset: 0x214
	// Line 265, Address: 0x102527c, Func Offset: 0x22c
	// Line 268, Address: 0x1025294, Func Offset: 0x244
	// Func End, Address: 0x10252b0, Func Offset: 0x260
}

// 
// Start address: 0x10252b0
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 272, Address: 0x10252b0, Func Offset: 0
	// Line 276, Address: 0x10252bc, Func Offset: 0xc
	// Line 277, Address: 0x10252c0, Func Offset: 0x10
	// Line 278, Address: 0x10252c8, Func Offset: 0x18
	// Line 279, Address: 0x10252e0, Func Offset: 0x30
	// Line 280, Address: 0x10252f0, Func Offset: 0x40
	// Line 281, Address: 0x10252fc, Func Offset: 0x4c
	// Line 283, Address: 0x1025308, Func Offset: 0x58
	// Line 284, Address: 0x102532c, Func Offset: 0x7c
	// Line 285, Address: 0x1025350, Func Offset: 0xa0
	// Line 286, Address: 0x102537c, Func Offset: 0xcc
	// Func End, Address: 0x1025388, Func Offset: 0xd8
}

// 
// Start address: 0x1025390
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 290, Address: 0x1025390, Func Offset: 0
	// Line 295, Address: 0x10253a0, Func Offset: 0x10
	// Line 298, Address: 0x10253b0, Func Offset: 0x20
	// Line 299, Address: 0x10253dc, Func Offset: 0x4c
	// Line 300, Address: 0x10253e4, Func Offset: 0x54
	// Line 301, Address: 0x10253ec, Func Offset: 0x5c
	// Line 303, Address: 0x10253f4, Func Offset: 0x64
	// Line 304, Address: 0x1025404, Func Offset: 0x74
	// Line 308, Address: 0x1025414, Func Offset: 0x84
	// Line 309, Address: 0x1025434, Func Offset: 0xa4
	// Line 310, Address: 0x1025454, Func Offset: 0xc4
	// Line 312, Address: 0x102548c, Func Offset: 0xfc
	// Line 313, Address: 0x1025490, Func Offset: 0x100
	// Line 314, Address: 0x102549c, Func Offset: 0x10c
	// Line 315, Address: 0x10254c0, Func Offset: 0x130
	// Line 317, Address: 0x10254cc, Func Offset: 0x13c
	// Line 318, Address: 0x10254dc, Func Offset: 0x14c
	// Line 319, Address: 0x10254ec, Func Offset: 0x15c
	// Line 320, Address: 0x10254fc, Func Offset: 0x16c
	// Line 321, Address: 0x1025530, Func Offset: 0x1a0
	// Line 322, Address: 0x1025538, Func Offset: 0x1a8
	// Line 324, Address: 0x1025540, Func Offset: 0x1b0
	// Line 327, Address: 0x1025544, Func Offset: 0x1b4
	// Line 329, Address: 0x1025554, Func Offset: 0x1c4
	// Line 331, Address: 0x1025560, Func Offset: 0x1d0
	// Line 332, Address: 0x1025590, Func Offset: 0x200
	// Line 333, Address: 0x1025594, Func Offset: 0x204
	// Line 335, Address: 0x10255a4, Func Offset: 0x214
	// Line 337, Address: 0x10255b4, Func Offset: 0x224
	// Line 339, Address: 0x10255c0, Func Offset: 0x230
	// Line 340, Address: 0x10255f0, Func Offset: 0x260
	// Line 341, Address: 0x10255f4, Func Offset: 0x264
	// Line 343, Address: 0x1025604, Func Offset: 0x274
	// Line 347, Address: 0x1025614, Func Offset: 0x284
	// Line 348, Address: 0x1025620, Func Offset: 0x290
	// Line 349, Address: 0x102562c, Func Offset: 0x29c
	// Line 350, Address: 0x1025638, Func Offset: 0x2a8
	// Line 351, Address: 0x102566c, Func Offset: 0x2dc
	// Func End, Address: 0x1025684, Func Offset: 0x2f4
}

// 
// Start address: 0x1025690
int z71aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl[37];
	// Line 355, Address: 0x1025690, Func Offset: 0
	// Line 359, Address: 0x10256a4, Func Offset: 0x14
	// Line 367, Address: 0x10256d0, Func Offset: 0x40
	// Line 368, Address: 0x10256f4, Func Offset: 0x64
	// Line 369, Address: 0x10256f8, Func Offset: 0x68
	// Line 370, Address: 0x1025710, Func Offset: 0x80
	// Line 371, Address: 0x1025714, Func Offset: 0x84
	// Line 372, Address: 0x1025718, Func Offset: 0x88
	// Line 373, Address: 0x1025724, Func Offset: 0x94
	// Line 374, Address: 0x1025730, Func Offset: 0xa0
	// Line 377, Address: 0x102573c, Func Offset: 0xac
	// Line 380, Address: 0x1025748, Func Offset: 0xb8
	// Line 381, Address: 0x1025754, Func Offset: 0xc4
	// Line 382, Address: 0x1025784, Func Offset: 0xf4
	// Line 383, Address: 0x10257a8, Func Offset: 0x118
	// Line 384, Address: 0x10257cc, Func Offset: 0x13c
	// Line 385, Address: 0x10257d8, Func Offset: 0x148
	// Line 386, Address: 0x10257fc, Func Offset: 0x16c
	// Line 387, Address: 0x102580c, Func Offset: 0x17c
	// Line 388, Address: 0x1025818, Func Offset: 0x188
	// Line 389, Address: 0x102581c, Func Offset: 0x18c
	// Func End, Address: 0x1025834, Func Offset: 0x1a4
}

// 
// Start address: 0x1025840
int z71aline0(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl0[12];
	// Line 392, Address: 0x1025840, Func Offset: 0
	// Line 396, Address: 0x1025854, Func Offset: 0x14
	// Line 402, Address: 0x1025888, Func Offset: 0x48
	// Line 403, Address: 0x10258ac, Func Offset: 0x6c
	// Line 404, Address: 0x10258b0, Func Offset: 0x70
	// Line 405, Address: 0x10258c8, Func Offset: 0x88
	// Line 406, Address: 0x10258cc, Func Offset: 0x8c
	// Line 407, Address: 0x10258d0, Func Offset: 0x90
	// Line 408, Address: 0x10258dc, Func Offset: 0x9c
	// Line 411, Address: 0x10258e8, Func Offset: 0xa8
	// Line 414, Address: 0x10258f4, Func Offset: 0xb4
	// Line 415, Address: 0x1025924, Func Offset: 0xe4
	// Line 416, Address: 0x1025930, Func Offset: 0xf0
	// Line 417, Address: 0x1025954, Func Offset: 0x114
	// Line 418, Address: 0x1025978, Func Offset: 0x138
	// Line 419, Address: 0x1025984, Func Offset: 0x144
	// Line 420, Address: 0x10259a8, Func Offset: 0x168
	// Line 421, Address: 0x10259b8, Func Offset: 0x178
	// Line 422, Address: 0x10259bc, Func Offset: 0x17c
	// Func End, Address: 0x10259d4, Func Offset: 0x194
}

// 
// Start address: 0x10259e0
int z71aline1(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl1[2];
	// Line 425, Address: 0x10259e0, Func Offset: 0
	// Line 429, Address: 0x10259f4, Func Offset: 0x14
	// Line 434, Address: 0x1025a10, Func Offset: 0x30
	// Line 435, Address: 0x1025a34, Func Offset: 0x54
	// Line 436, Address: 0x1025a38, Func Offset: 0x58
	// Line 437, Address: 0x1025a54, Func Offset: 0x74
	// Line 438, Address: 0x1025a58, Func Offset: 0x78
	// Line 439, Address: 0x1025a5c, Func Offset: 0x7c
	// Line 440, Address: 0x1025a68, Func Offset: 0x88
	// Line 443, Address: 0x1025a74, Func Offset: 0x94
	// Line 446, Address: 0x1025a80, Func Offset: 0xa0
	// Line 447, Address: 0x1025ab0, Func Offset: 0xd0
	// Line 448, Address: 0x1025abc, Func Offset: 0xdc
	// Line 449, Address: 0x1025ae0, Func Offset: 0x100
	// Line 450, Address: 0x1025b04, Func Offset: 0x124
	// Line 451, Address: 0x1025b10, Func Offset: 0x130
	// Line 452, Address: 0x1025b34, Func Offset: 0x154
	// Line 453, Address: 0x1025b44, Func Offset: 0x164
	// Line 454, Address: 0x1025b48, Func Offset: 0x168
	// Func End, Address: 0x1025b60, Func Offset: 0x180
}

// 
// Start address: 0x1025b60
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	int i;
	int j;
	// Line 458, Address: 0x1025b60, Func Offset: 0
	// Line 466, Address: 0x1025b78, Func Offset: 0x18
	// Line 475, Address: 0x1025b80, Func Offset: 0x20
	// Line 476, Address: 0x1025b8c, Func Offset: 0x2c
	// Line 477, Address: 0x1025b90, Func Offset: 0x30
	// Line 479, Address: 0x1025bb8, Func Offset: 0x58
	// Line 480, Address: 0x1025bc4, Func Offset: 0x64
	// Line 482, Address: 0x1025bcc, Func Offset: 0x6c
	// Line 483, Address: 0x1025bd4, Func Offset: 0x74
	// Line 484, Address: 0x1025bd8, Func Offset: 0x78
	// Line 485, Address: 0x1025bdc, Func Offset: 0x7c
	// Line 486, Address: 0x1025be8, Func Offset: 0x88
	// Line 488, Address: 0x1025bf4, Func Offset: 0x94
	// Line 489, Address: 0x1025c1c, Func Offset: 0xbc
	// Line 491, Address: 0x1025c28, Func Offset: 0xc8
	// Line 492, Address: 0x1025c30, Func Offset: 0xd0
	// Line 493, Address: 0x1025c34, Func Offset: 0xd4
	// Line 494, Address: 0x1025c44, Func Offset: 0xe4
	// Line 495, Address: 0x1025c54, Func Offset: 0xf4
	// Func End, Address: 0x1025c6c, Func Offset: 0x10c
}

// 
// Start address: 0x1025c70
void scroll_h()
{
	unsigned short wD4;
	// Line 507, Address: 0x1025c70, Func Offset: 0
	// Line 510, Address: 0x1025c7c, Func Offset: 0xc
	// Line 511, Address: 0x1025c88, Func Offset: 0x18
	// Line 512, Address: 0x1025c90, Func Offset: 0x20
	// Line 513, Address: 0x1025cc4, Func Offset: 0x54
	// Line 514, Address: 0x1025cd8, Func Offset: 0x68
	// Line 515, Address: 0x1025d04, Func Offset: 0x94
	// Line 516, Address: 0x1025d18, Func Offset: 0xa8
	// Line 519, Address: 0x1025d20, Func Offset: 0xb0
	// Line 524, Address: 0x1025d34, Func Offset: 0xc4
	// Func End, Address: 0x1025d48, Func Offset: 0xd8
}

// 
// Start address: 0x1025d50
void scrh_move()
{
	unsigned short wD0;
	// Line 526, Address: 0x1025d50, Func Offset: 0
	// Line 529, Address: 0x1025d5c, Func Offset: 0xc
	// Line 530, Address: 0x1025d68, Func Offset: 0x18
	// Line 531, Address: 0x1025d7c, Func Offset: 0x2c
	// Line 532, Address: 0x1025d90, Func Offset: 0x40
	// Line 534, Address: 0x1025d9c, Func Offset: 0x4c
	// Line 535, Address: 0x1025da4, Func Offset: 0x54
	// Line 536, Address: 0x1025dac, Func Offset: 0x5c
	// Line 537, Address: 0x1025dc4, Func Offset: 0x74
	// Line 538, Address: 0x1025dd0, Func Offset: 0x80
	// Line 540, Address: 0x1025dd8, Func Offset: 0x88
	// Line 543, Address: 0x1025de4, Func Offset: 0x94
	// Func End, Address: 0x1025df8, Func Offset: 0xa8
}

// 
// Start address: 0x1025e00
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 546, Address: 0x1025e00, Func Offset: 0
	// Line 549, Address: 0x1025e0c, Func Offset: 0xc
	// Line 550, Address: 0x1025e2c, Func Offset: 0x2c
	// Line 553, Address: 0x1025e34, Func Offset: 0x34
	// Line 554, Address: 0x1025e4c, Func Offset: 0x4c
	// Line 555, Address: 0x1025e7c, Func Offset: 0x7c
	// Line 558, Address: 0x1025e88, Func Offset: 0x88
	// Line 559, Address: 0x1025e90, Func Offset: 0x90
	// Line 560, Address: 0x1025ea4, Func Offset: 0xa4
	// Line 561, Address: 0x1025ed4, Func Offset: 0xd4
	// Line 562, Address: 0x1025ee0, Func Offset: 0xe0
	// Line 564, Address: 0x1025ee8, Func Offset: 0xe8
	// Func End, Address: 0x1025ef8, Func Offset: 0xf8
}

// 
// Start address: 0x1025f00
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 567, Address: 0x1025f00, Func Offset: 0
	// Line 570, Address: 0x1025f0c, Func Offset: 0xc
	// Line 571, Address: 0x1025f2c, Func Offset: 0x2c
	// Line 574, Address: 0x1025f34, Func Offset: 0x34
	// Line 575, Address: 0x1025f4c, Func Offset: 0x4c
	// Line 576, Address: 0x1025f7c, Func Offset: 0x7c
	// Line 579, Address: 0x1025f88, Func Offset: 0x88
	// Line 580, Address: 0x1025f90, Func Offset: 0x90
	// Line 581, Address: 0x1025fa4, Func Offset: 0xa4
	// Line 582, Address: 0x1025fd4, Func Offset: 0xd4
	// Line 583, Address: 0x1025fe0, Func Offset: 0xe0
	// Line 585, Address: 0x1025fe8, Func Offset: 0xe8
	// Func End, Address: 0x1025ff8, Func Offset: 0xf8
}

// 
// Start address: 0x1026000
void scroll_v()
{
	unsigned short wD0;
	// Line 604, Address: 0x1026000, Func Offset: 0
	// Line 607, Address: 0x102600c, Func Offset: 0xc
	// Line 608, Address: 0x1026038, Func Offset: 0x38
	// Line 609, Address: 0x1026050, Func Offset: 0x50
	// Line 612, Address: 0x1026058, Func Offset: 0x58
	// Line 613, Address: 0x1026070, Func Offset: 0x70
	// Line 614, Address: 0x1026078, Func Offset: 0x78
	// Line 615, Address: 0x1026098, Func Offset: 0x98
	// Line 616, Address: 0x10260ac, Func Offset: 0xac
	// Line 617, Address: 0x10260b8, Func Offset: 0xb8
	// Line 619, Address: 0x10260c0, Func Offset: 0xc0
	// Line 620, Address: 0x10260d4, Func Offset: 0xd4
	// Line 621, Address: 0x10260e4, Func Offset: 0xe4
	// Line 622, Address: 0x10260ec, Func Offset: 0xec
	// Line 623, Address: 0x10260f8, Func Offset: 0xf8
	// Line 625, Address: 0x1026100, Func Offset: 0x100
	// Line 626, Address: 0x1026108, Func Offset: 0x108
	// Line 627, Address: 0x102611c, Func Offset: 0x11c
	// Line 628, Address: 0x1026124, Func Offset: 0x124
	// Line 634, Address: 0x102612c, Func Offset: 0x12c
	// Line 635, Address: 0x1026140, Func Offset: 0x140
	// Line 636, Address: 0x1026148, Func Offset: 0x148
	// Line 637, Address: 0x1026154, Func Offset: 0x154
	// Line 639, Address: 0x102615c, Func Offset: 0x15c
	// Line 640, Address: 0x1026170, Func Offset: 0x170
	// Line 641, Address: 0x1026178, Func Offset: 0x178
	// Line 646, Address: 0x1026180, Func Offset: 0x180
	// Line 648, Address: 0x1026188, Func Offset: 0x188
	// Func End, Address: 0x102619c, Func Offset: 0x19c
}

// 
// Start address: 0x10261a0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 654, Address: 0x10261a0, Func Offset: 0
	// Line 657, Address: 0x10261b0, Func Offset: 0x10
	// Line 658, Address: 0x10261cc, Func Offset: 0x2c
	// Line 659, Address: 0x10261d8, Func Offset: 0x38
	// Line 662, Address: 0x10261e0, Func Offset: 0x40
	// Line 663, Address: 0x10261ec, Func Offset: 0x4c
	// Line 664, Address: 0x1026204, Func Offset: 0x64
	// Line 667, Address: 0x1026220, Func Offset: 0x80
	// Line 668, Address: 0x1026230, Func Offset: 0x90
	// Line 669, Address: 0x102623c, Func Offset: 0x9c
	// Line 671, Address: 0x1026244, Func Offset: 0xa4
	// Line 672, Address: 0x1026264, Func Offset: 0xc4
	// Line 673, Address: 0x1026270, Func Offset: 0xd0
	// Line 674, Address: 0x1026278, Func Offset: 0xd8
	// Line 675, Address: 0x1026298, Func Offset: 0xf8
	// Line 676, Address: 0x10262a4, Func Offset: 0x104
	// Line 678, Address: 0x10262ac, Func Offset: 0x10c
	// Line 682, Address: 0x10262b8, Func Offset: 0x118
	// Func End, Address: 0x10262cc, Func Offset: 0x12c
}

// 
// Start address: 0x10262d0
void sv_move_main1(unsigned short wD0)
{
	// Line 686, Address: 0x10262d0, Func Offset: 0
	// Line 688, Address: 0x10262dc, Func Offset: 0xc
	// Line 689, Address: 0x10262fc, Func Offset: 0x2c
	// Line 690, Address: 0x1026308, Func Offset: 0x38
	// Line 691, Address: 0x1026310, Func Offset: 0x40
	// Line 692, Address: 0x1026330, Func Offset: 0x60
	// Line 693, Address: 0x102633c, Func Offset: 0x6c
	// Line 695, Address: 0x1026344, Func Offset: 0x74
	// Line 698, Address: 0x1026350, Func Offset: 0x80
	// Func End, Address: 0x1026360, Func Offset: 0x90
}

// 
// Start address: 0x1026360
void sv_move_main2(unsigned short wD0)
{
	// Line 701, Address: 0x1026360, Func Offset: 0
	// Line 703, Address: 0x102636c, Func Offset: 0xc
	// Line 704, Address: 0x102638c, Func Offset: 0x2c
	// Line 705, Address: 0x1026398, Func Offset: 0x38
	// Line 706, Address: 0x10263a0, Func Offset: 0x40
	// Line 707, Address: 0x10263c0, Func Offset: 0x60
	// Line 708, Address: 0x10263cc, Func Offset: 0x6c
	// Line 710, Address: 0x10263d4, Func Offset: 0x74
	// Line 713, Address: 0x10263e0, Func Offset: 0x80
	// Func End, Address: 0x10263f0, Func Offset: 0x90
}

// 
// Start address: 0x10263f0
void sv_move_sub2()
{
	// Line 716, Address: 0x10263f0, Func Offset: 0
	// Line 717, Address: 0x10263f8, Func Offset: 0x8
	// Line 718, Address: 0x1026400, Func Offset: 0x10
	// Line 719, Address: 0x102640c, Func Offset: 0x1c
	// Func End, Address: 0x102641c, Func Offset: 0x2c
}

// 
// Start address: 0x1026420
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 722, Address: 0x1026420, Func Offset: 0
	// Line 725, Address: 0x102642c, Func Offset: 0xc
	// Line 726, Address: 0x1026430, Func Offset: 0x10
	// Line 727, Address: 0x1026438, Func Offset: 0x18
	// Line 728, Address: 0x1026454, Func Offset: 0x34
	// Line 729, Address: 0x1026470, Func Offset: 0x50
	// Line 730, Address: 0x102647c, Func Offset: 0x5c
	// Line 732, Address: 0x1026484, Func Offset: 0x64
	// Line 735, Address: 0x1026490, Func Offset: 0x70
	// Func End, Address: 0x10264a0, Func Offset: 0x80
}

// 
// Start address: 0x10264a0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 740, Address: 0x10264a0, Func Offset: 0
	// Line 744, Address: 0x10264b0, Func Offset: 0x10
	// Line 745, Address: 0x10264cc, Func Offset: 0x2c
	// Line 746, Address: 0x10264d8, Func Offset: 0x38
	// Line 748, Address: 0x10264ec, Func Offset: 0x4c
	// Line 749, Address: 0x10264f4, Func Offset: 0x54
	// Line 750, Address: 0x10264fc, Func Offset: 0x5c
	// Line 751, Address: 0x1026500, Func Offset: 0x60
	// Line 752, Address: 0x102650c, Func Offset: 0x6c
	// Func End, Address: 0x1026520, Func Offset: 0x80
}

// 
// Start address: 0x1026520
void scrv_up_ch(_anon2 lD1)
{
	// Line 756, Address: 0x1026520, Func Offset: 0
	// Line 757, Address: 0x102652c, Func Offset: 0xc
	// Line 758, Address: 0x1026554, Func Offset: 0x34
	// Line 759, Address: 0x102656c, Func Offset: 0x4c
	// Line 760, Address: 0x1026578, Func Offset: 0x58
	// Line 761, Address: 0x102658c, Func Offset: 0x6c
	// Line 762, Address: 0x10265a0, Func Offset: 0x80
	// Line 763, Address: 0x10265b4, Func Offset: 0x94
	// Line 766, Address: 0x10265bc, Func Offset: 0x9c
	// Line 769, Address: 0x10265c8, Func Offset: 0xa8
	// Line 771, Address: 0x10265d4, Func Offset: 0xb4
	// Func End, Address: 0x10265e4, Func Offset: 0xc4
}

// 
// Start address: 0x10265f0
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 777, Address: 0x10265f0, Func Offset: 0
	// Line 781, Address: 0x1026600, Func Offset: 0x10
	// Line 782, Address: 0x1026604, Func Offset: 0x14
	// Line 783, Address: 0x102660c, Func Offset: 0x1c
	// Line 784, Address: 0x1026618, Func Offset: 0x28
	// Line 786, Address: 0x102662c, Func Offset: 0x3c
	// Line 787, Address: 0x1026634, Func Offset: 0x44
	// Line 788, Address: 0x102663c, Func Offset: 0x4c
	// Line 790, Address: 0x1026640, Func Offset: 0x50
	// Line 792, Address: 0x102664c, Func Offset: 0x5c
	// Func End, Address: 0x1026660, Func Offset: 0x70
}

// 
// Start address: 0x1026660
void scrv_down_ch(_anon2 lD1)
{
	// Line 796, Address: 0x1026660, Func Offset: 0
	// Line 797, Address: 0x102666c, Func Offset: 0xc
	// Line 798, Address: 0x1026694, Func Offset: 0x34
	// Line 799, Address: 0x10266a0, Func Offset: 0x40
	// Line 800, Address: 0x10266b4, Func Offset: 0x54
	// Line 801, Address: 0x10266c8, Func Offset: 0x68
	// Line 802, Address: 0x10266dc, Func Offset: 0x7c
	// Line 803, Address: 0x10266f0, Func Offset: 0x90
	// Line 805, Address: 0x10266f8, Func Offset: 0x98
	// Line 808, Address: 0x1026704, Func Offset: 0xa4
	// Line 810, Address: 0x1026710, Func Offset: 0xb0
	// Func End, Address: 0x1026720, Func Offset: 0xc0
}

// 
// Start address: 0x1026720
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 813, Address: 0x1026720, Func Offset: 0
	// Line 816, Address: 0x1026730, Func Offset: 0x10
	// Line 818, Address: 0x102673c, Func Offset: 0x1c
	// Line 819, Address: 0x1026744, Func Offset: 0x24
	// Line 820, Address: 0x102674c, Func Offset: 0x2c
	// Line 822, Address: 0x1026750, Func Offset: 0x30
	// Line 823, Address: 0x1026778, Func Offset: 0x58
	// Line 826, Address: 0x1026784, Func Offset: 0x64
	// Line 827, Address: 0x10267b8, Func Offset: 0x98
	// Line 828, Address: 0x10267cc, Func Offset: 0xac
	// Line 830, Address: 0x10267f8, Func Offset: 0xd8
	// Line 831, Address: 0x102680c, Func Offset: 0xec
	// Line 833, Address: 0x1026814, Func Offset: 0xf4
	// Line 838, Address: 0x1026828, Func Offset: 0x108
	// Func End, Address: 0x102683c, Func Offset: 0x11c
}

// 
// Start address: 0x1026840
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 842, Address: 0x1026840, Func Offset: 0
	// Line 845, Address: 0x102684c, Func Offset: 0xc
	// Line 846, Address: 0x102685c, Func Offset: 0x1c
	// Line 847, Address: 0x102686c, Func Offset: 0x2c
	// Line 849, Address: 0x1026878, Func Offset: 0x38
	// Line 851, Address: 0x10268ac, Func Offset: 0x6c
	// Line 852, Address: 0x10268c0, Func Offset: 0x80
	// Line 853, Address: 0x10268d0, Func Offset: 0x90
	// Line 854, Address: 0x10268e4, Func Offset: 0xa4
	// Line 855, Address: 0x10268f8, Func Offset: 0xb8
	// Line 858, Address: 0x1026900, Func Offset: 0xc0
	// Line 863, Address: 0x1026914, Func Offset: 0xd4
	// Line 864, Address: 0x1026924, Func Offset: 0xe4
	// Line 865, Address: 0x1026934, Func Offset: 0xf4
	// Line 866, Address: 0x102694c, Func Offset: 0x10c
	// Line 868, Address: 0x1026958, Func Offset: 0x118
	// Line 870, Address: 0x102698c, Func Offset: 0x14c
	// Line 871, Address: 0x10269a0, Func Offset: 0x160
	// Line 872, Address: 0x10269b0, Func Offset: 0x170
	// Line 873, Address: 0x10269c4, Func Offset: 0x184
	// Line 874, Address: 0x10269d8, Func Offset: 0x198
	// Line 877, Address: 0x10269e0, Func Offset: 0x1a0
	// Line 882, Address: 0x10269f4, Func Offset: 0x1b4
	// Func End, Address: 0x1026a00, Func Offset: 0x1c0
}

// 
// Start address: 0x1026a00
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 889, Address: 0x1026a00, Func Offset: 0
	// Line 892, Address: 0x1026a0c, Func Offset: 0xc
	// Line 893, Address: 0x1026a18, Func Offset: 0x18
	// Line 895, Address: 0x1026a24, Func Offset: 0x24
	// Line 896, Address: 0x1026a50, Func Offset: 0x50
	// Line 897, Address: 0x1026a64, Func Offset: 0x64
	// Line 898, Address: 0x1026a94, Func Offset: 0x94
	// Line 899, Address: 0x1026aa8, Func Offset: 0xa8
	// Line 902, Address: 0x1026ab0, Func Offset: 0xb0
	// Line 907, Address: 0x1026ac4, Func Offset: 0xc4
	// Func End, Address: 0x1026ad4, Func Offset: 0xd4
}

// 
// Start address: 0x1026ae0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 911, Address: 0x1026ae0, Func Offset: 0
	// Line 915, Address: 0x1026af0, Func Offset: 0x10
	// Line 916, Address: 0x1026afc, Func Offset: 0x1c
	// Line 917, Address: 0x1026b0c, Func Offset: 0x2c
	// Line 919, Address: 0x1026b18, Func Offset: 0x38
	// Line 920, Address: 0x1026b20, Func Offset: 0x40
	// Line 921, Address: 0x1026b28, Func Offset: 0x48
	// Line 923, Address: 0x1026b34, Func Offset: 0x54
	// Line 924, Address: 0x1026b40, Func Offset: 0x60
	// Line 925, Address: 0x1026b54, Func Offset: 0x74
	// Line 926, Address: 0x1026b60, Func Offset: 0x80
	// Line 927, Address: 0x1026b74, Func Offset: 0x94
	// Line 928, Address: 0x1026b84, Func Offset: 0xa4
	// Line 929, Address: 0x1026b98, Func Offset: 0xb8
	// Line 930, Address: 0x1026bb4, Func Offset: 0xd4
	// Line 933, Address: 0x1026bbc, Func Offset: 0xdc
	// Line 938, Address: 0x1026bdc, Func Offset: 0xfc
	// Func End, Address: 0x1026bec, Func Offset: 0x10c
}

// 
// Start address: 0x1026bf0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 941, Address: 0x1026bf0, Func Offset: 0
	// Line 945, Address: 0x1026c00, Func Offset: 0x10
	// Line 946, Address: 0x1026c0c, Func Offset: 0x1c
	// Line 947, Address: 0x1026c1c, Func Offset: 0x2c
	// Line 949, Address: 0x1026c28, Func Offset: 0x38
	// Line 950, Address: 0x1026c30, Func Offset: 0x40
	// Line 951, Address: 0x1026c38, Func Offset: 0x48
	// Line 953, Address: 0x1026c44, Func Offset: 0x54
	// Line 954, Address: 0x1026c50, Func Offset: 0x60
	// Line 955, Address: 0x1026c64, Func Offset: 0x74
	// Line 956, Address: 0x1026c70, Func Offset: 0x80
	// Line 957, Address: 0x1026c84, Func Offset: 0x94
	// Line 958, Address: 0x1026c94, Func Offset: 0xa4
	// Line 959, Address: 0x1026ca8, Func Offset: 0xb8
	// Line 960, Address: 0x1026cc4, Func Offset: 0xd4
	// Line 963, Address: 0x1026ccc, Func Offset: 0xdc
	// Line 968, Address: 0x1026cec, Func Offset: 0xfc
	// Func End, Address: 0x1026cfc, Func Offset: 0x10c
}

// 
// Start address: 0x1026d00
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 980, Address: 0x1026d00, Func Offset: 0
	// Line 984, Address: 0x1026d10, Func Offset: 0x10
	// Line 985, Address: 0x1026d1c, Func Offset: 0x1c
	// Line 986, Address: 0x1026d2c, Func Offset: 0x2c
	// Line 988, Address: 0x1026d38, Func Offset: 0x38
	// Line 989, Address: 0x1026d40, Func Offset: 0x40
	// Line 990, Address: 0x1026d48, Func Offset: 0x48
	// Line 992, Address: 0x1026d54, Func Offset: 0x54
	// Line 993, Address: 0x1026d60, Func Offset: 0x60
	// Line 994, Address: 0x1026d74, Func Offset: 0x74
	// Line 995, Address: 0x1026d80, Func Offset: 0x80
	// Line 996, Address: 0x1026d94, Func Offset: 0x94
	// Line 997, Address: 0x1026da4, Func Offset: 0xa4
	// Line 998, Address: 0x1026db8, Func Offset: 0xb8
	// Line 999, Address: 0x1026dd4, Func Offset: 0xd4
	// Line 1002, Address: 0x1026ddc, Func Offset: 0xdc
	// Line 1007, Address: 0x1026dfc, Func Offset: 0xfc
	// Func End, Address: 0x1026e0c, Func Offset: 0x10c
}

// 
// Start address: 0x1026e10
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1021, Address: 0x1026e10, Func Offset: 0
	// Line 1027, Address: 0x1026e2c, Func Offset: 0x1c
	// Line 1028, Address: 0x1026e30, Func Offset: 0x20
	// Line 1029, Address: 0x1026e3c, Func Offset: 0x2c
	// Line 1030, Address: 0x1026e48, Func Offset: 0x38
	// Line 1031, Address: 0x1026e50, Func Offset: 0x40
	// Line 1032, Address: 0x1026e58, Func Offset: 0x48
	// Line 1034, Address: 0x1026e6c, Func Offset: 0x5c
	// Line 1035, Address: 0x1026e78, Func Offset: 0x68
	// Line 1036, Address: 0x1026e84, Func Offset: 0x74
	// Line 1037, Address: 0x1026e8c, Func Offset: 0x7c
	// Line 1039, Address: 0x1026e94, Func Offset: 0x84
	// Func End, Address: 0x1026eb8, Func Offset: 0xa8
}

// 
// Start address: 0x1026ec0
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
	// Line 1052, Address: 0x1026ec0, Func Offset: 0
	// Line 1061, Address: 0x1026ee0, Func Offset: 0x20
	// Line 1062, Address: 0x1026ee4, Func Offset: 0x24
	// Line 1063, Address: 0x1026ef0, Func Offset: 0x30
	// Line 1064, Address: 0x1026efc, Func Offset: 0x3c
	// Line 1065, Address: 0x1026f04, Func Offset: 0x44
	// Line 1066, Address: 0x1026f0c, Func Offset: 0x4c
	// Line 1068, Address: 0x1026f20, Func Offset: 0x60
	// Line 1069, Address: 0x1026f24, Func Offset: 0x64
	// Line 1070, Address: 0x1026f30, Func Offset: 0x70
	// Line 1071, Address: 0x1026f3c, Func Offset: 0x7c
	// Line 1072, Address: 0x1026f44, Func Offset: 0x84
	// Line 1074, Address: 0x1026f4c, Func Offset: 0x8c
	// Line 1075, Address: 0x1026f58, Func Offset: 0x98
	// Line 1076, Address: 0x1026f6c, Func Offset: 0xac
	// Line 1078, Address: 0x1026f78, Func Offset: 0xb8
	// Line 1079, Address: 0x1026f80, Func Offset: 0xc0
	// Line 1081, Address: 0x1026f88, Func Offset: 0xc8
	// Line 1083, Address: 0x1026fa8, Func Offset: 0xe8
	// Line 1089, Address: 0x1026fd4, Func Offset: 0x114
	// Line 1090, Address: 0x1026fe8, Func Offset: 0x128
	// Line 1092, Address: 0x1026ff4, Func Offset: 0x134
	// Line 1093, Address: 0x1026ffc, Func Offset: 0x13c
	// Line 1094, Address: 0x1027004, Func Offset: 0x144
	// Line 1096, Address: 0x1027024, Func Offset: 0x164
	// Line 1102, Address: 0x1027050, Func Offset: 0x190
	// Line 1103, Address: 0x1027064, Func Offset: 0x1a4
	// Line 1105, Address: 0x1027070, Func Offset: 0x1b0
	// Line 1106, Address: 0x1027078, Func Offset: 0x1b8
	// Line 1107, Address: 0x1027080, Func Offset: 0x1c0
	// Line 1109, Address: 0x10270a0, Func Offset: 0x1e0
	// Line 1115, Address: 0x10270cc, Func Offset: 0x20c
	// Line 1116, Address: 0x10270e0, Func Offset: 0x220
	// Line 1118, Address: 0x10270ec, Func Offset: 0x22c
	// Line 1119, Address: 0x10270f4, Func Offset: 0x234
	// Line 1120, Address: 0x10270fc, Func Offset: 0x23c
	// Line 1122, Address: 0x102711c, Func Offset: 0x25c
	// Line 1131, Address: 0x1027148, Func Offset: 0x288
	// Func End, Address: 0x1027170, Func Offset: 0x2b0
}

// 
// Start address: 0x1027170
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
	// Line 1148, Address: 0x1027170, Func Offset: 0
	// Line 1159, Address: 0x102719c, Func Offset: 0x2c
	// Line 1161, Address: 0x10271a4, Func Offset: 0x34
	// Line 1162, Address: 0x10271bc, Func Offset: 0x4c
	// Line 1163, Address: 0x10271d0, Func Offset: 0x60
	// Line 1165, Address: 0x10271d8, Func Offset: 0x68
	// Line 1167, Address: 0x10271ec, Func Offset: 0x7c
	// Line 1168, Address: 0x1027204, Func Offset: 0x94
	// Line 1169, Address: 0x1027218, Func Offset: 0xa8
	// Line 1170, Address: 0x1027220, Func Offset: 0xb0
	// Line 1172, Address: 0x1027228, Func Offset: 0xb8
	// Line 1173, Address: 0x102723c, Func Offset: 0xcc
	// Line 1178, Address: 0x1027244, Func Offset: 0xd4
	// Line 1179, Address: 0x1027294, Func Offset: 0x124
	// Line 1180, Address: 0x102729c, Func Offset: 0x12c
	// Line 1186, Address: 0x10272bc, Func Offset: 0x14c
	// Line 1187, Address: 0x10272dc, Func Offset: 0x16c
	// Line 1188, Address: 0x1027300, Func Offset: 0x190
	// Line 1189, Address: 0x102730c, Func Offset: 0x19c
	// Line 1190, Address: 0x1027314, Func Offset: 0x1a4
	// Line 1192, Address: 0x1027334, Func Offset: 0x1c4
	// Line 1196, Address: 0x1027360, Func Offset: 0x1f0
	// Line 1199, Address: 0x1027368, Func Offset: 0x1f8
	// Line 1200, Address: 0x102736c, Func Offset: 0x1fc
	// Line 1204, Address: 0x102738c, Func Offset: 0x21c
	// Line 1211, Address: 0x10273b8, Func Offset: 0x248
	// Line 1218, Address: 0x10273cc, Func Offset: 0x25c
	// Line 1219, Address: 0x10273d4, Func Offset: 0x264
	// Line 1220, Address: 0x10273dc, Func Offset: 0x26c
	// Line 1221, Address: 0x10273f4, Func Offset: 0x284
	// Line 1222, Address: 0x1027414, Func Offset: 0x2a4
	// Line 1226, Address: 0x102741c, Func Offset: 0x2ac
	// Line 1228, Address: 0x102744c, Func Offset: 0x2dc
	// Line 1229, Address: 0x1027458, Func Offset: 0x2e8
	// Line 1233, Address: 0x1027468, Func Offset: 0x2f8
	// Line 1234, Address: 0x1027474, Func Offset: 0x304
	// Line 1235, Address: 0x1027494, Func Offset: 0x324
	// Line 1236, Address: 0x10274a0, Func Offset: 0x330
	// Line 1237, Address: 0x10274cc, Func Offset: 0x35c
	// Line 1238, Address: 0x10274ec, Func Offset: 0x37c
	// Line 1240, Address: 0x1027510, Func Offset: 0x3a0
	// Line 1243, Address: 0x1027534, Func Offset: 0x3c4
	// Line 1245, Address: 0x1027554, Func Offset: 0x3e4
	// Line 1248, Address: 0x1027568, Func Offset: 0x3f8
	// Line 1249, Address: 0x1027574, Func Offset: 0x404
	// Line 1250, Address: 0x1027584, Func Offset: 0x414
	// Line 1252, Address: 0x102758c, Func Offset: 0x41c
	// Func End, Address: 0x10275b4, Func Offset: 0x444
}

// 
// Start address: 0x10275c0
void scrollwrtc()
{
	// Line 1258, Address: 0x10275c0, Func Offset: 0
	// Func End, Address: 0x10275c8, Func Offset: 0x8
}

// 
// Start address: 0x10275d0
void scrollwrtz()
{
	// Line 1263, Address: 0x10275d0, Func Offset: 0
	// Func End, Address: 0x10275d8, Func Offset: 0x8
}

// 
// Start address: 0x10275e0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1281, Address: 0x10275e0, Func Offset: 0
	// Line 1294, Address: 0x1027608, Func Offset: 0x28
	// Line 1297, Address: 0x1027628, Func Offset: 0x48
	// Line 1298, Address: 0x102763c, Func Offset: 0x5c
	// Line 1299, Address: 0x1027650, Func Offset: 0x70
	// Line 1300, Address: 0x1027664, Func Offset: 0x84
	// Line 1302, Address: 0x1027678, Func Offset: 0x98
	// Line 1303, Address: 0x1027684, Func Offset: 0xa4
	// Line 1304, Address: 0x1027698, Func Offset: 0xb8
	// Func End, Address: 0x10276a8, Func Offset: 0xc8
}

// 
// Start address: 0x10276b0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1308, Address: 0x10276b0, Func Offset: 0
	// Line 1312, Address: 0x10276d8, Func Offset: 0x28
	// Line 1315, Address: 0x10276f8, Func Offset: 0x48
	// Line 1316, Address: 0x102770c, Func Offset: 0x5c
	// Line 1317, Address: 0x1027720, Func Offset: 0x70
	// Line 1318, Address: 0x1027734, Func Offset: 0x84
	// Line 1320, Address: 0x1027748, Func Offset: 0x98
	// Line 1321, Address: 0x1027754, Func Offset: 0xa4
	// Line 1322, Address: 0x1027768, Func Offset: 0xb8
	// Func End, Address: 0x1027778, Func Offset: 0xc8
}

// 
// Start address: 0x1027780
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1342, Address: 0x1027780, Func Offset: 0
	// Line 1346, Address: 0x10277a8, Func Offset: 0x28
	// Line 1349, Address: 0x10277c8, Func Offset: 0x48
	// Line 1350, Address: 0x10277dc, Func Offset: 0x5c
	// Line 1351, Address: 0x10277ec, Func Offset: 0x6c
	// Line 1352, Address: 0x1027800, Func Offset: 0x80
	// Line 1354, Address: 0x1027810, Func Offset: 0x90
	// Line 1355, Address: 0x102781c, Func Offset: 0x9c
	// Line 1356, Address: 0x1027830, Func Offset: 0xb0
	// Func End, Address: 0x1027840, Func Offset: 0xc0
}

// 
// Start address: 0x1027840
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
	// Line 1375, Address: 0x1027840, Func Offset: 0
	// Line 1376, Address: 0x1027874, Func Offset: 0x34
	// Line 1381, Address: 0x1027878, Func Offset: 0x38
	// Line 1383, Address: 0x1027888, Func Offset: 0x48
	// Line 1384, Address: 0x102788c, Func Offset: 0x4c
	// Line 1385, Address: 0x1027894, Func Offset: 0x54
	// Line 1387, Address: 0x10278a4, Func Offset: 0x64
	// Line 1389, Address: 0x10278a8, Func Offset: 0x68
	// Line 1390, Address: 0x10278b0, Func Offset: 0x70
	// Line 1393, Address: 0x10278b8, Func Offset: 0x78
	// Line 1394, Address: 0x10278c0, Func Offset: 0x80
	// Line 1395, Address: 0x10278cc, Func Offset: 0x8c
	// Line 1397, Address: 0x10278d8, Func Offset: 0x98
	// Line 1398, Address: 0x10278e0, Func Offset: 0xa0
	// Line 1399, Address: 0x10278e8, Func Offset: 0xa8
	// Line 1400, Address: 0x10278f0, Func Offset: 0xb0
	// Line 1402, Address: 0x10278fc, Func Offset: 0xbc
	// Line 1403, Address: 0x1027904, Func Offset: 0xc4
	// Line 1404, Address: 0x102790c, Func Offset: 0xcc
	// Line 1405, Address: 0x1027914, Func Offset: 0xd4
	// Line 1407, Address: 0x1027920, Func Offset: 0xe0
	// Line 1408, Address: 0x1027928, Func Offset: 0xe8
	// Line 1409, Address: 0x1027930, Func Offset: 0xf0
	// Line 1412, Address: 0x1027938, Func Offset: 0xf8
	// Line 1413, Address: 0x1027940, Func Offset: 0x100
	// Line 1416, Address: 0x1027948, Func Offset: 0x108
	// Line 1417, Address: 0x102798c, Func Offset: 0x14c
	// Line 1418, Address: 0x10279d0, Func Offset: 0x190
	// Line 1419, Address: 0x1027a14, Func Offset: 0x1d4
	// Line 1421, Address: 0x1027a58, Func Offset: 0x218
	// Func End, Address: 0x1027a88, Func Offset: 0x248
}

// 
// Start address: 0x1027a90
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1439, Address: 0x1027a90, Func Offset: 0
	// Line 1440, Address: 0x1027ab0, Func Offset: 0x20
	// Line 1441, Address: 0x1027ad0, Func Offset: 0x40
	// Func End, Address: 0x1027ae0, Func Offset: 0x50
}

// 
// Start address: 0x1027ae0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1443, Address: 0x1027ae0, Func Offset: 0
	// Line 1444, Address: 0x1027b00, Func Offset: 0x20
	// Line 1445, Address: 0x1027b04, Func Offset: 0x24
	// Line 1446, Address: 0x1027b24, Func Offset: 0x44
	// Func End, Address: 0x1027b34, Func Offset: 0x54
}

// 
// Start address: 0x1027b40
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1453, Address: 0x1027b40, Func Offset: 0
	// Line 1459, Address: 0x1027b70, Func Offset: 0x30
	// Line 1460, Address: 0x1027b80, Func Offset: 0x40
	// Line 1466, Address: 0x1027b90, Func Offset: 0x50
	// Line 1467, Address: 0x1027bac, Func Offset: 0x6c
	// Line 1468, Address: 0x1027bb0, Func Offset: 0x70
	// Line 1469, Address: 0x1027bcc, Func Offset: 0x8c
	// Line 1470, Address: 0x1027bd0, Func Offset: 0x90
	// Line 1471, Address: 0x1027bf0, Func Offset: 0xb0
	// Line 1472, Address: 0x1027bf8, Func Offset: 0xb8
	// Line 1473, Address: 0x1027c18, Func Offset: 0xd8
	// Line 1474, Address: 0x1027c20, Func Offset: 0xe0
	// Line 1475, Address: 0x1027c68, Func Offset: 0x128
	// Line 1477, Address: 0x1027c74, Func Offset: 0x134
	// Line 1479, Address: 0x1027c90, Func Offset: 0x150
	// Line 1484, Address: 0x1027c98, Func Offset: 0x158
	// Line 1485, Address: 0x1027ca4, Func Offset: 0x164
	// Line 1488, Address: 0x1027cb0, Func Offset: 0x170
	// Line 1489, Address: 0x1027cb8, Func Offset: 0x178
	// Line 1490, Address: 0x1027cd8, Func Offset: 0x198
	// Line 1491, Address: 0x1027cf4, Func Offset: 0x1b4
	// Line 1492, Address: 0x1027cfc, Func Offset: 0x1bc
	// Line 1493, Address: 0x1027d1c, Func Offset: 0x1dc
	// Line 1495, Address: 0x1027d38, Func Offset: 0x1f8
	// Line 1496, Address: 0x1027d40, Func Offset: 0x200
	// Line 1497, Address: 0x1027d48, Func Offset: 0x208
	// Line 1498, Address: 0x1027d54, Func Offset: 0x214
	// Line 1499, Address: 0x1027d6c, Func Offset: 0x22c
	// Line 1501, Address: 0x1027d7c, Func Offset: 0x23c
	// Line 1504, Address: 0x1027d88, Func Offset: 0x248
	// Line 1505, Address: 0x1027d90, Func Offset: 0x250
	// Line 1506, Address: 0x1027d94, Func Offset: 0x254
	// Func End, Address: 0x1027db4, Func Offset: 0x274
}

// 
// Start address: 0x1027dc0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1526, Address: 0x1027dc0, Func Offset: 0
	// Line 1534, Address: 0x1027de8, Func Offset: 0x28
	// Line 1535, Address: 0x1027e4c, Func Offset: 0x8c
	// Line 1541, Address: 0x1027e54, Func Offset: 0x94
	// Line 1542, Address: 0x1027e5c, Func Offset: 0x9c
	// Line 1543, Address: 0x1027e7c, Func Offset: 0xbc
	// Line 1544, Address: 0x1027e98, Func Offset: 0xd8
	// Line 1545, Address: 0x1027ea0, Func Offset: 0xe0
	// Line 1546, Address: 0x1027ec0, Func Offset: 0x100
	// Line 1549, Address: 0x1027edc, Func Offset: 0x11c
	// Line 1550, Address: 0x1027ee4, Func Offset: 0x124
	// Line 1551, Address: 0x1027eec, Func Offset: 0x12c
	// Line 1552, Address: 0x1027ef8, Func Offset: 0x138
	// Line 1553, Address: 0x1027f10, Func Offset: 0x150
	// Line 1554, Address: 0x1027f18, Func Offset: 0x158
	// Line 1559, Address: 0x1027f28, Func Offset: 0x168
	// Line 1562, Address: 0x1027f34, Func Offset: 0x174
	// Line 1563, Address: 0x1027f3c, Func Offset: 0x17c
	// Line 1564, Address: 0x1027f40, Func Offset: 0x180
	// Func End, Address: 0x1027f5c, Func Offset: 0x19c
}

// 
// Start address: 0x1027f60
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1578, Address: 0x1027f60, Func Offset: 0
	// Line 1585, Address: 0x1027f7c, Func Offset: 0x1c
	// Line 1586, Address: 0x1027f80, Func Offset: 0x20
	// Line 1587, Address: 0x1027f88, Func Offset: 0x28
	// Line 1588, Address: 0x1027fac, Func Offset: 0x4c
	// Line 1589, Address: 0x1027fb8, Func Offset: 0x58
	// Line 1590, Address: 0x1027fd0, Func Offset: 0x70
	// Line 1591, Address: 0x1027fe4, Func Offset: 0x84
	// Line 1596, Address: 0x1027ffc, Func Offset: 0x9c
	// Func End, Address: 0x1028014, Func Offset: 0xb4
}

// 
// Start address: 0x1028020
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1610, Address: 0x1028020, Func Offset: 0
	// Line 1611, Address: 0x102802c, Func Offset: 0xc
	// Line 1612, Address: 0x1028058, Func Offset: 0x38
	// Line 1613, Address: 0x10280a4, Func Offset: 0x84
	// Line 1614, Address: 0x10280d0, Func Offset: 0xb0
	// Line 1616, Address: 0x102811c, Func Offset: 0xfc
	// Line 1622, Address: 0x1028128, Func Offset: 0x108
	// Line 1623, Address: 0x102812c, Func Offset: 0x10c
	// Func End, Address: 0x1028138, Func Offset: 0x118
}

// 
// Start address: 0x1028140
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1640, Address: 0x1028140, Func Offset: 0
	// Line 1641, Address: 0x102815c, Func Offset: 0x1c
	// Line 1643, Address: 0x1028178, Func Offset: 0x38
	// Func End, Address: 0x1028188, Func Offset: 0x48
}

// 
// Start address: 0x1028190
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1645, Address: 0x1028190, Func Offset: 0
	// Line 1646, Address: 0x10281ac, Func Offset: 0x1c
	// Line 1647, Address: 0x10281b0, Func Offset: 0x20
	// Line 1649, Address: 0x10281cc, Func Offset: 0x3c
	// Func End, Address: 0x10281dc, Func Offset: 0x4c
}

// 
// Start address: 0x10281e0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1651, Address: 0x10281e0, Func Offset: 0
	// Line 1652, Address: 0x10281f4, Func Offset: 0x14
	// Line 1654, Address: 0x1028210, Func Offset: 0x30
	// Func End, Address: 0x1028220, Func Offset: 0x40
}

// 
// Start address: 0x1028220
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1656, Address: 0x1028220, Func Offset: 0
	// Line 1657, Address: 0x102823c, Func Offset: 0x1c
	// Line 1659, Address: 0x1028258, Func Offset: 0x38
	// Func End, Address: 0x1028268, Func Offset: 0x48
}

// 
// Start address: 0x1028270
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1661, Address: 0x1028270, Func Offset: 0
	// Line 1662, Address: 0x1028288, Func Offset: 0x18
	// Line 1663, Address: 0x1028298, Func Offset: 0x28
	// Line 1664, Address: 0x10282a8, Func Offset: 0x38
	// Line 1665, Address: 0x10282b4, Func Offset: 0x44
	// Line 1667, Address: 0x10282c0, Func Offset: 0x50
	// Line 1668, Address: 0x10282ec, Func Offset: 0x7c
	// Line 1671, Address: 0x1028318, Func Offset: 0xa8
	// Func End, Address: 0x1028324, Func Offset: 0xb4
}

// 
// Start address: 0x1028330
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1687, Address: 0x1028330, Func Offset: 0
	// Line 1692, Address: 0x1028348, Func Offset: 0x18
	// Line 1693, Address: 0x1028354, Func Offset: 0x24
	// Line 1694, Address: 0x1028360, Func Offset: 0x30
	// Line 1695, Address: 0x1028368, Func Offset: 0x38
	// Line 1696, Address: 0x102836c, Func Offset: 0x3c
	// Line 1700, Address: 0x1028384, Func Offset: 0x54
	// Line 1701, Address: 0x102838c, Func Offset: 0x5c
	// Line 1702, Address: 0x1028390, Func Offset: 0x60
	// Line 1704, Address: 0x10283a0, Func Offset: 0x70
	// Func End, Address: 0x10283c0, Func Offset: 0x90
}

// 
// Start address: 0x10283c0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1707, Address: 0x10283c0, Func Offset: 0
	// Line 1708, Address: 0x10283d8, Func Offset: 0x18
	// Line 1709, Address: 0x10283f8, Func Offset: 0x38
	// Func End, Address: 0x1028408, Func Offset: 0x48
}

// 
// Start address: 0x1028410
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1714, Address: 0x1028410, Func Offset: 0
	// Line 1718, Address: 0x1028430, Func Offset: 0x20
	// Line 1721, Address: 0x102844c, Func Offset: 0x3c
	// Line 1725, Address: 0x1028474, Func Offset: 0x64
	// Line 1726, Address: 0x1028480, Func Offset: 0x70
	// Line 1728, Address: 0x10284a8, Func Offset: 0x98
	// Func End, Address: 0x10284b8, Func Offset: 0xa8
}

// 
// Start address: 0x10284c0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	// Line 1734, Address: 0x10284c0, Func Offset: 0
	// Line 1739, Address: 0x10284dc, Func Offset: 0x1c
	// Line 1740, Address: 0x10284e4, Func Offset: 0x24
	// Line 1743, Address: 0x10284ec, Func Offset: 0x2c
	// Line 1744, Address: 0x10284f0, Func Offset: 0x30
	// Line 1745, Address: 0x10284fc, Func Offset: 0x3c
	// Line 1746, Address: 0x1028508, Func Offset: 0x48
	// Line 1747, Address: 0x102851c, Func Offset: 0x5c
	// Line 1748, Address: 0x102853c, Func Offset: 0x7c
	// Line 1749, Address: 0x1028544, Func Offset: 0x84
	// Line 1750, Address: 0x1028568, Func Offset: 0xa8
	// Func End, Address: 0x1028584, Func Offset: 0xc4
}

// 
// Start address: 0x1028590
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1772, Address: 0x1028590, Func Offset: 0
	// Line 1777, Address: 0x10285b8, Func Offset: 0x28
	// Line 1778, Address: 0x10285c8, Func Offset: 0x38
	// Line 1780, Address: 0x10285e4, Func Offset: 0x54
	// Line 1781, Address: 0x1028608, Func Offset: 0x78
	// Line 1782, Address: 0x1028630, Func Offset: 0xa0
	// Line 1783, Address: 0x102863c, Func Offset: 0xac
	// Line 1784, Address: 0x1028644, Func Offset: 0xb4
	// Line 1787, Address: 0x1028660, Func Offset: 0xd0
	// Line 1791, Address: 0x1028688, Func Offset: 0xf8
	// Line 1794, Address: 0x1028690, Func Offset: 0x100
	// Line 1795, Address: 0x1028694, Func Offset: 0x104
	// Line 1799, Address: 0x10286b0, Func Offset: 0x120
	// Line 1806, Address: 0x10286d8, Func Offset: 0x148
	// Func End, Address: 0x10286f4, Func Offset: 0x164
}

// 
// Start address: 0x1028700
void mapinit()
{
	// Line 1810, Address: 0x1028700, Func Offset: 0
	// Line 1812, Address: 0x1028708, Func Offset: 0x8
	// Line 1813, Address: 0x102871c, Func Offset: 0x1c
	// Line 1815, Address: 0x1028730, Func Offset: 0x30
	// Line 1816, Address: 0x1028748, Func Offset: 0x48
	// Line 1817, Address: 0x1028768, Func Offset: 0x68
	// Func End, Address: 0x1028778, Func Offset: 0x78
}

// 
// Start address: 0x1028780
void mapset()
{
	// Line 1828, Address: 0x1028780, Func Offset: 0
	// Func End, Address: 0x1028788, Func Offset: 0x8
}

