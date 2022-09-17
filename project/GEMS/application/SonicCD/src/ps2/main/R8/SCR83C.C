typedef struct _anon0;
typedef union _anon1;
typedef struct tagPOINT;
typedef struct _anon2;
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

typedef int(*type_16)(int, int, int, int, int);

typedef _anon13 type_0[20];
typedef _anon13 type_1[0];
typedef _anon1* type_2[8];
typedef short type_3[6];
typedef char type_4[5];
typedef unsigned short type_5[4];
typedef unsigned short type_6[4][1024];
typedef unsigned char type_7[4];
typedef short type_8[2];
typedef short type_9[2][8];
typedef unsigned char type_10[2];
typedef unsigned char type_11[64];
typedef unsigned char type_12[64][8];
typedef unsigned char type_13[22];
typedef unsigned char type_14[64];
typedef unsigned char type_15[64][8];
typedef short type_17[256];
typedef unsigned char type_18[33];
typedef _anon2 type_19[128];
typedef _anon1* type_20[8];
typedef char type_21[5];
typedef short type_22[2];
typedef short type_23[2][1];

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

struct tagPOINT
{
	int x;
	int y;
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

unsigned char z81awrttbl[33];
_anon1* vblockwrtbtbl[8];
_anon1* mapwrt_tbl[8];
_anon2 actwk[128];
unsigned char main_play;
short scr_dir_tbl[6];
short scra_hline;
short scra_vline;
unsigned char scra_v_count;
unsigned char scra_h_count;
short scra_h_keep;
short scralim_down;
short scralim_n_down;
short scralim_up;
short scralim_n_up;
short scralim_right;
short scralim_n_right;
short scralim_left;
short scralim_n_left;
short scrar_no;
_anon6 scr_timer;
_anon11 scr_die;
_anon11 zone_flag;
unsigned char scrh_flag;
unsigned char scrv_flag;
short endplpositbl[2][8];
short playpositbl[2][1];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon1 scra_v_posit;
_anon1 scra_h_posit;
_anon6 demoflag;
short enddemono;
unsigned char plflag;
_anon1 scrb_h_posit;
_anon1 scrz_h_posit;
_anon1 scrc_h_posit;
_anon1 scrz_v_posit;
_anon1 scrc_v_posit;
_anon1 scrb_v_posit;
short hscrollwork[256];
_anon1* lphscrollbuff;
_anon11 scrflagz;
_anon11 scrflagc;
_anon11 scrflagb;
_anon1 vscroll;
short scra_hz;
_anon11 scrflaga;
_anon6 scroll_start;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
short scra_vz;
unsigned char limmoveflag;
_anon11 scrflagaw;
unsigned char mapwka[64][8];
_anon1 scra_v_posiw;
_anon1 scra_h_posiw;
_anon11 scrflagbw;
unsigned char mapwkb[64][8];
_anon1 scrb_v_posiw;
_anon1 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon3 mapinittbl;

_anon2* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void z82bline0(short** ppHscw);
void z82bline1(short** ppHscw);
void line_div(int hWk1, int* hWk2, short sD6);
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk);
void scrollb_v(short yPos);
void scrollb_h(int xoffs, int flgbit);
void scrollc_h(int xoffs, int flgbit);
void scrollz_h(int xoffs, int flgbit);
void scroll_h();
void scrh_move();
void scroll_v();
void sv_move_main(short yPos);
void sv_move_main2(short yPos);
void sv_move_sub(short yPos);
void sv_move_sub2();
void sv_move_minus(short speed);
void scrv_up_ch(_anon1 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon1 lSpd);
void scrv_move(_anon1 lSpd);
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
void divdevset();
void enecginit();

// 
// Start address: 0x101d850
_anon2* main_chk()
{
	// Line 147, Address: 0x101d850, Func Offset: 0
	// Line 148, Address: 0x101d864, Func Offset: 0x14
	// Line 150, Address: 0x101d874, Func Offset: 0x24
	// Line 152, Address: 0x101d87c, Func Offset: 0x2c
	// Func End, Address: 0x101d884, Func Offset: 0x34
}

// 
// Start address: 0x101d890
void scr_set()
{
	short* pScrTbl;
	// Line 190, Address: 0x101d890, Func Offset: 0
	// Line 193, Address: 0x101d89c, Func Offset: 0xc
	// Line 194, Address: 0x101d8b0, Func Offset: 0x20
	// Line 195, Address: 0x101d8c4, Func Offset: 0x34
	// Line 197, Address: 0x101d8cc, Func Offset: 0x3c
	// Line 198, Address: 0x101d8d4, Func Offset: 0x44
	// Line 199, Address: 0x101d8e0, Func Offset: 0x50
	// Line 200, Address: 0x101d8e4, Func Offset: 0x54
	// Line 201, Address: 0x101d8f8, Func Offset: 0x68
	// Line 202, Address: 0x101d8fc, Func Offset: 0x6c
	// Line 203, Address: 0x101d910, Func Offset: 0x80
	// Line 204, Address: 0x101d914, Func Offset: 0x84
	// Line 205, Address: 0x101d928, Func Offset: 0x98
	// Line 206, Address: 0x101d92c, Func Offset: 0x9c
	// Line 207, Address: 0x101d940, Func Offset: 0xb0
	// Line 208, Address: 0x101d960, Func Offset: 0xd0
	// Line 209, Address: 0x101d964, Func Offset: 0xd4
	// Line 210, Address: 0x101d970, Func Offset: 0xe0
	// Line 212, Address: 0x101d97c, Func Offset: 0xec
	// Line 213, Address: 0x101d988, Func Offset: 0xf8
	// Line 215, Address: 0x101d994, Func Offset: 0x104
	// Line 216, Address: 0x101d99c, Func Offset: 0x10c
	// Func End, Address: 0x101d9b0, Func Offset: 0x120
}

// 
// Start address: 0x101d9b0
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 265, Address: 0x101d9b0, Func Offset: 0
	// Line 268, Address: 0x101d9c4, Func Offset: 0x14
	// Line 269, Address: 0x101d9d4, Func Offset: 0x24
	// Line 270, Address: 0x101d9dc, Func Offset: 0x2c
	// Line 272, Address: 0x101d9ec, Func Offset: 0x3c
	// Line 273, Address: 0x101da04, Func Offset: 0x54
	// Line 274, Address: 0x101da14, Func Offset: 0x64
	// Line 275, Address: 0x101da1c, Func Offset: 0x6c
	// Line 277, Address: 0x101da20, Func Offset: 0x70
	// Line 279, Address: 0x101da28, Func Offset: 0x78
	// Line 280, Address: 0x101da48, Func Offset: 0x98
	// Line 281, Address: 0x101da6c, Func Offset: 0xbc
	// Line 283, Address: 0x101da74, Func Offset: 0xc4
	// Line 287, Address: 0x101da94, Func Offset: 0xe4
	// Line 288, Address: 0x101daa8, Func Offset: 0xf8
	// Line 292, Address: 0x101dabc, Func Offset: 0x10c
	// Line 293, Address: 0x101dad0, Func Offset: 0x120
	// Line 294, Address: 0x101dadc, Func Offset: 0x12c
	// Line 295, Address: 0x101dae4, Func Offset: 0x134
	// Line 299, Address: 0x101dae8, Func Offset: 0x138
	// Line 300, Address: 0x101db0c, Func Offset: 0x15c
	// Line 304, Address: 0x101db1c, Func Offset: 0x16c
	// Line 306, Address: 0x101db24, Func Offset: 0x174
	// Line 307, Address: 0x101db38, Func Offset: 0x188
	// Line 308, Address: 0x101db44, Func Offset: 0x194
	// Line 309, Address: 0x101db4c, Func Offset: 0x19c
	// Line 313, Address: 0x101db50, Func Offset: 0x1a0
	// Line 314, Address: 0x101db74, Func Offset: 0x1c4
	// Line 318, Address: 0x101db84, Func Offset: 0x1d4
	// Line 320, Address: 0x101db8c, Func Offset: 0x1dc
	// Line 323, Address: 0x101db9c, Func Offset: 0x1ec
	// Line 324, Address: 0x101dbac, Func Offset: 0x1fc
	// Line 325, Address: 0x101dbbc, Func Offset: 0x20c
	// Line 326, Address: 0x101dbcc, Func Offset: 0x21c
	// Line 327, Address: 0x101dbdc, Func Offset: 0x22c
	// Func End, Address: 0x101dbf8, Func Offset: 0x248
}

