typedef struct tagPOINT;
typedef union _anon0;
typedef struct _anon1;
typedef struct _anon2;
typedef struct _anon3;
typedef union _anon4;
typedef struct _anon5;
typedef union _anon6;
typedef struct _anon7;
typedef struct _anon8;
typedef union _anon9;
typedef struct _anon10;
typedef struct _anon11;
typedef struct _anon12;
typedef struct _anon13;

typedef void(*type_10)(void*, unsigned char, int);
typedef int(*type_14)(int, int, int, int, int);

typedef short type_0[256];
typedef unsigned char type_1[5];
typedef _anon0* type_2[8];
typedef short type_3[2];
typedef short type_4[2][1];
typedef _anon13 type_5[128];
typedef short type_6[6];
typedef _anon0* type_7[8];
typedef _anon11 type_8[20];
typedef _anon11 type_9[0];
typedef unsigned char type_11[4];
typedef short type_12[2];
typedef short type_13[2][8];
typedef unsigned short type_15[4];
typedef unsigned short type_16[4][1024];
typedef unsigned char type_17[33];
typedef unsigned char type_18[2];
typedef unsigned char type_19[64];
typedef unsigned char type_20[64][8];
typedef unsigned char type_21[22];
typedef int type_22[5];
typedef unsigned char type_23[64];
typedef unsigned char type_24[64][8];

struct tagPOINT
{
	int x;
	int y;
};

union _anon0
{
	int l;
	_anon2 w;
	_anon3 b;
};

struct _anon1
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

struct _anon2
{
	short l;
	short h;
};

struct _anon3
{
	char b4;
	char b3;
	char b2;
	char b1;
};

union _anon4
{
	short w;
	_anon5 b;
};

struct _anon5
{
	char l;
	char h;
};

union _anon6
{
	unsigned int l;
	_anon7 w;
	_anon8 b;
};

struct _anon7
{
	unsigned short l;
	unsigned short h;
};

struct _anon8
{
	unsigned char b4;
	unsigned char b3;
	unsigned char b2;
	unsigned char b1;
};

union _anon9
{
	unsigned short w;
	_anon10 b;
};

struct _anon10
{
	unsigned char l;
	unsigned char h;
};

struct _anon11
{
	char xoff;
	char yoff;
	unsigned char etc;
	unsigned short index;
};

struct _anon12
{
	unsigned char cnt;
	union
	{
		_anon11 spra[20];
		_anon11 spr[0];
	};
};

struct _anon13
{
	unsigned char actno;
	unsigned char actflg;
	unsigned short sproffset;
	_anon12** patbase;
	_anon0 xposi;
	_anon0 yposi;
	_anon4 xspeed;
	_anon4 yspeed;
	_anon4 mspeed;
	unsigned char sprhsize;
	unsigned char sprvsize;
	unsigned char sprhs;
	unsigned char sprpri;
	unsigned char patno;
	_anon4 mstno;
	unsigned char patcnt;
	unsigned char pattim;
	unsigned char pattimm;
	unsigned char colino;
	unsigned char colicnt;
	unsigned char cddat;
	unsigned char cdsts;
	unsigned char r_no0;
	unsigned char r_no1;
	_anon4 direc;
	_anon4 userflag;
	unsigned char dummy[2];
	unsigned char actfree[22];
};

unsigned char z12cwrttbl[33];
_anon0* vblockwrtbtbl[8];
_anon0* mapwrt_tbl[8];
_anon13 actwk[128];
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
_anon4 scr_timer;
_anon9 scr_die;
_anon9 zone_flag;
unsigned char scrh_flag;
unsigned char scrv_flag;
short endplpositbl[2][8];
short playpositbl[2][1];
unsigned char playmapnotbl[4];
unsigned char ballmapno2;
unsigned char ballmapno;
unsigned char loopmapno2;
unsigned char loopmapno;
_anon0 scra_v_posit;
_anon0 scra_h_posit;
_anon4 demoflag;
short enddemono;
unsigned char plflag;
void(*sMemSet)(void*, unsigned char, int);
short hscrollwork[256];
_anon0 scrz_h_posit;
_anon0 scrc_h_posit;
_anon0 scrb_h_posit;
_anon0 scrz_v_posit;
_anon0 scrc_v_posit;
_anon0 scrb_v_posit;
_anon0* lphscrollbuff;
_anon9 scrflagz;
_anon9 scrflagc;
_anon9 scrflagb;
_anon0 vscroll;
short scra_vz;
short scra_hz;
_anon9 scrflaga;
_anon4 scroll_start;
unsigned char scrb_v_count;
unsigned char scrb_h_count;
unsigned char scrc_h_count;
unsigned char scrz_h_count;
unsigned char limmoveflag;
_anon9 scrflagaw;
unsigned char mapwka[64][8];
_anon0 scra_v_posiw;
_anon0 scra_h_posiw;
_anon9 scrflagbw;
unsigned char mapwkb[64][8];
_anon0 scrb_v_posiw;
_anon0 scrb_h_posiw;
int(*SetGrid)(int, int, int, int, int);
unsigned short blockwk[4][1024];
unsigned short* pmapwk;
unsigned char play_start;
_anon1 mapinittbl;

_anon13* main_chk();
void scr_set();
void playposiset();
void scrbinit(short sXpos, short sYpos);
void scroll();
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk);
void scrollb_hv(int xOffs, int yOffs);
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
void scrv_up_ch(_anon0 lSpd);
void sv_move_plus(short sSpd);
void scrv_down_ch(_anon0 lSpd);
void scrv_move(_anon0 lSpd);
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
void divdevset();
void enecginit();

// 
// Start address: 0x1022300
_anon13* main_chk()
{
	// Line 153, Address: 0x1022300, Func Offset: 0
	// Line 154, Address: 0x1022314, Func Offset: 0x14
	// Line 156, Address: 0x1022324, Func Offset: 0x24
	// Line 158, Address: 0x102232c, Func Offset: 0x2c
	// Func End, Address: 0x1022334, Func Offset: 0x34
}

// 
// Start address: 0x1022340
void scr_set()
{
	short* pScrTbl;
	// Line 196, Address: 0x1022340, Func Offset: 0
	// Line 199, Address: 0x102234c, Func Offset: 0xc
	// Line 200, Address: 0x1022360, Func Offset: 0x20
	// Line 201, Address: 0x1022374, Func Offset: 0x34
	// Line 203, Address: 0x102237c, Func Offset: 0x3c
	// Line 204, Address: 0x1022384, Func Offset: 0x44
	// Line 205, Address: 0x1022390, Func Offset: 0x50
	// Line 206, Address: 0x1022394, Func Offset: 0x54
	// Line 207, Address: 0x10223a8, Func Offset: 0x68
	// Line 208, Address: 0x10223ac, Func Offset: 0x6c
	// Line 209, Address: 0x10223c0, Func Offset: 0x80
	// Line 210, Address: 0x10223c4, Func Offset: 0x84
	// Line 211, Address: 0x10223d8, Func Offset: 0x98
	// Line 212, Address: 0x10223dc, Func Offset: 0x9c
	// Line 213, Address: 0x10223f0, Func Offset: 0xb0
	// Line 214, Address: 0x1022410, Func Offset: 0xd0
	// Line 215, Address: 0x1022414, Func Offset: 0xd4
	// Line 216, Address: 0x1022420, Func Offset: 0xe0
	// Line 218, Address: 0x102242c, Func Offset: 0xec
	// Line 219, Address: 0x1022438, Func Offset: 0xf8
	// Line 221, Address: 0x1022444, Func Offset: 0x104
	// Line 222, Address: 0x102244c, Func Offset: 0x10c
	// Func End, Address: 0x1022460, Func Offset: 0x120
}

