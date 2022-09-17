typedef struct tagPOINT;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef union _anon3;
typedef struct _anon4;
typedef union _anon5;
typedef struct _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef struct _anon9;

typedef void(*type_12)(char*);
typedef int(*type_16)(int, int, int, int, int);

typedef unsigned char type_0[2];
typedef unsigned char type_1[64];
typedef unsigned char type_2[64][8];
typedef unsigned char type_3[22];
typedef unsigned char type_4[64];
typedef unsigned char type_5[64][8];
typedef _anon0* type_6[8];
typedef short type_7[256];
typedef unsigned short type_8[2];
typedef _anon9 type_9[128];
typedef unsigned char type_10[4];
typedef int type_11[19];
typedef unsigned char type_13[10];
typedef _anon7 type_14[20];
typedef unsigned char type_15[129];
typedef unsigned char type_17[9];
typedef _anon7 type_18[0];
typedef unsigned short type_19[6];
typedef _anon0* type_20[8];
typedef int type_21[128];
typedef unsigned short type_22[4];
typedef unsigned short type_23[4][1024];
typedef unsigned short type_24[6];

struct tagPOINT
{
	int x;
	int y;
};

union _anon0
{
	int l;
	_anon1 w;
	_anon2 b;
};

struct _anon1
{
	short l;
	short h;
};

struct _anon2
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon3
{
	short w;
	_anon4 b;
};

struct _anon4
{
	char l;
	char h;
};

union _anon5
{
	unsigned short w;
	_anon6 b;
};

struct _anon6
{
	unsigned char l;
	unsigned char h;
};

struct _anon7
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon8
{
	unsigned char cnt;
	union
	{
		_anon7 spra[20];
		_anon7 spr[0];
	};
};

struct _anon9
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon8** patbase;
	_anon0 xposi;
	_anon0 yposi;
	_anon3 xspeed;
	_anon3 yspeed;
	_anon3 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon3 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon3 direc;
	_anon3 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

unsigned char z81awrttbl[129];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon9 actwk[128];
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
_anon5 scr_die;
_anon3 scr_timer;
_anon5 zone_flag;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon0 scra_v_posit;
_anon0 scra_h_posit;
unsigned char plflag;
int linework[128];
_anon0 scrc_h_posit;
_anon0 scrz_h_posit;
_anon0 scrb_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
short hscrollwork[256];
_anon0* lphscrollbuff;
_anon5 scrflagc;
_anon5 scrflagz;
_anon5 scrflagb;
_anon0 vscroll;
short scra_hz;
_anon5 scrflaga;
_anon3 scroll_start;
short scra_vz;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon5 scrflagaw;
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon5 scrflagbw;
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
void(*sOutputDebugString)(char*);
unsigned char play_start;

void enecginit();
void divdevset();
_anon9* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
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
void scrv_up_ch(_anon0 lD1);
void sv_move_plus(unsigned short wD1);
void scrv_down_ch(_anon0 lD1);
void scrv_move(_anon0 lD1);
void scrollb_hv(_anon0 lD4, _anon0 lD5);
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
void scr11a_test();
void mapwrt();
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase);
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6);
void mapwrt_z81a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();

// 
// Start address: 0x1023810
void enecginit()
{
	// Line 114, Address: 0x1023810, Func Offset: 0
	// Func End, Address: 0x1023818, Func Offset: 0x8
}

// 
// Start address: 0x1023820
void divdevset()
{
	// Line 118, Address: 0x1023820, Func Offset: 0
	// Func End, Address: 0x1023828, Func Offset: 0x8
}

// 
// Start address: 0x1023830
_anon9* main_chk()
{
	// Line 177, Address: 0x1023830, Func Offset: 0
	// Line 178, Address: 0x1023844, Func Offset: 0x14
	// Line 180, Address: 0x1023854, Func Offset: 0x24
	// Line 181, Address: 0x102385c, Func Offset: 0x2c
	// Func End, Address: 0x1023864, Func Offset: 0x34
}

// 
// Start address: 0x1023870
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 194, Address: 0x1023870, Func Offset: 0
	// Line 200, Address: 0x102387c, Func Offset: 0xc
	// Line 205, Address: 0x10238b0, Func Offset: 0x40
	// Line 207, Address: 0x10238f8, Func Offset: 0x88
	// Line 208, Address: 0x10238fc, Func Offset: 0x8c
	// Line 209, Address: 0x1023918, Func Offset: 0xa8
	// Line 210, Address: 0x102392c, Func Offset: 0xbc
	// Line 211, Address: 0x1023948, Func Offset: 0xd8
	// Line 212, Address: 0x102395c, Func Offset: 0xec
	// Line 213, Address: 0x1023978, Func Offset: 0x108
	// Line 214, Address: 0x102398c, Func Offset: 0x11c
	// Line 215, Address: 0x10239a8, Func Offset: 0x138
	// Line 216, Address: 0x10239bc, Func Offset: 0x14c
	// Line 218, Address: 0x10239d8, Func Offset: 0x168
	// Line 219, Address: 0x10239fc, Func Offset: 0x18c
	// Line 220, Address: 0x1023a08, Func Offset: 0x198
	// Line 222, Address: 0x1023a14, Func Offset: 0x1a4
	// Line 223, Address: 0x1023a30, Func Offset: 0x1c0
	// Line 225, Address: 0x1023a3c, Func Offset: 0x1cc
	// Line 226, Address: 0x1023a44, Func Offset: 0x1d4
	// Func End, Address: 0x1023a58, Func Offset: 0x1e8
}

// 
// Start address: 0x1023a60
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 238, Address: 0x1023a60, Func Offset: 0
	// Line 239, Address: 0x1023a74, Func Offset: 0x14
	// Line 243, Address: 0x1023a90, Func Offset: 0x30
	// Line 252, Address: 0x1023abc, Func Offset: 0x5c
	// Line 253, Address: 0x1023ad0, Func Offset: 0x70
	// Line 254, Address: 0x1023ad8, Func Offset: 0x78
	// Line 255, Address: 0x1023ae8, Func Offset: 0x88
	// Line 257, Address: 0x1023af8, Func Offset: 0x98
	// Line 259, Address: 0x1023b0c, Func Offset: 0xac
	// Line 262, Address: 0x1023b14, Func Offset: 0xb4
	// Line 263, Address: 0x1023b18, Func Offset: 0xb8
	// Line 264, Address: 0x1023b3c, Func Offset: 0xdc
	// Line 268, Address: 0x1023b60, Func Offset: 0x100
	// Line 269, Address: 0x1023b74, Func Offset: 0x114
	// Line 270, Address: 0x1023b80, Func Offset: 0x120
	// Line 272, Address: 0x1023b88, Func Offset: 0x128
	// Line 276, Address: 0x1023b8c, Func Offset: 0x12c
	// Line 277, Address: 0x1023bb0, Func Offset: 0x150
	// Line 279, Address: 0x1023bc0, Func Offset: 0x160
	// Line 281, Address: 0x1023bc8, Func Offset: 0x168
	// Line 282, Address: 0x1023bdc, Func Offset: 0x17c
	// Line 283, Address: 0x1023be8, Func Offset: 0x188
	// Line 285, Address: 0x1023bf0, Func Offset: 0x190
	// Line 288, Address: 0x1023bf4, Func Offset: 0x194
	// Line 289, Address: 0x1023c18, Func Offset: 0x1b8
	// Line 292, Address: 0x1023c28, Func Offset: 0x1c8
	// Line 294, Address: 0x1023c30, Func Offset: 0x1d0
	// Line 296, Address: 0x1023c40, Func Offset: 0x1e0
	// Line 297, Address: 0x1023c44, Func Offset: 0x1e4
	// Line 298, Address: 0x1023c5c, Func Offset: 0x1fc
	// Line 299, Address: 0x1023c74, Func Offset: 0x214
	// Line 300, Address: 0x1023c8c, Func Offset: 0x22c
	// Line 303, Address: 0x1023ca4, Func Offset: 0x244
	// Func End, Address: 0x1023cc0, Func Offset: 0x260
}