// 
// Start address: 0x101dc00
void scrbinit(short sXpos, short sYpos)
{
	_anon1 lYwk;
	// Line 348, Address: 0x101dc00, Func Offset: 0
	// Line 351, Address: 0x101dc0c, Func Offset: 0xc
	// Line 352, Address: 0x101dc14, Func Offset: 0x14
	// Line 354, Address: 0x101dc18, Func Offset: 0x18
	// Line 355, Address: 0x101dc24, Func Offset: 0x24
	// Line 356, Address: 0x101dc30, Func Offset: 0x30
	// Line 357, Address: 0x101dc3c, Func Offset: 0x3c
	// Line 359, Address: 0x101dc48, Func Offset: 0x48
	// Line 360, Address: 0x101dc64, Func Offset: 0x64
	// Line 362, Address: 0x101dc70, Func Offset: 0x70
	// Line 364, Address: 0x101dc90, Func Offset: 0x90
	// Line 365, Address: 0x101dcac, Func Offset: 0xac
	// Line 366, Address: 0x101dcd0, Func Offset: 0xd0
	// Func End, Address: 0x101dcdc, Func Offset: 0xdc
}

// 
// Start address: 0x101dce0
void scroll()
{
	_anon1 ldwk;
	_anon1* pHscrbuf;
	int i;
	int lXwk;
	int lYwk;
	short sYnum;
	short* psHscr;
	short* psHscw;
	// Line 382, Address: 0x101dce0, Func Offset: 0
	// Line 394, Address: 0x101dcfc, Func Offset: 0x1c
	// Line 399, Address: 0x101dd0c, Func Offset: 0x2c
	// Line 401, Address: 0x101dd38, Func Offset: 0x58
	// Line 403, Address: 0x101dd40, Func Offset: 0x60
	// Line 404, Address: 0x101dd48, Func Offset: 0x68
	// Line 406, Address: 0x101dd50, Func Offset: 0x70
	// Line 407, Address: 0x101dd60, Func Offset: 0x80
	// Line 410, Address: 0x101dd70, Func Offset: 0x90
	// Line 411, Address: 0x101dd84, Func Offset: 0xa4
	// Line 413, Address: 0x101dd94, Func Offset: 0xb4
	// Line 414, Address: 0x101dda8, Func Offset: 0xc8
	// Line 416, Address: 0x101ddb8, Func Offset: 0xd8
	// Line 417, Address: 0x101ddd4, Func Offset: 0xf4
	// Line 419, Address: 0x101dde4, Func Offset: 0x104
	// Line 420, Address: 0x101ddf0, Func Offset: 0x110
	// Line 423, Address: 0x101de08, Func Offset: 0x128
	// Line 425, Address: 0x101de18, Func Offset: 0x138
	// Line 427, Address: 0x101de40, Func Offset: 0x160
	// Line 428, Address: 0x101de78, Func Offset: 0x198
	// Line 430, Address: 0x101de8c, Func Offset: 0x1ac
	// Line 432, Address: 0x101de98, Func Offset: 0x1b8
	// Line 434, Address: 0x101dea4, Func Offset: 0x1c4
	// Line 435, Address: 0x101dec4, Func Offset: 0x1e4
	// Line 437, Address: 0x101ded0, Func Offset: 0x1f0
	// Line 438, Address: 0x101dee4, Func Offset: 0x204
	// Line 440, Address: 0x101def4, Func Offset: 0x214
	// Line 442, Address: 0x101df00, Func Offset: 0x220
	// Line 443, Address: 0x101df0c, Func Offset: 0x22c
	// Line 444, Address: 0x101df3c, Func Offset: 0x25c
	// Line 445, Address: 0x101df6c, Func Offset: 0x28c
	// Line 446, Address: 0x101df88, Func Offset: 0x2a8
	// Func End, Address: 0x101dfac, Func Offset: 0x2cc
}

// 
// Start address: 0x101dfb0
void z82bline0(short** ppHscw)
{
	int lWk1;
	int lWk2;
	_anon1 ldWk1;
	_anon1 ldWk2;
	int i;
	int j;
	char z82bscrtbl0[5];
	// Line 460, Address: 0x101dfb0, Func Offset: 0
	// Line 468, Address: 0x101dfc8, Func Offset: 0x18
	// Line 469, Address: 0x101dfd8, Func Offset: 0x28
	// Line 470, Address: 0x101dfec, Func Offset: 0x3c
	// Line 472, Address: 0x101e000, Func Offset: 0x50
	// Line 473, Address: 0x101e020, Func Offset: 0x70
	// Line 475, Address: 0x101e034, Func Offset: 0x84
	// Line 477, Address: 0x101e040, Func Offset: 0x90
	// Line 479, Address: 0x101e05c, Func Offset: 0xac
	// Line 481, Address: 0x101e07c, Func Offset: 0xcc
	// Line 482, Address: 0x101e08c, Func Offset: 0xdc
	// Line 483, Address: 0x101e0a0, Func Offset: 0xf0
	// Line 485, Address: 0x101e0ac, Func Offset: 0xfc
	// Line 486, Address: 0x101e0d0, Func Offset: 0x120
	// Line 487, Address: 0x101e0e0, Func Offset: 0x130
	// Line 488, Address: 0x101e104, Func Offset: 0x154
	// Line 489, Address: 0x101e110, Func Offset: 0x160
	// Func End, Address: 0x101e12c, Func Offset: 0x17c
}

// 
// Start address: 0x101e130
void z82bline1(short** ppHscw)
{
	int lWk1;
	int lWk2;
	_anon1 ldWk1;
	_anon1 ldWk2;
	int i;
	int j;
	char z82bscrtbl1[5];
	// Line 502, Address: 0x101e130, Func Offset: 0
	// Line 510, Address: 0x101e148, Func Offset: 0x18
	// Line 511, Address: 0x101e158, Func Offset: 0x28
	// Line 512, Address: 0x101e16c, Func Offset: 0x3c
	// Line 514, Address: 0x101e180, Func Offset: 0x50
	// Line 515, Address: 0x101e1a0, Func Offset: 0x70
	// Line 516, Address: 0x101e1b4, Func Offset: 0x84
	// Line 518, Address: 0x101e1c8, Func Offset: 0x98
	// Line 520, Address: 0x101e1d4, Func Offset: 0xa4
	// Line 522, Address: 0x101e1f0, Func Offset: 0xc0
	// Line 524, Address: 0x101e210, Func Offset: 0xe0
	// Line 525, Address: 0x101e224, Func Offset: 0xf4
	// Line 526, Address: 0x101e234, Func Offset: 0x104
	// Line 528, Address: 0x101e240, Func Offset: 0x110
	// Line 529, Address: 0x101e264, Func Offset: 0x134
	// Line 530, Address: 0x101e274, Func Offset: 0x144
	// Line 531, Address: 0x101e298, Func Offset: 0x168
	// Line 533, Address: 0x101e2a4, Func Offset: 0x174
	// Line 534, Address: 0x101e2b8, Func Offset: 0x188
	// Func End, Address: 0x101e2d4, Func Offset: 0x1a4
}

