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

typedef int(*type_7)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef int type_2[37];
typedef unsigned short type_3[6];
typedef unsigned short type_4[4];
typedef unsigned short type_5[4][1024];
typedef unsigned char type_6[65];
typedef unsigned char type_8[2];
typedef unsigned char type_9[64];
typedef unsigned char type_10[64][8];
typedef unsigned char type_11[22];
typedef unsigned char type_12[64];
typedef unsigned char type_13[64][8];
typedef short type_14[256];
typedef _anon2* type_15[8];
typedef unsigned short type_16[2];
typedef _anon1 type_17[128];
typedef unsigned char type_18[4];
typedef _anon2* type_19[8];
typedef int type_20[8];

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
_anon6 waterdirec;
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
	// Line 124, Address: 0x1024a50, Func Offset: 0
	// Func End, Address: 0x1024a58, Func Offset: 0x8
}

// 
// Start address: 0x1024a60
void divdevset()
{
	// Line 128, Address: 0x1024a60, Func Offset: 0
	// Func End, Address: 0x1024a68, Func Offset: 0x8
}

// 
// Start address: 0x1024a70
void scr_set()
{
	int i;
	// Line 177, Address: 0x1024a70, Func Offset: 0
	// Line 180, Address: 0x1024a7c, Func Offset: 0xc
	// Line 182, Address: 0x1024ac4, Func Offset: 0x54
	// Line 183, Address: 0x1024ac8, Func Offset: 0x58
	// Line 184, Address: 0x1024aec, Func Offset: 0x7c
	// Line 185, Address: 0x1024b08, Func Offset: 0x98
	// Line 186, Address: 0x1024b2c, Func Offset: 0xbc
	// Line 187, Address: 0x1024b48, Func Offset: 0xd8
	// Line 188, Address: 0x1024b6c, Func Offset: 0xfc
	// Line 189, Address: 0x1024b88, Func Offset: 0x118
	// Line 190, Address: 0x1024bac, Func Offset: 0x13c
	// Line 191, Address: 0x1024bc8, Func Offset: 0x158
	// Line 193, Address: 0x1024bec, Func Offset: 0x17c
	// Line 194, Address: 0x1024c10, Func Offset: 0x1a0
	// Line 195, Address: 0x1024c1c, Func Offset: 0x1ac
	// Line 197, Address: 0x1024c28, Func Offset: 0x1b8
	// Line 198, Address: 0x1024c4c, Func Offset: 0x1dc
	// Line 200, Address: 0x1024c58, Func Offset: 0x1e8
	// Line 201, Address: 0x1024c60, Func Offset: 0x1f0
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
	// Line 205, Address: 0x1024c80, Func Offset: 0
	// Line 206, Address: 0x1024c94, Func Offset: 0x14
	// Line 210, Address: 0x1024cb0, Func Offset: 0x30
	// Line 218, Address: 0x1024cdc, Func Offset: 0x5c
	// Line 220, Address: 0x1024cf0, Func Offset: 0x70
	// Line 221, Address: 0x1024cf8, Func Offset: 0x78
	// Line 222, Address: 0x1024d08, Func Offset: 0x88
	// Line 223, Address: 0x1024d18, Func Offset: 0x98
	// Line 224, Address: 0x1024d2c, Func Offset: 0xac
	// Line 228, Address: 0x1024d34, Func Offset: 0xb4
	// Line 229, Address: 0x1024d38, Func Offset: 0xb8
	// Line 230, Address: 0x1024d5c, Func Offset: 0xdc
	// Line 233, Address: 0x1024d80, Func Offset: 0x100
	// Line 234, Address: 0x1024d94, Func Offset: 0x114
	// Line 235, Address: 0x1024da0, Func Offset: 0x120
	// Line 237, Address: 0x1024da8, Func Offset: 0x128
	// Line 241, Address: 0x1024dac, Func Offset: 0x12c
	// Line 242, Address: 0x1024dd0, Func Offset: 0x150
	// Line 244, Address: 0x1024de0, Func Offset: 0x160
	// Line 246, Address: 0x1024de8, Func Offset: 0x168
	// Line 247, Address: 0x1024dfc, Func Offset: 0x17c
	// Line 248, Address: 0x1024e08, Func Offset: 0x188
	// Line 250, Address: 0x1024e10, Func Offset: 0x190
	// Line 253, Address: 0x1024e14, Func Offset: 0x194
	// Line 254, Address: 0x1024e38, Func Offset: 0x1b8
	// Line 257, Address: 0x1024e48, Func Offset: 0x1c8
	// Line 259, Address: 0x1024e50, Func Offset: 0x1d0
	// Line 261, Address: 0x1024e60, Func Offset: 0x1e0
	// Line 262, Address: 0x1024e64, Func Offset: 0x1e4
	// Line 263, Address: 0x1024e7c, Func Offset: 0x1fc
	// Line 264, Address: 0x1024e94, Func Offset: 0x214
	// Line 265, Address: 0x1024eac, Func Offset: 0x22c
	// Line 268, Address: 0x1024ec4, Func Offset: 0x244
	// Func End, Address: 0x1024ee0, Func Offset: 0x260
}

// 
// Start address: 0x1024ee0
void scrbinit(short yWk, short xWk)
{
	_anon8 data;
	// Line 272, Address: 0x1024ee0, Func Offset: 0
	// Line 276, Address: 0x1024eec, Func Offset: 0xc
	// Line 277, Address: 0x1024ef0, Func Offset: 0x10
	// Line 278, Address: 0x1024ef8, Func Offset: 0x18
	// Line 279, Address: 0x1024f10, Func Offset: 0x30
	// Line 280, Address: 0x1024f20, Func Offset: 0x40
	// Line 281, Address: 0x1024f2c, Func Offset: 0x4c
	// Line 283, Address: 0x1024f38, Func Offset: 0x58
	// Line 284, Address: 0x1024f5c, Func Offset: 0x7c
	// Line 285, Address: 0x1024f94, Func Offset: 0xb4
	// Line 286, Address: 0x1024fc0, Func Offset: 0xe0
	// Func End, Address: 0x1024fcc, Func Offset: 0xec
}

// 
// Start address: 0x1024fd0
void scroll()
{
	_anon8 data;
	int hsCount;
	int i;
	// Line 290, Address: 0x1024fd0, Func Offset: 0
	// Line 295, Address: 0x1024fe0, Func Offset: 0x10
	// Line 298, Address: 0x1024ff0, Func Offset: 0x20
	// Line 299, Address: 0x102501c, Func Offset: 0x4c
	// Line 300, Address: 0x1025024, Func Offset: 0x54
	// Line 301, Address: 0x102502c, Func Offset: 0x5c
	// Line 303, Address: 0x1025034, Func Offset: 0x64
	// Line 304, Address: 0x1025044, Func Offset: 0x74
	// Line 308, Address: 0x1025054, Func Offset: 0x84
	// Line 309, Address: 0x102508c, Func Offset: 0xbc
	// Line 310, Address: 0x10250ac, Func Offset: 0xdc
	// Line 312, Address: 0x10250e4, Func Offset: 0x114
	// Line 313, Address: 0x10250e8, Func Offset: 0x118
	// Line 314, Address: 0x10250f4, Func Offset: 0x124
	// Line 315, Address: 0x1025118, Func Offset: 0x148
	// Line 317, Address: 0x1025124, Func Offset: 0x154
	// Line 318, Address: 0x1025134, Func Offset: 0x164
	// Line 319, Address: 0x1025144, Func Offset: 0x174
	// Line 320, Address: 0x1025154, Func Offset: 0x184
	// Line 321, Address: 0x1025188, Func Offset: 0x1b8
	// Line 322, Address: 0x1025190, Func Offset: 0x1c0
	// Line 324, Address: 0x1025198, Func Offset: 0x1c8
	// Line 327, Address: 0x102519c, Func Offset: 0x1cc
	// Line 329, Address: 0x10251ac, Func Offset: 0x1dc
	// Line 331, Address: 0x10251b8, Func Offset: 0x1e8
	// Line 332, Address: 0x10251e8, Func Offset: 0x218
	// Line 333, Address: 0x10251ec, Func Offset: 0x21c
	// Line 335, Address: 0x10251fc, Func Offset: 0x22c
	// Line 337, Address: 0x102520c, Func Offset: 0x23c
	// Line 339, Address: 0x1025218, Func Offset: 0x248
	// Line 340, Address: 0x1025248, Func Offset: 0x278
	// Line 341, Address: 0x102524c, Func Offset: 0x27c
	// Line 347, Address: 0x102525c, Func Offset: 0x28c
	// Line 348, Address: 0x1025268, Func Offset: 0x298
	// Line 349, Address: 0x1025274, Func Offset: 0x2a4
	// Line 350, Address: 0x1025280, Func Offset: 0x2b0
	// Line 351, Address: 0x1025294, Func Offset: 0x2c4
	// Line 352, Address: 0x10252c8, Func Offset: 0x2f8
	// Func End, Address: 0x10252e0, Func Offset: 0x310
}

