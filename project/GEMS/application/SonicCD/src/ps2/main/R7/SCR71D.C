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
typedef unsigned char type_8[64];
typedef unsigned char type_9[64][8];
typedef unsigned char type_10[22];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef _anon2* type_13[8];
typedef int type_14[11];
typedef short type_15[256];
typedef unsigned short type_16[2];
typedef int type_17[16];
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
// Start address: 0x1025070
void enecginit()
{
	// Line 123, Address: 0x1025070, Func Offset: 0
	// Func End, Address: 0x1025078, Func Offset: 0x8
}

// 
// Start address: 0x1025080
void divdevset()
{
	// Line 127, Address: 0x1025080, Func Offset: 0
	// Func End, Address: 0x1025088, Func Offset: 0x8
}

// 
// Start address: 0x1025090
void scr_set()
{
	int i;
	// Line 176, Address: 0x1025090, Func Offset: 0
	// Line 179, Address: 0x102509c, Func Offset: 0xc
	// Line 181, Address: 0x10250e4, Func Offset: 0x54
	// Line 182, Address: 0x10250e8, Func Offset: 0x58
	// Line 183, Address: 0x102510c, Func Offset: 0x7c
	// Line 184, Address: 0x1025128, Func Offset: 0x98
	// Line 185, Address: 0x102514c, Func Offset: 0xbc
	// Line 186, Address: 0x1025168, Func Offset: 0xd8
	// Line 187, Address: 0x102518c, Func Offset: 0xfc
	// Line 188, Address: 0x10251a8, Func Offset: 0x118
	// Line 189, Address: 0x10251cc, Func Offset: 0x13c
	// Line 190, Address: 0x10251e8, Func Offset: 0x158
	// Line 192, Address: 0x102520c, Func Offset: 0x17c
	// Line 193, Address: 0x1025230, Func Offset: 0x1a0
	// Line 194, Address: 0x102523c, Func Offset: 0x1ac
	// Line 196, Address: 0x1025248, Func Offset: 0x1b8
	// Line 197, Address: 0x102526c, Func Offset: 0x1dc
	// Line 199, Address: 0x1025278, Func Offset: 0x1e8
	// Line 200, Address: 0x1025280, Func Offset: 0x1f0
	// Func End, Address: 0x1025294, Func Offset: 0x204
}

// 
// Start address: 0x10252a0
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 204, Address: 0x10252a0, Func Offset: 0
	// Line 205, Address: 0x10252b4, Func Offset: 0x14
	// Line 209, Address: 0x10252d0, Func Offset: 0x30
	// Line 217, Address: 0x10252fc, Func Offset: 0x5c
	// Line 219, Address: 0x1025310, Func Offset: 0x70
	// Line 220, Address: 0x1025318, Func Offset: 0x78
	// Line 221, Address: 0x1025328, Func Offset: 0x88
	// Line 222, Address: 0x1025338, Func Offset: 0x98
	// Line 223, Address: 0x102534c, Func Offset: 0xac
	// Line 227, Address: 0x1025354, Func Offset: 0xb4
	// Line 228, Address: 0x1025358, Func Offset: 0xb8
	// Line 229, Address: 0x102537c, Func Offset: 0xdc
	// Line 232, Address: 0x10253a0, Func Offset: 0x100
	// Line 233, Address: 0x10253b4, Func Offset: 0x114
	// Line 234, Address: 0x10253c0, Func Offset: 0x120
	// Line 236, Address: 0x10253c8, Func Offset: 0x128
	// Line 240, Address: 0x10253cc, Func Offset: 0x12c
	// Line 241, Address: 0x10253f0, Func Offset: 0x150
	// Line 243, Address: 0x1025400, Func Offset: 0x160
	// Line 245, Address: 0x1025408, Func Offset: 0x168
	// Line 246, Address: 0x102541c, Func Offset: 0x17c
	// Line 247, Address: 0x1025428, Func Offset: 0x188
	// Line 249, Address: 0x1025430, Func Offset: 0x190
	// Line 252, Address: 0x1025434, Func Offset: 0x194
	// Line 253, Address: 0x1025458, Func Offset: 0x1b8
	// Line 256, Address: 0x1025468, Func Offset: 0x1c8
	// Line 258, Address: 0x1025470, Func Offset: 0x1d0
	// Line 260, Address: 0x1025480, Func Offset: 0x1e0
	// Line 261, Address: 0x1025484, Func Offset: 0x1e4
	// Line 262, Address: 0x102549c, Func Offset: 0x1fc
	// Line 263, Address: 0x10254b4, Func Offset: 0x214
	// Line 264, Address: 0x10254cc, Func Offset: 0x22c
	// Line 267, Address: 0x10254e4, Func Offset: 0x244
	// Func End, Address: 0x1025500, Func Offset: 0x260
}

// 
// Start address: 0x1025500
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 271, Address: 0x1025500, Func Offset: 0
	// Line 275, Address: 0x102550c, Func Offset: 0xc
	// Line 276, Address: 0x1025510, Func Offset: 0x10
	// Line 277, Address: 0x1025518, Func Offset: 0x18
	// Line 278, Address: 0x1025530, Func Offset: 0x30
	// Line 279, Address: 0x1025540, Func Offset: 0x40
	// Line 280, Address: 0x102554c, Func Offset: 0x4c
	// Line 282, Address: 0x1025558, Func Offset: 0x58
	// Line 283, Address: 0x102557c, Func Offset: 0x7c
	// Line 284, Address: 0x10255b4, Func Offset: 0xb4
	// Line 285, Address: 0x10255e0, Func Offset: 0xe0
	// Func End, Address: 0x10255ec, Func Offset: 0xec
}

// 
// Start address: 0x10255f0
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 289, Address: 0x10255f0, Func Offset: 0
	// Line 294, Address: 0x1025600, Func Offset: 0x10
	// Line 297, Address: 0x1025610, Func Offset: 0x20
	// Line 298, Address: 0x102563c, Func Offset: 0x4c
	// Line 299, Address: 0x1025644, Func Offset: 0x54
	// Line 300, Address: 0x102564c, Func Offset: 0x5c
	// Line 302, Address: 0x1025654, Func Offset: 0x64
	// Line 303, Address: 0x1025664, Func Offset: 0x74
	// Line 307, Address: 0x1025674, Func Offset: 0x84
	// Line 308, Address: 0x10256ac, Func Offset: 0xbc
	// Line 309, Address: 0x10256cc, Func Offset: 0xdc
	// Line 311, Address: 0x1025704, Func Offset: 0x114
	// Line 312, Address: 0x1025708, Func Offset: 0x118
	// Line 313, Address: 0x1025714, Func Offset: 0x124
	// Line 314, Address: 0x1025738, Func Offset: 0x148
	// Line 316, Address: 0x1025744, Func Offset: 0x154
	// Line 317, Address: 0x1025754, Func Offset: 0x164
	// Line 318, Address: 0x1025764, Func Offset: 0x174
	// Line 319, Address: 0x1025774, Func Offset: 0x184
	// Line 320, Address: 0x10257a8, Func Offset: 0x1b8
	// Line 321, Address: 0x10257b0, Func Offset: 0x1c0
	// Line 323, Address: 0x10257b8, Func Offset: 0x1c8
	// Line 326, Address: 0x10257bc, Func Offset: 0x1cc
	// Line 328, Address: 0x10257cc, Func Offset: 0x1dc
	// Line 330, Address: 0x10257d8, Func Offset: 0x1e8
	// Line 331, Address: 0x1025808, Func Offset: 0x218
	// Line 332, Address: 0x102580c, Func Offset: 0x21c
	// Line 334, Address: 0x102581c, Func Offset: 0x22c
	// Line 336, Address: 0x102582c, Func Offset: 0x23c
	// Line 338, Address: 0x1025838, Func Offset: 0x248
	// Line 339, Address: 0x1025868, Func Offset: 0x278
	// Line 340, Address: 0x102586c, Func Offset: 0x27c
	// Line 342, Address: 0x102587c, Func Offset: 0x28c
	// Line 344, Address: 0x1025888, Func Offset: 0x298
	// Line 345, Address: 0x10258b8, Func Offset: 0x2c8
	// Line 346, Address: 0x10258bc, Func Offset: 0x2cc
	// Line 352, Address: 0x10258cc, Func Offset: 0x2dc
	// Line 353, Address: 0x10258d8, Func Offset: 0x2e8
	// Line 354, Address: 0x10258e4, Func Offset: 0x2f4
	// Line 355, Address: 0x10258f0, Func Offset: 0x300
	// Line 356, Address: 0x1025924, Func Offset: 0x334
	// Func End, Address: 0x102593c, Func Offset: 0x34c
}

