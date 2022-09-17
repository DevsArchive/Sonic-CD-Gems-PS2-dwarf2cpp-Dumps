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

typedef int(*type_4)(int, int, int, int, int);

typedef _anon10 type_0[20];
typedef unsigned char type_1[4];
typedef _anon10 type_2[0];
typedef unsigned char type_3[49];
typedef unsigned char type_5[0];
typedef unsigned short type_6[4];
typedef unsigned short type_7[4][1024];
typedef _anon2* type_8[8];
typedef int type_9[15];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef unsigned short type_16[6];
typedef unsigned char type_17[15];
typedef short type_18[256];
typedef unsigned short type_19[3];
typedef _anon2* type_20[8];
typedef _anon1 type_21[128];
typedef unsigned short type_22[6];
typedef unsigned short type_23[2];
typedef unsigned short type_24[16];

struct _anon0
{
	unsigned char cnt;
	union
	{
		_anon10 spra[20];
		_anon10 spr[0];
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
	unsigned short w;
	_anon9 b;
};

struct _anon9
{
	unsigned char l;
	unsigned char h;
};

struct _anon10
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

unsigned char z31awrttbl[49];
_anon2* vblockwrtbtbl[8];
_anon2* mapwrt_tbl[8];
_anon1 actwk[128];
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
_anon8 scr_die;
_anon6 scr_timer;
_anon8 zone_flag;
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon2 scra_v_posit;
_anon2 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
short hscrollwork[256];
_anon2 scrb_h_posit;
_anon2 scrc_h_posit;
_anon2 scrz_h_posit;
_anon2 scrz_v_posit;
_anon2 scrc_v_posit;
_anon2 scrb_v_posit;
unsigned char awasintbl[0];
_anon6 waterdirec;
_anon2* lphscrollbuff;
_anon8 scrflagc;
_anon8 scrflagz;
_anon8 scrflagb;
_anon2 vscroll;
short scra_hz;
_anon8 scrflaga;
_anon6 scroll_start;
short scra_vz;
unsigned char limmoveflag;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char mapwkb[64][8];
_anon8 scrflagaw;
unsigned char mapwka[64][8];
_anon2 scra_v_posiw;
_anon2 scra_h_posiw;
_anon8 scrflagbw;
_anon2 scrb_v_posiw;
_anon2 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

void enecginit();
void divdevset();
_anon1* main_chk();
void scr_set();
void playposiset();
void scrbinit(short xWk, short yWk);
void scroll();
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4);
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
void mapwrt_z11a(unsigned char* pMapWk, int VramBase);
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase);
void mapinit();
void mapset();

// 
// Start address: 0x1025680
void enecginit()
{
	// Line 111, Address: 0x1025680, Func Offset: 0
	// Func End, Address: 0x1025688, Func Offset: 0x8
}

// 
// Start address: 0x1025690
void divdevset()
{
	// Line 115, Address: 0x1025690, Func Offset: 0
	// Func End, Address: 0x1025698, Func Offset: 0x8
}

// 
// Start address: 0x10256a0
_anon1* main_chk()
{
	// Line 169, Address: 0x10256a0, Func Offset: 0
	// Line 170, Address: 0x10256b4, Func Offset: 0x14
	// Line 172, Address: 0x10256c4, Func Offset: 0x24
	// Line 173, Address: 0x10256cc, Func Offset: 0x2c
	// Func End, Address: 0x10256d4, Func Offset: 0x34
}

// 
// Start address: 0x10256e0
void scr_set()
{
	unsigned short scr_dir_tbl[6];
	int i;
	// Line 186, Address: 0x10256e0, Func Offset: 0
	// Line 192, Address: 0x10256ec, Func Offset: 0xc
	// Line 197, Address: 0x1025720, Func Offset: 0x40
	// Line 199, Address: 0x1025768, Func Offset: 0x88
	// Line 200, Address: 0x102576c, Func Offset: 0x8c
	// Line 201, Address: 0x1025788, Func Offset: 0xa8
	// Line 202, Address: 0x102579c, Func Offset: 0xbc
	// Line 203, Address: 0x10257b8, Func Offset: 0xd8
	// Line 204, Address: 0x10257cc, Func Offset: 0xec
	// Line 205, Address: 0x10257e8, Func Offset: 0x108
	// Line 206, Address: 0x10257fc, Func Offset: 0x11c
	// Line 207, Address: 0x1025818, Func Offset: 0x138
	// Line 208, Address: 0x102582c, Func Offset: 0x14c
	// Line 210, Address: 0x1025848, Func Offset: 0x168
	// Line 211, Address: 0x102586c, Func Offset: 0x18c
	// Line 212, Address: 0x1025878, Func Offset: 0x198
	// Line 214, Address: 0x1025884, Func Offset: 0x1a4
	// Line 215, Address: 0x10258a0, Func Offset: 0x1c0
	// Line 217, Address: 0x10258ac, Func Offset: 0x1cc
	// Line 218, Address: 0x10258b4, Func Offset: 0x1d4
	// Func End, Address: 0x10258c8, Func Offset: 0x1e8
}

// 
// Start address: 0x10258d0
void playposiset()
{
	unsigned short playpositbl[2];
	unsigned short endplpositbl[16];
	unsigned char playmapnotbl[4];
	short xWk;
	short yWk;
	int i;
	unsigned short* wp;
	// Line 230, Address: 0x10258d0, Func Offset: 0
	// Line 231, Address: 0x10258e8, Func Offset: 0x18
	// Line 235, Address: 0x1025904, Func Offset: 0x34
	// Line 245, Address: 0x1025938, Func Offset: 0x68
	// Line 255, Address: 0x1025964, Func Offset: 0x94
	// Line 256, Address: 0x1025978, Func Offset: 0xa8
	// Line 257, Address: 0x1025980, Func Offset: 0xb0
	// Line 258, Address: 0x1025990, Func Offset: 0xc0
	// Line 260, Address: 0x10259a0, Func Offset: 0xd0
	// Line 262, Address: 0x10259b4, Func Offset: 0xe4
	// Line 265, Address: 0x10259bc, Func Offset: 0xec
	// Line 266, Address: 0x10259d4, Func Offset: 0x104
	// Line 267, Address: 0x10259fc, Func Offset: 0x12c
	// Line 270, Address: 0x1025a04, Func Offset: 0x134
	// Line 273, Address: 0x1025a24, Func Offset: 0x154
	// Line 274, Address: 0x1025a40, Func Offset: 0x170
	// Line 278, Address: 0x1025a54, Func Offset: 0x184
	// Line 279, Address: 0x1025a68, Func Offset: 0x198
	// Line 280, Address: 0x1025a74, Func Offset: 0x1a4
	// Line 282, Address: 0x1025a7c, Func Offset: 0x1ac
	// Line 286, Address: 0x1025a80, Func Offset: 0x1b0
	// Line 287, Address: 0x1025aa4, Func Offset: 0x1d4
	// Line 289, Address: 0x1025ab4, Func Offset: 0x1e4
	// Line 291, Address: 0x1025abc, Func Offset: 0x1ec
	// Line 292, Address: 0x1025ad0, Func Offset: 0x200
	// Line 293, Address: 0x1025adc, Func Offset: 0x20c
	// Line 295, Address: 0x1025ae4, Func Offset: 0x214
	// Line 298, Address: 0x1025ae8, Func Offset: 0x218
	// Line 299, Address: 0x1025b0c, Func Offset: 0x23c
	// Line 302, Address: 0x1025b1c, Func Offset: 0x24c
	// Line 304, Address: 0x1025b24, Func Offset: 0x254
	// Line 306, Address: 0x1025b34, Func Offset: 0x264
	// Line 307, Address: 0x1025b38, Func Offset: 0x268
	// Line 308, Address: 0x1025b50, Func Offset: 0x280
	// Line 309, Address: 0x1025b68, Func Offset: 0x298
	// Line 310, Address: 0x1025b80, Func Offset: 0x2b0
	// Line 313, Address: 0x1025b98, Func Offset: 0x2c8
	// Func End, Address: 0x1025bb8, Func Offset: 0x2e8
}

// 
// Start address: 0x1025bc0
void scrbinit(short xWk, short yWk)
{
	int i;
	short wD2;
	// Line 325, Address: 0x1025bc0, Func Offset: 0
	// Line 330, Address: 0x1025bd4, Func Offset: 0x14
	// Line 331, Address: 0x1025bdc, Func Offset: 0x1c
	// Line 332, Address: 0x1025c04, Func Offset: 0x44
	// Line 333, Address: 0x1025c20, Func Offset: 0x60
	// Line 334, Address: 0x1025c54, Func Offset: 0x94
	// Line 335, Address: 0x1025c68, Func Offset: 0xa8
	// Line 339, Address: 0x1025c6c, Func Offset: 0xac
	// Line 340, Address: 0x1025c78, Func Offset: 0xb8
	// Line 341, Address: 0x1025c80, Func Offset: 0xc0
	// Line 342, Address: 0x1025c8c, Func Offset: 0xcc
	// Line 344, Address: 0x1025c98, Func Offset: 0xd8
	// Line 345, Address: 0x1025cd0, Func Offset: 0x110
	// Line 346, Address: 0x1025d10, Func Offset: 0x150
	// Line 349, Address: 0x1025d50, Func Offset: 0x190
	// Line 350, Address: 0x1025d5c, Func Offset: 0x19c
	// Line 351, Address: 0x1025d70, Func Offset: 0x1b0
	// Line 353, Address: 0x1025d80, Func Offset: 0x1c0
	// Func End, Address: 0x1025d94, Func Offset: 0x1d4
}