// 
// Start address: 0x1022460
void playposiset()
{
	short xwk;
	short ywk;
	short* pPositbl;
	// Line 271, Address: 0x1022460, Func Offset: 0
	// Line 274, Address: 0x1022474, Func Offset: 0x14
	// Line 275, Address: 0x1022484, Func Offset: 0x24
	// Line 276, Address: 0x102248c, Func Offset: 0x2c
	// Line 278, Address: 0x102249c, Func Offset: 0x3c
	// Line 279, Address: 0x10224b4, Func Offset: 0x54
	// Line 280, Address: 0x10224c4, Func Offset: 0x64
	// Line 281, Address: 0x10224cc, Func Offset: 0x6c
	// Line 283, Address: 0x10224d0, Func Offset: 0x70
	// Line 285, Address: 0x10224d8, Func Offset: 0x78
	// Line 286, Address: 0x10224f8, Func Offset: 0x98
	// Line 287, Address: 0x102251c, Func Offset: 0xbc
	// Line 289, Address: 0x1022524, Func Offset: 0xc4
	// Line 293, Address: 0x1022544, Func Offset: 0xe4
	// Line 294, Address: 0x1022558, Func Offset: 0xf8
	// Line 298, Address: 0x102256c, Func Offset: 0x10c
	// Line 299, Address: 0x1022580, Func Offset: 0x120
	// Line 300, Address: 0x102258c, Func Offset: 0x12c
	// Line 301, Address: 0x1022594, Func Offset: 0x134
	// Line 305, Address: 0x1022598, Func Offset: 0x138
	// Line 306, Address: 0x10225bc, Func Offset: 0x15c
	// Line 310, Address: 0x10225cc, Func Offset: 0x16c
	// Line 312, Address: 0x10225d4, Func Offset: 0x174
	// Line 313, Address: 0x10225e8, Func Offset: 0x188
	// Line 314, Address: 0x10225f4, Func Offset: 0x194
	// Line 315, Address: 0x10225fc, Func Offset: 0x19c
	// Line 319, Address: 0x1022600, Func Offset: 0x1a0
	// Line 320, Address: 0x1022624, Func Offset: 0x1c4
	// Line 324, Address: 0x1022634, Func Offset: 0x1d4
	// Line 326, Address: 0x102263c, Func Offset: 0x1dc
	// Line 329, Address: 0x102264c, Func Offset: 0x1ec
	// Line 330, Address: 0x102265c, Func Offset: 0x1fc
	// Line 331, Address: 0x102266c, Func Offset: 0x20c
	// Line 332, Address: 0x102267c, Func Offset: 0x21c
	// Line 333, Address: 0x102268c, Func Offset: 0x22c
	// Func End, Address: 0x10226a8, Func Offset: 0x248
}

// 
// Start address: 0x10226b0
void scrbinit(short sXpos, short sYpos)
{
	_anon0 lYwk;
	// Line 354, Address: 0x10226b0, Func Offset: 0
	// Line 357, Address: 0x10226c0, Func Offset: 0x10
	// Line 358, Address: 0x10226c8, Func Offset: 0x18
	// Line 360, Address: 0x10226cc, Func Offset: 0x1c
	// Line 361, Address: 0x10226e0, Func Offset: 0x30
	// Line 362, Address: 0x10226ec, Func Offset: 0x3c
	// Line 363, Address: 0x10226f8, Func Offset: 0x48
	// Line 365, Address: 0x1022704, Func Offset: 0x54
	// Line 366, Address: 0x1022710, Func Offset: 0x60
	// Line 368, Address: 0x102271c, Func Offset: 0x6c
	// Line 369, Address: 0x1022728, Func Offset: 0x78
	// Line 371, Address: 0x102274c, Func Offset: 0x9c
	// Line 372, Address: 0x1022758, Func Offset: 0xa8
	// Line 373, Address: 0x102277c, Func Offset: 0xcc
	// Line 374, Address: 0x102279c, Func Offset: 0xec
	// Func End, Address: 0x10227ac, Func Offset: 0xfc
}

// 
// Start address: 0x10227b0
void scroll()
{
	_anon0 ldwk;
	_anon0 ldwk2;
	_anon0 ldwk3;
	_anon0* pHscrbuf;
	int i;
	int j;
	int lXwk;
	int lYwk;
	short sYline;
	short sYnum;
	short sYnumsv;
	short* psHscr;
	short* psHscw;
	short temp;
	short wk;
	short wk;
	short wk;
	short wk;
	unsigned char z12c_cnttbl[5];
	int scaddtbl[5];
	// Line 390, Address: 0x10227b0, Func Offset: 0
	// Line 402, Address: 0x10227dc, Func Offset: 0x2c
	// Line 407, Address: 0x10227ec, Func Offset: 0x3c
	// Line 409, Address: 0x1022818, Func Offset: 0x68
	// Line 411, Address: 0x1022820, Func Offset: 0x70
	// Line 412, Address: 0x1022828, Func Offset: 0x78
	// Line 414, Address: 0x1022830, Func Offset: 0x80
	// Line 415, Address: 0x1022840, Func Offset: 0x90
	// Line 418, Address: 0x1022850, Func Offset: 0xa0
	// Line 419, Address: 0x102286c, Func Offset: 0xbc
	// Line 421, Address: 0x102287c, Func Offset: 0xcc
	// Line 422, Address: 0x1022898, Func Offset: 0xe8
	// Line 424, Address: 0x10228a8, Func Offset: 0xf8
	// Line 425, Address: 0x10228bc, Func Offset: 0x10c
	// Line 426, Address: 0x10228dc, Func Offset: 0x12c
	// Line 427, Address: 0x10228ec, Func Offset: 0x13c
	// Line 429, Address: 0x1022914, Func Offset: 0x164
	// Line 430, Address: 0x102294c, Func Offset: 0x19c
	// Line 432, Address: 0x1022960, Func Offset: 0x1b0
	// Line 433, Address: 0x1022974, Func Offset: 0x1c4
	// Line 434, Address: 0x102297c, Func Offset: 0x1cc
	// Line 435, Address: 0x1022984, Func Offset: 0x1d4
	// Line 436, Address: 0x10229a4, Func Offset: 0x1f4
	// Line 437, Address: 0x10229ac, Func Offset: 0x1fc
	// Line 438, Address: 0x10229b4, Func Offset: 0x204
	// Line 439, Address: 0x10229b8, Func Offset: 0x208
	// Line 441, Address: 0x10229c8, Func Offset: 0x218
	// Line 442, Address: 0x10229e8, Func Offset: 0x238
	// Line 443, Address: 0x1022a00, Func Offset: 0x250
	// Line 444, Address: 0x1022a08, Func Offset: 0x258
	// Line 446, Address: 0x1022a10, Func Offset: 0x260
	// Line 448, Address: 0x1022a1c, Func Offset: 0x26c
	// Line 449, Address: 0x1022a24, Func Offset: 0x274
	// Line 450, Address: 0x1022a28, Func Offset: 0x278
	// Line 451, Address: 0x1022a30, Func Offset: 0x280
	// Line 452, Address: 0x1022a34, Func Offset: 0x284
	// Line 453, Address: 0x1022a4c, Func Offset: 0x29c
	// Line 455, Address: 0x1022a7c, Func Offset: 0x2cc
	// Line 457, Address: 0x1022a98, Func Offset: 0x2e8
	// Line 458, Address: 0x1022aa0, Func Offset: 0x2f0
	// Line 459, Address: 0x1022aa4, Func Offset: 0x2f4
	// Line 460, Address: 0x1022ab4, Func Offset: 0x304
	// Line 462, Address: 0x1022ac0, Func Offset: 0x310
	// Line 464, Address: 0x1022ae0, Func Offset: 0x330
	// Line 466, Address: 0x1022aec, Func Offset: 0x33c
	// Line 467, Address: 0x1022af4, Func Offset: 0x344
	// Line 468, Address: 0x1022af8, Func Offset: 0x348
	// Line 470, Address: 0x1022b08, Func Offset: 0x358
	// Line 471, Address: 0x1022b28, Func Offset: 0x378
	// Line 473, Address: 0x1022b34, Func Offset: 0x384
	// Line 474, Address: 0x1022b3c, Func Offset: 0x38c
	// Line 475, Address: 0x1022b40, Func Offset: 0x390
	// Line 477, Address: 0x1022b50, Func Offset: 0x3a0
	// Line 478, Address: 0x1022b70, Func Offset: 0x3c0
	// Line 480, Address: 0x1022b7c, Func Offset: 0x3cc
	// Line 481, Address: 0x1022b84, Func Offset: 0x3d4
	// Line 482, Address: 0x1022b88, Func Offset: 0x3d8
	// Line 484, Address: 0x1022b98, Func Offset: 0x3e8
	// Line 485, Address: 0x1022ba4, Func Offset: 0x3f4
	// Line 486, Address: 0x1022bd4, Func Offset: 0x424
	// Line 487, Address: 0x1022c08, Func Offset: 0x458
	// Line 488, Address: 0x1022c24, Func Offset: 0x474
	// Line 490, Address: 0x1022c30, Func Offset: 0x480
	// Line 491, Address: 0x1022c68, Func Offset: 0x4b8
	// Line 492, Address: 0x1022c7c, Func Offset: 0x4cc
	// Line 494, Address: 0x1022c88, Func Offset: 0x4d8
	// Line 496, Address: 0x1022c94, Func Offset: 0x4e4
	// Line 497, Address: 0x1022c9c, Func Offset: 0x4ec
	// Line 498, Address: 0x1022cb0, Func Offset: 0x500
	// Line 499, Address: 0x1022cbc, Func Offset: 0x50c
	// Line 503, Address: 0x1022cd8, Func Offset: 0x528
	// Line 504, Address: 0x1022ce4, Func Offset: 0x534
	// Line 505, Address: 0x1022d28, Func Offset: 0x578
	// Line 506, Address: 0x1022d2c, Func Offset: 0x57c
	// Line 507, Address: 0x1022d34, Func Offset: 0x584
	// Line 509, Address: 0x1022d4c, Func Offset: 0x59c
	// Line 510, Address: 0x1022d68, Func Offset: 0x5b8
	// Line 511, Address: 0x1022d74, Func Offset: 0x5c4
	// Line 512, Address: 0x1022d80, Func Offset: 0x5d0
	// Line 513, Address: 0x1022d98, Func Offset: 0x5e8
	// Line 514, Address: 0x1022da8, Func Offset: 0x5f8
	// Line 515, Address: 0x1022dc0, Func Offset: 0x610
	// Line 516, Address: 0x1022dcc, Func Offset: 0x61c
	// Func End, Address: 0x1022e00, Func Offset: 0x650
}

