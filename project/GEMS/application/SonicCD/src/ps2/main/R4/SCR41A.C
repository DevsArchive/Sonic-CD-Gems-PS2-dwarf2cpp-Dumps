typedef struct _anon0;
typedef struct _anon1;
typedef struct tagPOINT;
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
typedef unsigned char type_3[129];
typedef unsigned char type_5[256];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef _anon2* type_8[8];
typedef unsigned char type_9[2];
typedef unsigned char type_10[64];
typedef unsigned char type_11[64][8];
typedef unsigned char type_12[22];
typedef unsigned char type_13[64];
typedef unsigned char type_14[64][8];
typedef unsigned short type_15[2];
typedef short type_16[256];
typedef unsigned char type_17[4];
typedef _anon2* type_18[8];
typedef _anon1 type_19[128];
typedef int type_20[5];

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

struct tagPOINT
{
	int x;
	int y;
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

unsigned char z81awrttbl[129];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
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
short hscrollwork[256];
_anon2 scrb_h_posit;
_anon2 scrc_h_posit;
_anon2 scrz_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
_anon11 scrflagc;
_anon11 scrflagz;
_anon11 scrflagb;
_anon2 vscroll;
short scra_hz;
_anon11 scrflaga;
_anon6 scroll_start;
unsigned char awasintbl[256];
short waterposi;
_anon6 waterdirec;
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
void scrbinit(short yWk);
void scroll();
int z41aline(int hsCount);
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs);
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
// Start address: 0x1018660
void enecginit()
{
	// Line 128, Address: 0x1018660, Func Offset: 0
	// Func End, Address: 0x1018668, Func Offset: 0x8
}

// 
// Start address: 0x1018670
void divdevset()
{
	// Line 132, Address: 0x1018670, Func Offset: 0
	// Func End, Address: 0x1018678, Func Offset: 0x8
}

// 
// Start address: 0x1018680
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 179, Address: 0x1018680, Func Offset: 0
	// Line 186, Address: 0x101868c, Func Offset: 0xc
	// Line 191, Address: 0x10186c0, Func Offset: 0x40
	// Line 193, Address: 0x1018708, Func Offset: 0x88
	// Line 194, Address: 0x101870c, Func Offset: 0x8c
	// Line 195, Address: 0x1018728, Func Offset: 0xa8
	// Line 196, Address: 0x101873c, Func Offset: 0xbc
	// Line 197, Address: 0x1018758, Func Offset: 0xd8
	// Line 198, Address: 0x101876c, Func Offset: 0xec
	// Line 199, Address: 0x1018788, Func Offset: 0x108
	// Line 200, Address: 0x101879c, Func Offset: 0x11c
	// Line 201, Address: 0x10187b8, Func Offset: 0x138
	// Line 202, Address: 0x10187cc, Func Offset: 0x14c
	// Line 204, Address: 0x10187e8, Func Offset: 0x168
	// Line 205, Address: 0x101880c, Func Offset: 0x18c
	// Line 206, Address: 0x1018818, Func Offset: 0x198
	// Line 208, Address: 0x1018824, Func Offset: 0x1a4
	// Line 209, Address: 0x1018840, Func Offset: 0x1c0
	// Line 211, Address: 0x101884c, Func Offset: 0x1cc
	// Line 212, Address: 0x1018854, Func Offset: 0x1d4
	// Func End, Address: 0x1018868, Func Offset: 0x1e8
}

// 
// Start address: 0x1018870
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	// Line 216, Address: 0x1018870, Func Offset: 0
	// Line 218, Address: 0x1018884, Func Offset: 0x14
	// Line 222, Address: 0x10188a0, Func Offset: 0x30
	// Line 230, Address: 0x10188cc, Func Offset: 0x5c
	// Line 232, Address: 0x10188e0, Func Offset: 0x70
	// Line 233, Address: 0x10188e8, Func Offset: 0x78
	// Line 234, Address: 0x10188f8, Func Offset: 0x88
	// Line 236, Address: 0x1018908, Func Offset: 0x98
	// Line 240, Address: 0x1018910, Func Offset: 0xa0
	// Line 241, Address: 0x1018914, Func Offset: 0xa4
	// Line 242, Address: 0x1018938, Func Offset: 0xc8
	// Line 245, Address: 0x101895c, Func Offset: 0xec
	// Line 246, Address: 0x1018970, Func Offset: 0x100
	// Line 247, Address: 0x101897c, Func Offset: 0x10c
	// Line 249, Address: 0x1018984, Func Offset: 0x114
	// Line 253, Address: 0x1018988, Func Offset: 0x118
	// Line 254, Address: 0x10189ac, Func Offset: 0x13c
	// Line 256, Address: 0x10189bc, Func Offset: 0x14c
	// Line 258, Address: 0x10189c4, Func Offset: 0x154
	// Line 259, Address: 0x10189d8, Func Offset: 0x168
	// Line 260, Address: 0x10189e4, Func Offset: 0x174
	// Line 262, Address: 0x10189ec, Func Offset: 0x17c
	// Line 265, Address: 0x10189f0, Func Offset: 0x180
	// Line 266, Address: 0x1018a14, Func Offset: 0x1a4
	// Line 269, Address: 0x1018a24, Func Offset: 0x1b4
	// Line 272, Address: 0x1018a2c, Func Offset: 0x1bc
	// Line 274, Address: 0x1018a38, Func Offset: 0x1c8
	// Line 275, Address: 0x1018a3c, Func Offset: 0x1cc
	// Line 276, Address: 0x1018a54, Func Offset: 0x1e4
	// Line 277, Address: 0x1018a6c, Func Offset: 0x1fc
	// Line 278, Address: 0x1018a84, Func Offset: 0x214
	// Line 281, Address: 0x1018a9c, Func Offset: 0x22c
	// Func End, Address: 0x1018ab8, Func Offset: 0x248
}

// 
// Start address: 0x1018ac0
void scrbinit(short yWk)
{
	_anon8 data;
	int i;
	// Line 285, Address: 0x1018ac0, Func Offset: 0
	// Line 289, Address: 0x1018acc, Func Offset: 0xc
	// Line 290, Address: 0x1018ad0, Func Offset: 0x10
	// Line 291, Address: 0x1018adc, Func Offset: 0x1c
	// Line 293, Address: 0x1018af8, Func Offset: 0x38
	// Line 294, Address: 0x1018b14, Func Offset: 0x54
	// Line 296, Address: 0x1018b1c, Func Offset: 0x5c
	// Line 297, Address: 0x1018b28, Func Offset: 0x68
	// Line 298, Address: 0x1018b30, Func Offset: 0x70
	// Line 302, Address: 0x1018b38, Func Offset: 0x78
	// Line 303, Address: 0x1018b44, Func Offset: 0x84
	// Line 304, Address: 0x1018b68, Func Offset: 0xa8
	// Line 305, Address: 0x1018b74, Func Offset: 0xb4
	// Line 306, Address: 0x1018b84, Func Offset: 0xc4
	// Line 307, Address: 0x1018b94, Func Offset: 0xd4
	// Line 308, Address: 0x1018ba0, Func Offset: 0xe0
	// Line 309, Address: 0x1018bac, Func Offset: 0xec
	// Line 312, Address: 0x1018bd0, Func Offset: 0x110
	// Line 313, Address: 0x1018bdc, Func Offset: 0x11c
	// Line 315, Address: 0x1018be8, Func Offset: 0x128
	// Line 316, Address: 0x1018c0c, Func Offset: 0x14c
	// Line 317, Address: 0x1018c38, Func Offset: 0x178
	// Line 318, Address: 0x1018c64, Func Offset: 0x1a4
	// Line 320, Address: 0x1018c70, Func Offset: 0x1b0
	// Line 321, Address: 0x1018c84, Func Offset: 0x1c4
	// Line 322, Address: 0x1018c94, Func Offset: 0x1d4
	// Func End, Address: 0x1018ca4, Func Offset: 0x1e4
}