// 
// Start address: 0x1025940
int z71aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl[16];
	// Line 360, Address: 0x1025940, Func Offset: 0
	// Line 364, Address: 0x1025954, Func Offset: 0x14
	// Line 370, Address: 0x1025988, Func Offset: 0x48
	// Line 371, Address: 0x10259ac, Func Offset: 0x6c
	// Line 372, Address: 0x10259b0, Func Offset: 0x70
	// Line 373, Address: 0x10259cc, Func Offset: 0x8c
	// Line 374, Address: 0x10259d0, Func Offset: 0x90
	// Line 375, Address: 0x10259d4, Func Offset: 0x94
	// Line 376, Address: 0x10259e0, Func Offset: 0xa0
	// Line 377, Address: 0x10259ec, Func Offset: 0xac
	// Line 380, Address: 0x10259f8, Func Offset: 0xb8
	// Line 383, Address: 0x1025a04, Func Offset: 0xc4
	// Line 384, Address: 0x1025a10, Func Offset: 0xd0
	// Line 385, Address: 0x1025a40, Func Offset: 0x100
	// Line 386, Address: 0x1025a64, Func Offset: 0x124
	// Line 387, Address: 0x1025a88, Func Offset: 0x148
	// Line 388, Address: 0x1025a94, Func Offset: 0x154
	// Line 389, Address: 0x1025ab8, Func Offset: 0x178
	// Line 390, Address: 0x1025ac8, Func Offset: 0x188
	// Line 391, Address: 0x1025ad4, Func Offset: 0x194
	// Line 392, Address: 0x1025ad8, Func Offset: 0x198
	// Func End, Address: 0x1025af0, Func Offset: 0x1b0
}

// 
// Start address: 0x1025af0
int z71aline0(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl0[11];
	// Line 395, Address: 0x1025af0, Func Offset: 0
	// Line 399, Address: 0x1025b04, Func Offset: 0x14
	// Line 405, Address: 0x1025b30, Func Offset: 0x40
	// Line 406, Address: 0x1025b54, Func Offset: 0x64
	// Line 407, Address: 0x1025b58, Func Offset: 0x68
	// Line 408, Address: 0x1025b70, Func Offset: 0x80
	// Line 409, Address: 0x1025b74, Func Offset: 0x84
	// Line 410, Address: 0x1025b78, Func Offset: 0x88
	// Line 411, Address: 0x1025b84, Func Offset: 0x94
	// Line 412, Address: 0x1025ba8, Func Offset: 0xb8
	// Line 413, Address: 0x1025bb4, Func Offset: 0xc4
	// Line 414, Address: 0x1025bd8, Func Offset: 0xe8
	// Line 417, Address: 0x1025be4, Func Offset: 0xf4
	// Line 420, Address: 0x1025bf0, Func Offset: 0x100
	// Line 421, Address: 0x1025c20, Func Offset: 0x130
	// Line 422, Address: 0x1025c2c, Func Offset: 0x13c
	// Line 423, Address: 0x1025c50, Func Offset: 0x160
	// Line 424, Address: 0x1025c74, Func Offset: 0x184
	// Line 425, Address: 0x1025c80, Func Offset: 0x190
	// Line 426, Address: 0x1025ca4, Func Offset: 0x1b4
	// Line 427, Address: 0x1025cb4, Func Offset: 0x1c4
	// Line 428, Address: 0x1025cb8, Func Offset: 0x1c8
	// Func End, Address: 0x1025cd0, Func Offset: 0x1e0
}

// 
// Start address: 0x1025cd0
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	int i;
	int j;
	// Line 433, Address: 0x1025cd0, Func Offset: 0
	// Line 441, Address: 0x1025ce8, Func Offset: 0x18
	// Line 450, Address: 0x1025cf0, Func Offset: 0x20
	// Line 451, Address: 0x1025cfc, Func Offset: 0x2c
	// Line 452, Address: 0x1025d00, Func Offset: 0x30
	// Line 454, Address: 0x1025d28, Func Offset: 0x58
	// Line 455, Address: 0x1025d34, Func Offset: 0x64
	// Line 457, Address: 0x1025d3c, Func Offset: 0x6c
	// Line 458, Address: 0x1025d44, Func Offset: 0x74
	// Line 459, Address: 0x1025d48, Func Offset: 0x78
	// Line 460, Address: 0x1025d4c, Func Offset: 0x7c
	// Line 461, Address: 0x1025d58, Func Offset: 0x88
	// Line 463, Address: 0x1025d64, Func Offset: 0x94
	// Line 464, Address: 0x1025d8c, Func Offset: 0xbc
	// Line 466, Address: 0x1025d98, Func Offset: 0xc8
	// Line 467, Address: 0x1025da0, Func Offset: 0xd0
	// Line 468, Address: 0x1025da4, Func Offset: 0xd4
	// Line 469, Address: 0x1025db4, Func Offset: 0xe4
	// Line 470, Address: 0x1025dc4, Func Offset: 0xf4
	// Func End, Address: 0x1025ddc, Func Offset: 0x10c
}

// 
// Start address: 0x1025de0
void scroll_h()
{
	unsigned short wD4;
	// Line 482, Address: 0x1025de0, Func Offset: 0
	// Line 485, Address: 0x1025dec, Func Offset: 0xc
	// Line 486, Address: 0x1025df8, Func Offset: 0x18
	// Line 487, Address: 0x1025e00, Func Offset: 0x20
	// Line 488, Address: 0x1025e34, Func Offset: 0x54
	// Line 489, Address: 0x1025e48, Func Offset: 0x68
	// Line 490, Address: 0x1025e74, Func Offset: 0x94
	// Line 491, Address: 0x1025e88, Func Offset: 0xa8
	// Line 494, Address: 0x1025e90, Func Offset: 0xb0
	// Line 499, Address: 0x1025ea4, Func Offset: 0xc4
	// Func End, Address: 0x1025eb8, Func Offset: 0xd8
}

// 
// Start address: 0x1025ec0
void scrh_move()
{
	unsigned short wD0;
	// Line 501, Address: 0x1025ec0, Func Offset: 0
	// Line 504, Address: 0x1025ecc, Func Offset: 0xc
	// Line 505, Address: 0x1025ed8, Func Offset: 0x18
	// Line 506, Address: 0x1025eec, Func Offset: 0x2c
	// Line 507, Address: 0x1025f00, Func Offset: 0x40
	// Line 509, Address: 0x1025f0c, Func Offset: 0x4c
	// Line 510, Address: 0x1025f14, Func Offset: 0x54
	// Line 511, Address: 0x1025f1c, Func Offset: 0x5c
	// Line 512, Address: 0x1025f34, Func Offset: 0x74
	// Line 513, Address: 0x1025f40, Func Offset: 0x80
	// Line 515, Address: 0x1025f48, Func Offset: 0x88
	// Line 518, Address: 0x1025f54, Func Offset: 0x94
	// Func End, Address: 0x1025f68, Func Offset: 0xa8
}