// 
// Start address: 0x1023cc0
void scrbinit(short xWk, short yWk)
{
	int i;
	// Line 315, Address: 0x1023cc0, Func Offset: 0
	// Line 319, Address: 0x1023cd0, Func Offset: 0x10
	// Line 320, Address: 0x1023cec, Func Offset: 0x2c
	// Line 321, Address: 0x1023d04, Func Offset: 0x44
	// Line 325, Address: 0x1023d3c, Func Offset: 0x7c
	// Line 326, Address: 0x1023d48, Func Offset: 0x88
	// Line 327, Address: 0x1023d50, Func Offset: 0x90
	// Line 328, Address: 0x1023d5c, Func Offset: 0x9c
	// Line 330, Address: 0x1023d68, Func Offset: 0xa8
	// Line 331, Address: 0x1023da0, Func Offset: 0xe0
	// Line 332, Address: 0x1023de0, Func Offset: 0x120
	// Line 334, Address: 0x1023e20, Func Offset: 0x160
	// Line 335, Address: 0x1023e2c, Func Offset: 0x16c
	// Line 336, Address: 0x1023e40, Func Offset: 0x180
	// Line 338, Address: 0x1023e50, Func Offset: 0x190
	// Func End, Address: 0x1023e60, Func Offset: 0x1a0
}

// 
// Start address: 0x1023e60
void scroll()
{
	int LineSpdTbl[19];
	unsigned char z11a_cnttbl[10];
	unsigned char z11a_cnttbl2[9];
	unsigned short lposi_tbl[6];
	int HspdWk;
	int* pLinework;
	short* pHScrollWork;
	short wWk;
	_anon0* pHScrollBuff;
	short yWk;
	int i;
	int j;
	int Lposi_TblCnt;
	unsigned short wD1;
	unsigned short wD4;
	unsigned short wD5;
	unsigned short wD6;
	_anon0 lD0;
	_anon0 lD2;
	_anon0 lD3;
	// Line 351, Address: 0x1023e60, Func Offset: 0
	// Line 352, Address: 0x1023e8c, Func Offset: 0x2c
	// Line 361, Address: 0x1023eb8, Func Offset: 0x58
	// Line 366, Address: 0x1023eec, Func Offset: 0x8c
	// Line 370, Address: 0x1023f18, Func Offset: 0xb8
	// Line 384, Address: 0x1023f4c, Func Offset: 0xec
	// Line 387, Address: 0x1023f64, Func Offset: 0x104
	// Line 388, Address: 0x1023f90, Func Offset: 0x130
	// Line 389, Address: 0x1023f9c, Func Offset: 0x13c
	// Line 390, Address: 0x1023fa8, Func Offset: 0x148
	// Line 392, Address: 0x1023fb4, Func Offset: 0x154
	// Line 393, Address: 0x1023fc4, Func Offset: 0x164
	// Line 395, Address: 0x1023fd4, Func Offset: 0x174
	// Line 396, Address: 0x1024004, Func Offset: 0x1a4
	// Line 397, Address: 0x102401c, Func Offset: 0x1bc
	// Line 399, Address: 0x1024024, Func Offset: 0x1c4
	// Line 402, Address: 0x1024028, Func Offset: 0x1c8
	// Line 403, Address: 0x1024054, Func Offset: 0x1f4
	// Line 404, Address: 0x10240a4, Func Offset: 0x244
	// Line 406, Address: 0x10240d0, Func Offset: 0x270
	// Line 407, Address: 0x10240dc, Func Offset: 0x27c
	// Line 408, Address: 0x10240f8, Func Offset: 0x298
	// Line 409, Address: 0x1024110, Func Offset: 0x2b0
	// Line 413, Address: 0x1024148, Func Offset: 0x2e8
	// Line 414, Address: 0x102415c, Func Offset: 0x2fc
	// Line 415, Address: 0x102416c, Func Offset: 0x30c
	// Line 416, Address: 0x102417c, Func Offset: 0x31c
	// Line 418, Address: 0x102418c, Func Offset: 0x32c
	// Line 419, Address: 0x10241a8, Func Offset: 0x348
	// Line 420, Address: 0x10241c4, Func Offset: 0x364
	// Line 421, Address: 0x10241cc, Func Offset: 0x36c
	// Line 424, Address: 0x10241d4, Func Offset: 0x374
	// Line 425, Address: 0x10241e0, Func Offset: 0x380
	// Line 426, Address: 0x1024208, Func Offset: 0x3a8
	// Line 428, Address: 0x1024218, Func Offset: 0x3b8
	// Line 430, Address: 0x102423c, Func Offset: 0x3dc
	// Line 431, Address: 0x1024248, Func Offset: 0x3e8
	// Line 434, Address: 0x1024254, Func Offset: 0x3f4
	// Line 436, Address: 0x1024260, Func Offset: 0x400
	// Line 439, Address: 0x10242a4, Func Offset: 0x444
	// Line 440, Address: 0x10242b0, Func Offset: 0x450
	// Line 441, Address: 0x10242c4, Func Offset: 0x464
	// Line 442, Address: 0x10242e0, Func Offset: 0x480
	// Line 446, Address: 0x10242f0, Func Offset: 0x490
	// Line 447, Address: 0x10242fc, Func Offset: 0x49c
	// Line 448, Address: 0x1024328, Func Offset: 0x4c8
	// Line 452, Address: 0x1024338, Func Offset: 0x4d8
	// Line 453, Address: 0x1024344, Func Offset: 0x4e4
	// Line 454, Address: 0x1024370, Func Offset: 0x510
	// Line 458, Address: 0x1024380, Func Offset: 0x520
	// Line 459, Address: 0x102438c, Func Offset: 0x52c
	// Line 460, Address: 0x10243b8, Func Offset: 0x558
	// Line 464, Address: 0x10243c8, Func Offset: 0x568
	// Line 465, Address: 0x10243d4, Func Offset: 0x574
	// Line 466, Address: 0x1024400, Func Offset: 0x5a0
	// Line 470, Address: 0x1024410, Func Offset: 0x5b0
	// Line 471, Address: 0x102441c, Func Offset: 0x5bc
	// Line 472, Address: 0x1024448, Func Offset: 0x5e8
	// Line 476, Address: 0x1024458, Func Offset: 0x5f8
	// Line 477, Address: 0x1024464, Func Offset: 0x604
	// Line 479, Address: 0x10244a8, Func Offset: 0x648
	// Line 480, Address: 0x10244b4, Func Offset: 0x654
	// Line 481, Address: 0x10244c4, Func Offset: 0x664
	// Line 482, Address: 0x10244e0, Func Offset: 0x680
	// Line 486, Address: 0x10244f0, Func Offset: 0x690
	// Line 487, Address: 0x10244fc, Func Offset: 0x69c
	// Line 488, Address: 0x1024524, Func Offset: 0x6c4
	// Line 492, Address: 0x1024534, Func Offset: 0x6d4
	// Line 493, Address: 0x1024540, Func Offset: 0x6e0
	// Line 494, Address: 0x1024568, Func Offset: 0x708
	// Line 498, Address: 0x1024578, Func Offset: 0x718
	// Line 499, Address: 0x1024584, Func Offset: 0x724
	// Line 500, Address: 0x10245ac, Func Offset: 0x74c
	// Line 502, Address: 0x10245bc, Func Offset: 0x75c
	// Line 503, Address: 0x10245c8, Func Offset: 0x768
	// Line 504, Address: 0x10245d0, Func Offset: 0x770
	// Line 505, Address: 0x10245d4, Func Offset: 0x774
	// Line 506, Address: 0x10245ec, Func Offset: 0x78c
	// Line 507, Address: 0x102462c, Func Offset: 0x7cc
	// Line 510, Address: 0x1024634, Func Offset: 0x7d4
	// Line 515, Address: 0x1024654, Func Offset: 0x7f4
	// Line 516, Address: 0x1024660, Func Offset: 0x800
	// Line 517, Address: 0x1024670, Func Offset: 0x810
	// Line 518, Address: 0x1024678, Func Offset: 0x818
	// Line 520, Address: 0x1024688, Func Offset: 0x828
	// Line 521, Address: 0x102469c, Func Offset: 0x83c
	// Line 525, Address: 0x10246a4, Func Offset: 0x844
	// Line 528, Address: 0x10246bc, Func Offset: 0x85c
	// Line 531, Address: 0x10246dc, Func Offset: 0x87c
	// Line 532, Address: 0x10246e4, Func Offset: 0x884
	// Line 534, Address: 0x10246fc, Func Offset: 0x89c
	// Line 536, Address: 0x1024704, Func Offset: 0x8a4
	// Line 537, Address: 0x102470c, Func Offset: 0x8ac
	// Line 538, Address: 0x1024714, Func Offset: 0x8b4
	// Line 539, Address: 0x1024718, Func Offset: 0x8b8
	// Line 540, Address: 0x1024728, Func Offset: 0x8c8
	// Line 545, Address: 0x102474c, Func Offset: 0x8ec
	// Line 549, Address: 0x1024754, Func Offset: 0x8f4
	// Line 550, Address: 0x1024774, Func Offset: 0x914
	// Line 551, Address: 0x1024788, Func Offset: 0x928
	// Line 552, Address: 0x102479c, Func Offset: 0x93c
	// Line 553, Address: 0x10247a4, Func Offset: 0x944
	// Line 555, Address: 0x10247ac, Func Offset: 0x94c
	// Line 556, Address: 0x10247bc, Func Offset: 0x95c
	// Line 557, Address: 0x10247c4, Func Offset: 0x964
	// Line 559, Address: 0x10247cc, Func Offset: 0x96c
	// Line 562, Address: 0x10247d4, Func Offset: 0x974
	// Line 563, Address: 0x102480c, Func Offset: 0x9ac
	// Line 565, Address: 0x1024818, Func Offset: 0x9b8
	// Line 566, Address: 0x1024844, Func Offset: 0x9e4
	// Line 567, Address: 0x1024854, Func Offset: 0x9f4
	// Line 569, Address: 0x1024860, Func Offset: 0xa00
	// Line 570, Address: 0x1024864, Func Offset: 0xa04
	// Line 571, Address: 0x1024870, Func Offset: 0xa10
	// Line 577, Address: 0x1024894, Func Offset: 0xa34
	// Line 578, Address: 0x10248b8, Func Offset: 0xa58
	// Line 579, Address: 0x10248c8, Func Offset: 0xa68
	// Line 580, Address: 0x10248ec, Func Offset: 0xa8c
	// Line 584, Address: 0x1024910, Func Offset: 0xab0
	// Line 585, Address: 0x1024914, Func Offset: 0xab4
	// Line 586, Address: 0x102491c, Func Offset: 0xabc
	// Line 588, Address: 0x1024930, Func Offset: 0xad0
	// Line 589, Address: 0x102493c, Func Offset: 0xadc
	// Line 590, Address: 0x1024958, Func Offset: 0xaf8
	// Line 591, Address: 0x1024960, Func Offset: 0xb00
	// Line 592, Address: 0x1024968, Func Offset: 0xb08
	// Line 595, Address: 0x1024974, Func Offset: 0xb14
	// Line 597, Address: 0x102497c, Func Offset: 0xb1c
	// Line 600, Address: 0x1024988, Func Offset: 0xb28
	// Line 603, Address: 0x1024990, Func Offset: 0xb30
	// Line 604, Address: 0x1024994, Func Offset: 0xb34
	// Line 605, Address: 0x10249b4, Func Offset: 0xb54
	// Line 606, Address: 0x10249bc, Func Offset: 0xb5c
	// Line 607, Address: 0x10249e0, Func Offset: 0xb80
	// Line 608, Address: 0x10249f0, Func Offset: 0xb90
	// Line 609, Address: 0x1024a14, Func Offset: 0xbb4
	// Line 610, Address: 0x1024a1c, Func Offset: 0xbbc
	// Line 611, Address: 0x1024a2c, Func Offset: 0xbcc
	// Line 614, Address: 0x1024a34, Func Offset: 0xbd4
	// Line 617, Address: 0x1024a58, Func Offset: 0xbf8
	// Line 618, Address: 0x1024a5c, Func Offset: 0xbfc
	// Line 622, Address: 0x1024a64, Func Offset: 0xc04
	// Line 623, Address: 0x1024a68, Func Offset: 0xc08
	// Line 624, Address: 0x1024a6c, Func Offset: 0xc0c
	// Line 626, Address: 0x1024a74, Func Offset: 0xc14
	// Func End, Address: 0x1024aa8, Func Offset: 0xc48
}

