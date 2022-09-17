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

typedef int(*type_4)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef unsigned short type_2[6];
typedef unsigned char type_3[65];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef unsigned char type_7[2];
typedef int type_8[11];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef unsigned char type_12[64];
typedef unsigned char type_13[64][8];
typedef _anon2* type_14[8];
typedef short type_15[256];
typedef int type_16[16];
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
// Start address: 0x1025220
void enecginit()
{
	// Line 123, Address: 0x1025220, Func Offset: 0
	// Func End, Address: 0x1025228, Func Offset: 0x8
}

// 
// Start address: 0x1025230
void divdevset()
{
	// Line 127, Address: 0x1025230, Func Offset: 0
	// Func End, Address: 0x1025238, Func Offset: 0x8
}

// 
// Start address: 0x1025240
void scr_set()
{
	int i;
	// Line 176, Address: 0x1025240, Func Offset: 0
	// Line 179, Address: 0x102524c, Func Offset: 0xc
	// Line 181, Address: 0x1025294, Func Offset: 0x54
	// Line 182, Address: 0x1025298, Func Offset: 0x58
	// Line 183, Address: 0x10252bc, Func Offset: 0x7c
	// Line 184, Address: 0x10252d8, Func Offset: 0x98
	// Line 185, Address: 0x10252fc, Func Offset: 0xbc
	// Line 186, Address: 0x1025318, Func Offset: 0xd8
	// Line 187, Address: 0x102533c, Func Offset: 0xfc
	// Line 188, Address: 0x1025358, Func Offset: 0x118
	// Line 189, Address: 0x102537c, Func Offset: 0x13c
	// Line 190, Address: 0x1025398, Func Offset: 0x158
	// Line 192, Address: 0x10253bc, Func Offset: 0x17c
	// Line 193, Address: 0x10253e0, Func Offset: 0x1a0
	// Line 194, Address: 0x10253ec, Func Offset: 0x1ac
	// Line 196, Address: 0x10253f8, Func Offset: 0x1b8
	// Line 197, Address: 0x102541c, Func Offset: 0x1dc
	// Line 199, Address: 0x1025428, Func Offset: 0x1e8
	// Line 200, Address: 0x1025430, Func Offset: 0x1f0
	// Func End, Address: 0x1025444, Func Offset: 0x204
}

// 
// Start address: 0x1025450
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 204, Address: 0x1025450, Func Offset: 0
	// Line 205, Address: 0x1025464, Func Offset: 0x14
	// Line 209, Address: 0x1025480, Func Offset: 0x30
	// Line 217, Address: 0x10254ac, Func Offset: 0x5c
	// Line 219, Address: 0x10254c0, Func Offset: 0x70
	// Line 220, Address: 0x10254c8, Func Offset: 0x78
	// Line 221, Address: 0x10254d8, Func Offset: 0x88
	// Line 222, Address: 0x10254e8, Func Offset: 0x98
	// Line 223, Address: 0x10254fc, Func Offset: 0xac
	// Line 227, Address: 0x1025504, Func Offset: 0xb4
	// Line 228, Address: 0x1025508, Func Offset: 0xb8
	// Line 229, Address: 0x102552c, Func Offset: 0xdc
	// Line 232, Address: 0x1025550, Func Offset: 0x100
	// Line 233, Address: 0x1025564, Func Offset: 0x114
	// Line 234, Address: 0x1025570, Func Offset: 0x120
	// Line 236, Address: 0x1025578, Func Offset: 0x128
	// Line 240, Address: 0x102557c, Func Offset: 0x12c
	// Line 241, Address: 0x10255a0, Func Offset: 0x150
	// Line 243, Address: 0x10255b0, Func Offset: 0x160
	// Line 245, Address: 0x10255b8, Func Offset: 0x168
	// Line 246, Address: 0x10255cc, Func Offset: 0x17c
	// Line 247, Address: 0x10255d8, Func Offset: 0x188
	// Line 249, Address: 0x10255e0, Func Offset: 0x190
	// Line 252, Address: 0x10255e4, Func Offset: 0x194
	// Line 253, Address: 0x1025608, Func Offset: 0x1b8
	// Line 256, Address: 0x1025618, Func Offset: 0x1c8
	// Line 258, Address: 0x1025620, Func Offset: 0x1d0
	// Line 260, Address: 0x1025630, Func Offset: 0x1e0
	// Line 261, Address: 0x1025634, Func Offset: 0x1e4
	// Line 262, Address: 0x102564c, Func Offset: 0x1fc
	// Line 263, Address: 0x1025664, Func Offset: 0x214
	// Line 264, Address: 0x102567c, Func Offset: 0x22c
	// Line 267, Address: 0x1025694, Func Offset: 0x244
	// Func End, Address: 0x10256b0, Func Offset: 0x260
}

// 
// Start address: 0x10256b0
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 271, Address: 0x10256b0, Func Offset: 0
	// Line 275, Address: 0x10256bc, Func Offset: 0xc
	// Line 276, Address: 0x10256c0, Func Offset: 0x10
	// Line 277, Address: 0x10256c8, Func Offset: 0x18
	// Line 278, Address: 0x10256d8, Func Offset: 0x28
	// Line 279, Address: 0x10256e4, Func Offset: 0x34
	// Line 281, Address: 0x10256f0, Func Offset: 0x40
	// Line 282, Address: 0x1025728, Func Offset: 0x78
	// Line 283, Address: 0x1025774, Func Offset: 0xc4
	// Line 284, Address: 0x10257a0, Func Offset: 0xf0
	// Func End, Address: 0x10257ac, Func Offset: 0xfc
}

// 
// Start address: 0x10257b0
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 288, Address: 0x10257b0, Func Offset: 0
	// Line 293, Address: 0x10257c0, Func Offset: 0x10
	// Line 296, Address: 0x10257d0, Func Offset: 0x20
	// Line 297, Address: 0x10257fc, Func Offset: 0x4c
	// Line 298, Address: 0x1025804, Func Offset: 0x54
	// Line 299, Address: 0x102580c, Func Offset: 0x5c
	// Line 301, Address: 0x1025814, Func Offset: 0x64
	// Line 302, Address: 0x1025824, Func Offset: 0x74
	// Line 306, Address: 0x1025834, Func Offset: 0x84
	// Line 307, Address: 0x102586c, Func Offset: 0xbc
	// Line 308, Address: 0x10258a4, Func Offset: 0xf4
	// Line 310, Address: 0x10258dc, Func Offset: 0x12c
	// Line 311, Address: 0x10258e0, Func Offset: 0x130
	// Line 313, Address: 0x10258ec, Func Offset: 0x13c
	// Line 315, Address: 0x10258f8, Func Offset: 0x148
	// Line 316, Address: 0x1025908, Func Offset: 0x158
	// Line 317, Address: 0x1025918, Func Offset: 0x168
	// Line 318, Address: 0x1025928, Func Offset: 0x178
	// Line 319, Address: 0x102595c, Func Offset: 0x1ac
	// Line 320, Address: 0x1025964, Func Offset: 0x1b4
	// Line 322, Address: 0x102596c, Func Offset: 0x1bc
	// Line 325, Address: 0x1025970, Func Offset: 0x1c0
	// Line 327, Address: 0x1025980, Func Offset: 0x1d0
	// Line 329, Address: 0x102598c, Func Offset: 0x1dc
	// Line 330, Address: 0x10259bc, Func Offset: 0x20c
	// Line 331, Address: 0x10259c0, Func Offset: 0x210
	// Line 333, Address: 0x10259d0, Func Offset: 0x220
	// Line 335, Address: 0x10259e0, Func Offset: 0x230
	// Line 337, Address: 0x10259ec, Func Offset: 0x23c
	// Line 338, Address: 0x1025a1c, Func Offset: 0x26c
	// Line 339, Address: 0x1025a20, Func Offset: 0x270
	// Line 341, Address: 0x1025a30, Func Offset: 0x280
	// Line 343, Address: 0x1025a3c, Func Offset: 0x28c
	// Line 344, Address: 0x1025a6c, Func Offset: 0x2bc
	// Line 345, Address: 0x1025a70, Func Offset: 0x2c0
	// Line 351, Address: 0x1025a80, Func Offset: 0x2d0
	// Line 352, Address: 0x1025a8c, Func Offset: 0x2dc
	// Line 353, Address: 0x1025a98, Func Offset: 0x2e8
	// Line 354, Address: 0x1025aa4, Func Offset: 0x2f4
	// Line 355, Address: 0x1025ad8, Func Offset: 0x328
	// Func End, Address: 0x1025af0, Func Offset: 0x340
}