// 
// Start address: 0x1022e00
void zonescrsetsub0(short yoffs, short yline, _anon0** pHscrbuf, short* pHscrwk)
{
	int i;
	int j;
	_anon0 ldwk;
	// Line 537, Address: 0x1022e00, Func Offset: 0
	// Line 541, Address: 0x1022e1c, Func Offset: 0x1c
	// Line 543, Address: 0x1022e20, Func Offset: 0x20
	// Line 544, Address: 0x1022e3c, Func Offset: 0x3c
	// Line 545, Address: 0x1022e48, Func Offset: 0x48
	// Line 547, Address: 0x1022e54, Func Offset: 0x54
	// Line 548, Address: 0x1022e5c, Func Offset: 0x5c
	// Line 549, Address: 0x1022e6c, Func Offset: 0x6c
	// Line 550, Address: 0x1022e90, Func Offset: 0x90
	// Line 551, Address: 0x1022eb0, Func Offset: 0xb0
	// Func End, Address: 0x1022ec4, Func Offset: 0xc4
}

// 
// Start address: 0x1022ed0
void scrollb_hv(int xOffs, int yOffs)
{
	int lwk;
	int lsv;
	_anon0 ldwk;
	// Line 573, Address: 0x1022ed0, Func Offset: 0
	// Line 577, Address: 0x1022ee4, Func Offset: 0x14
	// Line 578, Address: 0x1022eec, Func Offset: 0x1c
	// Line 579, Address: 0x1022f00, Func Offset: 0x30
	// Line 580, Address: 0x1022f30, Func Offset: 0x60
	// Line 581, Address: 0x1022f44, Func Offset: 0x74
	// Line 582, Address: 0x1022f50, Func Offset: 0x80
	// Line 583, Address: 0x1022f64, Func Offset: 0x94
	// Line 585, Address: 0x1022f6c, Func Offset: 0x9c
	// Line 590, Address: 0x1022f80, Func Offset: 0xb0
	// Line 591, Address: 0x1022f88, Func Offset: 0xb8
	// Line 592, Address: 0x1022f9c, Func Offset: 0xcc
	// Line 593, Address: 0x1022fcc, Func Offset: 0xfc
	// Line 594, Address: 0x1022fe0, Func Offset: 0x110
	// Line 595, Address: 0x1022fec, Func Offset: 0x11c
	// Line 596, Address: 0x1023000, Func Offset: 0x130
	// Line 598, Address: 0x1023008, Func Offset: 0x138
	// Line 603, Address: 0x102301c, Func Offset: 0x14c
	// Func End, Address: 0x1023030, Func Offset: 0x160
}

// 
// Start address: 0x1023030
void scrollc_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	short wk;
	// Line 734, Address: 0x1023030, Func Offset: 0
	// Line 738, Address: 0x1023048, Func Offset: 0x18
	// Line 739, Address: 0x1023050, Func Offset: 0x20
	// Line 740, Address: 0x1023058, Func Offset: 0x28
	// Line 741, Address: 0x1023060, Func Offset: 0x30
	// Line 742, Address: 0x1023064, Func Offset: 0x34
	// Line 743, Address: 0x102307c, Func Offset: 0x4c
	// Line 744, Address: 0x1023088, Func Offset: 0x58
	// Line 746, Address: 0x10230a4, Func Offset: 0x74
	// Line 747, Address: 0x10230b0, Func Offset: 0x80
	// Line 748, Address: 0x10230c4, Func Offset: 0x94
	// Line 749, Address: 0x10230d0, Func Offset: 0xa0
	// Line 750, Address: 0x10230f4, Func Offset: 0xc4
	// Line 752, Address: 0x10230fc, Func Offset: 0xcc
	// Line 757, Address: 0x1023124, Func Offset: 0xf4
	// Func End, Address: 0x102313c, Func Offset: 0x10c
}

// 
// Start address: 0x1023140
void scrollz_h(int xoffs, int flgbit)
{
	int lXwk;
	int lXsv;
	_anon0 ldXwk;
	short wk;
	// Line 775, Address: 0x1023140, Func Offset: 0
	// Line 779, Address: 0x1023158, Func Offset: 0x18
	// Line 780, Address: 0x1023160, Func Offset: 0x20
	// Line 781, Address: 0x1023168, Func Offset: 0x28
	// Line 782, Address: 0x1023170, Func Offset: 0x30
	// Line 783, Address: 0x1023174, Func Offset: 0x34
	// Line 784, Address: 0x102318c, Func Offset: 0x4c
	// Line 785, Address: 0x1023198, Func Offset: 0x58
	// Line 787, Address: 0x10231b4, Func Offset: 0x74
	// Line 788, Address: 0x10231c0, Func Offset: 0x80
	// Line 789, Address: 0x10231d4, Func Offset: 0x94
	// Line 790, Address: 0x10231e0, Func Offset: 0xa0
	// Line 791, Address: 0x1023204, Func Offset: 0xc4
	// Line 793, Address: 0x102320c, Func Offset: 0xcc
	// Line 798, Address: 0x1023234, Func Offset: 0xf4
	// Func End, Address: 0x102324c, Func Offset: 0x10c
}