// 
// Start address: 0x1025f70
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 521, Address: 0x1025f70, Func Offset: 0
	// Line 524, Address: 0x1025f7c, Func Offset: 0xc
	// Line 525, Address: 0x1025f9c, Func Offset: 0x2c
	// Line 528, Address: 0x1025fa4, Func Offset: 0x34
	// Line 529, Address: 0x1025fbc, Func Offset: 0x4c
	// Line 530, Address: 0x1025fec, Func Offset: 0x7c
	// Line 533, Address: 0x1025ff8, Func Offset: 0x88
	// Line 534, Address: 0x1026000, Func Offset: 0x90
	// Line 535, Address: 0x1026014, Func Offset: 0xa4
	// Line 536, Address: 0x1026044, Func Offset: 0xd4
	// Line 537, Address: 0x1026050, Func Offset: 0xe0
	// Line 539, Address: 0x1026058, Func Offset: 0xe8
	// Func End, Address: 0x1026068, Func Offset: 0xf8
}

// 
// Start address: 0x1026070
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 542, Address: 0x1026070, Func Offset: 0
	// Line 545, Address: 0x102607c, Func Offset: 0xc
	// Line 546, Address: 0x102609c, Func Offset: 0x2c
	// Line 549, Address: 0x10260a4, Func Offset: 0x34
	// Line 550, Address: 0x10260bc, Func Offset: 0x4c
	// Line 551, Address: 0x10260ec, Func Offset: 0x7c
	// Line 554, Address: 0x10260f8, Func Offset: 0x88
	// Line 555, Address: 0x1026100, Func Offset: 0x90
	// Line 556, Address: 0x1026114, Func Offset: 0xa4
	// Line 557, Address: 0x1026144, Func Offset: 0xd4
	// Line 558, Address: 0x1026150, Func Offset: 0xe0
	// Line 560, Address: 0x1026158, Func Offset: 0xe8
	// Func End, Address: 0x1026168, Func Offset: 0xf8
}

// 
// Start address: 0x1026170
void scroll_v()
{
	unsigned short wD0;
	// Line 579, Address: 0x1026170, Func Offset: 0
	// Line 582, Address: 0x102617c, Func Offset: 0xc
	// Line 583, Address: 0x10261a8, Func Offset: 0x38
	// Line 584, Address: 0x10261c0, Func Offset: 0x50
	// Line 587, Address: 0x10261c8, Func Offset: 0x58
	// Line 588, Address: 0x10261e0, Func Offset: 0x70
	// Line 589, Address: 0x10261e8, Func Offset: 0x78
	// Line 590, Address: 0x1026208, Func Offset: 0x98
	// Line 591, Address: 0x102621c, Func Offset: 0xac
	// Line 592, Address: 0x1026228, Func Offset: 0xb8
	// Line 594, Address: 0x1026230, Func Offset: 0xc0
	// Line 595, Address: 0x1026244, Func Offset: 0xd4
	// Line 596, Address: 0x1026254, Func Offset: 0xe4
	// Line 597, Address: 0x102625c, Func Offset: 0xec
	// Line 598, Address: 0x1026268, Func Offset: 0xf8
	// Line 600, Address: 0x1026270, Func Offset: 0x100
	// Line 601, Address: 0x1026278, Func Offset: 0x108
	// Line 602, Address: 0x102628c, Func Offset: 0x11c
	// Line 603, Address: 0x1026294, Func Offset: 0x124
	// Line 609, Address: 0x102629c, Func Offset: 0x12c
	// Line 610, Address: 0x10262b0, Func Offset: 0x140
	// Line 611, Address: 0x10262b8, Func Offset: 0x148
	// Line 612, Address: 0x10262c4, Func Offset: 0x154
	// Line 614, Address: 0x10262cc, Func Offset: 0x15c
	// Line 615, Address: 0x10262e0, Func Offset: 0x170
	// Line 616, Address: 0x10262e8, Func Offset: 0x178
	// Line 621, Address: 0x10262f0, Func Offset: 0x180
	// Line 623, Address: 0x10262f8, Func Offset: 0x188
	// Func End, Address: 0x102630c, Func Offset: 0x19c
}

// 
// Start address: 0x1026310
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 629, Address: 0x1026310, Func Offset: 0
	// Line 632, Address: 0x1026320, Func Offset: 0x10
	// Line 633, Address: 0x102633c, Func Offset: 0x2c
	// Line 634, Address: 0x1026348, Func Offset: 0x38
	// Line 637, Address: 0x1026350, Func Offset: 0x40
	// Line 638, Address: 0x102635c, Func Offset: 0x4c
	// Line 639, Address: 0x1026374, Func Offset: 0x64
	// Line 642, Address: 0x1026390, Func Offset: 0x80
	// Line 643, Address: 0x10263a0, Func Offset: 0x90
	// Line 644, Address: 0x10263ac, Func Offset: 0x9c
	// Line 646, Address: 0x10263b4, Func Offset: 0xa4
	// Line 647, Address: 0x10263d4, Func Offset: 0xc4
	// Line 648, Address: 0x10263e0, Func Offset: 0xd0
	// Line 649, Address: 0x10263e8, Func Offset: 0xd8
	// Line 650, Address: 0x1026408, Func Offset: 0xf8
	// Line 651, Address: 0x1026414, Func Offset: 0x104
	// Line 653, Address: 0x102641c, Func Offset: 0x10c
	// Line 657, Address: 0x1026428, Func Offset: 0x118
	// Func End, Address: 0x102643c, Func Offset: 0x12c
}

// 
// Start address: 0x1026440
void sv_move_main1(unsigned short wD0)
{
	// Line 661, Address: 0x1026440, Func Offset: 0
	// Line 663, Address: 0x102644c, Func Offset: 0xc
	// Line 664, Address: 0x102646c, Func Offset: 0x2c
	// Line 665, Address: 0x1026478, Func Offset: 0x38
	// Line 666, Address: 0x1026480, Func Offset: 0x40
	// Line 667, Address: 0x10264a0, Func Offset: 0x60
	// Line 668, Address: 0x10264ac, Func Offset: 0x6c
	// Line 670, Address: 0x10264b4, Func Offset: 0x74
	// Line 673, Address: 0x10264c0, Func Offset: 0x80
	// Func End, Address: 0x10264d0, Func Offset: 0x90
}

// 
// Start address: 0x10264d0
void sv_move_main2(unsigned short wD0)
{
	// Line 676, Address: 0x10264d0, Func Offset: 0
	// Line 678, Address: 0x10264dc, Func Offset: 0xc
	// Line 679, Address: 0x10264fc, Func Offset: 0x2c
	// Line 680, Address: 0x1026508, Func Offset: 0x38
	// Line 681, Address: 0x1026510, Func Offset: 0x40
	// Line 682, Address: 0x1026530, Func Offset: 0x60
	// Line 683, Address: 0x102653c, Func Offset: 0x6c
	// Line 685, Address: 0x1026544, Func Offset: 0x74
	// Line 688, Address: 0x1026550, Func Offset: 0x80
	// Func End, Address: 0x1026560, Func Offset: 0x90
}