// 
// Start address: 0x101e2e0
void line_div(int hWk1, int* hWk2, short sD6)
{
	// Line 540, Address: 0x101e2e0, Func Offset: 0
	// Line 541, Address: 0x101e2f0, Func Offset: 0x10
	// Line 542, Address: 0x101e330, Func Offset: 0x50
	// Func End, Address: 0x101e33c, Func Offset: 0x5c
}

// 
// Start address: 0x101e340
void zonescrsetsub0(short yoffs, short yline, _anon1** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon1 ldwk;
	// Line 563, Address: 0x101e340, Func Offset: 0
	// Line 567, Address: 0x101e35c, Func Offset: 0x1c
	// Line 568, Address: 0x101e360, Func Offset: 0x20
	// Line 570, Address: 0x101e380, Func Offset: 0x40
	// Line 571, Address: 0x101e39c, Func Offset: 0x5c
	// Line 572, Address: 0x101e3a8, Func Offset: 0x68
	// Line 574, Address: 0x101e3b4, Func Offset: 0x74
	// Line 575, Address: 0x101e3bc, Func Offset: 0x7c
	// Line 576, Address: 0x101e3cc, Func Offset: 0x8c
	// Line 577, Address: 0x101e3f0, Func Offset: 0xb0
	// Line 578, Address: 0x101e410, Func Offset: 0xd0
	// Func End, Address: 0x101e424, Func Offset: 0xe4
}

// 
// Start address: 0x101e430
void scrollb_v(short yPos)
{
	short ysv;
	short ywk;
	// Line 684, Address: 0x101e430, Func Offset: 0
	// Line 687, Address: 0x101e440, Func Offset: 0x10
	// Line 688, Address: 0x101e450, Func Offset: 0x20
	// Line 689, Address: 0x101e45c, Func Offset: 0x2c
	// Line 691, Address: 0x101e494, Func Offset: 0x64
	// Line 692, Address: 0x101e49c, Func Offset: 0x6c
	// Line 693, Address: 0x101e4b0, Func Offset: 0x80
	// Line 694, Address: 0x101e4d0, Func Offset: 0xa0
	// Line 695, Address: 0x101e4e4, Func Offset: 0xb4
	// Line 697, Address: 0x101e4ec, Func Offset: 0xbc
	// Line 702, Address: 0x101e500, Func Offset: 0xd0
	// Func End, Address: 0x101e514, Func Offset: 0xe4
}

// 
// Start address: 0x101e520
void scrollb_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 720, Address: 0x101e520, Func Offset: 0
	// Line 724, Address: 0x101e534, Func Offset: 0x14
	// Line 725, Address: 0x101e53c, Func Offset: 0x1c
	// Line 726, Address: 0x101e544, Func Offset: 0x24
	// Line 727, Address: 0x101e54c, Func Offset: 0x2c
	// Line 728, Address: 0x101e550, Func Offset: 0x30
	// Line 729, Address: 0x101e574, Func Offset: 0x54
	// Line 730, Address: 0x101e580, Func Offset: 0x60
	// Line 732, Address: 0x101e59c, Func Offset: 0x7c
	// Line 733, Address: 0x101e5a8, Func Offset: 0x88
	// Line 734, Address: 0x101e5bc, Func Offset: 0x9c
	// Line 735, Address: 0x101e5c8, Func Offset: 0xa8
	// Line 736, Address: 0x101e5ec, Func Offset: 0xcc
	// Line 738, Address: 0x101e5f4, Func Offset: 0xd4
	// Line 743, Address: 0x101e61c, Func Offset: 0xfc
	// Func End, Address: 0x101e630, Func Offset: 0x110
}

// 
// Start address: 0x101e630
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 761, Address: 0x101e630, Func Offset: 0
	// Line 765, Address: 0x101e644, Func Offset: 0x14
	// Line 766, Address: 0x101e64c, Func Offset: 0x1c
	// Line 767, Address: 0x101e654, Func Offset: 0x24
	// Line 768, Address: 0x101e65c, Func Offset: 0x2c
	// Line 769, Address: 0x101e660, Func Offset: 0x30
	// Line 770, Address: 0x101e684, Func Offset: 0x54
	// Line 771, Address: 0x101e690, Func Offset: 0x60
	// Line 773, Address: 0x101e6ac, Func Offset: 0x7c
	// Line 774, Address: 0x101e6b8, Func Offset: 0x88
	// Line 775, Address: 0x101e6cc, Func Offset: 0x9c
	// Line 776, Address: 0x101e6d8, Func Offset: 0xa8
	// Line 777, Address: 0x101e6fc, Func Offset: 0xcc
	// Line 779, Address: 0x101e704, Func Offset: 0xd4
	// Line 784, Address: 0x101e72c, Func Offset: 0xfc
	// Func End, Address: 0x101e740, Func Offset: 0x110
}

// 
// Start address: 0x101e740
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon1 ldXwk;
	// Line 802, Address: 0x101e740, Func Offset: 0
	// Line 806, Address: 0x101e754, Func Offset: 0x14
	// Line 807, Address: 0x101e75c, Func Offset: 0x1c
	// Line 808, Address: 0x101e764, Func Offset: 0x24
	// Line 809, Address: 0x101e76c, Func Offset: 0x2c
	// Line 810, Address: 0x101e770, Func Offset: 0x30
	// Line 811, Address: 0x101e794, Func Offset: 0x54
	// Line 812, Address: 0x101e7a0, Func Offset: 0x60
	// Line 814, Address: 0x101e7bc, Func Offset: 0x7c
	// Line 815, Address: 0x101e7c8, Func Offset: 0x88
	// Line 816, Address: 0x101e7dc, Func Offset: 0x9c
	// Line 817, Address: 0x101e7e8, Func Offset: 0xa8
	// Line 818, Address: 0x101e80c, Func Offset: 0xcc
	// Line 820, Address: 0x101e814, Func Offset: 0xd4
	// Line 825, Address: 0x101e83c, Func Offset: 0xfc
	// Func End, Address: 0x101e850, Func Offset: 0x110
}

// 
// Start address: 0x101e850
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 840, Address: 0x101e850, Func Offset: 0
	// Line 844, Address: 0x101e860, Func Offset: 0x10
	// Line 846, Address: 0x101e870, Func Offset: 0x20
	// Line 847, Address: 0x101e878, Func Offset: 0x28
	// Line 848, Address: 0x101e8ac, Func Offset: 0x5c
	// Line 849, Address: 0x101e8b4, Func Offset: 0x64
	// Line 850, Address: 0x101e8c8, Func Offset: 0x78
	// Line 851, Address: 0x101e8ec, Func Offset: 0x9c
	// Line 852, Address: 0x101e900, Func Offset: 0xb0
	// Line 853, Address: 0x101e908, Func Offset: 0xb8
	// Line 858, Address: 0x101e91c, Func Offset: 0xcc
	// Func End, Address: 0x101e934, Func Offset: 0xe4
}