// 
// Start address: 0x1025af0
int z71aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl[16];
	// Line 359, Address: 0x1025af0, Func Offset: 0
	// Line 363, Address: 0x1025b04, Func Offset: 0x14
	// Line 369, Address: 0x1025b38, Func Offset: 0x48
	// Line 370, Address: 0x1025b60, Func Offset: 0x70
	// Line 371, Address: 0x1025b64, Func Offset: 0x74
	// Line 372, Address: 0x1025b80, Func Offset: 0x90
	// Line 373, Address: 0x1025b84, Func Offset: 0x94
	// Line 374, Address: 0x1025b88, Func Offset: 0x98
	// Line 375, Address: 0x1025b94, Func Offset: 0xa4
	// Line 376, Address: 0x1025ba0, Func Offset: 0xb0
	// Line 379, Address: 0x1025bac, Func Offset: 0xbc
	// Line 382, Address: 0x1025bb8, Func Offset: 0xc8
	// Line 383, Address: 0x1025bc4, Func Offset: 0xd4
	// Line 384, Address: 0x1025bf4, Func Offset: 0x104
	// Line 385, Address: 0x1025c18, Func Offset: 0x128
	// Line 386, Address: 0x1025c3c, Func Offset: 0x14c
	// Line 387, Address: 0x1025c48, Func Offset: 0x158
	// Line 388, Address: 0x1025c6c, Func Offset: 0x17c
	// Line 389, Address: 0x1025c7c, Func Offset: 0x18c
	// Line 390, Address: 0x1025c88, Func Offset: 0x198
	// Line 391, Address: 0x1025c8c, Func Offset: 0x19c
	// Func End, Address: 0x1025ca4, Func Offset: 0x1b4
}

// 
// Start address: 0x1025cb0
int z71aline0(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl0[11];
	// Line 394, Address: 0x1025cb0, Func Offset: 0
	// Line 398, Address: 0x1025cc4, Func Offset: 0x14
	// Line 404, Address: 0x1025cf0, Func Offset: 0x40
	// Line 405, Address: 0x1025d14, Func Offset: 0x64
	// Line 406, Address: 0x1025d18, Func Offset: 0x68
	// Line 407, Address: 0x1025d30, Func Offset: 0x80
	// Line 408, Address: 0x1025d34, Func Offset: 0x84
	// Line 409, Address: 0x1025d38, Func Offset: 0x88
	// Line 410, Address: 0x1025d44, Func Offset: 0x94
	// Line 411, Address: 0x1025d68, Func Offset: 0xb8
	// Line 412, Address: 0x1025d74, Func Offset: 0xc4
	// Line 413, Address: 0x1025d98, Func Offset: 0xe8
	// Line 416, Address: 0x1025da4, Func Offset: 0xf4
	// Line 419, Address: 0x1025db0, Func Offset: 0x100
	// Line 420, Address: 0x1025de0, Func Offset: 0x130
	// Line 421, Address: 0x1025dec, Func Offset: 0x13c
	// Line 422, Address: 0x1025e10, Func Offset: 0x160
	// Line 423, Address: 0x1025e34, Func Offset: 0x184
	// Line 424, Address: 0x1025e40, Func Offset: 0x190
	// Line 425, Address: 0x1025e64, Func Offset: 0x1b4
	// Line 426, Address: 0x1025e74, Func Offset: 0x1c4
	// Line 427, Address: 0x1025e78, Func Offset: 0x1c8
	// Func End, Address: 0x1025e90, Func Offset: 0x1e0
}

// 
// Start address: 0x1025e90
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	int i;
	int j;
	// Line 432, Address: 0x1025e90, Func Offset: 0
	// Line 440, Address: 0x1025ea8, Func Offset: 0x18
	// Line 449, Address: 0x1025eb0, Func Offset: 0x20
	// Line 450, Address: 0x1025ebc, Func Offset: 0x2c
	// Line 451, Address: 0x1025ec0, Func Offset: 0x30
	// Line 453, Address: 0x1025ee8, Func Offset: 0x58
	// Line 454, Address: 0x1025ef4, Func Offset: 0x64
	// Line 456, Address: 0x1025efc, Func Offset: 0x6c
	// Line 457, Address: 0x1025f04, Func Offset: 0x74
	// Line 458, Address: 0x1025f08, Func Offset: 0x78
	// Line 459, Address: 0x1025f0c, Func Offset: 0x7c
	// Line 460, Address: 0x1025f18, Func Offset: 0x88
	// Line 462, Address: 0x1025f24, Func Offset: 0x94
	// Line 463, Address: 0x1025f4c, Func Offset: 0xbc
	// Line 465, Address: 0x1025f58, Func Offset: 0xc8
	// Line 466, Address: 0x1025f60, Func Offset: 0xd0
	// Line 467, Address: 0x1025f64, Func Offset: 0xd4
	// Line 468, Address: 0x1025f74, Func Offset: 0xe4
	// Line 469, Address: 0x1025f84, Func Offset: 0xf4
	// Func End, Address: 0x1025f9c, Func Offset: 0x10c
}

// 
// Start address: 0x1025fa0
void scroll_h()
{
	unsigned short wD4;
	// Line 481, Address: 0x1025fa0, Func Offset: 0
	// Line 484, Address: 0x1025fac, Func Offset: 0xc
	// Line 485, Address: 0x1025fb8, Func Offset: 0x18
	// Line 486, Address: 0x1025fc0, Func Offset: 0x20
	// Line 487, Address: 0x1025ff4, Func Offset: 0x54
	// Line 488, Address: 0x1026008, Func Offset: 0x68
	// Line 489, Address: 0x1026034, Func Offset: 0x94
	// Line 490, Address: 0x1026048, Func Offset: 0xa8
	// Line 493, Address: 0x1026050, Func Offset: 0xb0
	// Line 498, Address: 0x1026064, Func Offset: 0xc4
	// Func End, Address: 0x1026078, Func Offset: 0xd8
}

// 
// Start address: 0x1026080
void scrh_move()
{
	unsigned short wD0;
	// Line 500, Address: 0x1026080, Func Offset: 0
	// Line 503, Address: 0x102608c, Func Offset: 0xc
	// Line 504, Address: 0x1026098, Func Offset: 0x18
	// Line 505, Address: 0x10260ac, Func Offset: 0x2c
	// Line 506, Address: 0x10260c0, Func Offset: 0x40
	// Line 508, Address: 0x10260cc, Func Offset: 0x4c
	// Line 509, Address: 0x10260d4, Func Offset: 0x54
	// Line 510, Address: 0x10260dc, Func Offset: 0x5c
	// Line 511, Address: 0x10260f4, Func Offset: 0x74
	// Line 512, Address: 0x1026100, Func Offset: 0x80
	// Line 514, Address: 0x1026108, Func Offset: 0x88
	// Line 517, Address: 0x1026114, Func Offset: 0x94
	// Func End, Address: 0x1026128, Func Offset: 0xa8
}