// 
// Start address: 0x1023250
void scroll_h()
{
	short xwk;
	unsigned char bXwk;
	// Line 813, Address: 0x1023250, Func Offset: 0
	// Line 817, Address: 0x1023260, Func Offset: 0x10
	// Line 819, Address: 0x1023270, Func Offset: 0x20
	// Line 820, Address: 0x1023278, Func Offset: 0x28
	// Line 821, Address: 0x10232ac, Func Offset: 0x5c
	// Line 822, Address: 0x10232b4, Func Offset: 0x64
	// Line 823, Address: 0x10232c8, Func Offset: 0x78
	// Line 824, Address: 0x10232ec, Func Offset: 0x9c
	// Line 825, Address: 0x1023300, Func Offset: 0xb0
	// Line 826, Address: 0x1023308, Func Offset: 0xb8
	// Line 831, Address: 0x102331c, Func Offset: 0xcc
	// Func End, Address: 0x1023334, Func Offset: 0xe4
}

// 
// Start address: 0x1023340
void scrh_move()
{
	short xwk;
	// Line 848, Address: 0x1023340, Func Offset: 0
	// Line 851, Address: 0x1023348, Func Offset: 0x8
	// Line 852, Address: 0x1023390, Func Offset: 0x50
	// Line 854, Address: 0x10233a0, Func Offset: 0x60
	// Line 855, Address: 0x10233a8, Func Offset: 0x68
	// Line 856, Address: 0x10233b0, Func Offset: 0x70
	// Line 858, Address: 0x10233c0, Func Offset: 0x80
	// Line 859, Address: 0x10233d4, Func Offset: 0x94
	// Line 863, Address: 0x10233e0, Func Offset: 0xa0
	// Line 864, Address: 0x10233f4, Func Offset: 0xb4
	// Line 865, Address: 0x1023418, Func Offset: 0xd8
	// Line 867, Address: 0x1023428, Func Offset: 0xe8
	// Line 869, Address: 0x1023430, Func Offset: 0xf0
	// Line 870, Address: 0x1023444, Func Offset: 0x104
	// Line 874, Address: 0x1023450, Func Offset: 0x110
	// Line 875, Address: 0x1023464, Func Offset: 0x124
	// Line 876, Address: 0x1023488, Func Offset: 0x148
	// Line 881, Address: 0x1023498, Func Offset: 0x158
	// Line 882, Address: 0x10234c8, Func Offset: 0x188
	// Line 883, Address: 0x10234d0, Func Offset: 0x190
	// Func End, Address: 0x10234e0, Func Offset: 0x1a0
}

// 
// Start address: 0x10234e0
void scroll_v()
{
	short ywk;
	// Line 898, Address: 0x10234e0, Func Offset: 0
	// Line 901, Address: 0x10234ec, Func Offset: 0xc
	// Line 902, Address: 0x1023520, Func Offset: 0x40
	// Line 903, Address: 0x1023538, Func Offset: 0x58
	// Line 907, Address: 0x1023544, Func Offset: 0x64
	// Line 908, Address: 0x102355c, Func Offset: 0x7c
	// Line 909, Address: 0x1023568, Func Offset: 0x88
	// Line 910, Address: 0x102358c, Func Offset: 0xac
	// Line 911, Address: 0x10235a0, Func Offset: 0xc0
	// Line 912, Address: 0x10235ac, Func Offset: 0xcc
	// Line 913, Address: 0x10235b4, Func Offset: 0xd4
	// Line 914, Address: 0x10235dc, Func Offset: 0xfc
	// Line 915, Address: 0x1023604, Func Offset: 0x124
	// Line 916, Address: 0x1023610, Func Offset: 0x130
	// Line 918, Address: 0x1023618, Func Offset: 0x138
	// Line 919, Address: 0x1023640, Func Offset: 0x160
	// Line 920, Address: 0x1023650, Func Offset: 0x170
	// Line 921, Address: 0x1023658, Func Offset: 0x178
	// Line 926, Address: 0x1023660, Func Offset: 0x180
	// Line 927, Address: 0x102368c, Func Offset: 0x1ac
	// Line 928, Address: 0x1023698, Func Offset: 0x1b8
	// Line 929, Address: 0x10236a0, Func Offset: 0x1c0
	// Line 930, Address: 0x10236b0, Func Offset: 0x1d0
	// Line 931, Address: 0x10236b8, Func Offset: 0x1d8
	// Line 936, Address: 0x10236c0, Func Offset: 0x1e0
	// Line 937, Address: 0x10236c8, Func Offset: 0x1e8
	// Func End, Address: 0x10236dc, Func Offset: 0x1fc
}

// 
// Start address: 0x10236e0
void sv_move_main(short yPos)
{
	short spdwk;
	// Line 951, Address: 0x10236e0, Func Offset: 0
	// Line 954, Address: 0x10236f0, Func Offset: 0x10
	// Line 955, Address: 0x102370c, Func Offset: 0x2c
	// Line 956, Address: 0x1023724, Func Offset: 0x44
	// Line 957, Address: 0x1023748, Func Offset: 0x68
	// Line 958, Address: 0x1023750, Func Offset: 0x70
	// Line 962, Address: 0x1023760, Func Offset: 0x80
	// Line 963, Address: 0x1023774, Func Offset: 0x94
	// Line 964, Address: 0x1023780, Func Offset: 0xa0
	// Line 967, Address: 0x1023788, Func Offset: 0xa8
	// Line 968, Address: 0x10237a0, Func Offset: 0xc0
	// Line 969, Address: 0x10237ac, Func Offset: 0xcc
	// Line 970, Address: 0x10237cc, Func Offset: 0xec
	// Line 971, Address: 0x10237d8, Func Offset: 0xf8
	// Line 972, Address: 0x10237e0, Func Offset: 0x100
	// Line 974, Address: 0x10237ec, Func Offset: 0x10c
	// Line 976, Address: 0x10237f4, Func Offset: 0x114
	// Line 977, Address: 0x102380c, Func Offset: 0x12c
	// Line 978, Address: 0x1023818, Func Offset: 0x138
	// Line 979, Address: 0x1023838, Func Offset: 0x158
	// Line 980, Address: 0x1023844, Func Offset: 0x164
	// Line 981, Address: 0x102384c, Func Offset: 0x16c
	// Line 984, Address: 0x1023858, Func Offset: 0x178
	// Func End, Address: 0x102386c, Func Offset: 0x18c
}

// 
// Start address: 0x1023870
void sv_move_main2(short yPos)
{
	short spdwk;
	// Line 998, Address: 0x1023870, Func Offset: 0
	// Line 1001, Address: 0x1023880, Func Offset: 0x10
	// Line 1003, Address: 0x102388c, Func Offset: 0x1c
	// Line 1004, Address: 0x10238a4, Func Offset: 0x34
	// Line 1005, Address: 0x10238b0, Func Offset: 0x40
	// Line 1006, Address: 0x10238d0, Func Offset: 0x60
	// Line 1007, Address: 0x10238dc, Func Offset: 0x6c
	// Line 1008, Address: 0x10238e4, Func Offset: 0x74
	// Line 1010, Address: 0x10238f0, Func Offset: 0x80
	// Func End, Address: 0x1023904, Func Offset: 0x94
}

// 
// Start address: 0x1023910
void sv_move_sub(short yPos)
{
	_anon0 lSpd;
	// Line 1025, Address: 0x1023910, Func Offset: 0
	// Line 1028, Address: 0x102391c, Func Offset: 0xc
	// Line 1029, Address: 0x1023920, Func Offset: 0x10
	// Line 1030, Address: 0x102394c, Func Offset: 0x3c
	// Line 1031, Address: 0x1023960, Func Offset: 0x50
	// Line 1032, Address: 0x102396c, Func Offset: 0x5c
	// Line 1033, Address: 0x1023974, Func Offset: 0x64
	// Line 1035, Address: 0x1023980, Func Offset: 0x70
	// Func End, Address: 0x1023990, Func Offset: 0x80
}