// 
// Start address: 0x101e940
void scrh_move()
{
	short xwk;
	// Line 875, Address: 0x101e940, Func Offset: 0
	// Line 878, Address: 0x101e948, Func Offset: 0x8
	// Line 879, Address: 0x101e990, Func Offset: 0x50
	// Line 881, Address: 0x101e9a0, Func Offset: 0x60
	// Line 882, Address: 0x101e9a8, Func Offset: 0x68
	// Line 883, Address: 0x101e9b0, Func Offset: 0x70
	// Line 885, Address: 0x101e9c0, Func Offset: 0x80
	// Line 886, Address: 0x101e9d4, Func Offset: 0x94
	// Line 890, Address: 0x101e9e0, Func Offset: 0xa0
	// Line 891, Address: 0x101e9f4, Func Offset: 0xb4
	// Line 892, Address: 0x101ea18, Func Offset: 0xd8
	// Line 894, Address: 0x101ea28, Func Offset: 0xe8
	// Line 896, Address: 0x101ea30, Func Offset: 0xf0
	// Line 897, Address: 0x101ea44, Func Offset: 0x104
	// Line 901, Address: 0x101ea50, Func Offset: 0x110
	// Line 902, Address: 0x101ea64, Func Offset: 0x124
	// Line 903, Address: 0x101ea88, Func Offset: 0x148
	// Line 908, Address: 0x101ea98, Func Offset: 0x158
	// Line 909, Address: 0x101eac8, Func Offset: 0x188
	// Line 910, Address: 0x101ead0, Func Offset: 0x190
	// Func End, Address: 0x101eae0, Func Offset: 0x1a0
}

// 
// Start address: 0x101eae0
void scroll_v()
{
	short ywk;
	// Line 925, Address: 0x101eae0, Func Offset: 0
	// Line 928, Address: 0x101eaec, Func Offset: 0xc
	// Line 929, Address: 0x101eb20, Func Offset: 0x40
	// Line 930, Address: 0x101eb38, Func Offset: 0x58
	// Line 934, Address: 0x101eb44, Func Offset: 0x64
	// Line 935, Address: 0x101eb5c, Func Offset: 0x7c
	// Line 936, Address: 0x101eb68, Func Offset: 0x88
	// Line 937, Address: 0x101eb8c, Func Offset: 0xac
	// Line 938, Address: 0x101eba0, Func Offset: 0xc0
	// Line 939, Address: 0x101ebac, Func Offset: 0xcc
	// Line 940, Address: 0x101ebb4, Func Offset: 0xd4
	// Line 941, Address: 0x101ebdc, Func Offset: 0xfc
	// Line 942, Address: 0x101ec04, Func Offset: 0x124
	// Line 943, Address: 0x101ec10, Func Offset: 0x130
	// Line 945, Address: 0x101ec18, Func Offset: 0x138
	// Line 946, Address: 0x101ec40, Func Offset: 0x160
	// Line 947, Address: 0x101ec50, Func Offset: 0x170
	// Line 948, Address: 0x101ec58, Func Offset: 0x178
	// Line 953, Address: 0x101ec60, Func Offset: 0x180
	// Line 954, Address: 0x101ec8c, Func Offset: 0x1ac
	// Line 955, Address: 0x101ec98, Func Offset: 0x1b8
	// Line 956, Address: 0x101eca0, Func Offset: 0x1c0
	// Line 957, Address: 0x101ecb0, Func Offset: 0x1d0
	// Line 958, Address: 0x101ecb8, Func Offset: 0x1d8
	// Line 963, Address: 0x101ecc0, Func Offset: 0x1e0
	// Line 964, Address: 0x101ecc8, Func Offset: 0x1e8
	// Func End, Address: 0x101ecdc, Func Offset: 0x1fc
}

// 
// Start address: 0x101ece0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 978, Address: 0x101ece0, Func Offset: 0
	// Line 981, Address: 0x101ecf0, Func Offset: 0x10
	// Line 982, Address: 0x101ed0c, Func Offset: 0x2c
	// Line 983, Address: 0x101ed24, Func Offset: 0x44
	// Line 984, Address: 0x101ed48, Func Offset: 0x68
	// Line 985, Address: 0x101ed50, Func Offset: 0x70
	// Line 989, Address: 0x101ed60, Func Offset: 0x80
	// Line 990, Address: 0x101ed74, Func Offset: 0x94
	// Line 991, Address: 0x101ed80, Func Offset: 0xa0
	// Line 994, Address: 0x101ed88, Func Offset: 0xa8
	// Line 995, Address: 0x101eda0, Func Offset: 0xc0
	// Line 996, Address: 0x101edac, Func Offset: 0xcc
	// Line 997, Address: 0x101edcc, Func Offset: 0xec
	// Line 998, Address: 0x101edd8, Func Offset: 0xf8
	// Line 999, Address: 0x101ede0, Func Offset: 0x100
	// Line 1001, Address: 0x101edec, Func Offset: 0x10c
	// Line 1003, Address: 0x101edf4, Func Offset: 0x114
	// Line 1004, Address: 0x101ee0c, Func Offset: 0x12c
	// Line 1005, Address: 0x101ee18, Func Offset: 0x138
	// Line 1006, Address: 0x101ee38, Func Offset: 0x158
	// Line 1007, Address: 0x101ee44, Func Offset: 0x164
	// Line 1008, Address: 0x101ee4c, Func Offset: 0x16c
	// Line 1011, Address: 0x101ee58, Func Offset: 0x178
	// Func End, Address: 0x101ee6c, Func Offset: 0x18c
}

// 
// Start address: 0x101ee70
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 1025, Address: 0x101ee70, Func Offset: 0
	// Line 1028, Address: 0x101ee80, Func Offset: 0x10
	// Line 1030, Address: 0x101ee8c, Func Offset: 0x1c
	// Line 1031, Address: 0x101eea4, Func Offset: 0x34
	// Line 1032, Address: 0x101eeb0, Func Offset: 0x40
	// Line 1033, Address: 0x101eed0, Func Offset: 0x60
	// Line 1034, Address: 0x101eedc, Func Offset: 0x6c
	// Line 1035, Address: 0x101eee4, Func Offset: 0x74
	// Line 1037, Address: 0x101eef0, Func Offset: 0x80
	// Func End, Address: 0x101ef04, Func Offset: 0x94
}

// 
// Start address: 0x101ef10
void sv_move_sub(short yPos)
{
	_anon1 lSpd;
	// Line 1052, Address: 0x101ef10, Func Offset: 0
	// Line 1055, Address: 0x101ef1c, Func Offset: 0xc
	// Line 1056, Address: 0x101ef20, Func Offset: 0x10
	// Line 1057, Address: 0x101ef4c, Func Offset: 0x3c
	// Line 1058, Address: 0x101ef60, Func Offset: 0x50
	// Line 1059, Address: 0x101ef6c, Func Offset: 0x5c
	// Line 1060, Address: 0x101ef74, Func Offset: 0x64
	// Line 1062, Address: 0x101ef80, Func Offset: 0x70
	// Func End, Address: 0x101ef90, Func Offset: 0x80
}