// 
// Start address: 0x1026130
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 520, Address: 0x1026130, Func Offset: 0
	// Line 523, Address: 0x102613c, Func Offset: 0xc
	// Line 524, Address: 0x102615c, Func Offset: 0x2c
	// Line 527, Address: 0x1026164, Func Offset: 0x34
	// Line 528, Address: 0x102617c, Func Offset: 0x4c
	// Line 529, Address: 0x10261ac, Func Offset: 0x7c
	// Line 532, Address: 0x10261b8, Func Offset: 0x88
	// Line 533, Address: 0x10261c0, Func Offset: 0x90
	// Line 534, Address: 0x10261d4, Func Offset: 0xa4
	// Line 535, Address: 0x1026204, Func Offset: 0xd4
	// Line 536, Address: 0x1026210, Func Offset: 0xe0
	// Line 538, Address: 0x1026218, Func Offset: 0xe8
	// Func End, Address: 0x1026228, Func Offset: 0xf8
}

// 
// Start address: 0x1026230
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 541, Address: 0x1026230, Func Offset: 0
	// Line 544, Address: 0x102623c, Func Offset: 0xc
	// Line 545, Address: 0x102625c, Func Offset: 0x2c
	// Line 548, Address: 0x1026264, Func Offset: 0x34
	// Line 549, Address: 0x102627c, Func Offset: 0x4c
	// Line 550, Address: 0x10262ac, Func Offset: 0x7c
	// Line 553, Address: 0x10262b8, Func Offset: 0x88
	// Line 554, Address: 0x10262c0, Func Offset: 0x90
	// Line 555, Address: 0x10262d4, Func Offset: 0xa4
	// Line 556, Address: 0x1026304, Func Offset: 0xd4
	// Line 557, Address: 0x1026310, Func Offset: 0xe0
	// Line 559, Address: 0x1026318, Func Offset: 0xe8
	// Func End, Address: 0x1026328, Func Offset: 0xf8
}

// 
// Start address: 0x1026330
void scroll_v()
{
	unsigned short wD0;
	// Line 578, Address: 0x1026330, Func Offset: 0
	// Line 581, Address: 0x102633c, Func Offset: 0xc
	// Line 582, Address: 0x1026368, Func Offset: 0x38
	// Line 583, Address: 0x1026380, Func Offset: 0x50
	// Line 586, Address: 0x1026388, Func Offset: 0x58
	// Line 587, Address: 0x10263a0, Func Offset: 0x70
	// Line 588, Address: 0x10263a8, Func Offset: 0x78
	// Line 589, Address: 0x10263c8, Func Offset: 0x98
	// Line 590, Address: 0x10263dc, Func Offset: 0xac
	// Line 591, Address: 0x10263e8, Func Offset: 0xb8
	// Line 593, Address: 0x10263f0, Func Offset: 0xc0
	// Line 594, Address: 0x1026404, Func Offset: 0xd4
	// Line 595, Address: 0x1026414, Func Offset: 0xe4
	// Line 596, Address: 0x102641c, Func Offset: 0xec
	// Line 597, Address: 0x1026428, Func Offset: 0xf8
	// Line 599, Address: 0x1026430, Func Offset: 0x100
	// Line 600, Address: 0x1026438, Func Offset: 0x108
	// Line 601, Address: 0x102644c, Func Offset: 0x11c
	// Line 602, Address: 0x1026454, Func Offset: 0x124
	// Line 608, Address: 0x102645c, Func Offset: 0x12c
	// Line 609, Address: 0x1026470, Func Offset: 0x140
	// Line 610, Address: 0x1026478, Func Offset: 0x148
	// Line 611, Address: 0x1026484, Func Offset: 0x154
	// Line 613, Address: 0x102648c, Func Offset: 0x15c
	// Line 614, Address: 0x10264a0, Func Offset: 0x170
	// Line 615, Address: 0x10264a8, Func Offset: 0x178
	// Line 620, Address: 0x10264b0, Func Offset: 0x180
	// Line 622, Address: 0x10264b8, Func Offset: 0x188
	// Func End, Address: 0x10264cc, Func Offset: 0x19c
}

// 
// Start address: 0x10264d0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 628, Address: 0x10264d0, Func Offset: 0
	// Line 631, Address: 0x10264e0, Func Offset: 0x10
	// Line 632, Address: 0x10264fc, Func Offset: 0x2c
	// Line 633, Address: 0x1026508, Func Offset: 0x38
	// Line 636, Address: 0x1026510, Func Offset: 0x40
	// Line 637, Address: 0x102651c, Func Offset: 0x4c
	// Line 638, Address: 0x1026534, Func Offset: 0x64
	// Line 641, Address: 0x1026550, Func Offset: 0x80
	// Line 642, Address: 0x1026560, Func Offset: 0x90
	// Line 643, Address: 0x102656c, Func Offset: 0x9c
	// Line 645, Address: 0x1026574, Func Offset: 0xa4
	// Line 646, Address: 0x1026594, Func Offset: 0xc4
	// Line 647, Address: 0x10265a0, Func Offset: 0xd0
	// Line 648, Address: 0x10265a8, Func Offset: 0xd8
	// Line 649, Address: 0x10265c8, Func Offset: 0xf8
	// Line 650, Address: 0x10265d4, Func Offset: 0x104
	// Line 652, Address: 0x10265dc, Func Offset: 0x10c
	// Line 656, Address: 0x10265e8, Func Offset: 0x118
	// Func End, Address: 0x10265fc, Func Offset: 0x12c
}

// 
// Start address: 0x1026600
void sv_move_main1(unsigned short wD0)
{
	// Line 660, Address: 0x1026600, Func Offset: 0
	// Line 662, Address: 0x102660c, Func Offset: 0xc
	// Line 663, Address: 0x102662c, Func Offset: 0x2c
	// Line 664, Address: 0x1026638, Func Offset: 0x38
	// Line 665, Address: 0x1026640, Func Offset: 0x40
	// Line 666, Address: 0x1026660, Func Offset: 0x60
	// Line 667, Address: 0x102666c, Func Offset: 0x6c
	// Line 669, Address: 0x1026674, Func Offset: 0x74
	// Line 672, Address: 0x1026680, Func Offset: 0x80
	// Func End, Address: 0x1026690, Func Offset: 0x90
}

// 
// Start address: 0x1026690
void sv_move_main2(unsigned short wD0)
{
	// Line 675, Address: 0x1026690, Func Offset: 0
	// Line 677, Address: 0x102669c, Func Offset: 0xc
	// Line 678, Address: 0x10266bc, Func Offset: 0x2c
	// Line 679, Address: 0x10266c8, Func Offset: 0x38
	// Line 680, Address: 0x10266d0, Func Offset: 0x40
	// Line 681, Address: 0x10266f0, Func Offset: 0x60
	// Line 682, Address: 0x10266fc, Func Offset: 0x6c
	// Line 684, Address: 0x1026704, Func Offset: 0x74
	// Line 687, Address: 0x1026710, Func Offset: 0x80
	// Func End, Address: 0x1026720, Func Offset: 0x90
}