// 
// Start address: 0x1025da0
void scroll()
{
	int LineSpdTbl[15];
	unsigned char z31a_cnttbl[15];
	unsigned short z31a_kawatbl[3];
	unsigned short lposi_tbl[6];
	short* pHScrollWork;
	_anon2* pHScrollBuff;
	_anon2* pHscrWk;
	int i;
	int j;
	unsigned short wD1;
	unsigned short wD3;
	unsigned short wD4;
	unsigned short wD5;
	unsigned short wD6;
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 366, Address: 0x1025da0, Func Offset: 0
	// Line 367, Address: 0x1025dc4, Func Offset: 0x24
	// Line 374, Address: 0x1025df0, Func Offset: 0x50
	// Line 378, Address: 0x1025e1c, Func Offset: 0x7c
	// Line 381, Address: 0x1025e40, Func Offset: 0xa0
	// Line 391, Address: 0x1025e74, Func Offset: 0xd4
	// Line 394, Address: 0x1025e84, Func Offset: 0xe4
	// Line 395, Address: 0x1025eb0, Func Offset: 0x110
	// Line 396, Address: 0x1025ebc, Func Offset: 0x11c
	// Line 397, Address: 0x1025ec8, Func Offset: 0x128
	// Line 399, Address: 0x1025ed4, Func Offset: 0x134
	// Line 400, Address: 0x1025ee4, Func Offset: 0x144
	// Line 403, Address: 0x1025ef4, Func Offset: 0x154
	// Line 404, Address: 0x1025f18, Func Offset: 0x178
	// Line 405, Address: 0x1025f54, Func Offset: 0x1b4
	// Line 407, Address: 0x1025f90, Func Offset: 0x1f0
	// Line 408, Address: 0x1025f98, Func Offset: 0x1f8
	// Line 409, Address: 0x1025fa0, Func Offset: 0x200
	// Line 411, Address: 0x1025fc0, Func Offset: 0x220
	// Line 412, Address: 0x1025fd4, Func Offset: 0x234
	// Line 413, Address: 0x1025fdc, Func Offset: 0x23c
	// Line 414, Address: 0x1025ff0, Func Offset: 0x250
	// Line 415, Address: 0x1026004, Func Offset: 0x264
	// Line 417, Address: 0x1026008, Func Offset: 0x268
	// Line 419, Address: 0x1026010, Func Offset: 0x270
	// Line 422, Address: 0x1026024, Func Offset: 0x284
	// Line 423, Address: 0x1026038, Func Offset: 0x298
	// Line 424, Address: 0x1026048, Func Offset: 0x2a8
	// Line 425, Address: 0x1026058, Func Offset: 0x2b8
	// Line 427, Address: 0x1026068, Func Offset: 0x2c8
	// Line 428, Address: 0x1026084, Func Offset: 0x2e4
	// Line 429, Address: 0x10260a0, Func Offset: 0x300
	// Line 430, Address: 0x10260a8, Func Offset: 0x308
	// Line 433, Address: 0x10260b0, Func Offset: 0x310
	// Line 434, Address: 0x10260b8, Func Offset: 0x318
	// Line 435, Address: 0x10260c4, Func Offset: 0x324
	// Line 436, Address: 0x10260dc, Func Offset: 0x33c
	// Line 437, Address: 0x10260e0, Func Offset: 0x340
	// Line 438, Address: 0x10260f0, Func Offset: 0x350
	// Line 439, Address: 0x10260f4, Func Offset: 0x354
	// Line 440, Address: 0x1026100, Func Offset: 0x360
	// Line 441, Address: 0x1026124, Func Offset: 0x384
	// Line 442, Address: 0x1026134, Func Offset: 0x394
	// Line 443, Address: 0x1026138, Func Offset: 0x398
	// Line 444, Address: 0x1026140, Func Offset: 0x3a0
	// Line 451, Address: 0x1026150, Func Offset: 0x3b0
	// Line 452, Address: 0x1026178, Func Offset: 0x3d8
	// Line 453, Address: 0x1026184, Func Offset: 0x3e4
	// Line 454, Address: 0x10261a4, Func Offset: 0x404
	// Line 456, Address: 0x10261b0, Func Offset: 0x410
	// Line 457, Address: 0x10261b4, Func Offset: 0x414
	// Line 459, Address: 0x10261c0, Func Offset: 0x420
	// Line 460, Address: 0x10261cc, Func Offset: 0x42c
	// Line 461, Address: 0x10261d8, Func Offset: 0x438
	// Line 462, Address: 0x10261f4, Func Offset: 0x454
	// Line 463, Address: 0x1026200, Func Offset: 0x460
	// Line 464, Address: 0x102620c, Func Offset: 0x46c
	// Line 465, Address: 0x1026230, Func Offset: 0x490
	// Line 466, Address: 0x1026240, Func Offset: 0x4a0
	// Line 467, Address: 0x1026264, Func Offset: 0x4c4
	// Line 469, Address: 0x1026274, Func Offset: 0x4d4
	// Line 470, Address: 0x1026280, Func Offset: 0x4e0
	// Line 472, Address: 0x10262a4, Func Offset: 0x504
	// Line 473, Address: 0x10262b0, Func Offset: 0x510
	// Line 474, Address: 0x10262c4, Func Offset: 0x524
	// Line 476, Address: 0x10262d4, Func Offset: 0x534
	// Line 478, Address: 0x10262f8, Func Offset: 0x558
	// Line 479, Address: 0x1026304, Func Offset: 0x564
	// Line 480, Address: 0x1026318, Func Offset: 0x578
	// Line 483, Address: 0x1026328, Func Offset: 0x588
	// Line 484, Address: 0x1026334, Func Offset: 0x594
	// Line 485, Address: 0x1026340, Func Offset: 0x5a0
	// Line 486, Address: 0x102636c, Func Offset: 0x5cc
	// Line 487, Address: 0x1026370, Func Offset: 0x5d0
	// Line 488, Address: 0x1026384, Func Offset: 0x5e4
	// Line 489, Address: 0x1026394, Func Offset: 0x5f4
	// Line 490, Address: 0x10263a0, Func Offset: 0x600
	// Line 492, Address: 0x10263ac, Func Offset: 0x60c
	// Line 494, Address: 0x10263d0, Func Offset: 0x630
	// Line 495, Address: 0x10263dc, Func Offset: 0x63c
	// Line 496, Address: 0x10263f0, Func Offset: 0x650
	// Line 498, Address: 0x1026400, Func Offset: 0x660
	// Line 500, Address: 0x1026424, Func Offset: 0x684
	// Line 501, Address: 0x1026430, Func Offset: 0x690
	// Line 502, Address: 0x1026444, Func Offset: 0x6a4
	// Line 504, Address: 0x1026454, Func Offset: 0x6b4
	// Line 506, Address: 0x1026478, Func Offset: 0x6d8
	// Line 507, Address: 0x1026484, Func Offset: 0x6e4
	// Line 508, Address: 0x1026498, Func Offset: 0x6f8
	// Line 510, Address: 0x10264a8, Func Offset: 0x708
	// Line 512, Address: 0x10264cc, Func Offset: 0x72c
	// Line 513, Address: 0x10264d8, Func Offset: 0x738
	// Line 514, Address: 0x10264ec, Func Offset: 0x74c
	// Line 517, Address: 0x10264fc, Func Offset: 0x75c
	// Line 518, Address: 0x1026534, Func Offset: 0x794
	// Line 519, Address: 0x1026540, Func Offset: 0x7a0
	// Line 520, Address: 0x1026560, Func Offset: 0x7c0
	// Line 521, Address: 0x102656c, Func Offset: 0x7cc
	// Line 523, Address: 0x1026578, Func Offset: 0x7d8
	// Line 524, Address: 0x1026584, Func Offset: 0x7e4
	// Line 525, Address: 0x10265b0, Func Offset: 0x810
	// Line 526, Address: 0x10265d4, Func Offset: 0x834
	// Line 527, Address: 0x10265e4, Func Offset: 0x844
	// Line 528, Address: 0x1026608, Func Offset: 0x868
	// Line 530, Address: 0x1026618, Func Offset: 0x878
	// Line 532, Address: 0x102663c, Func Offset: 0x89c
	// Line 533, Address: 0x1026648, Func Offset: 0x8a8
	// Line 534, Address: 0x102665c, Func Offset: 0x8bc
	// Line 536, Address: 0x102666c, Func Offset: 0x8cc
	// Line 537, Address: 0x1026678, Func Offset: 0x8d8
	// Line 538, Address: 0x1026684, Func Offset: 0x8e4
	// Line 539, Address: 0x1026690, Func Offset: 0x8f0
	// Line 540, Address: 0x1026698, Func Offset: 0x8f8
	// Line 541, Address: 0x10266a0, Func Offset: 0x900
	// Line 542, Address: 0x10266c4, Func Offset: 0x924
	// Line 543, Address: 0x10266e0, Func Offset: 0x940
	// Line 544, Address: 0x10266ec, Func Offset: 0x94c
	// Line 545, Address: 0x10266f4, Func Offset: 0x954
	// Line 547, Address: 0x1026708, Func Offset: 0x968
	// Line 548, Address: 0x1026710, Func Offset: 0x970
	// Line 549, Address: 0x1026720, Func Offset: 0x980
	// Line 552, Address: 0x1026728, Func Offset: 0x988
	// Line 553, Address: 0x1026730, Func Offset: 0x990
	// Line 554, Address: 0x1026754, Func Offset: 0x9b4
	// Line 556, Address: 0x1026768, Func Offset: 0x9c8
	// Line 559, Address: 0x1026794, Func Offset: 0x9f4
	// Line 561, Address: 0x102679c, Func Offset: 0x9fc
	// Line 566, Address: 0x10267a4, Func Offset: 0xa04
	// Line 567, Address: 0x10267b8, Func Offset: 0xa18
	// Line 568, Address: 0x10267c0, Func Offset: 0xa20
	// Line 569, Address: 0x10267d4, Func Offset: 0xa34
	// Line 572, Address: 0x10267ec, Func Offset: 0xa4c
	// Line 573, Address: 0x10267f4, Func Offset: 0xa54
	// Line 574, Address: 0x10267f8, Func Offset: 0xa58
	// Line 575, Address: 0x102681c, Func Offset: 0xa7c
	// Line 576, Address: 0x1026830, Func Offset: 0xa90
	// Line 577, Address: 0x102683c, Func Offset: 0xa9c
	// Line 578, Address: 0x1026844, Func Offset: 0xaa4
	// Line 579, Address: 0x1026864, Func Offset: 0xac4
	// Line 580, Address: 0x102687c, Func Offset: 0xadc
	// Line 581, Address: 0x1026884, Func Offset: 0xae4
	// Line 582, Address: 0x1026898, Func Offset: 0xaf8
	// Line 583, Address: 0x10268c4, Func Offset: 0xb24
	// Line 584, Address: 0x10268d8, Func Offset: 0xb38
	// Line 585, Address: 0x10268f4, Func Offset: 0xb54
	// Line 588, Address: 0x10268f8, Func Offset: 0xb58
	// Line 589, Address: 0x1026904, Func Offset: 0xb64
	// Line 590, Address: 0x1026910, Func Offset: 0xb70
	// Line 591, Address: 0x102691c, Func Offset: 0xb7c
	// Line 592, Address: 0x1026924, Func Offset: 0xb84
	// Line 594, Address: 0x1026948, Func Offset: 0xba8
	// Func End, Address: 0x1026974, Func Offset: 0xbd4
}