// 
// Start address: 0x1026560
void sv_move_sub2()
{
	// Line 691, Address: 0x1026560, Func Offset: 0
	// Line 692, Address: 0x1026568, Func Offset: 0x8
	// Line 693, Address: 0x1026570, Func Offset: 0x10
	// Line 694, Address: 0x102657c, Func Offset: 0x1c
	// Func End, Address: 0x102658c, Func Offset: 0x2c
}

// 
// Start address: 0x1026590
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 697, Address: 0x1026590, Func Offset: 0
	// Line 700, Address: 0x102659c, Func Offset: 0xc
	// Line 701, Address: 0x10265a0, Func Offset: 0x10
	// Line 702, Address: 0x10265a8, Func Offset: 0x18
	// Line 703, Address: 0x10265c4, Func Offset: 0x34
	// Line 704, Address: 0x10265e0, Func Offset: 0x50
	// Line 705, Address: 0x10265ec, Func Offset: 0x5c
	// Line 707, Address: 0x10265f4, Func Offset: 0x64
	// Line 710, Address: 0x1026600, Func Offset: 0x70
	// Func End, Address: 0x1026610, Func Offset: 0x80
}

// 
// Start address: 0x1026610
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 715, Address: 0x1026610, Func Offset: 0
	// Line 719, Address: 0x1026620, Func Offset: 0x10
	// Line 720, Address: 0x102663c, Func Offset: 0x2c
	// Line 721, Address: 0x1026648, Func Offset: 0x38
	// Line 723, Address: 0x102665c, Func Offset: 0x4c
	// Line 724, Address: 0x1026664, Func Offset: 0x54
	// Line 725, Address: 0x102666c, Func Offset: 0x5c
	// Line 726, Address: 0x1026670, Func Offset: 0x60
	// Line 727, Address: 0x102667c, Func Offset: 0x6c
	// Func End, Address: 0x1026690, Func Offset: 0x80
}

// 
// Start address: 0x1026690
void scrv_up_ch(_anon2 lD1)
{
	// Line 731, Address: 0x1026690, Func Offset: 0
	// Line 732, Address: 0x102669c, Func Offset: 0xc
	// Line 733, Address: 0x10266c4, Func Offset: 0x34
	// Line 734, Address: 0x10266dc, Func Offset: 0x4c
	// Line 735, Address: 0x10266e8, Func Offset: 0x58
	// Line 736, Address: 0x10266fc, Func Offset: 0x6c
	// Line 737, Address: 0x1026710, Func Offset: 0x80
	// Line 738, Address: 0x1026724, Func Offset: 0x94
	// Line 741, Address: 0x102672c, Func Offset: 0x9c
	// Line 744, Address: 0x1026738, Func Offset: 0xa8
	// Line 746, Address: 0x1026744, Func Offset: 0xb4
	// Func End, Address: 0x1026754, Func Offset: 0xc4
}

// 
// Start address: 0x1026760
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 752, Address: 0x1026760, Func Offset: 0
	// Line 756, Address: 0x1026770, Func Offset: 0x10
	// Line 757, Address: 0x1026774, Func Offset: 0x14
	// Line 758, Address: 0x102677c, Func Offset: 0x1c
	// Line 759, Address: 0x1026788, Func Offset: 0x28
	// Line 761, Address: 0x102679c, Func Offset: 0x3c
	// Line 762, Address: 0x10267a4, Func Offset: 0x44
	// Line 763, Address: 0x10267ac, Func Offset: 0x4c
	// Line 765, Address: 0x10267b0, Func Offset: 0x50
	// Line 767, Address: 0x10267bc, Func Offset: 0x5c
	// Func End, Address: 0x10267d0, Func Offset: 0x70
}

// 
// Start address: 0x10267d0
void scrv_down_ch(_anon2 lD1)
{
	// Line 771, Address: 0x10267d0, Func Offset: 0
	// Line 772, Address: 0x10267dc, Func Offset: 0xc
	// Line 773, Address: 0x1026804, Func Offset: 0x34
	// Line 774, Address: 0x1026810, Func Offset: 0x40
	// Line 775, Address: 0x1026824, Func Offset: 0x54
	// Line 776, Address: 0x1026838, Func Offset: 0x68
	// Line 777, Address: 0x102684c, Func Offset: 0x7c
	// Line 778, Address: 0x1026860, Func Offset: 0x90
	// Line 780, Address: 0x1026868, Func Offset: 0x98
	// Line 783, Address: 0x1026874, Func Offset: 0xa4
	// Line 785, Address: 0x1026880, Func Offset: 0xb0
	// Func End, Address: 0x1026890, Func Offset: 0xc0
}

// 
// Start address: 0x1026890
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 788, Address: 0x1026890, Func Offset: 0
	// Line 791, Address: 0x10268a0, Func Offset: 0x10
	// Line 793, Address: 0x10268ac, Func Offset: 0x1c
	// Line 794, Address: 0x10268b4, Func Offset: 0x24
	// Line 795, Address: 0x10268bc, Func Offset: 0x2c
	// Line 797, Address: 0x10268c0, Func Offset: 0x30
	// Line 798, Address: 0x10268e8, Func Offset: 0x58
	// Line 801, Address: 0x10268f4, Func Offset: 0x64
	// Line 802, Address: 0x1026928, Func Offset: 0x98
	// Line 803, Address: 0x102693c, Func Offset: 0xac
	// Line 805, Address: 0x1026968, Func Offset: 0xd8
	// Line 806, Address: 0x102697c, Func Offset: 0xec
	// Line 808, Address: 0x1026984, Func Offset: 0xf4
	// Line 813, Address: 0x1026998, Func Offset: 0x108
	// Func End, Address: 0x10269ac, Func Offset: 0x11c
}

// 
// Start address: 0x10269b0
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 817, Address: 0x10269b0, Func Offset: 0
	// Line 820, Address: 0x10269bc, Func Offset: 0xc
	// Line 821, Address: 0x10269cc, Func Offset: 0x1c
	// Line 822, Address: 0x10269dc, Func Offset: 0x2c
	// Line 824, Address: 0x10269e8, Func Offset: 0x38
	// Line 826, Address: 0x1026a1c, Func Offset: 0x6c
	// Line 827, Address: 0x1026a30, Func Offset: 0x80
	// Line 828, Address: 0x1026a40, Func Offset: 0x90
	// Line 829, Address: 0x1026a54, Func Offset: 0xa4
	// Line 830, Address: 0x1026a68, Func Offset: 0xb8
	// Line 833, Address: 0x1026a70, Func Offset: 0xc0
	// Line 838, Address: 0x1026a84, Func Offset: 0xd4
	// Line 839, Address: 0x1026a94, Func Offset: 0xe4
	// Line 840, Address: 0x1026aa4, Func Offset: 0xf4
	// Line 841, Address: 0x1026abc, Func Offset: 0x10c
	// Line 843, Address: 0x1026ac8, Func Offset: 0x118
	// Line 845, Address: 0x1026afc, Func Offset: 0x14c
	// Line 846, Address: 0x1026b10, Func Offset: 0x160
	// Line 847, Address: 0x1026b20, Func Offset: 0x170
	// Line 848, Address: 0x1026b34, Func Offset: 0x184
	// Line 849, Address: 0x1026b48, Func Offset: 0x198
	// Line 852, Address: 0x1026b50, Func Offset: 0x1a0
	// Line 857, Address: 0x1026b64, Func Offset: 0x1b4
	// Func End, Address: 0x1026b70, Func Offset: 0x1c0
}