// 
// Start address: 0x1023990
void sv_move_sub2()
{
	// Line 1039, Address: 0x1023990, Func Offset: 0
	// Line 1040, Address: 0x1023998, Func Offset: 0x8
	// Line 1042, Address: 0x10239a0, Func Offset: 0x10
	// Line 1043, Address: 0x10239ac, Func Offset: 0x1c
	// Func End, Address: 0x10239bc, Func Offset: 0x2c
}

// 
// Start address: 0x10239c0
void sv_move_minus(short speed)
{
	_anon0 lSpd;
	short wk;
	// Line 1057, Address: 0x10239c0, Func Offset: 0
	// Line 1060, Address: 0x10239d0, Func Offset: 0x10
	// Line 1061, Address: 0x10239f4, Func Offset: 0x34
	// Line 1062, Address: 0x1023a0c, Func Offset: 0x4c
	// Line 1063, Address: 0x1023a18, Func Offset: 0x58
	// Func End, Address: 0x1023a2c, Func Offset: 0x6c
}

// 
// Start address: 0x1023a30
void scrv_up_ch(_anon0 lSpd)
{
	// Line 1078, Address: 0x1023a30, Func Offset: 0
	// Line 1079, Address: 0x1023a3c, Func Offset: 0xc
	// Line 1080, Address: 0x1023a64, Func Offset: 0x34
	// Line 1082, Address: 0x1023a7c, Func Offset: 0x4c
	// Line 1083, Address: 0x1023a88, Func Offset: 0x58
	// Line 1084, Address: 0x1023a90, Func Offset: 0x60
	// Line 1085, Address: 0x1023a9c, Func Offset: 0x6c
	// Line 1086, Address: 0x1023ab0, Func Offset: 0x80
	// Line 1087, Address: 0x1023ac4, Func Offset: 0x94
	// Line 1091, Address: 0x1023ad8, Func Offset: 0xa8
	// Line 1092, Address: 0x1023ae4, Func Offset: 0xb4
	// Func End, Address: 0x1023af4, Func Offset: 0xc4
}

// 
// Start address: 0x1023b00
void sv_move_plus(short sSpd)
{
	_anon0 lSpd;
	short wk;
	// Line 1106, Address: 0x1023b00, Func Offset: 0
	// Line 1109, Address: 0x1023b10, Func Offset: 0x10
	// Line 1110, Address: 0x1023b30, Func Offset: 0x30
	// Line 1111, Address: 0x1023b48, Func Offset: 0x48
	// Line 1112, Address: 0x1023b54, Func Offset: 0x54
	// Func End, Address: 0x1023b68, Func Offset: 0x68
}

// 
// Start address: 0x1023b70
void scrv_down_ch(_anon0 lSpd)
{
	// Line 1127, Address: 0x1023b70, Func Offset: 0
	// Line 1128, Address: 0x1023b7c, Func Offset: 0xc
	// Line 1129, Address: 0x1023ba4, Func Offset: 0x34
	// Line 1131, Address: 0x1023bbc, Func Offset: 0x4c
	// Line 1132, Address: 0x1023bc8, Func Offset: 0x58
	// Line 1133, Address: 0x1023bd0, Func Offset: 0x60
	// Line 1134, Address: 0x1023bdc, Func Offset: 0x6c
	// Line 1135, Address: 0x1023bf0, Func Offset: 0x80
	// Line 1136, Address: 0x1023c04, Func Offset: 0x94
	// Line 1140, Address: 0x1023c18, Func Offset: 0xa8
	// Line 1141, Address: 0x1023c24, Func Offset: 0xb4
	// Func End, Address: 0x1023c34, Func Offset: 0xc4
}

// 
// Start address: 0x1023c40
void scrv_move(_anon0 lSpd)
{
	short ywk;
	short ysv;
	_anon6 spdwk;
	short wk;
	// Line 1158, Address: 0x1023c40, Func Offset: 0
	// Line 1162, Address: 0x1023c54, Func Offset: 0x14
	// Line 1163, Address: 0x1023c64, Func Offset: 0x24
	// Line 1164, Address: 0x1023c7c, Func Offset: 0x3c
	// Line 1165, Address: 0x1023c90, Func Offset: 0x50
	// Line 1166, Address: 0x1023ca8, Func Offset: 0x68
	// Line 1168, Address: 0x1023cb4, Func Offset: 0x74
	// Line 1170, Address: 0x1023cc0, Func Offset: 0x80
	// Line 1171, Address: 0x1023cfc, Func Offset: 0xbc
	// Line 1172, Address: 0x1023d04, Func Offset: 0xc4
	// Line 1173, Address: 0x1023d18, Func Offset: 0xd8
	// Line 1174, Address: 0x1023d44, Func Offset: 0x104
	// Line 1175, Address: 0x1023d54, Func Offset: 0x114
	// Line 1176, Address: 0x1023d68, Func Offset: 0x128
	// Line 1177, Address: 0x1023d70, Func Offset: 0x130
	// Line 1182, Address: 0x1023d84, Func Offset: 0x144
	// Func End, Address: 0x1023d9c, Func Offset: 0x15c
}

// 
// Start address: 0x1023da0
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
	// Line 1200, Address: 0x1023da0, Func Offset: 0
	// Line 1209, Address: 0x1023dc0, Func Offset: 0x20
	// Line 1210, Address: 0x1023dc4, Func Offset: 0x24
	// Line 1211, Address: 0x1023dd0, Func Offset: 0x30
	// Line 1212, Address: 0x1023ddc, Func Offset: 0x3c
	// Line 1213, Address: 0x1023de4, Func Offset: 0x44
	// Line 1214, Address: 0x1023dec, Func Offset: 0x4c
	// Line 1216, Address: 0x1023e00, Func Offset: 0x60
	// Line 1217, Address: 0x1023e04, Func Offset: 0x64
	// Line 1218, Address: 0x1023e10, Func Offset: 0x70
	// Line 1219, Address: 0x1023e1c, Func Offset: 0x7c
	// Line 1220, Address: 0x1023e24, Func Offset: 0x84
	// Line 1222, Address: 0x1023e2c, Func Offset: 0x8c
	// Line 1223, Address: 0x1023e38, Func Offset: 0x98
	// Line 1224, Address: 0x1023e4c, Func Offset: 0xac
	// Line 1226, Address: 0x1023e58, Func Offset: 0xb8
	// Line 1227, Address: 0x1023e60, Func Offset: 0xc0
	// Line 1229, Address: 0x1023e68, Func Offset: 0xc8
	// Line 1231, Address: 0x1023e88, Func Offset: 0xe8
	// Line 1237, Address: 0x1023eb4, Func Offset: 0x114
	// Line 1238, Address: 0x1023ec8, Func Offset: 0x128
	// Line 1240, Address: 0x1023ed4, Func Offset: 0x134
	// Line 1241, Address: 0x1023edc, Func Offset: 0x13c
	// Line 1242, Address: 0x1023ee4, Func Offset: 0x144
	// Line 1244, Address: 0x1023f04, Func Offset: 0x164
	// Line 1250, Address: 0x1023f30, Func Offset: 0x190
	// Line 1251, Address: 0x1023f44, Func Offset: 0x1a4
	// Line 1253, Address: 0x1023f50, Func Offset: 0x1b0
	// Line 1254, Address: 0x1023f58, Func Offset: 0x1b8
	// Line 1255, Address: 0x1023f60, Func Offset: 0x1c0
	// Line 1257, Address: 0x1023f80, Func Offset: 0x1e0
	// Line 1263, Address: 0x1023fac, Func Offset: 0x20c
	// Line 1264, Address: 0x1023fc0, Func Offset: 0x220
	// Line 1266, Address: 0x1023fcc, Func Offset: 0x22c
	// Line 1267, Address: 0x1023fd4, Func Offset: 0x234
	// Line 1268, Address: 0x1023fdc, Func Offset: 0x23c
	// Line 1270, Address: 0x1023ffc, Func Offset: 0x25c
	// Line 1279, Address: 0x1024028, Func Offset: 0x288
	// Func End, Address: 0x1024050, Func Offset: 0x2b0
}