// 
// Start address: 0x1026720
void sv_move_sub2()
{
	// Line 690, Address: 0x1026720, Func Offset: 0
	// Line 691, Address: 0x1026728, Func Offset: 0x8
	// Line 692, Address: 0x1026730, Func Offset: 0x10
	// Line 693, Address: 0x102673c, Func Offset: 0x1c
	// Func End, Address: 0x102674c, Func Offset: 0x2c
}

// 
// Start address: 0x1026750
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 696, Address: 0x1026750, Func Offset: 0
	// Line 699, Address: 0x102675c, Func Offset: 0xc
	// Line 700, Address: 0x1026760, Func Offset: 0x10
	// Line 701, Address: 0x1026768, Func Offset: 0x18
	// Line 702, Address: 0x1026784, Func Offset: 0x34
	// Line 703, Address: 0x10267a0, Func Offset: 0x50
	// Line 704, Address: 0x10267ac, Func Offset: 0x5c
	// Line 706, Address: 0x10267b4, Func Offset: 0x64
	// Line 709, Address: 0x10267c0, Func Offset: 0x70
	// Func End, Address: 0x10267d0, Func Offset: 0x80
}

// 
// Start address: 0x10267d0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 714, Address: 0x10267d0, Func Offset: 0
	// Line 718, Address: 0x10267e0, Func Offset: 0x10
	// Line 719, Address: 0x10267fc, Func Offset: 0x2c
	// Line 720, Address: 0x1026808, Func Offset: 0x38
	// Line 722, Address: 0x102681c, Func Offset: 0x4c
	// Line 723, Address: 0x1026824, Func Offset: 0x54
	// Line 724, Address: 0x102682c, Func Offset: 0x5c
	// Line 725, Address: 0x1026830, Func Offset: 0x60
	// Line 726, Address: 0x102683c, Func Offset: 0x6c
	// Func End, Address: 0x1026850, Func Offset: 0x80
}

// 
// Start address: 0x1026850
void scrv_up_ch(_anon2 lD1)
{
	// Line 730, Address: 0x1026850, Func Offset: 0
	// Line 731, Address: 0x102685c, Func Offset: 0xc
	// Line 732, Address: 0x1026884, Func Offset: 0x34
	// Line 733, Address: 0x102689c, Func Offset: 0x4c
	// Line 734, Address: 0x10268a8, Func Offset: 0x58
	// Line 735, Address: 0x10268bc, Func Offset: 0x6c
	// Line 736, Address: 0x10268d0, Func Offset: 0x80
	// Line 737, Address: 0x10268e4, Func Offset: 0x94
	// Line 740, Address: 0x10268ec, Func Offset: 0x9c
	// Line 743, Address: 0x10268f8, Func Offset: 0xa8
	// Line 745, Address: 0x1026904, Func Offset: 0xb4
	// Func End, Address: 0x1026914, Func Offset: 0xc4
}

// 
// Start address: 0x1026920
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 751, Address: 0x1026920, Func Offset: 0
	// Line 755, Address: 0x1026930, Func Offset: 0x10
	// Line 756, Address: 0x1026934, Func Offset: 0x14
	// Line 757, Address: 0x102693c, Func Offset: 0x1c
	// Line 758, Address: 0x1026948, Func Offset: 0x28
	// Line 760, Address: 0x102695c, Func Offset: 0x3c
	// Line 761, Address: 0x1026964, Func Offset: 0x44
	// Line 762, Address: 0x102696c, Func Offset: 0x4c
	// Line 764, Address: 0x1026970, Func Offset: 0x50
	// Line 766, Address: 0x102697c, Func Offset: 0x5c
	// Func End, Address: 0x1026990, Func Offset: 0x70
}

// 
// Start address: 0x1026990
void scrv_down_ch(_anon2 lD1)
{
	// Line 770, Address: 0x1026990, Func Offset: 0
	// Line 771, Address: 0x102699c, Func Offset: 0xc
	// Line 772, Address: 0x10269c4, Func Offset: 0x34
	// Line 773, Address: 0x10269d0, Func Offset: 0x40
	// Line 774, Address: 0x10269e4, Func Offset: 0x54
	// Line 775, Address: 0x10269f8, Func Offset: 0x68
	// Line 776, Address: 0x1026a0c, Func Offset: 0x7c
	// Line 777, Address: 0x1026a20, Func Offset: 0x90
	// Line 779, Address: 0x1026a28, Func Offset: 0x98
	// Line 782, Address: 0x1026a34, Func Offset: 0xa4
	// Line 784, Address: 0x1026a40, Func Offset: 0xb0
	// Func End, Address: 0x1026a50, Func Offset: 0xc0
}

// 
// Start address: 0x1026a50
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 787, Address: 0x1026a50, Func Offset: 0
	// Line 790, Address: 0x1026a60, Func Offset: 0x10
	// Line 792, Address: 0x1026a6c, Func Offset: 0x1c
	// Line 793, Address: 0x1026a74, Func Offset: 0x24
	// Line 794, Address: 0x1026a7c, Func Offset: 0x2c
	// Line 796, Address: 0x1026a80, Func Offset: 0x30
	// Line 797, Address: 0x1026aa8, Func Offset: 0x58
	// Line 800, Address: 0x1026ab4, Func Offset: 0x64
	// Line 801, Address: 0x1026ae8, Func Offset: 0x98
	// Line 802, Address: 0x1026afc, Func Offset: 0xac
	// Line 804, Address: 0x1026b28, Func Offset: 0xd8
	// Line 805, Address: 0x1026b3c, Func Offset: 0xec
	// Line 807, Address: 0x1026b44, Func Offset: 0xf4
	// Line 812, Address: 0x1026b58, Func Offset: 0x108
	// Func End, Address: 0x1026b6c, Func Offset: 0x11c
}

// 
// Start address: 0x1026b70
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 816, Address: 0x1026b70, Func Offset: 0
	// Line 819, Address: 0x1026b7c, Func Offset: 0xc
	// Line 820, Address: 0x1026b8c, Func Offset: 0x1c
	// Line 821, Address: 0x1026b9c, Func Offset: 0x2c
	// Line 823, Address: 0x1026ba8, Func Offset: 0x38
	// Line 825, Address: 0x1026bdc, Func Offset: 0x6c
	// Line 826, Address: 0x1026bf0, Func Offset: 0x80
	// Line 827, Address: 0x1026c00, Func Offset: 0x90
	// Line 828, Address: 0x1026c14, Func Offset: 0xa4
	// Line 829, Address: 0x1026c28, Func Offset: 0xb8
	// Line 832, Address: 0x1026c30, Func Offset: 0xc0
	// Line 837, Address: 0x1026c44, Func Offset: 0xd4
	// Line 838, Address: 0x1026c54, Func Offset: 0xe4
	// Line 839, Address: 0x1026c64, Func Offset: 0xf4
	// Line 840, Address: 0x1026c7c, Func Offset: 0x10c
	// Line 842, Address: 0x1026c88, Func Offset: 0x118
	// Line 844, Address: 0x1026cbc, Func Offset: 0x14c
	// Line 845, Address: 0x1026cd0, Func Offset: 0x160
	// Line 846, Address: 0x1026ce0, Func Offset: 0x170
	// Line 847, Address: 0x1026cf4, Func Offset: 0x184
	// Line 848, Address: 0x1026d08, Func Offset: 0x198
	// Line 851, Address: 0x1026d10, Func Offset: 0x1a0
	// Line 856, Address: 0x1026d24, Func Offset: 0x1b4
	// Func End, Address: 0x1026d30, Func Offset: 0x1c0
}