// 
// Start address: 0x1026980
void zonescrsetsub0(_anon2** ppA1, unsigned short** ppA2, unsigned short* pA3, unsigned char* pA4, unsigned short wD1, unsigned short* pwD2, unsigned short* pwD4)
{
	_anon2* pA1;
	unsigned short* pA2;
	unsigned short wD3;
	unsigned short wD6;
	_anon2 lD0;
	int i;
	// Line 599, Address: 0x1026980, Func Offset: 0
	// Line 606, Address: 0x10269b4, Func Offset: 0x34
	// Line 607, Address: 0x10269bc, Func Offset: 0x3c
	// Line 609, Address: 0x10269c4, Func Offset: 0x44
	// Line 610, Address: 0x10269e4, Func Offset: 0x64
	// Line 615, Address: 0x1026a08, Func Offset: 0x88
	// Line 616, Address: 0x1026a1c, Func Offset: 0x9c
	// Line 618, Address: 0x1026a48, Func Offset: 0xc8
	// Line 619, Address: 0x1026a58, Func Offset: 0xd8
	// Line 620, Address: 0x1026a6c, Func Offset: 0xec
	// Line 623, Address: 0x1026a74, Func Offset: 0xf4
	// Line 626, Address: 0x1026a90, Func Offset: 0x110
	// Line 631, Address: 0x1026ab4, Func Offset: 0x134
	// Line 632, Address: 0x1026ac4, Func Offset: 0x144
	// Line 635, Address: 0x1026ad8, Func Offset: 0x158
	// Line 637, Address: 0x1026adc, Func Offset: 0x15c
	// Line 640, Address: 0x1026ae4, Func Offset: 0x164
	// Line 641, Address: 0x1026aec, Func Offset: 0x16c
	// Line 642, Address: 0x1026af0, Func Offset: 0x170
	// Line 643, Address: 0x1026b00, Func Offset: 0x180
	// Line 648, Address: 0x1026b28, Func Offset: 0x1a8
	// Line 649, Address: 0x1026b30, Func Offset: 0x1b0
	// Line 650, Address: 0x1026b38, Func Offset: 0x1b8
	// Line 654, Address: 0x1026b40, Func Offset: 0x1c0
	// Line 655, Address: 0x1026b70, Func Offset: 0x1f0
	// Line 658, Address: 0x1026b88, Func Offset: 0x208
	// Line 661, Address: 0x1026bac, Func Offset: 0x22c
	// Line 662, Address: 0x1026bdc, Func Offset: 0x25c
	// Line 663, Address: 0x1026bf4, Func Offset: 0x274
	// Line 671, Address: 0x1026bfc, Func Offset: 0x27c
	// Line 672, Address: 0x1026c2c, Func Offset: 0x2ac
	// Line 677, Address: 0x1026c44, Func Offset: 0x2c4
	// Line 678, Address: 0x1026c4c, Func Offset: 0x2cc
	// Line 679, Address: 0x1026c50, Func Offset: 0x2d0
	// Line 682, Address: 0x1026c68, Func Offset: 0x2e8
	// Line 683, Address: 0x1026c7c, Func Offset: 0x2fc
	// Line 684, Address: 0x1026ca8, Func Offset: 0x328
	// Line 685, Address: 0x1026cbc, Func Offset: 0x33c
	// Line 686, Address: 0x1026cd8, Func Offset: 0x358
	// Line 687, Address: 0x1026ce0, Func Offset: 0x360
	// Line 688, Address: 0x1026ce8, Func Offset: 0x368
	// Line 689, Address: 0x1026cec, Func Offset: 0x36c
	// Line 690, Address: 0x1026d00, Func Offset: 0x380
	// Line 691, Address: 0x1026d14, Func Offset: 0x394
	// Line 693, Address: 0x1026d38, Func Offset: 0x3b8
	// Line 696, Address: 0x1026d40, Func Offset: 0x3c0
	// Line 697, Address: 0x1026d50, Func Offset: 0x3d0
	// Line 698, Address: 0x1026d5c, Func Offset: 0x3dc
	// Line 699, Address: 0x1026d80, Func Offset: 0x400
	// Line 700, Address: 0x1026d88, Func Offset: 0x408
	// Func End, Address: 0x1026da8, Func Offset: 0x428
}

// 
// Start address: 0x1026db0
void scroll_h()
{
	unsigned short wD4;
	// Line 716, Address: 0x1026db0, Func Offset: 0
	// Line 719, Address: 0x1026dbc, Func Offset: 0xc
	// Line 720, Address: 0x1026dc8, Func Offset: 0x18
	// Line 721, Address: 0x1026dd0, Func Offset: 0x20
	// Line 722, Address: 0x1026e04, Func Offset: 0x54
	// Line 723, Address: 0x1026e18, Func Offset: 0x68
	// Line 724, Address: 0x1026e44, Func Offset: 0x94
	// Line 725, Address: 0x1026e58, Func Offset: 0xa8
	// Line 728, Address: 0x1026e60, Func Offset: 0xb0
	// Line 733, Address: 0x1026e74, Func Offset: 0xc4
	// Func End, Address: 0x1026e88, Func Offset: 0xd8
}

// 
// Start address: 0x1026e90
void scrh_move()
{
	unsigned short wD0;
	// Line 735, Address: 0x1026e90, Func Offset: 0
	// Line 738, Address: 0x1026e9c, Func Offset: 0xc
	// Line 739, Address: 0x1026ea8, Func Offset: 0x18
	// Line 740, Address: 0x1026ebc, Func Offset: 0x2c
	// Line 741, Address: 0x1026ed0, Func Offset: 0x40
	// Line 743, Address: 0x1026edc, Func Offset: 0x4c
	// Line 744, Address: 0x1026ee4, Func Offset: 0x54
	// Line 745, Address: 0x1026eec, Func Offset: 0x5c
	// Line 746, Address: 0x1026f04, Func Offset: 0x74
	// Line 747, Address: 0x1026f10, Func Offset: 0x80
	// Line 749, Address: 0x1026f18, Func Offset: 0x88
	// Line 752, Address: 0x1026f24, Func Offset: 0x94
	// Func End, Address: 0x1026f38, Func Offset: 0xa8
}