// 
// Start address: 0x1018cb0
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 326, Address: 0x1018cb0, Func Offset: 0
	// Line 331, Address: 0x1018cc0, Func Offset: 0x10
	// Line 334, Address: 0x1018cd0, Func Offset: 0x20
	// Line 335, Address: 0x1018cfc, Func Offset: 0x4c
	// Line 336, Address: 0x1018d04, Func Offset: 0x54
	// Line 337, Address: 0x1018d0c, Func Offset: 0x5c
	// Line 339, Address: 0x1018d14, Func Offset: 0x64
	// Line 340, Address: 0x1018d24, Func Offset: 0x74
	// Line 344, Address: 0x1018d34, Func Offset: 0x84
	// Line 345, Address: 0x1018d54, Func Offset: 0xa4
	// Line 346, Address: 0x1018d8c, Func Offset: 0xdc
	// Line 348, Address: 0x1018dc4, Func Offset: 0x114
	// Line 349, Address: 0x1018dc8, Func Offset: 0x118
	// Line 350, Address: 0x1018dd4, Func Offset: 0x124
	// Line 352, Address: 0x1018df0, Func Offset: 0x140
	// Line 353, Address: 0x1018e0c, Func Offset: 0x15c
	// Line 354, Address: 0x1018e14, Func Offset: 0x164
	// Line 358, Address: 0x1018e1c, Func Offset: 0x16c
	// Line 359, Address: 0x1018e28, Func Offset: 0x178
	// Line 360, Address: 0x1018e4c, Func Offset: 0x19c
	// Line 361, Address: 0x1018e58, Func Offset: 0x1a8
	// Line 362, Address: 0x1018e68, Func Offset: 0x1b8
	// Line 363, Address: 0x1018e78, Func Offset: 0x1c8
	// Line 366, Address: 0x1018e9c, Func Offset: 0x1ec
	// Line 368, Address: 0x1018ea8, Func Offset: 0x1f8
	// Line 369, Address: 0x1018eb8, Func Offset: 0x208
	// Line 370, Address: 0x1018ec8, Func Offset: 0x218
	// Line 371, Address: 0x1018ed8, Func Offset: 0x228
	// Line 372, Address: 0x1018f0c, Func Offset: 0x25c
	// Line 373, Address: 0x1018f14, Func Offset: 0x264
	// Line 375, Address: 0x1018f1c, Func Offset: 0x26c
	// Line 376, Address: 0x1018f20, Func Offset: 0x270
	// Line 378, Address: 0x1018f2c, Func Offset: 0x27c
	// Line 379, Address: 0x1018f5c, Func Offset: 0x2ac
	// Line 380, Address: 0x1018f60, Func Offset: 0x2b0
	// Line 382, Address: 0x1018f70, Func Offset: 0x2c0
	// Line 384, Address: 0x1018f80, Func Offset: 0x2d0
	// Line 386, Address: 0x1018f8c, Func Offset: 0x2dc
	// Line 387, Address: 0x1018fbc, Func Offset: 0x30c
	// Line 388, Address: 0x1018fc0, Func Offset: 0x310
	// Line 390, Address: 0x1018fd0, Func Offset: 0x320
	// Line 391, Address: 0x1018fec, Func Offset: 0x33c
	// Line 392, Address: 0x1019010, Func Offset: 0x360
	// Line 393, Address: 0x101901c, Func Offset: 0x36c
	// Line 394, Address: 0x1019028, Func Offset: 0x378
	// Line 395, Address: 0x1019034, Func Offset: 0x384
	// Line 397, Address: 0x1019084, Func Offset: 0x3d4
	// Func End, Address: 0x101909c, Func Offset: 0x3ec
}

// 
// Start address: 0x10190a0
int z41aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z41ascrtbl[5];
	// Line 401, Address: 0x10190a0, Func Offset: 0
	// Line 405, Address: 0x10190b4, Func Offset: 0x14
	// Line 410, Address: 0x10190e0, Func Offset: 0x40
	// Line 411, Address: 0x1019104, Func Offset: 0x64
	// Line 412, Address: 0x1019108, Func Offset: 0x68
	// Line 413, Address: 0x1019120, Func Offset: 0x80
	// Line 414, Address: 0x1019124, Func Offset: 0x84
	// Line 415, Address: 0x1019128, Func Offset: 0x88
	// Line 416, Address: 0x1019134, Func Offset: 0x94
	// Line 419, Address: 0x1019140, Func Offset: 0xa0
	// Line 422, Address: 0x101914c, Func Offset: 0xac
	// Line 423, Address: 0x101917c, Func Offset: 0xdc
	// Line 424, Address: 0x1019188, Func Offset: 0xe8
	// Line 425, Address: 0x10191ac, Func Offset: 0x10c
	// Line 426, Address: 0x10191d0, Func Offset: 0x130
	// Line 427, Address: 0x10191dc, Func Offset: 0x13c
	// Line 428, Address: 0x1019200, Func Offset: 0x160
	// Line 429, Address: 0x1019210, Func Offset: 0x170
	// Line 430, Address: 0x1019214, Func Offset: 0x174
	// Func End, Address: 0x101922c, Func Offset: 0x18c
}

// 
// Start address: 0x1019230
void zonescrsetsub0(short HPosi, short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	_anon6 data1;
	_anon6 data2;
	short avp;
	int i;
	// Line 434, Address: 0x1019230, Func Offset: 0
	// Line 441, Address: 0x101924c, Func Offset: 0x1c
	// Line 442, Address: 0x1019254, Func Offset: 0x24
	// Line 443, Address: 0x1019260, Func Offset: 0x30
	// Line 444, Address: 0x101926c, Func Offset: 0x3c
	// Line 445, Address: 0x1019280, Func Offset: 0x50
	// Line 446, Address: 0x1019294, Func Offset: 0x64
	// Line 447, Address: 0x1019298, Func Offset: 0x68
	// Line 448, Address: 0x10192ac, Func Offset: 0x7c
	// Line 450, Address: 0x10192b0, Func Offset: 0x80
	// Line 451, Address: 0x10192bc, Func Offset: 0x8c
	// Line 452, Address: 0x10192e4, Func Offset: 0xb4
	// Line 453, Address: 0x10192f4, Func Offset: 0xc4
	// Line 457, Address: 0x10192f8, Func Offset: 0xc8
	// Line 462, Address: 0x101931c, Func Offset: 0xec
	// Line 463, Address: 0x1019324, Func Offset: 0xf4
	// Line 464, Address: 0x1019374, Func Offset: 0x144
	// Line 465, Address: 0x1019378, Func Offset: 0x148
	// Line 466, Address: 0x1019384, Func Offset: 0x154
	// Line 467, Address: 0x1019390, Func Offset: 0x160
	// Line 468, Address: 0x101939c, Func Offset: 0x16c
	// Line 470, Address: 0x10193b4, Func Offset: 0x184
	// Line 471, Address: 0x10193b8, Func Offset: 0x188
	// Line 473, Address: 0x10193e0, Func Offset: 0x1b0
	// Line 475, Address: 0x10193ec, Func Offset: 0x1bc
	// Line 477, Address: 0x10193f4, Func Offset: 0x1c4
	// Line 478, Address: 0x10193fc, Func Offset: 0x1cc
	// Line 479, Address: 0x1019400, Func Offset: 0x1d0
	// Line 480, Address: 0x101940c, Func Offset: 0x1dc
	// Line 481, Address: 0x1019418, Func Offset: 0x1e8
	// Line 482, Address: 0x1019424, Func Offset: 0x1f4
	// Line 483, Address: 0x1019430, Func Offset: 0x200
	// Line 485, Address: 0x1019448, Func Offset: 0x218
	// Line 486, Address: 0x101944c, Func Offset: 0x21c
	// Line 488, Address: 0x1019474, Func Offset: 0x244
	// Line 490, Address: 0x1019480, Func Offset: 0x250
	// Func End, Address: 0x1019498, Func Offset: 0x268
}