// 
// Start address: 0x1026b70
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 864, Address: 0x1026b70, Func Offset: 0
	// Line 867, Address: 0x1026b7c, Func Offset: 0xc
	// Line 868, Address: 0x1026b88, Func Offset: 0x18
	// Line 870, Address: 0x1026b94, Func Offset: 0x24
	// Line 871, Address: 0x1026bc0, Func Offset: 0x50
	// Line 872, Address: 0x1026bd4, Func Offset: 0x64
	// Line 873, Address: 0x1026c04, Func Offset: 0x94
	// Line 874, Address: 0x1026c18, Func Offset: 0xa8
	// Line 877, Address: 0x1026c20, Func Offset: 0xb0
	// Line 882, Address: 0x1026c34, Func Offset: 0xc4
	// Func End, Address: 0x1026c44, Func Offset: 0xd4
}

// 
// Start address: 0x1026c50
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 886, Address: 0x1026c50, Func Offset: 0
	// Line 890, Address: 0x1026c60, Func Offset: 0x10
	// Line 891, Address: 0x1026c6c, Func Offset: 0x1c
	// Line 892, Address: 0x1026c7c, Func Offset: 0x2c
	// Line 894, Address: 0x1026c88, Func Offset: 0x38
	// Line 895, Address: 0x1026c90, Func Offset: 0x40
	// Line 896, Address: 0x1026c98, Func Offset: 0x48
	// Line 898, Address: 0x1026ca4, Func Offset: 0x54
	// Line 899, Address: 0x1026cb0, Func Offset: 0x60
	// Line 900, Address: 0x1026cc4, Func Offset: 0x74
	// Line 901, Address: 0x1026cd0, Func Offset: 0x80
	// Line 902, Address: 0x1026ce4, Func Offset: 0x94
	// Line 903, Address: 0x1026cf4, Func Offset: 0xa4
	// Line 904, Address: 0x1026d08, Func Offset: 0xb8
	// Line 905, Address: 0x1026d24, Func Offset: 0xd4
	// Line 908, Address: 0x1026d2c, Func Offset: 0xdc
	// Line 913, Address: 0x1026d4c, Func Offset: 0xfc
	// Func End, Address: 0x1026d5c, Func Offset: 0x10c
}

// 
// Start address: 0x1026d60
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 916, Address: 0x1026d60, Func Offset: 0
	// Line 920, Address: 0x1026d70, Func Offset: 0x10
	// Line 921, Address: 0x1026d7c, Func Offset: 0x1c
	// Line 922, Address: 0x1026d8c, Func Offset: 0x2c
	// Line 924, Address: 0x1026d98, Func Offset: 0x38
	// Line 925, Address: 0x1026da0, Func Offset: 0x40
	// Line 926, Address: 0x1026da8, Func Offset: 0x48
	// Line 928, Address: 0x1026db4, Func Offset: 0x54
	// Line 929, Address: 0x1026dc0, Func Offset: 0x60
	// Line 930, Address: 0x1026dd4, Func Offset: 0x74
	// Line 931, Address: 0x1026de0, Func Offset: 0x80
	// Line 932, Address: 0x1026df4, Func Offset: 0x94
	// Line 933, Address: 0x1026e04, Func Offset: 0xa4
	// Line 934, Address: 0x1026e18, Func Offset: 0xb8
	// Line 935, Address: 0x1026e34, Func Offset: 0xd4
	// Line 938, Address: 0x1026e3c, Func Offset: 0xdc
	// Line 943, Address: 0x1026e5c, Func Offset: 0xfc
	// Func End, Address: 0x1026e6c, Func Offset: 0x10c
}

// 
// Start address: 0x1026e70
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 955, Address: 0x1026e70, Func Offset: 0
	// Line 959, Address: 0x1026e80, Func Offset: 0x10
	// Line 960, Address: 0x1026e8c, Func Offset: 0x1c
	// Line 961, Address: 0x1026e9c, Func Offset: 0x2c
	// Line 963, Address: 0x1026ea8, Func Offset: 0x38
	// Line 964, Address: 0x1026eb0, Func Offset: 0x40
	// Line 965, Address: 0x1026eb8, Func Offset: 0x48
	// Line 967, Address: 0x1026ec4, Func Offset: 0x54
	// Line 968, Address: 0x1026ed0, Func Offset: 0x60
	// Line 969, Address: 0x1026ee4, Func Offset: 0x74
	// Line 970, Address: 0x1026ef0, Func Offset: 0x80
	// Line 971, Address: 0x1026f04, Func Offset: 0x94
	// Line 972, Address: 0x1026f14, Func Offset: 0xa4
	// Line 973, Address: 0x1026f28, Func Offset: 0xb8
	// Line 974, Address: 0x1026f44, Func Offset: 0xd4
	// Line 977, Address: 0x1026f4c, Func Offset: 0xdc
	// Line 982, Address: 0x1026f6c, Func Offset: 0xfc
	// Func End, Address: 0x1026f7c, Func Offset: 0x10c
}

// 
// Start address: 0x1026f80
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 996, Address: 0x1026f80, Func Offset: 0
	// Line 1002, Address: 0x1026f9c, Func Offset: 0x1c
	// Line 1003, Address: 0x1026fa0, Func Offset: 0x20
	// Line 1004, Address: 0x1026fac, Func Offset: 0x2c
	// Line 1005, Address: 0x1026fb8, Func Offset: 0x38
	// Line 1006, Address: 0x1026fc0, Func Offset: 0x40
	// Line 1007, Address: 0x1026fc8, Func Offset: 0x48
	// Line 1009, Address: 0x1026fdc, Func Offset: 0x5c
	// Line 1010, Address: 0x1026fe8, Func Offset: 0x68
	// Line 1011, Address: 0x1026ff4, Func Offset: 0x74
	// Line 1012, Address: 0x1026ffc, Func Offset: 0x7c
	// Line 1014, Address: 0x1027004, Func Offset: 0x84
	// Func End, Address: 0x1027028, Func Offset: 0xa8
}

// 
// Start address: 0x1027030
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
	// Line 1027, Address: 0x1027030, Func Offset: 0
	// Line 1036, Address: 0x1027050, Func Offset: 0x20
	// Line 1037, Address: 0x1027054, Func Offset: 0x24
	// Line 1038, Address: 0x1027060, Func Offset: 0x30
	// Line 1039, Address: 0x102706c, Func Offset: 0x3c
	// Line 1040, Address: 0x1027074, Func Offset: 0x44
	// Line 1041, Address: 0x102707c, Func Offset: 0x4c
	// Line 1043, Address: 0x1027090, Func Offset: 0x60
	// Line 1044, Address: 0x1027094, Func Offset: 0x64
	// Line 1045, Address: 0x10270a0, Func Offset: 0x70
	// Line 1046, Address: 0x10270ac, Func Offset: 0x7c
	// Line 1047, Address: 0x10270b4, Func Offset: 0x84
	// Line 1049, Address: 0x10270bc, Func Offset: 0x8c
	// Line 1050, Address: 0x10270c8, Func Offset: 0x98
	// Line 1051, Address: 0x10270dc, Func Offset: 0xac
	// Line 1053, Address: 0x10270e8, Func Offset: 0xb8
	// Line 1054, Address: 0x10270f0, Func Offset: 0xc0
	// Line 1056, Address: 0x10270f8, Func Offset: 0xc8
	// Line 1058, Address: 0x1027118, Func Offset: 0xe8
	// Line 1064, Address: 0x1027144, Func Offset: 0x114
	// Line 1065, Address: 0x1027158, Func Offset: 0x128
	// Line 1067, Address: 0x1027164, Func Offset: 0x134
	// Line 1068, Address: 0x102716c, Func Offset: 0x13c
	// Line 1069, Address: 0x1027174, Func Offset: 0x144
	// Line 1071, Address: 0x1027194, Func Offset: 0x164
	// Line 1077, Address: 0x10271c0, Func Offset: 0x190
	// Line 1078, Address: 0x10271d4, Func Offset: 0x1a4
	// Line 1080, Address: 0x10271e0, Func Offset: 0x1b0
	// Line 1081, Address: 0x10271e8, Func Offset: 0x1b8
	// Line 1082, Address: 0x10271f0, Func Offset: 0x1c0
	// Line 1084, Address: 0x1027210, Func Offset: 0x1e0
	// Line 1090, Address: 0x102723c, Func Offset: 0x20c
	// Line 1091, Address: 0x1027250, Func Offset: 0x220
	// Line 1093, Address: 0x102725c, Func Offset: 0x22c
	// Line 1094, Address: 0x1027264, Func Offset: 0x234
	// Line 1095, Address: 0x102726c, Func Offset: 0x23c
	// Line 1097, Address: 0x102728c, Func Offset: 0x25c
	// Line 1106, Address: 0x10272b8, Func Offset: 0x288
	// Func End, Address: 0x10272e0, Func Offset: 0x2b0
}