// 
// Start address: 0x1026f40
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 755, Address: 0x1026f40, Func Offset: 0
	// Line 758, Address: 0x1026f4c, Func Offset: 0xc
	// Line 759, Address: 0x1026f6c, Func Offset: 0x2c
	// Line 762, Address: 0x1026f74, Func Offset: 0x34
	// Line 763, Address: 0x1026f8c, Func Offset: 0x4c
	// Line 764, Address: 0x1026fbc, Func Offset: 0x7c
	// Line 767, Address: 0x1026fc8, Func Offset: 0x88
	// Line 768, Address: 0x1026fd0, Func Offset: 0x90
	// Line 769, Address: 0x1026fe4, Func Offset: 0xa4
	// Line 770, Address: 0x1027014, Func Offset: 0xd4
	// Line 771, Address: 0x1027020, Func Offset: 0xe0
	// Line 773, Address: 0x1027028, Func Offset: 0xe8
	// Func End, Address: 0x1027038, Func Offset: 0xf8
}

// 
// Start address: 0x1027040
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 776, Address: 0x1027040, Func Offset: 0
	// Line 779, Address: 0x102704c, Func Offset: 0xc
	// Line 780, Address: 0x102706c, Func Offset: 0x2c
	// Line 783, Address: 0x1027074, Func Offset: 0x34
	// Line 784, Address: 0x102708c, Func Offset: 0x4c
	// Line 785, Address: 0x10270bc, Func Offset: 0x7c
	// Line 788, Address: 0x10270c8, Func Offset: 0x88
	// Line 789, Address: 0x10270d0, Func Offset: 0x90
	// Line 790, Address: 0x10270e4, Func Offset: 0xa4
	// Line 791, Address: 0x1027114, Func Offset: 0xd4
	// Line 792, Address: 0x1027120, Func Offset: 0xe0
	// Line 794, Address: 0x1027128, Func Offset: 0xe8
	// Func End, Address: 0x1027138, Func Offset: 0xf8
}

// 
// Start address: 0x1027140
void scroll_v()
{
	unsigned short wD0;
	// Line 813, Address: 0x1027140, Func Offset: 0
	// Line 816, Address: 0x102714c, Func Offset: 0xc
	// Line 817, Address: 0x1027178, Func Offset: 0x38
	// Line 818, Address: 0x1027190, Func Offset: 0x50
	// Line 821, Address: 0x1027198, Func Offset: 0x58
	// Line 822, Address: 0x10271b0, Func Offset: 0x70
	// Line 823, Address: 0x10271b8, Func Offset: 0x78
	// Line 824, Address: 0x10271d8, Func Offset: 0x98
	// Line 825, Address: 0x10271ec, Func Offset: 0xac
	// Line 826, Address: 0x10271f8, Func Offset: 0xb8
	// Line 828, Address: 0x1027200, Func Offset: 0xc0
	// Line 829, Address: 0x1027214, Func Offset: 0xd4
	// Line 830, Address: 0x1027224, Func Offset: 0xe4
	// Line 831, Address: 0x102722c, Func Offset: 0xec
	// Line 832, Address: 0x1027238, Func Offset: 0xf8
	// Line 834, Address: 0x1027240, Func Offset: 0x100
	// Line 835, Address: 0x1027248, Func Offset: 0x108
	// Line 836, Address: 0x102725c, Func Offset: 0x11c
	// Line 837, Address: 0x1027264, Func Offset: 0x124
	// Line 843, Address: 0x102726c, Func Offset: 0x12c
	// Line 844, Address: 0x1027280, Func Offset: 0x140
	// Line 845, Address: 0x1027288, Func Offset: 0x148
	// Line 846, Address: 0x1027294, Func Offset: 0x154
	// Line 848, Address: 0x102729c, Func Offset: 0x15c
	// Line 849, Address: 0x10272b0, Func Offset: 0x170
	// Line 850, Address: 0x10272b8, Func Offset: 0x178
	// Line 855, Address: 0x10272c0, Func Offset: 0x180
	// Line 857, Address: 0x10272c8, Func Offset: 0x188
	// Func End, Address: 0x10272dc, Func Offset: 0x19c
}

// 
// Start address: 0x10272e0
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 863, Address: 0x10272e0, Func Offset: 0
	// Line 866, Address: 0x10272f0, Func Offset: 0x10
	// Line 867, Address: 0x102730c, Func Offset: 0x2c
	// Line 868, Address: 0x1027318, Func Offset: 0x38
	// Line 871, Address: 0x1027320, Func Offset: 0x40
	// Line 872, Address: 0x102732c, Func Offset: 0x4c
	// Line 873, Address: 0x1027344, Func Offset: 0x64
	// Line 876, Address: 0x1027360, Func Offset: 0x80
	// Line 877, Address: 0x1027370, Func Offset: 0x90
	// Line 878, Address: 0x102737c, Func Offset: 0x9c
	// Line 880, Address: 0x1027384, Func Offset: 0xa4
	// Line 881, Address: 0x10273a4, Func Offset: 0xc4
	// Line 882, Address: 0x10273b0, Func Offset: 0xd0
	// Line 883, Address: 0x10273b8, Func Offset: 0xd8
	// Line 884, Address: 0x10273d8, Func Offset: 0xf8
	// Line 885, Address: 0x10273e4, Func Offset: 0x104
	// Line 887, Address: 0x10273ec, Func Offset: 0x10c
	// Line 891, Address: 0x10273f8, Func Offset: 0x118
	// Func End, Address: 0x102740c, Func Offset: 0x12c
}

// 
// Start address: 0x1027410
void sv_move_main1(unsigned short wD0)
{
	// Line 895, Address: 0x1027410, Func Offset: 0
	// Line 897, Address: 0x102741c, Func Offset: 0xc
	// Line 898, Address: 0x102743c, Func Offset: 0x2c
	// Line 899, Address: 0x1027448, Func Offset: 0x38
	// Line 900, Address: 0x1027450, Func Offset: 0x40
	// Line 901, Address: 0x1027470, Func Offset: 0x60
	// Line 902, Address: 0x102747c, Func Offset: 0x6c
	// Line 904, Address: 0x1027484, Func Offset: 0x74
	// Line 907, Address: 0x1027490, Func Offset: 0x80
	// Func End, Address: 0x10274a0, Func Offset: 0x90
}

// 
// Start address: 0x10274a0
void sv_move_main2(unsigned short wD0)
{
	// Line 910, Address: 0x10274a0, Func Offset: 0
	// Line 912, Address: 0x10274ac, Func Offset: 0xc
	// Line 913, Address: 0x10274cc, Func Offset: 0x2c
	// Line 914, Address: 0x10274d8, Func Offset: 0x38
	// Line 915, Address: 0x10274e0, Func Offset: 0x40
	// Line 916, Address: 0x1027500, Func Offset: 0x60
	// Line 917, Address: 0x102750c, Func Offset: 0x6c
	// Line 919, Address: 0x1027514, Func Offset: 0x74
	// Line 922, Address: 0x1027520, Func Offset: 0x80
	// Func End, Address: 0x1027530, Func Offset: 0x90
}

// 
// Start address: 0x1027530
void sv_move_sub2()
{
	// Line 925, Address: 0x1027530, Func Offset: 0
	// Line 926, Address: 0x1027538, Func Offset: 0x8
	// Line 927, Address: 0x1027540, Func Offset: 0x10
	// Line 928, Address: 0x102754c, Func Offset: 0x1c
	// Func End, Address: 0x102755c, Func Offset: 0x2c
}

// 
// Start address: 0x1027560
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 931, Address: 0x1027560, Func Offset: 0
	// Line 934, Address: 0x102756c, Func Offset: 0xc
	// Line 935, Address: 0x1027570, Func Offset: 0x10
	// Line 936, Address: 0x1027578, Func Offset: 0x18
	// Line 937, Address: 0x1027594, Func Offset: 0x34
	// Line 938, Address: 0x10275b0, Func Offset: 0x50
	// Line 939, Address: 0x10275bc, Func Offset: 0x5c
	// Line 941, Address: 0x10275c4, Func Offset: 0x64
	// Line 944, Address: 0x10275d0, Func Offset: 0x70
	// Func End, Address: 0x10275e0, Func Offset: 0x80
}

// 
// Start address: 0x10275e0
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 949, Address: 0x10275e0, Func Offset: 0
	// Line 953, Address: 0x10275f0, Func Offset: 0x10
	// Line 954, Address: 0x102760c, Func Offset: 0x2c
	// Line 955, Address: 0x1027618, Func Offset: 0x38
	// Line 957, Address: 0x102762c, Func Offset: 0x4c
	// Line 958, Address: 0x1027634, Func Offset: 0x54
	// Line 959, Address: 0x102763c, Func Offset: 0x5c
	// Line 960, Address: 0x1027640, Func Offset: 0x60
	// Line 961, Address: 0x102764c, Func Offset: 0x6c
	// Func End, Address: 0x1027660, Func Offset: 0x80
}