// 
// Start address: 0x10194a0
void scroll_h()
{
	unsigned short wD4;
	// Line 502, Address: 0x10194a0, Func Offset: 0
	// Line 505, Address: 0x10194ac, Func Offset: 0xc
	// Line 506, Address: 0x10194b8, Func Offset: 0x18
	// Line 507, Address: 0x10194c0, Func Offset: 0x20
	// Line 508, Address: 0x10194f4, Func Offset: 0x54
	// Line 509, Address: 0x1019508, Func Offset: 0x68
	// Line 510, Address: 0x1019534, Func Offset: 0x94
	// Line 511, Address: 0x1019548, Func Offset: 0xa8
	// Line 514, Address: 0x1019550, Func Offset: 0xb0
	// Line 519, Address: 0x1019564, Func Offset: 0xc4
	// Func End, Address: 0x1019578, Func Offset: 0xd8
}

// 
// Start address: 0x1019580
void scrh_move()
{
	unsigned short wD0;
	// Line 521, Address: 0x1019580, Func Offset: 0
	// Line 524, Address: 0x101958c, Func Offset: 0xc
	// Line 525, Address: 0x1019598, Func Offset: 0x18
	// Line 526, Address: 0x10195ac, Func Offset: 0x2c
	// Line 527, Address: 0x10195c0, Func Offset: 0x40
	// Line 529, Address: 0x10195cc, Func Offset: 0x4c
	// Line 530, Address: 0x10195d4, Func Offset: 0x54
	// Line 531, Address: 0x10195dc, Func Offset: 0x5c
	// Line 532, Address: 0x10195f4, Func Offset: 0x74
	// Line 533, Address: 0x1019600, Func Offset: 0x80
	// Line 535, Address: 0x1019608, Func Offset: 0x88
	// Line 538, Address: 0x1019614, Func Offset: 0x94
	// Func End, Address: 0x1019628, Func Offset: 0xa8
}

// 
// Start address: 0x1019630
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 541, Address: 0x1019630, Func Offset: 0
	// Line 544, Address: 0x101963c, Func Offset: 0xc
	// Line 545, Address: 0x101965c, Func Offset: 0x2c
	// Line 548, Address: 0x1019664, Func Offset: 0x34
	// Line 549, Address: 0x101967c, Func Offset: 0x4c
	// Line 550, Address: 0x10196ac, Func Offset: 0x7c
	// Line 553, Address: 0x10196b8, Func Offset: 0x88
	// Line 554, Address: 0x10196c0, Func Offset: 0x90
	// Line 555, Address: 0x10196d4, Func Offset: 0xa4
	// Line 556, Address: 0x1019704, Func Offset: 0xd4
	// Line 557, Address: 0x1019710, Func Offset: 0xe0
	// Line 559, Address: 0x1019718, Func Offset: 0xe8
	// Func End, Address: 0x1019728, Func Offset: 0xf8
}

// 
// Start address: 0x1019730
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 562, Address: 0x1019730, Func Offset: 0
	// Line 565, Address: 0x101973c, Func Offset: 0xc
	// Line 566, Address: 0x101975c, Func Offset: 0x2c
	// Line 569, Address: 0x1019764, Func Offset: 0x34
	// Line 570, Address: 0x101977c, Func Offset: 0x4c
	// Line 571, Address: 0x10197ac, Func Offset: 0x7c
	// Line 574, Address: 0x10197b8, Func Offset: 0x88
	// Line 575, Address: 0x10197c0, Func Offset: 0x90
	// Line 576, Address: 0x10197d4, Func Offset: 0xa4
	// Line 577, Address: 0x1019804, Func Offset: 0xd4
	// Line 578, Address: 0x1019810, Func Offset: 0xe0
	// Line 580, Address: 0x1019818, Func Offset: 0xe8
	// Func End, Address: 0x1019828, Func Offset: 0xf8
}

// 
// Start address: 0x1019830
void scroll_v()
{
	unsigned short wD0;
	// Line 599, Address: 0x1019830, Func Offset: 0
	// Line 602, Address: 0x101983c, Func Offset: 0xc
	// Line 603, Address: 0x1019868, Func Offset: 0x38
	// Line 604, Address: 0x1019880, Func Offset: 0x50
	// Line 607, Address: 0x1019888, Func Offset: 0x58
	// Line 608, Address: 0x10198a0, Func Offset: 0x70
	// Line 609, Address: 0x10198a8, Func Offset: 0x78
	// Line 610, Address: 0x10198c8, Func Offset: 0x98
	// Line 611, Address: 0x10198dc, Func Offset: 0xac
	// Line 612, Address: 0x10198e8, Func Offset: 0xb8
	// Line 614, Address: 0x10198f0, Func Offset: 0xc0
	// Line 615, Address: 0x1019904, Func Offset: 0xd4
	// Line 616, Address: 0x1019914, Func Offset: 0xe4
	// Line 617, Address: 0x101991c, Func Offset: 0xec
	// Line 618, Address: 0x1019928, Func Offset: 0xf8
	// Line 620, Address: 0x1019930, Func Offset: 0x100
	// Line 621, Address: 0x1019938, Func Offset: 0x108
	// Line 622, Address: 0x101994c, Func Offset: 0x11c
	// Line 623, Address: 0x1019954, Func Offset: 0x124
	// Line 629, Address: 0x101995c, Func Offset: 0x12c
	// Line 630, Address: 0x1019970, Func Offset: 0x140
	// Line 631, Address: 0x1019978, Func Offset: 0x148
	// Line 632, Address: 0x1019984, Func Offset: 0x154
	// Line 634, Address: 0x101998c, Func Offset: 0x15c
	// Line 635, Address: 0x10199a0, Func Offset: 0x170
	// Line 636, Address: 0x10199a8, Func Offset: 0x178
	// Line 641, Address: 0x10199b0, Func Offset: 0x180
	// Line 643, Address: 0x10199b8, Func Offset: 0x188
	// Func End, Address: 0x10199cc, Func Offset: 0x19c
}

// 
// Start address: 0x10199d0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 649, Address: 0x10199d0, Func Offset: 0
	// Line 652, Address: 0x10199e0, Func Offset: 0x10
	// Line 653, Address: 0x10199fc, Func Offset: 0x2c
	// Line 654, Address: 0x1019a08, Func Offset: 0x38
	// Line 657, Address: 0x1019a10, Func Offset: 0x40
	// Line 658, Address: 0x1019a1c, Func Offset: 0x4c
	// Line 659, Address: 0x1019a34, Func Offset: 0x64
	// Line 662, Address: 0x1019a50, Func Offset: 0x80
	// Line 663, Address: 0x1019a60, Func Offset: 0x90
	// Line 664, Address: 0x1019a6c, Func Offset: 0x9c
	// Line 666, Address: 0x1019a74, Func Offset: 0xa4
	// Line 667, Address: 0x1019a94, Func Offset: 0xc4
	// Line 668, Address: 0x1019aa0, Func Offset: 0xd0
	// Line 669, Address: 0x1019aa8, Func Offset: 0xd8
	// Line 670, Address: 0x1019ac8, Func Offset: 0xf8
	// Line 671, Address: 0x1019ad4, Func Offset: 0x104
	// Line 673, Address: 0x1019adc, Func Offset: 0x10c
	// Line 677, Address: 0x1019ae8, Func Offset: 0x118
	// Func End, Address: 0x1019afc, Func Offset: 0x12c
}

// 
// Start address: 0x1019b00
void sv_move_main1(unsigned short wD0)
{
	// Line 681, Address: 0x1019b00, Func Offset: 0
	// Line 683, Address: 0x1019b0c, Func Offset: 0xc
	// Line 684, Address: 0x1019b2c, Func Offset: 0x2c
	// Line 685, Address: 0x1019b38, Func Offset: 0x38
	// Line 686, Address: 0x1019b40, Func Offset: 0x40
	// Line 687, Address: 0x1019b60, Func Offset: 0x60
	// Line 688, Address: 0x1019b6c, Func Offset: 0x6c
	// Line 690, Address: 0x1019b74, Func Offset: 0x74
	// Line 693, Address: 0x1019b80, Func Offset: 0x80
	// Func End, Address: 0x1019b90, Func Offset: 0x90
}