// 
// Start address: 0x10252e0
int z71aline(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl[37];
	// Line 356, Address: 0x10252e0, Func Offset: 0
	// Line 360, Address: 0x10252f4, Func Offset: 0x14
	// Line 368, Address: 0x1025320, Func Offset: 0x40
	// Line 369, Address: 0x1025344, Func Offset: 0x64
	// Line 370, Address: 0x1025348, Func Offset: 0x68
	// Line 371, Address: 0x1025360, Func Offset: 0x80
	// Line 372, Address: 0x1025364, Func Offset: 0x84
	// Line 373, Address: 0x1025368, Func Offset: 0x88
	// Line 374, Address: 0x1025374, Func Offset: 0x94
	// Line 375, Address: 0x1025380, Func Offset: 0xa0
	// Line 378, Address: 0x102538c, Func Offset: 0xac
	// Line 381, Address: 0x1025398, Func Offset: 0xb8
	// Line 382, Address: 0x10253a4, Func Offset: 0xc4
	// Line 383, Address: 0x10253d4, Func Offset: 0xf4
	// Line 384, Address: 0x10253f8, Func Offset: 0x118
	// Line 385, Address: 0x102541c, Func Offset: 0x13c
	// Line 386, Address: 0x1025428, Func Offset: 0x148
	// Line 387, Address: 0x102544c, Func Offset: 0x16c
	// Line 388, Address: 0x102545c, Func Offset: 0x17c
	// Line 389, Address: 0x1025468, Func Offset: 0x188
	// Line 390, Address: 0x102546c, Func Offset: 0x18c
	// Func End, Address: 0x1025484, Func Offset: 0x1a4
}

// 
// Start address: 0x1025490
int z71aline0(int hsCount)
{
	int temp;
	_anon2 data;
	int i;
	int j;
	int z71ascrtbl0[8];
	// Line 393, Address: 0x1025490, Func Offset: 0
	// Line 397, Address: 0x10254a4, Func Offset: 0x14
	// Line 402, Address: 0x10254d4, Func Offset: 0x44
	// Line 403, Address: 0x10254f8, Func Offset: 0x68
	// Line 404, Address: 0x10254fc, Func Offset: 0x6c
	// Line 405, Address: 0x1025518, Func Offset: 0x88
	// Line 406, Address: 0x102551c, Func Offset: 0x8c
	// Line 407, Address: 0x1025520, Func Offset: 0x90
	// Line 408, Address: 0x102552c, Func Offset: 0x9c
	// Line 411, Address: 0x1025538, Func Offset: 0xa8
	// Line 414, Address: 0x1025544, Func Offset: 0xb4
	// Line 415, Address: 0x1025574, Func Offset: 0xe4
	// Line 416, Address: 0x1025580, Func Offset: 0xf0
	// Line 417, Address: 0x10255a4, Func Offset: 0x114
	// Line 418, Address: 0x10255c8, Func Offset: 0x138
	// Line 419, Address: 0x10255d4, Func Offset: 0x144
	// Line 420, Address: 0x10255f8, Func Offset: 0x168
	// Line 421, Address: 0x1025608, Func Offset: 0x178
	// Line 422, Address: 0x102560c, Func Offset: 0x17c
	// Func End, Address: 0x1025624, Func Offset: 0x194
}

// 
// Start address: 0x1025630
void zonescrsetsub0(short VPosi, unsigned short offs)
{
	_anon2* pHScrollBuff;
	_anon2 hsw;
	int i;
	int j;
	short VPosi2;
	short wD2;
	short sin;
	short cos;
	// Line 427, Address: 0x1025630, Func Offset: 0
	// Line 436, Address: 0x1025654, Func Offset: 0x24
	// Line 445, Address: 0x102565c, Func Offset: 0x2c
	// Line 446, Address: 0x102567c, Func Offset: 0x4c
	// Line 447, Address: 0x1025688, Func Offset: 0x58
	// Line 448, Address: 0x1025698, Func Offset: 0x68
	// Line 449, Address: 0x102569c, Func Offset: 0x6c
	// Line 451, Address: 0x10256c4, Func Offset: 0x94
	// Line 452, Address: 0x10256d0, Func Offset: 0xa0
	// Line 454, Address: 0x10256d8, Func Offset: 0xa8
	// Line 455, Address: 0x10256e0, Func Offset: 0xb0
	// Line 456, Address: 0x10256e4, Func Offset: 0xb4
	// Line 457, Address: 0x10256e8, Func Offset: 0xb8
	// Line 458, Address: 0x10256f4, Func Offset: 0xc4
	// Line 460, Address: 0x1025700, Func Offset: 0xd0
	// Line 463, Address: 0x1025714, Func Offset: 0xe4
	// Line 464, Address: 0x1025718, Func Offset: 0xe8
	// Line 465, Address: 0x102571c, Func Offset: 0xec
	// Line 466, Address: 0x1025720, Func Offset: 0xf0
	// Line 469, Address: 0x1025740, Func Offset: 0x110
	// Line 470, Address: 0x1025760, Func Offset: 0x130
	// Line 471, Address: 0x102577c, Func Offset: 0x14c
	// Line 472, Address: 0x1025790, Func Offset: 0x160
	// Line 473, Address: 0x102579c, Func Offset: 0x16c
	// Line 474, Address: 0x10257ac, Func Offset: 0x17c
	// Line 475, Address: 0x10257b0, Func Offset: 0x180
	// Line 476, Address: 0x10257bc, Func Offset: 0x18c
	// Line 477, Address: 0x10257c0, Func Offset: 0x190
	// Line 478, Address: 0x10257c8, Func Offset: 0x198
	// Line 480, Address: 0x10257d0, Func Offset: 0x1a0
	// Line 481, Address: 0x10257f8, Func Offset: 0x1c8
	// Line 483, Address: 0x1025804, Func Offset: 0x1d4
	// Line 484, Address: 0x102580c, Func Offset: 0x1dc
	// Line 485, Address: 0x1025810, Func Offset: 0x1e0
	// Line 486, Address: 0x1025820, Func Offset: 0x1f0
	// Line 487, Address: 0x102582c, Func Offset: 0x1fc
	// Line 488, Address: 0x1025838, Func Offset: 0x208
	// Func End, Address: 0x102585c, Func Offset: 0x22c
}

// 
// Start address: 0x1025860
void scroll_h()
{
	unsigned short wD4;
	// Line 500, Address: 0x1025860, Func Offset: 0
	// Line 503, Address: 0x102586c, Func Offset: 0xc
	// Line 504, Address: 0x1025878, Func Offset: 0x18
	// Line 505, Address: 0x1025880, Func Offset: 0x20
	// Line 506, Address: 0x10258b4, Func Offset: 0x54
	// Line 507, Address: 0x10258c8, Func Offset: 0x68
	// Line 508, Address: 0x10258f4, Func Offset: 0x94
	// Line 509, Address: 0x1025908, Func Offset: 0xa8
	// Line 512, Address: 0x1025910, Func Offset: 0xb0
	// Line 517, Address: 0x1025924, Func Offset: 0xc4
	// Func End, Address: 0x1025938, Func Offset: 0xd8
}