// 
// Start address: 0x1027660
void scrv_up_ch(_anon2 lD1)
{
	// Line 965, Address: 0x1027660, Func Offset: 0
	// Line 966, Address: 0x102766c, Func Offset: 0xc
	// Line 967, Address: 0x1027694, Func Offset: 0x34
	// Line 968, Address: 0x10276ac, Func Offset: 0x4c
	// Line 969, Address: 0x10276b8, Func Offset: 0x58
	// Line 970, Address: 0x10276cc, Func Offset: 0x6c
	// Line 971, Address: 0x10276e0, Func Offset: 0x80
	// Line 972, Address: 0x10276f4, Func Offset: 0x94
	// Line 975, Address: 0x10276fc, Func Offset: 0x9c
	// Line 978, Address: 0x1027708, Func Offset: 0xa8
	// Line 980, Address: 0x1027714, Func Offset: 0xb4
	// Func End, Address: 0x1027724, Func Offset: 0xc4
}

// 
// Start address: 0x1027730
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 986, Address: 0x1027730, Func Offset: 0
	// Line 990, Address: 0x1027740, Func Offset: 0x10
	// Line 991, Address: 0x1027744, Func Offset: 0x14
	// Line 992, Address: 0x102774c, Func Offset: 0x1c
	// Line 993, Address: 0x1027758, Func Offset: 0x28
	// Line 995, Address: 0x102776c, Func Offset: 0x3c
	// Line 996, Address: 0x1027774, Func Offset: 0x44
	// Line 997, Address: 0x102777c, Func Offset: 0x4c
	// Line 999, Address: 0x1027780, Func Offset: 0x50
	// Line 1001, Address: 0x102778c, Func Offset: 0x5c
	// Func End, Address: 0x10277a0, Func Offset: 0x70
}

// 
// Start address: 0x10277a0
void scrv_down_ch(_anon2 lD1)
{
	// Line 1005, Address: 0x10277a0, Func Offset: 0
	// Line 1006, Address: 0x10277ac, Func Offset: 0xc
	// Line 1007, Address: 0x10277d4, Func Offset: 0x34
	// Line 1008, Address: 0x10277e0, Func Offset: 0x40
	// Line 1009, Address: 0x10277f4, Func Offset: 0x54
	// Line 1010, Address: 0x1027808, Func Offset: 0x68
	// Line 1011, Address: 0x102781c, Func Offset: 0x7c
	// Line 1012, Address: 0x1027830, Func Offset: 0x90
	// Line 1014, Address: 0x1027838, Func Offset: 0x98
	// Line 1017, Address: 0x1027844, Func Offset: 0xa4
	// Line 1019, Address: 0x1027850, Func Offset: 0xb0
	// Func End, Address: 0x1027860, Func Offset: 0xc0
}

// 
// Start address: 0x1027860
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 1022, Address: 0x1027860, Func Offset: 0
	// Line 1025, Address: 0x1027870, Func Offset: 0x10
	// Line 1027, Address: 0x102787c, Func Offset: 0x1c
	// Line 1028, Address: 0x1027884, Func Offset: 0x24
	// Line 1029, Address: 0x102788c, Func Offset: 0x2c
	// Line 1031, Address: 0x1027890, Func Offset: 0x30
	// Line 1032, Address: 0x10278b8, Func Offset: 0x58
	// Line 1035, Address: 0x10278c4, Func Offset: 0x64
	// Line 1036, Address: 0x10278f8, Func Offset: 0x98
	// Line 1037, Address: 0x102790c, Func Offset: 0xac
	// Line 1039, Address: 0x1027938, Func Offset: 0xd8
	// Line 1040, Address: 0x102794c, Func Offset: 0xec
	// Line 1042, Address: 0x1027954, Func Offset: 0xf4
	// Line 1047, Address: 0x1027968, Func Offset: 0x108
	// Func End, Address: 0x102797c, Func Offset: 0x11c
}

// 
// Start address: 0x1027980
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 1051, Address: 0x1027980, Func Offset: 0
	// Line 1054, Address: 0x102798c, Func Offset: 0xc
	// Line 1055, Address: 0x102799c, Func Offset: 0x1c
	// Line 1056, Address: 0x10279ac, Func Offset: 0x2c
	// Line 1058, Address: 0x10279b8, Func Offset: 0x38
	// Line 1060, Address: 0x10279ec, Func Offset: 0x6c
	// Line 1061, Address: 0x1027a00, Func Offset: 0x80
	// Line 1062, Address: 0x1027a10, Func Offset: 0x90
	// Line 1063, Address: 0x1027a24, Func Offset: 0xa4
	// Line 1064, Address: 0x1027a38, Func Offset: 0xb8
	// Line 1067, Address: 0x1027a40, Func Offset: 0xc0
	// Line 1072, Address: 0x1027a54, Func Offset: 0xd4
	// Line 1073, Address: 0x1027a64, Func Offset: 0xe4
	// Line 1074, Address: 0x1027a74, Func Offset: 0xf4
	// Line 1076, Address: 0x1027a80, Func Offset: 0x100
	// Line 1078, Address: 0x1027ab4, Func Offset: 0x134
	// Line 1079, Address: 0x1027ac8, Func Offset: 0x148
	// Line 1080, Address: 0x1027ad8, Func Offset: 0x158
	// Line 1081, Address: 0x1027aec, Func Offset: 0x16c
	// Line 1082, Address: 0x1027b00, Func Offset: 0x180
	// Line 1085, Address: 0x1027b08, Func Offset: 0x188
	// Line 1090, Address: 0x1027b1c, Func Offset: 0x19c
	// Func End, Address: 0x1027b28, Func Offset: 0x1a8
}

// 
// Start address: 0x1027b30
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 1097, Address: 0x1027b30, Func Offset: 0
	// Line 1100, Address: 0x1027b3c, Func Offset: 0xc
	// Line 1101, Address: 0x1027b48, Func Offset: 0x18
	// Line 1103, Address: 0x1027b54, Func Offset: 0x24
	// Line 1104, Address: 0x1027b80, Func Offset: 0x50
	// Line 1105, Address: 0x1027b94, Func Offset: 0x64
	// Line 1106, Address: 0x1027bc4, Func Offset: 0x94
	// Line 1107, Address: 0x1027bd8, Func Offset: 0xa8
	// Line 1110, Address: 0x1027be0, Func Offset: 0xb0
	// Line 1115, Address: 0x1027bf4, Func Offset: 0xc4
	// Func End, Address: 0x1027c04, Func Offset: 0xd4
}

// 
// Start address: 0x1027c10
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1119, Address: 0x1027c10, Func Offset: 0
	// Line 1123, Address: 0x1027c20, Func Offset: 0x10
	// Line 1124, Address: 0x1027c2c, Func Offset: 0x1c
	// Line 1125, Address: 0x1027c3c, Func Offset: 0x2c
	// Line 1127, Address: 0x1027c48, Func Offset: 0x38
	// Line 1128, Address: 0x1027c50, Func Offset: 0x40
	// Line 1129, Address: 0x1027c58, Func Offset: 0x48
	// Line 1131, Address: 0x1027c64, Func Offset: 0x54
	// Line 1132, Address: 0x1027c70, Func Offset: 0x60
	// Line 1133, Address: 0x1027c84, Func Offset: 0x74
	// Line 1134, Address: 0x1027c90, Func Offset: 0x80
	// Line 1135, Address: 0x1027ca4, Func Offset: 0x94
	// Line 1136, Address: 0x1027cb4, Func Offset: 0xa4
	// Line 1137, Address: 0x1027cc8, Func Offset: 0xb8
	// Line 1138, Address: 0x1027ce4, Func Offset: 0xd4
	// Line 1141, Address: 0x1027cec, Func Offset: 0xdc
	// Line 1146, Address: 0x1027d0c, Func Offset: 0xfc
	// Func End, Address: 0x1027d1c, Func Offset: 0x10c
}

// 
// Start address: 0x1027d20
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1150, Address: 0x1027d20, Func Offset: 0
	// Line 1154, Address: 0x1027d30, Func Offset: 0x10
	// Line 1155, Address: 0x1027d3c, Func Offset: 0x1c
	// Line 1156, Address: 0x1027d4c, Func Offset: 0x2c
	// Line 1158, Address: 0x1027d58, Func Offset: 0x38
	// Line 1159, Address: 0x1027d60, Func Offset: 0x40
	// Line 1160, Address: 0x1027d68, Func Offset: 0x48
	// Line 1162, Address: 0x1027d74, Func Offset: 0x54
	// Line 1163, Address: 0x1027d80, Func Offset: 0x60
	// Line 1164, Address: 0x1027d94, Func Offset: 0x74
	// Line 1165, Address: 0x1027da0, Func Offset: 0x80
	// Line 1166, Address: 0x1027db4, Func Offset: 0x94
	// Line 1167, Address: 0x1027dc4, Func Offset: 0xa4
	// Line 1168, Address: 0x1027dd8, Func Offset: 0xb8
	// Line 1169, Address: 0x1027df4, Func Offset: 0xd4
	// Line 1172, Address: 0x1027dfc, Func Offset: 0xdc
	// Line 1177, Address: 0x1027e1c, Func Offset: 0xfc
	// Func End, Address: 0x1027e2c, Func Offset: 0x10c
}