// 
// Start address: 0x101ef90
void sv_move_sub2()
{
	// Line 1066, Address: 0x101ef90, Func Offset: 0
	// Line 1067, Address: 0x101ef98, Func Offset: 0x8
	// Line 1069, Address: 0x101efa0, Func Offset: 0x10
	// Line 1070, Address: 0x101efac, Func Offset: 0x1c
	// Func End, Address: 0x101efbc, Func Offset: 0x2c
}

// 
// Start address: 0x101efc0
void sv_move_minus(short speed)
{
	_anon1 lSpd;
	// Line 1084, Address: 0x101efc0, Func Offset: 0
	// Line 1087, Address: 0x101efcc, Func Offset: 0xc
	// Line 1088, Address: 0x101eff0, Func Offset: 0x30
	// Line 1089, Address: 0x101f014, Func Offset: 0x54
	// Line 1090, Address: 0x101f020, Func Offset: 0x60
	// Func End, Address: 0x101f030, Func Offset: 0x70
}

// 
// Start address: 0x101f030
void scrv_up_ch(_anon1 lSpd)
{
	// Line 1105, Address: 0x101f030, Func Offset: 0
	// Line 1106, Address: 0x101f03c, Func Offset: 0xc
	// Line 1107, Address: 0x101f064, Func Offset: 0x34
	// Line 1109, Address: 0x101f07c, Func Offset: 0x4c
	// Line 1110, Address: 0x101f088, Func Offset: 0x58
	// Line 1111, Address: 0x101f090, Func Offset: 0x60
	// Line 1112, Address: 0x101f09c, Func Offset: 0x6c
	// Line 1113, Address: 0x101f0b0, Func Offset: 0x80
	// Line 1114, Address: 0x101f0c4, Func Offset: 0x94
	// Line 1118, Address: 0x101f0d8, Func Offset: 0xa8
	// Line 1119, Address: 0x101f0e4, Func Offset: 0xb4
	// Func End, Address: 0x101f0f4, Func Offset: 0xc4
}

// 
// Start address: 0x101f100
void sv_move_plus(short sSpd)
{
	_anon1 lSpd;
	// Line 1133, Address: 0x101f100, Func Offset: 0
	// Line 1136, Address: 0x101f10c, Func Offset: 0xc
	// Line 1137, Address: 0x101f12c, Func Offset: 0x2c
	// Line 1138, Address: 0x101f150, Func Offset: 0x50
	// Line 1139, Address: 0x101f15c, Func Offset: 0x5c
	// Func End, Address: 0x101f16c, Func Offset: 0x6c
}

// 
// Start address: 0x101f170
void scrv_down_ch(_anon1 lSpd)
{
	// Line 1154, Address: 0x101f170, Func Offset: 0
	// Line 1155, Address: 0x101f17c, Func Offset: 0xc
	// Line 1156, Address: 0x101f1a4, Func Offset: 0x34
	// Line 1158, Address: 0x101f1bc, Func Offset: 0x4c
	// Line 1159, Address: 0x101f1c8, Func Offset: 0x58
	// Line 1160, Address: 0x101f1d0, Func Offset: 0x60
	// Line 1161, Address: 0x101f1dc, Func Offset: 0x6c
	// Line 1162, Address: 0x101f1f0, Func Offset: 0x80
	// Line 1163, Address: 0x101f204, Func Offset: 0x94
	// Line 1167, Address: 0x101f218, Func Offset: 0xa8
	// Line 1168, Address: 0x101f224, Func Offset: 0xb4
	// Func End, Address: 0x101f234, Func Offset: 0xc4
}

// 
// Start address: 0x101f240
void scrv_move(_anon1 lSpd)
{
	short ywk;
	short ysv;
	_anon8 spdwk;
	// Line 1185, Address: 0x101f240, Func Offset: 0
	// Line 1189, Address: 0x101f250, Func Offset: 0x10
	// Line 1190, Address: 0x101f260, Func Offset: 0x20
	// Line 1191, Address: 0x101f284, Func Offset: 0x44
	// Line 1192, Address: 0x101f298, Func Offset: 0x58
	// Line 1193, Address: 0x101f2b0, Func Offset: 0x70
	// Line 1195, Address: 0x101f2bc, Func Offset: 0x7c
	// Line 1197, Address: 0x101f2c8, Func Offset: 0x88
	// Line 1198, Address: 0x101f304, Func Offset: 0xc4
	// Line 1199, Address: 0x101f30c, Func Offset: 0xcc
	// Line 1200, Address: 0x101f320, Func Offset: 0xe0
	// Line 1201, Address: 0x101f34c, Func Offset: 0x10c
	// Line 1202, Address: 0x101f35c, Func Offset: 0x11c
	// Line 1203, Address: 0x101f370, Func Offset: 0x130
	// Line 1204, Address: 0x101f378, Func Offset: 0x138
	// Line 1209, Address: 0x101f38c, Func Offset: 0x14c
	// Func End, Address: 0x101f3a0, Func Offset: 0x160
}

// 
// Start address: 0x101f3a0
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
	// Line 1227, Address: 0x101f3a0, Func Offset: 0
	// Line 1236, Address: 0x101f3c0, Func Offset: 0x20
	// Line 1237, Address: 0x101f3c4, Func Offset: 0x24
	// Line 1238, Address: 0x101f3d0, Func Offset: 0x30
	// Line 1239, Address: 0x101f3dc, Func Offset: 0x3c
	// Line 1240, Address: 0x101f3e4, Func Offset: 0x44
	// Line 1241, Address: 0x101f3ec, Func Offset: 0x4c
	// Line 1243, Address: 0x101f400, Func Offset: 0x60
	// Line 1244, Address: 0x101f404, Func Offset: 0x64
	// Line 1245, Address: 0x101f410, Func Offset: 0x70
	// Line 1246, Address: 0x101f41c, Func Offset: 0x7c
	// Line 1247, Address: 0x101f424, Func Offset: 0x84
	// Line 1249, Address: 0x101f42c, Func Offset: 0x8c
	// Line 1250, Address: 0x101f438, Func Offset: 0x98
	// Line 1251, Address: 0x101f44c, Func Offset: 0xac
	// Line 1253, Address: 0x101f458, Func Offset: 0xb8
	// Line 1254, Address: 0x101f460, Func Offset: 0xc0
	// Line 1256, Address: 0x101f468, Func Offset: 0xc8
	// Line 1258, Address: 0x101f488, Func Offset: 0xe8
	// Line 1264, Address: 0x101f4b4, Func Offset: 0x114
	// Line 1265, Address: 0x101f4c8, Func Offset: 0x128
	// Line 1267, Address: 0x101f4d4, Func Offset: 0x134
	// Line 1268, Address: 0x101f4dc, Func Offset: 0x13c
	// Line 1269, Address: 0x101f4e4, Func Offset: 0x144
	// Line 1271, Address: 0x101f504, Func Offset: 0x164
	// Line 1277, Address: 0x101f530, Func Offset: 0x190
	// Line 1278, Address: 0x101f544, Func Offset: 0x1a4
	// Line 1280, Address: 0x101f550, Func Offset: 0x1b0
	// Line 1281, Address: 0x101f558, Func Offset: 0x1b8
	// Line 1282, Address: 0x101f560, Func Offset: 0x1c0
	// Line 1284, Address: 0x101f580, Func Offset: 0x1e0
	// Line 1290, Address: 0x101f5ac, Func Offset: 0x20c
	// Line 1291, Address: 0x101f5c0, Func Offset: 0x220
	// Line 1293, Address: 0x101f5cc, Func Offset: 0x22c
	// Line 1294, Address: 0x101f5d4, Func Offset: 0x234
	// Line 1295, Address: 0x101f5dc, Func Offset: 0x23c
	// Line 1297, Address: 0x101f5fc, Func Offset: 0x25c
	// Line 1306, Address: 0x101f628, Func Offset: 0x288
	// Func End, Address: 0x101f650, Func Offset: 0x2b0
}