// 
// Start address: 0x1024050
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
	// Line 1296, Address: 0x1024050, Func Offset: 0
	// Line 1307, Address: 0x102407c, Func Offset: 0x2c
	// Line 1309, Address: 0x1024084, Func Offset: 0x34
	// Line 1310, Address: 0x102409c, Func Offset: 0x4c
	// Line 1311, Address: 0x10240b0, Func Offset: 0x60
	// Line 1313, Address: 0x10240b8, Func Offset: 0x68
	// Line 1315, Address: 0x10240cc, Func Offset: 0x7c
	// Line 1316, Address: 0x10240e4, Func Offset: 0x94
	// Line 1317, Address: 0x10240f8, Func Offset: 0xa8
	// Line 1318, Address: 0x1024100, Func Offset: 0xb0
	// Line 1320, Address: 0x1024108, Func Offset: 0xb8
	// Line 1321, Address: 0x102411c, Func Offset: 0xcc
	// Line 1326, Address: 0x1024124, Func Offset: 0xd4
	// Line 1327, Address: 0x1024174, Func Offset: 0x124
	// Line 1328, Address: 0x102417c, Func Offset: 0x12c
	// Line 1334, Address: 0x102419c, Func Offset: 0x14c
	// Line 1335, Address: 0x10241bc, Func Offset: 0x16c
	// Line 1336, Address: 0x10241e0, Func Offset: 0x190
	// Line 1337, Address: 0x10241ec, Func Offset: 0x19c
	// Line 1338, Address: 0x10241f4, Func Offset: 0x1a4
	// Line 1340, Address: 0x1024214, Func Offset: 0x1c4
	// Line 1344, Address: 0x1024240, Func Offset: 0x1f0
	// Line 1347, Address: 0x1024248, Func Offset: 0x1f8
	// Line 1348, Address: 0x102424c, Func Offset: 0x1fc
	// Line 1352, Address: 0x102426c, Func Offset: 0x21c
	// Line 1359, Address: 0x1024298, Func Offset: 0x248
	// Line 1366, Address: 0x10242ac, Func Offset: 0x25c
	// Line 1367, Address: 0x10242b4, Func Offset: 0x264
	// Line 1368, Address: 0x10242bc, Func Offset: 0x26c
	// Line 1369, Address: 0x10242d4, Func Offset: 0x284
	// Line 1370, Address: 0x10242f4, Func Offset: 0x2a4
	// Line 1374, Address: 0x10242fc, Func Offset: 0x2ac
	// Line 1376, Address: 0x102432c, Func Offset: 0x2dc
	// Line 1377, Address: 0x1024338, Func Offset: 0x2e8
	// Line 1381, Address: 0x1024348, Func Offset: 0x2f8
	// Line 1382, Address: 0x1024354, Func Offset: 0x304
	// Line 1383, Address: 0x1024374, Func Offset: 0x324
	// Line 1384, Address: 0x10243a0, Func Offset: 0x350
	// Line 1385, Address: 0x10243c0, Func Offset: 0x370
	// Line 1387, Address: 0x10243e4, Func Offset: 0x394
	// Line 1390, Address: 0x1024408, Func Offset: 0x3b8
	// Line 1392, Address: 0x1024428, Func Offset: 0x3d8
	// Line 1394, Address: 0x102443c, Func Offset: 0x3ec
	// Line 1395, Address: 0x1024448, Func Offset: 0x3f8
	// Line 1396, Address: 0x1024458, Func Offset: 0x408
	// Line 1398, Address: 0x1024460, Func Offset: 0x410
	// Func End, Address: 0x1024488, Func Offset: 0x438
}

// 
// Start address: 0x1024490
void scrollwrtc()
{
	// Line 1404, Address: 0x1024490, Func Offset: 0
	// Func End, Address: 0x1024498, Func Offset: 0x8
}

// 
// Start address: 0x10244a0
void scrollwrtz()
{
	// Line 1409, Address: 0x10244a0, Func Offset: 0
	// Func End, Address: 0x10244a8, Func Offset: 0x8
}

// 
// Start address: 0x10244b0
void hblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1427, Address: 0x10244b0, Func Offset: 0
	// Line 1440, Address: 0x10244d8, Func Offset: 0x28
	// Line 1443, Address: 0x10244f8, Func Offset: 0x48
	// Line 1444, Address: 0x102450c, Func Offset: 0x5c
	// Line 1445, Address: 0x1024520, Func Offset: 0x70
	// Line 1446, Address: 0x1024534, Func Offset: 0x84
	// Line 1448, Address: 0x1024548, Func Offset: 0x98
	// Line 1449, Address: 0x1024554, Func Offset: 0xa4
	// Line 1450, Address: 0x1024568, Func Offset: 0xb8
	// Func End, Address: 0x1024578, Func Offset: 0xc8
}

// 
// Start address: 0x1024580
void hblockwrt1(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1454, Address: 0x1024580, Func Offset: 0
	// Line 1458, Address: 0x10245a8, Func Offset: 0x28
	// Line 1461, Address: 0x10245c8, Func Offset: 0x48
	// Line 1462, Address: 0x10245dc, Func Offset: 0x5c
	// Line 1463, Address: 0x10245f0, Func Offset: 0x70
	// Line 1464, Address: 0x1024604, Func Offset: 0x84
	// Line 1466, Address: 0x1024618, Func Offset: 0x98
	// Line 1467, Address: 0x1024624, Func Offset: 0xa4
	// Line 1468, Address: 0x1024638, Func Offset: 0xb8
	// Func End, Address: 0x1024648, Func Offset: 0xc8
}

// 
// Start address: 0x1024650
void vblockwrt(tagPOINT* pTilePoint, int VramBase, unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int lpcnt)
{
	int BlkIndex;
	// Line 1488, Address: 0x1024650, Func Offset: 0
	// Line 1492, Address: 0x1024678, Func Offset: 0x28
	// Line 1495, Address: 0x1024698, Func Offset: 0x48
	// Line 1496, Address: 0x10246ac, Func Offset: 0x5c
	// Line 1497, Address: 0x10246bc, Func Offset: 0x6c
	// Line 1498, Address: 0x10246d0, Func Offset: 0x80
	// Line 1500, Address: 0x10246e0, Func Offset: 0x90
	// Line 1501, Address: 0x10246ec, Func Offset: 0x9c
	// Line 1502, Address: 0x1024700, Func Offset: 0xb0
	// Func End, Address: 0x1024710, Func Offset: 0xc0
}

// 
// Start address: 0x1024710
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
	// Line 1521, Address: 0x1024710, Func Offset: 0
	// Line 1527, Address: 0x1024744, Func Offset: 0x34
	// Line 1529, Address: 0x1024754, Func Offset: 0x44
	// Line 1530, Address: 0x1024758, Func Offset: 0x48
	// Line 1531, Address: 0x1024760, Func Offset: 0x50
	// Line 1533, Address: 0x1024770, Func Offset: 0x60
	// Line 1535, Address: 0x1024774, Func Offset: 0x64
	// Line 1536, Address: 0x102477c, Func Offset: 0x6c
	// Line 1539, Address: 0x1024784, Func Offset: 0x74
	// Line 1540, Address: 0x102478c, Func Offset: 0x7c
	// Line 1541, Address: 0x1024798, Func Offset: 0x88
	// Line 1543, Address: 0x10247a4, Func Offset: 0x94
	// Line 1544, Address: 0x10247ac, Func Offset: 0x9c
	// Line 1545, Address: 0x10247b4, Func Offset: 0xa4
	// Line 1546, Address: 0x10247bc, Func Offset: 0xac
	// Line 1548, Address: 0x10247c8, Func Offset: 0xb8
	// Line 1549, Address: 0x10247d0, Func Offset: 0xc0
	// Line 1550, Address: 0x10247d8, Func Offset: 0xc8
	// Line 1551, Address: 0x10247e0, Func Offset: 0xd0
	// Line 1553, Address: 0x10247ec, Func Offset: 0xdc
	// Line 1554, Address: 0x10247f4, Func Offset: 0xe4
	// Line 1555, Address: 0x10247fc, Func Offset: 0xec
	// Line 1558, Address: 0x1024804, Func Offset: 0xf4
	// Line 1559, Address: 0x102480c, Func Offset: 0xfc
	// Line 1562, Address: 0x1024814, Func Offset: 0x104
	// Line 1563, Address: 0x1024858, Func Offset: 0x148
	// Line 1564, Address: 0x102489c, Func Offset: 0x18c
	// Line 1565, Address: 0x10248e0, Func Offset: 0x1d0
	// Line 1567, Address: 0x1024924, Func Offset: 0x214
	// Func End, Address: 0x1024954, Func Offset: 0x244
}