// 
// Start address: 0x1027e30
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 1189, Address: 0x1027e30, Func Offset: 0
	// Line 1193, Address: 0x1027e40, Func Offset: 0x10
	// Line 1194, Address: 0x1027e4c, Func Offset: 0x1c
	// Line 1195, Address: 0x1027e5c, Func Offset: 0x2c
	// Line 1197, Address: 0x1027e68, Func Offset: 0x38
	// Line 1198, Address: 0x1027e70, Func Offset: 0x40
	// Line 1199, Address: 0x1027e78, Func Offset: 0x48
	// Line 1201, Address: 0x1027e84, Func Offset: 0x54
	// Line 1202, Address: 0x1027e90, Func Offset: 0x60
	// Line 1203, Address: 0x1027ea4, Func Offset: 0x74
	// Line 1204, Address: 0x1027eb0, Func Offset: 0x80
	// Line 1205, Address: 0x1027ec4, Func Offset: 0x94
	// Line 1206, Address: 0x1027ed4, Func Offset: 0xa4
	// Line 1207, Address: 0x1027ee8, Func Offset: 0xb8
	// Line 1208, Address: 0x1027f04, Func Offset: 0xd4
	// Line 1211, Address: 0x1027f0c, Func Offset: 0xdc
	// Line 1216, Address: 0x1027f2c, Func Offset: 0xfc
	// Func End, Address: 0x1027f3c, Func Offset: 0x10c
}

// 
// Start address: 0x1027f40
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1231, Address: 0x1027f40, Func Offset: 0
	// Line 1237, Address: 0x1027f5c, Func Offset: 0x1c
	// Line 1238, Address: 0x1027f60, Func Offset: 0x20
	// Line 1239, Address: 0x1027f6c, Func Offset: 0x2c
	// Line 1240, Address: 0x1027f78, Func Offset: 0x38
	// Line 1241, Address: 0x1027f80, Func Offset: 0x40
	// Line 1242, Address: 0x1027f88, Func Offset: 0x48
	// Line 1250, Address: 0x1027f9c, Func Offset: 0x5c
	// Func End, Address: 0x1027fc0, Func Offset: 0x80
}

// 
// Start address: 0x1027fc0
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
	// Line 1263, Address: 0x1027fc0, Func Offset: 0
	// Line 1272, Address: 0x1027fe0, Func Offset: 0x20
	// Line 1273, Address: 0x1027fe4, Func Offset: 0x24
	// Line 1274, Address: 0x1027ff0, Func Offset: 0x30
	// Line 1275, Address: 0x1027ffc, Func Offset: 0x3c
	// Line 1276, Address: 0x1028004, Func Offset: 0x44
	// Line 1277, Address: 0x102800c, Func Offset: 0x4c
	// Line 1279, Address: 0x1028020, Func Offset: 0x60
	// Line 1280, Address: 0x1028024, Func Offset: 0x64
	// Line 1281, Address: 0x1028030, Func Offset: 0x70
	// Line 1282, Address: 0x102803c, Func Offset: 0x7c
	// Line 1283, Address: 0x1028044, Func Offset: 0x84
	// Line 1285, Address: 0x102804c, Func Offset: 0x8c
	// Line 1286, Address: 0x1028058, Func Offset: 0x98
	// Line 1287, Address: 0x102806c, Func Offset: 0xac
	// Line 1289, Address: 0x1028078, Func Offset: 0xb8
	// Line 1290, Address: 0x1028080, Func Offset: 0xc0
	// Line 1292, Address: 0x1028088, Func Offset: 0xc8
	// Line 1294, Address: 0x10280a8, Func Offset: 0xe8
	// Line 1300, Address: 0x10280d4, Func Offset: 0x114
	// Line 1301, Address: 0x10280e8, Func Offset: 0x128
	// Line 1303, Address: 0x10280f4, Func Offset: 0x134
	// Line 1304, Address: 0x10280fc, Func Offset: 0x13c
	// Line 1305, Address: 0x1028104, Func Offset: 0x144
	// Line 1307, Address: 0x1028124, Func Offset: 0x164
	// Line 1313, Address: 0x1028150, Func Offset: 0x190
	// Line 1314, Address: 0x1028164, Func Offset: 0x1a4
	// Line 1316, Address: 0x1028170, Func Offset: 0x1b0
	// Line 1317, Address: 0x1028178, Func Offset: 0x1b8
	// Line 1318, Address: 0x1028180, Func Offset: 0x1c0
	// Line 1320, Address: 0x10281a0, Func Offset: 0x1e0
	// Line 1326, Address: 0x10281cc, Func Offset: 0x20c
	// Line 1327, Address: 0x10281e0, Func Offset: 0x220
	// Line 1329, Address: 0x10281ec, Func Offset: 0x22c
	// Line 1330, Address: 0x10281f4, Func Offset: 0x234
	// Line 1331, Address: 0x10281fc, Func Offset: 0x23c
	// Line 1333, Address: 0x102821c, Func Offset: 0x25c
	// Line 1342, Address: 0x1028248, Func Offset: 0x288
	// Func End, Address: 0x1028270, Func Offset: 0x2b0
}

// 
// Start address: 0x1028270
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
	// Line 1359, Address: 0x1028270, Func Offset: 0
	// Line 1370, Address: 0x102829c, Func Offset: 0x2c
	// Line 1372, Address: 0x10282a4, Func Offset: 0x34
	// Line 1373, Address: 0x10282bc, Func Offset: 0x4c
	// Line 1374, Address: 0x10282d0, Func Offset: 0x60
	// Line 1376, Address: 0x10282d8, Func Offset: 0x68
	// Line 1378, Address: 0x10282ec, Func Offset: 0x7c
	// Line 1379, Address: 0x1028304, Func Offset: 0x94
	// Line 1380, Address: 0x1028318, Func Offset: 0xa8
	// Line 1381, Address: 0x1028320, Func Offset: 0xb0
	// Line 1383, Address: 0x1028328, Func Offset: 0xb8
	// Line 1384, Address: 0x102833c, Func Offset: 0xcc
	// Line 1389, Address: 0x1028344, Func Offset: 0xd4
	// Line 1390, Address: 0x1028394, Func Offset: 0x124
	// Line 1391, Address: 0x102839c, Func Offset: 0x12c
	// Line 1397, Address: 0x10283bc, Func Offset: 0x14c
	// Line 1398, Address: 0x10283dc, Func Offset: 0x16c
	// Line 1399, Address: 0x1028400, Func Offset: 0x190
	// Line 1400, Address: 0x102840c, Func Offset: 0x19c
	// Line 1401, Address: 0x1028414, Func Offset: 0x1a4
	// Line 1403, Address: 0x1028434, Func Offset: 0x1c4
	// Line 1407, Address: 0x1028460, Func Offset: 0x1f0
	// Line 1410, Address: 0x1028468, Func Offset: 0x1f8
	// Line 1411, Address: 0x102846c, Func Offset: 0x1fc
	// Line 1415, Address: 0x102848c, Func Offset: 0x21c
	// Line 1422, Address: 0x10284b8, Func Offset: 0x248
	// Line 1429, Address: 0x10284cc, Func Offset: 0x25c
	// Line 1430, Address: 0x10284d4, Func Offset: 0x264
	// Line 1431, Address: 0x10284dc, Func Offset: 0x26c
	// Line 1432, Address: 0x10284f4, Func Offset: 0x284
	// Line 1433, Address: 0x1028514, Func Offset: 0x2a4
	// Line 1437, Address: 0x102851c, Func Offset: 0x2ac
	// Line 1439, Address: 0x102854c, Func Offset: 0x2dc
	// Line 1440, Address: 0x1028558, Func Offset: 0x2e8
	// Line 1444, Address: 0x1028568, Func Offset: 0x2f8
	// Line 1445, Address: 0x1028574, Func Offset: 0x304
	// Line 1446, Address: 0x1028594, Func Offset: 0x324
	// Line 1447, Address: 0x10285c0, Func Offset: 0x350
	// Line 1448, Address: 0x10285e0, Func Offset: 0x370
	// Line 1450, Address: 0x1028604, Func Offset: 0x394
	// Line 1453, Address: 0x1028628, Func Offset: 0x3b8
	// Line 1455, Address: 0x1028648, Func Offset: 0x3d8
	// Line 1457, Address: 0x102865c, Func Offset: 0x3ec
	// Line 1458, Address: 0x1028668, Func Offset: 0x3f8
	// Line 1459, Address: 0x1028678, Func Offset: 0x408
	// Line 1461, Address: 0x1028680, Func Offset: 0x410
	// Func End, Address: 0x10286a8, Func Offset: 0x438
}