// 
// Start address: 0x101f650
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
	// Line 1323, Address: 0x101f650, Func Offset: 0
	// Line 1334, Address: 0x101f67c, Func Offset: 0x2c
	// Line 1336, Address: 0x101f684, Func Offset: 0x34
	// Line 1337, Address: 0x101f69c, Func Offset: 0x4c
	// Line 1338, Address: 0x101f6b0, Func Offset: 0x60
	// Line 1340, Address: 0x101f6b8, Func Offset: 0x68
	// Line 1342, Address: 0x101f6cc, Func Offset: 0x7c
	// Line 1343, Address: 0x101f6e4, Func Offset: 0x94
	// Line 1344, Address: 0x101f6f8, Func Offset: 0xa8
	// Line 1345, Address: 0x101f700, Func Offset: 0xb0
	// Line 1347, Address: 0x101f708, Func Offset: 0xb8
	// Line 1348, Address: 0x101f71c, Func Offset: 0xcc
	// Line 1353, Address: 0x101f724, Func Offset: 0xd4
	// Line 1354, Address: 0x101f774, Func Offset: 0x124
	// Line 1355, Address: 0x101f77c, Func Offset: 0x12c
	// Line 1361, Address: 0x101f79c, Func Offset: 0x14c
	// Line 1362, Address: 0x101f7bc, Func Offset: 0x16c
	// Line 1363, Address: 0x101f7e0, Func Offset: 0x190
	// Line 1364, Address: 0x101f7ec, Func Offset: 0x19c
	// Line 1365, Address: 0x101f7f4, Func Offset: 0x1a4
	// Line 1367, Address: 0x101f814, Func Offset: 0x1c4
	// Line 1371, Address: 0x101f840, Func Offset: 0x1f0
	// Line 1374, Address: 0x101f848, Func Offset: 0x1f8
	// Line 1375, Address: 0x101f84c, Func Offset: 0x1fc
	// Line 1379, Address: 0x101f86c, Func Offset: 0x21c
	// Line 1386, Address: 0x101f898, Func Offset: 0x248
	// Line 1393, Address: 0x101f8ac, Func Offset: 0x25c
	// Line 1394, Address: 0x101f8b4, Func Offset: 0x264
	// Line 1395, Address: 0x101f8bc, Func Offset: 0x26c
	// Line 1396, Address: 0x101f8d4, Func Offset: 0x284
	// Line 1397, Address: 0x101f8f4, Func Offset: 0x2a4
	// Line 1401, Address: 0x101f8fc, Func Offset: 0x2ac
	// Line 1403, Address: 0x101f92c, Func Offset: 0x2dc
	// Line 1404, Address: 0x101f938, Func Offset: 0x2e8
	// Line 1408, Address: 0x101f948, Func Offset: 0x2f8
	// Line 1409, Address: 0x101f954, Func Offset: 0x304
	// Line 1410, Address: 0x101f974, Func Offset: 0x324
	// Line 1411, Address: 0x101f9ac, Func Offset: 0x35c
	// Line 1412, Address: 0x101f9cc, Func Offset: 0x37c
	// Line 1414, Address: 0x101f9f0, Func Offset: 0x3a0
	// Line 1417, Address: 0x101fa14, Func Offset: 0x3c4
	// Line 1419, Address: 0x101fa34, Func Offset: 0x3e4
	// Line 1421, Address: 0x101fa48, Func Offset: 0x3f8
	// Line 1422, Address: 0x101fa54, Func Offset: 0x404
	// Line 1423, Address: 0x101fa64, Func Offset: 0x414
	// Line 1425, Address: 0x101fa6c, Func Offset: 0x41c
	// Func End, Address: 0x101fa94, Func Offset: 0x444
}

// 
// Start address: 0x101faa0
void scrollwrtc()
{
	// Line 1431, Address: 0x101faa0, Func Offset: 0
	// Func End, Address: 0x101faa8, Func Offset: 0x8
}

// 
// Start address: 0x101fab0
void scrollwrtz()
{
	// Line 1436, Address: 0x101fab0, Func Offset: 0
	// Func End, Address: 0x101fab8, Func Offset: 0x8
}

// 
// Start address: 0x101fac0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1454, Address: 0x101fac0, Func Offset: 0
	// Line 1467, Address: 0x101fae8, Func Offset: 0x28
	// Line 1470, Address: 0x101fb08, Func Offset: 0x48
	// Line 1471, Address: 0x101fb1c, Func Offset: 0x5c
	// Line 1472, Address: 0x101fb30, Func Offset: 0x70
	// Line 1473, Address: 0x101fb44, Func Offset: 0x84
	// Line 1475, Address: 0x101fb58, Func Offset: 0x98
	// Line 1476, Address: 0x101fb64, Func Offset: 0xa4
	// Line 1477, Address: 0x101fb78, Func Offset: 0xb8
	// Func End, Address: 0x101fb88, Func Offset: 0xc8
}

// 
// Start address: 0x101fb90
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1481, Address: 0x101fb90, Func Offset: 0
	// Line 1485, Address: 0x101fbb8, Func Offset: 0x28
	// Line 1488, Address: 0x101fbd8, Func Offset: 0x48
	// Line 1489, Address: 0x101fbec, Func Offset: 0x5c
	// Line 1490, Address: 0x101fc00, Func Offset: 0x70
	// Line 1491, Address: 0x101fc14, Func Offset: 0x84
	// Line 1493, Address: 0x101fc28, Func Offset: 0x98
	// Line 1494, Address: 0x101fc34, Func Offset: 0xa4
	// Line 1495, Address: 0x101fc48, Func Offset: 0xb8
	// Func End, Address: 0x101fc58, Func Offset: 0xc8
}

// 
// Start address: 0x101fc60
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1515, Address: 0x101fc60, Func Offset: 0
	// Line 1519, Address: 0x101fc88, Func Offset: 0x28
	// Line 1522, Address: 0x101fca8, Func Offset: 0x48
	// Line 1523, Address: 0x101fcbc, Func Offset: 0x5c
	// Line 1524, Address: 0x101fccc, Func Offset: 0x6c
	// Line 1525, Address: 0x101fce0, Func Offset: 0x80
	// Line 1527, Address: 0x101fcf0, Func Offset: 0x90
	// Line 1528, Address: 0x101fcfc, Func Offset: 0x9c
	// Line 1529, Address: 0x101fd10, Func Offset: 0xb0
	// Func End, Address: 0x101fd20, Func Offset: 0xc0
}