// 
// Start address: 0x1026d30
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 863, Address: 0x1026d30, Func Offset: 0
	// Line 866, Address: 0x1026d3c, Func Offset: 0xc
	// Line 867, Address: 0x1026d48, Func Offset: 0x18
	// Line 869, Address: 0x1026d54, Func Offset: 0x24
	// Line 870, Address: 0x1026d80, Func Offset: 0x50
	// Line 871, Address: 0x1026d94, Func Offset: 0x64
	// Line 872, Address: 0x1026dc4, Func Offset: 0x94
	// Line 873, Address: 0x1026dd8, Func Offset: 0xa8
	// Line 876, Address: 0x1026de0, Func Offset: 0xb0
	// Line 881, Address: 0x1026df4, Func Offset: 0xc4
	// Func End, Address: 0x1026e04, Func Offset: 0xd4
}

// 
// Start address: 0x1026e10
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 885, Address: 0x1026e10, Func Offset: 0
	// Line 889, Address: 0x1026e20, Func Offset: 0x10
	// Line 890, Address: 0x1026e2c, Func Offset: 0x1c
	// Line 891, Address: 0x1026e3c, Func Offset: 0x2c
	// Line 893, Address: 0x1026e48, Func Offset: 0x38
	// Line 894, Address: 0x1026e50, Func Offset: 0x40
	// Line 895, Address: 0x1026e58, Func Offset: 0x48
	// Line 897, Address: 0x1026e64, Func Offset: 0x54
	// Line 898, Address: 0x1026e70, Func Offset: 0x60
	// Line 899, Address: 0x1026e84, Func Offset: 0x74
	// Line 900, Address: 0x1026e90, Func Offset: 0x80
	// Line 901, Address: 0x1026ea4, Func Offset: 0x94
	// Line 902, Address: 0x1026eb4, Func Offset: 0xa4
	// Line 903, Address: 0x1026ec8, Func Offset: 0xb8
	// Line 904, Address: 0x1026ee4, Func Offset: 0xd4
	// Line 907, Address: 0x1026eec, Func Offset: 0xdc
	// Line 912, Address: 0x1026f0c, Func Offset: 0xfc
	// Func End, Address: 0x1026f1c, Func Offset: 0x10c
}

// 
// Start address: 0x1026f20
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 915, Address: 0x1026f20, Func Offset: 0
	// Line 919, Address: 0x1026f30, Func Offset: 0x10
	// Line 920, Address: 0x1026f3c, Func Offset: 0x1c
	// Line 921, Address: 0x1026f4c, Func Offset: 0x2c
	// Line 923, Address: 0x1026f58, Func Offset: 0x38
	// Line 924, Address: 0x1026f60, Func Offset: 0x40
	// Line 925, Address: 0x1026f68, Func Offset: 0x48
	// Line 927, Address: 0x1026f74, Func Offset: 0x54
	// Line 928, Address: 0x1026f80, Func Offset: 0x60
	// Line 929, Address: 0x1026f94, Func Offset: 0x74
	// Line 930, Address: 0x1026fa0, Func Offset: 0x80
	// Line 931, Address: 0x1026fb4, Func Offset: 0x94
	// Line 932, Address: 0x1026fc4, Func Offset: 0xa4
	// Line 933, Address: 0x1026fd8, Func Offset: 0xb8
	// Line 934, Address: 0x1026ff4, Func Offset: 0xd4
	// Line 937, Address: 0x1026ffc, Func Offset: 0xdc
	// Line 942, Address: 0x102701c, Func Offset: 0xfc
	// Func End, Address: 0x102702c, Func Offset: 0x10c
}

// 
// Start address: 0x1027030
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 954, Address: 0x1027030, Func Offset: 0
	// Line 958, Address: 0x1027040, Func Offset: 0x10
	// Line 959, Address: 0x102704c, Func Offset: 0x1c
	// Line 960, Address: 0x102705c, Func Offset: 0x2c
	// Line 962, Address: 0x1027068, Func Offset: 0x38
	// Line 963, Address: 0x1027070, Func Offset: 0x40
	// Line 964, Address: 0x1027078, Func Offset: 0x48
	// Line 966, Address: 0x1027084, Func Offset: 0x54
	// Line 967, Address: 0x1027090, Func Offset: 0x60
	// Line 968, Address: 0x10270a4, Func Offset: 0x74
	// Line 969, Address: 0x10270b0, Func Offset: 0x80
	// Line 970, Address: 0x10270c4, Func Offset: 0x94
	// Line 971, Address: 0x10270d4, Func Offset: 0xa4
	// Line 972, Address: 0x10270e8, Func Offset: 0xb8
	// Line 973, Address: 0x1027104, Func Offset: 0xd4
	// Line 976, Address: 0x102710c, Func Offset: 0xdc
	// Line 981, Address: 0x102712c, Func Offset: 0xfc
	// Func End, Address: 0x102713c, Func Offset: 0x10c
}

// 
// Start address: 0x1027140
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 995, Address: 0x1027140, Func Offset: 0
	// Line 1001, Address: 0x102715c, Func Offset: 0x1c
	// Line 1002, Address: 0x1027160, Func Offset: 0x20
	// Line 1003, Address: 0x102716c, Func Offset: 0x2c
	// Line 1004, Address: 0x1027178, Func Offset: 0x38
	// Line 1005, Address: 0x1027180, Func Offset: 0x40
	// Line 1006, Address: 0x1027188, Func Offset: 0x48
	// Line 1008, Address: 0x102719c, Func Offset: 0x5c
	// Line 1009, Address: 0x10271a8, Func Offset: 0x68
	// Line 1010, Address: 0x10271b4, Func Offset: 0x74
	// Line 1011, Address: 0x10271bc, Func Offset: 0x7c
	// Line 1013, Address: 0x10271c4, Func Offset: 0x84
	// Func End, Address: 0x10271e8, Func Offset: 0xa8
}

// 
// Start address: 0x10271f0
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
	// Line 1026, Address: 0x10271f0, Func Offset: 0
	// Line 1035, Address: 0x1027210, Func Offset: 0x20
	// Line 1036, Address: 0x1027214, Func Offset: 0x24
	// Line 1037, Address: 0x1027220, Func Offset: 0x30
	// Line 1038, Address: 0x102722c, Func Offset: 0x3c
	// Line 1039, Address: 0x1027234, Func Offset: 0x44
	// Line 1040, Address: 0x102723c, Func Offset: 0x4c
	// Line 1042, Address: 0x1027250, Func Offset: 0x60
	// Line 1043, Address: 0x1027254, Func Offset: 0x64
	// Line 1044, Address: 0x1027260, Func Offset: 0x70
	// Line 1045, Address: 0x102726c, Func Offset: 0x7c
	// Line 1046, Address: 0x1027274, Func Offset: 0x84
	// Line 1048, Address: 0x102727c, Func Offset: 0x8c
	// Line 1049, Address: 0x1027288, Func Offset: 0x98
	// Line 1050, Address: 0x102729c, Func Offset: 0xac
	// Line 1052, Address: 0x10272a8, Func Offset: 0xb8
	// Line 1053, Address: 0x10272b0, Func Offset: 0xc0
	// Line 1055, Address: 0x10272b8, Func Offset: 0xc8
	// Line 1057, Address: 0x10272d8, Func Offset: 0xe8
	// Line 1063, Address: 0x1027304, Func Offset: 0x114
	// Line 1064, Address: 0x1027318, Func Offset: 0x128
	// Line 1066, Address: 0x1027324, Func Offset: 0x134
	// Line 1067, Address: 0x102732c, Func Offset: 0x13c
	// Line 1068, Address: 0x1027334, Func Offset: 0x144
	// Line 1070, Address: 0x1027354, Func Offset: 0x164
	// Line 1076, Address: 0x1027380, Func Offset: 0x190
	// Line 1077, Address: 0x1027394, Func Offset: 0x1a4
	// Line 1079, Address: 0x10273a0, Func Offset: 0x1b0
	// Line 1080, Address: 0x10273a8, Func Offset: 0x1b8
	// Line 1081, Address: 0x10273b0, Func Offset: 0x1c0
	// Line 1083, Address: 0x10273d0, Func Offset: 0x1e0
	// Line 1089, Address: 0x10273fc, Func Offset: 0x20c
	// Line 1090, Address: 0x1027410, Func Offset: 0x220
	// Line 1092, Address: 0x102741c, Func Offset: 0x22c
	// Line 1093, Address: 0x1027424, Func Offset: 0x234
	// Line 1094, Address: 0x102742c, Func Offset: 0x23c
	// Line 1096, Address: 0x102744c, Func Offset: 0x25c
	// Line 1105, Address: 0x1027478, Func Offset: 0x288
	// Func End, Address: 0x10274a0, Func Offset: 0x2b0
}