// 
// Start address: 0x10286b0
void scrollwrtc()
{
	// Line 1469, Address: 0x10286b0, Func Offset: 0
	// Func End, Address: 0x10286b8, Func Offset: 0x8
}

// 
// Start address: 0x10286c0
void scrollwrtz()
{
	// Line 1474, Address: 0x10286c0, Func Offset: 0
	// Func End, Address: 0x10286c8, Func Offset: 0x8
}

// 
// Start address: 0x10286d0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1495, Address: 0x10286d0, Func Offset: 0
	// Line 1508, Address: 0x10286f8, Func Offset: 0x28
	// Line 1511, Address: 0x1028718, Func Offset: 0x48
	// Line 1512, Address: 0x102872c, Func Offset: 0x5c
	// Line 1513, Address: 0x1028740, Func Offset: 0x70
	// Line 1514, Address: 0x1028754, Func Offset: 0x84
	// Line 1516, Address: 0x1028768, Func Offset: 0x98
	// Line 1517, Address: 0x1028774, Func Offset: 0xa4
	// Line 1518, Address: 0x1028788, Func Offset: 0xb8
	// Func End, Address: 0x1028798, Func Offset: 0xc8
}

// 
// Start address: 0x10287a0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1522, Address: 0x10287a0, Func Offset: 0
	// Line 1526, Address: 0x10287c8, Func Offset: 0x28
	// Line 1529, Address: 0x10287e8, Func Offset: 0x48
	// Line 1530, Address: 0x10287fc, Func Offset: 0x5c
	// Line 1531, Address: 0x1028810, Func Offset: 0x70
	// Line 1532, Address: 0x1028824, Func Offset: 0x84
	// Line 1534, Address: 0x1028838, Func Offset: 0x98
	// Line 1535, Address: 0x1028844, Func Offset: 0xa4
	// Line 1536, Address: 0x1028858, Func Offset: 0xb8
	// Func End, Address: 0x1028868, Func Offset: 0xc8
}

// 
// Start address: 0x1028870
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1555, Address: 0x1028870, Func Offset: 0
	// Line 1559, Address: 0x1028898, Func Offset: 0x28
	// Line 1562, Address: 0x10288b8, Func Offset: 0x48
	// Line 1563, Address: 0x10288cc, Func Offset: 0x5c
	// Line 1564, Address: 0x10288dc, Func Offset: 0x6c
	// Line 1565, Address: 0x10288f0, Func Offset: 0x80
	// Line 1567, Address: 0x1028900, Func Offset: 0x90
	// Line 1568, Address: 0x102890c, Func Offset: 0x9c
	// Line 1569, Address: 0x1028920, Func Offset: 0xb0
	// Func End, Address: 0x1028930, Func Offset: 0xc0
}

// 
// Start address: 0x1028930
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
	// Line 1588, Address: 0x1028930, Func Offset: 0
	// Line 1594, Address: 0x1028964, Func Offset: 0x34
	// Line 1596, Address: 0x1028974, Func Offset: 0x44
	// Line 1597, Address: 0x1028978, Func Offset: 0x48
	// Line 1598, Address: 0x1028980, Func Offset: 0x50
	// Line 1600, Address: 0x1028990, Func Offset: 0x60
	// Line 1602, Address: 0x1028994, Func Offset: 0x64
	// Line 1603, Address: 0x102899c, Func Offset: 0x6c
	// Line 1606, Address: 0x10289a4, Func Offset: 0x74
	// Line 1607, Address: 0x10289ac, Func Offset: 0x7c
	// Line 1608, Address: 0x10289b8, Func Offset: 0x88
	// Line 1610, Address: 0x10289c4, Func Offset: 0x94
	// Line 1611, Address: 0x10289cc, Func Offset: 0x9c
	// Line 1612, Address: 0x10289d4, Func Offset: 0xa4
	// Line 1613, Address: 0x10289dc, Func Offset: 0xac
	// Line 1615, Address: 0x10289e8, Func Offset: 0xb8
	// Line 1616, Address: 0x10289f0, Func Offset: 0xc0
	// Line 1617, Address: 0x10289f8, Func Offset: 0xc8
	// Line 1618, Address: 0x1028a00, Func Offset: 0xd0
	// Line 1620, Address: 0x1028a0c, Func Offset: 0xdc
	// Line 1621, Address: 0x1028a14, Func Offset: 0xe4
	// Line 1622, Address: 0x1028a1c, Func Offset: 0xec
	// Line 1625, Address: 0x1028a24, Func Offset: 0xf4
	// Line 1626, Address: 0x1028a2c, Func Offset: 0xfc
	// Line 1629, Address: 0x1028a34, Func Offset: 0x104
	// Line 1630, Address: 0x1028a78, Func Offset: 0x148
	// Line 1631, Address: 0x1028abc, Func Offset: 0x18c
	// Line 1632, Address: 0x1028b00, Func Offset: 0x1d0
	// Line 1634, Address: 0x1028b44, Func Offset: 0x214
	// Func End, Address: 0x1028b74, Func Offset: 0x244
}

// 
// Start address: 0x1028b80
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1652, Address: 0x1028b80, Func Offset: 0
	// Line 1653, Address: 0x1028ba0, Func Offset: 0x20
	// Line 1654, Address: 0x1028bc0, Func Offset: 0x40
	// Func End, Address: 0x1028bd0, Func Offset: 0x50
}

// 
// Start address: 0x1028bd0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1656, Address: 0x1028bd0, Func Offset: 0
	// Line 1657, Address: 0x1028bf0, Func Offset: 0x20
	// Line 1658, Address: 0x1028bf4, Func Offset: 0x24
	// Line 1659, Address: 0x1028c14, Func Offset: 0x44
	// Func End, Address: 0x1028c24, Func Offset: 0x54
}

// 
// Start address: 0x1028c30
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1666, Address: 0x1028c30, Func Offset: 0
	// Line 1672, Address: 0x1028c60, Func Offset: 0x30
	// Line 1673, Address: 0x1028c70, Func Offset: 0x40
	// Line 1679, Address: 0x1028c80, Func Offset: 0x50
	// Line 1680, Address: 0x1028c9c, Func Offset: 0x6c
	// Line 1681, Address: 0x1028ca0, Func Offset: 0x70
	// Line 1682, Address: 0x1028cbc, Func Offset: 0x8c
	// Line 1683, Address: 0x1028cc0, Func Offset: 0x90
	// Line 1684, Address: 0x1028ce0, Func Offset: 0xb0
	// Line 1685, Address: 0x1028ce8, Func Offset: 0xb8
	// Line 1686, Address: 0x1028d08, Func Offset: 0xd8
	// Line 1687, Address: 0x1028d10, Func Offset: 0xe0
	// Line 1688, Address: 0x1028d58, Func Offset: 0x128
	// Line 1690, Address: 0x1028d64, Func Offset: 0x134
	// Line 1692, Address: 0x1028d80, Func Offset: 0x150
	// Line 1697, Address: 0x1028d88, Func Offset: 0x158
	// Line 1698, Address: 0x1028d94, Func Offset: 0x164
	// Line 1701, Address: 0x1028da0, Func Offset: 0x170
	// Line 1702, Address: 0x1028da8, Func Offset: 0x178
	// Line 1703, Address: 0x1028dc8, Func Offset: 0x198
	// Line 1704, Address: 0x1028de4, Func Offset: 0x1b4
	// Line 1705, Address: 0x1028dec, Func Offset: 0x1bc
	// Line 1706, Address: 0x1028e0c, Func Offset: 0x1dc
	// Line 1708, Address: 0x1028e28, Func Offset: 0x1f8
	// Line 1709, Address: 0x1028e30, Func Offset: 0x200
	// Line 1710, Address: 0x1028e38, Func Offset: 0x208
	// Line 1711, Address: 0x1028e44, Func Offset: 0x214
	// Line 1712, Address: 0x1028e5c, Func Offset: 0x22c
	// Line 1714, Address: 0x1028e6c, Func Offset: 0x23c
	// Line 1717, Address: 0x1028e78, Func Offset: 0x248
	// Line 1718, Address: 0x1028e80, Func Offset: 0x250
	// Line 1719, Address: 0x1028e84, Func Offset: 0x254
	// Func End, Address: 0x1028ea4, Func Offset: 0x274
}