// 
// Start address: 0x1024ab0
void scroll_h()
{
	unsigned short wD4;
	// Line 637, Address: 0x1024ab0, Func Offset: 0
	// Line 640, Address: 0x1024abc, Func Offset: 0xc
	// Line 641, Address: 0x1024ac8, Func Offset: 0x18
	// Line 642, Address: 0x1024ad0, Func Offset: 0x20
	// Line 643, Address: 0x1024b04, Func Offset: 0x54
	// Line 644, Address: 0x1024b18, Func Offset: 0x68
	// Line 645, Address: 0x1024b44, Func Offset: 0x94
	// Line 646, Address: 0x1024b58, Func Offset: 0xa8
	// Line 649, Address: 0x1024b60, Func Offset: 0xb0
	// Line 654, Address: 0x1024b74, Func Offset: 0xc4
	// Func End, Address: 0x1024b88, Func Offset: 0xd8
}

// 
// Start address: 0x1024b90
void scrh_move()
{
	unsigned short wD0;
	// Line 656, Address: 0x1024b90, Func Offset: 0
	// Line 659, Address: 0x1024b9c, Func Offset: 0xc
	// Line 660, Address: 0x1024ba8, Func Offset: 0x18
	// Line 661, Address: 0x1024bbc, Func Offset: 0x2c
	// Line 662, Address: 0x1024bd0, Func Offset: 0x40
	// Line 664, Address: 0x1024bdc, Func Offset: 0x4c
	// Line 665, Address: 0x1024be4, Func Offset: 0x54
	// Line 666, Address: 0x1024bec, Func Offset: 0x5c
	// Line 667, Address: 0x1024c04, Func Offset: 0x74
	// Line 668, Address: 0x1024c10, Func Offset: 0x80
	// Line 670, Address: 0x1024c18, Func Offset: 0x88
	// Line 673, Address: 0x1024c24, Func Offset: 0x94
	// Func End, Address: 0x1024c38, Func Offset: 0xa8
}

// 
// Start address: 0x1024c40
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 676, Address: 0x1024c40, Func Offset: 0
	// Line 679, Address: 0x1024c4c, Func Offset: 0xc
	// Line 680, Address: 0x1024c6c, Func Offset: 0x2c
	// Line 683, Address: 0x1024c74, Func Offset: 0x34
	// Line 684, Address: 0x1024c8c, Func Offset: 0x4c
	// Line 685, Address: 0x1024cbc, Func Offset: 0x7c
	// Line 688, Address: 0x1024cc8, Func Offset: 0x88
	// Line 689, Address: 0x1024cd0, Func Offset: 0x90
	// Line 690, Address: 0x1024ce4, Func Offset: 0xa4
	// Line 691, Address: 0x1024d14, Func Offset: 0xd4
	// Line 692, Address: 0x1024d20, Func Offset: 0xe0
	// Line 694, Address: 0x1024d28, Func Offset: 0xe8
	// Func End, Address: 0x1024d38, Func Offset: 0xf8
}

// 
// Start address: 0x1024d40
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 697, Address: 0x1024d40, Func Offset: 0
	// Line 700, Address: 0x1024d4c, Func Offset: 0xc
	// Line 701, Address: 0x1024d6c, Func Offset: 0x2c
	// Line 704, Address: 0x1024d74, Func Offset: 0x34
	// Line 705, Address: 0x1024d8c, Func Offset: 0x4c
	// Line 706, Address: 0x1024dbc, Func Offset: 0x7c
	// Line 709, Address: 0x1024dc8, Func Offset: 0x88
	// Line 710, Address: 0x1024dd0, Func Offset: 0x90
	// Line 711, Address: 0x1024de4, Func Offset: 0xa4
	// Line 712, Address: 0x1024e14, Func Offset: 0xd4
	// Line 713, Address: 0x1024e20, Func Offset: 0xe0
	// Line 715, Address: 0x1024e28, Func Offset: 0xe8
	// Func End, Address: 0x1024e38, Func Offset: 0xf8
}

// 
// Start address: 0x1024e40
void scroll_v()
{
	unsigned short wD0;
	// Line 734, Address: 0x1024e40, Func Offset: 0
	// Line 737, Address: 0x1024e4c, Func Offset: 0xc
	// Line 738, Address: 0x1024e78, Func Offset: 0x38
	// Line 739, Address: 0x1024e90, Func Offset: 0x50
	// Line 742, Address: 0x1024e98, Func Offset: 0x58
	// Line 743, Address: 0x1024eb0, Func Offset: 0x70
	// Line 744, Address: 0x1024eb8, Func Offset: 0x78
	// Line 745, Address: 0x1024ed8, Func Offset: 0x98
	// Line 746, Address: 0x1024eec, Func Offset: 0xac
	// Line 747, Address: 0x1024ef8, Func Offset: 0xb8
	// Line 749, Address: 0x1024f00, Func Offset: 0xc0
	// Line 750, Address: 0x1024f14, Func Offset: 0xd4
	// Line 751, Address: 0x1024f24, Func Offset: 0xe4
	// Line 752, Address: 0x1024f2c, Func Offset: 0xec
	// Line 753, Address: 0x1024f38, Func Offset: 0xf8
	// Line 755, Address: 0x1024f40, Func Offset: 0x100
	// Line 756, Address: 0x1024f48, Func Offset: 0x108
	// Line 757, Address: 0x1024f5c, Func Offset: 0x11c
	// Line 758, Address: 0x1024f64, Func Offset: 0x124
	// Line 764, Address: 0x1024f6c, Func Offset: 0x12c
	// Line 765, Address: 0x1024f80, Func Offset: 0x140
	// Line 766, Address: 0x1024f88, Func Offset: 0x148
	// Line 767, Address: 0x1024f94, Func Offset: 0x154
	// Line 769, Address: 0x1024f9c, Func Offset: 0x15c
	// Line 770, Address: 0x1024fb0, Func Offset: 0x170
	// Line 771, Address: 0x1024fb8, Func Offset: 0x178
	// Line 776, Address: 0x1024fc0, Func Offset: 0x180
	// Line 778, Address: 0x1024fc8, Func Offset: 0x188
	// Func End, Address: 0x1024fdc, Func Offset: 0x19c
}