// 
// Start address: 0x10274a0
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
	// Line 1122, Address: 0x10274a0, Func Offset: 0
	// Line 1133, Address: 0x10274cc, Func Offset: 0x2c
	// Line 1135, Address: 0x10274d4, Func Offset: 0x34
	// Line 1136, Address: 0x10274ec, Func Offset: 0x4c
	// Line 1137, Address: 0x1027500, Func Offset: 0x60
	// Line 1139, Address: 0x1027508, Func Offset: 0x68
	// Line 1141, Address: 0x102751c, Func Offset: 0x7c
	// Line 1142, Address: 0x1027534, Func Offset: 0x94
	// Line 1143, Address: 0x1027548, Func Offset: 0xa8
	// Line 1144, Address: 0x1027550, Func Offset: 0xb0
	// Line 1146, Address: 0x1027558, Func Offset: 0xb8
	// Line 1147, Address: 0x102756c, Func Offset: 0xcc
	// Line 1152, Address: 0x1027574, Func Offset: 0xd4
	// Line 1153, Address: 0x10275c4, Func Offset: 0x124
	// Line 1154, Address: 0x10275cc, Func Offset: 0x12c
	// Line 1160, Address: 0x10275ec, Func Offset: 0x14c
	// Line 1161, Address: 0x102760c, Func Offset: 0x16c
	// Line 1162, Address: 0x1027630, Func Offset: 0x190
	// Line 1163, Address: 0x102763c, Func Offset: 0x19c
	// Line 1164, Address: 0x1027644, Func Offset: 0x1a4
	// Line 1166, Address: 0x1027664, Func Offset: 0x1c4
	// Line 1170, Address: 0x1027690, Func Offset: 0x1f0
	// Line 1173, Address: 0x1027698, Func Offset: 0x1f8
	// Line 1174, Address: 0x102769c, Func Offset: 0x1fc
	// Line 1178, Address: 0x10276bc, Func Offset: 0x21c
	// Line 1185, Address: 0x10276e8, Func Offset: 0x248
	// Line 1192, Address: 0x10276fc, Func Offset: 0x25c
	// Line 1193, Address: 0x1027704, Func Offset: 0x264
	// Line 1194, Address: 0x102770c, Func Offset: 0x26c
	// Line 1195, Address: 0x1027724, Func Offset: 0x284
	// Line 1196, Address: 0x1027744, Func Offset: 0x2a4
	// Line 1200, Address: 0x102774c, Func Offset: 0x2ac
	// Line 1202, Address: 0x102777c, Func Offset: 0x2dc
	// Line 1203, Address: 0x1027788, Func Offset: 0x2e8
	// Line 1207, Address: 0x1027798, Func Offset: 0x2f8
	// Line 1208, Address: 0x10277a4, Func Offset: 0x304
	// Line 1209, Address: 0x10277c4, Func Offset: 0x324
	// Line 1210, Address: 0x10277d0, Func Offset: 0x330
	// Line 1211, Address: 0x10277fc, Func Offset: 0x35c
	// Line 1212, Address: 0x102781c, Func Offset: 0x37c
	// Line 1214, Address: 0x1027840, Func Offset: 0x3a0
	// Line 1217, Address: 0x1027864, Func Offset: 0x3c4
	// Line 1219, Address: 0x1027884, Func Offset: 0x3e4
	// Line 1222, Address: 0x1027898, Func Offset: 0x3f8
	// Line 1223, Address: 0x10278a4, Func Offset: 0x404
	// Line 1224, Address: 0x10278b4, Func Offset: 0x414
	// Line 1226, Address: 0x10278bc, Func Offset: 0x41c
	// Func End, Address: 0x10278e4, Func Offset: 0x444
}

// 
// Start address: 0x10278f0
void scrollwrtc()
{
	// Line 1232, Address: 0x10278f0, Func Offset: 0
	// Func End, Address: 0x10278f8, Func Offset: 0x8
}

// 
// Start address: 0x1027900
void scrollwrtz()
{
	// Line 1237, Address: 0x1027900, Func Offset: 0
	// Func End, Address: 0x1027908, Func Offset: 0x8
}

// 
// Start address: 0x1027910
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1255, Address: 0x1027910, Func Offset: 0
	// Line 1268, Address: 0x1027938, Func Offset: 0x28
	// Line 1271, Address: 0x1027958, Func Offset: 0x48
	// Line 1272, Address: 0x102796c, Func Offset: 0x5c
	// Line 1273, Address: 0x1027980, Func Offset: 0x70
	// Line 1274, Address: 0x1027994, Func Offset: 0x84
	// Line 1276, Address: 0x10279a8, Func Offset: 0x98
	// Line 1277, Address: 0x10279b4, Func Offset: 0xa4
	// Line 1278, Address: 0x10279c8, Func Offset: 0xb8
	// Func End, Address: 0x10279d8, Func Offset: 0xc8
}

// 
// Start address: 0x10279e0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1282, Address: 0x10279e0, Func Offset: 0
	// Line 1286, Address: 0x1027a08, Func Offset: 0x28
	// Line 1289, Address: 0x1027a28, Func Offset: 0x48
	// Line 1290, Address: 0x1027a3c, Func Offset: 0x5c
	// Line 1291, Address: 0x1027a50, Func Offset: 0x70
	// Line 1292, Address: 0x1027a64, Func Offset: 0x84
	// Line 1294, Address: 0x1027a78, Func Offset: 0x98
	// Line 1295, Address: 0x1027a84, Func Offset: 0xa4
	// Line 1296, Address: 0x1027a98, Func Offset: 0xb8
	// Func End, Address: 0x1027aa8, Func Offset: 0xc8
}

// 
// Start address: 0x1027ab0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1316, Address: 0x1027ab0, Func Offset: 0
	// Line 1320, Address: 0x1027ad8, Func Offset: 0x28
	// Line 1323, Address: 0x1027af8, Func Offset: 0x48
	// Line 1324, Address: 0x1027b0c, Func Offset: 0x5c
	// Line 1325, Address: 0x1027b1c, Func Offset: 0x6c
	// Line 1326, Address: 0x1027b30, Func Offset: 0x80
	// Line 1328, Address: 0x1027b40, Func Offset: 0x90
	// Line 1329, Address: 0x1027b4c, Func Offset: 0x9c
	// Line 1330, Address: 0x1027b60, Func Offset: 0xb0
	// Func End, Address: 0x1027b70, Func Offset: 0xc0
}