// 
// Start address: 0x1024960
int mapadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1585, Address: 0x1024960, Func Offset: 0
	// Line 1586, Address: 0x1024980, Func Offset: 0x20
	// Line 1587, Address: 0x10249a0, Func Offset: 0x40
	// Func End, Address: 0x10249b0, Func Offset: 0x50
}

// 
// Start address: 0x10249b0
int mapadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	// Line 1589, Address: 0x10249b0, Func Offset: 0
	// Line 1590, Address: 0x10249d0, Func Offset: 0x20
	// Line 1591, Address: 0x10249d4, Func Offset: 0x24
	// Line 1592, Address: 0x10249f4, Func Offset: 0x44
	// Func End, Address: 0x1024a04, Func Offset: 0x54
}

// 
// Start address: 0x1024a10
int mapadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex)
{
	int xBlk;
	int yBlk;
	int i;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1599, Address: 0x1024a10, Func Offset: 0
	// Line 1605, Address: 0x1024a40, Func Offset: 0x30
	// Line 1606, Address: 0x1024a50, Func Offset: 0x40
	// Line 1612, Address: 0x1024a60, Func Offset: 0x50
	// Line 1613, Address: 0x1024a7c, Func Offset: 0x6c
	// Line 1614, Address: 0x1024a80, Func Offset: 0x70
	// Line 1615, Address: 0x1024a9c, Func Offset: 0x8c
	// Line 1616, Address: 0x1024aa0, Func Offset: 0x90
	// Line 1617, Address: 0x1024ac0, Func Offset: 0xb0
	// Line 1618, Address: 0x1024ac8, Func Offset: 0xb8
	// Line 1619, Address: 0x1024ae8, Func Offset: 0xd8
	// Line 1620, Address: 0x1024af0, Func Offset: 0xe0
	// Line 1621, Address: 0x1024b38, Func Offset: 0x128
	// Line 1623, Address: 0x1024b44, Func Offset: 0x134
	// Line 1625, Address: 0x1024b60, Func Offset: 0x150
	// Line 1630, Address: 0x1024b68, Func Offset: 0x158
	// Line 1631, Address: 0x1024b74, Func Offset: 0x164
	// Line 1634, Address: 0x1024b80, Func Offset: 0x170
	// Line 1635, Address: 0x1024b88, Func Offset: 0x178
	// Line 1636, Address: 0x1024ba8, Func Offset: 0x198
	// Line 1637, Address: 0x1024bc4, Func Offset: 0x1b4
	// Line 1638, Address: 0x1024bcc, Func Offset: 0x1bc
	// Line 1639, Address: 0x1024bec, Func Offset: 0x1dc
	// Line 1641, Address: 0x1024c08, Func Offset: 0x1f8
	// Line 1642, Address: 0x1024c10, Func Offset: 0x200
	// Line 1643, Address: 0x1024c18, Func Offset: 0x208
	// Line 1644, Address: 0x1024c24, Func Offset: 0x214
	// Line 1645, Address: 0x1024c3c, Func Offset: 0x22c
	// Line 1647, Address: 0x1024c4c, Func Offset: 0x23c
	// Line 1650, Address: 0x1024c58, Func Offset: 0x248
	// Line 1651, Address: 0x1024c60, Func Offset: 0x250
	// Line 1652, Address: 0x1024c64, Func Offset: 0x254
	// Func End, Address: 0x1024c84, Func Offset: 0x274
}

// 
// Start address: 0x1024c90
int mapadrset2(unsigned short xOffs, unsigned short yOffs, unsigned char* pMapWk, int* pIndex, unsigned short** ppBlockNo)
{
	int xBlk;
	int yBlk;
	unsigned char ScreenNo;
	unsigned short* lpw;
	// Line 1672, Address: 0x1024c90, Func Offset: 0
	// Line 1680, Address: 0x1024cb8, Func Offset: 0x28
	// Line 1681, Address: 0x1024d1c, Func Offset: 0x8c
	// Line 1687, Address: 0x1024d24, Func Offset: 0x94
	// Line 1688, Address: 0x1024d2c, Func Offset: 0x9c
	// Line 1689, Address: 0x1024d4c, Func Offset: 0xbc
	// Line 1690, Address: 0x1024d68, Func Offset: 0xd8
	// Line 1691, Address: 0x1024d70, Func Offset: 0xe0
	// Line 1692, Address: 0x1024d90, Func Offset: 0x100
	// Line 1695, Address: 0x1024dac, Func Offset: 0x11c
	// Line 1696, Address: 0x1024db4, Func Offset: 0x124
	// Line 1697, Address: 0x1024dbc, Func Offset: 0x12c
	// Line 1698, Address: 0x1024dc8, Func Offset: 0x138
	// Line 1699, Address: 0x1024de0, Func Offset: 0x150
	// Line 1700, Address: 0x1024de8, Func Offset: 0x158
	// Line 1705, Address: 0x1024df8, Func Offset: 0x168
	// Line 1708, Address: 0x1024e04, Func Offset: 0x174
	// Line 1709, Address: 0x1024e0c, Func Offset: 0x17c
	// Line 1710, Address: 0x1024e10, Func Offset: 0x180
	// Func End, Address: 0x1024e2c, Func Offset: 0x19c
}

// 
// Start address: 0x1024e30
void block_wrt(unsigned short BlockNo, unsigned short xOffs, unsigned short yOffs)
{
	int VramBase;
	tagPOINT TilePoint;
	unsigned char* pMapWk;
	unsigned short* pBlockIndex;
	int Index;
	// Line 1724, Address: 0x1024e30, Func Offset: 0
	// Line 1731, Address: 0x1024e4c, Func Offset: 0x1c
	// Line 1732, Address: 0x1024e50, Func Offset: 0x20
	// Line 1733, Address: 0x1024e58, Func Offset: 0x28
	// Line 1734, Address: 0x1024e7c, Func Offset: 0x4c
	// Line 1735, Address: 0x1024e88, Func Offset: 0x58
	// Line 1736, Address: 0x1024ea0, Func Offset: 0x70
	// Line 1737, Address: 0x1024eb4, Func Offset: 0x84
	// Line 1742, Address: 0x1024ecc, Func Offset: 0x9c
	// Func End, Address: 0x1024ee4, Func Offset: 0xb4
}

// 
// Start address: 0x1024ef0
int block_chk(unsigned short xOffs, unsigned short yOffs)
{
	// Line 1756, Address: 0x1024ef0, Func Offset: 0
	// Line 1757, Address: 0x1024efc, Func Offset: 0xc
	// Line 1758, Address: 0x1024f28, Func Offset: 0x38
	// Line 1759, Address: 0x1024f74, Func Offset: 0x84
	// Line 1760, Address: 0x1024fa0, Func Offset: 0xb0
	// Line 1762, Address: 0x1024fec, Func Offset: 0xfc
	// Line 1768, Address: 0x1024ff8, Func Offset: 0x108
	// Line 1769, Address: 0x1024ffc, Func Offset: 0x10c
	// Func End, Address: 0x1025008, Func Offset: 0x118
}