// 
// Start address: 0x1019b90
void sv_move_main2(unsigned short wD0)
{
	// Line 696, Address: 0x1019b90, Func Offset: 0
	// Line 698, Address: 0x1019b9c, Func Offset: 0xc
	// Line 699, Address: 0x1019bbc, Func Offset: 0x2c
	// Line 700, Address: 0x1019bc8, Func Offset: 0x38
	// Line 701, Address: 0x1019bd0, Func Offset: 0x40
	// Line 702, Address: 0x1019bf0, Func Offset: 0x60
	// Line 703, Address: 0x1019bfc, Func Offset: 0x6c
	// Line 705, Address: 0x1019c04, Func Offset: 0x74
	// Line 708, Address: 0x1019c10, Func Offset: 0x80
	// Func End, Address: 0x1019c20, Func Offset: 0x90
}

// 
// Start address: 0x1019c20
void sv_move_sub2()
{
	// Line 711, Address: 0x1019c20, Func Offset: 0
	// Line 712, Address: 0x1019c28, Func Offset: 0x8
	// Line 713, Address: 0x1019c30, Func Offset: 0x10
	// Line 714, Address: 0x1019c3c, Func Offset: 0x1c
	// Func End, Address: 0x1019c4c, Func Offset: 0x2c
}

// 
// Start address: 0x1019c50
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 717, Address: 0x1019c50, Func Offset: 0
	// Line 720, Address: 0x1019c5c, Func Offset: 0xc
	// Line 721, Address: 0x1019c60, Func Offset: 0x10
	// Line 722, Address: 0x1019c68, Func Offset: 0x18
	// Line 723, Address: 0x1019c84, Func Offset: 0x34
	// Line 724, Address: 0x1019ca0, Func Offset: 0x50
	// Line 725, Address: 0x1019cac, Func Offset: 0x5c
	// Line 727, Address: 0x1019cb4, Func Offset: 0x64
	// Line 730, Address: 0x1019cc0, Func Offset: 0x70
	// Func End, Address: 0x1019cd0, Func Offset: 0x80
}

// 
// Start address: 0x1019cd0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 735, Address: 0x1019cd0, Func Offset: 0
	// Line 739, Address: 0x1019ce0, Func Offset: 0x10
	// Line 740, Address: 0x1019cfc, Func Offset: 0x2c
	// Line 741, Address: 0x1019d08, Func Offset: 0x38
	// Line 743, Address: 0x1019d1c, Func Offset: 0x4c
	// Line 744, Address: 0x1019d24, Func Offset: 0x54
	// Line 745, Address: 0x1019d2c, Func Offset: 0x5c
	// Line 746, Address: 0x1019d30, Func Offset: 0x60
	// Line 747, Address: 0x1019d3c, Func Offset: 0x6c
	// Func End, Address: 0x1019d50, Func Offset: 0x80
}

// 
// Start address: 0x1019d50
void scrv_up_ch(_anon2 lD1)
{
	// Line 751, Address: 0x1019d50, Func Offset: 0
	// Line 752, Address: 0x1019d5c, Func Offset: 0xc
	// Line 753, Address: 0x1019d84, Func Offset: 0x34
	// Line 754, Address: 0x1019d9c, Func Offset: 0x4c
	// Line 755, Address: 0x1019da8, Func Offset: 0x58
	// Line 756, Address: 0x1019dbc, Func Offset: 0x6c
	// Line 757, Address: 0x1019dd0, Func Offset: 0x80
	// Line 758, Address: 0x1019de4, Func Offset: 0x94
	// Line 761, Address: 0x1019dec, Func Offset: 0x9c
	// Line 764, Address: 0x1019df8, Func Offset: 0xa8
	// Line 766, Address: 0x1019e04, Func Offset: 0xb4
	// Func End, Address: 0x1019e14, Func Offset: 0xc4
}

// 
// Start address: 0x1019e20
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 772, Address: 0x1019e20, Func Offset: 0
	// Line 776, Address: 0x1019e30, Func Offset: 0x10
	// Line 777, Address: 0x1019e34, Func Offset: 0x14
	// Line 778, Address: 0x1019e3c, Func Offset: 0x1c
	// Line 779, Address: 0x1019e48, Func Offset: 0x28
	// Line 781, Address: 0x1019e5c, Func Offset: 0x3c
	// Line 782, Address: 0x1019e64, Func Offset: 0x44
	// Line 783, Address: 0x1019e6c, Func Offset: 0x4c
	// Line 785, Address: 0x1019e70, Func Offset: 0x50
	// Line 787, Address: 0x1019e7c, Func Offset: 0x5c
	// Func End, Address: 0x1019e90, Func Offset: 0x70
}

// 
// Start address: 0x1019e90
void scrv_down_ch(_anon2 lD1)
{
	// Line 791, Address: 0x1019e90, Func Offset: 0
	// Line 792, Address: 0x1019e9c, Func Offset: 0xc
	// Line 793, Address: 0x1019ec4, Func Offset: 0x34
	// Line 794, Address: 0x1019ed0, Func Offset: 0x40
	// Line 795, Address: 0x1019ee4, Func Offset: 0x54
	// Line 796, Address: 0x1019ef8, Func Offset: 0x68
	// Line 797, Address: 0x1019f0c, Func Offset: 0x7c
	// Line 798, Address: 0x1019f20, Func Offset: 0x90
	// Line 800, Address: 0x1019f28, Func Offset: 0x98
	// Line 803, Address: 0x1019f34, Func Offset: 0xa4
	// Line 805, Address: 0x1019f40, Func Offset: 0xb0
	// Func End, Address: 0x1019f50, Func Offset: 0xc0
}

// 
// Start address: 0x1019f50
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 808, Address: 0x1019f50, Func Offset: 0
	// Line 811, Address: 0x1019f60, Func Offset: 0x10
	// Line 813, Address: 0x1019f6c, Func Offset: 0x1c
	// Line 814, Address: 0x1019f74, Func Offset: 0x24
	// Line 815, Address: 0x1019f7c, Func Offset: 0x2c
	// Line 817, Address: 0x1019f80, Func Offset: 0x30
	// Line 818, Address: 0x1019fa8, Func Offset: 0x58
	// Line 821, Address: 0x1019fb4, Func Offset: 0x64
	// Line 822, Address: 0x1019fe8, Func Offset: 0x98
	// Line 823, Address: 0x1019ffc, Func Offset: 0xac
	// Line 825, Address: 0x101a028, Func Offset: 0xd8
	// Line 826, Address: 0x101a03c, Func Offset: 0xec
	// Line 828, Address: 0x101a044, Func Offset: 0xf4
	// Line 833, Address: 0x101a058, Func Offset: 0x108
	// Func End, Address: 0x101a06c, Func Offset: 0x11c
}

// 
// Start address: 0x101a070
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 837, Address: 0x101a070, Func Offset: 0
	// Line 840, Address: 0x101a07c, Func Offset: 0xc
	// Line 841, Address: 0x101a08c, Func Offset: 0x1c
	// Line 842, Address: 0x101a09c, Func Offset: 0x2c
	// Line 844, Address: 0x101a0a8, Func Offset: 0x38
	// Line 846, Address: 0x101a0dc, Func Offset: 0x6c
	// Line 847, Address: 0x101a0f0, Func Offset: 0x80
	// Line 848, Address: 0x101a100, Func Offset: 0x90
	// Line 849, Address: 0x101a114, Func Offset: 0xa4
	// Line 850, Address: 0x101a128, Func Offset: 0xb8
	// Line 853, Address: 0x101a130, Func Offset: 0xc0
	// Line 858, Address: 0x101a144, Func Offset: 0xd4
	// Line 859, Address: 0x101a154, Func Offset: 0xe4
	// Line 860, Address: 0x101a164, Func Offset: 0xf4
	// Line 861, Address: 0x101a17c, Func Offset: 0x10c
	// Line 863, Address: 0x101a188, Func Offset: 0x118
	// Line 865, Address: 0x101a1bc, Func Offset: 0x14c
	// Line 866, Address: 0x101a1d0, Func Offset: 0x160
	// Line 867, Address: 0x101a1e0, Func Offset: 0x170
	// Line 868, Address: 0x101a1f4, Func Offset: 0x184
	// Line 869, Address: 0x101a208, Func Offset: 0x198
	// Line 872, Address: 0x101a210, Func Offset: 0x1a0
	// Line 877, Address: 0x101a224, Func Offset: 0x1b4
	// Func End, Address: 0x101a230, Func Offset: 0x1c0
}