// 
// Start address: 0x1027b70
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
	// Line 1349, Address: 0x1027b70, Func Offset: 0
	// Line 1350, Address: 0x1027ba4, Func Offset: 0x34
	// Line 1355, Address: 0x1027ba8, Func Offset: 0x38
	// Line 1357, Address: 0x1027bb8, Func Offset: 0x48
	// Line 1358, Address: 0x1027bbc, Func Offset: 0x4c
	// Line 1359, Address: 0x1027bc4, Func Offset: 0x54
	// Line 1361, Address: 0x1027bd4, Func Offset: 0x64
	// Line 1363, Address: 0x1027bd8, Func Offset: 0x68
	// Line 1364, Address: 0x1027be0, Func Offset: 0x70
	// Line 1367, Address: 0x1027be8, Func Offset: 0x78
	// Line 1368, Address: 0x1027bf0, Func Offset: 0x80
	// Line 1369, Address: 0x1027bfc, Func Offset: 0x8c
	// Line 1371, Address: 0x1027c08, Func Offset: 0x98
	// Line 1372, Address: 0x1027c10, Func Offset: 0xa0
	// Line 1373, Address: 0x1027c18, Func Offset: 0xa8
	// Line 1374, Address: 0x1027c20, Func Offset: 0xb0
	// Line 1376, Address: 0x1027c2c, Func Offset: 0xbc
	// Line 1377, Address: 0x1027c34, Func Offset: 0xc4
	// Line 1378, Address: 0x1027c3c, Func Offset: 0xcc
	// Line 1379, Address: 0x1027c44, Func Offset: 0xd4
	// Line 1381, Address: 0x1027c50, Func Offset: 0xe0
	// Line 1382, Address: 0x1027c58, Func Offset: 0xe8
	// Line 1383, Address: 0x1027c60, Func Offset: 0xf0
	// Line 1386, Address: 0x1027c68, Func Offset: 0xf8
	// Line 1387, Address: 0x1027c70, Func Offset: 0x100
	// Line 1390, Address: 0x1027c78, Func Offset: 0x108
	// Line 1391, Address: 0x1027cbc, Func Offset: 0x14c
	// Line 1392, Address: 0x1027d00, Func Offset: 0x190
	// Line 1393, Address: 0x1027d44, Func Offset: 0x1d4
	// Line 1395, Address: 0x1027d88, Func Offset: 0x218
	// Func End, Address: 0x1027db8, Func Offset: 0x248
}

// 
// Start address: 0x1027dc0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1413, Address: 0x1027dc0, Func Offset: 0
	// Line 1414, Address: 0x1027de0, Func Offset: 0x20
	// Line 1415, Address: 0x1027e00, Func Offset: 0x40
	// Func End, Address: 0x1027e10, Func Offset: 0x50
}

// 
// Start address: 0x1027e10
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1417, Address: 0x1027e10, Func Offset: 0
	// Line 1418, Address: 0x1027e30, Func Offset: 0x20
	// Line 1419, Address: 0x1027e34, Func Offset: 0x24
	// Line 1420, Address: 0x1027e54, Func Offset: 0x44
	// Func End, Address: 0x1027e64, Func Offset: 0x54
}

// 
// Start address: 0x1027e70
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1427, Address: 0x1027e70, Func Offset: 0
	// Line 1433, Address: 0x1027ea0, Func Offset: 0x30
	// Line 1434, Address: 0x1027eb0, Func Offset: 0x40
	// Line 1440, Address: 0x1027ec0, Func Offset: 0x50
	// Line 1441, Address: 0x1027edc, Func Offset: 0x6c
	// Line 1442, Address: 0x1027ee0, Func Offset: 0x70
	// Line 1443, Address: 0x1027efc, Func Offset: 0x8c
	// Line 1444, Address: 0x1027f00, Func Offset: 0x90
	// Line 1445, Address: 0x1027f20, Func Offset: 0xb0
	// Line 1446, Address: 0x1027f28, Func Offset: 0xb8
	// Line 1447, Address: 0x1027f48, Func Offset: 0xd8
	// Line 1448, Address: 0x1027f50, Func Offset: 0xe0
	// Line 1449, Address: 0x1027f98, Func Offset: 0x128
	// Line 1451, Address: 0x1027fa4, Func Offset: 0x134
	// Line 1453, Address: 0x1027fc0, Func Offset: 0x150
	// Line 1458, Address: 0x1027fc8, Func Offset: 0x158
	// Line 1459, Address: 0x1027fd4, Func Offset: 0x164
	// Line 1462, Address: 0x1027fe0, Func Offset: 0x170
	// Line 1463, Address: 0x1027fe8, Func Offset: 0x178
	// Line 1464, Address: 0x1028008, Func Offset: 0x198
	// Line 1465, Address: 0x1028024, Func Offset: 0x1b4
	// Line 1466, Address: 0x102802c, Func Offset: 0x1bc
	// Line 1467, Address: 0x102804c, Func Offset: 0x1dc
	// Line 1469, Address: 0x1028068, Func Offset: 0x1f8
	// Line 1470, Address: 0x1028070, Func Offset: 0x200
	// Line 1471, Address: 0x1028078, Func Offset: 0x208
	// Line 1472, Address: 0x1028084, Func Offset: 0x214
	// Line 1473, Address: 0x102809c, Func Offset: 0x22c
	// Line 1475, Address: 0x10280ac, Func Offset: 0x23c
	// Line 1478, Address: 0x10280b8, Func Offset: 0x248
	// Line 1479, Address: 0x10280c0, Func Offset: 0x250
	// Line 1480, Address: 0x10280c4, Func Offset: 0x254
	// Func End, Address: 0x10280e4, Func Offset: 0x274
}

// 
// Start address: 0x10280f0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1500, Address: 0x10280f0, Func Offset: 0
	// Line 1508, Address: 0x1028118, Func Offset: 0x28
	// Line 1509, Address: 0x102817c, Func Offset: 0x8c
	// Line 1515, Address: 0x1028184, Func Offset: 0x94
	// Line 1516, Address: 0x102818c, Func Offset: 0x9c
	// Line 1517, Address: 0x10281ac, Func Offset: 0xbc
	// Line 1518, Address: 0x10281c8, Func Offset: 0xd8
	// Line 1519, Address: 0x10281d0, Func Offset: 0xe0
	// Line 1520, Address: 0x10281f0, Func Offset: 0x100
	// Line 1523, Address: 0x102820c, Func Offset: 0x11c
	// Line 1524, Address: 0x1028214, Func Offset: 0x124
	// Line 1525, Address: 0x102821c, Func Offset: 0x12c
	// Line 1526, Address: 0x1028228, Func Offset: 0x138
	// Line 1527, Address: 0x1028240, Func Offset: 0x150
	// Line 1528, Address: 0x1028248, Func Offset: 0x158
	// Line 1533, Address: 0x1028258, Func Offset: 0x168
	// Line 1536, Address: 0x1028264, Func Offset: 0x174
	// Line 1537, Address: 0x102826c, Func Offset: 0x17c
	// Line 1538, Address: 0x1028270, Func Offset: 0x180
	// Func End, Address: 0x102828c, Func Offset: 0x19c
}