// 
// Start address: 0x10272e0
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
	// Line 1123, Address: 0x10272e0, Func Offset: 0
	// Line 1134, Address: 0x102730c, Func Offset: 0x2c
	// Line 1136, Address: 0x1027314, Func Offset: 0x34
	// Line 1137, Address: 0x102732c, Func Offset: 0x4c
	// Line 1138, Address: 0x1027340, Func Offset: 0x60
	// Line 1140, Address: 0x1027348, Func Offset: 0x68
	// Line 1142, Address: 0x102735c, Func Offset: 0x7c
	// Line 1143, Address: 0x1027374, Func Offset: 0x94
	// Line 1144, Address: 0x1027388, Func Offset: 0xa8
	// Line 1145, Address: 0x1027390, Func Offset: 0xb0
	// Line 1147, Address: 0x1027398, Func Offset: 0xb8
	// Line 1148, Address: 0x10273ac, Func Offset: 0xcc
	// Line 1153, Address: 0x10273b4, Func Offset: 0xd4
	// Line 1154, Address: 0x1027404, Func Offset: 0x124
	// Line 1155, Address: 0x102740c, Func Offset: 0x12c
	// Line 1161, Address: 0x102742c, Func Offset: 0x14c
	// Line 1162, Address: 0x102744c, Func Offset: 0x16c
	// Line 1163, Address: 0x1027470, Func Offset: 0x190
	// Line 1164, Address: 0x102747c, Func Offset: 0x19c
	// Line 1165, Address: 0x1027484, Func Offset: 0x1a4
	// Line 1167, Address: 0x10274a4, Func Offset: 0x1c4
	// Line 1171, Address: 0x10274d0, Func Offset: 0x1f0
	// Line 1174, Address: 0x10274d8, Func Offset: 0x1f8
	// Line 1175, Address: 0x10274dc, Func Offset: 0x1fc
	// Line 1179, Address: 0x10274fc, Func Offset: 0x21c
	// Line 1186, Address: 0x1027528, Func Offset: 0x248
	// Line 1193, Address: 0x102753c, Func Offset: 0x25c
	// Line 1194, Address: 0x1027544, Func Offset: 0x264
	// Line 1195, Address: 0x102754c, Func Offset: 0x26c
	// Line 1196, Address: 0x1027564, Func Offset: 0x284
	// Line 1197, Address: 0x1027584, Func Offset: 0x2a4
	// Line 1201, Address: 0x102758c, Func Offset: 0x2ac
	// Line 1203, Address: 0x10275bc, Func Offset: 0x2dc
	// Line 1204, Address: 0x10275c8, Func Offset: 0x2e8
	// Line 1208, Address: 0x10275d8, Func Offset: 0x2f8
	// Line 1209, Address: 0x10275e4, Func Offset: 0x304
	// Line 1210, Address: 0x1027604, Func Offset: 0x324
	// Line 1211, Address: 0x1027610, Func Offset: 0x330
	// Line 1212, Address: 0x102763c, Func Offset: 0x35c
	// Line 1213, Address: 0x102765c, Func Offset: 0x37c
	// Line 1215, Address: 0x1027680, Func Offset: 0x3a0
	// Line 1218, Address: 0x10276a4, Func Offset: 0x3c4
	// Line 1220, Address: 0x10276c4, Func Offset: 0x3e4
	// Line 1223, Address: 0x10276d8, Func Offset: 0x3f8
	// Line 1224, Address: 0x10276e4, Func Offset: 0x404
	// Line 1225, Address: 0x10276f4, Func Offset: 0x414
	// Line 1227, Address: 0x10276fc, Func Offset: 0x41c
	// Func End, Address: 0x1027724, Func Offset: 0x444
}

// 
// Start address: 0x1027730
void scrollwrtc()
{
	// Line 1233, Address: 0x1027730, Func Offset: 0
	// Func End, Address: 0x1027738, Func Offset: 0x8
}

// 
// Start address: 0x1027740
void scrollwrtz()
{
	// Line 1238, Address: 0x1027740, Func Offset: 0
	// Func End, Address: 0x1027748, Func Offset: 0x8
}

// 
// Start address: 0x1027750
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1256, Address: 0x1027750, Func Offset: 0
	// Line 1269, Address: 0x1027778, Func Offset: 0x28
	// Line 1272, Address: 0x1027798, Func Offset: 0x48
	// Line 1273, Address: 0x10277ac, Func Offset: 0x5c
	// Line 1274, Address: 0x10277c0, Func Offset: 0x70
	// Line 1275, Address: 0x10277d4, Func Offset: 0x84
	// Line 1277, Address: 0x10277e8, Func Offset: 0x98
	// Line 1278, Address: 0x10277f4, Func Offset: 0xa4
	// Line 1279, Address: 0x1027808, Func Offset: 0xb8
	// Func End, Address: 0x1027818, Func Offset: 0xc8
}

// 
// Start address: 0x1027820
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1283, Address: 0x1027820, Func Offset: 0
	// Line 1287, Address: 0x1027848, Func Offset: 0x28
	// Line 1290, Address: 0x1027868, Func Offset: 0x48
	// Line 1291, Address: 0x102787c, Func Offset: 0x5c
	// Line 1292, Address: 0x1027890, Func Offset: 0x70
	// Line 1293, Address: 0x10278a4, Func Offset: 0x84
	// Line 1295, Address: 0x10278b8, Func Offset: 0x98
	// Line 1296, Address: 0x10278c4, Func Offset: 0xa4
	// Line 1297, Address: 0x10278d8, Func Offset: 0xb8
	// Func End, Address: 0x10278e8, Func Offset: 0xc8
}

// 
// Start address: 0x10278f0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1317, Address: 0x10278f0, Func Offset: 0
	// Line 1321, Address: 0x1027918, Func Offset: 0x28
	// Line 1324, Address: 0x1027938, Func Offset: 0x48
	// Line 1325, Address: 0x102794c, Func Offset: 0x5c
	// Line 1326, Address: 0x102795c, Func Offset: 0x6c
	// Line 1327, Address: 0x1027970, Func Offset: 0x80
	// Line 1329, Address: 0x1027980, Func Offset: 0x90
	// Line 1330, Address: 0x102798c, Func Offset: 0x9c
	// Line 1331, Address: 0x10279a0, Func Offset: 0xb0
	// Func End, Address: 0x10279b0, Func Offset: 0xc0
}