// 
// Start address: 0x1025010
void vramadrset(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1786, Address: 0x1025010, Func Offset: 0
	// Line 1787, Address: 0x102502c, Func Offset: 0x1c
	// Line 1789, Address: 0x1025048, Func Offset: 0x38
	// Func End, Address: 0x1025058, Func Offset: 0x48
}

// 
// Start address: 0x1025060
void vramadrset1(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1791, Address: 0x1025060, Func Offset: 0
	// Line 1792, Address: 0x102507c, Func Offset: 0x1c
	// Line 1793, Address: 0x1025080, Func Offset: 0x20
	// Line 1795, Address: 0x102509c, Func Offset: 0x3c
	// Func End, Address: 0x10250ac, Func Offset: 0x4c
}

// 
// Start address: 0x10250b0
void vramadrset0(unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1797, Address: 0x10250b0, Func Offset: 0
	// Line 1798, Address: 0x10250c4, Func Offset: 0x14
	// Line 1800, Address: 0x10250e0, Func Offset: 0x30
	// Func End, Address: 0x10250f0, Func Offset: 0x40
}

// 
// Start address: 0x10250f0
void vramadrset2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1802, Address: 0x10250f0, Func Offset: 0
	// Line 1803, Address: 0x102510c, Func Offset: 0x1c
	// Line 1805, Address: 0x1025128, Func Offset: 0x38
	// Func End, Address: 0x1025138, Func Offset: 0x48
}

// 
// Start address: 0x1025140
void vramadrset99(unsigned short wH_posiw, unsigned short wV_posiw, unsigned short xOffs, unsigned short yOffs, tagPOINT* lpTilePoint)
{
	// Line 1807, Address: 0x1025140, Func Offset: 0
	// Line 1808, Address: 0x1025158, Func Offset: 0x18
	// Line 1809, Address: 0x1025168, Func Offset: 0x28
	// Line 1810, Address: 0x1025178, Func Offset: 0x38
	// Line 1811, Address: 0x1025184, Func Offset: 0x44
	// Line 1813, Address: 0x1025190, Func Offset: 0x50
	// Line 1814, Address: 0x10251bc, Func Offset: 0x7c
	// Line 1817, Address: 0x10251e8, Func Offset: 0xa8
	// Func End, Address: 0x10251f4, Func Offset: 0xb4
}

// 
// Start address: 0x1025200
void mapwrt()
{
	int VramBase;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned char* pMapWk;
	// Line 1833, Address: 0x1025200, Func Offset: 0
	// Line 1838, Address: 0x1025218, Func Offset: 0x18
	// Line 1839, Address: 0x1025224, Func Offset: 0x24
	// Line 1840, Address: 0x1025230, Func Offset: 0x30
	// Line 1841, Address: 0x1025238, Func Offset: 0x38
	// Line 1842, Address: 0x102523c, Func Offset: 0x3c
	// Line 1846, Address: 0x1025254, Func Offset: 0x54
	// Line 1847, Address: 0x102525c, Func Offset: 0x5c
	// Line 1848, Address: 0x1025260, Func Offset: 0x60
	// Line 1850, Address: 0x1025270, Func Offset: 0x70
	// Func End, Address: 0x1025290, Func Offset: 0x90
}

// 
// Start address: 0x1025290
void mapwrt2(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase)
{
	// Line 1853, Address: 0x1025290, Func Offset: 0
	// Line 1854, Address: 0x10252a8, Func Offset: 0x18
	// Line 1855, Address: 0x10252c8, Func Offset: 0x38
	// Func End, Address: 0x10252d8, Func Offset: 0x48
}

// 
// Start address: 0x10252e0
void mapwrt3(unsigned short wH_posiw, unsigned short wV_posiw, unsigned char* pMapWk, int VramBase, unsigned short wD4, unsigned short wD6)
{
	tagPOINT TilePoint;
	// Line 1860, Address: 0x10252e0, Func Offset: 0
	// Line 1864, Address: 0x1025300, Func Offset: 0x20
	// Line 1867, Address: 0x102531c, Func Offset: 0x3c
	// Line 1871, Address: 0x1025344, Func Offset: 0x64
	// Line 1872, Address: 0x1025350, Func Offset: 0x70
	// Line 1874, Address: 0x1025378, Func Offset: 0x98
	// Func End, Address: 0x1025388, Func Offset: 0xa8
}

// 
// Start address: 0x1025390
void mapwrt_z11a(unsigned char* pMapWk, int VramBase)
{
	unsigned short wD0;
	unsigned short wD4;
	unsigned short wD6;
	// Line 1880, Address: 0x1025390, Func Offset: 0
	// Line 1883, Address: 0x10253ac, Func Offset: 0x1c
	// Line 1884, Address: 0x10253b4, Func Offset: 0x24
	// Line 1887, Address: 0x10253bc, Func Offset: 0x2c
	// Line 1889, Address: 0x10253e0, Func Offset: 0x50
	// Line 1890, Address: 0x1025400, Func Offset: 0x70
	// Line 1891, Address: 0x1025408, Func Offset: 0x78
	// Line 1892, Address: 0x102542c, Func Offset: 0x9c
	// Func End, Address: 0x1025448, Func Offset: 0xb8
}

// 
// Start address: 0x1025450
void mapwrt_sub(unsigned char* pWrttbl, unsigned short wD0, unsigned short wD4, unsigned char* pMapWk, int VramBase)
{
	tagPOINT TilePoint;
	unsigned short wH_posiw;
	unsigned short wV_posiw;
	unsigned short wD5;
	// Line 1918, Address: 0x1025450, Func Offset: 0
	// Line 1923, Address: 0x1025478, Func Offset: 0x28
	// Line 1924, Address: 0x1025488, Func Offset: 0x38
	// Line 1926, Address: 0x10254a4, Func Offset: 0x54
	// Line 1927, Address: 0x10254c8, Func Offset: 0x78
	// Line 1928, Address: 0x10254f0, Func Offset: 0xa0
	// Line 1929, Address: 0x10254fc, Func Offset: 0xac
	// Line 1930, Address: 0x1025504, Func Offset: 0xb4
	// Line 1933, Address: 0x1025520, Func Offset: 0xd0
	// Line 1937, Address: 0x1025548, Func Offset: 0xf8
	// Line 1940, Address: 0x1025550, Func Offset: 0x100
	// Line 1941, Address: 0x1025554, Func Offset: 0x104
	// Line 1945, Address: 0x1025570, Func Offset: 0x120
	// Line 1952, Address: 0x1025598, Func Offset: 0x148
	// Func End, Address: 0x10255b4, Func Offset: 0x164
}

// 
// Start address: 0x10255c0
void mapinit()
{
	// Line 1963, Address: 0x10255c0, Func Offset: 0
	// Line 1965, Address: 0x10255c8, Func Offset: 0x8
	// Line 1966, Address: 0x10255dc, Func Offset: 0x1c
	// Line 1969, Address: 0x10255f0, Func Offset: 0x30
	// Line 1970, Address: 0x1025610, Func Offset: 0x50
	// Func End, Address: 0x1025620, Func Offset: 0x60
}

// 
// Start address: 0x1025620
void mapset()
{
	// Line 1975, Address: 0x1025620, Func Offset: 0
	// Func End, Address: 0x1025628, Func Offset: 0x8
}

// 
// Start address: 0x1025630
void divdevset()
{
	// Line 1979, Address: 0x1025630, Func Offset: 0
	// Func End, Address: 0x1025638, Func Offset: 0x8
}

// 
// Start address: 0x1025640
void enecginit()
{
	// Line 1983, Address: 0x1025640, Func Offset: 0
	// Func End, Address: 0x1025648, Func Offset: 0x8
}