// 
// Start address: 0x1028290
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1552, Address: 0x1028290, Func Offset: 0
	// Line 1559, Address: 0x10282ac, Func Offset: 0x1c
	// Line 1560, Address: 0x10282b0, Func Offset: 0x20
	// Line 1561, Address: 0x10282b8, Func Offset: 0x28
	// Line 1562, Address: 0x10282dc, Func Offset: 0x4c
	// Line 1563, Address: 0x10282e8, Func Offset: 0x58
	// Line 1564, Address: 0x1028300, Func Offset: 0x70
	// Line 1565, Address: 0x1028314, Func Offset: 0x84
	// Line 1570, Address: 0x102832c, Func Offset: 0x9c
	// Func End, Address: 0x1028344, Func Offset: 0xb4
}

// 
// Start address: 0x1028350
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1584, Address: 0x1028350, Func Offset: 0
	// Line 1585, Address: 0x102835c, Func Offset: 0xc
	// Line 1586, Address: 0x1028388, Func Offset: 0x38
	// Line 1587, Address: 0x10283d4, Func Offset: 0x84
	// Line 1588, Address: 0x1028400, Func Offset: 0xb0
	// Line 1590, Address: 0x102844c, Func Offset: 0xfc
	// Line 1596, Address: 0x1028458, Func Offset: 0x108
	// Line 1597, Address: 0x102845c, Func Offset: 0x10c
	// Func End, Address: 0x1028468, Func Offset: 0x118
}

// 
// Start address: 0x1028470
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1614, Address: 0x1028470, Func Offset: 0
	// Line 1615, Address: 0x102848c, Func Offset: 0x1c
	// Line 1617, Address: 0x10284a8, Func Offset: 0x38
	// Func End, Address: 0x10284b8, Func Offset: 0x48
}

// 
// Start address: 0x10284c0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1619, Address: 0x10284c0, Func Offset: 0
	// Line 1620, Address: 0x10284dc, Func Offset: 0x1c
	// Line 1621, Address: 0x10284e0, Func Offset: 0x20
	// Line 1623, Address: 0x10284fc, Func Offset: 0x3c
	// Func End, Address: 0x102850c, Func Offset: 0x4c
}

// 
// Start address: 0x1028510
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1625, Address: 0x1028510, Func Offset: 0
	// Line 1626, Address: 0x1028524, Func Offset: 0x14
	// Line 1628, Address: 0x1028540, Func Offset: 0x30
	// Func End, Address: 0x1028550, Func Offset: 0x40
}

// 
// Start address: 0x1028550
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1630, Address: 0x1028550, Func Offset: 0
	// Line 1631, Address: 0x102856c, Func Offset: 0x1c
	// Line 1633, Address: 0x1028588, Func Offset: 0x38
	// Func End, Address: 0x1028598, Func Offset: 0x48
}

// 
// Start address: 0x10285a0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1635, Address: 0x10285a0, Func Offset: 0
	// Line 1636, Address: 0x10285b8, Func Offset: 0x18
	// Line 1637, Address: 0x10285c8, Func Offset: 0x28
	// Line 1638, Address: 0x10285d8, Func Offset: 0x38
	// Line 1639, Address: 0x10285e4, Func Offset: 0x44
	// Line 1641, Address: 0x10285f0, Func Offset: 0x50
	// Line 1642, Address: 0x102861c, Func Offset: 0x7c
	// Line 1645, Address: 0x1028648, Func Offset: 0xa8
	// Func End, Address: 0x1028654, Func Offset: 0xb4
}

// 
// Start address: 0x1028660
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1661, Address: 0x1028660, Func Offset: 0
	// Line 1666, Address: 0x1028678, Func Offset: 0x18
	// Line 1667, Address: 0x1028684, Func Offset: 0x24
	// Line 1668, Address: 0x1028690, Func Offset: 0x30
	// Line 1669, Address: 0x1028698, Func Offset: 0x38
	// Line 1670, Address: 0x102869c, Func Offset: 0x3c
	// Line 1674, Address: 0x10286b4, Func Offset: 0x54
	// Line 1675, Address: 0x10286bc, Func Offset: 0x5c
	// Line 1676, Address: 0x10286c0, Func Offset: 0x60
	// Line 1678, Address: 0x10286d0, Func Offset: 0x70
	// Func End, Address: 0x10286f0, Func Offset: 0x90
}

// 
// Start address: 0x10286f0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1681, Address: 0x10286f0, Func Offset: 0
	// Line 1682, Address: 0x1028708, Func Offset: 0x18
	// Line 1683, Address: 0x1028728, Func Offset: 0x38
	// Func End, Address: 0x1028738, Func Offset: 0x48
}

// 
// Start address: 0x1028740
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1688, Address: 0x1028740, Func Offset: 0
	// Line 1692, Address: 0x1028760, Func Offset: 0x20
	// Line 1695, Address: 0x102877c, Func Offset: 0x3c
	// Line 1699, Address: 0x10287a4, Func Offset: 0x64
	// Line 1700, Address: 0x10287b0, Func Offset: 0x70
	// Line 1702, Address: 0x10287d8, Func Offset: 0x98
	// Func End, Address: 0x10287e8, Func Offset: 0xa8
}

// 
// Start address: 0x10287f0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	// Line 1708, Address: 0x10287f0, Func Offset: 0
	// Line 1713, Address: 0x102880c, Func Offset: 0x1c
	// Line 1714, Address: 0x1028814, Func Offset: 0x24
	// Line 1717, Address: 0x102881c, Func Offset: 0x2c
	// Line 1718, Address: 0x1028820, Func Offset: 0x30
	// Line 1719, Address: 0x102882c, Func Offset: 0x3c
	// Line 1720, Address: 0x1028838, Func Offset: 0x48
	// Line 1721, Address: 0x102884c, Func Offset: 0x5c
	// Line 1722, Address: 0x102886c, Func Offset: 0x7c
	// Line 1723, Address: 0x1028874, Func Offset: 0x84
	// Line 1724, Address: 0x1028898, Func Offset: 0xa8
	// Func End, Address: 0x10288b4, Func Offset: 0xc4
}

// 
// Start address: 0x10288c0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1746, Address: 0x10288c0, Func Offset: 0
	// Line 1751, Address: 0x10288e8, Func Offset: 0x28
	// Line 1752, Address: 0x10288f8, Func Offset: 0x38
	// Line 1754, Address: 0x1028914, Func Offset: 0x54
	// Line 1755, Address: 0x1028938, Func Offset: 0x78
	// Line 1756, Address: 0x1028960, Func Offset: 0xa0
	// Line 1757, Address: 0x102896c, Func Offset: 0xac
	// Line 1758, Address: 0x1028974, Func Offset: 0xb4
	// Line 1761, Address: 0x1028990, Func Offset: 0xd0
	// Line 1765, Address: 0x10289b8, Func Offset: 0xf8
	// Line 1768, Address: 0x10289c0, Func Offset: 0x100
	// Line 1769, Address: 0x10289c4, Func Offset: 0x104
	// Line 1773, Address: 0x10289e0, Func Offset: 0x120
	// Line 1780, Address: 0x1028a08, Func Offset: 0x148
	// Func End, Address: 0x1028a24, Func Offset: 0x164
}

// 
// Start address: 0x1028a30
void mapinit()
{
	// Line 1784, Address: 0x1028a30, Func Offset: 0
	// Line 1786, Address: 0x1028a38, Func Offset: 0x8
	// Line 1787, Address: 0x1028a4c, Func Offset: 0x1c
	// Line 1790, Address: 0x1028a60, Func Offset: 0x30
	// Line 1791, Address: 0x1028a80, Func Offset: 0x50
	// Func End, Address: 0x1028a90, Func Offset: 0x60
}

// 
// Start address: 0x1028a90
void mapset()
{
	// Line 1802, Address: 0x1028a90, Func Offset: 0
	// Func End, Address: 0x1028a98, Func Offset: 0x8
}