// 
// Start address: 0x1024fe0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 784, Address: 0x1024fe0, Func Offset: 0
	// Line 787, Address: 0x1024ff0, Func Offset: 0x10
	// Line 788, Address: 0x102500c, Func Offset: 0x2c
	// Line 789, Address: 0x1025018, Func Offset: 0x38
	// Line 792, Address: 0x1025020, Func Offset: 0x40
	// Line 793, Address: 0x102502c, Func Offset: 0x4c
	// Line 794, Address: 0x1025044, Func Offset: 0x64
	// Line 797, Address: 0x1025060, Func Offset: 0x80
	// Line 798, Address: 0x1025070, Func Offset: 0x90
	// Line 799, Address: 0x102507c, Func Offset: 0x9c
	// Line 801, Address: 0x1025084, Func Offset: 0xa4
	// Line 802, Address: 0x10250a4, Func Offset: 0xc4
	// Line 803, Address: 0x10250b0, Func Offset: 0xd0
	// Line 804, Address: 0x10250b8, Func Offset: 0xd8
	// Line 805, Address: 0x10250d8, Func Offset: 0xf8
	// Line 806, Address: 0x10250e4, Func Offset: 0x104
	// Line 808, Address: 0x10250ec, Func Offset: 0x10c
	// Line 812, Address: 0x10250f8, Func Offset: 0x118
	// Func End, Address: 0x102510c, Func Offset: 0x12c
}

// 
// Start address: 0x1025110
void sv_move_main1(unsigned short wD0)
{
	// Line 816, Address: 0x1025110, Func Offset: 0
	// Line 818, Address: 0x102511c, Func Offset: 0xc
	// Line 819, Address: 0x102513c, Func Offset: 0x2c
	// Line 820, Address: 0x1025148, Func Offset: 0x38
	// Line 821, Address: 0x1025150, Func Offset: 0x40
	// Line 822, Address: 0x1025170, Func Offset: 0x60
	// Line 823, Address: 0x102517c, Func Offset: 0x6c
	// Line 825, Address: 0x1025184, Func Offset: 0x74
	// Line 828, Address: 0x1025190, Func Offset: 0x80
	// Func End, Address: 0x10251a0, Func Offset: 0x90
}

// 
// Start address: 0x10251a0
void sv_move_main2(unsigned short wD0)
{
	// Line 831, Address: 0x10251a0, Func Offset: 0
	// Line 833, Address: 0x10251ac, Func Offset: 0xc
	// Line 834, Address: 0x10251cc, Func Offset: 0x2c
	// Line 835, Address: 0x10251d8, Func Offset: 0x38
	// Line 836, Address: 0x10251e0, Func Offset: 0x40
	// Line 837, Address: 0x1025200, Func Offset: 0x60
	// Line 838, Address: 0x102520c, Func Offset: 0x6c
	// Line 840, Address: 0x1025214, Func Offset: 0x74
	// Line 843, Address: 0x1025220, Func Offset: 0x80
	// Func End, Address: 0x1025230, Func Offset: 0x90
}

// 
// Start address: 0x1025230
void sv_move_sub2()
{
	// Line 846, Address: 0x1025230, Func Offset: 0
	// Line 847, Address: 0x1025238, Func Offset: 0x8
	// Line 848, Address: 0x1025240, Func Offset: 0x10
	// Line 849, Address: 0x102524c, Func Offset: 0x1c
	// Func End, Address: 0x102525c, Func Offset: 0x2c
}

// 
// Start address: 0x1025260
void sv_move_sub(unsigned short wD0)
{
	_anon0 lD1;
	// Line 852, Address: 0x1025260, Func Offset: 0
	// Line 855, Address: 0x102526c, Func Offset: 0xc
	// Line 856, Address: 0x1025270, Func Offset: 0x10
	// Line 857, Address: 0x1025278, Func Offset: 0x18
	// Line 858, Address: 0x1025294, Func Offset: 0x34
	// Line 859, Address: 0x10252b0, Func Offset: 0x50
	// Line 860, Address: 0x10252bc, Func Offset: 0x5c
	// Line 862, Address: 0x10252c4, Func Offset: 0x64
	// Line 865, Address: 0x10252d0, Func Offset: 0x70
	// Func End, Address: 0x10252e0, Func Offset: 0x80
}

// 
// Start address: 0x10252e0
void sv_move_minus(unsigned short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 870, Address: 0x10252e0, Func Offset: 0
	// Line 874, Address: 0x10252f0, Func Offset: 0x10
	// Line 875, Address: 0x102530c, Func Offset: 0x2c
	// Line 876, Address: 0x1025318, Func Offset: 0x38
	// Line 878, Address: 0x102532c, Func Offset: 0x4c
	// Line 879, Address: 0x1025334, Func Offset: 0x54
	// Line 880, Address: 0x102533c, Func Offset: 0x5c
	// Line 881, Address: 0x1025340, Func Offset: 0x60
	// Line 882, Address: 0x102534c, Func Offset: 0x6c
	// Func End, Address: 0x1025360, Func Offset: 0x80
}

// 
// Start address: 0x1025360
void scrv_up_ch(_anon0 lD1)
{
	// Line 886, Address: 0x1025360, Func Offset: 0
	// Line 887, Address: 0x102536c, Func Offset: 0xc
	// Line 888, Address: 0x1025394, Func Offset: 0x34
	// Line 889, Address: 0x10253ac, Func Offset: 0x4c
	// Line 890, Address: 0x10253b8, Func Offset: 0x58
	// Line 891, Address: 0x10253cc, Func Offset: 0x6c
	// Line 892, Address: 0x10253e0, Func Offset: 0x80
	// Line 893, Address: 0x10253f4, Func Offset: 0x94
	// Line 896, Address: 0x10253fc, Func Offset: 0x9c
	// Line 899, Address: 0x1025408, Func Offset: 0xa8
	// Line 901, Address: 0x1025414, Func Offset: 0xb4
	// Func End, Address: 0x1025424, Func Offset: 0xc4
}

// 
// Start address: 0x1025430
void sv_move_plus(unsigned short wD1)
{
	_anon0 lD1;
	unsigned short wk;
	// Line 907, Address: 0x1025430, Func Offset: 0
	// Line 911, Address: 0x1025440, Func Offset: 0x10
	// Line 912, Address: 0x1025444, Func Offset: 0x14
	// Line 913, Address: 0x102544c, Func Offset: 0x1c
	// Line 914, Address: 0x1025458, Func Offset: 0x28
	// Line 916, Address: 0x102546c, Func Offset: 0x3c
	// Line 917, Address: 0x1025474, Func Offset: 0x44
	// Line 918, Address: 0x102547c, Func Offset: 0x4c
	// Line 920, Address: 0x1025480, Func Offset: 0x50
	// Line 922, Address: 0x102548c, Func Offset: 0x5c
	// Func End, Address: 0x10254a0, Func Offset: 0x70
}

// 
// Start address: 0x10254a0
void scrv_down_ch(_anon0 lD1)
{
	// Line 926, Address: 0x10254a0, Func Offset: 0
	// Line 927, Address: 0x10254ac, Func Offset: 0xc
	// Line 928, Address: 0x10254d4, Func Offset: 0x34
	// Line 929, Address: 0x10254e0, Func Offset: 0x40
	// Line 931, Address: 0x10254f4, Func Offset: 0x54
	// Line 932, Address: 0x1025508, Func Offset: 0x68
	// Line 933, Address: 0x102551c, Func Offset: 0x7c
	// Line 934, Address: 0x1025530, Func Offset: 0x90
	// Line 936, Address: 0x1025538, Func Offset: 0x98
	// Line 939, Address: 0x1025544, Func Offset: 0xa4
	// Line 941, Address: 0x1025550, Func Offset: 0xb0
	// Func End, Address: 0x1025560, Func Offset: 0xc0
}