// 
// Start address: 0x101a230
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 884, Address: 0x101a230, Func Offset: 0
	// Line 887, Address: 0x101a23c, Func Offset: 0xc
	// Line 888, Address: 0x101a248, Func Offset: 0x18
	// Line 890, Address: 0x101a254, Func Offset: 0x24
	// Line 891, Address: 0x101a280, Func Offset: 0x50
	// Line 892, Address: 0x101a294, Func Offset: 0x64
	// Line 893, Address: 0x101a2c4, Func Offset: 0x94
	// Line 894, Address: 0x101a2d8, Func Offset: 0xa8
	// Line 897, Address: 0x101a2e0, Func Offset: 0xb0
	// Line 902, Address: 0x101a2f4, Func Offset: 0xc4
	// Func End, Address: 0x101a304, Func Offset: 0xd4
}

// 
// Start address: 0x101a310
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 906, Address: 0x101a310, Func Offset: 0
	// Line 910, Address: 0x101a320, Func Offset: 0x10
	// Line 911, Address: 0x101a32c, Func Offset: 0x1c
	// Line 912, Address: 0x101a33c, Func Offset: 0x2c
	// Line 914, Address: 0x101a348, Func Offset: 0x38
	// Line 915, Address: 0x101a350, Func Offset: 0x40
	// Line 916, Address: 0x101a358, Func Offset: 0x48
	// Line 918, Address: 0x101a364, Func Offset: 0x54
	// Line 919, Address: 0x101a370, Func Offset: 0x60
	// Line 920, Address: 0x101a384, Func Offset: 0x74
	// Line 921, Address: 0x101a390, Func Offset: 0x80
	// Line 922, Address: 0x101a3a4, Func Offset: 0x94
	// Line 923, Address: 0x101a3b4, Func Offset: 0xa4
	// Line 924, Address: 0x101a3c8, Func Offset: 0xb8
	// Line 925, Address: 0x101a3e4, Func Offset: 0xd4
	// Line 928, Address: 0x101a3ec, Func Offset: 0xdc
	// Line 933, Address: 0x101a40c, Func Offset: 0xfc
	// Func End, Address: 0x101a41c, Func Offset: 0x10c
}

// 
// Start address: 0x101a420
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 936, Address: 0x101a420, Func Offset: 0
	// Line 940, Address: 0x101a430, Func Offset: 0x10
	// Line 941, Address: 0x101a43c, Func Offset: 0x1c
	// Line 942, Address: 0x101a44c, Func Offset: 0x2c
	// Line 944, Address: 0x101a458, Func Offset: 0x38
	// Line 945, Address: 0x101a460, Func Offset: 0x40
	// Line 946, Address: 0x101a468, Func Offset: 0x48
	// Line 948, Address: 0x101a474, Func Offset: 0x54
	// Line 949, Address: 0x101a480, Func Offset: 0x60
	// Line 950, Address: 0x101a494, Func Offset: 0x74
	// Line 951, Address: 0x101a4a0, Func Offset: 0x80
	// Line 952, Address: 0x101a4b4, Func Offset: 0x94
	// Line 953, Address: 0x101a4c4, Func Offset: 0xa4
	// Line 954, Address: 0x101a4d8, Func Offset: 0xb8
	// Line 955, Address: 0x101a4f4, Func Offset: 0xd4
	// Line 958, Address: 0x101a4fc, Func Offset: 0xdc
	// Line 963, Address: 0x101a51c, Func Offset: 0xfc
	// Func End, Address: 0x101a52c, Func Offset: 0x10c
}

// 
// Start address: 0x101a530
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 975, Address: 0x101a530, Func Offset: 0
	// Line 979, Address: 0x101a540, Func Offset: 0x10
	// Line 980, Address: 0x101a54c, Func Offset: 0x1c
	// Line 981, Address: 0x101a55c, Func Offset: 0x2c
	// Line 983, Address: 0x101a568, Func Offset: 0x38
	// Line 984, Address: 0x101a570, Func Offset: 0x40
	// Line 985, Address: 0x101a578, Func Offset: 0x48
	// Line 987, Address: 0x101a584, Func Offset: 0x54
	// Line 988, Address: 0x101a590, Func Offset: 0x60
	// Line 989, Address: 0x101a5a4, Func Offset: 0x74
	// Line 990, Address: 0x101a5b0, Func Offset: 0x80
	// Line 991, Address: 0x101a5c4, Func Offset: 0x94
	// Line 992, Address: 0x101a5d4, Func Offset: 0xa4
	// Line 993, Address: 0x101a5e8, Func Offset: 0xb8
	// Line 994, Address: 0x101a604, Func Offset: 0xd4
	// Line 997, Address: 0x101a60c, Func Offset: 0xdc
	// Line 1002, Address: 0x101a62c, Func Offset: 0xfc
	// Func End, Address: 0x101a63c, Func Offset: 0x10c
}

// 
// Start address: 0x101a640
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1016, Address: 0x101a640, Func Offset: 0
	// Line 1022, Address: 0x101a65c, Func Offset: 0x1c
	// Line 1023, Address: 0x101a660, Func Offset: 0x20
	// Line 1024, Address: 0x101a66c, Func Offset: 0x2c
	// Line 1025, Address: 0x101a678, Func Offset: 0x38
	// Line 1026, Address: 0x101a680, Func Offset: 0x40
	// Line 1027, Address: 0x101a688, Func Offset: 0x48
	// Line 1029, Address: 0x101a69c, Func Offset: 0x5c
	// Line 1030, Address: 0x101a6a8, Func Offset: 0x68
	// Line 1031, Address: 0x101a6b4, Func Offset: 0x74
	// Line 1032, Address: 0x101a6bc, Func Offset: 0x7c
	// Line 1034, Address: 0x101a6c4, Func Offset: 0x84
	// Func End, Address: 0x101a6e8, Func Offset: 0xa8
}

// 
// Start address: 0x101a6f0
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
	// Line 1047, Address: 0x101a6f0, Func Offset: 0
	// Line 1056, Address: 0x101a710, Func Offset: 0x20
	// Line 1057, Address: 0x101a714, Func Offset: 0x24
	// Line 1058, Address: 0x101a720, Func Offset: 0x30
	// Line 1059, Address: 0x101a72c, Func Offset: 0x3c
	// Line 1060, Address: 0x101a734, Func Offset: 0x44
	// Line 1061, Address: 0x101a73c, Func Offset: 0x4c
	// Line 1063, Address: 0x101a750, Func Offset: 0x60
	// Line 1064, Address: 0x101a754, Func Offset: 0x64
	// Line 1065, Address: 0x101a760, Func Offset: 0x70
	// Line 1066, Address: 0x101a76c, Func Offset: 0x7c
	// Line 1067, Address: 0x101a774, Func Offset: 0x84
	// Line 1069, Address: 0x101a77c, Func Offset: 0x8c
	// Line 1070, Address: 0x101a788, Func Offset: 0x98
	// Line 1071, Address: 0x101a79c, Func Offset: 0xac
	// Line 1073, Address: 0x101a7a8, Func Offset: 0xb8
	// Line 1074, Address: 0x101a7b0, Func Offset: 0xc0
	// Line 1076, Address: 0x101a7b8, Func Offset: 0xc8
	// Line 1078, Address: 0x101a7d8, Func Offset: 0xe8
	// Line 1084, Address: 0x101a804, Func Offset: 0x114
	// Line 1085, Address: 0x101a818, Func Offset: 0x128
	// Line 1087, Address: 0x101a824, Func Offset: 0x134
	// Line 1088, Address: 0x101a82c, Func Offset: 0x13c
	// Line 1089, Address: 0x101a834, Func Offset: 0x144
	// Line 1091, Address: 0x101a854, Func Offset: 0x164
	// Line 1097, Address: 0x101a880, Func Offset: 0x190
	// Line 1098, Address: 0x101a894, Func Offset: 0x1a4
	// Line 1100, Address: 0x101a8a0, Func Offset: 0x1b0
	// Line 1101, Address: 0x101a8a8, Func Offset: 0x1b8
	// Line 1102, Address: 0x101a8b0, Func Offset: 0x1c0
	// Line 1104, Address: 0x101a8d0, Func Offset: 0x1e0
	// Line 1110, Address: 0x101a8fc, Func Offset: 0x20c
	// Line 1111, Address: 0x101a910, Func Offset: 0x220
	// Line 1113, Address: 0x101a91c, Func Offset: 0x22c
	// Line 1114, Address: 0x101a924, Func Offset: 0x234
	// Line 1115, Address: 0x101a92c, Func Offset: 0x23c
	// Line 1117, Address: 0x101a94c, Func Offset: 0x25c
	// Line 1126, Address: 0x101a978, Func Offset: 0x288
	// Func End, Address: 0x101a9a0, Func Offset: 0x2b0
}