// 
// Start address: 0x1025940
void scrh_move()
{
	unsigned short wD0;
	// Line 519, Address: 0x1025940, Func Offset: 0
	// Line 522, Address: 0x102594c, Func Offset: 0xc
	// Line 523, Address: 0x1025958, Func Offset: 0x18
	// Line 524, Address: 0x102596c, Func Offset: 0x2c
	// Line 525, Address: 0x1025980, Func Offset: 0x40
	// Line 527, Address: 0x102598c, Func Offset: 0x4c
	// Line 528, Address: 0x1025994, Func Offset: 0x54
	// Line 529, Address: 0x102599c, Func Offset: 0x5c
	// Line 530, Address: 0x10259b4, Func Offset: 0x74
	// Line 531, Address: 0x10259c0, Func Offset: 0x80
	// Line 533, Address: 0x10259c8, Func Offset: 0x88
	// Line 536, Address: 0x10259d4, Func Offset: 0x94
	// Func End, Address: 0x10259e8, Func Offset: 0xa8
}

// 
// Start address: 0x10259f0
void right_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 539, Address: 0x10259f0, Func Offset: 0
	// Line 542, Address: 0x10259fc, Func Offset: 0xc
	// Line 543, Address: 0x1025a1c, Func Offset: 0x2c
	// Line 546, Address: 0x1025a24, Func Offset: 0x34
	// Line 547, Address: 0x1025a3c, Func Offset: 0x4c
	// Line 548, Address: 0x1025a6c, Func Offset: 0x7c
	// Line 551, Address: 0x1025a78, Func Offset: 0x88
	// Line 552, Address: 0x1025a80, Func Offset: 0x90
	// Line 553, Address: 0x1025a94, Func Offset: 0xa4
	// Line 554, Address: 0x1025ac4, Func Offset: 0xd4
	// Line 555, Address: 0x1025ad0, Func Offset: 0xe0
	// Line 557, Address: 0x1025ad8, Func Offset: 0xe8
	// Func End, Address: 0x1025ae8, Func Offset: 0xf8
}

// 
// Start address: 0x1025af0
void left_check(unsigned short wD0)
{
	unsigned short wD1;
	// Line 560, Address: 0x1025af0, Func Offset: 0
	// Line 563, Address: 0x1025afc, Func Offset: 0xc
	// Line 564, Address: 0x1025b1c, Func Offset: 0x2c
	// Line 567, Address: 0x1025b24, Func Offset: 0x34
	// Line 568, Address: 0x1025b3c, Func Offset: 0x4c
	// Line 569, Address: 0x1025b6c, Func Offset: 0x7c
	// Line 572, Address: 0x1025b78, Func Offset: 0x88
	// Line 573, Address: 0x1025b80, Func Offset: 0x90
	// Line 574, Address: 0x1025b94, Func Offset: 0xa4
	// Line 575, Address: 0x1025bc4, Func Offset: 0xd4
	// Line 576, Address: 0x1025bd0, Func Offset: 0xe0
	// Line 578, Address: 0x1025bd8, Func Offset: 0xe8
	// Func End, Address: 0x1025be8, Func Offset: 0xf8
}

// 
// Start address: 0x1025bf0
void scroll_v()
{
	unsigned short wD0;
	// Line 597, Address: 0x1025bf0, Func Offset: 0
	// Line 600, Address: 0x1025bfc, Func Offset: 0xc
	// Line 601, Address: 0x1025c28, Func Offset: 0x38
	// Line 602, Address: 0x1025c40, Func Offset: 0x50
	// Line 605, Address: 0x1025c48, Func Offset: 0x58
	// Line 606, Address: 0x1025c60, Func Offset: 0x70
	// Line 607, Address: 0x1025c68, Func Offset: 0x78
	// Line 608, Address: 0x1025c88, Func Offset: 0x98
	// Line 609, Address: 0x1025c9c, Func Offset: 0xac
	// Line 610, Address: 0x1025ca8, Func Offset: 0xb8
	// Line 612, Address: 0x1025cb0, Func Offset: 0xc0
	// Line 613, Address: 0x1025cc4, Func Offset: 0xd4
	// Line 614, Address: 0x1025cd4, Func Offset: 0xe4
	// Line 615, Address: 0x1025cdc, Func Offset: 0xec
	// Line 616, Address: 0x1025ce8, Func Offset: 0xf8
	// Line 618, Address: 0x1025cf0, Func Offset: 0x100
	// Line 619, Address: 0x1025cf8, Func Offset: 0x108
	// Line 620, Address: 0x1025d0c, Func Offset: 0x11c
	// Line 621, Address: 0x1025d14, Func Offset: 0x124
	// Line 627, Address: 0x1025d1c, Func Offset: 0x12c
	// Line 628, Address: 0x1025d30, Func Offset: 0x140
	// Line 629, Address: 0x1025d38, Func Offset: 0x148
	// Line 630, Address: 0x1025d44, Func Offset: 0x154
	// Line 632, Address: 0x1025d4c, Func Offset: 0x15c
	// Line 633, Address: 0x1025d60, Func Offset: 0x170
	// Line 634, Address: 0x1025d68, Func Offset: 0x178
	// Line 639, Address: 0x1025d70, Func Offset: 0x180
	// Line 641, Address: 0x1025d78, Func Offset: 0x188
	// Func End, Address: 0x1025d8c, Func Offset: 0x19c
}

// 
// Start address: 0x1025d90
void sv_move_main(unsigned short wD0)
{
	unsigned short wD1;
	// Line 647, Address: 0x1025d90, Func Offset: 0
	// Line 650, Address: 0x1025da0, Func Offset: 0x10
	// Line 651, Address: 0x1025dbc, Func Offset: 0x2c
	// Line 652, Address: 0x1025dc8, Func Offset: 0x38
	// Line 655, Address: 0x1025dd0, Func Offset: 0x40
	// Line 656, Address: 0x1025ddc, Func Offset: 0x4c
	// Line 657, Address: 0x1025df4, Func Offset: 0x64
	// Line 660, Address: 0x1025e10, Func Offset: 0x80
	// Line 661, Address: 0x1025e20, Func Offset: 0x90
	// Line 662, Address: 0x1025e2c, Func Offset: 0x9c
	// Line 664, Address: 0x1025e34, Func Offset: 0xa4
	// Line 665, Address: 0x1025e54, Func Offset: 0xc4
	// Line 666, Address: 0x1025e60, Func Offset: 0xd0
	// Line 667, Address: 0x1025e68, Func Offset: 0xd8
	// Line 668, Address: 0x1025e88, Func Offset: 0xf8
	// Line 669, Address: 0x1025e94, Func Offset: 0x104
	// Line 671, Address: 0x1025e9c, Func Offset: 0x10c
	// Line 675, Address: 0x1025ea8, Func Offset: 0x118
	// Func End, Address: 0x1025ebc, Func Offset: 0x12c
}

// 
// Start address: 0x1025ec0
void sv_move_main1(unsigned short wD0)
{
	// Line 679, Address: 0x1025ec0, Func Offset: 0
	// Line 681, Address: 0x1025ecc, Func Offset: 0xc
	// Line 682, Address: 0x1025eec, Func Offset: 0x2c
	// Line 683, Address: 0x1025ef8, Func Offset: 0x38
	// Line 684, Address: 0x1025f00, Func Offset: 0x40
	// Line 685, Address: 0x1025f20, Func Offset: 0x60
	// Line 686, Address: 0x1025f2c, Func Offset: 0x6c
	// Line 688, Address: 0x1025f34, Func Offset: 0x74
	// Line 691, Address: 0x1025f40, Func Offset: 0x80
	// Func End, Address: 0x1025f50, Func Offset: 0x90
}