// 
// Start address: 0x101fd20
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
	// Line 1548, Address: 0x101fd20, Func Offset: 0
	// Line 1554, Address: 0x101fd54, Func Offset: 0x34
	// Line 1556, Address: 0x101fd64, Func Offset: 0x44
	// Line 1557, Address: 0x101fd68, Func Offset: 0x48
	// Line 1558, Address: 0x101fd70, Func Offset: 0x50
	// Line 1560, Address: 0x101fd80, Func Offset: 0x60
	// Line 1562, Address: 0x101fd84, Func Offset: 0x64
	// Line 1563, Address: 0x101fd8c, Func Offset: 0x6c
	// Line 1566, Address: 0x101fd94, Func Offset: 0x74
	// Line 1567, Address: 0x101fd9c, Func Offset: 0x7c
	// Line 1568, Address: 0x101fda8, Func Offset: 0x88
	// Line 1570, Address: 0x101fdb4, Func Offset: 0x94
	// Line 1571, Address: 0x101fdbc, Func Offset: 0x9c
	// Line 1572, Address: 0x101fdc4, Func Offset: 0xa4
	// Line 1573, Address: 0x101fdcc, Func Offset: 0xac
	// Line 1575, Address: 0x101fdd8, Func Offset: 0xb8
	// Line 1576, Address: 0x101fde0, Func Offset: 0xc0
	// Line 1577, Address: 0x101fde8, Func Offset: 0xc8
	// Line 1578, Address: 0x101fdf0, Func Offset: 0xd0
	// Line 1580, Address: 0x101fdfc, Func Offset: 0xdc
	// Line 1581, Address: 0x101fe04, Func Offset: 0xe4
	// Line 1582, Address: 0x101fe0c, Func Offset: 0xec
	// Line 1585, Address: 0x101fe14, Func Offset: 0xf4
	// Line 1586, Address: 0x101fe1c, Func Offset: 0xfc
	// Line 1589, Address: 0x101fe24, Func Offset: 0x104
	// Line 1590, Address: 0x101fe68, Func Offset: 0x148
	// Line 1591, Address: 0x101feac, Func Offset: 0x18c
	// Line 1592, Address: 0x101fef0, Func Offset: 0x1d0
	// Line 1594, Address: 0x101ff34, Func Offset: 0x214
	// Func End, Address: 0x101ff64, Func Offset: 0x244
}

// 
// Start address: 0x101ff70
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1612, Address: 0x101ff70, Func Offset: 0
	// Line 1613, Address: 0x101ff90, Func Offset: 0x20
	// Line 1614, Address: 0x101ffb0, Func Offset: 0x40
	// Func End, Address: 0x101ffc0, Func Offset: 0x50
}

// 
// Start address: 0x101ffc0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1616, Address: 0x101ffc0, Func Offset: 0
	// Line 1617, Address: 0x101ffe0, Func Offset: 0x20
	// Line 1618, Address: 0x101ffe4, Func Offset: 0x24
	// Line 1619, Address: 0x1020004, Func Offset: 0x44
	// Func End, Address: 0x1020014, Func Offset: 0x54
}

// 
// Start address: 0x1020020
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1626, Address: 0x1020020, Func Offset: 0
	// Line 1632, Address: 0x1020050, Func Offset: 0x30
	// Line 1633, Address: 0x1020060, Func Offset: 0x40
	// Line 1639, Address: 0x1020070, Func Offset: 0x50
	// Line 1640, Address: 0x102008c, Func Offset: 0x6c
	// Line 1641, Address: 0x1020090, Func Offset: 0x70
	// Line 1642, Address: 0x10200ac, Func Offset: 0x8c
	// Line 1643, Address: 0x10200b0, Func Offset: 0x90
	// Line 1644, Address: 0x10200d0, Func Offset: 0xb0
	// Line 1645, Address: 0x10200d8, Func Offset: 0xb8
	// Line 1646, Address: 0x10200f8, Func Offset: 0xd8
	// Line 1647, Address: 0x1020100, Func Offset: 0xe0
	// Line 1648, Address: 0x1020148, Func Offset: 0x128
	// Line 1650, Address: 0x1020154, Func Offset: 0x134
	// Line 1652, Address: 0x1020170, Func Offset: 0x150
	// Line 1657, Address: 0x1020178, Func Offset: 0x158
	// Line 1658, Address: 0x1020184, Func Offset: 0x164
	// Line 1661, Address: 0x1020190, Func Offset: 0x170
	// Line 1662, Address: 0x1020198, Func Offset: 0x178
	// Line 1663, Address: 0x10201b8, Func Offset: 0x198
	// Line 1664, Address: 0x10201d4, Func Offset: 0x1b4
	// Line 1665, Address: 0x10201dc, Func Offset: 0x1bc
	// Line 1666, Address: 0x10201fc, Func Offset: 0x1dc
	// Line 1668, Address: 0x1020218, Func Offset: 0x1f8
	// Line 1669, Address: 0x1020220, Func Offset: 0x200
	// Line 1670, Address: 0x1020228, Func Offset: 0x208
	// Line 1671, Address: 0x1020234, Func Offset: 0x214
	// Line 1672, Address: 0x102024c, Func Offset: 0x22c
	// Line 1674, Address: 0x102025c, Func Offset: 0x23c
	// Line 1677, Address: 0x1020268, Func Offset: 0x248
	// Line 1678, Address: 0x1020270, Func Offset: 0x250
	// Line 1679, Address: 0x1020274, Func Offset: 0x254
	// Func End, Address: 0x1020294, Func Offset: 0x274
}

// 
// Start address: 0x10202a0
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1699, Address: 0x10202a0, Func Offset: 0
	// Line 1707, Address: 0x10202c8, Func Offset: 0x28
	// Line 1708, Address: 0x102032c, Func Offset: 0x8c
	// Line 1714, Address: 0x1020334, Func Offset: 0x94
	// Line 1715, Address: 0x102033c, Func Offset: 0x9c
	// Line 1716, Address: 0x102035c, Func Offset: 0xbc
	// Line 1717, Address: 0x1020378, Func Offset: 0xd8
	// Line 1718, Address: 0x1020380, Func Offset: 0xe0
	// Line 1719, Address: 0x10203a0, Func Offset: 0x100
	// Line 1722, Address: 0x10203bc, Func Offset: 0x11c
	// Line 1723, Address: 0x10203c4, Func Offset: 0x124
	// Line 1724, Address: 0x10203cc, Func Offset: 0x12c
	// Line 1725, Address: 0x10203d8, Func Offset: 0x138
	// Line 1726, Address: 0x10203f0, Func Offset: 0x150
	// Line 1727, Address: 0x10203f8, Func Offset: 0x158
	// Line 1732, Address: 0x1020408, Func Offset: 0x168
	// Line 1735, Address: 0x1020414, Func Offset: 0x174
	// Line 1736, Address: 0x102041c, Func Offset: 0x17c
	// Line 1737, Address: 0x1020420, Func Offset: 0x180
	// Func End, Address: 0x102043c, Func Offset: 0x19c
}

// 
// Start address: 0x1020440
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1751, Address: 0x1020440, Func Offset: 0
	// Line 1758, Address: 0x102045c, Func Offset: 0x1c
	// Line 1759, Address: 0x1020460, Func Offset: 0x20
	// Line 1760, Address: 0x1020468, Func Offset: 0x28
	// Line 1762, Address: 0x102048c, Func Offset: 0x4c
	// Line 1763, Address: 0x10204a4, Func Offset: 0x64
	// Line 1764, Address: 0x10204b8, Func Offset: 0x78
	// Line 1769, Address: 0x10204d0, Func Offset: 0x90
	// Func End, Address: 0x10204e8, Func Offset: 0xa8
}