// 
// Start address: 0x101a9a0
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
	// Line 1143, Address: 0x101a9a0, Func Offset: 0
	// Line 1154, Address: 0x101a9cc, Func Offset: 0x2c
	// Line 1156, Address: 0x101a9d4, Func Offset: 0x34
	// Line 1157, Address: 0x101a9ec, Func Offset: 0x4c
	// Line 1158, Address: 0x101aa00, Func Offset: 0x60
	// Line 1160, Address: 0x101aa08, Func Offset: 0x68
	// Line 1162, Address: 0x101aa1c, Func Offset: 0x7c
	// Line 1163, Address: 0x101aa34, Func Offset: 0x94
	// Line 1164, Address: 0x101aa48, Func Offset: 0xa8
	// Line 1165, Address: 0x101aa50, Func Offset: 0xb0
	// Line 1167, Address: 0x101aa58, Func Offset: 0xb8
	// Line 1168, Address: 0x101aa6c, Func Offset: 0xcc
	// Line 1173, Address: 0x101aa74, Func Offset: 0xd4
	// Line 1174, Address: 0x101aac4, Func Offset: 0x124
	// Line 1175, Address: 0x101aacc, Func Offset: 0x12c
	// Line 1181, Address: 0x101aaec, Func Offset: 0x14c
	// Line 1182, Address: 0x101ab0c, Func Offset: 0x16c
	// Line 1183, Address: 0x101ab30, Func Offset: 0x190
	// Line 1184, Address: 0x101ab3c, Func Offset: 0x19c
	// Line 1185, Address: 0x101ab44, Func Offset: 0x1a4
	// Line 1187, Address: 0x101ab64, Func Offset: 0x1c4
	// Line 1191, Address: 0x101ab90, Func Offset: 0x1f0
	// Line 1194, Address: 0x101ab98, Func Offset: 0x1f8
	// Line 1195, Address: 0x101ab9c, Func Offset: 0x1fc
	// Line 1199, Address: 0x101abbc, Func Offset: 0x21c
	// Line 1206, Address: 0x101abe8, Func Offset: 0x248
	// Line 1213, Address: 0x101abfc, Func Offset: 0x25c
	// Line 1214, Address: 0x101ac04, Func Offset: 0x264
	// Line 1215, Address: 0x101ac0c, Func Offset: 0x26c
	// Line 1216, Address: 0x101ac24, Func Offset: 0x284
	// Line 1217, Address: 0x101ac44, Func Offset: 0x2a4
	// Line 1221, Address: 0x101ac4c, Func Offset: 0x2ac
	// Line 1223, Address: 0x101ac7c, Func Offset: 0x2dc
	// Line 1224, Address: 0x101ac88, Func Offset: 0x2e8
	// Line 1228, Address: 0x101ac98, Func Offset: 0x2f8
	// Line 1229, Address: 0x101aca4, Func Offset: 0x304
	// Line 1230, Address: 0x101acc4, Func Offset: 0x324
	// Line 1231, Address: 0x101acd0, Func Offset: 0x330
	// Line 1232, Address: 0x101acfc, Func Offset: 0x35c
	// Line 1233, Address: 0x101ad1c, Func Offset: 0x37c
	// Line 1235, Address: 0x101ad40, Func Offset: 0x3a0
	// Line 1238, Address: 0x101ad64, Func Offset: 0x3c4
	// Line 1240, Address: 0x101ad84, Func Offset: 0x3e4
	// Line 1243, Address: 0x101ad98, Func Offset: 0x3f8
	// Line 1244, Address: 0x101ada4, Func Offset: 0x404
	// Line 1245, Address: 0x101adb4, Func Offset: 0x414
	// Line 1247, Address: 0x101adbc, Func Offset: 0x41c
	// Func End, Address: 0x101ade4, Func Offset: 0x444
}

// 
// Start address: 0x101adf0
void scrollwrtc()
{
	// Line 1253, Address: 0x101adf0, Func Offset: 0
	// Func End, Address: 0x101adf8, Func Offset: 0x8
}

// 
// Start address: 0x101ae00
void scrollwrtz()
{
	// Line 1258, Address: 0x101ae00, Func Offset: 0
	// Func End, Address: 0x101ae08, Func Offset: 0x8
}

// 
// Start address: 0x101ae10
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1276, Address: 0x101ae10, Func Offset: 0
	// Line 1289, Address: 0x101ae38, Func Offset: 0x28
	// Line 1292, Address: 0x101ae58, Func Offset: 0x48
	// Line 1293, Address: 0x101ae6c, Func Offset: 0x5c
	// Line 1294, Address: 0x101ae80, Func Offset: 0x70
	// Line 1295, Address: 0x101ae94, Func Offset: 0x84
	// Line 1297, Address: 0x101aea8, Func Offset: 0x98
	// Line 1298, Address: 0x101aeb4, Func Offset: 0xa4
	// Line 1299, Address: 0x101aec8, Func Offset: 0xb8
	// Func End, Address: 0x101aed8, Func Offset: 0xc8
}

// 
// Start address: 0x101aee0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1303, Address: 0x101aee0, Func Offset: 0
	// Line 1307, Address: 0x101af08, Func Offset: 0x28
	// Line 1310, Address: 0x101af28, Func Offset: 0x48
	// Line 1311, Address: 0x101af3c, Func Offset: 0x5c
	// Line 1312, Address: 0x101af50, Func Offset: 0x70
	// Line 1313, Address: 0x101af64, Func Offset: 0x84
	// Line 1315, Address: 0x101af78, Func Offset: 0x98
	// Line 1316, Address: 0x101af84, Func Offset: 0xa4
	// Line 1317, Address: 0x101af98, Func Offset: 0xb8
	// Func End, Address: 0x101afa8, Func Offset: 0xc8
}

// 
// Start address: 0x101afb0
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1337, Address: 0x101afb0, Func Offset: 0
	// Line 1341, Address: 0x101afd8, Func Offset: 0x28
	// Line 1344, Address: 0x101aff8, Func Offset: 0x48
	// Line 1345, Address: 0x101b00c, Func Offset: 0x5c
	// Line 1346, Address: 0x101b01c, Func Offset: 0x6c
	// Line 1347, Address: 0x101b030, Func Offset: 0x80
	// Line 1349, Address: 0x101b040, Func Offset: 0x90
	// Line 1350, Address: 0x101b04c, Func Offset: 0x9c
	// Line 1351, Address: 0x101b060, Func Offset: 0xb0
	// Func End, Address: 0x101b070, Func Offset: 0xc0
}