// 
// Start address: 0x1025f50
void sv_move_main2(unsigned short wD0)
{
	// Line 694, Address: 0x1025f50, Func Offset: 0
	// Line 696, Address: 0x1025f5c, Func Offset: 0xc
	// Line 697, Address: 0x1025f7c, Func Offset: 0x2c
	// Line 698, Address: 0x1025f88, Func Offset: 0x38
	// Line 699, Address: 0x1025f90, Func Offset: 0x40
	// Line 700, Address: 0x1025fb0, Func Offset: 0x60
	// Line 701, Address: 0x1025fbc, Func Offset: 0x6c
	// Line 703, Address: 0x1025fc4, Func Offset: 0x74
	// Line 706, Address: 0x1025fd0, Func Offset: 0x80
	// Func End, Address: 0x1025fe0, Func Offset: 0x90
}

// 
// Start address: 0x1025fe0
void sv_move_sub2()
{
	// Line 709, Address: 0x1025fe0, Func Offset: 0
	// Line 710, Address: 0x1025fe8, Func Offset: 0x8
	// Line 711, Address: 0x1025ff0, Func Offset: 0x10
	// Line 712, Address: 0x1025ffc, Func Offset: 0x1c
	// Func End, Address: 0x102600c, Func Offset: 0x2c
}

// 
// Start address: 0x1026010
void sv_move_sub(unsigned short wD0)
{
	_anon2 lD1;
	// Line 715, Address: 0x1026010, Func Offset: 0
	// Line 718, Address: 0x102601c, Func Offset: 0xc
	// Line 719, Address: 0x1026020, Func Offset: 0x10
	// Line 720, Address: 0x1026028, Func Offset: 0x18
	// Line 721, Address: 0x1026044, Func Offset: 0x34
	// Line 722, Address: 0x1026060, Func Offset: 0x50
	// Line 723, Address: 0x102606c, Func Offset: 0x5c
	// Line 725, Address: 0x1026074, Func Offset: 0x64
	// Line 728, Address: 0x1026080, Func Offset: 0x70
	// Func End, Address: 0x1026090, Func Offset: 0x80
}

// 
// Start address: 0x1026090
void sv_move_minus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 733, Address: 0x1026090, Func Offset: 0
	// Line 737, Address: 0x10260a0, Func Offset: 0x10
	// Line 738, Address: 0x10260bc, Func Offset: 0x2c
	// Line 739, Address: 0x10260c8, Func Offset: 0x38
	// Line 741, Address: 0x10260dc, Func Offset: 0x4c
	// Line 742, Address: 0x10260e4, Func Offset: 0x54
	// Line 743, Address: 0x10260ec, Func Offset: 0x5c
	// Line 744, Address: 0x10260f0, Func Offset: 0x60
	// Line 745, Address: 0x10260fc, Func Offset: 0x6c
	// Func End, Address: 0x1026110, Func Offset: 0x80
}

// 
// Start address: 0x1026110
void scrv_up_ch(_anon2 lD1)
{
	// Line 749, Address: 0x1026110, Func Offset: 0
	// Line 750, Address: 0x102611c, Func Offset: 0xc
	// Line 751, Address: 0x1026144, Func Offset: 0x34
	// Line 752, Address: 0x102615c, Func Offset: 0x4c
	// Line 753, Address: 0x1026168, Func Offset: 0x58
	// Line 754, Address: 0x102617c, Func Offset: 0x6c
	// Line 755, Address: 0x1026190, Func Offset: 0x80
	// Line 756, Address: 0x10261a4, Func Offset: 0x94
	// Line 759, Address: 0x10261ac, Func Offset: 0x9c
	// Line 762, Address: 0x10261b8, Func Offset: 0xa8
	// Line 764, Address: 0x10261c4, Func Offset: 0xb4
	// Func End, Address: 0x10261d4, Func Offset: 0xc4
}

// 
// Start address: 0x10261e0
void sv_move_plus(unsigned short wD1)
{
	_anon2 lD1;
	unsigned short wk;
	// Line 770, Address: 0x10261e0, Func Offset: 0
	// Line 774, Address: 0x10261f0, Func Offset: 0x10
	// Line 775, Address: 0x10261f4, Func Offset: 0x14
	// Line 776, Address: 0x10261fc, Func Offset: 0x1c
	// Line 777, Address: 0x1026208, Func Offset: 0x28
	// Line 779, Address: 0x102621c, Func Offset: 0x3c
	// Line 780, Address: 0x1026224, Func Offset: 0x44
	// Line 781, Address: 0x102622c, Func Offset: 0x4c
	// Line 783, Address: 0x1026230, Func Offset: 0x50
	// Line 785, Address: 0x102623c, Func Offset: 0x5c
	// Func End, Address: 0x1026250, Func Offset: 0x70
}

// 
// Start address: 0x1026250
void scrv_down_ch(_anon2 lD1)
{
	// Line 789, Address: 0x1026250, Func Offset: 0
	// Line 790, Address: 0x102625c, Func Offset: 0xc
	// Line 791, Address: 0x1026284, Func Offset: 0x34
	// Line 792, Address: 0x1026290, Func Offset: 0x40
	// Line 793, Address: 0x10262a4, Func Offset: 0x54
	// Line 794, Address: 0x10262b8, Func Offset: 0x68
	// Line 795, Address: 0x10262cc, Func Offset: 0x7c
	// Line 796, Address: 0x10262e0, Func Offset: 0x90
	// Line 798, Address: 0x10262e8, Func Offset: 0x98
	// Line 801, Address: 0x10262f4, Func Offset: 0xa4
	// Line 803, Address: 0x1026300, Func Offset: 0xb0
	// Func End, Address: 0x1026310, Func Offset: 0xc0
}

// 
// Start address: 0x1026310
void scrv_move(_anon2 lD1)
{
	unsigned short wD4;
	unsigned short wk;
	// Line 806, Address: 0x1026310, Func Offset: 0
	// Line 809, Address: 0x1026320, Func Offset: 0x10
	// Line 811, Address: 0x102632c, Func Offset: 0x1c
	// Line 812, Address: 0x1026334, Func Offset: 0x24
	// Line 813, Address: 0x102633c, Func Offset: 0x2c
	// Line 815, Address: 0x1026340, Func Offset: 0x30
	// Line 816, Address: 0x1026368, Func Offset: 0x58
	// Line 819, Address: 0x1026374, Func Offset: 0x64
	// Line 820, Address: 0x10263a8, Func Offset: 0x98
	// Line 821, Address: 0x10263bc, Func Offset: 0xac
	// Line 823, Address: 0x10263e8, Func Offset: 0xd8
	// Line 824, Address: 0x10263fc, Func Offset: 0xec
	// Line 826, Address: 0x1026404, Func Offset: 0xf4
	// Line 831, Address: 0x1026418, Func Offset: 0x108
	// Func End, Address: 0x102642c, Func Offset: 0x11c
}

// 
// Start address: 0x1026430
void scrollb_hv(_anon2 lD4, _anon2 lD5)
{
	_anon2 lD0;
	_anon2 lD2;
	_anon2 lD3;
	// Line 835, Address: 0x1026430, Func Offset: 0
	// Line 838, Address: 0x102643c, Func Offset: 0xc
	// Line 839, Address: 0x102644c, Func Offset: 0x1c
	// Line 840, Address: 0x102645c, Func Offset: 0x2c
	// Line 842, Address: 0x1026468, Func Offset: 0x38
	// Line 844, Address: 0x102649c, Func Offset: 0x6c
	// Line 845, Address: 0x10264b0, Func Offset: 0x80
	// Line 846, Address: 0x10264c0, Func Offset: 0x90
	// Line 847, Address: 0x10264d4, Func Offset: 0xa4
	// Line 848, Address: 0x10264e8, Func Offset: 0xb8
	// Line 851, Address: 0x10264f0, Func Offset: 0xc0
	// Line 856, Address: 0x1026504, Func Offset: 0xd4
	// Line 857, Address: 0x1026514, Func Offset: 0xe4
	// Line 858, Address: 0x1026524, Func Offset: 0xf4
	// Line 859, Address: 0x102653c, Func Offset: 0x10c
	// Line 861, Address: 0x1026548, Func Offset: 0x118
	// Line 863, Address: 0x102657c, Func Offset: 0x14c
	// Line 864, Address: 0x1026590, Func Offset: 0x160
	// Line 865, Address: 0x10265a0, Func Offset: 0x170
	// Line 866, Address: 0x10265b4, Func Offset: 0x184
	// Line 867, Address: 0x10265c8, Func Offset: 0x198
	// Line 870, Address: 0x10265d0, Func Offset: 0x1a0
	// Line 875, Address: 0x10265e4, Func Offset: 0x1b4
	// Func End, Address: 0x10265f0, Func Offset: 0x1c0
}