// 
// Start address: 0x10279b0
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
	// Line 1350, Address: 0x10279b0, Func Offset: 0
	// Line 1351, Address: 0x10279e4, Func Offset: 0x34
	// Line 1356, Address: 0x10279e8, Func Offset: 0x38
	// Line 1358, Address: 0x10279f8, Func Offset: 0x48
	// Line 1359, Address: 0x10279fc, Func Offset: 0x4c
	// Line 1360, Address: 0x1027a04, Func Offset: 0x54
	// Line 1362, Address: 0x1027a14, Func Offset: 0x64
	// Line 1364, Address: 0x1027a18, Func Offset: 0x68
	// Line 1365, Address: 0x1027a20, Func Offset: 0x70
	// Line 1368, Address: 0x1027a28, Func Offset: 0x78
	// Line 1369, Address: 0x1027a30, Func Offset: 0x80
	// Line 1370, Address: 0x1027a3c, Func Offset: 0x8c
	// Line 1372, Address: 0x1027a48, Func Offset: 0x98
	// Line 1373, Address: 0x1027a50, Func Offset: 0xa0
	// Line 1374, Address: 0x1027a58, Func Offset: 0xa8
	// Line 1375, Address: 0x1027a60, Func Offset: 0xb0
	// Line 1377, Address: 0x1027a6c, Func Offset: 0xbc
	// Line 1378, Address: 0x1027a74, Func Offset: 0xc4
	// Line 1379, Address: 0x1027a7c, Func Offset: 0xcc
	// Line 1380, Address: 0x1027a84, Func Offset: 0xd4
	// Line 1382, Address: 0x1027a90, Func Offset: 0xe0
	// Line 1383, Address: 0x1027a98, Func Offset: 0xe8
	// Line 1384, Address: 0x1027aa0, Func Offset: 0xf0
	// Line 1387, Address: 0x1027aa8, Func Offset: 0xf8
	// Line 1388, Address: 0x1027ab0, Func Offset: 0x100
	// Line 1391, Address: 0x1027ab8, Func Offset: 0x108
	// Line 1392, Address: 0x1027afc, Func Offset: 0x14c
	// Line 1393, Address: 0x1027b40, Func Offset: 0x190
	// Line 1394, Address: 0x1027b84, Func Offset: 0x1d4
	// Line 1396, Address: 0x1027bc8, Func Offset: 0x218
	// Func End, Address: 0x1027bf8, Func Offset: 0x248
}

// 
// Start address: 0x1027c00
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1414, Address: 0x1027c00, Func Offset: 0
	// Line 1415, Address: 0x1027c20, Func Offset: 0x20
	// Line 1416, Address: 0x1027c40, Func Offset: 0x40
	// Func End, Address: 0x1027c50, Func Offset: 0x50
}

// 
// Start address: 0x1027c50
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1418, Address: 0x1027c50, Func Offset: 0
	// Line 1419, Address: 0x1027c70, Func Offset: 0x20
	// Line 1420, Address: 0x1027c74, Func Offset: 0x24
	// Line 1421, Address: 0x1027c94, Func Offset: 0x44
	// Func End, Address: 0x1027ca4, Func Offset: 0x54
}

// 
// Start address: 0x1027cb0
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1428, Address: 0x1027cb0, Func Offset: 0
	// Line 1434, Address: 0x1027ce0, Func Offset: 0x30
	// Line 1435, Address: 0x1027cf0, Func Offset: 0x40
	// Line 1441, Address: 0x1027d00, Func Offset: 0x50
	// Line 1442, Address: 0x1027d1c, Func Offset: 0x6c
	// Line 1443, Address: 0x1027d20, Func Offset: 0x70
	// Line 1444, Address: 0x1027d3c, Func Offset: 0x8c
	// Line 1445, Address: 0x1027d40, Func Offset: 0x90
	// Line 1446, Address: 0x1027d60, Func Offset: 0xb0
	// Line 1447, Address: 0x1027d68, Func Offset: 0xb8
	// Line 1448, Address: 0x1027d88, Func Offset: 0xd8
	// Line 1449, Address: 0x1027d90, Func Offset: 0xe0
	// Line 1450, Address: 0x1027dd8, Func Offset: 0x128
	// Line 1452, Address: 0x1027de4, Func Offset: 0x134
	// Line 1454, Address: 0x1027e00, Func Offset: 0x150
	// Line 1459, Address: 0x1027e08, Func Offset: 0x158
	// Line 1460, Address: 0x1027e14, Func Offset: 0x164
	// Line 1463, Address: 0x1027e20, Func Offset: 0x170
	// Line 1464, Address: 0x1027e28, Func Offset: 0x178
	// Line 1465, Address: 0x1027e48, Func Offset: 0x198
	// Line 1466, Address: 0x1027e64, Func Offset: 0x1b4
	// Line 1467, Address: 0x1027e6c, Func Offset: 0x1bc
	// Line 1468, Address: 0x1027e8c, Func Offset: 0x1dc
	// Line 1470, Address: 0x1027ea8, Func Offset: 0x1f8
	// Line 1471, Address: 0x1027eb0, Func Offset: 0x200
	// Line 1472, Address: 0x1027eb8, Func Offset: 0x208
	// Line 1473, Address: 0x1027ec4, Func Offset: 0x214
	// Line 1474, Address: 0x1027edc, Func Offset: 0x22c
	// Line 1476, Address: 0x1027eec, Func Offset: 0x23c
	// Line 1479, Address: 0x1027ef8, Func Offset: 0x248
	// Line 1480, Address: 0x1027f00, Func Offset: 0x250
	// Line 1481, Address: 0x1027f04, Func Offset: 0x254
	// Func End, Address: 0x1027f24, Func Offset: 0x274
}

// 
// Start address: 0x1027f30
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1501, Address: 0x1027f30, Func Offset: 0
	// Line 1509, Address: 0x1027f58, Func Offset: 0x28
	// Line 1510, Address: 0x1027fbc, Func Offset: 0x8c
	// Line 1516, Address: 0x1027fc4, Func Offset: 0x94
	// Line 1517, Address: 0x1027fcc, Func Offset: 0x9c
	// Line 1518, Address: 0x1027fec, Func Offset: 0xbc
	// Line 1519, Address: 0x1028008, Func Offset: 0xd8
	// Line 1520, Address: 0x1028010, Func Offset: 0xe0
	// Line 1521, Address: 0x1028030, Func Offset: 0x100
	// Line 1524, Address: 0x102804c, Func Offset: 0x11c
	// Line 1525, Address: 0x1028054, Func Offset: 0x124
	// Line 1526, Address: 0x102805c, Func Offset: 0x12c
	// Line 1527, Address: 0x1028068, Func Offset: 0x138
	// Line 1528, Address: 0x1028080, Func Offset: 0x150
	// Line 1529, Address: 0x1028088, Func Offset: 0x158
	// Line 1534, Address: 0x1028098, Func Offset: 0x168
	// Line 1537, Address: 0x10280a4, Func Offset: 0x174
	// Line 1538, Address: 0x10280ac, Func Offset: 0x17c
	// Line 1539, Address: 0x10280b0, Func Offset: 0x180
	// Func End, Address: 0x10280cc, Func Offset: 0x19c
}