// 
// Start address: 0x101b070
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
	// Line 1370, Address: 0x101b070, Func Offset: 0
	// Line 1371, Address: 0x101b0a4, Func Offset: 0x34
	// Line 1376, Address: 0x101b0a8, Func Offset: 0x38
	// Line 1378, Address: 0x101b0b8, Func Offset: 0x48
	// Line 1379, Address: 0x101b0bc, Func Offset: 0x4c
	// Line 1380, Address: 0x101b0c4, Func Offset: 0x54
	// Line 1382, Address: 0x101b0d4, Func Offset: 0x64
	// Line 1384, Address: 0x101b0d8, Func Offset: 0x68
	// Line 1385, Address: 0x101b0e0, Func Offset: 0x70
	// Line 1388, Address: 0x101b0e8, Func Offset: 0x78
	// Line 1389, Address: 0x101b0f0, Func Offset: 0x80
	// Line 1390, Address: 0x101b0fc, Func Offset: 0x8c
	// Line 1392, Address: 0x101b108, Func Offset: 0x98
	// Line 1393, Address: 0x101b110, Func Offset: 0xa0
	// Line 1394, Address: 0x101b118, Func Offset: 0xa8
	// Line 1395, Address: 0x101b120, Func Offset: 0xb0
	// Line 1397, Address: 0x101b12c, Func Offset: 0xbc
	// Line 1398, Address: 0x101b134, Func Offset: 0xc4
	// Line 1399, Address: 0x101b13c, Func Offset: 0xcc
	// Line 1400, Address: 0x101b144, Func Offset: 0xd4
	// Line 1402, Address: 0x101b150, Func Offset: 0xe0
	// Line 1403, Address: 0x101b158, Func Offset: 0xe8
	// Line 1404, Address: 0x101b160, Func Offset: 0xf0
	// Line 1407, Address: 0x101b168, Func Offset: 0xf8
	// Line 1408, Address: 0x101b170, Func Offset: 0x100
	// Line 1411, Address: 0x101b178, Func Offset: 0x108
	// Line 1412, Address: 0x101b1bc, Func Offset: 0x14c
	// Line 1413, Address: 0x101b200, Func Offset: 0x190
	// Line 1414, Address: 0x101b244, Func Offset: 0x1d4
	// Line 1416, Address: 0x101b288, Func Offset: 0x218
	// Func End, Address: 0x101b2b8, Func Offset: 0x248
}

// 
// Start address: 0x101b2c0
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1434, Address: 0x101b2c0, Func Offset: 0
	// Line 1435, Address: 0x101b2e0, Func Offset: 0x20
	// Line 1436, Address: 0x101b300, Func Offset: 0x40
	// Func End, Address: 0x101b310, Func Offset: 0x50
}

// 
// Start address: 0x101b310
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1438, Address: 0x101b310, Func Offset: 0
	// Line 1439, Address: 0x101b330, Func Offset: 0x20
	// Line 1440, Address: 0x101b334, Func Offset: 0x24
	// Line 1441, Address: 0x101b354, Func Offset: 0x44
	// Func End, Address: 0x101b364, Func Offset: 0x54
}

// 
// Start address: 0x101b370
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1448, Address: 0x101b370, Func Offset: 0
	// Line 1454, Address: 0x101b3a0, Func Offset: 0x30
	// Line 1455, Address: 0x101b3b0, Func Offset: 0x40
	// Line 1461, Address: 0x101b3c0, Func Offset: 0x50
	// Line 1462, Address: 0x101b3dc, Func Offset: 0x6c
	// Line 1463, Address: 0x101b3e0, Func Offset: 0x70
	// Line 1464, Address: 0x101b3fc, Func Offset: 0x8c
	// Line 1465, Address: 0x101b400, Func Offset: 0x90
	// Line 1466, Address: 0x101b420, Func Offset: 0xb0
	// Line 1467, Address: 0x101b428, Func Offset: 0xb8
	// Line 1468, Address: 0x101b448, Func Offset: 0xd8
	// Line 1469, Address: 0x101b450, Func Offset: 0xe0
	// Line 1470, Address: 0x101b498, Func Offset: 0x128
	// Line 1472, Address: 0x101b4a4, Func Offset: 0x134
	// Line 1474, Address: 0x101b4c0, Func Offset: 0x150
	// Line 1479, Address: 0x101b4c8, Func Offset: 0x158
	// Line 1480, Address: 0x101b4d4, Func Offset: 0x164
	// Line 1483, Address: 0x101b4e0, Func Offset: 0x170
	// Line 1484, Address: 0x101b4e8, Func Offset: 0x178
	// Line 1485, Address: 0x101b508, Func Offset: 0x198
	// Line 1486, Address: 0x101b524, Func Offset: 0x1b4
	// Line 1487, Address: 0x101b52c, Func Offset: 0x1bc
	// Line 1488, Address: 0x101b54c, Func Offset: 0x1dc
	// Line 1490, Address: 0x101b568, Func Offset: 0x1f8
	// Line 1491, Address: 0x101b570, Func Offset: 0x200
	// Line 1492, Address: 0x101b578, Func Offset: 0x208
	// Line 1493, Address: 0x101b584, Func Offset: 0x214
	// Line 1494, Address: 0x101b59c, Func Offset: 0x22c
	// Line 1496, Address: 0x101b5ac, Func Offset: 0x23c
	// Line 1499, Address: 0x101b5b8, Func Offset: 0x248
	// Line 1500, Address: 0x101b5c0, Func Offset: 0x250
	// Line 1501, Address: 0x101b5c4, Func Offset: 0x254
	// Func End, Address: 0x101b5e4, Func Offset: 0x274
}

// 
// Start address: 0x101b5f0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1521, Address: 0x101b5f0, Func Offset: 0
	// Line 1529, Address: 0x101b618, Func Offset: 0x28
	// Line 1530, Address: 0x101b67c, Func Offset: 0x8c
	// Line 1536, Address: 0x101b684, Func Offset: 0x94
	// Line 1537, Address: 0x101b68c, Func Offset: 0x9c
	// Line 1538, Address: 0x101b6ac, Func Offset: 0xbc
	// Line 1539, Address: 0x101b6c8, Func Offset: 0xd8
	// Line 1540, Address: 0x101b6d0, Func Offset: 0xe0
	// Line 1541, Address: 0x101b6f0, Func Offset: 0x100
	// Line 1544, Address: 0x101b70c, Func Offset: 0x11c
	// Line 1545, Address: 0x101b714, Func Offset: 0x124
	// Line 1546, Address: 0x101b71c, Func Offset: 0x12c
	// Line 1547, Address: 0x101b728, Func Offset: 0x138
	// Line 1548, Address: 0x101b740, Func Offset: 0x150
	// Line 1549, Address: 0x101b748, Func Offset: 0x158
	// Line 1554, Address: 0x101b758, Func Offset: 0x168
	// Line 1557, Address: 0x101b764, Func Offset: 0x174
	// Line 1558, Address: 0x101b76c, Func Offset: 0x17c
	// Line 1559, Address: 0x101b770, Func Offset: 0x180
	// Func End, Address: 0x101b78c, Func Offset: 0x19c
}

// 
// Start address: 0x101b790
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1573, Address: 0x101b790, Func Offset: 0
	// Line 1580, Address: 0x101b7ac, Func Offset: 0x1c
	// Line 1581, Address: 0x101b7b0, Func Offset: 0x20
	// Line 1582, Address: 0x101b7b8, Func Offset: 0x28
	// Line 1583, Address: 0x101b7dc, Func Offset: 0x4c
	// Line 1584, Address: 0x101b7e8, Func Offset: 0x58
	// Line 1585, Address: 0x101b800, Func Offset: 0x70
	// Line 1586, Address: 0x101b814, Func Offset: 0x84
	// Line 1591, Address: 0x101b82c, Func Offset: 0x9c
	// Func End, Address: 0x101b844, Func Offset: 0xb4
}

// 
// Start address: 0x101b850
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1605, Address: 0x101b850, Func Offset: 0
	// Line 1606, Address: 0x101b85c, Func Offset: 0xc
	// Line 1607, Address: 0x101b888, Func Offset: 0x38
	// Line 1608, Address: 0x101b8d4, Func Offset: 0x84
	// Line 1609, Address: 0x101b900, Func Offset: 0xb0
	// Line 1611, Address: 0x101b94c, Func Offset: 0xfc
	// Line 1617, Address: 0x101b958, Func Offset: 0x108
	// Line 1618, Address: 0x101b95c, Func Offset: 0x10c
	// Func End, Address: 0x101b968, Func Offset: 0x118
}