// 
// Start address: 0x10265f0
void scrollb_v(unsigned short wD0)
{
	unsigned short wD3;
	// Line 882, Address: 0x10265f0, Func Offset: 0
	// Line 885, Address: 0x10265fc, Func Offset: 0xc
	// Line 886, Address: 0x1026608, Func Offset: 0x18
	// Line 888, Address: 0x1026614, Func Offset: 0x24
	// Line 889, Address: 0x1026640, Func Offset: 0x50
	// Line 890, Address: 0x1026654, Func Offset: 0x64
	// Line 891, Address: 0x1026684, Func Offset: 0x94
	// Line 892, Address: 0x1026698, Func Offset: 0xa8
	// Line 895, Address: 0x10266a0, Func Offset: 0xb0
	// Line 900, Address: 0x10266b4, Func Offset: 0xc4
	// Func End, Address: 0x10266c4, Func Offset: 0xd4
}

// 
// Start address: 0x10266d0
void scrollb_h(int lD4, int flagb)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 904, Address: 0x10266d0, Func Offset: 0
	// Line 908, Address: 0x10266e0, Func Offset: 0x10
	// Line 909, Address: 0x10266ec, Func Offset: 0x1c
	// Line 910, Address: 0x10266fc, Func Offset: 0x2c
	// Line 912, Address: 0x1026708, Func Offset: 0x38
	// Line 913, Address: 0x1026710, Func Offset: 0x40
	// Line 914, Address: 0x1026718, Func Offset: 0x48
	// Line 916, Address: 0x1026724, Func Offset: 0x54
	// Line 917, Address: 0x1026730, Func Offset: 0x60
	// Line 918, Address: 0x1026744, Func Offset: 0x74
	// Line 919, Address: 0x1026750, Func Offset: 0x80
	// Line 920, Address: 0x1026764, Func Offset: 0x94
	// Line 921, Address: 0x1026774, Func Offset: 0xa4
	// Line 922, Address: 0x1026788, Func Offset: 0xb8
	// Line 923, Address: 0x10267a4, Func Offset: 0xd4
	// Line 926, Address: 0x10267ac, Func Offset: 0xdc
	// Line 931, Address: 0x10267cc, Func Offset: 0xfc
	// Func End, Address: 0x10267dc, Func Offset: 0x10c
}

// 
// Start address: 0x10267e0
void scrollc_h(int lD4, int flagc)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 934, Address: 0x10267e0, Func Offset: 0
	// Line 938, Address: 0x10267f0, Func Offset: 0x10
	// Line 939, Address: 0x10267fc, Func Offset: 0x1c
	// Line 940, Address: 0x102680c, Func Offset: 0x2c
	// Line 942, Address: 0x1026818, Func Offset: 0x38
	// Line 943, Address: 0x1026820, Func Offset: 0x40
	// Line 944, Address: 0x1026828, Func Offset: 0x48
	// Line 946, Address: 0x1026834, Func Offset: 0x54
	// Line 947, Address: 0x1026840, Func Offset: 0x60
	// Line 948, Address: 0x1026854, Func Offset: 0x74
	// Line 949, Address: 0x1026860, Func Offset: 0x80
	// Line 950, Address: 0x1026874, Func Offset: 0x94
	// Line 951, Address: 0x1026884, Func Offset: 0xa4
	// Line 952, Address: 0x1026898, Func Offset: 0xb8
	// Line 953, Address: 0x10268b4, Func Offset: 0xd4
	// Line 956, Address: 0x10268bc, Func Offset: 0xdc
	// Line 961, Address: 0x10268dc, Func Offset: 0xfc
	// Func End, Address: 0x10268ec, Func Offset: 0x10c
}

// 
// Start address: 0x10268f0
void scrollz_h(int lD4, int flagz)
{
	_anon2 lD0;
	_anon2 lD1;
	_anon2 lD2;
	unsigned char bD3;
	// Line 973, Address: 0x10268f0, Func Offset: 0
	// Line 977, Address: 0x1026900, Func Offset: 0x10
	// Line 978, Address: 0x102690c, Func Offset: 0x1c
	// Line 979, Address: 0x102691c, Func Offset: 0x2c
	// Line 981, Address: 0x1026928, Func Offset: 0x38
	// Line 982, Address: 0x1026930, Func Offset: 0x40
	// Line 983, Address: 0x1026938, Func Offset: 0x48
	// Line 985, Address: 0x1026944, Func Offset: 0x54
	// Line 986, Address: 0x1026950, Func Offset: 0x60
	// Line 987, Address: 0x1026964, Func Offset: 0x74
	// Line 988, Address: 0x1026970, Func Offset: 0x80
	// Line 989, Address: 0x1026984, Func Offset: 0x94
	// Line 990, Address: 0x1026994, Func Offset: 0xa4
	// Line 991, Address: 0x10269a8, Func Offset: 0xb8
	// Line 992, Address: 0x10269c4, Func Offset: 0xd4
	// Line 995, Address: 0x10269cc, Func Offset: 0xdc
	// Line 1000, Address: 0x10269ec, Func Offset: 0xfc
	// Func End, Address: 0x10269fc, Func Offset: 0x10c
}

// 
// Start address: 0x1026a00
void scrollwrtadva()
{
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	int VramBase;
	unsigned char* pScrFlag;
	unsigned char* pMapWk;
	// Line 1014, Address: 0x1026a00, Func Offset: 0
	// Line 1020, Address: 0x1026a1c, Func Offset: 0x1c
	// Line 1021, Address: 0x1026a20, Func Offset: 0x20
	// Line 1022, Address: 0x1026a2c, Func Offset: 0x2c
	// Line 1023, Address: 0x1026a38, Func Offset: 0x38
	// Line 1024, Address: 0x1026a40, Func Offset: 0x40
	// Line 1025, Address: 0x1026a48, Func Offset: 0x48
	// Line 1027, Address: 0x1026a5c, Func Offset: 0x5c
	// Line 1028, Address: 0x1026a68, Func Offset: 0x68
	// Line 1029, Address: 0x1026a74, Func Offset: 0x74
	// Line 1030, Address: 0x1026a7c, Func Offset: 0x7c
	// Line 1032, Address: 0x1026a84, Func Offset: 0x84
	// Func End, Address: 0x1026aa8, Func Offset: 0xa8
}