// 
// Start address: 0x1025560
void scrv_move(_anon0 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 944, Address: 0x1025560, Func Offset: 0
	// Line 947, Address: 0x1025570, Func Offset: 0x10
	// Line 949, Address: 0x102557c, Func Offset: 0x1c
	// Line 950, Address: 0x1025584, Func Offset: 0x24
	// Line 951, Address: 0x102558c, Func Offset: 0x2c
	// Line 953, Address: 0x1025590, Func Offset: 0x30
	// Line 954, Address: 0x10255b8, Func Offset: 0x58
	// Line 957, Address: 0x10255c4, Func Offset: 0x64
	// Line 958, Address: 0x10255f8, Func Offset: 0x98
	// Line 959, Address: 0x102560c, Func Offset: 0xac
	// Line 961, Address: 0x1025638, Func Offset: 0xd8
	// Line 962, Address: 0x102564c, Func Offset: 0xec
	// Line 964, Address: 0x1025654, Func Offset: 0xf4
	// Line 969, Address: 0x1025668, Func Offset: 0x108
	// Func End, Address: 0x102567c, Func Offset: 0x11c
}

// 
// Start address: 0x1025680
void scrollb_hv(_anon0 lD4, _anon0 lD5)
{
	_anon0 lD0;
	_anon0 lD2;
	_anon0 lD3;
	// Line 973, Address: 0x1025680, Func Offset: 0
	// Line 976, Address: 0x102568c, Func Offset: 0xc
	// Line 977, Address: 0x102569c, Func Offset: 0x1c
	// Line 978, Address: 0x10256ac, Func Offset: 0x2c
	// Line 980, Address: 0x10256b8, Func Offset: 0x38
	// Line 982, Address: 0x10256ec, Func Offset: 0x6c
	// Line 983, Address: 0x1025700, Func Offset: 0x80
	// Line 984, Address: 0x1025710, Func Offset: 0x90
	// Line 985, Address: 0x1025724, Func Offset: 0xa4
	// Line 986, Address: 0x1025738, Func Offset: 0xb8
	// Line 989, Address: 0x1025740, Func Offset: 0xc0
	// Line 994, Address: 0x1025754, Func Offset: 0xd4
	// Line 995, Address: 0x1025764, Func Offset: 0xe4
	// Line 996, Address: 0x1025774, Func Offset: 0xf4
	// Line 998, Address: 0x1025780, Func Offset: 0x100
	// Line 1000, Address: 0x10257b4, Func Offset: 0x134
	// Line 1001, Address: 0x10257c8, Func Offset: 0x148
	// Line 1002, Address: 0x10257d8, Func Offset: 0x158
	// Line 1003, Address: 0x10257ec, Func Offset: 0x16c
	// Line 1004, Address: 0x1025800, Func Offset: 0x180
	// Line 1007, Address: 0x1025808, Func Offset: 0x188
	// Line 1012, Address: 0x102581c, Func Offset: 0x19c
	// Func End, Address: 0x1025828, Func Offset: 0x1a8
}

// 
// Start address: 0x1025830
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1019, Address: 0x1025830, Func Offset: 0
	// Line 1022, Address: 0x102583c, Func Offset: 0xc
	// Line 1023, Address: 0x1025848, Func Offset: 0x18
	// Line 1025, Address: 0x1025854, Func Offset: 0x24
	// Line 1026, Address: 0x1025880, Func Offset: 0x50
	// Line 1027, Address: 0x1025894, Func Offset: 0x64
	// Line 1028, Address: 0x10258c4, Func Offset: 0x94
	// Line 1029, Address: 0x10258d8, Func Offset: 0xa8
	// Line 1032, Address: 0x10258e0, Func Offset: 0xb0
	// Line 1037, Address: 0x10258f4, Func Offset: 0xc4
	// Func End, Address: 0x1025904, Func Offset: 0xd4
}

// 
// Start address: 0x1025910
void scrollb_h(int lD4, int flagb)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1041, Address: 0x1025910, Func Offset: 0
	// Line 1045, Address: 0x1025920, Func Offset: 0x10
	// Line 1046, Address: 0x102592c, Func Offset: 0x1c
	// Line 1047, Address: 0x102593c, Func Offset: 0x2c
	// Line 1049, Address: 0x1025948, Func Offset: 0x38
	// Line 1050, Address: 0x1025950, Func Offset: 0x40
	// Line 1051, Address: 0x1025958, Func Offset: 0x48
	// Line 1053, Address: 0x1025964, Func Offset: 0x54
	// Line 1054, Address: 0x1025970, Func Offset: 0x60
	// Line 1055, Address: 0x1025984, Func Offset: 0x74
	// Line 1056, Address: 0x1025990, Func Offset: 0x80
	// Line 1057, Address: 0x10259a4, Func Offset: 0x94
	// Line 1058, Address: 0x10259b4, Func Offset: 0xa4
	// Line 1059, Address: 0x10259c8, Func Offset: 0xb8
	// Line 1060, Address: 0x10259e4, Func Offset: 0xd4
	// Line 1063, Address: 0x10259ec, Func Offset: 0xdc
	// Line 1068, Address: 0x1025a0c, Func Offset: 0xfc
	// Func End, Address: 0x1025a1c, Func Offset: 0x10c
}

// 
// Start address: 0x1025a20
void scrollc_h(int lD4, int flagc)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1071, Address: 0x1025a20, Func Offset: 0
	// Line 1075, Address: 0x1025a30, Func Offset: 0x10
	// Line 1076, Address: 0x1025a3c, Func Offset: 0x1c
	// Line 1077, Address: 0x1025a4c, Func Offset: 0x2c
	// Line 1079, Address: 0x1025a58, Func Offset: 0x38
	// Line 1080, Address: 0x1025a60, Func Offset: 0x40
	// Line 1081, Address: 0x1025a68, Func Offset: 0x48
	// Line 1083, Address: 0x1025a74, Func Offset: 0x54
	// Line 1084, Address: 0x1025a80, Func Offset: 0x60
	// Line 1085, Address: 0x1025a94, Func Offset: 0x74
	// Line 1086, Address: 0x1025aa0, Func Offset: 0x80
	// Line 1087, Address: 0x1025ab4, Func Offset: 0x94
	// Line 1088, Address: 0x1025ac4, Func Offset: 0xa4
	// Line 1089, Address: 0x1025ad8, Func Offset: 0xb8
	// Line 1090, Address: 0x1025af4, Func Offset: 0xd4
	// Line 1093, Address: 0x1025afc, Func Offset: 0xdc
	// Line 1098, Address: 0x1025b1c, Func Offset: 0xfc
	// Func End, Address: 0x1025b2c, Func Offset: 0x10c
}

// 
// Start address: 0x1025b30
void scrollz_h(int lD4, int flagz)
{
	_anon0 lD0;
	_anon0 lD1;
	_anon0 lD2;
	unsigned char bD3;
	// Line 1110, Address: 0x1025b30, Func Offset: 0
	// Line 1114, Address: 0x1025b40, Func Offset: 0x10
	// Line 1115, Address: 0x1025b4c, Func Offset: 0x1c
	// Line 1116, Address: 0x1025b5c, Func Offset: 0x2c
	// Line 1118, Address: 0x1025b68, Func Offset: 0x38
	// Line 1119, Address: 0x1025b70, Func Offset: 0x40
	// Line 1120, Address: 0x1025b78, Func Offset: 0x48
	// Line 1122, Address: 0x1025b84, Func Offset: 0x54
	// Line 1123, Address: 0x1025b90, Func Offset: 0x60
	// Line 1124, Address: 0x1025ba4, Func Offset: 0x74
	// Line 1125, Address: 0x1025bb0, Func Offset: 0x80
	// Line 1126, Address: 0x1025bc4, Func Offset: 0x94
	// Line 1127, Address: 0x1025bd4, Func Offset: 0xa4
	// Line 1128, Address: 0x1025be8, Func Offset: 0xb8
	// Line 1129, Address: 0x1025c04, Func Offset: 0xd4
	// Line 1132, Address: 0x1025c0c, Func Offset: 0xdc
	// Line 1137, Address: 0x1025c2c, Func Offset: 0xfc
	// Func End, Address: 0x1025c3c, Func Offset: 0x10c
}