// 
// Start address: 0x101b970
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1635, Address: 0x101b970, Func Offset: 0
	// Line 1636, Address: 0x101b98c, Func Offset: 0x1c
	// Line 1638, Address: 0x101b9a8, Func Offset: 0x38
	// Func End, Address: 0x101b9b8, Func Offset: 0x48
}

// 
// Start address: 0x101b9c0
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1640, Address: 0x101b9c0, Func Offset: 0
	// Line 1641, Address: 0x101b9dc, Func Offset: 0x1c
	// Line 1642, Address: 0x101b9e0, Func Offset: 0x20
	// Line 1644, Address: 0x101b9fc, Func Offset: 0x3c
	// Func End, Address: 0x101ba0c, Func Offset: 0x4c
}

// 
// Start address: 0x101ba10
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1646, Address: 0x101ba10, Func Offset: 0
	// Line 1647, Address: 0x101ba24, Func Offset: 0x14
	// Line 1649, Address: 0x101ba40, Func Offset: 0x30
	// Func End, Address: 0x101ba50, Func Offset: 0x40
}

// 
// Start address: 0x101ba50
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1651, Address: 0x101ba50, Func Offset: 0
	// Line 1652, Address: 0x101ba6c, Func Offset: 0x1c
	// Line 1654, Address: 0x101ba88, Func Offset: 0x38
	// Func End, Address: 0x101ba98, Func Offset: 0x48
}

// 
// Start address: 0x101baa0
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1656, Address: 0x101baa0, Func Offset: 0
	// Line 1657, Address: 0x101bab8, Func Offset: 0x18
	// Line 1658, Address: 0x101bac8, Func Offset: 0x28
	// Line 1659, Address: 0x101bad8, Func Offset: 0x38
	// Line 1660, Address: 0x101bae4, Func Offset: 0x44
	// Line 1662, Address: 0x101baf0, Func Offset: 0x50
	// Line 1663, Address: 0x101bb1c, Func Offset: 0x7c
	// Line 1666, Address: 0x101bb48, Func Offset: 0xa8
	// Func End, Address: 0x101bb54, Func Offset: 0xb4
}

// 
// Start address: 0x101bb60
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1682, Address: 0x101bb60, Func Offset: 0
	// Line 1687, Address: 0x101bb78, Func Offset: 0x18
	// Line 1688, Address: 0x101bb84, Func Offset: 0x24
	// Line 1689, Address: 0x101bb90, Func Offset: 0x30
	// Line 1690, Address: 0x101bb98, Func Offset: 0x38
	// Line 1691, Address: 0x101bb9c, Func Offset: 0x3c
	// Line 1695, Address: 0x101bbb4, Func Offset: 0x54
	// Line 1696, Address: 0x101bbbc, Func Offset: 0x5c
	// Line 1697, Address: 0x101bbc0, Func Offset: 0x60
	// Line 1699, Address: 0x101bbd0, Func Offset: 0x70
	// Func End, Address: 0x101bbf0, Func Offset: 0x90
}

// 
// Start address: 0x101bbf0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1702, Address: 0x101bbf0, Func Offset: 0
	// Line 1703, Address: 0x101bc08, Func Offset: 0x18
	// Line 1704, Address: 0x101bc28, Func Offset: 0x38
	// Func End, Address: 0x101bc38, Func Offset: 0x48
}

// 
// Start address: 0x101bc40
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1709, Address: 0x101bc40, Func Offset: 0
	// Line 1713, Address: 0x101bc60, Func Offset: 0x20
	// Line 1716, Address: 0x101bc7c, Func Offset: 0x3c
	// Line 1720, Address: 0x101bca4, Func Offset: 0x64
	// Line 1721, Address: 0x101bcb0, Func Offset: 0x70
	// Line 1723, Address: 0x101bcd8, Func Offset: 0x98
	// Func End, Address: 0x101bce8, Func Offset: 0xa8
}

// 
// Start address: 0x101bcf0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	_anon8 temp2;
	// Line 1729, Address: 0x101bcf0, Func Offset: 0
	// Line 1734, Address: 0x101bd0c, Func Offset: 0x1c
	// Line 1735, Address: 0x101bd14, Func Offset: 0x24
	// Line 1738, Address: 0x101bd1c, Func Offset: 0x2c
	// Line 1739, Address: 0x101bd20, Func Offset: 0x30
	// Line 1740, Address: 0x101bd2c, Func Offset: 0x3c
	// Line 1741, Address: 0x101bd38, Func Offset: 0x48
	// Line 1744, Address: 0x101bd50, Func Offset: 0x60
	// Line 1745, Address: 0x101bd58, Func Offset: 0x68
	// Line 1746, Address: 0x101bd5c, Func Offset: 0x6c
	// Line 1747, Address: 0x101bd60, Func Offset: 0x70
	// Line 1748, Address: 0x101bd84, Func Offset: 0x94
	// Line 1749, Address: 0x101bd90, Func Offset: 0xa0
	// Line 1750, Address: 0x101bda0, Func Offset: 0xb0
	// Line 1751, Address: 0x101bdb0, Func Offset: 0xc0
	// Line 1752, Address: 0x101bdd4, Func Offset: 0xe4
	// Line 1753, Address: 0x101bddc, Func Offset: 0xec
	// Line 1756, Address: 0x101bde4, Func Offset: 0xf4
	// Line 1757, Address: 0x101bde8, Func Offset: 0xf8
	// Line 1758, Address: 0x101bdf4, Func Offset: 0x104
	// Line 1759, Address: 0x101be0c, Func Offset: 0x11c
	// Line 1762, Address: 0x101be14, Func Offset: 0x124
	// Line 1763, Address: 0x101be1c, Func Offset: 0x12c
	// Line 1765, Address: 0x101be24, Func Offset: 0x134
	// Line 1766, Address: 0x101be44, Func Offset: 0x154
	// Line 1767, Address: 0x101be4c, Func Offset: 0x15c
	// Line 1768, Address: 0x101be70, Func Offset: 0x180
	// Func End, Address: 0x101be8c, Func Offset: 0x19c
}

// 
// Start address: 0x101be90
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1794, Address: 0x101be90, Func Offset: 0
	// Line 1799, Address: 0x101beb8, Func Offset: 0x28
	// Line 1800, Address: 0x101bec8, Func Offset: 0x38
	// Line 1802, Address: 0x101bee4, Func Offset: 0x54
	// Line 1803, Address: 0x101bf08, Func Offset: 0x78
	// Line 1804, Address: 0x101bf30, Func Offset: 0xa0
	// Line 1805, Address: 0x101bf3c, Func Offset: 0xac
	// Line 1806, Address: 0x101bf44, Func Offset: 0xb4
	// Line 1809, Address: 0x101bf60, Func Offset: 0xd0
	// Line 1813, Address: 0x101bf88, Func Offset: 0xf8
	// Line 1816, Address: 0x101bf90, Func Offset: 0x100
	// Line 1817, Address: 0x101bf94, Func Offset: 0x104
	// Line 1821, Address: 0x101bfb0, Func Offset: 0x120
	// Line 1828, Address: 0x101bfd8, Func Offset: 0x148
	// Func End, Address: 0x101bff4, Func Offset: 0x164
}

// 
// Start address: 0x101c000
void mapinit()
{
	// Line 1832, Address: 0x101c000, Func Offset: 0
	// Line 1834, Address: 0x101c008, Func Offset: 0x8
	// Line 1835, Address: 0x101c01c, Func Offset: 0x1c
	// Line 1837, Address: 0x101c030, Func Offset: 0x30
	// Line 1838, Address: 0x101c048, Func Offset: 0x48
	// Line 1839, Address: 0x101c068, Func Offset: 0x68
	// Func End, Address: 0x101c078, Func Offset: 0x78
}

// 
// Start address: 0x101c080
void mapset()
{
	// Line 1850, Address: 0x101c080, Func Offset: 0
	// Func End, Address: 0x101c088, Func Offset: 0x8
}