// 
// Start address: 0x10280d0
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1553, Address: 0x10280d0, Func Offset: 0
	// Line 1560, Address: 0x10280ec, Func Offset: 0x1c
	// Line 1561, Address: 0x10280f0, Func Offset: 0x20
	// Line 1562, Address: 0x10280f8, Func Offset: 0x28
	// Line 1563, Address: 0x102811c, Func Offset: 0x4c
	// Line 1564, Address: 0x1028128, Func Offset: 0x58
	// Line 1565, Address: 0x1028140, Func Offset: 0x70
	// Line 1566, Address: 0x1028154, Func Offset: 0x84
	// Line 1571, Address: 0x102816c, Func Offset: 0x9c
	// Func End, Address: 0x1028184, Func Offset: 0xb4
}

// 
// Start address: 0x1028190
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1585, Address: 0x1028190, Func Offset: 0
	// Line 1586, Address: 0x102819c, Func Offset: 0xc
	// Line 1587, Address: 0x10281c8, Func Offset: 0x38
	// Line 1588, Address: 0x1028214, Func Offset: 0x84
	// Line 1589, Address: 0x1028240, Func Offset: 0xb0
	// Line 1591, Address: 0x102828c, Func Offset: 0xfc
	// Line 1597, Address: 0x1028298, Func Offset: 0x108
	// Line 1598, Address: 0x102829c, Func Offset: 0x10c
	// Func End, Address: 0x10282a8, Func Offset: 0x118
}

// 
// Start address: 0x10282b0
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1615, Address: 0x10282b0, Func Offset: 0
	// Line 1616, Address: 0x10282cc, Func Offset: 0x1c
	// Line 1618, Address: 0x10282e8, Func Offset: 0x38
	// Func End, Address: 0x10282f8, Func Offset: 0x48
}

// 
// Start address: 0x1028300
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1620, Address: 0x1028300, Func Offset: 0
	// Line 1621, Address: 0x102831c, Func Offset: 0x1c
	// Line 1622, Address: 0x1028320, Func Offset: 0x20
	// Line 1624, Address: 0x102833c, Func Offset: 0x3c
	// Func End, Address: 0x102834c, Func Offset: 0x4c
}

// 
// Start address: 0x1028350
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1626, Address: 0x1028350, Func Offset: 0
	// Line 1627, Address: 0x1028364, Func Offset: 0x14
	// Line 1629, Address: 0x1028380, Func Offset: 0x30
	// Func End, Address: 0x1028390, Func Offset: 0x40
}

// 
// Start address: 0x1028390
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1631, Address: 0x1028390, Func Offset: 0
	// Line 1632, Address: 0x10283ac, Func Offset: 0x1c
	// Line 1634, Address: 0x10283c8, Func Offset: 0x38
	// Func End, Address: 0x10283d8, Func Offset: 0x48
}

// 
// Start address: 0x10283e0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1636, Address: 0x10283e0, Func Offset: 0
	// Line 1637, Address: 0x10283f8, Func Offset: 0x18
	// Line 1638, Address: 0x1028408, Func Offset: 0x28
	// Line 1639, Address: 0x1028418, Func Offset: 0x38
	// Line 1640, Address: 0x1028424, Func Offset: 0x44
	// Line 1642, Address: 0x1028430, Func Offset: 0x50
	// Line 1643, Address: 0x102845c, Func Offset: 0x7c
	// Line 1646, Address: 0x1028488, Func Offset: 0xa8
	// Func End, Address: 0x1028494, Func Offset: 0xb4
}

// 
// Start address: 0x10284a0
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1662, Address: 0x10284a0, Func Offset: 0
	// Line 1667, Address: 0x10284b8, Func Offset: 0x18
	// Line 1668, Address: 0x10284c4, Func Offset: 0x24
	// Line 1669, Address: 0x10284d0, Func Offset: 0x30
	// Line 1670, Address: 0x10284d8, Func Offset: 0x38
	// Line 1671, Address: 0x10284dc, Func Offset: 0x3c
	// Line 1675, Address: 0x10284f4, Func Offset: 0x54
	// Line 1676, Address: 0x10284fc, Func Offset: 0x5c
	// Line 1677, Address: 0x1028500, Func Offset: 0x60
	// Line 1679, Address: 0x1028510, Func Offset: 0x70
	// Func End, Address: 0x1028530, Func Offset: 0x90
}

// 
// Start address: 0x1028530
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1682, Address: 0x1028530, Func Offset: 0
	// Line 1683, Address: 0x1028548, Func Offset: 0x18
	// Line 1684, Address: 0x1028568, Func Offset: 0x38
	// Func End, Address: 0x1028578, Func Offset: 0x48
}

// 
// Start address: 0x1028580
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1689, Address: 0x1028580, Func Offset: 0
	// Line 1693, Address: 0x10285a0, Func Offset: 0x20
	// Line 1696, Address: 0x10285bc, Func Offset: 0x3c
	// Line 1700, Address: 0x10285e4, Func Offset: 0x64
	// Line 1701, Address: 0x10285f0, Func Offset: 0x70
	// Line 1703, Address: 0x1028618, Func Offset: 0x98
	// Func End, Address: 0x1028628, Func Offset: 0xa8
}

// 
// Start address: 0x1028630
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	// Line 1709, Address: 0x1028630, Func Offset: 0
	// Line 1714, Address: 0x102864c, Func Offset: 0x1c
	// Line 1715, Address: 0x1028654, Func Offset: 0x24
	// Line 1718, Address: 0x102865c, Func Offset: 0x2c
	// Line 1719, Address: 0x1028660, Func Offset: 0x30
	// Line 1720, Address: 0x102866c, Func Offset: 0x3c
	// Line 1721, Address: 0x1028678, Func Offset: 0x48
	// Line 1722, Address: 0x102868c, Func Offset: 0x5c
	// Line 1723, Address: 0x10286ac, Func Offset: 0x7c
	// Line 1724, Address: 0x10286b4, Func Offset: 0x84
	// Line 1725, Address: 0x10286d8, Func Offset: 0xa8
	// Func End, Address: 0x10286f4, Func Offset: 0xc4
}

// 
// Start address: 0x1028700
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1747, Address: 0x1028700, Func Offset: 0
	// Line 1752, Address: 0x1028728, Func Offset: 0x28
	// Line 1753, Address: 0x1028738, Func Offset: 0x38
	// Line 1755, Address: 0x1028754, Func Offset: 0x54
	// Line 1756, Address: 0x1028778, Func Offset: 0x78
	// Line 1757, Address: 0x10287a0, Func Offset: 0xa0
	// Line 1758, Address: 0x10287ac, Func Offset: 0xac
	// Line 1759, Address: 0x10287b4, Func Offset: 0xb4
	// Line 1762, Address: 0x10287d0, Func Offset: 0xd0
	// Line 1766, Address: 0x10287f8, Func Offset: 0xf8
	// Line 1769, Address: 0x1028800, Func Offset: 0x100
	// Line 1770, Address: 0x1028804, Func Offset: 0x104
	// Line 1774, Address: 0x1028820, Func Offset: 0x120
	// Line 1781, Address: 0x1028848, Func Offset: 0x148
	// Func End, Address: 0x1028864, Func Offset: 0x164
}

// 
// Start address: 0x1028870
void mapinit()
{
	// Line 1785, Address: 0x1028870, Func Offset: 0
	// Line 1787, Address: 0x1028878, Func Offset: 0x8
	// Line 1788, Address: 0x102888c, Func Offset: 0x1c
	// Line 1791, Address: 0x10288a0, Func Offset: 0x30
	// Line 1792, Address: 0x10288c0, Func Offset: 0x50
	// Func End, Address: 0x10288d0, Func Offset: 0x60
}

// 
// Start address: 0x10288d0
void mapset()
{
	// Line 1803, Address: 0x10288d0, Func Offset: 0
	// Func End, Address: 0x10288d8, Func Offset: 0x8
}