// 
// Start address: 0x1026ab0
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
	// Line 1045, Address: 0x1026ab0, Func Offset: 0
	// Line 1054, Address: 0x1026ad0, Func Offset: 0x20
	// Line 1055, Address: 0x1026ad4, Func Offset: 0x24
	// Line 1056, Address: 0x1026ae0, Func Offset: 0x30
	// Line 1057, Address: 0x1026aec, Func Offset: 0x3c
	// Line 1058, Address: 0x1026af4, Func Offset: 0x44
	// Line 1059, Address: 0x1026afc, Func Offset: 0x4c
	// Line 1061, Address: 0x1026b10, Func Offset: 0x60
	// Line 1062, Address: 0x1026b14, Func Offset: 0x64
	// Line 1063, Address: 0x1026b20, Func Offset: 0x70
	// Line 1064, Address: 0x1026b2c, Func Offset: 0x7c
	// Line 1065, Address: 0x1026b34, Func Offset: 0x84
	// Line 1067, Address: 0x1026b3c, Func Offset: 0x8c
	// Line 1068, Address: 0x1026b48, Func Offset: 0x98
	// Line 1069, Address: 0x1026b5c, Func Offset: 0xac
	// Line 1071, Address: 0x1026b68, Func Offset: 0xb8
	// Line 1072, Address: 0x1026b70, Func Offset: 0xc0
	// Line 1074, Address: 0x1026b78, Func Offset: 0xc8
	// Line 1076, Address: 0x1026b98, Func Offset: 0xe8
	// Line 1082, Address: 0x1026bc4, Func Offset: 0x114
	// Line 1083, Address: 0x1026bd8, Func Offset: 0x128
	// Line 1085, Address: 0x1026be4, Func Offset: 0x134
	// Line 1086, Address: 0x1026bec, Func Offset: 0x13c
	// Line 1087, Address: 0x1026bf4, Func Offset: 0x144
	// Line 1089, Address: 0x1026c14, Func Offset: 0x164
	// Line 1095, Address: 0x1026c40, Func Offset: 0x190
	// Line 1096, Address: 0x1026c54, Func Offset: 0x1a4
	// Line 1098, Address: 0x1026c60, Func Offset: 0x1b0
	// Line 1099, Address: 0x1026c68, Func Offset: 0x1b8
	// Line 1100, Address: 0x1026c70, Func Offset: 0x1c0
	// Line 1102, Address: 0x1026c90, Func Offset: 0x1e0
	// Line 1108, Address: 0x1026cbc, Func Offset: 0x20c
	// Line 1109, Address: 0x1026cd0, Func Offset: 0x220
	// Line 1111, Address: 0x1026cdc, Func Offset: 0x22c
	// Line 1112, Address: 0x1026ce4, Func Offset: 0x234
	// Line 1113, Address: 0x1026cec, Func Offset: 0x23c
	// Line 1115, Address: 0x1026d0c, Func Offset: 0x25c
	// Line 1124, Address: 0x1026d38, Func Offset: 0x288
	// Func End, Address: 0x1026d60, Func Offset: 0x2b0
}

// 
// Start address: 0x1026d60
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
	// Line 1141, Address: 0x1026d60, Func Offset: 0
	// Line 1152, Address: 0x1026d8c, Func Offset: 0x2c
	// Line 1154, Address: 0x1026d94, Func Offset: 0x34
	// Line 1155, Address: 0x1026dac, Func Offset: 0x4c
	// Line 1156, Address: 0x1026dc0, Func Offset: 0x60
	// Line 1158, Address: 0x1026dc8, Func Offset: 0x68
	// Line 1160, Address: 0x1026ddc, Func Offset: 0x7c
	// Line 1161, Address: 0x1026df4, Func Offset: 0x94
	// Line 1162, Address: 0x1026e08, Func Offset: 0xa8
	// Line 1163, Address: 0x1026e10, Func Offset: 0xb0
	// Line 1165, Address: 0x1026e18, Func Offset: 0xb8
	// Line 1166, Address: 0x1026e2c, Func Offset: 0xcc
	// Line 1171, Address: 0x1026e34, Func Offset: 0xd4
	// Line 1172, Address: 0x1026e84, Func Offset: 0x124
	// Line 1173, Address: 0x1026e8c, Func Offset: 0x12c
	// Line 1179, Address: 0x1026eac, Func Offset: 0x14c
	// Line 1180, Address: 0x1026ecc, Func Offset: 0x16c
	// Line 1181, Address: 0x1026ef0, Func Offset: 0x190
	// Line 1182, Address: 0x1026efc, Func Offset: 0x19c
	// Line 1183, Address: 0x1026f04, Func Offset: 0x1a4
	// Line 1185, Address: 0x1026f24, Func Offset: 0x1c4
	// Line 1189, Address: 0x1026f50, Func Offset: 0x1f0
	// Line 1192, Address: 0x1026f58, Func Offset: 0x1f8
	// Line 1193, Address: 0x1026f5c, Func Offset: 0x1fc
	// Line 1197, Address: 0x1026f7c, Func Offset: 0x21c
	// Line 1204, Address: 0x1026fa8, Func Offset: 0x248
	// Line 1211, Address: 0x1026fbc, Func Offset: 0x25c
	// Line 1212, Address: 0x1026fc4, Func Offset: 0x264
	// Line 1213, Address: 0x1026fcc, Func Offset: 0x26c
	// Line 1214, Address: 0x1026fe4, Func Offset: 0x284
	// Line 1215, Address: 0x1027004, Func Offset: 0x2a4
	// Line 1219, Address: 0x102700c, Func Offset: 0x2ac
	// Line 1221, Address: 0x102703c, Func Offset: 0x2dc
	// Line 1222, Address: 0x1027048, Func Offset: 0x2e8
	// Line 1226, Address: 0x1027058, Func Offset: 0x2f8
	// Line 1227, Address: 0x1027064, Func Offset: 0x304
	// Line 1228, Address: 0x1027084, Func Offset: 0x324
	// Line 1229, Address: 0x1027090, Func Offset: 0x330
	// Line 1230, Address: 0x10270bc, Func Offset: 0x35c
	// Line 1231, Address: 0x10270dc, Func Offset: 0x37c
	// Line 1233, Address: 0x1027100, Func Offset: 0x3a0
	// Line 1236, Address: 0x1027124, Func Offset: 0x3c4
	// Line 1238, Address: 0x1027144, Func Offset: 0x3e4
	// Line 1241, Address: 0x1027158, Func Offset: 0x3f8
	// Line 1242, Address: 0x1027164, Func Offset: 0x404
	// Line 1243, Address: 0x1027174, Func Offset: 0x414
	// Line 1245, Address: 0x102717c, Func Offset: 0x41c
	// Func End, Address: 0x10271a4, Func Offset: 0x444
}

// 
// Start address: 0x10271b0
void scrollwrtc()
{
	// Line 1251, Address: 0x10271b0, Func Offset: 0
	// Func End, Address: 0x10271b8, Func Offset: 0x8
}

// 
// Start address: 0x10271c0
void scrollwrtz()
{
	// Line 1256, Address: 0x10271c0, Func Offset: 0
	// Func End, Address: 0x10271c8, Func Offset: 0x8
}

// 
// Start address: 0x10271d0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1274, Address: 0x10271d0, Func Offset: 0
	// Line 1287, Address: 0x10271f8, Func Offset: 0x28
	// Line 1290, Address: 0x1027218, Func Offset: 0x48
	// Line 1291, Address: 0x102722c, Func Offset: 0x5c
	// Line 1292, Address: 0x1027240, Func Offset: 0x70
	// Line 1293, Address: 0x1027254, Func Offset: 0x84
	// Line 1295, Address: 0x1027268, Func Offset: 0x98
	// Line 1296, Address: 0x1027274, Func Offset: 0xa4
	// Line 1297, Address: 0x1027288, Func Offset: 0xb8
	// Func End, Address: 0x1027298, Func Offset: 0xc8
}

// 
// Start address: 0x10272a0
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1301, Address: 0x10272a0, Func Offset: 0
	// Line 1305, Address: 0x10272c8, Func Offset: 0x28
	// Line 1308, Address: 0x10272e8, Func Offset: 0x48
	// Line 1309, Address: 0x10272fc, Func Offset: 0x5c
	// Line 1310, Address: 0x1027310, Func Offset: 0x70
	// Line 1311, Address: 0x1027324, Func Offset: 0x84
	// Line 1313, Address: 0x1027338, Func Offset: 0x98
	// Line 1314, Address: 0x1027344, Func Offset: 0xa4
	// Line 1315, Address: 0x1027358, Func Offset: 0xb8
	// Func End, Address: 0x1027368, Func Offset: 0xc8
}