// 
// Start address: 0x10204f0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1783, Address: 0x10204f0, Func Offset: 0
	// Line 1784, Address: 0x10204fc, Func Offset: 0xc
	// Line 1785, Address: 0x1020530, Func Offset: 0x40
	// Line 1786, Address: 0x102057c, Func Offset: 0x8c
	// Line 1787, Address: 0x10205b0, Func Offset: 0xc0
	// Line 1789, Address: 0x10205fc, Func Offset: 0x10c
	// Line 1795, Address: 0x1020608, Func Offset: 0x118
	// Line 1796, Address: 0x102060c, Func Offset: 0x11c
	// Func End, Address: 0x1020618, Func Offset: 0x128
}

// 
// Start address: 0x1020620
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1813, Address: 0x1020620, Func Offset: 0
	// Line 1814, Address: 0x102063c, Func Offset: 0x1c
	// Line 1816, Address: 0x1020658, Func Offset: 0x38
	// Func End, Address: 0x1020668, Func Offset: 0x48
}

// 
// Start address: 0x1020670
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1818, Address: 0x1020670, Func Offset: 0
	// Line 1819, Address: 0x102068c, Func Offset: 0x1c
	// Line 1820, Address: 0x1020690, Func Offset: 0x20
	// Line 1822, Address: 0x10206ac, Func Offset: 0x3c
	// Func End, Address: 0x10206bc, Func Offset: 0x4c
}

// 
// Start address: 0x10206c0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1824, Address: 0x10206c0, Func Offset: 0
	// Line 1825, Address: 0x10206d4, Func Offset: 0x14
	// Line 1827, Address: 0x10206f0, Func Offset: 0x30
	// Func End, Address: 0x1020700, Func Offset: 0x40
}

// 
// Start address: 0x1020700
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1829, Address: 0x1020700, Func Offset: 0
	// Line 1830, Address: 0x102071c, Func Offset: 0x1c
	// Line 1832, Address: 0x1020738, Func Offset: 0x38
	// Func End, Address: 0x1020748, Func Offset: 0x48
}

// 
// Start address: 0x1020750
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1834, Address: 0x1020750, Func Offset: 0
	// Line 1835, Address: 0x1020768, Func Offset: 0x18
	// Line 1836, Address: 0x1020778, Func Offset: 0x28
	// Line 1837, Address: 0x1020788, Func Offset: 0x38
	// Line 1838, Address: 0x1020794, Func Offset: 0x44
	// Line 1840, Address: 0x10207a0, Func Offset: 0x50
	// Line 1841, Address: 0x10207cc, Func Offset: 0x7c
	// Line 1844, Address: 0x10207f8, Func Offset: 0xa8
	// Func End, Address: 0x1020804, Func Offset: 0xb4
}

// 
// Start address: 0x1020810
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1860, Address: 0x1020810, Func Offset: 0
	// Line 1867, Address: 0x1020828, Func Offset: 0x18
	// Line 1868, Address: 0x1020834, Func Offset: 0x24
	// Line 1869, Address: 0x1020840, Func Offset: 0x30
	// Line 1870, Address: 0x1020848, Func Offset: 0x38
	// Line 1871, Address: 0x102084c, Func Offset: 0x3c
	// Line 1875, Address: 0x1020864, Func Offset: 0x54
	// Line 1876, Address: 0x102086c, Func Offset: 0x5c
	// Line 1877, Address: 0x1020870, Func Offset: 0x60
	// Line 1879, Address: 0x1020880, Func Offset: 0x70
	// Func End, Address: 0x10208a0, Func Offset: 0x90
}

// 
// Start address: 0x10208a0
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1882, Address: 0x10208a0, Func Offset: 0
	// Line 1883, Address: 0x10208b8, Func Offset: 0x18
	// Line 1884, Address: 0x10208d8, Func Offset: 0x38
	// Func End, Address: 0x10208e8, Func Offset: 0x48
}

// 
// Start address: 0x10208f0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1889, Address: 0x10208f0, Func Offset: 0
	// Line 1893, Address: 0x1020910, Func Offset: 0x20
	// Line 1896, Address: 0x102092c, Func Offset: 0x3c
	// Line 1900, Address: 0x1020954, Func Offset: 0x64
	// Line 1901, Address: 0x1020960, Func Offset: 0x70
	// Line 1903, Address: 0x1020988, Func Offset: 0x98
	// Func End, Address: 0x1020998, Func Offset: 0xa8
}

// 
// Start address: 0x10209a0
void mapwrt_z81a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1909, Address: 0x10209a0, Func Offset: 0
	// Line 1912, Address: 0x10209bc, Func Offset: 0x1c
	// Line 1913, Address: 0x10209c4, Func Offset: 0x24
	// Line 1916, Address: 0x10209cc, Func Offset: 0x2c
	// Line 1918, Address: 0x10209f0, Func Offset: 0x50
	// Line 1919, Address: 0x1020a10, Func Offset: 0x70
	// Line 1920, Address: 0x1020a18, Func Offset: 0x78
	// Line 1921, Address: 0x1020a3c, Func Offset: 0x9c
	// Func End, Address: 0x1020a58, Func Offset: 0xb8
}

// 
// Start address: 0x1020a60
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1947, Address: 0x1020a60, Func Offset: 0
	// Line 1952, Address: 0x1020a88, Func Offset: 0x28
	// Line 1953, Address: 0x1020a98, Func Offset: 0x38
	// Line 1955, Address: 0x1020ab4, Func Offset: 0x54
	// Line 1956, Address: 0x1020ad8, Func Offset: 0x78
	// Line 1957, Address: 0x1020b00, Func Offset: 0xa0
	// Line 1958, Address: 0x1020b0c, Func Offset: 0xac
	// Line 1959, Address: 0x1020b14, Func Offset: 0xb4
	// Line 1962, Address: 0x1020b30, Func Offset: 0xd0
	// Line 1966, Address: 0x1020b58, Func Offset: 0xf8
	// Line 1969, Address: 0x1020b60, Func Offset: 0x100
	// Line 1970, Address: 0x1020b64, Func Offset: 0x104
	// Line 1974, Address: 0x1020b80, Func Offset: 0x120
	// Line 1981, Address: 0x1020ba8, Func Offset: 0x148
	// Func End, Address: 0x1020bc4, Func Offset: 0x164
}

// 
// Start address: 0x1020bd0
void mapinit()
{
	// Line 1992, Address: 0x1020bd0, Func Offset: 0
	// Line 1994, Address: 0x1020bd8, Func Offset: 0x8
	// Line 1995, Address: 0x1020bec, Func Offset: 0x1c
	// Line 1997, Address: 0x1020c00, Func Offset: 0x30
	// Line 1998, Address: 0x1020c18, Func Offset: 0x48
	// Line 1999, Address: 0x1020c38, Func Offset: 0x68
	// Func End, Address: 0x1020c48, Func Offset: 0x78
}

// 
// Start address: 0x1020c50
void mapset()
{
	// Line 2004, Address: 0x1020c50, Func Offset: 0
	// Func End, Address: 0x1020c58, Func Offset: 0x8
}

// 
// Start address: 0x1020c60
void divdevset()
{
	// Line 2008, Address: 0x1020c60, Func Offset: 0
	// Func End, Address: 0x1020c68, Func Offset: 0x8
}

// 
// Start address: 0x1020c70
void enecginit()
{
	// Line 2012, Address: 0x1020c70, Func Offset: 0
	// Func End, Address: 0x1020c78, Func Offset: 0x8
}