// 
// Start address: 0x1025c40
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1151, Address: 0x1025c40, Func Offset: 0
	// Line 1157, Address: 0x1025c5c, Func Offset: 0x1c
	// Line 1158, Address: 0x1025c60, Func Offset: 0x20
	// Line 1159, Address: 0x1025c6c, Func Offset: 0x2c
	// Line 1160, Address: 0x1025c78, Func Offset: 0x38
	// Line 1161, Address: 0x1025c80, Func Offset: 0x40
	// Line 1162, Address: 0x1025c88, Func Offset: 0x48
	// Line 1164, Address: 0x1025c9c, Func Offset: 0x5c
	// Line 1165, Address: 0x1025ca8, Func Offset: 0x68
	// Line 1166, Address: 0x1025cb4, Func Offset: 0x74
	// Line 1167, Address: 0x1025cbc, Func Offset: 0x7c
	// Line 1169, Address: 0x1025cc4, Func Offset: 0x84
	// Func End, Address: 0x1025ce8, Func Offset: 0xa8
}

// 
// Start address: 0x1025cf0
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
	// Line 1182, Address: 0x1025cf0, Func Offset: 0
	// Line 1191, Address: 0x1025d10, Func Offset: 0x20
	// Line 1192, Address: 0x1025d14, Func Offset: 0x24
	// Line 1193, Address: 0x1025d20, Func Offset: 0x30
	// Line 1194, Address: 0x1025d2c, Func Offset: 0x3c
	// Line 1195, Address: 0x1025d34, Func Offset: 0x44
	// Line 1196, Address: 0x1025d3c, Func Offset: 0x4c
	// Line 1198, Address: 0x1025d50, Func Offset: 0x60
	// Line 1199, Address: 0x1025d54, Func Offset: 0x64
	// Line 1200, Address: 0x1025d60, Func Offset: 0x70
	// Line 1201, Address: 0x1025d6c, Func Offset: 0x7c
	// Line 1202, Address: 0x1025d74, Func Offset: 0x84
	// Line 1204, Address: 0x1025d7c, Func Offset: 0x8c
	// Line 1205, Address: 0x1025d88, Func Offset: 0x98
	// Line 1206, Address: 0x1025d9c, Func Offset: 0xac
	// Line 1208, Address: 0x1025da8, Func Offset: 0xb8
	// Line 1209, Address: 0x1025db0, Func Offset: 0xc0
	// Line 1211, Address: 0x1025db8, Func Offset: 0xc8
	// Line 1213, Address: 0x1025dd8, Func Offset: 0xe8
	// Line 1219, Address: 0x1025e04, Func Offset: 0x114
	// Line 1220, Address: 0x1025e18, Func Offset: 0x128
	// Line 1222, Address: 0x1025e24, Func Offset: 0x134
	// Line 1223, Address: 0x1025e2c, Func Offset: 0x13c
	// Line 1224, Address: 0x1025e34, Func Offset: 0x144
	// Line 1226, Address: 0x1025e54, Func Offset: 0x164
	// Line 1232, Address: 0x1025e80, Func Offset: 0x190
	// Line 1233, Address: 0x1025e94, Func Offset: 0x1a4
	// Line 1235, Address: 0x1025ea0, Func Offset: 0x1b0
	// Line 1236, Address: 0x1025ea8, Func Offset: 0x1b8
	// Line 1237, Address: 0x1025eb0, Func Offset: 0x1c0
	// Line 1239, Address: 0x1025ed0, Func Offset: 0x1e0
	// Line 1245, Address: 0x1025efc, Func Offset: 0x20c
	// Line 1246, Address: 0x1025f10, Func Offset: 0x220
	// Line 1248, Address: 0x1025f1c, Func Offset: 0x22c
	// Line 1249, Address: 0x1025f24, Func Offset: 0x234
	// Line 1250, Address: 0x1025f2c, Func Offset: 0x23c
	// Line 1252, Address: 0x1025f4c, Func Offset: 0x25c
	// Line 1261, Address: 0x1025f78, Func Offset: 0x288
	// Func End, Address: 0x1025fa0, Func Offset: 0x2b0
}

// 
// Start address: 0x1025fa0
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
	// Line 1278, Address: 0x1025fa0, Func Offset: 0
	// Line 1289, Address: 0x1025fcc, Func Offset: 0x2c
	// Line 1291, Address: 0x1025fd4, Func Offset: 0x34
	// Line 1292, Address: 0x1025fec, Func Offset: 0x4c
	// Line 1293, Address: 0x1026000, Func Offset: 0x60
	// Line 1295, Address: 0x1026008, Func Offset: 0x68
	// Line 1297, Address: 0x102601c, Func Offset: 0x7c
	// Line 1298, Address: 0x1026034, Func Offset: 0x94
	// Line 1299, Address: 0x1026048, Func Offset: 0xa8
	// Line 1300, Address: 0x1026050, Func Offset: 0xb0
	// Line 1302, Address: 0x1026058, Func Offset: 0xb8
	// Line 1303, Address: 0x102606c, Func Offset: 0xcc
	// Line 1308, Address: 0x1026074, Func Offset: 0xd4
	// Line 1309, Address: 0x10260c4, Func Offset: 0x124
	// Line 1310, Address: 0x10260cc, Func Offset: 0x12c
	// Line 1316, Address: 0x10260ec, Func Offset: 0x14c
	// Line 1317, Address: 0x102610c, Func Offset: 0x16c
	// Line 1318, Address: 0x1026130, Func Offset: 0x190
	// Line 1319, Address: 0x102613c, Func Offset: 0x19c
	// Line 1320, Address: 0x1026144, Func Offset: 0x1a4
	// Line 1322, Address: 0x1026164, Func Offset: 0x1c4
	// Line 1326, Address: 0x1026190, Func Offset: 0x1f0
	// Line 1329, Address: 0x1026198, Func Offset: 0x1f8
	// Line 1330, Address: 0x102619c, Func Offset: 0x1fc
	// Line 1334, Address: 0x10261bc, Func Offset: 0x21c
	// Line 1341, Address: 0x10261e8, Func Offset: 0x248
	// Line 1348, Address: 0x10261fc, Func Offset: 0x25c
	// Line 1349, Address: 0x1026204, Func Offset: 0x264
	// Line 1350, Address: 0x102620c, Func Offset: 0x26c
	// Line 1351, Address: 0x1026224, Func Offset: 0x284
	// Line 1352, Address: 0x1026244, Func Offset: 0x2a4
	// Line 1356, Address: 0x102624c, Func Offset: 0x2ac
	// Line 1358, Address: 0x102627c, Func Offset: 0x2dc
	// Line 1359, Address: 0x1026288, Func Offset: 0x2e8
	// Line 1363, Address: 0x1026298, Func Offset: 0x2f8
	// Line 1364, Address: 0x10262a4, Func Offset: 0x304
	// Line 1365, Address: 0x10262c4, Func Offset: 0x324
	// Line 1366, Address: 0x10262d0, Func Offset: 0x330
	// Line 1367, Address: 0x10262fc, Func Offset: 0x35c
	// Line 1368, Address: 0x102631c, Func Offset: 0x37c
	// Line 1370, Address: 0x1026340, Func Offset: 0x3a0
	// Line 1373, Address: 0x1026364, Func Offset: 0x3c4
	// Line 1375, Address: 0x1026384, Func Offset: 0x3e4
	// Line 1378, Address: 0x1026398, Func Offset: 0x3f8
	// Line 1379, Address: 0x10263a4, Func Offset: 0x404
	// Line 1380, Address: 0x10263b4, Func Offset: 0x414
	// Line 1382, Address: 0x10263bc, Func Offset: 0x41c
	// Func End, Address: 0x10263e4, Func Offset: 0x444
}

// 
// Start address: 0x10263f0
void scrollwrtc()
{
	// Line 1388, Address: 0x10263f0, Func Offset: 0
	// Func End, Address: 0x10263f8, Func Offset: 0x8
}

// 
// Start address: 0x1026400
void scrollwrtz()
{
	// Line 1393, Address: 0x1026400, Func Offset: 0
	// Func End, Address: 0x1026408, Func Offset: 0x8
}

// 
// Start address: 0x1026410
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1411, Address: 0x1026410, Func Offset: 0
	// Line 1424, Address: 0x1026438, Func Offset: 0x28
	// Line 1427, Address: 0x1026458, Func Offset: 0x48
	// Line 1428, Address: 0x102646c, Func Offset: 0x5c
	// Line 1429, Address: 0x1026480, Func Offset: 0x70
	// Line 1430, Address: 0x1026494, Func Offset: 0x84
	// Line 1432, Address: 0x10264a8, Func Offset: 0x98
	// Line 1433, Address: 0x10264b4, Func Offset: 0xa4
	// Line 1434, Address: 0x10264c8, Func Offset: 0xb8
	// Func End, Address: 0x10264d8, Func Offset: 0xc8
}