// 
// Start address: 0x1028eb0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1739, Address: 0x1028eb0, Func Offset: 0
	// Line 1747, Address: 0x1028ed8, Func Offset: 0x28
	// Line 1748, Address: 0x1028f3c, Func Offset: 0x8c
	// Line 1754, Address: 0x1028f44, Func Offset: 0x94
	// Line 1755, Address: 0x1028f4c, Func Offset: 0x9c
	// Line 1756, Address: 0x1028f6c, Func Offset: 0xbc
	// Line 1757, Address: 0x1028f88, Func Offset: 0xd8
	// Line 1758, Address: 0x1028f90, Func Offset: 0xe0
	// Line 1759, Address: 0x1028fb0, Func Offset: 0x100
	// Line 1762, Address: 0x1028fcc, Func Offset: 0x11c
	// Line 1763, Address: 0x1028fd4, Func Offset: 0x124
	// Line 1764, Address: 0x1028fdc, Func Offset: 0x12c
	// Line 1765, Address: 0x1028fe8, Func Offset: 0x138
	// Line 1766, Address: 0x1029000, Func Offset: 0x150
	// Line 1767, Address: 0x1029008, Func Offset: 0x158
	// Line 1772, Address: 0x1029018, Func Offset: 0x168
	// Line 1775, Address: 0x1029024, Func Offset: 0x174
	// Line 1776, Address: 0x102902c, Func Offset: 0x17c
	// Line 1777, Address: 0x1029030, Func Offset: 0x180
	// Func End, Address: 0x102904c, Func Offset: 0x19c
}

// 
// Start address: 0x1029050
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1791, Address: 0x1029050, Func Offset: 0
	// Line 1798, Address: 0x102906c, Func Offset: 0x1c
	// Line 1799, Address: 0x1029070, Func Offset: 0x20
	// Line 1800, Address: 0x1029078, Func Offset: 0x28
	// Line 1801, Address: 0x102909c, Func Offset: 0x4c
	// Line 1802, Address: 0x10290a8, Func Offset: 0x58
	// Line 1803, Address: 0x10290c0, Func Offset: 0x70
	// Line 1804, Address: 0x10290d4, Func Offset: 0x84
	// Line 1809, Address: 0x10290ec, Func Offset: 0x9c
	// Func End, Address: 0x1029104, Func Offset: 0xb4
}

// 
// Start address: 0x1029110
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1823, Address: 0x1029110, Func Offset: 0
	// Line 1824, Address: 0x102911c, Func Offset: 0xc
	// Line 1825, Address: 0x1029148, Func Offset: 0x38
	// Line 1826, Address: 0x1029194, Func Offset: 0x84
	// Line 1827, Address: 0x10291c0, Func Offset: 0xb0
	// Line 1829, Address: 0x102920c, Func Offset: 0xfc
	// Line 1835, Address: 0x1029218, Func Offset: 0x108
	// Line 1836, Address: 0x102921c, Func Offset: 0x10c
	// Func End, Address: 0x1029228, Func Offset: 0x118
}

// 
// Start address: 0x1029230
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1853, Address: 0x1029230, Func Offset: 0
	// Line 1854, Address: 0x102924c, Func Offset: 0x1c
	// Line 1856, Address: 0x1029268, Func Offset: 0x38
	// Func End, Address: 0x1029278, Func Offset: 0x48
}

// 
// Start address: 0x1029280
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1858, Address: 0x1029280, Func Offset: 0
	// Line 1859, Address: 0x102929c, Func Offset: 0x1c
	// Line 1860, Address: 0x10292a0, Func Offset: 0x20
	// Line 1862, Address: 0x10292bc, Func Offset: 0x3c
	// Func End, Address: 0x10292cc, Func Offset: 0x4c
}

// 
// Start address: 0x10292d0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1864, Address: 0x10292d0, Func Offset: 0
	// Line 1865, Address: 0x10292e4, Func Offset: 0x14
	// Line 1867, Address: 0x1029300, Func Offset: 0x30
	// Func End, Address: 0x1029310, Func Offset: 0x40
}

// 
// Start address: 0x1029310
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1869, Address: 0x1029310, Func Offset: 0
	// Line 1870, Address: 0x102932c, Func Offset: 0x1c
	// Line 1872, Address: 0x1029348, Func Offset: 0x38
	// Func End, Address: 0x1029358, Func Offset: 0x48
}

// 
// Start address: 0x1029360
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1874, Address: 0x1029360, Func Offset: 0
	// Line 1875, Address: 0x1029378, Func Offset: 0x18
	// Line 1876, Address: 0x1029388, Func Offset: 0x28
	// Line 1877, Address: 0x1029398, Func Offset: 0x38
	// Line 1878, Address: 0x10293a4, Func Offset: 0x44
	// Line 1880, Address: 0x10293b0, Func Offset: 0x50
	// Line 1881, Address: 0x10293dc, Func Offset: 0x7c
	// Line 1884, Address: 0x1029408, Func Offset: 0xa8
	// Func End, Address: 0x1029414, Func Offset: 0xb4
}

// 
// Start address: 0x1029420
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1900, Address: 0x1029420, Func Offset: 0
	// Line 1905, Address: 0x1029438, Func Offset: 0x18
	// Line 1906, Address: 0x1029444, Func Offset: 0x24
	// Line 1907, Address: 0x1029450, Func Offset: 0x30
	// Line 1908, Address: 0x1029458, Func Offset: 0x38
	// Line 1909, Address: 0x102945c, Func Offset: 0x3c
	// Line 1913, Address: 0x1029474, Func Offset: 0x54
	// Line 1914, Address: 0x102947c, Func Offset: 0x5c
	// Line 1915, Address: 0x1029480, Func Offset: 0x60
	// Line 1917, Address: 0x1029490, Func Offset: 0x70
	// Func End, Address: 0x10294b0, Func Offset: 0x90
}

// 
// Start address: 0x10294b0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1920, Address: 0x10294b0, Func Offset: 0
	// Line 1921, Address: 0x10294c8, Func Offset: 0x18
	// Line 1922, Address: 0x10294e8, Func Offset: 0x38
	// Func End, Address: 0x10294f8, Func Offset: 0x48
}

// 
// Start address: 0x1029500
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1927, Address: 0x1029500, Func Offset: 0
	// Line 1931, Address: 0x1029520, Func Offset: 0x20
	// Line 1934, Address: 0x102953c, Func Offset: 0x3c
	// Line 1938, Address: 0x1029564, Func Offset: 0x64
	// Line 1939, Address: 0x1029570, Func Offset: 0x70
	// Line 1941, Address: 0x1029598, Func Offset: 0x98
	// Func End, Address: 0x10295a8, Func Offset: 0xa8
}

// 
// Start address: 0x10295b0
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1946, Address: 0x10295b0, Func Offset: 0
	// Line 1949, Address: 0x10295cc, Func Offset: 0x1c
	// Line 1950, Address: 0x10295d4, Func Offset: 0x24
	// Line 1958, Address: 0x10295dc, Func Offset: 0x2c
	// Line 1959, Address: 0x10295f8, Func Offset: 0x48
	// Line 1961, Address: 0x1029624, Func Offset: 0x74
	// Line 1963, Address: 0x1029648, Func Offset: 0x98
	// Line 1964, Address: 0x1029668, Func Offset: 0xb8
	// Line 1965, Address: 0x1029670, Func Offset: 0xc0
	// Line 1966, Address: 0x1029694, Func Offset: 0xe4
	// Func End, Address: 0x10296b0, Func Offset: 0x100
}

// 
// Start address: 0x10296b0
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1992, Address: 0x10296b0, Func Offset: 0
	// Line 1997, Address: 0x10296d8, Func Offset: 0x28
	// Line 1998, Address: 0x10296e8, Func Offset: 0x38
	// Line 2000, Address: 0x1029704, Func Offset: 0x54
	// Line 2001, Address: 0x1029728, Func Offset: 0x78
	// Line 2002, Address: 0x1029750, Func Offset: 0xa0
	// Line 2003, Address: 0x102975c, Func Offset: 0xac
	// Line 2004, Address: 0x1029764, Func Offset: 0xb4
	// Line 2007, Address: 0x1029780, Func Offset: 0xd0
	// Line 2011, Address: 0x10297a8, Func Offset: 0xf8
	// Line 2014, Address: 0x10297b0, Func Offset: 0x100
	// Line 2015, Address: 0x10297b4, Func Offset: 0x104
	// Line 2019, Address: 0x10297d0, Func Offset: 0x120
	// Line 2026, Address: 0x10297f8, Func Offset: 0x148
	// Func End, Address: 0x1029814, Func Offset: 0x164
}

// 
// Start address: 0x1029820
void mapinit()
{
	// Line 2031, Address: 0x1029820, Func Offset: 0
	// Line 2037, Address: 0x1029828, Func Offset: 0x8
	// Line 2040, Address: 0x1029830, Func Offset: 0x10
	// Line 2041, Address: 0x1029844, Func Offset: 0x24
	// Line 2048, Address: 0x1029858, Func Offset: 0x38
	// Line 2049, Address: 0x102986c, Func Offset: 0x4c
	// Line 2052, Address: 0x1029874, Func Offset: 0x54
	// Line 2054, Address: 0x102988c, Func Offset: 0x6c
	// Line 2058, Address: 0x1029894, Func Offset: 0x74
	// Func End, Address: 0x10298a4, Func Offset: 0x84
}

// 
// Start address: 0x10298b0
void mapset()
{
	// Line 2068, Address: 0x10298b0, Func Offset: 0
	// Func End, Address: 0x10298b8, Func Offset: 0x8
}