// 
// Start address: 0x1027370
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1335, Address: 0x1027370, Func Offset: 0
	// Line 1339, Address: 0x1027398, Func Offset: 0x28
	// Line 1342, Address: 0x10273b8, Func Offset: 0x48
	// Line 1343, Address: 0x10273cc, Func Offset: 0x5c
	// Line 1344, Address: 0x10273dc, Func Offset: 0x6c
	// Line 1345, Address: 0x10273f0, Func Offset: 0x80
	// Line 1347, Address: 0x1027400, Func Offset: 0x90
	// Line 1348, Address: 0x102740c, Func Offset: 0x9c
	// Line 1349, Address: 0x1027420, Func Offset: 0xb0
	// Func End, Address: 0x1027430, Func Offset: 0xc0
}

// 
// Start address: 0x1027430
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
	// Line 1368, Address: 0x1027430, Func Offset: 0
	// Line 1369, Address: 0x1027464, Func Offset: 0x34
	// Line 1374, Address: 0x1027468, Func Offset: 0x38
	// Line 1376, Address: 0x1027478, Func Offset: 0x48
	// Line 1377, Address: 0x102747c, Func Offset: 0x4c
	// Line 1378, Address: 0x1027484, Func Offset: 0x54
	// Line 1380, Address: 0x1027494, Func Offset: 0x64
	// Line 1382, Address: 0x1027498, Func Offset: 0x68
	// Line 1383, Address: 0x10274a0, Func Offset: 0x70
	// Line 1386, Address: 0x10274a8, Func Offset: 0x78
	// Line 1387, Address: 0x10274b0, Func Offset: 0x80
	// Line 1388, Address: 0x10274bc, Func Offset: 0x8c
	// Line 1390, Address: 0x10274c8, Func Offset: 0x98
	// Line 1391, Address: 0x10274d0, Func Offset: 0xa0
	// Line 1392, Address: 0x10274d8, Func Offset: 0xa8
	// Line 1393, Address: 0x10274e0, Func Offset: 0xb0
	// Line 1395, Address: 0x10274ec, Func Offset: 0xbc
	// Line 1396, Address: 0x10274f4, Func Offset: 0xc4
	// Line 1397, Address: 0x10274fc, Func Offset: 0xcc
	// Line 1398, Address: 0x1027504, Func Offset: 0xd4
	// Line 1400, Address: 0x1027510, Func Offset: 0xe0
	// Line 1401, Address: 0x1027518, Func Offset: 0xe8
	// Line 1402, Address: 0x1027520, Func Offset: 0xf0
	// Line 1405, Address: 0x1027528, Func Offset: 0xf8
	// Line 1406, Address: 0x1027530, Func Offset: 0x100
	// Line 1409, Address: 0x1027538, Func Offset: 0x108
	// Line 1410, Address: 0x102757c, Func Offset: 0x14c
	// Line 1411, Address: 0x10275c0, Func Offset: 0x190
	// Line 1412, Address: 0x1027604, Func Offset: 0x1d4
	// Line 1414, Address: 0x1027648, Func Offset: 0x218
	// Func End, Address: 0x1027678, Func Offset: 0x248
}

// 
// Start address: 0x1027680
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1432, Address: 0x1027680, Func Offset: 0
	// Line 1433, Address: 0x10276a0, Func Offset: 0x20
	// Line 1434, Address: 0x10276c0, Func Offset: 0x40
	// Func End, Address: 0x10276d0, Func Offset: 0x50
}

// 
// Start address: 0x10276d0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1436, Address: 0x10276d0, Func Offset: 0
	// Line 1437, Address: 0x10276f0, Func Offset: 0x20
	// Line 1438, Address: 0x10276f4, Func Offset: 0x24
	// Line 1439, Address: 0x1027714, Func Offset: 0x44
	// Func End, Address: 0x1027724, Func Offset: 0x54
}

// 
// Start address: 0x1027730
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1446, Address: 0x1027730, Func Offset: 0
	// Line 1452, Address: 0x1027760, Func Offset: 0x30
	// Line 1453, Address: 0x1027770, Func Offset: 0x40
	// Line 1459, Address: 0x1027780, Func Offset: 0x50
	// Line 1460, Address: 0x102779c, Func Offset: 0x6c
	// Line 1461, Address: 0x10277a0, Func Offset: 0x70
	// Line 1462, Address: 0x10277bc, Func Offset: 0x8c
	// Line 1463, Address: 0x10277c0, Func Offset: 0x90
	// Line 1464, Address: 0x10277e0, Func Offset: 0xb0
	// Line 1465, Address: 0x10277e8, Func Offset: 0xb8
	// Line 1466, Address: 0x1027808, Func Offset: 0xd8
	// Line 1467, Address: 0x1027810, Func Offset: 0xe0
	// Line 1468, Address: 0x1027858, Func Offset: 0x128
	// Line 1470, Address: 0x1027864, Func Offset: 0x134
	// Line 1472, Address: 0x1027880, Func Offset: 0x150
	// Line 1477, Address: 0x1027888, Func Offset: 0x158
	// Line 1478, Address: 0x1027894, Func Offset: 0x164
	// Line 1481, Address: 0x10278a0, Func Offset: 0x170
	// Line 1482, Address: 0x10278a8, Func Offset: 0x178
	// Line 1483, Address: 0x10278c8, Func Offset: 0x198
	// Line 1484, Address: 0x10278e4, Func Offset: 0x1b4
	// Line 1485, Address: 0x10278ec, Func Offset: 0x1bc
	// Line 1486, Address: 0x102790c, Func Offset: 0x1dc
	// Line 1488, Address: 0x1027928, Func Offset: 0x1f8
	// Line 1489, Address: 0x1027930, Func Offset: 0x200
	// Line 1490, Address: 0x1027938, Func Offset: 0x208
	// Line 1491, Address: 0x1027944, Func Offset: 0x214
	// Line 1492, Address: 0x102795c, Func Offset: 0x22c
	// Line 1494, Address: 0x102796c, Func Offset: 0x23c
	// Line 1497, Address: 0x1027978, Func Offset: 0x248
	// Line 1498, Address: 0x1027980, Func Offset: 0x250
	// Line 1499, Address: 0x1027984, Func Offset: 0x254
	// Func End, Address: 0x10279a4, Func Offset: 0x274
}

// 
// Start address: 0x10279b0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1519, Address: 0x10279b0, Func Offset: 0
	// Line 1527, Address: 0x10279d8, Func Offset: 0x28
	// Line 1528, Address: 0x1027a3c, Func Offset: 0x8c
	// Line 1534, Address: 0x1027a44, Func Offset: 0x94
	// Line 1535, Address: 0x1027a4c, Func Offset: 0x9c
	// Line 1536, Address: 0x1027a6c, Func Offset: 0xbc
	// Line 1537, Address: 0x1027a88, Func Offset: 0xd8
	// Line 1538, Address: 0x1027a90, Func Offset: 0xe0
	// Line 1539, Address: 0x1027ab0, Func Offset: 0x100
	// Line 1542, Address: 0x1027acc, Func Offset: 0x11c
	// Line 1543, Address: 0x1027ad4, Func Offset: 0x124
	// Line 1544, Address: 0x1027adc, Func Offset: 0x12c
	// Line 1545, Address: 0x1027ae8, Func Offset: 0x138
	// Line 1546, Address: 0x1027b00, Func Offset: 0x150
	// Line 1547, Address: 0x1027b08, Func Offset: 0x158
	// Line 1552, Address: 0x1027b18, Func Offset: 0x168
	// Line 1555, Address: 0x1027b24, Func Offset: 0x174
	// Line 1556, Address: 0x1027b2c, Func Offset: 0x17c
	// Line 1557, Address: 0x1027b30, Func Offset: 0x180
	// Func End, Address: 0x1027b4c, Func Offset: 0x19c
}