// 
// Start address: 0x10264e0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1438, Address: 0x10264e0, Func Offset: 0
	// Line 1442, Address: 0x1026508, Func Offset: 0x28
	// Line 1445, Address: 0x1026528, Func Offset: 0x48
	// Line 1446, Address: 0x102653c, Func Offset: 0x5c
	// Line 1447, Address: 0x1026550, Func Offset: 0x70
	// Line 1448, Address: 0x1026564, Func Offset: 0x84
	// Line 1450, Address: 0x1026578, Func Offset: 0x98
	// Line 1451, Address: 0x1026584, Func Offset: 0xa4
	// Line 1452, Address: 0x1026598, Func Offset: 0xb8
	// Func End, Address: 0x10265a8, Func Offset: 0xc8
}

// 
// Start address: 0x10265b0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1472, Address: 0x10265b0, Func Offset: 0
	// Line 1476, Address: 0x10265d8, Func Offset: 0x28
	// Line 1479, Address: 0x10265f8, Func Offset: 0x48
	// Line 1480, Address: 0x102660c, Func Offset: 0x5c
	// Line 1481, Address: 0x102661c, Func Offset: 0x6c
	// Line 1482, Address: 0x1026630, Func Offset: 0x80
	// Line 1484, Address: 0x1026640, Func Offset: 0x90
	// Line 1485, Address: 0x102664c, Func Offset: 0x9c
	// Line 1486, Address: 0x1026660, Func Offset: 0xb0
	// Func End, Address: 0x1026670, Func Offset: 0xc0
}

// 
// Start address: 0x1026670
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
	// Line 1505, Address: 0x1026670, Func Offset: 0
	// Line 1511, Address: 0x10266a4, Func Offset: 0x34
	// Line 1513, Address: 0x10266b4, Func Offset: 0x44
	// Line 1514, Address: 0x10266b8, Func Offset: 0x48
	// Line 1515, Address: 0x10266c0, Func Offset: 0x50
	// Line 1517, Address: 0x10266d0, Func Offset: 0x60
	// Line 1519, Address: 0x10266d4, Func Offset: 0x64
	// Line 1520, Address: 0x10266dc, Func Offset: 0x6c
	// Line 1523, Address: 0x10266e4, Func Offset: 0x74
	// Line 1524, Address: 0x10266ec, Func Offset: 0x7c
	// Line 1525, Address: 0x10266f8, Func Offset: 0x88
	// Line 1527, Address: 0x1026704, Func Offset: 0x94
	// Line 1528, Address: 0x102670c, Func Offset: 0x9c
	// Line 1529, Address: 0x1026714, Func Offset: 0xa4
	// Line 1530, Address: 0x102671c, Func Offset: 0xac
	// Line 1532, Address: 0x1026728, Func Offset: 0xb8
	// Line 1533, Address: 0x1026730, Func Offset: 0xc0
	// Line 1534, Address: 0x1026738, Func Offset: 0xc8
	// Line 1535, Address: 0x1026740, Func Offset: 0xd0
	// Line 1537, Address: 0x102674c, Func Offset: 0xdc
	// Line 1538, Address: 0x1026754, Func Offset: 0xe4
	// Line 1539, Address: 0x102675c, Func Offset: 0xec
	// Line 1542, Address: 0x1026764, Func Offset: 0xf4
	// Line 1543, Address: 0x102676c, Func Offset: 0xfc
	// Line 1546, Address: 0x1026774, Func Offset: 0x104
	// Line 1547, Address: 0x10267b8, Func Offset: 0x148
	// Line 1548, Address: 0x10267fc, Func Offset: 0x18c
	// Line 1549, Address: 0x1026840, Func Offset: 0x1d0
	// Line 1551, Address: 0x1026884, Func Offset: 0x214
	// Func End, Address: 0x10268b4, Func Offset: 0x244
}

// 
// Start address: 0x10268c0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1569, Address: 0x10268c0, Func Offset: 0
	// Line 1570, Address: 0x10268e0, Func Offset: 0x20
	// Line 1571, Address: 0x1026900, Func Offset: 0x40
	// Func End, Address: 0x1026910, Func Offset: 0x50
}

// 
// Start address: 0x1026910
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1573, Address: 0x1026910, Func Offset: 0
	// Line 1574, Address: 0x1026930, Func Offset: 0x20
	// Line 1575, Address: 0x1026934, Func Offset: 0x24
	// Line 1576, Address: 0x1026954, Func Offset: 0x44
	// Func End, Address: 0x1026964, Func Offset: 0x54
}

// 
// Start address: 0x1026970
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1583, Address: 0x1026970, Func Offset: 0
	// Line 1589, Address: 0x10269a0, Func Offset: 0x30
	// Line 1590, Address: 0x10269b0, Func Offset: 0x40
	// Line 1596, Address: 0x10269c0, Func Offset: 0x50
	// Line 1597, Address: 0x10269dc, Func Offset: 0x6c
	// Line 1598, Address: 0x10269e0, Func Offset: 0x70
	// Line 1599, Address: 0x10269fc, Func Offset: 0x8c
	// Line 1600, Address: 0x1026a00, Func Offset: 0x90
	// Line 1601, Address: 0x1026a20, Func Offset: 0xb0
	// Line 1602, Address: 0x1026a28, Func Offset: 0xb8
	// Line 1603, Address: 0x1026a48, Func Offset: 0xd8
	// Line 1604, Address: 0x1026a50, Func Offset: 0xe0
	// Line 1605, Address: 0x1026a98, Func Offset: 0x128
	// Line 1607, Address: 0x1026aa4, Func Offset: 0x134
	// Line 1609, Address: 0x1026ab4, Func Offset: 0x144
	// Line 1614, Address: 0x1026abc, Func Offset: 0x14c
	// Line 1615, Address: 0x1026ac8, Func Offset: 0x158
	// Line 1618, Address: 0x1026ad4, Func Offset: 0x164
	// Line 1619, Address: 0x1026adc, Func Offset: 0x16c
	// Line 1620, Address: 0x1026afc, Func Offset: 0x18c
	// Line 1621, Address: 0x1026b18, Func Offset: 0x1a8
	// Line 1622, Address: 0x1026b20, Func Offset: 0x1b0
	// Line 1623, Address: 0x1026b40, Func Offset: 0x1d0
	// Line 1625, Address: 0x1026b5c, Func Offset: 0x1ec
	// Line 1626, Address: 0x1026b64, Func Offset: 0x1f4
	// Line 1627, Address: 0x1026b6c, Func Offset: 0x1fc
	// Line 1628, Address: 0x1026b78, Func Offset: 0x208
	// Line 1629, Address: 0x1026b90, Func Offset: 0x220
	// Line 1631, Address: 0x1026ba0, Func Offset: 0x230
	// Line 1634, Address: 0x1026bac, Func Offset: 0x23c
	// Line 1635, Address: 0x1026bb4, Func Offset: 0x244
	// Line 1636, Address: 0x1026bb8, Func Offset: 0x248
	// Func End, Address: 0x1026bd8, Func Offset: 0x268
}

// 
// Start address: 0x1026be0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1656, Address: 0x1026be0, Func Offset: 0
	// Line 1664, Address: 0x1026c08, Func Offset: 0x28
	// Line 1665, Address: 0x1026c60, Func Offset: 0x80
	// Line 1671, Address: 0x1026c68, Func Offset: 0x88
	// Line 1672, Address: 0x1026c70, Func Offset: 0x90
	// Line 1673, Address: 0x1026c90, Func Offset: 0xb0
	// Line 1674, Address: 0x1026cac, Func Offset: 0xcc
	// Line 1675, Address: 0x1026cb4, Func Offset: 0xd4
	// Line 1676, Address: 0x1026cd4, Func Offset: 0xf4
	// Line 1679, Address: 0x1026cf0, Func Offset: 0x110
	// Line 1680, Address: 0x1026cf8, Func Offset: 0x118
	// Line 1681, Address: 0x1026d00, Func Offset: 0x120
	// Line 1682, Address: 0x1026d0c, Func Offset: 0x12c
	// Line 1683, Address: 0x1026d24, Func Offset: 0x144
	// Line 1684, Address: 0x1026d2c, Func Offset: 0x14c
	// Line 1689, Address: 0x1026d3c, Func Offset: 0x15c
	// Line 1692, Address: 0x1026d48, Func Offset: 0x168
	// Line 1693, Address: 0x1026d50, Func Offset: 0x170
	// Line 1694, Address: 0x1026d54, Func Offset: 0x174
	// Func End, Address: 0x1026d70, Func Offset: 0x190
}