// 
// Start address: 0x1027b50
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1571, Address: 0x1027b50, Func Offset: 0
	// Line 1578, Address: 0x1027b6c, Func Offset: 0x1c
	// Line 1579, Address: 0x1027b70, Func Offset: 0x20
	// Line 1580, Address: 0x1027b78, Func Offset: 0x28
	// Line 1581, Address: 0x1027b9c, Func Offset: 0x4c
	// Line 1582, Address: 0x1027ba8, Func Offset: 0x58
	// Line 1583, Address: 0x1027bc0, Func Offset: 0x70
	// Line 1584, Address: 0x1027bd4, Func Offset: 0x84
	// Line 1589, Address: 0x1027bec, Func Offset: 0x9c
	// Func End, Address: 0x1027c04, Func Offset: 0xb4
}

// 
// Start address: 0x1027c10
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1603, Address: 0x1027c10, Func Offset: 0
	// Line 1604, Address: 0x1027c1c, Func Offset: 0xc
	// Line 1605, Address: 0x1027c48, Func Offset: 0x38
	// Line 1606, Address: 0x1027c94, Func Offset: 0x84
	// Line 1607, Address: 0x1027cc0, Func Offset: 0xb0
	// Line 1609, Address: 0x1027d0c, Func Offset: 0xfc
	// Line 1615, Address: 0x1027d18, Func Offset: 0x108
	// Line 1616, Address: 0x1027d1c, Func Offset: 0x10c
	// Func End, Address: 0x1027d28, Func Offset: 0x118
}

// 
// Start address: 0x1027d30
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1633, Address: 0x1027d30, Func Offset: 0
	// Line 1634, Address: 0x1027d4c, Func Offset: 0x1c
	// Line 1636, Address: 0x1027d68, Func Offset: 0x38
	// Func End, Address: 0x1027d78, Func Offset: 0x48
}

// 
// Start address: 0x1027d80
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1638, Address: 0x1027d80, Func Offset: 0
	// Line 1639, Address: 0x1027d9c, Func Offset: 0x1c
	// Line 1640, Address: 0x1027da0, Func Offset: 0x20
	// Line 1642, Address: 0x1027dbc, Func Offset: 0x3c
	// Func End, Address: 0x1027dcc, Func Offset: 0x4c
}

// 
// Start address: 0x1027dd0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1644, Address: 0x1027dd0, Func Offset: 0
	// Line 1645, Address: 0x1027de4, Func Offset: 0x14
	// Line 1647, Address: 0x1027e00, Func Offset: 0x30
	// Func End, Address: 0x1027e10, Func Offset: 0x40
}

// 
// Start address: 0x1027e10
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1649, Address: 0x1027e10, Func Offset: 0
	// Line 1650, Address: 0x1027e2c, Func Offset: 0x1c
	// Line 1652, Address: 0x1027e48, Func Offset: 0x38
	// Func End, Address: 0x1027e58, Func Offset: 0x48
}

// 
// Start address: 0x1027e60
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1654, Address: 0x1027e60, Func Offset: 0
	// Line 1655, Address: 0x1027e78, Func Offset: 0x18
	// Line 1656, Address: 0x1027e88, Func Offset: 0x28
	// Line 1657, Address: 0x1027e98, Func Offset: 0x38
	// Line 1658, Address: 0x1027ea4, Func Offset: 0x44
	// Line 1660, Address: 0x1027eb0, Func Offset: 0x50
	// Line 1661, Address: 0x1027edc, Func Offset: 0x7c
	// Line 1664, Address: 0x1027f08, Func Offset: 0xa8
	// Func End, Address: 0x1027f14, Func Offset: 0xb4
}

// 
// Start address: 0x1027f20
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1680, Address: 0x1027f20, Func Offset: 0
	// Line 1685, Address: 0x1027f38, Func Offset: 0x18
	// Line 1686, Address: 0x1027f44, Func Offset: 0x24
	// Line 1687, Address: 0x1027f50, Func Offset: 0x30
	// Line 1688, Address: 0x1027f58, Func Offset: 0x38
	// Line 1689, Address: 0x1027f5c, Func Offset: 0x3c
	// Line 1693, Address: 0x1027f74, Func Offset: 0x54
	// Line 1694, Address: 0x1027f7c, Func Offset: 0x5c
	// Line 1695, Address: 0x1027f80, Func Offset: 0x60
	// Line 1697, Address: 0x1027f90, Func Offset: 0x70
	// Func End, Address: 0x1027fb0, Func Offset: 0x90
}

// 
// Start address: 0x1027fb0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1700, Address: 0x1027fb0, Func Offset: 0
	// Line 1701, Address: 0x1027fc8, Func Offset: 0x18
	// Line 1702, Address: 0x1027fe8, Func Offset: 0x38
	// Func End, Address: 0x1027ff8, Func Offset: 0x48
}

// 
// Start address: 0x1028000
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1707, Address: 0x1028000, Func Offset: 0
	// Line 1711, Address: 0x1028020, Func Offset: 0x20
	// Line 1714, Address: 0x102803c, Func Offset: 0x3c
	// Line 1718, Address: 0x1028064, Func Offset: 0x64
	// Line 1719, Address: 0x1028070, Func Offset: 0x70
	// Line 1721, Address: 0x1028098, Func Offset: 0x98
	// Func End, Address: 0x10280a8, Func Offset: 0xa8
}

// 
// Start address: 0x10280b0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	_anon2 temp;
	// Line 1727, Address: 0x10280b0, Func Offset: 0
	// Line 1732, Address: 0x10280cc, Func Offset: 0x1c
	// Line 1733, Address: 0x10280d4, Func Offset: 0x24
	// Line 1736, Address: 0x10280dc, Func Offset: 0x2c
	// Line 1737, Address: 0x10280e0, Func Offset: 0x30
	// Line 1738, Address: 0x10280ec, Func Offset: 0x3c
	// Line 1739, Address: 0x10280f8, Func Offset: 0x48
	// Line 1740, Address: 0x102810c, Func Offset: 0x5c
	// Line 1741, Address: 0x102812c, Func Offset: 0x7c
	// Line 1742, Address: 0x1028134, Func Offset: 0x84
	// Line 1743, Address: 0x1028158, Func Offset: 0xa8
	// Func End, Address: 0x1028174, Func Offset: 0xc4
}

// 
// Start address: 0x1028180
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1765, Address: 0x1028180, Func Offset: 0
	// Line 1770, Address: 0x10281a8, Func Offset: 0x28
	// Line 1771, Address: 0x10281b8, Func Offset: 0x38
	// Line 1773, Address: 0x10281d4, Func Offset: 0x54
	// Line 1774, Address: 0x10281f8, Func Offset: 0x78
	// Line 1775, Address: 0x1028220, Func Offset: 0xa0
	// Line 1776, Address: 0x102822c, Func Offset: 0xac
	// Line 1777, Address: 0x1028234, Func Offset: 0xb4
	// Line 1780, Address: 0x1028250, Func Offset: 0xd0
	// Line 1784, Address: 0x1028278, Func Offset: 0xf8
	// Line 1787, Address: 0x1028280, Func Offset: 0x100
	// Line 1788, Address: 0x1028284, Func Offset: 0x104
	// Line 1792, Address: 0x10282a0, Func Offset: 0x120
	// Line 1799, Address: 0x10282c8, Func Offset: 0x148
	// Func End, Address: 0x10282e4, Func Offset: 0x164
}

// 
// Start address: 0x10282f0
void mapinit()
{
	// Line 1803, Address: 0x10282f0, Func Offset: 0
	// Line 1805, Address: 0x10282f8, Func Offset: 0x8
	// Line 1806, Address: 0x102830c, Func Offset: 0x1c
	// Line 1808, Address: 0x1028320, Func Offset: 0x30
	// Line 1809, Address: 0x1028338, Func Offset: 0x48
	// Line 1810, Address: 0x1028358, Func Offset: 0x68
	// Func End, Address: 0x1028368, Func Offset: 0x78
}

// 
// Start address: 0x1028370
void mapset()
{
	// Line 1821, Address: 0x1028370, Func Offset: 0
	// Func End, Address: 0x1028378, Func Offset: 0x8
}