// 
// Start address: 0x1026d70
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1708, Address: 0x1026d70, Func Offset: 0
	// Line 1715, Address: 0x1026d8c, Func Offset: 0x1c
	// Line 1716, Address: 0x1026d90, Func Offset: 0x20
	// Line 1717, Address: 0x1026d98, Func Offset: 0x28
	// Line 1718, Address: 0x1026dbc, Func Offset: 0x4c
	// Line 1719, Address: 0x1026dc8, Func Offset: 0x58
	// Line 1720, Address: 0x1026de0, Func Offset: 0x70
	// Line 1721, Address: 0x1026df4, Func Offset: 0x84
	// Line 1726, Address: 0x1026e0c, Func Offset: 0x9c
	// Func End, Address: 0x1026e24, Func Offset: 0xb4
}

// 
// Start address: 0x1026e30
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1740, Address: 0x1026e30, Func Offset: 0
	// Line 1741, Address: 0x1026e3c, Func Offset: 0xc
	// Line 1742, Address: 0x1026e68, Func Offset: 0x38
	// Line 1743, Address: 0x1026eb4, Func Offset: 0x84
	// Line 1744, Address: 0x1026ee0, Func Offset: 0xb0
	// Line 1746, Address: 0x1026f2c, Func Offset: 0xfc
	// Line 1752, Address: 0x1026f38, Func Offset: 0x108
	// Line 1753, Address: 0x1026f3c, Func Offset: 0x10c
	// Func End, Address: 0x1026f48, Func Offset: 0x118
}

// 
// Start address: 0x1026f50
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1770, Address: 0x1026f50, Func Offset: 0
	// Line 1771, Address: 0x1026f6c, Func Offset: 0x1c
	// Line 1773, Address: 0x1026f88, Func Offset: 0x38
	// Func End, Address: 0x1026f98, Func Offset: 0x48
}

// 
// Start address: 0x1026fa0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1775, Address: 0x1026fa0, Func Offset: 0
	// Line 1776, Address: 0x1026fbc, Func Offset: 0x1c
	// Line 1777, Address: 0x1026fc0, Func Offset: 0x20
	// Line 1779, Address: 0x1026fdc, Func Offset: 0x3c
	// Func End, Address: 0x1026fec, Func Offset: 0x4c
}

// 
// Start address: 0x1026ff0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1781, Address: 0x1026ff0, Func Offset: 0
	// Line 1782, Address: 0x1027004, Func Offset: 0x14
	// Line 1784, Address: 0x1027020, Func Offset: 0x30
	// Func End, Address: 0x1027030, Func Offset: 0x40
}

// 
// Start address: 0x1027030
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1786, Address: 0x1027030, Func Offset: 0
	// Line 1787, Address: 0x102704c, Func Offset: 0x1c
	// Line 1789, Address: 0x1027068, Func Offset: 0x38
	// Func End, Address: 0x1027078, Func Offset: 0x48
}

// 
// Start address: 0x1027080
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1791, Address: 0x1027080, Func Offset: 0
	// Line 1792, Address: 0x1027098, Func Offset: 0x18
	// Line 1793, Address: 0x10270a8, Func Offset: 0x28
	// Line 1794, Address: 0x10270b8, Func Offset: 0x38
	// Line 1795, Address: 0x10270c4, Func Offset: 0x44
	// Line 1797, Address: 0x10270d0, Func Offset: 0x50
	// Line 1798, Address: 0x10270fc, Func Offset: 0x7c
	// Line 1801, Address: 0x1027128, Func Offset: 0xa8
	// Func End, Address: 0x1027134, Func Offset: 0xb4
}

// 
// Start address: 0x1027140
void scr11a_test()
{
	// Line 1804, Address: 0x1027140, Func Offset: 0
	// Line 1805, Address: 0x1027148, Func Offset: 0x8
	// Line 1806, Address: 0x1027160, Func Offset: 0x20
	// Func End, Address: 0x1027170, Func Offset: 0x30
}

// 
// Start address: 0x1027170
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1821, Address: 0x1027170, Func Offset: 0
	// Line 1826, Address: 0x1027188, Func Offset: 0x18
	// Line 1827, Address: 0x1027194, Func Offset: 0x24
	// Line 1828, Address: 0x10271a0, Func Offset: 0x30
	// Line 1829, Address: 0x10271a8, Func Offset: 0x38
	// Line 1830, Address: 0x10271ac, Func Offset: 0x3c
	// Line 1831, Address: 0x10271b4, Func Offset: 0x44
	// Line 1835, Address: 0x10271cc, Func Offset: 0x5c
	// Line 1836, Address: 0x10271d4, Func Offset: 0x64
	// Line 1837, Address: 0x10271d8, Func Offset: 0x68
	// Line 1839, Address: 0x10271e8, Func Offset: 0x78
	// Func End, Address: 0x1027208, Func Offset: 0x98
}

// 
// Start address: 0x1027210
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1842, Address: 0x1027210, Func Offset: 0
	// Line 1843, Address: 0x1027228, Func Offset: 0x18
	// Line 1844, Address: 0x1027248, Func Offset: 0x38
	// Func End, Address: 0x1027258, Func Offset: 0x48
}

// 
// Start address: 0x1027260
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1849, Address: 0x1027260, Func Offset: 0
	// Line 1853, Address: 0x1027280, Func Offset: 0x20
	// Line 1856, Address: 0x102729c, Func Offset: 0x3c
	// Line 1860, Address: 0x10272c4, Func Offset: 0x64
	// Line 1861, Address: 0x10272d0, Func Offset: 0x70
	// Line 1863, Address: 0x10272f8, Func Offset: 0x98
	// Func End, Address: 0x1027308, Func Offset: 0xa8
}

// 
// Start address: 0x1027310
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1869, Address: 0x1027310, Func Offset: 0
	// Line 1872, Address: 0x102732c, Func Offset: 0x1c
	// Line 1873, Address: 0x1027334, Func Offset: 0x24
	// Line 1876, Address: 0x102733c, Func Offset: 0x2c
	// Line 1878, Address: 0x1027360, Func Offset: 0x50
	// Line 1879, Address: 0x1027380, Func Offset: 0x70
	// Line 1880, Address: 0x1027388, Func Offset: 0x78
	// Line 1881, Address: 0x10273ac, Func Offset: 0x9c
	// Func End, Address: 0x10273c8, Func Offset: 0xb8
}

// 
// Start address: 0x10273d0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1907, Address: 0x10273d0, Func Offset: 0
	// Line 1912, Address: 0x10273f8, Func Offset: 0x28
	// Line 1913, Address: 0x1027408, Func Offset: 0x38
	// Line 1915, Address: 0x1027424, Func Offset: 0x54
	// Line 1916, Address: 0x1027448, Func Offset: 0x78
	// Line 1917, Address: 0x1027470, Func Offset: 0xa0
	// Line 1918, Address: 0x102747c, Func Offset: 0xac
	// Line 1919, Address: 0x1027484, Func Offset: 0xb4
	// Line 1922, Address: 0x10274a0, Func Offset: 0xd0
	// Line 1926, Address: 0x10274c8, Func Offset: 0xf8
	// Line 1929, Address: 0x10274d0, Func Offset: 0x100
	// Line 1930, Address: 0x10274d4, Func Offset: 0x104
	// Line 1934, Address: 0x10274f0, Func Offset: 0x120
	// Line 1941, Address: 0x1027518, Func Offset: 0x148
	// Func End, Address: 0x1027534, Func Offset: 0x164
}

// 
// Start address: 0x1027540
void mapinit()
{
	// Line 1946, Address: 0x1027540, Func Offset: 0
	// Line 1952, Address: 0x1027548, Func Offset: 0x8
	// Line 1955, Address: 0x1027550, Func Offset: 0x10
	// Line 1956, Address: 0x102755c, Func Offset: 0x1c
	// Line 1962, Address: 0x1027568, Func Offset: 0x28
	// Line 1963, Address: 0x102757c, Func Offset: 0x3c
	// Line 1966, Address: 0x1027584, Func Offset: 0x44
	// Line 1968, Address: 0x102759c, Func Offset: 0x5c
	// Line 1972, Address: 0x10275a4, Func Offset: 0x64
	// Func End, Address: 0x10275b4, Func Offset: 0x74
}

// 
// Start address: 0x10275c0
void mapset()
{
	// Line 1982, Address: 0x10275c0, Func Offset: 0
	// Func End, Address: 0x10275c8, Func Offset: 0x8
}

